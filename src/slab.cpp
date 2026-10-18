/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: slab.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 31
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0d6760 (Ghidra: FUN_000d6760)
 * Prototype: int sub_0d6760(void);
 * Address  : 0xd6760 (Size: 1216 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d6c10) */

int FUN_000d6760(void)

{
  undefined2 uVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  byte *pbVar4;
  undefined2 in_DX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_4c;
  undefined1 local_40;
  uint local_20;
  int local_1c;
  
  local_20 = 0;
  local_4c = 0;
  local_1c = in_EAX;
  do {
    iVar10 = (*(int *)(&DAT_001926d6 + local_4c) >> 0x18) + in_ECX + 1;
    uVar8 = (*(int *)(&DAT_001926d5 + local_4c) >> 0x18) + unaff_EBX + 1;
    iVar3 = (iVar10 * 0x100 + uVar8) * 5;
    if ((*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3ff800) == 0) {
      uVar6 = local_20 & 0xff;
      if (((uVar6 != 4) &&
          (uVar6 = *(uint *)((int)&DAT_00279203 +
                            (((*(int *)(&DAT_001926d6 + uVar6 * 2) >> 0x18) + iVar10) * 0x100 +
                            (*(int *)(&DAT_001926d5 + uVar6 * 2) >> 0x18) + uVar8) * 5 + 1),
          (uVar6 & 0x3ff800) != 0)) && (local_1c < DAT_001b89b8 >> 0x10)) {
        for (iVar3 = (&DAT_001ae9fc)[(uVar6 & 0x3fffff) >> 0xb]; iVar3 != DAT_001ae9fc;
            iVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 2)]) {
          if ((*(char *)(iVar3 + 0x1f) == '\x01') || (*(char *)(iVar3 + 0x1f) == '\a')) {
            iVar5 = local_1c * 0xd;
            (&DAT_001b93f6)[iVar5] = *(undefined1 *)(iVar3 + 0x1f);
            (&DAT_001b93f7)[iVar5] = *(undefined1 *)(iVar3 + 0x1a);
            local_40 = (undefined1)((ushort)*(undefined2 *)(iVar3 + 0x13) >> 8);
            (&DAT_001b93f8)[iVar5] = local_40;
            (&DAT_001b93ef)[iVar5] = (undefined1)local_20;
            (&DAT_001b93ec)[iVar5] = 0;
            *(undefined2 *)(&DAT_001b93ed + iVar5) = in_DX;
            *(short *)(&DAT_001b93f0 + iVar5) = *(short *)(iVar3 + 0xd) + (short)uVar8 * -0x100;
            *(short *)(&DAT_001b93f2 + iVar5) = *(short *)(iVar3 + 0xf) + (short)iVar10 * -0x100;
            *(undefined2 *)(&DAT_001b93f4 + iVar5) = *(undefined2 *)(iVar3 + 0x11);
            bVar2 = true;
            goto LAB_000d6b9a;
          }
        }
      }
    }
    else if (local_1c < DAT_001b89b8 >> 0x10) {
      for (iVar3 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb];
          iVar3 != DAT_001ae9fc; iVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 2)]) {
        if ((*(char *)(iVar3 + 0x1f) == '\x01') || (*(char *)(iVar3 + 0x1f) == '\a')) {
          iVar5 = local_1c * 0xd;
          (&DAT_001b93f6)[iVar5] = *(undefined1 *)(iVar3 + 0x1f);
          (&DAT_001b93f7)[iVar5] = *(undefined1 *)(iVar3 + 0x1a);
          local_40 = (undefined1)((ushort)*(undefined2 *)(iVar3 + 0x13) >> 8);
          (&DAT_001b93f8)[iVar5] = local_40;
          (&DAT_001b93ef)[iVar5] = (undefined1)local_20;
          (&DAT_001b93ec)[iVar5] = 0;
          *(undefined2 *)(&DAT_001b93ed + iVar5) = in_DX;
          *(short *)(&DAT_001b93f0 + iVar5) = *(short *)(iVar3 + 0xd) + (short)uVar8 * -0x100;
          *(short *)(&DAT_001b93f2 + iVar5) = *(short *)(iVar3 + 0xf) + (short)iVar10 * -0x100;
          *(undefined2 *)(&DAT_001b93f4 + iVar5) = *(undefined2 *)(iVar3 + 0x11);
          bVar2 = true;
          goto LAB_000d6b9a;
        }
      }
    }
    bVar2 = false;
LAB_000d6b9a:
    if (bVar2) {
      local_1c = local_1c + 1;
    }
    pbVar4 = &DAT_001bd61b;
    do {
      if (DAT_001b89b8 >> 0x10 <= local_1c) goto LAB_000d6aed;
      if ((((*pbVar4 & 1) != 0) && (pbVar4[0x29] == uVar8)) &&
         (uVar6 = DAT_001aea00, CONCAT31((int3)(uVar8 >> 8),pbVar4[0x2b]) == iVar10)) {
        for (; uVar6 < DAT_001b09f8; uVar6 = uVar6 + 0x6b) {
          if ((*(short *)(uVar6 + 0x62) == *(short *)(pbVar4 + 0xe)) &&
             (*(char *)(uVar6 + 0x1f) != '\x0e')) goto LAB_000d69b5;
        }
        uVar6 = 0;
LAB_000d69b5:
        if (uVar6 == 0) {
          iVar3 = local_1c * 0xd;
          (&DAT_001b93ec)[iVar3] = 1;
          *(undefined2 *)(&DAT_001b93ed + iVar3) = in_DX;
          (&DAT_001b93ef)[iVar3] = (undefined1)local_20;
          *(short *)(&DAT_001b93f0 + iVar3) =
               (short)((uint)*(ushort *)(pbVar4 + 0x28) + uVar8 * -0x100);
          *(short *)(&DAT_001b93f2 + iVar3) =
               (short)((uint)*(ushort *)(pbVar4 + 0x2a) + iVar10 * -0x100);
          uVar1 = *(undefined2 *)(pbVar4 + 0x2c);
          (&DAT_001b93f6)[iVar3] = 0;
          *(undefined2 *)(&DAT_001b93f4 + iVar3) = uVar1;
          (&DAT_001b93f7)[iVar3] = pbVar4[2];
          (&DAT_001b93f8)[iVar3] = (char)((ushort)*(undefined2 *)(pbVar4 + 0x16) >> 8);
          bVar2 = true;
          goto LAB_000d6aef;
        }
      }
      pbVar4 = pbVar4 + 0x2e;
    } while (pbVar4 < &DAT_001c1dcd);
    uVar6 = local_20 & 0xff;
    if (uVar6 != 4) {
      pbVar4 = &DAT_001bd61b;
      uVar9 = uVar8 + (*(int *)(&DAT_001926d5 + uVar6 * 2) >> 0x18);
      do {
        if (DAT_001b89b8 >> 0x10 <= local_1c) break;
        if ((((*pbVar4 & 1) != 0) && (pbVar4[0x29] == uVar9)) &&
           (uVar7 = DAT_001aea00,
           CONCAT31((int3)(uVar9 >> 8),pbVar4[0x2b]) ==
           iVar10 + (*(int *)(&DAT_001926d6 + uVar6 * 2) >> 0x18))) {
          for (; uVar7 < DAT_001b09f8; uVar7 = uVar7 + 0x6b) {
            if ((*(short *)(uVar7 + 0x62) == *(short *)(pbVar4 + 0xe)) &&
               (*(char *)(uVar7 + 0x1f) != '\x0e')) goto LAB_000d6a8f;
          }
          uVar7 = 0;
LAB_000d6a8f:
          if (uVar7 == 0) {
            iVar3 = local_1c * 0xd;
            (&DAT_001b93ec)[iVar3] = 1;
            *(undefined2 *)(&DAT_001b93ed + iVar3) = in_DX;
            (&DAT_001b93ef)[iVar3] = (undefined1)local_20;
            *(short *)(&DAT_001b93f0 + iVar3) =
                 (short)((uint)*(ushort *)(pbVar4 + 0x28) + uVar8 * -0x100);
            *(short *)(&DAT_001b93f2 + iVar3) =
                 (short)((uint)*(ushort *)(pbVar4 + 0x2a) + iVar10 * -0x100);
            uVar1 = *(undefined2 *)(pbVar4 + 0x2c);
            (&DAT_001b93f6)[iVar3] = 0;
            *(undefined2 *)(&DAT_001b93f4 + iVar3) = uVar1;
            (&DAT_001b93f7)[iVar3] = pbVar4[2];
            (&DAT_001b93f8)[iVar3] = (char)((ushort)*(undefined2 *)(pbVar4 + 0x16) >> 8);
            bVar2 = true;
            goto LAB_000d6aef;
          }
        }
        pbVar4 = pbVar4 + 0x2e;
      } while (pbVar4 < &DAT_001c1dcd);
    }
LAB_000d6aed:
    bVar2 = false;
LAB_000d6aef:
    if (bVar2) {
      local_1c = local_1c + 1;
    }
    local_4c = local_4c + 2;
    local_20 = local_20 + 1;
    if (8 < local_20) {
      return local_1c;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_0d6c20 (Ghidra: FUN_000d6c20)
 * Prototype: uint sub_0d6c20(int param_1);
 * Address  : 0xd6c20 (Size: 550 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000d6c20(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 in_AX;
  uint uVar3;
  int in_ECX;
  byte in_DL;
  int unaff_EBX;
  undefined1 local_14;
  
  uVar3 = (unaff_EBX + in_ECX * 0x100) * 5;
  if ((*(uint *)((int)&DAT_00279203 + uVar3 + 1) & 0x3ff800) == 0) {
    uVar3 = (uint)in_DL;
    if (uVar3 != 4) {
      uVar3 = ((*(int *)(&DAT_001926d5 + uVar3 * 2) >> 0x18) + unaff_EBX +
              ((*(int *)(&DAT_001926d6 + uVar3 * 2) >> 0x18) + in_ECX) * 0x100) * 5;
      uVar2 = *(uint *)((int)&DAT_00279203 + uVar3 + 1);
      if (((uVar2 & 0x3ff800) != 0) && (param_1 < DAT_001b89b8 >> 0x10)) {
        uVar3 = (&DAT_001ae9fc)[(uVar2 & 0x3fffff) >> 0xb];
        if (uVar3 == DAT_001ae9fc) {
          return uVar3 & 0xffffff00;
        }
        do {
          if ((*(char *)(uVar3 + 0x1f) == '\x01') || (*(char *)(uVar3 + 0x1f) == '\a')) {
            param_1 = param_1 * 0xd;
            (&DAT_001b93f6)[param_1] = *(undefined1 *)(uVar3 + 0x1f);
            (&DAT_001b93f7)[param_1] = *(undefined1 *)(uVar3 + 0x1a);
            uVar1 = *(undefined2 *)(uVar3 + 0x13);
            (&DAT_001b93ec)[param_1] = 0;
            *(undefined2 *)(&DAT_001b93ed + param_1) = in_AX;
            local_14 = (undefined1)((ushort)uVar1 >> 8);
            (&DAT_001b93f8)[param_1] = local_14;
            (&DAT_001b93ef)[param_1] = in_DL;
            *(short *)(&DAT_001b93f0 + param_1) = *(short *)(uVar3 + 0xd) - (short)(unaff_EBX << 8);
            *(short *)(&DAT_001b93f2 + param_1) = *(short *)(uVar3 + 0xf) - (short)(in_ECX << 8);
            uVar1 = *(undefined2 *)(uVar3 + 0x11);
            *(undefined2 *)(&DAT_001b93f4 + param_1) = uVar1;
            return CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),uVar1) >> 8),1);
          }
          uVar3 = (&DAT_001ae9fc)[*(ushort *)(uVar3 + 2)];
        } while (uVar3 != DAT_001ae9fc);
      }
    }
  }
  else if (param_1 < DAT_001b89b8 >> 0x10) {
    for (uVar3 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + uVar3 + 1) & 0x3fffff) >> 0xb];
        uVar3 != DAT_001ae9fc; uVar3 = (&DAT_001ae9fc)[*(ushort *)(uVar3 + 2)]) {
      if ((*(char *)(uVar3 + 0x1f) == '\x01') || (*(char *)(uVar3 + 0x1f) == '\a')) {
        param_1 = param_1 * 0xd;
        (&DAT_001b93f6)[param_1] = *(undefined1 *)(uVar3 + 0x1f);
        (&DAT_001b93f7)[param_1] = *(undefined1 *)(uVar3 + 0x1a);
        uVar1 = *(undefined2 *)(uVar3 + 0x13);
        (&DAT_001b93ec)[param_1] = 0;
        local_14 = (undefined1)((ushort)uVar1 >> 8);
        (&DAT_001b93f8)[param_1] = local_14;
        (&DAT_001b93ef)[param_1] = in_DL;
        *(undefined2 *)(&DAT_001b93ed + param_1) = in_AX;
        *(short *)(&DAT_001b93f0 + param_1) = *(short *)(uVar3 + 0xd) - (short)(unaff_EBX << 8);
        *(short *)(&DAT_001b93f2 + param_1) = *(short *)(uVar3 + 0xf) - (short)(in_ECX << 8);
        uVar1 = *(undefined2 *)(uVar3 + 0x11);
        *(undefined2 *)(&DAT_001b93f4 + param_1) = uVar1;
        return CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),uVar1) >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}

/******************************************************************************
 * Function : sub_0d7090 (Ghidra: FUN_000d7090)
 * Prototype: void sub_0d7090(void);
 * Address  : 0xd7090 (Size: 469 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000d7090(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int local_54;
  int local_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_24 = 0;
  local_50 = 3;
  DAT_001b2e08 = 0x518;
  do {
    local_34 = local_24 * 0x12;
    local_2c = 3;
    iVar2 = local_50 * 0x500;
    do {
      psVar4 = (short *)((int)&DAT_001b2e0a + local_34);
      iVar6 = iVar2;
      iVar7 = iVar2 + 0xf;
      do {
        iVar3 = iVar6 + local_2c * 5;
        psVar5 = psVar4;
        do {
          iVar1 = iVar3 + 1;
          psVar4 = psVar5 + 1;
          iVar3 = iVar3 + 5;
          *psVar5 = -((ushort)*(undefined4 *)((int)&DAT_00279203 + iVar1) & 0x7ff);
          psVar5 = psVar4;
        } while (iVar3 != local_2c * 5 + iVar7);
        iVar6 = iVar6 + 0x500;
        iVar7 = iVar7 + 0x500;
      } while (iVar6 != iVar2 + 0xf00);
      local_34 = local_34 + 0x12;
      local_24 = local_24 + 1;
      local_2c = local_2c + 6;
    } while (local_2c != 0xab);
    local_50 = local_50 + 6;
  } while (local_50 != 0xff);
  local_54 = 3;
  do {
    local_30 = local_24 * 0x12;
    iVar2 = local_54 * 0x500;
    local_28 = 0xab;
    do {
      psVar4 = (short *)((int)&DAT_001b2e0a + local_30);
      iVar6 = iVar2;
      iVar7 = iVar2 + 0xf;
      do {
        iVar3 = iVar6 + local_28 * 5;
        psVar5 = psVar4;
        do {
          iVar1 = iVar3 + 1;
          psVar4 = psVar5 + 1;
          iVar3 = iVar3 + 5;
          *psVar5 = -((ushort)*(undefined4 *)((int)&DAT_00279203 + iVar1) & 0x7ff);
          psVar5 = psVar4;
        } while (iVar3 != local_28 * 5 + iVar7);
        iVar6 = iVar6 + 0x500;
        iVar7 = iVar7 + 0x500;
      } while (iVar6 != iVar2 + 0xf00);
      local_30 = local_30 + 0x12;
      local_24 = local_24 + 1;
      local_28 = local_28 + 6;
    } while (local_28 != 0xdb);
    local_54 = local_54 + 6;
  } while (local_54 != 99);
  return;
}

/******************************************************************************
 * Function : sub_0d72f8 (Ghidra: FUN_000d72f8)
 * Prototype: void sub_0d72f8(byte param_1);
 * Address  : 0xd72f8 (Size: 909 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:624
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xd8b7c
 * Callees  : 6 -> 0x14a68, 0x63122, 0xd8974, 0xd8cdc, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c73e: "slab.cpp"
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

void FUN_000d72f8(byte param_1)

{
  int iVar1;
  uint *puVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  byte in_CL;
  char cVar5;
  char cVar6;
  byte bVar7;
  int in_EDX;
  byte unaff_BL;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_3c [6];
  undefined4 local_24;
  char local_20 [4];
  char local_1c [4];
  byte local_18;
  byte local_14 [4];
  byte local_10;
  
  local_18 = *(byte *)(&DAT_0019033b + unaff_BL);
  local_14[0] = *(byte *)(&DAT_0019033b + in_CL);
  local_20[0] = local_18 * '\x03';
  local_1c[0] = local_14[0] * '\x03';
  local_3c[2] = in_EAX;
  if (0x517 < in_EDX) {
    FUN_000e7714(&DAT_0019cbac,s_x_Illegal_animating_slab_number__0016c71a + 2);
    FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 624, g_log_buf) */
  }
  uVar10 = (uint)local_14[0];
  uVar9 = (uint)local_18;
  (&DAT_002d33c9)[(uVar10 * 0x55 + uVar9) * 6] =
       (&DAT_002eb9b4)[(uint)*(ushort *)(&DAT_001921c4 + local_3c[2] * 0x16) * 2];
  FUN_000d8974();
  local_10 = param_1 & 7;
  iVar11 = 0;
  while( true ) {
    while( true ) {
      cVar5 = (char)iVar11;
      cVar6 = (char)((uint)iVar11 >> 8);
      if (2 < cVar5) break;
      iVar3 = ((&DAT_0019033b)[(int)cVar5 + uVar9 * 3] +
              (&DAT_0019033b)[(int)cVar6 + uVar10 * 3] * 0x55) * 6;
      (&DAT_002d33ca)[iVar3] = (&DAT_002d33ca)[iVar3] & 0xf8;
      iVar11 = CONCAT31((int3)((uint)iVar11 >> 8),cVar5 + '\x01');
      (&DAT_002d33ca)[iVar3] = (&DAT_002d33ca)[iVar3] | param_1 & 7;
    }
    bVar7 = cVar6 + 1;
    if ('\x02' < (char)bVar7) break;
    iVar11 = (uint)bVar7 << 8;
  }
  local_3c[3] = 0;
  local_3c[4] = 0;
  iVar11 = 0;
  local_24 = 0;
  puVar2 = local_3c + 1;
  while( true ) {
    do {
      puVar8 = puVar2;
      iVar3 = ((uint)(byte)puVar8[6] + iVar11 + ((uint)(byte)puVar8[7] + puVar8[2]) * 0x100) * 5;
      iVar4 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb];
      if ((&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb] !=
          DAT_001ae9fc) {
        do {
          iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar4 + 2)];
          bVar7 = *(byte *)((int)&DAT_0019e973 +
                           (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18 + 2) >> 4;
          if (((*(char *)(iVar4 + 0x1f) != '\x05') || (bVar7 < 5)) &&
             (*(char *)(iVar4 + 0x1a) != '\x02')) {
            *(ushort *)(iVar4 + 0x11) = (ushort)bVar7 << 8;
          }
          iVar4 = iVar1;
        } while (iVar1 != DAT_001ae9fc);
      }
      puVar8[-1] = (uint)((&DAT_002d33ca)
                          [((&DAT_0019033b)[(byte)puVar8[7]] * 0x55 +
                           (&DAT_0019033b)[(byte)puVar8[6]]) * 6] & 7);
      puVar8[-2] = (uint)(ushort)puVar8[5];
      puVar8[4] = (uint)(byte)puVar8[9] * 0x55;
      puVar8[-3] = 0xd7525;
      FUN_000d8cdc();
      iVar11 = iVar11 + 1;
      puVar8[3] = puVar8[3] + 1;
      puVar2 = puVar8 + -2;
    } while (iVar11 < 3);
    iVar11 = *puVar8;
    puVar8[1] = puVar8[1] + 3;
    *puVar8 = iVar11 + 1;
    if (2 < iVar11 + 1) break;
    iVar11 = 0;
    puVar8[3] = puVar8[1];
    puVar2 = puVar8 + -2;
  }
  (&DAT_002d33c5)[((uint)(byte)puVar8[7] * 0x55 + (uint)(byte)puVar8[6]) * 6] = (char)puVar8[-1];
  puVar8[-3] = 0xd7621;
  FUN_00063122();
  if ((puVar8[-1] == 0x33) || (puVar8[-1] == 0x35)) {
    puVar8[-3] = 0xd767c;
    FUN_00014a68();
  }
  return;
}

/******************************************************************************
 * Function : dk_attempt_place_animating_slab_0d7688 (Ghidra: FUN_000d7688)
 * Prototype: void dk_attempt_place_animating_slab_0d7688(char param_1);
 * Address  : 0xd7688 (Size: 1828 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:681 ("Attempt to place animating slab as standard slab")
 * Naming   : String 'Attempt to place animating slab as standard slab'
 * Callers  : 18 -> 0x14afe, 0x14c9a, 0x14d45, 0x14e9f, 0x15030, 0x22660, 0x24ab9, 0x48c77, 0x4a40c, 0x4aa26 ...
 * Callees  : 10 -> 0x14a68, 0x24998, 0x63122, 0x72af4, 0xb3788, 0xd7dac, 0xd9418, 0xd9dc0, 0xdafb0, 0xddaf0
 * Strings  :
 *   - 0x16c778: "slab.cpp"
 *   - 0x16c747: "Attempt to place animating slab as standard slab"
 ******************************************************************************/
void FUN_000d7688(char param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int in_EAX;
  int iVar6;
  byte in_CL;
  char cVar7;
  byte extraout_CL;
  char cVar8;
  byte bVar9;
  byte in_DL;
  int iVar10;
  byte unaff_BL;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  byte local_2c;
  byte local_28;
  
  bVar2 = *(byte *)(&DAT_0019033b + in_DL);
  bVar3 = *(byte *)(&DAT_0019033b + unaff_BL);
  if (in_EAX < 0x2a) {
    for (bVar11 = 0; uVar13 = (uint)bVar11, bVar11 < 8; bVar11 = bVar11 + 1) {
      iVar6 = (uint)bVar2 + (*(int *)((int)&DAT_001926c4 + uVar13 * 2 + 1) >> 0x18);
      iVar10 = (uint)bVar3 + (*(int *)((int)&DAT_001926c4 + uVar13 * 2 + 2) >> 0x18);
      if ((((-1 < iVar6) && (iVar6 < 0x55)) && (-1 < iVar10)) && (iVar10 < 0x55)) {
        (&DAT_001921b8)[uVar13] = (&DAT_002d33c5)[(iVar6 + iVar10 * 0x55) * 6];
      }
    }
    bVar11 = FUN_000d9418();
    (&DAT_002d33c5)[((uint)bVar3 * 0x55 + (uint)bVar2) * 6] = bVar11;
    iVar6 = 0;
    while( true ) {
      while( true ) {
        cVar7 = (char)iVar6;
        cVar8 = (char)((uint)iVar6 >> 8);
        if (2 < cVar7) break;
        iVar10 = ((&DAT_0019033b)[(int)cVar7 + (uint)bVar2 * 3] +
                 (&DAT_0019033b)[(int)cVar8 + (uint)bVar3 * 3] * 0x55) * 6;
        (&DAT_002d33ca)[iVar10] = (&DAT_002d33ca)[iVar10] & 0xf8;
        iVar6 = CONCAT31((int3)((uint)iVar6 >> 8),cVar7 + '\x01');
        (&DAT_002d33ca)[iVar10] = (&DAT_002d33ca)[iVar10] | in_CL & 7;
      }
      bVar9 = cVar8 + 1;
      if ('\x02' < (char)bVar9) break;
      iVar6 = (uint)bVar9 << 8;
    }
    FUN_000d7dac();
    FUN_000dafb0();
    if (((&DAT_001921cf)[(uint)bVar11 * 0x16] == '\x04') ||
       ((&DAT_001921cf)[(uint)bVar11 * 0x16] == '\x02')) {
      for (bVar11 = 0; bVar11 < 8; bVar11 = bVar11 + 1) {
        iVar6 = (int)(char)(bVar2 + *(char *)((int)&DAT_001926c8 + (uint)bVar11 * 2));
        if (((-1 < iVar6) && (iVar6 < 0x55)) &&
           ((iVar10 = (int)(char)(bVar3 + *(char *)((int)&DAT_001926c8 + (uint)bVar11 * 2 + 1)),
            -1 < iVar10 &&
            ((iVar10 < 0x55 &&
             (iVar6 = (iVar6 + iVar10 * 0x55) * 6, (&DAT_002d33c5)[iVar6] == '\x02')))))) {
          uVar4 = FUN_000d9dc0();
          (&DAT_002d33c5)[iVar6] = uVar4;
          bVar11 = extraout_CL;
        }
      }
    }
    else {
      for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
        iVar6 = (int)(char)(bVar2 + *(char *)((int)&DAT_001926c8 + (uint)local_2c * 2));
        if ((((-1 < iVar6) && (iVar6 < 0x55)) &&
            (iVar10 = (int)(char)(bVar3 + *(char *)((int)&DAT_001926c8 + (uint)local_2c * 2 + 1)),
            -1 < iVar10)) &&
           ((iVar10 < 0x55 &&
            (iVar6 = (iVar10 * 0x55 + iVar6) * 6, (char)(&DAT_002d33c5)[iVar6] < '*')))) {
          uVar4 = FUN_000d9418();
          (&DAT_002d33c5)[iVar6] = uVar4;
        }
      }
    }
    FUN_00063122();
    for (local_28 = 0; uVar13 = (uint)local_28, uVar13 < 8; local_28 = local_28 + 1) {
      iVar6 = (uint)bVar2 + (*(int *)((int)&DAT_001926c4 + uVar13 * 2 + 1) >> 0x18);
      iVar10 = (uint)bVar3 + (*(int *)((int)&DAT_001926c4 + uVar13 * 2 + 2) >> 0x18);
      if (((((-1 < iVar6) && (iVar6 < 0x55)) && ((-1 < iVar10 && (iVar10 < 0x55)))) &&
          ((uVar12 = (uint)(byte)(&DAT_002d33c5)[(iVar10 * 0x55 + iVar6) * 6],
           *(int *)((int)&DAT_001921b4 + uVar13 + 1) >> 0x18 != uVar12 ||
           (((uVar12 != 1 && (uVar12 != 0)) || (DAT_002ebaf6 == '\x01')))))) &&
         ((&DAT_001921cf)[uVar12 * 0x16] != '\x05')) {
        FUN_000d7dac();
      }
    }
    if (param_1 == '\0') {
      FUN_00014a68();
    }
    if (in_EAX == 2) {
      iVar6 = 0;
      do {
        uVar13 = (&DAT_001ae9fc)
                 [(*(uint *)((int)&DAT_00279203 +
                            ((*(int *)((int)&DAT_0018b624 + iVar6) >> 0x10) +
                            (uint)bVar2 * 3 + (uint)bVar3 * 0x300 + 0x101) * 5 + 1) & 0x3fffff) >>
                  0xb];
        if (DAT_001ae9fc < uVar13) {
          do {
            pcVar1 = (char *)(uVar13 + 0x1f);
            uVar13 = (&DAT_001ae9fc)[*(ushort *)(uVar13 + 2)];
            if (*pcVar1 == '\x01') {
              FUN_00072af4();
            }
          } while (DAT_001ae9fc < uVar13);
        }
        iVar6 = iVar6 + 2;
      } while (iVar6 != 0x12);
    }
    else if (in_EAX == 0xc) {
      iVar6 = (uint)bVar2 * 3 + (uint)bVar3 * 0x300 + 0x101;
      iVar10 = 0;
      sVar14 = ((ushort)iVar6 & 0xff) + 0x80;
      do {
        uVar13 = (&DAT_001ae9fc)
                 [(*(uint *)((int)&DAT_00279203 +
                            ((*(int *)((int)&DAT_0018b624 + iVar10) >> 0x10) + iVar6) * 5 + 1) &
                  0x3fffff) >> 0xb];
        if (DAT_001ae9fc <
            (&DAT_001ae9fc)
            [(*(uint *)((int)&DAT_00279203 +
                       ((*(int *)((int)&DAT_0018b624 + iVar10) >> 0x10) + iVar6) * 5 + 1) & 0x3fffff
             ) >> 0xb]) {
          do {
            uVar12 = (&DAT_001ae9fc)[*(ushort *)(uVar13 + 2)];
            if ((*(char *)(uVar13 + 0x1f) == '\x01') &&
               ((&DAT_0018b91b)[(uint)*(byte *)(uVar13 + 0x1a) * 0x16] != '\0')) {
              sVar15 = sVar14;
              uVar5 = FUN_000b3788(sVar14);
              FUN_00024998(sVar15,uVar5);
              FUN_00072af4();
            }
            uVar13 = uVar12;
          } while (DAT_001ae9fc < uVar12);
        }
        iVar10 = iVar10 + 2;
      } while (iVar10 != 0x12);
    }
    else if (in_EAX == 0xd) {
      iVar6 = (uint)bVar2 * 3 + (uint)bVar3 * 0x300 + 0x101;
      iVar10 = 0;
      sVar14 = (byte)iVar6 + 0x80;
      do {
        uVar13 = (&DAT_001ae9fc)
                 [(*(uint *)((int)&DAT_00279203 +
                            ((*(int *)((int)&DAT_0018b624 + iVar10) >> 0x10) + iVar6) * 5 + 1) &
                  0x3fffff) >> 0xb];
        if (DAT_001ae9fc <
            (&DAT_001ae9fc)
            [(*(uint *)((int)&DAT_00279203 +
                       ((*(int *)((int)&DAT_0018b624 + iVar10) >> 0x10) + iVar6) * 5 + 1) & 0x3fffff
             ) >> 0xb]) {
          do {
            uVar12 = (&DAT_001ae9fc)[*(ushort *)(uVar13 + 2)];
            if ((*(char *)(uVar13 + 0x1f) == '\x01') &&
               ((&DAT_0018b91b)[(uint)*(byte *)(uVar13 + 0x1a) * 0x16] != '\0')) {
              sVar15 = sVar14;
              uVar5 = FUN_000b3788(sVar14);
              FUN_00024998(sVar15,uVar5);
              FUN_00072af4();
            }
            uVar13 = uVar12;
          } while (DAT_001ae9fc < uVar12);
        }
        iVar10 = iVar10 + 2;
      } while (iVar10 != 0x12);
    }
  }
  else {
    FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 681, "Attempt to place animating slab as standard slab") */
  }
  return;
}

/******************************************************************************
 * Function : dk_illegal_special_case_0d7dac (Ghidra: FUN_000d7dac)
 * Prototype: void dk_illegal_special_case_0d7dac(void);
 * Address  : 0xd7dac (Size: 3014 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:1038 ("Illegal special case!!!")
 * Naming   : String 'Illegal special case!!!'
 * Callers  : 1 -> 0xd7688
 * Callees  : 6 -> 0xacce4, 0xd8974, 0xd8cdc, 0xd916c, 0xd9338, 0xddaf0
 * Strings  :
 *   - 0x16c799: "slab.cpp"
 *   - 0x16c781: "Illegal special case!!!"
 ******************************************************************************/
void FUN_000d7dac(void)

{
  char cVar1;
  uint3 uVar2;
  byte bVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int extraout_ECX;
  uint uVar9;
  byte in_DL;
  int extraout_EDX;
  byte unaff_BL;
  short sVar10;
  undefined2 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  ushort uVar18;
  uint uVar19;
  uint auStack_dc [3];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined2 local_bc [10];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 auStack_96 [6];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 auStack_82 [6];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  int local_6c;
  int local_68;
  uint local_64 [6];
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_38;
  uint local_34;
  byte local_30;
  byte local_2c;
  byte local_28;
  char local_24;
  byte local_20;
  byte local_1c [4];
  byte local_18;
  byte local_14;
  byte local_10;
  
  puVar13 = &local_d0;
  auStack_82._2_4_ = DAT_003d9530;
  uStack_7c = DAT_003d9534;
  uStack_78 = DAT_003d9538;
  uStack_74 = DAT_003d953c;
  uStack_70 = DAT_003d9540;
  auStack_96._2_4_ = DAT_003d9542;
  uStack_90 = DAT_003d9546;
  uStack_8c = DAT_003d954a;
  uStack_88 = DAT_003d954e;
  uStack_84 = DAT_003d9552;
  local_d0 = DAT_003d9554;
  uStack_cc = DAT_003d9558;
  uStack_c8 = DAT_003d955c;
  uStack_c4 = DAT_003d9560;
  uStack_c0 = DAT_003d9564;
  local_a8 = DAT_003d9566;
  uStack_a4 = DAT_003d956a;
  uStack_a0 = DAT_003d956e;
  uStack_9c = DAT_003d9572;
  uStack_98 = DAT_003d9576;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 2;
    *(short *)((int)&local_d0 + iVar5) = (short)in_EAX;
    iVar5 = iVar4;
  } while (iVar4 != 0x12);
  local_6c = in_EAX;
  local_20 = in_DL;
  local_18 = unaff_BL;
  if ((&DAT_001921cf)[in_EAX * 0x16] == '\x03') {
    local_64[0] = 0;
    local_38 = 0;
    local_34 = 0xffffffff;
    local_64[1] = 2;
    do {
      uVar15 = local_64[1];
      uVar16 = (uint)local_18;
      uVar7 = (uint)local_20;
      iVar5 = (*(int *)((int)&DAT_001926c4 + local_38 + 1) >> 0x18) + uVar7;
      iVar4 = (*(int *)((int)&DAT_001926c4 + local_38 + 2) >> 0x18) + uVar16;
      if ((((-1 < iVar5) && (iVar5 < 0x55)) && (-1 < iVar4)) &&
         (((iVar4 < 0x55 && (bVar3 = (&DAT_002d33c5)[(iVar5 + iVar4 * 0x55) * 6], bVar3 != 0x35)) &&
          (bVar3 != 0x33)))) {
        if ((bVar3 == (&DAT_002d33c5)
                      [((*(int *)((int)&DAT_001926c4 + (local_34 & 7) * 2 + 1) >> 0x18) + uVar7 +
                       ((*(int *)((int)&DAT_001926c4 + (local_34 & 7) * 2 + 2) >> 0x18) + uVar16) *
                       0x55) * 6]) &&
           (uVar6 = local_64[0] * 2 + 1 & 7,
           (&DAT_002d33c5)
           [((*(int *)((int)&DAT_001926c4 + (local_34 & 7) * 2 + 1) >> 0x18) + uVar7 +
            ((*(int *)((int)&DAT_001926c4 + (local_34 & 7) * 2 + 2) >> 0x18) + uVar16) * 0x55) * 6]
           == (&DAT_002d33c5)
              [((*(int *)((int)&DAT_001926c4 + uVar6 * 2 + 1) >> 0x18) + uVar7 +
               (uVar16 + (*(int *)((int)&DAT_001926c4 + uVar6 * 2 + 2) >> 0x18)) * 0x55) * 6])) {
          uVar17 = 9;
        }
        else {
          uVar17 = 0;
        }
        if ((&DAT_001921cf)[(uint)bVar3 * 0x16] == '\x04') {
          uVar7 = local_64[0] * 2 - 1;
          do {
            cVar1 = (&DAT_001926c0)[uVar7 & 7];
            uVar7 = uVar7 + 1;
            *(undefined2 *)((int)&local_a8 + (uint)(byte)(cVar1 + 4) * 2) = uVar17;
            *(ushort *)((int)&local_d0 + (uint)(byte)(cVar1 + 4) * 2) = bVar3 + 1;
          } while (uVar7 != uVar15);
        }
      }
      local_38 = local_38 + 4;
      local_34 = local_34 + 2;
      local_64[1] = local_64[1] + 2;
      local_64[0] = local_64[0] + 1;
    } while ((int)local_64[0] < 4);
  }
  uVar15 = (uint)local_20;
  FUN_000d916c();
  local_4c = extraout_ECX * 0x55 + uVar15;
  iVar5 = uVar15 * 3 + -1;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  local_48 = extraout_ECX * 3 + -1;
  if (local_48 < 0) {
    local_48 = 0;
  }
  local_44 = uVar15 * 3 + 4;
  if (0xff < local_44) {
    local_44 = 0xff;
  }
  iVar4 = extraout_ECX * 3 + 4;
  if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  puVar8 = &DAT_001bd5ed + DAT_002e6f0e * 0x2e;
  if (&DAT_001bd5ed < &DAT_001bd5ed + DAT_002e6f0e * 0x2e) {
    do {
      uVar18 = *(ushort *)(puVar8 + 0x26);
      if ((((*(int *)(puVar8 + 0x12) == local_4c) && (iVar5 <= (int)(uint)(byte)puVar8[0x29])) &&
          ((int)(uint)(byte)puVar8[0x29] <= (int)local_44)) &&
         ((local_48 <= (int)(uint)(byte)puVar8[0x2b] && ((int)(uint)(byte)puVar8[0x2b] <= iVar4))))
      {
        FUN_000acce4();
        iVar4 = extraout_EDX;
      }
      puVar8 = &DAT_001bd5ed + (uint)uVar18 * 0x2e;
    } while (&DAT_001bd5ed < &DAT_001bd5ed + (uint)uVar18 * 0x2e);
  }
  puVar11 = &DAT_001b2e0a + (local_6c * 0x1c + 0x1b) * 9;
  iVar5 = 0;
  do {
    iVar4 = iVar5 + 2;
    uVar17 = *puVar11;
    puVar11 = puVar11 + 1;
    *(undefined2 *)((int)local_bc + iVar5) = uVar17;
    iVar5 = iVar4;
  } while (iVar4 != 0x12);
  uVar15 = 2;
  local_64[0] = 0;
  do {
    uVar7 = (local_64[0] & 0xff) * 2 & 7;
    iVar4 = (*(int *)((int)&DAT_001926c4 + uVar7 * 2 + 1) >> 0x18) + (uint)local_20;
    iVar5 = (*(int *)((int)&DAT_001926c4 + uVar7 * 2 + 2) >> 0x18) + (uint)local_18;
    if (((iVar4 < 0) || (0x54 < iVar4)) || ((iVar5 < 0 || (0x54 < iVar5)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint3)(byte)(&DAT_001921ce)
                           [(uint)(byte)(&DAT_002d33c5)[(iVar4 + iVar5 * 0x55) * 6] * 0x16];
    }
    uVar7 = local_64[0] * 2 - 1;
    do {
      uVar6 = uVar7 & 7;
      uVar16 = (uint)uVar2;
      if ((int)(uint)uVar2 <=
          *(int *)(auStack_82 + (uint)(byte)((&DAT_001926c0)[uVar6] + 4) * 2) >> 0x10) {
        uVar16 = *(int *)(auStack_82 + (uint)(byte)((&DAT_001926c0)[uVar6] + 4) * 2) >> 0x10;
      }
      uVar7 = uVar7 + 1;
      *(short *)(auStack_82 + (uint)(byte)((&DAT_001926c0)[uVar6] + 4) * 2 + 2) = (short)uVar16;
    } while (uVar7 != uVar15);
    local_64[0] = local_64[0] + 1;
    uVar15 = uVar15 + 2;
  } while ((int)local_64[0] < 4);
  if ((local_6c == 5) || (local_6c == 3)) {
    if (local_6c == 3) {
      sVar10 = 2;
    }
    else {
      sVar10 = (short)local_6c + 4;
    }
    local_2c = local_20;
    local_10 = 0;
    uVar15 = (uint)local_20;
    local_28 = local_18;
    if ((uVar15 % 5 == 0) &&
       (local_24 = ((&DAT_002d33c5)[((local_18 - 1) * 0x55 + uVar15) * 6] == '\v') +
                   ((&DAT_002d33c5)[((local_18 + 1) * 0x55 + uVar15) * 6] == '\v'), local_24 != '\0'
       )) {
      local_10 = 1;
    }
    if (((int)((ulonglong)(longlong)(int)(uint)local_18 % 5) == 0) &&
       (iVar5 = (uint)local_18 * 0x55 + (uint)local_20,
       (char)(((&DAT_002d33c5)[(iVar5 + -1) * 6] == '\v') +
             ((&DAT_002d33c5)[(iVar5 + 1) * 6] == '\v')) != '\0')) {
      local_10 = local_10 | 2;
    }
    local_64[5] = (uint)local_10;
    if (local_64[5] != 0) {
      if ((local_10 & 1) == 0) {
        if ((local_10 & 2) != 0) {
          local_d0 = CONCAT22(sVar10,(undefined2)local_d0);
          uStack_c4 = CONCAT22(sVar10,(undefined2)uStack_c4);
          if ((local_18 + local_20 & 1) == 0) {
            uStack_c8 = CONCAT22(sVar10,(undefined2)uStack_c8);
          }
          else {
            uStack_cc = CONCAT22(sVar10,(undefined2)uStack_cc);
          }
        }
      }
      else {
        uStack_cc = CONCAT22(sVar10,(undefined2)uStack_cc);
        uStack_c8 = CONCAT22(sVar10,(undefined2)uStack_c8);
        if ((local_18 + local_20 & 1) == 0) {
          uStack_c4 = CONCAT22(sVar10,(undefined2)uStack_c4);
        }
        else {
          local_d0 = CONCAT22(sVar10,(undefined2)local_d0);
        }
      }
    }
  }
  iVar5 = 0;
  local_30 = 0;
  do {
    local_30 = local_30 * '\x02';
    bVar3 = FUN_000d9338();
    local_30 = local_30 | bVar3;
    iVar5 = iVar5 + 2;
  } while (iVar5 != 8);
  uVar15 = (uint)local_30;
  if (uVar15 == 0) {
    if ((&DAT_001921cf)[local_6c * 0x16] == '\x04') {
      iVar5 = 1;
      do {
        local_30 = local_30 * '\x02';
        bVar3 = FUN_000d9338();
        local_30 = local_30 | bVar3;
        iVar5 = iVar5 + 2;
      } while (iVar5 != 9);
      if (local_30 == 0) {
        iVar5 = 0;
        do {
          *(short *)(auStack_96 + iVar5 + 2) = *(short *)((int)&local_d0 + iVar5) * 0x1c + 0x1b;
          iVar4 = iVar5 + 2;
          *(undefined2 *)((int)local_bc + iVar5) =
               *(undefined2 *)(iVar4 + (*(int *)(auStack_96 + iVar5) >> 0x10) * 0x12 + 0x1b2e08);
          iVar5 = iVar4;
        } while (iVar4 != 0x12);
      }
      else {
        pcVar12 = &DAT_00192732;
        iVar5 = 0;
        do {
          *(short *)(auStack_96 + iVar5 + 2) =
               *(short *)((int)&local_d0 + iVar5) * 0x1c + (short)*pcVar12 +
               *(short *)(auStack_82 + iVar5 + 2) * 9;
          iVar4 = iVar5 + 2;
          pcVar12 = pcVar12 + 1;
          *(undefined2 *)((int)local_bc + iVar5) =
               *(undefined2 *)(iVar4 + (*(int *)(auStack_96 + iVar5) >> 0x10) * 0x12 + 0x1b2e08);
          iVar5 = iVar4;
        } while (iVar4 != 0x12);
      }
    }
    else {
      iVar5 = 0;
      do {
        *(short *)(auStack_96 + iVar5 + 2) = *(short *)((int)&local_d0 + iVar5) * 0x1c + 0x1b;
        iVar4 = iVar5 + 2;
        *(undefined2 *)((int)local_bc + iVar5) =
             *(undefined2 *)(iVar4 + (*(int *)(auStack_96 + iVar5) >> 0x10) * 0x12 + 0x1b2e08);
        iVar5 = iVar4;
      } while (iVar4 != 0x12);
    }
  }
  else {
    cVar1 = (&DAT_001926ec)[uVar15];
    if (cVar1 == -1) {
      pcVar12 = *(char **)(&DAT_0019273c + uVar15 * 4);
      if (pcVar12 == (char *)0x0) {
        FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1038, "Illegal special case!!!") */
      }
      else {
        iVar5 = 0;
        do {
          sVar10 = *(short *)((int)&local_d0 + iVar5) * 0x1c + (short)*pcVar12 +
                   *(short *)(auStack_82 + iVar5 + 2) * 9 + *(short *)((int)&local_a8 + iVar5);
          iVar4 = iVar5 + 2;
          *(short *)(auStack_96 + iVar5 + 2) = sVar10;
          pcVar12 = pcVar12 + 1;
          *(undefined2 *)((int)local_bc + iVar5) = *(undefined2 *)(iVar4 + sVar10 * 0x12 + 0x1b2e08)
          ;
          iVar5 = iVar4;
        } while (iVar4 != 0x12);
      }
    }
    else {
      iVar5 = 0;
      do {
        sVar10 = *(short *)((int)&local_d0 + iVar5) * 0x1c + (short)cVar1 +
                 *(short *)(auStack_82 + iVar5 + 2) * 9 + *(short *)((int)&local_a8 + iVar5);
        iVar4 = iVar5 + 2;
        *(short *)(auStack_96 + iVar5 + 2) = sVar10;
        *(undefined2 *)((int)local_bc + iVar5) = *(undefined2 *)(iVar4 + sVar10 * 0x12 + 0x1b2e08);
        iVar5 = iVar4;
      } while (iVar4 != 0x12);
    }
  }
  if ((&DAT_001921cf)[local_6c * 0x16] == '\x03') {
    uVar15 = 0xffffffff;
    local_64[0] = 0;
    uVar7 = 0xfffffffe;
    do {
      local_40 = local_64[0] * 2;
      uVar16 = (uint)local_18;
      uVar9 = (uint)local_20;
      uVar19 = local_64[0] * 2 & 7;
      local_14 = (&DAT_002d33c5)
                 [((*(int *)((int)&DAT_001926c4 + uVar19 * 2 + 1) >> 0x18) + uVar9 +
                  (uVar16 + (*(int *)((int)&DAT_001926c4 + uVar19 * 2 + 2) >> 0x18)) * 0x55) * 6];
      uVar6 = (uint)(byte)(&DAT_002d33c5)
                          [(((*(int *)((int)&DAT_001926c4 + (uVar15 & 7) * 2 + 2) >> 0x18) + uVar16)
                            * 0x55 + (*(int *)((int)&DAT_001926c4 + (uVar15 & 7) * 2 + 1) >> 0x18) +
                                     uVar9) * 6];
      cVar1 = (&DAT_001921cf)[uVar6 * 0x16];
      if (((((cVar1 == '\x02') || (cVar1 == '\x04')) || (cVar1 == '\x05')) ||
          ((uVar6 == 0xd || (uVar6 == 0xc)))) &&
         (((&DAT_001921cf)
           [(uint)(byte)(&DAT_002d33c5)
                        [((*(int *)((int)&DAT_001926c4 + (uVar7 & 7) * 2 + 1) >> 0x18) + uVar9 +
                         ((*(int *)((int)&DAT_001926c4 + (uVar7 & 7) * 2 + 2) >> 0x18) + uVar16) *
                         0x55) * 6] * 0x16] == '\x03' &&
          ((&DAT_001921cf)
           [(uint)(byte)(&DAT_002d33c5)
                        [((*(int *)((int)&DAT_001926c4 + uVar19 * 2 + 1) >> 0x18) + uVar9 +
                         (uVar16 + (*(int *)((int)&DAT_001926c4 + uVar19 * 2 + 2) >> 0x18)) * 0x55)
                         * 6] * 0x16] == '\x03')))) {
        iVar5 = *(int *)((uVar15 & 7) + 0x1926bd) >> 0x18;
        *(undefined2 *)((int)&uStack_c8 + iVar5 * 2) = 6;
        sVar10 = *(short *)((int)&uStack_78 + iVar5 * 2) * 9 + 0xb0 +
                 *(short *)((int)&uStack_a0 + iVar5 * 2);
        *(short *)((int)&uStack_8c + iVar5 * 2) = sVar10;
        local_bc[iVar5 + 4] = (&DAT_001b2e0a)[sVar10 * 9 + iVar5 + 4];
      }
      uVar7 = uVar7 + 2;
      local_64[0] = local_64[0] + 1;
      uVar15 = uVar15 + 2;
    } while ((int)local_64[0] < 4);
  }
  local_40 = (uint)local_18 * 0x55 + (uint)local_20;
  (&DAT_002d33c9)[local_40 * 6] =
       (&DAT_002eb9b4)[(uint)*(ushort *)(&DAT_001921c4 + local_6c * 0x16) * 2];
  FUN_000d8974();
  local_64[5] = local_40;
  local_68 = (uint)local_20 * 3;
  local_64[3] = (uint)local_18 * 3;
  uVar18 = 0;
  local_64[4] = local_64[3] + 3;
  do {
    iVar5 = *(int *)((int)puVar13 + 0x68);
    *(undefined4 *)((int)puVar13 + 0x94) = *(undefined4 *)((int)puVar13 + 0x78);
    *(int *)((int)puVar13 + 0x74) = iVar5 + 3;
    puVar8 = (undefined1 *)puVar13;
    do {
      puVar14 = puVar8;
      *(uint *)(puVar14 + -4) = (uint)(byte)puVar14[0xb4];
      puVar13 = (undefined4 *)(puVar14 + -8);
      *(uint *)(puVar14 + -8) = (uint)uVar18;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(puVar14 + -0xc) = 0xd895d;
      FUN_000d8cdc();
      uVar18 = uVar18 + 1;
      puVar8 = puVar14 + -8;
    } while (iVar5 != *(int *)(puVar14 + 0x6c));
    iVar5 = *(int *)(puVar14 + 0x70);
    *(int *)(puVar14 + 0x70) = iVar5 + 1;
  } while (iVar5 + 1 != *(int *)(puVar14 + 0x74));
  return;
}

/******************************************************************************
 * Function : sub_0d8974 (Ghidra: FUN_000d8974)
 * Prototype: void sub_0d8974(void);
 * Address  : 0xd8974 (Size: 519 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:1811 ("BBlocks")
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xd72f8, 0xd7dac
 * Callees  : 3 -> 0x4c1e3, 0xda4b8, 0xddaf0
 * Strings  :
 *   - 0x16c7aa: "slab.cpp"
 *   - 0x16c7a2: "BBlocks"
 ******************************************************************************/
void FUN_000d8974(void)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  short *in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar5;
  byte in_DL;
  int iVar6;
  byte unaff_BL;
  int local_20;
  
  if ((&DAT_001921d5)[in_EAX * 0x16] != '\x03') {
    iVar6 = (&DAT_0019033b)[in_DL] + (&DAT_0019033b)[unaff_BL] * 0x55;
    uVar4 = (CONCAT11((&DAT_002d33ca)[iVar6 * 6],(&DAT_001921d5)[in_EAX * 0x16]) & 0xff03) &
            0xffffe7ff;
    bVar3 = (byte)(uVar4 >> 8);
    (&DAT_002d33ca)[iVar6 * 6] = bVar3;
    (&DAT_002d33ca)[iVar6 * 6] = bVar3 | (char)uVar4 << 3;
  }
  local_20 = 0;
  iVar6 = in_EAX * 0x16;
  do {
    FUN_0004c1e3();
    bVar3 = *(byte *)((int)&DAT_00279203 +
                     ((uint)in_DL + extraout_ECX_00 + ((uint)unaff_BL + local_20) * 0x100) * 5) &
            0x84;
    uVar1 = *(ushort *)(&DAT_001921c2 + iVar6);
    sVar2 = *in_ECX;
    iVar5 = extraout_ECX_00;
    if (-(int)sVar2 < 0) {
      FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1811, "BBlocks") */
      iVar5 = extraout_ECX_01;
    }
    for (uVar4 = (uint)*(byte *)((int)&DAT_0019e973 + sVar2 * -0x18 + 3) << 8;
        ((uVar4 & 0xff) < 8 && ((uVar4 & 0x100) != 0));
        uVar4 = (uint)CONCAT11((byte)(uVar4 >> 8) >> 1,(char)uVar4 + '\x01')) {
    }
    if ((uint)uVar1 < (uVar4 & 0xff)) {
      *(byte *)((int)&DAT_00279203 + ((uint)in_DL + iVar5 + (local_20 + (uint)unaff_BL) * 0x100) * 5
               ) = (&DAT_001921c6)[iVar6] | bVar3;
    }
    else {
      *(byte *)((int)&DAT_00279203 + (((uint)unaff_BL + local_20) * 0x100 + (uint)in_DL + iVar5) * 5
               ) = (&DAT_001921ca)[iVar6] | bVar3;
    }
    FUN_000da4b8();
    in_ECX = in_ECX + 1;
  } while ((extraout_ECX + 1 < 3) || (local_20 = local_20 + 1, local_20 < 3));
  return;
}

/******************************************************************************
 * Function : dk_attempt_dump_an_animating_0d8b7c (Ghidra: FUN_000d8b7c)
 * Prototype: void dk_attempt_dump_an_animating_0d8b7c(byte param_1);
 * Address  : 0xd8b7c (Size: 351 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:1256
 * Naming   : String 'Attempt to dump an invalid animating slab: %d'
 * Callers  : 5 -> 0x22933, 0x229e4, 0x23042, 0x449a4, 0xcae40
 * Callees  : 6 -> 0xd72f8, 0xd916c, 0xda4b8, 0xdafb0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c7e1: "slab.cpp"
 *   - 0x16c7b3: "Attempt to dump an invalid animating slab: %d"
 ******************************************************************************/
void FUN_000d8b7c(byte param_1)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint in_ECX;
  int extraout_ECX;
  int iVar4;
  uint unaff_EBX;
  int iVar5;
  
  iVar1 = (&DAT_0019033b)[unaff_EBX & 0xff];
  if (in_EAX < 0x2a) {
    FUN_000e7714(&DAT_0019cbac,s_Attempt_to_dump_an_invalid_anima_0016c7b3);
    FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1256, g_log_buf) */
    FUN_000d72f8(DAT_002eb543);
  }
  else {
    FUN_000d916c((&DAT_0019033b)[in_ECX & 0xff]);
    uVar2 = (uint)param_1;
    FUN_000d72f8();
    iVar5 = 0;
    FUN_000dafb0();
    do {
      iVar3 = (*(int *)((int)&DAT_001926c4 + iVar5 + 1) >> 0x18) + iVar1;
      iVar4 = (*(int *)((int)&DAT_001926c4 + iVar5 + 2) >> 0x18) + uVar2;
      if ((((-1 < iVar3) && (iVar3 < 0x55)) && (-1 < iVar4)) && (iVar4 < 0x55)) {
        iVar3 = 0;
        do {
          do {
            FUN_000da4b8();
          } while (extraout_ECX + 1 < 3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 3);
      }
      iVar5 = iVar5 + 2;
    } while (iVar5 != 0x10);
  }
  return;
}

/******************************************************************************
 * Function : dk_illegal_animating_slab_number_0d8cdc (Ghidra: FUN_000d8cdc)
 * Prototype: void dk_illegal_animating_slab_number_0d8cdc(void);
 * Address  : 0xd8cdc (Size: 1167 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:1295; slab.cpp:1350; slab.cpp:1359; slab.cpp:1365; slab.cpp:1385 ("Cannot create light")
 * Naming   : String 'Illegal animating slab number: %d'
 * Callers  : 2 -> 0xd72f8, 0xd7dac
 * Callees  : 6 -> 0x43f07, 0x44ca6, 0xacaf8, 0xddaf0, 0xe6a10, 0xe7714
 * Strings  :
 *   - 0x16c80c: "slab.cpp"
 *   - 0x16c832: "slab.cpp"
 *   - 0x16c85b: "slab.cpp"
 *   - 0x16c87a: "slab.cpp"
 *   - 0x16c897: "slab.cpp"
 *   - 0x16c7ea: "Illegal animating slab number: %d"
 *   - 0x16c815: "Cannot create object type %d"
 *   - 0x16c83b: "Cannot effect generator type %d"
 *   - 0x16c864: "Stupid thing class %d"
 *   - 0x16c883: "Cannot create light"
 ******************************************************************************/
void FUN_000d8cdc(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort in_CX;
  int extraout_ECX;
  int in_EDX;
  uint uVar7;
  int unaff_EBX;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  undefined4 auStackY_60 [2];
  short local_4c;
  undefined1 local_4a [8];
  short local_42 [3];
  undefined1 local_3b [3];
  undefined2 local_38;
  undefined2 uStack_36;
  short local_34 [2];
  int local_30 [6];
  ushort local_18;
  undefined1 auStack_16 [6];
  undefined4 local_10;
  
  auStack_16._2_2_ = *(undefined2 *)(&DAT_001b89bc + (uint)in_CX * 2);
  FUN_000e6a10();
  if (0x517 < extraout_ECX) {
    FUN_000e7714(&DAT_0019cbac,s_Illegal_animating_slab_number____0016c7ea,extraout_ECX);
    FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1295, g_log_buf) */
  }
  if ((auStack_16._2_2_ != -1) && (auStack_16._2_2_ != DAT_001b89b8._2_2_)) {
    local_30[3] = in_EDX / 3;
    iVar3 = unaff_EBX / 3;
    local_30[5] = in_EDX << 8;
    local_30[4] = unaff_EBX << 8;
    psVar8 = &local_4c;
    while ((short)*(undefined4 *)(psVar8 + 0x1c) < DAT_001b89b8._2_2_) {
      iVar4 = (*(int *)(psVar8 + 0x1b) >> 0x10) * 0xd;
      if ((short)*(undefined4 *)(psVar8 + 0x1e) != *(short *)(&DAT_001b93ed + iVar4)) {
        return;
      }
      psVar9 = psVar8;
      if ((ushort)(byte)(&DAT_001b93ef)[iVar4] == psVar8[0x28]) {
        psVar8[10] = (short)*(undefined4 *)(psVar8 + 0x18) + *(short *)(&DAT_001b93f0 + iVar4);
        psVar8[0xb] = (short)(*(int *)(psVar8 + 0x16) + (uint)*(ushort *)(&DAT_001b93f2 + iVar4));
        psVar8[0xc] = *(short *)(&DAT_001b93f4 + iVar4);
        if ((*(byte *)((int)&DAT_00279203 +
                      ((uint)*(byte *)((int)psVar8 + 0x17) * 0x100 +
                      (uint)*(byte *)((int)psVar8 + 0x15)) * 5) & 0x10) != 0) goto LAB_000d8e13;
        if ((&DAT_001b93ec)[iVar4] == '\0') {
          if ((&DAT_001b93f6)[iVar4] == '\x01') {
            bVar1 = (&DAT_001b93f7)[iVar4];
            if (bVar1 < 0x6f) {
LAB_000d8e57:
              uVar10 = (uint)(byte)(&DAT_001b93f7)[iVar4];
            }
            else if (bVar1 < 0x70) {
              uVar10 = *(uint *)(&DAT_001912ce + (uint)*(byte *)(psVar8 + 0x2a) * 4);
            }
            else {
              if (bVar1 != 0x73) goto LAB_000d8e57;
              uVar10 = *(uint *)(&DAT_001912b6 + (uint)*(byte *)(psVar8 + 0x2a) * 4);
            }
            if (uVar10 == 0) goto LAB_000d8e13;
            if ((uVar10 == 0x1b) && (psVar8[0x28] != 4)) {
              bVar1 = *(byte *)(psVar8 + 0x28);
              *(int *)(psVar8 + 0xe) = iVar3;
              *(undefined4 *)(psVar8 + 0x10) = *(undefined4 *)(psVar8 + 0x14);
              uVar5 = 0;
              if ((bVar1 & 1) == 0) {
                bVar1 = (&DAT_0019277c)[bVar1];
                uVar7 = (uint)bVar1;
                if (uVar7 != 0xffffffff) {
                  iVar6 = (*(int *)((int)&DAT_001926c4 + uVar7 * 2 + 1) >> 0x18) +
                          *(int *)(psVar8 + 0x14);
                  iVar4 = (*(int *)((int)&DAT_001926c4 + uVar7 * 2 + 2) >> 0x18) + iVar3;
                  *(int *)(psVar8 + 0x12) = iVar4;
                  if (((&DAT_001921c6)
                       [(uint)(byte)(&DAT_002d33c5)[(iVar4 * 0x55 + iVar6) * 6] * 0x16] & 0x29) != 0
                     ) {
                    uVar5 = 0x100;
                  }
                  if ((&DAT_002d33c5)[(iVar6 + *(int *)(psVar8 + 0x12) * 0x55) * 6] == '\x14') {
                    uVar5 = CONCAT31((int3)(uVar5 >> 8),1);
                  }
                  uVar7 = (uint)(bVar1 + 2 & 7);
                  iVar4 = (*(int *)((int)&DAT_001926c4 + uVar7 * 2 + 2) >> 0x18) +
                          *(int *)(psVar8 + 0xe);
                  iVar6 = (*(int *)((int)&DAT_001926c4 + uVar7 * 2 + 1) >> 0x18) +
                          *(int *)(psVar8 + 0x10);
                  if (((&DAT_001921c6)
                       [(uint)(byte)(&DAT_002d33c5)[(iVar4 * 0x55 + iVar6) * 6] * 0x16] & 0x29) != 0
                     ) {
                    uVar5 = (uint)CONCAT11((char)(uVar5 >> 8) + '\x01',(char)uVar5);
                  }
                  if ((&DAT_002d33c5)[(iVar4 * 0x55 + iVar6) * 6] == '\x14') {
                    uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + '\x01');
                  }
                }
                bVar2 = (uVar5 >> 8) + (uVar5 & 0xff) < 2;
              }
              else if (((&DAT_001921c6)
                        [(uint)(byte)(&DAT_002d33c5)
                                     [((*(int *)(&DAT_001926d5 + (uint)bVar1 * 2) >> 0x18) +
                                       *(int *)(psVar8 + 0x14) +
                                      ((*(int *)(&DAT_001926d6 + (uint)bVar1 * 2) >> 0x18) + iVar3)
                                      * 0x55) * 6] * 0x16] & 0x29) == 0) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (!bVar2) goto LAB_000d8e13;
            }
            psVar8[-0xffffffff00000002] = -0x7010;
            psVar8[-0xffffffff00000001] = 0xd;
            iVar4 = FUN_00043f07();
            if (iVar4 != 0) goto LAB_000d8e13;
            *(uint *)(psVar8 + -2) = uVar10;
            *(char **)(psVar8 + -4) = s_Cannot_create_object_type__d_0016c815;
            *(undefined1 **)(psVar8 + -6) = &DAT_0019cbac;
            psVar8[-0xffffffff00000008] = -0x6ff3;
            psVar8[-0xffffffff00000007] = 0xd;
            FUN_000e7714();
            psVar8[-0xffffffff00000002] = -0x6fe1;
            psVar8[-0xffffffff00000001] = 0xd;
            FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1350, g_log_buf) */
            psVar8[0x1c] = psVar8[0x1c] + 1;
          }
          else if ((&DAT_001b93f6)[iVar4] == '\a') {
            *(uint *)(psVar8 + -2) = (uint)(ushort)psVar8[0x1a];
            psVar8[-0xffffffff00000004] = -0x6fa9;
            psVar8[-0xffffffff00000003] = 0xd;
            iVar6 = FUN_00044ca6();
            psVar9 = psVar8 + -2;
            if (iVar6 != 0) goto LAB_000d8e13;
            *(uint *)(psVar8 + -4) = (uint)(byte)(&DAT_001b93f7)[iVar4];
            *(char **)(psVar8 + -6) = s_Cannot_effect_generator_type__d_0016c83b;
            *(undefined1 **)(psVar8 + -8) = &DAT_0019cbac;
            psVar8[-0xffffffff0000000a] = -0x6f89;
            psVar8[-0xffffffff00000009] = 0xd;
            FUN_000e7714();
            psVar8[-0xffffffff00000004] = -0x6f77;
            psVar8[-0xffffffff00000003] = 0xd;
            FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1359, g_log_buf) */
            psVar8[0x1a] = psVar8[0x1a] + 1;
            psVar8 = psVar8 + -2;
          }
          else {
            psVar8[-0xffffffff00000002] = 0;
            psVar8[-0xffffffff00000001] = 0;
            *(char **)(psVar8 + -4) = s_Stupid_thing_class__d_0016c864;
            *(undefined1 **)(psVar8 + -6) = &DAT_0019cbac;
            psVar8[-0xffffffff00000008] = -0x6f53;
            psVar8[-0xffffffff00000007] = 0xd;
            FUN_000e7714();
            psVar8[-0xffffffff00000002] = -0x6f41;
            psVar8[-0xffffffff00000001] = 0xd;
            FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1365, g_log_buf) */
            psVar8[0x1c] = psVar8[0x1c] + 1;
          }
        }
        else if ((&DAT_001b93ec)[iVar4] == '\x01') {
          *(undefined *)(psVar8 + 1) = (&DAT_001b93f7)[iVar4];
          *psVar8 = (ushort)(byte)(&DAT_001b93f8)[iVar4] << 8;
          psVar8[5] = (short)*(undefined4 *)(psVar8 + 10);
          psVar8[6] = (short)*(undefined4 *)(psVar8 + 0xb);
          *(undefined1 *)((int)psVar8 + 3) = 0;
          psVar8[7] = (short)*(undefined4 *)(psVar8 + 0xc);
          *(undefined1 *)((int)psVar8 + 0x11) = 0;
          psVar8[-0xffffffff00000002] = -0x6ef8;
          psVar8[-0xffffffff00000001] = 0xd;
          iVar4 = FUN_000acaf8();
          if (iVar4 * 0x2e == -0x1bd5ed) {
            psVar8[-0xffffffff00000002] = -0x6ec4;
            psVar8[-0xffffffff00000001] = 0xd;
            FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 1385, "Cannot create light") */
            psVar8[0x1c] = psVar8[0x1c] + 1;
          }
          else {
            *(uint *)(&DAT_001bd5ff + iVar4 * 0x2e) = (uint)(ushort)psVar8[0x1a];
            psVar8[0x1c] = psVar8[0x1c] + 1;
          }
        }
        else {
          psVar8[0x1c] = psVar8[0x1c] + 1;
        }
      }
      else {
LAB_000d8e13:
        *(short *)((int)psVar9 + 0x38) = *(short *)((int)psVar9 + 0x38) + 1;
        psVar8 = psVar9;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0d916c (Ghidra: FUN_000d916c)
 * Prototype: void sub_0d916c(void);
 * Address  : 0xd916c (Size: 255 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xd7dac, 0xd8b7c
 * Callees  : 1 -> 0x72af4
 ******************************************************************************/
void FUN_000d916c(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  int in_EDX;
  int iVar4;
  int local_1c;
  
  uVar3 = in_EDX * 0x55 + in_EAX;
  local_1c = in_EDX * 3 + -1;
  do {
    iVar4 = in_EAX * 3 + -1;
    do {
      if ((((-1 < iVar4) && (-1 < local_1c)) && (iVar4 < 0x100)) &&
         ((local_1c < 0x100 &&
          (iVar2 = (&DAT_001ae9fc)
                   [(*(uint *)((int)&DAT_00279203 + (local_1c * 0x100 + iVar4) * 5 + 1) & 0x3fffff)
                    >> 0xb],
          (&DAT_001ae9fc)
          [(*(uint *)((int)&DAT_00279203 + (local_1c * 0x100 + iVar4) * 5 + 1) & 0x3fffff) >> 0xb]
          != DAT_001ae9fc)))) {
        do {
          iVar1 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 2)];
          if ((*(ushort *)(iVar2 + 0x1d) == uVar3) &&
             (((iVar2 = CONCAT31((uint3)(byte)(*(ushort *)(iVar2 + 0x1d) >> 8) ^ (uint3)(uVar3 >> 8)
                                 ,*(undefined1 *)(iVar2 + 0x1f)), iVar2 == 1 || (iVar2 == 7)) ||
              (iVar2 == 0xe)))) {
            FUN_00072af4();
            uVar3 = extraout_ECX;
          }
          iVar2 = iVar1;
        } while (iVar1 != DAT_001ae9fc);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != in_EAX * 3 + 4);
    local_1c = local_1c + 1;
  } while (local_1c != in_EDX * 3 + 4);
  return;
}

/******************************************************************************
 * Function : sub_0d9338 (Ghidra: FUN_000d9338)
 * Prototype: int sub_0d9338(void);
 * Address  : 0xd9338 (Size: 223 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xd7dac
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000d9338(void)

{
  char in_AL;
  uint uVar1;
  uint3 uVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  
  uVar1 = in_EDX * 0xb;
  if ((((-1 < unaff_EBX) && (unaff_EBX < 0x55)) && (-1 < in_ECX)) &&
     ((in_ECX < 0x55 &&
      (uVar1 = (uint)(byte)(&DAT_001921d0)
                           [(uint)(byte)(&DAT_002d33c5)[(in_ECX * 0x55 + unaff_EBX) * 6] * 0x16],
      uVar1 == (byte)(&DAT_001921d0)[in_EDX * 0x16])))) {
    iVar3 = (&DAT_0019033b)[in_ECX * 3] * 0x55 + (&DAT_0019033b)[unaff_EBX * 3];
    uVar2 = (uint3)((uint)(iVar3 * 3) >> 8);
    uVar1 = CONCAT31(uVar2,(&DAT_002d33ca)[iVar3 * 6]) & 0xffffff07;
    if (((char)uVar1 == in_AL) || ((char)uVar1 == DAT_002eb543)) {
      return (uint)uVar2 << 8;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/******************************************************************************
 * Function : sub_0d9418 (Ghidra: FUN_000d9418)
 * Prototype: char sub_0d9418(void);
 * Address  : 0xd9418 (Size: 182 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xd7688
 * Callees  : 1 -> 0xd9dc0
 ******************************************************************************/
char FUN_000d9418(void)

{
  char in_AL;
  int iVar1;
  byte bVar2;
  byte extraout_CL;
  char in_DL;
  int iVar3;
  char unaff_BL;
  char local_4;
  
  local_4 = in_AL;
  if (in_AL == '\x02') {
    for (bVar2 = 0; bVar2 < 8; bVar2 = bVar2 + 1) {
      iVar3 = (int)(char)(in_DL + *(char *)((int)&DAT_001926c8 + (uint)bVar2 * 2));
      if ((((-1 < iVar3) && (iVar3 < 0x55)) &&
          (iVar1 = (int)(char)(*(char *)((int)&DAT_001926c8 + (uint)bVar2 * 2 + 1) + unaff_BL),
          -1 < iVar1)) &&
         ((iVar1 < 0x55 &&
          (((iVar3 = (int)(char)(&DAT_002d33c5)[(iVar3 + iVar1 * 0x55) * 6], iVar3 == 0xb ||
            ((&DAT_001921cf)[iVar3 * 0x16] == '\x04')) || (0x29 < iVar3)))))) {
        local_4 = FUN_000d9dc0();
        bVar2 = extraout_CL;
        break;
      }
    }
    if (bVar2 == 8) {
      local_4 = '\x02';
    }
  }
  return local_4;
}

/******************************************************************************
 * Function : sub_0d9600 (Ghidra: FUN_000d9600)
 * Prototype: longlong sub_0d9600(void);
 * Address  : 0xd9600 (Size: 63 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000d9600(void)

{
  int in_EAX;
  uint uVar1;
  uint in_EDX;
  
  uVar1 = DAT_001aea00;
  while( true ) {
    if (DAT_001b09f8 <= uVar1) {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*(short *)(uVar1 + 0x62) == *(short *)(in_EAX + 0xe)) &&
       (*(char *)(uVar1 + 0x1f) != '\x0e')) break;
    uVar1 = uVar1 + 0x6b;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0d9640 (Ghidra: FUN_000d9640)
 * Prototype: longlong sub_0d9640(void);
 * Address  : 0xd9640 (Size: 53 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:1811 ("BBlocks")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a6c5
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16c7aa: "slab.cpp"
 ******************************************************************************/
longlong FUN_000d9640(void)

{
  int in_EAX;
  uint uVar1;
  uint in_EDX;
  
  uVar1 = DAT_001aea00;
  while( true ) {
    if (DAT_001b09f8 <= uVar1) {
      return (ulonglong)in_EDX << 0x20;
    }
    if (*(short *)(uVar1 + 0x62) == *(short *)(in_EAX + 0xe)) break;
    uVar1 = uVar1 + 0x6b;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_0d96c0 (Ghidra: FUN_000d96c0)
 * Prototype: void sub_0d96c0(void);
 * Address  : 0xd96c0 (Size: 459 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:1811 ("BBlocks")
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d168
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16c7aa: "slab.cpp"
 *   - 0x16c7a2: "BBlocks"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d9817) */

void FUN_000d96c0(void)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  
  local_44 = 0;
  local_4c = 0;
  local_48 = 3;
  do {
    local_34 = 0;
    local_38 = local_4c;
    local_3c = 3;
    do {
      if (local_44 * 3 < local_48) {
        iVar4 = (uint)(byte)(&DAT_002d33c5)[local_38] * 0x16;
        local_54 = local_44 * 0xf00;
        local_2c = local_44 * 3;
        do {
          if (local_34 * 3 < local_3c) {
            puVar3 = (undefined1 *)((int)&DAT_00279203 + local_54 + local_34 * 0xf);
            iVar2 = local_34 * 3;
            do {
              for (uVar1 = (uint)*(byte *)((int)&DAT_0019e973 +
                                          (*(uint *)((int)&DAT_00279203 +
                                                    (local_2c * 0x100 + iVar2) * 5 + 1) & 0x7ff) *
                                          0x18 + 3) << 8;
                  ((uVar1 & 0xff) < 8 && ((uVar1 & 0x100) != 0));
                  uVar1 = (uint)CONCAT11((byte)(uVar1 >> 8) >> 1,(char)uVar1 + '\x01')) {
              }
              if ((uint)*(ushort *)(&DAT_001921c2 + iVar4) < (uVar1 & 0xff)) {
                *puVar3 = (&DAT_001921c6)[iVar4];
              }
              else {
                *puVar3 = (&DAT_001921ca)[iVar4];
              }
              iVar2 = iVar2 + 1;
              puVar3 = puVar3 + 5;
            } while (iVar2 < local_3c);
          }
          local_54 = local_54 + 0x500;
          local_2c = local_2c + 1;
        } while (local_2c < local_48);
      }
      local_38 = local_38 + 6;
      local_3c = local_3c + 3;
      local_34 = local_34 + 1;
    } while (local_34 < 0x55);
    local_4c = local_4c + 0x1fe;
    local_48 = local_48 + 3;
    local_44 = local_44 + 1;
  } while (local_44 < 0x55);
  return;
}

/******************************************************************************
 * Function : sub_0d988c (Ghidra: FUN_000d988c)
 * Prototype: void sub_0d988c(void);
 * Address  : 0xd988c (Size: 83 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2d168
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000d988c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x1fe;
  iVar3 = 0;
  iVar1 = iVar3;
  do {
    do {
      iVar2 = iVar1 + 6;
      (&DAT_002d33c9)[iVar1] =
           (&DAT_002eb9b4)
           [(uint)*(ushort *)(&DAT_001921c4 + (uint)(byte)(&DAT_002d33c5)[iVar1] * 0x16) * 2];
      iVar1 = iVar2;
    } while (iVar2 != iVar4);
    iVar3 = iVar3 + 0x1fe;
    iVar4 = iVar4 + 0x1fe;
    iVar1 = iVar3;
  } while (iVar3 != 0xa956);
  return;
}

/******************************************************************************
 * Function : sub_0d99f8 (Ghidra: FUN_000d99f8)
 * Prototype: undefined4 sub_0d99f8(void);
 * Address  : 0xd99f8 (Size: 968 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x14e9f, 0x70e59, 0xda7bc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000d99f8(void)

{
  byte in_AL;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte in_DL;
  uint uVar6;
  byte unaff_BL;
  byte local_1c;
  
  if (in_AL == DAT_002eb543) {
    uVar1 = 0x2a;
    uVar2 = 0x2a;
  }
  else {
    uVar1 = *(byte *)((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)in_AL * 0xa84]] + 0xe) / 3;
    uVar2 = *(byte *)((&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[(uint)in_AL * 0xa84]] + 0x10) / 3;
  }
  uVar6 = (int)(uVar2 - unaff_BL) >> 0x1f;
  uVar6 = (uVar2 - unaff_BL ^ uVar6) - uVar6;
  uVar2 = (int)(uVar1 - in_DL) >> 0x1f;
  uVar2 = (uVar1 - in_DL ^ uVar2) - uVar2;
  uVar1 = (int)uVar2 >> 0x1f;
  iVar3 = (uVar2 ^ uVar1) - uVar1;
  uVar1 = (int)uVar6 >> 0x1f;
  iVar4 = (uVar6 ^ uVar1) - uVar1;
  if (iVar4 < iVar3) {
    iVar3 = *(int *)(&DAT_0017a4d0 + ((iVar4 * 0x100) / iVar3) * 8) * iVar3 >> 0xd;
  }
  else if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(&DAT_0017a4d0 + ((iVar3 * 0x100) / iVar4) * 8) * iVar4 >> 0xd;
  }
  uVar1 = (uint)in_DL;
  local_1c = 0;
  if ((uVar1 % 5 == 0) &&
     ((char)(((&DAT_002d33c5)[(uVar1 + (unaff_BL - 1) * 0x55) * 6] == '\v') +
            ((&DAT_002d33c5)[(uVar1 + (unaff_BL + 1) * 0x55) * 6] == '\v')) != '\0')) {
    local_1c = 1;
  }
  uVar1 = (uint)unaff_BL;
  if ((uVar1 % 5 == 0) &&
     ((char)(((&DAT_002d33c5)[(uVar1 * 0x55 + (uint)in_DL + -1) * 6] == '\v') +
            ((&DAT_002d33c5)[(uVar1 * 0x55 + (uint)in_DL + 1) * 6] == '\v')) != '\0')) {
    local_1c = local_1c | 2;
  }
  if (local_1c == 0) {
    uVar1 = (uint)in_DL;
    if ((uVar1 % 2 == 1) &&
       ((char)(((&DAT_002d33c5)[(uVar1 + (unaff_BL - 1) * 0x55) * 6] == '\v') +
              ((&DAT_002d33c5)[(uVar1 + (unaff_BL + 1) * 0x55) * 6] == '\v')) != '\0')) {
      return 4;
    }
    uVar1 = (uint)unaff_BL;
    if ((uVar1 % 2 == 1) &&
       ((char)(((&DAT_002d33c5)[((uint)in_DL + uVar1 * 0x55 + -1) * 6] == '\v') +
              ((&DAT_002d33c5)[(uVar1 * 0x55 + (uint)in_DL + 1) * 6] == '\v')) != '\0')) {
      return 4;
    }
    iVar3 = (int)((iVar3 + (iVar3 >> 0x1f) * -4) - (uint)((iVar3 >> 0x1f) << 1 < 0)) >> 2;
    uVar5 = CONCAT31((int3)((ulonglong)((longlong)iVar3 / 3) >> 8),(&DAT_001926bc)[iVar3 % 3]);
  }
  else {
    uVar5 = 5;
  }
  return uVar5;
}

/******************************************************************************
 * Function : sub_0d9dc0 (Ghidra: FUN_000d9dc0)
 * Prototype: char sub_0d9dc0(void);
 * Address  : 0xd9dc0 (Size: 484 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x15030, 0xd7688, 0xd9418, 0xdab3c
 * Callees  : 0 -> 
 ******************************************************************************/
char FUN_000d9dc0(void)

{
  byte bVar1;
  uint in_EDX;
  byte unaff_BL;
  uint uVar2;
  
  bVar1 = 0;
  if (((int)(((ulonglong)in_EDX & 0xffffffff000000ff) % 5) == 0) &&
     ((char)(((&DAT_002d33c5)[((in_EDX & 0xff) + (unaff_BL - 1) * 0x55) * 6] == '\v') +
            ((&DAT_002d33c5)[((unaff_BL + 1) * 0x55 + (in_EDX & 0xff)) * 6] == '\v')) != '\0')) {
    bVar1 = 1;
  }
  uVar2 = (uint)unaff_BL;
  if ((uVar2 % 5 == 0) &&
     ((char)(((&DAT_002d33c5)[(uVar2 * 0x55 + (in_EDX & 0xff) + -1) * 6] == '\v') +
            ((&DAT_002d33c5)[(uVar2 * 0x55 + (in_EDX & 0xff) + 1) * 6] == '\v')) != '\0')) {
    bVar1 = bVar1 | 2;
  }
  return (bVar1 != 0) + '\x02';
}

/******************************************************************************
 * Function : sub_0d9fa4 (Ghidra: FUN_000d9fa4)
 * Prototype: char sub_0d9fa4(void);
 * Address  : 0xd9fa4 (Size: 140 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
char FUN_000d9fa4(void)

{
  int in_EAX;
  int in_EDX;
  
  return ((&DAT_002d33c5)[(in_EDX * 0x55 + in_EAX + -1) * 6] == '\v') +
         ((&DAT_002d33c5)[(in_EDX * 0x55 + 1 + in_EAX) * 6] == '\v');
}

/******************************************************************************
 * Function : sub_0da030 (Ghidra: FUN_000da030)
 * Prototype: char sub_0da030(void);
 * Address  : 0xda030 (Size: 139 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
char FUN_000da030(void)

{
  int in_EAX;
  int in_EDX;
  
  return ((&DAT_002d33c5)[((in_EDX + -1) * 0x55 + in_EAX) * 6] == '\v') +
         ((&DAT_002d33c5)[((in_EDX + 1) * 0x55 + in_EAX) * 6] == '\v');
}

/******************************************************************************
 * Function : sub_0da0bc (Ghidra: FUN_000da0bc)
 * Prototype: uint sub_0da0bc(void);
 * Address  : 0xda0bc (Size: 492 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000da0bc(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint3 uVar5;
  uint uVar3;
  uint uVar4;
  int in_EDX;
  byte unaff_BL;
  int iVar6;
  int iVar7;
  
  iVar1 = in_EAX / 3;
  iVar2 = in_EDX / 3;
  uVar3 = 0;
  if ((unaff_BL & 1) == 0) {
    uVar4 = (uint)(byte)(&DAT_0019277c)[unaff_BL];
    if (uVar4 != 0xffffffff) {
      iVar6 = (*(int *)((int)&DAT_001926c4 + uVar4 * 2 + 2) >> 0x18) + iVar2;
      iVar7 = (*(int *)((int)&DAT_001926c4 + uVar4 * 2 + 1) >> 0x18) + iVar1;
      if (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar6 * 0x55 + iVar7) * 6] * 0x16] & 0x29)
          != 0) {
        uVar3 = 0x100;
      }
      if ((&DAT_002d33c5)[(iVar6 * 0x55 + iVar7) * 6] == '\x14') {
        uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
      }
      uVar4 = (uint)((&DAT_0019277c)[unaff_BL] + 2 & 7);
      iVar2 = iVar2 + (*(int *)((int)&DAT_001926c4 + uVar4 * 2 + 2) >> 0x18);
      iVar1 = iVar1 + (*(int *)((int)&DAT_001926c4 + uVar4 * 2 + 1) >> 0x18);
      if (((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[(iVar2 * 0x55 + iVar1) * 6] * 0x16] & 0x29)
          != 0) {
        uVar3 = (uint)CONCAT11((char)(uVar3 >> 8) + '\x01',(char)uVar3);
      }
      if ((&DAT_002d33c5)[(iVar2 * 0x55 + iVar1) * 6] == '\x14') {
        uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + '\x01');
      }
    }
    uVar3 = (uint)((uVar3 >> 8) + (uVar3 & 0xff) < 2);
  }
  else {
    uVar5 = (uint3)((uint)(byte)(&DAT_002d33c5)
                                [(((*(int *)(&DAT_001926d6 + (uint)unaff_BL * 2) >> 0x18) + iVar2) *
                                  0x55 + iVar1 + (*(int *)(&DAT_001926d5 + (uint)unaff_BL * 2) >>
                                                 0x18)) * 6] * 0xb >> 8);
    if (((&DAT_001921c6)
         [(uint)(byte)(&DAT_002d33c5)
                      [(((*(int *)(&DAT_001926d6 + (uint)unaff_BL * 2) >> 0x18) + iVar2) * 0x55 +
                       iVar1 + (*(int *)(&DAT_001926d5 + (uint)unaff_BL * 2) >> 0x18)) * 6] * 0x16]
        & 0x29) == 0) {
      uVar3 = CONCAT31(uVar5,1);
    }
    else {
      uVar3 = (uint)uVar5 << 8;
    }
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_0da2a8 (Ghidra: FUN_000da2a8)
 * Prototype: uint sub_0da2a8(void);
 * Address  : 0xda2a8 (Size: 354 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_000da2a8(void)

{
  byte in_AL;
  uint uVar1;
  byte in_DL;
  uint uVar2;
  
  uVar1 = (uint)in_AL;
  uVar2 = (uint)in_AL << 8;
  if ((uVar1 % 5 == 0) &&
     ((char)(((&DAT_002d33c5)[(uVar1 + (in_DL - 1) * 0x55) * 6] == '\v') +
            ((&DAT_002d33c5)[((in_DL + 1) * 0x55 + uVar1) * 6] == '\v')) != '\0')) {
    uVar2 = (uint)in_AL << 8 | 1;
  }
  uVar1 = (uint)in_DL;
  if ((uVar1 % 5 == 0) &&
     ((char)(((&DAT_002d33c5)[(uVar1 * 0x55 + (uVar2 >> 8) + -1) * 6] == '\v') +
            ((&DAT_002d33c5)[(uVar1 * 0x55 + (uVar2 >> 8) + 1) * 6] == '\v')) != '\0')) {
    uVar2 = (uint)(byte)((byte)uVar2 | 2);
  }
  return uVar2 & 0xff;
}

/******************************************************************************
 * Function : sub_0da4b8 (Ghidra: FUN_000da4b8)
 * Prototype: void sub_0da4b8(void);
 * Address  : 0xda4b8 (Size: 451 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xd8974, 0xd8b7c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000da4b8(void)

{
  uint *puVar1;
  byte in_AL;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte in_DL;
  int iVar6;
  byte unaff_BL;
  byte bVar7;
  byte bVar8;
  
  uVar4 = (uint)in_AL;
  bVar2 = in_DL / 3;
  bVar3 = unaff_BL / 3;
  bVar7 = 0;
  uVar5 = (uint)(byte)(&DAT_001921d1)[uVar4 * 0x16];
  if ((uVar4 == 0xd) || (uVar4 == 0xc)) {
    bVar8 = (uint)in_DL % 3 == 0;
    if ((uint)unaff_BL % 3 == 0) {
      bVar8 = bVar8 | 2;
    }
    if (((&DAT_002d33c5)[((uint)bVar2 + (uint)bVar3 * 0x55 + -1) * 6] == '\r') ||
       ((&DAT_002d33c5)[((uint)bVar2 + (uint)bVar3 * 0x55 + -1) * 6] == '\f')) {
      bVar7 = 1;
    }
    if (((&DAT_002d33c5)[((bVar3 - 1) * 0x55 + (uint)bVar2) * 6] == '\r') ||
       ((&DAT_002d33c5)[((bVar3 - 1) * 0x55 + (uint)bVar2) * 6] == '\f')) {
      bVar7 = bVar7 | 2;
    }
    if (((&DAT_002d33c5)[((bVar3 - 1) * 0x55 + (uint)bVar2 + -1) * 6] == '\r') ||
       ((&DAT_002d33c5)[((bVar3 - 1) * 0x55 + (uint)bVar2 + -1) * 6] == '\f')) {
      bVar7 = bVar7 | 4;
    }
    if (bVar8 == 3) {
      if (bVar7 != 7) goto LAB_000da645;
    }
    else if (bVar8 == 1) {
      if ((bVar7 & 1) == 0) goto LAB_000da645;
    }
    else if (bVar8 == 2) {
      if ((bVar7 & 2) != 0) {
        uVar5 = 2;
      }
      goto LAB_000da645;
    }
    uVar5 = 2;
  }
LAB_000da645:
  iVar6 = (uint)in_DL + (uint)unaff_BL * 0x100;
  *(byte *)((int)&DAT_00279205 + iVar6 * 5 + 1) =
       *(byte *)((int)&DAT_00279205 + iVar6 * 5 + 1) & 0x3f;
  puVar1 = (uint *)((int)&DAT_00279203 + iVar6 * 5 + 1);
  *puVar1 = *puVar1 | (uVar5 & 3) << 0x16;
  return;
}

/******************************************************************************
 * Function : sub_0da67c (Ghidra: FUN_000da67c)
 * Prototype: undefined8 sub_0da67c(void);
 * Address  : 0xda67c (Size: 26 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x64ea4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_000da67c(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)(in_EAX * 0xb) >> 8),
                                  ((&DAT_001921c6)[in_EAX * 0x16] & 0x19) == 0));
}

/******************************************************************************
 * Function : sub_0da698 (Ghidra: FUN_000da698)
 * Prototype: undefined4 sub_0da698(void);
 * Address  : 0xda698 (Size: 97 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xc8268
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000da698(void)

{
  byte bVar1;
  byte bVar2;
  int in_EAX;
  undefined3 uVar3;
  int in_EDX;
  
  bVar1 = (&DAT_002d33c5)[(in_EDX * 0x55 + in_EAX) * 6];
  bVar2 = (&DAT_001921cf)[(uint)bVar1 * 0x16];
  uVar3 = (undefined3)((uint)bVar1 * 0xb >> 8);
  if (bVar2 < 3) {
    if (bVar2 != 1) {
      return CONCAT31(uVar3,bVar1);
    }
    return CONCAT31(uVar3,2);
  }
  if (3 < bVar2) {
    if (bVar2 != 5) {
      return CONCAT31(uVar3,bVar1);
    }
    return CONCAT31(uVar3,99);
  }
  return CONCAT31(uVar3,4);
}

/******************************************************************************
 * Function : sub_0da6fc (Ghidra: FUN_000da6fc)
 * Prototype: void sub_0da6fc(void);
 * Address  : 0xda6fc (Size: 189 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 19 -> 0x14afe, 0x14c9a, 0x14d45, 0x14e9f, 0x15030, 0x22660, 0x24ab9, 0x48c77, 0x4a40c, 0x4aa26 ...
 * Callees  : 2 -> 0xc856c, 0xcb144
 ******************************************************************************/
void FUN_000da6fc(void)

{
  byte in_AL;
  int iVar1;
  byte in_DL;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = (uint)in_AL + (*(int *)((int)&DAT_0018b67b + iVar3) >> 0x18);
    iVar2 = (*(int *)((int)&DAT_0018b67b + iVar3 + 1) >> 0x18) + (uint)in_DL;
    if ((((-1 < iVar1) && (iVar1 < 0x55)) && (-1 < iVar2)) &&
       ((iVar2 < 0x55 &&
        ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar2 * 0x55 + iVar1) * 6] * 0x16] == '\x04'))
       )) {
      FUN_000c856c();
      FUN_000cb144();
    }
    iVar3 = iVar3 + 2;
  } while (iVar3 != 8);
  return;
}

/******************************************************************************
 * Function : sub_0da7bc (Ghidra: FUN_000da7bc)
 * Prototype: void sub_0da7bc(void);
 * Address  : 0xda7bc (Size: 895 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14e9f
 * Callees  : 7 -> 0x400da, 0x401aa, 0x82828, 0xa5d4c, 0xd7688, 0xd99f8, 0xda6fc
 ******************************************************************************/
void FUN_000da7bc(void)

{
  byte in_AL;
  byte in_DL;
  int iVar1;
  int iVar2;
  byte unaff_BL;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint auStack_4c [9];
  uint local_28 [2];
  uint local_20 [2];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  puVar4 = auStack_4c + 2;
  if (((&DAT_001921cf)
       [(uint)(byte)(&DAT_002d33c5)[((uint)unaff_BL * 0x55 + (uint)in_DL) * 6] * 0x16] == '\x03') &&
     (((&DAT_002d33ca)
       [((&DAT_0019033b)[(uint)in_DL * 3] + (&DAT_0019033b)[(uint)unaff_BL * 3] * 0x55) * 6] & 7) ==
      in_AL)) {
    auStack_4c[5] = 0;
    auStack_4c[6] = 0;
    do {
      *(uint *)((int)puVar4 + 0x14) =
           (uint)*(byte *)((int)puVar4 + 0x28) +
           (*(int *)((int)&DAT_0018b67b + *(int *)((int)puVar4 + 0x10)) >> 0x18);
      iVar1 = (uint)*(byte *)((int)puVar4 + 0x2c) +
              (*(int *)((int)&DAT_0018b67b + *(int *)((int)puVar4 + 0x10) + 1) >> 0x18);
      *(int *)((int)puVar4 + 0x18) = iVar1;
      if ((((&DAT_001921cf)
            [(uint)(byte)(&DAT_002d33c5)[(iVar1 * 0x55 + *(int *)((int)puVar4 + 0x14)) * 6] * 0x16]
            == '\x02') ||
          ((&DAT_001921cf)
           [(uint)(byte)(&DAT_002d33c5)[(iVar1 * 0x55 + *(int *)((int)puVar4 + 0x14)) * 6] * 0x16]
           == '\x04')) &&
         (((&DAT_002d33ca)
           [((&DAT_0019033b)[*(int *)((int)puVar4 + 0x18) * 3] * 0x55 +
            (&DAT_0019033b)[*(int *)((int)puVar4 + 0x14) * 3]) * 6] & 7) ==
          *(byte *)((int)puVar4 + 0x30))) {
        *(undefined4 *)((int)puVar4 + 8) = 0xffffffff;
        *(int *)((int)puVar4 + 0x20) = *(int *)((int)puVar4 + 0xc) + -1;
        puVar5 = puVar4;
        do {
          uVar3 = puVar5[8] & 3;
          iVar1 = (*(int *)((int)&DAT_0018b67b + uVar3 * 2 + 1) >> 0x18) + puVar5[6];
          iVar2 = (*(int *)((int)&DAT_0018b67b + uVar3 * 2) >> 0x18) + puVar5[5];
          puVar4 = puVar5;
          if (((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar1 * 0x55 + iVar2) * 6] * 0x16] ==
               '\x03') &&
             (((&DAT_002d33ca)[((&DAT_0019033b)[iVar1 * 3] * 0x55 + (&DAT_0019033b)[iVar2 * 3]) * 6]
              & 7) == (byte)puVar5[0xc])) {
            puVar5[7] = iVar2 + (*(int *)((int)&DAT_0018b67b + (uVar3 + puVar5[2] & 3) * 2) >> 0x18)
            ;
            uVar3 = iVar1 + (*(int *)((int)&DAT_0018b67b + (uVar3 + puVar5[2] & 3) * 2 + 1) >> 0x18)
            ;
            puVar5[9] = uVar3;
            if (((&DAT_002d33c5)[(uVar3 * 0x55 + puVar5[7]) * 6] == '\x02') ||
               ((&DAT_002d33c5)[(uVar3 * 0x55 + puVar5[7]) * 6] == '\x03')) {
              puVar4 = puVar5 + -1;
              puVar5[-1] = 1;
              *puVar5 = (ushort)((ushort)(byte)puVar5[9] * 3) & 0xff;
              puVar5[1] = (ushort)((ushort)(byte)puVar5[7] * 3) & 0xff;
              puVar5[-2] = 0xdaa5a;
              FUN_000d99f8();
              puVar5[-2] = 0xdaa6e;
              FUN_000d7688();
              puVar5[-2] = 0xdaa7b;
              FUN_000da6fc();
              puVar5[-2] = 0xdaa86;
              FUN_00082828();
              uVar3 = 0;
              do {
                if (uVar3 != (byte)puVar5[0xb]) {
                  puVar5[-2] = 0xdaafe;
                  iVar1 = FUN_000401aa();
                  if (-1 < iVar1) {
                    puVar5[-2] = 0xdab0b;
                    FUN_000400da();
                    if (uVar3 == (byte)(&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef]) {
                      puVar5[-2] = 0xdab31;
                      FUN_000a5d4c();
                    }
                  }
                }
                uVar3 = uVar3 + 1;
              } while ((int)uVar3 < 3);
            }
          }
          iVar1 = *(int *)((int)puVar4 + 8);
          *(int *)((int)puVar4 + 0x20) = *(int *)((int)puVar4 + 0x20) + 2;
          *(int *)((int)puVar4 + 8) = iVar1 + 2;
          puVar5 = puVar4;
        } while (iVar1 + 2 < 2);
      }
      iVar1 = *(int *)((int)puVar4 + 0xc);
      *(int *)((int)puVar4 + 0x10) = *(int *)((int)puVar4 + 0x10) + 2;
      *(int *)((int)puVar4 + 0xc) = iVar1 + 1;
    } while (iVar1 + 1 < 4);
  }
  return;
}

/******************************************************************************
 * Function : sub_0dab3c (Ghidra: FUN_000dab3c)
 * Prototype: void sub_0dab3c(void);
 * Address  : 0xdab3c (Size: 435 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x15030
 * Callees  : 3 -> 0xd7688, 0xd9dc0, 0xda6fc
 ******************************************************************************/
void FUN_000dab3c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int aiStack_38 [3];
  int local_2c [3];
  byte local_20 [4];
  byte local_1c [4];
  byte local_18 [4];
  undefined1 local_14 [4];
  
  aiStack_38[2] = 0;
  piVar6 = aiStack_38 + 2;
  do {
    piVar6[1] = (uint)*(byte *)(piVar6 + 4) + (*(int *)((int)&DAT_0018b67b + *piVar6) >> 0x18);
    iVar3 = (uint)*(byte *)(piVar6 + 5) + (*(int *)((int)&DAT_0018b67b + *piVar6 + 1) >> 0x18);
    piVar6[3] = iVar3;
    *(byte *)(piVar6 + 6) =
         (&DAT_002d33ca)[((&DAT_0019033b)[iVar3 * 3] * 0x55 + (&DAT_0019033b)[piVar6[1] * 3]) * 6] &
         7;
    piVar5 = piVar6;
    if (((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar3 * 0x55 + piVar6[1]) * 6] * 0x16] ==
         '\x03') && ((char)piVar6[6] != (char)piVar6[7])) {
      iVar1 = 0;
      iVar3 = 0;
      do {
        iVar4 = (*(int *)((int)&DAT_0018b67b + iVar1 + 1) >> 0x18) + piVar6[3];
        iVar7 = (*(int *)((int)&DAT_0018b67b + iVar1) >> 0x18) + piVar6[1];
        iVar2 = iVar3;
        if (((((&DAT_002d33ca)[((&DAT_0019033b)[iVar4 * 3] * 0x55 + (&DAT_0019033b)[iVar7 * 3]) * 6]
              & 7) == *(byte *)(piVar6 + 6)) &&
            (iVar2 = 4,
            (&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar7 + iVar4 * 0x55) * 6] * 0x16] !=
            '\x02')) &&
           ((&DAT_001921cf)[(uint)(byte)(&DAT_002d33c5)[(iVar7 + iVar4 * 0x55) * 6] * 0x16] !=
            '\x04')) {
          iVar2 = iVar3 + 1;
        }
        iVar1 = iVar1 + 2;
        iVar3 = iVar2;
      } while (iVar1 != 8);
      if (iVar2 < 2) {
        piVar5 = piVar6 + -1;
        piVar6[-1] = 0;
        piVar6[2] = (uint)(byte)((char)piVar6[1] * '\x03' + 1);
        piVar6[-2] = 0xdac1e;
        FUN_000d9dc0();
        piVar6[-2] = 0xdac2e;
        FUN_000d7688();
        piVar6[-2] = 0xdac37;
        FUN_000da6fc();
      }
    }
    iVar3 = *piVar5;
    *piVar5 = iVar3 + 2;
    piVar6 = piVar5;
  } while (iVar3 + 2 != 8);
  return;
}

/******************************************************************************
 * Function : dk_could_find_nearby_space_0dacf0 (Ghidra: FUN_000dacf0)
 * Prototype: undefined8 dk_could_find_nearby_space_0dacf0(void);
 * Address  : 0xdacf0 (Size: 373 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp:2581
 * Naming   : String 'Could not find a nearby space for thing C%d M%d'
 * Callers  : 1 -> 0xdafb0
 * Callees  : 7 -> 0x50d3c, 0x7ddf8, 0xb28e8, 0xb2cb4, 0xb3b10, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16c8d0: "slab.cpp"
 *   - 0x16c8a0: "Could not find a nearby space for thing C%d M%d"
 ******************************************************************************/
undefined8 FUN_000dacf0(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  int in_EAX;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_EDX;
  short sVar6;
  int iVar7;
  int iVar8;
  char *local_28;
  int local_1c;
  
  local_28 = (char *)&DAT_002ee9c1;
  bVar1 = *(byte *)(in_EAX + 0xe);
  bVar2 = *(byte *)(in_EAX + 0x10);
  local_1c = 0;
  do {
    iVar7 = (int)local_28[1] + (uint)bVar1;
    iVar8 = (int)*local_28 + (uint)bVar2;
    if ((((iVar7 < 0xff) && (-1 < iVar7)) && (iVar8 < 0xff)) &&
       ((-1 < iVar8 && ((*(byte *)((int)&DAT_00279203 + (iVar8 * 0x100 + iVar7) * 5) & 0x10) == 0)))
       ) {
      iVar8 = FUN_00050d3c();
      if (iVar8 == 0) {
        sVar6 = (short)iVar7 * 0x100 + 0x80;
        uVar3 = FUN_000b2cb4(sVar6);
        iVar7 = FUN_0007ddf8(sVar6,uVar3);
        if (iVar7 == 0) {
          uVar3 = FUN_000b28e8();
          uVar4 = FUN_000b3b10(sVar6,uVar3);
          uVar5 = CONCAT31((int3)((uint)uVar4 >> 8),1);
          goto LAB_000dae5b;
        }
      }
    }
    local_1c = local_1c + 1;
    local_28 = local_28 + 4;
  } while (local_1c < 0x78);
  FUN_000e7714(&DAT_0019cbac,s_Could_not_find_a_nearby_space_fo_0016c8a0,
               *(undefined1 *)(in_EAX + 0x1f),*(undefined1 *)(in_EAX + 0x1a));
  uVar5 = FUN_000ddaf0(); /* LbErrorLog("slab.cpp", line 2581, g_log_buf) */
  uVar5 = uVar5 & 0xffffff00;
LAB_000dae5b:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_0dae68 (Ghidra: FUN_000dae68)
 * Prototype: void sub_0dae68(void);
 * Address  : 0xdae68 (Size: 310 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5f6c5, 0xcae40
 * Callees  : 1 -> 0x72af4
 ******************************************************************************/
void FUN_000dae68(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint extraout_ECX;
  int iVar6;
  int local_20;
  int local_1c;
  
  iVar6 = (int)in_EAX % 0x55;
  local_20 = ((int)in_EAX / 0x55) * 3;
  iVar3 = local_20 + 3;
  local_1c = ((int)in_EAX / 0x55) * 0xf00;
  if (local_20 < iVar3) {
    do {
      iVar4 = iVar6 * 0xf + local_1c;
      iVar1 = local_1c + (iVar6 * 3 + 3) * 5;
      iVar5 = iVar4 - iVar1;
      while (SBORROW4(iVar4,iVar1) != iVar5 < 0) {
        iVar5 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar4 + 1) & 0x3fffff) >> 0xb];
        if ((&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar4 + 1) & 0x3fffff) >> 0xb] !=
            DAT_001ae9fc) {
          do {
            iVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar5 + 2)];
            if (((*(ushort *)(iVar5 + 0x1d) != in_EAX) && (*(char *)(iVar5 + 0x1f) == '\x01')) &&
               ((&DAT_0018b91a)[(uint)*(byte *)(iVar5 + 0x1a) * 0x16] == '\x03')) {
              FUN_00072af4();
              in_EAX = extraout_ECX;
            }
            iVar5 = iVar2;
          } while (iVar2 != DAT_001ae9fc);
        }
        iVar4 = iVar4 + 5;
        iVar5 = iVar4 - iVar1;
      }
      local_1c = local_1c + 0x500;
      local_20 = local_20 + 1;
    } while (local_20 < iVar3);
  }
  return;
}

/******************************************************************************
 * Function : sub_0dafb0 (Ghidra: FUN_000dafb0)
 * Prototype: void sub_0dafb0(void);
 * Address  : 0xdafb0 (Size: 362 bytes)
 * Module   : slab.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xd7688, 0xd8b7c
 * Callees  : 2 -> 0x72af4, 0xdacf0
 ******************************************************************************/
void FUN_000dafb0(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  int in_EDX;
  int iVar5;
  int iVar6;
  int local_1c;
  
  local_1c = in_EDX * 3;
  iVar2 = local_1c + 3;
  if (local_1c < iVar2) {
    do {
      iVar3 = in_EAX * 0xf + local_1c * 0x500;
      iVar5 = (in_EAX * 3 + 3) * 5 + local_1c * 0x500;
      iVar6 = iVar3 - iVar5;
      while (SBORROW4(iVar3,iVar5) != iVar6 < 0) {
        iVar6 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x3fffff) >> 0xb];
        if (iVar6 != DAT_001ae9fc) {
          do {
            iVar4 = (&DAT_001ae9fc)[*(ushort *)(iVar6 + 2)];
            if ((uint)*(ushort *)(iVar6 + 0x1d) != in_EDX * 0x55 + in_EAX) {
              cVar1 = *(char *)(iVar6 + 0x1f);
              if (cVar1 == '\x01') {
                switch((&DAT_0018b91a)[(uint)*(byte *)(iVar6 + 0x1a) * 0x16]) {
                case 1:
                  if ((4 < *(byte *)((int)&DAT_0019e973 +
                                    (*(uint *)((int)&DAT_00279203 + iVar3 + 1) & 0x7ff) * 0x18 + 2)
                           >> 4) && (cVar1 = FUN_000dacf0(), iVar4 = extraout_ECX, cVar1 == '\0'))
                  goto switchD_000db0e2_caseD_2;
                  break;
                case 2:
switchD_000db0e2_caseD_2:
                  FUN_00072af4();
                  iVar4 = extraout_ECX_00;
                }
              }
              else if ((cVar1 == '\a') || (cVar1 == '\x0e')) {
                FUN_00072af4();
                iVar4 = extraout_ECX_01;
              }
            }
            iVar6 = iVar4;
          } while (iVar4 != DAT_001ae9fc);
        }
        iVar3 = iVar3 + 5;
        iVar6 = iVar3 - iVar5;
      }
      local_1c = local_1c + 1;
    } while (local_1c < iVar2);
  }
  return;
}

