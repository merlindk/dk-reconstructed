/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: setup.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 26
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_069a90 (Ghidra: FUN_00069a90)
 * Prototype: undefined8 sub_069a90(void);
 * Address  : 0x69a90 (Size: 59 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 1 -> 0x69acb
 ******************************************************************************/
undefined8 FUN_00069a90(void)

{
  byte bVar1;
  undefined4 in_EDX;
  byte *pbVar2;
  byte *extraout_EDX;
  
  for (pbVar2 = &DAT_002eb40b; pbVar2 < (byte *)0x2eb538; pbVar2 = pbVar2 + 10) {
    if (((*pbVar2 & 1) != 0) && (((uint)*(ushort *)(pbVar2 + 7) + DAT_002e8bee & 0x1f) == 0)) {
      bVar1 = FUN_00069acb();
      extraout_EDX[9] = bVar1;
      pbVar2 = extraout_EDX;
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_069acb (Ghidra: FUN_00069acb)
 * Prototype: undefined8 sub_069acb(void);
 * Address  : 0x69acb (Size: 213 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x69a90
 * Callees  : 1 -> 0x69ba0
 ******************************************************************************/
undefined8 FUN_00069acb(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  ushort uVar5;
  uint extraout_ECX;
  uint uVar6;
  uint extraout_ECX_00;
  undefined4 in_EDX;
  int iVar7;
  uint local_1c;
  
  local_1c = 0;
  iVar7 = 0;
  uVar5 = CONCAT11(1,(&DAT_002eb40a)[in_EAX * 10]);
  do {
    uVar6 = (uint)uVar5;
    uVar3 = local_1c;
    if ((((&DAT_0019d0c8)[local_1c] & 1) != 0) && (uVar3 = uVar6 & 0xff, (uVar3 & uVar5 >> 8) == 0))
    {
      uVar5 = *(ushort *)((int)&DAT_002e05b6 + iVar7);
      while (uVar3 = (&DAT_001ae9fc)[uVar5], DAT_001ae9fc < uVar3) {
        iVar2 = FUN_00069ba0();
        if (iVar2 != 0) {
          uVar6 = CONCAT31((int3)(extraout_ECX >> 8),(byte)extraout_ECX | (byte)(extraout_ECX >> 8))
          ;
          break;
        }
        uVar6 = extraout_ECX;
        uVar5 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 0x1f);
      }
      uVar5 = (ushort)uVar6;
      uVar3 = uVar6 & 0xff;
      if ((uVar3 & uVar6 >> 8 & 0xff) == 0) {
        uVar1 = *(ushort *)((int)&DAT_002e05b8 + iVar7);
        while( true ) {
          uVar5 = (ushort)uVar6;
          uVar6 = (&DAT_001ae9fc)[uVar1];
          if (uVar6 <= DAT_001ae9fc) break;
          uVar3 = FUN_00069ba0();
          if (uVar3 != 0) {
            uVar5 = (ushort)CONCAT31((int3)(extraout_ECX_00 >> 8),
                                     (byte)extraout_ECX_00 | (byte)(extraout_ECX_00 >> 8));
            break;
          }
          uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar6 + 100)] + 0x1f);
          uVar6 = extraout_ECX_00;
        }
      }
    }
    local_1c = local_1c + 0x4ef;
    iVar7 = iVar7 + 0x1508;
    uVar4 = (undefined1)uVar5;
    uVar5 = CONCAT11((char)(uVar5 >> 8) * '\x02',uVar4);
    if (iVar7 == 0x6928) {
      return CONCAT44(in_EDX,CONCAT31((int3)(uVar3 >> 8),uVar4));
    }
  } while( true );
}

/******************************************************************************
 * Function : sub_069ba0 (Ghidra: FUN_00069ba0)
 * Prototype: undefined4 sub_069ba0(void);
 * Address  : 0x69ba0 (Size: 139 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x69acb
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
undefined4 FUN_00069ba0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EDX;
  
  if (*(short *)(in_EDX + 5) == 0) {
    if (*(char *)(in_EAX + 1) != *(char *)(in_EDX + 2)) {
      return 0;
    }
    if (*(char *)(in_EAX + 3) == *(char *)(in_EDX + 4)) {
      return 1;
    }
    return 0;
  }
  iVar1 = FUN_000e69fc();
  iVar2 = FUN_000e69fc();
  if (iVar2 < iVar1) {
    iVar1 = *(int *)(&DAT_0017a4d0 + ((iVar2 << 8) / iVar1) * 8) * iVar1;
  }
  else {
    iVar3 = 0;
    if (iVar2 == 0) goto LAB_00069c05;
    iVar1 = *(int *)(&DAT_0017a4d0 + ((iVar1 << 8) / iVar2) * 8) * iVar2;
  }
  iVar3 = iVar1 >> 0xd;
LAB_00069c05:
  if (iVar3 < (int)(uint)*(byte *)(in_EDX + 6)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_unhandled_physicalmemory_069c2c (Ghidra: FUN_00069c2c)
 * Prototype: longlong dk_unhandled_physicalmemory_069c2c(void);
 * Address  : 0x69c2c (Size: 83 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:59 ("Unhandled PhysicalMemory")
 * Naming   : String 'Unhandled PhysicalMemory'
 * Callers  : 2 -> 0x45bb8, 0x6b16f
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x166f0d: "setup.cpp"
 *   - 0x166ef4: "Unhandled PhysicalMemory"
 ******************************************************************************/
longlong FUN_00069c2c(void)

{
  uint in_EAX;
  uint in_EDX;
  
  if (in_EAX < 0x10) {
    if (in_EAX == 8) {
      return CONCAT44(in_EDX,0x100000);
    }
  }
  else {
    if (in_EAX < 0x11) {
      return CONCAT44(in_EDX,0x200000);
    }
    if (0x17 < in_EAX) {
      if (in_EAX < 0x19) {
        return CONCAT44(in_EDX,0x500000);
      }
      if (in_EAX == 0x20) {
        return CONCAT44(in_EDX,0x800000);
      }
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 59, "Unhandled PhysicalMemory") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_069c7f (Ghidra: FUN_00069c7f)
 * Prototype: void sub_069c7f(void);
 * Address  : 0x69c7f (Size: 605 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a412
 * Callees  : 8 -> 0x150f0, 0x2c3d0, 0x69edc, 0xdd920, 0xe7714, 0xe8f34, 0xe984c, 0xe98c8
 * Strings  :
 *   - 0x166f17: "DATA"
 *   - 0x166f1e: "%s\tables.dat"
 ******************************************************************************/
void FUN_00069c7f(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined1 local_e0 [152];
  uint local_48;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  iVar5 = 0;
  FUN_000e7714(local_e0,s__s_tables_dat_00166f1e,uVar3);
  piVar4 = &DAT_002f18e3;
  local_34 = extraout_EDX;
  do {
    iVar8 = iVar5;
    for (iVar6 = 0; iVar6 < 0x100; iVar6 = iVar6 + 0x20) {
      if (0x21f < iVar8) {
        FUN_000150f0();
        cVar1 = FUN_0002c3d0();
        if (cVar1 == '\0') {
          puVar9 = &DAT_00361c10;
          local_1c = 0;
          do {
            local_2c = 0x100;
            pbVar7 = DAT_00199210;
            do {
              local_44 = (int)((uint)*pbVar7 * local_1c) >> 5;
              pbVar7 = pbVar7 + 3;
              uVar2 = FUN_000e8f34();
              *puVar9 = uVar2;
              puVar9 = puVar9 + 1;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
            local_1c = local_1c + 1;
          } while (local_1c < 0x20);
          local_20 = 0x20;
          local_2c = 0;
          do {
            local_24 = 0x100;
            pbVar7 = DAT_00199210;
            do {
              local_44 = (int)((uint)*pbVar7 * local_20) >> 5;
              pbVar7 = pbVar7 + 3;
              uVar2 = FUN_000e8f34();
              *puVar9 = uVar2;
              puVar9 = puVar9 + 1;
              local_24 = local_24 + -1;
            } while (local_24 != 0);
            local_20 = local_20 + 3;
          } while (local_20 < 0xc0);
          local_40 = &DAT_00365c10;
          local_28 = 0;
          local_24 = 0;
          pbVar7 = DAT_00199210;
          do {
            local_48 = (uint)*pbVar7;
            local_38 = (uint)pbVar7[1];
            local_3c = 0x100;
            local_30 = (uint)pbVar7[2];
            pbVar7 = pbVar7 + 3;
            pbVar10 = DAT_00199210;
            do {
              local_44 = (int)((uint)*pbVar10 * 2 + local_48) / 3;
              uVar2 = FUN_000e8f34();
              pbVar10 = pbVar10 + 3;
              puVar9 = local_40 + 1;
              *local_40 = uVar2;
              local_3c = local_3c + -1;
              local_40 = puVar9;
            } while (local_3c != 0);
            local_28 = local_28 + 1;
          } while (local_28 < 0x100);
          FUN_000e98c8();
        }
        else {
          FUN_000e984c();
        }
        DAT_003d9820 = &DAT_00361c10;
        iVar5 = 0;
        do {
          if ((&DAT_00361c10)[iVar5] == '\0') {
            (&DAT_00361c10)[iVar5] = 0x90;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x2000);
        FUN_00069edc();
        return;
      }
      iVar8 = iVar8 + 1;
      *piVar4 = DAT_002f2223 + iVar6 + local_34;
      piVar4 = piVar4 + 1;
    }
    iVar5 = iVar5 + 8;
    local_34 = local_34 + 0x2000;
  } while( true );
}

/******************************************************************************
 * Function : sub_069edc (Ghidra: FUN_00069edc)
 * Prototype: void sub_069edc(void);
 * Address  : 0x69edc (Size: 1146 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x69c7f
 * Callees  : 7 -> 0x150f0, 0x2c3d0, 0xdd920, 0xe7714, 0xe8f34, 0xe984c, 0xe98c8
 * Strings  :
 *   - 0x166f2c: "DATA"
 *   - 0x166f33: "%s\alpha.col"
 ******************************************************************************/
void FUN_00069edc(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_144 [152];
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
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
  
  FUN_000dd920();
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_144,s__s_alpha_col_00166f33,uVar3);
  FUN_000150f0();
  cVar1 = FUN_0002c3d0();
  if (cVar1 == '\0') {
    local_ac = 0;
    local_6c = 0x100;
    do {
      local_74 = 0;
      local_70 = local_6c;
      iVar5 = local_ac * 4;
      do {
        local_a0 = (uint)*(byte *)(DAT_00199210 + local_74) + iVar5;
        if (0x3f < (int)local_a0) {
          local_a0 = 0x3f;
        }
        local_a8 = (uint)*(byte *)(DAT_00199210 + local_74 + 2) + iVar5;
        if (0x3f < local_a8) {
          local_a8 = 0x3f;
        }
        local_a0 = local_a0 & 0xff;
        uVar2 = FUN_000e8f34();
        local_74 = local_74 + 3;
        iVar4 = local_70 + 1;
        (&DAT_0019a2a2)[local_70] = uVar2;
        local_70 = iVar4;
      } while (local_74 != 0x300);
      local_6c = local_6c + 0x100;
      local_ac = local_ac + 1;
    } while (local_6c != 0x900);
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_54 = 0x1100;
    local_74 = 0x300;
    local_6c = 0x900;
    for (local_58 = 0x900; local_58 < local_54; local_58 = local_58 + 0x100) {
      local_9c = local_5c;
      local_98 = local_60;
      local_94 = local_64;
      iVar5 = 0;
      local_68 = local_58;
      do {
        uVar2 = FUN_000e8f34();
        iVar5 = iVar5 + 3;
        iVar4 = local_68 + 1;
        (&DAT_0019a2a2)[local_68] = uVar2;
        local_68 = iVar4;
      } while (iVar5 != 0x300);
      local_64 = local_64 + 7;
      local_60 = local_60 + 4;
    }
    local_1c = 0;
    local_4c = 0;
    local_44 = 0x1900;
    for (local_48 = 0x1100; local_48 < local_44; local_48 = local_48 + 0x100) {
      local_90 = local_1c;
      local_8c = local_1c;
      local_88 = local_4c;
      iVar5 = 0;
      local_50 = local_48;
      do {
        local_a0 = DAT_00199210;
        uVar2 = FUN_000e8f34();
        iVar5 = iVar5 + 3;
        iVar4 = local_50 + 1;
        (&DAT_0019a2a2)[local_50] = uVar2;
        local_50 = iVar4;
      } while (iVar5 != 0x300);
      local_4c = local_4c + 6;
      local_1c = local_1c + 1;
    }
    local_20 = 0;
    local_3c = 0;
    local_34 = 0x2100;
    for (local_38 = 0x1900; local_38 < local_34; local_38 = local_38 + 0x100) {
      local_84 = local_3c;
      local_80 = local_20 * 2;
      iVar5 = 0;
      local_40 = local_38;
      do {
        local_a0 = (uint)*(byte *)(DAT_00199210 + 1 + iVar5) + local_80;
        if (0x3f < (int)local_a0) {
          local_a0 = 0x3f;
        }
        local_a4 = (uint)*(byte *)(iVar5 + 2 + DAT_00199210) + local_84;
        if (0x3f < local_a4) {
          local_a4 = 0x3f;
        }
        local_a0 = local_a0 & 0xff;
        uVar2 = FUN_000e8f34();
        iVar5 = iVar5 + 3;
        iVar4 = local_40 + 1;
        (&DAT_0019a2a2)[local_40] = uVar2;
        local_40 = iVar4;
      } while (iVar5 != 0x300);
      local_3c = local_3c + 6;
      local_20 = local_20 + 1;
    }
    local_24 = 0;
    local_30 = 0;
    local_28 = 0x2900;
    for (local_2c = 0x2100; local_2c < local_28; local_2c = local_2c + 0x100) {
      local_7c = local_24 * 2;
      iVar4 = 0;
      local_78 = local_30;
      iVar5 = local_2c;
      do {
        iVar4 = iVar4 + 3;
        uVar2 = FUN_000e8f34();
        (&DAT_0019a2a2)[iVar5] = uVar2;
        iVar5 = iVar5 + 1;
      } while (iVar4 != 0x300);
      local_30 = local_30 + 6;
      local_24 = local_24 + 1;
    }
    FUN_000e98c8();
  }
  else {
    FUN_000e984c();
  }
  return;
}

/******************************************************************************
 * Function : dk_data_gui_dat_06a356 (Ghidra: FUN_0006a356)
 * Prototype: longlong dk_data_gui_dat_06a356(void);
 * Address  : 0x6a356 (Size: 188 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:363 ("No memory for MCGA files")
 * Naming   : String 'data\gui.dat'
 * Callers  : 2 -> 0x6a553, 0x6a689
 * Callees  : 6 -> 0xddaf0, 0xe7714, 0xe823c, 0xe83c8, 0xe9498, 0xe94b0
 * Strings  :
 *   - 0x166f59: "setup.cpp"
 *   - 0x166f7d: "setup.cpp"
 *   - 0x187500: "data\gui.dat"
 *   - 0x166f40: "No memory for MCGA files"
 *   - 0x166f63: "Unable to load file, '%s'"
 ******************************************************************************/
longlong FUN_0006a356(void)

{
  bool bVar1;
  undefined4 extraout_ECX;
  uint in_EDX;
  char *pcVar2;
  int extraout_EDX;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar2 = s_data_gui_dat_00187500;
  while (*(int *)(pcVar2 + 0x1c) != 0) {
    FUN_000e83c8();
    pcVar2 = (char *)(extraout_EDX + 0x2c);
  }
  bVar1 = true;
  uVar4 = FUN_000e9498();
  while( true ) {
    while( true ) {
      iVar3 = (int)((ulonglong)uVar4 >> 0x20);
      if (*(int *)(iVar3 + 0x1c) == 0) {
        if ((int)uVar4 != 0) {
          FUN_000e94b0();
        }
        return CONCAT44(in_EDX,1);
      }
      *(ushort *)(iVar3 + 0x28) = (ushort)bVar1;
      uVar5 = FUN_000e823c();
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      uVar4 = CONCAT44(iVar3,extraout_ECX);
      if ((int)uVar5 != -100) break;
      if (!bVar1) goto LAB_0006a3bc;
      bVar1 = false;
    }
    if ((int)uVar5 == -0x65) break;
    bVar1 = true;
    uVar4 = CONCAT44(iVar3 + 0x2c,extraout_ECX);
  }
  FUN_000e7714(&DAT_0019cbac,s_Unable_to_load_file____s__00166f63,iVar3);
LAB_0006a3bc:
  FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 363, "No memory for MCGA files") */
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_please_run_install_dungeon_06a412 (Ghidra: FUN_0006a412)
 * Prototype: longlong dk_please_run_install_dungeon_06a412(void);
 * Address  : 0x6a412 (Size: 321 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : String 'Please run INSTALL from the Dungeon Keeper CDRom.'
 * Callers  : 1 -> 0x633c4
 * Callees  : 21 -> 0x2245b, 0x29738, 0x29eef, 0x401ec, 0x44eb6, 0x65724, 0x69c7f, 0x6a553, 0x6adc5, 0x6b04d ...
 * Strings  :
 *   - 0x166f87: "Please run INSTALL from the Dungeon Keeper CDRom."
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0006a412(void)

{
  int iVar1;
  uint uVar2;
  uint in_EDX;
  longdouble lVar3;
  int local_30;
  
  FUN_0002245b();
  FUN_0006b04d();
  lVar3 = (longdouble)FUN_00065724();
  _DAT_0033401d = (float)lVar3;
  if ((lVar3 <= (longdouble)_DAT_00166fb9) || (_DAT_00166fc1 <= (double)lVar3)) {
    DAT_002ee88d = 0;
  }
  else {
    DAT_002ee88d = 1;
  }
  iVar1 = FUN_00029eef();
  if (iVar1 != 0) {
    FUN_000f4908();
    iVar1 = FUN_0006b4c7();
    if (iVar1 == 0) goto LAB_0006a550;
    FUN_0006adc5();
    iVar1 = FUN_0006a553();
    if (iVar1 == 0) {
      DAT_00334021 = 1;
    }
    else {
      iVar1 = FUN_000ebc80();
      if (iVar1 == 1) {
        FUN_00029738();
        iVar1 = FUN_0006b16f();
        if (iVar1 != 0) {
          FUN_000401ec();
          if (local_30 == 0) {
            uVar2 = 4;
          }
          else {
            uVar2 = local_30 >> 8 & 0xf;
          }
          if (5 < uVar2) {
            FUN_0012f930();
          }
          FUN_0008cc24();
          FUN_000ecf70();
          FUN_000f32ae();
          FUN_000f3264();
          FUN_0006b7d0();
          FUN_00069c7f();
          FUN_00044eb6();
          return CONCAT44(in_EDX,1);
        }
        goto LAB_0006a550;
      }
    }
  }
  FUN_000e8ca8();
LAB_0006a550:
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06a553 (Ghidra: FUN_0006a553)
 * Prototype: longlong sub_06a553(void);
 * Address  : 0x6a553 (Size: 255 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:493
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a412
 * Callees  : 11 -> 0x6a356, 0x6b0c8, 0x7c1f0, 0xac630, 0xddaf0, 0xe6a6c, 0xe6b20, 0xe830c, 0xeba38, 0xebc98 ...
 * Strings  :
 *   - 0x166fe8: "setup.cpp"
 *   - 0x18731c: "*VESA"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0006a553(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_000e830c();
  if (iVar1 != 0) {
    FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 493, g_log_buf) */
    return (ulonglong)in_EDX << 0x20;
  }
  iVar1 = FUN_0006a356();
  if (iVar1 != 0) {
    FUN_0006b0c8();
    DAT_0019cba4 = 0x280;
    DAT_0019cba2 = 400;
    DAT_0019cba6 = 2;
    _DAT_0019cba8 = 0x20;
    _DAT_0019cbaa = 8;
    FUN_000f05f0();
    FUN_000ebc98();
    FUN_000eba38();
    FUN_000e6a6c();
    FUN_000e6b20();
    FUN_000ac630();
    FUN_0007c1f0();
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 0x40;
  }
  return CONCAT44(in_EDX,(uint)(iVar1 != 0));
}

/******************************************************************************
 * Function : sub_06a652 (Ghidra: FUN_0006a652)
 * Prototype: void sub_06a652(void);
 * Address  : 0x6a652 (Size: 55 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x633c4
 * Callees  : 7 -> 0xe792c, 0xe83f0, 0xe94b0, 0xe94f8, 0xebe68, 0xf4960, 0xf4c6c
 * Strings  :
 *   - 0x18731c: "*VESA"
 ******************************************************************************/
void FUN_0006a652(void)

{
  FUN_000ebe68();
  FUN_000f4960();
  FUN_000e792c();
  FUN_000e83f0();
  FUN_000e94b0();
  DAT_00333f73 = 0;
  FUN_000f4c6c();
  FUN_000e94f8();
  return;
}

/******************************************************************************
 * Function : dk_mcga_minimal_allowed_06a689 (Ghidra: FUN_0006a689)
 * Prototype: undefined8 dk_mcga_minimal_allowed_06a689(void);
 * Address  : 0x6a689 (Size: 1079 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:619 ("MCGA Minimal not allowed"); setup.cpp:671 ("Unhandled Screen Mode (Reset)")
 * Naming   : String 'MCGA Minimal not allowed'
 * Callers  : 1 -> 0x30e88
 * Callees  : 28 -> 0x270e0, 0x27320, 0x3a3d4, 0x3a4bb, 0x3a4e3, 0x3a57e, 0x6a356, 0x6ae37, 0x6b0c8, 0x6b12b ...
 * Strings  :
 *   - 0x16700b: "setup.cpp"
 *   - 0x167033: "setup.cpp"
 *   - 0x16704e: "setup.cpp"
 *   - 0x16708d: "setup.cpp"
 *   - 0x1670ca: "setup.cpp"
 *   - 0x187844: "*W_SCREEN"
 *   - 0x166ff2: "MCGA Minimal not allowed"
 *   - 0x187500: "data\gui.dat"
 *   - 0x1670ac: "Unhandled Screen Mode (Setup)"
 *   - 0x18789c: "LDATA\FRONTFT1.DAT"
 *   - 0x18768c: "data\guihi.dat"
 *   - 0x167015: "Unhandled Screen Mode (Reset)"
 *   - 0x16703d: "Load Mcga failed"
 *   - 0x167058: "DATA"
 *   - 0x16705f: "%s\gmap.raw"
 *   - 0x16706b: "Unable to load vres256_load_files"
 *   - 0x167097: "DATA"
 *   - 0x16709e: "%s\gmaphi.raw"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006a689(void)

{
  undefined2 uVar1;
  ushort in_AX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort extraout_CX;
  ushort extraout_CX_00;
  ushort uVar5;
  ushort extraout_CX_01;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 in_EDX;
  uint uVar6;
  
  uVar1 = DAT_003d9874;
  iVar4 = DAT_00376518;
  uVar6 = (uint)DAT_003d9878;
  if ((in_AX == DAT_003d9878) && (DAT_00376518 == 0)) {
    uVar2 = 1;
    goto LAB_00069ed6;
  }
  FUN_000ebc10(DAT_0019d0c7);
  if (DAT_003d9878 < 10) {
    if (DAT_003d9878 == 1) {
      if (DAT_00376518 == 0) {
        FUN_000270e0();
        FUN_0003a57e();
        FUN_0003a4bb();
        FUN_0006b12b();
        if (uVar6 != (extraout_ECX & 0xffff)) {
          FUN_000e792c();
        }
        goto LAB_0006a734;
      }
      if (uVar6 != (extraout_ECX_01 & 0xffff)) {
        FUN_000e792c();
      }
      FUN_000e83f0();
      FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 619, "MCGA Minimal not allowed") */
      uVar5 = extraout_CX;
LAB_0006a6fe:
      DAT_00376518 = 0;
      goto LAB_0006a739;
    }
LAB_0006a809:
    FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 671, "Unhandled Screen Mode (Reset)") */
  }
  else {
    if ((10 < DAT_003d9878) && (DAT_003d9878 != 0xd)) goto LAB_0006a809;
    if (DAT_00376518 != 0) {
      if ((uVar6 != (extraout_ECX_01 & 0xffff)) || (iVar4 != 0)) {
        FUN_000e792c();
      }
      FUN_000e83f0();
      uVar5 = extraout_CX_01;
      goto LAB_0006a6fe;
    }
    FUN_000270e0();
    FUN_0003a57e();
    FUN_0003a4bb();
    FUN_0006b12b();
    if ((uVar6 != (extraout_ECX_00 & 0xffff)) || (iVar4 != 0)) {
      FUN_000e792c();
    }
LAB_0006a734:
    FUN_000e83f0();
    uVar5 = extraout_CX_00;
LAB_0006a739:
    if (uVar5 == 0) goto LAB_0006a809;
    if (1 < uVar5) {
      if ((uVar5 == 0xd) && (iVar3 = FUN_000e830c(), iVar3 == 0)) {
        if ((uVar6 != (extraout_ECX_03 & 0xffff)) || (iVar4 != 0)) {
          iVar4 = FUN_000e6a30();
          if (iVar4 == 0) {
            iVar4 = FUN_000e7750(0xd,0x280,0x1e0,DAT_00199210,1,0);
          }
          else {
            iVar4 = FUN_000e7750(10,0x280,400,DAT_00199210,1,0);
          }
          if (iVar4 != 1) goto LAB_0006a80e;
          DAT_0019cba4 = 0x280;
          DAT_0019cba2 = 400;
        }
        FUN_0006b0c8();
        DAT_0019cba6 = 1;
        _DAT_0019cba8 = 0x10;
        _DAT_0019cbaa = 0x10;
        if (DAT_00377768 != 0) {
          FUN_000dd920();
          uVar2 = FUN_000dd920();
          FUN_000e7714(&DAT_0019cbac,s__s_gmaphi_raw_0016709e,uVar2);
          FUN_000e984c();
        }
        FUN_0006ae37();
LAB_0006a9e5:
        FUN_000e7904(0);
        FUN_000e79fc();
        FUN_00027320();
        FUN_000f05f0();
        FUN_000ebc98();
        FUN_000eba38();
        FUN_000e6a6c();
        FUN_000e6b20();
        FUN_000ebf9c();
        DAT_003d9874 = uVar1;
        iVar4 = FUN_0003a3d4();
        uVar2 = 0;
        if (iVar4 != 0) {
          FUN_0003a4e3();
          uVar2 = 1;
          DAT_0019d0b8 = DAT_0019d0b8 & 0xfb;
        }
        goto LAB_00069ed6;
      }
      goto LAB_0006a809;
    }
    iVar4 = FUN_0006a356();
    if (iVar4 == 0) goto LAB_0006a809;
    if ((uVar6 == (extraout_ECX_02 & 0xffff)) ||
       (iVar4 = FUN_000e7750(1,0x140,200,DAT_00199210,2,0), iVar4 == 1)) {
      FUN_0006b0c8();
      DAT_0019cba4 = 0x280;
      DAT_0019cba2 = 400;
      DAT_0019cba6 = 2;
      _DAT_0019cba8 = 0x20;
      _DAT_0019cbaa = 8;
      if (DAT_00377768 != 0) {
        FUN_000dd920();
        uVar2 = FUN_000dd920();
        FUN_000e7714(&DAT_0019cbac,s__s_gmap_raw_0016705f,uVar2);
        FUN_000e984c();
      }
      goto LAB_0006a9e5;
    }
  }
LAB_0006a80e:
  uVar2 = 0;
LAB_00069ed6:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_data_gui_dat_06aac0 (Ghidra: FUN_0006aac0)
 * Prototype: undefined8 dk_data_gui_dat_06aac0(void);
 * Address  : 0x6aac0 (Size: 773 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:878 ("Unhandled Screen Mode (Reset)"); setup.cpp:889 ("Unable to load mcga_load_files_minimal")
 * Naming   : String 'data\gui.dat'
 * Callers  : 2 -> 0x2dfac, 0x2f9f5
 * Callees  : 18 -> 0x270e0, 0x2f1c8, 0x2f1d2, 0x3a4bb, 0x3a57e, 0x6b12b, 0xddaf0, 0xe6a6c, 0xe6b20, 0xe7750 ...
 * Strings  :
 *   - 0x1670f2: "setup.cpp"
 *   - 0x167123: "setup.cpp"
 *   - 0x16714f: "setup.cpp"
 *   - 0x167183: "setup.cpp"
 *   - 0x1671ab: "setup.cpp"
 *   - 0x187844: "*W_SCREEN"
 *   - 0x187500: "data\gui.dat"
 *   - 0x18789c: "LDATA\FRONTFT1.DAT"
 *   - 0x18768c: "data\guihi.dat"
 *   - 0x1670d4: "Unhandled Screen Mode (Reset)"
 *   - 0x1670fc: "Unable to load mcga_load_files_minimal"
 *   - 0x16712d: "Unable to setup screen resolution"
 *   - 0x167159: "Unable to load vres256_load_files_minimal"
 *   - 0x16718d: "Unhandled Screen Mode (Setup)"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006aac0(void)

{
  undefined2 uVar1;
  ushort in_AX;
  undefined4 uVar2;
  int iVar3;
  ushort extraout_CX;
  ushort extraout_CX_00;
  ushort extraout_CX_01;
  ushort uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 in_EDX;
  uint uVar5;
  
  uVar1 = DAT_003d9874;
  uVar5 = (uint)DAT_003d9878;
  if ((in_AX == DAT_003d9878) && (DAT_00376518 != 0)) {
    uVar2 = 1;
    DAT_003d9874 = uVar1;
    goto LAB_00069ed6;
  }
  if (DAT_003d9878 < 10) {
    if (DAT_003d9878 != 1) goto LAB_0006abbd;
    if (DAT_00376518 != 0) {
      if (in_AX != 1) {
        FUN_000e792c();
      }
      goto LAB_0006ab26;
    }
    FUN_000270e0();
    FUN_0003a57e();
    FUN_0003a4bb();
    FUN_0006b12b();
    if ((extraout_ECX & 0xffff) != 1) {
      FUN_000e792c();
    }
LAB_0006ab61:
    FUN_000e83f0();
    uVar4 = extraout_CX_00;
  }
  else if ((DAT_003d9878 < 0xb) || (DAT_003d9878 == 0xd)) {
    if (DAT_00376518 == 0) {
      FUN_000270e0();
      FUN_0003a57e();
      FUN_0003a4bb();
      if (uVar5 != (extraout_ECX_01 & 0xffff)) {
        FUN_000e792c();
      }
      goto LAB_0006ab61;
    }
    FUN_0006b12b();
    if (uVar5 != (extraout_ECX_00 & 0xffff)) {
      FUN_000e792c();
    }
LAB_0006ab26:
    FUN_000e83f0();
    DAT_00376518 = 0;
    uVar4 = extraout_CX;
  }
  else {
LAB_0006abbd:
    FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 878, "Unhandled Screen Mode (Reset)") */
    uVar4 = extraout_CX_01;
  }
  if (uVar4 == 0) {
LAB_0006ac13:
    FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 889, "Unable to load mcga_load_files_minimal") */
  }
  else {
    if (uVar4 < 2) {
      DAT_00376518 = 1;
      iVar3 = FUN_000e830c();
      if ((iVar3 == 0) &&
         ((uVar5 == (extraout_ECX_02 & 0xffff) ||
          (iVar3 = FUN_000e7750(1,0x140,200,DAT_00199210,2,0), iVar3 == 1)))) {
        DAT_0019cba4 = 0x280;
        DAT_0019cba2 = 400;
        DAT_0019cba6 = 2;
        _DAT_0019cba8 = 0x20;
        _DAT_0019cbaa = 8;
LAB_0006ac87:
        FUN_000e7904(0);
        FUN_000e79fc();
        FUN_000ebc98();
        FUN_000eba38();
        FUN_000e6a6c();
        FUN_000e6b20();
        uVar2 = 1;
        DAT_003d9874 = uVar1;
        goto LAB_00069ed6;
      }
      goto LAB_0006ac13;
    }
    if (uVar4 != 0xd) goto LAB_0006ac13;
    DAT_00376518 = 1;
    FUN_0002f1c8();
    iVar3 = FUN_000e830c();
    if (iVar3 != 0) goto LAB_0006ac13;
    FUN_0002f1d2();
    if ((uVar5 == (extraout_ECX_03 & 0xffff)) ||
       (iVar3 = FUN_000e7750(0xd,0x280,0x1e0,DAT_00199210,1,0), iVar3 == 1)) {
      DAT_0019cba4 = 0x280;
      DAT_0019cba2 = 0x1e0;
      DAT_0019cba6 = 1;
      _DAT_0019cba8 = 0x10;
      _DAT_0019cbaa = 0x10;
      FUN_000f05f0();
      goto LAB_0006ac87;
    }
  }
  uVar2 = 0;
LAB_00069ed6:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_data_text_dat_06adc5 (Ghidra: FUN_0006adc5)
 * Prototype: void dk_data_text_dat_06adc5(void);
 * Address  : 0x6adc5 (Size: 79 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : String 'DATA/TEXT.DAT'
 * Callers  : 1 -> 0x6a412
 * Callees  : 5 -> 0x6ae14, 0xe9484, 0xe97a0, 0xe984c, 0xf4c8a
 * Strings  :
 *   - 0x1671b5: "DATA/TEXT.DAT"
 *   - 0x1671c3: "DATA/TEXT.DAT"
 ******************************************************************************/
void FUN_0006adc5(void)

{
  FUN_000e97a0();
  DAT_00333f73 = FUN_000e9484();
  if (DAT_00333f73 != 0) {
    FUN_000e984c();
    FUN_0006ae14();
    return;
  }
  FUN_000f4c8a();
  return;
}

/******************************************************************************
 * Function : sub_06ae14 (Ghidra: FUN_0006ae14)
 * Prototype: void sub_06ae14(void);
 * Address  : 0x6ae14 (Size: 35 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6adc5
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0006ae14(void)

{
  char cVar1;
  char *in_EAX;
  int iVar2;
  int iVar3;
  int in_EDX;
  short unaff_BX;
  short sVar4;
  
  iVar2 = 0;
  while (sVar4 = unaff_BX + -1, unaff_BX != 0) {
    iVar3 = iVar2 + 4;
    *(char **)(iVar2 + in_EDX) = in_EAX;
    do {
      cVar1 = *in_EAX;
      in_EAX = in_EAX + 1;
      iVar2 = iVar3;
      unaff_BX = sVar4;
    } while (cVar1 != '\0');
  }
  return;
}

/******************************************************************************
 * Function : sub_06ae37 (Ghidra: FUN_0006ae37)
 * Prototype: void sub_06ae37(void);
 * Address  : 0x6ae37 (Size: 73 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a689
 * Callees  : 2 -> 0xe6a10, 0xf0d1c
 ******************************************************************************/
void FUN_0006ae37(void)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = DAT_003d982c * DAT_003d9830;
  while (0 < iVar1) {
    FUN_000f0d1c();
    FUN_000e6a10();
    iVar1 = extraout_ECX + -0x10000;
  }
  return;
}

/******************************************************************************
 * Function : dk_loading_raw_06ae80 (Ghidra: FUN_0006ae80)
 * Prototype: void dk_loading_raw_06ae80(void);
 * Address  : 0x6ae80 (Size: 461 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:1036 ("Unable to load LOADING palette")
 * Naming   : String 'LOADING.RAW'
 * Callers  : 2 -> 0x2dfac, 0x6b4c7
 * Callees  : 13 -> 0x150f0, 0x30782, 0xdd920, 0xddaf0, 0xe6a10, 0xe7714, 0xe7904, 0xe797c, 0xe79fc, 0xe846c ...
 * Strings  :
 *   - 0x167222: "setup.cpp"
 *   - 0x1671d1: "LOADING.RAW"
 *   - 0x1671dd: "DATA"
 *   - 0x1671e4: "%s\%s"
 *   - 0x1671ea: "LOADING.PAL"
 *   - 0x1671f6: "DATA"
 *   - 0x1671fd: "%s\%s"
 *   - 0x167203: "Unable to load LOADING palette"
 ******************************************************************************/
void FUN_0006ae80(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int extraout_ECX;
  undefined1 *puVar6;
  
  FUN_000e6a10();
  FUN_000e846c(DAT_00199228);
  FUN_000150f0();
  FUN_000dd920(s_LOADING_RAW_001671d1);
  uVar2 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s__s_001671e4,uVar2);
  iVar3 = FUN_000e984c();
  if (iVar3 != -1) {
    FUN_000dd920(s_LOADING_PAL_001671ea);
    uVar2 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s__s_001671fd,uVar2);
    FUN_000150f0();
    iVar3 = FUN_000e984c();
    if (iVar3 != 0x300) {
      FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 1036, "Unable to load LOADING palette") */
      FUN_000e8c83();
    }
    FUN_000e7904(0);
    iVar3 = FUN_000e797c();
    if (iVar3 == 1) {
      if ((DAT_003d9878 == 0xd) || (DAT_003d9878 == 10)) {
        puVar5 = DAT_003d9818;
        if (DAT_003d9878 == 0xd) {
          puVar5 = DAT_003d9818 + DAT_003d9834 * 0x28;
        }
        iVar3 = 0;
        puVar6 = DAT_00199228;
        do {
          iVar4 = 0;
          do {
            uVar1 = *puVar6;
            *puVar5 = uVar1;
            iVar4 = iVar4 + 1;
            puVar6 = puVar6 + 1;
            puVar5[1] = uVar1;
            puVar5 = puVar5 + 2;
          } while (iVar4 < 0x140);
          iVar3 = iVar3 + 1;
          FUN_000e8c83();
          puVar5 = (undefined1 *)(extraout_ECX + DAT_003d9834);
        } while (iVar3 < 200);
      }
      else {
        iVar3 = 0;
        do {
          FUN_000e8c83();
          iVar3 = iVar3 + 1;
        } while (iVar3 < 200);
      }
      FUN_000e797c();
      FUN_000e79fc();
    }
  }
  FUN_000e8f24();
  FUN_00030782();
  return;
}

/******************************************************************************
 * Function : sub_06b04d (Ghidra: FUN_0006b04d)
 * Prototype: void sub_06b04d(void);
 * Address  : 0x6b04d (Size: 123 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a412
 * Callees  : 3 -> 0xf0f8c, 0xf4cb8, 0xf4d9b
 * Strings  :
 *   - 0x16722c: "PhysicalMemory %d"
 ******************************************************************************/
void FUN_0006b04d(void)

{
  int iVar1;
  
  iVar1 = FUN_000f4cb8();
  if (iVar1 == 0) {
    iVar1 = FUN_000f4cb8();
    if (iVar1 == 0) {
      iVar1 = FUN_000f4cb8();
      if (iVar1 == 0) {
        DAT_00334065 = 8;
      }
      else {
        FUN_000f4d9b();
        DAT_00334065 = 0x10;
      }
    }
    else {
      FUN_000f4d9b();
      DAT_00334065 = 0x18;
    }
  }
  else {
    FUN_000f4d9b();
    DAT_00334065 = 0x20;
  }
  FUN_000f0f8c(s_PhysicalMemory__d_0016722c,DAT_00334065);
  return;
}

/******************************************************************************
 * Function : dk_data_hpointer_dat_06b0c8 (Ghidra: FUN_0006b0c8)
 * Prototype: void dk_data_hpointer_dat_06b0c8(void);
 * Address  : 0x6b0c8 (Size: 99 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:1187 ("Unable to load pointer files")
 * Naming   : String 'data\hpointer.dat'
 * Callers  : 2 -> 0x6a553, 0x6a689
 * Callees  : 3 -> 0xddaf0, 0xe830c, 0xf05d8
 * Strings  :
 *   - 0x16725b: "setup.cpp"
 *   - 0x1870b8: "data\hpointer.dat"
 *   - 0x186fb0: "data\lpointer.dat"
 *   - 0x18713c: "data\hpoints.dat"
 *   - 0x187034: "data\lpoints.dat"
 *   - 0x16723e: "Unable to load pointer files"
 ******************************************************************************/
void FUN_0006b0c8(void)

{
  int iVar1;
  
  iVar1 = FUN_000e830c();
  if (iVar1 != 0) {
    FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 1187, "Unable to load pointer files") */
  }
  FUN_000f05d8();
  return;
}

/******************************************************************************
 * Function : dk_data_hpointer_dat_06b12b (Ghidra: FUN_0006b12b)
 * Prototype: void dk_data_hpointer_dat_06b12b(void);
 * Address  : 0x6b12b (Size: 68 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Naming   : String 'data\hpointer.dat'
 * Callers  : 2 -> 0x6a689, 0x6aac0
 * Callees  : 2 -> 0xe83f0, 0xebc10
 * Strings  :
 *   - 0x1870b8: "data\hpointer.dat"
 *   - 0x186fb0: "data\lpointer.dat"
 *   - 0x18713c: "data\hpoints.dat"
 *   - 0x187034: "data\lpoints.dat"
 ******************************************************************************/
void FUN_0006b12b(void)

{
  FUN_000ebc10();
  FUN_000e83f0();
  return;
}

/******************************************************************************
 * Function : dk_graphics_heap_already_allocated_06b16f (Ghidra: FUN_0006b16f)
 * Prototype: longlong dk_graphics_heap_already_allocated_06b16f(void);
 * Address  : 0x6b16f (Size: 856 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:1235 ("Graphics heap already allocated"); setup.cpp:1299 ("Unable to allocate heaps (small_mem)"); setup.cpp:None
 * Naming   : String 'Graphics heap already allocated'
 * Callers  : 1 -> 0x6a412
 * Callees  : 9 -> 0x69c2c, 0x6deac, 0x6df91, 0xddaf0, 0xe7714, 0xe9484, 0xe94b0, 0xf0730, 0xf0f8c
 * Strings  :
 *   - 0x167285: "setup.cpp"
 *   - 0x1672b4: "setup.cpp"
 *   - 0x1672e3: "setup.cpp"
 *   - 0x16735b: "setup.cpp"
 *   - 0x167265: "Graphics heap already allocated"
 *   - 0x16728f: "Unable to allocate heaps (small_mem)"
 *   - 0x1672be: "Unable to allocate heaps (small_mem)"
 *   - 0x1672ed: "GraphicsHeap Size %d"
 *   - 0x167302: "SoundHeap Size %d"
 *   - 0x167314: "SOUND"
 *   - 0x16731a: "%s\SOUND.DAT"
 *   - 0x167327: "SOUND"
 *   - 0x16732d: "%s\SPEECH.DAT"
 *   - 0x16733b: "Unable to initialise sound heap"
 ******************************************************************************/
longlong FUN_0006b16f(void)

{
  bool bVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint in_EDX;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_130 [144];
  undefined1 local_a0 [144];
  
  iVar2 = 0;
  if (DAT_00334019 == 0) {
    FUN_000f0730();
    FUN_0006df91();
    iVar2 = extraout_ECX;
    if (DAT_0033318b != 0) {
      FUN_000e94b0();
      iVar2 = extraout_ECX_00;
      DAT_0033318b = extraout_ECX_00;
    }
  }
  if (DAT_00333187 != 0) {
    FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 1235, "Graphics heap already allocated") */
    FUN_000e94b0();
    DAT_00333187 = 0;
    iVar2 = extraout_ECX_01;
  }
  lVar6 = CONCAT44(DAT_00334065,DAT_00333187);
  if (DAT_00334019 == 0) {
    do {
      lVar6 = CONCAT44(DAT_00334065,DAT_00333187);
      if (DAT_0033318b != 0) goto LAB_0006b23e;
      DAT_0033318f = FUN_00069c2c();
      lVar5 = FUN_000e9484();
      lVar6 = CONCAT44(DAT_00334065,DAT_00333187);
      DAT_0033318b = (int)lVar5;
      iVar2 = extraout_ECX_02;
    } while (lVar5 != 0x800000000);
    iVar2 = 1;
  }
LAB_0006b23e:
  do {
    iVar3 = (int)((ulonglong)lVar6 >> 0x20);
    DAT_00333187 = (int)lVar6;
    if (DAT_00333187 != 0) goto LAB_0006b2b4;
    if (iVar3 == 0x20) {
      DAT_00333183 = 0x800000;
    }
    else if (iVar3 == 0x18) {
      DAT_00333183 = 0x500000;
    }
    else if (iVar3 == 0x10) {
      DAT_00333183 = 0x200000;
    }
    else {
      DAT_00333183 = 0x100000;
    }
    lVar6 = FUN_000e9484();
    iVar2 = extraout_ECX_03;
  } while (lVar6 != 0x800000000);
  iVar2 = 1;
  DAT_00333187 = 0;
LAB_0006b2b4:
  if (iVar2 != 0) {
    while ((DAT_00333187 == 0 && ((DAT_00334019 != 0 || (DAT_0033318b != 0))))) {
      iVar2 = DAT_00333183 + -0x4000;
      if (DAT_00334019 == 0) {
        iVar3 = iVar2;
        if ((DAT_00333183 <= DAT_0033318f) &&
           (iVar4 = DAT_0033318f + -0x4000, bVar1 = DAT_0033318f <= DAT_00333183,
           iVar3 = DAT_00333183, DAT_0033318f = iVar4, bVar1)) {
          iVar3 = iVar2;
        }
        DAT_00333183 = iVar3;
        iVar2 = DAT_00333183;
        if (DAT_0033318f < 0x80000) goto LAB_0006b347;
      }
      DAT_00333183 = iVar2;
      if (DAT_00333183 < 0x80000) {
        if (DAT_0033318b != 0) {
          FUN_000e94b0();
          DAT_0033318b = 0;
        }
LAB_0006b347:
        FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 1299, "Unable to allocate heaps (small_mem)") */
        return (ulonglong)in_EDX << 0x20;
      }
      if (DAT_0033318b != 0) {
        FUN_000e94b0();
        DAT_0033318b = 0;
      }
      if (DAT_00333187 != 0) {
        FUN_000e94b0();
        DAT_00333187 = 0;
      }
      if (DAT_00334019 == 0) {
        DAT_0033318b = FUN_000e9484();
      }
      DAT_00333187 = FUN_000e9484();
    }
  }
  FUN_000f0f8c(s_GraphicsHeap_Size__d_001672ed,DAT_00333183);
  if (DAT_00334019 == 0) {
    FUN_000f0f8c(s_SoundHeap_Size__d_00167302,DAT_0033318f);
  }
  if (DAT_00334019 == 0) {
    FUN_000e7714(local_130,s__s_SOUND_DAT_0016731a,s_SOUND_00167314); /* 0x16731a="%s\SOUND.DAT" */
    FUN_000e7714(local_a0,s__s_SPEECH_DAT_0016732d,s_SOUND_00167327); /* 0x16732d="%s\SPEECH.DAT" */
    iVar2 = FUN_0006deac(0x656);
    if (iVar2 == 0) {
      FUN_000e94b0();
      DAT_0033318b = 0;
      DAT_00334019 = 1;
      FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line ?, g_log_buf) */
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_data_legal_raw_06b4c7 (Ghidra: FUN_0006b4c7)
 * Prototype: undefined8 dk_data_legal_raw_06b4c7(void);
 * Address  : 0x6b4c7 (Size: 775 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp:1457 ("Unable to open Legal Screen"); setup.cpp:1535 ("Smacker error")
 * Naming   : String 'DATA\LEGAL.RAW'
 * Callers  : 1 -> 0x6a412
 * Callees  : 22 -> 0x150f0, 0x45bb8, 0x6ae80, 0xdd920, 0xddaf0, 0xe6a10, 0xe7714, 0xe7750, 0xe7904, 0xe797c ...
 * Strings  :
 *   - 0x167390: "setup.cpp"
 *   - 0x1673c6: "setup.cpp"
 *   - 0x1673f6: "setup.cpp"
 *   - 0x1871c0: "*VESA"
 *   - 0x167365: "DATA\LEGAL.RAW"
 *   - 0x167374: "Unable to open Legal Screen"
 *   - 0x16739a: "DATA\LEGAL.PAL"
 *   - 0x1673a9: "Unable to open Legal Palette"
 *   - 0x1673d0: "LDATA"
 *   - 0x1673d8: "%s\INTROMIX.SMK"
 *   - 0x1673e8: "Smacker error"
 ******************************************************************************/
undefined8 FUN_0006b4c7(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_DX;
  undefined4 in_EDX;
  undefined1 local_b0 [144];
  int local_20;
  int local_1c;
  
  iVar1 = FUN_000e830c();
  if (iVar1 == 0) {
    FUN_000e6a10();
    iVar1 = FUN_000e7750(0xd,0x280,0x1e0,DAT_00199210,1,0);
    if (iVar1 == 1) {
      FUN_000e7904(0);
      FUN_000e79fc();
      FUN_00045bb8();
      local_1c = FUN_000e9484();
      if (local_1c == 0) {
LAB_0006b56a:
        DAT_00334021 = 1;
        FUN_000e8ca8();
      }
      else {
        iVar1 = FUN_000e984c();
        if ((iVar1 == 0x4b000) && (iVar1 = FUN_000e984c(), iVar1 == 0x300)) {
          FUN_000e846c(DAT_00199210);
          local_20 = FUN_000eb818();
          local_20 = local_20 + 3000;
          do {
            iVar1 = FUN_000eb818();
            if (local_20 <= iVar1) goto LAB_0006b694;
            FUN_000e8560();
            iVar1 = FUN_000e797c();
            if (iVar1 == 1) {
              for (iVar1 = 0; iVar1 < DAT_003d9830; iVar1 = iVar1 + 1) {
                FUN_000e8c83();
              }
              FUN_000e797c();
            }
            FUN_000e79fc();
          } while ((((DAT_003db535 == '\0') && (DAT_003db4fd == '\0')) && (DAT_003db518 == '\0')) &&
                  (DAT_003d987b == '\0'));
          DAT_003db535 = '\0';
          DAT_003db4fd = '\0';
          DAT_003db518 = '\0';
          DAT_003d987b = '\0';
LAB_0006b694:
          FUN_000e94b0();
          FUN_000e6a10();
          FUN_000e7904(0);
          FUN_000e79fc();
          iVar1 = FUN_000e7750(1,0x140,200,DAT_00199210,2,0);
          if (iVar1 == 1) {
            FUN_000e7904(0);
            FUN_000e79fc();
            FUN_000150f0();
            if (DAT_002ed3ee == '\0') {
              FUN_000dd920();
              uVar2 = FUN_000dd920();
              FUN_000e7714(local_b0,s__s_INTROMIX_SMK_001673d8,uVar2);
              iVar1 = FUN_000efde0();
              if (iVar1 == 0) {
                FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 1457, "Unable to open Legal Screen") */
              }
              FUN_000e6a10();
              FUN_000e846c(DAT_00199210);
              FUN_000e7904(0);
              FUN_000e79fc();
            }
            DAT_003d9878 = 1;
            FUN_0006ae80();
            DAT_003d9878 = extraout_DX;
            FUN_000e83f0();
            uVar2 = 1;
            goto LAB_00069ecf;
          }
          goto LAB_0006b56a;
        }
        FUN_000ddaf0(); /* LbErrorLog("setup.cpp", line 1535, "Smacker error") */
        FUN_000e94b0();
      }
      FUN_000e83f0();
    }
    else {
      DAT_00334021 = 1;
      FUN_000e8ca8();
    }
  }
  uVar2 = 0;
LAB_00069ecf:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_06b7d0 (Ghidra: FUN_0006b7d0)
 * Prototype: undefined8 sub_06b7d0(void);
 * Address  : 0x6b7d0 (Size: 77 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6a412
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0006b7d0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 in_EDX;
  int *piVar3;
  uint local_18;
  
  local_18 = 0;
  iVar2 = 0x200;
  piVar3 = &DAT_002f10e3;
  do {
    uVar1 = local_18 * 0x24a1 + 0x24df;
    local_18 = uVar1 >> 0xd | uVar1 * 0x80000;
    *piVar3 = local_18 % 0x7f - 0x3f;
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return CONCAT44(in_EDX,local_18 / 0x7f);
}

/******************************************************************************
 * Function : sub_06b820 (Ghidra: FUN_0006b820)
 * Prototype: void sub_06b820(undefined1 param_1);
 * Address  : 0x6b820 (Size: 1466 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x49fda, 0x72109, 0x7220a
 * Callees  : 10 -> 0x10c1a, 0x10c44, 0x10d08, 0x250ef, 0x25504, 0x43ac3, 0x6d453, 0x6e538, 0xdc354, 0xdd414
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

void FUN_0006b820(undefined1 param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined2 uVar3;
  int in_EAX;
  int iVar4;
  int in_EDX;
  int iVar5;
  ushort unaff_BX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  int aiStack_54 [2];
  int local_48;
  int local_44;
  short local_38;
  short sStack_36;
  short local_34;
  short local_20;
  int local_1c;
  char local_18;
  int local_14;
  
  piVar6 = (int *)&stack0xffffffb4;
  piVar9 = (int *)&stack0xffffffb4;
  iVar5 = (uint)unaff_BX * 0x65;
  local_14 = 0;
  uVar1 = 0;
  local_18 = '\0';
  local_48 = in_EDX;
  local_44 = in_EAX;
  if (in_EDX == 0) {
    local_20 = *(short *)(in_EAX + 0x52);
    sVar2 = *(short *)(in_EAX + 0x54);
  }
  else {
    local_18 = '\0';
    if (((&DAT_00188cdc)[iVar5] != '\0') && (*(char *)(in_EDX + 0x1f) != '\t')) {
      local_18 = '\x01';
    }
    aiStack_54[1] = 0x6b975;
    local_20 = FUN_00010c1a();
    aiStack_54[1] = 0x6b983;
    sVar2 = FUN_00010c44();
  }
  if ((&DAT_00188cdc)[iVar5] == '\0') {
    uVar3 = *(undefined2 *)(&DAT_00188caa + iVar5);
  }
  else {
    aiStack_54[1] = 0x6b9a9;
    uVar3 = FUN_0006d453();
  }
  if ((unaff_BX == 6) && (local_48 != 0)) {
    uVar1 = *(undefined2 *)(local_48 + 0x1b);
  }
  if (6 < unaff_BX) {
    if (7 < unaff_BX) {
      if (0xb < unaff_BX) {
        if (unaff_BX < 0xd) goto LAB_0006ba01;
        if (unaff_BX == 0xd) {
          local_1c = 0;
          puVar10 = &stack0xffffffb4;
          while (piVar7 = (int *)puVar10, local_1c < 0x20) {
            piVar7 = (int *)(puVar10 + -4);
            *(undefined4 *)(puVar10 + -4) = 0xffffffff;
            *(undefined4 *)(puVar10 + -8) = 0x6bcfb;
            local_14 = FUN_00043ac3();
            if (local_14 == 0) break;
            *(undefined1 *)(local_14 + 0x16) = param_1;
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            *(ushort *)(local_14 + 0x52) =
                 (local_20 + (short)((ulonglong)DAT_002e8bf6 % 100)) - 0x32U & 0x7ff;
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            *(ushort *)(local_14 + 0x54) =
                 sVar2 + -0x32 + (short)((ulonglong)DAT_002e8bf6 % 100) & 0x7ff;
            *(undefined4 *)(puVar10 + -8) = 0x6bc9e;
            FUN_00010d08();
            *(short *)(local_14 + 0x32) = *(short *)(local_14 + 0x32) + local_38;
            *(short *)(local_14 + 0x34) = *(short *)(local_14 + 0x34) + sStack_36;
            *(short *)(local_14 + 0x36) = *(short *)(local_14 + 0x36) + local_34;
            *(undefined2 *)(local_14 + 0x14) = uVar3;
            *(byte *)(local_14 + 1) = *(byte *)(local_14 + 1) | 4;
            *(undefined2 *)(local_14 + 0x5e) = uRam001891c9;
            local_1c = local_1c + 1;
            *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
            puVar10 = puVar10 + -4;
          }
          goto LAB_0006baa8;
        }
      }
      goto LAB_0006bd18;
    }
    if (local_48 == 0) {
LAB_0006bb7d:
      aiStack_54[1] = 4;
      piVar9 = aiStack_54;
      aiStack_54[0] = 0x100;
      FUN_000dd414();
    }
    else {
      aiStack_54[1] = 0x6bb76;
      iVar4 = FUN_000dc354();
      if (0x300 < iVar4) goto LAB_0006bb7d;
    }
    *(undefined4 *)((int)piVar9 + -4) = 0xffffffff;
    *(undefined4 *)((int)piVar9 + -8) = 0x6bbb7;
    local_14 = FUN_00043ac3();
    piVar7 = (int *)((int)piVar9 + -4);
    if (local_14 != 0) {
      *(undefined4 *)((int)piVar9 + -8) = 0x6bbd9;
      FUN_00025504();
      *(undefined2 *)(local_14 + 0x5e) = *(undefined2 *)(&DAT_00188ca8 + iVar5);
      *(undefined2 *)(local_14 + 0x14) = *(undefined2 *)(&DAT_00188caa + iVar5);
      *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
      piVar7 = (int *)((int)piVar9 + -4);
    }
    goto LAB_0006baa8;
  }
  if (unaff_BX != 4) {
LAB_0006bd18:
    aiStack_54[1] = 0xffffffff;
    aiStack_54[0] = 0x6bd32;
    local_14 = FUN_00043ac3();
    piVar7 = aiStack_54 + 1;
    if (local_14 != 0) {
      *(short *)(local_14 + 0x54) = sVar2;
      *(short *)(local_14 + 0x52) = local_20;
      aiStack_54[0] = 0x6bd5d;
      FUN_00010d08();
      *(short *)(local_14 + 0x32) = *(short *)(local_14 + 0x32) + local_38;
      *(short *)(local_14 + 0x34) = *(short *)(local_14 + 0x34) + sStack_36;
      *(short *)(local_14 + 0x36) = *(short *)(local_14 + 0x36) + local_34;
      *(undefined2 *)(local_14 + 0x14) = uVar3;
      *(byte *)(local_14 + 1) = *(byte *)(local_14 + 1) | 4;
      *(undefined2 *)(local_14 + 0x5e) = *(undefined2 *)(&DAT_00188ca8 + iVar5);
      *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
      *(undefined2 *)(local_14 + 0x17) = uVar1;
      *(char *)(local_14 + 0x13) =
           (char)((ulonglong)
                  ((uint)(byte)(&DAT_002e911a)[(uint)*(byte *)(local_44 + 0x1a) * 0xe6] *
                   (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(local_44 + 100)] + 0x23) * 0x23) /
                 100) + (&DAT_002e911a)[(uint)*(byte *)(local_44 + 0x1a) * 0xe6];
      piVar7 = aiStack_54 + 1;
    }
    goto LAB_0006baa8;
  }
LAB_0006ba01:
  if (local_48 == 0) {
LAB_0006ba1c:
    aiStack_54[1] = 0x14;
    piVar6 = aiStack_54;
    aiStack_54[0] = 0x100;
    FUN_000dd414();
  }
  else {
    aiStack_54[1] = 0x6ba15;
    iVar4 = FUN_000dc354();
    if (0x1400 < iVar4) goto LAB_0006ba1c;
  }
  *(undefined4 *)((int)piVar6 + -4) = 0xffffffff;
  *(undefined4 *)((int)piVar6 + -8) = 0x6ba58;
  local_14 = FUN_00043ac3();
  piVar7 = (int *)((int)piVar6 + -4);
  if (local_14 != 0) {
    *(undefined4 *)((int)piVar6 + -8) = 0x6ba84;
    FUN_000250ef();
    *(undefined2 *)(local_14 + 0x5e) = *(undefined2 *)(&DAT_00188ca8 + iVar5);
    *(undefined2 *)(local_14 + 0x14) = *(undefined2 *)(&DAT_00188caa + iVar5);
    *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
    piVar7 = (int *)((int)piVar6 + -4);
  }
LAB_0006baa8:
  if (local_14 != 0) {
    *(undefined1 *)(local_14 + 0x16) = param_1;
    piVar8 = piVar7;
    if (*(short *)(&DAT_00188caf + iVar5) != 0) {
      piVar7[0xffffffff] = 0x100;
      piVar7[0xfffffffe] = 3;
      piVar7[0xfffffffd] = 0;
      DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
      piVar8 = piVar7 + 0xfffffffc;
      piVar7[0xfffffffc] = 3;
      DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
      piVar7[0xfffffffb] = 0x6bb1c;
      FUN_0006e538();
    }
    if (*(short *)(&DAT_00188cb2 + iVar5) != 0) {
      *(undefined4 *)((int)piVar8 + -4) = 0x100;
      *(uint *)((int)piVar8 + -8) = (uint)*(ushort *)(&DAT_00188cb4 + iVar5);
      *(undefined4 *)((int)piVar8 + -0xc) = 0;
      *(undefined4 *)((int)piVar8 + -0x10) = 3;
      *(undefined4 *)((int)piVar8 + -0x14) = 0x6bb4a;
      FUN_0006e538();
    }
    *(byte *)(local_14 + 0x25) = *(byte *)(local_14 + 0x25) & 0xef;
    *(byte *)(local_14 + 0x25) = *(byte *)(local_14 + 0x25) | local_18 << 4;
  }
  return;
}

/******************************************************************************
 * Function : sub_06bdda (Ghidra: FUN_0006bdda)
 * Prototype: undefined4 sub_06bdda(void);
 * Address  : 0x6bdda (Size: 1105 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xb41d8
 * Callees  : 18 -> 0x10c1a, 0x10c44, 0x10cf5, 0x10d08, 0x17128, 0x24998, 0x39a74, 0x39e90, 0x6c2cc, 0x6c444 ...
 ******************************************************************************/
undefined4 FUN_0006bdda(void)

{
  undefined2 uVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  int in_EDX;
  int iVar4;
  short *psVar5;
  byte bVar6;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  short local_3c;
  short sStack_3a;
  undefined2 local_38;
  undefined4 local_34;
  short local_30 [2];
  undefined4 local_2c;
  undefined2 auStack_28 [2];
  int local_24;
  int local_20;
  int local_1c;
  undefined *local_18;
  int local_14;
  
  bVar6 = 0;
  psVar5 = &local_3c;
  local_1c = (int)*(char *)(in_EAX + 0x20);
  local_18 = &DAT_00188c94 + (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  if (*(ushort *)(in_EAX + 0x1d) == *(ushort *)(in_EAX + 0x1b)) {
    local_20 = 0;
  }
  else {
    local_20 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  if (*(char *)(in_EDX + 0x1f) == '\x01') {
    uStack_40 = 0x6be33;
    uVar2 = FUN_0006c444();
    return uVar2;
  }
  if (*(char *)(in_EDX + 0x1f) == '\x05') {
    if ((local_20 != 0) && (*(char *)(local_20 + 0x1f) == '\x05')) {
      uStack_40 = 0x6be68;
      FUN_0006d7d5();
    }
    if (local_18[0x48] != '\0') {
      uStack_40 = 0x6be7c;
      uVar2 = FUN_0006c2cc();
      return uVar2;
    }
    if ((local_18[0x28] == '\0') && (-1 < *(short *)(in_EDX + 0x5e))) {
      if ((*(short *)(in_EDX + 100) == 0) ||
         (((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xac) & 8) == 0 ||
          (local_18[0x29] != '\0')))) {
        if ((*(char *)(in_EAX + 0x1a) == '\x0f') && (*(char *)(in_EDX + 0x1a) == '\a')) {
          uStack_40 = 0x6c001;
          iVar3 = FUN_00024998();
          if (iVar3 != 0) {
            *(undefined1 *)(iVar3 + 0x16) = 8;
          }
          *(undefined2 *)(in_EAX + 0x5e) = 0xffff;
          return 1;
        }
        if (*(short *)(local_18 + 0x22) != 0) {
          uStack_40 = 0x6c033;
          FUN_0006edb9();
          uStack_40 = 0x100;
          uStack_44 = 2;
          uStack_48 = 0;
          psVar5 = (short *)&uStack_4c;
          uStack_4c = 3;
          FUN_0006e538();
        }
        if (*(short *)(in_EAX + 0x14) != 0) {
          if ((local_18[0x27] != '\0') && (local_20 != 0)) {
            *(short *)(local_20 + 0x5e) =
                 *(short *)(local_20 + 0x5e) + (*(short *)(in_EAX + 0x14) >> 1);
            iVar3 = (int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(local_20 + 0x1a) * 0x73] *
                          (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(local_20 + 100)] + 0x23) *
                         0x23) / 100 +
                    (int)(short)(&DAT_002e9114)[(uint)*(byte *)(local_20 + 0x1a) * 0x73];
            if (iVar3 < *(short *)(local_20 + 0x5e)) {
              *(short *)(local_20 + 0x5e) = (short)iVar3;
            }
          }
          *(undefined4 *)((int)psVar5 + -4) = 0x6c0ec;
          FUN_00081c10();
        }
        if ((local_18[0x24] != '\0') &&
           (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xb1) == '\0')) {
          *(undefined *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xb1) = local_18[0x24];
        }
        if (*(short *)(local_18 + 0x25) != 0) {
          *(undefined4 *)((int)psVar5 + -4) = 0x6c14d;
          FUN_000717de();
        }
        if ((local_18[0x4b] != '\0') && (local_20 != 0)) {
          *(undefined4 *)((int)psVar5 + -4) = 0x6c164;
          iVar3 = FUN_00039e90();
          if (iVar3 < 8) {
            *(undefined4 *)((int)psVar5 + -4) = 0x6c173;
            FUN_00039a74();
          }
        }
        if (local_18[0x2a] != '\0') {
          iVar3 = *(short *)(in_EAX + 0x38) * local_1c;
          iVar4 = iVar3 >> 0x1f;
          local_3c = (short)((int)((iVar3 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4);
          iVar3 = *(short *)(in_EAX + 0x3a) * local_1c;
          iVar4 = iVar3 >> 0x1f;
          local_38 = 0;
          sStack_3a = (short)((int)((iVar3 + iVar4 * -0x10) - (uint)(iVar4 << 3 < 0)) >> 4);
          *(short *)(in_EDX + 0x32) = *(short *)(in_EDX + 0x32) + local_3c;
          *(short *)(in_EDX + 0x34) = *(short *)(in_EDX + 0x34) + sStack_3a;
          *(byte *)(in_EDX + 1) = *(byte *)(in_EDX + 1) | 4;
          *(undefined2 *)(in_EDX + 0x36) = *(undefined2 *)(in_EDX + 0x36);
        }
        *(undefined4 *)((int)psVar5 + -4) = 0x6c1ce;
        FUN_0006d223();
        if (*(short *)(local_18 + 0x45) != 0) {
          *(short *)(in_EAX + 0x5e) =
               *(short *)(in_EAX + 0x5e) -
               *(short *)(&DAT_002e91f1 + (uint)*(byte *)(in_EDX + 0x1a) * 0xe6);
        }
        if (*(short *)(in_EDX + 0x5e) < 0) {
          *(undefined4 *)((int)psVar5 + -4) = 0x6c1fe;
          FUN_0006d0a8();
        }
        else if (*(char *)(in_EDX + 6) != *(char *)(in_EAX + 6)) {
          *(undefined4 *)((int)psVar5 + -4) = 0x6c20f;
          FUN_00017128();
        }
        if (local_18[0x18] != '\0') {
          *(undefined4 *)((int)psVar5 + -4) = 0x6c221;
          FUN_00072af4();
        }
      }
      else {
        if (*(ushort *)(in_EAX + 0x1d) == *(ushort *)(in_EAX + 0x1b)) {
          iVar3 = 0;
        }
        else {
          iVar3 = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
        }
        local_24 = in_EDX;
        local_14 = in_EAX;
        if (iVar3 == 0) {
          uStack_40 = 0x6bee9;
          FUN_00010cf5();
          iVar3 = local_14;
          *(ushort *)(local_14 + 0x52) =
               CONCAT11((char)((ushort)*(undefined2 *)(local_14 + 0x52) >> 8) + '\x04',
                        (char)*(undefined2 *)(local_14 + 0x52)) & 0x7ff;
          *(ushort *)(local_14 + 0x54) =
               CONCAT11((char)((ushort)*(undefined2 *)(local_14 + 0x54) >> 8) + '\x04',
                        (char)*(undefined2 *)(local_14 + 0x54)) & 0x7ff;
          uStack_40 = 0x6bf28;
          FUN_00010d08();
          *(undefined4 *)(iVar3 + 0x2c) = local_2c;
          *(undefined2 *)(iVar3 + 0x30 + (uint)bVar6 * -8) = auStack_28[(uint)bVar6 * -4];
          if (*(char *)(local_24 + 0x1f) == '\x05') {
            *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_24 + 0x1d);
          }
        }
        else {
          local_34 = *(undefined4 *)(iVar3 + 0xd);
          local_30[(uint)bVar6 * -4] = *(short *)(iVar3 + 0x11 + (uint)bVar6 * -8);
          local_30[0] = local_30[0] +
                        *(short *)(&DAT_002e9162 + (uint)*(byte *)(iVar3 + 0x1a) * 0xe6);
          uStack_40 = 0x6bf80;
          FUN_00010cf5();
          uStack_40 = 0x6bf87;
          uVar1 = FUN_00010c1a();
          *(undefined2 *)(local_14 + 0x52) = uVar1;
          uStack_40 = 0x6bf98;
          uVar1 = FUN_00010c44();
          iVar3 = local_14;
          *(undefined2 *)(local_14 + 0x54) = uVar1;
          uStack_40 = 0x6bfbc;
          FUN_00010d08();
          *(undefined4 *)(iVar3 + 0x2c) = local_2c;
          *(undefined2 *)(iVar3 + 0x30 + (uint)bVar6 * -8) = auStack_28[(uint)bVar6 * -4];
          *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_24 + 0x1d);
          *(undefined1 *)(local_14 + 6) = *(undefined1 *)(local_24 + 6);
        }
      }
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06c22b (Ghidra: FUN_0006c22b)
 * Prototype: int sub_06c22b(void);
 * Address  : 0x6c22b (Size: 161 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6c2cc
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_0006c22b(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int in_EDX;
  
  iVar2 = (int)((uint)*(byte *)(in_EAX + 0x13) -
               (((uint)(byte)(&DAT_002e911c)[(uint)*(byte *)(in_EDX + 0x1a) * 0xe6] *
                 (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x23) * 0x23) / 100 +
               (uint)(byte)(&DAT_002e911c)[(uint)*(byte *)(in_EDX + 0x1a) * 0xe6])) / 2;
  if (iVar2 < -0x60) {
    iVar2 = -0x60;
  }
  else if (0x60 < iVar2) {
    iVar2 = 0x60;
  }
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar1 = DAT_002e8bf6 >> 0xd;
  DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
  if ((uVar1 & 0xff) < iVar2 + 0x80U) {
    return (int)*(short *)(in_EAX + 0x14);
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06c2cc (Ghidra: FUN_0006c2cc)
 * Prototype: undefined4 sub_06c2cc(void);
 * Address  : 0x6c2cc (Size: 376 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6bdda
 * Callees  : 8 -> 0x17128, 0x6c22b, 0x6d0a8, 0x6d223, 0x6e538, 0x6edb9, 0x72af4, 0x81c10
 ******************************************************************************/
undefined4 FUN_0006c2cc(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int iVar2;
  short *psVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  short local_24;
  short sStack_22;
  undefined2 local_20;
  undefined4 local_1c;
  int local_18;
  undefined *local_14;
  
  psVar3 = &local_24;
  local_18 = (int)*(char *)(in_EAX + 0x20);
  local_14 = &DAT_00188c94 + (uint)*(byte *)(in_EAX + 0x1a) * 0x65;
  if (*(short *)(in_EDX + 0x5e) < 0) {
    return 0;
  }
  if (*(ushort *)(in_EAX + 0x1d) == *(ushort *)(in_EAX + 0x1b)) {
    local_1c = 0;
  }
  else {
    local_1c = (&DAT_001ae9fc)[*(ushort *)(in_EAX + 0x1d)];
  }
  uStack_28 = 0x6c327;
  iVar1 = FUN_0006c22b();
  if (iVar1 != 0) {
    psVar3 = &local_24;
    if (*(short *)(local_14 + 0x22) != 0) {
      uStack_28 = 0x100;
      uStack_2c = 2;
      uStack_30 = 0;
      psVar3 = (short *)&uStack_34;
      uStack_34 = 3;
      FUN_0006e538();
      FUN_0006edb9();
    }
    *(undefined4 *)((int)psVar3 + -4) = 0x6c38b;
    FUN_00081c10();
    if (local_14[0x24] != '\0') {
      *(undefined *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0xb1) = local_14[0x24];
    }
    if (local_14[0x2a] != '\0') {
      iVar1 = *(short *)(in_EAX + 0x38) * local_18;
      iVar2 = iVar1 >> 0x1f;
      local_24 = (short)((int)((iVar1 + iVar2 * -0x10) - (uint)(iVar2 << 3 < 0)) >> 4);
      iVar1 = *(short *)(in_EAX + 0x3a) * local_18;
      iVar2 = iVar1 >> 0x1f;
      local_20 = 0;
      sStack_22 = (short)((int)((iVar1 + iVar2 * -0x10) - (uint)(iVar2 << 3 < 0)) >> 4);
      *(short *)(in_EDX + 0x32) = *(short *)(in_EDX + 0x32) + local_24;
      *(short *)(in_EDX + 0x34) = *(short *)(in_EDX + 0x34) + sStack_22;
      *(byte *)(in_EDX + 1) = *(byte *)(in_EDX + 1) | 4;
      *(undefined2 *)(in_EDX + 0x36) = *(undefined2 *)(in_EDX + 0x36);
    }
    *(undefined4 *)((int)psVar3 + -4) = 0x6c406;
    FUN_0006d223();
    if (*(short *)(in_EDX + 0x5e) < 0) {
      *(undefined4 *)((int)psVar3 + -4) = 0x6c417;
      FUN_0006d0a8();
    }
    else if (*(char *)(in_EDX + 6) != *(char *)(in_EAX + 6)) {
      *(undefined4 *)((int)psVar3 + -4) = 0x6c428;
      FUN_00017128();
    }
  }
  if (local_14[0x18] != '\0') {
    *(undefined4 *)((int)psVar3 + -4) = 0x6c43a;
    FUN_00072af4();
  }
  return 1;
}

