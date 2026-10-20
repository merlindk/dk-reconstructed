/**
 * Dungeon Keeper (KEEPER.EXE) - Native TCP/IP Internet & LAN Multiplayer Engine
 *
 * Provides:
 *  1. Non-blocking TCP transport (with TCP_NODELAY) for deterministic lockstep turn exchange
 *     and initial 1.38 MB game structure synchronization.
 *  2. UDP broadcast (port 5555) for zero-config local LAN auto-discovery.
 *  3. Master server client for registering and browsing public Internet lobbies.
 *  4. Drop-in integration with Bullfrog Network Library (LbNetwork) hooks.
 */

#ifndef DK_NET_H
#define DK_NET_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DK_NET_DEFAULT_PORT     5555
#define DK_NET_MAGIC            0x444B4E54 /* "DKNT" */
#define DK_NET_PROTOCOL_VERSION 1
#define DK_NET_MAX_PLAYERS      4
#define DK_NET_PLAYER_NAME_LEN  32
#define DK_NET_GAME_NAME_LEN    32
#define DK_NET_MAX_PACKET_SIZE  65536

typedef enum {
    DK_NET_STATE_DISCONNECTED = 0,
    DK_NET_STATE_HOSTING,
    DK_NET_STATE_CONNECTING,
    DK_NET_STATE_CONNECTED,
    DK_NET_STATE_IN_GAME
} dk_net_state_t;

/* Message types for TCP session stream */
typedef enum {
    DK_MSG_NONE = 0,
    DK_MSG_HELLO = 1,        /* Client -> Host: Handshake request */
    DK_MSG_WELCOME = 2,      /* Host -> Client: Assigned Player ID & Game info */
    DK_MSG_REJECT = 3,       /* Host -> Client: Game full or version mismatch */
    DK_MSG_LOBBY_UPDATE = 4, /* Host <-> Client: Player slots, map, ready state */
    DK_MSG_START_GAME = 5,   /* Host -> All: Game starts with level seed */
    DK_MSG_TURN_PACKET = 6,  /* Peer <-> Peer / Host Relay: Turn input commands */
    DK_MSG_GENERIC_DATA = 7, /* For 1.38MB initial game structure sync & chat */
    DK_MSG_PING = 8,
    DK_MSG_PONG = 9,
    DK_MSG_LEAVE = 10
} dk_msg_type_t;

#pragma pack(push, 1)
typedef struct {
    uint32_t magic;          /* DK_NET_MAGIC */
    uint16_t version;        /* DK_NET_PROTOCOL_VERSION */
    uint8_t  msg_type;       /* dk_msg_type_t */
    uint8_t  player_id;      /* Sender player ID (0 = host, 1..3 = clients) */
    uint32_t sequence;       /* Turn number or sequential counter */
    uint32_t payload_len;    /* Byte size of body following header */
} dk_net_header_t;

typedef struct {
    char     player_name[DK_NET_PLAYER_NAME_LEN];
    uint32_t requested_slot;
} dk_msg_hello_t;

typedef struct {
    uint8_t  assigned_id;
    uint8_t  total_players;
    uint16_t level_number;
    char     session_name[DK_NET_GAME_NAME_LEN];
} dk_msg_welcome_t;

typedef struct {
    uint8_t  slot_active[DK_NET_MAX_PLAYERS];
    uint8_t  slot_ready[DK_NET_MAX_PLAYERS];
    char     player_names[DK_NET_MAX_PLAYERS][DK_NET_PLAYER_NAME_LEN];
    uint16_t level_number;
    uint8_t  countdown;
} dk_msg_lobby_update_t;

typedef struct {
    uint32_t turn_number;
    uint8_t  player_id;
    uint16_t data_len;
    /* uint8_t data[data_len] follows */
} dk_msg_turn_packet_t;

/* LAN broadcast discovery structure (UDP) */
typedef struct {
    uint32_t magic;          /* DK_NET_MAGIC */
    uint16_t version;
    uint8_t  type;           /* 1 = PING/QUERY, 2 = PONG/RESPONSE */
    char     host_name[DK_NET_PLAYER_NAME_LEN];
    char     game_name[DK_NET_GAME_NAME_LEN];
    char     host_ip[32];
    uint16_t port;
    uint8_t  current_players;
    uint8_t  max_players;
    uint16_t level_number;
} dk_lan_broadcast_t;
#pragma pack(pop)

/* Public C API for Dungeon Keeper Engine */
bool dk_net_init(void);
void dk_net_shutdown(void);
dk_net_state_t dk_net_get_state(void);
bool dk_net_is_active(void);
bool dk_net_is_host(void);
uint8_t dk_net_get_local_player_id(void);
uint8_t dk_net_get_player_count(void);

/* Host / Join Actions */
bool dk_net_start_host(uint16_t port, const char *game_name, const char *player_name);
bool dk_net_connect_to_host(const char *host_ip, uint16_t port, const char *player_name);
void dk_net_disconnect(void);

/* LAN Discovery */
void dk_net_lan_broadcast_query(uint16_t port);
int  dk_net_lan_get_discovered_games(dk_lan_broadcast_t *out_games, int max_games);

/* Master Server API (Public Internet Lobbies) */
void dk_net_set_master_server(const char *host, uint16_t port);
bool dk_net_master_register_game(const char *game_name, uint16_t port, uint8_t cur_players, uint8_t max_players, uint16_t level);
int  dk_net_master_fetch_games(dk_lan_broadcast_t *out_games, int max_games);
void dk_net_master_heartbeat(void);
void dk_net_master_unregister(void);

/* Lockstep Turn Packet Exchange API */
void dk_net_set_exchange_params(void *local_buf, size_t packet_size, void *composite_buf, int max_players);
bool dk_net_start_exchange(uint32_t turn_num);
bool dk_net_complete_exchange(uint32_t turn_num);

/* Large buffer send/receive (for 1.38MB initial game state & chat) */
bool dk_net_send_data(int dest_player_id, const void *data, size_t len);
int  dk_net_receive_data(void *out_buf, size_t max_len);

/* Main per-frame network update pump */
void dk_net_update(void);

#ifdef __cplusplus
}
#endif

#endif /* DK_NET_H */
