# Multiplayer & Lockstep Networking Subsystem Analysis

This document details all reverse-engineered functions, strings, and protocols governing *Dungeon Keeper*'s multiplayer lobby, session management, and deterministic lockstep packet synchronization.

## 1. Key Modules
- [`src/frontnet.cpp`](../src/frontnet.cpp) — Network service selection (IPX, Modem, Serial), session enumeration, player join/leave lobby, and modem dialing initialization.
- [`src/packet.cpp`](../src/packet.cpp) — Per-turn `Packet` recording, `LbNetwork_Exchange` turn synchronization, deterministic checksum verification (`PacketSave checksum`), packet replay recording/playback, and full-state resynchronization (`resync`) when a peer falls out of sync.
- [`src/bflib/bflib_network.cpp`](../src/bflib/bflib_network.cpp) — Bullfrog Library (`LbNetwork_*`) hardware abstraction layer.

## 2. Function Table for Networking Modules

| Module | Address | Inferred Name | Callers | Callees | Naming Evidence |
| :--- | :--- | :--- | :--- | :--- | :--- |
| `frontnet.cpp` | `0x32f12` | `sub_032f12` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x32f5c` | `sub_032f5c` | `2` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x32f6a` | `sub_032f6a` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x32f9b` | `dk_levelnamefile_add_blank_line_032f9b` | `2` | `2` | String 'LevelNameFile, Add a blank line at the end' |
| `frontnet.cpp` | `0x3308c` | `sub_03308c` | `4` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x330ae` | `sub_0330ae` | `1` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x330e0` | `sub_0330e0` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33156` | `sub_033156` | `5` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3315b` | `sub_03315b` | `2` | `5` | Address-based identifier |
| `frontnet.cpp` | `0x33223` | `sub_033223` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3325d` | `sub_03325d` | `3` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33350` | `sub_033350` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33563` | `dk_button_type_033563` | `0` | `2` | String 'Unknown button type' |
| `frontnet.cpp` | `0x3378f` | `sub_03378f` | `2` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x33828` | `sub_033828` | `2` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x338fd` | `sub_0338fd` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33917` | `sub_033917` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x33928` | `sub_033928` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x33939` | `sub_033939` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3394a` | `sub_03394a` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3395b` | `sub_03395b` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3396c` | `sub_03396c` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x339df` | `sub_0339df` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33a44` | `sub_033a44` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33ac7` | `sub_033ac7` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33b5c` | `sub_033b5c` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33bcc` | `dk_LbNetwork_Stop_033bcc` | `0` | `3` | References 'LbNetwork_Stop() failed' |
| `frontnet.cpp` | `0x33bfb` | `dk_LbNetwork_Stop_033bfb` | `0` | `4` | References 'LbNetwork_Stop() failed' |
| `frontnet.cpp` | `0x33c3a` | `sub_033c3a` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x33c7d` | `sub_033c7d` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33d87` | `sub_033d87` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x33ead` | `dk_LbNetwork_EnumerateServices_033ead` | `1` | `6` | References 'LbNetwork_EnumerateServices() failed' |
| `frontnet.cpp` | `0x33f26` | `sub_033f26` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x33f57` | `sub_033f57` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x33fdf` | `sub_033fdf` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x33ff7` | `sub_033ff7` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34004` | `sub_034004` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34022` | `sub_034022` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x34070` | `sub_034070` | `1` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x34077` | `sub_034077` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34087` | `sub_034087` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3409c` | `sub_03409c` | `1` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x34105` | `sub_034105` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34186` | `sub_034186` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34196` | `sub_034196` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x341ab` | `sub_0341ab` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x341bb` | `sub_0341bb` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x341d0` | `sub_0341d0` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x341dd` | `sub_0341dd` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x341f0` | `sub_0341f0` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34208` | `sub_034208` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x34241` | `sub_034241` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3424e` | `sub_03424e` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34261` | `sub_034261` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34279` | `sub_034279` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34298` | `sub_034298` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x3431e` | `sub_03431e` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x343a4` | `sub_0343a4` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x343d7` | `sub_0343d7` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x3440a` | `sub_03440a` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3442b` | `dk_isdn_supported_serial_03442b` | `0` | `4` | String 'ISDN not supported by Serial' |
| `frontnet.cpp` | `0x344c8` | `sub_0344c8` | `1` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x3457c` | `sub_03457c` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x345fd` | `sub_0345fd` | `0` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x3468f` | `sub_03468f` | `1` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x346de` | `dk_LbNetwork_EnumerateSessions_0346de` | `1` | `4` | References 'LbNetwork_EnumerateSessions() failed' |
| `frontnet.cpp` | `0x3488f` | `sub_03488f` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x34918` | `sub_034918` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34941` | `sub_034941` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34959` | `sub_034959` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34966` | `sub_034966` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34979` | `sub_034979` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34989` | `sub_034989` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x3499e` | `sub_03499e` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x349d9` | `sub_0349d9` | `0` | `6` | Address-based identifier |
| `frontnet.cpp` | `0x34a8a` | `sub_034a8a` | `0` | `7` | Address-based identifier |
| `frontnet.cpp` | `0x34bb6` | `sub_034bb6` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x34bdc` | `sub_034bdc` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x34bff` | `sub_034bff` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34c0f` | `sub_034c0f` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34c1f` | `sub_034c1f` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34c2f` | `sub_034c2f` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34c3f` | `sub_034c3f` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34c4f` | `sub_034c4f` | `0` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x34d86` | `sub_034d86` | `0` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x34ea2` | `sub_034ea2` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x34ed8` | `sub_034ed8` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x34f38` | `dk_LbNetwork_EnumeratePlayers_034f38` | `1` | `5` | References 'LbNetwork_EnumeratePlayers() failed' |
| `frontnet.cpp` | `0x35037` | `sub_035037` | `1` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x350a0` | `sub_0350a0` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x350ad` | `sub_0350ad` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x350bd` | `sub_0350bd` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x350d2` | `sub_0350d2` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x350df` | `sub_0350df` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x350f2` | `sub_0350f2` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35102` | `sub_035102` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35117` | `sub_035117` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35124` | `sub_035124` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35137` | `sub_035137` | `0` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x351d7` | `sub_0351d7` | `0` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x35304` | `sub_035304` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35338` | `sub_035338` | `0` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x3536a` | `sub_03536a` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x3540e` | `sub_03540e` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35446` | `dk_sessions_enumeration_035446` | `0` | `2` | String 'Too many sessions in enumeration' |
| `frontnet.cpp` | `0x354fb` | `dk_players_enumeration_0354fb` | `0` | `2` | String 'Too many players in enumeration' |
| `frontnet.cpp` | `0x35546` | `dk_unrecognised_network_service_035546` | `0` | `3` | String 'Unrecognised Network Service' |
| `frontnet.cpp` | `0x3562b` | `sub_03562b` | `0` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35666` | `sub_035666` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x356d1` | `sub_0356d1` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35758` | `dk_LbNetwork_Exchange_035758` | `1` | `14` | References 'LbNetwork_Exchange failed' |
| `frontnet.cpp` | `0x35ac5` | `sub_035ac5` | `1` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x35b51` | `dk_save_config_net_035b51` | `3` | `6` | String 'SAVE\CONFIG.NET' |
| `frontnet.cpp` | `0x35bbf` | `dk_save_config_net_035bbf` | `2` | `5` | String 'SAVE\CONFIG.NET' |
| `frontnet.cpp` | `0x35c1e` | `sub_035c1e` | `0` | `4` | Address-based identifier |
| `frontnet.cpp` | `0x35c5a` | `sub_035c5a` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x35c86` | `sub_035c86` | `1` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x35cc1` | `sub_035cc1` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35ce2` | `sub_035ce2` | `1` | `0` | Address-based identifier |
| `frontnet.cpp` | `0x35d29` | `dk_LbNetwork_Stop_035d29` | `1` | `10` | References 'LbNetwork_Stop() failed' |
| `frontnet.cpp` | `0x35e19` | `sub_035e19` | `1` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x35e3c` | `sub_035e3c` | `3` | `9` | Address-based identifier |
| `frontnet.cpp` | `0x36008` | `sub_036008` | `1` | `1` | Address-based identifier |
| `frontnet.cpp` | `0x36018` | `sub_036018` | `0` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x360e8` | `sub_0360e8` | `0` | `3` | Address-based identifier |
| `frontnet.cpp` | `0x36188` | `sub_036188` | `1` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x36223` | `sub_036223` | `0` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x36278` | `sub_036278` | `2` | `2` | Address-based identifier |
| `frontnet.cpp` | `0x362e1` | `sub_0362e1` | `0` | `0` | Address-based identifier |
| `packet.cpp` | `0x5d32c` | `sub_05d32c` | `2` | `2` | Address-based identifier |
| `packet.cpp` | `0x5d34c` | `sub_05d34c` | `2` | `0` | Address-based identifier |
| `packet.cpp` | `0x5d35c` | `dk_LbNetwork_Exchange_05d35c` | `2` | `15` | References 'LbNetwork_Exchange failed' |
| `packet.cpp` | `0x5d7b5` | `dk_my_player_host_05d7b5` | `1` | `12` | String 'MY_PLAYER=%d  Host=%d' |
| `packet.cpp` | `0x5da11` | `dk_initialising_level_05da11` | `1` | `7` | String 'Initialising level' |
| `packet.cpp` | `0x5dc27` | `dk_LbNetwork_Exchange_05dc27` | `1` | `10` | References 'LbNetwork_Exchange failed' |
| `packet.cpp` | `0x5dde9` | `sub_05dde9` | `6` | `0` | Address-based identifier |
| `packet.cpp` | `0x5ddee` | `sub_05ddee` | `43` | `0` | Address-based identifier |
| `packet.cpp` | `0x5de00` | `sub_05de00` | `2` | `0` | Address-based identifier |
| `packet.cpp` | `0x5de7c` | `sub_05de7c` | `1` | `8` | Address-based identifier |
| `packet.cpp` | `0x5df2f` | `sub_05df2f` | `0` | `0` | Address-based identifier |
| `packet.cpp` | `0x5e01e` | `sub_05e01e` | `1` | `0` | Address-based identifier |
| `packet.cpp` | `0x5eb8d` | `sub_05eb8d` | `1` | `5` | Address-based identifier |
| `packet.cpp` | `0x5ec71` | `sub_05ec71` | `1` | `4` | Address-based identifier |
| `packet.cpp` | `0x5f001` | `sub_05f001` | `1` | `1` | Address-based identifier |
| `packet.cpp` | `0x5f049` | `sub_05f049` | `1` | `6` | Address-based identifier |
| `packet.cpp` | `0x5f163` | `sub_05f163` | `1` | `9` | Address-based identifier |
| `packet.cpp` | `0x5f3ad` | `sub_05f3ad` | `1` | `2` | Address-based identifier |
| `packet.cpp` | `0x5f438` | `sub_05f438` | `2` | `4` | Address-based identifier |
| `packet.cpp` | `0x5f4d9` | `sub_05f4d9` | `1` | `2` | Address-based identifier |
| `packet.cpp` | `0x5f577` | `sub_05f577` | `1` | `0` | Address-based identifier |
| `packet.cpp` | `0x5f5db` | `sub_05f5db` | `1` | `0` | Address-based identifier |
| `packet.cpp` | `0x5f6c5` | `dk_room_here_delete_05f6c5` | `1` | `77` | String 'No room here to delete' |
| `packet.cpp` | `0x61751` | `sub_061751` | `1` | `0` | Address-based identifier |
| `packet.cpp` | `0x617c9` | `dk_open_keeper_packet_file_0617c9` | `1` | `6` | String 'Cannot open keeper packet file for save' |
| `packet.cpp` | `0x61883` | `sub_061883` | `1` | `5` | Address-based identifier |
| `packet.cpp` | `0x618f5` | `dk_open_keeper_packet_file_0618f5` | `2` | `5` | String 'Cannot open keeper packet file for load' |
| `packet.cpp` | `0x619be` | `dk_packet_saving_seek_offset_0619be` | `1` | `6` | String 'Packet Saving Seek Offset is wrong' |
| `packet.cpp` | `0x61bde` | `sub_061bde` | `3` | `5` | Address-based identifier |
| `packet.cpp` | `0x61ca3` | `sub_061ca3` | `11` | `2` | Address-based identifier |
| `packet.cpp` | `0x61d43` | `sub_061d43` | `2` | `7` | Address-based identifier |
| `packet.cpp` | `0x61e86` | `sub_061e86` | `1` | `1` | Address-based identifier |
| `packet.cpp` | `0x61f1b` | `sub_061f1b` | `1` | `0` | Address-based identifier |
| `packet.cpp` | `0x61f77` | `sub_061f77` | `0` | `4` | Address-based identifier |
| `packet.cpp` | `0x620e6` | `sub_0620e6` | `0` | `4` | Address-based identifier |
| `packet.cpp` | `0x62238` | `sub_062238` | `1` | `0` | Address-based identifier |
| `packet.cpp` | `0x622f1` | `sub_0622f1` | `1` | `0` | Address-based identifier |
| `packet.cpp` | `0x623aa` | `sub_0623aa` | `2` | `6` | Address-based identifier |
| `bflib/bflib_network.cpp` | `0xed04c` | `dk_bullfrog_net_library_version_0ed04c` | `0` | `1` | String 'BULLFROG NET LIBRARY VERSION %f FOR %s LAST BUILT __DATE__' |
| `bflib/bflib_network.cpp` | `0xed0e8` | `sub_0ed0e8` | `1` | `0` | Address-based identifier |
| `bflib/bflib_network.cpp` | `0xed4e0` | `dk_LbNetwork_Init_0ed4e0` | `3` | `8` | References 'WARNING network: LbNetwork_Init() failure on compositeBuffer allo' |
| `bflib/bflib_network.cpp` | `0xed84c` | `dk_LbNetwork_Create_0ed84c` | `1` | `1` | References 'ERROR::LbNetwork_Create ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xeda20` | `dk_LbNetwork_Join_0eda20` | `1` | `5` | References 'ERROR::LbNetwork_Join ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xedc70` | `dk_LbNetwork_Stop_0edc70` | `9` | `3` | References 'INSIDE LbNetwork_Stop' |
| `bflib/bflib_network.cpp` | `0xedd8c` | `dk_LbNetwork_EnumerateSessions_0edd8c` | `1` | `1` | References 'ERROR::LbNetwork_EnumerateSessions ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xeddf0` | `dk_LbNetwork_EnumeratePlayers_0eddf0` | `2` | `1` | References 'ERROR::LbNetwork_EnumeratePlayers ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xee3c0` | `dk_LbNetwork_CompleteExchange_0ee3c0` | `0` | `10` | References 'WARNING network: LbNetwork_CompleteExchange() failure on HostData' |
| `bflib/bflib_network.cpp` | `0xee694` | `dk_LbNetwork_StartExchange_0ee694` | `5` | `12` | References 'ERROR::LbNetwork_StartExchange ServiceProvider ptr is NULL' |
| `bflib/bflib_network.cpp` | `0xeeb20` | `dk_LbNetwork_ChangeExchangeBuffer_0eeb20` | `1` | `3` | References 'WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buff' |
| `bflib/bflib_network.cpp` | `0xeebe0` | `dk_GetCurrentPlayers_0eebe0` | `0` | `1` | References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated' |
| `bflib/bflib_network.cpp` | `0xeedc0` | `dk_HostDataCollection_0eedc0` | `2` | `7` | References 'WARNING network: HostDataCollection() deletePlayerBuffer is too s' |
| `bflib/bflib_network.cpp` | `0xef060` | `dk_LbNetwork_CompleteExchange_0ef060` | `2` | `3` | References 'WARNING network: LbNetwork_CompleteExchange() failure on SP::Send' |
| `bflib/bflib_network.cpp` | `0xef14c` | `dk_UserDataMsgCallback_0ef14c` | `0` | `1` | References 'WARNING network: UserDataMsgCallback() host got data from itself' |
| `bflib/bflib_network.cpp` | `0xef4a8` | `dk_DeleteMsgCallback_0ef4a8` | `0` | `1` | References 'WARNING network: DeleteMsgCallback() NULL localPlayerInfoPtr' |
| `bflib/bflib_network.cpp` | `0xef520` | `dk_GetCurrentPlayers_0ef520` | `0` | `1` | References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated' |
| `bflib/bflib_network.cpp` | `0xef7a8` | `dk_RequestExchangeDataMsgCallback_0ef7a8` | `0` | `3` | References 'WARNING network: RequestExchangeDataMsgCallback() NULL data point' |
| `bflib/bflib_network.cpp` | `0xef864` | `dk_RequestCompositeExchangeDataMsgCallback_0ef864` | `0` | `2` | References 'WARNING network: RequestCompositeExchangeDataMsgCallback() failur' |
| `bflib/bflib_network.cpp` | `0xef8e8` | `dk_GenericIPXInit_0ef8e8` | `0` | `5` | References 'WARNING network: GenericIPXInit() failure on ServiceProvider::Ini' |
| `bflib/bflib_network.cpp` | `0xefab0` | `dk_SendSystemUserMessage_0efab0` | `0` | `3` | References 'WARNING network: SendSystemUserMessage() systemUserBuffer is too ' |
| `bflib/bflib_network.cpp` | `0xf3b50` | `dk_LbNetwork_Send_0f3b50` | `1` | `6` | References 'INSIDE LbNetwork_Send' |
| `bflib/bflib_network.cpp` | `0xf3ed8` | `dk_LbNetwork_Receive_0f3ed8` | `1` | `6` | References 'INSIDE LbNetwork_Receive' |
| `bflib/bflib_network.cpp` | `0xff0ec` | `dk_LbNETWORK_0ff0ec` | `3` | `1` | References 'LbNETWORK : Destructing ServiceProvider' |
| `bflib/bflib_network.cpp` | `0xff10c` | `dk_LbNETWORK_0ff10c` | `2` | `1` | References 'LbNETWORK : Initialising ServiceProvider' |
| `bflib/bflib_network.cpp` | `0xff18c` | `dk_LbNETWORK_0ff18c` | `3` | `1` | References 'LbNETWORK : Releasing ServiceProvider' |
| `bflib/bflib_network.cpp` | `0xff1d4` | `dk_AddPlayer_0ff1d4` | `10` | `1` | References 'WARNING network: ServiceProvider::AddPlayer() player table is ful' |
| `bflib/bflib_network.cpp` | `0xff550` | `dk_EncodeMessageStub_0ff550` | `6` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff630` | `dk_EncodeMessageStub_0ff630` | `9` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff6a0` | `dk_EncodeMessageStub_0ff6a0` | `3` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff6f0` | `dk_EncodeMessageStub_0ff6f0` | `2` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff894` | `dk_EncodeMessageStub_0ff894` | `10` | `1` | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff8c0` | `dk_DecodeMessageStub_0ff8c0` | `11` | `1` | References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0xff904` | `dk_warning_network_niladdmsgcallback_hit_0ff904` | `0` | `1` | String 'WARNING network: NilAddMsgCallback(%d, %s) hit' |
| `bflib/bflib_network.cpp` | `0xff920` | `dk_warning_network_nildeletemsgcallback_hit_0ff920` | `0` | `1` | String 'WARNING network: NilDeleteMsgCallback(%d) hit' |
| `bflib/bflib_network.cpp` | `0xff938` | `dk_warning_network_nilhostmsgcallback_hit_0ff938` | `0` | `1` | String 'WARNING network: NilHostMsgCallback(%d) hit' |
| `bflib/bflib_network.cpp` | `0xff950` | `dk_NilUserSysMsgCallback_0ff950` | `0` | `1` | References 'WARNING network: NilUserSysMsgCallback() hit' |
| `bflib/bflib_network.cpp` | `0xff960` | `dk_warning_network_niluserdatamsgcallbac_hit_0ff960` | `0` | `1` | String 'WARNING network: NilUserDataMsgCallback(%d, %d %d) hit' |
| `bflib/bflib_network.cpp` | `0xff984` | `dk_warning_network_nilrequestexchangedat_amsgcallback_0ff984` | `0` | `1` | String 'WARNING network: NilRequestExchangeDataMsgCallback(%d %d) hi' |
| `bflib/bflib_network.cpp` | `0xff9a0` | `dk_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0` | `0` | `1` | String 'WARNING network: NilRequestCompositeExchangeDataMsgCallback(' |
| `bflib/bflib_network.cpp` | `0xff9bc` | `dk_warning_network_nilunidirectionalmsgc_allback_0ff9bc` | `0` | `1` | String 'WARNING network: NilUnidirectionalMsgCallback(%d, %d) hit' |
| `bflib/bflib_network.cpp` | `0xff9dc` | `dk_warning_network_nilsystemusermsgcallb_ack_0ff9dc` | `0` | `1` | String 'WARNING network: NilSystemUserMsgCallback(%d %d) hit' |
| `bflib/bflib_network.cpp` | `0xffb54` | `dk_Receive_0ffb54` | `12` | `5` | References 'WARNING network: ServiceProvider::Receive() not initialised' |
| `bflib/bflib_network.cpp` | `0x1002dc` | `dk_Send_1002dc` | `15` | `4` | References 'WARNING network: ServiceProvider::Send() not initialised' |
| `bflib/bflib_network.cpp` | `0x100718` | `dk_DecodeMessageStub_100718` | `1` | `1` | References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr' |
| `bflib/bflib_network.cpp` | `0x100828` | `dk_EnumeratePlayersForSessionRunning_100828` | `1` | `2` | References 'WARNING network: ServiceProvider::EnumeratePlayersForSessionRunni' |
| `bflib/bflib_network.cpp` | `0x1008d0` | `dk_GenericSerialInit_1008d0` | `1` | `4` | References 'WARNING network: GenericSerialInit() failure on ServiceProvider::' |
| `bflib/bflib_network.cpp` | `0x100a28` | `dk_StartTwoPlayerExchange_100a28` | `1` | `5` | References 'WARNING network: StartTwoPlayerExchange() failure on SP::Send()' |
| `bflib/bflib_network.cpp` | `0x100bb8` | `dk_CompleteTwoPlayerExchange_100bb8` | `1` | `7` | References 'WARNING network: CompleteTwoPlayerExchange() failure on SP::Send(' |
| `bflib/bflib_network.cpp` | `0x100e14` | `dk_TwoPlayerCallback_100e14` | `0` | `6` | References 'WARNING network: TwoPlayerCallback() Unexpected sequence number: ' |
| `bflib/bflib_network.cpp` | `0x101074` | `dk_TwoPlayerReqExDataMsgCallback_101074` | `0` | `4` | References 'WARNING network: TwoPlayerReqExDataMsgCallback() could not find r' |
| `bflib/bflib_network.cpp` | `0x101158` | `dk_GenericModemInit_101158` | `1` | `4` | References 'WARNING network: GenericModemInit() failure on ServiceProvider::I' |
| `bflib/bflib_network.cpp` | `0x101360` | `dk_allocated_fine_handler_size_101360` | `1` | `8` | String 'ALLOCATED FINE HANDLER SIZE = %d' |
| `bflib/bflib_network.cpp` | `0x102108` | `dk_network_node_102108` | `1` | `4` | String 'NETWORK %x%x%x%x
NODE %02x%02x%02x%02x%02x%02x' |
| `bflib/bflib_network.cpp` | `0x1031e8` | `dk_Init_1031e8` | `2` | `4` | References 'WARNING network: IPXServiceProvider::Init() failure on Initialise' |
| `bflib/bflib_network.cpp` | `0x1032d8` | `dk_LbNETWORK_1032d8` | `1` | `11` | References 'LbNETWORK : Initialising IPXServiceProvider' |
| `bflib/bflib_network.cpp` | `0x103464` | `dk_LbNETWORK_103464` | `0` | `7` | References 'LbNETWORK : Releasing IPXServiceProvider' |
| `bflib/bflib_network.cpp` | `0x103528` | `dk_Start_103528` | `0` | `9` | References 'WARNING network: IPXServiceProvider::Start() not initialised' |
| `bflib/bflib_network.cpp` | `0x10646c` | `dk_Start_10646c` | `2` | `12` | References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer' |
| `bflib/bflib_network.cpp` | `0x106da4` | `dk_Start_106da4` | `1` | `8` | References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer' |
| `bflib/bflib_network.cpp` | `0x10962c` | `dk_resending_packet_10962c` | `1` | `7` | String 'RESENDING PACKET' |
| `bflib/bflib_network.cpp` | `0x11e254` | `dk_LbNETWORK_11e254` | `1` | `7` | References 'LbNETWORK : Releasing SerialSP' |
| `bflib/bflib_network.cpp` | `0x11e314` | `dk_LbNETWORK_11e314` | `1` | `7` | References 'LbNETWORK : Initialising SerialSP' |
| `bflib/bflib_network.cpp` | `0x11e484` | `dk_Start_11e484` | `1` | `4` | References 'WARNING network: SerialSP::Start() not initialised' |
| `bflib/bflib_network.cpp` | `0x11e554` | `dk_Start_11e554` | `1` | `7` | References 'WARNING network: SerialSP::Start() not initialised' |
| `bflib/bflib_network.cpp` | `0x11e6a8` | `dk_SendMessage_11e6a8` | `1` | `5` | References 'WARNING network: SerialSP::SendMessage() invalid sendMode()' |
| `bflib/bflib_network.cpp` | `0x11e9e8` | `dk_Enumerate_11e9e8` | `0` | `3` | References 'WARNING network: SerialSP::Enumerate() not initialised' |
| `bflib/bflib_network.cpp` | `0x11ea38` | `dk_Enumerate_11ea38` | `0` | `3` | References 'WARNING network: SerialSP::Enumerate() not initialised' |
| `bflib/bflib_network.cpp` | `0x11eaf8` | `dk_Stop_11eaf8` | `1` | `5` | References 'WARNING network: SerialSP::Stop() not initialised' |
| `bflib/bflib_network.cpp` | `0x11eb84` | `dk_ReadMessage_11eb84` | `0` | `2` | References 'WARNING network: SerialSP::ReadMessage() invalid m_localPlayerId' |
| `bflib/bflib_network.cpp` | `0x11ebd0` | `dk_PeekMessage_11ebd0` | `0` | `2` | References 'WARNING network: SerialSP::PeekMessage() invalid m_localPlayerId' |
| `bflib/bflib_network.cpp` | `0x11ec1c` | `dk_SendAck_11ec1c` | `1` | `2` | References 'WARNING network: SerialSP::SendAck() failure on CommHandler::Writ' |
| `bflib/bflib_network.cpp` | `0x11ece0` | `dk_PrivateReceive_11ece0` | `2` | `4` | References 'WARNING network: SerialSP::PrivateReceive() invalid mode value' |
| `bflib/bflib_network.cpp` | `0x11ee0c` | `dk_warning_network_serialsp_privatereceive_11ee0c` | `1` | `6` | String 'WARNING network: SerialSP::PrivateReceive addPlayerBuffer to' |
| `bflib/bflib_network.cpp` | `0x11f4d8` | `dk_LbNETWORK_11f4d8` | `0` | `2` | References 'LbNETWORK : Releasing ModemSP' |
| `bflib/bflib_network.cpp` | `0x11f53c` | `dk_MODEM_11f53c` | `0` | `9` | Log prefix 'MODEM: USER ABORTS MODEM INIT FUNCTION' |
| `bflib/bflib_network.cpp` | `0x11f818` | `dk_MODEM_11f818` | `0` | `10` | Log prefix 'MODEM: IS BUSY OR ENGAGED' |
| `bflib/bflib_network.cpp` | `0x11fb98` | `dk_calling_hangupmodem_11fb98` | `0` | `3` | String 'CALLING HANGUPMODEM' |
| `bflib/bflib_network.cpp` | `0x124d1c` | `sub_124d1c` | `2` | `1` | Address-based identifier |
| `bflib/bflib_network.cpp` | `0x125630` | `dk_serialhandler_size_port_irq_125630` | `1` | `5` | String 'SERIALHANDLER size %d Port %x IRQ %x INT VECT %x' |
| `bflib/bflib_network.cpp` | `0x1262a4` | `dk_commhandler_readserialdev_null_parameter_1262a4` | `1` | `1` | String 'CommHandler::ReadSerialDev NULL parameter passed' |

## 3. Decompiled Key Networking & Packet Functions

### `dk_levelnamefile_add_blank_line_032f9b` (`0x32f9b` in `frontnet.cpp`)
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

### `sub_03325d` (`0x3325d` in `frontnet.cpp`)
- **Evidence**: Address-based identifier
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

### `dk_button_type_033563` (`0x33563` in `frontnet.cpp`)
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

### `dk_LbNetwork_Stop_033bcc` (`0x33bcc` in `frontnet.cpp`)
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

### `dk_LbNetwork_Stop_033bfb` (`0x33bfb` in `frontnet.cpp`)
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

### `dk_LbNetwork_EnumerateServices_033ead` (`0x33ead` in `frontnet.cpp`)
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

### `dk_isdn_supported_serial_03442b` (`0x3442b` in `frontnet.cpp`)
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

### `dk_LbNetwork_EnumerateSessions_0346de` (`0x346de` in `frontnet.cpp`)
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

### `dk_LbNetwork_EnumeratePlayers_034f38` (`0x34f38` in `frontnet.cpp`)
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

### `dk_sessions_enumeration_035446` (`0x35446` in `frontnet.cpp`)
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

### `dk_players_enumeration_0354fb` (`0x354fb` in `frontnet.cpp`)
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

### `dk_unrecognised_network_service_035546` (`0x35546` in `frontnet.cpp`)
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

### `dk_LbNetwork_Exchange_035758` (`0x35758` in `frontnet.cpp`)
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

### `dk_LbNetwork_Stop_035d29` (`0x35d29` in `frontnet.cpp`)
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

### `dk_LbNetwork_Exchange_05d35c` (`0x5d35c` in `packet.cpp`)
- **Evidence**: References 'LbNetwork_Exchange failed'
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

### `dk_my_player_host_05d7b5` (`0x5d7b5` in `packet.cpp`)
- **Evidence**: String 'MY_PLAYER=%d  Host=%d'
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

### `dk_LbNetwork_Exchange_05dc27` (`0x5dc27` in `packet.cpp`)
- **Evidence**: References 'LbNetwork_Exchange failed'
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

### `dk_room_here_delete_05f6c5` (`0x5f6c5` in `packet.cpp`)
- **Evidence**: String 'No room here to delete'
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

### `dk_open_keeper_packet_file_0617c9` (`0x617c9` in `packet.cpp`)
- **Evidence**: String 'Cannot open keeper packet file for save'
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

### `dk_open_keeper_packet_file_0618f5` (`0x618f5` in `packet.cpp`)
- **Evidence**: String 'Cannot open keeper packet file for load'
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

### `dk_packet_saving_seek_offset_0619be` (`0x619be` in `packet.cpp`)
- **Evidence**: String 'Packet Saving Seek Offset is wrong'
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

### `dk_LbNetwork_Init_0ed4e0` (`0xed4e0` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_Create_0ed84c` (`0xed84c` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_Join_0eda20` (`0xeda20` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_Stop_0edc70` (`0xedc70` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_EnumerateSessions_0edd8c` (`0xedd8c` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_EnumeratePlayers_0eddf0` (`0xeddf0` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_CompleteExchange_0ee3c0` (`0xee3c0` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_StartExchange_0ee694` (`0xee694` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_ChangeExchangeBuffer_0eeb20` (`0xeeb20` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_CompleteExchange_0ef060` (`0xef060` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_Send_0f3b50` (`0xf3b50` in `bflib/bflib_network.cpp`)
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

### `dk_LbNetwork_Receive_0f3ed8` (`0xf3ed8` in `bflib/bflib_network.cpp`)
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

### `dk_resending_packet_10962c` (`0x10962c` in `bflib/bflib_network.cpp`)
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

