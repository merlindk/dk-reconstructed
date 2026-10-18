# Dungeon Keeper (`KEEPER.EXE`) — Full Reconstructed Source Repository

This repository contains the complete reverse-engineered source reconstruction of Bullfrog Productions' **Dungeon Keeper** (`KEEPER.EXE`, 1997 DOS/4GW release), generated using **REA `6.5.0`** and **Ghidra `12.1.4`** on `server-taller`.

## Summary Statistics

| Metric | Value |
| :--- | :--- |
| **Original Binary** | `/home/merlin/Dungeon Keeper/KEEPER.EXE` (`1,923,995` bytes, Watcom C/C++ DOS/4GW `LE`) |
| **Relocated ELF32 Image** | `/home/merlin/Dungeon Keeper/re/KEEPER.elf` (`1,638,548` bytes, `45,949` internal fixups + `4,368` `.symtab` `STT_FUNC` entries) |
| **Entry Point (VA)** | `0x000f4448` (`Obj 1 + 0xe4448`) |
| **Recovered Functions** | **4418** decompiled procedures (`0x00010000` – `0x001447a0`) |
| **Recovered Defined Strings** | **7692** string literals (`0x00160000` – `0x0019a000`) |
| **Reconstructed Source Modules** | **90** `.cpp` translation units (**85/85** original Bullfrog `.cpp` files + `4` `bflib/` modules + `1` `rt/` module, all non-empty) |
| **Tracked Global Symbols** | **2500** global data/BSS symbols (`0x00160000` – `0x00402024`) |

## Repository Structure

- [`include/`](./include/) — Reconstructed C/C++ headers:
  - [`dk_types.h`](./include/dk_types.h) — Fixed-width primitive types & Watcom conventions
  - [`dk_structs.h`](./include/dk_structs.h) — Core engine structs (`Thing`, `Coord3d`, `Packet`, `CommandDesc`, `SlabMap`, `TbSprite`, `TbNetworkSession`)
  - [`dk_globals.h`](./include/dk_globals.h) — Global `.data_obj3` and `.bss_obj3` variable declarations with exact virtual addresses
  - [`dk_functions.h`](./include/dk_functions.h) — Master function prototype declarations across all 4418 procedures
- [`src/`](./src/) — Reconstructed C/C++ translation units (`85` original Bullfrog `.cpp` modules + [`src/bflib/`](./src/bflib/) + [`src/rt/`](./src/rt/)) containing all **4418** decompiled functions with recovered `LbErrorLog(__FILE__, __LINE__, msg)` annotations
- [`docs/`](./docs/) — Technical reverse-engineering documentation:
  - [`ARCHITECTURE.md`](./docs/ARCHITECTURE.md) — Memory layout, module map, and call-graph architecture
  - [`SUBSYSTEM_MULTIPLAYER.md`](./docs/SUBSYSTEM_MULTIPLAYER.md) — Deep dive into `frontnet.cpp`, `packet.cpp`, and `LbNetwork_*` lockstep networking
  - [`SUBSYSTEM_GRAPHICS.md`](./docs/SUBSYSTEM_GRAPHICS.md) — Deep dive into `setup.cpp`, `engine3.cpp`, `draw.cpp`, `column.cpp`, `ceiling.cpp`, `light.cpp`, `ssprite.cpp`, and `eyelens.cpp`
  - [`DATA_FORMATS.md`](./docs/DATA_FORMATS.md) — Binary specifications of `DATA/*.DAT`, `*.TAB`, `levels/MAP*.*`, and `SAVE/CONTINUE.SAV`
  - [`FUNCTION_INDEX.md`](./docs/FUNCTION_INDEX.md) — Complete searchable table of all 4418 functions
- [`catalog/`](./catalog/) — Raw machine-readable REA + Ghidra JSON/JSONL catalogs (`functions.jsonl`, `procedures.json`, `strings.json`, `module_map.json`, `globals_map.json`, `source_file_xrefs.json`)
