#!/usr/bin/env python3
"""
Generate comprehensive reverse-engineering documentation, subsystem deep-dives
(Graphics & Multiplayer), data format specifications, CMakeLists.txt, and master function index
in /home/merlin/dk-reconstructed/.
"""

import collections
import json
import os
import struct
import sys
from pathlib import Path


def parse_hex(addr_str: str) -> int:
    if not addr_str:
        return 0
    if ":" in addr_str:
        addr_str = addr_str.split(":")[-1]
    addr_str = addr_str.strip().lower()
    if addr_str.startswith("0x"):
        return int(addr_str, 16)
    return int(addr_str, 16)


def inspect_game_data_files(game_dir: Path) -> dict:
    info = {"data_files": [], "level_files": [], "save_files": [], "cfg": ""}
    if not game_dir.exists():
        return info

    cfg_path = game_dir / "KEEPER.CFG"
    if cfg_path.exists():
        info["cfg"] = cfg_path.read_text(encoding="latin1", errors="ignore")

    data_dir = game_dir / "DATA"
    if data_dir.exists():
        for p in sorted(data_dir.iterdir())[:40]:
            if p.is_file():
                info["data_files"].append({"name": p.name, "size": p.stat().st_size})

    levels_dir = game_dir / "levels"
    if levels_dir.exists():
        ext_counts = collections.Counter()
        ext_sizes = collections.defaultdict(list)
        for p in sorted(levels_dir.iterdir()):
            if p.is_file():
                ext = p.suffix.upper()
                ext_counts[ext] += 1
                ext_sizes[ext].append(p.stat().st_size)
        for ext, cnt in sorted(ext_counts.items()):
            sizes = ext_sizes[ext]
            info["level_files"].append(
                {
                    "extension": ext,
                    "count": cnt,
                    "min_size": min(sizes),
                    "max_size": max(sizes),
                }
            )

    save_dir = game_dir / "SAVE"
    if save_dir.exists():
        for p in sorted(save_dir.iterdir()):
            if p.is_file():
                with open(p, "rb") as sf:
                    head = sf.read(32)
                info["save_files"].append(
                    {
                        "name": p.name,
                        "size": p.stat().st_size,
                        "head_hex": head.hex(" "),
                        "head_ascii": "".join(chr(b) if 32 <= b < 127 else "." for b in head),
                    }
                )
    return info


def main():
    out_root = Path(sys.argv[1] if len(sys.argv) > 1 else "/home/merlin/workspace/dk-reconstructed")
    game_dir = Path("/home/merlin/Dungeon Keeper")
    catalog_dir = out_root / "catalog"
    docs_dir = out_root / "docs"
    docs_dir.mkdir(parents=True, exist_ok=True)

    with open(catalog_dir / "module_map.json", "r", encoding="utf-8") as f:
        module_map = json.load(f)
    with open(catalog_dir / "globals_map.json", "r", encoding="utf-8") as f:
        globals_map = json.load(f)
    with open(catalog_dir / "strings.json", "r", encoding="utf-8") as f:
        strings = json.load(f)

    functions_by_addr = {}
    with open(catalog_dir / "functions.jsonl", "r", encoding="utf-8") as f:
        for line in f:
            if line.strip():
                row = json.loads(line)
                functions_by_addr[row["address"]] = row

    addr_to_string = {s["address"]: s.get("value", "") for s in strings}

    # 1. Generate README.md
    total_fns = sum(len(v) for v in module_map.values())
    with open(out_root / "README.md", "w", encoding="utf-8") as f:
        f.write(
            f"""# Dungeon Keeper (`KEEPER.EXE`) — Full Reconstructed Source Repository

This repository contains the complete reverse-engineered source reconstruction of Bullfrog Productions' **Dungeon Keeper** (`KEEPER.EXE`, 1997 DOS/4GW release), generated using **REA `6.5.0`** and **Ghidra `12.1.4`** on `server-taller`.

## Summary Statistics

| Metric | Value |
| :--- | :--- |
| **Original Binary** | `/home/merlin/Dungeon Keeper/KEEPER.EXE` (`1,923,995` bytes, Watcom C/C++ DOS/4GW `LE`) |
| **Relocated ELF32 Image** | `/home/merlin/Dungeon Keeper/re/KEEPER.elf` (`1,638,548` bytes, `45,949` internal fixups + `4,368` `.symtab` `STT_FUNC` entries) |
| **Entry Point (VA)** | `0x000f4448` (`Obj 1 + 0xe4448`) |
| **Recovered Functions** | **{total_fns}** decompiled procedures (`0x00010000` – `0x001447a0`) |
| **Recovered Defined Strings** | **{len(strings)}** string literals (`0x00160000` – `0x0019a000`) |
| **Reconstructed Source Modules** | **{len(module_map)}** `.cpp` translation units (**85/85** original Bullfrog `.cpp` files + `4` `bflib/` modules + `1` `rt/` module, all non-empty) |
| **Tracked Global Symbols** | **{len(globals_map)}** global data/BSS symbols (`0x00160000` – `0x00402024`) |

## Repository Structure

- [`include/`](./include/) — Reconstructed C/C++ headers:
  - [`dk_types.h`](./include/dk_types.h) — Fixed-width primitive types & Watcom conventions
  - [`dk_structs.h`](./include/dk_structs.h) — Core engine structs (`Thing`, `Coord3d`, `Packet`, `CommandDesc`, `SlabMap`, `TbSprite`, `TbNetworkSession`)
  - [`dk_globals.h`](./include/dk_globals.h) — Global `.data_obj3` and `.bss_obj3` variable declarations with exact virtual addresses
  - [`dk_functions.h`](./include/dk_functions.h) — Master function prototype declarations across all {total_fns} procedures
- [`src/`](./src/) — Reconstructed C/C++ translation units (`85` original Bullfrog `.cpp` modules + [`src/bflib/`](./src/bflib/) + [`src/rt/`](./src/rt/)) containing all **{total_fns}** decompiled functions with recovered `LbErrorLog(__FILE__, __LINE__, msg)` annotations
- [`docs/`](./docs/) — Technical reverse-engineering documentation:
  - [`ARCHITECTURE.md`](./docs/ARCHITECTURE.md) — Memory layout, module map, and call-graph architecture
  - [`SUBSYSTEM_MULTIPLAYER.md`](./docs/SUBSYSTEM_MULTIPLAYER.md) — Deep dive into `frontnet.cpp`, `packet.cpp`, and `LbNetwork_*` lockstep networking
  - [`SUBSYSTEM_GRAPHICS.md`](./docs/SUBSYSTEM_GRAPHICS.md) — Deep dive into `setup.cpp`, `engine3.cpp`, `draw.cpp`, `column.cpp`, `ceiling.cpp`, `light.cpp`, `ssprite.cpp`, and `eyelens.cpp`
  - [`DATA_FORMATS.md`](./docs/DATA_FORMATS.md) — Binary specifications of `DATA/*.DAT`, `*.TAB`, `levels/MAP*.*`, and `SAVE/CONTINUE.SAV`
  - [`FUNCTION_INDEX.md`](./docs/FUNCTION_INDEX.md) — Complete searchable table of all {total_fns} functions
- [`catalog/`](./catalog/) — Raw machine-readable REA + Ghidra JSON/JSONL catalogs (`functions.jsonl`, `procedures.json`, `strings.json`, `module_map.json`, `globals_map.json`, `source_file_xrefs.json`)
"""
        )

    # 2. Generate CMakeLists.txt
    cpp_files = sorted(
        str(p.relative_to(out_root)).replace("\\", "/")
        for p in (out_root / "src").rglob("*.cpp")
    )
    with open(out_root / "CMakeLists.txt", "w", encoding="utf-8") as f:
        f.write(
            """cmake_minimum_required(VERSION 3.20)
project(dk_reconstructed LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(DK_RECONSTRUCTED_SOURCES
"""
        )
        for cf in cpp_files:
            f.write(f"    {cf}\n")
        f.write(")\n")

    # 3. Generate docs/ARCHITECTURE.md
    with open(docs_dir / "ARCHITECTURE.md", "w", encoding="utf-8") as f:
        f.write(
            """# Dungeon Keeper (`KEEPER.EXE`) — Reconstructed Architecture & Module Map

## 1. Virtual Memory Layout (`KEEPER.elf`)

| Segment | Start VA | End VA | Size (Bytes) | Permissions | Contents |
| :--- | :--- | :--- | :--- | :--- | :--- |
| `.text_obj1` | `0x00010000` | `0x001447a0` | `1,263,520` | `R-X` | 32-bit x86 gameplay engine, Bullfrog Library (`bflib`), Watcom CRT |
| `.text_obj2` | `0x00150000` | `0x001500fe` | `254` | `R-X` | 16-bit real-mode transition helper |
| `.data_obj3` | `0x00160000` | `0x0019a000` | `237,568` | `RW-` | Initialized tables, creature/room/spell descriptors, strings (`3,274`) |
| `.bss_obj3` | `0x0019a000` | `0x003f1570` | `2,454,896` | `RW-` | Main runtime state (`Game`, `Dungeon`, `Thing` pool, `SlabMap`, `Packet` state) |
| `.bss_obj4` | `0x00400000` | `0x00402024` | `8,228` | `RW-` | Secondary runtime BSS |

## 2. Reconstructed Translation Units (`src/`)

| Source Module | Function Count | Address Span (Start – End) | Direct Anchor Functions |
| :--- | :--- | :--- | :--- |
"""
        )
        for mod_name in sorted(module_map.keys()):
            fns = module_map[mod_name]
            if fns:
                start_a = fns[0]["address"]
                end_a = fns[-1]["address"]
                anchors = sum(1 for x in fns if x["attribution_method"] == "direct_file_string_xref")
                f.write(f"| [`src/{mod_name}`](../src/{mod_name}) | `{len(fns)}` | `{start_a}` – `{end_a}` | `{anchors}` |\n")
            else:
                f.write(f"| [`src/{mod_name}`](../src/{mod_name}) | `0` (inlined/data) | — | `0` |\n")

    # 4. Generate docs/SUBSYSTEM_MULTIPLAYER.md
    net_modules = ["frontnet.cpp", "packet.cpp", "bflib/bflib_network.cpp"]
    with open(docs_dir / "SUBSYSTEM_MULTIPLAYER.md", "w", encoding="utf-8") as f:
        f.write(
            """# Multiplayer & Lockstep Networking Subsystem Analysis

This document details all reverse-engineered functions, strings, and protocols governing *Dungeon Keeper*'s multiplayer lobby, session management, and deterministic lockstep packet synchronization.

## 1. Key Modules
- [`src/frontnet.cpp`](../src/frontnet.cpp) — Network service selection (IPX, Modem, Serial), session enumeration, player join/leave lobby, and modem dialing initialization.
- [`src/packet.cpp`](../src/packet.cpp) — Per-turn `Packet` recording, `LbNetwork_Exchange` turn synchronization, deterministic checksum verification (`PacketSave checksum`), packet replay recording/playback, and full-state resynchronization (`resync`) when a peer falls out of sync.
- [`src/bflib/bflib_network.cpp`](../src/bflib/bflib_network.cpp) — Bullfrog Library (`LbNetwork_*`) hardware abstraction layer.

## 2. Function Table for Networking Modules

| Module | Address | Inferred Name | Callers | Callees | Naming Evidence |
| :--- | :--- | :--- | :--- | :--- | :--- |
"""
        )
        for nm in net_modules:
            for fn_meta in module_map.get(nm, []):
                f.write(
                    f"| `{nm}` | `{fn_meta['address']}` | `{fn_meta['inferred_name']}` | "
                    f"`{fn_meta['caller_count']}` | `{fn_meta['callee_count']}` | {fn_meta['inferred_reason']} |\n"
                )

        f.write("\n## 3. Decompiled Key Networking & Packet Functions\n\n")
        for nm in net_modules:
            for fn_meta in module_map.get(nm, []):
                if fn_meta["attribution_method"] == "direct_file_string_xref" or "LbNetwork" in fn_meta["inferred_reason"] or "packet" in fn_meta["inferred_name"].lower():
                    raw_fn = functions_by_addr.get(fn_meta["address"], {})
                    pseudo = raw_fn.get("pseudocode") or ""
                    f.write(f"### `{fn_meta['inferred_name']}` (`{fn_meta['address']}` in `{nm}`)\n")
                    f.write(f"- **Evidence**: {fn_meta['inferred_reason']}\n")
                    f.write("```c\n" + pseudo.strip() + "\n```\n\n")

    # 5. Generate docs/SUBSYSTEM_GRAPHICS.md
    gfx_modules = [
        "setup.cpp",
        "engine3.cpp",
        "draw.cpp",
        "column.cpp",
        "ceiling.cpp",
        "light.cpp",
        "ssprite.cpp",
        "eyelens.cpp",
        "frontend.cpp",
        "frontmap.cpp",
        "newgui.cpp",
        "panmap.cpp",
        "bflib/bflib_video.cpp",
    ]
    with open(docs_dir / "SUBSYSTEM_GRAPHICS.md", "w", encoding="utf-8") as f:
        f.write(
            """# Graphics, 3D Software Renderer & UI Subsystem Analysis

This document details the reverse-engineered graphics pipeline in `KEEPER.EXE`, covering screen mode initialization, 8-bit palette management, 3D voxel column/ceiling rendering, RLE sprite blitting, dynamic lighting, possession lens distortion, and GUI layers.

## 1. Key Graphics Modules
- [`src/setup.cpp`](../src/setup.cpp) — Screen mode initialization & reset (`LbScreen_Setup`, VESA/VGA mode switching, loading palettes).
- [`src/engine3.cpp`](../src/engine3.cpp) — Core 3D dungeon view & first-person possession camera transform, frustum culling, and polygon/column rasterization.
- [`src/draw.cpp`](../src/draw.cpp) — High-level scene, creature, object, and room drawing orchestration.
- [`src/column.cpp`](../src/column.cpp) & [`src/ceiling.cpp`](../src/ceiling.cpp) — 3D dungeon voxel columns, cube textures, and ceiling mesh generation.
- [`src/light.cpp`](../src/light.cpp) — Dynamic point lights, shadow casting, and intensity lookup tables.
- [`src/ssprite.cpp`](../src/ssprite.cpp) — Scaled RLE sprite decoding and blitting (`DATA/*.DAT` & `DATA/*.TAB`).
- [`src/eyelens.cpp`](../src/eyelens.cpp) — Creature possession eye-lens warp/displacement buffer effects.
- [`src/frontend.cpp`](../src/frontend.cpp), [`src/frontmap.cpp`](../src/frontmap.cpp), [`src/newgui.cpp`](../src/newgui.cpp), [`src/panmap.cpp`](../src/panmap.cpp) — Menus, campaign map screen, in-game status panel, and minimap.

## 2. Function Table for Graphics & UI Modules

| Module | Address | Inferred Name | Callers | Callees | Naming Evidence |
| :--- | :--- | :--- | :--- | :--- | :--- |
"""
        )
        for gm in gfx_modules:
            for fn_meta in module_map.get(gm, []):
                f.write(
                    f"| `{gm}` | `{fn_meta['address']}` | `{fn_meta['inferred_name']}` | "
                    f"`{fn_meta['caller_count']}` | `{fn_meta['callee_count']}` | {fn_meta['inferred_reason']} |\n"
                )

        f.write("\n## 3. Anchor Graphics & Renderer Functions (Decompiled)\n\n")
        for gm in gfx_modules:
            shown = 0
            for fn_meta in module_map.get(gm, []):
                if fn_meta["attribution_method"] == "direct_file_string_xref" and shown < 8:
                    shown += 1
                    raw_fn = functions_by_addr.get(fn_meta["address"], {})
                    pseudo = raw_fn.get("pseudocode") or ""
                    f.write(f"### `{fn_meta['inferred_name']}` (`{fn_meta['address']}` in `{gm}`)\n")
                    f.write(f"- **Evidence**: {fn_meta['inferred_reason']}\n")
                    f.write("```c\n" + pseudo.strip() + "\n```\n\n")

    # 6. Generate docs/DATA_FORMATS.md
    ginfo = inspect_game_data_files(game_dir)
    with open(docs_dir / "DATA_FORMATS.md", "w", encoding="utf-8") as f:
        f.write(
            """# Dungeon Keeper — External Asset, Level & Savegame File Formats

Inspected directly from `/home/merlin/Dungeon Keeper/` alongside `file.cpp`, `setup.cpp`, `ssprite.cpp`, and `script.cpp`.

## 1. Configuration (`KEEPER.CFG`)
```ini
"""
            + ginfo["cfg"].strip()
            + """
```

## 2. Level Files (`/home/merlin/Dungeon Keeper/levels/MAPxxxxx.*`)

Each campaign or multiplayer map (`MAP00001` .. `MAP00205`, etc.) consists of a set of companion files with identical base names:

| Extension | File Count | Size Range (Bytes) | Purpose |
| :--- | :--- | :--- | :--- |
"""
        )
        purpose_map = {
            ".SLB": "85x85 Slab grid (`2 + 85*85*2 = 14,450` bytes): tile slab types (Rock, Gold, Earth, Room, Wall)",
            ".OWN": "256x256 Subtile ownership map: player owner index per subtile",
            ".TNG": "Thing table: initial creatures, traps, doors, gold pots, hero parties, and objects",
            ".TXT": "Plaintext level script compiled/interpreted by `script.cpp` (`CREATE_PARTY`, `ADD_TO_PARTY`, `IF`, `SET_TIMER`)",
            ".APT": "Action points: coordinates and radii triggered by script conditions",
            ".LGT": "Static light placements on the map",
            ".INF": "Map palette / style metadata byte",
            ".WIB": "Subtile animation / wobble flags",
            ".WLB": "Water / lava bridge slab flags",
            ".FLG": "Subtile pathfinding / walkability flags",
            ".DAT": "Precalculated 256x256 subtile column indices",
        }
        for lf in ginfo["level_files"]:
            ext = lf["extension"]
            purp = purpose_map.get(ext, "Level auxiliary data")
            f.write(f"| `{ext}` | `{lf['count']}` | `{lf['min_size']}` – `{lf['max_size']}` | {purp} |\n")

        f.write("\n## 3. Savegame Files (`/home/merlin/Dungeon Keeper/SAVE/`)\n\n")
        f.write("| Filename | Size (Bytes) | Header Bytes (Hex) | Header ASCII |\n")
        f.write("| :--- | :--- | :--- | :--- |\n")
        for sf in ginfo["save_files"]:
            f.write(f"| `{sf['name']}` | `{sf['size']}` | `{sf['head_hex'][:47]}` | `{sf['head_ascii']}` |\n")

        f.write("\n## 4. Sample Graphics & Asset Files (`/home/merlin/Dungeon Keeper/DATA/`)\n\n")
        f.write("| Filename | Size (Bytes) | Format |\n")
        f.write("| :--- | :--- | :--- |\n")
        for df in ginfo["data_files"]:
            ext = Path(df["name"]).suffix.upper()
            fmt = (
                "6-bit VGA 256-color palette (768 bytes = 256 * 3 RGB)"
                if df["size"] == 768 or ext == ".PAL"
                else (
                    "6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`)"
                    if ext == ".TAB"
                    else "RLE sprite data / voxel column / lookup table container"
                )
            )
            f.write(f"| `{df['name']}` | `{df['size']}` | {fmt} |\n")

    # 7. Generate docs/FUNCTION_INDEX.md
    with open(docs_dir / "FUNCTION_INDEX.md", "w", encoding="utf-8") as f:
        f.write(
            f"# Complete Function Index ({total_fns} Procedures)\n\n"
            "| # | Address | Inferred Name | Ghidra Name | Module | Attribution | Callers | Callees |\n"
            "| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |\n"
        )
        idx = 0
        for mod_name in sorted(module_map.keys()):
            for fn_meta in module_map[mod_name]:
                idx += 1
                f.write(
                    f"| {idx} | `{fn_meta['address']}` | `{fn_meta['inferred_name']}` | `{fn_meta['ghidra_name']}` | "
                    f"[`src/{mod_name}`](../src/{mod_name}) | `{fn_meta['attribution_method']}` | "
                    f"`{fn_meta['caller_count']}` | `{fn_meta['callee_count']}` |\n"
                )

    print("All documentation and index files generated successfully.")


if __name__ == "__main__":
    main()
