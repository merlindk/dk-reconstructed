#!/usr/bin/env python3
"""
Semantic Function, Global, Parameter, Struct Field, and Local Variable Renamer
for Dungeon Keeper (/home/merlin/workspace/dk-reconstructed).

Performs multi-pass static analysis over the decompiled C/C++ code to replace:
  1. Raw FUN_000xxxxx function names with meaningful subsystem/behavior names
     (both at definitions and across all call sites).
  2. Raw DAT_00xxxxxx / _DAT_00xxxxxx globals with verified engine symbol names
     (g_thing_ptrs, g_dungeons, g_players, g_packets, g_slabmap, g_map_subtiles, etc.).
  3. Watcom __watcall register parameters (in_EAX, in_EDX, unaff_EBX, in_ECX)
     with typed domain names (thing, pkt, btn, cam, pos1, pos2, v0, v1, v2, player_idx, etc.).
  4. Decompiler local temporaries (iVar1, uVar2, pbVar3, pcVar4, etc.) with
     contextual variable names (player_offset, dungeon_offset, packet_offset, thing_ptr,
     cctrl_ptr, poly_out, draw_flags, net_status, file_handle, loop_i, etc.).
  5. Raw struct pointer offsets (*(short *)(thing + 0x52)) with inline struct member annotations.
"""

import collections
import json
import re
import sys
from pathlib import Path


def parse_hex(addr_str: str) -> int:
    if not addr_str:
        return 0
    if ":" in addr_str:
        addr_str = addr_str.split(":")[-1]
    addr_str = addr_str.strip().lower()
    return int(addr_str, 16)


# ============================================================================
# 1. VERIFIED ENGINE GLOBAL SYMBOLS (DAT_00xxxxxx -> Meaningful Name)
# ============================================================================
VERIFIED_GLOBALS = {
    # Core Simulation & World State (.bss_obj3)
    "001ae9fc": ("g_thing_ptrs", "Thing *[2048] master entity pointer table"),
    "001b0a00": ("g_creature_ctrl_ptrs", "CreatureControl *[] lookup table"),
    "00279203": ("g_map_subtiles", "Map[256*256] subtile array (5 bytes/subtile)"),
    "00279204": ("g_map_subtile_flags", "Map[256*256] subtile flags & mapwho (+1 in Map)"),
    "002d33c5": ("g_slabmap_base", "SlabMap[85*85] slab grid base (6 bytes/slab)"),
    "002d33ca": ("g_slabmap", "SlabMap[85*85] slab owner/attrib (+5 in SlabMap)"),
    "002ddd1b": ("g_rooms", "Room[] dungeon rooms array (stride 0x45 = 69 bytes)"),
    "002ddd25": ("g_room_slabs_count", "Room.slabs_count (+0x0a in Room, stride 0x45)"),
    "002e0589": ("g_dungeons", "Dungeon[5] per-player dungeon state (0x1508 bytes/player)"),
    "002e8bee": ("g_game_turn", "Current deterministic simulation turn (GameTurn)"),
    "002e8bf2": ("g_CompPlayer_turn", "Secondary game turn counter"),
    "002e8bf6": ("g_action_random_seed", "Deterministic lockstep ACTION_RANDOM PRNG seed"),
    "002e8bfa": ("g_unsynced_random_seed", "Non-networked UNSYNCED_RANDOM PRNG seed (visuals/audio)"),
    "002eb543": ("g_neutral_player_number", "Neutral player index (5)"),
    "002eb544": ("g_hero_player_number", "Good/Hero player index (4)"),
    "002f10ce": ("g_my_player_word", "Packed local player state word (high byte = g_my_player_number)"),
    "002f10d1": ("g_my_player_number", "Local player index (0..4)"),
    "0019033b": ("g_subtile_to_slab_lut", "Lookup table mapping subtile (0..255) to slab (subtile / 3)"),
    "001927e0": ("g_slab_attr_table", "Slab kind configuration attribute table"),
    "00192fe0": ("g_room_config_stats", "Room kind cost/health/slab configuration table"),
    "00196fc0": ("g_sin_cos_lut", "2048-angle fixed-point sine/cosine lookup table"),
    # PlayerInfo[5] array (base 0x0019d0c8 / 0x0019d0ce, stride 0x4ef = 1,263 bytes)
    "0019d0b6": ("g_game_system_flags", "Global game system/mode bitflags (bit 0 = network/multiplayer active)"),
    "0019d0b8": ("g_game_operation_flags", "Global game operation/view bitflags"),
    "0019d0c8": ("g_players", "PlayerInfo[5] array base (stride 0x4ef = 1,263 bytes)"),
    "0019d0cc": ("g_player_alloc_flags", "PlayerInfo.alloc_flags (+0x04 in PlayerInfo)"),
    "0019d0ce": ("g_player_state_base", "PlayerInfo state base (+0x06 in PlayerInfo)"),
    "0019d0d3": ("g_player_packet_slot", "PlayerInfo.packet_slot (+0x0b in PlayerInfo)"),
    "0019d0d8": ("g_player_double_click_turn", "PlayerInfo double-click turn timestamp"),
    "0019d0f2": ("g_player_view_flags", "PlayerInfo view flags"),
    "0019d0f3": ("g_player_id_number", "PlayerInfo.id_number (+0x2b in PlayerInfo)"),
    "0019d0ff": ("g_player_view_type", "PlayerInfo.view_type (+0x37 in PlayerInfo)"),
    "0019d100": ("g_player_active_camera", "PlayerInfo.acamera pointer (+0x38 in PlayerInfo)"),
    "0019d502": ("g_player_controlled_thing_idx", "PlayerInfo.controlled_thing_idx (+0x43a in PlayerInfo)"),
    "0019d506": ("g_player_influenced_thing_idx", "PlayerInfo.influenced_thing_idx (+0x43e in PlayerInfo)"),
    "0019d510": ("g_player_hand_thing_idx", "PlayerInfo.hand_thing_idx (+0x448 in PlayerInfo)"),
    "0019d52b": ("g_player_mp_message_text", "PlayerInfo.mp_message_text[64] (+0x463 in PlayerInfo)"),
    "0019d59a": ("g_player_victory_state", "PlayerInfo.victory_state (+0x4d2 in PlayerInfo)"),
    # Lockstep Packet[5] array (base 0x002e90b8, stride 0x11 = 17 bytes) & Replay State
    "002e90b8": ("g_packets", "Packet[5] lockstep turn packet array (17 bytes/packet)"),
    "002e90bc": ("g_packet_status_flags", "Packet.status_flags (+0x04 in Packet)"),
    "002e90bd": ("g_packet_action_type", "Packet.action (+0x05 in Packet)"),
    "002e90be": ("g_packet_actn_par1", "Packet.actn_par1 (+0x06 in Packet)"),
    "002e90c0": ("g_packet_actn_par2", "Packet.actn_par2 (+0x08 in Packet)"),
    "002e90c2": ("g_packet_pos_x", "Packet.pos_x (+0x0a in Packet)"),
    "002e90c4": ("g_packet_pos_y", "Packet.pos_y (+0x0c in Packet)"),
    "002e90c6": ("g_packet_control_flags", "Packet.control_flags (+0x0e in Packet)"),
    "002e90c8": ("g_packet_player_flags", "Packet.player_flags (+0x10 in Packet)"),
    "002e6fc4": ("g_packet_record_mode", "Packet file recording/playback mode (0=none, 1=load, 2=save)"),
    "002e6fc5": ("g_packet_file_handle", "Open file handle for keeper.pkt replay/save file"),
    "002e6fd1": ("g_packet_file_level_num", "Level number stored in packet replay header"),
    "002e6fdc": ("g_packet_file_total_turns", "Total turns recorded in packet replay file"),
    "002e6fe5": ("g_packet_checksum_verify_enabled", "Non-zero when packet turn checksum verification is enabled"),
    "002ebaf6": ("g_game_type", "Current game mode (1=singleplayer, 2=multiplayer/network)"),
    "002eb541": ("g_network_game_active", "Boolean flag indicating active network multiplayer game"),
    # Bullfrog Network Library (LbNetwork_* in bflib_network.cpp)
    "003dd8a0": ("g_net_service_provider_ptr", "Active LbNetwork ServiceProvider* instance"),
    "003dd8a8": ("g_net_host_player_id", "Host player ID in active LbNetwork session"),
    "003dd88c": ("g_net_local_player_id", "Local player ID in active LbNetwork session"),
    "003dd884": ("g_net_max_players", "Maximum players in active LbNetwork session"),
    "003dd894": ("g_net_exchange_buffer_ptr", "Pointer to current turn exchange buffer"),
    "003dd898": ("g_net_exchange_packet_size", "Size in bytes of single player exchange buffer"),
    "003dd89c": ("g_net_composite_buffer_ptr", "Composite multi-player exchange buffer pointer"),
    "003dd860": ("g_net_in_send_flag", "Re-entrancy guard flag during LbNetwork send/callbacks"),
    # Frontend Network Lobby (frontnet.cpp)
    "00335dcf": ("g_frontnet_service_count", "Number of enumerated network services (IPX/Modem/Serial)"),
    "00335dd3": ("g_frontnet_service_scroll_offset", "Scroll offset in frontend network service list"),
    "00335dd7": ("g_frontnet_selected_service_idx", "Currently selected network service index"),
    "003359a3": ("g_frontnet_session_count", "Number of enumerated network game sessions"),
    "003359a7": ("g_frontnet_session_scroll_offset", "Scroll offset in frontend session list"),
    "003359ab": ("g_frontnet_selected_session_idx", "Selected session index in frontend lobby"),
    "0033607f": ("g_frontnet_player_count", "Number of players currently in lobby session"),
    "003359cb": ("g_frontnet_player_scroll_offset", "Scroll offset in lobby player list"),
    "00336033": ("g_frontnet_chat_message_count", "Number of lobby chat messages"),
    "00336037": ("g_frontnet_chat_scroll_offset", "Scroll offset in lobby chat message list"),
    "0033613f": ("g_frontnet_com_port_count", "Number of serial COM ports (4)"),
    "00335e1b": ("g_frontnet_com_port_scroll_offset", "Scroll offset in serial COM port list"),
    "00335e1f": ("g_frontnet_selected_com_port", "Selected COM port index"),
    "00335e27": ("g_frontnet_selected_baud_rate", "Selected modem/serial baud rate index"),
    "003358f3": ("g_frontnet_player_lobby_state", "Per-player 12-byte lobby state array"),
    # Display, Screen, Palette, Input, Audio & 3D Renderer
    "0019cbac": ("g_log_sprintf_buf", "Global char[1024] string formatting buffer"),
    "0019cfac": ("g_file_path_buf", "Global file path formatting buffer"),
    "0019cba2": ("g_mouse_cursor_x", "Current mouse X screen coordinate"),
    "0019cba4": ("g_mouse_cursor_y", "Current mouse Y screen coordinate"),
    "0019cba6": ("g_units_per_pixel", "UI scale factor (units per pixel: 1 at 320x200, 2 at 640x400/480)"),
    "001991b8": ("g_frontend_font_ptr", "Loaded GUI/frontend bitmap font pointer"),
    "00199210": ("g_display_palette", "Active 768-byte 256-color VGA palette buffer"),
    "00199228": ("g_scratch_work_buf", "Shared 64KB scratch/pathfinding/loading buffer"),
    "00387220": ("g_key_to_ascii_table", "Scancode-to-ASCII keyboard translation table"),
    "0038c61c": ("g_ariadne_nav_state", "Ariadne pathfinding/navigation global state"),
    "003d982c": ("g_screen_width", "Active screen width in pixels (lbDisplay.PhysicalScreenWidth)"),
    "003d9830": ("g_screen_height", "Active screen height in pixels (lbDisplay.PhysicalScreenHeight)"),
    "003d9834": ("g_screen_pitch", "Active screen scanline pitch in bytes"),
    "003d9864": ("g_graphics_window_width", "Active 3D viewport width (lbDisplay.GraphicsWindowWidth)"),
    "003d9868": ("g_graphics_window_height", "Active 3D viewport height (lbDisplay.GraphicsWindowHeight)"),
    "003d9874": ("g_lb_display_draw_flags", "Bullfrog display draw flags (lbDisplay.DrawFlags)"),
    "003d9878": ("g_active_screen_mode", "Active Bullfrog screen mode enum (0x0d = 640x480)"),
    "003d9885": ("g_render_frame_skip", "Frame skip counter for rendering"),
    "003d98b4": ("g_lb_current_font_ptr", "Active Bullfrog font sprite table (lbFontPtr)"),
    "00387d1c": ("g_render_depth_buckets", "Depth-sort bucket head pointers (704 buckets, 0..0x2bf)"),
    "00387d20": ("g_render_poly_write_ptr", "Current write pointer into 3D render polygon primitive buffer"),
    "002f317f": ("g_render_poly_buf_start", "Start of 3D render polygon primitive buffer"),
    "0033317f": ("g_render_poly_buf_end", "End of 3D render polygon primitive buffer"),
    "00191d34": ("g_view_render_radius", "3D dungeon view subtile render radius"),
    "00191d3c": ("g_view_projection_mode", "Active 3D camera projection mode (isometric vs perspective)"),
    "00387d28": ("g_viewport_center_x", "3D viewport screen center X"),
    "00387d2c": ("g_viewport_center_y", "3D viewport screen center Y"),
    "00361c10": ("g_pixmap_fade_tables", "64x256 palette light/shade fade lookup tables (DATA/PALETTE.DAT)"),
    "00365c10": ("g_pixmap_ghost_tables", "256-color translucency/ghost remap tables"),
    "003de9a8": ("g_lb_sprite_remap_ptr", "Active 256-byte colour remap table pointer for sprite blitting"),
    "003df651": ("g_sound_driver_ready", "Boolean flag indicating AIL sound driver initialized"),
    "003df814": ("g_sound_active_flag", "Boolean flag indicating active sound playback"),
    "003e02b0": ("g_heap_alloc_list_head", "Bullfrog memory manager allocation block list head"),
}


# ============================================================================
# 2. CURATED SEMANTIC FUNCTION NAMES (Address -> (Name, Description))
# ============================================================================
CURATED_FUNCTIONS = {
    # Core shared BFLib & Engine helpers called across all modules
    0x000F4448: ("_watcom_entry", "DOS/4GW Watcom C/C++ entry point"),
    0x000DDAF0: ("LbErrorLog", "Bullfrog ERRORLOG(__FILE__, __LINE__, msg) handler"),
    0x000DDAF8: ("LbWarnLog", "Bullfrog WARNLOG(__FILE__, __LINE__, msg) handler"),
    0x000DDAFC: ("compute_things_checksum", "Deterministic lockstep checksum across all 2,048 Thing slots"),
    0x000DD964: ("things_collide_at", "3D bounding-box collision check between two Coord3d positions"),
    0x000DD93C: ("coord3d_equal", "6-byte equality comparison between two Coord3d structures"),
    0x000DD920: ("prepare_file_path", "Build full file path in g_file_path_buf"),
    0x0007A2C0: ("get_script_command_id", "Case-insensitive lookup of script token in CommandDesc table"),
    0x000E7714: ("dk_sprintf", "Formatted string builder (sprintf)"),
    0x000EA290: ("dk_stricmp", "Case-insensitive string comparison"),
    0x000EA1EF: ("dk_strcpy", "String copy helper"),
    0x000EA21D: ("dk_atoi", "ASCII string to integer conversion"),
    0x000E6A10: ("LbScreenWaitVbi", "Wait for vertical blank / screen sync"),
    0x000E6B20: ("LbTextDraw", "Draw text string using g_lb_current_font_ptr"),
    0x000E6D80: ("LbTextDrawFormatted", "Draw formatted text in text window"),
    0x000E7750: ("LbScreenSetup", "Initialize VESA/VGA screen mode, resolution, and palette"),
    0x000E792C: ("LbScreenReset", "Restore previous video mode and release screen buffers"),
    0x000E797C: ("LbScreenLock", "Lock software backbuffer for direct pixel rendering"),
    0x000E79D0: ("LbScreenUnlock", "Unlock software backbuffer after rendering"),
    0x000E7A14: ("LbScreenSwap", "Blit/flip software backbuffer to display memory"),
    0x000E830C: ("LbDataLoadAll", "Load a table of DATA/*.DAT and *.TAB asset files"),
    0x000E83C8: ("LbDataFreeAll", "Free a table of loaded DATA/*.DAT and *.TAB asset files"),
    0x000E83F0: ("LbDataFree", "Free a single loaded asset buffer"),
    0x000E846C: ("LbPaletteSet", "Upload 768-byte 256-color RGB palette to VGA DAC"),
    0x000E8560: ("LbKeyboardRead", "Poll keyboard input state"),
    0x000E8980: ("LbFileOpen", "Open file by path and mode"),
    0x000E8A34: ("LbFileWrite", "Write bytes to open file handle"),
    0x000E8A80: ("LbFileRead", "Read bytes from open file handle"),
    0x000E8C83: ("LbFileClose", "Close open file handle"),
    0x000E8CA8: ("LbMemoryCopy", "Fast memory block copy / clear helper"),
    0x000E9484: ("LbFileLoadAt", "Allocate and load entire file into memory"),
    0x000EB818: ("LbTimerClock", "Read millisecond system timer clock"),
    0x000EFD90: ("LbNetLog", "Write diagnostic entry to Bullfrog network log"),
    # packet.cpp (38 functions)
    0x0005D32C: ("packet_check_all_room_ traps_sync", "Validate room and trap state before turn packet processing"),
    0x0005D34C: ("packet_validate_active_Catalogue_entries", "Scan 86 catalogue slots for valid string pointers"),
    0x0005D35C: ("packet_resync_network_game_state", "Chunked full-game-state network resynchronization via LbNetwork_Exchange"),
    0x0005D7B5: ("packet_build_local_player_turn_packet", "Capture local player cursor, hand, and mode into turn Packet"),
    0x0005DA11: ("packet_init_level_replay_or_resync", "Re-initialize level state and reload packet stream on resync/replay"),
    0x0005DC27: ("packet_exchange_all_players_packets", "Exchange per-turn Packet structs across peers via LbNetwork_Exchange"),
    0x0005DDE9: ("set_packet_control_flag", "OR control bitflag into pkt->control_flags (+0x0e)"),
    0x0005DDEE: ("set_packet_action", "Populate pkt->action (+0x05), actn_par1 (+0x06), and actn_par2 (+0x08)"),
    0x0005DE00: ("packet_find_next_active_player", "Find next active non-spectator player index in g_players"),
    0x0005DE7C: ("process_players_packet_control_flags", "Apply incoming Packet.player_flags and control_flags to PlayerInfo"),
    0x0005DF2F: ("packet_vio_table_data_block", "Embedded data/thunk block in packet.cpp"),
    0x0005E01E: ("process_all_players_turn_packets", "Main per-turn dispatcher executing Packet actions for all active players"),
    0x0005EB8D: ("process_players_dungeon_control_packet", "Execute dungeon-view Packet action for a player"),
    0x0005EC71: ("process_players_creature_control_packet", "Execute first-person creature possession Packet movement & instance actions"),
    0x0005F001: ("process_players_spectator_packet", "Handle spectator view packet toggle"),
    0x0005F049: ("process_players_map_view_packet", "Handle parchment map view zoom/exit packet actions"),
    0x0005F163: ("process_players_global_packet_action", "Execute global hotkeys, pause, message, and view-mode Packet actions"),
    0x0005F3AD: ("process_players_creature_passenger_packet", "Update camera position and actions while riding a possessed creature"),
    0x0005F438: ("packet_update_player_zoom_box", "Update player camera zoom/bounding box from packet control flags"),
    0x0005F4D9: ("packet_check_thing_interaction_valid", "Verify whether player can interact with target Thing in packet"),
    0x0005F577: ("packet_can_player_afford_room_or_trap", "Check if player gold covers cost of room/trap kind"),
    0x0005F5DB: ("packet_is_subtile_revealed_for_player", "Check if map subtile (x, y) is revealed for player bitmask"),
    0x0005F6C5: ("process_players_dungeon_command_packet", "Master switch executing dungeon build, dig, slap, pickup, drop, and spell Packet commands"),
    0x00061751: ("clear_packet_for_player", "Zero out a player's 17-byte Packet slot for the upcoming turn"),
    0x000617C9: ("open_new_packet_file_for_save", "Create and write header for new .PKT replay recording file"),
    0x00061883: ("write_turn_packets_to_file", "Compute Thing checksum (compute_things_checksum) and write turn Packets to .PKT file"),
    0x000618F5: ("open_packet_file_for_load", "Open existing .PKT replay file and validate header"),
    0x000619BE: ("load_turn_packets_from_file", "Seek and read per-turn Packet structures from open .PKT replay file"),
    0x00061BDE: ("packet_possess_thing_direct", "Directly attach player camera to possessed Thing"),
    0x00061CA3: ("packet_handle_double_click_action", "Process double-click packet action within turn threshold"),
    0x00061D43: ("packet_activate_dungeon_special_or_spell", "Trigger dungeon special box or spell from packet command"),
    0x00061E86: ("packet_tag_slab_for_digging", "Tag or untag a 3x3 subtile slab area for imp digging"),
    0x00061F1B: ("packet_has_selectable_things_at_subtile", "Check if subtile contains Things selectable by player hand"),
    0x00061F77: ("packet_update_pause_mode_state", "Synchronize pause state across singleplayer/multiplayer packet flags"),
    0x000620E6: ("packet_compute_full_dungeon_checksum", "Compute deterministic checksum over Dungeon and SlabMap state"),
    0x00062238: ("packet_backup_catalogue_settings", "Save current level/campaign catalogue settings before packet replay"),
    0x000622F1: ("packet_restore_catalogue_settings", "Restore level/campaign catalogue settings after packet replay"),
    0x000623AA: ("packet_draw_debug_cursor_overlay", "Lock screen and draw multiplayer/packet cursor overlay"),
    # ssprite.cpp (25 functions)
    0x000DB120: ("ssprite_clear_render_state", "Initialize scaled sprite renderer state variables"),
    0x000DB1A4: ("ssprite_decode_and_blit_rle_frame", "Decode and blit RLE-compressed sprite frame from TbSprite table"),
    0x000DB5C4: ("get_thing_anim_sprite_id_checked", "Resolve animation graphic ID for Thing model/class with bounds logging"),
    0x000DBB70: ("update_neutral_thing_anim_sprite", "Update animation sprite for neutral (owner 5) Thing"),
    0x000DBB84: ("update_thing_anim_sprite_frame", "Advance and validate Thing animation sprite frame"),
    0x000DC0E0: ("ssprite_noop_stub", "Empty sprite callback stub"),
    0x000DC0F0: ("scale_value_by_creature_level", "Scale base stat value by creature experience level (10% per level)"),
    0x000DC150: ("get_scaled_viewport_bottom_y", "Calculate scaled bottom Y coordinate of 3D viewport"),
    0x000DC184: ("toggle_player_view_flag_bit", "XOR a bit in g_player_view_flags for player_idx"),
    0x000DC19C: ("is_subtile_revealed_and_within_bounds", "Check if (subtile_x, subtile_y) is within 0..254 and revealed to player"),
    0x000DC2C8: ("get_2d_box_distance_xy", "Compute 2D octile/box distance between (x1, y1) and (x2, y2)"),
    0x000DC324: ("get_2d_squared_distance", "Compute 2D squared Euclidean distance between two Coord3d positions"),
    0x000DC354: ("get_2d_box_distance", "Compute 2D octile/box distance between two Coord3d positions"),
    0x000DC3C0: ("get_3d_box_distance", "Compute 3D octile/box distance between two Coord3d positions"),
    0x000DC4A0: ("get_chessboard_distance_xy", "Compute Chebyshev max(|dx|, |dy|) distance between (x1, y1) and (x2, y2)"),
    0x000DC4CC: ("get_2d_angle_between_positions", "Compute 2D angle (0..2047) from pos1 to pos2"),
    0x000DC5C4: ("get_3d_angles_between_positions", "Compute horizontal and vertical angles from pos1 to pos2"),
    0x000DC800: ("ssprite_blit_span_alpha_mode0", "Scanline RLE sprite blitter helper (alpha/remap mode 0)"),
    0x000DC859: ("ssprite_blit_span_alpha_mode1", "Scanline RLE sprite blitter helper (alpha/remap mode 1)"),
    0x000DC8AD: ("ssprite_blit_span_alpha_mode2", "Scanline RLE sprite blitter helper (alpha/remap mode 2)"),
    0x000DC8F9: ("ssprite_blit_span_alpha_mode3", "Scanline RLE sprite blitter helper (alpha/remap mode 3)"),
    0x000DC95A: ("ssprite_return_true_stub", "Constant true (1) return stub"),
    0x000DC984: ("move_coord3d_along_angle_checked", "Advance Coord3d position along angle and speed with map bounds clamp"),
    0x000DCCFC: ("can_thing_traverse_subtile", "Check whether Thing can move through target subtile"),
    0x000DCD44: ("trace_line_of_sight_2d", "Raymarch 2D line of sight between two Coord3d positions"),
    # setup.cpp (26 functions)
    0x00069A90: ("setup_init_color_tables", "Initialize colour lookup tables before screen setup"),
    0x00069ACB: ("setup_build_fade_palette_steps", "Precompute palette fade step tables"),
    0x00069BA0: ("setup_compare_display_modes", "Compare two display mode descriptors for compatibility"),
    0x00069C2C: ("setup_detect_physical_memory_tier", "Map detected physical RAM (MB) to asset caching tier (8/16/24/32 MB)"),
    0x00069C7F: ("setup_load_vga_256_palettes", "Load VGA 256-color palettes and shade tables from DATA/"),
    0x00069EDC: ("setup_load_alpha_and_light_tables", "Load DATA/ALPHA.COL and lighting tables"),
    0x0006A356: ("setup_free_gui_data_files", "Free loaded GUI data/sprite tables (data/gui.dat)"),
    0x0006A412: ("setup_verify_cdrom_installation", "Verify installation files and prompt for Dungeon Keeper CD-ROM if missing"),
    0x0006A553: ("setup_load_core_game_data", "Load core game data files via LbDataLoadAll"),
    0x0006A652: ("setup_shutdown_video_and_audio", "Shutdown sound, timer, and LbScreenReset on game exit"),
    0x0006A689: ("setup_init_game_screen_and_subsystems", "Initialize VESA/VGA screen mode (disallow MCGA minimal) and game subsystems"),
    0x0006AAC0: ("setup_reload_gui_and_mode_sprites", "Reload GUI sprite tables (data/gui.dat) for current screen resolution"),
    0x0006ADC5: ("setup_load_text_strings_dat", "Load localized text strings from DATA/TEXT.DAT"),
    0x0006AE14: ("setup_clear_pointer_array", "Zero out array of pointers"),
    0x0006AE37: ("setup_clear_screen_backbuffer", "Clear full screen backbuffer (g_screen_width * g_screen_height)"),
    0x0006AE80: ("setup_show_loading_raw_screen", "Load and display LOADING.RAW splash screen with palette"),
    0x0006B04D: ("setup_init_mouse_and_pointer", "Initialize mouse driver and cursor pointer"),
    0x0006B0C8: ("setup_load_pointer_sprites", "Load mouse pointer sprite sheet (data/hpointer.dat)"),
    0x0006B12B: ("setup_free_pointer_sprites", "Detach mouse cursor and free pointer sprite sheet"),
    0x0006B16F: ("setup_allocate_graphics_heap", "Allocate and initialize sprite/texture graphics heap"),
    0x0006B4C7: ("setup_show_bullfrog_legal_splash", "Enter 640x480 mode (0x0d) and display DATA/LEGAL.RAW splash"),
    0x0006B7D0: ("setup_init_trig_and_projection_tables", "Initialize 512-entry trigonometry/projection lookup tables"),
    0x0006B820: ("setup_switch_screen_resolution", "Switch active screen mode, reallocate viewport, and reload sprites"),
    0x0006BDDA: ("setup_compute_creature_eye_offset", "Compute first-person camera eye height offset for creature breed"),
    0x0006C22B: ("setup_interpolate_creature_eye_bob", "Interpolate head-bob offset during creature possession movement"),
    0x0006C2CC: ("setup_apply_possession_lens_and_eye", "Configure eye lens effect and camera height when entering possession"),
    # engine3.cpp (36 functions)
    0x000948A0: ("engine3_clip_and_emit_textured_tri_mode0", "Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 0)"),
    0x000956B8: ("engine3_clip_and_emit_textured_tri_mode1", "Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 1)"),
    0x000964D0: ("engine3_clip_and_emit_textured_tri_mode2", "Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 2)"),
    0x00098104: ("engine3_emit_unclipped_tri_variant0", "Emit unclipped 3D triangle primitive (variant 0) into g_render_poly_write_ptr"),
    0x00098248: ("engine3_emit_unclipped_tri_variant1", "Emit unclipped 3D triangle primitive (variant 1) into g_render_poly_write_ptr"),
    0x0009838C: ("engine3_emit_unclipped_tri_variant2", "Emit unclipped 3D triangle primitive (variant 2) into g_render_poly_write_ptr"),
    0x000984D0: ("engine3_emit_unclipped_tri_variant3", "Emit unclipped 3D triangle primitive (variant 3) into g_render_poly_write_ptr"),
    0x00098614: ("engine3_build_subtile_column_geometry_high", "Generate 3D voxel column faces for visible subtile strip (high detail)"),
    0x00098CB8: ("engine3_build_subtile_column_geometry_med", "Generate 3D voxel column faces for visible subtile strip (medium detail)"),
    0x0009BDF0: ("engine3_build_subtile_column_geometry_low", "Generate 3D voxel column faces for visible subtile strip (low detail)"),
    0x0009EF3C: ("engine3_clear_visible_subtile_span_list", "Reset visible subtile span buffers for g_view_render_radius"),
    0x0009F2A4: ("engine3_intersect_frustum_edge_with_grid", "Compute subtile grid intersection along camera frustum ray"),
    0x0009F314: ("engine3_scan_frustum_subtile_bounds", "Compute left/right visible subtile bounds across frustum edges"),
    0x0009F8BC: ("engine3_determine_visible_subtiles_for_camera", "Build visible subtile list for isometric or first-person camera"),
    0x0009FE38: ("engine3_begin_frame_projection_setup", "Reset g_render_poly_write_ptr and select projection transform for frame"),
    0x0009FF84: ("engine3_rasterize_depth_buckets_high", "Traverse all 704 depth buckets (0x2bf..0) and rasterize queued polygons (high)"),
    0x000A3A4C: ("engine3_update_camera_rotation_trig", "Compute sin/cos camera rotation matrix terms"),
    0x000A3AA0: ("engine3_project_camera_grid_to_screen", "Transform world subtile grid coordinates into camera/screen space"),
    0x000A434C: ("engine3_sweep_visible_subtile_rows", "Iterate visible subtile rows within g_view_render_radius"),
    0x000A49EC: ("engine3_draw_creature_health_and_level_bar", "Render floating health bar and level flower above Creature Thing"),
    0x000A5030: ("engine3_copy_sprite_draw_descriptor", "Copy 28-byte (7-dword) sprite draw descriptor"),
    0x000A5178: ("engine3_queue_room_flag_or_special_sprite", "Queue room efficiency/banner sprite into depth bucket"),
    0x000A5240: ("engine3_draw_queued_billboard_sprite", "Render depth-sorted 2D billboard sprite in 3D view"),
    0x000A596C: ("engine3_draw_string_billboard", "Render floating text/number billboard in 3D view"),
    0x000A5A74: ("engine3_draw_keeper_hand_or_object_sprite", "Render Keeper hand or held object sprite in 3D view"),
    0x000A5C28: ("engine3_draw_translucent_effect_sprite", "Render translucent spell/effect sprite in 3D view"),
    0x000A5D4C: ("engine3_mark_slab_subtiles_rendered", "Mark 3x3 subtiles of a slab as visited during frame rendering"),
    0x000A5DD0: ("engine3_init_quad_vertex_uvs", "Populate quad vertex indices and 16.16 fixed-point UV coordinates"),
    0x000A5E00: ("engine3_is_triangle_front_facing_and_inside_frustum", "Test 3D triangle clip flags (0x1f8) and 2D screen-space cross product winding"),
    0x000A5E60: ("engine3_project_vertex_perspective", "Project 3D camera-space vertex to 2D screen coordinates (perspective)"),
    0x000A5FF0: ("engine3_enqueue_line_primitive", "Append 3D line primitive into g_render_poly_write_ptr and depth bucket"),
    0x000A60A0: ("engine3_enqueue_point_or_marker_primitive", "Append marker primitive into g_render_poly_write_ptr and depth bucket"),
    0x000A6134: ("engine3_collect_and_queue_subtile_things", "Walk mapwho Thing linked list on subtile and queue sprites for rendering"),
    0x000A6504: ("engine3_rasterize_depth_buckets_low", "Traverse all 704 depth buckets (0x2bf..0) and rasterize queued polygons (low)"),
    0x000A6990: ("engine3_render_3d_dungeon_viewport", "Top-level 3D dungeon viewport renderer (clamps camera zoom, projects & rasterizes scene)"),
    0x000AA3A8: ("engine3_scale_coord_by_camera_zoom", "Scale world coordinate delta by camera zoom factor"),
}


def infer_descriptive_function_name(
    mod_name: str,
    fva: int,
    orig_inferred: str,
    orig_reason: str,
    pseudo: str,
    callees: list[str],
    callers: list[str],
) -> tuple[str, str]:
    """
    Derive a meaningful, human-readable function name for any function in the target modules
    that is not already in CURATED_FUNCTIONS.
    """
    if fva in CURATED_FUNCTIONS:
        return CURATED_FUNCTIONS[fva]

    prefix = Path(mod_name).stem.lower()
    if prefix.startswith("bflib_"):
        prefix = "lbnet" if "network" in prefix else prefix

    # If the original string-based name already has a clear Lb* or descriptive slug, clean it up
    if not orig_inferred.startswith("sub_"):
        clean = re.sub(r"^dk_", "", orig_inferred)
        clean = re.sub(r"_[0-9a-fA-F]{6}$", "", clean)
        if not clean.lower().startswith(prefix):
            clean = f"{prefix}_{clean}"
        return (f"{clean}_{fva:06x}", orig_reason)

    # Analyze function body patterns to synthesize a descriptive behavioral name!
    body_flat = " ".join(pseudo.splitlines())

    # 1. GUI button maintain / draw / click callbacks in frontnet.cpp & draw.cpp
    if "*in_EAX = *in_EAX & 0xf7" in body_flat or "(*in_EAX & 0xf7)" in body_flat:
        if "00335dd3" in body_flat:
            return (f"{prefix}_maintain_service_scroll_btn_{fva:06x}", "Updates GUI button enabled flag from service scroll offset")
        if "003359a7" in body_flat:
            return (f"{prefix}_maintain_session_scroll_btn_{fva:06x}", "Updates GUI button enabled flag from session scroll offset")
        if "003359cb" in body_flat or "0033607f" in body_flat:
            return (f"{prefix}_maintain_player_list_btn_{fva:06x}", "Updates GUI button enabled flag from lobby player count/scroll")
        if "00336037" in body_flat:
            return (f"{prefix}_maintain_chat_scroll_btn_{fva:06x}", "Updates GUI button enabled flag from lobby chat scroll")
        return (f"{prefix}_maintain_gui_button_state_{fva:06x}", "Updates GUI button enabled bit (0x08)")

    if "00335dd3 = DAT_00335dd3 + -1" in body_flat:
        return (f"{prefix}_scroll_service_list_up_{fva:06x}", "Decrements network service list scroll offset")
    if "00335dd3 = DAT_00335dd3 + 1" in body_flat:
        return (f"{prefix}_scroll_service_list_down_{fva:06x}", "Increments network service list scroll offset")
    if "003359a7 = DAT_003359a7 + -1" in body_flat:
        return (f"{prefix}_scroll_session_list_up_{fva:06x}", "Decrements network session list scroll offset")
    if "003359a7 = DAT_003359a7 + 1" in body_flat:
        return (f"{prefix}_scroll_session_list_down_{fva:06x}", "Increments network session list scroll offset")
    if "003359cb = DAT_003359cb + -1" in body_flat:
        return (f"{prefix}_scroll_player_list_up_{fva:06x}", "Decrements lobby player list scroll offset")
    if "003359cb = DAT_003359cb + 1" in body_flat:
        return (f"{prefix}_scroll_player_list_down_{fva:06x}", "Increments lobby player list scroll offset")
    if "00336037 = DAT_00336037 + -1" in body_flat:
        return (f"{prefix}_scroll_chat_list_up_{fva:06x}", "Decrements lobby chat scroll offset")
    if "00336037 = DAT_00336037 + 1" in body_flat:
        return (f"{prefix}_scroll_chat_list_down_{fva:06x}", "Increments lobby chat scroll offset")
    if "00335e1b = DAT_00335e1b + -1" in body_flat:
        return (f"{prefix}_scroll_com_port_up_{fva:06x}", "Decrements COM port scroll offset")
    if "00335e1b = DAT_00335e1b + 1" in body_flat:
        return (f"{prefix}_scroll_com_port_down_{fva:06x}", "Increments COM port scroll offset")

    # 2. Text / Font / Sprite drawing in frontnet.cpp & draw.cpp
    if "000e6b20" in body_flat or "000e6d80" in body_flat or "003d98b4" in body_flat:
        if "in_EAX + 0x33" in body_flat:
            return (f"{prefix}_draw_gui_button_label_{fva:06x}", "Sets active font and draws GUI button text label")
        if "002ee7b8" in body_flat or "0019d52b" in body_flat:
            return (f"{prefix}_draw_multiplayer_chat_box_{fva:06x}", "Renders multiplayer chat input/message text")
        return (f"{prefix}_draw_text_overlay_{fva:06x}", "Configures font/flags and draws text on screen")

    # 3. Map subtile / SlabMap / Thing / CreatureControl / Room / Dungeon operations
    if "0019033b" in body_flat and ("00279203" in body_flat or "00279204" in body_flat):
        return (f"{prefix}_update_slab_subtile_columns_{fva:06x}", "Updates 3x3 subtile map entries for slab coordinates")
    if "001b0a00" in body_flat and "001ae9fc" in body_flat:
        return (f"{prefix}_update_creature_and_thing_{fva:06x}", "Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)")
    if "001b0a00" in body_flat:
        return (f"{prefix}_update_creature_control_{fva:06x}", "Accesses CreatureControl state in g_creature_ctrl_ptrs")
    if "002ddd1b" in body_flat or "002ddd25" in body_flat or "* 0x45" in body_flat:
        return (f"{prefix}_process_dungeon_room_{fva:06x}", "Operates on Room structure in g_rooms (stride 0x45)")
    if "00279203" in body_flat or "00279204" in body_flat:
        return (f"{prefix}_process_map_subtile_{fva:06x}", "Reads/modifies Map[256x256] subtile data")
    if "002d33ca" in body_flat or "002d33c5" in body_flat:
        return (f"{prefix}_process_slabmap_tile_{fva:06x}", "Reads/modifies SlabMap[85x85] tile entry")
    if "001ae9fc" in body_flat:
        return (f"{prefix}_process_thing_entity_{fva:06x}", "Looks up Thing* in g_thing_ptrs[2048] and updates state")
    if "002e0589" in body_flat or "* 0x1508" in body_flat or "* 0xa84" in body_flat:
        return (f"{prefix}_update_player_dungeon_{fva:06x}", "Accesses per-player Dungeon state (stride 0x1508)")
    if "0019d0c8" in body_flat or "0019d0ce" in body_flat or "* 0x4ef" in body_flat:
        return (f"{prefix}_update_player_view_state_{fva:06x}", "Accesses per-player PlayerInfo state (stride 0x4ef)")
    if "002e8bf6" in body_flat:
        return (f"{prefix}_roll_action_random_{fva:06x}", "Evaluates deterministic lockstep PRNG (g_action_random_seed)")
    if "002e8bfa" in body_flat:
        return (f"{prefix}_roll_unsynced_random_{fva:06x}", "Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed)")
    if "0038c61c" in body_flat:
        return (f"{prefix}_update_ariadne_navigation_{fva:06x}", "Updates Ariadne pathfinding/navigation state")
    if "003df814" in body_flat or "003df651" in body_flat:
        return (f"{prefix}_audio_driver_op_{fva:06x}", "Checks g_sound_active_flag / g_sound_driver_ready and updates audio")
    if "003dd8a0" in body_flat:
        return (f"{prefix}_service_provider_op_{fva:06x}", "Operates on active LbNetwork ServiceProvider instance")
    if "000e8ca8" in body_flat and len(pseudo.splitlines()) <= 12:
        return (f"{prefix}_copy_state_struct_{fva:06x}", "Copies fixed-size state structure via LbMemoryCopy")
    if "+ 0x1f) == 5" in body_flat or "+ 0x1f) == '\\x05'" in body_flat:
        return (f"{prefix}_handle_creature_thing_{fva:06x}", "Checks Thing->class_id == 5 (Creature) and processes state")
    if "+ 0x1f) == 1" in body_flat or "+ 0x1f) == '\\x01'" in body_flat:
        return (f"{prefix}_handle_object_thing_{fva:06x}", "Checks Thing->class_id == 1 (Object) and processes state")
    if "+ 0x1f) == 8" in body_flat or "+ 0x1f) == '\\b'" in body_flat:
        return (f"{prefix}_handle_trap_thing_{fva:06x}", "Checks Thing->class_id == 8 (Trap) and processes state")
    if "+ 0x1f) == 9" in body_flat or "+ 0x1f) == '\\t'" in body_flat:
        return (f"{prefix}_handle_door_thing_{fva:06x}", "Checks Thing->class_id == 9 (Door) and processes state")

    return (f"{prefix}_fn_{fva:06x}", f"Module {mod_name} procedure @ 0x{fva:06x}")


def rewrite_function_pseudocode(
    pseudo: str,
    fva: int,
    new_fn_name: str,
    addr_to_fn_name: dict[int, str],
) -> tuple[str, str]:
    """
    Transform a single function's decompiled C++ pseudocode:
      1. Replace FUN_000xxxxx in the signature and all call sites with meaningful function names.
      2. Replace DAT_00xxxxxx / _DAT_00xxxxxx with verified global symbol names.
      3. Infer and rename Watcom register parameters (in_EAX, in_EDX, unaff_EBX, in_ECX).
      4. Infer and rename decompiler local temporaries (iVar1, uVar2, pbVar3, etc.).
      5. Annotate known struct field offsets (Thing, Packet, PlayerInfo, GuiButton, Camera).
    """
    code = pseudo

    # 1. Replace all FUN_000xxxxx / _entry identifiers with their semantic function names
    def replace_fun(m: re.Match) -> str:
        hex_part = m.group(1)
        va = int(hex_part, 16)
        return addr_to_fn_name.get(va, m.group(0))

    code = re.sub(r"\bFUN_([0-9a-fA-F]{8})\b", replace_fun, code)

    # 2. Replace all _DAT_00xxxxxx and DAT_00xxxxxx with verified global names
    def replace_dat(m: re.Match) -> str:
        prefix_u = m.group(1)  # optional leading underscore
        addr_hex = m.group(2).lower()
        if addr_hex in VERIFIED_GLOBALS:
            return VERIFIED_GLOBALS[addr_hex][0]
        addr_val = int(addr_hex, 16)
        if 0x003DD800 <= addr_val <= 0x003DDA00:
            return f"g_net_bss_{addr_hex}"
        if 0x00334600 <= addr_val <= 0x00336200:
            return f"g_frontnet_bss_{addr_hex}"
        if 0x00387D00 <= addr_val <= 0x00388400:
            return f"g_engine3_bss_{addr_hex}"
        if 0x003D9800 <= addr_val <= 0x003D9900:
            return f"g_display_bss_{addr_hex}"
        if addr_val < 0x0019A000:
            return f"g_data_{addr_hex}"
        return f"g_bss_{addr_hex}"

    code = re.sub(r"\b(_?)DAT_([0-9a-fA-F]{8})\b", replace_dat, code)

    # 3. Infer semantic roles for Watcom register inputs (in_EAX, in_EDX, unaff_EBX/in_EBX, in_ECX)
    var_renames = {}

    # Check how in_EAX is used
    if re.search(r"in_EAX\s*\+\s*(?:0x52|0x1f|0x20|100|0x64)\b", code):
        var_renames["in_EAX"] = "thing"
    elif re.search(r"in_EAX\s*\+\s*(?:0x33|0x1b)\b", code) or "*in_EAX = *in_EAX & 0xf7" in code:
        var_renames["in_EAX"] = "gui_btn"
    elif re.search(r"in_EAX\s*\+\s*(?:0xe|5|6|8)\b", code) and fva in (0x5DDE9, 0x5DDEE):
        var_renames["in_EAX"] = "packet"
    elif re.search(r"in_EAX\s*\*\s*0x4ef\b", code):
        var_renames["in_EAX"] = "player_idx"
    elif re.search(r"in_EAX\s*\*\s*0x45\b", code):
        var_renames["in_EAX"] = "room_idx"
    elif re.search(r"in_EAX\s*\+\s*0x17\b", code):
        var_renames["in_EAX"] = "camera"
    elif re.search(r"\*\(ushort \*\)\(in_EAX \+ 2\) & 0x1f8", code):
        var_renames["in_EAX"] = "tri_v0"
    elif fva in (0xDC324, 0xDC354, 0xDC3C0, 0xDC4CC, 0xDC5C4, 0xDC984, 0xDCD44, 0xDD93C):
        var_renames["in_EAX"] = "pos_a"
    else:
        var_renames["in_EAX"] = "arg_eax"
        var_renames["in_AL"] = "arg_al"
        var_renames["in_AX"] = "arg_ax"

    # Check how in_EDX is used
    if re.search(r"\*\(ushort \*\)\(in_EDX \+ 2\) & 0x1f8", code):
        var_renames["in_EDX"] = "tri_v1"
    elif fva in (0xDC324, 0xDC354, 0xDC3C0, 0xDC4CC, 0xDC5C4, 0xDCD44, 0xDD93C, 0xDD964):
        var_renames["in_EDX"] = "pos_b"
    elif "g_subtile_to_slab_lut)[in_EDX]" in code:
        var_renames["in_EDX"] = "subtile_x"
    else:
        var_renames["in_EDX"] = "arg_edx"
        var_renames["in_DL"] = "arg_dl"
        var_renames["in_DX"] = "arg_dx"

    # Check how unaff_EBX / in_EBX is used
    if re.search(r"\*\(ushort \*\)\(unaff_EBX \+ 2\) & 0x1f8", code):
        var_renames["unaff_EBX"] = "tri_v2"
    elif "g_subtile_to_slab_lut)[unaff_EBX]" in code:
        var_renames["unaff_EBX"] = "subtile_y"
    else:
        var_renames["unaff_EBX"] = "arg_ebx"
        var_renames["in_EBX"] = "arg_ebx"
        var_renames["unaff_BX"] = "arg_bx"
        var_renames["unaff_BL"] = "arg_bl"

    var_renames["in_ECX"] = "arg_ecx"
    var_renames["in_CX"] = "arg_cx"
    var_renames["in_CL"] = "arg_cl"

    # 4. Infer semantic names for decompiler local temporaries (iVar1, uVar2, pbVar3, etc.)
    used_var_names = set(var_renames.values())

    def alloc_unique_var(base: str) -> str:
        if base not in used_var_names:
            used_var_names.add(base)
            return base
        idx = 2
        while f"{base}_{idx}" in used_var_names:
            idx += 1
        name = f"{base}_{idx}"
        used_var_names.add(name)
        return name

    # Find all temporary variables ([A-Za-z]*Var[0-9]+)
    temp_vars = sorted(
        set(re.findall(r"\b(?:[a-z]{1,4})Var\d+\b", code)),
        key=lambda s: int(re.search(r"\d+$", s).group(0)),
    )

    for tv in temp_vars:
        # Check assignments to `tv = ...;`
        assigns = re.findall(rf"\b{tv}\s*=\s*([^;]+);", code)
        first_rhs = assigns[0] if assigns else ""
        rhs_all = " ; ".join(assigns)
        inferred_v = None

        if "g_thing_ptrs" in rhs_all or re.search(rf"\b{tv}\s*\+\s*(?:0x1f|0x4f|0x52|100|0x64)\b", code):
            inferred_v = "thing_ptr"
        elif "g_creature_ctrl_ptrs" in rhs_all:
            inferred_v = "cctrl_ptr"
        elif "g_rooms" in rhs_all or "g_room_slabs_count" in rhs_all:
            inferred_v = "room_ptr"
        elif "* 0x45" in first_rhs:
            inferred_v = "room_off"
        elif "* 0x4ef" in first_rhs:
            inferred_v = "player_off"
        elif "* 0x1508" in first_rhs or "* 0xa84" in first_rhs:
            inferred_v = "dungeon_off"
        elif "* 0x11" in first_rhs:
            inferred_v = "packet_off"
        elif "g_action_random_seed" in first_rhs:
            inferred_v = "rand_seed"
        elif "g_unsynced_random_seed" in first_rhs:
            inferred_v = "unsynced_seed"
        elif "g_render_poly_write_ptr" in first_rhs:
            inferred_v = "poly_write_ptr"
        elif "g_lb_display_draw_flags" in first_rhs:
            inferred_v = "saved_draw_flags"
        elif "g_units_per_pixel" in first_rhs:
            inferred_v = "ui_scale"
        elif "g_subtile_to_slab_lut" in first_rhs:
            inferred_v = "slab_coord"
        elif "LbFileOpen" in rhs_all:
            inferred_v = "file_handle"
        elif "LbTimerClock" in rhs_all:
            inferred_v = "clock_ms"
        elif "LbScreenLock" in rhs_all or "LbScreenSetup" in rhs_all:
            inferred_v = "screen_res"
        elif any(fn in first_rhs for fn in ("LbNetwork_", "lbnet_", "dk_LbNetwork")):
            inferred_v = "net_status"
        elif re.search(rf"for\s*\(\s*{tv}\s*=", code):
            inferred_v = "loop_i"
        elif tv.startswith("bVar"):
            inferred_v = "flag"
        elif tv.startswith("pcVar"):
            inferred_v = "str_ptr"
        elif tv.startswith("pbVar"):
            inferred_v = "byte_ptr"
        elif tv.startswith("puVar"):
            inferred_v = "word_ptr"
        elif tv.startswith("piVar"):
            inferred_v = "int_ptr"
        elif tv.startswith("sVar"):
            inferred_v = "short_val"
        elif tv.startswith("cVar"):
            inferred_v = "ch"
        elif tv.startswith("uVar"):
            inferred_v = "uval"
        else:
            inferred_v = "val"

        var_renames[tv] = alloc_unique_var(inferred_v)

    for old_v, new_v in var_renames.items():
        code = re.sub(rf"\b{re.escape(old_v)}\b", new_v, code)

    # 5. Annotate known struct field offsets on `thing` / `thing_ptr`, `gui_btn`, `camera`, `packet`
    struct_offset_annotations = [
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*6\b", "thing->owner"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*8\b", "thing->active_state"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0xd\b", "thing->mappos.val_x"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0xf\b", "thing->mappos.val_y"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0x13\b", "thing->anim_sprite"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0x1b\b", "thing->index_or_angle"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0x1f\b", "thing->class_id"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0x20\b", "thing->model"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0x4f\b", "thing->render_flags"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*0x52\b", "thing->health"),
        (r"\bthing(?:_ptr(?:_\d+)?)?\s*\+\s*(?:100|0x64)\b", "thing->ccontrol_idx"),
        (r"\bgui_btn\s*\+\s*0x33\b", "gui_btn->content"),
        (r"\bgui_btn\s*\+\s*0x1b\b", "gui_btn->id_num"),
        (r"\bcamera\s*\+\s*0x17\b", "camera->zoom"),
    ]
    out_lines = []
    for line in code.splitlines():
        notes = []
        for pat, field_desc in struct_offset_annotations:
            if re.search(pat, line) and field_desc not in line:
                notes.append(field_desc)
        if notes and "/*" not in line:
            line = f"{line} /* {', '.join(notes)} */"
        out_lines.append(line)
    code = "\n".join(out_lines)

    # Extract updated prototype from first signature line
    sig_re = re.compile(r"^\s*([A-Za-z_][A-Za-z0-9_\s\*]+?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*\(([^)]*)\)", re.M)
    m = sig_re.search(code)
    if m:
        ret_t = " ".join(m.group(1).split())
        params_t = " ".join(m.group(3).split()) or "void"
        proto = f"{ret_t} {new_fn_name}({params_t});"
    else:
        proto = f"undefined4 {new_fn_name}(void);"

    return code, proto


def main():
    root = Path(sys.argv[1] if len(sys.argv) > 1 else "/home/merlin/workspace/dk-reconstructed")
    mode = sys.argv[2] if len(sys.argv) > 2 else "priority"

    priority_mods = {
        "frontnet.cpp",
        "packet.cpp",
        "bflib/bflib_network.cpp",
        "setup.cpp",
        "engine3.cpp",
        "draw.cpp",
        "ssprite.cpp",
    }

    catalog_dir = root / "catalog"
    mod_map = json.loads((catalog_dir / "module_map.json").read_text(encoding="utf-8"))

    functions_by_addr = {}
    with open(catalog_dir / "functions.jsonl", "r", encoding="utf-8") as f:
        for line in f:
            if line.strip():
                r = json.loads(line)
                functions_by_addr[r["address"]] = r

    # Pass 1: Build master address -> semantic function name map across ALL 4,418 functions
    addr_to_fn_name = dict(CURATED_FUNCTIONS)
    used_fn_names = {v[0] for v in CURATED_FUNCTIONS.values()}

    for mod_name, fn_list in mod_map.items():
        for fn_meta in fn_list:
            faddr = fn_meta["address"]
            fva = parse_hex(faddr)
            raw_fn = functions_by_addr.get(faddr, {})
            pseudo = raw_fn.get("pseudocode") or ""
            if fva in CURATED_FUNCTIONS:
                sname, sreason = CURATED_FUNCTIONS[fva]
            else:
                sname, sreason = infer_descriptive_function_name(
                    mod_name,
                    fva,
                    fn_meta.get("inferred_name", f"sub_{fva:06x}"),
                    fn_meta.get("inferred_reason", ""),
                    pseudo,
                    raw_fn.get("callees", []),
                    raw_fn.get("callers", []),
                )
                if sname in used_fn_names:
                    sname = f"{sname}_{fva:06x}"
                used_fn_names.add(sname)

            addr_to_fn_name[fva] = sname
            fn_meta["inferred_name"] = sname
            fn_meta["inferred_reason"] = sreason

    target_mods = set(mod_map.keys()) if mode == "all" else priority_mods
    print(f"Rewriting {len(target_mods)} modules (mode={mode})...")

    # Pass 2: Rewrite target .cpp files with semantic function, global, parameter, and local variable names
    src_dir = root / "src"
    rewritten_fn_count = 0

    for mod_name in sorted(target_mods):
        fn_list = mod_map.get(mod_name, [])
        if not fn_list:
            continue
        cpp_path = src_dir / mod_name
        rel_inc = "../include" if "/" not in mod_name else "../../include"

        out_blocks = [
            f"""/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: {mod_name}
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: {len(fn_list)}
 */

#include "{rel_inc}/dk_types.h"
#include "{rel_inc}/dk_structs.h"
#include "{rel_inc}/dk_globals.h"
#include "{rel_inc}/dk_functions.h"
"""
        ]

        # Extract existing annotated function bodies (which already include LbErrorLog & string comments)
        existing_bodies = {}
        if cpp_path.exists():
            raw_cpp = cpp_path.read_text(encoding="utf-8")
            for m_blk in re.finditer(
                r"\*\s*Address\s*:\s*(0x[0-9a-fA-F]+).*?\*{70,}/\s*\n(.*?)(?=\n/\*{70,}|\Z)",
                raw_cpp,
                re.S,
            ):
                existing_bodies[m_blk.group(1).lower()] = m_blk.group(2).strip()

        for fn_meta in fn_list:
            faddr = fn_meta["address"]
            fva = parse_hex(faddr)
            raw_fn = functions_by_addr[faddr]
            sname = addr_to_fn_name[fva]
            sreason = fn_meta["inferred_reason"]
            attr = fn_meta.get("attribution_method", "")
            src_lines = fn_meta.get("source_lines", [])
            callers = [addr_to_fn_name.get(parse_hex(c), c) for c in raw_fn.get("callers", [])]
            callees = [addr_to_fn_name.get(parse_hex(c), c) for c in raw_fn.get("callees", [])]
            info = raw_fn.get("info") or {}
            total_bytes = (info.get("body") or {}).get("total_bytes", "unknown")

            # Prefer existing annotated body (with LbErrorLog & string comments)
            pseudo = existing_bodies.get(faddr.lower()) or raw_fn.get("pseudocode") or ""
            rewritten_code, proto = rewrite_function_pseudocode(
                pseudo, fva, sname, addr_to_fn_name
            )
            fn_meta["prototype"] = proto
            rewritten_fn_count += 1

            header_lines = [
                "/" + "*" * 78,
                f" * Function : {sname} (Original VA: {faddr}, Ghidra: {raw_fn['name']})",
                f" * Prototype: {proto}",
                f" * Address  : {faddr} (Size: {total_bytes} bytes)",
                f" * Module   : {mod_name} [{attr}]",
            ]
            if src_lines:
                header_lines.append(f" * OrigLine : {mod_name} lines {', '.join(map(str, src_lines))}")
            header_lines.extend(
                [
                    f" * Purpose  : {sreason}",
                    f" * Callers  : {len(callers)} -> {', '.join(callers[:8])}{' ...' if len(callers) > 8 else ''}",
                    f" * Callees  : {len(callees)} -> {', '.join(callees[:8])}{' ...' if len(callees) > 8 else ''}",
                    " " + "*" * 78 + "/",
                ]
            )
            out_blocks.append("\n".join(header_lines) + "\n" + rewritten_code.strip() + "\n")

        cpp_path.write_text("\n".join(out_blocks) + "\n", encoding="utf-8")

    # Save updated module_map.json
    (catalog_dir / "module_map.json").write_text(json.dumps(mod_map, indent=2), encoding="utf-8")

    # Update include/dk_globals.h with all VERIFIED_GLOBALS
    inc_dir = root / "include"
    globals_map = json.loads((catalog_dir / "globals_map.json").read_text(encoding="utf-8"))
    with open(inc_dir / "dk_globals.h", "w", encoding="utf-8") as f:
        f.write(
            """#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Verified Global Memory Symbols (.data_obj3 & .bss_obj3)
 */

#include "dk_types.h"
#include "dk_structs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* === Semantically Verified Engine Globals === */
"""
        )
        for addr_hex, (gname, gdesc) in sorted(VERIFIED_GLOBALS.items()):
            f.write(f"/* VA: 0x{addr_hex} - {gdesc} */\nextern uint8_t {gname}[];\n")

        f.write("\n/* === Additional Referenced Global Symbols === */\n")
        for g in globals_map[:600]:
            hex8 = f"{parse_hex(g['address']):08x}"
            if hex8 in VERIFIED_GLOBALS:
                continue
            f.write(
                f"/* VA: {g['address']} ({g['segment']}, {g['reference_count']} refs) */\n"
                f"extern uint8_t {g['symbol_name']}[];\n"
            )
        f.write("\n#ifdef __cplusplus\n}\n#endif\n")

    # Update include/dk_functions.h with updated prototypes
    total_fns = sum(len(v) for v in mod_map.values())
    with open(inc_dir / "dk_functions.h", "w", encoding="utf-8") as f:
        f.write(
            f"""#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Master Function Prototype Index ({total_fns} procedures)
 */

#include "dk_types.h"
#include "dk_structs.h"

#ifdef __cplusplus
extern "C" {{
#endif
"""
        )
        for mod_name in sorted(mod_map.keys()):
            f.write(f"\n/* === Module: {mod_name} ({len(mod_map[mod_name])} functions) === */\n")
            for fn_entry in mod_map[mod_name]:
                f.write(
                    f"/* VA: {fn_entry['address']} | {fn_entry['inferred_reason']} */\n"
                    f"{fn_entry['prototype']}\n"
                )
        f.write("\n#ifdef __cplusplus\n}\n#endif\n")

    print(
        f"Successfully semantically renamed {rewritten_fn_count} functions across {len(target_mods)} modules "
        f"and updated include/dk_globals.h & include/dk_functions.h!"
    )


if __name__ == "__main__":
    main()
