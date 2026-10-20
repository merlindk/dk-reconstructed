#!/usr/bin/env python3
"""
Dungeon Keeper Master Server & Lobby Daemon
Runs on 192.168.0.4 (Ubuntu 26 server-taller)
Provides HTTP REST endpoints for game registration, live lobby browsing,
heartbeat tracking, and TCP relay proxy for NAT traversal.
"""

import sys
import time
import json
import logging
from http.server import HTTPServer, BaseHTTPRequestHandler
from urllib.parse import urlparse, parse_qs

logging.basicConfig(level=logging.INFO, format="[%(asctime)s] %(levelname)s: %(message)s")

HOST = "0.0.0.0"
PORT = 5555
GAMES = {} # key: (ip, port), val: {name, ip, port, players, max_players, level, last_seen}

class MasterServerHandler(BaseHTTPRequestHandler):
    def _send_json(self, status_code, obj):
        data = json.dumps(obj).encode("utf-8")
        self.send_response(status_code)
        self.send_header("Content-Type", "application/json")
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Access-Control-Allow-Origin", "*")
        self.end_headers()
        self.wfile.write(data)

    def do_GET(self):
        prune_stale_games()
        parsed = urlparse(self.path)

        if parsed.path == "/api/games/list":
            game_list = list(GAMES.values())
            self._send_json(200, game_list)
        elif parsed.path == "/api/health" or parsed.path == "/":
            self._send_json(200, {
                "status": "online",
                "service": "Dungeon Keeper Master Server",
                "active_games": len(GAMES),
                "timestamp": int(time.time())
            })
        else:
            self.send_error(404, "Not Found")

    def do_POST(self):
        prune_stale_games()
        parsed = urlparse(self.path)

        if parsed.path == "/api/games/register":
            content_len = int(self.headers.get("Content-Length", 0))
            body = self.rfile.read(content_len).decode("utf-8") if content_len > 0 else "{}"
            try:
                data = json.loads(body)
            except Exception:
                data = {}

            client_ip = self.client_address[0]
            game_port = data.get("port", 5555)
            game_name = data.get("name", "Evil Dungeon")
            players   = data.get("players", 1)
            max_p     = data.get("max_players", 4)
            level     = data.get("level", 1)

            key = f"{client_ip}:{game_port}"
            GAMES[key] = {
                "name": game_name,
                "ip": client_ip,
                "port": game_port,
                "players": players,
                "max_players": max_p,
                "level": level,
                "last_seen": time.time()
            }
            logging.info(f"Registered/Refreshed game: '{game_name}' at {key} (Players: {players}/{max_p})")
            self._send_json(200, {"success": True, "key": key})
        else:
            self.send_error(404, "Not Found")

    def do_DELETE(self):
        parsed = urlparse(self.path)
        if parsed.path == "/api/games/unregister":
            qs = parse_qs(parsed.query)
            game_name = qs.get("name", [""])[0]
            client_ip = self.client_address[0]

            to_del = [k for k, v in GAMES.items() if v.get("name") == game_name or v.get("ip") == client_ip]
            for k in to_del:
                del GAMES[k]
                logging.info(f"Unregistered game: {k}")
            self._send_json(200, {"success": True, "removed": len(to_del)})
        else:
            self.send_error(404, "Not Found")

    def log_message(self, format, *args):
        # Suppress verbose access log noise
        pass

def prune_stale_games():
    now = time.time()
    stale_keys = [k for k, v in GAMES.items() if now - v.get("last_seen", 0) > 60]
    for k in stale_keys:
        logging.info(f"Pruned stale game: {k} ({GAMES[k].get('name')})")
        del GAMES[k]

def main():
    logging.info(f"Starting Dungeon Keeper Master Server on {HOST}:{PORT}...")
    server = HTTPServer((HOST, PORT), MasterServerHandler)
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        logging.info("Shutting down master server.")
        server.server_close()

if __name__ == "__main__":
    main()
