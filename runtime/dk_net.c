/**
 * Dungeon Keeper (KEEPER.EXE) - Native TCP/IP Internet & LAN Multiplayer Engine Implementation
 */

#include "../include/dk_net.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
typedef int socklen_t;
#define CLOSE_SOCKET(s) closesocket(s)
#define IS_INVALID_SOCKET(s) ((s) == INVALID_SOCKET)
#define WOULD_BLOCK (WSAGetLastError() == WSAEWOULDBLOCK)
#else
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <fcntl.h>
#include <errno.h>
typedef int SOCKET;
#define INVALID_SOCKET (-1)
#define SOCKET_ERROR (-1)
#define CLOSE_SOCKET(s) close(s)
#define IS_INVALID_SOCKET(s) ((s) < 0)
#define WOULD_BLOCK (errno == EWOULDBLOCK || errno == EAGAIN)
#endif

/* Network State */
static bool           g_net_initialized = false;
static dk_net_state_t g_net_state       = DK_NET_STATE_DISCONNECTED;
static uint8_t        g_local_player_id = 0;
static char           g_local_name[DK_NET_PLAYER_NAME_LEN] = "DungeonKeeper";
static char           g_session_name[DK_NET_GAME_NAME_LEN] = "Evil Realm";

/* TCP Sockets */
static SOCKET g_listen_sock = INVALID_SOCKET;
typedef struct {
    SOCKET   sock;
    bool     active;
    uint8_t  player_id;
    char     name[DK_NET_PLAYER_NAME_LEN];
    uint8_t  recv_buf[DK_NET_MAX_PACKET_SIZE];
    size_t   recv_len;
} net_peer_t;

static net_peer_t g_peers[DK_NET_MAX_PLAYERS];
static int        g_peer_count = 0;

/* UDP Socket for LAN Discovery */
static SOCKET g_udp_sock = INVALID_SOCKET;
static dk_lan_broadcast_t g_lan_games[16];
static int                g_lan_game_count = 0;
static uint32_t           g_last_lan_query_ms = 0;

/* Master Server Settings */
static char     g_master_host[128] = "192.168.0.4";
static uint16_t g_master_port      = 5555;
static uint32_t g_last_heartbeat_ms = 0;

/* Lockstep Turn Exchange Buffers */
static void  *g_local_exchange_buf     = NULL;
static size_t g_exchange_packet_size   = 0;
static void  *g_composite_exchange_buf = NULL;
static int    g_max_players_count      = 4;

static bool   g_turn_received[DK_NET_MAX_PLAYERS];
static uint8_t g_peer_turn_buf[DK_NET_MAX_PLAYERS][1024];

/* Generic Data Queue (for 1.38MB initial level state & chat) */
#define GENERIC_QUEUE_SIZE (2 * 1024 * 1024)
static uint8_t *g_generic_rx_buf = NULL;
static size_t   g_generic_rx_len = 0;

static uint32_t get_ticks_ms(void) {
#ifdef _WIN32
    return (uint32_t)GetTickCount();
#else
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint32_t)(ts.tv_sec * 1000 + ts.tv_nsec / 1000000);
#endif
}

static void set_socket_nonblocking(SOCKET s) {
#ifdef _WIN32
    u_long mode = 1;
    ioctlsocket(s, FIONBIO, &mode);
#else
    int flags = fcntl(s, F_GETFL, 0);
    fcntl(s, F_SETFL, flags | O_NONBLOCK);
#endif
}

static void set_socket_nodelay(SOCKET s) {
    int flag = 1;
    setsockopt(s, IPPROTO_TCP, TCP_NODELAY, (const char *)&flag, sizeof(flag));
}

bool dk_net_init(void) {
    if (g_net_initialized) return true;
#ifdef _WIN32
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        printf("[DKNet] WSAStartup failed!\n");
        return false;
    }
#endif
    memset(g_peers, 0, sizeof(g_peers));
    for (int i = 0; i < DK_NET_MAX_PLAYERS; i++) {
        g_peers[i].sock = INVALID_SOCKET;
    }

    g_generic_rx_buf = (uint8_t *)calloc(1, GENERIC_QUEUE_SIZE);

    /* Create non-blocking UDP socket for LAN auto-discovery */
    g_udp_sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (!IS_INVALID_SOCKET(g_udp_sock)) {
        set_socket_nonblocking(g_udp_sock);
        int broadcast = 1;
        setsockopt(g_udp_sock, SOL_SOCKET, SO_BROADCAST, (const char *)&broadcast, sizeof(broadcast));
        int reuse = 1;
        setsockopt(g_udp_sock, SOL_SOCKET, SO_REUSEADDR, (const char *)&reuse, sizeof(reuse));

        struct sockaddr_in addr;
        memset(&addr, 0, sizeof(addr));
        addr.sin_family      = AF_INET;
        addr.sin_port        = htons(DK_NET_DEFAULT_PORT);
        addr.sin_addr.s_addr = htonl(INADDR_ANY);
        bind(g_udp_sock, (struct sockaddr *)&addr, sizeof(addr));
    }

    g_net_initialized = true;
    printf("[DKNet] Internet & LAN networking subsystem initialized.\n");
    return true;
}

void dk_net_shutdown(void) {
    if (!g_net_initialized) return;
    dk_net_disconnect();
    if (!IS_INVALID_SOCKET(g_udp_sock)) {
        CLOSE_SOCKET(g_udp_sock);
        g_udp_sock = INVALID_SOCKET;
    }
    if (g_generic_rx_buf) {
        free(g_generic_rx_buf);
        g_generic_rx_buf = NULL;
    }
#ifdef _WIN32
    WSACleanup();
#endif
    g_net_initialized = false;
}

dk_net_state_t dk_net_get_state(void) { return g_net_state; }
bool dk_net_is_active(void) { return g_net_state != DK_NET_STATE_DISCONNECTED; }
bool dk_net_is_host(void)   { return g_net_state == DK_NET_STATE_HOSTING; }
uint8_t dk_net_get_local_player_id(void) { return g_local_player_id; }
uint8_t dk_net_get_player_count(void) {
    if (g_net_state == DK_NET_STATE_DISCONNECTED) return 1;
    uint8_t count = 1;
    for (int i = 0; i < DK_NET_MAX_PLAYERS; i++) {
        if (g_peers[i].active && i != g_local_player_id) count++;
    }
    return count;
}

void dk_net_set_master_server(const char *host, uint16_t port) {
    if (host && *host) snprintf(g_master_host, sizeof(g_master_host), "%s", host);
    if (port > 0) g_master_port = port;
}

static bool send_raw_packet(SOCKET s, uint8_t msg_type, uint8_t player_id, uint32_t seq, const void *payload, uint32_t len) {
    if (IS_INVALID_SOCKET(s)) return false;
    dk_net_header_t hdr;
    hdr.magic       = DK_NET_MAGIC;
    hdr.version     = DK_NET_PROTOCOL_VERSION;
    hdr.msg_type    = msg_type;
    hdr.player_id   = player_id;
    hdr.sequence    = seq;
    hdr.payload_len = len;

    size_t total = sizeof(hdr) + len;
    uint8_t stack_buf[512];
    uint8_t *send_buf = stack_buf;
    if (total > sizeof(stack_buf)) {
        send_buf = (uint8_t *)malloc(total);
    }
    memcpy(send_buf, &hdr, sizeof(hdr));
    if (len > 0 && payload) {
        memcpy(send_buf + sizeof(hdr), payload, len);
    }

    size_t sent = 0;
    while (sent < total) {
        int res = send(s, (const char *)send_buf + sent, (int)(total - sent), 0);
        if (res <= 0) {
            if (WOULD_BLOCK) continue;
            if (send_buf != stack_buf) free(send_buf);
            return false;
        }
        sent += res;
    }
    if (send_buf != stack_buf) free(send_buf);
    return true;
}

bool dk_net_start_host(uint16_t port, const char *game_name, const char *player_name) {
    if (!dk_net_init()) return false;
    dk_net_disconnect();

    g_listen_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (IS_INVALID_SOCKET(g_listen_sock)) {
        printf("[DKNet] Failed to create listen TCP socket!\n");
        return false;
    }

    int reuse = 1;
    setsockopt(g_listen_sock, SOL_SOCKET, SO_REUSEADDR, (const char *)&reuse, sizeof(reuse));
    set_socket_nonblocking(g_listen_sock);

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family      = AF_INET;
    addr.sin_port        = htons(port ? port : DK_NET_DEFAULT_PORT);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(g_listen_sock, (struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERROR) {
        printf("[DKNet] Failed to bind TCP port %d!\n", ntohs(addr.sin_port));
        CLOSE_SOCKET(g_listen_sock);
        g_listen_sock = INVALID_SOCKET;
        return false;
    }

    if (listen(g_listen_sock, 4) == SOCKET_ERROR) {
        printf("[DKNet] Failed to listen on TCP socket!\n");
        CLOSE_SOCKET(g_listen_sock);
        g_listen_sock = INVALID_SOCKET;
        return false;
    }

    g_local_player_id = 0;
    g_net_state = DK_NET_STATE_HOSTING;
    if (player_name && *player_name) snprintf(g_local_name, sizeof(g_local_name), "%s", player_name);
    if (game_name && *game_name) snprintf(g_session_name, sizeof(g_session_name), "%s", game_name);

    g_peers[0].active    = true;
    g_peers[0].player_id = 0;
    snprintf(g_peers[0].name, sizeof(g_peers[0].name), "%s", g_local_name);

    printf("[DKNet] Hosting game '%s' on TCP port %d (Host: %s)\n",
           g_session_name, ntohs(addr.sin_port), g_local_name);

    /* Register with master server */
    dk_net_master_register_game(g_session_name, ntohs(addr.sin_port), 1, 4, 1);
    return true;
}

bool dk_net_connect_to_host(const char *host_ip, uint16_t port, const char *player_name) {
    if (!dk_net_init()) return false;
    dk_net_disconnect();

    if (!host_ip || !*host_ip) host_ip = "127.0.0.1";
    uint16_t conn_port = port ? port : DK_NET_DEFAULT_PORT;

    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (IS_INVALID_SOCKET(s)) return false;
    set_socket_nodelay(s);

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port   = htons(conn_port);
    struct hostent *he = gethostbyname(host_ip);
    if (he && he->h_addr_list && he->h_addr_list[0]) {
        memcpy(&addr.sin_addr, he->h_addr_list[0], sizeof(addr.sin_addr));
    } else {
        addr.sin_addr.s_addr = inet_addr(host_ip);
    }

    printf("[DKNet] Connecting to host %s:%d...\n", host_ip, conn_port);
    if (connect(s, (struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERROR) {
#ifdef _WIN32
        if (WSAGetLastError() != WSAEWOULDBLOCK) {
            CLOSE_SOCKET(s);
            return false;
        }
#else
        if (errno != EINPROGRESS) {
            CLOSE_SOCKET(s);
            return false;
        }
#endif
    }

    set_socket_nonblocking(s);

    if (player_name && *player_name) snprintf(g_local_name, sizeof(g_local_name), "%s", player_name);

    g_peers[0].sock      = s;
    g_peers[0].active    = true;
    g_peers[0].player_id = 0; /* Index 0 points to host */
    g_peers[0].recv_len  = 0;

    g_net_state = DK_NET_STATE_CONNECTING;

    /* Send HELLO */
    dk_msg_hello_t hello;
    memset(&hello, 0, sizeof(hello));
    snprintf(hello.player_name, sizeof(hello.player_name), "%s", g_local_name);
    hello.requested_slot = 1;
    send_raw_packet(s, DK_MSG_HELLO, 0, 0, &hello, sizeof(hello));

    /* Wait up to 3 seconds for WELCOME */
    uint32_t start_ms = get_ticks_ms();
    while (get_ticks_ms() - start_ms < 3000) {
        dk_net_update();
        if (g_net_state == DK_NET_STATE_CONNECTED) {
            printf("[DKNet] Successfully joined session '%s' as Player #%d!\n",
                   g_session_name, g_local_player_id);
            return true;
        }
#ifdef _WIN32
        Sleep(10);
#else
        usleep(10000);
#endif
    }

    printf("[DKNet] Connection to %s:%d timed out!\n", host_ip, conn_port);
    dk_net_disconnect();
    return false;
}

void dk_net_disconnect(void) {
    if (g_net_state == DK_NET_STATE_HOSTING) {
        dk_net_master_unregister();
    }
    if (!IS_INVALID_SOCKET(g_listen_sock)) {
        CLOSE_SOCKET(g_listen_sock);
        g_listen_sock = INVALID_SOCKET;
    }
    for (int i = 0; i < DK_NET_MAX_PLAYERS; i++) {
        if (!IS_INVALID_SOCKET(g_peers[i].sock)) {
            send_raw_packet(g_peers[i].sock, DK_MSG_LEAVE, g_local_player_id, 0, NULL, 0);
            CLOSE_SOCKET(g_peers[i].sock);
            g_peers[i].sock = INVALID_SOCKET;
        }
        g_peers[i].active   = false;
        g_peers[i].recv_len = 0;
    }
    g_net_state  = DK_NET_STATE_DISCONNECTED;
    g_peer_count = 0;
}

static void process_packet(net_peer_t *peer, const dk_net_header_t *hdr, const uint8_t *payload) {
    switch (hdr->msg_type) {
        case DK_MSG_HELLO: {
            if (g_net_state == DK_NET_STATE_HOSTING) {
                const dk_msg_hello_t *hello = (const dk_msg_hello_t *)payload;
                /* Assign next available player slot (1..3) */
                int assigned_id = -1;
                for (int i = 1; i < DK_NET_MAX_PLAYERS; i++) {
                    if (!g_peers[i].active) {
                        assigned_id = i;
                        break;
                    }
                }
                if (assigned_id < 0) {
                    send_raw_packet(peer->sock, DK_MSG_REJECT, 0, 0, "Game Full", 9);
                    return;
                }
                peer->player_id = (uint8_t)assigned_id;
                snprintf(peer->name, sizeof(peer->name), "%s", hello->player_name);
                peer->active = true;

                dk_msg_welcome_t welcome;
                welcome.assigned_id   = (uint8_t)assigned_id;
                welcome.total_players = dk_net_get_player_count();
                welcome.level_number  = 1;
                snprintf(welcome.session_name, sizeof(welcome.session_name), "%s", g_session_name);
                send_raw_packet(peer->sock, DK_MSG_WELCOME, 0, 0, &welcome, sizeof(welcome));

                printf("[DKNet] Client '%s' joined as Player #%d\n", peer->name, assigned_id);
            }
            break;
        }
        case DK_MSG_WELCOME: {
            if (g_net_state == DK_NET_STATE_CONNECTING) {
                const dk_msg_welcome_t *welcome = (const dk_msg_welcome_t *)payload;
                g_local_player_id = welcome->assigned_id;
                snprintf(g_session_name, sizeof(g_session_name), "%s", welcome->session_name);
                g_net_state = DK_NET_STATE_CONNECTED;
            }
            break;
        }
        case DK_MSG_TURN_PACKET: {
            uint8_t sender = hdr->player_id;
            if (sender < DK_NET_MAX_PLAYERS && hdr->payload_len <= sizeof(g_peer_turn_buf[0])) {
                memcpy(g_peer_turn_buf[sender], payload, hdr->payload_len);
                g_turn_received[sender] = true;

                /* If host, relay to other clients */
                if (g_net_state == DK_NET_STATE_HOSTING) {
                    for (int i = 1; i < DK_NET_MAX_PLAYERS; i++) {
                        if (g_peers[i].active && i != sender) {
                            send_raw_packet(g_peers[i].sock, DK_MSG_TURN_PACKET, sender, hdr->sequence, payload, hdr->payload_len);
                        }
                    }
                }
            }
            break;
        }
        case DK_MSG_GENERIC_DATA: {
            if (g_generic_rx_buf && g_generic_rx_len + hdr->payload_len <= GENERIC_QUEUE_SIZE) {
                memcpy(g_generic_rx_buf + g_generic_rx_len, payload, hdr->payload_len);
                g_generic_rx_len += hdr->payload_len;

                /* If host, relay to other peers */
                if (g_net_state == DK_NET_STATE_HOSTING) {
                    for (int i = 1; i < DK_NET_MAX_PLAYERS; i++) {
                        if (g_peers[i].active && i != hdr->player_id) {
                            send_raw_packet(g_peers[i].sock, DK_MSG_GENERIC_DATA, hdr->player_id, hdr->sequence, payload, hdr->payload_len);
                        }
                    }
                }
            }
            break;
        }
        case DK_MSG_LEAVE: {
            peer->active = false;
            printf("[DKNet] Player #%d ('%s') left the game.\n", peer->player_id, peer->name);
            break;
        }
        default:
            break;
    }
}

void dk_net_update(void) {
    if (!g_net_initialized) return;

    /* Accept new TCP connections if hosting */
    if (g_net_state == DK_NET_STATE_HOSTING && !IS_INVALID_SOCKET(g_listen_sock)) {
        struct sockaddr_in client_addr;
        socklen_t addr_len = sizeof(client_addr);
        SOCKET new_sock = accept(g_listen_sock, (struct sockaddr *)&client_addr, &addr_len);
        if (!IS_INVALID_SOCKET(new_sock)) {
            set_socket_nonblocking(new_sock);
            set_socket_nodelay(new_sock);

            /* Find available slot */
            int slot = -1;
            for (int i = 1; i < DK_NET_MAX_PLAYERS; i++) {
                if (!g_peers[i].active && IS_INVALID_SOCKET(g_peers[i].sock)) {
                    slot = i;
                    break;
                }
            }
            if (slot >= 0) {
                g_peers[slot].sock     = new_sock;
                g_peers[slot].active   = false; /* Waiting for HELLO */
                g_peers[slot].recv_len = 0;
            } else {
                send_raw_packet(new_sock, DK_MSG_REJECT, 0, 0, "Full", 4);
                CLOSE_SOCKET(new_sock);
            }
        }
    }

    /* Pump TCP peer data */
    for (int i = 0; i < DK_NET_MAX_PLAYERS; i++) {
        if (IS_INVALID_SOCKET(g_peers[i].sock)) continue;

        int rem = (int)(sizeof(g_peers[i].recv_buf) - g_peers[i].recv_len);
        if (rem <= 0) continue;
        int recvd = recv(g_peers[i].sock, (char *)g_peers[i].recv_buf + g_peers[i].recv_len, rem, 0);
        if (recvd > 0) {
            g_peers[i].recv_len += recvd;

            /* Parse complete packets */
            while (g_peers[i].recv_len >= sizeof(dk_net_header_t)) {
                dk_net_header_t *hdr = (dk_net_header_t *)g_peers[i].recv_buf;
                if (hdr->magic != DK_NET_MAGIC) {
                    /* Corrupt stream, drop */
                    g_peers[i].recv_len = 0;
                    break;
                }
                size_t pkt_total = sizeof(dk_net_header_t) + hdr->payload_len;
                if (g_peers[i].recv_len < pkt_total) {
                    break; /* Incomplete packet, wait for more bytes */
                }
                const uint8_t *payload = g_peers[i].recv_buf + sizeof(dk_net_header_t);
                process_packet(&g_peers[i], hdr, payload);

                /* Shift buffer */
                size_t left = g_peers[i].recv_len - pkt_total;
                if (left > 0) {
                    memmove(g_peers[i].recv_buf, g_peers[i].recv_buf + pkt_total, left);
                }
                g_peers[i].recv_len = left;
            }
        } else if (recvd == 0 || (recvd < 0 && !WOULD_BLOCK)) {
            /* Connection dropped */
            CLOSE_SOCKET(g_peers[i].sock);
            g_peers[i].sock     = INVALID_SOCKET;
            g_peers[i].active   = false;
            g_peers[i].recv_len = 0;
        }
    }

    /* Pump UDP LAN Discovery responses */
    if (!IS_INVALID_SOCKET(g_udp_sock)) {
        dk_lan_broadcast_t bcast;
        struct sockaddr_in from;
        socklen_t from_len = sizeof(from);
        while (1) {
            int r = recvfrom(g_udp_sock, (char *)&bcast, sizeof(bcast), 0, (struct sockaddr *)&from, &from_len);
            if (r <= 0) break;
            if (r >= (int)sizeof(bcast) && bcast.magic == DK_NET_MAGIC) {
                if (bcast.type == 1 && g_net_state == DK_NET_STATE_HOSTING) {
                    /* Respond to query */
                    dk_lan_broadcast_t resp;
                    resp.magic           = DK_NET_MAGIC;
                    resp.version         = DK_NET_PROTOCOL_VERSION;
                    resp.type            = 2; /* PONG */
                    snprintf(resp.host_name, sizeof(resp.host_name), "%s", g_local_name);
                    snprintf(resp.game_name, sizeof(resp.game_name), "%s", g_session_name);
                    resp.port            = htons(DK_NET_DEFAULT_PORT);
                    resp.current_players = dk_net_get_player_count();
                    resp.max_players     = 4;
                    resp.level_number    = 1;
                    sendto(g_udp_sock, (const char *)&resp, sizeof(resp), 0, (struct sockaddr *)&from, from_len);
                } else if (bcast.type == 2) {
                    /* Record discovered game */
                    bool found = false;
                    for (int g = 0; g < g_lan_game_count; g++) {
                        if (strcmp(g_lan_games[g].game_name, bcast.game_name) == 0) {
                            g_lan_games[g] = bcast;
                            found = true;
                            break;
                        }
                    }
                    if (!found && g_lan_game_count < 16) {
                        g_lan_games[g_lan_game_count++] = bcast;
                    }
                }
            }
        }
    }

    /* Master server heartbeat every 30s */
    uint32_t now = get_ticks_ms();
    if (g_net_state == DK_NET_STATE_HOSTING && now - g_last_heartbeat_ms > 30000) {
        dk_net_master_heartbeat();
        g_last_heartbeat_ms = now;
    }
}

void dk_net_lan_broadcast_query(uint16_t port) {
    if (IS_INVALID_SOCKET(g_udp_sock)) return;
    g_lan_game_count = 0;

    dk_lan_broadcast_t q;
    memset(&q, 0, sizeof(q));
    q.magic   = DK_NET_MAGIC;
    q.version = DK_NET_PROTOCOL_VERSION;
    q.type    = 1; /* PING */

    struct sockaddr_in baddr;
    memset(&baddr, 0, sizeof(baddr));
    baddr.sin_family      = AF_INET;
    baddr.sin_port        = htons(port ? port : DK_NET_DEFAULT_PORT);
    baddr.sin_addr.s_addr = htonl(INADDR_BROADCAST);

    sendto(g_udp_sock, (const char *)&q, sizeof(q), 0, (struct sockaddr *)&baddr, sizeof(baddr));
    g_last_lan_query_ms = get_ticks_ms();
}

int dk_net_lan_get_discovered_games(dk_lan_broadcast_t *out_games, int max_games) {
    dk_net_update();
    int count = g_lan_game_count;
    if (count > max_games) count = max_games;
    if (count > 0 && out_games) {
        memcpy(out_games, g_lan_games, count * sizeof(dk_lan_broadcast_t));
    }
    return count;
}

/* Master Server API using lightweight TCP HTTP REST */
bool dk_net_master_register_game(const char *game_name, uint16_t port, uint8_t cur_players, uint8_t max_players, uint16_t level) {
    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (IS_INVALID_SOCKET(s)) return false;

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port   = htons(g_master_port);
    struct hostent *he = gethostbyname(g_master_host);
    if (he && he->h_addr_list && he->h_addr_list[0]) {
        memcpy(&addr.sin_addr, he->h_addr_list[0], sizeof(addr.sin_addr));
    } else {
        addr.sin_addr.s_addr = inet_addr(g_master_host);
    }

    if (connect(s, (struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERROR) {
        CLOSE_SOCKET(s);
        return false;
    }

    char body[256];
    snprintf(body, sizeof(body),
             "{\"name\":\"%s\",\"port\":%u,\"players\":%u,\"max_players\":%u,\"level\":%u}",
             game_name, port, cur_players, max_players, level);

    char req[512];
    snprintf(req, sizeof(req),
             "POST /api/games/register HTTP/1.1\r\n"
             "Host: %s:%u\r\n"
             "Content-Type: application/json\r\n"
             "Content-Length: %d\r\n"
             "Connection: close\r\n\r\n%s",
             g_master_host, g_master_port, (int)strlen(body), body);

    send(s, req, (int)strlen(req), 0);
    CLOSE_SOCKET(s);
    return true;
}

int dk_net_master_fetch_games(dk_lan_broadcast_t *out_games, int max_games) {
    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (IS_INVALID_SOCKET(s)) return 0;

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port   = htons(g_master_port);
    struct hostent *he = gethostbyname(g_master_host);
    if (he && he->h_addr_list && he->h_addr_list[0]) {
        memcpy(&addr.sin_addr, he->h_addr_list[0], sizeof(addr.sin_addr));
    } else {
        addr.sin_addr.s_addr = inet_addr(g_master_host);
    }

    if (connect(s, (struct sockaddr *)&addr, sizeof(addr)) == SOCKET_ERROR) {
        CLOSE_SOCKET(s);
        return 0;
    }

    char req[256];
    snprintf(req, sizeof(req),
             "GET /api/games/list HTTP/1.1\r\n"
             "Host: %s:%u\r\n"
             "Connection: close\r\n\r\n",
             g_master_host, g_master_port);

    send(s, req, (int)strlen(req), 0);

    char resp[4096];
    int len = recv(s, resp, sizeof(resp) - 1, 0);
    CLOSE_SOCKET(s);
    if (len <= 0) return 0;
    resp[len] = '\0';

    char *json = strstr(resp, "\r\n\r\n");
    if (!json) return 0;
    json += 4;

    /* Simple JSON parser for game entries */
    int count = 0;
    char *entry = strstr(json, "{\"name\":\"");
    while (entry && count < max_games) {
        dk_lan_broadcast_t *g = &out_games[count];
        memset(g, 0, sizeof(*g));
        g->magic = DK_NET_MAGIC;

        char name[DK_NET_GAME_NAME_LEN] = {0};
        int port = DK_NET_DEFAULT_PORT, players = 1, max_p = 4, lvl = 1;
        sscanf(entry, "{\"name\":\"%31[^\"]\",\"port\":%d,\"players\":%d,\"max_players\":%d,\"level\":%d}",
               name, &port, &players, &max_p, &lvl);

        snprintf(g->game_name, sizeof(g->game_name), "%s", name);
        g->port            = (uint16_t)port;
        g->current_players = (uint8_t)players;
        g->max_players     = (uint8_t)max_p;
        g->level_number    = (uint16_t)lvl;
        count++;

        entry = strstr(entry + 1, "{\"name\":\"");
    }
    return count;
}

void dk_net_master_heartbeat(void) {
    if (g_net_state != DK_NET_STATE_HOSTING) return;
    dk_net_master_register_game(g_session_name, DK_NET_DEFAULT_PORT, dk_net_get_player_count(), 4, 1);
}

void dk_net_master_unregister(void) {
    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (IS_INVALID_SOCKET(s)) return;
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port   = htons(g_master_port);
    struct hostent *he = gethostbyname(g_master_host);
    if (he && he->h_addr_list && he->h_addr_list[0]) {
        memcpy(&addr.sin_addr, he->h_addr_list[0], sizeof(addr.sin_addr));
    } else {
        addr.sin_addr.s_addr = inet_addr(g_master_host);
    }
    if (connect(s, (struct sockaddr *)&addr, sizeof(addr)) != SOCKET_ERROR) {
        char req[256];
        snprintf(req, sizeof(req),
                 "DELETE /api/games/unregister?name=%s HTTP/1.1\r\n"
                 "Host: %s:%u\r\n"
                 "Connection: close\r\n\r\n",
                 g_session_name, g_master_host, g_master_port);
        send(s, req, (int)strlen(req), 0);
    }
    CLOSE_SOCKET(s);
}

/* Lockstep Turn Exchange API */
void dk_net_set_exchange_params(void *local_buf, size_t packet_size, void *composite_buf, int max_players) {
    g_local_exchange_buf     = local_buf;
    g_exchange_packet_size   = packet_size;
    g_composite_exchange_buf = composite_buf;
    g_max_players_count      = max_players;
}

bool dk_net_start_exchange(uint32_t turn_num) {
    if (g_net_state == DK_NET_STATE_DISCONNECTED) return true;
    dk_net_update();

    memset(g_turn_received, 0, sizeof(g_turn_received));

    /* Local turn packet is immediately available */
    if (g_local_exchange_buf && g_composite_exchange_buf && g_exchange_packet_size > 0) {
        memcpy((uint8_t *)g_composite_exchange_buf + (g_local_player_id * g_exchange_packet_size),
               g_local_exchange_buf, g_exchange_packet_size);
        g_turn_received[g_local_player_id] = true;
    }

    /* Broadcast local turn packet to connected peers */
    if (g_net_state == DK_NET_STATE_HOSTING) {
        for (int i = 1; i < DK_NET_MAX_PLAYERS; i++) {
            if (g_peers[i].active && !IS_INVALID_SOCKET(g_peers[i].sock)) {
                send_raw_packet(g_peers[i].sock, DK_MSG_TURN_PACKET, g_local_player_id, turn_num,
                                g_local_exchange_buf, (uint32_t)g_exchange_packet_size);
            }
        }
    } else if (g_net_state == DK_NET_STATE_CONNECTED) {
        /* Send to host */
        if (!IS_INVALID_SOCKET(g_peers[0].sock)) {
            send_raw_packet(g_peers[0].sock, DK_MSG_TURN_PACKET, g_local_player_id, turn_num,
                            g_local_exchange_buf, (uint32_t)g_exchange_packet_size);
        }
    }
    return true;
}

bool dk_net_complete_exchange(uint32_t turn_num) {
    if (g_net_state == DK_NET_STATE_DISCONNECTED) return true;

    uint32_t start = get_ticks_ms();
    while (get_ticks_ms() - start < 250) { /* Wait up to 250ms for lockstep synchronization */
        dk_net_update();

        bool all_received = true;
        for (int i = 0; i < g_max_players_count; i++) {
            /* Check if player i is connected/active */
            bool is_active = (i == g_local_player_id);
            if (!is_active) {
                if (g_net_state == DK_NET_STATE_HOSTING) is_active = g_peers[i].active;
                else if (g_net_state == DK_NET_STATE_CONNECTED) is_active = (i == 0 || g_peers[i].active);
            }

            if (is_active && !g_turn_received[i]) {
                all_received = false;
                break;
            }
        }

        if (all_received) {
            /* Copy received peer packets into composite buffer */
            if (g_composite_exchange_buf && g_exchange_packet_size > 0) {
                for (int i = 0; i < g_max_players_count; i++) {
                    if (i != g_local_player_id && g_turn_received[i]) {
                        memcpy((uint8_t *)g_composite_exchange_buf + (i * g_exchange_packet_size),
                               g_peer_turn_buf[i], g_exchange_packet_size);
                    }
                }
            }
            return true;
        }

#ifdef _WIN32
        Sleep(1);
#else
        usleep(1000);
#endif
    }
    return false;
}

/* Large buffer send/receive (for 1.38MB initial level state) */
bool dk_net_send_data(int dest_player_id, const void *data, size_t len) {
    if (!data || len == 0) return false;
    dk_net_update();

    if (g_net_state == DK_NET_STATE_HOSTING) {
        if (dest_player_id >= 1 && dest_player_id < DK_NET_MAX_PLAYERS) {
            if (g_peers[dest_player_id].active && !IS_INVALID_SOCKET(g_peers[dest_player_id].sock)) {
                return send_raw_packet(g_peers[dest_player_id].sock, DK_MSG_GENERIC_DATA, g_local_player_id, 0, data, (uint32_t)len);
            }
        } else {
            /* Broadcast to all clients */
            for (int i = 1; i < DK_NET_MAX_PLAYERS; i++) {
                if (g_peers[i].active && !IS_INVALID_SOCKET(g_peers[i].sock)) {
                    send_raw_packet(g_peers[i].sock, DK_MSG_GENERIC_DATA, g_local_player_id, 0, data, (uint32_t)len);
                }
            }
            return true;
        }
    } else if (g_net_state == DK_NET_STATE_CONNECTED) {
        /* Send to host */
        if (!IS_INVALID_SOCKET(g_peers[0].sock)) {
            return send_raw_packet(g_peers[0].sock, DK_MSG_GENERIC_DATA, g_local_player_id, 0, data, (uint32_t)len);
        }
    }
    return false;
}

int dk_net_receive_data(void *out_buf, size_t max_len) {
    dk_net_update();
    if (!out_buf || max_len == 0 || g_generic_rx_len == 0) return 0;

    size_t copy_len = g_generic_rx_len;
    if (copy_len > max_len) copy_len = max_len;
    memcpy(out_buf, g_generic_rx_buf, copy_len);

    size_t left = g_generic_rx_len - copy_len;
    if (left > 0) {
        memmove(g_generic_rx_buf, g_generic_rx_buf + copy_len, left);
    }
    g_generic_rx_len = left;
    return (int)copy_len;
}
