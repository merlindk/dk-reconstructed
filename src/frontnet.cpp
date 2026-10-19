/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: frontnet.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 129
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : frontnet_fn_032f12 (Original VA: 0x32f12, Ghidra: FUN_00032f12)
 * Prototype: undefined4 frontnet_fn_032f12(void);
 * Address  : 0x32f12 (Size: 71 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontnet.cpp procedure @ 0x032f12
 * Callers  : 1 -> frontmap_fn_032e00
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 frontnet_fn_032f12(void)

{
  int *arg_eax;
  int val;
  int *arg_edx;
  int val_2;
  int val_3;
  int val_4;
  
  val_2 = *arg_eax;
  if (val_2 <= *arg_edx) {
    val_2 = *arg_edx;
  }
  val_3 = arg_eax[1];
  if (val_3 <= arg_edx[1]) {
    val_3 = arg_edx[1];
  }
  val_4 = arg_eax[2];
  if (arg_edx[2] <= val_4) {
    val_4 = arg_edx[2];
  }
  val = arg_eax[3];
  if (arg_edx[3] <= val) {
    val = arg_edx[3];
  }
  if ((val_2 < val_4) && (val_3 < val)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : frontnet_fn_032f5c (Original VA: 0x32f5c, Ghidra: FUN_00032f5c)
 * Prototype: bool frontnet_fn_032f5c(void);
 * Address  : 0x32f5c (Size: 14 bytes)
 * Module   : frontnet.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module frontnet.cpp procedure @ 0x032f5c
 * Callers  : 2 -> frontnet_LbNetwork_Exchange_035758, packet_update_pause_mode_state
 * Callees  : 0 -> 
 ******************************************************************************/
bool frontnet_fn_032f5c(void)

{
  return g_frontnet_selected_service_idx < 2;
}

/******************************************************************************
 * Function : frontnet_fn_032f6a (Original VA: 0x32f6a, Ghidra: FUN_00032f6a)
 * Prototype: longlong frontnet_fn_032f6a(void);
 * Address  : 0x32f6a (Size: 49 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontnet.cpp procedure @ 0x032f6a
 * Callers  : 1 -> frontend_fn_02f541
 * Callees  : 0 -> 
 ******************************************************************************/
longlong frontnet_fn_032f6a(void)

{
  uint arg_eax;
  int val;
  uint arg_edx;
  
  val = 0;
  while( true ) {
    if (g_frontnet_bss_003358eb * 0xe <= val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((byte)(&g_frontnet_bss_00335373)[val] == arg_eax) break;
    val = val + 0xe;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : frontnet_levelnamefile_add_blank_line_032f9b (Original VA: 0x32f9b, Ghidra: FUN_00032f9b)
 * Prototype: void frontnet_levelnamefile_add_blank_line_032f9b(void);
 * Address  : 0x32f9b (Size: 241 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 288
 * Purpose  : String 'LevelNameFile, Add a blank line at the end'
 * Callers  : 2 -> frontmap_ldata_netflag_dat_031a51, frontnet_LbNetwork_EnumerateServices_033ead
 * Callees  : 2 -> frontnet_fn_0330ae, LbErrorLog
 ******************************************************************************/
void frontnet_levelnamefile_add_blank_line_032f9b(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  char *str_ptr;
  int local_10;
  
  g_frontnet_bss_003358eb = 0;
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  str_ptr = g_bss_0033400d;
  while( true ) {
    if (99 < g_frontnet_bss_003358eb) {
      return;
    }
    val = frontnet_fn_0330ae();
    if (local_10 == 0) break;
    (&g_frontnet_bss_00335373)[g_frontnet_bss_003358eb * 0xe] = (undefined1)local_10;
    val_2 = frontnet_fn_0330ae();
    (&g_frontnet_bss_00335374)[g_frontnet_bss_003358eb * 0xe] = (undefined1)local_10;
    val_3 = frontnet_fn_0330ae();
    *(int *)((int)&g_frontnet_bss_00335375 + g_frontnet_bss_003358eb * 0xe) = local_10;
    val_4 = frontnet_fn_0330ae();
    val_5 = g_frontnet_bss_003358eb * 0xe;
    str_ptr = str_ptr + val_4 + val_3 + val_2 + val;
    *(int *)((int)&g_frontnet_bss_00335379 + val_5) = local_10;
    *(char **)((int)&g_frontnet_bss_0033537d + val_5) = str_ptr;
    while (*str_ptr != '\n') {
      if (*str_ptr == '\r') {
        *str_ptr = '\0';
      }
      str_ptr = str_ptr + 1;
      if (g_bss_00334011 <= str_ptr) {
        g_frontnet_bss_003358eb = g_frontnet_bss_003358eb + 1;
        LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 288, "LevelNameFile, Add a blank line at the end") */
        return;
      }
    }
    g_frontnet_bss_003358eb = g_frontnet_bss_003358eb + 1;
    str_ptr = str_ptr + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03308c (Original VA: 0x3308c, Ghidra: FUN_0003308c)
 * Prototype: uint frontnet_fn_03308c(void);
 * Address  : 0x3308c (Size: 34 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03308c
 * Callers  : 4 -> frontnet_fn_033c3a, frontnet_LbNetwork_Exchange_035758, frontnet_fn_035c86, packet_resync_network_game_state
 * Callees  : 0 -> 
 ******************************************************************************/
uint frontnet_fn_03308c(void)

{
  int arg_eax;
  int arg_edx;
  
  if (arg_eax == arg_edx) {
    return 1;
  }
  return *(uint *)(&g_data_0017b8c8 + arg_eax * 0x10 + arg_edx * 4) & (int)g_frontnet_bss_00335322;
}

/******************************************************************************
 * Function : frontnet_fn_0330ae (Original VA: 0x330ae, Ghidra: FUN_000330ae)
 * Prototype: int frontnet_fn_0330ae(void);
 * Address  : 0x330ae (Size: 50 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0330ae
 * Callers  : 1 -> frontnet_levelnamefile_add_blank_line_032f9b
 * Callees  : 1 -> dk_atoi
 ******************************************************************************/
int frontnet_fn_0330ae(void)

{
  char *arg_eax;
  int val;
  int *int_ptr;
  undefined8 uval;
  
  uval = dk_atoi();
  int_ptr = (int *)((ulonglong)uval >> 0x20);
  val = 0;
  *int_ptr = (int)uval;
  while (((&g_data_0017469c)[(byte)(*arg_eax + 1)] & 0x20) != 0) {
    arg_eax = arg_eax + 1;
    val = val + 1;
  }
  if (*int_ptr == 0) {
    val = 0;
  }
  else {
    val = val + 1;
  }
  return val;
}

/******************************************************************************
 * Function : frontnet_fn_0330e0 (Original VA: 0x330e0, Ghidra: FUN_000330e0)
 * Prototype: void frontnet_fn_0330e0(void);
 * Address  : 0x330e0 (Size: 118 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0330e0
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_fn_0330e0(void)

{
  byte *gui_btn;
  int val;
  
  if ((*gui_btn & 8) == 0) {
    val = 0;
  }
  else if ((*(int *)(gui_btn + 0x33) == 0) || (g_frontnet_bss_00334738 != *(int *)(gui_btn + 0x33))) { /* gui_btn->content */
    if ((*(int *)(gui_btn + 0x33) == 0x11) || /* gui_btn->content */
       ((*(int *)(gui_btn + 0x33) == 0x24 || (*(int *)(gui_btn + 0x33) == 0x26)))) { /* gui_btn->content */
      val = 0x1f;
    }
    else {
      val = 0x35;
    }
  }
  else if (((g_frontnet_bss_00334738 == 0x11) || (g_frontnet_bss_00334738 == 0x24)) || (g_frontnet_bss_00334738 == 0x26)) {
    val = 0x20;
  }
  else {
    val = 0x36;
  }
  if (val != 0) {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033156 (Original VA: 0x33156, Ghidra: FUN_00033156)
 * Prototype: undefined8 frontnet_fn_033156(void);
 * Address  : 0x33156 (Size: 5 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033156
 * Callers  : 5 -> frontend_why_are_we_here_02dfac, frontnet_LbNetwork_Stop_033bfb, frontnet_LbNetwork_Exchange_035758, frontnet_LbNetwork_Stop_035d29, frontnet_fn_036223
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 frontnet_fn_033156(void)

{
  char net_status;
  int extraout_ECX;
  undefined *word_ptr;
  undefined4 uval;
  undefined4 uval_2;
  
  if (g_frontnet_selected_service_idx == 0) {
    word_ptr = &g_frontnet_bss_00335ddb;
  }
  else {
    if (g_frontnet_selected_service_idx != 1) {
      uval = 4;
      g_bss_0019d0ba = g_bss_0019d0ba & 0xef;
      word_ptr = (undefined *)0x0;
      goto LAB_0003319f;
    }
    word_ptr = &g_frontnet_bss_00335dfb;
  }
  uval = 2;
  g_bss_0019d0ba = g_bss_0019d0ba | 0x10;
LAB_0003319f:
  LbScreenWaitVbi();
  uval_2 = g_data_0017b8c0;
  net_status = LbNetwork_Init_0ed4e0(g_data_0017b8b8,g_data_0017b8bc,g_data_0017b8c0,g_data_0017b8c4,uval,&g_frontnet_bss_003358ef,0xc,
                       &g_frontnet_bss_00335218,word_ptr);
  if (net_status == '\0') {
    g_frontnet_selected_service_idx = extraout_ECX;
    if ((g_bss_0019d0ba & 0x10) != 0) {
      bflib_system_io_fn_0ed034();
    }
    frontend_load_frontend_palette_02e8a7();
    uval = 1;
  }
  else {
    if (extraout_ECX != 0) {
      frontnet_fn_03325d();
    }
    uval = 0;
  }
  return CONCAT44(uval_2,uval);
}

/******************************************************************************
 * Function : frontnet_fn_03315b (Original VA: 0x3315b, Ghidra: FUN_0003315b)
 * Prototype: undefined8 frontnet_fn_03315b(void);
 * Address  : 0x3315b (Size: 200 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03315b
 * Callers  : 2 -> frontnet_fn_034070, frontnet_isdn_supported_serial_03442b
 * Callees  : 5 -> frontend_load_frontend_palette_02e8a7, frontnet_fn_03325d, LbScreenWaitVbi, bflib_system_io_fn_0ed034, LbNetwork_Init_0ed4e0
 ******************************************************************************/
undefined8 frontnet_fn_03315b(void)

{
  char net_status;
  int arg_eax;
  int extraout_ECX;
  undefined *word_ptr;
  undefined4 uval;
  undefined4 uval_2;
  
  if (arg_eax == 0) {
    word_ptr = &g_frontnet_bss_00335ddb;
  }
  else {
    if (arg_eax != 1) {
      uval = 4;
      g_bss_0019d0ba = g_bss_0019d0ba & 0xef;
      word_ptr = (undefined *)0x0;
      goto LAB_0003319f;
    }
    word_ptr = &g_frontnet_bss_00335dfb;
  }
  uval = 2;
  g_bss_0019d0ba = g_bss_0019d0ba | 0x10;
LAB_0003319f:
  LbScreenWaitVbi();
  uval_2 = g_data_0017b8c0;
  net_status = LbNetwork_Init_0ed4e0(g_data_0017b8b8,g_data_0017b8bc,g_data_0017b8c0,g_data_0017b8c4,uval,&g_frontnet_bss_003358ef,0xc,
                       &g_frontnet_bss_00335218,word_ptr);
  if (net_status == '\0') {
    g_frontnet_selected_service_idx = extraout_ECX;
    if ((g_bss_0019d0ba & 0x10) != 0) {
      bflib_system_io_fn_0ed034();
    }
    frontend_load_frontend_palette_02e8a7();
    uval = 1;
  }
  else {
    if (extraout_ECX != 0) {
      frontnet_fn_03325d();
    }
    uval = 0;
  }
  return CONCAT44(uval_2,uval);
}

/******************************************************************************
 * Function : frontnet_fn_033223 (Original VA: 0x33223, Ghidra: FUN_00033223)
 * Prototype: void frontnet_fn_033223(void);
 * Address  : 0x33223 (Size: 46 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033223
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Control flow encountered bad instruction data */

void frontnet_fn_033223(void)

{
  byte flag;
  byte flag_2;
  int arg_eax;
  char *str_ptr;
  int *int_ptr;
  char *arg_ecx;
  int *arg_edx;
  byte *arg_ebx;
  int unaff_ESI;
  byte in_AF;
  
  *(int *)arg_ebx = *(int *)arg_ebx - arg_eax;
  flag_2 = *arg_ebx;
  flag = (byte)arg_eax;
  *arg_ebx = *arg_ebx - flag;
  str_ptr = (char *)(CONCAT31((int3)((uint)arg_eax >> 8),
                             flag + (9 < (flag & 0xf) | in_AF) * '\x06' +
                             (0x99 < flag || flag_2 < flag) * '`') + *arg_edx);
  flag_2 = (byte)str_ptr;
  *arg_ecx = *arg_ecx + flag_2;
  *str_ptr = *str_ptr + flag_2;
  flag_2 = flag_2 ^ *arg_ebx;
  int_ptr = (int *)CONCAT31((int3)(CONCAT22((short)((uint)str_ptr >> 0x10),
                                           CONCAT11((char)((uint)str_ptr >> 8) + (char)arg_ecx + flag_2
                                                    ,flag_2)) >> 8),flag_2 ^ *arg_ebx);
  str_ptr = (char *)((int)arg_edx + unaff_ESI + 0x32b40003);
  *str_ptr = *str_ptr + (char)((uint)arg_ebx >> 8);
  str_ptr = (char *)((int)arg_edx + unaff_ESI + 0x32840004);
  *str_ptr = *str_ptr + (char)((uint)((int)int_ptr + *int_ptr) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/******************************************************************************
 * Function : frontnet_fn_03325d (Original VA: 0x3325d, Ghidra: FUN_0003325d)
 * Prototype: void frontnet_fn_03325d(void);
 * Address  : 0x3325d (Size: 64 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 467
 * Purpose  : Module frontnet.cpp procedure @ 0x03325d
 * Callers  : 3 -> frontnet_fn_03315b, frontnet_fn_0349d9, frontnet_fn_034a8a
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void frontnet_fn_03325d(void)

{
  short short_val;
  int arg_eax;
  int val;
  code *str_ptr;
  
  if (0x329 < arg_eax + 0x322U) {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 467, "Unknown modem error") */
    return;
  }
  val = 10;
  str_ptr = frontnet_fn_033223;
  do {
    if (val == 0) break;
    val = val + -1;
    short_val = *(short *)str_ptr;
    str_ptr = str_ptr + 2;
  } while ((short)(arg_eax + 0x322U) != short_val);
                    /* WARNING: Could not recover jumptable at 0x0003327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val * 4 + 0x33235))();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033350 (Original VA: 0x33350, Ghidra: FUN_00033350)
 * Prototype: undefined8 frontnet_fn_033350(void);
 * Address  : 0x33350 (Size: 531 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033350
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
undefined8 frontnet_fn_033350(void)

{
  bool flag;
  int gui_btn;
  int val;
  uint uval;
  undefined4 arg_edx;
  int val_2;
  int local_38;
  int local_34;
  int local_30;
  
  uval = *(uint *)(gui_btn + 0x33); /* gui_btn->content */
  if (0x58 < uval) {
    if (uval < 0x5a) {
      val_2 = 3;
    }
    else {
      if (0x5a < uval) {
        if (uval < 0x5c) {
          val_2 = 4;
        }
        else {
          if (uval != 0x5e) goto LAB_000333ba;
          val_2 = 10;
        }
        goto LAB_00033380;
      }
      val_2 = 4;
    }
    flag = false;
    goto LAB_000333bf;
  }
  if (uval < 0x19) {
    if (uval != 0x18) {
LAB_000333ba:
      val_2 = 0;
      flag = false;
      goto LAB_000333bf;
    }
    val_2 = 2;
  }
  else if (uval < 0x1a) {
    val_2 = 3;
  }
  else {
    if (uval != 0x1a) goto LAB_000333ba;
    val_2 = 7;
  }
LAB_00033380:
  flag = true;
LAB_000333bf:
  local_38 = 0;
  do {
    watcom_crt_fn_13a710();
    local_38 = local_38 + 1;
  } while (local_38 < 6);
  if (flag) {
    watcom_crt_fn_13a710();
  }
  for (; 0 < val_2; val_2 = val_2 - val) {
    local_30 = 0;
    do {
      watcom_crt_fn_13a710();
      local_30 = local_30 + 1;
    } while (local_30 < 6);
    if (flag) {
      watcom_crt_fn_13a710();
    }
    if (val_2 < 3) {
      val = 1;
    }
    else {
      val = 3;
    }
  }
  local_34 = 0;
  val_2 = g_frontnet_bss_00334728 + 0x11a;
  do {
    local_34 = local_34 + 1;
    watcom_crt_fn_13a710();
    uval = (uint)*(byte *)(val_2 + 4);
    val_2 = val_2 + 6;
  } while (local_34 < 6);
  if (flag) {
    uval = watcom_crt_fn_13a710();
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : frontnet_button_type_033563 (Original VA: 0x33563, Ghidra: FUN_00033563)
 * Prototype: void frontnet_button_type_033563(void);
 * Address  : 0x33563 (Size: 556 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 580
 * Purpose  : String 'Unknown button type'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_button_type_033563(void)

{
  uint uval;
  int gui_btn;
  int val;
  int local_1c;
  
  uval = *(uint *)(gui_btn + 0x33); /* gui_btn->content */
  if (uval < 0x19) {
    if (uval != 0x18) {
LAB_0003359d:
      LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 580, "Unknown button type") */
      return;
    }
    local_1c = 2;
  }
  else if (uval < 0x1a) {
    local_1c = 3;
  }
  else {
    if (uval != 0x1a) goto LAB_0003359d;
    local_1c = 7;
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  for (; 0 < local_1c; local_1c = local_1c - val) {
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    if (local_1c < 3) {
      val = 1;
    }
    else {
      val = 3;
    }
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : frontnet_draw_text_overlay_03378f (Original VA: 0x3378f, Ghidra: FUN_0003378f)
 * Prototype: uint frontnet_draw_text_overlay_03378f(void);
 * Address  : 0x3378f (Size: 153 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 2 -> frontnet_fn_034ea2, frontnet_update_player_view_state_035137
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, watcom_crt_fn_13a710
 ******************************************************************************/
uint frontnet_draw_text_overlay_03378f(void)

{
  uint uval;
  int arg_edx;
  int arg_ebx;
  int val;
  int local_14;
  
  local_14 = 0;
  val = g_frontnet_bss_00334728 + 0x14a;
  do {
    local_14 = local_14 + 1;
    watcom_crt_fn_13a710();
    uval = (uint)*(byte *)(val + 4);
    val = val + 6;
  } while (local_14 < 6);
  if (arg_ebx != 0) {
    g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + arg_edx * 4);
    g_lb_display_draw_flags = 0;
    LbTextDraw();
    uval = LbTextDrawFormatted();
  }
  return uval;
}

/******************************************************************************
 * Function : frontnet_draw_text_overlay_033828 (Original VA: 0x33828, Ghidra: FUN_00033828)
 * Prototype: void frontnet_draw_text_overlay_033828(void);
 * Address  : 0x33828 (Size: 213 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 2 -> frontnet_fn_0343a4, frontnet_fn_0343d7
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_draw_text_overlay_033828(void)

{
  int arg_edx;
  int arg_ebx;
  
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  if (arg_ebx != 0) {
    g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + arg_edx * 4);
    g_lb_display_draw_flags = 0;
    LbTextDraw();
    LbTextDrawFormatted();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0338fd (Original VA: 0x338fd, Ghidra: FUN_000338fd)
 * Prototype: void frontnet_fn_0338fd(void);
 * Address  : 0x338fd (Size: 26 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0338fd
 * Callers  : 0 -> 
 * Callees  : 1 -> frontend_fn_02f1dc
 ******************************************************************************/
void frontnet_fn_0338fd(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033917 (Original VA: 0x33917, Ghidra: FUN_00033917)
 * Prototype: void frontnet_fn_033917(void);
 * Address  : 0x33917 (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033917
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_033917(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033928 (Original VA: 0x33928, Ghidra: FUN_00033928)
 * Prototype: void frontnet_fn_033928(void);
 * Address  : 0x33928 (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033928
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_033928(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033939 (Original VA: 0x33939, Ghidra: FUN_00033939)
 * Prototype: void frontnet_fn_033939(void);
 * Address  : 0x33939 (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033939
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_033939(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03394a (Original VA: 0x3394a, Ghidra: FUN_0003394a)
 * Prototype: void frontnet_fn_03394a(void);
 * Address  : 0x3394a (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03394a
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_03394a(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03395b (Original VA: 0x3395b, Ghidra: FUN_0003395b)
 * Prototype: void frontnet_fn_03395b(void);
 * Address  : 0x3395b (Size: 17 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03395b
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_03395b(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03396c (Original VA: 0x3396c, Ghidra: FUN_0003396c)
 * Prototype: void frontnet_fn_03396c(void);
 * Address  : 0x3396c (Size: 115 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03396c
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_fn_03396c(void)

{
  int val;
  
  watcom_crt_fn_13a710();
  val = 0;
  do {
    watcom_crt_fn_13a710();
    val = val + 1;
  } while (val < 4);
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0339df (Original VA: 0x339df, Ghidra: FUN_000339df)
 * Prototype: void frontnet_fn_0339df(void);
 * Address  : 0x339df (Size: 101 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0339df
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_fn_0339df(void)

{
  int val;
  
  watcom_crt_fn_13a710();
  val = 0;
  do {
    watcom_crt_fn_13a710();
    val = val + 1;
  } while (val < 4);
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033a44 (Original VA: 0x33a44, Ghidra: FUN_00033a44)
 * Prototype: void frontnet_fn_033a44(void);
 * Address  : 0x33a44 (Size: 131 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033a44
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_fn_033a44(void)

{
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033ac7 (Original VA: 0x33ac7, Ghidra: FUN_00033ac7)
 * Prototype: void frontnet_fn_033ac7(void);
 * Address  : 0x33ac7 (Size: 149 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033ac7
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_fn_033ac7(void)

{
  g_lb_display_draw_flags = 2;
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  g_lb_display_draw_flags = 0;
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033b5c (Original VA: 0x33b5c, Ghidra: FUN_00033b5c)
 * Prototype: void frontnet_fn_033b5c(void);
 * Address  : 0x33b5c (Size: 112 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033b5c
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_fn_033b5c(void)

{
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : frontnet_LbNetwork_Stop_033bcc (Original VA: 0x33bcc, Ghidra: FUN_00033bcc)
 * Prototype: void frontnet_LbNetwork_Stop_033bcc(void);
 * Address  : 0x33bcc (Size: 47 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 811
 * Purpose  : References 'LbNetwork_Stop() failed'
 * Callers  : 0 -> 
 * Callees  : 3 -> frontend_load_frontend_palette_02e8a7, LbErrorLog, LbNetwork_Stop_0edc70
 ******************************************************************************/
void frontnet_LbNetwork_Stop_033bcc(void)

{
  char net_status;
  
  net_status = LbNetwork_Stop_0edc70();
  if (net_status != '\0') {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 811, "LbNetwork_Stop() failed") */
    return;
  }
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontnet_LbNetwork_Stop_033bfb (Original VA: 0x33bfb, Ghidra: FUN_00033bfb)
 * Prototype: void frontnet_LbNetwork_Stop_033bfb(void);
 * Address  : 0x33bfb (Size: 63 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 821
 * Purpose  : References 'LbNetwork_Stop() failed'
 * Callers  : 0 -> 
 * Callees  : 4 -> frontend_load_frontend_palette_02e8a7, frontnet_fn_033156, LbErrorLog, LbNetwork_Stop_0edc70
 ******************************************************************************/
void frontnet_LbNetwork_Stop_033bfb(void)

{
  char net_status;
  
  net_status = LbNetwork_Stop_0edc70();
  if (net_status != '\0') {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 821, "LbNetwork_Stop() failed") */
    return;
  }
  frontnet_fn_033156();
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033c3a (Original VA: 0x33c3a, Ghidra: FUN_00033c3a)
 * Prototype: void frontnet_fn_033c3a(void);
 * Address  : 0x33c3a (Size: 67 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033c3a
 * Callers  : 0 -> 
 * Callees  : 2 -> frontnet_fn_03308c, watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_fn_033c3a(void)

{
  frontnet_fn_03308c();
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033c7d (Original VA: 0x33c7d, Ghidra: FUN_00033c7d)
 * Prototype: undefined8 frontnet_fn_033c7d(void);
 * Address  : 0x33c7d (Size: 266 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033c7d
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
undefined8 frontnet_fn_033c7d(void)

{
  short short_val;
  int thing;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 arg_edx;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int local_1c;
  
  val_6 = 0;
  short_val = *(short *)(thing + 0x1f); /* thing->class_id */
  val = (int)*(short *)(thing + 0x1d);
  do {
    watcom_crt_fn_13a710((int)short_val / (int)(uint)g_units_per_pixel);
    val_6 = val_6 + 1;
    val = val + (uint)*(byte *)(extraout_ECX + 4);
  } while (val_6 < 4);
  val_4 = 0;
  val_3 = (int)short_val + (uint)*(byte *)(extraout_ECX + 5);
  do {
    val_2 = (int)*(short *)(thing + 0x1d);
    local_1c = 0;
    do {
      watcom_crt_fn_13a710(val_3 / (int)(uint)g_units_per_pixel);
      local_1c = local_1c + 1;
      val_2 = val_2 + (uint)*(byte *)(extraout_ECX_00 + 4);
    } while (local_1c < 4);
    val_4 = val_4 + 1;
    val_3 = val_3 + (uint)*(byte *)(extraout_ECX_00 + 5);
  } while (val_4 < 2);
  val_5 = 0;
  do {
    watcom_crt_fn_13a710(val_3 / (int)(uint)g_units_per_pixel,val_4,val_5,val_2,val_6,val);
    val_5 = val_5 + 1;
  } while (val_5 < 4);
  return CONCAT44(arg_edx,(uint)*(byte *)(extraout_ECX_01 + 4));
}

/******************************************************************************
 * Function : frontnet_fn_033d87 (Original VA: 0x33d87, Ghidra: FUN_00033d87)
 * Prototype: undefined8 frontnet_fn_033d87(void);
 * Address  : 0x33d87 (Size: 294 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033d87
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
undefined8 frontnet_fn_033d87(void)

{
  uint uval;
  undefined4 arg_edx;
  
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  uval = g_frontnet_bss_00334728;
  if (0 < g_frontnet_player_count) {
    watcom_crt_fn_13a710();
    uval = (uint)*(byte *)(g_frontnet_bss_00334728 + 0x1f6);
  }
  if (1 < g_frontnet_player_count) {
    watcom_crt_fn_13a710();
    uval = (uint)*(byte *)(g_frontnet_bss_00334728 + 0x1f6);
  }
  if (2 < g_frontnet_player_count) {
    watcom_crt_fn_13a710();
    uval = (uint)*(byte *)(g_frontnet_bss_00334728 + 0x1f6);
  }
  if (3 < g_frontnet_player_count) {
    uval = watcom_crt_fn_13a710();
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : frontnet_LbNetwork_EnumerateServices_033ead (Original VA: 0x33ead, Ghidra: FUN_00033ead)
 * Prototype: void frontnet_LbNetwork_EnumerateServices_033ead(void);
 * Address  : 0x33ead (Size: 121 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 941
 * Purpose  : References 'LbNetwork_EnumerateServices() failed'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 6 -> frontnet_levelnamefile_add_blank_line_032f9b, frontnet_save_config_net_035b51, LbErrorLog, LbScreenWaitVbi, LbMemoryCopy, lbnet_fn_0ed0e8
 ******************************************************************************/
void frontnet_LbNetwork_EnumerateServices_033ead(void)

{
  char net_status;
  
  g_frontnet_service_count = 0;
  LbScreenWaitVbi();
  net_status = lbnet_fn_0ed0e8();
  if (net_status != '\0') {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 941, "LbNetwork_EnumerateServices() failed") */
  }
  if (g_bss_0019d0bb != '\0') {
    g_frontnet_service_count = g_frontnet_service_count + 1;
    LbMemoryCopy();
  }
  frontnet_levelnamefile_add_blank_line_032f9b();
  frontnet_save_config_net_035b51();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_033f26 (Original VA: 0x33f26, Ghidra: FUN_00033f26)
 * Prototype: void frontnet_fn_033f26(void);
 * Address  : 0x33f26 (Size: 49 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x033f26
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_033f26(void)

{
  if ((g_frontnet_service_count == 0) || (g_frontnet_service_scroll_offset < 0)) {
    g_frontnet_service_scroll_offset = 0;
  }
  else if (g_frontnet_service_count + -1 < g_frontnet_service_scroll_offset) {
    g_frontnet_service_scroll_offset = g_frontnet_service_count + -1;
    return;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_033f57 (Original VA: 0x33f57, Ghidra: FUN_00033f57)
 * Prototype: void frontnet_draw_gui_button_label_033f57(void);
 * Address  : 0x33f57 (Size: 136 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontnet_draw_gui_button_label_033f57(void)

{
  int gui_btn;
  uint uval;
  
  if (*(int *)(gui_btn + 0x33) + g_frontnet_service_scroll_offset + -0x2d < g_frontnet_service_count) { /* gui_btn->content */
    uval = (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3]; /* gui_btn->content */
    if ((*(int *)(gui_btn + 0x33) != 0) && (g_frontnet_bss_00334738 == *(int *)(gui_btn + 0x33))) { /* gui_btn->content */
      uval = 2;
    }
    g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + uval * 4);
    g_lb_display_draw_flags = 0x20;
    LbTextDraw();
    LbTextDrawFormatted();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_service_scroll_btn_033fdf (Original VA: 0x33fdf, Ghidra: FUN_00033fdf)
 * Prototype: void frontnet_maintain_service_scroll_btn_033fdf(void);
 * Address  : 0x33fdf (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from service scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_service_scroll_btn_033fdf(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = *(int *)(gui_btn + 0x33) + g_frontnet_service_scroll_offset + -0x2d < g_frontnet_service_count; /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_service_scroll_btn_033ff7 (Original VA: 0x33ff7, Ghidra: FUN_00033ff7)
 * Prototype: void frontnet_maintain_service_scroll_btn_033ff7(void);
 * Address  : 0x33ff7 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from service scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_service_scroll_btn_033ff7(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_service_scroll_offset != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_service_scroll_btn_034004 (Original VA: 0x34004, Ghidra: FUN_00034004)
 * Prototype: void frontnet_maintain_service_scroll_btn_034004(void);
 * Address  : 0x34004 (Size: 30 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from service scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_service_scroll_btn_034004(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_service_scroll_offset < g_frontnet_service_count + -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034022 (Original VA: 0x34022, Ghidra: FUN_00034022)
 * Prototype: void frontnet_fn_034022(void);
 * Address  : 0x34022 (Size: 78 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034022
 * Callers  : 0 -> 
 * Callees  : 1 -> frontend_load_frontend_palette_02e8a7
 ******************************************************************************/
void frontnet_fn_034022(void)

{
  int gui_btn;
  int val;
  int val_2;
  
  val = *(int *)(gui_btn + 0x33) + g_frontnet_service_scroll_offset; /* gui_btn->content */
  val_2 = val + -0x2d;
  if ((g_bss_0019d0bb == '\0') || (val_2 != g_frontnet_service_count + -1)) {
    if ((val != 0x2d) && (val_2 != 1)) {
      frontnet_fn_03315b();
      return;
    }
  }
  else {
    g_frontnet_bss_0033591f = 0;
  }
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034070 (Original VA: 0x34070, Ghidra: FUN_00034070)
 * Prototype: void frontnet_fn_034070(void);
 * Address  : 0x34070 (Size: 7 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034070
 * Callers  : 1 -> frontnet_fn_0345fd
 * Callees  : 1 -> frontnet_fn_03315b
 ******************************************************************************/
void frontnet_fn_034070(void)

{
  frontnet_fn_03315b();
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_service_list_up_034077 (Original VA: 0x34077, Ghidra: FUN_00034077)
 * Prototype: void frontnet_scroll_service_list_up_034077(void);
 * Address  : 0x34077 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Decrements network service list scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_service_list_up_034077(void)

{
  if (g_frontnet_service_scroll_offset != 0) {
    g_frontnet_service_scroll_offset = g_frontnet_service_scroll_offset + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_service_list_down_034087 (Original VA: 0x34087, Ghidra: FUN_00034087)
 * Prototype: void frontnet_scroll_service_list_down_034087(void);
 * Address  : 0x34087 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Increments network service list scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_service_list_down_034087(void)

{
  if (g_frontnet_service_scroll_offset < g_frontnet_service_count + -1) {
    g_frontnet_service_scroll_offset = g_frontnet_service_scroll_offset + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03409c (Original VA: 0x3409c, Ghidra: FUN_0003409c)
 * Prototype: void frontnet_fn_03409c(void);
 * Address  : 0x3409c (Size: 105 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03409c
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 3 -> frontnet_save_config_net_035b51, dk_sprintf, LbMemoryCopy
 ******************************************************************************/
void frontnet_fn_03409c(void)

{
  frontnet_save_config_net_035b51();
  g_frontnet_selected_com_port = (int)g_data_0017b908;
  g_frontnet_selected_baud_rate = (int)g_data_0017b911;
  g_frontnet_com_port_count = 4;
  if (g_frontnet_selected_com_port == -1) {
    LbMemoryCopy();
  }
  else {
    dk_sprintf(&g_frontnet_bss_003352bc,&g_data_001643fa,(&g_data_0017b909)[g_frontnet_selected_com_port]);
  }
  g_frontnet_bss_00336087 = 7;
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034105 (Original VA: 0x34105, Ghidra: FUN_00034105)
 * Prototype: void frontnet_fn_034105(void);
 * Address  : 0x34105 (Size: 129 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034105
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_034105(void)

{
  if (g_frontnet_com_port_scroll_offset < 0) {
    g_frontnet_com_port_scroll_offset = 0;
  }
  else if (g_frontnet_com_port_count + -1 < g_frontnet_com_port_scroll_offset) {
    g_frontnet_com_port_scroll_offset = g_frontnet_com_port_count + -1;
  }
  if (g_frontnet_bss_00335e23 < 0) {
    g_frontnet_bss_00335e23 = 0;
  }
  else if (g_frontnet_bss_00336087 + -1 < g_frontnet_bss_00335e23) {
    g_frontnet_bss_00335e23 = g_frontnet_bss_00336087 + -1;
  }
  if (g_frontnet_bss_00336087 + -1 < g_frontnet_selected_baud_rate) {
    g_frontnet_selected_baud_rate = -1;
  }
  if (g_frontnet_com_port_count + -1 < g_frontnet_selected_com_port) {
    g_frontnet_selected_com_port = -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_com_port_up_034186 (Original VA: 0x34186, Ghidra: FUN_00034186)
 * Prototype: void frontnet_scroll_com_port_up_034186(void);
 * Address  : 0x34186 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Decrements COM port scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_com_port_up_034186(void)

{
  if (g_frontnet_com_port_scroll_offset != 0) {
    g_frontnet_com_port_scroll_offset = g_frontnet_com_port_scroll_offset + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_com_port_down_034196 (Original VA: 0x34196, Ghidra: FUN_00034196)
 * Prototype: void frontnet_scroll_com_port_down_034196(void);
 * Address  : 0x34196 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Increments COM port scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_com_port_down_034196(void)

{
  if (g_frontnet_com_port_scroll_offset < g_frontnet_com_port_count + -1) {
    g_frontnet_com_port_scroll_offset = g_frontnet_com_port_scroll_offset + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0341ab (Original VA: 0x341ab, Ghidra: FUN_000341ab)
 * Prototype: void frontnet_fn_0341ab(void);
 * Address  : 0x341ab (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0341ab
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_0341ab(void)

{
  if (g_frontnet_bss_00335e23 != 0) {
    g_frontnet_bss_00335e23 = g_frontnet_bss_00335e23 + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0341bb (Original VA: 0x341bb, Ghidra: FUN_000341bb)
 * Prototype: void frontnet_fn_0341bb(void);
 * Address  : 0x341bb (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0341bb
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_0341bb(void)

{
  if (g_frontnet_bss_00335e23 < g_frontnet_bss_00336087 + -1) {
    g_frontnet_bss_00335e23 = g_frontnet_bss_00335e23 + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_0341d0 (Original VA: 0x341d0, Ghidra: FUN_000341d0)
 * Prototype: void frontnet_maintain_gui_button_state_0341d0(void);
 * Address  : 0x341d0 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_0341d0(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_com_port_scroll_offset != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_0341dd (Original VA: 0x341dd, Ghidra: FUN_000341dd)
 * Prototype: void frontnet_maintain_gui_button_state_0341dd(void);
 * Address  : 0x341dd (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_0341dd(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_com_port_scroll_offset < g_frontnet_com_port_count + -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_0341f0 (Original VA: 0x341f0, Ghidra: FUN_000341f0)
 * Prototype: void frontnet_maintain_gui_button_state_0341f0(void);
 * Address  : 0x341f0 (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_0341f0(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = *(int *)(gui_btn + 0x33) + g_frontnet_com_port_scroll_offset + -0x2d < g_frontnet_com_port_count; /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034208 (Original VA: 0x34208, Ghidra: FUN_00034208)
 * Prototype: void frontnet_fn_034208(void);
 * Address  : 0x34208 (Size: 57 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034208
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
void frontnet_fn_034208(void)

{
  int gui_btn;
  int val;
  int val_2;
  
  val = *(int *)(gui_btn + 0x33) + g_frontnet_com_port_scroll_offset; /* gui_btn->content */
  val_2 = val + -0x2d;
  if (val_2 < g_frontnet_com_port_count) {
    g_data_0017b908 = (undefined1)val_2;
    g_frontnet_selected_com_port = val_2;
    dk_sprintf(&g_frontnet_bss_003352bc,&g_data_001643ff,(&g_data_0017b8dc)[val]);
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_034241 (Original VA: 0x34241, Ghidra: FUN_00034241)
 * Prototype: void frontnet_maintain_gui_button_state_034241(void);
 * Address  : 0x34241 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_034241(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_bss_00335e23 != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_03424e (Original VA: 0x3424e, Ghidra: FUN_0003424e)
 * Prototype: void frontnet_maintain_gui_button_state_03424e(void);
 * Address  : 0x3424e (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_03424e(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_bss_00335e23 < g_frontnet_bss_00336087 + -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_034261 (Original VA: 0x34261, Ghidra: FUN_00034261)
 * Prototype: void frontnet_maintain_gui_button_state_034261(void);
 * Address  : 0x34261 (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_034261(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = *(int *)(gui_btn + 0x33) + g_frontnet_bss_00335e23 + -0x2f < g_frontnet_bss_00336087; /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034279 (Original VA: 0x34279, Ghidra: FUN_00034279)
 * Prototype: void frontnet_fn_034279(void);
 * Address  : 0x34279 (Size: 31 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034279
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_034279(void)

{
  int gui_btn;
  int val;
  
  val = *(int *)(gui_btn + 0x33) + g_frontnet_bss_00335e23 + -0x2f; /* gui_btn->content */
  if (val < g_frontnet_bss_00336087) {
    g_data_0017b911 = (undefined1)val;
    g_frontnet_selected_baud_rate = val;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_034298 (Original VA: 0x34298, Ghidra: FUN_00034298)
 * Prototype: void frontnet_draw_gui_button_label_034298(void);
 * Address  : 0x34298 (Size: 134 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontnet_draw_gui_button_label_034298(void)

{
  int gui_btn;
  uint uval;
  
  if (*(int *)(gui_btn + 0x33) + g_frontnet_com_port_scroll_offset + -0x2d < g_frontnet_com_port_count) { /* gui_btn->content */
    uval = (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3]; /* gui_btn->content */
    if ((*(int *)(gui_btn + 0x33) != 0) && (g_frontnet_bss_00334738 == *(int *)(gui_btn + 0x33))) { /* gui_btn->content */
      uval = 2;
    }
    g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + uval * 4);
    g_lb_display_draw_flags = 0;
    LbTextDraw();
    LbTextDrawFormatted();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_03431e (Original VA: 0x3431e, Ghidra: FUN_0003431e)
 * Prototype: void frontnet_draw_gui_button_label_03431e(void);
 * Address  : 0x3431e (Size: 134 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontnet_draw_gui_button_label_03431e(void)

{
  int gui_btn;
  uint uval;
  
  if (*(int *)(gui_btn + 0x33) + g_frontnet_bss_00335e23 + -0x2f < g_frontnet_bss_00336087) { /* gui_btn->content */
    uval = (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3]; /* gui_btn->content */
    if ((*(int *)(gui_btn + 0x33) != 0) && (g_frontnet_bss_00334738 == *(int *)(gui_btn + 0x33))) { /* gui_btn->content */
      uval = 2;
    }
    g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + uval * 4);
    g_lb_display_draw_flags = 0;
    LbTextDraw();
    LbTextDrawFormatted();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0343a4 (Original VA: 0x343a4, Ghidra: FUN_000343a4)
 * Prototype: void frontnet_fn_0343a4(void);
 * Address  : 0x343a4 (Size: 51 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0343a4
 * Callers  : 0 -> 
 * Callees  : 1 -> frontnet_draw_text_overlay_033828
 ******************************************************************************/
void frontnet_fn_0343a4(void)

{
  frontnet_draw_text_overlay_033828();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0343d7 (Original VA: 0x343d7, Ghidra: FUN_000343d7)
 * Prototype: void frontnet_fn_0343d7(void);
 * Address  : 0x343d7 (Size: 51 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0343d7
 * Callers  : 0 -> 
 * Callees  : 1 -> frontnet_draw_text_overlay_033828
 ******************************************************************************/
void frontnet_fn_0343d7(void)

{
  frontnet_draw_text_overlay_033828();
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_03440a (Original VA: 0x3440a, Ghidra: FUN_0003440a)
 * Prototype: void frontnet_maintain_gui_button_state_03440a(void);
 * Address  : 0x3440a (Size: 33 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_03440a(void)

{
  byte *gui_btn;
  char ch;
  
  if ((g_frontnet_selected_com_port == -1) || (g_frontnet_selected_baud_rate == -1)) {
    ch = '\0';
  }
  else {
    ch = '\x01';
  }
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | ch << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_isdn_supported_serial_03442b (Original VA: 0x3442b, Ghidra: FUN_0003442b)
 * Prototype: void frontnet_isdn_supported_serial_03442b(void);
 * Address  : 0x3442b (Size: 157 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 1260
 * Purpose  : String 'ISDN not supported by Serial'
 * Callers  : 0 -> 
 * Callees  : 4 -> frontnet_fn_03315b, LbErrorLog, dk_stricmp, bflib_system_io_fn_0f0964
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontnet_isdn_supported_serial_03442b(void)

{
  int val;
  
  g_frontnet_bss_00335ddb = (int)g_data_0017b908;
  val = dk_stricmp();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 1260, "ISDN not supported by Serial") */
  }
  else {
    g_frontnet_bss_00335ddf = bflib_system_io_fn_0f0964();
  }
  g_frontnet_bss_00335def = 0;
  g_frontnet_bss_00335deb = 0;
  g_frontnet_bss_00335de3 = (uint)(byte)(&g_data_0017b909)[g_data_0017b908];
  g_frontnet_bss_00335df3 = 0;
  g_frontnet_bss_00335df7 = 0;
  frontnet_fn_03315b();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0344c8 (Original VA: 0x344c8, Ghidra: FUN_000344c8)
 * Prototype: void frontnet_fn_0344c8(void);
 * Address  : 0x344c8 (Size: 180 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0344c8
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 3 -> frontnet_save_config_net_035b51, dk_sprintf, LbMemoryCopy
 ******************************************************************************/
void frontnet_fn_0344c8(void)

{
  frontnet_save_config_net_035b51();
  g_frontnet_selected_com_port = (int)g_data_0017b908;
  g_frontnet_selected_baud_rate = (int)g_data_0017b911;
  g_frontnet_com_port_count = 4;
  if (g_frontnet_selected_com_port == -1) {
    LbMemoryCopy();
  }
  else {
    dk_sprintf(&g_frontnet_bss_003352bc,&g_data_00164431,(&g_data_0017b909)[g_frontnet_selected_com_port]);
  }
  g_frontnet_bss_00336087 = 8;
  LbMemoryCopy();
  LbMemoryCopy();
  LbMemoryCopy();
  LbMemoryCopy();
  LbMemoryCopy();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03457c (Original VA: 0x3457c, Ghidra: FUN_0003457c)
 * Prototype: void frontnet_fn_03457c(void);
 * Address  : 0x3457c (Size: 129 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03457c
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_03457c(void)

{
  if (g_frontnet_com_port_scroll_offset < 0) {
    g_frontnet_com_port_scroll_offset = 0;
  }
  else if (g_frontnet_com_port_count + -1 < g_frontnet_com_port_scroll_offset) {
    g_frontnet_com_port_scroll_offset = g_frontnet_com_port_count + -1;
  }
  if (g_frontnet_bss_00335e23 < 0) {
    g_frontnet_bss_00335e23 = 0;
  }
  else if (g_frontnet_bss_00336087 + -1 < g_frontnet_bss_00335e23) {
    g_frontnet_bss_00335e23 = g_frontnet_bss_00336087 + -1;
  }
  if (g_frontnet_bss_00336087 + -1 < g_frontnet_selected_baud_rate) {
    g_frontnet_selected_baud_rate = -1;
  }
  if (g_frontnet_com_port_count + -1 < g_frontnet_selected_com_port) {
    g_frontnet_selected_com_port = -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0345fd (Original VA: 0x345fd, Ghidra: FUN_000345fd)
 * Prototype: void frontnet_fn_0345fd(void);
 * Address  : 0x345fd (Size: 146 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0345fd
 * Callers  : 0 -> 
 * Callees  : 3 -> frontnet_fn_034070, dk_stricmp, bflib_system_io_fn_0f0964
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontnet_fn_0345fd(void)

{
  int val;
  
  g_frontnet_bss_00335dfb = (int)g_data_0017b908;
  val = dk_stricmp();
  if (val == 0) {
    g_frontnet_bss_00335dff = 0x1c200;
  }
  else {
    g_frontnet_bss_00335dff = bflib_system_io_fn_0f0964();
  }
  g_frontnet_bss_00335e0b = &g_data_0017b912; /* 0x17b912="ATZ" */
  g_frontnet_bss_00335e0f = &g_data_0017b926; /* 0x17b926="ATDT" */
  g_frontnet_bss_00335e03 = (uint)(byte)(&g_data_0017b909)[g_data_0017b908];
  g_frontnet_bss_00335e13 = &g_data_0017b93a; /* 0x17b93a="ATH" */
  g_frontnet_bss_00335e17 = s_ATS0_1_0017b94e;
  frontnet_fn_034070();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03468f (Original VA: 0x3468f, Ghidra: FUN_0003468f)
 * Prototype: void frontnet_fn_03468f(void);
 * Address  : 0x3468f (Size: 79 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03468f
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 1 -> LbMemoryCopy
 ******************************************************************************/
void frontnet_fn_03468f(void)

{
  if (g_frontnet_bss_003359b3 == '\0') {
    LbMemoryCopy();
    LbMemoryCopy();
  }
  g_frontnet_selected_session_idx = 0xffffffff;
  g_frontnet_bss_003359af = 0xffffffff;
  g_frontnet_bss_00334a4c = 2;
  g_bss_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : frontnet_LbNetwork_EnumerateSessions_0346de (Original VA: 0x346de, Ghidra: FUN_000346de)
 * Prototype: void frontnet_LbNetwork_EnumerateSessions_0346de(void);
 * Address  : 0x346de (Size: 433 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 1401
 * Purpose  : References 'LbNetwork_EnumerateSessions() failed'
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 4 -> LbErrorLog, LbScreenWaitVbi, LbNetwork_EnumerateSessions_0edd8c, LbNetwork_EnumeratePlayers_0eddf0
 ******************************************************************************/
void frontnet_LbNetwork_EnumerateSessions_0346de(void)

{
  int val;
  char net_status;
  int val_2;
  int val_3;
  
  g_frontnet_session_count = 0;
  LbScreenWaitVbi();
  net_status = LbNetwork_EnumerateSessions_0edd8c();
  if (net_status != '\0') {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 1401, "LbNetwork_EnumerateSessions() failed") */
  }
  if (g_frontnet_session_count == 0) {
    g_frontnet_selected_session_idx = -1;
  }
  else {
    if (g_frontnet_selected_session_idx == -1) goto LAB_000347b0;
    if ((g_frontnet_session_count <= g_frontnet_selected_session_idx) ||
       (val = g_frontnet_selected_session_idx, *(int *)((&g_frontnet_bss_00335923)[g_frontnet_selected_session_idx] + 1) != g_frontnet_bss_003359af)) {
      g_frontnet_selected_session_idx = -1;
      val_3 = 0;
      val_2 = 0;
      while ((val = g_frontnet_selected_session_idx, val_2 < g_frontnet_session_count * 4 &&
             (val = val_3, g_frontnet_bss_003359af != *(int *)(*(int *)((int)&g_frontnet_bss_00335923 + val_2) + 1)))) {
        val_2 = val_2 + 4;
        val_3 = val_3 + 1;
      }
    }
    g_frontnet_selected_session_idx = val;
    if (g_frontnet_selected_session_idx != -1) goto LAB_000347b0;
  }
  g_frontnet_bss_003359af = -1;
LAB_000347b0:
  if ((g_frontnet_session_count == 0) || (g_frontnet_session_scroll_offset < 0)) {
    g_frontnet_session_scroll_offset = 0;
  }
  else if (g_frontnet_session_count + -1 < g_frontnet_session_scroll_offset) {
    g_frontnet_session_scroll_offset = g_frontnet_session_count + -1;
  }
  if (((g_frontnet_selected_session_idx == -1) || (g_frontnet_selected_service_idx == 0)) || (g_frontnet_selected_service_idx == 1)) {
    g_frontnet_player_count = 0;
  }
  else {
    g_frontnet_player_count = 0;
    LbScreenWaitVbi();
    net_status = LbNetwork_EnumeratePlayers_0eddf0();
    if (net_status != '\0') {
      g_frontnet_selected_session_idx = 0xffffffff;
      g_frontnet_bss_003359af = 0xffffffff;
      return;
    }
  }
  if ((g_frontnet_player_count == 0) || (g_frontnet_player_scroll_offset < 0)) {
    g_frontnet_player_scroll_offset = 0;
  }
  else if (g_frontnet_player_count + -1 < g_frontnet_player_scroll_offset) {
    g_frontnet_player_scroll_offset = g_frontnet_player_count + -1;
    return;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_03488f (Original VA: 0x3488f, Ghidra: FUN_0003488f)
 * Prototype: void frontnet_draw_gui_button_label_03488f(void);
 * Address  : 0x3488f (Size: 137 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontnet_draw_gui_button_label_03488f(void)

{
  int gui_btn;
  uint uval;
  
  if (*(int *)(gui_btn + 0x33) + g_frontnet_session_scroll_offset + -0x2d < g_frontnet_session_count) { /* gui_btn->content */
    uval = (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3]; /* gui_btn->content */
    if ((*(int *)(gui_btn + 0x33) != 0) && (g_frontnet_bss_00334738 == *(int *)(gui_btn + 0x33))) { /* gui_btn->content */
      uval = 2;
    }
    g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + uval * 4);
    g_lb_display_draw_flags = 0;
    LbTextDraw();
    LbTextDrawFormatted();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034918 (Original VA: 0x34918, Ghidra: FUN_00034918)
 * Prototype: void frontnet_fn_034918(void);
 * Address  : 0x34918 (Size: 41 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034918
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_fn_034918(void)

{
  int gui_btn;
  int val;
  
  val = *(int *)(gui_btn + 0x33) + g_frontnet_session_scroll_offset + -0x2d; /* gui_btn->content */
  if (val < g_frontnet_session_count) {
    g_frontnet_bss_003359af = *(undefined4 *)((&g_frontnet_bss_00335923)[val] + 1);
    g_frontnet_selected_session_idx = val;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_session_scroll_btn_034941 (Original VA: 0x34941, Ghidra: FUN_00034941)
 * Prototype: void frontnet_maintain_session_scroll_btn_034941(void);
 * Address  : 0x34941 (Size: 24 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from session scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_session_scroll_btn_034941(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = *(int *)(gui_btn + 0x33) + g_frontnet_session_scroll_offset + -0x2d < g_frontnet_session_count; /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_session_scroll_btn_034959 (Original VA: 0x34959, Ghidra: FUN_00034959)
 * Prototype: void frontnet_maintain_session_scroll_btn_034959(void);
 * Address  : 0x34959 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from session scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_session_scroll_btn_034959(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_session_scroll_offset != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_session_scroll_btn_034966 (Original VA: 0x34966, Ghidra: FUN_00034966)
 * Prototype: void frontnet_maintain_session_scroll_btn_034966(void);
 * Address  : 0x34966 (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from session scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_session_scroll_btn_034966(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_session_scroll_offset < g_frontnet_session_count + -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_session_list_up_034979 (Original VA: 0x34979, Ghidra: FUN_00034979)
 * Prototype: void frontnet_scroll_session_list_up_034979(void);
 * Address  : 0x34979 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Decrements network session list scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_session_list_up_034979(void)

{
  if (g_frontnet_session_scroll_offset != 0) {
    g_frontnet_session_scroll_offset = g_frontnet_session_scroll_offset + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_session_list_down_034989 (Original VA: 0x34989, Ghidra: FUN_00034989)
 * Prototype: void frontnet_scroll_session_list_down_034989(void);
 * Address  : 0x34989 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Increments network session list scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_session_list_down_034989(void)

{
  if (g_frontnet_session_scroll_offset < g_frontnet_session_count + -1) {
    g_frontnet_session_scroll_offset = g_frontnet_session_scroll_offset + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_gui_button_state_03499e (Original VA: 0x3499e, Ghidra: FUN_0003499e)
 * Prototype: void frontnet_maintain_gui_button_state_03499e(void);
 * Address  : 0x3499e (Size: 59 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_gui_button_state_03499e(void)

{
  byte *gui_btn;
  bool flag;
  
  if (g_frontnet_selected_service_idx == 1) {
    if ((g_frontnet_selected_session_idx == -1) || (g_data_0017b962 == '\0')) {
      flag = false;
    }
    else {
      flag = true;
    }
  }
  else {
    flag = g_frontnet_selected_session_idx != -1;
  }
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0349d9 (Original VA: 0x349d9, Ghidra: FUN_000349d9)
 * Prototype: void frontnet_fn_0349d9(void);
 * Address  : 0x349d9 (Size: 177 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0349d9
 * Callers  : 0 -> 
 * Callees  : 6 -> frontend_load_frontend_palette_02e8a7, frontend_update_player_view_state_02f18a, frontnet_fn_03325d, frontnet_fn_035e19, LbMemoryCopy, LbNetwork_Join_0eda20
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontnet_fn_0349d9(void)

{
  char net_status;
  
  if ((g_frontnet_selected_service_idx == 0) || (g_frontnet_selected_service_idx != 1)) {
    frontnet_fn_035e19();
  }
  else {
    g_frontnet_bss_0033608b = 0;
    g_frontnet_bss_0033608f = 0;
    LbMemoryCopy();
    g_frontnet_bss_00336137 = frontnet_fn_035c1e;
    g_frontnet_bss_0033613b = frontnet_fn_035c5a;
  }
  net_status = LbNetwork_Join_0eda20();
  if (net_status == '\0') {
    frontend_update_player_view_state_02f18a();
    frontend_load_frontend_palette_02e8a7();
  }
  else {
    frontnet_fn_03325d();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034a8a (Original VA: 0x34a8a, Ghidra: FUN_00034a8a)
 * Prototype: void frontnet_fn_034a8a(void);
 * Address  : 0x34a8a (Size: 300 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034a8a
 * Callers  : 0 -> 
 * Callees  : 7 -> frontend_update_player_view_state_02f18a, frontnet_fn_03325d, dk_sprintf, LbMemoryCopy, dk_stricmp, LbNetwork_Create_0ed84c, bflib_system_io_fn_0f09d1
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontnet_fn_034a8a(void)

{
  char net_status;
  undefined1 *word_ptr;
  int val;
  int val_2;
  int extraout_ECX;
  int val_3;
  int loop_i;
  
  val_2 = 0;
  val_3 = 0;
  for (loop_i = 0; loop_i < g_frontnet_session_count; loop_i = loop_i + 1) {
    dk_sprintf(&g_log_sprintf_buf,*(int *)((int)&g_frontnet_bss_00335923 + val_3) + 9);
    word_ptr = (undefined1 *)bflib_system_io_fn_0f09d1();
    if (word_ptr != (undefined1 *)0x0) {
      *word_ptr = 0;
    }
    val = dk_stricmp();
    val_2 = extraout_ECX;
    if (val == 0) {
      val_2 = extraout_ECX + 1;
    }
    val_3 = val_3 + 4;
  }
  if (val_2 == 0) {
    LbMemoryCopy();
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__s___d__0016446d,&g_frontnet_bss_003359b3,val_2 + 1);
  }
  if ((g_frontnet_selected_service_idx != 0) && (g_frontnet_selected_service_idx == 1)) {
    g_frontnet_bss_0033608b = 0;
    g_frontnet_bss_0033608f = 0;
    LbMemoryCopy();
    g_frontnet_bss_00336137 = frontnet_fn_035c1e;
    g_frontnet_bss_0033613b = frontnet_fn_035c5a;
  }
  net_status = LbNetwork_Create_0ed84c();
  if (net_status == '\0') {
    frontend_update_player_view_state_02f18a();
    g_frontnet_bss_00334a4c = 0;
    frontend_load_frontend_palette_02e8a7();
  }
  else {
    frontnet_fn_03325d();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_copy_state_struct_034bb6 (Original VA: 0x34bb6, Ghidra: FUN_00034bb6)
 * Prototype: void frontnet_copy_state_struct_034bb6(void);
 * Address  : 0x34bb6 (Size: 38 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 0 -> 
 * Callees  : 2 -> frontnet_save_config_net_035bbf, LbMemoryCopy
 ******************************************************************************/
void frontnet_copy_state_struct_034bb6(void)

{
  LbMemoryCopy();
  LbMemoryCopy();
  frontnet_save_config_net_035bbf();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034bdc (Original VA: 0x34bdc, Ghidra: FUN_00034bdc)
 * Prototype: void frontnet_fn_034bdc(void);
 * Address  : 0x34bdc (Size: 35 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034bdc
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_atoi
 ******************************************************************************/
void frontnet_fn_034bdc(void)

{
  undefined1 uval;
  
  if (g_frontnet_selected_com_port != -1) {
    uval = dk_atoi();
    (&g_data_0017b909)[g_frontnet_selected_com_port] = uval;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_copy_state_struct_034bff (Original VA: 0x34bff, Ghidra: FUN_00034bff)
 * Prototype: void frontnet_copy_state_struct_034bff(void);
 * Address  : 0x34bff (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_copy_state_struct_034bff(void)

{
  LbMemoryCopy();
  return;
}

/******************************************************************************
 * Function : frontnet_copy_state_struct_034c0f (Original VA: 0x34c0f, Ghidra: FUN_00034c0f)
 * Prototype: void frontnet_copy_state_struct_034c0f(void);
 * Address  : 0x34c0f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_copy_state_struct_034c0f(void)

{
  LbMemoryCopy();
  return;
}

/******************************************************************************
 * Function : frontnet_copy_state_struct_034c1f (Original VA: 0x34c1f, Ghidra: FUN_00034c1f)
 * Prototype: void frontnet_copy_state_struct_034c1f(void);
 * Address  : 0x34c1f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_copy_state_struct_034c1f(void)

{
  LbMemoryCopy();
  return;
}

/******************************************************************************
 * Function : frontnet_copy_state_struct_034c2f (Original VA: 0x34c2f, Ghidra: FUN_00034c2f)
 * Prototype: void frontnet_copy_state_struct_034c2f(void);
 * Address  : 0x34c2f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_copy_state_struct_034c2f(void)

{
  LbMemoryCopy();
  return;
}

/******************************************************************************
 * Function : frontnet_copy_state_struct_034c3f (Original VA: 0x34c3f, Ghidra: FUN_00034c3f)
 * Prototype: void frontnet_copy_state_struct_034c3f(void);
 * Address  : 0x34c3f (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_copy_state_struct_034c3f(void)

{
  LbMemoryCopy();
  return;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_034c4f (Original VA: 0x34c4f, Ghidra: FUN_00034c4f)
 * Prototype: void frontnet_draw_gui_button_label_034c4f(void);
 * Address  : 0x34c4f (Size: 311 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_draw_gui_button_label_034c4f(void)

{
  int gui_btn;
  undefined *word_ptr;
  uint uval;
  int val;
  int val_2;
  int local_20;
  int local_1c;
  
  g_lb_current_font_ptr = *(int *)(&g_frontnet_bss_003346e4 +
                         (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3] * 4); /* gui_btn->content */
  local_20 = g_frontnet_player_scroll_offset;
  g_lb_display_draw_flags = 0;
  word_ptr = &g_frontnet_bss_00335323 + g_frontnet_player_scroll_offset * 0x14;
  local_1c = 0;
LAB_00034d61:
  if (((int)(uint)*(ushort *)(gui_btn + 0x27) <= local_1c) || (g_frontnet_player_count <= local_20)) {
    return;
  }
  val_2 = 0;
  val = 0;
  do {
    if ((g_frontnet_player_count <= val_2) || (0x8f < val)) break;
    if (*(int *)((int)&g_frontnet_bss_00335238 + val) != 0) {
      if (val_2 == local_20) break;
      val_2 = val_2 + 1;
    }
    val = val + 0x24;
  } while( true );
  watcom_crt_fn_13a710(word_ptr);
  LbTextDraw();
  LbTextDrawFormatted();
  if (g_lb_current_font_ptr == 0) {
    uval = 0;
  }
  else {
    uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
  }
  word_ptr = word_ptr + 0x14;
  local_20 = local_20 + 1;
  local_1c = local_1c + uval;
  goto LAB_00034d61;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_034d86 (Original VA: 0x34d86, Ghidra: FUN_00034d86)
 * Prototype: void frontnet_draw_gui_button_label_034d86(void);
 * Address  : 0x34d86 (Size: 284 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_draw_gui_button_label_034d86(void)

{
  int gui_btn;
  int val;
  undefined *word_ptr;
  uint uval;
  int local_20;
  int local_1c;
  
  g_lb_current_font_ptr = *(int *)(&g_frontnet_bss_003346e4 +
                         (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3] * 4); /* gui_btn->content */
  val = g_frontnet_player_scroll_offset * 6 + 0x7e;
  g_lb_display_draw_flags = 0;
  word_ptr = &g_frontnet_bss_00335323 + g_frontnet_player_scroll_offset * 0x14;
  local_1c = 0;
  for (local_20 = g_frontnet_player_scroll_offset;
      (local_1c < (int)(uint)*(ushort *)(gui_btn + 0x27) && (local_20 < g_frontnet_player_count));
      local_20 = local_20 + 1) {
    watcom_crt_fn_13a710(word_ptr,val);
    LbTextDraw();
    LbTextDrawFormatted();
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    val = val + 6;
    word_ptr = word_ptr + 0x14;
    local_1c = local_1c + uval;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034ea2 (Original VA: 0x34ea2, Ghidra: FUN_00034ea2)
 * Prototype: void frontnet_fn_034ea2(void);
 * Address  : 0x34ea2 (Size: 54 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034ea2
 * Callers  : 0 -> 
 * Callees  : 1 -> frontnet_draw_text_overlay_03378f
 ******************************************************************************/
void frontnet_fn_034ea2(void)

{
  frontnet_draw_text_overlay_03378f();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_034ed8 (Original VA: 0x34ed8, Ghidra: FUN_00034ed8)
 * Prototype: void frontnet_fn_034ed8(void);
 * Address  : 0x34ed8 (Size: 96 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x034ed8
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontnet_fn_034ed8(void)

{
  int val;
  int val_2;
  
  g_frontnet_bss_0033607b = 0;
  g_frontnet_bss_0033603b = 0;
  g_frontnet_chat_message_count = 0;
  g_frontnet_player_scroll_offset = 0;
  g_frontnet_chat_scroll_offset = 0;
  g_frontnet_bss_00335322 = 0xff;
  g_frontnet_bss_003359c7 = 0;
  g_frontnet_bss_00336083 = 0;
  val_2 = 0;
  do {
    val = val_2 + 0x4ef;
    (&g_player_mp_message_text)[val_2] = 0;
    val_2 = val;
  } while (val != 0x18ab);
  return;
}

/******************************************************************************
 * Function : frontnet_LbNetwork_EnumeratePlayers_034f38 (Original VA: 0x34f38, Ghidra: FUN_00034f38)
 * Prototype: void frontnet_LbNetwork_EnumeratePlayers_034f38(void);
 * Address  : 0x34f38 (Size: 255 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 1863
 * Purpose  : References 'LbNetwork_EnumeratePlayers() failed'
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 5 -> frontnet_LbNetwork_Exchange_035758, LbErrorLog, LbScreenWaitVbi, LbFileClose, LbNetwork_EnumeratePlayers_0eddf0
 ******************************************************************************/
void frontnet_LbNetwork_EnumeratePlayers_034f38(void)

{
  char net_status;
  int loop_i;
  int loop_i_2;
  int val;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  byte flag;
  undefined1 local_228 [520];
  int local_20;
  int local_1c;
  
  flag = 0;
  g_frontnet_player_count = 0;
  LbScreenWaitVbi();
  net_status = LbNetwork_EnumeratePlayers_0eddf0();
  if (net_status == '\0') {
    if ((g_frontnet_chat_message_count == 0) || (g_frontnet_chat_scroll_offset < 0)) {
      g_frontnet_chat_scroll_offset = 0;
    }
    else if (g_frontnet_chat_message_count + -1 < g_frontnet_chat_scroll_offset) {
      g_frontnet_chat_scroll_offset = g_frontnet_chat_message_count + -1;
    }
    frontnet_LbNetwork_Exchange_035758();
    local_20 = g_frontnet_chat_message_count * 0x41;
    local_1c = 0;
    val = 0;
    for (loop_i = 0; loop_i < local_20; loop_i = loop_i + 0x41) {
      if ((&g_frontnet_bss_00335238)[(uint)(byte)(&g_frontnet_bss_00335e2b)[loop_i] * 9] != 0) {
        word_ptr_2 = local_228 + val;
        local_1c = local_1c + 1;
        val = val + 0x41;
        word_ptr = &g_frontnet_bss_00335e2b + loop_i;
        for (loop_i_2 = 0x41; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *word_ptr_2 = *word_ptr;
          word_ptr = word_ptr + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        }
      }
    }
    g_frontnet_chat_message_count = local_1c;
    LbFileClose();
  }
  else {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 1863, "LbNetwork_EnumeratePlayers() failed") */
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_035037 (Original VA: 0x35037, Ghidra: FUN_00035037)
 * Prototype: void frontnet_fn_035037(void);
 * Address  : 0x35037 (Size: 105 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035037
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 1 -> frontnet_fn_0356d1
 ******************************************************************************/
void frontnet_fn_035037(void)

{
  if ((g_bss_003db5fc & 0x80) == 0) {
    if (g_bss_003db5fc == 0) {
      return;
    }
    if (((g_bss_003db5fc == 0xe) || (g_bss_003db5fc == 0x1c)) ||
       (((&g_data_00195458)[g_bss_003db5fc] != 0 &&
        (1 < *(byte *)(((byte)(&g_data_00195458)[g_bss_003db5fc] - 0x1f) * 6 + 4 + g_frontnet_bss_003346e8))))) {
      frontnet_fn_0356d1();
    }
  }
  g_bss_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_player_list_btn_0350a0 (Original VA: 0x350a0, Ghidra: FUN_000350a0)
 * Prototype: void frontnet_maintain_player_list_btn_0350a0(void);
 * Address  : 0x350a0 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from lobby player count/scroll
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_player_list_btn_0350a0(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = 1 < g_frontnet_player_count;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_player_list_up_0350ad (Original VA: 0x350ad, Ghidra: FUN_000350ad)
 * Prototype: void frontnet_scroll_player_list_up_0350ad(void);
 * Address  : 0x350ad (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Decrements lobby player list scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_player_list_up_0350ad(void)

{
  if (g_frontnet_player_scroll_offset != 0) {
    g_frontnet_player_scroll_offset = g_frontnet_player_scroll_offset + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_player_list_down_0350bd (Original VA: 0x350bd, Ghidra: FUN_000350bd)
 * Prototype: void frontnet_scroll_player_list_down_0350bd(void);
 * Address  : 0x350bd (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Increments lobby player list scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_player_list_down_0350bd(void)

{
  if (g_frontnet_player_scroll_offset < g_frontnet_player_count + -1) {
    g_frontnet_player_scroll_offset = g_frontnet_player_scroll_offset + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_player_list_btn_0350d2 (Original VA: 0x350d2, Ghidra: FUN_000350d2)
 * Prototype: void frontnet_maintain_player_list_btn_0350d2(void);
 * Address  : 0x350d2 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from lobby player count/scroll
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_player_list_btn_0350d2(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_player_scroll_offset != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_player_list_btn_0350df (Original VA: 0x350df, Ghidra: FUN_000350df)
 * Prototype: void frontnet_maintain_player_list_btn_0350df(void);
 * Address  : 0x350df (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from lobby player count/scroll
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_player_list_btn_0350df(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_player_scroll_offset < g_frontnet_player_count + -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_chat_list_up_0350f2 (Original VA: 0x350f2, Ghidra: FUN_000350f2)
 * Prototype: void frontnet_scroll_chat_list_up_0350f2(void);
 * Address  : 0x350f2 (Size: 16 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Decrements lobby chat scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_chat_list_up_0350f2(void)

{
  if (g_frontnet_chat_scroll_offset != 0) {
    g_frontnet_chat_scroll_offset = g_frontnet_chat_scroll_offset + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_scroll_chat_list_down_035102 (Original VA: 0x35102, Ghidra: FUN_00035102)
 * Prototype: void frontnet_scroll_chat_list_down_035102(void);
 * Address  : 0x35102 (Size: 21 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Increments lobby chat scroll offset
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_scroll_chat_list_down_035102(void)

{
  if (g_frontnet_chat_scroll_offset < g_frontnet_chat_message_count + -1) {
    g_frontnet_chat_scroll_offset = g_frontnet_chat_scroll_offset + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_chat_scroll_btn_035117 (Original VA: 0x35117, Ghidra: FUN_00035117)
 * Prototype: void frontnet_maintain_chat_scroll_btn_035117(void);
 * Address  : 0x35117 (Size: 13 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from lobby chat scroll
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_chat_scroll_btn_035117(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_chat_scroll_offset != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_chat_scroll_btn_035124 (Original VA: 0x35124, Ghidra: FUN_00035124)
 * Prototype: void frontnet_maintain_chat_scroll_btn_035124(void);
 * Address  : 0x35124 (Size: 19 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from lobby chat scroll
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_chat_scroll_btn_035124(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_chat_scroll_offset < g_frontnet_chat_message_count + -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_update_player_view_state_035137 (Original VA: 0x35137, Ghidra: FUN_00035137)
 * Prototype: void frontnet_update_player_view_state_035137(void);
 * Address  : 0x35137 (Size: 160 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 3 -> frontnet_draw_text_overlay_03378f, dk_sprintf, LbTimerClock
 ******************************************************************************/
void frontnet_update_player_view_state_035137(void)

{
  int clock_ms;
  undefined *word_ptr;
  
  clock_ms = LbTimerClock();
  if (g_frontnet_bss_00335214 + 100 <= clock_ms) {
    g_data_0017b8b4 = (uint)(g_data_0017b8b4 == 0);
    g_frontnet_bss_00335214 = LbTimerClock();
  }
  if (g_data_0017b8b4 == 0) {
    word_ptr = &g_data_001644aa;
  }
  else {
    word_ptr = &g_data_001644a6; /* 0x1644a6="%s_" */
  }
  dk_sprintf(&g_log_sprintf_buf,word_ptr,&g_player_mp_message_text + g_my_player_word._3_1_ * 0x4ef);
  frontnet_draw_text_overlay_03378f();
  return;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_0351d7 (Original VA: 0x351d7, Ghidra: FUN_000351d7)
 * Prototype: void frontnet_draw_gui_button_label_0351d7(void);
 * Address  : 0x351d7 (Size: 301 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, watcom_crt_fn_13a710
 ******************************************************************************/
void frontnet_draw_gui_button_label_0351d7(void)

{
  int gui_btn;
  undefined1 *word_ptr;
  uint uval;
  int loop_i;
  int local_20;
  int local_1c;
  
  g_lb_current_font_ptr = *(int *)(&g_frontnet_bss_003346e4 +
                         (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3] * 4); /* gui_btn->content */
  g_lb_display_draw_flags = 0;
  word_ptr = &g_frontnet_bss_00335e2c + g_frontnet_chat_scroll_offset * 0x41;
  local_1c = 0;
  for (local_20 = g_frontnet_chat_scroll_offset;
      (local_1c < (int)(uint)*(ushort *)(gui_btn + 0x27) && (local_20 < g_frontnet_chat_message_count));
      local_20 = local_20 + 1) {
    for (loop_i = 0; loop_i < (int)(uint)(byte)(&g_frontnet_bss_00335e2b)[local_20 * 0x41]; loop_i = loop_i + 1) {
    }
    watcom_crt_fn_13a710(word_ptr);
    LbTextDraw();
    LbTextDrawFormatted();
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    word_ptr = word_ptr + 0x41;
    local_1c = local_1c + uval;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_maintain_player_list_btn_035304 (Original VA: 0x35304, Ghidra: FUN_00035304)
 * Prototype: void frontnet_maintain_player_list_btn_035304(void);
 * Address  : 0x35304 (Size: 52 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled flag from lobby player count/scroll
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontnet_maintain_player_list_btn_035304(void)

{
  byte *gui_btn;
  char ch;
  
  if (((*(int *)(gui_btn + 0x33) + -0x4a < g_frontnet_player_count) && /* gui_btn->content */
      (*(short *)(gui_btn + 0x1b) < g_frontnet_player_count)) && /* gui_btn->id_num */
     (*(int *)(gui_btn + 0x33) + -0x4a != (int)*(short *)(gui_btn + 0x1b))) { /* gui_btn->content, gui_btn->id_num */
    ch = '\x01';
  }
  else {
    ch = '\0';
  }
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | ch << 3;
  return;
}

/******************************************************************************
 * Function : frontnet_update_player_view_state_035338 (Original VA: 0x35338, Ghidra: FUN_00035338)
 * Prototype: void frontnet_update_player_view_state_035338(void);
 * Address  : 0x35338 (Size: 50 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> frontnet_fn_035666
 ******************************************************************************/
void frontnet_update_player_view_state_035338(void)

{
  int gui_btn;
  
  if ((*(int *)(gui_btn + 0x33) - 0x4aU == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) /* gui_btn->content */
     || ((int)*(short *)(gui_btn + 0x1b) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) /* gui_btn->id_num */
  {
    frontnet_fn_035666();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_draw_gui_button_label_03536a (Original VA: 0x3536a, Ghidra: FUN_0003536a)
 * Prototype: void frontnet_draw_gui_button_label_03536a(void);
 * Address  : 0x3536a (Size: 164 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontnet_draw_gui_button_label_03536a(void)

{
  int gui_btn;
  
  g_lb_current_font_ptr = g_frontnet_bss_003346ec;
  if (g_frontnet_bss_00334738 != *(int *)(gui_btn + 0x33)) { /* gui_btn->content */
    g_lb_current_font_ptr = *(undefined4 *)
                    (&g_frontnet_bss_003346e4 + (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3] * 4); /* gui_btn->content */
  }
  LbTextDraw();
  g_lb_display_draw_flags = 0x20;
  LbTextDrawFormatted();
  g_lb_display_draw_flags = 0x80;
  LbTextDrawFormatted();
  g_lb_display_draw_flags = 0;
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03540e (Original VA: 0x3540e, Ghidra: FUN_0003540e)
 * Prototype: longlong frontnet_fn_03540e(void);
 * Address  : 0x3540e (Size: 87 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03540e
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong frontnet_fn_03540e(void)

{
  int val;
  uint arg_edx;
  
  val = g_my_player_word._3_1_ * 0xc;
  if ((byte)(&g_frontnet_player_lobby_state)[val] >> 3 != 0) {
    return (ulonglong)arg_edx << 0x20;
  }
  (&g_frontnet_bss_003358f9)[val] = g_frontnet_bss_00334a4c == 0;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] & 7;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] | 0x38;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : frontnet_sessions_enumeration_035446 (Original VA: 0x35446, Ghidra: FUN_00035446)
 * Prototype: void frontnet_sessions_enumeration_035446(undefined4 param_1);
 * Address  : 0x35446 (Size: 181 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 2346
 * Purpose  : String 'Too many sessions in enumeration'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, LbMemoryCopy
 ******************************************************************************/
void frontnet_sessions_enumeration_035446(undefined4 param_1)

{
  if (g_frontnet_session_count < 0x20) {
    if ((g_frontnet_selected_service_idx != 0) && (g_frontnet_selected_service_idx != 1)) {
      (&g_frontnet_bss_0033591f)[g_frontnet_session_count + 1] = param_1;
      g_frontnet_session_count = g_frontnet_session_count + 1;
      return;
    }
    if (g_frontnet_session_count == 0) {
      g_frontnet_bss_00335923 = param_1;
      LbMemoryCopy();
      g_frontnet_session_count = g_frontnet_session_count + 1;
      return;
    }
  }
  else {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 2346, "Too many sessions in enumeration") */
  }
  return;
}

/******************************************************************************
 * Function : frontnet_players_enumeration_0354fb (Original VA: 0x354fb, Ghidra: FUN_000354fb)
 * Prototype: void frontnet_players_enumeration_0354fb(void);
 * Address  : 0x354fb (Size: 75 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 2358
 * Purpose  : String 'Too many players in enumeration'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, LbMemoryCopy
 ******************************************************************************/
void frontnet_players_enumeration_0354fb(void)

{
  if (g_frontnet_player_count < 4) {
    g_frontnet_player_count = g_frontnet_player_count + 1;
    LbMemoryCopy();
    return;
  }
  LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 2358, "Too many players in enumeration") */
  return;
}

/******************************************************************************
 * Function : frontnet_unrecognised_network_service_035546 (Original VA: 0x35546, Ghidra: FUN_00035546)
 * Prototype: void frontnet_unrecognised_network_service_035546(void);
 * Address  : 0x35546 (Size: 229 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 2391
 * Purpose  : String 'Unrecognised Network Service'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbErrorLog, LbMemoryCopy, bflib_system_io_fn_0f09e5
 ******************************************************************************/
void frontnet_unrecognised_network_service_035546(void)

{
  int val;
  
  if (g_frontnet_service_count < 3) {
    if (g_frontnet_service_count < 0x10) {
      val = bflib_system_io_fn_0f09e5();
      if (val == 0) {
        g_frontnet_service_count = g_frontnet_service_count + 1;
LAB_00035595:
        LbMemoryCopy();
        return;
      }
      val = bflib_system_io_fn_0f09e5();
      if (val == 0) {
        g_frontnet_service_count = g_frontnet_service_count + 1;
        goto LAB_00035595;
      }
      val = bflib_system_io_fn_0f09e5();
      if (val == 0) {
        g_frontnet_service_count = g_frontnet_service_count + 1;
        goto LAB_00035595;
      }
    }
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 2391, "Too many services in enumeration") */
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_03562b (Original VA: 0x3562b, Ghidra: FUN_0003562b)
 * Prototype: longlong frontnet_fn_03562b(void);
 * Address  : 0x3562b (Size: 59 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x03562b
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong frontnet_fn_03562b(void)

{
  int val;
  uint arg_edx;
  
  val = g_my_player_word._3_1_ * 0xc;
  if ((byte)(&g_frontnet_player_lobby_state)[val] >> 3 != 0) {
    return (ulonglong)arg_edx << 0x20;
  }
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] & 7;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] | 0x18;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : frontnet_fn_035666 (Original VA: 0x35666, Ghidra: FUN_00035666)
 * Prototype: undefined4 frontnet_fn_035666(void);
 * Address  : 0x35666 (Size: 76 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035666
 * Callers  : 1 -> frontnet_update_player_view_state_035338
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 frontnet_fn_035666(void)

{
  undefined1 arg_al;
  int val;
  undefined1 arg_dl;
  
  val = g_my_player_word._3_1_ * 0xc;
  if ((byte)(&g_frontnet_player_lobby_state)[val] >> 3 != 0) {
    return 0;
  }
  (&g_frontnet_bss_003358f9)[val] = arg_al;
  (&g_frontnet_bss_003358fa)[val] = arg_dl;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] & 7;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] | 0x20;
  return 1;
}

/******************************************************************************
 * Function : frontnet_fn_0356d1 (Original VA: 0x356d1, Ghidra: FUN_000356d1)
 * Prototype: longlong frontnet_fn_0356d1(void);
 * Address  : 0x356d1 (Size: 107 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x0356d1
 * Callers  : 1 -> frontnet_fn_035037
 * Callees  : 0 -> 
 ******************************************************************************/
longlong frontnet_fn_0356d1(void)

{
  undefined1 arg_al;
  int val;
  undefined1 uval;
  uint arg_edx;
  uint uval_2;
  
  val = g_my_player_word._3_1_ * 0xc;
  if ((byte)(&g_frontnet_player_lobby_state)[val] >> 3 != 0) {
    return (ulonglong)arg_edx << 0x20;
  }
  uval_2 = CONCAT11(arg_al,(&g_frontnet_player_lobby_state)[val]) & 0xffffff07;
  (&g_frontnet_player_lobby_state)[val] = (char)uval_2;
  (&g_frontnet_bss_003358f9)[val] = (char)(uval_2 >> 8);
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] | 0x40;
  if ((g_bss_003db526 == '\0') && (g_bss_003db532 == '\0')) {
    uval = 0;
  }
  else {
    uval = 1;
  }
  (&g_frontnet_bss_003358fa)[g_my_player_word._3_1_ * 0xc] = uval;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : frontnet_LbNetwork_Exchange_035758 (Original VA: 0x35758, Ghidra: FUN_00035758)
 * Prototype: void frontnet_LbNetwork_Exchange_035758(void);
 * Address  : 0x35758 (Size: 877 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 2528, 2553
 * Purpose  : References 'LbNetwork_Exchange failed'
 * Callers  : 1 -> frontnet_LbNetwork_EnumeratePlayers_034f38
 * Callees  : 14 -> frontend_load_frontend_palette_02e8a7, frontnet_fn_032f5c, frontnet_fn_03308c, frontnet_fn_033156, frontnet_fn_035ac5, frontnet_fn_035c86, frontnet_fn_035cc1, frontnet_fn_035ce2 ...
 ******************************************************************************/
void frontnet_LbNetwork_Exchange_035758(void)

{
  char net_status;
  byte flag;
  int val;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  undefined1 *word_ptr;
  
  val_2 = 0;
  do {
    val = val_2 + 0xc;
    (&g_frontnet_player_lobby_state)[val_2] = (&g_frontnet_player_lobby_state)[val_2] & 0xfe;
    val_2 = val;
  } while (val != 0x30);
  val_2 = (int)g_my_player_word._3_1_;
  val = val_2 * 0xc;
  (&g_frontnet_bss_003358f4)[val] = g_frontnet_bss_00335322;
  flag = (byte)g_frontnet_bss_00334a4c;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] | 1;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] & 0xf9;
  (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] | (flag & 3) * '\x02';
  (&g_frontnet_bss_003358f5)[val_2 * 6] = (undefined2)g_data_00179bfc;
  (&g_frontnet_bss_003358f7)[val_2 * 6] = (undefined2)g_data_00179c00;
  net_status = LbNetwork_StartExchange_0ee694();
  if (net_status != '\0') {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 2528, "LbNetwork_Exchange failed") */
  }
  val = frontnet_fn_032f5c();
  val_2 = g_frontnet_bss_00336083;
  if (((val != 0) && (val = frontnet_fn_035cc1(), val_2 = val, val <= g_frontnet_bss_00336083)) &&
     (val_2 = g_frontnet_bss_00336083, val < g_frontnet_bss_00336083)) {
    if (g_frontnet_bss_00334a44 == 5) {
      net_status = LbNetwork_Stop_0edc70();
      if (net_status != '\0') {
LAB_00035830:
        LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 2553, "LbNetwork_Stop() failed") */
        return;
      }
    }
    else {
      if (g_frontnet_bss_00334a44 != 6) goto LAB_0003587e;
      net_status = LbNetwork_Stop_0edc70();
      if (net_status != '\0') goto LAB_00035830;
      frontnet_fn_033156();
    }
    frontend_load_frontend_palette_02e8a7();
    val_2 = g_frontnet_bss_00336083;
  }
LAB_0003587e:
  g_frontnet_bss_00336083 = val_2;
  val_2 = 0;
  val = 0;
  word_ptr = &g_player_mp_message_text;
  val_5 = 0;
  do {
    if (((&g_frontnet_player_lobby_state)[val_5] & 1) != 0) {
      switch((byte)(&g_frontnet_player_lobby_state)[val_5] >> 3) {
      case 2:
        frontnet_fn_035ac5();
        val = extraout_ECX;
        break;
      case 3:
        val = frontnet_fn_035ce2();
        if (val == 0) {
          frontnet_LbNetwork_Stop_035d29();
          val = extraout_ECX_01;
        }
        else {
          g_frontnet_bss_0033591f = 1;
          frontend_load_frontend_palette_02e8a7();
          val = extraout_ECX_00;
        }
        break;
      case 4:
        frontnet_fn_035c86();
        val = extraout_ECX_02;
        break;
      case 7:
        g_frontnet_bss_00334a4c = (uint)(char)(&g_frontnet_bss_003358f9)[val_5];
        break;
      case 8:
        val_3 = bflib_system_io_fn_0efdb4(val_2,word_ptr);
        val = (int)(char)(&g_frontnet_bss_003358f9)[val_5];
        if (val == 0xe) {
          if (val_3 != 0) {
            (&g_bss_0019d52a)[val_3 + extraout_ECX_03] = 0;
            val_3 = val_3 + -1;
          }
        }
        else if (val == 0x1c) {
          if (val_3 != 0) {
            frontnet_fn_035ac5();
            (&g_player_mp_message_text)[extraout_ECX_04] = 0;
          }
        }
        else {
          if ((&g_frontnet_bss_003358fa)[val_5] == '\0') {
            flag = (&g_data_00195458)[val];
          }
          else {
            flag = (&g_data_001954d8)[val];
          }
          if (((flag != 0) && (1 < *(byte *)((flag - 0x1f) * 6 + g_frontnet_bss_003346e8 + 4))) &&
             (val_3 < 0x3f)) {
            val_3 = val_3 + 1;
            (&g_bss_0019d52a)[val_3 + extraout_ECX_03] = flag;
            (&g_player_mp_message_text)[val_3 + extraout_ECX_03] = 0;
          }
        }
        g_lb_current_font_ptr = g_frontnet_bss_003346e8;
        val_4 = bflib_system_io_draw_text_overlay_0e6c1c();
        val = extraout_ECX_05;
        if (0x1a3 < val_4) {
          (&g_bss_0019d52a)[val_3 + extraout_ECX_05] = 0;
        }
      }
      if ((g_frontnet_bss_00335322 == -1) && ((byte)(&g_frontnet_bss_003358f4)[val_5] != 0xffffffff)) {
        g_frontnet_bss_00335322 = (&g_frontnet_bss_003358f4)[val_5];
      }
      if ((g_frontnet_bss_00334a4c == 2) && (flag = ((&g_frontnet_player_lobby_state)[val_5] & 7) >> 1, flag != 2)) {
        g_frontnet_bss_00334a4c = (uint)flag;
      }
      *(uint *)((int)&g_bss_0019d5af + val) =
           (uint)*(ushort *)((int)&g_frontnet_bss_003358f7 + val_5) +
           (uint)*(ushort *)((int)&g_frontnet_bss_003358f5 + val_5) * 0x100;
    }
    word_ptr = word_ptr + 0x4ef;
    val_2 = val_2 + 1;
    val = val + 0x4ef;
    (&g_frontnet_player_lobby_state)[val_5] = (&g_frontnet_player_lobby_state)[val_5] & 7;
    val_5 = val_5 + 0xc;
  } while (val_2 < 4);
  if (g_frontnet_bss_00335322 == -1) {
    g_frontnet_bss_00335322 = '\0';
  }
  val = 0;
  val_2 = 0;
  do {
    if ((((&g_frontnet_player_lobby_state)[val_2] & 1) == 0) && (val_5 = frontnet_fn_03308c(), val_5 != 0)) {
      frontnet_fn_035c86();
    }
    val = val + 1;
    val_2 = val_2 + 0xc;
  } while (val < 4);
  return;
}

/******************************************************************************
 * Function : frontnet_fn_035ac5 (Original VA: 0x35ac5, Ghidra: FUN_00035ac5)
 * Prototype: void frontnet_fn_035ac5(void);
 * Address  : 0x35ac5 (Size: 140 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035ac5
 * Callers  : 1 -> frontnet_LbNetwork_Exchange_035758
 * Callees  : 2 -> LbFileClose, LbMemoryCopy
 ******************************************************************************/
void frontnet_fn_035ac5(void)

{
  int val;
  undefined1 arg_al;
  int extraout_ECX;
  
  if (g_frontnet_chat_message_count == 8) {
    do {
      LbFileClose();
    } while (extraout_ECX != 0x335fb1);
    g_frontnet_chat_message_count = g_frontnet_chat_message_count + -1;
  }
  (&g_frontnet_bss_00335e2b)[g_frontnet_chat_message_count * 0x41] = arg_al;
  LbMemoryCopy();
  val = g_frontnet_chat_message_count;
  g_frontnet_chat_message_count = g_frontnet_chat_message_count + 1;
  if (g_frontnet_chat_scroll_offset + 4 < g_frontnet_chat_message_count) {
    g_frontnet_chat_scroll_offset = val + -3;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_save_config_net_035b51 (Original VA: 0x35b51, Ghidra: FUN_00035b51)
 * Prototype: void frontnet_save_config_net_035b51(void);
 * Address  : 0x35b51 (Size: 110 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : String 'SAVE\CONFIG.NET'
 * Callers  : 3 -> frontnet_LbNetwork_EnumerateServices_033ead, frontnet_fn_03409c, frontnet_fn_0344c8
 * Callees  : 6 -> cdtest_ldata_dkwind00_dat_0150f0, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead, LbFileClose, LbMemoryCopy
 ******************************************************************************/
void frontnet_save_config_net_035b51(void)

{
  int file_handle;
  
  cdtest_ldata_dkwind00_dat_0150f0();
  file_handle = LbFileOpen();
  if (file_handle != -1) {
    file_handle = LbFileRead();
    if (file_handle == 0x82) {
      bflib_system_io_fn_0e8a1c();
      return;
    }
    bflib_system_io_fn_0e8a1c();
  }
  LbFileClose();
  LbMemoryCopy();
  return;
}

/******************************************************************************
 * Function : frontnet_save_config_net_035bbf (Original VA: 0x35bbf, Ghidra: FUN_00035bbf)
 * Prototype: void frontnet_save_config_net_035bbf(void);
 * Address  : 0x35bbf (Size: 95 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : String 'SAVE\CONFIG.NET'
 * Callers  : 2 -> frontend_load_frontend_palette_02e8a7, frontnet_copy_state_struct_034bb6
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, LbFileOpen, bflib_system_io_fn_0e8a1c, bflib_system_io_fn_0e8a8c, bflib_system_io_fn_0f0a2c
 ******************************************************************************/
void frontnet_save_config_net_035bbf(void)

{
  int file_handle;
  
  cdtest_ldata_dkwind00_dat_0150f0();
  file_handle = LbFileOpen();
  if (file_handle != -1) {
    bflib_system_io_fn_0f0a2c();
    bflib_system_io_fn_0f0a2c();
    bflib_system_io_fn_0f0a2c();
    bflib_system_io_fn_0f0a2c();
    bflib_system_io_fn_0e8a8c();
    bflib_system_io_fn_0e8a1c();
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_035c1e (Original VA: 0x35c1e, Ghidra: FUN_00035c1e)
 * Prototype: undefined4 frontnet_fn_035c1e(void);
 * Address  : 0x35c1e (Size: 60 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035c1e
 * Callers  : 0 -> 
 * Callees  : 4 -> frontend_text_long_box_030a2d, LbScreenLock, bflib_system_io_fn_0e79fc, LbKeyboardRead
 ******************************************************************************/
undefined4 frontnet_fn_035c1e(void)

{
  int screen_res;
  
  LbKeyboardRead();
  if (g_bss_003db4fd != '\0') {
    g_bss_003db4fd = 0;
    return 0xfffffff9;
  }
  screen_res = LbScreenLock();
  if (screen_res == 1) {
    frontend_text_long_box_030a2d();
    LbScreenLock();
  }
  bflib_system_io_fn_0e79fc();
  return 0;
}

/******************************************************************************
 * Function : frontnet_fn_035c5a (Original VA: 0x35c5a, Ghidra: FUN_00035c5a)
 * Prototype: undefined4 frontnet_fn_035c5a(void);
 * Address  : 0x35c5a (Size: 44 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035c5a
 * Callers  : 0 -> 
 * Callees  : 2 -> LbScreenLock, LbKeyboardRead
 ******************************************************************************/
undefined4 frontnet_fn_035c5a(void)

{
  int screen_res;
  
  LbKeyboardRead();
  if (g_bss_003db4fd != '\0') {
    g_bss_003db4fd = 0;
    return 0xfffffff9;
  }
  screen_res = LbScreenLock();
  if (screen_res == 1) {
    frontend_text_long_box_030a2d();
    LbScreenLock();
  }
  bflib_system_io_fn_0e79fc();
  return 0;
}

/******************************************************************************
 * Function : frontnet_fn_035c86 (Original VA: 0x35c86, Ghidra: FUN_00035c86)
 * Prototype: void frontnet_fn_035c86(void);
 * Address  : 0x35c86 (Size: 59 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035c86
 * Callers  : 1 -> frontnet_LbNetwork_Exchange_035758
 * Callees  : 1 -> frontnet_fn_03308c
 ******************************************************************************/
void frontnet_fn_035c86(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  int arg_edx;
  
  val = frontnet_fn_03308c();
  val_2 = extraout_ECX * 0x10 + arg_edx * 4;
  if (val != 0) {
    g_frontnet_bss_00335322 = g_frontnet_bss_00335322 & ~(&g_data_0017b8c8)[val_2];
    return;
  }
  g_frontnet_bss_00335322 = g_frontnet_bss_00335322 | (&g_data_0017b8c8)[val_2];
  return;
}

/******************************************************************************
 * Function : frontnet_fn_035cc1 (Original VA: 0x35cc1, Ghidra: FUN_00035cc1)
 * Prototype: undefined8 frontnet_fn_035cc1(void);
 * Address  : 0x35cc1 (Size: 33 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035cc1
 * Callers  : 1 -> frontnet_LbNetwork_Exchange_035758
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 frontnet_fn_035cc1(void)

{
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val_2 = 0;
  val = 0;
  do {
    if (*(int *)((int)&g_frontnet_bss_00335238 + val) != 0) {
      val_2 = val_2 + 1;
    }
    val = val + 0x24;
  } while (val != 0x90);
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : frontnet_fn_035ce2 (Original VA: 0x35ce2, Ghidra: FUN_00035ce2)
 * Prototype: longlong frontnet_fn_035ce2(void);
 * Address  : 0x35ce2 (Size: 71 bytes)
 * Module   : frontnet.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontnet.cpp procedure @ 0x035ce2
 * Callers  : 1 -> frontnet_LbNetwork_Exchange_035758
 * Callees  : 0 -> 
 ******************************************************************************/
longlong frontnet_fn_035ce2(void)

{
  int val;
  uint arg_edx;
  int val_2;
  int val_3;
  
  val_3 = -1;
  val_2 = 0;
  val = 0;
  do {
    if (0x13bb < val) {
      return CONCAT44(arg_edx,1);
    }
    if (((&g_frontnet_player_lobby_state)[val_2] & 1) != 0) {
      if (val_3 == -1) {
        val_3 = *(int *)((int)&g_bss_0019d5af + val);
      }
      else if (val_3 != *(int *)((int)&g_bss_0019d5af + val)) {
        return (ulonglong)arg_edx << 0x20;
      }
    }
    val_2 = val_2 + 0xc;
    val = val + 0x4ef;
  } while( true );
}

/******************************************************************************
 * Function : frontnet_LbNetwork_Stop_035d29 (Original VA: 0x35d29, Ghidra: FUN_00035d29)
 * Prototype: void frontnet_LbNetwork_Stop_035d29(void);
 * Address  : 0x35d29 (Size: 240 bytes)
 * Module   : frontnet.cpp [direct_file_string_xref]
 * OrigLine : frontnet.cpp lines 2946
 * Purpose  : References 'LbNetwork_Stop() failed'
 * Callers  : 1 -> frontnet_LbNetwork_Exchange_035758
 * Callees  : 10 -> frontend_load_frontend_palette_02e8a7, frontend_text_long_box_030a2d, frontnet_fn_033156, LbErrorLog, dk_sprintf, LbScreenLock, bflib_system_io_fn_0e79fc, LbKeyboardRead ...
 ******************************************************************************/
void frontnet_LbNetwork_Stop_035d29(void)

{
  char net_status;
  undefined *word_ptr;
  undefined *extraout_ECX;
  int screen_res;
  undefined1 local_110 [256];
  
  net_status = LbNetwork_Stop_0edc70();
  if (net_status != '\0') {
    LbErrorLog(); /* LbErrorLog("frontnet.cpp", line 2946, "LbNetwork_Stop() failed") */
    return;
  }
  word_ptr = &g_frontnet_bss_00335323;
  screen_res = 0;
  g_log_sprintf_buf = 0;
  g_bss_003db4fd = '\0';
  g_bss_003db518 = '\0';
  g_bss_003db535 = '\0';
  do {
    if (((&g_frontnet_player_lobby_state)[screen_res] & 1) != 0) {
      dk_sprintf(local_110,s__s__d__02d__00164627,word_ptr,
                   *(undefined2 *)((int)&g_frontnet_bss_003358f5 + screen_res),
                   *(undefined2 *)((int)&g_frontnet_bss_003358f7 + screen_res));
      bflib_system_io_fn_0e9dd6();
      word_ptr = extraout_ECX;
    }
    screen_res = screen_res + 0xc;
  } while (screen_res != 0x30);
  while (((g_bss_003db4fd == '\0' && (g_bss_003db535 == '\0')) && (g_bss_003db518 == '\0'))) {
    LbKeyboardRead();
    screen_res = LbScreenLock();
    if (screen_res == 1) {
      frontend_text_long_box_030a2d();
      LbScreenLock();
    }
    bflib_system_io_fn_0e79fc();
  }
  frontnet_fn_033156();
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_035e19 (Original VA: 0x35e19, Ghidra: FUN_00035e19)
 * Prototype: undefined4 frontnet_fn_035e19(void);
 * Address  : 0x35e19 (Size: 34 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontnet.cpp procedure @ 0x035e19
 * Callers  : 1 -> frontnet_fn_0349d9
 * Callees  : 3 -> frontend_text_long_box_030a2d, LbScreenLock, bflib_system_io_fn_0e79fc
 ******************************************************************************/
undefined4 frontnet_fn_035e19(void)

{
  int screen_res;
  undefined4 uval;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  short short_val;
  
  flag = 0;
  screen_res = LbScreenLock();
  if (screen_res == 1) {
    frontend_text_long_box_030a2d();
    LbScreenLock();
    uval = bflib_system_io_fn_0e79fc();
    return uval;
  }
  bflib_system_io_fn_0eb840();
  if (g_display_bss_003d987a == '\0') {
    word_ptr = g_display_bss_003d9818;
    word_ptr_2 = g_display_bss_003d9814;
    for (screen_res = g_screen_pitch * g_display_bss_003d9838 >> 2; screen_res != 0; screen_res = screen_res + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
  }
  else {
    word_ptr = g_display_bss_003d9818;
    short_val = 0;
    if (g_screen_pitch * g_display_bss_003d9838 == 0) {
      bflib_system_io_fn_0eb974();
      return 1;
    }
    do {
      bflib_system_io_fn_0f0d1c(short_val);
      word_ptr_2 = word_ptr;
      word_ptr_3 = g_display_bss_003d9814;
      for (screen_res = extraout_ECX >> 2; screen_res != 0; screen_res = screen_res + -1) {
        *word_ptr_3 = *word_ptr_2;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      }
      word_ptr = word_ptr + 0x4000;
      short_val = short_val + 1;
    } while (extraout_EDX != 0);
  }
  bflib_system_io_fn_0eb974();
  return 1;
}

/******************************************************************************
 * Function : frontnet_update_player_dungeon_035e3c (Original VA: 0x35e3c, Ghidra: FUN_00035e3c)
 * Prototype: void frontnet_update_player_dungeon_035e3c(void);
 * Address  : 0x35e3c (Size: 460 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> file_update_player_dungeon_02c833, update_update_player_dungeon_0dd500, update_update_player_dungeon_0dd6c8
 * Callees  : 9 -> fronttor_process_dungeon_room_0362e4, fronttor_update_player_dungeon_036346, fronttor_process_dungeon_room_0363ca, fronttor_update_player_dungeon_036442, fronttor_update_player_dungeon_03646d, fronttor_fn_036498, fronttor_process_dungeon_room_0364da, LbFileClose ...
 ******************************************************************************/
void frontnet_update_player_dungeon_035e3c(void)

{
  undefined4 clock_ms;
  int val;
  int dungeon_off;
  
  clock_ms = LbTimerClock();
  val = (int)g_my_player_word._3_1_;
  dungeon_off = val * 0x1508;
  *(undefined4 *)(&g_bss_002e17c4 + dungeon_off) = clock_ms;
  *(uint *)(&g_bss_002e1844 + dungeon_off) = (uint)(byte)(&g_bss_002e0ea2)[dungeon_off];
  *(uint *)(&g_bss_002e1848 + dungeon_off) = (uint)(byte)(&g_bss_002e0ea1)[dungeon_off];
  *(uint *)(&g_bss_002e184c + dungeon_off) = (uint)(ushort)(&g_bss_002e105c)[val * 0xa84];
  *(uint *)(&g_bss_002e1850 + dungeon_off) = (uint)(ushort)(&g_bss_002e105a)[val * 0xa84];
  *(undefined4 *)(&g_bss_002e1854 + dungeon_off) = (&g_bss_002e1082)[val * 0x542];
  *(uint *)(&g_bss_002e1858 + dungeon_off) = (uint)(ushort)(&g_bss_002e1062)[val * 0xa84];
  *(undefined4 *)(&g_bss_002e185c + dungeon_off) = *(undefined4 *)(&g_bss_002e0ece + dungeon_off);
  *(uint *)(&g_bss_002e1860 + dungeon_off) = (uint)*(ushort *)(&g_bss_002e105e + dungeon_off);
  *(uint *)(&g_bss_002e1864 + dungeon_off) = (uint)(ushort)(&g_bss_002e0ec6)[val * 0xa84];
  *(int *)(&g_bss_002e1868 + dungeon_off) = (int)(&g_bss_002e1706)[val * 0x542] >> 8;
  *(uint *)(&g_bss_002e186c + dungeon_off) = (uint)(ushort)(&g_bss_002e0f14)[val * 0xa84];
  *(uint *)(&g_bss_002e1870 + dungeon_off) = (uint)(ushort)(&g_bss_002e0f16)[val * 0xa84];
  *(uint *)(&g_bss_002e1874 + dungeon_off) = (uint)*(ushort *)(&g_bss_002e1060 + dungeon_off);
  *(uint *)(&g_bss_002e1878 + dungeon_off) = (uint)*(ushort *)(&g_bss_002e1064 + dungeon_off);
  clock_ms = fronttor_process_dungeon_room_0362e4();
  *(undefined4 *)(&g_bss_002e187c + g_my_player_word._3_1_ * 0x1508) = clock_ms;
  clock_ms = fronttor_update_player_dungeon_036346();
  *(undefined4 *)(&g_bss_002e1880 + g_my_player_word._3_1_ * 0x1508) = clock_ms;
  clock_ms = fronttor_process_dungeon_room_0363ca();
  *(undefined4 *)(&g_bss_002e1884 + g_my_player_word._3_1_ * 0x1508) = clock_ms;
  clock_ms = fronttor_update_player_dungeon_036442();
  *(undefined4 *)(&g_bss_002e1888 + g_my_player_word._3_1_ * 0x1508) = clock_ms;
  clock_ms = fronttor_update_player_dungeon_03646d();
  *(undefined4 *)(&g_bss_002e188c + g_my_player_word._3_1_ * 0x1508) = clock_ms;
  clock_ms = fronttor_fn_036498();
  val = g_my_player_word._3_1_ * 0x1508;
  *(undefined4 *)(&g_bss_002e1890 + val) = clock_ms;
  *(uint *)(&g_bss_002e1894 + val) =
       (uint)(*(int *)(&g_bss_002e17c4 + val) - *(int *)(&g_bss_002e17c0 + val)) / 1000;
  clock_ms = fronttor_process_dungeon_room_0364da();
  val = (int)g_my_player_word._3_1_;
  *(undefined4 *)(&g_bss_002e1898 + val * 0x1508) = clock_ms;
  *(undefined4 *)(&g_bss_002e189c + val * 0x1508) = g_game_turn;
  LbFileClose();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_036008 (Original VA: 0x36008, Ghidra: FUN_00036008)
 * Prototype: void frontnet_fn_036008(void);
 * Address  : 0x36008 (Size: 16 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontnet.cpp procedure @ 0x036008
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 1 -> LbTimerClock
 ******************************************************************************/
void frontnet_fn_036008(void)

{
  int clock_ms;
  
  clock_ms = LbTimerClock();
  g_frontnet_bss_0033614c = clock_ms + 3000;
  return;
}

/******************************************************************************
 * Function : frontnet_draw_text_overlay_036018 (Original VA: 0x36018, Ghidra: FUN_00036018)
 * Prototype: void frontnet_draw_text_overlay_036018(void);
 * Address  : 0x36018 (Size: 208 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 3 -> frontnet_draw_text_overlay_036278, fronttor_fn_036523, LbTextDraw
 ******************************************************************************/
void frontnet_draw_text_overlay_036018(void)

{
  int thing;
  uint uval;
  int *loop_i;
  int local_1c;
  
  fronttor_fn_036523();
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  uval = 0;
  if (g_frontnet_bss_003346e8 != 0) {
    uval = (uint)*(byte *)(g_frontnet_bss_003346e8 + 0xb);
  }
  local_1c = (int)*(short *)(thing + 0x1f) + uval / 2; /* thing->class_id */
  for (loop_i = &g_data_0017ba4c; *loop_i != 0; loop_i = loop_i + 3) {
    LbTextDraw((uint)*(byte *)(g_frontnet_bss_00334728 + 0x9a),
                 (int)((uint)*(ushort *)(thing + 0x25) + (uint)*(byte *)(g_frontnet_bss_00334728 + 0x9a) * -2)
                 / (int)(uint)g_units_per_pixel,local_1c / (int)(uint)g_units_per_pixel);
    frontnet_draw_text_overlay_036278();
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    local_1c = local_1c + uval + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_draw_text_overlay_0360e8 (Original VA: 0x360e8, Ghidra: FUN_000360e8)
 * Prototype: void frontnet_draw_text_overlay_0360e8(void);
 * Address  : 0x360e8 (Size: 160 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 3 -> frontnet_draw_text_overlay_036278, fronttor_fn_036523, LbTextDraw
 ******************************************************************************/
void frontnet_draw_text_overlay_0360e8(void)

{
  int arg_eax;
  uint uval;
  int val;
  int extraout_ECX;
  int *int_ptr;
  
  fronttor_fn_036523();
  LbTextDraw();
  int_ptr = (int *)(&g_data_0017ba94 + g_frontnet_bss_00336144 * 0xc);
  val = -g_frontnet_bss_00336148;
  while (val < (int)(uint)*(ushort *)(arg_eax + 0x27)) {
    int_ptr = int_ptr + 3;
    frontnet_draw_text_overlay_036278();
    if (*int_ptr == 0) {
      int_ptr = (int *)&g_data_0017ba94;
    }
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    val = extraout_ECX + uval + 4;
  }
  return;
}

/******************************************************************************
 * Function : frontnet_draw_text_overlay_036188 (Original VA: 0x36188, Ghidra: FUN_00036188)
 * Prototype: void frontnet_draw_text_overlay_036188(void);
 * Address  : 0x36188 (Size: 155 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 2 -> frontmap_fn_032738, LbTimerClock
 ******************************************************************************/
void frontnet_draw_text_overlay_036188(void)

{
  uint uval;
  int clock_ms;
  
  g_frontnet_bss_00336148 = g_frontnet_bss_00336148 + 1;
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  uval = 0;
  if (g_frontnet_bss_003346e8 != 0) {
    uval = (uint)*(byte *)(g_frontnet_bss_003346e8 + 0xb);
  }
  if ((int)(uval + 4) < g_frontnet_bss_00336148) {
    if (g_frontnet_bss_003346e8 == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_frontnet_bss_003346e8 + 0xb);
    }
    g_frontnet_bss_00336144 = g_frontnet_bss_00336144 + 1;
    g_frontnet_bss_00336148 = g_frontnet_bss_00336148 - (uval + 4);
    if (*(int *)(&g_data_0017ba94 + g_frontnet_bss_00336144 * 0xc) == 0) {
      g_frontnet_bss_00336144 = 0;
    }
  }
  if (((g_bss_002e78e9 != 0) && (g_bss_002e78e9 < 0x15)) && (g_frontnet_bss_0033614c != 0)) {
    clock_ms = LbTimerClock();
    if (g_frontnet_bss_0033614c < clock_ms) {
      frontmap_fn_032738();
      g_frontnet_bss_0033614c = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : frontnet_fn_036223 (Original VA: 0x36223, Ghidra: FUN_00036223)
 * Prototype: void frontnet_fn_036223(void);
 * Address  : 0x36223 (Size: 85 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontnet.cpp procedure @ 0x036223
 * Callers  : 0 -> 
 * Callees  : 2 -> frontend_load_frontend_palette_02e8a7, frontnet_fn_033156
 ******************************************************************************/
void frontnet_fn_036223(void)

{
  if ((g_game_system_flags & 1) != 0) {
    frontnet_fn_033156();
  }
  frontend_load_frontend_palette_02e8a7();
  g_frontnet_bss_00334a50 = 0;
  return;
}

/******************************************************************************
 * Function : frontnet_draw_text_overlay_036278 (Original VA: 0x36278, Ghidra: FUN_00036278)
 * Prototype: void frontnet_draw_text_overlay_036278(void);
 * Address  : 0x36278 (Size: 105 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 2 -> frontnet_draw_text_overlay_036018, frontnet_draw_text_overlay_0360e8
 * Callees  : 2 -> LbTextDrawFormatted, dk_sprintf
 ******************************************************************************/
void frontnet_draw_text_overlay_036278(void)

{
  undefined4 uval;
  int extraout_ECX;
  undefined1 local_90 [128];
  
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  g_lb_display_draw_flags = 0x20;
  LbTextDrawFormatted();
  g_lb_display_draw_flags = 0x80;
  uval = (**(code **)(extraout_ECX + 4))();
  dk_sprintf(local_90,&g_data_0016468c,uval);
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontnet_fn_0362e1 (Original VA: 0x362e1, Ghidra: FUN_000362e1)
 * Prototype: undefined4 frontnet_fn_0362e1(void);
 * Address  : 0x362e1 (Size: 3 bytes)
 * Module   : frontnet.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontnet.cpp procedure @ 0x0362e1
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 frontnet_fn_0362e1(void)

{
  undefined4 *arg_eax;
  
  return *arg_eax;
}

