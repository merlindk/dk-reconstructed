#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Verified Global Memory Symbols (.data_obj3 & .bss_obj3)
 */

#include "dk_types.h"
#include "dk_structs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* === Semantically Verified Engine Globals === */
/* VA: 0x0019033b - Lookup table mapping subtile (0..255) to slab (subtile / 3) */
extern uint8_t g_subtile_to_slab_lut[];
/* VA: 0x00191d34 - 3D dungeon view subtile render radius */
extern uint8_t g_view_render_radius[];
/* VA: 0x00191d3c - Active 3D camera projection mode (isometric vs perspective) */
extern uint8_t g_view_projection_mode[];
/* VA: 0x001927e0 - Slab kind configuration attribute table */
extern uint8_t g_slab_attr_table[];
/* VA: 0x00192fe0 - Room kind cost/health/slab configuration table */
extern uint8_t g_room_config_stats[];
/* VA: 0x00196fc0 - 2048-angle fixed-point sine/cosine lookup table */
extern uint8_t g_sin_cos_lut[];
/* VA: 0x001991b8 - Loaded GUI/frontend bitmap font pointer */
extern uint8_t g_frontend_font_ptr[];
/* VA: 0x00199210 - Active 768-byte 256-color VGA palette buffer */
extern uint8_t g_display_palette[];
/* VA: 0x00199228 - Shared 64KB scratch/pathfinding/loading buffer */
extern uint8_t g_scratch_work_buf[];
/* VA: 0x0019cba2 - Current mouse X screen coordinate */
extern uint8_t g_mouse_cursor_x[];
/* VA: 0x0019cba4 - Current mouse Y screen coordinate */
extern uint8_t g_mouse_cursor_y[];
/* VA: 0x0019cba6 - UI scale factor (units per pixel: 1 at 320x200, 2 at 640x400/480) */
extern uint8_t g_units_per_pixel[];
/* VA: 0x0019cbac - Global char[1024] string formatting buffer */
extern uint8_t g_log_sprintf_buf[];
/* VA: 0x0019cfac - Global file path formatting buffer */
extern uint8_t g_file_path_buf[];
/* VA: 0x0019d0b6 - Global game system/mode bitflags (bit 0 = network/multiplayer active) */
extern uint8_t g_game_system_flags[];
/* VA: 0x0019d0b8 - Global game operation/view bitflags */
extern uint8_t g_game_operation_flags[];
/* VA: 0x0019d0c8 - PlayerInfo[5] array base (stride 0x4ef = 1,263 bytes) */
extern uint8_t g_players[];
/* VA: 0x0019d0cc - PlayerInfo.alloc_flags (+0x04 in PlayerInfo) */
extern uint8_t g_player_alloc_flags[];
/* VA: 0x0019d0ce - PlayerInfo state base (+0x06 in PlayerInfo) */
extern uint8_t g_player_state_base[];
/* VA: 0x0019d0d3 - PlayerInfo.packet_slot (+0x0b in PlayerInfo) */
extern uint8_t g_player_packet_slot[];
/* VA: 0x0019d0d8 - PlayerInfo double-click turn timestamp */
extern uint8_t g_player_double_click_turn[];
/* VA: 0x0019d0f2 - PlayerInfo view flags */
extern uint8_t g_player_view_flags[];
/* VA: 0x0019d0f3 - PlayerInfo.id_number (+0x2b in PlayerInfo) */
extern uint8_t g_player_id_number[];
/* VA: 0x0019d0ff - PlayerInfo.view_type (+0x37 in PlayerInfo) */
extern uint8_t g_player_view_type[];
/* VA: 0x0019d100 - PlayerInfo.acamera pointer (+0x38 in PlayerInfo) */
extern uint8_t g_player_active_camera[];
/* VA: 0x0019d502 - PlayerInfo.controlled_thing_idx (+0x43a in PlayerInfo) */
extern uint8_t g_player_controlled_thing_idx[];
/* VA: 0x0019d506 - PlayerInfo.influenced_thing_idx (+0x43e in PlayerInfo) */
extern uint8_t g_player_influenced_thing_idx[];
/* VA: 0x0019d510 - PlayerInfo.hand_thing_idx (+0x448 in PlayerInfo) */
extern uint8_t g_player_hand_thing_idx[];
/* VA: 0x0019d52b - PlayerInfo.mp_message_text[64] (+0x463 in PlayerInfo) */
extern uint8_t g_player_mp_message_text[];
/* VA: 0x0019d59a - PlayerInfo.victory_state (+0x4d2 in PlayerInfo) */
extern uint8_t g_player_victory_state[];
/* VA: 0x001ae9fc - Thing *[2048] master entity pointer table */
extern uint8_t g_thing_ptrs[];
/* VA: 0x001b0a00 - CreatureControl *[] lookup table */
extern uint8_t g_creature_ctrl_ptrs[];
/* VA: 0x00279203 - Map[256*256] subtile array (5 bytes/subtile) */
extern uint8_t g_map_subtiles[];
/* VA: 0x00279204 - Map[256*256] subtile flags & mapwho (+1 in Map) */
extern uint8_t g_map_subtile_flags[];
/* VA: 0x002d33c5 - SlabMap[85*85] slab grid base (6 bytes/slab) */
extern uint8_t g_slabmap_base[];
/* VA: 0x002d33ca - SlabMap[85*85] slab owner/attrib (+5 in SlabMap) */
extern uint8_t g_slabmap[];
/* VA: 0x002ddd1b - Room[] dungeon rooms array (stride 0x45 = 69 bytes) */
extern uint8_t g_rooms[];
/* VA: 0x002ddd25 - Room.slabs_count (+0x0a in Room, stride 0x45) */
extern uint8_t g_room_slabs_count[];
/* VA: 0x002e0589 - Dungeon[5] per-player dungeon state (0x1508 bytes/player) */
extern uint8_t g_dungeons[];
/* VA: 0x002e6fc4 - Packet file recording/playback mode (0=none, 1=load, 2=save) */
extern uint8_t g_packet_record_mode[];
/* VA: 0x002e6fc5 - Open file handle for keeper.pkt replay/save file */
extern uint8_t g_packet_file_handle[];
/* VA: 0x002e6fd1 - Level number stored in packet replay header */
extern uint8_t g_packet_file_level_num[];
/* VA: 0x002e6fdc - Total turns recorded in packet replay file */
extern uint8_t g_packet_file_total_turns[];
/* VA: 0x002e6fe5 - Non-zero when packet turn checksum verification is enabled */
extern uint8_t g_packet_checksum_verify_enabled[];
/* VA: 0x002e8bee - Current deterministic simulation turn (GameTurn) */
extern uint8_t g_game_turn[];
/* VA: 0x002e8bf2 - Secondary game turn counter */
extern uint8_t g_CompPlayer_turn[];
/* VA: 0x002e8bf6 - Deterministic lockstep ACTION_RANDOM PRNG seed */
extern uint8_t g_action_random_seed[];
/* VA: 0x002e8bfa - Non-networked UNSYNCED_RANDOM PRNG seed (visuals/audio) */
extern uint8_t g_unsynced_random_seed[];
/* VA: 0x002e90b8 - Packet[5] lockstep turn packet array (17 bytes/packet) */
extern uint8_t g_packets[];
/* VA: 0x002e90bc - Packet.status_flags (+0x04 in Packet) */
extern uint8_t g_packet_status_flags[];
/* VA: 0x002e90bd - Packet.action (+0x05 in Packet) */
extern uint8_t g_packet_action_type[];
/* VA: 0x002e90be - Packet.actn_par1 (+0x06 in Packet) */
extern uint8_t g_packet_actn_par1[];
/* VA: 0x002e90c0 - Packet.actn_par2 (+0x08 in Packet) */
extern uint8_t g_packet_actn_par2[];
/* VA: 0x002e90c2 - Packet.pos_x (+0x0a in Packet) */
extern uint8_t g_packet_pos_x[];
/* VA: 0x002e90c4 - Packet.pos_y (+0x0c in Packet) */
extern uint8_t g_packet_pos_y[];
/* VA: 0x002e90c6 - Packet.control_flags (+0x0e in Packet) */
extern uint8_t g_packet_control_flags[];
/* VA: 0x002e90c8 - Packet.player_flags (+0x10 in Packet) */
extern uint8_t g_packet_player_flags[];
/* VA: 0x002eb541 - Boolean flag indicating active network multiplayer game */
extern uint8_t g_network_game_active[];
/* VA: 0x002eb543 - Neutral player index (5) */
extern uint8_t g_neutral_player_number[];
/* VA: 0x002eb544 - Good/Hero player index (4) */
extern uint8_t g_hero_player_number[];
/* VA: 0x002ebaf6 - Current game mode (1=singleplayer, 2=multiplayer/network) */
extern uint8_t g_game_type[];
/* VA: 0x002f10ce - Packed local player state word (high byte = g_my_player_number) */
extern uint8_t g_my_player_word[];
/* VA: 0x002f10d1 - Local player index (0..4) */
extern uint8_t g_my_player_number[];
/* VA: 0x002f317f - Start of 3D render polygon primitive buffer */
extern uint8_t g_render_poly_buf_start[];
/* VA: 0x0033317f - End of 3D render polygon primitive buffer */
extern uint8_t g_render_poly_buf_end[];
/* VA: 0x003358f3 - Per-player 12-byte lobby state array */
extern uint8_t g_frontnet_player_lobby_state[];
/* VA: 0x003359a3 - Number of enumerated network game sessions */
extern uint8_t g_frontnet_session_count[];
/* VA: 0x003359a7 - Scroll offset in frontend session list */
extern uint8_t g_frontnet_session_scroll_offset[];
/* VA: 0x003359ab - Selected session index in frontend lobby */
extern uint8_t g_frontnet_selected_session_idx[];
/* VA: 0x003359cb - Scroll offset in lobby player list */
extern uint8_t g_frontnet_player_scroll_offset[];
/* VA: 0x00335dcf - Number of enumerated network services (IPX/Modem/Serial) */
extern uint8_t g_frontnet_service_count[];
/* VA: 0x00335dd3 - Scroll offset in frontend network service list */
extern uint8_t g_frontnet_service_scroll_offset[];
/* VA: 0x00335dd7 - Currently selected network service index */
extern uint8_t g_frontnet_selected_service_idx[];
/* VA: 0x00335e1b - Scroll offset in serial COM port list */
extern uint8_t g_frontnet_com_port_scroll_offset[];
/* VA: 0x00335e1f - Selected COM port index */
extern uint8_t g_frontnet_selected_com_port[];
/* VA: 0x00335e27 - Selected modem/serial baud rate index */
extern uint8_t g_frontnet_selected_baud_rate[];
/* VA: 0x00336033 - Number of lobby chat messages */
extern uint8_t g_frontnet_chat_message_count[];
/* VA: 0x00336037 - Scroll offset in lobby chat message list */
extern uint8_t g_frontnet_chat_scroll_offset[];
/* VA: 0x0033607f - Number of players currently in lobby session */
extern uint8_t g_frontnet_player_count[];
/* VA: 0x0033613f - Number of serial COM ports (4) */
extern uint8_t g_frontnet_com_port_count[];
/* VA: 0x00361c10 - 64x256 palette light/shade fade lookup tables (DATA/PALETTE.DAT) */
extern uint8_t g_pixmap_fade_tables[];
/* VA: 0x00365c10 - 256-color translucency/ghost remap tables */
extern uint8_t g_pixmap_ghost_tables[];
/* VA: 0x00387220 - Scancode-to-ASCII keyboard translation table */
extern uint8_t g_key_to_ascii_table[];
/* VA: 0x00387d1c - Depth-sort bucket head pointers (704 buckets, 0..0x2bf) */
extern uint8_t g_render_depth_buckets[];
/* VA: 0x00387d20 - Current write pointer into 3D render polygon primitive buffer */
extern uint8_t g_render_poly_write_ptr[];
/* VA: 0x00387d28 - 3D viewport screen center X */
extern uint8_t g_viewport_center_x[];
/* VA: 0x00387d2c - 3D viewport screen center Y */
extern uint8_t g_viewport_center_y[];
/* VA: 0x0038c61c - Ariadne pathfinding/navigation global state */
extern uint8_t g_ariadne_nav_state[];
/* VA: 0x003d982c - Active screen width in pixels (lbDisplay.PhysicalScreenWidth) */
extern uint8_t g_screen_width[];
/* VA: 0x003d9830 - Active screen height in pixels (lbDisplay.PhysicalScreenHeight) */
extern uint8_t g_screen_height[];
/* VA: 0x003d9834 - Active screen scanline pitch in bytes */
extern uint8_t g_screen_pitch[];
/* VA: 0x003d9864 - Active 3D viewport width (lbDisplay.GraphicsWindowWidth) */
extern uint8_t g_graphics_window_width[];
/* VA: 0x003d9868 - Active 3D viewport height (lbDisplay.GraphicsWindowHeight) */
extern uint8_t g_graphics_window_height[];
/* VA: 0x003d9874 - Bullfrog display draw flags (lbDisplay.DrawFlags) */
extern uint8_t g_lb_display_draw_flags[];
/* VA: 0x003d9878 - Active Bullfrog screen mode enum (0x0d = 640x480) */
extern uint8_t g_active_screen_mode[];
/* VA: 0x003d9885 - Frame skip counter for rendering */
extern uint8_t g_render_frame_skip[];
/* VA: 0x003d98b4 - Active Bullfrog font sprite table (lbFontPtr) */
extern uint8_t g_lb_current_font_ptr[];
/* VA: 0x003dd860 - Re-entrancy guard flag during LbNetwork send/callbacks */
extern uint8_t g_net_in_send_flag[];
/* VA: 0x003dd884 - Maximum players in active LbNetwork session */
extern uint8_t g_net_max_players[];
/* VA: 0x003dd88c - Local player ID in active LbNetwork session */
extern uint8_t g_net_local_player_id[];
/* VA: 0x003dd894 - Pointer to current turn exchange buffer */
extern uint8_t g_net_exchange_buffer_ptr[];
/* VA: 0x003dd898 - Size in bytes of single player exchange buffer */
extern uint8_t g_net_exchange_packet_size[];
/* VA: 0x003dd89c - Composite multi-player exchange buffer pointer */
extern uint8_t g_net_composite_buffer_ptr[];
/* VA: 0x003dd8a0 - Active LbNetwork ServiceProvider* instance */
extern uint8_t g_net_service_provider_ptr[];
/* VA: 0x003dd8a8 - Host player ID in active LbNetwork session */
extern uint8_t g_net_host_player_id[];
/* VA: 0x003de9a8 - Active 256-byte colour remap table pointer for sprite blitting */
extern uint8_t g_lb_sprite_remap_ptr[];
/* VA: 0x003df651 - Boolean flag indicating AIL sound driver initialized */
extern uint8_t g_sound_driver_ready[];
/* VA: 0x003df814 - Boolean flag indicating active sound playback */
extern uint8_t g_sound_active_flag[];
/* VA: 0x003e02b0 - Bullfrog memory manager allocation block list head */
extern uint8_t g_heap_alloc_list_head[];

/* === Additional Referenced Global Symbols === */
/* VA: 0x001fffff (.bss_obj3, 160 refs) */
extern uint8_t g_bss_001fffff[];
/* VA: 0x0038c61e (.bss_obj3, 139 refs) */
extern uint8_t g_bss_0038c61e[];
/* VA: 0x003af898 (.bss_obj3, 128 refs) */
extern uint8_t g_bss_003af898[];
/* VA: 0x003af896 (.bss_obj3, 125 refs) */
extern uint8_t g_bss_003af896[];
/* VA: 0x00388304 (.bss_obj3, 122 refs) */
extern uint8_t g_bss_00388304[];
/* VA: 0x0018429c (.data_obj3, 121 refs) */
extern uint8_t g_dat_0018429c[];
/* VA: 0x00334728 (.bss_obj3, 118 refs) */
extern uint8_t g_bss_00334728[];
/* VA: 0x003df818 (.bss_obj3, 118 refs) */
extern uint8_t g_bss_003df818[];
/* VA: 0x003df81c (.bss_obj3, 118 refs) */
extern uint8_t g_bss_003df81c[];
/* VA: 0x0019e975 (.bss_obj3, 117 refs) */
extern uint8_t g_bss_0019e975[];
/* VA: 0x00179c04 (.data_obj3, 110 refs) */
extern uint8_t g_dat_00179c04[];
/* VA: 0x003e02a8 (.bss_obj3, 109 refs) */
extern uint8_t g_bss_003e02a8[];
/* VA: 0x003e02ac (.bss_obj3, 109 refs) */
extern uint8_t g_bss_003e02ac[];
/* VA: 0x003e02a4 (.bss_obj3, 108 refs) */
extern uint8_t g_bss_003e02a4[];
/* VA: 0x0038c618 (.bss_obj3, 105 refs) */
extern uint8_t g_bss_0038c618[];
/* VA: 0x0019e973 (.bss_obj3, 104 refs) */
extern uint8_t g_bss_0019e973[];
/* VA: 0x00199230 (.data_obj3, 97 refs) */
extern uint8_t g_dat_00199230[];
/* VA: 0x00387d18 (.bss_obj3, 97 refs) */
extern uint8_t g_bss_00387d18[];
/* VA: 0x001842ac (.data_obj3, 95 refs) */
extern uint8_t g_dat_001842ac[];
/* VA: 0x0038c620 (.bss_obj3, 94 refs) */
extern uint8_t g_bss_0038c620[];
/* VA: 0x002f3180 (.bss_obj3, 92 refs) */
extern uint8_t g_bss_002f3180[];
/* VA: 0x0038c626 (.bss_obj3, 92 refs) */
extern uint8_t g_bss_0038c626[];
/* VA: 0x001bd5ed (.bss_obj3, 91 refs) */
extern uint8_t g_bss_001bd5ed[];
/* VA: 0x002d33c6 (.bss_obj3, 90 refs) */
extern uint8_t g_bss_002d33c6[];
/* VA: 0x002e90c7 (.bss_obj3, 90 refs) */
extern uint8_t g_bss_002e90c7[];
/* VA: 0x0018b67e (.data_obj3, 88 refs) */
extern uint8_t g_dat_0018b67e[];
/* VA: 0x001921c6 (.data_obj3, 84 refs) */
extern uint8_t g_dat_001921c6[];
/* VA: 0x003e03f0 (.bss_obj3, 84 refs) */
extern uint8_t g_bss_003e03f0[];
/* VA: 0x003d981c (.bss_obj3, 83 refs) */
extern uint8_t g_bss_003d981c[];
/* VA: 0x0018b67f (.data_obj3, 81 refs) */
extern uint8_t g_dat_0018b67f[];
/* VA: 0x003d9848 (.bss_obj3, 79 refs) */
extern uint8_t g_bss_003d9848[];
/* VA: 0x003d9844 (.bss_obj3, 78 refs) */
extern uint8_t g_bss_003d9844[];
/* VA: 0x003d9818 (.bss_obj3, 77 refs) */
extern uint8_t g_bss_003d9818[];
/* VA: 0x001991c0 (.data_obj3, 77 refs) */
extern uint8_t g_dat_001991c0[];
/* VA: 0x003db5fc (.bss_obj3, 72 refs) */
extern uint8_t g_bss_003db5fc[];
/* VA: 0x002d33c8 (.bss_obj3, 71 refs) */
extern uint8_t g_bss_002d33c8[];
/* VA: 0x002ee923 (.bss_obj3, 71 refs) */
extern uint8_t g_bss_002ee923[];
/* VA: 0x0019d0f7 (.bss_obj3, 70 refs) */
extern uint8_t g_bss_0019d0f7[];
/* VA: 0x00192134 (.data_obj3, 70 refs) */
extern uint8_t g_dat_00192134[];
/* VA: 0x00192138 (.data_obj3, 68 refs) */
extern uint8_t g_dat_00192138[];
/* VA: 0x00186fad (.data_obj3, 67 refs) */
extern uint8_t g_dat_00186fad[];
/* VA: 0x003d9824 (.bss_obj3, 67 refs) */
extern uint8_t g_bss_003d9824[];
/* VA: 0x001842a0 (.data_obj3, 66 refs) */
extern uint8_t g_dat_001842a0[];
/* VA: 0x001991c8 (.data_obj3, 65 refs) */
extern uint8_t g_dat_001991c8[];
/* VA: 0x00388ec0 (.bss_obj3, 63 refs) */
extern uint8_t g_bss_00388ec0[];
/* VA: 0x00195f88 (.data_obj3, 62 refs) */
extern uint8_t g_dat_00195f88[];
/* VA: 0x003d97d0 (.bss_obj3, 60 refs) */
extern uint8_t g_bss_003d97d0[];
/* VA: 0x0019d5b7 (.bss_obj3, 59 refs) */
extern uint8_t g_bss_0019d5b7[];
/* VA: 0x0019d0fd (.bss_obj3, 55 refs) */
extern uint8_t g_bss_0019d0fd[];
/* VA: 0x0019daa6 (.bss_obj3, 54 refs) */
extern uint8_t g_bss_0019daa6[];
/* VA: 0x0038c621 (.bss_obj3, 54 refs) */
extern uint8_t g_bss_0038c621[];
/* VA: 0x002ddd21 (.bss_obj3, 53 refs) */
extern uint8_t g_bss_002ddd21[];
/* VA: 0x0038c625 (.bss_obj3, 53 refs) */
extern uint8_t g_bss_0038c625[];
/* VA: 0x0019215c (.data_obj3, 52 refs) */
extern uint8_t g_dat_0019215c[];
/* VA: 0x0019e976 (.bss_obj3, 48 refs) */
extern uint8_t g_bss_0019e976[];
/* VA: 0x00335182 (.bss_obj3, 48 refs) */
extern uint8_t g_bss_00335182[];
/* VA: 0x00335186 (.bss_obj3, 48 refs) */
extern uint8_t g_bss_00335186[];
/* VA: 0x002e0594 (.bss_obj3, 48 refs) */
extern uint8_t g_bss_002e0594[];
/* VA: 0x0034bbd6 (.bss_obj3, 48 refs) */
extern uint8_t g_bss_0034bbd6[];
/* VA: 0x00387d58 (.bss_obj3, 48 refs) */
extern uint8_t g_bss_00387d58[];
/* VA: 0x00388ec4 (.bss_obj3, 48 refs) */
extern uint8_t g_bss_00388ec4[];
/* VA: 0x003d1b5c (.bss_obj3, 48 refs) */
extern uint8_t g_bss_003d1b5c[];
/* VA: 0x00279209 (.bss_obj3, 47 refs) */
extern uint8_t g_bss_00279209[];
/* VA: 0x0038c624 (.bss_obj3, 47 refs) */
extern uint8_t g_bss_0038c624[];
/* VA: 0x001842cc (.data_obj3, 47 refs) */
extern uint8_t g_dat_001842cc[];
/* VA: 0x002c9203 (.bss_obj3, 46 refs) */
extern uint8_t g_bss_002c9203[];
/* VA: 0x003df170 (.bss_obj3, 46 refs) */
extern uint8_t g_bss_003df170[];
/* VA: 0x001842c0 (.data_obj3, 45 refs) */
extern uint8_t g_dat_001842c0[];
/* VA: 0x00196fa4 (.data_obj3, 45 refs) */
extern uint8_t g_dat_00196fa4[];
/* VA: 0x002eb542 (.bss_obj3, 44 refs) */
extern uint8_t g_bss_002eb542[];
/* VA: 0x003cf528 (.bss_obj3, 44 refs) */
extern uint8_t g_bss_003cf528[];
/* VA: 0x00196f78 (.data_obj3, 44 refs) */
extern uint8_t g_dat_00196f78[];
/* VA: 0x0019d50c (.bss_obj3, 43 refs) */
extern uint8_t g_bss_0019d50c[];
/* VA: 0x00195f92 (.data_obj3, 43 refs) */
extern uint8_t g_dat_00195f92[];
/* VA: 0x002ddd1e (.bss_obj3, 42 refs) */
extern uint8_t g_bss_002ddd1e[];
/* VA: 0x0019d50e (.bss_obj3, 42 refs) */
extern uint8_t g_bss_0019d50e[];
/* VA: 0x00379395 (.bss_obj3, 42 refs) */
extern uint8_t g_bss_00379395[];
/* VA: 0x002e910d (.bss_obj3, 41 refs) */
extern uint8_t g_bss_002e910d[];
/* VA: 0x0019d0f4 (.bss_obj3, 41 refs) */
extern uint8_t g_bss_0019d0f4[];
/* VA: 0x0033319b (.bss_obj3, 41 refs) */
extern uint8_t g_bss_0033319b[];
/* VA: 0x003d3684 (.bss_obj3, 40 refs) */
extern uint8_t g_bss_003d3684[];
/* VA: 0x00195902 (.data_obj3, 40 refs) */
extern uint8_t g_dat_00195902[];
/* VA: 0x002e1082 (.bss_obj3, 39 refs) */
extern uint8_t g_bss_002e1082[];
/* VA: 0x0019d0bd (.bss_obj3, 39 refs) */
extern uint8_t g_bss_0019d0bd[];
/* VA: 0x0038c61a (.bss_obj3, 39 refs) */
extern uint8_t g_bss_0038c61a[];
/* VA: 0x003d3680 (.bss_obj3, 39 refs) */
extern uint8_t g_bss_003d3680[];
/* VA: 0x003d367c (.bss_obj3, 39 refs) */
extern uint8_t g_bss_003d367c[];
/* VA: 0x003e03f1 (.bss_obj3, 39 refs) */
extern uint8_t g_bss_003e03f1[];
/* VA: 0x002e05b6 (.bss_obj3, 38 refs) */
extern uint8_t g_bss_002e05b6[];
/* VA: 0x00184298 (.data_obj3, 38 refs) */
extern uint8_t g_dat_00184298[];
/* VA: 0x0038c5d0 (.bss_obj3, 38 refs) */
extern uint8_t g_bss_0038c5d0[];
/* VA: 0x00388300 (.bss_obj3, 37 refs) */
extern uint8_t g_bss_00388300[];
/* VA: 0x003e0684 (.bss_obj3, 37 refs) */
extern uint8_t g_bss_003e0684[];
/* VA: 0x002e05bc (.bss_obj3, 36 refs) */
extern uint8_t g_bss_002e05bc[];
/* VA: 0x00200000 (.bss_obj3, 35 refs) */
extern uint8_t g_bss_00200000[];
/* VA: 0x0019213c (.data_obj3, 35 refs) */
extern uint8_t g_dat_0019213c[];
/* VA: 0x0017469c (.data_obj3, 34 refs) */
extern uint8_t g_dat_0017469c[];
/* VA: 0x0017a4d0 (.data_obj3, 34 refs) */
extern uint8_t g_dat_0017a4d0[];
/* VA: 0x0019a2a2 (.bss_obj3, 34 refs) */
extern uint8_t g_bss_0019a2a2[];
/* VA: 0x00186fac (.data_obj3, 34 refs) */
extern uint8_t g_dat_00186fac[];
/* VA: 0x00195f20 (.data_obj3, 34 refs) */
extern uint8_t g_dat_00195f20[];
/* VA: 0x001921cf (.data_obj3, 33 refs) */
extern uint8_t g_dat_001921cf[];
/* VA: 0x0019073b (.data_obj3, 33 refs) */
extern uint8_t g_dat_0019073b[];
/* VA: 0x001e3203 (.bss_obj3, 33 refs) */
extern uint8_t g_bss_001e3203[];
/* VA: 0x0019d51b (.bss_obj3, 33 refs) */
extern uint8_t g_bss_0019d51b[];
/* VA: 0x003e0254 (.bss_obj3, 33 refs) */
extern uint8_t g_bss_003e0254[];
/* VA: 0x001842c8 (.data_obj3, 33 refs) */
extern uint8_t g_dat_001842c8[];
/* VA: 0x00196f08 (.data_obj3, 33 refs) */
extern uint8_t g_dat_00196f08[];
/* VA: 0x00388ebc (.bss_obj3, 32 refs) */
extern uint8_t g_bss_00388ebc[];
/* VA: 0x002ee9c1 (.bss_obj3, 31 refs) */
extern uint8_t g_bss_002ee9c1[];
/* VA: 0x00184290 (.data_obj3, 31 refs) */
extern uint8_t g_dat_00184290[];
/* VA: 0x001842b4 (.data_obj3, 31 refs) */
extern uint8_t g_dat_001842b4[];
/* VA: 0x001842b8 (.data_obj3, 31 refs) */
extern uint8_t g_dat_001842b8[];
/* VA: 0x00196f60 (.data_obj3, 31 refs) */
extern uint8_t g_dat_00196f60[];
/* VA: 0x002e0ea2 (.bss_obj3, 30 refs) */
extern uint8_t g_bss_002e0ea2[];
/* VA: 0x001918b0 (.data_obj3, 30 refs) */
extern uint8_t g_dat_001918b0[];
/* VA: 0x001b93ec (.bss_obj3, 30 refs) */
extern uint8_t g_bss_001b93ec[];
/* VA: 0x002ddd23 (.bss_obj3, 29 refs) */
extern uint8_t g_bss_002ddd23[];
/* VA: 0x001aea00 (.bss_obj3, 29 refs) */
extern uint8_t g_bss_001aea00[];
/* VA: 0x001bd61b (.bss_obj3, 29 refs) */
extern uint8_t g_bss_001bd61b[];
/* VA: 0x003dd83c (.bss_obj3, 29 refs) */
extern uint8_t g_bss_003dd83c[];
/* VA: 0x003dd8b4 (.bss_obj3, 29 refs) */
extern uint8_t g_bss_003dd8b4[];
/* VA: 0x0018c4be (.data_obj3, 28 refs) */
extern uint8_t g_dat_0018c4be[];
/* VA: 0x002e78e9 (.bss_obj3, 28 refs) */
extern uint8_t g_bss_002e78e9[];
/* VA: 0x003d9875 (.bss_obj3, 28 refs) */
extern uint8_t g_bss_003d9875[];
/* VA: 0x002ec62e (.bss_obj3, 28 refs) */
extern uint8_t g_bss_002ec62e[];
/* VA: 0x003bcb90 (.bss_obj3, 28 refs) */
extern uint8_t g_bss_003bcb90[];
/* VA: 0x00195d18 (.data_obj3, 28 refs) */
extern uint8_t g_dat_00195d18[];
/* VA: 0x00196fd0 (.data_obj3, 28 refs) */
extern uint8_t g_dat_00196fd0[];
/* VA: 0x002e9114 (.bss_obj3, 27 refs) */
extern uint8_t g_bss_002e9114[];
/* VA: 0x002ddd24 (.bss_obj3, 27 refs) */
extern uint8_t g_bss_002ddd24[];
/* VA: 0x00192148 (.data_obj3, 27 refs) */
extern uint8_t g_dat_00192148[];
/* VA: 0x00192130 (.data_obj3, 27 refs) */
extern uint8_t g_dat_00192130[];
/* VA: 0x003df8ed (.bss_obj3, 27 refs) */
extern uint8_t g_bss_003df8ed[];
/* VA: 0x003e0d9c (.bss_obj3, 27 refs) */
extern uint8_t g_bss_003e0d9c[];
/* VA: 0x001842d0 (.data_obj3, 27 refs) */
extern uint8_t g_dat_001842d0[];
/* VA: 0x0019df95 (.bss_obj3, 26 refs) */
extern uint8_t g_bss_0019df95[];
/* VA: 0x0019d0f1 (.bss_obj3, 26 refs) */
extern uint8_t g_bss_0019d0f1[];
/* VA: 0x001baded (.bss_obj3, 26 refs) */
extern uint8_t g_bss_001baded[];
/* VA: 0x001bd5f2 (.bss_obj3, 26 refs) */
extern uint8_t g_bss_001bd5f2[];
/* VA: 0x001bcded (.bss_obj3, 26 refs) */
extern uint8_t g_bss_001bcded[];
/* VA: 0x003df514 (.bss_obj3, 26 refs) */
extern uint8_t g_bss_003df514[];
/* VA: 0x003df8e9 (.bss_obj3, 26 refs) */
extern uint8_t g_bss_003df8e9[];
/* VA: 0x003e02fd (.bss_obj3, 26 refs) */
extern uint8_t g_bss_003e02fd[];
/* VA: 0x001842b0 (.data_obj3, 26 refs) */
extern uint8_t g_dat_001842b0[];
/* VA: 0x001842c4 (.data_obj3, 26 refs) */
extern uint8_t g_dat_001842c4[];
/* VA: 0x00196f68 (.data_obj3, 26 refs) */
extern uint8_t g_dat_00196f68[];
/* VA: 0x0019033f (.data_obj3, 25 refs) */
extern uint8_t g_dat_0019033f[];
/* VA: 0x002e6eb6 (.bss_obj3, 25 refs) */
extern uint8_t g_bss_002e6eb6[];
/* VA: 0x002ddd29 (.bss_obj3, 25 refs) */
extern uint8_t g_bss_002ddd29[];
/* VA: 0x002ddd52 (.bss_obj3, 25 refs) */
extern uint8_t g_bss_002ddd52[];
/* VA: 0x0019d0cb (.bss_obj3, 25 refs) */
extern uint8_t g_bss_0019d0cb[];
/* VA: 0x00179c08 (.data_obj3, 25 refs) */
extern uint8_t g_dat_00179c08[];
/* VA: 0x00334019 (.bss_obj3, 25 refs) */
extern uint8_t g_bss_00334019[];
/* VA: 0x002e90c3 (.bss_obj3, 25 refs) */
extern uint8_t g_bss_002e90c3[];
/* VA: 0x002e90c5 (.bss_obj3, 25 refs) */
extern uint8_t g_bss_002e90c5[];
/* VA: 0x002ebd72 (.bss_obj3, 25 refs) */
extern uint8_t g_bss_002ebd72[];
/* VA: 0x00401028 (.bss_obj4, 25 refs) */
extern uint8_t g_bss_00401028[];
/* VA: 0x003db4fd (.bss_obj3, 24 refs) */
extern uint8_t g_bss_003db4fd[];
/* VA: 0x003db4fc (.bss_obj3, 24 refs) */
extern uint8_t g_bss_003db4fc[];
/* VA: 0x0019555c (.data_obj3, 24 refs) */
extern uint8_t g_dat_0019555c[];
/* VA: 0x0019556c (.data_obj3, 24 refs) */
extern uint8_t g_dat_0019556c[];
/* VA: 0x003dd8b0 (.bss_obj3, 24 refs) */
extern uint8_t g_bss_003dd8b0[];
/* VA: 0x001842ae (.data_obj3, 24 refs) */
extern uint8_t g_dat_001842ae[];
/* VA: 0x001842c2 (.data_obj3, 24 refs) */
extern uint8_t g_dat_001842c2[];
/* VA: 0x001842b2 (.data_obj3, 24 refs) */
extern uint8_t g_dat_001842b2[];
/* VA: 0x001842c6 (.data_obj3, 24 refs) */
extern uint8_t g_dat_001842c6[];
/* VA: 0x00196f70 (.data_obj3, 24 refs) */
extern uint8_t g_dat_00196f70[];
/* VA: 0x0019d5e3 (.bss_obj3, 23 refs) */
extern uint8_t g_bss_0019d5e3[];
/* VA: 0x002e9124 (.bss_obj3, 23 refs) */
extern uint8_t g_bss_002e9124[];
/* VA: 0x00333f77 (.bss_obj3, 23 refs) */
extern uint8_t g_bss_00333f77[];
/* VA: 0x001c1dcd (.bss_obj3, 23 refs) */
extern uint8_t g_bss_001c1dcd[];
/* VA: 0x0017ad07 (.data_obj3, 23 refs) */
extern uint8_t g_dat_0017ad07[];
/* VA: 0x002e6ec6 (.bss_obj3, 23 refs) */
extern uint8_t g_bss_002e6ec6[];
/* VA: 0x0034baf3 (.bss_obj3, 23 refs) */
extern uint8_t g_bss_0034baf3[];
/* VA: 0x00195d50 (.data_obj3, 23 refs) */
extern uint8_t g_dat_00195d50[];
/* VA: 0x00195f24 (.data_obj3, 23 refs) */
extern uint8_t g_dat_00195f24[];
/* VA: 0x001842bc (.data_obj3, 23 refs) */
extern uint8_t g_dat_001842bc[];
/* VA: 0x001970f8 (.data_obj3, 23 refs) */
extern uint8_t g_dat_001970f8[];
/* VA: 0x00334065 (.bss_obj3, 22 refs) */
extern uint8_t g_bss_00334065[];
/* VA: 0x0034b25c (.bss_obj3, 22 refs) */
extern uint8_t g_bss_0034b25c[];
/* VA: 0x002e05b8 (.bss_obj3, 22 refs) */
extern uint8_t g_bss_002e05b8[];
/* VA: 0x0019116c (.data_obj3, 22 refs) */
extern uint8_t g_dat_0019116c[];
/* VA: 0x00387e00 (.bss_obj3, 22 refs) */
extern uint8_t g_bss_00387e00[];
/* VA: 0x003d3668 (.bss_obj3, 22 refs) */
extern uint8_t g_bss_003d3668[];
/* VA: 0x003df8d1 (.bss_obj3, 22 refs) */
extern uint8_t g_bss_003df8d1[];
/* VA: 0x003e0540 (.bss_obj3, 22 refs) */
extern uint8_t g_bss_003e0540[];
/* VA: 0x001970f0 (.data_obj3, 22 refs) */
extern uint8_t g_dat_001970f0[];
/* VA: 0x0019dad2 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_0019dad2[];
/* VA: 0x002e16fd (.bss_obj3, 21 refs) */
extern uint8_t g_bss_002e16fd[];
/* VA: 0x002ddd2b (.bss_obj3, 21 refs) */
extern uint8_t g_bss_002ddd2b[];
/* VA: 0x002e0b61 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_002e0b61[];
/* VA: 0x002eb401 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_002eb401[];
/* VA: 0x002e78ea (.bss_obj3, 21 refs) */
extern uint8_t g_bss_002e78ea[];
/* VA: 0x0034cf1f (.bss_obj3, 21 refs) */
extern uint8_t g_bss_0034cf1f[];
/* VA: 0x002ebfe6 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_002ebfe6[];
/* VA: 0x003d9840 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_003d9840[];
/* VA: 0x00387d98 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_00387d98[];
/* VA: 0x003d2204 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_003d2204[];
/* VA: 0x003df510 (.bss_obj3, 21 refs) */
extern uint8_t g_bss_003df510[];
/* VA: 0x00196e74 (.data_obj3, 21 refs) */
extern uint8_t g_dat_00196e74[];
/* VA: 0x0019a2a1 (.bss_obj3, 20 refs) */
extern uint8_t g_bss_0019a2a1[];
/* VA: 0x002e7091 (.bss_obj3, 20 refs) */
extern uint8_t g_bss_002e7091[];
/* VA: 0x002e05ec (.bss_obj3, 20 refs) */
extern uint8_t g_bss_002e05ec[];
/* VA: 0x003d9838 (.bss_obj3, 20 refs) */
extern uint8_t g_bss_003d9838[];
/* VA: 0x002ee79f (.bss_obj3, 20 refs) */
extern uint8_t g_bss_002ee79f[];
/* VA: 0x0037656e (.bss_obj3, 20 refs) */
extern uint8_t g_bss_0037656e[];
/* VA: 0x00387224 (.bss_obj3, 20 refs) */
extern uint8_t g_bss_00387224[];
/* VA: 0x0038c5d4 (.bss_obj3, 20 refs) */
extern uint8_t g_bss_0038c5d4[];
/* VA: 0x003d1b5e (.bss_obj3, 20 refs) */
extern uint8_t g_bss_003d1b5e[];
/* VA: 0x00195d98 (.data_obj3, 20 refs) */
extern uint8_t g_dat_00195d98[];
/* VA: 0x00195fb0 (.data_obj3, 20 refs) */
extern uint8_t g_dat_00195fb0[];
/* VA: 0x002e7088 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_002e7088[];
/* VA: 0x001aea04 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_001aea04[];
/* VA: 0x001aea08 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_001aea08[];
/* VA: 0x0019d0ba (.bss_obj3, 19 refs) */
extern uint8_t g_bss_0019d0ba[];
/* VA: 0x00333187 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_00333187[];
/* VA: 0x003d9581 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_003d9581[];
/* VA: 0x0034bad6 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_0034bad6[];
/* VA: 0x0034d1a6 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_0034d1a6[];
/* VA: 0x003d983c (.bss_obj3, 19 refs) */
extern uint8_t g_bss_003d983c[];
/* VA: 0x00387e05 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_00387e05[];
/* VA: 0x0037949c (.bss_obj3, 19 refs) */
extern uint8_t g_bss_0037949c[];
/* VA: 0x003d59c8 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_003d59c8[];
/* VA: 0x001b93f7 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_001b93f7[];
/* VA: 0x003db7f0 (.bss_obj3, 19 refs) */
extern uint8_t g_bss_003db7f0[];
/* VA: 0x003df97c (.bss_obj3, 19 refs) */
extern uint8_t g_bss_003df97c[];
/* VA: 0x003e08ac (.bss_obj3, 19 refs) */
extern uint8_t g_bss_003e08ac[];
/* VA: 0x00401828 (.bss_obj4, 19 refs) */
extern uint8_t g_bss_00401828[];
/* VA: 0x002e9162 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_002e9162[];
/* VA: 0x002ddd32 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_002ddd32[];
/* VA: 0x002ed402 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_002ed402[];
/* VA: 0x001b2e0a (.bss_obj3, 18 refs) */
extern uint8_t g_bss_001b2e0a[];
/* VA: 0x0033519e (.bss_obj3, 18 refs) */
extern uint8_t g_bss_0033519e[];
/* VA: 0x00335e23 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_00335e23[];
/* VA: 0x001992a0 (.data_obj3, 18 refs) */
extern uint8_t g_dat_001992a0[];
/* VA: 0x0019d51a (.bss_obj3, 18 refs) */
extern uint8_t g_bss_0019d51a[];
/* VA: 0x0034b25b (.bss_obj3, 18 refs) */
extern uint8_t g_bss_0034b25b[];
/* VA: 0x002f10e3 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_002f10e3[];
/* VA: 0x0037709e (.bss_obj3, 18 refs) */
extern uint8_t g_bss_0037709e[];
/* VA: 0x00379498 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_00379498[];
/* VA: 0x0038c5c4 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_0038c5c4[];
/* VA: 0x003dd8a4 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_003dd8a4[];
/* VA: 0x003dea94 (.bss_obj3, 18 refs) */
extern uint8_t g_bss_003dea94[];
/* VA: 0x00196f74 (.data_obj3, 18 refs) */
extern uint8_t g_dat_00196f74[];
/* VA: 0x002e0591 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_002e0591[];
/* VA: 0x002e0e0d (.bss_obj3, 17 refs) */
extern uint8_t g_bss_002e0e0d[];
/* VA: 0x003db518 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_003db518[];
/* VA: 0x0019d0b9 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_0019d0b9[];
/* VA: 0x002ee9c5 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_002ee9c5[];
/* VA: 0x002d33c9 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_002d33c9[];
/* VA: 0x0034d0e5 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_0034d0e5[];
/* VA: 0x0019103e (.data_obj3, 17 refs) */
extern uint8_t g_dat_0019103e[];
/* VA: 0x002edf85 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_002edf85[];
/* VA: 0x0019d51d (.bss_obj3, 17 refs) */
extern uint8_t g_bss_0019d51d[];
/* VA: 0x002e15ea (.bss_obj3, 17 refs) */
extern uint8_t g_bss_002e15ea[];
/* VA: 0x003db696 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_003db696[];
/* VA: 0x003dd888 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_003dd888[];
/* VA: 0x003df174 (.bss_obj3, 17 refs) */
extern uint8_t g_bss_003df174[];
/* VA: 0x00195e0c (.data_obj3, 17 refs) */
extern uint8_t g_dat_00195e0c[];
/* VA: 0x00195f38 (.data_obj3, 17 refs) */
extern uint8_t g_dat_00195f38[];
/* VA: 0x00195f3c (.data_obj3, 17 refs) */
extern uint8_t g_dat_00195f3c[];
/* VA: 0x001842ca (.data_obj3, 17 refs) */
extern uint8_t g_dat_001842ca[];
/* VA: 0x00196f64 (.data_obj3, 17 refs) */
extern uint8_t g_dat_00196f64[];
/* VA: 0x001921d4 (.data_obj3, 16 refs) */
extern uint8_t g_dat_001921d4[];
/* VA: 0x0019e97b (.bss_obj3, 16 refs) */
extern uint8_t g_bss_0019e97b[];
/* VA: 0x001aa97b (.bss_obj3, 16 refs) */
extern uint8_t g_bss_001aa97b[];
/* VA: 0x002e0593 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_002e0593[];
/* VA: 0x001aa973 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_001aa973[];
/* VA: 0x0017ad09 (.data_obj3, 16 refs) */
extern uint8_t g_dat_0017ad09[];
/* VA: 0x0019d512 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_0019d512[];
/* VA: 0x003346e8 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_003346e8[];
/* VA: 0x00333183 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_00333183[];
/* VA: 0x0034d1a8 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_0034d1a8[];
/* VA: 0x0018ed35 (.data_obj3, 16 refs) */
extern uint8_t g_dat_0018ed35[];
/* VA: 0x0034bad4 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_0034bad4[];
/* VA: 0x0033318b (.bss_obj3, 16 refs) */
extern uint8_t g_bss_0033318b[];
/* VA: 0x00376544 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_00376544[];
/* VA: 0x0019d0bc (.bss_obj3, 16 refs) */
extern uint8_t g_bss_0019d0bc[];
/* VA: 0x00387d38 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_00387d38[];
/* VA: 0x00387e02 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_00387e02[];
/* VA: 0x001c31f5 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_001c31f5[];
/* VA: 0x001badf5 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_001badf5[];
/* VA: 0x0016ae95 (.data_obj3, 16 refs) */
extern uint8_t g_dat_0016ae95[];
/* VA: 0x0016ae9f (.data_obj3, 16 refs) */
extern uint8_t g_dat_0016ae9f[];
/* VA: 0x003d220c (.bss_obj3, 16 refs) */
extern uint8_t g_bss_003d220c[];
/* VA: 0x001b93f8 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_001b93f8[];
/* VA: 0x001b89b8 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_001b89b8[];
/* VA: 0x001b09f8 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_001b09f8[];
/* VA: 0x003db7f8 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_003db7f8[];
/* VA: 0x001955cc (.data_obj3, 16 refs) */
extern uint8_t g_dat_001955cc[];
/* VA: 0x003df824 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_003df824[];
/* VA: 0x003e0688 (.bss_obj3, 16 refs) */
extern uint8_t g_bss_003e0688[];
/* VA: 0x00401818 (.bss_obj4, 16 refs) */
extern uint8_t g_bss_00401818[];
/* VA: 0x00401820 (.bss_obj4, 16 refs) */
extern uint8_t g_bss_00401820[];
/* VA: 0x00196f88 (.data_obj3, 16 refs) */
extern uint8_t g_dat_00196f88[];
/* VA: 0x00196fa0 (.data_obj3, 16 refs) */
extern uint8_t g_dat_00196fa0[];
/* VA: 0x00196f34 (.data_obj3, 16 refs) */
extern uint8_t g_dat_00196f34[];
/* VA: 0x00196f38 (.data_obj3, 16 refs) */
extern uint8_t g_dat_00196f38[];
/* VA: 0x00196f3c (.data_obj3, 16 refs) */
extern uint8_t g_dat_00196f3c[];
/* VA: 0x002c9295 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_002c9295[];
/* VA: 0x0033431c (.bss_obj3, 15 refs) */
extern uint8_t g_bss_0033431c[];
/* VA: 0x00333193 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_00333193[];
/* VA: 0x001bd629 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001bd629[];
/* VA: 0x00334738 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_00334738[];
/* VA: 0x00334a54 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_00334a54[];
/* VA: 0x003d9814 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_003d9814[];
/* VA: 0x002e90b1 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_002e90b1[];
/* VA: 0x0034d0e4 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_0034d0e4[];
/* VA: 0x002e1501 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_002e1501[];
/* VA: 0x0034bac9 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_0034bac9[];
/* VA: 0x0034b2c5 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_0034b2c5[];
/* VA: 0x001880f4 (.data_obj3, 15 refs) */
extern uint8_t g_dat_001880f4[];
/* VA: 0x00376548 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_00376548[];
/* VA: 0x0037707f (.bss_obj3, 15 refs) */
extern uint8_t g_bss_0037707f[];
/* VA: 0x002e1928 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_002e1928[];
/* VA: 0x001bd616 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001bd616[];
/* VA: 0x001bd618 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001bd618[];
/* VA: 0x003b3ef0 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_003b3ef0[];
/* VA: 0x003c584c (.bss_obj3, 15 refs) */
extern uint8_t g_bss_003c584c[];
/* VA: 0x001b93f6 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001b93f6[];
/* VA: 0x001b93ef (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001b93ef[];
/* VA: 0x001b93ed (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001b93ed[];
/* VA: 0x001b93f0 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001b93f0[];
/* VA: 0x001b93f2 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001b93f2[];
/* VA: 0x001b93f4 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_001b93f4[];
/* VA: 0x003dd8e0 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_003dd8e0[];
/* VA: 0x00195d1a (.data_obj3, 15 refs) */
extern uint8_t g_dat_00195d1a[];
/* VA: 0x003df18d (.bss_obj3, 15 refs) */
extern uint8_t g_bss_003df18d[];
/* VA: 0x003df8d2 (.bss_obj3, 15 refs) */
extern uint8_t g_bss_003df8d2[];
/* VA: 0x00401010 (.bss_obj4, 15 refs) */
extern uint8_t g_bss_00401010[];
/* VA: 0x00197504 (.data_obj3, 15 refs) */
extern uint8_t g_dat_00197504[];
/* VA: 0x001970f4 (.data_obj3, 15 refs) */
extern uint8_t g_dat_001970f4[];
/* VA: 0x002e9122 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_002e9122[];
/* VA: 0x0018b680 (.data_obj3, 14 refs) */
extern uint8_t g_dat_0018b680[];
/* VA: 0x0018b681 (.data_obj3, 14 refs) */
extern uint8_t g_dat_0018b681[];
/* VA: 0x002ddd56 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_002ddd56[];
/* VA: 0x002d33cb (.bss_obj3, 14 refs) */
extern uint8_t g_bss_002d33cb[];
/* VA: 0x002e1086 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_002e1086[];
/* VA: 0x002eb9ea (.bss_obj3, 14 refs) */
extern uint8_t g_bss_002eb9ea[];
/* VA: 0x00334de8 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_00334de8[];
/* VA: 0x003346e4 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003346e4[];
/* VA: 0x003db535 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003db535[];
/* VA: 0x0033519a (.bss_obj3, 14 refs) */
extern uint8_t g_bss_0033519a[];
/* VA: 0x003351f6 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003351f6[];
/* VA: 0x003351d2 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003351d2[];
/* VA: 0x00269203 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_00269203[];
/* VA: 0x0017b908 (.data_obj3, 14 refs) */
extern uint8_t g_dat_0017b908[];
/* VA: 0x002e6f23 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_002e6f23[];
/* VA: 0x0019d0c9 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_0019d0c9[];
/* VA: 0x0034b25a (.bss_obj3, 14 refs) */
extern uint8_t g_bss_0034b25a[];
/* VA: 0x0019d578 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_0019d578[];
/* VA: 0x00348ef8 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_00348ef8[];
/* VA: 0x0034bbdc (.bss_obj3, 14 refs) */
extern uint8_t g_bss_0034bbdc[];
/* VA: 0x00376554 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_00376554[];
/* VA: 0x0019214c (.data_obj3, 14 refs) */
extern uint8_t g_dat_0019214c[];
/* VA: 0x003af89a (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003af89a[];
/* VA: 0x003b3eec (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003b3eec[];
/* VA: 0x0038c631 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_0038c631[];
/* VA: 0x003d2208 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003d2208[];
/* VA: 0x003c5830 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003c5830[];
/* VA: 0x003c5860 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003c5860[];
/* VA: 0x002e15e9 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_002e15e9[];
/* VA: 0x003dd824 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003dd824[];
/* VA: 0x003db7fc (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003db7fc[];
/* VA: 0x003dea98 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003dea98[];
/* VA: 0x003e02e4 (.bss_obj3, 14 refs) */
extern uint8_t g_bss_003e02e4[];
/* VA: 0x00401008 (.bss_obj4, 14 refs) */
extern uint8_t g_bss_00401008[];
/* VA: 0x002e1a91 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002e1a91[];
/* VA: 0x00190d3d (.data_obj3, 13 refs) */
extern uint8_t g_dat_00190d3d[];
/* VA: 0x002ed45d (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002ed45d[];
/* VA: 0x002e7087 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002e7087[];
/* VA: 0x00279208 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_00279208[];
/* VA: 0x002e70a6 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002e70a6[];
/* VA: 0x0019dfc1 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_0019dfc1[];
/* VA: 0x002ee9c2 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002ee9c2[];
/* VA: 0x002e1930 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002e1930[];
/* VA: 0x00334740 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_00334740[];
/* VA: 0x002ee8d8 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002ee8d8[];
/* VA: 0x00335172 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_00335172[];
/* VA: 0x00335192 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_00335192[];
/* VA: 0x00335196 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_00335196[];
/* VA: 0x00335923 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_00335923[];
/* VA: 0x003362f0 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_003362f0[];
/* VA: 0x002ed3de (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002ed3de[];
/* VA: 0x002f18e3 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002f18e3[];
/* VA: 0x0033f2a0 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_0033f2a0[];
/* VA: 0x00188c94 (.data_obj3, 13 refs) */
extern uint8_t g_dat_00188c94[];
/* VA: 0x00348ef4 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_00348ef4[];
/* VA: 0x002e0b5d (.bss_obj3, 13 refs) */
extern uint8_t g_bss_002e0b5d[];
/* VA: 0x0034bbd9 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_0034bbd9[];
/* VA: 0x003772de (.bss_obj3, 13 refs) */
extern uint8_t g_bss_003772de[];
/* VA: 0x003df16c (.bss_obj3, 13 refs) */
extern uint8_t g_bss_003df16c[];
/* VA: 0x003d9828 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_003d9828[];
/* VA: 0x003df8dd (.bss_obj3, 13 refs) */
extern uint8_t g_bss_003df8dd[];
/* VA: 0x00195d9c (.data_obj3, 13 refs) */
extern uint8_t g_dat_00195d9c[];
/* VA: 0x003dfa44 (.bss_obj3, 13 refs) */
extern uint8_t g_bss_003dfa44[];
/* VA: 0x00195f1c (.data_obj3, 13 refs) */
extern uint8_t g_dat_00195f1c[];
/* VA: 0x00195f40 (.data_obj3, 13 refs) */
extern uint8_t g_dat_00195f40[];
/* VA: 0x00401048 (.bss_obj4, 13 refs) */
extern uint8_t g_bss_00401048[];
/* VA: 0x00401050 (.bss_obj4, 13 refs) */
extern uint8_t g_bss_00401050[];
/* VA: 0x00401058 (.bss_obj4, 13 refs) */
extern uint8_t g_bss_00401058[];
/* VA: 0x00401060 (.bss_obj4, 13 refs) */
extern uint8_t g_bss_00401060[];
/* VA: 0x00196f6c (.data_obj3, 13 refs) */
extern uint8_t g_dat_00196f6c[];
/* VA: 0x00196fac (.data_obj3, 13 refs) */
extern uint8_t g_dat_00196fac[];
/* VA: 0x0019752c (.data_obj3, 13 refs) */
extern uint8_t g_dat_0019752c[];
/* VA: 0x002e0e11 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e0e11[];
/* VA: 0x002e912a (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e912a[];
/* VA: 0x0019a2a0 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0019a2a0[];
/* VA: 0x002e9125 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e9125[];
/* VA: 0x002ccbd3 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002ccbd3[];
/* VA: 0x002e91a5 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e91a5[];
/* VA: 0x002ebaf8 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002ebaf8[];
/* VA: 0x00175583 (.data_obj3, 12 refs) */
extern uint8_t g_dat_00175583[];
/* VA: 0x001912e6 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001912e6[];
/* VA: 0x002e16fc (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e16fc[];
/* VA: 0x002c91ff (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002c91ff[];
/* VA: 0x001bd649 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_001bd649[];
/* VA: 0x002e6ff4 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e6ff4[];
/* VA: 0x002ee8d7 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002ee8d7[];
/* VA: 0x0033591f (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0033591f[];
/* VA: 0x003358ff (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003358ff[];
/* VA: 0x0034b25d (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0034b25d[];
/* VA: 0x003358eb (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003358eb[];
/* VA: 0x003358f5 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003358f5[];
/* VA: 0x00336087 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00336087[];
/* VA: 0x003362fd (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003362fd[];
/* VA: 0x002f10da (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002f10da[];
/* VA: 0x001911f3 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001911f3[];
/* VA: 0x0019a29f (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0019a29f[];
/* VA: 0x002ee8b9 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002ee8b9[];
/* VA: 0x0018b90b (.data_obj3, 12 refs) */
extern uint8_t g_dat_0018b90b[];
/* VA: 0x002ee9c6 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002ee9c6[];
/* VA: 0x00387db0 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00387db0[];
/* VA: 0x00387db4 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00387db4[];
/* VA: 0x00387de0 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00387de0[];
/* VA: 0x0019d518 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0019d518[];
/* VA: 0x0019d516 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0019d516[];
/* VA: 0x0019d514 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0019d514[];
/* VA: 0x002e142d (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e142d[];
/* VA: 0x003482c1 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003482c1[];
/* VA: 0x002e91e7 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e91e7[];
/* VA: 0x002ee920 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002ee920[];
/* VA: 0x003d957c (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003d957c[];
/* VA: 0x002e0b63 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_002e0b63[];
/* VA: 0x0034bbd7 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0034bbd7[];
/* VA: 0x003d9894 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003d9894[];
/* VA: 0x0019d51c (.bss_obj3, 12 refs) */
extern uint8_t g_bss_0019d51c[];
/* VA: 0x00188cad (.data_obj3, 12 refs) */
extern uint8_t g_dat_00188cad[];
/* VA: 0x00377094 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00377094[];
/* VA: 0x00377087 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00377087[];
/* VA: 0x003772da (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003772da[];
/* VA: 0x00387e07 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00387e07[];
/* VA: 0x00387e04 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00387e04[];
/* VA: 0x00387e0b (.bss_obj3, 12 refs) */
extern uint8_t g_bss_00387e0b[];
/* VA: 0x00191d6c (.data_obj3, 12 refs) */
extern uint8_t g_dat_00191d6c[];
/* VA: 0x003d59cc (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003d59cc[];
/* VA: 0x003d8c64 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003d8c64[];
/* VA: 0x001926d5 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001926d5[];
/* VA: 0x001926d6 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001926d6[];
/* VA: 0x001926c5 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001926c5[];
/* VA: 0x001926c6 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001926c6[];
/* VA: 0x003dd849 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003dd849[];
/* VA: 0x003df8e5 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003df8e5[];
/* VA: 0x001958d4 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001958d4[];
/* VA: 0x003e0544 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003e0544[];
/* VA: 0x003e08b0 (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003e08b0[];
/* VA: 0x00196dcc (.data_obj3, 12 refs) */
extern uint8_t g_dat_00196dcc[];
/* VA: 0x003e4e2c (.bss_obj3, 12 refs) */
extern uint8_t g_bss_003e4e2c[];
/* VA: 0x001742f0 (.data_obj3, 12 refs) */
extern uint8_t g_dat_001742f0[];
/* VA: 0x00401018 (.bss_obj4, 12 refs) */
extern uint8_t g_bss_00401018[];
/* VA: 0x00401020 (.bss_obj4, 12 refs) */
extern uint8_t g_bss_00401020[];
/* VA: 0x00401030 (.bss_obj4, 12 refs) */
extern uint8_t g_bss_00401030[];
/* VA: 0x00400fd0 (.bss_obj4, 12 refs) */
extern uint8_t g_bss_00400fd0[];
/* VA: 0x00400ff0 (.bss_obj4, 12 refs) */
extern uint8_t g_bss_00400ff0[];
/* VA: 0x00400ff8 (.bss_obj4, 12 refs) */
extern uint8_t g_bss_00400ff8[];
/* VA: 0x00401000 (.bss_obj4, 12 refs) */
extern uint8_t g_bss_00401000[];
/* VA: 0x002e707c (.bss_obj3, 11 refs) */
extern uint8_t g_bss_002e707c[];
/* VA: 0x002e0ea1 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_002e0ea1[];
/* VA: 0x002d33d0 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_002d33d0[];
/* VA: 0x00334078 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00334078[];
/* VA: 0x0019d0c7 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_0019d0c7[];
/* VA: 0x002ebc52 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_002ebc52[];
/* VA: 0x00335131 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00335131[];
/* VA: 0x003d987b (.bss_obj3, 11 refs) */
extern uint8_t g_bss_003d987b[];
/* VA: 0x00334a4c (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00334a4c[];
/* VA: 0x003358f7 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_003358f7[];
/* VA: 0x003362f5 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_003362f5[];
/* VA: 0x002ee8c5 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_002ee8c5[];
/* VA: 0x00387de8 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00387de8[];
/* VA: 0x00387de4 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00387de4[];
/* VA: 0x00387dec (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00387dec[];
/* VA: 0x00348f00 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00348f00[];
/* VA: 0x00348efc (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00348efc[];
/* VA: 0x002eafb5 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_002eafb5[];
/* VA: 0x0034cf04 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_0034cf04[];
/* VA: 0x0034cefc (.bss_obj3, 11 refs) */
extern uint8_t g_bss_0034cefc[];
/* VA: 0x0034bc0f (.bss_obj3, 11 refs) */
extern uint8_t g_bss_0034bc0f[];
/* VA: 0x0034b2c4 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_0034b2c4[];
/* VA: 0x0019d56c (.bss_obj3, 11 refs) */
extern uint8_t g_bss_0019d56c[];
/* VA: 0x0018c4a0 (.data_obj3, 11 refs) */
extern uint8_t g_dat_0018c4a0[];
/* VA: 0x002ec3ea (.bss_obj3, 11 refs) */
extern uint8_t g_bss_002ec3ea[];
/* VA: 0x00376518 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00376518[];
/* VA: 0x00191810 (.data_obj3, 11 refs) */
extern uint8_t g_dat_00191810[];
/* VA: 0x003882d8 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_003882d8[];
/* VA: 0x0037937c (.bss_obj3, 11 refs) */
extern uint8_t g_bss_0037937c[];
/* VA: 0x00379378 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_00379378[];
/* VA: 0x001bd613 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_001bd613[];
/* VA: 0x003d1b54 (.bss_obj3, 11 refs) */
extern uint8_t g_bss_003d1b54[];

#ifdef __cplusplus
}
#endif
