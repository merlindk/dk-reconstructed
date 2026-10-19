/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: setup.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 26
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : setup_init_color_tables (Original VA: 0x69a90, Ghidra: FUN_00069a90)
 * Prototype: undefined8 setup_init_color_tables(void);
 * Address  : 0x69a90 (Size: 59 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Initialize colour lookup tables before screen setup
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 1 -> setup_build_fade_palette_steps
 ******************************************************************************/
undefined8 setup_init_color_tables(void)

{
  byte flag;
  undefined4 arg_edx;
  byte *loop_i;
  byte *extraout_EDX;
  
  for (loop_i = &g_bss_002eb40b; loop_i < (byte *)0x2eb538; loop_i = loop_i + 10) {
    if (((*loop_i & 1) != 0) && (((uint)*(ushort *)(loop_i + 7) + g_game_turn & 0x1f) == 0)) {
      flag = setup_build_fade_palette_steps();
      extraout_EDX[9] = flag;
      loop_i = extraout_EDX;
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : setup_build_fade_palette_steps (Original VA: 0x69acb, Ghidra: FUN_00069acb)
 * Prototype: undefined8 setup_build_fade_palette_steps(void);
 * Address  : 0x69acb (Size: 213 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Precompute palette fade step tables
 * Callers  : 1 -> setup_init_color_tables
 * Callees  : 1 -> setup_compare_display_modes
 ******************************************************************************/
undefined8 setup_build_fade_palette_steps(void)

{
  ushort cctrl_ptr;
  int arg_eax;
  int val;
  uint thing_ptr;
  undefined1 uval;
  ushort cctrl_ptr_2;
  uint extraout_ECX;
  uint thing_ptr_2;
  uint extraout_ECX_00;
  undefined4 arg_edx;
  int val_2;
  uint local_1c;
  
  local_1c = 0;
  val_2 = 0;
  cctrl_ptr_2 = CONCAT11(1,(&g_bss_002eb40a)[arg_eax * 10]);
  do {
    thing_ptr_2 = (uint)cctrl_ptr_2;
    thing_ptr = local_1c;
    if ((((&g_players)[local_1c] & 1) != 0) && (thing_ptr = thing_ptr_2 & 0xff, (thing_ptr & cctrl_ptr_2 >> 8) == 0))
    {
      cctrl_ptr_2 = *(ushort *)((int)&g_bss_002e05b6 + val_2);
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr_2], g_thing_ptrs < thing_ptr) {
        val = setup_compare_display_modes();
        if (val != 0) {
          thing_ptr_2 = CONCAT31((int3)(extraout_ECX >> 8),(byte)extraout_ECX | (byte)(extraout_ECX >> 8))
          ;
          break;
        }
        thing_ptr_2 = extraout_ECX;
        cctrl_ptr_2 = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
      }
      cctrl_ptr_2 = (ushort)thing_ptr_2;
      thing_ptr = thing_ptr_2 & 0xff;
      if ((thing_ptr & thing_ptr_2 >> 8 & 0xff) == 0) {
        cctrl_ptr = *(ushort *)((int)&g_bss_002e05b8 + val_2);
        while( true ) {
          cctrl_ptr_2 = (ushort)thing_ptr_2;
          thing_ptr_2 = (&g_thing_ptrs)[cctrl_ptr];
          if (thing_ptr_2 <= g_thing_ptrs) break;
          thing_ptr = setup_compare_display_modes();
          if (thing_ptr != 0) {
            cctrl_ptr_2 = (ushort)CONCAT31((int3)(extraout_ECX_00 >> 8),
                                     (byte)extraout_ECX_00 | (byte)(extraout_ECX_00 >> 8));
            break;
          }
          cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f); /* thing->ccontrol_idx */
          thing_ptr_2 = extraout_ECX_00;
        }
      }
    }
    local_1c = local_1c + 0x4ef;
    val_2 = val_2 + 0x1508;
    uval = (undefined1)cctrl_ptr_2;
    cctrl_ptr_2 = CONCAT11((char)(cctrl_ptr_2 >> 8) * '\x02',uval);
    if (val_2 == 0x6928) {
      return CONCAT44(arg_edx,CONCAT31((int3)(thing_ptr >> 8),uval));
    }
  } while( true );
}

/******************************************************************************
 * Function : setup_compare_display_modes (Original VA: 0x69ba0, Ghidra: FUN_00069ba0)
 * Prototype: undefined4 setup_compare_display_modes(void);
 * Address  : 0x69ba0 (Size: 139 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Compare two display mode descriptors for compatibility
 * Callers  : 1 -> setup_build_fade_palette_steps
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 setup_compare_display_modes(void)

{
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int arg_edx;
  
  if (*(short *)(arg_edx + 5) == 0) {
    if (*(char *)(arg_eax + 1) != *(char *)(arg_edx + 2)) {
      return 0;
    }
    if (*(char *)(arg_eax + 3) == *(char *)(arg_edx + 4)) {
      return 1;
    }
    return 0;
  }
  val = bflib_system_io_fn_0e69fc();
  val_2 = bflib_system_io_fn_0e69fc();
  if (val_2 < val) {
    val = *(int *)(&g_data_0017a4d0 + ((val_2 << 8) / val) * 8) * val;
  }
  else {
    val_3 = 0;
    if (val_2 == 0) goto LAB_00069c05;
    val = *(int *)(&g_data_0017a4d0 + ((val << 8) / val_2) * 8) * val_2;
  }
  val_3 = val >> 0xd;
LAB_00069c05:
  if (val_3 < (int)(uint)*(byte *)(arg_edx + 6)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : setup_detect_physical_memory_tier (Original VA: 0x69c2c, Ghidra: FUN_00069c2c)
 * Prototype: longlong setup_detect_physical_memory_tier(void);
 * Address  : 0x69c2c (Size: 83 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 59
 * Purpose  : Map detected physical RAM (MB) to asset caching tier (8/16/24/32 MB)
 * Callers  : 2 -> inits_fn_045bb8, setup_allocate_graphics_heap
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong setup_detect_physical_memory_tier(void)

{
  uint arg_eax;
  uint arg_edx;
  
  if (arg_eax < 0x10) {
    if (arg_eax == 8) {
      return CONCAT44(arg_edx,0x100000);
    }
  }
  else {
    if (arg_eax < 0x11) {
      return CONCAT44(arg_edx,0x200000);
    }
    if (0x17 < arg_eax) {
      if (arg_eax < 0x19) {
        return CONCAT44(arg_edx,0x500000);
      }
      if (arg_eax == 0x20) {
        return CONCAT44(arg_edx,0x800000);
      }
    }
  }
  LbErrorLog(); /* LbErrorLog("setup.cpp", line 59, "Unhandled PhysicalMemory") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : setup_load_vga_256_palettes (Original VA: 0x69c7f, Ghidra: FUN_00069c7f)
 * Prototype: void setup_load_vga_256_palettes(void);
 * Address  : 0x69c7f (Size: 605 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Load VGA 256-color palettes and shade tables from DATA/
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 8 -> cdtest_ldata_dkwind00_dat_0150f0, file_fn_02c3d0, setup_load_alpha_and_light_tables, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8f34, bflib_system_io_fn_0e984c, bflib_system_io_fn_0e98c8
 ******************************************************************************/
void setup_load_vga_256_palettes(void)

{
  char ch;
  undefined1 uval;
  undefined4 uval_2;
  int *int_ptr;
  int extraout_EDX;
  int val;
  int loop_i;
  byte *byte_ptr;
  int val_2;
  undefined1 *word_ptr;
  byte *byte_ptr_2;
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
  
  prepare_file_path();
  uval_2 = prepare_file_path();
  val = 0;
  dk_sprintf(local_e0,s__s_tables_dat_00166f1e,uval_2);
  int_ptr = &g_bss_002f18e3;
  local_34 = extraout_EDX;
  do {
    val_2 = val;
    for (loop_i = 0; loop_i < 0x100; loop_i = loop_i + 0x20) {
      if (0x21f < val_2) {
        cdtest_ldata_dkwind00_dat_0150f0();
        ch = file_fn_02c3d0();
        if (ch == '\0') {
          word_ptr = &g_pixmap_fade_tables;
          local_1c = 0;
          do {
            local_2c = 0x100;
            byte_ptr = g_display_palette;
            do {
              local_44 = (int)((uint)*byte_ptr * local_1c) >> 5;
              byte_ptr = byte_ptr + 3;
              uval = bflib_system_io_fn_0e8f34();
              *word_ptr = uval;
              word_ptr = word_ptr + 1;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
            local_1c = local_1c + 1;
          } while (local_1c < 0x20);
          local_20 = 0x20;
          local_2c = 0;
          do {
            local_24 = 0x100;
            byte_ptr = g_display_palette;
            do {
              local_44 = (int)((uint)*byte_ptr * local_20) >> 5;
              byte_ptr = byte_ptr + 3;
              uval = bflib_system_io_fn_0e8f34();
              *word_ptr = uval;
              word_ptr = word_ptr + 1;
              local_24 = local_24 + -1;
            } while (local_24 != 0);
            local_20 = local_20 + 3;
          } while (local_20 < 0xc0);
          local_40 = &g_pixmap_ghost_tables;
          local_28 = 0;
          local_24 = 0;
          byte_ptr = g_display_palette;
          do {
            local_48 = (uint)*byte_ptr;
            local_38 = (uint)byte_ptr[1];
            local_3c = 0x100;
            local_30 = (uint)byte_ptr[2];
            byte_ptr = byte_ptr + 3;
            byte_ptr_2 = g_display_palette;
            do {
              local_44 = (int)((uint)*byte_ptr_2 * 2 + local_48) / 3;
              uval = bflib_system_io_fn_0e8f34();
              byte_ptr_2 = byte_ptr_2 + 3;
              word_ptr = local_40 + 1;
              *local_40 = uval;
              local_3c = local_3c + -1;
              local_40 = word_ptr;
            } while (local_3c != 0);
            local_28 = local_28 + 1;
          } while (local_28 < 0x100);
          bflib_system_io_fn_0e98c8();
        }
        else {
          bflib_system_io_fn_0e984c();
        }
        g_display_bss_003d9820 = &g_pixmap_fade_tables;
        val = 0;
        do {
          if ((&g_pixmap_fade_tables)[val] == '\0') {
            (&g_pixmap_fade_tables)[val] = 0x90;
          }
          val = val + 1;
        } while (val < 0x2000);
        setup_load_alpha_and_light_tables();
        return;
      }
      val_2 = val_2 + 1;
      *int_ptr = g_bss_002f2223 + loop_i + local_34;
      int_ptr = int_ptr + 1;
    }
    val = val + 8;
    local_34 = local_34 + 0x2000;
  } while( true );
}

/******************************************************************************
 * Function : setup_load_alpha_and_light_tables (Original VA: 0x69edc, Ghidra: FUN_00069edc)
 * Prototype: void setup_load_alpha_and_light_tables(void);
 * Address  : 0x69edc (Size: 1146 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Load DATA/ALPHA.COL and lighting tables
 * Callers  : 1 -> setup_load_vga_256_palettes
 * Callees  : 7 -> cdtest_ldata_dkwind00_dat_0150f0, file_fn_02c3d0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8f34, bflib_system_io_fn_0e984c, bflib_system_io_fn_0e98c8
 ******************************************************************************/
void setup_load_alpha_and_light_tables(void)

{
  char ch;
  undefined1 uval;
  undefined4 uval_2;
  int val;
  int val_2;
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
  
  prepare_file_path();
  uval_2 = prepare_file_path();
  dk_sprintf(local_144,s__s_alpha_col_00166f33,uval_2);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = file_fn_02c3d0();
  if (ch == '\0') {
    local_ac = 0;
    local_6c = 0x100;
    do {
      local_74 = 0;
      local_70 = local_6c;
      val_2 = local_ac * 4;
      do {
        local_a0 = (uint)*(byte *)(g_display_palette + local_74) + val_2;
        if (0x3f < (int)local_a0) {
          local_a0 = 0x3f;
        }
        local_a8 = (uint)*(byte *)(g_display_palette + local_74 + 2) + val_2;
        if (0x3f < local_a8) {
          local_a8 = 0x3f;
        }
        local_a0 = local_a0 & 0xff;
        uval = bflib_system_io_fn_0e8f34();
        local_74 = local_74 + 3;
        val = local_70 + 1;
        (&g_bss_0019a2a2)[local_70] = uval;
        local_70 = val;
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
      val_2 = 0;
      local_68 = local_58;
      do {
        uval = bflib_system_io_fn_0e8f34();
        val_2 = val_2 + 3;
        val = local_68 + 1;
        (&g_bss_0019a2a2)[local_68] = uval;
        local_68 = val;
      } while (val_2 != 0x300);
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
      val_2 = 0;
      local_50 = local_48;
      do {
        local_a0 = g_display_palette;
        uval = bflib_system_io_fn_0e8f34();
        val_2 = val_2 + 3;
        val = local_50 + 1;
        (&g_bss_0019a2a2)[local_50] = uval;
        local_50 = val;
      } while (val_2 != 0x300);
      local_4c = local_4c + 6;
      local_1c = local_1c + 1;
    }
    local_20 = 0;
    local_3c = 0;
    local_34 = 0x2100;
    for (local_38 = 0x1900; local_38 < local_34; local_38 = local_38 + 0x100) {
      local_84 = local_3c;
      local_80 = local_20 * 2;
      val_2 = 0;
      local_40 = local_38;
      do {
        local_a0 = (uint)*(byte *)(g_display_palette + 1 + val_2) + local_80;
        if (0x3f < (int)local_a0) {
          local_a0 = 0x3f;
        }
        local_a4 = (uint)*(byte *)(val_2 + 2 + g_display_palette) + local_84;
        if (0x3f < local_a4) {
          local_a4 = 0x3f;
        }
        local_a0 = local_a0 & 0xff;
        uval = bflib_system_io_fn_0e8f34();
        val_2 = val_2 + 3;
        val = local_40 + 1;
        (&g_bss_0019a2a2)[local_40] = uval;
        local_40 = val;
      } while (val_2 != 0x300);
      local_3c = local_3c + 6;
      local_20 = local_20 + 1;
    }
    local_24 = 0;
    local_30 = 0;
    local_28 = 0x2900;
    for (local_2c = 0x2100; local_2c < local_28; local_2c = local_2c + 0x100) {
      local_7c = local_24 * 2;
      val = 0;
      local_78 = local_30;
      val_2 = local_2c;
      do {
        val = val + 3;
        uval = bflib_system_io_fn_0e8f34();
        (&g_bss_0019a2a2)[val_2] = uval;
        val_2 = val_2 + 1;
      } while (val != 0x300);
      local_30 = local_30 + 6;
      local_24 = local_24 + 1;
    }
    bflib_system_io_fn_0e98c8();
  }
  else {
    bflib_system_io_fn_0e984c();
  }
  return;
}

/******************************************************************************
 * Function : setup_free_gui_data_files (Original VA: 0x6a356, Ghidra: FUN_0006a356)
 * Prototype: longlong setup_free_gui_data_files(void);
 * Address  : 0x6a356 (Size: 188 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 363
 * Purpose  : Free loaded GUI data/sprite tables (data/gui.dat)
 * Callers  : 2 -> setup_load_core_game_data, setup_init_game_screen_and_subsystems
 * Callees  : 6 -> LbErrorLog, dk_sprintf, bflib_system_io_fn_0e823c, LbDataFreeAll, bflib_system_io_fn_0e9498, bflib_system_io_fn_0e94b0
 ******************************************************************************/
longlong setup_free_gui_data_files(void)

{
  bool flag;
  undefined4 extraout_ECX;
  uint arg_edx;
  char *str_ptr;
  int extraout_EDX;
  int val;
  undefined8 uval;
  undefined8 uval_2;
  
  str_ptr = s_data_gui_dat_00187500;
  while (*(int *)(str_ptr + 0x1c) != 0) {
    LbDataFreeAll();
    str_ptr = (char *)(extraout_EDX + 0x2c);
  }
  flag = true;
  uval = bflib_system_io_fn_0e9498();
  while( true ) {
    while( true ) {
      val = (int)((ulonglong)uval >> 0x20);
      if (*(int *)(val + 0x1c) == 0) {
        if ((int)uval != 0) {
          bflib_system_io_fn_0e94b0();
        }
        return CONCAT44(arg_edx,1);
      }
      *(ushort *)(val + 0x28) = (ushort)flag;
      uval_2 = bflib_system_io_fn_0e823c();
      val = (int)((ulonglong)uval_2 >> 0x20);
      uval = CONCAT44(val,extraout_ECX);
      if ((int)uval_2 != -100) break;
      if (!flag) goto LAB_0006a3bc;
      flag = false;
    }
    if ((int)uval_2 == -0x65) break;
    flag = true;
    uval = CONCAT44(val + 0x2c,extraout_ECX);
  }
  dk_sprintf(&g_log_sprintf_buf,s_Unable_to_load_file____s__00166f63,val);
LAB_0006a3bc:
  LbErrorLog(); /* LbErrorLog("setup.cpp", line 363, "No memory for MCGA files") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : setup_verify_cdrom_installation (Original VA: 0x6a412, Ghidra: FUN_0006a412)
 * Prototype: longlong setup_verify_cdrom_installation(void);
 * Address  : 0x6a412 (Size: 321 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Verify installation files and prompt for Dungeon Keeper CD-ROM if missing
 * Callers  : 1 -> panmap_fn_0633c4
 * Callees  : 21 -> compturn_fn_02245b, evil_settings_dat_029738, file_install_path_029eef, inits_fn_0401ec, inits_update_creature_and_thing_044eb6, pom_iterations_065724, setup_load_vga_256_palettes, setup_load_core_game_data ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong setup_verify_cdrom_installation(void)

{
  int val;
  uint uval;
  uint arg_edx;
  longdouble val_2;
  int local_30;
  
  compturn_fn_02245b();
  setup_init_mouse_and_pointer();
  val_2 = (longdouble)pom_iterations_065724();
  g_bss_0033401d = (float)val_2;
  if ((val_2 <= (longdouble)g_data_00166fb9) || (g_data_00166fc1 <= (double)val_2)) {
    g_bss_002ee88d = 0;
  }
  else {
    g_bss_002ee88d = 1;
  }
  val = file_install_path_029eef();
  if (val != 0) {
    bflib_system_io_fn_0f4908();
    val = setup_show_bullfrog_legal_splash();
    if (val == 0) goto LAB_0006a550;
    setup_load_text_strings_dat();
    val = setup_load_core_game_data();
    if (val == 0) {
      g_bss_00334021 = 1;
    }
    else {
      val = bflib_system_io_fn_0ebc80();
      if (val == 1) {
        evil_settings_dat_029738();
        val = setup_allocate_graphics_heap();
        if (val != 0) {
          inits_fn_0401ec();
          if (local_30 == 0) {
            uval = 4;
          }
          else {
            uval = local_30 >> 8 & 0xf;
          }
          if (5 < uval) {
            watcom_crt_fn_12f930();
          }
          draw_load_palette_file_08cc24();
          bflib_system_io_bf110_set_redbook_volume_0ecf70();
          bflib_system_io_fn_0f32ae();
          bflib_system_io_fn_0f3264();
          setup_init_trig_and_projection_tables();
          setup_load_vga_256_palettes();
          inits_update_creature_and_thing_044eb6();
          return CONCAT44(arg_edx,1);
        }
        goto LAB_0006a550;
      }
    }
  }
  LbMemoryCopy();
LAB_0006a550:
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : setup_load_core_game_data (Original VA: 0x6a553, Ghidra: FUN_0006a553)
 * Prototype: longlong setup_load_core_game_data(void);
 * Address  : 0x6a553 (Size: 255 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 493
 * Purpose  : Load core game data files via LbDataLoadAll
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 11 -> setup_free_gui_data_files, setup_load_pointer_sprites, ceiling_illegal_ceiling_step_value_07c1f0, light_fn_0ac630, LbErrorLog, bflib_system_io_fn_0e6a6c, LbTextDraw, LbDataLoadAll ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong setup_load_core_game_data(void)

{
  int val;
  uint arg_edx;
  
  val = LbDataLoadAll();
  if (val != 0) {
    LbErrorLog(); /* LbErrorLog("setup.cpp", line 493, g_log_buf) */
    return (ulonglong)arg_edx << 0x20;
  }
  val = setup_free_gui_data_files();
  if (val != 0) {
    setup_load_pointer_sprites();
    g_mouse_cursor_y = 0x280;
    g_mouse_cursor_x = 400;
    g_units_per_pixel = 2;
    g_bss_0019cba8 = 0x20;
    g_bss_0019cbaa = 8;
    bflib_system_io_fn_0f05f0();
    bflib_system_io_fn_0ebc98();
    bflib_system_io_fn_0eba38();
    bflib_system_io_fn_0e6a6c();
    LbTextDraw();
    light_fn_0ac630();
    ceiling_illegal_ceiling_step_value_07c1f0();
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 0x40;
  }
  return CONCAT44(arg_edx,(uint)(val != 0));
}

/******************************************************************************
 * Function : setup_shutdown_video_and_audio (Original VA: 0x6a652, Ghidra: FUN_0006a652)
 * Prototype: void setup_shutdown_video_and_audio(void);
 * Address  : 0x6a652 (Size: 55 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Shutdown sound, timer, and LbScreenReset on game exit
 * Callers  : 1 -> panmap_fn_0633c4
 * Callees  : 7 -> LbScreenReset, LbDataFree, bflib_system_io_fn_0e94b0, bflib_system_io_fn_0e94f8, bflib_system_io_fn_0ebe68, bflib_system_io_fn_0f4960, bflib_system_io_fn_0f4c6c
 ******************************************************************************/
void setup_shutdown_video_and_audio(void)

{
  bflib_system_io_fn_0ebe68();
  bflib_system_io_fn_0f4960();
  LbScreenReset();
  LbDataFree();
  bflib_system_io_fn_0e94b0();
  g_bss_00333f73 = 0;
  bflib_system_io_fn_0f4c6c();
  bflib_system_io_fn_0e94f8();
  return;
}

/******************************************************************************
 * Function : setup_init_game_screen_and_subsystems (Original VA: 0x6a689, Ghidra: FUN_0006a689)
 * Prototype: undefined8 setup_init_game_screen_and_subsystems(void);
 * Address  : 0x6a689 (Size: 1079 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 619, 671
 * Purpose  : Initialize VESA/VGA screen mode (disallow MCGA minimal) and game subsystems
 * Callers  : 1 -> frontend_fn_030e88
 * Callees  : 28 -> eyelens_fn_0270e0, eyelens_fn_027320, heap_graphics_heap_already_allocated_03a3d4, heap_fn_03a4bb, heap_graphics_heap_allocated_03a4e3, heap_fn_03a57e, setup_free_gui_data_files, setup_clear_screen_backbuffer ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_init_game_screen_and_subsystems(void)

{
  undefined2 saved_draw_flags;
  ushort arg_ax;
  undefined4 uval;
  int val;
  int screen_res;
  ushort extraout_CX;
  ushort extraout_CX_00;
  ushort uval_2;
  ushort extraout_CX_01;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 arg_edx;
  uint screen_res_2;
  
  saved_draw_flags = g_lb_display_draw_flags;
  screen_res = g_bss_00376518;
  screen_res_2 = (uint)g_active_screen_mode;
  if ((arg_ax == g_active_screen_mode) && (g_bss_00376518 == 0)) {
    uval = 1;
    goto LAB_00069ed6;
  }
  bflib_system_io_fn_0ebc10(g_bss_0019d0c7);
  if (g_active_screen_mode < 10) {
    if (g_active_screen_mode == 1) {
      if (g_bss_00376518 == 0) {
        eyelens_fn_0270e0();
        heap_fn_03a57e();
        heap_fn_03a4bb();
        setup_free_pointer_sprites();
        if (screen_res_2 != (extraout_ECX & 0xffff)) {
          LbScreenReset();
        }
        goto LAB_0006a734;
      }
      if (screen_res_2 != (extraout_ECX_01 & 0xffff)) {
        LbScreenReset();
      }
      LbDataFree();
      LbErrorLog(); /* LbErrorLog("setup.cpp", line 619, "MCGA Minimal not allowed") */
      uval_2 = extraout_CX;
LAB_0006a6fe:
      g_bss_00376518 = 0;
      goto LAB_0006a739;
    }
LAB_0006a809:
    LbErrorLog(); /* LbErrorLog("setup.cpp", line 671, "Unhandled Screen Mode (Reset)") */
  }
  else {
    if ((10 < g_active_screen_mode) && (g_active_screen_mode != 0xd)) goto LAB_0006a809;
    if (g_bss_00376518 != 0) {
      if ((screen_res_2 != (extraout_ECX_01 & 0xffff)) || (screen_res != 0)) {
        LbScreenReset();
      }
      LbDataFree();
      uval_2 = extraout_CX_01;
      goto LAB_0006a6fe;
    }
    eyelens_fn_0270e0();
    heap_fn_03a57e();
    heap_fn_03a4bb();
    setup_free_pointer_sprites();
    if ((screen_res_2 != (extraout_ECX_00 & 0xffff)) || (screen_res != 0)) {
      LbScreenReset();
    }
LAB_0006a734:
    LbDataFree();
    uval_2 = extraout_CX_00;
LAB_0006a739:
    if (uval_2 == 0) goto LAB_0006a809;
    if (1 < uval_2) {
      if ((uval_2 == 0xd) && (val = LbDataLoadAll(), val == 0)) {
        if ((screen_res_2 != (extraout_ECX_03 & 0xffff)) || (screen_res != 0)) {
          screen_res = bflib_system_io_fn_0e6a30();
          if (screen_res == 0) {
            screen_res = LbScreenSetup(0xd,0x280,0x1e0,g_display_palette,1,0);
          }
          else {
            screen_res = LbScreenSetup(10,0x280,400,g_display_palette,1,0);
          }
          if (screen_res != 1) goto LAB_0006a80e;
          g_mouse_cursor_y = 0x280;
          g_mouse_cursor_x = 400;
        }
        setup_load_pointer_sprites();
        g_units_per_pixel = 1;
        g_bss_0019cba8 = 0x10;
        g_bss_0019cbaa = 0x10;
        if (g_bss_00377768 != 0) {
          prepare_file_path();
          uval = prepare_file_path();
          dk_sprintf(&g_log_sprintf_buf,s__s_gmaphi_raw_0016709e,uval);
          bflib_system_io_fn_0e984c();
        }
        setup_clear_screen_backbuffer();
LAB_0006a9e5:
        bflib_system_io_fn_0e7904(0);
        bflib_system_io_fn_0e79fc();
        eyelens_fn_027320();
        bflib_system_io_fn_0f05f0();
        bflib_system_io_fn_0ebc98();
        bflib_system_io_fn_0eba38();
        bflib_system_io_fn_0e6a6c();
        LbTextDraw();
        bflib_system_io_fn_0ebf9c();
        g_lb_display_draw_flags = saved_draw_flags;
        screen_res = heap_graphics_heap_already_allocated_03a3d4();
        uval = 0;
        if (screen_res != 0) {
          heap_graphics_heap_allocated_03a4e3();
          uval = 1;
          g_game_operation_flags = g_game_operation_flags & 0xfb;
        }
        goto LAB_00069ed6;
      }
      goto LAB_0006a809;
    }
    screen_res = setup_free_gui_data_files();
    if (screen_res == 0) goto LAB_0006a809;
    if ((screen_res_2 == (extraout_ECX_02 & 0xffff)) ||
       (screen_res = LbScreenSetup(1,0x140,200,g_display_palette,2,0), screen_res == 1)) {
      setup_load_pointer_sprites();
      g_mouse_cursor_y = 0x280;
      g_mouse_cursor_x = 400;
      g_units_per_pixel = 2;
      g_bss_0019cba8 = 0x20;
      g_bss_0019cbaa = 8;
      if (g_bss_00377768 != 0) {
        prepare_file_path();
        uval = prepare_file_path();
        dk_sprintf(&g_log_sprintf_buf,s__s_gmap_raw_0016705f,uval);
        bflib_system_io_fn_0e984c();
      }
      goto LAB_0006a9e5;
    }
  }
LAB_0006a80e:
  uval = 0;
LAB_00069ed6:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : setup_reload_gui_and_mode_sprites (Original VA: 0x6aac0, Ghidra: FUN_0006aac0)
 * Prototype: undefined8 setup_reload_gui_and_mode_sprites(void);
 * Address  : 0x6aac0 (Size: 773 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 878, 889
 * Purpose  : Reload GUI sprite tables (data/gui.dat) for current screen resolution
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, frontend_fn_02f9f5
 * Callees  : 18 -> eyelens_fn_0270e0, frontend_fn_02f1c8, frontend_fn_02f1d2, heap_fn_03a4bb, heap_fn_03a57e, setup_free_pointer_sprites, LbErrorLog, bflib_system_io_fn_0e6a6c ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_reload_gui_and_mode_sprites(void)

{
  undefined2 saved_draw_flags;
  ushort arg_ax;
  undefined4 uval;
  int screen_res;
  ushort extraout_CX;
  ushort extraout_CX_00;
  ushort extraout_CX_01;
  ushort uval_2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 arg_edx;
  uint screen_res_2;
  
  saved_draw_flags = g_lb_display_draw_flags;
  screen_res_2 = (uint)g_active_screen_mode;
  if ((arg_ax == g_active_screen_mode) && (g_bss_00376518 != 0)) {
    uval = 1;
    g_lb_display_draw_flags = saved_draw_flags;
    goto LAB_00069ed6;
  }
  if (g_active_screen_mode < 10) {
    if (g_active_screen_mode != 1) goto LAB_0006abbd;
    if (g_bss_00376518 != 0) {
      if (arg_ax != 1) {
        LbScreenReset();
      }
      goto LAB_0006ab26;
    }
    eyelens_fn_0270e0();
    heap_fn_03a57e();
    heap_fn_03a4bb();
    setup_free_pointer_sprites();
    if ((extraout_ECX & 0xffff) != 1) {
      LbScreenReset();
    }
LAB_0006ab61:
    LbDataFree();
    uval_2 = extraout_CX_00;
  }
  else if ((g_active_screen_mode < 0xb) || (g_active_screen_mode == 0xd)) {
    if (g_bss_00376518 == 0) {
      eyelens_fn_0270e0();
      heap_fn_03a57e();
      heap_fn_03a4bb();
      if (screen_res_2 != (extraout_ECX_01 & 0xffff)) {
        LbScreenReset();
      }
      goto LAB_0006ab61;
    }
    setup_free_pointer_sprites();
    if (screen_res_2 != (extraout_ECX_00 & 0xffff)) {
      LbScreenReset();
    }
LAB_0006ab26:
    LbDataFree();
    g_bss_00376518 = 0;
    uval_2 = extraout_CX;
  }
  else {
LAB_0006abbd:
    LbErrorLog(); /* LbErrorLog("setup.cpp", line 878, "Unhandled Screen Mode (Reset)") */
    uval_2 = extraout_CX_01;
  }
  if (uval_2 == 0) {
LAB_0006ac13:
    LbErrorLog(); /* LbErrorLog("setup.cpp", line 889, "Unable to load mcga_load_files_minimal") */
  }
  else {
    if (uval_2 < 2) {
      g_bss_00376518 = 1;
      screen_res = LbDataLoadAll();
      if ((screen_res == 0) &&
         ((screen_res_2 == (extraout_ECX_02 & 0xffff) ||
          (screen_res = LbScreenSetup(1,0x140,200,g_display_palette,2,0), screen_res == 1)))) {
        g_mouse_cursor_y = 0x280;
        g_mouse_cursor_x = 400;
        g_units_per_pixel = 2;
        g_bss_0019cba8 = 0x20;
        g_bss_0019cbaa = 8;
LAB_0006ac87:
        bflib_system_io_fn_0e7904(0);
        bflib_system_io_fn_0e79fc();
        bflib_system_io_fn_0ebc98();
        bflib_system_io_fn_0eba38();
        bflib_system_io_fn_0e6a6c();
        LbTextDraw();
        uval = 1;
        g_lb_display_draw_flags = saved_draw_flags;
        goto LAB_00069ed6;
      }
      goto LAB_0006ac13;
    }
    if (uval_2 != 0xd) goto LAB_0006ac13;
    g_bss_00376518 = 1;
    frontend_fn_02f1c8();
    screen_res = LbDataLoadAll();
    if (screen_res != 0) goto LAB_0006ac13;
    frontend_fn_02f1d2();
    if ((screen_res_2 == (extraout_ECX_03 & 0xffff)) ||
       (screen_res = LbScreenSetup(0xd,0x280,0x1e0,g_display_palette,1,0), screen_res == 1)) {
      g_mouse_cursor_y = 0x280;
      g_mouse_cursor_x = 0x1e0;
      g_units_per_pixel = 1;
      g_bss_0019cba8 = 0x10;
      g_bss_0019cbaa = 0x10;
      bflib_system_io_fn_0f05f0();
      goto LAB_0006ac87;
    }
  }
  uval = 0;
LAB_00069ed6:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : setup_load_text_strings_dat (Original VA: 0x6adc5, Ghidra: FUN_0006adc5)
 * Prototype: void setup_load_text_strings_dat(void);
 * Address  : 0x6adc5 (Size: 79 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Load localized text strings from DATA/TEXT.DAT
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 5 -> setup_clear_pointer_array, LbFileLoadAt, bflib_system_io_fn_0e97a0, bflib_system_io_fn_0e984c, bflib_system_io_fn_0f4c8a
 ******************************************************************************/
void setup_load_text_strings_dat(void)

{
  bflib_system_io_fn_0e97a0();
  g_bss_00333f73 = LbFileLoadAt();
  if (g_bss_00333f73 != 0) {
    bflib_system_io_fn_0e984c();
    setup_clear_pointer_array();
    return;
  }
  bflib_system_io_fn_0f4c8a();
  return;
}

/******************************************************************************
 * Function : setup_clear_pointer_array (Original VA: 0x6ae14, Ghidra: FUN_0006ae14)
 * Prototype: void setup_clear_pointer_array(void);
 * Address  : 0x6ae14 (Size: 35 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Zero out array of pointers
 * Callers  : 1 -> setup_load_text_strings_dat
 * Callees  : 0 -> 
 ******************************************************************************/
void setup_clear_pointer_array(void)

{
  char ch;
  char *arg_eax;
  int val;
  int val_2;
  int arg_edx;
  short arg_bx;
  short short_val;
  
  val = 0;
  while (short_val = arg_bx + -1, arg_bx != 0) {
    val_2 = val + 4;
    *(char **)(val + arg_edx) = arg_eax;
    do {
      ch = *arg_eax;
      arg_eax = arg_eax + 1;
      val = val_2;
      arg_bx = short_val;
    } while (ch != '\0');
  }
  return;
}

/******************************************************************************
 * Function : setup_clear_screen_backbuffer (Original VA: 0x6ae37, Ghidra: FUN_0006ae37)
 * Prototype: void setup_clear_screen_backbuffer(void);
 * Address  : 0x6ae37 (Size: 73 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Clear full screen backbuffer (g_screen_width * g_screen_height)
 * Callers  : 1 -> setup_init_game_screen_and_subsystems
 * Callees  : 2 -> LbScreenWaitVbi, bflib_system_io_fn_0f0d1c
 ******************************************************************************/
void setup_clear_screen_backbuffer(void)

{
  int val;
  int extraout_ECX;
  
  val = g_screen_width * g_screen_height;
  while (0 < val) {
    bflib_system_io_fn_0f0d1c();
    LbScreenWaitVbi();
    val = extraout_ECX + -0x10000;
  }
  return;
}

/******************************************************************************
 * Function : setup_show_loading_raw_screen (Original VA: 0x6ae80, Ghidra: FUN_0006ae80)
 * Prototype: void setup_show_loading_raw_screen(void);
 * Address  : 0x6ae80 (Size: 461 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 1036
 * Purpose  : Load and display LOADING.RAW splash screen with palette
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, setup_show_bullfrog_legal_splash
 * Callees  : 13 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_fn_030782, prepare_file_path, LbErrorLog, LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0e7904, LbScreenLock ...
 ******************************************************************************/
void setup_show_loading_raw_screen(void)

{
  undefined1 uval;
  undefined4 uval_2;
  int screen_res;
  int val;
  undefined1 *word_ptr;
  int extraout_ECX;
  undefined1 *word_ptr_2;
  
  LbScreenWaitVbi();
  LbPaletteSet(g_scratch_work_buf);
  cdtest_ldata_dkwind00_dat_0150f0();
  prepare_file_path(s_LOADING_RAW_001671d1);
  uval_2 = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s__s_001671e4,uval_2);
  screen_res = bflib_system_io_fn_0e984c();
  if (screen_res != -1) {
    prepare_file_path(s_LOADING_PAL_001671ea);
    uval_2 = prepare_file_path();
    dk_sprintf(&g_log_sprintf_buf,s__s__s_001671fd,uval_2);
    cdtest_ldata_dkwind00_dat_0150f0();
    screen_res = bflib_system_io_fn_0e984c();
    if (screen_res != 0x300) {
      LbErrorLog(); /* LbErrorLog("setup.cpp", line 1036, "Unable to load LOADING palette") */
      LbFileClose();
    }
    bflib_system_io_fn_0e7904(0);
    screen_res = LbScreenLock();
    if (screen_res == 1) {
      if ((g_active_screen_mode == 0xd) || (g_active_screen_mode == 10)) {
        word_ptr = g_display_bss_003d9818;
        if (g_active_screen_mode == 0xd) {
          word_ptr = g_display_bss_003d9818 + g_screen_pitch * 0x28;
        }
        screen_res = 0;
        word_ptr_2 = g_scratch_work_buf;
        do {
          val = 0;
          do {
            uval = *word_ptr_2;
            *word_ptr = uval;
            val = val + 1;
            word_ptr_2 = word_ptr_2 + 1;
            word_ptr[1] = uval;
            word_ptr = word_ptr + 2;
          } while (val < 0x140);
          screen_res = screen_res + 1;
          LbFileClose();
          word_ptr = (undefined1 *)(extraout_ECX + g_screen_pitch);
        } while (screen_res < 200);
      }
      else {
        screen_res = 0;
        do {
          LbFileClose();
          screen_res = screen_res + 1;
        } while (screen_res < 200);
      }
      LbScreenLock();
      bflib_system_io_fn_0e79fc();
    }
  }
  bflib_system_io_fn_0e8f24();
  frontend_fn_030782();
  return;
}

/******************************************************************************
 * Function : setup_init_mouse_and_pointer (Original VA: 0x6b04d, Ghidra: FUN_0006b04d)
 * Prototype: void setup_init_mouse_and_pointer(void);
 * Address  : 0x6b04d (Size: 123 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Initialize mouse driver and cursor pointer
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 3 -> bflib_system_io_fn_0f0f8c, bflib_system_io_fn_0f4cb8, bflib_system_io_fn_0f4d9b
 ******************************************************************************/
void setup_init_mouse_and_pointer(void)

{
  int val;
  
  val = bflib_system_io_fn_0f4cb8();
  if (val == 0) {
    val = bflib_system_io_fn_0f4cb8();
    if (val == 0) {
      val = bflib_system_io_fn_0f4cb8();
      if (val == 0) {
        g_bss_00334065 = 8;
      }
      else {
        bflib_system_io_fn_0f4d9b();
        g_bss_00334065 = 0x10;
      }
    }
    else {
      bflib_system_io_fn_0f4d9b();
      g_bss_00334065 = 0x18;
    }
  }
  else {
    bflib_system_io_fn_0f4d9b();
    g_bss_00334065 = 0x20;
  }
  bflib_system_io_fn_0f0f8c(s_PhysicalMemory__d_0016722c,g_bss_00334065);
  return;
}

/******************************************************************************
 * Function : setup_load_pointer_sprites (Original VA: 0x6b0c8, Ghidra: FUN_0006b0c8)
 * Prototype: void setup_load_pointer_sprites(void);
 * Address  : 0x6b0c8 (Size: 99 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 1187
 * Purpose  : Load mouse pointer sprite sheet (data/hpointer.dat)
 * Callers  : 2 -> setup_load_core_game_data, setup_init_game_screen_and_subsystems
 * Callees  : 3 -> LbErrorLog, LbDataLoadAll, bflib_system_io_fn_0f05d8
 ******************************************************************************/
void setup_load_pointer_sprites(void)

{
  int val;
  
  val = LbDataLoadAll();
  if (val != 0) {
    LbErrorLog(); /* LbErrorLog("setup.cpp", line 1187, "Unable to load pointer files") */
  }
  bflib_system_io_fn_0f05d8();
  return;
}

/******************************************************************************
 * Function : setup_free_pointer_sprites (Original VA: 0x6b12b, Ghidra: FUN_0006b12b)
 * Prototype: void setup_free_pointer_sprites(void);
 * Address  : 0x6b12b (Size: 68 bytes)
 * Module   : setup.cpp [contiguous_same_unit_span]
 * Purpose  : Detach mouse cursor and free pointer sprite sheet
 * Callers  : 2 -> setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites
 * Callees  : 2 -> LbDataFree, bflib_system_io_fn_0ebc10
 ******************************************************************************/
void setup_free_pointer_sprites(void)

{
  bflib_system_io_fn_0ebc10();
  LbDataFree();
  return;
}

/******************************************************************************
 * Function : setup_allocate_graphics_heap (Original VA: 0x6b16f, Ghidra: FUN_0006b16f)
 * Prototype: longlong setup_allocate_graphics_heap(void);
 * Address  : 0x6b16f (Size: 856 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 1235, 1299
 * Purpose  : Allocate and initialize sprite/texture graphics heap
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 9 -> setup_detect_physical_memory_tier, sndheap_fn_06deac, sndheap_fn_06df91, LbErrorLog, dk_sprintf, LbFileLoadAt, bflib_system_io_fn_0e94b0, bflib_system_io_fn_0f0730 ...
 ******************************************************************************/
longlong setup_allocate_graphics_heap(void)

{
  bool flag;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint arg_edx;
  int val_2;
  int val_3;
  longlong val_4;
  longlong val_5;
  undefined1 local_130 [144];
  undefined1 local_a0 [144];
  
  val = 0;
  if (g_bss_00334019 == 0) {
    bflib_system_io_fn_0f0730();
    sndheap_fn_06df91();
    val = extraout_ECX;
    if (g_bss_0033318b != 0) {
      bflib_system_io_fn_0e94b0();
      val = extraout_ECX_00;
      g_bss_0033318b = extraout_ECX_00;
    }
  }
  if (g_bss_00333187 != 0) {
    LbErrorLog(); /* LbErrorLog("setup.cpp", line 1235, "Graphics heap already allocated") */
    bflib_system_io_fn_0e94b0();
    g_bss_00333187 = 0;
    val = extraout_ECX_01;
  }
  val_5 = CONCAT44(g_bss_00334065,g_bss_00333187);
  if (g_bss_00334019 == 0) {
    do {
      val_5 = CONCAT44(g_bss_00334065,g_bss_00333187);
      if (g_bss_0033318b != 0) goto LAB_0006b23e;
      g_bss_0033318f = setup_detect_physical_memory_tier();
      val_4 = LbFileLoadAt();
      val_5 = CONCAT44(g_bss_00334065,g_bss_00333187);
      g_bss_0033318b = (int)val_4;
      val = extraout_ECX_02;
    } while (val_4 != 0x800000000);
    val = 1;
  }
LAB_0006b23e:
  do {
    val_2 = (int)((ulonglong)val_5 >> 0x20);
    g_bss_00333187 = (int)val_5;
    if (g_bss_00333187 != 0) goto LAB_0006b2b4;
    if (val_2 == 0x20) {
      g_bss_00333183 = 0x800000;
    }
    else if (val_2 == 0x18) {
      g_bss_00333183 = 0x500000;
    }
    else if (val_2 == 0x10) {
      g_bss_00333183 = 0x200000;
    }
    else {
      g_bss_00333183 = 0x100000;
    }
    val_5 = LbFileLoadAt();
    val = extraout_ECX_03;
  } while (val_5 != 0x800000000);
  val = 1;
  g_bss_00333187 = 0;
LAB_0006b2b4:
  if (val != 0) {
    while ((g_bss_00333187 == 0 && ((g_bss_00334019 != 0 || (g_bss_0033318b != 0))))) {
      val = g_bss_00333183 + -0x4000;
      if (g_bss_00334019 == 0) {
        val_2 = val;
        if ((g_bss_00333183 <= g_bss_0033318f) &&
           (val_3 = g_bss_0033318f + -0x4000, flag = g_bss_0033318f <= g_bss_00333183,
           val_2 = g_bss_00333183, g_bss_0033318f = val_3, flag)) {
          val_2 = val;
        }
        g_bss_00333183 = val_2;
        val = g_bss_00333183;
        if (g_bss_0033318f < 0x80000) goto LAB_0006b347;
      }
      g_bss_00333183 = val;
      if (g_bss_00333183 < 0x80000) {
        if (g_bss_0033318b != 0) {
          bflib_system_io_fn_0e94b0();
          g_bss_0033318b = 0;
        }
LAB_0006b347:
        LbErrorLog(); /* LbErrorLog("setup.cpp", line 1299, "Unable to allocate heaps (small_mem)") */
        return (ulonglong)arg_edx << 0x20;
      }
      if (g_bss_0033318b != 0) {
        bflib_system_io_fn_0e94b0();
        g_bss_0033318b = 0;
      }
      if (g_bss_00333187 != 0) {
        bflib_system_io_fn_0e94b0();
        g_bss_00333187 = 0;
      }
      if (g_bss_00334019 == 0) {
        g_bss_0033318b = LbFileLoadAt();
      }
      g_bss_00333187 = LbFileLoadAt();
    }
  }
  bflib_system_io_fn_0f0f8c(s_GraphicsHeap_Size__d_001672ed,g_bss_00333183);
  if (g_bss_00334019 == 0) {
    bflib_system_io_fn_0f0f8c(s_SoundHeap_Size__d_00167302,g_bss_0033318f);
  }
  if (g_bss_00334019 == 0) {
    dk_sprintf(local_130,s__s_SOUND_DAT_0016731a,s_SOUND_00167314); /* 0x16731a="%s\SOUND.DAT" */
    dk_sprintf(local_a0,s__s_SPEECH_DAT_0016732d,s_SOUND_00167327); /* 0x16732d="%s\SPEECH.DAT" */
    val = sndheap_fn_06deac(0x656);
    if (val == 0) {
      bflib_system_io_fn_0e94b0();
      g_bss_0033318b = 0;
      g_bss_00334019 = 1;
      LbErrorLog(); /* LbErrorLog("setup.cpp", line ?, g_log_buf) */
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : setup_show_bullfrog_legal_splash (Original VA: 0x6b4c7, Ghidra: FUN_0006b4c7)
 * Prototype: undefined8 setup_show_bullfrog_legal_splash(void);
 * Address  : 0x6b4c7 (Size: 775 bytes)
 * Module   : setup.cpp [direct_file_string_xref]
 * OrigLine : setup.cpp lines 1457, 1535
 * Purpose  : Enter 640x480 mode (0x0d) and display DATA/LEGAL.RAW splash
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 22 -> cdtest_ldata_dkwind00_dat_0150f0, inits_fn_045bb8, setup_show_loading_raw_screen, prepare_file_path, LbErrorLog, LbScreenWaitVbi, dk_sprintf, LbScreenSetup ...
 ******************************************************************************/
undefined8 setup_show_bullfrog_legal_splash(void)

{
  int clock_ms;
  undefined4 uval;
  undefined2 extraout_DX;
  undefined4 arg_edx;
  undefined1 local_b0 [144];
  int local_20;
  int local_1c;
  
  clock_ms = LbDataLoadAll();
  if (clock_ms == 0) {
    LbScreenWaitVbi();
    clock_ms = LbScreenSetup(0xd,0x280,0x1e0,g_display_palette,1,0);
    if (clock_ms == 1) {
      bflib_system_io_fn_0e7904(0);
      bflib_system_io_fn_0e79fc();
      inits_fn_045bb8();
      local_1c = LbFileLoadAt();
      if (local_1c == 0) {
LAB_0006b56a:
        g_bss_00334021 = 1;
        LbMemoryCopy();
      }
      else {
        clock_ms = bflib_system_io_fn_0e984c();
        if ((clock_ms == 0x4b000) && (clock_ms = bflib_system_io_fn_0e984c(), clock_ms == 0x300)) {
          LbPaletteSet(g_display_palette);
          local_20 = LbTimerClock();
          local_20 = local_20 + 3000;
          do {
            clock_ms = LbTimerClock();
            if (local_20 <= clock_ms) goto LAB_0006b694;
            LbKeyboardRead();
            clock_ms = LbScreenLock();
            if (clock_ms == 1) {
              for (clock_ms = 0; clock_ms < g_screen_height; clock_ms = clock_ms + 1) {
                LbFileClose();
              }
              LbScreenLock();
            }
            bflib_system_io_fn_0e79fc();
          } while ((((g_bss_003db535 == '\0') && (g_bss_003db4fd == '\0')) && (g_bss_003db518 == '\0')) &&
                  (g_display_bss_003d987b == '\0'));
          g_bss_003db535 = '\0';
          g_bss_003db4fd = '\0';
          g_bss_003db518 = '\0';
          g_display_bss_003d987b = '\0';
LAB_0006b694:
          bflib_system_io_fn_0e94b0();
          LbScreenWaitVbi();
          bflib_system_io_fn_0e7904(0);
          bflib_system_io_fn_0e79fc();
          clock_ms = LbScreenSetup(1,0x140,200,g_display_palette,2,0);
          if (clock_ms == 1) {
            bflib_system_io_fn_0e7904(0);
            bflib_system_io_fn_0e79fc();
            cdtest_ldata_dkwind00_dat_0150f0();
            if (g_bss_002ed3ee == '\0') {
              prepare_file_path();
              uval = prepare_file_path();
              dk_sprintf(local_b0,s__s_INTROMIX_SMK_001673d8,uval);
              clock_ms = bflib_system_io_fn_0efde0();
              if (clock_ms == 0) {
                LbErrorLog(); /* LbErrorLog("setup.cpp", line 1457, "Unable to open Legal Screen") */
              }
              LbScreenWaitVbi();
              LbPaletteSet(g_display_palette);
              bflib_system_io_fn_0e7904(0);
              bflib_system_io_fn_0e79fc();
            }
            g_active_screen_mode = 1;
            setup_show_loading_raw_screen();
            g_active_screen_mode = extraout_DX;
            LbDataFree();
            uval = 1;
            goto LAB_00069ecf;
          }
          goto LAB_0006b56a;
        }
        LbErrorLog(); /* LbErrorLog("setup.cpp", line 1535, "Smacker error") */
        bflib_system_io_fn_0e94b0();
      }
      LbDataFree();
    }
    else {
      g_bss_00334021 = 1;
      LbMemoryCopy();
    }
  }
  uval = 0;
LAB_00069ecf:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : setup_init_trig_and_projection_tables (Original VA: 0x6b7d0, Ghidra: FUN_0006b7d0)
 * Prototype: undefined8 setup_init_trig_and_projection_tables(void);
 * Address  : 0x6b7d0 (Size: 77 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Initialize 512-entry trigonometry/projection lookup tables
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 setup_init_trig_and_projection_tables(void)

{
  uint uval;
  int val;
  undefined4 arg_edx;
  int *int_ptr;
  uint local_18;
  
  local_18 = 0;
  val = 0x200;
  int_ptr = &g_bss_002f10e3;
  do {
    uval = local_18 * 0x24a1 + 0x24df;
    local_18 = uval >> 0xd | uval * 0x80000;
    *int_ptr = local_18 % 0x7f - 0x3f;
    int_ptr = int_ptr + 1;
    val = val + -1;
  } while (val != 0);
  return CONCAT44(arg_edx,local_18 / 0x7f);
}

/******************************************************************************
 * Function : setup_switch_screen_resolution (Original VA: 0x6b820, Ghidra: FUN_0006b820)
 * Prototype: void setup_switch_screen_resolution(undefined1 param_1);
 * Address  : 0x6b820 (Size: 1466 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Switch active screen mode, reallocate viewport, and reload sprites
 * Callers  : 3 -> instance_update_creature_and_thing_049fda, spell_update_creature_control_072109, spell_handle_object_thing_07220a
 * Callees  : 10 -> anger_fn_010c1a, anger_fn_010c44, anger_fn_010d08, effect_roll_action_random_0250ef, effect_roll_action_random_025504, inits_fn_043ac3, shot_update_creature_control_06d453, sound_fn_06e538 ...
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

void setup_switch_screen_resolution(undefined1 param_1)

{
  undefined2 uval;
  short short_val;
  undefined2 uval_2;
  int thing;
  int val;
  int arg_edx;
  int val_2;
  ushort arg_bx;
  int *int_ptr;
  int *int_ptr_2;
  int *int_ptr_3;
  int *int_ptr_4;
  undefined1 *word_ptr;
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
  
  int_ptr = (int *)&stack0xffffffb4;
  int_ptr_4 = (int *)&stack0xffffffb4;
  val_2 = (uint)arg_bx * 0x65;
  local_14 = 0;
  uval = 0;
  local_18 = '\0';
  local_48 = arg_edx;
  local_44 = thing;
  if (arg_edx == 0) {
    local_20 = *(short *)(thing + 0x52); /* thing->health */
    short_val = *(short *)(thing + 0x54);
  }
  else {
    local_18 = '\0';
    if (((&g_data_00188cdc)[val_2] != '\0') && (*(char *)(arg_edx + 0x1f) != '\t')) {
      local_18 = '\x01';
    }
    aiStack_54[1] = 0x6b975;
    local_20 = anger_fn_010c1a();
    aiStack_54[1] = 0x6b983;
    short_val = anger_fn_010c44();
  }
  if ((&g_data_00188cdc)[val_2] == '\0') {
    uval_2 = *(undefined2 *)(&g_data_00188caa + val_2);
  }
  else {
    aiStack_54[1] = 0x6b9a9;
    uval_2 = shot_update_creature_control_06d453();
  }
  if ((arg_bx == 6) && (local_48 != 0)) {
    uval = *(undefined2 *)(local_48 + 0x1b);
  }
  if (6 < arg_bx) {
    if (7 < arg_bx) {
      if (0xb < arg_bx) {
        if (arg_bx < 0xd) goto LAB_0006ba01;
        if (arg_bx == 0xd) {
          local_1c = 0;
          word_ptr = &stack0xffffffb4;
          while (int_ptr_2 = (int *)word_ptr, local_1c < 0x20) {
            int_ptr_2 = (int *)(word_ptr + -4);
            *(undefined4 *)(word_ptr + -4) = 0xffffffff;
            *(undefined4 *)(word_ptr + -8) = 0x6bcfb;
            local_14 = inits_fn_043ac3();
            if (local_14 == 0) break;
            *(undefined1 *)(local_14 + 0x16) = param_1;
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            *(ushort *)(local_14 + 0x52) =
                 (local_20 + (short)((ulonglong)g_action_random_seed % 100)) - 0x32U & 0x7ff;
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            *(ushort *)(local_14 + 0x54) =
                 short_val + -0x32 + (short)((ulonglong)g_action_random_seed % 100) & 0x7ff;
            *(undefined4 *)(word_ptr + -8) = 0x6bc9e;
            anger_fn_010d08();
            *(short *)(local_14 + 0x32) = *(short *)(local_14 + 0x32) + local_38;
            *(short *)(local_14 + 0x34) = *(short *)(local_14 + 0x34) + sStack_36;
            *(short *)(local_14 + 0x36) = *(short *)(local_14 + 0x36) + local_34;
            *(undefined2 *)(local_14 + 0x14) = uval_2;
            *(byte *)(local_14 + 1) = *(byte *)(local_14 + 1) | 4;
            *(undefined2 *)(local_14 + 0x5e) = uRam001891c9;
            local_1c = local_1c + 1;
            *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
            word_ptr = word_ptr + -4;
          }
          goto LAB_0006baa8;
        }
      }
      goto LAB_0006bd18;
    }
    if (local_48 == 0) {
LAB_0006bb7d:
      aiStack_54[1] = 4;
      int_ptr_4 = aiStack_54;
      aiStack_54[0] = 0x100;
      update_fn_0dd414();
    }
    else {
      aiStack_54[1] = 0x6bb76;
      val = get_2d_box_distance();
      if (0x300 < val) goto LAB_0006bb7d;
    }
    *(undefined4 *)((int)int_ptr_4 + -4) = 0xffffffff;
    *(undefined4 *)((int)int_ptr_4 + -8) = 0x6bbb7;
    local_14 = inits_fn_043ac3();
    int_ptr_2 = (int *)((int)int_ptr_4 + -4);
    if (local_14 != 0) {
      *(undefined4 *)((int)int_ptr_4 + -8) = 0x6bbd9;
      effect_roll_action_random_025504();
      *(undefined2 *)(local_14 + 0x5e) = *(undefined2 *)(&g_data_00188ca8 + val_2);
      *(undefined2 *)(local_14 + 0x14) = *(undefined2 *)(&g_data_00188caa + val_2);
      *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
      int_ptr_2 = (int *)((int)int_ptr_4 + -4);
    }
    goto LAB_0006baa8;
  }
  if (arg_bx != 4) {
LAB_0006bd18:
    aiStack_54[1] = 0xffffffff;
    aiStack_54[0] = 0x6bd32;
    local_14 = inits_fn_043ac3();
    int_ptr_2 = aiStack_54 + 1;
    if (local_14 != 0) {
      *(short *)(local_14 + 0x54) = short_val;
      *(short *)(local_14 + 0x52) = local_20;
      aiStack_54[0] = 0x6bd5d;
      anger_fn_010d08();
      *(short *)(local_14 + 0x32) = *(short *)(local_14 + 0x32) + local_38;
      *(short *)(local_14 + 0x34) = *(short *)(local_14 + 0x34) + sStack_36;
      *(short *)(local_14 + 0x36) = *(short *)(local_14 + 0x36) + local_34;
      *(undefined2 *)(local_14 + 0x14) = uval_2;
      *(byte *)(local_14 + 1) = *(byte *)(local_14 + 1) | 4;
      *(undefined2 *)(local_14 + 0x5e) = *(undefined2 *)(&g_data_00188ca8 + val_2);
      *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
      *(undefined2 *)(local_14 + 0x17) = uval;
      *(char *)(local_14 + 0x13) =
           (char)((ulonglong)
                  ((uint)(byte)(&g_bss_002e911a)[(uint)*(byte *)(local_44 + 0x1a) * 0xe6] *
                   (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(local_44 + 100)] + 0x23) * 0x23) /
                 100) + (&g_bss_002e911a)[(uint)*(byte *)(local_44 + 0x1a) * 0xe6];
      int_ptr_2 = aiStack_54 + 1;
    }
    goto LAB_0006baa8;
  }
LAB_0006ba01:
  if (local_48 == 0) {
LAB_0006ba1c:
    aiStack_54[1] = 0x14;
    int_ptr = aiStack_54;
    aiStack_54[0] = 0x100;
    update_fn_0dd414();
  }
  else {
    aiStack_54[1] = 0x6ba15;
    val = get_2d_box_distance();
    if (0x1400 < val) goto LAB_0006ba1c;
  }
  *(undefined4 *)((int)int_ptr + -4) = 0xffffffff;
  *(undefined4 *)((int)int_ptr + -8) = 0x6ba58;
  local_14 = inits_fn_043ac3();
  int_ptr_2 = (int *)((int)int_ptr + -4);
  if (local_14 != 0) {
    *(undefined4 *)((int)int_ptr + -8) = 0x6ba84;
    effect_roll_action_random_0250ef();
    *(undefined2 *)(local_14 + 0x5e) = *(undefined2 *)(&g_data_00188ca8 + val_2);
    *(undefined2 *)(local_14 + 0x14) = *(undefined2 *)(&g_data_00188caa + val_2);
    *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_44 + 0x1b);
    int_ptr_2 = (int *)((int)int_ptr + -4);
  }
LAB_0006baa8:
  if (local_14 != 0) {
    *(undefined1 *)(local_14 + 0x16) = param_1;
    int_ptr_3 = int_ptr_2;
    if (*(short *)(&g_data_00188caf + val_2) != 0) {
      int_ptr_2[0xffffffff] = 0x100;
      int_ptr_2[0xfffffffe] = 3;
      int_ptr_2[0xfffffffd] = 0;
      g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
      int_ptr_3 = int_ptr_2 + 0xfffffffc;
      int_ptr_2[0xfffffffc] = 3;
      g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
      int_ptr_2[0xfffffffb] = 0x6bb1c;
      sound_fn_06e538();
    }
    if (*(short *)(&g_data_00188cb2 + val_2) != 0) {
      *(undefined4 *)((int)int_ptr_3 + -4) = 0x100;
      *(uint *)((int)int_ptr_3 + -8) = (uint)*(ushort *)(&g_data_00188cb4 + val_2);
      *(undefined4 *)((int)int_ptr_3 + -0xc) = 0;
      *(undefined4 *)((int)int_ptr_3 + -0x10) = 3;
      *(undefined4 *)((int)int_ptr_3 + -0x14) = 0x6bb4a;
      sound_fn_06e538();
    }
    *(byte *)(local_14 + 0x25) = *(byte *)(local_14 + 0x25) & 0xef;
    *(byte *)(local_14 + 0x25) = *(byte *)(local_14 + 0x25) | local_18 << 4;
  }
  return;
}

/******************************************************************************
 * Function : setup_compute_creature_eye_offset (Original VA: 0x6bdda, Ghidra: FUN_0006bdda)
 * Prototype: undefined4 setup_compute_creature_eye_offset(void);
 * Address  : 0x6bdda (Size: 1105 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute first-person camera eye height offset for creature breed
 * Callers  : 1 -> move_shot_has_hit_thing_0b41d8
 * Callees  : 18 -> anger_fn_010c1a, anger_fn_010c44, anger_fn_010cf5, anger_fn_010d08, combobj_thing_this_check_017128, effect_allocate_light_effect_024998, gravyard_update_creature_control_039a74, group_update_creature_and_thing_039e90 ...
 ******************************************************************************/
undefined4 setup_compute_creature_eye_offset(void)

{
  undefined2 uval;
  int thing;
  undefined4 uval_2;
  int thing_ptr;
  int arg_edx;
  int val;
  short *val_2;
  byte flag;
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
  
  flag = 0;
  val_2 = &local_3c;
  local_1c = (int)*(char *)(thing + 0x20); /* thing->model */
  local_18 = &g_data_00188c94 + (uint)*(byte *)(thing + 0x1a) * 0x65;
  if (*(ushort *)(thing + 0x1d) == *(ushort *)(thing + 0x1b)) { /* thing->index_or_angle */
    local_20 = 0;
  }
  else {
    local_20 = (&g_thing_ptrs)[*(ushort *)(thing + 0x1d)];
  }
  if (*(char *)(arg_edx + 0x1f) == '\x01') {
    uStack_40 = 0x6be33;
    uval_2 = shot_update_creature_and_thing_06c444();
    return uval_2;
  }
  if (*(char *)(arg_edx + 0x1f) == '\x05') {
    if ((local_20 != 0) && (*(char *)(local_20 + 0x1f) == '\x05')) {
      uStack_40 = 0x6be68;
      shot_update_creature_control_06d7d5();
    }
    if (local_18[0x48] != '\0') {
      uStack_40 = 0x6be7c;
      uval_2 = setup_apply_possession_lens_and_eye();
      return uval_2;
    }
    if ((local_18[0x28] == '\0') && (-1 < *(short *)(arg_edx + 0x5e))) {
      if ((*(short *)(arg_edx + 100) == 0) ||
         (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xac) & 8) == 0 ||
          (local_18[0x29] != '\0')))) {
        if ((*(char *)(thing + 0x1a) == '\x0f') && (*(char *)(arg_edx + 0x1a) == '\a')) {
          uStack_40 = 0x6c001;
          thing_ptr = effect_allocate_light_effect_024998();
          if (thing_ptr != 0) {
            *(undefined1 *)(thing_ptr + 0x16) = 8;
          }
          *(undefined2 *)(thing + 0x5e) = 0xffff;
          return 1;
        }
        if (*(short *)(local_18 + 0x22) != 0) {
          uStack_40 = 0x6c033;
          sound_roll_unsynced_random_06edb9();
          uStack_40 = 0x100;
          uStack_44 = 2;
          uStack_48 = 0;
          val_2 = (short *)&uStack_4c;
          uStack_4c = 3;
          sound_fn_06e538();
        }
        if (*(short *)(thing + 0x14) != 0) {
          if ((local_18[0x27] != '\0') && (local_20 != 0)) {
            *(short *)(local_20 + 0x5e) =
                 *(short *)(local_20 + 0x5e) + (*(short *)(thing + 0x14) >> 1);
            thing_ptr = (int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(local_20 + 0x1a) * 0x73] *
                          (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(local_20 + 100)] + 0x23) *
                         0x23) / 100 +
                    (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(local_20 + 0x1a) * 0x73];
            if (thing_ptr < *(short *)(local_20 + 0x5e)) {
              *(short *)(local_20 + 0x5e) = (short)thing_ptr;
            }
          }
          *(undefined4 *)((int)val_2 + -4) = 0x6c0ec;
          creature_fn_081c10();
        }
        if ((local_18[0x24] != '\0') &&
           (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xb1) == '\0')) {
          *(undefined *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xb1) = local_18[0x24];
        }
        if (*(short *)(local_18 + 0x25) != 0) {
          *(undefined4 *)((int)val_2 + -4) = 0x6c14d;
          spell_update_creature_control_0717de();
        }
        if ((local_18[0x4b] != '\0') && (local_20 != 0)) {
          *(undefined4 *)((int)val_2 + -4) = 0x6c164;
          thing_ptr = group_update_creature_and_thing_039e90();
          if (thing_ptr < 8) {
            *(undefined4 *)((int)val_2 + -4) = 0x6c173;
            gravyard_update_creature_control_039a74();
          }
        }
        if (local_18[0x2a] != '\0') {
          thing_ptr = *(short *)(thing + 0x38) * local_1c;
          val = thing_ptr >> 0x1f;
          local_3c = (short)((int)((thing_ptr + val * -0x10) - (uint)(val << 3 < 0)) >> 4);
          thing_ptr = *(short *)(thing + 0x3a) * local_1c;
          val = thing_ptr >> 0x1f;
          local_38 = 0;
          sStack_3a = (short)((int)((thing_ptr + val * -0x10) - (uint)(val << 3 < 0)) >> 4);
          *(short *)(arg_edx + 0x32) = *(short *)(arg_edx + 0x32) + local_3c;
          *(short *)(arg_edx + 0x34) = *(short *)(arg_edx + 0x34) + sStack_3a;
          *(byte *)(arg_edx + 1) = *(byte *)(arg_edx + 1) | 4;
          *(undefined2 *)(arg_edx + 0x36) = *(undefined2 *)(arg_edx + 0x36);
        }
        *(undefined4 *)((int)val_2 + -4) = 0x6c1ce;
        shot_update_creature_control_06d223();
        if (*(short *)(local_18 + 0x45) != 0) {
          *(short *)(thing + 0x5e) =
               *(short *)(thing + 0x5e) -
               *(short *)(&g_bss_002e91f1 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6);
        }
        if (*(short *)(arg_edx + 0x5e) < 0) {
          *(undefined4 *)((int)val_2 + -4) = 0x6c1fe;
          shot_update_creature_control_06d0a8();
        }
        else if (*(char *)(arg_edx + 6) != *(char *)(thing + 6)) { /* thing->owner */
          *(undefined4 *)((int)val_2 + -4) = 0x6c20f;
          combobj_thing_this_check_017128();
        }
        if (local_18[0x18] != '\0') {
          *(undefined4 *)((int)val_2 + -4) = 0x6c221;
          structs_update_creature_control_072af4();
        }
      }
      else {
        if (*(ushort *)(thing + 0x1d) == *(ushort *)(thing + 0x1b)) { /* thing->index_or_angle */
          thing_ptr = 0;
        }
        else {
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing + 0x1d)];
        }
        local_24 = arg_edx;
        local_14 = thing;
        if (thing_ptr == 0) {
          uStack_40 = 0x6bee9;
          anger_fn_010cf5();
          thing_ptr = local_14;
          *(ushort *)(local_14 + 0x52) =
               CONCAT11((char)((ushort)*(undefined2 *)(local_14 + 0x52) >> 8) + '\x04',
                        (char)*(undefined2 *)(local_14 + 0x52)) & 0x7ff;
          *(ushort *)(local_14 + 0x54) =
               CONCAT11((char)((ushort)*(undefined2 *)(local_14 + 0x54) >> 8) + '\x04',
                        (char)*(undefined2 *)(local_14 + 0x54)) & 0x7ff;
          uStack_40 = 0x6bf28;
          anger_fn_010d08();
          *(undefined4 *)(thing_ptr + 0x2c) = local_2c;
          *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_28[(uint)flag * -4];
          if (*(char *)(local_24 + 0x1f) == '\x05') {
            *(undefined2 *)(local_14 + 0x1d) = *(undefined2 *)(local_24 + 0x1d);
          }
        }
        else {
          local_34 = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
          local_30[(uint)flag * -4] = *(short *)(thing_ptr + 0x11 + (uint)flag * -8);
          local_30[0] = local_30[0] +
                        *(short *)(&g_bss_002e9162 + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6);
          uStack_40 = 0x6bf80;
          anger_fn_010cf5();
          uStack_40 = 0x6bf87;
          uval = anger_fn_010c1a();
          *(undefined2 *)(local_14 + 0x52) = uval;
          uStack_40 = 0x6bf98;
          uval = anger_fn_010c44();
          thing_ptr = local_14;
          *(undefined2 *)(local_14 + 0x54) = uval;
          uStack_40 = 0x6bfbc;
          anger_fn_010d08();
          *(undefined4 *)(thing_ptr + 0x2c) = local_2c;
          *(undefined2 *)(thing_ptr + 0x30 + (uint)flag * -8) = auStack_28[(uint)flag * -4];
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
 * Function : setup_interpolate_creature_eye_bob (Original VA: 0x6c22b, Ghidra: FUN_0006c22b)
 * Prototype: int setup_interpolate_creature_eye_bob(void);
 * Address  : 0x6c22b (Size: 161 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Interpolate head-bob offset during creature possession movement
 * Callers  : 1 -> setup_apply_possession_lens_and_eye
 * Callees  : 0 -> 
 ******************************************************************************/
int setup_interpolate_creature_eye_bob(void)

{
  uint rand_seed;
  int arg_eax;
  int cctrl_ptr;
  int arg_edx;
  
  cctrl_ptr = (int)((uint)*(byte *)(arg_eax + 0x13) -
               (((uint)(byte)(&g_bss_002e911c)[(uint)*(byte *)(arg_edx + 0x1a) * 0xe6] *
                 (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x23) * 0x23) / 100 +
               (uint)(byte)(&g_bss_002e911c)[(uint)*(byte *)(arg_edx + 0x1a) * 0xe6])) / 2;
  if (cctrl_ptr < -0x60) {
    cctrl_ptr = -0x60;
  }
  else if (0x60 < cctrl_ptr) {
    cctrl_ptr = 0x60;
  }
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = g_action_random_seed >> 0xd;
  g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
  if ((rand_seed & 0xff) < cctrl_ptr + 0x80U) {
    return (int)*(short *)(arg_eax + 0x14);
  }
  return 0;
}

/******************************************************************************
 * Function : setup_apply_possession_lens_and_eye (Original VA: 0x6c2cc, Ghidra: FUN_0006c2cc)
 * Prototype: undefined4 setup_apply_possession_lens_and_eye(void);
 * Address  : 0x6c2cc (Size: 376 bytes)
 * Module   : setup.cpp [address_order_boundary_interpolation]
 * Purpose  : Configure eye lens effect and camera height when entering possession
 * Callers  : 1 -> setup_compute_creature_eye_offset
 * Callees  : 8 -> combobj_thing_this_check_017128, setup_interpolate_creature_eye_bob, shot_update_creature_control_06d0a8, shot_update_creature_control_06d223, sound_fn_06e538, sound_roll_unsynced_random_06edb9, structs_update_creature_control_072af4, creature_fn_081c10
 ******************************************************************************/
undefined4 setup_apply_possession_lens_and_eye(void)

{
  int thing;
  int val;
  int arg_edx;
  int val_2;
  short *val_3;
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
  
  val_3 = &local_24;
  local_18 = (int)*(char *)(thing + 0x20); /* thing->model */
  local_14 = &g_data_00188c94 + (uint)*(byte *)(thing + 0x1a) * 0x65;
  if (*(short *)(arg_edx + 0x5e) < 0) {
    return 0;
  }
  if (*(ushort *)(thing + 0x1d) == *(ushort *)(thing + 0x1b)) { /* thing->index_or_angle */
    local_1c = 0;
  }
  else {
    local_1c = (&g_thing_ptrs)[*(ushort *)(thing + 0x1d)];
  }
  uStack_28 = 0x6c327;
  val = setup_interpolate_creature_eye_bob();
  if (val != 0) {
    val_3 = &local_24;
    if (*(short *)(local_14 + 0x22) != 0) {
      uStack_28 = 0x100;
      uStack_2c = 2;
      uStack_30 = 0;
      val_3 = (short *)&uStack_34;
      uStack_34 = 3;
      sound_fn_06e538();
      sound_roll_unsynced_random_06edb9();
    }
    *(undefined4 *)((int)val_3 + -4) = 0x6c38b;
    creature_fn_081c10();
    if (local_14[0x24] != '\0') {
      *(undefined *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xb1) = local_14[0x24];
    }
    if (local_14[0x2a] != '\0') {
      val = *(short *)(thing + 0x38) * local_18;
      val_2 = val >> 0x1f;
      local_24 = (short)((int)((val + val_2 * -0x10) - (uint)(val_2 << 3 < 0)) >> 4);
      val = *(short *)(thing + 0x3a) * local_18;
      val_2 = val >> 0x1f;
      local_20 = 0;
      sStack_22 = (short)((int)((val + val_2 * -0x10) - (uint)(val_2 << 3 < 0)) >> 4);
      *(short *)(arg_edx + 0x32) = *(short *)(arg_edx + 0x32) + local_24;
      *(short *)(arg_edx + 0x34) = *(short *)(arg_edx + 0x34) + sStack_22;
      *(byte *)(arg_edx + 1) = *(byte *)(arg_edx + 1) | 4;
      *(undefined2 *)(arg_edx + 0x36) = *(undefined2 *)(arg_edx + 0x36);
    }
    *(undefined4 *)((int)val_3 + -4) = 0x6c406;
    shot_update_creature_control_06d223();
    if (*(short *)(arg_edx + 0x5e) < 0) {
      *(undefined4 *)((int)val_3 + -4) = 0x6c417;
      shot_update_creature_control_06d0a8();
    }
    else if (*(char *)(arg_edx + 6) != *(char *)(thing + 6)) { /* thing->owner */
      *(undefined4 *)((int)val_3 + -4) = 0x6c428;
      combobj_thing_this_check_017128();
    }
  }
  if (local_14[0x18] != '\0') {
    *(undefined4 *)((int)val_3 + -4) = 0x6c43a;
    structs_update_creature_control_072af4();
  }
  return 1;
}

