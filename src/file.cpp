/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: file.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 50
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : file_process_map_subtile_029979 (Original VA: 0x29979, Ghidra: FUN_00029979)
 * Prototype: longlong file_process_map_subtile_029979(void);
 * Address  : 0x29979 (Size: 127 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
longlong file_process_map_subtile_029979(void)

{
  undefined1 uval;
  char ch;
  undefined4 uval_2;
  undefined4 *word_ptr;
  uint arg_edx;
  undefined2 *word_ptr_2;
  int val;
  
  prepare_file_path();
  uval_2 = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_MAP_05d_flg_00162a46,uval_2);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    bflib_system_io_fn_0e984c();
    val = 0;
    word_ptr_2 = &g_map_subtiles;
    word_ptr = &g_render_poly_buf_start;
    do {
      val = val + 1;
      uval = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + 2);
      *(undefined1 *)word_ptr_2 = uval;
      word_ptr_2 = (undefined2 *)((int)word_ptr_2 + 5);
    } while (val < 0x10000);
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : file_process_slabmap_tile_0299f8 (Original VA: 0x299f8, Ghidra: FUN_000299f8)
 * Prototype: undefined8 file_process_slabmap_tile_0299f8(void);
 * Address  : 0x299f8 (Size: 202 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
undefined8 file_process_slabmap_tile_0299f8(void)

{
  byte flag;
  char ch;
  undefined4 uval;
  int slab_coord;
  byte *extraout_ECX;
  byte *byte_ptr;
  undefined4 arg_edx;
  int val;
  undefined1 local_ac [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ac,s__s_MAP_05d_own_00162a5e,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    uval = 0;
  }
  else {
    bflib_system_io_fn_0e984c();
    val = 0;
    byte_ptr = extraout_ECX;
    do {
      if ((val % 0x100 < 0xff) &&
         (slab_coord = (int)((val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0)) >> 8,
         slab_coord < 0xff)) {
        slab_coord = ((&g_subtile_to_slab_lut)[slab_coord] * 0x55 + (&g_subtile_to_slab_lut)[val % 0x100]) * 6;
        flag = *byte_ptr;
        (&g_slabmap)[slab_coord] = (&g_slabmap)[slab_coord] & 0xf8;
        (&g_slabmap)[slab_coord] = (&g_slabmap)[slab_coord] | flag & 7;
      }
      val = val + 1;
      byte_ptr = byte_ptr + 1;
    } while (val < 0x10000);
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : file_process_map_subtile_029ac2 (Original VA: 0x29ac2, Ghidra: FUN_00029ac2)
 * Prototype: longlong file_process_map_subtile_029ac2(void);
 * Address  : 0x29ac2 (Size: 146 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
longlong file_process_map_subtile_029ac2(void)

{
  byte *byte_ptr;
  uint *word_ptr;
  byte flag;
  char ch;
  undefined4 uval;
  int val;
  int val_2;
  uint arg_edx;
  byte *byte_ptr_2;
  undefined1 local_a4 [152];
  
  byte_ptr_2 = g_scratch_work_buf;
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a4,s__s_MAP_05d_wib_00162a76,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    bflib_system_io_fn_0e984c();
    val = 0;
    do {
      flag = *byte_ptr_2;
      val_2 = val + 5;
      byte_ptr = (byte *)((int)&g_bss_00279205 + val + 1);
      *byte_ptr = *byte_ptr & 0x3f;
      byte_ptr_2 = byte_ptr_2 + 1;
      word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
      *word_ptr = *word_ptr | (flag & 3) << 0x16;
      val = val_2;
    } while (val_2 != 0x50000);
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : file_fn_029b54 (Original VA: 0x29b54, Ghidra: FUN_00029b54)
 * Prototype: longlong file_fn_029b54(void);
 * Address  : 0x29b54 (Size: 170 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x029b54
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 7 -> cdtest_ldata_dkwind00_dat_0150f0, light_fn_0ac630, light_already_list_0acaf8, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
longlong file_fn_029b54(void)

{
  char ch;
  undefined4 uval;
  int val;
  int extraout_ECX;
  uint arg_edx;
  int val_2;
  int extraout_EDX;
  undefined1 local_a8 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a8,s__s_MAP_05d_lgt_00162a8e,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    light_fn_0ac630();
    bflib_system_io_fn_0e984c();
    val_2 = *g_scratch_work_buf;
    if (val_2 < 0) {
      val_2 = 0;
    }
    else if (399 < val_2) {
      val_2 = 399;
    }
    val = 0;
    while (val < val_2) {
      light_already_list_0acaf8();
      val_2 = extraout_EDX;
      val = extraout_ECX + 1;
    }
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : file_fn_029bfe (Original VA: 0x29bfe, Ghidra: FUN_00029bfe)
 * Prototype: undefined8 file_fn_029bfe(void);
 * Address  : 0x29bfe (Size: 308 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x029bfe
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 8 -> cdtest_ldata_dkwind00_dat_0150f0, column_fn_0157ac, file_process_map_subtile_02cb2b, light_fn_0b21f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00029cad) */

undefined8 file_fn_029bfe(void)

{
  byte *byte_ptr;
  char ch;
  undefined4 uval;
  int extraout_ECX;
  int *int_ptr;
  undefined4 arg_edx;
  int val;
  int val_2;
  int *int_ptr_2;
  int *int_ptr_3;
  int *int_ptr_4;
  byte flag;
  undefined8 uval_2;
  undefined1 local_bc [152];
  int local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  
  flag = 0;
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_bc,s__s_MAP_05d_clm_00162aa6,uval);
  if ((g_game_operation_flags & 8) != 0) {
    file_process_map_subtile_02cb2b();
    g_game_operation_flags = g_game_operation_flags & 0xf7;
  }
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    uval = 0;
  }
  else {
    light_fn_0b21f0();
    bflib_system_io_fn_0e984c();
    val_2 = *g_scratch_work_buf;
    if (val_2 < 0) {
      val_2 = 0;
    }
    else if (0x7ff < val_2) {
      val_2 = 0x7ff;
    }
    g_bss_002e7beb = *(ushort *)(g_scratch_work_buf + 4);
    if (0x7ff < g_bss_002e7beb) {
      g_bss_002e7beb = 0x7ff;
    }
    local_24 = 0;
    local_1c = &g_bss_0019e973;
    int_ptr = g_scratch_work_buf + 2;
    while (local_24 <= val_2) {
      int_ptr_3 = &g_bss_0019e977 + local_24 * 6 + (uint)flag * -2;
      int_ptr_2 = int_ptr + (uint)flag * -2 + 1;
      (&g_bss_0019e973)[local_24 * 6] = *int_ptr;
      int_ptr_4 = int_ptr_3 + (uint)flag * -2 + 1;
      int_ptr = int_ptr_2 + (uint)flag * -2 + 1;
      *int_ptr_3 = *int_ptr_2;
      int_ptr_3 = int_ptr_4 + (uint)flag * -2 + 1;
      int_ptr_2 = int_ptr + (uint)flag * -2 + 1;
      *int_ptr_4 = *int_ptr;
      *int_ptr_3 = *int_ptr_2;
      int_ptr_3[(uint)flag * -2 + 1] = int_ptr_2[(uint)flag * -2 + 1];
      (int_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (int_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      uval_2 = column_fn_0157ac();
      val = (int)((ulonglong)uval_2 >> 0x20);
      local_1c = local_1c + 6;
      local_20._0_1_ = (char)uval_2;
      int_ptr = (int *)(extraout_ECX + 0x18);
      byte_ptr = (byte *)((int)&g_bss_0019e973 + val + 2);
      *byte_ptr = *byte_ptr & 0xf;
      local_24 = local_24 + 1;
      byte_ptr = (byte *)((int)&g_bss_0019e973 + val + 2);
      *byte_ptr = *byte_ptr | (char)local_20 << 4;
      local_20 = (int)uval_2;
    }
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : file_fn_029d32 (Original VA: 0x29d32, Ghidra: FUN_00029d32)
 * Prototype: longlong file_fn_029d32(void);
 * Address  : 0x29d32 (Size: 100 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x029d32
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
longlong file_fn_029d32(void)

{
  char ch;
  undefined4 uval;
  uint arg_edx;
  undefined1 local_a0 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a0,s__s_tmapanim_dat_00162abc,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    bflib_system_io_fn_0e984c();
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : file_fn_029d96 (Original VA: 0x29d96, Ghidra: FUN_00029d96)
 * Prototype: undefined4 file_fn_029d96(void);
 * Address  : 0x29d96 (Size: 99 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x029d96
 * Callers  : 2 -> file_fn_02a25c, file_update_player_dungeon_02ca74
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
undefined4 file_fn_029d96(void)

{
  char ch;
  undefined4 uval;
  undefined1 local_9c [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_9c,s__s_TMAPA_03d_dat_00162ad3,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    bflib_system_io_fn_0e984c();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : file_allocate_action_point_during_029df9 (Original VA: 0x29df9, Ghidra: FUN_00029df9)
 * Prototype: undefined8 file_allocate_action_point_during_029df9(void);
 * Address  : 0x29df9 (Size: 214 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp lines 457
 * Purpose  : String 'Cannot allocate action point during load'
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 7 -> cdtest_ldata_dkwind00_dat_0150f0, structs_attempt_allocate_action_point_072a7a, prepare_file_path, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
undefined8 file_allocate_action_point_during_029df9(void)

{
  char ch;
  undefined4 uval;
  undefined *word_ptr;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  undefined2 *word_ptr_2;
  int val_2;
  undefined8 uval_2;
  undefined1 local_ac [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ac,s__s_MAP_05d_apt_00162aed,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
LAB_00029ec7:
    uval = 0;
  }
  else {
    bflib_system_io_fn_0e984c();
    val_2 = *g_scratch_work_buf;
    if (val_2 < 0) {
      val_2 = 0;
    }
    else if (0x1f < val_2) {
      val_2 = 0x1f;
    }
    val = 0;
    while (val < val_2) {
      uval_2 = structs_attempt_allocate_action_point_072a7a();
      word_ptr_2 = (undefined2 *)((ulonglong)uval_2 >> 0x20);
      word_ptr = (undefined *)uval_2;
      if (word_ptr < &g_bss_002eb402) {
        LbErrorLog(); /* LbErrorLog("file.cpp", line 457, "Cannot allocate action point during load") */
        goto LAB_00029ec7;
      }
      *(undefined2 *)(word_ptr + 1) = *word_ptr_2;
      *(undefined2 *)(word_ptr + 3) = word_ptr_2[1];
      *(undefined2 *)(word_ptr + 5) = word_ptr_2[2];
      val = extraout_ECX + 1;
    }
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : file_install_path_029eef (Original VA: 0x29eef, Ghidra: FUN_00029eef)
 * Prototype: undefined8 file_install_path_029eef(void);
 * Address  : 0x29eef (Size: 439 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : String 'INSTALL_PATH='
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 5 -> dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c, bflib_system_io_fn_0e9d7a, bflib_system_io_fn_0e9dd0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 file_install_path_029eef(void)

{
  char ch;
  int val;
  int loop_i;
  int val_2;
  undefined4 uval;
  char *loop_i_2;
  int extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  undefined4 arg_edx;
  undefined1 local_a8 [144];
  
  dk_sprintf(local_a8,s__s_keeper_cfg_00162b4e,&g_bss_00333f77);
  g_bss_002ee923 = '\0';
  g_bss_002ee9bd = 0;
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    uval = 0;
    goto LAB_0002a4dc;
  }
  val = bflib_system_io_fn_0e984c();
  if (val != -1) {
    for (loop_i_2 = &g_log_sprintf_buf; loop_i_2 < &g_log_sprintf_buf + val; loop_i_2 = loop_i_2 + 1) {
      loop_i = bflib_system_io_fn_0e9d7a();
      loop_i_2 = (char *)(extraout_ECX + 0xd);
      if (loop_i == 0) {
        loop_i = 0;
        for (; (*loop_i_2 != '\r' && (*loop_i_2 != '\0')); loop_i_2 = loop_i_2 + 1) {
          (&g_bss_002ee923)[loop_i] = *loop_i_2;
          loop_i = loop_i + 1;
        }
        if (((1 < loop_i) && ((&g_bss_002ee922)[loop_i] == '\\')) && ((&g_bss_002ee921)[loop_i] == '\\')) {
          (&g_bss_002ee922)[loop_i] = 0;
        }
      }
      else {
        loop_i = bflib_system_io_fn_0e9d7a();
        if ((loop_i != 0) && (loop_i = bflib_system_io_fn_0e9d7a(), loop_i_2 = extraout_ECX_00, loop_i == 0)) {
          loop_i_2 = extraout_ECX_00 + 9;
          for (loop_i = 0; *(int *)((int)&PTR_DAT_00179c78 + loop_i) != 0; loop_i = loop_i + 8) {
            val_2 = bflib_system_io_fn_0e9d7a();
            loop_i_2 = extraout_ECX_01;
            if (val_2 == 0) {
              g_bss_002ee9b9 = *(int *)((int)&g_data_00179c7c + loop_i);
              break;
            }
          }
        }
      }
      for (; (*loop_i_2 != '\n' && (loop_i_2 < &g_log_sprintf_buf + val)); loop_i_2 = loop_i_2 + 1) {
      }
    }
  }
  switch(g_bss_002ee9b9) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  default:
    goto switchD_0002a097_default;
  }
  bflib_system_io_fn_0e9dd0();
switchD_0002a097_default:
  if ((g_bss_002ee9b9 == 0) || (g_bss_002ee923 == '\0')) {
    uval = 0;
  }
  else {
    uval = 1;
  }
LAB_0002a4dc:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : file_keeper_cfg_02a0be (Original VA: 0x2a0be, Ghidra: FUN_0002a0be)
 * Prototype: bool file_keeper_cfg_02a0be(void);
 * Address  : 0x2a0be (Size: 242 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : String 'KEEPER.CFG'
 * Callers  : 0 -> 
 * Callees  : 5 -> LbMemoryCopy, bflib_system_io_fn_0e9dd6, bflib_system_io_fn_0e9fd7, bflib_system_io_fn_0ea08b, bflib_system_io_fn_0ea0ac
 ******************************************************************************/
bool file_keeper_cfg_02a0be(void)

{
  undefined4 arg_eax;
  int val;
  undefined4 extraout_ECX;
  uint arg_edx;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined *unaff_ESI;
  undefined *local_10;
  
  LbMemoryCopy();
  bflib_system_io_fn_0e9dd6();
  bflib_system_io_fn_0e9dd6();
  switch(arg_eax) {
  case 1:
    unaff_ESI = &g_data_00162b93; /* 0x162b93="ENG" */
    break;
  case 2:
    unaff_ESI = &g_data_00162b8f; /* 0x162b8f="FRA" */
    break;
  case 3:
    unaff_ESI = &g_data_00162b97; /* 0x162b97="GER" */
    break;
  case 4:
    unaff_ESI = &g_data_00162ba3; /* 0x162ba3="ITA" */
    break;
  case 5:
    unaff_ESI = &g_data_00162b9b; /* 0x162b9b="SPA" */
    break;
  case 6:
    unaff_ESI = &g_data_00162b9f; /* 0x162b9f="SWE" */
  }
  if (arg_edx < 2) {
    if (arg_edx == 1) {
      local_10 = &g_data_00162ba7; /* 0x162ba7="MAX" */
    }
  }
  else if (arg_edx < 3) {
    local_10 = &g_data_00162bab; /* 0x162bab="MED" */
  }
  else if (arg_edx == 3) {
    local_10 = &g_data_00162baf; /* 0x162baf="MIN" */
  }
  val = bflib_system_io_fn_0e9fd7();
  if (val != 0) {
    bflib_system_io_fn_0ea08b(val,s_INSTALL_PATH__s_00162bb6,extraout_ECX);
    bflib_system_io_fn_0ea08b(extraout_EDX,s_INSTALL_TYPE__s_00162bc7,local_10);
    bflib_system_io_fn_0ea08b(extraout_EDX_00,s_LANGUAGE__s_00162bd8,unaff_ESI);
    bflib_system_io_fn_0ea0ac();
  }
  return val != 0;
}

/******************************************************************************
 * Function : file_fn_02a1b0 (Original VA: 0x2a1b0, Ghidra: FUN_0002a1b0)
 * Prototype: undefined8 file_fn_02a1b0(void);
 * Address  : 0x2a1b0 (Size: 105 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02a1b0
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
undefined8 file_fn_02a1b0(void)

{
  char ch;
  undefined1 uval;
  undefined4 uval_2;
  undefined4 arg_edx;
  undefined1 local_a4 [152];
  undefined1 local_c;
  
  prepare_file_path();
  uval_2 = prepare_file_path();
  dk_sprintf(local_a4,s__s_MAP_05d_inf_00162bee,uval_2);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  uval = 0;
  if (ch != '\0') {
    bflib_system_io_fn_0e984c();
    uval = local_c;
  }
  g_bss_002e7bed = uval;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_process_dungeon_room_02a219 (Original VA: 0x2a219, Ghidra: FUN_0002a219)
 * Prototype: void file_process_dungeon_room_02a219(void);
 * Address  : 0x2a219 (Size: 67 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 1 -> room_process_dungeon_room_0cb144
 ******************************************************************************/
void file_process_dungeon_room_02a219(void)

{
  ushort loop_i;
  int val;
  int extraout_ECX;
  
  val = 0;
  do {
    for (loop_i = *(ushort *)((int)&g_bss_002e0598 + val);
        &g_rooms < &g_rooms + (uint)loop_i * 0x45;
        loop_i = *(ushort *)(&g_bss_002ddd21 + (uint)loop_i * 0x45)) {
      room_process_dungeon_room_0cb144();
      val = extraout_ECX;
    }
    val = val + 0x1508;
  } while (val != 0x6928);
  return;
}

/******************************************************************************
 * Function : file_fn_02a25c (Original VA: 0x2a25c, Ghidra: FUN_0002a25c)
 * Prototype: ulonglong file_fn_02a25c(void);
 * Address  : 0x2a25c (Size: 249 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02a25c
 * Callers  : 1 -> inits_could_create_ambient_sound_0404f7
 * Callees  : 21 -> cdtest_ldata_dkwind00_dat_0150f0, combat_fn_0158a6, evil_process_map_subtile_0298b5, file_process_map_subtile_029979, file_process_slabmap_tile_0299f8, file_process_map_subtile_029ac2, file_fn_029b54, file_fn_029bfe ...
 ******************************************************************************/
ulonglong file_fn_02a25c(void)

{
  char ch;
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 local_a4 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a4,s__s_MAP_05d_dat_00162c06,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    evil_process_map_subtile_0298b5();
    file_process_map_subtile_029979();
    file_fn_029bfe();
    inits_fn_040f98();
    file_e14r432q_system_should_able_02cdc8();
    combat_fn_0158a6();
    file_fn_029b54();
    file_process_slabmap_tile_0299f8();
    file_process_map_subtile_029ac2();
    file_fn_02a1b0();
    file_fn_029d96();
    file_allocate_action_point_during_029df9();
    file_slab_type_increase_size_02d168();
    file_buff_struct_num_02ab14();
    file_process_dungeon_room_02a219();
    uval = ceiling_process_map_subtile_07c3c8();
    return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval >> 8),1));
  }
  inits_fn_040f98();
  file_e14r432q_system_should_able_02cdc8();
  combat_fn_0158a6();
  g_bss_002e7bed = 0;
  file_fn_029d96();
  uval = light_fn_0b2280();
  return CONCAT44(arg_edx,uval) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : file_settings_dat_02a355 (Original VA: 0x2a355, Ghidra: FUN_0002a355)
 * Prototype: undefined8 file_settings_dat_02a355(void);
 * Address  : 0x2a355 (Size: 87 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : String 'SETTINGS.DAT'
 * Callers  : 10 -> evil_settings_dat_029738, frontend_load_frontend_palette_02e8a7, frontend_fn_02f755, frontend_fn_02f7e0, frontend_fn_030e88, newgui_fn_05a2c7, newgui_fn_05a3ce, newgui_fn_05a417 ...
 * Callees  : 3 -> prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
undefined8 file_settings_dat_02a355(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 local_a4 [152];
  
  prepare_file_path(s_SETTINGS_DAT_00162c15); /* 0x162c15="SETTINGS.DAT" */
  uval = prepare_file_path();
  dk_sprintf(local_a4,s__s__s_00162c29,uval);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_process_map_subtile_02a3ac (Original VA: 0x2a3ac, Ghidra: FUN_0002a3ac)
 * Prototype: undefined8 file_process_map_subtile_02a3ac(void);
 * Address  : 0x2a3ac (Size: 123 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
undefined8 file_process_map_subtile_02a3ac(void)

{
  int val;
  int val_2;
  undefined4 uval;
  undefined4 arg_edx;
  short *val_3;
  undefined1 local_a8 [152];
  
  val_3 = &g_map_subtiles;
  val_2 = 0;
  do {
    val = val_2 + 1;
    val_2 = val_2 + 5;
    *val_3 = -((ushort)*(undefined4 *)((int)&g_map_subtiles + val) & 0x7ff);
    val_3 = val_3 + 1;
  } while (val_2 != 0x50000);
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a8,s__s_MAP_05d_dat_00162c38,uval);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_process_slabmap_tile_02a427 (Original VA: 0x2a427, Ghidra: FUN_0002a427)
 * Prototype: undefined8 file_process_slabmap_tile_02a427(void);
 * Address  : 0x2a427 (Size: 188 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
undefined8 file_process_slabmap_tile_02a427(void)

{
  int slab_coord;
  undefined4 uval;
  byte *byte_ptr;
  undefined4 arg_edx;
  int val;
  undefined1 local_b4 [152];
  int local_1c;
  
  val = 0;
  byte_ptr = g_scratch_work_buf;
  do {
    if ((val % 0x100 < 0xff) &&
       (slab_coord = (int)((val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0)) >> 8,
       slab_coord < 0xff)) {
      local_1c = (&g_subtile_to_slab_lut)[slab_coord] * 0x55;
      *byte_ptr = (&g_slabmap)[((&g_subtile_to_slab_lut)[val % 0x100] + local_1c) * 6] & 7;
    }
    val = val + 1;
    byte_ptr = byte_ptr + 1;
  } while (val < 0x10000);
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_b4,s__s_MAP_05d_own_00162c50,uval);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_process_map_subtile_02a4e3 (Original VA: 0x2a4e3, Ghidra: FUN_0002a4e3)
 * Prototype: undefined8 file_process_map_subtile_02a4e3(void);
 * Address  : 0x2a4e3 (Size: 117 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 2 -> prepare_file_path, dk_sprintf
 ******************************************************************************/
undefined8 file_process_map_subtile_02a4e3(void)

{
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 *word_ptr;
  undefined1 local_ac [152];
  uint local_14;
  
  val = 0;
  word_ptr = g_scratch_work_buf;
  do {
    local_14 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xffffff) >> 0x16;
    val = val + 5;
    *word_ptr = (undefined1)local_14;
    word_ptr = word_ptr + 1;
  } while (val != 0x50000);
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ac,s__s_MAP_05d_wib_00162c68,uval);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02a558 (Original VA: 0x2a558, Ghidra: FUN_0002a558)
 * Prototype: undefined8 file_fn_02a558(void);
 * Address  : 0x2a558 (Size: 131 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02a558
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
undefined8 file_fn_02a558(void)

{
  int val;
  int val_2;
  undefined4 uval;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined1 local_ac [152];
  
  word_ptr = g_scratch_work_buf;
  *g_scratch_work_buf = 0x200;
  val = 0;
  word_ptr = word_ptr + 1;
  do {
    val_2 = val + 0x12;
    *word_ptr = *(undefined4 *)((int)&g_bss_001aa973 + val);
    word_ptr[1] = *(undefined4 *)((int)&g_bss_001aa977 + val);
    word_ptr[2] = *(undefined4 *)((int)&g_bss_001aa97b + val);
    word_ptr[3] = *(undefined4 *)((int)&g_bss_001aa97f + val);
    *(undefined2 *)(word_ptr + 4) = *(undefined2 *)((int)&g_bss_001aa983 + val);
    val = val_2;
    word_ptr = (undefined4 *)((int)word_ptr + 0x12);
  } while (val_2 != 0x2400);
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ac,s__s_Cube_dat_00162c7e,uval);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02a5db (Original VA: 0x2a5db, Ghidra: FUN_0002a5db)
 * Prototype: undefined8 file_fn_02a5db(void);
 * Address  : 0x2a5db (Size: 120 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02a5db
 * Callers  : 1 -> file_process_map_subtile_02cb2b
 * Callees  : 2 -> prepare_file_path, dk_sprintf
 ******************************************************************************/
undefined8 file_fn_02a5db(void)

{
  int val;
  int val_2;
  undefined4 uval;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined1 local_ac [152];
  
  word_ptr = g_scratch_work_buf;
  *g_scratch_work_buf = 0x800;
  word_ptr[1] = (uint)g_bss_002e7beb;
  val = 0;
  word_ptr = word_ptr + 2;
  do {
    val_2 = val + 0x18;
    *word_ptr = *(undefined4 *)((int)&g_bss_0019e973 + val);
    word_ptr[1] = *(undefined4 *)((int)&g_bss_0019e977 + val);
    word_ptr[2] = *(undefined4 *)((int)&g_bss_0019e97b + val);
    word_ptr[3] = *(undefined4 *)((int)&g_bss_0019e97f + val);
    word_ptr[4] = *(undefined4 *)((int)&g_bss_0019e983 + val);
    word_ptr[5] = *(undefined4 *)((int)&g_bss_0019e987 + val);
    val = val_2;
    word_ptr = word_ptr + 6;
  } while (val_2 != 0xc000);
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ac,s__s_MAP_05d_clm_00162c93,uval);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02a653 (Original VA: 0x2a653, Ghidra: FUN_0002a653)
 * Prototype: undefined8 file_fn_02a653(void);
 * Address  : 0x2a653 (Size: 114 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02a653
 * Callers  : 0 -> 
 * Callees  : 4 -> prepare_file_path, LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
undefined8 file_fn_02a653(void)

{
  undefined4 uval;
  undefined4 extraout_ECX;
  undefined4 arg_edx;
  undefined1 local_ac [152];
  undefined1 local_14;
  
  LbScreenWaitVbi();
  prepare_file_path(extraout_ECX);
  uval = prepare_file_path();
  dk_sprintf(local_ac,s__s_MAP_05d_inf_00162cab,uval);
  local_14 = g_bss_002e7bed;
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_process_thing_entity_02a6c5 (Original VA: 0x2a6c5, Ghidra: FUN_0002a6c5)
 * Prototype: undefined8 file_process_thing_entity_02a6c5(void);
 * Address  : 0x2a6c5 (Size: 468 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 10 -> light_fn_0acef0, light_attempt_get_anglexy_unallocated_0acf7c, light_attempt_get_width_unallocated_0ad0f4, light_attempt_get_intensity_unallocated_0ad23c, light_attempt_get_size_unallocated_0ad37c, slab_fn_0d9640, prepare_file_path, LbScreenWaitVbi ...
 ******************************************************************************/
undefined8 file_process_thing_entity_02a6c5(void)

{
  undefined1 uval;
  undefined2 uval_2;
  undefined4 arg_eax;
  undefined4 *word_ptr;
  int val;
  undefined4 uval_3;
  undefined2 *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined2 *extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  undefined4 arg_edx;
  byte flag;
  undefined1 local_c0 [152];
  int local_28;
  int local_24;
  byte *local_20;
  byte *local_1c;
  
  flag = 0;
  local_24 = 0;
  local_28 = 0;
  do {
    local_20 = *(byte **)((int)&g_thing_ptrs + local_28);
    if (((*local_20 & 1) != 0) && (local_20[0x1f] == 0xe)) {
      LbScreenWaitVbi();
      uval_2 = light_attempt_get_size_unallocated_0ad37c();
      *extraout_ECX = uval_2;
      uval = light_attempt_get_intensity_unallocated_0ad23c();
      *(undefined1 *)(extraout_ECX_00 + 2) = uval;
      word_ptr = (undefined4 *)light_fn_0acef0();
      *(undefined4 *)(extraout_ECX_01 + 10) = *word_ptr;
      *(undefined2 *)(extraout_ECX_01 + 0xe + (uint)flag * -8) =
           *(undefined2 *)(word_ptr + (uint)flag * -2 + 1);
      uval_2 = light_attempt_get_anglexy_unallocated_0acf7c();
      *(undefined2 *)(extraout_ECX_02 + 4) = uval_2;
      uval_2 = light_attempt_get_width_unallocated_0ad0f4();
      *(undefined2 *)(extraout_ECX_03 + 8) = uval_2;
      *(undefined1 *)(extraout_ECX_03 + 0x11) = 0;
      local_24 = local_24 + 1;
      *(undefined2 *)(extraout_ECX_03 + 0x12) =
           *(undefined2 *)(&g_bss_001bd5ff + (uint)*(ushort *)(local_20 + 0x62) * 0x2e);
    }
    local_28 = local_28 + 4;
  } while (local_28 != 0x2000);
  local_28 = 0x2000;
  for (local_1c = &g_bss_001bd61b; local_1c < &g_bss_001c1dcd; local_1c = local_1c + 0x2e) {
    if ((*local_1c & 1) != 0) {
      val = slab_fn_0d9640();
      if (val == 0) {
        LbScreenWaitVbi();
        uval_2 = light_attempt_get_size_unallocated_0ad37c();
        *extraout_ECX_04 = uval_2;
        uval = light_attempt_get_intensity_unallocated_0ad23c();
        *(undefined1 *)(extraout_ECX_05 + 2) = uval;
        word_ptr = (undefined4 *)light_fn_0acef0();
        *(undefined4 *)(extraout_ECX_06 + 10) = *word_ptr;
        *(undefined2 *)(extraout_ECX_06 + 0xe + (uint)flag * -8) =
             *(undefined2 *)(word_ptr + (uint)flag * -2 + 1);
        uval_2 = light_attempt_get_anglexy_unallocated_0acf7c();
        *(undefined2 *)(extraout_ECX_07 + 4) = uval_2;
        uval_2 = light_attempt_get_width_unallocated_0ad0f4();
        *(undefined2 *)(extraout_ECX_08 + 8) = uval_2;
        *(undefined1 *)(extraout_ECX_08 + 0x11) = 0;
        local_24 = local_24 + 1;
        *(undefined2 *)(extraout_ECX_08 + 0x12) = *(undefined2 *)(local_1c + 0x12);
      }
    }
  }
  *g_scratch_work_buf = local_24;
  prepare_file_path(arg_eax);
  uval_3 = prepare_file_path();
  dk_sprintf(local_c0,s__s_MAP_05d_lgt_00162cc3,uval_3);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02a899 (Original VA: 0x2a899, Ghidra: FUN_0002a899)
 * Prototype: undefined8 file_fn_02a899(void);
 * Address  : 0x2a899 (Size: 189 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02a899
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, LbScreenWaitVbi, dk_sprintf
 ******************************************************************************/
undefined8 file_fn_02a899(void)

{
  undefined4 arg_eax;
  undefined4 uval;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  int *int_ptr;
  int *int_ptr_2;
  int val_2;
  undefined1 local_b0 [152];
  
  val = 10;
  val_2 = 0;
  int_ptr_2 = g_scratch_work_buf + 1;
  do {
    int_ptr = int_ptr_2;
    if (((&g_bss_002eb401)[val] & 1) != 0) {
      LbScreenWaitVbi();
      *(undefined2 *)int_ptr_2 = *(undefined2 *)(&g_bss_002eb402 + extraout_ECX);
      *(undefined2 *)((int)int_ptr_2 + 2) = *(undefined2 *)(&g_bss_002eb404 + extraout_ECX);
      *(undefined2 *)(int_ptr_2 + 1) = *(undefined2 *)(&g_bss_002eb406 + extraout_ECX);
      int_ptr = int_ptr_2 + 2;
      val_2 = val_2 + 1;
      *(undefined2 *)((int)int_ptr_2 + 6) = *(undefined2 *)(&g_bss_002eb408 + extraout_ECX);
      val = extraout_ECX;
    }
    val = val + 10;
    int_ptr_2 = int_ptr;
  } while (val != 0x140);
  *g_scratch_work_buf = val_2;
  prepare_file_path(arg_eax);
  uval = prepare_file_path();
  dk_sprintf(local_b0,s__s_MAP_05d_apt_00162cdb,uval);
  bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_update_creature_and_thing_02a9f0 (Original VA: 0x2a9f0, Ghidra: FUN_0002a9f0)
 * Prototype: void file_update_creature_and_thing_02a9f0(void);
 * Address  : 0x2a9f0 (Size: 292 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
void file_update_creature_and_thing_02a9f0(void)

{
  byte *thing_ptr;
  undefined4 uval;
  short *val;
  short *val_2;
  short short_val;
  undefined1 local_b4 [152];
  uint local_1c;
  
  short_val = 0;
  val = g_scratch_work_buf + 1;
  for (local_1c = 1; (local_1c & 0xffff) < 0x800; local_1c = local_1c + 1) {
    thing_ptr = (byte *)(&g_thing_ptrs)[local_1c & 0xffff];
    val_2 = val;
    if ((((*thing_ptr & 1) != 0) && (thing_ptr[0x1f] != 0xe)) && (thing_ptr[0x1f] != 0xf)) {
      *(undefined4 *)val = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
      val[2] = *(short *)(thing_ptr + 0x11);
      *(byte *)(val + 3) = thing_ptr[0x1f];
      *(byte *)((int)val + 7) = thing_ptr[0x1a];
      *(byte *)(val + 4) = thing_ptr[6];
      if (thing_ptr[0x1f] == 7) {
        *(undefined2 *)((int)val + 9) = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
      }
      if (thing_ptr[0x1f] == 9) {
        *(byte *)((int)val + 0xd) = thing_ptr[0x13];
        *(byte *)(val + 7) = thing_ptr[0x18];
      }
      if (thing_ptr[0x1f] == 5) {
        *(undefined1 *)(val + 7) =
             *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
      }
      if ((thing_ptr[0x1f] == 1) && (thing_ptr[0x1a] == 0x31)) {
        *(byte *)(val + 7) = thing_ptr[0x13];
      }
      val_2 = (short *)((int)val + 0x15);
      short_val = short_val + 1;
      *(undefined2 *)((int)val + 0xb) = *(undefined2 *)(thing_ptr + 0x1d);
    }
    val = val_2;
  }
  *g_scratch_work_buf = short_val;
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_b4,s__s_MAP_05d_tng_00162d0a,uval);
  bflib_system_io_fn_0e98c8();
  return;
}

/******************************************************************************
 * Function : file_buff_struct_num_02ab14 (Original VA: 0x2ab14, Ghidra: FUN_0002ab14)
 * Prototype: void file_buff_struct_num_02ab14(void);
 * Address  : 0x2ab14 (Size: 782 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp lines 1196, 1204, 1210, 1216, 1292
 * Purpose  : String 'BUFF=%d, STRUCT=%d, NUM=%d'
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 14 -> cdtest_ldata_dkwind00_dat_0150f0, inits_fn_043ac3, inits_told_you_so_create_043bb3, inits_told_you_so_create_0449a4, inits_told_you_so_create_044ca6, mapwho_fn_05117d, structs_update_creature_control_072af4, creature_update_creature_control_08240c ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0002ab84) */

void file_buff_struct_num_02ab14(void)

{
  char ch;
  byte flag;
  undefined4 uval;
  int val;
  int extraout_ECX;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  int val_2;
  ushort uval_2;
  undefined1 local_b4 [152];
  int local_1c;
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_b4,s__s_MAP_05d_tng_00162d22,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  val_2 = 0x2f3181;
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    LbErrorLog(); /* LbErrorLog("file.cpp", line 1196, g_log_buf) */
  }
  else {
    bflib_system_io_fn_0e984c();
    uval_2 = (ushort)g_render_poly_buf_start;
    if (0x7fe < (ushort)g_render_poly_buf_start) {
      uval_2 = 0x7fe;
    }
    if (0x30c3 < uval_2) {
      dk_sprintf(&g_log_sprintf_buf,s_BUFF__d__STRUCT__d__NUM__d_00162d31,0x40000,0x15,uval_2);
      LbErrorLog(); /* LbErrorLog("file.cpp", line 1210, g_log_buf) */
    }
    word_ptr_2 = local_b4;
    for (local_1c = 1; local_1c <= (int)(uint)uval_2; local_1c = local_1c + 1) {
      flag = *(byte *)(val_2 + 8);
      word_ptr = word_ptr_2;
      if (flag == 7) {
        *(uint *)(word_ptr_2 + -4) = (uint)g_bss_002eb542;
        *(undefined4 *)(word_ptr_2 + -8) = 7;
        *(char **)(word_ptr_2 + -0xc) = s_Invalid_player__d__Fixing_to_pla_00162d55;
        *(undefined1 **)(word_ptr_2 + -0x10) = &g_log_sprintf_buf;
        *(undefined4 *)(word_ptr_2 + -0x14) = 0x2ac8d;
        dk_sprintf();
        *(undefined4 *)(word_ptr_2 + -4) = 0x2ac9f;
        LbErrorLog(); /* LbErrorLog("file.cpp", line 1216, g_log_buf) */
        flag = g_bss_002eb542;
LAB_0002aca4:
        *(byte *)(val_2 + 8) = flag;
LAB_0002aca7:
        flag = *(byte *)(val_2 + 6);
        if (flag < 7) {
          if (flag == 0) goto LAB_0002ac4c;
          if (flag < 2) {
            *(uint *)(word_ptr_2 + -4) = (uint)*(ushort *)(val_2 + 0xb);
            *(undefined4 *)(word_ptr_2 + -8) = 0x2ad20;
            val = inits_fn_043ac3();
            if (*(char *)(val_2 + 7) == '1') {
              *(undefined1 *)(val + 0x13) = *(undefined1 *)(val_2 + 0xe);
            }
            word_ptr = word_ptr_2 + -4;
            if ((0x33 < *(byte *)(val_2 + 7)) && (word_ptr = word_ptr_2 + -4, *(byte *)(val_2 + 7) < 0x39)
               ) {
              *(undefined4 *)(word_ptr_2 + -8) = 0x2ad57;
              val = room_update_slab_subtile_columns_0d0f50();
              if (val == 0) {
                *(undefined4 *)(word_ptr_2 + -8) = 0x2ad78;
                structs_update_creature_control_072af4();
                word_ptr = word_ptr_2 + -4;
              }
              else {
                *(undefined1 *)(extraout_ECX + 6) = *(undefined1 *)(val + 3);
                *(undefined4 *)(word_ptr_2 + -8) = 0x2ad6a;
                mapwho_fn_05117d();
                word_ptr = word_ptr_2 + -4;
              }
            }
          }
          else {
            if (flag != 5) goto LAB_0002ac4c;
            *(undefined4 *)(word_ptr_2 + -4) = 0x2acf1;
            val = inits_told_you_so_create_043bb3();
            if (val != 0) {
              *(undefined4 *)(word_ptr_2 + -4) = 0x2ad02;
              creature_update_creature_control_08240c();
            }
          }
        }
        else if (flag < 8) {
          *(uint *)(word_ptr_2 + -4) = (uint)*(ushort *)(val_2 + 0xb);
          *(undefined4 *)(word_ptr_2 + -8) = 0x2adb3;
          inits_told_you_so_create_044ca6();
          word_ptr = word_ptr_2 + -4;
        }
        else {
          if (flag < 9) {
            *(uint *)(word_ptr_2 + -4) = (uint)*(ushort *)(val_2 + 0xb);
          }
          else {
            if (flag < 10) {
              *(uint *)(word_ptr_2 + -4) = (uint)*(byte *)(val_2 + 0xe);
              *(undefined4 *)(word_ptr_2 + -8) = 0x2ade2;
              inits_told_you_so_create_0449a4();
              word_ptr = word_ptr_2 + -4;
              goto LAB_0002ac51;
            }
            if (0xb < flag) goto LAB_0002ac4c;
            *(uint *)(word_ptr_2 + -4) = (uint)*(ushort *)(val_2 + 0xb);
          }
          *(undefined4 *)(word_ptr_2 + -8) = 0x2ad96;
          inits_fn_043ac3();
          word_ptr = word_ptr_2 + -4;
        }
      }
      else {
        if (flag == 8) {
          *(uint *)(word_ptr_2 + -4) = (uint)g_bss_002eb542;
          *(undefined4 *)(word_ptr_2 + -8) = 8;
          *(char **)(word_ptr_2 + -0xc) = s_Invalid_player__d__Fixing_to_pla_00162d85;
          *(undefined1 **)(word_ptr_2 + -0x10) = &g_log_sprintf_buf;
          *(undefined4 *)(word_ptr_2 + -0x14) = 0x2abfd;
          dk_sprintf();
          *(undefined4 *)(word_ptr_2 + -4) = 0x2ac0f;
          LbErrorLog(); /* LbErrorLog("file.cpp", line 1204, g_log_buf) */
          flag = g_neutral_player_number;
          goto LAB_0002aca4;
        }
        if (flag < 6) goto LAB_0002aca7;
        *(uint *)(word_ptr_2 + -4) = (uint)*(byte *)(val_2 + 8);
        *(char **)(word_ptr_2 + -8) = s_Invalid_player__d_Unable_to_fix_00162db5;
        *(undefined1 **)(word_ptr_2 + -0xc) = &g_log_sprintf_buf;
        *(undefined4 *)(word_ptr_2 + -0x10) = 0x2ac3f;
        dk_sprintf();
LAB_0002ac4c:
        *(undefined4 *)(word_ptr_2 + -4) = 0x2ac51;
        LbErrorLog(); /* LbErrorLog("file.cpp", line 1292, "CANNOT LOAD THING FILE") */
      }
LAB_0002ac51:
      val_2 = val_2 + 0x15;
      word_ptr_2 = word_ptr;
    }
  }
  return;
}

/******************************************************************************
 * Function : file_fn_02ae22 (Original VA: 0x2ae22, Ghidra: FUN_0002ae22)
 * Prototype: undefined8 file_fn_02ae22(void);
 * Address  : 0x2ae22 (Size: 71 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02ae22
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, dk_sprintf, dk_strcpy
 ******************************************************************************/
undefined8 file_fn_02ae22(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 local_a0 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a0,s__s_MAP_05d_dat_00162e24,uval);
  dk_strcpy();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02ae69 (Original VA: 0x2ae69, Ghidra: FUN_0002ae69)
 * Prototype: undefined8 file_fn_02ae69(void);
 * Address  : 0x2ae69 (Size: 39 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02ae69
 * Callers  : 0 -> 
 * Callees  : 1 -> prepare_file_path
 ******************************************************************************/
undefined8 file_fn_02ae69(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 auStack_a0 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(auStack_a0,s__s_MAP_05d_own_00162e3c,uval);
  dk_strcpy();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02ae90 (Original VA: 0x2ae90, Ghidra: FUN_0002ae90)
 * Prototype: undefined8 file_fn_02ae90(void);
 * Address  : 0x2ae90 (Size: 39 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02ae90
 * Callers  : 0 -> 
 * Callees  : 1 -> prepare_file_path
 ******************************************************************************/
undefined8 file_fn_02ae90(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 auStack_a0 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(auStack_a0,s__s_MAP_05d_wib_00162e54,uval);
  dk_strcpy();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02aeb7 (Original VA: 0x2aeb7, Ghidra: FUN_0002aeb7)
 * Prototype: undefined8 file_fn_02aeb7(void);
 * Address  : 0x2aeb7 (Size: 42 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02aeb7
 * Callers  : 0 -> 
 * Callees  : 1 -> prepare_file_path
 ******************************************************************************/
undefined8 file_fn_02aeb7(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 auStack_a0 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(auStack_a0,s__s_MAP_05d_clm_00162e6c,uval);
  dk_strcpy();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02aee1 (Original VA: 0x2aee1, Ghidra: FUN_0002aee1)
 * Prototype: undefined8 file_fn_02aee1(void);
 * Address  : 0x2aee1 (Size: 42 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02aee1
 * Callers  : 0 -> 
 * Callees  : 1 -> prepare_file_path
 ******************************************************************************/
undefined8 file_fn_02aee1(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined1 auStack_a0 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(auStack_a0,s__s_MAP_05d_lgt_00162e84,uval);
  dk_strcpy();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : file_fn_02af6d (Original VA: 0x2af6d, Ghidra: FUN_0002af6d)
 * Prototype: void file_fn_02af6d(void);
 * Address  : 0x2af6d (Size: 66 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02af6d
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, dk_sprintf, dk_strcpy
 ******************************************************************************/
void file_fn_02af6d(void)

{
  undefined4 uval;
  undefined1 local_a0 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a0,s__s_MAP_05d_tng_00162ecd,uval);
  dk_strcpy();
  return;
}

/******************************************************************************
 * Function : file_data_creature_txt_02b36c (Original VA: 0x2b36c, Ghidra: FUN_0002b36c)
 * Prototype: undefined8 file_data_creature_txt_02b36c(void);
 * Address  : 0x2b36c (Size: 3036 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp lines 1487
 * Purpose  : String 'data\creature.txt'
 * Callers  : 2 -> inits_fn_0401ec, inits_update_player_dungeon_040832
 * Callees  : 8 -> cdtest_ldata_dkwind00_dat_0150f0, research_fn_066fcb, LbErrorLog, LbScreenWaitVbi, bflib_system_io_fn_0e8a98, bflib_system_io_fn_0e984c, bflib_system_io_fn_0ea1f4, dk_atoi
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 file_data_creature_txt_02b36c(void)

{
  char *str_ptr;
  undefined4 uval;
  undefined1 uval_2;
  uint uval_3;
  uint uval_4;
  int loop_i;
  char *loop_i_2;
  int val;
  undefined2 uval_5;
  undefined4 arg_edx;
  undefined4 uval_6;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint uval_7;
  char *str_ptr_2;
  undefined8 uval_8;
  ulonglong uval_9;
  uint local_134;
  int local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  undefined2 *local_11c;
  undefined *local_118;
  char *local_f4;
  int local_c0;
  int local_bc;
  char *local_b4;
  int local_ac;
  int local_a4;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  cdtest_ldata_dkwind00_dat_0150f0();
  uval_3 = bflib_system_io_fn_0e8a98();
  if ((0 < (int)uval_3) && (uval_3 < 0x40000)) {
    cdtest_ldata_dkwind00_dat_0150f0();
    uval_4 = bflib_system_io_fn_0e984c();
    if (uval_4 == uval_3) {
      local_f4 = (char *)&g_render_poly_buf_start;
LAB_0002c312:
      str_ptr = local_f4;
      if (local_f4 < (char *)((int)&g_render_poly_buf_start + uval_3)) {
        for (; (local_f4 < (char *)((int)&g_render_poly_buf_start + uval_3) && (*local_f4 != '\n'));
            local_f4 = local_f4 + 1) {
        }
        loop_i_2 = local_f4 + 1;
        *local_f4 = '\0';
        uval_4 = (int)loop_i_2 - (int)str_ptr;
        loop_i = bflib_system_io_fn_0ea1f4();
        str_ptr_2 = str_ptr + uval_4;
        local_f4 = loop_i_2;
        if (loop_i == 0) {
          uval_7 = 0;
          local_a4 = 0;
          for (local_3c = 0; (int)local_3c < 0x96; local_3c = local_3c + 1) {
            for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                loop_i_2 = loop_i_2 + 1) {
              uval_7 = uval_7 + 1;
            }
            for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                loop_i_2 = loop_i_2 + 1) {
              uval_7 = uval_7 + 1;
            }
            dk_atoi();
            if (uval_4 <= uval_7) break;
            if (local_3c < 0x7b) {
                    /* WARNING: Could not recover jumptable at 0x0002b868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uval_8 = (**(code **)((int)&PTR_LAB_0002afdc + local_a4))();
              return uval_8;
            }
            local_a4 = local_a4 + 4;
          }
        }
        else {
          loop_i = bflib_system_io_fn_0ea1f4();
          if (loop_i == 0) {
            uval_7 = 0;
            for (local_38 = 0; (int)local_38 < 3; local_38 = local_38 + 1) {
              for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                  loop_i_2 = loop_i_2 + 1) {
                uval_7 = uval_7 + 1;
              }
              for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                  loop_i_2 = loop_i_2 + 1) {
                uval_7 = uval_7 + 1;
              }
              loop_i = dk_atoi();
              if (uval_4 <= uval_7) break;
              if (local_38 == 0) {
                local_11c = (undefined2 *)(&g_bss_002eadcd + loop_i * 4);
              }
              else if (local_38 < 2) {
                *local_11c = (short)loop_i;
              }
              else if (local_38 == 2) {
                local_11c[1] = (short)loop_i;
              }
            }
          }
          else {
            loop_i = bflib_system_io_fn_0ea1f4();
            if (loop_i == 0) {
              uval_7 = 0;
              local_ac = 0;
              for (loop_i = 0; loop_i < 0x32; loop_i = loop_i + 1) {
                for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                    loop_i_2 = loop_i_2 + 1) {
                  uval_7 = uval_7 + 1;
                }
                for (local_b4 = str_ptr + uval_7; (local_b4 < str_ptr_2 && (*local_b4 == '\t'));
                    local_b4 = local_b4 + 1) {
                  uval_7 = uval_7 + 1;
                }
                uval_9 = dk_atoi();
                loop_i = (int)(uval_9 >> 0x20);
                val = (int)uval_9;
                if (uval_4 <= uval_7) break;
                if (loop_i == 0) {
                  local_118 = &g_bss_002eae11 + val * 0x4c;
                }
                else if (uval_9 < 0xa00000000) {
LAB_0002b9b7:
                  *(int *)(local_118 + local_ac + -4) = val;
                }
                else if (uval_9 < 0xb00000000) {
                  *(int *)(local_118 + 0x24) = val;
                }
                else if (uval_9 < 0x1400000000) goto LAB_0002b9b7;
                local_ac = local_ac + 4;
              }
            }
            else {
              loop_i = bflib_system_io_fn_0ea1f4();
              if (loop_i == 0) {
                uval_7 = 0;
                local_bc = 0;
                for (local_134 = 0; (int)local_134 < 0x32; local_134 = local_134 + 1) {
                  for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                      loop_i_2 = loop_i_2 + 1) {
                    uval_7 = uval_7 + 1;
                  }
                  for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                      loop_i_2 = loop_i_2 + 1) {
                    uval_7 = uval_7 + 1;
                  }
                  dk_atoi();
                  if (uval_4 <= uval_7) break;
                  if (local_134 < 8) {
                    /* WARNING: Could not recover jumptable at 0x0002bad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uval_8 = (**(code **)((int)&PTR_LAB_0002b1c8 + local_bc))();
                    return uval_8;
                  }
                  local_bc = local_bc + 4;
                }
              }
              else {
                loop_i = bflib_system_io_fn_0ea1f4();
                if (loop_i == 0) {
                  uval_7 = 0;
                  local_c0 = 0;
                  for (local_34 = 0; (int)local_34 < 4; local_34 = local_34 + 1) {
                    for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                        loop_i_2 = loop_i_2 + 1) {
                      uval_7 = uval_7 + 1;
                    }
                    for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                        loop_i_2 = loop_i_2 + 1) {
                      uval_7 = uval_7 + 1;
                    }
                    dk_atoi();
                    if (uval_4 <= uval_7) break;
                    if (local_34 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0002bb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uval_8 = (**(code **)((int)&PTR_LAB_0002b1e8 + local_c0))();
                      return uval_8;
                    }
                    local_c0 = local_c0 + 4;
                  }
                }
                else {
                  loop_i = bflib_system_io_fn_0ea1f4();
                  if (loop_i == 0) {
                    uval_7 = 0;
                    for (local_30 = 0; (int)local_30 < 100; local_30 = local_30 + 1) {
                      for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                          loop_i_2 = loop_i_2 + 1) {
                        uval_7 = uval_7 + 1;
                      }
                      for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                          loop_i_2 = loop_i_2 + 1) {
                        uval_7 = uval_7 + 1;
                      }
                      dk_atoi();
                      if (uval_4 <= uval_7) break;
                      if (local_30 < 6) {
                    /* WARNING: Could not recover jumptable at 0x0002bc57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uval_8 = (**(code **)((int)&PTR_LAB_0002b1f8 + extraout_EDX))();
                        return uval_8;
                      }
                    }
                  }
                  else {
                    loop_i = bflib_system_io_fn_0ea1f4();
                    if (loop_i == 0) {
                      uval_7 = 0;
                      loop_i = 0;
                      for (local_2c = 0; (int)local_2c < 100; local_2c = local_2c + 1) {
                        for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                            loop_i_2 = loop_i_2 + 1) {
                          uval_7 = uval_7 + 1;
                        }
                        for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                            loop_i_2 = loop_i_2 + 1) {
                        }
                        dk_atoi();
                        if (uval_4 <= extraout_EDX_00) break;
                        if (local_2c < 5) {
                    /* WARNING: Could not recover jumptable at 0x0002bd2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uval_8 = (**(code **)((int)&PTR_LAB_0002b210 + loop_i))();
                          return uval_8;
                        }
                        loop_i = loop_i + 4;
                        uval_7 = extraout_EDX_00;
                      }
                    }
                    else {
                      loop_i = bflib_system_io_fn_0ea1f4();
                      if (loop_i == 0) {
                        uval_7 = 0;
                        for (local_28 = 0; local_28 < 100; local_28 = local_28 + 1) {
                          for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                              loop_i_2 = loop_i_2 + 1) {
                            uval_7 = uval_7 + 1;
                          }
                          for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                              loop_i_2 = loop_i_2 + 1) {
                            uval_7 = uval_7 + 1;
                          }
                          uval_6 = dk_atoi();
                          if (uval_4 <= uval_7) break;
                          uval = uval_6;
                          if ((local_28 != 0) && (uval = local_128, local_28 == 1)) {
                            uval_5 = (undefined2)uval_6;
                            switch(local_128) {
                            case 0:
                              g_bss_002ebc46 = uval_5;
                              break;
                            case 1:
                              g_bss_002ebc48 = uval_5;
                              break;
                            case 2:
                              g_bss_002ebc4a = uval_5;
                              break;
                            case 5:
                              g_bss_002ebc4d = uval_5;
                              break;
                            case 6:
                              g_bss_002ebc4f = uval_5;
                            }
                          }
                          local_128 = uval;
                        }
                      }
                      else {
                        loop_i = bflib_system_io_fn_0ea1f4();
                        if (loop_i == 0) {
                          uval_7 = 0;
                          for (local_24 = 0; local_24 < 100; local_24 = local_24 + 1) {
                            for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'));
                                loop_i_2 = loop_i_2 + 1) {
                              uval_7 = uval_7 + 1;
                            }
                            for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'));
                                loop_i_2 = loop_i_2 + 1) {
                              uval_7 = uval_7 + 1;
                            }
                            loop_i = dk_atoi();
                            if (uval_4 <= uval_7) break;
                            val = loop_i;
                            if ((local_24 != 0) && (val = local_12c, local_24 == 1)) {
                              uval_2 = (undefined1)loop_i;
                              uval_5 = (undefined2)loop_i;
                              switch(local_12c) {
                              case 0:
                                g_bss_002eb9e8 = uval_5;
                                break;
                              case 1:
                                g_bss_002eb9ea = uval_5;
                                break;
                              case 2:
                                g_bss_002eb9ee = uval_5;
                                break;
                              case 3:
                                g_bss_002eb9f0 = uval_5;
                                break;
                              case 4:
                                g_bss_002ebaef = uval_2;
                                break;
                              case 5:
                                g_bss_002eb9f2 = uval_5;
                                break;
                              case 6:
                                g_bss_002eb9f4 = uval_5;
                                break;
                              case 7:
                                g_bss_002eb9f6 = uval_5;
                                break;
                              case 8:
                                g_bss_002eb9f8 = uval_5;
                                break;
                              case 9:
                                g_bss_002eb9fa = uval_5;
                                break;
                              case 0xc:
                                g_bss_002ed417 = uval_2;
                                break;
                              case 0xd:
                                g_bss_002ed418 = loop_i;
                                break;
                              case 0xe:
                                g_bss_002ed41c = loop_i;
                                break;
                              case 0x15:
                                g_bss_002ebc51 = uval_2;
                                break;
                              case 0x1c:
                                g_bss_002ee7b0 = loop_i;
                                break;
                              case 0x1d:
                                g_bss_002ee7ac = loop_i;
                                break;
                              case 0x1e:
                                g_bss_002ee7b4 = loop_i;
                                break;
                              case 0x1f:
                                g_bss_002eba00 = uval_5;
                                break;
                              case 0x20:
                                g_bss_002eba02 = uval_5;
                                break;
                              case 0x21:
                                g_bss_002ee894 = loop_i;
                                break;
                              case 0x22:
                                g_bss_002ee898 = loop_i;
                                break;
                              case 0x23:
                                g_bss_002eb9c6 = uval_5;
                                break;
                              case 0x24:
                                g_bss_002eb9c8 = uval_5;
                                break;
                              case 0x25:
                                g_bss_002eb9ca = uval_5;
                                break;
                              case 0x26:
                                g_bss_002eb9cc = uval_5;
                                break;
                              case 0x27:
                                g_bss_002eb9ce = uval_5;
                                break;
                              case 0x28:
                                g_bss_002eb9d0 = uval_5;
                                break;
                              case 0x29:
                                g_bss_002eb9d2 = uval_5;
                                break;
                              case 0x2a:
                                g_bss_002eb9d4 = uval_5;
                                break;
                              case 0x2b:
                                g_bss_002eb9d6 = uval_5;
                                break;
                              case 0x2d:
                                g_bss_002ebaf4 = uval_5;
                                break;
                              case 0x2f:
                                g_bss_002ebc38 = loop_i;
                                break;
                              case 0x30:
                                g_bss_002ebc3c = loop_i;
                                break;
                              case 0x31:
                                g_bss_002ebc40 = loop_i;
                                break;
                              case 0x32:
                                g_bss_002ebc4c = uval_2;
                                break;
                              case 0x34:
                                g_bss_002ebc44 = uval_5;
                                break;
                              case 0x35:
                                g_bss_002ed442 = loop_i;
                                break;
                              case 0x37:
                                g_bss_002ed3e2 = loop_i;
                                break;
                              case 0x38:
                                g_bss_002eb9ec = uval_5;
                                break;
                              case 0x3a:
                                g_bss_001ace04 = loop_i;
                                g_bss_002ed3fb = loop_i;
                                break;
                              case 0x3b:
                                g_bss_002ed3ea = loop_i;
                                break;
                              case 0x3c:
                                g_bss_002ed3f3 = loop_i;
                                break;
                              case 0x3d:
                                g_bss_002ed3f7 = loop_i;
                                break;
                              case 0x3e:
                                g_bss_002ed3ef = loop_i;
                                break;
                              case 0x3f:
                                g_bss_002ed3ff = uval_2;
                                break;
                              case 0x40:
                                g_bss_002ed400 = uval_2;
                                break;
                              case 0x41:
                                g_bss_002ed401 = uval_2;
                                break;
                              case 0x42:
                                g_bss_002ed40b = loop_i;
                                break;
                              case 0x43:
                                g_bss_002ed40f = loop_i;
                                break;
                              case 0x44:
                                g_bss_002ed413 = loop_i;
                                break;
                              case 0x45:
                                g_bss_002ed446 = loop_i;
                                break;
                              case 0x46:
                                g_bss_002ed44a = loop_i;
                                break;
                              case 0x47:
                                g_bss_002ed44f = uval_2;
                                break;
                              case 0x48:
                                g_bss_002eb9fc = uval_5;
                                break;
                              case 0x49:
                                g_bss_002eb9fe = uval_5;
                                break;
                              case 0x4a:
                                g_bss_002ebaee = uval_2;
                              }
                            }
                            local_12c = val;
                          }
                        }
                        else {
                          loop_i = bflib_system_io_fn_0ea1f4();
                          if (loop_i == 0) {
                            uval_7 = 0;
                            for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
                              for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t'))
                                  ; loop_i_2 = loop_i_2 + 1) {
                                uval_7 = uval_7 + 1;
                              }
                              for (loop_i_2 = str_ptr + uval_7; (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t'))
                                  ; loop_i_2 = loop_i_2 + 1) {
                                uval_7 = uval_7 + 1;
                              }
                              loop_i = dk_atoi();
                              if (uval_4 <= uval_7) break;
                              val = loop_i;
                              if ((local_20 != 0) && (val = local_12c, local_20 == 1)) {
                                *(short *)(&g_bss_002eb9b4 + local_12c * 2) = (short)loop_i;
                              }
                              local_12c = val;
                            }
                          }
                          else {
                            loop_i = bflib_system_io_fn_0ea1f4();
                            if (loop_i == 0) {
                              uval_7 = 0;
                              for (loop_i = 0; loop_i < 100; loop_i = loop_i + 1) {
                                for (loop_i_2 = str_ptr + uval_7;
                                    (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t')); loop_i_2 = loop_i_2 + 1) {
                                  uval_7 = uval_7 + 1;
                                }
                                for (loop_i_2 = str_ptr + uval_7;
                                    (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t')); loop_i_2 = loop_i_2 + 1) {
                                  uval_7 = uval_7 + 1;
                                }
                                uval_8 = dk_atoi();
                                loop_i = (int)((ulonglong)uval_8 >> 0x20);
                                if (uval_4 <= uval_7) break;
                                val = (int)uval_8;
                                if ((loop_i != 0) && (val = local_124, loop_i == 1)) {
                                  *(int *)(&g_bss_001ae984 + local_124 * 4) = (int)uval_8;
                                }
                                local_124 = val;
                              }
                            }
                            else {
                              loop_i = bflib_system_io_fn_0ea1f4();
                              if (loop_i == 0) {
                                local_40 = 0;
                                for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
                                  for (loop_i_2 = str_ptr + local_40;
                                      (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t')); loop_i_2 = loop_i_2 + 1)
                                  {
                                    local_40 = local_40 + 1;
                                  }
                                  for (loop_i_2 = str_ptr + local_40;
                                      (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t')); loop_i_2 = loop_i_2 + 1)
                                  {
                                    local_40 = local_40 + 1;
                                  }
                                  dk_atoi();
                                  if (uval_4 <= extraout_EDX_01) break;
                                  if ((local_1c != 0) && (local_1c == 1)) {
                                    research_fn_066fcb();
                                  }
                                }
                              }
                              else {
                                loop_i = bflib_system_io_fn_0ea1f4();
                                if (loop_i == 0) {
                                  local_130 = 0;
                                  for (local_120 = 0; local_120 < 3; local_120 = local_120 + 1) {
                                    for (loop_i_2 = str_ptr + local_130;
                                        (loop_i_2 < str_ptr_2 && (*loop_i_2 != '\t')); loop_i_2 = loop_i_2 + 1
                                        ) {
                                      local_130 = local_130 + 1;
                                    }
                                    for (loop_i_2 = str_ptr + local_130;
                                        (loop_i_2 < str_ptr_2 && (*loop_i_2 == '\t')); loop_i_2 = loop_i_2 + 1
                                        ) {
                                      local_130 = local_130 + 1;
                                    }
                                    dk_atoi();
                                    if (uval_4 <= extraout_EDX_02) break;
                                    if ((local_120 != 0) && (local_120 == 1)) {
                                      research_fn_066fcb();
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
                }
              }
            }
          }
        }
        goto LAB_0002c312;
      }
      g_bss_002e6f27 = g_bss_002eba00;
      LbScreenWaitVbi();
      uval_6 = 1;
      goto LAB_0002a4dd;
    }
  }
  LbErrorLog(); /* LbErrorLog("file.cpp", line 1487, "Cannot load XLS file") */
  uval_6 = 0;
LAB_0002a4dd:
  return CONCAT44(arg_edx,uval_6);
}

/******************************************************************************
 * Function : file_fn_02c3d0 (Original VA: 0x2c3d0, Ghidra: FUN_0002c3d0)
 * Prototype: undefined8 file_fn_02c3d0(void);
 * Address  : 0x2c3d0 (Size: 5 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp lines 2568, 2575
 * Purpose  : Module file.cpp procedure @ 0x02c3d0
 * Callers  : 6 -> frontend_fn_02f8a2, inits_fn_0430ba, inits_wlb_file_muddled_fixing_0457bd, setup_load_vga_256_palettes, setup_load_alpha_and_light_tables, draw_load_palette_file_08cc24
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 file_fn_02c3d0(void)

{
  int val;
  undefined4 arg_edx;
  
  val = bflib_system_io_fn_0f78b2();
  return CONCAT44(arg_edx,(uint)(val == 0));
}

/******************************************************************************
 * Function : file_load_script_file_02c502 (Original VA: 0x2c502, Ghidra: FUN_0002c502)
 * Prototype: undefined8 file_load_script_file_02c502(void);
 * Address  : 0x2c502 (Size: 480 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp lines 2740, 2786, 2790
 * Purpose  : String 'Cannot load SCRIPT file'
 * Callers  : 1 -> inits_update_player_dungeon_040832
 * Callees  : 9 -> cdtest_ldata_dkwind00_dat_0150f0, newgui_fn_05cc4a, command_script_number_parameters_078ada, prepare_file_path, LbErrorLog, LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0e8a98 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 file_load_script_file_02c502(void)

{
  undefined4 arg_eax;
  int val;
  undefined4 uval;
  int extraout_ECX;
  int val_2;
  int extraout_ECX_00;
  int extraout_ECX_01;
  char *str_ptr;
  char *extraout_ECX_02;
  undefined4 arg_edx;
  int val_3;
  int dungeon_off;
  int extraout_EDX;
  char *str_ptr_2;
  
  newgui_fn_05cc4a();
  LbScreenWaitVbi();
  g_data_00179c04 = 1;
  g_data_00179c08 = -1;
  g_bss_002ee88e = 0;
  val_3 = 0x80;
  g_bss_0019d0bd = g_bss_0019d0bd | 8;
  val_2 = extraout_ECX;
  do {
    dungeon_off = val_2 * 0x1508 + 4;
    do {
      val = dungeon_off + 4;
      *(undefined4 *)((int)&g_bss_002e0fd8 + dungeon_off) = 0xb;
      dungeon_off = val;
    } while (val != val_3);
    val_2 = val_2 + 1;
    val_3 = val_3 + 0x1508;
  } while (val_2 < 5);
  val_3 = 0x28;
  val_2 = 0;
  do {
    val_2 = val_2 * 0x1508;
    for (dungeon_off = val_2; dungeon_off != val_3; dungeon_off = dungeon_off + 5) {
      (&g_bss_002e15b9)[dungeon_off] = 0;
    }
    (&g_bss_002e158f)[val_2] = 1;
    (&g_bss_002e157b)[val_2] = 1;
    val_3 = val_3 + 0x1508;
    LbScreenWaitVbi();
    LbScreenWaitVbi();
    val_2 = extraout_ECX_00;
  } while (extraout_ECX_00 < 5);
  cdtest_ldata_dkwind00_dat_0150f0();
  prepare_file_path(arg_eax);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_map_05d_txt_0016306c,uval);
  val_2 = bflib_system_io_fn_0e8a98();
  if (0 < val_2) {
    cdtest_ldata_dkwind00_dat_0150f0();
    val_2 = bflib_system_io_fn_0e984c();
    if (val_2 == extraout_ECX_01) {
      str_ptr = g_scratch_work_buf + extraout_ECX_01;
      str_ptr_2 = g_scratch_work_buf;
      while (str_ptr_2 < str_ptr) {
        for (; (str_ptr_2 < str_ptr && (*str_ptr_2 != '\n')); str_ptr_2 = str_ptr_2 + 1) {
        }
        *str_ptr_2 = '\0';
        command_script_number_parameters_078ada();
        g_data_00179c04 = g_data_00179c04 + 1;
        str_ptr = extraout_ECX_02;
        str_ptr_2 = (char *)(extraout_EDX + 1);
      }
      if (g_bss_002ed33e == 0) {
        LbErrorLog(); /* LbErrorLog("file.cpp", line 2740, "Cannot load SCRIPT file") */
      }
      if (g_data_00179c08 != -1) {
        LbErrorLog(); /* LbErrorLog("file.cpp", line 2786, "No WIN GAME conditions in script file.") */
      }
      uval = 1;
      goto LAB_0002a4dc;
    }
  }
  LbErrorLog(); /* LbErrorLog("file.cpp", line 2790, "Missing ENDIF's in script file.") */
  uval = 0;
LAB_0002a4dc:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : file_fn_02c6e2 (Original VA: 0x2c6e2, Ghidra: FUN_0002c6e2)
 * Prototype: void file_fn_02c6e2(void);
 * Address  : 0x2c6e2 (Size: 84 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02c6e2
 * Callers  : 3 -> frontend_fn_02feca, newgui_fn_052c6d, newgui_fn_052ced
 * Callees  : 4 -> prepare_file_path, LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0e984c
 ******************************************************************************/
void file_fn_02c6e2(void)

{
  undefined4 uval;
  int val;
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_SAVE_CAT_0016311d,uval);
  val = bflib_system_io_fn_0e984c();
  if (val == -1) {
    LbScreenWaitVbi();
  }
  return;
}

/******************************************************************************
 * Function : file_fn_02c736 (Original VA: 0x2c736, Ghidra: FUN_0002c736)
 * Prototype: undefined8 file_fn_02c736(void);
 * Address  : 0x2c736 (Size: 79 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02c736
 * Callers  : 3 -> file_fn_02c785, file_update_player_dungeon_02c833, frontend_fn_02e6c4
 * Callees  : 3 -> prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
undefined8 file_fn_02c736(void)

{
  undefined4 uval;
  int val;
  undefined4 arg_edx;
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_SAVE_CAT_00163130,uval);
  val = bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,(uint)(val != -1));
}

/******************************************************************************
 * Function : file_fn_02c785 (Original VA: 0x2c785, Ghidra: FUN_0002c785)
 * Prototype: longlong file_fn_02c785(void);
 * Address  : 0x2c785 (Size: 174 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Module file.cpp procedure @ 0x02c785
 * Callers  : 1 -> newgui_fn_05a47f
 * Callees  : 6 -> file_fn_02c736, moodneed_fn_051374, newgui_copy_state_struct_05b4e7, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong file_fn_02c785(void)

{
  undefined4 uval;
  int val;
  uint arg_edx;
  undefined8 uval_2;
  undefined1 local_a4 [152];
  
  uval_2 = file_fn_02c736();
  if ((int)uval_2 != 0) {
    g_bss_0019d0ac._0_1_ = g_bss_002e78e9;
    ram0x0019d0ad = g_data_00179bfc;
    ram0x0019d0b1 = g_data_00179c00;
    g_bss_0019d0b4._1_1_ = 0;
    prepare_file_path((int)((ulonglong)uval_2 >> 0x20));
    uval = prepare_file_path();
    dk_sprintf(local_a4,s__s_GAME_04d_SAV_00163143,uval);
    val = bflib_system_io_fn_0e98c8();
    if (val != -1) {
      moodneed_fn_051374();
      return CONCAT44(arg_edx,1);
    }
  }
  newgui_copy_state_struct_05b4e7();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : file_update_player_dungeon_02c833 (Original VA: 0x2c833, Ghidra: FUN_0002c833)
 * Prototype: undefined8 file_update_player_dungeon_02c833(void);
 * Address  : 0x2c833 (Size: 571 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, newgui_fn_05a432
 * Callees  : 17 -> eyelens_fn_0270e0, eyelens_fn_027320, file_fn_02c736, file_update_player_dungeon_02ca74, frontnet_update_player_dungeon_035e3c, inits_update_creature_and_thing_044eb6, moodneed_fn_051374, packet_resync_network_game_state ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 file_update_player_dungeon_02c833(void)

{
  int arg_eax;
  undefined4 uval;
  int file_handle;
  undefined4 arg_edx;
  undefined1 local_c0 [152];
  undefined1 local_28;
  int local_27;
  int local_23;
  double local_1c;
  
  eyelens_fn_0270e0();
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_c0,s__s_GAME_04d_SAV_0016315a,uval);
  file_handle = LbFileOpen();
  if (file_handle == -1) {
LAB_0002c88b:
    (&g_bss_002e6ff4)[arg_eax * 0x11] = 0;
    file_fn_02c736();
  }
  else {
    file_handle = LbFileRead();
    if (file_handle != 10) {
      bflib_system_io_fn_0e8a1c();
      goto LAB_0002c88b;
    }
    bflib_system_io_fn_0e8a1c();
    file_handle = bflib_system_io_fn_0e8a98();
    if (((file_handle != 0x151825) || (local_27 != g_data_00179bfc)) || (local_23 != g_data_00179c00)) {
      file_handle = bflib_system_io_fn_0e8a98();
      if (((file_handle == 0x151825) && (local_27 == g_data_00179bfc)) &&
         ((local_23 < 9 && (g_data_00179c00 == 10)))) goto LAB_0002c961;
      *(undefined4 *)(&g_bss_0019d0cf + g_my_player_word._3_1_ * 0x4ef) = 0;
      g_my_player_word._3_1_ = '\0';
      g_game_type = 2;
      g_bss_0019d0f4 = 1;
      g_game_system_flags = g_game_system_flags & 0xfe;
      g_bss_002e78e9 = local_28;
      g_bss_002e78ea = local_28;
      packet_resync_network_game_state();
LAB_0002ca5d:
      uval = 1;
      goto LAB_0002ca62;
    }
LAB_0002c961:
    file_handle = bflib_system_io_fn_0e984c();
    if (file_handle == 0x151825) {
      inits_update_creature_and_thing_044eb6();
      file_update_player_dungeon_02ca74();
      moodneed_fn_051374();
      panmap_door_flagged_position_063122();
      local_1c = (double)g_bss_0033401d;
      if ((g_bss_0033401d <= (float)g_data_0016316a) || (g_data_00163172 <= local_1c)) {
        g_bss_002ee88d = 0;
      }
      else {
        g_bss_002ee88d = 1;
      }
      file_handle = g_my_player_word._3_1_ * 0x4ef;
      *(undefined4 *)(&g_bss_0019d589 + file_handle) = 0;
      *(undefined4 *)(&g_bss_0019d58d + file_handle) = 0;
      *(undefined4 *)(&g_bss_0019d0cf + file_handle) = 0;
      (&g_bss_0019d0cb)[file_handle] = (&g_bss_0019d0cb)[file_handle] & 0xf3;
      panmap_update_player_view_state_0627b5();
      eyelens_fn_027320();
      if ((&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef] != '\0') {
        frontnet_update_player_dungeon_035e3c();
        file_handle = (int)g_my_player_word._3_1_;
        *(undefined4 *)(&g_bss_002e18a4 + file_handle * 0x1508) = 0;
        *(undefined4 *)(&g_bss_002e18a0 + file_handle * 0x1508) = 1;
      }
      goto LAB_0002ca5d;
    }
  }
  uval = 0;
LAB_0002ca62:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : file_update_player_dungeon_02ca74 (Original VA: 0x2ca74, Ghidra: FUN_0002ca74)
 * Prototype: void file_update_player_dungeon_02ca74(void);
 * Address  : 0x2ca74 (Size: 183 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> file_update_player_dungeon_02c833, packet_build_local_player_turn_packet
 * Callees  : 10 -> compturn_update_player_dungeon_021216, file_fn_029d96, inits_fn_041019, inits_update_creature_and_thing_044eb6, inits_process_map_subtile_045402, newgui_fn_0543dd, newgui_update_player_view_state_05d280, sound_process_thing_entity_06f3d6 ...
 ******************************************************************************/
void file_update_player_dungeon_02ca74(void)

{
  int val;
  
  *(undefined4 *)(&g_bss_0019d0cf + g_my_player_word._3_1_ * 0x4ef) = 0;
  inits_update_creature_and_thing_044eb6();
  routes_fn_0d17a8();
  g_bss_00377768 = 0;
  val = 0;
  do {
    if (((&g_players)[val] & 1) != 0) {
      command_update_player_view_state_0784ae();
    }
    val = val + 0x4ef;
  } while (val != 0x18ab);
  g_bss_002f10d2 = &g_bss_002ddd60;
  g_bss_002f10d6 = &g_dungeons;
  file_fn_029d96();
  inits_fn_041019();
  newgui_fn_0543dd();
  newgui_update_player_view_state_05d280();
  inits_process_map_subtile_045402();
  compturn_update_player_dungeon_021216();
  sound_process_thing_entity_06f3d6();
  return;
}

/******************************************************************************
 * Function : file_process_map_subtile_02cb2b (Original VA: 0x2cb2b, Ghidra: FUN_0002cb2b)
 * Prototype: undefined8 file_process_map_subtile_02cb2b(void);
 * Address  : 0x2cb2b (Size: 405 bytes)
 * Module   : file.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> file_fn_029bfe
 * Callees  : 9 -> cdtest_ldata_dkwind00_dat_0150f0, column_fn_0157ac, file_fn_02a5db, light_fn_0b21f0, prepare_file_path, LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0e8960 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0002cbc7) */

undefined8 file_process_map_subtile_02cb2b(void)

{
  byte *byte_ptr;
  int val;
  char ch;
  undefined4 uval;
  int *loop_i;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int extraout_EDX;
  int *int_ptr;
  undefined1 local_c0 [152];
  int local_28;
  int *local_24;
  undefined4 *local_20;
  int *local_1c;
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_c0,s__s_MAP_05d_clm_00163183,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    uval = 0;
  }
  else {
    light_fn_0b21f0();
    cdtest_ldata_dkwind00_dat_0150f0();
    bflib_system_io_fn_0e984c();
    local_28 = *g_scratch_work_buf;
    if (local_28 < 0) {
      local_28 = 0;
    }
    else if (0x7ff < local_28) {
      local_28 = 0x7ff;
    }
    g_bss_002e7beb = *(ushort *)(g_scratch_work_buf + 4);
    if (0x7ff < g_bss_002e7beb) {
      g_bss_002e7beb = 0x7ff;
    }
    local_28 = local_28 * 0x18;
    int_ptr = g_scratch_work_buf + 2;
    local_20 = &g_bss_0019e973;
    local_1c = g_scratch_work_buf + 6;
    val_2 = 0;
    while (val_2 <= local_28) {
      LbScreenWaitVbi();
      *(short *)((int)&g_bss_0019e973 + extraout_ECX_00 + 3) = (short)*int_ptr;
      local_24 = local_1c;
      *(undefined2 *)((int)&g_bss_0019e977 + extraout_ECX_00 + 1) = *(undefined2 *)((int)int_ptr + 2);
      *(char *)((int)&g_bss_0019e977 + extraout_ECX_00 + 3) = (char)int_ptr[1];
      val_2 = extraout_ECX_00;
      for (loop_i = int_ptr; loop_i != local_1c; loop_i = (int *)((int)loop_i + 2)) {
        *(undefined2 *)((int)&g_bss_0019e97b + val_2) = *(undefined2 *)((int)loop_i + 6);
        val_2 = val_2 + 2;
      }
      local_1c = (int *)((int)local_1c + 0x16);
      local_20 = local_20 + 6;
      int_ptr = (int *)((int)int_ptr + 0x16);
      ch = column_fn_0157ac();
      byte_ptr = (byte *)((int)&g_bss_0019e973 + extraout_EDX + 2);
      *byte_ptr = *byte_ptr & 0xf;
      byte_ptr = (byte *)((int)&g_bss_0019e973 + extraout_EDX + 2);
      *byte_ptr = *byte_ptr | ch << 4;
      val_2 = extraout_ECX + 0x18;
    }
    val_2 = 0;
    do {
      val = val_2 + 1;
      val_2 = val_2 + 5;
      *(short *)(&g_bss_0019e973 + (*(uint *)((int)&g_map_subtiles + val) & 0x7ff) * 6) =
           *(short *)(&g_bss_0019e973 + (*(uint *)((int)&g_map_subtiles + val) & 0x7ff) * 6) + 1;
    } while (val_2 != 0x50000);
    file_fn_02a5db();
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : file_e14r432q_system_should_able_02cdc8 (Original VA: 0x2cdc8, Ghidra: FUN_0002cdc8)
 * Prototype: void file_e14r432q_system_should_able_02cdc8(void);
 * Address  : 0x2cdc8 (Size: 928 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp lines 3175, 3200, 3247, 3273
 * Purpose  : String 'E14R432Q#222564-3; SYSTEM ERROR I should be able to find a c'
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 10 -> cdtest_ldata_dkwind00_dat_0150f0, column_fn_015318, column_fn_01534a, column_could_create_column_none_015386, prepare_file_path, LbErrorLog, LbScreenWaitVbi, dk_sprintf ...
 ******************************************************************************/
void file_e14r432q_system_should_able_02cdc8(void)

{
  byte *byte_ptr;
  char ch;
  undefined4 uval;
  int *int_ptr;
  int val;
  int loop_i;
  int *extraout_ECX;
  int *extraout_ECX_00;
  short *extraout_ECX_01;
  short *val_2;
  short *extraout_ECX_02;
  short *extraout_ECX_03;
  short *extraout_ECX_04;
  int val_3;
  int loop_i_2;
  undefined1 local_ec [157];
  short local_4f;
  undefined2 local_4c;
  undefined4 local_3c;
  undefined2 uStack_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  short *local_24;
  undefined2 *local_20;
  int local_1c;
  
  local_3c = g_frontnet_bss_00334624;
  uStack_38 = g_frontnet_bss_00334628;
  LbScreenWaitVbi();
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ec,s__s_SLABS_CLM_001631d5,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    bflib_system_io_fn_0e984c();
    val_3 = *g_scratch_work_buf;
    if (0x800 < val_3) {
      dk_sprintf(&g_log_sprintf_buf,s__d_columns_in_slab_set__limit_is_001631e2,val_3,0x800);
      LbErrorLog(); /* LbErrorLog("file.cpp", line 3175, g_log_buf) */
    }
    if (val_3 < 0) {
      val_3 = 0;
    }
    else if (0x800 < val_3) {
      val_3 = 0x800;
    }
    int_ptr = g_scratch_work_buf + 7;
    for (loop_i_2 = 1; loop_i_2 < val_3; loop_i_2 = loop_i_2 + 1) {
      *(undefined2 *)int_ptr = 0;
      int_ptr = int_ptr + 6;
    }
    prepare_file_path();
    uval = prepare_file_path();
    dk_sprintf(local_ec,s__s_SLABS_DAT_00163216,uval); /* 0x163216="%s\SLABS.DAT" */
    cdtest_ldata_dkwind00_dat_0150f0();
    ch = bflib_system_io_fn_0e8960();
    if (ch != '\0') {
      bflib_system_io_fn_0e984c();
      loop_i_2 = (int)g_bss_001b2e08;
      if (0x518 < loop_i_2) {
        dk_sprintf(&g_log_sprintf_buf,s__d_slabs_in_slab_set__limit_is___00163223,loop_i_2,0x518);
        LbErrorLog(); /* LbErrorLog("file.cpp", line 3200, g_log_buf) */
      }
      if (loop_i_2 < 0) {
        loop_i_2 = 0;
      }
      else if (0x518 < loop_i_2) {
        loop_i_2 = 0x518;
      }
      int_ptr = g_scratch_work_buf + 1;
      local_28 = loop_i_2 * 0x12;
      local_20 = &g_bss_001b2e0a;
      for (loop_i = 0; loop_i < local_28; loop_i = loop_i + 0x12) {
        local_34 = (int)&g_bss_001b2e0a + loop_i;
        val = 0;
        do {
          if (*(short *)(local_34 + val) < 0) {
            *(short *)(int_ptr + *(short *)(local_34 + val) * -6) =
                 (short)int_ptr[*(short *)(local_34 + val) * -6] + 1;
          }
          val = val + 2;
        } while (val != 0x12);
      }
      local_30 = int_ptr;
      for (loop_i = 1; int_ptr = int_ptr + 6, loop_i < val_3; loop_i = loop_i + 1) {
        if ((short)*int_ptr != 0) {
          val = column_fn_01534a();
          int_ptr = extraout_ECX;
          if (val == 0) {
            val = column_could_create_column_none_015386();
            int_ptr = extraout_ECX_00;
          }
          byte_ptr = (byte *)((int)&g_bss_0019e973 + val * 0x18 + 2);
          *byte_ptr = *byte_ptr | 1;
        }
      }
      for (local_2c = 0; local_2c < loop_i_2; local_2c = local_2c + 1) {
        val_2 = local_20 + local_2c * 9;
        local_24 = val_2 + 9;
        do {
          if (*val_2 < 0) {
            val_3 = column_fn_01534a();
            val_2 = extraout_ECX_02;
            if (val_3 != 0) goto LAB_0002d031;
            LbErrorLog(); /* LbErrorLog("file.cpp", line 3247, "E14R432Q#222564-3; SYSTEM ERROR I should be able to find a column here") */
            val_2 = extraout_ECX_01;
          }
          else {
            local_4f = *val_2;
            val_3 = column_fn_01534a();
            val_2 = extraout_ECX_03;
            if (val_3 == 0) {
              val_3 = column_could_create_column_none_015386();
              byte_ptr = (byte *)((int)&g_bss_0019e973 + val_3 * 0x18 + 2);
              *byte_ptr = *byte_ptr | 1;
              val_2 = extraout_ECX_04;
            }
LAB_0002d031:
            *val_2 = -(short)val_3;
          }
          val_2 = val_2 + 1;
        } while (val_2 != local_24);
      }
      goto LAB_0002d088;
    }
  }
  LbErrorLog(); /* LbErrorLog("file.cpp", line 3273, "Could not load column set") */
LAB_0002d088:
  local_1c = 0;
  val_3 = 0;
  do {
    loop_i_2 = local_1c;
    LbScreenWaitVbi();
    local_4f = *(short *)((int)&local_3c + val_3);
    loop_i = 0;
    do {
      local_4c = (&g_data_00179cc0)[loop_i];
      column_fn_015318();
      val = column_fn_01534a();
      if (val == 0) {
        val = column_could_create_column_none_015386();
      }
      byte_ptr = (byte *)((int)&g_bss_0019e973 + val * 0x18 + 2);
      *byte_ptr = *byte_ptr | 1;
      loop_i = loop_i + 1;
      *(short *)(&g_bss_002e78c4 + loop_i_2) = -(short)val;
      loop_i_2 = loop_i_2 + 2;
    } while (loop_i < 6);
    val_3 = val_3 + 2;
    local_1c = local_1c + 0xc;
  } while (val_3 != 6);
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ec,s__s_SLABS_TNG_001632e9,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    LbErrorLog();
  }
  else {
    bflib_system_io_fn_0e984c();
  }
  return;
}

/******************************************************************************
 * Function : file_slab_type_increase_size_02d168 (Original VA: 0x2d168, Ghidra: FUN_0002d168)
 * Prototype: undefined8 file_slab_type_increase_size_02d168(void);
 * Address  : 0x2d168 (Size: 209 bytes)
 * Module   : file.cpp [direct_file_string_xref]
 * OrigLine : file.cpp lines 3332, 3361
 * Purpose  : String 'Slab Type > 255, increase size of SlabMap.Slab'
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 9 -> cdtest_ldata_dkwind00_dat_0150f0, inits_wlb_file_muddled_fixing_0457bd, slab_process_map_subtile_0d96c0, slab_process_slabmap_tile_0d988c, prepare_file_path, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e8960 ...
 ******************************************************************************/
undefined8 file_slab_type_increase_size_02d168(void)

{
  ushort uval;
  char ch;
  undefined4 uval_2;
  uint uval_3;
  ushort *extraout_ECX;
  ushort *word_ptr;
  ushort *extraout_ECX_00;
  undefined4 arg_edx;
  int val;
  int val_2;
  undefined1 local_b0 [152];
  
  prepare_file_path();
  uval_2 = prepare_file_path();
  dk_sprintf(local_b0,s__s_map_05d_slb_00163327,uval_2);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    uval_3 = LbErrorLog(); /* LbErrorLog("file.cpp", line 3332, "Slab Type > 255, increase size of SlabMap.Slab") */
    uval_3 = uval_3 & 0xffffff00;
  }
  else {
    bflib_system_io_fn_0e984c();
    word_ptr = extraout_ECX;
    val_2 = 0;
    do {
      if (0xff < *word_ptr) {
        LbErrorLog(); /* LbErrorLog("file.cpp", line 3361, "Could not find slab map file") */
        word_ptr = extraout_ECX_00;
      }
      val = val_2 + 6;
      uval = *word_ptr;
      word_ptr = word_ptr + 1;
      (&g_slabmap_base)[val_2] = (char)uval;
      val_2 = val;
    } while (val != 0xa956);
    slab_process_map_subtile_0d96c0();
    slab_process_slabmap_tile_0d988c();
    uval_2 = inits_wlb_file_muddled_fixing_0457bd();
    uval_3 = CONCAT31((int3)((uint)uval_2 >> 8),1);
  }
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : file_process_slabmap_tile_02d239 (Original VA: 0x2d239, Ghidra: FUN_0002d239)
 * Prototype: undefined8 file_process_slabmap_tile_02d239(void);
 * Address  : 0x2d239 (Size: 218 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 3 -> prepare_file_path, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
undefined8 file_process_slabmap_tile_02d239(void)

{
  byte *byte_ptr;
  undefined4 uval;
  int val;
  undefined4 extraout_ECX;
  undefined4 arg_edx;
  ushort *word_ptr;
  undefined1 local_a8 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a8,s__s_map_05d_slb_0016339d,uval);
  val = 0;
  word_ptr = g_scratch_work_buf;
  do {
    byte_ptr = &g_slabmap_base + val;
    val = val + 6;
    *word_ptr = (ushort)*byte_ptr;
    word_ptr = word_ptr + 1;
  } while (val != 0xa956);
  bflib_system_io_fn_0e98c8();
  prepare_file_path(extraout_ECX);
  uval = prepare_file_path();
  dk_sprintf(local_a8,s__s_map_05d_wlb_001633b5,uval);
  val = 0;
  word_ptr = g_scratch_work_buf;
  do {
    byte_ptr = &g_slabmap + val;
    val = val + 6;
    *(byte *)word_ptr = (*byte_ptr & 0x1f) >> 3;
    word_ptr = (ushort *)((int)word_ptr + 1);
  } while (val != 0xa956);
  uval = bflib_system_io_fn_0e98c8();
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval >> 8),1));
}

/******************************************************************************
 * Function : file_fn_02d313 (Original VA: 0x2d313, Ghidra: FUN_0002d313)
 * Prototype: undefined1 file_fn_02d313(void);
 * Address  : 0x2d313 (Size: 26 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x02d313
 * Callers  : 1 -> file_data_ceiling_txt_02d32d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 file_fn_02d313(void)

{
  char arg_al;
  
  if ((((arg_al != '\n') && (arg_al != ',')) && (arg_al != ' ')) &&
     ((arg_al != '\t' && (arg_al != '\r')))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : file_data_ceiling_txt_02d32d (Original VA: 0x2d32d, Ghidra: FUN_0002d32d)
 * Prototype: void file_data_ceiling_txt_02d32d(void);
 * Address  : 0x2d32d (Size: 197 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : String 'data\ceiling.txt'
 * Callers  : 1 -> draw_fn_0929c0
 * Callees  : 7 -> cdtest_ldata_dkwind00_dat_0150f0, file_fn_02d313, LbScreenWaitVbi, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead, dk_atoi
 ******************************************************************************/
void file_data_ceiling_txt_02d32d(void)

{
  char ch;
  undefined2 uval;
  int file_handle;
  int val;
  int extraout_EDX;
  int extraout_EDX_00;
  int val_2;
  undefined1 local_20 [4];
  undefined1 local_1c;
  
  cdtest_ldata_dkwind00_dat_0150f0();
  file_handle = LbFileOpen();
  if (file_handle != -1) {
    file_handle = 1;
    val_2 = 0;
    do {
      if (file_handle != 1) break;
      do {
        file_handle = LbFileRead();
        if (file_handle != 1) break;
        ch = file_fn_02d313();
        file_handle = extraout_EDX;
      } while (ch == '\0');
      if (file_handle != 1) break;
      LbScreenWaitVbi();
      file_handle = 0;
      do {
        local_20[file_handle] = local_1c;
        file_handle = file_handle + 1;
        val = LbFileRead();
        if (val != 1) break;
        ch = file_fn_02d313();
      } while (ch != '\0');
      val = val_2 + 2;
      uval = dk_atoi();
      *(undefined2 *)((int)&g_engine3_bss_00387e1c + val_2) = uval;
      file_handle = extraout_EDX_00;
      val_2 = val;
    } while (val < 0x4a0);
    bflib_system_io_fn_0e8a1c();
  }
  return;
}

/******************************************************************************
 * Function : file_fn_02d3f4 (Original VA: 0x2d3f4, Ghidra: FUN_0002d3f4)
 * Prototype: void file_fn_02d3f4(undefined1 param_1);
 * Address  : 0x2d3f4 (Size: 179 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x02d3f4
 * Callers  : 1 -> file_fn_02d6f0
 * Callees  : 0 -> 
 ******************************************************************************/
void file_fn_02d3f4(undefined1 param_1)

{
  int *thing;
  undefined1 arg_cl;
  uint arg_edx;
  int *int_ptr;
  int thing_ptr;
  int arg_ebx;
  int val;
  int thing_ptr_2;
  int local_14;
  
  if ((int)arg_edx < 0) {
    arg_edx = 0;
  }
  if ((g_frontnet_bss_0033463c <= (int)arg_edx) || (arg_ebx <= (int)arg_edx)) {
    return;
  }
  thing_ptr_2 = 0;
  int_ptr = thing;
  do {
    if (*thing <= thing_ptr_2) {
      *(short *)((int)thing + *thing * 2 + 4) = (short)arg_edx;
      *(undefined1 *)(*thing + 0x38 + (int)thing) = arg_cl;
      *(undefined1 *)(*thing + 0x52 + (int)thing) = param_1; /* thing->health */
LAB_0002d49f:
      *thing = *thing + 1;
      return;
    }
    if (arg_edx == *(ushort *)(int_ptr + 1)) {
      *(undefined1 *)(thing_ptr_2 + 0x38 + (int)thing) = arg_cl;
      *(undefined1 *)(thing_ptr_2 + 0x52 + (int)thing) = param_1; /* thing->health */
      return;
    }
    if ((int)arg_edx < (int)(uint)*(ushort *)(int_ptr + 1)) {
      local_14 = *thing;
      val = local_14 * 2 + (int)thing;
      thing_ptr = local_14 + (int)thing;
      while (thing_ptr_2 < local_14) {
        *(undefined2 *)(val + 4) = *(undefined2 *)(val + 2);
        *(undefined1 *)(thing_ptr + 0x38) = *(undefined1 *)(thing_ptr + 0x37);
        local_14 = local_14 + -1;
        val = val + -2;
        *(undefined1 *)(thing_ptr + 0x52) = *(undefined1 *)(thing_ptr + 0x51); /* thing->health */
        thing_ptr = thing_ptr + -1;
      }
      *(short *)((int)thing + thing_ptr_2 * 2 + 4) = (short)arg_edx;
      *(undefined1 *)(thing_ptr_2 + 0x38 + (int)thing) = arg_cl;
      *(undefined1 *)(thing_ptr_2 + 0x52 + (int)thing) = param_1; /* thing->health */
      goto LAB_0002d49f;
    }
    int_ptr = (int *)((int)int_ptr + 2);
    thing_ptr_2 = thing_ptr_2 + 1;
  } while( true );
}

/******************************************************************************
 * Function : file_fn_02d4a7 (Original VA: 0x2d4a7, Ghidra: FUN_0002d4a7)
 * Prototype: void file_fn_02d4a7(void);
 * Address  : 0x2d4a7 (Size: 158 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x02d4a7
 * Callers  : 1 -> frontend_fn_02d8e2
 * Callees  : 1 -> LbFileClose
 ******************************************************************************/
void file_fn_02d4a7(void)

{
  char *str_ptr;
  int *int_ptr;
  ushort *word_ptr;
  int *arg_eax;
  int *extraout_ECX;
  int arg_edx;
  int *int_ptr_2;
  int *thing_ptr;
  int local_18;
  
  local_18 = 0;
  int_ptr_2 = arg_eax;
  thing_ptr = arg_eax;
  while (local_18 < *arg_eax) {
    word_ptr = (ushort *)(int_ptr_2 + 1);
    str_ptr = (char *)((int)thing_ptr + 0x52); /* thing->health */
    int_ptr = thing_ptr + 0xe;
    local_18 = local_18 + 1;
    int_ptr_2 = (int *)((int)int_ptr_2 + 2);
    thing_ptr = (int *)((int)thing_ptr + 1);
    LbFileClose(arg_edx * g_frontnet_bss_00334634,
                 g_frontnet_bss_00334630 + (arg_edx + *str_ptr) * g_frontnet_bss_00334638 + (uint)*word_ptr +
                 (int)(char)*int_ptr);
    arg_eax = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : file_fn_02d545 (Original VA: 0x2d545, Ghidra: FUN_0002d545)
 * Prototype: void file_fn_02d545(void);
 * Address  : 0x2d545 (Size: 356 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x02d545
 * Callers  : 1 -> file_fn_02d861
 * Callees  : 1 -> bflib_system_io_fn_0e8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void file_fn_02d545(void)

{
  int *arg_eax;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int arg_ebx;
  int val_2;
  longdouble val_3;
  
  val_2 = arg_edx * 0x32;
  val = arg_ebx * 0x3c;
  if ((arg_edx & 1) != 0) {
    val = val + 0x1e;
  }
  *arg_eax = val_2 + -0x23;
  arg_eax[6] = val + 0x1e;
  arg_eax[1] = val_2 + -0xf;
  arg_eax[2] = val_2 + 0xf;
  arg_eax[7] = val;
  arg_eax[8] = val;
  arg_eax[3] = val_2 + 0x23;
  arg_eax[9] = val + 0x1e;
  arg_eax[4] = val_2 + 0xf;
  arg_eax[10] = val + 0x3c;
  arg_eax[0xb] = val + 0x3c;
  arg_eax[5] = val_2 + -0xf;
  do {
    val_3 = (longdouble)bflib_system_io_fn_0e8d50();
    *extraout_EDX = (int)ROUND(val_3);
    val_3 = (longdouble)bflib_system_io_fn_0e8d50();
    extraout_EDX_00[5] = (int)ROUND(val_3);
  } while (extraout_EDX_00 != arg_eax + 6);
  val_3 = (longdouble)bflib_system_io_fn_0e8d50();
  *(int *)(extraout_ECX + 0x30) = (int)ROUND(val_3);
  val_3 = (longdouble)bflib_system_io_fn_0e8d50();
  *(int *)(extraout_ECX_00 + 0x34) = (int)ROUND(val_3);
  return;
}

/******************************************************************************
 * Function : file_fn_02d6a9 (Original VA: 0x2d6a9, Ghidra: FUN_0002d6a9)
 * Prototype: void file_fn_02d6a9(void);
 * Address  : 0x2d6a9 (Size: 71 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x02d6a9
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0ea430
 ******************************************************************************/
void file_fn_02d6a9(void)

{
  int val;
  undefined1 *word_ptr;
  undefined4 auStack_24 [2];
  undefined1 local_1c [4];
  
  val = 0;
  word_ptr = local_1c;
  do {
    val = val + 1;
    *(undefined4 *)(word_ptr + -4) = 0xff;
    *(undefined4 *)(word_ptr + -8) = 0x2d6df;
    bflib_system_io_fn_0ea430();
    word_ptr = word_ptr + -4;
  } while (val < 6);
  return;
}

/******************************************************************************
 * Function : file_fn_02d6f0 (Original VA: 0x2d6f0, Ghidra: FUN_0002d6f0)
 * Prototype: undefined8 file_fn_02d6f0(void);
 * Address  : 0x2d6f0 (Size: 369 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x02d6f0
 * Callers  : 1 -> file_fn_02d861
 * Callees  : 1 -> file_fn_02d3f4
 ******************************************************************************/
undefined8 file_fn_02d6f0(void)

{
  int arg_eax;
  int val;
  int *int_ptr;
  undefined4 arg_edx;
  int val_2;
  int *int_ptr_2;
  int val_3;
  int **val_4;
  undefined1 *word_ptr;
  int loop_i;
  int *apiStack_48 [5];
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  val_3 = 0;
  val_2 = arg_eax;
  for (loop_i = 0; val = val_3 * 4 + arg_eax, loop_i < 6; loop_i = loop_i + 1) {
    if (*(int *)(val_2 + 0x18) < *(int *)(val + 0x18)) {
      val_3 = loop_i;
    }
    val_2 = val_2 + 4;
  }
  local_2c = *(int *)(val + 0x18);
  local_28 = (val_3 + 1) % 6;
  apiStack_48[4] = (int *)(local_2c * 0x6c);
  local_20 = 0;
  local_24 = 0;
  int_ptr = apiStack_48[4];
  val_2 = local_28;
  val_3 = (val_3 + 5) % 6;
  val_4 = apiStack_48 + 2;
  while( true ) {
    while (loop_i = val_3, local_20 == 0) {
      int_ptr = (int *)((local_28 + 5) / 6);
      local_28 = (local_28 + 5) % 6;
      if (val_2 == local_28) goto LAB_0002d6e9;
      loop_i = *(int *)(arg_eax + local_28 * 4);
      local_34 = loop_i * 0x10000;
      local_1c = 6;
      int_ptr = (int *)(arg_eax + ((local_28 + 5) % 6) * 4);
      local_20 = int_ptr[6] - *(int *)(arg_eax + 0x18 + local_28 * 4);
      if (0 < local_20) {
        apiStack_48[3] = (int *)((*int_ptr * 0x10000 + loop_i * -0x10000) / local_20);
        int_ptr = apiStack_48[3];
      }
    }
    while (local_24 == 0) {
      int_ptr = (int *)((loop_i + 1) / 6);
      loop_i = (loop_i + 1) % 6;
      if (loop_i == val_3) goto LAB_0002d6e9;
      int_ptr_2 = (int *)(((loop_i + 1) % 6) * 4 + arg_eax);
      local_24 = int_ptr_2[6] - *(int *)(arg_eax + 0x18 + loop_i * 4);
      val_2 = *(int *)(arg_eax + loop_i * 4);
      local_30 = (int *)(val_2 * 0x10000);
      int_ptr = local_30;
      if (0 < local_24) {
        int_ptr = (int *)((*int_ptr_2 * 0x10000 + val_2 * -0x10000) / local_24);
        apiStack_48[2] = int_ptr;
      }
    }
    if ((local_20 < 1) || (local_24 < 1)) break;
    word_ptr = (undefined1 *)val_4;
    if ((local_2c < g_frontnet_bss_00334640) && (-1 < local_2c)) {
      word_ptr = (undefined1 *)((int)val_4 + -4);
      *(undefined4 *)((int)val_4 + -4) = *(undefined4 *)(arg_eax + 0x34);
      *(undefined4 *)((int)val_4 + -8) = 0x2d843;
      file_fn_02d3f4();
    }
    local_20 = local_20 + -1;
    local_24 = local_24 + -1;
    apiStack_48[4] = apiStack_48[4] + 0x1b;
    local_34 = local_34 + (int)apiStack_48[3];
    local_2c = local_2c + 1;
    local_30 = (int *)((int)local_30 + (int)apiStack_48[2]);
    int_ptr = apiStack_48[2];
    val_2 = local_28;
    val_3 = loop_i;
    val_4 = (int **)word_ptr;
  }
LAB_0002d6e9:
  return CONCAT44(arg_edx,int_ptr);
}

/******************************************************************************
 * Function : file_fn_02d861 (Original VA: 0x2d861, Ghidra: FUN_0002d861)
 * Prototype: void file_fn_02d861(void);
 * Address  : 0x2d861 (Size: 129 bytes)
 * Module   : file.cpp [address_order_boundary_interpolation]
 * Purpose  : Module file.cpp procedure @ 0x02d861
 * Callers  : 1 -> eyelens_data_frac_dat_027130
 * Callees  : 2 -> file_fn_02d545, file_fn_02d6f0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void file_fn_02d861(void)

{
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  int val;
  int loop_i;
  
  g_frontnet_bss_00334644 = arg_eax >> 1;
  g_frontnet_bss_0033464c = g_bss_00333193;
  g_frontnet_bss_00334648 = arg_edx >> 1;
  val = 0;
  g_frontnet_bss_0033463c = arg_eax;
  g_frontnet_bss_00334640 = arg_edx;
  for (loop_i = 0; loop_i < g_frontnet_bss_00334640; loop_i = loop_i + 1) {
    *(undefined4 *)(val + g_frontnet_bss_0033464c) = 0;
    val = val + 0x6c;
  }
  val = -0xc;
  do {
    do {
      file_fn_02d545();
      file_fn_02d6f0();
    } while (extraout_ECX < 0xd);
    val = val + 1;
  } while (val < 0xd);
  return;
}

