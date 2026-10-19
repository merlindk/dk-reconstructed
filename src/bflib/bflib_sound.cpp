/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: bflib/bflib_sound.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 138
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : bflib_sound_bf100_allocate_buffers_streamed_0ea94f (Original VA: 0xea94f, Ghidra: FUN_000ea94f)
 * Prototype: void bflib_sound_bf100_allocate_buffers_streamed_0ea94f(void);
 * Address  : 0xea94f (Size: 170 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF100 - Cannot allocate buffers for streamed sound'
 * Callers  : 1 -> bflib_video_bf_debug_audio_0f1b38
 * Callees  : 7 -> LbMemoryCopy, bflib_system_io_alloc_lock_0eb1dd, bflib_system_io_fn_0eb28b, bflib_system_io_fn_0f43d5, bflib_system_io_fn_0f95f0, bflib_system_io_fn_0f9610, bflib_sound_AIL_allocate_sample_handle_0fa655
 ******************************************************************************/
void bflib_sound_bf100_allocate_buffers_streamed_0ea94f(void)

{
  int val;
  
  if (((g_bss_003df514 != '\0') && (g_data_00195d18 != '\0')) && (g_bss_003db694 == '\0')) {
    bflib_system_io_fn_0f43d5();
    bflib_system_io_fn_0f95f0();
    val = bflib_system_io_alloc_lock_0eb1dd();
    if (val == 0) {
      bflib_system_io_fn_0eb28b();
    }
    else {
      g_bss_003db696 = bflib_sound_AIL_allocate_sample_handle_0fa655(g_bss_003df526);
      if (g_bss_003db696 != 0) {
        LbMemoryCopy();
        bflib_system_io_fn_0f9610();
        g_bss_003db694 = 1;
        return;
      }
      bflib_system_io_fn_0eb28b();
    }
    LbMemoryCopy();
    bflib_system_io_fn_0f9610();
    return;
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf100_streamed_sample_type_0eaa28 (Original VA: 0xeaa28, Ghidra: FUN_000eaa28)
 * Prototype: void bflib_sound_bf100_streamed_sample_type_0eaa28(void);
 * Address  : 0xeaa28 (Size: 775 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF100 - Unknown streamed sample type %d'
 * Callers  : 1 -> frontmap_fn_032738
 * Callees  : 14 -> dk_sprintf, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileWrite, bflib_system_io_bf101_open_file_0eb0cc, bflib_system_io_fn_0eb28b, bflib_system_io_fn_0f9610, bflib_sound_AIL_init_sample_0fa77e ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_sound_bf100_streamed_sample_type_0eaa28(void)

{
  uint arg_ecx;
  ushort arg_dx;
  undefined4 arg_ebx;
  bool flag;
  int val;
  
  flag = (arg_ecx & 4) == 0;
  if (g_bss_003df514 == '\0') {
    return;
  }
  if (g_data_00195d18 == '\0') {
    return;
  }
  if (g_data_00195564 == '\0') {
    return;
  }
  if (g_bss_003db694 == '\0') {
    return;
  }
  g_bss_003db7c8 = 0;
  g_bss_003db7cc = 0;
  g_bss_003db7c4 = arg_ecx;
  bflib_sound_AIL_end_sample_0faa37(g_bss_003db696);
  bflib_sound_AIL_init_sample_0fa77e(g_bss_003db696);
  if ((arg_ecx & 2) == 0) {
    if (arg_dx == 0x34c) {
      return;
    }
    if (arg_dx == 0x336) {
      return;
    }
    if (arg_dx == 0x32b) {
      return;
    }
  }
  if (arg_dx < 0x34c) {
    if (arg_dx < 0x32b) {
LAB_000eabbf:
      bflib_system_io_fn_0eb28b();
      dk_sprintf(&g_sound_driver_ready,s_BF100___Unknown_streamed_sample_t_0016ced3,arg_dx);
      bflib_system_io_fn_0f9610();
      goto LAB_000eabe4;
    }
    if (arg_dx < 0x32c) {
      g_bss_003db7a2 = 0x2b11;
    }
    else {
      if (arg_dx != 0x336) goto LAB_000eabbf;
      g_bss_003db7a2 = 0x5622;
    }
  }
  else {
    if (0x34c < arg_dx) {
      if (arg_dx < 0x656) {
        if (arg_dx != 0x64b) goto LAB_000eabbf;
        g_bss_003db7a2 = 0x2b11;
      }
      else if (arg_dx < 0x657) {
        g_bss_003db7a2 = 0x5622;
      }
      else {
        if (arg_dx != 0x66c) goto LAB_000eabbf;
        g_bss_003db7a2 = 0xac44;
      }
      g_bss_003db79a = 1;
      if (flag) {
        g_bss_003db79e = 1;
      }
      else {
        g_bss_003db79e = 3;
      }
      goto LAB_000eabe4;
    }
    g_bss_003db7a2 = 0xac44;
  }
  g_bss_003db79a = 0;
  if (flag) {
    g_bss_003db79e = 0;
  }
  else {
    g_bss_003db79e = 2;
  }
LAB_000eabe4:
  bflib_sound_AIL_set_sample_type_0fa8b3(g_bss_003db696,g_bss_003db79e,g_bss_003db79a);
  bflib_sound_AIL_set_sample_playback_rate_0faa95(g_bss_003db696,g_bss_003db7a2);
  val = g_data_00195560;
  if (g_data_00195d1c == '\0') {
    val = g_data_00195560 >> 1;
  }
  bflib_sound_AIL_set_sample_volume_0faaf9(g_bss_003db696,val);
  bflib_sound_AIL_set_sample_pan_0fab5d(g_bss_003db696,0x40);
  if (g_data_0019555c != -1) {
    bflib_system_io_fn_0e8a1c();
    g_data_0019555c = -1;
  }
  if (g_bss_003db7b8 != 0) {
    bflib_system_io_fn_0fdd51();
    g_bss_003db7b8 = 0;
  }
  if ((arg_ecx & 1) == 0) {
    g_data_0019555c = LbFileOpen();
    if (g_data_0019555c != -1) {
      dk_sprintf(&g_sound_driver_ready,s_BF101___opened_streamed_sample_f_0016cf19);
      bflib_system_io_fn_0f9610();
      LbFileWrite();
      if ((g_bss_003db7c4 & 2) != 0) {
        g_bss_003db7e0 = 1;
      }
      g_bss_003db7d8 = 0;
      g_bss_003db7d4 = 0;
      g_bss_003db7d0 = 0;
      g_bss_003db7a4 = arg_ebx;
      return;
    }
    dk_sprintf(&g_sound_driver_ready,s_BF101___cannot_open_file__s_0016cefc);
    bflib_system_io_fn_0f9610();
    return;
  }
  bflib_system_io_bf101_open_file_0eb0cc();
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf110_cd_non_audio_0ec93f (Original VA: 0xec93f, Ghidra: FUN_000ec93f)
 * Prototype: void bflib_sound_bf110_cd_non_audio_0ec93f(void);
 * Address  : 0xec93f (Size: 289 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'bf110 - no cd or non-audio cd inserted in redbook audio cd'
 * Callers  : 1 -> bflib_video_bf_debug_audio_0f1b38
 * Callees  : 10 -> dk_sprintf, bflib_system_io_bf110_set_redbook_volume_0ecf70, bflib_system_io_fn_0ecfce, bflib_system_io_fn_0f9610, bflib_sound_AIL_shutdown_0f98ca, bflib_sound_AIL_redbook_open_0fc8bd, bflib_sound_AIL_redbook_close_0fc91b, bflib_sound_AIL_redbook_status_0fca35 ...
 ******************************************************************************/
void bflib_sound_bf110_cd_non_audio_0ec93f(void)

{
  int val;
  
  if ((g_bss_003df514 == '\0') && (g_bss_003df8d1 == '\0')) {
    bflib_sound_AIL_startup_0fee88();
  }
  g_net_bss_003dd83c = bflib_sound_AIL_redbook_open_0fc8bd(0);
  if (g_net_bss_003dd83c == 0) {
    dk_sprintf(&g_sound_driver_ready,s_BF110___Could_not_open_redbook_a_0016d0eb,0);
    bflib_system_io_fn_0f9610();
  }
  else {
    val = bflib_sound_AIL_redbook_status_0fca35(g_net_bss_003dd83c);
    if (val != 0) {
      g_net_bss_003dd845 = bflib_sound_AIL_redbook_tracks_0fca93(g_net_bss_003dd83c);
      dk_sprintf(&g_sound_driver_ready,s_Tracks__d_0016d0df,g_net_bss_003dd845);
      bflib_system_io_fn_0f9610();
      g_net_bss_003dd849 = 1;
      g_data_00195568 = bflib_system_io_fn_0ecfce();
      if (g_bss_003debd4 == 0) {
        return;
      }
      bflib_system_io_bf110_set_redbook_volume_0ecf70();
      return;
    }
    dk_sprintf(&g_sound_driver_ready,s_bf110___no_cd_or_non_audio_cd_in_0016d0a3);
    bflib_system_io_fn_0f9610();
    bflib_sound_AIL_redbook_close_0fc91b(g_net_bss_003dd83c);
    g_net_bss_003dd83c = 0;
  }
  if ((g_bss_003df514 == '\0') && (g_bss_003df8d1 == '\0')) {
    bflib_sound_AIL_shutdown_0f98ca();
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf110_play_cd_non_0ecabc (Original VA: 0xecabc, Ghidra: FUN_000ecabc)
 * Prototype: void bflib_sound_bf110_play_cd_non_0ecabc(void);
 * Address  : 0xecabc (Size: 506 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'bf110 - play error - no cd or non-audio cd inserted in redbo'
 * Callers  : 4 -> frontend_fn_02fc49, frontmap_ldata_dkflag00_dat_030ef8, frontmap_fn_031854, update_go_first_person_without_0de6a8
 * Callees  : 11 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_register_timer_0f9f10, bflib_sound_AIL_set_timer_period_0f9fd5, bflib_sound_AIL_start_timer_0fa1a4, bflib_sound_AIL_release_timer_handle_0fa30a, bflib_sound_AIL_redbook_status_0fca35, bflib_sound_AIL_redbook_tracks_0fca93 ...
 ******************************************************************************/
void bflib_sound_bf110_play_cd_non_0ecabc(void)

{
  ulonglong uval;
  uint arg_eax;
  int val;
  int local_1c;
  int local_18;
  
  if ((((g_net_bss_003dd840 != g_bss_003debd8) || (g_net_bss_003dd840 == 0)) && (g_net_bss_003dd849 != 0)) &&
     (arg_eax != g_net_bss_003dd840)) {
    if (g_bss_003debd8 != 0) {
      arg_eax = g_bss_003debd8;
    }
    val = bflib_sound_AIL_redbook_status_0fca35(g_net_bss_003dd83c);
    if (val == 0) {
      dk_sprintf(&g_sound_driver_ready,s_bf110___play_error___no_cd_or_no_0016d11b);
    }
    else {
      g_net_bss_003dd845 = bflib_sound_AIL_redbook_tracks_0fca93(g_net_bss_003dd83c);
      dk_sprintf(&g_sound_driver_ready,s_Tracks__d_0016d161,g_net_bss_003dd845);
      bflib_system_io_fn_0f9610();
      if ((arg_eax <= g_net_bss_003dd845) && (arg_eax != 0)) {
        if (g_net_bss_003dd859 == '\x01') {
          bflib_sound_AIL_release_timer_handle_0fa30a(g_net_bss_003dd85a);
          g_net_bss_003dd859 = '\0';
        }
        if (val != 3) {
          bflib_sound_AIL_redbook_stop_0fcce5(g_net_bss_003dd83c);
        }
        bflib_sound_AIL_redbook_track_info_0fcaf1(g_net_bss_003dd83c,arg_eax,&local_1c,&local_18);
        uval = (ulonglong)(uint)(local_18 - local_1c) / 1000;
        g_net_bss_003dd851 = (undefined4)uval;
        g_net_bss_003dd855 = (int)(uval / 5) * 5 + 5;
        dk_sprintf(&g_sound_driver_ready,s_Redbook_Track_Length__d_0016d1a1,g_net_bss_003dd851);
        bflib_system_io_fn_0f9610();
        dk_sprintf(&g_sound_driver_ready,s_Redbook_countdown__d_0016d1bb,g_net_bss_003dd855);
        bflib_system_io_fn_0f9610();
        g_net_bss_003dd85a = bflib_sound_AIL_register_timer_0f9f10(bflib_system_io_redbook_countdown_ended_0ec8e4);
        bflib_sound_AIL_set_timer_period_0f9fd5(g_net_bss_003dd85a,5000000);
        bflib_sound_AIL_redbook_play_0fcc7b(g_net_bss_003dd83c,local_1c,local_18);
        dk_sprintf(&g_sound_driver_ready,s_Redbook_start__d_end__d_0016d1d2,local_1c,local_18);
        bflib_system_io_fn_0f9610();
        bflib_sound_AIL_start_timer_0fa1a4(g_net_bss_003dd85a);
        g_net_bss_003dd840 = arg_eax;
        g_net_bss_003dd859 = 1;
        return;
      }
      dk_sprintf(&g_sound_driver_ready,s_BF110___CD_Track__d_is_invalid_o_0016d16d,arg_eax);
    }
    bflib_system_io_fn_0f9610();
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf110_cd_non_audio_0eccb6 (Original VA: 0xeccb6, Ghidra: FUN_000eccb6)
 * Prototype: void bflib_sound_bf110_cd_non_audio_0eccb6(void);
 * Address  : 0xeccb6 (Size: 96 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 0 -> 
 * Callees  : 5 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_stop_timer_0fa257, bflib_sound_AIL_redbook_status_0fca35, bflib_sound_AIL_redbook_pause_0fcd43
 ******************************************************************************/
void bflib_sound_bf110_cd_non_audio_0eccb6(void)

{
  int val;
  
  if (g_net_bss_003dd849 != 0) {
    val = bflib_sound_AIL_redbook_status_0fca35(g_net_bss_003dd83c);
    if (val == 0) {
      dk_sprintf(&g_sound_driver_ready,s_BF110___No_CD_or_non_audio_CD_in_0016d1ee);
      bflib_system_io_fn_0f9610();
      return;
    }
    if (val == 1) {
      bflib_sound_AIL_redbook_pause_0fcd43(g_net_bss_003dd83c);
      bflib_sound_AIL_stop_timer_0fa257(g_net_bss_003dd85a);
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf110_cd_non_audio_0ecd16 (Original VA: 0xecd16, Ghidra: FUN_000ecd16)
 * Prototype: void bflib_sound_bf110_cd_non_audio_0ecd16(void);
 * Address  : 0xecd16 (Size: 96 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 0 -> 
 * Callees  : 5 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_start_timer_0fa1a4, bflib_sound_AIL_redbook_status_0fca35, bflib_sound_AIL_redbook_resume_0fcda1
 ******************************************************************************/
void bflib_sound_bf110_cd_non_audio_0ecd16(void)

{
  int val;
  
  if (g_net_bss_003dd849 != 0) {
    val = bflib_sound_AIL_redbook_status_0fca35(g_net_bss_003dd83c);
    if (val == 0) {
      dk_sprintf(&g_sound_driver_ready,s_BF110___No_CD_or_non_audio_CD_in_0016d22e);
      bflib_system_io_fn_0f9610();
      return;
    }
    if (val == 2) {
      bflib_sound_AIL_redbook_resume_0fcda1(g_net_bss_003dd83c);
      bflib_sound_AIL_start_timer_0fa1a4(g_net_bss_003dd85a);
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf110_cd_non_audio_0ecd76 (Original VA: 0xecd76, Ghidra: FUN_000ecd76)
 * Prototype: void bflib_sound_bf110_cd_non_audio_0ecd76(void);
 * Address  : 0xecd76 (Size: 138 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 4 -> frontend_load_frontend_palette_02e8a7, frontmap_ldata_dkflag00_dat_031213, frontmap_ldata_netflag_dat_031bd6, game_out_sync_gameturn_036ff4
 * Callees  : 5 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_release_timer_handle_0fa30a, bflib_sound_AIL_redbook_status_0fca35, bflib_sound_AIL_redbook_stop_0fcce5
 ******************************************************************************/
void bflib_sound_bf110_cd_non_audio_0ecd76(void)

{
  int val;
  int extraout_EDX;
  
  if (g_net_bss_003dd849 != 0) {
    val = bflib_sound_AIL_redbook_status_0fca35(g_net_bss_003dd83c);
    if (val == 0) {
      dk_sprintf(&g_sound_driver_ready,s_BF110___No_CD_or_non_audio_CD_in_0016d26e);
      bflib_system_io_fn_0f9610();
      val = extraout_EDX;
    }
    if (val != 3) {
      bflib_sound_AIL_redbook_stop_0fcce5(g_net_bss_003dd83c);
    }
    if (g_net_bss_003dd859 == '\x01') {
      bflib_sound_AIL_release_timer_handle_0fa30a(g_net_bss_003dd85a);
      g_net_bss_003dd859 = '\0';
    }
    g_net_bss_003dd840 = 0;
    g_net_bss_003dd84d = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf110_cd_non_audio_0ece00 (Original VA: 0xece00, Ghidra: FUN_000ece00)
 * Prototype: void bflib_sound_bf110_cd_non_audio_0ece00(void);
 * Address  : 0xece00 (Size: 267 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 0 -> 
 * Callees  : 8 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_release_timer_handle_0fa30a, bflib_sound_AIL_redbook_status_0fca35, bflib_sound_AIL_redbook_tracks_0fca93, bflib_sound_AIL_redbook_track_info_0fcaf1, bflib_sound_AIL_redbook_play_0fcc7b, bflib_sound_AIL_redbook_stop_0fcce5
 ******************************************************************************/
void bflib_sound_bf110_cd_non_audio_0ece00(void)

{
  uint arg_eax;
  int val;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  
  if ((g_net_bss_003dd849 == 0) || (arg_eax == g_net_bss_003dd84d)) {
    return;
  }
  val = bflib_sound_AIL_redbook_status_0fca35(g_net_bss_003dd83c);
  if (val == 0) {
    dk_sprintf(&g_sound_driver_ready,s_BF110___No_CD_or_non_audio_CD_in_0016d2af);
  }
  else {
    if (val != 3) {
      bflib_sound_AIL_redbook_stop_0fcce5(g_net_bss_003dd83c);
    }
    if (g_net_bss_003dd859 == '\x01') {
      bflib_sound_AIL_release_timer_handle_0fa30a(g_net_bss_003dd85a);
      g_net_bss_003dd859 = '\0';
    }
    g_net_bss_003dd845 = bflib_sound_AIL_redbook_tracks_0fca93(g_net_bss_003dd83c);
    if ((arg_eax <= g_net_bss_003dd845) && (arg_eax != 0)) {
      bflib_sound_AIL_redbook_track_info_0fcaf1(g_net_bss_003dd83c);
      bflib_sound_AIL_redbook_track_info_0fcaf1(g_net_bss_003dd83c,g_net_bss_003dd845,local_14,&local_18);
      bflib_sound_AIL_redbook_play_0fcc7b(g_net_bss_003dd83c,local_1c,local_18);
      g_net_bss_003dd84d = arg_eax;
      return;
    }
    dk_sprintf(&g_sound_driver_ready,s_BF110___CD_Track__d_is_invalid_o_0016d2ef);
  }
  bflib_system_io_fn_0f9610();
  return;
}

/******************************************************************************
 * Function : bflib_sound_sbawe32_mdi_0f174e (Original VA: 0xf174e, Ghidra: FUN_000f174e)
 * Prototype: void bflib_sound_sbawe32_mdi_0f174e(void);
 * Address  : 0xf174e (Size: 128 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'SBAWE32.MDI'
 * Callers  : 3 -> bflib_video_sbawe32_mdi_0f143c, bflib_video_bf25_init_music_0fe128, watcom_crt_fn_10f620
 * Callees  : 3 -> bflib_system_io_fn_0f09e5, bflib_system_io_fn_0f1052, bflib_system_io_fn_0f13e7
 ******************************************************************************/
void bflib_sound_sbawe32_mdi_0f174e(void)

{
  int val;
  
  if (((g_bss_003df8d0 == '\0') && (g_bss_003df8d1 != '\0')) && (g_data_00195d98 != '\0')) {
    val = bflib_system_io_fn_0f09e5();
    if (val == 0) {
      val = bflib_system_io_fn_0f09e5();
      if (val == 0) {
        bflib_system_io_fn_0f13e7();
        bflib_system_io_fn_0f1052();
        bflib_system_io_fn_0f1052();
        g_bss_003df8f5 = 0;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_fn_0f1aec (Original VA: 0xf1aec, Ghidra: FUN_000f1aec)
 * Prototype: void bflib_sound_fn_0f1aec(void);
 * Address  : 0xf1aec (Size: 73 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : Module bflib/bflib_sound.cpp procedure @ 0x0f1aec
 * Callers  : 1 -> inits_fn_045bb8
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_sound_fn_0f1aec(void)

{
  undefined4 *camera;
  
  *camera = s_Sound_0016e9c4;
  camera[1] = s_Sound_0016e9ca;
  camera[2] = s_Sound_0016e9d0;
  *(undefined2 *)((int)camera + 0xe) = 3;
  *(undefined1 *)((int)camera + 0x12) = 1;
  *(undefined1 *)((int)camera + 0x11) = 1;
  *(undefined2 *)(camera + 3) = 0x656;
  *(undefined1 *)(camera + 4) = 10;
  *(undefined1 *)((int)camera + 0x13) = 0;
  *(undefined1 *)((int)camera + 0x15) = 0;
  *(undefined1 *)(camera + 5) = 0;
  *(undefined1 *)((int)camera + 0x16) = 0;
  *(undefined1 *)((int)camera + 0x17) = 0; /* camera->zoom */
  *(undefined1 *)(camera + 6) = 0;
  *(undefined1 *)((int)camera + 0x19) = 0;
  return;
}

/******************************************************************************
 * Function : bflib_sound_bf48_load_music_bank_0f2188 (Original VA: 0xf2188, Ghidra: FUN_000f2188)
 * Prototype: undefined8 bflib_sound_bf48_load_music_bank_0f2188(void);
 * Address  : 0xf2188 (Size: 531 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF48 - load music bank %d'
 * Callers  : 1 -> inits_fn_045bb8
 * Callees  : 9 -> dk_sprintf, bflib_system_io_fn_0e8974, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileWrite, LbFileRead, bflib_system_io_fn_0f0ab8, bflib_system_io_fn_0f23de ...
 ******************************************************************************/
undefined8 bflib_sound_bf48_load_music_bank_0f2188(void)

{
  char ch;
  short arg_ax;
  int file_handle;
  undefined4 uval;
  undefined4 arg_edx;
  bool flag;
  char *str_ptr;
  ushort local_28 [6];
  int local_1c;
  
  dk_sprintf(&g_sound_driver_ready,s_BF48___load_music_bank__d_0016efac,arg_ax);
  bflib_system_io_fn_0f9610();
  if (((g_bss_003df8d1 == '\0') || (g_data_00195d98 == '\0')) || (g_bss_003df8f6 != '\0')) {
    if (g_bss_003df8d1 == '\0') {
      str_ptr = s_BF53___load_music_bank___failed___0016f07d;
      goto LAB_000f22dc;
    }
    if (g_data_00195d98 == '\0') {
      str_ptr = s_BF53___load_music_bank___failed___0016f0b4;
      goto LAB_000f22dc;
    }
    if (g_bss_003df8f6 != '\0') {
      str_ptr = s_BF53___load_music_bank___failed___0016f0e5;
      goto LAB_000f22dc;
    }
  }
  else {
    bflib_system_io_fn_0f0ab8();
    file_handle = LbFileOpen();
    if (file_handle == -1) {
      str_ptr = s_BF52___load_music_bank___failed___0016f04d;
    }
    else {
      LbFileWrite();
      bflib_system_io_fn_0e8974();
      LbFileWrite();
      LbFileRead();
      LbFileWrite();
      LbFileRead();
      if (g_bss_003df8d2 < 0x57) {
        if (g_bss_003df8d2 < 0x47) {
          flag = g_bss_003df8d2 == 0x46;
LAB_000f22c0:
          if (flag) {
            local_1c = 2;
          }
        }
        else {
          if (0x47 < g_bss_003df8d2) {
            if (g_bss_003df8d2 == 0x52) {
LAB_000f220a:
              local_1c = 1;
            }
            goto LAB_000f22c6;
          }
LAB_000f21fe:
          local_1c = 0;
        }
      }
      else if (g_bss_003df8d2 < 0x58) {
LAB_000f2222:
        local_1c = 3;
      }
      else {
        if (g_bss_003df8d2 < 0x67) {
          flag = g_bss_003df8d2 == 0x66;
          goto LAB_000f22c0;
        }
        if (g_bss_003df8d2 < 0x68) goto LAB_000f21fe;
        if (0x71 < g_bss_003df8d2) {
          if (g_bss_003df8d2 < 0x73) goto LAB_000f220a;
          if (g_bss_003df8d2 == 0x77) goto LAB_000f2222;
        }
      }
LAB_000f22c6:
      if (local_28[local_1c] < (ushort)(arg_ax + 1U)) {
        bflib_system_io_fn_0e8a1c();
        str_ptr = s_BF49___load_music_bank___failed___0016efc7;
      }
      else {
        LbFileWrite();
        ch = bflib_system_io_fn_0f23de();
        if (ch != '\0') {
          bflib_system_io_fn_0e8a1c();
          dk_sprintf(&g_sound_driver_ready,s_BF51___load_music_bank___passed_0016f02c);
          bflib_system_io_fn_0f9610();
          uval = 0;
          goto LAB_000f2394;
        }
        bflib_system_io_fn_0e8a1c();
        str_ptr = s_BF50___load_music_bank___failed___0016eff9;
      }
    }
LAB_000f22dc:
    dk_sprintf(&g_sound_driver_ready,str_ptr);
    bflib_system_io_fn_0f9610();
  }
  uval = 1;
LAB_000f2394:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_sound_bf3_init_sound_0f8eec (Original VA: 0xf8eec, Ghidra: FUN_000f8eec)
 * Prototype: void bflib_sound_bf3_init_sound_0f8eec(void);
 * Address  : 0xf8eec (Size: 1186 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF3  - Init sound'
 * Callers  : 1 -> bflib_video_bf_debug_audio_0f1b38
 * Callees  : 15 -> dk_sprintf, bflib_system_io_fn_0f09e5, bflib_sound_sound_dat_0f949a, bflib_system_io_fn_0f9610, bflib_sound_AIL_shutdown_0f98ca, bflib_sound_AIL_set_preference_0f99cc, bflib_sound_AIL_API_read_INI_0f9d16, bflib_sound_AIL_install_DIG_INI_0fa535 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_sound_bf3_init_sound_0f8eec(void)

{
  short short_val;
  bool flag;
  int val;
  undefined4 extraout_EDX;
  code *str_ptr;
  byte flag_2;
  undefined2 local_3c;
  undefined1 auStack_3a [2];
  undefined1 local_38 [2];
  undefined1 local_36 [18];
  undefined1 local_24 [16];
  
  flag_2 = 0;
  flag = false;
  if (g_data_00195d18 == '\0') {
    return;
  }
  dk_sprintf(&g_sound_driver_ready,s_BF3___Init_sound_0016f60c);
  bflib_system_io_fn_0f9610();
  dk_sprintf(&g_sound_driver_ready,s_BF4___Default_sound_type____d_0016f61f,g_bss_003df524);
  bflib_system_io_fn_0f9610();
  if (g_bss_003df524 == 0) {
    if ((g_data_00195d98 == '\0') && (g_bss_003df52a != '\0')) {
      bflib_sound_AIL_shutdown_0f98ca();
      dk_sprintf(&g_sound_driver_ready,s_BF5___No_samples_requested___AIL_0016f640);
      bflib_system_io_fn_0f9610();
    }
    g_data_00195d18 = 0;
    g_data_00195d1a = 0;
    dk_sprintf(&g_sound_driver_ready,s_BF6___No_samples_requested_0016f66c);
    bflib_system_io_fn_0f9610();
    return;
  }
  if (g_bss_003df52a == '\0') {
    bflib_system_io_fn_0fe870(LbFileLoadAt);
    bflib_system_io_fn_0fe883(bflib_system_io_fn_0e94b0);
    bflib_sound_AIL_startup_0fee88();
    g_bss_003df52a = '\x01';
  }
  bflib_sound_AIL_set_preference_0f99cc(9,0);
  bflib_sound_AIL_set_preference_0f99cc(0,200);
  bflib_sound_AIL_set_preference_0f99cc(8,1);
  bflib_sound_AIL_set_preference_0f99cc(1,g_data_00195d22);
  bflib_sound_AIL_set_preference_0f99cc(3,100);
  bflib_sound_AIL_set_preference_0f99cc(4,g_data_00195d14 + 5);
  bflib_sound_AIL_set_preference_0f99cc(5,0x7f);
  bflib_sound_AIL_set_preference_0f99cc(6,0x28f);
  bflib_sound_AIL_set_preference_0f99cc(7,g_data_00195d1c != '\0');
  if (g_data_00195d1b == '\0') {
    bflib_sound_AIL_set_preference_0f99cc(0x11,0);
  }
  val = watcom_crt_fn_10ed88();
  if (val == 0) {
    val = bflib_sound_AIL_API_read_INI_0f9d16(&g_bss_003df538,s_DIG_INI_0016f758);
    if (val == 0) {
      dk_sprintf(&g_bss_003df5b8,&g_data_0016f81c); /* 0x16f81c="none" */
      dk_sprintf(&g_sound_driver_ready,s_BF15___Search_for_DIG_INI___fail_0016f821);
LAB_000f92bc:
      bflib_system_io_fn_0f9610();
      if (flag) goto LAB_000f9176;
      dk_sprintf(&g_sound_driver_ready,s_BF16___all_dig_driver_installati_0016f845,&g_bss_003e03f0);
    }
    else {
      dk_sprintf(&g_sound_driver_ready,s_BF11___Search_for_DIG_INI___pass_0016f760);
      bflib_system_io_fn_0f9610();
      val = bflib_system_io_fn_0f09e5();
      if (val != 0) {
        g_bss_003df530 = bflib_sound_AIL_install_DIG_INI_0fa535(&g_bss_003df526);
        if (g_bss_003df530 == 0) {
          dk_sprintf(&g_sound_driver_ready,s_BF13___DIG_INI_driver_installati_0016f7ba);
          flag = true;
        }
        else {
          dk_sprintf(&g_bss_003df5b8,&g_data_0016f7e7); /* 0x16f7e7="none" */
          dk_sprintf(&g_sound_driver_ready,s_BF14___DIG_INI_driver_installati_0016f7ec,g_bss_003df530);
        }
        goto LAB_000f92bc;
      }
      dk_sprintf(&g_sound_driver_ready,s_BF12___user_requests_no_sound_in_0016f78c);
    }
    bflib_system_io_fn_0f9610();
    if (g_data_00195d98 == '\0') {
      bflib_sound_AIL_shutdown_0f98ca();
    }
    g_data_00195d18 = 0;
    g_data_00195d1a = 0;
  }
  else {
    dk_sprintf(&g_sound_driver_ready,s_BF8___Force_sound_driver_environ_0016f6a1);
    bflib_system_io_fn_0f9610();
    watcom_crt_fn_113b5b(extraout_EDX,s__s__x__d__d__d_0016f6cf,local_24,&local_3c,auStack_3a,local_38,
                 local_36);
    g_bss_003df526 = bflib_sound_AIL_install_DIG_driver_file_0fa593(local_24,&local_3c);
    if (g_bss_003df526 == 0) {
      dk_sprintf(&g_sound_driver_ready,s_BF9___MDSOUND_environment_driver_0016f6de);
      bflib_system_io_fn_0f9610();
      if (g_data_00195d98 == '\0') {
        bflib_sound_AIL_shutdown_0f98ca();
      }
      dk_sprintf(&g_bss_003df5b8,&g_data_0016f717); /* 0x16f717="none" */
      g_data_00195d18 = 0;
      g_data_00195d1a = 0;
      return;
    }
    dk_sprintf(&g_bss_003df5b8,&g_data_0016f71c,local_24);
    dk_sprintf(&g_sound_driver_ready,s_BF10___MDSOUND_environment_drive_0016f71f);
    bflib_system_io_fn_0f9610();
    g_bss_003df638 = local_3c;
LAB_000f9176:
    dk_sprintf(&g_sound_driver_ready,s_BF18___determine_sound_type_to_b_0016f87e);
    bflib_system_io_fn_0f9610();
    if (g_bss_003df515 == '\0') {
      bflib_sound_sound_dat_0f949a();
    }
    else {
      dk_sprintf(&g_sound_driver_ready,s_BF19___LoadSounds_disabled_0016f8a8);
      bflib_system_io_fn_0f9610();
    }
    if (g_bss_003df524 != 0) {
      val = 0xb;
      str_ptr = bflib_system_io_fn_0f8eac;
      do {
        if (val == 0) break;
        val = val + -1;
        short_val = *(short *)str_ptr;
        str_ptr = str_ptr + ((uint)flag_2 * -2 + 1) * 2;
      } while (g_bss_003df524 != short_val);
                    /* WARNING: Could not recover jumptable at 0x000f93f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(val * 4 + 0xf8ec0))();
      return;
    }
    dk_sprintf(&g_sound_driver_ready,s_BF20___cannot_allocate_for_digit_0016f8c4);
    bflib_system_io_fn_0f9610();
    dk_sprintf(&g_bss_003df5b8,&g_data_0016f8f0); /* 0x16f8f0="none" */
    if (g_data_00195d98 == '\0') {
      bflib_sound_AIL_shutdown_0f98ca();
    }
    g_data_00195d18 = 0;
    g_data_00195d1a = 0;
    bflib_sound_AIL_uninstall_DIG_driver_0fa5f7(g_bss_003df526);
  }
  return;
}

/******************************************************************************
 * Function : bflib_sound_sound_dat_0f949a (Original VA: 0xf949a, Ghidra: FUN_000f949a)
 * Prototype: void bflib_sound_sound_dat_0f949a(void);
 * Address  : 0xf949a (Size: 230 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String '- no sound.dat'
 * Callers  : 1 -> bflib_sound_bf3_init_sound_0f8eec
 * Callees  : 3 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_fn_114cf2
 ******************************************************************************/
void bflib_sound_sound_dat_0f949a(void)

{
  short short_val;
  int val;
  int extraout_EDX;
  code *str_ptr;
  byte flag;
  char *str_ptr_2;
  
  flag = 0;
  val = 0;
  while( true ) {
    if (0 < val) {
      return;
    }
    dk_sprintf(&g_sound_driver_ready,s_BF19____d_0016f912,g_bss_003df524);
    bflib_system_io_fn_0f9610();
    val = bflib_sound_fn_114cf2();
    if (val < 1) break;
    dk_sprintf(&g_sound_driver_ready,s___allocation_successful_0016f95e);
    bflib_system_io_fn_0f9610();
    val = extraout_EDX;
  }
  if (val == -1) {
    dk_sprintf(&g_sound_driver_ready,s___no_sound_dat_0016f91c);
    bflib_system_io_fn_0f9610();
    g_bss_003df524 = 0;
    return;
  }
  if (val == 0) {
    str_ptr_2 = s___cannot_allocate_0016f92d;
  }
  else {
    if (val != -2) goto LAB_000f95b0;
    str_ptr_2 = s___not_present_in_sound_dat_0016f941;
  }
  dk_sprintf(&g_sound_driver_ready,str_ptr_2);
  bflib_system_io_fn_0f9610();
LAB_000f95b0:
  val = 10;
  str_ptr = bflib_system_io_audio_driver_op_0f9460;
  do {
    if (val == 0) break;
    val = val + -1;
    short_val = *(short *)str_ptr;
    str_ptr = str_ptr + ((uint)flag * -2 + 1) * 2;
  } while (g_bss_003df524 != short_val);
                    /* WARNING: Could not recover jumptable at 0x000f95c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val * 4 + 0xf9472))();
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_shutdown_0f98ca (Original VA: 0xf98ca, Ghidra: FUN_000f98ca)
 * Prototype: void bflib_sound_AIL_shutdown_0f98ca(void);
 * Address  : 0xf98ca (Size: 161 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_shutdown()'
 * Callers  : 8 -> bflib_sound_bf110_cd_non_audio_0ec93f, bflib_system_io_fn_0eca60, bflib_sound_bf3_init_sound_0f8eec, bflib_video_bf25_init_music_0fe128, watcom_crt_fn_10f620, watcom_crt_fn_10f6c8, watcom_crt_fn_11c383, watcom_crt_fn_11c45f
 * Callees  : 5 -> bflib_system_io_fn_0f96a3, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_1146dd, watcom_crt_fn_115839, watcom_crt_fn_115b3d
 ******************************************************************************/
void bflib_sound_AIL_shutdown_0f98ca(void)

{
  bool flag;
  int val;
  char **val_2;
  char *pcStack_8;
  
  val_2 = (char **)&stack0xfffffffc;
  if (g_data_00195d28 == 0) {
    return;
  }
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    pcStack_8 = (char *)0xf98fe;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      pcStack_8 = (char *)0xf9907;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9914;
      }
    }
  }
  flag = false;
LAB_000f9914:
  if (flag) {
    val_2 = &pcStack_8;
    pcStack_8 = s_AIL_shutdown___0016f9d2;
    bflib_system_io_fn_0f96a3();
  }
  *(undefined4 *)((int)val_2 + -4) = 0xf9927;
  watcom_crt_fn_1146dd();
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    *(undefined4 *)((int)val_2 + -4) = 0xf9947;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      *(undefined4 *)((int)val_2 + -4) = g_bss_003df824;
      *(undefined4 *)((int)val_2 + -8) = 0xf9956;
      watcom_crt_fn_115b3d();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  g_data_00195d28 = 0;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_driver_directory_0f996b (Original VA: 0xf996b, Ghidra: FUN_000f996b)
 * Prototype: undefined4 bflib_sound_AIL_set_driver_directory_0f996b(undefined4 param_1);
 * Address  : 0xf996b (Size: 97 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_driver_directory(%s)'
 * Callers  : 1 -> bflib_video_bf_debug_audio_0f1b38
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_11470a, watcom_crt_fn_115839
 ******************************************************************************/
undefined4 bflib_sound_AIL_set_driver_directory_0f996b(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f99ab;
      }
    }
  }
  flag = false;
LAB_000f99ab:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11470a(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_preference_0f99cc (Original VA: 0xf99cc, Ghidra: FUN_000f99cc)
 * Prototype: undefined4 bflib_sound_AIL_set_preference_0f99cc(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf99cc (Size: 182 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_preference(%d,%d)'
 * Callers  : 5 -> bflib_sound_bf3_init_sound_0f8eec, bflib_video_bf25_init_music_0fe128, watcom_crt_fn_10a990, watcom_crt_fn_1145bf, watcom_crt_fn_11c383
 * Callees  : 6 -> bflib_system_io_fn_0f96cd, bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_114178, watcom_crt_fn_115839, watcom_crt_fn_115acb
 ******************************************************************************/
undefined4 bflib_sound_AIL_set_preference_0f99cc(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9a0c;
      }
    }
  }
  flag = false;
LAB_000f9a0c:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_114178(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_get_real_vect_0f9a8c (Original VA: 0xf9a8c, Ghidra: FUN_000f9a8c)
 * Prototype: undefined4 bflib_sound_AIL_get_real_vect_0f9a8c(undefined4 param_1);
 * Address  : 0xf9a8c (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_get_real_vect(0x%X)'
 * Callers  : 1 -> bflib_sound_insufficient_memory_driver_descriptor_11419b
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_1153f9, watcom_crt_fn_115839
 ******************************************************************************/
undefined4 bflib_sound_AIL_get_real_vect_0f9a8c(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9acc;
      }
    }
  }
  flag = false;
LAB_000f9acc:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_1153f9(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_real_vect_0f9aea (Original VA: 0xf9aea, Ghidra: FUN_000f9aea)
 * Prototype: void bflib_sound_AIL_set_real_vect_0f9aea(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9aea (Size: 107 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_real_vect(0x%X,0x%X)'
 * Callers  : 2 -> bflib_sound_insufficient_memory_driver_descriptor_11419b, watcom_crt_fn_114475
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115421, watcom_crt_fn_115839
 ******************************************************************************/
void bflib_sound_AIL_set_real_vect_0f9aea(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9b2a;
      }
    }
  }
  flag = false;
LAB_000f9b2a:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_115421(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_USE16_ISR_0f9b55 (Original VA: 0xf9b55, Ghidra: FUN_000f9b55)
 * Prototype: void bflib_sound_AIL_set_USE16_ISR_0f9b55(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xf9b55 (Size: 113 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_USE16_ISR(%d,0x%X,%u)'
 * Callers  : 0 -> 
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115499, watcom_crt_fn_115839
 ******************************************************************************/
void bflib_sound_AIL_set_USE16_ISR_0f9b55(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9b95;
      }
    }
  }
  flag = false;
LAB_000f9b95:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_115499(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_restore_USE16_ISR_0f9bc6 (Original VA: 0xf9bc6, Ghidra: FUN_000f9bc6)
 * Prototype: void bflib_sound_AIL_restore_USE16_ISR_0f9bc6(undefined4 param_1);
 * Address  : 0xf9bc6 (Size: 101 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_restore_USE16_ISR(%d)'
 * Callers  : 2 -> watcom_crt_fn_114475, bflib_sound_could_allocate_memory_driver_116704
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_1156af, watcom_crt_fn_115839
 ******************************************************************************/
void bflib_sound_AIL_restore_USE16_ISR_0f9bc6(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9c06;
      }
    }
  }
  flag = false;
LAB_000f9c06:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_1156af(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_call_driver_0f9c40 (Original VA: 0xf9c40, Ghidra: FUN_000f9c40)
 * Prototype: undefined4 bflib_sound_AIL_call_driver_0f9c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xf9c40 (Size: 115 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_call_driver(0x%X,0x%X,0x%X,0x%X)'
 * Callers  : 21 -> bflib_system_io_fn_0f10fc, bflib_system_io_fn_0f113f, bflib_system_io_fn_0f11e4, bflib_system_io_fn_0f129d, bflib_system_io_fn_0f1342, bflib_system_io_fn_0f13e7, watcom_crt_fn_113c03, bflib_sound_insufficient_memory_driver_descriptor_11419b ...
 * Callees  : 4 -> bflib_system_io_fn_0f979c, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_11575f, watcom_crt_fn_115839
 ******************************************************************************/
undefined4 bflib_sound_AIL_call_driver_0f9c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool flag;
  int val;
  undefined4 uval;
  undefined4 *word_ptr;
  undefined4 uStack_c;
  
  word_ptr = (undefined4 *)&stack0xfffffff8;
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    uStack_c = 0xf9c6a;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      uStack_c = 0xf9c73;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9c80;
      }
    }
  }
  flag = false;
LAB_000f9c80:
  if (flag) {
    word_ptr = &uStack_c;
    uStack_c = param_4;
    bflib_system_io_fn_0f979c();
  }
  *(undefined4 *)((int)word_ptr + -4) = param_4;
  *(undefined4 *)((int)word_ptr + -8) = param_3;
  *(undefined4 *)((int)word_ptr + -0xc) = param_2;
  *(undefined4 *)((int)word_ptr + -0x10) = param_1;
  *(undefined4 *)((int)word_ptr + -0x14) = 0xf9cab;
  uval = watcom_crt_fn_11575f();
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    *(undefined4 *)((int)word_ptr + -4) = 0xf9a50;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      *(int *)((int)word_ptr + -4) = g_sound_active_flag + 0xe;
      *(undefined **)((int)word_ptr + -8) = &g_data_00195d30;
      *(undefined4 *)((int)word_ptr + -0xc) = g_bss_003df824;
      *(undefined4 *)((int)word_ptr + -0x10) = 0xf9a6d;
      watcom_crt_fn_115acb();
      *(undefined4 *)((int)word_ptr + -4) = 0xf9a77;
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_delay_0f9cb3 (Original VA: 0xf9cb3, Ghidra: FUN_000f9cb3)
 * Prototype: void bflib_sound_AIL_delay_0f9cb3(undefined4 param_1);
 * Address  : 0xf9cb3 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_delay(%d)'
 * Callers  : 3 -> watcom_crt_fn_116687, watcom_crt_fn_1188ac, bflib_sound_could_allocate_memory_driver_1193e6
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_114770, watcom_crt_fn_115839
 ******************************************************************************/
void bflib_sound_AIL_delay_0f9cb3(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9cf3;
      }
    }
  }
  flag = false;
LAB_000f9cf3:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_114770(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_API_read_INI_0f9d16 (Original VA: 0xf9d16, Ghidra: FUN_000f9d16)
 * Prototype: int bflib_sound_AIL_API_read_INI_0f9d16(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9d16 (Size: 506 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_API_read_INI(0x%X,%s)'
 * Callers  : 4 -> bflib_sound_bf3_init_sound_0f8eec, bflib_video_bf25_init_music_0fe128, bflib_sound_dig_ini_116db9, watcom_crt_mdi_ini_119bef
 * Callees  : 7 -> bflib_system_io_fn_0f96cd, bflib_system_io_fn_0f970b, bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_io_addr_113d48, watcom_crt_fn_115839, watcom_crt_fn_115acb
 ******************************************************************************/
int bflib_sound_AIL_API_read_INI_0f9d16(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  int val_2;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9d5a;
      }
    }
  }
  flag = false;
LAB_000f9d5a:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  val = watcom_crt_io_addr_113d48(param_1,param_2);
  if (val == 0) {
    if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
      val_2 = watcom_crt_fn_115839();
      if (val_2 == 0) {
        watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
        bflib_system_io_fn_0f96cd();
      }
    }
  }
  else if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val_2 = watcom_crt_fn_115839();
    if (val_2 == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f970b();
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f970b();
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f970b();
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f970b();
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f970b();
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f970b();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return val;
}

/******************************************************************************
 * Function : bflib_sound_AIL_register_timer_0f9f10 (Original VA: 0xf9f10, Ghidra: FUN_000f9f10)
 * Prototype: undefined4 bflib_sound_AIL_register_timer_0f9f10(undefined4 param_1);
 * Address  : 0xf9f10 (Size: 97 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_register_timer(0x%X)'
 * Callers  : 7 -> bflib_sound_bf110_play_cd_non_0ecabc, watcom_crt_fn_10e2ce, watcom_crt_fn_10ee14, bflib_sound_insufficient_memory_driver_descriptor_11419b, bflib_sound_could_allocate_memory_driver_116704, bflib_sound_could_allocate_memory_driver_1193e6, bflib_sound_out_memory_11cfae
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11583f
 ******************************************************************************/
undefined4 bflib_sound_AIL_register_timer_0f9f10(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9f50;
      }
    }
  }
  flag = false;
LAB_000f9f50:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11583f(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_timer_user_0f9f71 (Original VA: 0xf9f71, Ghidra: FUN_000f9f71)
 * Prototype: undefined4 bflib_sound_AIL_set_timer_user_0f9f71(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9f71 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_timer_user(%u,%u)'
 * Callers  : 3 -> bflib_sound_insufficient_memory_driver_descriptor_11419b, bflib_sound_could_allocate_memory_driver_116704, bflib_sound_could_allocate_memory_driver_1193e6
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_115880
 ******************************************************************************/
undefined4 bflib_sound_AIL_set_timer_user_0f9f71(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000f9fb1;
      }
    }
  }
  flag = false;
LAB_000f9fb1:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_115880(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_timer_period_0f9fd5 (Original VA: 0xf9fd5, Ghidra: FUN_000f9fd5)
 * Prototype: void bflib_sound_AIL_set_timer_period_0f9fd5(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9fd5 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_timer_period(%u,%u)'
 * Callers  : 4 -> bflib_sound_bf110_play_cd_non_0ecabc, watcom_crt_fn_1152ac, watcom_crt_fn_1159a7, watcom_crt_fn_1159d1
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_115977
 ******************************************************************************/
void bflib_sound_AIL_set_timer_period_0f9fd5(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa015;
      }
    }
  }
  flag = false;
LAB_000fa015:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_115977(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_timer_frequency_0fa039 (Original VA: 0xfa039, Ghidra: FUN_000fa039)
 * Prototype: void bflib_sound_AIL_set_timer_frequency_0fa039(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfa039 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_timer_frequency(%u,%u)'
 * Callers  : 6 -> watcom_crt_fn_10e2ce, watcom_crt_fn_10ee14, bflib_sound_insufficient_memory_driver_descriptor_11419b, bflib_sound_could_allocate_memory_driver_116704, bflib_sound_could_allocate_memory_driver_1193e6, bflib_sound_out_memory_11cfae
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1159a7
 ******************************************************************************/
void bflib_sound_AIL_set_timer_frequency_0fa039(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa079;
      }
    }
  }
  flag = false;
LAB_000fa079:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_1159a7(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_start_timer_0fa1a4 (Original VA: 0xfa1a4, Ghidra: FUN_000fa1a4)
 * Prototype: void bflib_sound_AIL_start_timer_0fa1a4(undefined4 param_1);
 * Address  : 0xfa1a4 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_start_timer(%u)'
 * Callers  : 9 -> bflib_sound_bf110_play_cd_non_0ecabc, bflib_sound_bf110_cd_non_audio_0ecd16, watcom_crt_fn_10e2ce, watcom_crt_fn_10ee14, bflib_sound_insufficient_memory_driver_descriptor_11419b, watcom_crt_fn_11590d, bflib_sound_could_allocate_memory_driver_116704, bflib_sound_could_allocate_memory_driver_1193e6 ...
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1158e3
 ******************************************************************************/
void bflib_sound_AIL_start_timer_0fa1a4(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa1e4;
      }
    }
  }
  flag = false;
LAB_000fa1e4:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_1158e3(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_stop_timer_0fa257 (Original VA: 0xfa257, Ghidra: FUN_000fa257)
 * Prototype: void bflib_sound_AIL_stop_timer_0fa257(undefined4 param_1);
 * Address  : 0xfa257 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_stop_timer(%u)'
 * Callers  : 2 -> bflib_sound_bf110_cd_non_audio_0eccb6, watcom_crt_fn_115957
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11592d
 ******************************************************************************/
void bflib_sound_AIL_stop_timer_0fa257(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa297;
      }
    }
  }
  flag = false;
LAB_000fa297:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11592d(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_release_timer_handle_0fa30a (Original VA: 0xfa30a, Ghidra: FUN_000fa30a)
 * Prototype: void bflib_sound_AIL_release_timer_handle_0fa30a(undefined4 param_1);
 * Address  : 0xfa30a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_release_timer_handle(%u)'
 * Callers  : 14 -> bflib_system_io_redbook_countdown_ended_0ec8e4, bflib_sound_bf110_play_cd_non_0ecabc, bflib_sound_bf110_cd_non_audio_0ecd76, bflib_sound_bf110_cd_non_audio_0ece00, bflib_system_io_fn_0f0ab8, bflib_system_io_fn_0f1874, watcom_crt_fn_10e0cc, watcom_crt_fn_10e3f4 ...
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1158a2
 ******************************************************************************/
void bflib_sound_AIL_release_timer_handle_0fa30a(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa34a;
      }
    }
  }
  flag = false;
LAB_000fa34a:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_1158a2(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_release_all_timers_0fa368 (Original VA: 0xfa368, Ghidra: FUN_000fa368)
 * Prototype: void bflib_sound_AIL_release_all_timers_0fa368(void);
 * Address  : 0xfa368 (Size: 85 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_release_all_timers()'
 * Callers  : 1 -> watcom_crt_fn_1146dd
 * Callees  : 4 -> bflib_system_io_fn_0f96a3, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1158c3
 ******************************************************************************/
void bflib_sound_AIL_release_all_timers_0fa368(void)

{
  bool flag;
  int val;
  char **val_2;
  char *pcStack_8;
  
  val_2 = (char **)&stack0xfffffffc;
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    pcStack_8 = (char *)0xfa38f;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      pcStack_8 = (char *)0xfa398;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa3a5;
      }
    }
  }
  flag = false;
LAB_000fa3a5:
  if (flag) {
    val_2 = &pcStack_8;
    pcStack_8 = s_AIL_release_all_timers___0016fc64;
    bflib_system_io_fn_0f96a3();
  }
  *(undefined4 *)((int)val_2 + -4) = 0xfa3b8;
  watcom_crt_fn_1158c3();
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_get_IO_environment_0fa3bd (Original VA: 0xfa3bd, Ghidra: FUN_000fa3bd)
 * Prototype: undefined4 bflib_sound_AIL_get_IO_environment_0fa3bd(undefined4 param_1);
 * Address  : 0xfa3bd (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_get_IO_environment(0x%X)'
 * Callers  : 2 -> bflib_sound_could_allocate_memory_driver_116704, bflib_sound_could_allocate_memory_driver_1193e6
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_11450d, watcom_crt_fn_115839
 ******************************************************************************/
undefined4 bflib_sound_AIL_get_IO_environment_0fa3bd(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa3fd;
      }
    }
  }
  flag = false;
LAB_000fa3fd:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11450d(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_install_driver_0fa41b (Original VA: 0xfa41b, Ghidra: FUN_000fa41b)
 * Prototype: undefined4 bflib_sound_AIL_install_driver_0fa41b(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfa41b (Size: 188 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_install_driver(0x%X,%u)'
 * Callers  : 4 -> watcom_crt_driver_file_found_116cb6, watcom_crt_fn_116d7f, watcom_crt_driver_file_found_119a6e, watcom_crt_fn_119bb5
 * Callees  : 6 -> bflib_system_io_fn_0f96f8, bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, bflib_sound_insufficient_memory_driver_descriptor_11419b, watcom_crt_fn_115839, watcom_crt_fn_115acb
 ******************************************************************************/
undefined4 bflib_sound_AIL_install_driver_0fa41b(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa45b;
      }
    }
  }
  flag = false;
LAB_000fa45b:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = bflib_sound_insufficient_memory_driver_descriptor_11419b(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_uninstall_driver_0fa4d7 (Original VA: 0xfa4d7, Ghidra: FUN_000fa4d7)
 * Prototype: void bflib_sound_AIL_uninstall_driver_0fa4d7(undefined4 param_1);
 * Address  : 0xfa4d7 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_uninstall_driver(0x%X)'
 * Callers  : 7 -> watcom_crt_fn_1146dd, watcom_crt_driver_file_found_116cb6, watcom_crt_fn_116d7f, watcom_crt_fn_116e25, watcom_crt_driver_file_found_119a6e, watcom_crt_fn_119bb5, watcom_crt_fn_119c5b
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_114475, watcom_crt_fn_115839
 ******************************************************************************/
void bflib_sound_AIL_uninstall_driver_0fa4d7(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa517;
      }
    }
  }
  flag = false;
LAB_000fa517:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_114475(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_install_DIG_INI_0fa535 (Original VA: 0xfa535, Ghidra: FUN_000fa535)
 * Prototype: undefined4 bflib_sound_AIL_install_DIG_INI_0fa535(undefined4 param_1);
 * Address  : 0xfa535 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_install_DIG_INI(0x%X)'
 * Callers  : 2 -> bflib_sound_bf3_init_sound_0f8eec, watcom_crt_fn_11c383
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, bflib_sound_dig_ini_116db9
 ******************************************************************************/
undefined4 bflib_sound_AIL_install_DIG_INI_0fa535(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa575;
      }
    }
  }
  flag = false;
LAB_000fa575:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = bflib_sound_dig_ini_116db9(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_install_DIG_driver_file_0fa593 (Original VA: 0xfa593, Ghidra: FUN_000fa593)
 * Prototype: undefined4 bflib_sound_AIL_install_DIG_driver_file_0fa593(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfa593 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_install_DIG_driver_file(%s,0x%X)'
 * Callers  : 2 -> bflib_sound_bf3_init_sound_0f8eec, bflib_sound_dig_ini_116db9
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_driver_file_found_116cb6
 ******************************************************************************/
undefined4 bflib_sound_AIL_install_DIG_driver_file_0fa593(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa5d3;
      }
    }
  }
  flag = false;
LAB_000fa5d3:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_driver_file_found_116cb6(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_uninstall_DIG_driver_0fa5f7 (Original VA: 0xfa5f7, Ghidra: FUN_000fa5f7)
 * Prototype: void bflib_sound_AIL_uninstall_DIG_driver_0fa5f7(undefined4 param_1);
 * Address  : 0xfa5f7 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_uninstall_DIG_driver(0x%X)'
 * Callers  : 1 -> bflib_sound_bf3_init_sound_0f8eec
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_116e25
 ******************************************************************************/
void bflib_sound_AIL_uninstall_DIG_driver_0fa5f7(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa637;
      }
    }
  }
  flag = false;
LAB_000fa637:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_116e25(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_allocate_sample_handle_0fa655 (Original VA: 0xfa655, Ghidra: FUN_000fa655)
 * Prototype: undefined4 bflib_sound_AIL_allocate_sample_handle_0fa655(undefined4 param_1);
 * Address  : 0xfa655 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_allocate_sample_handle(0x%X)'
 * Callers  : 7 -> bflib_sound_bf100_allocate_buffers_streamed_0ea94f, watcom_crt_fn_10a990, watcom_crt_fn_10e4d9, bflib_sound_unrecognized_digital_audio_file_1179d4, bflib_sound_insufficient_memory_hwave_descriptor_11b68b, watcom_crt_fn_11c83e, bflib_sound_out_memory_11cfae
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, bflib_sound_out_sample_handles_116e63
 ******************************************************************************/
undefined4 bflib_sound_AIL_allocate_sample_handle_0fa655(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa695;
      }
    }
  }
  flag = false;
LAB_000fa695:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = bflib_sound_out_sample_handles_116e63(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_release_sample_handle_0fa720 (Original VA: 0xfa720, Ghidra: FUN_000fa720)
 * Prototype: void bflib_sound_AIL_release_sample_handle_0fa720(undefined4 param_1);
 * Address  : 0xfa720 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_release_sample_handle(0x%X)'
 * Callers  : 9 -> watcom_crt_fn_10a8e0, watcom_crt_fn_117598, watcom_crt_fn_11799c, bflib_sound_insufficient_memory_hwave_descriptor_11b68b, watcom_crt_fn_11b840, watcom_crt_fn_11c34e, watcom_crt_fn_11c83e, bflib_sound_out_memory_11cfae ...
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_116ed4
 ******************************************************************************/
void bflib_sound_AIL_release_sample_handle_0fa720(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa760;
      }
    }
  }
  flag = false;
LAB_000fa760:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_116ed4(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_init_sample_0fa77e (Original VA: 0xfa77e, Ghidra: FUN_000fa77e)
 * Prototype: void bflib_sound_AIL_init_sample_0fa77e(undefined4 param_1);
 * Address  : 0xfa77e (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_init_sample(0x%X)'
 * Callers  : 10 -> bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_playsadd_id_num_vol_0f4ed4, watcom_crt_fn_10ab70, watcom_crt_fn_10e438, bflib_sound_out_sample_handles_116e63, bflib_sound_unrecognized_digital_audio_file_1179d4, watcom_crt_fn_11b2a2, watcom_crt_fn_11c83e ...
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_116ee7
 ******************************************************************************/
void bflib_sound_AIL_init_sample_0fa77e(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa7be;
      }
    }
  }
  flag = false;
LAB_000fa7be:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_116ee7(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_file_0fa7dc (Original VA: 0xfa7dc, Ghidra: FUN_000fa7dc)
 * Prototype: undefined4 bflib_sound_AIL_set_sample_file_0fa7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfa7dc (Size: 109 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_file(0x%X,0x%X,%d)'
 * Callers  : 3 -> bflib_system_io_playsadd_id_num_vol_0f4ed4, watcom_crt_fn_10e438, watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, bflib_sound_unrecognized_digital_audio_file_117b51
 ******************************************************************************/
undefined4 bflib_sound_AIL_set_sample_file_0fa7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa81c;
      }
    }
  }
  flag = false;
LAB_000fa81c:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  uval = bflib_sound_unrecognized_digital_audio_file_117b51(param_1,param_2,param_3);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_address_0fa849 (Original VA: 0xfa849, Ghidra: FUN_000fa849)
 * Prototype: void bflib_sound_AIL_set_sample_address_0fa849(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfa849 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_address(0x%X,0x%X,%u)'
 * Callers  : 4 -> watcom_crt_fn_1175d0, watcom_crt_fn_117866, watcom_crt_fn_11b2a2, watcom_crt_fn_11cc3d
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_116fdd
 ******************************************************************************/
void bflib_sound_AIL_set_sample_address_0fa849(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa889;
      }
    }
  }
  flag = false;
LAB_000fa889:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_116fdd(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_type_0fa8b3 (Original VA: 0xfa8b3, Ghidra: FUN_000fa8b3)
 * Prototype: void bflib_sound_AIL_set_sample_type_0fa8b3(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfa8b3 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_type(0x%X,%d,%u)'
 * Callers  : 7 -> bflib_sound_bf100_streamed_sample_type_0eaa28, watcom_crt_fn_10ab70, watcom_crt_fn_1175d0, watcom_crt_fn_117866, watcom_crt_fn_11b2a2, watcom_crt_fn_11cd8b, watcom_crt_fn_11d6cf
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117003
 ******************************************************************************/
void bflib_sound_AIL_set_sample_type_0fa8b3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa8f3;
      }
    }
  }
  flag = false;
LAB_000fa8f3:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_117003(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_start_sample_0fa91d (Original VA: 0xfa91d, Ghidra: FUN_000fa91d)
 * Prototype: void bflib_sound_AIL_start_sample_0fa91d(undefined4 param_1);
 * Address  : 0xfa91d (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_start_sample(0x%X)'
 * Callers  : 7 -> bflib_system_io_playsadd_id_num_vol_0f4ed4, watcom_crt_fn_10e438, watcom_crt_fn_1175d0, watcom_crt_fn_11b2a2, watcom_crt_fn_11c83e, watcom_crt_fn_11cc3d, watcom_crt_fn_11d87a
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117124
 ******************************************************************************/
void bflib_sound_AIL_start_sample_0fa91d(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa95d;
      }
    }
  }
  flag = false;
LAB_000fa95d:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_117124(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_stop_sample_0fa97b (Original VA: 0xfa97b, Ghidra: FUN_000fa97b)
 * Prototype: void bflib_sound_AIL_stop_sample_0fa97b(undefined4 param_1);
 * Address  : 0xfa97b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_stop_sample(0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11d8c4
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11716d
 ******************************************************************************/
void bflib_sound_AIL_stop_sample_0fa97b(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fa9bb;
      }
    }
  }
  flag = false;
LAB_000fa9bb:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11716d(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_resume_sample_0fa9d9 (Original VA: 0xfa9d9, Ghidra: FUN_000fa9d9)
 * Prototype: void bflib_sound_AIL_resume_sample_0fa9d9(undefined4 param_1);
 * Address  : 0xfa9d9 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_resume_sample(0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11d8c4
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117186
 ******************************************************************************/
void bflib_sound_AIL_resume_sample_0fa9d9(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000faa19;
      }
    }
  }
  flag = false;
LAB_000faa19:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_117186(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_end_sample_0faa37 (Original VA: 0xfaa37, Ghidra: FUN_000faa37)
 * Prototype: void bflib_sound_AIL_end_sample_0faa37(undefined4 param_1);
 * Address  : 0xfaa37 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_end_sample(0x%X)'
 * Callers  : 14 -> bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_fn_0eae8a, bflib_system_io_fn_0eaf13, bflib_system_io_fn_0f0730, bflib_system_io_fn_0f0a54, watcom_crt_fn_10a8e0, watcom_crt_fn_10a960, watcom_crt_fn_10e0cc ...
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1171aa
 ******************************************************************************/
void bflib_sound_AIL_end_sample_0faa37(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000faa77;
      }
    }
  }
  flag = false;
LAB_000faa77:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_1171aa(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_playback_rate_0faa95 (Original VA: 0xfaa95, Ghidra: FUN_000faa95)
 * Prototype: void bflib_sound_AIL_set_sample_playback_rate_0faa95(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfaa95 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_playback_rate(0x%X,%d)'
 * Callers  : 12 -> bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_playsadd_id_num_vol_0f4ed4, bflib_system_io_fn_0f5228, watcom_crt_fn_10ab70, watcom_crt_fn_1175d0, watcom_crt_fn_117866, watcom_crt_fn_11b18b, watcom_crt_fn_11c83e ...
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117043
 ******************************************************************************/
void bflib_sound_AIL_set_sample_playback_rate_0faa95(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000faad5;
      }
    }
  }
  flag = false;
LAB_000faad5:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_117043(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_volume_0faaf9 (Original VA: 0xfaaf9, Ghidra: FUN_000faaf9)
 * Prototype: void bflib_sound_AIL_set_sample_volume_0faaf9(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfaaf9 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_volume(0x%X,%d)'
 * Callers  : 12 -> bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_fn_0eae4c, bflib_system_io_fn_0f0790, bflib_system_io_playsadd_id_num_vol_0f4ed4, watcom_crt_fn_10a850, watcom_crt_fn_10ab70, watcom_crt_fn_10e0cc, watcom_crt_fn_11b130 ...
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117064
 ******************************************************************************/
void bflib_sound_AIL_set_sample_volume_0faaf9(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fab39;
      }
    }
  }
  flag = false;
LAB_000fab39:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_117064(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_pan_0fab5d (Original VA: 0xfab5d, Ghidra: FUN_000fab5d)
 * Prototype: void bflib_sound_AIL_set_sample_pan_0fab5d(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfab5d (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_pan(0x%X,%d)'
 * Callers  : 9 -> bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_playsadd_id_num_vol_0f4ed4, bflib_system_io_fn_0f5168, watcom_crt_fn_10a850, watcom_crt_fn_11b130, watcom_crt_fn_11c83e, watcom_crt_fn_11cb2d, watcom_crt_fn_11d6cf ...
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117093
 ******************************************************************************/
void bflib_sound_AIL_set_sample_pan_0fab5d(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fab9d;
      }
    }
  }
  flag = false;
LAB_000fab9d:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_117093(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_loop_count_0fabc1 (Original VA: 0xfabc1, Ghidra: FUN_000fabc1)
 * Prototype: void bflib_sound_AIL_set_sample_loop_count_0fabc1(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfabc1 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_loop_count(0x%X,%d)'
 * Callers  : 3 -> bflib_system_io_playsadd_id_num_vol_0f4ed4, watcom_crt_fn_11c83e, watcom_crt_fn_11d9e0
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1170fa
 ******************************************************************************/
void bflib_sound_AIL_set_sample_loop_count_0fabc1(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fac01;
      }
    }
  }
  flag = false;
LAB_000fac01:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_1170fa(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_status_0fac8f (Original VA: 0xfac8f, Ghidra: FUN_000fac8f)
 * Prototype: undefined4 bflib_sound_AIL_sample_status_0fac8f(undefined4 param_1);
 * Address  : 0xfac8f (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_status(0x%X)'
 * Callers  : 11 -> bflib_system_io_fn_0f0790, bflib_system_io_fn_0f0a54, bflib_system_io_fn_0f4e20, bflib_system_io_playsadd_id_num_vol_0f4ed4, bflib_system_io_fn_0f5168, bflib_system_io_fn_0f5228, watcom_crt_fn_10e0cc, watcom_crt_fn_10e2ce ...
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_116fce
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_status_0fac8f(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000faccf;
      }
    }
  }
  flag = false;
LAB_000faccf:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_116fce(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_playback_rate_0faced (Original VA: 0xfaced, Ghidra: FUN_000faced)
 * Prototype: undefined4 bflib_sound_AIL_sample_playback_rate_0faced(undefined4 param_1);
 * Address  : 0xfaced (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_playback_rate(0x%X)'
 * Callers  : 2 -> watcom_crt_fn_11d6cf, watcom_crt_fn_11d9c3
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117034
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_playback_rate_0faced(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fad2d;
      }
    }
  }
  flag = false;
LAB_000fad2d:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_117034(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_volume_0fad4b (Original VA: 0xfad4b, Ghidra: FUN_000fad4b)
 * Prototype: undefined4 bflib_sound_AIL_sample_volume_0fad4b(undefined4 param_1);
 * Address  : 0xfad4b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_volume(0x%X)'
 * Callers  : 2 -> watcom_crt_fn_11d6cf, watcom_crt_fn_11d970
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117055
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_volume_0fad4b(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fad8b;
      }
    }
  }
  flag = false;
LAB_000fad8b:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_117055(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_pan_0fada9 (Original VA: 0xfada9, Ghidra: FUN_000fada9)
 * Prototype: undefined4 bflib_sound_AIL_sample_pan_0fada9(undefined4 param_1);
 * Address  : 0xfada9 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_pan(0x%X)'
 * Callers  : 2 -> watcom_crt_fn_11d6cf, watcom_crt_fn_11d98d
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117084
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_pan_0fada9(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fade9;
      }
    }
  }
  flag = false;
LAB_000fade9:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_117084(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_loop_count_0fae07 (Original VA: 0xfae07, Ghidra: FUN_000fae07)
 * Prototype: undefined4 bflib_sound_AIL_sample_loop_count_0fae07(undefined4 param_1);
 * Address  : 0xfae07 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_loop_count(0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11da07
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1170e4
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_loop_count_0fae07(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fae47;
      }
    }
  }
  flag = false;
LAB_000fae47:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_1170e4(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_digital_master_volume_0fae65 (Original VA: 0xfae65, Ghidra: FUN_000fae65)
 * Prototype: void bflib_sound_AIL_set_digital_master_volume_0fae65(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfae65 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_digital_master_volume(0x%X,%d)'
 * Callers  : 1 -> bflib_system_io_fn_0f32ae
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11728c
 ******************************************************************************/
void bflib_sound_AIL_set_digital_master_volume_0fae65(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000faea5;
      }
    }
  }
  flag = false;
LAB_000faea5:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_11728c(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_digital_configuration_0faf2a (Original VA: 0xfaf2a, Ghidra: FUN_000faf2a)
 * Prototype: void bflib_sound_AIL_digital_configuration_0faf2a(void);
 * Address  : 0xfaf2a (Size: 204 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_digital_configuration(0x%lX,0x%lX,0x%lX,0x%lX)'
 * Callers  : 0 -> 
 * Callees  : 6 -> bflib_system_io_fn_0f9767, bflib_system_io_fn_0f979c, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_115acb, watcom_crt_fn_117421
 ******************************************************************************/
void bflib_sound_AIL_digital_configuration_0faf2a(void)

{
  bool flag;
  int val;
  undefined4 *word_ptr;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uStack_8;
  
  word_ptr = (undefined4 *)&stack0xfffffffc;
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    uStack_8 = 0xfaf59;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      uStack_8 = 0xfaf62;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000faf6f;
      }
    }
  }
  flag = false;
LAB_000faf6f:
  if (flag) {
    word_ptr = &uStack_8;
    uStack_8 = in_stack_0000001c;
    bflib_system_io_fn_0f979c();
  }
  *(undefined4 *)((int)word_ptr + -4) = in_stack_0000001c;
  *(undefined4 *)((int)word_ptr + -8) = in_stack_00000018;
  *(undefined4 *)((int)word_ptr + -0xc) = in_stack_00000014;
  *(undefined4 *)((int)word_ptr + -0x10) = in_stack_00000010;
  *(undefined4 *)((int)word_ptr + -0x14) = 0xfaf94;
  watcom_crt_fn_117421();
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    *(undefined4 *)((int)word_ptr + -4) = 0xfafb7;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      *(int *)((int)word_ptr + -4) = g_sound_active_flag + 0xe;
      *(undefined **)((int)word_ptr + -8) = &g_data_00195d30;
      *(undefined4 *)((int)word_ptr + -0xc) = g_bss_003df824;
      *(undefined4 *)((int)word_ptr + -0x10) = 0xfafd4;
      watcom_crt_fn_115acb();
      *(undefined4 *)((int)word_ptr + -4) = 0xfafeb;
      bflib_system_io_fn_0f9767();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_install_DIG_driver_image_0faff6 (Original VA: 0xfaff6, Ghidra: FUN_000faff6)
 * Prototype: undefined4 bflib_sound_AIL_install_DIG_driver_image_0faff6(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfaff6 (Size: 114 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_install_DIG_driver_image(0x%X,%u,0x%X)'
 * Callers  : 1 -> watcom_crt_fn_10a990
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_116d7f
 ******************************************************************************/
undefined4 bflib_sound_AIL_install_DIG_driver_image_0faff6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb036;
      }
    }
  }
  flag = false;
LAB_000fb036:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  uval = watcom_crt_fn_116d7f(param_1,param_2,param_3);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_minimum_sample_buffer_size_0fb060 (Original VA: 0xfb060, Ghidra: FUN_000fb060)
 * Prototype: undefined4 bflib_sound_AIL_minimum_sample_buffer_size_0fb060(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb060 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_minimum_sample_buffer_size(0x%X,%d,%d)'
 * Callers  : 2 -> watcom_crt_fn_10a990, bflib_sound_out_memory_11cfae
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1172e1
 ******************************************************************************/
undefined4 bflib_sound_AIL_minimum_sample_buffer_size_0fb060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb0a0;
      }
    }
  }
  flag = false;
LAB_000fb0a0:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  uval = watcom_crt_fn_1172e1(param_1,param_2,param_3);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_buffer_ready_0fb0ca (Original VA: 0xfb0ca, Ghidra: FUN_000fb0ca)
 * Prototype: undefined4 bflib_sound_AIL_sample_buffer_ready_0fb0ca(undefined4 param_1);
 * Address  : 0xfb0ca (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_buffer_ready(0x%X)'
 * Callers  : 5 -> bflib_system_io_fn_0ead2f, bflib_system_io_fn_0eb147, bflib_system_io_pan_position_pan_target_0eb30c, watcom_crt_fn_10ac50, watcom_crt_fn_11cc3d
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1173cc
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_buffer_ready_0fb0ca(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb10a;
      }
    }
  }
  flag = false;
LAB_000fb10a:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_1173cc(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_load_sample_buffer_0fb128 (Original VA: 0xfb128, Ghidra: FUN_000fb128)
 * Prototype: void bflib_sound_AIL_load_sample_buffer_0fb128(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfb128 (Size: 119 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_load_sample_buffer(0x%X,%u,0x%X,%u)'
 * Callers  : 4 -> bflib_system_io_fn_0ead2f, bflib_system_io_fn_0eb147, watcom_crt_fn_10ac50, watcom_crt_fn_11cc3d
 * Callees  : 4 -> bflib_system_io_fn_0f979c, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117368
 ******************************************************************************/
void bflib_sound_AIL_load_sample_buffer_0fb128(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool flag;
  int val;
  undefined4 *word_ptr;
  undefined4 uStack_c;
  
  word_ptr = (undefined4 *)&stack0xfffffff8;
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    uStack_c = 0xfb152;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      uStack_c = 0xfb15b;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb168;
      }
    }
  }
  flag = false;
LAB_000fb168:
  if (flag) {
    word_ptr = &uStack_c;
    uStack_c = param_4;
    bflib_system_io_fn_0f979c();
  }
  *(undefined4 *)((int)word_ptr + -4) = param_4;
  *(undefined4 *)((int)word_ptr + -8) = param_3;
  *(undefined4 *)((int)word_ptr + -0xc) = param_2;
  *(undefined4 *)((int)word_ptr + -0x10) = param_1;
  *(undefined4 *)((int)word_ptr + -0x14) = 0xfb193;
  watcom_crt_fn_117368();
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_buffer_info_0fb19f (Original VA: 0xfb19f, Ghidra: FUN_000fb19f)
 * Prototype: undefined4 bflib_sound_AIL_sample_buffer_info_0fb19f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0xfb19f (Size: 123 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_buffer_info(0x%X,0x%X,0x%X,0x%X,0x%X)'
 * Callers  : 3 -> watcom_crt_fn_10ac50, watcom_crt_fn_11d534, watcom_crt_fn_11d7f3
 * Callees  : 4 -> bflib_system_io_fn_0f97d6, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117468
 ******************************************************************************/
undefined4
bflib_sound_AIL_sample_buffer_info_0fb19f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool flag;
  int val;
  undefined4 uval;
  undefined4 *word_ptr;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  word_ptr = (undefined4 *)&stack0xfffffff8;
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    uStack_c = 0xfb1c9;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      uStack_c = 0xfb1d2;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb1df;
      }
    }
  }
  flag = false;
LAB_000fb1df:
  if (flag) {
    uStack_c = param_5;
    word_ptr = &uStack_10;
    uStack_10 = param_4;
    bflib_system_io_fn_0f97d6();
  }
  *(undefined4 *)((int)word_ptr + -4) = param_5;
  *(undefined4 *)((int)word_ptr + -8) = param_4;
  *(undefined4 *)((int)word_ptr + -0xc) = param_3;
  *(undefined4 *)((int)word_ptr + -0x10) = param_2;
  *(undefined4 *)((int)word_ptr + -0x14) = param_1;
  *(undefined4 *)((int)word_ptr + -0x18) = 0xfb210;
  uval = watcom_crt_fn_117468();
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    *(undefined4 *)((int)word_ptr + -4) = 0xf9a50;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      *(int *)((int)word_ptr + -4) = g_sound_active_flag + 0xe;
      *(undefined **)((int)word_ptr + -8) = &g_data_00195d30;
      *(undefined4 *)((int)word_ptr + -0xc) = g_bss_003df824;
      *(undefined4 *)((int)word_ptr + -0x10) = 0xf9a6d;
      watcom_crt_fn_115acb();
      *(undefined4 *)((int)word_ptr + -4) = 0xf9a77;
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_position_0fb21a (Original VA: 0xfb21a, Ghidra: FUN_000fb21a)
 * Prototype: void bflib_sound_AIL_set_sample_position_0fb21a(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb21a (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_position(0x%X,%u)'
 * Callers  : 1 -> watcom_crt_fn_11d6cf
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1170ca
 ******************************************************************************/
void bflib_sound_AIL_set_sample_position_0fb21a(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb25a;
      }
    }
  }
  flag = false;
LAB_000fb25a:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_1170ca(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_position_0fb27e (Original VA: 0xfb27e, Ghidra: FUN_000fb27e)
 * Prototype: undefined4 bflib_sound_AIL_sample_position_0fb27e(undefined4 param_1);
 * Address  : 0xfb27e (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_position(0x%X)'
 * Callers  : 2 -> bflib_system_io_fn_0eafb8, watcom_crt_fn_11d7f3
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_1170b3
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_position_0fb27e(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb2be;
      }
    }
  }
  flag = false;
LAB_000fb2be:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_1170b3(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_register_EOB_callback_0fb340 (Original VA: 0xfb340, Ghidra: FUN_000fb340)
 * Prototype: undefined4 bflib_sound_AIL_register_EOB_callback_0fb340(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb340 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_register_EOB_callback(0x%X,0x%X)'
 * Callers  : 1 -> bflib_sound_out_memory_11cfae
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117213
 ******************************************************************************/
undefined4 bflib_sound_AIL_register_EOB_callback_0fb340(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb380;
      }
    }
  }
  flag = false;
LAB_000fb380:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_117213(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_register_EOS_callback_0fb3a4 (Original VA: 0xfb3a4, Ghidra: FUN_000fb3a4)
 * Prototype: undefined4 bflib_sound_AIL_register_EOS_callback_0fb3a4(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb3a4 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_register_EOS_callback(0x%X,0x%X)'
 * Callers  : 5 -> watcom_crt_fn_10e438, watcom_crt_fn_10e5f5, bflib_sound_unrecognized_digital_audio_file_1179d4, watcom_crt_fn_11c83e, bflib_sound_out_memory_11cfae
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117232
 ******************************************************************************/
undefined4 bflib_sound_AIL_register_EOS_callback_0fb3a4(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb3e4;
      }
    }
  }
  flag = false;
LAB_000fb3e4:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_117232(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sample_user_data_0fb46c (Original VA: 0xfb46c, Ghidra: FUN_000fb46c)
 * Prototype: void bflib_sound_AIL_set_sample_user_data_0fb46c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb46c (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sample_user_data(0x%X,%u,%d)'
 * Callers  : 5 -> watcom_crt_fn_10ab70, watcom_crt_fn_10e4d9, watcom_crt_fn_10e5f5, watcom_crt_fn_11c83e, bflib_sound_out_memory_11cfae
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_117251
 ******************************************************************************/
void bflib_sound_AIL_set_sample_user_data_0fb46c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb4ac;
      }
    }
  }
  flag = false;
LAB_000fb4ac:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_117251(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sample_user_data_0fb4d6 (Original VA: 0xfb4d6, Ghidra: FUN_000fb4d6)
 * Prototype: undefined4 bflib_sound_AIL_sample_user_data_0fb4d6(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb4d6 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sample_user_data(0x%X,%u)'
 * Callers  : 3 -> watcom_crt_fn_10e438, watcom_crt_fn_11c34e, watcom_crt_fn_11cd61
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11726e
 ******************************************************************************/
undefined4 bflib_sound_AIL_sample_user_data_0fb4d6(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb516;
      }
    }
  }
  flag = false;
LAB_000fb516:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11726e(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_install_MDI_INI_0fb598 (Original VA: 0xfb598, Ghidra: FUN_000fb598)
 * Prototype: undefined4 bflib_sound_AIL_install_MDI_INI_0fb598(undefined4 param_1);
 * Address  : 0xfb598 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_install_MDI_INI(0x%X)'
 * Callers  : 2 -> bflib_video_bf25_init_music_0fe128, watcom_crt_fn_11c383
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_mdi_ini_119bef
 ******************************************************************************/
undefined4 bflib_sound_AIL_install_MDI_INI_0fb598(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb5d8;
      }
    }
  }
  flag = false;
LAB_000fb5d8:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_mdi_ini_119bef(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_install_MDI_driver_file_0fb5f6 (Original VA: 0xfb5f6, Ghidra: FUN_000fb5f6)
 * Prototype: undefined4 bflib_sound_AIL_install_MDI_driver_file_0fb5f6(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb5f6 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_install_MDI_driver_file(%s,0x%X)'
 * Callers  : 2 -> bflib_video_bf25_init_music_0fe128, watcom_crt_mdi_ini_119bef
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_driver_file_found_119a6e
 ******************************************************************************/
undefined4 bflib_sound_AIL_install_MDI_driver_file_0fb5f6(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb636;
      }
    }
  }
  flag = false;
LAB_000fb636:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_driver_file_found_119a6e(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_uninstall_MDI_driver_0fb65a (Original VA: 0xfb65a, Ghidra: FUN_000fb65a)
 * Prototype: void bflib_sound_AIL_uninstall_MDI_driver_0fb65a(undefined4 param_1);
 * Address  : 0xfb65a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_uninstall_MDI_driver(0x%X)'
 * Callers  : 1 -> bflib_video_bf25_init_music_0fe128
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_119c5b
 ******************************************************************************/
void bflib_sound_AIL_uninstall_MDI_driver_0fb65a(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb69a;
      }
    }
  }
  flag = false;
LAB_000fb69a:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_119c5b(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_allocate_sequence_handle_0fb6b8 (Original VA: 0xfb6b8, Ghidra: FUN_000fb6b8)
 * Prototype: undefined4 bflib_sound_AIL_allocate_sequence_handle_0fb6b8(undefined4 param_1);
 * Address  : 0xfb6b8 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_allocate_sequence_handle(0x%X)'
 * Callers  : 2 -> bflib_video_bf25_init_music_0fe128, watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_out_sequence_handles_119e41
 ******************************************************************************/
undefined4 bflib_sound_AIL_allocate_sequence_handle_0fb6b8(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb6f8;
      }
    }
  }
  flag = false;
LAB_000fb6f8:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_out_sequence_handles_119e41(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_release_sequence_handle_0fb716 (Original VA: 0xfb716, Ghidra: FUN_000fb716)
 * Prototype: void bflib_sound_AIL_release_sequence_handle_0fb716(undefined4 param_1);
 * Address  : 0xfb716 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_release_sequence_handle(0x%X)'
 * Callers  : 2 -> watcom_crt_fn_11c314, watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_119ec0
 ******************************************************************************/
void bflib_sound_AIL_release_sequence_handle_0fb716(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb756;
      }
    }
  }
  flag = false;
LAB_000fb756:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_119ec0(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_init_sequence_0fb774 (Original VA: 0xfb774, Ghidra: FUN_000fb774)
 * Prototype: undefined4 bflib_sound_AIL_init_sequence_0fb774(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb774 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_init_sequence(0x%X,0x%X,%d)'
 * Callers  : 3 -> bflib_system_io_fn_0f1874, bflib_system_io_fn_0f23de, watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, bflib_sound_xmidi_sequence_119f04
 ******************************************************************************/
undefined4 bflib_sound_AIL_init_sequence_0fb774(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb7b4;
      }
    }
  }
  flag = false;
LAB_000fb7b4:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  uval = bflib_sound_xmidi_sequence_119f04(param_1,param_2,param_3);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_start_sequence_0fb7de (Original VA: 0xfb7de, Ghidra: FUN_000fb7de)
 * Prototype: void bflib_sound_AIL_start_sequence_0fb7de(undefined4 param_1);
 * Address  : 0xfb7de (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_start_sequence(0x%X)'
 * Callers  : 2 -> bflib_system_io_fn_0f1874, watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a224
 ******************************************************************************/
void bflib_sound_AIL_start_sequence_0fb7de(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb81e;
      }
    }
  }
  flag = false;
LAB_000fb81e:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11a224(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_stop_sequence_0fb83c (Original VA: 0xfb83c, Ghidra: FUN_000fb83c)
 * Prototype: void bflib_sound_AIL_stop_sequence_0fb83c(undefined4 param_1);
 * Address  : 0xfb83c (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_stop_sequence(0x%X)'
 * Callers  : 8 -> bflib_system_io_fn_0f0ab8, bflib_system_io_fn_0f17d0, bflib_system_io_fn_0f1874, watcom_crt_fn_10f620, watcom_crt_internal_note_queue_overflow_118cc7, watcom_crt_fn_119ec0, watcom_crt_fn_11a224, watcom_crt_fn_11a35f
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a251
 ******************************************************************************/
void bflib_sound_AIL_stop_sequence_0fb83c(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb87c;
      }
    }
  }
  flag = false;
LAB_000fb87c:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11a251(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_resume_sequence_0fb89a (Original VA: 0xfb89a, Ghidra: FUN_000fb89a)
 * Prototype: void bflib_sound_AIL_resume_sequence_0fb89a(undefined4 param_1);
 * Address  : 0xfb89a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_resume_sequence(0x%X)'
 * Callers  : 1 -> bflib_system_io_fn_0f17d0
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a2f8
 ******************************************************************************/
void bflib_sound_AIL_resume_sequence_0fb89a(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb8da;
      }
    }
  }
  flag = false;
LAB_000fb8da:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11a2f8(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_end_sequence_0fb8f8 (Original VA: 0xfb8f8, Ghidra: FUN_000fb8f8)
 * Prototype: void bflib_sound_AIL_end_sequence_0fb8f8(undefined4 param_1);
 * Address  : 0xfb8f8 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_end_sequence(0x%X)'
 * Callers  : 6 -> bflib_system_io_fn_0f0ab8, bflib_system_io_fn_0f1874, watcom_crt_fn_10f620, watcom_crt_fn_11939c, watcom_crt_fn_11c78c, watcom_crt_fn_11c9f4
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a35f
 ******************************************************************************/
void bflib_sound_AIL_end_sequence_0fb8f8(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb938;
      }
    }
  }
  flag = false;
LAB_000fb938:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11a35f(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sequence_tempo_0fb956 (Original VA: 0xfb956, Ghidra: FUN_000fb956)
 * Prototype: void bflib_sound_AIL_set_sequence_tempo_0fb956(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb956 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sequence_tempo(0x%X,%d,%d)'
 * Callers  : 2 -> watcom_crt_fn_11c83e, watcom_crt_fn_11cad3
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a3a5
 ******************************************************************************/
void bflib_sound_AIL_set_sequence_tempo_0fb956(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fb996;
      }
    }
  }
  flag = false;
LAB_000fb996:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_11a3a5(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sequence_volume_0fb9c0 (Original VA: 0xfb9c0, Ghidra: FUN_000fb9c0)
 * Prototype: void bflib_sound_AIL_set_sequence_volume_0fb9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb9c0 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sequence_volume(0x%X,%d,%d)'
 * Callers  : 3 -> bflib_system_io_fn_0f1874, watcom_crt_fn_11c83e, watcom_crt_fn_11cb2d
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a3fc
 ******************************************************************************/
void bflib_sound_AIL_set_sequence_volume_0fb9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fba00;
      }
    }
  }
  flag = false;
LAB_000fba00:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_11a3fc(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sequence_loop_count_0fba2a (Original VA: 0xfba2a, Ghidra: FUN_000fba2a)
 * Prototype: void bflib_sound_AIL_set_sequence_loop_count_0fba2a(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfba2a (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sequence_loop_count(0x%X,%d)'
 * Callers  : 1 -> watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a393
 ******************************************************************************/
void bflib_sound_AIL_set_sequence_loop_count_0fba2a(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fba6a;
      }
    }
  }
  flag = false;
LAB_000fba6a:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_11a393(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sequence_status_0fba8e (Original VA: 0xfba8e, Ghidra: FUN_000fba8e)
 * Prototype: undefined4 bflib_sound_AIL_sequence_status_0fba8e(undefined4 param_1);
 * Address  : 0xfba8e (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sequence_status(0x%X)'
 * Callers  : 3 -> bflib_system_io_fn_0f0ab8, bflib_system_io_fn_0f1874, watcom_crt_fn_11ca3f
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a461
 ******************************************************************************/
undefined4 bflib_sound_AIL_sequence_status_0fba8e(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fbace;
      }
    }
  }
  flag = false;
LAB_000fbace:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11a461(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_XMIDI_master_volume_0fbc06 (Original VA: 0xfbc06, Ghidra: FUN_000fbc06)
 * Prototype: void bflib_sound_AIL_set_XMIDI_master_volume_0fbc06(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfbc06 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_XMIDI_master_volume(0x%X,%d)'
 * Callers  : 1 -> bflib_system_io_fn_0f3264
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a4a4
 ******************************************************************************/
void bflib_sound_AIL_set_XMIDI_master_volume_0fbc06(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fbc46;
      }
    }
  }
  flag = false;
LAB_000fbc46:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_11a4a4(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_MDI_driver_type_0fbd32 (Original VA: 0xfbd32, Ghidra: FUN_000fbd32)
 * Prototype: undefined4 bflib_sound_AIL_MDI_driver_type_0fbd32(undefined4 param_1);
 * Address  : 0xfbd32 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_MDI_driver_type(0x%X)'
 * Callers  : 1 -> bflib_video_bf25_init_music_0fe128
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_tandy_voice_music_119c6e
 ******************************************************************************/
undefined4 bflib_sound_AIL_MDI_driver_type_0fbd32(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fbd72;
      }
    }
  }
  flag = false;
LAB_000fbd72:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_tandy_voice_music_119c6e(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_GTL_filename_prefix_0fbd90 (Original VA: 0xfbd90, Ghidra: FUN_000fbd90)
 * Prototype: void bflib_sound_AIL_set_GTL_filename_prefix_0fbd90(undefined4 param_1);
 * Address  : 0xfbd90 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_GTL_filename_prefix(%s)'
 * Callers  : 1 -> bflib_video_bf25_init_music_0fe128
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_119dcb
 ******************************************************************************/
void bflib_sound_AIL_set_GTL_filename_prefix_0fbd90(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fbdd0;
      }
    }
  }
  flag = false;
LAB_000fbdd0:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_119dcb(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_install_timbre_0fbe59 (Original VA: 0xfbe59, Ghidra: FUN_000fbe59)
 * Prototype: undefined4 bflib_sound_AIL_install_timbre_0fbe59(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfbe59 (Size: 105 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_install_timbre(0x%X,%d,%d)'
 * Callers  : 0 -> 
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a52a
 ******************************************************************************/
undefined4 bflib_sound_AIL_install_timbre_0fbe59(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fbe98;
      }
    }
  }
  flag = false;
LAB_000fbe98:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  uval = watcom_crt_fn_11a52a(param_2,param_3,param_4);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sequence_position_0fc0c2 (Original VA: 0xfc0c2, Ghidra: FUN_000fc0c2)
 * Prototype: void bflib_sound_AIL_sequence_position_0fc0c2(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfc0c2 (Size: 203 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sequence_position(0x%X,0x%X,0x%X)'
 * Callers  : 1 -> watcom_crt_internal_note_queue_overflow_118cc7
 * Callees  : 6 -> bflib_system_io_fn_0f9733, bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_115acb, watcom_crt_fn_11a6b8
 ******************************************************************************/
void bflib_sound_AIL_sequence_position_0fc0c2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc10a;
      }
    }
  }
  flag = false;
LAB_000fc10a:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_11a6b8(param_1,param_2,param_3);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f9733();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_branch_index_0fc18d (Original VA: 0xfc18d, Ghidra: FUN_000fc18d)
 * Prototype: void bflib_sound_AIL_branch_index_0fc18d(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc18d (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_branch_index(0x%X,%u)'
 * Callers  : 1 -> watcom_crt_fn_1184ad
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a71a
 ******************************************************************************/
void bflib_sound_AIL_branch_index_0fc18d(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc1cd;
      }
    }
  }
  flag = false;
LAB_000fc1cd:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_11a71a(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_register_trigger_callback_0fc255 (Original VA: 0xfc255, Ghidra: FUN_000fc255)
 * Prototype: undefined4 bflib_sound_AIL_register_trigger_callback_0fc255(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc255 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_register_trigger_callback(0x%X,0x%X)'
 * Callers  : 1 -> bflib_system_io_fn_0f1874
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a7a7
 ******************************************************************************/
undefined4 bflib_sound_AIL_register_trigger_callback_0fc255(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc295;
      }
    }
  }
  flag = false;
LAB_000fc295:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11a7a7(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_register_sequence_callback_0fc2b9 (Original VA: 0xfc2b9, Ghidra: FUN_000fc2b9)
 * Prototype: undefined4 bflib_sound_AIL_register_sequence_callback_0fc2b9(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc2b9 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_register_sequence_callback(0x%X,0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a7c0
 ******************************************************************************/
undefined4 bflib_sound_AIL_register_sequence_callback_0fc2b9(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc2f9;
      }
    }
  }
  flag = false;
LAB_000fc2f9:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11a7c0(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_register_event_callback_0fc381 (Original VA: 0xfc381, Ghidra: FUN_000fc381)
 * Prototype: undefined4 bflib_sound_AIL_register_event_callback_0fc381(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc381 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_register_event_callback(0x%X,0x%X)'
 * Callers  : 2 -> bflib_sound_insufficient_memory_hwave_descriptor_11b68b, watcom_crt_fn_11b840
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a7f2
 ******************************************************************************/
undefined4 bflib_sound_AIL_register_event_callback_0fc381(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc3c1;
      }
    }
  }
  flag = false;
LAB_000fc3c1:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11a7f2(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_register_timbre_callback_0fc3e5 (Original VA: 0xfc3e5, Ghidra: FUN_000fc3e5)
 * Prototype: undefined4 bflib_sound_AIL_register_timbre_callback_0fc3e5(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc3e5 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_register_timbre_callback(0x%X,0x%X)'
 * Callers  : 2 -> bflib_sound_insufficient_memory_hwave_descriptor_11b68b, watcom_crt_fn_11b840
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a80b
 ******************************************************************************/
undefined4 bflib_sound_AIL_register_timbre_callback_0fc3e5(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc425;
      }
    }
  }
  flag = false;
LAB_000fc425:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11a80b(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_sequence_user_data_0fc449 (Original VA: 0xfc449, Ghidra: FUN_000fc449)
 * Prototype: void bflib_sound_AIL_set_sequence_user_data_0fc449(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfc449 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_sequence_user_data(0x%X,%u,%d)'
 * Callers  : 1 -> watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a824
 ******************************************************************************/
void bflib_sound_AIL_set_sequence_user_data_0fc449(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc489;
      }
    }
  }
  flag = false;
LAB_000fc489:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_11a824(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_sequence_user_data_0fc4b3 (Original VA: 0xfc4b3, Ghidra: FUN_000fc4b3)
 * Prototype: undefined4 bflib_sound_AIL_sequence_user_data_0fc4b3(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc4b3 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_sequence_user_data(0x%X,%u)'
 * Callers  : 1 -> watcom_crt_fn_11c314
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a841
 ******************************************************************************/
undefined4 bflib_sound_AIL_sequence_user_data_0fc4b3(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc4f3;
      }
    }
  }
  flag = false;
LAB_000fc4f3:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11a841(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_lock_channel_0fc57b (Original VA: 0xfc57b, Ghidra: FUN_000fc57b)
 * Prototype: undefined4 bflib_sound_AIL_lock_channel_0fc57b(undefined4 param_1);
 * Address  : 0xfc57b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_lock_channel(0x%X)'
 * Callers  : 2 -> watcom_crt_fn_1184ad, watcom_crt_fn_11a2f8
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a871
 ******************************************************************************/
undefined4 bflib_sound_AIL_lock_channel_0fc57b(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc5bb;
      }
    }
  }
  flag = false;
LAB_000fc5bb:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11a871(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_release_channel_0fc5d9 (Original VA: 0xfc5d9, Ghidra: FUN_000fc5d9)
 * Prototype: void bflib_sound_AIL_release_channel_0fc5d9(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc5d9 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_release_channel(0x%X,%d)'
 * Callers  : 2 -> watcom_crt_fn_1184ad, watcom_crt_fn_11a251
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11a9c6
 ******************************************************************************/
void bflib_sound_AIL_release_channel_0fc5d9(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc619;
      }
    }
  }
  flag = false;
LAB_000fc619:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_11a9c6(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_map_sequence_channel_0fc63d (Original VA: 0xfc63d, Ghidra: FUN_000fc63d)
 * Prototype: void bflib_sound_AIL_map_sequence_channel_0fc63d(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfc63d (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_map_sequence_channel(0x%X,%d,%d)'
 * Callers  : 1 -> watcom_crt_fn_1184ad
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11aac5
 ******************************************************************************/
void bflib_sound_AIL_map_sequence_channel_0fc63d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc67d;
      }
    }
  }
  flag = false;
LAB_000fc67d:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  watcom_crt_fn_11aac5(param_1,param_2,param_3);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_send_channel_voice_message_0fc70b (Original VA: 0xfc70b, Ghidra: FUN_000fc70b)
 * Prototype: void bflib_sound_AIL_send_channel_voice_message_0fc70b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0xfc70b (Size: 125 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_send_channel_voice_message(0x%X,0x%X,0x%X,0x%X,0x%X)'
 * Callers  : 2 -> bflib_system_io_fn_0f17d0, bflib_system_io_fn_0f1874
 * Callees  : 4 -> bflib_system_io_fn_0f97d6, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11ab19
 ******************************************************************************/
void bflib_sound_AIL_send_channel_voice_message_0fc70b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool flag;
  int val;
  undefined4 *word_ptr;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  word_ptr = (undefined4 *)&stack0xfffffff8;
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    uStack_c = 0xfc735;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      uStack_c = 0xfc73e;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc74b;
      }
    }
  }
  flag = false;
LAB_000fc74b:
  if (flag) {
    uStack_c = param_5;
    word_ptr = &uStack_10;
    uStack_10 = param_4;
    bflib_system_io_fn_0f97d6();
  }
  *(undefined4 *)((int)word_ptr + -4) = param_5;
  *(undefined4 *)((int)word_ptr + -8) = param_4;
  *(undefined4 *)((int)word_ptr + -0xc) = param_3;
  *(undefined4 *)((int)word_ptr + -0x10) = param_2;
  *(undefined4 *)((int)word_ptr + -0x14) = param_1;
  *(undefined4 *)((int)word_ptr + -0x18) = 0xfc77c;
  watcom_crt_fn_11ab19();
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_send_sysex_message_0fc788 (Original VA: 0xfc788, Ghidra: FUN_000fc788)
 * Prototype: void bflib_sound_AIL_send_sysex_message_0fc788(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc788 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_send_sysex_message(0x%X,0x%X)'
 * Callers  : 0 -> 
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11abcc
 ******************************************************************************/
void bflib_sound_AIL_send_sysex_message_0fc788(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc7c8;
      }
    }
  }
  flag = false;
LAB_000fc7c8:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_11abcc(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_open_0fc8bd (Original VA: 0xfc8bd, Ghidra: FUN_000fc8bd)
 * Prototype: undefined4 bflib_sound_AIL_redbook_open_0fc8bd(undefined4 param_1);
 * Address  : 0xfc8bd (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_open(%ld)'
 * Callers  : 1 -> bflib_sound_bf110_cd_non_audio_0ec93f
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11bef4
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_open_0fc8bd(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc8fd;
      }
    }
  }
  flag = false;
LAB_000fc8fd:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11bef4(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_close_0fc91b (Original VA: 0xfc91b, Ghidra: FUN_000fc91b)
 * Prototype: void bflib_sound_AIL_redbook_close_0fc91b(undefined4 param_1);
 * Address  : 0xfc91b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_close(0x%lX)'
 * Callers  : 2 -> bflib_sound_bf110_cd_non_audio_0ec93f, bflib_system_io_fn_0eca60
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11bf69
 ******************************************************************************/
void bflib_sound_AIL_redbook_close_0fc91b(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fc95b;
      }
    }
  }
  flag = false;
LAB_000fc95b:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11bf69(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_status_0fca35 (Original VA: 0xfca35, Ghidra: FUN_000fca35)
 * Prototype: undefined4 bflib_sound_AIL_redbook_status_0fca35(undefined4 param_1);
 * Address  : 0xfca35 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_status(0x%lX)'
 * Callers  : 16 -> bflib_sound_bf110_cd_non_audio_0ec93f, bflib_sound_bf110_play_cd_non_0ecabc, bflib_sound_bf110_cd_non_audio_0eccb6, bflib_sound_bf110_cd_non_audio_0ecd16, bflib_sound_bf110_cd_non_audio_0ecd76, bflib_sound_bf110_cd_non_audio_0ece00, bflib_system_io_fn_0ecf4c, watcom_crt_fn_11c022 ...
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11bfc3
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_status_0fca35(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fca75;
      }
    }
  }
  flag = false;
LAB_000fca75:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11bfc3(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_tracks_0fca93 (Original VA: 0xfca93, Ghidra: FUN_000fca93)
 * Prototype: undefined4 bflib_sound_AIL_redbook_tracks_0fca93(undefined4 param_1);
 * Address  : 0xfca93 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_tracks(0x%lX)'
 * Callers  : 5 -> bflib_sound_bf110_cd_non_audio_0ec93f, bflib_sound_bf110_play_cd_non_0ecabc, bflib_sound_bf110_cd_non_audio_0ece00, bflib_system_io_fn_0ecf0b, watcom_crt_fn_11c09c
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c022
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_tracks_0fca93(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcad3;
      }
    }
  }
  flag = false;
LAB_000fcad3:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11c022(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_track_info_0fcaf1 (Original VA: 0xfcaf1, Ghidra: FUN_000fcaf1)
 * Prototype: void bflib_sound_AIL_redbook_track_info_0fcaf1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfcaf1 (Size: 112 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_track_info(0x%lX, %ld, 0x%lX, 0x%lX)'
 * Callers  : 3 -> bflib_sound_bf110_play_cd_non_0ecabc, bflib_sound_bf110_cd_non_audio_0ece00, watcom_crt_fn_11c09c
 * Callees  : 4 -> bflib_system_io_fn_0f979c, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c03c
 ******************************************************************************/
void bflib_sound_AIL_redbook_track_info_0fcaf1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool flag;
  int val;
  undefined4 *word_ptr;
  undefined4 uStack_c;
  
  word_ptr = (undefined4 *)&stack0xfffffff8;
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    uStack_c = 0xfcb1b;
    val = watcom_crt_fn_115839();
    if (val == 0) {
      uStack_c = 0xfcb24;
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcb31;
      }
    }
  }
  flag = false;
LAB_000fcb31:
  if (flag) {
    word_ptr = &uStack_c;
    uStack_c = param_4;
    bflib_system_io_fn_0f979c();
  }
  *(undefined4 *)((int)word_ptr + -4) = param_4;
  *(undefined4 *)((int)word_ptr + -8) = param_3;
  *(undefined4 *)((int)word_ptr + -0xc) = param_2;
  *(undefined4 *)((int)word_ptr + -0x10) = param_1;
  *(undefined4 *)((int)word_ptr + -0x14) = 0xfcb5c;
  watcom_crt_fn_11c03c();
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_position_0fcbbf (Original VA: 0xfcbbf, Ghidra: FUN_000fcbbf)
 * Prototype: undefined4 bflib_sound_AIL_redbook_position_0fcbbf(undefined4 param_1);
 * Address  : 0xfcbbf (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_position(0x%lX)'
 * Callers  : 2 -> bflib_system_io_fn_0ecff2, watcom_crt_fn_11c205
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c138
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_position_0fcbbf(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcbff;
      }
    }
  }
  flag = false;
LAB_000fcbff:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11c138(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_play_0fcc7b (Original VA: 0xfcc7b, Ghidra: FUN_000fcc7b)
 * Prototype: undefined4 bflib_sound_AIL_redbook_play_0fcc7b(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfcc7b (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_play(0x%lX, %ld, %ld)'
 * Callers  : 3 -> bflib_sound_bf110_play_cd_non_0ecabc, bflib_sound_bf110_cd_non_audio_0ece00, watcom_crt_fn_11c231
 * Callees  : 4 -> bflib_system_io_fn_0f9767, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c185
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_play_0fcc7b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fccbb;
      }
    }
  }
  flag = false;
LAB_000fccbb:
  if (flag) {
    bflib_system_io_fn_0f9767();
  }
  uval = watcom_crt_fn_11c185(param_1,param_2,param_3);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_stop_0fcce5 (Original VA: 0xfcce5, Ghidra: FUN_000fcce5)
 * Prototype: undefined4 bflib_sound_AIL_redbook_stop_0fcce5(undefined4 param_1);
 * Address  : 0xfcce5 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_stop(0x%lX)'
 * Callers  : 4 -> bflib_system_io_fn_0eca60, bflib_sound_bf110_play_cd_non_0ecabc, bflib_sound_bf110_cd_non_audio_0ecd76, bflib_sound_bf110_cd_non_audio_0ece00
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c1d0
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_stop_0fcce5(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcd25;
      }
    }
  }
  flag = false;
LAB_000fcd25:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11c1d0(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_pause_0fcd43 (Original VA: 0xfcd43, Ghidra: FUN_000fcd43)
 * Prototype: undefined4 bflib_sound_AIL_redbook_pause_0fcd43(undefined4 param_1);
 * Address  : 0xfcd43 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_pause(0x%lX)'
 * Callers  : 1 -> bflib_sound_bf110_cd_non_audio_0eccb6
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c205
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_pause_0fcd43(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcd83;
      }
    }
  }
  flag = false;
LAB_000fcd83:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11c205(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_resume_0fcda1 (Original VA: 0xfcda1, Ghidra: FUN_000fcda1)
 * Prototype: undefined4 bflib_sound_AIL_redbook_resume_0fcda1(undefined4 param_1);
 * Address  : 0xfcda1 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_resume(0x%lX)'
 * Callers  : 1 -> bflib_sound_bf110_cd_non_audio_0ecd16
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c231
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_resume_0fcda1(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcde1;
      }
    }
  }
  flag = false;
LAB_000fcde1:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11c231(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_volume_0fcdff (Original VA: 0xfcdff, Ghidra: FUN_000fcdff)
 * Prototype: undefined4 bflib_sound_AIL_redbook_volume_0fcdff(undefined4 param_1);
 * Address  : 0xfcdff (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_volume(0x%lX)'
 * Callers  : 2 -> bflib_system_io_fn_0ecfce, watcom_crt_fn_11c278
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c25e
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_volume_0fcdff(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fce3f;
      }
    }
  }
  flag = false;
LAB_000fce3f:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11c25e(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_redbook_set_volume_0fce5d (Original VA: 0xfce5d, Ghidra: FUN_000fce5d)
 * Prototype: undefined4 bflib_sound_AIL_redbook_set_volume_0fce5d(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfce5d (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_redbook_set_volume(0x%lX,%ld)'
 * Callers  : 2 -> bflib_system_io_fn_0eca60, bflib_system_io_bf110_set_redbook_volume_0ecf70
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c278
 ******************************************************************************/
undefined4 bflib_sound_AIL_redbook_set_volume_0fce5d(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fce9d;
      }
    }
  }
  flag = false;
LAB_000fce9d:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11c278(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_quick_load_0fcf16 (Original VA: 0xfcf16, Ghidra: FUN_000fcf16)
 * Prototype: undefined4 bflib_sound_AIL_quick_load_0fcf16(undefined4 param_1);
 * Address  : 0xfcf16 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_quick_load(%s)'
 * Callers  : 1 -> watcom_crt_fn_11ca3f
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_out_memory_11c6b4
 ******************************************************************************/
undefined4 bflib_sound_AIL_quick_load_0fcf16(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcf56;
      }
    }
  }
  flag = false;
LAB_000fcf56:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_out_memory_11c6b4(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96f8();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_quick_unload_0fcf74 (Original VA: 0xfcf74, Ghidra: FUN_000fcf74)
 * Prototype: void bflib_sound_AIL_quick_unload_0fcf74(undefined4 param_1);
 * Address  : 0xfcf74 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_quick_unload(0x%X)'
 * Callers  : 3 -> watcom_crt_fn_11c45f, bflib_sound_file_found_11c4e3, watcom_crt_fn_11ca3f
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c78c
 ******************************************************************************/
void bflib_sound_AIL_quick_unload_0fcf74(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fcfb4;
      }
    }
  }
  flag = false;
LAB_000fcfb4:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11c78c(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_quick_play_0fd036 (Original VA: 0xfd036, Ghidra: FUN_000fd036)
 * Prototype: undefined4 bflib_sound_AIL_quick_play_0fd036(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfd036 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_quick_play(0x%X,%d)'
 * Callers  : 1 -> watcom_crt_fn_11ca3f
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c83e
 ******************************************************************************/
undefined4 bflib_sound_AIL_quick_play_0fd036(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fd076;
      }
    }
  }
  flag = false;
LAB_000fd076:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  uval = watcom_crt_fn_11c83e(param_1,param_2);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_quick_halt_0fd09a (Original VA: 0xfd09a, Ghidra: FUN_000fd09a)
 * Prototype: void bflib_sound_AIL_quick_halt_0fd09a(undefined4 param_1);
 * Address  : 0xfd09a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_quick_halt(0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11c83e
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11c9f4
 ******************************************************************************/
void bflib_sound_AIL_quick_halt_0fd09a(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fd0da;
      }
    }
  }
  flag = false;
LAB_000fd0da:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11c9f4(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_quick_status_0fd0f8 (Original VA: 0xfd0f8, Ghidra: FUN_000fd0f8)
 * Prototype: undefined4 bflib_sound_AIL_quick_status_0fd0f8(undefined4 param_1);
 * Address  : 0xfd0f8 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_quick_status(0x%X)'
 * Callers  : 2 -> watcom_crt_fn_11cad3, watcom_crt_fn_11cb2d
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11cabd
 ******************************************************************************/
undefined4 bflib_sound_AIL_quick_status_0fd0f8(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fd138;
      }
    }
  }
  flag = false;
LAB_000fd138:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11cabd(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_close_stream_0fd356 (Original VA: 0xfd356, Ghidra: FUN_000fd356)
 * Prototype: void bflib_sound_AIL_close_stream_0fd356(undefined4 param_1);
 * Address  : 0xfd356 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_close_stream(0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11dae3
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11d37c
 ******************************************************************************/
void bflib_sound_AIL_close_stream_0fd356(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fd396;
      }
    }
  }
  flag = false;
LAB_000fd396:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11d37c(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_start_stream_0fd418 (Original VA: 0xfd418, Ghidra: FUN_000fd418)
 * Prototype: void bflib_sound_AIL_start_stream_0fd418(undefined4 param_1);
 * Address  : 0xfd418 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_start_stream(0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11d8c4
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11d87a
 ******************************************************************************/
void bflib_sound_AIL_start_stream_0fd418(undefined4 param_1)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fd458;
      }
    }
  }
  flag = false;
LAB_000fd458:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  watcom_crt_fn_11d87a(param_1);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_stream_status_0fd7e2 (Original VA: 0xfd7e2, Ghidra: FUN_000fd7e2)
 * Prototype: undefined4 bflib_sound_AIL_stream_status_0fd7e2(undefined4 param_1);
 * Address  : 0xfd7e2 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_stream_status(0x%X)'
 * Callers  : 1 -> watcom_crt_fn_11d8c4
 * Callees  : 4 -> bflib_system_io_fn_0f970b, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11d471
 ******************************************************************************/
undefined4 bflib_sound_AIL_stream_status_0fd7e2(undefined4 param_1)

{
  bool flag;
  int val;
  undefined4 uval;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fd822;
      }
    }
  }
  flag = false;
LAB_000fd822:
  if (flag) {
    bflib_system_io_fn_0f970b();
  }
  uval = watcom_crt_fn_11d471(param_1);
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      watcom_crt_fn_115acb(g_bss_003df824,&g_data_00195d30,g_sound_active_flag + 0xe);
      bflib_system_io_fn_0f96cd();
    }
  }
  g_sound_active_flag = g_sound_active_flag + -1;
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_AIL_set_stream_position_0fd840 (Original VA: 0xfd840, Ghidra: FUN_000fd840)
 * Prototype: void bflib_sound_AIL_set_stream_position_0fd840(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfd840 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_set_stream_position(0x%X,%d)'
 * Callers  : 1 -> watcom_crt_fn_11d87a
 * Callees  : 4 -> bflib_system_io_fn_0f9733, bflib_system_io_audio_driver_op_0f9819, watcom_crt_fn_115839, watcom_crt_fn_11d6cf
 ******************************************************************************/
void bflib_sound_AIL_set_stream_position_0fd840(undefined4 param_1,undefined4 param_2)

{
  bool flag;
  int val;
  
  g_sound_active_flag = g_sound_active_flag + 1;
  if ((g_bss_003df818 != 0) && ((g_sound_active_flag == 1 || (g_bss_003df81c != 0)))) {
    val = watcom_crt_fn_115839();
    if (val == 0) {
      val = bflib_system_io_audio_driver_op_0f9819();
      if (val != 0) {
        flag = true;
        goto LAB_000fd880;
      }
    }
  }
  flag = false;
LAB_000fd880:
  if (flag) {
    bflib_system_io_fn_0f9733();
  }
  watcom_crt_fn_11d6cf(param_1,param_2);
  g_sound_active_flag = g_sound_active_flag + -1;
  return;
}

/******************************************************************************
 * Function : bflib_sound_AIL_startup_0fee88 (Original VA: 0xfee88, Ghidra: FUN_000fee88)
 * Prototype: undefined4 bflib_sound_AIL_startup_0fee88(void);
 * Address  : 0xfee88 (Size: 348 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : References 'AIL_startup()'
 * Callers  : 3 -> bflib_sound_bf110_cd_non_audio_0ec93f, bflib_sound_bf3_init_sound_0f8eec, bflib_video_bf25_init_music_0fe128
 * Callees  : 10 -> bflib_system_io_fn_0f1abb, bflib_system_io_fn_0f96a3, bflib_system_io_audio_driver_op_0f9819, bflib_system_io_fn_0fed5e, bflib_system_io_fn_0fedb1, watcom_crt_fn_1145bf, watcom_crt_fn_114f96, watcom_crt_fn_115a4a ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_sound_AIL_startup_0fee88(void)

{
  char ch;
  int val;
  int val_2;
  char *str_ptr;
  char **val_3;
  char *str_ptr_2;
  char *pcStack_1c;
  char *apcStack_18 [2];
  
  if (g_data_00195d28 != 0) {
    return 0;
  }
  g_data_00195da0 = bflib_system_io_fn_0fed8f;
  g_data_00195da4 = bflib_system_io_fn_0feda2;
  g_data_00195da8 = bflib_system_io_fn_0fedb1;
  g_data_00195dac = bflib_system_io_fn_0fedbe;
  g_data_00195db0 = bflib_system_io_fn_0fedeb;
  apcStack_18[0] = (char *)0xfeed6;
  bflib_system_io_fn_0fed5e();
  val_3 = apcStack_18;
  apcStack_18[0] = s_MSS_DEBUG_001712d8;
  g_bss_003df818 = 0;
  g_bss_003df81c = 0;
  pcStack_1c = (char *)0xfeef4;
  val = bflib_system_io_fn_0fedb1();
  if (val != 0) {
    val_3 = &pcStack_1c;
    pcStack_1c = s_MSS_SYS_DEBUG_001712e2;
    val_2 = bflib_system_io_fn_0fedb1();
    if (val_2 != 0) {
      g_bss_003df81c = 1;
    }
    g_bss_003df824 = watcom_crt_fn_115a4a(val);
    if (g_bss_003df824 != -1) {
      bflib_system_io_fn_0f1abb();
      watcom_crt_fn_11df55();
      str_ptr_2 = &g_bss_003dfa14;
      str_ptr = (char *)watcom_crt_fn_11e0a0();
      do {
        ch = *str_ptr;
        str_ptr = str_ptr + 1;
        *str_ptr_2 = ch;
        str_ptr_2 = str_ptr_2 + 1;
      } while (ch != '\0');
      g_bss_003dfa2c = 0;
      bflib_system_io_fn_0f96a3(s__________________________________001712f0);
      bflib_system_io_fn_0f96a3(s_Miles_Sound_System_usage_script_g_00171342);
      bflib_system_io_fn_0f96a3(s_Start_time__0017137b);
      bflib_system_io_fn_0f96a3(&g_bss_003dfa14);
      bflib_system_io_fn_0f96a3(s__________________________________00171388);
      watcom_crt_fn_1145bf();
      g_bss_003df820 = watcom_crt_fn_114f96();
      g_bss_003df818 = 1;
      g_sound_active_flag = 1;
      bflib_system_io_audio_driver_op_0f9819();
      g_sound_active_flag = 0;
      bflib_system_io_fn_0f96a3(s_AIL_startup___001713de);
      g_data_00195d28 = 1;
      return 1;
    }
  }
  *(undefined4 *)((int)val_3 + -4) = 0xfeeff;
  watcom_crt_fn_1145bf();
  g_data_00195d28 = 1;
  return 1;
}

/******************************************************************************
 * Function : bflib_sound_closing_socket_101c78 (Original VA: 0x101c78, Ghidra: FUN_00101c78)
 * Prototype: void bflib_sound_closing_socket_101c78(void);
 * Address  : 0x101c78 (Size: 661 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'CLOSING SOCKET %x'
 * Callers  : 2 -> LbNETWORK_1032d8, LbNETWORK_103464
 * Callees  : 6 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a, bflib_system_io_fn_0f7786, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45, bflib_system_io_fn_103100
 ******************************************************************************/
void bflib_sound_closing_socket_101c78(void)

{
  char ch;
  undefined4 *arg_eax;
  undefined4 uval;
  ushort extraout_CX;
  char *str_ptr;
  char *str_ptr_2;
  undefined1 auStack_110 [20];
  uint local_fc;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_b4;
  undefined4 local_a4;
  uint local_98;
  undefined4 local_88;
  uint local_7c;
  undefined4 local_6c;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  undefined1 *local_3c;
  ushort local_34;
  
  if (*(int *)((int)arg_eax + 0x1e) == 0) {
    str_ptr = s_DEINIT_FAILED_0017260f;
    str_ptr_2 = &g_bss_003e0254;
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') {
        return;
      }
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    return;
  }
  if (arg_eax[2] != 0) {
    local_34 = *(ushort *)(arg_eax + 0x12);
    bflib_system_io_fn_103100(s_CLOSING_SOCKET__x_001725cc,local_34);
    LbScreenWaitVbi();
    local_fc = (uint)local_34;
    LbScreenWaitVbi();
    local_4c = (uint)extraout_CX;
    local_50 = 0x300;
    bflib_system_io_fn_0fed1d();
    local_e0 = *(undefined2 *)((int)arg_eax + 0x36);
    local_e2 = *(undefined2 *)(arg_eax + 0xe);
    local_3c = auStack_110;
    bflib_system_io_fn_0fed45();
    bflib_system_io_fn_103100(s_SOCKET_CLOSED_001725df);
    arg_eax[2] = 0;
  }
  if (*(short *)((int)arg_eax + 0x3e) != 0) {
    LbScreenWaitVbi();
    local_dc = 0x201;
    local_d8 = (uint)*(ushort *)((int)arg_eax + 0x3e);
    local_d4 = (uint)*(ushort *)(arg_eax + 0x10);
    local_d0 = (uint)*(ushort *)((int)arg_eax + 0x42);
    bflib_system_io_fn_0f7786();
  }
  *(undefined4 *)((int)arg_eax + 0x1e) = 0;
  local_98 = (uint)*(ushort *)((int)arg_eax + 0x2a);
  local_a4 = 0x101;
  bflib_system_io_fn_0f7786();
  *(undefined2 *)((int)arg_eax + 0x2a) = 0;
  local_7c = (uint)*(ushort *)(arg_eax + 0xb);
  local_88 = 0x101;
  bflib_system_io_fn_0f7786();
  arg_eax[0xb] = 0;
  local_60 = (uint)*(ushort *)(arg_eax + 0xd);
  local_6c = 0x101;
  bflib_system_io_fn_0f7786();
  *(undefined2 *)(arg_eax + 0xd) = 0;
  local_b4 = (uint)*(ushort *)(arg_eax + 0xc);
  bflib_system_io_fn_0f7786();
  arg_eax[0xc] = 0;
  bflib_system_io_fn_103100(s_DEALLOCATED_001725ee);
  str_ptr = s_DEINIT_SUCCESSFULL_001725fb;
  str_ptr_2 = &g_bss_003e0254;
  do {
    ch = *str_ptr;
    *str_ptr_2 = ch;
    if (ch == '\0') break;
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
  } while (ch != '\0');
  uval = bflib_system_io_fn_0e8d4a();
  *(undefined2 *)((int)arg_eax + 0x46) = 0;
  *arg_eax = uval;
  return;
}

/******************************************************************************
 * Function : bflib_sound_fn_113c53 (Original VA: 0x113c53, Ghidra: FUN_00113c53)
 * Prototype: int bflib_sound_fn_113c53(byte *param_1,int param_2,undefined4 *param_3);
 * Address  : 0x113c53 (Size: 144 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : Module bflib/bflib_sound.cpp procedure @ 0x113c53
 * Callers  : 1 -> watcom_crt_io_addr_113d48
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_sound_fn_113c53(byte *param_1,int param_2,undefined4 *param_3)

{
  int loop_i;
  uint uval;
  byte flag;
  byte *byte_ptr;
  uint uval_2;
  byte *byte_ptr_2;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 1;
  uval_2 = 0;
  byte_ptr = param_1;
  do {
    uval = 0xffffffff;
    byte_ptr_2 = param_1;
    do {
      if (uval == 0) break;
      uval = uval - 1;
      flag = *byte_ptr_2;
      byte_ptr_2 = byte_ptr_2 + 1;
    } while (flag != 0);
    if (~uval - 1 <= uval_2) {
LAB_00113cc7:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_1 + uval_2;
      }
      return local_18 * local_14;
    }
    flag = *byte_ptr;
    if ((0x60 < flag) && (flag < 0x7b)) {
      flag = flag - 0x20;
    }
    if (flag == 0x2d) {
      local_14 = -local_14;
    }
    else if (flag != 0x20) {
      for (loop_i = 0; loop_i < param_2; loop_i = loop_i + 1) {
        if (flag == s_0123456789ABCDEF_00172aa0[loop_i]) {
          local_18 = local_18 * param_2 + loop_i;
          break;
        }
      }
      if (loop_i == param_2) goto LAB_00113cc7;
    }
    byte_ptr = byte_ptr + 1;
    uval_2 = uval_2 + 1;
  } while( true );
}

/******************************************************************************
 * Function : bflib_sound_insufficient_memory_driver_descriptor_11419b (Original VA: 0x11419b, Ghidra: FUN_0011419b)
 * Prototype: int * bflib_sound_insufficient_memory_driver_descriptor_11419b(undefined4 *param_1,uint param_2);
 * Address  : 0x11419b (Size: 730 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Insufficient memory for driver descriptor'
 * Callers  : 1 -> bflib_sound_AIL_install_driver_0fa41b
 * Callees  : 11 -> bflib_sound_AIL_get_real_vect_0f9a8c, bflib_sound_AIL_set_real_vect_0f9aea, bflib_sound_AIL_call_driver_0f9c40, bflib_sound_AIL_register_timer_0f9f10, bflib_sound_AIL_set_timer_user_0f9f71, bflib_sound_AIL_set_timer_frequency_0fa039, bflib_sound_AIL_start_timer_0fa1a4, bflib_system_io_fn_0fe896 ...
 ******************************************************************************/
int * bflib_sound_insufficient_memory_driver_descriptor_11419b(undefined4 *param_1,uint param_2)

{
  byte flag;
  char ch;
  byte flag_2;
  int *int_ptr;
  int val;
  undefined4 uval;
  uint loop_i;
  char *str_ptr;
  byte *byte_ptr;
  char *str_ptr_2;
  undefined4 *word_ptr;
  byte *byte_ptr_2;
  bool flag_3;
  bool flag_4;
  
  flag = 0;
  int_ptr = (int *)bflib_system_io_fn_0fe896(0x2c);
  if (int_ptr == (int *)0x0) {
    str_ptr = s_Insufficient_memory_for_driver_d_00172af5;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    return (int *)0x0;
  }
  int_ptr[3] = param_2;
  val = bflib_system_io_fn_0fe8e5(param_2 + 0xf >> 4,int_ptr + 2,int_ptr,int_ptr + 1);
  if (val == 0) {
    str_ptr = s_Insufficient_low_memory_00172b20;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
  }
  else {
    word_ptr = (undefined4 *)int_ptr[2];
    for (loop_i = param_2 >> 2; loop_i != 0; loop_i = loop_i - 1) {
      *word_ptr = *param_1;
      param_1 = param_1 + (uint)flag * -2 + 1;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)word_ptr = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + (uint)flag * -2 + 1);
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    }
    val = 7;
    byte_ptr_2 = (byte *)int_ptr[2];
    byte_ptr = &g_data_00172b39; /* 0x172b39="AIL3DIG" */
    int_ptr[4] = (int)byte_ptr_2;
    while( true ) {
      flag = *byte_ptr;
      flag_2 = *byte_ptr_2;
      if ((0x60 < flag) && (flag < 0x7b)) {
        flag = flag - 0x20;
      }
      if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
        flag_2 = flag_2 - 0x20;
      }
      flag_3 = flag < flag_2;
      flag_4 = flag == flag_2;
      if (!flag_4) break;
      flag_3 = false;
      flag_4 = true;
      if (flag == 0) break;
      val = val + -1;
      flag_4 = true;
      if (val == 0) break;
      byte_ptr = byte_ptr + 1;
      byte_ptr_2 = byte_ptr_2 + 1;
    }
    ch = !flag_4;
    if (!flag_3 && !flag_4) {
      ch = -ch;
    }
    if (ch == '\0') {
      int_ptr[5] = 0;
    }
    else {
      val = 7;
      byte_ptr = &g_data_00172b41; /* 0x172b41="AIL3MDI" */
      byte_ptr_2 = (byte *)int_ptr[4];
      while( true ) {
        flag = *byte_ptr;
        flag_2 = *byte_ptr_2;
        if ((0x60 < flag) && (flag < 0x7b)) {
          flag = flag - 0x20;
        }
        if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
          flag_2 = flag_2 - 0x20;
        }
        flag_3 = flag < flag_2;
        flag_4 = flag == flag_2;
        if (!flag_4) break;
        flag_3 = false;
        flag_4 = true;
        if (flag == 0) break;
        val = val + -1;
        flag_4 = true;
        if (val == 0) break;
        byte_ptr = byte_ptr + 1;
        byte_ptr_2 = byte_ptr_2 + 1;
      }
      ch = !flag_4;
      if (!flag_3 && !flag_4) {
        ch = -ch;
      }
      if (ch != '\0') {
        str_ptr = s_Invalid_driver_type_00172b49;
        str_ptr_2 = &g_bss_003e03f0;
        do {
          ch = *str_ptr;
          str_ptr = str_ptr + 1;
          *str_ptr_2 = ch;
          str_ptr_2 = str_ptr_2 + 1;
        } while (ch != '\0');
        bflib_system_io_fn_0fe961(int_ptr[2],*int_ptr,int_ptr[1]);
        goto LAB_00114359;
      }
      int_ptr[5] = 1;
    }
    val = 0;
    for (loop_i = 0; loop_i < 0x10; loop_i = loop_i + 1) {
      if (*(int *)((int)&g_bss_003e03b0 + val) == 0) {
        *(int **)((int)&g_bss_003e03b0 + val) = int_ptr;
        *(short *)(int_ptr[4] + 0x32) = (short)loop_i;
        break;
      }
      val = val + 4;
    }
    if (loop_i == 0x10) {
      str_ptr = s_Out_of_driver_handles_00172b5e;
      str_ptr_2 = &g_bss_003e03f0;
      do {
        ch = *str_ptr;
        str_ptr = str_ptr + 1;
        *str_ptr_2 = ch;
        str_ptr_2 = str_ptr_2 + 1;
      } while (ch != '\0');
    }
    else {
      *(undefined2 *)(int_ptr[4] + 0x30) = 0;
      int_ptr[6] = 0;
      int_ptr[7] = -1;
      uval = bflib_sound_AIL_get_real_vect_0f9a8c(0x66);
      *(undefined4 *)(int_ptr[4] + 0x36) = uval;
      bflib_sound_AIL_set_real_vect_0f9aea(0x66,(uint)*(ushort *)(int_ptr[4] + 0x34) + *int_ptr);
      int_ptr[9] = 0;
      int_ptr[10] = 0;
      bflib_sound_AIL_call_driver_0f9c40(int_ptr,0x300,0,0);
      if (*(short *)(int_ptr[4] + 0x2e) < 1) {
        int_ptr[8] = -1;
        return int_ptr;
      }
      val = bflib_sound_AIL_register_timer_0f9f10(watcom_crt_fn_113c03);
      int_ptr[8] = val;
      if (val != -1) {
        bflib_sound_AIL_set_timer_user_0f9f71(val,int_ptr);
        bflib_sound_AIL_set_timer_frequency_0fa039(int_ptr[8],(int)*(short *)(int_ptr[4] + 0x2e));
        bflib_sound_AIL_start_timer_0fa1a4(int_ptr[8]);
        return int_ptr;
      }
      str_ptr = s_Out_of_timer_handles_00172b75;
      str_ptr_2 = &g_bss_003e03f0;
      do {
        ch = *str_ptr;
        str_ptr = str_ptr + 1;
        *str_ptr_2 = ch;
        str_ptr_2 = str_ptr_2 + 1;
      } while (ch != '\0');
      bflib_sound_AIL_set_real_vect_0f9aea(0x66,*(undefined4 *)(int_ptr[4] + 0x36));
    }
    bflib_system_io_fn_0fe961(int_ptr[2],*int_ptr,int_ptr[1]);
  }
LAB_00114359:
  bflib_system_io_fn_0fe8c1(int_ptr);
  return (int *)0x0;
}

/******************************************************************************
 * Function : bflib_sound_bf42_load_sound_bank_114852 (Original VA: 0x114852, Ghidra: FUN_00114852)
 * Prototype: undefined8 bflib_sound_bf42_load_sound_bank_114852(void);
 * Address  : 0x114852 (Size: 153 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'BF42 - load sound bank %d'
 * Callers  : 0 -> 
 * Callees  : 2 -> dk_sprintf, bflib_system_io_fn_0f9610
 ******************************************************************************/
undefined8 bflib_sound_bf42_load_sound_bank_114852(void)

{
  short short_val;
  byte arg_al;
  int file_handle;
  undefined4 arg_edx;
  code *str_ptr;
  byte flag;
  undefined8 uval;
  char *str_ptr_2;
  
  flag = 0;
  dk_sprintf(&g_sound_driver_ready,s_BF42___load_sound_bank__d_00172b8c,arg_al);
  bflib_system_io_fn_0f9610();
  if ((((g_bss_003df514 == '\0') || (g_data_00195d18 == '\0')) || ((int)g_data_00195d1d == (uint)arg_al)) ||
     (g_bss_003df515 != '\0')) {
    if (g_bss_003df514 == '\0') {
      str_ptr_2 = s_BF47___load_sound_bank___failed___00172c5d;
    }
    else if (g_data_00195d18 == '\0') {
      str_ptr_2 = s_BF47___load_sound_bank___failed___00172c94;
    }
    else if (g_bss_003df515 == '\0') {
      str_ptr_2 = s_BF47___load_sound_bank___failed___00172cfc;
    }
    else {
      str_ptr_2 = s_BF47___load_sound_bank___failed___00172cc5;
    }
  }
  else {
    bflib_system_io_fn_0f0730();
    file_handle = LbFileOpen();
    if (file_handle != -1) {
      bflib_system_io_fn_0e8a98();
      LbFileWrite();
      LbFileRead();
      LbFileWrite();
      LbFileRead();
      file_handle = 10;
      str_ptr = watcom_crt_audio_driver_op_114818;
      do {
        if (file_handle == 0) break;
        file_handle = file_handle + -1;
        short_val = *(short *)str_ptr;
        str_ptr = str_ptr + ((uint)flag * -2 + 1) * 2;
      } while (g_bss_003df524 != short_val);
                    /* WARNING: Could not recover jumptable at 0x0011499b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uval = (**(code **)(file_handle * 4 + 0x11482a))();
      return uval;
    }
    str_ptr_2 = s_BF46___load_sound_bank___failed___00172c2d;
  }
  dk_sprintf(&g_sound_driver_ready,str_ptr_2);
  bflib_system_io_fn_0f9610();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_sound_fn_114cf2 (Original VA: 0x114cf2, Ghidra: FUN_00114cf2)
 * Prototype: void bflib_sound_fn_114cf2(void);
 * Address  : 0x114cf2 (Size: 180 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : Module bflib/bflib_sound.cpp procedure @ 0x114cf2
 * Callers  : 1 -> bflib_sound_sound_dat_0f949a
 * Callees  : 7 -> LbScreenWaitVbi, dk_sprintf, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileWrite, LbFileRead, bflib_system_io_fn_0e8a98
 ******************************************************************************/
void bflib_sound_fn_114cf2(void)

{
  short short_val;
  short arg_ax;
  int file_handle;
  undefined4 uval;
  code *str_ptr;
  byte flag;
  
  flag = 0;
  dk_sprintf(&g_bss_003e05c4,s__s_SOUND_DAT_00172d2e,&g_bss_003deb3c); /* 0x172d2e="%s/SOUND.DAT" */
  file_handle = LbFileOpen();
  if (file_handle == -1) {
    return;
  }
  uval = bflib_system_io_fn_0e8a98();
  LbScreenWaitVbi(uval);
  LbFileWrite();
  LbFileWrite();
  LbFileRead();
  bflib_system_io_fn_0e8a1c(uval,0);
  file_handle = 10;
  str_ptr = watcom_crt_fn_114cb8;
  do {
    if (file_handle == 0) break;
    file_handle = file_handle + -1;
    short_val = *(short *)str_ptr;
    str_ptr = str_ptr + ((uint)flag * -2 + 1) * 2;
  } while (arg_ax != short_val);
                    /* WARNING: Could not recover jumptable at 0x00114eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(file_handle * 4 + 0x114cca))();
  return;
}

/******************************************************************************
 * Function : bflib_sound_could_allocate_memory_driver_116704 (Original VA: 0x116704, Ghidra: FUN_00116704)
 * Prototype: undefined4 * bflib_sound_could_allocate_memory_driver_116704(int param_1,undefined4 *param_2);
 * Address  : 0x116704 (Size: 1458 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Could not allocate memory for driver'
 * Callers  : 2 -> watcom_crt_driver_file_found_116cb6, watcom_crt_fn_116d7f
 * Callees  : 16 -> bflib_sound_AIL_restore_USE16_ISR_0f9bc6, bflib_sound_AIL_call_driver_0f9c40, bflib_sound_AIL_register_timer_0f9f10, bflib_sound_AIL_set_timer_user_0f9f71, bflib_sound_AIL_set_timer_frequency_0fa039, bflib_sound_AIL_start_timer_0fa1a4, bflib_sound_AIL_get_IO_environment_0fa3bd, bflib_system_io_fn_0fe896 ...
 ******************************************************************************/
undefined4 * bflib_sound_could_allocate_memory_driver_116704(int param_1,undefined4 *param_2)

{
  char ch;
  undefined4 *word_ptr;
  int val;
  int loop_i;
  int loop_i_2;
  char *str_ptr;
  char *str_ptr_2;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  undefined4 *word_ptr_5;
  byte flag;
  undefined4 auStackY_281c [2541];
  undefined4 local_58;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  flag = 0;
  watcom_crt_fn_115bb6();
  local_18 = (undefined4 *)bflib_system_io_fn_0fe896(0x90);
  if (local_18 == (undefined4 *)0x0) {
    str_ptr = s_Could_not_allocate_memory_for_dr_00172d7f;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    return (undefined4 *)0x0;
  }
  word_ptr = &g_data_00172da5; /* 0x172da5="HDIG" */
  word_ptr_2 = local_18;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  local_18[1] = param_1;
  local_14 = local_18;
  if (*(int *)(param_1 + 0x14) == 0) {
    bflib_sound_AIL_call_driver_0f9c40(param_1,0x301,0,&local_40);
    local_18[2] = (uint)local_3a * 0x10 + (uint)local_40;
    loop_i = (uint)local_3c * 0x10 + (uint)local_3e;
    local_18[3] = loop_i;
    local_18[0xf] = 0xffffffff;
    local_18[0x16] = 0;
    local_1c = 0;
    local_18[0x17] = 0;
    local_18[0x1a] = 0;
    local_18[0xe] = loop_i + 8;
    local_18[0x1b] = 0x7f;
    word_ptr = &g_bss_003e0540;
    for (loop_i = 6; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr = 0xffffffff;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr = 0xff;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    }
    if (param_2 != (undefined4 *)0x0) {
      word_ptr = param_2 + (uint)flag * -2 + 1;
      g_bss_003e0540 = *param_2;
      word_ptr_5 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
      word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
      (&g_bss_003e0544)[(uint)flag * -2] = *word_ptr;
      word_ptr_3 = word_ptr_5 + (uint)flag * -2 + 1;
      word_ptr = word_ptr_2 + (uint)flag * -2 + 1;
      *word_ptr_5 = *word_ptr_2;
      *word_ptr_3 = *word_ptr;
      word_ptr_3[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
      (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (word_ptr + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      loop_i = watcom_crt_fn_1165a6(local_18,param_2);
      if (loop_i != 0) {
        local_1c = 1;
        word_ptr = param_2 + (uint)flag * -2 + 1;
        local_58 = *param_2;
        word_ptr_5 = (undefined4 *)(&stack0xffffffb0 + (uint)flag * -8 + (uint)flag * -8);
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *(undefined4 *)(&stack0xffffffac + (uint)flag * -8) = *word_ptr;
        word_ptr_3 = word_ptr_5 + (uint)flag * -2 + 1;
        word_ptr = word_ptr_2 + (uint)flag * -2 + 1;
        *word_ptr_5 = *word_ptr_2;
        *word_ptr_3 = *word_ptr;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      }
    }
    if ((local_1c == 0) &&
       (word_ptr = (undefined4 *)bflib_sound_AIL_get_IO_environment_0fa3bd(local_14[1]), word_ptr != (undefined4 *)0x0)) {
      word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
      g_bss_003e0540 = *word_ptr;
      word_ptr_3 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
      word_ptr_5 = word_ptr_2 + (uint)flag * -2 + 1;
      (&g_bss_003e0544)[(uint)flag * -2] = *word_ptr_2;
      word_ptr_4 = word_ptr_3 + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_5 + (uint)flag * -2 + 1;
      *word_ptr_3 = *word_ptr_5;
      *word_ptr_4 = *word_ptr_2;
      word_ptr_4[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
      (word_ptr_4 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      loop_i = watcom_crt_fn_1165a6(local_14,word_ptr);
      if (loop_i != 0) {
        local_1c = 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        local_58 = *word_ptr;
        word_ptr_5 = (undefined4 *)(&stack0xffffffb0 + (uint)flag * -8 + (uint)flag * -8);
        word_ptr = word_ptr_2 + (uint)flag * -2 + 1;
        *(undefined4 *)(&stack0xffffffac + (uint)flag * -8) = *word_ptr_2;
        word_ptr_3 = word_ptr_5 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *word_ptr_5 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      }
    }
    if ((local_1c == 0) && (g_bss_003e0534 == 1)) {
      local_28 = 0;
      for (local_20 = 0; loop_i = *(int *)(local_14[1] + 0x10),
          local_20 < (int)(uint)*(ushort *)(loop_i + 0x10); local_20 = local_20 + 1) {
        word_ptr = (undefined4 *)
                 (local_28 +
                 (*(uint *)(loop_i + 0xc) & 0xffff) + (*(uint *)(loop_i + 0xc) >> 0x10) * 0x10);
        if (local_20 == 0) {
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          g_bss_003e0540 = *word_ptr;
          word_ptr_3 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
          word_ptr_5 = word_ptr_2 + (uint)flag * -2 + 1;
          (&g_bss_003e0544)[(uint)flag * -2] = *word_ptr_2;
          word_ptr_4 = word_ptr_3 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr_5 + (uint)flag * -2 + 1;
          *word_ptr_3 = *word_ptr_5;
          *word_ptr_4 = *word_ptr_2;
          word_ptr_4[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_4 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        }
        loop_i = watcom_crt_fn_1165a6(local_14,word_ptr);
        if (loop_i != 0) {
          local_1c = 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          local_58 = *word_ptr;
          word_ptr_5 = (undefined4 *)(&stack0xffffffb0 + (uint)flag * -8 + (uint)flag * -8);
          word_ptr = word_ptr_2 + (uint)flag * -2 + 1;
          *(undefined4 *)(&stack0xffffffac + (uint)flag * -8) = *word_ptr_2;
          word_ptr_3 = word_ptr_5 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *word_ptr_5 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          break;
        }
        local_28 = local_28 + 0x18;
      }
    }
    if (local_1c == 0) {
      str_ptr = s_Digital_sound_hardware_not_found_00172dc0;
LAB_00116939:
      str_ptr_2 = &g_bss_003e03f0;
      do {
        ch = *str_ptr;
        str_ptr = str_ptr + 1;
        *str_ptr_2 = ch;
        str_ptr_2 = str_ptr_2 + 1;
      } while (ch != '\0');
    }
    else {
      g_bss_003e0540 = local_58;
      word_ptr_5 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
      word_ptr = (undefined4 *)(&stack0xffffffb0 + (uint)flag * -8 + (uint)flag * -8);
      (&g_bss_003e0544)[(uint)flag * -2] = *(undefined4 *)(&stack0xffffffac + (uint)flag * -8);
      word_ptr_3 = word_ptr_5 + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
      *word_ptr_5 = *word_ptr;
      *word_ptr_3 = *word_ptr_2;
      word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
      (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      loop_i = g_bss_003e04f8;
      if (g_bss_003e0538 != 0) {
        loop_i = 0x2000;
      }
      local_14[0xb] = 0;
      loop_i_2 = loop_i + 0xf >> 0x1f;
      do {
        val = bflib_system_io_fn_0fe8e5((int)((loop_i + 0xf + loop_i_2 * -0x10) - (uint)(loop_i_2 << 3 < 0)) >> 4,
                             &local_2c,&local_30,&local_34);
        if (val == 0) {
          str_ptr = s_Could_not_allocate_DMA_buffers_00172de2;
          goto LAB_00116939;
        }
        if (local_14[0xb] != 0) {
          bflib_system_io_fn_0fe961(local_14[0xb],local_14[9],local_14[10]);
        }
        local_14[0xb] = local_2c;
        local_14[9] = local_30;
        local_14[10] = local_34;
      } while ((local_30 >> 0xc & 0xf0000) != (((local_30 >> 0xc) + loop_i) - 1 & 0xf0000));
      loop_i = watcom_crt_minimum_dma_buffer_size_116209(local_14);
      if (loop_i != 0) {
        bflib_sound_AIL_call_driver_0f9c40(local_14[1],0x305,0,0);
        word_ptr = local_14;
        *(undefined4 *)(local_14[1] + 0x18) = 1;
        local_14[0x13] = (int)local_14[5] / (int)(local_14[0x10] * local_14[0x11]);
        local_14[0x12] = (int)local_14[5] / (int)local_14[0x11];
        loop_i = (int)local_14[5] / (int)local_14[0x11] << 2;
        local_14[0x14] = loop_i;
        loop_i_2 = bflib_system_io_fn_0fe896(loop_i);
        word_ptr[0x15] = loop_i_2;
        loop_i = g_bss_003e0500;
        if (loop_i_2 != 0) {
          word_ptr[0x19] = g_bss_003e0500;
          loop_i = bflib_system_io_fn_0fe896(loop_i * 0x8a8);
          word_ptr_2 = local_14;
          word_ptr[0x18] = loop_i;
          if (loop_i == 0) {
            str_ptr = s_Could_not_allocate_SAMPLE_struct_00172e23;
            str_ptr_2 = &g_bss_003e03f0;
            do {
              ch = *str_ptr;
              str_ptr = str_ptr + 1;
              *str_ptr_2 = ch;
              str_ptr_2 = str_ptr_2 + 1;
            } while (ch != '\0');
            if (*(int *)(param_1 + 0x1c) != -1) {
              bflib_sound_AIL_restore_USE16_ISR_0f9bc6(*(undefined4 *)(param_1 + 0x1c));
            }
            bflib_sound_AIL_call_driver_0f9c40(local_14[1],0x306,0,0);
            *(undefined4 *)(local_14[1] + 0x18) = 0;
            bflib_system_io_fn_0fe961(local_14[0xb],local_14[9],local_14[10]);
          }
          else {
            local_24 = 0;
            loop_i = 0;
            while (local_24 < (int)local_14[0x19]) {
              word_ptr = &g_data_00172e49; /* 0x172e49="HSAM" */
              word_ptr_5 = (undefined4 *)(local_14[0x18] + loop_i);
              for (loop_i_2 = 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
                *word_ptr_5 = *word_ptr;
                word_ptr = word_ptr + (uint)flag * -2 + 1;
                word_ptr_5 = word_ptr_5 + (uint)flag * -2 + 1;
              }
              for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
                *(undefined1 *)word_ptr_5 = *(undefined1 *)word_ptr;
                word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
                word_ptr_5 = (undefined4 *)((int)word_ptr_5 + (uint)flag * -2 + 1);
              }
              *(undefined4 *)(loop_i + 8 + local_14[0x18]) = 1;
              local_24 = local_24 + 1;
              *(undefined4 **)(loop_i + 4 + local_14[0x18]) = local_14;
              loop_i = loop_i + 0x8a8;
            }
            loop_i = bflib_sound_AIL_register_timer_0f9f10(watcom_crt_fn_116069);
            word_ptr_2[4] = loop_i;
            if (loop_i != -1) {
              bflib_sound_AIL_set_timer_user_0f9f71(loop_i,word_ptr_2);
              bflib_sound_AIL_set_timer_frequency_0fa039(word_ptr_2[4],g_bss_003e04f0);
              bflib_sound_AIL_start_timer_0fa1a4(word_ptr_2[4]);
              *(code **)(word_ptr_2[1] + 0x24) = watcom_crt_fn_116687;
              *(undefined4 **)(word_ptr_2[1] + 0x28) = word_ptr_2;
              watcom_crt_fn_1243ce(word_ptr_2);
              watcom_crt_fn_12433b(word_ptr_2,0);
              watcom_crt_fn_12433b(word_ptr_2,1);
              return word_ptr_2;
            }
            str_ptr = s_Out_of_timer_handles_00172e4e;
            str_ptr_2 = &g_bss_003e03f0;
            do {
              ch = *str_ptr;
              str_ptr = str_ptr + 1;
              *str_ptr_2 = ch;
              str_ptr_2 = str_ptr_2 + 1;
            } while (ch != '\0');
            if (*(int *)(param_1 + 0x1c) != -1) {
              bflib_sound_AIL_restore_USE16_ISR_0f9bc6(*(undefined4 *)(param_1 + 0x1c));
            }
            bflib_sound_AIL_call_driver_0f9c40(local_14[1],0x306,0,0);
            *(undefined4 *)(local_14[1] + 0x18) = 0;
            bflib_system_io_fn_0fe961(local_14[0xb],local_14[9],local_14[10]);
            bflib_system_io_fn_0fe8c1(local_14[0x18]);
          }
          bflib_system_io_fn_0fe8c1(local_14[0x15]);
          goto LAB_00116b64;
        }
        str_ptr = s_Could_not_allocate_build_buffer_00172e02;
        str_ptr_2 = &g_bss_003e03f0;
        do {
          ch = *str_ptr;
          str_ptr = str_ptr + 1;
          *str_ptr_2 = ch;
          str_ptr_2 = str_ptr_2 + 1;
        } while (ch != '\0');
        if (*(int *)(param_1 + 0x1c) != -1) {
          bflib_sound_AIL_restore_USE16_ISR_0f9bc6(*(undefined4 *)(param_1 + 0x1c));
        }
        bflib_sound_AIL_call_driver_0f9c40(local_14[1],0x306,0,0);
        *(undefined4 *)(local_14[1] + 0x18) = 0;
      }
      bflib_system_io_fn_0fe961(local_14[0xb],local_14[9],local_14[10]);
    }
  }
  else {
    str_ptr = s__DIG_driver_required_00172daa;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
  }
LAB_00116b64:
  bflib_system_io_fn_0fe8c1(local_14);
  return (undefined4 *)0x0;
}

/******************************************************************************
 * Function : bflib_sound_dig_ini_116db9 (Original VA: 0x116db9, Ghidra: FUN_00116db9)
 * Prototype: undefined4 bflib_sound_dig_ini_116db9(int *param_1);
 * Address  : 0x116db9 (Size: 108 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'DIG.INI'
 * Callers  : 1 -> bflib_sound_AIL_install_DIG_INI_0fa535
 * Callees  : 2 -> bflib_sound_AIL_API_read_INI_0f9d16, bflib_sound_AIL_install_DIG_driver_file_0fa593
 ******************************************************************************/
undefined4 bflib_sound_dig_ini_116db9(int *param_1)

{
  char ch;
  int val;
  undefined4 uval;
  char *str_ptr;
  char *str_ptr_2;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  undefined1 local_28 [24];
  
  val = bflib_sound_AIL_API_read_INI_0f9d16(local_128,s_DIG_INI_00172e7b);
  if (val == 0) {
    str_ptr = s_Unable_to_open_file_DIG_INI_00172e83;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    uval = 1;
  }
  else {
    val = bflib_sound_AIL_install_DIG_driver_file_0fa593(local_a8,local_28);
    *param_1 = val;
    if (val == 0) {
      uval = 2;
    }
    else {
      uval = 0;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_sound_out_sample_handles_116e63 (Original VA: 0x116e63, Ghidra: FUN_00116e63)
 * Prototype: int bflib_sound_out_sample_handles_116e63(int param_1);
 * Address  : 0x116e63 (Size: 113 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Out of sample handles'
 * Callers  : 1 -> bflib_sound_AIL_allocate_sample_handle_0fa655
 * Callees  : 3 -> bflib_system_io_fn_0f9a82, bflib_system_io_fn_0f9a87, bflib_sound_AIL_init_sample_0fa77e
 ******************************************************************************/
int bflib_sound_out_sample_handles_116e63(int param_1)

{
  char ch;
  int val;
  int loop_i;
  char *str_ptr;
  char *str_ptr_2;
  
  bflib_system_io_fn_0f9a82();
  val = 0;
  for (loop_i = 0;
      (val < *(int *)(param_1 + 100) && (*(int *)(*(int *)(param_1 + 0x60) + 8 + loop_i) != 1));
      loop_i = loop_i + 0x8a8) {
    val = val + 1;
  }
  if (val == *(int *)(param_1 + 100)) {
    str_ptr = s_Out_of_sample_handles_00172ea0;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    bflib_system_io_fn_0f9a87();
    return 0;
  }
  val = *(int *)(param_1 + 0x60) + val * 0x8a8;
  bflib_sound_AIL_init_sample_0fa77e(val);
  bflib_system_io_fn_0f9a87();
  return val;
}

/******************************************************************************
 * Function : bflib_sound_unrecognized_digital_audio_file_1179d4 (Original VA: 0x1179d4, Ghidra: FUN_001179d4)
 * Prototype: int bflib_sound_unrecognized_digital_audio_file_1179d4(undefined4 param_1,byte *param_2,int param_3);
 * Address  : 0x1179d4 (Size: 381 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Unrecognized digital audio file type'
 * Callers  : 0 -> 
 * Callees  : 6 -> bflib_sound_AIL_allocate_sample_handle_0fa655, bflib_sound_AIL_init_sample_0fa77e, bflib_sound_AIL_register_EOS_callback_0fb3a4, watcom_crt_fn_117561, watcom_crt_fn_1175d0, watcom_crt_fn_117866
 ******************************************************************************/
int bflib_sound_unrecognized_digital_audio_file_1179d4(undefined4 param_1,byte *param_2,int param_3)

{
  byte flag;
  char ch;
  byte flag_2;
  int val;
  char *str_ptr;
  byte *byte_ptr;
  byte *byte_ptr_2;
  char *str_ptr_2;
  bool flag_3;
  bool flag_4;
  
  watcom_crt_fn_117561();
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  val = 8;
  str_ptr = s_Creative_00172ec2;
  byte_ptr = param_2;
  while( true ) {
    flag = *str_ptr;
    flag_2 = *byte_ptr;
    if ((0x60 < flag) && (flag < 0x7b)) {
      flag = flag - 0x20;
    }
    if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
      flag_2 = flag_2 - 0x20;
    }
    flag_3 = flag < flag_2;
    flag_4 = flag == flag_2;
    if (!flag_4) break;
    flag_3 = false;
    flag_4 = true;
    if (flag == 0) break;
    val = val + -1;
    flag_4 = true;
    if (val == 0) break;
    str_ptr = str_ptr + 1;
    byte_ptr = byte_ptr + 1;
  }
  ch = !flag_4;
  if (!flag_3 && !flag_4) {
    ch = -ch;
  }
  if (ch == '\0') {
    flag_4 = false;
  }
  else {
    val = 4;
    byte_ptr = &g_data_00172ecb; /* 0x172ecb="WAVE" */
    byte_ptr_2 = param_2 + 8;
    while( true ) {
      flag = *byte_ptr;
      flag_2 = *byte_ptr_2;
      if ((0x60 < flag) && (flag < 0x7b)) {
        flag = flag - 0x20;
      }
      if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
        flag_2 = flag_2 - 0x20;
      }
      flag_3 = flag < flag_2;
      flag_4 = flag == flag_2;
      if (!flag_4) break;
      flag_3 = false;
      flag_4 = true;
      if (flag == 0) break;
      val = val + -1;
      flag_4 = true;
      if (val == 0) break;
      byte_ptr = byte_ptr + 1;
      byte_ptr_2 = byte_ptr_2 + 1;
    }
    ch = !flag_4;
    if (!flag_3 && !flag_4) {
      ch = -ch;
    }
    if (ch != '\0') {
      str_ptr = s_Unrecognized_digital_audio_file_t_00172ed0;
      goto LAB_00117a79;
    }
    flag_4 = true;
  }
  val = bflib_sound_AIL_allocate_sample_handle_0fa655(param_1);
  if (val == 0) {
    return 0;
  }
  bflib_sound_AIL_init_sample_0fa77e(val);
  *(undefined4 *)(val + 0x888) = 0;
  if (flag_4) {
    if (flag_4) {
      *(undefined4 *)(val + 0x8a0) = 1;
      bflib_sound_AIL_register_EOS_callback_0fb3a4(val,watcom_crt_fn_11799c);
      watcom_crt_fn_117866(param_2,val);
    }
  }
  else {
    *(byte **)(val + 0x88c) = param_2 + *(ushort *)(param_2 + 0x14);
    *(int *)(val + 0x898) = param_3;
    *(undefined4 *)(val + 0x8a0) = 1;
    *(uint *)(val + 0x89c) = (uint)(param_3 == -1);
    bflib_sound_AIL_register_EOS_callback_0fb3a4(val,watcom_crt_fn_117852);
    watcom_crt_fn_1175d0(val,0);
  }
  if (*(int *)(val + 0x8a0) != -1) {
    return val;
  }
  str_ptr = s_Invalid_or_missing_data_block_00172ef6;
LAB_00117a79:
  str_ptr_2 = &g_bss_003e03f0;
  do {
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
    *str_ptr_2 = ch;
    str_ptr_2 = str_ptr_2 + 1;
  } while (ch != '\0');
  return 0;
}

/******************************************************************************
 * Function : bflib_sound_unrecognized_digital_audio_file_117b51 (Original VA: 0x117b51, Ghidra: FUN_00117b51)
 * Prototype: longlong bflib_sound_unrecognized_digital_audio_file_117b51(int param_1,byte *param_2,int param_3);
 * Address  : 0x117b51 (Size: 305 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Unrecognized digital audio file type'
 * Callers  : 1 -> bflib_sound_AIL_set_sample_file_0fa7dc
 * Callees  : 2 -> watcom_crt_fn_1175d0, watcom_crt_fn_117866
 ******************************************************************************/
longlong bflib_sound_unrecognized_digital_audio_file_117b51(int param_1,byte *param_2,int param_3)

{
  byte flag;
  char ch;
  byte flag_2;
  int val;
  undefined1 *word_ptr;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  char *str_ptr;
  byte *byte_ptr;
  byte *byte_ptr_2;
  char *str_ptr_2;
  bool flag_3;
  bool flag_4;
  
  word_ptr = (undefined1 *)0x0;
  if (param_2 == (byte *)0x0) goto LAB_00117c02;
  val = 8;
  str_ptr = s_Creative_00172ec2;
  byte_ptr_2 = param_2;
  while( true ) {
    flag = *str_ptr;
    flag_2 = *byte_ptr_2;
    if ((0x60 < flag) && (flag < 0x7b)) {
      flag = flag - 0x20;
    }
    if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
      flag_2 = flag_2 - 0x20;
    }
    flag_3 = flag < flag_2;
    flag_4 = flag == flag_2;
    if (!flag_4) break;
    flag_3 = false;
    flag_4 = true;
    if (flag == 0) break;
    val = val + -1;
    flag_4 = true;
    if (val == 0) break;
    str_ptr = str_ptr + 1;
    byte_ptr_2 = byte_ptr_2 + 1;
  }
  ch = !flag_4;
  if (!flag_3 && !flag_4) {
    ch = -ch;
  }
  if (ch == '\0') {
    flag_4 = false;
LAB_00117c0e:
    if (flag_4) {
      if (flag_4) {
        *(undefined4 *)(param_1 + 0x8a0) = 0;
        watcom_crt_fn_117866(param_2,param_1);
        param_2 = extraout_EDX_00;
      }
    }
    else {
      *(byte **)(param_1 + 0x88c) = param_2 + *(ushort *)(param_2 + 0x14);
      *(int *)(param_1 + 0x898) = param_3;
      *(undefined4 *)(param_1 + 0x8a0) = 0;
      *(uint *)(param_1 + 0x89c) = (uint)(param_3 == -1);
      watcom_crt_fn_1175d0(param_1,0);
      param_2 = extraout_EDX;
    }
    if (*(int *)(param_1 + 0x8a0) != -1) {
      return CONCAT44(param_2,1);
    }
    str_ptr = s_Invalid_or_missing_data_block_00172f3b;
  }
  else {
    val = 4;
    byte_ptr = &g_data_00172ecb; /* 0x172ecb="WAVE" */
    byte_ptr_2 = param_2 + 8;
    while( true ) {
      flag = *byte_ptr;
      flag_2 = *byte_ptr_2;
      if ((0x60 < flag) && (flag < 0x7b)) {
        flag = flag - 0x20;
      }
      if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
        flag_2 = flag_2 - 0x20;
      }
      flag_3 = flag < flag_2;
      flag_4 = flag == flag_2;
      if (!flag_4) break;
      flag_3 = false;
      flag_4 = true;
      if (flag == 0) break;
      val = val + -1;
      flag_4 = true;
      if (val == 0) break;
      byte_ptr = byte_ptr + 1;
      byte_ptr_2 = byte_ptr_2 + 1;
    }
    ch = !flag_4;
    if (!flag_3 && !flag_4) {
      ch = -ch;
    }
    if (ch == '\0') {
      flag_4 = true;
      goto LAB_00117c0e;
    }
    str_ptr = s_Unrecognized_digital_audio_file_t_00172f15;
  }
  str_ptr_2 = &g_bss_003e03f0;
  word_ptr = &g_bss_003e03f0;
  do {
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
    *str_ptr_2 = ch;
    str_ptr_2 = str_ptr_2 + 1;
  } while (ch != '\0');
LAB_00117c02:
  return ZEXT48(word_ptr) << 0x20;
}

/******************************************************************************
 * Function : bflib_sound_could_allocate_memory_driver_1193e6 (Original VA: 0x1193e6, Ghidra: FUN_001193e6)
 * Prototype: ushort * bflib_sound_could_allocate_memory_driver_1193e6(int param_1,undefined4 *param_2);
 * Address  : 0x1193e6 (Size: 1672 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Could not allocate memory for driver'
 * Callers  : 2 -> watcom_crt_driver_file_found_119a6e, watcom_crt_fn_119bb5
 * Callees  : 13 -> bflib_sound_AIL_call_driver_0f9c40, bflib_sound_AIL_delay_0f9cb3, bflib_sound_AIL_register_timer_0f9f10, bflib_sound_AIL_set_timer_user_0f9f71, bflib_sound_AIL_set_timer_frequency_0fa039, bflib_sound_AIL_start_timer_0fa1a4, bflib_sound_AIL_get_IO_environment_0fa3bd, bflib_system_io_fn_0fe896 ...
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

ushort * bflib_sound_could_allocate_memory_driver_1193e6(int param_1,undefined4 *param_2)

{
  char ch;
  longlong val;
  ushort *word_ptr;
  undefined4 *word_ptr_2;
  ushort *word_ptr_3;
  int loop_i;
  uint uval;
  uint loop_i_2;
  int loop_i_3;
  ushort **val_2;
  ushort **val_3;
  char *str_ptr;
  char *str_ptr_2;
  char *str_ptr_3;
  undefined4 *word_ptr_4;
  undefined4 *word_ptr_5;
  undefined4 *word_ptr_6;
  undefined4 *word_ptr_7;
  byte flag;
  ushort *apuStackY_2810 [2541];
  ushort *puStack_50;
  undefined4 local_4c;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  
  flag = 0;
  puStack_50 = (ushort *)0x1193f2;
  watcom_crt_fn_117ccb();
  puStack_50 = (ushort *)0x1d8;
  local_18 = (ushort *)bflib_system_io_fn_0fe896();
  if (local_18 == (ushort *)0x0) {
    str_ptr = s_Could_not_allocate_memory_for_dr_00172f89;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    return (ushort *)0x0;
  }
  str_ptr = (char *)&g_data_00172faf; /* 0x172faf="HMDI" */
  word_ptr = local_18;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined4 *)word_ptr = *(undefined4 *)str_ptr;
    str_ptr = str_ptr + (uint)flag * -8 + 4;
    word_ptr = word_ptr + (uint)flag * -4 + 2;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(char *)word_ptr = *str_ptr;
    str_ptr = str_ptr + (uint)flag * -2 + 1;
    word_ptr = (ushort *)((int)word_ptr + (uint)flag * -2 + 1);
  }
  *(int *)(local_18 + 2) = param_1;
  local_14 = local_18;
  if (*(int *)(param_1 + 0x14) != 1) {
    str_ptr = s__MDI_driver_required_00172fb4;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    val_3 = &stack0xffffffb0;
    puStack_50 = local_18;
    goto LAB_001196d8;
  }
  puStack_50 = &local_34;
  bflib_sound_AIL_call_driver_0f9c40(param_1,0x301,0);
  *(uint *)(local_18 + 4) = (uint)local_2e * 0x10 + (uint)local_34;
  *(uint *)(local_18 + 6) = (uint)local_30 * 0x10 + (uint)local_32;
  word_ptr = (ushort *)
           ((**(uint **)(local_18 + 4) & 0xffff) + (**(uint **)(local_18 + 4) >> 0x10) * 0x10);
  val_2 = (ushort **)&stack0xffffffb4;
  if ((word_ptr != (ushort *)0x0) && (val_2 = (ushort **)&stack0xffffffb4, (char)*word_ptr != '\0'))
  {
    puStack_50 = word_ptr;
    str_ptr = (char *)(*g_data_00195da8)();
    val_2 = &stack0xffffffb0;
    if ((str_ptr != (char *)0x0) && (val_2 = &stack0xffffffb0, *str_ptr != '\0')) {
      uval = 0xffffffff;
      str_ptr_2 = str_ptr;
      do {
        if (uval == 0) break;
        uval = uval - 1;
        ch = *str_ptr_2;
        str_ptr_2 = str_ptr_2 + (uint)flag * -2 + 1;
      } while (ch != '\0');
      uval = ~uval - 1;
      if (0x7f < (int)uval) {
        uval = 0x7f;
      }
      str_ptr_2 = *(char **)(local_14 + 6);
      for (loop_i_2 = uval >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *(undefined4 *)str_ptr_2 = *(undefined4 *)str_ptr;
        str_ptr = str_ptr + (uint)flag * -8 + 4;
        str_ptr_2 = str_ptr_2 + (uint)flag * -8 + 4;
      }
      for (loop_i_2 = uval & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *str_ptr_2 = *str_ptr;
        str_ptr = str_ptr + (uint)flag * -2 + 1;
        str_ptr_2 = str_ptr_2 + (uint)flag * -2 + 1;
      }
      *(undefined1 *)(uval + *(int *)(local_14 + 6)) = 0;
      val_2 = &stack0xffffffb0;
    }
  }
  str_ptr = (char *)((*(uint *)(*(int *)(local_14 + 4) + 4) & 0xffff) +
                    (*(uint *)(*(int *)(local_14 + 4) + 4) >> 0x10) * 0x10);
  if ((str_ptr == (char *)0x0) || (*str_ptr == '\0')) {
    *(undefined1 *)(*(int *)(local_14 + 6) + 0x80) = 0;
  }
  else {
    str_ptr_2 = s_FATMAN_00196d10;
    str_ptr_3 = (char *)(*(int *)(local_14 + 6) + 0x80);
    do {
      ch = *str_ptr_2;
      str_ptr_2 = str_ptr_2 + 1;
      *str_ptr_3 = ch;
      str_ptr_3 = str_ptr_3 + 1;
    } while (ch != '\0');
    flag = 0;
    loop_i = -1;
    str_ptr_2 = (char *)(*(int *)(local_14 + 6) + 0x80);
    do {
      str_ptr_3 = str_ptr_2;
      if (loop_i == 0) break;
      loop_i = loop_i + -1;
      str_ptr_3 = str_ptr_2 + 1;
      ch = *str_ptr_2;
      str_ptr_2 = str_ptr_3;
    } while (ch != '\0');
    str_ptr_2 = str_ptr_3 + -1;
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      str_ptr = str_ptr + 1;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
  }
  local_1c = 0;
  word_ptr_2 = &g_bss_003e0540;
  for (loop_i = 6; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = 0xffffffff;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = 0xff;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 **)((int)val_2 + -4) = param_2;
    *(ushort **)((int)val_2 + -8) = local_14;
    word_ptr_2 = param_2 + (uint)flag * -2 + 1;
    g_bss_003e0540 = *param_2;
    word_ptr_4 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
    word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
    (&g_bss_003e0544)[(uint)flag * -2] = *word_ptr_2;
    word_ptr_5 = word_ptr_4 + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_7 + (uint)flag * -2 + 1;
    *word_ptr_4 = *word_ptr_7;
    *word_ptr_5 = *word_ptr_2;
    word_ptr_5[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
    (word_ptr_5 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
         (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
    *(undefined4 *)((int)val_2 + -0xc) = 0x1195c7;
    loop_i = watcom_crt_fn_1192dd();
    if (loop_i != 0) {
      local_1c = 1;
      word_ptr_2 = param_2 + (uint)flag * -2 + 1;
      local_4c = *param_2;
      word_ptr_4 = (undefined4 *)(&stack0xffffffbc + (uint)flag * -8 + (uint)flag * -8);
      word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
      *(undefined4 *)((int)&stack0xffffffb8 + (uint)flag * 0xfffffffe * 4) = *word_ptr_2;
      word_ptr_5 = word_ptr_4 + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_7 + (uint)flag * -2 + 1;
      *word_ptr_4 = *word_ptr_7;
      *word_ptr_5 = *word_ptr_2;
      word_ptr_5[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
      (word_ptr_5 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
    }
  }
  if (local_1c == 0) {
    *(undefined4 *)((int)val_2 + -4) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)val_2 + -8) = 0x1195f2;
    word_ptr_2 = (undefined4 *)bflib_sound_AIL_get_IO_environment_0fa3bd();
    if (word_ptr_2 != (undefined4 *)0x0) {
      *(undefined4 **)((int)val_2 + -4) = word_ptr_2;
      *(ushort **)((int)val_2 + -8) = local_14;
      word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
      g_bss_003e0540 = *word_ptr_2;
      word_ptr_5 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
      word_ptr_4 = word_ptr_7 + (uint)flag * -2 + 1;
      (&g_bss_003e0544)[(uint)flag * -2] = *word_ptr_7;
      word_ptr_6 = word_ptr_5 + (uint)flag * -2 + 1;
      word_ptr_7 = word_ptr_4 + (uint)flag * -2 + 1;
      *word_ptr_5 = *word_ptr_4;
      *word_ptr_6 = *word_ptr_7;
      word_ptr_6[(uint)flag * -2 + 1] = word_ptr_7[(uint)flag * -2 + 1];
      (word_ptr_6 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (word_ptr_7 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      *(undefined4 *)((int)val_2 + -0xc) = 0x119611;
      loop_i = watcom_crt_fn_1192dd();
      if (loop_i != 0) {
        local_1c = 1;
        word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
        local_4c = *word_ptr_2;
        word_ptr_4 = (undefined4 *)(&stack0xffffffbc + (uint)flag * -8 + (uint)flag * -8);
        word_ptr_2 = word_ptr_7 + (uint)flag * -2 + 1;
        *(undefined4 *)((int)&stack0xffffffb8 + (uint)flag * 0xfffffffe * 4) = *word_ptr_7;
        word_ptr_5 = word_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
        *word_ptr_4 = *word_ptr_2;
        *word_ptr_5 = *word_ptr_7;
        word_ptr_5[(uint)flag * -2 + 1] = word_ptr_7[(uint)flag * -2 + 1];
        (word_ptr_5 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_7 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      }
    }
  }
  if ((local_1c == 0) && (g_bss_003e0534 == 1)) {
    local_28 = 0;
    for (local_20 = 0; loop_i = *(int *)(*(int *)(local_14 + 2) + 0x10),
        local_20 < (int)(uint)*(ushort *)(loop_i + 0x10); local_20 = local_20 + 1) {
      word_ptr_2 = (undefined4 *)
               (local_28 +
               (*(uint *)(loop_i + 0xc) >> 0x10) * 0x10 + (*(uint *)(loop_i + 0xc) & 0xffff));
      if (local_20 == 0) {
        word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
        g_bss_003e0540 = *word_ptr_2;
        word_ptr_5 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
        word_ptr_4 = word_ptr_7 + (uint)flag * -2 + 1;
        (&g_bss_003e0544)[(uint)flag * -2] = *word_ptr_7;
        word_ptr_6 = word_ptr_5 + (uint)flag * -2 + 1;
        word_ptr_7 = word_ptr_4 + (uint)flag * -2 + 1;
        *word_ptr_5 = *word_ptr_4;
        *word_ptr_6 = *word_ptr_7;
        word_ptr_6[(uint)flag * -2 + 1] = word_ptr_7[(uint)flag * -2 + 1];
        (word_ptr_6 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_7 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      }
      *(undefined4 **)((int)val_2 + -4) = word_ptr_2;
      *(ushort **)((int)val_2 + -8) = local_14;
      *(undefined4 *)((int)val_2 + -0xc) = 0x119685;
      loop_i = watcom_crt_fn_1192dd();
      if (loop_i != 0) {
        local_1c = 1;
        word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
        local_4c = *word_ptr_2;
        word_ptr_4 = (undefined4 *)(&stack0xffffffbc + (uint)flag * -8 + (uint)flag * -8);
        word_ptr_2 = word_ptr_7 + (uint)flag * -2 + 1;
        *(undefined4 *)((int)&stack0xffffffb8 + (uint)flag * 0xfffffffe * 4) = *word_ptr_7;
        word_ptr_5 = word_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
        *word_ptr_4 = *word_ptr_2;
        *word_ptr_5 = *word_ptr_7;
        word_ptr_5[(uint)flag * -2 + 1] = word_ptr_7[(uint)flag * -2 + 1];
        (word_ptr_5 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_7 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        break;
      }
      local_28 = local_28 + 0x18;
    }
  }
  if (local_1c == 0) {
    str_ptr = s_XMIDI_sound_hardware_not_found_00172fca;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
LAB_001196d5:
    val_3 = (ushort **)((int)val_2 + -4);
    *(ushort **)((int)val_2 + -4) = local_14;
  }
  else {
    *(undefined4 *)((int)val_2 + -4) = 0;
    *(undefined4 *)((int)val_2 + -8) = 0;
    *(undefined4 *)((int)val_2 + -0xc) = 0x305;
    g_bss_003e0540 = local_4c;
    word_ptr_4 = &g_bss_003e0548 + (uint)flag * -2 + (uint)flag * -2;
    word_ptr_2 = (undefined4 *)(&stack0xffffffbc + (uint)flag * -8 + (uint)flag * -8);
    (&g_bss_003e0544)[(uint)flag * -2] =
         *(undefined4 *)((int)&stack0xffffffb8 + (uint)flag * 0xfffffffe * 4);
    word_ptr_5 = word_ptr_4 + (uint)flag * -2 + 1;
    word_ptr_7 = word_ptr_2 + (uint)flag * -2 + 1;
    *word_ptr_4 = *word_ptr_2;
    *word_ptr_5 = *word_ptr_7;
    word_ptr_5[(uint)flag * -2 + 1] = word_ptr_7[(uint)flag * -2 + 1];
    (word_ptr_5 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
         (word_ptr_7 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
    *(undefined4 *)((int)val_2 + -0x10) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)val_2 + -0x14) = 0x119709;
    bflib_sound_AIL_call_driver_0f9c40();
    *(undefined4 *)(*(int *)(local_14 + 2) + 0x18) = 1;
    *(ushort **)((int)val_2 + -4) = &local_34;
    *(undefined4 *)((int)val_2 + -8) = 0;
    *(undefined4 *)((int)val_2 + -0xc) = 0x501;
    *(undefined4 *)((int)val_2 + -0x10) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)val_2 + -0x14) = 0x11972f;
    bflib_sound_AIL_call_driver_0f9c40();
    loop_i = g_bss_003e0520;
    if (local_34 == 0) {
      str_ptr = s_Could_not_initialize_instrument_m_00172fea;
    }
    else {
      *(int *)(local_14 + 0x10) = g_bss_003e0520;
      *(int *)((int)val_2 + -4) = loop_i * 0x71c;
      *(undefined4 *)((int)val_2 + -8) = 0x119792;
      loop_i = bflib_system_io_fn_0fe896();
      *(int *)(local_14 + 0xe) = loop_i;
      if (loop_i != 0) {
        local_24 = 0;
        loop_i = 0;
        while (local_24 < *(int *)(local_14 + 0x10)) {
          word_ptr_2 = &g_data_0017303b; /* 0x17303b="HSEQ" */
          word_ptr_7 = (undefined4 *)(*(int *)(local_14 + 0xe) + loop_i);
          for (loop_i_3 = 1; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
            *word_ptr_7 = *word_ptr_2;
            word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
            word_ptr_7 = word_ptr_7 + (uint)flag * -2 + 1;
          }
          for (loop_i_3 = 0; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
            *(undefined1 *)word_ptr_7 = *(undefined1 *)word_ptr_2;
            word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
            word_ptr_7 = (undefined4 *)((int)word_ptr_7 + (uint)flag * -2 + 1);
          }
          *(undefined4 *)(loop_i + 8 + *(int *)(local_14 + 0xe)) = 1;
          local_24 = local_24 + 1;
          *(ushort **)(loop_i + 4 + *(int *)(local_14 + 0xe)) = local_14;
          loop_i = loop_i + 0x71c;
        }
        local_14[0xd2] = 0;
        local_14[0xd3] = 0;
        local_14[0xd4] = 0;
        local_14[0xd5] = 0;
        local_14[0xd6] = 0;
        local_14[0xd7] = 0;
        local_14[0xd8] = 0;
        local_14[0xd9] = 0;
        val = (longlong)g_bss_003e051c;
        local_14[0xc] = 0;
        local_14[0xd] = 0;
        local_14[0xda] = 0x7f;
        local_14[0xdb] = 0;
        *(int *)(local_14 + 10) = (int)(1000000 / val);
        word_ptr = local_14;
        do {
          word_ptr_3 = word_ptr + 2;
          word_ptr[0x12] = 0;
          word_ptr[0x13] = 0;
          word_ptr[0x32] = 0;
          word_ptr[0x33] = 0;
          word_ptr[0x52] = 0;
          word_ptr[0x53] = 0;
          word_ptr[0x72] = 0;
          word_ptr[0x73] = 0;
          word_ptr[0x92] = 0;
          word_ptr[0x93] = 0;
          word_ptr[0xb2] = 0;
          word_ptr[0xb3] = 0;
          word_ptr = word_ptr_3;
        } while (word_ptr_3 != local_14 + 0x20);
        *(code **)((int)val_2 + -4) = watcom_crt_internal_note_queue_overflow_118cc7;
        *(undefined4 *)((int)val_2 + -8) = 0x119899;
        loop_i = bflib_sound_AIL_register_timer_0f9f10();
        *(int *)(local_14 + 8) = loop_i;
        if (loop_i != -1) {
          *(ushort **)((int)val_2 + -4) = local_14;
          *(int *)((int)val_2 + -8) = loop_i;
          *(undefined4 *)((int)val_2 + -0xc) = 0x1198fb;
          bflib_sound_AIL_set_timer_user_0f9f71();
          *(code **)(*(int *)(local_14 + 2) + 0x24) = watcom_crt_fn_11939c;
          uval = 0;
          *(ushort **)(*(int *)(local_14 + 2) + 0x28) = local_14;
          do {
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 0x72;
            loop_i_2 = uval | 0xb0;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x11992b;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 0;
            *(uint *)((int)val_2 + -0xc) = uval | 0xc0;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x11993f;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0x40;
            *(undefined4 *)((int)val_2 + -8) = 0;
            *(uint *)((int)val_2 + -0xc) = uval | 0xe0;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x119953;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 0x70;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x119963;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 1;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x119973;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = g_bss_003e0524;
            *(undefined4 *)((int)val_2 + -8) = 7;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x119987;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0x40;
            *(undefined4 *)((int)val_2 + -8) = 10;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x119997;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0x7f;
            *(undefined4 *)((int)val_2 + -8) = 0xb;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x1199a7;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 0x40;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x1199b7;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0x28;
            *(undefined4 *)((int)val_2 + -8) = 0x5b;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x1199c7;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 0x5d;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x1199d7;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 100;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x1199e7;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 0x65;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x1199f7;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = 0;
            *(undefined4 *)((int)val_2 + -8) = 0x26;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x119a07;
            watcom_crt_fn_117e82();
            *(undefined4 *)((int)val_2 + -4) = g_bss_003e0530;
            *(undefined4 *)((int)val_2 + -8) = 6;
            *(uint *)((int)val_2 + -0xc) = loop_i_2;
            *(ushort **)((int)val_2 + -0x10) = local_14;
            *(undefined4 *)((int)val_2 + -0x14) = 0x119a1b;
            watcom_crt_fn_117e82();
            *(ushort **)((int)val_2 + -4) = local_14;
            *(undefined4 *)((int)val_2 + -8) = 0x119a26;
            watcom_crt_fn_117e39();
            if ((uval & 3) == 0) {
              *(undefined4 *)((int)val_2 + -4) = 3;
              *(undefined4 *)((int)val_2 + -8) = 0x119a37;
              bflib_sound_AIL_delay_0f9cb3();
            }
            uval = uval + 1;
          } while ((int)uval < 0x10);
          *(int *)((int)val_2 + -4) = g_bss_003e051c;
          *(undefined4 *)((int)val_2 + -8) = *(undefined4 *)(local_14 + 8);
          *(undefined4 *)((int)val_2 + -0xc) = 0x119a55;
          bflib_sound_AIL_set_timer_frequency_0fa039();
          *(undefined4 *)((int)val_2 + -4) = *(undefined4 *)(local_14 + 8);
          *(undefined4 *)((int)val_2 + -8) = 0x119a63;
          bflib_sound_AIL_start_timer_0fa1a4();
          return local_14;
        }
        str_ptr = s_Out_of_timer_handles_00173040;
        str_ptr_2 = &g_bss_003e03f0;
        do {
          ch = *str_ptr;
          str_ptr = str_ptr + 1;
          *str_ptr_2 = ch;
          str_ptr_2 = str_ptr_2 + 1;
        } while (ch != '\0');
        *(undefined4 *)((int)val_2 + -4) = 0;
        *(undefined4 *)((int)val_2 + -8) = 0;
        *(undefined4 *)((int)val_2 + -0xc) = 0x306;
        *(undefined4 *)((int)val_2 + -0x10) = *(undefined4 *)(local_14 + 2);
        *(undefined4 *)((int)val_2 + -0x14) = 0x1198d1;
        bflib_sound_AIL_call_driver_0f9c40();
        *(undefined4 *)(*(int *)(local_14 + 2) + 0x18) = 0;
        *(undefined4 *)((int)val_2 + -4) = *(undefined4 *)(local_14 + 0xe);
        *(undefined4 *)((int)val_2 + -8) = 0x1198ec;
        bflib_system_io_fn_0fe8c1();
        goto LAB_001196d5;
      }
      str_ptr = s_Could_not_allocate_SEQUENCE_stru_00173013;
    }
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    *(undefined4 *)((int)val_2 + -4) = 0;
    *(undefined4 *)((int)val_2 + -8) = 0;
    *(undefined4 *)((int)val_2 + -0xc) = 0x306;
    *(undefined4 *)((int)val_2 + -0x10) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)val_2 + -0x14) = 0x119763;
    bflib_sound_AIL_call_driver_0f9c40();
    loop_i = *(int *)(local_14 + 2);
    val_3 = (ushort **)((int)val_2 + -4);
    *(ushort **)((int)val_2 + -4) = local_14;
    *(undefined4 *)(loop_i + 0x18) = 0;
  }
LAB_001196d8:
  *(undefined4 *)((int)val_3 + -4) = 0x1196dd;
  bflib_system_io_fn_0fe8c1();
  return (ushort *)0x0;
}

/******************************************************************************
 * Function : bflib_sound_driver_could_install_timbre_119ede (Original VA: 0x119ede, Ghidra: FUN_00119ede)
 * Prototype: void bflib_sound_driver_could_install_timbre_119ede(void);
 * Address  : 0x119ede (Size: 38 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Driver could not install timbre bank %d, patch %d'
 * Callers  : 2 -> bflib_sound_xmidi_sequence_119f04, watcom_crt_fn_11a52a
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_sound_driver_could_install_timbre_119ede(void)

{
  undefined1 local_14 [8];
  
  (*g_data_00195db0)(local_14,2,s_Driver_could_not_install_timbre_b_001730e3,&g_bss_003e03f0);
  return;
}

/******************************************************************************
 * Function : bflib_sound_xmidi_sequence_119f04 (Original VA: 0x119f04, Ghidra: FUN_00119f04)
 * Prototype: undefined4 bflib_sound_xmidi_sequence_119f04(int param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x119f04 (Size: 800 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Invalid XMIDI sequence'
 * Callers  : 1 -> bflib_sound_AIL_init_sequence_0fb774
 * Callees  : 7 -> bflib_sound_AIL_call_driver_0f9c40, bflib_system_io_fn_0f9d11, watcom_crt_fn_117e39, watcom_crt_fn_117fef, watcom_crt_fn_118027, watcom_crt_fn_118c71, bflib_sound_driver_could_install_timbre_119ede
 ******************************************************************************/
undefined4 bflib_sound_xmidi_sequence_119f04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *int_ptr;
  ushort uval;
  code *str_ptr;
  undefined4 uval_2;
  char ch;
  int loop_i;
  int val;
  uint loop_i_2;
  uint loop_i_3;
  byte *byte_ptr;
  short *val_2;
  char *str_ptr_2;
  byte *byte_ptr_2;
  char *str_ptr_3;
  byte *byte_ptr_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  bool flag;
  bool flag_2;
  byte flag_3;
  short local_24 [6];
  byte *local_18;
  uint local_14;
  
  flag_3 = 0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 2;
    loop_i = watcom_crt_fn_118027(param_2,param_3);
    if (loop_i != 0) {
      val = watcom_crt_fn_117fef(*(undefined4 *)(loop_i + 4));
      local_18 = (byte *)(loop_i + val + 8);
      val_2 = local_24;
      *(undefined4 *)(param_1 + 0xc) = 0;
      byte_ptr = (byte *)(loop_i + 0xc);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      while( true ) {
        flag = byte_ptr < local_18;
        flag_2 = byte_ptr == local_18;
        if (!flag) break;
        loop_i = 4;
        byte_ptr_2 = &g_data_0017312e; /* 0x17312e="TIMB" */
        byte_ptr_3 = byte_ptr;
        do {
          if (loop_i == 0) break;
          loop_i = loop_i + -1;
          flag = *byte_ptr_2 < *byte_ptr_3;
          flag_2 = *byte_ptr_2 == *byte_ptr_3;
          byte_ptr_2 = byte_ptr_2 + 1;
          byte_ptr_3 = byte_ptr_3 + 1;
        } while (flag_2);
        ch = !flag_2;
        if (!flag && !flag_2) {
          ch = -ch;
        }
        flag = false;
        flag_2 = ch == '\0';
        if (flag_2) {
          *(byte **)(param_1 + 0xc) = byte_ptr;
        }
        loop_i = 4;
        byte_ptr_2 = &g_data_00173133; /* 0x173133="RBRN" */
        byte_ptr_3 = byte_ptr;
        do {
          if (loop_i == 0) break;
          loop_i = loop_i + -1;
          flag = *byte_ptr_2 < *byte_ptr_3;
          flag_2 = *byte_ptr_2 == *byte_ptr_3;
          byte_ptr_2 = byte_ptr_2 + 1;
          byte_ptr_3 = byte_ptr_3 + 1;
        } while (flag_2);
        ch = !flag_2;
        if (!flag && !flag_2) {
          ch = -ch;
        }
        flag = false;
        flag_2 = ch == '\0';
        if (flag_2) {
          *(byte **)(param_1 + 0x10) = byte_ptr;
        }
        loop_i = 4;
        flag_3 = 0;
        byte_ptr_2 = &g_data_00173138; /* 0x173138="EVNT" */
        byte_ptr_3 = byte_ptr;
        do {
          if (loop_i == 0) break;
          loop_i = loop_i + -1;
          flag = *byte_ptr_2 < *byte_ptr_3;
          flag_2 = *byte_ptr_2 == *byte_ptr_3;
          byte_ptr_2 = byte_ptr_2 + 1;
          byte_ptr_3 = byte_ptr_3 + 1;
        } while (flag_2);
        ch = !flag_2;
        if (!flag && !flag_2) {
          ch = -ch;
        }
        if (ch == '\0') {
          *(byte **)(param_1 + 0x14) = byte_ptr;
        }
        loop_i = watcom_crt_fn_117fef(*(undefined4 *)(byte_ptr + 4));
        byte_ptr = byte_ptr + loop_i + 8;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 1;
        watcom_crt_fn_118c71(param_1);
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 100;
        *(undefined4 *)(param_1 + 0x50) = 100;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
        uval_2 = g_bss_003e0524;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x3c) = uval_2;
        *(undefined4 *)(param_1 + 0x40) = uval_2;
        if (*(int *)(param_1 + 0xc) != 0) {
          loop_i = watcom_crt_fn_117fef(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
          if (loop_i + 8U < 0x201) {
            loop_i = watcom_crt_fn_117fef(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
            loop_i_2 = loop_i + 8;
          }
          else {
            loop_i_2 = 0x200;
          }
          word_ptr = *(undefined4 **)(param_1 + 0xc);
          word_ptr_2 = &g_bss_003e06ac;
          for (loop_i_3 = loop_i_2 >> 2; loop_i_3 != 0; loop_i_3 = loop_i_3 - 1) {
            *word_ptr_2 = *word_ptr;
            word_ptr = word_ptr + (uint)flag_3 * -2 + 1;
            word_ptr_2 = word_ptr_2 + (uint)flag_3 * -2 + 1;
          }
          for (loop_i_2 = loop_i_2 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
            *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
            word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_3 * -2 + 1);
            word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_3 * -2 + 1);
          }
          if (*(int *)(*(int *)(param_1 + 4) + 0x1a8) != 0) {
            local_14 = 0;
            word_ptr = &g_bss_003e06ac;
            val_2 = local_24;
            while (local_14 < g_bss_003e06b4) {
              uval = *(ushort *)((int)word_ptr + 10);
              loop_i = *(int *)(param_1 + 4);
              *(int *)((int)val_2 + -4) = loop_i;
              *(uint *)((int)val_2 + -8) = (uint)(uval >> 8);
              *(uint *)((int)val_2 + -0xc) = uval & 0xff;
              str_ptr = *(code **)(loop_i + 0x1a8);
              *(undefined4 *)((int)val_2 + -0x10) = 0x11a120;
              loop_i = (*str_ptr)();
              loop_i_2 = local_14 + 1;
              if (loop_i == 0) {
                word_ptr = (undefined4 *)((int)word_ptr + 2);
                val_2 = (short *)((int)val_2 + -0xc);
                local_14 = loop_i_2;
              }
              else {
                loop_i = (int)&g_bss_003e06ac + loop_i_2 * 2;
                for (; loop_i_2 < g_bss_003e06b4; loop_i_2 = loop_i_2 + 1) {
                  *(undefined2 *)(loop_i + 8) = *(undefined2 *)(loop_i + 10);
                  loop_i = loop_i + 2;
                }
                g_bss_003e06b4 = g_bss_003e06b4 - 1;
                if (g_bss_003e06b1 < 2) {
                  g_bss_003e06b1 = g_bss_003e06b1 - 2;
                  g_bss_003e06b0 = g_bss_003e06b0 + -1;
                  val_2 = (short *)((int)val_2 + -0xc);
                }
                else {
                  g_bss_003e06b1 = g_bss_003e06b1 - 2;
                  val_2 = (short *)((int)val_2 + -0xc);
                }
              }
            }
          }
          if (g_bss_003e06b4 != 0) {
            *(undefined4 *)((int)val_2 + -4) = 0x11a178;
            loop_i = bflib_system_io_fn_0f9d11();
            if (loop_i == 0) {
              int_ptr = (int *)(*(int *)(param_1 + 4) + 0x18);
              *int_ptr = *int_ptr + 1;
              *(undefined4 *)((int)val_2 + -4) = *(undefined4 *)(param_1 + 4);
              *(undefined4 *)((int)val_2 + -8) = 0x11a1b0;
              watcom_crt_fn_117e39();
              word_ptr = &g_bss_003e06ac;
              word_ptr_2 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x100);
              for (loop_i = 0x80; loop_i != 0; loop_i = loop_i + -1) {
                *word_ptr_2 = *word_ptr;
                word_ptr = word_ptr + (uint)flag_3 * -2 + 1;
                word_ptr_2 = word_ptr_2 + (uint)flag_3 * -2 + 1;
              }
              for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
                *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
                word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_3 * -2 + 1);
                word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_3 * -2 + 1);
              }
              *(short **)((int)val_2 + -4) = local_24;
              *(undefined4 *)((int)val_2 + -8) = 0;
              *(undefined4 *)((int)val_2 + -0xc) = 0x503;
              *(undefined4 *)((int)val_2 + -0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
              *(undefined4 *)((int)val_2 + -0x14) = 0x11a1ee;
              bflib_sound_AIL_call_driver_0f9c40();
              int_ptr = (int *)(*(int *)(param_1 + 4) + 0x18);
              *int_ptr = *int_ptr + -1;
              if (local_24[0] != 0) {
                return 1;
              }
              *(undefined4 *)((int)val_2 + -4) = 0x11a215;
              bflib_sound_driver_could_install_timbre_119ede();
            }
            else {
              str_ptr_2 = s_No_timbres_loaded_0017313d;
              str_ptr_3 = &g_bss_003e03f0;
              do {
                ch = *str_ptr_2;
                str_ptr_2 = str_ptr_2 + 1;
                *str_ptr_3 = ch;
                str_ptr_3 = str_ptr_3 + 1;
              } while (ch != '\0');
            }
            return 0xffffffff;
          }
        }
        return 1;
      }
    }
    str_ptr_2 = s_Invalid_XMIDI_sequence_00173116;
    str_ptr_3 = &g_bss_003e03f0;
    do {
      ch = *str_ptr_2;
      str_ptr_2 = str_ptr_2 + 1;
      *str_ptr_3 = ch;
      str_ptr_3 = str_ptr_3 + 1;
    } while (ch != '\0');
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_sound_insufficient_memory_hwave_descriptor_11b68b (Original VA: 0x11b68b, Ghidra: FUN_0011b68b)
 * Prototype: int * bflib_sound_insufficient_memory_hwave_descriptor_11b68b(int param_1,int param_2,int param_3,int param_4);
 * Address  : 0x11b68b (Size: 437 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Insufficient memory for HWAVE descriptor'
 * Callers  : 0 -> 
 * Callees  : 7 -> bflib_sound_AIL_allocate_sample_handle_0fa655, bflib_sound_AIL_release_sample_handle_0fa720, bflib_sound_AIL_register_event_callback_0fc381, bflib_sound_AIL_register_timbre_callback_0fc3e5, bflib_system_io_fn_0fe896, bflib_system_io_fn_0fe8c1, watcom_crt_fn_11af08
 ******************************************************************************/
int * bflib_sound_insufficient_memory_hwave_descriptor_11b68b(int param_1,int param_2,int param_3,int param_4)

{
  char ch;
  int *int_ptr;
  int loop_i;
  int *int_ptr_2;
  int *int_ptr_3;
  char *str_ptr;
  char *str_ptr_2;
  
  watcom_crt_fn_11af08();
  int_ptr = (int *)bflib_system_io_fn_0fe896(0x69c);
  if (int_ptr == (int *)0x0) {
    str_ptr = s_Insufficient_memory_for_HWAVE_de_00173150;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
  }
  else {
    *int_ptr = param_2;
    int_ptr[1] = param_1;
    int_ptr[2] = param_3;
    loop_i = bflib_sound_AIL_register_event_callback_0fc381(param_2,watcom_crt_fn_11b2a2);
    int_ptr[3] = loop_i;
    loop_i = bflib_sound_AIL_register_timbre_callback_0fc3e5(param_2,watcom_crt_fn_11b27c);
    int_ptr[4] = loop_i;
    *(int **)(param_2 + 0x1b8) = int_ptr;
    int_ptr_3 = int_ptr;
    do {
      int_ptr_2 = int_ptr_3 + 1;
      int_ptr_3[5] = 0;
      int_ptr_3[0x15] = 0;
      int_ptr_3[0x25] = 0x40;
      int_ptr_3[0x75] = 0;
      int_ptr_3[0xb5] = 0x7f;
      int_ptr_3[0xc5] = 0x40;
      loop_i = g_bss_003e0530;
      int_ptr_3[0xd5] = 0x7f;
      int_ptr_3[0x115] = loop_i;
      int_ptr_3 = int_ptr_2;
    } while (int_ptr_2 != int_ptr + 0x10);
    int_ptr[0x145] = 0;
    while( true ) {
      loop_i = param_4;
      if (0x10 < param_4) {
        loop_i = 0x10;
      }
      if (loop_i <= int_ptr[0x145]) {
        int_ptr_3 = int_ptr;
        do {
          int_ptr_2 = int_ptr_3 + 1;
          int_ptr_3[0x125] = 0;
          int_ptr_3 = int_ptr_2;
        } while (int_ptr_2 != int_ptr + 0x10);
        int_ptr_3 = int_ptr;
        for (loop_i = 0; loop_i < int_ptr[0x145]; loop_i = loop_i + 1) {
          int_ptr_3[0x146] = -1;
          int_ptr_3 = int_ptr_3 + 1;
        }
        int_ptr[0x1a6] = 0;
        return int_ptr;
      }
      loop_i = bflib_sound_AIL_allocate_sample_handle_0fa655(int_ptr[1]);
      int_ptr[int_ptr[0x145] + 0x135] = loop_i;
      if (int_ptr[int_ptr[0x145] + 0x135] == 0) break;
      int_ptr[0x145] = int_ptr[0x145] + 1;
    }
    str_ptr = s_Could_not_allocate_enough_SAMPLE_0017317a;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    while (int_ptr[0x145] = int_ptr[0x145] + -1, -1 < int_ptr[0x145]) {
      bflib_sound_AIL_release_sample_handle_0fa720(int_ptr[int_ptr[0x145] + 0x135]);
    }
    bflib_system_io_fn_0fe8c1(int_ptr);
  }
  return (int *)0x0;
}

/******************************************************************************
 * Function : bflib_sound_file_found_11c4e3 (Original VA: 0x11c4e3, Ghidra: FUN_0011c4e3)
 * Prototype: undefined8 bflib_sound_file_found_11c4e3(void);
 * Address  : 0x11c4e3 (Size: 465 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'File not found'
 * Callers  : 2 -> watcom_crt_out_memory_11c6b4, watcom_crt_out_memory_11c724
 * Callees  : 1 -> bflib_sound_AIL_quick_unload_0fcf74
 ******************************************************************************/
undefined8 bflib_sound_file_found_11c4e3(void)

{
  byte flag;
  char ch;
  byte flag_2;
  int *arg_eax;
  int val;
  undefined4 arg_edx;
  char *str_ptr;
  char *str_ptr_2;
  byte *byte_ptr;
  byte *byte_ptr_2;
  bool flag_3;
  bool flag_4;
  
  if (*arg_eax == 0) {
    bflib_sound_AIL_quick_unload_0fcf74();
    str_ptr = s_File_not_found_001731a4;
  }
  else {
    val = 8;
    str_ptr = s_Creative_001731b4;
    byte_ptr = (byte *)*arg_eax;
    while( true ) {
      flag = *str_ptr;
      flag_2 = *byte_ptr;
      if ((0x60 < flag) && (flag < 0x7b)) {
        flag = flag - 0x20;
      }
      if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
        flag_2 = flag_2 - 0x20;
      }
      flag_3 = flag < flag_2;
      flag_4 = flag == flag_2;
      if (!flag_4) break;
      flag_3 = false;
      flag_4 = true;
      if (flag == 0) break;
      val = val + -1;
      flag_4 = true;
      if (val == 0) break;
      str_ptr = str_ptr + 1;
      byte_ptr = byte_ptr + 1;
    }
    ch = !flag_4;
    if (!flag_3 && !flag_4) {
      ch = -ch;
    }
    if (ch == '\0') {
LAB_0011c555:
      arg_eax[1] = 2;
    }
    else {
      val = 4;
      byte_ptr = &g_data_001731bd; /* 0x1731bd="WAVE" */
      byte_ptr_2 = (byte *)(*arg_eax + 8);
      while( true ) {
        flag = *byte_ptr;
        flag_2 = *byte_ptr_2;
        if ((0x60 < flag) && (flag < 0x7b)) {
          flag = flag - 0x20;
        }
        if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
          flag_2 = flag_2 - 0x20;
        }
        flag_3 = flag < flag_2;
        flag_4 = flag == flag_2;
        if (!flag_4) break;
        flag_3 = false;
        flag_4 = true;
        if (flag == 0) break;
        val = val + -1;
        flag_4 = true;
        if (val == 0) break;
        byte_ptr = byte_ptr + 1;
        byte_ptr_2 = byte_ptr_2 + 1;
      }
      ch = !flag_4;
      if (!flag_3 && !flag_4) {
        ch = -ch;
      }
      if (ch == '\0') goto LAB_0011c555;
      val = 4;
      byte_ptr_2 = &g_data_001731c2; /* 0x1731c2="FORM" */
      byte_ptr = (byte *)*arg_eax;
      while( true ) {
        flag = *byte_ptr_2;
        flag_2 = *byte_ptr;
        if ((0x60 < flag) && (flag < 0x7b)) {
          flag = flag - 0x20;
        }
        if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
          flag_2 = flag_2 - 0x20;
        }
        flag_3 = flag < flag_2;
        flag_4 = flag == flag_2;
        if (!flag_4) break;
        flag_3 = false;
        flag_4 = true;
        if (flag == 0) break;
        val = val + -1;
        flag_4 = true;
        if (val == 0) break;
        byte_ptr_2 = byte_ptr_2 + 1;
        byte_ptr = byte_ptr + 1;
      }
      ch = !flag_4;
      if (!flag_3 && !flag_4) {
        ch = -ch;
      }
      if (ch != '\0') {
LAB_0011c62a:
        bflib_sound_AIL_quick_unload_0fcf74();
        str_ptr = s_Unknown_file_type_001731cc;
        goto LAB_0011c4fc;
      }
      val = 4;
      byte_ptr = &g_data_001731c7; /* 0x1731c7="XDIR" */
      byte_ptr_2 = (byte *)(*arg_eax + 8);
      while( true ) {
        flag = *byte_ptr;
        flag_2 = *byte_ptr_2;
        if ((0x60 < flag) && (flag < 0x7b)) {
          flag = flag - 0x20;
        }
        if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
          flag_2 = flag_2 - 0x20;
        }
        flag_3 = flag < flag_2;
        flag_4 = flag == flag_2;
        if (!flag_4) break;
        flag_3 = false;
        flag_4 = true;
        if (flag == 0) break;
        val = val + -1;
        flag_4 = true;
        if (val == 0) break;
        byte_ptr = byte_ptr + 1;
        byte_ptr_2 = byte_ptr_2 + 1;
      }
      ch = !flag_4;
      if (!flag_3 && !flag_4) {
        ch = -ch;
      }
      if (ch != '\0') goto LAB_0011c62a;
      arg_eax[1] = 1;
    }
    if ((arg_eax[1] == 1) && (g_bss_003e08bc == 0)) {
      bflib_sound_AIL_quick_unload_0fcf74();
      str_ptr = s_XMIDI_support_not_enabled_001731df;
    }
    else {
      if ((arg_eax[1] != 2) || (g_bss_003e08b8 != 0)) {
        arg_eax[3] = 2;
        arg_eax[5] = -1;
        arg_eax[6] = -1;
        val = g_data_00196dbc;
        arg_eax[7] = -1;
        arg_eax[4] = val;
        goto LAB_0011c6ad;
      }
      bflib_sound_AIL_quick_unload_0fcf74();
      str_ptr = s_Digital_support_not_enabled_001731fa;
    }
  }
LAB_0011c4fc:
  str_ptr_2 = &g_bss_003e03f0;
  do {
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
    *str_ptr_2 = ch;
    str_ptr_2 = str_ptr_2 + 1;
  } while (ch != '\0');
  arg_eax = (int *)0x0;
LAB_0011c6ad:
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_sound_out_memory_11cfae (Original VA: 0x11cfae, Ghidra: FUN_0011cfae)
 * Prototype: int * bflib_sound_out_memory_11cfae(int param_1,byte *param_2,int param_3);
 * Address  : 0x11cfae (Size: 974 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Purpose  : String 'Out of memory'
 * Callers  : 0 -> 
 * Callees  : 15 -> bflib_sound_AIL_register_timer_0f9f10, bflib_sound_AIL_set_timer_frequency_0fa039, bflib_sound_AIL_start_timer_0fa1a4, bflib_sound_AIL_allocate_sample_handle_0fa655, bflib_sound_AIL_release_sample_handle_0fa720, bflib_sound_AIL_init_sample_0fa77e, bflib_sound_AIL_minimum_sample_buffer_size_0fb060, bflib_sound_AIL_register_EOB_callback_0fb340 ...
 ******************************************************************************/
int * bflib_sound_out_memory_11cfae(int param_1,byte *param_2,int param_3)

{
  byte flag;
  char ch;
  byte flag_2;
  int *int_ptr;
  int loop_i;
  char *str_ptr;
  byte *byte_ptr;
  char *str_ptr_2;
  int *int_ptr_2;
  byte *byte_ptr_2;
  bool flag_3;
  bool flag_4;
  
  flag = 0;
  if (param_1 == 0) {
    return (int *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    return (int *)0x0;
  }
  int_ptr = (int *)bflib_system_io_fn_0fe896(0xb0);
  if (int_ptr == (int *)0x0) {
    str_ptr = s_Out_of_memory_00173228;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    return (int *)0x0;
  }
  byte_ptr = &g_data_00173237; /* 0x173237="\\\\" */
  int_ptr_2 = int_ptr;
  for (loop_i = 0x2c; loop_i != 0; loop_i = loop_i + -1) {
    *int_ptr_2 = 0;
    int_ptr_2 = int_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)int_ptr_2 = 0;
    int_ptr_2 = (int *)((int)int_ptr_2 + (uint)flag * -2 + 1);
  }
  loop_i = 4;
  byte_ptr_2 = param_2;
  while( true ) {
    flag = *byte_ptr;
    flag_2 = *byte_ptr_2;
    if ((0x60 < flag) && (flag < 0x7b)) {
      flag = flag - 0x20;
    }
    if ((0x60 < flag_2) && (flag_2 < 0x7b)) {
      flag_2 = flag_2 - 0x20;
    }
    flag_3 = flag < flag_2;
    flag_4 = flag == flag_2;
    if (!flag_4) break;
    flag_3 = false;
    flag_4 = true;
    if (flag == 0) break;
    loop_i = loop_i + -1;
    flag_4 = true;
    if (loop_i == 0) break;
    byte_ptr = byte_ptr + 1;
    byte_ptr_2 = byte_ptr_2 + 1;
  }
  ch = !flag_4;
  if (!flag_3 && !flag_4) {
    ch = -ch;
  }
  if (ch == '\0') {
    loop_i = 0;
    flag_4 = false;
    byte_ptr = param_2 + 5;
    flag = param_2[4];
    if (flag != 0x2d) goto LAB_0011d080;
    flag_4 = true;
    byte_ptr_2 = byte_ptr;
    while( true ) {
      byte_ptr = byte_ptr_2 + 1;
      flag = *byte_ptr_2;
LAB_0011d080:
      if ((0x39 < flag) || (flag < 0x30)) break;
      loop_i = loop_i * 10 + (uint)(byte)(flag - 0x30);
      byte_ptr_2 = byte_ptr;
    }
    if (flag_4) {
      loop_i = -loop_i;
    }
    int_ptr[0x1c] = 1;
    int_ptr[1] = loop_i;
  }
  else {
    loop_i = watcom_crt_fn_115a13(param_2,0);
    int_ptr[1] = loop_i;
  }
  if (int_ptr[1] == -1) {
    str_ptr = s_Error_opening_file__0017323c;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    goto LAB_0011d0da;
  }
  loop_i = bflib_sound_AIL_allocate_sample_handle_0fa655(param_1);
  *int_ptr = loop_i;
  if (loop_i == 0) {
    str_ptr = s_Unable_to_obtain_a_sample_handle_00173250;
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
  }
  else {
    bflib_sound_AIL_init_sample_0fa77e(loop_i);
    loop_i = watcom_crt_fn_11cd8b();
    if (loop_i == 0) {
      str_ptr = s_Error_getting_sound_format__00173272;
    }
    else {
      loop_i = bflib_sound_AIL_minimum_sample_buffer_size_0fb060(param_1,int_ptr[0x11],int_ptr[0x13]);
      if (param_3 == 0) {
        int_ptr[8] = (uint)int_ptr[0x10] >> 2;
        if ((int)((uint)int_ptr[0x10] >> 2) < loop_i) {
          int_ptr[8] = loop_i;
        }
        param_3 = int_ptr[8];
      }
      else {
        param_3 = param_3 / 3;
      }
      int_ptr[8] = param_3 + 0xfffU & 0xfffff000;
      if (int_ptr[8] == 0) {
        int_ptr[8] = 0x1000;
      }
      if (int_ptr[0x14] + int_ptr[8] * -3 < 0x3000) {
        int_ptr[8] = int_ptr[0x14];
        int_ptr[0x1f] = int_ptr[0x14];
        loop_i = bflib_system_io_fn_0fe896(int_ptr[0x14]);
        int_ptr[2] = loop_i;
        if (loop_i != 0) {
          int_ptr[0x1b] = 1;
LAB_0011d294:
          bflib_sound_AIL_set_sample_user_data_0fb46c(*int_ptr,0,int_ptr);
          bflib_sound_AIL_register_EOB_callback_0fb340(*int_ptr,watcom_crt_fn_11cd14);
          bflib_sound_AIL_register_EOS_callback_0fb3a4(*int_ptr,watcom_crt_fn_11cd61);
          int_ptr[0xc] = 1;
          int_ptr[0xe] = 2;
          int_ptr[0x19] = 1;
          int_ptr[9] = int_ptr[8] / 2;
          int_ptr[0x20] = int_ptr[0x1f];
          if (g_data_00196dcc != (int *)0x0) {
            int_ptr_2 = int_ptr;
            int_ptr[0x2b] = (int)g_data_00196dcc;
            g_data_00196dcc = int_ptr_2;
            return int_ptr;
          }
          g_data_00196dcc = int_ptr;
          g_data_00196dd0 = bflib_sound_AIL_register_timer_0f9f10(watcom_crt_fn_11cd14);
          if (g_data_00196dd0 != -1) {
            bflib_sound_AIL_set_timer_frequency_0fa039(g_data_00196dd0,0x10);
            bflib_sound_AIL_start_timer_0fa1a4(g_data_00196dd0);
            return int_ptr;
          }
          str_ptr = s_Out_of_timer_handles__0017329d;
          str_ptr_2 = &g_bss_003e03f0;
          g_data_00196dd0 = 0xffffffff;
          do {
            ch = *str_ptr;
            str_ptr = str_ptr + 1;
            *str_ptr_2 = ch;
            str_ptr_2 = str_ptr_2 + 1;
          } while (ch != '\0');
          bflib_system_io_fn_0fe8c1(int_ptr[4]);
LAB_0011d27e:
          bflib_system_io_fn_0fe8c1(int_ptr[2]);
          loop_i = int_ptr[3];
LAB_0011d257:
          bflib_system_io_fn_0fe8c1(loop_i);
        }
      }
      else {
        int_ptr[0x1f] = loop_i * 2;
        if (int_ptr[0x1f] < int_ptr[8] * 2) {
          int_ptr[0x1f] = int_ptr[8] * 2;
        }
        loop_i = bflib_system_io_fn_0fe896(int_ptr[8]);
        int_ptr[2] = loop_i;
        if (loop_i != 0) {
          loop_i = bflib_system_io_fn_0fe896(int_ptr[8]);
          int_ptr[3] = loop_i;
          if (loop_i != 0) {
            loop_i = bflib_system_io_fn_0fe896(int_ptr[8]);
            int_ptr[4] = loop_i;
            if (loop_i != 0) goto LAB_0011d294;
            goto LAB_0011d27e;
          }
          loop_i = int_ptr[2];
          goto LAB_0011d257;
        }
      }
      str_ptr = s_Out_of_memory__0017328e;
    }
    str_ptr_2 = &g_bss_003e03f0;
    do {
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
      *str_ptr_2 = ch;
      str_ptr_2 = str_ptr_2 + 1;
    } while (ch != '\0');
    bflib_sound_AIL_release_sample_handle_0fa720(*int_ptr);
  }
  if (int_ptr[0x1c] == 0) {
    watcom_crt_fn_115b3d(int_ptr[1]);
  }
LAB_0011d0da:
  bflib_system_io_fn_0fe8c1(int_ptr);
  return (int *)0x0;
}

