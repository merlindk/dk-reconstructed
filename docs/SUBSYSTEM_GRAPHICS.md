# Graphics, 3D Software Renderer & UI Subsystem Analysis

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
| `setup.cpp` | `0x69a90` | `sub_069a90` | `1` | `1` | Address-based identifier |
| `setup.cpp` | `0x69acb` | `sub_069acb` | `1` | `1` | Address-based identifier |
| `setup.cpp` | `0x69ba0` | `sub_069ba0` | `1` | `1` | Address-based identifier |
| `setup.cpp` | `0x69c2c` | `dk_unhandled_physicalmemory_069c2c` | `2` | `1` | String 'Unhandled PhysicalMemory' |
| `setup.cpp` | `0x69c7f` | `sub_069c7f` | `1` | `8` | Address-based identifier |
| `setup.cpp` | `0x69edc` | `sub_069edc` | `1` | `7` | Address-based identifier |
| `setup.cpp` | `0x6a356` | `dk_data_gui_dat_06a356` | `2` | `6` | String 'data\gui.dat' |
| `setup.cpp` | `0x6a412` | `dk_please_run_install_dungeon_06a412` | `1` | `21` | String 'Please run INSTALL from the Dungeon Keeper CDRom.' |
| `setup.cpp` | `0x6a553` | `sub_06a553` | `1` | `11` | Address-based identifier |
| `setup.cpp` | `0x6a652` | `sub_06a652` | `1` | `7` | Address-based identifier |
| `setup.cpp` | `0x6a689` | `dk_mcga_minimal_allowed_06a689` | `1` | `28` | String 'MCGA Minimal not allowed' |
| `setup.cpp` | `0x6aac0` | `dk_data_gui_dat_06aac0` | `2` | `18` | String 'data\gui.dat' |
| `setup.cpp` | `0x6adc5` | `dk_data_text_dat_06adc5` | `1` | `5` | String 'DATA/TEXT.DAT' |
| `setup.cpp` | `0x6ae14` | `sub_06ae14` | `1` | `0` | Address-based identifier |
| `setup.cpp` | `0x6ae37` | `sub_06ae37` | `1` | `2` | Address-based identifier |
| `setup.cpp` | `0x6ae80` | `dk_loading_raw_06ae80` | `2` | `13` | String 'LOADING.RAW' |
| `setup.cpp` | `0x6b04d` | `sub_06b04d` | `1` | `3` | Address-based identifier |
| `setup.cpp` | `0x6b0c8` | `dk_data_hpointer_dat_06b0c8` | `2` | `3` | String 'data\hpointer.dat' |
| `setup.cpp` | `0x6b12b` | `dk_data_hpointer_dat_06b12b` | `2` | `2` | String 'data\hpointer.dat' |
| `setup.cpp` | `0x6b16f` | `dk_graphics_heap_already_allocated_06b16f` | `1` | `9` | String 'Graphics heap already allocated' |
| `setup.cpp` | `0x6b4c7` | `dk_data_legal_raw_06b4c7` | `1` | `22` | String 'DATA\LEGAL.RAW' |
| `setup.cpp` | `0x6b7d0` | `sub_06b7d0` | `1` | `0` | Address-based identifier |
| `setup.cpp` | `0x6b820` | `sub_06b820` | `3` | `10` | Address-based identifier |
| `setup.cpp` | `0x6bdda` | `sub_06bdda` | `1` | `18` | Address-based identifier |
| `setup.cpp` | `0x6c22b` | `sub_06c22b` | `1` | `0` | Address-based identifier |
| `setup.cpp` | `0x6c2cc` | `sub_06c2cc` | `1` | `8` | Address-based identifier |
| `engine3.cpp` | `0x948a0` | `sub_0948a0` | `0` | `1` | Address-based identifier |
| `engine3.cpp` | `0x956b8` | `sub_0956b8` | `1` | `1` | Address-based identifier |
| `engine3.cpp` | `0x964d0` | `sub_0964d0` | `1` | `1` | Address-based identifier |
| `engine3.cpp` | `0x98104` | `sub_098104` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0x98248` | `sub_098248` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0x9838c` | `sub_09838c` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0x984d0` | `sub_0984d0` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0x98614` | `sub_098614` | `1` | `3` | Address-based identifier |
| `engine3.cpp` | `0x98cb8` | `sub_098cb8` | `1` | `1` | Address-based identifier |
| `engine3.cpp` | `0x9bdf0` | `sub_09bdf0` | `1` | `1` | Address-based identifier |
| `engine3.cpp` | `0x9ef3c` | `sub_09ef3c` | `1` | `1` | Address-based identifier |
| `engine3.cpp` | `0x9f2a4` | `sub_09f2a4` | `1` | `0` | Address-based identifier |
| `engine3.cpp` | `0x9f314` | `sub_09f314` | `1` | `1` | Address-based identifier |
| `engine3.cpp` | `0x9f8bc` | `sub_09f8bc` | `1` | `2` | Address-based identifier |
| `engine3.cpp` | `0x9fe38` | `sub_09fe38` | `0` | `1` | Address-based identifier |
| `engine3.cpp` | `0x9ff84` | `sub_09ff84` | `1` | `10` | Address-based identifier |
| `engine3.cpp` | `0xa3a4c` | `sub_0a3a4c` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa3aa0` | `sub_0a3aa0` | `1` | `16` | Address-based identifier |
| `engine3.cpp` | `0xa434c` | `sub_0a434c` | `0` | `1` | Address-based identifier |
| `engine3.cpp` | `0xa49ec` | `sub_0a49ec` | `1` | `3` | Address-based identifier |
| `engine3.cpp` | `0xa5030` | `sub_0a5030` | `1` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa5178` | `sub_0a5178` | `2` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa5240` | `sub_0a5240` | `3` | `8` | Address-based identifier |
| `engine3.cpp` | `0xa596c` | `sub_0a596c` | `2` | `1` | Address-based identifier |
| `engine3.cpp` | `0xa5a74` | `sub_0a5a74` | `2` | `1` | Address-based identifier |
| `engine3.cpp` | `0xa5c28` | `sub_0a5c28` | `2` | `1` | Address-based identifier |
| `engine3.cpp` | `0xa5d4c` | `sub_0a5d4c` | `2` | `1` | Address-based identifier |
| `engine3.cpp` | `0xa5dd0` | `sub_0a5dd0` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa5e00` | `sub_0a5e00` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa5e60` | `sub_0a5e60` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa5ff0` | `sub_0a5ff0` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa60a0` | `sub_0a60a0` | `0` | `0` | Address-based identifier |
| `engine3.cpp` | `0xa6134` | `sub_0a6134` | `0` | `1` | Address-based identifier |
| `engine3.cpp` | `0xa6504` | `sub_0a6504` | `1` | `9` | Address-based identifier |
| `engine3.cpp` | `0xa6990` | `dk_illegal_quadrant_0a6990` | `1` | `9` | String 'Illegal quadrant' |
| `engine3.cpp` | `0xaa3a8` | `sub_0aa3a8` | `3` | `0` | Address-based identifier |
| `draw.cpp` | `0x872a4` | `sub_0872a4` | `2` | `4` | Address-based identifier |
| `draw.cpp` | `0x872b8` | `sub_0872b8` | `3` | `14` | Address-based identifier |
| `draw.cpp` | `0x87694` | `sub_087694` | `3` | `13` | Address-based identifier |
| `draw.cpp` | `0x87870` | `sub_087870` | `1` | `13` | Address-based identifier |
| `draw.cpp` | `0x87da4` | `dk_unhandled_screen_mode_087da4` | `1` | `8` | String 'Unhandled screen mode' |
| `draw.cpp` | `0x880d0` | `sub_0880d0` | `2` | `1` | Address-based identifier |
| `draw.cpp` | `0x882b4` | `sub_0882b4` | `2` | `3` | Address-based identifier |
| `draw.cpp` | `0x88698` | `sub_088698` | `1` | `4` | Address-based identifier |
| `draw.cpp` | `0x88c6c` | `sub_088c6c` | `1` | `1` | Address-based identifier |
| `draw.cpp` | `0x88e2c` | `sub_088e2c` | `1` | `3` | Address-based identifier |
| `draw.cpp` | `0x89080` | `sub_089080` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x890bc` | `sub_0890bc` | `3` | `5` | Address-based identifier |
| `draw.cpp` | `0x89ae8` | `sub_089ae8` | `1` | `1` | Address-based identifier |
| `draw.cpp` | `0x8a194` | `sub_08a194` | `1` | `6` | Address-based identifier |
| `draw.cpp` | `0x8a9f4` | `sub_08a9f4` | `0` | `1` | Address-based identifier |
| `draw.cpp` | `0x8abc4` | `sub_08abc4` | `0` | `1` | Address-based identifier |
| `draw.cpp` | `0x8ac9c` | `sub_08ac9c` | `0` | `1` | Address-based identifier |
| `draw.cpp` | `0x8ae00` | `dk_frames_different_between_views_08ae00` | `1` | `3` | String 'No frames different between views C%d, M%d, A%d, B%d' |
| `draw.cpp` | `0x8aee4` | `dk_frames_different_between_views_08aee4` | `1` | `3` | String 'No frames different between views C%d, M%d, A%d, B%d' |
| `draw.cpp` | `0x8afd8` | `sub_08afd8` | `2` | `7` | Address-based identifier |
| `draw.cpp` | `0x8bb2c` | `sub_08bb2c` | `1` | `3` | Address-based identifier |
| `draw.cpp` | `0x8bde8` | `sub_08bde8` | `1` | `12` | Address-based identifier |
| `draw.cpp` | `0x8cc24` | `dk_load_palette_file_08cc24` | `1` | `6` | String 'Cannot load palette file %s' |
| `draw.cpp` | `0x8ccec` | `sub_08ccec` | `25` | `1` | Address-based identifier |
| `draw.cpp` | `0x8cdf4` | `sub_08cdf4` | `0` | `2` | Address-based identifier |
| `draw.cpp` | `0x8d220` | `sub_08d220` | `3` | `1` | Address-based identifier |
| `draw.cpp` | `0x8d348` | `sub_08d348` | `3` | `3` | Address-based identifier |
| `draw.cpp` | `0x8d740` | `sub_08d740` | `1` | `2` | Address-based identifier |
| `draw.cpp` | `0x8d998` | `sub_08d998` | `1` | `4` | Address-based identifier |
| `draw.cpp` | `0x8dcd0` | `sub_08dcd0` | `0` | `4` | Address-based identifier |
| `draw.cpp` | `0x8de90` | `sub_08de90` | `0` | `2` | Address-based identifier |
| `draw.cpp` | `0x8eadc` | `sub_08eadc` | `2` | `0` | Address-based identifier |
| `draw.cpp` | `0x8ebb0` | `sub_08ebb0` | `3` | `3` | Address-based identifier |
| `draw.cpp` | `0x8ecb0` | `sub_08ecb0` | `0` | `1` | Address-based identifier |
| `draw.cpp` | `0x8ed2c` | `sub_08ed2c` | `1` | `0` | Address-based identifier |
| `draw.cpp` | `0x8ed84` | `sub_08ed84` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x8ee8c` | `sub_08ee8c` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x8eebc` | `sub_08eebc` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x8eeec` | `sub_08eeec` | `1` | `3` | Address-based identifier |
| `draw.cpp` | `0x8f190` | `dk_dene_says_big_hello_08f190` | `0` | `3` | String 'Dene says a big 'Hello' to Goth Buns, Tarts and Barbies' |
| `draw.cpp` | `0x8f320` | `sub_08f320` | `1` | `1` | Address-based identifier |
| `draw.cpp` | `0x8f518` | `sub_08f518` | `1` | `4` | Address-based identifier |
| `draw.cpp` | `0x8f75c` | `sub_08f75c` | `1` | `3` | Address-based identifier |
| `draw.cpp` | `0x8f924` | `sub_08f924` | `3` | `4` | Address-based identifier |
| `draw.cpp` | `0x8fb10` | `sub_08fb10` | `1` | `3` | Address-based identifier |
| `draw.cpp` | `0x8fd14` | `sub_08fd14` | `1` | `2` | Address-based identifier |
| `draw.cpp` | `0x8feb4` | `sub_08feb4` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x902e4` | `sub_0902e4` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x90610` | `sub_090610` | `2` | `0` | Address-based identifier |
| `draw.cpp` | `0x90720` | `sub_090720` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x907d8` | `sub_0907d8` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x90a50` | `sub_090a50` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x90c14` | `sub_090c14` | `1` | `1` | Address-based identifier |
| `draw.cpp` | `0x915dc` | `sub_0915dc` | `2` | `1` | Address-based identifier |
| `draw.cpp` | `0x9164c` | `sub_09164c` | `1` | `0` | Address-based identifier |
| `draw.cpp` | `0x929c0` | `sub_0929c0` | `1` | `1` | Address-based identifier |
| `draw.cpp` | `0x92be0` | `sub_092be0` | `1` | `0` | Address-based identifier |
| `draw.cpp` | `0x92d10` | `sub_092d10` | `1` | `0` | Address-based identifier |
| `draw.cpp` | `0x93120` | `sub_093120` | `1` | `0` | Address-based identifier |
| `draw.cpp` | `0x938d8` | `sub_0938d8` | `1` | `0` | Address-based identifier |
| `draw.cpp` | `0x940dc` | `sub_0940dc` | `1` | `0` | Address-based identifier |
| `draw.cpp` | `0x94218` | `sub_094218` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x943c0` | `sub_0943c0` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x94594` | `sub_094594` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x947b8` | `sub_0947b8` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x94820` | `sub_094820` | `0` | `0` | Address-based identifier |
| `draw.cpp` | `0x94824` | `sub_094824` | `3` | `0` | Address-based identifier |
| `draw.cpp` | `0xa43b4` | `sub_0a43b4` | `2` | `4` | Address-based identifier |
| `column.cpp` | `0x15318` | `sub_015318` | `8` | `0` | Address-based identifier |
| `column.cpp` | `0x1534a` | `sub_01534a` | `3` | `1` | Address-based identifier |
| `column.cpp` | `0x15386` | `dk_could_create_column_none_015386` | `3` | `3` | String 'Could not create column: None free' |
| `column.cpp` | `0x15456` | `sub_015456` | `1` | `0` | Address-based identifier |
| `column.cpp` | `0x15479` | `dk_allocate_column_015479` | `3` | `4` | String 'Cannot allocate column' |
| `column.cpp` | `0x15502` | `sub_015502` | `2` | `1` | Address-based identifier |
| `column.cpp` | `0x15561` | `sub_015561` | `0` | `1` | Address-based identifier |
| `column.cpp` | `0x15603` | `sub_015603` | `1` | `3` | Address-based identifier |
| `column.cpp` | `0x156a7` | `sub_0156a7` | `0` | `1` | Address-based identifier |
| `column.cpp` | `0x156de` | `sub_0156de` | `1` | `3` | Address-based identifier |
| `column.cpp` | `0x157ac` | `sub_0157ac` | `4` | `0` | Address-based identifier |
| `column.cpp` | `0x157e4` | `sub_0157e4` | `1` | `0` | Address-based identifier |
| `column.cpp` | `0x1581c` | `sub_01581c` | `1` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7bb10` | `sub_07bb10` | `1` | `3` | Address-based identifier |
| `ceiling.cpp` | `0x7bc8d` | `sub_07bc8d` | `1` | `3` | Address-based identifier |
| `ceiling.cpp` | `0x7c1f0` | `dk_illegal_ceiling_step_value_07c1f0` | `2` | `1` | String 'Illegal ceiling step value' |
| `ceiling.cpp` | `0x7c3c8` | `sub_07c3c8` | `1` | `2` | Address-based identifier |
| `ceiling.cpp` | `0x7c590` | `sub_07c590` | `3` | `2` | Address-based identifier |
| `ceiling.cpp` | `0x7c870` | `sub_07c870` | `0` | `2` | Address-based identifier |
| `ceiling.cpp` | `0x7c998` | `sub_07c998` | `0` | `1` | Address-based identifier |
| `ceiling.cpp` | `0x7caf0` | `sub_07caf0` | `4` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7cd3c` | `sub_07cd3c` | `3` | `1` | Address-based identifier |
| `ceiling.cpp` | `0x7d100` | `sub_07d100` | `1` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7d3f4` | `sub_07d3f4` | `0` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7d674` | `sub_07d674` | `1` | `2` | Address-based identifier |
| `ceiling.cpp` | `0x7d748` | `sub_07d748` | `0` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7d7c0` | `sub_07d7c0` | `0` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7da18` | `sub_07da18` | `13` | `1` | Address-based identifier |
| `ceiling.cpp` | `0x7daac` | `sub_07daac` | `1` | `2` | Address-based identifier |
| `ceiling.cpp` | `0x7dae0` | `sub_07dae0` | `1` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7dbc0` | `sub_07dbc0` | `35` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7ddf8` | `sub_07ddf8` | `7` | `0` | Address-based identifier |
| `ceiling.cpp` | `0x7df48` | `sub_07df48` | `12` | `0` | Address-based identifier |
| `light.cpp` | `0xac094` | `sub_0ac094` | `0` | `5` | Address-based identifier |
| `light.cpp` | `0xac19c` | `sub_0ac19c` | `0` | `2` | Address-based identifier |
| `light.cpp` | `0xac370` | `sub_0ac370` | `2` | `0` | Address-based identifier |
| `light.cpp` | `0xac630` | `sub_0ac630` | `6` | `2` | Address-based identifier |
| `light.cpp` | `0xac694` | `sub_0ac694` | `1` | `1` | Address-based identifier |
| `light.cpp` | `0xac9e8` | `sub_0ac9e8` | `0` | `1` | Address-based identifier |
| `light.cpp` | `0xaca0c` | `sub_0aca0c` | `1` | `2` | Address-based identifier |
| `light.cpp` | `0xaca68` | `sub_0aca68` | `1` | `1` | Address-based identifier |
| `light.cpp` | `0xacaf8` | `dk_light_already_list_0acaf8` | `13` | `2` | String 'Light is already in list' |
| `light.cpp` | `0xacce4` | `dk_attempt_delete_light_0acce4` | `8` | `4` | String 'Attempt to delete light 0' |
| `light.cpp` | `0xacdfc` | `sub_0acdfc` | `2` | `1` | Address-based identifier |
| `light.cpp` | `0xaced0` | `sub_0aced0` | `1` | `0` | Address-based identifier |
| `light.cpp` | `0xacef0` | `sub_0acef0` | `1` | `0` | Address-based identifier |
| `light.cpp` | `0xacf7c` | `dk_attempt_get_anglexy_unallocated_0acf7c` | `1` | `1` | String 'Attempt to get anglexy of unallocated light structure' |
| `light.cpp` | `0xad0f4` | `dk_attempt_get_width_unallocated_0ad0f4` | `1` | `1` | String 'Attempt to get width of unallocated light structure' |
| `light.cpp` | `0xad148` | `dk_attempt_set_intensity_unallocated_0ad148` | `3` | `2` | String 'Attempt to set intensity of unallocated light structure' |
| `light.cpp` | `0xad23c` | `dk_attempt_get_intensity_unallocated_0ad23c` | `4` | `1` | String 'Attempt to get intensity of unallocated light structure' |
| `light.cpp` | `0xad290` | `dk_attempt_set_size_unallocated_0ad290` | `0` | `2` | String 'Attempt to set size of unallocated light structure' |
| `light.cpp` | `0xad37c` | `dk_attempt_get_size_unallocated_0ad37c` | `1` | `1` | String 'Attempt to get size of unallocated light structure' |
| `light.cpp` | `0xad438` | `dk_attempt_stop_animating_size_0ad438` | `0` | `1` | String 'Attempt to stop animating size of unallocated light structur' |
| `light.cpp` | `0xad4f8` | `dk_attempt_stop_animating_intensity_0ad4f8` | `0` | `1` | String 'Attempt to stop animating intensity of unallocated light str' |
| `light.cpp` | `0xad54c` | `dk_light_already_list_0ad54c` | `6` | `1` | String 'Light is already in list' |
| `light.cpp` | `0xad66c` | `dk_attempt_turn_off_unallocated_0ad66c` | `4` | `3` | String 'Attempt to turn off unallocated light structure' |
| `light.cpp` | `0xad834` | `dk_attempt_set_size_unallocated_0ad834` | `6` | `1` | String 'Attempt to set size of unallocated light structure' |
| `light.cpp` | `0xad888` | `dk_attempt_set_minimum_light_0ad888` | `1` | `1` | String 'Attempt to set_minimum light size to cache on non dynamic li' |
| `light.cpp` | `0xadbc0` | `sub_0adbc0` | `2` | `2` | Address-based identifier |
| `light.cpp` | `0xb04e4` | `sub_0b04e4` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb06fc` | `sub_0b06fc` | `0` | `1` | Address-based identifier |
| `light.cpp` | `0xb087c` | `sub_0b087c` | `8` | `1` | Address-based identifier |
| `light.cpp` | `0xb0980` | `sub_0b0980` | `2` | `0` | Address-based identifier |
| `light.cpp` | `0xb0ab4` | `sub_0b0ab4` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb0b20` | `sub_0b0b20` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb0b9c` | `sub_0b0b9c` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb0c44` | `sub_0b0c44` | `2` | `0` | Address-based identifier |
| `light.cpp` | `0xb0d0c` | `sub_0b0d0c` | `1` | `1` | Address-based identifier |
| `light.cpp` | `0xb0f94` | `dk_prev_when_removing_light_0b0f94` | `2` | `2` | String 'No prev when removing light from list' |
| `light.cpp` | `0xb10c0` | `sub_0b10c0` | `1` | `1` | Address-based identifier |
| `light.cpp` | `0xb1398` | `sub_0b1398` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb13c0` | `sub_0b13c0` | `2` | `0` | Address-based identifier |
| `light.cpp` | `0xb14a0` | `sub_0b14a0` | `0` | `2` | Address-based identifier |
| `light.cpp` | `0xb182c` | `sub_0b182c` | `1` | `2` | Address-based identifier |
| `light.cpp` | `0xb1b90` | `sub_0b1b90` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb1c20` | `sub_0b1c20` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb1c40` | `sub_0b1c40` | `0` | `0` | Address-based identifier |
| `light.cpp` | `0xb1f60` | `sub_0b1f60` | `0` | `1` | Address-based identifier |
| `light.cpp` | `0xb20e0` | `sub_0b20e0` | `1` | `4` | Address-based identifier |
| `light.cpp` | `0xb2158` | `sub_0b2158` | `1` | `0` | Address-based identifier |
| `light.cpp` | `0xb21f0` | `sub_0b21f0` | `2` | `1` | Address-based identifier |
| `light.cpp` | `0xb224c` | `sub_0b224c` | `1` | `0` | Address-based identifier |
| `light.cpp` | `0xb2280` | `sub_0b2280` | `2` | `1` | Address-based identifier |
| `light.cpp` | `0xb2398` | `sub_0b2398` | `15` | `0` | Address-based identifier |
| `light.cpp` | `0xb23ec` | `sub_0b23ec` | `2` | `0` | Address-based identifier |
| `light.cpp` | `0xb2440` | `sub_0b2440` | `3` | `0` | Address-based identifier |
| `light.cpp` | `0xb250c` | `sub_0b250c` | `1` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdb120` | `sub_0db120` | `1` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdb1a4` | `sub_0db1a4` | `3` | `3` | Address-based identifier |
| `ssprite.cpp` | `0xdb5c4` | `dk_graphic_id_model_class_0db5c4` | `1` | `5` | String 'Invalid graphic Id %d from model %d, class %d' |
| `ssprite.cpp` | `0xdbb70` | `sub_0dbb70` | `1` | `1` | Address-based identifier |
| `ssprite.cpp` | `0xdbb84` | `dk_graphic_id_model_class_0dbb84` | `2` | `5` | String 'Invalid graphic Id %d from model %d, class %d' |
| `ssprite.cpp` | `0xdc0e0` | `sub_0dc0e0` | `1` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc0f0` | `sub_0dc0f0` | `0` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc150` | `sub_0dc150` | `30` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc184` | `sub_0dc184` | `1` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc19c` | `sub_0dc19c` | `5` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc2c8` | `sub_0dc2c8` | `2` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc324` | `sub_0dc324` | `2` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc354` | `sub_0dc354` | `13` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc3c0` | `sub_0dc3c0` | `1` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc4a0` | `sub_0dc4a0` | `7` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc4cc` | `sub_0dc4cc` | `1` | `1` | Address-based identifier |
| `ssprite.cpp` | `0xdc5c4` | `sub_0dc5c4` | `6` | `2` | Address-based identifier |
| `ssprite.cpp` | `0xdc800` | `sub_0dc800` | `0` | `1` | Address-based identifier |
| `ssprite.cpp` | `0xdc859` | `sub_0dc859` | `0` | `1` | Address-based identifier |
| `ssprite.cpp` | `0xdc8ad` | `sub_0dc8ad` | `0` | `1` | Address-based identifier |
| `ssprite.cpp` | `0xdc8f9` | `sub_0dc8f9` | `0` | `1` | Address-based identifier |
| `ssprite.cpp` | `0xdc95a` | `sub_0dc95a` | `1` | `0` | Address-based identifier |
| `ssprite.cpp` | `0xdc984` | `sub_0dc984` | `1` | `1` | Address-based identifier |
| `ssprite.cpp` | `0xdccfc` | `sub_0dccfc` | `0` | `2` | Address-based identifier |
| `ssprite.cpp` | `0xdcd44` | `sub_0dcd44` | `1` | `2` | Address-based identifier |
| `eyelens.cpp` | `0x26e5e` | `sub_026e5e` | `0` | `4` | Address-based identifier |
| `eyelens.cpp` | `0x26f4d` | `sub_026f4d` | `0` | `4` | Address-based identifier |
| `eyelens.cpp` | `0x26faa` | `sub_026faa` | `0` | `4` | Address-based identifier |
| `eyelens.cpp` | `0x2700c` | `dk_eyelens_memory_already_allocated_02700c` | `2` | `4` | String 'EyeLens Memory already allocated' |
| `eyelens.cpp` | `0x270e0` | `sub_0270e0` | `6` | `1` | Address-based identifier |
| `eyelens.cpp` | `0x27130` | `dk_data_frac_dat_027130` | `5` | `7` | String 'data\frac%02d.dat' |
| `eyelens.cpp` | `0x27320` | `sub_027320` | `2` | `2` | Address-based identifier |
| `frontend.cpp` | `0x2d8e2` | `sub_02d8e2` | `1` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2d920` | `sub_02d920` | `1` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2d974` | `sub_02d974` | `1` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2daae` | `sub_02daae` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2db0c` | `sub_02db0c` | `1` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2dbac` | `sub_02dbac` | `1` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2dbb7` | `sub_02dbb7` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2dc8e` | `sub_02dc8e` | `1` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2dcec` | `sub_02dcec` | `1` | `3` | Address-based identifier |
| `frontend.cpp` | `0x2dfac` | `dk_why_are_we_here_02dfac` | `1` | `30` | String 'Why are we here' |
| `frontend.cpp` | `0x2e486` | `sub_02e486` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e48a` | `sub_02e48a` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2e500` | `sub_02e500` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2e534` | `sub_02e534` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e561` | `sub_02e561` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e58b` | `sub_02e58b` | `0` | `2` | Address-based identifier |
| `frontend.cpp` | `0x2e624` | `sub_02e624` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e647` | `sub_02e647` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e654` | `sub_02e654` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e667` | `sub_02e667` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2e696` | `sub_02e696` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e6a6` | `sub_02e6a6` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2e6bb` | `sub_02e6bb` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2e6c4` | `sub_02e6c4` | `0` | `8` | Address-based identifier |
| `frontend.cpp` | `0x2e8a7` | `dk_load_frontend_palette_02e8a7` | `23` | `37` | String 'Unable to load FRONTEND PALETTE' |
| `frontend.cpp` | `0x2ecbd` | `dk_why_are_we_here_02ecbd` | `0` | `4` | String 'Why are we here when it's not a new level' |
| `frontend.cpp` | `0x2ed34` | `sub_02ed34` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2ed41` | `dk_continue_sav_02ed41` | `0` | `8` | String 'CONTINUE.SAV' |
| `frontend.cpp` | `0x2ee00` | `sub_02ee00` | `3` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2ee3e` | `sub_02ee3e` | `0` | `2` | Address-based identifier |
| `frontend.cpp` | `0x2eeb9` | `sub_02eeb9` | `0` | `6` | Address-based identifier |
| `frontend.cpp` | `0x2ef93` | `sub_02ef93` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2efb4` | `sub_02efb4` | `1` | `4` | Address-based identifier |
| `frontend.cpp` | `0x2f18a` | `sub_02f18a` | `2` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f1c8` | `sub_02f1c8` | `5` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f1d2` | `sub_02f1d2` | `5` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f1dc` | `sub_02f1dc` | `2` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f237` | `sub_02f237` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f251` | `sub_02f251` | `0` | `2` | Address-based identifier |
| `frontend.cpp` | `0x2f404` | `sub_02f404` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f414` | `sub_02f414` | `1` | `3` | Address-based identifier |
| `frontend.cpp` | `0x2f541` | `sub_02f541` | `0` | `2` | Address-based identifier |
| `frontend.cpp` | `0x2f56e` | `sub_02f56e` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f688` | `sub_02f688` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f755` | `sub_02f755` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f769` | `sub_02f769` | `0` | `2` | Address-based identifier |
| `frontend.cpp` | `0x2f7d3` | `sub_02f7d3` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f7e0` | `sub_02f7e0` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2f7ef` | `sub_02f7ef` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f7fc` | `sub_02f7fc` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f809` | `sub_02f809` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f819` | `sub_02f819` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f829` | `sub_02f829` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f83c` | `sub_02f83c` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f84f` | `sub_02f84f` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2f874` | `dk_intromix_smk_02f874` | `1` | `2` | String 'INTROMIX.SMK' |
| `frontend.cpp` | `0x2f8a2` | `sub_02f8a2` | `1` | `6` | Address-based identifier |
| `frontend.cpp` | `0x2f9ce` | `dk_outromix_smk_02f9ce` | `1` | `1` | String 'OUTROMIX.SMK' |
| `frontend.cpp` | `0x2f9f5` | `sub_02f9f5` | `2` | `10` | Address-based identifier |
| `frontend.cpp` | `0x2faf6` | `sub_02faf6` | `1` | `12` | Address-based identifier |
| `frontend.cpp` | `0x2fc49` | `sub_02fc49` | `1` | `14` | Address-based identifier |
| `frontend.cpp` | `0x2fda1` | `sub_02fda1` | `1` | `12` | Address-based identifier |
| `frontend.cpp` | `0x2feca` | `sub_02feca` | `2` | `1` | Address-based identifier |
| `frontend.cpp` | `0x2fefd` | `sub_02fefd` | `1` | `0` | Address-based identifier |
| `frontend.cpp` | `0x2ff2e` | `dk_continue_sav_02ff2e` | `1` | `7` | String 'CONTINUE.SAV' |
| `frontend.cpp` | `0x2ffe4` | `dk_ldata_front_raw_02ffe4` | `1` | `10` | String 'LDATA\FRONT.RAW' |
| `frontend.cpp` | `0x30057` | `dk_ldata_front_raw_030057` | `1` | `1` | String 'LDATA\FRONT.RAW' |
| `frontend.cpp` | `0x30061` | `sub_030061` | `1` | `2` | Address-based identifier |
| `frontend.cpp` | `0x300a7` | `sub_0300a7` | `1` | `5` | Address-based identifier |
| `frontend.cpp` | `0x3012d` | `sub_03012d` | `1` | `3` | Address-based identifier |
| `frontend.cpp` | `0x30266` | `sub_030266` | `1` | `0` | Address-based identifier |
| `frontend.cpp` | `0x302ba` | `sub_0302ba` | `1` | `0` | Address-based identifier |
| `frontend.cpp` | `0x30309` | `dk_data_hiscores_dat_030309` | `2` | `1` | String 'DATA\HISCORES.DAT' |
| `frontend.cpp` | `0x30322` | `dk_data_hiscores_dat_030322` | `1` | `4` | String 'DATA\HISCORES.DAT' |
| `frontend.cpp` | `0x30389` | `sub_030389` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x3038a` | `sub_03038a` | `0` | `1` | Address-based identifier |
| `frontend.cpp` | `0x303ad` | `sub_0303ad` | `1` | `6` | Address-based identifier |
| `frontend.cpp` | `0x306e4` | `sub_0306e4` | `1` | `1` | Address-based identifier |
| `frontend.cpp` | `0x30782` | `sub_030782` | `3` | `1` | Address-based identifier |
| `frontend.cpp` | `0x3078d` | `sub_03078d` | `0` | `3` | Address-based identifier |
| `frontend.cpp` | `0x30972` | `sub_030972` | `0` | `0` | Address-based identifier |
| `frontend.cpp` | `0x30996` | `sub_030996` | `1` | `1` | Address-based identifier |
| `frontend.cpp` | `0x30a28` | `sub_030a28` | `1` | `0` | Address-based identifier |
| `frontend.cpp` | `0x30a2d` | `dk_text_long_box_030a2d` | `3` | `4` | String 'Text too long for error box' |
| `frontend.cpp` | `0x30ca0` | `sub_030ca0` | `1` | `1` | Address-based identifier |
| `frontend.cpp` | `0x30cb9` | `sub_030cb9` | `1` | `2` | Address-based identifier |
| `frontend.cpp` | `0x30cd9` | `sub_030cd9` | `2` | `5` | Address-based identifier |
| `frontend.cpp` | `0x30e04` | `sub_030e04` | `1` | `1` | Address-based identifier |
| `frontend.cpp` | `0x30e88` | `sub_030e88` | `1` | `3` | Address-based identifier |
| `frontmap.cpp` | `0x30e47` | `sub_030e47` | `1` | `1` | Address-based identifier |
| `frontmap.cpp` | `0x30ef8` | `dk_ldata_dkflag00_dat_030ef8` | `1` | `15` | String 'LDATA\DKFLAG00.DAT' |
| `frontmap.cpp` | `0x31213` | `dk_ldata_dkflag00_dat_031213` | `1` | `7` | String 'LDATA\DKFLAG00.DAT' |
| `frontmap.cpp` | `0x31273` | `sub_031273` | `1` | `5` | Address-based identifier |
| `frontmap.cpp` | `0x31599` | `sub_031599` | `1` | `5` | Address-based identifier |
| `frontmap.cpp` | `0x31854` | `sub_031854` | `1` | `8` | Address-based identifier |
| `frontmap.cpp` | `0x31a51` | `dk_ldata_netflag_dat_031a51` | `1` | `13` | String 'LDATA\NETFLAG.DAT' |
| `frontmap.cpp` | `0x31bd6` | `dk_ldata_netflag_dat_031bd6` | `1` | `5` | String 'LDATA\NETFLAG.DAT' |
| `frontmap.cpp` | `0x31c23` | `sub_031c23` | `1` | `5` | Address-based identifier |
| `frontmap.cpp` | `0x31def` | `dk_LbNetwork_Exchange_031def` | `1` | `11` | References 'LbNetwork_Exchange failed' |
| `frontmap.cpp` | `0x322e9` | `dk_number_players_0322e9` | `1` | `10` | String 'Invalid number of players' |
| `frontmap.cpp` | `0x32612` | `sub_032612` | `1` | `1` | Address-based identifier |
| `frontmap.cpp` | `0x32738` | `sub_032738` | `2` | `3` | Address-based identifier |
| `frontmap.cpp` | `0x327b5` | `sub_0327b5` | `2` | `1` | Address-based identifier |
| `frontmap.cpp` | `0x32805` | `sub_032805` | `2` | `1` | Address-based identifier |
| `frontmap.cpp` | `0x328e1` | `sub_0328e1` | `2` | `0` | Address-based identifier |
| `frontmap.cpp` | `0x329ae` | `dk_enough_memory_game_structure_0329ae` | `2` | `8` | String 'Not enough memory in game structure for map' |
| `frontmap.cpp` | `0x32b21` | `sub_032b21` | `3` | `2` | Address-based identifier |
| `frontmap.cpp` | `0x32bf6` | `sub_032bf6` | `1` | `1` | Address-based identifier |
| `frontmap.cpp` | `0x32d30` | `sub_032d30` | `1` | `2` | Address-based identifier |
| `frontmap.cpp` | `0x32d8c` | `sub_032d8c` | `2` | `6` | Address-based identifier |
| `frontmap.cpp` | `0x32e00` | `sub_032e00` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x52988` | `sub_052988` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x529b9` | `sub_0529b9` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52a88` | `sub_052a88` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52b58` | `sub_052b58` | `7` | `1` | Address-based identifier |
| `newgui.cpp` | `0x52b67` | `dk_more_room_menu_stack_052b67` | `1` | `1` | String 'NO MORE ROOM FOR MENU STACK' |
| `newgui.cpp` | `0x52be7` | `sub_052be7` | `3` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52c47` | `sub_052c47` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52c6d` | `sub_052c6d` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x52ced` | `sub_052ced` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x52d6d` | `sub_052d6d` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52da0` | `sub_052da0` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52def` | `sub_052def` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x52e3d` | `sub_052e3d` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52e7f` | `sub_052e7f` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52ead` | `sub_052ead` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52ebe` | `sub_052ebe` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52ee8` | `sub_052ee8` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52f03` | `sub_052f03` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52f16` | `sub_052f16` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52f44` | `sub_052f44` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x52f78` | `sub_052f78` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x53021` | `sub_053021` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5315d` | `sub_05315d` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53188` | `sub_053188` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53208` | `sub_053208` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53240` | `sub_053240` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53290` | `sub_053290` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53306` | `sub_053306` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53356` | `sub_053356` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x533e6` | `sub_0533e6` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5341e` | `sub_05341e` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5345d` | `sub_05345d` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x534e5` | `sub_0534e5` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x53684` | `sub_053684` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53716` | `sub_053716` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53753` | `dk_illegal_computer_player_053753` | `0` | `1` | String 'Illegal computer player' |
| `newgui.cpp` | `0x537af` | `sub_0537af` | `2` | `4` | Address-based identifier |
| `newgui.cpp` | `0x5389b` | `sub_05389b` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x53971` | `sub_053971` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x53a18` | `dk_state_type_gui_state_053a18` | `0` | `2` | String 'Unknown state_type_to_gui_state[]' |
| `newgui.cpp` | `0x53c05` | `sub_053c05` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53c32` | `sub_053c32` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53c6b` | `sub_053c6b` | `14` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53ca3` | `sub_053ca3` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x53ccc` | `dk_oi_there_fade_time_053ccc` | `2` | `10` | String 'Oi! There is a fade time less than 1. Idiot.' |
| `newgui.cpp` | `0x54089` | `sub_054089` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x540cb` | `sub_0540cb` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x54269` | `sub_054269` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5426d` | `sub_05426d` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x542d6` | `sub_0542d6` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5430b` | `sub_05430b` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x54324` | `sub_054324` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5435a` | `sub_05435a` | `2` | `0` | Address-based identifier |
| `newgui.cpp` | `0x543dd` | `sub_0543dd` | `3` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5449e` | `sub_05449e` | `6` | `9` | Address-based identifier |
| `newgui.cpp` | `0x54742` | `sub_054742` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x547f3` | `sub_0547f3` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5482c` | `dk_cycle_button_have_gui_05482c` | `0` | `2` | String 'Cycle button cannot have a 'gui_area_normal_button' draw fun' |
| `newgui.cpp` | `0x548cb` | `dk_cycle_button_have_gui_0548cb` | `0` | `3` | String 'Cycle button cannot have a 'gui_area_normal_button' draw fun' |
| `newgui.cpp` | `0x549a4` | `sub_0549a4` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x54a22` | `sub_054a22` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x54aa9` | `sub_054aa9` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x54add` | `dk_cycle_button_must_have_054add` | `0` | `2` | String 'Cycle button must have a non-null UBYTE Data pointer!' |
| `newgui.cpp` | `0x54bab` | `dk_cycle_button_must_have_054bab` | `0` | `2` | String 'Cycle button must have a non-null UBYTE Data pointer!' |
| `newgui.cpp` | `0x54c79` | `sub_054c79` | `0` | `4` | Address-based identifier |
| `newgui.cpp` | `0x54d41` | `dk_button_must_point_scroll_054d41` | `0` | `3` | String 'Button must point to a SCROLL_TEXT_WINDOW data item' |
| `newgui.cpp` | `0x54d8a` | `sub_054d8a` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x54eeb` | `sub_054eeb` | `0` | `7` | Address-based identifier |
| `newgui.cpp` | `0x551e4` | `sub_0551e4` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5542b` | `sub_05542b` | `0` | `5` | Address-based identifier |
| `newgui.cpp` | `0x55701` | `sub_055701` | `0` | `8` | Address-based identifier |
| `newgui.cpp` | `0x55b68` | `sub_055b68` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x55e33` | `sub_055e33` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x56010` | `sub_056010` | `0` | `4` | Address-based identifier |
| `newgui.cpp` | `0x563b1` | `sub_0563b1` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x56642` | `sub_056642` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x56699` | `sub_056699` | `0` | `4` | Address-based identifier |
| `newgui.cpp` | `0x5674c` | `sub_05674c` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5686f` | `sub_05686f` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x569a1` | `sub_0569a1` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x56a50` | `sub_056a50` | `0` | `4` | Address-based identifier |
| `newgui.cpp` | `0x56b63` | `sub_056b63` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x56ee6` | `sub_056ee6` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x570a7` | `sub_0570a7` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x571cf` | `sub_0571cf` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x57348` | `sub_057348` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x574b5` | `sub_0574b5` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5762c` | `sub_05762c` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x57739` | `sub_057739` | `3` | `6` | Address-based identifier |
| `newgui.cpp` | `0x5789a` | `dk_have_text_scrolling_box_05789a` | `1` | `4` | String 'Cannot have a TEXT_SCROLLING box type without a pointer to a' |
| `newgui.cpp` | `0x57a52` | `sub_057a52` | `2` | `4` | Address-based identifier |
| `newgui.cpp` | `0x57b6f` | `sub_057b6f` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x57bba` | `dk_bar_small_057bba` | `3` | `2` | String 'Bar is too small' |
| `newgui.cpp` | `0x57cac` | `dk_bar_small_057cac` | `2` | `2` | String 'Bar is too small' |
| `newgui.cpp` | `0x57d9e` | `dk_bar_small_057d9e` | `1` | `3` | String 'Bar is too small' |
| `newgui.cpp` | `0x57ea2` | `sub_057ea2` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x57f01` | `sub_057f01` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x57f6b` | `sub_057f6b` | `10` | `0` | Address-based identifier |
| `newgui.cpp` | `0x57fd9` | `sub_057fd9` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x57fe4` | `sub_057fe4` | `5` | `20` | Address-based identifier |
| `newgui.cpp` | `0x58718` | `sub_058718` | `2` | `3` | Address-based identifier |
| `newgui.cpp` | `0x587a6` | `sub_0587a6` | `2` | `0` | Address-based identifier |
| `newgui.cpp` | `0x587ff` | `sub_0587ff` | `1` | `4` | Address-based identifier |
| `newgui.cpp` | `0x588b6` | `sub_0588b6` | `2` | `0` | Address-based identifier |
| `newgui.cpp` | `0x58921` | `dk_jonty_here_am_writing_058921` | `1` | `3` | String 'JONTY HERE   : ...I AM WRITING THIS AT 4AM ON KEEPERS LAST D' |
| `newgui.cpp` | `0x58a7e` | `sub_058a7e` | `1` | `3` | Address-based identifier |
| `newgui.cpp` | `0x58b21` | `sub_058b21` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x58b37` | `dk_this_bloody_tooltip_long_058b37` | `1` | `4` | String 'This bloody tooltip is too long' |
| `newgui.cpp` | `0x58ba8` | `sub_058ba8` | `5` | `6` | Address-based identifier |
| `newgui.cpp` | `0x58ca7` | `sub_058ca7` | `1` | `3` | Address-based identifier |
| `newgui.cpp` | `0x58e1c` | `sub_058e1c` | `4` | `2` | Address-based identifier |
| `newgui.cpp` | `0x590f8` | `sub_0590f8` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x59323` | `sub_059323` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x595ab` | `sub_0595ab` | `2` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5990a` | `sub_05990a` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x59a23` | `sub_059a23` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59aef` | `sub_059aef` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59c71` | `sub_059c71` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x59c83` | `sub_059c83` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x59ca1` | `sub_059ca1` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x59ccb` | `sub_059ccb` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59d02` | `sub_059d02` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59d1a` | `sub_059d1a` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x59d40` | `sub_059d40` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x59d66` | `sub_059d66` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59dc4` | `dk_stupid_spell_chosen_059dc4` | `0` | `3` | String 'Stupid spell chosen' |
| `newgui.cpp` | `0x59ee7` | `sub_059ee7` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59f51` | `sub_059f51` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59f7e` | `sub_059f7e` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x59fd4` | `sub_059fd4` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a004` | `sub_05a004` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a06d` | `sub_05a06d` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a0e7` | `sub_05a0e7` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a111` | `dk_illegal_autopilot_type_05a111` | `0` | `1` | String 'ILLEGAL AUTOPILOT TYPE' |
| `newgui.cpp` | `0x5a180` | `sub_05a180` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a18a` | `sub_05a18a` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a19c` | `sub_05a19c` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a1a4` | `sub_05a1a4` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a1b6` | `sub_05a1b6` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a1d1` | `sub_05a1d1` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a1da` | `sub_05a1da` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a202` | `sub_05a202` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a22b` | `sub_05a22b` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a266` | `sub_05a266` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a2b1` | `sub_05a2b1` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a2bc` | `sub_05a2bc` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a2c7` | `sub_05a2c7` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5a338` | `sub_05a338` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a365` | `sub_05a365` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a3a8` | `sub_05a3a8` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a3ce` | `sub_05a3ce` | `0` | `4` | Address-based identifier |
| `newgui.cpp` | `0x5a417` | `sub_05a417` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5a432` | `sub_05a432` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5a47f` | `sub_05a47f` | `0` | `4` | Address-based identifier |
| `newgui.cpp` | `0x5a521` | `sub_05a521` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a526` | `sub_05a526` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a567` | `sub_05a567` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a5b5` | `sub_05a5b5` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a600` | `sub_05a600` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5a649` | `sub_05a649` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5a692` | `sub_05a692` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a6a6` | `sub_05a6a6` | `1` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5a705` | `sub_05a705` | `0` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5a76c` | `sub_05a76c` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a83d` | `sub_05a83d` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5a8f3` | `dk_eek_this_what_you_05a8f3` | `0` | `3` | String 'EEK! This is what you just picked up a second ago!' |
| `newgui.cpp` | `0x5aaf4` | `sub_05aaf4` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5ab45` | `sub_05ab45` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ab81` | `sub_05ab81` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5abd1` | `sub_05abd1` | `0` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5abf3` | `sub_05abf3` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ac13` | `sub_05ac13` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ac1e` | `sub_05ac1e` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ac4a` | `sub_05ac4a` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5ac77` | `sub_05ac77` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ac80` | `sub_05ac80` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5accc` | `sub_05accc` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5acf7` | `sub_05acf7` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ad0a` | `sub_05ad0a` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ad26` | `sub_05ad26` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ae20` | `sub_05ae20` | `2` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ae90` | `sub_05ae90` | `2` | `4` | Address-based identifier |
| `newgui.cpp` | `0x5aee2` | `sub_05aee2` | `4` | `4` | Address-based identifier |
| `newgui.cpp` | `0x5afda` | `sub_05afda` | `10` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5b1bc` | `dk_backup_input_field_small_05b1bc` | `1` | `7` | String 'backup_input_field too small' |
| `newgui.cpp` | `0x5b25b` | `sub_05b25b` | `1` | `5` | Address-based identifier |
| `newgui.cpp` | `0x5b3dd` | `sub_05b3dd` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5b3fc` | `sub_05b3fc` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5b4e7` | `sub_05b4e7` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5b5e1` | `sub_05b5e1` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5b5f5` | `sub_05b5f5` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5b645` | `sub_05b645` | `10` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5b940` | `sub_05b940` | `1` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5b9b3` | `sub_05b9b3` | `3` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5b9c0` | `sub_05b9c0` | `2` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5ba63` | `sub_05ba63` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ba80` | `sub_05ba80` | `2` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5bb49` | `sub_05bb49` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5bb9c` | `sub_05bb9c` | `2` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5bcc1` | `sub_05bcc1` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5bcd7` | `sub_05bcd7` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5bd22` | `sub_05bd22` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5be78` | `sub_05be78` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5bf63` | `sub_05bf63` | `1` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5c053` | `sub_05c053` | `1` | `8` | Address-based identifier |
| `newgui.cpp` | `0x5c2e3` | `sub_05c2e3` | `4` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5c377` | `sub_05c377` | `2` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5c408` | `dk_undefined_event_type_05c408` | `0` | `8` | String 'Undefined event type: %d' |
| `newgui.cpp` | `0x5c4f3` | `sub_05c4f3` | `2` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5c544` | `sub_05c544` | `2` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5c74d` | `sub_05c74d` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5c7c4` | `sub_05c7c4` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5c7ea` | `sub_05c7ea` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5c810` | `sub_05c810` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5c82f` | `sub_05c82f` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5c848` | `sub_05c848` | `19` | `6` | Address-based identifier |
| `newgui.cpp` | `0x5c8bc` | `sub_05c8bc` | `0` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5c8fa` | `sub_05c8fa` | `6` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5c985` | `sub_05c985` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5c9cf` | `sub_05c9cf` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5cabb` | `sub_05cabb` | `2` | `3` | Address-based identifier |
| `newgui.cpp` | `0x5cc4a` | `sub_05cc4a` | `3` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5cc56` | `sub_05cc56` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ccf5` | `dk_cycle_button_have_gui_05ccf5` | `0` | `1` | String 'Cycle button cannot have a 'gui_area_normal_button' draw fun' |
| `newgui.cpp` | `0x5cd55` | `sub_05cd55` | `3` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5cda7` | `sub_05cda7` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5ce3d` | `sub_05ce3d` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5ce63` | `dk_create_floating_spirit_05ce63` | `0` | `3` | String 'Unable to create floating spirit' |
| `newgui.cpp` | `0x5ceca` | `sub_05ceca` | `1` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5cee9` | `sub_05cee9` | `2` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5cef9` | `sub_05cef9` | `1` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5cf03` | `sub_05cf03` | `4` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5cf2d` | `sub_05cf2d` | `16` | `1` | Address-based identifier |
| `newgui.cpp` | `0x5cf9f` | `sub_05cf9f` | `0` | `4` | Address-based identifier |
| `newgui.cpp` | `0x5d01f` | `sub_05d01f` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5d032` | `sub_05d032` | `1` | `2` | Address-based identifier |
| `newgui.cpp` | `0x5d15e` | `sub_05d15e` | `2` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5d174` | `sub_05d174` | `0` | `0` | Address-based identifier |
| `newgui.cpp` | `0x5d19c` | `dk_dead_thing_friend_enemy_05d19c` | `1` | `1` | String 'Dead thing in friend/enemy battle-list' |
| `newgui.cpp` | `0x5d280` | `sub_05d280` | `1` | `5` | Address-based identifier |
| `panmap.cpp` | `0x62570` | `sub_062570` | `0` | `0` | Address-based identifier |
| `panmap.cpp` | `0x62578` | `sub_062578` | `1` | `3` | Address-based identifier |
| `panmap.cpp` | `0x62787` | `sub_062787` | `1` | `0` | Address-based identifier |
| `panmap.cpp` | `0x627b5` | `sub_0627b5` | `17` | `2` | Address-based identifier |
| `panmap.cpp` | `0x629cc` | `sub_0629cc` | `3` | `0` | Address-based identifier |
| `panmap.cpp` | `0x62a0d` | `sub_062a0d` | `1` | `0` | Address-based identifier |
| `panmap.cpp` | `0x62b62` | `sub_062b62` | `1` | `0` | Address-based identifier |
| `panmap.cpp` | `0x62d70` | `sub_062d70` | `1` | `1` | Address-based identifier |
| `panmap.cpp` | `0x62eb7` | `sub_062eb7` | `1` | `2` | Address-based identifier |
| `panmap.cpp` | `0x62ee2` | `sub_062ee2` | `3` | `2` | Address-based identifier |
| `panmap.cpp` | `0x63122` | `dk_door_flagged_position_063122` | `15` | `2` | String 'No door for flagged position' |
| `panmap.cpp` | `0x633c4` | `sub_0633c4` | `1` | `7` | Address-based identifier |
| `bflib/bflib_video.cpp` | `0xf0d90` | `sub_0f0d90` | `2` | `4` | Address-based identifier |
| `bflib/bflib_video.cpp` | `0xf143c` | `dk_sbawe32_mdi_0f143c` | `3` | `16` | String 'SBAWE32.MDI' |
| `bflib/bflib_video.cpp` | `0xf1b38` | `dk_bf_debug_audio_0f1b38` | `1` | `11` | String 'BF_DEBUG_AUDIO' |
| `bflib/bflib_video.cpp` | `0xfe128` | `dk_bf25_init_music_0fe128` | `1` | `21` | String 'BF25 - Init Music' |

## 3. Anchor Graphics & Renderer Functions (Decompiled)

### `dk_unhandled_physicalmemory_069c2c` (`0x69c2c` in `setup.cpp`)
- **Evidence**: String 'Unhandled PhysicalMemory'
```c
longlong FUN_00069c2c(void)

{
  uint in_EAX;
  uint in_EDX;
  
  if (in_EAX < 0x10) {
    if (in_EAX == 8) {
      return CONCAT44(in_EDX,0x100000);
    }
  }
  else {
    if (in_EAX < 0x11) {
      return CONCAT44(in_EDX,0x200000);
    }
    if (0x17 < in_EAX) {
      if (in_EAX < 0x19) {
        return CONCAT44(in_EDX,0x500000);
      }
      if (in_EAX == 0x20) {
        return CONCAT44(in_EDX,0x800000);
      }
    }
  }
  FUN_000ddaf0();
  return (ulonglong)in_EDX << 0x20;
}
```

### `dk_data_gui_dat_06a356` (`0x6a356` in `setup.cpp`)
- **Evidence**: String 'data\gui.dat'
```c
longlong FUN_0006a356(void)

{
  bool bVar1;
  undefined4 extraout_ECX;
  uint in_EDX;
  char *pcVar2;
  int extraout_EDX;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar2 = s_data_gui_dat_00187500;
  while (*(int *)(pcVar2 + 0x1c) != 0) {
    FUN_000e83c8();
    pcVar2 = (char *)(extraout_EDX + 0x2c);
  }
  bVar1 = true;
  uVar4 = FUN_000e9498();
  while( true ) {
    while( true ) {
      iVar3 = (int)((ulonglong)uVar4 >> 0x20);
      if (*(int *)(iVar3 + 0x1c) == 0) {
        if ((int)uVar4 != 0) {
          FUN_000e94b0();
        }
        return CONCAT44(in_EDX,1);
      }
      *(ushort *)(iVar3 + 0x28) = (ushort)bVar1;
      uVar5 = FUN_000e823c();
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      uVar4 = CONCAT44(iVar3,extraout_ECX);
      if ((int)uVar5 != -100) break;
      if (!bVar1) goto LAB_0006a3bc;
      bVar1 = false;
    }
    if ((int)uVar5 == -0x65) break;
    bVar1 = true;
    uVar4 = CONCAT44(iVar3 + 0x2c,extraout_ECX);
  }
  FUN_000e7714(&DAT_0019cbac,s_Unable_to_load_file____s__00166f63,iVar3);
LAB_0006a3bc:
  FUN_000ddaf0();
  return (ulonglong)in_EDX << 0x20;
}
```

### `sub_06a553` (`0x6a553` in `setup.cpp`)
- **Evidence**: Address-based identifier
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_0006a553(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_000e830c();
  if (iVar1 != 0) {
    FUN_000ddaf0();
    return (ulonglong)in_EDX << 0x20;
  }
  iVar1 = FUN_0006a356();
  if (iVar1 != 0) {
    FUN_0006b0c8();
    DAT_0019cba4 = 0x280;
    DAT_0019cba2 = 400;
    DAT_0019cba6 = 2;
    _DAT_0019cba8 = 0x20;
    _DAT_0019cbaa = 8;
    FUN_000f05f0();
    FUN_000ebc98();
    FUN_000eba38();
    FUN_000e6a6c();
    FUN_000e6b20();
    FUN_000ac630();
    FUN_0007c1f0();
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 | 0x40;
  }
  return CONCAT44(in_EDX,(uint)(iVar1 != 0));
}
```

### `dk_mcga_minimal_allowed_06a689` (`0x6a689` in `setup.cpp`)
- **Evidence**: String 'MCGA Minimal not allowed'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006a689(void)

{
  undefined2 uVar1;
  ushort in_AX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort extraout_CX;
  ushort extraout_CX_00;
  ushort uVar5;
  ushort extraout_CX_01;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 in_EDX;
  uint uVar6;
  
  uVar1 = DAT_003d9874;
  iVar4 = DAT_00376518;
  uVar6 = (uint)DAT_003d9878;
  if ((in_AX == DAT_003d9878) && (DAT_00376518 == 0)) {
    uVar2 = 1;
    goto LAB_00069ed6;
  }
  FUN_000ebc10(DAT_0019d0c7);
  if (DAT_003d9878 < 10) {
    if (DAT_003d9878 == 1) {
      if (DAT_00376518 == 0) {
        FUN_000270e0();
        FUN_0003a57e();
        FUN_0003a4bb();
        FUN_0006b12b();
        if (uVar6 != (extraout_ECX & 0xffff)) {
          FUN_000e792c();
        }
        goto LAB_0006a734;
      }
      if (uVar6 != (extraout_ECX_01 & 0xffff)) {
        FUN_000e792c();
      }
      FUN_000e83f0();
      FUN_000ddaf0();
      uVar5 = extraout_CX;
LAB_0006a6fe:
      DAT_00376518 = 0;
      goto LAB_0006a739;
    }
LAB_0006a809:
    FUN_000ddaf0();
  }
  else {
    if ((10 < DAT_003d9878) && (DAT_003d9878 != 0xd)) goto LAB_0006a809;
    if (DAT_00376518 != 0) {
      if ((uVar6 != (extraout_ECX_01 & 0xffff)) || (iVar4 != 0)) {
        FUN_000e792c();
      }
      FUN_000e83f0();
      uVar5 = extraout_CX_01;
      goto LAB_0006a6fe;
    }
    FUN_000270e0();
    FUN_0003a57e();
    FUN_0003a4bb();
    FUN_0006b12b();
    if ((uVar6 != (extraout_ECX_00 & 0xffff)) || (iVar4 != 0)) {
      FUN_000e792c();
    }
LAB_0006a734:
    FUN_000e83f0();
    uVar5 = extraout_CX_00;
LAB_0006a739:
    if (uVar5 == 0) goto LAB_0006a809;
    if (1 < uVar5) {
      if ((uVar5 == 0xd) && (iVar3 = FUN_000e830c(), iVar3 == 0)) {
        if ((uVar6 != (extraout_ECX_03 & 0xffff)) || (iVar4 != 0)) {
          iVar4 = FUN_000e6a30();
          if (iVar4 == 0) {
            iVar4 = FUN_000e7750(0xd,0x280,0x1e0,DAT_00199210,1,0);
          }
          else {
            iVar4 = FUN_000e7750(10,0x280,400,DAT_00199210,1,0);
          }
          if (iVar4 != 1) goto LAB_0006a80e;
          DAT_0019cba4 = 0x280;
          DAT_0019cba2 = 400;
        }
        FUN_0006b0c8();
        DAT_0019cba6 = 1;
        _DAT_0019cba8 = 0x10;
        _DAT_0019cbaa = 0x10;
        if (DAT_00377768 != 0) {
          FUN_000dd920();
          uVar2 = FUN_000dd920();
          FUN_000e7714(&DAT_0019cbac,s__s_gmaphi_raw_0016709e,uVar2);
          FUN_000e984c();
        }
        FUN_0006ae37();
LAB_0006a9e5:
        FUN_000e7904(0);
        FUN_000e79fc();
        FUN_00027320();
        FUN_000f05f0();
        FUN_000ebc98();
        FUN_000eba38();
        FUN_000e6a6c();
        FUN_000e6b20();
        FUN_000ebf9c();
        DAT_003d9874 = uVar1;
        iVar4 = FUN_0003a3d4();
        uVar2 = 0;
        if (iVar4 != 0) {
          FUN_0003a4e3();
          uVar2 = 1;
          DAT_0019d0b8 = DAT_0019d0b8 & 0xfb;
        }
        goto LAB_00069ed6;
      }
      goto LAB_0006a809;
    }
    iVar4 = FUN_0006a356();
    if (iVar4 == 0) goto LAB_0006a809;
    if ((uVar6 == (extraout_ECX_02 & 0xffff)) ||
       (iVar4 = FUN_000e7750(1,0x140,200,DAT_00199210,2,0), iVar4 == 1)) {
      FUN_0006b0c8();
      DAT_0019cba4 = 0x280;
      DAT_0019cba2 = 400;
      DAT_0019cba6 = 2;
      _DAT_0019cba8 = 0x20;
      _DAT_0019cbaa = 8;
      if (DAT_00377768 != 0) {
        FUN_000dd920();
        uVar2 = FUN_000dd920();
        FUN_000e7714(&DAT_0019cbac,s__s_gmap_raw_0016705f,uVar2);
        FUN_000e984c();
      }
      goto LAB_0006a9e5;
    }
  }
LAB_0006a80e:
  uVar2 = 0;
LAB_00069ed6:
  return CONCAT44(in_EDX,uVar2);
}
```

### `dk_data_gui_dat_06aac0` (`0x6aac0` in `setup.cpp`)
- **Evidence**: String 'data\gui.dat'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006aac0(void)

{
  undefined2 uVar1;
  ushort in_AX;
  undefined4 uVar2;
  int iVar3;
  ushort extraout_CX;
  ushort extraout_CX_00;
  ushort extraout_CX_01;
  ushort uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 in_EDX;
  uint uVar5;
  
  uVar1 = DAT_003d9874;
  uVar5 = (uint)DAT_003d9878;
  if ((in_AX == DAT_003d9878) && (DAT_00376518 != 0)) {
    uVar2 = 1;
    DAT_003d9874 = uVar1;
    goto LAB_00069ed6;
  }
  if (DAT_003d9878 < 10) {
    if (DAT_003d9878 != 1) goto LAB_0006abbd;
    if (DAT_00376518 != 0) {
      if (in_AX != 1) {
        FUN_000e792c();
      }
      goto LAB_0006ab26;
    }
    FUN_000270e0();
    FUN_0003a57e();
    FUN_0003a4bb();
    FUN_0006b12b();
    if ((extraout_ECX & 0xffff) != 1) {
      FUN_000e792c();
    }
LAB_0006ab61:
    FUN_000e83f0();
    uVar4 = extraout_CX_00;
  }
  else if ((DAT_003d9878 < 0xb) || (DAT_003d9878 == 0xd)) {
    if (DAT_00376518 == 0) {
      FUN_000270e0();
      FUN_0003a57e();
      FUN_0003a4bb();
      if (uVar5 != (extraout_ECX_01 & 0xffff)) {
        FUN_000e792c();
      }
      goto LAB_0006ab61;
    }
    FUN_0006b12b();
    if (uVar5 != (extraout_ECX_00 & 0xffff)) {
      FUN_000e792c();
    }
LAB_0006ab26:
    FUN_000e83f0();
    DAT_00376518 = 0;
    uVar4 = extraout_CX;
  }
  else {
LAB_0006abbd:
    FUN_000ddaf0();
    uVar4 = extraout_CX_01;
  }
  if (uVar4 == 0) {
LAB_0006ac13:
    FUN_000ddaf0();
  }
  else {
    if (uVar4 < 2) {
      DAT_00376518 = 1;
      iVar3 = FUN_000e830c();
      if ((iVar3 == 0) &&
         ((uVar5 == (extraout_ECX_02 & 0xffff) ||
          (iVar3 = FUN_000e7750(1,0x140,200,DAT_00199210,2,0), iVar3 == 1)))) {
        DAT_0019cba4 = 0x280;
        DAT_0019cba2 = 400;
        DAT_0019cba6 = 2;
        _DAT_0019cba8 = 0x20;
        _DAT_0019cbaa = 8;
LAB_0006ac87:
        FUN_000e7904(0);
        FUN_000e79fc();
        FUN_000ebc98();
        FUN_000eba38();
        FUN_000e6a6c();
        FUN_000e6b20();
        uVar2 = 1;
        DAT_003d9874 = uVar1;
        goto LAB_00069ed6;
      }
      goto LAB_0006ac13;
    }
    if (uVar4 != 0xd) goto LAB_0006ac13;
    DAT_00376518 = 1;
    FUN_0002f1c8();
    iVar3 = FUN_000e830c();
    if (iVar3 != 0) goto LAB_0006ac13;
    FUN_0002f1d2();
    if ((uVar5 == (extraout_ECX_03 & 0xffff)) ||
       (iVar3 = FUN_000e7750(0xd,0x280,0x1e0,DAT_00199210,1,0), iVar3 == 1)) {
      DAT_0019cba4 = 0x280;
      DAT_0019cba2 = 0x1e0;
      DAT_0019cba6 = 1;
      _DAT_0019cba8 = 0x10;
      _DAT_0019cbaa = 0x10;
      FUN_000f05f0();
      goto LAB_0006ac87;
    }
  }
  uVar2 = 0;
LAB_00069ed6:
  return CONCAT44(in_EDX,uVar2);
}
```

### `dk_loading_raw_06ae80` (`0x6ae80` in `setup.cpp`)
- **Evidence**: String 'LOADING.RAW'
```c
void FUN_0006ae80(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int extraout_ECX;
  undefined1 *puVar6;
  
  FUN_000e6a10();
  FUN_000e846c(DAT_00199228);
  FUN_000150f0();
  FUN_000dd920(s_LOADING_RAW_001671d1);
  uVar2 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s__s_001671e4,uVar2);
  iVar3 = FUN_000e984c();
  if (iVar3 != -1) {
    FUN_000dd920(s_LOADING_PAL_001671ea);
    uVar2 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s__s_001671fd,uVar2);
    FUN_000150f0();
    iVar3 = FUN_000e984c();
    if (iVar3 != 0x300) {
      FUN_000ddaf0();
      FUN_000e8c83();
    }
    FUN_000e7904(0);
    iVar3 = FUN_000e797c();
    if (iVar3 == 1) {
      if ((DAT_003d9878 == 0xd) || (DAT_003d9878 == 10)) {
        puVar5 = DAT_003d9818;
        if (DAT_003d9878 == 0xd) {
          puVar5 = DAT_003d9818 + DAT_003d9834 * 0x28;
        }
        iVar3 = 0;
        puVar6 = DAT_00199228;
        do {
          iVar4 = 0;
          do {
            uVar1 = *puVar6;
            *puVar5 = uVar1;
            iVar4 = iVar4 + 1;
            puVar6 = puVar6 + 1;
            puVar5[1] = uVar1;
            puVar5 = puVar5 + 2;
          } while (iVar4 < 0x140);
          iVar3 = iVar3 + 1;
          FUN_000e8c83();
          puVar5 = (undefined1 *)(extraout_ECX + DAT_003d9834);
        } while (iVar3 < 200);
      }
      else {
        iVar3 = 0;
        do {
          FUN_000e8c83();
          iVar3 = iVar3 + 1;
        } while (iVar3 < 200);
      }
      FUN_000e797c();
      FUN_000e79fc();
    }
  }
  FUN_000e8f24();
  FUN_00030782();
  return;
}
```

### `dk_data_hpointer_dat_06b0c8` (`0x6b0c8` in `setup.cpp`)
- **Evidence**: String 'data\hpointer.dat'
```c
void FUN_0006b0c8(void)

{
  int iVar1;
  
  iVar1 = FUN_000e830c();
  if (iVar1 != 0) {
    FUN_000ddaf0();
  }
  FUN_000f05d8();
  return;
}
```

### `dk_graphics_heap_already_allocated_06b16f` (`0x6b16f` in `setup.cpp`)
- **Evidence**: String 'Graphics heap already allocated'
```c
longlong FUN_0006b16f(void)

{
  bool bVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint in_EDX;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_130 [144];
  undefined1 local_a0 [144];
  
  iVar2 = 0;
  if (DAT_00334019 == 0) {
    FUN_000f0730();
    FUN_0006df91();
    iVar2 = extraout_ECX;
    if (DAT_0033318b != 0) {
      FUN_000e94b0();
      iVar2 = extraout_ECX_00;
      DAT_0033318b = extraout_ECX_00;
    }
  }
  if (DAT_00333187 != 0) {
    FUN_000ddaf0();
    FUN_000e94b0();
    DAT_00333187 = 0;
    iVar2 = extraout_ECX_01;
  }
  lVar6 = CONCAT44(DAT_00334065,DAT_00333187);
  if (DAT_00334019 == 0) {
    do {
      lVar6 = CONCAT44(DAT_00334065,DAT_00333187);
      if (DAT_0033318b != 0) goto LAB_0006b23e;
      DAT_0033318f = FUN_00069c2c();
      lVar5 = FUN_000e9484();
      lVar6 = CONCAT44(DAT_00334065,DAT_00333187);
      DAT_0033318b = (int)lVar5;
      iVar2 = extraout_ECX_02;
    } while (lVar5 != 0x800000000);
    iVar2 = 1;
  }
LAB_0006b23e:
  do {
    iVar3 = (int)((ulonglong)lVar6 >> 0x20);
    DAT_00333187 = (int)lVar6;
    if (DAT_00333187 != 0) goto LAB_0006b2b4;
    if (iVar3 == 0x20) {
      DAT_00333183 = 0x800000;
    }
    else if (iVar3 == 0x18) {
      DAT_00333183 = 0x500000;
    }
    else if (iVar3 == 0x10) {
      DAT_00333183 = 0x200000;
    }
    else {
      DAT_00333183 = 0x100000;
    }
    lVar6 = FUN_000e9484();
    iVar2 = extraout_ECX_03;
  } while (lVar6 != 0x800000000);
  iVar2 = 1;
  DAT_00333187 = 0;
LAB_0006b2b4:
  if (iVar2 != 0) {
    while ((DAT_00333187 == 0 && ((DAT_00334019 != 0 || (DAT_0033318b != 0))))) {
      iVar2 = DAT_00333183 + -0x4000;
      if (DAT_00334019 == 0) {
        iVar3 = iVar2;
        if ((DAT_00333183 <= DAT_0033318f) &&
           (iVar4 = DAT_0033318f + -0x4000, bVar1 = DAT_0033318f <= DAT_00333183,
           iVar3 = DAT_00333183, DAT_0033318f = iVar4, bVar1)) {
          iVar3 = iVar2;
        }
        DAT_00333183 = iVar3;
        iVar2 = DAT_00333183;
        if (DAT_0033318f < 0x80000) goto LAB_0006b347;
      }
      DAT_00333183 = iVar2;
      if (DAT_00333183 < 0x80000) {
        if (DAT_0033318b != 0) {
          FUN_000e94b0();
          DAT_0033318b = 0;
        }
LAB_0006b347:
        FUN_000ddaf0();
        return (ulonglong)in_EDX << 0x20;
      }
      if (DAT_0033318b != 0) {
        FUN_000e94b0();
        DAT_0033318b = 0;
      }
      if (DAT_00333187 != 0) {
        FUN_000e94b0();
        DAT_00333187 = 0;
      }
      if (DAT_00334019 == 0) {
        DAT_0033318b = FUN_000e9484();
      }
      DAT_00333187 = FUN_000e9484();
    }
  }
  FUN_000f0f8c(s_GraphicsHeap_Size__d_001672ed,DAT_00333183);
  if (DAT_00334019 == 0) {
    FUN_000f0f8c(s_SoundHeap_Size__d_00167302,DAT_0033318f);
  }
  if (DAT_00334019 == 0) {
    FUN_000e7714(local_130,s__s_SOUND_DAT_0016731a,s_SOUND_00167314);
    FUN_000e7714(local_a0,s__s_SPEECH_DAT_0016732d,s_SOUND_00167327);
    iVar2 = FUN_0006deac(0x656);
    if (iVar2 == 0) {
      FUN_000e94b0();
      DAT_0033318b = 0;
      DAT_00334019 = 1;
      FUN_000ddaf0();
    }
  }
  return CONCAT44(in_EDX,1);
}
```

### `dk_illegal_quadrant_0a6990` (`0xa6990` in `engine3.cpp`)
- **Evidence**: String 'Illegal quadrant'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a6990(void)

{
  int *piVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int in_EAX;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  int **ppiVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  int *local_3ac;
  uint local_3a8 [36];
  undefined2 local_318;
  undefined2 local_316;
  undefined2 local_314;
  int local_308;
  int local_2fc;
  ushort *local_2dc;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  int local_2b4;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_50;
  int local_44;
  int local_40;
  byte local_3c;
  byte local_38;
  undefined1 local_34;
  byte local_24;
  byte local_20;
  
  DAT_00388318 = (uint)(*(int *)(in_EAX + 0x17) == 0x10000);
  if (0x10000 < *(int *)(in_EAX + 0x17)) {
    *(undefined4 *)(in_EAX + 0x17) = 0x10000;
  }
  local_2d4 = DAT_003d983c;
  local_2d0 = DAT_003d9840;
  local_2cc = DAT_003d9844;
  iVar21 = (DAT_002f10ce >> 0x18) * 0x4ef;
  local_2c8 = DAT_003d9848;
  uVar20 = (uint)DAT_0019cba6;
  local_2c4 = *(ushort *)(&DAT_0019d510 + iVar21) / uVar20;
  local_2c0 = *(ushort *)(&DAT_0019d512 + iVar21) / uVar20;
  uVar4 = *(ushort *)(&DAT_0019d50e + iVar21);
  local_3a8[0] = 0xa6a9d;
  FUN_000e6a6c();
  local_3a8[0] = 0xa6aae;
  FUN_0012f940();
  local_3ac = (int *)0xa6ac0;
  local_3a8[0] = uVar4 / uVar20;
  FUN_00137e43();
  iVar21 = (int)(*(int *)((int)local_2dc + 7) + 0x100U & 0x7ff) >> 9;
  iVar18 = *(int *)((int)local_2dc + 0x17) * 0x20;
  local_24 = (byte)iVar21;
  iVar19 = iVar18 >> 0x1f;
  local_2b4 = (int)((iVar18 + iVar19 * -0x100) - (uint)(iVar19 << 7 < 0)) >> 8;
  local_2a0 = *(undefined4 *)(&DAT_00191f50 + iVar21 * 4);
  local_29c = *(undefined4 *)(&DAT_00191f60 + iVar21 * 4);
  local_298 = *(undefined4 *)(&DAT_00191f30 + iVar21 * 4);
  local_294 = *(undefined4 *)(&DAT_00191f40 + iVar21 * 4);
  iVar19 = (DAT_002f10ce >> 0x18) * 0x4ef;
  iVar21 = (int)((uint)*(ushort *)(&DAT_0019d50c + iVar19) << 0x10) / local_2b4;
  iVar18 = (int)((uint)*(ushort *)(&DAT_0019d50e + iVar19) << 0x10) / local_2b4;
  DAT_00379394 = (&DAT_0019d0f3)[iVar19];
  DAT_00379395 = '\x01' << (DAT_00379394 & 0x1f);
  DAT_00387d20 = &DAT_002f317f;
  local_3ac = (int *)0xa6bbe;
  FUN_000e6a10();
  iVar21 = iVar21 >> 1;
  iVar18 = iVar18 >> 1;
  local_3ac = (int *)0xa6bfc;
  FUN_000780df();
  if (3 < local_24) {
    local_3ac = (int *)0xa6fb3;
    FUN_000ddaf0();
    return;
  }
  iVar19 = DAT_002f10ce >> 0x18;
  switch(local_24) {
  case 0:
    local_2a8 = (int)((uint)*local_2dc - iVar21) >> 8;
    local_2a4 = (int)((uint)local_2dc[1] - iVar18) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)*local_2dc + local_2a8 * -0x100) * local_2b4) >> 8);
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)local_2dc[1] + local_2a4 * -0x100) * local_2b4) >> 8);
    break;
  case 1:
    iVar18 = (int)(iVar18 + (uint)*local_2dc) >> 8;
    local_2a4 = (int)((uint)local_2dc[1] - iVar21) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)local_2dc[1] + local_2a4 * -0x100) * local_2b4) >> 8);
    local_2a8 = iVar18 + -1;
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)((iVar18 * 0x100 - (uint)*local_2dc) * local_2b4) >> 8);
    break;
  case 2:
    local_2a8 = (int)(iVar21 + (uint)*local_2dc) >> 8;
    local_2a4 = (int)(iVar18 + (uint)local_2dc[1]) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(local_2b4 * ((local_2a8 + 1) * 0x100 - (uint)*local_2dc)) >> 8);
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)((local_2a4 * 0x100 - (uint)local_2dc[1]) * local_2b4) >> 8);
    local_2a4 = local_2a4 + -1;
    break;
  case 3:
    local_2a8 = (int)((uint)*local_2dc - iVar18) >> 8;
    local_2a4 = (int)(iVar21 + (uint)local_2dc[1]) >> 8;
    local_44 = (uint)*(ushort *)(&DAT_0019d50c + iVar19 * 0x4ef) * 0x80 -
               ((int)(((local_2a4 + 1) * 0x100 - (uint)local_2dc[1]) * local_2b4) >> 8);
    local_40 = (uint)*(ushort *)(&DAT_0019d50e + iVar19 * 0x4ef) * 0x80 -
               ((int)(((uint)*local_2dc + local_2a8 * -0x100) * local_2b4) >> 8);
  }
  uVar4 = *(ushort *)(&DAT_0019d510 + iVar19 * 0x4ef);
  iVar21 = (uint)DAT_0019cba6 * DAT_003d9864;
  local_3ac = (int *)0xa6cef;
  uVar33 = FUN_000dc150();
  local_2c0 = ((int)uVar33 - (int)((ulonglong)uVar33 >> 0x20)) * 0x100 - local_40;
  iVar18 = local_2b4 * 0x80 >> 0x1f;
  local_280 = (int)((local_2b4 * 0x80 + iVar18 * -0x100) - (uint)(iVar18 << 7 < 0)) >> 8;
  local_27c = (int)(((iVar21 - (uint)uVar4) * 0x100 - local_44) * 0x100) / local_2b4;
  iVar21 = 0;
  local_278 = local_2a8 * 0x100;
  local_50 = -1;
  local_274 = local_2a4 * 0x100;
  do {
    uVar22 = (uint)local_24;
    iVar18 = (int)(local_2c0 << 8) / local_2b4;
    uVar20 = local_27c * *(int *)(&DAT_00191f50 + uVar22 * 4) + local_2a8 * 0x100 +
             *(int *)(&DAT_00191f30 + uVar22 * 4) * iVar18;
    uVar14 = local_27c * *(int *)(&DAT_00191f60 + uVar22 * 4) + local_2a4 * 0x100 +
             iVar18 * *(int *)(&DAT_00191f40 + uVar22 * 4);
    local_2bc = uVar20 & 0xff;
    local_2b8 = uVar14 & 0xff;
    iVar31 = *(int *)(&DAT_00191f10 + uVar22 * 4) + ((int)uVar20 >> 8);
    iVar32 = *(int *)(&DAT_00191f20 + uVar22 * 4) + ((int)uVar14 >> 8);
    iVar18 = _DAT_00387da4;
    iVar19 = DAT_00387dd8;
    iVar26 = DAT_00387ddc;
    iVar17 = DAT_00387de0;
    iVar11 = DAT_00387de4;
    uVar20 = DAT_00387de8;
    uVar14 = DAT_00387dec;
    if ((((-1 < iVar31) && (iVar31 < 0xff)) && (-1 < iVar32)) && (iVar32 < 0xff)) {
      iVar13 = (iVar32 * 0x100 + iVar31) * 5;
      iVar18 = (int)&DAT_00279203 + iVar13;
      iVar19 = iVar31;
      iVar26 = iVar32;
      iVar17 = iVar31;
      iVar11 = iVar32;
      uVar20 = local_2bc;
      uVar14 = local_2b8;
      if (iVar21 != 0) {
        if (((uint)*(ushort *)
                    ((int)&DAT_0019e973 +
                    (*(uint *)((int)&DAT_00279203 + iVar13 + 1) & 0x7ff) * 0x18 + 3) &
            1 << ((byte)local_50 & 0x1f)) != 0) {
          _DAT_00387da4 = iVar18;
          DAT_00387de0 = iVar31;
          DAT_00387de4 = iVar32;
          DAT_00387de8 = local_2bc;
          DAT_00387dec = local_2b8;
        }
        iVar18 = _DAT_00387da4;
        iVar17 = DAT_00387de0;
        iVar11 = DAT_00387de4;
        uVar20 = DAT_00387de8;
        uVar14 = DAT_00387dec;
        if (((DAT_00388314 != '\0') && (iVar21 == 2)) ||
           ((iVar19 = DAT_00387dd8, iVar26 = DAT_00387ddc, DAT_00388314 == '\0' && (iVar21 == 5))))
        {
          iVar19 = DAT_00387dd8;
          iVar26 = DAT_00387ddc;
          DAT_00387df0 = iVar31;
          DAT_00387df4 = iVar32;
          DAT_00387df8 = local_2bc;
          DAT_00387dfc = local_2b8;
        }
      }
    }
    DAT_00387dec = uVar14;
    DAT_00387de8 = uVar20;
    DAT_00387de4 = iVar11;
    DAT_00387de0 = iVar17;
    DAT_00387ddc = iVar26;
    DAT_00387dd8 = iVar19;
    _DAT_00387da4 = iVar18;
    local_50 = local_50 + 1;
    iVar21 = iVar21 + 1;
    local_2c0 = local_2c0 + local_280;
  } while (iVar21 < 8);
  ppiVar30 = (int **)local_3a8;
  if (DAT_00387e02._2_1_ == '\0') goto LAB_000a7ab4;
  local_38 = (byte)((uint)local_2b4 >> 8);
  local_20 = local_38;
  ppiVar30 = (int **)local_3a8;
  if (DAT_00387e02._2_1_ == '\0') goto LAB_000a7ab4;
  local_34 = (undefined1)((int)(*(int *)((int)local_2dc + 7) + 0x100U & 0x7ff) >> 9);
  local_318 = DAT_00387e07;
  local_316 = DAT_00387e0b;
  local_3ac = &local_264;
  local_314 = 0x500;
  ppiVar30 = &local_3ac;
  FUN_000aa3a8();
  uVar20 = (uint)local_3c;
  iVar21 = ((int)(uVar20 * 0x80) >> 8) * (5 - DAT_00387e17);
  local_264 = uVar20 * 3;
  if (local_38 < 2) {
    if (local_38 == 1) goto LAB_000a72ca;
  }
  else {
    iVar18 = local_270 + uVar20 * -3;
    if (local_38 < 3) {
      local_270 = iVar18;
LAB_000a72ca:
      local_26c = local_26c + uVar20 * -3;
      local_268 = local_268 + local_264;
    }
    else if (local_38 == 3) {
      local_270 = iVar18;
    }
  }
  local_268 = local_268 - local_24 / 2;
  iVar18 = 0;
  do {
    iVar19 = DAT_00387e02;
    puVar29 = DAT_00387d20;
    local_25c = (iVar18 + 1) * (uint)local_24 + local_270;
    local_254 = DAT_00387e02 >> 0x18;
    iVar26 = local_254;
    local_260 = local_26c;
    local_258 = local_26c;
    if (local_268 < 0) {
      iVar17 = 0;
    }
    else {
      iVar17 = local_268;
      if (0x2be < local_268) {
        iVar17 = 0x2be;
      }
    }
    uVar16 = (&DAT_00387220)[iVar17];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    uVar14 = (uint)DAT_0019cba6;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar17] = DAT_00387d20;
    DAT_00387d20[2] = (int)((uint)local_24 * iVar18 + local_270) / (int)uVar14;
    DAT_00387d20[3] = local_26c / (int)uVar14;
    DAT_00387d20[4] = local_25c / (int)uVar14;
    DAT_00387d20[5] = local_26c / (int)uVar14;
    local_254._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 6) = (undefined1)local_254;
    iVar19 = DAT_00387e02;
    iVar11 = local_268 + uVar20 * -3;
    local_250 = iVar11;
    local_240 = DAT_00387e02 >> 0x18;
    iVar17 = local_240;
    local_308 = local_26c + local_264;
    local_248 = (iVar18 + 1) * (uint)local_24 + local_270;
    local_24c = (uint)local_24 * iVar18 + local_270;
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    else if (0x2be < iVar11) {
      iVar11 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar11];
    *(undefined1 *)(DAT_00387d20 + 8) = 0xd;
    DAT_00387d20[7] = uVar16;
    (&DAT_00387220)[iVar11] = DAT_00387d20 + 7;
    uVar14 = (uint)DAT_0019cba6;
    DAT_00387d20[9] = local_24c / (int)uVar14;
    DAT_00387d20[10] = local_308 / (int)uVar14;
    DAT_00387d20[0xb] = local_248 / (int)uVar14;
    piVar1 = DAT_00387d20 + 0xc;
    DAT_00387d20 = DAT_00387d20 + 0xe;
    *piVar1 = local_308 / (int)uVar14;
    local_240._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(puVar29 + 0xd) = (undefined1)local_240;
    iVar19 = DAT_00387e02;
    puVar29 = DAT_00387d20;
    local_2fc = DAT_00387e02 >> 0x18;
    iVar11 = local_2fc;
    local_234 = local_26c + iVar21;
    local_238 = (iVar18 + 1) * (uint)local_24 + local_270;
    local_23c = (uint)local_24 * iVar18 + local_270;
    if (local_268 < 0) {
      iVar31 = 0;
    }
    else {
      iVar31 = local_268;
      if (0x2be < local_268) {
        iVar31 = 0x2be;
      }
    }
    uVar16 = (&DAT_00387220)[iVar31];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar31] = DAT_00387d20;
    uVar14 = (uint)DAT_0019cba6;
    DAT_00387d20[2] = local_23c / (int)uVar14;
    DAT_00387d20[3] = local_234 / (int)uVar14;
    DAT_00387d20[4] = local_238 / (int)uVar14;
    piVar1 = DAT_00387d20 + 5;
    DAT_00387d20 = DAT_00387d20 + 7;
    *piVar1 = local_234 / (int)uVar14;
    local_2fc._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(puVar29 + 6) = (undefined1)local_2fc;
    iVar19 = DAT_00387e02;
    iVar32 = local_268 + uVar20 * -3;
    local_230 = iVar32;
    local_220 = DAT_00387e02 >> 0x18;
    iVar31 = local_220;
    local_224 = local_26c + local_264 + iVar21;
    local_228 = (iVar18 + 1) * (uint)local_24 + local_270;
    local_22c = (uint)local_24 * iVar18 + local_270;
    if (iVar32 < 0) {
      iVar32 = 0;
    }
    else if (0x2be < iVar32) {
      iVar32 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar32];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar32] = DAT_00387d20;
    uVar14 = (uint)DAT_0019cba6;
    DAT_00387d20[2] = local_22c / (int)uVar14;
    DAT_00387d20[3] = local_224 / (int)uVar14;
    DAT_00387d20[4] = local_228 / (int)uVar14;
    iVar18 = iVar18 + 1;
    DAT_00387d20[5] = local_224 / (int)uVar14;
    local_220._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    puVar29 = DAT_00387d20 + 6;
    DAT_00387d20 = DAT_00387d20 + 7;
    *(undefined1 *)puVar29 = (undefined1)local_220;
  } while (iVar18 < 3);
  iVar18 = 0;
  do {
    iVar19 = DAT_00387e02;
    iVar13 = iVar18 * (uint)local_24;
    local_21c = local_268 - iVar13;
    local_20c = DAT_00387e02 >> 0x18;
    iVar32 = local_20c;
    local_210 = (uint)local_24 * (iVar18 + 1) + local_26c;
    local_218 = local_270;
    local_214 = local_270;
    if (local_21c < 0) {
      iVar23 = 0;
    }
    else {
      iVar23 = local_21c;
      if (0x2be < local_21c) {
        iVar23 = 0x2be;
      }
    }
    uVar16 = (&DAT_00387220)[iVar23];
    *(undefined1 *)(DAT_00387d20 + 1) = 0xd;
    *DAT_00387d20 = uVar16;
    (&DAT_00387220)[iVar23] = DAT_00387d20;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[2] = local_270 / (int)uVar20;
    DAT_00387d20[3] = (local_26c + iVar13) / (int)uVar20;
    DAT_00387d20[4] = local_270 / (int)uVar20;
    DAT_00387d20[5] = local_210 / (int)uVar20;
    local_20c._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 6) = (undefined1)local_20c;
    iVar19 = DAT_00387e02;
    local_204 = iVar18 * (uint)local_24;
    iVar23 = local_268 - local_204;
    local_208 = iVar23;
    local_1f8 = DAT_00387e02 >> 0x18;
    iVar13 = local_1f8;
    local_1fc = local_26c + (uint)local_24 * (iVar18 + 1);
    local_200 = local_270 + local_264;
    local_204 = local_204 + local_26c;
    if (iVar23 < 0) {
      iVar23 = 0;
    }
    else if (0x2be < iVar23) {
      iVar23 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar23];
    *(undefined1 *)(DAT_00387d20 + 8) = 0xd;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[7] = uVar16;
    (&DAT_00387220)[iVar23] = DAT_00387d20 + 7;
    DAT_00387d20[9] = local_200 / (int)uVar20;
    DAT_00387d20[10] = local_204 / (int)uVar20;
    DAT_00387d20[0xb] = local_200 / (int)uVar20;
    DAT_00387d20[0xc] = local_1fc / (int)uVar20;
    local_1f8._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 0xd) = (undefined1)local_1f8;
    iVar19 = DAT_00387e02;
    iVar12 = iVar18 * (uint)local_24;
    iVar24 = local_268 - iVar12;
    local_1f4 = iVar24;
    local_1e4 = DAT_00387e02 >> 0x18;
    iVar23 = local_1e4;
    local_1ec = iVar12 + local_26c + iVar21;
    local_1f0 = local_270;
    local_1e8 = local_270;
    if (iVar24 < 0) {
      iVar24 = 0;
    }
    else if (0x2be < iVar24) {
      iVar24 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar24];
    *(undefined1 *)(DAT_00387d20 + 0xf) = 0xd;
    DAT_00387d20[0xe] = uVar16;
    (&DAT_00387220)[iVar24] = DAT_00387d20 + 0xe;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[0x10] = local_270 / (int)uVar20;
    DAT_00387d20[0x11] = local_1ec / (int)uVar20;
    DAT_00387d20[0x12] = local_270 / (int)uVar20;
    DAT_00387d20[0x13] = (int)(local_26c + (uint)local_24 * (iVar18 + 1) + iVar21) / (int)uVar20;
    local_1e4._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    *(undefined1 *)(DAT_00387d20 + 0x14) = (undefined1)local_1e4;
    iVar19 = DAT_00387e02;
    iVar24 = iVar18 * (uint)local_24;
    iVar25 = local_268 - iVar24;
    local_1e0 = iVar25;
    local_1d4 = iVar21 + (uint)local_24 * (iVar18 + 1) + local_26c;
    local_1dc = local_270 + local_264;
    local_1d0 = DAT_00387e02 >> 0x18;
    iVar12 = local_1d0;
    local_1d8 = iVar24 + local_26c + iVar21;
    if (iVar25 < 0) {
      iVar25 = 0;
    }
    else if (0x2be < iVar25) {
      iVar25 = 0x2be;
    }
    uVar16 = (&DAT_00387220)[iVar25];
    *(undefined1 *)(DAT_00387d20 + 0x16) = 0xd;
    DAT_00387d20[0x15] = uVar16;
    (&DAT_00387220)[iVar25] = DAT_00387d20 + 0x15;
    uVar20 = (uint)DAT_0019cba6;
    DAT_00387d20[0x17] = local_1dc / (int)uVar20;
    DAT_00387d20[0x18] = local_1d8 / (int)uVar20;
    DAT_00387d20[0x19] = local_1dc / (int)uVar20;
    iVar18 = iVar18 + 1;
    DAT_00387d20[0x1a] = local_1d4 / (int)uVar20;
    local_1d0._0_1_ = (undefined1)((uint)iVar19 >> 0x18);
    puVar29 = DAT_00387d20 + 0x1b;
    DAT_00387d20 = DAT_00387d20 + 0x1c;
    *(undefined1 *)puVar29 = (undefined1)local_1d0;
    local_2fc = iVar11;
    local_254 = iVar26;
    local_240 = iVar17;
    local_220 = iVar31;
    local_20c = iVar32;
    local_1f8 = iVar13;
    local_1e4 = iVar23;
    local_1d0 = iVar12;
  } while (iVar18 < 3);
LAB_000a7ab4:
  DAT_00387e02._0_3_ = (uint3)(ushort)DAT_00387e02;
  iVar26 = (DAT_002f10ce >> 0x18) * 0x4ef;
  iVar19 = (int)(((uint)*(ushort *)(&DAT_0019d50e + iVar26) * 0x100 +
                 *(int *)((int)ppiVar30 + 0xf4) * 8) - *(int *)((int)ppiVar30 + 0x368)) /
           *(int *)((int)ppiVar30 + 0xf4);
  iVar21 = *(int *)((int)ppiVar30 + 0x100);
  iVar18 = *(int *)((int)ppiVar30 + 0x104);
  *(int *)((int)ppiVar30 + 0x368) =
       *(int *)((int)ppiVar30 + 0x368) + *(int *)((int)ppiVar30 + 0xf4) * iVar19;
  *(int *)((int)ppiVar30 + 0x100) = iVar21 + *(int *)((int)ppiVar30 + 0x110) * iVar19;
  *(int *)((int)ppiVar30 + 0xf8) = iVar21 + *(int *)((int)ppiVar30 + 0x110) * iVar19;
  uVar4 = *(ushort *)(&DAT_0019d50c + iVar26);
  *(int *)((int)ppiVar30 + 0x104) = iVar18 + iVar19 * *(int *)((int)ppiVar30 + 0x114);
  *(int *)((int)ppiVar30 + 0xfc) = iVar18 + iVar19 * *(int *)((int)ppiVar30 + 0x114);
  *(uint *)((int)ppiVar30 + 0x124) = (uint)uVar4 << 8;
  *(int *)((int)ppiVar30 + 0x118) = *(int *)((int)ppiVar30 + 0x364);
  if (*(int *)((int)ppiVar30 + 0x364) < *(int *)((int)ppiVar30 + 0x124)) {
    *(byte *)((int)ppiVar30 + 0x380) = *(char *)((int)ppiVar30 + 900) + 2U & 3;
    iVar21 = *(int *)((int)ppiVar30 + 0xf4) * 0x80 >> 0x1f;
    *(int *)((int)ppiVar30 + 200) =
         (int)((*(int *)((int)ppiVar30 + 0xf4) * 0x80 + iVar21 * -0x100) - (uint)(iVar21 << 7 < 0))
         >> 8;
    do {
      *(uint *)((int)ppiVar30 + 0x1e0) =
           (uint)*(ushort *)(&DAT_0019d50e + (DAT_002f10ce >> 0x18) * 0x4ef) << 8;
      if (*(int *)((int)ppiVar30 + 0x110) == 0) {
        *(undefined4 *)((int)ppiVar30 + 0xfc) = *(undefined4 *)((int)ppiVar30 + 0x104);
      }
      else {
        *(undefined4 *)((int)ppiVar30 + 0xf8) = *(undefined4 *)((int)ppiVar30 + 0x100);
      }
      *(undefined4 *)((int)ppiVar30 + 0x11c) = *(undefined4 *)((int)ppiVar30 + 0x368);
      while (iVar21 = (int)ppiVar30[0x47], -(int)ppiVar30[0x3d] < iVar21) {
        iVar18 = (int)ppiVar30[0x3e];
        if (((0 < iVar18) && (iVar18 < 0xff)) &&
           ((iVar19 = (int)ppiVar30[0x3f], 0 < iVar19 && (iVar19 < 0xff)))) {
          iVar18 = iVar19 * 0x100 + iVar18;
          iVar19 = iVar18 * 5;
          uVar4 = *(ushort *)((int)&DAT_00279203 + iVar19 + 1);
          ppiVar30[0x48] = (int *)((int)&DAT_00279203 + iVar19);
          if ((uVar4 & 0x7ff) != 0) {
            iVar26 = (DAT_002f10ce >> 0x18) * 0x4ef;
            ppiVar30[0x79] = (int *)((int)&DAT_00279203 + iVar19);
            ppiVar30[0x7a] = ppiVar30[0x3e];
            ppiVar30[0x7b] = ppiVar30[0x3f];
            ppiVar30[0x7c] = ppiVar30[0x46];
            *(undefined1 *)(ppiVar30 + 0xde) = *(undefined1 *)(ppiVar30 + 0xe1);
            ppiVar30[0x7d] = (int *)(ppiVar30 + 0x78);
            *(undefined1 *)(ppiVar30 + 0xdf) = *(undefined1 *)(ppiVar30 + 0xe0);
            ppiVar30[0x80] = ppiVar30[0x32];
            ppiVar30[0x81] = ppiVar30[0x3d];
            ppiVar30[0x82] = ppiVar30[0x3d];
            uVar4 = *(ushort *)(&DAT_0019d50e + iVar26);
            ppiVar30[0xbd] = (int *)(iVar21 >> 8);
            uVar5 = (&DAT_001e3203)[iVar18];
            bVar3 = (&DAT_0019d0f3)[iVar26];
            iVar26 = (uVar4 + 0x40) - (int)ppiVar30[0xbd];
            ppiVar30[0x84] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + -0x101) * 5 + 1) >> 0x1c);
            ppiVar30[0x85] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + -0x100) * 5 + 1) >> 0x1c);
            uVar20 = *(uint *)((int)&DAT_00279203 + iVar19 + 1);
            ppiVar30[0x86] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + -0xff) * 5 + 1) >> 0x1c);
            ppiVar30[0x88] = (int *)(uVar20 >> 0x1c);
            ppiVar30[0x89] = (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + 1) * 5 + 1) >> 0x1c);
            ppiVar30[0x83] = (int *)(1 << (bVar3 & 0x1f));
            uVar20 = *(uint *)((int)&DAT_00279203 + (iVar18 + -1) * 5 + 1);
            ppiVar30[0x8a] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + 0xff) * 5 + 1) >> 0x1c);
            ppiVar30[0x87] = (int *)(uVar20 >> 0x1c);
            uVar20 = *(uint *)((int)&DAT_00279203 + (iVar18 + 0x100) * 5 + 1);
            ppiVar30[0x8c] =
                 (int *)(*(uint *)((int)&DAT_00279203 + (iVar18 + 0x101) * 5 + 1) >> 0x1c);
            ppiVar30[0x8b] = (int *)(uVar20 >> 0x1c);
            uVar20 = 0;
            if (((uint)ppiVar30[0x84] & (uint)ppiVar30[0x85] & (uint)ppiVar30[0x87] &
                 (uint)ppiVar30[0x88] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)uVar5;
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7a] * 4 + (int)ppiVar30[0x7b] + (int)ppiVar30[0x7b] * 0x10 &
                      0xff);
            ppiVar30[0x8d] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x8d];
              }
              ppiVar30[0xbd] = (int *)(uVar14 << 8);
              iVar19 = (-(uint)*(byte *)(ppiVar30 + 0xde) & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(int **)((int)ppiVar30 + iVar19) = ppiVar30[0xbd];
            } while (iVar18 != 0x24);
            uVar20 = 0;
            if (((uint)ppiVar30[0x85] & (uint)ppiVar30[0x86] & (uint)ppiVar30[0x88] &
                 (uint)ppiVar30[0x89] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)(ushort)(&DAT_001e3205)
                                     [(int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]];
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7b] * 0x10 + (int)ppiVar30[0x7b] +
                       (int)ppiVar30[0x7a] * 4 + 4 & 0xff);
            ppiVar30[0x8e] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x8e];
              }
              ppiVar30[0xbd] = (int *)(uVar14 << 8);
              iVar19 = (1 - *(byte *)(ppiVar30 + 0xde) & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(int **)((int)ppiVar30 + iVar19) = ppiVar30[0xbd];
            } while (iVar18 != 0x24);
            uVar20 = 0;
            if (((uint)ppiVar30[0x87] & (uint)ppiVar30[0x88] & (uint)ppiVar30[0x8a] &
                 (uint)ppiVar30[0x8b] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)*(ushort *)
                              (&DAT_001e3403 +
                              ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 2);
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7b] * 0x10 + (int)ppiVar30[0x7b] + 0x11 +
                       (int)ppiVar30[0x7a] * 4 & 0xff);
            ppiVar30[0x8f] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x8f];
              }
              ppiVar30[0xbd] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
              iVar19 = (3U - (int)ppiVar30[0xbd] & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(uint *)((int)ppiVar30 + iVar19) = uVar14 << 8;
            } while (iVar18 != 0x24);
            uVar20 = 0;
            if (((uint)ppiVar30[0x88] & (uint)ppiVar30[0x89] & (uint)ppiVar30[0x8b] &
                 (uint)ppiVar30[0x8c] & (uint)ppiVar30[0x83]) != 0) {
              uVar20 = (uint)*(ushort *)
                              (&DAT_001e3405 +
                              ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 2);
            }
            puVar15 = &DAT_002f10e3 +
                      ((int)ppiVar30[0x7a] * 4 +
                       (int)ppiVar30[0x7b] + (int)ppiVar30[0x7b] * 0x10 + 0x15 & 0xff);
            ppiVar30[0x90] = (int *)(uVar20 - 0x100);
            iVar18 = 0;
            do {
              uVar14 = uVar20;
              if ((0x100 < uVar20) && (uVar20 < 0x3e01)) {
                uVar14 = *puVar15;
                puVar15 = puVar15 + 1;
                uVar14 = (uVar14 & 0x3f) * 0x20 + (int)ppiVar30[0x90];
              }
              ppiVar30[0xbd] = (int *)(uVar14 << 8);
              iVar19 = (2 - *(byte *)(ppiVar30 + 0xde) & 3) * 0x24 + iVar18;
              iVar18 = iVar18 + 4;
              *(int **)((int)ppiVar30 + iVar19) = ppiVar30[0xbd];
            } while (iVar18 != 0x24);
            uVar20 = DAT_002e6f23;
            if ((*(uint *)((int)ppiVar30[0x79] + 1) >> 0x1c & (uint)DAT_00379395) != 0) {
              uVar20 = *(uint *)((int)ppiVar30[0x79] + 1) & 0x7ff;
            }
            iVar19 = uVar20 * 0x18;
            iVar18 = *ppiVar30[0x7d];
            ppiVar30[0x7e] = &DAT_0019e973 + uVar20 * 6;
            if (((iVar21 < iVar18) && (*(short *)((int)&DAT_0019e977 + iVar19 + 1) != 0)) &&
               (*(short *)(&DAT_0019e97b + uVar20 * 6) == 0)) {
              *ppiVar30[0x7d] = iVar21;
              if ((*(byte *)((int)&DAT_00279203 +
                            ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 5) & 4) == 0) {
                uVar16 = ppiVar30[0x12];
                ppiVar30[0x9b] = (int *)iVar21;
                iVar18 = *(int *)((int)&DAT_0019e973 + iVar19 + 3);
                ppiVar30[0x9a] = ppiVar30[0x7c];
                ppiVar30[0x9f] = (int *)0x0;
                ppiVar30[0x9e] = (int *)(iVar18 >> 0x10);
                ppiVar30[0x9c] = ppiVar30[0x82];
                ppiVar30[0x4e] = *ppiVar30;
                ppiVar30[0x9d] = ppiVar30[0x81];
                ppiVar30[0x26] = ppiVar30[9];
                ppiVar30[0x27] = ppiVar30[0x1b];
                if (iVar26 < 0) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = iVar26;
                  if (0x2be < iVar26) {
                    iVar18 = 0x2be;
                  }
                }
                uVar6 = (&DAT_00387220)[iVar18];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *DAT_00387d20 = uVar6;
                (&DAT_00387220)[iVar18] = DAT_00387d20;
                *(undefined4 *)((int)DAT_00387d20 + 0x22) = uVar16;
                uVar16 = ppiVar30[0x9e];
                *(undefined4 *)((int)DAT_00387d20 + 0x2a) = 3;
                *(undefined4 *)((int)DAT_00387d20 + 6) = uVar16;
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0x9a];
                *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0x9b];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0x9c];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x9d];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0x9f);
                *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x4e];
                *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0x26];
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x26);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0x27];
              }
              else {
                iVar18 = *(int *)((int)&DAT_0019e973 + iVar19 + 3);
                ppiVar30[0x91] = ppiVar30[0x7c];
                ppiVar30[0x94] = (int *)(iVar18 >> 0x10);
                ppiVar30[0x92] = ppiVar30[0x82];
                ppiVar30[0x95] = (int *)0x0;
                ppiVar30[0x93] = ppiVar30[0x81];
                ppiVar30[0x99] = (int *)0x0;
                ppiVar30[0x96] = (int *)0x200000;
                ppiVar30[0x97] = (int *)0x200000;
                ppiVar30[0x98] = (int *)0x200000;
                if (iVar26 < 0) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = iVar26;
                  if (0x2be < iVar26) {
                    iVar18 = 0x2be;
                  }
                }
                uVar16 = (&DAT_00387220)[iVar18];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *DAT_00387d20 = uVar16;
                (&DAT_00387220)[iVar18] = DAT_00387d20;
                *(int *)((int)DAT_00387d20 + 0xe) = iVar21;
                uVar16 = ppiVar30[0x94];
                *(undefined4 *)((int)DAT_00387d20 + 0x26) = 0x200000;
                *(undefined4 *)((int)DAT_00387d20 + 6) = uVar16;
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0x91];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0x92];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x93];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0x95);
                *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x96];
                *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0x97];
                *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0x98];
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0x99];
              }
            }
            iVar19 = 0;
            ppiVar30[0x7f] = (int *)0x0;
            ppiVar30[0xd7] = ppiVar30[0x7e];
            iVar21 = iVar21 + (int)ppiVar30[0x81];
            iVar18 = 0;
            do {
              if (*(short *)((int)ppiVar30[0xd7] + 8) == 0) break;
              iVar21 = iVar21 - (int)ppiVar30[0x80];
              ppiVar30[0x7f] =
                   (int *)((int)&DAT_001aa973 + (*(int *)((int)ppiVar30[0xd7] + 6) >> 0x10) * 0x12);
              if (iVar21 < *ppiVar30[0x7d]) {
                *ppiVar30[0x7d] = iVar21;
                uVar4 = *(ushort *)((uint)*(byte *)(ppiVar30 + 0xdf) * 2 + (int)ppiVar30[0x7f]);
                ppiVar30[0xa1] = (int *)iVar21;
                ppiVar30[0xa0] = ppiVar30[0x7c];
                ppiVar30[0xa4] = (int *)(uint)uVar4;
                ppiVar30[0xa2] = ppiVar30[0x82];
                ppiVar30[0xa5] = (int *)0x0;
                uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x70);
                ppiVar30[0xa3] = ppiVar30[0x80];
                ppiVar30[0xa6] = (int *)uVar16;
                ppiVar30[0xa7] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x4c);
                uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x48);
                ppiVar30[0xaa] = (int *)0x3;
                ppiVar30[0xa8] = (int *)uVar16;
                ppiVar30[0xa9] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x6c);
                if (iVar26 < 0) {
                  iVar17 = 0;
                }
                else {
                  iVar17 = iVar26;
                  if (0x2be < iVar26) {
                    iVar17 = 0x2be;
                  }
                }
                ppiVar30[0xbd] = (int *)(iVar17 * 4);
                *DAT_00387d20 = (&DAT_00387220)[iVar17];
                iVar17 = (int)ppiVar30[0xbd];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *(undefined4 **)((int)&DAT_00387220 + iVar17) = DAT_00387d20;
                *(int **)((int)DAT_00387d20 + 6) = ppiVar30[0xa4];
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xa0];
                *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xa1];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xa2];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0xa3];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xa5);
                *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0xa6];
                *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xa7];
                *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xa8];
                *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xa9];
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0xaa];
              }
              iVar19 = iVar19 + 4;
              iVar18 = iVar18 + 1;
              ppiVar30[0xd7] = (int *)((int)ppiVar30[0xd7] + 2);
            } while (iVar18 < 8);
            if (ppiVar30[0x7f] != (int *)0x0) {
              if (iVar21 - (int)ppiVar30[0x81] < *ppiVar30[0x7d]) {
                *ppiVar30[0x7d] = iVar21 - (int)ppiVar30[0x81];
                bVar3 = *(byte *)((int)&DAT_00279203 +
                                 ((int)ppiVar30[0x7b] * 0x100 + (int)ppiVar30[0x7a]) * 5);
                uVar16 = *ppiVar30[0x7d];
                if ((bVar3 & 0x84) == 0) {
                  ppiVar30[0xdb] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                  ppiVar30[0xbd] = (int *)(uint)*(ushort *)((int)ppiVar30[0x7f] + 8);
                  ppiVar30[0x2a] = ppiVar30[0x7c];
                  ppiVar30[0xbf] = ppiVar30[0x82];
                  ppiVar30[0xc0] = ppiVar30[0x81];
                  ppiVar30[0x2b] = ppiVar30[0xbd];
                  ppiVar30[0xbe] = (int *)uVar16;
                  ppiVar30[0xc1] = ppiVar30[0xdb];
                  ppiVar30[0x2d] = ppiVar30[iVar18];
                  uVar16 = ppiVar30[iVar18 + 9];
                  ppiVar30[0x2e] = (int *)0x3;
                  ppiVar30[0xc2] = (int *)uVar16;
                  uVar16 = ppiVar30[iVar18 + 0x1b];
                  ppiVar30[0xc3] = ppiVar30[iVar18 + 0x12];
                  if (iVar26 < 0) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = iVar26;
                    if (0x2be < iVar26) {
                      iVar19 = 0x2be;
                    }
                  }
                  uVar6 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *DAT_00387d20 = uVar6;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(int **)((int)DAT_00387d20 + 6) = ppiVar30[0x2b];
                  *(undefined4 *)((int)DAT_00387d20 + 0x26) = uVar16;
                  *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0x2a];
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xbe];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xbf];
                  *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0xc0];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xc1);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x2d];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xc2];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xc3];
                  uVar16 = ppiVar30[0x2e];
                }
                else if ((bVar3 & 0x80) == 0) {
                  ppiVar30[0xb6] = (int *)uVar16;
                  uVar4 = *(ushort *)((int)ppiVar30[0x7f] + 8);
                  ppiVar30[0xb7] = ppiVar30[0x82];
                  ppiVar30[0xb8] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                  ppiVar30[0xb5] = ppiVar30[0x7c];
                  ppiVar30[0x28] = ppiVar30[0x81];
                  ppiVar30[0x5a] = (int *)0x200000;
                  ppiVar30[0xb9] = (int *)0x200000;
                  ppiVar30[0xba] = (int *)0x200000;
                  ppiVar30[0xbb] = (int *)0x200000;
                  ppiVar30[0xbc] = (int *)0x0;
                  if (iVar26 < 0) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = iVar26;
                    if (0x2be < iVar26) {
                      iVar19 = 0x2be;
                    }
                  }
                  uVar16 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *DAT_00387d20 = uVar16;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  uVar16 = ppiVar30[0xb5];
                  *(uint *)((int)DAT_00387d20 + 6) = (uint)uVar4;
                  *(undefined4 *)((int)DAT_00387d20 + 10) = uVar16;
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xb6];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xb7];
                  *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x28];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xb8);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0x5a];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xb9];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xba];
                  *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xbb];
                  uVar16 = ppiVar30[0xbc];
                }
                else {
                  ppiVar30[0xac] = (int *)uVar16;
                  uVar4 = *(ushort *)((int)ppiVar30[0x7f] + 8);
                  ppiVar30[0xad] = ppiVar30[0x82];
                  ppiVar30[0xae] = (int *)(uint)uVar4;
                  ppiVar30[0xaf] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                  ppiVar30[0xab] = ppiVar30[0x7c];
                  uVar16 = ppiVar30[0x81];
                  ppiVar30[0xb0] = (int *)0x200000;
                  ppiVar30[0xb1] = (int *)0x200000;
                  ppiVar30[0xb2] = (int *)0x200000;
                  ppiVar30[0xb3] = (int *)0x200000;
                  ppiVar30[0xb4] = (int *)0x1;
                  if (iVar26 < 0) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = iVar26;
                    if (0x2be < iVar26) {
                      iVar19 = 0x2be;
                    }
                  }
                  uVar6 = (&DAT_00387220)[iVar19];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *DAT_00387d20 = uVar6;
                  (&DAT_00387220)[iVar19] = DAT_00387d20;
                  *(int **)((int)DAT_00387d20 + 6) = ppiVar30[0xae];
                  *(undefined4 *)((int)DAT_00387d20 + 0x16) = uVar16;
                  *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xab];
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0xac];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xad];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xaf);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0xb0];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xb1];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xb2];
                  *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xb3];
                  uVar16 = ppiVar30[0xb4];
                }
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = uVar16;
              }
            }
            if (((*(byte *)((int)ppiVar30[0x7e] + 2) & 0xe) != 0) &&
               (1 << ((byte)iVar18 & 0x1f) < (int)(uint)*(ushort *)((int)ppiVar30[0x7e] + 3))) {
              for (iVar19 = iVar18 * 2 + (int)ppiVar30[0x7e];
                  (iVar18 < 8 && (*(short *)(iVar19 + 8) == 0)); iVar19 = iVar19 + 2) {
                iVar18 = iVar18 + 1;
                iVar21 = iVar21 - (int)ppiVar30[0x80];
              }
              iVar19 = iVar18 * 4;
              ppiVar30[0xd8] = (int *)(iVar18 * 2 + (int)ppiVar30[0x7e]);
              while ((iVar18 < 8 && (*(short *)((int)ppiVar30[0xd8] + 8) != 0))) {
                iVar21 = iVar21 - (int)ppiVar30[0x80];
                ppiVar30[0x7f] =
                     (int *)((int)&DAT_001aa973 + (*(int *)((int)ppiVar30[0xd8] + 6) >> 0x10) * 0x12
                            );
                if (iVar21 < *ppiVar30[0x7d]) {
                  uVar4 = *(ushort *)((uint)*(byte *)(ppiVar30 + 0xdf) * 2 + (int)ppiVar30[0x7f]);
                  ppiVar30[0x2f] = (int *)iVar21;
                  ppiVar30[0xc4] = ppiVar30[0x7c];
                  ppiVar30[199] = (int *)(uint)uVar4;
                  ppiVar30[0xc5] = ppiVar30[0x82];
                  ppiVar30[200] = (int *)0x0;
                  uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x70);
                  ppiVar30[0xc6] = ppiVar30[0x80];
                  ppiVar30[0xc9] = (int *)uVar16;
                  ppiVar30[0xca] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x4c);
                  uVar16 = *(undefined4 *)((int)ppiVar30 + iVar19 + 0x48);
                  ppiVar30[0xcd] = (int *)0x3;
                  ppiVar30[0xcb] = (int *)uVar16;
                  ppiVar30[0xcc] = (int *)*(undefined4 *)((int)ppiVar30 + iVar19 + 0x6c);
                  if (iVar26 < 0) {
                    iVar17 = 0;
                  }
                  else {
                    iVar17 = iVar26;
                    if (0x2be < iVar26) {
                      iVar17 = 0x2be;
                    }
                  }
                  ppiVar30[0xbd] = (int *)(iVar17 * 4);
                  *DAT_00387d20 = (&DAT_00387220)[iVar17];
                  iVar17 = (int)ppiVar30[0xbd];
                  *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                  *(undefined4 **)((int)&DAT_00387220 + iVar17) = DAT_00387d20;
                  *(int **)((int)DAT_00387d20 + 6) = ppiVar30[199];
                  *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xc4];
                  *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0x2f];
                  *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xc5];
                  *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0xc6];
                  *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 200);
                  *(int **)((int)DAT_00387d20 + 0x1a) = ppiVar30[0xc9];
                  *(int **)((int)DAT_00387d20 + 0x1e) = ppiVar30[0xca];
                  *(int **)((int)DAT_00387d20 + 0x22) = ppiVar30[0xcb];
                  *(int **)((int)DAT_00387d20 + 0x26) = ppiVar30[0xcc];
                  puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x2a);
                  DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                  *puVar29 = ppiVar30[0xcd];
                }
                iVar19 = iVar19 + 4;
                iVar18 = iVar18 + 1;
                ppiVar30[0xd8] = (int *)((int)ppiVar30[0xd8] + 2);
              }
              if ((ppiVar30[0x7f] != (int *)0x0) && (iVar21 - (int)ppiVar30[0x81] < *ppiVar30[0x7d])
                 ) {
                ppiVar30[0x30] = (int *)(iVar21 - (int)ppiVar30[0x81]);
                uVar16 = ppiVar30[iVar18 + 9];
                uVar4 = *(ushort *)((int)ppiVar30[0x7f] + 8);
                ppiVar30[0xcf] = ppiVar30[0x82];
                ppiVar30[0xd0] = (int *)(uint)uVar4;
                ppiVar30[0xd1] = (int *)(uint)*(byte *)(ppiVar30 + 0xde);
                ppiVar30[0xce] = ppiVar30[0x7c];
                uVar6 = ppiVar30[iVar18];
                ppiVar30[0x31] = ppiVar30[0x81];
                ppiVar30[0xd2] = (int *)uVar6;
                uVar6 = ppiVar30[iVar18 + 0x1b];
                uVar7 = ppiVar30[iVar18 + 0x12];
                if (iVar26 < 0) {
                  iVar26 = 0;
                }
                else if (0x2be < iVar26) {
                  iVar26 = 0x2be;
                }
                uVar8 = (&DAT_00387220)[iVar26];
                *(undefined1 *)(DAT_00387d20 + 1) = 0xf;
                *DAT_00387d20 = uVar8;
                (&DAT_00387220)[iVar26] = DAT_00387d20;
                *(undefined4 *)((int)DAT_00387d20 + 0x1e) = uVar16;
                *(undefined4 *)((int)DAT_00387d20 + 0x22) = uVar7;
                *(undefined4 *)((int)DAT_00387d20 + 0x26) = uVar6;
                uVar16 = ppiVar30[0xd0];
                *(undefined4 *)((int)DAT_00387d20 + 0x2a) = 3;
                *(undefined4 *)((int)DAT_00387d20 + 6) = uVar16;
                *(int **)((int)DAT_00387d20 + 10) = ppiVar30[0xce];
                *(int **)((int)DAT_00387d20 + 0xe) = ppiVar30[0x30];
                *(int **)((int)DAT_00387d20 + 0x12) = ppiVar30[0xcf];
                *(int **)((int)DAT_00387d20 + 0x16) = ppiVar30[0x31];
                *(undefined1 *)((int)DAT_00387d20 + 5) = *(undefined1 *)(ppiVar30 + 0xd1);
                puVar29 = (undefined4 *)((int)DAT_00387d20 + 0x1a);
                DAT_00387d20 = (undefined4 *)((int)DAT_00387d20 + 0x2e);
                *puVar29 = ppiVar30[0xd2];
              }
            }
            if (((*(uint *)((int)ppiVar30[0x48] + 1) & 0x3ff800) != 0) &&
               ((*(uint *)((int)ppiVar30[0x48] + 1) >> 0x1c &
                1 << ((&DAT_0019d0f3)[(DAT_002f10ce >> 0x18) * 0x4ef] & 0x1f)) != 0)) {
              uVar20 = (*(uint *)((int)ppiVar30[0x48] + 1) & 0x3fffff) >> 0xb;
              puVar29 = ppiVar30;
              do {
                iVar21 = (&DAT_001ae9fc)[uVar20];
                ppiVar30 = (int **)puVar29;
                puVar27 = DAT_00387d20;
                if ((*(byte *)(iVar21 + 0x4f) & 1) == 0) {
                  switch(*(byte *)(iVar21 + 0x50) >> 2) {
                  case 2:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8c00;
                    FUN_000aa3a8();
                    puVar10 = DAT_00387d20;
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      iVar18 = *(int *)((int)puVar29 + 0x350) + -3;
                      if (iVar18 < 0) {
                        iVar18 = 0;
                      }
                      else if (0x2be < iVar18) {
                        iVar18 = 0x2be;
                      }
                      uVar16 = (&DAT_00387220)[iVar18];
                      *(undefined1 *)(DAT_00387d20 + 1) = 0xb;
                      *DAT_00387d20 = uVar16;
                      (&DAT_00387220)[iVar18] = DAT_00387d20;
                      DAT_00387d20[2] = iVar21;
                      uVar20 = (uint)DAT_0019cba6;
                      DAT_00387d20[3] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                      DAT_00387d20[4] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                      DAT_00387d20[5] = *(undefined4 *)((int)puVar29 + 0x34c);
                      puVar27 = DAT_00387d20 + 6;
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      if (*(char *)(iVar21 + 0x1f) == '\x05') {
                        iVar18 = *(int *)((int)puVar29 + 0x348);
                        iVar19 = *(int *)((int)puVar29 + 0x34c);
                        ppiVar30 = (int **)((int)puVar29 + -4);
                        if (puVar27 < DAT_0033317f) {
                          *puVar27 = DAT_00387224;
                          *(undefined1 *)(DAT_00387d20 + 7) = 0xe;
                          DAT_00387224 = puVar27;
                          DAT_00387d20[8] = iVar21;
                          DAT_00387d20[9] = iVar18 / (int)uVar20;
                          *(uint *)((int)puVar29 + 0x368) =
                               (uint)*(ushort *)(&DAT_0018e933 + (uint)*(byte *)(iVar21 + 0x1a) * 2)
                          ;
                          uVar4 = *(ushort *)(iVar21 + 0x58);
                          iVar18 = *(int *)((int)puVar29 + 0x368);
                          *(undefined4 *)((int)puVar29 + 0x368) = 0xc;
                          iVar26 = *(int *)((int)puVar29 + 0x368);
                          piVar1 = DAT_00387d20 + 0xb;
                          DAT_00387d20 = DAT_00387d20 + 0xc;
                          *piVar1 = iVar19;
                          puVar10[10] = (iVar19 - (int)((uint)uVar4 + iVar18) / iVar26) /
                                        (int)uVar20;
                          ppiVar30 = (int **)((int)puVar29 + -4);
                          puVar27 = DAT_00387d20;
                        }
                      }
                    }
                    break;
                  case 4:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8e02;
                    FUN_000aa3a8();
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      *(undefined1 *)(DAT_00387d20 + 1) = 0x10;
                      *DAT_00387d20 = DAT_00387224;
                      uVar20 = (uint)DAT_0019cba6;
                      DAT_00387224 = DAT_00387d20;
                      DAT_00387d20[2] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                      DAT_00387d20[3] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                      puVar27 = DAT_00387d20 + 4;
                      DAT_00387d20 = DAT_00387d20 + 5;
                      *puVar27 = *(undefined4 *)(iVar21 + 0x13);
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      puVar27 = DAT_00387d20;
                    }
                    break;
                  case 5:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8e85;
                    FUN_000aa3a8();
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      if (DAT_002e8bee + -1 == *(int *)(iVar21 + 0x15)) {
                        if (CONCAT31((uint3)((uint)(DAT_002e8bee + -1) >> 8) ^
                                     (uint3)((uint)*(int *)(iVar21 + 0x15) >> 8),
                                     *(char *)(iVar21 + 0x19)) < 0x28) {
                          *(char *)(iVar21 + 0x19) = *(char *)(iVar21 + 0x19) + '\x01';
                        }
                      }
                      else {
                        *(undefined1 *)(iVar21 + 0x19) = 0;
                      }
                      *(int *)(iVar21 + 0x15) = DAT_002e8bee;
                      puVar10 = DAT_00387d20;
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      puVar27 = DAT_00387d20;
                      if (*(char *)(iVar21 + 0x19) == '(') {
                        iVar18 = *(int *)((int)puVar29 + 0x350) + -3;
                        if (iVar18 < 0) {
                          iVar18 = 0;
                        }
                        else if (0x2be < iVar18) {
                          iVar18 = 0x2be;
                        }
                        uVar16 = (&DAT_00387220)[iVar18];
                        *(undefined1 *)(DAT_00387d20 + 1) = 0x11;
                        *DAT_00387d20 = uVar16;
                        (&DAT_00387220)[iVar18] = DAT_00387d20;
                        uVar20 = (uint)DAT_0019cba6;
                        DAT_00387d20[2] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                        puVar9 = DAT_0033317f;
                        DAT_00387d20[3] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                        puVar28 = DAT_00387d20 + 4;
                        puVar2 = (undefined2 *)((int)DAT_00387d20 + 6);
                        DAT_00387d20 = puVar28;
                        *puVar2 = *(undefined2 *)(iVar21 + 0x13);
                        ppiVar30 = (int **)((int)puVar29 + -4);
                        puVar27 = DAT_00387d20;
                        if (puVar28 < puVar9) {
                          *(undefined1 *)(puVar10 + 5) = 0x13;
                          *puVar28 = DAT_00387224;
                          DAT_00387224 = puVar28;
                          puVar10[6] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                          puVar10[7] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                          DAT_00387d20 = puVar10 + 8;
                          *(undefined2 *)((int)puVar10 + 0x16) = *(undefined2 *)(iVar21 + 0x13);
                          ppiVar30 = (int **)((int)puVar29 + -4);
                          puVar27 = DAT_00387d20;
                        }
                      }
                    }
                    break;
                  case 6:
                    *(undefined1 **)((int)puVar29 + -4) = (undefined1 *)((int)puVar29 + 0x354);
                    *(undefined4 *)((int)puVar29 + -8) = 0xa8d53;
                    FUN_000aa3a8();
                    ppiVar30 = (int **)((int)puVar29 + -4);
                    puVar27 = DAT_00387d20;
                    if (DAT_00387d20 < DAT_0033317f) {
                      iVar18 = *(int *)((int)puVar29 + 0x350) + -3;
                      if (iVar18 < 0) {
                        iVar18 = 0;
                      }
                      else if (0x2be < iVar18) {
                        iVar18 = 0x2be;
                      }
                      uVar16 = (&DAT_00387220)[iVar18];
                      *(undefined1 *)(DAT_00387d20 + 1) = 0x12;
                      *DAT_00387d20 = uVar16;
                      (&DAT_00387220)[iVar18] = DAT_00387d20;
                      DAT_00387d20[2] = iVar21;
                      uVar20 = (uint)DAT_0019cba6;
                      DAT_00387d20[3] = *(int *)((int)puVar29 + 0x348) / (int)uVar20;
                      DAT_00387d20[4] = *(int *)((int)puVar29 + 0x34c) / (int)uVar20;
                      puVar27 = DAT_00387d20 + 5;
                      DAT_00387d20 = DAT_00387d20 + 6;
                      *puVar27 = *(undefined4 *)((int)puVar29 + 0x34c);
                      ppiVar30 = (int **)((int)puVar29 + -4);
                      puVar27 = DAT_00387d20;
                    }
                  }
                }
                DAT_00387d20 = puVar27;
                uVar20 = (uint)*(ushort *)(iVar21 + 2);
                puVar29 = ppiVar30;
              } while (*(ushort *)(iVar21 + 2) != 0);
            }
          }
        }
        *(int *)((int)ppiVar30 + 0xf8) =
             *(int *)((int)ppiVar30 + 0xf8) - *(int *)((int)ppiVar30 + 0x110);
        *(int *)((int)ppiVar30 + 0xfc) =
             *(int *)((int)ppiVar30 + 0xfc) - *(int *)((int)ppiVar30 + 0x114);
        *(int *)((int)ppiVar30 + 0x11c) =
             *(int *)((int)ppiVar30 + 0x11c) - *(int *)((int)ppiVar30 + 0xf4);
      }
      iVar21 = (int)ppiVar30[0x46];
      ppiVar30[0x3e] = (int *)((int)ppiVar30[0x3e] + (int)ppiVar30[0x42]);
      ppiVar30[0x3f] = (int *)((int)ppiVar30[0x3f] + (int)ppiVar30[0x43]);
      ppiVar30[0x46] = (int *)(iVar21 + (int)ppiVar30[0x3d]);
    } while (iVar21 + (int)ppiVar30[0x3d] < (int)ppiVar30[0x49]);
  }
  *(undefined4 *)((int)ppiVar30 + -4) = 0xa9288;
  FUN_000a6504();
  *(undefined4 *)((int)ppiVar30 + -4) = 0xa9294;
  FUN_000e6a6c();
  return;
}
```

### `dk_unhandled_screen_mode_087da4` (`0x87da4` in `draw.cpp`)
- **Evidence**: String 'Unhandled screen mode'
```c
void FUN_00087da4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar7 = DAT_003d9848;
  uVar6 = DAT_003d9844;
  uVar5 = DAT_003d9840;
  uVar4 = DAT_003d983c;
  uVar3 = DAT_003d9838;
  uVar2 = DAT_003d9834;
  uVar1 = DAT_003d9818;
  if (((((DAT_0019d0bd & 2) == 0) || (DAT_0019d0c7 == '\0')) || (DAT_00333193 == 0)) ||
     ((DAT_0019d0c7 == '\r' || (DAT_0019d0c7 == '\x0e')))) {
    FUN_000a43b4();
    return;
  }
  if (DAT_003d9878 < 10) {
    uVar9 = DAT_00333197;
    if (DAT_003d9878 == 1) goto LAB_00087f52;
  }
  else {
    uVar9 = DAT_0019922c;
    if ((DAT_003d9878 < 0xb) || (DAT_003d9878 == 0xd)) {
LAB_00087f52:
      FUN_000e6a10();
      DAT_003d9844 = DAT_003d982c * (uint)DAT_0019cba6;
      DAT_003d983c = 0;
      DAT_003d9838 = (uint)DAT_0019cba2;
      DAT_003d9840 = 0;
      DAT_003d9834 = DAT_003d982c;
      DAT_003d9818 = uVar9;
      DAT_003d9848 = DAT_003d9838;
      FUN_000780df();
      FUN_000a43b4();
      DAT_003d9818 = uVar1;
      DAT_003d9834 = uVar2;
      DAT_003d9838 = uVar3;
      DAT_003d983c = uVar4;
      DAT_003d9840 = uVar5;
      DAT_003d9844 = uVar6;
      DAT_003d9848 = uVar7;
      FUN_000780df();
      switch(DAT_0019d0c7) {
      case '\x01':
      case '\x02':
        FUN_0004e0dd((uint)DAT_0019cba2 / (uint)DAT_0019cba6,DAT_003d9834);
        return;
      case '\x03':
        FUN_0002d8e2(1,(uint)DAT_0019cba2 / (uint)DAT_0019cba6);
        return;
      case '\x04':
      case '\x05':
      case '\x06':
      case '\a':
      case '\b':
      case '\t':
      case '\n':
      case '\v':
      case '\f':
        uVar8 = (uint)DAT_0019cba4 / (uint)DAT_0019cba6;
        FUN_00051a67(uVar8,uVar8,(uint)DAT_0019cba2 / (uint)DAT_0019cba6);
        FUN_00051a46();
        return;
      default:
        FUN_000ddaf0();
        return;
      }
    }
  }
  FUN_000ddaf0();
  return;
}
```

### `dk_frames_different_between_views_08ae00` (`0x8ae00` in `draw.cpp`)
- **Evidence**: String 'No frames different between views C%d, M%d, A%d, B%d'
```c
void FUN_0008ae00(void)

{
  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  uint uVar5;
  int iVar6;
  
  iVar6 = 4;
  do {
    pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar6);
    if (((*pbVar1 & 1) != 0) &&
       (((pbVar1[0x1f] == 5 || ((pbVar1[0x4f] & 1) == 0)) &&
        (-1 < *(int *)((int)&DAT_002f2223 + (*(int *)(pbVar1 + 0x42) >> 0x10) * 2 + 2) >> 0x10)))) {
      *(undefined2 *)(pbVar1 + 0x44) = (&DAT_002f2227)[*(int *)(pbVar1 + 0x42) >> 0x10];
      cVar2 = FUN_0004c2eb();
      if (cVar2 != *(char *)(extraout_ECX + 0x49)) {
        uVar3 = FUN_0004c2eb();
        FUN_000e7714(&DAT_0019cbac,s_No_frames_different_between_view_0016a1d7,
                     *(undefined1 *)(extraout_ECX_00 + 0x1f),*(undefined1 *)(extraout_ECX_00 + 0x1a)
                     ,*(undefined1 *)(extraout_ECX_00 + 0x49),uVar3);
        FUN_000ddaf0();
        uVar3 = FUN_0004c2eb();
        *(undefined1 *)(extraout_ECX_01 + 0x49) = uVar3;
        uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),uVar3) - 1;
        uVar4 = (uint)*(byte *)(extraout_ECX_01 + 0x48);
        if ((int)uVar5 < (int)(uint)*(byte *)(extraout_ECX_01 + 0x48)) {
          uVar4 = uVar5;
        }
        *(char *)(extraout_ECX_01 + 0x48) = (char)uVar4;
        *(uint *)(extraout_ECX_01 + 0x40) = (uint)*(byte *)(extraout_ECX_01 + 0x48) << 8;
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x2000);
  return;
}
```

### `dk_frames_different_between_views_08aee4` (`0x8aee4` in `draw.cpp`)
- **Evidence**: String 'No frames different between views C%d, M%d, A%d, B%d'
```c
void FUN_0008aee4(void)

{
  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  uint uVar5;
  int iVar6;
  
  iVar6 = 4;
  do {
    pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar6);
    if (((*pbVar1 & 1) != 0) &&
       (((pbVar1[0x1f] == 5 || ((pbVar1[0x4f] & 1) == 0)) &&
        (-1 < *(int *)(&DAT_002f29d1 + (*(int *)(pbVar1 + 0x42) >> 0x10) * 2) >> 0x10)))) {
      *(undefined2 *)(pbVar1 + 0x44) = (&DAT_002f29d3)[*(int *)(pbVar1 + 0x42) >> 0x10];
      cVar2 = FUN_0004c2eb();
      if (cVar2 != *(char *)(extraout_ECX + 0x49)) {
        uVar3 = FUN_0004c2eb();
        FUN_000e7714(&DAT_0019cbac,s_No_frames_different_between_view_0016a215,
                     *(undefined1 *)(extraout_ECX_00 + 0x1f),*(undefined1 *)(extraout_ECX_00 + 0x1a)
                     ,*(undefined1 *)(extraout_ECX_00 + 0x49),uVar3);
        FUN_000ddaf0();
        uVar3 = FUN_0004c2eb();
        *(undefined1 *)(extraout_ECX_01 + 0x49) = uVar3;
        uVar5 = CONCAT31((int3)((uint)extraout_EDX >> 8),uVar3) - 1;
        uVar4 = (uint)*(byte *)(extraout_ECX_01 + 0x48);
        if ((int)uVar5 < (int)(uint)*(byte *)(extraout_ECX_01 + 0x48)) {
          uVar4 = uVar5;
        }
        *(char *)(extraout_ECX_01 + 0x48) = (char)uVar4;
        *(uint *)(extraout_ECX_01 + 0x40) = (uint)*(byte *)(extraout_ECX_01 + 0x48) << 8;
      }
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x2000);
  return;
}
```

### `dk_load_palette_file_08cc24` (`0x8cc24` in `draw.cpp`)
- **Evidence**: String 'Cannot load palette file %s'
```c
void FUN_0008cc24(void)

{
  char in_AL;
  char cVar1;
  undefined4 uVar2;
  int in_EDX;
  undefined1 local_9c [152];
  
  if (in_AL < '\0') {
    in_AL = '\0';
  }
  else if ('\x04' < in_AL) {
    in_AL = '\x04';
  }
  DAT_002ee8da = in_AL;
  FUN_000dd920(in_AL);
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_9c,s__s_pal_05d_dat_0016a25a,uVar2);
  cVar1 = FUN_0002c3d0();
  if (cVar1 == '\0') {
    FUN_000e7714(&DAT_0019cbac,s_Cannot_load_palette_file__s_0016a269,local_9c);
    FUN_000ddaf0();
  }
  else {
    FUN_000e984c();
    if (in_EDX != 0) {
      FUN_000627b5();
    }
  }
  return;
}
```

### `sub_08de90` (`0x8de90` in `draw.cpp`)
- **Evidence**: Address-based identifier
```c
void FUN_0008de90(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  
  piVar2 = &DAT_001baded;
  while (piVar2 < &DAT_001baded + DAT_001e31ff * 2) {
    iVar1 = (int)*(char *)((int)piVar2 + 2);
    if ((((0x20 < iVar1) || (iVar1 != -0x20 && 0x1f < -iVar1)) ||
        (iVar1 = *piVar2 >> 0x18, 0x20 < iVar1)) || (iVar1 != -0x20 && 0x1f < -iVar1)) {
      FUN_000ddaf0();
    }
    FUN_000f5390();
    piVar2 = extraout_ECX;
  }
  return;
}
```

### `dk_could_create_column_none_015386` (`0x15386` in `column.cpp`)
- **Evidence**: String 'Could not create column: None free'
```c
undefined8 FUN_00015386(void)

{
  byte bVar1;
  char cVar2;
  undefined4 *in_EAX;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  short *psVar6;
  int extraout_EDX;
  
  iVar5 = 1;
  psVar6 = (short *)&DAT_0019e98b;
  do {
    if (0x7ff < iVar5) {
      FUN_000ddaf0();
      uVar4 = 0;
LAB_0001544f:
      return CONCAT44(in_EDX,uVar4);
    }
    if ((*psVar6 == 0) && ((*(byte *)(psVar6 + 1) & 1) == 0)) {
      *(undefined4 *)psVar6 = *in_EAX;
      *(undefined4 *)(psVar6 + 2) = in_EAX[1];
      *(undefined4 *)(psVar6 + 4) = in_EAX[2];
      *(undefined4 *)(psVar6 + 6) = in_EAX[3];
      *(undefined4 *)(psVar6 + 8) = in_EAX[4];
      *(undefined4 *)(psVar6 + 10) = in_EAX[5];
      FUN_00015318();
      cVar2 = FUN_000157ac();
      *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf;
      *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) | cVar2 << 4;
      uVar3 = (uint)(*(byte *)(extraout_EDX + 2) >> 4);
      for (iVar5 = uVar3 * 2 + extraout_EDX; ((int)uVar3 < 8 && (*(short *)(iVar5 + 8) == 0));
          iVar5 = iVar5 + 2) {
        uVar3 = uVar3 + 1;
      }
      uVar4 = extraout_ECX;
      if ((int)uVar3 < 8) {
        iVar5 = extraout_EDX + 0xe;
        bVar1 = 0;
        do {
          if (*(short *)(iVar5 + 8) != 0) {
            *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf1;
            *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) | (bVar1 & 7) * '\x02';
          }
          iVar5 = iVar5 + -2;
          bVar1 = bVar1 + 1;
        } while (iVar5 != extraout_EDX);
      }
      else {
        *(byte *)(extraout_EDX + 2) = *(byte *)(extraout_EDX + 2) & 0xf1;
      }
      goto LAB_0001544f;
    }
    iVar5 = iVar5 + 1;
    psVar6 = psVar6 + 0xc;
  } while( true );
}
```

### `dk_allocate_column_015479` (`0x15479` in `column.cpp`)
- **Evidence**: String 'Cannot allocate column'
```c
void FUN_00015479(void)

{
  uint *puVar1;
  int iVar2;
  uint in_EDX;
  uint unaff_EBX;
  short local_14;
  
  FUN_00015502();
  local_14 = FUN_0001534a();
  if (local_14 == 0) {
    local_14 = FUN_00015386();
    if (local_14 == 0) {
      FUN_000ddaf0();
    }
  }
  iVar2 = ((unaff_EBX & 0xffff) * 0x100 + (in_EDX & 0xffff)) * 5;
  *(undefined1 *)((int)&DAT_00279203 + iVar2 + 1) = 0;
  *(byte *)((int)&DAT_00279205 + iVar2) = *(byte *)((int)&DAT_00279205 + iVar2) & 0xf8;
  puVar1 = (uint *)((int)&DAT_00279203 + iVar2 + 1);
  *puVar1 = *puVar1 | (int)local_14 & 0x7ffU;
  *(short *)(&DAT_0019e973 + local_14 * 6) = *(short *)(&DAT_0019e973 + local_14 * 6) + 1;
  return;
}
```

### `sub_015603` (`0x15603` in `column.cpp`)
- **Evidence**: Address-based identifier
```c
void FUN_00015603(void)

{
  int in_EAX;
  byte in_CL;
  byte extraout_CL;
  uint in_EDX;
  uint unaff_EBX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 auStack_27e8 [2546];
  undefined2 local_1f;
  undefined4 auStack_1c [4];
  
  bVar5 = 0;
  if ((*(ushort *)((int)&DAT_00279203 + ((unaff_EBX & 0xffff) * 0x100 + (in_EDX & 0xffff)) * 5 + 1)
      & 0x7ff) == 0) {
    FUN_000ddaf0();
    in_CL = extraout_CL;
  }
  puVar1 = &DAT_0019e977 +
           (*(uint *)((int)&DAT_00279203 +
                     ((unaff_EBX & 0xffff) * 0x100 + (in_EDX & 0xffff)) * 5 + 1) & 0x7ff) * 6 +
           (uint)bVar5 * -2;
  puVar3 = auStack_1c + (uint)bVar5 * -2 + (uint)bVar5 * -2;
  puVar2 = puVar1 + (uint)bVar5 * -2 + 1;
  *(undefined4 *)(&stack0xffffffe0 + (uint)bVar5 * -8) = *puVar1;
  puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
  puVar1 = puVar2 + (uint)bVar5 * -2 + 1;
  *puVar3 = *puVar2;
  *puVar4 = *puVar1;
  puVar4[(uint)bVar5 * -2 + 1] = puVar1[(uint)bVar5 * -2 + 1];
  (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar1 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  if (in_CL == 0) {
    local_1f = *(undefined2 *)((int)&DAT_001aa97b + in_EAX * 0x12);
  }
  else {
    if (8 < in_CL) {
      return;
    }
    *(short *)((int)auStack_1c + (uint)(byte)(in_CL - 1) * 2) = (short)in_EAX;
    FUN_00015318();
  }
  FUN_00015479();
  return;
}
```

### `sub_0156de` (`0x156de` in `column.cpp`)
- **Evidence**: Address-based identifier
```c
void FUN_000156de(void)

{
  undefined4 uVar1;
  uint in_EAX;
  uint extraout_ECX;
  uint in_EDX;
  byte unaff_BL;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 auStackY_27ec [2545];
  undefined1 uStack_24;
  undefined2 local_23;
  undefined1 uStack_21;
  undefined4 auStack_20 [4];
  
  bVar7 = 0;
  if (unaff_BL == 0) {
    if ((*(ushort *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1) &
        0x7ff) == 0) {
      FUN_000ddaf0();
      in_EDX = extraout_ECX;
    }
    puVar2 = &DAT_0019e977 +
             (*(uint *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1
                       ) & 0x7ff) * 6 + (uint)bVar7 * -2;
    puVar5 = auStack_20 + (uint)bVar7 * -2 + (uint)bVar7 * -2;
    puVar3 = puVar2 + (uint)bVar7 * -2 + 1;
    *(undefined4 *)(&stack0xffffffdc + (uint)bVar7 * -8) = *puVar2;
    puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar2 = puVar3 + (uint)bVar7 * -2 + 1;
    *puVar5 = *puVar3;
    *puVar6 = *puVar2;
    puVar6[(uint)bVar7 * -2 + 1] = puVar2[(uint)bVar7 * -2 + 1];
    (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (puVar2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    _uStack_24 = CONCAT21(1,uStack_24);
  }
  else {
    if (8 < unaff_BL) {
      return;
    }
    uVar4 = *(uint *)((int)&DAT_00279203 + ((in_EDX & 0xffff) * 0x100 + (in_EAX & 0xffff)) * 5 + 1)
            & 0x7ff;
    uVar1 = (&DAT_0019e973)[uVar4 * 6];
    _uStack_24 = (&DAT_0019e977)[uVar4 * 6];
    auStack_20[0] = (&DAT_0019e97b)[uVar4 * 6];
    auStack_20[1] = (&DAT_0019e97f)[uVar4 * 6];
    auStack_20[2] = (&DAT_0019e983)[uVar4 * 6];
    auStack_20[3] = (&DAT_0019e987)[uVar4 * 6];
    *(undefined2 *)((int)auStack_20 + (uint)(byte)(unaff_BL - 1) * 2) = 0;
    FUN_00015318(uVar1);
  }
  FUN_00015479();
  return;
}
```

### `dk_illegal_ceiling_step_value_07c1f0` (`0x7c1f0` in `ceiling.cpp`)
- **Evidence**: String 'Illegal ceiling step value'
```c
undefined4 FUN_0007c1f0(void)

{
  int in_EAX;
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if (0 < unaff_EBX) {
    if (0xf < in_EAX) {
      FUN_000ddaf0();
      return 0;
    }
    if (in_EAX < in_EDX) {
      FUN_000ddaf0();
      return 0;
    }
    DAT_002e78b8 = (in_EAX - in_EDX) / unaff_EBX;
    if (0x9c3 < DAT_002e78b8) {
      DAT_002e78b8 = 0x9c4;
    }
    if (DAT_002e78b8 < 0x15) {
      iVar1 = DAT_002e78b8 * 2 + 1;
      DAT_002e78b0 = in_EAX;
      DAT_002e78b4 = in_EDX;
      DAT_002e78c0 = unaff_EBX;
      DAT_002e78bc = iVar1 * iVar1;
      return 1;
    }
  }
  FUN_000ddaf0();
  return 0;
}
```

### `dk_light_already_list_0acaf8` (`0xacaf8` in `light.cpp`)
- **Evidence**: String 'Light is already in list'
```c
/* WARNING: Removing unreachable block (ram,0x000acb12) */
/* WARNING: Removing unreachable block (ram,0x000acb57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_000acaf8(void)

{
  char cVar1;
  undefined2 *in_EAX;
  uint uVar2;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  uint in_EDX;
  byte *pbVar3;
  byte *pbVar4;
  short sVar5;
  byte bVar6;
  
  bVar6 = 0;
  pbVar3 = &DAT_001bd61b;
  sVar5 = 1;
  do {
    if ((*pbVar3 & 1) == 0) {
      *(short *)(pbVar3 + 0xe) = sVar5;
      *pbVar3 = *pbVar3 | 1;
      goto LAB_000acb36;
    }
    pbVar3 = pbVar3 + 0x2e;
    sVar5 = sVar5 + 1;
  } while (pbVar3 < &DAT_001c1dcd);
  pbVar3 = (byte *)0x0;
LAB_000acb36:
  if (pbVar3 == (byte *)0x0) {
LAB_000acc0e:
    return (ulonglong)in_EDX << 0x20;
  }
  if (*(char *)((int)in_EAX + 0x11) == '\0') {
    DAT_00388e24 = DAT_00388e24 + 1;
    if ((pbVar3[1] & 1) == 0) {
      DAT_002e6f0a = DAT_002e6f0a + 1;
      pbVar3[1] = pbVar3[1] | 1;
      *(undefined2 *)(pbVar3 + 0x26) = (undefined2)DAT_002e6f0e;
      DAT_002e6f0e._0_2_ = *(undefined2 *)(pbVar3 + 0xe);
      DAT_002e6f0e._2_2_ = 0;
    }
    else {
      FUN_000ddaf0();
      pbVar3 = extraout_ECX_00;
    }
    _DAT_00388e38 = 1;
  }
  else {
    pbVar4 = &DAT_001c1e4e;
    do {
      if ((*pbVar4 & 1) == 0) {
        *pbVar4 = *pbVar4 | 1;
        goto LAB_000acb7a;
      }
      pbVar4 = pbVar4 + 0x81;
    } while (pbVar4 < &DAT_001c31f5);
    pbVar4 = (byte *)0x0;
LAB_000acb7a:
    if (pbVar4 == (byte *)0x0) {
      FUN_000ddaf0();
      FUN_000e6a10();
      goto LAB_000acc0e;
    }
    DAT_00388e20 = DAT_00388e20 + 1;
    *(short *)(pbVar3 + 0x10) = (short)((int)(pbVar4 + -0x1c1dcd) / 0x81);
    if ((pbVar3[1] & 1) == 0) {
      DAT_002e6f12 = DAT_002e6f12 + 1;
      pbVar3[1] = pbVar3[1] | 1;
      *(undefined2 *)(pbVar3 + 0x26) = (undefined2)DAT_002e6f16;
      DAT_002e6f16._0_2_ = *(undefined2 *)(pbVar3 + 0xe);
      DAT_002e6f16._2_2_ = 0;
    }
    else {
      FUN_000ddaf0();
      pbVar3 = extraout_ECX;
    }
  }
  *pbVar3 = *pbVar3 | 10;
  *(undefined4 *)(pbVar3 + 0x28) = *(undefined4 *)(in_EAX + 5);
  *(undefined2 *)(pbVar3 + (uint)bVar6 * -8 + 0x2c) = in_EAX[(uint)bVar6 * -4 + 7];
  *(undefined2 *)(pbVar3 + 0x16) = *in_EAX;
  pbVar3[2] = *(byte *)(in_EAX + 1);
  bVar6 = pbVar3[1];
  cVar1 = *(char *)((int)in_EAX + 3);
  pbVar3[1] = bVar6 & 1;
  pbVar3[1] = bVar6 & 1 | cVar1 * '\x02';
  uVar2 = (CONCAT11(*pbVar3,*(undefined1 *)((int)in_EAX + 0x11)) & 0xff01) & 0xfffffbff;
  bVar6 = (byte)(uVar2 >> 8);
  *pbVar3 = bVar6;
  *pbVar3 = bVar6 | (char)uVar2 << 2;
  *(undefined2 *)(pbVar3 + 0x1a) = in_EAX[4];
  *(undefined2 *)(pbVar3 + 0x18) = in_EAX[2];
  *(uint *)(pbVar3 + 0x12) = (uint)(ushort)in_EAX[9];
  return CONCAT44(in_EDX,(uint)*(ushort *)(pbVar3 + 0xe));
}
```

### `dk_attempt_delete_light_0acce4` (`0xacce4` in `light.cpp`)
- **Evidence**: String 'Attempt to delete light 0'
```c
void FUN_000acce4(void)

{
  int in_EAX;
  
  if (in_EAX == 0) {
    FUN_000ddaf0();
  }
  else if (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0) {
    if (*(short *)(&DAT_001bd5fd + in_EAX * 0x2e) != 0) {
      FUN_000e6a10();
    }
    if (((&DAT_001bd5ed)[in_EAX * 0x2e] & 4) == 0) {
      DAT_00388e24 = DAT_00388e24 + -1;
      FUN_000b087c();
    }
    else {
      DAT_00388e20 = DAT_00388e20 + -1;
    }
    FUN_000b0f94();
    FUN_000e6a10();
    return;
  }
  return;
}
```

### `sub_0acef0` (`0xacef0` in `light.cpp`)
- **Evidence**: Address-based identifier
```c
undefined8 FUN_000acef0(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,&DAT_001bd615 + in_EAX * 0x2e);
}
```

### `dk_attempt_get_anglexy_unallocated_0acf7c` (`0xacf7c` in `light.cpp`)
- **Evidence**: String 'Attempt to get anglexy of unallocated light structure'
```c
longlong FUN_000acf7c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((in_EAX != 0) && (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0)) {
    return CONCAT44(in_EDX,(uint)*(ushort *)(&DAT_001bd605 + in_EAX * 0x2e));
  }
  FUN_000ddaf0();
  return (ulonglong)in_EDX << 0x20;
}
```

### `dk_attempt_get_width_unallocated_0ad0f4` (`0xad0f4` in `light.cpp`)
- **Evidence**: String 'Attempt to get width of unallocated light structure'
```c
longlong FUN_000ad0f4(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((in_EAX != 0) && (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0)) {
    return CONCAT44(in_EDX,(uint)*(ushort *)(&DAT_001bd607 + in_EAX * 0x2e));
  }
  FUN_000ddaf0();
  return (ulonglong)in_EDX << 0x20;
}
```

### `dk_attempt_set_intensity_unallocated_0ad148` (`0xad148` in `light.cpp`)
- **Evidence**: String 'Attempt to set intensity of unallocated light structure'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad148(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  byte *pbVar2;
  undefined1 local_14;
  
  local_14 = (undefined1)in_EDX;
  if (in_EAX != 0) {
    iVar1 = in_EAX * 0x2e;
    pbVar2 = &DAT_001bd5ed + iVar1;
    if ((*pbVar2 & 1) != 0) {
      if ((byte)(&DAT_001bd5ef)[iVar1] == in_EDX) {
        return;
      }
      if ((*pbVar2 & 4) == 0) {
        FUN_000b087c();
        _DAT_00388e38 = 1;
      }
      (&DAT_001bd5ef)[iVar1] = local_14;
      if ((ushort)(byte)(&DAT_001bd5ef)[iVar1] <= *(ushort *)(&DAT_001bd611 + iVar1)) {
        return;
      }
      *pbVar2 = *pbVar2 | 8;
      return;
    }
  }
  FUN_000ddaf0();
  return;
}
```

### `dk_attempt_get_intensity_unallocated_0ad23c` (`0xad23c` in `light.cpp`)
- **Evidence**: String 'Attempt to get intensity of unallocated light structure'
```c
longlong FUN_000ad23c(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((in_EAX != 0) && (((&DAT_001bd5ed)[in_EAX * 0x2e] & 1) != 0)) {
    return CONCAT44(in_EDX,(uint)(byte)(&DAT_001bd5ef)[in_EAX * 0x2e]);
  }
  FUN_000ddaf0();
  return (ulonglong)in_EDX << 0x20;
}
```

### `dk_attempt_set_size_unallocated_0ad290` (`0xad290` in `light.cpp`)
- **Evidence**: String 'Attempt to set size of unallocated light structure'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ad290(void)

{
  int iVar1;
  int in_EAX;
  uint in_EDX;
  byte *pbVar2;
  
  if (in_EAX != 0) {
    iVar1 = in_EAX * 0x2e;
    pbVar2 = &DAT_001bd5ed + iVar1;
    if ((*pbVar2 & 1) != 0) {
      if (*(ushort *)(&DAT_001bd603 + iVar1) == in_EDX) {
        return;
      }
      if ((*pbVar2 & 4) == 0) {
        FUN_000b087c();
        _DAT_00388e38 = 1;
      }
      *(short *)(&DAT_001bd603 + iVar1) = (short)in_EDX;
      if ((in_EDX & 0xffff) <= (uint)(byte)(&DAT_001bd5f6)[iVar1]) {
        return;
      }
      *pbVar2 = *pbVar2 | 8;
      return;
    }
  }
  FUN_000ddaf0();
  return;
}
```

### `dk_graphic_id_model_class_0db5c4` (`0xdb5c4` in `ssprite.cpp`)
- **Evidence**: String 'Invalid graphic Id %d from model %d, class %d'
```c
void FUN_000db5c4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  int in_EAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  int extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  char **ppcVar10;
  char *pcStack_50;
  uint uStack_4c;
  uint local_48 [6];
  ushort local_30;
  undefined2 uStack_2e;
  short local_2c;
  undefined2 uStack_2a;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  
  ppcVar10 = (char **)(local_48 + 2);
  local_48[4] = (uint)DAT_003d9874;
  iVar2 = *(int *)(in_EAX + 8);
  local_1c = DAT_003d9581;
  if (*(char *)(DAT_002f10da + 8 +
               (uint)*(ushort *)((int)&PTR_DAT_00179450 + (*(int *)(iVar2 + 0x42) >> 0x10) * 2) *
               0x10) == '\0') {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x52);
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x52) - DAT_003d9784;
  }
  local_2c = (short)uVar8;
  uStack_2a = (undefined2)(uVar8 >> 0x10);
  if (DAT_00191d3c == '\0') {
    iVar7 = 0x10000;
    if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
      local_48[1] = 0xdb6b9;
      uVar6 = FUN_000b0c44();
      iVar9 = CONCAT22(extraout_var_00,uVar6);
    }
    else {
      iVar9 = 0x2000;
    }
  }
  else {
    iVar7 = *(int *)(in_EAX + 0x14);
    if (DAT_003d9794 < iVar7) {
      if (iVar7 < DAT_003d9798) {
        if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
          local_48[1] = 0xdb66f;
          uVar5 = FUN_000b0c44();
          uVar8 = (uint)uVar5;
          iVar9 = extraout_ECX;
        }
        else {
          uVar8 = 0x2000;
          iVar9 = DAT_003d979c;
        }
        iVar9 = (int)(((longlong)(DAT_003d9798 - iVar7) * (longlong)(int)uVar8) / (longlong)iVar9);
      }
      else {
        iVar9 = 0;
      }
    }
    else if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
      local_48[1] = 0xdb697;
      uVar6 = FUN_000b0c44();
      iVar9 = CONCAT22(extraout_var,uVar6);
    }
    else {
      iVar9 = 0x2000;
    }
  }
  iVar7 = (int)((uint)*(ushort *)(iVar2 + 0x46) * DAT_003d97a0) / iVar7;
  if ((*(byte *)(iVar2 + 0x4f) & 0xc) == 0) {
    if (iVar9 >> 8 == 0x20) {
      DAT_003d9874 = DAT_003d9874 & 0xf7ff;
    }
    else {
      DAT_003de9a8 = &DAT_00361c10 + (iVar9 >> 8) * 0x100;
      DAT_003d9874 = DAT_003d9874 | 0x800;
    }
  }
  else {
    DAT_003de9a8 = &DAT_00365c10 + (uint)*(byte *)(iVar2 + 0x51) * 0x100;
    DAT_003d9874 = DAT_003d9874 | 0x800;
  }
  DAT_003d9581 = 0;
  bVar4 = (*(byte *)(iVar2 + 0x4f) & 0x3f) >> 4;
  if (bVar4 == 1) {
    DAT_003d9874 = DAT_003d9874 & 0xf7ff | 8;
  }
  else if (bVar4 == 2) {
    DAT_003d9874 = DAT_003d9874 & 0xf7ff | 4;
  }
  else if (bVar4 == 3) {
    DAT_003d9581 = 1;
  }
  cVar1 = *(char *)(iVar2 + 0x1f);
  if (((cVar1 == '\x05') || (cVar1 == '\x01')) || (cVar1 == '\x04')) {
    iVar9 = (DAT_002f10ce >> 0x18) * 0x4ef;
    if ((*(short *)(iVar2 + 0x1b) == *(short *)(&DAT_0019d0fd + iVar9)) && ((DAT_002e8bee & 2) != 0)
       ) {
      if (*(char *)(*(int *)((int)&DAT_0019d100 + iVar9) + 6) == '\x02') {
        DAT_003de9a8 = &DAT_003d9584;
        DAT_003d9874 = DAT_003d9874 | 0x800;
      }
    }
    else if ((*(byte *)(iVar2 + 0x4f) & 0x80) != 0) {
      DAT_003de9a8 = &DAT_003d9684;
      DAT_003d9874 = DAT_003d9874 | 0x800;
      *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) & 0x7f;
    }
    DAT_003d9580 = 1;
    DAT_003d957c = iVar2;
  }
  else {
    DAT_003d9580 = 0;
    DAT_003d957c = 0;
  }
  if (0x3d5 < *(byte *)(iVar2 + 0x48)) {
    local_48[1] = (uint)*(byte *)(iVar2 + 0x1f);
    local_48[0] = (uint)*(byte *)(iVar2 + 0x1a);
    uStack_4c = *(int *)(iVar2 + 0x42) >> 0x10;
    pcStack_50 = s_Invalid_graphic_Id__d_from_model_0016c8dc;
    FUN_000e7714(&DAT_0019cbac);
    local_48[1] = 0xdb86c;
    FUN_000ddaf0();
    ppcVar10 = (char **)(local_48 + 2);
    goto LAB_000dbb50;
  }
  iVar9 = DAT_002f10ce >> 0x18;
  if (*(char *)(iVar2 + 0x1f) == '\x01') {
    bVar4 = *(byte *)(iVar2 + 0x1a);
    if (bVar4 < 4) {
      if (bVar4 == 2) goto LAB_000db8dd;
      goto LAB_000dbb2b;
    }
    if ((4 < bVar4) && (bVar4 != 0x1c)) goto LAB_000dbb2b;
LAB_000db8dd:
    local_48[5] = iVar7 >> 2;
    local_24 = iVar7 >> 1;
    iVar3 = CONCAT22(uStack_2a,local_2c);
    if (*(char *)(iVar2 + 0x1a) == '\x1c') {
      local_30 = 0x70;
      if ((&DAT_0019d51a)[iVar9 * 0x4ef] == '\x01') {
        local_20 = iVar7 >> 3;
        local_24 = local_48[5] - iVar7;
      }
      else {
        local_48[3] = (&DAT_001927e0)[iVar3] * iVar7 >> 0x14;
        local_24 = (int)(&PTR_LAB_00192fe0)[iVar3] * (-local_24 - iVar7) >> 0x10;
        local_20 = local_48[3];
      }
      local_28 = iVar7 / 2;
    }
    else {
      local_30 = 0x71;
      if (*(char *)(iVar2 + 0x1a) == '\x02') {
        if ((&DAT_0019d51a)[iVar9 * 0x4ef] == '\x01') {
          local_20 = 0;
          local_24 = iVar7 * 3 >> 3;
        }
        else {
          local_20 = (&DAT_001927e0)[iVar3] * iVar7 >> 0x14;
          local_24 = (int)(&PTR_LAB_00192fe0)[iVar3] * iVar7 >> 0x14;
        }
        local_28 = (iVar7 / 3) * 2;
      }
      else {
        if ((&DAT_0019d51a)[iVar9 * 0x4ef] == '\x01') {
          local_20 = (int)local_48[5] / 3;
        }
        else {
          local_48[3] = (&DAT_001927e0)[iVar3] * iVar7 >> 0x14;
          local_24 = (-local_24 - iVar7) * (int)(&PTR_LAB_00192fe0)[iVar3] >> 0x10;
          local_20 = local_48[3];
        }
        local_24 = local_24 / 3;
        local_28 = iVar7 / 3;
      }
    }
    uStack_2e = 0;
    local_48[1] = 0xdba81;
    uVar8 = FUN_0004c2eb();
    local_48[2] = (*(ushort *)(iVar2 + 0x1b) + DAT_002e8bee) % (uVar8 & 0xff);
    DAT_003d9581 = 0;
    local_48[0] = (uint)*(byte *)(iVar2 + 0x48);
    local_48[3] = (uint)local_2c;
    uStack_4c = 0xdbad6;
    local_48[1] = iVar7;
    FUN_0004c7eb();
    DAT_003d9581 = 1;
    uStack_4c = (uint)local_30;
    pcStack_50 = (char *)(local_48[0] & 0xff);
    ppcVar10 = &pcStack_50;
  }
  else {
    if ((((*(char *)(iVar2 + 0x1f) == '\b') && (*(char *)(iVar2 + 0x1a) != '\x01')) &&
        (*(int *)(iVar2 + 3) >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[iVar9 * 0x4ef])) &&
       (*(char *)(iVar2 + 0x18) == '\0')) goto LAB_000dbb50;
LAB_000dbb2b:
    local_48[0] = (uint)*(byte *)(iVar2 + 0x48);
    ppcVar10 = (char **)local_48;
    local_48[1] = iVar7;
  }
  *(undefined4 *)((int)ppcVar10 + -4) = 0xdbb50;
  FUN_0004c7eb();
LAB_000dbb50:
  DAT_003d9874 = (short)*(undefined4 *)((int)ppcVar10 + 8);
  DAT_003d9581 = *(undefined1 *)((int)ppcVar10 + 0x24);
  return;
}
```

### `dk_graphic_id_model_class_0dbb84` (`0xdbb84` in `ssprite.cpp`)
- **Evidence**: String 'Invalid graphic Id %d from model %d, class %d'
```c
/* WARNING: Type propagation algorithm not settling */

void FUN_000dbb84(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  int iVar4;
  int iVar5;
  char **ppcVar6;
  uint uVar7;
  char *pcStack_48;
  uint auStack_44 [7];
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  
  ppcVar6 = (char **)(auStack_44 + 3);
  auStack_44[4] = (uint)DAT_003d9874;
  iVar2 = *(int *)(in_EDX + 8);
  local_18 = DAT_003d9581;
  if (*(char *)(DAT_002f10da + 8 +
               (uint)*(ushort *)((int)&PTR_DAT_00179450 + (*(int *)(iVar2 + 0x42) >> 0x10) * 2) *
               0x10) == '\0') {
    local_28 = (uint)*(ushort *)(iVar2 + 0x52);
  }
  else {
    local_28 = (uint)*(ushort *)(iVar2 + 0x52) - (uint)*(ushort *)(in_EAX + 7);
  }
  bVar3 = (*(byte *)(iVar2 + 0x4f) & 0x3f) >> 4;
  if (bVar3 == 1) {
    DAT_003d9874 = DAT_003d9874 | 8;
  }
  else if (bVar3 == 2) {
    DAT_003d9874 = DAT_003d9874 | 4;
  }
  if ((*(byte *)(iVar2 + 0x4f) & 2) == 0) {
    auStack_44[2] = 0xdbc2a;
    uVar7 = FUN_000b0c44();
    uVar7 = uVar7 & 0xffff;
    in_EAX = extraout_ECX;
  }
  else {
    uVar7 = 0x2000;
  }
  iVar4 = *(int *)(in_EAX + 0x17) * 0x2000;
  iVar5 = iVar4 >> 0x1f;
  auStack_44[2] =
       (int)((uint)*(ushort *)(iVar2 + 0x46) *
            (((int)((iVar4 + iVar5 * -0x10000) - (uint)(iVar5 << 0xf < 0)) >> 0x10) /
            (int)(uint)DAT_0019cba6)) / 0x10000;
  if ((*(byte *)(iVar2 + 0x4f) & 0xc) == 0) {
    if ((int)uVar7 >> 8 == 0x20) {
      DAT_003d9874 = DAT_003d9874 & 0xf7ff;
    }
    else {
      DAT_003de9a8 = &DAT_00361c10 + ((int)uVar7 >> 8) * 0x100;
      DAT_003d9874 = DAT_003d9874 | 0x800;
    }
  }
  else {
    auStack_44[4] = (uint)DAT_003d9874;
    DAT_003de9a8 = &DAT_00365c10 + (uint)*(byte *)(iVar2 + 0x51) * 0x100;
    DAT_003d9874 = DAT_003d9874 | 0x800;
  }
  DAT_003d9581 = 0;
  bVar3 = (*(byte *)(iVar2 + 0x4f) & 0x3f) >> 4;
  if (bVar3 < 2) {
    if (bVar3 == 1) {
      DAT_003d9874 = DAT_003d9874 & 0xf7ff | 8;
    }
  }
  else if (bVar3 < 3) {
    DAT_003d9874 = DAT_003d9874 & 0xf7ff | 4;
  }
  else if (bVar3 == 3) {
    DAT_003d9581 = 1;
  }
  cVar1 = *(char *)(iVar2 + 0x1f);
  if (((cVar1 == '\x05') || (cVar1 == '\x01')) || (cVar1 == '\x04')) {
    if ((*(short *)(iVar2 + 0x1b) == *(short *)(&DAT_0019d0fd + (DAT_002f10ce >> 0x18) * 0x4ef)) &&
       ((DAT_002e8bee & 2) != 0)) {
      DAT_003de9a8 = &DAT_003d9584;
      DAT_003d9874 = DAT_003d9874 | 0x800;
    }
    else if ((*(byte *)(iVar2 + 0x4f) & 0x80) != 0) {
      DAT_003d9874 = DAT_003d9874 | 0x800;
      DAT_003de9a8 = &DAT_003d9684;
      *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) & 0x7f;
    }
    DAT_003d9580 = 1;
    DAT_003d957c = iVar2;
  }
  else {
    DAT_003d9580 = 0;
    DAT_003d957c = 0;
  }
  if (*(byte *)(iVar2 + 0x48) < 0x3d6) {
    iVar4 = DAT_002f10ce >> 0x18;
    if ((*(char *)(iVar2 + 0x1f) == '\x01') &&
       (((cVar1 = *(char *)(iVar2 + 0x1a), cVar1 == '\x02' || (cVar1 == '\x1c')) ||
        (cVar1 == '\x04')))) {
      auStack_44[6] = (int)auStack_44[2] >> 2;
      local_20 = (int)auStack_44[2] >> 1;
      if (*(char *)(iVar2 + 0x1a) == '\x1c') {
        auStack_44[5] = 0x70;
        if ((&DAT_0019d51a)[iVar4 * 0x4ef] == '\x01') {
          local_20 = auStack_44[6] - auStack_44[2];
        }
        else {
          local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * (-local_20 - auStack_44[2])) >> 0x10
          ;
        }
        local_1c = (int)auStack_44[2] / 2;
      }
      else {
        auStack_44[5] = 0x71;
        if (*(char *)(iVar2 + 0x1a) == '\x02') {
          if ((&DAT_0019d51a)[iVar4 * 0x4ef] == '\x01') {
            local_20 = (int)(auStack_44[2] * 3) >> 3;
          }
          else {
            local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * auStack_44[2]) >> 0x14;
          }
          local_1c = ((int)auStack_44[2] / 3) * 2;
        }
        else {
          if ((&DAT_0019d51a)[iVar4 * 0x4ef] == '\x01') {
            local_24 = 3;
          }
          else {
            local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * (-local_20 - auStack_44[2])) >>
                       0x10;
          }
          local_20 = local_20 / 3;
          local_1c = (int)auStack_44[2] / 3;
        }
      }
      auStack_44[2] = 0xdbfc2;
      uVar7 = FUN_0004c2eb();
      auStack_44[3] = (*(ushort *)(iVar2 + 0x1b) + DAT_002e8bee) % (uVar7 & 0xff);
      auStack_44[1] = (uint)*(byte *)(iVar2 + 0x48);
      DAT_003d9581 = 0;
      auStack_44[0] = 0xdc012;
      auStack_44[2] = extraout_ECX_00;
      FUN_0004c7eb();
      auStack_44[0] = local_24 & 0xffff;
      DAT_003d9581 = 1;
      ppcVar6 = &pcStack_48;
      pcStack_48 = (char *)0x0;
    }
    else {
      if ((((*(char *)(iVar2 + 0x1f) == '\b') && (*(char *)(iVar2 + 0x1a) != '\x01')) &&
          (*(int *)(iVar2 + 3) >> 0x18 != (uint)(byte)(&DAT_0019d0f3)[iVar4 * 0x4ef])) &&
         (*(char *)(iVar2 + 0x18) == '\0')) goto LAB_000dc0c4;
      auStack_44[1] = (uint)*(byte *)(iVar2 + 0x48);
      ppcVar6 = (char **)(auStack_44 + 1);
    }
    ppcVar6[0xffffffff] = (char *)0xdc0c4;
    FUN_0004c7eb();
  }
  else {
    auStack_44[2] = (uint)*(byte *)(iVar2 + 0x1f);
    auStack_44[1] = (uint)*(byte *)(iVar2 + 0x1a);
    auStack_44[0] = *(int *)(iVar2 + 0x42) >> 0x10;
    pcStack_48 = s_Invalid_graphic_Id__d_from_model_0016c916;
    FUN_000e7714(&DAT_0019cbac);
    auStack_44[2] = 0xdbe0a;
    FUN_000ddaf0();
    ppcVar6 = (char **)(auStack_44 + 3);
  }
LAB_000dc0c4:
  DAT_003d9874 = (short)ppcVar6[1];
  DAT_003d9581 = (char)ppcVar6[8];
  return;
}
```

### `dk_eyelens_memory_already_allocated_02700c` (`0x2700c` in `eyelens.cpp`)
- **Evidence**: String 'EyeLens Memory already allocated'
```c
void FUN_0002700c(void)

{
  if ((DAT_00333193 != 0) || (DAT_00333197 != 0)) {
    FUN_000ddaf0();
    FUN_000270e0();
  }
  if (0xf < DAT_00334065) {
    if (DAT_003d9878 < 10) {
      if (DAT_003d9878 == 1) {
        DAT_00333193 = FUN_000e9484();
        if (DAT_00333193 != 0) {
          DAT_00333197 = FUN_000e9484();
          if (DAT_00333197 != 0) goto LAB_0002708c;
          FUN_000e94b0();
          DAT_00333193 = 0;
        }
        goto LAB_00027046;
      }
    }
    else if ((DAT_003d9878 < 0xb) || (DAT_003d9878 == 0xd)) {
      DAT_00333193 = FUN_000e9484();
      if (DAT_00333193 != 0) {
LAB_0002708c:
        DAT_0019d0bd = DAT_0019d0bd | 2;
        return;
      }
      DAT_00333193 = 0;
      goto LAB_00027046;
    }
    FUN_000ddaf0();
  }
LAB_00027046:
  DAT_0019d0bd = DAT_0019d0bd & 0xfd;
  return;
}
```

### `dk_data_frac_dat_027130` (`0x27130` in `eyelens.cpp`)
- **Evidence**: String 'data\frac%02d.dat'
```c
void FUN_00027130(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18;
  
  if ((DAT_0019d0bd & 2) == 0) {
    return;
  }
  if ((0xc < DAT_0019d0c7) && (DAT_0019d0c7 < 0xf)) {
    *(undefined4 *)(&DAT_0019d0cf + DAT_002f10ce._3_1_ * 0x4ef) = 0;
    DAT_0019d0c6 = 0;
  }
  if (in_EAX == 0) {
    DAT_0019d0c6 = 0;
    DAT_0019d0c7 = 0;
    return;
  }
  local_18 = (undefined1)in_EAX;
  if (DAT_0019d0c6 == in_EAX) {
    DAT_0019d0c7 = local_18;
    return;
  }
  if (in_EAX < 4) {
    if (in_EAX == 0) {
LAB_000272c0:
      FUN_000ddaf0();
      DAT_0019d0c6 = 0;
      DAT_0019d0c7 = 0;
      return;
    }
    if (in_EAX < 3) {
      FUN_0004de8c();
    }
    else {
      FUN_0002d861();
    }
  }
  else {
    if (in_EAX < 0xc) {
      FUN_000e7714(&DAT_0019cbac,s_data_frac_02d_dat_001627ed,in_EAX - 4);
    }
    else {
      if (0xc < in_EAX) {
        uVar2 = DAT_00199220;
        if ((in_EAX < 0xe) || (uVar2 = DAT_00199224, in_EAX == 0xe)) {
          iVar1 = (int)DAT_002f10ce._3_1_;
          *(undefined4 *)(&DAT_0019d591 + iVar1 * 0x4ef) = uVar2;
          *(undefined4 *)(&DAT_0019d0cf + iVar1 * 0x4ef) = uVar2;
          DAT_0019d0c6 = local_18;
          DAT_0019d0c7 = local_18;
          return;
        }
        goto LAB_000272c0;
      }
      FUN_000e7714(&DAT_0019cbac,s_data_frac_02d_dat_001627ff,in_EAX - 4);
    }
    FUN_000e984c();
    FUN_00051a06();
    FUN_00051a3f();
  }
  DAT_0019d0c7 = local_18;
  DAT_0019d0c6 = local_18;
  return;
}
```

### `dk_why_are_we_here_02dfac` (`0x2dfac` in `frontend.cpp`)
- **Evidence**: String 'Why are we here'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002dfac(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char extraout_CL;
  char extraout_CL_00;
  uint extraout_EDX;
  longdouble lVar4;
  double dVar5;
  
  lVar4 = (longdouble)FUN_00065724();
  _DAT_0033401d = (float)lVar4;
  dVar5 = (double)lVar4;
  if ((lVar4 <= (longdouble)_DAT_00163433) || (_DAT_0016343b <= dVar5)) {
    DAT_002ee88d = 0;
  }
  else {
    DAT_002ee88d = 1;
  }
  if ((DAT_0019d0bd & 1) != 0) {
    DAT_002e6f2d = '\0';
  }
  DAT_0019d0c1 = -1;
  FUN_0002feca();
  if ((DAT_002e6f2d == '\0') || (DAT_002e6ff3 != '\0')) {
    if ((DAT_0019d0b8 & 2) == 0) {
      iVar2 = FUN_0006aac0();
      if (iVar2 == 0) {
        DAT_00334021 = 1;
        FUN_000e8ca8();
        DAT_0019a2a1 = 1;
        return;
      }
      FUN_000e7904(0);
      FUN_000e79fc();
      iVar2 = FUN_00030cd9();
      if (iVar2 == 0) {
        FUN_000ddaf0();
        DAT_0019a2a1 = 1;
        return;
      }
      FUN_000e6a10();
      FUN_000e846c(DAT_00199228);
      if ((DAT_0019d0bd & 0x40) == 0) {
        if ((DAT_0019d0b6 & 1) == 0) {
          iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
          if ((((&DAT_0019d0ce)[iVar2] & 2) == 0) && ((&DAT_0019d0f1)[iVar2] != '\0')) {
            if ((DAT_0019d0bd & 1) == 0) {
              if ((&DAT_0019d0f1)[iVar2] == '\x01') {
                if (DAT_002e78ea < 0x15) {
                  if (((&DAT_0019d0cb)[iVar2] & 0x10) != 0) goto LAB_0002e0f4;
                  FUN_00070bf9();
                }
                else {
                  FUN_00070bf9();
                }
              }
            }
            else {
              DAT_0019d0bd = DAT_0019d0bd & 0xfe;
            }
          }
        }
        else if (((&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 0x10) == 0) {
          if (((&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 2) != 0) {
            FUN_00033156();
          }
        }
        else {
          iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
LAB_0002e0f4:
          (&DAT_0019d0cb)[iVar2] = (&DAT_0019d0cb)[iVar2] & 0xef;
        }
      }
      else if ((_DAT_0033401d <= (float)_DAT_00163433) || ((float)_DAT_0016343b <= _DAT_0033401d)) {
        FUN_00030e04();
      }
      FUN_0002e8a7();
      iVar2 = 0;
      DAT_0019d0bd = DAT_0019d0bd & 0xbf;
      while (iVar2 == 0) {
        iVar3 = FUN_000e8560();
        if ((iVar3 == 0) && ((DAT_0019d0b6 & 1) == 0)) {
          iVar2 = 1;
          DAT_0019a2a1 = '\x01';
          break;
        }
        FUN_00052934();
        DAT_00334a58 = DAT_00334738;
        DAT_00334738 = 0;
        FUN_0002faf6();
        if ((DAT_0019a2a1 != '\0') || (FUN_0002fc49(), DAT_0019a2a1 != '\0')) {
          iVar2 = 1;
          break;
        }
        if ((iVar2 == 0) && (iVar3 = FUN_000e797c(), iVar3 != 0)) {
          FUN_0002fda1();
          FUN_000e79fc();
        }
        if (DAT_00334019 == 0) {
          FUN_0006f98e();
          FUN_0006dfd3();
          FUN_000ead2f();
        }
        if (DAT_00335130 != '\0') {
          FUN_00030ca0();
          DAT_00335130 = '\0';
        }
      }
      FUN_000e8d80(dVar5,iVar2);
      FUN_000e7904(0);
      FUN_000e79fc();
      FUN_0002e8a7();
      if (DAT_0019a2a1 != '\0') goto LAB_0002e46d;
      iVar2 = FUN_00030e88();
      if (iVar2 == 0) {
        return;
      }
      FUN_0006ae80();
      bVar1 = DAT_0019d0b6 & 0xfe;
      if (extraout_EDX < 8) {
        if (extraout_EDX != 7) goto LAB_0002e46d;
        DAT_002f10ce._3_1_ = '\0';
        DAT_002ebaf6 = 2;
        DAT_0019d0f4 = 1;
        DAT_002e78e9 = DAT_0019d0c2;
        DAT_0019d0b6 = bVar1;
      }
      else {
        if (8 < extraout_EDX) {
          if (extraout_EDX < 10) goto LAB_0002e46d;
          if (extraout_EDX < 0xb) {
            if (DAT_0019d0c1 == -2) {
              DAT_0019d0b6 = bVar1;
              FUN_000ddaf0();
              DAT_0019d0c1 = extraout_CL;
            }
            else {
              DAT_0019d0b6 = bVar1;
              FUN_000e7904(0);
              FUN_000e79fc();
              FUN_0002c833();
              DAT_0019d0c1 = extraout_CL_00;
            }
            goto LAB_0002e46d;
          }
          if (extraout_EDX != 0x19) goto LAB_0002e46d;
          DAT_0019d0bd = DAT_0019d0bd | 1;
          goto LAB_0002e023;
        }
        DAT_002e78e9 = DAT_0019d0c2;
        DAT_002ebaf6 = 5;
        DAT_0019d0b6 = DAT_0019d0b6 | 1;
        (&DAT_0019d0f4)[DAT_002f10ce._3_1_ * 0x4ef] = 1;
      }
    }
    else {
      iVar2 = FUN_00030e88();
      if (iVar2 == 0) {
        return;
      }
      DAT_002f10ce._3_1_ = '\0';
      DAT_002ebaf6 = 2;
      DAT_0019d0f4 = 1;
      DAT_002e78e9 = DAT_0019d0c2;
    }
    FUN_0005d35c();
  }
  else {
    iVar2 = FUN_00030e88();
    if (iVar2 == 0) {
      return;
    }
LAB_0002e023:
    FUN_0005da11();
  }
LAB_0002e46d:
  (&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] = (&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 0xfd;
  return;
}
```

### `dk_load_frontend_palette_02e8a7` (`0x2e8a7` in `frontend.cpp`)
- **Evidence**: String 'Unable to load FRONTEND PALETTE'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002e8a7(void)

{
  undefined4 in_EAX;
  int iVar1;
  
  switch(DAT_00334a44) {
  case 0:
    FUN_000543dd();
    FUN_000e7714(&DAT_0019cbac,s__s_LDATA_FRONT_PAL_0016346a,&DAT_002ee923);
    FUN_000150f0();
    iVar1 = FUN_000e984c();
    if (iVar1 != 0x300) {
      FUN_000ddaf0();
    }
    FUN_00030322();
    FUN_000ebf9c();
    FUN_00052934();
    break;
  case 1:
    goto LAB_0002e953;
  case 2:
    goto LAB_0002e953;
  case 3:
    FUN_00031213();
    goto LAB_0002e969;
  case 4:
    goto LAB_0002e953;
  case 5:
    goto LAB_0002e953;
  case 6:
    goto LAB_0002e953;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0x15:
  case 0x19:
    break;
  case 0xc:
  case 0x1d:
    FUN_00030057();
    break;
  case 0xf:
    FUN_0005c848();
    FUN_00035bbf();
    break;
  case 0x10:
    FUN_0005c848();
    FUN_00035bbf();
    break;
  case 0x11:
    FUN_000eae8a();
    goto LAB_0002e953;
  case 0x12:
LAB_0002e953:
    FUN_0005c848();
    break;
  case 0x13:
    FUN_0003699b();
    goto LAB_0002e969;
  default:
    FUN_000ddaf0();
    break;
  case 0x18:
    FUN_00031bd6();
LAB_0002e969:
    FUN_00030cd9();
    break;
  case 0x1a:
    FUN_0005c848();
    FUN_0002a355();
    break;
  case 0x1b:
    FUN_0005c848();
  case 0xd:
    if ((DAT_0019d0bd & 0x10) == 0) {
      FUN_000ecd76();
    }
  }
  if (DAT_00334a44 != 0) {
    FUN_00030cb9();
  }
  DAT_00335130 = 1;
  switch(in_EAX) {
  case 0:
    goto LAB_0002ea32;
  case 1:
    FUN_000ebc10();
    DAT_00334de4 = FUN_0002ff2e();
    FUN_0005cf2d();
    _DAT_00334e08 = FUN_000eb818();
    DAT_00334e0c = DAT_003d9864 * (uint)DAT_0019cba6;
    DAT_00334e10 = FUN_000dc150();
    DAT_00334a50 = 1;
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfe;
    break;
  case 2:
    FUN_0005cf2d();
LAB_0002ea32:
    FUN_000ebc10();
    break;
  case 3:
    iVar1 = FUN_00030ef8();
    if (iVar1 == 0) {
      in_EAX = 7;
    }
    break;
  case 4:
    FUN_0005cf2d();
    FUN_00033ead();
    break;
  case 5:
    FUN_0005cf2d();
    FUN_0003468f();
    FUN_000ebc10();
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfe;
    break;
  case 6:
    FUN_0005cf2d();
    FUN_00034ed8();
    FUN_000ebc10();
    DAT_0019d0b6 = DAT_0019d0b6 | 1;
    break;
  case 8:
    if ((DAT_0019d0ba & 0x10) != 0) {
      FUN_000ed034();
    }
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0x15:
  case 0x19:
    DAT_00335130 = 0;
    break;
  case 0xc:
  case 0x1d:
    FUN_0002ffe4();
    break;
  case 0xd:
    DAT_0033512c = 0;
    DAT_00335128 = DAT_003d9830;
    FUN_000e6b20();
    DAT_003d9874 = 0x100;
    break;
  case 0xf:
    FUN_0005cf2d();
    FUN_000344c8();
    break;
  case 0x10:
    FUN_0005cf2d();
    FUN_0003409c();
    break;
  case 0x11:
    FUN_0005cf2d();
    FUN_000ebc10();
    FUN_00036008();
    break;
  case 0x12:
    FUN_0005cf2d();
    if (*(int *)(&DAT_002e18a0 + DAT_002f10ce._3_1_ * 0x1508) != 0) {
      *(undefined4 *)(&DAT_002e18a0 + DAT_002f10ce._3_1_ * 0x1508) = 0;
      FUN_000306e4();
    }
    FUN_000ebc10();
    DAT_003db5fc = 0;
    break;
  case 0x13:
    FUN_000ebc10();
    FUN_00036654();
    break;
  default:
    FUN_000ddaf0();
    break;
  case 0x18:
    FUN_000ebc10();
    FUN_00031a51();
    break;
  case 0x1a:
    DAT_00335135 = 0;
    DAT_00335131 = 0;
    goto LAB_0002ea55;
  case 0x1b:
LAB_0002ea55:
    FUN_0005cf2d();
  }
  DAT_00334a44 = in_EAX;
  return;
}
```

### `dk_why_are_we_here_02ecbd` (`0x2ecbd` in `frontend.cpp`)
- **Evidence**: String 'Why are we here when it's not a new level'
```c
void FUN_0002ecbd(void)

{
  undefined1 in_AL;
  undefined4 uVar1;
  int extraout_ECX;
  int in_EDX;
  
  if (in_EDX == 0) {
    FUN_000ddaf0();
  }
  FUN_000dd920(s_CONTINUE_SAV_0016352d);
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s__s_00163541,uVar1);
  if (extraout_ECX == 0) {
    in_AL = 0;
  }
  DAT_0019d0b4._1_1_ = in_AL;
  FUN_000e98c8();
  return;
}
```

### `sub_02f9f5` (`0x2f9f5` in `frontend.cpp`)
- **Evidence**: Address-based identifier
```c
undefined4 FUN_0002f9f5(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_EDX;
  
  iVar1 = FUN_0006aac0();
  if (iVar1 != 0) {
    FUN_000ebab0();
    FUN_000e7904(extraout_EDX);
    FUN_000e79fc();
    iVar1 = FUN_000efde0();
    if (iVar1 == 0) {
      FUN_000ddaf0();
    }
  }
  iVar1 = FUN_0006aac0();
  if (iVar1 == 0) {
    DAT_00334021 = 1;
    FUN_000e8ca8();
    DAT_0019a2a1 = 1;
    return 0;
  }
  FUN_000e7904(0);
  FUN_000e79fc();
  FUN_000e846c(&DAT_00334740);
  if (extraout_ECX != -1) {
    FUN_0002e8a7();
  }
  DAT_003d987b = 0;
  DAT_003d987c = 0;
  DAT_003d987d = 0;
  FUN_000ebf9c();
  return 1;
}
```

### `dk_ldata_front_raw_02ffe4` (`0x2ffe4` in `frontend.cpp`)
- **Evidence**: String 'LDATA\FRONT.RAW'
```c
undefined8 FUN_0002ffe4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  
  FUN_000150f0();
  FUN_0002f1c8();
  iVar1 = FUN_000e830c();
  if (iVar1 != 0) {
    uVar2 = FUN_000ddaf0();
    return CONCAT44(in_EDX,uVar2);
  }
  FUN_0002f1d2();
  FUN_000f05f0();
  FUN_000e846c(&DAT_00334740);
  FUN_000eb818();
  FUN_000f071e();
  iVar1 = FUN_000f06fa();
  DAT_0033513d = iVar1 % 0x1a + 0x323;
  return CONCAT44(in_EDX,iVar1 / 0x1a);
}
```

### `dk_text_long_box_030a2d` (`0x30a2d` in `frontend.cpp`)
- **Evidence**: String 'Text too long for error box'
```c
void FUN_00030a2d(void)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  DAT_003d98b4 = DAT_003346e8;
  iVar1 = FUN_000e6c1c();
  if (iVar1 < 0x1b0) {
    local_1c = iVar1 / 0x6c;
  }
  else {
    local_1c = 4;
    if (4 < iVar1 / 0x144) {
      FUN_000ddaf0();
    }
  }
  if (local_1c < 2) {
    local_1c = 2;
  }
  else if (4 < local_1c) {
    local_1c = 4;
  }
  FUN_0013a710();
  for (local_20 = 0; local_20 < local_1c; local_20 = local_20 + 1) {
    FUN_0013a710();
  }
  FUN_0013a710();
  FUN_0013a710();
  for (local_28 = 0; local_28 < local_1c; local_28 = local_28 + 1) {
    FUN_0013a710();
  }
  FUN_0013a710();
  FUN_0013a710();
  for (local_24 = 0; local_24 < local_1c; local_24 = local_24 + 1) {
    FUN_0013a710();
  }
  FUN_0013a710();
  DAT_003d9874 = 0x100;
  FUN_000e6b20();
  FUN_000e6d80();
  return;
}
```

### `dk_ldata_dkflag00_dat_030ef8` (`0x30ef8` in `frontmap.cpp`)
- **Evidence**: String 'LDATA\DKFLAG00.DAT'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00030ef8(void)

{
  int iVar1;
  uint uVar2;
  uint in_EDX;
  uint *puVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint auStack_c [2];
  
  puVar3 = auStack_c;
  uStack_10 = 0x30f0c;
  auStack_c[0] = in_EDX;
  FUN_000e6a10();
  uStack_10 = DAT_00199228;
  uStack_14 = 0x30f17;
  FUN_000e846c();
  DAT_003351e2 = 0;
  DAT_003351e6 = 0;
  DAT_003351ee = 0;
  _DAT_003351ea = 0;
  _DAT_003351f2 = 0;
  uStack_10 = 0x30f51;
  FUN_000150f0();
  uStack_10 = 0x30f56;
  FUN_0002f1c8();
  uStack_10 = 0x30f62;
  iVar1 = FUN_000329ae();
  if (iVar1 != 0) {
    uStack_10 = 0x30f7b;
    iVar1 = FUN_000e830c();
    if (iVar1 == 0) {
      uStack_10 = 0x30f9f;
      FUN_000f05f0();
      uStack_10 = 0x30fa4;
      FUN_0002f1d2();
      if ((DAT_0019d0bd & 0x10) == 0) {
        uStack_10 = 0x30fb7;
        FUN_000ecabc();
      }
      if ((((&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 2) == 0) &&
         (((DAT_002e78ea == 1 || ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02')) ||
          ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] == '\x03')))) {
        DAT_00335182 = (&DAT_0017b644)[(uint)DAT_002e78ea * 5] - DAT_003d982c / 2;
        DAT_00335186 = (&DAT_0017b648)[(uint)DAT_002e78ea * 5] - DAT_003d9830 / 2;
        DAT_0033516c = 0;
        uStack_10 = 0x31040;
        DAT_0033519a = DAT_00335182;
        DAT_0033519e = DAT_00335186;
        iVar1 = FUN_000eb818();
        DAT_003351e2 = iVar1 + 1000;
      }
      else {
        if (((&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 2) == 0) {
          uVar2 = DAT_002e78ea - 1;
        }
        else {
          uVar2 = (uint)DAT_002e78ea;
        }
        DAT_00335182 = (&DAT_0017b644)[uVar2 * 5] - DAT_003d982c / 2;
        DAT_00335186 = (&DAT_0017b648)[uVar2 * 5] - DAT_003d9830 / 2;
        DAT_00335176 = (&DAT_0017b644)[uVar2 * 5];
        DAT_0033517a = (&DAT_0017b648)[uVar2 * 5];
        DAT_0033516c = 1;
        DAT_0033516d = 1;
        DAT_00335172 = 0xf0;
        DAT_0033516e = 0xfffffffc;
      }
      DAT_003351f6 = 0x100;
      if (DAT_00335182 < 0) {
        DAT_00335182 = 0;
      }
      else if (0x500 - DAT_003d982c < DAT_00335182) {
        DAT_00335182 = 0x500 - DAT_003d982c;
      }
      if (DAT_00335186 < 0) {
        DAT_00335186 = 0;
      }
      else if (0x3c0 - DAT_003d9830 < DAT_00335186) {
        DAT_00335186 = 0x3c0 - DAT_003d9830;
      }
      DAT_0033518a = DAT_00335182 << 8;
      DAT_0033518e = DAT_00335186 << 8;
      DAT_00335192 = 0;
      DAT_00335196 = 0;
      uStack_10 = 0x3118f;
      FUN_000ebab0();
      uStack_10 = 0x311ac;
      FUN_000ebf9c();
      if (0xf < DAT_00334065) {
        uStack_10 = 0;
        uStack_14 = 2;
        uStack_18 = 0xffffffff;
        uStack_1c = 100;
        uStack_20 = 0x311d0;
        FUN_0006e159();
        uStack_20 = 0;
        uStack_24 = 2;
        uStack_28 = 0xffffffff;
        puVar3 = &uStack_2c;
        uStack_2c = 100;
        FUN_0006e159();
      }
      if ((DAT_0019d0bd & 0x10) == 0) {
        puVar3[-1] = 0x31200;
        FUN_000ecf70();
      }
      DAT_00334a4c = 0;
      return CONCAT44(*puVar3,1);
    }
    uStack_10 = 0x30f93;
    FUN_000ddaf0();
  }
  uStack_10 = 0x30f6b;
  FUN_0002f1d2();
  return (ulonglong)auStack_c[0] << 0x20;
}
```

### `dk_ldata_netflag_dat_031a51` (`0x31a51` in `frontmap.cpp`)
- **Evidence**: String 'LDATA\NETFLAG.DAT'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031a51(void)

{
  char cVar1;
  int iVar2;
  
  if (DAT_0033591f != 0) {
    cVar1 = FUN_000ed0ac();
    if (cVar1 != '\0') {
      FUN_000ddaf0();
    }
  }
  FUN_000150f0();
  FUN_0002f1c8();
  DAT_002e78e9 = 0;
  iVar2 = FUN_000329ae();
  if (iVar2 == 0) {
    FUN_0002f1d2();
    return;
  }
  iVar2 = FUN_000e830c();
  if (iVar2 != 0) {
    FUN_000ddaf0();
    return;
  }
  FUN_000f05f0();
  FUN_0002f1d2();
  FUN_00032f9b();
  DAT_00335182 = (0x500 - DAT_003d982c) / 2;
  DAT_00335186 = (0x3c0 - DAT_003d9830) / 2;
  DAT_00334a54 = 0xffffffff;
  DAT_003351fa = 0xffffffff;
  FUN_000ebab0();
  FUN_000ebf9c();
  DAT_003d98b4 = DAT_003351b2;
  FUN_000e6b20();
  DAT_003d9874 = 0;
  DAT_003351f6 = 0x100;
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecf70();
  }
  if (DAT_0033591f == 0) {
    DAT_003351fe = 1;
  }
  else {
    DAT_003351fe = 0;
    iVar2 = 0;
    do {
      if (((&DAT_003358f3)[iVar2] & 1) != 0) {
        DAT_003351fe = DAT_003351fe + 1;
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 != 0x30);
  }
  _DAT_00335202 = 0;
  _DAT_00335206 = 0;
  return;
}
```

### `dk_LbNetwork_Exchange_031def` (`0x31def` in `frontmap.cpp`)
- **Evidence**: References 'LbNetwork_Exchange failed'
```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00031def(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  undefined4 in_EDX;
  uint uVar12;
  undefined8 uVar13;
  int local_24;
  int local_20;
  uint local_1c;
  
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecf70();
  }
  if (DAT_0033516d == '\0') {
    FUN_000e6a10();
    iVar5 = (int)DAT_002f10ce._3_1_;
    iVar7 = iVar5 * 0xc;
    (&DAT_003358f9)[iVar7] = (undefined1)DAT_00334a54;
    (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] | 1;
    if (_DAT_00335206 == 0) {
      if (DAT_00334a54 == -1) {
        sVar11 = (short)DAT_003d9864 * DAT_0019cba6 + (short)DAT_00335182;
        if (_DAT_00335202 != 0) {
          (&DAT_003358f5)[iVar5 * 6] = sVar11;
          sVar11 = FUN_000dc150();
          iVar5 = DAT_002f10ce._3_1_ * 0xc;
          (&DAT_003358f7)[DAT_002f10ce._3_1_ * 6] = (short)DAT_00335186 + sVar11;
          if (_DAT_00335202 < 0x11) {
            uVar2 = DAT_00335202;
            (&DAT_003358f3)[iVar5] = (&DAT_003358f3)[iVar5] & 7;
            (&DAT_003358f9)[iVar5] = uVar2;
            _DAT_00335202 = _DAT_00335202 + 1;
            (&DAT_003358f3)[iVar5] = (&DAT_003358f3)[iVar5] | 8;
          }
          else {
            _DAT_00335202 = 0;
          }
          goto LAB_00031fdc;
        }
        (&DAT_003358f5)[iVar5 * 6] = sVar11;
        sVar11 = FUN_000dc150();
        sVar11 = (short)DAT_00335186 + sVar11;
        iVar7 = DAT_002f10ce._3_1_ * 0xc;
      }
      else {
        sVar11 = *(short *)((int)&DAT_00335379 + DAT_00334a54 * 0xe);
        (&DAT_003358f5)[iVar5 * 6] =
             (ushort)*(byte *)(DAT_003351d2 + 10) * (short)DAT_002f10ce._3_1_ +
             *(short *)((int)&DAT_00335375 + DAT_00334a54 * 0xe);
      }
      *(short *)((int)&DAT_003358f7 + iVar7) = sVar11;
    }
    else {
      uVar3 = (undefined2)DAT_0033520a;
      (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] & 7;
      (&DAT_003358f5)[iVar5 * 6] = uVar3;
      (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] | 0x10;
      (&DAT_003358f7)[iVar5 * 6] = (undefined2)DAT_0033520e;
      (&DAT_003358fa)[iVar7] = DAT_00335206;
      _DAT_00335206 = _DAT_00335206 + -1;
      if (_DAT_00335206 == 0) {
        FUN_000ebf9c();
      }
    }
LAB_00031fdc:
    if ((DAT_0033591f != 0) && (cVar4 = FUN_000ee694(), cVar4 != '\0')) {
      FUN_000ddaf0();
    }
    local_1c = 0xffffffff;
    FUN_000e6a10();
    bVar1 = false;
    uVar12 = 0;
    local_20 = 0;
    iVar5 = 0;
    for (iVar7 = 0; iVar9 = DAT_00199228, iVar7 < 4; iVar7 = iVar7 + 1) {
      if (((&DAT_003358f3)[iVar5] & 1) != 0) {
        iVar10 = (int)(char)(&DAT_003358f9)[iVar5];
        if (iVar10 == -2) {
          if ((DAT_0033591f != 0) && (cVar4 = FUN_000ed0ac(), cVar4 != '\0')) {
            FUN_000ddaf0();
          }
          FUN_0002e8a7();
          goto LAB_00031a4a;
        }
        if ((iVar10 == -1) || ((byte)(&DAT_003358f3)[iVar5] >> 3 == 1)) {
          local_20 = local_20 + 1;
        }
        else {
          *(char *)(iVar10 + DAT_00199228) = *(char *)(iVar10 + DAT_00199228) + '\x01';
          iVar10 = (int)(char)(&DAT_003358f9)[iVar5];
          uVar8 = (uint)*(byte *)(iVar9 + iVar10);
          if (uVar8 == local_1c) {
            bVar1 = false;
          }
          else if ((int)local_1c < (int)uVar8) {
            bVar1 = true;
            uVar12 = (uint)(byte)(&DAT_00335373)[iVar10 * 0xe];
            local_24 = iVar10;
            local_1c = uVar8;
          }
        }
        if (((byte)(&DAT_003358f3)[iVar5] >> 3 == 1) && ((&DAT_003358f9)[iVar5] == '\r')) {
          uVar13 = FUN_00032e00();
          iVar5 = (int)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 != 0) {
            iVar9 = (int)DAT_002f10ce._3_1_;
            _DAT_00335206 = 0xc;
            DAT_00334a54 = -1;
            _DAT_00335202 = 0;
            DAT_0033520a = (uint)(ushort)(&DAT_003358f5)[iVar9 * 6];
            (&DAT_003358f3)[iVar9 * 0xc] = (&DAT_003358f3)[iVar9 * 0xc] & 7;
            DAT_0033520e = (uint)(ushort)(&DAT_003358f7)[iVar9 * 6];
            (&DAT_003358f3)[iVar9 * 0xc] = (&DAT_003358f3)[iVar9 * 0xc] | 0x10;
          }
        }
      }
      iVar5 = iVar5 + 0xc;
    }
    if (((local_20 == 0) && (uVar12 != 0)) && (bVar1)) {
      _DAT_0019d0c2 = uVar12;
      FUN_000e7714(&DAT_00334025,s__s__d_0016418b,DAT_003337f3,uVar12);
      DAT_0033516d = '\x01';
      DAT_00335172 = 1;
      DAT_0033516e = 4;
      DAT_00335176 = (int)DAT_002f10ce._3_1_ * (uint)*(byte *)(DAT_003351d2 + 10) +
                     *(int *)((int)&DAT_00335375 + local_24 * 0xe);
      DAT_0033517a = *(int *)((int)&DAT_00335379 + local_24 * 0xe);
      DAT_0033517e = (DAT_0033591f != 0) + 7;
      DAT_0033519a = DAT_00335176 - DAT_003d982c / 2;
      DAT_0033519e = DAT_0033517a - DAT_003d9830 / 2;
      if (DAT_0033519a < 0) {
        DAT_0033519a = 0;
      }
      else if (0x500 - DAT_003d982c < DAT_0033519a) {
        DAT_0033519a = 0x500 - DAT_003d982c;
      }
      if (DAT_0033519e < 0) {
        DAT_0033519e = 0;
      }
      else if (0x3c0 - DAT_003d9830 < DAT_0033519e) {
        DAT_0033519e = 0x3c0 - DAT_003d9830;
      }
      DAT_0033518a = DAT_00335182 << 8;
      DAT_0033518e = DAT_00335186 << 8;
      if (DAT_0033591f == 0) {
        DAT_00334a4c = 1;
      }
    }
  }
  else {
    iVar5 = FUN_00032d8c();
    if (iVar5 != 0) {
      uVar6 = 1;
      goto LAB_00032316;
    }
  }
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecabc();
  }
LAB_00031a4a:
  uVar6 = 0;
LAB_00032316:
  return CONCAT44(in_EDX,uVar6);
}
```

### `dk_number_players_0322e9` (`0x322e9` in `frontmap.cpp`)
- **Evidence**: String 'Invalid number of players'
```c
/* WARNING: Removing unreachable block (ram,0x000323f2) */

void FUN_000322e9(void)

{
  byte bVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint auStack_34 [5];
  int local_20;
  int local_1c;
  
  if (DAT_0033516d == '\0') {
    FUN_000327b5();
    DAT_003d9874 = 0;
    iVar6 = 0;
    for (iVar7 = 0; iVar7 < DAT_003358eb; iVar7 = iVar7 + 1) {
      if (DAT_003351fe <= (int)(uint)(byte)(&DAT_00335374)[iVar6]) {
        bVar1 = (&DAT_00335374)[iVar6];
        if (bVar1 < 3) {
          if (bVar1 != 2) goto LAB_000323ba;
        }
        else if ((3 < bVar1) && (bVar1 != 4)) {
LAB_000323ba:
          FUN_000ddaf0();
          return;
        }
        FUN_0013a710();
      }
      iVar6 = iVar6 + 0xe;
    }
    iVar6 = 0;
    local_20 = 0;
    puVar4 = auStack_34 + 2;
    do {
      puVar5 = (undefined1 *)puVar4;
      if (((&DAT_003358f3)[iVar6] & 1) != 0) {
        iVar7 = 0;
        iVar3 = 0;
        if ((byte)(&DAT_003358f3)[iVar6] >> 3 != 1) {
          if ((byte)(&DAT_003358f3)[iVar6] >> 3 == 2) {
            uVar2 = (uint)(byte)(&DAT_003358fa)[iVar6];
            if (0xb < uVar2) {
              uVar2 = 0xb;
            }
            iVar7 = (&DAT_0017b854)[uVar2];
            iVar3 = (&DAT_0017b884)[uVar2];
          }
          else if ((&DAT_003358f9)[iVar6] == -1) {
            *(undefined4 *)((int)puVar4 + -4) = 0x32429;
            FUN_000eb818();
            local_1c = 8;
            iVar7 = extraout_ECX;
          }
          else {
            *(undefined4 *)((int)puVar4 + -4) = 0x3244f;
            FUN_000eb818();
            local_1c = 4;
            iVar7 = extraout_ECX_00;
          }
        }
        auStack_34[4] =
             ((uint)*(ushort *)((int)&DAT_003358f5 + iVar6) - DAT_00335182) + -0x12 + iVar7;
        auStack_34[3] =
             ((uint)*(ushort *)((int)&DAT_003358f7 + iVar6) - DAT_00335186) + -0x19 + iVar3;
        *(undefined4 *)((int)puVar4 + -4) = 0x324a7;
        FUN_0013a710();
        *(undefined4 *)((int)puVar4 + -4) = 0x324ae;
        iVar7 = FUN_000e6c1c();
        if (iVar7 != 0) {
          DAT_003d9874 = 0;
          puVar5 = (undefined1 *)((int)puVar4 + -4);
          *(uint *)((int)puVar4 + -4) = (uint)(byte)(&DAT_0017b844)[local_20];
          local_1c = auStack_34[3] + 0x20;
          *(undefined4 *)((int)puVar4 + -8) = 0x324f9;
          FUN_000f0870();
          *(undefined4 *)((int)puVar4 + -8) = 0x32509;
          FUN_000e6d80();
        }
      }
      local_20 = local_20 + 4;
      iVar6 = iVar6 + 0xc;
      puVar4 = (uint *)puVar5;
    } while (local_20 != 0x10);
    if ((DAT_00334a54 != -1) || (DAT_003351fa != -1)) {
      DAT_003d9874 = 0;
      auStack_34[2] = DAT_003351fa;
      if (DAT_00334a54 != -1) {
        auStack_34[2] = DAT_00334a54;
      }
      *(undefined4 *)(puVar5 + -4) = 0x32593;
      FUN_000e6c1c();
      puVar4 = (uint *)(puVar5 + -4);
      *(undefined4 *)(puVar5 + -4) = 0;
      *(undefined4 *)(puVar5 + -8) = 0x325db;
      FUN_000f0870();
      *(uint *)(puVar5 + -8) = (uint)(byte)(&DAT_00335373)[auStack_34[2] * 0xe];
      *(undefined4 *)(puVar5 + -0xc) = DAT_003337f3;
      *(char **)(puVar5 + -0x10) = s__s__d_001641b8;
      *(undefined **)(puVar5 + -0x14) = &DAT_00334025;
      *(undefined4 *)(puVar5 + -0x18) = 0x32601;
      FUN_000e7714();
      *(undefined4 *)(puVar5 + -8) = 0x3260d;
      FUN_000e6d80();
    }
  }
  else {
    FUN_000ac370();
    puVar4 = auStack_34 + 2;
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x32316;
  FUN_00032612();
  return;
}
```

### `dk_enough_memory_game_structure_0329ae` (`0x329ae` in `frontmap.cpp`)
- **Evidence**: String 'Not enough memory in game structure for map'
```c
longlong FUN_000329ae(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint in_EDX;
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_DKMAP_02d_RAW_001641fd,uVar1);
  iVar2 = FUN_000e97a0();
  if ((iVar2 < 0x12c0c6) && (iVar3 = FUN_000e984c(), iVar3 == iVar2)) {
    DAT_00335168 = 0x1badec;
    FUN_000dd920(extraout_ECX);
    uVar1 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s_DKWIND_02d_DAT_00164276,uVar1);
    FUN_000150f0();
    iVar2 = FUN_000e984c();
    if (iVar2 != -1) {
      DAT_003351a6 = DAT_002f2223;
      FUN_000e8c83();
      FUN_000e7714(&DAT_0019cbac,s__s_LDATA_DKMAP_02d_PAL_001642be,&DAT_002ee923,extraout_ECX_00);
      FUN_000150f0();
      iVar2 = FUN_000e984c();
      if (iVar2 == 0x300) {
        DAT_003351a2 = DAT_003351a6 + 0xb40;
        return CONCAT44(in_EDX,1);
      }
    }
    FUN_000ddaf0();
    FUN_00032b21();
  }
  else {
    FUN_000ddaf0();
  }
  return (ulonglong)in_EDX << 0x20;
}
```

### `dk_more_room_menu_stack_052b67` (`0x52b67` in `newgui.cpp`)
- **Evidence**: String 'NO MORE ROOM FOR MENU STACK'
```c
void FUN_00052b67(void)

{
  byte in_AL;
  uint uVar1;
  char cVar3;
  uint uVar2;
  int iVar4;
  
  if ('\a' < DAT_0034cf04) {
    FUN_000ddaf0();
    return;
  }
  iVar4 = (int)DAT_0034cf04;
  uVar2 = (uint)in_AL << 8;
  while( true ) {
    cVar3 = (char)(uVar2 >> 8);
    if (iVar4 <= (int)(uVar2 & 0xff)) {
      DAT_0034cf04 = DAT_0034cf04 + '\x01';
      (&DAT_0034cefc)[iVar4] = cVar3;
      return;
    }
    if (cVar3 == (&DAT_0034cefc)[uVar2 & 0xff]) break;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
  }
  while( true ) {
    uVar1 = uVar2 & 0xff;
    if (DAT_0034cf04 + -1 <= (int)uVar1) break;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + '\x01');
    (&DAT_0034cefc)[uVar1] = (&DAT_0034cefd)[uVar1];
  }
  (&DAT_0034cefb)[DAT_0034cf04] = (char)(uVar2 >> 8);
  return;
}
```

### `dk_illegal_computer_player_053753` (`0x53753` in `newgui.cpp`)
- **Evidence**: String 'Illegal computer player'
```c
void FUN_00053753(void)

{
  int in_EAX;
  int iVar1;
  
  iVar1 = (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x14ca;
  if ((-1 < *(int *)((int)&DAT_002ccbfb + iVar1)) && (*(int *)((int)&DAT_002ccbfb + iVar1) < 10)) {
    *(undefined2 *)(in_EAX + 0x2b) =
         *(undefined2 *)(&DAT_00184179 + *(int *)((int)&DAT_002ccbfb + iVar1) * 2);
    return;
  }
  FUN_000ddaf0();
  return;
}
```

### `dk_state_type_gui_state_053a18` (`0x53a18` in `newgui.cpp`)
- **Evidence**: String 'Unknown state_type_to_gui_state[]'
```c
/* WARNING: Removing unreachable block (ram,0x00053bb1) */

void FUN_00053a18(void)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  uint extraout_ECX;
  int iVar6;
  int local_24;
  uint local_1c;
  
  uVar2 = DAT_003d9874;
  DAT_003d9874 = DAT_003d9874 & 0xffbf;
  if (DAT_0034d0e4 < '\a') {
    DAT_0034d0e5 = '\0';
  }
  cVar3 = DAT_0034d0e4;
  if (DAT_0034d0e4 < '\x01') {
    cVar3 = '\x01';
  }
  if (cVar3 < '\a') {
    uVar4 = (uint)DAT_0034d0e4;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 6;
  }
  for (uVar5 = 0; uVar5 < (uVar4 & 0xffff); uVar5 = (uint)(byte)((char)uVar5 + 1)) {
    if (uVar5 == 0) {
      local_1c = 0x17;
    }
    else {
      local_1c = (uint)(ushort)(&DAT_0034d1a8)[uVar5 + (int)DAT_0034d0e5];
    }
    (&DAT_0034d0e6)[uVar5 * 4] = 0;
    iVar6 = 0;
    (&DAT_0034d0ea)[uVar5 * 4] = 0;
    local_24 = 0;
    (&DAT_0034d0ee)[uVar5 * 4] = 0;
    do {
      uVar1 = *(uint *)(&DAT_0019133e + local_24);
      if (uVar1 == 0) {
        (&DAT_0034d0e6)[(uVar5 & 0xff) * 4] =
             (&DAT_0034d0e6)[(uVar5 & 0xff) * 4] +
             (uint)*(ushort *)
                    (&DAT_002e05ed + iVar6 + DAT_002f10ce._3_1_ * 0x1508 + local_1c * 0x1e);
      }
      else if (uVar1 < 2) {
        (&DAT_0034d0ea)[(uVar5 & 0xff) * 4] =
             (&DAT_0034d0ea)[(uVar5 & 0xff) * 4] +
             (uint)*(ushort *)
                    (&DAT_002e05ed + iVar6 + local_1c * 0x1e + DAT_002f10ce._3_1_ * 0x1508);
      }
      else if (uVar1 == 2) {
        (&DAT_0034d0ee)[(uVar5 & 0xff) * 4] =
             (&DAT_0034d0ee)[(uVar5 & 0xff) * 4] +
             (uint)*(ushort *)
                    (&DAT_002e05ed + iVar6 + local_1c * 0x1e + DAT_002f10ce._3_1_ * 0x1508);
      }
      else {
        FUN_000ddaf0();
        uVar5 = extraout_ECX;
      }
      iVar6 = iVar6 + 2;
      local_24 = local_24 + 4;
    } while (iVar6 != 0x1e);
  }
  DAT_003d9874 = DAT_003d9874 | 4;
  FUN_000f0870(DAT_001992a0,(*(short *)(in_EAX + 10) + 0xda) / (int)(uint)DAT_0019cba6);
  DAT_003d9874 = uVar2;
  return;
}
```

### `dk_oi_there_fade_time_053ccc` (`0x53ccc` in `newgui.cpp`)
- **Evidence**: String 'Oi! There is a fade time less than 1. Idiot.'
```c
undefined8 FUN_00053ccc(void)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  char *in_EAX;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *extraout_ECX;
  char *pcVar9;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  undefined4 in_EDX;
  int local_1c;
  
  local_1c = FUN_00053c6b();
  if (local_1c == -1) {
    FUN_00052b67();
    local_1c = FUN_00053c05();
    if (local_1c == -1) {
LAB_00054052:
      uVar7 = FUN_000ddaf0();
      uVar7 = CONCAT31((int3)((uint)uVar7 >> 8),0xff);
      goto LAB_0005499e;
    }
    iVar5 = local_1c * 0x20;
    pcVar9 = &DAT_0034bad6 + iVar5;
    (&DAT_0034bad7)[iVar5] = 1;
    *(char **)(&DAT_0034baeb + iVar5) = in_EAX;
    (&DAT_0034baea)[iVar5] = (undefined1)local_1c;
    cVar2 = *in_EAX;
    *pcVar9 = cVar2;
    if (cVar2 == '\x01') {
      DAT_0017d175 = (short)DAT_003d9864 * DAT_0019cba6;
      DAT_0017d177 = FUN_000dc150();
      pcVar9 = extraout_ECX_00;
    }
    sVar3 = *(short *)(in_EAX + 8);
    if (sVar3 == -999) {
      *(ushort *)(pcVar9 + 8) = DAT_0019cba6 * (short)DAT_003d9864 - *(ushort *)(in_EAX + 0xc) / 2;
      goto LAB_00053e2b;
    }
    if (sVar3 == 999) {
      sVar3 = *(short *)(&DAT_0019d510 + DAT_002f10ce._3_1_ * 0x4ef) +
              (*(ushort *)(&DAT_0019d50c + DAT_002f10ce._3_1_ * 0x4ef) / 2 -
              *(ushort *)(in_EAX + 0xc) / 2);
LAB_00053e27:
      *(short *)(pcVar9 + 8) = sVar3;
    }
    else {
      if (sVar3 != -0x3e6) {
        sVar3 = *(short *)(in_EAX + 8);
        goto LAB_00053e27;
      }
      sVar3 = DAT_0017d175 - *(ushort *)(in_EAX + 0xc) / 2;
      *(short *)(pcVar9 + 8) = sVar3;
      if (sVar3 < 0x8c) {
        pcVar9[8] = -0x74;
        pcVar9[9] = '\0';
      }
      else if (DAT_003d982c < sVar3) {
        sVar3 = (short)DAT_003d982c;
        goto LAB_00053e27;
      }
    }
LAB_00053e2b:
    if (*(short *)(in_EAX + 10) == -999) {
      uVar1 = *(ushort *)(in_EAX + 0xe);
      iVar5 = FUN_000dc150();
      uVar6 = iVar5 - uVar1 / 2;
      pcVar9 = extraout_ECX_01;
LAB_00053ece:
      *(short *)(pcVar9 + 10) = (short)uVar6;
    }
    else if (*(short *)(in_EAX + 10) == 999) {
      *(ushort *)(pcVar9 + 10) =
           (*(ushort *)(&DAT_0019d50e + DAT_002f10ce._3_1_ * 0x4ef) / 2 -
           *(ushort *)(in_EAX + 0xe) / 2) + -10;
    }
    else {
      if (*(short *)(in_EAX + 8) != -0x3e6) {
        uVar6 = (uint)*(ushort *)(in_EAX + 10);
        goto LAB_00053ece;
      }
      sVar3 = DAT_0017d177 - *(ushort *)(in_EAX + 0xe) / 2;
      *(short *)(pcVar9 + 10) = sVar3;
      if (sVar3 < 0) {
        pcVar9[10] = '\0';
        pcVar9[0xb] = '\0';
      }
      else {
        uVar6 = (uint)((ulonglong)DAT_0019cba2 / (ulonglong)(longlong)(int)(uint)DAT_0019cba6);
        if ((int)uVar6 < (int)sVar3) goto LAB_00053ece;
      }
    }
    if (*(short *)(in_EAX + 8) == 999) {
      if ((int)*(short *)(pcVar9 + 8) <
          (int)(uint)*(ushort *)(&DAT_0019d510 + DAT_002f10ce._3_1_ * 0x4ef)) {
        sVar3 = *(short *)(&DAT_0019d510 + DAT_002f10ce._3_1_ * 0x4ef);
      }
      else {
        if ((int)*(short *)(pcVar9 + 8) <=
            (int)((uint)DAT_0019cba4 - (uint)*(ushort *)(in_EAX + 0xc))) goto LAB_00053f4e;
        sVar3 = DAT_0019cba4 - *(short *)(in_EAX + 0xc);
      }
LAB_00053f4a:
      *(short *)(pcVar9 + 8) = sVar3;
    }
    else if (*(short *)(pcVar9 + 8) < 0) {
      pcVar9[8] = '\0';
      pcVar9[9] = '\0';
    }
    else if ((int)((uint)DAT_0019cba4 - (uint)*(ushort *)(in_EAX + 0xc)) <
             (int)*(short *)(pcVar9 + 8)) {
      sVar3 = DAT_0019cba4 - *(short *)(in_EAX + 0xc);
      goto LAB_00053f4a;
    }
LAB_00053f4e:
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      if (((int)*in_EAX == (uint)(byte)(&DAT_00184176)[iVar5]) && (DAT_0019cba2 == 0x1e0)) {
        *(short *)(pcVar9 + 10) = *(short *)(pcVar9 + 10) + 0x50;
        break;
      }
    }
    sVar3 = *(short *)(in_EAX + 2);
    *(short *)(pcVar9 + 2) = sVar3;
    if (sVar3 == 0) {
      FUN_000ddaf0();
      pcVar9 = extraout_ECX_02;
    }
    *(undefined4 *)(pcVar9 + 4) = *(undefined4 *)(in_EAX + 4);
    *(undefined2 *)(pcVar9 + 0xc) = *(undefined2 *)(in_EAX + 0xc);
    *(undefined2 *)(pcVar9 + 0xe) = *(undefined2 *)(in_EAX + 0xe);
    *(undefined4 *)(pcVar9 + 0x10) = *(undefined4 *)(in_EAX + 0x10);
    *(undefined4 *)(pcVar9 + 0x19) = *(undefined4 *)(in_EAX + 0x19);
    pcVar9[0x1e] = in_EAX[0x1e];
    pcVar9[0x1f] = in_EAX[0x1f];
    if (((DAT_0019d0b8 & 0x20) == 0) &&
       (iVar5 = FUN_0005b5f5(), pcVar9 = extraout_ECX_03, iVar5 != 0)) {
      extraout_ECX_03[0x1d] = '\0';
    }
    else {
      pcVar9[0x1d] = '\x01';
    }
    if (*(int *)(pcVar9 + 0x19) != 0) {
      (**(code **)(pcVar9 + 0x19))();
    }
    for (iVar5 = 0; *(char *)(*(int *)(in_EAX + 4) + iVar5) != -1; iVar5 = iVar5 + 0x37) {
      cVar2 = FUN_000540cb();
      if (cVar2 == -1) goto LAB_00054052;
    }
    FUN_0005435a();
    FUN_0005426d();
    iVar5 = FUN_000542d6();
  }
  else {
    iVar4 = local_1c * 0x20;
    puVar8 = &DAT_0034bad6 + iVar4;
    (&DAT_0034bad7)[iVar4] = 1;
    iVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)(in_EAX + 2));
    *(undefined2 *)(&DAT_0034bad8 + iVar4) = *(undefined2 *)(in_EAX + 2);
    if (((DAT_0019d0b8 & 0x20) == 0) && (iVar5 = FUN_0005b5f5(), puVar8 = extraout_ECX, iVar5 != 0))
    {
      extraout_ECX[0x1d] = 0;
    }
    else {
      puVar8[0x1d] = 1;
    }
  }
  uVar7 = CONCAT31((int3)((uint)iVar5 >> 8),(undefined1)local_1c);
LAB_0005499e:
  return CONCAT44(in_EDX,uVar7);
}
```

### `dk_cycle_button_have_gui_05482c` (`0x5482c` in `newgui.cpp`)
- **Evidence**: String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
```c
void FUN_0005482c(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  
  if (in_EAX[6] == 2) {
    FUN_000ddaf0();
    in_EAX = extraout_ECX;
  }
  if ((*in_EAX & 8) == 0) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}
```

### `dk_cycle_button_have_gui_0548cb` (`0x548cb` in `newgui.cpp`)
- **Evidence**: String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
```c
void FUN_000548cb(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  
  if (in_EAX[6] == 2) {
    FUN_000ddaf0();
    in_EAX = extraout_ECX;
  }
  if ((*in_EAX & 8) == 0) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}
```

### `dk_cycle_button_must_have_054add` (`0x54add` in `newgui.cpp`)
- **Evidence**: String 'Cycle button must have a non-null UBYTE Data pointer!'
```c
void FUN_00054add(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (in_EAX[6] == 2) {
    if (*(int *)(in_EAX + 0x33) == 0) {
      FUN_000ddaf0();
      in_EAX = extraout_ECX;
    }
    if (*(short *)(in_EAX + 0x2d) == 0) {
      FUN_000ddaf0();
      in_EAX = extraout_ECX_00;
    }
  }
  if ((((*in_EAX & 8) == 0) || (in_EAX[1] != 0)) || (in_EAX[2] != 0)) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}
```

### `dk_cycle_button_must_have_054bab` (`0x54bab` in `newgui.cpp`)
- **Evidence**: String 'Cycle button must have a non-null UBYTE Data pointer!'
```c
void FUN_00054bab(void)

{
  byte *in_EAX;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (in_EAX[6] == 2) {
    if (*(int *)(in_EAX + 0x33) == 0) {
      FUN_000ddaf0();
      in_EAX = extraout_ECX;
    }
    if (*(short *)(in_EAX + 0x2d) == 0) {
      FUN_000ddaf0();
      in_EAX = extraout_ECX_00;
    }
  }
  if ((((*in_EAX & 8) == 0) || (in_EAX[1] != 0)) || (in_EAX[2] != 0)) {
    FUN_000f2800();
  }
  else {
    FUN_0013a710();
  }
  return;
}
```

### `dk_door_flagged_position_063122` (`0x63122` in `panmap.cpp`)
- **Evidence**: String 'No door for flagged position'
```c
void FUN_00063122(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int in_EAX;
  int iVar6;
  char cVar7;
  char extraout_CL;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int iVar8;
  char *local_58;
  int local_28;
  char *local_24;
  int local_1c;
  int local_18;
  
  local_24 = &DAT_0034d254 + in_EDX * 0x100 + in_EAX;
  bVar2 = (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
  iVar1 = in_EDX + in_ECX;
  local_28 = in_EDX * 0x500;
  for (; (in_EDX < iVar1 && (in_EDX < 0x100)); in_EDX = in_EDX + 1) {
    local_58 = local_24;
    local_18 = in_EAX * 5 + local_28;
    local_1c = in_EAX << 2;
    for (iVar8 = in_EAX; (iVar8 < in_EAX + unaff_EBX && (iVar8 < 0x100)); iVar8 = iVar8 + 1) {
      iVar6 = in_EDX * 0x100 + iVar8;
      bVar3 = *(byte *)((int)&DAT_00279203 + local_18);
      cVar7 = '\0';
      if ((iVar8 / 3 < 0x55) && (in_EDX / 3 < 0x55)) {
        cVar4 = (&DAT_002d33c5)
                [((&DAT_0019033b)[in_EDX] * 0x55 + *(int *)((int)&DAT_0019033b + local_1c)) * 6];
        bVar5 = (&DAT_002d33ca)
                [((&DAT_0019033b)[iVar6 % 0x100] +
                 (&DAT_0019033b)
                 [(int)((iVar6 + (iVar6 >> 0x1f) * -0x100) - (uint)((iVar6 >> 0x1f) << 7 < 0)) >> 8]
                 * 0x55) * 6] & 7;
        if (6 < bVar5) {
          bVar5 = bVar5 - 3;
        }
        if ((bVar3 & 4) == 0) {
          if ((bVar3 & 0x80) == 0) {
            if ((bVar3 & 1) == 0) {
              if ((1 << (bVar2 & 0x1f) & *(uint *)((int)&DAT_00279203 + local_18 + 1) >> 0x1c) != 0)
              {
                if ((bVar3 & 2) == 0) {
                  if (cVar4 == '\0') {
                    cVar7 = '\x02';
                  }
                  else if ((bVar3 & 0x20) == 0) {
                    if ((bVar3 & 0x40) == 0) {
                      if ((bVar3 & 0x10) == 0) {
                        if (cVar4 == '\f') {
                          cVar7 = '\x06';
                        }
                        else if (cVar4 == '\r') {
                          cVar7 = '\a';
                        }
                        else {
                          cVar7 = bVar5 + 0xaa;
                        }
                      }
                    }
                    else {
                      iVar6 = FUN_00022b3a();
                      if (iVar6 == 0) {
                        FUN_000ddaf0();
                        cVar7 = extraout_CL;
                      }
                      else {
                        cVar7 = bVar5 + 0x6e +
                                (*(char *)(iVar6 + 0x1a) * '\x02' +
                                (*(char *)(iVar6 + 0x18) == '\x01')) * '\x06';
                      }
                    }
                  }
                  else {
                    cVar7 = '\x01';
                  }
                }
                else {
                  cVar7 = (char)*(undefined2 *)
                                 (&DAT_002ddd25 +
                                 (uint)(byte)(&DAT_002d33c8)
                                             [((&DAT_0019033b)[in_EDX] * 0x55 +
                                              *(int *)((int)&DAT_0019033b + local_1c)) * 6] * 0x45)
                          * '\x06' + '\b' + bVar5;
                }
              }
            }
            else {
              cVar7 = '\x05';
            }
          }
          else {
            cVar7 = '\x04';
          }
        }
        else {
          cVar7 = '\x03';
        }
        *local_58 = cVar7;
      }
      local_58 = local_58 + 1;
      local_18 = local_18 + 5;
      local_1c = local_1c + 4;
    }
    local_24 = local_24 + 0x100;
    local_28 = local_28 + 0x500;
  }
  return;
}
```

