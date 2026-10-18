/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: effect.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 26
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_024344 (Ghidra: FUN_00024344)
 * Prototype: void sub_024344(void);
 * Address  : 0x24344 (Size: 567 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00024344(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
  if (*(short *)(&DAT_002e0b61 + iVar2) != 0) {
    iVar1 = (&DAT_001ae9fc)[*(ushort *)(&DAT_002e0b61 + iVar2)];
    local_4c = *(byte *)(iVar1 + 0x10) - 0xd;
    local_48 = 0;
    do {
      if ((-1 < local_4c) && (local_4c < 0x101)) {
        iVar4 = local_48 * 0x1a + iVar2;
        iVar3 = *(byte *)(iVar1 + 0xe) - 0xd;
        for (iVar5 = 0; iVar5 < 0xe; iVar5 = iVar5 + 1) {
          if (*(char *)((int)&DAT_002e0589 + iVar5 + iVar4 + 0x5dd) != '\0') {
            local_1c = 0;
            iVar5 = iVar5 + 1;
            local_28 = 1;
            iVar6 = (int)&DAT_002e0589 + iVar5 + iVar4;
            for (; iVar5 < 0x1a; iVar5 = iVar5 + 1) {
              if (*(char *)(iVar6 + 0x5dd) != '\0') {
                local_1c = local_28;
              }
              local_28 = local_28 + 1;
              iVar6 = iVar6 + 1;
            }
            local_1c = local_1c + iVar3;
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            else if (0xfe < iVar3) {
              iVar3 = 0xfe;
            }
            if (local_1c < 0) {
              local_1c = 0;
            }
            else if (0xfe < local_1c) {
              local_1c = 0xfe;
            }
            local_2c = (iVar3 - (uint)*(byte *)(iVar1 + 0xe)) + 0xd;
            for (; iVar3 <= local_1c; iVar3 = iVar3 + 1) {
              if (*(char *)((int)&DAT_002e0589 + local_2c + iVar4 + 0x5dd) == '\0') {
                *(undefined1 *)((int)&DAT_002e0589 + local_2c + iVar4 + 0x5dd) = 1;
              }
              local_2c = local_2c + 1;
            }
          }
          iVar3 = iVar3 + 1;
        }
      }
      local_48 = local_48 + 1;
      local_4c = local_4c + 1;
    } while (local_48 < 0x1a);
    local_50 = *(byte *)(iVar1 + 0xe) - 0xd;
    local_44 = 0;
    do {
      if ((-1 < local_50) && (local_50 < 0x100)) {
        iVar4 = *(byte *)(iVar1 + 0x10) - 0xd;
        for (iVar3 = 0; iVar3 < 0xe; iVar3 = iVar3 + 1) {
          if (*(char *)((int)&DAT_002e0589 + local_44 + iVar3 * 0x1a + iVar2 + 0x5dd) != '\0') {
            iVar3 = iVar3 + 1;
            local_40 = 0;
            local_34 = (int)&DAT_002e0589 + iVar3 * 0x1a + local_44 + iVar2;
            local_24 = 1;
            for (; iVar3 < 0x1a; iVar3 = iVar3 + 1) {
              if (*(char *)(local_34 + 0x5dd) != '\0') {
                local_40 = local_24;
              }
              local_34 = local_34 + 0x1a;
              local_24 = local_24 + 1;
            }
            local_40 = local_40 + iVar4;
            if (local_40 < 0) {
              local_40 = 0;
            }
            else if (0xfe < local_40) {
              local_40 = 0xfe;
            }
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            else if (0xfe < iVar4) {
              iVar4 = 0xfe;
            }
            local_20 = (int)&DAT_002e0589 +
                       ((iVar4 - (uint)*(byte *)(iVar1 + 0x10)) + 0xd) * 0x1a + local_44 + iVar2;
            for (; iVar4 <= local_40; iVar4 = iVar4 + 1) {
              if (*(char *)(local_20 + 0x5dd) == '\0') {
                *(undefined1 *)(local_20 + 0x5dd) = 1;
              }
              local_20 = local_20 + 0x1a;
            }
          }
          iVar4 = iVar4 + 1;
        }
      }
      local_44 = local_44 + 1;
      local_50 = local_50 + 1;
    } while (local_44 < 0x1a);
  }
  return;
}

/******************************************************************************
 * Function : sub_02457b (Ghidra: FUN_0002457b)
 * Prototype: void sub_02457b(void);
 * Address  : 0x2457b (Size: 375 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x872b8, 0x87694, 0x87870
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002457b(void)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int in_EAX;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_40;
  int local_20;
  int local_1c;
  
  iVar10 = (uint)*(byte *)(in_EAX + 0x2b) * 0x1508;
  if (*(short *)(&DAT_002e0b61 + iVar10) != 0) {
    iVar7 = (&DAT_001ae9fc)[*(ushort *)(&DAT_002e0b61 + iVar10)];
    bVar4 = *(byte *)(iVar7 + 0x10);
    local_40 = 0;
    do {
      iVar11 = ((bVar4 - 0xd) + local_40) * 0x100;
      iVar12 = local_40 * 0x1a;
      local_20 = *(byte *)(iVar7 + 0xe) - 0xd;
      local_1c = 0;
      iVar3 = iVar10 + iVar12;
      do {
        if (*(char *)(iVar3 + local_1c + 0x2e0b66) != '\0') {
          iVar9 = (local_20 + iVar11) * 5;
          uVar8 = *(uint *)((int)&DAT_00279203 + iVar9 + 1);
          bVar5 = *(byte *)(in_EAX + 0x2b);
          *(uint *)((int)&DAT_00279203 + iVar9 + 1) = uVar8 & 0xfffffff;
          puVar1 = (uint *)((int)&DAT_00279203 + iVar9 + 1);
          *puVar1 = *puVar1 | (~(1 << (bVar5 & 0x1f)) & uVar8 >> 0x1c) << 0x1c;
          uVar8 = *(uint *)((int)&DAT_00279203 + iVar9 + 1);
          bVar5 = (&DAT_00334078)[iVar12];
          bVar6 = *(byte *)(in_EAX + 0x2b);
          *(uint *)((int)&DAT_00279203 + iVar9 + 1) = uVar8 & 0xfffffff;
          puVar1 = (uint *)((int)&DAT_00279203 + iVar9 + 1);
          *puVar1 = *puVar1 | (1 << (bVar6 & 0x1f) & (uint)bVar5 << (bVar6 & 0x1f) | uVar8 >> 0x1c)
                              << 0x1c;
          if (((&DAT_00334078)[iVar12] & 2) != 0) {
            *(byte *)((int)&DAT_00279203 + iVar9) = *(byte *)((int)&DAT_00279203 + iVar9) | 0x80;
          }
          if (((&DAT_00334078)[iVar12] & 4) != 0) {
            pbVar2 = (byte *)((int)&DAT_00279203 + (local_20 + iVar11) * 5);
            *pbVar2 = *pbVar2 | 4;
          }
        }
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
        iVar12 = iVar12 + 1;
      } while (local_1c < 0x1a);
      local_40 = local_40 + 1;
    } while (local_40 < 0x1a);
  }
  return;
}

/******************************************************************************
 * Function : sub_0246f2 (Ghidra: FUN_000246f2)
 * Prototype: undefined4 sub_0246f2(void);
 * Address  : 0x246f2 (Size: 151 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4a0d6
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000246f2(void)

{
  char in_AL;
  byte bVar1;
  int iVar2;
  byte bVar3;
  char in_DL;
  byte unaff_BL;
  byte bVar4;
  
  bVar4 = 0;
  while( true ) {
    if (3 < bVar4) {
      return 0;
    }
    iVar2 = (uint)bVar4 * 2;
    bVar3 = in_AL + *(char *)((int)&DAT_0018b67b + iVar2 + 3) * '\x03';
    bVar1 = (&DAT_0018b67f)[iVar2] * '\x03' + in_DL;
    if (((*(uint *)((int)&DAT_00279203 + (uint)CONCAT11(bVar1,bVar3) * 5 + 1) >> 0x1c &
         1 << (unaff_BL & 0x1f) & 0xffffU) == 0) &&
       (iVar2 = (&DAT_0019033b)[bVar1] * 0x55 + (&DAT_0019033b)[bVar3],
       ((&DAT_001921c6)[(uint)(byte)(&DAT_002d33c5)[iVar2 * 6] * 0x16] & 0x29) == 0)) break;
    bVar4 = bVar4 + 1;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

/******************************************************************************
 * Function : sub_0248e5 (Ghidra: FUN_000248e5)
 * Prototype: undefined4 sub_0248e5(void);
 * Address  : 0x248e5 (Size: 176 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x23250
 * Callees  : 3 -> 0x4fbd8, 0x63b6d, 0x81ec8
 ******************************************************************************/
undefined4 FUN_000248e5(void)

{
  int in_EAX;
  int extraout_ECX;
  int in_EDX;
  int iVar1;
  
  if (((in_EAX <= (int)(uint)(byte)(&DAT_002e05ec)[in_EDX * 0x1508]) &&
      (iVar1 = in_EAX * 2 + in_EDX * 0x1508, *(short *)(&DAT_002e05bc + iVar1) != 0)) &&
     (*(char *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + iVar1)] + 0x1f) == '\x05')) {
    FUN_00081ec8();
    FUN_00063b6d();
    for (; in_EAX < 7; in_EAX = in_EAX + 1) {
      *(undefined2 *)(&DAT_002e05bc + iVar1) = *(undefined2 *)(&DAT_002e05be + iVar1);
      iVar1 = iVar1 + 2;
    }
    (&DAT_002e05ec)[extraout_ECX] = (&DAT_002e05ec)[extraout_ECX] + -1;
    *(undefined2 *)(&DAT_002e05bc + (uint)(byte)(&DAT_002e05ec)[extraout_ECX] * 2 + extraout_ECX) =
         0;
    FUN_0004fbd8();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_allocate_light_effect_024998 (Ghidra: FUN_00024998)
 * Prototype: int dk_allocate_light_effect_024998(void);
 * Address  : 0x24998 (Size: 273 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp:60 ("Cannot allocate light for effect")
 * Naming   : String 'Cannot allocate light for effect'
 * Callers  : 57 -> 0x22660, 0x23250, 0x25f6f, 0x25fbb, 0x26007, 0x2606f, 0x263c9, 0x26f4d, 0x39901, 0x43ac3 ...
 * Callees  : 7 -> 0x50c38, 0x6e538, 0x72829, 0x7290f, 0x72d90, 0xacaf8, 0xddaf0
 * Strings  :
 *   - 0x162695: "effect.cpp"
 *   - 0x162674: "Cannot allocate light for effect"
 ******************************************************************************/
int FUN_00024998(void)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 *in_EAX;
  int iVar3;
  int iVar4;
  undefined1 extraout_CL;
  uint in_EDX;
  int extraout_EDX;
  undefined1 unaff_BL;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined4 auStackY_1ffc [2032];
  undefined4 local_2c;
  undefined4 local_22;
  undefined2 uStack_1e;
  undefined1 local_1b;
  int local_18;
  undefined1 local_14;
  
  bVar8 = 0;
  iVar3 = (in_EDX & 0xffff) * 0x27;
  local_18 = 0;
  local_14 = unaff_BL;
  sVar2 = FUN_00072829();
  if (sVar2 != 0) {
    iVar4 = FUN_0007290f();
    uVar1 = DAT_002e8bee;
    *(undefined1 *)(iVar4 + 0x1f) = 6;
    *(undefined4 *)(iVar4 + 9) = uVar1;
    *(undefined1 *)(iVar4 + 0x1a) = extraout_CL;
    *(undefined4 *)(iVar4 + 0xd) = *in_EAX;
    *(undefined2 *)(iVar4 + 0x11 + (uint)bVar8 * -8) =
         *(undefined2 *)(in_EAX + (uint)bVar8 * -2 + 1);
    *(undefined2 *)(iVar4 + 2) = 0;
    *(undefined1 *)(iVar4 + 0x20) = 0;
    *(undefined1 *)(iVar4 + 0x23) = 0;
    *(undefined1 *)(iVar4 + 0x24) = 0;
    *(undefined1 *)(iVar4 + 6) = local_14;
    *(byte *)(iVar4 + 0x4f) = *(byte *)(iVar4 + 0x4f) | 1;
    *(undefined2 *)(iVar4 + 0x1d) = *(undefined2 *)(iVar4 + 0x1b);
    *(undefined2 *)(iVar4 + 0x5e) = *(undefined2 *)((int)&PTR_LAB_0018de59 + iVar3);
    local_18 = iVar4;
    if (*(short *)(&DAT_0018de6b + iVar3) != 0) {
      puVar5 = (undefined4 *)(&DAT_0018de6f + (uint)bVar8 * -8 + iVar3);
      local_2c = *(undefined4 *)(&DAT_0018de6b + iVar3);
      puVar7 = (undefined4 *)(&stack0xffffffdc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      puVar6 = puVar5 + (uint)bVar8 * -2 + 1;
      *(undefined4 *)(&stack0xffffffd8 + (uint)bVar8 * -8) = *puVar5;
      *puVar7 = *puVar6;
      puVar7[(uint)bVar8 * -2 + 1] = puVar6[(uint)bVar8 * -2 + 1];
      (puVar7 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
           (puVar6 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
      local_1b = 1;
      local_22 = *(undefined4 *)(iVar4 + 0xd);
      (&uStack_1e)[(uint)bVar8 * -4] = *(undefined2 *)(iVar4 + 0x11 + (uint)bVar8 * -8);
      sVar2 = FUN_000acaf8();
      *(short *)(extraout_EDX + 0x62) = sVar2;
      if (sVar2 == 0) {
        FUN_000ddaf0(); /* LbErrorLog("effect.cpp", line 60, "Cannot allocate light for effect") */
        return 0;
      }
    }
    FUN_00072d90();
    FUN_00050c38();
    if (*(short *)(&DAT_0018de65 + iVar3) != 0) {
      FUN_0006e538(3,0,3,0x100);
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : sub_024ab9 (Ghidra: FUN_00024ab9)
 * Prototype: undefined8 sub_024ab9(void);
 * Address  : 0x24ab9 (Size: 1590 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp:231 ("Unknown EffectGenerationType")
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 18 -> 0x25af0, 0x2666b, 0x26987, 0x444a9, 0x627b5, 0x6f671, 0x72af4, 0xad148, 0xad23c, 0xb4994 ...
 * Strings  :
 *   - 0x1626bd: "effect.cpp"
 *   - 0x1626a0: "Unknown EffectGenerationType"
 ******************************************************************************/
undefined8 FUN_00024ab9(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *extraout_ECX;
  short *extraout_ECX_00;
  int extraout_ECX_01;
  short *extraout_ECX_02;
  short *extraout_ECX_03;
  short *extraout_ECX_04;
  int extraout_ECX_05;
  short *extraout_ECX_06;
  short *extraout_ECX_07;
  short *extraout_ECX_08;
  short *extraout_ECX_09;
  short *extraout_ECX_10;
  short *extraout_ECX_11;
  short *extraout_ECX_12;
  undefined4 in_EDX;
  undefined4 uVar9;
  undefined2 extraout_var;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puStack_6c;
  short local_68;
  short sStack_66;
  short local_64;
  short local_60;
  short local_5e;
  undefined2 local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  ppuVar11 = (undefined **)&local_68;
  local_2c = 0;
  psVar8 = (short *)((int)&PTR_LAB_0018de59 + (uint)*(byte *)(in_EAX + 0x1a) * 0x27);
  if (*(short *)(in_EAX + 0x1d) != 0) {
    local_2c = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  if (*(short *)(in_EAX + 0x5e) < 1) {
    if (*(char *)(in_EAX + 0x1a) == '+') {
      local_4c = (uint)*(byte *)(in_EAX + 0xe);
      ppuVar11 = &puStack_6c;
      puStack_6c = (undefined *)0x0;
      local_48 = (uint)*(byte *)(in_EAX + 0x10);
      FUN_000d7688();
      FUN_000da6fc();
    }
    if (*(char *)(in_EAX + 0x66) != '\0') {
      *(undefined4 *)((int)ppuVar11 + -4) = 0x24b4f;
      FUN_0006f671();
      *(undefined1 *)(in_EAX + 0x66) = 0;
    }
    *(undefined4 *)((int)ppuVar11 + -4) = 0x24b5c;
    FUN_00072af4();
    uVar9 = 0;
    goto LAB_00024bd7;
  }
  if ((*(short *)(in_EAX + 0x62) != 0) && (*(short *)(in_EAX + 0x5e) < 4)) {
    puStack_6c = (undefined *)0x24b78;
    FUN_000ad23c();
    puStack_6c = (undefined *)0x24b91;
    FUN_000ad148();
    psVar8 = extraout_ECX;
  }
  if (*(char *)((int)psVar8 + 0x11) == '\0') {
LAB_000250aa:
    switch((char)psVar8[1]) {
    case '\x01':
      local_38 = in_EAX + 0xd;
      for (iVar10 = 0; iVar10 < (int)(uint)*(byte *)((int)psVar8 + 0xb); iVar10 = iVar10 + 1) {
        if ((char)psVar8[7] != '\0') {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          local_54 = (uint)*(byte *)(psVar8 + 7) +
                     DAT_002e8bf6 %
                     (((uint)*(byte *)((int)psVar8 + 0xf) - (uint)*(byte *)(psVar8 + 7)) + 1);
          puStack_6c = (undefined *)0x24d4b;
          iVar6 = FUN_000444a9();
          psVar8 = extraout_ECX_04;
          if (iVar6 != 0) {
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            uVar2 = DAT_002e8bf6 >> 0xd;
            uVar3 = DAT_002e8bf6 * 0x80000;
            DAT_002e8bf6._0_2_ = (undefined2)uVar2;
            uVar4 = (undefined2)DAT_002e8bf6;
            DAT_002e8bf6 = (uVar2 | uVar3) * 0x24a1 + 0x24df;
            uVar2 = DAT_002e8bf6 >> 0xd;
            uVar3 = DAT_002e8bf6 * 0x80000;
            local_1c = CONCAT22(extraout_var,uVar4) & 0xffff07ff;
            DAT_002e8bf6._0_2_ = (undefined2)uVar2;
            uVar4 = (undefined2)DAT_002e8bf6;
            DAT_002e8bf6 = (uVar2 | uVar3) * 0x24a1 + 0x24df;
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            local_44 = (uint)*(short *)((int)extraout_ECX_04 + 5);
            local_20 = CONCAT22((short)(local_1c >> 0x10),uVar4) & 0xffff03ff;
            puStack_6c = (undefined *)0x24dec;
            iVar7 = FUN_000e69fc();
            if (iVar7 < 1) {
              local_30 = 1;
              iVar7 = extraout_ECX_05;
            }
            else {
              puStack_6c = (undefined *)0x24bfc;
              local_30 = FUN_000e69fc();
              iVar7 = extraout_ECX_01;
            }
            local_3c = (int)*(short *)(iVar7 + 3) + DAT_002e8bf6 % local_30;
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            local_44 = (uint)*(short *)(iVar7 + 9);
            puStack_6c = (undefined *)0x24c4f;
            iVar7 = FUN_000e69fc();
            if (iVar7 < 1) {
              local_34 = 1;
              psVar8 = extraout_ECX_02;
            }
            else {
              puStack_6c = (undefined *)0x24c6c;
              local_34 = FUN_000e69fc();
              psVar8 = extraout_ECX_03;
            }
            local_58 = (int)*(short *)((int)psVar8 + 7) + DAT_002e8bf6 % local_34;
            local_44 = local_3c * (&DAT_001927e0)[local_1c & 0xffff] >> 0x10;
            local_68 = (short)((uint)(local_3c * (&DAT_001927e0)[local_1c & 0xffff]) >> 0x10);
            sStack_66 = (short)((uint)-(local_3c * (int)(&PTR_LAB_00192fe0)[local_1c & 0xffff] >> 8)
                               >> 8);
            local_64 = (short)((uint)(local_58 * (&DAT_001927e0)[local_20 & 0xffff]) >> 0x10);
            *(short *)(iVar6 + 0x32) = *(short *)(iVar6 + 0x32) + local_68;
            *(short *)(iVar6 + 0x34) = *(short *)(iVar6 + 0x34) + sStack_66;
            *(byte *)(iVar6 + 1) = *(byte *)(iVar6 + 1) | 4;
            *(short *)(iVar6 + 0x36) = *(short *)(iVar6 + 0x36) + local_64;
          }
        }
      }
      break;
    case '\x02':
      local_28 = 0;
      iVar10 = 0;
      while (local_28 < (int)(uint)*(byte *)((int)psVar8 + 0xb)) {
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        local_54 = (uint)*(byte *)(psVar8 + 7) +
                   DAT_002e8bf6 %
                   (((uint)*(byte *)((int)psVar8 + 0xf) - (uint)*(byte *)(psVar8 + 7)) + 1);
        local_50 = (int)*psVar8 - (int)*(short *)(in_EAX + 0x5e);
        local_44 = local_50 * 0x10;
        local_60 = (short)(local_44 *
                           (&DAT_001927e0)
                           [iVar10 / (int)(uint)*(byte *)((int)psVar8 + 0xb) + local_50 * 0x80 &
                            0x7ff] >> 0x10) + *(short *)(in_EAX + 0xd);
        local_40 = (uint)*(byte *)((int)psVar8 + 0xb);
        local_5e = (short)((uint)-((int)(local_44 *
                                        (int)(&PTR_LAB_00192fe0)
                                             [iVar10 / (int)local_40 + local_50 * 0x80 & 0x7ff]) >>
                                  8) >> 8) + *(short *)(in_EAX + 0xf);
        local_28 = local_28 + 1;
        local_5c = *(undefined2 *)(in_EAX + 0x11);
        iVar10 = iVar10 + 0x800;
        puStack_6c = (undefined *)0x24ee7;
        FUN_000444a9();
        psVar8 = extraout_ECX_06;
      }
      break;
    case '\x03':
      local_24 = 0;
      iVar10 = 0;
      while (local_24 < (int)(uint)*(byte *)((int)psVar8 + 0xb)) {
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        local_44 = (uint)*(byte *)((int)psVar8 + 0xf);
        local_40 = (local_44 - *(byte *)(psVar8 + 7)) + 1;
        local_54 = (uint)*(byte *)(psVar8 + 7) + DAT_002e8bf6 % local_40;
        local_60 = *(short *)(in_EAX + 0xd) +
                   (short)((uint)(*(short *)(in_EAX + 0x5e) * 0x10 *
                                 (&DAT_001927e0)
                                 [iVar10 / (int)(uint)*(byte *)((int)psVar8 + 0xb) +
                                  *(short *)(in_EAX + 0x5e) * 0x80 & 0x7ff]) >> 0x10);
        local_5e = (short)((uint)-(*(short *)(in_EAX + 0x5e) * 0x10 *
                                   (int)(&PTR_LAB_00192fe0)
                                        [iVar10 / (int)(uint)*(byte *)((int)psVar8 + 0xb) +
                                         *(short *)(in_EAX + 0x5e) * 0x80 & 0x7ff] >> 8) >> 8) +
                   *(short *)(in_EAX + 0xf);
        local_24 = local_24 + 1;
        local_5c = *(undefined2 *)(in_EAX + 0x11);
        iVar10 = iVar10 + 0x800;
        puStack_6c = (undefined *)0x24fdb;
        FUN_000444a9();
        psVar8 = extraout_ECX_07;
      }
      break;
    case '\x04':
      if (*(char *)(in_EAX + 0x1a) == '0') {
        if (*(short *)(in_EAX + 0x5e) == *psVar8) {
          puStack_6c = (undefined *)0x25017;
          FUN_000e6a10();
          psVar8 = extraout_ECX_08;
        }
        else {
          iVar10 = (int)*(short *)(in_EAX + 0x5e);
          if ((int)*psVar8 / 2 < iVar10) {
LAB_00025035:
            puStack_6c = (undefined *)0x2503a;
            FUN_000e8d80();
            psVar8 = extraout_ECX_09;
          }
          else if (iVar10 == (int)*psVar8 / 2) {
            puStack_6c = (undefined *)0x25046;
            FUN_000e8f24();
            puStack_6c = &DAT_00334324;
            FUN_000e846c();
            psVar8 = extraout_ECX_10;
          }
          else {
            if (iVar10 != 0) goto LAB_00025035;
            puStack_6c = (undefined *)0x25087;
            FUN_000627b5();
            puStack_6c = (undefined *)0x2508c;
            FUN_000e8f24();
            psVar8 = extraout_ECX_11;
          }
        }
      }
      break;
    default:
      puStack_6c = (undefined *)0x250a5;
      FUN_000ddaf0(); /* LbErrorLog("effect.cpp", line 231, "Unknown EffectGenerationType") */
      psVar8 = extraout_ECX_12;
    }
  }
  else {
    puStack_6c = (undefined *)0x24ba3;
    cVar5 = FUN_0002666b();
    psVar8 = extraout_ECX_00;
    if (cVar5 != '\0') goto LAB_000250aa;
  }
  bVar1 = *(byte *)(psVar8 + 8);
  ppuVar12 = (undefined **)&local_68;
  if (bVar1 != 0) {
    if (bVar1 < 2) {
LAB_000250be:
      puStack_6c = (undefined *)(uint)*(byte *)(psVar8 + 8);
      ppuVar12 = &puStack_6c;
      FUN_00025af0();
    }
    else {
      ppuVar12 = (undefined **)&local_68;
      if (2 < bVar1) {
        if (bVar1 < 4) goto LAB_000250be;
        ppuVar12 = (undefined **)&local_68;
        if (bVar1 == 4) {
          puStack_6c = (undefined *)0x250ea;
          FUN_00026987();
          ppuVar12 = (undefined **)&local_68;
        }
      }
    }
  }
  *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + -1;
  *(undefined4 *)((int)ppuVar12 + -4) = 0x24bd5;
  uVar9 = FUN_000b4994();
LAB_00024bd7:
  return CONCAT44(in_EDX,uVar9);
}

/******************************************************************************
 * Function : sub_0250ef (Ghidra: FUN_000250ef)
 * Prototype: void sub_0250ef(void);
 * Address  : 0x250ef (Size: 1045 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x25780, 0x266af, 0x6b820, 0xc3c3c, 0xc4f70, 0xe1ec4
 * Callees  : 2 -> 0x43ac3, 0xe69fc
 ******************************************************************************/
void FUN_000250ef(void)

{
  ushort *in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *in_EDX;
  int unaff_EBX;
  short *psVar5;
  undefined4 auStack_4c [2];
  short local_44;
  short sStack_42;
  short local_40;
  ushort local_3c;
  ushort local_3a;
  short local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  psVar5 = &local_44;
  iVar1 = (uint)*in_EDX - (uint)*in_EAX;
  local_1c = 0;
  local_24 = (uint)in_EDX[1] - (uint)in_EAX[1];
  local_18 = 0;
  iVar2 = (int)(short)in_EDX[2] - (int)(short)in_EAX[2];
  local_20 = 0;
  local_28 = unaff_EBX;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
    local_28 = -unaff_EBX;
  }
  local_30 = unaff_EBX;
  if (local_24 < 0) {
    local_24 = -local_24;
    local_30 = -unaff_EBX;
  }
  local_34 = unaff_EBX;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    local_34 = -unaff_EBX;
  }
  if (((iVar1 != 0) || (local_24 != 0)) || (iVar2 != 0)) {
    if ((iVar2 < iVar1) || (iVar2 < local_24)) {
      if ((iVar1 < local_24) || (iVar1 < iVar2)) {
        local_28 = (local_28 * iVar1) / local_24;
        local_34 = (local_34 * iVar2) / local_24;
      }
      else {
        local_30 = (local_30 * local_24) / iVar1;
        local_34 = (local_34 * iVar2) / iVar1;
        local_24 = iVar1;
      }
    }
    else {
      local_30 = (local_30 * local_24) / iVar2;
      local_28 = (local_28 * iVar1) / iVar2;
      local_24 = iVar2;
    }
    local_24 = local_24 / unaff_EBX;
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    local_44 = (short)*(undefined4 *)in_EAX;
    sStack_42 = (short)((uint)*(undefined4 *)in_EAX >> 0x10);
    uVar3 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uVar4 = (int)((unaff_EBX + (unaff_EBX >> 0x1f) * -4) - (uint)((unaff_EBX >> 0x1f) << 1 < 0)) >>
            2;
    local_44 = local_44 + (short)(uVar3 % uVar4);
    DAT_002e8bf6 = uVar3 * 0x24a1 + 0x24df;
    uVar3 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    sStack_42 = sStack_42 + (short)(uVar3 % uVar4);
    DAT_002e8bf6 = uVar3 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    local_40 = in_EAX[2] + (short)(DAT_002e8bf6 % uVar4);
    for (local_24 = local_24 + 1; local_24 != 0; local_24 = local_24 + -1) {
      local_3c = local_44 + (short)local_1c;
      local_3a = sStack_42 + (short)local_18;
      local_38 = local_40 + (short)local_20;
      if ((local_3c < 0xff00) && (local_3a < 0xff00)) {
        *(undefined4 *)((int)psVar5 + -4) = 0xffffffff;
        *(undefined4 *)((int)psVar5 + -8) = 0x254bf;
        FUN_00043ac3();
        psVar5 = (short *)((int)psVar5 + -4);
      }
      DAT_0033431c = DAT_0033431c * 0x24a1 + 0x24df;
      uVar3 = DAT_0033431c >> 0xd | DAT_0033431c * 0x80000;
      if (uVar3 % 6 < 3) {
        local_1c = local_1c + 0x20;
      }
      else {
        local_1c = local_1c + -0x20;
      }
      DAT_0033431c = uVar3 * 0x24a1 + 0x24df;
      uVar3 = DAT_0033431c >> 0xd | DAT_0033431c * 0x80000;
      if (uVar3 % 6 < 3) {
        local_18 = local_18 + 0x20;
      }
      else {
        local_18 = local_18 + -0x20;
      }
      DAT_0033431c = uVar3 * 0x24a1 + 0x24df;
      DAT_0033431c = DAT_0033431c >> 0xd | DAT_0033431c * 0x80000;
      if (DAT_0033431c % 6 < 3) {
        local_20 = local_20 + 0x20;
      }
      else {
        local_20 = local_20 + -0x20;
      }
      *(undefined4 *)((int)psVar5 + -4) = 0x25345;
      FUN_000e69fc();
      *(undefined4 *)((int)psVar5 + -4) = 0x25359;
      FUN_000e69fc();
      *(undefined4 *)((int)psVar5 + -4) = 0x25379;
      iVar1 = FUN_000e69fc();
      *(undefined4 *)((int)psVar5 + -4) = 0x25391;
      iVar2 = FUN_000e69fc();
      if (iVar2 < iVar1) {
        *(undefined4 *)((int)psVar5 + -4) = 0x253aa;
        FUN_000e69fc();
        *(undefined4 *)((int)psVar5 + -4) = 0x253c2;
        FUN_000e69fc();
        *(undefined4 *)((int)psVar5 + -4) = 0x253e2;
        iVar1 = FUN_000e69fc();
      }
      else {
        *(undefined4 *)((int)psVar5 + -4) = 0x253f4;
        iVar1 = FUN_000e69fc();
      }
      if (iVar1 < 0x400) {
        iVar2 = iVar1 * 0x80 >> 0x1f;
        iVar1 = (int)((iVar1 * 0x80 + iVar2 * -0x400) - (uint)(iVar2 << 9 < 0)) >> 10;
      }
      else {
        iVar1 = 0x80;
      }
      iVar2 = -iVar1;
      if ((-local_1c == iVar1 || -iVar1 < local_1c) && (iVar2 = local_1c, iVar1 < local_1c)) {
        iVar2 = iVar1;
      }
      local_1c = iVar2;
      iVar2 = -iVar1;
      if ((-local_18 == iVar1 || -iVar1 < local_18) && (iVar2 = local_18, iVar1 < local_18)) {
        iVar2 = iVar1;
      }
      local_18 = iVar2;
      iVar2 = -iVar1;
      if ((-local_20 == iVar1 || -iVar1 < local_20) && (iVar2 = local_20, iVar1 < local_20)) {
        iVar2 = iVar1;
      }
      local_20 = iVar2;
      local_44 = local_44 + (short)local_28;
      sStack_42 = sStack_42 + (short)local_30;
      local_40 = local_40 + (short)local_34;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_025504 (Ghidra: FUN_00025504)
 * Prototype: void sub_025504(void);
 * Address  : 0x25504 (Size: 636 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6b820
 * Callees  : 1 -> 0x43ac3
 ******************************************************************************/
void FUN_00025504(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort *in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int in_ECX;
  ushort *in_EDX;
  int unaff_EBX;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 auStack_54 [2];
  undefined1 local_4c [4];
  ushort local_48;
  ushort local_46;
  short local_44;
  undefined4 local_40;
  ushort local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_10;
  
  puVar10 = local_4c;
  iVar4 = (uint)*in_EDX - (uint)*in_EAX;
  local_10 = (uint)in_EDX[1] - (uint)in_EAX[1];
  local_20 = 1;
  iVar5 = (int)(short)in_EDX[2] - (int)(short)in_EAX[2];
  local_2c = &DAT_00189bf2;
  iVar9 = unaff_EBX;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
    iVar9 = -unaff_EBX;
  }
  iVar6 = unaff_EBX;
  if (local_10 < 0) {
    local_10 = -local_10;
    iVar6 = -unaff_EBX;
  }
  iVar7 = unaff_EBX;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
    iVar7 = -unaff_EBX;
  }
  if (((iVar4 != 0) || (local_10 != 0)) || (iVar5 != 0)) {
    if ((iVar5 < iVar4) || (iVar5 < local_10)) {
      if ((iVar4 < local_10) || (iVar4 < iVar5)) {
        iVar9 = (iVar9 * iVar4) / local_10;
        iVar7 = (iVar7 * iVar5) / local_10;
      }
      else {
        iVar6 = (iVar6 * local_10) / iVar4;
        iVar7 = (iVar7 * iVar5) / iVar4;
        local_10 = iVar4;
      }
      sVar2 = (short)iVar6;
      sVar3 = (short)iVar9;
    }
    else {
      sVar2 = (short)((iVar6 * local_10) / iVar5);
      sVar3 = (short)((iVar9 * iVar4) / iVar5);
      local_10 = iVar5;
    }
    local_10 = local_10 / unaff_EBX;
    local_10 = local_10 + 1;
    if ((uint)DAT_00189bfd - (uint)DAT_00189bfb == 0) {
      local_24 = 0;
    }
    else {
      local_24 = (int)(((uint)DAT_00189bfd - (uint)DAT_00189bfb) * 0x100) / local_10;
    }
    local_40 = *(undefined4 *)in_EAX;
    local_3c = in_EAX[2];
    local_30 = (uint)DAT_00189bfb << 8;
    uVar12 = 2;
    local_34 = in_ECX;
    for (; local_10 != 0; local_10 = local_10 + -1) {
      local_28 = 0;
      local_38 = local_30 >> 8;
      while( true ) {
        if (local_34 <= local_28) break;
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        uVar8 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        sVar1 = (short)local_20;
        local_48 = ((short)local_40 + sVar1) - (short)(uVar8 % uVar12);
        DAT_002e8bf6 = uVar8 * 0x24a1 + 0x24df;
        uVar8 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        local_46 = (local_40._2_2_ + sVar1) - (short)(uVar8 % uVar12);
        DAT_002e8bf6 = uVar8 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        local_44 = (local_3c + sVar1) - (short)(DAT_002e8bf6 % uVar12);
        if ((local_48 < 0xff00) && (local_46 < 0xff00)) {
          puVar11 = puVar10 + -4;
          *(undefined4 *)(puVar10 + -4) = 0xffffffff;
          *(undefined4 *)(puVar10 + -8) = 0x2576c;
          iVar9 = FUN_00043ac3();
          puVar10 = puVar10 + -4;
          if (iVar9 != 0) {
            *(short *)(iVar9 + 0x46) = (short)local_38;
            puVar10 = puVar11;
          }
        }
        local_28 = local_28 + 1;
      }
      local_20 = local_20 + 0x10;
      local_40 = CONCAT22(local_40._2_2_ + sVar2,(short)local_40 + sVar3);
      local_3c = local_3c + (short)iVar7;
      uVar12 = uVar12 + 0x20;
      local_30 = local_30 + local_24;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_025780 (Ghidra: FUN_00025780)
 * Prototype: void sub_025780(void);
 * Address  : 0x25780 (Size: 223 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1ec4
 * Callees  : 1 -> 0x250ef
 ******************************************************************************/
void FUN_00025780(void)

{
  int in_EAX;
  byte bVar1;
  undefined2 local_24 [2];
  int local_20;
  int local_1c;
  
  bVar1 = 0;
  local_20 = in_EAX + 0xd;
  local_1c = 0x100;
  do {
    if (*(int *)((int)&DAT_0019d100 + *(char *)(in_EAX + 6) * 0x4ef) != 0) {
      local_24[(uint)bVar1 * -4] = *(undefined2 *)(in_EAX + 0x11 + (uint)bVar1 * -8);
      local_24[0] = 0xc00;
      FUN_000250ef();
    }
    local_1c = local_1c + 0x200;
  } while (local_1c < 0x800);
  return;
}

/******************************************************************************
 * Function : dk_illegal_hit_thing_type_02585f (Ghidra: FUN_0002585f)
 * Prototype: void dk_illegal_hit_thing_type_02585f(byte param_1);
 * Address  : 0x2585f (Size: 657 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp:687 ("Illegal hit thing type for explosion")
 * Naming   : String 'Illegal hit thing type for explosion'
 * Callers  : 4 -> 0x6ca16, 0x6cee6, 0x72109, 0xe1ec4
 * Callees  : 6 -> 0x10c1a, 0x81c10, 0x8608c, 0xdc354, 0xdc5c4, 0xddaf0
 * Strings  :
 *   - 0x1626ed: "effect.cpp"
 *   - 0x1626c8: "Illegal hit thing type for explosion"
 ******************************************************************************/
void FUN_0002585f(byte param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  undefined1 *puVar4;
  bool bVar5;
  undefined4 auStack_5c [3];
  undefined1 local_50 [4];
  short local_4c;
  short sStack_4a;
  undefined2 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  puVar4 = local_50;
  local_30 = unaff_EBX << 8;
  if (in_EAX == 0) {
    local_2c = -1;
  }
  else {
    local_2c = (int)*(char *)(in_EAX + 6);
  }
  local_1c = (uint)*(byte *)(in_EDX + 1) - unaff_EBX;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_38 = (uint)*(byte *)(in_EDX + 3) - unaff_EBX;
  if (local_38 < 0) {
    local_38 = 0;
  }
  local_44 = (uint)*(byte *)(in_EDX + 1) + unaff_EBX;
  if (0xfe < local_44) {
    local_44 = 0xfe;
  }
  local_3c = unaff_EBX + (uint)*(byte *)(in_EDX + 3);
  if (0xfe < local_3c) {
    local_3c = 0xfe;
  }
  iVar3 = in_ECX * 300 >> 0x1f;
  local_18 = (int)((in_ECX * 300 + iVar3 * -0x100) - (uint)(iVar3 << 7 < 0)) >> 8;
  local_28 = local_44 * 5;
  local_1c = local_1c * 5;
  local_24 = local_38;
  do {
    if (local_3c < local_38) {
      return;
    }
    local_20 = local_28 + local_38 * 0x500;
    for (local_10 = local_1c + local_38 * 0x500; local_10 <= local_20; local_10 = local_10 + 5) {
      if ((*(uint *)((int)&DAT_00279203 + local_10 + 1) & 0x3ff800) != 0) {
        local_40 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + local_10 + 1) & 0x3fffff) >> 0xb]
        ;
LAB_00025aab:
        iVar3 = local_40;
        if (*(short *)(iVar3 + 0x1b) != 0) {
          local_40 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 2)];
          if (param_1 < 3) {
            if (param_1 == 0) goto LAB_000259a7;
            if (param_1 < 2) {
              if (*(char *)(iVar3 + 0x1f) == '\x05') goto LAB_000259d6;
              bVar5 = *(char *)(iVar3 + 0x1f) == '\x01';
            }
            else {
              cVar1 = *(char *)(iVar3 + 0x1f);
LAB_000259cd:
              bVar5 = cVar1 == '\x05';
            }
            if (bVar5) goto LAB_000259d6;
          }
          else {
            if (3 < param_1) {
              if (param_1 < 7) {
                if (param_1 == 4) {
                  bVar5 = *(char *)(iVar3 + 0x1f) == '\x05';
                  goto LAB_00025947;
                }
LAB_000259a7:
                *(undefined4 *)(puVar4 + -4) = 0x259bb;
                FUN_000ddaf0(); /* LbErrorLog("effect.cpp", line 687, "Illegal hit thing type for explosion") */
              }
              else if (param_1 < 8) {
                if (*(char *)(iVar3 + 0x1f) != '\x01') {
                  cVar1 = *(char *)(iVar3 + 0x1a);
                  goto LAB_000259cd;
                }
              }
              else if (param_1 != 8) goto LAB_000259a7;
              goto LAB_000259d6;
            }
            if (*(char *)(iVar3 + 0x1f) == '\x05') goto LAB_0002594d;
            bVar5 = *(char *)(iVar3 + 0x1f) == '\x01';
LAB_00025947:
            if (bVar5) {
LAB_0002594d:
              if (*(char *)(iVar3 + 6) != local_2c) {
LAB_000259d6:
                *(undefined4 *)(puVar4 + -4) = 0x259e2;
                cVar1 = FUN_000dc5c4();
                if (cVar1 != '\0') {
                  *(undefined4 *)(puVar4 + -4) = 0x259f3;
                  local_34 = FUN_00010c1a();
                  *(undefined4 *)(puVar4 + -4) = 0x259ff;
                  iVar2 = FUN_000dc354();
                  if (iVar2 < local_30) {
                    local_14 = ((local_30 - iVar2) * 0x100) / local_30;
                    if (*(char *)(iVar3 + 0x1f) == '\x05') {
                      *(undefined4 *)(puVar4 + -4) = 0x25a3c;
                      FUN_00081c10();
                      if (*(short *)(iVar3 + 0x5e) < 0) {
                        *(undefined4 *)(puVar4 + -4) = 0;
                        *(undefined4 *)(puVar4 + -8) = 1;
                        *(undefined4 *)(puVar4 + -0xc) = 0x25a59;
                        FUN_0008608c();
                        puVar4 = puVar4 + -8;
                        goto LAB_00025aab;
                      }
                    }
                    local_4c = (short)((uint)(local_14 * (&DAT_001927e0)[local_34]) >> 0x10);
                    local_48 = 0;
                    sStack_4a = (short)((uint)-(local_14 * (int)(&PTR_LAB_00192fe0)[local_34] >> 8)
                                       >> 8);
                    *(short *)(iVar3 + 0x32) = *(short *)(iVar3 + 0x32) + local_4c;
                    *(short *)(iVar3 + 0x34) = *(short *)(iVar3 + 0x34) + sStack_4a;
                    *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) | 4;
                    *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)(iVar3 + 0x36);
                  }
                }
              }
            }
          }
          goto LAB_00025aab;
        }
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_025af0 (Ghidra: FUN_00025af0)
 * Prototype: void sub_025af0(byte param_1);
 * Address  : 0x25af0 (Size: 519 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x24ab9
 * Callees  : 5 -> 0x265d3, 0x717de, 0x81c10, 0xdc354, 0xdc5c4
 ******************************************************************************/
void FUN_00025af0(byte param_1)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar3;
  int extraout_ECX_03;
  ushort *in_EDX;
  int unaff_EBX;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_20;
  int local_10;
  
  iVar4 = (int)((uint)*in_EDX - unaff_EBX) >> 8;
  local_20 = (int)((uint)in_EDX[1] - unaff_EBX) >> 8;
  local_28 = ((int)((uint)in_EDX[1] + unaff_EBX) >> 8) + 1;
  iVar5 = ((int)((uint)*in_EDX + unaff_EBX) >> 8) + 1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xfe < iVar4) {
    iVar4 = 0xfe;
  }
  if (local_20 < 0) {
    local_20 = 0;
  }
  else if (0xfe < local_20) {
    local_20 = 0xfe;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xfe < iVar5) {
    iVar5 = 0xfe;
  }
  if (local_28 < 0) {
    local_28 = 0;
  }
  else if (0xfe < local_28) {
    local_28 = 0xfe;
  }
  local_10 = local_20 * 0x500;
  for (; local_20 <= local_28; local_20 = local_20 + 1) {
    for (iVar6 = iVar4 * 5 + local_10; iVar6 <= local_10 + iVar5 * 5; iVar6 = iVar6 + 5) {
      if ((*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0x3ff800) != 0) {
        for (iVar3 = (&DAT_001ae9fc)[(*(uint *)((int)&DAT_00279203 + iVar6 + 1) & 0x3fffff) >> 0xb];
            *(short *)(iVar3 + 0x1b) != 0; iVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar3 + 2)]) {
          iVar2 = FUN_000265d3();
          iVar3 = extraout_ECX_03;
          if (((((iVar2 != 0) && (*(char *)(extraout_ECX_03 + 0x1f) == '\x05')) &&
               ((&DAT_002e9189)[(uint)*(byte *)(extraout_ECX_03 + 0x1a) * 0xe6] == '\0')) &&
              ((cVar1 = FUN_000dc5c4(), iVar3 = extraout_ECX, cVar1 != '\0' &&
               (iVar2 = FUN_000dc354(), iVar3 = extraout_ECX_00, iVar2 < unaff_EBX)))) &&
             (*(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0xad) =
                   *(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0xad) | 4,
             param_1 != 0)) {
            if (param_1 < 2) {
              FUN_00081c10();
              iVar3 = extraout_ECX_01;
            }
            else if ((param_1 == 3) &&
                    ((*(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0xac) & 1) ==
                     0)) {
              FUN_000717de();
              iVar3 = extraout_ECX_02;
            }
          }
        }
      }
    }
    local_10 = local_10 + 0x500;
  }
  return;
}

/******************************************************************************
 * Function : sub_025cf7 (Ghidra: FUN_00025cf7)
 * Prototype: void sub_025cf7(void);
 * Address  : 0x25cf7 (Size: 632 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1ec4
 * Callees  : 3 -> 0x10cd7, 0x63b6d, 0xdc440
 ******************************************************************************/
void FUN_00025cf7(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  byte *extraout_ECX;
  int extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *extraout_ECX_04;
  byte *extraout_ECX_05;
  byte *pbVar3;
  byte *extraout_ECX_06;
  byte *extraout_ECX_07;
  
  uVar2 = DAT_002e6eb6;
  while (pbVar3 = (&DAT_001ae9fc)[uVar2], uVar2 = DAT_002e6ece, pbVar3 != DAT_001ae9fc) {
    if ((((*(short *)(pbVar3 + 0x1b) != *(short *)(in_EAX + 0x1d)) && ((*pbVar3 & 0x10) == 0)) &&
        ((pbVar3[1] & 2) == 0)) &&
       ((pbVar3[7] != 0x43 && ((&DAT_002e91e8)[(uint)pbVar3[0x1a] * 0xe6] != '\0')))) {
      iVar1 = FUN_000dc440();
      iVar1 = iVar1 + 1;
      pbVar3 = extraout_ECX;
      if (iVar1 < 0x800) {
        FUN_00063b6d();
        *(undefined4 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x9a) = DAT_002e8bee;
        FUN_00010cd7((short)(((int)*(short *)(in_EAX + 0x2c) << 0xb) / iVar1),
                     (short)(((int)*(short *)(in_EAX + 0x30) << 0xb) / iVar1));
        pbVar3 = extraout_ECX_01;
      }
    }
    uVar2 = (uint)*(ushort *)(pbVar3 + 0x67);
  }
  while (pbVar3 = (&DAT_001ae9fc)[uVar2], uVar2 = DAT_002e6ebe, pbVar3 != DAT_001ae9fc) {
    if ((((*pbVar3 & 0x10) == 0) && ((pbVar3[1] & 2) == 0)) &&
       ((&DAT_00189981)[(uint)pbVar3[0x1a] * 0x4e] != '\0')) {
      iVar1 = FUN_000dc440();
      iVar1 = iVar1 + 1;
      pbVar3 = extraout_ECX_02;
      if (iVar1 < 0x800) {
        FUN_00010cd7((short)(((int)*(short *)(in_EAX + 0x2c) << 0xb) / iVar1),
                     (short)(((int)*(short *)(in_EAX + 0x30) << 0xb) / iVar1));
        pbVar3 = extraout_ECX_03;
      }
    }
    uVar2 = (uint)*(ushort *)(pbVar3 + 0x67);
  }
  while (pbVar3 = (&DAT_001ae9fc)[uVar2], uVar2 = DAT_002e6ede, pbVar3 != DAT_001ae9fc) {
    if ((((*(short *)(pbVar3 + 0x1b) != *(short *)(in_EAX + 0x1b)) && ((*pbVar3 & 0x10) == 0)) &&
        ((pbVar3[1] & 2) == 0)) && ((&DAT_00188cf8)[(uint)pbVar3[0x1a] * 0x65] != '\0')) {
      iVar1 = FUN_000dc440();
      iVar1 = iVar1 + 1;
      pbVar3 = extraout_ECX_04;
      if (iVar1 < 0x800) {
        FUN_00010cd7((short)(((int)*(short *)(in_EAX + 0x2c) << 0xb) / iVar1),
                     (short)(((int)*(short *)(in_EAX + 0x30) << 0xb) / iVar1));
        pbVar3 = extraout_ECX_05;
      }
    }
    uVar2 = (uint)*(ushort *)(pbVar3 + 0x67);
  }
  while (pbVar3 = (&DAT_001ae9fc)[uVar2], pbVar3 != DAT_001ae9fc) {
    if (((*(short *)(pbVar3 + 0x1b) != *(short *)(in_EAX + 0x1b)) && ((*pbVar3 & 0x10) == 0)) &&
       (((pbVar3[1] & 2) == 0 && ((&DAT_0018de7f)[(uint)pbVar3[0x1a] * 0x27] != '\0')))) {
      iVar1 = FUN_000dc440();
      iVar1 = iVar1 + 1;
      pbVar3 = extraout_ECX_06;
      if (iVar1 < 0x800) {
        FUN_00010cd7((short)(((int)*(short *)(in_EAX + 0x2c) << 0xb) / iVar1),
                     (short)(((int)*(short *)(in_EAX + 0x30) << 0xb) / iVar1));
        pbVar3 = extraout_ECX_07;
      }
    }
    uVar2 = (uint)*(ushort *)(pbVar3 + 0x67);
  }
  return;
}

/******************************************************************************
 * Function : sub_025f6f (Ghidra: FUN_00025f6f)
 * Prototype: void sub_025f6f(void);
 * Address  : 0x25f6f (Size: 76 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x14afe, 0x6d909, 0xc3c3c, 0xc4f70, 0xc6374
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
void FUN_00025f6f(void)

{
  short in_AX;
  short sVar1;
  byte unaff_BL;
  undefined2 local_c;
  
  sVar1 = in_AX * 0x100 + 0x80;
  local_c = 0x180;
  while ((int)local_c < (int)((uint)unaff_BL * 0x100)) {
    FUN_00024998(sVar1);
    local_c = CONCAT11(local_c._1_1_ + '\x01',(undefined1)local_c);
  }
  return;
}

/******************************************************************************
 * Function : sub_025fbb (Ghidra: FUN_00025fbb)
 * Prototype: void sub_025fbb(void);
 * Address  : 0x25fbb (Size: 76 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x22660
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
void FUN_00025fbb(void)

{
  short in_AX;
  short sVar1;
  byte unaff_BL;
  undefined2 local_c;
  
  sVar1 = in_AX * 0x100 + 0x80;
  local_c = 0x180;
  while ((int)local_c < (int)((uint)unaff_BL * 0x100)) {
    FUN_00024998(sVar1);
    local_c = CONCAT11(local_c._1_1_ + '\x01',(undefined1)local_c);
  }
  return;
}

/******************************************************************************
 * Function : sub_026007 (Ghidra: FUN_00026007)
 * Prototype: void sub_026007(void);
 * Address  : 0x26007 (Size: 97 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x14d45
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
void FUN_00026007(void)

{
  short in_AX;
  short sVar1;
  byte unaff_BL;
  undefined2 local_10;
  
  sVar1 = in_AX * 0x100 + 0x80;
  local_10 = 0x180;
  while ((int)local_10 < (int)((uint)unaff_BL * 0x100)) {
    FUN_00024998(sVar1);
    FUN_00024998();
    local_10 = CONCAT11(local_10._1_1_ + '\x01',(undefined1)local_10);
  }
  return;
}

/******************************************************************************
 * Function : sub_026068 (Ghidra: FUN_00026068)
 * Prototype: void sub_026068(void);
 * Address  : 0x26068 (Size: 7 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00026068(void)

{
  return;
}

/******************************************************************************
 * Function : sub_02606f (Ghidra: FUN_0002606f)
 * Prototype: undefined8 sub_02606f(void);
 * Address  : 0x2606f (Size: 858 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x24998, 0x2666b, 0x444a9, 0x6e538, 0x72af4, 0x7dbc0, 0xb250c, 0xb28e8
 ******************************************************************************/
undefined8 FUN_0002606f(void)

{
  char cVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_EDX;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  short *psVar10;
  short local_38;
  short sStack_36;
  short local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  
  psVar10 = &local_38;
  iVar3 = (uint)*(byte *)(in_EAX + 0x1a) * 0x39;
  if (0 < *(short *)(in_EAX + 0x5e)) {
    *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + -1;
  }
  if (*(short *)(in_EAX + 0x5e) == 0) {
    FUN_00072af4();
    uVar4 = 0;
  }
  else {
    cVar1 = FUN_0002666b();
    if (cVar1 != '\0') {
      if (*(int *)(in_EAX + 0x15) != 0) {
        *(int *)(in_EAX + 0x15) = *(int *)(in_EAX + 0x15) + -1;
      }
      if (*(int *)(in_EAX + 0x15) == 0) {
        for (local_24 = 0; local_24 < *(int *)(&DAT_0018fb9f + iVar3); local_24 = local_24 + 1) {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          uVar5 = DAT_002e8bf6 >> 0xd;
          DAT_002e8bf6 = (uVar5 | DAT_002e8bf6 * 0x80000) * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          uVar7 = DAT_002e8bf6 % (*(ushort *)(in_EAX + 0x13) + 1);
          uVar5 = uVar5 & 0x7ff;
          iVar8 = ((int)((&DAT_001927e0)[uVar5] * uVar7) >> 0x10) + (uint)*(ushort *)(in_EAX + 0xd);
          iVar6 = (-((int)((int)(&PTR_LAB_00192fe0)[uVar5] * uVar7) >> 8) >> 8) +
                  (uint)*(ushort *)(in_EAX + 0xf);
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xffff < iVar8) {
            iVar8 = 0xffff;
          }
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xffff < iVar6) {
            iVar6 = 0xffff;
          }
          local_2c = 0;
          local_30 = (undefined2)iVar8;
          local_2e = (undefined2)iVar6;
          *(undefined4 *)((int)psVar10 + -4) = 0x2611a;
          uVar5 = FUN_000444a9();
          if (uVar5 <= DAT_001ae9fc) break;
          *(undefined2 *)(uVar5 + 0x56) = 0x14;
          *(undefined2 *)(uVar5 + 0x58) = 0x14;
          local_1c = uVar5;
          if ((&DAT_0018fba7)[iVar3] == '\0') {
            if (*(int *)(&DAT_0018fba8 + iVar3) == -1) {
              *(undefined2 *)(uVar5 + 0x11) = 0x800;
              *(undefined4 *)((int)psVar10 + -4) = 0x26157;
              sVar2 = FUN_000b250c();
            }
            else {
              *(undefined4 *)((int)psVar10 + -4) = 0x2615e;
              sVar2 = FUN_000b28e8();
              sVar2 = sVar2 + *(short *)(&DAT_0018fba8 + iVar3);
            }
          }
          else {
            sVar2 = *(short *)(&DAT_0018fba8 + iVar3);
          }
          *(short *)(uVar5 + 0x11) = sVar2;
          *(undefined4 *)((int)psVar10 + -4) = 0x26178;
          iVar6 = FUN_0007dbc0();
          if (iVar6 == 0) {
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            uVar5 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            DAT_002e8bf6 = uVar5 * 0x24a1 + 0x24df;
            local_38 = (short)(uVar5 % ((*(int *)(&DAT_0018fbb0 + iVar3) -
                                        *(int *)(&DAT_0018fbac + iVar3)) + 1U)) +
                       (short)*(undefined4 *)(&DAT_0018fbac + iVar3);
            uVar5 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            local_20 = (*(int *)(&DAT_0018fbb8 + iVar3) - *(int *)(&DAT_0018fbb4 + iVar3)) + 1;
            DAT_002e8bf6 = uVar5 * 0x24a1 + 0x24df;
            sStack_36 = (short)(uVar5 % local_20) + (short)*(undefined4 *)(&DAT_0018fbb4 + iVar3);
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            local_34 = (short)(DAT_002e8bf6 %
                              ((*(int *)(&DAT_0018fbc0 + iVar3) - *(int *)(&DAT_0018fbbc + iVar3)) +
                              1U)) + (short)*(undefined4 *)(&DAT_0018fbbc + iVar3);
            *(short *)(local_1c + 0x32) = *(short *)(local_1c + 0x32) + local_38;
            *(short *)(local_1c + 0x34) = *(short *)(local_1c + 0x34) + sStack_36;
            *(byte *)(local_1c + 1) = *(byte *)(local_1c + 1) | 4;
            *(short *)(local_1c + 0x36) = *(short *)(local_1c + 0x36) + local_34;
            puVar9 = (undefined1 *)psVar10;
            if (*(int *)(&DAT_0018fbc4 + iVar3) != 0) {
              *(undefined4 *)((int)psVar10 + -4) = 0x2626f;
              local_28 = FUN_00024998();
              if (local_28 != 0) {
                DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
                DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
                *(undefined4 *)((int)psVar10 + -4) = 0x100;
                *(undefined4 *)((int)psVar10 + -8) = 2;
                *(undefined4 *)((int)psVar10 + -0xc) = 0;
                puVar9 = (undefined1 *)((int)psVar10 + -0x10);
                *(undefined4 *)((int)psVar10 + -0x10) = 3;
                *(undefined4 *)((int)psVar10 + -0x14) = 0x262c1;
                FUN_0006e538();
              }
            }
            psVar10 = (short *)puVar9;
            if (*(int *)(&DAT_0018fbcc + iVar3) != 0) {
              *(undefined4 *)(puVar9 + -4) = 0x100;
              *(undefined4 *)(puVar9 + -8) = 2;
              *(undefined4 *)(puVar9 + -0xc) = 0;
              psVar10 = (short *)(puVar9 + -0x10);
              *(undefined4 *)(puVar9 + -0x10) = 3;
              *(undefined4 *)(puVar9 + -0x14) = 0x262e5;
              FUN_0006e538();
            }
          }
          else {
            *(undefined4 *)((int)psVar10 + -4) = 0x26186;
            FUN_00072af4();
          }
        }
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        *(uint *)(in_EAX + 0x15) =
             *(int *)(&DAT_0018fb97 + iVar3) +
             DAT_002e8bf6 %
             ((*(int *)(&DAT_0018fb9b + iVar3) - *(int *)(&DAT_0018fb97 + iVar3)) + 1U);
      }
    }
    uVar4 = 1;
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0263c9 (Ghidra: FUN_000263c9)
 * Prototype: void sub_0263c9(void);
 * Address  : 0x263c9 (Size: 213 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x66016, 0x74c0d, 0xe1ec4
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
void FUN_000263c9(void)

{
  short sVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  
  uVar2 = *(ushort *)(in_EAX + 0x56) / 2;
  iVar4 = *(ushort *)(in_EAX + 0xd) - uVar2;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  uVar5 = *(ushort *)(in_EAX + 0xd) + uVar2;
  if (0xfffe < uVar5) {
    uVar5 = 0xffff;
  }
  iVar6 = *(ushort *)(in_EAX + 0xf) - uVar2;
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  uVar2 = uVar2 + *(ushort *)(in_EAX + 0xf);
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  sVar1 = *(short *)(in_EAX + 0x11);
  if (sVar1 < 1) {
    sVar1 = 0;
  }
  iVar3 = (int)*(short *)(in_EAX + 0x11) + (uint)*(ushort *)(in_EAX + 0x58);
  if (0x7fe < iVar3) {
    iVar3 = 0x7ff;
  }
  local_30 = (ushort)iVar4;
  while (local_30 <= uVar5) {
    local_2e = (ushort)iVar6;
    while (local_2c = sVar1, local_2e <= uVar2) {
      while (local_2c <= iVar3) {
        FUN_00024998();
        local_2c = CONCAT11(local_2c._1_1_ + '\x01',(undefined1)local_2c);
      }
      local_2e = CONCAT11(local_2e._1_1_ + '\x01',(undefined1)local_2e);
    }
    local_30 = CONCAT11(local_30._1_1_ + '\x01',(undefined1)local_30);
  }
  return;
}

/******************************************************************************
 * Function : sub_02649e (Ghidra: FUN_0002649e)
 * Prototype: void sub_02649e(void);
 * Address  : 0x2649e (Size: 1 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1ec4
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0002649e(void)

{
  return;
}

/******************************************************************************
 * Function : sub_02649f (Ghidra: FUN_0002649f)
 * Prototype: void sub_02649f(void);
 * Address  : 0x2649f (Size: 308 bytes)
 * Module   : effect.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1ec4
 * Callees  : 3 -> 0x10434, 0xb3b58, 0xdc440
 ******************************************************************************/
void FUN_0002649f(void)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  
  if ((int)*(char *)(in_EAX + 6) != (uint)DAT_002eb543) {
    iVar5 = in_EAX + 0xd;
    uVar1 = (&DAT_002e05b6)[*(char *)(in_EAX + 6) * 0xa84];
    while (pbVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < pbVar2) {
      if (((((*pbVar2 & 0x10) == 0) && ((pbVar2[1] & 2) == 0)) && (pbVar2[7] != 0x43)) &&
         (*(char *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 3) == '\0')) {
        if (pbVar2[7] == 0xe) {
          bVar3 = pbVar2[8];
        }
        else {
          bVar3 = pbVar2[7];
        }
        if ((&DAT_0018c4c8)[(uint)bVar3 * 0x29] != '\0') {
          iVar6 = FUN_000dc440(iVar5);
          if (iVar6 < 0x1000) {
            if (pbVar2[7] == 0x1a) {
              FUN_00010434();
            }
            iVar6 = (&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)];
            sVar4 = FUN_000b3b58();
            if (sVar4 != 0) {
              pbVar2[8] = 99;
              *(int *)(iVar6 + 0x2fa) = DAT_002e8bee + 800;
              *(undefined1 *)(iVar6 + 0x2f8) = *(undefined1 *)(in_EAX + 0xe);
              *(undefined1 *)(iVar6 + 0x2f9) = *(undefined1 *)(in_EAX + 0x10);
            }
          }
        }
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(pbVar2 + 100)] + 0x1f);
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_thing_has_hit_thing_0265d3 (Ghidra: FUN_000265d3)
 * Prototype: undefined4 dk_thing_has_hit_thing_0265d3(void);
 * Address  : 0x265d3 (Size: 152 bytes)
 * Module   : effect.cpp [direct_file_string_xref]
 * OrigLine : effect.cpp:1460 ("Thing has no hit thing type")
 * Naming   : String 'Thing has no hit thing type'
 * Callers  : 2 -> 0x25af0, 0x26987
 * Callees  : 5 -> 0x6d334, 0x6d39c, 0x6d3e1, 0x6d424, 0xddaf0
 * Strings  :
 *   - 0x162714: "effect.cpp"
 *   - 0x1626f8: "Thing has no hit thing type"
 ******************************************************************************/
undefined4 FUN_000265d3(void)

{
  byte bVar1;
  int in_EAX;
  undefined4 uVar2;
  int in_EDX;
  
  bVar1 = *(byte *)(in_EAX + 0x16);
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (1 < bVar1) {
        uVar2 = FUN_0006d424();
        return uVar2;
      }
      uVar2 = FUN_0006d3e1();
      return uVar2;
    }
  }
  else {
    if (bVar1 < 4) {
      uVar2 = FUN_0006d334();
      return uVar2;
    }
    if (bVar1 < 7) {
      if (bVar1 == 4) {
        uVar2 = FUN_0006d39c();
        return uVar2;
      }
    }
    else {
      if (bVar1 < 8) {
        if (((*(char *)(in_EDX + 0x1f) == '\x01') && (*(char *)(in_EDX + 0x1a) == '\x05')) &&
           (*(char *)(in_EDX + 6) != *(char *)(in_EAX + 6))) {
          return 1;
        }
        return 0;
      }
      if (bVar1 == 8) {
        return 0;
      }
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("effect.cpp", line 1460, "Thing has no hit thing type") */
  return 0;
}

/******************************************************************************
 * Function : sub_02666b (Ghidra: FUN_0002666b)
 * Prototype: ulonglong sub_02666b(void);
 * Address  : 0x2666b (Size: 68 bytes)
 * Module   : effect.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x24ab9, 0x2606f, 0x444a9
 * Callees  : 1 -> 0xdc440
 ******************************************************************************/
ulonglong FUN_0002666b(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  byte *pbVar2;
  
  pbVar2 = &DAT_0019d0c8;
  iVar1 = 0;
  do {
    if (4 < iVar1) {
      return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
    }
    if (((*pbVar2 & 1) != 0) && ((*pbVar2 & 0x40) == 0)) {
      in_EAX = FUN_000dc440();
      iVar1 = extraout_ECX;
      if (in_EAX < 0x1801) {
        return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),1));
      }
    }
    pbVar2 = pbVar2 + 0x4ef;
    iVar1 = iVar1 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0266af (Ghidra: FUN_000266af)
 * Prototype: undefined8 sub_0266af(void);
 * Address  : 0x266af (Size: 230 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe1ec4
 * Callees  : 5 -> 0x250ef, 0x26795, 0x2684f, 0x81c10, 0x8608c
 ******************************************************************************/
undefined8 FUN_000266af(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_EDX;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar4 = (undefined4 *)&stack0xfffffff0;
  iVar1 = DAT_002e8bee - *(int *)(in_EAX + 9);
  if (*(short *)(in_EAX + 0x5e) == 0) {
    uStack_14 = 0x266cc;
    uVar2 = FUN_0002684f();
    return CONCAT44(in_EDX,uVar2);
  }
  iVar3 = iVar1 / 0x10;
  iVar1 = iVar1 % 0x10;
  if (iVar1 == 0) {
    uStack_14 = 0x266e4;
    uVar2 = FUN_00026795();
    return CONCAT44(in_EDX,uVar2);
  }
  if (iVar1 == 1) {
    puVar5 = &stack0xfffffff0;
    if (*(short *)(in_EAX + 0x17) != 0) {
      uStack_14 = 0x26719;
      uVar2 = FUN_000250ef();
      return CONCAT44(in_EDX,uVar2);
    }
  }
  else {
    puVar5 = &stack0xfffffff0;
    if ((iVar1 == 2) && (puVar5 = &stack0xfffffff0, *(short *)(in_EAX + 0x17) != 0)) {
      uStack_14 = 0x26745;
      FUN_00081c10();
      iVar3 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x17)];
      if (*(short *)(iVar3 + 0x5e) < 0) {
        uStack_14 = 0;
        *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(iVar3 + 100)] + 0x1d3) = 0x18;
        puVar4 = &uStack_18;
        uStack_18 = 1;
        iVar3 = FUN_0008608c();
      }
      *(undefined2 *)(in_EAX + 0x17) = 0;
      puVar5 = (undefined1 *)puVar4;
    }
  }
  return CONCAT44(*(undefined4 *)(puVar5 + 4),iVar3);
}

/******************************************************************************
 * Function : sub_026795 (Ghidra: FUN_00026795)
 * Prototype: void sub_026795(void);
 * Address  : 0x26795 (Size: 166 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x266af, 0xe1ec4
 * Callees  : 2 -> 0xdc354, 0xdc4cc
 ******************************************************************************/
void FUN_00026795(void)

{
  byte *pbVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar7 = 0x7fffffff;
  iVar3 = in_EAX + 0xd;
  pbVar6 = (byte *)0x0;
  uVar5 = DAT_002e6eb6;
  while (pbVar1 = (&DAT_001ae9fc)[uVar5], DAT_001ae9fc < pbVar1) {
    if (((((*pbVar1 & 0x10) == 0) && ((pbVar1[1] & 2) == 0)) && (pbVar1[6] != *(byte *)(in_EAX + 6))
        ) && (-1 < *(short *)(pbVar1 + 0x5e))) {
      iVar4 = FUN_000dc354(iVar7,iVar3,pbVar1 + 0xd);
      in_EAX = extraout_ECX;
      if ((iVar4 < iVar7) &&
         (iVar7 = iVar4,
         iVar4 < *(int *)(&DAT_002eb131 + (uint)*(byte *)(extraout_ECX + 0x19) * 4) * 0x100)) {
        cVar2 = FUN_000dc4cc();
        in_EAX = extraout_ECX_00;
        iVar7 = iVar4;
        if (cVar2 != '\0') {
          pbVar6 = pbVar1;
        }
      }
    }
    uVar5 = (uint)*(ushort *)(pbVar1 + 0x67);
  }
  if (pbVar6 == (byte *)0x0) {
    *(undefined2 *)(in_EAX + 0x17) = 0;
  }
  else {
    *(undefined2 *)(in_EAX + 0x17) = *(undefined2 *)(pbVar6 + 0x1b);
  }
  return;
}

/******************************************************************************
 * Function : sub_02683b (Ghidra: FUN_0002683b)
 * Prototype: bool sub_02683b(void);
 * Address  : 0x2683b (Size: 20 bytes)
 * Module   : effect.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2684f, 0xe1ec4
 * Callees  : 1 -> 0xdc440
 ******************************************************************************/
bool FUN_0002683b(void)

{
  int iVar1;
  
  iVar1 = FUN_000dc440();
  return iVar1 < 0x2d00;
}

/******************************************************************************
 * Function : sub_026987 (Ghidra: FUN_00026987)
 * Prototype: void sub_026987(void);
 * Address  : 0x26987 (Size: 322 bytes)
 * Module   : effect.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x24ab9
 * Callees  : 3 -> 0x265d3, 0x26ac9, 0x81c10
 ******************************************************************************/
void FUN_00026987(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  ushort *unaff_EBX;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  if (*(int *)(in_EAX + 9) == DAT_002e8bee) {
    iVar1 = ((int)(uint)*unaff_EBX >> 8) + -5;
    uVar3 = ((int)(uint)*unaff_EBX >> 8) + 6;
    local_14 = ((int)(uint)unaff_EBX[1] >> 8) + 6;
    local_20 = ((int)(uint)unaff_EBX[1] >> 8) + -5;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    if (local_20 < 0) {
      local_20 = 0;
    }
    else if (0xff < local_20) {
      local_20 = 0xff;
    }
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
    else if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    if ((int)local_14 < 0) {
      local_14 = 0;
    }
    else if (0xff < local_14) {
      local_14 = 0xff;
    }
    local_18 = local_20 * 0x500;
    for (; local_20 <= (int)local_14; local_20 = local_20 + 1) {
      for (local_1c = iVar1 * 5 + local_18; local_1c <= (int)(local_18 + uVar3 * 5);
          local_1c = local_1c + 5) {
        uVar4 = (*(uint *)((int)&DAT_00279203 + local_1c + 1) & 0x3fffff) >> 0xb;
        while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar4]) {
          iVar2 = FUN_000265d3();
          if ((iVar2 != 0) ||
             ((iVar2 = extraout_ECX, *(char *)(extraout_ECX + 0x1f) == '\t' &&
              (*(char *)(extraout_ECX + 6) != *(char *)(in_EDX + 6))))) {
            FUN_00026ac9();
            FUN_00081c10();
            iVar2 = extraout_ECX_00;
          }
          uVar4 = (uint)*(ushort *)(iVar2 + 2);
        }
      }
      local_18 = local_18 + 0x500;
    }
  }
  return;
}

