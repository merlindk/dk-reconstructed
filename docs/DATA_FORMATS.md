# Dungeon Keeper — External Asset, Level & Savegame File Formats

Inspected directly from `/home/merlin/Dungeon Keeper/` alongside `file.cpp`, `setup.cpp`, `ssprite.cpp`, and `script.cpp`.

## 1. Configuration (`KEEPER.CFG`)
```ini
INSTALL_PATH=C:\
INSTALL_TYPE=MAX
LANGUAGE=ENG
```

## 2. Level Files (`/home/merlin/Dungeon Keeper/levels/MAPxxxxx.*`)

Each campaign or multiplayer map (`MAP00001` .. `MAP00205`, etc.) consists of a set of companion files with identical base names:

| Extension | File Count | Size Range (Bytes) | Purpose |
| :--- | :--- | :--- | :--- |
| `.APT` | `87` | `4` – `212` | Action points: coordinates and radii triggered by script conditions |
| `.BAK` | `19` | `2630` – `12368` | Level auxiliary data |
| `.CEI` | `1` | `65536` – `65536` | Level auxiliary data |
| `.CLM` | `87` | `6161` – `49160` | Level auxiliary data |
| `.DAT` | `87` | `5809` – `131072` | Precalculated 256x256 subtile column indices |
| `.DOC` | `16` | `30208` – `30208` | Level auxiliary data |
| `.EFF` | `21` | `4804` – `4804` | Level auxiliary data |
| `.ERR` | `1` | `332` – `332` | Level auxiliary data |
| `.FLG` | `62` | `377` – `131072` | Subtile pathfinding / walkability flags |
| `.INF` | `87` | `1` – `1` | Map palette / style metadata byte |
| `.LGT` | `87` | `4` – `1764` | Static light placements on the map |
| `.LIF` | `1` | `210` – `210` | Level auxiliary data |
| `.OLD` | `1` | `5607` – `5607` | Level auxiliary data |
| `.ORI` | `62` | `117` – `65536` | Level auxiliary data |
| `.OWN` | `87` | `159` – `65536` | 256x256 Subtile ownership map: player owner index per subtile |
| `.SLB` | `87` | `157` – `14450` | 85x85 Slab grid (`2 + 85*85*2 = 14,450` bytes): tile slab types (Rock, Gold, Earth, Room, Wall) |
| `.TMN` | `63` | `1` – `1` | Level auxiliary data |
| `.TNG` | `87` | `380` – `21002` | Thing table: initial creatures, traps, doors, gold pots, hero parties, and objects |
| `.TXT` | `88` | `405` – `12110` | Plaintext level script compiled/interpreted by `script.cpp` (`CREATE_PARTY`, `ADD_TO_PARTY`, `IF`, `SET_TIMER`) |
| `.VSN` | `22` | `1` – `1` | Level auxiliary data |
| `.WIB` | `87` | `156` – `65536` | Subtile animation / wobble flags |
| `.WLB` | `30` | `7225` – `7225` | Water / lava bridge slab flags |

## 3. Savegame Files (`/home/merlin/Dungeon Keeper/SAVE/`)

| Filename | Size (Bytes) | Header Bytes (Hex) | Header ASCII |
| :--- | :--- | :--- | :--- |
| `CONTINUE.SAV` | `1382437` | `00 00 00 00 00 00 00 00 00 01 00 00 60 65 00 00` | `............`e..................` |
| `SETTINGS.DAT` | `82` | `00 04 03 00 01 00 7f 5a 01 00 00 01 00 00 00 c8` | `.......Z.................*......` |
| `steam_autocloud.vdf` | `52` | `22 73 74 65 61 6d 5f 61 75 74 6f 63 6c 6f 75 64` | `"steam_autocloud.vdf".{.."accoun` |

## 4. Sample Graphics & Asset Files (`/home/merlin/Dungeon Keeper/DATA/`)

| Filename | Size (Bytes) | Format |
| :--- | :--- | :--- |
| `ALPHA.COL` | `10496` | RLE sprite data / voxel column / lookup table container |
| `ALPHA.DAT` | `1641` | RLE sprite data / voxel column / lookup table container |
| `ALPHA.TAB` | `36` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `BLOCK.TAB` | `722` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `BLUEPAL.DAT` | `518` | RLE sprite data / voxel column / lookup table container |
| `BLUEPALL.DAT` | `518` | RLE sprite data / voxel column / lookup table container |
| `BORD0-0.DAT` | `1008` | RLE sprite data / voxel column / lookup table container |
| `BORD0-0.TAB` | `94` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `BORD0-1.DAT` | `1008` | RLE sprite data / voxel column / lookup table container |
| `BORD0-1.TAB` | `94` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `CEILING.TXT` | `2880` | RLE sprite data / voxel column / lookup table container |
| `COLOURS.COL` | `4096` | RLE sprite data / voxel column / lookup table container |
| `CREAT1.TAB` | `771` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `CREATURE.JTY` | `13139560` | RLE sprite data / voxel column / lookup table container |
| `CREATURE.TAB` | `146400` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `CREATURE.TXT` | `44048` | RLE sprite data / voxel column / lookup table container |
| `CRET0000.DAT` | `385` | RLE sprite data / voxel column / lookup table container |
| `CUBE.DAT` | `9220` | RLE sprite data / voxel column / lookup table container |
| `CUBEGRP.DAT` | `192` | RLE sprite data / voxel column / lookup table container |
| `DD1CREAT.TXT` | `44048` | RLE sprite data / voxel column / lookup table container |
| `DD1TEXT.DAT` | `51963` | RLE sprite data / voxel column / lookup table container |
| `DOGPAL.PAL` | `768` | 6-bit VGA 256-color palette (768 bytes = 256 * 3 RGB) |
| `DP_PREFS` | `324` | RLE sprite data / voxel column / lookup table container |
| `EDITICN1.DAT` | `594` | RLE sprite data / voxel column / lookup table container |
| `EDITICN1.TAB` | `83` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `EDITICN2.DAT` | `783` | RLE sprite data / voxel column / lookup table container |
| `EDITICN2.TAB` | `79` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `FONT0-0.DAT` | `4867` | RLE sprite data / voxel column / lookup table container |
| `FONT0-0.TAB` | `822` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `FONT0-1.DAT` | `13062` | RLE sprite data / voxel column / lookup table container |
| `FONT0-1.TAB` | `594` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `FONT2-0.DAT` | `8642` | RLE sprite data / voxel column / lookup table container |
| `FONT2-0.TAB` | `1338` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `FONT2-1.DAT` | `23364` | RLE sprite data / voxel column / lookup table container |
| `FONT2-1.TAB` | `1338` | 6-byte TbSprite descriptor table (`uint32 offset, uint8 width, uint8 height`) |
| `FRAC00.DAT` | `25955` | RLE sprite data / voxel column / lookup table container |
| `FRAC01.DAT` | `55840` | RLE sprite data / voxel column / lookup table container |
| `FRAC02.DAT` | `28223` | RLE sprite data / voxel column / lookup table container |
| `FRAC03.DAT` | `44925` | RLE sprite data / voxel column / lookup table container |
| `FRAC04.DAT` | `49585` | RLE sprite data / voxel column / lookup table container |
