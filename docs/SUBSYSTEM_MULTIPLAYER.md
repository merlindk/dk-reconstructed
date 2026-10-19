# Multiplayer & Lockstep Networking Subsystem Analysis

This document details all reverse-engineered functions, strings, and protocols governing *Dungeon Keeper*'s multiplayer lobby, session management, and deterministic lockstep packet synchronization.

## 1. Key Modules
- [`src/frontnet.cpp`](../src/frontnet.cpp) — Network service selection (IPX, Modem, Serial), session enumeration, player join/leave lobby, and modem dialing initialization.
- [`src/packet.cpp`](../src/packet.cpp) — Per-turn `Packet` recording, `LbNetwork_Exchange` turn synchronization, deterministic checksum verification (`PacketSave checksum`), packet replay recording/playback, and full-state resynchronization (`resync`) when a peer falls out of sync.
- [`src/bflib/bflib_network.cpp`](../src/bflib/bflib_network.cpp) — Bullfrog Library (`LbNetwork_*`) hardware abstraction layer.

## 2. Function Table for Networking Modules

| Module | Address | Inferred Name | Callers | Callees | Naming Evidence |
| :--- | :--- | :--- | :--- | :--- | :--- |
| `frontnet.cpp` | `0x32f12` | `frontnet_fn_032f12` | `1` | `0` | Module frontnet.cpp procedure @ 0x032f12 |
| `frontnet.cpp` | `0x32f5c` | `frontnet_fn_032f5c` | `2` | `0` | Module frontnet.cpp procedure @ 0x032f5c |
| `frontnet.cpp` | `0x32f6a` | `frontnet_fn_032f6a` | `1` | `0` | Module frontnet.cpp procedure @ 0x032f6a |
| `frontnet.cpp` | `0x32f9b` | `frontnet_levelnamefile_add_blank_line_032f9b` | `2` | `2` | String 'LevelNameFile, Add a blank line at the end' |
| `frontnet.cpp` | `0x3308c` | `frontnet_fn_03308c` | `4` | `0` | Module frontnet.cpp procedure @ 0x03308c |
| `frontnet.cpp` | `0x330ae` | `frontnet_fn_0330ae` | `1` | `1` | Module frontnet.cpp procedure @ 0x0330ae |
| `frontnet.cpp` | `0x330e0` | `frontnet_fn_0330e0` | `0` | `1` | Module frontnet.cpp procedure @ 0x0330e0 |
| `frontnet.cpp` | `0x33156` | `frontnet_fn_033156` | `5` | `0` | Module frontnet.cpp procedure @ 0x033156 |
| `frontnet.cpp` | `0x3315b` | `frontnet_fn_03315b` | `2` | `5` | Module frontnet.cpp procedure @ 0x03315b |
| `frontnet.cpp` | `0x33223` | `frontnet_fn_033223` | `0` | `0` | Module frontnet.cpp procedure @ 0x033223 |
| `frontnet.cpp` | `0x3325d` | `frontnet_fn_03325d` | `3` | `1` | Module frontnet.cpp procedure @ 0x03325d |
| `frontnet.cpp` | `0x33350` | `frontnet_fn_033350` | `0` | `1` | Module frontnet.cpp procedure @ 0x033350 |
| `frontnet.cpp` | `0x33563` | `frontnet_button_type_033563` | `0` | `2` | String 'Unknown button type' |
| `frontnet.cpp` | `0x3378f` | `frontnet_draw_text_overlay_03378f` | `2` | `3` | Configures font/flags and draws text on screen |
| `frontnet.cpp` | `0x33828` | `frontnet_draw_text_overlay_033828` | `2` | `3` | Configures font/flags and draws text on screen |
| `frontnet.cpp` | `0x338fd` | `frontnet_fn_0338fd` | `0` | `1` | Module frontnet.cpp procedure @ 0x0338fd |
| `frontnet.cpp` | `0x33917` | `frontnet_fn_033917` | `0` | `0` | Module frontnet.cpp procedure @ 0x033917 |
| `frontnet.cpp` | `0x33928` | `frontnet_fn_033928` | `0` | `0` | Module frontnet.cpp procedure @ 0x033928 |
| `frontnet.cpp` | `0x33939` | `frontnet_fn_033939` | `0` | `0` | Module frontnet.cpp procedure @ 0x033939 |
| `frontnet.cpp` | `0x3394a` | `frontnet_fn_03394a` | `0` | `0` | Module frontnet.cpp procedure @ 0x03394a |
| `frontnet.cpp` | `0x3395b` | `frontnet_fn_03395b` | `0` | `0` | Module frontnet.cpp procedure @ 0x03395b |
| `frontnet.cpp` | `0x3396c` | `frontnet_fn_03396c` | `0` | `1` | Module frontnet.cpp procedure @ 0x03396c |
| `frontnet.cpp` | `0x339df` | `frontnet_fn_0339df` | `0` | `1` | Module frontnet.cpp procedure @ 0x0339df |
| `frontnet.cpp` | `0x33a44` | `frontnet_fn_033a44` | `0` | `1` | Module frontnet.cpp procedure @ 0x033a44 |
| `frontnet.cpp` | `0x33ac7` | `frontnet_fn_033ac7` | `0` | `1` | Module frontnet.cpp procedure @ 0x033ac7 |
| `frontnet.cpp` | `0x33b5c` | `frontnet_fn_033b5c` | `0` | `1` | Module frontnet.cpp procedure @ 0x033b5c |
| `frontnet.cpp` | `0x33bcc` | `frontnet_LbNetwork_Stop_033bcc` | `0` | `3` | References 'LbNetwork_Stop() failed' |
| `frontnet.cpp` | `0x33bfb` | `frontnet_LbNetwork_Stop_033bfb` | `0` | `4` | References 'LbNetwork_Stop() failed' |
| `frontnet.cpp` | `0x33c3a` | `frontnet_fn_033c3a` | `0` | `2` | Module frontnet.cpp procedure @ 0x033c3a |
| `frontnet.cpp` | `0x33c7d` | `frontnet_fn_033c7d` | `0` | `1` | Module frontnet.cpp procedure @ 0x033c7d |
| `frontnet.cpp` | `0x33d87` | `frontnet_fn_033d87` | `0` | `1` | Module frontnet.cpp procedure @ 0x033d87 |
| `frontnet.cpp` | `0x33ead` | `frontnet_LbNetwork_EnumerateServices_033ead` | `1` | `6` | References 'LbNetwork_EnumerateServices() failed' |
| `frontnet.cpp` | `0x33f26` | `frontnet_fn_033f26` | `1` | `0` | Module frontnet.cpp procedure @ 0x033f26 |
| `frontnet.cpp` | `0x33f57` | `frontnet_draw_gui_button_label_033f57` | `0` | `2` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x33fdf` | `frontnet_maintain_service_scroll_btn_033fdf` | `0` | `0` | Updates GUI button enabled flag from service scroll offset |
| `frontnet.cpp` | `0x33ff7` | `frontnet_maintain_service_scroll_btn_033ff7` | `0` | `0` | Updates GUI button enabled flag from service scroll offset |
| `frontnet.cpp` | `0x34004` | `frontnet_maintain_service_scroll_btn_034004` | `0` | `0` | Updates GUI button enabled flag from service scroll offset |
| `frontnet.cpp` | `0x34022` | `frontnet_fn_034022` | `0` | `1` | Module frontnet.cpp procedure @ 0x034022 |
| `frontnet.cpp` | `0x34070` | `frontnet_fn_034070` | `1` | `1` | Module frontnet.cpp procedure @ 0x034070 |
| `frontnet.cpp` | `0x34077` | `frontnet_scroll_service_list_up_034077` | `0` | `0` | Decrements network service list scroll offset |
| `frontnet.cpp` | `0x34087` | `frontnet_scroll_service_list_down_034087` | `0` | `0` | Increments network service list scroll offset |
| `frontnet.cpp` | `0x3409c` | `frontnet_fn_03409c` | `1` | `3` | Module frontnet.cpp procedure @ 0x03409c |
| `frontnet.cpp` | `0x34105` | `frontnet_fn_034105` | `1` | `0` | Module frontnet.cpp procedure @ 0x034105 |
| `frontnet.cpp` | `0x34186` | `frontnet_scroll_com_port_up_034186` | `0` | `0` | Decrements COM port scroll offset |
| `frontnet.cpp` | `0x34196` | `frontnet_scroll_com_port_down_034196` | `0` | `0` | Increments COM port scroll offset |
| `frontnet.cpp` | `0x341ab` | `frontnet_fn_0341ab` | `0` | `0` | Module frontnet.cpp procedure @ 0x0341ab |
| `frontnet.cpp` | `0x341bb` | `frontnet_fn_0341bb` | `0` | `0` | Module frontnet.cpp procedure @ 0x0341bb |
| `frontnet.cpp` | `0x341d0` | `frontnet_maintain_gui_button_state_0341d0` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x341dd` | `frontnet_maintain_gui_button_state_0341dd` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x341f0` | `frontnet_maintain_gui_button_state_0341f0` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x34208` | `frontnet_fn_034208` | `0` | `1` | Module frontnet.cpp procedure @ 0x034208 |
| `frontnet.cpp` | `0x34241` | `frontnet_maintain_gui_button_state_034241` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x3424e` | `frontnet_maintain_gui_button_state_03424e` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x34261` | `frontnet_maintain_gui_button_state_034261` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x34279` | `frontnet_fn_034279` | `0` | `0` | Module frontnet.cpp procedure @ 0x034279 |
| `frontnet.cpp` | `0x34298` | `frontnet_draw_gui_button_label_034298` | `0` | `2` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x3431e` | `frontnet_draw_gui_button_label_03431e` | `0` | `2` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x343a4` | `frontnet_fn_0343a4` | `0` | `1` | Module frontnet.cpp procedure @ 0x0343a4 |
| `frontnet.cpp` | `0x343d7` | `frontnet_fn_0343d7` | `0` | `1` | Module frontnet.cpp procedure @ 0x0343d7 |
| `frontnet.cpp` | `0x3440a` | `frontnet_maintain_gui_button_state_03440a` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x3442b` | `frontnet_isdn_supported_serial_03442b` | `0` | `4` | String 'ISDN not supported by Serial' |
| `frontnet.cpp` | `0x344c8` | `frontnet_fn_0344c8` | `1` | `3` | Module frontnet.cpp procedure @ 0x0344c8 |
| `frontnet.cpp` | `0x3457c` | `frontnet_fn_03457c` | `1` | `0` | Module frontnet.cpp procedure @ 0x03457c |
| `frontnet.cpp` | `0x345fd` | `frontnet_fn_0345fd` | `0` | `3` | Module frontnet.cpp procedure @ 0x0345fd |
| `frontnet.cpp` | `0x3468f` | `frontnet_fn_03468f` | `1` | `1` | Module frontnet.cpp procedure @ 0x03468f |
| `frontnet.cpp` | `0x346de` | `frontnet_LbNetwork_EnumerateSessions_0346de` | `1` | `4` | References 'LbNetwork_EnumerateSessions() failed' |
| `frontnet.cpp` | `0x3488f` | `frontnet_draw_gui_button_label_03488f` | `0` | `2` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x34918` | `frontnet_fn_034918` | `0` | `0` | Module frontnet.cpp procedure @ 0x034918 |
| `frontnet.cpp` | `0x34941` | `frontnet_maintain_session_scroll_btn_034941` | `0` | `0` | Updates GUI button enabled flag from session scroll offset |
| `frontnet.cpp` | `0x34959` | `frontnet_maintain_session_scroll_btn_034959` | `0` | `0` | Updates GUI button enabled flag from session scroll offset |
| `frontnet.cpp` | `0x34966` | `frontnet_maintain_session_scroll_btn_034966` | `0` | `0` | Updates GUI button enabled flag from session scroll offset |
| `frontnet.cpp` | `0x34979` | `frontnet_scroll_session_list_up_034979` | `0` | `0` | Decrements network session list scroll offset |
| `frontnet.cpp` | `0x34989` | `frontnet_scroll_session_list_down_034989` | `0` | `0` | Increments network session list scroll offset |
| `frontnet.cpp` | `0x3499e` | `frontnet_maintain_gui_button_state_03499e` | `0` | `0` | Updates GUI button enabled bit (0x08) |
| `frontnet.cpp` | `0x349d9` | `frontnet_fn_0349d9` | `0` | `6` | Module frontnet.cpp procedure @ 0x0349d9 |
| `frontnet.cpp` | `0x34a8a` | `frontnet_fn_034a8a` | `0` | `7` | Module frontnet.cpp procedure @ 0x034a8a |
| `frontnet.cpp` | `0x34bb6` | `frontnet_copy_state_struct_034bb6` | `0` | `2` | Copies fixed-size state structure via LbMemoryCopy |
| `frontnet.cpp` | `0x34bdc` | `frontnet_fn_034bdc` | `0` | `1` | Module frontnet.cpp procedure @ 0x034bdc |
| `frontnet.cpp` | `0x34bff` | `frontnet_copy_state_struct_034bff` | `0` | `0` | Copies fixed-size state structure via LbMemoryCopy |
| `frontnet.cpp` | `0x34c0f` | `frontnet_copy_state_struct_034c0f` | `0` | `0` | Copies fixed-size state structure via LbMemoryCopy |
| `frontnet.cpp` | `0x34c1f` | `frontnet_copy_state_struct_034c1f` | `0` | `0` | Copies fixed-size state structure via LbMemoryCopy |
| `frontnet.cpp` | `0x34c2f` | `frontnet_copy_state_struct_034c2f` | `0` | `0` | Copies fixed-size state structure via LbMemoryCopy |
| `frontnet.cpp` | `0x34c3f` | `frontnet_copy_state_struct_034c3f` | `0` | `0` | Copies fixed-size state structure via LbMemoryCopy |
| `frontnet.cpp` | `0x34c4f` | `frontnet_draw_gui_button_label_034c4f` | `0` | `3` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x34d86` | `frontnet_draw_gui_button_label_034d86` | `0` | `3` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x34ea2` | `frontnet_fn_034ea2` | `0` | `1` | Module frontnet.cpp procedure @ 0x034ea2 |
| `frontnet.cpp` | `0x34ed8` | `frontnet_fn_034ed8` | `1` | `0` | Module frontnet.cpp procedure @ 0x034ed8 |
| `frontnet.cpp` | `0x34f38` | `frontnet_LbNetwork_EnumeratePlayers_034f38` | `1` | `5` | References 'LbNetwork_EnumeratePlayers() failed' |
| `frontnet.cpp` | `0x35037` | `frontnet_fn_035037` | `1` | `1` | Module frontnet.cpp procedure @ 0x035037 |
| `frontnet.cpp` | `0x350a0` | `frontnet_maintain_player_list_btn_0350a0` | `0` | `0` | Updates GUI button enabled flag from lobby player count/scroll |
| `frontnet.cpp` | `0x350ad` | `frontnet_scroll_player_list_up_0350ad` | `0` | `0` | Decrements lobby player list scroll offset |
| `frontnet.cpp` | `0x350bd` | `frontnet_scroll_player_list_down_0350bd` | `0` | `0` | Increments lobby player list scroll offset |
| `frontnet.cpp` | `0x350d2` | `frontnet_maintain_player_list_btn_0350d2` | `0` | `0` | Updates GUI button enabled flag from lobby player count/scroll |
| `frontnet.cpp` | `0x350df` | `frontnet_maintain_player_list_btn_0350df` | `0` | `0` | Updates GUI button enabled flag from lobby player count/scroll |
| `frontnet.cpp` | `0x350f2` | `frontnet_scroll_chat_list_up_0350f2` | `0` | `0` | Decrements lobby chat scroll offset |
| `frontnet.cpp` | `0x35102` | `frontnet_scroll_chat_list_down_035102` | `0` | `0` | Increments lobby chat scroll offset |
| `frontnet.cpp` | `0x35117` | `frontnet_maintain_chat_scroll_btn_035117` | `0` | `0` | Updates GUI button enabled flag from lobby chat scroll |
| `frontnet.cpp` | `0x35124` | `frontnet_maintain_chat_scroll_btn_035124` | `0` | `0` | Updates GUI button enabled flag from lobby chat scroll |
| `frontnet.cpp` | `0x35137` | `frontnet_update_player_view_state_035137` | `0` | `3` | Accesses per-player PlayerInfo state (stride 0x4ef) |
| `frontnet.cpp` | `0x351d7` | `frontnet_draw_gui_button_label_0351d7` | `0` | `3` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x35304` | `frontnet_maintain_player_list_btn_035304` | `0` | `0` | Updates GUI button enabled flag from lobby player count/scroll |
| `frontnet.cpp` | `0x35338` | `frontnet_update_player_view_state_035338` | `0` | `1` | Accesses per-player PlayerInfo state (stride 0x4ef) |
| `frontnet.cpp` | `0x3536a` | `frontnet_draw_gui_button_label_03536a` | `0` | `2` | Sets active font and draws GUI button text label |
| `frontnet.cpp` | `0x3540e` | `frontnet_fn_03540e` | `0` | `0` | Module frontnet.cpp procedure @ 0x03540e |
| `frontnet.cpp` | `0x35446` | `frontnet_sessions_enumeration_035446` | `0` | `2` | String 'Too many sessions in enumeration' |
| `frontnet.cpp` | `0x354fb` | `frontnet_players_enumeration_0354fb` | `0` | `2` | String 'Too many players in enumeration' |
| `frontnet.cpp` | `0x35546` | `frontnet_unrecognised_network_service_035546` | `0` | `3` | String 'Unrecognised Network Service' |
| `frontnet.cpp` | `0x3562b` | `frontnet_fn_03562b` | `0` | `0` | Module frontnet.cpp procedure @ 0x03562b |
| `frontnet.cpp` | `0x35666` | `frontnet_fn_035666` | `1` | `0` | Module frontnet.cpp procedure @ 0x035666 |
| `frontnet.cpp` | `0x356d1` | `frontnet_fn_0356d1` | `1` | `0` | Module frontnet.cpp procedure @ 0x0356d1 |
| `frontnet.cpp` | `0x35758` | `frontnet_LbNetwork_Exchange_035758` | `1` | `14` | References 'LbNetwork_Exchange failed' |
| `frontnet.cpp` | `0x35ac5` | `frontnet_fn_035ac5` | `1` | `2` | Module frontnet.cpp procedure @ 0x035ac5 |
| `frontnet.cpp` | `0x35b51` | `frontnet_save_config_net_035b51` | `3` | `6` | String 'SAVE\CONFIG.NET' |
| `frontnet.cpp` | `0x35bbf` | `frontnet_save_config_net_035bbf` | `2` | `5` | String 'SAVE\CONFIG.NET' |
| `frontnet.cpp` | `0x35c1e` | `frontnet_fn_035c1e` | `0` | `4` | Module frontnet.cpp procedure @ 0x035c1e |
| `frontnet.cpp` | `0x35c5a` | `frontnet_fn_035c5a` | `0` | `2` | Module frontnet.cpp procedure @ 0x035c5a |
| `frontnet.cpp` | `0x35c86` | `frontnet_fn_035c86` | `1` | `1` | Module frontnet.cpp procedure @ 0x035c86 |
| `frontnet.cpp` | `0x35cc1` | `frontnet_fn_035cc1` | `1` | `0` | Module frontnet.cpp procedure @ 0x035cc1 |
| `frontnet.cpp` | `0x35ce2` | `frontnet_fn_035ce2` | `1` | `0` | Module frontnet.cpp procedure @ 0x035ce2 |
| `frontnet.cpp` | `0x35d29` | `frontnet_LbNetwork_Stop_035d29` | `1` | `10` | References 'LbNetwork_Stop() failed' |
| `frontnet.cpp` | `0x35e19` | `frontnet_fn_035e19` | `1` | `3` | Module frontnet.cpp procedure @ 0x035e19 |
| `frontnet.cpp` | `0x35e3c` | `frontnet_update_player_dungeon_035e3c` | `3` | `9` | Accesses per-player Dungeon state (stride 0x1508) |
| `frontnet.cpp` | `0x36008` | `frontnet_fn_036008` | `1` | `1` | Module frontnet.cpp procedure @ 0x036008 |
| `frontnet.cpp` | `0x36018` | `frontnet_draw_text_overlay_036018` | `0` | `3` | Configures font/flags and draws text on screen |
| `frontnet.cpp` | `0x360e8` | `frontnet_draw_text_overlay_0360e8` | `0` | `3` | Configures font/flags and draws text on screen |
| `frontnet.cpp` | `0x36188` | `frontnet_draw_text_overlay_036188` | `1` | `2` | Configures font/flags and draws text on screen |
| `frontnet.cpp` | `0x36223` | `frontnet_fn_036223` | `0` | `2` | Module frontnet.cpp procedure @ 0x036223 |
| `frontnet.cpp` | `0x36278` | `frontnet_draw_text_overlay_036278` | `2` | `2` | Configures font/flags and draws text on screen |
| `frontnet.cpp` | `0x362e1` | `frontnet_fn_0362e1` | `0` | `0` | Module frontnet.cpp procedure @ 0x0362e1 |
| `packet.cpp` | `0x5d32c` | `packet_check_all_room_ traps_sync` | `2` | `2` | Validate room and trap state before turn packet processing |
| `packet.cpp` | `0x5d34c` | `packet_validate_active_Catalogue_entries` | `2` | `0` | Scan 86 catalogue slots for valid string pointers |
| `packet.cpp` | `0x5d35c` | `packet_resync_network_game_state` | `2` | `15` | Chunked full-game-state network resynchronization via LbNetwork_Exchange |
| `packet.cpp` | `0x5d7b5` | `packet_build_local_player_turn_packet` | `1` | `12` | Capture local player cursor, hand, and mode into turn Packet |
| `packet.cpp` | `0x5da11` | `packet_init_level_replay_or_resync` | `1` | `7` | Re-initialize level state and reload packet stream on resync/replay |
| `packet.cpp` | `0x5dc27` | `packet_exchange_all_players_packets` | `1` | `10` | Exchange per-turn Packet structs across peers via LbNetwork_Exchange |
| `packet.cpp` | `0x5dde9` | `set_packet_control_flag` | `6` | `0` | OR control bitflag into pkt->control_flags (+0x0e) |
| `packet.cpp` | `0x5ddee` | `set_packet_action` | `43` | `0` | Populate pkt->action (+0x05), actn_par1 (+0x06), and actn_par2 (+0x08) |
| `packet.cpp` | `0x5de00` | `packet_find_next_active_player` | `2` | `0` | Find next active non-spectator player index in g_players |
| `packet.cpp` | `0x5de7c` | `process_players_packet_control_flags` | `1` | `8` | Apply incoming Packet.player_flags and control_flags to PlayerInfo |
| `packet.cpp` | `0x5df2f` | `packet_vio_table_data_block` | `0` | `0` | Embedded data/thunk block in packet.cpp |
| `packet.cpp` | `0x5e01e` | `process_all_players_turn_packets` | `1` | `0` | Main per-turn dispatcher executing Packet actions for all active players |
| `packet.cpp` | `0x5eb8d` | `process_players_dungeon_control_packet` | `1` | `5` | Execute dungeon-view Packet action for a player |
| `packet.cpp` | `0x5ec71` | `process_players_creature_control_packet` | `1` | `4` | Execute first-person creature possession Packet movement & instance actions |
| `packet.cpp` | `0x5f001` | `process_players_spectator_packet` | `1` | `1` | Handle spectator view packet toggle |
| `packet.cpp` | `0x5f049` | `process_players_map_view_packet` | `1` | `6` | Handle parchment map view zoom/exit packet actions |
| `packet.cpp` | `0x5f163` | `process_players_global_packet_action` | `1` | `9` | Execute global hotkeys, pause, message, and view-mode Packet actions |
| `packet.cpp` | `0x5f3ad` | `process_players_creature_passenger_packet` | `1` | `2` | Update camera position and actions while riding a possessed creature |
| `packet.cpp` | `0x5f438` | `packet_update_player_zoom_box` | `2` | `4` | Update player camera zoom/bounding box from packet control flags |
| `packet.cpp` | `0x5f4d9` | `packet_check_thing_interaction_valid` | `1` | `2` | Verify whether player can interact with target Thing in packet |
| `packet.cpp` | `0x5f577` | `packet_can_player_afford_room_or_trap` | `1` | `0` | Check if player gold covers cost of room/trap kind |
| `packet.cpp` | `0x5f5db` | `packet_is_subtile_revealed_for_player` | `1` | `0` | Check if map subtile (x, y) is revealed for player bitmask |
| `packet.cpp` | `0x5f6c5` | `process_players_dungeon_command_packet` | `1` | `77` | Master switch executing dungeon build, dig, slap, pickup, drop, and spell Packet commands |
| `packet.cpp` | `0x61751` | `clear_packet_for_player` | `1` | `0` | Zero out a player's 17-byte Packet slot for the upcoming turn |
| `packet.cpp` | `0x617c9` | `open_new_packet_file_for_save` | `1` | `6` | Create and write header for new .PKT replay recording file |
| `packet.cpp` | `0x61883` | `write_turn_packets_to_file` | `1` | `5` | Compute Thing checksum (compute_things_checksum) and write turn Packets to .PKT file |
| `packet.cpp` | `0x618f5` | `open_packet_file_for_load` | `2` | `5` | Open existing .PKT replay file and validate header |
| `packet.cpp` | `0x619be` | `load_turn_packets_from_file` | `1` | `6` | Seek and read per-turn Packet structures from open .PKT replay file |
| `packet.cpp` | `0x61bde` | `packet_possess_thing_direct` | `3` | `5` | Directly attach player camera to possessed Thing |
| `packet.cpp` | `0x61ca3` | `packet_handle_double_click_action` | `11` | `2` | Process double-click packet action within turn threshold |
| `packet.cpp` | `0x61d43` | `packet_activate_dungeon_special_or_spell` | `2` | `7` | Trigger dungeon special box or spell from packet command |
| `packet.cpp` | `0x61e86` | `packet_tag_slab_for_digging` | `1` | `1` | Tag or untag a 3x3 subtile slab area for imp digging |
| `packet.cpp` | `0x61f1b` | `packet_has_selectable_things_at_subtile` | `1` | `0` | Check if subtile contains Things selectable by player hand |
| `packet.cpp` | `0x61f77` | `packet_update_pause_mode_state` | `0` | `4` | Synchronize pause state across singleplayer/multiplayer packet flags |
| `packet.cpp` | `0x620e6` | `packet_compute_full_dungeon_checksum` | `0` | `4` | Compute deterministic checksum over Dungeon and SlabMap state |
| `packet.cpp` | `0x62238` | `packet_backup_catalogue_settings` | `1` | `0` | Save current level/campaign catalogue settings before packet replay |
| `packet.cpp` | `0x622f1` | `packet_restore_catalogue_settings` | `1` | `0` | Restore level/campaign catalogue settings after packet replay |
| `packet.cpp` | `0x623aa` | `packet_draw_debug_cursor_overlay` | `2` | `6` | Lock screen and draw multiplayer/packet cursor overlay |
| `bflib/bflib_network.cpp` | `0xed04c` | `lbnet_bullfrog_net_library_version_0ed04c` | `0` | `1` | String 'BULLFROG NET LIBRARY VERSION %f FOR %s LAST BUILT __DATE__' |
| `bflib/bflib_network.cpp` | `0xed0e8` | `lbnet_fn_0ed0e8` | `1` | `0` | Module bflib/bflib_network.cpp procedure @ 0x0ed0e8 |
| `bflib/bflib_network.cpp` | `0xed4e0` | `LbNetwork_Init_0ed4e0` | `3` | `8` | References 'WARNING network: LbNetwork_Init() failure on compositeBuffer allo' |
| `bflib/bflib_network.cpp` | `0xed84c` | `LbNetwork_Create_0ed84c` | `1` | `1` | References 'ERROR::LbNetwork_Create ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xeda20` | `LbNetwork_Join_0eda20` | `1` | `5` | References 'ERROR::LbNetwork_Join ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xedc70` | `LbNetwork_Stop_0edc70` | `9` | `3` | References 'INSIDE LbNetwork_Stop' |
| `bflib/bflib_network.cpp` | `0xedd8c` | `LbNetwork_EnumerateSessions_0edd8c` | `1` | `1` | References 'ERROR::LbNetwork_EnumerateSessions ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xeddf0` | `LbNetwork_EnumeratePlayers_0eddf0` | `2` | `1` | References 'ERROR::LbNetwork_EnumeratePlayers ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xee3c0` | `LbNetwork_CompleteExchange_0ee3c0` | `0` | `10` | References 'WARNING network: LbNetwork_CompleteExchange() failure on HostData' |
| `bflib/bflib_network.cpp` | `0xee694` | `LbNetwork_StartExchange_0ee694` | `5` | `12` | References 'ERROR::LbNetwork_StartExchange ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xeeb20` | `LbNetwork_ChangeExchangeBuffer_0eeb20` | `1` | `3` | References 'WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buff' |
| `bflib/bflib_network.cpp` | `0xeebe0` | `lbnet_GetCurrentPlayers_0eebe0` | `0` | `1` | References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated' |
| `bflib/bflib_network.cpp` | `0xeedc0` | `lbnet_HostDataCollection_0eedc0` | `2` | `7` | References 'WARNING network: HostDataCollection() deletePlayerBuffer is too s' |
| `bflib/bflib_network.cpp` | `0xef060` | `LbNetwork_CompleteExchange_0ef060` | `2` | `3` | References 'WARNING network: LbNetwork_CompleteExchange() failure on SP::Send' |
| `bflib/bflib_network.cpp` | `0xef14c` | `lbnet_UserDataMsgCallback_0ef14c` | `0` | `1` | References 'WARNING network: UserDataMsgCallback() host got data from itself' |
| `bflib/bflib_network.cpp` | `0xef4a8` | `lbnet_DeleteMsgCallback_0ef4a8` | `0` | `1` | References 'WARNING network: DeleteMsgCallback() NULL localPlayerInfoPtr' |
| `bflib/bflib_network.cpp` | `0xef520` | `lbnet_GetCurrentPlayers_0ef520` | `0` | `1` | References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated' |
| `bflib/bflib_network.cpp` | `0xef7a8` | `lbnet_RequestExchangeDataMsgCallback_0ef7a8` | `0` | `3` | References 'WARNING network: RequestExchangeDataMsgCallback() NULL data point' |
| `bflib/bflib_network.cpp` | `0xef864` | `lbnet_RequestCompositeExchangeDataMsgCallback_0ef864` | `0` | `2` | References 'WARNING network: RequestCompositeExchangeDataMsgCallback() failur' |
| `bflib/bflib_network.cpp` | `0xef8e8` | `lbnet_GenericIPXInit_0ef8e8` | `0` | `5` | References 'WARNING network: GenericIPXInit() failure on ServiceProvider::Ini' |
| `bflib/bflib_network.cpp` | `0xefab0` | `lbnet_SendSystemUserMessage_0efab0` | `0` | `3` | References 'WARNING network: SendSystemUserMessage() systemUserBuffer is too ' |
| `bflib/bflib_network.cpp` | `0xf3b50` | `LbNetwork_Send_0f3b50` | `1` | `6` | References 'INSIDE LbNetwork_Send' |
| `bflib/bflib_network.cpp` | `0xf3ed8` | `LbNetwork_Receive_0f3ed8` | `1` | `6` | References 'INSIDE LbNetwork_Receive' |
| `bflib/bflib_network.cpp` | `0xff0ec` | `LbNETWORK_0ff0ec` | `3` | `1` | References 'LbNETWORK : Destructing ServiceProvider' |
| `bflib/bflib_network.cpp` | `0xff10c` | `LbNETWORK_0ff10c` | `2` | `1` | References 'LbNETWORK : Initialising ServiceProvider' |
| `bflib/bflib_network.cpp` | `0xff18c` | `LbNETWORK_0ff18c` | `3` | `1` | References 'LbNETWORK : Releasing ServiceProvider' |
| `bflib/bflib_network.cpp` | `0xff1d4` | `lbnet_AddPlayer_0ff1d4` | `10` | `1` | References 'WARNING network: ServiceProvider::AddPlayer() player table is ful' |
| `bflib/bflib_network.cpp` | `0xff550` | `lbnet_EncodeMessageStub_0ff550` | `6` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff630` | `lbnet_EncodeMessageStub_0ff630` | `9` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff6a0` | `lbnet_EncodeMessageStub_0ff6a0` | `3` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff6f0` | `lbnet_EncodeMessageStub_0ff6f0` | `2` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff894` | `lbnet_EncodeMessageStub_0ff894` | `10` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff8c0` | `lbnet_DecodeMessageStub_0ff8c0` | `11` | `1` | References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff904` | `lbnet_warning_network_niladdmsgcallback_hit_0ff904` | `0` | `1` | String 'WARNING network: NilAddMsgCallback(%d, %s) hit' |
| `bflib/bflib_network.cpp` | `0xff920` | `lbnet_warning_network_nildeletemsgcallback_hit_0ff920` | `0` | `1` | String 'WARNING network: NilDeleteMsgCallback(%d) hit' |
| `bflib/bflib_network.cpp` | `0xff938` | `lbnet_warning_network_nilhostmsgcallback_hit_0ff938` | `0` | `1` | String 'WARNING network: NilHostMsgCallback(%d) hit' |
| `bflib/bflib_network.cpp` | `0xff950` | `lbnet_NilUserSysMsgCallback_0ff950` | `0` | `1` | References 'WARNING network: NilUserSysMsgCallback() hit' |
| `bflib/bflib_network.cpp` | `0xff960` | `lbnet_warning_network_niluserdatamsgcallbac_hit_0ff960` | `0` | `1` | String 'WARNING network: NilUserDataMsgCallback(%d, %d %d) hit' |
| `bflib/bflib_network.cpp` | `0xff984` | `lbnet_warning_network_nilrequestexchangedat_amsgcallback_0ff984` | `0` | `1` | String 'WARNING network: NilRequestExchangeDataMsgCallback(%d %d) hi' |
| `bflib/bflib_network.cpp` | `0xff9a0` | `lbnet_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0` | `0` | `1` | String 'WARNING network: NilRequestCompositeExchangeDataMsgCallback(' |
| `bflib/bflib_network.cpp` | `0xff9bc` | `lbnet_warning_network_nilunidirectionalmsgc_allback_0ff9bc` | `0` | `1` | String 'WARNING network: NilUnidirectionalMsgCallback(%d, %d) hit' |
| `bflib/bflib_network.cpp` | `0xff9dc` | `lbnet_warning_network_nilsystemusermsgcallb_ack_0ff9dc` | `0` | `1` | String 'WARNING network: NilSystemUserMsgCallback(%d %d) hit' |
| `bflib/bflib_network.cpp` | `0xffb54` | `lbnet_Receive_0ffb54` | `12` | `5` | References 'WARNING network: ServiceProvider::Receive() not initialised' |
| `bflib/bflib_network.cpp` | `0x1002dc` | `lbnet_Send_1002dc` | `15` | `4` | References 'WARNING network: ServiceProvider::Send() not initialised' |
| `bflib/bflib_network.cpp` | `0x100718` | `lbnet_DecodeMessageStub_100718` | `1` | `1` | References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0x100828` | `lbnet_EnumeratePlayersForSessionRunning_100828` | `1` | `2` | References 'WARNING network: ServiceProvider::EnumeratePlayersForSessionRunni' |
| `bflib/bflib_network.cpp` | `0x1008d0` | `lbnet_GenericSerialInit_1008d0` | `1` | `4` | References 'WARNING network: GenericSerialInit() failure on ServiceProvider::' |
| `bflib/bflib_network.cpp` | `0x100a28` | `lbnet_StartTwoPlayerExchange_100a28` | `1` | `5` | References 'WARNING network: StartTwoPlayerExchange() failure on SP::Send()' |
| `bflib/bflib_network.cpp` | `0x100bb8` | `lbnet_CompleteTwoPlayerExchange_100bb8` | `1` | `7` | References 'WARNING network: CompleteTwoPlayerExchange() failure on SP::Send(' |
| `bflib/bflib_network.cpp` | `0x100e14` | `lbnet_TwoPlayerCallback_100e14` | `0` | `6` | References 'WARNING network: TwoPlayerCallback() Unexpected sequence number: ' |
| `bflib/bflib_network.cpp` | `0x101074` | `lbnet_TwoPlayerReqExDataMsgCallback_101074` | `0` | `4` | References 'WARNING network: TwoPlayerReqExDataMsgCallback() could not find r' |
| `bflib/bflib_network.cpp` | `0x101158` | `lbnet_GenericModemInit_101158` | `1` | `4` | References 'WARNING network: GenericModemInit() failure on ServiceProvider::I' |
| `bflib/bflib_network.cpp` | `0x101360` | `lbnet_allocated_fine_handler_size_101360` | `1` | `8` | String 'ALLOCATED FINE HANDLER SIZE = %d' |
| `bflib/bflib_network.cpp` | `0x102108` | `lbnet_network_node_102108` | `1` | `4` | String 'NETWORK %x%x%x%x
NODE %02x%02x%02x%02x%02x%02x' |
| `bflib/bflib_network.cpp` | `0x1031e8` | `lbnet_Init_1031e8` | `2` | `4` | References 'WARNING network: IPXServiceProvider::Init() failure on Initialise' |
| `bflib/bflib_network.cpp` | `0x1032d8` | `LbNETWORK_1032d8` | `1` | `11` | References 'LbNETWORK : Initialising IPXServiceProvider' |
| `bflib/bflib_network.cpp` | `0x103464` | `LbNETWORK_103464` | `0` | `7` | References 'LbNETWORK : Releasing IPXServiceProvider' |
| `bflib/bflib_network.cpp` | `0x103528` | `lbnet_Start_103528` | `0` | `9` | References 'WARNING network: IPXServiceProvider::Start() not initialised' |
| `bflib/bflib_network.cpp` | `0x10646c` | `lbnet_Start_10646c` | `2` | `12` | References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer' |
| `bflib/bflib_network.cpp` | `0x106da4` | `lbnet_Start_106da4` | `1` | `8` | References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer' |
| `bflib/bflib_network.cpp` | `0x10962c` | `lbnet_resending_packet_10962c` | `1` | `7` | String 'RESENDING PACKET' |
| `bflib/bflib_network.cpp` | `0x11e254` | `LbNETWORK_11e254` | `1` | `7` | References 'LbNETWORK : Releasing SerialSP' |
| `bflib/bflib_network.cpp` | `0x11e314` | `LbNETWORK_11e314` | `1` | `7` | References 'LbNETWORK : Initialising SerialSP' |
| `bflib/bflib_network.cpp` | `0x11e484` | `lbnet_Start_11e484` | `1` | `4` | References 'WARNING network: SerialSP::Start() not initialised' |
| `bflib/bflib_network.cpp` | `0x11e554` | `lbnet_Start_11e554` | `1` | `7` | References 'WARNING network: SerialSP::Start() not initialised' |
| `bflib/bflib_network.cpp` | `0x11e6a8` | `lbnet_SendMessage_11e6a8` | `1` | `5` | References 'WARNING network: SerialSP::SendMessage() invalid sendMode()' |
| `bflib/bflib_network.cpp` | `0x11e9e8` | `lbnet_Enumerate_11e9e8` | `0` | `3` | References 'WARNING network: SerialSP::Enumerate() not initialised' |
| `bflib/bflib_network.cpp` | `0x11ea38` | `lbnet_Enumerate_11ea38` | `0` | `3` | References 'WARNING network: SerialSP::Enumerate() not initialised' |
| `bflib/bflib_network.cpp` | `0x11eaf8` | `lbnet_Stop_11eaf8` | `1` | `5` | References 'WARNING network: SerialSP::Stop() not initialised' |
| `bflib/bflib_network.cpp` | `0x11eb84` | `lbnet_ReadMessage_11eb84` | `0` | `2` | References 'WARNING network: SerialSP::ReadMessage() invalid m_localPlayerId' |
| `bflib/bflib_network.cpp` | `0x11ebd0` | `lbnet_PeekMessage_11ebd0` | `0` | `2` | References 'WARNING network: SerialSP::PeekMessage() invalid m_localPlayerId' |
| `bflib/bflib_network.cpp` | `0x11ec1c` | `lbnet_SendAck_11ec1c` | `1` | `2` | References 'WARNING network: SerialSP::SendAck() failure on CommHandler::Writ' |
| `bflib/bflib_network.cpp` | `0x11ece0` | `lbnet_PrivateReceive_11ece0` | `2` | `4` | References 'WARNING network: SerialSP::PrivateReceive() invalid mode value' |
| `bflib/bflib_network.cpp` | `0x11ee0c` | `lbnet_warning_network_serialsp_privatereceive_11ee0c` | `1` | `6` | String 'WARNING network: SerialSP::PrivateReceive addPlayerBuffer to' |
| `bflib/bflib_network.cpp` | `0x11f4d8` | `LbNETWORK_11f4d8` | `0` | `2` | References 'LbNETWORK : Releasing ModemSP' |
| `bflib/bflib_network.cpp` | `0x11f53c` | `lbnet_MODEM_11f53c` | `0` | `9` | Log prefix 'MODEM: USER ABORTS MODEM INIT FUNCTION' |
| `bflib/bflib_network.cpp` | `0x11f818` | `lbnet_MODEM_11f818` | `0` | `10` | Log prefix 'MODEM: IS BUSY OR ENGAGED' |
| `bflib/bflib_network.cpp` | `0x11fb98` | `lbnet_calling_hangupmodem_11fb98` | `0` | `3` | String 'CALLING HANGUPMODEM' |
| `bflib/bflib_network.cpp` | `0x124d1c` | `lbnet_fn_124d1c` | `2` | `1` | Module bflib/bflib_network.cpp procedure @ 0x124d1c |
| `bflib/bflib_network.cpp` | `0x125630` | `lbnet_serialhandler_size_port_irq_125630` | `1` | `5` | String 'SERIALHANDLER size %d Port %x IRQ %x INT VECT %x' |
| `bflib/bflib_network.cpp` | `0x1262a4` | `lbnet_commhandler_readserialdev_null_parameter_1262a4` | `1` | `1` | String 'CommHandler::ReadSerialDev NULL parameter passed' |

## 3. Decompiled Key Networking & Packet Functions

### `frontnet_levelnamefile_add_blank_line_032f9b` (`0x32f9b` in `frontnet.cpp`)
- **Evidence**: String 'LevelNameFile, Add a blank line at the end'
```c
void FUN_00032f9b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_10;
  
  DAT_003358eb = 0;
  DAT_003d98b4 = DAT_003346e8;
  pcVar6 = DAT_0033400d;
  while( true ) {
    if (99 < DAT_003358eb) {
      return;
    }
    iVar1 = FUN_000330ae();
    if (local_10 == 0) break;
    (&DAT_00335373)[DAT_003358eb * 0xe] = (undefined1)local_10;
    iVar2 = FUN_000330ae();
    (&DAT_00335374)[DAT_003358eb * 0xe] = (undefined1)local_10;
    iVar3 = FUN_000330ae();
    *(int *)((int)&DAT_00335375 + DAT_003358eb * 0xe) = local_10;
    iVar4 = FUN_000330ae();
    iVar5 = DAT_003358eb * 0xe;
    pcVar6 = pcVar6 + iVar4 + iVar3 + iVar2 + iVar1;
    *(int *)((int)&DAT_00335379 + iVar5) = local_10;
    *(char **)((int)&DAT_0033537d + iVar5) = pcVar6;
    while (*pcVar6 != '\n') {
      if (*pcVar6 == '\r') {
        *pcVar6 = '\0';
      }
      pcVar6 = pcVar6 + 1;
      if (DAT_00334011 <= pcVar6) {
        DAT_003358eb = DAT_003358eb + 1;
        FUN_000ddaf0();
        return;
      }
    }
    DAT_003358eb = DAT_003358eb + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}
```

### `frontnet_fn_03325d` (`0x3325d` in `frontnet.cpp`)
- **Evidence**: Module frontnet.cpp procedure @ 0x03325d
```c
void FUN_0003325d(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  code *pcVar3;
  
  if (0x329 < in_EAX + 0x322U) {
    FUN_000ddaf0();
    return;
  }
  iVar2 = 10;
  pcVar3 = FUN_00033223;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    sVar1 = *(short *)pcVar3;
    pcVar3 = pcVar3 + 2;
  } while ((short)(in_EAX + 0x322U) != sVar1);
                    /* WARNING: Could not recover jumptable at 0x0003327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x33235))();
  return;
}
```

### `frontnet_button_type_033563` (`0x33563` in `frontnet.cpp`)
- **Evidence**: String 'Unknown button type'
```c
void FUN_00033563(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  int local_1c;
  
  uVar1 = *(uint *)(in_EAX + 0x33);
  if (uVar1 < 0x19) {
    if (uVar1 != 0x18) {
LAB_0003359d:
      FUN_000ddaf0();
      return;
    }
    local_1c = 2;
  }
  else if (uVar1 < 0x1a) {
    local_1c = 3;
  }
  else {
    if (uVar1 != 0x1a) goto LAB_0003359d;
    local_1c = 7;
  }
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  for (; 0 < local_1c; local_1c = local_1c - iVar2) {
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    FUN_0013a710();
    if (local_1c < 3) {
      iVar2 = 1;
    }
    else {
      iVar2 = 3;
    }
  }
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  FUN_0013a710();
  return;
}
```

### `frontnet_LbNetwork_Stop_033bcc` (`0x33bcc` in `frontnet.cpp`)
- **Evidence**: References 'LbNetwork_Stop() failed'
```c
void FUN_00033bcc(void)

{
  char cVar1;
  
  cVar1 = FUN_000edc70();
  if (cVar1 != '\0') {
    FUN_000ddaf0();
    return;
  }
  FUN_0002e8a7();
  return;
}
```

### `frontnet_LbNetwork_Stop_033bfb` (`0x33bfb` in `frontnet.cpp`)
- **Evidence**: References 'LbNetwork_Stop() failed'
```c
void FUN_00033bfb(void)

{
  char cVar1;
  
  cVar1 = FUN_000edc70();
  if (cVar1 != '\0') {
    FUN_000ddaf0();
    return;
  }
  FUN_00033156();
  FUN_0002e8a7();
  return;
}
```

### `frontnet_LbNetwork_EnumerateServices_033ead` (`0x33ead` in `frontnet.cpp`)
- **Evidence**: References 'LbNetwork_EnumerateServices() failed'
```c
void FUN_00033ead(void)

{
  char cVar1;
  
  DAT_00335dcf = 0;
  FUN_000e6a10();
  cVar1 = FUN_000ed0e8();
  if (cVar1 != '\0') {
    FUN_000ddaf0();
  }
  if (DAT_0019d0bb != '\0') {
    DAT_00335dcf = DAT_00335dcf + 1;
    FUN_000e8ca8();
  }
  FUN_00032f9b();
  FUN_00035b51();
  return;
}
```

### `frontnet_isdn_supported_serial_03442b` (`0x3442b` in `frontnet.cpp`)
- **Evidence**: String 'ISDN not supported by Serial'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003442b(void)

{
  int iVar1;
  
  _DAT_00335ddb = (int)DAT_0017b908;
  iVar1 = FUN_000ea290();
  if (iVar1 == 0) {
    FUN_000ddaf0();
  }
  else {
    _DAT_00335ddf = FUN_000f0964();
  }
  _DAT_00335def = 0;
  _DAT_00335deb = 0;
  _DAT_00335de3 = (uint)(byte)(&DAT_0017b909)[DAT_0017b908];
  _DAT_00335df3 = 0;
  _DAT_00335df7 = 0;
  FUN_0003315b();
  return;
}
```

### `frontnet_LbNetwork_EnumerateSessions_0346de` (`0x346de` in `frontnet.cpp`)
- **Evidence**: References 'LbNetwork_EnumerateSessions() failed'
```c
void FUN_000346de(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  DAT_003359a3 = 0;
  FUN_000e6a10();
  cVar2 = FUN_000edd8c();
  if (cVar2 != '\0') {
    FUN_000ddaf0();
  }
  if (DAT_003359a3 == 0) {
    DAT_003359ab = -1;
  }
  else {
    if (DAT_003359ab == -1) goto LAB_000347b0;
    if ((DAT_003359a3 <= DAT_003359ab) ||
       (iVar1 = DAT_003359ab, *(int *)((&DAT_00335923)[DAT_003359ab] + 1) != DAT_003359af)) {
      DAT_003359ab = -1;
      iVar4 = 0;
      iVar3 = 0;
      while ((iVar1 = DAT_003359ab, iVar3 < DAT_003359a3 * 4 &&
             (iVar1 = iVar4, DAT_003359af != *(int *)(*(int *)((int)&DAT_00335923 + iVar3) + 1)))) {
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + 1;
      }
    }
    DAT_003359ab = iVar1;
    if (DAT_003359ab != -1) goto LAB_000347b0;
  }
  DAT_003359af = -1;
LAB_000347b0:
  if ((DAT_003359a3 == 0) || (DAT_003359a7 < 0)) {
    DAT_003359a7 = 0;
  }
  else if (DAT_003359a3 + -1 < DAT_003359a7) {
    DAT_003359a7 = DAT_003359a3 + -1;
  }
  if (((DAT_003359ab == -1) || (DAT_00335dd7 == 0)) || (DAT_00335dd7 == 1)) {
    DAT_0033607f = 0;
  }
  else {
    DAT_0033607f = 0;
    FUN_000e6a10();
    cVar2 = FUN_000eddf0();
    if (cVar2 != '\0') {
      DAT_003359ab = 0xffffffff;
      DAT_003359af = 0xffffffff;
      return;
    }
  }
  if ((DAT_0033607f == 0) || (DAT_003359cb < 0)) {
    DAT_003359cb = 0;
  }
  else if (DAT_0033607f + -1 < DAT_003359cb) {
    DAT_003359cb = DAT_0033607f + -1;
    return;
  }
  return;
}
```

### `frontnet_LbNetwork_EnumeratePlayers_034f38` (`0x34f38` in `frontnet.cpp`)
- **Evidence**: References 'LbNetwork_EnumeratePlayers() failed'
```c
void FUN_00034f38(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined1 local_228 [520];
  int local_20;
  int local_1c;
  
  bVar7 = 0;
  DAT_0033607f = 0;
  FUN_000e6a10();
  cVar1 = FUN_000eddf0();
  if (cVar1 == '\0') {
    if ((DAT_00336033 == 0) || (DAT_00336037 < 0)) {
      DAT_00336037 = 0;
    }
    else if (DAT_00336033 + -1 < DAT_00336037) {
      DAT_00336037 = DAT_00336033 + -1;
    }
    FUN_00035758();
    local_20 = DAT_00336033 * 0x41;
    local_1c = 0;
    iVar4 = 0;
    for (iVar2 = 0; iVar2 < local_20; iVar2 = iVar2 + 0x41) {
      if ((&DAT_00335238)[(uint)(byte)(&DAT_00335e2b)[iVar2] * 9] != 0) {
        puVar6 = local_228 + iVar4;
        local_1c = local_1c + 1;
        iVar4 = iVar4 + 0x41;
        puVar5 = &DAT_00335e2b + iVar2;
        for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
    }
    DAT_00336033 = local_1c;
    FUN_000e8c83();
  }
  else {
    FUN_000ddaf0();
  }
  return;
}
```

### `frontnet_sessions_enumeration_035446` (`0x35446` in `frontnet.cpp`)
- **Evidence**: String 'Too many sessions in enumeration'
```c
void FUN_00035446(undefined4 param_1)

{
  if (DAT_003359a3 < 0x20) {
    if ((DAT_00335dd7 != 0) && (DAT_00335dd7 != 1)) {
      (&DAT_0033591f)[DAT_003359a3 + 1] = param_1;
      DAT_003359a3 = DAT_003359a3 + 1;
      return;
    }
    if (DAT_003359a3 == 0) {
      DAT_00335923 = param_1;
      FUN_000e8ca8();
      DAT_003359a3 = DAT_003359a3 + 1;
      return;
    }
  }
  else {
    FUN_000ddaf0();
  }
  return;
}
```

### `frontnet_players_enumeration_0354fb` (`0x354fb` in `frontnet.cpp`)
- **Evidence**: String 'Too many players in enumeration'
```c
void FUN_000354fb(void)

{
  if (DAT_0033607f < 4) {
    DAT_0033607f = DAT_0033607f + 1;
    FUN_000e8ca8();
    return;
  }
  FUN_000ddaf0();
  return;
}
```

### `frontnet_unrecognised_network_service_035546` (`0x35546` in `frontnet.cpp`)
- **Evidence**: String 'Unrecognised Network Service'
```c
void FUN_00035546(void)

{
  int iVar1;
  
  if (DAT_00335dcf < 3) {
    if (DAT_00335dcf < 0x10) {
      iVar1 = FUN_000f09e5();
      if (iVar1 == 0) {
        DAT_00335dcf = DAT_00335dcf + 1;
LAB_00035595:
        FUN_000e8ca8();
        return;
      }
      iVar1 = FUN_000f09e5();
      if (iVar1 == 0) {
        DAT_00335dcf = DAT_00335dcf + 1;
        goto LAB_00035595;
      }
      iVar1 = FUN_000f09e5();
      if (iVar1 == 0) {
        DAT_00335dcf = DAT_00335dcf + 1;
        goto LAB_00035595;
      }
    }
    FUN_000ddaf0();
  }
  return;
}
```

### `frontnet_LbNetwork_Exchange_035758` (`0x35758` in `frontnet.cpp`)
- **Evidence**: References 'LbNetwork_Exchange failed'
```c
void FUN_00035758(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  undefined1 *puVar8;
  
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 0xc;
    (&DAT_003358f3)[iVar4] = (&DAT_003358f3)[iVar4] & 0xfe;
    iVar4 = iVar3;
  } while (iVar3 != 0x30);
  iVar4 = (int)DAT_002f10ce._3_1_;
  iVar3 = iVar4 * 0xc;
  (&DAT_003358f4)[iVar3] = DAT_00335322;
  bVar2 = (byte)DAT_00334a4c;
  (&DAT_003358f3)[iVar3] = (&DAT_003358f3)[iVar3] | 1;
  (&DAT_003358f3)[iVar3] = (&DAT_003358f3)[iVar3] & 0xf9;
  (&DAT_003358f3)[iVar3] = (&DAT_003358f3)[iVar3] | (bVar2 & 3) * '\x02';
  (&DAT_003358f5)[iVar4 * 6] = (undefined2)DAT_00179bfc;
  (&DAT_003358f7)[iVar4 * 6] = (undefined2)DAT_00179c00;
  cVar1 = FUN_000ee694();
  if (cVar1 != '\0') {
    FUN_000ddaf0();
  }
  iVar3 = FUN_00032f5c();
  iVar4 = DAT_00336083;
  if (((iVar3 != 0) && (iVar3 = FUN_00035cc1(), iVar4 = iVar3, iVar3 <= DAT_00336083)) &&
     (iVar4 = DAT_00336083, iVar3 < DAT_00336083)) {
    if (DAT_00334a44 == 5) {
      cVar1 = FUN_000edc70();
      if (cVar1 != '\0') {
LAB_00035830:
        FUN_000ddaf0();
        return;
      }
    }
    else {
      if (DAT_00334a44 != 6) goto LAB_0003587e;
      cVar1 = FUN_000edc70();
      if (cVar1 != '\0') goto LAB_00035830;
      FUN_00033156();
    }
    FUN_0002e8a7();
    iVar4 = DAT_00336083;
  }
LAB_0003587e:
  DAT_00336083 = iVar4;
  iVar4 = 0;
  iVar3 = 0;
  puVar8 = &DAT_0019d52b;
  iVar7 = 0;
  do {
    if (((&DAT_003358f3)[iVar7] & 1) != 0) {
      switch((byte)(&DAT_003358f3)[iVar7] >> 3) {
      case 2:
        FUN_00035ac5();
        iVar3 = extraout_ECX;
        break;
      case 3:
        iVar3 = FUN_00035ce2();
        if (iVar3 == 0) {
          FUN_00035d29();
          iVar3 = extraout_ECX_01;
        }
        else {
          DAT_0033591f = 1;
          FUN_0002e8a7();
          iVar3 = extraout_ECX_00;
        }
        break;
      case 4:
        FUN_00035c86();
        iVar3 = extraout_ECX_02;
        break;
      case 7:
        DAT_00334a4c = (uint)(char)(&DAT_003358f9)[iVar7];
        break;
      case 8:
        iVar5 = FUN_000efdb4(iVar4,puVar8);
        iVar3 = (int)(char)(&DAT_003358f9)[iVar7];
        if (iVar3 == 0xe) {
          if (iVar5 != 0) {
            (&DAT_0019d52a)[iVar5 + extraout_ECX_03] = 0;
            iVar5 = iVar5 + -1;
          }
        }
        else if (iVar3 == 0x1c) {
          if (iVar5 != 0) {
            FUN_00035ac5();
            (&DAT_0019d52b)[extraout_ECX_04] = 0;
          }
        }
        else {
          if ((&DAT_003358fa)[iVar7] == '\0') {
            bVar2 = (&DAT_00195458)[iVar3];
          }
          else {
            bVar2 = (&DAT_001954d8)[iVar3];
          }
          if (((bVar2 != 0) && (1 < *(byte *)((bVar2 - 0x1f) * 6 + DAT_003346e8 + 4))) &&
             (iVar5 < 0x3f)) {
            iVar5 = iVar5 + 1;
            (&DAT_0019d52a)[iVar5 + extraout_ECX_03] = bVar2;
            (&DAT_0019d52b)[iVar5 + extraout_ECX_03] = 0;
          }
        }
        DAT_003d98b4 = DAT_003346e8;
        iVar6 = FUN_000e6c1c();
        iVar3 = extraout_ECX_05;
        if (0x1a3 < iVar6) {
          (&DAT_0019d52a)[iVar5 + extraout_ECX_05] = 0;
        }
      }
      if ((DAT_00335322 == -1) && ((byte)(&DAT_003358f4)[iVar7] != 0xffffffff)) {
        DAT_00335322 = (&DAT_003358f4)[iVar7];
      }
      if ((DAT_00334a4c == 2) && (bVar2 = ((&DAT_003358f3)[iVar7] & 7) >> 1, bVar2 != 2)) {
        DAT_00334a4c = (uint)bVar2;
      }
      *(uint *)((int)&DAT_0019d5af + iVar3) =
           (uint)*(ushort *)((int)&DAT_003358f7 + iVar7) +
           (uint)*(ushort *)((int)&DAT_003358f5 + iVar7) * 0x100;
    }
    puVar8 = puVar8 + 0x4ef;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x4ef;
    (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] & 7;
    iVar7 = iVar7 + 0xc;
  } while (iVar4 < 4);
  if (DAT_00335322 == -1) {
    DAT_00335322 = '\0';
  }
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((((&DAT_003358f3)[iVar4] & 1) == 0) && (iVar7 = FUN_0003308c(), iVar7 != 0)) {
      FUN_00035c86();
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (iVar3 < 4);
  return;
}
```

### `frontnet_LbNetwork_Stop_035d29` (`0x35d29` in `frontnet.cpp`)
- **Evidence**: References 'LbNetwork_Stop() failed'
```c
void FUN_00035d29(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *extraout_ECX;
  int iVar3;
  undefined1 local_110 [256];
  
  cVar1 = FUN_000edc70();
  if (cVar1 != '\0') {
    FUN_000ddaf0();
    return;
  }
  puVar2 = &DAT_00335323;
  iVar3 = 0;
  DAT_0019cbac = 0;
  DAT_003db4fd = '\0';
  DAT_003db518 = '\0';
  DAT_003db535 = '\0';
  do {
    if (((&DAT_003358f3)[iVar3] & 1) != 0) {
      FUN_000e7714(local_110,s__s__d__02d__00164627,puVar2,
                   *(undefined2 *)((int)&DAT_003358f5 + iVar3),
                   *(undefined2 *)((int)&DAT_003358f7 + iVar3));
      FUN_000e9dd6();
      puVar2 = extraout_ECX;
    }
    iVar3 = iVar3 + 0xc;
  } while (iVar3 != 0x30);
  while (((DAT_003db4fd == '\0' && (DAT_003db535 == '\0')) && (DAT_003db518 == '\0'))) {
    FUN_000e8560();
    iVar3 = FUN_000e797c();
    if (iVar3 == 1) {
      FUN_00030a2d();
      FUN_000e797c();
    }
    FUN_000e79fc();
  }
  FUN_00033156();
  FUN_0002e8a7();
  return;
}
```

### `packet_check_all_room_ traps_sync` (`0x5d32c` in `packet.cpp`)
- **Evidence**: Validate room and trap state before turn packet processing
```c
void FUN_0005d32c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0005cd55();
  iVar2 = FUN_00053c6b();
  if (iVar2 != -1) {
    for (uVar3 = 0; uVar3 < 0x56; uVar3 = (uint)(byte)((char)uVar3 + 1)) {
      iVar1 = uVar3 * 0x39;
      if (((*(char **)((int)&DAT_0034bc09 + iVar1) != (char *)0x0) &&
          (uVar3 = (uint)CONCAT11((&DAT_0034bbd9)[iVar1],(char)uVar3),
          (&DAT_0034bbd9)[iVar1] == (&DAT_0034baea)[iVar2 * 0x20])) &&
         ((&DAT_0034bbdc)[iVar1] == '\x03')) {
        if (**(char **)((int)&DAT_0034bc09 + iVar1) == '\0') {
          (&DAT_0034bbd7)[iVar1] = 0;
        }
        else {
          (&DAT_0034bbd7)[iVar1] = 1;
        }
      }
    }
    return;
  }
  return;
}
```

### `packet_validate_active_Catalogue_entries` (`0x5d34c` in `packet.cpp`)
- **Evidence**: Scan 86 catalogue slots for valid string pointers
```c
void FUN_0005d34c(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < 0x56; uVar2 = (uint)(byte)((char)uVar2 + 1)) {
    iVar1 = uVar2 * 0x39;
    if (((*(char **)((int)&DAT_0034bc09 + iVar1) != (char *)0x0) &&
        (uVar2 = (uint)CONCAT11((&DAT_0034bbd9)[iVar1],(char)uVar2),
        (&DAT_0034bbd9)[iVar1] == *(char *)(in_EAX + 0x14))) && ((&DAT_0034bbdc)[iVar1] == '\x03'))
    {
      if (**(char **)((int)&DAT_0034bc09 + iVar1) == '\0') {
        (&DAT_0034bbd7)[iVar1] = 0;
      }
      else {
        (&DAT_0034bbd7)[iVar1] = 1;
      }
    }
  }
  return;
}
```

### `packet_resync_network_game_state` (`0x5d35c` in `packet.cpp`)
- **Evidence**: Chunked full-game-state network resynchronization via LbNetwork_Exchange
```c
void FUN_0005d35c(void)

{
  byte *pbVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  piVar9 = &local_28;
  if (DAT_002ebaf6 == '\x02') {
    DAT_002eb541 = '\x01';
  }
  else {
    DAT_002eb541 = '\0';
    iVar5 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar5) != 0) {
        DAT_002eb541 = DAT_002eb541 + '\x01';
      }
      iVar5 = iVar5 + 0x24;
    } while (iVar5 != 0x90);
  }
  local_24 = (uint)(byte)(&DAT_0019d0f4)[DAT_002f10ce._3_1_ * 0x4ef];
  uStack_2c = 0x5d3bc;
  FUN_000404f7();
  iVar5 = DAT_002f10ce._3_1_ * 0x4ef;
  (&DAT_0019d0f4)[iVar5] = (undefined1)local_24;
  cVar4 = DAT_002f10ce._3_1_;
  if (DAT_002ebaf6 == '\x02') {
    (&DAT_0019d0c8)[iVar5] = (&DAT_0019d0c8)[iVar5] | 1;
    (&DAT_0019d0f3)[iVar5] = cVar4;
    if (DAT_002ee8d4 == '\0') {
      uVar3 = 2;
    }
    else {
      uVar3 = 5;
    }
    (&DAT_0019d57d)[DAT_002f10ce._3_1_ * 0x4ef] = uVar3;
    uStack_2c = 0x5d427;
    FUN_000402e5();
  }
  else {
    uStack_2c = 0x5d43b;
    cVar4 = FUN_000eeb20();
    if (cVar4 != '\0') {
      uStack_2c = 0x5d453;
      FUN_000ddaf0();
    }
    bVar2 = false;
    iVar7 = 0;
    iVar8 = 0;
    local_24 = (uint)(byte)(&DAT_0019d0f4)[DAT_002f10ce._3_1_ * 0x4ef];
    local_28 = 0;
    iVar5 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar8) != 0) {
        (&DAT_0019d0d3)[iVar5] = (char)iVar7;
        if ((!bVar2) && (iVar7 == DAT_002f10ce._3_1_)) {
          bVar2 = true;
          DAT_002f10ce._3_1_ = (char)local_28;
        }
        local_28 = local_28 + 1;
        iVar5 = iVar5 + 0x4ef;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x24;
    } while (iVar7 < 5);
    uStack_2c = 0x5d4c7;
    FUN_000e6a10();
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0x5d4ef;
    FUN_0005ddee();
    uStack_34 = 0x5d503;
    cVar4 = FUN_000ee694();
    if (cVar4 != '\0') {
      uStack_34 = 0x5d51b;
      FUN_000ddaf0();
    }
    local_20 = 0;
    iVar5 = 0;
    iVar8 = 0;
    do {
      if ((*(int *)((int)&DAT_00335238 + iVar5) != 0) && ((&DAT_002e90bd)[iVar8] == '\n')) {
        (&DAT_0019d0f3)[local_20 * 0x4ef] = (undefined1)local_20;
        (&DAT_0019d0c8)[local_20 * 0x4ef] = (&DAT_0019d0c8)[local_20 * 0x4ef] | 1;
        if (*(short *)((int)&DAT_002e90c0 + iVar8) == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 5;
        }
        (&DAT_0019d57d)[local_20 * 0x4ef] = uVar3;
        (&DAT_0019d0f4)[local_20 * 0x4ef] = (&DAT_002e90be)[iVar8];
        uStack_34 = 0x5d561;
        FUN_000402e5();
        local_20 = local_20 + 1;
        uStack_34 = 0x5d56d;
        FUN_000e8ca8();
        iVar5 = extraout_ECX;
      }
      iVar5 = iVar5 + 0x24;
      iVar8 = iVar8 + 0x11;
    } while (iVar8 != 0x55);
    local_1c = 0;
    iVar5 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar5);
      if ((*pbVar1 & 1) != 0) {
        local_1c = local_1c + (uint)*(ushort *)(pbVar1 + 0xd) + (uint)*(ushort *)(pbVar1 + 0xf) +
                   (int)*(short *)(pbVar1 + 0x11);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != 0x2000);
    uStack_34 = 0x5d611;
    FUN_000e6a10();
    uStack_34 = 0;
    piVar9 = &uStack_38;
    uStack_38 = 0;
    FUN_0005ddee();
    iVar5 = (int)DAT_002f10ce._3_1_;
    (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar5 * 0x4ef] * 0x11] = (undefined1)local_1c;
    (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar5 * 0x4ef] * 0x11] =
         (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar5 * 0x4ef] * 0x11] + (char)DAT_002e8bf6;
    cVar4 = FUN_000ee694();
    if (cVar4 != '\0') {
      FUN_000ddaf0();
    }
    cVar4 = FUN_0005de00();
    if (cVar4 != '\0') {
      FUN_000ddaf0();
    }
    iVar8 = 0;
    iVar5 = 0;
    do {
      if (((iVar8 != DAT_002f10ce._3_1_) && (((&DAT_0019d0c8)[iVar5] & 1) != 0)) &&
         (iVar7 = FUN_0003308c(), iVar5 = extraout_ECX_00, iVar7 != 0)) {
        FUN_000dc184();
        FUN_000dc184();
        iVar5 = extraout_ECX_01;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x4ef;
    } while (iVar8 < 5);
  }
  if (DAT_00334a4c != 0) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      uVar6 = DAT_002e6ec6;
      if (((&DAT_0019d0c8)[iVar5] & 1) == 0) {
        for (; uVar6 = (&DAT_001ae9fc)[uVar6], DAT_001ae9fc < uVar6;
            uVar6 = (uint)*(ushort *)(uVar6 + 0x67)) {
          if (((&DAT_001acd79)[(uint)*(byte *)(uVar6 + 0x1a) * 0x1d] != '\0') &&
             (*(char *)(uVar6 + 6) == iVar8)) {
            *(undefined4 *)((int)piVar9 + -4) = 0x5d751;
            FUN_00069a12();
            iVar5 = extraout_ECX_02;
            break;
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x4ef;
    } while (iVar8 < 5);
  }
  *(undefined4 *)((int)piVar9 + -4) = 0x5d772;
  FUN_00040832();
  *(undefined4 *)((int)piVar9 + -4) = 0x5d777;
  FUN_00040992();
  if ((DAT_002e6f2d != '\0') && (DAT_002e6ff3 != '\0')) {
    *(undefined4 *)((int)piVar9 + -4) = 0x5d793;
    FUN_000618f5();
    DAT_002e8bf2 = 0;
  }
  *(undefined4 *)((int)piVar9 + -4) = 0x5d7ae;
  FUN_000e6a10();
  return;
}
```

### `packet_build_local_player_turn_packet` (`0x5d7b5` in `packet.cpp`)
- **Evidence**: Capture local player cursor, hand, and mode into turn Packet
```c
void FUN_0005d7b5(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
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
  
  bVar7 = 0;
  iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
  local_24 = (uint)*(ushort *)(&DAT_0019d510 + iVar2);
  local_3c = (uint)*(ushort *)(&DAT_0019d512 + iVar2);
  local_1c = 0;
  local_30 = (uint)*(ushort *)(&DAT_0019d50c + iVar2);
  local_2c = (uint)*(ushort *)(&DAT_0019d50e + iVar2);
  FUN_000270e0();
  FUN_00062238();
  for (iVar2 = 0;
      (iVar2 < 0x18ab &&
      ((((&DAT_0019d0c8)[iVar2] & 1) == 0 || (((&DAT_0019d0c8)[iVar2] & 0x40) != 0))));
      iVar2 = iVar2 + 0x4ef) {
    local_1c = local_1c + 1;
  }
  FUN_000f0f8c(s_MY_PLAYER__d_Host__d_00166266,(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef],local_1c)
  ;
  if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_1c) {
    local_38 = 0x151825;
    local_34 = &DAT_0019d0ac;
    iVar2 = 0;
    while (0 < local_38) {
      local_20 = local_38;
      if (0xa8c1 < local_38) {
        local_20 = 0xa8c1;
      }
      uVar4 = 0;
      iVar3 = 0;
      do {
        if ((((uVar4 != (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) &&
             (((&DAT_0019d0c8)[iVar3] & 1) != 0)) && (((&DAT_0019d0c8)[iVar3] & 0x40) == 0)) &&
           (cVar1 = FUN_000f3b50(), iVar3 = extraout_ECX, cVar1 != '\0')) {
          FUN_000e7714(&DAT_0019cbac,s_Unable_to_send_game_structure_pa_0016627c,iVar2,uVar4);
          FUN_000ddaf0();
          iVar3 = extraout_ECX_00;
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x4ef;
      } while ((int)uVar4 < 5);
      iVar2 = iVar2 + 1;
      local_34 = (undefined4 *)((int)local_34 + local_20);
      local_38 = local_38 - local_20;
      FUN_000623aa();
    }
  }
  else {
    puVar5 = (undefined4 *)&DAT_002e6f2c;
    puVar6 = local_104;
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_000e6a10();
    local_38 = 0x151825;
    iVar2 = 0;
    while (0 < local_38) {
      local_28 = local_38;
      if (0xa8c1 < local_38) {
        local_28 = 0xa8c1;
      }
      iVar3 = FUN_000f3ed8();
      if (iVar3 != extraout_ECX_01) {
        FUN_000e7714(&DAT_0019cbac,s_Unable_to_receive_game_structure_001662c7,iVar2,iVar3,
                     extraout_ECX_01);
        FUN_000ddaf0();
      }
      iVar2 = iVar2 + 1;
      local_38 = local_38 - local_28;
      FUN_000623aa();
    }
    FUN_000780df();
    puVar5 = local_104;
    puVar6 = (undefined4 *)&DAT_002e6f2c;
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  FUN_000622f1();
  FUN_0002ca74();
  DAT_0019d0b6 = DAT_0019d0b6 & 0xf9;
  return;
}
```

### `packet_init_level_replay_or_resync` (`0x5da11` in `packet.cpp`)
- **Evidence**: Re-initialize level state and reload packet stream on resync/replay
```c
void FUN_0005da11(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  
  FUN_000e6a10();
  FUN_000618f5();
  DAT_002e78e9 = DAT_002e6fd1;
  DAT_003d9885 = DAT_0019a29f;
  DAT_002e8bf2 = 0;
  FUN_000e7714(&DAT_0019cbac,s_Initialising_level_00166320,DAT_002e6fd1);
  FUN_000e7714(&DAT_0019cbac,s_Packet_Loading_Active__File_cont_00166333,DAT_002e6fdc);
  if (DAT_002e6fe5 != '\0') {
    FUN_000e7714(&DAT_0019cbac,s_Packet_Checksum_Active_00166362);
  }
  FUN_000e7714(&DAT_0019cbac,s_Fast_Forward_through__d_game_tur_00166379,DAT_002e6fe0);
  if (DAT_002e6fee != -1) {
    FUN_000e7714(&DAT_0019cbac,s_Packet_Quit_at__d_0016639c,DAT_002e6fee);
  }
  if ((DAT_002e6f2d != '\0') && (DAT_002e6fe6 != DAT_002e6fea)) {
    FUN_000e7714(&DAT_0019cbac,s_Logging_things__game_turns__d__>_001663ae,DAT_002e6fe6,DAT_002e6fea
                );
  }
  uVar1 = 1 << (DAT_002e6ff2 & 0x1f);
  DAT_002ebaf6 = 2;
  if (((DAT_002e6fd9 & uVar1) == 0) || ((DAT_002e6fda & uVar1) != 0)) {
    DAT_002f10ce._3_1_ = 0;
  }
  else {
    DAT_002f10ce._3_1_ = DAT_002e6ff2;
  }
  FUN_000404f7();
  DAT_002eb541 = '\0';
  local_14 = 0;
  iVar3 = 0;
  do {
    uVar2 = (uint)DAT_002e6fd9;
    uVar1 = 1 << ((byte)local_14 & 0x1f);
    (&DAT_0019d0c8)[iVar3] = (&DAT_0019d0c8)[iVar3] & 0xfe;
    (&DAT_0019d0c8)[iVar3] =
         (&DAT_0019d0c8)[iVar3] | (byte)((int)(uVar2 & uVar1) >> ((byte)local_14 & 0x1f)) & 1;
    if (((&DAT_0019d0c8)[iVar3] & 1) != 0) {
      (&DAT_0019d0f3)[iVar3] = (byte)local_14;
      uVar2 = (uint)DAT_002e6fda;
      (&DAT_0019d0c8)[iVar3] = (&DAT_0019d0c8)[iVar3] & 0xbf;
      (&DAT_0019d0c8)[iVar3] =
           (&DAT_0019d0c8)[iVar3] |
           ((byte)((int)(uVar1 & uVar2) >> ((byte)local_14 & 0x1f)) & 1) << 6;
      if (((&DAT_0019d0c8)[iVar3] & 0x40) == 0) {
        DAT_002eb541 = DAT_002eb541 + '\x01';
        (&DAT_0019d0f4)[iVar3] = 1;
        DAT_002ebaf6 = 5;
        FUN_000402e5();
      }
    }
    local_14 = local_14 + 1;
    iVar3 = iVar3 + 0x4ef;
  } while (local_14 < 5);
  if (DAT_002eb541 == '\x01') {
    DAT_002ebaf6 = 2;
  }
  if (DAT_002e6fdc < DAT_002e6fe0) {
    DAT_002e6fe0 = DAT_002e6fdc;
  }
  FUN_00040832();
  FUN_00040992();
  return;
}
```

### `packet_exchange_all_players_packets` (`0x5dc27` in `packet.cpp`)
- **Evidence**: Exchange per-turn Packet structs across peers via LbNetwork_Exchange
```c
void FUN_0005dc27(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  
  DAT_003d9885 = DAT_0019a29f;
  if (DAT_002ebaf6 != '\x02') {
    iVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar2) != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 0x24;
    } while (iVar2 != 0x90);
    if (((DAT_002e6f2d == '\0') || (DAT_002e6ff3 != '\0')) &&
       (cVar1 = FUN_000ee694(), iVar3 = extraout_ECX, cVar1 != '\0')) {
      FUN_000ddaf0();
      iVar3 = extraout_ECX_00;
    }
    iVar4 = 0;
    iVar2 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar2) != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 0x24;
    } while (iVar2 != 0x90);
    if (iVar3 != iVar4) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        if ((&DAT_00335238)[(uint)(byte)(&DAT_0019d0d3)[iVar3] * 9] == 0) {
          (&DAT_0019d0c8)[iVar3] = (&DAT_0019d0c8)[iVar3] | 0x40;
          FUN_00021527();
          iVar3 = extraout_EDX;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x4ef;
      } while (iVar2 < 4);
    }
  }
  cVar1 = FUN_0005de00();
  if (cVar1 == '\x01') {
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfb | 2;
  }
  else if (cVar1 == '\x02') {
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfd | 4;
  }
  else if (cVar1 == '\x03') {
    DAT_0019d0b6 = DAT_0019d0b6 | 6;
  }
  else {
    DAT_0019d0b6 = DAT_0019d0b6 & 0xf9;
  }
  if (DAT_002e6f2c != '\0') {
    FUN_00061883();
  }
  iVar3 = 0;
  iVar2 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar2] & 1) != 0) && (((&DAT_0019d0c8)[iVar2] & 0x40) == 0)) {
      FUN_0005de7c();
      iVar3 = extraout_EDX_00;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x4ef;
  } while (iVar3 < 5);
  FUN_000e6a10();
  if (((DAT_0019d0b6 & 2) != 0) || ((DAT_0019d0b6 & 4) != 0)) {
    FUN_000e7714(&DAT_0019cbac,s_OUT_OF_SYNC__GameTurn__d__001663f7,DAT_002e8bee);
    FUN_000623aa();
    FUN_0005d7b5();
  }
  return;
}
```

### `set_packet_control_flag` (`0x5dde9` in `packet.cpp`)
- **Evidence**: OR control bitflag into pkt->control_flags (+0x0e)
```c
void FUN_0005dde9(void)

{
  int in_EAX;
  ushort in_DX;
  
  *(ushort *)(in_EAX + 0xe) = *(ushort *)(in_EAX + 0xe) | in_DX;
  return;
}
```

### `set_packet_action` (`0x5ddee` in `packet.cpp`)
- **Evidence**: Populate pkt->action (+0x05), actn_par1 (+0x06), and actn_par2 (+0x08)
```c
void FUN_0005ddee(void)

{
  int in_EAX;
  undefined2 in_CX;
  undefined1 in_DL;
  undefined2 unaff_BX;
  
  *(undefined1 *)(in_EAX + 5) = in_DL;
  *(undefined2 *)(in_EAX + 6) = unaff_BX;
  *(undefined2 *)(in_EAX + 8) = in_CX;
  return;
}
```

### `packet_find_next_active_player` (`0x5de00` in `packet.cpp`)
- **Evidence**: Find next active non-spectator player index in g_players
```c
undefined8 FUN_0005de00(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined1 uVar3;
  
  uVar2 = 0xffffffff;
  uVar3 = 0;
  iVar1 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar1] & 1) != 0) && (((&DAT_0019d0c8)[iVar1] & 0x40) == 0)) {
      if (uVar2 == 0xffffffff) {
        uVar2 = (uint)(byte)(&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar1] * 0x11];
      }
      else if (uVar2 != (byte)(&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar1] * 0x11]) {
        uVar3 = 1;
      }
    }
    iVar1 = iVar1 + 0x4ef;
  } while (iVar1 != 0x18ab);
  return CONCAT44(in_EDX,CONCAT31(0x18,uVar3));
}
```

### `process_players_packet_control_flags` (`0x5de7c` in `packet.cpp`)
- **Evidence**: Apply incoming Packet.player_flags and control_flags to PlayerInfo
```c
undefined8 FUN_0005de7c(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  
  iVar2 = in_EAX * 0x4ef;
  iVar3 = (uint)(byte)(&DAT_0019d0d3)[iVar2] * 0x11;
  (&DAT_0019d0cc)[iVar2] = ((&DAT_002e90c8)[iVar3] & 0x3f) >> 5;
  (&DAT_0019d0cd)[iVar2] = ((&DAT_002e90c8)[iVar3] & 0x7f) >> 6;
  if ((((&DAT_0019d0c8)[iVar2] & 4) != 0) && ((&DAT_002e90bd)[iVar3] == 'y')) {
    uVar4 = FUN_0005f4d9();
    return CONCAT44(in_EDX,uVar4);
  }
  uVar5 = FUN_0005e01e();
  if ((char)uVar5 == '\0') {
    bVar1 = (&DAT_0019d51a)[iVar2] - 1;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if (bVar1 < 6) {
      uVar5 = (uint)bVar1;
      switch(uVar5) {
      case 0:
        FUN_0005f163();
        uVar4 = FUN_0005eb8d();
        return CONCAT44(in_EDX,uVar4);
      case 1:
        FUN_0005ec71();
        uVar4 = FUN_0005f049();
        return CONCAT44(in_EDX,uVar4);
      case 2:
        uVar4 = FUN_0005f001();
        return CONCAT44(in_EDX,uVar4);
      case 3:
        FUN_0005f3ad();
        return CONCAT44(in_EDX,extraout_EDX);
      }
    }
  }
  return CONCAT44(in_EDX,uVar5);
}
```

### `packet_vio_table_data_block` (`0x5df2f` in `packet.cpp`)
- **Evidence**: Embedded data/thunk block in packet.cpp
```c
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0005df8a) overlaps instruction at (ram,0x0005df85)
    */
/* WARNING: Removing unreachable block (ram,0x0005df79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005df2f(void)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  undefined1 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  char in_AL;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  char *in_ECX;
  byte *pbVar15;
  byte bVar16;
  char extraout_DL;
  undefined2 uVar17;
  int in_EDX;
  byte bVar18;
  char cVar20;
  char *unaff_EBX;
  undefined3 uVar21;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  byte *pbVar22;
  undefined4 *unaff_EDI;
  bool in_CF;
  byte in_AF;
  bool in_ZF;
  bool in_SF;
  byte bVar4;
  byte bVar8;
  char *pcVar19;
  
  if (((!in_SF) && (!in_CF && !in_ZF)) && (!in_ZF)) {
    if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar22 = unaff_ESI + 1;
    uVar17 = (undefined2)in_EDX;
    out(*unaff_ESI,uVar17);
    uVar6 = in(uVar17);
    *unaff_EDI = uVar6;
    uVar5 = in(uVar17);
    *(undefined1 *)(unaff_EDI + 1) = uVar5;
    puVar1 = (ushort *)(in_EDX + 0x61);
    *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
    pbVar11 = _DAT_00000070;
    uVar6 = _DAT_00000068;
    _DAT_00000068 = 0x6c;
    _DAT_00000064 = uVar6;
    _DAT_00000060 = _DAT_0000006c;
    _DAT_0000005c = _DAT_00000070;
    _DAT_00000058 = _DAT_00000074;
    bVar9 = 9 < ((byte)_DAT_00000074 & 0xf) | in_AF;
    uVar12 = CONCAT31((int3)((uint)_DAT_00000074 >> 8),(byte)_DAT_00000074 + bVar9 * '\x06') &
             0xffffff0f;
    uVar10 = (uint)_DAT_00000074 >> 8;
    bVar7 = *_DAT_00000070;
    bVar18 = (byte)uVar6;
    bVar8 = *_DAT_00000070;
    uVar21 = (undefined3)((uint)uVar6 >> 8);
    pcVar19 = (char *)CONCAT31(uVar21,bVar18 - bVar8);
    bVar3 = *pbVar22;
    bVar16 = (byte)_DAT_0000006c;
    bVar4 = *pbVar22;
    _DAT_0000006c = unaff_EBP;
    _DAT_00000070 = pbVar22;
    _DAT_00000074 = (undefined4 *)((int)unaff_EDI + 5);
    *pbVar22 = (bVar4 - bVar16) - (bVar18 < bVar7);
    iVar13 = (CONCAT22((short)(uVar12 >> 0x10),CONCAT11((char)uVar10 + bVar9,(char)uVar12)) &
             0x1b1c1d24) + 0x50d0e14 +
             (uint)(bVar3 < bVar16 || (byte)(bVar4 - bVar16) < (bVar18 < bVar7));
    pcVar14 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x03');
    piVar2 = (int *)(unaff_ESI + 0x6c0005ec);
    *piVar2 = (int)(pcVar14 + *piVar2);
    pbVar15 = pbVar11 + -1;
    cVar20 = (char)((uint)uVar6 >> 8);
    if (pbVar15 == (byte *)0x0 || *piVar2 == 0) {
      *pcVar14 = *pcVar14 + bVar16;
      pbVar15 = pbVar11 + -2;
      if (pbVar15 == (byte *)0x0 || *pcVar14 != '\0') {
        pcVar14[-0x1d] = pcVar14[-0x1d] + (char)pbVar15;
        pcVar14 = pcVar14 + 0x5e1be00;
        pcVar19 = (char *)CONCAT31(uVar21,(bVar18 - bVar8) + cVar20);
      }
      else {
        pbVar22 = (byte *)0xfb0005e1;
      }
    }
    else {
      pcVar14 = pcVar14 + -1;
      if (pbVar15 != (byte *)0x0) {
        unaff_ESI[-0x4fffa1e] = unaff_ESI[-0x4fffa1e] + cVar20;
      }
    }
    pbVar15 = pbVar15 + -1;
    cVar20 = (char)pcVar19;
    if (pbVar15 == (byte *)0x0) {
      *pcVar19 = *pcVar19 + (char)pcVar14;
    }
    else if (pbVar15 == (byte *)0x0) {
      *_DAT_00000058 = *(undefined4 *)pbVar22;
      pcVar19 = &DAT_0000005c;
    }
    else {
      pcVar19[0x2f0005e3] = pcVar19[0x2f0005e3] + (char)pbVar15;
      pcVar19 = &DAT_0000005c;
    }
    *(char *)(unaff_EBP + -0x5afffa1b) = *(char *)(unaff_EBP + -0x5afffa1b) + cVar20;
    pcVar19[-0xffffffff00000004] = -0x70;
    pcVar19[-0xffffffff00000003] = -0x21;
    pcVar19[-0xffffffff00000002] = '\x05';
    pcVar19[-0xffffffff00000001] = '\0';
    func_0xe5dbdf95();
    DAT_280005e9 = DAT_280005e9 + extraout_DL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_ECX = *in_ECX + in_AL;
  iVar13 = in(5);
  *(char *)((int)unaff_EDI + -0x1d) = *(char *)((int)unaff_EDI + -0x1d) + (char)in_ECX;
  *unaff_EBX = *unaff_EBX + (char)in_EDX;
  out(5,(char)(iVar13 + 0x5e96900));
  *(char *)(iVar13 + 0x29e96ee6) = *(char *)(iVar13 + 0x29e96ee6) + (char)unaff_EBX;
  out(5,iVar13 + 0x5e96900);
  cRamec0005ea = cRamec0005ea + (char)in_ECX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
```

### `process_all_players_turn_packets` (`0x5e01e` in `packet.cpp`)
- **Evidence**: Main per-turn dispatcher executing Packet actions for all active players
```c
void FUN_0005e01e(void)

{
  code cVar1;
  int in_EAX;
  int iVar2;
  code *pcVar3;
  
  iVar2 = 0x30;
  pcVar3 = FUN_0005df2f;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while ((code)(&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11] != cVar1);
                    /* WARNING: Could not recover jumptable at 0x0005e064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x5df5e))();
  return;
}
```

### `process_players_dungeon_control_packet` (`0x5eb8d` in `packet.cpp`)
- **Evidence**: Execute dungeon-view Packet action for a player
```c
void FUN_0005eb8d(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11];
  if (bVar1 < 0x5f) {
    if (0x28 < bVar1) {
      if (bVar1 < 0x2a) {
        FUN_0004efd4();
        return;
      }
      if (bVar1 == 0x5d) {
        FUN_000708fa();
        return;
      }
    }
    return;
  }
  if (bVar1 < 0x60) {
    FUN_00070a3c();
    return;
  }
  if (0x60 < bVar1) {
    if (bVar1 != 0x6b) {
      return;
    }
    FUN_00021527();
    return;
  }
  FUN_00070ac6();
  return;
}
```

### `process_players_creature_control_packet` (`0x5ec71` in `packet.cpp`)
- **Evidence**: Execute first-person creature possession Packet movement & instance actions
```c
void FUN_0005ec71(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uStack_2c;
  int local_28 [2];
  undefined1 *local_20;
  undefined *local_1c;
  
  iVar4 = in_EAX * 0x4ef;
  local_20 = &DAT_0019d0c8 + iVar4;
  iVar5 = (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11;
  iVar4 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar4)];
  local_28[1] = 1;
  local_1c = &DAT_002e90b8 + iVar5;
  if ((((*(char *)(iVar4 + 0x1f) == '\x05') &&
       (iVar1 = (&DAT_001b0a00)[*(ushort *)(iVar4 + 100)], -1 < *(short *)(iVar4 + 0x5e))) &&
      (*(char *)(iVar1 + 0xab) == '\0')) && (*(char *)(iVar4 + 7) != 'C')) {
    uVar8 = (uint)*(ushort *)(iVar1 + 0xc4);
    if (0x100 < uVar8) {
      uVar8 = 0x100;
    }
    uVar7 = (undefined2)uVar8;
    sVar3 = (short)((int)uVar8 >> 2);
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 4) != 0) {
      sVar2 = *(short *)(iVar1 + 200) + sVar3;
      *(short *)(iVar1 + 200) = sVar2;
      if ((int)uVar8 < (int)sVar2) {
        *(undefined2 *)(iVar1 + 200) = uVar7;
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x40;
      local_28[0] = (int)uVar8 >> 2;
    }
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 8) != 0) {
      sVar2 = *(short *)(iVar1 + 200) - sVar3;
      *(short *)(iVar1 + 200) = sVar2;
      if ((int)sVar2 < (int)-uVar8) {
        *(undefined2 *)(iVar1 + 200) = uVar7;
        *(short *)(iVar1 + 200) = -*(short *)(iVar1 + 200);
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x40;
    }
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 0x10) != 0) {
      sVar2 = *(short *)(iVar1 + 0xca) + sVar3;
      *(short *)(iVar1 + 0xca) = sVar2;
      if ((int)sVar2 < (int)-uVar8) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
        *(short *)(iVar1 + 0xca) = -*(short *)(iVar1 + 0xca);
      }
      else if ((int)uVar8 < (int)sVar2) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x80;
    }
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 0x20) != 0) {
      sVar3 = *(short *)(iVar1 + 0xca) - sVar3;
      *(short *)(iVar1 + 0xca) = sVar3;
      if ((int)sVar3 < (int)-uVar8) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
        *(short *)(iVar1 + 0xca) = -*(short *)(iVar1 + 0xca);
      }
      else if ((int)uVar8 < (int)sVar3) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x80;
    }
    piVar9 = local_28;
    if (((*(byte *)((int)&DAT_002e90c6 + iVar5 + 1) & 0x10) != 0) &&
       (piVar9 = local_28, *(char *)(iVar1 + 0xd2) == '\0')) {
      uStack_2c = 0x5ee42;
      iVar5 = FUN_00049e95();
      piVar9 = local_28;
      if (iVar5 != 0) {
        uStack_2c = 0x5ee54;
        iVar5 = FUN_00049ea9();
        piVar9 = local_28;
        if (iVar5 != 0) {
          piVar9 = &uStack_2c;
          uStack_2c = 0;
          FUN_000e3e78();
          FUN_00049bfc();
        }
      }
    }
    if ((((local_1c[0xf] & 4) != 0) &&
        ((&DAT_0018ee05)[(uint)*(byte *)(iVar1 + 0x1e8) * 0x2a] != '\0')) &&
       ((*(char *)(iVar1 + 0xd2) == '\0' || (*(char *)(iVar1 + 0xd2) == *(char *)(iVar1 + 0x1e8)))))
    {
      *(undefined4 *)((int)piVar9 + -4) = 0;
      *(undefined4 *)((int)piVar9 + -8) = 0x5eedb;
      FUN_000e3e78();
      *(undefined4 *)((int)piVar9 + -8) = 0x5eeeb;
      FUN_00049bfc();
    }
    uVar8 = (uint)*(ushort *)(local_1c + 0xc);
    if (uVar8 < 5) {
      uVar8 = 5;
    }
    if (0xfa < uVar8) {
      uVar8 = 0xfa;
    }
    iVar5 = (int)(*(ushort *)(local_1c + 10) - 0x7f) / (int)(uint)(byte)local_20[0x14];
    if (iVar5 != 0) {
      if (iVar5 < -0x20) {
        iVar5 = -0x20;
      }
      else if (0x20 < iVar5) {
        iVar5 = 0x20;
      }
      iVar6 = iVar5 * 0x38 >> 0x1f;
      *(short *)(iVar1 + 0x6c) =
           *(short *)(iVar1 + 0x6c) +
           (short)((int)((iVar5 * 0x38 + iVar6 * -0x20) - (uint)(iVar6 << 4 < 0)) >> 5) *
           (short)local_28[1];
    }
    iVar5 = (uint)*(byte *)(iVar4 + 0x1a) * 0xe6;
    if ((int)*(short *)(iVar1 + 0x6c) < (int)-(uint)*(ushort *)(&DAT_002e9160 + iVar5)) {
      *(undefined2 *)(iVar1 + 0x6c) = *(undefined2 *)(&DAT_002e9160 + iVar5);
      *(short *)(iVar1 + 0x6c) = -*(short *)(iVar1 + 0x6c);
    }
    else if ((int)(uint)*(ushort *)(&DAT_002e9160 + iVar5) < (int)*(short *)(iVar1 + 0x6c)) {
      *(undefined2 *)(iVar1 + 0x6c) = *(undefined2 *)(&DAT_002e9160 + iVar5);
    }
    *(ushort *)(iVar4 + 0x52) = *(short *)(iVar4 + 0x52) + *(short *)(iVar1 + 0x6c) & 0x7ff;
    *(ushort *)(iVar4 + 0x54) = (ushort)((int)((uVar8 - 0x7f) * 0xe3) / 0x7f) & 0x7ff;
    *(short *)(iVar1 + 0xcc) =
         (short)((*(short *)(iVar1 + 0x6c) * 0xaa) /
                (int)(uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(iVar4 + 0x1a) * 0xe6));
    if (*(short *)(iVar1 + 0x6c) != 0) {
      iVar4 = *(short *)(iVar1 + 0x6c) * 4;
      iVar5 = iVar4 >> 0x1f;
      *(short *)(iVar1 + 0x6c) = (short)((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
    }
  }
  return;
}
```

### `process_players_spectator_packet` (`0x5f001` in `packet.cpp`)
- **Evidence**: Handle spectator view packet toggle
```c
void FUN_0005f001(void)

{
  int in_EAX;
  
  if ((&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11] != ' ') {
    return;
  }
  *(undefined2 *)(&DAT_0019d506 + in_EAX * 0x4ef) =
       *(undefined2 *)(&DAT_002e90be + (uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11);
  FUN_00049eff();
  return;
}
```

### `process_players_map_view_packet` (`0x5f049` in `packet.cpp`)
- **Evidence**: Handle parchment map view zoom/exit packet actions
```c
void FUN_0005f049(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = in_EAX * 0x4ef;
  iVar3 = (uint)(byte)(&DAT_0019d0d3)[iVar2] * 0x11;
  bVar1 = (&DAT_002e90bd)[iVar3];
  if (0x20 < bVar1) {
    if (bVar1 < 0x22) {
      *(undefined2 *)(&DAT_0019d506 + iVar2) = *(undefined2 *)(&DAT_002e90be + iVar3);
      FUN_00049eff();
    }
    else if (bVar1 == 0x27) {
      if ((&DAT_0018edeb)[*(short *)(&DAT_002e90be + iVar3) * 0x2a] == '\0') {
        *(undefined1 *)
         ((&DAT_001b0a00)
          [*(ushort *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar2)] + 100)] + 0x1e8) =
             (&DAT_002e90be)[iVar3];
      }
      else if (((*(char *)((&DAT_001b0a00)
                           [*(ushort *)
                             ((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar2)] + 100)] +
                          0xd2) == '\0') && (iVar3 = FUN_00049e95(), iVar3 != 0)) &&
              (iVar3 = FUN_00049ea9(), iVar3 != 0)) {
        FUN_000e3e78(0);
        FUN_00049bfc();
        if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == &DAT_0019d0c8 + iVar2) {
          FUN_0005345d();
        }
      }
    }
  }
  return;
}
```

### `process_players_global_packet_action` (`0x5f163` in `packet.cpp`)
- **Evidence**: Execute global hotkeys, pause, message, and view-mode Packet actions
```c
void FUN_0005f163(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  
  puVar4 = &DAT_0019d0c8 + in_EAX * 0x4ef;
  iVar3 = (uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 4) != 0) {
    FUN_00077ad0();
    puVar4 = extraout_ECX;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 8) != 0) {
    FUN_00077ad0();
    puVar4 = extraout_ECX_00;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x10) != 0) {
    FUN_00077b0f();
    puVar4 = extraout_ECX_01;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x20) != 0) {
    FUN_00077b0f();
    puVar4 = extraout_ECX_02;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 2) != 0) {
    iVar2 = *(int *)(puVar4 + 0x38);
    bVar1 = *(byte *)(iVar2 + 6);
    if (1 < bVar1) {
      if (bVar1 < 3) {
        FUN_00077b4e();
        puVar4 = extraout_ECX_03;
      }
      else if (bVar1 == 5) {
        *(uint *)(iVar2 + 7) = *(int *)(iVar2 + 7) + 0x200U & 0x7ff;
      }
    }
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 1) != 0) {
    iVar2 = *(int *)(puVar4 + 0x38);
    bVar1 = *(byte *)(iVar2 + 6);
    if (1 < bVar1) {
      if (bVar1 < 3) {
        FUN_00077b4e();
        puVar4 = extraout_ECX_04;
      }
      else if (bVar1 == 5) {
        *(uint *)(iVar2 + 7) = *(int *)(iVar2 + 7) + 0x600U & 0x7ff;
      }
    }
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x40) != 0) {
    if (*(char *)(*(int *)(puVar4 + 0x38) + 6) == '\x02') {
      FUN_00077f16();
      FUN_000780a3();
      FUN_000780c2();
      puVar4 = extraout_ECX_05;
    }
    else {
      FUN_00077f16();
      puVar4 = extraout_ECX_06;
    }
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x80) != 0) {
    if (*(char *)(*(int *)(puVar4 + 0x38) + 6) == '\x02') {
      FUN_00077fdc();
      FUN_000780a3();
      FUN_000780c2();
    }
    else {
      FUN_00077fdc();
    }
  }
  FUN_0005f6c5();
  FUN_0005f438();
  return;
}
```

### `process_players_creature_passenger_packet` (`0x5f3ad` in `packet.cpp`)
- **Evidence**: Update camera position and actions while riding a possessed creature
```c
void FUN_0005f3ad(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  
  iVar2 = in_EAX * 0x4ef;
  iVar1 = (*(ushort *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[iVar2] * 0x11) - 0x96) * 3;
  iVar3 = iVar1 >> 0x1f;
  FUN_00061751();
  *(short *)(&DAT_0019d158 + iVar2) =
       ((short)((int)((iVar1 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2) + 1) * 0x100 + 0x80;
  *(short *)(&DAT_0019d15a + iVar2) = (short)(extraout_ECX << 8) + 0x80;
  FUN_0005f438();
  return;
}
```

### `packet_update_player_zoom_box` (`0x5f438` in `packet.cpp`)
- **Evidence**: Update player camera zoom/bounding box from packet control flags
```c
void FUN_0005f438(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined1 *extraout_EDX;
  byte bVar2;
  undefined2 local_18 [2];
  
  bVar2 = 0;
  if (*(short *)(in_EAX + 0x460) != 0) {
    if ((*(byte *)((int)&DAT_002e90c6 +
                  (uint)(byte)(&DAT_0019d0d3)[(uint)*(byte *)(in_EAX + 0x2b) * 0x4ef] * 0x11 + 1) &
        0x80) == 0) {
      FUN_000ad66c();
    }
    else {
      uVar1 = *(undefined4 *)
               (&DAT_002e90c2 +
               (uint)(byte)(&DAT_0019d0d3)[(uint)*(byte *)(in_EAX + 0x2b) * 0x4ef] * 0x11);
      local_18[0] = FUN_000b3788();
      if (extraout_EDX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
        DAT_002e90b2 = uVar1;
        (&DAT_002e90b6)[(uint)bVar2 * -4] = local_18[(uint)bVar2 * -4];
      }
      FUN_000ad54c();
      FUN_000acdfc();
    }
  }
  return;
}
```

### `packet_check_thing_interaction_valid` (`0x5f4d9` in `packet.cpp`)
- **Evidence**: Verify whether player can interact with target Thing in packet
```c
void FUN_0005f4d9(void)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  char cVar3;
  ulonglong uVar4;
  
  if (-1 < *(short *)(&DAT_002e90be +
                     (uint)(byte)(&DAT_0019d0d3)[(uint)*(byte *)(in_EAX + 0x2b) * 0x4ef] * 0x11)) {
    uVar4 = FUN_000efdb4();
    iVar2 = (int)uVar4;
    if (extraout_ECX == 0xe) {
      if (iVar2 != 0) {
        *(undefined1 *)(in_EAX + 0x462 + iVar2) = 0;
        return;
      }
    }
    else {
      cVar3 = (char)(uVar4 >> 0x20);
      if ((((uVar4 & 0x8000000000) == 0) &&
          (((('`' < cVar3 && (cVar3 < '{')) || (('@' < cVar3 && (cVar3 < '[')))) ||
           ((('/' < cVar3 && (cVar3 < ':')) || (cVar3 == ' ')))))) && (iVar2 < 0x3e)) {
        uVar1 = FUN_000f43c7();
        *(undefined1 *)(iVar2 + 0x464 + in_EAX) = 0;
        *(undefined1 *)(iVar2 + 0x463 + in_EAX) = uVar1;
      }
    }
  }
  return;
}
```

### `packet_can_player_afford_room_or_trap` (`0x5f577` in `packet.cpp`)
- **Evidence**: Check if player gold covers cost of room/trap kind
```c
uint FUN_0005f577(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  byte in_DL;
  int unaff_EBX;
  int iVar3;
  
  uVar2 = in_EAX + 1U >> 2;
  if (7 < uVar2) {
    uVar2 = 8;
  }
  if (*(int *)(&DAT_002eae11 + uVar2 * 4 + (uint)in_DL * 0x4c) <= unaff_EBX) {
    return in_EAX + 1U;
  }
  uVar2 = in_EAX + 1U >> 2;
  if (7 < uVar2) {
    uVar2 = 8;
  }
  while( true ) {
    cVar1 = (char)uVar2;
    iVar3 = cVar1 * 4;
    if (*(int *)(&DAT_002eae11 + iVar3 + (uint)in_DL * 0x4c) <= unaff_EBX) break;
    uVar2 = (uint)(byte)(cVar1 - 1);
  }
  if (cVar1 < 0) {
    return 0;
  }
  return iVar3 + 1;
}
```

### `packet_is_subtile_revealed_for_player` (`0x5f5db` in `packet.cpp`)
- **Evidence**: Check if map subtile (x, y) is revealed for player bitmask
```c
uint FUN_0005f5db(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  uint unaff_EBX;
  
  if ((*(uint *)((int)&DAT_00279203 + (in_EDX * 0x100 + in_EAX) * 5 + 1) >> 0x1c &
      1 << ((byte)unaff_EBX & 0x1f)) != 0) {
    iVar1 = ((&DAT_0019033b)[in_EAX] + (&DAT_0019033b)[in_EDX] * 0x55) * 6;
    uVar2 = (uint)(byte)(&DAT_002d33c5)[iVar1];
    if (((0x29 < uVar2) && (uVar2 < 0x30)) && (((&DAT_002d33ca)[iVar1] & 7) == unaff_EBX)) {
      return (&DAT_002d33ca)[iVar1] & 7 ^ unaff_EBX;
    }
    if ((*(uint *)(&DAT_001921c6 + uVar2 * 0x16) & 0x29) == 0) {
      return 0;
    }
  }
  return 1;
}
```

### `process_players_dungeon_command_packet` (`0x5f6c5` in `packet.cpp`)
- **Evidence**: Master switch executing dungeon build, dig, slap, pickup, drop, and spell Packet commands
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005f6c5(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  uint in_EAX;
  int iVar6;
  int iVar7;
  uint uVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  uint extraout_EDX;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
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
  
  bVar3 = 0;
  puVar10 = &local_54;
  iVar6 = in_EAX * 0x4ef;
  local_24 = &DAT_0019d0c8 + iVar6;
  iVar7 = (uint)(byte)(&DAT_0019d0d3)[iVar6] * 0x11;
  local_48 = &DAT_002e90b8 + iVar7;
  (&DAT_0019d56c)[iVar6] = 1;
  local_28 = 0;
  *(undefined4 *)(&DAT_0034d208 + in_EAX * 4) = 0;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar7 + 1) & 0x40) != 0) {
    return;
  }
  local_54 = in_EAX;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar7 + 1) & 4) == 0) {
    if ((*(byte *)((int)&DAT_002e90c6 + iVar7 + 1) & 0x10) == 0) {
      *(undefined4 *)(&DAT_0019d59a + iVar6) = 0;
    }
  }
  else {
    bVar1 = (&DAT_0019d51b)[iVar6];
    if (bVar1 < 0x11) {
      if (bVar1 < 7) {
        if (bVar1 == 6) {
          if ((&DAT_002e0e0d)[(uint)(byte)(&DAT_0019d0f3)[iVar6] * 0x542] == 0) goto LAB_0005f787;
          iVar6 = (uint)(byte)(&DAT_002e0e0c)[(uint)(byte)(&DAT_0019d0f3)[iVar6] * 0x1508] << 2;
          goto LAB_0005f795;
        }
      }
      else if ((bVar1 < 8) || (bVar1 == 8)) goto LAB_0005f787;
LAB_0005f8bd:
      *(int *)(&DAT_0019d59a + iVar6) = *(int *)(&DAT_0019d59a + iVar6) + 1;
    }
    else {
      if (0x11 < bVar1) {
        if (bVar1 < 0x14) {
          if (bVar1 != 0x13) goto LAB_0005f8bd;
        }
        else if (((0x14 < bVar1) && (0x15 < bVar1)) && (bVar1 != 0x16)) goto LAB_0005f8bd;
      }
LAB_0005f787:
      uStack_58 = 0x5f792;
      iVar6 = FUN_0005f577();
LAB_0005f795:
      *(int *)(local_24 + 0x4d2) = iVar6;
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
    if (*(int *)(&DAT_0034d1f4 + local_54 * 4) < 5) {
      *(undefined4 *)(&DAT_0034d208 + local_54 * 4) = 1;
    }
    *(undefined4 *)(&DAT_0034d1f4 + local_54 * 4) = 0;
  }
  if ((((local_48[0xf] & 4) == 0) && ((local_48[0xf] & 1) == 0)) &&
     (*(int *)(&DAT_0034d1f4 + local_54 * 4) < 0x7fffffff)) {
    *(int *)(&DAT_0034d1f4 + local_54 * 4) = *(int *)(&DAT_0034d1f4 + local_54 * 4) + 1;
  }
  local_24[0x35] = 0;
  local_24[0x36] = 0;
  puVar9 = &local_54;
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
      uVar8 = FUN_00085598();
      if (DAT_001ae9fc < uVar8) {
        if (*(short *)(local_24 + 0x43a) == 0) {
          uStack_58 = 0x5fa2d;
          FUN_00061bde();
          uVar8 = extraout_EDX;
        }
        *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
      }
      puVar9 = &local_54;
      if (*(short *)(&DAT_002e05bc + local_54 * 0x1508) != 0) {
        if (*(short *)(local_24 + 0x43a) == 0) {
          uStack_58 = 0x5fa63;
          FUN_00061bde();
        }
        local_34 = (uint)(*(char *)((&DAT_001ae9fc)
                                    [*(ushort *)(&DAT_002e05bc + (uint)local_24[0x2b] * 0x1508)] +
                                   0x1a) == '\x17');
        local_44 = (uint)(byte)local_48[0xd];
        uStack_58 = 0x5faa7;
        iVar6 = FUN_000dc19c();
        if (iVar6 == 0) {
          uStack_58 = 0x5fac5;
          iVar6 = FUN_0005f5db();
          if (iVar6 != 0) {
            local_24[3] = local_24[3] | 2;
            local_44 = (uint)(byte)local_48[0xb];
            uStack_58 = 0x5fb21;
            FUN_0008f320();
            puVar9 = &local_54;
            goto LAB_0005fb21;
          }
        }
        uStack_58 = (uint)local_24[0x4a4];
        FUN_0008fd14();
        puVar9 = &uStack_58;
      }
LAB_0005fb21:
      if (((*(short *)(local_24 + 0x43a) != 0) && (bVar3 = local_24[0x4b0], bVar3 != 1)) &&
         ((bVar3 != 2 && ((bVar3 != 3 && (bVar3 != 4)))))) {
        if ((*(short *)(local_24 + 0x35) == 0) &&
           (*(short *)(&DAT_002e05bc + local_54 * 0x1508) != 0)) {
          if (*(char *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x1f) ==
              '\x01') {
            *(undefined4 *)((int)puVar9 + -4) = 0x5fbdb;
            FUN_000c57a4();
          }
          *(undefined4 *)((int)puVar9 + -4) = 0x5fbfd;
          FUN_00061ca3();
          *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) =
               *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) &
               0xfe;
        }
        else {
          *(undefined4 *)((int)puVar9 + -4) = 0x5fb8c;
          FUN_00061ca3();
          if (*(short *)(&DAT_002e05bc + local_54 * 0x1508) != 0) {
            *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) =
                 *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) |
                 1;
          }
        }
      }
    }
    else {
      puVar9 = &local_54;
      if ((*(short *)(local_24 + 0x43a) != 0) && (puVar9 = &local_54, local_24[0x4b0] != 1)) {
        uStack_58 = 0x5fc49;
        FUN_00072af4();
        local_24[0x43a] = 0;
        local_24[0x43b] = 0;
        puVar9 = &local_54;
      }
    }
    if ((local_48[0xf] & 0x80) != 0) {
      if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
        *(undefined4 *)((int)puVar9 + -4) = 0x5fc7e;
        cVar2 = FUN_00057f6b();
        if ((cVar2 == '\0') && (local_24[0x454] == 1)) {
          local_44 = (uint)(byte)local_48[0xd];
          *(undefined4 *)((int)puVar9 + -4) = 0x5fccb;
          FUN_0008f320();
        }
      }
      if ((local_48[0xf] & 1) != 0) {
        *(ushort *)(local_24 + 0x4ab) = (ushort)(byte)local_48[0xb];
        bVar3 = local_48[0xd];
        local_24[0x4af] = 1;
        *(ushort *)(local_24 + 0x4ad) = (ushort)bVar3;
        bVar3 = local_24[0x454];
        local_24[0x455] = bVar3;
        if (bVar3 < 2) {
          if (bVar3 == 1) {
            *(undefined4 *)((int)puVar9 + -4) = 0x5fd02;
            iVar6 = FUN_000401aa();
            *local_24 = *local_24 & 0xdf;
LAB_0005fd10:
            *local_24 = *local_24 | (iVar6 != -1) << 5;
          }
        }
        else if (bVar3 < 3) {
          *(undefined4 *)((int)puVar9 + -4) = 0x5fd84;
          iVar6 = FUN_00022b3a();
          if (iVar6 != 0) {
            if (*(char *)(iVar6 + 0x18) == '\0') {
              *(undefined4 *)((int)puVar9 + -4) = 0x5fd9a;
              FUN_00023042();
            }
            else {
              *(undefined4 *)((int)puVar9 + -4) = 0x5fd93;
              FUN_000230d3();
            }
          }
        }
        else if ((bVar3 == 3) && (*(short *)(local_24 + 0x35) == 0)) {
          *(undefined4 *)((int)puVar9 + -4) = 0x5fd5a;
          iVar6 = FUN_000401aa();
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
        *(undefined4 *)((int)puVar9 + -4) = 0x5fe6d;
        iVar6 = FUN_000401aa();
        *local_24 = *local_24 & 0xdf;
        *local_24 = *local_24 | (iVar6 != -1) << 5;
      }
      if (local_24[0x4af] != 0) {
        if (local_24[0x455] == local_24[0x454]) {
          bVar3 = local_24[0x455];
          if (bVar3 < 2) {
            if (bVar3 == 1) {
              if ((*local_24 & 0x20) != 0) goto LAB_0005feb9;
              if (*(int *)(&DAT_002e1418 + (uint)local_24[0x2b] * 0x1508) == 300) goto LAB_0005ff07;
LAB_0005fef5:
              *(undefined4 *)((int)puVar9 + -4) = 0x5ff02;
              FUN_0001458c();
            }
          }
          else if (((2 < bVar3) && (bVar3 == 3)) && ((local_24[3] & 1) != 0)) {
            if ((*local_24 & 0x20) == 0) {
              if (*(int *)(&DAT_002e1418 + (uint)local_24[0x2b] * 0x1508) == 300) {
LAB_0005ff07:
                if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                  *(undefined4 *)((int)puVar9 + -4) = 0x5ff32;
                  FUN_00051374();
                }
              }
              else {
                *(undefined4 *)((int)puVar9 + -4) = 0x5feed;
                iVar6 = FUN_0005f5db();
                if (iVar6 != 0) goto LAB_0005fef5;
              }
            }
            else {
LAB_0005feb9:
              *(undefined4 *)((int)puVar9 + -4) = 0x5fec6;
              FUN_000145d2();
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
           (*(short *)(local_24 + 0x35) == *(short *)(&DAT_002e05bc + local_54 * 0x1508))) {
LAB_0006004b:
          if (((*(short *)(local_24 + 0x35) != 0) && (local_24[5] != 0)) &&
             (*(short *)(local_24 + 0x35) != *(short *)(&DAT_002e05bc + local_54 * 0x1508))) {
            *(undefined4 *)((int)puVar9 + -4) = 0x60094;
            iVar6 = FUN_000866f8();
            if (iVar6 != 0) {
              if (*(short *)(local_24 + 0x35) != *(short *)(local_24 + 0x2f)) {
                if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                  *(undefined4 *)((int)puVar9 + -4) = 0x600c3;
                  FUN_0005aee2();
                  *(undefined4 *)((int)puVar9 + -4) = 0x600cd;
                  FUN_0005cf2d();
                }
                *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
                *(undefined4 *)((int)puVar9 + -4) = 0x600ed;
                FUN_0004845c();
                goto LAB_00060035;
              }
              goto LAB_0006003f;
            }
          }
          bVar3 = local_24[0x455];
          if (bVar3 == local_24[0x454]) {
            if (bVar3 < 2) {
              if (bVar3 == 1) {
                if ((*local_24 & 0x20) == 0) {
                  if (300 - *(int *)(&DAT_002e1418 + (uint)local_24[0x2b] * 0x1508) < 9) {
                    if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                      *(undefined4 *)((int)puVar9 + -4) = 0x60181;
                      FUN_00051374();
                    }
                  }
                  else {
                    *(undefined4 *)((int)puVar9 + -4) = 0x60154;
                    FUN_0001458c();
                  }
                }
                else {
                  *(undefined4 *)((int)puVar9 + -4) = 0x60126;
                  FUN_000145d2();
                }
              }
            }
            else if (((2 < bVar3) && (bVar3 == 3)) && (*(short *)(local_24 + 0x35) != 0)) {
              *(undefined4 *)((int)puVar9 + -4) = 0x6019d;
              FUN_0004e120();
            }
          }
        }
        else {
          *(undefined4 *)((int)puVar9 + -4) = 0x6000c;
          iVar6 = FUN_000865b8();
          if (iVar6 == 0) goto LAB_0006004b;
          *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
          *(undefined4 *)((int)puVar9 + -4) = 0x60030;
          FUN_0004845c();
LAB_00060035:
          *(undefined4 *)((int)puVar9 + -4) = 0x6003f;
          FUN_00049eff();
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
    if (*(short *)(&DAT_002e05bc + (uint)local_24[0x2b] * 0x1508) == 0) {
      if (local_24[0x454] == 3) {
        *(undefined4 *)((int)puVar9 + -4) = 0x60217;
        FUN_0004e585();
      }
    }
    else {
      *(undefined4 *)((int)puVar9 + -4) = 0x60247;
      sVar4 = FUN_000849c8();
      if (sVar4 == 0) goto switchD_0005f95d_caseD_5;
    }
    local_24[0x4af] = 0;
    goto LAB_00061429;
  case 2:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      iVar6 = (&DAT_0019033b)[(byte)local_48[0xb]];
      iVar7 = (&DAT_0019033b)[(byte)local_48[0xd]];
      local_50 = *(undefined4 *)(local_48 + 10);
      if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
        DAT_0017d17b._3_1_ = (&DAT_0019d56b)[DAT_002f10ce._3_1_ * 0x4ef];
      }
      local_44 = (uint)(byte)local_48[0xb];
      uStack_58 = 0x602eb;
      cVar2 = FUN_0008f518();
      puVar9 = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        if (cVar2 == '\0') {
LAB_0006045d:
          if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
LAB_00060467:
            uStack_58 = 0x6046c;
            FUN_0006e9ab();
          }
        }
        else {
          uStack_58 = 0x60305;
          sVar4 = FUN_000728e9();
          if (sVar4 != 0) {
            uStack_58 = 0x6032a;
            iVar11 = FUN_00023868();
            if (iVar11 < 0) {
              puVar9 = &local_54;
              if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                uStack_58 = 0x6035a;
                FUN_00051374();
                puVar9 = &local_54;
              }
              goto switchD_0005f95d_caseD_5;
            }
          }
          local_3c = (&DAT_0019033b)[iVar6 * 3];
          local_30 = (&DAT_0019033b)[iVar7 * 3];
          uStack_58 = 0x603a1;
          iVar6 = FUN_000cae40();
          if (iVar6 != 0) {
            if (local_24[0x4a3] == 0xf) {
              *(int *)(&DAT_002e17e4 + local_54 * 0x1508) =
                   *(int *)(&DAT_002e17e4 + local_54 * 0x1508) + 1;
            }
            *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
            if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) {
              uStack_58 = 0x603f9;
              FUN_0006e9ab();
            }
            local_50 = CONCAT22((short)local_30 * 0x300 + 0x180,(short)local_3c * 0x300 + 0x180);
            local_4c[0] = 0x180;
            uStack_58 = 0x60430;
            iVar6 = FUN_000444a9();
            if (iVar6 != 0) {
              *(int *)(iVar6 + 0x13) = (int)*(short *)(&DAT_002eadcd + (uint)local_24[0x4a3] * 4);
            }
          }
        }
LAB_0006046c:
        local_48[0xf] = local_48[0xf] & 0xfe;
        puVar9 = &local_54;
        goto switchD_0005f95d_caseD_5;
      }
    }
    goto LAB_00060a83;
  case 3:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x60aee;
    iVar6 = FUN_00043bb3();
    puVar9 = &local_54;
    if (iVar6 != 0) {
      uStack_58 = 0x60afc;
      local_4c[0] = FUN_000b28e8();
      uStack_58 = 0x60b0a;
      iVar7 = FUN_0007dbc0();
      if (iVar7 == 0) {
        *(undefined4 *)(iVar6 + 0xd) = local_50;
        *(undefined2 *)(iVar6 + 0x11 + (uint)bVar3 * -8) = local_4c[(uint)bVar3 * -4];
        uStack_58 = 0x60b29;
        FUN_0006385d();
        uStack_58 = 0x60b30;
        FUN_00063670();
        puVar9 = &local_54;
      }
      else {
        uStack_58 = 0x60b17;
        FUN_00072af4();
        puVar9 = &local_54;
      }
    }
    break;
  case 4:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uStack_58 = 0x60c94;
    iVar6 = FUN_00043bb3();
    if (iVar6 == 0) {
      uStack_58 = 0x60d3d;
      FUN_000ddaf0();
      puVar9 = &local_54;
    }
    else {
      uStack_58 = 0x60ca6;
      local_4c[0] = FUN_000b28e8();
      uStack_58 = 0x60cb4;
      iVar7 = FUN_0007dbc0();
      if (iVar7 == 0) {
        *(undefined4 *)(iVar6 + 0xd) = local_50;
        *(undefined2 *)(iVar6 + 0x11 + (uint)bVar3 * -8) = local_4c[(uint)bVar3 * -4];
        uStack_58 = 0x60cd6;
        FUN_0006385d();
        uStack_58 = 0x60cdd;
        FUN_00063670();
        _DAT_002eb544 = DAT_002e8bee;
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        _DAT_002eb548 = _DAT_002eb548 + 1;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        uStack_58 = 0x60d24;
        FUN_00082204();
        puVar9 = &local_54;
      }
      else {
        uStack_58 = 0x60cc1;
        FUN_00072af4();
        puVar9 = &local_54;
      }
    }
    break;
  default:
    goto switchD_0005f95d_caseD_5;
  case 6:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0;
    FUN_0004e85c();
    puVar9 = &uStack_58;
    break;
  case 7:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x60e55;
    FUN_0004ee2c();
    puVar9 = &local_54;
    break;
  case 8:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61313;
    FUN_0004e66f();
    puVar9 = &local_54;
    break;
  case 9:
    local_28 = 1;
    uStack_58 = 0x61248;
    iVar6 = FUN_0007868c();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x6129f;
    FUN_0004e585();
    puVar9 = &local_54;
    break;
  case 10:
    local_28 = 1;
    uStack_58 = 0x61398;
    iVar6 = FUN_0007868c();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    if (((local_48[0xf] & 0x10) != 0) && ((&DAT_001ae9fc)[*(ushort *)(local_24 + 0x35)] != 0)) {
      *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
      uStack_58 = 0x613ee;
      FUN_00049eff();
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    bVar13 = local_24[0x4b0] == 6;
    goto LAB_0006140f;
  case 0xb:
    local_28 = 1;
    uStack_58 = 0x61453;
    iVar6 = FUN_0007884b();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    if (((local_48[0xf] & 0x10) != 0) && (*(short *)(local_24 + 0x35) != 0)) {
      *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
      uStack_58 = 0x6149d;
      FUN_00049eff();
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    bVar13 = local_24[0x4b0] == 5;
LAB_0006140f:
    puVar9 = &local_54;
    if (bVar13) goto switchD_0005f95d_caseD_5;
    uStack_58 = 0x61429;
    FUN_0004845c();
    puVar9 = &local_54;
    goto LAB_00061429;
  case 0xc:
  case 0xf:
    local_28 = 1;
    uStack_58 = 0x614e5;
    uVar8 = FUN_0007868c();
    if (DAT_001ae9fc < uVar8) {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    }
    else {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    if (((local_48[0xf] & 0x10) != 0) &&
       (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(local_24 + 0x35)])) {
      if (*(short *)(local_24 + 0x35) != *(short *)(local_24 + 0x2f)) {
        if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
          uStack_58 = 0x61551;
          FUN_0005aee2();
          uStack_58 = 0x6155b;
          FUN_0005d32c();
          uStack_58 = 0x61565;
          FUN_0005cf2d();
        }
        *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
        uStack_58 = 0x61585;
        FUN_00049eff();
      }
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if (local_24[0x453] != 0xf) goto switchD_0005f95d_caseD_5;
    if ((local_48[0xf] & 0x20) == 0) {
      puVar9 = &local_54;
      if (*(short *)((&DAT_001ae9fc)[*(ushort *)(local_24 + 0x2f)] + 0x5e) < 0) {
        uStack_58 = 0x61606;
        FUN_00049eff();
        puVar9 = &local_54;
        if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
          uStack_58 = 0x61626;
          FUN_0005c82f();
          uStack_58 = 0x6162b;
          FUN_0005cf03();
          puVar9 = &local_54;
        }
      }
      goto switchD_0005f95d_caseD_5;
    }
    if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
      uStack_58 = 0x615c4;
      FUN_0005c82f();
      uStack_58 = 0x615c9;
      FUN_0005cf03();
    }
    uStack_58 = 0x615d8;
    FUN_00049eff();
    puVar9 = &local_54;
    goto LAB_00061429;
  case 0xd:
    local_28 = 1;
    uStack_58 = 0x61652;
    iVar6 = FUN_0007868c();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    if ((local_48[0xf] & 0x10) != 0) {
      if (*(short *)(local_24 + 0x2f) == 0) {
        uStack_58 = 0x616da;
        iVar6 = FUN_000785c4();
        if (iVar6 != 0) {
          *(undefined2 *)(local_24 + 0x2f) = *(undefined2 *)(iVar6 + 0x1b);
          uStack_58 = 0x616f7;
          FUN_00064b0c();
          if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar6 + 100)] + 0x7a) & 0xfff) != 0) {
            uStack_58 = 0x61711;
            FUN_00039d55();
          }
        }
      }
      else {
        iVar6 = (&DAT_001ae9fc)[*(ushort *)(local_24 + 0x2f)];
        if ((local_48[0xf] & 0x80) != 0) {
          local_50 = *(undefined4 *)(local_48 + 10);
          uStack_58 = 0x616c1;
          FUN_000b3b58();
          *(undefined1 *)(iVar6 + 8) = 0x7a;
        }
      }
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    puVar9 = &local_54;
    if (*(short *)(local_24 + 0x2f) != 0) {
      uStack_58 = 0x61743;
      FUN_00063b6d();
      local_24[0x2f] = 0;
      local_24[0x30] = 0;
      puVar9 = &local_54;
    }
LAB_00061429:
    local_48[0xf] = local_48[0xf] & 0xdf;
    goto switchD_0005f95d_caseD_5;
  case 0xe:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uStack_58 = 0x60b99;
    iVar6 = FUN_00043bb3();
    puVar9 = &local_54;
    if (iVar6 != 0) {
      uStack_58 = 0x60bab;
      local_4c[0] = FUN_000b28e8();
      uStack_58 = 0x60bb9;
      iVar6 = FUN_0007dbc0();
      if (iVar6 == 0) {
        *(undefined4 *)(extraout_ECX_06 + 0xd) = local_50;
        *(undefined2 *)(extraout_ECX_06 + 0x11 + (uint)bVar3 * -8) = local_4c[(uint)bVar3 * -4];
        uStack_58 = 0x60bdb;
        FUN_0006385d();
        uStack_58 = 0x60be2;
        FUN_00063670();
        uStack_58 = 0x60be9;
        FUN_00063b6d();
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        uStack_58 = 0x60c1f;
        FUN_00082204();
        puVar9 = &local_54;
      }
      else {
        uStack_58 = 0x60bc6;
        FUN_00072af4();
        puVar9 = &local_54;
      }
    }
    break;
  case 0x10:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_50 = CONCAT22((short)((ulonglong)(uint)((int)(uint)*(ushort *)(local_48 + 0xc) >> 8) / 3
                                 ) * 0x300 + 0x180,
                          (short)((ulonglong)(uint)((int)(uint)*(ushort *)(local_48 + 10) >> 8) / 3)
                          * 0x300 + 0x180);
      local_4c[0] = 0;
      local_24[0x4a4] = 1;
      uStack_58 = 0x608fb;
      cVar2 = FUN_0008f75c();
      puVar9 = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        if ((&DAT_002e1591)[(uint)local_24[0x4a5] + local_54 * 0x1508] != '\0') {
          if (cVar2 == '\0') goto LAB_0006045d;
          uStack_58 = 0x60955;
          FUN_000dae68();
          uStack_58 = 0x6096f;
          iVar6 = FUN_000447fb();
          uStack_58 = 0x60979;
          uVar5 = FUN_000b28e8();
          *(undefined1 *)(iVar6 + 0x18) = 0;
          *(undefined2 *)(iVar6 + 0x11) = uVar5;
          uStack_58 = 0x60998;
          iVar6 = FUN_00077a5b();
          if (iVar6 != 0) {
            *(int *)(&DAT_002e1800 + local_54 * 0x1508) =
                 *(int *)(&DAT_002e1800 + local_54 * 0x1508) + 1;
          }
          *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
          if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) goto LAB_00060467;
        }
        goto LAB_0006046c;
      }
    }
    goto LAB_00060a83;
  case 0x11:
    local_24[0x35] = 0;
    local_24[0x36] = 0;
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61221;
    FUN_0004f195();
    puVar9 = &local_54;
    break;
  case 0x12:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      uStack_58 = 0x60a28;
      bVar3 = FUN_0008f924();
      if ((local_48[0xf] & 1) != 0) {
        uStack_58 = 0x60a57;
        FUN_000dae68();
        puVar10 = &uStack_58;
        uStack_58 = (uint)bVar3;
        FUN_00061d43();
      }
      local_48[0xf] = local_48[0xf] & 0xfe;
      puVar9 = puVar10;
    }
    goto LAB_00060a83;
  case 0x13:
    local_28 = 1;
    uStack_58 = 0x60e7c;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) {
LAB_00060eea:
      local_24[0x35] = 0;
      local_24[0x36] = 0;
      puVar9 = &local_54;
      goto switchD_0005f95d_caseD_5;
    }
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f3bc();
    puVar9 = &uStack_58;
    break;
  case 0x14:
    local_28 = 1;
    uStack_58 = 0x60f1a;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f4f1();
    puVar9 = &uStack_58;
    break;
  case 0x15:
    local_28 = 1;
    uStack_58 = 0x60faa;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f552();
    puVar9 = &uStack_58;
    break;
  case 0x16:
    local_28 = 1;
    uStack_58 = 0x61137;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f5b3();
    puVar9 = &uStack_58;
    break;
  case 0x17:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      iVar6 = (&DAT_0019033b)[(byte)local_48[0xb]];
      iVar11 = iVar6 * 3;
      iVar7 = (&DAT_0019033b)[(byte)local_48[0xd]];
      iVar12 = iVar7 * 3;
      local_1c = (byte)(iVar11 / 3);
      local_20 = (byte)(iVar12 / 3);
      local_50 = *(undefined4 *)(local_48 + 10);
      if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
        uStack_58 = 0x6057a;
        cVar2 = FUN_00057f6b();
        if (cVar2 == '\0') {
          local_44 = (uint)(byte)local_48[0xb];
          uStack_58 = 0x605a8;
          FUN_0008fb10();
        }
      }
      puVar9 = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        iVar6 = ((&DAT_0019033b)[iVar6 * 3] + (&DAT_0019033b)[iVar7 * 3] * 0x55) * 6;
        if (((&DAT_002d33ca)[iVar6] & 7) == local_54) {
          if ((((*(byte *)((int)&DAT_00279203 + (iVar7 * 0x300 + iVar11) * 5) & 2) == 0) ||
              ((&DAT_002d33c5)[((uint)local_20 * 0x55 + (uint)local_1c) * 6] == '\x0e')) ||
             ((&DAT_002d33c5)[((uint)local_20 * 0x55 + (uint)local_1c) * 6] == '\x1a')) {
            iVar7 = local_54 * 0x1508;
            uStack_58 = 0x60714;
            iVar6 = FUN_00022b3a();
            if (iVar6 == 0) {
              uStack_58 = 0x6076d;
              iVar7 = FUN_00076789();
              iVar6 = extraout_ECX_03;
              if (iVar7 != 0) {
                local_38 = iVar12 + 1;
                local_40 = iVar11 + 1;
                iVar6 = 0;
                do {
                  uStack_58 = 0x607a7;
                  iVar7 = FUN_00076753();
                  if (iVar7 != 0) {
                    if (*(char *)(iVar7 + 0x13) == '\0') {
                      uStack_58 = 0x607c9;
                      FUN_0007795d();
                    }
                    local_2c = *(int *)(&DAT_001ae8a4 + (uint)*(byte *)(iVar7 + 0x1a) * 0x14);
                    if (local_2c != 0) {
                      uStack_58 = 0x607ee;
                      iVar7 = FUN_000444a9();
                      if (iVar7 != 0) {
                        *(int *)(iVar7 + 0x13) = local_2c;
                      }
                      *(int *)((int)&DAT_002e1086 + extraout_ECX_04) =
                           *(int *)((int)&DAT_002e1086 + extraout_ECX_04) + local_2c;
                      *(int *)((int)&DAT_002e1082 + extraout_ECX_04) =
                           *(int *)((int)&DAT_002e1082 + extraout_ECX_04) + local_2c;
                    }
                    uStack_58 = 0x6080e;
                    FUN_000767f1();
                  }
                  iVar6 = iVar6 + 2;
                } while (iVar6 != 0x12);
                if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) {
                  uStack_58 = 0x60836;
                  FUN_0006e9ab();
                }
                iVar6 = 0;
                *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
              }
            }
            else {
              iVar6 = (int)DAT_002f10ce._3_1_;
              *(undefined4 *)(&DAT_002e142d + iVar7) = 0xc0;
              if ((byte)(&DAT_0019d0f3)[iVar6 * 0x4ef] == local_54) {
                uStack_58 = 0x60747;
                FUN_0006e9ab();
              }
              uStack_58 = 0x6075b;
              FUN_00022660();
              iVar6 = extraout_ECX_02;
            }
          }
          else if ((uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45 == 0) {
            uStack_58 = 0x606ff;
            FUN_000ddaf0();
            iVar6 = extraout_ECX_01;
          }
          else {
            if ((int)(char)(&DAT_002ddd1e)[(uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45] !=
                (uint)DAT_002eb543) {
              *(short *)(&DAT_002e105e +
                        (char)(&DAT_002ddd1e)[(uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45] * 0x1508) =
                   *(short *)(&DAT_002e105e +
                             (char)(&DAT_002ddd1e)[(uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45] *
                             0x1508) + 1;
            }
            uStack_58 = 0x6067b;
            FUN_000c8654();
            local_50 = CONCAT22((short)(iVar12 / 3) * 0x300 + 0x180,
                                (short)(iVar11 / 3) * 0x300 + 0x180);
            *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
            local_4c[0] = 0x180;
            iVar6 = extraout_ECX;
            if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) {
              uStack_58 = 0x606e6;
              FUN_0006e9ab();
              iVar6 = extraout_ECX_00;
            }
          }
          if (iVar6 != 0) {
            uStack_58 = 0x60862;
            iVar6 = FUN_000444a9();
            if (iVar6 != 0) {
              *(int *)(iVar6 + 0x13) = extraout_ECX_05;
            }
            (&DAT_002e1086)[local_54 * 0x542] = (&DAT_002e1086)[local_54 * 0x542] + extraout_ECX_05;
            (&DAT_002e1082)[local_54 * 0x542] = (&DAT_002e1082)[local_54 * 0x542] + extraout_ECX_05;
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
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    uStack_58 = 0x60d6a;
    FUN_0004e1f2();
    puVar9 = &local_54;
    break;
  case 0x19:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61371;
    FUN_0004f63e();
    puVar9 = &local_54;
    break;
  case 0x1a:
    uStack_58 = 0x61037;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    if (7 < (int)uStack_58) {
      uStack_58 = 8;
    }
    FUN_0004f87e();
    puVar9 = &uStack_58;
    break;
  case 0x1b:
    local_28 = 1;
    uStack_58 = 0x610b7;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    if (7 < (int)uStack_58) {
      uStack_58 = 8;
    }
    FUN_0004f41d();
    puVar9 = &uStack_58;
  }
  local_48[0xf] = local_48[0xf] & 0xef;
switchD_0005f95d_caseD_5:
  if (((*(short *)(local_24 + 0x35) == 0) && (*(short *)(local_48 + 10) != 0)) &&
     (*(short *)(local_48 + 0xc) == 0)) {
    *(undefined4 *)((int)puVar9 + -4) = 0x6049b;
    uVar8 = FUN_00078768();
    if (DAT_001ae9fc < uVar8) {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    }
  }
  if ((((local_48[0xf] & 4) != 0) || ((local_48[0xf] & 8) != 0)) &&
     ((local_28 != 0 && ((local_24[0x455] == 0 || (local_24[0x455] == 3)))))) {
    *(undefined4 *)((int)puVar9 + -4) = 0x604f9;
    FUN_0004e3fa();
  }
  return;
}
```

### `clear_packet_for_player` (`0x61751` in `packet.cpp`)
- **Evidence**: Zero out a player's 17-byte Packet slot for the upcoming turn
```c
void FUN_00061751(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = (uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11;
  iVar2 = in_EAX * 4;
  *(undefined4 *)(&DAT_0034d208 + iVar2) = 0;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 0x40) == 0) {
    if ((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 0x10) != 0) {
      if (*(int *)(&DAT_0034d1f4 + iVar2) < 5) {
        *(undefined4 *)(&DAT_0034d208 + iVar2) = 1;
      }
      *(undefined4 *)(&DAT_0034d1f4 + in_EAX * 4) = 0;
    }
    if ((((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 4) == 0) &&
        ((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 1) == 0)) &&
       (*(int *)(&DAT_0034d1f4 + in_EAX * 4) < 0x7fffffff)) {
      *(int *)(&DAT_0034d1f4 + in_EAX * 4) = *(int *)(&DAT_0034d1f4 + in_EAX * 4) + 1;
    }
  }
  return;
}
```

### `open_new_packet_file_for_save` (`0x617c9` in `packet.cpp`)
- **Evidence**: Create and write header for new .PKT replay recording file
```c
void FUN_000617c9(void)

{
  char cVar1;
  
  FUN_000e6a10();
  for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
  }
  FUN_000ea1ef();
  FUN_000150f0();
  DAT_002e6fc5 = FUN_000e8980();
  if (DAT_002e6fc5 != -1) {
    DAT_002e6fc4 = 1;
    FUN_000e8a8c();
    return;
  }
  FUN_000ddaf0();
  return;
}
```

### `write_turn_packets_to_file` (`0x61883` in `packet.cpp`)
- **Evidence**: Compute Thing checksum (compute_things_checksum) and write turn Packets to .PKT file
```c
void FUN_00061883(void)

{
  if (DAT_002e6fc4 != '\0') {
    if (DAT_002e6fe5 != '\0') {
      FUN_000ddafc();
    }
    FUN_000e8a34();
    FUN_000e8c83();
    FUN_000e8c83();
    FUN_000e8a8c();
    FUN_000f43d5();
  }
  return;
}
```

### `open_packet_file_for_load` (`0x618f5` in `packet.cpp`)
- **Evidence**: Open existing .PKT replay file and validate header
```c
void FUN_000618f5(void)

{
  int iVar1;
  
  FUN_000e8ca8();
  DAT_002e6fc5 = FUN_000e8980();
  if (DAT_002e6fc5 == -1) {
    FUN_000ddaf0();
    return;
  }
  FUN_000e8a80();
  DAT_002e6fc9 = 0xf;
  iVar1 = FUN_000e97a0();
  DAT_002e6fdc = (iVar1 - 0xfU) / 0x48;
  if ((DAT_002e6fe5 != '\0') && (DAT_002e6fdb == '\0')) {
    FUN_000ddaf0();
    DAT_002e6fe5 = '\0';
  }
  if (DAT_002e6fe6 == -1) {
    DAT_002e6fea = DAT_002e6fdc + 1;
    DAT_002e6fe6 = 0;
  }
  DAT_002e6fc4 = 1;
  return;
}
```

### `load_turn_packets_from_file` (`0x619be` in `packet.cpp`)
- **Evidence**: Seek and read per-turn Packet structures from open .PKT replay file
```c
void FUN_000619be(void)

{
  char cVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int local_20;
  
  cVar1 = (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11];
  if (in_EAX < DAT_002e6fdc) {
    iVar4 = in_EAX * 0x48 + 0xf;
    if (iVar4 != DAT_002e6fc9) {
      FUN_000ddaf0();
      FUN_000e8a34();
      DAT_002e6fc9 = iVar4;
    }
    FUN_000e8a80();
    DAT_002e6fc9 = DAT_002e6fc9 + 0x48;
    FUN_000e8c83();
    FUN_000e8c83();
    if ((DAT_0019d0b8 & 1) != 0) {
      bVar2 = false;
      iVar4 = extraout_ECX * 0x48 + 0xf;
      while (!bVar2) {
        for (iVar3 = 0; iVar3 < 0x44; iVar3 = iVar3 + 0x11) {
          if (((&DAT_002e90bd)[iVar3] != '\0') || (*(short *)((int)&DAT_002e90c6 + iVar3) != 0)) {
            bVar2 = true;
            break;
          }
        }
        if (!bVar2) {
          DAT_002e8bf2 = DAT_002e8bf2 + 1;
          iVar4 = iVar4 + 0x48;
          if (iVar4 != DAT_002e6fc9) {
            FUN_000ddaf0();
            FUN_000e8a34();
            DAT_002e6fc9 = iVar4;
          }
          FUN_000e8a80();
          DAT_002e6fc9 = DAT_002e6fc9 + 0x48;
          FUN_000e8c83();
          FUN_000e8c83();
        }
      }
    }
    if (DAT_002e6fe0 != 0) {
      DAT_002e6fe0 = DAT_002e6fe0 + -1;
    }
    if (DAT_002e6fe5 == '\0') {
      return;
    }
    iVar4 = FUN_000ddafc();
    if (iVar4 == local_20) {
      if ((&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] == cVar1)
      {
        return;
      }
      FUN_000e7714(&DAT_0019cbac,s_Opps_we_are_really_Out_Of_Sync___001665c7,DAT_002e8bee);
    }
    else {
      FUN_000e7714(&DAT_0019cbac,s_PacketSave_checksum___Out_of_syn_0016658c,DAT_002e8bee);
    }
  }
  FUN_000ddaf0();
  return;
}
```

### `packet_possess_thing_direct` (`0x61bde` in `packet.cpp`)
- **Evidence**: Directly attach player camera to possessed Thing
```c
void FUN_00061bde(void)

{
  byte in_AL;
  uint uVar1;
  int iVar2;
  
  FUN_000e6a10();
  uVar1 = FUN_00043f07();
  if (DAT_001ae9fc < uVar1) {
    iVar2 = (uint)in_AL * 0x4ef;
    *(undefined2 *)(&DAT_0019d502 + iVar2) = *(undefined2 *)(uVar1 + 0x1b);
    *(undefined4 *)(&DAT_0019d0d4 + iVar2) = 0;
    if ((DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + (uint)in_AL * 0x1508)]) &&
       (*(char *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + (uint)in_AL * 0x1508)] + 0x1f) ==
        '\x01')) {
      FUN_000c57a4();
    }
    FUN_00061ca3();
    FUN_00081eac();
  }
  return;
}
```

### `packet_handle_double_click_action` (`0x61ca3` in `packet.cpp`)
- **Evidence**: Process double-click packet action within turn threshold
```c
void FUN_00061ca3(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = in_EAX * 0x4ef;
  if ((DAT_002e8bee <= *(uint *)(&DAT_0019d0d8 + iVar1)) && ((in_EDX == 0x312 || (in_EDX == 0x313)))
     ) {
    *(undefined4 *)(&DAT_0019d0d8 + iVar1) = 0;
  }
  if ((*(uint *)(&DAT_0019d0d8 + iVar1) < DAT_002e8bee) &&
     (in_EDX != *(int *)(&DAT_0019d0d4 + iVar1))) {
    *(int *)(&DAT_0019d0d4 + iVar1) = in_EDX;
    if ((in_EDX == 0x30e) || (in_EDX == 0x30d)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_0008ccec(uVar2,0,2);
    FUN_0004fbd8();
  }
  return;
}
```

### `packet_activate_dungeon_special_or_spell` (`0x61d43` in `packet.cpp`)
- **Evidence**: Trigger dungeon special box or spell from packet command
```c
undefined4 FUN_00061d43(char param_1)

{
  int iVar1;
  int in_ECX;
  uint unaff_EBX;
  int iVar2;
  
  iVar2 = unaff_EBX * 0x1508;
  if ((&DAT_002e15a6)[in_ECX + iVar2] != '\0') {
    if (param_1 != '\0') {
      FUN_00022e62();
      FUN_000449a4(0);
      FUN_000da6fc();
      iVar1 = FUN_00077a5b();
      if (iVar1 != 0) {
        FUN_0007795d();
        *(int *)(&DAT_002e1808 + iVar2) = *(int *)(&DAT_002e1808 + iVar2) + 1;
      }
      iVar1 = (int)DAT_002f10ce._3_1_;
      *(undefined4 *)(&DAT_002e142d + iVar2) = 0xc0;
      if ((byte)(&DAT_0019d0f3)[iVar1 * 0x4ef] == unaff_EBX) {
        FUN_0006e9ab();
      }
      FUN_00061e86();
      return 1;
    }
    if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == unaff_EBX) {
      FUN_0006e9ab();
    }
  }
  return 0;
}
```

### `packet_tag_slab_for_digging` (`0x61e86` in `packet.cpp`)
- **Evidence**: Tag or untag a 3x3 subtile slab area for imp digging
```c
void FUN_00061e86(void)

{
  char *pcVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  
  for (iVar4 = in_EDX * 0xf00 + in_EAX * 0xf; iVar4 < in_EAX * 0xf + (in_EDX * 3 + 3) * 0x500;
      iVar4 = iVar4 + 0x500) {
    iVar5 = (int)&DAT_00279203 + iVar4;
    for (iVar6 = in_EAX * 3; iVar6 < in_EAX * 3 + 3; iVar6 = iVar6 + 1) {
      uVar3 = (&DAT_001ae9fc)[(*(uint *)(iVar5 + 1) & 0x3fffff) >> 0xb];
      while (DAT_001ae9fc < uVar3) {
        uVar2 = (&DAT_001ae9fc)[*(ushort *)(uVar3 + 2)];
        pcVar1 = (char *)(uVar3 + 0x1f);
        uVar3 = uVar2;
        if (*pcVar1 == '\x04') {
          FUN_00072af4();
          iVar4 = extraout_ECX;
        }
      }
      iVar5 = iVar5 + 5;
    }
  }
  return;
}
```

### `packet_has_selectable_things_at_subtile` (`0x61f1b` in `packet.cpp`)
- **Evidence**: Check if subtile contains Things selectable by player hand
```c
bool FUN_00061f1b(void)

{
  int in_EAX;
  int iVar1;
  int *in_EDX;
  int iVar2;
  int iVar3;
  
  if (*(char *)(in_EAX + 0x29) == '\x02') {
    return false;
  }
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((((&DAT_0019d0c8)[iVar1] & 1) != 0) && ((&DAT_0019d0f4)[iVar1] == '\x01')) &&
       (iVar2 = iVar2 + 1, (&DAT_0019d0f1)[iVar1] == '\x02')) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + 0x4ef;
  } while (iVar1 != 0x18ab);
  *in_EDX = iVar2;
  return iVar2 == iVar3 + 1;
}
```

### `packet_update_pause_mode_state` (`0x61f77` in `packet.cpp`)
- **Evidence**: Synchronize pause state across singleplayer/multiplayer packet flags
```c
/* WARNING: Removing unreachable block (ram,0x0006200e) */

void FUN_00061f77(void)

{
  byte *in_EAX;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  
  if ((DAT_0019d0b6 & 1) == 0) {
    *in_EAX = *in_EAX & 0xfe;
    pbVar3 = &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef;
  }
  else {
    iVar1 = FUN_00061f1b();
    if (iVar1 != 0) {
      iVar2 = 0;
      do {
        if (((((&DAT_0019d0c8)[iVar2] & 1) != 0) && ((&DAT_0019d0f4)[iVar2] == '\x01')) &&
           ((&DAT_0019d0f1)[iVar2] == '\0')) {
          (&DAT_0019d0f1)[iVar2] = 1;
        }
        iVar2 = iVar2 + 0x4ef;
      } while (iVar2 != 0x18ab);
    }
    if (((in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) ||
        (iVar2 = FUN_00032f5c(), iVar2 != 0)) || (iVar1 != 0)) {
      FUN_000edc70();
      DAT_0019a2a0 = 1;
      if (extraout_ECX_00 != 0) {
        DAT_0019a2a1 = 1;
      }
      *in_EAX = *in_EAX & 0xfe;
      iVar1 = FUN_00032f5c();
      if (iVar1 == 0) {
        return;
      }
      iVar1 = 0;
      do {
        if (((&DAT_0019d0c8)[iVar1] & 1) != 0) {
          (&DAT_0019d0c8)[iVar1] = (&DAT_0019d0c8)[iVar1] & 0xfe;
          (&DAT_0019d0ce)[iVar1] = (&DAT_0019d0ce)[iVar1] | 2;
        }
        iVar1 = iVar1 + 0x4ef;
      } while (iVar1 != 0x18ab);
      return;
    }
    if (in_EAX[0x29] == 0) {
      *in_EAX = *in_EAX | 0x40;
      FUN_00021527();
      in_EDX = extraout_ECX_01;
    }
    else {
      *in_EAX = *in_EAX & 0xfe;
      in_EDX = extraout_ECX;
    }
    pbVar3 = &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef;
  }
  if ((in_EAX == pbVar3) && (DAT_0019a2a0 = 1, in_EDX != 0)) {
    DAT_0019a2a0 = 1;
    DAT_0019a2a1 = 1;
  }
  return;
}
```

### `packet_compute_full_dungeon_checksum` (`0x620e6` in `packet.cpp`)
- **Evidence**: Compute deterministic checksum over Dungeon and SlabMap state
```c
void FUN_000620e6(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte in_AL;
  int iVar4;
  char in_DL;
  
  bVar3 = DAT_0019d0b8;
  bVar2 = true;
  iVar4 = 0;
  do {
    if (0x18aa < iVar4) {
LAB_0006214c:
      if (bVar2) {
        DAT_0019d0b8 = DAT_0019d0b8 & 0xfe;
        if ((in_AL & 1) != 0) {
          DAT_0019d0b8 = bVar3 & 0x7e | in_AL & 1;
          DAT_0019d0b8 = DAT_0019d0b8 | in_DL << 7;
        }
        if (DAT_00334019 == 0) {
          if ((DAT_0019d0b8 & 1) == 0) {
            FUN_000f32ae();
            FUN_000ecf70();
          }
          else {
            FUN_000f32ae();
            FUN_000ecf70();
          }
          FUN_000f3264();
        }
        if (((DAT_0019d0b8 & 1) != 0) && (((&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 8) != 0)) {
          FUN_000627b5();
          (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] =
               (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 0xf7;
        }
      }
      return;
    }
    if ((((((&DAT_0019d0c8)[iVar4] & 1) != 0) && ((&DAT_0019d0f4)[iVar4] == '\x01')) &&
        (((&DAT_0019d0c8)[iVar4] & 0x40) == 0)) &&
       (((((cVar1 = (&DAT_0019d578)[iVar4], cVar1 == '\x0e' || (cVar1 == '\x0f')) ||
          ((cVar1 == '\r' || ((cVar1 == '\x05' || (cVar1 == '\x06')))))) || (cVar1 == '\a')) ||
        (cVar1 == '\b')))) {
      bVar2 = false;
      goto LAB_0006214c;
    }
    iVar4 = iVar4 + 0x4ef;
  } while( true );
}
```

### `packet_backup_catalogue_settings` (`0x62238` in `packet.cpp`)
- **Evidence**: Save current level/campaign catalogue settings before packet replay
```c
void FUN_00062238(void)

{
  DAT_0034d21c = DAT_002ee8a2;
  DAT_0034d21d = DAT_002ee8a3;
  DAT_0034d21e = DAT_002ee8a4;
  DAT_0034d21f = DAT_002ee8a5;
  DAT_0034d220 = DAT_002ee8a6;
  DAT_0034d221 = DAT_002ee8a7;
  DAT_0034d222 = DAT_002ee8a8;
  DAT_0034d223 = DAT_002ee8a9;
  DAT_0034d225 = DAT_002ee8ab;
  DAT_0034d227 = DAT_002ee8ad;
  DAT_0034d22b = DAT_002ee8b1;
  DAT_0034d22f = DAT_002ee8b5;
  DAT_0034d233 = DAT_002ee8b9;
  DAT_0034d237 = DAT_002ee8bd;
  DAT_0034d23b = DAT_002ee8c1;
  DAT_0034d23f = DAT_002ee8c5;
  DAT_0034d243 = DAT_002ee8c9;
  DAT_0034d247 = DAT_002ee8cd;
  return;
}
```

### `packet_restore_catalogue_settings` (`0x622f1` in `packet.cpp`)
- **Evidence**: Restore level/campaign catalogue settings after packet replay
```c
void FUN_000622f1(void)

{
  DAT_002ee8a2 = DAT_0034d21c;
  DAT_002ee8a3 = DAT_0034d21d;
  DAT_002ee8a4 = DAT_0034d21e;
  DAT_002ee8a5 = DAT_0034d21f;
  DAT_002ee8a6 = DAT_0034d220;
  DAT_002ee8a7 = DAT_0034d221;
  DAT_002ee8a8 = DAT_0034d222;
  DAT_002ee8a9 = DAT_0034d223;
  DAT_002ee8ab = DAT_0034d225;
  DAT_002ee8ad = DAT_0034d227;
  DAT_002ee8b1 = DAT_0034d22b;
  DAT_002ee8b5 = DAT_0034d22f;
  DAT_002ee8b9 = DAT_0034d233;
  DAT_002ee8bd = DAT_0034d237;
  DAT_002ee8c1 = DAT_0034d23b;
  DAT_002ee8c5 = DAT_0034d23f;
  DAT_002ee8c9 = DAT_0034d243;
  DAT_002ee8cd = DAT_0034d247;
  return;
}
```

### `packet_draw_debug_cursor_overlay` (`0x623aa` in `packet.cpp`)
- **Evidence**: Lock screen and draw multiplayer/packet cursor overlay
```c
void FUN_000623aa(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_000e797c();
  if (iVar1 == 1) {
    uVar2 = (uint)DAT_0019cba4;
    uVar3 = (uint)DAT_0019cba2;
    FUN_000595ab();
    DAT_003d98b4 = DAT_001991b8;
    DAT_003d9874 = 0x100;
    FUN_000e6b20();
    uVar4 = 100;
    uVar5 = DAT_00333f2f;
    FUN_000e6d80();
    FUN_000f0870(0,(unaff_EBX + (int)((uVar2 - unaff_EBX) + -200) / 2 + 100) - in_EDX,in_EDX * 2,
                 (in_EDX * 2) / (int)(uint)DAT_0019cba6,
                 ((int)(uVar3 - 100) / 2 + extraout_ECX + 8) / (int)(uint)DAT_0019cba6,uVar4,uVar5);
    FUN_000f0870(0x85);
    FUN_000e797c();
    FUN_000e79fc();
  }
  return;
}
```

### `LbNetwork_Init_0ed4e0` (`0xed4e0` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'WARNING network: LbNetwork_Init() failure on compositeBuffer allo'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_000ed4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6,int param_7,char *param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char extraout_CL;
  char extraout_CL_00;
  char cVar4;
  char extraout_CL_01;
  uint extraout_ECX;
  undefined1 extraout_DH;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  undefined4 auStackY_1824 [1519];
  undefined4 uStack_64;
  char *pcStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined **ppuStack_50;
  char *pcStack_4c;
  undefined4 local_48;
  undefined4 local_44 [3];
  int local_38;
  byte local_34;
  char local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c;
  
  bVar10 = 0;
  puVar7 = &local_48;
  DAT_003dd898 = param_7;
  DAT_003dd884 = param_5;
  local_2c = DAT_003d97d0;
  local_24 = 0;
  DAT_0019556c = 0xfa;
  DAT_003dd86c = 0;
  DAT_003dd870 = 0;
  DAT_003dd89c = 0;
  DAT_003dd8a4 = 0;
  DAT_003dd874 = 0;
  DAT_003dd8ac = 0;
  DAT_003dd87c = 0;
  DAT_003d97d0 = &local_2c;
  DAT_003dd880 = 0;
  PTR_FUN_000ef14c_00195580 = FUN_000ef14c;
  local_28 = &DAT_0017459c;
  _DAT_00195594 = 0;
  local_1c = 0xff;
  DAT_003dd894 = param_6;
  PTR_FUN_000ef7a8_00195584 = FUN_000ef7a8;
  DAT_003dd864 = param_8;
  if (param_7 != 0) {
    DAT_003dd880 = param_5 * param_7;
    pcStack_4c = (char *)0xed5a6;
    DAT_003dd870 = FUN_000e9484();
    if (DAT_003dd870 == 0) {
      pcStack_4c = s_WARNING_network__LbNetwork_Init__0016d41f;
      ppuStack_50 = (undefined **)0xed5b9;
      uVar1 = FUN_000efd90();
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),0xff);
      goto LAB_000ed68b;
    }
  }
  pcStack_4c = (char *)0xed5d4;
  FUN_000e6a10();
  uVar6 = DAT_003dd884;
  uVar5 = 0;
  if (DAT_003dd884 != 0) {
    iVar3 = 0;
    do {
      uVar5 = uVar5 + 1;
      *(undefined4 *)((int)&DAT_003dd8b4 + iVar3) = 0;
      iVar3 = iVar3 + 0x2c;
    } while (uVar5 < uVar6);
  }
  uVar6 = 0;
  if (DAT_003dd884 != 0) {
    do {
      pcVar9 = DAT_003dd864;
      pcVar8 = &DAT_0016d46a;
      uVar6 = uVar6 + 1;
      pcVar9[0x20] = '\0';
      pcVar9[0x21] = '\0';
      pcVar9[0x22] = '\0';
      pcVar9[0x23] = '\0';
      do {
        cVar4 = *pcVar8;
        *pcVar9 = cVar4;
        if (cVar4 == '\0') break;
        cVar4 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar4;
        pcVar9 = pcVar9 + 2;
      } while (cVar4 != '\0');
    } while (uVar6 < DAT_003dd884);
  }
  if (extraout_ECX == 0) {
    pcStack_4c = s_Selecting_DOS_Serial_SP_0016d46b;
    ppuStack_50 = (undefined **)0xed64c;
    FUN_000efd90();
    pcStack_4c = (char *)param_9;
    ppuStack_50 = (undefined **)param_4;
    uStack_54 = param_3;
    uStack_58 = param_2;
    puVar7 = &uStack_5c;
    uStack_5c = param_1;
    pcStack_60 = (char *)0xed66d;
    uVar1 = FUN_001008d0();
    if ((char)uVar1 == '\0') {
      local_30 = (char)uVar1;
      puVar7 = &uStack_5c;
    }
    else {
      pcStack_60 = s_WARNING_network__LbNetwork_Init__0016d484;
      uStack_64 = 0xed684;
      uVar1 = FUN_000efd90();
    }
  }
  else if (extraout_ECX < 2) {
    pcStack_4c = s_Selecting_DOS_Modem_SP_0016d4c8;
    ppuStack_50 = (undefined **)0xed6ab;
    FUN_000efd90();
    pcStack_4c = (char *)param_9;
    ppuStack_50 = (undefined **)param_4;
    uStack_54 = param_3;
    uStack_58 = param_2;
    uStack_5c = param_1;
    pcStack_60 = (char *)0xed6cc;
    uVar1 = FUN_00101158();
    if ((char)uVar1 == '\0') {
      local_30 = (char)uVar1;
      puVar7 = &uStack_5c;
    }
    else {
      pcStack_60 = s_WARNING_network__LbNetwork_Init__0016d4e0;
      uStack_64 = 0xed6e0;
      uVar1 = FUN_000efd90();
      puVar7 = &uStack_5c;
    }
  }
  else if (extraout_ECX == 2) {
    pcStack_4c = s_Selecting_DOS_IPX_SP_0016d523;
    ppuStack_50 = (undefined **)0xed6f7;
    FUN_000efd90();
    local_48 = param_1;
    local_44[(uint)bVar10 * -2] = (&param_2)[(uint)bVar10 * -2];
    local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         (&param_3)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    (local_44 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (&param_3 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1];
    if (DAT_003dd8a0 != 0) {
      pcStack_4c = (char *)0xed715;
      (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x1c))();
      if (DAT_003dd8a0 != 0) {
        pcStack_4c = (char *)0xed72b;
        (*(code *)**(undefined4 **)(DAT_003dd8a0 + 0xd7c))();
      }
      DAT_003dd8a0 = 0;
    }
    pcStack_4c = (char *)0xed73d;
    iVar2 = FUN_000e9484();
    iVar3 = 0;
    cVar4 = extraout_CL;
    if (iVar2 != 0) {
      local_24 = 1;
      local_34 = 0;
      pcStack_4c = (char *)0xed767;
      local_38 = iVar2;
      local_20 = iVar2;
      FUN_000ff040();
      local_24 = 3;
      pcStack_4c = (char *)0xed775;
      iVar3 = FUN_001012c0();
      *(undefined4 *)(iVar3 + 0x723) = 0;
      *(undefined4 *)(iVar3 + 0x727) = 0;
      *(undefined1 *)(iVar3 + 0x72b) = extraout_DH;
      *(undefined ***)(iVar3 + -4) = &PTR_FUN_00103134_00174668;
      iVar3 = iVar3 + -0xd80;
      local_24 = 0;
      local_34 = local_34 | 0x10;
      cVar4 = extraout_CL_00;
    }
    uVar1 = 0;
    puVar7 = &local_48;
    DAT_003dd8a0 = iVar3;
    if (iVar3 != 0) {
      pcStack_4c = (char *)0x0;
      ppuStack_50 = &PTR_FUN_000ef460_00195570;
      uStack_54 = 0;
      uStack_58 = local_44[2];
      uStack_5c = local_44[1];
      pcStack_60 = (char *)local_44[0];
      puVar7 = &uStack_64;
      uStack_64 = local_48;
      uVar1 = (**(code **)(*(int *)(iVar3 + 0xd7c) + 0x18))();
      if ((char)uVar1 == '\0') {
        cVar4 = '\0';
        puVar7 = &uStack_64;
      }
      else {
        uVar1 = FUN_000efd90(s_WARNING_network__GenericIPXInit__0016d539);
        cVar4 = extraout_CL_01;
      }
    }
    if (cVar4 == '\0') {
      *(undefined1 *)((int)puVar7 + 0x2c) = 0;
    }
    else {
      *(char **)((int)puVar7 + -4) = s_WARNING_network__LbNetwork_Init__0016d581;
      *(undefined4 *)((int)puVar7 + -8) = 0xed810;
      uVar1 = FUN_000efd90();
    }
  }
  else {
    ppuStack_50 = (undefined **)s_The_serviceIndex_value_of__d_is_o_0016d5c2;
    uStack_54 = 0xed841;
    uVar1 = FUN_000efd90();
    puVar7 = &local_48;
  }
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),*(undefined1 *)((int)puVar7 + 0x2c));
LAB_000ed68b:
  DAT_003d97d0 = (undefined4 *)*(undefined4 *)((int)puVar7 + 0x1c);
  return CONCAT44(*(undefined4 *)((int)puVar7 + 0x3c),uVar1);
}
```

### `LbNetwork_Create_0ed84c` (`0xed84c` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'ERROR::LbNetwork_Create ServiceProvider ptr is NULL'
```c
undefined1 FUN_000ed84c(void)

{
  char cVar1;
  char cVar2;
  uint extraout_ECX;
  uint uVar3;
  int iVar4;
  uint *unaff_EBX;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_14;
  
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Create_ServiceP_0016d5f0);
    local_14 = 0xff;
  }
  else {
    if (DAT_003dd8ac != 0) {
      DAT_003dd88c = 0;
      DAT_003dd888 = 0;
      DAT_003e0250 = 1;
      DAT_003e024c = 1;
    }
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 8))();
    if (cVar1 == '\0') {
      cVar1 = -1;
      if (DAT_003dd8a0 == 0) {
        FUN_000efd90(s_ERROR__GetCurrentPlayers_Service_0016d625);
      }
      else {
        DAT_003dd888 = DAT_003dd884;
        cVar1 = -1;
        FUN_000efd90(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
        cVar2 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
        if (cVar2 == '\0') {
          if (DAT_003dd888 < DAT_003dd884) {
            cVar1 = '\0';
          }
          else {
            FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d679,DAT_003dd884);
          }
        }
        else {
          FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d6cd);
        }
      }
      if (cVar1 == '\0') {
        *unaff_EBX = DAT_003dd888;
        FUN_000efd90(s_CALLING_GET_PLAYER_INFO_0016d71d);
        if (DAT_003dd884 != 0) {
          iVar4 = 0;
          iVar5 = 0;
          uVar3 = extraout_ECX;
          do {
            if (*(int *)((int)&DAT_003dd8b4 + iVar5) == 0) {
              *(undefined4 *)(iVar4 + 0x20 + DAT_003dd864) = 0;
            }
            else {
              pcVar7 = (char *)(DAT_003dd864 + iVar4);
              pcVar6 = &DAT_003dd8bc + iVar5;
              pcVar7[0x20] = '\x01';
              pcVar7[0x21] = '\0';
              pcVar7[0x22] = '\0';
              pcVar7[0x23] = '\0';
              do {
                cVar1 = *pcVar6;
                *pcVar7 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar6[1];
                pcVar6 = pcVar6 + 2;
                pcVar7[1] = cVar1;
                pcVar7 = pcVar7 + 2;
              } while (cVar1 != '\0');
            }
            iVar4 = iVar4 + 0x24;
            uVar3 = uVar3 + 1;
            iVar5 = iVar5 + 0x2c;
          } while (uVar3 < DAT_003dd884);
        }
        if (DAT_003dd8a0 == 0) {
          return 0;
        }
        FUN_000efd90(s_NEW_PLAYERS_ARE_ALLOWED_TO_JOIN_0016d39a);
        (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x24))();
        return 0;
      }
      pcVar6 = s_WARNING_network__LbNetwork_Creat_0016d737;
    }
    else {
      pcVar6 = s_WARNING_network__LbNetwork_Creat_0016d77d;
    }
    FUN_000efd90(pcVar6);
  }
  return local_14;
}
```

### `LbNetwork_Join_0eda20` (`0xeda20` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'ERROR::LbNetwork_Join ServiceProvider ptr is NULL'
```c
undefined1 FUN_000eda20(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint extraout_ECX;
  uint uVar4;
  char extraout_DH;
  uint *unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  char local_10;
  
  iVar2 = FUN_000eb818();
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Join_ServicePro_0016d7bb);
  }
  else {
    if (DAT_003dd8ac != 0) {
      DAT_003e0250 = 0;
      DAT_003e024c = 0;
      DAT_003dd88c = 1;
      DAT_003dd888 = 1;
    }
    DAT_003dd89c = 0xf;
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 4))();
    if (cVar1 == '\0') {
      if (DAT_003dd8ac == 0) {
        FUN_000ff894();
        DAT_003de250 = 0;
        FUN_001002dc();
        DAT_003dd87c = 1;
        do {
          FUN_000ffb54();
          if ((DAT_003dd87c != 0) && (iVar3 = FUN_000eb818(), 10000 < (uint)(iVar3 - iVar2))) {
            DAT_003dd87c = 0;
            return 0xff;
          }
        } while (DAT_003dd87c != 0);
      }
      local_10 = -1;
      if (DAT_003dd8a0 == 0) {
        FUN_000efd90(s_ERROR__GetCurrentPlayers_Service_0016d625);
        local_10 = extraout_DH;
      }
      else {
        DAT_003dd888 = DAT_003dd884;
        FUN_000efd90(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
        cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
        if (cVar1 == '\0') {
          if (DAT_003dd888 < DAT_003dd884) {
            local_10 = '\0';
          }
          else {
            FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d679,DAT_003dd884);
          }
        }
        else {
          FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d6cd);
        }
      }
      if (local_10 == '\0') {
        *unaff_EBX = DAT_003dd888;
        FUN_000efd90(s_CALLING_GET_PLAYER_INFO_0016d71d);
        if (DAT_003dd884 == 0) {
          return 0;
        }
        iVar2 = 0;
        iVar3 = 0;
        uVar4 = extraout_ECX;
        do {
          if (*(int *)((int)&DAT_003dd8b4 + iVar3) == 0) {
            *(undefined4 *)(iVar2 + 0x20 + DAT_003dd864) = 0;
          }
          else {
            pcVar6 = (char *)(DAT_003dd864 + iVar2);
            pcVar5 = &DAT_003dd8bc + iVar3;
            pcVar6[0x20] = '\x01';
            pcVar6[0x21] = '\0';
            pcVar6[0x22] = '\0';
            pcVar6[0x23] = '\0';
            do {
              cVar1 = *pcVar5;
              *pcVar6 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar5[1];
              pcVar5 = pcVar5 + 2;
              pcVar6[1] = cVar1;
              pcVar6 = pcVar6 + 2;
            } while (cVar1 != '\0');
          }
          iVar2 = iVar2 + 0x24;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x2c;
          if (DAT_003dd884 <= uVar4) {
            return 0;
          }
        } while( true );
      }
      pcVar5 = s_WARNING_network__LbNetwork_Join__0016d838;
    }
    else {
      pcVar5 = s_WARNING_network__LbNetwork_Join__0016d87c;
    }
    FUN_000efd90(pcVar5);
  }
  return 0xff;
}
```

### `LbNetwork_Stop_0edc70` (`0xedc70` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'INSIDE LbNetwork_Stop'
```c
undefined8 FUN_000edc70(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uVar3;
  undefined4 in_EDX;
  
  FUN_000efd90(s_INSIDE_LbNetwork_Stop_0016d8b1);
  if (DAT_003dd8a0 == 0) {
    uVar2 = FUN_000efd90(s_ERROR__LbNetwork_Stop_ServicePro_0016d8c8);
    uVar3 = extraout_CL;
  }
  else {
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x1c))();
    if (cVar1 != '\0') {
      FUN_000efd90(s_WARNING_network__LbNetwork_Stop__0016d8fb);
    }
    if (DAT_003dd8a0 != 0) {
      (*(code *)**(undefined4 **)(DAT_003dd8a0 + 0xd7c))();
    }
    DAT_003dd8a0 = 0;
    if (DAT_003dd870 != 0) {
      FUN_000e94b0();
    }
    DAT_003dd868 = 0;
    DAT_003dd86c = 0;
    DAT_003dd870 = 0;
    DAT_003dd874 = 0;
    DAT_003dd878 = 0;
    DAT_003dd87c = 0;
    DAT_003dd880 = 0;
    DAT_003dd884 = 0;
    DAT_003dd888 = 0;
    DAT_003dd88c = 0;
    DAT_003dd890 = 0;
    DAT_003dd894 = 0;
    DAT_003dd898 = 0;
    DAT_003dd89c = 0;
    DAT_003dd8a0 = 0;
    DAT_0019556c = 0xfa;
    DAT_003dd8a4 = 0;
    DAT_003dd8a8 = 0;
    DAT_003dd8ac = 0;
    uVar2 = FUN_000e6a10();
    DAT_003dde30 = 0;
    uVar3 = extraout_CL_00;
  }
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),uVar3));
}
```

### `LbNetwork_EnumerateSessions_0edd8c` (`0xedd8c` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'ERROR::LbNetwork_EnumerateSessions ServiceProvider ptr is NULL'
```c
/* WARNING: Removing unreachable block (ram,0x000eddb6) */

undefined1 FUN_000edd8c(void)

{
  char cVar1;
  undefined1 local_10;
  
  local_10 = 0xff;
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_EnumerateSessio_0016d933);
    local_10 = 0xff;
  }
  else {
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x10))();
    if (cVar1 == '\0') {
      local_10 = 0;
    }
    else {
      FUN_000efd90(s_WARNING_network__LbNetwork_Enume_0016d973);
    }
  }
  return local_10;
}
```

### `LbNetwork_EnumeratePlayers_0eddf0` (`0xeddf0` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'ERROR::LbNetwork_EnumeratePlayers ServiceProvider ptr is NULL'
```c
undefined1 FUN_000eddf0(void)

{
  char cVar1;
  undefined1 local_10;
  
  local_10 = 0xff;
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_EnumeratePlayer_0016d9ba);
    local_10 = 0xff;
  }
  else {
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
    if (cVar1 == '\0') {
      local_10 = 0;
    }
    else {
      FUN_000efd90(s_WARNING_network__LbNetwork_Enume_0016d9f9);
    }
  }
  return local_10;
}
```

### `LbNetwork_CompleteExchange_0ee3c0` (`0xee3c0` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'WARNING network: LbNetwork_CompleteExchange() failure on HostData'
```c
undefined8 FUN_000ee3c0(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 in_EDX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_1c;
  
  local_1c = 0xff;
  if (DAT_003dd8a8 == DAT_003dd88c) {
    FUN_000efd90(s_GETTING_DATA_FROM_CLIENTS_0016dafe);
    FUN_000eedc0();
    FUN_000efd90(s_GOT_DATA_FROM_CLIENTS_0016db19);
    local_1c = FUN_000ef060();
    uVar3 = FUN_000efd90(s_DONE_BROADCAST_TO_CLIENTS_0016db30);
  }
  else {
    bVar1 = true;
    DAT_003dd890 = 0;
    uVar7 = 0;
    do {
      iVar4 = DAT_003dd8a8;
      uVar3 = FUN_000ffb54();
      iVar5 = extraout_ECX;
      if (iVar4 != DAT_003dd8a8) {
        iVar5 = 1;
      }
      if (iVar5 == 0) {
        if (DAT_003dd890 != 0) {
          if (uVar7 == 0) {
            iVar4 = FUN_000eb818();
            if ((DAT_003dd8a4 == 0) || (DAT_003dd874 < (uint)(iVar4 - DAT_003dd878))) {
              DAT_003dd874 = iVar4 - DAT_003dd878;
            }
            uVar6 = DAT_003dd8a4 + 1;
            uVar3 = DAT_003dd8a4;
            DAT_003dd8a4 = uVar6;
            if (0x31 < uVar6) {
              DAT_003dd8a4 = 0;
              uVar3 = DAT_003dd874 << 2;
              DAT_0019556c = uVar3;
              if (uVar3 < 0xfa) {
                DAT_0019556c = 0xfa;
              }
            }
          }
          bVar1 = false;
          local_1c = 0;
        }
      }
      else if (DAT_003dd8a8 == DAT_003dd88c) {
        cVar2 = FUN_000eedc0();
        if (cVar2 == '\0') {
          uVar3 = FUN_000ef060();
          if ((char)uVar3 != '\0') {
            pcVar8 = s_WARNING_network__LbNetwork_Compl_0016db4b;
            goto LAB_000ee4fb;
          }
          local_1c = 0;
        }
        else {
          pcVar8 = s_WARNING_network__LbNetwork_Compl_0016db9b;
LAB_000ee4fb:
          uVar3 = FUN_000efd90(pcVar8);
        }
        bVar1 = false;
      }
      else {
        FUN_000ff894();
        uVar3 = FUN_001002dc();
        if ((char)uVar3 == '\0') {
          local_1c = 0;
        }
        else {
          uVar3 = FUN_000efd90(s_WARNING_network__LbNetwork_Compl_0016dbec);
        }
      }
      uVar6 = uVar7;
      if (bVar1) {
        iVar4 = FUN_000eb818();
        uVar3 = iVar4 - DAT_003dd878;
        if (DAT_003dd868 < uVar3) {
          FUN_000efd90(s_Timed_out_waiting_for_host_0016dc33);
          uVar6 = uVar7 + 1;
          if (uVar6 < 0x65) {
            uVar3 = FUN_000ff628();
            if (uVar3 < 9) {
              FUN_000ff6f0();
              FUN_000efd90(s_RESENDING_TO_HOST_MY_PLAYER__d__S_0016dd40,DAT_003dd88c,DAT_003dd89c);
              cVar2 = FUN_001002dc();
              if (cVar2 == '\0') goto LAB_000ee634;
              pcVar8 = s_WARNING_network__LbNetwork_Compl_0016dd78;
            }
            else {
              pcVar8 = s_WARNING_network__LbNetwork_Compl_0016dcdf;
            }
            FUN_000efd90(pcVar8);
          }
          else {
            uVar3 = FUN_000ff628();
            if (uVar3 < 9) {
              FUN_000ff630();
              cVar2 = FUN_001002dc();
              if (cVar2 == '\0') goto LAB_000ee634;
              pcVar8 = s_WARNING_network__HostDataCollect_0016dca0;
            }
            else {
              pcVar8 = s_WARNING_network__LbNetwork_Compl_0016dc4f;
            }
            FUN_000efd90(pcVar8);
          }
LAB_000ee634:
          DAT_003dd878 = FUN_000eb818();
          uVar3 = DAT_0019556c * (uVar7 + 2);
          DAT_0019556c = DAT_0019556c + 100;
          DAT_003dd868 = uVar3;
        }
      }
      uVar7 = uVar6;
    } while (bVar1);
  }
  DAT_003dd86c = 0;
  if ((DAT_003dd89c != 0xf) && (DAT_003dd89c = DAT_003dd89c + 1, 0xe < DAT_003dd89c)) {
    DAT_003dd89c = 0;
  }
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar3 >> 8),local_1c));
}
```

### `LbNetwork_StartExchange_0ee694` (`0xee694` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'ERROR::LbNetwork_StartExchange ServiceProvider ptr is NULL'
```c
longlong FUN_000ee694(void)

{
  bool bVar1;
  char cVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  undefined3 uVar6;
  uint uVar4;
  int iVar5;
  uint uVar7;
  int extraout_ECX;
  int iVar8;
  undefined4 in_EDX;
  uint uVar9;
  undefined4 *puVar10;
  byte bVar11;
  char *pcVar12;
  char local_24;
  char local_20;
  undefined1 local_1c;
  
  bVar11 = 0;
  local_1c = 0xff;
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_StartExchange_S_0016da3f);
    local_24 = -1;
  }
  else if (DAT_003dd8ac == 0) {
    local_24 = -1;
    DAT_003dd86c = in_EAX;
    FUN_000ffb54();
    uVar7 = DAT_003dd884;
    uVar4 = 0;
    if (DAT_003dd884 != 0) {
      iVar5 = 0;
      do {
        if (*(int *)((int)&DAT_003dd8b4 + iVar5) != 0) {
          *(undefined4 *)((int)&DAT_003dd8b8 + iVar5) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (uVar4 < uVar7);
    }
    uVar7 = DAT_003dd898;
    puVar10 = (undefined4 *)(DAT_003dd894 + DAT_003dd888 * DAT_003dd898);
    for (uVar4 = DAT_003dd898 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = *in_EAX;
      in_EAX = in_EAX + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)in_EAX;
      in_EAX = (undefined4 *)((int)in_EAX + (uint)bVar11 * -2 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
    }
    (&DAT_003dd8b8)[DAT_003dd888 * 0xb] = 1;
    DAT_003dd878 = FUN_000eb818();
    DAT_003dd868 = DAT_0019556c;
    if (DAT_003dd8a8 == DAT_003dd88c) {
      local_24 = '\0';
    }
    else {
      FUN_000ff894();
      cVar2 = FUN_001002dc();
      if (cVar2 == '\0') {
        local_24 = '\0';
      }
      else {
        FUN_000efd90(s_WARNING_network__LbNetwork_Start_0016da7b);
      }
    }
  }
  else {
    local_24 = FUN_00100a28();
  }
  if (local_24 == '\0') {
    if (DAT_003dd8a0 == 0) {
      uVar3 = FUN_000efd90(s_ERROR__LbNetwork_CompleteExchang_0016dabf);
      uVar6 = (undefined3)((uint)uVar3 >> 8);
      local_20 = -1;
LAB_000eeae6:
      if (local_20 == '\0') {
        return (ulonglong)CONCAT43(in_EDX,uVar6) << 8;
      }
    }
    else {
      if (DAT_003dd8ac == 0) {
        local_20 = -1;
        if (DAT_003dd88c == DAT_003dd8a8) {
          FUN_000efd90(s_GETTING_DATA_FROM_CLIENTS_0016dafe);
          FUN_000eedc0();
          FUN_000efd90(s_GOT_DATA_FROM_CLIENTS_0016db19);
          local_20 = FUN_000ef060();
          uVar4 = FUN_000efd90(s_DONE_BROADCAST_TO_CLIENTS_0016db30);
        }
        else {
          bVar1 = true;
          DAT_003dd890 = DAT_003dd8ac;
          uVar7 = 0;
          do {
            iVar5 = DAT_003dd8a8;
            uVar4 = FUN_000ffb54();
            iVar8 = extraout_ECX;
            if (iVar5 != DAT_003dd8a8) {
              iVar8 = 1;
            }
            if (iVar8 == 0) {
              if (DAT_003dd890 != 0) {
                if (uVar7 == 0) {
                  iVar5 = FUN_000eb818();
                  uVar4 = iVar5 - DAT_003dd878;
                  if ((DAT_003dd8a4 == 0) || (DAT_003dd874 < uVar4)) {
                    DAT_003dd874 = uVar4;
                  }
                  DAT_003dd8a4 = DAT_003dd8a4 + 1;
                  if (0x31 < DAT_003dd8a4) {
                    uVar4 = DAT_003dd874 << 2;
                    DAT_003dd8a4 = 0;
                    DAT_0019556c = uVar4;
                    if (uVar4 < 0xfa) {
                      DAT_0019556c = 0xfa;
                    }
                  }
                }
                uVar4 = uVar4 & 0xffffff00;
                bVar1 = false;
                local_20 = '\0';
              }
            }
            else if (DAT_003dd8a8 == DAT_003dd88c) {
              cVar2 = FUN_000eedc0();
              if (cVar2 == '\0') {
                uVar4 = FUN_000ef060();
                if ((char)uVar4 != '\0') {
                  pcVar12 = s_WARNING_network__LbNetwork_Compl_0016db4b;
                  goto LAB_000ee950;
                }
                local_20 = '\0';
              }
              else {
                pcVar12 = s_WARNING_network__LbNetwork_Compl_0016db9b;
LAB_000ee950:
                uVar4 = FUN_000efd90(pcVar12);
              }
              bVar1 = false;
            }
            else {
              FUN_000ff894();
              uVar4 = FUN_001002dc();
              if ((char)uVar4 == '\0') {
                local_20 = '\0';
              }
              else {
                uVar4 = FUN_000efd90(s_WARNING_network__LbNetwork_Compl_0016dbec);
              }
            }
            uVar9 = uVar7;
            if (bVar1) {
              iVar5 = FUN_000eb818();
              uVar4 = iVar5 - DAT_003dd878;
              if (DAT_003dd868 < uVar4) {
                FUN_000efd90(s_Timed_out_waiting_for_host_0016dc33);
                uVar9 = uVar7 + 1;
                if (uVar9 < 0x65) {
                  uVar4 = FUN_000ff628();
                  if (uVar4 < 9) {
                    FUN_000ff6f0();
                    FUN_000efd90(s_RESENDING_TO_HOST_MY_PLAYER__d__S_0016dd40,DAT_003dd88c,
                                 DAT_003dd89c);
                    cVar2 = FUN_001002dc();
                    if (cVar2 == '\0') goto LAB_000eea8a;
                    pcVar12 = s_WARNING_network__LbNetwork_Compl_0016dd78;
                  }
                  else {
                    pcVar12 = s_WARNING_network__LbNetwork_Compl_0016dcdf;
                  }
                  FUN_000efd90(pcVar12);
                }
                else {
                  uVar4 = FUN_000ff628();
                  if (uVar4 < 9) {
                    FUN_000ff630();
                    cVar2 = FUN_001002dc();
                    if (cVar2 == '\0') goto LAB_000eea8a;
                    pcVar12 = s_WARNING_network__HostDataCollect_0016dca0;
                  }
                  else {
                    pcVar12 = s_WARNING_network__LbNetwork_Compl_0016dc4f;
                  }
                  FUN_000efd90(pcVar12);
                }
LAB_000eea8a:
                DAT_003dd878 = FUN_000eb818();
                uVar4 = DAT_0019556c * (uVar7 + 2);
                DAT_0019556c = DAT_0019556c + 100;
                DAT_003dd868 = uVar4;
              }
            }
            uVar7 = uVar9;
          } while (bVar1);
        }
        DAT_003dd86c = (undefined4 *)0x0;
        if ((DAT_003dd89c != 0xf) && (DAT_003dd89c = DAT_003dd89c + 1, 0xe < DAT_003dd89c)) {
          DAT_003dd89c = 0;
        }
        uVar6 = (undefined3)(uVar4 >> 8);
        goto LAB_000eeae6;
      }
      uVar3 = FUN_00100bb8();
      if ((char)uVar3 == '\0') {
        local_1c = 0;
        goto LAB_000eeb10;
      }
    }
    pcVar12 = s_WARNING_network__LbNetwork_Excha_0016ddbf;
  }
  else {
    pcVar12 = s_WARNING_network__LbNetwork_Excha_0016de10;
  }
  uVar3 = FUN_000efd90(pcVar12);
LAB_000eeb10:
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar3 >> 8),local_1c));
}
```

### `LbNetwork_ChangeExchangeBuffer_0eeb20` (`0xeeb20` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buff'
```c
undefined1 FUN_000eeb20(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int in_EDX;
  undefined4 extraout_EDX;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(DAT_003dd880,DAT_003dd870);
  bVar7 = 0;
  uVar4 = 0xff;
  DAT_003dd894 = in_EAX;
  DAT_003dd898 = in_EDX;
  if (DAT_003dd870 == (undefined4 *)0x0) {
    uVar8 = FUN_000e9484();
    DAT_003dd870 = (undefined4 *)uVar8;
    if (DAT_003dd870 == (undefined4 *)0x0) {
      FUN_000efd90(s_WARNING_network__LbNetwork_Chang_0016de5e);
      uVar8 = CONCAT44(DAT_003dd880,DAT_003dd870);
      goto LAB_000eebd8;
    }
  }
  else if (DAT_003dd880 <= (uint)(DAT_003dd884 * in_EDX) &&
           DAT_003dd884 * in_EDX - DAT_003dd880 != 0) {
    puVar1 = (undefined4 *)FUN_000e9484();
    uVar3 = DAT_003dd880;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = DAT_003dd870;
      puVar6 = puVar1;
      for (uVar2 = DAT_003dd880 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
      }
      FUN_000e94b0();
      DAT_003dd870 = puVar1;
      DAT_003dd880 = extraout_EDX;
      return 0;
    }
    FUN_000efd90(s_WARNING_network__LbNetwork_Chang_0016deb0);
    return 0xff;
  }
  uVar4 = 0;
LAB_000eebd8:
  DAT_003dd880 = (uint)((ulonglong)uVar8 >> 0x20);
  DAT_003dd870 = (undefined4 *)uVar8;
  return uVar4;
}
```

### `LbNetwork_CompleteExchange_0ef060` (`0xef060` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'WARNING network: LbNetwork_CompleteExchange() failure on SP::Send'
```c
undefined8 FUN_000ef060(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 in_EDX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined1 local_18;
  
  bVar7 = 0;
  local_18 = 0;
  FUN_000ff894();
  uVar2 = DAT_003dd898 * DAT_003dd884;
  puVar5 = DAT_003dd894;
  puVar6 = DAT_003dd870;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
  }
  uVar3 = 0;
  if (DAT_003dd884 != 0) {
    iVar4 = 0;
    do {
      if ((*(int *)((int)&DAT_003dd8b4 + iVar4) != 0) &&
         (*(int *)((int)&DAT_003dd8b0 + iVar4) != DAT_003dd8a8)) {
        cVar1 = FUN_001002dc();
        iVar4 = extraout_ECX;
        if (cVar1 != '\0') {
          FUN_000efd90(s_WARNING_network__LbNetwork_Compl_0016e0cd);
          iVar4 = extraout_ECX_00;
          local_18 = extraout_DL;
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (uVar3 < DAT_003dd884);
  }
  uVar3 = DAT_003dd898 * DAT_003dd884;
  puVar5 = DAT_003dd894;
  puVar6 = &DAT_003dde34;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
  }
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar3 >> 8),local_18));
}
```

### `LbNetwork_Send_0f3b50` (`0xf3b50` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'INSIDE LbNetwork_Send'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_000f3b50(void)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint uVar4;
  int in_EDX;
  int extraout_EDX;
  int unaff_EBX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  int local_20;
  undefined4 *local_1c;
  
  bVar8 = 0;
  DAT_003dd860 = 1;
  FUN_000efd90(s_INSIDE_LbNetwork_Send_0016f12c);
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Send_ServicePro_0016f143);
  }
  else {
    FUN_000ffb54();
    if (DAT_003dd884 <= in_EAX) {
      FUN_000efd90(s_Warning__LbNetwork_Send___player_0016f176);
      return 0xff;
    }
    if ((&DAT_003dd8b4)[in_EAX * 0xb] == 0) {
      return 0xff;
    }
    FUN_000e6a10((&DAT_003dd8b0)[in_EAX * 0xb]);
    _DAT_003decf4 = 0;
    _DAT_003ded00 = 3;
    _DAT_003decfc = 0x200;
    _DAT_003decf8 = unaff_EBX;
    FUN_000ff894();
    cVar1 = FUN_001002dc();
    if (cVar1 == '\0') {
      FUN_000eb818();
      uVar2 = unaff_EBX - 1U >> 9;
      local_20 = 1;
LAB_000f3c80:
      do {
        FUN_000ffb54();
        if (DAT_003df12c == 0) {
          iVar3 = FUN_000eb818();
          iVar3 = iVar3 - extraout_ECX;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }
          if (50000 < iVar3) {
            FUN_000efd90(s_Warning___LbNetwork_Send___timeo_0016f254);
            local_20 = 0;
          }
        }
        else {
          DAT_003df12c = 0;
          if (2 < DAT_003def24) {
            if (DAT_003def24 < 4) {
              return 0;
            }
            if (DAT_003def24 == 4) {
              return 0xff;
            }
            if (local_20 == 0) {
              return 0xff;
            }
            goto LAB_000f3c80;
          }
          if (DAT_003def24 != 1) {
            if (local_20 == 0) {
              return 0xff;
            }
            goto LAB_000f3c80;
          }
          if ((uVar2 < DAT_003def28) || (uVar2 < DAT_003def2c)) {
            FUN_000efd90(s_Warning___LbNetwork_Send___reque_0016f1be,DAT_003def28,DAT_003def2c);
            return 0xff;
          }
          if (DAT_003def28 <= DAT_003def2c) {
            local_1c = (undefined4 *)(DAT_003def28 * 0x200 + in_EDX);
            uVar5 = DAT_003def28;
            do {
              FUN_000e6a10();
              puVar6 = local_1c;
              puVar7 = &DAT_003ded10;
              for (uVar4 = extraout_ECX_00 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              for (uVar4 = extraout_ECX_00 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
                puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar8 * -2 + 1);
                puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar8 * -2 + 1);
              }
              _DAT_003ded08 = 2;
              _DAT_003ded0c = uVar5;
              FUN_000ff894();
              cVar1 = FUN_001002dc();
              if (cVar1 == '\0') {
                FUN_000eb818();
              }
              else {
                FUN_000efd90(s_Warning__LbNetwork_Send___failur_0016f20d,uVar5);
                local_20 = extraout_EDX;
              }
              uVar5 = uVar5 + 1;
              local_1c = local_1c + 0x80;
            } while (uVar5 <= DAT_003def2c);
          }
        }
        if (local_20 == 0) {
          return 0xff;
        }
      } while( true );
    }
    FUN_000efd90(s_Warning___LbNetwork_Send___failu_0016f288);
  }
  return 0xff;
}
```

### `LbNetwork_Receive_0f3ed8` (`0xf3ed8` in `bflib/bflib_network.cpp`)
- **Evidence**: References 'INSIDE LbNetwork_Receive'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000f3ed8(void)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint extraout_ECX;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined8 uVar13;
  int local_94 [18];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  
  bVar12 = 0;
  uVar13 = FUN_000eb818();
  local_30 = (int)((ulonglong)uVar13 >> 0x20);
  local_38 = (undefined4)uVar13;
  bVar9 = true;
  bVar1 = false;
  local_40 = 0;
  DAT_003dd860 = 1;
  FUN_000efd90(s_INSIDE_LbNetwork_Receive_0016f2c4);
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Receive_Service_0016f2de);
    local_40 = 0xffffffff;
  }
  else {
    FUN_000ffb54();
    if (DAT_003dd884 <= extraout_ECX) {
      return 0;
    }
    if ((&DAT_003dd8b4)[extraout_ECX * 0xb] == 0) {
      return 0;
    }
    local_20 = (&DAT_003dd8b0)[extraout_ECX * 0xb];
    do {
      FUN_000ffb54();
      if (DAT_003df12c == 0) {
        uVar13 = FUN_000eb818();
        iVar4 = (int)uVar13 - (int)((ulonglong)uVar13 >> 0x20);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (50000 < iVar4) {
          FUN_000efd90(s_Warning___LbNetwork_Receive___ti_0016f3d2);
LAB_000f3fc8:
          bVar9 = false;
        }
      }
      else {
        DAT_003df12c = 0;
        if (DAT_003def24 == 0) {
          local_1c = DAT_003def28;
          local_3c = DAT_003def2c;
          local_28 = DAT_003def30;
          if (DAT_003def2c < 0x201) {
            if (unaff_EBX < DAT_003def28) {
              FUN_000efd90(s_Warning___LbNetwork_Receive___to_0016f352,DAT_003def28);
            }
            else {
              bVar1 = true;
            }
          }
          else {
            FUN_000efd90(s_Warning___LbNetwork_Receive___pa_0016f314,DAT_003def2c);
          }
          bVar9 = false;
          if (!bVar1) {
            _DAT_003def1c = 4;
            FUN_000ff894();
            cVar3 = FUN_001002dc();
            if (cVar3 != '\0') {
              FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f391);
              goto LAB_000f3fc8;
            }
          }
        }
      }
    } while (bVar9);
    if (bVar1) {
      local_34 = (local_1c - 1) / local_3c;
      local_24 = 1;
      local_14 = 0;
      do {
        if (local_34 < local_14) {
          local_24 = 0;
          local_40 = local_1c;
        }
        else {
          uVar8 = local_14 + local_28;
          if (local_34 < local_14 + local_28) {
            uVar8 = local_34;
          }
          local_4c = 1;
          local_48 = local_14;
          local_44 = uVar8;
          FUN_000ff894();
          cVar3 = FUN_001002dc();
          uVar2 = local_28;
          if (cVar3 == '\0') {
            bVar1 = true;
            uVar6 = 0;
            iVar4 = 0;
            do {
              uVar6 = uVar6 + 1;
              *(undefined4 *)((int)local_94 + iVar4) = 1;
              iVar4 = iVar4 + 4;
            } while (uVar6 <= uVar2);
            local_18 = FUN_000eb818();
            local_2c = uVar8 + 1;
            do {
              FUN_000ffb54();
              uVar6 = local_14;
              uVar2 = DAT_003def28;
              if (DAT_003df12c == 0) {
                uVar13 = FUN_000eb818();
                iVar4 = (int)uVar13 - (int)((ulonglong)uVar13 >> 0x20);
                if (iVar4 < 0) {
                  iVar4 = -iVar4;
                }
                if (25000 < iVar4) {
                  _DAT_003def1c = 4;
                  bVar1 = false;
                  FUN_000ff894();
                  local_24 = 0;
                  cVar3 = FUN_001002dc();
                  if (cVar3 != '\0') {
                    FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f442);
                  }
                }
              }
              else {
                DAT_003df12c = 0;
                if (DAT_003def24 == 2) {
                  if ((local_14 <= DAT_003def28) && (DAT_003def28 <= uVar8)) {
                    uVar7 = local_1c - local_3c * DAT_003def28;
                    if (local_3c < uVar7) {
                      uVar7 = local_3c;
                    }
                    puVar10 = &DAT_003def2c;
                    puVar11 = (undefined4 *)(local_3c * DAT_003def28 + local_30);
                    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *puVar11 = *puVar10;
                      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
                      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
                    }
                    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
                      puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar12 * -2 + 1);
                      puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
                    }
                    bVar1 = false;
                    local_94[uVar2 - local_14] = 0;
                    if (uVar6 <= uVar8) {
                      iVar4 = 0;
                      do {
                        if (*(int *)((int)local_94 + iVar4) != 0) {
                          bVar1 = true;
                        }
                        uVar6 = uVar6 + 1;
                        iVar4 = iVar4 + 4;
                      } while (uVar6 <= uVar8);
                    }
                    if (!bVar1) {
                      local_14 = local_2c;
                      break;
                    }
                    local_18 = FUN_000eb818();
                    bVar1 = true;
                  }
                }
                else {
                  FUN_000efd90(s_Warning___LbNetwork_Receive___un_0016f402,DAT_003def24);
                }
              }
            } while (bVar1);
          }
          else {
            local_24 = 0;
            FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f483,local_14,uVar8);
            _DAT_003def1c = 4;
            FUN_000ff894();
            cVar3 = FUN_001002dc();
            if (cVar3 != '\0') {
              FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f4d1);
            }
          }
        }
      } while (local_24 != 0);
      if (local_40 == local_1c) {
        FUN_000e6a10();
        _DAT_003def14 = 3;
        FUN_000ff894();
        cVar3 = FUN_001002dc();
        if (cVar3 != '\0') {
          FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f512);
        }
      }
    }
    FUN_000efd90(s_OUTSIDE_LbNetwork_Receive_0016f551);
  }
  return local_40;
}
```

### `lbnet_resending_packet_10962c` (`0x10962c` in `bflib/bflib_network.cpp`)
- **Evidence**: String 'RESENDING PACKET'
```c
undefined1 FUN_0010962c(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  char extraout_CL;
  int in_ECX;
  uint uVar5;
  char extraout_DH;
  char *in_EDX;
  int extraout_EDX;
  undefined4 *unaff_EBX;
  undefined1 *puVar6;
  char **ppcVar7;
  char **ppcVar8;
  char **ppcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte bVar12;
  char *local_38;
  int local_34;
  int local_30 [4];
  char local_20 [4];
  short *local_1c;
  char *local_18;
  char local_14;
  undefined1 local_10;
  
  bVar12 = 0;
  ppcVar9 = (char **)&local_34;
  local_10 = 0xff;
  local_34 = in_ECX;
  local_18 = in_EDX;
  if (*(int *)(in_EAX + 0x7a8) == 0) {
    ppcVar8 = &local_38;
    local_38 = s_m_connectToSession___FALSE_00172996;
  }
  else {
    if (*(short *)(in_EAX + 0x17ef) == 1) {
      uVar10 = *(undefined4 *)(in_EAX + 0x151f);
      uVar2 = *(ushort *)(in_EAX + 0x1525);
    }
    else {
      uVar10 = *(undefined4 *)(in_EAX + 0x1575);
      uVar2 = *(ushort *)(in_EAX + 0x157b);
    }
    if ((char *)(uint)uVar2 <= in_EDX) {
      local_38 = in_EDX;
      FUN_000efd90(s_Invalid_player_id__d_00172980);
      ppcVar9 = (char **)&local_34;
      goto LAB_001099ad;
    }
    local_1c = (short *)((int)in_EDX * 0x38 + *(int *)(in_EAX + 0xdce) + 0x24);
    if (*local_1c == 0) {
      ppcVar8 = &local_38;
      local_38 = s_sender_>SocketNumber___FALSE_00172962;
    }
    else {
      local_38 = (char *)0x1096c1;
      FUN_000ff8c0();
      if (0x212 < (uint)local_30[1]) {
        local_38 = (char *)0x212;
        FUN_000efd90(s_Invalid_length___d_vs__d_00172948,local_30[1]);
        goto LAB_001099ad;
      }
      *(int *)(in_EAX + 0x159b) = local_34;
      cVar1 = *(char *)(in_EAX + 0x17f1);
      *(undefined4 *)(in_EAX + 0x159f) = uVar10;
      *(char *)(in_EAX + 0x17f1) = cVar1 + '\x01';
      *(char *)(in_EAX + 0x15a5) = cVar1;
      puVar11 = (undefined4 *)(in_EAX + 0x15a7);
      for (uVar5 = local_30[1] + 4U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *unaff_EBX;
        unaff_EBX = unaff_EBX + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      for (uVar5 = local_30[1] + 4U & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)unaff_EBX;
        unaff_EBX = (undefined4 *)((int)unaff_EBX + (uint)bVar12 * -2 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
      }
      if (local_34 == 0x47445542) {
        cVar1 = local_18[in_EAX + 0x17f2];
        *(char *)(in_EAX + 0x15a6) = cVar1;
        local_18[in_EAX + 0x17f2] = cVar1 + '\x01';
      }
      ppcVar7 = &local_38;
      ppcVar9 = &local_38;
      local_38 = (char *)0x21e;
      FUN_001023f4();
      local_18 = (char *)((uint)local_18 & 0xffffff00);
      if ((DAT_003e02b0 & 1) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 1;
        DAT_003e02a4 = FUN_000e8d4a();
      }
      if ((DAT_003e02b0 & 2) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 2;
        DAT_003e02a8 = FUN_000e8d4a();
      }
      iVar3 = FUN_000e8d4a();
      if (((char)local_18 == '\0') || (0x32 < (uint)(iVar3 - DAT_003e02a8))) {
        DAT_003e02a8 = iVar3;
        DAT_003e02ac = DAT_003e02ac + 1;
        FUN_00102834();
      }
      if (99 < (uint)(iVar3 - DAT_003e02a4)) {
        DAT_003e02ac = 0;
        DAT_003e02a4 = iVar3;
      }
      if (local_38 != (char *)0x47445542) {
        local_14 = '\0';
        goto LAB_001099ad;
      }
      iVar3 = FUN_000e8d4a();
      local_30[3] = iVar3;
      if (local_14 == -1) {
        local_34 = in_EAX + 0x1492;
        local_30[2] = in_EAX + 0xd80;
        ppcVar7 = &local_38;
        do {
          *(undefined4 *)((int)ppcVar7 + -4) = 0x10983a;
          iVar4 = FUN_000e8d4a();
          if (500 < (uint)(iVar4 - *(int *)((int)ppcVar7 + 0x14))) break;
          if (6 < (uint)(iVar4 - iVar3)) {
            *(char **)((int)ppcVar7 + -4) = s_RESENDING_PACKET_00172923;
            *(undefined4 *)((int)ppcVar7 + -8) = 0x109864;
            FUN_000efd90();
            puVar6 = (undefined1 *)((int)ppcVar7 + -4);
            *(undefined4 *)((int)ppcVar7 + -4) = 0x21e;
            *(undefined4 *)((int)ppcVar7 + -8) = 0x109881;
            FUN_001023f4();
            *(int *)((int)ppcVar7 + 8) = in_EAX;
            if ((DAT_003e02b0 & 1) == 0) {
              DAT_003e02b0 = DAT_003e02b0 | 1;
              *(undefined4 *)((int)ppcVar7 + -8) = 0x1098a2;
              DAT_003e02a4 = FUN_000e8d4a();
            }
            if ((DAT_003e02b0 & 2) == 0) {
              DAT_003e02b0 = DAT_003e02b0 | 2;
              *(undefined4 *)((int)ppcVar7 + -8) = 0x1098c0;
              DAT_003e02a8 = FUN_000e8d4a();
            }
            *(undefined4 *)((int)ppcVar7 + -8) = 0x1098ca;
            iVar4 = FUN_000e8d4a();
            if ((extraout_CL == '\0') || (0x32 < (uint)(iVar4 - DAT_003e02a8))) {
              DAT_003e02ac = DAT_003e02ac + 1;
              *(undefined4 *)((int)ppcVar7 + -8) = 0x10990f;
              DAT_003e02a8 = iVar4;
              FUN_00102834();
            }
            ppcVar7 = (char **)((int)ppcVar7 + -4);
            iVar3 = extraout_EDX;
            if (99 < (uint)(iVar4 - DAT_003e02a4)) {
              DAT_003e02ac = 0;
              ppcVar7 = (char **)puVar6;
              DAT_003e02a4 = iVar4;
            }
          }
          *(undefined4 *)((int)ppcVar7 + -4) = 0x10993f;
          iVar4 = FUN_001099cc();
          if (iVar4 == 1) {
            *(undefined1 *)((int)ppcVar7 + 0x24) = 0;
          }
          *(undefined4 *)((int)ppcVar7 + -4) = 0x109955;
          FUN_00108b74();
        } while (extraout_DH == -1);
      }
      ppcVar9 = ppcVar7;
      if (*(char *)((int)ppcVar7 + 0x24) != -1) goto LAB_001099ad;
      ppcVar8 = (char **)((int)ppcVar7 + -4);
      *(char **)((int)ppcVar7 + -4) = s_DIDN_T_GET_AN_ACK_00172935;
    }
  }
  *(undefined4 *)((int)ppcVar8 + -4) = 0x1099aa;
  FUN_000efd90();
  ppcVar9 = (char **)((int)ppcVar8 + 4);
LAB_001099ad:
  if (*(char *)((int)ppcVar9 + 0x24) == -1) {
    *(char **)((int)ppcVar9 + -4) = s_Ended_up_with_ret____LB_ERROR_001729b2;
    *(undefined4 *)((int)ppcVar9 + -8) = 0x1099be;
    FUN_000efd90();
  }
  return *(undefined1 *)((int)ppcVar9 + 0x24);
}
```

