#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Master Function Prototype Index (4418 procedures)
 */

#include "dk_types.h"
#include "dk_structs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* === Module: anger.cpp (34 functions) === */
/* VA: 0x10010 | Module anger.cpp procedure @ 0x010010 */
void anger_fn_010010(void);
/* VA: 0x1009d | Module anger.cpp procedure @ 0x01009d */
void anger_fn_01009d(void);
/* VA: 0x10132 | Module anger.cpp procedure @ 0x010132 */
void anger_fn_010132(void);
/* VA: 0x1017e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void anger_update_creature_control_01017e(void);
/* VA: 0x101c2 | Module anger.cpp procedure @ 0x0101c2 */
undefined4 anger_fn_0101c2(void);
/* VA: 0x10229 | Module anger.cpp procedure @ 0x010229 */
undefined4 anger_fn_010229(void);
/* VA: 0x102c0 | Checks Thing->class_id == 9 (Door) and processes state */
int anger_handle_door_thing_0102c0(void);
/* VA: 0x10408 | Module anger.cpp procedure @ 0x010408 */
bool anger_fn_010408(void);
/* VA: 0x10434 | Module anger.cpp procedure @ 0x010434 */
void anger_fn_010434(void);
/* VA: 0x104db | Module anger.cpp procedure @ 0x0104db */
void anger_fn_0104db(void);
/* VA: 0x10575 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
byte anger_update_creature_control_010575(void);
/* VA: 0x10589 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
byte anger_update_creature_control_010589(void);
/* VA: 0x105a1 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 anger_update_creature_control_0105a1(void);
/* VA: 0x10606 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 anger_update_creature_control_010606(void);
/* VA: 0x1064a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 anger_update_creature_control_01064a(void);
/* VA: 0x10689 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 anger_update_creature_control_010689(void);
/* VA: 0x1073a | String 'Hurrah, mental instability error - creature has a psychosis.' */
undefined4 anger_hurrah_mental_instability_creature_01073a(void);
/* VA: 0x109ea | String 'REMOVING ANNOYED CREATURE - NON TO Remove' */
void anger_removing_annoyed_creature_non_0109ea(void);
/* VA: 0x10ad6 | Module anger.cpp procedure @ 0x010ad6 */
void anger_fn_010ad6(void);
/* VA: 0x10b0d | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 anger_update_creature_control_010b0d(void);
/* VA: 0x10b2a | Module anger.cpp procedure @ 0x010b2a */
undefined4 anger_fn_010b2a(void);
/* VA: 0x10b30 | Accesses per-player Dungeon state (stride 0x1508) */
void anger_update_player_dungeon_010b30(void);
/* VA: 0x10b75 | Module anger.cpp procedure @ 0x010b75 */
void anger_fn_010b75(void);
/* VA: 0x10ba3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void anger_update_creature_control_010ba3(void);
/* VA: 0x10c1a | Module anger.cpp procedure @ 0x010c1a */
uint anger_fn_010c1a(void);
/* VA: 0x10c44 | Module anger.cpp procedure @ 0x010c44 */
uint anger_fn_010c44(void);
/* VA: 0x10c5f | Module anger.cpp procedure @ 0x010c5f */
uint anger_fn_010c5f(void);
/* VA: 0x10c85 | Module anger.cpp procedure @ 0x010c85 */
int anger_fn_010c85(void);
/* VA: 0x10cd7 | Module anger.cpp procedure @ 0x010cd7 */
void anger_fn_010cd7(void);
/* VA: 0x10cf5 | Module anger.cpp procedure @ 0x010cf5 */
void anger_fn_010cf5(void);
/* VA: 0x10d08 | Module anger.cpp procedure @ 0x010d08 */
void anger_fn_010d08(void);
/* VA: 0x10d93 | Module anger.cpp procedure @ 0x010d93 */
undefined8 anger_fn_010d93(void);
/* VA: 0x10dac | Accesses CreatureControl state in g_creature_ctrl_ptrs */
ulonglong anger_update_creature_control_010dac(void);
/* VA: 0x10dfc | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined8 anger_roll_action_random_010dfc(void);

/* === Module: angtool.cpp (22 functions) === */
/* VA: 0x10ecc | Module angtool.cpp procedure @ 0x010ecc */
longlong angtool_fn_010ecc(void);
/* VA: 0x10ed3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong angtool_update_creature_control_010ed3(void);
/* VA: 0x10f6c | Operates on Room structure in g_rooms (stride 0x45) */
longlong angtool_process_dungeon_room_010f6c(void);
/* VA: 0x10fdf | Operates on Room structure in g_rooms (stride 0x45) */
longlong angtool_process_dungeon_room_010fdf(void);
/* VA: 0x1107a | Module angtool.cpp procedure @ 0x01107a */
undefined8 angtool_fn_01107a(void);
/* VA: 0x110ed | Updates 3x3 subtile map entries for slab coordinates */
undefined8 angtool_update_slab_subtile_columns_0110ed(void);
/* VA: 0x11214 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong angtool_update_creature_and_thing_011214(void);
/* VA: 0x11342 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong angtool_update_creature_and_thing_011342(void);
/* VA: 0x11408 | Reads/modifies Map[256x256] subtile data */
undefined8 angtool_process_map_subtile_011408(void);
/* VA: 0x114f6 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong angtool_update_creature_and_thing_0114f6(void);
/* VA: 0x115a4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 angtool_update_creature_control_0115a4(void);
/* VA: 0x11606 | Module angtool.cpp procedure @ 0x011606 */
undefined4 angtool_fn_011606(void);
/* VA: 0x1173f | Updates 3x3 subtile map entries for slab coordinates */
undefined8 angtool_update_slab_subtile_columns_01173f(void);
/* VA: 0x11862 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 angtool_update_creature_control_011862(void);
/* VA: 0x119bc | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 angtool_update_creature_control_0119bc(void);
/* VA: 0x11a81 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 angtool_update_creature_control_011a81(void);
/* VA: 0x11b51 | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong angtool_update_player_view_state_011b51(void);
/* VA: 0x11be9 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 angtool_process_thing_entity_011be9(void);
/* VA: 0x11c78 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong angtool_update_creature_control_011c78(void);
/* VA: 0x11d2f | Module angtool.cpp procedure @ 0x011d2f */
longlong angtool_fn_011d2f(void);
/* VA: 0x11d65 | Module angtool.cpp procedure @ 0x011d65 */
undefined8 angtool_fn_011d65(void);
/* VA: 0x11db9 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 angtool_update_creature_and_thing_011db9(void);

/* === Module: ariadne.cpp (19 functions) === */
/* VA: 0x11e00 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 ariadne_update_creature_control_011e00(void);
/* VA: 0x12002 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined1 ariadne_update_creature_control_012002(void);
/* VA: 0x1211a | Module ariadne.cpp procedure @ 0x01211a */
undefined4 ariadne_fn_01211a(void);
/* VA: 0x12230 | Module ariadne.cpp procedure @ 0x012230 */
undefined4 ariadne_fn_012230(void);
/* VA: 0x123ba | Module ariadne.cpp procedure @ 0x0123ba */
undefined1 ariadne_fn_0123ba(void);
/* VA: 0x1264b | String 'Unknown Manoeuvre state' */
undefined4 ariadne_manoeuvre_state_01264b(void);
/* VA: 0x1277d | String 'Ariadne Speed == 0' */
uint ariadne_speed_01277d(void);
/* VA: 0x128cd | Module ariadne.cpp procedure @ 0x0128cd */
int ariadne_fn_0128cd(void);
/* VA: 0x129db | Module ariadne.cpp procedure @ 0x0129db */
bool ariadne_fn_0129db(void);
/* VA: 0x12a2e | Module ariadne.cpp procedure @ 0x012a2e */
void ariadne_fn_012a2e(void);
/* VA: 0x12a67 | Module ariadne.cpp procedure @ 0x012a67 */
byte ariadne_fn_012a67(void);
/* VA: 0x12b04 | Module ariadne.cpp procedure @ 0x012b04 */
uint ariadne_fn_012b04(void);
/* VA: 0x12c46 | Module ariadne.cpp procedure @ 0x012c46 */
undefined4 ariadne_fn_012c46(void);
/* VA: 0x12edf | Module ariadne.cpp procedure @ 0x012edf */
undefined4 ariadne_fn_012edf(void);
/* VA: 0x12fef | Module ariadne.cpp procedure @ 0x012fef */
undefined4 ariadne_fn_012fef(void);
/* VA: 0x1305f | Module ariadne.cpp procedure @ 0x01305f */
void ariadne_fn_01305f(void);
/* VA: 0x130a3 | Module ariadne.cpp procedure @ 0x0130a3 */
undefined4 ariadne_fn_0130a3(void);
/* VA: 0x130a6 | Module ariadne.cpp procedure @ 0x0130a6 */
undefined4 ariadne_fn_0130a6(void);
/* VA: 0x13169 | Module ariadne.cpp procedure @ 0x013169 */
undefined4 ariadne_fn_013169(undefined1 *param_1);

/* === Module: barracks.cpp (12 functions) === */
/* VA: 0x130c5 | Module barracks.cpp procedure @ 0x0130c5 */
void barracks_fn_0130c5(void);
/* VA: 0x13105 | Module barracks.cpp procedure @ 0x013105 */
undefined4 barracks_fn_013105(void);
/* VA: 0x13359 | Module barracks.cpp procedure @ 0x013359 */
void barracks_fn_013359(void);
/* VA: 0x1342a | Module barracks.cpp procedure @ 0x01342a */
void barracks_fn_01342a(undefined1 *param_1);
/* VA: 0x13730 | Module barracks.cpp procedure @ 0x013730 */
undefined4 barracks_fn_013730(void);
/* VA: 0x13747 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong barracks_update_creature_control_013747(void);
/* VA: 0x137af | Module barracks.cpp procedure @ 0x0137af */
longlong barracks_fn_0137af(void);
/* VA: 0x13809 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 barracks_update_creature_control_013809(void);
/* VA: 0x138c9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 barracks_update_creature_control_0138c9(void);
/* VA: 0x13acd | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 barracks_update_creature_and_thing_013acd(void);
/* VA: 0x13b43 | String 'INVALID BARRACK PARTY CLASS' */
longlong barracks_barrack_party_class_013b43(void);
/* VA: 0x13b98 | Module barracks.cpp procedure @ 0x013b98 */
void barracks_fn_013b98(void);

/* === Module: battle.cpp (17 functions) === */
/* VA: 0x13bae | String 'Attempt to create battle with null target!' */
void battle_attempt_create_battle_null_013bae(void);
/* VA: 0x13c9d | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void battle_update_creature_and_thing_013c9d(void);
/* VA: 0x13d3b | String 'Creature has been removed due to death' */
void battle_creature_has_been_removed_013d3b(void);
/* VA: 0x13e1b | String 'Hmmm... Attempt to remove creature from battle when he isn't' */
void battle_hmmm_attempt_remove_creature_013e1b(void);
/* VA: 0x14083 | Module battle.cpp procedure @ 0x014083 */
ulonglong battle_fn_014083(void);
/* VA: 0x140b7 | Module battle.cpp procedure @ 0x0140b7 */
ulonglong battle_fn_0140b7(void);
/* VA: 0x140ec | Accesses per-player Dungeon state (stride 0x1508) */
undefined1 battle_update_player_dungeon_0140ec(void);
/* VA: 0x14127 | String 'Empty Battle' */
uint battle_empty_battle_014127(void);
/* VA: 0x14188 | Module battle.cpp procedure @ 0x014188 */
char battle_fn_014188(void);
/* VA: 0x141d5 | String 'Empty Battle' */
uint battle_empty_battle_0141d5(void);
/* VA: 0x14235 | Module battle.cpp procedure @ 0x014235 */
undefined1 battle_fn_014235(void);
/* VA: 0x14280 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 battle_process_thing_entity_014280(void);
/* VA: 0x142cc | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
int battle_update_creature_and_thing_0142cc(void);
/* VA: 0x14322 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void battle_update_creature_control_014322(void);
/* VA: 0x1433e | String 'Horrible 0 thing in battle.' */
char battle_horrible_thing_battle_01433e(void);
/* VA: 0x1443f | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void battle_update_creature_and_thing_01443f(void);
/* VA: 0x144d2 | String 'Battle has %d members AFTER cleanup!' */
void battle_has_members_after_0144d2(void);

/* === Module: bflib/bflib_network.cpp (81 functions) === */
/* VA: 0xed04c | String 'BULLFROG NET LIBRARY VERSION %f FOR %s LAST BUILT __DATE__' */
void lbnet_bullfrog_net_library_version_0ed04c(void);
/* VA: 0xed0e8 | Module bflib/bflib_network.cpp procedure @ 0x0ed0e8 */
uint lbnet_fn_0ed0e8(void);
/* VA: 0xed4e0 | References 'WARNING network: LbNetwork_Init() failure on compositeBuffer allo' */
undefined8 LbNetwork_Init_0ed4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5,undefined4 param_6,int param_7,char *param_8,undefined4 param_9);
/* VA: 0xed84c | References 'ERROR::LbNetwork_Create ServiceProvider ptr is NULL' */
undefined1 LbNetwork_Create_0ed84c(void);
/* VA: 0xeda20 | References 'ERROR::LbNetwork_Join ServiceProvider ptr is NULL' */
undefined1 LbNetwork_Join_0eda20(void);
/* VA: 0xedc70 | References 'INSIDE LbNetwork_Stop' */
undefined8 LbNetwork_Stop_0edc70(void);
/* VA: 0xedd8c | References 'ERROR::LbNetwork_EnumerateSessions ServiceProvider ptr is NULL' */
undefined1 LbNetwork_EnumerateSessions_0edd8c(void);
/* VA: 0xeddf0 | References 'ERROR::LbNetwork_EnumeratePlayers ServiceProvider ptr is NULL' */
undefined1 LbNetwork_EnumeratePlayers_0eddf0(void);
/* VA: 0xee3c0 | References 'WARNING network: LbNetwork_CompleteExchange() failure on HostData' */
undefined8 LbNetwork_CompleteExchange_0ee3c0(void);
/* VA: 0xee694 | References 'ERROR::LbNetwork_StartExchange ServiceProvider ptr is NULL' */
longlong LbNetwork_StartExchange_0ee694(void);
/* VA: 0xeeb20 | References 'WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buff' */
undefined1 LbNetwork_ChangeExchangeBuffer_0eeb20(void);
/* VA: 0xeebe0 | References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated' */
undefined8 lbnet_GetCurrentPlayers_0eebe0(void);
/* VA: 0xeedc0 | References 'WARNING network: HostDataCollection() deletePlayerBuffer is too s' */
undefined8 lbnet_HostDataCollection_0eedc0(void);
/* VA: 0xef060 | References 'WARNING network: LbNetwork_CompleteExchange() failure on SP::Send' */
undefined8 LbNetwork_CompleteExchange_0ef060(void);
/* VA: 0xef14c | References 'WARNING network: UserDataMsgCallback() host got data from itself' */
int lbnet_UserDataMsgCallback_0ef14c(uint param_1,uint param_2,int param_3);
/* VA: 0xef4a8 | References 'WARNING network: DeleteMsgCallback() NULL localPlayerInfoPtr' */
void lbnet_DeleteMsgCallback_0ef4a8(int param_1);
/* VA: 0xef520 | References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated' */
undefined8 lbnet_GetCurrentPlayers_0ef520(void);
/* VA: 0xef7a8 | References 'WARNING network: RequestExchangeDataMsgCallback() NULL data point' */
void lbnet_RequestExchangeDataMsgCallback_0ef7a8(undefined4 param_1,int param_2);
/* VA: 0xef864 | References 'WARNING network: RequestCompositeExchangeDataMsgCallback() failur' */
void lbnet_RequestCompositeExchangeDataMsgCallback_0ef864(undefined4 param_1,uint param_2);
/* VA: 0xef8e8 | References 'WARNING network: GenericIPXInit() failure on ServiceProvider::Ini' */
undefined8 lbnet_GenericIPXInit_0ef8e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0xefab0 | References 'WARNING network: SendSystemUserMessage() systemUserBuffer is too ' */
void lbnet_SendSystemUserMessage_0efab0(undefined4 param_1,char *param_2,int param_3);
/* VA: 0xf3b50 | References 'INSIDE LbNetwork_Send' */
undefined4 LbNetwork_Send_0f3b50(void);
/* VA: 0xf3ed8 | References 'INSIDE LbNetwork_Receive' */
uint LbNetwork_Receive_0f3ed8(void);
/* VA: 0xff0ec | References 'LbNETWORK : Destructing ServiceProvider' */
void LbNETWORK_0ff0ec(void);
/* VA: 0xff10c | References 'LbNETWORK : Initialising ServiceProvider' */
uint LbNETWORK_0ff10c(void);
/* VA: 0xff18c | References 'LbNETWORK : Releasing ServiceProvider' */
ulonglong LbNETWORK_0ff18c(void);
/* VA: 0xff1d4 | References 'WARNING network: ServiceProvider::AddPlayer() player table is ful' */
undefined4 lbnet_AddPlayer_0ff1d4(undefined4 param_1);
/* VA: 0xff550 | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' */
void lbnet_EncodeMessageStub_0ff550(void);
/* VA: 0xff630 | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' */
void lbnet_EncodeMessageStub_0ff630(void);
/* VA: 0xff6a0 | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' */
void lbnet_EncodeMessageStub_0ff6a0(void);
/* VA: 0xff6f0 | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' */
void lbnet_EncodeMessageStub_0ff6f0(void);
/* VA: 0xff894 | References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr' */
void lbnet_EncodeMessageStub_0ff894(void);
/* VA: 0xff8c0 | References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr' */
void lbnet_DecodeMessageStub_0ff8c0(void);
/* VA: 0xff904 | String 'WARNING network: NilAddMsgCallback(%d, %s) hit' */
void lbnet_warning_network_niladdmsgcallback_hit_0ff904(undefined4 param_1,undefined4 param_2);
/* VA: 0xff920 | String 'WARNING network: NilDeleteMsgCallback(%d) hit' */
void lbnet_warning_network_nildeletemsgcallback_hit_0ff920(undefined4 param_1);
/* VA: 0xff938 | String 'WARNING network: NilHostMsgCallback(%d) hit' */
void lbnet_warning_network_nilhostmsgcallback_hit_0ff938(undefined4 param_1);
/* VA: 0xff950 | References 'WARNING network: NilUserSysMsgCallback() hit' */
void lbnet_NilUserSysMsgCallback_0ff950(void);
/* VA: 0xff960 | String 'WARNING network: NilUserDataMsgCallback(%d, %d %d) hit' */
undefined4 lbnet_warning_network_niluserdatamsgcallbac_hit_0ff960(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xff984 | String 'WARNING network: NilRequestExchangeDataMsgCallback(%d %d) hi' */
void lbnet_warning_network_nilrequestexchangedat_amsgcallback_0ff984(undefined4 param_1,undefined4 param_2);
/* VA: 0xff9a0 | String 'WARNING network: NilRequestCompositeExchangeDataMsgCallback(' */
void lbnet_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0(undefined4 param_1,undefined4 param_2);
/* VA: 0xff9bc | String 'WARNING network: NilUnidirectionalMsgCallback(%d, %d) hit' */
undefined4 lbnet_warning_network_nilunidirectionalmsgc_allback_0ff9bc(undefined4 param_1,undefined4 param_2);
/* VA: 0xff9dc | String 'WARNING network: NilSystemUserMsgCallback(%d %d) hit' */
void lbnet_warning_network_nilsystemusermsgcallb_ack_0ff9dc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xffb54 | References 'WARNING network: ServiceProvider::Receive() not initialised' */
undefined1 lbnet_Receive_0ffb54(void);
/* VA: 0x1002dc | References 'WARNING network: ServiceProvider::Send() not initialised' */
undefined1 lbnet_Send_1002dc(void);
/* VA: 0x100718 | References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr' */
undefined1 lbnet_DecodeMessageStub_100718(void);
/* VA: 0x100828 | References 'WARNING network: ServiceProvider::EnumeratePlayersForSessionRunni' */
undefined1 lbnet_EnumeratePlayersForSessionRunning_100828(void);
/* VA: 0x1008d0 | References 'WARNING network: GenericSerialInit() failure on ServiceProvider::' */
undefined8 lbnet_GenericSerialInit_1008d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
/* VA: 0x100a28 | References 'WARNING network: StartTwoPlayerExchange() failure on SP::Send()' */
ulonglong lbnet_StartTwoPlayerExchange_100a28(void);
/* VA: 0x100bb8 | References 'WARNING network: CompleteTwoPlayerExchange() failure on SP::Send(' */
undefined8 lbnet_CompleteTwoPlayerExchange_100bb8(void);
/* VA: 0x100e14 | References 'WARNING network: TwoPlayerCallback() Unexpected sequence number: ' */
int lbnet_TwoPlayerCallback_100e14(undefined4 param_1,int param_2,int param_3);
/* VA: 0x101074 | References 'WARNING network: TwoPlayerReqExDataMsgCallback() could not find r' */
void lbnet_TwoPlayerReqExDataMsgCallback_101074(undefined4 param_1,int param_2);
/* VA: 0x101158 | References 'WARNING network: GenericModemInit() failure on ServiceProvider::I' */
undefined8 lbnet_GenericModemInit_101158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
/* VA: 0x101360 | String 'ALLOCATED FINE HANDLER SIZE = %d' */
longlong lbnet_allocated_fine_handler_size_101360(void);
/* VA: 0x102108 | String 'NETWORK %x%x%x%x
NODE %02x%02x%02x%02x%02x%02x' */
undefined4 lbnet_network_node_102108(void);
/* VA: 0x1031e8 | References 'WARNING network: IPXServiceProvider::Init() failure on Initialise' */
undefined8 lbnet_Init_1031e8(undefined4 param_1);
/* VA: 0x1032d8 | References 'LbNETWORK : Initialising IPXServiceProvider' */
undefined1 LbNETWORK_1032d8(void);
/* VA: 0x103464 | References 'LbNETWORK : Releasing IPXServiceProvider' */
undefined8 LbNETWORK_103464(void);
/* VA: 0x103528 | References 'WARNING network: IPXServiceProvider::Start() not initialised' */
undefined1 lbnet_Start_103528(void);
/* VA: 0x10646c | References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer' */
undefined1 lbnet_Start_10646c(void);
/* VA: 0x106da4 | References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer' */
undefined1 lbnet_Start_106da4(void);
/* VA: 0x10962c | String 'RESENDING PACKET' */
undefined1 lbnet_resending_packet_10962c(void);
/* VA: 0x11e254 | References 'LbNETWORK : Releasing SerialSP' */
undefined8 LbNETWORK_11e254(void);
/* VA: 0x11e314 | References 'LbNETWORK : Initialising SerialSP' */
undefined8 LbNETWORK_11e314(undefined4 param_1);
/* VA: 0x11e484 | References 'WARNING network: SerialSP::Start() not initialised' */
undefined1 lbnet_Start_11e484(void);
/* VA: 0x11e554 | References 'WARNING network: SerialSP::Start() not initialised' */
undefined1 lbnet_Start_11e554(void);
/* VA: 0x11e6a8 | References 'WARNING network: SerialSP::SendMessage() invalid sendMode()' */
undefined1 lbnet_SendMessage_11e6a8(void);
/* VA: 0x11e9e8 | References 'WARNING network: SerialSP::Enumerate() not initialised' */
undefined4 lbnet_Enumerate_11e9e8(void);
/* VA: 0x11ea38 | References 'WARNING network: SerialSP::Enumerate() not initialised' */
undefined1 lbnet_Enumerate_11ea38(void);
/* VA: 0x11eaf8 | References 'WARNING network: SerialSP::Stop() not initialised' */
undefined8 lbnet_Stop_11eaf8(void);
/* VA: 0x11eb84 | References 'WARNING network: SerialSP::ReadMessage() invalid m_localPlayerId' */
undefined4 lbnet_ReadMessage_11eb84(void);
/* VA: 0x11ebd0 | References 'WARNING network: SerialSP::PeekMessage() invalid m_localPlayerId' */
undefined4 lbnet_PeekMessage_11ebd0(void);
/* VA: 0x11ec1c | References 'WARNING network: SerialSP::SendAck() failure on CommHandler::Writ' */
void lbnet_SendAck_11ec1c(void);
/* VA: 0x11ece0 | References 'WARNING network: SerialSP::PrivateReceive() invalid mode value' */
int lbnet_PrivateReceive_11ece0(void);
/* VA: 0x11ee0c | String 'WARNING network: SerialSP::PrivateReceive addPlayerBuffer to' */
undefined4 lbnet_warning_network_serialsp_privatereceive_11ee0c(void);
/* VA: 0x11f4d8 | References 'LbNETWORK : Releasing ModemSP' */
void LbNETWORK_11f4d8(void);
/* VA: 0x11f53c | Log prefix 'MODEM: USER ABORTS MODEM INIT FUNCTION' */
undefined1 lbnet_MODEM_11f53c(int *param_1);
/* VA: 0x11f818 | Log prefix 'MODEM: IS BUSY OR ENGAGED' */
char lbnet_MODEM_11f818(void);
/* VA: 0x11fb98 | String 'CALLING HANGUPMODEM' */
undefined8 lbnet_calling_hangupmodem_11fb98(void);
/* VA: 0x124d1c | Module bflib/bflib_network.cpp procedure @ 0x124d1c */
undefined4 lbnet_fn_124d1c(void);
/* VA: 0x125630 | String 'SERIALHANDLER size %d Port %x IRQ %x INT VECT %x' */
undefined4 * lbnet_serialhandler_size_port_irq_125630(void);
/* VA: 0x1262a4 | String 'CommHandler::ReadSerialDev NULL parameter passed' */
void lbnet_commhandler_readserialdev_null_parameter_1262a4(void);

/* === Module: bflib/bflib_sound.cpp (138 functions) === */
/* VA: 0xea94f | String 'BF100 - Cannot allocate buffers for streamed sound' */
void bflib_sound_bf100_allocate_buffers_streamed_0ea94f(void);
/* VA: 0xeaa28 | String 'BF100 - Unknown streamed sample type %d' */
void bflib_sound_bf100_streamed_sample_type_0eaa28(void);
/* VA: 0xec93f | String 'bf110 - no cd or non-audio cd inserted in redbook audio cd' */
void bflib_sound_bf110_cd_non_audio_0ec93f(void);
/* VA: 0xecabc | String 'bf110 - play error - no cd or non-audio cd inserted in redbo' */
void bflib_sound_bf110_play_cd_non_0ecabc(void);
/* VA: 0xeccb6 | String 'BF110 - No CD or non-audio CD inserted in redbook audio devi' */
void bflib_sound_bf110_cd_non_audio_0eccb6(void);
/* VA: 0xecd16 | String 'BF110 - No CD or non-audio CD inserted in redbook audio devi' */
void bflib_sound_bf110_cd_non_audio_0ecd16(void);
/* VA: 0xecd76 | String 'BF110 - No CD or non-audio CD inserted in redbook audio devi' */
void bflib_sound_bf110_cd_non_audio_0ecd76(void);
/* VA: 0xece00 | String 'BF110 - No CD or non-audio CD inserted in redbook audio devi' */
void bflib_sound_bf110_cd_non_audio_0ece00(void);
/* VA: 0xf174e | String 'SBAWE32.MDI' */
void bflib_sound_sbawe32_mdi_0f174e(void);
/* VA: 0xf1aec | Module bflib/bflib_sound.cpp procedure @ 0x0f1aec */
void bflib_sound_fn_0f1aec(void);
/* VA: 0xf2188 | String 'BF48 - load music bank %d' */
undefined8 bflib_sound_bf48_load_music_bank_0f2188(void);
/* VA: 0xf8eec | String 'BF3  - Init sound' */
void bflib_sound_bf3_init_sound_0f8eec(void);
/* VA: 0xf949a | String '- no sound.dat' */
void bflib_sound_sound_dat_0f949a(void);
/* VA: 0xf98ca | References 'AIL_shutdown()' */
void bflib_sound_AIL_shutdown_0f98ca(void);
/* VA: 0xf996b | References 'AIL_set_driver_directory(%s)' */
undefined4 bflib_sound_AIL_set_driver_directory_0f996b(undefined4 param_1);
/* VA: 0xf99cc | References 'AIL_set_preference(%d,%d)' */
undefined4 bflib_sound_AIL_set_preference_0f99cc(undefined4 param_1,undefined4 param_2);
/* VA: 0xf9a8c | References 'AIL_get_real_vect(0x%X)' */
undefined4 bflib_sound_AIL_get_real_vect_0f9a8c(undefined4 param_1);
/* VA: 0xf9aea | References 'AIL_set_real_vect(0x%X,0x%X)' */
void bflib_sound_AIL_set_real_vect_0f9aea(undefined4 param_1,undefined4 param_2);
/* VA: 0xf9b55 | References 'AIL_set_USE16_ISR(%d,0x%X,%u)' */
void bflib_sound_AIL_set_USE16_ISR_0f9b55(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xf9bc6 | References 'AIL_restore_USE16_ISR(%d)' */
void bflib_sound_AIL_restore_USE16_ISR_0f9bc6(undefined4 param_1);
/* VA: 0xf9c40 | References 'AIL_call_driver(0x%X,0x%X,0x%X,0x%X)' */
undefined4 bflib_sound_AIL_call_driver_0f9c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0xf9cb3 | References 'AIL_delay(%d)' */
void bflib_sound_AIL_delay_0f9cb3(undefined4 param_1);
/* VA: 0xf9d16 | References 'AIL_API_read_INI(0x%X,%s)' */
int bflib_sound_AIL_API_read_INI_0f9d16(undefined4 param_1,undefined4 param_2);
/* VA: 0xf9f10 | References 'AIL_register_timer(0x%X)' */
undefined4 bflib_sound_AIL_register_timer_0f9f10(undefined4 param_1);
/* VA: 0xf9f71 | References 'AIL_set_timer_user(%u,%u)' */
undefined4 bflib_sound_AIL_set_timer_user_0f9f71(undefined4 param_1,undefined4 param_2);
/* VA: 0xf9fd5 | References 'AIL_set_timer_period(%u,%u)' */
void bflib_sound_AIL_set_timer_period_0f9fd5(undefined4 param_1,undefined4 param_2);
/* VA: 0xfa039 | References 'AIL_set_timer_frequency(%u,%u)' */
void bflib_sound_AIL_set_timer_frequency_0fa039(undefined4 param_1,undefined4 param_2);
/* VA: 0xfa1a4 | References 'AIL_start_timer(%u)' */
void bflib_sound_AIL_start_timer_0fa1a4(undefined4 param_1);
/* VA: 0xfa257 | References 'AIL_stop_timer(%u)' */
void bflib_sound_AIL_stop_timer_0fa257(undefined4 param_1);
/* VA: 0xfa30a | References 'AIL_release_timer_handle(%u)' */
void bflib_sound_AIL_release_timer_handle_0fa30a(undefined4 param_1);
/* VA: 0xfa368 | References 'AIL_release_all_timers()' */
void bflib_sound_AIL_release_all_timers_0fa368(void);
/* VA: 0xfa3bd | References 'AIL_get_IO_environment(0x%X)' */
undefined4 bflib_sound_AIL_get_IO_environment_0fa3bd(undefined4 param_1);
/* VA: 0xfa41b | References 'AIL_install_driver(0x%X,%u)' */
undefined4 bflib_sound_AIL_install_driver_0fa41b(undefined4 param_1,undefined4 param_2);
/* VA: 0xfa4d7 | References 'AIL_uninstall_driver(0x%X)' */
void bflib_sound_AIL_uninstall_driver_0fa4d7(undefined4 param_1);
/* VA: 0xfa535 | References 'AIL_install_DIG_INI(0x%X)' */
undefined4 bflib_sound_AIL_install_DIG_INI_0fa535(undefined4 param_1);
/* VA: 0xfa593 | References 'AIL_install_DIG_driver_file(%s,0x%X)' */
undefined4 bflib_sound_AIL_install_DIG_driver_file_0fa593(undefined4 param_1,undefined4 param_2);
/* VA: 0xfa5f7 | References 'AIL_uninstall_DIG_driver(0x%X)' */
void bflib_sound_AIL_uninstall_DIG_driver_0fa5f7(undefined4 param_1);
/* VA: 0xfa655 | References 'AIL_allocate_sample_handle(0x%X)' */
undefined4 bflib_sound_AIL_allocate_sample_handle_0fa655(undefined4 param_1);
/* VA: 0xfa720 | References 'AIL_release_sample_handle(0x%X)' */
void bflib_sound_AIL_release_sample_handle_0fa720(undefined4 param_1);
/* VA: 0xfa77e | References 'AIL_init_sample(0x%X)' */
void bflib_sound_AIL_init_sample_0fa77e(undefined4 param_1);
/* VA: 0xfa7dc | References 'AIL_set_sample_file(0x%X,0x%X,%d)' */
undefined4 bflib_sound_AIL_set_sample_file_0fa7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfa849 | References 'AIL_set_sample_address(0x%X,0x%X,%u)' */
void bflib_sound_AIL_set_sample_address_0fa849(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfa8b3 | References 'AIL_set_sample_type(0x%X,%d,%u)' */
void bflib_sound_AIL_set_sample_type_0fa8b3(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfa91d | References 'AIL_start_sample(0x%X)' */
void bflib_sound_AIL_start_sample_0fa91d(undefined4 param_1);
/* VA: 0xfa97b | References 'AIL_stop_sample(0x%X)' */
void bflib_sound_AIL_stop_sample_0fa97b(undefined4 param_1);
/* VA: 0xfa9d9 | References 'AIL_resume_sample(0x%X)' */
void bflib_sound_AIL_resume_sample_0fa9d9(undefined4 param_1);
/* VA: 0xfaa37 | References 'AIL_end_sample(0x%X)' */
void bflib_sound_AIL_end_sample_0faa37(undefined4 param_1);
/* VA: 0xfaa95 | References 'AIL_set_sample_playback_rate(0x%X,%d)' */
void bflib_sound_AIL_set_sample_playback_rate_0faa95(undefined4 param_1,undefined4 param_2);
/* VA: 0xfaaf9 | References 'AIL_set_sample_volume(0x%X,%d)' */
void bflib_sound_AIL_set_sample_volume_0faaf9(undefined4 param_1,undefined4 param_2);
/* VA: 0xfab5d | References 'AIL_set_sample_pan(0x%X,%d)' */
void bflib_sound_AIL_set_sample_pan_0fab5d(undefined4 param_1,undefined4 param_2);
/* VA: 0xfabc1 | References 'AIL_set_sample_loop_count(0x%X,%d)' */
void bflib_sound_AIL_set_sample_loop_count_0fabc1(undefined4 param_1,undefined4 param_2);
/* VA: 0xfac8f | References 'AIL_sample_status(0x%X)' */
undefined4 bflib_sound_AIL_sample_status_0fac8f(undefined4 param_1);
/* VA: 0xfaced | References 'AIL_sample_playback_rate(0x%X)' */
undefined4 bflib_sound_AIL_sample_playback_rate_0faced(undefined4 param_1);
/* VA: 0xfad4b | References 'AIL_sample_volume(0x%X)' */
undefined4 bflib_sound_AIL_sample_volume_0fad4b(undefined4 param_1);
/* VA: 0xfada9 | References 'AIL_sample_pan(0x%X)' */
undefined4 bflib_sound_AIL_sample_pan_0fada9(undefined4 param_1);
/* VA: 0xfae07 | References 'AIL_sample_loop_count(0x%X)' */
undefined4 bflib_sound_AIL_sample_loop_count_0fae07(undefined4 param_1);
/* VA: 0xfae65 | References 'AIL_set_digital_master_volume(0x%X,%d)' */
void bflib_sound_AIL_set_digital_master_volume_0fae65(undefined4 param_1,undefined4 param_2);
/* VA: 0xfaf2a | References 'AIL_digital_configuration(0x%lX,0x%lX,0x%lX,0x%lX)' */
void bflib_sound_AIL_digital_configuration_0faf2a(void);
/* VA: 0xfaff6 | References 'AIL_install_DIG_driver_image(0x%X,%u,0x%X)' */
undefined4 bflib_sound_AIL_install_DIG_driver_image_0faff6(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfb060 | References 'AIL_minimum_sample_buffer_size(0x%X,%d,%d)' */
undefined4 bflib_sound_AIL_minimum_sample_buffer_size_0fb060(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfb0ca | References 'AIL_sample_buffer_ready(0x%X)' */
undefined4 bflib_sound_AIL_sample_buffer_ready_0fb0ca(undefined4 param_1);
/* VA: 0xfb128 | References 'AIL_load_sample_buffer(0x%X,%u,0x%X,%u)' */
void bflib_sound_AIL_load_sample_buffer_0fb128(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0xfb19f | References 'AIL_sample_buffer_info(0x%X,0x%X,0x%X,0x%X,0x%X)' */
undefined4 bflib_sound_AIL_sample_buffer_info_0fb19f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
/* VA: 0xfb21a | References 'AIL_set_sample_position(0x%X,%u)' */
void bflib_sound_AIL_set_sample_position_0fb21a(undefined4 param_1,undefined4 param_2);
/* VA: 0xfb27e | References 'AIL_sample_position(0x%X)' */
undefined4 bflib_sound_AIL_sample_position_0fb27e(undefined4 param_1);
/* VA: 0xfb340 | References 'AIL_register_EOB_callback(0x%X,0x%X)' */
undefined4 bflib_sound_AIL_register_EOB_callback_0fb340(undefined4 param_1,undefined4 param_2);
/* VA: 0xfb3a4 | References 'AIL_register_EOS_callback(0x%X,0x%X)' */
undefined4 bflib_sound_AIL_register_EOS_callback_0fb3a4(undefined4 param_1,undefined4 param_2);
/* VA: 0xfb46c | References 'AIL_set_sample_user_data(0x%X,%u,%d)' */
void bflib_sound_AIL_set_sample_user_data_0fb46c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfb4d6 | References 'AIL_sample_user_data(0x%X,%u)' */
undefined4 bflib_sound_AIL_sample_user_data_0fb4d6(undefined4 param_1,undefined4 param_2);
/* VA: 0xfb598 | References 'AIL_install_MDI_INI(0x%X)' */
undefined4 bflib_sound_AIL_install_MDI_INI_0fb598(undefined4 param_1);
/* VA: 0xfb5f6 | References 'AIL_install_MDI_driver_file(%s,0x%X)' */
undefined4 bflib_sound_AIL_install_MDI_driver_file_0fb5f6(undefined4 param_1,undefined4 param_2);
/* VA: 0xfb65a | References 'AIL_uninstall_MDI_driver(0x%X)' */
void bflib_sound_AIL_uninstall_MDI_driver_0fb65a(undefined4 param_1);
/* VA: 0xfb6b8 | References 'AIL_allocate_sequence_handle(0x%X)' */
undefined4 bflib_sound_AIL_allocate_sequence_handle_0fb6b8(undefined4 param_1);
/* VA: 0xfb716 | References 'AIL_release_sequence_handle(0x%X)' */
void bflib_sound_AIL_release_sequence_handle_0fb716(undefined4 param_1);
/* VA: 0xfb774 | References 'AIL_init_sequence(0x%X,0x%X,%d)' */
undefined4 bflib_sound_AIL_init_sequence_0fb774(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfb7de | References 'AIL_start_sequence(0x%X)' */
void bflib_sound_AIL_start_sequence_0fb7de(undefined4 param_1);
/* VA: 0xfb83c | References 'AIL_stop_sequence(0x%X)' */
void bflib_sound_AIL_stop_sequence_0fb83c(undefined4 param_1);
/* VA: 0xfb89a | References 'AIL_resume_sequence(0x%X)' */
void bflib_sound_AIL_resume_sequence_0fb89a(undefined4 param_1);
/* VA: 0xfb8f8 | References 'AIL_end_sequence(0x%X)' */
void bflib_sound_AIL_end_sequence_0fb8f8(undefined4 param_1);
/* VA: 0xfb956 | References 'AIL_set_sequence_tempo(0x%X,%d,%d)' */
void bflib_sound_AIL_set_sequence_tempo_0fb956(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfb9c0 | References 'AIL_set_sequence_volume(0x%X,%d,%d)' */
void bflib_sound_AIL_set_sequence_volume_0fb9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfba2a | References 'AIL_set_sequence_loop_count(0x%X,%d)' */
void bflib_sound_AIL_set_sequence_loop_count_0fba2a(undefined4 param_1,undefined4 param_2);
/* VA: 0xfba8e | References 'AIL_sequence_status(0x%X)' */
undefined4 bflib_sound_AIL_sequence_status_0fba8e(undefined4 param_1);
/* VA: 0xfbc06 | References 'AIL_set_XMIDI_master_volume(0x%X,%d)' */
void bflib_sound_AIL_set_XMIDI_master_volume_0fbc06(undefined4 param_1,undefined4 param_2);
/* VA: 0xfbd32 | References 'AIL_MDI_driver_type(0x%X)' */
undefined4 bflib_sound_AIL_MDI_driver_type_0fbd32(undefined4 param_1);
/* VA: 0xfbd90 | References 'AIL_set_GTL_filename_prefix(%s)' */
void bflib_sound_AIL_set_GTL_filename_prefix_0fbd90(undefined4 param_1);
/* VA: 0xfbe59 | References 'AIL_install_timbre(0x%X,%d,%d)' */
undefined4 bflib_sound_AIL_install_timbre_0fbe59(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0xfc0c2 | References 'AIL_sequence_position(0x%X,0x%X,0x%X)' */
void bflib_sound_AIL_sequence_position_0fc0c2(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfc18d | References 'AIL_branch_index(0x%X,%u)' */
void bflib_sound_AIL_branch_index_0fc18d(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc255 | References 'AIL_register_trigger_callback(0x%X,0x%X)' */
undefined4 bflib_sound_AIL_register_trigger_callback_0fc255(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc2b9 | References 'AIL_register_sequence_callback(0x%X,0x%X)' */
undefined4 bflib_sound_AIL_register_sequence_callback_0fc2b9(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc381 | References 'AIL_register_event_callback(0x%X,0x%X)' */
undefined4 bflib_sound_AIL_register_event_callback_0fc381(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc3e5 | References 'AIL_register_timbre_callback(0x%X,0x%X)' */
undefined4 bflib_sound_AIL_register_timbre_callback_0fc3e5(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc449 | References 'AIL_set_sequence_user_data(0x%X,%u,%d)' */
void bflib_sound_AIL_set_sequence_user_data_0fc449(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfc4b3 | References 'AIL_sequence_user_data(0x%X,%u)' */
undefined4 bflib_sound_AIL_sequence_user_data_0fc4b3(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc57b | References 'AIL_lock_channel(0x%X)' */
undefined4 bflib_sound_AIL_lock_channel_0fc57b(undefined4 param_1);
/* VA: 0xfc5d9 | References 'AIL_release_channel(0x%X,%d)' */
void bflib_sound_AIL_release_channel_0fc5d9(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc63d | References 'AIL_map_sequence_channel(0x%X,%d,%d)' */
void bflib_sound_AIL_map_sequence_channel_0fc63d(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfc70b | References 'AIL_send_channel_voice_message(0x%X,0x%X,0x%X,0x%X,0x%X)' */
void bflib_sound_AIL_send_channel_voice_message_0fc70b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
/* VA: 0xfc788 | References 'AIL_send_sysex_message(0x%X,0x%X)' */
void bflib_sound_AIL_send_sysex_message_0fc788(undefined4 param_1,undefined4 param_2);
/* VA: 0xfc8bd | References 'AIL_redbook_open(%ld)' */
undefined4 bflib_sound_AIL_redbook_open_0fc8bd(undefined4 param_1);
/* VA: 0xfc91b | References 'AIL_redbook_close(0x%lX)' */
void bflib_sound_AIL_redbook_close_0fc91b(undefined4 param_1);
/* VA: 0xfca35 | References 'AIL_redbook_status(0x%lX)' */
undefined4 bflib_sound_AIL_redbook_status_0fca35(undefined4 param_1);
/* VA: 0xfca93 | References 'AIL_redbook_tracks(0x%lX)' */
undefined4 bflib_sound_AIL_redbook_tracks_0fca93(undefined4 param_1);
/* VA: 0xfcaf1 | References 'AIL_redbook_track_info(0x%lX, %ld, 0x%lX, 0x%lX)' */
void bflib_sound_AIL_redbook_track_info_0fcaf1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0xfcbbf | References 'AIL_redbook_position(0x%lX)' */
undefined4 bflib_sound_AIL_redbook_position_0fcbbf(undefined4 param_1);
/* VA: 0xfcc7b | References 'AIL_redbook_play(0x%lX, %ld, %ld)' */
undefined4 bflib_sound_AIL_redbook_play_0fcc7b(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xfcce5 | References 'AIL_redbook_stop(0x%lX)' */
undefined4 bflib_sound_AIL_redbook_stop_0fcce5(undefined4 param_1);
/* VA: 0xfcd43 | References 'AIL_redbook_pause(0x%lX)' */
undefined4 bflib_sound_AIL_redbook_pause_0fcd43(undefined4 param_1);
/* VA: 0xfcda1 | References 'AIL_redbook_resume(0x%lX)' */
undefined4 bflib_sound_AIL_redbook_resume_0fcda1(undefined4 param_1);
/* VA: 0xfcdff | References 'AIL_redbook_volume(0x%lX)' */
undefined4 bflib_sound_AIL_redbook_volume_0fcdff(undefined4 param_1);
/* VA: 0xfce5d | References 'AIL_redbook_set_volume(0x%lX,%ld)' */
undefined4 bflib_sound_AIL_redbook_set_volume_0fce5d(undefined4 param_1,undefined4 param_2);
/* VA: 0xfcf16 | References 'AIL_quick_load(%s)' */
undefined4 bflib_sound_AIL_quick_load_0fcf16(undefined4 param_1);
/* VA: 0xfcf74 | References 'AIL_quick_unload(0x%X)' */
void bflib_sound_AIL_quick_unload_0fcf74(undefined4 param_1);
/* VA: 0xfd036 | References 'AIL_quick_play(0x%X,%d)' */
undefined4 bflib_sound_AIL_quick_play_0fd036(undefined4 param_1,undefined4 param_2);
/* VA: 0xfd09a | References 'AIL_quick_halt(0x%X)' */
void bflib_sound_AIL_quick_halt_0fd09a(undefined4 param_1);
/* VA: 0xfd0f8 | References 'AIL_quick_status(0x%X)' */
undefined4 bflib_sound_AIL_quick_status_0fd0f8(undefined4 param_1);
/* VA: 0xfd356 | References 'AIL_close_stream(0x%X)' */
void bflib_sound_AIL_close_stream_0fd356(undefined4 param_1);
/* VA: 0xfd418 | References 'AIL_start_stream(0x%X)' */
void bflib_sound_AIL_start_stream_0fd418(undefined4 param_1);
/* VA: 0xfd7e2 | References 'AIL_stream_status(0x%X)' */
undefined4 bflib_sound_AIL_stream_status_0fd7e2(undefined4 param_1);
/* VA: 0xfd840 | References 'AIL_set_stream_position(0x%X,%d)' */
void bflib_sound_AIL_set_stream_position_0fd840(undefined4 param_1,undefined4 param_2);
/* VA: 0xfee88 | References 'AIL_startup()' */
undefined4 bflib_sound_AIL_startup_0fee88(void);
/* VA: 0x101c78 | String 'CLOSING SOCKET %x' */
void bflib_sound_closing_socket_101c78(void);
/* VA: 0x113c53 | Module bflib/bflib_sound.cpp procedure @ 0x113c53 */
int bflib_sound_fn_113c53(byte *param_1,int param_2,undefined4 *param_3);
/* VA: 0x11419b | String 'Insufficient memory for driver descriptor' */
int * bflib_sound_insufficient_memory_driver_descriptor_11419b(undefined4 *param_1,uint param_2);
/* VA: 0x114852 | String 'BF42 - load sound bank %d' */
undefined8 bflib_sound_bf42_load_sound_bank_114852(void);
/* VA: 0x114cf2 | Module bflib/bflib_sound.cpp procedure @ 0x114cf2 */
void bflib_sound_fn_114cf2(void);
/* VA: 0x116704 | String 'Could not allocate memory for driver' */
undefined4 * bflib_sound_could_allocate_memory_driver_116704(int param_1,undefined4 *param_2);
/* VA: 0x116db9 | String 'DIG.INI' */
undefined4 bflib_sound_dig_ini_116db9(int *param_1);
/* VA: 0x116e63 | String 'Out of sample handles' */
int bflib_sound_out_sample_handles_116e63(int param_1);
/* VA: 0x1179d4 | String 'Unrecognized digital audio file type' */
int bflib_sound_unrecognized_digital_audio_file_1179d4(undefined4 param_1,byte *param_2,int param_3);
/* VA: 0x117b51 | String 'Unrecognized digital audio file type' */
longlong bflib_sound_unrecognized_digital_audio_file_117b51(int param_1,byte *param_2,int param_3);
/* VA: 0x1193e6 | String 'Could not allocate memory for driver' */
ushort * bflib_sound_could_allocate_memory_driver_1193e6(int param_1,undefined4 *param_2);
/* VA: 0x119ede | String 'Driver could not install timbre bank %d, patch %d' */
void bflib_sound_driver_could_install_timbre_119ede(void);
/* VA: 0x119f04 | String 'Invalid XMIDI sequence' */
undefined4 bflib_sound_xmidi_sequence_119f04(int param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x11b68b | String 'Insufficient memory for HWAVE descriptor' */
int * bflib_sound_insufficient_memory_hwave_descriptor_11b68b(int param_1,int param_2,int param_3,int param_4);
/* VA: 0x11c4e3 | String 'File not found' */
undefined8 bflib_sound_file_found_11c4e3(void);
/* VA: 0x11cfae | String 'Out of memory' */
int * bflib_sound_out_memory_11cfae(int param_1,byte *param_2,int param_3);

/* === Module: bflib/bflib_system_io.cpp (449 functions) === */
/* VA: 0xe5b3c | Module bflib/bflib_system_io.cpp procedure @ 0x0e5b3c */
undefined8 bflib_system_io_fn_0e5b3c(void);
/* VA: 0xe5e04 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void bflib_system_io_update_creature_control_0e5e04(void);
/* VA: 0xe5f50 | Module bflib/bflib_system_io.cpp procedure @ 0x0e5f50 */
int bflib_system_io_fn_0e5f50(void);
/* VA: 0xe5f70 | Module bflib/bflib_system_io.cpp procedure @ 0x0e5f70 */
undefined4 bflib_system_io_fn_0e5f70(void);
/* VA: 0xe612c | Module bflib/bflib_system_io.cpp procedure @ 0x0e612c */
undefined8 bflib_system_io_fn_0e612c(void);
/* VA: 0xe6348 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
bool bflib_system_io_roll_action_random_0e6348(void);
/* VA: 0xe63ac | String 'NoPs %d, CurrP %d, SlbP %d, NoPsToTest %d, NoPsToUpdate %d, ' */
void bflib_system_io_nops_currp_slbp_nopstotest_0e63ac(void);
/* VA: 0xe6584 | Reads/modifies Map[256x256] subtile data */
undefined4 bflib_system_io_process_map_subtile_0e6584(void);
/* VA: 0xe66ec | Module bflib/bflib_system_io.cpp procedure @ 0x0e66ec */
undefined8 bflib_system_io_fn_0e66ec(void);
/* VA: 0xe69fc | Module bflib/bflib_system_io.cpp procedure @ 0x0e69fc */
void bflib_system_io_fn_0e69fc(void);
/* VA: 0xe6a10 | Wait for vertical blank / screen sync */
undefined4 LbScreenWaitVbi(void);
/* VA: 0xe6a30 | Module bflib/bflib_system_io.cpp procedure @ 0x0e6a30 */
longlong bflib_system_io_fn_0e6a30(void);
/* VA: 0xe6a6c | Module bflib/bflib_system_io.cpp procedure @ 0x0e6a6c */
undefined4 bflib_system_io_fn_0e6a6c(void);
/* VA: 0xe6b14 | Module bflib/bflib_system_io.cpp procedure @ 0x0e6b14 */
undefined4 bflib_system_io_fn_0e6b14(void);
/* VA: 0xe6b20 | Draw text string using g_lb_current_font_ptr */
undefined4 LbTextDraw(void);
/* VA: 0xe6b44 | Module bflib/bflib_system_io.cpp procedure @ 0x0e6b44 */
undefined4 bflib_system_io_fn_0e6b44(void);
/* VA: 0xe6b74 | Module bflib/bflib_system_io.cpp procedure @ 0x0e6b74 */
undefined4 bflib_system_io_fn_0e6b74(void);
/* VA: 0xe6c1c | Configures font/flags and draws text on screen */
undefined8 bflib_system_io_draw_text_overlay_0e6c1c(void);
/* VA: 0xe6cc4 | Configures font/flags and draws text on screen */
undefined8 bflib_system_io_draw_text_overlay_0e6cc4(void);
/* VA: 0xe6d20 | Configures font/flags and draws text on screen */
longlong bflib_system_io_draw_text_overlay_0e6d20(void);
/* VA: 0xe6d80 | Draw formatted text in text window */
undefined4 LbTextDrawFormatted(void);
/* VA: 0xe74d4 | Configures font/flags and draws text on screen */
void bflib_system_io_draw_text_overlay_0e74d4(void);
/* VA: 0xe7701 | Module bflib/bflib_system_io.cpp procedure @ 0x0e7701 */
void bflib_system_io_fn_0e7701(void);
/* VA: 0xe7714 | Formatted string builder (sprintf) */
void dk_sprintf(int param_1);
/* VA: 0xe7750 | Initialize VESA/VGA screen mode, resolution, and palette */
undefined8 LbScreenSetup(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
/* VA: 0xe7904 | Module bflib/bflib_system_io.cpp procedure @ 0x0e7904 */
undefined8 bflib_system_io_fn_0e7904(void);
/* VA: 0xe792c | Restore previous video mode and release screen buffers */
undefined8 LbScreenReset(void);
/* VA: 0xe797c | Lock software backbuffer for direct pixel rendering */
undefined4 LbScreenLock(void);
/* VA: 0xe79ac | Module bflib/bflib_system_io.cpp procedure @ 0x0e79ac */
undefined8 bflib_system_io_fn_0e79ac(void);
/* VA: 0xe79fc | Module bflib/bflib_system_io.cpp procedure @ 0x0e79fc */
undefined8 bflib_system_io_fn_0e79fc(void);
/* VA: 0xe7aac | Module bflib/bflib_system_io.cpp procedure @ 0x0e7aac */
undefined8 bflib_system_io_fn_0e7aac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6, uint param_7,undefined1 param_8);
/* VA: 0xe7c64 | Module bflib/bflib_system_io.cpp procedure @ 0x0e7c64 */
undefined8 bflib_system_io_fn_0e7c64(byte param_1);
/* VA: 0xe8214 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8214 */
undefined8 bflib_system_io_fn_0e8214(void);
/* VA: 0xe8230 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8230 */
void bflib_system_io_fn_0e8230(void);
/* VA: 0xe8238 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8238 */
void bflib_system_io_fn_0e8238(void);
/* VA: 0xe823c | Module bflib/bflib_system_io.cpp procedure @ 0x0e823c */
undefined8 bflib_system_io_fn_0e823c(void);
/* VA: 0xe830c | Load a table of DATA/*.DAT and *.TAB asset files */
undefined8 LbDataLoadAll(void);
/* VA: 0xe83c8 | Free a table of loaded DATA/*.DAT and *.TAB asset files */
undefined8 LbDataFreeAll(void);
/* VA: 0xe83f0 | Free a single loaded asset buffer */
undefined8 LbDataFree(void);
/* VA: 0xe8420 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8420 */
undefined8 bflib_system_io_fn_0e8420(int param_1);
/* VA: 0xe846c | Upload 768-byte 256-color RGB palette to VGA DAC */
undefined8 LbPaletteSet(undefined1 *param_1);
/* VA: 0xe8560 | Poll keyboard input state */
undefined4 LbKeyboardRead(void);
/* VA: 0xe8568 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8568 */
void bflib_system_io_fn_0e8568(void);
/* VA: 0xe8830 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8830 */
undefined8 bflib_system_io_fn_0e8830(void);
/* VA: 0xe8858 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8858 */
undefined8 bflib_system_io_fn_0e8858(void);
/* VA: 0xe8876 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8876 */
longlong bflib_system_io_fn_0e8876(void);
/* VA: 0xe88b2 | Module bflib/bflib_system_io.cpp procedure @ 0x0e88b2 */
void bflib_system_io_fn_0e88b2(void);
/* VA: 0xe8960 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8960 */
undefined8 bflib_system_io_fn_0e8960(void);
/* VA: 0xe8974 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8974 */
void bflib_system_io_fn_0e8974(void);
/* VA: 0xe8980 | Open file by path and mode */
undefined4 LbFileOpen(void);
/* VA: 0xe8a1c | Module bflib/bflib_system_io.cpp procedure @ 0x0e8a1c */
undefined4 bflib_system_io_fn_0e8a1c(void);
/* VA: 0xe8a34 | Write bytes to open file handle */
undefined4 LbFileWrite(void);
/* VA: 0xe8a80 | Read bytes from open file handle */
void LbFileRead(void);
/* VA: 0xe8a8c | Module bflib/bflib_system_io.cpp procedure @ 0x0e8a8c */
void bflib_system_io_fn_0e8a8c(void);
/* VA: 0xe8a98 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8a98 */
undefined8 bflib_system_io_fn_0e8a98(void);
/* VA: 0xe8ac4 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8ac4 */
undefined4 bflib_system_io_fn_0e8ac4(void);
/* VA: 0xe8af0 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8af0 */
undefined8 bflib_system_io_fn_0e8af0(void);
/* VA: 0xe8b30 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8b30 */
undefined4 bflib_system_io_fn_0e8b30(void);
/* VA: 0xe8b48 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8b48 */
void bflib_system_io_fn_0e8b48(void);
/* VA: 0xe8c83 | Close open file handle */
undefined4 * LbFileClose(void);
/* VA: 0xe8ca8 | Fast memory block copy / clear helper */
char * LbMemoryCopy(void);
/* VA: 0xe8cc8 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8cc8 */
longlong bflib_system_io_fn_0e8cc8(void);
/* VA: 0xe8d4a | Module bflib/bflib_system_io.cpp procedure @ 0x0e8d4a */
undefined8 bflib_system_io_fn_0e8d4a(void);
/* VA: 0xe8d50 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8d50 */
longdouble bflib_system_io_fn_0e8d50(void);
/* VA: 0xe8d6e | Module bflib/bflib_system_io.cpp procedure @ 0x0e8d6e */
longdouble bflib_system_io_fn_0e8d6e(void);
/* VA: 0xe8d73 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8d73 */
void bflib_system_io_fn_0e8d73(void);
/* VA: 0xe8d80 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8d80 */
uint bflib_system_io_fn_0e8d80(void);
/* VA: 0xe8f24 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8f24 */
undefined4 bflib_system_io_fn_0e8f24(void);
/* VA: 0xe8f34 | Module bflib/bflib_system_io.cpp procedure @ 0x0e8f34 */
undefined1 bflib_system_io_fn_0e8f34(void);
/* VA: 0xe9460 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9460 */
void bflib_system_io_fn_0e9460(void);
/* VA: 0xe9484 | Allocate and load entire file into memory */
void LbFileLoadAt(void);
/* VA: 0xe9498 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9498 */
void bflib_system_io_fn_0e9498(void);
/* VA: 0xe94b0 | Module bflib/bflib_system_io.cpp procedure @ 0x0e94b0 */
undefined8 bflib_system_io_fn_0e94b0(void);
/* VA: 0xe94d0 | Module bflib/bflib_system_io.cpp procedure @ 0x0e94d0 */
undefined8 bflib_system_io_fn_0e94d0(void);
/* VA: 0xe94f8 | Module bflib/bflib_system_io.cpp procedure @ 0x0e94f8 */
undefined8 bflib_system_io_fn_0e94f8(void);
/* VA: 0xe9554 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9554 */
void bflib_system_io_fn_0e9554(void);
/* VA: 0xe9590 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9590 */
void bflib_system_io_fn_0e9590(void);
/* VA: 0xe9594 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9594 */
undefined4 bflib_system_io_fn_0e9594(void);
/* VA: 0xe9644 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9644 */
void bflib_system_io_fn_0e9644(void);
/* VA: 0xe9670 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9670 */
undefined4 bflib_system_io_fn_0e9670(void);
/* VA: 0xe970c | Module bflib/bflib_system_io.cpp procedure @ 0x0e970c */
undefined8 bflib_system_io_fn_0e970c(void);
/* VA: 0xe9760 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9760 */
void bflib_system_io_fn_0e9760(void);
/* VA: 0xe97a0 | Module bflib/bflib_system_io.cpp procedure @ 0x0e97a0 */
undefined8 bflib_system_io_fn_0e97a0(void);
/* VA: 0xe984c | Module bflib/bflib_system_io.cpp procedure @ 0x0e984c */
int bflib_system_io_fn_0e984c(void);
/* VA: 0xe98c8 | Module bflib/bflib_system_io.cpp procedure @ 0x0e98c8 */
int bflib_system_io_fn_0e98c8(void);
/* VA: 0xe98f0 | Module bflib/bflib_system_io.cpp procedure @ 0x0e98f0 */
int bflib_system_io_fn_0e98f0(uint param_1);
/* VA: 0xe9b44 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9b44 */
undefined4 bflib_system_io_fn_0e9b44(uint param_1);
/* VA: 0xe9d2c | Module bflib/bflib_system_io.cpp procedure @ 0x0e9d2c */
bool bflib_system_io_fn_0e9d2c(void);
/* VA: 0xe9d7a | Module bflib/bflib_system_io.cpp procedure @ 0x0e9d7a */
int bflib_system_io_fn_0e9d7a(void);
/* VA: 0xe9dd0 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9dd0 */
void bflib_system_io_fn_0e9dd0(void);
/* VA: 0xe9dd6 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9dd6 */
char * bflib_system_io_fn_0e9dd6(void);
/* VA: 0xe9e09 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9e09 */
undefined8 bflib_system_io_fn_0e9e09(void);
/* VA: 0xe9eda | Module bflib/bflib_system_io.cpp procedure @ 0x0e9eda */
undefined4 bflib_system_io_fn_0e9eda(int param_1);
/* VA: 0xe9f9e | Module bflib/bflib_system_io.cpp procedure @ 0x0e9f9e */
undefined4 bflib_system_io_fn_0e9f9e(void);
/* VA: 0xe9fd7 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9fd7 */
void bflib_system_io_fn_0e9fd7(void);
/* VA: 0xe9fe1 | Module bflib/bflib_system_io.cpp procedure @ 0x0e9fe1 */
longlong bflib_system_io_fn_0e9fe1(void);
/* VA: 0xea049 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea049 */
undefined4 bflib_system_io_fn_0ea049(void);
/* VA: 0xea08b | Module bflib/bflib_system_io.cpp procedure @ 0x0ea08b */
void bflib_system_io_fn_0ea08b(void);
/* VA: 0xea0ac | Module bflib/bflib_system_io.cpp procedure @ 0x0ea0ac */
undefined8 bflib_system_io_fn_0ea0ac(void);
/* VA: 0xea0d9 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea0d9 */
undefined4 bflib_system_io_fn_0ea0d9(void);
/* VA: 0xea0ee | Module bflib/bflib_system_io.cpp procedure @ 0x0ea0ee */
int bflib_system_io_fn_0ea0ee(void);
/* VA: 0xea0fa | Module bflib/bflib_system_io.cpp procedure @ 0x0ea0fa */
void bflib_system_io_fn_0ea0fa(void);
/* VA: 0xea15f | Module bflib/bflib_system_io.cpp procedure @ 0x0ea15f */
uint bflib_system_io_fn_0ea15f(void);
/* VA: 0xea1ef | String copy helper */
longlong dk_strcpy(void);
/* VA: 0xea1f4 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea1f4 */
int bflib_system_io_fn_0ea1f4(void);
/* VA: 0xea21d | ASCII string to integer conversion */
undefined8 dk_atoi(void);
/* VA: 0xea290 | Case-insensitive string comparison */
uint dk_stricmp(void);
/* VA: 0xea370 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea370 */
undefined4 bflib_system_io_fn_0ea370(void);
/* VA: 0xea3d4 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea3d4 */
undefined8 bflib_system_io_fn_0ea3d4(void);
/* VA: 0xea430 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea430 */
char bflib_system_io_fn_0ea430(undefined1 param_1);
/* VA: 0xea65c | Module bflib/bflib_system_io.cpp procedure @ 0x0ea65c */
void bflib_system_io_fn_0ea65c(byte param_1);
/* VA: 0xea934 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea934 */
undefined4 bflib_system_io_fn_0ea934(void);
/* VA: 0xea9f9 | Module bflib/bflib_system_io.cpp procedure @ 0x0ea9f9 */
void bflib_system_io_fn_0ea9f9(void);
/* VA: 0xead2f | Module bflib/bflib_system_io.cpp procedure @ 0x0ead2f */
void bflib_system_io_fn_0ead2f(void);
/* VA: 0xeae4c | Module bflib/bflib_system_io.cpp procedure @ 0x0eae4c */
void bflib_system_io_fn_0eae4c(void);
/* VA: 0xeae8a | Module bflib/bflib_system_io.cpp procedure @ 0x0eae8a */
void bflib_system_io_fn_0eae8a(void);
/* VA: 0xeaf13 | Module bflib/bflib_system_io.cpp procedure @ 0x0eaf13 */
void bflib_system_io_fn_0eaf13(void);
/* VA: 0xeafb8 | Module bflib/bflib_system_io.cpp procedure @ 0x0eafb8 */
longlong bflib_system_io_fn_0eafb8(void);
/* VA: 0xeb021 | Module bflib/bflib_system_io.cpp procedure @ 0x0eb021 */
void bflib_system_io_fn_0eb021(void);
/* VA: 0xeb0cc | String 'BF101 - cannot open file %s' */
void bflib_system_io_bf101_open_file_0eb0cc(void);
/* VA: 0xeb147 | Module bflib/bflib_system_io.cpp procedure @ 0x0eb147 */
void bflib_system_io_fn_0eb147(void);
/* VA: 0xeb1dd | String 'Error alloc lock [0]' */
longlong bflib_system_io_alloc_lock_0eb1dd(void);
/* VA: 0xeb28b | Module bflib/bflib_system_io.cpp procedure @ 0x0eb28b */
void bflib_system_io_fn_0eb28b(void);
/* VA: 0xeb30c | String 'Pan Position = %d, pan target = %d, pan direction = %d' */
void bflib_system_io_pan_position_pan_target_0eb30c(void);
/* VA: 0xeb43b | Module bflib/bflib_system_io.cpp procedure @ 0x0eb43b */
int bflib_system_io_fn_0eb43b(int param_1);
/* VA: 0xeb531 | Module bflib/bflib_system_io.cpp procedure @ 0x0eb531 */
undefined * bflib_system_io_fn_0eb531(void);
/* VA: 0xeb6b6 | String 'time elapsed between reads = %d' */
undefined8 bflib_system_io_time_elapsed_between_reads_0eb6b6(void);
/* VA: 0xeb7b0 | Module bflib/bflib_system_io.cpp procedure @ 0x0eb7b0 */
undefined8 bflib_system_io_fn_0eb7b0(void);
/* VA: 0xeb818 | Read millisecond system timer clock */
undefined8 LbTimerClock(void);
/* VA: 0xeb840 | Module bflib/bflib_system_io.cpp procedure @ 0x0eb840 */
undefined8 bflib_system_io_fn_0eb840(void);
/* VA: 0xeb974 | Module bflib/bflib_system_io.cpp procedure @ 0x0eb974 */
undefined8 bflib_system_io_fn_0eb974(void);
/* VA: 0xeba38 | Module bflib/bflib_system_io.cpp procedure @ 0x0eba38 */
undefined4 bflib_system_io_fn_0eba38(void);
/* VA: 0xebab0 | Module bflib/bflib_system_io.cpp procedure @ 0x0ebab0 */
undefined8 bflib_system_io_fn_0ebab0(void);
/* VA: 0xebc10 | Module bflib/bflib_system_io.cpp procedure @ 0x0ebc10 */
undefined4 bflib_system_io_fn_0ebc10(void);
/* VA: 0xebc34 | Module bflib/bflib_system_io.cpp procedure @ 0x0ebc34 */
undefined4 bflib_system_io_fn_0ebc34(void);
/* VA: 0xebc80 | Module bflib/bflib_system_io.cpp procedure @ 0x0ebc80 */
undefined4 bflib_system_io_fn_0ebc80(void);
/* VA: 0xebc98 | Module bflib/bflib_system_io.cpp procedure @ 0x0ebc98 */
undefined8 bflib_system_io_fn_0ebc98(void);
/* VA: 0xebe68 | Module bflib/bflib_system_io.cpp procedure @ 0x0ebe68 */
undefined8 bflib_system_io_fn_0ebe68(void);
/* VA: 0xebeec | Module bflib/bflib_system_io.cpp procedure @ 0x0ebeec */
undefined8 bflib_system_io_fn_0ebeec(void);
/* VA: 0xebf50 | Module bflib/bflib_system_io.cpp procedure @ 0x0ebf50 */
undefined4 bflib_system_io_fn_0ebf50(void);
/* VA: 0xebf9c | Module bflib/bflib_system_io.cpp procedure @ 0x0ebf9c */
undefined4 bflib_system_io_fn_0ebf9c(void);
/* VA: 0xec028 | Module bflib/bflib_system_io.cpp procedure @ 0x0ec028 */
undefined8 bflib_system_io_fn_0ec028(void);
/* VA: 0xec068 | Module bflib/bflib_system_io.cpp procedure @ 0x0ec068 */
undefined8 bflib_system_io_fn_0ec068(void);
/* VA: 0xec3c8 | Module bflib/bflib_system_io.cpp procedure @ 0x0ec3c8 */
undefined4 bflib_system_io_fn_0ec3c8(void);
/* VA: 0xec420 | Module bflib/bflib_system_io.cpp procedure @ 0x0ec420 */
longlong bflib_system_io_fn_0ec420(void);
/* VA: 0xec534 | Module bflib/bflib_system_io.cpp procedure @ 0x0ec534 */
undefined8 bflib_system_io_fn_0ec534(void);
/* VA: 0xec780 | Module bflib/bflib_system_io.cpp procedure @ 0x0ec780 */
undefined8 bflib_system_io_fn_0ec780(void);
/* VA: 0xec8e4 | String 'Redbook countdown ended' */
void bflib_system_io_redbook_countdown_ended_0ec8e4(void);
/* VA: 0xeca60 | Module bflib/bflib_system_io.cpp procedure @ 0x0eca60 */
void bflib_system_io_fn_0eca60(void);
/* VA: 0xecf0b | Module bflib/bflib_system_io.cpp procedure @ 0x0ecf0b */
undefined8 bflib_system_io_fn_0ecf0b(void);
/* VA: 0xecf4c | Module bflib/bflib_system_io.cpp procedure @ 0x0ecf4c */
undefined8 bflib_system_io_fn_0ecf4c(void);
/* VA: 0xecf70 | String 'BF110 - set redbook volume to %d' */
void bflib_system_io_bf110_set_redbook_volume_0ecf70(void);
/* VA: 0xecfce | Module bflib/bflib_system_io.cpp procedure @ 0x0ecfce */
undefined8 bflib_system_io_fn_0ecfce(void);
/* VA: 0xecff2 | Module bflib/bflib_system_io.cpp procedure @ 0x0ecff2 */
longlong bflib_system_io_fn_0ecff2(void);
/* VA: 0xed020 | Module bflib/bflib_system_io.cpp procedure @ 0x0ed020 */
void bflib_system_io_fn_0ed020(void);
/* VA: 0xed028 | Module bflib/bflib_system_io.cpp procedure @ 0x0ed028 */
undefined8 bflib_system_io_fn_0ed028(void);
/* VA: 0xed034 | Module bflib/bflib_system_io.cpp procedure @ 0x0ed034 */
void bflib_system_io_fn_0ed034(void);
/* VA: 0xed0ac | String 'NEW PLAYERS ARE ALLOWED TO JOIN' */
undefined8 bflib_system_io_new_players_are_allowed_0ed0ac(void);
/* VA: 0xed1b0 | String 'The requested serviceType %d is out of range' */
void bflib_system_io_requested_servicetype_out_range_0ed1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 *param_9);
/* VA: 0xed354 | String 'The requested serviceType %d is out of range' */
void bflib_system_io_requested_servicetype_out_range_0ed354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9);
/* VA: 0xef460 | Module bflib/bflib_system_io.cpp procedure @ 0x0ef460 */
void bflib_system_io_fn_0ef460(undefined4 param_1,char *param_2);
/* VA: 0xef514 | Module bflib/bflib_system_io.cpp procedure @ 0x0ef514 */
void bflib_system_io_fn_0ef514(undefined4 param_1);
/* VA: 0xef5b8 | Module bflib/bflib_system_io.cpp procedure @ 0x0ef5b8 */
void bflib_system_io_fn_0ef5b8(void);
/* VA: 0xef5c4 | Log prefix 'Warning: UnidirectionalMsgCallback invalid length %d vs %d' */
undefined * bflib_system_io_Warning_0ef5c4(undefined4 param_1,uint param_2);
/* VA: 0xef600 | Module bflib/bflib_system_io.cpp procedure @ 0x0ef600 */
undefined8 bflib_system_io_fn_0ef600(void);
/* VA: 0xef754 | Module bflib/bflib_system_io.cpp procedure @ 0x0ef754 */
undefined8 bflib_system_io_fn_0ef754(void);
/* VA: 0xefcf0 | Module bflib/bflib_system_io.cpp procedure @ 0x0efcf0 */
undefined8 bflib_system_io_fn_0efcf0(void);
/* VA: 0xefd90 | Write diagnostic entry to Bullfrog network log */
void LbNetLog(void);
/* VA: 0xefda0 | Module bflib/bflib_system_io.cpp procedure @ 0x0efda0 */
void bflib_system_io_fn_0efda0(void);
/* VA: 0xefdb4 | Module bflib/bflib_system_io.cpp procedure @ 0x0efdb4 */
int bflib_system_io_fn_0efdb4(void);
/* VA: 0xefde0 | Module bflib/bflib_system_io.cpp procedure @ 0x0efde0 */
void bflib_system_io_fn_0efde0(void);
/* VA: 0xefe18 | Module bflib/bflib_system_io.cpp procedure @ 0x0efe18 */
undefined8 bflib_system_io_fn_0efe18(void);
/* VA: 0xefe94 | Module bflib/bflib_system_io.cpp procedure @ 0x0efe94 */
undefined4 bflib_system_io_fn_0efe94(void);
/* VA: 0xf0064 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0064 */
undefined4 bflib_system_io_fn_0f0064(void);
/* VA: 0xf01cc | Module bflib/bflib_system_io.cpp procedure @ 0x0f01cc */
undefined4 bflib_system_io_fn_0f01cc(int param_1);
/* VA: 0xf01e8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f01e8 */
void bflib_system_io_fn_0f01e8(void);
/* VA: 0xf01f8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f01f8 */
void bflib_system_io_fn_0f01f8(void);
/* VA: 0xf0580 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0580 */
undefined4 bflib_system_io_fn_0f0580(void);
/* VA: 0xf05d8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f05d8 */
undefined4 bflib_system_io_fn_0f05d8(void);
/* VA: 0xf05f0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f05f0 */
undefined8 bflib_system_io_fn_0f05f0(void);
/* VA: 0xf0624 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0624 */
undefined4 bflib_system_io_fn_0f0624(int param_1);
/* VA: 0xf06f4 | Module bflib/bflib_system_io.cpp procedure @ 0x0f06f4 */
undefined * bflib_system_io_fn_0f06f4(void);
/* VA: 0xf06fa | Module bflib/bflib_system_io.cpp procedure @ 0x0f06fa */
undefined8 bflib_system_io_fn_0f06fa(void);
/* VA: 0xf071e | Module bflib/bflib_system_io.cpp procedure @ 0x0f071e */
void bflib_system_io_fn_0f071e(void);
/* VA: 0xf0730 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0730 */
void bflib_system_io_fn_0f0730(void);
/* VA: 0xf0790 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0790 */
void bflib_system_io_fn_0f0790(void);
/* VA: 0xf0870 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0870 */
undefined4 bflib_system_io_fn_0f0870(byte param_1);
/* VA: 0xf0964 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0964 */
undefined8 bflib_system_io_fn_0f0964(void);
/* VA: 0xf09d1 | Module bflib/bflib_system_io.cpp procedure @ 0x0f09d1 */
void bflib_system_io_fn_0f09d1(void);
/* VA: 0xf09e5 | Module bflib/bflib_system_io.cpp procedure @ 0x0f09e5 */
int bflib_system_io_fn_0f09e5(void);
/* VA: 0xf0a2c | Module bflib/bflib_system_io.cpp procedure @ 0x0f0a2c */
void bflib_system_io_fn_0f0a2c(void);
/* VA: 0xf0a54 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0a54 */
void bflib_system_io_fn_0f0a54(void);
/* VA: 0xf0ab2 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0ab2 */
void bflib_system_io_fn_0f0ab2(void);
/* VA: 0xf0ab8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0ab8 */
void bflib_system_io_fn_0f0ab8(void);
/* VA: 0xf0b60 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0b60 */
void bflib_system_io_fn_0f0b60(void);
/* VA: 0xf0bb0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0bb0 */
undefined8 bflib_system_io_fn_0f0bb0(void);
/* VA: 0xf0cc0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0cc0 */
undefined8 bflib_system_io_fn_0f0cc0(void);
/* VA: 0xf0d1c | Module bflib/bflib_system_io.cpp procedure @ 0x0f0d1c */
undefined8 bflib_system_io_fn_0f0d1c(void);
/* VA: 0xf0e64 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0e64 */
longlong bflib_system_io_fn_0f0e64(void);
/* VA: 0xf0ec0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f0ec0 */
int bflib_system_io_fn_0f0ec0(void);
/* VA: 0xf0f8c | Module bflib/bflib_system_io.cpp procedure @ 0x0f0f8c */
undefined8 bflib_system_io_fn_0f0f8c(void);
/* VA: 0xf1018 | Module bflib/bflib_system_io.cpp procedure @ 0x0f1018 */
longlong bflib_system_io_fn_0f1018(void);
/* VA: 0xf1052 | Module bflib/bflib_system_io.cpp procedure @ 0x0f1052 */
int bflib_system_io_fn_0f1052(void);
/* VA: 0xf1082 | Module bflib/bflib_system_io.cpp procedure @ 0x0f1082 */
undefined8 bflib_system_io_fn_0f1082(void);
/* VA: 0xf10b9 | Module bflib/bflib_system_io.cpp procedure @ 0x0f10b9 */
undefined8 bflib_system_io_fn_0f10b9(void);
/* VA: 0xf10fc | Module bflib/bflib_system_io.cpp procedure @ 0x0f10fc */
undefined8 bflib_system_io_fn_0f10fc(void);
/* VA: 0xf113f | Module bflib/bflib_system_io.cpp procedure @ 0x0f113f */
int bflib_system_io_fn_0f113f(void);
/* VA: 0xf11e4 | Module bflib/bflib_system_io.cpp procedure @ 0x0f11e4 */
undefined8 bflib_system_io_fn_0f11e4(void);
/* VA: 0xf129d | Module bflib/bflib_system_io.cpp procedure @ 0x0f129d */
int bflib_system_io_fn_0f129d(void);
/* VA: 0xf1342 | Module bflib/bflib_system_io.cpp procedure @ 0x0f1342 */
int bflib_system_io_fn_0f1342(void);
/* VA: 0xf13e7 | Module bflib/bflib_system_io.cpp procedure @ 0x0f13e7 */
int bflib_system_io_fn_0f13e7(void);
/* VA: 0xf17d0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f17d0 */
void bflib_system_io_fn_0f17d0(int param_1,uint param_2);
/* VA: 0xf1874 | Module bflib/bflib_system_io.cpp procedure @ 0x0f1874 */
void bflib_system_io_fn_0f1874(void);
/* VA: 0xf1abb | Module bflib/bflib_system_io.cpp procedure @ 0x0f1abb */
undefined8 bflib_system_io_fn_0f1abb(void);
/* VA: 0xf239b | Module bflib/bflib_system_io.cpp procedure @ 0x0f239b */
void bflib_system_io_fn_0f239b(void);
/* VA: 0xf23de | Module bflib/bflib_system_io.cpp procedure @ 0x0f23de */
int bflib_system_io_fn_0f23de(void);
/* VA: 0xf25b4 | Module bflib/bflib_system_io.cpp procedure @ 0x0f25b4 */
undefined8 bflib_system_io_fn_0f25b4(void);
/* VA: 0xf27b7 | Module bflib/bflib_system_io.cpp procedure @ 0x0f27b7 */
undefined1 bflib_system_io_fn_0f27b7(void);
/* VA: 0xf27d0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f27d0 */
undefined4 bflib_system_io_fn_0f27d0(void);
/* VA: 0xf27dc | Module bflib/bflib_system_io.cpp procedure @ 0x0f27dc */
undefined4 bflib_system_io_fn_0f27dc(void);
/* VA: 0xf27e8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f27e8 */
undefined4 * bflib_system_io_fn_0f27e8(void);
/* VA: 0xf27ee | Module bflib/bflib_system_io.cpp procedure @ 0x0f27ee */
undefined4 bflib_system_io_fn_0f27ee(void);
/* VA: 0xf2800 | Module bflib/bflib_system_io.cpp procedure @ 0x0f2800 */
undefined4 bflib_system_io_fn_0f2800(void);
/* VA: 0xf323f | Module bflib/bflib_system_io.cpp procedure @ 0x0f323f */
void bflib_system_io_fn_0f323f(void);
/* VA: 0xf3264 | Module bflib/bflib_system_io.cpp procedure @ 0x0f3264 */
void bflib_system_io_fn_0f3264(void);
/* VA: 0xf32ae | Module bflib/bflib_system_io.cpp procedure @ 0x0f32ae */
void bflib_system_io_fn_0f32ae(void);
/* VA: 0xf3300 | Module bflib/bflib_system_io.cpp procedure @ 0x0f3300 */
undefined4 bflib_system_io_fn_0f3300(void);
/* VA: 0xf43c7 | Module bflib/bflib_system_io.cpp procedure @ 0x0f43c7 */
void bflib_system_io_fn_0f43c7(void);
/* VA: 0xf43d5 | Module bflib/bflib_system_io.cpp procedure @ 0x0f43d5 */
undefined8 bflib_system_io_fn_0f43d5(void);
/* VA: 0xf43da | Module bflib/bflib_system_io.cpp procedure @ 0x0f43da */
undefined8 bflib_system_io_fn_0f43da(void);
/* VA: 0xf4409 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4409 */
void bflib_system_io_fn_0f4409(void);
/* VA: 0xf442b | Module bflib/bflib_system_io.cpp procedure @ 0x0f442b */
char * bflib_system_io_fn_0f442b(void);
/* VA: 0xf4448 | DOS/4GW Watcom C/C++ entry point */
undefined4 _watcom_entry(undefined2 param_1);
/* VA: 0xf44bc | Module bflib/bflib_system_io.cpp procedure @ 0x0f44bc */
undefined4 bflib_system_io_fn_0f44bc(undefined2 param_1);
/* VA: 0xf44c0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f44c0 */
undefined4 bflib_system_io_fn_0f44c0(undefined2 param_1);
/* VA: 0xf46d9 | Module bflib/bflib_system_io.cpp procedure @ 0x0f46d9 */
undefined4 bflib_system_io_fn_0f46d9(void);
/* VA: 0xf4714 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4714 */
void bflib_system_io_fn_0f4714(void);
/* VA: 0xf471f | Module bflib/bflib_system_io.cpp procedure @ 0x0f471f */
undefined8 bflib_system_io_fn_0f471f(void);
/* VA: 0xf4720 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4720 */
undefined8 bflib_system_io_fn_0f4720(undefined4 param_1,undefined4 param_2);
/* VA: 0xf475c | Module bflib/bflib_system_io.cpp procedure @ 0x0f475c */
undefined4 bflib_system_io_fn_0f475c(double param_1);
/* VA: 0xf4777 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4777 */
int bflib_system_io_fn_0f4777(void);
/* VA: 0xf488c | Module bflib/bflib_system_io.cpp procedure @ 0x0f488c */
void bflib_system_io_fn_0f488c(void);
/* VA: 0xf48aa | Module bflib/bflib_system_io.cpp procedure @ 0x0f48aa */
void bflib_system_io_fn_0f48aa(void);
/* VA: 0xf48c0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f48c0 */
undefined4 bflib_system_io_fn_0f48c0(void);
/* VA: 0xf4908 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4908 */
undefined8 bflib_system_io_fn_0f4908(void);
/* VA: 0xf4960 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4960 */
undefined4 bflib_system_io_fn_0f4960(void);
/* VA: 0xf49a8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f49a8 */
void bflib_system_io_fn_0f49a8(void);
/* VA: 0xf4a30 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4a30 */
undefined8 bflib_system_io_fn_0f4a30(void);
/* VA: 0xf4ae0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4ae0 */
undefined8 bflib_system_io_fn_0f4ae0(void);
/* VA: 0xf4c6c | Module bflib/bflib_system_io.cpp procedure @ 0x0f4c6c */
void bflib_system_io_fn_0f4c6c(void);
/* VA: 0xf4c89 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4c89 */
void bflib_system_io_fn_0f4c89(void);
/* VA: 0xf4c8a | Module bflib/bflib_system_io.cpp procedure @ 0x0f4c8a */
void bflib_system_io_fn_0f4c8a(void);
/* VA: 0xf4ca2 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4ca2 */
undefined4 bflib_system_io_fn_0f4ca2(void);
/* VA: 0xf4cb8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4cb8 */
undefined8 bflib_system_io_fn_0f4cb8(void);
/* VA: 0xf4d9b | Module bflib/bflib_system_io.cpp procedure @ 0x0f4d9b */
void bflib_system_io_fn_0f4d9b(void);
/* VA: 0xf4e20 | Module bflib/bflib_system_io.cpp procedure @ 0x0f4e20 */
undefined4 bflib_system_io_fn_0f4e20(void);
/* VA: 0xf4ed4 | String 'PLAYSADD    id-%08d    num-%03d    vol-%03d    pan-%03d    p' */
int * bflib_system_io_playsadd_id_num_vol_0f4ed4(ushort param_1,char param_2,undefined4 param_3,int param_4,int param_5);
/* VA: 0xf5168 | Module bflib/bflib_system_io.cpp procedure @ 0x0f5168 */
void bflib_system_io_fn_0f5168(void);
/* VA: 0xf5228 | Module bflib/bflib_system_io.cpp procedure @ 0x0f5228 */
void bflib_system_io_fn_0f5228(void);
/* VA: 0xf532b | Module bflib/bflib_system_io.cpp procedure @ 0x0f532b */
void bflib_system_io_fn_0f532b(void);
/* VA: 0xf5375 | Module bflib/bflib_system_io.cpp procedure @ 0x0f5375 */
undefined4 bflib_system_io_fn_0f5375(void);
/* VA: 0xf5390 | Module bflib/bflib_system_io.cpp procedure @ 0x0f5390 */
undefined8 bflib_system_io_fn_0f5390(void);
/* VA: 0xf53c5 | Module bflib/bflib_system_io.cpp procedure @ 0x0f53c5 */
undefined8 bflib_system_io_fn_0f53c5(void);
/* VA: 0xf5460 | Module bflib/bflib_system_io.cpp procedure @ 0x0f5460 */
undefined4 bflib_system_io_fn_0f5460(void);
/* VA: 0xf694b | Module bflib/bflib_system_io.cpp procedure @ 0x0f694b */
int bflib_system_io_fn_0f694b(void);
/* VA: 0xf69c6 | Module bflib/bflib_system_io.cpp procedure @ 0x0f69c6 */
int bflib_system_io_fn_0f69c6(void);
/* VA: 0xf69e0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f69e0 */
void bflib_system_io_fn_0f69e0(void);
/* VA: 0xf6a17 | Module bflib/bflib_system_io.cpp procedure @ 0x0f6a17 */
void bflib_system_io_fn_0f6a17(void);
/* VA: 0xf6a84 | Module bflib/bflib_system_io.cpp procedure @ 0x0f6a84 */
undefined8 bflib_system_io_fn_0f6a84(byte param_1);
/* VA: 0xf6c65 | Module bflib/bflib_system_io.cpp procedure @ 0x0f6c65 */
undefined4 bflib_system_io_fn_0f6c65(void);
/* VA: 0xf6f3f | Module bflib/bflib_system_io.cpp procedure @ 0x0f6f3f */
byte * bflib_system_io_fn_0f6f3f(void);
/* VA: 0xf707d | Module bflib/bflib_system_io.cpp procedure @ 0x0f707d */
char * bflib_system_io_fn_0f707d(void);
/* VA: 0xf70dc | Module bflib/bflib_system_io.cpp procedure @ 0x0f70dc */
void bflib_system_io_fn_0f70dc(void);
/* VA: 0xf7100 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7100 */
void bflib_system_io_fn_0f7100(void);
/* VA: 0xf7123 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7123 */
void bflib_system_io_fn_0f7123(void);
/* VA: 0xf7181 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7181 */
void bflib_system_io_fn_0f7181(void);
/* VA: 0xf7276 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7276 */
void bflib_system_io_fn_0f7276(void);
/* VA: 0xf727d | Module bflib/bflib_system_io.cpp procedure @ 0x0f727d */
ulonglong bflib_system_io_fn_0f727d(void);
/* VA: 0xf7766 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7766 */
void bflib_system_io_fn_0f7766(void);
/* VA: 0xf7780 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7780 */
undefined4 bflib_system_io_fn_0f7780(void);
/* VA: 0xf7786 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7786 */
void bflib_system_io_fn_0f7786(void);
/* VA: 0xf77b0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f77b0 */
void bflib_system_io_fn_0f77b0(void);
/* VA: 0xf77d0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f77d0 */
void bflib_system_io_fn_0f77d0(void);
/* VA: 0xf77dc | Module bflib/bflib_system_io.cpp procedure @ 0x0f77dc */
undefined8 bflib_system_io_fn_0f77dc(void);
/* VA: 0xf7894 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7894 */
undefined8 bflib_system_io_fn_0f7894(void);
/* VA: 0xf78b1 | Module bflib/bflib_system_io.cpp procedure @ 0x0f78b1 */
void bflib_system_io_fn_0f78b1(void);
/* VA: 0xf78b2 | Module bflib/bflib_system_io.cpp procedure @ 0x0f78b2 */
void bflib_system_io_fn_0f78b2(void);
/* VA: 0xf78ed | Module bflib/bflib_system_io.cpp procedure @ 0x0f78ed */
void bflib_system_io_fn_0f78ed(void);
/* VA: 0xf78fe | Module bflib/bflib_system_io.cpp procedure @ 0x0f78fe */
void bflib_system_io_fn_0f78fe(void);
/* VA: 0xf790b | Module bflib/bflib_system_io.cpp procedure @ 0x0f790b */
int bflib_system_io_fn_0f790b(void);
/* VA: 0xf79b7 | Module bflib/bflib_system_io.cpp procedure @ 0x0f79b7 */
longlong bflib_system_io_fn_0f79b7(void);
/* VA: 0xf79bc | Module bflib/bflib_system_io.cpp procedure @ 0x0f79bc */
void bflib_system_io_fn_0f79bc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xf79e0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f79e0 */
undefined8 bflib_system_io_fn_0f79e0(char *param_1,uint param_2,uint param_3);
/* VA: 0xf7bc9 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7bc9 */
undefined8 bflib_system_io_fn_0f7bc9(void);
/* VA: 0xf7c2e | Module bflib/bflib_system_io.cpp procedure @ 0x0f7c2e */
undefined4 bflib_system_io_fn_0f7c2e(void);
/* VA: 0xf7c71 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7c71 */
uint bflib_system_io_fn_0f7c71(void);
/* VA: 0xf7d6c | Module bflib/bflib_system_io.cpp procedure @ 0x0f7d6c */
uint bflib_system_io_fn_0f7d6c(void);
/* VA: 0xf7f41 | Module bflib/bflib_system_io.cpp procedure @ 0x0f7f41 */
undefined8 bflib_system_io_fn_0f7f41(void);
/* VA: 0xf7f7e | Module bflib/bflib_system_io.cpp procedure @ 0x0f7f7e */
void bflib_system_io_fn_0f7f7e(void);
/* VA: 0xf7f9b | Module bflib/bflib_system_io.cpp procedure @ 0x0f7f9b */
void bflib_system_io_fn_0f7f9b(void);
/* VA: 0xf7fba | Module bflib/bflib_system_io.cpp procedure @ 0x0f7fba */
void bflib_system_io_fn_0f7fba(void);
/* VA: 0xf7fdd | Module bflib/bflib_system_io.cpp procedure @ 0x0f7fdd */
void bflib_system_io_fn_0f7fdd(void);
/* VA: 0xf8000 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8000 */
undefined4 bflib_system_io_fn_0f8000(void);
/* VA: 0xf802e | Module bflib/bflib_system_io.cpp procedure @ 0x0f802e */
undefined8 bflib_system_io_fn_0f802e(void);
/* VA: 0xf8089 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8089 */
void bflib_system_io_fn_0f8089(void);
/* VA: 0xf8094 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8094 */
undefined8 bflib_system_io_fn_0f8094(void);
/* VA: 0xf80bc | Module bflib/bflib_system_io.cpp procedure @ 0x0f80bc */
void bflib_system_io_fn_0f80bc(void);
/* VA: 0xf80d8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f80d8 */
longdouble bflib_system_io_fn_0f80d8(void);
/* VA: 0xf8108 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8108 */
void bflib_system_io_fn_0f8108(void);
/* VA: 0xf81d3 | Module bflib/bflib_system_io.cpp procedure @ 0x0f81d3 */
void bflib_system_io_fn_0f81d3(void);
/* VA: 0xf81f0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f81f0 */
void bflib_system_io_fn_0f81f0(void);
/* VA: 0xf823d | Module bflib/bflib_system_io.cpp procedure @ 0x0f823d */
void bflib_system_io_fn_0f823d(void);
/* VA: 0xf825d | Module bflib/bflib_system_io.cpp procedure @ 0x0f825d */
void bflib_system_io_fn_0f825d(void);
/* VA: 0xf82d7 | Module bflib/bflib_system_io.cpp procedure @ 0x0f82d7 */
void bflib_system_io_fn_0f82d7(void);
/* VA: 0xf8312 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8312 */
void bflib_system_io_fn_0f8312(void);
/* VA: 0xf8333 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8333 */
void bflib_system_io_fn_0f8333(void);
/* VA: 0xf8338 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8338 */
unkbyte10 bflib_system_io_fn_0f8338(void);
/* VA: 0xf833c | Module bflib/bflib_system_io.cpp procedure @ 0x0f833c */
void bflib_system_io_fn_0f833c(void);
/* VA: 0xf8377 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8377 */
void bflib_system_io_fn_0f8377(void);
/* VA: 0xf83c0 | String 'undefined constructor or destructor called!' */
void bflib_system_io_undefined_constructor_destructor_called_0f83c0(void);
/* VA: 0xf83d4 | Module bflib/bflib_system_io.cpp procedure @ 0x0f83d4 */
void bflib_system_io_fn_0f83d4(void);
/* VA: 0xf8430 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8430 */
int bflib_system_io_fn_0f8430(void);
/* VA: 0xf8434 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8434 */
undefined4 bflib_system_io_fn_0f8434(void);
/* VA: 0xf843b | Module bflib/bflib_system_io.cpp procedure @ 0x0f843b */
void bflib_system_io_fn_0f843b(void);
/* VA: 0xf8440 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8440 */
void bflib_system_io_fn_0f8440(void);
/* VA: 0xf844b | Module bflib/bflib_system_io.cpp procedure @ 0x0f844b */
void bflib_system_io_fn_0f844b(void);
/* VA: 0xf845c | Module bflib/bflib_system_io.cpp procedure @ 0x0f845c */
undefined8 bflib_system_io_fn_0f845c(void);
/* VA: 0xf85f9 | Module bflib/bflib_system_io.cpp procedure @ 0x0f85f9 */
undefined4 bflib_system_io_fn_0f85f9(void);
/* VA: 0xf8602 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8602 */
ushort bflib_system_io_fn_0f8602(void);
/* VA: 0xf8645 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8645 */
ushort bflib_system_io_fn_0f8645(void);
/* VA: 0xf86c8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f86c8 */
void bflib_system_io_fn_0f86c8(void);
/* VA: 0xf8761 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8761 */
void bflib_system_io_fn_0f8761(void);
/* VA: 0xf876f | Module bflib/bflib_system_io.cpp procedure @ 0x0f876f */
void bflib_system_io_fn_0f876f(void);
/* VA: 0xf8774 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8774 */
void bflib_system_io_fn_0f8774(void);
/* VA: 0xf8780 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8780 */
void bflib_system_io_fn_0f8780(void);
/* VA: 0xf8797 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8797 */
void bflib_system_io_fn_0f8797(void);
/* VA: 0xf87a3 | Module bflib/bflib_system_io.cpp procedure @ 0x0f87a3 */
undefined8 bflib_system_io_fn_0f87a3(void);
/* VA: 0xf8849 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8849 */
void bflib_system_io_fn_0f8849(void);
/* VA: 0xf8882 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8882 */
void bflib_system_io_fn_0f8882(void);
/* VA: 0xf88a0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f88a0 */
undefined4 bflib_system_io_fn_0f88a0(void);
/* VA: 0xf88e2 | Module bflib/bflib_system_io.cpp procedure @ 0x0f88e2 */
undefined4 bflib_system_io_fn_0f88e2(void);
/* VA: 0xf89de | Module bflib/bflib_system_io.cpp procedure @ 0x0f89de */
void bflib_system_io_fn_0f89de(void);
/* VA: 0xf8a10 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8a10 */
void bflib_system_io_fn_0f8a10(void);
/* VA: 0xf8a21 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8a21 */
undefined4 bflib_system_io_fn_0f8a21(void);
/* VA: 0xf8aa0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8aa0 */
undefined4 bflib_system_io_fn_0f8aa0(void);
/* VA: 0xf8aa6 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8aa6 */
undefined8 bflib_system_io_fn_0f8aa6(void);
/* VA: 0xf8b7f | Module bflib/bflib_system_io.cpp procedure @ 0x0f8b7f */
undefined8 bflib_system_io_fn_0f8b7f(void);
/* VA: 0xf8baf | Module bflib/bflib_system_io.cpp procedure @ 0x0f8baf */
longlong bflib_system_io_fn_0f8baf(void);
/* VA: 0xf8be4 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8be4 */
longlong bflib_system_io_fn_0f8be4(void);
/* VA: 0xf8c05 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8c05 */
longlong bflib_system_io_fn_0f8c05(void);
/* VA: 0xf8c26 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8c26 */
longlong bflib_system_io_fn_0f8c26(void);
/* VA: 0xf8c47 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8c47 */
undefined4 bflib_system_io_fn_0f8c47(void);
/* VA: 0xf8ccf | Module bflib/bflib_system_io.cpp procedure @ 0x0f8ccf */
undefined4 bflib_system_io_fn_0f8ccf(void);
/* VA: 0xf8e19 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8e19 */
uint bflib_system_io_fn_0f8e19(void);
/* VA: 0xf8e89 | Module bflib/bflib_system_io.cpp procedure @ 0x0f8e89 */
longlong bflib_system_io_fn_0f8e89(void);
/* VA: 0xf8eac | Module bflib/bflib_system_io.cpp procedure @ 0x0f8eac */
void bflib_system_io_fn_0f8eac(void);
/* VA: 0xf9460 | Checks g_sound_active_flag / g_sound_driver_ready and updates audio */
void bflib_system_io_audio_driver_op_0f9460(void);
/* VA: 0xf95f0 | Module bflib/bflib_system_io.cpp procedure @ 0x0f95f0 */
void bflib_system_io_fn_0f95f0(void);
/* VA: 0xf9610 | Module bflib/bflib_system_io.cpp procedure @ 0x0f9610 */
void bflib_system_io_fn_0f9610(void);
/* VA: 0xf9623 | Checks g_sound_active_flag / g_sound_driver_ready and updates audio */
void bflib_system_io_audio_driver_op_0f9623(void);
/* VA: 0xf96a3 | Module bflib/bflib_system_io.cpp procedure @ 0x0f96a3 */
void bflib_system_io_fn_0f96a3(char *param_1);
/* VA: 0xf96cd | Module bflib/bflib_system_io.cpp procedure @ 0x0f96cd */
void bflib_system_io_fn_0f96cd(void);
/* VA: 0xf96f8 | Module bflib/bflib_system_io.cpp procedure @ 0x0f96f8 */
void bflib_system_io_fn_0f96f8(void);
/* VA: 0xf970b | Module bflib/bflib_system_io.cpp procedure @ 0x0f970b */
void bflib_system_io_fn_0f970b(void);
/* VA: 0xf9733 | Module bflib/bflib_system_io.cpp procedure @ 0x0f9733 */
void bflib_system_io_fn_0f9733(void);
/* VA: 0xf9767 | Module bflib/bflib_system_io.cpp procedure @ 0x0f9767 */
void bflib_system_io_fn_0f9767(void);
/* VA: 0xf979c | Module bflib/bflib_system_io.cpp procedure @ 0x0f979c */
void bflib_system_io_fn_0f979c(void);
/* VA: 0xf97d6 | Module bflib/bflib_system_io.cpp procedure @ 0x0f97d6 */
void bflib_system_io_fn_0f97d6(void);
/* VA: 0xf9819 | Checks g_sound_active_flag / g_sound_driver_ready and updates audio */
undefined4 bflib_system_io_audio_driver_op_0f9819(void);
/* VA: 0xf9a82 | Module bflib/bflib_system_io.cpp procedure @ 0x0f9a82 */
void bflib_system_io_fn_0f9a82(void);
/* VA: 0xf9a87 | Module bflib/bflib_system_io.cpp procedure @ 0x0f9a87 */
void bflib_system_io_fn_0f9a87(void);
/* VA: 0xf9c2b | Module bflib/bflib_system_io.cpp procedure @ 0x0f9c2b */
uint bflib_system_io_fn_0f9c2b(void);
/* VA: 0xf9c30 | Module bflib/bflib_system_io.cpp procedure @ 0x0f9c30 */
void bflib_system_io_fn_0f9c30(undefined4 param_1);
/* VA: 0xf9d11 | Module bflib/bflib_system_io.cpp procedure @ 0x0f9d11 */
undefined4 bflib_system_io_fn_0f9d11(void);
/* VA: 0xfdaaa | Module bflib/bflib_system_io.cpp procedure @ 0x0fdaaa */
void bflib_system_io_fn_0fdaaa(void);
/* VA: 0xfdad0 | Module bflib/bflib_system_io.cpp procedure @ 0x0fdad0 */
undefined4 bflib_system_io_fn_0fdad0(void);
/* VA: 0xfdd51 | Module bflib/bflib_system_io.cpp procedure @ 0x0fdd51 */
void bflib_system_io_fn_0fdd51(void);
/* VA: 0xfdd6f | Module bflib/bflib_system_io.cpp procedure @ 0x0fdd6f */
undefined4 bflib_system_io_fn_0fdd6f(void);
/* VA: 0xfdd97 | Module bflib/bflib_system_io.cpp procedure @ 0x0fdd97 */
undefined4 bflib_system_io_fn_0fdd97(void);
/* VA: 0xfdf16 | Module bflib/bflib_system_io.cpp procedure @ 0x0fdf16 */
undefined4 bflib_system_io_fn_0fdf16(void);
/* VA: 0xfe870 | Module bflib/bflib_system_io.cpp procedure @ 0x0fe870 */
undefined4 bflib_system_io_fn_0fe870(undefined4 param_1);
/* VA: 0xfe883 | Module bflib/bflib_system_io.cpp procedure @ 0x0fe883 */
undefined4 bflib_system_io_fn_0fe883(undefined4 param_1);
/* VA: 0xfe896 | Module bflib/bflib_system_io.cpp procedure @ 0x0fe896 */
int * bflib_system_io_fn_0fe896(int param_1);
/* VA: 0xfe8c1 | Module bflib/bflib_system_io.cpp procedure @ 0x0fe8c1 */
void bflib_system_io_fn_0fe8c1(int param_1);
/* VA: 0xfe8e5 | Module bflib/bflib_system_io.cpp procedure @ 0x0fe8e5 */
bool bflib_system_io_fn_0fe8e5(int param_1,int *param_2,uint *param_3,uint *param_4);
/* VA: 0xfe961 | Module bflib/bflib_system_io.cpp procedure @ 0x0fe961 */
void bflib_system_io_fn_0fe961(undefined4 param_1,undefined4 param_2,uint param_3);
/* VA: 0xfe993 | Module bflib/bflib_system_io.cpp procedure @ 0x0fe993 */
bool bflib_system_io_fn_0fe993(uint param_1,uint param_2);
/* VA: 0xfea1b | Module bflib/bflib_system_io.cpp procedure @ 0x0fea1b */
bool bflib_system_io_fn_0fea1b(uint param_1,uint param_2);
/* VA: 0xfeaaa | Module bflib/bflib_system_io.cpp procedure @ 0x0feaaa */
void bflib_system_io_fn_0feaaa(int param_1,int param_2);
/* VA: 0xfeac2 | Module bflib/bflib_system_io.cpp procedure @ 0x0feac2 */
void bflib_system_io_fn_0feac2(int param_1,int param_2);
/* VA: 0xfeae0 | Module bflib/bflib_system_io.cpp procedure @ 0x0feae0 */
int bflib_system_io_fn_0feae0(undefined4 param_1);
/* VA: 0xfeb45 | Module bflib/bflib_system_io.cpp procedure @ 0x0feb45 */
int * bflib_system_io_fn_0feb45(undefined4 param_1,int *param_2);
/* VA: 0xfec17 | Module bflib/bflib_system_io.cpp procedure @ 0x0fec17 */
undefined4 bflib_system_io_fn_0fec17(undefined4 param_1,undefined4 param_2,int param_3);
/* VA: 0xfec7f | Module bflib/bflib_system_io.cpp procedure @ 0x0fec7f */
undefined4 bflib_system_io_fn_0fec7f(undefined4 param_1,undefined4 param_2,int param_3);
/* VA: 0xfece8 | Module bflib/bflib_system_io.cpp procedure @ 0x0fece8 */
longlong bflib_system_io_fn_0fece8(void);
/* VA: 0xfed03 | Module bflib/bflib_system_io.cpp procedure @ 0x0fed03 */
longlong bflib_system_io_fn_0fed03(void);
/* VA: 0xfed1d | Module bflib/bflib_system_io.cpp procedure @ 0x0fed1d */
void bflib_system_io_fn_0fed1d(void);
/* VA: 0xfed45 | Module bflib/bflib_system_io.cpp procedure @ 0x0fed45 */
undefined4 bflib_system_io_fn_0fed45(void);
/* VA: 0xfed5e | Module bflib/bflib_system_io.cpp procedure @ 0x0fed5e */
void bflib_system_io_fn_0fed5e(void);
/* VA: 0xfed8f | Module bflib/bflib_system_io.cpp procedure @ 0x0fed8f */
undefined4 bflib_system_io_fn_0fed8f(void);
/* VA: 0xfeda2 | Module bflib/bflib_system_io.cpp procedure @ 0x0feda2 */
void bflib_system_io_fn_0feda2(void);
/* VA: 0xfedb1 | Module bflib/bflib_system_io.cpp procedure @ 0x0fedb1 */
undefined4 bflib_system_io_fn_0fedb1(void);
/* VA: 0xfedbe | Module bflib/bflib_system_io.cpp procedure @ 0x0fedbe */
void bflib_system_io_fn_0fedbe(void);
/* VA: 0xfedeb | Module bflib/bflib_system_io.cpp procedure @ 0x0fedeb */
void bflib_system_io_fn_0fedeb(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0xfee0c | Module bflib/bflib_system_io.cpp procedure @ 0x0fee0c */
void bflib_system_io_fn_0fee0c(void);
/* VA: 0xfefe4 | Module bflib/bflib_system_io.cpp procedure @ 0x0fefe4 */
void bflib_system_io_fn_0fefe4(void);
/* VA: 0xff00e | String 'pure virtual function called!' */
void bflib_system_io_pure_virtual_function_called_0ff00e(void);
/* VA: 0xff040 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff040 */
undefined8 bflib_system_io_fn_0ff040(void);
/* VA: 0xff308 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff308 */
uint bflib_system_io_fn_0ff308(void);
/* VA: 0xff398 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff398 */
void bflib_system_io_fn_0ff398(void);
/* VA: 0xff3a4 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff3a4 */
undefined8 bflib_system_io_fn_0ff3a4(void);
/* VA: 0xff4d8 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff4d8 */
void bflib_system_io_fn_0ff4d8(void);
/* VA: 0xff4f4 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff4f4 */
undefined1 bflib_system_io_fn_0ff4f4(void);
/* VA: 0xff53c | Module bflib/bflib_system_io.cpp procedure @ 0x0ff53c */
int bflib_system_io_fn_0ff53c(void);
/* VA: 0xff628 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff628 */
undefined4 bflib_system_io_fn_0ff628(void);
/* VA: 0xff678 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff678 */
undefined4 bflib_system_io_fn_0ff678(void);
/* VA: 0xff834 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff834 */
void bflib_system_io_fn_0ff834(void);
/* VA: 0xff9f8 | Module bflib/bflib_system_io.cpp procedure @ 0x0ff9f8 */
uint bflib_system_io_fn_0ff9f8(void);
/* VA: 0x100708 | Module bflib/bflib_system_io.cpp procedure @ 0x100708 */
void bflib_system_io_fn_100708(void);
/* VA: 0x1008a8 | Module bflib/bflib_system_io.cpp procedure @ 0x1008a8 */
undefined1 bflib_system_io_fn_1008a8(void);
/* VA: 0x1012c0 | Module bflib/bflib_system_io.cpp procedure @ 0x1012c0 */
undefined8 bflib_system_io_fn_1012c0(void);
/* VA: 0x101318 | Module bflib/bflib_system_io.cpp procedure @ 0x101318 */
undefined4 bflib_system_io_fn_101318(void);
/* VA: 0x101f88 | Module bflib/bflib_system_io.cpp procedure @ 0x101f88 */
undefined4 bflib_system_io_fn_101f88(void);
/* VA: 0x101fec | String 'CAN USE THIS VECTOR 0x%x' */
longlong bflib_system_io_use_this_vector_101fec(void);
/* VA: 0x102264 | String 'OPEN SOCKET 0x%x, RETURN CODE 0x%x' */
uint bflib_system_io_open_socket_return_code_102264(void);
/* VA: 0x102344 | String 'CLOSING SOCKET %x' */
void bflib_system_io_closing_socket_102344(void);
/* VA: 0x1023f4 | Module bflib/bflib_system_io.cpp procedure @ 0x1023f4 */
void bflib_system_io_fn_1023f4(uint param_1);
/* VA: 0x1025c0 | Module bflib/bflib_system_io.cpp procedure @ 0x1025c0 */
void bflib_system_io_fn_1025c0(void);
/* VA: 0x1026b0 | Module bflib/bflib_system_io.cpp procedure @ 0x1026b0 */
int bflib_system_io_fn_1026b0(void);
/* VA: 0x102724 | Module bflib/bflib_system_io.cpp procedure @ 0x102724 */
undefined8 bflib_system_io_fn_102724(void);
/* VA: 0x102758 | Module bflib/bflib_system_io.cpp procedure @ 0x102758 */
void bflib_system_io_fn_102758(void);
/* VA: 0x102834 | Module bflib/bflib_system_io.cpp procedure @ 0x102834 */
void bflib_system_io_fn_102834(void);
/* VA: 0x10293c | Module bflib/bflib_system_io.cpp procedure @ 0x10293c */
int bflib_system_io_fn_10293c(void);
/* VA: 0x1029b8 | Module bflib/bflib_system_io.cpp procedure @ 0x1029b8 */
void bflib_system_io_fn_1029b8(void);
/* VA: 0x1029e0 | String 'OPEN SOCKET 0x%x, RETURN CODE 0x%x' */
undefined4 bflib_system_io_open_socket_return_code_1029e0(void);
/* VA: 0x102dd0 | Module bflib/bflib_system_io.cpp procedure @ 0x102dd0 */
void bflib_system_io_fn_102dd0(void);
/* VA: 0x102e4c | Module bflib/bflib_system_io.cpp procedure @ 0x102e4c */
void bflib_system_io_fn_102e4c(void);
/* VA: 0x103100 | Module bflib/bflib_system_io.cpp procedure @ 0x103100 */
void bflib_system_io_fn_103100(void);
/* VA: 0x103110 | Module bflib/bflib_system_io.cpp procedure @ 0x103110 */
undefined1 bflib_system_io_fn_103110(void);
/* VA: 0x103114 | Module bflib/bflib_system_io.cpp procedure @ 0x103114 */
undefined1 bflib_system_io_fn_103114(void);
/* VA: 0x103134 | Module bflib/bflib_system_io.cpp procedure @ 0x103134 */
int bflib_system_io_fn_103134(void);
/* VA: 0x1037c8 | Module bflib/bflib_system_io.cpp procedure @ 0x1037c8 */
undefined1 bflib_system_io_fn_1037c8(void);
/* VA: 0x10425c | Module bflib/bflib_system_io.cpp procedure @ 0x10425c */
undefined8 bflib_system_io_fn_10425c(void);
/* VA: 0x1043c8 | Module bflib/bflib_system_io.cpp procedure @ 0x1043c8 */
char bflib_system_io_fn_1043c8(void);
/* VA: 0x104400 | Module bflib/bflib_system_io.cpp procedure @ 0x104400 */
void bflib_system_io_fn_104400(void);
/* VA: 0x104408 | Module bflib/bflib_system_io.cpp procedure @ 0x104408 */
void bflib_system_io_fn_104408(void);
/* VA: 0x104410 | Module bflib/bflib_system_io.cpp procedure @ 0x104410 */
undefined4 bflib_system_io_fn_104410(char param_1);
/* VA: 0x1044e0 | String 'BU.GI.' */
undefined1 bflib_system_io_bu_gi_1044e0(void);
/* VA: 0x104d44 | Module bflib/bflib_system_io.cpp procedure @ 0x104d44 */
undefined4 bflib_system_io_fn_104d44(void);

/* === Module: bflib/bflib_video.cpp (4 functions) === */
/* VA: 0xf0d90 | Module bflib/bflib_video.cpp procedure @ 0x0f0d90 */
undefined8 bflib_video_fn_0f0d90(void);
/* VA: 0xf143c | String 'SBAWE32.MDI' */
undefined8 bflib_video_sbawe32_mdi_0f143c(void);
/* VA: 0xf1b38 | String 'BF_DEBUG_AUDIO' */
void bflib_video_bf_debug_audio_0f1b38(void);
/* VA: 0xfe128 | String 'BF25 - Init Music' */
void bflib_video_bf25_init_music_0fe128(void);

/* === Module: build.cpp (10 functions) === */
/* VA: 0x1458c | Accesses per-player PlayerInfo state (stride 0x4ef) */
int build_update_player_view_state_01458c(void);
/* VA: 0x145d2 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void build_update_player_view_state_0145d2(void);
/* VA: 0x14614 | String 'Attempt to tag area outside of map' */
undefined1 build_attempt_tag_area_outside_014614(void);
/* VA: 0x1495c | String 'Attempt to tag area outside of map' */
int build_attempt_tag_area_outside_01495c(void);
/* VA: 0x14a68 | Module build.cpp procedure @ 0x014a68 */
void build_fn_014a68(void);
/* VA: 0x14a9f | Module build.cpp procedure @ 0x014a9f */
void build_fn_014a9f(void);
/* VA: 0x14ad2 | Module build.cpp procedure @ 0x014ad2 */
void build_fn_014ad2(void);
/* VA: 0x14ae8 | Module build.cpp procedure @ 0x014ae8 */
void build_fn_014ae8(void);
/* VA: 0x14afe | Reads/modifies Map[256x256] subtile data */
void build_process_map_subtile_014afe(void);
/* VA: 0x14d45 | Reads/modifies Map[256x256] subtile data */
void build_process_map_subtile_014d45(void);

/* === Module: cdtest.cpp (8 functions) === */
/* VA: 0x14c9a | Reads/modifies SlabMap[85x85] tile entry */
void cdtest_process_slabmap_tile_014c9a(void);
/* VA: 0x14e9f | Accesses per-player PlayerInfo state (stride 0x4ef) */
void cdtest_update_player_view_state_014e9f(void);
/* VA: 0x14faa | Reads/modifies SlabMap[85x85] tile entry */
undefined4 cdtest_process_slabmap_tile_014faa(void);
/* VA: 0x15030 | Module cdtest.cpp procedure @ 0x015030 */
void cdtest_fn_015030(void);
/* VA: 0x150f0 | String 'LDATA\DKWIND00.DAT' */
void cdtest_ldata_dkwind00_dat_0150f0(void);
/* VA: 0x151f2 | Module cdtest.cpp procedure @ 0x0151f2 */
undefined4 cdtest_fn_0151f2(void);
/* VA: 0x151f8 | Module cdtest.cpp procedure @ 0x0151f8 */
longlong cdtest_fn_0151f8(void);
/* VA: 0x15251 | Module cdtest.cpp procedure @ 0x015251 */
undefined8 cdtest_fn_015251(void);

/* === Module: ceiling.cpp (20 functions) === */
/* VA: 0x7bb10 | Module ceiling.cpp procedure @ 0x07bb10 */
int ceiling_fn_07bb10(void);
/* VA: 0x7bc8d | Module ceiling.cpp procedure @ 0x07bc8d */
undefined4 ceiling_fn_07bc8d(void);
/* VA: 0x7c1f0 | String 'Illegal ceiling step value' */
undefined4 ceiling_illegal_ceiling_step_value_07c1f0(void);
/* VA: 0x7c3c8 | Reads/modifies Map[256x256] subtile data */
undefined4 ceiling_process_map_subtile_07c3c8(void);
/* VA: 0x7c590 | Reads/modifies Map[256x256] subtile data */
undefined4 ceiling_process_map_subtile_07c590(void);
/* VA: 0x7c870 | Module ceiling.cpp procedure @ 0x07c870 */
undefined8 ceiling_fn_07c870(void);
/* VA: 0x7c998 | Module ceiling.cpp procedure @ 0x07c998 */
undefined8 ceiling_fn_07c998(void);
/* VA: 0x7caf0 | Module ceiling.cpp procedure @ 0x07caf0 */
int ceiling_fn_07caf0(void);
/* VA: 0x7cd3c | Reads/modifies Map[256x256] subtile data */
uint ceiling_process_map_subtile_07cd3c(void);
/* VA: 0x7d100 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
byte * ceiling_process_thing_entity_07d100(void);
/* VA: 0x7d3f4 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
byte * ceiling_process_thing_entity_07d3f4(void);
/* VA: 0x7d674 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
int ceiling_roll_action_random_07d674(void);
/* VA: 0x7d748 | Module ceiling.cpp procedure @ 0x07d748 */
byte * ceiling_fn_07d748(void);
/* VA: 0x7d7c0 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
byte * ceiling_process_thing_entity_07d7c0(int param_1);
/* VA: 0x7da18 | Reads/modifies Map[256x256] subtile data */
undefined8 ceiling_process_map_subtile_07da18(void);
/* VA: 0x7daac | Module ceiling.cpp procedure @ 0x07daac */
undefined4 ceiling_fn_07daac(void);
/* VA: 0x7dae0 | Module ceiling.cpp procedure @ 0x07dae0 */
undefined4 ceiling_fn_07dae0(void);
/* VA: 0x7dbc0 | Reads/modifies Map[256x256] subtile data */
undefined4 ceiling_process_map_subtile_07dbc0(void);
/* VA: 0x7ddf8 | Reads/modifies Map[256x256] subtile data */
undefined4 ceiling_process_map_subtile_07ddf8(void);
/* VA: 0x7df48 | Module ceiling.cpp procedure @ 0x07df48 */
undefined8 ceiling_fn_07df48(void);

/* === Module: column.cpp (13 functions) === */
/* VA: 0x15318 | Module column.cpp procedure @ 0x015318 */
void column_fn_015318(void);
/* VA: 0x1534a | Module column.cpp procedure @ 0x01534a */
longlong column_fn_01534a(void);
/* VA: 0x15386 | String 'Could not create column: None free' */
undefined8 column_could_create_column_none_015386(void);
/* VA: 0x15456 | Module column.cpp procedure @ 0x015456 */
void column_fn_015456(void);
/* VA: 0x15479 | String 'Cannot allocate column' */
void column_allocate_column_015479(void);
/* VA: 0x15502 | Reads/modifies Map[256x256] subtile data */
void column_process_map_subtile_015502(void);
/* VA: 0x15561 | Module column.cpp procedure @ 0x015561 */
void column_fn_015561(void);
/* VA: 0x15603 | Reads/modifies Map[256x256] subtile data */
void column_process_map_subtile_015603(void);
/* VA: 0x156a7 | Module column.cpp procedure @ 0x0156a7 */
void column_fn_0156a7(void);
/* VA: 0x156de | Reads/modifies Map[256x256] subtile data */
void column_process_map_subtile_0156de(void);
/* VA: 0x157ac | Module column.cpp procedure @ 0x0157ac */
longlong column_fn_0157ac(void);
/* VA: 0x157e4 | Module column.cpp procedure @ 0x0157e4 */
longlong column_fn_0157e4(void);
/* VA: 0x1581c | Module column.cpp procedure @ 0x01581c */
undefined4 column_fn_01581c(void);

/* === Module: combat.cpp (15 functions) === */
/* VA: 0x15861 | Reads/modifies Map[256x256] subtile data */
void combat_process_map_subtile_015861(void);
/* VA: 0x158a6 | Module combat.cpp procedure @ 0x0158a6 */
void combat_fn_0158a6(void);
/* VA: 0x15950 | String 'CANNOT GET IN FLEE' */
longlong combat_get_flee_015950(void);
/* VA: 0x15a1b | Module combat.cpp procedure @ 0x015a1b */
undefined4 combat_fn_015a1b(void);
/* VA: 0x15a23 | Module combat.cpp procedure @ 0x015a23 */
void combat_fn_015a23(void);
/* VA: 0x15ac2 | Module combat.cpp procedure @ 0x015ac2 */
void combat_fn_015ac2(void);
/* VA: 0x15b37 | Module combat.cpp procedure @ 0x015b37 */
void combat_fn_015b37(void);
/* VA: 0x15be4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 combat_update_creature_control_015be4(void);
/* VA: 0x15d7c | Module combat.cpp procedure @ 0x015d7c */
undefined4 combat_fn_015d7c(void);
/* VA: 0x15db4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong combat_update_creature_control_015db4(void);
/* VA: 0x15df9 | Module combat.cpp procedure @ 0x015df9 */
undefined4 combat_fn_015df9(void);
/* VA: 0x15e26 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong combat_update_creature_control_015e26(void);
/* VA: 0x15e65 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong combat_update_creature_control_015e65(void);
/* VA: 0x15eb2 | Module combat.cpp procedure @ 0x015eb2 */
longlong combat_fn_015eb2(void);
/* VA: 0x15ed7 | Module combat.cpp procedure @ 0x015ed7 */
longlong combat_fn_015ed7(void);

/* === Module: combchk.cpp (17 functions) === */
/* VA: 0x15ef2 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 combchk_update_creature_and_thing_015ef2(void);
/* VA: 0x15f21 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combchk_update_creature_control_015f21(void);
/* VA: 0x1604f | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combchk_update_creature_control_01604f(void);
/* VA: 0x1612a | Module combchk.cpp procedure @ 0x01612a */
int combchk_fn_01612a(void);
/* VA: 0x1614f | Module combchk.cpp procedure @ 0x01614f */
undefined4 combchk_fn_01614f(void);
/* VA: 0x16175 | Module combchk.cpp procedure @ 0x016175 */
undefined4 combchk_fn_016175(int param_1);
/* VA: 0x16242 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
uint combchk_update_creature_control_016242(void);
/* VA: 0x1629a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combchk_update_creature_control_01629a(void);
/* VA: 0x162f2 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combchk_update_creature_control_0162f2(void);
/* VA: 0x16376 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combchk_update_creature_control_016376(void);
/* VA: 0x163c9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined1 combchk_update_creature_control_0163c9(void);
/* VA: 0x16423 | String 'NO CONTROL STRUCTURE - C%d M%d GT%d CA%d' */
undefined4 combchk_control_structure_gt_ca_016423(void);
/* VA: 0x16498 | Module combchk.cpp procedure @ 0x016498 */
undefined8 combchk_fn_016498(void);
/* VA: 0x164bf | Accesses CreatureControl state in g_creature_ctrl_ptrs */
uint combchk_update_creature_control_0164bf(void);
/* VA: 0x1652b | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combchk_update_creature_control_01652b(void);
/* VA: 0x165cd | String 'NULL - ENEMY' */
undefined4 combchk_null_enemy_0165cd(void);
/* VA: 0x1660d | Module combchk.cpp procedure @ 0x01660d */
undefined4 combchk_fn_01660d(void);

/* === Module: combmove.cpp (5 functions) === */
/* VA: 0x16640 | String 'NO ROOM FOR STATE' */
undefined4 combmove_room_state_016640(void);
/* VA: 0x1671a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combmove_update_creature_control_01671a(void);
/* VA: 0x168a2 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combmove_update_creature_control_0168a2(void);
/* VA: 0x169a5 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combmove_update_creature_control_0169a5(void);
/* VA: 0x16b29 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combmove_update_creature_control_016b29(void);

/* === Module: combobj.cpp (14 functions) === */
/* VA: 0x16cd0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void combobj_update_creature_control_016cd0(void);
/* VA: 0x16d38 | Module combobj.cpp procedure @ 0x016d38 */
undefined4 combobj_fn_016d38(void);
/* VA: 0x16d62 | String 'NOT IN OBJECT COMBAT BUT SHOULD BE' */
longlong combobj_object_combat_but_should_016d62(void);
/* VA: 0x16df5 | String 'CREATURE %d HAS NO MELEE INSTANCE IN FIGHT' */
void combobj_creature_has_melee_instance_016df5(void);
/* VA: 0x16e9b | Module combobj.cpp procedure @ 0x016e9b */
void combobj_fn_016e9b(void);
/* VA: 0x16f05 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combobj_update_creature_control_016f05(void);
/* VA: 0x16f23 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void combobj_update_creature_control_016f23(void);
/* VA: 0x16f8b | Module combobj.cpp procedure @ 0x016f8b */
void combobj_fn_016f8b(void);
/* VA: 0x16fab | String 'NOT IN DOOR COMBAT BUT SHOULD BE' */
longlong combobj_door_combat_but_should_016fab(void);
/* VA: 0x17052 | String 'CREATURE %d HAS NO MELEE INSTANCE IN FIGHT' */
void combobj_creature_has_melee_instance_017052(void);
/* VA: 0x170d0 | Module combobj.cpp procedure @ 0x0170d0 */
void combobj_fn_0170d0(void);
/* VA: 0x1710b | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combobj_update_creature_control_01710b(void);
/* VA: 0x17128 | String 'INVALID THING FOR THIS CHECK' */
longlong combobj_thing_this_check_017128(void);
/* VA: 0x17184 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combobj_update_creature_control_017184(void);

/* === Module: combold.cpp (5 functions) === */
/* VA: 0x171cc | Module combold.cpp procedure @ 0x0171cc */
void combold_fn_0171cc(void);
/* VA: 0x171e4 | String 'THING STUCK FINDING A MELEE POS - COUNT =%d' */
undefined4 combold_thing_stuck_finding_melee_0171e4(void);
/* VA: 0x17381 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combold_update_creature_control_017381(void);
/* VA: 0x174b0 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
int combold_update_creature_and_thing_0174b0(void);
/* VA: 0x175fa | Looks up Thing* in g_thing_ptrs[2048] and updates state */
int combold_process_thing_entity_0175fa(void);

/* === Module: combtool.cpp (32 functions) === */
/* VA: 0x173e8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
int combtool_update_creature_control_0173e8(void);
/* VA: 0x176c6 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
int combtool_update_creature_and_thing_0176c6(void);
/* VA: 0x1781a | Looks up Thing* in g_thing_ptrs[2048] and updates state */
int combtool_process_thing_entity_01781a(void);
/* VA: 0x178e6 | Module combtool.cpp procedure @ 0x0178e6 */
undefined4 combtool_fn_0178e6(void);
/* VA: 0x178ed | String 'CREATURE IN COMBAT ALREADY - ADDING MELEE' */
undefined4 combtool_creature_combat_already_adding_0178ed(void);
/* VA: 0x1798e | String 'CREATURE IN COMBAT ALREADY - ADDING RANGED' */
undefined4 combtool_creature_combat_already_adding_01798e(void);
/* VA: 0x17a2f | String 'CREATURE IN COMBAT ALREADY - WAITING' */
undefined4 combtool_creature_combat_already_waiting_017a2f(void);
/* VA: 0x17a7f | String 'COMBAT COUNT INCORRECT' */
void combtool_combat_count_incorrect_017a7f(void);
/* VA: 0x17b5c | String 'FIGHT COUNT INCORRECT' */
void combtool_fight_count_incorrect_017b5c(void);
/* VA: 0x17c2f | String 'FIGHT COUNT INCORRECT' */
void combtool_fight_count_incorrect_017c2f(void);
/* VA: 0x17c99 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void combtool_update_creature_control_017c99(void);
/* VA: 0x17cd2 | String 'CREATURE HAS NO DUNGEON HEART OR LAIR TO FLEE TO - POSSIBLE ' */
undefined4 combtool_creature_has_dungeon_heart_017cd2(void);
/* VA: 0x17db0 | String 'COULDN'T GET A FLEE POSITION' */
void combtool_couldn_get_flee_position_017db0(void);
/* VA: 0x17e02 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 combtool_update_creature_control_017e02(void);
/* VA: 0x17e7e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void combtool_update_creature_control_017e7e(void);
/* VA: 0x17fee | String 'CREATURE IN COMBAT ALREADY - STATE(%d)' */
void combtool_creature_combat_already_state_017fee(void);
/* VA: 0x18087 | String 'CREATURE IN COMBAT ALREADY - ADDING TILL DEATH' */
undefined4 combtool_creature_combat_already_adding_018087(void);
/* VA: 0x180e7 | Module combtool.cpp procedure @ 0x0180e7 */
void combtool_fn_0180e7(void);
/* VA: 0x18119 | String 'NO RANGED ATTACKERS - SERIOUS' */
undefined4 combtool_ranged_attackers_serious_018119(void);
/* VA: 0x1829f | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 combtool_update_creature_control_01829f(void);
/* VA: 0x1836b | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 combtool_update_creature_control_01836b(void);
/* VA: 0x1840a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong combtool_update_creature_control_01840a(void);
/* VA: 0x18593 | Module combtool.cpp procedure @ 0x018593 */
int combtool_fn_018593(void);
/* VA: 0x18607 | Module combtool.cpp procedure @ 0x018607 */
int combtool_fn_018607(void);
/* VA: 0x18671 | Module combtool.cpp procedure @ 0x018671 */
int combtool_fn_018671(void);
/* VA: 0x186d2 | Module combtool.cpp procedure @ 0x0186d2 */
int combtool_fn_0186d2(void);
/* VA: 0x18736 | Module combtool.cpp procedure @ 0x018736 */
undefined8 combtool_fn_018736(void);
/* VA: 0x18938 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 combtool_update_creature_control_018938(void);
/* VA: 0x189d4 | Module combtool.cpp procedure @ 0x0189d4 */
int combtool_fn_0189d4(void);
/* VA: 0x18a0c | Module combtool.cpp procedure @ 0x018a0c */
undefined8 combtool_fn_018a0c(void);
/* VA: 0x18a55 | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 combtool_update_player_dungeon_018a55(void);
/* VA: 0x18d16 | Module combtool.cpp procedure @ 0x018d16 */
undefined4 combtool_fn_018d16(void);

/* === Module: command.cpp (60 functions) === */
/* VA: 0x781c8 | Module command.cpp procedure @ 0x0781c8 */
void command_fn_0781c8(void);
/* VA: 0x7825a | Module command.cpp procedure @ 0x07825a */
int command_fn_07825a(void);
/* VA: 0x782e4 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 command_update_player_view_state_0782e4(int *param_1);
/* VA: 0x7841c | Module command.cpp procedure @ 0x07841c */
undefined4 command_fn_07841c(int *param_1);
/* VA: 0x784ae | Accesses per-player PlayerInfo state (stride 0x4ef) */
void command_update_player_view_state_0784ae(void);
/* VA: 0x785c4 | Reads/modifies Map[256x256] subtile data */
uint command_process_map_subtile_0785c4(void);
/* VA: 0x7868c | Reads/modifies Map[256x256] subtile data */
uint command_process_map_subtile_07868c(void);
/* VA: 0x78768 | Reads/modifies Map[256x256] subtile data */
uint command_process_map_subtile_078768(void);
/* VA: 0x7884b | Reads/modifies Map[256x256] subtile data */
uint command_process_map_subtile_07884b(void);
/* VA: 0x78919 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 command_process_slabmap_tile_078919(void);
/* VA: 0x789c2 | Module command.cpp procedure @ 0x0789c2 */
undefined4 command_fn_0789c2(void);
/* VA: 0x789df | Module command.cpp procedure @ 0x0789df */
bool command_fn_0789df(void);
/* VA: 0x789f0 | Module command.cpp procedure @ 0x0789f0 */
undefined4 command_fn_0789f0(void);
/* VA: 0x78ada | String '(script:%d) Invalid number of parameters, %s' */
undefined8 command_script_number_parameters_078ada(void);
/* VA: 0x7909c | String '(script:%d) Unexpected '-'' */
int command_script_unexpected_07909c(void);
/* VA: 0x793b7 | String '(script:%d) Too many conditions in script' */
void command_script_conditions_script_0793b7(void);
/* VA: 0x795b7 | String '(script:%d) Conditions too deep in script' */
void command_script_conditions_deep_script_0795b7(void);
/* VA: 0x7962f | String '(script: %d) unexpected ENDIF' */
undefined8 command_script_unexpected_endif_07962f(void);
/* VA: 0x796a6 | String '(script:%d) Too many partys in script' */
void command_script_partys_script_0796a6(void);
/* VA: 0x79702 | String '(script:%d) Invalid CREATURE LEVEL parameter - Range: (1 - 1' */
void command_script_creature_level_parameter_079702(undefined4 param_1,undefined4 param_2);
/* VA: 0x798e3 | String '(script:%d) Invalid NUMBER parameter' */
void command_script_number_parameter_0798e3(void);
/* VA: 0x79b68 | String '(script:%d) Invalid CREATURE LEVEL parameter' */
void command_script_creature_level_parameter_079b68(int param_1,undefined4 param_2);
/* VA: 0x79e34 | String '(script:%d) invalid player name, '%s'' */
void command_script_player_name_079e34(void);
/* VA: 0x79eb1 | String '(script:%d) Too many VALUEs in script' */
void command_script_values_script_079eb1(undefined4 param_1);
/* VA: 0x79fa0 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_079fa0(void);
/* VA: 0x7a040 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07a040(void);
/* VA: 0x7a0e0 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07a0e0(void);
/* VA: 0x7a180 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07a180(void);
/* VA: 0x7a220 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07a220(void);
/* VA: 0x7a2c0 | Case-insensitive lookup of script token in CommandDesc table */
uint get_script_command_id(void);
/* VA: 0x7a2ec | String '(script:%d) invalid player name, '%s'' */
void command_script_player_name_07a2ec(void);
/* VA: 0x7a535 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07a535(void);
/* VA: 0x7a58b | String '(script:%d) Too many conditions in script' */
void command_script_conditions_script_07a58b(void);
/* VA: 0x7a6b8 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07a6b8(void);
/* VA: 0x7a754 | String '(script:%d) Too many tunnellers in script' */
void command_script_tunnellers_script_07a754(byte param_1,undefined4 param_2);
/* VA: 0x7a9fd | String '(script:%d) No condition for WIN GAME' */
void command_script_condition_win_game_07a9fd(void);
/* VA: 0x7aa71 | String '(script:%d) No condition for LOSE GAME' */
void command_script_condition_lose_game_07aa71(void);
/* VA: 0x7aae5 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07aae5(void);
/* VA: 0x7ab81 | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07ab81(void);
/* VA: 0x7abe0 | String '(script:%d) Invalid TEXT number' */
void command_script_text_number_07abe0(void);
/* VA: 0x7ad29 | String '(script:%d) Invalid INFORMATION number' */
void command_script_information_number_07ad29(void);
/* VA: 0x7ad6f | String '(script:%d) Too many tunnellers in script' */
void command_script_tunnellers_script_07ad6f(undefined4 param_1,byte param_2,undefined4 param_3);
/* VA: 0x7b0c2 | String '(script:%d) Unknown creature, '%s'' */
void command_script_creature_07b0c2(void);
/* VA: 0x7b153 | String '(script:%d) Invalid Action Point, '%s'' */
void command_script_action_point_07b153(void);
/* VA: 0x7b1dd | String '(script:%d) Unknown player, '%s'' */
void command_script_player_07b1dd(void);
/* VA: 0x7b2ae | Module command.cpp procedure @ 0x07b2ae */
void command_fn_07b2ae(void);
/* VA: 0x7b2c2 | Module command.cpp procedure @ 0x07b2c2 */
void command_fn_07b2c2(void);
/* VA: 0x7b2c8 | String '(script:%d) Unknown CREATURE, '%s'' */
void command_script_creature_07b2c8(void);
/* VA: 0x7b322 | String '(script:%d) Unknown CREATURE, '%s'' */
void command_script_creature_07b322(void);
/* VA: 0x7b37c | String '(script:%d) Unknown CREATURE, '%s'' */
void command_script_creature_07b37c(void);
/* VA: 0x7b3d6 | String '(script:%d) Unknown CREATURE, '%s'' */
void command_script_creature_07b3d6(void);
/* VA: 0x7b430 | String '(script:%d) Too many conditions in script' */
void command_script_conditions_script_07b430(void);
/* VA: 0x7b627 | String '(script:%d) invalid player name, %s' */
void command_script_player_name_07b627(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x7b6df | String '(script:%d) invalid player name, %s' */
void command_script_player_name_07b6df(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x7b7d9 | String '(script:%d) invalid player name, %s' */
void command_script_player_name_07b7d9(void);
/* VA: 0x7b8d8 | String '(script:%d) invalid player name, %s' */
void command_script_player_name_07b8d8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x7b9cf | String '(script:%d) invalid player name, %s' */
void command_script_player_name_07b9cf(void);
/* VA: 0x7ba6b | Module command.cpp procedure @ 0x07ba6b */
void command_fn_07ba6b(void);
/* VA: 0x7ba80 | Module command.cpp procedure @ 0x07ba80 */
void command_fn_07ba80(void);
/* VA: 0x7ba98 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 command_process_slabmap_tile_07ba98(void);

/* === Module: compevnt.cpp (32 functions) === */
/* VA: 0x18d28 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 compevnt_process_dungeon_room_018d28(void);
/* VA: 0x18dcd | Module compevnt.cpp procedure @ 0x018dcd */
undefined4 compevnt_fn_018dcd(void);
/* VA: 0x18e3c | Looks up Thing* in g_thing_ptrs[2048] and updates state */
int compevnt_process_thing_entity_018e3c(void);
/* VA: 0x18ed3 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined4 compevnt_roll_action_random_018ed3(void);
/* VA: 0x18ffe | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined4 compevnt_roll_action_random_018ffe(void);
/* VA: 0x1916a | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 compevnt_update_creature_and_thing_01916a(void);
/* VA: 0x192c1 | Module compevnt.cpp procedure @ 0x0192c1 */
undefined4 compevnt_fn_0192c1(void);
/* VA: 0x1931c | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 compevnt_process_dungeon_room_01931c(void);
/* VA: 0x194e8 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 compevnt_process_dungeon_room_0194e8(void);
/* VA: 0x197a9 | Module compevnt.cpp procedure @ 0x0197a9 */
undefined4 compevnt_fn_0197a9(void);
/* VA: 0x198cd | Reads/modifies SlabMap[85x85] tile entry */
undefined4 compevnt_process_slabmap_tile_0198cd(void);
/* VA: 0x19af8 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 compevnt_process_dungeon_room_019af8(void);
/* VA: 0x19d32 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 compevnt_update_creature_and_thing_019d32(void);
/* VA: 0x19fb4 | String 'Unhandled Event Type' */
void compevnt_unhandled_event_type_019fb4(void);
/* VA: 0x1a08c | Module compevnt.cpp procedure @ 0x01a08c */
undefined4 compevnt_fn_01a08c(void);
/* VA: 0x1a158 | Module compevnt.cpp procedure @ 0x01a158 */
undefined4 compevnt_fn_01a158(void);
/* VA: 0x1a2d7 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 compevnt_update_creature_and_thing_01a2d7(void);
/* VA: 0x1a384 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 compevnt_update_creature_and_thing_01a384(void);
/* VA: 0x1a4a1 | Module compevnt.cpp procedure @ 0x01a4a1 */
undefined4 compevnt_fn_01a4a1(void);
/* VA: 0x1a60d | Module compevnt.cpp procedure @ 0x01a60d */
undefined4 compevnt_fn_01a60d(void);
/* VA: 0x1a68b | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 compevnt_update_creature_and_thing_01a68b(void);
/* VA: 0x1a85a | Module compevnt.cpp procedure @ 0x01a85a */
undefined4 compevnt_fn_01a85a(void);
/* VA: 0x1a8cb | Module compevnt.cpp procedure @ 0x01a8cb */
undefined4 compevnt_fn_01a8cb(void);
/* VA: 0x1a970 | Module compevnt.cpp procedure @ 0x01a970 */
undefined8 compevnt_fn_01a970(void);
/* VA: 0x1aa01 | Module compevnt.cpp procedure @ 0x01aa01 */
undefined8 compevnt_fn_01aa01(void);
/* VA: 0x1aabb | Module compevnt.cpp procedure @ 0x01aabb */
void compevnt_fn_01aabb(void);
/* VA: 0x1aada | Module compevnt.cpp procedure @ 0x01aada */
void compevnt_fn_01aada(void);
/* VA: 0x1aaf5 | Module compevnt.cpp procedure @ 0x01aaf5 */
void compevnt_fn_01aaf5(void);
/* VA: 0x1ab14 | Module compevnt.cpp procedure @ 0x01ab14 */
undefined4 compevnt_fn_01ab14(void);
/* VA: 0x1ab74 | Operates on Room structure in g_rooms (stride 0x45) */
int compevnt_process_dungeon_room_01ab74(void);
/* VA: 0x1ac13 | Module compevnt.cpp procedure @ 0x01ac13 */
undefined4 compevnt_fn_01ac13(void);
/* VA: 0x1ac93 | Module compevnt.cpp procedure @ 0x01ac93 */
undefined4 compevnt_fn_01ac93(void);

/* === Module: comptask.cpp (53 functions) === */
/* VA: 0x1ad1f | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 comptask_process_dungeon_room_01ad1f(void);
/* VA: 0x1ae5c | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 comptask_update_player_dungeon_01ae5c(void);
/* VA: 0x1b119 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 comptask_process_dungeon_room_01b119(void);
/* VA: 0x1b15c | Module comptask.cpp procedure @ 0x01b15c */
undefined4 comptask_fn_01b15c(void);
/* VA: 0x1b35a | Module comptask.cpp procedure @ 0x01b35a */
undefined4 comptask_fn_01b35a(void);
/* VA: 0x1b3ad | Module comptask.cpp procedure @ 0x01b3ad */
undefined4 comptask_fn_01b3ad(void);
/* VA: 0x1b3d0 | Module comptask.cpp procedure @ 0x01b3d0 */
undefined4 comptask_fn_01b3d0(void);
/* VA: 0x1b3d7 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 comptask_process_slabmap_tile_01b3d7(void);
/* VA: 0x1b561 | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 comptask_update_player_dungeon_01b561(void);
/* VA: 0x1b629 | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 comptask_update_player_dungeon_01b629(void);
/* VA: 0x1b721 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
void comptask_roll_action_random_01b721(void);
/* VA: 0x1b762 | Module comptask.cpp procedure @ 0x01b762 */
undefined4 comptask_fn_01b762(void);
/* VA: 0x1b8a5 | Module comptask.cpp procedure @ 0x01b8a5 */
undefined4 comptask_fn_01b8a5(void);
/* VA: 0x1b8b3 | Module comptask.cpp procedure @ 0x01b8b3 */
undefined4 comptask_fn_01b8b3(void);
/* VA: 0x1b8b6 | Module comptask.cpp procedure @ 0x01b8b6 */
undefined4 comptask_fn_01b8b6(void);
/* VA: 0x1b8ba | Module comptask.cpp procedure @ 0x01b8ba */
undefined4 comptask_fn_01b8ba(void);
/* VA: 0x1b8c4 | Module comptask.cpp procedure @ 0x01b8c4 */
undefined4 comptask_fn_01b8c4(void);
/* VA: 0x1b8ff | String 'Bad Computer Task State' */
undefined8 comptask_computer_task_state_01b8ff(void);
/* VA: 0x1b978 | Module comptask.cpp procedure @ 0x01b978 */
void comptask_fn_01b978(void);
/* VA: 0x1b9ad | Module comptask.cpp procedure @ 0x01b9ad */
void comptask_fn_01b9ad(void);
/* VA: 0x1b9db | Module comptask.cpp procedure @ 0x01b9db */
void comptask_fn_01b9db(void);
/* VA: 0x1ba1e | Module comptask.cpp procedure @ 0x01ba1e */
void comptask_fn_01ba1e(void);
/* VA: 0x1ba46 | Module comptask.cpp procedure @ 0x01ba46 */
byte * comptask_fn_01ba46(void);
/* VA: 0x1bb1b | Module comptask.cpp procedure @ 0x01bb1b */
undefined4 comptask_fn_01bb1b(void);
/* VA: 0x1bb96 | Module comptask.cpp procedure @ 0x01bb96 */
undefined4 comptask_fn_01bb96(void);
/* VA: 0x1bc3e | Reads/modifies Map[256x256] subtile data */
undefined4 comptask_process_map_subtile_01bc3e(void);
/* VA: 0x1be21 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 comptask_process_slabmap_tile_01be21(void);
/* VA: 0x1bf7d | Reads/modifies SlabMap[85x85] tile entry */
undefined4 comptask_process_slabmap_tile_01bf7d(void);
/* VA: 0x1c0ec | Operates on Room structure in g_rooms (stride 0x45) */
uint comptask_process_dungeon_room_01c0ec(void);
/* VA: 0x1c1f1 | Reads/modifies SlabMap[85x85] tile entry */
uint comptask_process_slabmap_tile_01c1f1(void);
/* VA: 0x1c3d3 | Reads/modifies SlabMap[85x85] tile entry */
int comptask_process_slabmap_tile_01c3d3(void);
/* VA: 0x1c563 | Module comptask.cpp procedure @ 0x01c563 */
undefined4 comptask_fn_01c563(void);
/* VA: 0x1c73c | Module comptask.cpp procedure @ 0x01c73c */
undefined4 comptask_fn_01c73c(void);
/* VA: 0x1c7fa | Module comptask.cpp procedure @ 0x01c7fa */
undefined4 comptask_fn_01c7fa(void);
/* VA: 0x1c897 | Module comptask.cpp procedure @ 0x01c897 */
undefined4 comptask_fn_01c897(void);
/* VA: 0x1c92a | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 comptask_update_creature_and_thing_01c92a(void);
/* VA: 0x1ca08 | Module comptask.cpp procedure @ 0x01ca08 */
uint comptask_fn_01ca08(void);
/* VA: 0x1ca68 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 comptask_process_thing_entity_01ca68(void);
/* VA: 0x1caf6 | String 'Bad set Task State' */
undefined4 comptask_set_task_state_01caf6(void);
/* VA: 0x1cbd9 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 comptask_process_thing_entity_01cbd9(void);
/* VA: 0x1cc83 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 comptask_process_dungeon_room_01cc83(void);
/* VA: 0x1cd80 | String 'Unknown SELL_ITEM type' */
undefined4 comptask_sell_item_type_01cd80(void);
/* VA: 0x1cf1c | Operates on Room structure in g_rooms (stride 0x45) */
int comptask_process_dungeon_room_01cf1c(uint param_1);
/* VA: 0x1d10e | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
byte * comptask_roll_action_random_01d10e(undefined4 param_1,ushort param_2,int param_3);
/* VA: 0x1d2ff | Module comptask.cpp procedure @ 0x01d2ff */
void comptask_fn_01d2ff(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4);
/* VA: 0x1d34b | Module comptask.cpp procedure @ 0x01d34b */
void comptask_fn_01d34b(undefined4 param_1,undefined2 param_2,undefined4 param_3);
/* VA: 0x1d391 | Operates on Room structure in g_rooms (stride 0x45) */
uint comptask_process_dungeon_room_01d391(void);
/* VA: 0x1d5a1 | Operates on Room structure in g_rooms (stride 0x45) */
int comptask_process_dungeon_room_01d5a1(void);
/* VA: 0x1d5f7 | Module comptask.cpp procedure @ 0x01d5f7 */
undefined4 comptask_fn_01d5f7(void);
/* VA: 0x1d601 | Operates on Room structure in g_rooms (stride 0x45) */
int comptask_process_dungeon_room_01d601(void);
/* VA: 0x1d807 | Module comptask.cpp procedure @ 0x01d807 */
undefined4 comptask_fn_01d807(void);
/* VA: 0x1d8a1 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 comptask_process_slabmap_tile_01d8a1(void);
/* VA: 0x1df28 | Module comptask.cpp procedure @ 0x01df28 */
void comptask_fn_01df28(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4);

/* === Module: comptool.cpp (30 functions) === */
/* VA: 0x1d917 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 comptool_update_creature_and_thing_01d917(void);
/* VA: 0x1d966 | Reads/modifies SlabMap[85x85] tile entry */
uint comptool_process_slabmap_tile_01d966(void);
/* VA: 0x1db99 | Module comptool.cpp procedure @ 0x01db99 */
undefined4 comptool_fn_01db99(void);
/* VA: 0x1dbbc | Module comptool.cpp procedure @ 0x01dbbc */
void comptool_fn_01dbbc(void);
/* VA: 0x1dd33 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 comptool_process_slabmap_tile_01dd33(void);
/* VA: 0x1ddd4 | Module comptool.cpp procedure @ 0x01ddd4 */
int comptool_fn_01ddd4(void);
/* VA: 0x1de8c | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 comptool_process_dungeon_room_01de8c(void);
/* VA: 0x1df65 | Module comptool.cpp procedure @ 0x01df65 */
undefined4 comptool_fn_01df65(int param_1);
/* VA: 0x1e061 | Module comptool.cpp procedure @ 0x01e061 */
undefined4 comptool_fn_01e061(void);
/* VA: 0x1e119 | String 'COMPUTER INVALID THING FOR HAND C%d M%d' */
undefined4 comptool_computer_thing_hand_01e119(void);
/* VA: 0x1e226 | String 'Thing Held By computer is unconsious' */
undefined4 comptool_thing_held_computer_unconsious_01e226(void);
/* VA: 0x1e342 | Module comptool.cpp procedure @ 0x01e342 */
byte * comptool_fn_01e342(void);
/* VA: 0x1e38d | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 comptool_update_player_dungeon_01e38d(void);
/* VA: 0x1e425 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * comptool_process_dungeon_room_01e425(void);
/* VA: 0x1e4a8 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
int comptool_update_creature_and_thing_01e4a8(void);
/* VA: 0x1e5de | Updates 3x3 subtile map entries for slab coordinates */
undefined4 comptool_update_slab_subtile_columns_01e5de(void);
/* VA: 0x1f0fb | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 comptool_update_creature_and_thing_01f0fb(void);
/* VA: 0x1f127 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 comptool_update_creature_and_thing_01f127(void);
/* VA: 0x1f153 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
uint comptool_update_creature_and_thing_01f153(void);
/* VA: 0x1f352 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 comptool_update_creature_and_thing_01f352(void);
/* VA: 0x1f538 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 comptool_update_creature_and_thing_01f538(void);
/* VA: 0x1f754 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
uint comptool_update_creature_and_thing_01f754(void);
/* VA: 0x1f860 | Module comptool.cpp procedure @ 0x01f860 */
undefined4 comptool_fn_01f860(void);
/* VA: 0x1f8d4 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 comptool_update_slab_subtile_columns_01f8d4(void);
/* VA: 0x1fa89 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 comptool_update_slab_subtile_columns_01fa89(void);
/* VA: 0x1fc2d | Updates 3x3 subtile map entries for slab coordinates */
undefined4 comptool_update_slab_subtile_columns_01fc2d(ushort param_1);
/* VA: 0x1ff84 | Module comptool.cpp procedure @ 0x01ff84 */
undefined4 comptool_fn_01ff84(void);
/* VA: 0x2002c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
int comptool_update_creature_and_thing_02002c(void);
/* VA: 0x2008f | Module comptool.cpp procedure @ 0x02008f */
undefined8 comptool_fn_02008f(void);
/* VA: 0x200e0 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
uint comptool_update_creature_and_thing_0200e0(void);

/* === Module: compturn.cpp (32 functions) === */
/* VA: 0x201ed | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong compturn_update_creature_and_thing_0201ed(void);
/* VA: 0x20253 | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 compturn_process_dungeon_room_020253(void);
/* VA: 0x2035a | Module compturn.cpp procedure @ 0x02035a */
undefined8 compturn_fn_02035a(void);
/* VA: 0x203f0 | Module compturn.cpp procedure @ 0x0203f0 */
byte * compturn_fn_0203f0(void);
/* VA: 0x20436 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
int compturn_update_creature_and_thing_020436(void);
/* VA: 0x20563 | Module compturn.cpp procedure @ 0x020563 */
undefined4 compturn_fn_020563(void);
/* VA: 0x20596 | Module compturn.cpp procedure @ 0x020596 */
undefined8 compturn_fn_020596(void);
/* VA: 0x20607 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 compturn_update_creature_and_thing_020607(void);
/* VA: 0x20669 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 compturn_update_creature_and_thing_020669(void);
/* VA: 0x206b2 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
byte * compturn_update_creature_and_thing_0206b2(void);
/* VA: 0x207b3 | Operates on Room structure in g_rooms (stride 0x45) */
int compturn_process_dungeon_room_0207b3(void);
/* VA: 0x20826 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
uint compturn_update_creature_and_thing_020826(void);
/* VA: 0x20ea3 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * compturn_process_dungeon_room_020ea3(void);
/* VA: 0x21008 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void compturn_update_player_view_state_021008(void);
/* VA: 0x21056 | Accesses per-player Dungeon state (stride 0x1508) */
void compturn_update_player_dungeon_021056(void);
/* VA: 0x21216 | Accesses per-player Dungeon state (stride 0x1508) */
void compturn_update_player_dungeon_021216(void);
/* VA: 0x21345 | Module compturn.cpp procedure @ 0x021345 */
int compturn_fn_021345(void);
/* VA: 0x21369 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void compturn_update_player_view_state_021369(void);
/* VA: 0x21416 | String 'No Process for a computer player' */
void compturn_process_computer_player_021416(void);
/* VA: 0x21515 | Module compturn.cpp procedure @ 0x021515 */
undefined4 compturn_fn_021515(void);
/* VA: 0x21527 | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 compturn_update_player_dungeon_021527(void);
/* VA: 0x21548 | Updates 3x3 subtile map entries for slab coordinates */
int compturn_update_slab_subtile_columns_021548(char param_1);
/* VA: 0x216d8 | Updates 3x3 subtile map entries for slab coordinates */
ushort compturn_update_slab_subtile_columns_0216d8(ushort param_1,char param_2,ushort param_3);
/* VA: 0x2213c | Reads/modifies SlabMap[85x85] tile entry */
void compturn_process_slabmap_tile_02213c(void);
/* VA: 0x22414 | Module compturn.cpp procedure @ 0x022414 */
void compturn_fn_022414(void);
/* VA: 0x2245b | Module compturn.cpp procedure @ 0x02245b */
void compturn_fn_02245b(void);
/* VA: 0x2252b | Module compturn.cpp procedure @ 0x02252b */
undefined4 compturn_fn_02252b(void);
/* VA: 0x225c0 | Module compturn.cpp procedure @ 0x0225c0 */
undefined8 compturn_fn_0225c0(void);
/* VA: 0x225fc | Module compturn.cpp procedure @ 0x0225fc */
longlong compturn_fn_0225fc(void);
/* VA: 0x22660 | Reads/modifies Map[256x256] subtile data */
undefined8 compturn_process_map_subtile_022660(void);
/* VA: 0x228a5 | Module compturn.cpp procedure @ 0x0228a5 */
undefined8 compturn_fn_0228a5(void);
/* VA: 0x228b1 | Module compturn.cpp procedure @ 0x0228b1 */
longlong compturn_fn_0228b1(void);

/* === Module: creature.cpp (93 functions) === */
/* VA: 0x7df64 | Updates 3x3 subtile map entries for slab coordinates */
int creature_update_slab_subtile_columns_07df64(void);
/* VA: 0x7e134 | Module creature.cpp procedure @ 0x07e134 */
undefined4 creature_fn_07e134(void);
/* VA: 0x7e868 | Module creature.cpp procedure @ 0x07e868 */
uint creature_fn_07e868(void);
/* VA: 0x7f228 | Module creature.cpp procedure @ 0x07f228 */
undefined4 creature_fn_07f228(void);
/* VA: 0x7f290 | Module creature.cpp procedure @ 0x07f290 */
undefined4 creature_fn_07f290(void);
/* VA: 0x7f310 | Module creature.cpp procedure @ 0x07f310 */
int creature_fn_07f310(void);
/* VA: 0x7f690 | Reads/modifies Map[256x256] subtile data */
int creature_process_map_subtile_07f690(code *param_1);
/* VA: 0x7f730 | Module creature.cpp procedure @ 0x07f730 */
int creature_fn_07f730(void);
/* VA: 0x7f804 | Module creature.cpp procedure @ 0x07f804 */
int creature_fn_07f804(void);
/* VA: 0x7f8e0 | Module creature.cpp procedure @ 0x07f8e0 */
int creature_fn_07f8e0(void);
/* VA: 0x7f9e4 | Checks Thing->class_id == 5 (Creature) and processes state */
longlong creature_handle_creature_thing_07f9e4(void);
/* VA: 0x7f9ec | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong creature_update_creature_control_07f9ec(void);
/* VA: 0x7f9f4 | Module creature.cpp procedure @ 0x07f9f4 */
void creature_fn_07f9f4(void);
/* VA: 0x7fa04 | Module creature.cpp procedure @ 0x07fa04 */
void creature_fn_07fa04(void);
/* VA: 0x7fa14 | Checks Thing->class_id == 1 (Object) and processes state */
undefined4 creature_handle_object_thing_07fa14(void);
/* VA: 0x7fa3c | Module creature.cpp procedure @ 0x07fa3c */
undefined4 creature_fn_07fa3c(void);
/* VA: 0x7fac8 | String 'Cannot create dead thing' */
void creature_create_dead_thing_07fac8(void);
/* VA: 0x80284 | String 'Cannot create dead thing' */
void creature_create_dead_thing_080284(void);
/* VA: 0x804d8 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void creature_process_thing_entity_0804d8(void);
/* VA: 0x8057c | String 'Cannot create dead thing' */
void creature_create_dead_thing_08057c(void);
/* VA: 0x8063c | String 'Cannot create dead thing' */
void creature_create_dead_thing_08063c(void);
/* VA: 0x806fc | String 'Cannot create dead thing' */
void creature_create_dead_thing_0806fc(void);
/* VA: 0x808b8 | String 'Could not create dead thing.' */
byte * creature_could_create_dead_thing_0808b8(void);
/* VA: 0x809d0 | String 'Cannot control creature as passenger (owned by a different p' */
void creature_control_creature_as_passenger_0809d0(void);
/* VA: 0x80a94 | String 'Cannot allocate light to new hero' */
undefined4 creature_allocate_light_new_hero_080a94(void);
/* VA: 0x80c84 | String 'Cannot allocate light to new hero' */
int creature_allocate_light_new_hero_080c84(void);
/* VA: 0x80e04 | Module creature.cpp procedure @ 0x080e04 */
void creature_fn_080e04(void);
/* VA: 0x80fbc | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_080fbc(void);
/* VA: 0x811d8 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 creature_update_creature_and_thing_0811d8(void);
/* VA: 0x81a2c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void creature_update_creature_and_thing_081a2c(void);
/* VA: 0x81c10 | Module creature.cpp procedure @ 0x081c10 */
void creature_fn_081c10(void);
/* VA: 0x81c44 | Module creature.cpp procedure @ 0x081c44 */
void creature_fn_081c44(void);
/* VA: 0x81c70 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
uint creature_update_creature_control_081c70(void);
/* VA: 0x81cec | Module creature.cpp procedure @ 0x081cec */
void creature_fn_081cec(void);
/* VA: 0x81d00 | Module creature.cpp procedure @ 0x081d00 */
undefined8 creature_fn_081d00(void);
/* VA: 0x81d84 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 creature_update_creature_control_081d84(void);
/* VA: 0x81dd8 | Module creature.cpp procedure @ 0x081dd8 */
undefined8 creature_fn_081dd8(void);
/* VA: 0x81e5c | Module creature.cpp procedure @ 0x081e5c */
longlong creature_fn_081e5c(void);
/* VA: 0x81e7c | String 'Cannot select thing for information' */
undefined4 creature_select_thing_information_081e7c(void);
/* VA: 0x81eac | Module creature.cpp procedure @ 0x081eac */
void creature_fn_081eac(void);
/* VA: 0x81ec8 | Module creature.cpp procedure @ 0x081ec8 */
void creature_fn_081ec8(void);
/* VA: 0x81ed4 | Module creature.cpp procedure @ 0x081ed4 */
void creature_fn_081ed4(void);
/* VA: 0x81ef4 | Module creature.cpp procedure @ 0x081ef4 */
void creature_fn_081ef4(void);
/* VA: 0x81f04 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong creature_update_creature_control_081f04(void);
/* VA: 0x81f5c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_081f5c(void);
/* VA: 0x81fec | String 'COULD NOT CREATE CREATURE' */
undefined8 creature_could_create_creature_081fec(void);
/* VA: 0x82204 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_082204(void);
/* VA: 0x8240c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_08240c(void);
/* VA: 0x82468 | Accesses per-player Dungeon state (stride 0x1508) */
void creature_update_player_dungeon_082468(void);
/* VA: 0x824dc | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_0824dc(void);
/* VA: 0x826a0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_0826a0(void);
/* VA: 0x82710 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_082710(void);
/* VA: 0x82774 | Module creature.cpp procedure @ 0x082774 */
undefined1 creature_fn_082774(void);
/* VA: 0x827fc | Module creature.cpp procedure @ 0x0827fc */
bool creature_fn_0827fc(void);
/* VA: 0x82828 | Reads/modifies Map[256x256] subtile data */
undefined4 creature_process_map_subtile_082828(void);
/* VA: 0x82a04 | Reads/modifies Map[256x256] subtile data */
void creature_process_map_subtile_082a04(void);
/* VA: 0x82c30 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 creature_process_slabmap_tile_082c30(void);
/* VA: 0x82cac | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void creature_update_creature_and_thing_082cac(void);
/* VA: 0x83b20 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
byte * creature_update_creature_and_thing_083b20(void);
/* VA: 0x83d30 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
byte * creature_update_creature_and_thing_083d30(void);
/* VA: 0x83f40 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
byte * creature_update_creature_and_thing_083f40(void);
/* VA: 0x844f4 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined2 creature_update_creature_and_thing_0844f4(void);
/* VA: 0x84704 | Module creature.cpp procedure @ 0x084704 */
void creature_fn_084704(void);
/* VA: 0x84750 | Accesses per-player Dungeon state (stride 0x1508) */
int creature_update_player_dungeon_084750(void);
/* VA: 0x847d4 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 creature_process_thing_entity_0847d4(void);
/* VA: 0x8485c | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 creature_update_player_dungeon_08485c(void);
/* VA: 0x84904 | String 'INVALID THING FOR HAND' */
undefined4 creature_thing_hand_084904(void);
/* VA: 0x849c8 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 creature_process_thing_entity_0849c8(void);
/* VA: 0x84d98 | Module creature.cpp procedure @ 0x084d98 */
uint creature_fn_084d98(void);
/* VA: 0x84e0c | String 'Thing is already dragged by something' */
void creature_thing_already_dragged_something_084e0c(void);
/* VA: 0x84e8c | String 'Thing is not dragged by something' */
void creature_thing_dragged_something_084e8c(void);
/* VA: 0x84f04 | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 creature_update_player_dungeon_084f04(void);
/* VA: 0x84ff8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 creature_update_creature_control_084ff8(void);
/* VA: 0x85220 | Module creature.cpp procedure @ 0x085220 */
undefined4 creature_fn_085220(void);
/* VA: 0x85450 | Reads/modifies Map[256x256] subtile data */
byte * creature_process_map_subtile_085450(void);
/* VA: 0x85598 | Reads/modifies Map[256x256] subtile data */
byte * creature_process_map_subtile_085598(void);
/* VA: 0x856f8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_0856f8(void);
/* VA: 0x85890 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 creature_update_creature_control_085890(void);
/* VA: 0x85954 | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong creature_update_player_view_state_085954(void);
/* VA: 0x859fc | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 creature_process_thing_entity_0859fc(void);
/* VA: 0x85aa4 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void creature_update_player_view_state_085aa4(void);
/* VA: 0x85ad4 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void creature_process_thing_entity_085ad4(void);
/* VA: 0x85b1c | Looks up Thing* in g_thing_ptrs[2048] and updates state */
longlong creature_process_thing_entity_085b1c(void);
/* VA: 0x85ba4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 creature_update_creature_control_085ba4(void);
/* VA: 0x85cc4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void creature_update_creature_control_085cc4(void);
/* VA: 0x85df8 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void creature_process_thing_entity_085df8(void);
/* VA: 0x85f80 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void creature_update_player_view_state_085f80(void);
/* VA: 0x8608c | String 'HOW CAN HERO HAVE TEND TO IMPRISON' */
undefined4 creature_how_hero_have_tend_08608c(char param_1,char param_2);
/* VA: 0x865b8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 creature_update_creature_control_0865b8(void);
/* VA: 0x866f8 | Module creature.cpp procedure @ 0x0866f8 */
undefined4 creature_fn_0866f8(void);
/* VA: 0x86780 | Module creature.cpp procedure @ 0x086780 */
void creature_fn_086780(void);
/* VA: 0x86830 | Module creature.cpp procedure @ 0x086830 */
undefined4 creature_fn_086830(void);
/* VA: 0x8685c | String 'Dene says a big 'Hello' to Goth Buns, Tarts and Barbies' */
void creature_dene_says_big_hello_08685c(void);

/* === Module: door.cpp (21 functions) === */
/* VA: 0x22905 | Module door.cpp procedure @ 0x022905 */
longlong door_fn_022905(void);
/* VA: 0x22933 | Module door.cpp procedure @ 0x022933 */
undefined4 door_fn_022933(void);
/* VA: 0x229e4 | Module door.cpp procedure @ 0x0229e4 */
undefined8 door_fn_0229e4(void);
/* VA: 0x22a72 | Reads/modifies Map[256x256] subtile data */
undefined8 door_process_map_subtile_022a72(void);
/* VA: 0x22b3a | Reads/modifies Map[256x256] subtile data */
uint door_process_map_subtile_022b3a(void);
/* VA: 0x22b94 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 door_update_player_view_state_022b94(void);
/* VA: 0x22c2a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void door_update_creature_control_022c2a(void);
/* VA: 0x22d5c | Reads/modifies Map[256x256] subtile data */
undefined4 door_process_map_subtile_022d5c(void);
/* VA: 0x22e62 | Reads/modifies SlabMap[85x85] tile entry */
uint door_process_slabmap_tile_022e62(void);
/* VA: 0x22f53 | Reads/modifies SlabMap[85x85] tile entry */
undefined8 door_process_slabmap_tile_022f53(void);
/* VA: 0x22fe5 | Module door.cpp procedure @ 0x022fe5 */
undefined8 door_fn_022fe5(void);
/* VA: 0x23014 | Module door.cpp procedure @ 0x023014 */
undefined8 door_fn_023014(void);
/* VA: 0x23042 | Module door.cpp procedure @ 0x023042 */
void door_fn_023042(void);
/* VA: 0x230d3 | String 'Cannot remove keyhole' */
void door_remove_keyhole_0230d3(void);
/* VA: 0x2313c | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void door_process_thing_entity_02313c(void);
/* VA: 0x23210 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
int door_process_thing_entity_023210(void);
/* VA: 0x23250 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void door_update_creature_and_thing_023250(void);
/* VA: 0x23291 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void door_update_creature_and_thing_023291(void);
/* VA: 0x23476 | Module door.cpp procedure @ 0x023476 */
void door_fn_023476(void);
/* VA: 0x2347d | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void door_process_thing_entity_02347d(void);
/* VA: 0x23519 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void door_process_thing_entity_023519(void);

/* === Module: draw.cpp (68 functions) === */
/* VA: 0x872a4 | Module draw.cpp procedure @ 0x0872a4 */
void draw_fn_0872a4(void);
/* VA: 0x872b8 | Accesses per-player Dungeon state (stride 0x1508) */
void draw_update_player_dungeon_0872b8(void);
/* VA: 0x87694 | Module draw.cpp procedure @ 0x087694 */
void draw_fn_087694(void);
/* VA: 0x87870 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void draw_update_creature_and_thing_087870(void);
/* VA: 0x87da4 | String 'Unhandled screen mode' */
void draw_unhandled_screen_mode_087da4(void);
/* VA: 0x880d0 | Module draw.cpp procedure @ 0x0880d0 */
void draw_fn_0880d0(void);
/* VA: 0x882b4 | Updates 3x3 subtile map entries for slab coordinates */
void draw_update_slab_subtile_columns_0882b4(void);
/* VA: 0x88698 | Updates 3x3 subtile map entries for slab coordinates */
void draw_update_slab_subtile_columns_088698(void);
/* VA: 0x88c6c | Reads/modifies Map[256x256] subtile data */
uint draw_process_map_subtile_088c6c(void);
/* VA: 0x88e2c | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void draw_process_thing_entity_088e2c(void);
/* VA: 0x89080 | Module draw.cpp procedure @ 0x089080 */
void draw_fn_089080(int *param_1);
/* VA: 0x890bc | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void draw_update_creature_and_thing_0890bc(void);
/* VA: 0x89ae8 | Accesses per-player Dungeon state (stride 0x1508) */
void draw_update_player_dungeon_089ae8(int param_1,int param_2);
/* VA: 0x8a194 | Accesses per-player Dungeon state (stride 0x1508) */
void draw_update_player_dungeon_08a194(void);
/* VA: 0x8a9f4 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_08a9f4(void);
/* VA: 0x8abc4 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_08abc4(void);
/* VA: 0x8ac9c | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_08ac9c(void);
/* VA: 0x8ae00 | String 'No frames different between views C%d, M%d, A%d, B%d' */
void draw_frames_different_between_views_08ae00(void);
/* VA: 0x8aee4 | String 'No frames different between views C%d, M%d, A%d, B%d' */
void draw_frames_different_between_views_08aee4(void);
/* VA: 0x8afd8 | Updates 3x3 subtile map entries for slab coordinates */
void draw_update_slab_subtile_columns_08afd8(void);
/* VA: 0x8bb2c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
int draw_update_creature_and_thing_08bb2c(void);
/* VA: 0x8bde8 | Reads/modifies Map[256x256] subtile data */
void draw_process_map_subtile_08bde8(void);
/* VA: 0x8cc24 | String 'Cannot load palette file %s' */
void draw_load_palette_file_08cc24(void);
/* VA: 0x8ccec | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
void draw_roll_action_random_08ccec(undefined1 param_1);
/* VA: 0x8cdf4 | Configures font/flags and draws text on screen */
void draw_draw_text_overlay_08cdf4(void);
/* VA: 0x8d220 | Module draw.cpp procedure @ 0x08d220 */
void draw_fn_08d220(void);
/* VA: 0x8d348 | Configures font/flags and draws text on screen */
void draw_draw_text_overlay_08d348(void);
/* VA: 0x8d740 | Module draw.cpp procedure @ 0x08d740 */
void draw_fn_08d740(void);
/* VA: 0x8d998 | Configures font/flags and draws text on screen */
void draw_draw_text_overlay_08d998(void);
/* VA: 0x8dcd0 | Configures font/flags and draws text on screen */
void draw_draw_text_overlay_08dcd0(void);
/* VA: 0x8de90 | Module draw.cpp procedure @ 0x08de90 */
void draw_fn_08de90(void);
/* VA: 0x8eadc | Module draw.cpp procedure @ 0x08eadc */
void draw_fn_08eadc(int param_1,int param_2);
/* VA: 0x8ebb0 | Configures font/flags and draws text on screen */
void draw_draw_text_overlay_08ebb0(void);
/* VA: 0x8ecb0 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_08ecb0(void);
/* VA: 0x8ed2c | Operates on Room structure in g_rooms (stride 0x45) */
void draw_process_dungeon_room_08ed2c(void);
/* VA: 0x8ed84 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 draw_update_player_view_state_08ed84(void);
/* VA: 0x8ee8c | Accesses per-player Dungeon state (stride 0x1508) */
ulonglong draw_update_player_dungeon_08ee8c(void);
/* VA: 0x8eebc | Accesses per-player Dungeon state (stride 0x1508) */
ulonglong draw_update_player_dungeon_08eebc(void);
/* VA: 0x8eeec | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void draw_process_thing_entity_08eeec(void);
/* VA: 0x8f190 | String 'Dene says a big 'Hello' to Goth Buns, Tarts and Barbies' */
void draw_dene_says_big_hello_08f190(void);
/* VA: 0x8f320 | Updates 3x3 subtile map entries for slab coordinates */
void draw_update_slab_subtile_columns_08f320(void);
/* VA: 0x8f518 | Updates 3x3 subtile map entries for slab coordinates */
undefined1 draw_update_slab_subtile_columns_08f518(void);
/* VA: 0x8f75c | Updates 3x3 subtile map entries for slab coordinates */
undefined4 draw_update_slab_subtile_columns_08f75c(void);
/* VA: 0x8f924 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 draw_update_slab_subtile_columns_08f924(void);
/* VA: 0x8fb10 | Updates 3x3 subtile map entries for slab coordinates */
void draw_update_slab_subtile_columns_08fb10(void);
/* VA: 0x8fd14 | Updates 3x3 subtile map entries for slab coordinates */
void draw_update_slab_subtile_columns_08fd14(int param_1);
/* VA: 0x8feb4 | Reads/modifies Map[256x256] subtile data */
void draw_process_map_subtile_08feb4(void);
/* VA: 0x902e4 | Reads/modifies Map[256x256] subtile data */
void draw_process_map_subtile_0902e4(int *param_1,int *param_2,int *param_3,int *param_4);
/* VA: 0x90610 | Module draw.cpp procedure @ 0x090610 */
void draw_fn_090610(void);
/* VA: 0x90720 | Module draw.cpp procedure @ 0x090720 */
undefined4 draw_fn_090720(void);
/* VA: 0x907d8 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 draw_update_player_view_state_0907d8(void);
/* VA: 0x90a50 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 draw_update_player_view_state_090a50(void);
/* VA: 0x90c14 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_090c14(void);
/* VA: 0x915dc | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_0915dc(undefined1 param_1);
/* VA: 0x9164c | Module draw.cpp procedure @ 0x09164c */
void draw_fn_09164c(void);
/* VA: 0x929c0 | Module draw.cpp procedure @ 0x0929c0 */
void draw_fn_0929c0(void);
/* VA: 0x92be0 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_092be0(void);
/* VA: 0x92d10 | Reads/modifies Map[256x256] subtile data */
void draw_process_map_subtile_092d10(void);
/* VA: 0x93120 | Reads/modifies Map[256x256] subtile data */
void draw_process_map_subtile_093120(void);
/* VA: 0x938d8 | Reads/modifies Map[256x256] subtile data */
void draw_process_map_subtile_0938d8(void);
/* VA: 0x940dc | Accesses per-player PlayerInfo state (stride 0x4ef) */
void draw_update_player_view_state_0940dc(void);
/* VA: 0x94218 | Module draw.cpp procedure @ 0x094218 */
void draw_fn_094218(void);
/* VA: 0x943c0 | Module draw.cpp procedure @ 0x0943c0 */
void draw_fn_0943c0(void);
/* VA: 0x94594 | Module draw.cpp procedure @ 0x094594 */
void draw_fn_094594(void);
/* VA: 0x947b8 | Module draw.cpp procedure @ 0x0947b8 */
void draw_fn_0947b8(void);
/* VA: 0x94820 | Module draw.cpp procedure @ 0x094820 */
void draw_fn_094820(void);
/* VA: 0x94824 | Module draw.cpp procedure @ 0x094824 */
void draw_fn_094824(int param_1);
/* VA: 0xa43b4 | Reads/modifies Map[256x256] subtile data */
void draw_process_map_subtile_0a43b4(void);

/* === Module: dungeon.cpp (14 functions) === */
/* VA: 0x235e8 | Accesses per-player Dungeon state (stride 0x1508) */
void dungeon_update_player_dungeon_0235e8(void);
/* VA: 0x236ad | Accesses per-player PlayerInfo state (stride 0x4ef) */
void dungeon_update_player_view_state_0236ad(void);
/* VA: 0x2371b | Accesses per-player Dungeon state (stride 0x1508) */
void dungeon_update_player_dungeon_02371b(void);
/* VA: 0x23734 | Accesses per-player Dungeon state (stride 0x1508) */
void dungeon_update_player_dungeon_023734(void);
/* VA: 0x23754 | Accesses per-player Dungeon state (stride 0x1508) */
void dungeon_update_player_dungeon_023754(void);
/* VA: 0x23787 | Accesses per-player Dungeon state (stride 0x1508) */
void dungeon_update_player_dungeon_023787(void);
/* VA: 0x237c6 | Reads/modifies SlabMap[85x85] tile entry */
undefined8 dungeon_process_slabmap_tile_0237c6(void);
/* VA: 0x23868 | String 'Cannot remove %d: Reserve %d' */
int dungeon_remove_reserve_023868(void);
/* VA: 0x239ee | String 'Attempt to get random position in neutral dungeon' */
undefined4 dungeon_attempt_get_random_position_0239ee(void);
/* VA: 0x23a48 | Accesses per-player Dungeon state (stride 0x1508) */
void dungeon_update_player_dungeon_023a48(void);
/* VA: 0x23ad0 | Reads/modifies Map[256x256] subtile data */
void dungeon_process_map_subtile_023ad0(void);
/* VA: 0x23de2 | Updates 3x3 subtile map entries for slab coordinates */
void dungeon_update_slab_subtile_columns_023de2(void);
/* VA: 0x23e65 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined1 dungeon_process_thing_entity_023e65(void);
/* VA: 0x23ece | Updates 3x3 subtile map entries for slab coordinates */
void dungeon_update_slab_subtile_columns_023ece(void);

/* === Module: effect.cpp (26 functions) === */
/* VA: 0x24344 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void effect_process_thing_entity_024344(void);
/* VA: 0x2457b | Reads/modifies Map[256x256] subtile data */
void effect_process_map_subtile_02457b(void);
/* VA: 0x246f2 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 effect_update_slab_subtile_columns_0246f2(void);
/* VA: 0x248e5 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 effect_process_thing_entity_0248e5(void);
/* VA: 0x24998 | String 'Cannot allocate light for effect' */
int effect_allocate_light_effect_024998(void);
/* VA: 0x24ab9 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 effect_process_thing_entity_024ab9(void);
/* VA: 0x250ef | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
void effect_roll_action_random_0250ef(void);
/* VA: 0x25504 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
void effect_roll_action_random_025504(void);
/* VA: 0x25780 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void effect_update_player_view_state_025780(void);
/* VA: 0x2585f | String 'Illegal hit thing type for explosion' */
void effect_illegal_hit_thing_type_02585f(byte param_1);
/* VA: 0x25af0 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void effect_update_creature_and_thing_025af0(byte param_1);
/* VA: 0x25cf7 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void effect_update_creature_and_thing_025cf7(void);
/* VA: 0x25f6f | Module effect.cpp procedure @ 0x025f6f */
void effect_fn_025f6f(void);
/* VA: 0x25fbb | Module effect.cpp procedure @ 0x025fbb */
void effect_fn_025fbb(void);
/* VA: 0x26007 | Module effect.cpp procedure @ 0x026007 */
void effect_fn_026007(void);
/* VA: 0x26068 | Module effect.cpp procedure @ 0x026068 */
void effect_fn_026068(void);
/* VA: 0x2606f | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 effect_process_thing_entity_02606f(void);
/* VA: 0x263c9 | Module effect.cpp procedure @ 0x0263c9 */
void effect_fn_0263c9(void);
/* VA: 0x2649e | Module effect.cpp procedure @ 0x02649e */
void effect_fn_02649e(void);
/* VA: 0x2649f | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void effect_update_creature_and_thing_02649f(void);
/* VA: 0x265d3 | String 'Thing has no hit thing type' */
undefined4 effect_thing_has_hit_thing_0265d3(void);
/* VA: 0x2666b | Accesses per-player PlayerInfo state (stride 0x4ef) */
ulonglong effect_update_player_view_state_02666b(void);
/* VA: 0x266af | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 effect_update_creature_and_thing_0266af(void);
/* VA: 0x26795 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void effect_process_thing_entity_026795(void);
/* VA: 0x2683b | Module effect.cpp procedure @ 0x02683b */
bool effect_fn_02683b(void);
/* VA: 0x26987 | Reads/modifies Map[256x256] subtile data */
void effect_process_map_subtile_026987(void);

/* === Module: engine3.cpp (36 functions) === */
/* VA: 0x948a0 | Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 0) */
void engine3_clip_and_emit_textured_tri_mode0(undefined4 param_1);
/* VA: 0x956b8 | Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 1) */
void engine3_clip_and_emit_textured_tri_mode1(undefined4 param_1);
/* VA: 0x964d0 | Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 2) */
void engine3_clip_and_emit_textured_tri_mode2(undefined4 param_1);
/* VA: 0x98104 | Emit unclipped 3D triangle primitive (variant 0) into g_render_poly_write_ptr */
void engine3_emit_unclipped_tri_variant0(void);
/* VA: 0x98248 | Emit unclipped 3D triangle primitive (variant 1) into g_render_poly_write_ptr */
void engine3_emit_unclipped_tri_variant1(void);
/* VA: 0x9838c | Emit unclipped 3D triangle primitive (variant 2) into g_render_poly_write_ptr */
void engine3_emit_unclipped_tri_variant2(void);
/* VA: 0x984d0 | Emit unclipped 3D triangle primitive (variant 3) into g_render_poly_write_ptr */
void engine3_emit_unclipped_tri_variant3(void);
/* VA: 0x98614 | Generate 3D voxel column faces for visible subtile strip (high detail) */
void engine3_build_subtile_column_geometry_high(void);
/* VA: 0x98cb8 | Generate 3D voxel column faces for visible subtile strip (medium detail) */
void engine3_build_subtile_column_geometry_med(void);
/* VA: 0x9bdf0 | Generate 3D voxel column faces for visible subtile strip (low detail) */
void engine3_build_subtile_column_geometry_low(void);
/* VA: 0x9ef3c | Reset visible subtile span buffers for g_view_render_radius */
void engine3_clear_visible_subtile_span_list(void);
/* VA: 0x9f2a4 | Compute subtile grid intersection along camera frustum ray */
uint engine3_intersect_frustum_edge_with_grid(void);
/* VA: 0x9f314 | Compute left/right visible subtile bounds across frustum edges */
void engine3_scan_frustum_subtile_bounds(void);
/* VA: 0x9f8bc | Build visible subtile list for isometric or first-person camera */
void engine3_determine_visible_subtiles_for_camera(void);
/* VA: 0x9fe38 | Reset g_render_poly_write_ptr and select projection transform for frame */
void engine3_begin_frame_projection_setup(void);
/* VA: 0x9ff84 | Traverse all 704 depth buckets (0x2bf..0) and rasterize queued polygons (high) */
void engine3_rasterize_depth_buckets_high(void);
/* VA: 0xa3a4c | Compute sin/cos camera rotation matrix terms */
void engine3_update_camera_rotation_trig(void);
/* VA: 0xa3aa0 | Transform world subtile grid coordinates into camera/screen space */
void engine3_project_camera_grid_to_screen(void);
/* VA: 0xa434c | Iterate visible subtile rows within g_view_render_radius */
void engine3_sweep_visible_subtile_rows(void);
/* VA: 0xa49ec | Render floating health bar and level flower above Creature Thing */
void engine3_draw_creature_health_and_level_bar(void);
/* VA: 0xa5030 | Copy 28-byte (7-dword) sprite draw descriptor */
void engine3_copy_sprite_draw_descriptor(void);
/* VA: 0xa5178 | Queue room efficiency/banner sprite into depth bucket */
undefined8 engine3_queue_room_flag_or_special_sprite(void);
/* VA: 0xa5240 | Render depth-sorted 2D billboard sprite in 3D view */
void engine3_draw_queued_billboard_sprite(void);
/* VA: 0xa596c | Render floating text/number billboard in 3D view */
void engine3_draw_string_billboard(void);
/* VA: 0xa5a74 | Render Keeper hand or held object sprite in 3D view */
void engine3_draw_keeper_hand_or_object_sprite(void);
/* VA: 0xa5c28 | Render translucent spell/effect sprite in 3D view */
void engine3_draw_translucent_effect_sprite(void);
/* VA: 0xa5d4c | Mark 3x3 subtiles of a slab as visited during frame rendering */
void engine3_mark_slab_subtiles_rendered(void);
/* VA: 0xa5dd0 | Populate quad vertex indices and 16.16 fixed-point UV coordinates */
void engine3_init_quad_vertex_uvs(void);
/* VA: 0xa5e00 | Test 3D triangle clip flags (0x1f8) and 2D screen-space cross product winding */
int engine3_is_triangle_front_facing_and_inside_frustum(void);
/* VA: 0xa5e60 | Project 3D camera-space vertex to 2D screen coordinates (perspective) */
void engine3_project_vertex_perspective(void);
/* VA: 0xa5ff0 | Append 3D line primitive into g_render_poly_write_ptr and depth bucket */
void engine3_enqueue_line_primitive(void);
/* VA: 0xa60a0 | Append marker primitive into g_render_poly_write_ptr and depth bucket */
void engine3_enqueue_point_or_marker_primitive(void);
/* VA: 0xa6134 | Walk mapwho Thing linked list on subtile and queue sprites for rendering */
void engine3_collect_and_queue_subtile_things(void);
/* VA: 0xa6504 | Traverse all 704 depth buckets (0x2bf..0) and rasterize queued polygons (low) */
void engine3_rasterize_depth_buckets_low(void);
/* VA: 0xa6990 | Top-level 3D dungeon viewport renderer (clamps camera zoom, projects & rasterizes scene) */
void engine3_render_3d_dungeon_viewport(void);
/* VA: 0xaa3a8 | Scale world coordinate delta by camera zoom factor */
undefined4 engine3_scale_coord_by_camera_zoom(int *param_1);

/* === Module: entrance.cpp (6 functions) === */
/* VA: 0x2684f | Accesses per-player PlayerInfo state (stride 0x4ef) */
void entrance_update_player_view_state_02684f(void);
/* VA: 0x26ac9 | Module entrance.cpp procedure @ 0x026ac9 */
int entrance_fn_026ac9(void);
/* VA: 0x26b04 | String 'Cannot find a valid place in entrance to create a creature' */
int entrance_find_valid_place_entrance_026b04(void);
/* VA: 0x26c6d | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong entrance_update_player_view_state_026c6d(void);
/* VA: 0x26ce2 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 entrance_update_creature_and_thing_026ce2(void);
/* VA: 0x26dbc | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 entrance_update_creature_control_026dbc(void);

/* === Module: event.cpp (13 functions) === */
/* VA: 0x27348 | Module event.cpp procedure @ 0x027348 */
void event_fn_027348(void);
/* VA: 0x27390 | String 'Illegal Event number created' */
int event_illegal_event_number_created_027390(undefined4 param_1);
/* VA: 0x274ad | Module event.cpp procedure @ 0x0274ad */
uint event_fn_0274ad(undefined4 param_1);
/* VA: 0x27553 | Module event.cpp procedure @ 0x027553 */
uint event_fn_027553(undefined4 param_1);
/* VA: 0x275c1 | Module event.cpp procedure @ 0x0275c1 */
void event_fn_0275c1(void);
/* VA: 0x275f6 | Accesses per-player Dungeon state (stride 0x1508) */
void event_update_player_dungeon_0275f6(void);
/* VA: 0x2764f | Accesses per-player Dungeon state (stride 0x1508) */
void event_update_player_dungeon_02764f(void);
/* VA: 0x2769e | Module event.cpp procedure @ 0x02769e */
byte * event_fn_02769e(void);
/* VA: 0x276d0 | Module event.cpp procedure @ 0x0276d0 */
undefined4 event_fn_0276d0(void);
/* VA: 0x27703 | Module event.cpp procedure @ 0x027703 */
longlong event_fn_027703(void);
/* VA: 0x27746 | Module event.cpp procedure @ 0x027746 */
void event_fn_027746(void);
/* VA: 0x2775f | Module event.cpp procedure @ 0x02775f */
void event_fn_02775f(undefined1 param_1,undefined4 param_2);
/* VA: 0x27824 | Module event.cpp procedure @ 0x027824 */
void event_fn_027824(void);

/* === Module: evil.cpp (30 functions) === */
/* VA: 0x2778e | Module evil.cpp procedure @ 0x02778e */
void evil_fn_02778e(void);
/* VA: 0x277d3 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
longlong evil_process_thing_entity_0277d3(void);
/* VA: 0x27892 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void evil_process_thing_entity_027892(void);
/* VA: 0x27944 | Module evil.cpp procedure @ 0x027944 */
undefined4 evil_fn_027944(void);
/* VA: 0x2796f | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 evil_update_creature_control_02796f(void);
/* VA: 0x280a7 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong evil_update_creature_control_0280a7(void);
/* VA: 0x280f1 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 evil_update_creature_control_0280f1(void);
/* VA: 0x28149 | String 'Illegal Job Preference %d (T%d C%d M%d)' */
undefined4 evil_illegal_job_preference_028149(void);
/* VA: 0x2855c | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined8 evil_roll_action_random_02855c(void);
/* VA: 0x2863c | Module evil.cpp procedure @ 0x02863c */
undefined8 evil_fn_02863c(void);
/* VA: 0x2864e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 evil_update_creature_control_02864e(void);
/* VA: 0x286d5 | String 'Hope we never get here...' */
undefined8 evil_hope_we_never_get_0286d5(void);
/* VA: 0x28833 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong evil_update_creature_control_028833(void);
/* VA: 0x28851 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 evil_update_creature_control_028851(void);
/* VA: 0x28904 | Updates 3x3 subtile map entries for slab coordinates */
undefined8 evil_update_slab_subtile_columns_028904(void);
/* VA: 0x28aa0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 evil_update_creature_control_028aa0(void);
/* VA: 0x28afb | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 evil_update_creature_control_028afb(void);
/* VA: 0x28bae | String 'Could not find position' */
undefined8 evil_could_find_position_028bae(void);
/* VA: 0x28d85 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 evil_update_creature_control_028d85(void);
/* VA: 0x28e90 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 evil_update_creature_control_028e90(void);
/* VA: 0x28eb4 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 evil_update_creature_and_thing_028eb4(void);
/* VA: 0x291bc | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong evil_update_creature_control_0291bc(void);
/* VA: 0x29254 | String 'Cannot do this 'destroy room' stuff' */
undefined4 evil_do_this_destroy_room_029254(void);
/* VA: 0x29396 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined8 evil_roll_action_random_029396(void);
/* VA: 0x29423 | Module evil.cpp procedure @ 0x029423 */
undefined8 evil_fn_029423(void);
/* VA: 0x294ca | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong evil_update_creature_control_0294ca(void);
/* VA: 0x29696 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong evil_update_creature_control_029696(void);
/* VA: 0x29738 | String 'SETTINGS.DAT' */
undefined8 evil_settings_dat_029738(void);
/* VA: 0x29800 | Module evil.cpp procedure @ 0x029800 */
undefined8 evil_fn_029800(void);
/* VA: 0x298b5 | Reads/modifies Map[256x256] subtile data */
longlong evil_process_map_subtile_0298b5(void);

/* === Module: eyelens.cpp (7 functions) === */
/* VA: 0x26e5e | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 eyelens_update_player_dungeon_026e5e(void);
/* VA: 0x26f4d | Module eyelens.cpp procedure @ 0x026f4d */
undefined8 eyelens_fn_026f4d(void);
/* VA: 0x26faa | Module eyelens.cpp procedure @ 0x026faa */
undefined8 eyelens_fn_026faa(void);
/* VA: 0x2700c | String 'EyeLens Memory already allocated' */
void eyelens_memory_already_allocated_02700c(void);
/* VA: 0x270e0 | Module eyelens.cpp procedure @ 0x0270e0 */
void eyelens_fn_0270e0(void);
/* VA: 0x27130 | String 'data\frac%02d.dat' */
void eyelens_data_frac_dat_027130(void);
/* VA: 0x27320 | Module eyelens.cpp procedure @ 0x027320 */
void eyelens_fn_027320(void);

/* === Module: file.cpp (50 functions) === */
/* VA: 0x29979 | Reads/modifies Map[256x256] subtile data */
longlong file_process_map_subtile_029979(void);
/* VA: 0x299f8 | Reads/modifies SlabMap[85x85] tile entry */
undefined8 file_process_slabmap_tile_0299f8(void);
/* VA: 0x29ac2 | Reads/modifies Map[256x256] subtile data */
longlong file_process_map_subtile_029ac2(void);
/* VA: 0x29b54 | Module file.cpp procedure @ 0x029b54 */
longlong file_fn_029b54(void);
/* VA: 0x29bfe | Module file.cpp procedure @ 0x029bfe */
undefined8 file_fn_029bfe(void);
/* VA: 0x29d32 | Module file.cpp procedure @ 0x029d32 */
longlong file_fn_029d32(void);
/* VA: 0x29d96 | Module file.cpp procedure @ 0x029d96 */
undefined4 file_fn_029d96(void);
/* VA: 0x29df9 | String 'Cannot allocate action point during load' */
undefined8 file_allocate_action_point_during_029df9(void);
/* VA: 0x29eef | String 'INSTALL_PATH=' */
undefined8 file_install_path_029eef(void);
/* VA: 0x2a0be | String 'KEEPER.CFG' */
bool file_keeper_cfg_02a0be(void);
/* VA: 0x2a1b0 | Module file.cpp procedure @ 0x02a1b0 */
undefined8 file_fn_02a1b0(void);
/* VA: 0x2a219 | Operates on Room structure in g_rooms (stride 0x45) */
void file_process_dungeon_room_02a219(void);
/* VA: 0x2a25c | Module file.cpp procedure @ 0x02a25c */
ulonglong file_fn_02a25c(void);
/* VA: 0x2a355 | String 'SETTINGS.DAT' */
undefined8 file_settings_dat_02a355(void);
/* VA: 0x2a3ac | Reads/modifies Map[256x256] subtile data */
undefined8 file_process_map_subtile_02a3ac(void);
/* VA: 0x2a427 | Reads/modifies SlabMap[85x85] tile entry */
undefined8 file_process_slabmap_tile_02a427(void);
/* VA: 0x2a4e3 | Reads/modifies Map[256x256] subtile data */
undefined8 file_process_map_subtile_02a4e3(void);
/* VA: 0x2a558 | Module file.cpp procedure @ 0x02a558 */
undefined8 file_fn_02a558(void);
/* VA: 0x2a5db | Module file.cpp procedure @ 0x02a5db */
undefined8 file_fn_02a5db(void);
/* VA: 0x2a653 | Module file.cpp procedure @ 0x02a653 */
undefined8 file_fn_02a653(void);
/* VA: 0x2a6c5 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 file_process_thing_entity_02a6c5(void);
/* VA: 0x2a899 | Module file.cpp procedure @ 0x02a899 */
undefined8 file_fn_02a899(void);
/* VA: 0x2a9f0 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void file_update_creature_and_thing_02a9f0(void);
/* VA: 0x2ab14 | String 'BUFF=%d, STRUCT=%d, NUM=%d' */
void file_buff_struct_num_02ab14(void);
/* VA: 0x2ae22 | Module file.cpp procedure @ 0x02ae22 */
undefined8 file_fn_02ae22(void);
/* VA: 0x2ae69 | Module file.cpp procedure @ 0x02ae69 */
undefined8 file_fn_02ae69(void);
/* VA: 0x2ae90 | Module file.cpp procedure @ 0x02ae90 */
undefined8 file_fn_02ae90(void);
/* VA: 0x2aeb7 | Module file.cpp procedure @ 0x02aeb7 */
undefined8 file_fn_02aeb7(void);
/* VA: 0x2aee1 | Module file.cpp procedure @ 0x02aee1 */
undefined8 file_fn_02aee1(void);
/* VA: 0x2af6d | Module file.cpp procedure @ 0x02af6d */
void file_fn_02af6d(void);
/* VA: 0x2b36c | String 'data\creature.txt' */
undefined8 file_data_creature_txt_02b36c(void);
/* VA: 0x2c3d0 | Module file.cpp procedure @ 0x02c3d0 */
undefined8 file_fn_02c3d0(void);
/* VA: 0x2c502 | String 'Cannot load SCRIPT file' */
undefined8 file_load_script_file_02c502(void);
/* VA: 0x2c6e2 | Module file.cpp procedure @ 0x02c6e2 */
void file_fn_02c6e2(void);
/* VA: 0x2c736 | Module file.cpp procedure @ 0x02c736 */
undefined8 file_fn_02c736(void);
/* VA: 0x2c785 | Module file.cpp procedure @ 0x02c785 */
longlong file_fn_02c785(void);
/* VA: 0x2c833 | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 file_update_player_dungeon_02c833(void);
/* VA: 0x2ca74 | Accesses per-player Dungeon state (stride 0x1508) */
void file_update_player_dungeon_02ca74(void);
/* VA: 0x2cb2b | Reads/modifies Map[256x256] subtile data */
undefined8 file_process_map_subtile_02cb2b(void);
/* VA: 0x2cdc8 | String 'E14R432Q#222564-3; SYSTEM ERROR I should be able to find a c' */
void file_e14r432q_system_should_able_02cdc8(void);
/* VA: 0x2d168 | String 'Slab Type > 255, increase size of SlabMap.Slab' */
undefined8 file_slab_type_increase_size_02d168(void);
/* VA: 0x2d239 | Reads/modifies SlabMap[85x85] tile entry */
undefined8 file_process_slabmap_tile_02d239(void);
/* VA: 0x2d313 | Module file.cpp procedure @ 0x02d313 */
undefined1 file_fn_02d313(void);
/* VA: 0x2d32d | String 'data\ceiling.txt' */
void file_data_ceiling_txt_02d32d(void);
/* VA: 0x2d3f4 | Module file.cpp procedure @ 0x02d3f4 */
void file_fn_02d3f4(undefined1 param_1);
/* VA: 0x2d4a7 | Module file.cpp procedure @ 0x02d4a7 */
void file_fn_02d4a7(void);
/* VA: 0x2d545 | Module file.cpp procedure @ 0x02d545 */
void file_fn_02d545(void);
/* VA: 0x2d6a9 | Module file.cpp procedure @ 0x02d6a9 */
void file_fn_02d6a9(void);
/* VA: 0x2d6f0 | Module file.cpp procedure @ 0x02d6f0 */
undefined8 file_fn_02d6f0(void);
/* VA: 0x2d861 | Module file.cpp procedure @ 0x02d861 */
void file_fn_02d861(void);

/* === Module: food.cpp (16 functions) === */
/* VA: 0xaa558 | Module food.cpp procedure @ 0x0aa558 */
void food_fn_0aa558(void);
/* VA: 0xaadd0 | String 'TRYING TO REMOVE SOME FOOD NOT IN ROOM!!!' */
void food_trying_remove_some_food_0aadd0(void);
/* VA: 0xaaecc | Module food.cpp procedure @ 0x0aaecc */
longlong food_fn_0aaecc(void);
/* VA: 0xaaf30 | String 'NULL ROOM STRUCTURE PASSED' */
undefined4 food_null_room_structure_passed_0aaf30(void);
/* VA: 0xaafa4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void food_update_creature_control_0aafa4(void);
/* VA: 0xaafd4 | String 'CANNOT GET NEAR TO FOOD' */
void food_get_near_food_0aafd4(void);
/* VA: 0xab284 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
ulonglong food_update_creature_control_0ab284(void);
/* VA: 0xab2c8 | String 'Attempting to move to garden we cannot navigate to - this sh' */
longlong food_attempting_move_garden_we_0ab2c8(void);
/* VA: 0xab4bc | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong food_update_creature_and_thing_0ab4bc(void);
/* VA: 0xab594 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong food_update_creature_control_0ab594(void);
/* VA: 0xab60c | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 food_update_player_dungeon_0ab60c(void);
/* VA: 0xab870 | Module food.cpp procedure @ 0x0ab870 */
void food_fn_0ab870(void);
/* VA: 0xab8dc | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 food_process_dungeon_room_0ab8dc(void);
/* VA: 0xabe28 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 food_update_creature_control_0abe28(void);
/* VA: 0xabe58 | Accesses per-player Dungeon state (stride 0x1508) */
void food_update_player_dungeon_0abe58(void);
/* VA: 0xabf38 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void food_update_creature_and_thing_0abf38(void);

/* === Module: frontend.cpp (89 functions) === */
/* VA: 0x2d8e2 | Module frontend.cpp procedure @ 0x02d8e2 */
void frontend_fn_02d8e2(int param_1,int param_2);
/* VA: 0x2d920 | Module frontend.cpp procedure @ 0x02d920 */
void frontend_fn_02d920(void);
/* VA: 0x2d974 | Module frontend.cpp procedure @ 0x02d974 */
void frontend_fn_02d974(void);
/* VA: 0x2daae | Module frontend.cpp procedure @ 0x02daae */
void frontend_fn_02daae(void);
/* VA: 0x2db0c | Module frontend.cpp procedure @ 0x02db0c */
void frontend_fn_02db0c(void);
/* VA: 0x2dbac | Module frontend.cpp procedure @ 0x02dbac */
void frontend_fn_02dbac(void);
/* VA: 0x2dbb7 | Module frontend.cpp procedure @ 0x02dbb7 */
void frontend_fn_02dbb7(void);
/* VA: 0x2dc8e | Module frontend.cpp procedure @ 0x02dc8e */
void frontend_fn_02dc8e(void);
/* VA: 0x2dcec | Module frontend.cpp procedure @ 0x02dcec */
void frontend_fn_02dcec(void);
/* VA: 0x2dfac | String 'Why are we here' */
void frontend_why_are_we_here_02dfac(void);
/* VA: 0x2e486 | Module frontend.cpp procedure @ 0x02e486 */
void frontend_fn_02e486(void);
/* VA: 0x2e48a | Accesses per-player PlayerInfo state (stride 0x4ef) */
void frontend_update_player_view_state_02e48a(void);
/* VA: 0x2e500 | Module frontend.cpp procedure @ 0x02e500 */
void frontend_fn_02e500(void);
/* VA: 0x2e534 | Module frontend.cpp procedure @ 0x02e534 */
void frontend_fn_02e534(void);
/* VA: 0x2e561 | Module frontend.cpp procedure @ 0x02e561 */
void frontend_fn_02e561(void);
/* VA: 0x2e58b | Sets active font and draws GUI button text label */
void frontend_draw_gui_button_label_02e58b(void);
/* VA: 0x2e624 | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02e624(void);
/* VA: 0x2e647 | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02e647(void);
/* VA: 0x2e654 | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02e654(void);
/* VA: 0x2e667 | Module frontend.cpp procedure @ 0x02e667 */
void frontend_fn_02e667(void);
/* VA: 0x2e696 | Module frontend.cpp procedure @ 0x02e696 */
void frontend_fn_02e696(void);
/* VA: 0x2e6a6 | Module frontend.cpp procedure @ 0x02e6a6 */
void frontend_fn_02e6a6(void);
/* VA: 0x2e6bb | Module frontend.cpp procedure @ 0x02e6bb */
void frontend_fn_02e6bb(void);
/* VA: 0x2e6c4 | Module frontend.cpp procedure @ 0x02e6c4 */
void frontend_fn_02e6c4(void);
/* VA: 0x2e8a7 | String 'Unable to load FRONTEND PALETTE' */
void frontend_load_frontend_palette_02e8a7(void);
/* VA: 0x2ecbd | String 'Why are we here when it's not a new level' */
void frontend_why_are_we_here_02ecbd(void);
/* VA: 0x2ed34 | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02ed34(void);
/* VA: 0x2ed41 | String 'CONTINUE.SAV' */
void frontend_continue_sav_02ed41(void);
/* VA: 0x2ee00 | Module frontend.cpp procedure @ 0x02ee00 */
void frontend_fn_02ee00(void);
/* VA: 0x2ee3e | Sets active font and draws GUI button text label */
void frontend_draw_gui_button_label_02ee3e(void);
/* VA: 0x2eeb9 | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_02eeb9(void);
/* VA: 0x2ef93 | Module frontend.cpp procedure @ 0x02ef93 */
void frontend_fn_02ef93(void);
/* VA: 0x2efb4 | Sets active font and draws GUI button text label */
void frontend_draw_gui_button_label_02efb4(void);
/* VA: 0x2f18a | Accesses per-player PlayerInfo state (stride 0x4ef) */
void frontend_update_player_view_state_02f18a(void);
/* VA: 0x2f1c8 | Module frontend.cpp procedure @ 0x02f1c8 */
void frontend_fn_02f1c8(void);
/* VA: 0x2f1d2 | Module frontend.cpp procedure @ 0x02f1d2 */
void frontend_fn_02f1d2(void);
/* VA: 0x2f1dc | Module frontend.cpp procedure @ 0x02f1dc */
void frontend_fn_02f1dc(void);
/* VA: 0x2f237 | Module frontend.cpp procedure @ 0x02f237 */
void frontend_fn_02f237(void);
/* VA: 0x2f251 | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_02f251(void);
/* VA: 0x2f404 | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02f404(void);
/* VA: 0x2f414 | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_02f414(void);
/* VA: 0x2f541 | Module frontend.cpp procedure @ 0x02f541 */
void frontend_fn_02f541(void);
/* VA: 0x2f56e | Module frontend.cpp procedure @ 0x02f56e */
void frontend_fn_02f56e(void);
/* VA: 0x2f688 | Module frontend.cpp procedure @ 0x02f688 */
void frontend_fn_02f688(void);
/* VA: 0x2f755 | Module frontend.cpp procedure @ 0x02f755 */
void frontend_fn_02f755(void);
/* VA: 0x2f769 | Sets active font and draws GUI button text label */
void frontend_draw_gui_button_label_02f769(void);
/* VA: 0x2f7d3 | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02f7d3(void);
/* VA: 0x2f7e0 | Module frontend.cpp procedure @ 0x02f7e0 */
void frontend_fn_02f7e0(void);
/* VA: 0x2f7ef | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02f7ef(void);
/* VA: 0x2f7fc | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02f7fc(void);
/* VA: 0x2f809 | Module frontend.cpp procedure @ 0x02f809 */
void frontend_fn_02f809(void);
/* VA: 0x2f819 | Module frontend.cpp procedure @ 0x02f819 */
void frontend_fn_02f819(void);
/* VA: 0x2f829 | Updates GUI button enabled bit (0x08) */
void frontend_maintain_gui_button_state_02f829(void);
/* VA: 0x2f83c | Module frontend.cpp procedure @ 0x02f83c */
void frontend_fn_02f83c(void);
/* VA: 0x2f84f | Module frontend.cpp procedure @ 0x02f84f */
void frontend_fn_02f84f(void);
/* VA: 0x2f874 | String 'INTROMIX.SMK' */
void frontend_intromix_smk_02f874(void);
/* VA: 0x2f8a2 | Module frontend.cpp procedure @ 0x02f8a2 */
void frontend_fn_02f8a2(void);
/* VA: 0x2f9ce | String 'OUTROMIX.SMK' */
void frontend_outromix_smk_02f9ce(void);
/* VA: 0x2f9f5 | Module frontend.cpp procedure @ 0x02f9f5 */
undefined4 frontend_fn_02f9f5(void);
/* VA: 0x2faf6 | Module frontend.cpp procedure @ 0x02faf6 */
void frontend_fn_02faf6(void);
/* VA: 0x2fc49 | Module frontend.cpp procedure @ 0x02fc49 */
void frontend_fn_02fc49(void);
/* VA: 0x2fda1 | Module frontend.cpp procedure @ 0x02fda1 */
undefined8 frontend_fn_02fda1(void);
/* VA: 0x2feca | Module frontend.cpp procedure @ 0x02feca */
void frontend_fn_02feca(void);
/* VA: 0x2fefd | Module frontend.cpp procedure @ 0x02fefd */
void frontend_fn_02fefd(void);
/* VA: 0x2ff2e | String 'CONTINUE.SAV' */
longlong frontend_continue_sav_02ff2e(void);
/* VA: 0x2ffe4 | String 'LDATA\FRONT.RAW' */
undefined8 frontend_ldata_front_raw_02ffe4(void);
/* VA: 0x30057 | String 'LDATA\FRONT.RAW' */
void frontend_ldata_front_raw_030057(void);
/* VA: 0x30061 | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_030061(void);
/* VA: 0x300a7 | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_0300a7(void);
/* VA: 0x3012d | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_03012d(void);
/* VA: 0x30266 | Module frontend.cpp procedure @ 0x030266 */
void frontend_fn_030266(void);
/* VA: 0x302ba | Module frontend.cpp procedure @ 0x0302ba */
undefined4 frontend_fn_0302ba(void);
/* VA: 0x30309 | String 'DATA\HISCORES.DAT' */
void frontend_data_hiscores_dat_030309(void);
/* VA: 0x30322 | String 'DATA\HISCORES.DAT' */
void frontend_data_hiscores_dat_030322(void);
/* VA: 0x30389 | Module frontend.cpp procedure @ 0x030389 */
void frontend_fn_030389(void);
/* VA: 0x3038a | Module frontend.cpp procedure @ 0x03038a */
void frontend_fn_03038a(void);
/* VA: 0x303ad | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_0303ad(void);
/* VA: 0x306e4 | Module frontend.cpp procedure @ 0x0306e4 */
void frontend_fn_0306e4(void);
/* VA: 0x30782 | Module frontend.cpp procedure @ 0x030782 */
void frontend_fn_030782(void);
/* VA: 0x3078d | Sets active font and draws GUI button text label */
void frontend_draw_gui_button_label_03078d(void);
/* VA: 0x30972 | Module frontend.cpp procedure @ 0x030972 */
void frontend_fn_030972(void);
/* VA: 0x30996 | Module frontend.cpp procedure @ 0x030996 */
void frontend_fn_030996(void);
/* VA: 0x30a28 | Configures font/flags and draws text on screen */
void frontend_draw_text_overlay_030a28(void);
/* VA: 0x30a2d | String 'Text too long for error box' */
void frontend_text_long_box_030a2d(void);
/* VA: 0x30ca0 | Module frontend.cpp procedure @ 0x030ca0 */
void frontend_fn_030ca0(void);
/* VA: 0x30cb9 | Module frontend.cpp procedure @ 0x030cb9 */
void frontend_fn_030cb9(void);
/* VA: 0x30cd9 | Reads/modifies Map[256x256] subtile data */
longlong frontend_process_map_subtile_030cd9(void);
/* VA: 0x30e04 | Module frontend.cpp procedure @ 0x030e04 */
longlong frontend_fn_030e04(void);
/* VA: 0x30e88 | Module frontend.cpp procedure @ 0x030e88 */
longlong frontend_fn_030e88(void);

/* === Module: frontmap.cpp (22 functions) === */
/* VA: 0x30e47 | Module frontmap.cpp procedure @ 0x030e47 */
longlong frontmap_fn_030e47(void);
/* VA: 0x30ef8 | String 'LDATA\DKFLAG00.DAT' */
longlong frontmap_ldata_dkflag00_dat_030ef8(void);
/* VA: 0x31213 | String 'LDATA\DKFLAG00.DAT' */
void frontmap_ldata_dkflag00_dat_031213(void);
/* VA: 0x31273 | Module frontmap.cpp procedure @ 0x031273 */
void frontmap_fn_031273(void);
/* VA: 0x31599 | Module frontmap.cpp procedure @ 0x031599 */
void frontmap_fn_031599(void);
/* VA: 0x31854 | Module frontmap.cpp procedure @ 0x031854 */
undefined8 frontmap_fn_031854(void);
/* VA: 0x31a51 | String 'LDATA\NETFLAG.DAT' */
void frontmap_ldata_netflag_dat_031a51(void);
/* VA: 0x31bd6 | String 'LDATA\NETFLAG.DAT' */
void frontmap_ldata_netflag_dat_031bd6(void);
/* VA: 0x31c23 | Module frontmap.cpp procedure @ 0x031c23 */
void frontmap_fn_031c23(void);
/* VA: 0x31def | References 'LbNetwork_Exchange failed' */
undefined8 frontmap_LbNetwork_Exchange_031def(void);
/* VA: 0x322e9 | String 'Invalid number of players' */
void frontmap_number_players_0322e9(void);
/* VA: 0x32612 | Module frontmap.cpp procedure @ 0x032612 */
void frontmap_fn_032612(void);
/* VA: 0x32738 | Module frontmap.cpp procedure @ 0x032738 */
void frontmap_fn_032738(void);
/* VA: 0x327b5 | Module frontmap.cpp procedure @ 0x0327b5 */
void frontmap_fn_0327b5(void);
/* VA: 0x32805 | Module frontmap.cpp procedure @ 0x032805 */
void frontmap_fn_032805(void);
/* VA: 0x328e1 | Module frontmap.cpp procedure @ 0x0328e1 */
void frontmap_fn_0328e1(void);
/* VA: 0x329ae | String 'Not enough memory in game structure for map' */
longlong frontmap_enough_memory_game_structure_0329ae(void);
/* VA: 0x32b21 | Module frontmap.cpp procedure @ 0x032b21 */
void frontmap_fn_032b21(void);
/* VA: 0x32bf6 | Module frontmap.cpp procedure @ 0x032bf6 */
void frontmap_fn_032bf6(void);
/* VA: 0x32d30 | Module frontmap.cpp procedure @ 0x032d30 */
void frontmap_fn_032d30(void);
/* VA: 0x32d8c | Module frontmap.cpp procedure @ 0x032d8c */
undefined4 frontmap_fn_032d8c(void);
/* VA: 0x32e00 | Module frontmap.cpp procedure @ 0x032e00 */
undefined8 frontmap_fn_032e00(void);

/* === Module: frontnet.cpp (129 functions) === */
/* VA: 0x32f12 | Module frontnet.cpp procedure @ 0x032f12 */
undefined4 frontnet_fn_032f12(void);
/* VA: 0x32f5c | Module frontnet.cpp procedure @ 0x032f5c */
bool frontnet_fn_032f5c(void);
/* VA: 0x32f6a | Module frontnet.cpp procedure @ 0x032f6a */
longlong frontnet_fn_032f6a(void);
/* VA: 0x32f9b | String 'LevelNameFile, Add a blank line at the end' */
void frontnet_levelnamefile_add_blank_line_032f9b(void);
/* VA: 0x3308c | Module frontnet.cpp procedure @ 0x03308c */
uint frontnet_fn_03308c(void);
/* VA: 0x330ae | Module frontnet.cpp procedure @ 0x0330ae */
int frontnet_fn_0330ae(void);
/* VA: 0x330e0 | Module frontnet.cpp procedure @ 0x0330e0 */
void frontnet_fn_0330e0(void);
/* VA: 0x33156 | Module frontnet.cpp procedure @ 0x033156 */
undefined8 frontnet_fn_033156(void);
/* VA: 0x3315b | Module frontnet.cpp procedure @ 0x03315b */
undefined8 frontnet_fn_03315b(void);
/* VA: 0x33223 | Module frontnet.cpp procedure @ 0x033223 */
void frontnet_fn_033223(void);
/* VA: 0x3325d | Module frontnet.cpp procedure @ 0x03325d */
void frontnet_fn_03325d(void);
/* VA: 0x33350 | Module frontnet.cpp procedure @ 0x033350 */
undefined8 frontnet_fn_033350(void);
/* VA: 0x33563 | String 'Unknown button type' */
void frontnet_button_type_033563(void);
/* VA: 0x3378f | Configures font/flags and draws text on screen */
uint frontnet_draw_text_overlay_03378f(void);
/* VA: 0x33828 | Configures font/flags and draws text on screen */
void frontnet_draw_text_overlay_033828(void);
/* VA: 0x338fd | Module frontnet.cpp procedure @ 0x0338fd */
void frontnet_fn_0338fd(void);
/* VA: 0x33917 | Module frontnet.cpp procedure @ 0x033917 */
void frontnet_fn_033917(void);
/* VA: 0x33928 | Module frontnet.cpp procedure @ 0x033928 */
void frontnet_fn_033928(void);
/* VA: 0x33939 | Module frontnet.cpp procedure @ 0x033939 */
void frontnet_fn_033939(void);
/* VA: 0x3394a | Module frontnet.cpp procedure @ 0x03394a */
void frontnet_fn_03394a(void);
/* VA: 0x3395b | Module frontnet.cpp procedure @ 0x03395b */
void frontnet_fn_03395b(void);
/* VA: 0x3396c | Module frontnet.cpp procedure @ 0x03396c */
void frontnet_fn_03396c(void);
/* VA: 0x339df | Module frontnet.cpp procedure @ 0x0339df */
void frontnet_fn_0339df(void);
/* VA: 0x33a44 | Module frontnet.cpp procedure @ 0x033a44 */
void frontnet_fn_033a44(void);
/* VA: 0x33ac7 | Module frontnet.cpp procedure @ 0x033ac7 */
void frontnet_fn_033ac7(void);
/* VA: 0x33b5c | Module frontnet.cpp procedure @ 0x033b5c */
void frontnet_fn_033b5c(void);
/* VA: 0x33bcc | References 'LbNetwork_Stop() failed' */
void frontnet_LbNetwork_Stop_033bcc(void);
/* VA: 0x33bfb | References 'LbNetwork_Stop() failed' */
void frontnet_LbNetwork_Stop_033bfb(void);
/* VA: 0x33c3a | Module frontnet.cpp procedure @ 0x033c3a */
void frontnet_fn_033c3a(void);
/* VA: 0x33c7d | Module frontnet.cpp procedure @ 0x033c7d */
undefined8 frontnet_fn_033c7d(void);
/* VA: 0x33d87 | Module frontnet.cpp procedure @ 0x033d87 */
undefined8 frontnet_fn_033d87(void);
/* VA: 0x33ead | References 'LbNetwork_EnumerateServices() failed' */
void frontnet_LbNetwork_EnumerateServices_033ead(void);
/* VA: 0x33f26 | Module frontnet.cpp procedure @ 0x033f26 */
void frontnet_fn_033f26(void);
/* VA: 0x33f57 | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_033f57(void);
/* VA: 0x33fdf | Updates GUI button enabled flag from service scroll offset */
void frontnet_maintain_service_scroll_btn_033fdf(void);
/* VA: 0x33ff7 | Updates GUI button enabled flag from service scroll offset */
void frontnet_maintain_service_scroll_btn_033ff7(void);
/* VA: 0x34004 | Updates GUI button enabled flag from service scroll offset */
void frontnet_maintain_service_scroll_btn_034004(void);
/* VA: 0x34022 | Module frontnet.cpp procedure @ 0x034022 */
void frontnet_fn_034022(void);
/* VA: 0x34070 | Module frontnet.cpp procedure @ 0x034070 */
void frontnet_fn_034070(void);
/* VA: 0x34077 | Decrements network service list scroll offset */
void frontnet_scroll_service_list_up_034077(void);
/* VA: 0x34087 | Increments network service list scroll offset */
void frontnet_scroll_service_list_down_034087(void);
/* VA: 0x3409c | Module frontnet.cpp procedure @ 0x03409c */
void frontnet_fn_03409c(void);
/* VA: 0x34105 | Module frontnet.cpp procedure @ 0x034105 */
void frontnet_fn_034105(void);
/* VA: 0x34186 | Decrements COM port scroll offset */
void frontnet_scroll_com_port_up_034186(void);
/* VA: 0x34196 | Increments COM port scroll offset */
void frontnet_scroll_com_port_down_034196(void);
/* VA: 0x341ab | Module frontnet.cpp procedure @ 0x0341ab */
void frontnet_fn_0341ab(void);
/* VA: 0x341bb | Module frontnet.cpp procedure @ 0x0341bb */
void frontnet_fn_0341bb(void);
/* VA: 0x341d0 | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_0341d0(void);
/* VA: 0x341dd | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_0341dd(void);
/* VA: 0x341f0 | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_0341f0(void);
/* VA: 0x34208 | Module frontnet.cpp procedure @ 0x034208 */
void frontnet_fn_034208(void);
/* VA: 0x34241 | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_034241(void);
/* VA: 0x3424e | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_03424e(void);
/* VA: 0x34261 | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_034261(void);
/* VA: 0x34279 | Module frontnet.cpp procedure @ 0x034279 */
void frontnet_fn_034279(void);
/* VA: 0x34298 | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_034298(void);
/* VA: 0x3431e | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_03431e(void);
/* VA: 0x343a4 | Module frontnet.cpp procedure @ 0x0343a4 */
void frontnet_fn_0343a4(void);
/* VA: 0x343d7 | Module frontnet.cpp procedure @ 0x0343d7 */
void frontnet_fn_0343d7(void);
/* VA: 0x3440a | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_03440a(void);
/* VA: 0x3442b | String 'ISDN not supported by Serial' */
void frontnet_isdn_supported_serial_03442b(void);
/* VA: 0x344c8 | Module frontnet.cpp procedure @ 0x0344c8 */
void frontnet_fn_0344c8(void);
/* VA: 0x3457c | Module frontnet.cpp procedure @ 0x03457c */
void frontnet_fn_03457c(void);
/* VA: 0x345fd | Module frontnet.cpp procedure @ 0x0345fd */
void frontnet_fn_0345fd(void);
/* VA: 0x3468f | Module frontnet.cpp procedure @ 0x03468f */
void frontnet_fn_03468f(void);
/* VA: 0x346de | References 'LbNetwork_EnumerateSessions() failed' */
void frontnet_LbNetwork_EnumerateSessions_0346de(void);
/* VA: 0x3488f | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_03488f(void);
/* VA: 0x34918 | Module frontnet.cpp procedure @ 0x034918 */
void frontnet_fn_034918(void);
/* VA: 0x34941 | Updates GUI button enabled flag from session scroll offset */
void frontnet_maintain_session_scroll_btn_034941(void);
/* VA: 0x34959 | Updates GUI button enabled flag from session scroll offset */
void frontnet_maintain_session_scroll_btn_034959(void);
/* VA: 0x34966 | Updates GUI button enabled flag from session scroll offset */
void frontnet_maintain_session_scroll_btn_034966(void);
/* VA: 0x34979 | Decrements network session list scroll offset */
void frontnet_scroll_session_list_up_034979(void);
/* VA: 0x34989 | Increments network session list scroll offset */
void frontnet_scroll_session_list_down_034989(void);
/* VA: 0x3499e | Updates GUI button enabled bit (0x08) */
void frontnet_maintain_gui_button_state_03499e(void);
/* VA: 0x349d9 | Module frontnet.cpp procedure @ 0x0349d9 */
void frontnet_fn_0349d9(void);
/* VA: 0x34a8a | Module frontnet.cpp procedure @ 0x034a8a */
void frontnet_fn_034a8a(void);
/* VA: 0x34bb6 | Copies fixed-size state structure via LbMemoryCopy */
void frontnet_copy_state_struct_034bb6(void);
/* VA: 0x34bdc | Module frontnet.cpp procedure @ 0x034bdc */
void frontnet_fn_034bdc(void);
/* VA: 0x34bff | Copies fixed-size state structure via LbMemoryCopy */
void frontnet_copy_state_struct_034bff(void);
/* VA: 0x34c0f | Copies fixed-size state structure via LbMemoryCopy */
void frontnet_copy_state_struct_034c0f(void);
/* VA: 0x34c1f | Copies fixed-size state structure via LbMemoryCopy */
void frontnet_copy_state_struct_034c1f(void);
/* VA: 0x34c2f | Copies fixed-size state structure via LbMemoryCopy */
void frontnet_copy_state_struct_034c2f(void);
/* VA: 0x34c3f | Copies fixed-size state structure via LbMemoryCopy */
void frontnet_copy_state_struct_034c3f(void);
/* VA: 0x34c4f | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_034c4f(void);
/* VA: 0x34d86 | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_034d86(void);
/* VA: 0x34ea2 | Module frontnet.cpp procedure @ 0x034ea2 */
void frontnet_fn_034ea2(void);
/* VA: 0x34ed8 | Module frontnet.cpp procedure @ 0x034ed8 */
void frontnet_fn_034ed8(void);
/* VA: 0x34f38 | References 'LbNetwork_EnumeratePlayers() failed' */
void frontnet_LbNetwork_EnumeratePlayers_034f38(void);
/* VA: 0x35037 | Module frontnet.cpp procedure @ 0x035037 */
void frontnet_fn_035037(void);
/* VA: 0x350a0 | Updates GUI button enabled flag from lobby player count/scroll */
void frontnet_maintain_player_list_btn_0350a0(void);
/* VA: 0x350ad | Decrements lobby player list scroll offset */
void frontnet_scroll_player_list_up_0350ad(void);
/* VA: 0x350bd | Increments lobby player list scroll offset */
void frontnet_scroll_player_list_down_0350bd(void);
/* VA: 0x350d2 | Updates GUI button enabled flag from lobby player count/scroll */
void frontnet_maintain_player_list_btn_0350d2(void);
/* VA: 0x350df | Updates GUI button enabled flag from lobby player count/scroll */
void frontnet_maintain_player_list_btn_0350df(void);
/* VA: 0x350f2 | Decrements lobby chat scroll offset */
void frontnet_scroll_chat_list_up_0350f2(void);
/* VA: 0x35102 | Increments lobby chat scroll offset */
void frontnet_scroll_chat_list_down_035102(void);
/* VA: 0x35117 | Updates GUI button enabled flag from lobby chat scroll */
void frontnet_maintain_chat_scroll_btn_035117(void);
/* VA: 0x35124 | Updates GUI button enabled flag from lobby chat scroll */
void frontnet_maintain_chat_scroll_btn_035124(void);
/* VA: 0x35137 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void frontnet_update_player_view_state_035137(void);
/* VA: 0x351d7 | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_0351d7(void);
/* VA: 0x35304 | Updates GUI button enabled flag from lobby player count/scroll */
void frontnet_maintain_player_list_btn_035304(void);
/* VA: 0x35338 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void frontnet_update_player_view_state_035338(void);
/* VA: 0x3536a | Sets active font and draws GUI button text label */
void frontnet_draw_gui_button_label_03536a(void);
/* VA: 0x3540e | Module frontnet.cpp procedure @ 0x03540e */
longlong frontnet_fn_03540e(void);
/* VA: 0x35446 | String 'Too many sessions in enumeration' */
void frontnet_sessions_enumeration_035446(undefined4 param_1);
/* VA: 0x354fb | String 'Too many players in enumeration' */
void frontnet_players_enumeration_0354fb(void);
/* VA: 0x35546 | String 'Unrecognised Network Service' */
void frontnet_unrecognised_network_service_035546(void);
/* VA: 0x3562b | Module frontnet.cpp procedure @ 0x03562b */
longlong frontnet_fn_03562b(void);
/* VA: 0x35666 | Module frontnet.cpp procedure @ 0x035666 */
undefined4 frontnet_fn_035666(void);
/* VA: 0x356d1 | Module frontnet.cpp procedure @ 0x0356d1 */
longlong frontnet_fn_0356d1(void);
/* VA: 0x35758 | References 'LbNetwork_Exchange failed' */
void frontnet_LbNetwork_Exchange_035758(void);
/* VA: 0x35ac5 | Module frontnet.cpp procedure @ 0x035ac5 */
void frontnet_fn_035ac5(void);
/* VA: 0x35b51 | String 'SAVE\CONFIG.NET' */
void frontnet_save_config_net_035b51(void);
/* VA: 0x35bbf | String 'SAVE\CONFIG.NET' */
void frontnet_save_config_net_035bbf(void);
/* VA: 0x35c1e | Module frontnet.cpp procedure @ 0x035c1e */
undefined4 frontnet_fn_035c1e(void);
/* VA: 0x35c5a | Module frontnet.cpp procedure @ 0x035c5a */
undefined4 frontnet_fn_035c5a(void);
/* VA: 0x35c86 | Module frontnet.cpp procedure @ 0x035c86 */
void frontnet_fn_035c86(void);
/* VA: 0x35cc1 | Module frontnet.cpp procedure @ 0x035cc1 */
undefined8 frontnet_fn_035cc1(void);
/* VA: 0x35ce2 | Module frontnet.cpp procedure @ 0x035ce2 */
longlong frontnet_fn_035ce2(void);
/* VA: 0x35d29 | References 'LbNetwork_Stop() failed' */
void frontnet_LbNetwork_Stop_035d29(void);
/* VA: 0x35e19 | Module frontnet.cpp procedure @ 0x035e19 */
undefined4 frontnet_fn_035e19(void);
/* VA: 0x35e3c | Accesses per-player Dungeon state (stride 0x1508) */
void frontnet_update_player_dungeon_035e3c(void);
/* VA: 0x36008 | Module frontnet.cpp procedure @ 0x036008 */
void frontnet_fn_036008(void);
/* VA: 0x36018 | Configures font/flags and draws text on screen */
void frontnet_draw_text_overlay_036018(void);
/* VA: 0x360e8 | Configures font/flags and draws text on screen */
void frontnet_draw_text_overlay_0360e8(void);
/* VA: 0x36188 | Configures font/flags and draws text on screen */
void frontnet_draw_text_overlay_036188(void);
/* VA: 0x36223 | Module frontnet.cpp procedure @ 0x036223 */
void frontnet_fn_036223(void);
/* VA: 0x36278 | Configures font/flags and draws text on screen */
void frontnet_draw_text_overlay_036278(void);
/* VA: 0x362e1 | Module frontnet.cpp procedure @ 0x0362e1 */
undefined4 frontnet_fn_0362e1(void);

/* === Module: fronttor.cpp (14 functions) === */
/* VA: 0x362e4 | Operates on Room structure in g_rooms (stride 0x45) */
longlong fronttor_process_dungeon_room_0362e4(void);
/* VA: 0x36346 | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 fronttor_update_player_dungeon_036346(void);
/* VA: 0x363ca | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 fronttor_process_dungeon_room_0363ca(void);
/* VA: 0x36442 | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 fronttor_update_player_dungeon_036442(void);
/* VA: 0x3646d | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 fronttor_update_player_dungeon_03646d(void);
/* VA: 0x36498 | Module fronttor.cpp procedure @ 0x036498 */
undefined8 fronttor_fn_036498(void);
/* VA: 0x364da | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 fronttor_process_dungeon_room_0364da(void);
/* VA: 0x36523 | Module fronttor.cpp procedure @ 0x036523 */
undefined1 fronttor_fn_036523(void);
/* VA: 0x36654 | String 'LDATA\FRONTTOR.TAB' */
void fronttor_ldata_fronttor_tab_036654(void);
/* VA: 0x3699b | String 'LDATA\FRONTTOR.TAB' */
void fronttor_ldata_fronttor_tab_03699b(void);
/* VA: 0x369c4 | Module fronttor.cpp procedure @ 0x0369c4 */
void fronttor_fn_0369c4(void);
/* VA: 0x36a59 | References 'LbNetwork_Exchange failed' */
void fronttor_LbNetwork_Exchange_036a59(void);
/* VA: 0x36e52 | Module fronttor.cpp procedure @ 0x036e52 */
void fronttor_fn_036e52(void);
/* VA: 0x36e7e | Module fronttor.cpp procedure @ 0x036e7e */
void fronttor_fn_036e7e(void);

/* === Module: game.cpp (9 functions) === */
/* VA: 0x36f48 | Module game.cpp procedure @ 0x036f48 */
void game_fn_036f48(void);
/* VA: 0x36ff4 | String 'OUT OF SYNC (GameTurn %d)' */
void game_out_sync_gameturn_036ff4(void);
/* VA: 0x37350 | Module game.cpp procedure @ 0x037350 */
ulonglong game_fn_037350(void);
/* VA: 0x373bc | Module game.cpp procedure @ 0x0373bc */
void game_fn_0373bc(void);
/* VA: 0x3743b | Module game.cpp procedure @ 0x03743b */
void game_fn_03743b(void);
/* VA: 0x374c3 | Module game.cpp procedure @ 0x0374c3 */
void game_fn_0374c3(void);
/* VA: 0x3752a | Configures font/flags and draws text on screen */
void game_draw_text_overlay_03752a(void);
/* VA: 0x377eb | Module game.cpp procedure @ 0x0377eb */
void game_fn_0377eb(void);
/* VA: 0x3783c | Module game.cpp procedure @ 0x03783c */
longlong game_fn_03783c(void);

/* === Module: gen2.cpp (15 functions) === */
/* VA: 0x37874 | Module gen2.cpp procedure @ 0x037874 */
longlong gen2_fn_037874(void);
/* VA: 0x378ba | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 gen2_update_creature_and_thing_0378ba(void);
/* VA: 0x37941 | Module gen2.cpp procedure @ 0x037941 */
longlong gen2_fn_037941(void);
/* VA: 0x37964 | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong gen2_update_player_view_state_037964(void);
/* VA: 0x379fe | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 gen2_update_player_dungeon_0379fe(void);
/* VA: 0x37d01 | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 gen2_update_player_dungeon_037d01(void);
/* VA: 0x37deb | String 'COULD NOT GET A RANDOM ENTRANCE' */
undefined4 gen2_could_get_random_entrance_037deb(void);
/* VA: 0x37e26 | Module gen2.cpp procedure @ 0x037e26 */
undefined4 gen2_fn_037e26(void);
/* VA: 0x37eab | Module gen2.cpp procedure @ 0x037eab */
void gen2_fn_037eab(void);
/* VA: 0x37ee4 | String 'Trying to remove an unavailable creature from the creature p' */
longlong gen2_trying_remove_an_unavailable_037ee4(void);
/* VA: 0x37f1b | Module gen2.cpp procedure @ 0x037f1b */
void gen2_fn_037f1b(void);
/* VA: 0x37f3b | Module gen2.cpp procedure @ 0x037f3b */
undefined4 gen2_fn_037f3b(void);
/* VA: 0x37f61 | String 'CREATURE AVAILABLE BUT NO CREATURE SCORES - XLS?' */
undefined8 gen2_creature_available_but_creature_037f61(void);
/* VA: 0x3806d | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong gen2_update_player_view_state_03806d(void);
/* VA: 0x3818c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 gen2_update_creature_control_03818c(void);

/* === Module: good.cpp (24 functions) === */
/* VA: 0x38212 | Module good.cpp procedure @ 0x038212 */
longlong good_fn_038212(void);
/* VA: 0x3826c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 good_update_creature_control_03826c(void);
/* VA: 0x382d8 | String 'Level design error - Player %d should have lost by now' */
longlong good_level_design_player_should_0382d8(void);
/* VA: 0x38506 | Module good.cpp procedure @ 0x038506 */
undefined8 good_fn_038506(void);
/* VA: 0x38548 | Reads/modifies Map[256x256] subtile data */
undefined8 good_process_map_subtile_038548(void);
/* VA: 0x38615 | Module good.cpp procedure @ 0x038615 */
undefined8 good_fn_038615(void);
/* VA: 0x38668 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong good_update_creature_control_038668(void);
/* VA: 0x386e1 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong good_update_creature_control_0386e1(void);
/* VA: 0x387b3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 good_update_creature_control_0387b3(void);
/* VA: 0x38989 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 good_update_creature_and_thing_038989(void);
/* VA: 0x38a99 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 good_update_creature_control_038a99(void);
/* VA: 0x38b05 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 good_process_thing_entity_038b05(void);
/* VA: 0x38b5e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 good_update_creature_control_038b5e(void);
/* VA: 0x38cba | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 good_update_creature_and_thing_038cba(void);
/* VA: 0x38dcb | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 good_update_creature_and_thing_038dcb(void);
/* VA: 0x38edc | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 good_update_player_dungeon_038edc(void);
/* VA: 0x38f2b | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 good_process_thing_entity_038f2b(void);
/* VA: 0x38f70 | Module good.cpp procedure @ 0x038f70 */
longlong good_fn_038f70(void);
/* VA: 0x38faa | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 good_update_creature_control_038faa(void);
/* VA: 0x390af | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 good_update_creature_control_0390af(void);
/* VA: 0x390e3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 good_update_creature_control_0390e3(void);
/* VA: 0x39118 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void good_update_creature_control_039118(void);
/* VA: 0x3915c | Module good.cpp procedure @ 0x03915c */
void good_fn_03915c(void);
/* VA: 0x3919b | Module good.cpp procedure @ 0x03919b */
void good_fn_03919b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);

/* === Module: gravyard.cpp (11 functions) === */
/* VA: 0x391e9 | Module gravyard.cpp procedure @ 0x0391e9 */
void gravyard_fn_0391e9(void);
/* VA: 0x39202 | Module gravyard.cpp procedure @ 0x039202 */
void gravyard_fn_039202(void);
/* VA: 0x392c5 | Module gravyard.cpp procedure @ 0x0392c5 */
void gravyard_fn_0392c5(int param_1,int param_2,int param_3);
/* VA: 0x397c3 | Module gravyard.cpp procedure @ 0x0397c3 */
void gravyard_fn_0397c3(void);
/* VA: 0x398b4 | String 'Creature already decomposing in graveyard' */
void gravyard_creature_already_decomposing_graveyard_0398b4(void);
/* VA: 0x39901 | String 'COULD NOT FIND VALID POSITION IN ROOM' */
undefined8 gravyard_could_find_valid_position_039901(void);
/* VA: 0x399d8 | String 'Thing was not in graveyard to be removed' */
void gravyard_thing_was_graveyard_removed_0399d8(void);
/* VA: 0x39a74 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 gravyard_update_creature_control_039a74(void);
/* VA: 0x39ba4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 gravyard_update_creature_control_039ba4(void);
/* VA: 0x39d55 | Module gravyard.cpp procedure @ 0x039d55 */
longlong gravyard_fn_039d55(void);
/* VA: 0x39d83 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 gravyard_update_creature_and_thing_039d83(void);

/* === Module: group.cpp (10 functions) === */
/* VA: 0x39c3e | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 group_update_creature_and_thing_039c3e(void);
/* VA: 0x39dab | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void group_update_creature_and_thing_039dab(void);
/* VA: 0x39de2 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void group_update_creature_and_thing_039de2(void);
/* VA: 0x39e36 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 group_update_creature_and_thing_039e36(void);
/* VA: 0x39e7e | Module group.cpp procedure @ 0x039e7e */
undefined8 group_fn_039e7e(void);
/* VA: 0x39e90 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 group_update_creature_and_thing_039e90(void);
/* VA: 0x39eca | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void group_update_creature_control_039eca(void);
/* VA: 0x3a237 | String 'INFINATE LOOP IN DISPAND GROUP' */
longlong group_infinate_loop_dispand_group_03a237(void);
/* VA: 0x3a2ad | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong group_update_player_view_state_03a2ad(void);
/* VA: 0x3a32d | String 'INFINATE LOOP IN DISPAND GROUP' */
longlong group_infinate_loop_dispand_group_03a32d(void);

/* === Module: heap.cpp (13 functions) === */
/* VA: 0x3a3d4 | String 'Graphics heap already allocated' */
undefined8 heap_graphics_heap_already_allocated_03a3d4(void);
/* VA: 0x3a4bb | Module heap.cpp procedure @ 0x03a4bb */
void heap_fn_03a4bb(void);
/* VA: 0x3a4e3 | String 'Graphics Heap not allocated' */
void heap_graphics_heap_allocated_03a4e3(void);
/* VA: 0x3a57e | Module heap.cpp procedure @ 0x03a57e */
void heap_fn_03a57e(void);
/* VA: 0x3a5aa | Module heap.cpp procedure @ 0x03a5aa */
undefined8 heap_fn_03a5aa(void);
/* VA: 0x3a5cb | String 'Unable to find freeable item' */
undefined8 heap_find_freeable_item_03a5cb(void);
/* VA: 0x3a6a4 | Module heap.cpp procedure @ 0x03a6a4 */
void heap_fn_03a6a4(void);
/* VA: 0x3a6f3 | Module heap.cpp procedure @ 0x03a6f3 */
void heap_fn_03a6f3(void);
/* VA: 0x3a742 | Module heap.cpp procedure @ 0x03a742 */
undefined8 heap_fn_03a742(void);
/* VA: 0x3a7b8 | References 'can not open creature.jty <open_keeper_data_file()>' */
undefined8 heap_open_keeper_data_file_03a7b8(void);
/* VA: 0x3a839 | Module heap.cpp procedure @ 0x03a839 */
void heap_fn_03a839(void);
/* VA: 0x3a857 | Module heap.cpp procedure @ 0x03a857 */
undefined4 heap_fn_03a857(void);
/* VA: 0x3a8a8 | Module heap.cpp procedure @ 0x03a8a8 */
int * heap_fn_03a8a8(void);

/* === Module: heapmgr.cpp (21 functions) === */
/* VA: 0x3a8f7 | String 'Overlapping heap blocks' */
int * heapmgr_overlapping_heap_blocks_03a8f7(void);
/* VA: 0x3aa24 | Module heapmgr.cpp procedure @ 0x03aa24 */
void heapmgr_fn_03aa24(void);
/* VA: 0x3aa62 | Module heapmgr.cpp procedure @ 0x03aa62 */
undefined8 heapmgr_fn_03aa62(void);
/* VA: 0x3aa92 | Module heapmgr.cpp procedure @ 0x03aa92 */
undefined2 heapmgr_fn_03aa92(void);
/* VA: 0x3ab51 | String 'Heap Start %p, End %p, Size %d' */
void heapmgr_heap_start_end_size_03ab51(void);
/* VA: 0x3acde | Module heapmgr.cpp procedure @ 0x03acde */
void heapmgr_fn_03acde(void);
/* VA: 0x3ad39 | Module heapmgr.cpp procedure @ 0x03ad39 */
void heapmgr_fn_03ad39(void);
/* VA: 0x3ad7a | Module heapmgr.cpp procedure @ 0x03ad7a */
undefined8 heapmgr_fn_03ad7a(void);
/* VA: 0x3ad98 | Reads/modifies Map[256x256] subtile data */
undefined4 heapmgr_process_map_subtile_03ad98(void);
/* VA: 0x3adf1 | Reads/modifies Map[256x256] subtile data */
undefined4 heapmgr_process_map_subtile_03adf1(void);
/* VA: 0x3ae40 | Reads/modifies Map[256x256] subtile data */
undefined4 heapmgr_process_map_subtile_03ae40(void);
/* VA: 0x3ae99 | Reads/modifies Map[256x256] subtile data */
undefined4 heapmgr_process_map_subtile_03ae99(void);
/* VA: 0x3b2c0 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
uint heapmgr_process_thing_entity_03b2c0(void);
/* VA: 0x3b3a4 | Module heapmgr.cpp procedure @ 0x03b3a4 */
undefined4 heapmgr_fn_03b3a4(void);
/* VA: 0x3b3e9 | Module heapmgr.cpp procedure @ 0x03b3e9 */
void heapmgr_fn_03b3e9(void);
/* VA: 0x3b429 | Module heapmgr.cpp procedure @ 0x03b429 */
bool heapmgr_fn_03b429(void);
/* VA: 0x3b45b | Module heapmgr.cpp procedure @ 0x03b45b */
bool heapmgr_fn_03b45b(void);
/* VA: 0x3b49d | Updates 3x3 subtile map entries for slab coordinates */
uint heapmgr_update_slab_subtile_columns_03b49d(void);
/* VA: 0x3b643 | Reads/modifies Map[256x256] subtile data */
void heapmgr_process_map_subtile_03b643(void);
/* VA: 0x3bb5e | Module heapmgr.cpp procedure @ 0x03bb5e */
void heapmgr_fn_03bb5e(void);
/* VA: 0x3bb93 | Reads/modifies Map[256x256] subtile data */
undefined4 heapmgr_process_map_subtile_03bb93(void);

/* === Module: impset.cpp (70 functions) === */
/* VA: 0x3aef2 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 impset_process_slabmap_tile_03aef2(void);
/* VA: 0x3af4b | Updates 3x3 subtile map entries for slab coordinates */
undefined4 impset_update_slab_subtile_columns_03af4b(void);
/* VA: 0x3b0a0 | Reads/modifies Map[256x256] subtile data */
undefined4 impset_process_map_subtile_03b0a0(void);
/* VA: 0x3b12c | Reads/modifies Map[256x256] subtile data */
uint impset_process_map_subtile_03b12c(void);
/* VA: 0x3b17f | Reads/modifies Map[256x256] subtile data */
uint impset_process_map_subtile_03b17f(void);
/* VA: 0x3b1e2 | Updates 3x3 subtile map entries for slab coordinates */
byte * impset_update_slab_subtile_columns_03b1e2(void);
/* VA: 0x3b263 | Reads/modifies Map[256x256] subtile data */
int impset_process_map_subtile_03b263(void);
/* VA: 0x3b30e | Looks up Thing* in g_thing_ptrs[2048] and updates state */
uint impset_process_thing_entity_03b30e(void);
/* VA: 0x3b35c | Reads/modifies Map[256x256] subtile data */
uint impset_process_map_subtile_03b35c(void);
/* VA: 0x3bcbe | Reads/modifies Map[256x256] subtile data */
undefined4 impset_process_map_subtile_03bcbe(void);
/* VA: 0x3bdb1 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 impset_process_slabmap_tile_03bdb1(void);
/* VA: 0x3bec5 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 impset_process_slabmap_tile_03bec5(void);
/* VA: 0x3bf49 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 impset_process_thing_entity_03bf49(void);
/* VA: 0x3bfa4 | Reads/modifies SlabMap[85x85] tile entry */
undefined8 impset_process_slabmap_tile_03bfa4(void);
/* VA: 0x3c096 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 impset_update_slab_subtile_columns_03c096(void);
/* VA: 0x3c17e | Updates 3x3 subtile map entries for slab coordinates */
undefined8 impset_update_slab_subtile_columns_03c17e(void);
/* VA: 0x3c289 | Accesses per-player Dungeon state (stride 0x1508) */
longlong impset_update_player_dungeon_03c289(void);
/* VA: 0x3c31c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 impset_update_creature_and_thing_03c31c(void);
/* VA: 0x3c3e7 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 impset_process_thing_entity_03c3e7(void);
/* VA: 0x3c458 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 impset_update_creature_and_thing_03c458(void);
/* VA: 0x3c53a | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 impset_update_creature_and_thing_03c53a(void);
/* VA: 0x3c762 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 impset_update_creature_and_thing_03c762(void);
/* VA: 0x3c91b | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 impset_update_creature_and_thing_03c91b(void);
/* VA: 0x3ca68 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 impset_update_creature_and_thing_03ca68(void);
/* VA: 0x3cbaa | Updates 3x3 subtile map entries for slab coordinates */
undefined4 impset_update_slab_subtile_columns_03cbaa(void);
/* VA: 0x3ccdb | Module impset.cpp procedure @ 0x03ccdb */
undefined4 impset_fn_03ccdb(void);
/* VA: 0x3cd1f | Module impset.cpp procedure @ 0x03cd1f */
undefined4 impset_fn_03cd1f(void);
/* VA: 0x3cd63 | Module impset.cpp procedure @ 0x03cd63 */
undefined4 impset_fn_03cd63(void);
/* VA: 0x3cdcc | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined4 impset_roll_action_random_03cdcc(void);
/* VA: 0x3cee2 | Module impset.cpp procedure @ 0x03cee2 */
undefined4 impset_fn_03cee2(void);
/* VA: 0x3cf87 | Module impset.cpp procedure @ 0x03cf87 */
undefined4 impset_fn_03cf87(void);
/* VA: 0x3d02c | Module impset.cpp procedure @ 0x03d02c */
undefined8 impset_fn_03d02c(void);
/* VA: 0x3d0cf | Module impset.cpp procedure @ 0x03d0cf */
undefined8 impset_fn_03d0cf(void);
/* VA: 0x3d155 | Module impset.cpp procedure @ 0x03d155 */
undefined4 impset_fn_03d155(void);
/* VA: 0x3d1be | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined4 impset_roll_action_random_03d1be(void);
/* VA: 0x3d2d5 | Module impset.cpp procedure @ 0x03d2d5 */
undefined8 impset_fn_03d2d5(void);
/* VA: 0x3d37a | Module impset.cpp procedure @ 0x03d37a */
undefined8 impset_fn_03d37a(void);
/* VA: 0x3d3f3 | String 'INVALID STACK TYPE' */
undefined8 impset_stack_type_03d3f3(void);
/* VA: 0x3d633 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03d633(void);
/* VA: 0x3d77d | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03d77d(void);
/* VA: 0x3d8b0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03d8b0(void);
/* VA: 0x3d9f3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 impset_update_creature_control_03d9f3(void);
/* VA: 0x3db27 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03db27(void);
/* VA: 0x3dc2a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 impset_update_creature_control_03dc2a(void);
/* VA: 0x3dd25 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03dd25(void);
/* VA: 0x3de04 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03de04(void);
/* VA: 0x3df64 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03df64(void);
/* VA: 0x3e199 | Module impset.cpp procedure @ 0x03e199 */
longlong impset_fn_03e199(void);
/* VA: 0x3e286 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong impset_update_creature_control_03e286(void);
/* VA: 0x3e2d8 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
longlong impset_roll_action_random_03e2d8(void);
/* VA: 0x3e33a | Accesses per-player Dungeon state (stride 0x1508) */
longlong impset_update_player_dungeon_03e33a(void);
/* VA: 0x3e493 | String 'INVALID STACK TYPE' */
undefined8 impset_stack_type_03e493(void);
/* VA: 0x3ed80 | Module impset.cpp procedure @ 0x03ed80 */
longlong impset_fn_03ed80(void);
/* VA: 0x3edee | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03edee(void);
/* VA: 0x3eea6 | Module impset.cpp procedure @ 0x03eea6 */
undefined8 impset_fn_03eea6(void);
/* VA: 0x3ef05 | Module impset.cpp procedure @ 0x03ef05 */
undefined8 impset_fn_03ef05(void);
/* VA: 0x3ef50 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03ef50(void);
/* VA: 0x3f12c | Module impset.cpp procedure @ 0x03f12c */
undefined8 impset_fn_03f12c(void);
/* VA: 0x3f238 | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 impset_process_dungeon_room_03f238(void);
/* VA: 0x3f3b8 | Module impset.cpp procedure @ 0x03f3b8 */
longlong impset_fn_03f3b8(void);
/* VA: 0x3f3f7 | Module impset.cpp procedure @ 0x03f3f7 */
undefined8 impset_fn_03f3f7(void);
/* VA: 0x3f42b | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03f42b(void);
/* VA: 0x3f4c0 | Module impset.cpp procedure @ 0x03f4c0 */
undefined8 impset_fn_03f4c0(void);
/* VA: 0x3f4f4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03f4f4(void);
/* VA: 0x3f664 | Module impset.cpp procedure @ 0x03f664 */
longlong impset_fn_03f664(void);
/* VA: 0x3f682 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 impset_update_creature_control_03f682(void);
/* VA: 0x3f6fc | Reads/modifies SlabMap[85x85] tile entry */
undefined4 impset_process_slabmap_tile_03f6fc(void);
/* VA: 0x3f74f | Reads/modifies SlabMap[85x85] tile entry */
undefined4 impset_process_slabmap_tile_03f74f(void);
/* VA: 0x3fad0 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 impset_update_creature_and_thing_03fad0(void);
/* VA: 0x3fcd0 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 impset_process_slabmap_tile_03fcd0(void);

/* === Module: imptool.cpp (16 functions) === */
/* VA: 0x3f7ad | Reads/modifies SlabMap[85x85] tile entry */
undefined4 imptool_process_slabmap_tile_03f7ad(void);
/* VA: 0x3f80c | Module imptool.cpp procedure @ 0x03f80c */
undefined4 imptool_fn_03f80c(void);
/* VA: 0x3f859 | Module imptool.cpp procedure @ 0x03f859 */
undefined4 imptool_fn_03f859(void);
/* VA: 0x3f88a | Reads/modifies Map[256x256] subtile data */
undefined4 imptool_process_map_subtile_03f88a(void);
/* VA: 0x3f8e8 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 imptool_update_creature_and_thing_03f8e8(void);
/* VA: 0x3f98b | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong imptool_update_creature_and_thing_03f98b(void);
/* VA: 0x3fa16 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 imptool_update_creature_and_thing_03fa16(void);
/* VA: 0x3fb7f | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 imptool_update_creature_and_thing_03fb7f(void);
/* VA: 0x3fbe3 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 imptool_process_slabmap_tile_03fbe3(void);
/* VA: 0x3fc39 | Reads/modifies Map[256x256] subtile data */
undefined4 imptool_process_map_subtile_03fc39(void);
/* VA: 0x3fc88 | Module imptool.cpp procedure @ 0x03fc88 */
undefined4 imptool_fn_03fc88(void);
/* VA: 0x3fed7 | Module imptool.cpp procedure @ 0x03fed7 */
undefined4 imptool_fn_03fed7(void);
/* VA: 0x4002e | Accesses per-player Dungeon state (stride 0x1508) */
uint imptool_update_player_dungeon_04002e(void);
/* VA: 0x400da | String 'INVALID STACK POS' */
undefined4 imptool_stack_pos_0400da(void);
/* VA: 0x40160 | Accesses per-player Dungeon state (stride 0x1508) */
int imptool_update_player_dungeon_040160(void);
/* VA: 0x401aa | Accesses per-player Dungeon state (stride 0x1508) */
int imptool_update_player_dungeon_0401aa(void);

/* === Module: inits.cpp (62 functions) === */
/* VA: 0x401ec | Module inits.cpp procedure @ 0x0401ec */
void inits_fn_0401ec(void);
/* VA: 0x402e5 | String 'Non Keeper in Keeper game' */
void inits_non_keeper_keeper_game_0402e5(void);
/* VA: 0x404f7 | String 'Could not create ambient sound object' */
void inits_could_create_ambient_sound_0404f7(void);
/* VA: 0x407e1 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void inits_process_thing_entity_0407e1(void);
/* VA: 0x40832 | Accesses per-player Dungeon state (stride 0x1508) */
void inits_update_player_dungeon_040832(void);
/* VA: 0x40992 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_040992(void);
/* VA: 0x409ba | Module inits.cpp procedure @ 0x0409ba */
void inits_fn_0409ba(void);
/* VA: 0x40a20 | Updates 3x3 subtile map entries for slab coordinates */
void inits_update_slab_subtile_columns_040a20(void);
/* VA: 0x40b52 | Reads/modifies SlabMap[85x85] tile entry */
int inits_process_slabmap_tile_040b52(void);
/* VA: 0x40ba7 | Updates 3x3 subtile map entries for slab coordinates */
void inits_update_slab_subtile_columns_040ba7(void);
/* VA: 0x40ce0 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_040ce0(void);
/* VA: 0x40d25 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
void inits_roll_action_random_040d25(void);
/* VA: 0x40db9 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_040db9(void);
/* VA: 0x40e94 | Module inits.cpp procedure @ 0x040e94 */
void inits_fn_040e94(void);
/* VA: 0x40ee4 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void inits_process_thing_entity_040ee4(void);
/* VA: 0x40f49 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void inits_process_thing_entity_040f49(void);
/* VA: 0x40f98 | Module inits.cpp procedure @ 0x040f98 */
void inits_fn_040f98(void);
/* VA: 0x41019 | Module inits.cpp procedure @ 0x041019 */
void inits_fn_041019(void);
/* VA: 0x41043 | Module inits.cpp procedure @ 0x041043 */
void inits_fn_041043(void);
/* VA: 0x42fc8 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void inits_process_thing_entity_042fc8(void);
/* VA: 0x430ba | Module inits.cpp procedure @ 0x0430ba */
void inits_fn_0430ba(void);
/* VA: 0x4338b | Module inits.cpp procedure @ 0x04338b */
void inits_fn_04338b(void);
/* VA: 0x43ac3 | Module inits.cpp procedure @ 0x043ac3 */
undefined4 inits_fn_043ac3(void);
/* VA: 0x43bb3 | String ''Told You So' error! Cannot create creature because there ar' */
int inits_told_you_so_create_043bb3(void);
/* VA: 0x43f07 | String 'Cannot allocate light to object' */
int inits_allocate_light_object_043f07(void);
/* VA: 0x442ca | String 'Cannot allocate dynamic light to shot' */
int inits_allocate_dynamic_light_shot_0442ca(void);
/* VA: 0x444a9 | String 'Cannot allocate dynamic light to shot' */
int inits_allocate_dynamic_light_shot_0444a9(void);
/* VA: 0x447fb | String 'Cannot allocate dynamic light to trap' */
int inits_allocate_dynamic_light_trap_0447fb(void);
/* VA: 0x449a4 | String ''Told You So' error! Cannot create door because there are to' */
int inits_told_you_so_create_0449a4(undefined1 param_1);
/* VA: 0x44b13 | String ''Told You So' error! Cannot create dead creature because the' */
int inits_told_you_so_create_044b13(undefined1 param_1);
/* VA: 0x44ca6 | String ''Told You So' error! Cannot create effect generator because ' */
int inits_told_you_so_create_044ca6(int param_1);
/* VA: 0x44d42 | String ''Told You So' error! Cannot create ambient sound because the' */
int inits_told_you_so_create_044d42(void);
/* VA: 0x44dae | Accesses per-player Dungeon state (stride 0x1508) */
int inits_update_player_dungeon_044dae(void);
/* VA: 0x44ead | Module inits.cpp procedure @ 0x044ead */
undefined4 inits_fn_044ead(void);
/* VA: 0x44eb6 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void inits_update_creature_and_thing_044eb6(void);
/* VA: 0x44f33 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
void inits_roll_action_random_044f33(void);
/* VA: 0x450a0 | Module inits.cpp procedure @ 0x0450a0 */
void inits_fn_0450a0(void);
/* VA: 0x45123 | Module inits.cpp procedure @ 0x045123 */
void inits_fn_045123(void);
/* VA: 0x45198 | String 'COULDN'T GET A CREATURE SCORE (%d)' */
void inits_couldn_get_creature_score_045198(void);
/* VA: 0x45394 | Module inits.cpp procedure @ 0x045394 */
void inits_fn_045394(void);
/* VA: 0x453dd | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void inits_process_thing_entity_0453dd(void);
/* VA: 0x45402 | Reads/modifies Map[256x256] subtile data */
void inits_process_map_subtile_045402(void);
/* VA: 0x45524 | String 'XLS - Creature:%d No LairSize But Heal Requirment - Fixing' */
void inits_xls_creature_lairsize_but_045524(void);
/* VA: 0x4578b | Module inits.cpp procedure @ 0x04578b */
void inits_fn_04578b(void);
/* VA: 0x457bd | String 'WLB file is muddled - Fixing' */
void inits_wlb_file_muddled_fixing_0457bd(void);
/* VA: 0x45bb8 | Module inits.cpp procedure @ 0x045bb8 */
void inits_fn_045bb8(void);
/* VA: 0x45ca0 | Module inits.cpp procedure @ 0x045ca0 */
void inits_fn_045ca0(void);
/* VA: 0x45cc1 | Module inits.cpp procedure @ 0x045cc1 */
void inits_fn_045cc1(void);
/* VA: 0x45dbb | Module inits.cpp procedure @ 0x045dbb */
undefined4 inits_fn_045dbb(void);
/* VA: 0x45ee5 | Module inits.cpp procedure @ 0x045ee5 */
undefined4 inits_fn_045ee5(void);
/* VA: 0x45f23 | Module inits.cpp procedure @ 0x045f23 */
uint inits_fn_045f23(void);
/* VA: 0x45fb9 | Module inits.cpp procedure @ 0x045fb9 */
undefined1 inits_fn_045fb9(void);
/* VA: 0x45fd1 | Updates 3x3 subtile map entries for slab coordinates */
uint inits_update_slab_subtile_columns_045fd1(void);
/* VA: 0x462a3 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong inits_update_creature_and_thing_0462a3(void);
/* VA: 0x4660b | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_04660b(void);
/* VA: 0x46701 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_046701(void);
/* VA: 0x46892 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_046892(void);
/* VA: 0x46d42 | Module inits.cpp procedure @ 0x046d42 */
undefined8 inits_fn_046d42(void);
/* VA: 0x46d5a | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_046d5a(void);
/* VA: 0x47237 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void inits_update_player_view_state_047237(void);
/* VA: 0x4839c | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined1 * inits_update_player_view_state_04839c(void);
/* VA: 0x4845c | Accesses per-player PlayerInfo state (stride 0x4ef) */
byte inits_update_player_view_state_04845c(void);

/* === Module: input.cpp (19 functions) === */
/* VA: 0x473e1 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void input_process_thing_entity_0473e1(void);
/* VA: 0x47755 | Configures font/flags and draws text on screen */
undefined8 input_draw_text_overlay_047755(void);
/* VA: 0x47bcd | Accesses per-player Dungeon state (stride 0x1508) */
longlong input_update_player_dungeon_047bcd(void);
/* VA: 0x47ea3 | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong input_update_player_view_state_047ea3(void);
/* VA: 0x47fe2 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
longlong input_process_thing_entity_047fe2(void);
/* VA: 0x480aa | Looks up Thing* in g_thing_ptrs[2048] and updates state */
longlong input_process_thing_entity_0480aa(void);
/* VA: 0x4823a | Updates GUI button enabled bit (0x08) */
void input_maintain_gui_button_state_04823a(void);
/* VA: 0x485b8 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void input_update_player_view_state_0485b8(int param_1);
/* VA: 0x48675 | Module input.cpp procedure @ 0x048675 */
undefined1 input_fn_048675(undefined4 param_1);
/* VA: 0x4878e | Module input.cpp procedure @ 0x04878e */
undefined4 input_fn_04878e(undefined4 param_1);
/* VA: 0x48897 | Module input.cpp procedure @ 0x048897 */
undefined4 input_fn_048897(undefined4 param_1);
/* VA: 0x4897f | Module input.cpp procedure @ 0x04897f */
undefined1 input_fn_04897f(void);
/* VA: 0x48add | Module input.cpp procedure @ 0x048add */
void input_fn_048add(void);
/* VA: 0x48c77 | String 'UNKNOWN GAME ACTION -%d' */
ushort input_game_action_048c77(ushort param_1,ushort param_2);
/* VA: 0x49160 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void input_process_thing_entity_049160(void);
/* VA: 0x49343 | Accesses per-player PlayerInfo state (stride 0x4ef) */
longlong input_update_player_view_state_049343(void);
/* VA: 0x49426 | Configures font/flags and draws text on screen */
void input_draw_text_overlay_049426(void);
/* VA: 0x498d9 | Module input.cpp procedure @ 0x0498d9 */
bool input_fn_0498d9(void);
/* VA: 0x4991c | Module input.cpp procedure @ 0x04991c */
void input_fn_04991c(void);

/* === Module: instance.cpp (63 functions) === */
/* VA: 0x499ce | Module instance.cpp procedure @ 0x0499ce */
void instance_fn_0499ce(void);
/* VA: 0x49a52 | Module instance.cpp procedure @ 0x049a52 */
ulonglong instance_fn_049a52(void);
/* VA: 0x49a9a | Module instance.cpp procedure @ 0x049a9a */
void instance_fn_049a9a(void);
/* VA: 0x49af1 | Module instance.cpp procedure @ 0x049af1 */
void instance_fn_049af1(void);
/* VA: 0x49bfc | String 'Negative instance' */
void instance_negative_instance_049bfc(undefined2 *param_1);
/* VA: 0x49dd9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void instance_update_creature_control_049dd9(void);
/* VA: 0x49df5 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void instance_update_creature_control_049df5(void);
/* VA: 0x49e95 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined1 instance_update_creature_control_049e95(void);
/* VA: 0x49ea9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
bool instance_update_creature_control_049ea9(void);
/* VA: 0x49eff | Module instance.cpp procedure @ 0x049eff */
void instance_fn_049eff(void);
/* VA: 0x49f4e | Module instance.cpp procedure @ 0x049f4e */
void instance_fn_049f4e(void);
/* VA: 0x49fda | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 instance_update_creature_and_thing_049fda(void);
/* VA: 0x4a079 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 instance_update_creature_control_04a079(void);
/* VA: 0x4a0d6 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 instance_update_creature_control_04a0d6(void);
/* VA: 0x4a40c | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 instance_update_player_dungeon_04a40c(void);
/* VA: 0x4a562 | Module instance.cpp procedure @ 0x04a562 */
undefined4 instance_fn_04a562(void);
/* VA: 0x4a573 | Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed) */
void instance_roll_unsynced_random_04a573(void);
/* VA: 0x4a5d9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 instance_update_creature_control_04a5d9(void);
/* VA: 0x4a6a2 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 instance_process_dungeon_room_04a6a2(void);
/* VA: 0x4a8e1 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 instance_update_creature_control_04a8e1(void);
/* VA: 0x4a910 | Module instance.cpp procedure @ 0x04a910 */
undefined4 instance_fn_04a910(void);
/* VA: 0x4a916 | String 'THING NOT ON ROOM' */
undefined4 instance_thing_room_04a916(void);
/* VA: 0x4aa26 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 instance_update_creature_control_04aa26(void);
/* VA: 0x4ab11 | Module instance.cpp procedure @ 0x04ab11 */
undefined4 instance_fn_04ab11(void);
/* VA: 0x4ab5f | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04ab5f(void);
/* VA: 0x4abbc | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04abbc(void);
/* VA: 0x4ac70 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 instance_update_creature_and_thing_04ac70(void);
/* VA: 0x4ae00 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04ae00(void);
/* VA: 0x4ae46 | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 instance_update_player_dungeon_04ae46(void);
/* VA: 0x4aea9 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04aea9(void);
/* VA: 0x4af0a | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04af0a(void);
/* VA: 0x4af38 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 instance_update_creature_and_thing_04af38(void);
/* VA: 0x4b1c6 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04b1c6(void);
/* VA: 0x4b1f4 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04b1f4(void);
/* VA: 0x4b222 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04b222(void);
/* VA: 0x4b2a7 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04b2a7(void);
/* VA: 0x4b478 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 instance_update_creature_and_thing_04b478(void);
/* VA: 0x4b59e | Module instance.cpp procedure @ 0x04b59e */
undefined4 instance_fn_04b59e(void);
/* VA: 0x4b5ca | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04b5ca(void);
/* VA: 0x4b6ae | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04b6ae(void);
/* VA: 0x4b792 | Module instance.cpp procedure @ 0x04b792 */
undefined4 instance_fn_04b792(void);
/* VA: 0x4b7d4 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04b7d4(void);
/* VA: 0x4b80d | Module instance.cpp procedure @ 0x04b80d */
undefined4 instance_fn_04b80d(void);
/* VA: 0x4b8ea | Module instance.cpp procedure @ 0x04b8ea */
undefined4 instance_fn_04b8ea(void);
/* VA: 0x4b98c | Module instance.cpp procedure @ 0x04b98c */
undefined4 instance_fn_04b98c(void);
/* VA: 0x4b992 | Module instance.cpp procedure @ 0x04b992 */
undefined4 instance_fn_04b992(void);
/* VA: 0x4b9cc | Module instance.cpp procedure @ 0x04b9cc */
undefined4 instance_fn_04b9cc(void);
/* VA: 0x4b9ee | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 instance_update_creature_and_thing_04b9ee(void);
/* VA: 0x4baad | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04baad(void);
/* VA: 0x4bb03 | Module instance.cpp procedure @ 0x04bb03 */
undefined4 instance_fn_04bb03(void);
/* VA: 0x4bb19 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04bb19(void);
/* VA: 0x4bbe4 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 instance_process_thing_entity_04bbe4(void);
/* VA: 0x4bd35 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04bd35(void);
/* VA: 0x4bd95 | Module instance.cpp procedure @ 0x04bd95 */
undefined4 instance_fn_04bd95(void);
/* VA: 0x4bd9b | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04bd9b(void);
/* VA: 0x4bdf7 | Module instance.cpp procedure @ 0x04bdf7 */
undefined4 instance_fn_04bdf7(void);
/* VA: 0x4bdfa | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04bdfa(void);
/* VA: 0x4be63 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04be63(void);
/* VA: 0x4be9d | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04be9d(void);
/* VA: 0x4bef7 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 instance_update_player_view_state_04bef7(void);
/* VA: 0x4bf40 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 instance_update_creature_control_04bf40(void);
/* VA: 0x4c0ac | String 'data\swpe??.dat' */
void instance_data_swpe_dat_04c0ac(void);
/* VA: 0x4c14e | String 'data\swpe??.dat' */
void instance_data_swpe_dat_04c14e(void);

/* === Module: jtyedit.cpp (8 functions) === */
/* VA: 0x4c16c | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
uint jtyedit_roll_action_random_04c16c(void);
/* VA: 0x4c1e3 | String 'We should only be dealing with columns now' */
void jtyedit_we_should_only_dealing_04c1e3(void);
/* VA: 0x4c2dc | Module jtyedit.cpp procedure @ 0x04c2dc */
void jtyedit_fn_04c2dc(void);
/* VA: 0x4c2eb | Module jtyedit.cpp procedure @ 0x04c2eb */
undefined8 jtyedit_fn_04c2eb(void);
/* VA: 0x4c353 | Module jtyedit.cpp procedure @ 0x04c353 */
void jtyedit_fn_04c353(int param_1);
/* VA: 0x4c3a2 | Module jtyedit.cpp procedure @ 0x04c3a2 */
void jtyedit_fn_04c3a2(int param_1);
/* VA: 0x4c4f2 | Module jtyedit.cpp procedure @ 0x04c4f2 */
void jtyedit_fn_04c4f2(int param_1);
/* VA: 0x4c618 | Module jtyedit.cpp procedure @ 0x04c618 */
void jtyedit_fn_04c618(int param_1);

/* === Module: lair.cpp (30 functions) === */
/* VA: 0x4c6ec | Module lair.cpp procedure @ 0x04c6ec */
void lair_fn_04c6ec(int param_1);
/* VA: 0x4c7eb | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void lair_update_creature_control_04c7eb(undefined4 param_1,int param_2);
/* VA: 0x4ca51 | Module lair.cpp procedure @ 0x04ca51 */
void lair_fn_04ca51(void);
/* VA: 0x4ccc2 | Module lair.cpp procedure @ 0x04ccc2 */
void lair_fn_04ccc2(undefined1 *param_1,ushort *param_2,ushort *param_3);
/* VA: 0x4ce0c | Module lair.cpp procedure @ 0x04ce0c */
longlong lair_fn_04ce0c(void);
/* VA: 0x4ce57 | String 'CHOSEN LAIR IS NOT VALID - OOOPS' */
longlong lair_chosen_lair_valid_ooops_04ce57(void);
/* VA: 0x4cf55 | Module lair.cpp procedure @ 0x04cf55 */
longlong lair_fn_04cf55(void);
/* VA: 0x4cfa0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong lair_update_creature_control_04cfa0(void);
/* VA: 0x4d022 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong lair_update_creature_control_04d022(void);
/* VA: 0x4d050 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong lair_update_creature_control_04d050(void);
/* VA: 0x4d081 | Module lair.cpp procedure @ 0x04d081 */
longlong lair_fn_04d081(void);
/* VA: 0x4d0d5 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong lair_update_creature_control_04d0d5(void);
/* VA: 0x4d197 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 lair_update_creature_control_04d197(void);
/* VA: 0x4d2c3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 lair_update_creature_control_04d2c3(void);
/* VA: 0x4d375 | String 'NO TOTEM OWNER' */
longlong lair_totem_owner_04d375(void);
/* VA: 0x4d3d4 | String 'Attempt to remove creature lair from room with too little us' */
undefined4 lair_attempt_remove_creature_lair_04d3d4(void);
/* VA: 0x4d53d | Module lair.cpp procedure @ 0x04d53d */
undefined4 lair_fn_04d53d(void);
/* VA: 0x4d683 | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 lair_process_dungeon_room_04d683(void);
/* VA: 0x4d8d2 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 lair_update_slab_subtile_columns_04d8d2(void);
/* VA: 0x4da55 | String 'Could not create totem' */
void lair_could_create_totem_04da55(void);
/* VA: 0x4dbf1 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong lair_update_creature_control_04dbf1(void);
/* VA: 0x4dc4e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 lair_update_creature_control_04dc4e(void);
/* VA: 0x4dc89 | Reads/modifies Map[256x256] subtile data */
uint lair_process_map_subtile_04dc89(void);
/* VA: 0x4dcd5 | String 'CANNOT GET SOMEWHERE IN ROOM' */
undefined4 lair_get_somewhere_room_04dcd5(void);
/* VA: 0x4ddd0 | Updates 3x3 subtile map entries for slab coordinates */
longlong lair_update_slab_subtile_columns_04ddd0(void);
/* VA: 0x4de8c | Module lair.cpp procedure @ 0x04de8c */
void lair_fn_04de8c(uint param_1);
/* VA: 0x4e0dd | Module lair.cpp procedure @ 0x04e0dd */
void lair_fn_04e0dd(int param_1,int param_2);
/* VA: 0x4e120 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 lair_process_thing_entity_04e120(void);
/* VA: 0x4e1f2 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 lair_process_thing_entity_04e1f2(void);
/* VA: 0x4e3fa | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void lair_update_creature_and_thing_04e3fa(void);

/* === Module: light.cpp (54 functions) === */
/* VA: 0xac094 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 light_update_creature_control_0ac094(void);
/* VA: 0xac19c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 light_update_creature_control_0ac19c(void);
/* VA: 0xac370 | Module light.cpp procedure @ 0x0ac370 */
void light_fn_0ac370(void);
/* VA: 0xac630 | Module light.cpp procedure @ 0x0ac630 */
void light_fn_0ac630(void);
/* VA: 0xac694 | Module light.cpp procedure @ 0x0ac694 */
void light_fn_0ac694(void);
/* VA: 0xac9e8 | Module light.cpp procedure @ 0x0ac9e8 */
void light_fn_0ac9e8(void);
/* VA: 0xaca0c | Module light.cpp procedure @ 0x0aca0c */
void light_fn_0aca0c(void);
/* VA: 0xaca68 | Module light.cpp procedure @ 0x0aca68 */
void light_fn_0aca68(void);
/* VA: 0xacaf8 | String 'Light is already in list' */
longlong light_already_list_0acaf8(void);
/* VA: 0xacce4 | String 'Attempt to delete light 0' */
void light_attempt_delete_light_0acce4(void);
/* VA: 0xacdfc | Module light.cpp procedure @ 0x0acdfc */
void light_fn_0acdfc(void);
/* VA: 0xaced0 | Module light.cpp procedure @ 0x0aced0 */
undefined8 light_fn_0aced0(void);
/* VA: 0xacef0 | Module light.cpp procedure @ 0x0acef0 */
undefined8 light_fn_0acef0(void);
/* VA: 0xacf7c | String 'Attempt to get anglexy of unallocated light structure' */
longlong light_attempt_get_anglexy_unallocated_0acf7c(void);
/* VA: 0xad0f4 | String 'Attempt to get width of unallocated light structure' */
longlong light_attempt_get_width_unallocated_0ad0f4(void);
/* VA: 0xad148 | String 'Attempt to set intensity of unallocated light structure' */
void light_attempt_set_intensity_unallocated_0ad148(void);
/* VA: 0xad23c | String 'Attempt to get intensity of unallocated light structure' */
longlong light_attempt_get_intensity_unallocated_0ad23c(void);
/* VA: 0xad290 | String 'Attempt to set size of unallocated light structure' */
void light_attempt_set_size_unallocated_0ad290(void);
/* VA: 0xad37c | String 'Attempt to get size of unallocated light structure' */
longlong light_attempt_get_size_unallocated_0ad37c(void);
/* VA: 0xad438 | String 'Attempt to stop animating size of unallocated light structur' */
void light_attempt_stop_animating_size_0ad438(void);
/* VA: 0xad4f8 | String 'Attempt to stop animating intensity of unallocated light str' */
void light_attempt_stop_animating_intensity_0ad4f8(void);
/* VA: 0xad54c | String 'Light is already in list' */
void light_already_list_0ad54c(void);
/* VA: 0xad66c | String 'Attempt to turn off unallocated light structure' */
void light_attempt_turn_off_unallocated_0ad66c(void);
/* VA: 0xad834 | String 'Attempt to set size of unallocated light structure' */
void light_attempt_set_size_unallocated_0ad834(void);
/* VA: 0xad888 | String 'Attempt to set_minimum light size to cache on non dynamic li' */
void light_attempt_set_minimum_light_0ad888(void);
/* VA: 0xadbc0 | Updates GUI button enabled bit (0x08) */
void light_maintain_gui_button_state_0adbc0(void);
/* VA: 0xb04e4 | Module light.cpp procedure @ 0x0b04e4 */
void light_fn_0b04e4(void);
/* VA: 0xb06fc | Module light.cpp procedure @ 0x0b06fc */
void light_fn_0b06fc(void);
/* VA: 0xb087c | Module light.cpp procedure @ 0x0b087c */
void light_fn_0b087c(void);
/* VA: 0xb0980 | Reads/modifies Map[256x256] subtile data */
void light_process_map_subtile_0b0980(void);
/* VA: 0xb0ab4 | Module light.cpp procedure @ 0x0b0ab4 */
void light_fn_0b0ab4(void);
/* VA: 0xb0b20 | Module light.cpp procedure @ 0x0b0b20 */
void light_fn_0b0b20(void);
/* VA: 0xb0b9c | Module light.cpp procedure @ 0x0b0b9c */
longlong light_fn_0b0b9c(void);
/* VA: 0xb0c44 | Module light.cpp procedure @ 0x0b0c44 */
undefined8 light_fn_0b0c44(void);
/* VA: 0xb0d0c | Module light.cpp procedure @ 0x0b0d0c */
int light_fn_0b0d0c(void);
/* VA: 0xb0f94 | String 'No prev when removing light from list' */
void light_prev_when_removing_light_0b0f94(void);
/* VA: 0xb10c0 | Module light.cpp procedure @ 0x0b10c0 */
void light_fn_0b10c0(void);
/* VA: 0xb1398 | Module light.cpp procedure @ 0x0b1398 */
void light_fn_0b1398(void);
/* VA: 0xb13c0 | Module light.cpp procedure @ 0x0b13c0 */
undefined4 light_fn_0b13c0(int param_1,int param_2);
/* VA: 0xb14a0 | Module light.cpp procedure @ 0x0b14a0 */
void light_fn_0b14a0(uint *param_1,uint *param_2);
/* VA: 0xb182c | Module light.cpp procedure @ 0x0b182c */
void light_fn_0b182c(uint *param_1,uint *param_2);
/* VA: 0xb1b90 | Module light.cpp procedure @ 0x0b1b90 */
bool light_fn_0b1b90(void);
/* VA: 0xb1c20 | Module light.cpp procedure @ 0x0b1c20 */
int light_fn_0b1c20(void);
/* VA: 0xb1c40 | Module light.cpp procedure @ 0x0b1c40 */
void light_fn_0b1c40(void);
/* VA: 0xb1f60 | Module light.cpp procedure @ 0x0b1f60 */
void light_fn_0b1f60(void);
/* VA: 0xb20e0 | Module light.cpp procedure @ 0x0b20e0 */
void light_fn_0b20e0(void);
/* VA: 0xb2158 | Updates 3x3 subtile map entries for slab coordinates */
undefined8 light_update_slab_subtile_columns_0b2158(void);
/* VA: 0xb21f0 | Module light.cpp procedure @ 0x0b21f0 */
void light_fn_0b21f0(void);
/* VA: 0xb224c | Module light.cpp procedure @ 0x0b224c */
void light_fn_0b224c(void);
/* VA: 0xb2280 | Module light.cpp procedure @ 0x0b2280 */
void light_fn_0b2280(void);
/* VA: 0xb2398 | Reads/modifies Map[256x256] subtile data */
uint light_process_map_subtile_0b2398(void);
/* VA: 0xb23ec | Reads/modifies Map[256x256] subtile data */
undefined8 light_process_map_subtile_0b23ec(void);
/* VA: 0xb2440 | Reads/modifies Map[256x256] subtile data */
undefined8 light_process_map_subtile_0b2440(void);
/* VA: 0xb250c | Reads/modifies Map[256x256] subtile data */
int light_process_map_subtile_0b250c(void);

/* === Module: magic.cpp (38 functions) === */
/* VA: 0x4e4ad | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 magic_update_creature_and_thing_04e4ad(void);
/* VA: 0x4e585 | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 magic_update_player_dungeon_04e585(void);
/* VA: 0x4e60d | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 magic_update_player_dungeon_04e60d(void);
/* VA: 0x4e66f | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 magic_process_thing_entity_04e66f(void);
/* VA: 0x4e7cd | Accesses per-player Dungeon state (stride 0x1508) */
void magic_update_player_dungeon_04e7cd(void);
/* VA: 0x4e85c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 magic_update_creature_and_thing_04e85c(undefined4 param_1);
/* VA: 0x4eb02 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 magic_update_creature_and_thing_04eb02(void);
/* VA: 0x4ed3d | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void magic_update_creature_and_thing_04ed3d(void);
/* VA: 0x4ee2c | Updates 3x3 subtile map entries for slab coordinates */
void magic_update_slab_subtile_columns_04ee2c(void);
/* VA: 0x4ef8a | Updates 3x3 subtile map entries for slab coordinates */
undefined4 magic_update_slab_subtile_columns_04ef8a(void);
/* VA: 0x4efd4 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void magic_update_creature_and_thing_04efd4(void);
/* VA: 0x4f121 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void magic_update_creature_and_thing_04f121(void);
/* VA: 0x4f195 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void magic_update_creature_and_thing_04f195(void);
/* VA: 0x4f3bc | Module magic.cpp procedure @ 0x04f3bc */
void magic_fn_04f3bc(void);
/* VA: 0x4f41d | Accesses per-player PlayerInfo state (stride 0x4ef) */
void magic_update_player_view_state_04f41d(void);
/* VA: 0x4f4f1 | Module magic.cpp procedure @ 0x04f4f1 */
void magic_fn_04f4f1(void);
/* VA: 0x4f552 | Module magic.cpp procedure @ 0x04f552 */
void magic_fn_04f552(void);
/* VA: 0x4f5b3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void magic_update_creature_control_04f5b3(void);
/* VA: 0x4f63e | String 'XXXXOXXXXXXXX XXXXXXXO OXXXXOXO OXOXXOXO OXOXXXX   XXXX X   ' */
void magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e(void);
/* VA: 0x4f87e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void magic_update_creature_control_04f87e(void);
/* VA: 0x4f92f | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void magic_update_creature_and_thing_04f92f(void);
/* VA: 0x4fa5b | Looks up Thing* in g_thing_ptrs[2048] and updates state */
int magic_process_thing_entity_04fa5b(void);
/* VA: 0x4faf1 | Accesses per-player Dungeon state (stride 0x1508) */
int magic_update_player_dungeon_04faf1(void);
/* VA: 0x4fbd8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void magic_update_creature_control_04fbd8(void);
/* VA: 0x4fc98 | Accesses per-player Dungeon state (stride 0x1508) */
int magic_update_player_dungeon_04fc98(void);
/* VA: 0x4fd30 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 magic_update_player_view_state_04fd30(void);
/* VA: 0x4fd81 | Accesses per-player Dungeon state (stride 0x1508) */
void magic_update_player_dungeon_04fd81(void);
/* VA: 0x4fdac | String 'CANNOT REMOVE A SPELL FROM PLAYER AS HE DOESN'T HAVE IT!' */
void magic_remove_spell_player_as_04fdac(void);
/* VA: 0x4fe44 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 magic_update_creature_control_04fe44(void);
/* VA: 0x50007 | Module magic.cpp procedure @ 0x050007 */
void magic_fn_050007(void);
/* VA: 0x5003d | Updates 3x3 subtile map entries for slab coordinates */
undefined1 magic_update_slab_subtile_columns_05003d(int param_1);
/* VA: 0x502a9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 magic_update_creature_control_0502a9(void);
/* VA: 0x50349 | Updates 3x3 subtile map entries for slab coordinates */
undefined8 magic_update_slab_subtile_columns_050349(void);
/* VA: 0x504ff | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void magic_process_thing_entity_0504ff(void);
/* VA: 0x5067c | Module magic.cpp procedure @ 0x05067c */
void magic_fn_05067c(void);
/* VA: 0x50708 | String 'DATA\MAPFADEG.DAT' */
undefined8 magic_data_mapfadeg_dat_050708(void);
/* VA: 0x508a9 | String 'DATA\MAPFADEG.DAT' */
undefined8 magic_data_mapfadeg_dat_0508a9(void);
/* VA: 0x50a47 | Module magic.cpp procedure @ 0x050a47 */
void magic_fn_050a47(int param_1,int param_2,int param_3,int param_4,int param_5);

/* === Module: mapwho.cpp (23 functions) === */
/* VA: 0x50c38 | Reads/modifies Map[256x256] subtile data */
void mapwho_process_map_subtile_050c38(void);
/* VA: 0x50ca9 | Reads/modifies Map[256x256] subtile data */
void mapwho_process_map_subtile_050ca9(void);
/* VA: 0x50d25 | Reads/modifies Map[256x256] subtile data */
void mapwho_process_map_subtile_050d25(void);
/* VA: 0x50d3c | Reads/modifies Map[256x256] subtile data */
uint mapwho_process_map_subtile_050d3c(void);
/* VA: 0x50d90 | Reads/modifies Map[256x256] subtile data */
longlong mapwho_process_map_subtile_050d90(void);
/* VA: 0x50de3 | Reads/modifies Map[256x256] subtile data */
uint mapwho_process_map_subtile_050de3(void);
/* VA: 0x50e37 | Module mapwho.cpp procedure @ 0x050e37 */
void mapwho_fn_050e37(void);
/* VA: 0x50e72 | Module mapwho.cpp procedure @ 0x050e72 */
undefined4 mapwho_fn_050e72(void);
/* VA: 0x50ea6 | Module mapwho.cpp procedure @ 0x050ea6 */
int mapwho_fn_050ea6(void);
/* VA: 0x50f1a | String 'Trying to create a gold hoarde with %d gold' */
int mapwho_trying_create_gold_hoarde_050f1a(void);
/* VA: 0x5102d | Module mapwho.cpp procedure @ 0x05102d */
int mapwho_fn_05102d(void);
/* VA: 0x5117d | Module mapwho.cpp procedure @ 0x05117d */
int mapwho_fn_05117d(void);
/* VA: 0x512ec | Checks Thing->class_id == 1 (Object) and processes state */
longlong mapwho_handle_object_thing_0512ec(void);
/* VA: 0x5131e | Reads/modifies Map[256x256] subtile data */
uint mapwho_process_map_subtile_05131e(void);
/* VA: 0x51417 | Module mapwho.cpp procedure @ 0x051417 */
void mapwho_fn_051417(void);
/* VA: 0x51452 | Module mapwho.cpp procedure @ 0x051452 */
void mapwho_fn_051452(void);
/* VA: 0x51468 | Module mapwho.cpp procedure @ 0x051468 */
void mapwho_fn_051468(void);
/* VA: 0x51484 | Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed) */
undefined8 mapwho_roll_unsynced_random_051484(void);
/* VA: 0x514c2 | Module mapwho.cpp procedure @ 0x0514c2 */
undefined4 mapwho_fn_0514c2(void);
/* VA: 0x514ca | Module mapwho.cpp procedure @ 0x0514ca */
longlong mapwho_fn_0514ca(void);
/* VA: 0x514f8 | Module mapwho.cpp procedure @ 0x0514f8 */
undefined4 mapwho_fn_0514f8(void);
/* VA: 0x51533 | Module mapwho.cpp procedure @ 0x051533 */
longlong mapwho_fn_051533(void);
/* VA: 0x5159c | Module mapwho.cpp procedure @ 0x05159c */
undefined8 mapwho_fn_05159c(int param_1);

/* === Module: moodneed.cpp (21 functions) === */
/* VA: 0x51374 | Module moodneed.cpp procedure @ 0x051374 */
void moodneed_fn_051374(void);
/* VA: 0x516a4 | Module moodneed.cpp procedure @ 0x0516a4 */
void moodneed_fn_0516a4(void);
/* VA: 0x517c5 | Module moodneed.cpp procedure @ 0x0517c5 */
void moodneed_fn_0517c5(void);
/* VA: 0x51904 | Module moodneed.cpp procedure @ 0x051904 */
void moodneed_fn_051904(void);
/* VA: 0x51954 | Module moodneed.cpp procedure @ 0x051954 */
void moodneed_fn_051954(void);
/* VA: 0x51a06 | Module moodneed.cpp procedure @ 0x051a06 */
void moodneed_fn_051a06(void);
/* VA: 0x51a3f | Module moodneed.cpp procedure @ 0x051a3f */
void moodneed_fn_051a3f(void);
/* VA: 0x51a46 | Module moodneed.cpp procedure @ 0x051a46 */
void moodneed_fn_051a46(void);
/* VA: 0x51a67 | Module moodneed.cpp procedure @ 0x051a67 */
void moodneed_fn_051a67(int param_1,int param_2,int param_3);
/* VA: 0x51d41 | Module moodneed.cpp procedure @ 0x051d41 */
void moodneed_fn_051d41(int param_1,int param_2,int param_3);
/* VA: 0x51e55 | Module moodneed.cpp procedure @ 0x051e55 */
void moodneed_fn_051e55(int param_1,int param_2,int param_3);
/* VA: 0x51f4c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 moodneed_update_creature_control_051f4c(void);
/* VA: 0x52119 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 moodneed_update_creature_control_052119(void);
/* VA: 0x522f0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong moodneed_update_creature_control_0522f0(void);
/* VA: 0x52362 | String 'This shouldn't happen' */
undefined4 moodneed_this_shouldn_happen_052362(void);
/* VA: 0x525b2 | String 'Shit, could not get to treasure room door and I've cleaned u' */
undefined4 moodneed_shit_could_get_treasure_0525b2(void);
/* VA: 0x52734 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 moodneed_update_creature_control_052734(void);
/* VA: 0x527b4 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 moodneed_update_creature_and_thing_0527b4(void);
/* VA: 0x52834 | Module moodneed.cpp procedure @ 0x052834 */
void moodneed_fn_052834(void);
/* VA: 0x52934 | Module moodneed.cpp procedure @ 0x052934 */
void moodneed_fn_052934(void);
/* VA: 0x52957 | Module moodneed.cpp procedure @ 0x052957 */
void moodneed_fn_052957(void);

/* === Module: move.cpp (33 functions) === */
/* VA: 0xb28e8 | Reads/modifies Map[256x256] subtile data */
int move_process_map_subtile_0b28e8(void);
/* VA: 0xb2cb4 | Reads/modifies Map[256x256] subtile data */
int move_process_map_subtile_0b2cb4(void);
/* VA: 0xb3040 | Reads/modifies Map[256x256] subtile data */
int move_process_map_subtile_0b3040(void);
/* VA: 0xb33e4 | Reads/modifies Map[256x256] subtile data */
int move_process_map_subtile_0b33e4(void);
/* VA: 0xb3788 | Reads/modifies Map[256x256] subtile data */
undefined8 move_process_map_subtile_0b3788(void);
/* VA: 0xb3850 | Reads/modifies Map[256x256] subtile data */
undefined8 move_process_map_subtile_0b3850(void);
/* VA: 0xb391c | Reads/modifies Map[256x256] subtile data */
void move_process_map_subtile_0b391c(void);
/* VA: 0xb39e4 | Reads/modifies Map[256x256] subtile data */
undefined8 move_process_map_subtile_0b39e4(void);
/* VA: 0xb3a64 | Module move.cpp procedure @ 0x0b3a64 */
ulonglong move_fn_0b3a64(void);
/* VA: 0xb3afc | Module move.cpp procedure @ 0x0b3afc */
byte move_fn_0b3afc(void);
/* VA: 0xb3b10 | Module move.cpp procedure @ 0x0b3b10 */
void move_fn_0b3b10(void);
/* VA: 0xb3b58 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 move_update_creature_control_0b3b58(void);
/* VA: 0xb3be4 | Module move.cpp procedure @ 0x0b3be4 */
void move_fn_0b3be4(void);
/* VA: 0xb3c00 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
uint move_update_creature_control_0b3c00(void);
/* VA: 0xb3c90 | Module move.cpp procedure @ 0x0b3c90 */
void move_fn_0b3c90(void);
/* VA: 0xb3cac | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 move_update_creature_control_0b3cac(void);
/* VA: 0xb3d04 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 move_update_creature_control_0b3d04(void);
/* VA: 0xb3d90 | Module move.cpp procedure @ 0x0b3d90 */
void move_fn_0b3d90(void);
/* VA: 0xb3dac | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 move_update_creature_control_0b3dac(void);
/* VA: 0xb41d8 | String 'Shot has no hit thing type' */
longlong move_shot_has_hit_thing_0b41d8(void);
/* VA: 0xb444c | Module move.cpp procedure @ 0x0b444c */
undefined8 move_fn_0b444c(void);
/* VA: 0xb45b4 | Module move.cpp procedure @ 0x0b45b4 */
undefined8 move_fn_0b45b4(void);
/* VA: 0xb4894 | Module move.cpp procedure @ 0x0b4894 */
undefined8 move_fn_0b4894(void);
/* VA: 0xb4994 | Module move.cpp procedure @ 0x0b4994 */
undefined8 move_fn_0b4994(void);
/* VA: 0xb4ac4 | Module move.cpp procedure @ 0x0b4ac4 */
void move_fn_0b4ac4(undefined1 param_1);
/* VA: 0xb4ae4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 move_update_creature_control_0b4ae4(byte param_1,char param_2);
/* VA: 0xb4c30 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 move_update_creature_control_0b4c30(void);
/* VA: 0xb4d88 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 move_update_creature_control_0b4d88(void);
/* VA: 0xb4f00 | String 'Shiiiiiit. Bad place to move backwards to!' */
undefined8 move_shiiiiiit_place_move_backwards_0b4f00(void);
/* VA: 0xb4fa0 | String 'Shiiiiiit. Bad place to tunnel to!' */
undefined8 move_shiiiiiit_place_tunnel_0b4fa0(void);
/* VA: 0xb5100 | Module move.cpp procedure @ 0x0b5100 */
undefined8 move_fn_0b5100(void);
/* VA: 0xb516c | String 'Cannot find valid position to place thing' */
uint move_find_valid_position_place_0b516c(void);
/* VA: 0xb5264 | Reads/modifies SlabMap[85x85] tile entry */
longlong move_process_slabmap_tile_0b5264(void);

/* === Module: navigate.cpp (111 functions) === */
/* VA: 0xb5550 | Module navigate.cpp procedure @ 0x0b5550 */
undefined4 navigate_fn_0b5550(void);
/* VA: 0xb55a0 | Module navigate.cpp procedure @ 0x0b55a0 */
undefined4 navigate_fn_0b55a0(void);
/* VA: 0xb55b8 | Log prefix 'line_intersect : division error' */
void navigate_line_intersect_0b55b8(int param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6);
/* VA: 0xb5694 | String 'nav.log' */
void navigate_nav_log_0b5694(void);
/* VA: 0xb577c | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0b577c(void);
/* VA: 0xb57a8 | Log prefix 'tri_new : out of memory' */
undefined8 navigate_tri_new_0b57a8(void);
/* VA: 0xb5818 | Module navigate.cpp procedure @ 0x0b5818 */
void navigate_fn_0b5818(void);
/* VA: 0xb584c | String 'point_new:overflow' */
undefined8 navigate_point_new_overflow_0b584c(void);
/* VA: 0xb58b4 | String 'triangle_find_first_used:not found!!' */
void navigate_triangle_find_first_used_0b58b4(void);
/* VA: 0xb5a90 | Module navigate.cpp procedure @ 0x0b5a90 */
void navigate_fn_0b5a90(void);
/* VA: 0xb5bc4 | Module navigate.cpp procedure @ 0x0b5bc4 */
void navigate_fn_0b5bc4(void);
/* VA: 0xb5c60 | String 'nav.creature_radius_set : only radius 1..3 allowed' */
void navigate_nav_creature_radius_set_0b5c60(void);
/* VA: 0xb5d38 | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0b5d38(void);
/* VA: 0xb5f44 | String 'edgelen diagnostic:1' */
int navigate_edgelen_diagnostic_0b5f44(void);
/* VA: 0xb62e4 | String 'region_alloc:overflow' */
undefined8 navigate_region_alloc_overflow_0b62e4(void);
/* VA: 0xb6494 | Module navigate.cpp procedure @ 0x0b6494 */
void navigate_fn_0b6494(void);
/* VA: 0xb64ac | String 'region_put:Q overflow' */
void navigate_region_put_overflow_0b64ac(void);
/* VA: 0xb6aac | String 'nav.log' */
undefined4 navigate_nav_log_0b6aac(void);
/* VA: 0xb6c04 | String 'region_diagnostic:count' */
void navigate_region_diagnostic_count_0b6c04(void);
/* VA: 0xb6df0 | Module navigate.cpp procedure @ 0x0b6df0 */
undefined8 navigate_fn_0b6df0(void);
/* VA: 0xb6e29 | Log prefix 'Regions : %d/%d  max %s:%d' */
void navigate_Regions_0b6e29(void);
/* VA: 0xb70c4 | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0b70c4(void);
/* VA: 0xb72f8 | Log prefix 'triangulation_border_start : not found' */
void navigate_triangulation_border_start_0b72f8(void);
/* VA: 0xb73dc | String 'triangulation_border_init:overflow' */
void navigate_triangulation_border_init_overflow_0b73dc(void);
/* VA: 0xb74fc | Updates Ariadne pathfinding/navigation state */
bool navigate_update_ariadne_navigation_0b74fc(void);
/* VA: 0xb7658 | Updates Ariadne pathfinding/navigation state */
bool navigate_update_ariadne_navigation_0b7658(void);
/* VA: 0xb77b4 | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0b77b4(void);
/* VA: 0xb7b4c | String 'triangle_find_first_used:not found!!' */
int navigate_triangle_find_first_used_0b7b4c(void);
/* VA: 0xb7d64 | String 'triangle_find_cache_get:overflow' */
int navigate_triangle_find_cache_get_0b7d64(void);
/* VA: 0xb7e14 | String 'triangle_find_cache_get:overflow' */
int navigate_triangle_find_cache_get_0b7e14(void);
/* VA: 0xb80c8 | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0b80c8(void);
/* VA: 0xb81c4 | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0b81c4(int *param_1,int *param_2);
/* VA: 0xb8368 | Updates Ariadne pathfinding/navigation state */
int navigate_update_ariadne_navigation_0b8368(void);
/* VA: 0xb850c | String 'triangle_redirect:not found A' */
void navigate_triangle_redirect_found_0b850c(void);
/* VA: 0xb8874 | Log prefix 'edge_rotateAC : lB not found' */
undefined4 navigate_edge_rotateAC_0b8874(void);
/* VA: 0xb8e64 | Log prefix 'tri_new : out of memory' */
void navigate_tri_new_0b8e64(void);
/* VA: 0xb9274 | Log prefix 'tri_new : out of memory' */
int navigate_tri_new_0b9274(undefined2 param_1);
/* VA: 0xb94b8 | String 'point_new:overflow' */
void navigate_point_new_overflow_0b94b8(void);
/* VA: 0xb95f0 | Log prefix 'insert_point : triangle not found' */
void navigate_insert_point_0b95f0(void);
/* VA: 0xb9940 | String 'l0:%02ld n:%02ld l1:%02ld' */
int navigate_l0_ld_ld_l1_0b9940(void);
/* VA: 0xb9b80 | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0b9b80(void);
/* VA: 0xb9c2c | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0b9c2c(void);
/* VA: 0xba5cc | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0ba5cc(void);
/* VA: 0xbaa20 | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0baa20(void);
/* VA: 0xbab7c | Log prefix 'make_edge : border point' */
void navigate_make_edge_0bab7c(void);
/* VA: 0xbafbc | Module navigate.cpp procedure @ 0x0bafbc */
void navigate_fn_0bafbc(int *param_1,int *param_2);
/* VA: 0xbb0ac | Log prefix 'thin_wall : clipping overflow' */
void navigate_thin_wall_0bb0ac(void);
/* VA: 0xbb50c | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0bb50c(void);
/* VA: 0xbb668 | Updates Ariadne pathfinding/navigation state */
undefined8 navigate_update_ariadne_navigation_0bb668(void);
/* VA: 0xbb6ec | Module navigate.cpp procedure @ 0x0bb6ec */
undefined8 navigate_fn_0bb6ec(void);
/* VA: 0xbb72c | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0bb72c(void);
/* VA: 0xbba28 | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0bba28(void);
/* VA: 0xbbc9c | String 'delaunay_seeded:stack full' */
int navigate_delaunay_seeded_stack_full_0bbc9c(void);
/* VA: 0xbbec8 | Updates Ariadne pathfinding/navigation state */
undefined4 navigate_update_ariadne_navigation_0bbec8(void);
/* VA: 0xbc05c | Updates Ariadne pathfinding/navigation state */
undefined8 navigate_update_ariadne_navigation_0bc05c(void);
/* VA: 0xbc1bc | Module navigate.cpp procedure @ 0x0bc1bc */
void navigate_fn_0bc1bc(void);
/* VA: 0xbc288 | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0bc288(undefined1 param_1);
/* VA: 0xbc3c8 | Module navigate.cpp procedure @ 0x0bc3c8 */
void navigate_fn_0bc3c8(void);
/* VA: 0xbc544 | Updates Ariadne pathfinding/navigation state */
uint navigate_update_ariadne_navigation_0bc544(void);
/* VA: 0xbca9c | Module navigate.cpp procedure @ 0x0bca9c */
void navigate_fn_0bca9c(undefined1 param_1);
/* VA: 0xbcb3c | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0bcb3c(void);
/* VA: 0xbcbc8 | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0bcbc8(void);
/* VA: 0xbcdb0 | Module navigate.cpp procedure @ 0x0bcdb0 */
void navigate_fn_0bcdb0(void);
/* VA: 0xbcddc | Log prefix 'triangle_reppoint : centre outside' */
void navigate_triangle_reppoint_0bcddc(void);
/* VA: 0xbd1ac | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0bd1ac(int *param_1,int *param_2);
/* VA: 0xbd331 | Log prefix 'edge_points : edge not found %d->%d' */
void navigate_edge_points_0bd331(void);
/* VA: 0xbd370 | Module navigate.cpp procedure @ 0x0bd370 */
void navigate_fn_0bd370(void);
/* VA: 0xbd46c | Module navigate.cpp procedure @ 0x0bd46c */
void navigate_fn_0bd46c(void);
/* VA: 0xbd51c | Module navigate.cpp procedure @ 0x0bd51c */
undefined8 navigate_fn_0bd51c(void);
/* VA: 0xbd554 | Module navigate.cpp procedure @ 0x0bd554 */
undefined8 navigate_fn_0bd554(void);
/* VA: 0xbd5cc | String 'navigate.heap_add : heap overflow' */
int navigate_heap_add_heap_0bd5cc(void);
/* VA: 0xbd9b4 | String 'navigate.heap_add : heap overflow' */
int navigate_heap_add_heap_0bd9b4(void);
/* VA: 0xbdd9c | Module navigate.cpp procedure @ 0x0bdd9c */
undefined * navigate_fn_0bdd9c(void);
/* VA: 0xbdeec | Log prefix 'dfs_visit : overflow' */
void navigate_dfs_visit_0bdeec(void);
/* VA: 0xbe310 | Log prefix 'tree_to_route : overflow' */
int navigate_tree_to_route_0be310(void);
/* VA: 0xbe3d0 | Log prefix 'pq_remove : empty Q' */
undefined8 navigate_pq_remove_0be3d0(void);
/* VA: 0xbe524 | Module navigate.cpp procedure @ 0x0be524 */
void navigate_fn_0be524(void);
/* VA: 0xbe760 | Log prefix 'tree_to_route : overflow' */
int navigate_tree_to_route_0be760(void);
/* VA: 0xbe84c | Log prefix 'pq_remove : empty Q' */
void navigate_pq_remove_0be84c(void);
/* VA: 0xbec84 | Log prefix 'tree_to_route : overflow' */
int navigate_tree_to_route_0bec84(void);
/* VA: 0xbed00 | Log prefix 'tree_to_route : overflow' */
int navigate_tree_to_route_0bed00(void);
/* VA: 0xbed7c | Module navigate.cpp procedure @ 0x0bed7c */
void navigate_fn_0bed7c(int param_1);
/* VA: 0xbee04 | Module navigate.cpp procedure @ 0x0bee04 */
void navigate_fn_0bee04(void);
/* VA: 0xbef98 | Log prefix 'delete_point : make_3or4point failure' */
void navigate_delete_point_0bef98(void);
/* VA: 0xbf3f0 | Log prefix 'lock_edge : not found' */
void navigate_lock_edge_0bf3f0(void);
/* VA: 0xbf588 | Log prefix 'lock_edge : not found' */
void navigate_lock_edge_0bf588(void);
/* VA: 0xbf698 | Log prefix 'delete_point : make_3or4point failure' */
void navigate_delete_point_0bf698(void);
/* VA: 0xbf8bc | Module navigate.cpp procedure @ 0x0bf8bc */
bool navigate_fn_0bf8bc(void);
/* VA: 0xbf96c | Module navigate.cpp procedure @ 0x0bf96c */
undefined4 navigate_fn_0bf96c(byte *param_1);
/* VA: 0xbfaec | String 'nav.log' */
void navigate_nav_log_0bfaec(int param_1);
/* VA: 0xc01fc | Module navigate.cpp procedure @ 0x0c01fc */
void navigate_fn_0c01fc(void);
/* VA: 0xc023c | Module navigate.cpp procedure @ 0x0c023c */
undefined4 navigate_fn_0c023c(void);
/* VA: 0xc02d4 | Updates Ariadne pathfinding/navigation state */
void navigate_update_ariadne_navigation_0c02d4(void);
/* VA: 0xc0578 | Log prefix 'path_out_a_bit: waypoint mismatch' */
void navigate_path_out_a_bit_0c0578(void);
/* VA: 0xc0740 | String 'rtp:Exceeded max path length (i:%d,L:%d) (%d,%d)->(%d,%d)' */
int navigate_rtp_exceeded_max_path_0c0740(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4);
/* VA: 0xc0b9c | String 'grtc:Exceeded max path length (i:%d,rl:%d)' */
int navigate_grtc_exceeded_max_path_0c0b9c(undefined4 param_1,undefined4 param_2);
/* VA: 0xc1544 | Module navigate.cpp procedure @ 0x0c1544 */
void navigate_fn_0c1544(void);
/* VA: 0xc1914 | Module navigate.cpp procedure @ 0x0c1914 */
undefined4 navigate_fn_0c1914(int param_1);
/* VA: 0xc1ecc | Module navigate.cpp procedure @ 0x0c1ecc */
void navigate_fn_0c1ecc(undefined4 param_1);
/* VA: 0xc1fb4 | Module navigate.cpp procedure @ 0x0c1fb4 */
void navigate_fn_0c1fb4(void);
/* VA: 0xc206c | String 'nav.log' */
int navigate_nav_log_0c206c(void);
/* VA: 0xc241c | Log prefix 'path_init8 : implement random externally' */
void navigate_path_init8_0c241c(undefined4 param_1,int param_2);
/* VA: 0xc2a5c | String 'set_nearpoint:solid' */
void navigate_set_nearpoint_solid_0c2a5c(int *param_1,int *param_2);
/* VA: 0xc2bc0 | String 'nav.creature_radius_set : only radius 1..3 allowed' */
void navigate_nav_creature_radius_set_0c2bc0(int param_1,int *param_2,int *param_3);
/* VA: 0xc2f90 | Module navigate.cpp procedure @ 0x0c2f90 */
undefined4 navigate_fn_0c2f90(int param_1);
/* VA: 0xc303c | Log prefix 'triangulation_diagnostic : link to free' */
void navigate_triangulation_diagnostic_0c303c(void);
/* VA: 0xc3620 | Module navigate.cpp procedure @ 0x0c3620 */
undefined8 navigate_fn_0c3620(void);
/* VA: 0xc3670 | String 'region_put:Q overflow' */
void navigate_region_put_overflow_0c3670(void);
/* VA: 0xc3710 | Module navigate.cpp procedure @ 0x0c3710 */
void navigate_fn_0c3710(void);
/* VA: 0xc3780 | Module navigate.cpp procedure @ 0x0c3780 */
void navigate_fn_0c3780(void);
/* VA: 0xc3828 | Module navigate.cpp procedure @ 0x0c3828 */
void navigate_fn_0c3828(void);

/* === Module: newgui.cpp (240 functions) === */
/* VA: 0x52988 | Module newgui.cpp procedure @ 0x052988 */
void newgui_fn_052988(void);
/* VA: 0x529b9 | Module newgui.cpp procedure @ 0x0529b9 */
void newgui_fn_0529b9(void);
/* VA: 0x52a88 | Module newgui.cpp procedure @ 0x052a88 */
void newgui_fn_052a88(void);
/* VA: 0x52b58 | Module newgui.cpp procedure @ 0x052b58 */
bool newgui_fn_052b58(void);
/* VA: 0x52b67 | String 'NO MORE ROOM FOR MENU STACK' */
void newgui_more_room_menu_stack_052b67(void);
/* VA: 0x52be7 | Module newgui.cpp procedure @ 0x052be7 */
void newgui_fn_052be7(void);
/* VA: 0x52c47 | Module newgui.cpp procedure @ 0x052c47 */
void newgui_fn_052c47(void);
/* VA: 0x52c6d | Module newgui.cpp procedure @ 0x052c6d */
void newgui_fn_052c6d(void);
/* VA: 0x52ced | Module newgui.cpp procedure @ 0x052ced */
void newgui_fn_052ced(void);
/* VA: 0x52d6d | Module newgui.cpp procedure @ 0x052d6d */
void newgui_fn_052d6d(void);
/* VA: 0x52da0 | Module newgui.cpp procedure @ 0x052da0 */
void newgui_fn_052da0(void);
/* VA: 0x52def | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052def(void);
/* VA: 0x52e3d | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052e3d(void);
/* VA: 0x52e7f | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052e7f(void);
/* VA: 0x52ead | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052ead(void);
/* VA: 0x52ebe | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052ebe(void);
/* VA: 0x52ee8 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052ee8(void);
/* VA: 0x52f03 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052f03(void);
/* VA: 0x52f16 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052f16(void);
/* VA: 0x52f44 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_052f44(void);
/* VA: 0x52f78 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_052f78(void);
/* VA: 0x53021 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053021(void);
/* VA: 0x5315d | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_05315d(void);
/* VA: 0x53188 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053188(void);
/* VA: 0x53208 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053208(void);
/* VA: 0x53240 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053240(void);
/* VA: 0x53290 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053290(void);
/* VA: 0x53306 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053306(void);
/* VA: 0x53356 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053356(void);
/* VA: 0x533e6 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_0533e6(void);
/* VA: 0x5341e | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_05341e(void);
/* VA: 0x5345d | Module newgui.cpp procedure @ 0x05345d */
void newgui_fn_05345d(void);
/* VA: 0x534e5 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_0534e5(void);
/* VA: 0x53684 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053684(void);
/* VA: 0x53716 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_053716(void);
/* VA: 0x53753 | String 'Illegal computer player' */
void newgui_illegal_computer_player_053753(void);
/* VA: 0x537af | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void newgui_update_creature_and_thing_0537af(void);
/* VA: 0x5389b | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void newgui_process_thing_entity_05389b(void);
/* VA: 0x53971 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void newgui_process_thing_entity_053971(void);
/* VA: 0x53a18 | String 'Unknown state_type_to_gui_state[]' */
void newgui_state_type_gui_state_053a18(void);
/* VA: 0x53c05 | Module newgui.cpp procedure @ 0x053c05 */
undefined8 newgui_fn_053c05(void);
/* VA: 0x53c32 | Module newgui.cpp procedure @ 0x053c32 */
undefined8 newgui_fn_053c32(void);
/* VA: 0x53c6b | Module newgui.cpp procedure @ 0x053c6b */
undefined8 newgui_fn_053c6b(void);
/* VA: 0x53ca3 | Module newgui.cpp procedure @ 0x053ca3 */
undefined8 newgui_fn_053ca3(void);
/* VA: 0x53ccc | String 'Oi! There is a fade time less than 1. Idiot.' */
undefined8 newgui_oi_there_fade_time_053ccc(void);
/* VA: 0x54089 | Module newgui.cpp procedure @ 0x054089 */
void newgui_fn_054089(void);
/* VA: 0x540cb | Module newgui.cpp procedure @ 0x0540cb */
undefined4 newgui_fn_0540cb(void);
/* VA: 0x54269 | Module newgui.cpp procedure @ 0x054269 */
void newgui_fn_054269(void);
/* VA: 0x5426d | Module newgui.cpp procedure @ 0x05426d */
void newgui_fn_05426d(void);
/* VA: 0x542d6 | Module newgui.cpp procedure @ 0x0542d6 */
void newgui_fn_0542d6(void);
/* VA: 0x5430b | Module newgui.cpp procedure @ 0x05430b */
void newgui_fn_05430b(void);
/* VA: 0x54324 | Module newgui.cpp procedure @ 0x054324 */
void newgui_fn_054324(void);
/* VA: 0x5435a | Module newgui.cpp procedure @ 0x05435a */
void newgui_fn_05435a(void);
/* VA: 0x543dd | Module newgui.cpp procedure @ 0x0543dd */
void newgui_fn_0543dd(void);
/* VA: 0x5449e | Configures font/flags and draws text on screen */
void newgui_draw_text_overlay_05449e(void);
/* VA: 0x54742 | Module newgui.cpp procedure @ 0x054742 */
void newgui_fn_054742(void);
/* VA: 0x547f3 | Module newgui.cpp procedure @ 0x0547f3 */
void newgui_fn_0547f3(void);
/* VA: 0x5482c | String 'Cycle button cannot have a 'gui_area_normal_button' draw fun' */
void newgui_cycle_button_have_gui_05482c(void);
/* VA: 0x548cb | String 'Cycle button cannot have a 'gui_area_normal_button' draw fun' */
void newgui_cycle_button_have_gui_0548cb(void);
/* VA: 0x549a4 | Module newgui.cpp procedure @ 0x0549a4 */
void newgui_fn_0549a4(void);
/* VA: 0x54a22 | Module newgui.cpp procedure @ 0x054a22 */
void newgui_fn_054a22(void);
/* VA: 0x54aa9 | Module newgui.cpp procedure @ 0x054aa9 */
void newgui_fn_054aa9(void);
/* VA: 0x54add | String 'Cycle button must have a non-null UBYTE Data pointer!' */
void newgui_cycle_button_must_have_054add(void);
/* VA: 0x54bab | String 'Cycle button must have a non-null UBYTE Data pointer!' */
void newgui_cycle_button_must_have_054bab(void);
/* VA: 0x54c79 | Module newgui.cpp procedure @ 0x054c79 */
void newgui_fn_054c79(void);
/* VA: 0x54d41 | String 'Button must point to a SCROLL_TEXT_WINDOW data item' */
void newgui_button_must_point_scroll_054d41(void);
/* VA: 0x54d8a | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_054d8a(void);
/* VA: 0x54eeb | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_054eeb(void);
/* VA: 0x551e4 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_0551e4(void);
/* VA: 0x5542b | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05542b(void);
/* VA: 0x55701 | Sets active font and draws GUI button text label */
void newgui_draw_gui_button_label_055701(void);
/* VA: 0x55b68 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void newgui_update_creature_and_thing_055b68(void);
/* VA: 0x55e33 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_055e33(void);
/* VA: 0x56010 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_056010(void);
/* VA: 0x563b1 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_0563b1(void);
/* VA: 0x56642 | Module newgui.cpp procedure @ 0x056642 */
void newgui_fn_056642(void);
/* VA: 0x56699 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_056699(void);
/* VA: 0x5674c | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05674c(void);
/* VA: 0x5686f | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05686f(void);
/* VA: 0x569a1 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_0569a1(void);
/* VA: 0x56a50 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_056a50(void);
/* VA: 0x56b63 | Module newgui.cpp procedure @ 0x056b63 */
void newgui_fn_056b63(void);
/* VA: 0x56ee6 | Module newgui.cpp procedure @ 0x056ee6 */
void newgui_fn_056ee6(void);
/* VA: 0x570a7 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void newgui_update_creature_and_thing_0570a7(void);
/* VA: 0x571cf | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void newgui_process_thing_entity_0571cf(void);
/* VA: 0x57348 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void newgui_process_thing_entity_057348(void);
/* VA: 0x574b5 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void newgui_update_creature_and_thing_0574b5(void);
/* VA: 0x5762c | Module newgui.cpp procedure @ 0x05762c */
void newgui_fn_05762c(void);
/* VA: 0x57739 | Configures font/flags and draws text on screen */
void newgui_draw_text_overlay_057739(void);
/* VA: 0x5789a | String 'Cannot have a TEXT_SCROLLING box type without a pointer to a' */
void newgui_have_text_scrolling_box_05789a(void);
/* VA: 0x57a52 | Configures font/flags and draws text on screen */
void newgui_draw_text_overlay_057a52(void);
/* VA: 0x57b6f | Configures font/flags and draws text on screen */
void newgui_draw_text_overlay_057b6f(void);
/* VA: 0x57bba | String 'Bar is too small' */
void newgui_bar_small_057bba(void);
/* VA: 0x57cac | String 'Bar is too small' */
void newgui_bar_small_057cac(void);
/* VA: 0x57d9e | String 'Bar is too small' */
void newgui_bar_small_057d9e(void);
/* VA: 0x57ea2 | Module newgui.cpp procedure @ 0x057ea2 */
ulonglong newgui_fn_057ea2(void);
/* VA: 0x57f01 | Module newgui.cpp procedure @ 0x057f01 */
undefined4 newgui_fn_057f01(void);
/* VA: 0x57f6b | Looks up Thing* in g_thing_ptrs[2048] and updates state */
ulonglong newgui_process_thing_entity_057f6b(void);
/* VA: 0x57fd9 | Module newgui.cpp procedure @ 0x057fd9 */
bool newgui_fn_057fd9(void);
/* VA: 0x57fe4 | Reads/modifies Map[256x256] subtile data */
undefined8 newgui_process_map_subtile_057fe4(void);
/* VA: 0x58718 | Module newgui.cpp procedure @ 0x058718 */
void newgui_fn_058718(void);
/* VA: 0x587a6 | Module newgui.cpp procedure @ 0x0587a6 */
void newgui_fn_0587a6(void);
/* VA: 0x587ff | Module newgui.cpp procedure @ 0x0587ff */
void newgui_fn_0587ff(void);
/* VA: 0x588b6 | Module newgui.cpp procedure @ 0x0588b6 */
ulonglong newgui_fn_0588b6(void);
/* VA: 0x58921 | String 'JONTY HERE   : ...I AM WRITING THIS AT 4AM ON KEEPERS LAST D' */
void newgui_jonty_here_am_writing_058921(void);
/* VA: 0x58a7e | Module newgui.cpp procedure @ 0x058a7e */
void newgui_fn_058a7e(void);
/* VA: 0x58b21 | Module newgui.cpp procedure @ 0x058b21 */
int newgui_fn_058b21(void);
/* VA: 0x58b37 | String 'This bloody tooltip is too long' */
int newgui_this_bloody_tooltip_long_058b37(void);
/* VA: 0x58ba8 | Configures font/flags and draws text on screen */
void newgui_draw_text_overlay_058ba8(void);
/* VA: 0x58ca7 | Configures font/flags and draws text on screen */
void newgui_draw_text_overlay_058ca7(undefined4 param_1,int param_2);
/* VA: 0x58e1c | Module newgui.cpp procedure @ 0x058e1c */
void newgui_fn_058e1c(void);
/* VA: 0x590f8 | Module newgui.cpp procedure @ 0x0590f8 */
void newgui_fn_0590f8(void);
/* VA: 0x59323 | Module newgui.cpp procedure @ 0x059323 */
void newgui_fn_059323(void);
/* VA: 0x595ab | Module newgui.cpp procedure @ 0x0595ab */
void newgui_fn_0595ab(void);
/* VA: 0x5990a | Module newgui.cpp procedure @ 0x05990a */
void newgui_fn_05990a(void);
/* VA: 0x59a23 | Module newgui.cpp procedure @ 0x059a23 */
void newgui_fn_059a23(void);
/* VA: 0x59aef | Module newgui.cpp procedure @ 0x059aef */
void newgui_fn_059aef(void);
/* VA: 0x59c71 | Module newgui.cpp procedure @ 0x059c71 */
void newgui_fn_059c71(void);
/* VA: 0x59c83 | Module newgui.cpp procedure @ 0x059c83 */
void newgui_fn_059c83(void);
/* VA: 0x59ca1 | Module newgui.cpp procedure @ 0x059ca1 */
void newgui_fn_059ca1(void);
/* VA: 0x59ccb | Module newgui.cpp procedure @ 0x059ccb */
void newgui_fn_059ccb(void);
/* VA: 0x59d02 | Module newgui.cpp procedure @ 0x059d02 */
void newgui_fn_059d02(void);
/* VA: 0x59d1a | Module newgui.cpp procedure @ 0x059d1a */
void newgui_fn_059d1a(void);
/* VA: 0x59d40 | Module newgui.cpp procedure @ 0x059d40 */
void newgui_fn_059d40(void);
/* VA: 0x59d66 | Module newgui.cpp procedure @ 0x059d66 */
void newgui_fn_059d66(void);
/* VA: 0x59dc4 | String 'Stupid spell chosen' */
void newgui_stupid_spell_chosen_059dc4(void);
/* VA: 0x59ee7 | Module newgui.cpp procedure @ 0x059ee7 */
void newgui_fn_059ee7(void);
/* VA: 0x59f51 | Module newgui.cpp procedure @ 0x059f51 */
void newgui_fn_059f51(void);
/* VA: 0x59f7e | Module newgui.cpp procedure @ 0x059f7e */
void newgui_fn_059f7e(void);
/* VA: 0x59fd4 | Module newgui.cpp procedure @ 0x059fd4 */
void newgui_fn_059fd4(void);
/* VA: 0x5a004 | Module newgui.cpp procedure @ 0x05a004 */
void newgui_fn_05a004(void);
/* VA: 0x5a06d | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void newgui_process_thing_entity_05a06d(void);
/* VA: 0x5a0e7 | Module newgui.cpp procedure @ 0x05a0e7 */
void newgui_fn_05a0e7(void);
/* VA: 0x5a111 | String 'ILLEGAL AUTOPILOT TYPE' */
void newgui_illegal_autopilot_type_05a111(void);
/* VA: 0x5a180 | Module newgui.cpp procedure @ 0x05a180 */
void newgui_fn_05a180(void);
/* VA: 0x5a18a | Module newgui.cpp procedure @ 0x05a18a */
void newgui_fn_05a18a(void);
/* VA: 0x5a19c | Module newgui.cpp procedure @ 0x05a19c */
void newgui_fn_05a19c(void);
/* VA: 0x5a1a4 | Module newgui.cpp procedure @ 0x05a1a4 */
void newgui_fn_05a1a4(void);
/* VA: 0x5a1b6 | Module newgui.cpp procedure @ 0x05a1b6 */
void newgui_fn_05a1b6(void);
/* VA: 0x5a1d1 | Module newgui.cpp procedure @ 0x05a1d1 */
void newgui_fn_05a1d1(void);
/* VA: 0x5a1da | Module newgui.cpp procedure @ 0x05a1da */
void newgui_fn_05a1da(void);
/* VA: 0x5a202 | Module newgui.cpp procedure @ 0x05a202 */
void newgui_fn_05a202(void);
/* VA: 0x5a22b | Module newgui.cpp procedure @ 0x05a22b */
void newgui_fn_05a22b(void);
/* VA: 0x5a266 | Module newgui.cpp procedure @ 0x05a266 */
void newgui_fn_05a266(void);
/* VA: 0x5a2b1 | Module newgui.cpp procedure @ 0x05a2b1 */
void newgui_fn_05a2b1(void);
/* VA: 0x5a2bc | Module newgui.cpp procedure @ 0x05a2bc */
void newgui_fn_05a2bc(void);
/* VA: 0x5a2c7 | Module newgui.cpp procedure @ 0x05a2c7 */
void newgui_fn_05a2c7(void);
/* VA: 0x5a338 | Module newgui.cpp procedure @ 0x05a338 */
void newgui_fn_05a338(void);
/* VA: 0x5a365 | Module newgui.cpp procedure @ 0x05a365 */
void newgui_fn_05a365(void);
/* VA: 0x5a3a8 | Module newgui.cpp procedure @ 0x05a3a8 */
void newgui_fn_05a3a8(void);
/* VA: 0x5a3ce | Module newgui.cpp procedure @ 0x05a3ce */
void newgui_fn_05a3ce(void);
/* VA: 0x5a417 | Module newgui.cpp procedure @ 0x05a417 */
void newgui_fn_05a417(void);
/* VA: 0x5a432 | Module newgui.cpp procedure @ 0x05a432 */
void newgui_fn_05a432(void);
/* VA: 0x5a47f | Module newgui.cpp procedure @ 0x05a47f */
void newgui_fn_05a47f(void);
/* VA: 0x5a521 | Module newgui.cpp procedure @ 0x05a521 */
void newgui_fn_05a521(void);
/* VA: 0x5a526 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_05a526(void);
/* VA: 0x5a567 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_05a567(void);
/* VA: 0x5a5b5 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_05a5b5(void);
/* VA: 0x5a600 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05a600(void);
/* VA: 0x5a649 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05a649(void);
/* VA: 0x5a692 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05a692(void);
/* VA: 0x5a6a6 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05a6a6(void);
/* VA: 0x5a705 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05a705(void);
/* VA: 0x5a76c | Reads/modifies Map[256x256] subtile data */
void newgui_process_map_subtile_05a76c(void);
/* VA: 0x5a83d | Reads/modifies Map[256x256] subtile data */
void newgui_process_map_subtile_05a83d(void);
/* VA: 0x5a8f3 | String 'EEK! This is what you just picked up a second ago!' */
void newgui_eek_this_what_you_05a8f3(void);
/* VA: 0x5aaf4 | Module newgui.cpp procedure @ 0x05aaf4 */
void newgui_fn_05aaf4(void);
/* VA: 0x5ab45 | Module newgui.cpp procedure @ 0x05ab45 */
void newgui_fn_05ab45(void);
/* VA: 0x5ab81 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05ab81(void);
/* VA: 0x5abd1 | Module newgui.cpp procedure @ 0x05abd1 */
void newgui_fn_05abd1(void);
/* VA: 0x5abf3 | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_05abf3(void);
/* VA: 0x5ac13 | Module newgui.cpp procedure @ 0x05ac13 */
void newgui_fn_05ac13(void);
/* VA: 0x5ac1e | Module newgui.cpp procedure @ 0x05ac1e */
void newgui_fn_05ac1e(void);
/* VA: 0x5ac4a | Module newgui.cpp procedure @ 0x05ac4a */
void newgui_fn_05ac4a(void);
/* VA: 0x5ac77 | Module newgui.cpp procedure @ 0x05ac77 */
void newgui_fn_05ac77(void);
/* VA: 0x5ac80 | Module newgui.cpp procedure @ 0x05ac80 */
void newgui_fn_05ac80(void);
/* VA: 0x5accc | Module newgui.cpp procedure @ 0x05accc */
void newgui_fn_05accc(void);
/* VA: 0x5acf7 | Module newgui.cpp procedure @ 0x05acf7 */
void newgui_fn_05acf7(void);
/* VA: 0x5ad0a | Module newgui.cpp procedure @ 0x05ad0a */
void newgui_fn_05ad0a(void);
/* VA: 0x5ad26 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05ad26(void);
/* VA: 0x5ae20 | Module newgui.cpp procedure @ 0x05ae20 */
longlong newgui_fn_05ae20(void);
/* VA: 0x5ae90 | Module newgui.cpp procedure @ 0x05ae90 */
void newgui_fn_05ae90(void);
/* VA: 0x5aee2 | Module newgui.cpp procedure @ 0x05aee2 */
void newgui_fn_05aee2(void);
/* VA: 0x5afda | Module newgui.cpp procedure @ 0x05afda */
undefined8 newgui_fn_05afda(void);
/* VA: 0x5b1bc | String 'backup_input_field too small' */
void newgui_backup_input_field_small_05b1bc(void);
/* VA: 0x5b25b | Module newgui.cpp procedure @ 0x05b25b */
undefined4 newgui_fn_05b25b(void);
/* VA: 0x5b3dd | Copies fixed-size state structure via LbMemoryCopy */
void newgui_copy_state_struct_05b3dd(void);
/* VA: 0x5b3fc | Module newgui.cpp procedure @ 0x05b3fc */
void newgui_fn_05b3fc(void);
/* VA: 0x5b4e7 | Copies fixed-size state structure via LbMemoryCopy */
void newgui_copy_state_struct_05b4e7(void);
/* VA: 0x5b5e1 | Module newgui.cpp procedure @ 0x05b5e1 */
void newgui_fn_05b5e1(void);
/* VA: 0x5b5f5 | Module newgui.cpp procedure @ 0x05b5f5 */
undefined4 newgui_fn_05b5f5(void);
/* VA: 0x5b645 | Module newgui.cpp procedure @ 0x05b645 */
undefined8 newgui_fn_05b645(void);
/* VA: 0x5b940 | Module newgui.cpp procedure @ 0x05b940 */
undefined4 newgui_fn_05b940(void);
/* VA: 0x5b9b3 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_05b9b3(void);
/* VA: 0x5b9c0 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_05b9c0(void);
/* VA: 0x5ba63 | Module newgui.cpp procedure @ 0x05ba63 */
void newgui_fn_05ba63(void);
/* VA: 0x5ba80 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05ba80(void);
/* VA: 0x5bb49 | Module newgui.cpp procedure @ 0x05bb49 */
void newgui_fn_05bb49(void);
/* VA: 0x5bb9c | Configures font/flags and draws text on screen */
undefined8 newgui_draw_text_overlay_05bb9c(void);
/* VA: 0x5bcc1 | Copies fixed-size state structure via LbMemoryCopy */
void newgui_copy_state_struct_05bcc1(void);
/* VA: 0x5bcd7 | Module newgui.cpp procedure @ 0x05bcd7 */
void newgui_fn_05bcd7(void);
/* VA: 0x5bd22 | Operates on Room structure in g_rooms (stride 0x45) */
ulonglong newgui_process_dungeon_room_05bd22(void);
/* VA: 0x5be78 | Reads/modifies SlabMap[85x85] tile entry */
ulonglong newgui_process_slabmap_tile_05be78(void);
/* VA: 0x5bf63 | Accesses per-player PlayerInfo state (stride 0x4ef) */
ulonglong newgui_update_player_view_state_05bf63(void);
/* VA: 0x5c053 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
ulonglong newgui_process_thing_entity_05c053(void);
/* VA: 0x5c2e3 | Module newgui.cpp procedure @ 0x05c2e3 */
void newgui_fn_05c2e3(void);
/* VA: 0x5c377 | Module newgui.cpp procedure @ 0x05c377 */
void newgui_fn_05c377(void);
/* VA: 0x5c408 | String 'Undefined event type: %d' */
void newgui_undefined_event_type_05c408(void);
/* VA: 0x5c4f3 | Module newgui.cpp procedure @ 0x05c4f3 */
void newgui_fn_05c4f3(void);
/* VA: 0x5c544 | Module newgui.cpp procedure @ 0x05c544 */
void newgui_fn_05c544(void);
/* VA: 0x5c74d | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void newgui_process_thing_entity_05c74d(void);
/* VA: 0x5c7c4 | Module newgui.cpp procedure @ 0x05c7c4 */
void newgui_fn_05c7c4(void);
/* VA: 0x5c7ea | Module newgui.cpp procedure @ 0x05c7ea */
void newgui_fn_05c7ea(void);
/* VA: 0x5c810 | Module newgui.cpp procedure @ 0x05c810 */
void newgui_fn_05c810(void);
/* VA: 0x5c82f | Module newgui.cpp procedure @ 0x05c82f */
void newgui_fn_05c82f(void);
/* VA: 0x5c848 | Module newgui.cpp procedure @ 0x05c848 */
void newgui_fn_05c848(void);
/* VA: 0x5c8bc | Module newgui.cpp procedure @ 0x05c8bc */
void newgui_fn_05c8bc(void);
/* VA: 0x5c8fa | Module newgui.cpp procedure @ 0x05c8fa */
void newgui_fn_05c8fa(undefined4 param_1,int param_2);
/* VA: 0x5c985 | Module newgui.cpp procedure @ 0x05c985 */
void newgui_fn_05c985(void);
/* VA: 0x5c9cf | Module newgui.cpp procedure @ 0x05c9cf */
void newgui_fn_05c9cf(int param_1);
/* VA: 0x5cabb | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void newgui_process_thing_entity_05cabb(void);
/* VA: 0x5cc4a | Module newgui.cpp procedure @ 0x05cc4a */
void newgui_fn_05cc4a(void);
/* VA: 0x5cc56 | Module newgui.cpp procedure @ 0x05cc56 */
void newgui_fn_05cc56(void);
/* VA: 0x5ccf5 | String 'Cycle button cannot have a 'gui_area_normal_button' draw fun' */
void newgui_cycle_button_have_gui_05ccf5(void);
/* VA: 0x5cd55 | Module newgui.cpp procedure @ 0x05cd55 */
void newgui_fn_05cd55(void);
/* VA: 0x5cda7 | Module newgui.cpp procedure @ 0x05cda7 */
void newgui_fn_05cda7(void);
/* VA: 0x5ce3d | Module newgui.cpp procedure @ 0x05ce3d */
void newgui_fn_05ce3d(void);
/* VA: 0x5ce63 | String 'Unable to create floating spirit' */
void newgui_create_floating_spirit_05ce63(void);
/* VA: 0x5ceca | Module newgui.cpp procedure @ 0x05ceca */
void newgui_fn_05ceca(void);
/* VA: 0x5cee9 | Module newgui.cpp procedure @ 0x05cee9 */
void newgui_fn_05cee9(void);
/* VA: 0x5cef9 | Module newgui.cpp procedure @ 0x05cef9 */
void newgui_fn_05cef9(void);
/* VA: 0x5cf03 | Module newgui.cpp procedure @ 0x05cf03 */
void newgui_fn_05cf03(void);
/* VA: 0x5cf2d | Module newgui.cpp procedure @ 0x05cf2d */
void newgui_fn_05cf2d(void);
/* VA: 0x5cf9f | Module newgui.cpp procedure @ 0x05cf9f */
void newgui_fn_05cf9f(void);
/* VA: 0x5d01f | Updates GUI button enabled bit (0x08) */
void newgui_maintain_gui_button_state_05d01f(void);
/* VA: 0x5d032 | Accesses per-player Dungeon state (stride 0x1508) */
void newgui_update_player_dungeon_05d032(void);
/* VA: 0x5d15e | Accesses per-player Dungeon state (stride 0x1508) */
bool newgui_update_player_dungeon_05d15e(void);
/* VA: 0x5d174 | Accesses per-player Dungeon state (stride 0x1508) */
undefined1 newgui_update_player_dungeon_05d174(void);
/* VA: 0x5d19c | String 'Dead thing in friend/enemy battle-list' */
void newgui_dead_thing_friend_enemy_05d19c(void);
/* VA: 0x5d280 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void newgui_update_player_view_state_05d280(void);

/* === Module: object.cpp (30 functions) === */
/* VA: 0xc38a4 | Module object.cpp procedure @ 0x0c38a4 */
void object_fn_0c38a4(void);
/* VA: 0xc3960 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void object_update_creature_control_0c3960(void);
/* VA: 0xc39a8 | String 'NOT DRAGGING ANYTHING' */
void object_dragging_anything_0c39a8(void);
/* VA: 0xc3a38 | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 object_update_player_dungeon_0c3a38(void);
/* VA: 0xc3c3c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong object_update_creature_and_thing_0c3c3c(void);
/* VA: 0xc4574 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 object_process_thing_entity_0c4574(void);
/* VA: 0xc4840 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined8 object_process_thing_entity_0c4840(void);
/* VA: 0xc4b0c | Reads/modifies SlabMap[85x85] tile entry */
void object_process_slabmap_tile_0c4b0c(void);
/* VA: 0xc4d28 | Accesses per-player Dungeon state (stride 0x1508) */
void object_update_player_dungeon_0c4d28(void);
/* VA: 0xc4f70 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 object_update_creature_and_thing_0c4f70(void);
/* VA: 0xc55c8 | Module object.cpp procedure @ 0x0c55c8 */
void object_fn_0c55c8(void);
/* VA: 0xc577c | Module object.cpp procedure @ 0x0c577c */
undefined4 object_fn_0c577c(void);
/* VA: 0xc57a4 | Module object.cpp procedure @ 0x0c57a4 */
undefined4 object_fn_0c57a4(void);
/* VA: 0xc57c4 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 object_process_slabmap_tile_0c57c4(void);
/* VA: 0xc595c | Module object.cpp procedure @ 0x0c595c */
undefined4 object_fn_0c595c(void);
/* VA: 0xc5980 | Module object.cpp procedure @ 0x0c5980 */
longlong object_fn_0c5980(void);
/* VA: 0xc599c | String 'PICKING UP INVALID OBJECT' */
int object_picking_up_object_0c599c(void);
/* VA: 0xc5b38 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 object_update_creature_and_thing_0c5b38(void);
/* VA: 0xc5e1c | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 object_update_player_dungeon_0c5e1c(void);
/* VA: 0xc6228 | Reads/modifies Map[256x256] subtile data */
undefined8 object_process_map_subtile_0c6228(void);
/* VA: 0xc6494 | Reads/modifies Map[256x256] subtile data */
uint object_process_map_subtile_0c6494(void);
/* VA: 0xc6574 | Checks Thing->class_id == 1 (Object) and processes state */
longlong object_handle_object_thing_0c6574(void);
/* VA: 0xc659c | Checks Thing->class_id == 1 (Object) and processes state */
longlong object_handle_object_thing_0c659c(void);
/* VA: 0xc65c8 | Checks Thing->class_id == 1 (Object) and processes state */
longlong object_handle_object_thing_0c65c8(void);
/* VA: 0xc65f0 | Reads/modifies Map[256x256] subtile data */
uint object_process_map_subtile_0c65f0(void);
/* VA: 0xc6758 | Reads/modifies Map[256x256] subtile data */
uint object_process_map_subtile_0c6758(void);
/* VA: 0xc688c | Checks Thing->class_id == 1 (Object) and processes state */
longlong object_handle_object_thing_0c688c(void);
/* VA: 0xc68b4 | Reads/modifies Map[256x256] subtile data */
uint object_process_map_subtile_0c68b4(void);
/* VA: 0xc69e8 | Reads/modifies Map[256x256] subtile data */
uint object_process_map_subtile_0c69e8(void);
/* VA: 0xc6b04 | Module object.cpp procedure @ 0x0c6b04 */
int object_fn_0c6b04(void);

/* === Module: packet.cpp (38 functions) === */
/* VA: 0x5d32c | Validate room and trap state before turn packet processing */
void packet_check_all_room_ packet_check_all_room_ traps_sync(void);
/* VA: 0x5d34c | Scan 86 catalogue slots for valid string pointers */
void packet_validate_active_Catalogue_entries(void);
/* VA: 0x5d35c | Chunked full-game-state network resynchronization via LbNetwork_Exchange */
void packet_resync_network_game_state(void);
/* VA: 0x5d7b5 | Capture local player cursor, hand, and mode into turn Packet */
void packet_build_local_player_turn_packet(void);
/* VA: 0x5da11 | Re-initialize level state and reload packet stream on resync/replay */
void packet_init_level_replay_or_resync(void);
/* VA: 0x5dc27 | Exchange per-turn Packet structs across peers via LbNetwork_Exchange */
void packet_exchange_all_players_packets(void);
/* VA: 0x5dde9 | OR control bitflag into pkt->control_flags (+0x0e) */
void set_packet_control_flag(void);
/* VA: 0x5ddee | Populate pkt->action (+0x05), actn_par1 (+0x06), and actn_par2 (+0x08) */
void set_packet_action(void);
/* VA: 0x5de00 | Find next active non-spectator player index in g_players */
undefined8 packet_find_next_active_player(void);
/* VA: 0x5de7c | Apply incoming Packet.player_flags and control_flags to PlayerInfo */
undefined8 process_players_packet_control_flags(void);
/* VA: 0x5df2f | Embedded data/thunk block in packet.cpp */
void packet_vio_table_data_block(void);
/* VA: 0x5e01e | Main per-turn dispatcher executing Packet actions for all active players */
void process_all_players_turn_packets(void);
/* VA: 0x5eb8d | Execute dungeon-view Packet action for a player */
void process_players_dungeon_control_packet(void);
/* VA: 0x5ec71 | Execute first-person creature possession Packet movement & instance actions */
void process_players_creature_control_packet(void);
/* VA: 0x5f001 | Handle spectator view packet toggle */
void process_players_spectator_packet(void);
/* VA: 0x5f049 | Handle parchment map view zoom/exit packet actions */
void process_players_map_view_packet(void);
/* VA: 0x5f163 | Execute global hotkeys, pause, message, and view-mode Packet actions */
void process_players_global_packet_action(void);
/* VA: 0x5f3ad | Update camera position and actions while riding a possessed creature */
void process_players_creature_passenger_packet(void);
/* VA: 0x5f438 | Update player camera zoom/bounding box from packet control flags */
void packet_update_player_zoom_box(void);
/* VA: 0x5f4d9 | Verify whether player can interact with target Thing in packet */
void packet_check_thing_interaction_valid(void);
/* VA: 0x5f577 | Check if player gold covers cost of room/trap kind */
uint packet_can_player_afford_room_or_trap(void);
/* VA: 0x5f5db | Check if map subtile (x, y) is revealed for player bitmask */
uint packet_is_subtile_revealed_for_player(void);
/* VA: 0x5f6c5 | Master switch executing dungeon build, dig, slap, pickup, drop, and spell Packet commands */
void process_players_dungeon_command_packet(void);
/* VA: 0x61751 | Zero out a player's 17-byte Packet slot for the upcoming turn */
void clear_packet_for_player(void);
/* VA: 0x617c9 | Create and write header for new .PKT replay recording file */
void open_new_packet_file_for_save(void);
/* VA: 0x61883 | Compute Thing checksum (compute_things_checksum) and write turn Packets to .PKT file */
void write_turn_packets_to_file(void);
/* VA: 0x618f5 | Open existing .PKT replay file and validate header */
void open_packet_file_for_load(void);
/* VA: 0x619be | Seek and read per-turn Packet structures from open .PKT replay file */
void load_turn_packets_from_file(void);
/* VA: 0x61bde | Directly attach player camera to possessed Thing */
void packet_possess_thing_direct(void);
/* VA: 0x61ca3 | Process double-click packet action within turn threshold */
void packet_handle_double_click_action(void);
/* VA: 0x61d43 | Trigger dungeon special box or spell from packet command */
undefined4 packet_activate_dungeon_special_or_spell(char param_1);
/* VA: 0x61e86 | Tag or untag a 3x3 subtile slab area for imp digging */
void packet_tag_slab_for_digging(void);
/* VA: 0x61f1b | Check if subtile contains Things selectable by player hand */
bool packet_has_selectable_things_at_subtile(void);
/* VA: 0x61f77 | Synchronize pause state across singleplayer/multiplayer packet flags */
void packet_update_pause_mode_state(void);
/* VA: 0x620e6 | Compute deterministic checksum over Dungeon and SlabMap state */
void packet_compute_full_dungeon_checksum(void);
/* VA: 0x62238 | Save current level/campaign catalogue settings before packet replay */
void packet_backup_catalogue_settings(void);
/* VA: 0x622f1 | Restore level/campaign catalogue settings after packet replay */
void packet_restore_catalogue_settings(void);
/* VA: 0x623aa | Lock screen and draw multiplayer/packet cursor overlay */
void packet_draw_debug_cursor_overlay(void);

/* === Module: panmap.cpp (12 functions) === */
/* VA: 0x62570 | Module panmap.cpp procedure @ 0x062570 */
undefined4 panmap_fn_062570(void);
/* VA: 0x62578 | Module panmap.cpp procedure @ 0x062578 */
undefined8 panmap_fn_062578(void);
/* VA: 0x62787 | Module panmap.cpp procedure @ 0x062787 */
void panmap_fn_062787(void);
/* VA: 0x627b5 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void panmap_update_player_view_state_0627b5(void);
/* VA: 0x629cc | Module panmap.cpp procedure @ 0x0629cc */
void panmap_fn_0629cc(void);
/* VA: 0x62a0d | Module panmap.cpp procedure @ 0x062a0d */
void panmap_fn_062a0d(void);
/* VA: 0x62b62 | Module panmap.cpp procedure @ 0x062b62 */
void panmap_fn_062b62(void);
/* VA: 0x62d70 | Module panmap.cpp procedure @ 0x062d70 */
void panmap_fn_062d70(void);
/* VA: 0x62eb7 | Module panmap.cpp procedure @ 0x062eb7 */
void panmap_fn_062eb7(void);
/* VA: 0x62ee2 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void panmap_update_player_view_state_062ee2(void);
/* VA: 0x63122 | String 'No door for flagged position' */
void panmap_door_flagged_position_063122(void);
/* VA: 0x633c4 | Module panmap.cpp procedure @ 0x0633c4 */
undefined4 panmap_fn_0633c4(void);

/* === Module: person.cpp (45 functions) === */
/* VA: 0x63412 | Log prefix 'ERROR : Incorrect command : %d' */
undefined4 person_ERROR_063412(void);
/* VA: 0x63670 | String 'Thing already in Peter list' */
void person_thing_already_peter_list_063670(void);
/* VA: 0x6385d | String 'Not in Peter list' */
void person_peter_list_06385d(void);
/* VA: 0x63a25 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void person_update_creature_control_063a25(void);
/* VA: 0x63b55 | Module person.cpp procedure @ 0x063b55 */
undefined8 person_fn_063b55(void);
/* VA: 0x63b6d | Module person.cpp procedure @ 0x063b6d */
undefined8 person_fn_063b6d(void);
/* VA: 0x63c04 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined4 person_roll_action_random_063c04(void);
/* VA: 0x63cb7 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong person_update_creature_control_063cb7(void);
/* VA: 0x63d17 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong person_update_creature_control_063d17(void);
/* VA: 0x63d6c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong person_update_creature_control_063d6c(void);
/* VA: 0x63dbe | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 person_update_creature_control_063dbe(void);
/* VA: 0x63dd3 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 person_update_creature_control_063dd3(void);
/* VA: 0x640f7 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong person_update_creature_control_0640f7(void);
/* VA: 0x64174 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong person_update_creature_control_064174(void);
/* VA: 0x641a6 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 person_update_creature_and_thing_0641a6(void);
/* VA: 0x64279 | Updates 3x3 subtile map entries for slab coordinates */
undefined8 person_update_slab_subtile_columns_064279(void);
/* VA: 0x6435e | Module person.cpp procedure @ 0x06435e */
longlong person_fn_06435e(void);
/* VA: 0x64365 | String 'TRYING TO REMOVE SPELL FROM A ROOM WITH NO SPELL' */
undefined8 person_trying_remove_spell_room_064365(void);
/* VA: 0x644e9 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 person_update_slab_subtile_columns_0644e9(void);
/* VA: 0x645dd | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 person_update_creature_and_thing_0645dd(void);
/* VA: 0x64703 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 person_update_creature_and_thing_064703(void);
/* VA: 0x647b6 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 person_update_creature_and_thing_0647b6(void);
/* VA: 0x6484c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 person_update_creature_and_thing_06484c(void);
/* VA: 0x64900 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 person_update_creature_and_thing_064900(void);
/* VA: 0x649ad | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong person_update_creature_and_thing_0649ad(void);
/* VA: 0x64a2e | Module person.cpp procedure @ 0x064a2e */
undefined8 person_fn_064a2e(void);
/* VA: 0x64a5f | String 'External change state, but thing in room list even after cle' */
undefined1 person_external_change_state_but_064a5f(void);
/* VA: 0x64ae7 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 person_update_creature_control_064ae7(void);
/* VA: 0x64b0c | String 'Initialise state, but thing in room list even after cleanup' */
undefined4 person_initialise_state_but_thing_064b0c(void);
/* VA: 0x64b77 | Module person.cpp procedure @ 0x064b77 */
undefined4 person_fn_064b77(void);
/* VA: 0x64bce | Module person.cpp procedure @ 0x064bce */
undefined8 person_fn_064bce(void);
/* VA: 0x64bf8 | Module person.cpp procedure @ 0x064bf8 */
undefined8 person_fn_064bf8(void);
/* VA: 0x64c4d | Module person.cpp procedure @ 0x064c4d */
int person_fn_064c4d(void);
/* VA: 0x64d00 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
ulonglong person_update_creature_control_064d00(void);
/* VA: 0x64e28 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 person_update_creature_control_064e28(void);
/* VA: 0x64e59 | Module person.cpp procedure @ 0x064e59 */
undefined4 person_fn_064e59(void);
/* VA: 0x64e63 | Module person.cpp procedure @ 0x064e63 */
undefined4 person_fn_064e63(void);
/* VA: 0x64e6d | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 person_update_creature_and_thing_064e6d(void);
/* VA: 0x64ea4 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 person_process_slabmap_tile_064ea4(void);
/* VA: 0x6509e | String 'Cannot nav outside room' */
undefined8 person_nav_outside_room_06509e(void);
/* VA: 0x65199 | Module person.cpp procedure @ 0x065199 */
longlong person_fn_065199(void);
/* VA: 0x65283 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 person_update_creature_control_065283(void);
/* VA: 0x65360 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong person_update_creature_control_065360(void);
/* VA: 0x653ce | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 person_update_creature_control_0653ce(void);
/* VA: 0x65448 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 person_update_creature_control_065448(void);

/* === Module: pom.cpp (11 functions) === */
/* VA: 0x654d8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 pom_update_creature_control_0654d8(void);
/* VA: 0x65545 | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined8 pom_roll_action_random_065545(void);
/* VA: 0x655fa | Updates 3x3 subtile map entries for slab coordinates */
undefined8 pom_update_slab_subtile_columns_0655fa(void);
/* VA: 0x6571a | Module pom.cpp procedure @ 0x06571a */
undefined4 pom_fn_06571a(void);
/* VA: 0x65724 | String 'POM - Too many iterations' */
longdouble pom_iterations_065724(void);
/* VA: 0x65864 | Module pom.cpp procedure @ 0x065864 */
void pom_fn_065864(float *param_1);
/* VA: 0x659ab | Module pom.cpp procedure @ 0x0659ab */
int pom_fn_0659ab(void);
/* VA: 0x65a61 | Module pom.cpp procedure @ 0x065a61 */
int pom_fn_065a61(void);
/* VA: 0x65af0 | Module pom.cpp procedure @ 0x065af0 */
bool pom_fn_065af0(void);
/* VA: 0x65b07 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong pom_update_creature_control_065b07(void);
/* VA: 0x65be8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 pom_update_creature_control_065be8(void);

/* === Module: prison.cpp (9 functions) === */
/* VA: 0x65c8e | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 prison_update_player_view_state_065c8e(void);
/* VA: 0x65d3e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 prison_update_creature_control_065d3e(void);
/* VA: 0x65ebd | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 prison_update_creature_control_065ebd(void);
/* VA: 0x65f82 | Module prison.cpp procedure @ 0x065f82 */
longlong prison_fn_065f82(undefined4 param_1,uint param_2);
/* VA: 0x65f8a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong prison_update_creature_control_065f8a(void);
/* VA: 0x66016 | String 'COULDN'T CREATE SKELETON IN PRISON' */
void prison_couldn_create_skeleton_prison_066016(void);
/* VA: 0x660f1 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 prison_update_creature_control_0660f1(void);
/* VA: 0x66111 | Module prison.cpp procedure @ 0x066111 */
undefined4 prison_fn_066111(void);
/* VA: 0x6616d | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 prison_update_creature_and_thing_06616d(void);

/* === Module: research.cpp (19 functions) === */
/* VA: 0x66247 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 research_update_creature_control_066247(void);
/* VA: 0x66334 | Accesses per-player Dungeon state (stride 0x1508) */
longlong research_update_player_dungeon_066334(void);
/* VA: 0x66379 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 research_update_creature_control_066379(void);
/* VA: 0x66447 | String 'CANNOT MOVE IN RESEARCH ROOM C%d, M%d' */
longlong research_move_research_room_066447(void);
/* VA: 0x6655e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong research_update_creature_control_06655e(void);
/* VA: 0x6666f | Accesses CreatureControl state in g_creature_ctrl_ptrs */
bool research_update_creature_control_06666f(void);
/* VA: 0x666a8 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
uint research_update_creature_and_thing_0666a8(void);
/* VA: 0x668b0 | String 'I CANNOT MOVE IN RESEARCH ROOM C%d, M%d' */
uint research_move_research_room_0668b0(void);
/* VA: 0x66a1a | String 'Illegal research type in getting next research item' */
undefined8 research_illegal_research_type_getting_066a1a(void);
/* VA: 0x66a9f | String 'Illegal research type in process player research' */
undefined4 research_illegal_research_type_process_066a9f(void);
/* VA: 0x66b28 | String 'Illegal research type in process player research' */
void research_illegal_research_type_process_066b28(void);
/* VA: 0x66d65 | Accesses per-player Dungeon state (stride 0x1508) */
void research_update_player_dungeon_066d65(void);
/* VA: 0x66dc2 | String 'Could not find room for thing' */
undefined4 research_could_find_room_thing_066dc2(void);
/* VA: 0x66ecc | Accesses per-player Dungeon state (stride 0x1508) */
longlong research_update_player_dungeon_066ecc(void);
/* VA: 0x66eff | Module research.cpp procedure @ 0x066eff */
longlong research_fn_066eff(void);
/* VA: 0x66f4f | String 'TOO MUCH RESEARCH FOR PLAYER %d' */
undefined4 research_much_research_player_066f4f(void);
/* VA: 0x66fcb | Module research.cpp procedure @ 0x066fcb */
undefined4 research_fn_066fcb(void);
/* VA: 0x66ff9 | Accesses per-player Dungeon state (stride 0x1508) */
undefined4 research_update_player_dungeon_066ff9(void);
/* VA: 0x670b2 | Updates 3x3 subtile map entries for slab coordinates */
void research_update_slab_subtile_columns_0670b2(void);

/* === Module: room.cpp (102 functions) === */
/* VA: 0xc6374 | Operates on Room structure in g_rooms (stride 0x45) */
void room_process_dungeon_room_0c6374(void);
/* VA: 0xc6ba4 | Module room.cpp procedure @ 0x0c6ba4 */
void room_fn_0c6ba4(void);
/* VA: 0xc6be0 | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 room_process_dungeon_room_0c6be0(void);
/* VA: 0xc6ec0 | Module room.cpp procedure @ 0x0c6ec0 */
uint room_fn_0c6ec0(void);
/* VA: 0xc7058 | Module room.cpp procedure @ 0x0c7058 */
byte room_fn_0c7058(void);
/* VA: 0xc7218 | Module room.cpp procedure @ 0x0c7218 */
void room_fn_0c7218(void);
/* VA: 0xc7550 | Module room.cpp procedure @ 0x0c7550 */
void room_fn_0c7550(void);
/* VA: 0xc7594 | Module room.cpp procedure @ 0x0c7594 */
void room_fn_0c7594(void);
/* VA: 0xc75b4 | Module room.cpp procedure @ 0x0c75b4 */
void room_fn_0c75b4(void);
/* VA: 0xc7910 | Module room.cpp procedure @ 0x0c7910 */
uint room_fn_0c7910(void);
/* VA: 0xc7970 | Module room.cpp procedure @ 0x0c7970 */
uint room_fn_0c7970(void);
/* VA: 0xc79e0 | Module room.cpp procedure @ 0x0c79e0 */
bool room_fn_0c79e0(void);
/* VA: 0xc7a58 | Module room.cpp procedure @ 0x0c7a58 */
bool room_fn_0c7a58(void);
/* VA: 0xc7ad0 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 room_process_dungeon_room_0c7ad0(void);
/* VA: 0xc7be4 | Operates on Room structure in g_rooms (stride 0x45) */
void room_process_dungeon_room_0c7be4(void);
/* VA: 0xc7f7c | String 'Created chicken in a wall' */
undefined8 room_created_chicken_wall_0c7f7c(void);
/* VA: 0xc8268 | Reads/modifies SlabMap[85x85] tile entry */
int room_process_slabmap_tile_0c8268(void);
/* VA: 0xc856c | String 'HOW CAN A ROOM EXIST WITH NO SLABS?' */
void room_how_room_exist_slabs_0c856c(void);
/* VA: 0xc8654 | String 'HOW CAN A ROOM EXIST WITH NO SLABS?' */
undefined4 room_how_room_exist_slabs_0c8654(void);
/* VA: 0xc8d10 | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 room_process_dungeon_room_0c8d10(void);
/* VA: 0xc9040 | String 'How come this bridge was placed on path? Hmmm?' */
void room_how_come_this_bridge_0c9040(char param_1);
/* VA: 0xc9178 | Module room.cpp procedure @ 0x0c9178 */
longlong room_fn_0c9178(void);
/* VA: 0xc9280 | String 'Lair thinks it belongs to a creature, but the creature disag' */
void room_lair_thinks_it_belongs_0c9280(void);
/* VA: 0xc98d0 | Operates on Room structure in g_rooms (stride 0x45) */
void room_process_dungeon_room_0c98d0(void);
/* VA: 0xc9988 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0c9988(void);
/* VA: 0xc9b2c | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 room_process_dungeon_room_0c9b2c(void);
/* VA: 0xc9e8c | Operates on Room structure in g_rooms (stride 0x45) */
int room_process_dungeon_room_0c9e8c(void);
/* VA: 0xca248 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca248(void);
/* VA: 0xca34c | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca34c(void);
/* VA: 0xca474 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca474(int param_1);
/* VA: 0xca568 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca568(int param_1);
/* VA: 0xca65c | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca65c(void);
/* VA: 0xca6bc | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca6bc(void);
/* VA: 0xca7ac | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca7ac(void);
/* VA: 0xca8c0 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca8c0(void);
/* VA: 0xca928 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0ca928(int param_1);
/* VA: 0xca9d0 | String 'THIS SHOULD NOT HAPPEN - ROOM COUNT WRONG?' */
undefined1 * room_this_should_happen_room_0ca9d0(void);
/* VA: 0xcaa90 | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0caa90(void);
/* VA: 0xcadd8 | Module room.cpp procedure @ 0x0cadd8 */
void room_fn_0cadd8(void);
/* VA: 0xcae40 | String 'HOW CAN A ROOM EXIST WITH NO SLABS?' */
int room_how_room_exist_slabs_0cae40(void);
/* VA: 0xcb144 | Operates on Room structure in g_rooms (stride 0x45) */
void room_process_dungeon_room_0cb144(void);
/* VA: 0xcb33c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 room_update_creature_control_0cb33c(void);
/* VA: 0xcc420 | Module room.cpp procedure @ 0x0cc420 */
undefined4 room_fn_0cc420(void);
/* VA: 0xcc45c | Module room.cpp procedure @ 0x0cc45c */
undefined4 room_fn_0cc45c(void);
/* VA: 0xcc4a0 | Module room.cpp procedure @ 0x0cc4a0 */
undefined4 room_fn_0cc4a0(void);
/* VA: 0xcc51c | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
undefined4 room_roll_action_random_0cc51c(void);
/* VA: 0xcc65c | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0cc65c(void);
/* VA: 0xcc968 | String 'Number of slabs for room is zero' */
uint room_number_slabs_room_zero_0cc968(void);
/* VA: 0xccc08 | String 'Could not find valid FIRST point in room for creature' */
uint room_could_find_valid_first_0ccc08(void);
/* VA: 0xccd6c | Operates on Room structure in g_rooms (stride 0x45) */
undefined4 room_process_dungeon_room_0ccd6c(void);
/* VA: 0xccf10 | String 'Number of slabs for room is zero' */
uint room_number_slabs_room_zero_0ccf10(void);
/* VA: 0xcd1d4 | String 'Could not find valid RANDOM point in room for thing' */
uint room_could_find_valid_random_0cd1d4(void);
/* VA: 0xcd4dc | String 'HOW CAN A ROOM EXIST WITH NO SLABS?' */
uint room_how_room_exist_slabs_0cd4dc(void);
/* VA: 0xcd85c | String 'Attempt to add creature to room type %d when he is a member ' */
uint room_attempt_add_creature_room_0cd85c(void);
/* VA: 0xcd9b0 | String 'Attempt to remove a creature from room type %d with too litt' */
ulonglong room_attempt_remove_creature_room_0cd9b0(void);
/* VA: 0xcdaec | String 'Attempt to remove a creature from room type %d with too litt' */
int room_attempt_remove_creature_room_0cdaec(void);
/* VA: 0xcdbfc | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void room_process_thing_entity_0cdbfc(void);
/* VA: 0xcdcd0 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 room_update_slab_subtile_columns_0cdcd0(void);
/* VA: 0xce0e4 | Module room.cpp procedure @ 0x0ce0e4 */
undefined4 room_fn_0ce0e4(void);
/* VA: 0xce148 | Reads/modifies Map[256x256] subtile data */
void room_process_map_subtile_0ce148(void);
/* VA: 0xce228 | Reads/modifies Map[256x256] subtile data */
void room_process_map_subtile_0ce228(void);
/* VA: 0xce2a4 | Module room.cpp procedure @ 0x0ce2a4 */
void room_fn_0ce2a4(void);
/* VA: 0xce2b0 | Module room.cpp procedure @ 0x0ce2b0 */
void room_fn_0ce2b0(void);
/* VA: 0xce2d4 | Module room.cpp procedure @ 0x0ce2d4 */
void room_fn_0ce2d4(void);
/* VA: 0xce340 | Module room.cpp procedure @ 0x0ce340 */
void room_fn_0ce340(void);
/* VA: 0xce378 | Module room.cpp procedure @ 0x0ce378 */
void room_fn_0ce378(void);
/* VA: 0xce3b0 | Module room.cpp procedure @ 0x0ce3b0 */
void room_fn_0ce3b0(void);
/* VA: 0xce418 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void room_process_thing_entity_0ce418(void);
/* VA: 0xce630 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
int room_process_thing_entity_0ce630(void);
/* VA: 0xce7d4 | Reads/modifies Map[256x256] subtile data */
void room_process_map_subtile_0ce7d4(void);
/* VA: 0xcead4 | String 'BLOODY HELL >10 SPELLS TO REPOSITION!!!' */
void room_bloody_hell_spells_reposition_0cead4(void);
/* VA: 0xcee7c | String 'BLOODY HELL >10 BODIES TO REPOSITION!!!' */
void room_bloody_hell_bodies_reposition_0cee7c(void);
/* VA: 0xcf19c | String 'BLOODY HELL >10 SPELLS TO REPOSITION!!!' */
void room_bloody_hell_spells_reposition_0cf19c(void);
/* VA: 0xcf518 | String 'Infinite loop in count_workers_in_room' */
void room_infinite_loop_count_workers_0cf518(void);
/* VA: 0xcf594 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void room_update_creature_and_thing_0cf594(void);
/* VA: 0xcf8cc | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 room_process_dungeon_room_0cf8cc(void);
/* VA: 0xcfbd8 | Module room.cpp procedure @ 0x0cfbd8 */
undefined4 room_fn_0cfbd8(void);
/* VA: 0xcfc48 | Module room.cpp procedure @ 0x0cfc48 */
bool room_fn_0cfc48(void);
/* VA: 0xcfcd8 | Module room.cpp procedure @ 0x0cfcd8 */
undefined4 room_fn_0cfcd8(void);
/* VA: 0xcfd4c | Module room.cpp procedure @ 0x0cfd4c */
undefined4 room_fn_0cfd4c(void);
/* VA: 0xcfd8c | Module room.cpp procedure @ 0x0cfd8c */
undefined4 room_fn_0cfd8c(void);
/* VA: 0xcfdec | Module room.cpp procedure @ 0x0cfdec */
void room_fn_0cfdec(void);
/* VA: 0xcfeb4 | Module room.cpp procedure @ 0x0cfeb4 */
void room_fn_0cfeb4(void);
/* VA: 0xcfefc | Module room.cpp procedure @ 0x0cfefc */
void room_fn_0cfefc(void);
/* VA: 0xcff7c | Operates on Room structure in g_rooms (stride 0x45) */
undefined8 room_process_dungeon_room_0cff7c(void);
/* VA: 0xd003c | Operates on Room structure in g_rooms (stride 0x45) */
int room_process_dungeon_room_0d003c(void);
/* VA: 0xd0098 | Operates on Room structure in g_rooms (stride 0x45) */
int room_process_dungeon_room_0d0098(void);
/* VA: 0xd0118 | String 'HOW CAN A ROOM EXIST WITH NO SLABS?' */
undefined4 room_how_room_exist_slabs_0d0118(void);
/* VA: 0xd0488 | String 'HOW CAN A ROOM EXIST WITH NO SLABS?' */
undefined4 room_how_room_exist_slabs_0d0488(void);
/* VA: 0xd08a8 | String 'Lair thinks it belongs to a creature, but the creature disag' */
void room_lair_thinks_it_belongs_0d08a8(void);
/* VA: 0xd0d80 | String 'Cannot create room_flag' */
void room_create_room_flag_0d0d80(void);
/* VA: 0xd0ee0 | Updates 3x3 subtile map entries for slab coordinates */
undefined1 * room_update_slab_subtile_columns_0d0ee0(void);
/* VA: 0xd0f50 | Updates 3x3 subtile map entries for slab coordinates */
undefined8 room_update_slab_subtile_columns_0d0f50(void);
/* VA: 0xd0fc0 | Updates 3x3 subtile map entries for slab coordinates */
undefined8 room_update_slab_subtile_columns_0d0fc0(void);
/* VA: 0xd1030 | String 'INVALID ROOM PASSED' */
int room_passed_0d1030(void);
/* VA: 0xd11f4 | Operates on Room structure in g_rooms (stride 0x45) */
int room_process_dungeon_room_0d11f4(void);
/* VA: 0xd124c | Operates on Room structure in g_rooms (stride 0x45) */
int room_process_dungeon_room_0d124c(void);
/* VA: 0xd129c | Operates on Room structure in g_rooms (stride 0x45) */
undefined1 * room_process_dungeon_room_0d129c(void);
/* VA: 0xd12cc | Reads/modifies SlabMap[85x85] tile entry */
undefined4 room_process_slabmap_tile_0d12cc(void);
/* VA: 0xd132c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong room_update_creature_control_0d132c(void);
/* VA: 0xd137c | Module room.cpp procedure @ 0x0d137c */
void room_fn_0d137c(void);
/* VA: 0xd13d4 | Module room.cpp procedure @ 0x0d13d4 */
undefined4 room_fn_0d13d4(void);

/* === Module: routes.cpp (22 functions) === */
/* VA: 0xd13f0 | Module routes.cpp procedure @ 0x0d13f0 */
undefined4 routes_fn_0d13f0(void);
/* VA: 0xd1420 | Module routes.cpp procedure @ 0x0d1420 */
void routes_fn_0d1420(void);
/* VA: 0xd1444 | Module routes.cpp procedure @ 0x0d1444 */
void routes_fn_0d1444(void);
/* VA: 0xd1548 | Module routes.cpp procedure @ 0x0d1548 */
int routes_fn_0d1548(void);
/* VA: 0xd167c | Module routes.cpp procedure @ 0x0d167c */
undefined4 routes_fn_0d167c(void);
/* VA: 0xd17a8 | Module routes.cpp procedure @ 0x0d17a8 */
undefined8 routes_fn_0d17a8(void);
/* VA: 0xd18d0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void routes_update_creature_control_0d18d0(undefined1 param_1);
/* VA: 0xd1904 | String 'Navigation door has player of larger than 6' */
byte routes_navigation_door_has_player_0d1904(void);
/* VA: 0xd1a48 | Module routes.cpp procedure @ 0x0d1a48 */
uint routes_fn_0d1a48(void);
/* VA: 0xd1ac4 | Module routes.cpp procedure @ 0x0d1ac4 */
void routes_fn_0d1ac4(void);
/* VA: 0xd1ae0 | String 'I've been pushing for a very long time now...' */
undefined4 routes_ve_been_pushing_very_0d1ae0(void);
/* VA: 0xd2480 | Module routes.cpp procedure @ 0x0d2480 */
bool routes_fn_0d2480(void);
/* VA: 0xd2510 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
int routes_update_creature_control_0d2510(void);
/* VA: 0xd29ac | String 'Illegal block direction for lookahead' */
undefined1 routes_illegal_block_direction_lookahead_0d29ac(void);
/* VA: 0xd3ee8 | Module routes.cpp procedure @ 0x0d3ee8 */
bool routes_fn_0d3ee8(void);
/* VA: 0xd3f64 | Module routes.cpp procedure @ 0x0d3f64 */
byte routes_fn_0d3f64(void);
/* VA: 0xd402c | Module routes.cpp procedure @ 0x0d402c */
undefined4 routes_fn_0d402c(int param_1);
/* VA: 0xd4188 | String 'I've been pushing for a very long time now...' */
undefined4 routes_ve_been_pushing_very_0d4188(void);
/* VA: 0xd5624 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 routes_update_creature_control_0d5624(undefined4 param_1,int param_2);
/* VA: 0xd5ac0 | Module routes.cpp procedure @ 0x0d5ac0 */
longlong routes_fn_0d5ac0(void);
/* VA: 0xd5af0 | Reads/modifies Map[256x256] subtile data */
void routes_process_map_subtile_0d5af0(void);
/* VA: 0xd6664 | Module routes.cpp procedure @ 0x0d6664 */
void routes_fn_0d6664(void);

/* === Module: rt/watcom_crt.cpp (1058 functions) === */
/* VA: 0x1056a8 | Module rt/watcom_crt.cpp procedure @ 0x1056a8 */
ulonglong watcom_crt_fn_1056a8(void);
/* VA: 0x106154 | Module rt/watcom_crt.cpp procedure @ 0x106154 */
void watcom_crt_fn_106154(void);
/* VA: 0x1061b4 | Module rt/watcom_crt.cpp procedure @ 0x1061b4 */
void watcom_crt_fn_1061b4(void);
/* VA: 0x106234 | Module rt/watcom_crt.cpp procedure @ 0x106234 */
undefined4 watcom_crt_fn_106234(void);
/* VA: 0x106bc8 | Module rt/watcom_crt.cpp procedure @ 0x106bc8 */
undefined4 watcom_crt_fn_106bc8(void);
/* VA: 0x1073e0 | Module rt/watcom_crt.cpp procedure @ 0x1073e0 */
undefined1 watcom_crt_fn_1073e0(void);
/* VA: 0x1079f8 | Module rt/watcom_crt.cpp procedure @ 0x1079f8 */
undefined8 watcom_crt_fn_1079f8(void);
/* VA: 0x1082bc | Module rt/watcom_crt.cpp procedure @ 0x1082bc */
undefined1 watcom_crt_fn_1082bc(void);
/* VA: 0x108b74 | Module rt/watcom_crt.cpp procedure @ 0x108b74 */
undefined8 watcom_crt_fn_108b74(void);
/* VA: 0x109428 | Module rt/watcom_crt.cpp procedure @ 0x109428 */
void watcom_crt_fn_109428(void);
/* VA: 0x1099cc | Module rt/watcom_crt.cpp procedure @ 0x1099cc */
int watcom_crt_fn_1099cc(void);
/* VA: 0x109acc | Module rt/watcom_crt.cpp procedure @ 0x109acc */
undefined4 watcom_crt_fn_109acc(void);
/* VA: 0x10a2b8 | Module rt/watcom_crt.cpp procedure @ 0x10a2b8 */
void watcom_crt_fn_10a2b8(void);
/* VA: 0x10a370 | Module rt/watcom_crt.cpp procedure @ 0x10a370 */
undefined8 watcom_crt_fn_10a370(void);
/* VA: 0x10a3b0 | Module rt/watcom_crt.cpp procedure @ 0x10a3b0 */
void watcom_crt_fn_10a3b0(void);
/* VA: 0x10a6b0 | Module rt/watcom_crt.cpp procedure @ 0x10a6b0 */
undefined4 watcom_crt_fn_10a6b0(void);
/* VA: 0x10a784 | Module rt/watcom_crt.cpp procedure @ 0x10a784 */
int watcom_crt_fn_10a784(void);
/* VA: 0x10a788 | Module rt/watcom_crt.cpp procedure @ 0x10a788 */
int watcom_crt_fn_10a788(void);
/* VA: 0x10a795 | Module rt/watcom_crt.cpp procedure @ 0x10a795 */
void watcom_crt_fn_10a795(void);
/* VA: 0x10a79a | Module rt/watcom_crt.cpp procedure @ 0x10a79a */
void watcom_crt_fn_10a79a(void);
/* VA: 0x10a7b0 | Module rt/watcom_crt.cpp procedure @ 0x10a7b0 */
bool watcom_crt_fn_10a7b0(undefined4 param_1);
/* VA: 0x10a850 | Module rt/watcom_crt.cpp procedure @ 0x10a850 */
void watcom_crt_fn_10a850(uint param_1,uint param_2,int param_3);
/* VA: 0x10a8c0 | Module rt/watcom_crt.cpp procedure @ 0x10a8c0 */
void watcom_crt_fn_10a8c0(void);
/* VA: 0x10a8d0 | Module rt/watcom_crt.cpp procedure @ 0x10a8d0 */
void watcom_crt_fn_10a8d0(void);
/* VA: 0x10a8e0 | Module rt/watcom_crt.cpp procedure @ 0x10a8e0 */
void watcom_crt_fn_10a8e0(int param_1);
/* VA: 0x10a960 | Module rt/watcom_crt.cpp procedure @ 0x10a960 */
void watcom_crt_fn_10a960(int param_1);
/* VA: 0x10a990 | Module rt/watcom_crt.cpp procedure @ 0x10a990 */
undefined4 watcom_crt_fn_10a990(byte param_1,int param_2);
/* VA: 0x10ab70 | Module rt/watcom_crt.cpp procedure @ 0x10ab70 */
void watcom_crt_fn_10ab70(void);
/* VA: 0x10ac00 | Module rt/watcom_crt.cpp procedure @ 0x10ac00 */
int watcom_crt_fn_10ac00(int param_1);
/* VA: 0x10ac50 | Module rt/watcom_crt.cpp procedure @ 0x10ac50 */
void watcom_crt_fn_10ac50(void);
/* VA: 0x10ad60 | Module rt/watcom_crt.cpp procedure @ 0x10ad60 */
undefined4 * watcom_crt_fn_10ad60(uint param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
/* VA: 0x10ade0 | Module rt/watcom_crt.cpp procedure @ 0x10ade0 */
undefined4 watcom_crt_fn_10ade0(int param_1);
/* VA: 0x10af20 | Module rt/watcom_crt.cpp procedure @ 0x10af20 */
void watcom_crt_fn_10af20(uint param_1,uint param_2,undefined4 param_3,int param_4);
/* VA: 0x10afc0 | Module rt/watcom_crt.cpp procedure @ 0x10afc0 */
undefined4 watcom_crt_fn_10afc0(uint param_1,int param_2);
/* VA: 0x10b030 | Module rt/watcom_crt.cpp procedure @ 0x10b030 */
undefined4 watcom_crt_fn_10b030(int param_1,int param_2);
/* VA: 0x10b2e0 | Module rt/watcom_crt.cpp procedure @ 0x10b2e0 */
void watcom_crt_fn_10b2e0(int param_1,int param_2);
/* VA: 0x10b320 | Module rt/watcom_crt.cpp procedure @ 0x10b320 */
int watcom_crt_fn_10b320(uint param_1,int *param_2,int param_3);
/* VA: 0x10b450 | Module rt/watcom_crt.cpp procedure @ 0x10b450 */
void watcom_crt_fn_10b450(byte param_1,uint param_2,uint param_3,int param_4);
/* VA: 0x10b6e0 | Module rt/watcom_crt.cpp procedure @ 0x10b6e0 */
void watcom_crt_fn_10b6e0(undefined4 param_1,int param_2);
/* VA: 0x10b730 | Module rt/watcom_crt.cpp procedure @ 0x10b730 */
void watcom_crt_fn_10b730(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5, undefined4 param_6,int param_7);
/* VA: 0x10b950 | Module rt/watcom_crt.cpp procedure @ 0x10b950 */
void watcom_crt_fn_10b950(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5, int param_6);
/* VA: 0x10beb0 | Module rt/watcom_crt.cpp procedure @ 0x10beb0 */
void watcom_crt_fn_10beb0(short param_1);
/* VA: 0x10bef0 | Module rt/watcom_crt.cpp procedure @ 0x10bef0 */
void watcom_crt_fn_10bef0(int param_1);
/* VA: 0x10bfb0 | Module rt/watcom_crt.cpp procedure @ 0x10bfb0 */
void watcom_crt_fn_10bfb0(int *param_1,int param_2);
/* VA: 0x10c0d0 | Module rt/watcom_crt.cpp procedure @ 0x10c0d0 */
void watcom_crt_fn_10c0d0(void);
/* VA: 0x10c1f0 | Module rt/watcom_crt.cpp procedure @ 0x10c1f0 */
char watcom_crt_fn_10c1f0(int param_1);
/* VA: 0x10c2e0 | Module rt/watcom_crt.cpp procedure @ 0x10c2e0 */
undefined8 watcom_crt_fn_10c2e0(void);
/* VA: 0x10c360 | Module rt/watcom_crt.cpp procedure @ 0x10c360 */
void watcom_crt_fn_10c360(void);
/* VA: 0x10c770 | Module rt/watcom_crt.cpp procedure @ 0x10c770 */
void watcom_crt_fn_10c770(undefined4 *param_1);
/* VA: 0x10c8c0 | Module rt/watcom_crt.cpp procedure @ 0x10c8c0 */
undefined4 watcom_crt_fn_10c8c0(int param_1,int param_2);
/* VA: 0x10caf0 | Module rt/watcom_crt.cpp procedure @ 0x10caf0 */
void watcom_crt_fn_10caf0(int param_1);
/* VA: 0x10cb20 | Module rt/watcom_crt.cpp procedure @ 0x10cb20 */
int * watcom_crt_fn_10cb20(undefined4 param_1,uint param_2,int *param_3);
/* VA: 0x10d390 | Module rt/watcom_crt.cpp procedure @ 0x10d390 */
undefined8 watcom_crt_fn_10d390(void);
/* VA: 0x10d3c0 | Module rt/watcom_crt.cpp procedure @ 0x10d3c0 */
uint watcom_crt_fn_10d3c0(void);
/* VA: 0x10d640 | Module rt/watcom_crt.cpp procedure @ 0x10d640 */
void watcom_crt_fn_10d640(void);
/* VA: 0x10d9d0 | Module rt/watcom_crt.cpp procedure @ 0x10d9d0 */
longlong watcom_crt_fn_10d9d0(void);
/* VA: 0x10dc50 | Module rt/watcom_crt.cpp procedure @ 0x10dc50 */
longlong watcom_crt_fn_10dc50(void);
/* VA: 0x10dca0 | Module rt/watcom_crt.cpp procedure @ 0x10dca0 */
uint watcom_crt_fn_10dca0(void);
/* VA: 0x10df90 | Module rt/watcom_crt.cpp procedure @ 0x10df90 */
undefined8 watcom_crt_fn_10df90(void);
/* VA: 0x10e0a0 | Module rt/watcom_crt.cpp procedure @ 0x10e0a0 */
void watcom_crt_fn_10e0a0(void);
/* VA: 0x10e0cc | Module rt/watcom_crt.cpp procedure @ 0x10e0cc */
void watcom_crt_fn_10e0cc(void);
/* VA: 0x10e2ce | Module rt/watcom_crt.cpp procedure @ 0x10e2ce */
void watcom_crt_fn_10e2ce(undefined1 param_1);
/* VA: 0x10e3f4 | Module rt/watcom_crt.cpp procedure @ 0x10e3f4 */
void watcom_crt_fn_10e3f4(void);
/* VA: 0x10e438 | Module rt/watcom_crt.cpp procedure @ 0x10e438 */
void watcom_crt_fn_10e438(void);
/* VA: 0x10e4d9 | Module rt/watcom_crt.cpp procedure @ 0x10e4d9 */
void watcom_crt_fn_10e4d9(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0x10e5f5 | Module rt/watcom_crt.cpp procedure @ 0x10e5f5 */
void watcom_crt_fn_10e5f5(void);
/* VA: 0x10e6bc | Module rt/watcom_crt.cpp procedure @ 0x10e6bc */
undefined8 watcom_crt_fn_10e6bc(undefined1 param_1);
/* VA: 0x10e880 | Module rt/watcom_crt.cpp procedure @ 0x10e880 */
void watcom_crt_fn_10e880(void);
/* VA: 0x10e8b2 | Module rt/watcom_crt.cpp procedure @ 0x10e8b2 */
void watcom_crt_fn_10e8b2(void);
/* VA: 0x10e8f0 | Module rt/watcom_crt.cpp procedure @ 0x10e8f0 */
undefined4 watcom_crt_fn_10e8f0(void);
/* VA: 0x10e9bc | Module rt/watcom_crt.cpp procedure @ 0x10e9bc */
undefined4 watcom_crt_fn_10e9bc(void);
/* VA: 0x10e9cc | Module rt/watcom_crt.cpp procedure @ 0x10e9cc */
undefined8 watcom_crt_fn_10e9cc(void);
/* VA: 0x10ea34 | Module rt/watcom_crt.cpp procedure @ 0x10ea34 */
undefined4 watcom_crt_fn_10ea34(void);
/* VA: 0x10eb17 | Module rt/watcom_crt.cpp procedure @ 0x10eb17 */
void watcom_crt_fn_10eb17(void);
/* VA: 0x10eb2a | Module rt/watcom_crt.cpp procedure @ 0x10eb2a */
void watcom_crt_fn_10eb2a(void);
/* VA: 0x10eb40 | Module rt/watcom_crt.cpp procedure @ 0x10eb40 */
void watcom_crt_fn_10eb40(undefined4 param_1,undefined4 *param_2);
/* VA: 0x10eb71 | Module rt/watcom_crt.cpp procedure @ 0x10eb71 */
undefined8 watcom_crt_fn_10eb71(void);
/* VA: 0x10ec34 | Module rt/watcom_crt.cpp procedure @ 0x10ec34 */
undefined8 watcom_crt_fn_10ec34(void);
/* VA: 0x10ed88 | Module rt/watcom_crt.cpp procedure @ 0x10ed88 */
undefined8 watcom_crt_fn_10ed88(void);
/* VA: 0x10edec | Module rt/watcom_crt.cpp procedure @ 0x10edec */
void watcom_crt_fn_10edec(void);
/* VA: 0x10ee14 | Module rt/watcom_crt.cpp procedure @ 0x10ee14 */
int watcom_crt_fn_10ee14(void);
/* VA: 0x10ee7e | Module rt/watcom_crt.cpp procedure @ 0x10ee7e */
void watcom_crt_fn_10ee7e(void);
/* VA: 0x10eec1 | Module rt/watcom_crt.cpp procedure @ 0x10eec1 */
void watcom_crt_fn_10eec1(void);
/* VA: 0x10ef10 | Module rt/watcom_crt.cpp procedure @ 0x10ef10 */
void watcom_crt_fn_10ef10(void);
/* VA: 0x10ef5b | Module rt/watcom_crt.cpp procedure @ 0x10ef5b */
void watcom_crt_fn_10ef5b(void);
/* VA: 0x10efaa | Module rt/watcom_crt.cpp procedure @ 0x10efaa */
void watcom_crt_fn_10efaa(void);
/* VA: 0x10f06b | Module rt/watcom_crt.cpp procedure @ 0x10f06b */
int watcom_crt_fn_10f06b(void);
/* VA: 0x10f15e | Module rt/watcom_crt.cpp procedure @ 0x10f15e */
undefined4 watcom_crt_fn_10f15e(undefined4 param_1,undefined4 param_2,double *param_3);
/* VA: 0x10f177 | Module rt/watcom_crt.cpp procedure @ 0x10f177 */
longlong watcom_crt_fn_10f177(void);
/* VA: 0x10f1b2 | Module rt/watcom_crt.cpp procedure @ 0x10f1b2 */
int watcom_crt_fn_10f1b2(void);
/* VA: 0x10f297 | Module rt/watcom_crt.cpp procedure @ 0x10f297 */
undefined4 watcom_crt_fn_10f297(void);
/* VA: 0x10f2cb | Module rt/watcom_crt.cpp procedure @ 0x10f2cb */
undefined8 watcom_crt_fn_10f2cb(void);
/* VA: 0x10f58e | Module rt/watcom_crt.cpp procedure @ 0x10f58e */
undefined4 watcom_crt_fn_10f58e(void);
/* VA: 0x10f5be | Module rt/watcom_crt.cpp procedure @ 0x10f5be */
void watcom_crt_fn_10f5be(void);
/* VA: 0x10f5f0 | Module rt/watcom_crt.cpp procedure @ 0x10f5f0 */
void watcom_crt_fn_10f5f0(void);
/* VA: 0x10f620 | Module rt/watcom_crt.cpp procedure @ 0x10f620 */
void watcom_crt_fn_10f620(void);
/* VA: 0x10f6c8 | Module rt/watcom_crt.cpp procedure @ 0x10f6c8 */
void watcom_crt_fn_10f6c8(void);
/* VA: 0x10f72e | Module rt/watcom_crt.cpp procedure @ 0x10f72e */
uint * watcom_crt_fn_10f72e(void);
/* VA: 0x10f7d6 | Module rt/watcom_crt.cpp procedure @ 0x10f7d6 */
void watcom_crt_fn_10f7d6(void);
/* VA: 0x10f8e1 | Module rt/watcom_crt.cpp procedure @ 0x10f8e1 */
void watcom_crt_fn_10f8e1(void);
/* VA: 0x10f932 | Module rt/watcom_crt.cpp procedure @ 0x10f932 */
void watcom_crt_fn_10f932(void);
/* VA: 0x10fa8d | Module rt/watcom_crt.cpp procedure @ 0x10fa8d */
undefined8 watcom_crt_fn_10fa8d(void);
/* VA: 0x10fb01 | Module rt/watcom_crt.cpp procedure @ 0x10fb01 */
longlong watcom_crt_fn_10fb01(void);
/* VA: 0x10fb51 | Module rt/watcom_crt.cpp procedure @ 0x10fb51 */
undefined8 watcom_crt_fn_10fb51(void);
/* VA: 0x10fc22 | Module rt/watcom_crt.cpp procedure @ 0x10fc22 */
undefined8 watcom_crt_fn_10fc22(void);
/* VA: 0x10fcd2 | Module rt/watcom_crt.cpp procedure @ 0x10fcd2 */
undefined8 watcom_crt_fn_10fcd2(void);
/* VA: 0x10fe1e | Module rt/watcom_crt.cpp procedure @ 0x10fe1e */
longlong watcom_crt_fn_10fe1e(void);
/* VA: 0x10fe9b | Module rt/watcom_crt.cpp procedure @ 0x10fe9b */
undefined4 watcom_crt_fn_10fe9b(void);
/* VA: 0x10fe9e | Module rt/watcom_crt.cpp procedure @ 0x10fe9e */
void watcom_crt_fn_10fe9e(void);
/* VA: 0x10ff15 | Module rt/watcom_crt.cpp procedure @ 0x10ff15 */
uint watcom_crt_fn_10ff15(void);
/* VA: 0x10ffb9 | String 'Floating-point support not loaded' */
void watcom_crt_floating_point_support_loaded_10ffb9(void);
/* VA: 0x10fff0 | Module rt/watcom_crt.cpp procedure @ 0x10fff0 */
void watcom_crt_fn_10fff0(void);
/* VA: 0x11003a | Module rt/watcom_crt.cpp procedure @ 0x11003a */
undefined4 watcom_crt_fn_11003a(void);
/* VA: 0x110055 | Module rt/watcom_crt.cpp procedure @ 0x110055 */
undefined8 watcom_crt_fn_110055(void);
/* VA: 0x11005c | Module rt/watcom_crt.cpp procedure @ 0x11005c */
ulonglong watcom_crt_fn_11005c(void);
/* VA: 0x110060 | Module rt/watcom_crt.cpp procedure @ 0x110060 */
undefined8 watcom_crt_fn_110060(void);
/* VA: 0x1100d1 | Module rt/watcom_crt.cpp procedure @ 0x1100d1 */
longlong watcom_crt_fn_1100d1(void);
/* VA: 0x110126 | Module rt/watcom_crt.cpp procedure @ 0x110126 */
void watcom_crt_fn_110126(void);
/* VA: 0x11013b | Module rt/watcom_crt.cpp procedure @ 0x11013b */
undefined8 watcom_crt_fn_11013b(void);
/* VA: 0x110162 | Module rt/watcom_crt.cpp procedure @ 0x110162 */
int watcom_crt_fn_110162(void);
/* VA: 0x11016c | Module rt/watcom_crt.cpp procedure @ 0x11016c */
void watcom_crt_fn_11016c(void);
/* VA: 0x110187 | Module rt/watcom_crt.cpp procedure @ 0x110187 */
uint watcom_crt_fn_110187(void);
/* VA: 0x1101a5 | String 'Stack Overflow!' */
undefined2 watcom_crt_stack_overflow_1101a5(void);
/* VA: 0x1101b4 | Module rt/watcom_crt.cpp procedure @ 0x1101b4 */
undefined2 watcom_crt_fn_1101b4(void);
/* VA: 0x1101c7 | Module rt/watcom_crt.cpp procedure @ 0x1101c7 */
undefined4 watcom_crt_fn_1101c7(void);
/* VA: 0x110215 | Module rt/watcom_crt.cpp procedure @ 0x110215 */
undefined8 watcom_crt_fn_110215(void);
/* VA: 0x1102f9 | Module rt/watcom_crt.cpp procedure @ 0x1102f9 */
void watcom_crt_fn_1102f9(void);
/* VA: 0x110358 | Module rt/watcom_crt.cpp procedure @ 0x110358 */
void watcom_crt_fn_110358(void);
/* VA: 0x110372 | Module rt/watcom_crt.cpp procedure @ 0x110372 */
undefined4 watcom_crt_fn_110372(void);
/* VA: 0x110374 | Module rt/watcom_crt.cpp procedure @ 0x110374 */
undefined4 watcom_crt_fn_110374(void);
/* VA: 0x110750 | Module rt/watcom_crt.cpp procedure @ 0x110750 */
undefined8 watcom_crt_fn_110750(void);
/* VA: 0x110774 | String 'data\swpe??.tab' */
void watcom_crt_data_swpe_tab_110774(void);
/* VA: 0x110916 | Module rt/watcom_crt.cpp procedure @ 0x110916 */
void watcom_crt_fn_110916(void);
/* VA: 0x110968 | Module rt/watcom_crt.cpp procedure @ 0x110968 */
void watcom_crt_fn_110968(void);
/* VA: 0x110984 | Module rt/watcom_crt.cpp procedure @ 0x110984 */
void watcom_crt_fn_110984(void);
/* VA: 0x110ad1 | Module rt/watcom_crt.cpp procedure @ 0x110ad1 */
undefined4 watcom_crt_fn_110ad1(void);
/* VA: 0x1112da | Module rt/watcom_crt.cpp procedure @ 0x1112da */
undefined4 watcom_crt_fn_1112da(void);
/* VA: 0x111967 | Module rt/watcom_crt.cpp procedure @ 0x111967 */
void watcom_crt_fn_111967(void);
/* VA: 0x111e8a | Module rt/watcom_crt.cpp procedure @ 0x111e8a */
void watcom_crt_fn_111e8a(void);
/* VA: 0x111e98 | Module rt/watcom_crt.cpp procedure @ 0x111e98 */
void watcom_crt_fn_111e98(void);
/* VA: 0x111ec2 | Module rt/watcom_crt.cpp procedure @ 0x111ec2 */
void watcom_crt_fn_111ec2(void);
/* VA: 0x111ef2 | Module rt/watcom_crt.cpp procedure @ 0x111ef2 */
undefined8 watcom_crt_fn_111ef2(void);
/* VA: 0x11205e | Module rt/watcom_crt.cpp procedure @ 0x11205e */
int watcom_crt_fn_11205e(void);
/* VA: 0x1120f7 | Module rt/watcom_crt.cpp procedure @ 0x1120f7 */
void watcom_crt_fn_1120f7(void);
/* VA: 0x112121 | Module rt/watcom_crt.cpp procedure @ 0x112121 */
longlong watcom_crt_fn_112121(void);
/* VA: 0x1122cc | Module rt/watcom_crt.cpp procedure @ 0x1122cc */
void watcom_crt_fn_1122cc(void);
/* VA: 0x1122f6 | Module rt/watcom_crt.cpp procedure @ 0x1122f6 */
ulonglong watcom_crt_fn_1122f6(void);
/* VA: 0x112447 | Module rt/watcom_crt.cpp procedure @ 0x112447 */
int watcom_crt_fn_112447(void);
/* VA: 0x11244c | Module rt/watcom_crt.cpp procedure @ 0x11244c */
int watcom_crt_fn_11244c(void);
/* VA: 0x1124b6 | Module rt/watcom_crt.cpp procedure @ 0x1124b6 */
void watcom_crt_fn_1124b6(void);
/* VA: 0x1124c7 | Module rt/watcom_crt.cpp procedure @ 0x1124c7 */
void watcom_crt_fn_1124c7(void);
/* VA: 0x1124fc | Module rt/watcom_crt.cpp procedure @ 0x1124fc */
void watcom_crt_fn_1124fc(void);
/* VA: 0x11257c | Module rt/watcom_crt.cpp procedure @ 0x11257c */
undefined8 watcom_crt_fn_11257c(void);
/* VA: 0x1125fb | Module rt/watcom_crt.cpp procedure @ 0x1125fb */
uint watcom_crt_fn_1125fb(void);
/* VA: 0x1126c2 | Module rt/watcom_crt.cpp procedure @ 0x1126c2 */
void watcom_crt_fn_1126c2(void);
/* VA: 0x112787 | Module rt/watcom_crt.cpp procedure @ 0x112787 */
void watcom_crt_fn_112787(void);
/* VA: 0x1128ba | Module rt/watcom_crt.cpp procedure @ 0x1128ba */
void watcom_crt_fn_1128ba(void);
/* VA: 0x112914 | Module rt/watcom_crt.cpp procedure @ 0x112914 */
void watcom_crt_fn_112914(void);
/* VA: 0x1129ca | Module rt/watcom_crt.cpp procedure @ 0x1129ca */
void watcom_crt_fn_1129ca(void);
/* VA: 0x112b2d | Module rt/watcom_crt.cpp procedure @ 0x112b2d */
longlong watcom_crt_fn_112b2d(void);
/* VA: 0x112b93 | Module rt/watcom_crt.cpp procedure @ 0x112b93 */
void watcom_crt_fn_112b93(void);
/* VA: 0x112c0e | Module rt/watcom_crt.cpp procedure @ 0x112c0e */
void watcom_crt_fn_112c0e(void);
/* VA: 0x112cfc | Module rt/watcom_crt.cpp procedure @ 0x112cfc */
void watcom_crt_fn_112cfc(void);
/* VA: 0x112d15 | Module rt/watcom_crt.cpp procedure @ 0x112d15 */
void watcom_crt_fn_112d15(void);
/* VA: 0x112d58 | Module rt/watcom_crt.cpp procedure @ 0x112d58 */
void watcom_crt_fn_112d58(void);
/* VA: 0x112ff0 | Module rt/watcom_crt.cpp procedure @ 0x112ff0 */
void watcom_crt_fn_112ff0(void);
/* VA: 0x1131e7 | Module rt/watcom_crt.cpp procedure @ 0x1131e7 */
void watcom_crt_fn_1131e7(void);
/* VA: 0x1131f1 | Module rt/watcom_crt.cpp procedure @ 0x1131f1 */
void watcom_crt_fn_1131f1(void);
/* VA: 0x1131fe | Module rt/watcom_crt.cpp procedure @ 0x1131fe */
void watcom_crt_fn_1131fe(void);
/* VA: 0x113234 | Module rt/watcom_crt.cpp procedure @ 0x113234 */
void watcom_crt_fn_113234(void);
/* VA: 0x113408 | Module rt/watcom_crt.cpp procedure @ 0x113408 */
void watcom_crt_fn_113408(void);
/* VA: 0x1134f4 | Module rt/watcom_crt.cpp procedure @ 0x1134f4 */
void watcom_crt_fn_1134f4(void);
/* VA: 0x113546 | Module rt/watcom_crt.cpp procedure @ 0x113546 */
void watcom_crt_fn_113546(void);
/* VA: 0x11358e | String 'RATIONAL DOS/4G' */
undefined4 watcom_crt_rational_dos_11358e(void);
/* VA: 0x113662 | Module rt/watcom_crt.cpp procedure @ 0x113662 */
undefined4 watcom_crt_fn_113662(void);
/* VA: 0x1136bb | Module rt/watcom_crt.cpp procedure @ 0x1136bb */
void watcom_crt_fn_1136bb(void);
/* VA: 0x1136bc | Module rt/watcom_crt.cpp procedure @ 0x1136bc */
ushort watcom_crt_fn_1136bc(void);
/* VA: 0x1136e4 | Module rt/watcom_crt.cpp procedure @ 0x1136e4 */
void watcom_crt_fn_1136e4(void);
/* VA: 0x113704 | Module rt/watcom_crt.cpp procedure @ 0x113704 */
undefined8 watcom_crt_fn_113704(void);
/* VA: 0x11374e | Module rt/watcom_crt.cpp procedure @ 0x11374e */
void watcom_crt_fn_11374e(void);
/* VA: 0x113798 | Module rt/watcom_crt.cpp procedure @ 0x113798 */
void watcom_crt_fn_113798(void);
/* VA: 0x1138c8 | Module rt/watcom_crt.cpp procedure @ 0x1138c8 */
void watcom_crt_fn_1138c8(void);
/* VA: 0x1138d2 | Module rt/watcom_crt.cpp procedure @ 0x1138d2 */
void watcom_crt_fn_1138d2(void);
/* VA: 0x1138f7 | Module rt/watcom_crt.cpp procedure @ 0x1138f7 */
undefined * watcom_crt_fn_1138f7(void);
/* VA: 0x1138fd | Module rt/watcom_crt.cpp procedure @ 0x1138fd */
undefined * watcom_crt_fn_1138fd(void);
/* VA: 0x113903 | String 'Not enough memory to allocate file structures' */
void watcom_crt_enough_memory_allocate_file_113903(void);
/* VA: 0x11397a | Module rt/watcom_crt.cpp procedure @ 0x11397a */
void watcom_crt_fn_11397a(void);
/* VA: 0x11398b | Module rt/watcom_crt.cpp procedure @ 0x11398b */
undefined8 watcom_crt_fn_11398b(void);
/* VA: 0x1139e3 | Module rt/watcom_crt.cpp procedure @ 0x1139e3 */
uint watcom_crt_fn_1139e3(void);
/* VA: 0x113a57 | Module rt/watcom_crt.cpp procedure @ 0x113a57 */
byte * watcom_crt_fn_113a57(void);
/* VA: 0x113aa1 | Module rt/watcom_crt.cpp procedure @ 0x113aa1 */
void watcom_crt_fn_113aa1(void);
/* VA: 0x113b07 | Module rt/watcom_crt.cpp procedure @ 0x113b07 */
undefined8 watcom_crt_fn_113b07(void);
/* VA: 0x113b30 | Module rt/watcom_crt.cpp procedure @ 0x113b30 */
void watcom_crt_fn_113b30(void);
/* VA: 0x113b34 | Module rt/watcom_crt.cpp procedure @ 0x113b34 */
void watcom_crt_fn_113b34(void);
/* VA: 0x113b5b | Module rt/watcom_crt.cpp procedure @ 0x113b5b */
void watcom_crt_fn_113b5b(void);
/* VA: 0x113b7c | Module rt/watcom_crt.cpp procedure @ 0x113b7c */
void watcom_crt_fn_113b7c(void);
/* VA: 0x113c03 | Module rt/watcom_crt.cpp procedure @ 0x113c03 */
void watcom_crt_fn_113c03(undefined4 param_1);
/* VA: 0x113ce3 | Module rt/watcom_crt.cpp procedure @ 0x113ce3 */
uint watcom_crt_fn_113ce3(void);
/* VA: 0x113d48 | String 'IO_ADDR' */
undefined4 watcom_crt_io_addr_113d48(undefined4 *param_1,char *param_2);
/* VA: 0x114178 | Module rt/watcom_crt.cpp procedure @ 0x114178 */
undefined4 watcom_crt_fn_114178(int param_1,undefined4 param_2);
/* VA: 0x114475 | Module rt/watcom_crt.cpp procedure @ 0x114475 */
void watcom_crt_fn_114475(undefined4 *param_1);
/* VA: 0x11450d | Module rt/watcom_crt.cpp procedure @ 0x11450d */
undefined4 * watcom_crt_fn_11450d(int param_1);
/* VA: 0x1145bf | Module rt/watcom_crt.cpp procedure @ 0x1145bf */
void watcom_crt_fn_1145bf(void);
/* VA: 0x1146dd | Module rt/watcom_crt.cpp procedure @ 0x1146dd */
void watcom_crt_fn_1146dd(void);
/* VA: 0x11470a | Module rt/watcom_crt.cpp procedure @ 0x11470a */
undefined1 * watcom_crt_fn_11470a(char *param_1);
/* VA: 0x114770 | Module rt/watcom_crt.cpp procedure @ 0x114770 */
void watcom_crt_fn_114770(int param_1);
/* VA: 0x114791 | Module rt/watcom_crt.cpp procedure @ 0x114791 */
void watcom_crt_fn_114791(void);
/* VA: 0x114818 | Checks g_sound_active_flag / g_sound_driver_ready and updates audio */
undefined8 watcom_crt_audio_driver_op_114818(void);
/* VA: 0x114a88 | Module rt/watcom_crt.cpp procedure @ 0x114a88 */
void watcom_crt_fn_114a88(void);
/* VA: 0x114acb | Module rt/watcom_crt.cpp procedure @ 0x114acb */
undefined4 watcom_crt_fn_114acb(void);
/* VA: 0x114cb8 | Module rt/watcom_crt.cpp procedure @ 0x114cb8 */
void watcom_crt_fn_114cb8(void);
/* VA: 0x114f1f | Module rt/watcom_crt.cpp procedure @ 0x114f1f */
undefined4 watcom_crt_fn_114f1f(void);
/* VA: 0x114f88 | Module rt/watcom_crt.cpp procedure @ 0x114f88 */
void watcom_crt_fn_114f88(void);
/* VA: 0x114f8f | Module rt/watcom_crt.cpp procedure @ 0x114f8f */
void watcom_crt_fn_114f8f(void);
/* VA: 0x114f96 | Module rt/watcom_crt.cpp procedure @ 0x114f96 */
void watcom_crt_fn_114f96(void);
/* VA: 0x11502c | Module rt/watcom_crt.cpp procedure @ 0x11502c */
void watcom_crt_fn_11502c(void);
/* VA: 0x11504a | Module rt/watcom_crt.cpp procedure @ 0x11504a */
undefined8 watcom_crt_fn_11504a(void);
/* VA: 0x1151ed | Module rt/watcom_crt.cpp procedure @ 0x1151ed */
undefined1 watcom_crt_fn_1151ed(undefined4 param_1);
/* VA: 0x115217 | Module rt/watcom_crt.cpp procedure @ 0x115217 */
void watcom_crt_fn_115217(uint param_1);
/* VA: 0x115246 | Module rt/watcom_crt.cpp procedure @ 0x115246 */
void watcom_crt_fn_115246(void);
/* VA: 0x1152ac | Module rt/watcom_crt.cpp procedure @ 0x1152ac */
void watcom_crt_fn_1152ac(void);
/* VA: 0x1153c2 | Module rt/watcom_crt.cpp procedure @ 0x1153c2 */
void watcom_crt_fn_1153c2(void);
/* VA: 0x1153f9 | Module rt/watcom_crt.cpp procedure @ 0x1153f9 */
undefined6 watcom_crt_fn_1153f9(void);
/* VA: 0x115421 | Module rt/watcom_crt.cpp procedure @ 0x115421 */
void watcom_crt_fn_115421(void);
/* VA: 0x115444 | Module rt/watcom_crt.cpp procedure @ 0x115444 */
void watcom_crt_fn_115444(void);
/* VA: 0x115499 | Module rt/watcom_crt.cpp procedure @ 0x115499 */
void watcom_crt_fn_115499(int param_1,undefined4 param_2,undefined2 param_3);
/* VA: 0x1156af | Module rt/watcom_crt.cpp procedure @ 0x1156af */
void watcom_crt_fn_1156af(int param_1);
/* VA: 0x1156f4 | Module rt/watcom_crt.cpp procedure @ 0x1156f4 */
uint watcom_crt_fn_1156f4(void);
/* VA: 0x1156f8 | Module rt/watcom_crt.cpp procedure @ 0x1156f8 */
void watcom_crt_fn_1156f8(void);
/* VA: 0x11575f | Module rt/watcom_crt.cpp procedure @ 0x11575f */
int watcom_crt_fn_11575f(int param_1,short param_2,int param_3,short *param_4);
/* VA: 0x115839 | Module rt/watcom_crt.cpp procedure @ 0x115839 */
undefined4 watcom_crt_fn_115839(void);
/* VA: 0x11583f | Module rt/watcom_crt.cpp procedure @ 0x11583f */
uint watcom_crt_fn_11583f(undefined4 param_1);
/* VA: 0x115880 | Module rt/watcom_crt.cpp procedure @ 0x115880 */
undefined4 watcom_crt_fn_115880(int param_1,undefined4 param_2);
/* VA: 0x1158a2 | Module rt/watcom_crt.cpp procedure @ 0x1158a2 */
void watcom_crt_fn_1158a2(int param_1);
/* VA: 0x1158c3 | Module rt/watcom_crt.cpp procedure @ 0x1158c3 */
void watcom_crt_fn_1158c3(void);
/* VA: 0x1158e3 | Module rt/watcom_crt.cpp procedure @ 0x1158e3 */
void watcom_crt_fn_1158e3(int param_1);
/* VA: 0x11590d | Module rt/watcom_crt.cpp procedure @ 0x11590d */
void watcom_crt_fn_11590d(void);
/* VA: 0x11592d | Module rt/watcom_crt.cpp procedure @ 0x11592d */
void watcom_crt_fn_11592d(int param_1);
/* VA: 0x115957 | Module rt/watcom_crt.cpp procedure @ 0x115957 */
void watcom_crt_fn_115957(void);
/* VA: 0x115977 | Module rt/watcom_crt.cpp procedure @ 0x115977 */
void watcom_crt_fn_115977(int param_1,undefined4 param_2);
/* VA: 0x1159a7 | Module rt/watcom_crt.cpp procedure @ 0x1159a7 */
void watcom_crt_fn_1159a7(undefined4 param_1,uint param_2);
/* VA: 0x1159d1 | Module rt/watcom_crt.cpp procedure @ 0x1159d1 */
void watcom_crt_fn_1159d1(undefined4 param_1,uint param_2);
/* VA: 0x115a0d | Module rt/watcom_crt.cpp procedure @ 0x115a0d */
undefined4 watcom_crt_fn_115a0d(void);
/* VA: 0x115a13 | Module rt/watcom_crt.cpp procedure @ 0x115a13 */
undefined8 watcom_crt_fn_115a13(void);
/* VA: 0x115a2f | Module rt/watcom_crt.cpp procedure @ 0x115a2f */
undefined8 watcom_crt_fn_115a2f(void);
/* VA: 0x115a4a | Module rt/watcom_crt.cpp procedure @ 0x115a4a */
undefined8 watcom_crt_fn_115a4a(void);
/* VA: 0x115a89 | Module rt/watcom_crt.cpp procedure @ 0x115a89 */
undefined8 watcom_crt_fn_115a89(undefined4 param_1,int param_2,uint param_3);
/* VA: 0x115acb | Module rt/watcom_crt.cpp procedure @ 0x115acb */
undefined8 watcom_crt_fn_115acb(undefined4 param_1,int param_2,uint param_3);
/* VA: 0x115b0d | Module rt/watcom_crt.cpp procedure @ 0x115b0d */
undefined8 watcom_crt_fn_115b0d(void);
/* VA: 0x115b31 | Module rt/watcom_crt.cpp procedure @ 0x115b31 */
undefined8 watcom_crt_fn_115b31(void);
/* VA: 0x115b37 | Module rt/watcom_crt.cpp procedure @ 0x115b37 */
undefined8 watcom_crt_fn_115b37(void);
/* VA: 0x115b3d | Module rt/watcom_crt.cpp procedure @ 0x115b3d */
void watcom_crt_fn_115b3d(void);
/* VA: 0x115b91 | Module rt/watcom_crt.cpp procedure @ 0x115b91 */
void watcom_crt_fn_115b91(void);
/* VA: 0x115bb6 | Module rt/watcom_crt.cpp procedure @ 0x115bb6 */
void watcom_crt_fn_115bb6(void);
/* VA: 0x115c73 | Module rt/watcom_crt.cpp procedure @ 0x115c73 */
void watcom_crt_fn_115c73(int param_1);
/* VA: 0x115cb1 | Module rt/watcom_crt.cpp procedure @ 0x115cb1 */
void watcom_crt_fn_115cb1(int param_1);
/* VA: 0x115cdc | Module rt/watcom_crt.cpp procedure @ 0x115cdc */
void watcom_crt_fn_115cdc(void);
/* VA: 0x115e0a | Module rt/watcom_crt.cpp procedure @ 0x115e0a */
void watcom_crt_fn_115e0a(int param_1);
/* VA: 0x116069 | Module rt/watcom_crt.cpp procedure @ 0x116069 */
void watcom_crt_fn_116069(int param_1);
/* VA: 0x116209 | String 'Minimum DMA buffer size too large for VDM' */
undefined8 watcom_crt_minimum_dma_buffer_size_116209(int param_1);
/* VA: 0x1165a6 | Module rt/watcom_crt.cpp procedure @ 0x1165a6 */
void watcom_crt_fn_1165a6(int param_1,int *param_2);
/* VA: 0x116687 | Module rt/watcom_crt.cpp procedure @ 0x116687 */
void watcom_crt_fn_116687(int param_1);
/* VA: 0x116cb6 | String 'Driver file not found' */
int watcom_crt_driver_file_found_116cb6(char *param_1,undefined4 param_2);
/* VA: 0x116d7f | Module rt/watcom_crt.cpp procedure @ 0x116d7f */
int watcom_crt_fn_116d7f(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x116e25 | Module rt/watcom_crt.cpp procedure @ 0x116e25 */
void watcom_crt_fn_116e25(int param_1);
/* VA: 0x116e38 | Module rt/watcom_crt.cpp procedure @ 0x116e38 */
int watcom_crt_fn_116e38(int param_1);
/* VA: 0x116ed4 | Module rt/watcom_crt.cpp procedure @ 0x116ed4 */
void watcom_crt_fn_116ed4(int param_1);
/* VA: 0x116ee7 | Module rt/watcom_crt.cpp procedure @ 0x116ee7 */
void watcom_crt_fn_116ee7(int param_1);
/* VA: 0x116fce | Module rt/watcom_crt.cpp procedure @ 0x116fce */
undefined4 watcom_crt_fn_116fce(int param_1);
/* VA: 0x116fdd | Module rt/watcom_crt.cpp procedure @ 0x116fdd */
void watcom_crt_fn_116fdd(int param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x117003 | Module rt/watcom_crt.cpp procedure @ 0x117003 */
void watcom_crt_fn_117003(int param_1,int param_2,int param_3);
/* VA: 0x117034 | Module rt/watcom_crt.cpp procedure @ 0x117034 */
undefined4 watcom_crt_fn_117034(int param_1);
/* VA: 0x117043 | Module rt/watcom_crt.cpp procedure @ 0x117043 */
void watcom_crt_fn_117043(int param_1,undefined4 param_2);
/* VA: 0x117055 | Module rt/watcom_crt.cpp procedure @ 0x117055 */
undefined4 watcom_crt_fn_117055(int param_1);
/* VA: 0x117064 | Module rt/watcom_crt.cpp procedure @ 0x117064 */
void watcom_crt_fn_117064(int param_1,int param_2);
/* VA: 0x117084 | Module rt/watcom_crt.cpp procedure @ 0x117084 */
undefined4 watcom_crt_fn_117084(int param_1);
/* VA: 0x117093 | Module rt/watcom_crt.cpp procedure @ 0x117093 */
void watcom_crt_fn_117093(int param_1,int param_2);
/* VA: 0x1170b3 | Module rt/watcom_crt.cpp procedure @ 0x1170b3 */
undefined4 watcom_crt_fn_1170b3(int param_1);
/* VA: 0x1170ca | Module rt/watcom_crt.cpp procedure @ 0x1170ca */
void watcom_crt_fn_1170ca(int param_1,undefined4 param_2);
/* VA: 0x1170e4 | Module rt/watcom_crt.cpp procedure @ 0x1170e4 */
undefined4 watcom_crt_fn_1170e4(int param_1);
/* VA: 0x1170fa | Module rt/watcom_crt.cpp procedure @ 0x1170fa */
void watcom_crt_fn_1170fa(int param_1,undefined4 param_2);
/* VA: 0x11710c | Module rt/watcom_crt.cpp procedure @ 0x11710c */
void watcom_crt_fn_11710c(int param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x117124 | Module rt/watcom_crt.cpp procedure @ 0x117124 */
void watcom_crt_fn_117124(int param_1);
/* VA: 0x11716d | Module rt/watcom_crt.cpp procedure @ 0x11716d */
void watcom_crt_fn_11716d(int param_1);
/* VA: 0x117186 | Module rt/watcom_crt.cpp procedure @ 0x117186 */
void watcom_crt_fn_117186(int param_1);
/* VA: 0x1171aa | Module rt/watcom_crt.cpp procedure @ 0x1171aa */
void watcom_crt_fn_1171aa(int param_1);
/* VA: 0x1171f4 | Module rt/watcom_crt.cpp procedure @ 0x1171f4 */
undefined4 watcom_crt_fn_1171f4(int param_1,undefined4 param_2);
/* VA: 0x117213 | Module rt/watcom_crt.cpp procedure @ 0x117213 */
undefined4 watcom_crt_fn_117213(int param_1,undefined4 param_2);
/* VA: 0x117232 | Module rt/watcom_crt.cpp procedure @ 0x117232 */
undefined4 watcom_crt_fn_117232(int param_1,undefined4 param_2);
/* VA: 0x117251 | Module rt/watcom_crt.cpp procedure @ 0x117251 */
void watcom_crt_fn_117251(int param_1,int param_2,undefined4 param_3);
/* VA: 0x11726e | Module rt/watcom_crt.cpp procedure @ 0x11726e */
undefined4 watcom_crt_fn_11726e(int param_1,int param_2);
/* VA: 0x11728c | Module rt/watcom_crt.cpp procedure @ 0x11728c */
void watcom_crt_fn_11728c(int param_1,undefined4 param_2);
/* VA: 0x1172c6 | Module rt/watcom_crt.cpp procedure @ 0x1172c6 */
undefined4 watcom_crt_fn_1172c6(int param_1);
/* VA: 0x1172e1 | Module rt/watcom_crt.cpp procedure @ 0x1172e1 */
uint watcom_crt_fn_1172e1(int param_1,int param_2,undefined4 param_3);
/* VA: 0x117368 | Module rt/watcom_crt.cpp procedure @ 0x117368 */
void watcom_crt_fn_117368(int param_1,int param_2,undefined4 param_3,int param_4);
/* VA: 0x1173cc | Module rt/watcom_crt.cpp procedure @ 0x1173cc */
uint watcom_crt_fn_1173cc(int param_1);
/* VA: 0x117421 | Module rt/watcom_crt.cpp procedure @ 0x117421 */
void watcom_crt_fn_117421(int param_1,undefined4 *param_2,undefined4 *param_3,char *param_4);
/* VA: 0x117468 | Module rt/watcom_crt.cpp procedure @ 0x117468 */
undefined4 watcom_crt_fn_117468(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5);
/* VA: 0x1174a9 | Module rt/watcom_crt.cpp procedure @ 0x1174a9 */
void watcom_crt_fn_1174a9(void);
/* VA: 0x117561 | Module rt/watcom_crt.cpp procedure @ 0x117561 */
void watcom_crt_fn_117561(void);
/* VA: 0x11758b | Module rt/watcom_crt.cpp procedure @ 0x11758b */
uint watcom_crt_fn_11758b(uint *param_1);
/* VA: 0x117598 | Module rt/watcom_crt.cpp procedure @ 0x117598 */
void watcom_crt_fn_117598(int param_1);
/* VA: 0x1175d0 | Module rt/watcom_crt.cpp procedure @ 0x1175d0 */
void watcom_crt_fn_1175d0(int param_1,int param_2);
/* VA: 0x117852 | Module rt/watcom_crt.cpp procedure @ 0x117852 */
void watcom_crt_fn_117852(undefined4 param_1);
/* VA: 0x117866 | Module rt/watcom_crt.cpp procedure @ 0x117866 */
void watcom_crt_fn_117866(int param_1,undefined4 param_2);
/* VA: 0x11799c | Module rt/watcom_crt.cpp procedure @ 0x11799c */
void watcom_crt_fn_11799c(int param_1);
/* VA: 0x117c82 | Module rt/watcom_crt.cpp procedure @ 0x117c82 */
undefined4 watcom_crt_fn_117c82(int param_1,undefined4 param_2);
/* VA: 0x117ca1 | Module rt/watcom_crt.cpp procedure @ 0x117ca1 */
void watcom_crt_fn_117ca1(void);
/* VA: 0x117ccb | Module rt/watcom_crt.cpp procedure @ 0x117ccb */
void watcom_crt_fn_117ccb(void);
/* VA: 0x117ddd | Module rt/watcom_crt.cpp procedure @ 0x117ddd */
undefined4 watcom_crt_fn_117ddd(uint param_1);
/* VA: 0x117e39 | Module rt/watcom_crt.cpp procedure @ 0x117e39 */
void watcom_crt_fn_117e39(int param_1);
/* VA: 0x117e82 | Module rt/watcom_crt.cpp procedure @ 0x117e82 */
void watcom_crt_fn_117e82(int param_1,uint param_2,undefined1 param_3,int param_4);
/* VA: 0x117f66 | Module rt/watcom_crt.cpp procedure @ 0x117f66 */
void watcom_crt_fn_117f66(int param_1,undefined4 *param_2,uint param_3);
/* VA: 0x117fc0 | Module rt/watcom_crt.cpp procedure @ 0x117fc0 */
uint watcom_crt_fn_117fc0(undefined4 *param_1);
/* VA: 0x117fef | Module rt/watcom_crt.cpp procedure @ 0x117fef */
int watcom_crt_fn_117fef(uint param_1);
/* VA: 0x118027 | Module rt/watcom_crt.cpp procedure @ 0x118027 */
byte * watcom_crt_fn_118027(byte *param_1,int param_2);
/* VA: 0x118105 | Module rt/watcom_crt.cpp procedure @ 0x118105 */
uint watcom_crt_fn_118105(int param_1,uint param_2,uint param_3);
/* VA: 0x1182b8 | Module rt/watcom_crt.cpp procedure @ 0x1182b8 */
void watcom_crt_fn_1182b8(int param_1,uint param_2,uint param_3,char param_4);
/* VA: 0x1184ad | Module rt/watcom_crt.cpp procedure @ 0x1184ad */
void watcom_crt_fn_1184ad(uint param_1,uint param_2,uint param_3,uint param_4,int param_5);
/* VA: 0x1188ac | Module rt/watcom_crt.cpp procedure @ 0x1188ac */
void watcom_crt_fn_1188ac(int param_1);
/* VA: 0x11892c | Module rt/watcom_crt.cpp procedure @ 0x11892c */
void watcom_crt_fn_11892c(int param_1,uint param_2);
/* VA: 0x118977 | Module rt/watcom_crt.cpp procedure @ 0x118977 */
void watcom_crt_fn_118977(int param_1,uint param_2);
/* VA: 0x118bb9 | Module rt/watcom_crt.cpp procedure @ 0x118bb9 */
void watcom_crt_fn_118bb9(int param_1);
/* VA: 0x118c71 | Module rt/watcom_crt.cpp procedure @ 0x118c71 */
void watcom_crt_fn_118c71(int param_1);
/* VA: 0x118c8d | Module rt/watcom_crt.cpp procedure @ 0x118c8d */
void watcom_crt_fn_118c8d(int param_1);
/* VA: 0x118cc7 | String 'Internal note queue overflow' */
void watcom_crt_internal_note_queue_overflow_118cc7(int param_1);
/* VA: 0x1192dd | Module rt/watcom_crt.cpp procedure @ 0x1192dd */
void watcom_crt_fn_1192dd(int param_1,undefined4 *param_2);
/* VA: 0x11939c | Module rt/watcom_crt.cpp procedure @ 0x11939c */
void watcom_crt_fn_11939c(int param_1);
/* VA: 0x119a6e | String 'Driver file not found' */
int watcom_crt_driver_file_found_119a6e(char *param_1,undefined4 param_2);
/* VA: 0x119bb5 | Module rt/watcom_crt.cpp procedure @ 0x119bb5 */
int watcom_crt_fn_119bb5(undefined4 param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x119bef | String 'MDI.INI' */
undefined4 watcom_crt_mdi_ini_119bef(int *param_1);
/* VA: 0x119c5b | Module rt/watcom_crt.cpp procedure @ 0x119c5b */
void watcom_crt_fn_119c5b(int param_1);
/* VA: 0x119c6e | String 'Tandy 3-voice music' */
undefined4 watcom_crt_tandy_voice_music_119c6e(int param_1);
/* VA: 0x119dcb | Module rt/watcom_crt.cpp procedure @ 0x119dcb */
void watcom_crt_fn_119dcb(char *param_1);
/* VA: 0x119e41 | String 'Out of sequence handles' */
int watcom_crt_out_sequence_handles_119e41(int param_1);
/* VA: 0x119ec0 | Module rt/watcom_crt.cpp procedure @ 0x119ec0 */
void watcom_crt_fn_119ec0(int param_1);
/* VA: 0x11a224 | Module rt/watcom_crt.cpp procedure @ 0x11a224 */
void watcom_crt_fn_11a224(int param_1);
/* VA: 0x11a251 | Module rt/watcom_crt.cpp procedure @ 0x11a251 */
void watcom_crt_fn_11a251(int param_1);
/* VA: 0x11a2f8 | Module rt/watcom_crt.cpp procedure @ 0x11a2f8 */
void watcom_crt_fn_11a2f8(int param_1);
/* VA: 0x11a35f | Module rt/watcom_crt.cpp procedure @ 0x11a35f */
void watcom_crt_fn_11a35f(int param_1);
/* VA: 0x11a393 | Module rt/watcom_crt.cpp procedure @ 0x11a393 */
void watcom_crt_fn_11a393(int param_1,undefined4 param_2);
/* VA: 0x11a3a5 | Module rt/watcom_crt.cpp procedure @ 0x11a3a5 */
void watcom_crt_fn_11a3a5(int param_1,undefined4 param_2,int param_3);
/* VA: 0x11a3fc | Module rt/watcom_crt.cpp procedure @ 0x11a3fc */
void watcom_crt_fn_11a3fc(int param_1,undefined4 param_2,int param_3);
/* VA: 0x11a461 | Module rt/watcom_crt.cpp procedure @ 0x11a461 */
undefined4 watcom_crt_fn_11a461(int param_1);
/* VA: 0x11a470 | Module rt/watcom_crt.cpp procedure @ 0x11a470 */
undefined4 watcom_crt_fn_11a470(int param_1);
/* VA: 0x11a486 | Module rt/watcom_crt.cpp procedure @ 0x11a486 */
undefined4 watcom_crt_fn_11a486(int param_1);
/* VA: 0x11a495 | Module rt/watcom_crt.cpp procedure @ 0x11a495 */
undefined4 watcom_crt_fn_11a495(int param_1);
/* VA: 0x11a4a4 | Module rt/watcom_crt.cpp procedure @ 0x11a4a4 */
void watcom_crt_fn_11a4a4(int param_1,int param_2);
/* VA: 0x11a4ee | Module rt/watcom_crt.cpp procedure @ 0x11a4ee */
undefined4 watcom_crt_fn_11a4ee(int param_1);
/* VA: 0x11a4fc | Module rt/watcom_crt.cpp procedure @ 0x11a4fc */
void watcom_crt_fn_11a4fc(int param_1,short param_2,ushort param_3);
/* VA: 0x11a52a | Module rt/watcom_crt.cpp procedure @ 0x11a52a */
int watcom_crt_fn_11a52a(int param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x11a5e0 | Module rt/watcom_crt.cpp procedure @ 0x11a5e0 */
void watcom_crt_fn_11a5e0(int param_1,short param_2,ushort param_3);
/* VA: 0x11a608 | Module rt/watcom_crt.cpp procedure @ 0x11a608 */
void watcom_crt_fn_11a608(int param_1,short param_2,ushort param_3);
/* VA: 0x11a630 | Module rt/watcom_crt.cpp procedure @ 0x11a630 */
int watcom_crt_fn_11a630(int param_1);
/* VA: 0x11a65b | Module rt/watcom_crt.cpp procedure @ 0x11a65b */
undefined4 watcom_crt_fn_11a65b(int param_1,int param_2,undefined4 param_3);
/* VA: 0x11a688 | Module rt/watcom_crt.cpp procedure @ 0x11a688 */
int watcom_crt_fn_11a688(int param_1,int param_2);
/* VA: 0x11a6b8 | Module rt/watcom_crt.cpp procedure @ 0x11a6b8 */
void watcom_crt_fn_11a6b8(int param_1,int *param_2,int *param_3);
/* VA: 0x11a71a | Module rt/watcom_crt.cpp procedure @ 0x11a71a */
void watcom_crt_fn_11a71a(int param_1,uint param_2);
/* VA: 0x11a78e | Module rt/watcom_crt.cpp procedure @ 0x11a78e */
undefined4 watcom_crt_fn_11a78e(int param_1,undefined4 param_2);
/* VA: 0x11a7a7 | Module rt/watcom_crt.cpp procedure @ 0x11a7a7 */
undefined4 watcom_crt_fn_11a7a7(int param_1,undefined4 param_2);
/* VA: 0x11a7c0 | Module rt/watcom_crt.cpp procedure @ 0x11a7c0 */
undefined4 watcom_crt_fn_11a7c0(int param_1,undefined4 param_2);
/* VA: 0x11a7d9 | Module rt/watcom_crt.cpp procedure @ 0x11a7d9 */
undefined4 watcom_crt_fn_11a7d9(int param_1,undefined4 param_2);
/* VA: 0x11a7f2 | Module rt/watcom_crt.cpp procedure @ 0x11a7f2 */
undefined4 watcom_crt_fn_11a7f2(int param_1,undefined4 param_2);
/* VA: 0x11a80b | Module rt/watcom_crt.cpp procedure @ 0x11a80b */
undefined4 watcom_crt_fn_11a80b(int param_1,undefined4 param_2);
/* VA: 0x11a824 | Module rt/watcom_crt.cpp procedure @ 0x11a824 */
void watcom_crt_fn_11a824(int param_1,int param_2,undefined4 param_3);
/* VA: 0x11a841 | Module rt/watcom_crt.cpp procedure @ 0x11a841 */
undefined4 watcom_crt_fn_11a841(int param_1,int param_2);
/* VA: 0x11a85f | Module rt/watcom_crt.cpp procedure @ 0x11a85f */
void watcom_crt_fn_11a85f(int param_1,undefined4 param_2);
/* VA: 0x11a871 | Module rt/watcom_crt.cpp procedure @ 0x11a871 */
int watcom_crt_fn_11a871(int param_1);
/* VA: 0x11a9c6 | Module rt/watcom_crt.cpp procedure @ 0x11a9c6 */
void watcom_crt_fn_11a9c6(int param_1,int param_2);
/* VA: 0x11aac5 | Module rt/watcom_crt.cpp procedure @ 0x11aac5 */
void watcom_crt_fn_11aac5(int param_1,int param_2,int param_3);
/* VA: 0x11aafa | Module rt/watcom_crt.cpp procedure @ 0x11aafa */
int watcom_crt_fn_11aafa(int param_1,int param_2);
/* VA: 0x11ab19 | Module rt/watcom_crt.cpp procedure @ 0x11ab19 */
void watcom_crt_fn_11ab19(int param_1,int param_2,uint param_3,uint param_4,int param_5);
/* VA: 0x11abcc | Module rt/watcom_crt.cpp procedure @ 0x11abcc */
void watcom_crt_fn_11abcc(int param_1,int param_2);
/* VA: 0x11ac05 | Module rt/watcom_crt.cpp procedure @ 0x11ac05 */
void watcom_crt_fn_11ac05(void);
/* VA: 0x11af08 | Module rt/watcom_crt.cpp procedure @ 0x11af08 */
void watcom_crt_fn_11af08(void);
/* VA: 0x11af32 | Module rt/watcom_crt.cpp procedure @ 0x11af32 */
void watcom_crt_fn_11af32(int param_1,uint param_2,uint param_3,char param_4);
/* VA: 0x11b10b | Module rt/watcom_crt.cpp procedure @ 0x11b10b */
void watcom_crt_fn_11b10b(void);
/* VA: 0x11b130 | Module rt/watcom_crt.cpp procedure @ 0x11b130 */
void watcom_crt_fn_11b130(void);
/* VA: 0x11b18b | Module rt/watcom_crt.cpp procedure @ 0x11b18b */
void watcom_crt_fn_11b18b(void);
/* VA: 0x11b27c | Module rt/watcom_crt.cpp procedure @ 0x11b27c */
bool watcom_crt_fn_11b27c(void);
/* VA: 0x11b2a2 | Module rt/watcom_crt.cpp procedure @ 0x11b2a2 */
undefined4 watcom_crt_fn_11b2a2(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5);
/* VA: 0x11b840 | Module rt/watcom_crt.cpp procedure @ 0x11b840 */
void watcom_crt_fn_11b840(undefined4 *param_1);
/* VA: 0x11b895 | Module rt/watcom_crt.cpp procedure @ 0x11b895 */
void watcom_crt_fn_11b895(void);
/* VA: 0x11b8bf | Module rt/watcom_crt.cpp procedure @ 0x11b8bf */
void watcom_crt_fn_11b8bf(void);
/* VA: 0x11b8f9 | Module rt/watcom_crt.cpp procedure @ 0x11b8f9 */
bool watcom_crt_fn_11b8f9(void);
/* VA: 0x11b970 | Module rt/watcom_crt.cpp procedure @ 0x11b970 */
void watcom_crt_fn_11b970(void);
/* VA: 0x11b993 | Module rt/watcom_crt.cpp procedure @ 0x11b993 */
undefined8 watcom_crt_fn_11b993(void);
/* VA: 0x11b9d4 | Module rt/watcom_crt.cpp procedure @ 0x11b9d4 */
int watcom_crt_fn_11b9d4(void);
/* VA: 0x11ba02 | Module rt/watcom_crt.cpp procedure @ 0x11ba02 */
undefined8 watcom_crt_fn_11ba02(void);
/* VA: 0x11ba4e | Module rt/watcom_crt.cpp procedure @ 0x11ba4e */
undefined8 watcom_crt_fn_11ba4e(void);
/* VA: 0x11ba6c | Module rt/watcom_crt.cpp procedure @ 0x11ba6c */
undefined4 watcom_crt_fn_11ba6c(void);
/* VA: 0x11bb5b | Module rt/watcom_crt.cpp procedure @ 0x11bb5b */
undefined8 watcom_crt_fn_11bb5b(void);
/* VA: 0x11bc18 | Module rt/watcom_crt.cpp procedure @ 0x11bc18 */
void watcom_crt_fn_11bc18(void);
/* VA: 0x11bc48 | Module rt/watcom_crt.cpp procedure @ 0x11bc48 */
void watcom_crt_fn_11bc48(void);
/* VA: 0x11bca6 | Module rt/watcom_crt.cpp procedure @ 0x11bca6 */
uint watcom_crt_fn_11bca6(void);
/* VA: 0x11bd1f | Module rt/watcom_crt.cpp procedure @ 0x11bd1f */
void watcom_crt_fn_11bd1f(void);
/* VA: 0x11bd5d | Module rt/watcom_crt.cpp procedure @ 0x11bd5d */
void watcom_crt_fn_11bd5d(void);
/* VA: 0x11bd7b | Module rt/watcom_crt.cpp procedure @ 0x11bd7b */
undefined8 watcom_crt_fn_11bd7b(void);
/* VA: 0x11bddd | Module rt/watcom_crt.cpp procedure @ 0x11bddd */
void watcom_crt_fn_11bddd(void);
/* VA: 0x11be5b | Module rt/watcom_crt.cpp procedure @ 0x11be5b */
undefined8 watcom_crt_fn_11be5b(void);
/* VA: 0x11bef4 | Module rt/watcom_crt.cpp procedure @ 0x11bef4 */
int * watcom_crt_fn_11bef4(void);
/* VA: 0x11bf69 | Module rt/watcom_crt.cpp procedure @ 0x11bf69 */
void watcom_crt_fn_11bf69(int param_1);
/* VA: 0x11bf84 | Module rt/watcom_crt.cpp procedure @ 0x11bf84 */
void watcom_crt_fn_11bf84(int param_1);
/* VA: 0x11bfa2 | Module rt/watcom_crt.cpp procedure @ 0x11bfa2 */
void watcom_crt_fn_11bfa2(int param_1);
/* VA: 0x11bfc3 | Module rt/watcom_crt.cpp procedure @ 0x11bfc3 */
char watcom_crt_fn_11bfc3(int param_1);
/* VA: 0x11c022 | Module rt/watcom_crt.cpp procedure @ 0x11c022 */
undefined4 watcom_crt_fn_11c022(int param_1);
/* VA: 0x11c03c | Module rt/watcom_crt.cpp procedure @ 0x11c03c */
void watcom_crt_fn_11c03c(int param_1,uint param_2,undefined4 *param_3,int *param_4);
/* VA: 0x11c09c | Module rt/watcom_crt.cpp procedure @ 0x11c09c */
uint watcom_crt_fn_11c09c(undefined4 param_1);
/* VA: 0x11c138 | Module rt/watcom_crt.cpp procedure @ 0x11c138 */
undefined4 watcom_crt_fn_11c138(undefined4 param_1);
/* VA: 0x11c15d | Module rt/watcom_crt.cpp procedure @ 0x11c15d */
undefined4 watcom_crt_fn_11c15d(undefined4 param_1);
/* VA: 0x11c185 | Module rt/watcom_crt.cpp procedure @ 0x11c185 */
void watcom_crt_fn_11c185(int param_1,int param_2,int param_3);
/* VA: 0x11c1d0 | Module rt/watcom_crt.cpp procedure @ 0x11c1d0 */
void watcom_crt_fn_11c1d0(int param_1);
/* VA: 0x11c205 | Module rt/watcom_crt.cpp procedure @ 0x11c205 */
void watcom_crt_fn_11c205(int param_1);
/* VA: 0x11c231 | Module rt/watcom_crt.cpp procedure @ 0x11c231 */
void watcom_crt_fn_11c231(int param_1);
/* VA: 0x11c25e | Module rt/watcom_crt.cpp procedure @ 0x11c25e */
undefined4 watcom_crt_fn_11c25e(int param_1);
/* VA: 0x11c278 | Module rt/watcom_crt.cpp procedure @ 0x11c278 */
undefined4 watcom_crt_fn_11c278(int param_1,int param_2);
/* VA: 0x11c2ae | Module rt/watcom_crt.cpp procedure @ 0x11c2ae */
void watcom_crt_fn_11c2ae(void);
/* VA: 0x11c314 | Module rt/watcom_crt.cpp procedure @ 0x11c314 */
void watcom_crt_fn_11c314(undefined4 param_1);
/* VA: 0x11c34e | Module rt/watcom_crt.cpp procedure @ 0x11c34e */
void watcom_crt_fn_11c34e(undefined4 param_1);
/* VA: 0x11c383 | Module rt/watcom_crt.cpp procedure @ 0x11c383 */
undefined4 watcom_crt_fn_11c383(code *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
/* VA: 0x11c45f | Module rt/watcom_crt.cpp procedure @ 0x11c45f */
void watcom_crt_fn_11c45f(void);
/* VA: 0x11c4c0 | Module rt/watcom_crt.cpp procedure @ 0x11c4c0 */
void watcom_crt_fn_11c4c0(undefined4 *param_1,undefined4 *param_2);
/* VA: 0x11c6b4 | String 'Out of memory' */
undefined8 watcom_crt_out_memory_11c6b4(undefined4 param_1);
/* VA: 0x11c724 | String 'Out of memory' */
undefined8 watcom_crt_out_memory_11c724(undefined4 *param_1);
/* VA: 0x11c78c | Module rt/watcom_crt.cpp procedure @ 0x11c78c */
void watcom_crt_fn_11c78c(int *param_1);
/* VA: 0x11c83e | Module rt/watcom_crt.cpp procedure @ 0x11c83e */
undefined4 watcom_crt_fn_11c83e(undefined4 *param_1,undefined4 param_2);
/* VA: 0x11c9f4 | Module rt/watcom_crt.cpp procedure @ 0x11c9f4 */
void watcom_crt_fn_11c9f4(int param_1);
/* VA: 0x11ca3f | Module rt/watcom_crt.cpp procedure @ 0x11ca3f */
int watcom_crt_fn_11ca3f(undefined4 param_1,int param_2,int param_3);
/* VA: 0x11cabd | Module rt/watcom_crt.cpp procedure @ 0x11cabd */
undefined4 watcom_crt_fn_11cabd(int param_1);
/* VA: 0x11cad3 | Module rt/watcom_crt.cpp procedure @ 0x11cad3 */
void watcom_crt_fn_11cad3(int param_1,int param_2);
/* VA: 0x11cb2d | Module rt/watcom_crt.cpp procedure @ 0x11cb2d */
void watcom_crt_fn_11cb2d(int param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0x11cbbc | Module rt/watcom_crt.cpp procedure @ 0x11cbbc */
void watcom_crt_fn_11cbbc(void);
/* VA: 0x11cbe6 | Module rt/watcom_crt.cpp procedure @ 0x11cbe6 */
void watcom_crt_fn_11cbe6(void);
/* VA: 0x11cc3d | Module rt/watcom_crt.cpp procedure @ 0x11cc3d */
undefined8 watcom_crt_fn_11cc3d(void);
/* VA: 0x11cd14 | Module rt/watcom_crt.cpp procedure @ 0x11cd14 */
void watcom_crt_fn_11cd14(void);
/* VA: 0x11cd61 | Module rt/watcom_crt.cpp procedure @ 0x11cd61 */
void watcom_crt_fn_11cd61(undefined4 param_1);
/* VA: 0x11cd8b | Module rt/watcom_crt.cpp procedure @ 0x11cd8b */
undefined8 watcom_crt_fn_11cd8b(void);
/* VA: 0x11d37c | Module rt/watcom_crt.cpp procedure @ 0x11d37c */
void watcom_crt_fn_11d37c(int *param_1);
/* VA: 0x11d471 | Module rt/watcom_crt.cpp procedure @ 0x11d471 */
undefined4 watcom_crt_fn_11d471(undefined4 *param_1);
/* VA: 0x11d4aa | Module rt/watcom_crt.cpp procedure @ 0x11d4aa */
int watcom_crt_fn_11d4aa(void);
/* VA: 0x11d534 | Module rt/watcom_crt.cpp procedure @ 0x11d534 */
int watcom_crt_fn_11d534(int *param_1,int param_2);
/* VA: 0x11d6cf | Module rt/watcom_crt.cpp procedure @ 0x11d6cf */
void watcom_crt_fn_11d6cf(undefined4 *param_1,int param_2);
/* VA: 0x11d7f3 | Module rt/watcom_crt.cpp procedure @ 0x11d7f3 */
uint watcom_crt_fn_11d7f3(undefined4 *param_1);
/* VA: 0x11d87a | Module rt/watcom_crt.cpp procedure @ 0x11d87a */
void watcom_crt_fn_11d87a(undefined4 *param_1);
/* VA: 0x11d8c4 | Module rt/watcom_crt.cpp procedure @ 0x11d8c4 */
void watcom_crt_fn_11d8c4(undefined4 *param_1,int param_2);
/* VA: 0x11d93e | Module rt/watcom_crt.cpp procedure @ 0x11d93e */
void watcom_crt_fn_11d93e(undefined4 *param_1,undefined4 param_2);
/* VA: 0x11d957 | Module rt/watcom_crt.cpp procedure @ 0x11d957 */
void watcom_crt_fn_11d957(undefined4 *param_1,undefined4 param_2);
/* VA: 0x11d970 | Module rt/watcom_crt.cpp procedure @ 0x11d970 */
undefined4 watcom_crt_fn_11d970(undefined4 *param_1);
/* VA: 0x11d98d | Module rt/watcom_crt.cpp procedure @ 0x11d98d */
undefined4 watcom_crt_fn_11d98d(undefined4 *param_1);
/* VA: 0x11d9aa | Module rt/watcom_crt.cpp procedure @ 0x11d9aa */
void watcom_crt_fn_11d9aa(undefined4 *param_1,undefined4 param_2);
/* VA: 0x11d9c3 | Module rt/watcom_crt.cpp procedure @ 0x11d9c3 */
undefined4 watcom_crt_fn_11d9c3(undefined4 *param_1);
/* VA: 0x11d9e0 | Module rt/watcom_crt.cpp procedure @ 0x11d9e0 */
void watcom_crt_fn_11d9e0(undefined4 *param_1,undefined4 param_2);
/* VA: 0x11da07 | Module rt/watcom_crt.cpp procedure @ 0x11da07 */
undefined4 watcom_crt_fn_11da07(undefined4 *param_1);
/* VA: 0x11da2f | Module rt/watcom_crt.cpp procedure @ 0x11da2f */
void watcom_crt_fn_11da2f(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, int *param_5);
/* VA: 0x11da86 | Module rt/watcom_crt.cpp procedure @ 0x11da86 */
undefined4 watcom_crt_fn_11da86(int param_1,undefined4 param_2);
/* VA: 0x11daa8 | Module rt/watcom_crt.cpp procedure @ 0x11daa8 */
void watcom_crt_fn_11daa8(int param_1,int param_2,undefined4 param_3);
/* VA: 0x11dac5 | Module rt/watcom_crt.cpp procedure @ 0x11dac5 */
undefined4 watcom_crt_fn_11dac5(int param_1,int param_2);
/* VA: 0x11dae3 | Module rt/watcom_crt.cpp procedure @ 0x11dae3 */
void watcom_crt_fn_11dae3(void);
/* VA: 0x11db26 | Module rt/watcom_crt.cpp procedure @ 0x11db26 */
void watcom_crt_fn_11db26(void);
/* VA: 0x11db5e | Module rt/watcom_crt.cpp procedure @ 0x11db5e */
undefined8 watcom_crt_fn_11db5e(void);
/* VA: 0x11db92 | Module rt/watcom_crt.cpp procedure @ 0x11db92 */
undefined8 watcom_crt_fn_11db92(undefined4 param_1,undefined4 *param_2);
/* VA: 0x11dbd0 | Module rt/watcom_crt.cpp procedure @ 0x11dbd0 */
undefined8 watcom_crt_fn_11dbd0(void);
/* VA: 0x11df04 | Module rt/watcom_crt.cpp procedure @ 0x11df04 */
void watcom_crt_fn_11df04(void);
/* VA: 0x11df55 | Module rt/watcom_crt.cpp procedure @ 0x11df55 */
void watcom_crt_fn_11df55(void);
/* VA: 0x11df62 | Module rt/watcom_crt.cpp procedure @ 0x11df62 */
void watcom_crt_fn_11df62(void);
/* VA: 0x11df95 | String 'JFMAMJJASONDaeapauuuecoenbrrynlgptvcSMTWTFSuouehranneduit' */
void watcom_crt_jfmamjjasondaeapauuue_coenbrrynlgptvcsmtwtf_suouehranneduit_11df95(void);
/* VA: 0x11e0a0 | Module rt/watcom_crt.cpp procedure @ 0x11e0a0 */
void watcom_crt_fn_11e0a0(void);
/* VA: 0x11e0b0 | Module rt/watcom_crt.cpp procedure @ 0x11e0b0 */
undefined4 watcom_crt_fn_11e0b0(void);
/* VA: 0x11e0f4 | Module rt/watcom_crt.cpp procedure @ 0x11e0f4 */
void watcom_crt_fn_11e0f4(void);
/* VA: 0x11e100 | Module rt/watcom_crt.cpp procedure @ 0x11e100 */
undefined8 watcom_crt_fn_11e100(void);
/* VA: 0x11e174 | Module rt/watcom_crt.cpp procedure @ 0x11e174 */
int watcom_crt_fn_11e174(void);
/* VA: 0x11e250 | Module rt/watcom_crt.cpp procedure @ 0x11e250 */
undefined1 watcom_crt_fn_11e250(void);
/* VA: 0x11f0c4 | Module rt/watcom_crt.cpp procedure @ 0x11f0c4 */
void watcom_crt_fn_11f0c4(void);
/* VA: 0x11f0fc | Module rt/watcom_crt.cpp procedure @ 0x11f0fc */
undefined8 watcom_crt_fn_11f0fc(void);
/* VA: 0x11f13c | Module rt/watcom_crt.cpp procedure @ 0x11f13c */
undefined1 watcom_crt_fn_11f13c(void);
/* VA: 0x11f3f0 | Module rt/watcom_crt.cpp procedure @ 0x11f3f0 */
undefined4 watcom_crt_fn_11f3f0(void);
/* VA: 0x11f470 | Module rt/watcom_crt.cpp procedure @ 0x11f470 */
void watcom_crt_fn_11f470(void);
/* VA: 0x11f508 | Module rt/watcom_crt.cpp procedure @ 0x11f508 */
void watcom_crt_fn_11f508(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
/* VA: 0x11fb8c | Module rt/watcom_crt.cpp procedure @ 0x11fb8c */
void watcom_crt_fn_11fb8c(void);
/* VA: 0x11fbcc | Module rt/watcom_crt.cpp procedure @ 0x11fbcc */
undefined4 watcom_crt_fn_11fbcc(void);
/* VA: 0x11fbd4 | Module rt/watcom_crt.cpp procedure @ 0x11fbd4 */
undefined4 watcom_crt_fn_11fbd4(void);
/* VA: 0x11fbe0 | Module rt/watcom_crt.cpp procedure @ 0x11fbe0 */
undefined4 watcom_crt_fn_11fbe0(void);
/* VA: 0x11fc54 | Module rt/watcom_crt.cpp procedure @ 0x11fc54 */
undefined4 watcom_crt_fn_11fc54(void);
/* VA: 0x11fc74 | Module rt/watcom_crt.cpp procedure @ 0x11fc74 */
undefined8 watcom_crt_fn_11fc74(void);
/* VA: 0x11fc79 | Module rt/watcom_crt.cpp procedure @ 0x11fc79 */
uint watcom_crt_fn_11fc79(void);
/* VA: 0x11fddc | Module rt/watcom_crt.cpp procedure @ 0x11fddc */
void watcom_crt_fn_11fddc(void);
/* VA: 0x11fdee | Module rt/watcom_crt.cpp procedure @ 0x11fdee */
undefined8 watcom_crt_fn_11fdee(void);
/* VA: 0x11fe4c | Module rt/watcom_crt.cpp procedure @ 0x11fe4c */
undefined4 * watcom_crt_fn_11fe4c(void);
/* VA: 0x11fe80 | Module rt/watcom_crt.cpp procedure @ 0x11fe80 */
void watcom_crt_fn_11fe80(void);
/* VA: 0x11ff30 | Module rt/watcom_crt.cpp procedure @ 0x11ff30 */
void watcom_crt_fn_11ff30(void);
/* VA: 0x11ff40 | Module rt/watcom_crt.cpp procedure @ 0x11ff40 */
uint watcom_crt_fn_11ff40(void);
/* VA: 0x11ff60 | Module rt/watcom_crt.cpp procedure @ 0x11ff60 */
undefined4 watcom_crt_fn_11ff60(void);
/* VA: 0x11ffa0 | Module rt/watcom_crt.cpp procedure @ 0x11ffa0 */
undefined8 watcom_crt_fn_11ffa0(void);
/* VA: 0x11fff9 | Module rt/watcom_crt.cpp procedure @ 0x11fff9 */
void watcom_crt_fn_11fff9(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int *param_5);
/* VA: 0x120091 | Module rt/watcom_crt.cpp procedure @ 0x120091 */
undefined8 watcom_crt_fn_120091(void);
/* VA: 0x1200b5 | Module rt/watcom_crt.cpp procedure @ 0x1200b5 */
undefined8 watcom_crt_fn_1200b5(void);
/* VA: 0x1200c1 | Module rt/watcom_crt.cpp procedure @ 0x1200c1 */
void watcom_crt_fn_1200c1(void);
/* VA: 0x12012a | Module rt/watcom_crt.cpp procedure @ 0x12012a */
void watcom_crt_fn_12012a(void);
/* VA: 0x120196 | Module rt/watcom_crt.cpp procedure @ 0x120196 */
uint watcom_crt_fn_120196(void);
/* VA: 0x1201db | Module rt/watcom_crt.cpp procedure @ 0x1201db */
void watcom_crt_fn_1201db(void);
/* VA: 0x1201ff | Module rt/watcom_crt.cpp procedure @ 0x1201ff */
byte * watcom_crt_fn_1201ff(void);
/* VA: 0x120328 | Module rt/watcom_crt.cpp procedure @ 0x120328 */
char * watcom_crt_fn_120328(void);
/* VA: 0x1204fa | Module rt/watcom_crt.cpp procedure @ 0x1204fa */
undefined8 watcom_crt_fn_1204fa(void);
/* VA: 0x120573 | Module rt/watcom_crt.cpp procedure @ 0x120573 */
undefined2 * watcom_crt_fn_120573(void);
/* VA: 0x12063b | Module rt/watcom_crt.cpp procedure @ 0x12063b */
undefined8 watcom_crt_fn_12063b(void);
/* VA: 0x120706 | Module rt/watcom_crt.cpp procedure @ 0x120706 */
undefined4 watcom_crt_fn_120706(void);
/* VA: 0x12070b | Module rt/watcom_crt.cpp procedure @ 0x12070b */
void watcom_crt_fn_12070b(void);
/* VA: 0x12072e | Module rt/watcom_crt.cpp procedure @ 0x12072e */
int watcom_crt_fn_12072e(void);
/* VA: 0x1207d1 | Module rt/watcom_crt.cpp procedure @ 0x1207d1 */
char * watcom_crt_fn_1207d1(void);
/* VA: 0x120834 | Module rt/watcom_crt.cpp procedure @ 0x120834 */
void watcom_crt_fn_120834(void);
/* VA: 0x1208a5 | Module rt/watcom_crt.cpp procedure @ 0x1208a5 */
void watcom_crt_fn_1208a5(int param_1,int param_2,undefined4 param_3,char param_4,byte param_5);
/* VA: 0x120af4 | Module rt/watcom_crt.cpp procedure @ 0x120af4 */
longdouble watcom_crt_fn_120af4(void);
/* VA: 0x120ce7 | Module rt/watcom_crt.cpp procedure @ 0x120ce7 */
undefined4 watcom_crt_fn_120ce7(void);
/* VA: 0x120d10 | Module rt/watcom_crt.cpp procedure @ 0x120d10 */
int watcom_crt_fn_120d10(void);
/* VA: 0x120d3e | Module rt/watcom_crt.cpp procedure @ 0x120d3e */
void watcom_crt_fn_120d3e(void);
/* VA: 0x120d5f | Module rt/watcom_crt.cpp procedure @ 0x120d5f */
void watcom_crt_fn_120d5f(void);
/* VA: 0x120d64 | Module rt/watcom_crt.cpp procedure @ 0x120d64 */
undefined8 watcom_crt_fn_120d64(void);
/* VA: 0x120de9 | Module rt/watcom_crt.cpp procedure @ 0x120de9 */
undefined8 watcom_crt_fn_120de9(void);
/* VA: 0x120e7c | Module rt/watcom_crt.cpp procedure @ 0x120e7c */
void watcom_crt_fn_120e7c(void);
/* VA: 0x120e93 | String 'stack data has been corrupted!' */
void watcom_crt_stack_data_has_been_120e93(void);
/* VA: 0x120ea4 | Module rt/watcom_crt.cpp procedure @ 0x120ea4 */
int watcom_crt_fn_120ea4(void);
/* VA: 0x120f40 | Module rt/watcom_crt.cpp procedure @ 0x120f40 */
undefined4 watcom_crt_fn_120f40(void);
/* VA: 0x120f67 | String 'violation of function exception specification!' */
void watcom_crt_violation_function_exception_specification_120f67(void);
/* VA: 0x120f7d | Module rt/watcom_crt.cpp procedure @ 0x120f7d */
bool watcom_crt_fn_120f7d(void);
/* VA: 0x120fa3 | Module rt/watcom_crt.cpp procedure @ 0x120fa3 */
char * watcom_crt_fn_120fa3(void);
/* VA: 0x120fb1 | Module rt/watcom_crt.cpp procedure @ 0x120fb1 */
undefined8 watcom_crt_fn_120fb1(void);
/* VA: 0x121054 | Module rt/watcom_crt.cpp procedure @ 0x121054 */
void watcom_crt_fn_121054(void);
/* VA: 0x121192 | Module rt/watcom_crt.cpp procedure @ 0x121192 */
void watcom_crt_fn_121192(void);
/* VA: 0x1211f0 | Module rt/watcom_crt.cpp procedure @ 0x1211f0 */
void watcom_crt_fn_1211f0(void);
/* VA: 0x121215 | Module rt/watcom_crt.cpp procedure @ 0x121215 */
void watcom_crt_fn_121215(void);
/* VA: 0x12126b | Module rt/watcom_crt.cpp procedure @ 0x12126b */
undefined1 watcom_crt_fn_12126b(void);
/* VA: 0x12136c | String 'throw while "terminate" function active!' */
undefined8 watcom_crt_throw_while_terminate_function_12136c(void);
/* VA: 0x1213f0 | Module rt/watcom_crt.cpp procedure @ 0x1213f0 */
void watcom_crt_fn_1213f0(void);
/* VA: 0x121429 | String 're-throw when no exception handler active!' */
uint watcom_crt_re_throw_when_exception_121429(void);
/* VA: 0x121482 | Module rt/watcom_crt.cpp procedure @ 0x121482 */
void watcom_crt_fn_121482(void);
/* VA: 0x121500 | String 're-throw when no exception handler active!' */
void watcom_crt_re_throw_when_exception_121500(void);
/* VA: 0x1215b1 | Module rt/watcom_crt.cpp procedure @ 0x1215b1 */
void watcom_crt_fn_1215b1(void);
/* VA: 0x1215f8 | Module rt/watcom_crt.cpp procedure @ 0x1215f8 */
void watcom_crt_fn_1215f8(void);
/* VA: 0x12161a | Module rt/watcom_crt.cpp procedure @ 0x12161a */
void watcom_crt_fn_12161a(void);
/* VA: 0x121665 | Module rt/watcom_crt.cpp procedure @ 0x121665 */
void watcom_crt_fn_121665(void);
/* VA: 0x121705 | Module rt/watcom_crt.cpp procedure @ 0x121705 */
void watcom_crt_fn_121705(void);
/* VA: 0x121710 | Module rt/watcom_crt.cpp procedure @ 0x121710 */
undefined4 watcom_crt_fn_121710(void);
/* VA: 0x12173d | Module rt/watcom_crt.cpp procedure @ 0x12173d */
void watcom_crt_fn_12173d(void);
/* VA: 0x12177b | Module rt/watcom_crt.cpp procedure @ 0x12177b */
void watcom_crt_fn_12177b(void);
/* VA: 0x121782 | Module rt/watcom_crt.cpp procedure @ 0x121782 */
void watcom_crt_fn_121782(void);
/* VA: 0x12178a | Module rt/watcom_crt.cpp procedure @ 0x12178a */
int watcom_crt_fn_12178a(void);
/* VA: 0x1219d1 | Module rt/watcom_crt.cpp procedure @ 0x1219d1 */
void watcom_crt_fn_1219d1(void);
/* VA: 0x121ac6 | Module rt/watcom_crt.cpp procedure @ 0x121ac6 */
undefined8 watcom_crt_fn_121ac6(void);
/* VA: 0x121b05 | Module rt/watcom_crt.cpp procedure @ 0x121b05 */
int watcom_crt_fn_121b05(void);
/* VA: 0x121b9a | Module rt/watcom_crt.cpp procedure @ 0x121b9a */
int watcom_crt_fn_121b9a(void);
/* VA: 0x121cbd | Module rt/watcom_crt.cpp procedure @ 0x121cbd */
void watcom_crt_fn_121cbd(void);
/* VA: 0x121d1b | Module rt/watcom_crt.cpp procedure @ 0x121d1b */
byte * watcom_crt_fn_121d1b(void);
/* VA: 0x121d5e | Module rt/watcom_crt.cpp procedure @ 0x121d5e */
int watcom_crt_fn_121d5e(void);
/* VA: 0x121e58 | Module rt/watcom_crt.cpp procedure @ 0x121e58 */
int watcom_crt_fn_121e58(void);
/* VA: 0x12216f | Module rt/watcom_crt.cpp procedure @ 0x12216f */
int watcom_crt_fn_12216f(void);
/* VA: 0x12235f | Module rt/watcom_crt.cpp procedure @ 0x12235f */
int watcom_crt_fn_12235f(void);
/* VA: 0x122386 | Module rt/watcom_crt.cpp procedure @ 0x122386 */
undefined8 watcom_crt_fn_122386(void);
/* VA: 0x1223ac | Module rt/watcom_crt.cpp procedure @ 0x1223ac */
undefined4 watcom_crt_fn_1223ac(void);
/* VA: 0x1225f8 | Module rt/watcom_crt.cpp procedure @ 0x1225f8 */
char watcom_crt_fn_1225f8(void);
/* VA: 0x124191 | Module rt/watcom_crt.cpp procedure @ 0x124191 */
void watcom_crt_fn_124191(void);
/* VA: 0x1241d8 | Module rt/watcom_crt.cpp procedure @ 0x1241d8 */
int watcom_crt_fn_1241d8(int param_1,int param_2,int param_3);
/* VA: 0x12433b | Module rt/watcom_crt.cpp procedure @ 0x12433b */
void watcom_crt_fn_12433b(int param_1);
/* VA: 0x1243ce | Module rt/watcom_crt.cpp procedure @ 0x1243ce */
void watcom_crt_fn_1243ce(int param_1);
/* VA: 0x124440 | Module rt/watcom_crt.cpp procedure @ 0x124440 */
void watcom_crt_fn_124440(void);
/* VA: 0x124470 | Module rt/watcom_crt.cpp procedure @ 0x124470 */
int watcom_crt_fn_124470(void);
/* VA: 0x124474 | Module rt/watcom_crt.cpp procedure @ 0x124474 */
int watcom_crt_fn_124474(void);
/* VA: 0x12448d | Module rt/watcom_crt.cpp procedure @ 0x12448d */
void watcom_crt_fn_12448d(void);
/* VA: 0x124492 | Module rt/watcom_crt.cpp procedure @ 0x124492 */
void watcom_crt_fn_124492(void);
/* VA: 0x12449d | Module rt/watcom_crt.cpp procedure @ 0x12449d */
void watcom_crt_fn_12449d(void);
/* VA: 0x1244d0 | Module rt/watcom_crt.cpp procedure @ 0x1244d0 */
void watcom_crt_fn_1244d0(void);
/* VA: 0x124534 | Module rt/watcom_crt.cpp procedure @ 0x124534 */
void watcom_crt_fn_124534(void);
/* VA: 0x12462c | Module rt/watcom_crt.cpp procedure @ 0x12462c */
void watcom_crt_fn_12462c(void);
/* VA: 0x124824 | Module rt/watcom_crt.cpp procedure @ 0x124824 */
undefined4 watcom_crt_fn_124824(void);
/* VA: 0x124a60 | Module rt/watcom_crt.cpp procedure @ 0x124a60 */
ulonglong watcom_crt_fn_124a60(void);
/* VA: 0x124b44 | Module rt/watcom_crt.cpp procedure @ 0x124b44 */
void watcom_crt_fn_124b44(void);
/* VA: 0x124f30 | Module rt/watcom_crt.cpp procedure @ 0x124f30 */
void watcom_crt_fn_124f30(void);
/* VA: 0x125034 | Module rt/watcom_crt.cpp procedure @ 0x125034 */
void watcom_crt_fn_125034(void);
/* VA: 0x125168 | String 'COM PORT HAS 16550 FIFO' */
void watcom_crt_com_port_has_fifo_125168(void);
/* VA: 0x125318 | Module rt/watcom_crt.cpp procedure @ 0x125318 */
void watcom_crt_fn_125318(void);
/* VA: 0x12531c | Module rt/watcom_crt.cpp procedure @ 0x12531c */
undefined8 watcom_crt_fn_12531c(void);
/* VA: 0x125348 | Module rt/watcom_crt.cpp procedure @ 0x125348 */
undefined8 watcom_crt_fn_125348(void);
/* VA: 0x125374 | Module rt/watcom_crt.cpp procedure @ 0x125374 */
undefined8 watcom_crt_fn_125374(void);
/* VA: 0x1253a0 | Module rt/watcom_crt.cpp procedure @ 0x1253a0 */
undefined8 watcom_crt_fn_1253a0(void);
/* VA: 0x1253cc | Module rt/watcom_crt.cpp procedure @ 0x1253cc */
undefined8 watcom_crt_fn_1253cc(void);
/* VA: 0x125508 | Module rt/watcom_crt.cpp procedure @ 0x125508 */
void watcom_crt_fn_125508(void);
/* VA: 0x12550c | Module rt/watcom_crt.cpp procedure @ 0x12550c */
undefined8 watcom_crt_fn_12550c(void);
/* VA: 0x125600 | Module rt/watcom_crt.cpp procedure @ 0x125600 */
void watcom_crt_fn_125600(void);
/* VA: 0x125660 | Module rt/watcom_crt.cpp procedure @ 0x125660 */
void watcom_crt_fn_125660(void);
/* VA: 0x125674 | Module rt/watcom_crt.cpp procedure @ 0x125674 */
undefined8 watcom_crt_fn_125674(void);
/* VA: 0x1257b0 | Module rt/watcom_crt.cpp procedure @ 0x1257b0 */
int watcom_crt_fn_1257b0(void);
/* VA: 0x1258c4 | Module rt/watcom_crt.cpp procedure @ 0x1258c4 */
void watcom_crt_fn_1258c4(void);
/* VA: 0x1258dc | Module rt/watcom_crt.cpp procedure @ 0x1258dc */
void watcom_crt_fn_1258dc(void);
/* VA: 0x1259b0 | Module rt/watcom_crt.cpp procedure @ 0x1259b0 */
void watcom_crt_fn_1259b0(void);
/* VA: 0x125ab4 | Module rt/watcom_crt.cpp procedure @ 0x125ab4 */
int watcom_crt_fn_125ab4(void);
/* VA: 0x125c34 | String '+++ RESPONSE CODE = %s' */
undefined8 watcom_crt_response_code_125c34(void);
/* VA: 0x125ff4 | Module rt/watcom_crt.cpp procedure @ 0x125ff4 */
void watcom_crt_fn_125ff4(void);
/* VA: 0x1263ec | Module rt/watcom_crt.cpp procedure @ 0x1263ec */
undefined4 watcom_crt_fn_1263ec(void);
/* VA: 0x1265f8 | Module rt/watcom_crt.cpp procedure @ 0x1265f8 */
void watcom_crt_fn_1265f8(void);
/* VA: 0x126600 | Module rt/watcom_crt.cpp procedure @ 0x126600 */
void watcom_crt_fn_126600(void);
/* VA: 0x126618 | Module rt/watcom_crt.cpp procedure @ 0x126618 */
void watcom_crt_fn_126618(void);
/* VA: 0x12665c | Module rt/watcom_crt.cpp procedure @ 0x12665c */
void watcom_crt_fn_12665c(void);
/* VA: 0x12673f | Module rt/watcom_crt.cpp procedure @ 0x12673f */
void watcom_crt_fn_12673f(void);
/* VA: 0x126813 | Module rt/watcom_crt.cpp procedure @ 0x126813 */
undefined8 watcom_crt_fn_126813(void);
/* VA: 0x1268a8 | Module rt/watcom_crt.cpp procedure @ 0x1268a8 */
undefined8 watcom_crt_fn_1268a8(void);
/* VA: 0x126920 | Module rt/watcom_crt.cpp procedure @ 0x126920 */
undefined8 watcom_crt_fn_126920(void);
/* VA: 0x1269b4 | Module rt/watcom_crt.cpp procedure @ 0x1269b4 */
void watcom_crt_fn_1269b4(void);
/* VA: 0x126b65 | Module rt/watcom_crt.cpp procedure @ 0x126b65 */
void watcom_crt_fn_126b65(void);
/* VA: 0x126b6a | Module rt/watcom_crt.cpp procedure @ 0x126b6a */
void watcom_crt_fn_126b6a(void);
/* VA: 0x126ba2 | Module rt/watcom_crt.cpp procedure @ 0x126ba2 */
void watcom_crt_fn_126ba2(void);
/* VA: 0x126cbd | Module rt/watcom_crt.cpp procedure @ 0x126cbd */
void watcom_crt_fn_126cbd(void);
/* VA: 0x126dd8 | Module rt/watcom_crt.cpp procedure @ 0x126dd8 */
undefined8 watcom_crt_fn_126dd8(undefined4 param_1,uint param_2,undefined4 *param_3);
/* VA: 0x126e6a | Module rt/watcom_crt.cpp procedure @ 0x126e6a */
bool watcom_crt_fn_126e6a(void);
/* VA: 0x126ead | Module rt/watcom_crt.cpp procedure @ 0x126ead */
bool watcom_crt_fn_126ead(void);
/* VA: 0x126eb1 | Module rt/watcom_crt.cpp procedure @ 0x126eb1 */
bool watcom_crt_fn_126eb1(void);
/* VA: 0x126ed9 | Module rt/watcom_crt.cpp procedure @ 0x126ed9 */
void watcom_crt_fn_126ed9(undefined8 param_1,int param_2);
/* VA: 0x126f1a | Module rt/watcom_crt.cpp procedure @ 0x126f1a */
undefined8 watcom_crt_fn_126f1a(undefined4 param_1,undefined4 param_2,int param_3);
/* VA: 0x127037 | Module rt/watcom_crt.cpp procedure @ 0x127037 */
undefined8 watcom_crt_fn_127037(double param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5, char *param_6);
/* VA: 0x1272a4 | Module rt/watcom_crt.cpp procedure @ 0x1272a4 */
void watcom_crt_fn_1272a4(void);
/* VA: 0x1272ef | Module rt/watcom_crt.cpp procedure @ 0x1272ef */
void watcom_crt_fn_1272ef(void);
/* VA: 0x127340 | Module rt/watcom_crt.cpp procedure @ 0x127340 */
undefined4 watcom_crt_fn_127340(void);
/* VA: 0x127360 | Module rt/watcom_crt.cpp procedure @ 0x127360 */
undefined4 watcom_crt_fn_127360(void);
/* VA: 0x127368 | Module rt/watcom_crt.cpp procedure @ 0x127368 */
void watcom_crt_fn_127368(void);
/* VA: 0x127371 | Module rt/watcom_crt.cpp procedure @ 0x127371 */
longlong watcom_crt_fn_127371(void);
/* VA: 0x1273b0 | Module rt/watcom_crt.cpp procedure @ 0x1273b0 */
void watcom_crt_fn_1273b0(void);
/* VA: 0x1273eb | Module rt/watcom_crt.cpp procedure @ 0x1273eb */
undefined8 watcom_crt_fn_1273eb(void);
/* VA: 0x127470 | String 'no memory left to handle thrown exception!' */
uint * watcom_crt_memory_left_handle_thrown_127470(void);
/* VA: 0x1275ab | Module rt/watcom_crt.cpp procedure @ 0x1275ab */
void watcom_crt_fn_1275ab(void);
/* VA: 0x1275d8 | Module rt/watcom_crt.cpp procedure @ 0x1275d8 */
undefined8 watcom_crt_fn_1275d8(void);
/* VA: 0x1275e7 | Module rt/watcom_crt.cpp procedure @ 0x1275e7 */
void watcom_crt_fn_1275e7(void);
/* VA: 0x1275f4 | Module rt/watcom_crt.cpp procedure @ 0x1275f4 */
void watcom_crt_fn_1275f4(void);
/* VA: 0x1275f6 | Module rt/watcom_crt.cpp procedure @ 0x1275f6 */
uint watcom_crt_fn_1275f6(void);
/* VA: 0x127668 | Module rt/watcom_crt.cpp procedure @ 0x127668 */
undefined8 watcom_crt_fn_127668(void);
/* VA: 0x1276a9 | Module rt/watcom_crt.cpp procedure @ 0x1276a9 */
undefined8 watcom_crt_fn_1276a9(void);
/* VA: 0x127732 | Module rt/watcom_crt.cpp procedure @ 0x127732 */
undefined8 watcom_crt_fn_127732(void);
/* VA: 0x127761 | Module rt/watcom_crt.cpp procedure @ 0x127761 */
undefined8 watcom_crt_fn_127761(void);
/* VA: 0x12780d | Module rt/watcom_crt.cpp procedure @ 0x12780d */
void watcom_crt_fn_12780d(void);
/* VA: 0x127817 | Module rt/watcom_crt.cpp procedure @ 0x127817 */
void watcom_crt_fn_127817(void);
/* VA: 0x127901 | Module rt/watcom_crt.cpp procedure @ 0x127901 */
undefined8 watcom_crt_fn_127901(void);
/* VA: 0x1279c4 | Module rt/watcom_crt.cpp procedure @ 0x1279c4 */
undefined8 watcom_crt_fn_1279c4(void);
/* VA: 0x1279dd | Module rt/watcom_crt.cpp procedure @ 0x1279dd */
undefined8 watcom_crt_fn_1279dd(void);
/* VA: 0x127a1a | Module rt/watcom_crt.cpp procedure @ 0x127a1a */
int watcom_crt_fn_127a1a(void);
/* VA: 0x127a54 | Module rt/watcom_crt.cpp procedure @ 0x127a54 */
void watcom_crt_fn_127a54(void);
/* VA: 0x127abf | Module rt/watcom_crt.cpp procedure @ 0x127abf */
uint watcom_crt_fn_127abf(void);
/* VA: 0x127b29 | Module rt/watcom_crt.cpp procedure @ 0x127b29 */
void watcom_crt_fn_127b29(void);
/* VA: 0x127bde | Module rt/watcom_crt.cpp procedure @ 0x127bde */
void watcom_crt_fn_127bde(void);
/* VA: 0x127be0 | Module rt/watcom_crt.cpp procedure @ 0x127be0 */
uint watcom_crt_fn_127be0(int param_1,uint param_2,ushort param_3,undefined4 param_4,uint param_5, uint param_6);
/* VA: 0x127d01 | Module rt/watcom_crt.cpp procedure @ 0x127d01 */
longdouble watcom_crt_fn_127d01(void);
/* VA: 0x127d07 | Module rt/watcom_crt.cpp procedure @ 0x127d07 */
longdouble watcom_crt_fn_127d07(void);
/* VA: 0x127d0c | Module rt/watcom_crt.cpp procedure @ 0x127d0c */
longdouble watcom_crt_fn_127d0c(void);
/* VA: 0x127d12 | Module rt/watcom_crt.cpp procedure @ 0x127d12 */
longdouble watcom_crt_fn_127d12(void);
/* VA: 0x127d17 | Module rt/watcom_crt.cpp procedure @ 0x127d17 */
longdouble watcom_crt_fn_127d17(void);
/* VA: 0x127d1d | Module rt/watcom_crt.cpp procedure @ 0x127d1d */
void watcom_crt_fn_127d1d(void);
/* VA: 0x127d23 | Module rt/watcom_crt.cpp procedure @ 0x127d23 */
longdouble watcom_crt_fn_127d23(void);
/* VA: 0x127d29 | Module rt/watcom_crt.cpp procedure @ 0x127d29 */
void watcom_crt_fn_127d29(void);
/* VA: 0x127d2f | Module rt/watcom_crt.cpp procedure @ 0x127d2f */
void watcom_crt_fn_127d2f(void);
/* VA: 0x127d4b | Module rt/watcom_crt.cpp procedure @ 0x127d4b */
void watcom_crt_fn_127d4b(void);
/* VA: 0x127d50 | Module rt/watcom_crt.cpp procedure @ 0x127d50 */
void watcom_crt_fn_127d50(void);
/* VA: 0x127d66 | Module rt/watcom_crt.cpp procedure @ 0x127d66 */
unkbyte10 watcom_crt_fn_127d66(void);
/* VA: 0x127d6b | Module rt/watcom_crt.cpp procedure @ 0x127d6b */
unkbyte10 watcom_crt_fn_127d6b(void);
/* VA: 0x127d87 | Module rt/watcom_crt.cpp procedure @ 0x127d87 */
void watcom_crt_fn_127d87(void);
/* VA: 0x127d97 | Module rt/watcom_crt.cpp procedure @ 0x127d97 */
unkbyte10 watcom_crt_fn_127d97(void);
/* VA: 0x127dab | Module rt/watcom_crt.cpp procedure @ 0x127dab */
void watcom_crt_fn_127dab(void);
/* VA: 0x127dbb | Module rt/watcom_crt.cpp procedure @ 0x127dbb */
unkbyte10 watcom_crt_fn_127dbb(void);
/* VA: 0x127ddb | Module rt/watcom_crt.cpp procedure @ 0x127ddb */
unkbyte10 watcom_crt_fn_127ddb(void);
/* VA: 0x127de0 | Module rt/watcom_crt.cpp procedure @ 0x127de0 */
unkbyte10 watcom_crt_fn_127de0(void);
/* VA: 0x127dfa | Module rt/watcom_crt.cpp procedure @ 0x127dfa */
unkbyte10 watcom_crt_fn_127dfa(void);
/* VA: 0x127dff | Module rt/watcom_crt.cpp procedure @ 0x127dff */
unkbyte10 watcom_crt_fn_127dff(void);
/* VA: 0x127e1f | Module rt/watcom_crt.cpp procedure @ 0x127e1f */
void watcom_crt_fn_127e1f(void);
/* VA: 0x127e33 | Module rt/watcom_crt.cpp procedure @ 0x127e33 */
unkbyte10 watcom_crt_fn_127e33(void);
/* VA: 0x127e4b | Module rt/watcom_crt.cpp procedure @ 0x127e4b */
void watcom_crt_fn_127e4b(void);
/* VA: 0x127e5f | Module rt/watcom_crt.cpp procedure @ 0x127e5f */
unkbyte10 watcom_crt_fn_127e5f(void);
/* VA: 0x127e7f | Module rt/watcom_crt.cpp procedure @ 0x127e7f */
unkbyte10 watcom_crt_fn_127e7f(void);
/* VA: 0x127e84 | Module rt/watcom_crt.cpp procedure @ 0x127e84 */
unkbyte10 watcom_crt_fn_127e84(void);
/* VA: 0x127e9e | Module rt/watcom_crt.cpp procedure @ 0x127e9e */
unkbyte10 watcom_crt_fn_127e9e(void);
/* VA: 0x127ea3 | Module rt/watcom_crt.cpp procedure @ 0x127ea3 */
unkbyte10 watcom_crt_fn_127ea3(void);
/* VA: 0x127ec3 | Module rt/watcom_crt.cpp procedure @ 0x127ec3 */
void watcom_crt_fn_127ec3(void);
/* VA: 0x127ed7 | Module rt/watcom_crt.cpp procedure @ 0x127ed7 */
unkbyte10 watcom_crt_fn_127ed7(void);
/* VA: 0x127eef | Module rt/watcom_crt.cpp procedure @ 0x127eef */
void watcom_crt_fn_127eef(void);
/* VA: 0x127f03 | Module rt/watcom_crt.cpp procedure @ 0x127f03 */
unkbyte10 watcom_crt_fn_127f03(void);
/* VA: 0x127f23 | Module rt/watcom_crt.cpp procedure @ 0x127f23 */
unkbyte10 watcom_crt_fn_127f23(void);
/* VA: 0x127f28 | Module rt/watcom_crt.cpp procedure @ 0x127f28 */
unkbyte10 watcom_crt_fn_127f28(void);
/* VA: 0x127f42 | Module rt/watcom_crt.cpp procedure @ 0x127f42 */
unkbyte10 watcom_crt_fn_127f42(void);
/* VA: 0x127f47 | Module rt/watcom_crt.cpp procedure @ 0x127f47 */
unkbyte10 watcom_crt_fn_127f47(void);
/* VA: 0x127f67 | Module rt/watcom_crt.cpp procedure @ 0x127f67 */
void watcom_crt_fn_127f67(void);
/* VA: 0x127f7b | Module rt/watcom_crt.cpp procedure @ 0x127f7b */
unkbyte10 watcom_crt_fn_127f7b(void);
/* VA: 0x127f93 | Module rt/watcom_crt.cpp procedure @ 0x127f93 */
void watcom_crt_fn_127f93(void);
/* VA: 0x127fa7 | Module rt/watcom_crt.cpp procedure @ 0x127fa7 */
unkbyte10 watcom_crt_fn_127fa7(void);
/* VA: 0x127fc7 | Module rt/watcom_crt.cpp procedure @ 0x127fc7 */
unkbyte10 watcom_crt_fn_127fc7(void);
/* VA: 0x127fcc | Module rt/watcom_crt.cpp procedure @ 0x127fcc */
unkbyte10 watcom_crt_fn_127fcc(void);
/* VA: 0x127fe6 | Module rt/watcom_crt.cpp procedure @ 0x127fe6 */
unkbyte10 watcom_crt_fn_127fe6(void);
/* VA: 0x127feb | Module rt/watcom_crt.cpp procedure @ 0x127feb */
unkbyte10 watcom_crt_fn_127feb(void);
/* VA: 0x12800b | Module rt/watcom_crt.cpp procedure @ 0x12800b */
void watcom_crt_fn_12800b(void);
/* VA: 0x12801f | Module rt/watcom_crt.cpp procedure @ 0x12801f */
unkbyte10 watcom_crt_fn_12801f(void);
/* VA: 0x128037 | Module rt/watcom_crt.cpp procedure @ 0x128037 */
void watcom_crt_fn_128037(void);
/* VA: 0x12804b | Module rt/watcom_crt.cpp procedure @ 0x12804b */
unkbyte10 watcom_crt_fn_12804b(void);
/* VA: 0x12806b | Module rt/watcom_crt.cpp procedure @ 0x12806b */
unkbyte10 watcom_crt_fn_12806b(void);
/* VA: 0x128070 | Module rt/watcom_crt.cpp procedure @ 0x128070 */
unkbyte10 watcom_crt_fn_128070(void);
/* VA: 0x12808a | Module rt/watcom_crt.cpp procedure @ 0x12808a */
unkbyte10 watcom_crt_fn_12808a(void);
/* VA: 0x12808f | Module rt/watcom_crt.cpp procedure @ 0x12808f */
unkbyte10 watcom_crt_fn_12808f(void);
/* VA: 0x1280af | Module rt/watcom_crt.cpp procedure @ 0x1280af */
void watcom_crt_fn_1280af(void);
/* VA: 0x1280c3 | Module rt/watcom_crt.cpp procedure @ 0x1280c3 */
unkbyte10 watcom_crt_fn_1280c3(void);
/* VA: 0x1280db | Module rt/watcom_crt.cpp procedure @ 0x1280db */
void watcom_crt_fn_1280db(void);
/* VA: 0x1280ef | Module rt/watcom_crt.cpp procedure @ 0x1280ef */
unkbyte10 watcom_crt_fn_1280ef(void);
/* VA: 0x12810f | Module rt/watcom_crt.cpp procedure @ 0x12810f */
unkbyte10 watcom_crt_fn_12810f(void);
/* VA: 0x128114 | Module rt/watcom_crt.cpp procedure @ 0x128114 */
unkbyte10 watcom_crt_fn_128114(void);
/* VA: 0x12812e | Module rt/watcom_crt.cpp procedure @ 0x12812e */
unkbyte10 watcom_crt_fn_12812e(void);
/* VA: 0x128133 | Module rt/watcom_crt.cpp procedure @ 0x128133 */
unkbyte10 watcom_crt_fn_128133(void);
/* VA: 0x128153 | Module rt/watcom_crt.cpp procedure @ 0x128153 */
void watcom_crt_fn_128153(void);
/* VA: 0x128167 | Module rt/watcom_crt.cpp procedure @ 0x128167 */
unkbyte10 watcom_crt_fn_128167(void);
/* VA: 0x12817f | Module rt/watcom_crt.cpp procedure @ 0x12817f */
void watcom_crt_fn_12817f(void);
/* VA: 0x128193 | Module rt/watcom_crt.cpp procedure @ 0x128193 */
void watcom_crt_fn_128193(void);
/* VA: 0x1281a6 | Module rt/watcom_crt.cpp procedure @ 0x1281a6 */
void watcom_crt_fn_1281a6(void);
/* VA: 0x128218 | Module rt/watcom_crt.cpp procedure @ 0x128218 */
undefined4 watcom_crt_fn_128218(undefined4 param_1,uint param_2);
/* VA: 0x1282fc | Module rt/watcom_crt.cpp procedure @ 0x1282fc */
undefined8 watcom_crt_fn_1282fc(int param_1,uint param_2,int *param_3);
/* VA: 0x12836c | String 'return from "terminate" function!' */
undefined4 watcom_crt_return_terminate_function_12836c(void);
/* VA: 0x1283b8 | String 'return from "unexpected" function!' */
void watcom_crt_return_unexpected_function_1283b8(void);
/* VA: 0x1283ec | Module rt/watcom_crt.cpp procedure @ 0x1283ec */
undefined8 watcom_crt_fn_1283ec(void);
/* VA: 0x128409 | Module rt/watcom_crt.cpp procedure @ 0x128409 */
void watcom_crt_fn_128409(void);
/* VA: 0x12842e | String 'ABNORMAL TERMINATION' */
void watcom_crt_abnormal_termination_12842e(void);
/* VA: 0x128440 | Module rt/watcom_crt.cpp procedure @ 0x128440 */
void watcom_crt_fn_128440(void);
/* VA: 0x128445 | Module rt/watcom_crt.cpp procedure @ 0x128445 */
void watcom_crt_fn_128445(void);
/* VA: 0x12844f | Module rt/watcom_crt.cpp procedure @ 0x12844f */
void watcom_crt_fn_12844f(void);
/* VA: 0x12852a | Module rt/watcom_crt.cpp procedure @ 0x12852a */
void watcom_crt_fn_12852a(void);
/* VA: 0x12857f | Module rt/watcom_crt.cpp procedure @ 0x12857f */
void watcom_crt_fn_12857f(void);
/* VA: 0x1285b6 | Module rt/watcom_crt.cpp procedure @ 0x1285b6 */
void watcom_crt_fn_1285b6(void);
/* VA: 0x1285fe | Module rt/watcom_crt.cpp procedure @ 0x1285fe */
longdouble watcom_crt_fn_1285fe(void);
/* VA: 0x12862e | Module rt/watcom_crt.cpp procedure @ 0x12862e */
undefined8 watcom_crt_fn_12862e(void);
/* VA: 0x12868b | Module rt/watcom_crt.cpp procedure @ 0x12868b */
undefined8 watcom_crt_fn_12868b(void);
/* VA: 0x1286e8 | Module rt/watcom_crt.cpp procedure @ 0x1286e8 */
void watcom_crt_fn_1286e8(void);
/* VA: 0x128810 | Module rt/watcom_crt.cpp procedure @ 0x128810 */
void watcom_crt_fn_128810(void);
/* VA: 0x12889d | Module rt/watcom_crt.cpp procedure @ 0x12889d */
void watcom_crt_fn_12889d(void);
/* VA: 0x1288ef | Module rt/watcom_crt.cpp procedure @ 0x1288ef */
longdouble watcom_crt_fn_1288ef(void);
/* VA: 0x128915 | Module rt/watcom_crt.cpp procedure @ 0x128915 */
unkbyte10 watcom_crt_fn_128915(void);
/* VA: 0x12893a | Module rt/watcom_crt.cpp procedure @ 0x12893a */
void watcom_crt_fn_12893a(void);
/* VA: 0x128948 | Module rt/watcom_crt.cpp procedure @ 0x128948 */
undefined4 watcom_crt_fn_128948(void);
/* VA: 0x12894d | Module rt/watcom_crt.cpp procedure @ 0x12894d */
longlong watcom_crt_fn_12894d(void);
/* VA: 0x12896c | Module rt/watcom_crt.cpp procedure @ 0x12896c */
void watcom_crt_fn_12896c(undefined2 param_1);
/* VA: 0x128a2f | Module rt/watcom_crt.cpp procedure @ 0x128a2f */
void watcom_crt_fn_128a2f(void);
/* VA: 0x128a5c | Module rt/watcom_crt.cpp procedure @ 0x128a5c */
void watcom_crt_fn_128a5c(void);
/* VA: 0x128a89 | Module rt/watcom_crt.cpp procedure @ 0x128a89 */
void watcom_crt_fn_128a89(void);
/* VA: 0x128aa2 | Module rt/watcom_crt.cpp procedure @ 0x128aa2 */
void watcom_crt_fn_128aa2(void);
/* VA: 0x128ae0 | Module rt/watcom_crt.cpp procedure @ 0x128ae0 */
void watcom_crt_fn_128ae0(void);
/* VA: 0x128afa | Module rt/watcom_crt.cpp procedure @ 0x128afa */
void watcom_crt_fn_128afa(void);
/* VA: 0x128b52 | Module rt/watcom_crt.cpp procedure @ 0x128b52 */
void watcom_crt_fn_128b52(void);
/* VA: 0x128b53 | Module rt/watcom_crt.cpp procedure @ 0x128b53 */
undefined4 watcom_crt_fn_128b53(void);
/* VA: 0x128b60 | Module rt/watcom_crt.cpp procedure @ 0x128b60 */
undefined8 watcom_crt_fn_128b60(void);
/* VA: 0x1292c8 | Module rt/watcom_crt.cpp procedure @ 0x1292c8 */
undefined8 watcom_crt_fn_1292c8(int param_1,int param_2);
/* VA: 0x1295e0 | Module rt/watcom_crt.cpp procedure @ 0x1295e0 */
undefined8 watcom_crt_fn_1295e0(void);
/* VA: 0x12f930 | Module rt/watcom_crt.cpp procedure @ 0x12f930 */
void watcom_crt_fn_12f930(void);
/* VA: 0x12f940 | Module rt/watcom_crt.cpp procedure @ 0x12f940 */
void watcom_crt_fn_12f940(void);
/* VA: 0x12f958 | Module rt/watcom_crt.cpp procedure @ 0x12f958 */
undefined8 watcom_crt_fn_12f958(void);
/* VA: 0x1309d8 | Module rt/watcom_crt.cpp procedure @ 0x1309d8 */
void watcom_crt_fn_1309d8(void);
/* VA: 0x130a98 | Module rt/watcom_crt.cpp procedure @ 0x130a98 */
void watcom_crt_fn_130a98(void);
/* VA: 0x130b58 | Module rt/watcom_crt.cpp procedure @ 0x130b58 */
void watcom_crt_fn_130b58(void);
/* VA: 0x130c18 | Module rt/watcom_crt.cpp procedure @ 0x130c18 */
undefined8 watcom_crt_fn_130c18(void);
/* VA: 0x130cd8 | Module rt/watcom_crt.cpp procedure @ 0x130cd8 */
undefined8 watcom_crt_fn_130cd8(void);
/* VA: 0x130d98 | Module rt/watcom_crt.cpp procedure @ 0x130d98 */
undefined8 watcom_crt_fn_130d98(void);
/* VA: 0x130ea0 | Module rt/watcom_crt.cpp procedure @ 0x130ea0 */
undefined8 watcom_crt_fn_130ea0(void);
/* VA: 0x137e43 | Module rt/watcom_crt.cpp procedure @ 0x137e43 */
int watcom_crt_fn_137e43(int param_1);
/* VA: 0x1382d0 | Module rt/watcom_crt.cpp procedure @ 0x1382d0 */
undefined8 watcom_crt_fn_1382d0(void);
/* VA: 0x1383c5 | Module rt/watcom_crt.cpp procedure @ 0x1383c5 */
undefined8 watcom_crt_fn_1383c5(void);
/* VA: 0x1384c0 | Module rt/watcom_crt.cpp procedure @ 0x1384c0 */
undefined8 watcom_crt_fn_1384c0(void);
/* VA: 0x13a3f8 | Module rt/watcom_crt.cpp procedure @ 0x13a3f8 */
undefined8 watcom_crt_fn_13a3f8(int param_1,int param_2);
/* VA: 0x13a710 | Module rt/watcom_crt.cpp procedure @ 0x13a710 */
undefined8 watcom_crt_fn_13a710(void);
/* VA: 0x140800 | Module rt/watcom_crt.cpp procedure @ 0x140800 */
undefined4 watcom_crt_fn_140800(void);
/* VA: 0x1408a0 | Module rt/watcom_crt.cpp procedure @ 0x1408a0 */
void watcom_crt_fn_1408a0(void);
/* VA: 0x140b90 | Module rt/watcom_crt.cpp procedure @ 0x140b90 */
void watcom_crt_fn_140b90(void);
/* VA: 0x140c00 | Module rt/watcom_crt.cpp procedure @ 0x140c00 */
void watcom_crt_fn_140c00(void);
/* VA: 0x140c90 | Module rt/watcom_crt.cpp procedure @ 0x140c90 */
undefined4 watcom_crt_fn_140c90(void);
/* VA: 0x140ca0 | Module rt/watcom_crt.cpp procedure @ 0x140ca0 */
void watcom_crt_fn_140ca0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
/* VA: 0x140f20 | Module rt/watcom_crt.cpp procedure @ 0x140f20 */
void watcom_crt_fn_140f20(void);
/* VA: 0x140fe0 | Module rt/watcom_crt.cpp procedure @ 0x140fe0 */
void watcom_crt_fn_140fe0(void);
/* VA: 0x141010 | Module rt/watcom_crt.cpp procedure @ 0x141010 */
void watcom_crt_fn_141010(void);
/* VA: 0x141040 | Module rt/watcom_crt.cpp procedure @ 0x141040 */
undefined1 * watcom_crt_fn_141040(void);
/* VA: 0x141090 | Module rt/watcom_crt.cpp procedure @ 0x141090 */
undefined1 * watcom_crt_fn_141090(void);
/* VA: 0x141383 | Module rt/watcom_crt.cpp procedure @ 0x141383 */
undefined1 * watcom_crt_fn_141383(void);
/* VA: 0x1413a0 | Module rt/watcom_crt.cpp procedure @ 0x1413a0 */
undefined1 * watcom_crt_fn_1413a0(void);
/* VA: 0x1413f0 | Module rt/watcom_crt.cpp procedure @ 0x1413f0 */
undefined1 * watcom_crt_fn_1413f0(void);
/* VA: 0x141b93 | Module rt/watcom_crt.cpp procedure @ 0x141b93 */
undefined1 * watcom_crt_fn_141b93(void);
/* VA: 0x141bb0 | Module rt/watcom_crt.cpp procedure @ 0x141bb0 */
undefined1 * watcom_crt_fn_141bb0(void);
/* VA: 0x141c00 | Module rt/watcom_crt.cpp procedure @ 0x141c00 */
undefined1 * watcom_crt_fn_141c00(void);
/* VA: 0x141d43 | Module rt/watcom_crt.cpp procedure @ 0x141d43 */
undefined1 * watcom_crt_fn_141d43(void);
/* VA: 0x141d60 | Module rt/watcom_crt.cpp procedure @ 0x141d60 */
undefined4 watcom_crt_fn_141d60(void);
/* VA: 0x141d6c | Module rt/watcom_crt.cpp procedure @ 0x141d6c */
uint watcom_crt_fn_141d6c(void);
/* VA: 0x141d78 | Module rt/watcom_crt.cpp procedure @ 0x141d78 */
uint watcom_crt_fn_141d78(void);
/* VA: 0x141d84 | Module rt/watcom_crt.cpp procedure @ 0x141d84 */
undefined4 watcom_crt_fn_141d84(void);
/* VA: 0x141d90 | Module rt/watcom_crt.cpp procedure @ 0x141d90 */
uint watcom_crt_fn_141d90(void);
/* VA: 0x141da0 | Module rt/watcom_crt.cpp procedure @ 0x141da0 */
uint watcom_crt_fn_141da0(void);
/* VA: 0x141db0 | Module rt/watcom_crt.cpp procedure @ 0x141db0 */
undefined4 watcom_crt_fn_141db0(void);
/* VA: 0x141dc0 | Module rt/watcom_crt.cpp procedure @ 0x141dc0 */
undefined4 watcom_crt_fn_141dc0(void);
/* VA: 0x141dd0 | Module rt/watcom_crt.cpp procedure @ 0x141dd0 */
undefined2 watcom_crt_fn_141dd0(void);
/* VA: 0x141ddc | Module rt/watcom_crt.cpp procedure @ 0x141ddc */
undefined4 watcom_crt_fn_141ddc(void);
/* VA: 0x141de8 | Module rt/watcom_crt.cpp procedure @ 0x141de8 */
void watcom_crt_fn_141de8(void);
/* VA: 0x141df4 | Module rt/watcom_crt.cpp procedure @ 0x141df4 */
uint watcom_crt_fn_141df4(void);
/* VA: 0x141e00 | Module rt/watcom_crt.cpp procedure @ 0x141e00 */
uint watcom_crt_fn_141e00(void);
/* VA: 0x141e10 | Module rt/watcom_crt.cpp procedure @ 0x141e10 */
uint watcom_crt_fn_141e10(void);
/* VA: 0x141e20 | Module rt/watcom_crt.cpp procedure @ 0x141e20 */
uint watcom_crt_fn_141e20(void);
/* VA: 0x141e30 | Module rt/watcom_crt.cpp procedure @ 0x141e30 */
undefined4 watcom_crt_fn_141e30(void);
/* VA: 0x141e40 | Module rt/watcom_crt.cpp procedure @ 0x141e40 */
undefined4 watcom_crt_fn_141e40(void);
/* VA: 0x141e4c | Module rt/watcom_crt.cpp procedure @ 0x141e4c */
uint watcom_crt_fn_141e4c(void);
/* VA: 0x141e58 | Module rt/watcom_crt.cpp procedure @ 0x141e58 */
uint watcom_crt_fn_141e58(void);
/* VA: 0x141e68 | Module rt/watcom_crt.cpp procedure @ 0x141e68 */
undefined4 watcom_crt_fn_141e68(void);
/* VA: 0x141e74 | Module rt/watcom_crt.cpp procedure @ 0x141e74 */
uint watcom_crt_fn_141e74(void);
/* VA: 0x141e84 | Module rt/watcom_crt.cpp procedure @ 0x141e84 */
uint watcom_crt_fn_141e84(void);
/* VA: 0x141e94 | Module rt/watcom_crt.cpp procedure @ 0x141e94 */
undefined4 watcom_crt_fn_141e94(void);
/* VA: 0x141ea4 | Module rt/watcom_crt.cpp procedure @ 0x141ea4 */
uint watcom_crt_fn_141ea4(void);
/* VA: 0x141eb4 | Module rt/watcom_crt.cpp procedure @ 0x141eb4 */
undefined2 watcom_crt_fn_141eb4(void);
/* VA: 0x141ec0 | Module rt/watcom_crt.cpp procedure @ 0x141ec0 */
undefined4 watcom_crt_fn_141ec0(void);
/* VA: 0x141ecc | Module rt/watcom_crt.cpp procedure @ 0x141ecc */
void watcom_crt_fn_141ecc(void);
/* VA: 0x141ed8 | Module rt/watcom_crt.cpp procedure @ 0x141ed8 */
uint watcom_crt_fn_141ed8(void);
/* VA: 0x141ee4 | Module rt/watcom_crt.cpp procedure @ 0x141ee4 */
uint watcom_crt_fn_141ee4(void);
/* VA: 0x141ef4 | Module rt/watcom_crt.cpp procedure @ 0x141ef4 */
uint watcom_crt_fn_141ef4(void);
/* VA: 0x141f04 | Module rt/watcom_crt.cpp procedure @ 0x141f04 */
uint watcom_crt_fn_141f04(void);
/* VA: 0x141f14 | Module rt/watcom_crt.cpp procedure @ 0x141f14 */
undefined4 watcom_crt_fn_141f14(void);
/* VA: 0x141f24 | Module rt/watcom_crt.cpp procedure @ 0x141f24 */
undefined4 watcom_crt_fn_141f24(void);
/* VA: 0x141f30 | Module rt/watcom_crt.cpp procedure @ 0x141f30 */
uint watcom_crt_fn_141f30(void);
/* VA: 0x141f40 | Module rt/watcom_crt.cpp procedure @ 0x141f40 */
uint watcom_crt_fn_141f40(void);
/* VA: 0x141f4c | Module rt/watcom_crt.cpp procedure @ 0x141f4c */
undefined4 watcom_crt_fn_141f4c(void);
/* VA: 0x141f58 | Module rt/watcom_crt.cpp procedure @ 0x141f58 */
uint watcom_crt_fn_141f58(void);
/* VA: 0x141f68 | Module rt/watcom_crt.cpp procedure @ 0x141f68 */
uint watcom_crt_fn_141f68(void);
/* VA: 0x141f78 | Module rt/watcom_crt.cpp procedure @ 0x141f78 */
undefined4 watcom_crt_fn_141f78(void);
/* VA: 0x141f88 | Module rt/watcom_crt.cpp procedure @ 0x141f88 */
uint watcom_crt_fn_141f88(void);
/* VA: 0x141f98 | Module rt/watcom_crt.cpp procedure @ 0x141f98 */
undefined2 watcom_crt_fn_141f98(void);
/* VA: 0x141fa4 | Module rt/watcom_crt.cpp procedure @ 0x141fa4 */
undefined4 watcom_crt_fn_141fa4(void);
/* VA: 0x141fb0 | Module rt/watcom_crt.cpp procedure @ 0x141fb0 */
void watcom_crt_fn_141fb0(void);
/* VA: 0x141fbc | Module rt/watcom_crt.cpp procedure @ 0x141fbc */
uint watcom_crt_fn_141fbc(void);
/* VA: 0x141fc8 | Module rt/watcom_crt.cpp procedure @ 0x141fc8 */
uint watcom_crt_fn_141fc8(void);
/* VA: 0x141fd8 | Module rt/watcom_crt.cpp procedure @ 0x141fd8 */
uint watcom_crt_fn_141fd8(void);
/* VA: 0x141fe8 | Module rt/watcom_crt.cpp procedure @ 0x141fe8 */
uint watcom_crt_fn_141fe8(void);
/* VA: 0x141ff8 | Module rt/watcom_crt.cpp procedure @ 0x141ff8 */
undefined4 watcom_crt_fn_141ff8(void);
/* VA: 0x142008 | Module rt/watcom_crt.cpp procedure @ 0x142008 */
undefined4 watcom_crt_fn_142008(void);
/* VA: 0x142014 | Module rt/watcom_crt.cpp procedure @ 0x142014 */
uint watcom_crt_fn_142014(void);
/* VA: 0x142020 | Module rt/watcom_crt.cpp procedure @ 0x142020 */
uint watcom_crt_fn_142020(void);
/* VA: 0x14202c | Module rt/watcom_crt.cpp procedure @ 0x14202c */
uint watcom_crt_fn_14202c(void);
/* VA: 0x142038 | Module rt/watcom_crt.cpp procedure @ 0x142038 */
undefined4 watcom_crt_fn_142038(void);
/* VA: 0x142048 | Module rt/watcom_crt.cpp procedure @ 0x142048 */
uint watcom_crt_fn_142048(void);
/* VA: 0x142058 | Module rt/watcom_crt.cpp procedure @ 0x142058 */
undefined4 watcom_crt_fn_142058(void);
/* VA: 0x142068 | Module rt/watcom_crt.cpp procedure @ 0x142068 */
undefined1 watcom_crt_fn_142068(void);
/* VA: 0x142078 | Module rt/watcom_crt.cpp procedure @ 0x142078 */
undefined2 watcom_crt_fn_142078(void);
/* VA: 0x142084 | Module rt/watcom_crt.cpp procedure @ 0x142084 */
undefined4 watcom_crt_fn_142084(void);
/* VA: 0x142090 | Module rt/watcom_crt.cpp procedure @ 0x142090 */
void watcom_crt_fn_142090(void);
/* VA: 0x14209c | Module rt/watcom_crt.cpp procedure @ 0x14209c */
uint watcom_crt_fn_14209c(void);
/* VA: 0x1420a8 | Module rt/watcom_crt.cpp procedure @ 0x1420a8 */
uint watcom_crt_fn_1420a8(void);
/* VA: 0x1420b8 | Module rt/watcom_crt.cpp procedure @ 0x1420b8 */
uint watcom_crt_fn_1420b8(void);
/* VA: 0x1420c8 | Module rt/watcom_crt.cpp procedure @ 0x1420c8 */
uint watcom_crt_fn_1420c8(void);
/* VA: 0x1420d8 | Module rt/watcom_crt.cpp procedure @ 0x1420d8 */
undefined4 watcom_crt_fn_1420d8(void);
/* VA: 0x1420e8 | Module rt/watcom_crt.cpp procedure @ 0x1420e8 */
undefined4 watcom_crt_fn_1420e8(void);
/* VA: 0x1420f8 | Module rt/watcom_crt.cpp procedure @ 0x1420f8 */
uint watcom_crt_fn_1420f8(void);
/* VA: 0x142108 | Module rt/watcom_crt.cpp procedure @ 0x142108 */
uint watcom_crt_fn_142108(void);
/* VA: 0x142118 | Module rt/watcom_crt.cpp procedure @ 0x142118 */
undefined4 watcom_crt_fn_142118(void);
/* VA: 0x142128 | Module rt/watcom_crt.cpp procedure @ 0x142128 */
uint watcom_crt_fn_142128(void);
/* VA: 0x142134 | Module rt/watcom_crt.cpp procedure @ 0x142134 */
uint watcom_crt_fn_142134(void);
/* VA: 0x142140 | Module rt/watcom_crt.cpp procedure @ 0x142140 */
undefined4 watcom_crt_fn_142140(void);
/* VA: 0x142150 | Module rt/watcom_crt.cpp procedure @ 0x142150 */
undefined4 watcom_crt_fn_142150(void);
/* VA: 0x14215c | Module rt/watcom_crt.cpp procedure @ 0x14215c */
undefined2 watcom_crt_fn_14215c(void);
/* VA: 0x142168 | Module rt/watcom_crt.cpp procedure @ 0x142168 */
undefined4 watcom_crt_fn_142168(void);
/* VA: 0x142174 | Module rt/watcom_crt.cpp procedure @ 0x142174 */
void watcom_crt_fn_142174(void);
/* VA: 0x142180 | Module rt/watcom_crt.cpp procedure @ 0x142180 */
uint watcom_crt_fn_142180(void);
/* VA: 0x14218c | Module rt/watcom_crt.cpp procedure @ 0x14218c */
uint watcom_crt_fn_14218c(void);
/* VA: 0x14219c | Module rt/watcom_crt.cpp procedure @ 0x14219c */
uint watcom_crt_fn_14219c(void);
/* VA: 0x1421ac | Module rt/watcom_crt.cpp procedure @ 0x1421ac */
uint watcom_crt_fn_1421ac(void);
/* VA: 0x1421bc | Module rt/watcom_crt.cpp procedure @ 0x1421bc */
undefined4 watcom_crt_fn_1421bc(void);
/* VA: 0x1421cc | Module rt/watcom_crt.cpp procedure @ 0x1421cc */
undefined4 watcom_crt_fn_1421cc(void);
/* VA: 0x1421dc | Module rt/watcom_crt.cpp procedure @ 0x1421dc */
uint watcom_crt_fn_1421dc(void);
/* VA: 0x1421ec | Module rt/watcom_crt.cpp procedure @ 0x1421ec */
uint watcom_crt_fn_1421ec(void);
/* VA: 0x1421fc | Module rt/watcom_crt.cpp procedure @ 0x1421fc */
uint watcom_crt_fn_1421fc(void);
/* VA: 0x14220c | Module rt/watcom_crt.cpp procedure @ 0x14220c */
undefined4 watcom_crt_fn_14220c(void);
/* VA: 0x142218 | Module rt/watcom_crt.cpp procedure @ 0x142218 */
uint watcom_crt_fn_142218(void);
/* VA: 0x142220 | Module rt/watcom_crt.cpp procedure @ 0x142220 */
undefined4 watcom_crt_fn_142220(void);
/* VA: 0x14222c | Module rt/watcom_crt.cpp procedure @ 0x14222c */
undefined4 watcom_crt_fn_14222c(void);
/* VA: 0x142238 | Module rt/watcom_crt.cpp procedure @ 0x142238 */
undefined2 watcom_crt_fn_142238(void);
/* VA: 0x142244 | Module rt/watcom_crt.cpp procedure @ 0x142244 */
undefined2 watcom_crt_fn_142244(void);
/* VA: 0x142250 | Module rt/watcom_crt.cpp procedure @ 0x142250 */
void watcom_crt_fn_142250(void);
/* VA: 0x142258 | Module rt/watcom_crt.cpp procedure @ 0x142258 */
uint watcom_crt_fn_142258(void);
/* VA: 0x142264 | Module rt/watcom_crt.cpp procedure @ 0x142264 */
uint watcom_crt_fn_142264(void);
/* VA: 0x142274 | Module rt/watcom_crt.cpp procedure @ 0x142274 */
uint watcom_crt_fn_142274(void);
/* VA: 0x142284 | Module rt/watcom_crt.cpp procedure @ 0x142284 */
uint watcom_crt_fn_142284(void);
/* VA: 0x142294 | Module rt/watcom_crt.cpp procedure @ 0x142294 */
undefined4 watcom_crt_fn_142294(void);
/* VA: 0x1422a4 | Module rt/watcom_crt.cpp procedure @ 0x1422a4 */
undefined4 watcom_crt_fn_1422a4(void);
/* VA: 0x1422b4 | Module rt/watcom_crt.cpp procedure @ 0x1422b4 */
uint watcom_crt_fn_1422b4(void);
/* VA: 0x1422c4 | Module rt/watcom_crt.cpp procedure @ 0x1422c4 */
uint watcom_crt_fn_1422c4(void);
/* VA: 0x1422d4 | Module rt/watcom_crt.cpp procedure @ 0x1422d4 */
uint watcom_crt_fn_1422d4(void);
/* VA: 0x1422e4 | Module rt/watcom_crt.cpp procedure @ 0x1422e4 */
undefined4 watcom_crt_fn_1422e4(void);
/* VA: 0x1422f4 | Module rt/watcom_crt.cpp procedure @ 0x1422f4 */
uint watcom_crt_fn_1422f4(void);
/* VA: 0x142300 | Module rt/watcom_crt.cpp procedure @ 0x142300 */
undefined4 watcom_crt_fn_142300(void);
/* VA: 0x14230c | Module rt/watcom_crt.cpp procedure @ 0x14230c */
undefined4 watcom_crt_fn_14230c(void);
/* VA: 0x14231c | Module rt/watcom_crt.cpp procedure @ 0x14231c */
undefined2 watcom_crt_fn_14231c(void);
/* VA: 0x14232c | Module rt/watcom_crt.cpp procedure @ 0x14232c */
uint watcom_crt_fn_14232c(void);
/* VA: 0x142338 | Module rt/watcom_crt.cpp procedure @ 0x142338 */
void watcom_crt_fn_142338(void);
/* VA: 0x142344 | Module rt/watcom_crt.cpp procedure @ 0x142344 */
uint watcom_crt_fn_142344(void);
/* VA: 0x142354 | Module rt/watcom_crt.cpp procedure @ 0x142354 */
uint watcom_crt_fn_142354(void);
/* VA: 0x142364 | Module rt/watcom_crt.cpp procedure @ 0x142364 */
uint watcom_crt_fn_142364(void);
/* VA: 0x142374 | Module rt/watcom_crt.cpp procedure @ 0x142374 */
uint watcom_crt_fn_142374(void);
/* VA: 0x142384 | Module rt/watcom_crt.cpp procedure @ 0x142384 */
undefined4 watcom_crt_fn_142384(void);
/* VA: 0x142394 | Module rt/watcom_crt.cpp procedure @ 0x142394 */
undefined4 watcom_crt_fn_142394(void);
/* VA: 0x1423a4 | Module rt/watcom_crt.cpp procedure @ 0x1423a4 */
uint watcom_crt_fn_1423a4(void);
/* VA: 0x1423b4 | Module rt/watcom_crt.cpp procedure @ 0x1423b4 */
uint watcom_crt_fn_1423b4(void);
/* VA: 0x1423c4 | Module rt/watcom_crt.cpp procedure @ 0x1423c4 */
uint watcom_crt_fn_1423c4(void);
/* VA: 0x1423d4 | Module rt/watcom_crt.cpp procedure @ 0x1423d4 */
undefined4 watcom_crt_fn_1423d4(void);
/* VA: 0x1423e0 | Module rt/watcom_crt.cpp procedure @ 0x1423e0 */
uint watcom_crt_fn_1423e0(void);
/* VA: 0x1423ec | Module rt/watcom_crt.cpp procedure @ 0x1423ec */
undefined4 watcom_crt_fn_1423ec(void);
/* VA: 0x1423fc | Module rt/watcom_crt.cpp procedure @ 0x1423fc */
uint watcom_crt_fn_1423fc(void);
/* VA: 0x142408 | Module rt/watcom_crt.cpp procedure @ 0x142408 */
undefined1 watcom_crt_fn_142408(void);
/* VA: 0x142414 | Module rt/watcom_crt.cpp procedure @ 0x142414 */
undefined2 watcom_crt_fn_142414(void);
/* VA: 0x142420 | Module rt/watcom_crt.cpp procedure @ 0x142420 */
void watcom_crt_fn_142420(void);
/* VA: 0x14242c | Module rt/watcom_crt.cpp procedure @ 0x14242c */
uint watcom_crt_fn_14242c(void);
/* VA: 0x142438 | Module rt/watcom_crt.cpp procedure @ 0x142438 */
undefined4 watcom_crt_fn_142438(void);
/* VA: 0x142448 | Module rt/watcom_crt.cpp procedure @ 0x142448 */
uint watcom_crt_fn_142448(void);
/* VA: 0x142458 | Module rt/watcom_crt.cpp procedure @ 0x142458 */
uint watcom_crt_fn_142458(void);
/* VA: 0x142468 | Module rt/watcom_crt.cpp procedure @ 0x142468 */
undefined4 watcom_crt_fn_142468(void);
/* VA: 0x142478 | Module rt/watcom_crt.cpp procedure @ 0x142478 */
undefined4 watcom_crt_fn_142478(void);
/* VA: 0x142484 | Module rt/watcom_crt.cpp procedure @ 0x142484 */
uint watcom_crt_fn_142484(void);
/* VA: 0x142490 | Module rt/watcom_crt.cpp procedure @ 0x142490 */
uint watcom_crt_fn_142490(void);
/* VA: 0x14249c | Module rt/watcom_crt.cpp procedure @ 0x14249c */
undefined4 watcom_crt_fn_14249c(void);
/* VA: 0x1424a8 | Module rt/watcom_crt.cpp procedure @ 0x1424a8 */
uint watcom_crt_fn_1424a8(void);
/* VA: 0x1424b4 | Module rt/watcom_crt.cpp procedure @ 0x1424b4 */
uint watcom_crt_fn_1424b4(void);
/* VA: 0x1424c0 | Module rt/watcom_crt.cpp procedure @ 0x1424c0 */
undefined2 watcom_crt_fn_1424c0(void);
/* VA: 0x1424d0 | Module rt/watcom_crt.cpp procedure @ 0x1424d0 */
undefined4 watcom_crt_fn_1424d0(void);
/* VA: 0x1424dc | Module rt/watcom_crt.cpp procedure @ 0x1424dc */
undefined2 watcom_crt_fn_1424dc(void);
/* VA: 0x1424e4 | Module rt/watcom_crt.cpp procedure @ 0x1424e4 */
undefined2 watcom_crt_fn_1424e4(void);
/* VA: 0x1424f0 | Module rt/watcom_crt.cpp procedure @ 0x1424f0 */
void watcom_crt_fn_1424f0(void);
/* VA: 0x1424f8 | Module rt/watcom_crt.cpp procedure @ 0x1424f8 */
uint watcom_crt_fn_1424f8(void);
/* VA: 0x142500 | Module rt/watcom_crt.cpp procedure @ 0x142500 */
uint watcom_crt_fn_142500(void);
/* VA: 0x14250c | Module rt/watcom_crt.cpp procedure @ 0x14250c */
uint watcom_crt_fn_14250c(void);
/* VA: 0x142518 | Module rt/watcom_crt.cpp procedure @ 0x142518 */
uint watcom_crt_fn_142518(void);
/* VA: 0x142524 | Module rt/watcom_crt.cpp procedure @ 0x142524 */
undefined4 watcom_crt_fn_142524(void);
/* VA: 0x142530 | Module rt/watcom_crt.cpp procedure @ 0x142530 */
undefined4 watcom_crt_fn_142530(void);
/* VA: 0x14253c | Module rt/watcom_crt.cpp procedure @ 0x14253c */
uint watcom_crt_fn_14253c(void);
/* VA: 0x14254c | Module rt/watcom_crt.cpp procedure @ 0x14254c */
uint watcom_crt_fn_14254c(void);
/* VA: 0x142558 | Module rt/watcom_crt.cpp procedure @ 0x142558 */
uint watcom_crt_fn_142558(void);
/* VA: 0x142564 | Module rt/watcom_crt.cpp procedure @ 0x142564 */
undefined4 watcom_crt_fn_142564(void);
/* VA: 0x142574 | Module rt/watcom_crt.cpp procedure @ 0x142574 */
uint watcom_crt_fn_142574(void);
/* VA: 0x142580 | Module rt/watcom_crt.cpp procedure @ 0x142580 */
undefined4 watcom_crt_fn_142580(void);
/* VA: 0x14258c | Module rt/watcom_crt.cpp procedure @ 0x14258c */
undefined1 watcom_crt_fn_14258c(void);
/* VA: 0x14259c | Module rt/watcom_crt.cpp procedure @ 0x14259c */
undefined2 watcom_crt_fn_14259c(void);
/* VA: 0x1425a8 | Module rt/watcom_crt.cpp procedure @ 0x1425a8 */
undefined4 watcom_crt_fn_1425a8(void);
/* VA: 0x1425b4 | Module rt/watcom_crt.cpp procedure @ 0x1425b4 */
void watcom_crt_fn_1425b4(void);
/* VA: 0x1425c0 | Module rt/watcom_crt.cpp procedure @ 0x1425c0 */
uint watcom_crt_fn_1425c0(void);
/* VA: 0x1425cc | Module rt/watcom_crt.cpp procedure @ 0x1425cc */
uint watcom_crt_fn_1425cc(void);
/* VA: 0x1425d8 | Module rt/watcom_crt.cpp procedure @ 0x1425d8 */
uint watcom_crt_fn_1425d8(void);
/* VA: 0x1425e8 | Module rt/watcom_crt.cpp procedure @ 0x1425e8 */
uint watcom_crt_fn_1425e8(void);
/* VA: 0x1425f4 | Module rt/watcom_crt.cpp procedure @ 0x1425f4 */
undefined4 watcom_crt_fn_1425f4(void);
/* VA: 0x142600 | Module rt/watcom_crt.cpp procedure @ 0x142600 */
undefined4 watcom_crt_fn_142600(void);
/* VA: 0x14260c | Module rt/watcom_crt.cpp procedure @ 0x14260c */
uint watcom_crt_fn_14260c(void);
/* VA: 0x142618 | Module rt/watcom_crt.cpp procedure @ 0x142618 */
uint watcom_crt_fn_142618(void);
/* VA: 0x142624 | Module rt/watcom_crt.cpp procedure @ 0x142624 */
undefined4 watcom_crt_fn_142624(void);
/* VA: 0x142630 | Module rt/watcom_crt.cpp procedure @ 0x142630 */
undefined4 watcom_crt_fn_142630(void);
/* VA: 0x14263c | Module rt/watcom_crt.cpp procedure @ 0x14263c */
uint watcom_crt_fn_14263c(void);
/* VA: 0x142644 | Module rt/watcom_crt.cpp procedure @ 0x142644 */
undefined4 watcom_crt_fn_142644(void);
/* VA: 0x142650 | Module rt/watcom_crt.cpp procedure @ 0x142650 */
undefined4 watcom_crt_fn_142650(void);
/* VA: 0x14265c | Module rt/watcom_crt.cpp procedure @ 0x14265c */
undefined2 watcom_crt_fn_14265c(void);
/* VA: 0x142664 | Module rt/watcom_crt.cpp procedure @ 0x142664 */
undefined4 watcom_crt_fn_142664(void);
/* VA: 0x142670 | Module rt/watcom_crt.cpp procedure @ 0x142670 */
void watcom_crt_fn_142670(void);
/* VA: 0x142678 | Module rt/watcom_crt.cpp procedure @ 0x142678 */
uint watcom_crt_fn_142678(void);
/* VA: 0x142680 | Module rt/watcom_crt.cpp procedure @ 0x142680 */
undefined4 watcom_crt_fn_142680(void);
/* VA: 0x14268c | Module rt/watcom_crt.cpp procedure @ 0x14268c */
uint watcom_crt_fn_14268c(void);
/* VA: 0x142698 | Module rt/watcom_crt.cpp procedure @ 0x142698 */
uint watcom_crt_fn_142698(void);
/* VA: 0x1426a4 | Module rt/watcom_crt.cpp procedure @ 0x1426a4 */
undefined4 watcom_crt_fn_1426a4(void);
/* VA: 0x1426b0 | Module rt/watcom_crt.cpp procedure @ 0x1426b0 */
undefined4 watcom_crt_fn_1426b0(void);
/* VA: 0x1426bc | Module rt/watcom_crt.cpp procedure @ 0x1426bc */
uint watcom_crt_fn_1426bc(void);
/* VA: 0x1426c8 | Module rt/watcom_crt.cpp procedure @ 0x1426c8 */
uint watcom_crt_fn_1426c8(void);
/* VA: 0x1426d4 | Module rt/watcom_crt.cpp procedure @ 0x1426d4 */
uint watcom_crt_fn_1426d4(void);
/* VA: 0x1426e0 | Module rt/watcom_crt.cpp procedure @ 0x1426e0 */
undefined4 watcom_crt_fn_1426e0(void);
/* VA: 0x1426ec | Module rt/watcom_crt.cpp procedure @ 0x1426ec */
uint watcom_crt_fn_1426ec(void);
/* VA: 0x1426f8 | Module rt/watcom_crt.cpp procedure @ 0x1426f8 */
undefined2 watcom_crt_fn_1426f8(void);
/* VA: 0x142708 | Module rt/watcom_crt.cpp procedure @ 0x142708 */
uint watcom_crt_fn_142708(void);
/* VA: 0x142714 | Module rt/watcom_crt.cpp procedure @ 0x142714 */
undefined2 watcom_crt_fn_142714(void);
/* VA: 0x14271c | Module rt/watcom_crt.cpp procedure @ 0x14271c */
undefined4 watcom_crt_fn_14271c(void);
/* VA: 0x142728 | Module rt/watcom_crt.cpp procedure @ 0x142728 */
void watcom_crt_fn_142728(void);
/* VA: 0x142730 | Module rt/watcom_crt.cpp procedure @ 0x142730 */
uint watcom_crt_fn_142730(void);
/* VA: 0x142738 | Module rt/watcom_crt.cpp procedure @ 0x142738 */
undefined4 watcom_crt_fn_142738(void);
/* VA: 0x142744 | Module rt/watcom_crt.cpp procedure @ 0x142744 */
uint watcom_crt_fn_142744(void);
/* VA: 0x142750 | Module rt/watcom_crt.cpp procedure @ 0x142750 */
uint watcom_crt_fn_142750(void);
/* VA: 0x14275c | Module rt/watcom_crt.cpp procedure @ 0x14275c */
undefined4 watcom_crt_fn_14275c(void);
/* VA: 0x142768 | Module rt/watcom_crt.cpp procedure @ 0x142768 */
undefined4 watcom_crt_fn_142768(void);
/* VA: 0x142778 | Module rt/watcom_crt.cpp procedure @ 0x142778 */
uint watcom_crt_fn_142778(void);
/* VA: 0x142788 | Module rt/watcom_crt.cpp procedure @ 0x142788 */
uint watcom_crt_fn_142788(void);
/* VA: 0x142798 | Module rt/watcom_crt.cpp procedure @ 0x142798 */
uint watcom_crt_fn_142798(void);
/* VA: 0x1427a8 | Module rt/watcom_crt.cpp procedure @ 0x1427a8 */
undefined4 watcom_crt_fn_1427a8(void);
/* VA: 0x1427b8 | Module rt/watcom_crt.cpp procedure @ 0x1427b8 */
uint watcom_crt_fn_1427b8(void);
/* VA: 0x1427c8 | Module rt/watcom_crt.cpp procedure @ 0x1427c8 */
undefined4 watcom_crt_fn_1427c8(void);
/* VA: 0x1427d8 | Module rt/watcom_crt.cpp procedure @ 0x1427d8 */
undefined4 watcom_crt_fn_1427d8(void);
/* VA: 0x1427e8 | Module rt/watcom_crt.cpp procedure @ 0x1427e8 */
undefined2 watcom_crt_fn_1427e8(void);
/* VA: 0x1427f4 | Module rt/watcom_crt.cpp procedure @ 0x1427f4 */
undefined2 watcom_crt_fn_1427f4(void);
/* VA: 0x142800 | Module rt/watcom_crt.cpp procedure @ 0x142800 */
void watcom_crt_fn_142800(void);
/* VA: 0x14280c | Module rt/watcom_crt.cpp procedure @ 0x14280c */
uint watcom_crt_fn_14280c(void);
/* VA: 0x142818 | Module rt/watcom_crt.cpp procedure @ 0x142818 */
uint watcom_crt_fn_142818(void);
/* VA: 0x142824 | Module rt/watcom_crt.cpp procedure @ 0x142824 */
uint watcom_crt_fn_142824(void);
/* VA: 0x142830 | Module rt/watcom_crt.cpp procedure @ 0x142830 */
uint watcom_crt_fn_142830(void);
/* VA: 0x14283c | Module rt/watcom_crt.cpp procedure @ 0x14283c */
undefined4 watcom_crt_fn_14283c(void);
/* VA: 0x142848 | Module rt/watcom_crt.cpp procedure @ 0x142848 */
undefined4 watcom_crt_fn_142848(void);
/* VA: 0x142858 | Module rt/watcom_crt.cpp procedure @ 0x142858 */
uint watcom_crt_fn_142858(void);
/* VA: 0x142868 | Module rt/watcom_crt.cpp procedure @ 0x142868 */
uint watcom_crt_fn_142868(void);
/* VA: 0x142878 | Module rt/watcom_crt.cpp procedure @ 0x142878 */
uint watcom_crt_fn_142878(void);
/* VA: 0x142888 | Module rt/watcom_crt.cpp procedure @ 0x142888 */
uint watcom_crt_fn_142888(void);
/* VA: 0x142898 | Module rt/watcom_crt.cpp procedure @ 0x142898 */
uint watcom_crt_fn_142898(void);
/* VA: 0x1428a8 | Module rt/watcom_crt.cpp procedure @ 0x1428a8 */
undefined4 watcom_crt_fn_1428a8(void);
/* VA: 0x1428b8 | Module rt/watcom_crt.cpp procedure @ 0x1428b8 */
uint watcom_crt_fn_1428b8(void);
/* VA: 0x1428c8 | Module rt/watcom_crt.cpp procedure @ 0x1428c8 */
undefined2 watcom_crt_fn_1428c8(void);
/* VA: 0x1428d4 | Module rt/watcom_crt.cpp procedure @ 0x1428d4 */
undefined2 watcom_crt_fn_1428d4(void);
/* VA: 0x1428e0 | Module rt/watcom_crt.cpp procedure @ 0x1428e0 */
void watcom_crt_fn_1428e0(void);
/* VA: 0x1428ec | Module rt/watcom_crt.cpp procedure @ 0x1428ec */
uint watcom_crt_fn_1428ec(void);
/* VA: 0x1428f8 | Module rt/watcom_crt.cpp procedure @ 0x1428f8 */
undefined4 watcom_crt_fn_1428f8(void);
/* VA: 0x142904 | Module rt/watcom_crt.cpp procedure @ 0x142904 */
uint watcom_crt_fn_142904(void);
/* VA: 0x142910 | Module rt/watcom_crt.cpp procedure @ 0x142910 */
uint watcom_crt_fn_142910(void);
/* VA: 0x142920 | Module rt/watcom_crt.cpp procedure @ 0x142920 */
undefined4 watcom_crt_fn_142920(void);
/* VA: 0x14292c | Module rt/watcom_crt.cpp procedure @ 0x14292c */
undefined4 watcom_crt_fn_14292c(void);
/* VA: 0x14293c | Module rt/watcom_crt.cpp procedure @ 0x14293c */
uint watcom_crt_fn_14293c(void);
/* VA: 0x14294c | Module rt/watcom_crt.cpp procedure @ 0x14294c */
uint watcom_crt_fn_14294c(void);
/* VA: 0x14295c | Module rt/watcom_crt.cpp procedure @ 0x14295c */
uint watcom_crt_fn_14295c(void);
/* VA: 0x14296c | Module rt/watcom_crt.cpp procedure @ 0x14296c */
uint watcom_crt_fn_14296c(void);
/* VA: 0x14297c | Module rt/watcom_crt.cpp procedure @ 0x14297c */
uint watcom_crt_fn_14297c(void);
/* VA: 0x14298c | Module rt/watcom_crt.cpp procedure @ 0x14298c */
undefined4 watcom_crt_fn_14298c(void);
/* VA: 0x14299c | Module rt/watcom_crt.cpp procedure @ 0x14299c */
uint watcom_crt_fn_14299c(void);
/* VA: 0x1429ac | Module rt/watcom_crt.cpp procedure @ 0x1429ac */
undefined2 watcom_crt_fn_1429ac(void);
/* VA: 0x1429b8 | Module rt/watcom_crt.cpp procedure @ 0x1429b8 */
undefined2 watcom_crt_fn_1429b8(void);
/* VA: 0x1429c4 | Module rt/watcom_crt.cpp procedure @ 0x1429c4 */
void watcom_crt_fn_1429c4(void);
/* VA: 0x1429d0 | Module rt/watcom_crt.cpp procedure @ 0x1429d0 */
uint watcom_crt_fn_1429d0(void);
/* VA: 0x1429dc | Module rt/watcom_crt.cpp procedure @ 0x1429dc */
undefined4 watcom_crt_fn_1429dc(void);
/* VA: 0x1429e8 | Module rt/watcom_crt.cpp procedure @ 0x1429e8 */
uint watcom_crt_fn_1429e8(void);
/* VA: 0x1429f8 | Module rt/watcom_crt.cpp procedure @ 0x1429f8 */
uint watcom_crt_fn_1429f8(void);
/* VA: 0x142a04 | Module rt/watcom_crt.cpp procedure @ 0x142a04 */
undefined4 watcom_crt_fn_142a04(void);
/* VA: 0x142a10 | Module rt/watcom_crt.cpp procedure @ 0x142a10 */
undefined4 watcom_crt_fn_142a10(void);
/* VA: 0x142a20 | Module rt/watcom_crt.cpp procedure @ 0x142a20 */
uint watcom_crt_fn_142a20(void);
/* VA: 0x142a30 | Module rt/watcom_crt.cpp procedure @ 0x142a30 */
uint watcom_crt_fn_142a30(void);
/* VA: 0x142a40 | Module rt/watcom_crt.cpp procedure @ 0x142a40 */
uint watcom_crt_fn_142a40(void);
/* VA: 0x142a50 | Module rt/watcom_crt.cpp procedure @ 0x142a50 */
undefined4 watcom_crt_fn_142a50(void);
/* VA: 0x142a60 | Module rt/watcom_crt.cpp procedure @ 0x142a60 */
uint watcom_crt_fn_142a60(void);
/* VA: 0x142a70 | Module rt/watcom_crt.cpp procedure @ 0x142a70 */
undefined4 watcom_crt_fn_142a70(void);
/* VA: 0x142a80 | Module rt/watcom_crt.cpp procedure @ 0x142a80 */
uint watcom_crt_fn_142a80(void);
/* VA: 0x142a90 | Module rt/watcom_crt.cpp procedure @ 0x142a90 */
undefined2 watcom_crt_fn_142a90(void);
/* VA: 0x142a9c | Module rt/watcom_crt.cpp procedure @ 0x142a9c */
uint watcom_crt_fn_142a9c(void);
/* VA: 0x142aa8 | Module rt/watcom_crt.cpp procedure @ 0x142aa8 */
void watcom_crt_fn_142aa8(void);
/* VA: 0x142ab4 | Module rt/watcom_crt.cpp procedure @ 0x142ab4 */
uint watcom_crt_fn_142ab4(void);
/* VA: 0x142ac0 | Module rt/watcom_crt.cpp procedure @ 0x142ac0 */
undefined4 watcom_crt_fn_142ac0(void);
/* VA: 0x142acc | Module rt/watcom_crt.cpp procedure @ 0x142acc */
uint watcom_crt_fn_142acc(void);
/* VA: 0x142ad8 | Module rt/watcom_crt.cpp procedure @ 0x142ad8 */
uint watcom_crt_fn_142ad8(void);
/* VA: 0x142ae4 | Module rt/watcom_crt.cpp procedure @ 0x142ae4 */
undefined4 watcom_crt_fn_142ae4(void);
/* VA: 0x142af0 | Module rt/watcom_crt.cpp procedure @ 0x142af0 */
undefined1 * watcom_crt_fn_142af0(void);
/* VA: 0x142b40 | Module rt/watcom_crt.cpp procedure @ 0x142b40 */
undefined1 * watcom_crt_fn_142b40(void);
/* VA: 0x142e13 | Module rt/watcom_crt.cpp procedure @ 0x142e13 */
undefined1 * watcom_crt_fn_142e13(void);
/* VA: 0x142e30 | Module rt/watcom_crt.cpp procedure @ 0x142e30 */
undefined1 * watcom_crt_fn_142e30(void);
/* VA: 0x142e80 | Module rt/watcom_crt.cpp procedure @ 0x142e80 */
undefined1 * watcom_crt_fn_142e80(void);
/* VA: 0x143623 | Module rt/watcom_crt.cpp procedure @ 0x143623 */
undefined1 * watcom_crt_fn_143623(void);
/* VA: 0x143640 | Module rt/watcom_crt.cpp procedure @ 0x143640 */
undefined1 * watcom_crt_fn_143640(void);
/* VA: 0x143684 | Module rt/watcom_crt.cpp procedure @ 0x143684 */
undefined1 * watcom_crt_fn_143684(void);
/* VA: 0x143773 | Module rt/watcom_crt.cpp procedure @ 0x143773 */
undefined1 * watcom_crt_fn_143773(void);
/* VA: 0x143790 | Module rt/watcom_crt.cpp procedure @ 0x143790 */
undefined1 * watcom_crt_fn_143790(void);
/* VA: 0x1437e0 | Module rt/watcom_crt.cpp procedure @ 0x1437e0 */
undefined1 * watcom_crt_fn_1437e0(void);
/* VA: 0x143903 | Module rt/watcom_crt.cpp procedure @ 0x143903 */
undefined1 * watcom_crt_fn_143903(void);
/* VA: 0x143920 | Module rt/watcom_crt.cpp procedure @ 0x143920 */
byte * watcom_crt_fn_143920(undefined4 param_1,int param_2,byte *param_3);
/* VA: 0x143b43 | Module rt/watcom_crt.cpp procedure @ 0x143b43 */
undefined1 * watcom_crt_fn_143b43(void);
/* VA: 0x143bc0 | Module rt/watcom_crt.cpp procedure @ 0x143bc0 */
void watcom_crt_fn_143bc0(void);
/* VA: 0x143cf0 | Module rt/watcom_crt.cpp procedure @ 0x143cf0 */
void watcom_crt_fn_143cf0(uint *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6);
/* VA: 0x144520 | Module rt/watcom_crt.cpp procedure @ 0x144520 */
undefined8 watcom_crt_fn_144520(int param_1,int param_2);
/* VA: 0x144540 | Module rt/watcom_crt.cpp procedure @ 0x144540 */
undefined8 watcom_crt_fn_144540(int param_1,uint *param_2);
/* VA: 0x144660 | Module rt/watcom_crt.cpp procedure @ 0x144660 */
void watcom_crt_fn_144660(int *param_1,undefined1 *param_2);
/* VA: 0x19543e | Module rt/watcom_crt.cpp procedure @ 0x19543e */
void watcom_crt_fn_19543e(char *param_1);

/* === Module: scavenge.cpp (18 functions) === */
/* VA: 0x67018 | Module scavenge.cpp procedure @ 0x067018 */
void scavenge_fn_067018(void);
/* VA: 0x6709c | Module scavenge.cpp procedure @ 0x06709c */
undefined4 scavenge_fn_06709c(void);
/* VA: 0x671e9 | Module scavenge.cpp procedure @ 0x0671e9 */
void scavenge_fn_0671e9(void);
/* VA: 0x6723d | Operates on Room structure in g_rooms (stride 0x45) */
int scavenge_process_dungeon_room_06723d(void);
/* VA: 0x67290 | Accesses per-player Dungeon state (stride 0x1508) */
int scavenge_update_player_dungeon_067290(void);
/* VA: 0x67374 | Module scavenge.cpp procedure @ 0x067374 */
bool scavenge_fn_067374(void);
/* VA: 0x6738b | String 'COULD NOT FIND VALID POSITION FOR THING' */
undefined4 scavenge_could_find_valid_position_06738b(void);
/* VA: 0x67483 | String 'COULD REMOVE CREATURE FROM POOL' */
longlong scavenge_could_remove_creature_pool_067483(void);
/* VA: 0x6757d | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 scavenge_update_creature_and_thing_06757d(void);
/* VA: 0x67861 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong scavenge_update_creature_control_067861(void);
/* VA: 0x67907 | Module scavenge.cpp procedure @ 0x067907 */
undefined8 scavenge_fn_067907(void);
/* VA: 0x67920 | String 'CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DU' */
undefined8 scavenge_take_money_am_supposed_067920(void);
/* VA: 0x67d91 | Module scavenge.cpp procedure @ 0x067d91 */
bool scavenge_fn_067d91(void);
/* VA: 0x67d9f | Module scavenge.cpp procedure @ 0x067d9f */
longlong scavenge_fn_067d9f(void);
/* VA: 0x67e04 | String 'Scavenged room disappeared or no valid position???' */
undefined8 scavenged_room_disappeared_valid_067e04(void);
/* VA: 0x67f79 | Module scavenge.cpp procedure @ 0x067f79 */
longlong scavenge_fn_067f79(void);
/* VA: 0x67fa9 | Module scavenge.cpp procedure @ 0x067fa9 */
undefined8 scavenge_fn_067fa9(void);
/* VA: 0x67fd3 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
longlong scavenge_update_creature_and_thing_067fd3(void);

/* === Module: script.cpp (13 functions) === */
/* VA: 0x6809c | Accesses per-player PlayerInfo state (stride 0x4ef) */
void script_update_player_view_state_06809c(void);
/* VA: 0x682c4 | Module script.cpp procedure @ 0x0682c4 */
void script_fn_0682c4(void);
/* VA: 0x68340 | Module script.cpp procedure @ 0x068340 */
void script_fn_068340(void);
/* VA: 0x68788 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
uint script_update_creature_and_thing_068788(void);
/* VA: 0x68873 | Module script.cpp procedure @ 0x068873 */
void script_fn_068873(undefined4 param_1,undefined4 param_2);
/* VA: 0x688a4 | String 'Party too big' */
int script_party_big_0688a4(void);
/* VA: 0x689a7 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 script_process_thing_entity_0689a7(undefined4 param_1,undefined4 param_2);
/* VA: 0x68ab1 | Module script.cpp procedure @ 0x068ab1 */
void script_fn_068ab1(void);
/* VA: 0x68ac4 | Module script.cpp procedure @ 0x068ac4 */
void script_fn_068ac4(void);
/* VA: 0x68ad7 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void script_process_thing_entity_068ad7(undefined4 param_1,undefined1 param_2,undefined4 param_3);
/* VA: 0x68b37 | Module script.cpp procedure @ 0x068b37 */
void script_fn_068b37(void);
/* VA: 0x68ca7 | Module script.cpp procedure @ 0x068ca7 */
bool script_fn_068ca7(void);
/* VA: 0x68cc0 | Module script.cpp procedure @ 0x068cc0 */
bool script_fn_068cc0(void);

/* === Module: scrsupp.cpp (15 functions) === */
/* VA: 0x68cee | Module scrsupp.cpp procedure @ 0x068cee */
void scrsupp_fn_068cee(void);
/* VA: 0x68d79 | Module scrsupp.cpp procedure @ 0x068d79 */
void scrsupp_fn_068d79(void);
/* VA: 0x6916d | Module scrsupp.cpp procedure @ 0x06916d */
undefined8 scrsupp_fn_06916d(void);
/* VA: 0x691a2 | Module scrsupp.cpp procedure @ 0x0691a2 */
void scrsupp_fn_0691a2(void);
/* VA: 0x69220 | Accesses per-player Dungeon state (stride 0x1508) */
bool scrsupp_update_player_dungeon_069220(void);
/* VA: 0x69268 | String 'Cannot allocate light to new hero' */
undefined2 scrsupp_allocate_light_new_hero_069268(char param_1);
/* VA: 0x694d4 | String 'Script error - could not find hero door' */
undefined2 scrsupp_script_could_find_hero_0694d4(void);
/* VA: 0x6972c | String 'Cannot allocate light to new hero' */
undefined2 scrsupp_allocate_light_new_hero_06972c(void);
/* VA: 0x698d0 | Module scrsupp.cpp procedure @ 0x0698d0 */
undefined4 scrsupp_fn_0698d0(void);
/* VA: 0x698da | String 'SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!' */
undefined4 scrsupp_script_support_dungeon_heart_0698da(void);
/* VA: 0x6992a | String 'SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!' */
bool scrsupp_script_support_dungeon_heart_06992a(void);
/* VA: 0x69987 | String 'SCRIPT SUPPORT - Could not find appropriate dungeon to send ' */
undefined8 scrsupp_script_support_could_find_069987(void);
/* VA: 0x699e0 | Module scrsupp.cpp procedure @ 0x0699e0 */
undefined4 scrsupp_fn_0699e0(void);
/* VA: 0x69a12 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 scrsupp_update_player_view_state_069a12(void);
/* VA: 0x69a41 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void scrsupp_process_thing_entity_069a41(void);

/* === Module: setup.cpp (26 functions) === */
/* VA: 0x69a90 | Initialize colour lookup tables before screen setup */
undefined8 setup_init_color_tables(void);
/* VA: 0x69acb | Precompute palette fade step tables */
undefined8 setup_build_fade_palette_steps(void);
/* VA: 0x69ba0 | Compare two display mode descriptors for compatibility */
undefined4 setup_compare_display_modes(void);
/* VA: 0x69c2c | Map detected physical RAM (MB) to asset caching tier (8/16/24/32 MB) */
longlong setup_detect_physical_memory_tier(void);
/* VA: 0x69c7f | Load VGA 256-color palettes and shade tables from DATA/ */
void setup_load_vga_256_palettes(void);
/* VA: 0x69edc | Load DATA/ALPHA.COL and lighting tables */
void setup_load_alpha_and_light_tables(void);
/* VA: 0x6a356 | Free loaded GUI data/sprite tables (data/gui.dat) */
longlong setup_free_gui_data_files(void);
/* VA: 0x6a412 | Verify installation files and prompt for Dungeon Keeper CD-ROM if missing */
longlong setup_verify_cdrom_installation(void);
/* VA: 0x6a553 | Load core game data files via LbDataLoadAll */
longlong setup_load_core_game_data(void);
/* VA: 0x6a652 | Shutdown sound, timer, and LbScreenReset on game exit */
void setup_shutdown_video_and_audio(void);
/* VA: 0x6a689 | Initialize VESA/VGA screen mode (disallow MCGA minimal) and game subsystems */
undefined8 setup_init_game_screen_and_subsystems(void);
/* VA: 0x6aac0 | Reload GUI sprite tables (data/gui.dat) for current screen resolution */
undefined8 setup_reload_gui_and_mode_sprites(void);
/* VA: 0x6adc5 | Load localized text strings from DATA/TEXT.DAT */
void setup_load_text_strings_dat(void);
/* VA: 0x6ae14 | Zero out array of pointers */
void setup_clear_pointer_array(void);
/* VA: 0x6ae37 | Clear full screen backbuffer (g_screen_width * g_screen_height) */
void setup_clear_screen_backbuffer(void);
/* VA: 0x6ae80 | Load and display LOADING.RAW splash screen with palette */
void setup_show_loading_raw_screen(void);
/* VA: 0x6b04d | Initialize mouse driver and cursor pointer */
void setup_init_mouse_and_pointer(void);
/* VA: 0x6b0c8 | Load mouse pointer sprite sheet (data/hpointer.dat) */
void setup_load_pointer_sprites(void);
/* VA: 0x6b12b | Detach mouse cursor and free pointer sprite sheet */
void setup_free_pointer_sprites(void);
/* VA: 0x6b16f | Allocate and initialize sprite/texture graphics heap */
longlong setup_allocate_graphics_heap(void);
/* VA: 0x6b4c7 | Enter 640x480 mode (0x0d) and display DATA/LEGAL.RAW splash */
undefined8 setup_show_bullfrog_legal_splash(void);
/* VA: 0x6b7d0 | Initialize 512-entry trigonometry/projection lookup tables */
undefined8 setup_init_trig_and_projection_tables(void);
/* VA: 0x6b820 | Switch active screen mode, reallocate viewport, and reload sprites */
void setup_switch_screen_resolution(undefined1 param_1);
/* VA: 0x6bdda | Compute first-person camera eye height offset for creature breed */
undefined4 setup_compute_creature_eye_offset(void);
/* VA: 0x6c22b | Interpolate head-bob offset during creature possession movement */
int setup_interpolate_creature_eye_bob(void);
/* VA: 0x6c2cc | Configure eye lens effect and camera height when entering possession */
undefined4 setup_apply_possession_lens_and_eye(void);

/* === Module: shot.cpp (21 functions) === */
/* VA: 0x6c444 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 shot_update_creature_and_thing_06c444(void);
/* VA: 0x6c681 | Updates 3x3 subtile map entries for slab coordinates */
void shot_update_slab_subtile_columns_06c681(void);
/* VA: 0x6ca16 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 shot_process_thing_entity_06ca16(void);
/* VA: 0x6cee6 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
undefined4 shot_process_thing_entity_06cee6(void);
/* VA: 0x6d0a8 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 shot_update_creature_control_06d0a8(void);
/* VA: 0x6d114 | String 'Attempt to kill non handled object' */
undefined4 shot_attempt_kill_non_handled_06d114(void);
/* VA: 0x6d223 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void shot_update_creature_control_06d223(void);
/* VA: 0x6d334 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 shot_update_creature_control_06d334(void);
/* VA: 0x6d39c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 shot_update_creature_control_06d39c(void);
/* VA: 0x6d3e1 | Checks Thing->class_id == 5 (Creature) and processes state */
longlong shot_handle_creature_thing_06d3e1(void);
/* VA: 0x6d424 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong shot_update_creature_control_06d424(void);
/* VA: 0x6d453 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 shot_update_creature_control_06d453(void);
/* VA: 0x6d4df | Evaluates deterministic lockstep PRNG (g_action_random_seed) */
longlong shot_roll_action_random_06d4df(void);
/* VA: 0x6d668 | String 'Cannot find boulder wall hug angle!' */
undefined4 shot_find_boulder_wall_hug_06d668(void);
/* VA: 0x6d7d5 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void shot_update_creature_control_06d7d5(void);
/* VA: 0x6d8b6 | Module shot.cpp procedure @ 0x06d8b6 */
undefined4 shot_fn_06d8b6(void);
/* VA: 0x6d909 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 shot_update_slab_subtile_columns_06d909(void);
/* VA: 0x6da70 | Module shot.cpp procedure @ 0x06da70 */
undefined8 shot_fn_06da70(void);
/* VA: 0x6da97 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 shot_update_creature_and_thing_06da97(void);
/* VA: 0x6db51 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 shot_update_creature_control_06db51(void);
/* VA: 0x6dda0 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
ulonglong shot_update_creature_control_06dda0(void);

/* === Module: slab.cpp (31 functions) === */
/* VA: 0xd6760 | Reads/modifies Map[256x256] subtile data */
int slab_process_map_subtile_0d6760(void);
/* VA: 0xd6c20 | Reads/modifies Map[256x256] subtile data */
uint slab_process_map_subtile_0d6c20(int param_1);
/* VA: 0xd7090 | Reads/modifies Map[256x256] subtile data */
void slab_process_map_subtile_0d7090(void);
/* VA: 0xd72f8 | Updates 3x3 subtile map entries for slab coordinates */
void slab_update_slab_subtile_columns_0d72f8(byte param_1);
/* VA: 0xd7688 | String 'Attempt to place animating slab as standard slab' */
void slab_attempt_place_animating_slab_0d7688(char param_1);
/* VA: 0xd7dac | String 'Illegal special case!!!' */
void slab_illegal_special_case_0d7dac(void);
/* VA: 0xd8974 | Updates 3x3 subtile map entries for slab coordinates */
void slab_update_slab_subtile_columns_0d8974(void);
/* VA: 0xd8b7c | String 'Attempt to dump an invalid animating slab: %d' */
void slab_attempt_dump_an_animating_0d8b7c(byte param_1);
/* VA: 0xd8cdc | String 'Illegal animating slab number: %d' */
void slab_illegal_animating_slab_number_0d8cdc(void);
/* VA: 0xd916c | Reads/modifies Map[256x256] subtile data */
void slab_process_map_subtile_0d916c(void);
/* VA: 0xd9338 | Reads/modifies SlabMap[85x85] tile entry */
int slab_process_slabmap_tile_0d9338(void);
/* VA: 0xd9418 | Reads/modifies SlabMap[85x85] tile entry */
char slab_process_slabmap_tile_0d9418(void);
/* VA: 0xd9600 | Module slab.cpp procedure @ 0x0d9600 */
longlong slab_fn_0d9600(void);
/* VA: 0xd9640 | Module slab.cpp procedure @ 0x0d9640 */
longlong slab_fn_0d9640(void);
/* VA: 0xd96c0 | Reads/modifies Map[256x256] subtile data */
void slab_process_map_subtile_0d96c0(void);
/* VA: 0xd988c | Reads/modifies SlabMap[85x85] tile entry */
void slab_process_slabmap_tile_0d988c(void);
/* VA: 0xd99f8 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 slab_process_slabmap_tile_0d99f8(void);
/* VA: 0xd9dc0 | Reads/modifies SlabMap[85x85] tile entry */
char slab_process_slabmap_tile_0d9dc0(void);
/* VA: 0xd9fa4 | Reads/modifies SlabMap[85x85] tile entry */
char slab_process_slabmap_tile_0d9fa4(void);
/* VA: 0xda030 | Reads/modifies SlabMap[85x85] tile entry */
char slab_process_slabmap_tile_0da030(void);
/* VA: 0xda0bc | Reads/modifies SlabMap[85x85] tile entry */
uint slab_process_slabmap_tile_0da0bc(void);
/* VA: 0xda2a8 | Reads/modifies SlabMap[85x85] tile entry */
uint slab_process_slabmap_tile_0da2a8(void);
/* VA: 0xda4b8 | Reads/modifies Map[256x256] subtile data */
void slab_process_map_subtile_0da4b8(void);
/* VA: 0xda67c | Module slab.cpp procedure @ 0x0da67c */
undefined8 slab_fn_0da67c(void);
/* VA: 0xda698 | Reads/modifies SlabMap[85x85] tile entry */
undefined4 slab_process_slabmap_tile_0da698(void);
/* VA: 0xda6fc | Reads/modifies SlabMap[85x85] tile entry */
void slab_process_slabmap_tile_0da6fc(void);
/* VA: 0xda7bc | Reads/modifies SlabMap[85x85] tile entry */
void slab_process_slabmap_tile_0da7bc(void);
/* VA: 0xdab3c | Reads/modifies SlabMap[85x85] tile entry */
void slab_process_slabmap_tile_0dab3c(void);
/* VA: 0xdacf0 | String 'Could not find a nearby space for thing C%d M%d' */
undefined8 slab_could_find_nearby_space_0dacf0(void);
/* VA: 0xdae68 | Reads/modifies Map[256x256] subtile data */
void slab_process_map_subtile_0dae68(void);
/* VA: 0xdafb0 | Reads/modifies Map[256x256] subtile data */
void slab_process_map_subtile_0dafb0(void);

/* === Module: sndheap.cpp (13 functions) === */
/* VA: 0x6ddd9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong sndheap_update_creature_control_06ddd9(void);
/* VA: 0x6de03 | Module sndheap.cpp procedure @ 0x06de03 */
undefined8 sndheap_fn_06de03(void);
/* VA: 0x6de0a | Module sndheap.cpp procedure @ 0x06de0a */
undefined4 sndheap_fn_06de0a(void);
/* VA: 0x6deac | Module sndheap.cpp procedure @ 0x06deac */
undefined4 sndheap_fn_06deac(undefined4 param_1);
/* VA: 0x6df91 | Module sndheap.cpp procedure @ 0x06df91 */
void sndheap_fn_06df91(void);
/* VA: 0x6dfd3 | Module sndheap.cpp procedure @ 0x06dfd3 */
void sndheap_fn_06dfd3(void);
/* VA: 0x6e09b | String 'Trying to use two sound banks when only one has been set up' */
void sndheap_trying_use_two_sound_06e09b(void);
/* VA: 0x6e159 | String 'Trying to use two sound banks when only one has been set up' */
int sndheap_trying_use_two_sound_06e159(undefined2 param_1,char param_2,undefined1 param_3,char param_4);
/* VA: 0x6e253 | String 'Trying to use two sound banks when only one has been set up' */
undefined4 sndheap_trying_use_two_sound_06e253(void);
/* VA: 0x6e294 | Module sndheap.cpp procedure @ 0x06e294 */
void sndheap_fn_06e294(void);
/* VA: 0x6e2aa | String 'Trying to use two sound banks when only one has been set up' */
undefined4 sndheap_trying_use_two_sound_06e2aa(void);
/* VA: 0x6e39b | Module sndheap.cpp procedure @ 0x06e39b */
undefined4 sndheap_fn_06e39b(void);
/* VA: 0x6e3d5 | Module sndheap.cpp procedure @ 0x06e3d5 */
undefined4 sndheap_fn_06e3d5(int param_1);

/* === Module: sound.cpp (30 functions) === */
/* VA: 0x6e538 | Module sound.cpp procedure @ 0x06e538 */
void sound_fn_06e538(char param_1,byte param_2,undefined4 param_3,undefined4 param_4);
/* VA: 0x6e5ee | Module sound.cpp procedure @ 0x06e5ee */
void sound_fn_06e5ee(void);
/* VA: 0x6e61e | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void sound_update_creature_control_06e61e(void);
/* VA: 0x6e8fc | String 'No room ambient sound object' */
void sound_room_ambient_sound_object_06e8fc(void);
/* VA: 0x6e9ab | String 'Non 3d Emitter has been deleted!' */
void sound_non_emitter_has_been_06e9ab(void);
/* VA: 0x6ea5a | String 'Non 3d Emitter has been deleted!' */
void sound_non_emitter_has_been_06ea5a(void);
/* VA: 0x6eb1a | String 'Speech Emitter has been deleted!' */
longlong sound_speech_emitter_has_been_06eb1a(void);
/* VA: 0x6ebff | String 'Speech Emitter has been deleted!' */
longlong sound_speech_emitter_has_been_06ebff(void);
/* VA: 0x6ec63 | Module sound.cpp procedure @ 0x06ec63 */
undefined4 sound_fn_06ec63(void);
/* VA: 0x6ec6f | Module sound.cpp procedure @ 0x06ec6f */
void sound_fn_06ec6f(void);
/* VA: 0x6ecd0 | Module sound.cpp procedure @ 0x06ecd0 */
undefined * sound_fn_06ecd0(void);
/* VA: 0x6edb9 | Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed) */
void sound_roll_unsynced_random_06edb9(void);
/* VA: 0x6ee65 | Module sound.cpp procedure @ 0x06ee65 */
void sound_fn_06ee65(void);
/* VA: 0x6eeaf | Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed) */
void sound_roll_unsynced_random_06eeaf(void);
/* VA: 0x6ef5a | Module sound.cpp procedure @ 0x06ef5a */
void sound_fn_06ef5a(void);
/* VA: 0x6f0cd | String 'Simon says Hi to everyone he knows...' */
void sound_simon_says_hi_everyone_06f0cd(void);
/* VA: 0x6f3d6 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void sound_process_thing_entity_06f3d6(void);
/* VA: 0x6f4c8 | Module sound.cpp procedure @ 0x06f4c8 */
undefined8 sound_fn_06f4c8(void);
/* VA: 0x6f51e | Module sound.cpp procedure @ 0x06f51e */
undefined4 sound_fn_06f51e(void);
/* VA: 0x6f541 | Module sound.cpp procedure @ 0x06f541 */
undefined4 sound_fn_06f541(void);
/* VA: 0x6f5e5 | Module sound.cpp procedure @ 0x06f5e5 */
uint sound_fn_06f5e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
/* VA: 0x6f653 | Module sound.cpp procedure @ 0x06f653 */
undefined8 sound_fn_06f653(void);
/* VA: 0x6f671 | Module sound.cpp procedure @ 0x06f671 */
undefined8 sound_fn_06f671(void);
/* VA: 0x6f69c | Module sound.cpp procedure @ 0x06f69c */
undefined4 sound_fn_06f69c(void);
/* VA: 0x6f6b8 | Module sound.cpp procedure @ 0x06f6b8 */
bool sound_fn_06f6b8(void);
/* VA: 0x6f6fa | Module sound.cpp procedure @ 0x06f6fa */
bool sound_fn_06f6fa(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4, undefined4 param_5);
/* VA: 0x6f7b2 | Module sound.cpp procedure @ 0x06f7b2 */
undefined8 sound_fn_06f7b2(void);
/* VA: 0x6f865 | Module sound.cpp procedure @ 0x06f865 */
undefined4 sound_fn_06f865(void);
/* VA: 0x6f8b7 | Module sound.cpp procedure @ 0x06f8b7 */
longlong sound_fn_06f8b7(void);
/* VA: 0x6f974 | Module sound.cpp procedure @ 0x06f974 */
undefined4 sound_fn_06f974(void);

/* === Module: sound3d.cpp (28 functions) === */
/* VA: 0x6f6ca | Module sound3d.cpp procedure @ 0x06f6ca */
bool sound3d_fn_06f6ca(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4);
/* VA: 0x6f72b | Module sound3d.cpp procedure @ 0x06f72b */
undefined4 sound3d_fn_06f72b(void);
/* VA: 0x6f816 | Module sound3d.cpp procedure @ 0x06f816 */
undefined4 sound3d_fn_06f816(void);
/* VA: 0x6f82f | Module sound3d.cpp procedure @ 0x06f82f */
undefined4 sound3d_fn_06f82f(void);
/* VA: 0x6f859 | Module sound3d.cpp procedure @ 0x06f859 */
void sound3d_fn_06f859(void);
/* VA: 0x6f85f | Module sound3d.cpp procedure @ 0x06f85f */
void sound3d_fn_06f85f(void);
/* VA: 0x6f8f7 | Module sound3d.cpp procedure @ 0x06f8f7 */
void sound3d_fn_06f8f7(void);
/* VA: 0x6f8fd | Module sound3d.cpp procedure @ 0x06f8fd */
undefined8 sound3d_fn_06f8fd(void);
/* VA: 0x6f968 | Module sound3d.cpp procedure @ 0x06f968 */
void sound3d_fn_06f968(void);
/* VA: 0x6f98e | String 'Attempt to query invalid sample' */
undefined8 sound3d_attempt_query_sample_06f98e(void);
/* VA: 0x6faa0 | Module sound3d.cpp procedure @ 0x06faa0 */
undefined4 sound3d_fn_06faa0(int param_1,char param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5);
/* VA: 0x6fba3 | Module sound3d.cpp procedure @ 0x06fba3 */
longlong sound3d_fn_06fba3(void);
/* VA: 0x6fbd4 | Module sound3d.cpp procedure @ 0x06fbd4 */
undefined4 sound3d_fn_06fbd4(undefined4 *param_1);
/* VA: 0x6fca5 | Module sound3d.cpp procedure @ 0x06fca5 */
undefined4 sound3d_fn_06fca5(void);
/* VA: 0x6fd5c | Module sound3d.cpp procedure @ 0x06fd5c */
void sound3d_fn_06fd5c(void);
/* VA: 0x6fd80 | Module sound3d.cpp procedure @ 0x06fd80 */
longlong sound3d_fn_06fd80(void);
/* VA: 0x6fda2 | Module sound3d.cpp procedure @ 0x06fda2 */
int sound3d_fn_06fda2(void);
/* VA: 0x6fe93 | Module sound3d.cpp procedure @ 0x06fe93 */
undefined1 sound3d_fn_06fe93(void);
/* VA: 0x6ff36 | Module sound3d.cpp procedure @ 0x06ff36 */
void sound3d_fn_06ff36(void);
/* VA: 0x6ff7f | Module sound3d.cpp procedure @ 0x06ff7f */
undefined8 sound3d_fn_06ff7f(void);
/* VA: 0x6ffd9 | Module sound3d.cpp procedure @ 0x06ffd9 */
undefined8 sound3d_fn_06ffd9(void);
/* VA: 0x70050 | Module sound3d.cpp procedure @ 0x070050 */
longlong sound3d_fn_070050(void);
/* VA: 0x70080 | Module sound3d.cpp procedure @ 0x070080 */
void sound3d_fn_070080(void);
/* VA: 0x700a0 | Module sound3d.cpp procedure @ 0x0700a0 */
void sound3d_fn_0700a0(void);
/* VA: 0x700b8 | Module sound3d.cpp procedure @ 0x0700b8 */
void sound3d_fn_0700b8(void);
/* VA: 0x700ec | Module sound3d.cpp procedure @ 0x0700ec */
char sound3d_fn_0700ec(int param_1);
/* VA: 0x7019c | Module sound3d.cpp procedure @ 0x07019c */
void sound3d_fn_07019c(void);
/* VA: 0x701c2 | Module sound3d.cpp procedure @ 0x0701c2 */
void sound3d_fn_0701c2(void);

/* === Module: specials.cpp (31 functions) === */
/* VA: 0x701e3 | Module specials.cpp procedure @ 0x0701e3 */
int specials_fn_0701e3(void);
/* VA: 0x701ed | Module specials.cpp procedure @ 0x0701ed */
int specials_fn_0701ed(void);
/* VA: 0x701f2 | Module specials.cpp procedure @ 0x0701f2 */
undefined4 specials_fn_0701f2(void);
/* VA: 0x70234 | Module specials.cpp procedure @ 0x070234 */
int specials_fn_070234(void);
/* VA: 0x7027c | Checks Thing->class_id == 1 (Object) and processes state */
longlong specials_handle_object_thing_07027c(void);
/* VA: 0x702e6 | Module specials.cpp procedure @ 0x0702e6 */
void specials_fn_0702e6(void);
/* VA: 0x70320 | Configures font/flags and draws text on screen */
void specials_draw_text_overlay_070320(void);
/* VA: 0x704af | Module specials.cpp procedure @ 0x0704af */
void specials_fn_0704af(void);
/* VA: 0x704bf | Accesses per-player Dungeon state (stride 0x1508) */
void specials_update_player_dungeon_0704bf(void);
/* VA: 0x704e3 | Updates GUI button enabled bit (0x08) */
void specials_maintain_gui_button_state_0704e3(void);
/* VA: 0x70550 | Accesses per-player Dungeon state (stride 0x1508) */
void specials_update_player_dungeon_070550(void);
/* VA: 0x705fd | Updates GUI button enabled bit (0x08) */
void specials_maintain_gui_button_state_0705fd(void);
/* VA: 0x7062d | Configures font/flags and draws text on screen */
void specials_draw_text_overlay_07062d(void);
/* VA: 0x7077c | Updates GUI button enabled bit (0x08) */
void specials_maintain_gui_button_state_07077c(void);
/* VA: 0x707a3 | Module specials.cpp procedure @ 0x0707a3 */
void specials_fn_0707a3(void);
/* VA: 0x707b3 | Accesses per-player Dungeon state (stride 0x1508) */
void specials_update_player_dungeon_0707b3(void);
/* VA: 0x707d6 | Updates GUI button enabled bit (0x08) */
void specials_maintain_gui_button_state_0707d6(void);
/* VA: 0x7083a | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void specials_update_creature_and_thing_07083a(void);
/* VA: 0x708fa | String 'Invalid dungeon special (Model %d)' */
void specials_dungeon_special_model_0708fa(void);
/* VA: 0x70a3c | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined1 specials_update_player_view_state_070a3c(void);
/* VA: 0x70ac6 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void specials_update_creature_control_070ac6(void);
/* VA: 0x70bf9 | Module specials.cpp procedure @ 0x070bf9 */
undefined4 specials_fn_070bf9(void);
/* VA: 0x70c0c | Module specials.cpp procedure @ 0x070c0c */
void specials_fn_070c0c(void);
/* VA: 0x70c96 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void specials_update_creature_and_thing_070c96(void);
/* VA: 0x70d0d | String 'No Bonus level assigned to this level' */
void specials_bonus_level_assigned_this_070d0d(void);
/* VA: 0x70d86 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void specials_update_creature_and_thing_070d86(void);
/* VA: 0x70e59 | Reads/modifies SlabMap[85x85] tile entry */
void specials_process_slabmap_tile_070e59(void);
/* VA: 0x711f3 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 specials_update_creature_and_thing_0711f3(void);
/* VA: 0x71312 | Accesses per-player Dungeon state (stride 0x1508) */
void specials_update_player_dungeon_071312(void);
/* VA: 0x71367 | Accesses per-player Dungeon state (stride 0x1508) */
void specials_update_player_dungeon_071367(void);
/* VA: 0x713bc | Module specials.cpp procedure @ 0x0713bc */
void specials_fn_0713bc(void);

/* === Module: spell.cpp (13 functions) === */
/* VA: 0x713cc | String 'NO SPELL OF TYPE ON THING' */
int spell_type_thing_0713cc(void);
/* VA: 0x71416 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void spell_update_creature_control_071416(void);
/* VA: 0x7159b | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 spell_update_creature_control_07159b(void);
/* VA: 0x71601 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void spell_update_creature_control_071601(void);
/* VA: 0x717de | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void spell_update_creature_control_0717de(void);
/* VA: 0x71e97 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void spell_update_creature_and_thing_071e97(void);
/* VA: 0x71edd | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void spell_update_creature_control_071edd(void);
/* VA: 0x720ce | Accesses CreatureControl state in g_creature_ctrl_ptrs */
int spell_update_creature_control_0720ce(void);
/* VA: 0x72109 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void spell_update_creature_control_072109(undefined1 param_1);
/* VA: 0x7220a | Checks Thing->class_id == 1 (Object) and processes state */
void spell_handle_object_thing_07220a(void);
/* VA: 0x7225e | String 'Could not find teleport destination for creature' */
void spell_could_find_teleport_destination_07225e(void);
/* VA: 0x7231c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void spell_update_creature_control_07231c(void);
/* VA: 0x72739 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void spell_update_creature_control_072739(void);

/* === Module: ssprite.cpp (25 functions) === */
/* VA: 0xdb120 | Initialize scaled sprite renderer state variables */
void ssprite_clear_render_state(int param_1,undefined4 param_2,undefined4 param_3);
/* VA: 0xdb1a4 | Decode and blit RLE-compressed sprite frame from TbSprite table */
void ssprite_decode_and_blit_rle_frame(void);
/* VA: 0xdb5c4 | Resolve animation graphic ID for Thing model/class with bounds logging */
void get_thing_anim_sprite_id_checked(void);
/* VA: 0xdbb70 | Update animation sprite for neutral (owner 5) Thing */
void update_neutral_thing_anim_sprite(void);
/* VA: 0xdbb84 | Advance and validate Thing animation sprite frame */
void update_thing_anim_sprite_frame(void);
/* VA: 0xdc0e0 | Empty sprite callback stub */
void ssprite_noop_stub(void);
/* VA: 0xdc0f0 | Scale base stat value by creature experience level (10% per level) */
int scale_value_by_creature_level(void);
/* VA: 0xdc150 | Calculate scaled bottom Y coordinate of 3D viewport */
undefined8 get_scaled_viewport_bottom_y(void);
/* VA: 0xdc184 | XOR a bit in g_player_view_flags for player_idx */
void toggle_player_view_flag_bit(void);
/* VA: 0xdc19c | Check if (subtile_x, subtile_y) is within 0..254 and revealed to player */
undefined4 is_subtile_revealed_and_within_bounds(void);
/* VA: 0xdc2c8 | Compute 2D octile/box distance between (x1, y1) and (x2, y2) */
int get_2d_box_distance_xy(void);
/* VA: 0xdc324 | Compute 2D squared Euclidean distance between two Coord3d positions */
int get_2d_squared_distance(void);
/* VA: 0xdc354 | Compute 2D octile/box distance between two Coord3d positions */
int get_2d_box_distance(void);
/* VA: 0xdc3c0 | Compute 3D octile/box distance between two Coord3d positions */
int get_3d_box_distance(void);
/* VA: 0xdc4a0 | Compute Chebyshev max(|dx|, |dy|) distance between (x1, y1) and (x2, y2) */
int get_chessboard_distance_xy(void);
/* VA: 0xdc4cc | Compute 2D angle (0..2047) from pos1 to pos2 */
uint get_2d_angle_between_positions(void);
/* VA: 0xdc5c4 | Compute horizontal and vertical angles from pos1 to pos2 */
uint get_3d_angles_between_positions(void);
/* VA: 0xdc800 | Scanline RLE sprite blitter helper (alpha/remap mode 0) */
return ssprite_blit_span_alpha_mode0((int3);
/* VA: 0xdc859 | Scanline RLE sprite blitter helper (alpha/remap mode 1) */
uint ssprite_blit_span_alpha_mode1(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
/* VA: 0xdc8ad | Scanline RLE sprite blitter helper (alpha/remap mode 2) */
uint ssprite_blit_span_alpha_mode2(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
/* VA: 0xdc8f9 | Scanline RLE sprite blitter helper (alpha/remap mode 3) */
uint ssprite_blit_span_alpha_mode3(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
/* VA: 0xdc95a | Constant true (1) return stub */
undefined1 ssprite_return_true_stub(void);
/* VA: 0xdc984 | Advance Coord3d position along angle and speed with map bounds clamp */
undefined4 move_coord3d_along_angle_checked(void);
/* VA: 0xdccfc | Check whether Thing can move through target subtile */
undefined8 can_thing_traverse_subtile(void);
/* VA: 0xdcd44 | Raymarch 2D line of sight between two Coord3d positions */
uint trace_line_of_sight_2d(void);

/* === Module: structs.cpp (20 functions) === */
/* VA: 0x72810 | Module structs.cpp procedure @ 0x072810 */
void structs_fn_072810(void);
/* VA: 0x72829 | String 'Cannot allocate thing structure.' */
longlong structs_allocate_thing_structure_072829(void);
/* VA: 0x728c2 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong structs_update_creature_control_0728c2(void);
/* VA: 0x728e9 | Operates on Room structure in g_rooms (stride 0x45) */
longlong structs_process_dungeon_room_0728e9(void);
/* VA: 0x7290f | String 'Cannot even free up effect thing!' */
longlong structs_even_free_up_effect_07290f(void);
/* VA: 0x7299d | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong structs_update_creature_control_07299d(void);
/* VA: 0x729ff | Operates on Room structure in g_rooms (stride 0x45) */
longlong structs_process_dungeon_room_0729ff(void);
/* VA: 0x72a39 | Module structs.cpp procedure @ 0x072a39 */
longlong structs_fn_072a39(void);
/* VA: 0x72a7a | String 'Attempt to allocate action point over old one' */
longlong structs_attempt_allocate_action_point_072a7a(void);
/* VA: 0x72af4 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void structs_update_creature_control_072af4(void);
/* VA: 0x72c14 | Module structs.cpp procedure @ 0x072c14 */
void structs_fn_072c14(void);
/* VA: 0x72c25 | Operates on Room structure in g_rooms (stride 0x45) */
void structs_process_dungeon_room_072c25(void);
/* VA: 0x72cb0 | Module structs.cpp procedure @ 0x072cb0 */
void structs_fn_072cb0(void);
/* VA: 0x72cca | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void structs_process_thing_entity_072cca(void);
/* VA: 0x72d1a | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void structs_update_creature_control_072d1a(void);
/* VA: 0x72d44 | Accesses per-player Dungeon state (stride 0x1508) */
void structs_update_player_dungeon_072d44(void);
/* VA: 0x72d6a | Module structs.cpp procedure @ 0x072d6a */
void structs_fn_072d6a(void);
/* VA: 0x72d90 | String 'Thing is already in list' */
void structs_thing_already_list_072d90(void);
/* VA: 0x72de3 | String 'List has < 0 structures' */
void structs_list_has_structures_072de3(void);
/* VA: 0x72e88 | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 structs_update_player_dungeon_072e88(void);

/* === Module: temple.cpp (21 functions) === */
/* VA: 0x72eab | String 'NO CREATURES IN TEMPLE' */
longlong temple_creatures_temple_072eab(void);
/* VA: 0x72ef7 | Module temple.cpp procedure @ 0x072ef7 */
undefined8 temple_fn_072ef7(void);
/* VA: 0x72f08 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 temple_update_creature_control_072f08(void);
/* VA: 0x72f52 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined4 temple_update_creature_control_072f52(void);
/* VA: 0x72fbc | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 temple_update_creature_control_072fbc(void);
/* VA: 0x73038 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong temple_update_creature_control_073038(void);
/* VA: 0x730e8 | Module temple.cpp procedure @ 0x0730e8 */
longlong temple_fn_0730e8(void);
/* VA: 0x7314d | Accesses per-player Dungeon state (stride 0x1508) */
longlong temple_update_player_dungeon_07314d(void);
/* VA: 0x7317c | String 'COULD NOT CREATE CREATURE' */
undefined4 temple_could_create_creature_07317c(void);
/* VA: 0x731f3 | String 'HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?' */
undefined4 temple_how_you_sacrifice_neutral_0731f3(void);
/* VA: 0x735c4 | String 'HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?' */
void temple_how_you_sacrifice_neutral_0735c4(void);
/* VA: 0x73607 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 temple_update_creature_control_073607(void);
/* VA: 0x73765 | String 'INVALID SACRIFICE RETURN' */
undefined8 temple_sacrifice_return_073765(void);
/* VA: 0x738d1 | Module temple.cpp procedure @ 0x0738d1 */
undefined8 temple_fn_0738d1(void);
/* VA: 0x738f2 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong temple_update_creature_control_0738f2(void);
/* VA: 0x739b9 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 temple_update_slab_subtile_columns_0739b9(void);
/* VA: 0x73d41 | String 'THIS SHOULD NOT HAPPEN' */
undefined4 temple_this_should_happen_073d41(void);
/* VA: 0x73d8d | Reads/modifies SlabMap[85x85] tile entry */
void temple_process_slabmap_tile_073d8d(void);
/* VA: 0x73fa8 | Module temple.cpp procedure @ 0x073fa8 */
void temple_fn_073fa8(void);
/* VA: 0x73fb9 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 temple_update_creature_control_073fb9(void);
/* VA: 0x74020 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined1 * temple_update_player_view_state_074020(void);

/* === Module: torture.cpp (14 functions) === */
/* VA: 0x74038 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 torture_update_slab_subtile_columns_074038(void);
/* VA: 0x7436a | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 torture_update_creature_and_thing_07436a(void);
/* VA: 0x7443f | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined4 torture_update_creature_and_thing_07443f(void);
/* VA: 0x744bf | Module torture.cpp procedure @ 0x0744bf */
bool torture_fn_0744bf(void);
/* VA: 0x744d5 | String 'MOVE FAILED IN TORTURE' */
undefined4 torture_move_torture_0744d5(void);
/* VA: 0x74616 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong torture_update_creature_control_074616(void);
/* VA: 0x746e4 | String 'NO CENTRE TABLE FOR TORTURE' */
undefined4 torture_centre_table_torture_0746e4(void);
/* VA: 0x74853 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 torture_update_creature_control_074853(void);
/* VA: 0x74b25 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong torture_update_creature_control_074b25(void);
/* VA: 0x74b82 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 torture_update_creature_and_thing_074b82(void);
/* VA: 0x74c0d | String 'COULDN'T CREATE GHOST IN TORTURE ROOM' */
void torture_couldn_create_ghost_torture_074c0d(void);
/* VA: 0x74d13 | Module torture.cpp procedure @ 0x074d13 */
longlong torture_fn_074d13(void);
/* VA: 0x74d42 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong torture_update_creature_control_074d42(void);
/* VA: 0x74dde | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 torture_update_creature_control_074dde(void);

/* === Module: train.cpp (8 functions) === */
/* VA: 0x74e70 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 train_update_creature_control_074e70(void);
/* VA: 0x74f40 | String 'CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DU' */
undefined8 train_take_money_am_supposed_074f40(void);
/* VA: 0x750f8 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void train_update_creature_and_thing_0750f8(void);
/* VA: 0x7523a | String 'Illegal setup to X%d Y%d' */
void train_illegal_setup_07523a(void);
/* VA: 0x752c3 | String 'Cannot get where we're going in the training room.' */
uint train_get_where_we_re_0752c3(void);
/* VA: 0x759cc | Updates 3x3 subtile map entries for slab coordinates */
void train_update_slab_subtile_columns_0759cc(void);
/* VA: 0x75b1e | Module train.cpp procedure @ 0x075b1e */
undefined8 train_fn_075b1e(void);
/* VA: 0x75b48 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong train_update_creature_control_075b48(void);

/* === Module: trap.cpp (14 functions) === */
/* VA: 0x75ba4 | String 'Illegal trap trigger type' */
void trap_illegal_trap_trigger_type_075ba4(void);
/* VA: 0x75c30 | Reads/modifies Map[256x256] subtile data */
undefined8 trap_process_map_subtile_075c30(void);
/* VA: 0x761cd | Reads/modifies Map[256x256] subtile data */
undefined8 trap_process_map_subtile_0761cd(void);
/* VA: 0x76319 | String 'Illegal trap activation type' */
void trap_illegal_trap_activation_type_076319(void);
/* VA: 0x763d4 | String 'Trap activation of shot 0' */
void trap_activation_shot_0763d4(void);
/* VA: 0x76569 | String 'Trap activation of shot 0' */
void trap_activation_shot_076569(void);
/* VA: 0x76643 | String 'Trap activation of effect 0' */
void trap_activation_effect_076643(void);
/* VA: 0x7668c | String 'Trap activation of shot 0' */
void trap_activation_shot_07668c(void);
/* VA: 0x766fa | Module trap.cpp procedure @ 0x0766fa */
void trap_fn_0766fa(void);
/* VA: 0x76753 | Reads/modifies Map[256x256] subtile data */
uint trap_process_map_subtile_076753(void);
/* VA: 0x76789 | Reads/modifies Map[256x256] subtile data */
uint trap_process_map_subtile_076789(void);
/* VA: 0x767f1 | Module trap.cpp procedure @ 0x0767f1 */
undefined8 trap_fn_0767f1(void);
/* VA: 0x76800 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
void trap_process_thing_entity_076800(void);
/* VA: 0x768c6 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
int trap_process_thing_entity_0768c6(void);

/* === Module: update.cpp (49 functions) === */
/* VA: 0xdc440 | Module update.cpp procedure @ 0x0dc440 */
int update_fn_0dc440(void);
/* VA: 0xdd20c | Module update.cpp procedure @ 0x0dd20c */
uint update_fn_0dd20c(void);
/* VA: 0xdd2f0 | Module update.cpp procedure @ 0x0dd2f0 */
uint update_fn_0dd2f0(void);
/* VA: 0xdd380 | Module update.cpp procedure @ 0x0dd380 */
undefined4 update_fn_0dd380(int *param_1);
/* VA: 0xdd414 | Module update.cpp procedure @ 0x0dd414 */
void update_fn_0dd414(int param_1,int param_2);
/* VA: 0xdd4b0 | Accesses per-player PlayerInfo state (stride 0x4ef) */
undefined4 update_update_player_view_state_0dd4b0(void);
/* VA: 0xdd500 | Accesses per-player Dungeon state (stride 0x1508) */
void update_update_player_dungeon_0dd500(void);
/* VA: 0xdd624 | Accesses per-player Dungeon state (stride 0x1508) */
void update_update_player_dungeon_0dd624(void);
/* VA: 0xdd6c8 | Accesses per-player Dungeon state (stride 0x1508) */
void update_update_player_dungeon_0dd6c8(void);
/* VA: 0xdd894 | Accesses per-player PlayerInfo state (stride 0x4ef) */
void update_update_player_view_state_0dd894(void);
/* VA: 0xdd8ec | Accesses per-player PlayerInfo state (stride 0x4ef) */
void update_update_player_view_state_0dd8ec(void);
/* VA: 0xdd920 | Build full file path in g_file_path_buf */
undefined * prepare_file_path(void);
/* VA: 0xdd93c | 6-byte equality comparison between two Coord3d structures */
bool coord3d_equal(void);
/* VA: 0xdd964 | 3D bounding-box collision check between two Coord3d positions */
undefined4 things_collide_at(void);
/* VA: 0xddad0 | Module update.cpp procedure @ 0x0ddad0 */
int update_fn_0ddad0(void);
/* VA: 0xddaf0 | Bullfrog ERRORLOG(__FILE__, __LINE__, msg) handler */
undefined4 LbErrorLog(void);
/* VA: 0xddaf8 | Bullfrog WARNLOG(__FILE__, __LINE__, msg) handler */
void LbWarnLog(void);
/* VA: 0xddafc | Deterministic lockstep checksum across all 2,048 Thing slots */
undefined8 compute_things_checksum(void);
/* VA: 0xddb5c | Module update.cpp procedure @ 0x0ddb5c */
undefined4 update_fn_0ddb5c(void);
/* VA: 0xddbe0 | Reads/modifies Map[256x256] subtile data */
uint update_process_map_subtile_0ddbe0(void);
/* VA: 0xde008 | Module update.cpp procedure @ 0x0de008 */
undefined4 update_fn_0de008(void);
/* VA: 0xde074 | Module update.cpp procedure @ 0x0de074 */
uint update_fn_0de074(void);
/* VA: 0xde6a8 | String 'Cannot go first person without controlling creature' */
undefined8 update_go_first_person_without_0de6a8(void);
/* VA: 0xdf760 | Updates 3x3 subtile map entries for slab coordinates */
void update_update_slab_subtile_columns_0df760(void);
/* VA: 0xe01f4 | String 'Some THING has been deleted during the processing of another' */
void update_some_thing_has_been_0e01f4(void);
/* VA: 0xe0880 | Module update.cpp procedure @ 0x0e0880 */
longlong update_fn_0e0880(void);
/* VA: 0xe0b1c | String 'A state return type for a human controlled creature?' */
longlong update_state_return_type_human_0e0b1c(void);
/* VA: 0xe1a00 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 update_update_creature_and_thing_0e1a00(void);
/* VA: 0xe1b88 | String 'Creature has illegal state[1], T%d, S%d, TCS%d' */
undefined8 update_creature_has_illegal_state_0e1b88(void);
/* VA: 0xe1ec4 | Looks up Thing* in g_thing_ptrs[2048] and updates state */
longlong update_process_thing_entity_0e1ec4(void);
/* VA: 0xe25c4 | Module update.cpp procedure @ 0x0e25c4 */
undefined8 update_fn_0e25c4(void);
/* VA: 0xe26dc | String 'Illegal effect element bounce life: %d' */
undefined8 update_illegal_effect_element_bounce_0e26dc(void);
/* VA: 0xe2a14 | Reads/modifies Map[256x256] subtile data */
longlong update_process_map_subtile_0e2a14(void);
/* VA: 0xe2c58 | Module update.cpp procedure @ 0x0e2c58 */
longlong update_fn_0e2c58(void);
/* VA: 0xe2cd0 | String 'Cannot go first person without controlling creature' */
void update_go_first_person_without_0e2cd0(void);
/* VA: 0xe31b8 | String 'Cannot go first person without controlling creature' */
void update_go_first_person_without_0e31b8(void);
/* VA: 0xe3a8c | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
undefined8 update_update_creature_and_thing_0e3a8c(void);
/* VA: 0xe3db8 | String 'Illegal effect element bounce life: %d' */
void update_illegal_effect_element_bounce_0e3db8(void);
/* VA: 0xe3e08 | Module update.cpp procedure @ 0x0e3e08 */
undefined8 update_fn_0e3e08(void);
/* VA: 0xe3e78 | String 'Illegal primary target type for shot' */
undefined2 update_illegal_primary_target_type_0e3e78(void);
/* VA: 0xe40f8 | Module update.cpp procedure @ 0x0e40f8 */
int update_fn_0e40f8(void);
/* VA: 0xe413c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void update_update_creature_control_0e413c(void);
/* VA: 0xe4220 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
longlong update_update_creature_control_0e4220(void);
/* VA: 0xe45c0 | Updates 3x3 subtile map entries for slab coordinates */
void update_update_slab_subtile_columns_0e45c0(void);
/* VA: 0xe4cb4 | Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs) */
void update_update_creature_and_thing_0e4cb4(void);
/* VA: 0xe4e0c | Accesses CreatureControl state in g_creature_ctrl_ptrs */
void update_update_creature_control_0e4e0c(void);
/* VA: 0xe4fa8 | Module update.cpp procedure @ 0x0e4fa8 */
void update_fn_0e4fa8(void);
/* VA: 0xe4ffc | Accesses per-player PlayerInfo state (stride 0x4ef) */
void update_update_player_view_state_0e4ffc(void);
/* VA: 0xe5564 | String 'Oh fuck, illegal bastard in room list' */
void update_oh_fuck_illegal_bastard_0e5564(void);

/* === Module: workshop.cpp (35 functions) === */
/* VA: 0x768fb | Module workshop.cpp procedure @ 0x0768fb */
undefined4 workshop_fn_0768fb(void);
/* VA: 0x7691e | Module workshop.cpp procedure @ 0x07691e */
longlong workshop_fn_07691e(void);
/* VA: 0x76944 | Module workshop.cpp procedure @ 0x076944 */
void workshop_fn_076944(void);
/* VA: 0x76964 | Module workshop.cpp procedure @ 0x076964 */
undefined4 workshop_fn_076964(void);
/* VA: 0x76970 | Accesses CreatureControl state in g_creature_ctrl_ptrs */
undefined8 workshop_update_creature_control_076970(void);
/* VA: 0x769ea | Accesses per-player Dungeon state (stride 0x1508) */
undefined8 workshop_update_player_dungeon_0769ea(void);
/* VA: 0x76b29 | String 'BAD DOOR CHOICE' */
undefined8 workshop_door_choice_076b29(void);
/* VA: 0x76d14 | Accesses per-player Dungeon state (stride 0x1508) */
longlong workshop_update_player_dungeon_076d14(void);
/* VA: 0x76d56 | String 'WHAT THE HELL HAVE WE CREATED?' */
undefined4 workshop_what_hell_have_we_076d56(void);
/* VA: 0x76ee6 | Module workshop.cpp procedure @ 0x076ee6 */
undefined4 workshop_fn_076ee6(void);
/* VA: 0x76f1e | Module workshop.cpp procedure @ 0x076f1e */
undefined8 workshop_fn_076f1e(void);
/* VA: 0x77033 | Updates 3x3 subtile map entries for slab coordinates */
undefined4 workshop_update_slab_subtile_columns_077033(void);
/* VA: 0x77547 | Module workshop.cpp procedure @ 0x077547 */
undefined8 workshop_fn_077547(void);
/* VA: 0x775be | String 'Illegal setup to X%d Y%d' */
void workshop_illegal_setup_0775be(void);
/* VA: 0x77647 | Updates 3x3 subtile map entries for slab coordinates */
void workshop_update_slab_subtile_columns_077647(void);
/* VA: 0x7779d | Updates 3x3 subtile map entries for slab coordinates */
void workshop_update_slab_subtile_columns_07779d(void);
/* VA: 0x77900 | String 'INVALID WORKSHOP CONTENT' */
longlong workshop_content_077900(void);
/* VA: 0x7793c | Module workshop.cpp procedure @ 0x07793c */
longlong workshop_fn_07793c(void);
/* VA: 0x7795d | String 'CRATE NOT IN A WORKSHOP - ok' */
undefined4 workshop_crate_workshop_ok_07795d(void);
/* VA: 0x779fb | String 'ILLEGAL ITEM CLASS' */
undefined4 workshop_illegal_item_class_0779fb(void);
/* VA: 0x77a5b | String 'INVALID ITEM CLASS' */
undefined4 workshop_item_class_077a5b(void);
/* VA: 0x77ad0 | Module workshop.cpp procedure @ 0x077ad0 */
void workshop_fn_077ad0(void);
/* VA: 0x77b0f | Module workshop.cpp procedure @ 0x077b0f */
void workshop_fn_077b0f(void);
/* VA: 0x77b4e | Module workshop.cpp procedure @ 0x077b4e */
void workshop_fn_077b4e(void);
/* VA: 0x77b8d | Module workshop.cpp procedure @ 0x077b8d */
void workshop_fn_077b8d(void);
/* VA: 0x77c46 | Module workshop.cpp procedure @ 0x077c46 */
void workshop_fn_077c46(void);
/* VA: 0x77cf1 | Module workshop.cpp procedure @ 0x077cf1 */
void workshop_fn_077cf1(void);
/* VA: 0x77da0 | Module workshop.cpp procedure @ 0x077da0 */
void workshop_fn_077da0(void);
/* VA: 0x77e5c | Module workshop.cpp procedure @ 0x077e5c */
void workshop_fn_077e5c(void);
/* VA: 0x77f16 | Module workshop.cpp procedure @ 0x077f16 */
void workshop_fn_077f16(void);
/* VA: 0x77fdc | Module workshop.cpp procedure @ 0x077fdc */
void workshop_fn_077fdc(void);
/* VA: 0x780a3 | Module workshop.cpp procedure @ 0x0780a3 */
longlong workshop_fn_0780a3(void);
/* VA: 0x780c2 | Module workshop.cpp procedure @ 0x0780c2 */
void workshop_fn_0780c2(void);
/* VA: 0x780df | Accesses per-player PlayerInfo state (stride 0x4ef) */
void workshop_update_player_view_state_0780df(void);
/* VA: 0x7818f | Module workshop.cpp procedure @ 0x07818f */
void workshop_fn_07818f(void);

#ifdef __cplusplus
}
#endif
