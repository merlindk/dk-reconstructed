/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: game.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 9
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : game_fn_036f48 (Original VA: 0x36f48, Ghidra: FUN_00036f48)
 * Prototype: void game_fn_036f48(void);
 * Address  : 0x36f48 (Size: 172 bytes)
 * Module   : game.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module game.cpp procedure @ 0x036f48
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 2 -> bflib_system_io_fn_0e8d4a, bflib_system_io_fn_0f0ab2
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void game_fn_036f48(void)

{
  uint extraout_ECX;
  
  g_bss_00336364 = bflib_system_io_fn_0e8d4a();
  if (g_bss_00336364 != g_bss_0033635c) {
    if (g_game_turn - g_bss_00336360 == 0) {
      g_bss_00336368 = 0;
    }
    else if (extraout_ECX <
             (uint)((ulonglong)(uint)((g_game_turn - g_bss_00336360) * 0x100) /
                   ((ulonglong)(uint)((g_bss_00336364 - g_bss_0033635c) * 0x100) / 100))) {
      g_bss_00336368 = g_bss_00336368 + 2;
    }
    else {
      g_bss_00336368 = g_bss_00336368 + -2;
      if (g_bss_00336368 < 1) {
        g_bss_00336368 = 0;
      }
    }
    g_bss_00336360 = g_game_turn;
    g_bss_0033635c = g_bss_00336364;
  }
  if (g_bss_00336368 != 0) {
    bflib_system_io_fn_0f0ab2();
  }
  return;
}

/******************************************************************************
 * Function : game_out_sync_gameturn_036ff4 (Original VA: 0x36ff4, Ghidra: FUN_00036ff4)
 * Prototype: void game_out_sync_gameturn_036ff4(void);
 * Address  : 0x36ff4 (Size: 860 bytes)
 * Module   : game.cpp [direct_file_string_xref]
 * OrigLine : game.cpp lines 399, 413
 * Purpose  : String 'OUT OF SYNC (GameTurn %d)'
 * Callers  : 1 -> panmap_fn_0633c4
 * Callees  : 32 -> eyelens_memory_already_allocated_02700c, eyelens_fn_0270e0, frontend_why_are_we_here_02dfac, game_fn_036f48, game_fn_037350, game_fn_0374c3, game_fn_0377eb, inits_fn_045cc1 ...
 ******************************************************************************/
void game_out_sync_gameturn_036ff4(void)

{
  char screen_res;
  undefined4 clock_ms;
  int screen_res_2;
  char extraout_CL;
  
  while( true ) {
    if (g_bss_0019a2a1 != '\0') {
      return;
    }
    moodneed_fn_052934();
    frontend_why_are_we_here_02dfac();
    if (g_bss_0019a2a1 != '\0') break;
    if (g_game_type == '\x02') {
      if (g_bss_0019d0c1 == -1) {
        instance_fn_049eff();
      }
      else {
        g_bss_0019d0c1 = -1;
        g_game_operation_flags = g_game_operation_flags & 0xfe;
      }
    }
    LbTimerClock();
    clock_ms = LbTimerClock();
    screen_res_2 = (int)g_my_player_word._3_1_;
    *(undefined4 *)(&g_bss_002e17c0 + screen_res_2 * 0x1508) = clock_ms;
    *(undefined4 *)(&g_bss_002e17c4 + screen_res_2 * 0x1508) = clock_ms;
    bflib_system_io_fn_0e7904(0);
    bflib_system_io_fn_0e79fc();
    panmap_update_player_view_state_0627b5();
    if ((g_game_operation_flags & 2) != 0) {
      eyelens_memory_already_allocated_02700c();
    }
    while ((g_bss_0019a2a0 == '\0' && (g_bss_0019a2a1 == '\0'))) {
      if (((g_bss_0019d0ba & 0x10) != 0) && (g_game_turn == 4)) {
        bflib_system_io_fn_0ed034();
      }
      screen_res = game_fn_037350();
      if (screen_res == '\0') {
        LbScreenLock();
      }
      moodneed_fn_052934();
      sound_fn_06ef5a();
      inits_fn_045cc1();
      update_go_first_person_without_0de6a8();
      if (extraout_CL != '\0') {
        bflib_system_io_fn_0e7904(0);
        screen_res_2 = LbScreenLock();
        if (screen_res_2 == 1) {
          workshop_update_player_view_state_0780df();
          creature_dene_says_big_hello_08685c();
          LbScreenLock();
        }
      }
      game_fn_0377eb();
      screen_res_2 = LbScreenLock();
      if (screen_res_2 == 1) {
        if ((g_game_system_flags & 2) != 0) {
          dk_sprintf(&g_log_sprintf_buf,s_OUT_OF_SYNC__GameTurn__d__001647a4,g_game_turn);
          LbErrorLog(); /* LbErrorLog("game.cpp", line 399, g_log_buf) */
          if (g_display_bss_003d9818 != 0) {
            LbTextDrawFormatted();
          }
        }
        if ((g_game_system_flags & 4) != 0) {
          dk_sprintf(&g_log_sprintf_buf,s_SEED_OUT_OF_SYNC__GameTurn__d__001647d3,g_game_turn);
          LbErrorLog(); /* LbErrorLog("game.cpp", line 413, g_log_buf) */
          if (g_display_bss_003d9818 != 0) {
            LbTextDrawFormatted();
          }
        }
        LbScreenLock();
      }
      if (((g_bss_00334019 == 0) && (g_bss_002e6fe0 == 0)) && (g_bss_002e6fe4 == '\0')) {
        bflib_system_io_fn_0ead2f();
        sndheap_fn_06dfd3();
      }
      if (extraout_CL != '\0') {
        game_fn_0374c3();
      }
      if (((g_bss_002e6f2d == '\0') || (g_bss_002e6fe0 == 0)) &&
         (((g_bss_0019d0b9 & 0x10) != 0 || (g_bss_002ed3de == 0)))) {
        game_fn_036f48();
      }
      if (g_game_turn == g_bss_002e6fee) {
        g_bss_0019a2a1 = '\x01';
      }
    }
    bflib_system_io_fn_0ebc10();
    bflib_system_io_fn_0e7904(0);
    bflib_system_io_fn_0e79fc();
    bflib_sound_bf110_cd_non_audio_0ecd76();
    bflib_system_io_fn_0f0ab8();
    newgui_fn_05ae90();
    structs_fn_072810();
    mapwho_process_map_subtile_050d25();
    LbTimerClock();
    g_bss_0019a2a0 = '\0';
    eyelens_fn_0270e0();
    if (g_packet_record_mode != '\0') {
      bflib_system_io_fn_0e8a1c();
      g_packet_record_mode = '\0';
      g_packet_file_handle = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : game_fn_037350 (Original VA: 0x37350, Ghidra: FUN_00037350)
 * Prototype: ulonglong game_fn_037350(void);
 * Address  : 0x37350 (Size: 108 bytes)
 * Module   : game.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module game.cpp procedure @ 0x037350
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 2 -> game_fn_0373bc, game_fn_03743b
 ******************************************************************************/
ulonglong game_fn_037350(void)

{
  uint arg_eax;
  undefined4 arg_edx;
  
  if ((g_game_operation_flags & 1) == 0) {
    if ((g_bss_002e6fe0 == 0) && (g_bss_002e6fe4 == '\0')) {
      arg_eax = game_fn_0373bc();
      if ((g_bss_002ed3de != 0) &&
         (arg_eax = g_game_turn / g_bss_002ed3de, g_game_turn % g_bss_002ed3de != 0)) {
LAB_000373b8:
        return CONCAT44(arg_edx,arg_eax) & 0xffffffffffffff00;
      }
    }
    else {
      if (((g_game_turn & 0x3f) != 0) && ((g_bss_002e6fe4 == '\0' || ((g_game_turn & 7) != 0))))
      goto LAB_000373b8;
      arg_eax = game_fn_03743b();
    }
  }
  return CONCAT44(arg_edx,CONCAT31((int3)(arg_eax >> 8),1));
}

/******************************************************************************
 * Function : game_fn_0373bc (Original VA: 0x373bc, Ghidra: FUN_000373bc)
 * Prototype: void game_fn_0373bc(void);
 * Address  : 0x373bc (Size: 127 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Purpose  : Module game.cpp procedure @ 0x0373bc
 * Callers  : 1 -> game_fn_037350
 * Callees  : 2 -> bflib_system_io_fn_0e8d4a, bflib_system_io_fn_0e8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void game_fn_0373bc(void)

{
  longdouble val;
  
  g_bss_0033637c = g_bss_0033637c + 1;
  g_bss_00336378 = bflib_system_io_fn_0e8d4a();
  if (99 < (uint)(g_bss_00336378 - g_bss_00336374)) {
    g_bss_0033636c =
         ((double)g_bss_0033637c * g_data_0016480c) / (double)(uint)(g_bss_00336378 - g_bss_00336374);
    g_bss_0033637c = 0;
    g_bss_00336374 = g_bss_00336378;
    val = (longdouble)bflib_system_io_fn_0e8d50();
    g_bss_002e8c0d = (int)ROUND(val);
  }
  return;
}

/******************************************************************************
 * Function : game_fn_03743b (Original VA: 0x3743b, Ghidra: FUN_0003743b)
 * Prototype: void game_fn_03743b(void);
 * Address  : 0x3743b (Size: 136 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Purpose  : Module game.cpp procedure @ 0x03743b
 * Callers  : 1 -> game_fn_037350
 * Callees  : 2 -> bflib_system_io_fn_0e8d4a, bflib_system_io_fn_0e8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void game_fn_03743b(void)

{
  int arg_eax;
  longdouble val;
  
  g_bss_00336390 = bflib_system_io_fn_0e8d4a();
  if (499 < (uint)(g_bss_00336390 - g_bss_0033638c)) {
    g_bss_00336384 =
         ((double)(arg_eax + g_bss_00336398) * g_data_0016481c) /
         (double)(uint)(g_bss_00336390 - g_bss_0033638c);
    g_bss_00336398 = 0;
    g_bss_0033638c = g_bss_00336390;
    val = (longdouble)bflib_system_io_fn_0e8d50();
    g_bss_002e8c0d = (int)ROUND(val);
    return;
  }
  g_bss_00336398 = arg_eax + g_bss_00336398;
  return;
}

/******************************************************************************
 * Function : game_fn_0374c3 (Original VA: 0x374c3, Ghidra: FUN_000374c3)
 * Prototype: void game_fn_0374c3(void);
 * Address  : 0x374c3 (Size: 103 bytes)
 * Module   : game.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module game.cpp procedure @ 0x0374c3
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 6 -> game_draw_text_overlay_03752a, LbScreenWaitVbi, bflib_system_io_fn_0e7904, LbScreenLock, bflib_system_io_fn_0e79fc, bflib_system_io_fn_0f0b60
 ******************************************************************************/
void game_fn_0374c3(void)

{
  int screen_res;
  
  if ((g_bss_0019d0ba & 8) != 0) {
    game_draw_text_overlay_03752a();
    bflib_system_io_fn_0e7904(0);
    return;
  }
  if (g_active_screen_mode == 0xd) {
    screen_res = LbScreenLock();
    if (screen_res == 1) {
      bflib_system_io_fn_0f0b60();
      LbScreenWaitVbi();
      LbScreenLock();
    }
  }
  bflib_system_io_fn_0e79fc();
  return;
}

/******************************************************************************
 * Function : game_draw_text_overlay_03752a (Original VA: 0x3752a, Ghidra: FUN_0003752a)
 * Prototype: void game_draw_text_overlay_03752a(void);
 * Address  : 0x3752a (Size: 705 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> game_fn_0374c3
 * Callees  : 5 -> LbTextDrawFormatted, LbFileClose, bflib_system_io_fn_0eb840, bflib_system_io_fn_0eb974, bflib_system_io_fn_0f0d1c
 ******************************************************************************/
void game_draw_text_overlay_03752a(void)

{
  undefined1 uval;
  int val;
  undefined1 *word_ptr;
  int val_2;
  uint extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *word_ptr_2;
  undefined1 *extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  uint uval_2;
  uint extraout_ECX_06;
  int extraout_ECX_07;
  uint local_44;
  undefined1 *local_3c;
  int local_34;
  int local_30;
  int local_24;
  undefined1 *local_1c;
  
  if (g_display_bss_003d9818 != 0) {
    LbTextDrawFormatted();
  }
  bflib_system_io_fn_0eb840();
  if (g_display_bss_003d987a == '\0') {
    LbFileClose();
  }
  else {
    val = g_screen_width + -0x8c;
    local_1c = (undefined1 *)(g_display_bss_003d9818 + 0x8c);
    bflib_system_io_fn_0f0d1c();
    local_44 = (uint)((ulonglong)g_mouse_cursor_x / (ulonglong)(longlong)(int)(uint)g_units_per_pixel) / 2;
    uval_2 = extraout_ECX;
    while (local_44 = local_44 - 1, -1 < (int)local_44) {
      if (uval_2 + 0x8c < 0xb0001) {
        LbFileClose();
        word_ptr_2 = extraout_ECX_00;
        if ((undefined1 *)0xaffff < extraout_ECX_00) {
          bflib_system_io_fn_0f0d1c();
          word_ptr_2 = extraout_ECX_01;
        }
      }
      else {
        LbFileClose();
        bflib_system_io_fn_0f0d1c();
        LbFileClose();
        word_ptr_2 = extraout_ECX_02;
      }
      if (word_ptr_2 + val < (undefined1 *)0xb0001) {
        local_34 = 0;
        word_ptr = local_1c;
        local_3c = word_ptr_2;
        while (local_34 < val / 2) {
          local_34 = local_34 + 1;
          uval = *word_ptr;
          word_ptr = word_ptr + 1;
          *local_3c = uval;
          local_3c = local_3c + 2;
        }
        word_ptr_2 = word_ptr_2 + val;
        if ((undefined1 *)0xaffff < word_ptr_2) {
          bflib_system_io_fn_0f0d1c();
          word_ptr_2 = extraout_ECX_03;
        }
      }
      else {
        val_2 = 0xb0000 - (int)word_ptr_2;
        local_30 = 0;
        word_ptr = local_1c;
        while (local_30 < val_2 / 2) {
          local_30 = local_30 + 1;
          uval = *word_ptr;
          word_ptr = word_ptr + 1;
          *word_ptr_2 = uval;
          word_ptr_2 = word_ptr_2 + 2;
        }
        bflib_system_io_fn_0f0d1c();
        local_24 = 0;
        word_ptr_2 = local_1c + val_2;
        while (local_24 < ((val - val_2) / 2) * 2) {
          uval = *word_ptr_2;
          word_ptr = (undefined1 *)(g_display_bss_003d9814 + local_24);
          word_ptr_2 = word_ptr_2 + 1;
          local_24 = local_24 + 2;
          *word_ptr = uval;
        }
        word_ptr_2 = (undefined1 *)(extraout_ECX_04 + val + -0x10000);
      }
      local_1c = local_1c + g_screen_pitch;
      if (word_ptr_2 + 0x8c < (undefined1 *)0xb0001) {
        LbFileClose();
        uval_2 = extraout_ECX_05 + g_screen_pitch;
        if (0xaffff < uval_2) {
          bflib_system_io_fn_0f0d1c();
          uval_2 = extraout_ECX_06;
        }
      }
      else {
        LbFileClose(0xb0000 - (int)word_ptr_2);
        bflib_system_io_fn_0f0d1c();
        LbFileClose();
        uval_2 = (extraout_ECX_07 + g_screen_pitch) - 0x10000;
      }
    }
  }
  bflib_system_io_fn_0eb974();
  return;
}

/******************************************************************************
 * Function : game_fn_0377eb (Original VA: 0x377eb, Ghidra: FUN_000377eb)
 * Prototype: void game_fn_0377eb(void);
 * Address  : 0x377eb (Size: 81 bytes)
 * Module   : game.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module game.cpp procedure @ 0x0377eb
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 3 -> dk_sprintf, LbScreenLock, LbKeyboardRead
 ******************************************************************************/
void game_fn_0377eb(void)

{
  int screen_res;
  
  while( true ) {
    screen_res = LbKeyboardRead();
    if (screen_res == 0) {
      if ((g_game_system_flags & 1) == 0) {
        g_bss_0019a2a1 = 1;
        return;
      }
      dk_sprintf(&g_log_sprintf_buf,&g_data_00164839); /* 0x164839="alex" */
    }
    if ((g_game_system_flags & 1) != 0) {
      return;
    }
    screen_res = LbScreenLock();
    if (screen_res != 0) {
      return;
    }
    if (g_bss_0019a2a1 != '\0') break;
    if (g_bss_0019a2a0 != '\0') {
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : game_fn_03783c (Original VA: 0x3783c, Ghidra: FUN_0003783c)
 * Prototype: longlong game_fn_03783c(void);
 * Address  : 0x3783c (Size: 56 bytes)
 * Module   : game.cpp [address_order_boundary_interpolation]
 * Purpose  : Module game.cpp procedure @ 0x03783c
 * Callers  : 1 -> gen2_update_player_view_state_037964
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong game_fn_03783c(void)

{
  uint arg_edx;
  
  if (((g_bss_002eb9d8 == -1) || ((uint)(int)g_bss_002eb9d8 <= (uint)(g_game_turn - g_bss_002eb9e0))) &&
     (g_bss_002ed402 == 0)) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

