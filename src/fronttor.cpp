/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: fronttor.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : fronttor_process_dungeon_room_0362e4 (Original VA: 0x362e4, Ghidra: FUN_000362e4)
 * Prototype: longlong fronttor_process_dungeon_room_0362e4(void);
 * Address  : 0x362e4 (Size: 98 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> frontnet_update_player_dungeon_035e3c, fronttor_update_player_dungeon_036346
 * Callees  : 0 -> 
 ******************************************************************************/
longlong fronttor_process_dungeon_room_0362e4(void)

{
  ushort dungeon_off;
  int room_ptr;
  int val;
  uint arg_edx;
  int val_2;
  int val_3;
  
  val = 0;
  val_2 = 0;
  val_3 = 0;
  do {
    dungeon_off = *(ushort *)(&g_bss_002e0594 + g_my_player_word._3_1_ * 0x1508 + val_3);
    while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
      val_2 = val_2 + 1;
      val = val + (uint)*(ushort *)(&g_bss_002ddd5a + room_ptr);
      dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
    }
    val_3 = val_3 + 2;
  } while (val_3 != 0x22);
  if (val_2 == 0) {
    return (ulonglong)arg_edx << 0x20;
  }
  return CONCAT44(arg_edx,(val * 100) / (val_2 << 8));
}

/******************************************************************************
 * Function : fronttor_update_player_dungeon_036346 (Original VA: 0x36346, Ghidra: FUN_00036346)
 * Prototype: undefined8 fronttor_update_player_dungeon_036346(void);
 * Address  : 0x36346 (Size: 132 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> frontnet_update_player_dungeon_035e3c
 * Callees  : 2 -> fronttor_process_dungeon_room_0362e4, fronttor_process_dungeon_room_0363ca
 ******************************************************************************/
undefined8 fronttor_update_player_dungeon_036346(void)

{
  int val;
  int val_2;
  undefined4 arg_edx;
  int dungeon_off;
  
  val = fronttor_process_dungeon_room_0363ca();
  val_2 = fronttor_process_dungeon_room_0362e4();
  dungeon_off = g_my_player_word._3_1_ * 0x1508;
  val = (val_2 * val) / 100 + (*(int *)(&g_bss_002e18a4 + dungeon_off) * 100) / 800;
  if (*(int *)(&g_bss_002e184c + dungeon_off) <= *(int *)(&g_bss_002e1850 + dungeon_off)) goto LAB_000363c2;
  if (*(int *)(&g_bss_002e1850 + dungeon_off) == 0) {
LAB_000363b0:
    val_2 = 100;
  }
  else {
    val_2 = *(int *)(&g_bss_002e184c + dungeon_off) / *(int *)(&g_bss_002e1850 + dungeon_off);
    if (val_2 < 10) {
      val_2 = 10;
    }
    else if (100 < val_2) goto LAB_000363b0;
  }
  val = val + (val_2 * val) / 100;
LAB_000363c2:
  return CONCAT44(arg_edx,val * 0x4b);
}

/******************************************************************************
 * Function : fronttor_process_dungeon_room_0363ca (Original VA: 0x363ca, Ghidra: FUN_000363ca)
 * Prototype: undefined8 fronttor_process_dungeon_room_0363ca(void);
 * Address  : 0x363ca (Size: 120 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> frontnet_update_player_dungeon_035e3c, fronttor_update_player_dungeon_036346
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 fronttor_process_dungeon_room_0363ca(void)

{
  ushort dungeon_off;
  int room_ptr;
  undefined4 arg_edx;
  int val;
  int val_2;
  
  val_2 = 0;
  val = 0;
  do {
    dungeon_off = *(ushort *)(&g_bss_002e0594 + g_my_player_word._3_1_ * 0x1508 + val);
    while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
      val_2 = val_2 + (uint)*(ushort *)(&g_bss_002ddd56 + room_ptr);
      dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
    }
    val = val + 2;
  } while (val != 0x22);
  if ((int)((ushort)(&g_bss_002e0ec6)[g_my_player_word._3_1_ * 0xa84] / 2) <= val_2) {
    return CONCAT44(arg_edx,100);
  }
  return CONCAT44(arg_edx,(val_2 * 100) /
                         (int)((ushort)(&g_bss_002e0ec6)[g_my_player_word._3_1_ * 0xa84] / 2));
}

/******************************************************************************
 * Function : fronttor_update_player_dungeon_036442 (Original VA: 0x36442, Ghidra: FUN_00036442)
 * Prototype: undefined8 fronttor_update_player_dungeon_036442(void);
 * Address  : 0x36442 (Size: 43 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> frontnet_update_player_dungeon_035e3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 fronttor_update_player_dungeon_036442(void)

{
  int dungeon_off;
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val = 1;
  val_2 = 0;
  do {
    dungeon_off = val + g_my_player_word._3_1_ * 0x1508;
    val = val + 1;
    val_2 = val_2 + (uint)(byte)(&g_bss_002e15a6)[dungeon_off];
  } while (val < 5);
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : fronttor_update_player_dungeon_03646d (Original VA: 0x3646d, Ghidra: FUN_0003646d)
 * Prototype: undefined8 fronttor_update_player_dungeon_03646d(void);
 * Address  : 0x3646d (Size: 43 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> frontnet_update_player_dungeon_035e3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 fronttor_update_player_dungeon_03646d(void)

{
  int dungeon_off;
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val = 1;
  val_2 = 0;
  do {
    dungeon_off = val + g_my_player_word._3_1_ * 0x1508;
    val = val + 1;
    val_2 = val_2 + (uint)(byte)(&g_bss_002e1591)[dungeon_off];
  } while (val < 7);
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : fronttor_fn_036498 (Original VA: 0x36498, Ghidra: FUN_00036498)
 * Prototype: undefined8 fronttor_fn_036498(void);
 * Address  : 0x36498 (Size: 66 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Module fronttor.cpp procedure @ 0x036498
 * Callers  : 1 -> frontnet_update_player_dungeon_035e3c
 * Callees  : 1 -> room_process_dungeon_room_0d003c
 ******************************************************************************/
undefined8 fronttor_fn_036498(void)

{
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  int val_2;
  
  val_2 = 1;
  val = 0;
  do {
    if ((val_2 != 1) && (val_2 != 7)) {
      val = room_process_dungeon_room_0d003c();
      val = extraout_ECX + val;
    }
    val_2 = val_2 + 1;
  } while (val_2 < 0x11);
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : fronttor_process_dungeon_room_0364da (Original VA: 0x364da, Ghidra: FUN_000364da)
 * Prototype: undefined8 fronttor_process_dungeon_room_0364da(void);
 * Address  : 0x364da (Size: 73 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> frontnet_update_player_dungeon_035e3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 fronttor_process_dungeon_room_0364da(void)

{
  ushort uval;
  int room_off;
  undefined4 arg_edx;
  int val;
  
  val = 0;
  uval = g_bss_002eb9e4;
  while (room_off = (uint)uval * 0x45, room_off != 0) {
    if ((int)(char)(&g_bss_002ddd1e)[room_off] == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]
       ) {
      val = val + 1;
    }
    uval = *(ushort *)(&g_bss_002ddd34 + room_off);
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : fronttor_fn_036523 (Original VA: 0x36523, Ghidra: FUN_00036523)
 * Prototype: undefined1 fronttor_fn_036523(void);
 * Address  : 0x36523 (Size: 305 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Module fronttor.cpp procedure @ 0x036523
 * Callers  : 2 -> frontnet_draw_text_overlay_036018, frontnet_draw_text_overlay_0360e8
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
undefined1 fronttor_fn_036523(void)

{
  byte *byte_ptr;
  undefined1 *word_ptr;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  val = (int)*(short *)(arg_eax + 0x1d);
  g_lb_display_draw_flags = 0;
  local_18 = g_frontnet_bss_00334728 + 0x96;
  local_24 = 0;
  do {
    watcom_crt_fn_13a710(val);
    local_24 = local_24 + 1;
    byte_ptr = (byte *)(local_18 + 4);
    local_18 = local_18 + 6;
    val = val + (uint)*byte_ptr;
    val_3 = extraout_ECX;
  } while (local_24 < 6);
  while (0 < arg_edx) {
    if (arg_edx < 3) {
      val_2 = 0x21;
    }
    else {
      val_2 = 0x28;
    }
    local_20 = 0;
    local_1c = g_frontnet_bss_00334728 + val_2 * 6;
    val_3 = (int)*(short *)(val_3 + 0x1d);
    do {
      watcom_crt_fn_13a710(val,val_3);
      local_20 = local_20 + 1;
      byte_ptr = (byte *)(local_1c + 4);
      local_1c = local_1c + 6;
      val_3 = val_3 + (uint)*byte_ptr;
    } while (local_20 < 6);
    if (arg_edx < 3) {
      val_3 = 1;
    }
    else {
      val_3 = 3;
    }
    arg_edx = arg_edx - val_3;
    val_3 = extraout_ECX_00;
  }
  local_28 = 0;
  val_3 = g_frontnet_bss_00334728 + 0x11a;
  do {
    local_28 = local_28 + 1;
    watcom_crt_fn_13a710(val);
    word_ptr = (undefined1 *)(val_3 + 4);
    val_3 = val_3 + 6;
  } while (local_28 < 6);
  return *word_ptr;
}

/******************************************************************************
 * Function : fronttor_ldata_fronttor_tab_036654 (Original VA: 0x36654, Ghidra: FUN_00036654)
 * Prototype: void fronttor_ldata_fronttor_tab_036654(void);
 * Address  : 0x36654 (Size: 839 bytes)
 * Module   : fronttor.cpp [direct_file_string_xref]
 * OrigLine : fronttor.cpp lines 252
 * Purpose  : String 'LDATA\FRONTTOR.TAB'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 12 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_fn_02f1c8, frontend_fn_02f1d2, prepare_file_path, LbErrorLog, LbScreenWaitVbi, dk_sprintf, LbDataLoadAll ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fronttor_ldata_fronttor_tab_036654(void)

{
  undefined4 uval;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int extraout_ECX_00;
  
  cdtest_ldata_dkwind00_dat_0150f0();
  frontend_fn_02f1c8();
  LbFileClose();
  val_3 = g_bss_002f2223;
  g_bss_003362d8 = g_bss_002f2223;
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_TORTURE_RAW_00164698,uval);
  val = bflib_system_io_fn_0e984c();
  g_bss_003362dc = val_3 + val;
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_TORTURE_PAL_001646af,uval);
  val_2 = bflib_system_io_fn_0e984c();
  val_2 = val_3 + val + val_2;
  prepare_file_path(1);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_DOOR_02d_DAT_001646c6,uval); /* 0x1646c6="%s\DOOR%02d.DAT" */
  val = bflib_system_io_fn_0e984c();
  val = val_2 + val;
  g_data_0017bd54 = val_2;
  g_data_0017bd58 = val;
  prepare_file_path(1);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_DOOR_02d_TAB_001646de,uval);
  g_data_0017bd50 = bflib_system_io_fn_0e984c();
  g_data_0017bd50 = val + g_data_0017bd50;
  val_3 = 1;
  val_2 = 0x1badec;
  g_data_0017bd4c = val;
  do {
    val_3 = val_3 + 1;
    prepare_file_path(val_3);
    uval = prepare_file_path();
    dk_sprintf(&g_log_sprintf_buf,s__s_DOOR_02d_DAT_001646f6,uval); /* 0x1646f6="%s\DOOR%02d.DAT" */
    val = bflib_system_io_fn_0e984c();
    *(int *)(&g_data_0017bd54 + extraout_ECX) = val_2;
    val_2 = val_2 + val;
    *(int *)(&g_data_0017bd58 + extraout_ECX) = val_2;
    prepare_file_path(val_3);
    uval = prepare_file_path();
    dk_sprintf(&g_log_sprintf_buf,s__s_DOOR_02d_TAB_0016470e,uval);
    val = bflib_system_io_fn_0e984c();
    *(int *)((int)&PTR_FUN_000362e1_0017bd20 + extraout_ECX_00) = val_2;
    val_2 = val_2 + val;
    *(int *)((int)&PTR_DAT_0017bd24 + extraout_ECX_00) = val_2; /* 0x17bd24="pb3" */
  } while (val_3 < 8);
  prepare_file_path(9);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_DOOR_02d_DAT_00164726,uval); /* 0x164726="%s\DOOR%02d.DAT" */
  val_3 = bflib_system_io_fn_0e984c();
  g_data_0017beb4 = &g_render_poly_buf_start;
  val_3 = (int)&g_render_poly_buf_start + val_3;
  g_data_0017beb8 = val_3;
  prepare_file_path(9);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_DOOR_02d_TAB_0016473e,uval);
  g_data_0017beb0 = bflib_system_io_fn_0e984c();
  g_data_0017beb0 = val_3 + g_data_0017beb0;
  g_data_0017beac = val_3;
  val_3 = LbDataLoadAll();
  if (val_3 != 0) {
    LbErrorLog(); /* LbErrorLog("fronttor.cpp", line 252, "Unable to load torture load files") */
  }
  bflib_system_io_fn_0f05f0();
  frontend_fn_02f1d2();
  LbFileClose();
  g_bss_003362f0 = 0;
  g_bss_003362f1 = 0xffffffff;
  g_bss_003362f5 = 0xffffffff;
  g_bss_003362f9 = 0;
  LbScreenWaitVbi();
  bflib_system_io_fn_0ebc10();
  g_bss_00336349 = 0;
  return;
}

/******************************************************************************
 * Function : fronttor_ldata_fronttor_tab_03699b (Original VA: 0x3699b, Ghidra: FUN_0003699b)
 * Prototype: void fronttor_ldata_fronttor_tab_03699b(void);
 * Address  : 0x3699b (Size: 41 bytes)
 * Module   : fronttor.cpp [contiguous_same_unit_span]
 * Purpose  : String 'LDATA\FRONTTOR.TAB'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 3 -> LbDataFree, LbFileClose, bflib_system_io_fn_0f0730
 ******************************************************************************/
void fronttor_ldata_fronttor_tab_03699b(void)

{
  LbDataFree();
  LbFileClose();
  bflib_system_io_fn_0f0730();
  return;
}

/******************************************************************************
 * Function : fronttor_fn_0369c4 (Original VA: 0x369c4, Ghidra: FUN_000369c4)
 * Prototype: void fronttor_fn_0369c4(void);
 * Address  : 0x369c4 (Size: 149 bytes)
 * Module   : fronttor.cpp [contiguous_same_unit_span]
 * Purpose  : Module fronttor.cpp procedure @ 0x0369c4
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 2 -> LbFileClose, watcom_crt_fn_13a710
 ******************************************************************************/
void fronttor_fn_0369c4(void)

{
  int loop_i;
  
  for (loop_i = 0; loop_i < g_screen_height; loop_i = loop_i + 1) {
    LbFileClose();
  }
  for (loop_i = 0; loop_i < g_data_0017bfc8; loop_i = loop_i + 1) {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : fronttor_LbNetwork_Exchange_036a59 (Original VA: 0x36a59, Ghidra: FUN_00036a59)
 * Prototype: void fronttor_LbNetwork_Exchange_036a59(void);
 * Address  : 0x36a59 (Size: 1017 bytes)
 * Module   : fronttor.cpp [direct_file_string_xref]
 * OrigLine : fronttor.cpp lines 376
 * Purpose  : References 'LbNetwork_Exchange failed'
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 7 -> frontend_load_frontend_palette_02e8a7, fronttor_fn_036e7e, get_scaled_viewport_bottom_y, LbErrorLog, LbScreenWaitVbi, LbNetwork_Stop_0edc70, LbNetwork_StartExchange_0ee694
 ******************************************************************************/
void fronttor_LbNetwork_Exchange_036a59(void)

{
  char net_status;
  undefined2 uval;
  int packet_off;
  undefined4 *word_ptr;
  uint uval_2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int loop_i;
  int val;
  int local_20;
  
  LbScreenWaitVbi();
  val = 0;
  uval_2 = 0;
  local_20 = 0;
  if ((&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef] == '\x01') {
    if (g_bss_0034b25c != '\0') {
      g_bss_0034b25c = '\0';
      g_bss_00336349 = 1;
    }
    if (((g_bss_003db535 != '\0') || (g_bss_003db518 != '\0')) || (g_bss_003db4fd != '\0')) {
      g_bss_003db535 = '\0';
      g_bss_003db518 = '\0';
      g_bss_003db4fd = '\0';
      (&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
           (&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (g_bss_00336349 != 0) {
      (&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
           (&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 2;
    }
    if (g_bss_0034b258 != '\0') {
      (&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
           (&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 4;
    }
    *(short *)(&g_packet_actn_par1 + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11) =
         (short)g_graphics_window_width * g_units_per_pixel;
    uval = get_scaled_viewport_bottom_y();
    *(undefined2 *)
     ((int)&g_packet_actn_par2 + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11) = uval;
    uval_2 = extraout_ECX;
  }
  if (((g_game_system_flags & 1) != 0) && (net_status = LbNetwork_StartExchange_0ee694(), uval_2 = extraout_ECX_00, net_status != '\0'))
  {
    LbErrorLog(); /* LbErrorLog("fronttor.cpp", line 376, "LbNetwork_Exchange failed") */
    uval_2 = extraout_ECX_01;
  }
  for (loop_i = 0; loop_i < 0x18ab; loop_i = loop_i + 0x4ef) {
    packet_off = (uint)(byte)(&g_player_packet_slot)[loop_i] * 0x11;
    if (((&g_packet_action_type)[packet_off] != '\0') && ((&g_bss_0019d0f1)[loop_i] == '\x01')) {
      uval_2 = (uint)(byte)(&g_packet_action_type)[packet_off];
      val = (int)*(short *)(&g_packet_actn_par1 + packet_off);
      local_20 = (int)*(short *)((int)&g_packet_actn_par2 + packet_off);
      break;
    }
  }
  if ((uval_2 & 1) == 0) {
    word_ptr = &g_data_0017bd34;
    for (loop_i = 0; packet_off = -1, loop_i < g_data_0017bfc8; loop_i = loop_i + 1) {
      if (((((int)word_ptr[2] <= val) && ((int)word_ptr[3] <= local_20)) &&
          (val < (int)(word_ptr[2] + word_ptr[4]))) && (local_20 < (int)(word_ptr[3] + word_ptr[5]))) {
        if ((g_bss_003362f1 == -1) || (loop_i == g_bss_003362f1)) {
          packet_off = loop_i;
        }
        break;
      }
      word_ptr = word_ptr + 0xb;
    }
    if (packet_off == -1) {
      g_bss_00336349 = 0;
    }
    if (g_bss_003362f0 == '\0') {
      if (packet_off != -1) {
        g_bss_003362f0 = '\x01';
        g_bss_003362fd = 3;
        g_bss_003362f5 = 7;
        g_bss_003362f9 = 1;
        g_bss_003362f1 = packet_off;
      }
    }
    else {
      if (g_bss_003362f0 == '\x01') {
        if (g_bss_003362fd != g_bss_003362f5) {
          return;
        }
        if (packet_off == -1) {
          g_bss_003362f0 = 2;
          g_bss_003362f5 = 4;
          g_bss_003362f9 = 0xffffffff;
          g_bss_003362fd = 8;
          return;
        }
        if ((uval_2 & 6) == 0) {
          return;
        }
        g_bss_00336349 = 0;
        g_bss_003362f0 = '\x03';
        g_bss_003362fd = 7;
        g_bss_003362f5 = 0xb;
        g_bss_003362f9 = 1;
      }
      else {
        if (g_bss_003362f0 == '\x02') {
          if (g_bss_003362fd != g_bss_003362f5) {
            return;
          }
          g_bss_003362f0 = 0;
          g_bss_003362f1 = 0xffffffff;
          return;
        }
        if (g_bss_003362f0 != '\x03') {
          if (g_bss_003362f0 != '\x04') {
            return;
          }
          if (g_bss_003362fd != g_bss_003362f5) {
            return;
          }
          g_bss_003362f0 = 1;
          g_bss_003362f5 = 7;
          g_bss_003362fd = 7;
          return;
        }
        if (g_bss_003362fd != g_bss_003362f5) {
          return;
        }
        if (((uval_2 & 4) != 0) && (packet_off != -1)) {
          return;
        }
        g_bss_003362f0 = '\x04';
        g_bss_003362fd = 0xc;
        g_bss_003362f5 = 8;
        g_bss_003362f9 = 0xffffffff;
      }
      fronttor_fn_036e7e();
    }
  }
  else {
    frontend_load_frontend_palette_02e8a7();
    if ((g_game_system_flags & 1) != 0) {
      LbNetwork_Stop_0edc70();
    }
  }
  return;
}

/******************************************************************************
 * Function : fronttor_fn_036e52 (Original VA: 0x36e52, Ghidra: FUN_00036e52)
 * Prototype: void fronttor_fn_036e52(void);
 * Address  : 0x36e52 (Size: 163 bytes)
 * Module   : fronttor.cpp [address_order_boundary_interpolation]
 * Purpose  : Module fronttor.cpp procedure @ 0x036e52
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 2 -> bflib_system_io_fn_0f0790, bflib_system_io_fn_0f0a54
 ******************************************************************************/
void fronttor_fn_036e52(void)

{
  int val;
  int val_2;
  
  if ((g_bss_003362f0 != '\0') && (g_bss_003362fd != g_bss_003362f5)) {
    g_bss_003362fd = g_bss_003362fd + g_bss_003362f9;
  }
  val_2 = 0;
  do {
    if (*(int *)((int)&g_bss_00336305 + val_2) != 0) {
      val = *(int *)((int)&g_bss_00336301 + val_2) + *(int *)((int)&g_bss_00336305 + val_2);
      if (val < 1) {
        val = 0;
        *(undefined4 *)((int)&g_bss_00336305 + val_2) = 0;
        bflib_system_io_fn_0f0a54();
      }
      else if (0x7e < val) {
        val = 0x7f;
        *(undefined4 *)((int)&g_bss_00336305 + val_2) = 0;
      }
      *(int *)((int)&g_bss_00336301 + val_2) = val;
      if (val != 0) {
        bflib_system_io_fn_0f0790();
      }
    }
    val_2 = val_2 + 8;
  } while (val_2 != 0x48);
  return;
}

/******************************************************************************
 * Function : fronttor_fn_036e7e (Original VA: 0x36e7e, Ghidra: FUN_00036e7e)
 * Prototype: void fronttor_fn_036e7e(void);
 * Address  : 0x36e7e (Size: 82 bytes)
 * Module   : fronttor.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module fronttor.cpp procedure @ 0x036e7e
 * Callers  : 1 -> fronttor_LbNetwork_Exchange_036a59
 * Callees  : 1 -> sndheap_trying_use_two_sound_06e159
 ******************************************************************************/
void fronttor_fn_036e7e(void)

{
  int arg_eax;
  int arg_edx;
  
  if (arg_edx != 0) {
    sndheap_trying_use_two_sound_06e159(100,0xffffffff,2,0);
    *(undefined4 *)(&g_bss_00336301 + arg_eax * 4) = 0;
    (&g_bss_00336305)[arg_eax * 2] = 0x10;
    return;
  }
  (&g_bss_00336305)[arg_eax * 2] = 0xfffffff0;
  return;
}

