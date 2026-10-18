/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: ceiling.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 20
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_07bb10 (Ghidra: FUN_0007bb10)
 * Prototype: int sub_07bb10(void);
 * Address  : 0x7bb10 (Size: 381 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x16175
 * Callees  : 3 -> 0x7ba98, 0x7bc8d, 0xe66ec
 ******************************************************************************/
int FUN_0007bb10(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  short sVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_EDX;
  int unaff_EBX;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  int aiStack_48 [2];
  undefined1 local_40 [4];
  uint local_3c;
  undefined2 uStack_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined2 uStack_34;
  undefined2 uStack_32;
  int local_30;
  undefined4 local_2c;
  undefined2 auStack_28 [2];
  int local_24;
  uint local_20;
  undefined1 local_18;
  
  bVar11 = 0;
  uVar1 = *(undefined4 *)(in_EAX + 0xd);
  uStack_38 = *(undefined2 *)(in_EAX + 0x11);
  local_2c._1_1_ = (byte)((uint)uVar1 >> 8);
  local_2c._2_2_ = (undefined2)((uint)uVar1 >> 0x10);
  local_2c._0_1_ = (undefined1)uVar1;
  local_2c._0_2_ = CONCAT11((local_2c._1_1_ / 3) * '\x03' + '\x01',(undefined1)local_2c);
  uVar3 = local_2c;
  local_2c._3_1_ = (byte)((uint)uVar1 >> 0x18);
  local_2c._0_3_ = (undefined3)uVar3;
  local_2c = CONCAT13((local_2c._3_1_ / 3) * '\x03' + '\x01',(undefined3)local_2c);
  uVar5 = (*(byte *)((int)in_EDX + 1) / 3) * 3 + 1;
  local_20 = (*(byte *)((int)in_EDX + 3) / 3) * 3 + 1;
  uStack_32 = *(undefined2 *)(in_EDX + 1);
  local_18 = (undefined1)uVar5;
  uStack_34 = (undefined2)((uint)*in_EDX >> 0x10);
  _local_36 = CONCAT11(local_18,(char)*in_EDX);
  _local_36 = CONCAT13((undefined1)local_20,_local_36);
  local_3c = local_2c;
  local_30 = 0;
  puVar10 = local_40;
  auStack_28[0] = uStack_38;
  do {
    if (unaff_EBX <= local_30) {
      return 0;
    }
    if (((local_2c >> 8 & 0xff) == uVar5) && (local_2c >> 0x18 == local_20)) {
      return local_30 + 1;
    }
    *(undefined4 *)(puVar10 + -4) = 0x7bba7;
    uVar6 = FUN_000e66ec();
    iVar7 = (int)((uVar6 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
    *(undefined4 *)(puVar10 + -4) = 0x7bbd5;
    iVar8 = FUN_0007ba98();
    if (iVar8 == 0) {
      local_24 = unaff_EBX - local_30;
      puVar9 = puVar10 + -4;
      *(int **)(puVar10 + -4) = &local_24;
      *(undefined4 *)(puVar10 + -8) = 0x7bc2b;
      sVar4 = FUN_0007bc8d();
      if (sVar4 == -1) {
        return -1;
      }
      local_30 = local_30 + local_24;
      if (sVar4 == 1) {
        return local_30 + 1;
      }
      local_2c = local_3c;
      auStack_28[(uint)bVar11 * -4] = (&uStack_38)[(uint)bVar11 * -4];
    }
    else {
      cVar2 = *(char *)((int)&DAT_0018b67b + iVar7 * 2 + 3);
      local_3c = local_2c;
      (&uStack_38)[(uint)bVar11 * -4] = auStack_28[(uint)bVar11 * -4];
      uVar6 = local_2c;
      local_2c._0_2_ = CONCAT11(local_2c._1_1_ + cVar2 * '\x03',(undefined1)local_2c);
      uVar1 = local_2c;
      local_2c._3_1_ = SUB41(uVar6,3);
      local_2c._0_3_ = (undefined3)uVar1;
      local_2c = CONCAT13(local_2c._3_1_ + (&DAT_0018b67f)[iVar7 * 2] * '\x03',(undefined3)local_2c)
      ;
      puVar9 = puVar10;
    }
    local_30 = local_30 + 1;
    puVar10 = puVar9;
  } while( true );
}

/******************************************************************************
 * Function : sub_07bc8d (Ghidra: FUN_0007bc8d)
 * Prototype: undefined4 sub_07bc8d(void);
 * Address  : 0x7bc8d (Size: 1364 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7bb10
 * Callees  : 3 -> 0x7ba98, 0xe66ec, 0xe69fc
 ******************************************************************************/
undefined4 FUN_0007bc8d(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  char in_CL;
  ushort *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *piVar16;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  char extraout_DL;
  int in_EDX;
  int unaff_EBX;
  uint local_5c;
  undefined1 local_4c;
  undefined1 local_48;
  ushort local_40;
  uint local_3c;
  undefined1 local_38;
  undefined1 local_34;
  uint local_20;
  uint local_18;
  char local_14;
  char local_10;
  
  bVar5 = *(byte *)(unaff_EBX + 1);
  bVar6 = *(byte *)(unaff_EBX + 3);
  uVar1 = (ushort)*(byte *)(in_EDX + 1);
  uVar2 = (ushort)*(byte *)(in_EDX + 3);
  FUN_000e69fc();
  local_20 = (byte)(in_CL + 1) & 0xffffff03;
  FUN_000e69fc();
  iVar12 = FUN_000e69fc();
  local_3c = iVar12 - 1;
  local_5c = (byte)(extraout_DL + 3) & 0xffffff03;
  uVar3 = (ushort)*(byte *)(in_EDX + 1);
  bVar9 = *(byte *)(in_EDX + 3);
  FUN_000e69fc();
  uVar4 = (ushort)bVar9;
  local_10 = '\0';
  FUN_000e69fc();
  iVar12 = FUN_000e69fc();
  local_18 = iVar12 - 1;
  uVar7 = *extraout_ECX;
  local_14 = '\0';
  while( true ) {
    local_38 = (undefined1)uVar3;
    local_48 = (undefined1)uVar4;
    local_4c = (undefined1)uVar1;
    local_34 = (undefined1)uVar2;
    if ((uVar7 == 0) || ((local_10 == '\x02' && (local_14 == '\x02')))) break;
    if (local_10 != '\x02') {
      uVar13 = FUN_000e66ec();
      FUN_000e69fc();
      FUN_000e69fc();
      iVar12 = FUN_000e69fc();
      piVar16 = extraout_ECX_00;
      if ((int)(local_3c & 0xffff) < iVar12) {
LAB_0007beb8:
        if (local_10 == '\x01') {
          *(undefined1 *)(in_EDX + 1) = local_4c;
          local_48 = local_34;
          goto LAB_0007c1d0;
        }
        bVar9 = (char)local_20 + 3;
        uVar8 = 0;
        while( true ) {
          uVar13 = bVar9 & 0xffffff03;
          if (3 < uVar8) break;
          iVar12 = (bVar9 & 0xff03) * 2;
          iVar14 = FUN_0007ba98();
          piVar16 = extraout_ECX_03;
          if (iVar14 != 0) {
            uVar1 = uVar1 + *(char *)((int)&DAT_0018b67b + iVar12 + 3) * 3;
            uVar2 = uVar2 + (char)(&DAT_0018b67f)[iVar12] * 3;
            local_20 = uVar13;
            break;
          }
          bVar9 = (char)uVar13 + 1;
          uVar8 = uVar8 + 1;
        }
      }
      else {
        iVar12 = ((int)((uVar13 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9) * 2;
        iVar14 = FUN_0007ba98();
        piVar16 = extraout_ECX_01;
        if (iVar14 == 0) goto LAB_0007beb8;
        uVar1 = uVar1 + *(char *)((int)&DAT_0018b67b + iVar12 + 3) * 3;
        uVar2 = uVar2 + (char)(&DAT_0018b67f)[iVar12] * 3;
        FUN_000e69fc();
        FUN_000e69fc();
        local_3c = FUN_000e69fc();
        local_10 = '\x01';
        piVar16 = extraout_ECX_02;
      }
      if ((uVar1 == bVar5) && (uVar2 == bVar6)) goto LAB_0007bf6c;
    }
    if (local_14 != '\x02') {
      uVar13 = FUN_000e66ec();
      FUN_000e69fc();
      FUN_000e69fc();
      iVar12 = FUN_000e69fc();
      piVar16 = extraout_ECX_04;
      if ((int)(local_18 & 0xffff) < iVar12) {
LAB_0007c0a2:
        if (local_14 == '\x01') {
          *(undefined1 *)(in_EDX + 1) = local_38;
          goto LAB_0007c1d0;
        }
        bVar9 = (char)local_5c + 1;
        uVar8 = 0;
        while( true ) {
          uVar13 = bVar9 & 0xffffff03;
          if (3 < uVar8) break;
          iVar12 = (bVar9 & 0xff03) * 2;
          iVar14 = FUN_0007ba98();
          piVar16 = extraout_ECX_07;
          if (iVar14 != 0) {
            uVar3 = uVar3 + *(char *)((int)&DAT_0018b67b + iVar12 + 3) * 3;
            uVar4 = uVar4 + (char)(&DAT_0018b67f)[iVar12] * 3;
            local_5c = uVar13;
            break;
          }
          bVar9 = (char)uVar13 + 3;
          uVar8 = uVar8 + 1;
        }
      }
      else {
        iVar12 = ((int)((uVar13 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9) * 2;
        iVar14 = FUN_0007ba98();
        piVar16 = extraout_ECX_05;
        if (iVar14 == 0) goto LAB_0007c0a2;
        uVar3 = uVar3 + *(char *)((int)&DAT_0018b67b + iVar12 + 3) * 3;
        uVar4 = uVar4 + (char)(&DAT_0018b67f)[iVar12] * 3;
        FUN_000e69fc();
        FUN_000e69fc();
        local_18 = FUN_000e69fc();
        local_14 = '\x01';
        piVar16 = extraout_ECX_06;
      }
      if ((uVar3 == bVar5) && (uVar4 == bVar6)) {
LAB_0007bf6c:
        *piVar16 = *piVar16 - (uint)uVar7;
        return 1;
      }
    }
    uVar7 = uVar7 - 1;
  }
  if (uVar7 == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    sVar10 = FUN_000e69fc();
    sVar11 = FUN_000e69fc();
    local_40 = sVar10 + sVar11;
    sVar10 = FUN_000e69fc();
    sVar11 = FUN_000e69fc();
    piVar16 = extraout_ECX_08;
    if ((ushort)(sVar10 + sVar11) < local_40) {
      *(undefined1 *)(in_EDX + 1) = local_38;
    }
    else {
      *(undefined1 *)(in_EDX + 1) = local_4c;
      local_48 = local_34;
    }
LAB_0007c1d0:
    *(undefined1 *)(in_EDX + 3) = local_48;
    *piVar16 = *piVar16 - (uint)uVar7;
    uVar15 = 0;
  }
  return uVar15;
}

/******************************************************************************
 * Function : dk_illegal_ceiling_step_value_07c1f0 (Ghidra: FUN_0007c1f0)
 * Prototype: undefined4 dk_illegal_ceiling_step_value_07c1f0(void);
 * Address  : 0x7c1f0 (Size: 190 bytes)
 * Module   : ceiling.cpp [direct_file_string_xref]
 * OrigLine : ceiling.cpp:46 ("Max height is too high"); ceiling.cpp:50 ("Ceiling max height is smaller than min height"); ceiling.cpp:58 ("Ceiling search distance too big")
 * Naming   : String 'Illegal ceiling step value'
 * Callers  : 2 -> 0x225c0, 0x6a553
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x169d63: "ceiling.cpp"
 *   - 0x169d86: "ceiling.cpp"
 *   - 0x169dc0: "ceiling.cpp"
 *   - 0x169dec: "ceiling.cpp"
 *   - 0x169d48: "Illegal ceiling step value"
 *   - 0x169d6f: "Max height is too high"
 *   - 0x169d92: "Ceiling max height is smaller than min height"
 *   - 0x169dcc: "Ceiling search distance too big"
 ******************************************************************************/
undefined4 FUN_0007c1f0(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if (0 < unaff_EBX) {
    if (0xf < in_EAX) {
      FUN_000ddaf0(); /* LbErrorLog("ceiling.cpp", line 46, "Max height is too high") */
      return 0;
    }
    if (in_EAX < in_EDX) {
      FUN_000ddaf0(); /* LbErrorLog("ceiling.cpp", line 50, "Ceiling max height is smaller than min height") */
      return 0;
    }
    DAT_002e78b8 = (in_EAX - in_EDX) / unaff_EBX;
    if (0x9c3 < DAT_002e78b8) {
      DAT_002e78b8 = 0x9c4;
    }
    if (DAT_002e78b8 < 0x15) {
      iVar1 = DAT_002e78b8 * 2 + 1;
      DAT_002e78b0 = in_EAX;
      DAT_002e78b4 = in_EDX;
      DAT_002e78c0 = unaff_EBX;
      DAT_002e78bc = iVar1 * iVar1;
      return 1;
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("ceiling.cpp", line 58, "Ceiling search distance too big") */
  return 0;
}

/******************************************************************************
 * Function : sub_07c3c8 (Ghidra: FUN_0007c3c8)
 * Prototype: undefined4 sub_07c3c8(void);
 * Address  : 0x7c3c8 (Size: 455 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 2 -> 0x7caf0, 0x7cd3c
 ******************************************************************************/
undefined4 FUN_0007c3c8(void)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  char *pcVar7;
  int local_44;
  uint local_40;
  int local_3c;
  uint *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_3c = 0;
  do {
    local_24 = local_3c * 0x100;
    local_2c = local_3c * 0x500;
    local_30 = 0;
    do {
      local_28 = (uint *)((int)&DAT_00279203 + local_2c + 1);
      iVar4 = (int)((local_24 + (local_24 >> 0x1f) * -0x100) - (uint)((local_24 >> 0x1f) << 7 < 0))
              >> 8;
      local_40 = FUN_0007cd3c();
      uVar5 = local_40;
      if (0x7fffffff < local_40) {
        local_20 = local_24;
        iVar6 = 0;
        pcVar7 = (char *)&DAT_002ee9c1;
        local_38 = &local_40;
        local_34 = &local_44;
        piVar2 = &local_44;
        local_1c = iVar4;
        local_18 = extraout_ECX_00;
        if (0 < DAT_002e78bc) {
          do {
            iVar4 = *pcVar7 + local_1c;
            if ((((-1 < pcVar7[1] + local_18) && (pcVar7[1] + local_18 < 0x100)) && (-1 < iVar4)) &&
               ((iVar4 < 0x100 && (uVar5 = FUN_0007cd3c(), -1 < (int)uVar5)))) {
              *local_38 = uVar5;
              uVar3 = local_18 - extraout_ECX;
              uVar5 = local_1c - iVar4;
              if ((int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) <
                  (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
                uVar5 = uVar3;
              }
              *local_34 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
              bVar1 = true;
              goto LAB_0007c568;
            }
            iVar6 = iVar6 + 1;
            pcVar7 = pcVar7 + 4;
            piVar2 = local_34;
          } while (iVar6 < DAT_002e78bc);
        }
        local_34 = piVar2;
        bVar1 = false;
LAB_0007c568:
        uVar5 = DAT_002e78b0;
        if (bVar1) {
          uVar5 = FUN_0007caf0();
        }
      }
      local_30 = local_30 + 1;
      *(byte *)((int)local_28 + 3) = *(byte *)((int)local_28 + 3) & 0xf0;
      local_24 = local_24 + 1;
      local_2c = local_2c + 5;
      *local_28 = *local_28 | (uVar5 & 0xf) << 0x18;
    } while (local_30 < 0xff);
    local_3c = local_3c + 1;
    if (0xfe < local_3c) {
      return 1;
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_07c590 (Ghidra: FUN_0007c590)
 * Prototype: undefined4 sub_07c590(void);
 * Address  : 0x7c590 (Size: 736 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x14a68, 0x22660, 0x449a4
 * Callees  : 2 -> 0x7caf0, 0x7cd3c
 ******************************************************************************/
undefined4 FUN_0007c590(void)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int in_ECX;
  int extraout_ECX;
  int iVar8;
  int in_EDX;
  int unaff_EBX;
  int iVar9;
  int iVar10;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_4c = DAT_002e78b8;
  if (4 < DAT_002e78b8) {
    local_4c = 4;
  }
  local_34 = in_EAX - local_4c;
  if (local_34 < 1) {
    local_34 = 0;
  }
  local_48 = in_EDX - local_4c;
  if (local_48 < 1) {
    local_48 = 0;
  }
  local_2c = unaff_EBX + local_4c;
  if (0xff < local_2c) {
    local_2c = 0x100;
  }
  local_4c = local_4c + in_ECX;
  if (0xff < local_4c) {
    local_4c = 0x100;
  }
  DAT_00377760 = DAT_00199228;
  local_38 = local_34 - DAT_002e78b8;
  if (local_38 < 1) {
    local_38 = 0;
  }
  iVar5 = local_48 - DAT_002e78b8;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar10 = local_2c + DAT_002e78b8;
  if (0xff < iVar10) {
    iVar10 = 0x100;
  }
  local_44 = DAT_002e78b8 + local_4c;
  if (0xff < local_44) {
    local_44 = 0x100;
  }
  if (iVar5 < local_44) {
    local_3c = iVar5 << 8;
    iVar8 = local_38;
    do {
      for (; iVar8 < iVar10; iVar8 = iVar8 + 1) {
        uVar4 = FUN_0007cd3c();
        *(undefined1 *)(extraout_ECX + DAT_00377760) = uVar4;
      }
      local_3c = local_3c + 0x100;
      iVar5 = iVar5 + 1;
      iVar8 = local_38;
    } while (iVar5 < local_44);
  }
  if (local_48 < local_4c) {
    local_30 = local_48 << 8;
    local_40 = local_4c << 8;
    do {
      local_24 = local_34;
      local_1c = local_34 + local_30;
      if (local_34 < local_2c) {
        local_20 = local_1c * 5;
        do {
          iVar5 = local_20;
          puVar1 = (uint *)((int)&DAT_00279203 + local_20 + 1);
          uVar6 = (uint)*(char *)(DAT_00377760 + local_1c);
          if (0x7fffffff < uVar6) {
            local_28 = &local_50;
            local_18 = local_1c;
            local_10 = local_1c % 0x100;
            local_14 = local_1c / 0x100;
            iVar10 = 0;
            piVar7 = &DAT_002ee9c1;
            if (0 < DAT_002e78bc) {
              do {
                iVar8 = *(char *)((int)piVar7 + 1) + local_10;
                iVar9 = (char)*piVar7 + local_14;
                if ((((-1 < iVar8) && (iVar8 < 0x100)) && (-1 < iVar9)) &&
                   ((iVar9 < 0x100 &&
                    (cVar2 = *(char *)(DAT_00377760 + (*piVar7 >> 0x10) + local_1c),
                    local_50 = (uint)cVar2, -1 < cVar2)))) {
                  bVar3 = true;
                  goto LAB_0007c807;
                }
                iVar10 = iVar10 + 1;
                piVar7 = piVar7 + 1;
              } while (iVar10 < DAT_002e78bc);
            }
            bVar3 = false;
            local_50 = uVar6;
LAB_0007c807:
            uVar6 = DAT_002e78b0;
            if (bVar3) {
              uVar6 = FUN_0007caf0();
            }
          }
          local_20 = local_20 + 5;
          local_1c = local_1c + 1;
          (&DAT_00279207)[iVar5] = (&DAT_00279207)[iVar5] & 0xf0;
          local_24 = local_24 + 1;
          *puVar1 = *puVar1 | (uVar6 & 0xf) << 0x18;
        } while (local_24 < local_2c);
      }
      local_30 = local_30 + 0x100;
    } while (local_30 < local_40);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_07c870 (Ghidra: FUN_0007c870)
 * Prototype: undefined8 sub_07c870(void);
 * Address  : 0x7c870 (Size: 295 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x7caf0, 0x7cd3c
 ******************************************************************************/
undefined8 FUN_0007c870(void)

{
  bool bVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *extraout_ECX;
  uint uVar6;
  undefined4 in_EDX;
  int iVar7;
  int iVar8;
  int local_34;
  uint local_30;
  int *local_2c;
  uint *local_28;
  int local_20;
  int local_1c;
  
  iVar3 = (int)((in_EAX + (in_EAX >> 0x1f) * -0x100) - (uint)((in_EAX >> 0x1f) << 7 < 0)) >> 8;
  local_30 = FUN_0007cd3c();
  uVar4 = local_30;
  if (0x7fffffff < local_30) {
    iVar7 = 0;
    local_28 = &local_30;
    pcVar5 = (char *)&DAT_002ee9c1;
    local_2c = &local_34;
    piVar2 = &local_34;
    local_20 = in_EAX % 0x100;
    local_1c = iVar3;
    if (0 < DAT_002e78bc) {
      do {
        iVar3 = pcVar5[1] + local_20;
        iVar8 = *pcVar5 + local_1c;
        if ((((-1 < iVar3) && (iVar3 < 0x100)) && (-1 < iVar8)) &&
           ((iVar8 < 0x100 && (uVar4 = FUN_0007cd3c(), pcVar5 = extraout_ECX, -1 < (int)uVar4)))) {
          *local_28 = uVar4;
          uVar6 = local_20 - iVar3;
          uVar4 = local_1c - iVar8;
          if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
              (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f))) {
            uVar4 = uVar6;
          }
          *local_2c = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
          bVar1 = true;
          goto LAB_0007c976;
        }
        iVar7 = iVar7 + 1;
        pcVar5 = pcVar5 + 4;
        piVar2 = local_2c;
      } while (iVar7 < DAT_002e78bc);
    }
    local_2c = piVar2;
    bVar1 = false;
LAB_0007c976:
    uVar4 = DAT_002e78b0;
    if (bVar1) {
      uVar4 = FUN_0007caf0();
    }
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_07c998 (Ghidra: FUN_0007c998)
 * Prototype: undefined8 sub_07c998(void);
 * Address  : 0x7c998 (Size: 281 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x7caf0
 ******************************************************************************/
undefined8 FUN_0007c998(void)

{
  bool bVar1;
  int in_EAX;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_EDX;
  int iVar6;
  int iVar7;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_20;
  int local_1c;
  
  uVar2 = (uint)*(char *)(in_EAX + DAT_00377760);
  if (0x7fffffff < uVar2) {
    local_1c = in_EAX % 0x100;
    local_20 = in_EAX / 0x100;
    iVar6 = 0;
    piVar3 = &DAT_002ee9c1;
    if (0 < DAT_002e78bc) {
      do {
        iVar5 = *(char *)((int)piVar3 + 1) + local_1c;
        iVar7 = (char)*piVar3 + local_20;
        if ((((-1 < iVar5) && (iVar5 < 0x100)) && (-1 < iVar7)) &&
           ((iVar7 < 0x100 &&
            (local_2c = (uint)*(char *)(DAT_00377760 + (*piVar3 >> 0x10) + in_EAX),
            -1 < (int)local_2c)))) {
          uVar4 = local_1c - iVar5;
          uVar2 = local_20 - iVar7;
          if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) <
              (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) {
            uVar2 = uVar4;
          }
          local_30 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
          bVar1 = true;
          goto LAB_0007ca90;
        }
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar6 < DAT_002e78bc);
    }
    bVar1 = false;
    local_2c = uVar2;
LAB_0007ca90:
    local_28 = &local_30;
    uVar2 = DAT_002e78b0;
    if (bVar1) {
      uVar2 = FUN_0007caf0();
    }
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_07caf0 (Ghidra: FUN_0007caf0)
 * Prototype: int sub_07caf0(void);
 * Address  : 0x7caf0 (Size: 49 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x7c3c8, 0x7c590, 0x7c870, 0x7c998
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_0007caf0(void)

{
  int in_EAX;
  int in_EDX;
  
  if (in_EAX < DAT_002e78b0) {
    in_EAX = in_EAX + in_EDX * DAT_002e78c0;
    if (DAT_002e78b0 <= in_EAX) {
      return DAT_002e78b0;
    }
  }
  else if (DAT_002e78b0 < in_EAX) {
    in_EAX = in_EAX - in_EDX * DAT_002e78c0;
    if (in_EAX <= DAT_002e78b4) {
      in_EAX = DAT_002e78b4;
    }
  }
  return in_EAX;
}

/******************************************************************************
 * Function : sub_07cd3c (Ghidra: FUN_0007cd3c)
 * Prototype: uint sub_07cd3c(void);
 * Address  : 0x7cd3c (Size: 781 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x7c3c8, 0x7c590, 0x7c870
 * Callees  : 1 -> 0x157e4
 ******************************************************************************/
uint FUN_0007cd3c(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int in_EAX;
  uint uVar4;
  int in_EDX;
  int unaff_EBX;
  
  if ((*(byte *)((int)&DAT_00279203 + in_EAX * 5) & 0x10) == 0) {
    if ((*(byte *)((int)&DAT_0019e973 +
                  (*(uint *)((int)&DAT_00279203 + in_EAX * 5 + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    bVar1 = *(byte *)((int)&DAT_0019e973 +
                     (*(uint *)((int)&DAT_00279203 + in_EAX * 5 + 1) & 0x7ff) * 0x18 + 2);
    if ((bVar1 & 0xe) == 0) {
      uVar4 = (uint)(bVar1 >> 4);
    }
    else {
      uVar4 = FUN_000157e4();
    }
  }
  else {
    if (in_EDX < 1) {
      if (0 < unaff_EBX) {
        iVar2 = (in_EAX + -0x100) * 5;
        if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) == 0) {
          if ((*(byte *)((int)&DAT_0019e973 +
                        (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
          {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          bVar1 = *(byte *)((int)&DAT_0019e973 +
                           (*(uint *)((int)&DAT_00279203 + (in_EAX + -0x100) * 5 + 1) & 0x7ff) *
                           0x18 + 2);
          if ((bVar1 & 0xe) != 0) {
            uVar4 = FUN_000157e4();
            return uVar4;
          }
          return (uint)(bVar1 >> 4);
        }
      }
    }
    else {
      iVar2 = (in_EAX + -1) * 5;
      if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) == 0) {
        if ((*(byte *)((int)&DAT_0019e973 +
                      (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        bVar1 = *(byte *)((int)&DAT_0019e973 +
                         (*(uint *)((int)&DAT_00279203 + (in_EAX + -1) * 5 + 1) & 0x7ff) * 0x18 + 2)
        ;
        if ((bVar1 & 0xe) != 0) {
          uVar4 = FUN_000157e4();
          return uVar4;
        }
        return (uint)(bVar1 >> 4);
      }
      if (0 < unaff_EBX) {
        iVar2 = (in_EAX + -0x100) * 5;
        if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) == 0) {
          if ((*(byte *)((int)&DAT_0019e973 +
                        (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
          {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          bVar1 = *(byte *)((int)&DAT_0019e973 +
                           (*(uint *)((int)&DAT_00279203 + (in_EAX + -0x100) * 5 + 1) & 0x7ff) *
                           0x18 + 2);
          if ((bVar1 & 0xe) != 0) {
            uVar4 = FUN_000157e4();
            return uVar4;
          }
          return (uint)(bVar1 >> 4);
        }
        iVar2 = (in_EAX + -0x101) * 5;
        if ((*(byte *)((int)&DAT_00279203 + iVar2) & 0x10) == 0) {
          if ((*(byte *)((int)&DAT_0019e973 +
                        (*(uint *)((int)&DAT_00279203 + iVar2 + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
          {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          bVar1 = *(byte *)((int)&DAT_0019e973 +
                           (*(uint *)((int)&DAT_00279203 + (in_EAX + -0x101) * 5 + 1) & 0x7ff) *
                           0x18 + 2);
          if ((bVar1 & 0xe) != 0) {
            uVar4 = FUN_000157e4();
            return uVar4;
          }
          return (uint)(bVar1 >> 4);
        }
      }
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

/******************************************************************************
 * Function : sub_07d100 (Ghidra: FUN_0007d100)
 * Prototype: byte * sub_07d100(void);
 * Address  : 0x7d100 (Size: 755 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xab8dc
 * Callees  : 0 -> 
 ******************************************************************************/
byte * FUN_0007d100(void)

{
  byte *pbVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  ushort in_CX;
  int in_EDX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short unaff_BX;
  int iVar7;
  byte *pbVar8;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar7 = 0x7fffffff;
  pbVar8 = (byte *)0x0;
  if ((unaff_BX == 5) && (in_CX == 0xffff)) {
    for (pbVar1 = (&DAT_001ae9fc)[DAT_002e6eb6]; DAT_001ae9fc < pbVar1;
        pbVar1 = (&DAT_001ae9fc)[*(ushort *)(pbVar1 + 0x67)]) {
      if ((((*pbVar1 & 0x10) == 0) && ((pbVar1[1] & 2) == 0)) &&
         (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
         uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
         iVar2 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar5) - uVar5) +
                 ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar4) - uVar4), iVar2 < iVar7)) {
        iVar7 = iVar2;
        pbVar8 = pbVar1;
      }
    }
  }
  else if ((unaff_BX == -1) && (in_CX == 0xffff)) {
    iVar2 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar2);
      if ((((*pbVar1 & 1) != 0) && ((*pbVar1 & 0x10) == 0)) &&
         (((pbVar1[1] & 2) == 0 &&
          (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
          uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
          iVar3 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar5) - uVar5) +
                  ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar4) - uVar4), iVar3 < iVar7)))) {
        iVar7 = iVar3;
        pbVar8 = pbVar1;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x2000);
  }
  else {
    uVar4 = (uint)unaff_BX;
    if (uVar4 == 0xffffffff) {
      local_24 = 4;
      do {
        pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_24);
        if (((((*pbVar1 & 1) != 0) && (pbVar1[0x1a] == in_CX)) && ((*pbVar1 & 0x10) == 0)) &&
           (((pbVar1[1] & 2) == 0 &&
            (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
            uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
            iVar2 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar5) - uVar5) +
                    ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar4) - uVar4), iVar2 < iVar7))))
        {
          iVar7 = iVar2;
          pbVar8 = pbVar1;
        }
        local_24 = local_24 + 4;
      } while (local_24 != 0x2000);
    }
    else if (in_CX == 0xffff) {
      local_1c = 4;
      do {
        pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_1c);
        if ((((*pbVar1 & 1) != 0) && (pbVar1[0x1f] == uVar4)) &&
           (((*pbVar1 & 0x10) == 0 &&
            (((pbVar1[1] & 2) == 0 &&
             (uVar5 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
             uVar6 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
             iVar2 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar6) - uVar6) +
                     ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar5) - uVar5), iVar2 < iVar7))))
           )) {
          iVar7 = iVar2;
          pbVar8 = pbVar1;
        }
        local_1c = local_1c + 4;
      } while (local_1c != 0x2000);
    }
    else {
      local_20 = 4;
      do {
        pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_20);
        if (((((*pbVar1 & 1) != 0) && (pbVar1[0x1a] == in_CX)) &&
            (CONCAT31((int3)(char)(in_CX >> 8),pbVar1[0x1f]) == uVar4)) &&
           ((((*pbVar1 & 0x10) == 0 && ((pbVar1[1] & 2) == 0)) &&
            (uVar5 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
            uVar6 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
            iVar2 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar6) - uVar6) +
                    ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar5) - uVar5), iVar2 < iVar7))))
        {
          iVar7 = iVar2;
          pbVar8 = pbVar1;
        }
        local_20 = local_20 + 4;
      } while (local_20 != 0x2000);
    }
  }
  return pbVar8;
}

/******************************************************************************
 * Function : sub_07d3f4 (Ghidra: FUN_0007d3f4)
 * Prototype: byte * sub_07d3f4(void);
 * Address  : 0x7d3f4 (Size: 638 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * FUN_0007d3f4(void)

{
  byte *pbVar1;
  byte *in_EAX;
  int iVar2;
  int iVar3;
  ushort in_CX;
  int iVar4;
  int in_EDX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  byte *pbVar8;
  int in_stack_00000002;
  int local_28;
  int local_20;
  int local_18;
  
  iVar4 = 0x7fffffff;
  pbVar8 = (byte *)0x0;
  uVar5 = in_stack_00000002 >> 0x10;
  if ((in_CX == 0xffff) && (uVar5 == 0xffffffff)) {
    local_20 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_20);
      if ((((*pbVar1 & 1) != 0) && ((*pbVar1 & 0x10) == 0)) &&
         (((pbVar1[1] & 2) == 0 && (pbVar1 != in_EAX)))) {
        uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f;
        uVar6 = (int)(unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f;
        iVar2 = ((unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar6) - uVar6) +
                ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar5) - uVar5);
        if (iVar2 < iVar4) {
          iVar4 = iVar2;
          pbVar8 = pbVar1;
        }
      }
      local_20 = local_20 + 4;
    } while (local_20 != 0x2000);
  }
  else if (in_CX == 0xffff) {
    local_28 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_28);
      if (((((*pbVar1 & 1) != 0) && (pbVar1[0x1a] == uVar5)) && ((*pbVar1 & 0x10) == 0)) &&
         (((pbVar1[1] & 2) == 0 && (pbVar1 != in_EAX)))) {
        uVar6 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f;
        uVar7 = (int)(unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f;
        iVar2 = ((unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar7) - uVar7) +
                ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar6) - uVar6);
        if (iVar2 < iVar4) {
          iVar4 = iVar2;
          pbVar8 = pbVar1;
        }
      }
      local_28 = local_28 + 4;
    } while (local_28 != 0x2000);
  }
  else if (uVar5 == 0xffffffff) {
    iVar2 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar2);
      if ((((*pbVar1 & 1) != 0) && (pbVar1[0x1f] == in_CX)) &&
         (((*pbVar1 & 0x10) == 0 && (((pbVar1[1] & 2) == 0 && (pbVar1 != in_EAX)))))) {
        uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f;
        uVar6 = (int)(unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f;
        iVar3 = ((unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar6) - uVar6) +
                ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar5) - uVar5);
        if (iVar3 < iVar4) {
          iVar4 = iVar3;
          pbVar8 = pbVar1;
        }
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x2000);
  }
  else {
    local_18 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_18);
      if ((*pbVar1 & 1) != 0) {
        if ((((pbVar1[0x1a] == uVar5) &&
             (CONCAT31((int3)(char)((uint)in_stack_00000002 >> 0x18),pbVar1[0x1f]) ==
              (int)(short)in_CX)) && ((*pbVar1 & 0x10) == 0)) &&
           (((pbVar1[1] & 2) == 0 && (pbVar1 != in_EAX)))) {
          uVar6 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f;
          uVar7 = (int)(unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f;
          iVar2 = ((unaff_EBX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar7) - uVar7) +
                  ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar6) - uVar6);
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
            pbVar8 = pbVar1;
          }
        }
      }
      local_18 = local_18 + 4;
    } while (local_18 != 0x2000);
  }
  return pbVar8;
}

/******************************************************************************
 * Function : sub_07d674 (Ghidra: FUN_0007d674)
 * Prototype: int sub_07d674(void);
 * Address  : 0x7d674 (Size: 212 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x10f6c
 * Callees  : 2 -> 0x5131e, 0x827fc
 ******************************************************************************/
int FUN_0007d674(void)

{
  char cVar1;
  int iVar2;
  int in_EDX;
  uint uVar3;
  int iVar4;
  int local_20;
  
  local_20 = 0;
  uVar3 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = uVar3 >> 0xd | uVar3 * 0x80000;
  uVar3 = DAT_002e8bf6 % (uint)*(ushort *)(in_EDX + 0x3b);
  iVar4 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(in_EDX + 0x3b) <= iVar4) {
      return local_20;
    }
    iVar2 = FUN_0005131e();
    if (((iVar2 != 0) && (cVar1 = FUN_000827fc(), cVar1 != '\0')) &&
       (uVar3 = uVar3 - 1, local_20 = iVar2, uVar3 == 0)) break;
    iVar4 = iVar4 + 1;
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_07d748 (Ghidra: FUN_0007d748)
 * Prototype: byte * sub_07d748(void);
 * Address  : 0x7d748 (Size: 120 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * FUN_0007d748(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = 0x7fffffff;
  pbVar6 = (byte *)0x0;
  pbVar4 = &DAT_002eb40b;
  do {
    if (((*pbVar4 & 1) != 0) &&
       (uVar2 = (int)(in_EAX - (uint)*(ushort *)(pbVar4 + 1)) >> 0x1f,
       uVar3 = (int)(in_EDX - (uint)*(ushort *)(pbVar4 + 3)) >> 0x1f,
       iVar1 = ((in_EDX - (uint)*(ushort *)(pbVar4 + 3) ^ uVar3) - uVar3) +
               ((in_EAX - (uint)*(ushort *)(pbVar4 + 1) ^ uVar2) - uVar2), iVar1 < iVar5)) {
      iVar5 = iVar1;
      pbVar6 = pbVar4;
    }
    pbVar4 = pbVar4 + 10;
  } while (pbVar4 != &DAT_002eb541);
  return pbVar6;
}

/******************************************************************************
 * Function : sub_07d7c0 (Ghidra: FUN_0007d7c0)
 * Prototype: byte * sub_07d7c0(int param_1);
 * Address  : 0x7d7c0 (Size: 598 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * FUN_0007d7c0(int param_1)

{
  byte *pbVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  ushort in_CX;
  int in_EDX;
  uint uVar4;
  uint uVar5;
  short unaff_BX;
  int iVar6;
  byte *pbVar7;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar6 = 0x7fffffff;
  pbVar7 = (byte *)0x0;
  if ((unaff_BX == -1) && (in_CX == 0xffff)) {
    local_24 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_24);
      if (((*pbVar1 & 1) != 0) &&
         (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
         uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
         iVar2 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar5) - uVar5) +
                 ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar4) - uVar4), iVar2 < iVar6)) {
        iVar6 = iVar2;
        pbVar7 = pbVar1;
      }
      local_24 = local_24 + 4;
    } while (local_24 != 0x2000);
  }
  else if (unaff_BX == -1) {
    iVar2 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar2);
      if ((((*pbVar1 & 1) != 0) && (pbVar1[0x1a] == in_CX)) &&
         (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
         uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
         iVar3 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar5) - uVar5) +
                 ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar4) - uVar4), iVar3 < iVar6)) {
        iVar6 = iVar3;
        pbVar7 = pbVar1;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != 0x2000);
  }
  else if (in_CX == 0xffff) {
    local_20 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_20);
      if ((((*pbVar1 & 1) != 0) && ((uint)pbVar1[0x1f] == (int)unaff_BX)) &&
         (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
         uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
         iVar2 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar5) - uVar5) +
                 ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar4) - uVar4), iVar2 < iVar6)) {
        iVar6 = iVar2;
        pbVar7 = pbVar1;
      }
      local_20 = local_20 + 4;
    } while (local_20 != 0x2000);
  }
  else {
    local_1c = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + local_1c);
      if (((((*pbVar1 & 1) != 0) && (pbVar1[0x1a] == in_CX)) &&
          (CONCAT31((int3)(char)(in_CX >> 8),pbVar1[0x1f]) == (int)unaff_BX)) &&
         (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar1 + 0xd)) >> 0x1f,
         uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar1 + 0xf)) >> 0x1f,
         iVar2 = ((in_EDX - (uint)*(ushort *)(pbVar1 + 0xf) ^ uVar5) - uVar5) +
                 ((in_EAX - (uint)*(ushort *)(pbVar1 + 0xd) ^ uVar4) - uVar4), iVar2 < iVar6)) {
        iVar6 = iVar2;
        pbVar7 = pbVar1;
      }
      local_1c = local_1c + 4;
    } while (local_1c != 0x2000);
  }
  if ((pbVar7 != (byte *)0x0) &&
     (uVar4 = (int)(in_EAX - (uint)*(ushort *)(pbVar7 + 0xd)) >> 0x1f,
     uVar5 = (int)(in_EDX - (uint)*(ushort *)(pbVar7 + 0xf)) >> 0x1f,
     param_1 < (int)(((in_EDX - (uint)*(ushort *)(pbVar7 + 0xf) ^ uVar5) - uVar5) +
                    ((in_EAX - (uint)*(ushort *)(pbVar7 + 0xd) ^ uVar4) - uVar4)))) {
    pbVar7 = (byte *)0x0;
  }
  return pbVar7;
}

/******************************************************************************
 * Function : sub_07da18 (Ghidra: FUN_0007da18)
 * Prototype: undefined8 sub_07da18(void);
 * Address  : 0x7da18 (Size: 148 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 13 -> 0x7daac, 0xdc4cc, 0xdc5c4, 0xdc800, 0xdc859, 0xdc8ad, 0xdc8f9, 0xdccfc, 0xdcd44, 0xdd414 ...
 * Callees  : 1 -> 0xb391c
 ******************************************************************************/
undefined8 FUN_0007da18(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint extraout_ECX;
  undefined4 in_EDX;
  uint local_14;
  uint local_10;
  
  iVar1 = (uint)CONCAT11(*(undefined1 *)(in_EAX + 3),*(undefined1 *)(in_EAX + 1)) * 5;
  uVar4 = *(uint *)((int)&DAT_00279203 + iVar1 + 1) & 0x7ff;
  iVar2 = uVar4 * 0x18;
  puVar3 = &DAT_0019e973 + uVar4 * 6;
  if ((*(byte *)((int)&DAT_0019e973 + iVar2 + 2) & 0xe) == 0) {
    if (((undefined4 *)((*(uint *)((int)&DAT_00279203 + iVar1 + 1) & 0xfffffff) >> 0x18) <=
         (undefined4 *)(uint)*(byte *)(in_EAX + 5)) ||
       (puVar3 = (undefined4 *)(uint)(*(byte *)((int)&DAT_0019e973 + iVar2 + 2) >> 4),
       (undefined4 *)(uint)*(byte *)(in_EAX + 5) < puVar3)) {
      uVar4 = CONCAT31((int3)((uint)puVar3 >> 8),1);
      goto LAB_0007daa5;
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_000b391c();
    if ((local_10 <= extraout_ECX) || (extraout_ECX < local_14)) {
      uVar4 = CONCAT31((int3)((uint)puVar3 >> 8),1);
      goto LAB_0007daa5;
    }
  }
  uVar4 = (uint)puVar3 & 0xffffff00;
LAB_0007daa5:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_07daac (Ghidra: FUN_0007daac)
 * Prototype: undefined4 sub_07daac(void);
 * Address  : 0x7daac (Size: 52 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xdc984
 * Callees  : 2 -> 0x22b3a, 0x7da18
 ******************************************************************************/
undefined4 FUN_0007daac(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  iVar1 = FUN_00022b3a();
  if (iVar1 == 0) {
    uVar2 = FUN_0007da18();
    return uVar2;
  }
  if (iVar1 == extraout_ECX) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_07dae0 (Ghidra: FUN_0007dae0)
 * Prototype: undefined4 sub_07dae0(void);
 * Address  : 0x7dae0 (Size: 223 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7f690
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0007dae0(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort *in_EDX;
  uint uVar4;
  int unaff_EBX;
  
  if ((((*(short *)(in_EAX + 0x1d) == *(short *)(unaff_EBX + 0x1d)) ||
       (uVar1 = ((uint)*(ushort *)(unaff_EBX + 0x5a) + (uint)*(ushort *)(in_EAX + 0x5a)) / 2,
       uVar2 = (uint)*in_EDX - (uint)*(ushort *)(unaff_EBX + 0xd), uVar4 = (int)uVar2 >> 0x1f,
       (int)uVar1 <= (int)((uVar2 ^ uVar4) - uVar4))) ||
      (uVar2 = (uint)in_EDX[1] - (uint)*(ushort *)(unaff_EBX + 0xf), uVar4 = (int)uVar2 >> 0x1f,
      (int)uVar1 <= (int)((uVar2 ^ uVar4) - uVar4))) ||
     (uVar1 = ((*(int *)(in_EDX + 1) >> 0x10) + *(ushort *)(in_EAX + 0x5c) / 2) -
              (*(ushort *)(unaff_EBX + 0x5c) / 2 + (*(int *)(unaff_EBX + 0xf) >> 0x10)),
     uVar2 = (int)uVar1 >> 0x1f,
     (int)(((uint)*(ushort *)(in_EAX + 0x5c) + (uint)*(ushort *)(unaff_EBX + 0x5c)) / 2) <=
     (int)((uVar1 ^ uVar2) - uVar2))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

/******************************************************************************
 * Function : sub_07dbc0 (Ghidra: FUN_0007dbc0)
 * Prototype: undefined4 sub_07dbc0(void);
 * Address  : 0x7dbc0 (Size: 435 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 35 -> 0x171e4, 0x2606f, 0x39eca, 0x5f6c5, 0x69268, 0x694d4, 0x6972c, 0x6d4df, 0x6d668, 0x7225e ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0007dbc0(void)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  int in_EAX;
  uint uVar6;
  uint uVar7;
  ushort *in_EDX;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  
  if (*(char *)(in_EAX + 0x1f) == '\x05') {
    uVar2 = *(ushort *)(&DAT_0019073b + (uint)*(ushort *)(in_EAX + 0x56) * 2);
  }
  else {
    uVar2 = *(ushort *)(in_EAX + 0x56);
  }
  uVar6 = uVar2 / 2;
  uVar8 = in_EDX[1] - uVar6 >> 8;
  uVar9 = *in_EDX - uVar6 >> 8;
  pbVar10 = (byte *)((int)&DAT_00279203 + (uVar9 + uVar8 * 0x100) * 5);
  uVar7 = (uint)*(ushort *)(in_EAX + 0x58) + (*(int *)(in_EDX + 1) >> 0x10);
  do {
    uVar4 = uVar9;
    pbVar5 = pbVar10;
    if (in_EDX[1] + uVar6 >> 8 < uVar8) {
      return 0;
    }
    for (; uVar4 <= *in_EDX + uVar6 >> 8; uVar4 = uVar4 + 1) {
      if ((*pbVar5 & 0x10) == 0) {
        bVar1 = *(byte *)((int)&DAT_0019e973 + (*(uint *)(pbVar5 + 1) & 0x7ff) * 0x18 + 2);
        if (*(int *)(in_EDX + 1) >> 0x10 < (int)((uint)(bVar1 >> 4) * 0x100)) {
          return 1;
        }
        if ((bVar1 & 0xe) == 0) {
          if (((*(uint *)(pbVar5 + 1) & 0xfffffff) >> 0x18) * 0x100 < uVar7) {
            return 1;
          }
        }
        else if ((8 - (uint)((bVar1 & 0xf) >> 1)) * 0x100 < uVar7) {
          return 1;
        }
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return 1;
      }
      pbVar5 = pbVar5 + 5;
    }
    uVar8 = uVar8 + 1;
    pbVar10 = pbVar10 + 0x500;
  } while( true );
}

/******************************************************************************
 * Function : sub_07ddf8 (Ghidra: FUN_0007ddf8)
 * Prototype: undefined4 sub_07ddf8(void);
 * Address  : 0x7ddf8 (Size: 333 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x739b9, 0xcc968, 0xccc08, 0xccf10, 0xcd1d4, 0xcdcd0, 0xdacf0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0007ddf8(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int in_EAX;
  uint uVar4;
  ushort *in_EDX;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  byte *pbVar7;
  
  iVar5 = (int)((uint)in_EDX[1] - unaff_EBX) >> 8;
  iVar6 = (int)((uint)*in_EDX - unaff_EBX) >> 8;
  uVar4 = (uint)*(ushort *)(in_EAX + 0x58) + (*(int *)(in_EDX + 1) >> 0x10);
  pbVar7 = (byte *)((int)&DAT_00279203 + (iVar6 + iVar5 * 0x100) * 5);
  do {
    iVar2 = iVar6;
    pbVar3 = pbVar7;
    if ((int)((uint)in_EDX[1] + unaff_EBX) >> 8 < iVar5) {
      return 0;
    }
    for (; iVar2 <= (int)((uint)*in_EDX + unaff_EBX) >> 8; iVar2 = iVar2 + 1) {
      if ((*pbVar3 & 0x10) != 0) {
        return 1;
      }
      bVar1 = *(byte *)((int)&DAT_0019e973 + (*(uint *)(pbVar3 + 1) & 0x7ff) * 0x18 + 2);
      if (*(int *)(in_EDX + 1) >> 0x10 < (int)((uint)(bVar1 >> 4) * 0x100)) {
        return 1;
      }
      if ((bVar1 & 0xe) == 0) {
        if (((*(uint *)(pbVar3 + 1) & 0xfffffff) >> 0x18) * 0x100 < uVar4) {
          return 1;
        }
      }
      else if ((int)((8 - (uint)((bVar1 & 0xf) >> 1)) * 0x100) < (int)uVar4) {
        return 1;
      }
      pbVar3 = pbVar3 + 5;
    }
    iVar5 = iVar5 + 1;
    pbVar7 = pbVar7 + 0x500;
  } while( true );
}

/******************************************************************************
 * Function : sub_07df48 (Ghidra: FUN_0007df48)
 * Prototype: undefined8 sub_07df48(void);
 * Address  : 0x7df48 (Size: 28 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 12 -> 0x16b29, 0x3ed80, 0x63dd3, 0x640f7, 0x6d4df, 0x7231c, 0x73607, 0xc6be0, 0xe1b88, 0xe25c4 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0007df48(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,(uint)(*(int *)(in_EAX + 0xf) >> 0x10 == (uint)*(ushort *)(in_EAX + 0x60)))
  ;
}

