/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: packet.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 38
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : packet_check_all_room_ traps_sync (Original VA: 0x5d32c, Ghidra: FUN_0005d32c)
 * Prototype: void packet_check_all_room_ packet_check_all_room_ traps_sync(void);
 * Address  : 0x5d32c (Size: 32 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Validate room and trap state before turn packet processing
 * Callers  : 2 -> input_draw_text_overlay_049426, process_players_dungeon_command_packet
 * Callees  : 2 -> newgui_fn_053c6b, newgui_fn_05cd55
 ******************************************************************************/
void packet_check_all_room_ traps_sync(void)

{
  int val;
  int val_2;
  uint loop_i;
  
  newgui_fn_05cd55();
  val_2 = newgui_fn_053c6b();
  if (val_2 != -1) {
    for (loop_i = 0; loop_i < 0x56; loop_i = (uint)(byte)((char)loop_i + 1)) {
      val = loop_i * 0x39;
      if (((*(char **)((int)&g_bss_0034bc09 + val) != (char *)0x0) &&
          (loop_i = (uint)CONCAT11((&g_bss_0034bbd9)[val],(char)loop_i),
          (&g_bss_0034bbd9)[val] == (&g_bss_0034baea)[val_2 * 0x20])) &&
         ((&g_bss_0034bbdc)[val] == '\x03')) {
        if (**(char **)((int)&g_bss_0034bc09 + val) == '\0') {
          (&g_bss_0034bbd7)[val] = 0;
        }
        else {
          (&g_bss_0034bbd7)[val] = 1;
        }
      }
    }
    return;
  }
  return;
}

/******************************************************************************
 * Function : packet_validate_active_Catalogue_entries (Original VA: 0x5d34c, Ghidra: FUN_0005d34c)
 * Prototype: void packet_validate_active_Catalogue_entries(void);
 * Address  : 0x5d34c (Size: 13 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Purpose  : Scan 86 catalogue slots for valid string pointers
 * Callers  : 2 -> newgui_fn_05aee2, newgui_update_player_view_state_05d280
 * Callees  : 0 -> 
 ******************************************************************************/
void packet_validate_active_Catalogue_entries(void)

{
  int val;
  int arg_eax;
  uint loop_i;
  
  for (loop_i = 0; loop_i < 0x56; loop_i = (uint)(byte)((char)loop_i + 1)) {
    val = loop_i * 0x39;
    if (((*(char **)((int)&g_bss_0034bc09 + val) != (char *)0x0) &&
        (loop_i = (uint)CONCAT11((&g_bss_0034bbd9)[val],(char)loop_i),
        (&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 0x14))) && ((&g_bss_0034bbdc)[val] == '\x03'))
    {
      if (**(char **)((int)&g_bss_0034bc09 + val) == '\0') {
        (&g_bss_0034bbd7)[val] = 0;
      }
      else {
        (&g_bss_0034bbd7)[val] = 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : packet_resync_network_game_state (Original VA: 0x5d35c, Ghidra: FUN_0005d35c)
 * Prototype: void packet_resync_network_game_state(void);
 * Address  : 0x5d35c (Size: 1113 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp lines 133, 170, 224, 233
 * Purpose  : Chunked full-game-state network resynchronization via LbNetwork_Exchange
 * Callers  : 2 -> file_update_player_dungeon_02c833, frontend_why_are_we_here_02dfac
 * Callees  : 15 -> frontnet_fn_03308c, inits_non_keeper_keeper_game_0402e5, inits_could_create_ambient_sound_0404f7, inits_update_player_dungeon_040832, inits_update_player_view_state_040992, set_packet_action, packet_find_next_active_player, open_packet_file_for_load ...
 ******************************************************************************/
void packet_resync_network_game_state(void)

{
  byte *thing_ptr;
  bool flag;
  undefined1 uval;
  char ch;
  int val;
  uint thing_ptr_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int val_2;
  int val_3;
  int *int_ptr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  int_ptr = &local_28;
  if (g_game_type == '\x02') {
    g_network_game_active = '\x01';
  }
  else {
    g_network_game_active = '\0';
    val = 0;
    do {
      if (*(int *)((int)&g_frontnet_bss_00335238 + val) != 0) {
        g_network_game_active = g_network_game_active + '\x01';
      }
      val = val + 0x24;
    } while (val != 0x90);
  }
  local_24 = (uint)(byte)(&g_bss_0019d0f4)[g_my_player_word._3_1_ * 0x4ef];
  uStack_2c = 0x5d3bc;
  inits_could_create_ambient_sound_0404f7();
  val = g_my_player_word._3_1_ * 0x4ef;
  (&g_bss_0019d0f4)[val] = (undefined1)local_24;
  ch = g_my_player_word._3_1_;
  if (g_game_type == '\x02') {
    (&g_players)[val] = (&g_players)[val] | 1;
    (&g_player_id_number)[val] = ch;
    if (g_bss_002ee8d4 == '\0') {
      uval = 2;
    }
    else {
      uval = 5;
    }
    (&g_bss_0019d57d)[g_my_player_word._3_1_ * 0x4ef] = uval;
    uStack_2c = 0x5d427;
    inits_non_keeper_keeper_game_0402e5();
  }
  else {
    uStack_2c = 0x5d43b;
    ch = LbNetwork_ChangeExchangeBuffer_0eeb20();
    if (ch != '\0') {
      uStack_2c = 0x5d453;
      LbErrorLog(); /* LbErrorLog("packet.cpp", line 133, "Unable to reinitialise ExchangeBuffer") */
    }
    flag = false;
    val_2 = 0;
    val_3 = 0;
    local_24 = (uint)(byte)(&g_bss_0019d0f4)[g_my_player_word._3_1_ * 0x4ef];
    local_28 = 0;
    val = 0;
    do {
      if (*(int *)((int)&g_frontnet_bss_00335238 + val_3) != 0) {
        (&g_player_packet_slot)[val] = (char)val_2;
        if ((!flag) && (val_2 == g_my_player_word._3_1_)) {
          flag = true;
          g_my_player_word._3_1_ = (char)local_28;
        }
        local_28 = local_28 + 1;
        val = val + 0x4ef;
      }
      val_2 = val_2 + 1;
      val_3 = val_3 + 0x24;
    } while (val_2 < 5);
    uStack_2c = 0x5d4c7;
    LbScreenWaitVbi();
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0x5d4ef;
    set_packet_action();
    uStack_34 = 0x5d503;
    ch = LbNetwork_StartExchange_0ee694();
    if (ch != '\0') {
      uStack_34 = 0x5d51b;
      LbErrorLog(); /* LbErrorLog("packet.cpp", line 170, "LbNetwork_Exchange failed") */
    }
    local_20 = 0;
    val = 0;
    val_3 = 0;
    do {
      if ((*(int *)((int)&g_frontnet_bss_00335238 + val) != 0) && ((&g_packet_action_type)[val_3] == '\n')) {
        (&g_player_id_number)[local_20 * 0x4ef] = (undefined1)local_20;
        (&g_players)[local_20 * 0x4ef] = (&g_players)[local_20 * 0x4ef] | 1;
        if (*(short *)((int)&g_packet_actn_par2 + val_3) == 0) {
          uval = 2;
        }
        else {
          uval = 5;
        }
        (&g_bss_0019d57d)[local_20 * 0x4ef] = uval;
        (&g_bss_0019d0f4)[local_20 * 0x4ef] = (&g_packet_actn_par1)[val_3];
        uStack_34 = 0x5d561;
        inits_non_keeper_keeper_game_0402e5();
        local_20 = local_20 + 1;
        uStack_34 = 0x5d56d;
        LbMemoryCopy();
        val = extraout_ECX;
      }
      val = val + 0x24;
      val_3 = val_3 + 0x11;
    } while (val_3 != 0x55);
    local_1c = 0;
    val = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + val);
      if ((*thing_ptr & 1) != 0) {
        local_1c = local_1c + (uint)*(ushort *)(thing_ptr + 0xd) + (uint)*(ushort *)(thing_ptr + 0xf) + /* thing->mappos.val_x, thing->mappos.val_y */
                   (int)*(short *)(thing_ptr + 0x11);
      }
      val = val + 4;
    } while (val != 0x2000);
    uStack_34 = 0x5d611;
    LbScreenWaitVbi();
    uStack_34 = 0;
    int_ptr = &uStack_38;
    uStack_38 = 0;
    set_packet_action();
    val = (int)g_my_player_word._3_1_;
    (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val * 0x4ef] * 0x11] = (undefined1)local_1c;
    (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val * 0x4ef] * 0x11] =
         (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val * 0x4ef] * 0x11] + (char)g_action_random_seed;
    ch = LbNetwork_StartExchange_0ee694();
    if (ch != '\0') {
      LbErrorLog(); /* LbErrorLog("packet.cpp", line 224, "LbNetwork_Exchange failed") */
    }
    ch = packet_find_next_active_player();
    if (ch != '\0') {
      LbErrorLog(); /* LbErrorLog("packet.cpp", line 233, "Checksums different") */
    }
    val_3 = 0;
    val = 0;
    do {
      if (((val_3 != g_my_player_word._3_1_) && (((&g_players)[val] & 1) != 0)) &&
         (val_2 = frontnet_fn_03308c(), val = extraout_ECX_00, val_2 != 0)) {
        toggle_player_view_flag_bit();
        toggle_player_view_flag_bit();
        val = extraout_ECX_01;
      }
      val_3 = val_3 + 1;
      val = val + 0x4ef;
    } while (val_3 < 5);
  }
  if (g_frontnet_bss_00334a4c != 0) {
    val_3 = 0;
    val = 0;
    do {
      thing_ptr_2 = g_bss_002e6ec6;
      if (((&g_players)[val] & 1) == 0) {
        for (; thing_ptr_2 = (&g_thing_ptrs)[thing_ptr_2], g_thing_ptrs < thing_ptr_2;
            thing_ptr_2 = (uint)*(ushort *)(thing_ptr_2 + 0x67)) {
          if (((&g_bss_001acd79)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x1d] != '\0') &&
             (*(char *)(thing_ptr_2 + 6) == val_3)) { /* thing->owner */
            *(undefined4 *)((int)int_ptr + -4) = 0x5d751;
            scrsupp_update_player_view_state_069a12();
            val = extraout_ECX_02;
            break;
          }
        }
      }
      val_3 = val_3 + 1;
      val = val + 0x4ef;
    } while (val_3 < 5);
  }
  *(undefined4 *)((int)int_ptr + -4) = 0x5d772;
  inits_update_player_dungeon_040832();
  *(undefined4 *)((int)int_ptr + -4) = 0x5d777;
  inits_update_player_view_state_040992();
  if ((g_bss_002e6f2d != '\0') && (g_bss_002e6ff3 != '\0')) {
    *(undefined4 *)((int)int_ptr + -4) = 0x5d793;
    open_packet_file_for_load();
    g_CompPlayer_turn = 0;
  }
  *(undefined4 *)((int)int_ptr + -4) = 0x5d7ae;
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : packet_build_local_player_turn_packet (Original VA: 0x5d7b5, Ghidra: FUN_0005d7b5)
 * Prototype: void packet_build_local_player_turn_packet(void);
 * Address  : 0x5d7b5 (Size: 604 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp lines 347, 381
 * Purpose  : Capture local player cursor, hand, and mode into turn Packet
 * Callers  : 1 -> packet_exchange_all_players_packets
 * Callees  : 12 -> eyelens_fn_0270e0, file_update_player_dungeon_02ca74, packet_backup_catalogue_settings, packet_restore_catalogue_settings, packet_draw_debug_cursor_overlay, workshop_update_player_view_state_0780df, LbErrorLog, LbScreenWaitVbi ...
 ******************************************************************************/
void packet_build_local_player_turn_packet(void)

{
  char net_status;
  int player_off;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uval;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined4 local_104 [50];
  uint local_3c;
  int local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  
  flag = 0;
  player_off = g_my_player_word._3_1_ * 0x4ef;
  local_24 = (uint)*(ushort *)(&g_player_hand_thing_idx + player_off);
  local_3c = (uint)*(ushort *)(&g_bss_0019d512 + player_off);
  local_1c = 0;
  local_30 = (uint)*(ushort *)(&g_bss_0019d50c + player_off);
  local_2c = (uint)*(ushort *)(&g_bss_0019d50e + player_off);
  eyelens_fn_0270e0();
  packet_backup_catalogue_settings();
  for (player_off = 0;
      (player_off < 0x18ab &&
      ((((&g_players)[player_off] & 1) == 0 || (((&g_players)[player_off] & 0x40) != 0))));
      player_off = player_off + 0x4ef) {
    local_1c = local_1c + 1;
  }
  bflib_system_io_fn_0f0f8c(s_MY_PLAYER__d_Host__d_00166266,(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef],local_1c)
  ;
  if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_1c) {
    local_38 = 0x151825;
    local_34 = &g_bss_0019d0ac;
    player_off = 0;
    while (0 < local_38) {
      local_20 = local_38;
      if (0xa8c1 < local_38) {
        local_20 = 0xa8c1;
      }
      uval = 0;
      val = 0;
      do {
        if ((((uval != (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) &&
             (((&g_players)[val] & 1) != 0)) && (((&g_players)[val] & 0x40) == 0)) &&
           (net_status = LbNetwork_Send_0f3b50(), val = extraout_ECX, net_status != '\0')) {
          dk_sprintf(&g_log_sprintf_buf,s_Unable_to_send_game_structure_pa_0016627c,player_off,uval);
          LbErrorLog(); /* LbErrorLog("packet.cpp", line 347, g_log_buf) */
          val = extraout_ECX_00;
        }
        uval = uval + 1;
        val = val + 0x4ef;
      } while ((int)uval < 5);
      player_off = player_off + 1;
      local_34 = (undefined4 *)((int)local_34 + local_20);
      local_38 = local_38 - local_20;
      packet_draw_debug_cursor_overlay();
    }
  }
  else {
    word_ptr = (undefined4 *)&g_bss_002e6f2c;
    word_ptr_2 = local_104;
    for (player_off = 0x32; player_off != 0; player_off = player_off + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
    LbScreenWaitVbi();
    local_38 = 0x151825;
    player_off = 0;
    while (0 < local_38) {
      local_28 = local_38;
      if (0xa8c1 < local_38) {
        local_28 = 0xa8c1;
      }
      val = LbNetwork_Receive_0f3ed8();
      if (val != extraout_ECX_01) {
        dk_sprintf(&g_log_sprintf_buf,s_Unable_to_receive_game_structure_001662c7,player_off,val,
                     extraout_ECX_01);
        LbErrorLog(); /* LbErrorLog("packet.cpp", line 381, g_log_buf) */
      }
      player_off = player_off + 1;
      local_38 = local_38 - local_28;
      packet_draw_debug_cursor_overlay();
    }
    workshop_update_player_view_state_0780df();
    word_ptr = local_104;
    word_ptr_2 = (undefined4 *)&g_bss_002e6f2c;
    for (player_off = 0x32; player_off != 0; player_off = player_off + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
  }
  packet_restore_catalogue_settings();
  file_update_player_dungeon_02ca74();
  g_game_system_flags = g_game_system_flags & 0xf9;
  return;
}

/******************************************************************************
 * Function : packet_init_level_replay_or_resync (Original VA: 0x5da11, Ghidra: FUN_0005da11)
 * Prototype: void packet_init_level_replay_or_resync(void);
 * Address  : 0x5da11 (Size: 534 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Re-initialize level state and reload packet stream on resync/replay
 * Callers  : 1 -> frontend_why_are_we_here_02dfac
 * Callees  : 7 -> inits_non_keeper_keeper_game_0402e5, inits_could_create_ambient_sound_0404f7, inits_update_player_dungeon_040832, inits_update_player_view_state_040992, open_packet_file_for_load, LbScreenWaitVbi, dk_sprintf
 ******************************************************************************/
void packet_init_level_replay_or_resync(void)

{
  uint uval;
  uint uval_2;
  int val;
  int local_14;
  
  LbScreenWaitVbi();
  open_packet_file_for_load();
  g_bss_002e78e9 = g_packet_file_level_num;
  g_render_frame_skip = g_bss_0019a29f;
  g_CompPlayer_turn = 0;
  dk_sprintf(&g_log_sprintf_buf,s_Initialising_level_00166320,g_packet_file_level_num);
  dk_sprintf(&g_log_sprintf_buf,s_Packet_Loading_Active__File_cont_00166333,g_packet_file_total_turns);
  if (g_packet_checksum_verify_enabled != '\0') {
    dk_sprintf(&g_log_sprintf_buf,s_Packet_Checksum_Active_00166362);
  }
  dk_sprintf(&g_log_sprintf_buf,s_Fast_Forward_through__d_game_tur_00166379,g_bss_002e6fe0);
  if (g_bss_002e6fee != -1) {
    dk_sprintf(&g_log_sprintf_buf,s_Packet_Quit_at__d_0016639c,g_bss_002e6fee);
  }
  if ((g_bss_002e6f2d != '\0') && (g_bss_002e6fe6 != g_bss_002e6fea)) {
    dk_sprintf(&g_log_sprintf_buf,s_Logging_things__game_turns__d__>_001663ae,g_bss_002e6fe6,g_bss_002e6fea
                );
  }
  uval = 1 << (g_bss_002e6ff2 & 0x1f);
  g_game_type = 2;
  if (((g_bss_002e6fd9 & uval) == 0) || ((g_bss_002e6fda & uval) != 0)) {
    g_my_player_word._3_1_ = 0;
  }
  else {
    g_my_player_word._3_1_ = g_bss_002e6ff2;
  }
  inits_could_create_ambient_sound_0404f7();
  g_network_game_active = '\0';
  local_14 = 0;
  val = 0;
  do {
    uval_2 = (uint)g_bss_002e6fd9;
    uval = 1 << ((byte)local_14 & 0x1f);
    (&g_players)[val] = (&g_players)[val] & 0xfe;
    (&g_players)[val] =
         (&g_players)[val] | (byte)((int)(uval_2 & uval) >> ((byte)local_14 & 0x1f)) & 1;
    if (((&g_players)[val] & 1) != 0) {
      (&g_player_id_number)[val] = (byte)local_14;
      uval_2 = (uint)g_bss_002e6fda;
      (&g_players)[val] = (&g_players)[val] & 0xbf;
      (&g_players)[val] =
           (&g_players)[val] |
           ((byte)((int)(uval & uval_2) >> ((byte)local_14 & 0x1f)) & 1) << 6;
      if (((&g_players)[val] & 0x40) == 0) {
        g_network_game_active = g_network_game_active + '\x01';
        (&g_bss_0019d0f4)[val] = 1;
        g_game_type = 5;
        inits_non_keeper_keeper_game_0402e5();
      }
    }
    local_14 = local_14 + 1;
    val = val + 0x4ef;
  } while (local_14 < 5);
  if (g_network_game_active == '\x01') {
    g_game_type = 2;
  }
  if (g_packet_file_total_turns < g_bss_002e6fe0) {
    g_bss_002e6fe0 = g_packet_file_total_turns;
  }
  inits_update_player_dungeon_040832();
  inits_update_player_view_state_040992();
  return;
}

/******************************************************************************
 * Function : packet_exchange_all_players_packets (Original VA: 0x5dc27, Ghidra: FUN_0005dc27)
 * Prototype: void packet_exchange_all_players_packets(void);
 * Address  : 0x5dc27 (Size: 450 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp lines 560
 * Purpose  : Exchange per-turn Packet structs across peers via LbNetwork_Exchange
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 10 -> compturn_update_player_dungeon_021527, packet_build_local_player_turn_packet, packet_find_next_active_player, process_players_packet_control_flags, write_turn_packets_to_file, packet_draw_debug_cursor_overlay, LbErrorLog, LbScreenWaitVbi ...
 ******************************************************************************/
void packet_exchange_all_players_packets(void)

{
  char net_status;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int val_3;
  
  g_render_frame_skip = g_bss_0019a29f;
  if (g_game_type != '\x02') {
    val_2 = 0;
    val = 0;
    do {
      if (*(int *)((int)&g_frontnet_bss_00335238 + val) != 0) {
        val_2 = val_2 + 1;
      }
      val = val + 0x24;
    } while (val != 0x90);
    if (((g_bss_002e6f2d == '\0') || (g_bss_002e6ff3 != '\0')) &&
       (net_status = LbNetwork_StartExchange_0ee694(), val_2 = extraout_ECX, net_status != '\0')) {
      LbErrorLog(); /* LbErrorLog("packet.cpp", line 560, "LbNetwork_Exchange failed") */
      val_2 = extraout_ECX_00;
    }
    val_3 = 0;
    val = 0;
    do {
      if (*(int *)((int)&g_frontnet_bss_00335238 + val) != 0) {
        val_3 = val_3 + 1;
      }
      val = val + 0x24;
    } while (val != 0x90);
    if (val_2 != val_3) {
      val = 0;
      val_2 = 0;
      do {
        if ((&g_frontnet_bss_00335238)[(uint)(byte)(&g_player_packet_slot)[val_2] * 9] == 0) {
          (&g_players)[val_2] = (&g_players)[val_2] | 0x40;
          compturn_update_player_dungeon_021527();
          val_2 = extraout_EDX;
        }
        val = val + 1;
        val_2 = val_2 + 0x4ef;
      } while (val < 4);
    }
  }
  net_status = packet_find_next_active_player();
  if (net_status == '\x01') {
    g_game_system_flags = g_game_system_flags & 0xfb | 2;
  }
  else if (net_status == '\x02') {
    g_game_system_flags = g_game_system_flags & 0xfd | 4;
  }
  else if (net_status == '\x03') {
    g_game_system_flags = g_game_system_flags | 6;
  }
  else {
    g_game_system_flags = g_game_system_flags & 0xf9;
  }
  if (g_bss_002e6f2c != '\0') {
    write_turn_packets_to_file();
  }
  val_2 = 0;
  val = 0;
  do {
    if ((((&g_players)[val] & 1) != 0) && (((&g_players)[val] & 0x40) == 0)) {
      process_players_packet_control_flags();
      val_2 = extraout_EDX_00;
    }
    val_2 = val_2 + 1;
    val = val + 0x4ef;
  } while (val_2 < 5);
  LbScreenWaitVbi();
  if (((g_game_system_flags & 2) != 0) || ((g_game_system_flags & 4) != 0)) {
    dk_sprintf(&g_log_sprintf_buf,s_OUT_OF_SYNC__GameTurn__d__001663f7,g_game_turn);
    packet_draw_debug_cursor_overlay();
    packet_build_local_player_turn_packet();
  }
  return;
}

/******************************************************************************
 * Function : set_packet_control_flag (Original VA: 0x5dde9, Ghidra: FUN_0005dde9)
 * Prototype: void set_packet_control_flag(void);
 * Address  : 0x5dde9 (Size: 5 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : OR control bitflag into pkt->control_flags (+0x0e)
 * Callers  : 6 -> inits_update_player_view_state_046892, inits_update_player_view_state_046d5a, inits_update_player_view_state_047237, input_process_thing_entity_0473e1, input_fn_048add, input_process_thing_entity_049160
 * Callees  : 0 -> 
 ******************************************************************************/
void set_packet_control_flag(void)

{
  int packet;
  ushort arg_dx;
  
  *(ushort *)(packet + 0xe) = *(ushort *)(packet + 0xe) | arg_dx;
  return;
}

/******************************************************************************
 * Function : set_packet_action (Original VA: 0x5ddee, Ghidra: FUN_0005ddee)
 * Prototype: void set_packet_action(void);
 * Address  : 0x5ddee (Size: 18 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Populate pkt->action (+0x05), actn_par1 (+0x06), and actn_par2 (+0x08)
 * Callers  : 43 -> door_process_thing_entity_02313c, inits_update_creature_and_thing_0462a3, input_draw_text_overlay_047755, input_update_player_dungeon_047bcd, input_update_player_view_state_047ea3, input_process_thing_entity_047fe2, input_process_thing_entity_0480aa, input_fn_048675 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void set_packet_action(void)

{
  int packet;
  undefined2 arg_cx;
  undefined1 arg_dl;
  undefined2 arg_bx;
  
  *(undefined1 *)(packet + 5) = arg_dl;
  *(undefined2 *)(packet + 6) = arg_bx;
  *(undefined2 *)(packet + 8) = arg_cx;
  return;
}

/******************************************************************************
 * Function : packet_find_next_active_player (Original VA: 0x5de00, Ghidra: FUN_0005de00)
 * Prototype: undefined8 packet_find_next_active_player(void);
 * Address  : 0x5de00 (Size: 100 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Find next active non-spectator player index in g_players
 * Callers  : 2 -> packet_resync_network_game_state, packet_exchange_all_players_packets
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 packet_find_next_active_player(void)

{
  int val;
  uint uval;
  undefined4 arg_edx;
  undefined1 uval_2;
  
  uval = 0xffffffff;
  uval_2 = 0;
  val = 0;
  do {
    if ((((&g_players)[val] & 1) != 0) && (((&g_players)[val] & 0x40) == 0)) {
      if (uval == 0xffffffff) {
        uval = (uint)(byte)(&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val] * 0x11];
      }
      else if (uval != (byte)(&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val] * 0x11]) {
        uval_2 = 1;
      }
    }
    val = val + 0x4ef;
  } while (val != 0x18ab);
  return CONCAT44(arg_edx,CONCAT31(0x18,uval_2));
}

/******************************************************************************
 * Function : process_players_packet_control_flags (Original VA: 0x5de7c, Ghidra: FUN_0005de7c)
 * Prototype: undefined8 process_players_packet_control_flags(void);
 * Address  : 0x5de7c (Size: 179 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Apply incoming Packet.player_flags and control_flags to PlayerInfo
 * Callers  : 1 -> packet_exchange_all_players_packets
 * Callees  : 8 -> process_all_players_turn_packets, process_players_dungeon_control_packet, process_players_creature_control_packet, process_players_spectator_packet, process_players_map_view_packet, process_players_global_packet_action, process_players_creature_passenger_packet, packet_check_thing_interaction_valid
 ******************************************************************************/
undefined8 process_players_packet_control_flags(void)

{
  byte flag;
  int player_idx;
  int player_off;
  int packet_off;
  undefined4 uval;
  uint uval_2;
  undefined4 arg_edx;
  undefined4 extraout_EDX;
  
  player_off = player_idx * 0x4ef;
  packet_off = (uint)(byte)(&g_player_packet_slot)[player_off] * 0x11;
  (&g_player_alloc_flags)[player_off] = ((&g_packet_player_flags)[packet_off] & 0x3f) >> 5;
  (&g_bss_0019d0cd)[player_off] = ((&g_packet_player_flags)[packet_off] & 0x7f) >> 6;
  if ((((&g_players)[player_off] & 4) != 0) && ((&g_packet_action_type)[packet_off] == 'y')) {
    uval = packet_check_thing_interaction_valid();
    return CONCAT44(arg_edx,uval);
  }
  uval_2 = process_all_players_turn_packets();
  if ((char)uval_2 == '\0') {
    flag = (&g_bss_0019d51a)[player_off] - 1;
    uval_2 = CONCAT31((int3)(uval_2 >> 8),flag);
    if (flag < 6) {
      uval_2 = (uint)flag;
      switch(uval_2) {
      case 0:
        process_players_global_packet_action();
        uval = process_players_dungeon_control_packet();
        return CONCAT44(arg_edx,uval);
      case 1:
        process_players_creature_control_packet();
        uval = process_players_map_view_packet();
        return CONCAT44(arg_edx,uval);
      case 2:
        uval = process_players_spectator_packet();
        return CONCAT44(arg_edx,uval);
      case 3:
        process_players_creature_passenger_packet();
        return CONCAT44(arg_edx,extraout_EDX);
      }
    }
  }
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : packet_vio_table_data_block (Original VA: 0x5df2f, Ghidra: FUN_0005df2f)
 * Prototype: void packet_vio_table_data_block(void);
 * Address  : 0x5df2f (Size: 119 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Embedded data/thunk block in packet.cpp
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0005df8a) overlaps instruction at (ram,0x0005df85)
    */
/* WARNING: Removing unreachable block (ram,0x0005df79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void packet_vio_table_data_block(void)

{
  ushort *word_ptr;
  int *int_ptr;
  byte flag;
  undefined1 uval;
  undefined4 uval_2;
  byte flag_3;
  byte flag_5;
  uint uval_3;
  byte *byte_ptr;
  char arg_al;
  uint uval_4;
  int val;
  char *str_ptr;
  char *arg_ecx;
  byte *byte_ptr_2;
  byte flag_6;
  char extraout_DL;
  undefined2 uval_5;
  int arg_edx;
  byte flag_7;
  char ch;
  char *arg_ebx;
  undefined3 uval_6;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  byte *byte_ptr_3;
  undefined4 *unaff_EDI;
  bool in_CF;
  byte in_AF;
  bool in_ZF;
  bool in_SF;
  byte flag_2;
  byte flag_4;
  char *str_ptr_2;
  
  if (((!in_SF) && (!in_CF && !in_ZF)) && (!in_ZF)) {
    if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    byte_ptr_3 = unaff_ESI + 1;
    uval_5 = (undefined2)arg_edx;
    out(*unaff_ESI,uval_5);
    uval_2 = in(uval_5);
    *unaff_EDI = uval_2;
    uval = in(uval_5);
    *(undefined1 *)(unaff_EDI + 1) = uval;
    word_ptr = (ushort *)(arg_edx + 0x61);
    *word_ptr = *word_ptr + (ushort)(0 < (short)-(*word_ptr & 3)) * -(*word_ptr & 3);
    byte_ptr = g_data_00000070;
    uval_2 = g_data_00000068;
    g_data_00000068 = 0x6c;
    g_data_00000064 = uval_2;
    g_data_00000060 = g_data_0000006c;
    g_data_0000005c = g_data_00000070;
    g_data_00000058 = g_data_00000074;
    flag_5 = 9 < ((byte)g_data_00000074 & 0xf) | in_AF;
    uval_4 = CONCAT31((int3)((uint)g_data_00000074 >> 8),(byte)g_data_00000074 + flag_5 * '\x06') &
             0xffffff0f;
    uval_3 = (uint)g_data_00000074 >> 8;
    flag_3 = *g_data_00000070;
    flag_7 = (byte)uval_2;
    flag_4 = *g_data_00000070;
    uval_6 = (undefined3)((uint)uval_2 >> 8);
    str_ptr_2 = (char *)CONCAT31(uval_6,flag_7 - flag_4);
    flag = *byte_ptr_3;
    flag_6 = (byte)g_data_0000006c;
    flag_2 = *byte_ptr_3;
    g_data_0000006c = unaff_EBP;
    g_data_00000070 = byte_ptr_3;
    g_data_00000074 = (undefined4 *)((int)unaff_EDI + 5);
    *byte_ptr_3 = (flag_2 - flag_6) - (flag_7 < flag_3);
    val = (CONCAT22((short)(uval_4 >> 0x10),CONCAT11((char)uval_3 + flag_5,(char)uval_4)) &
             0x1b1c1d24) + 0x50d0e14 +
             (uint)(flag < flag_6 || (byte)(flag_2 - flag_6) < (flag_7 < flag_3));
    str_ptr = (char *)CONCAT31((int3)((uint)val >> 8),(char)val + '\x03');
    int_ptr = (int *)(unaff_ESI + 0x6c0005ec);
    *int_ptr = (int)(str_ptr + *int_ptr);
    byte_ptr_2 = byte_ptr + -1;
    ch = (char)((uint)uval_2 >> 8);
    if (byte_ptr_2 == (byte *)0x0 || *int_ptr == 0) {
      *str_ptr = *str_ptr + flag_6;
      byte_ptr_2 = byte_ptr + -2;
      if (byte_ptr_2 == (byte *)0x0 || *str_ptr != '\0') {
        str_ptr[-0x1d] = str_ptr[-0x1d] + (char)byte_ptr_2;
        str_ptr = str_ptr + 0x5e1be00;
        str_ptr_2 = (char *)CONCAT31(uval_6,(flag_7 - flag_4) + ch);
      }
      else {
        byte_ptr_3 = (byte *)0xfb0005e1;
      }
    }
    else {
      str_ptr = str_ptr + -1;
      if (byte_ptr_2 != (byte *)0x0) {
        unaff_ESI[-0x4fffa1e] = unaff_ESI[-0x4fffa1e] + ch;
      }
    }
    byte_ptr_2 = byte_ptr_2 + -1;
    ch = (char)str_ptr_2;
    if (byte_ptr_2 == (byte *)0x0) {
      *str_ptr_2 = *str_ptr_2 + (char)str_ptr;
    }
    else if (byte_ptr_2 == (byte *)0x0) {
      *g_data_00000058 = *(undefined4 *)byte_ptr_3;
      str_ptr_2 = &g_data_0000005c;
    }
    else {
      str_ptr_2[0x2f0005e3] = str_ptr_2[0x2f0005e3] + (char)byte_ptr_2;
      str_ptr_2 = &g_data_0000005c;
    }
    *(char *)(unaff_EBP + -0x5afffa1b) = *(char *)(unaff_EBP + -0x5afffa1b) + ch;
    str_ptr_2[-0xffffffff00000004] = -0x70;
    str_ptr_2[-0xffffffff00000003] = -0x21;
    str_ptr_2[-0xffffffff00000002] = '\x05';
    str_ptr_2[-0xffffffff00000001] = '\0';
    func_0xe5dbdf95();
    g_bss_280005e9 = g_bss_280005e9 + extraout_DL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *arg_ecx = *arg_ecx + arg_al;
  val = in(5);
  *(char *)((int)unaff_EDI + -0x1d) = *(char *)((int)unaff_EDI + -0x1d) + (char)arg_ecx;
  *arg_ebx = *arg_ebx + (char)arg_edx;
  out(5,(char)(val + 0x5e96900));
  *(char *)(val + 0x29e96ee6) = *(char *)(val + 0x29e96ee6) + (char)arg_ebx;
  out(5,val + 0x5e96900);
  cRamec0005ea = cRamec0005ea + (char)arg_ecx;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/******************************************************************************
 * Function : process_all_players_turn_packets (Original VA: 0x5e01e, Ghidra: FUN_0005e01e)
 * Prototype: void process_all_players_turn_packets(void);
 * Address  : 0x5e01e (Size: 78 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Main per-turn dispatcher executing Packet actions for all active players
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 0 -> 
 ******************************************************************************/
void process_all_players_turn_packets(void)

{
  code ch;
  int player_idx;
  int val;
  code *str_ptr;
  
  val = 0x30;
  str_ptr = packet_vio_table_data_block;
  do {
    if (val == 0) break;
    val = val + -1;
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
  } while ((code)(&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[player_idx * 0x4ef] * 0x11] != ch);
                    /* WARNING: Could not recover jumptable at 0x0005e064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val * 4 + 0x5df5e))();
  return;
}

/******************************************************************************
 * Function : process_players_dungeon_control_packet (Original VA: 0x5eb8d, Ghidra: FUN_0005eb8d)
 * Prototype: void process_players_dungeon_control_packet(void);
 * Address  : 0x5eb8d (Size: 228 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Execute dungeon-view Packet action for a player
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 5 -> compturn_update_player_dungeon_021527, magic_update_creature_and_thing_04efd4, specials_dungeon_special_model_0708fa, specials_update_player_view_state_070a3c, specials_update_creature_control_070ac6
 ******************************************************************************/
void process_players_dungeon_control_packet(void)

{
  byte player_off;
  int player_idx;
  
  player_off = (&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[player_idx * 0x4ef] * 0x11];
  if (player_off < 0x5f) {
    if (0x28 < player_off) {
      if (player_off < 0x2a) {
        magic_update_creature_and_thing_04efd4();
        return;
      }
      if (player_off == 0x5d) {
        specials_dungeon_special_model_0708fa();
        return;
      }
    }
    return;
  }
  if (player_off < 0x60) {
    specials_update_player_view_state_070a3c();
    return;
  }
  if (0x60 < player_off) {
    if (player_off != 0x6b) {
      return;
    }
    compturn_update_player_dungeon_021527();
    return;
  }
  specials_update_creature_control_070ac6();
  return;
}

/******************************************************************************
 * Function : process_players_creature_control_packet (Original VA: 0x5ec71, Ghidra: FUN_0005ec71)
 * Prototype: void process_players_creature_control_packet(void);
 * Address  : 0x5ec71 (Size: 912 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Execute first-person creature possession Packet movement & instance actions
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 4 -> instance_negative_instance_049bfc, instance_update_creature_control_049e95, instance_update_creature_control_049ea9, update_illegal_primary_target_type_0e3e78
 ******************************************************************************/
void process_players_creature_control_packet(void)

{
  int cctrl_ptr;
  short short_val;
  short short_val_2;
  int player_idx;
  int thing_ptr;
  int packet_off;
  int val;
  undefined2 uval;
  uint uval_2;
  int *int_ptr;
  undefined4 uStack_2c;
  int local_28 [2];
  undefined1 *local_20;
  undefined *local_1c;
  
  thing_ptr = player_idx * 0x4ef;
  local_20 = &g_players + thing_ptr;
  packet_off = (uint)(byte)(&g_player_packet_slot)[thing_ptr] * 0x11;
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + thing_ptr)];
  local_28[1] = 1;
  local_1c = &g_packets + packet_off;
  if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && /* thing->class_id */
       (cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)], -1 < *(short *)(thing_ptr + 0x5e))) && /* thing->ccontrol_idx */
      (*(char *)(cctrl_ptr + 0xab) == '\0')) && (*(char *)(thing_ptr + 7) != 'C')) {
    uval_2 = (uint)*(ushort *)(cctrl_ptr + 0xc4);
    if (0x100 < uval_2) {
      uval_2 = 0x100;
    }
    uval = (undefined2)uval_2;
    short_val_2 = (short)((int)uval_2 >> 2);
    if ((*(byte *)((int)&g_packet_control_flags + packet_off) & 4) != 0) {
      short_val = *(short *)(cctrl_ptr + 200) + short_val_2;
      *(short *)(cctrl_ptr + 200) = short_val;
      if ((int)uval_2 < (int)short_val) {
        *(undefined2 *)(cctrl_ptr + 200) = uval;
      }
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 0x40;
      local_28[0] = (int)uval_2 >> 2;
    }
    if ((*(byte *)((int)&g_packet_control_flags + packet_off) & 8) != 0) {
      short_val = *(short *)(cctrl_ptr + 200) - short_val_2;
      *(short *)(cctrl_ptr + 200) = short_val;
      if ((int)short_val < (int)-uval_2) {
        *(undefined2 *)(cctrl_ptr + 200) = uval;
        *(short *)(cctrl_ptr + 200) = -*(short *)(cctrl_ptr + 200);
      }
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 0x40;
    }
    if ((*(byte *)((int)&g_packet_control_flags + packet_off) & 0x10) != 0) {
      short_val = *(short *)(cctrl_ptr + 0xca) + short_val_2;
      *(short *)(cctrl_ptr + 0xca) = short_val;
      if ((int)short_val < (int)-uval_2) {
        *(undefined2 *)(cctrl_ptr + 0xca) = uval;
        *(short *)(cctrl_ptr + 0xca) = -*(short *)(cctrl_ptr + 0xca);
      }
      else if ((int)uval_2 < (int)short_val) {
        *(undefined2 *)(cctrl_ptr + 0xca) = uval;
      }
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 0x80;
    }
    if ((*(byte *)((int)&g_packet_control_flags + packet_off) & 0x20) != 0) {
      short_val_2 = *(short *)(cctrl_ptr + 0xca) - short_val_2;
      *(short *)(cctrl_ptr + 0xca) = short_val_2;
      if ((int)short_val_2 < (int)-uval_2) {
        *(undefined2 *)(cctrl_ptr + 0xca) = uval;
        *(short *)(cctrl_ptr + 0xca) = -*(short *)(cctrl_ptr + 0xca);
      }
      else if ((int)uval_2 < (int)short_val_2) {
        *(undefined2 *)(cctrl_ptr + 0xca) = uval;
      }
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 0x80;
    }
    int_ptr = local_28;
    if (((*(byte *)((int)&g_packet_control_flags + packet_off + 1) & 0x10) != 0) &&
       (int_ptr = local_28, *(char *)(cctrl_ptr + 0xd2) == '\0')) {
      uStack_2c = 0x5ee42;
      packet_off = instance_update_creature_control_049e95();
      int_ptr = local_28;
      if (packet_off != 0) {
        uStack_2c = 0x5ee54;
        packet_off = instance_update_creature_control_049ea9();
        int_ptr = local_28;
        if (packet_off != 0) {
          int_ptr = &uStack_2c;
          uStack_2c = 0;
          update_illegal_primary_target_type_0e3e78();
          instance_negative_instance_049bfc();
        }
      }
    }
    if ((((local_1c[0xf] & 4) != 0) &&
        ((&g_data_0018ee05)[(uint)*(byte *)(cctrl_ptr + 0x1e8) * 0x2a] != '\0')) &&
       ((*(char *)(cctrl_ptr + 0xd2) == '\0' || (*(char *)(cctrl_ptr + 0xd2) == *(char *)(cctrl_ptr + 0x1e8)))))
    {
      *(undefined4 *)((int)int_ptr + -4) = 0;
      *(undefined4 *)((int)int_ptr + -8) = 0x5eedb;
      update_illegal_primary_target_type_0e3e78();
      *(undefined4 *)((int)int_ptr + -8) = 0x5eeeb;
      instance_negative_instance_049bfc();
    }
    uval_2 = (uint)*(ushort *)(local_1c + 0xc);
    if (uval_2 < 5) {
      uval_2 = 5;
    }
    if (0xfa < uval_2) {
      uval_2 = 0xfa;
    }
    packet_off = (int)(*(ushort *)(local_1c + 10) - 0x7f) / (int)(uint)(byte)local_20[0x14];
    if (packet_off != 0) {
      if (packet_off < -0x20) {
        packet_off = -0x20;
      }
      else if (0x20 < packet_off) {
        packet_off = 0x20;
      }
      val = packet_off * 0x38 >> 0x1f;
      *(short *)(cctrl_ptr + 0x6c) =
           *(short *)(cctrl_ptr + 0x6c) +
           (short)((int)((packet_off * 0x38 + val * -0x20) - (uint)(val << 4 < 0)) >> 5) *
           (short)local_28[1];
    }
    packet_off = (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6;
    if ((int)*(short *)(cctrl_ptr + 0x6c) < (int)-(uint)*(ushort *)(&g_bss_002e9160 + packet_off)) {
      *(undefined2 *)(cctrl_ptr + 0x6c) = *(undefined2 *)(&g_bss_002e9160 + packet_off);
      *(short *)(cctrl_ptr + 0x6c) = -*(short *)(cctrl_ptr + 0x6c);
    }
    else if ((int)(uint)*(ushort *)(&g_bss_002e9160 + packet_off) < (int)*(short *)(cctrl_ptr + 0x6c)) {
      *(undefined2 *)(cctrl_ptr + 0x6c) = *(undefined2 *)(&g_bss_002e9160 + packet_off);
    }
    *(ushort *)(thing_ptr + 0x52) = *(short *)(thing_ptr + 0x52) + *(short *)(cctrl_ptr + 0x6c) & 0x7ff; /* thing->health */
    *(ushort *)(thing_ptr + 0x54) = (ushort)((int)((uval_2 - 0x7f) * 0xe3) / 0x7f) & 0x7ff;
    *(short *)(cctrl_ptr + 0xcc) =
         (short)((*(short *)(cctrl_ptr + 0x6c) * 0xaa) /
                (int)(uint)*(ushort *)(&g_bss_002e9160 + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6));
    if (*(short *)(cctrl_ptr + 0x6c) != 0) {
      thing_ptr = *(short *)(cctrl_ptr + 0x6c) * 4;
      packet_off = thing_ptr >> 0x1f;
      *(short *)(cctrl_ptr + 0x6c) = (short)((int)((thing_ptr + packet_off * -8) - (uint)(packet_off << 2 < 0)) >> 3);
    }
  }
  return;
}

/******************************************************************************
 * Function : process_players_spectator_packet (Original VA: 0x5f001, Ghidra: FUN_0005f001)
 * Prototype: void process_players_spectator_packet(void);
 * Address  : 0x5f001 (Size: 72 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Handle spectator view packet toggle
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 1 -> instance_fn_049eff
 ******************************************************************************/
void process_players_spectator_packet(void)

{
  int player_idx;
  
  if ((&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[player_idx * 0x4ef] * 0x11] != ' ') {
    return;
  }
  *(undefined2 *)(&g_player_influenced_thing_idx + player_idx * 0x4ef) =
       *(undefined2 *)(&g_packet_actn_par1 + (uint)(byte)(&g_player_packet_slot)[player_idx * 0x4ef] * 0x11);
  instance_fn_049eff();
  return;
}

/******************************************************************************
 * Function : process_players_map_view_packet (Original VA: 0x5f049, Ghidra: FUN_0005f049)
 * Prototype: void process_players_map_view_packet(void);
 * Address  : 0x5f049 (Size: 282 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Handle parchment map view zoom/exit packet actions
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 6 -> instance_negative_instance_049bfc, instance_update_creature_control_049e95, instance_update_creature_control_049ea9, instance_fn_049eff, newgui_fn_05345d, update_illegal_primary_target_type_0e3e78
 ******************************************************************************/
void process_players_map_view_packet(void)

{
  byte thing_ptr;
  int player_idx;
  int player_off;
  int packet_off;
  
  player_off = player_idx * 0x4ef;
  packet_off = (uint)(byte)(&g_player_packet_slot)[player_off] * 0x11;
  thing_ptr = (&g_packet_action_type)[packet_off];
  if (0x20 < thing_ptr) {
    if (thing_ptr < 0x22) {
      *(undefined2 *)(&g_player_influenced_thing_idx + player_off) = *(undefined2 *)(&g_packet_actn_par1 + packet_off);
      instance_fn_049eff();
    }
    else if (thing_ptr == 0x27) {
      if ((&g_data_0018edeb)[*(short *)(&g_packet_actn_par1 + packet_off) * 0x2a] == '\0') {
        *(undefined1 *)
         ((&g_creature_ctrl_ptrs)
          [*(ushort *)((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)] + 100)] + 0x1e8) =
             (&g_packet_actn_par1)[packet_off];
      }
      else if (((*(char *)((&g_creature_ctrl_ptrs)
                           [*(ushort *)
                             ((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)] + 100)] +
                          0xd2) == '\0') && (packet_off = instance_update_creature_control_049e95(), packet_off != 0)) &&
              (packet_off = instance_update_creature_control_049ea9(), packet_off != 0)) {
        update_illegal_primary_target_type_0e3e78(0);
        instance_negative_instance_049bfc();
        if (&g_players + g_my_player_word._3_1_ * 0x4ef == &g_players + player_off) {
          newgui_fn_05345d();
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : process_players_global_packet_action (Original VA: 0x5f163, Ghidra: FUN_0005f163)
 * Prototype: void process_players_global_packet_action(void);
 * Address  : 0x5f163 (Size: 586 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Execute global hotkeys, pause, message, and view-mode Packet actions
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 9 -> packet_update_player_zoom_box, process_players_dungeon_command_packet, workshop_fn_077ad0, workshop_fn_077b0f, workshop_fn_077b4e, workshop_fn_077f16, workshop_fn_077fdc, workshop_fn_0780a3 ...
 ******************************************************************************/
void process_players_global_packet_action(void)

{
  byte flag;
  int val;
  int player_idx;
  int player_off;
  undefined1 *player_off_2;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  
  player_off_2 = &g_players + player_idx * 0x4ef;
  player_off = (uint)(byte)(&g_player_packet_slot)[player_idx * 0x4ef] * 0x11;
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 4) != 0) {
    workshop_fn_077ad0();
    player_off_2 = extraout_ECX;
  }
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 8) != 0) {
    workshop_fn_077ad0();
    player_off_2 = extraout_ECX_00;
  }
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 0x10) != 0) {
    workshop_fn_077b0f();
    player_off_2 = extraout_ECX_01;
  }
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 0x20) != 0) {
    workshop_fn_077b0f();
    player_off_2 = extraout_ECX_02;
  }
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 2) != 0) {
    val = *(int *)(player_off_2 + 0x38);
    flag = *(byte *)(val + 6);
    if (1 < flag) {
      if (flag < 3) {
        workshop_fn_077b4e();
        player_off_2 = extraout_ECX_03;
      }
      else if (flag == 5) {
        *(uint *)(val + 7) = *(int *)(val + 7) + 0x200U & 0x7ff;
      }
    }
  }
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 1) != 0) {
    val = *(int *)(player_off_2 + 0x38);
    flag = *(byte *)(val + 6);
    if (1 < flag) {
      if (flag < 3) {
        workshop_fn_077b4e();
        player_off_2 = extraout_ECX_04;
      }
      else if (flag == 5) {
        *(uint *)(val + 7) = *(int *)(val + 7) + 0x600U & 0x7ff;
      }
    }
  }
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 0x40) != 0) {
    if (*(char *)(*(int *)(player_off_2 + 0x38) + 6) == '\x02') {
      workshop_fn_077f16();
      workshop_fn_0780a3();
      workshop_fn_0780c2();
      player_off_2 = extraout_ECX_05;
    }
    else {
      workshop_fn_077f16();
      player_off_2 = extraout_ECX_06;
    }
  }
  if ((*(byte *)((int)&g_packet_control_flags + player_off) & 0x80) != 0) {
    if (*(char *)(*(int *)(player_off_2 + 0x38) + 6) == '\x02') {
      workshop_fn_077fdc();
      workshop_fn_0780a3();
      workshop_fn_0780c2();
    }
    else {
      workshop_fn_077fdc();
    }
  }
  process_players_dungeon_command_packet();
  packet_update_player_zoom_box();
  return;
}

/******************************************************************************
 * Function : process_players_creature_passenger_packet (Original VA: 0x5f3ad, Ghidra: FUN_0005f3ad)
 * Prototype: void process_players_creature_passenger_packet(void);
 * Address  : 0x5f3ad (Size: 139 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Update camera position and actions while riding a possessed creature
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 2 -> packet_update_player_zoom_box, clear_packet_for_player
 ******************************************************************************/
void process_players_creature_passenger_packet(void)

{
  int packet_off;
  int player_idx;
  int player_off;
  int extraout_ECX;
  int val;
  
  player_off = player_idx * 0x4ef;
  packet_off = (*(ushort *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[player_off] * 0x11) - 0x96) * 3;
  val = packet_off >> 0x1f;
  clear_packet_for_player();
  *(short *)(&g_bss_0019d158 + player_off) =
       ((short)((int)((packet_off + val * -4) - (uint)(val << 1 < 0)) >> 2) + 1) * 0x100 + 0x80;
  *(short *)(&g_bss_0019d15a + player_off) = (short)(extraout_ECX << 8) + 0x80;
  packet_update_player_zoom_box();
  return;
}

/******************************************************************************
 * Function : packet_update_player_zoom_box (Original VA: 0x5f438, Ghidra: FUN_0005f438)
 * Prototype: void packet_update_player_zoom_box(void);
 * Address  : 0x5f438 (Size: 161 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Update player camera zoom/bounding box from packet control flags
 * Callers  : 2 -> process_players_global_packet_action, process_players_creature_passenger_packet
 * Callees  : 4 -> light_fn_0acdfc, light_already_list_0ad54c, light_attempt_turn_off_unallocated_0ad66c, move_process_map_subtile_0b3788
 ******************************************************************************/
void packet_update_player_zoom_box(void)

{
  undefined4 player_off;
  int arg_eax;
  undefined1 *extraout_EDX;
  byte flag;
  undefined2 local_18 [2];
  
  flag = 0;
  if (*(short *)(arg_eax + 0x460) != 0) {
    if ((*(byte *)((int)&g_packet_control_flags +
                  (uint)(byte)(&g_player_packet_slot)[(uint)*(byte *)(arg_eax + 0x2b) * 0x4ef] * 0x11 + 1) &
        0x80) == 0) {
      light_attempt_turn_off_unallocated_0ad66c();
    }
    else {
      player_off = *(undefined4 *)
               (&g_packet_pos_x +
               (uint)(byte)(&g_player_packet_slot)[(uint)*(byte *)(arg_eax + 0x2b) * 0x4ef] * 0x11);
      local_18[0] = move_process_map_subtile_0b3788();
      if (extraout_EDX == &g_players + g_my_player_word._3_1_ * 0x4ef) {
        g_bss_002e90b2 = player_off;
        (&g_bss_002e90b6)[(uint)flag * -4] = local_18[(uint)flag * -4];
      }
      light_already_list_0ad54c();
      light_fn_0acdfc();
    }
  }
  return;
}

/******************************************************************************
 * Function : packet_check_thing_interaction_valid (Original VA: 0x5f4d9, Ghidra: FUN_0005f4d9)
 * Prototype: void packet_check_thing_interaction_valid(void);
 * Address  : 0x5f4d9 (Size: 158 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Verify whether player can interact with target Thing in packet
 * Callers  : 1 -> process_players_packet_control_flags
 * Callees  : 2 -> bflib_system_io_fn_0efdb4, bflib_system_io_fn_0f43c7
 ******************************************************************************/
void packet_check_thing_interaction_valid(void)

{
  undefined1 uval;
  int arg_eax;
  int val;
  int extraout_ECX;
  char ch;
  ulonglong uval_2;
  
  if (-1 < *(short *)(&g_packet_actn_par1 +
                     (uint)(byte)(&g_player_packet_slot)[(uint)*(byte *)(arg_eax + 0x2b) * 0x4ef] * 0x11)) {
    uval_2 = bflib_system_io_fn_0efdb4();
    val = (int)uval_2;
    if (extraout_ECX == 0xe) {
      if (val != 0) {
        *(undefined1 *)(arg_eax + 0x462 + val) = 0;
        return;
      }
    }
    else {
      ch = (char)(uval_2 >> 0x20);
      if ((((uval_2 & 0x8000000000) == 0) &&
          (((('`' < ch && (ch < '{')) || (('@' < ch && (ch < '[')))) ||
           ((('/' < ch && (ch < ':')) || (ch == ' ')))))) && (val < 0x3e)) {
        uval = bflib_system_io_fn_0f43c7();
        *(undefined1 *)(val + 0x464 + arg_eax) = 0;
        *(undefined1 *)(val + 0x463 + arg_eax) = uval;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : packet_can_player_afford_room_or_trap (Original VA: 0x5f577, Ghidra: FUN_0005f577)
 * Prototype: uint packet_can_player_afford_room_or_trap(void);
 * Address  : 0x5f577 (Size: 100 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Check if player gold covers cost of room/trap kind
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 0 -> 
 ******************************************************************************/
uint packet_can_player_afford_room_or_trap(void)

{
  char ch;
  int arg_eax;
  uint uval;
  byte arg_dl;
  int arg_ebx;
  int val;
  
  uval = arg_eax + 1U >> 2;
  if (7 < uval) {
    uval = 8;
  }
  if (*(int *)(&g_bss_002eae11 + uval * 4 + (uint)arg_dl * 0x4c) <= arg_ebx) {
    return arg_eax + 1U;
  }
  uval = arg_eax + 1U >> 2;
  if (7 < uval) {
    uval = 8;
  }
  while( true ) {
    ch = (char)uval;
    val = ch * 4;
    if (*(int *)(&g_bss_002eae11 + val + (uint)arg_dl * 0x4c) <= arg_ebx) break;
    uval = (uint)(byte)(ch - 1);
  }
  if (ch < 0) {
    return 0;
  }
  return val + 1;
}

/******************************************************************************
 * Function : packet_is_subtile_revealed_for_player (Original VA: 0x5f5db, Ghidra: FUN_0005f5db)
 * Prototype: uint packet_is_subtile_revealed_for_player(void);
 * Address  : 0x5f5db (Size: 126 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Check if map subtile (x, y) is revealed for player bitmask
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 0 -> 
 ******************************************************************************/
uint packet_is_subtile_revealed_for_player(void)

{
  int arg_eax;
  int slab_coord;
  uint uval;
  int subtile_x;
  uint arg_ebx;
  
  if ((*(uint *)((int)&g_map_subtiles + (subtile_x * 0x100 + arg_eax) * 5 + 1) >> 0x1c &
      1 << ((byte)arg_ebx & 0x1f)) != 0) {
    slab_coord = ((&g_subtile_to_slab_lut)[arg_eax] + (&g_subtile_to_slab_lut)[subtile_x] * 0x55) * 6;
    uval = (uint)(byte)(&g_slabmap_base)[slab_coord];
    if (((0x29 < uval) && (uval < 0x30)) && (((&g_slabmap)[slab_coord] & 7) == arg_ebx)) {
      return (&g_slabmap)[slab_coord] & 7 ^ arg_ebx;
    }
    if ((*(uint *)(&g_data_001921c6 + uval * 0x16) & 0x29) == 0) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : process_players_dungeon_command_packet (Original VA: 0x5f6c5, Ghidra: FUN_0005f6c5)
 * Prototype: void process_players_dungeon_command_packet(void);
 * Address  : 0x5f6c5 (Size: 8332 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp lines 2969, 3358
 * Purpose  : Master switch executing dungeon build, dig, slap, pickup, drop, and spell Packet commands
 * Callers  : 1 -> process_players_global_packet_action
 * Callees  : 77 -> build_update_player_view_state_01458c, build_update_player_view_state_0145d2, compturn_process_map_subtile_022660, door_process_map_subtile_022b3a, door_fn_023042, door_remove_keyhole_0230d3, dungeon_remove_reserve_023868, gravyard_fn_039d55 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_players_dungeon_command_packet(void)

{
  byte flag;
  char ch;
  byte thing_ptr;
  short short_val;
  undefined2 uval;
  uint player_idx;
  int thing_ptr_2;
  int packet_off;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  uint extraout_EDX;
  uint *word_ptr;
  uint *word_ptr_2;
  int val;
  int val_2;
  bool flag_2;
  uint uStack_58;
  uint local_54;
  undefined4 local_50;
  undefined2 local_4c [2];
  undefined *local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  byte local_20;
  byte local_1c;
  
  thing_ptr = 0;
  word_ptr_2 = &local_54;
  thing_ptr_2 = player_idx * 0x4ef;
  local_24 = &g_players + thing_ptr_2;
  packet_off = (uint)(byte)(&g_player_packet_slot)[thing_ptr_2] * 0x11;
  local_48 = &g_packets + packet_off;
  (&g_bss_0019d56c)[thing_ptr_2] = 1;
  local_28 = 0;
  *(undefined4 *)(&g_bss_0034d208 + player_idx * 4) = 0;
  if ((*(byte *)((int)&g_packet_control_flags + packet_off + 1) & 0x40) != 0) {
    return;
  }
  local_54 = player_idx;
  if ((*(byte *)((int)&g_packet_control_flags + packet_off + 1) & 4) == 0) {
    if ((*(byte *)((int)&g_packet_control_flags + packet_off + 1) & 0x10) == 0) {
      *(undefined4 *)(&g_player_victory_state + thing_ptr_2) = 0;
    }
  }
  else {
    flag = (&g_bss_0019d51b)[thing_ptr_2];
    if (flag < 0x11) {
      if (flag < 7) {
        if (flag == 6) {
          if ((&g_bss_002e0e0d)[(uint)(byte)(&g_player_id_number)[thing_ptr_2] * 0x542] == 0) goto LAB_0005f787;
          thing_ptr_2 = (uint)(byte)(&g_bss_002e0e0c)[(uint)(byte)(&g_player_id_number)[thing_ptr_2] * 0x1508] << 2;
          goto LAB_0005f795;
        }
      }
      else if ((flag < 8) || (flag == 8)) goto LAB_0005f787;
LAB_0005f8bd:
      *(int *)(&g_player_victory_state + thing_ptr_2) = *(int *)(&g_player_victory_state + thing_ptr_2) + 1;
    }
    else {
      if (0x11 < flag) {
        if (flag < 0x14) {
          if (flag != 0x13) goto LAB_0005f8bd;
        }
        else if (((0x14 < flag) && (0x15 < flag)) && (flag != 0x16)) goto LAB_0005f8bd;
      }
LAB_0005f787:
      uStack_58 = 0x5f792;
      thing_ptr_2 = packet_can_player_afford_room_or_trap();
LAB_0005f795:
      *(int *)(local_24 + 0x4d2) = thing_ptr_2;
    }
  }
  if ((local_48[0xf] & 8) == 0) {
    if ((local_48[0xf] & 0x20) == 0) {
      local_24[0x4d6] = 0;
      local_24[0x4d7] = 0;
      local_24[0x4d8] = 0;
      local_24[0x4d9] = 0;
    }
  }
  else {
    *(int *)(local_24 + 0x4d6) = *(int *)(local_24 + 0x4d6) + 1;
  }
  if ((local_48[0xf] & 0x10) != 0) {
    if (*(int *)(&g_bss_0034d1f4 + local_54 * 4) < 5) {
      *(undefined4 *)(&g_bss_0034d208 + local_54 * 4) = 1;
    }
    *(undefined4 *)(&g_bss_0034d1f4 + local_54 * 4) = 0;
  }
  if ((((local_48[0xf] & 4) == 0) && ((local_48[0xf] & 1) == 0)) &&
     (*(int *)(&g_bss_0034d1f4 + local_54 * 4) < 0x7fffffff)) {
    *(int *)(&g_bss_0034d1f4 + local_54 * 4) = *(int *)(&g_bss_0034d1f4 + local_54 * 4) + 1;
  }
  local_24[0x35] = 0;
  local_24[0x36] = 0;
  word_ptr = &local_54;
  switch(local_24[0x453]) {
  case 1:
    local_50 = *(undefined4 *)(local_48 + 10);
    local_28 = 1;
    if ((((local_48[0xf] & 1) == 0) && ((local_48[0xf] & 4) == 0)) && ((local_48[0xf] & 0x10) == 0))
    {
      local_24[0x455] = 0;
    }
    local_24[0x454] = (local_48[0x10] & 0x1f) >> 1;
    local_24[3] = local_24[3] & 0xfd;
    if ((local_24[0x455] == 0) || (local_24[0x455] == 3)) {
      uStack_58 = 0x5fa0d;
      uval_2 = creature_process_map_subtile_085598();
      if (g_thing_ptrs < uval_2) {
        if (*(short *)(local_24 + 0x43a) == 0) {
          uStack_58 = 0x5fa2d;
          packet_possess_thing_direct();
          uval_2 = extraout_EDX;
        }
        *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
      }
      word_ptr = &local_54;
      if (*(short *)(&g_bss_002e05bc + local_54 * 0x1508) != 0) {
        if (*(short *)(local_24 + 0x43a) == 0) {
          uStack_58 = 0x5fa63;
          packet_possess_thing_direct();
        }
        local_34 = (uint)(*(char *)((&g_thing_ptrs)
                                    [*(ushort *)(&g_bss_002e05bc + (uint)local_24[0x2b] * 0x1508)] +
                                   0x1a) == '\x17');
        local_44 = (uint)(byte)local_48[0xd];
        uStack_58 = 0x5faa7;
        thing_ptr_2 = is_subtile_revealed_and_within_bounds();
        if (thing_ptr_2 == 0) {
          uStack_58 = 0x5fac5;
          thing_ptr_2 = packet_is_subtile_revealed_for_player();
          if (thing_ptr_2 != 0) {
            local_24[3] = local_24[3] | 2;
            local_44 = (uint)(byte)local_48[0xb];
            uStack_58 = 0x5fb21;
            draw_update_slab_subtile_columns_08f320();
            word_ptr = &local_54;
            goto LAB_0005fb21;
          }
        }
        uStack_58 = (uint)local_24[0x4a4];
        draw_update_slab_subtile_columns_08fd14();
        word_ptr = &uStack_58;
      }
LAB_0005fb21:
      if (((*(short *)(local_24 + 0x43a) != 0) && (thing_ptr = local_24[0x4b0], thing_ptr != 1)) &&
         ((thing_ptr != 2 && ((thing_ptr != 3 && (thing_ptr != 4)))))) {
        if ((*(short *)(local_24 + 0x35) == 0) &&
           (*(short *)(&g_bss_002e05bc + local_54 * 0x1508) != 0)) {
          if (*(char *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + local_54 * 0x1508)] + 0x1f) ==
              '\x01') {
            *(undefined4 *)((int)word_ptr + -4) = 0x5fbdb;
            object_fn_0c57a4();
          }
          *(undefined4 *)((int)word_ptr + -4) = 0x5fbfd;
          packet_handle_double_click_action();
          *(byte *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + local_54 * 0x1508)] + 0x4f) =
               *(byte *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + local_54 * 0x1508)] + 0x4f) &
               0xfe;
        }
        else {
          *(undefined4 *)((int)word_ptr + -4) = 0x5fb8c;
          packet_handle_double_click_action();
          if (*(short *)(&g_bss_002e05bc + local_54 * 0x1508) != 0) {
            *(byte *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + local_54 * 0x1508)] + 0x4f) =
                 *(byte *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + local_54 * 0x1508)] + 0x4f) |
                 1;
          }
        }
      }
    }
    else {
      word_ptr = &local_54;
      if ((*(short *)(local_24 + 0x43a) != 0) && (word_ptr = &local_54, local_24[0x4b0] != 1)) {
        uStack_58 = 0x5fc49;
        structs_update_creature_control_072af4();
        local_24[0x43a] = 0;
        local_24[0x43b] = 0;
        word_ptr = &local_54;
      }
    }
    if ((local_48[0xf] & 0x80) != 0) {
      if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
        *(undefined4 *)((int)word_ptr + -4) = 0x5fc7e;
        ch = newgui_process_thing_entity_057f6b();
        if ((ch == '\0') && (local_24[0x454] == 1)) {
          local_44 = (uint)(byte)local_48[0xd];
          *(undefined4 *)((int)word_ptr + -4) = 0x5fccb;
          draw_update_slab_subtile_columns_08f320();
        }
      }
      if ((local_48[0xf] & 1) != 0) {
        *(ushort *)(local_24 + 0x4ab) = (ushort)(byte)local_48[0xb];
        thing_ptr = local_48[0xd];
        local_24[0x4af] = 1;
        *(ushort *)(local_24 + 0x4ad) = (ushort)thing_ptr;
        thing_ptr = local_24[0x454];
        local_24[0x455] = thing_ptr;
        if (thing_ptr < 2) {
          if (thing_ptr == 1) {
            *(undefined4 *)((int)word_ptr + -4) = 0x5fd02;
            thing_ptr_2 = imptool_update_player_dungeon_0401aa();
            *local_24 = *local_24 & 0xdf;
LAB_0005fd10:
            *local_24 = *local_24 | (thing_ptr_2 != -1) << 5;
          }
        }
        else if (thing_ptr < 3) {
          *(undefined4 *)((int)word_ptr + -4) = 0x5fd84;
          thing_ptr_2 = door_process_map_subtile_022b3a();
          if (thing_ptr_2 != 0) {
            if (*(char *)(thing_ptr_2 + 0x18) == '\0') {
              *(undefined4 *)((int)word_ptr + -4) = 0x5fd9a;
              door_fn_023042();
            }
            else {
              *(undefined4 *)((int)word_ptr + -4) = 0x5fd93;
              door_remove_keyhole_0230d3();
            }
          }
        }
        else if ((thing_ptr == 3) && (*(short *)(local_24 + 0x35) == 0)) {
          *(undefined4 *)((int)word_ptr + -4) = 0x5fd5a;
          thing_ptr_2 = imptool_update_player_dungeon_0401aa();
          *local_24 = *local_24 & 0xdf;
          local_24[3] = local_24[3] | 1;
          goto LAB_0005fd10;
        }
        local_48[0xf] = local_48[0xf] & 0xfe;
      }
      if ((local_48[0xf] & 2) != 0) {
        *(ushort *)(local_24 + 0x4ab) = (ushort)(byte)local_48[0xb];
        *(ushort *)(local_24 + 0x4ad) = (ushort)(byte)local_48[0xd];
        local_24[0x4af] = 1;
        local_48[0xf] = local_48[0xf] & 0xfd;
      }
    }
    if ((local_48[0xf] & 4) != 0) {
      if ((local_24[0x455] == 0) && (local_24[0x455] = local_24[0x454], local_24[0x454] == 1)) {
        *(undefined4 *)((int)word_ptr + -4) = 0x5fe6d;
        thing_ptr_2 = imptool_update_player_dungeon_0401aa();
        *local_24 = *local_24 & 0xdf;
        *local_24 = *local_24 | (thing_ptr_2 != -1) << 5;
      }
      if (local_24[0x4af] != 0) {
        if (local_24[0x455] == local_24[0x454]) {
          thing_ptr = local_24[0x455];
          if (thing_ptr < 2) {
            if (thing_ptr == 1) {
              if ((*local_24 & 0x20) != 0) goto LAB_0005feb9;
              if (*(int *)(&g_bss_002e1418 + (uint)local_24[0x2b] * 0x1508) == 300) goto LAB_0005ff07;
LAB_0005fef5:
              *(undefined4 *)((int)word_ptr + -4) = 0x5ff02;
              build_update_player_view_state_01458c();
            }
          }
          else if (((2 < thing_ptr) && (thing_ptr == 3)) && ((local_24[3] & 1) != 0)) {
            if ((*local_24 & 0x20) == 0) {
              if (*(int *)(&g_bss_002e1418 + (uint)local_24[0x2b] * 0x1508) == 300) {
LAB_0005ff07:
                if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
                  *(undefined4 *)((int)word_ptr + -4) = 0x5ff32;
                  moodneed_fn_051374();
                }
              }
              else {
                *(undefined4 *)((int)word_ptr + -4) = 0x5feed;
                thing_ptr_2 = packet_is_subtile_revealed_for_player();
                if (thing_ptr_2 != 0) goto LAB_0005fef5;
              }
            }
            else {
LAB_0005feb9:
              *(undefined4 *)((int)word_ptr + -4) = 0x5fec6;
              build_update_player_view_state_0145d2();
            }
          }
        }
        local_48[0xf] = local_48[0xf] & 0xef;
      }
    }
    if (((local_48[0xf] & 8) != 0) && (local_24[0x4af] != 0)) {
      local_48[0xf] = local_48[0xf] & 0xdf;
    }
    if ((local_48[0xf] & 0x10) != 0) {
      if (local_24[0x455] == 0) {
        local_24[0x455] = local_24[0x454];
      }
      if (local_24[0x4af] != 0) {
        if (((*(short *)(local_24 + 0x35) == 0) || (local_24[4] == 0)) ||
           (*(short *)(local_24 + 0x35) == *(short *)(&g_bss_002e05bc + local_54 * 0x1508))) {
LAB_0006004b:
          if (((*(short *)(local_24 + 0x35) != 0) && (local_24[5] != 0)) &&
             (*(short *)(local_24 + 0x35) != *(short *)(&g_bss_002e05bc + local_54 * 0x1508))) {
            *(undefined4 *)((int)word_ptr + -4) = 0x60094;
            thing_ptr_2 = creature_fn_0866f8();
            if (thing_ptr_2 != 0) {
              if (*(short *)(local_24 + 0x35) != *(short *)(local_24 + 0x2f)) {
                if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
                  *(undefined4 *)((int)word_ptr + -4) = 0x600c3;
                  newgui_fn_05aee2();
                  *(undefined4 *)((int)word_ptr + -4) = 0x600cd;
                  newgui_fn_05cf2d();
                }
                *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
                *(undefined4 *)((int)word_ptr + -4) = 0x600ed;
                inits_update_player_view_state_04845c();
                goto LAB_00060035;
              }
              goto LAB_0006003f;
            }
          }
          thing_ptr = local_24[0x455];
          if (thing_ptr == local_24[0x454]) {
            if (thing_ptr < 2) {
              if (thing_ptr == 1) {
                if ((*local_24 & 0x20) == 0) {
                  if (300 - *(int *)(&g_bss_002e1418 + (uint)local_24[0x2b] * 0x1508) < 9) {
                    if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
                      *(undefined4 *)((int)word_ptr + -4) = 0x60181;
                      moodneed_fn_051374();
                    }
                  }
                  else {
                    *(undefined4 *)((int)word_ptr + -4) = 0x60154;
                    build_update_player_view_state_01458c();
                  }
                }
                else {
                  *(undefined4 *)((int)word_ptr + -4) = 0x60126;
                  build_update_player_view_state_0145d2();
                }
              }
            }
            else if (((2 < thing_ptr) && (thing_ptr == 3)) && (*(short *)(local_24 + 0x35) != 0)) {
              *(undefined4 *)((int)word_ptr + -4) = 0x6019d;
              lair_process_thing_entity_04e120();
            }
          }
        }
        else {
          *(undefined4 *)((int)word_ptr + -4) = 0x6000c;
          thing_ptr_2 = creature_update_creature_control_0865b8();
          if (thing_ptr_2 == 0) goto LAB_0006004b;
          *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
          *(undefined4 *)((int)word_ptr + -4) = 0x60030;
          inits_update_player_view_state_04845c();
LAB_00060035:
          *(undefined4 *)((int)word_ptr + -4) = 0x6003f;
          instance_fn_049eff();
LAB_0006003f:
          local_48[0xf] = local_48[0xf] & 0xef;
        }
        local_24[0x4af] = 0;
        local_48[0xf] = local_48[0xf] & 0xef;
        local_24[0x455] = 0;
        local_24[3] = local_24[3] & 0xfe;
      }
    }
    if (((local_48[0xf] & 0x20) == 0) || (local_24[0x4af] == 0)) goto switchD_0005f95d_caseD_5;
    if (*(short *)(&g_bss_002e05bc + (uint)local_24[0x2b] * 0x1508) == 0) {
      if (local_24[0x454] == 3) {
        *(undefined4 *)((int)word_ptr + -4) = 0x60217;
        magic_update_player_dungeon_04e585();
      }
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x60247;
      short_val = creature_process_thing_entity_0849c8();
      if (short_val == 0) goto switchD_0005f95d_caseD_5;
    }
    local_24[0x4af] = 0;
    goto LAB_00061429;
  case 2:
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      thing_ptr_2 = (&g_subtile_to_slab_lut)[(byte)local_48[0xb]];
      packet_off = (&g_subtile_to_slab_lut)[(byte)local_48[0xd]];
      local_50 = *(undefined4 *)(local_48 + 10);
      if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
        g_data_0017d17b._3_1_ = (&g_bss_0019d56b)[g_my_player_word._3_1_ * 0x4ef];
      }
      local_44 = (uint)(byte)local_48[0xb];
      uStack_58 = 0x602eb;
      ch = draw_update_slab_subtile_columns_08f518();
      word_ptr = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        if (ch == '\0') {
LAB_0006045d:
          if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
LAB_00060467:
            uStack_58 = 0x6046c;
            sound_non_emitter_has_been_06e9ab();
          }
        }
        else {
          uStack_58 = 0x60305;
          short_val = structs_process_dungeon_room_0728e9();
          if (short_val != 0) {
            uStack_58 = 0x6032a;
            val = dungeon_remove_reserve_023868();
            if (val < 0) {
              word_ptr = &local_54;
              if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
                uStack_58 = 0x6035a;
                moodneed_fn_051374();
                word_ptr = &local_54;
              }
              goto switchD_0005f95d_caseD_5;
            }
          }
          local_3c = (&g_subtile_to_slab_lut)[thing_ptr_2 * 3];
          local_30 = (&g_subtile_to_slab_lut)[packet_off * 3];
          uStack_58 = 0x603a1;
          thing_ptr_2 = room_how_room_exist_slabs_0cae40();
          if (thing_ptr_2 != 0) {
            if (local_24[0x4a3] == 0xf) {
              *(int *)(&g_bss_002e17e4 + local_54 * 0x1508) =
                   *(int *)(&g_bss_002e17e4 + local_54 * 0x1508) + 1;
            }
            *(undefined4 *)(&g_bss_002e142d + local_54 * 0x1508) = 0xc0;
            if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_54) {
              uStack_58 = 0x603f9;
              sound_non_emitter_has_been_06e9ab();
            }
            local_50 = CONCAT22((short)local_30 * 0x300 + 0x180,(short)local_3c * 0x300 + 0x180);
            local_4c[0] = 0x180;
            uStack_58 = 0x60430;
            thing_ptr_2 = inits_allocate_dynamic_light_shot_0444a9();
            if (thing_ptr_2 != 0) {
              *(int *)(thing_ptr_2 + 0x13) = (int)*(short *)(&g_bss_002eadcd + (uint)local_24[0x4a3] * 4); /* thing->anim_sprite */
            }
          }
        }
LAB_0006046c:
        local_48[0xf] = local_48[0xf] & 0xfe;
        word_ptr = &local_54;
        goto switchD_0005f95d_caseD_5;
      }
    }
    goto LAB_00060a83;
  case 3:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x60aee;
    thing_ptr_2 = inits_told_you_so_create_043bb3();
    word_ptr = &local_54;
    if (thing_ptr_2 != 0) {
      uStack_58 = 0x60afc;
      local_4c[0] = move_process_map_subtile_0b28e8();
      uStack_58 = 0x60b0a;
      packet_off = ceiling_process_map_subtile_07dbc0();
      if (packet_off == 0) {
        *(undefined4 *)(thing_ptr_2 + 0xd) = local_50; /* thing->mappos.val_x */
        *(undefined2 *)(thing_ptr_2 + 0x11 + (uint)thing_ptr * -8) = local_4c[(uint)thing_ptr * -4];
        uStack_58 = 0x60b29;
        person_peter_list_06385d();
        uStack_58 = 0x60b30;
        person_thing_already_peter_list_063670();
        word_ptr = &local_54;
      }
      else {
        uStack_58 = 0x60b17;
        structs_update_creature_control_072af4();
        word_ptr = &local_54;
      }
    }
    break;
  case 4:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    uStack_58 = 0x60c94;
    thing_ptr_2 = inits_told_you_so_create_043bb3();
    if (thing_ptr_2 == 0) {
      uStack_58 = 0x60d3d;
      LbErrorLog(); /* LbErrorLog("packet.cpp", line 2969, "No room here to delete") */
      word_ptr = &local_54;
    }
    else {
      uStack_58 = 0x60ca6;
      local_4c[0] = move_process_map_subtile_0b28e8();
      uStack_58 = 0x60cb4;
      packet_off = ceiling_process_map_subtile_07dbc0();
      if (packet_off == 0) {
        *(undefined4 *)(thing_ptr_2 + 0xd) = local_50; /* thing->mappos.val_x */
        *(undefined2 *)(thing_ptr_2 + 0x11 + (uint)thing_ptr * -8) = local_4c[(uint)thing_ptr * -4];
        uStack_58 = 0x60cd6;
        person_peter_list_06385d();
        uStack_58 = 0x60cdd;
        person_thing_already_peter_list_063670();
        g_hero_player_number = g_game_turn;
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_bss_002eb548 = g_bss_002eb548 + 1;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        uStack_58 = 0x60d24;
        creature_update_creature_control_082204();
        word_ptr = &local_54;
      }
      else {
        uStack_58 = 0x60cc1;
        structs_update_creature_control_072af4();
        word_ptr = &local_54;
      }
    }
    break;
  default:
    goto switchD_0005f95d_caseD_5;
  case 6:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0;
    magic_update_creature_and_thing_04e85c();
    word_ptr = &uStack_58;
    break;
  case 7:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x60e55;
    magic_update_slab_subtile_columns_04ee2c();
    word_ptr = &local_54;
    break;
  case 8:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61313;
    magic_process_thing_entity_04e66f();
    word_ptr = &local_54;
    break;
  case 9:
    local_28 = 1;
    uStack_58 = 0x61248;
    thing_ptr_2 = command_process_map_subtile_07868c();
    if (thing_ptr_2 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    }
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x6129f;
    magic_update_player_dungeon_04e585();
    word_ptr = &local_54;
    break;
  case 10:
    local_28 = 1;
    uStack_58 = 0x61398;
    thing_ptr_2 = command_process_map_subtile_07868c();
    if (thing_ptr_2 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    }
    if (((local_48[0xf] & 0x10) != 0) && ((&g_thing_ptrs)[*(ushort *)(local_24 + 0x35)] != 0)) {
      *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
      uStack_58 = 0x613ee;
      instance_fn_049eff();
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    flag_2 = local_24[0x4b0] == 6;
    goto LAB_0006140f;
  case 0xb:
    local_28 = 1;
    uStack_58 = 0x61453;
    thing_ptr_2 = command_process_map_subtile_07884b();
    if (thing_ptr_2 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    }
    if (((local_48[0xf] & 0x10) != 0) && (*(short *)(local_24 + 0x35) != 0)) {
      *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
      uStack_58 = 0x6149d;
      instance_fn_049eff();
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    flag_2 = local_24[0x4b0] == 5;
LAB_0006140f:
    word_ptr = &local_54;
    if (flag_2) goto switchD_0005f95d_caseD_5;
    uStack_58 = 0x61429;
    inits_update_player_view_state_04845c();
    word_ptr = &local_54;
    goto LAB_00061429;
  case 0xc:
  case 0xf:
    local_28 = 1;
    uStack_58 = 0x614e5;
    uval_2 = command_process_map_subtile_07868c();
    if (g_thing_ptrs < uval_2) {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    }
    else {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    if (((local_48[0xf] & 0x10) != 0) &&
       (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(local_24 + 0x35)])) {
      if (*(short *)(local_24 + 0x35) != *(short *)(local_24 + 0x2f)) {
        if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
          uStack_58 = 0x61551;
          newgui_fn_05aee2();
          uStack_58 = 0x6155b;
          packet_check_all_room_ traps_sync();
          uStack_58 = 0x61565;
          newgui_fn_05cf2d();
        }
        *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
        uStack_58 = 0x61585;
        instance_fn_049eff();
      }
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    word_ptr = &local_54;
    if (local_24[0x453] != 0xf) goto switchD_0005f95d_caseD_5;
    if ((local_48[0xf] & 0x20) == 0) {
      word_ptr = &local_54;
      if (*(short *)((&g_thing_ptrs)[*(ushort *)(local_24 + 0x2f)] + 0x5e) < 0) {
        uStack_58 = 0x61606;
        instance_fn_049eff();
        word_ptr = &local_54;
        if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
          uStack_58 = 0x61626;
          newgui_fn_05c82f();
          uStack_58 = 0x6162b;
          newgui_fn_05cf03();
          word_ptr = &local_54;
        }
      }
      goto switchD_0005f95d_caseD_5;
    }
    if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
      uStack_58 = 0x615c4;
      newgui_fn_05c82f();
      uStack_58 = 0x615c9;
      newgui_fn_05cf03();
    }
    uStack_58 = 0x615d8;
    instance_fn_049eff();
    word_ptr = &local_54;
    goto LAB_00061429;
  case 0xd:
    local_28 = 1;
    uStack_58 = 0x61652;
    thing_ptr_2 = command_process_map_subtile_07868c();
    if (thing_ptr_2 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    }
    if ((local_48[0xf] & 0x10) != 0) {
      if (*(short *)(local_24 + 0x2f) == 0) {
        uStack_58 = 0x616da;
        thing_ptr_2 = command_process_map_subtile_0785c4();
        if (thing_ptr_2 != 0) {
          *(undefined2 *)(local_24 + 0x2f) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
          uStack_58 = 0x616f7;
          person_initialise_state_but_thing_064b0c();
          if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x7a) & 0xfff) != 0) { /* thing->ccontrol_idx */
            uStack_58 = 0x61711;
            gravyard_fn_039d55();
          }
        }
      }
      else {
        thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(local_24 + 0x2f)];
        if ((local_48[0xf] & 0x80) != 0) {
          local_50 = *(undefined4 *)(local_48 + 10);
          uStack_58 = 0x616c1;
          move_update_creature_control_0b3b58();
          *(undefined1 *)(thing_ptr_2 + 8) = 0x7a; /* thing->active_state */
        }
      }
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    word_ptr = &local_54;
    if (*(short *)(local_24 + 0x2f) != 0) {
      uStack_58 = 0x61743;
      person_fn_063b6d();
      local_24[0x2f] = 0;
      local_24[0x30] = 0;
      word_ptr = &local_54;
    }
LAB_00061429:
    local_48[0xf] = local_48[0xf] & 0xdf;
    goto switchD_0005f95d_caseD_5;
  case 0xe:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    uStack_58 = 0x60b99;
    thing_ptr_2 = inits_told_you_so_create_043bb3();
    word_ptr = &local_54;
    if (thing_ptr_2 != 0) {
      uStack_58 = 0x60bab;
      local_4c[0] = move_process_map_subtile_0b28e8();
      uStack_58 = 0x60bb9;
      thing_ptr_2 = ceiling_process_map_subtile_07dbc0();
      if (thing_ptr_2 == 0) {
        *(undefined4 *)(extraout_ECX_06 + 0xd) = local_50;
        *(undefined2 *)(extraout_ECX_06 + 0x11 + (uint)thing_ptr * -8) = local_4c[(uint)thing_ptr * -4];
        uStack_58 = 0x60bdb;
        person_peter_list_06385d();
        uStack_58 = 0x60be2;
        person_thing_already_peter_list_063670();
        uStack_58 = 0x60be9;
        person_fn_063b6d();
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        uStack_58 = 0x60c1f;
        creature_update_creature_control_082204();
        word_ptr = &local_54;
      }
      else {
        uStack_58 = 0x60bc6;
        structs_update_creature_control_072af4();
        word_ptr = &local_54;
      }
    }
    break;
  case 0x10:
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_50 = CONCAT22((short)((ulonglong)(uint)((int)(uint)*(ushort *)(local_48 + 0xc) >> 8) / 3
                                 ) * 0x300 + 0x180,
                          (short)((ulonglong)(uint)((int)(uint)*(ushort *)(local_48 + 10) >> 8) / 3)
                          * 0x300 + 0x180);
      local_4c[0] = 0;
      local_24[0x4a4] = 1;
      uStack_58 = 0x608fb;
      ch = draw_update_slab_subtile_columns_08f75c();
      word_ptr = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        if ((&g_bss_002e1591)[(uint)local_24[0x4a5] + local_54 * 0x1508] != '\0') {
          if (ch == '\0') goto LAB_0006045d;
          uStack_58 = 0x60955;
          slab_process_map_subtile_0dae68();
          uStack_58 = 0x6096f;
          thing_ptr_2 = inits_allocate_dynamic_light_trap_0447fb();
          uStack_58 = 0x60979;
          uval = move_process_map_subtile_0b28e8();
          *(undefined1 *)(thing_ptr_2 + 0x18) = 0;
          *(undefined2 *)(thing_ptr_2 + 0x11) = uval;
          uStack_58 = 0x60998;
          thing_ptr_2 = workshop_item_class_077a5b();
          if (thing_ptr_2 != 0) {
            *(int *)(&g_bss_002e1800 + local_54 * 0x1508) =
                 *(int *)(&g_bss_002e1800 + local_54 * 0x1508) + 1;
          }
          *(undefined4 *)(&g_bss_002e142d + local_54 * 0x1508) = 0xc0;
          if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_54) goto LAB_00060467;
        }
        goto LAB_0006046c;
      }
    }
    goto LAB_00060a83;
  case 0x11:
    local_24[0x35] = 0;
    local_24[0x36] = 0;
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61221;
    magic_update_creature_and_thing_04f195();
    word_ptr = &local_54;
    break;
  case 0x12:
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      uStack_58 = 0x60a28;
      thing_ptr = draw_update_slab_subtile_columns_08f924();
      if ((local_48[0xf] & 1) != 0) {
        uStack_58 = 0x60a57;
        slab_process_map_subtile_0dae68();
        word_ptr_2 = &uStack_58;
        uStack_58 = (uint)thing_ptr;
        packet_activate_dungeon_special_or_spell();
      }
      local_48[0xf] = local_48[0xf] & 0xfe;
      word_ptr = word_ptr_2;
    }
    goto LAB_00060a83;
  case 0x13:
    local_28 = 1;
    uStack_58 = 0x60e7c;
    uval_2 = command_process_map_subtile_07868c();
    if (uval_2 <= g_thing_ptrs) {
LAB_00060eea:
      local_24[0x35] = 0;
      local_24[0x36] = 0;
      word_ptr = &local_54;
      goto switchD_0005f95d_caseD_5;
    }
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2 < 8) {
      thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    magic_fn_04f3bc();
    word_ptr = &uStack_58;
    break;
  case 0x14:
    local_28 = 1;
    uStack_58 = 0x60f1a;
    uval_2 = command_process_map_subtile_07868c();
    if (uval_2 <= g_thing_ptrs) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2 < 8) {
      thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    magic_fn_04f4f1();
    word_ptr = &uStack_58;
    break;
  case 0x15:
    local_28 = 1;
    uStack_58 = 0x60faa;
    uval_2 = command_process_map_subtile_07868c();
    if (uval_2 <= g_thing_ptrs) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2 < 8) {
      thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    magic_fn_04f552();
    word_ptr = &uStack_58;
    break;
  case 0x16:
    local_28 = 1;
    uStack_58 = 0x61137;
    uval_2 = command_process_map_subtile_07868c();
    if (uval_2 <= g_thing_ptrs) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2 < 8) {
      thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    magic_update_creature_control_04f5b3();
    word_ptr = &uStack_58;
    break;
  case 0x17:
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      thing_ptr_2 = (&g_subtile_to_slab_lut)[(byte)local_48[0xb]];
      val = thing_ptr_2 * 3;
      packet_off = (&g_subtile_to_slab_lut)[(byte)local_48[0xd]];
      val_2 = packet_off * 3;
      local_1c = (byte)(val / 3);
      local_20 = (byte)(val_2 / 3);
      local_50 = *(undefined4 *)(local_48 + 10);
      if (&g_players + g_my_player_word._3_1_ * 0x4ef == local_24) {
        uStack_58 = 0x6057a;
        ch = newgui_process_thing_entity_057f6b();
        if (ch == '\0') {
          local_44 = (uint)(byte)local_48[0xb];
          uStack_58 = 0x605a8;
          draw_update_slab_subtile_columns_08fb10();
        }
      }
      word_ptr = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        thing_ptr_2 = ((&g_subtile_to_slab_lut)[thing_ptr_2 * 3] + (&g_subtile_to_slab_lut)[packet_off * 3] * 0x55) * 6;
        if (((&g_slabmap)[thing_ptr_2] & 7) == local_54) {
          if ((((*(byte *)((int)&g_map_subtiles + (packet_off * 0x300 + val) * 5) & 2) == 0) ||
              ((&g_slabmap_base)[((uint)local_20 * 0x55 + (uint)local_1c) * 6] == '\x0e')) ||
             ((&g_slabmap_base)[((uint)local_20 * 0x55 + (uint)local_1c) * 6] == '\x1a')) {
            packet_off = local_54 * 0x1508;
            uStack_58 = 0x60714;
            thing_ptr_2 = door_process_map_subtile_022b3a();
            if (thing_ptr_2 == 0) {
              uStack_58 = 0x6076d;
              packet_off = trap_process_map_subtile_076789();
              thing_ptr_2 = extraout_ECX_03;
              if (packet_off != 0) {
                local_38 = val_2 + 1;
                local_40 = val + 1;
                thing_ptr_2 = 0;
                do {
                  uStack_58 = 0x607a7;
                  packet_off = trap_process_map_subtile_076753();
                  if (packet_off != 0) {
                    if (*(char *)(packet_off + 0x13) == '\0') {
                      uStack_58 = 0x607c9;
                      workshop_crate_workshop_ok_07795d();
                    }
                    local_2c = *(int *)(&g_bss_001ae8a4 + (uint)*(byte *)(packet_off + 0x1a) * 0x14);
                    if (local_2c != 0) {
                      uStack_58 = 0x607ee;
                      packet_off = inits_allocate_dynamic_light_shot_0444a9();
                      if (packet_off != 0) {
                        *(int *)(packet_off + 0x13) = local_2c;
                      }
                      *(int *)((int)&g_bss_002e1086 + extraout_ECX_04) =
                           *(int *)((int)&g_bss_002e1086 + extraout_ECX_04) + local_2c;
                      *(int *)((int)&g_bss_002e1082 + extraout_ECX_04) =
                           *(int *)((int)&g_bss_002e1082 + extraout_ECX_04) + local_2c;
                    }
                    uStack_58 = 0x6080e;
                    trap_fn_0767f1();
                  }
                  thing_ptr_2 = thing_ptr_2 + 2;
                } while (thing_ptr_2 != 0x12);
                if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_54) {
                  uStack_58 = 0x60836;
                  sound_non_emitter_has_been_06e9ab();
                }
                thing_ptr_2 = 0;
                *(undefined4 *)(&g_bss_002e142d + local_54 * 0x1508) = 0xc0;
              }
            }
            else {
              thing_ptr_2 = (int)g_my_player_word._3_1_;
              *(undefined4 *)(&g_bss_002e142d + packet_off) = 0xc0;
              if ((byte)(&g_player_id_number)[thing_ptr_2 * 0x4ef] == local_54) {
                uStack_58 = 0x60747;
                sound_non_emitter_has_been_06e9ab();
              }
              uStack_58 = 0x6075b;
              compturn_process_map_subtile_022660();
              thing_ptr_2 = extraout_ECX_02;
            }
          }
          else if ((uint)(byte)(&g_bss_002d33c8)[thing_ptr_2] * 0x45 == 0) {
            uStack_58 = 0x606ff;
            LbErrorLog(); /* LbErrorLog("packet.cpp", line 3358, "Cannot create good person") */
            thing_ptr_2 = extraout_ECX_01;
          }
          else {
            if ((int)(char)(&g_bss_002ddd1e)[(uint)(byte)(&g_bss_002d33c8)[thing_ptr_2] * 0x45] !=
                (uint)g_neutral_player_number) {
              *(short *)(&g_bss_002e105e +
                        (char)(&g_bss_002ddd1e)[(uint)(byte)(&g_bss_002d33c8)[thing_ptr_2] * 0x45] * 0x1508) =
                   *(short *)(&g_bss_002e105e +
                             (char)(&g_bss_002ddd1e)[(uint)(byte)(&g_bss_002d33c8)[thing_ptr_2] * 0x45] *
                             0x1508) + 1;
            }
            uStack_58 = 0x6067b;
            room_how_room_exist_slabs_0c8654();
            local_50 = CONCAT22((short)(val_2 / 3) * 0x300 + 0x180,
                                (short)(val / 3) * 0x300 + 0x180);
            *(undefined4 *)(&g_bss_002e142d + local_54 * 0x1508) = 0xc0;
            local_4c[0] = 0x180;
            thing_ptr_2 = extraout_ECX;
            if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_54) {
              uStack_58 = 0x606e6;
              sound_non_emitter_has_been_06e9ab();
              thing_ptr_2 = extraout_ECX_00;
            }
          }
          if (thing_ptr_2 != 0) {
            uStack_58 = 0x60862;
            thing_ptr_2 = inits_allocate_dynamic_light_shot_0444a9();
            if (thing_ptr_2 != 0) {
              *(int *)(thing_ptr_2 + 0x13) = extraout_ECX_05; /* thing->anim_sprite */
            }
            (&g_bss_002e1086)[local_54 * 0x542] = (&g_bss_002e1086)[local_54 * 0x542] + extraout_ECX_05;
            (&g_bss_002e1082)[local_54 * 0x542] = (&g_bss_002e1082)[local_54 * 0x542] + extraout_ECX_05;
          }
        }
        goto LAB_0006046c;
      }
    }
LAB_00060a83:
    if (((local_48[0xf] & 0x10) == 0) || (local_24[0x4af] == 0)) goto switchD_0005f95d_caseD_5;
    local_24[0x4af] = 0;
    break;
  case 0x18:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    uStack_58 = 0x60d6a;
    lair_process_thing_entity_04e1f2();
    word_ptr = &local_54;
    break;
  case 0x19:
    word_ptr = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (word_ptr = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61371;
    magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e();
    word_ptr = &local_54;
    break;
  case 0x1a:
    uStack_58 = 0x61037;
    uval_2 = command_process_map_subtile_07868c();
    if (uval_2 <= g_thing_ptrs) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2;
    if (7 < (int)uStack_58) {
      uStack_58 = 8;
    }
    magic_update_creature_control_04f87e();
    word_ptr = &uStack_58;
    break;
  case 0x1b:
    local_28 = 1;
    uStack_58 = 0x610b7;
    uval_2 = command_process_map_subtile_07868c();
    if (uval_2 <= g_thing_ptrs) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    word_ptr = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    thing_ptr_2 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + thing_ptr_2 * -4) - (uint)(thing_ptr_2 << 1 < 0)) >> 2;
    if (7 < (int)uStack_58) {
      uStack_58 = 8;
    }
    magic_update_player_view_state_04f41d();
    word_ptr = &uStack_58;
  }
  local_48[0xf] = local_48[0xf] & 0xef;
switchD_0005f95d_caseD_5:
  if (((*(short *)(local_24 + 0x35) == 0) && (*(short *)(local_48 + 10) != 0)) &&
     (*(short *)(local_48 + 0xc) == 0)) {
    *(undefined4 *)((int)word_ptr + -4) = 0x6049b;
    uval_2 = command_process_map_subtile_078768();
    if (g_thing_ptrs < uval_2) {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uval_2 + 0x1b);
    }
  }
  if ((((local_48[0xf] & 4) != 0) || ((local_48[0xf] & 8) != 0)) &&
     ((local_28 != 0 && ((local_24[0x455] == 0 || (local_24[0x455] == 3)))))) {
    *(undefined4 *)((int)word_ptr + -4) = 0x604f9;
    lair_update_creature_and_thing_04e3fa();
  }
  return;
}

/******************************************************************************
 * Function : clear_packet_for_player (Original VA: 0x61751, Ghidra: FUN_00061751)
 * Prototype: void clear_packet_for_player(void);
 * Address  : 0x61751 (Size: 120 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Zero out a player's 17-byte Packet slot for the upcoming turn
 * Callers  : 1 -> process_players_creature_passenger_packet
 * Callees  : 0 -> 
 ******************************************************************************/
void clear_packet_for_player(void)

{
  int player_idx;
  int player_off;
  int val;
  
  player_off = (uint)(byte)(&g_player_packet_slot)[player_idx * 0x4ef] * 0x11;
  val = player_idx * 4;
  *(undefined4 *)(&g_bss_0034d208 + val) = 0;
  if ((*(byte *)((int)&g_packet_control_flags + player_off + 1) & 0x40) == 0) {
    if ((*(byte *)((int)&g_packet_control_flags + player_off + 1) & 0x10) != 0) {
      if (*(int *)(&g_bss_0034d1f4 + val) < 5) {
        *(undefined4 *)(&g_bss_0034d208 + val) = 1;
      }
      *(undefined4 *)(&g_bss_0034d1f4 + player_idx * 4) = 0;
    }
    if ((((*(byte *)((int)&g_packet_control_flags + player_off + 1) & 4) == 0) &&
        ((*(byte *)((int)&g_packet_control_flags + player_off + 1) & 1) == 0)) &&
       (*(int *)(&g_bss_0034d1f4 + player_idx * 4) < 0x7fffffff)) {
      *(int *)(&g_bss_0034d1f4 + player_idx * 4) = *(int *)(&g_bss_0034d1f4 + player_idx * 4) + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : open_new_packet_file_for_save (Original VA: 0x617c9, Ghidra: FUN_000617c9)
 * Prototype: void open_new_packet_file_for_save(void);
 * Address  : 0x617c9 (Size: 186 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp lines 3880
 * Purpose  : Create and write header for new .PKT replay recording file
 * Callers  : 1 -> inits_update_player_dungeon_040832
 * Callees  : 6 -> cdtest_ldata_dkwind00_dat_0150f0, LbErrorLog, LbScreenWaitVbi, LbFileOpen, bflib_system_io_fn_0e8a8c, dk_strcpy
 ******************************************************************************/
void open_new_packet_file_for_save(void)

{
  char loop_i;
  
  LbScreenWaitVbi();
  for (loop_i = '\0'; loop_i < '\x05'; loop_i = loop_i + '\x01') {
  }
  dk_strcpy();
  cdtest_ldata_dkwind00_dat_0150f0();
  g_packet_file_handle = LbFileOpen();
  if (g_packet_file_handle != -1) {
    g_packet_record_mode = 1;
    bflib_system_io_fn_0e8a8c();
    return;
  }
  LbErrorLog(); /* LbErrorLog("packet.cpp", line 3880, "Cannot open keeper packet file for save") */
  return;
}

/******************************************************************************
 * Function : write_turn_packets_to_file (Original VA: 0x61883, Ghidra: FUN_00061883)
 * Prototype: void write_turn_packets_to_file(void);
 * Address  : 0x61883 (Size: 114 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Purpose  : Compute Thing checksum (compute_things_checksum) and write turn Packets to .PKT file
 * Callers  : 1 -> packet_exchange_all_players_packets
 * Callees  : 5 -> compute_things_checksum, LbFileWrite, bflib_system_io_fn_0e8a8c, LbFileClose, bflib_system_io_fn_0f43d5
 ******************************************************************************/
void write_turn_packets_to_file(void)

{
  if (g_packet_record_mode != '\0') {
    if (g_packet_checksum_verify_enabled != '\0') {
      compute_things_checksum();
    }
    LbFileWrite();
    LbFileClose();
    LbFileClose();
    bflib_system_io_fn_0e8a8c();
    bflib_system_io_fn_0f43d5();
  }
  return;
}

/******************************************************************************
 * Function : open_packet_file_for_load (Original VA: 0x618f5, Ghidra: FUN_000618f5)
 * Prototype: void open_packet_file_for_load(void);
 * Address  : 0x618f5 (Size: 201 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp lines 3941, 3956
 * Purpose  : Open existing .PKT replay file and validate header
 * Callers  : 2 -> packet_resync_network_game_state, packet_init_level_replay_or_resync
 * Callees  : 5 -> LbErrorLog, LbFileOpen, LbFileRead, LbMemoryCopy, bflib_system_io_fn_0e97a0
 ******************************************************************************/
void open_packet_file_for_load(void)

{
  int val;
  
  LbMemoryCopy();
  g_packet_file_handle = LbFileOpen();
  if (g_packet_file_handle == -1) {
    LbErrorLog(); /* LbErrorLog("packet.cpp", line 3941, "Cannot open keeper packet file for load") */
    return;
  }
  LbFileRead();
  g_bss_002e6fc9 = 0xf;
  val = bflib_system_io_fn_0e97a0();
  g_packet_file_total_turns = (val - 0xfU) / 0x48;
  if ((g_packet_checksum_verify_enabled != '\0') && (g_bss_002e6fdb == '\0')) {
    LbErrorLog(); /* LbErrorLog("packet.cpp", line 3956, "PacketSave checksum not available, disabling") */
    g_packet_checksum_verify_enabled = '\0';
  }
  if (g_bss_002e6fe6 == -1) {
    g_bss_002e6fea = g_packet_file_total_turns + 1;
    g_bss_002e6fe6 = 0;
  }
  g_packet_record_mode = 1;
  return;
}

/******************************************************************************
 * Function : load_turn_packets_from_file (Original VA: 0x619be, Ghidra: FUN_000619be)
 * Prototype: void load_turn_packets_from_file(void);
 * Address  : 0x619be (Size: 544 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp lines 3985, 4020, 4079
 * Purpose  : Seek and read per-turn Packet structures from open .PKT replay file
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 6 -> LbErrorLog, compute_things_checksum, dk_sprintf, LbFileWrite, LbFileRead, LbFileClose
 ******************************************************************************/
void load_turn_packets_from_file(void)

{
  char player_off;
  bool flag;
  int arg_eax;
  int loop_i;
  int extraout_ECX;
  int val;
  int local_20;
  
  player_off = (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11];
  if (arg_eax < g_packet_file_total_turns) {
    val = arg_eax * 0x48 + 0xf;
    if (val != g_bss_002e6fc9) {
      LbErrorLog(); /* LbErrorLog("packet.cpp", line 3985, "Packet Saving Seek Offset is wrong") */
      LbFileWrite();
      g_bss_002e6fc9 = val;
    }
    LbFileRead();
    g_bss_002e6fc9 = g_bss_002e6fc9 + 0x48;
    LbFileClose();
    LbFileClose();
    if ((g_game_operation_flags & 1) != 0) {
      flag = false;
      val = extraout_ECX * 0x48 + 0xf;
      while (!flag) {
        for (loop_i = 0; loop_i < 0x44; loop_i = loop_i + 0x11) {
          if (((&g_packet_action_type)[loop_i] != '\0') || (*(short *)((int)&g_packet_control_flags + loop_i) != 0)) {
            flag = true;
            break;
          }
        }
        if (!flag) {
          g_CompPlayer_turn = g_CompPlayer_turn + 1;
          val = val + 0x48;
          if (val != g_bss_002e6fc9) {
            LbErrorLog(); /* LbErrorLog("packet.cpp", line 4020, "Packet Saving Seek Offset is wrong") */
            LbFileWrite();
            g_bss_002e6fc9 = val;
          }
          LbFileRead();
          g_bss_002e6fc9 = g_bss_002e6fc9 + 0x48;
          LbFileClose();
          LbFileClose();
        }
      }
    }
    if (g_bss_002e6fe0 != 0) {
      g_bss_002e6fe0 = g_bss_002e6fe0 + -1;
    }
    if (g_packet_checksum_verify_enabled == '\0') {
      return;
    }
    val = compute_things_checksum();
    if (val == local_20) {
      if ((&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] == player_off)
      {
        return;
      }
      dk_sprintf(&g_log_sprintf_buf,s_Opps_we_are_really_Out_Of_Sync___001665c7,g_game_turn);
    }
    else {
      dk_sprintf(&g_log_sprintf_buf,s_PacketSave_checksum___Out_of_syn_0016658c,g_game_turn);
    }
  }
  LbErrorLog(); /* LbErrorLog("packet.cpp", line 4079, "Out of turns to load") */
  return;
}

/******************************************************************************
 * Function : packet_possess_thing_direct (Original VA: 0x61bde, Ghidra: FUN_00061bde)
 * Prototype: void packet_possess_thing_direct(void);
 * Address  : 0x61bde (Size: 197 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Directly attach player camera to possessed Thing
 * Callers  : 3 -> inits_update_player_view_state_04845c, process_players_dungeon_command_packet, creature_process_thing_entity_0847d4
 * Callees  : 5 -> inits_allocate_light_object_043f07, packet_handle_double_click_action, creature_fn_081eac, object_fn_0c57a4, LbScreenWaitVbi
 ******************************************************************************/
void packet_possess_thing_direct(void)

{
  byte arg_al;
  uint uval;
  int player_off;
  
  LbScreenWaitVbi();
  uval = inits_allocate_light_object_043f07();
  if (g_thing_ptrs < uval) {
    player_off = (uint)arg_al * 0x4ef;
    *(undefined2 *)(&g_player_controlled_thing_idx + player_off) = *(undefined2 *)(uval + 0x1b);
    *(undefined4 *)(&g_bss_0019d0d4 + player_off) = 0;
    if ((g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + (uint)arg_al * 0x1508)]) &&
       (*(char *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e05bc + (uint)arg_al * 0x1508)] + 0x1f) ==
        '\x01')) {
      object_fn_0c57a4();
    }
    packet_handle_double_click_action();
    creature_fn_081eac();
  }
  return;
}

/******************************************************************************
 * Function : packet_handle_double_click_action (Original VA: 0x61ca3, Ghidra: FUN_00061ca3)
 * Prototype: void packet_handle_double_click_action(void);
 * Address  : 0x61ca3 (Size: 160 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Process double-click packet action within turn threshold
 * Callers  : 11 -> inits_update_player_view_state_04845c, instance_process_thing_entity_04ab5f, instance_update_creature_and_thing_04ac70, instance_process_thing_entity_04ae00, instance_process_thing_entity_04aea9, instance_process_thing_entity_04af0a, instance_process_thing_entity_04b1c6, instance_process_thing_entity_04b1f4 ...
 * Callees  : 2 -> magic_update_creature_control_04fbd8, draw_roll_action_random_08ccec
 ******************************************************************************/
void packet_handle_double_click_action(void)

{
  int player_idx;
  int arg_edx;
  int player_off;
  undefined4 uval;
  
  player_off = player_idx * 0x4ef;
  if ((g_game_turn <= *(uint *)(&g_player_double_click_turn + player_off)) && ((arg_edx == 0x312 || (arg_edx == 0x313)))
     ) {
    *(undefined4 *)(&g_player_double_click_turn + player_off) = 0;
  }
  if ((*(uint *)(&g_player_double_click_turn + player_off) < g_game_turn) &&
     (arg_edx != *(int *)(&g_bss_0019d0d4 + player_off))) {
    *(int *)(&g_bss_0019d0d4 + player_off) = arg_edx;
    if ((arg_edx == 0x30e) || (arg_edx == 0x30d)) {
      uval = 0;
    }
    else {
      uval = 1;
    }
    draw_roll_action_random_08ccec(uval,0,2);
    magic_update_creature_control_04fbd8();
  }
  return;
}

/******************************************************************************
 * Function : packet_activate_dungeon_special_or_spell (Original VA: 0x61d43, Ghidra: FUN_00061d43)
 * Prototype: undefined4 packet_activate_dungeon_special_or_spell(char param_1);
 * Address  : 0x61d43 (Size: 323 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Trigger dungeon special box or spell from packet command
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 7 -> door_process_slabmap_tile_022e62, inits_told_you_so_create_0449a4, packet_tag_slab_for_digging, sound_non_emitter_has_been_06e9ab, workshop_crate_workshop_ok_07795d, workshop_item_class_077a5b, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
undefined4 packet_activate_dungeon_special_or_spell(char param_1)

{
  int val;
  int arg_ecx;
  uint arg_ebx;
  int dungeon_off;
  
  dungeon_off = arg_ebx * 0x1508;
  if ((&g_bss_002e15a6)[arg_ecx + dungeon_off] != '\0') {
    if (param_1 != '\0') {
      door_process_slabmap_tile_022e62();
      inits_told_you_so_create_0449a4(0);
      slab_process_slabmap_tile_0da6fc();
      val = workshop_item_class_077a5b();
      if (val != 0) {
        workshop_crate_workshop_ok_07795d();
        *(int *)(&g_bss_002e1808 + dungeon_off) = *(int *)(&g_bss_002e1808 + dungeon_off) + 1;
      }
      val = (int)g_my_player_word._3_1_;
      *(undefined4 *)(&g_bss_002e142d + dungeon_off) = 0xc0;
      if ((byte)(&g_player_id_number)[val * 0x4ef] == arg_ebx) {
        sound_non_emitter_has_been_06e9ab();
      }
      packet_tag_slab_for_digging();
      return 1;
    }
    if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == arg_ebx) {
      sound_non_emitter_has_been_06e9ab();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : packet_tag_slab_for_digging (Original VA: 0x61e86, Ghidra: FUN_00061e86)
 * Prototype: void packet_tag_slab_for_digging(void);
 * Address  : 0x61e86 (Size: 149 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Purpose  : Tag or untag a 3x3 subtile slab area for imp digging
 * Callers  : 1 -> packet_activate_dungeon_special_or_spell
 * Callees  : 1 -> structs_update_creature_control_072af4
 ******************************************************************************/
void packet_tag_slab_for_digging(void)

{
  char *str_ptr;
  uint thing_ptr;
  int arg_eax;
  uint thing_ptr_2;
  int loop_i;
  int extraout_ECX;
  int arg_edx;
  int val;
  int thing_ptr_3;
  
  for (loop_i = arg_edx * 0xf00 + arg_eax * 0xf; loop_i < arg_eax * 0xf + (arg_edx * 3 + 3) * 0x500;
      loop_i = loop_i + 0x500) {
    val = (int)&g_map_subtiles + loop_i;
    for (thing_ptr_3 = arg_eax * 3; thing_ptr_3 < arg_eax * 3 + 3; thing_ptr_3 = thing_ptr_3 + 1) {
      thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)(val + 1) & 0x3fffff) >> 0xb];
      while (g_thing_ptrs < thing_ptr_2) {
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
        str_ptr = (char *)(thing_ptr_2 + 0x1f); /* thing->class_id */
        thing_ptr_2 = thing_ptr;
        if (*str_ptr == '\x04') {
          structs_update_creature_control_072af4();
          loop_i = extraout_ECX;
        }
      }
      val = val + 5;
    }
  }
  return;
}

/******************************************************************************
 * Function : packet_has_selectable_things_at_subtile (Original VA: 0x61f1b, Ghidra: FUN_00061f1b)
 * Prototype: bool packet_has_selectable_things_at_subtile(void);
 * Address  : 0x61f1b (Size: 92 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Purpose  : Check if subtile contains Things selectable by player hand
 * Callers  : 1 -> packet_update_pause_mode_state
 * Callees  : 0 -> 
 ******************************************************************************/
bool packet_has_selectable_things_at_subtile(void)

{
  int arg_eax;
  int val;
  int *arg_edx;
  int val_2;
  int val_3;
  
  if (*(char *)(arg_eax + 0x29) == '\x02') {
    return false;
  }
  val_2 = 0;
  val_3 = 0;
  val = 0;
  do {
    if (((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) &&
       (val_2 = val_2 + 1, (&g_bss_0019d0f1)[val] == '\x02')) {
      val_3 = val_3 + 1;
    }
    val = val + 0x4ef;
  } while (val != 0x18ab);
  *arg_edx = val_2;
  return val_2 == val_3 + 1;
}

/******************************************************************************
 * Function : packet_update_pause_mode_state (Original VA: 0x61f77, Ghidra: FUN_00061f77)
 * Prototype: void packet_update_pause_mode_state(void);
 * Address  : 0x61f77 (Size: 367 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Purpose  : Synchronize pause state across singleplayer/multiplayer packet flags
 * Callers  : 0 -> 
 * Callees  : 4 -> compturn_update_player_dungeon_021527, frontnet_fn_032f5c, packet_has_selectable_things_at_subtile, LbNetwork_Stop_0edc70
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0006200e) */

void packet_update_pause_mode_state(void)

{
  byte *arg_eax;
  int val;
  int val_2;
  byte *player_off;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int arg_edx;
  
  if ((g_game_system_flags & 1) == 0) {
    *arg_eax = *arg_eax & 0xfe;
    player_off = &g_players + g_my_player_word._3_1_ * 0x4ef;
  }
  else {
    val = packet_has_selectable_things_at_subtile();
    if (val != 0) {
      val_2 = 0;
      do {
        if (((((&g_players)[val_2] & 1) != 0) && ((&g_bss_0019d0f4)[val_2] == '\x01')) &&
           ((&g_bss_0019d0f1)[val_2] == '\0')) {
          (&g_bss_0019d0f1)[val_2] = 1;
        }
        val_2 = val_2 + 0x4ef;
      } while (val_2 != 0x18ab);
    }
    if (((arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) ||
        (val_2 = frontnet_fn_032f5c(), val_2 != 0)) || (val != 0)) {
      LbNetwork_Stop_0edc70();
      g_bss_0019a2a0 = 1;
      if (extraout_ECX_00 != 0) {
        g_bss_0019a2a1 = 1;
      }
      *arg_eax = *arg_eax & 0xfe;
      val = frontnet_fn_032f5c();
      if (val == 0) {
        return;
      }
      val = 0;
      do {
        if (((&g_players)[val] & 1) != 0) {
          (&g_players)[val] = (&g_players)[val] & 0xfe;
          (&g_player_state_base)[val] = (&g_player_state_base)[val] | 2;
        }
        val = val + 0x4ef;
      } while (val != 0x18ab);
      return;
    }
    if (arg_eax[0x29] == 0) {
      *arg_eax = *arg_eax | 0x40;
      compturn_update_player_dungeon_021527();
      arg_edx = extraout_ECX_01;
    }
    else {
      *arg_eax = *arg_eax & 0xfe;
      arg_edx = extraout_ECX;
    }
    player_off = &g_players + g_my_player_word._3_1_ * 0x4ef;
  }
  if ((arg_eax == player_off) && (g_bss_0019a2a0 = 1, arg_edx != 0)) {
    g_bss_0019a2a0 = 1;
    g_bss_0019a2a1 = 1;
  }
  return;
}

/******************************************************************************
 * Function : packet_compute_full_dungeon_checksum (Original VA: 0x620e6, Ghidra: FUN_000620e6)
 * Prototype: void packet_compute_full_dungeon_checksum(void);
 * Address  : 0x620e6 (Size: 338 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute deterministic checksum over Dungeon and SlabMap state
 * Callers  : 0 -> 
 * Callees  : 4 -> panmap_update_player_view_state_0627b5, bflib_system_io_bf110_set_redbook_volume_0ecf70, bflib_system_io_fn_0f3264, bflib_system_io_fn_0f32ae
 ******************************************************************************/
void packet_compute_full_dungeon_checksum(void)

{
  char ch;
  bool flag;
  byte flag_2;
  byte arg_al;
  int val;
  char arg_dl;
  
  flag_2 = g_game_operation_flags;
  flag = true;
  val = 0;
  do {
    if (0x18aa < val) {
LAB_0006214c:
      if (flag) {
        g_game_operation_flags = g_game_operation_flags & 0xfe;
        if ((arg_al & 1) != 0) {
          g_game_operation_flags = flag_2 & 0x7e | arg_al & 1;
          g_game_operation_flags = g_game_operation_flags | arg_dl << 7;
        }
        if (g_bss_00334019 == 0) {
          if ((g_game_operation_flags & 1) == 0) {
            bflib_system_io_fn_0f32ae();
            bflib_system_io_bf110_set_redbook_volume_0ecf70();
          }
          else {
            bflib_system_io_fn_0f32ae();
            bflib_system_io_bf110_set_redbook_volume_0ecf70();
          }
          bflib_system_io_fn_0f3264();
        }
        if (((g_game_operation_flags & 1) != 0) && (((&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] & 8) != 0)) {
          panmap_update_player_view_state_0627b5();
          (&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] =
               (&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] & 0xf7;
        }
      }
      return;
    }
    if ((((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) &&
        (((&g_players)[val] & 0x40) == 0)) &&
       (((((ch = (&g_bss_0019d578)[val], ch == '\x0e' || (ch == '\x0f')) ||
          ((ch == '\r' || ((ch == '\x05' || (ch == '\x06')))))) || (ch == '\a')) ||
        (ch == '\b')))) {
      flag = false;
      goto LAB_0006214c;
    }
    val = val + 0x4ef;
  } while( true );
}

/******************************************************************************
 * Function : packet_backup_catalogue_settings (Original VA: 0x62238, Ghidra: FUN_00062238)
 * Prototype: void packet_backup_catalogue_settings(void);
 * Address  : 0x62238 (Size: 185 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Save current level/campaign catalogue settings before packet replay
 * Callers  : 1 -> packet_build_local_player_turn_packet
 * Callees  : 0 -> 
 ******************************************************************************/
void packet_backup_catalogue_settings(void)

{
  g_bss_0034d21c = g_bss_002ee8a2;
  g_bss_0034d21d = g_bss_002ee8a3;
  g_bss_0034d21e = g_bss_002ee8a4;
  g_bss_0034d21f = g_bss_002ee8a5;
  g_bss_0034d220 = g_bss_002ee8a6;
  g_bss_0034d221 = g_bss_002ee8a7;
  g_bss_0034d222 = g_bss_002ee8a8;
  g_bss_0034d223 = g_bss_002ee8a9;
  g_bss_0034d225 = g_bss_002ee8ab;
  g_bss_0034d227 = g_bss_002ee8ad;
  g_bss_0034d22b = g_bss_002ee8b1;
  g_bss_0034d22f = g_bss_002ee8b5;
  g_bss_0034d233 = g_bss_002ee8b9;
  g_bss_0034d237 = g_bss_002ee8bd;
  g_bss_0034d23b = g_bss_002ee8c1;
  g_bss_0034d23f = g_bss_002ee8c5;
  g_bss_0034d243 = g_bss_002ee8c9;
  g_bss_0034d247 = g_bss_002ee8cd;
  return;
}

/******************************************************************************
 * Function : packet_restore_catalogue_settings (Original VA: 0x622f1, Ghidra: FUN_000622f1)
 * Prototype: void packet_restore_catalogue_settings(void);
 * Address  : 0x622f1 (Size: 185 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Restore level/campaign catalogue settings after packet replay
 * Callers  : 1 -> packet_build_local_player_turn_packet
 * Callees  : 0 -> 
 ******************************************************************************/
void packet_restore_catalogue_settings(void)

{
  g_bss_002ee8a2 = g_bss_0034d21c;
  g_bss_002ee8a3 = g_bss_0034d21d;
  g_bss_002ee8a4 = g_bss_0034d21e;
  g_bss_002ee8a5 = g_bss_0034d21f;
  g_bss_002ee8a6 = g_bss_0034d220;
  g_bss_002ee8a7 = g_bss_0034d221;
  g_bss_002ee8a8 = g_bss_0034d222;
  g_bss_002ee8a9 = g_bss_0034d223;
  g_bss_002ee8ab = g_bss_0034d225;
  g_bss_002ee8ad = g_bss_0034d227;
  g_bss_002ee8b1 = g_bss_0034d22b;
  g_bss_002ee8b5 = g_bss_0034d22f;
  g_bss_002ee8b9 = g_bss_0034d233;
  g_bss_002ee8bd = g_bss_0034d237;
  g_bss_002ee8c1 = g_bss_0034d23b;
  g_bss_002ee8c5 = g_bss_0034d23f;
  g_bss_002ee8c9 = g_bss_0034d243;
  g_bss_002ee8cd = g_bss_0034d247;
  return;
}

/******************************************************************************
 * Function : packet_draw_debug_cursor_overlay (Original VA: 0x623aa, Ghidra: FUN_000623aa)
 * Prototype: void packet_draw_debug_cursor_overlay(void);
 * Address  : 0x623aa (Size: 408 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Lock screen and draw multiplayer/packet cursor overlay
 * Callers  : 2 -> packet_build_local_player_turn_packet, packet_exchange_all_players_packets
 * Callees  : 6 -> newgui_fn_0595ab, LbTextDraw, LbTextDrawFormatted, LbScreenLock, bflib_system_io_fn_0e79fc, bflib_system_io_fn_0f0870
 ******************************************************************************/
void packet_draw_debug_cursor_overlay(void)

{
  int screen_res;
  uint uval;
  uint uval_2;
  int extraout_ECX;
  int arg_edx;
  int arg_ebx;
  undefined4 uval_3;
  undefined4 uval_4;
  
  screen_res = LbScreenLock();
  if (screen_res == 1) {
    uval = (uint)g_mouse_cursor_y;
    uval_2 = (uint)g_mouse_cursor_x;
    newgui_fn_0595ab();
    g_lb_current_font_ptr = g_frontend_font_ptr;
    g_lb_display_draw_flags = 0x100;
    LbTextDraw();
    uval_3 = 100;
    uval_4 = g_bss_00333f2f;
    LbTextDrawFormatted();
    bflib_system_io_fn_0f0870(0,(arg_ebx + (int)((uval - arg_ebx) + -200) / 2 + 100) - arg_edx,arg_edx * 2,
                 (arg_edx * 2) / (int)(uint)g_units_per_pixel,
                 ((int)(uval_2 - 100) / 2 + extraout_ECX + 8) / (int)(uint)g_units_per_pixel,uval_3,uval_4);
    bflib_system_io_fn_0f0870(0x85);
    LbScreenLock();
    bflib_system_io_fn_0e79fc();
  }
  return;
}

