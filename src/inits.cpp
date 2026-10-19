/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: inits.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 62
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : inits_fn_0401ec (Original VA: 0x401ec, Ghidra: FUN_000401ec)
 * Prototype: void inits_fn_0401ec(void);
 * Address  : 0x401ec (Size: 249 bytes)
 * Module   : inits.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module inits.cpp procedure @ 0x0401ec
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 12 -> evil_fn_029800, file_fn_029d32, file_data_creature_txt_02b36c, inits_fn_041043, inits_fn_0430ba, inits_fn_04338b, inits_fn_0450a0, inits_couldn_get_creature_score_045198 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_fn_0401ec(void)

{
  draw_fn_0929c0();
  inits_fn_041043();
  inits_fn_04338b();
  inits_fn_0430ba();
  inits_fn_0450a0();
  inits_fn_04578b();
  file_data_creature_txt_02b36c();
  inits_xls_creature_lairsize_but_045524();
  inits_couldn_get_creature_score_045198();
  evil_fn_029800();
  light_fn_0b2280();
  file_fn_029d32();
  g_neutral_player_number = 5;
  g_bss_002ebad4 = 0x100;
  g_bss_002ebad6 = 0x100;
  g_bss_002ebad8 = 0x100;
  g_bss_002ebada = 0x100;
  g_bss_002ebae0 = 4;
  g_bss_002ebae4 = 200;
  if (g_bss_002eb9d8 == 0) {
    g_bss_002eb9d8 = g_bss_002eb9d6;
  }
  g_render_poly_buf_end = &g_bss_003330ff;
  g_display_bss_003d981c = &g_pixmap_ghost_tables;
  g_bss_002ee8a3 = 0;
  g_bss_002ee8a4 = 1;
  g_bss_002ee8a5 = 0;
  g_bss_002ee8a6 = 0;
  g_bss_002ee8a7 = 0;
  g_bss_002ee8a8 = 0;
  g_game_operation_flags = g_game_operation_flags | 0x40;
  g_bss_0019d0b9 = g_bss_0019d0b9 | 0x60;
  g_render_frame_skip = g_bss_0019a29f;
  if (g_bss_002ee9b9 == 3) {
    g_data_00187f00 = 0x30;
  }
  return;
}

/******************************************************************************
 * Function : inits_non_keeper_keeper_game_0402e5 (Original VA: 0x402e5, Ghidra: FUN_000402e5)
 * Prototype: void inits_non_keeper_keeper_game_0402e5(void);
 * Address  : 0x402e5 (Size: 530 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 290
 * Purpose  : String 'Non Keeper in Keeper game'
 * Callers  : 2 -> packet_resync_network_game_state, packet_init_level_replay_or_resync
 * Callees  : 14 -> inits_update_slab_subtile_columns_040a20, inits_fn_040e94, inits_process_thing_entity_040ee4, inits_process_thing_entity_042fc8, inits_update_player_view_state_04839c, newgui_fn_0543dd, newgui_update_player_view_state_05b9c0, newgui_fn_05cf2d ...
 ******************************************************************************/
void inits_non_keeper_keeper_game_0402e5(void)

{
  undefined1 *arg_eax;
  int val;
  int arg_edx;
  uint extraout_EDX;
  
  *(undefined2 *)(arg_eax + 0x44c) = 10;
  *(undefined2 *)(arg_eax + 0x44e) = 0xc;
  *(undefined2 *)(arg_eax + 0x450) = 0x100;
  arg_eax[0x4d1] = arg_eax[0x2b];
  workshop_update_player_view_state_0780df();
  *(undefined4 *)(arg_eax + 0x4c9) = g_display_palette;
  val = (int)g_my_player_word._3_1_;
  arg_eax[0x456] = 1;
  arg_eax[0x453] = 1;
  arg_eax[0x14] = 2;
  if (arg_eax == &g_players + val * 0x4ef) {
    g_game_operation_flags = g_game_operation_flags | 0x40;
    newgui_update_player_view_state_05b9c0();
    newgui_fn_0543dd();
    newgui_fn_05cf2d();
    newgui_fn_05cf2d();
  }
  if (g_game_type < 2) {
LAB_000403f9:
    LbErrorLog(); /* LbErrorLog("inits.cpp", line 290, "Non Keeper in Keeper game") */
  }
  else {
    if (g_game_type < 3) {
      inits_fn_040e94();
      inits_process_thing_entity_040ee4();
      inits_update_player_view_state_04839c();
      if (arg_edx != 0) goto LAB_00040411;
    }
    else {
      if ((g_game_type != 5) || (arg_eax[0x2c] != '\x01')) goto LAB_000403f9;
      inits_fn_040e94();
      inits_process_thing_entity_040ee4();
      inits_update_player_view_state_04839c();
    }
    inits_update_slab_subtile_columns_040a20();
  }
LAB_00040411:
  inits_process_thing_entity_042fc8();
  panmap_door_flagged_position_063122();
  val = (int)g_my_player_word._3_1_;
  arg_eax[0x463] = 0;
  if (arg_eax == &g_players + val * 0x4ef) {
    g_bss_0019d0bf = (char)((int)(g_bss_002e78e9 - 1) % 4) + '\x03';
    g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
    bflib_system_io_fn_0f0ab8();
    if ((((extraout_EDX == 0) || (extraout_EDX < 2)) || (extraout_EDX == 2)) &&
       (val = bflib_video_sbawe32_mdi_0f143c(), val != 0)) {
      bflib_system_io_fn_0f1874();
    }
  }
  *(undefined4 *)(arg_eax + 0x10) = 0;
  arg_eax[0x2a] = '\x01' << (arg_eax[0x2b] & 0x1f);
  return;
}

/******************************************************************************
 * Function : inits_could_create_ambient_sound_0404f7 (Original VA: 0x404f7, Ghidra: FUN_000404f7)
 * Prototype: void inits_could_create_ambient_sound_0404f7(void);
 * Address  : 0x404f7 (Size: 746 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 481
 * Purpose  : String 'Could not create ambient sound object'
 * Callers  : 2 -> packet_resync_network_game_state, packet_init_level_replay_or_resync
 * Callees  : 17 -> barracks_fn_013b98, event_fn_027348, file_fn_02a25c, heap_graphics_heap_allocated_03a4e3, heap_fn_03a57e, inits_update_player_view_state_040ce0, inits_roll_action_random_040d25, inits_process_thing_entity_040f49 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_could_create_ambient_sound_0404f7(void)

{
  undefined4 uval;
  undefined1 uval_2;
  undefined1 uval_3;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  undefined2 uval_4;
  int val_3;
  int local_28;
  uint local_24;
  
  uval_3 = g_bss_002ee893;
  uval_2 = g_bss_002ee892;
  g_action_random_seed = 1;
  local_28 = 0;
  instance_data_swpe_dat_04c14e(0,0);
  g_bss_002ee7ab = 0xff;
  g_game_turn = 0;
  inits_roll_action_random_040d25();
  heap_fn_03a57e();
  heap_graphics_heap_allocated_03a4e3();
  val_3 = 0;
  inits_update_player_view_state_040ce0();
  light_fn_0aca0c();
  g_bss_002f10d2 = &g_bss_002ddd60;
  g_bss_002f10d6 = &g_dungeons;
  val = extraout_ECX;
  do {
    uval_4 = g_bss_002eb9f2;
    *(undefined2 *)(val + 0xb01 + (uint)g_bss_002eb542 * 2) = g_bss_002eb9f2;
    *(undefined2 *)(&g_bss_002e108a + (uint)g_bss_002eb542 * 0x1508 + val_3) = uval_4;
    *(undefined1 *)(val + 0x918) = 0;
    *(undefined1 *)(val + 0x919) = 0;
    *(undefined2 *)(val + 0x2d) = 0;
    *(undefined2 *)(val + 0x2f) = 0;
    *(undefined1 *)(val + 0xe9f) = (undefined1)local_28;
    uval = g_bss_002ebc38;
    *(undefined4 *)(val + 0x139f) = 0;
    *(undefined4 *)(val + 0x13a3) = 0;
    val_2 = 0;
    *(undefined4 *)(val + 0x105c) = uval;
    do {
      uval_4 = g_bss_002eb9f2;
      if (val_2 == local_28) {
        uval_4 = g_bss_002eb9f6;
      }
      *(undefined2 *)(val + 0xb01) = uval_4;
      val_2 = val_2 + 1;
      val = val + 2;
    } while (val_2 < 5);
    local_28 = local_28 + 1;
    LbScreenWaitVbi();
    val_3 = val_3 + 2;
    val = extraout_ECX_00 + 0x1508;
  } while (local_28 < 5);
  file_fn_02a25c();
  routes_fn_0d17a8();
  mapwho_fn_051452();
  bflib_system_io_fn_0f1abb();
  g_unsynced_random_seed = local_24;
  if (g_bss_00334019 == 0) {
    g_unsynced_random_seed = local_24 * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
    g_bss_002e8c00 = (char)(((ulonglong)g_unsynced_random_seed % 0x43) % 3) + '\x01';
    g_bss_002e8c01 = 0;
  }
  light_fn_0aca0c();
  inits_process_thing_entity_040f49();
  g_bss_0019d0b9 = g_bss_0019d0b9 | 4;
  g_bss_002ee892 = uval_2;
  g_bss_002ee893 = uval_3;
  event_fn_027348();
  barracks_fn_013b98();
  val = inits_told_you_so_create_044d42();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("inits.cpp", line 481, "Could not create ambient sound object") */
  }
  else {
    g_bss_002eb9b2 = *(undefined2 *)(val + 0x1b);
  }
  g_bss_002ee887 = 0;
  LbScreenWaitVbi();
  g_bss_002ed402 = 0;
  g_bss_002ed406 = 0;
  mapwho_fn_051468();
  g_bss_002ee8a7 = 0;
  g_bss_002ee8a8 = 0;
  g_bss_002ed3e6 = 0;
  g_bss_002ee8ad = 0;
  g_bss_002ee8b1 = 0;
  g_bss_002ee8b5 = 0;
  g_bss_002ee8b9 = 0;
  g_bss_002ee8bd = 0;
  g_bss_002ee8c1 = 0;
  g_bss_002ee8c5 = 0;
  g_bss_002ee8c9 = 0;
  g_bss_002ee8cd = 0;
  return;
}

/******************************************************************************
 * Function : inits_process_thing_entity_0407e1 (Original VA: 0x407e1, Ghidra: FUN_000407e1)
 * Prototype: void inits_process_thing_entity_0407e1(void);
 * Address  : 0x407e1 (Size: 81 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_update_player_dungeon_040832
 * Callees  : 0 -> 
 ******************************************************************************/
void inits_process_thing_entity_0407e1(void)

{
  byte flag;
  uint thing_ptr;
  
  for (thing_ptr = g_bss_002e6eee; thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr;
      thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67)) {
    if (*(char *)(thing_ptr + 0x13) == '\0') { /* thing->anim_sprite */
      *(undefined *)(thing_ptr + 0x13) = (&g_bss_001ae89c)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x14]; /* thing->anim_sprite */
      flag = (&g_data_0018fd1b)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x36];
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0xcf; /* thing->render_flags */
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | (flag & 3) << 4; /* thing->render_flags */
    }
  }
  return;
}

/******************************************************************************
 * Function : inits_update_player_dungeon_040832 (Original VA: 0x40832, Ghidra: FUN_00040832)
 * Prototype: void inits_update_player_dungeon_040832(void);
 * Address  : 0x40832 (Size: 352 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> packet_resync_network_game_state, packet_init_level_replay_or_resync
 * Callees  : 16 -> compturn_update_player_view_state_021008, dungeon_process_slabmap_tile_0237c6, file_data_creature_txt_02b36c, file_load_script_file_02c502, gen2_update_player_dungeon_0379fe, gen2_update_player_dungeon_037d01, inits_process_thing_entity_0407e1, inits_update_slab_subtile_columns_040a20 ...
 ******************************************************************************/
void inits_update_player_dungeon_040832(void)

{
  undefined2 *dungeon_off;
  int extraout_ECX;
  int val;
  int extraout_EDX;
  undefined2 *word_ptr_2;
  undefined8 uval;
  undefined2 *word_ptr;
  
  if (g_bss_002e6f2c != '\0') {
    open_new_packet_file_for_save();
  }
  dungeon_process_slabmap_tile_0237c6();
  inits_fn_041019();
  val = 0;
  word_ptr_2 = (undefined2 *)0x2e0609;
  do {
    dungeon_off = &g_dungeons + val * 0xa84;
    do {
      word_ptr = dungeon_off + 2;
      *(undefined4 *)((int)dungeon_off + 0xa4f) = 10;
      dungeon_off = word_ptr;
    } while (word_ptr != word_ptr_2);
    val = val + 1;
    word_ptr_2 = word_ptr_2 + 0xa84;
  } while (val < 5);
  LbScreenWaitVbi();
  compturn_update_player_view_state_021008();
  file_data_creature_txt_02b36c();
  inits_xls_creature_lairsize_but_045524();
  file_load_script_file_02c502();
  do {
    uval = research_illegal_research_type_getting_066a1a();
    val = (int)((ulonglong)uval >> 0x20);
    *(int *)(val + -0x590) = (int)uval;
  } while (val != extraout_ECX);
  if (g_bss_002ee892 != '\0') {
    val = inits_told_you_so_create_043bb3();
    if (val != 0) {
      creature_update_creature_control_08240c();
    }
    g_bss_002ee892 = '\0';
    g_bss_002ee893 = 0;
  }
  gen2_update_player_dungeon_0379fe();
  gen2_update_player_dungeon_037d01();
  inits_process_thing_entity_0407e1();
  inits_process_thing_entity_0453dd();
  val = 0;
  do {
    if (((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) &&
       (((&g_players)[val] & 0x40) != 0)) {
      inits_update_slab_subtile_columns_040a20();
      val = extraout_EDX;
    }
    val = val + 0x4ef;
  } while (val != 0x18ab);
  return;
}

/******************************************************************************
 * Function : inits_update_player_view_state_040992 (Original VA: 0x40992, Ghidra: FUN_00040992)
 * Prototype: void inits_update_player_view_state_040992(void);
 * Address  : 0x40992 (Size: 40 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> packet_resync_network_game_state, packet_init_level_replay_or_resync
 * Callees  : 1 -> inits_fn_0409ba
 ******************************************************************************/
void inits_update_player_view_state_040992(void)

{
  byte *byte_ptr;
  byte *extraout_EDX;
  int val;
  
  byte_ptr = &g_players;
  val = 0;
  do {
    if ((*byte_ptr & 1) != 0) {
      inits_fn_0409ba();
      byte_ptr = extraout_EDX;
    }
    val = val + 1;
    byte_ptr = byte_ptr + 0x4ef;
  } while (val < 5);
  return;
}

/******************************************************************************
 * Function : inits_fn_0409ba (Original VA: 0x409ba, Ghidra: FUN_000409ba)
 * Prototype: void inits_fn_0409ba(void);
 * Address  : 0x409ba (Size: 102 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 665
 * Purpose  : Module inits.cpp procedure @ 0x0409ba
 * Callers  : 1 -> inits_update_player_view_state_040992
 * Callees  : 2 -> LbErrorLog, bflib_system_io_fn_0e5f70
 ******************************************************************************/
void inits_fn_0409ba(void)

{
  byte *arg_eax;
  bool flag;
  
  if (g_game_type < 3) {
    flag = g_game_type == 2;
  }
  else {
    if (g_game_type < 4) {
      return;
    }
    flag = g_game_type == 5;
  }
  if (!flag) {
    if ((*arg_eax & 0x40) != 0) {
      return;
    }
    LbErrorLog(); /* LbErrorLog("inits.cpp", line 665, "Invalid GameMode") */
    return;
  }
  bflib_system_io_fn_0e5f70();
  bflib_system_io_fn_0e5f70();
  return;
}

/******************************************************************************
 * Function : inits_update_slab_subtile_columns_040a20 (Original VA: 0x40a20, Ghidra: FUN_00040a20)
 * Prototype: void inits_update_slab_subtile_columns_040a20(void);
 * Address  : 0x40a20 (Size: 306 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 2 -> inits_non_keeper_keeper_game_0402e5, inits_update_player_dungeon_040832
 * Callees  : 3 -> dungeon_process_map_subtile_023ad0, inits_process_slabmap_tile_040b52, creature_process_map_subtile_082828
 ******************************************************************************/
void inits_update_slab_subtile_columns_040a20(void)

{
  char ch;
  int arg_eax;
  int slab_coord;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val;
  int val_2;
  int local_34;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84] != 0) {
    dungeon_process_map_subtile_023ad0();
    arg_eax = extraout_ECX;
  }
  val = 0;
  local_24 = 1;
  local_34 = 0;
  do {
    local_2c = local_24 + 0x100;
    val_2 = 0;
    local_28 = local_34;
    do {
      slab_coord = ((&g_subtile_to_slab_lut)[local_2c % 0x100] +
              (&g_subtile_to_slab_lut)
              [(int)((local_2c + (local_2c >> 0x1f) * -0x100) - (uint)((local_2c >> 0x1f) << 7 < 0))
               >> 8] * 0x55) * 6;
      if ((((((&g_slabmap)[slab_coord] & 7) == *(byte *)(arg_eax + 0x2b)) ||
           ((&g_slabmap_base)[local_28] == '\0')) ||
          (((*(byte *)((int)&g_map_subtiles + local_2c * 5) & 2) != 0 &&
           ((*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) == 1 &&
            (((&g_slabmap)[slab_coord] & 7) == g_neutral_player_number)))))) ||
         (((*(byte *)((int)&g_map_subtiles + local_2c * 5) & 1) != 0 ||
          (ch = inits_process_slabmap_tile_040b52(), arg_eax = extraout_ECX_01, ch != '\0')))) {
        creature_process_map_subtile_082828();
        arg_eax = extraout_ECX_00;
      }
      local_2c = local_2c + 0x300;
      val_2 = val_2 + 1;
      local_28 = local_28 + 0x1fe;
    } while (val_2 < 0x55);
    local_34 = local_34 + 6;
    val = val + 1;
    local_24 = local_24 + 3;
  } while (val < 0x55);
  return;
}

/******************************************************************************
 * Function : inits_process_slabmap_tile_040b52 (Original VA: 0x40b52, Ghidra: FUN_00040b52)
 * Prototype: int inits_process_slabmap_tile_040b52(void);
 * Address  : 0x40b52 (Size: 85 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> inits_update_slab_subtile_columns_040a20
 * Callees  : 0 -> 
 ******************************************************************************/
int inits_process_slabmap_tile_040b52(void)

{
  int arg_eax;
  int val;
  uint3 uval;
  int arg_edx;
  int val_2;
  
  val = 0;
  while( true ) {
    uval = (uint3)((uint)val >> 8);
    if (7 < val) {
      return (uint)uval << 8;
    }
    val_2 = (*(char *)((int)&g_data_0018b67b + val + 3) + arg_eax +
            ((char)(&g_data_0018b67f)[val] + arg_edx) * 0x55) * 6;
    if (((&g_slabmap_base)[val_2] == '\x0e') && (((&g_slabmap)[val_2] & 7) == g_neutral_player_number)) break;
    val = val + 2;
  }
  return CONCAT31(uval,1);
}

/******************************************************************************
 * Function : inits_update_slab_subtile_columns_040ba7 (Original VA: 0x40ba7, Ghidra: FUN_00040ba7)
 * Prototype: void inits_update_slab_subtile_columns_040ba7(void);
 * Address  : 0x40ba7 (Size: 313 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 1 -> dungeon_process_map_subtile_023ad0
 ******************************************************************************/
void inits_update_slab_subtile_columns_040ba7(void)

{
  uint *word_ptr;
  byte flag;
  uint uval;
  int arg_eax;
  int slab_coord;
  int val;
  int val_2;
  int local_1c;
  int local_18;
  
  local_18 = 3;
  local_1c = 0xc;
  dungeon_process_map_subtile_023ad0();
  do {
    val_2 = 0xc;
    val = local_18 + 0x300;
    do {
      slab_coord = ((&g_subtile_to_slab_lut)[val % 0x100] +
              (&g_subtile_to_slab_lut)
              [(int)((val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0)) >> 8] *
              0x55) * 6;
      if ((((((&g_slabmap)[slab_coord] & 7) == *(byte *)(arg_eax + 0x2b)) ||
           ((&g_slabmap_base)
            [(*(int *)((int)&g_subtile_to_slab_lut + val_2) * 0x55 + *(int *)((int)&g_subtile_to_slab_lut + local_1c))
             * 6] == '\0')) ||
          (((*(byte *)((int)&g_map_subtiles + val * 5) & 2) != 0 &&
           (*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) == 1)))) ||
         ((*(byte *)((int)&g_map_subtiles + val * 5) & 1) != 0)) {
        slab_coord = val * 5;
        uval = *(uint *)((int)&g_map_subtiles + slab_coord + 1);
        flag = *(byte *)(arg_eax + 0x2b);
        *(uint *)((int)&g_map_subtiles + slab_coord + 1) = uval & 0xfffffff;
        word_ptr = (uint *)((int)&g_map_subtiles + slab_coord + 1);
        *word_ptr = *word_ptr | (uval >> 0x1c | 1 << (flag & 0x1f)) << 0x1c;
      }
      val_2 = val_2 + 4;
      val = val + 0x100;
    } while (val_2 != 0x3f0);
    local_18 = local_18 + 1;
    local_1c = local_1c + 4;
  } while (local_18 < 0xfc);
  return;
}

/******************************************************************************
 * Function : inits_update_player_view_state_040ce0 (Original VA: 0x40ce0, Ghidra: FUN_00040ce0)
 * Prototype: void inits_update_player_view_state_040ce0(void);
 * Address  : 0x40ce0 (Size: 69 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> inits_could_create_ambient_sound_0404f7
 * Callees  : 0 -> 
 ******************************************************************************/
void inits_update_player_view_state_040ce0(void)

{
  byte arg_al;
  
  g_bss_002eb542 = arg_al;
  (&g_players)[(uint)arg_al * 0x4ef] = (&g_players)[(uint)arg_al * 0x4ef] | 1;
  (&g_players)[(uint)g_bss_002eb542 * 0x4ef] = (&g_players)[(uint)g_bss_002eb542 * 0x4ef] | 0x40;
  (&g_player_id_number)[(uint)g_bss_002eb542 * 0x4ef] = g_bss_002eb542;
  return;
}

/******************************************************************************
 * Function : inits_roll_action_random_040d25 (Original VA: 0x40d25, Ghidra: FUN_00040d25)
 * Prototype: void inits_roll_action_random_040d25(void);
 * Address  : 0x40d25 (Size: 148 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> inits_could_create_ambient_sound_0404f7
 * Callees  : 4 -> mapwho_process_map_subtile_050d25, structs_fn_072810, light_fn_0ac630, LbScreenWaitVbi
 ******************************************************************************/
void inits_roll_action_random_040d25(void)

{
  undefined4 *word_ptr;
  int extraout_ECX;
  int val;
  
  structs_fn_072810();
  light_fn_0ac630();
  mapwho_process_map_subtile_050d25();
  g_action_random_seed = 0;
  g_bss_002eb9e4 = 0;
  g_game_operation_flags = g_game_operation_flags & 0xfb;
  word_ptr = &g_bss_0019e973;
  while (word_ptr < &g_bss_001aa973) {
    LbScreenWaitVbi();
    word_ptr = (undefined4 *)(extraout_ECX + 0x18);
  }
  val = 0;
  do {
    LbScreenWaitVbi();
    val = val + 1;
  } while (val < 5);
  val = 0;
  do {
    LbScreenWaitVbi();
    val = val + 1;
  } while (val < 5);
  return;
}

/******************************************************************************
 * Function : inits_update_player_view_state_040db9 (Original VA: 0x40db9, Ghidra: FUN_00040db9)
 * Prototype: void inits_update_player_view_state_040db9(void);
 * Address  : 0x40db9 (Size: 219 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 4 -> mapwho_process_map_subtile_050d25, structs_fn_072810, light_fn_0ac630, LbScreenWaitVbi
 ******************************************************************************/
void inits_update_player_view_state_040db9(void)

{
  byte flag;
  byte flag_2;
  byte flag_3;
  byte flag_4;
  undefined4 *word_ptr;
  int extraout_ECX;
  byte *byte_ptr;
  byte *extraout_ECX_00;
  int val;
  
  structs_fn_072810();
  light_fn_0ac630();
  mapwho_process_map_subtile_050d25();
  g_action_random_seed = 0;
  g_bss_002eb9e4 = 0;
  g_game_operation_flags = g_game_operation_flags & 0xfb;
  word_ptr = &g_bss_0019e973;
  while (word_ptr < &g_bss_001aa973) {
    LbScreenWaitVbi();
    word_ptr = (undefined4 *)(extraout_ECX + 0x18);
  }
  byte_ptr = &g_players;
  val = 0;
  do {
    flag = byte_ptr[0x2b];
    flag_2 = byte_ptr[0x2c];
    flag_3 = *byte_ptr;
    flag_4 = *byte_ptr;
    LbScreenWaitVbi();
    extraout_ECX_00[0x2b] = flag;
    extraout_ECX_00[0x2c] = flag_2;
    *extraout_ECX_00 = *extraout_ECX_00 & 0xfe;
    *extraout_ECX_00 = *extraout_ECX_00 | flag_3 & 1;
    *extraout_ECX_00 = *extraout_ECX_00 & 0xbf;
    val = val + 1;
    *extraout_ECX_00 = *extraout_ECX_00 | flag_4 & 0x40;
    byte_ptr = extraout_ECX_00 + 0x4ef;
  } while (val < 5);
  val = 0;
  do {
    LbScreenWaitVbi();
    val = val + 1;
  } while (val < 5);
  return;
}

/******************************************************************************
 * Function : inits_fn_040e94 (Original VA: 0x40e94, Ghidra: FUN_00040e94)
 * Prototype: void inits_fn_040e94(void);
 * Address  : 0x40e94 (Size: 80 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x040e94
 * Callers  : 1 -> inits_non_keeper_keeper_game_0402e5
 * Callees  : 3 -> light_already_list_0acaf8, light_attempt_set_size_unallocated_0ad834, LbScreenWaitVbi
 ******************************************************************************/
void inits_fn_040e94(void)

{
  undefined2 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  
  LbScreenWaitVbi();
  *(undefined4 *)(extraout_ECX + 0x4cd) = 0;
  uval = light_already_list_0acaf8(0xa00);
  *(undefined2 *)(extraout_ECX_00 + 0x460) = uval;
  light_attempt_set_size_unallocated_0ad834();
  return;
}

/******************************************************************************
 * Function : inits_process_thing_entity_040ee4 (Original VA: 0x40ee4, Ghidra: FUN_00040ee4)
 * Prototype: void inits_process_thing_entity_040ee4(void);
 * Address  : 0x40ee4 (Size: 101 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> inits_non_keeper_keeper_game_0402e5, scrsupp_update_player_view_state_069a12
 * Callees  : 0 -> 
 ******************************************************************************/
void inits_process_thing_entity_040ee4(void)

{
  int arg_eax;
  uint thing_ptr;
  int dungeon_off;
  
  thing_ptr = g_bss_002e6ec6;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return;
    }
    if (((&g_bss_001acd79)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x1d] != '\0') &&
       ((int)*(char *)(thing_ptr + 6) == (uint)*(byte *)(arg_eax + 0x2b))) break; /* thing->owner */
    thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  (&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84] = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  dungeon_off = (uint)*(byte *)(arg_eax + 0x2b) * 0x1508;
  *(undefined4 *)(&g_bss_002e058b + dungeon_off) = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
  *(undefined2 *)(&g_bss_002e058f + dungeon_off) = *(undefined2 *)(thing_ptr + 0x11);
  return;
}

/******************************************************************************
 * Function : inits_process_thing_entity_040f49 (Original VA: 0x40f49, Ghidra: FUN_00040f49)
 * Prototype: void inits_process_thing_entity_040f49(void);
 * Address  : 0x40f49 (Size: 79 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_could_create_ambient_sound_0404f7
 * Callees  : 0 -> 
 ******************************************************************************/
void inits_process_thing_entity_040f49(void)

{
  uint thing_ptr;
  
  thing_ptr = g_bss_002e6ec6;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return;
    }
    if (((&g_bss_001acd79)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x1d] != '\0') &&
       ((int)*(char *)(thing_ptr + 6) == (uint)g_bss_002eb542)) break; /* thing->owner */
    thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  (&g_dungeons)[(uint)g_bss_002eb542 * 0xa84] = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  return;
}

/******************************************************************************
 * Function : inits_fn_040f98 (Original VA: 0x40f98, Ghidra: FUN_00040f98)
 * Prototype: void inits_fn_040f98(void);
 * Address  : 0x40f98 (Size: 129 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x040f98
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 4 -> column_fn_015318, column_fn_01534a, column_could_create_column_none_015386, LbScreenWaitVbi
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_fn_040f98(void)

{
  byte *byte_ptr;
  int val;
  
  g_bss_002e6f1a = 0xffffffff;
  LbScreenWaitVbi();
  column_fn_015318();
  val = column_fn_01534a();
  if (val == 0) {
    val = column_could_create_column_none_015386();
  }
  byte_ptr = (byte *)((int)&g_bss_0019e973 + val * 0x18 + 2);
  *byte_ptr = *byte_ptr | 1;
  g_bss_002e6f28 = 0x18;
  g_bss_002e6f23 = val;
  return;
}

/******************************************************************************
 * Function : inits_fn_041019 (Original VA: 0x41019, Ghidra: FUN_00041019)
 * Prototype: void inits_fn_041019(void);
 * Address  : 0x41019 (Size: 42 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x041019
 * Callers  : 2 -> file_update_player_dungeon_02ca74, inits_update_player_dungeon_040832
 * Callees  : 0 -> 
 ******************************************************************************/
void inits_fn_041019(void)

{
  short *val;
  int val_2;
  int val_3;
  int val_4;
  
  val_4 = 0;
  val_2 = 0;
  do {
    val = (short *)((int)&g_bss_002e78eb + val_4);
    val_3 = val_2 + 4;
    val_4 = val_4 + 0x10;
    *(undefined4 *)((int)&g_bss_002f2163 + val_2) = (&g_bss_002f18e3)[*val];
    val_2 = val_3;
  } while (val_3 != 0xc0);
  return;
}

/******************************************************************************
 * Function : inits_fn_041043 (Original VA: 0x41043, Ghidra: FUN_00041043)
 * Prototype: void inits_fn_041043(void);
 * Address  : 0x41043 (Size: 8069 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x041043
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_fn_041043(void)

{
  int val;
  int val_2;
  
  val_2 = 0;
  do {
    val = val_2 + 2;
    *(undefined2 *)((int)&g_bss_002f2227 + val_2) = 0xffff;
    val_2 = val;
  } while (val != 0x7ac);
  val_2 = 0;
  do {
    val = val_2 + 2;
    *(undefined2 *)((int)&g_bss_002f29d3 + val_2) = 0xffff;
    val_2 = val;
  } while (val != 0x7ac);
  g_bss_002f2287 = 0x31;
  g_bss_002f2a35 = 0x30;
  g_bss_002f254f = 0x195;
  g_bss_002f2553 = 0x197;
  g_bss_002f254b = 0x193;
  g_bss_002f2557 = 0x199;
  g_bss_002f255f = 0x19d;
  g_bss_002f255b = 0x19b;
  g_bss_002f256f = 0x1a5;
  g_bss_002f256b = 0x1a3;
  g_bss_002f2567 = 0x1a1;
  g_bss_002f2563 = 0x19f;
  g_bss_002f2573 = 0x1a7;
  g_bss_002f22a3 = 0x3f;
  g_bss_002f2cfd = 0x194;
  g_bss_002f2d01 = 0x196;
  g_bss_002f2cf9 = 0x192;
  g_bss_002f2d05 = 0x198;
  g_bss_002f2d0d = 0x19c;
  g_bss_002f2d09 = 0x19a;
  g_bss_002f2d1d = 0x1a4;
  g_bss_002f2d19 = 0x1a2;
  g_bss_002f2d15 = 0x1a0;
  g_bss_002f2d11 = 0x19e;
  g_bss_002f2d21 = 0x1a6;
  g_bss_002f2a51 = 0x3e;
  g_bss_002f241b = 0xfb;
  g_bss_002f2417 = 0xf9;
  g_bss_002f241f = 0xfd;
  g_bss_002f2423 = 0xff;
  g_bss_002f242b = 0x103;
  g_bss_002f2427 = 0x101;
  g_bss_002f243b = 0x10b;
  g_bss_002f2437 = 0x109;
  g_bss_002f2433 = 0x107;
  g_bss_002f242f = 0x105;
  g_bss_002f243f = 0x10d;
  g_bss_002f22a7 = 0x41;
  g_bss_002f2bc9 = 0xfa;
  g_bss_002f2bc5 = 0xf8;
  g_bss_002f2bcd = 0xfc;
  g_bss_002f2bd1 = 0xfe;
  g_bss_002f2bd9 = 0x102;
  g_bss_002f2bd5 = 0x100;
  g_bss_002f2be9 = 0x10a;
  g_bss_002f2be5 = 0x108;
  g_bss_002f2be1 = 0x106;
  g_bss_002f2bdd = 0x104;
  g_bss_002f2bed = 0x10c;
  g_bss_002f2a55 = 0x40;
  g_bss_002f225b = 0x1b;
  g_bss_002f2257 = 0x19;
  g_bss_002f225f = 0x1d;
  g_bss_002f2263 = 0x1f;
  g_bss_002f226b = 0x23;
  g_bss_002f2267 = 0x21;
  g_bss_002f227b = 0x2b;
  g_bss_002f2277 = 0x29;
  g_bss_002f2273 = 0x27;
  g_bss_002f226f = 0x25;
  g_bss_002f227f = 0x2d;
  g_bss_002f2a09 = 0x1a;
  g_bss_002f2a05 = 0x18;
  g_bss_002f2a0d = 0x1c;
  g_bss_002f2a11 = 0x1e;
  g_bss_002f2a19 = 0x22;
  g_bss_002f2a15 = 0x20;
  g_bss_002f2a29 = 0x2a;
  g_bss_002f2a25 = 0x28;
  g_bss_002f2a21 = 0x26;
  g_bss_002f2a1d = 0x24;
  g_bss_002f2a2d = 0x2c;
  g_bss_002f27df = 0x2dd;
  g_bss_002f27db = 0x2db;
  g_bss_002f27e3 = 0x2df;
  g_bss_002f27e7 = 0x2e1;
  g_bss_002f27ef = 0x2e5;
  g_bss_002f27eb = 0x2e3;
  g_bss_002f27ff = 0x2ed;
  g_bss_002f27fb = 0x2eb;
  g_bss_002f27f7 = 0x2e9;
  g_bss_002f27f3 = 0x2e7;
  g_bss_002f2803 = 0x2ef;
  g_bss_002f22df = 0x5d;
  g_bss_002f2f8d = 0x2dc;
  g_bss_002f2f89 = 0x2da;
  g_bss_002f2f91 = 0x2de;
  g_bss_002f2f95 = 0x2e0;
  g_bss_002f2f9d = 0x2e4;
  g_bss_002f2f99 = 0x2e2;
  g_bss_002f2fad = 0x2ec;
  g_bss_002f2fa9 = 0x2ea;
  g_bss_002f2fa5 = 0x2e8;
  g_bss_002f2fa1 = 0x2e6;
  g_bss_002f2fb1 = 0x2ee;
  g_bss_002f2a8d = 0x5c;
  g_bss_002f27b3 = 0x2c7;
  g_bss_002f27af = 0x2c5;
  g_bss_002f27b7 = 0x2c9;
  g_bss_002f27bb = 0x2cb;
  g_bss_002f27c3 = 0x2cf;
  g_bss_002f27bf = 0x2cd;
  g_bss_002f27d3 = 0x2d7;
  g_bss_002f27cf = 0x2d5;
  g_bss_002f27cb = 0x2d3;
  g_bss_002f27c7 = 0x2d1;
  g_bss_002f27d7 = 0x2d9;
  g_bss_002f22db = 0x5b;
  g_bss_002f2f61 = 0x2c6;
  g_bss_002f2f5d = 0x2c4;
  g_bss_002f2f65 = 0x2c8;
  g_bss_002f2f69 = 0x2ca;
  g_bss_002f2f71 = 0x2ce;
  g_bss_002f2f6d = 0x2cc;
  g_bss_002f2f81 = 0x2d6;
  g_bss_002f2f7d = 0x2d4;
  g_bss_002f2f79 = 0x2d2;
  g_bss_002f2f75 = 0x2d0;
  g_bss_002f2f85 = 0x2d8;
  g_bss_002f2a89 = 0x5a;
  g_bss_002f23ff = 0xed;
  g_bss_002f23ef = 0xe5;
  g_bss_002f23f3 = 0xe7;
  g_bss_002f23f7 = 0xe9;
  g_bss_002f23fb = 0xeb;
  g_bss_002f240f = 0xf5;
  g_bss_002f240b = 0xf3;
  g_bss_002f2407 = 0xf1;
  g_bss_002f2403 = 0xef;
  g_bss_002f2413 = 0xf7;
  g_bss_002f229f = 0x3d;
  g_bss_002f2bad = 0xec;
  g_bss_002f2b9d = 0xe4;
  g_bss_002f2b99 = 0xe2;
  g_bss_002f2ba1 = 0xe6;
  g_bss_002f2ba5 = 0xe8;
  g_bss_002f2ba9 = 0xea;
  g_bss_002f2bbd = 0xf4;
  g_bss_002f2bb9 = 0xf2;
  g_bss_002f2bb5 = 0xf0;
  g_bss_002f2bb1 = 0xee;
  g_bss_002f2bc1 = 0xf6;
  g_bss_002f2a4d = 0x3c;
  g_bss_002f237b = 0xab;
  g_bss_002f236b = 0xa3;
  g_bss_002f2367 = 0xa1;
  g_bss_002f236f = 0xa5;
  g_bss_002f2373 = 0xa7;
  g_bss_002f2377 = 0xa9;
  g_bss_002f238b = 0xb3;
  g_bss_002f2387 = 0xb1;
  g_bss_002f2383 = 0xaf;
  g_bss_002f237f = 0xad;
  g_bss_002f238f = 0xb5;
  g_bss_002f2b29 = 0xaa;
  g_bss_002f2b19 = 0xa2;
  g_bss_002f2b15 = 0xa0;
  g_bss_002f2b1d = 0xa4;
  g_bss_002f2b21 = 0xa6;
  g_bss_002f2b25 = 0xa8;
  g_bss_002f2b39 = 0xb2;
  g_bss_002f2b35 = 0xb0;
  g_bss_002f2b31 = 0xae;
  g_bss_002f2b2d = 0xac;
  g_bss_002f2b3d = 0xb4;
  g_bss_002f2457 = 0x119;
  g_bss_002f2443 = 0x10f;
  g_bss_002f2447 = 0x111;
  g_bss_002f244b = 0x113;
  g_bss_002f244f = 0x115;
  g_bss_002f2467 = 0x121;
  g_bss_002f2463 = 0x11f;
  g_bss_002f245f = 0x11d;
  g_bss_002f245b = 0x11b;
  g_bss_002f2453 = 0x117;
  g_bss_002f246b = 0x123;
  g_bss_002f229b = 0x3b;
  g_bss_002f2c05 = 0x118;
  g_bss_002f2bf1 = 0x10e;
  g_bss_002f2bf5 = 0x110;
  g_bss_002f2bf9 = 0x112;
  g_bss_002f2bfd = 0x114;
  g_bss_002f2c15 = 0x120;
  g_bss_002f2c11 = 0x11e;
  g_bss_002f2c0d = 0x11c;
  g_bss_002f2c09 = 0x11a;
  g_bss_002f2c01 = 0x116;
  g_bss_002f2c19 = 0x122;
  g_bss_002f2a49 = 0x3a;
  g_bss_002f23d3 = 0xd7;
  g_bss_002f23c3 = 0xcf;
  g_bss_002f23bf = 0xcd;
  g_bss_002f23c7 = 0xd1;
  g_bss_002f23cb = 0xd3;
  g_bss_002f23cf = 0xd5;
  g_bss_002f23e3 = 0xdf;
  g_bss_002f23df = 0xdd;
  g_bss_002f23db = 0xdb;
  g_bss_002f23d7 = 0xd9;
  g_bss_002f23e7 = 0xe1;
  g_bss_002f2b81 = 0xd6;
  g_bss_002f2b71 = 0xce;
  g_bss_002f2b6d = 0xcc;
  g_bss_002f2b75 = 0xd0;
  g_bss_002f2b79 = 0xd2;
  g_bss_002f2b7d = 0xd4;
  g_bss_002f2b91 = 0xde;
  g_bss_002f2b8d = 0xdc;
  g_bss_002f2b89 = 0xda;
  g_bss_002f2b85 = 0xd8;
  g_bss_002f2b95 = 0xe0;
  g_bss_002f2507 = 0x171;
  g_bss_002f24f7 = 0x169;
  g_bss_002f24f3 = 0x167;
  g_bss_002f24fb = 0x16b;
  g_bss_002f24ff = 0x16d;
  g_bss_002f2503 = 0x16f;
  g_bss_002f2517 = 0x179;
  g_bss_002f2513 = 0x177;
  g_bss_002f250f = 0x175;
  g_bss_002f250b = 0x173;
  g_bss_002f251b = 0x17b;
  g_bss_002f2cb5 = 0x170;
  g_bss_002f2ca5 = 0x168;
  g_bss_002f2ca1 = 0x166;
  g_bss_002f2ca9 = 0x16a;
  g_bss_002f2cad = 0x16c;
  g_bss_002f2cb1 = 0x16e;
  g_bss_002f2cc5 = 0x178;
  g_bss_002f2cc1 = 0x176;
  g_bss_002f2cbd = 0x174;
  g_bss_002f2cb9 = 0x172;
  g_bss_002f2cc9 = 0x17a;
  g_bss_002f24db = 0x15b;
  g_bss_002f24cb = 0x153;
  g_bss_002f24c7 = 0x151;
  g_bss_002f24cf = 0x155;
  g_bss_002f24d3 = 0x157;
  g_bss_002f24d7 = 0x159;
  g_bss_002f24eb = 0x163;
  g_bss_002f24e7 = 0x161;
  g_bss_002f24e3 = 0x15f;
  g_bss_002f24df = 0x15d;
  g_bss_002f24ef = 0x165;
  g_bss_002f2c89 = 0x15a;
  g_bss_002f2c79 = 0x152;
  g_bss_002f2c75 = 0x150;
  g_bss_002f2c7d = 0x154;
  g_bss_002f2c81 = 0x156;
  g_bss_002f2c85 = 0x158;
  g_bss_002f2c99 = 0x162;
  g_bss_002f2c95 = 0x160;
  g_bss_002f2c91 = 0x15e;
  g_bss_002f2c8d = 0x15c;
  g_bss_002f2c9d = 0x164;
  g_bss_002f2483 = 0x12f;
  g_bss_002f2473 = 0x127;
  g_bss_002f246f = 0x125;
  g_bss_002f2477 = 0x129;
  g_bss_002f247b = 299;
  g_bss_002f247f = 0x12d;
  g_bss_002f2493 = 0x137;
  g_bss_002f248f = 0x135;
  g_bss_002f248b = 0x133;
  g_bss_002f2487 = 0x131;
  g_bss_002f2497 = 0x139;
  g_bss_002f2c31 = 0x12e;
  g_bss_002f2c21 = 0x126;
  g_bss_002f2c1d = 0x124;
  g_bss_002f2c25 = 0x128;
  g_bss_002f2c29 = 0x12a;
  g_bss_002f2c2d = 300;
  g_bss_002f2c41 = 0x136;
  g_bss_002f2c3d = 0x134;
  g_bss_002f2c39 = 0x132;
  g_bss_002f2c35 = 0x130;
  g_bss_002f2c45 = 0x138;
  g_bss_002f2533 = 0x187;
  g_bss_002f2523 = 0x17f;
  g_bss_002f251f = 0x17d;
  g_bss_002f2527 = 0x181;
  g_bss_002f252b = 0x183;
  g_bss_002f252f = 0x185;
  g_bss_002f2543 = 399;
  g_bss_002f253f = 0x18d;
  g_bss_002f253b = 0x18b;
  g_bss_002f2537 = 0x189;
  g_bss_002f2547 = 0x191;
  g_bss_002f2293 = 0x37;
  g_bss_002f2ce1 = 0x186;
  g_bss_002f2cd1 = 0x17e;
  g_bss_002f2ccd = 0x17c;
  g_bss_002f2cd5 = 0x180;
  g_bss_002f2cd9 = 0x182;
  g_bss_002f2cdd = 0x184;
  g_bss_002f2cf1 = 0x18e;
  g_bss_002f2ced = 0x18c;
  g_bss_002f2ce9 = 0x18a;
  g_bss_002f2ce5 = 0x188;
  g_bss_002f2cf5 = 400;
  g_bss_002f2a41 = 0x36;
  g_bss_002f25b7 = 0x1c9;
  g_bss_002f25a7 = 0x1c1;
  g_bss_002f25a3 = 0x1bf;
  g_bss_002f25ab = 0x1c3;
  g_bss_002f25af = 0x1c5;
  g_bss_002f25b3 = 0x1c7;
  g_bss_002f25c7 = 0x1d1;
  g_bss_002f25c3 = 0x1cf;
  g_bss_002f25bf = 0x1cd;
  g_bss_002f25bb = 0x1cb;
  g_bss_002f25cb = 0x1d3;
  g_bss_002f22af = 0x45;
  g_bss_002f2d65 = 0x1c8;
  g_bss_002f2d55 = 0x1c0;
  g_bss_002f2d51 = 0x1be;
  g_bss_002f2d59 = 0x1c2;
  g_bss_002f2d5d = 0x1c4;
  g_bss_002f2d61 = 0x1c6;
  g_bss_002f2d75 = 0x1d0;
  g_bss_002f2d71 = 0x1ce;
  g_bss_002f2d6d = 0x1cc;
  g_bss_002f2d69 = 0x1ca;
  g_bss_002f2d79 = 0x1d2;
  g_bss_002f2a5d = 0x44;
  g_bss_002f2787 = 0x2b1;
  g_bss_002f2783 = 0x2af;
  g_bss_002f278b = 0x2b3;
  g_bss_002f278f = 0x2b5;
  g_bss_002f2793 = 0x2b7;
  g_bss_002f2797 = 0x2b9;
  g_bss_002f27a7 = 0x2c1;
  g_bss_002f27a3 = 0x2bf;
  g_bss_002f279f = 0x2bd;
  g_bss_002f279b = 699;
  g_bss_002f27ab = 0x2c3;
  g_bss_002f22d7 = 0x59;
  g_bss_002f2f35 = 0x2b0;
  g_bss_002f2f31 = 0x2ae;
  g_bss_002f2f39 = 0x2b2;
  g_bss_002f2f3d = 0x2b4;
  g_bss_002f2f41 = 0x2b6;
  g_bss_002f2f45 = 0x2b8;
  g_bss_002f2f55 = 0x2c0;
  g_bss_002f2f51 = 0x2be;
  g_bss_002f2f4d = 700;
  g_bss_002f2f49 = 0x2ba;
  g_bss_002f2f59 = 0x2c2;
  g_bss_002f2a85 = 0x58;
  g_bss_002f25cf = 0x1d5;
  g_bss_002f25d3 = 0x1d7;
  g_bss_002f25d7 = 0x1d9;
  g_bss_002f25db = 0x1db;
  g_bss_002f25df = 0x1dd;
  g_bss_002f25e3 = 0x1df;
  g_bss_002f25e7 = 0x1e1;
  g_bss_002f25eb = 0x1e3;
  g_bss_002f25ef = 0x1e5;
  g_bss_002f25f3 = 0x1e7;
  g_bss_002f22b3 = 0x47;
  g_bss_002f2d7d = 0x1d4;
  g_bss_002f2d81 = 0x1d6;
  g_bss_002f2d85 = 0x1d8;
  g_bss_002f2d89 = 0x1da;
  g_bss_002f2d8d = 0x1dc;
  g_bss_002f2d91 = 0x1de;
  g_bss_002f2d95 = 0x1e0;
  g_bss_002f2d99 = 0x1e2;
  g_bss_002f2d9d = 0x1e4;
  g_bss_002f2da1 = 0x1e6;
  g_bss_002f2a61 = 0x46;
  g_bss_002f280b = 0x2f3;
  g_bss_002f2807 = 0x2f1;
  g_bss_002f280f = 0x2f5;
  g_bss_002f2813 = 0x2f7;
  g_bss_002f2817 = 0x2f9;
  g_bss_002f281b = 0x2fb;
  g_bss_002f282b = 0x303;
  g_bss_002f2827 = 0x301;
  g_bss_002f2823 = 0x2ff;
  g_bss_002f281f = 0x2fd;
  g_bss_002f282f = 0x305;
  g_bss_002f22e3 = 0x5f;
  g_bss_002f2fb9 = 0x2f2;
  g_bss_002f2fb5 = 0x2f0;
  g_bss_002f2fbd = 0x2f4;
  g_bss_002f2fc1 = 0x2f6;
  g_bss_002f2fc5 = 0x2f8;
  g_bss_002f2fc9 = 0x2fa;
  g_bss_002f2fd9 = 0x302;
  g_bss_002f2fd5 = 0x300;
  g_bss_002f2fd1 = 0x2fe;
  g_bss_002f2fcd = 0x2fc;
  g_bss_002f2fdd = 0x304;
  g_bss_002f2a91 = 0x5e;
  g_bss_002f26af = 0x245;
  g_bss_002f26ab = 0x243;
  g_bss_002f26b3 = 0x247;
  g_bss_002f26b7 = 0x249;
  g_bss_002f26bb = 0x24b;
  g_bss_002f26bf = 0x24d;
  g_bss_002f26cf = 0x255;
  g_bss_002f26cb = 0x253;
  g_bss_002f26c7 = 0x251;
  g_bss_002f26c3 = 0x24f;
  g_bss_002f26d3 = 599;
  g_bss_002f22c3 = 0x4f;
  g_bss_002f2e5d = 0x244;
  g_bss_002f2e59 = 0x242;
  g_bss_002f2e61 = 0x246;
  g_bss_002f2e65 = 0x248;
  g_bss_002f2e69 = 0x24a;
  g_bss_002f2e6d = 0x24c;
  g_bss_002f2e7d = 0x254;
  g_bss_002f2e79 = 0x252;
  g_bss_002f2e75 = 0x250;
  g_bss_002f2e71 = 0x24e;
  g_bss_002f2e81 = 0x256;
  g_bss_002f2a71 = 0x4e;
  g_bss_002f272f = 0x285;
  g_bss_002f2733 = 0x287;
  g_bss_002f2737 = 0x289;
  g_bss_002f273b = 0x28b;
  g_bss_002f273f = 0x28d;
  g_bss_002f274b = 0x293;
  g_bss_002f274f = 0x295;
  g_bss_002f2747 = 0x291;
  g_bss_002f2743 = 0x28f;
  g_bss_002f2753 = 0x297;
  g_bss_002f22cf = 0x55;
  g_bss_002f2edd = 0x284;
  g_bss_002f2ee1 = 0x286;
  g_bss_002f2ee5 = 0x288;
  g_bss_002f2ee9 = 0x28a;
  g_bss_002f2eed = 0x28c;
  g_bss_002f2ef9 = 0x292;
  g_bss_002f2efd = 0x294;
  g_bss_002f2ef5 = 0x290;
  g_bss_002f2ef1 = 0x28e;
  g_bss_002f2f01 = 0x296;
  g_bss_002f2a7d = 0x54;
  g_bss_002f264f = 0x215;
  g_bss_002f2653 = 0x217;
  g_bss_002f2657 = 0x219;
  g_bss_002f265b = 0x21b;
  g_bss_002f265f = 0x21d;
  g_bss_002f2663 = 0x21f;
  g_bss_002f2673 = 0x227;
  g_bss_002f266f = 0x225;
  g_bss_002f266b = 0x223;
  g_bss_002f2667 = 0x221;
  g_bss_002f2677 = 0x229;
  g_bss_002f22bf = 0x4d;
  g_bss_002f2dfd = 0x214;
  g_bss_002f2e01 = 0x216;
  g_bss_002f2e05 = 0x218;
  g_bss_002f2e09 = 0x21a;
  g_bss_002f2e0d = 0x21c;
  g_bss_002f2e11 = 0x21e;
  g_bss_002f2e21 = 0x226;
  g_bss_002f2e1d = 0x224;
  g_bss_002f2e19 = 0x222;
  g_bss_002f2e15 = 0x220;
  g_bss_002f2e25 = 0x228;
  g_bss_002f2a6d = 0x4c;
  g_bss_002f275b = 0x29b;
  g_bss_002f275f = 0x29d;
  g_bss_002f2757 = 0x299;
  g_bss_002f2763 = 0x29f;
  g_bss_002f276b = 0x2a3;
  g_bss_002f2767 = 0x2a1;
  g_bss_002f277b = 0x2ab;
  g_bss_002f2777 = 0x2a9;
  g_bss_002f2773 = 0x2a7;
  g_bss_002f276f = 0x2a5;
  g_bss_002f277f = 0x2ad;
  g_bss_002f22d3 = 0x57;
  g_bss_002f2f09 = 0x29a;
  g_bss_002f2f0d = 0x29c;
  g_bss_002f2f05 = 0x298;
  g_bss_002f2f11 = 0x29e;
  g_bss_002f2f19 = 0x2a2;
  g_bss_002f2f15 = 0x2a0;
  g_bss_002f2f29 = 0x2aa;
  g_bss_002f2f25 = 0x2a8;
  g_bss_002f2f21 = 0x2a6;
  g_bss_002f2f1d = 0x2a4;
  g_bss_002f2f2d = 0x2ac;
  g_bss_002f2a81 = 0x56;
  g_bss_002f2577 = 0x1a9;
  g_bss_002f257b = 0x1ab;
  g_bss_002f257f = 0x1ad;
  g_bss_002f2583 = 0x1af;
  g_bss_002f2587 = 0x1b1;
  g_bss_002f258b = 0x1b3;
  g_bss_002f258f = 0x1b5;
  g_bss_002f2593 = 0x1b7;
  g_bss_002f2597 = 0x1b9;
  g_bss_002f259b = 0x1bb;
  g_bss_002f259f = 0x1bd;
  g_bss_002f228f = 0x35;
  g_bss_002f2d25 = 0x1a8;
  g_bss_002f2d29 = 0x1aa;
  g_bss_002f2d2d = 0x1ac;
  g_bss_002f2d31 = 0x1ae;
  g_bss_002f2d35 = 0x1b0;
  g_bss_002f2d39 = 0x1b2;
  g_bss_002f2d3d = 0x1b4;
  g_bss_002f2d41 = 0x1b6;
  g_bss_002f2d45 = 0x1b8;
  g_bss_002f2d49 = 0x1ba;
  g_bss_002f2d4d = 0x1bc;
  g_bss_002f2a3d = 0x34;
  g_bss_002f2627 = 0x201;
  g_bss_002f2623 = 0x1ff;
  g_bss_002f262b = 0x203;
  g_bss_002f262f = 0x205;
  g_bss_002f2633 = 0x207;
  g_bss_002f2637 = 0x209;
  g_bss_002f263b = 0x20b;
  g_bss_002f263f = 0x20d;
  g_bss_002f2647 = 0x211;
  g_bss_002f2643 = 0x20f;
  g_bss_002f264b = 0x213;
  g_bss_002f228b = 0x33;
  g_bss_002f2dd5 = 0x200;
  g_bss_002f2dd1 = 0x1fe;
  g_bss_002f2dd9 = 0x202;
  g_bss_002f2ddd = 0x204;
  g_bss_002f2de1 = 0x206;
  g_bss_002f2de5 = 0x208;
  g_bss_002f2de9 = 0x20a;
  g_bss_002f2ded = 0x20c;
  g_bss_002f2df5 = 0x210;
  g_bss_002f2df1 = 0x20e;
  g_bss_002f2df9 = 0x212;
  g_bss_002f2a39 = 0x32;
  g_bss_002f222b = 3;
  g_bss_002f2227 = 1;
  g_bss_002f222f = 5;
  g_bss_002f2233 = 7;
  g_bss_002f2237 = 9;
  g_bss_002f223b = 0xb;
  g_bss_002f223f = 0xd;
  g_bss_002f2243 = 0xf;
  g_bss_002f2247 = 0x11;
  g_bss_002f224b = 0x13;
  g_bss_002f2253 = 0x17;
  g_bss_002f224f = 0x15;
  g_bss_002f22b7 = 0x49;
  g_bss_002f29d9 = 2;
  g_bss_002f29d5 = 0;
  g_bss_002f29dd = 4;
  g_bss_002f29e1 = 6;
  g_bss_002f29e5 = 8;
  g_bss_002f29e9 = 10;
  g_bss_002f29ed = 0xc;
  g_bss_002f29f1 = 0xe;
  g_bss_002f29f9 = 0x12;
  g_bss_002f29f5 = 0x10;
  g_bss_002f2a01 = 0x16;
  g_bss_002f29fd = 0x14;
  g_bss_002f2a65 = 0x48;
  g_bss_002f249b = 0x13b;
  g_bss_002f249f = 0x13d;
  g_bss_002f24a3 = 0x13f;
  g_bss_002f24a7 = 0x141;
  g_bss_002f24ab = 0x143;
  g_bss_002f24af = 0x145;
  g_bss_002f24b3 = 0x147;
  g_bss_002f24b7 = 0x149;
  g_bss_002f24bb = 0x14b;
  g_bss_002f24bf = 0x14d;
  g_bss_002f24c3 = 0x14f;
  g_bss_002f2c49 = 0x13a;
  g_bss_002f2c4d = 0x13c;
  g_bss_002f2c51 = 0x13e;
  g_bss_002f2c55 = 0x140;
  g_bss_002f2c59 = 0x142;
  g_bss_002f2c5d = 0x144;
  g_bss_002f2c61 = 0x146;
  g_bss_002f2c65 = 0x148;
  g_bss_002f2c69 = 0x14a;
  g_bss_002f2c6d = 0x14c;
  g_bss_002f2c71 = 0x14e;
  g_bss_002f26db = 0x25b;
  g_bss_002f26d7 = 0x259;
  g_bss_002f26df = 0x25d;
  g_bss_002f26e3 = 0x25f;
  g_bss_002f26e7 = 0x261;
  g_bss_002f26eb = 0x263;
  g_bss_002f26fb = 0x26b;
  g_bss_002f26f7 = 0x269;
  g_bss_002f26f3 = 0x267;
  g_bss_002f26ef = 0x265;
  g_bss_002f26ff = 0x26d;
  g_bss_002f22c7 = 0x51;
  g_bss_002f2e89 = 0x25a;
  g_bss_002f2e85 = 600;
  g_bss_002f2e8d = 0x25c;
  g_bss_002f2e91 = 0x25e;
  g_bss_002f2e95 = 0x260;
  g_bss_002f2e99 = 0x262;
  g_bss_002f2ea9 = 0x26a;
  g_bss_002f2ea5 = 0x268;
  g_bss_002f2ea1 = 0x266;
  g_bss_002f2e9d = 0x264;
  g_bss_002f2ead = 0x26c;
  g_bss_002f2a75 = 0x50;
  g_bss_002f2707 = 0x271;
  g_bss_002f2703 = 0x26f;
  g_bss_002f270b = 0x273;
  g_bss_002f270f = 0x275;
  g_bss_002f2713 = 0x277;
  g_bss_002f2717 = 0x279;
  g_bss_002f2727 = 0x281;
  g_bss_002f2723 = 0x27f;
  g_bss_002f271f = 0x27d;
  g_bss_002f271b = 0x27b;
  g_bss_002f272b = 0x283;
  g_bss_002f22cb = 0x53;
  g_bss_002f2eb5 = 0x270;
  g_bss_002f2eb1 = 0x26e;
  g_bss_002f2eb9 = 0x272;
  g_bss_002f2ebd = 0x274;
  g_bss_002f2ec1 = 0x276;
  g_bss_002f2ec5 = 0x278;
  g_bss_002f2ed5 = 0x280;
  g_bss_002f2ed1 = 0x27e;
  g_bss_002f2ecd = 0x27c;
  g_bss_002f2ec9 = 0x27a;
  g_bss_002f2ed9 = 0x282;
  g_bss_002f2a79 = 0x52;
  g_bss_002f25fb = 0x1eb;
  g_bss_002f25f7 = 0x1e9;
  g_bss_002f25ff = 0x1ed;
  g_bss_002f2603 = 0x1ef;
  g_bss_002f2607 = 0x1f1;
  g_bss_002f260b = 499;
  g_bss_002f261b = 0x1fb;
  g_bss_002f2617 = 0x1f9;
  g_bss_002f2613 = 0x1f7;
  g_bss_002f260f = 0x1f5;
  g_bss_002f261f = 0x1fd;
  g_bss_002f22bb = 0x4b;
  g_bss_002f2da9 = 0x1ea;
  g_bss_002f2da5 = 0x1e8;
  g_bss_002f2dad = 0x1ec;
  g_bss_002f2db1 = 0x1ee;
  g_bss_002f2db5 = 0x1f0;
  g_bss_002f2db9 = 0x1f2;
  g_bss_002f2dc9 = 0x1fa;
  g_bss_002f2dc5 = 0x1f8;
  g_bss_002f2dc1 = 0x1f6;
  g_bss_002f2dbd = 500;
  g_bss_002f2dcd = 0x1fc;
  g_bss_002f2a69 = 0x4a;
  g_bss_002f2397 = 0xb9;
  g_bss_002f2393 = 0xb7;
  g_bss_002f239b = 0xbb;
  g_bss_002f239f = 0xbd;
  g_bss_002f23a3 = 0xbf;
  g_bss_002f23a7 = 0xc1;
  g_bss_002f23b7 = 0xc9;
  g_bss_002f23b3 = 199;
  g_bss_002f23af = 0xc5;
  g_bss_002f23ab = 0xc3;
  g_bss_002f23bb = 0xcb;
  g_bss_002f22ab = 0x43;
  g_bss_002f2b45 = 0xb8;
  g_bss_002f2b41 = 0xb6;
  g_bss_002f2b49 = 0xba;
  g_bss_002f2b4d = 0xbc;
  g_bss_002f2b51 = 0xbe;
  g_bss_002f2b55 = 0xc0;
  g_bss_002f2b65 = 200;
  g_bss_002f2b61 = 0xc6;
  g_bss_002f2b5d = 0xc4;
  g_bss_002f2b59 = 0xc2;
  g_bss_002f2b69 = 0xca;
  g_bss_002f2a59 = 0x42;
  g_bss_002f267b = 0x22b;
  g_bss_002f267f = 0x22d;
  g_bss_002f2683 = 0x22f;
  g_bss_002f2687 = 0x231;
  g_bss_002f268b = 0x233;
  g_bss_002f268f = 0x235;
  g_bss_002f2693 = 0x237;
  g_bss_002f2697 = 0x239;
  g_bss_002f269b = 0x23b;
  g_bss_002f269f = 0x23d;
  g_bss_002f26a3 = 0x23f;
  g_bss_002f26a7 = 0x241;
  g_bss_002f2297 = 0x39;
  g_bss_002f2e29 = 0x22a;
  g_bss_002f2e2d = 0x22c;
  g_bss_002f2e31 = 0x22e;
  g_bss_002f2e35 = 0x230;
  g_bss_002f2e39 = 0x232;
  g_bss_002f2e3d = 0x234;
  g_bss_002f2e41 = 0x236;
  g_bss_002f2e45 = 0x238;
  g_bss_002f2e49 = 0x23a;
  g_bss_002f2e4d = 0x23c;
  g_bss_002f2e51 = 0x23e;
  g_bss_002f2e55 = 0x240;
  g_bss_002f2a45 = 0x38;
  g_bss_002f2921 = 0x381;
  g_bss_002f2923 = 0x382;
  g_bss_002f2925 = 899;
  g_bss_002f2927 = 900;
  g_bss_002f288f = 0x336;
  g_bss_002f288b._2_2_ = 0x335;
  g_bss_002f296b = 0x3a3;
  g_bss_002f285d = 0x31a;
  g_bss_002f2851 = 0x314;
  g_bss_002f2855 = 0x316;
  g_bss_002f2859 = 0x318;
  g_bss_002f285b = 0x31a;
  g_bss_002f291f = 0x37b;
  g_bss_002f286f = 0x323;
  g_bss_002f2873 = 0x325;
  g_bss_002f2877 = 0x327;
  g_bss_002f287b = 0x329;
  g_bss_002f287f = 0x32b;
  g_bss_002f2883 = 0x32d;
  g_bss_002f2887 = 0x32f;
  g_bss_002f288b._0_2_ = 0x331;
  g_bss_002f2327 = 0x81;
  g_bss_002f232f = 0x85;
  g_bss_002f2333 = 0x87;
  g_bss_002f2337 = 0x89;
  g_bss_002f233b = 0x8b;
  g_bss_002f233f = 0x8d;
  g_bss_002f2343 = 0x8f;
  g_bss_002f2347 = 0x91;
  g_bss_002f234b = 0x93;
  g_bss_002f234f = 0x95;
  g_bss_002f2353 = 0x97;
  g_bss_002f2357 = 0x99;
  g_bss_002f231f = 0x7d;
  g_bss_002f235b = 0x9b;
  g_bss_002f235f = 0x9d;
  g_bss_002f2363 = 0x9f;
  g_bss_002f2323 = 0x7f;
  g_bss_002f23eb = 0xe3;
  g_bss_002f2837 = 0x30b;
  g_bss_002f29ab = 0x3c3;
  g_bss_002f2993 = 0x3b7;
  g_bss_002f2939 = 0x38a;
  g_bss_002f296f = 0x3a5;
  g_bss_002f2973 = 0x3a7;
  g_bss_002f298f = 0x3b5;
  g_bss_002f2935 = 0x388;
  g_bss_002f28b7 = 0x34a;
  g_bss_002f28b9 = 0x34b;
  g_bss_002f28bf = 0x34f;
  g_bss_002f28c1 = 0x350;
  g_bss_002f28c3 = 0x351;
  g_bss_002f28af = 0x347;
  g_bss_002f28b1 = 0x346;
  g_bss_002f2899 = 0x33a;
  g_bss_002f28e1 = 0x35e;
  g_bss_002f2977 = 0x3ad;
  g_bss_002f2979 = 0x3ae;
  g_bss_002f297b = 0x3af;
  g_bss_002f297d = 0x3b0;
  g_bss_002f297f = 0x3b1;
  g_bss_002f2833 = 0x307;
  g_bss_002f295b = 0x39b;
  g_bss_002f28ed = 0x366;
  g_bss_002f28ef = 0x367;
  g_bss_002f28f1 = 0x368;
  g_bss_002f28f9 = 0x36c;
  g_bss_002f28fb = 0x36d;
  g_bss_002f28fd = 0x36e;
  g_bss_002f2905 = 0x372;
  g_bss_002f2907 = 0x373;
  g_bss_002f2909 = 0x374;
  g_bss_002f2911 = 0x378;
  g_bss_002f2913 = 0x379;
  g_bss_002f2915 = 0x37a;
  g_bss_002f2839 = 0x30a;
  g_bss_002f2931 = 0x386;
  g_bss_002f232b = 0x83;
  g_bss_002f30d5 = 0x37d;
  g_bss_002f30d7 = 0x382;
  g_bss_002f30d9 = 0x37f;
  g_bss_002f30db = 0x380;
  g_bss_002f303f = 0x334;
  g_bss_002f303d = 0x333;
  g_bss_002f3119 = 0x3a2;
  g_bss_002f2ffb = 0x315;
  g_bss_002f2fff = 0x317;
  g_bss_002f3003 = 0x319;
  g_bss_002f3007 = 0x31b;
  g_bss_002f30c9 = 0x37c;
  g_bss_002f3019 = 0x324;
  g_bss_002f301d = 0x326;
  g_bss_002f3021 = 0x328;
  g_bss_002f3025 = 0x32a;
  g_bss_002f3029 = 0x32c;
  g_bss_002f302d = 0x32e;
  g_bss_002f3031 = 0x330;
  g_bss_002f3035 = 0x332;
  g_bss_002f2ad5 = 0x80;
  g_bss_002f2add = 0x84;
  g_bss_002f2ae1 = 0x86;
  g_bss_002f2ae5 = 0x88;
  g_bss_002f2ae9 = 0x8a;
  g_bss_002f2aed = 0x8c;
  g_bss_002f2af1 = 0x8e;
  g_bss_002f2af5 = 0x90;
  g_bss_002f2af9 = 0x92;
  g_bss_002f2afd = 0x94;
  g_bss_002f2b01 = 0x96;
  g_bss_002f2b05 = 0x98;
  g_bss_002f2acd = 0x7c;
  g_bss_002f2b09 = 0x9a;
  g_bss_002f2b0d = 0x9c;
  g_bss_002f2b11 = 0x9e;
  g_bss_002f2fe9 = 0x308;
  g_bss_002f3159 = 0x3c2;
  g_bss_002f3141 = 0x3b6;
  g_bss_002f30e7 = 0x389;
  g_bss_002f311d = 0x3a4;
  g_bss_002f3121 = 0x3a6;
  g_bss_002f313d = 0x3b4;
  g_bss_002f30e3 = 0x387;
  g_bss_002f3067 = 0x348;
  g_bss_002f3069 = 0x349;
  g_bss_002f3071 = 0x34c;
  g_bss_002f3073 = 0x34d;
  g_bss_002f3075 = 0x34e;
  g_bss_002f305f = 0x345;
  g_bss_002f3047 = 0x339;
  g_bss_002f308f = 0x35d;
  g_bss_002f312d = 0x3a8;
  g_bss_002f312f = 0x3a9;
  g_bss_002f3131 = 0x3aa;
  g_bss_002f3133 = 0x3ab;
  g_bss_002f3135 = 0x3ac;
  g_bss_002f2fe1 = 0x306;
  g_bss_002f3109 = 0x39a;
  g_bss_002f309f = 0x363;
  g_bss_002f30a1 = 0x364;
  g_bss_002f30a3 = 0x365;
  g_bss_002f30ab = 0x369;
  g_bss_002f30ad = 0x36a;
  g_bss_002f30af = 0x36b;
  g_bss_002f30b7 = 0x36f;
  g_bss_002f30b9 = 0x370;
  g_bss_002f30bb = 0x371;
  g_bss_002f30c3 = 0x375;
  g_bss_002f30c5 = 0x376;
  g_bss_002f30c7 = 0x377;
  g_bss_002f2fe7 = 0x309;
  g_bss_002f30df = 0x385;
  g_bss_002f2ad9 = 0x82;
  g_bss_002f2317 = 0x79;
  g_bss_002f2ac5._0_2_ = 0x78;
  g_bss_002f230b = 0x73;
  g_bss_002f2ab9 = 0x72;
  g_bss_002f2303 = 0x6f;
  g_bss_002f2ab1 = 0x6e;
  g_bss_002f22f3 = 0x67;
  g_bss_002f2aa1 = 0x66;
  g_bss_002f22f7 = 0x69;
  g_bss_002f2aa5 = 0x68;
  g_bss_002f22fb = 0x6b;
  g_bss_002f2aa9 = 0x6a;
  g_bss_002f22ff = 0x6d;
  g_bss_002f2aad = 0x6c;
  g_bss_002f22ef = 0x65;
  g_bss_002f2a9d = 100;
  g_bss_002f22eb = 99;
  g_bss_002f2a99 = 0x62;
  g_bss_002f2283 = 0x2f;
  g_bss_002f2a31 = 0x2e;
  g_bss_002f2997 = 0x3b9;
  g_bss_002f3145 = 0x3b8;
  g_bss_002f299b = 0x3bb;
  g_bss_002f3149 = 0x3ba;
  g_bss_002f299f = 0x3bd;
  g_bss_002f314d = 0x3bc;
  g_bss_002f29a3 = 0x3bf;
  g_bss_002f3151 = 0x3be;
  g_bss_002f29a7 = 0x3c1;
  g_bss_002f3155 = 0x3c0;
  g_bss_002f298b = 0x3b3;
  g_bss_002f3139 = 0x3b2;
  return;
}

/******************************************************************************
 * Function : inits_process_thing_entity_042fc8 (Original VA: 0x42fc8, Ghidra: FUN_00042fc8)
 * Prototype: void inits_process_thing_entity_042fc8(void);
 * Address  : 0x42fc8 (Size: 242 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_non_keeper_keeper_game_0402e5
 * Callees  : 0 -> 
 ******************************************************************************/
void inits_process_thing_entity_042fc8(void)

{
  undefined2 uval;
  int thing_ptr;
  int arg_eax;
  
  thing_ptr = (&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]];
  *(undefined2 *)(arg_eax + 0x66) = 0;
  *(undefined2 *)(arg_eax + 0x68) = 0;
  *(undefined2 *)(arg_eax + 0x6a) = 0x100;
  *(undefined4 *)(arg_eax + 0x71) = 0;
  *(undefined4 *)(arg_eax + 0x75) = 0;
  *(undefined4 *)(arg_eax + 0x6d) = 0x200;
  *(undefined4 *)(arg_eax + 0x79) = 0xbc;
  *(undefined1 *)(arg_eax + 0x6c) = 1;
  *(undefined2 *)(arg_eax + 0x3c) = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
  uval = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
  *(undefined2 *)(arg_eax + 0x40) = 0;
  *(undefined4 *)(arg_eax + 0x47) = 0xfffffef6;
  *(undefined4 *)(arg_eax + 0x4b) = 0;
  *(undefined4 *)(arg_eax + 0x43) = 0x100;
  *(undefined4 *)(arg_eax + 0x4f) = 0xbc;
  *(undefined1 *)(arg_eax + 0x42) = 2;
  *(undefined4 *)(arg_eax + 0x53) = 10000;
  *(undefined2 *)(arg_eax + 0x90) = 0;
  *(undefined2 *)(arg_eax + 0x92) = 0;
  *(undefined2 *)(arg_eax + 0x94) = 0x20;
  *(undefined4 *)(arg_eax + 0xa3) = 0xbc;
  *(undefined1 *)(arg_eax + 0x96) = 3;
  *(undefined2 *)(arg_eax + 0x3e) = uval;
  *(undefined2 *)(arg_eax + 0xba) = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
  uval = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
  *(undefined2 *)(arg_eax + 0xbe) = 0x20;
  *(undefined4 *)(arg_eax + 0xcd) = 0xbc;
  *(undefined1 *)(arg_eax + 0xc0) = 5;
  *(undefined4 *)(arg_eax + 0xd1) = 0x10000;
  *(undefined2 *)(arg_eax + 0xbc) = uval;
  return;
}

/******************************************************************************
 * Function : inits_fn_0430ba (Original VA: 0x430ba, Ghidra: FUN_000430ba)
 * Prototype: void inits_fn_0430ba(void);
 * Address  : 0x430ba (Size: 721 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x0430ba
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 7 -> cdtest_ldata_dkwind00_dat_0150f0, file_fn_02c3d0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8f34, bflib_system_io_fn_0e984c, bflib_system_io_fn_0e98c8
 ******************************************************************************/
void inits_fn_0430ba(void)

{
  char ch;
  undefined1 uval;
  undefined4 uval_2;
  uint uval_3;
  int val;
  int val_2;
  int val_3;
  int val_4;
  int local_38;
  int local_34;
  int local_30;
  
  prepare_file_path();
  uval_2 = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_colours_col_00164eb0,uval_2);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = file_fn_02c3d0();
  if (ch == '\0') {
    local_34 = 0;
    val_4 = 0;
    do {
      val_3 = 0;
      local_38 = val_4;
      do {
        local_30 = 0;
        val = local_38;
        do {
          local_30 = local_30 + 1;
          uval = bflib_system_io_fn_0e8f34();
          (&g_data_001992a0)[val] = uval;
          val = val + 1;
        } while (local_30 < 0x10);
        local_38 = local_38 + 0x10;
        val_3 = val_3 + 1;
      } while (val_3 < 0x10);
      local_34 = local_34 + 1;
      val_4 = val_4 + 0x100;
    } while (local_34 < 0x10);
    bflib_system_io_fn_0e98c8();
  }
  else {
    bflib_system_io_fn_0e984c();
  }
  prepare_file_path();
  uval_2 = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_redpal_col_00164ec6,uval_2);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = file_fn_02c3d0();
  if (ch == '\0') {
    val_3 = 0;
    val_4 = 0;
    do {
      val = val_3 + 1;
      uval_3 = *(byte *)(val_3 + g_display_palette) + 0x14;
      if (0x3e < uval_3) {
        uval_3 = 0x3f;
      }
      val_2 = val_4 + 1;
      val_3 = val_3 + 3;
      uval = bflib_system_io_fn_0e8f34(*(undefined1 *)(val + g_display_palette),uval_3 & 0xff);
      (&g_bss_003d9684)[val_4] = uval;
      val_4 = val_2;
    } while (val_2 < 0x100);
    bflib_system_io_fn_0e98c8();
  }
  else {
    bflib_system_io_fn_0e984c();
  }
  prepare_file_path();
  uval_2 = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_whitepal_col_00164edb,uval_2);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = file_fn_02c3d0();
  if (ch == '\0') {
    val_4 = 0;
    do {
      val_3 = val_4 + 1;
      uval = bflib_system_io_fn_0e8f34();
      (&g_bss_003d9584)[val_4] = uval;
      val_4 = val_3;
    } while (val_3 < 0x100);
    bflib_system_io_fn_0e98c8();
  }
  else {
    bflib_system_io_fn_0e984c();
  }
  return;
}

/******************************************************************************
 * Function : inits_fn_04338b (Original VA: 0x4338b, Ghidra: FUN_0004338b)
 * Prototype: void inits_fn_04338b(void);
 * Address  : 0x4338b (Size: 1848 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x04338b
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_fn_04338b(void)

{
  int val;
  int val_2;
  
  g_bss_001acd90 = 100;
  g_bss_001acd94 = 0x14;
  g_bss_001acd99 = 0;
  g_bss_001acd9b = 0;
  g_bss_001acd9c = 0;
  g_bss_001acd95 = 0;
  g_bss_001acdad = 100;
  g_bss_001acdb1 = 0;
  g_bss_001acdb6 = 0x600;
  g_bss_001acdb8 = 0x32;
  g_bss_001acdb9 = 5;
  g_bss_001acdc7 = 0;
  g_bss_001acdb2 = 1;
  g_bss_001acdb5 = 1;
  g_bss_001ad300 = 100;
  g_bss_001ad304 = 0;
  g_bss_001ad309 = 0xa00;
  g_bss_001ad30b = 0x28;
  g_bss_001ad30c = 5;
  g_bss_001ad31a = 0;
  g_bss_001ad305 = 1;
  g_bss_001ad308 = 1;
  g_bss_001acdca = 100;
  g_bss_001acdce = 0x14;
  g_bss_001acde7 = 100;
  g_bss_001acdeb = 0x14;
  g_bss_001acdf0 = 0x700;
  g_bss_001acdf2 = 0x2f;
  g_bss_001acdf3 = 5;
  g_bss_001ace01 = 0;
  g_bss_001acdec = 1;
  g_bss_001acdef = 1;
  g_bss_001ace04 = 1;
  g_bss_001ace08 = 0x14;
  g_bss_001ace0d = 0xe00;
  g_bss_001ace0f = 0x24;
  g_bss_001ace10 = 5;
  g_bss_001ace1e = 1;
  g_bss_001ace09 = 0;
  g_bss_001ace0a = 1;
  g_bss_001ace0c = 1;
  g_bss_001ace25 = 8;
  g_bss_001ace21 = 0x32;
  g_bss_001ace3e = 100;
  g_bss_001ace42 = 0;
  g_bss_001ace43 = 1;
  g_bss_001ace46 = 1;
  g_bss_001ace5b = 100;
  g_bss_001ace5f = 0x14;
  g_bss_001ace60 = 1;
  g_bss_001ace95 = 1000;
  g_bss_001ace99 = 9;
  g_bss_001ad09f = 100;
  g_bss_001ad0a3 = 0;
  g_bss_001ad0a8 = 0x600;
  g_bss_001ad0aa = 0x2e;
  g_bss_001ad0ab = 5;
  g_bss_001ad0b9 = 0;
  g_bss_001ad0a4 = 1;
  g_bss_001ad0a7 = 1;
  g_bss_001ad256 = 8;
  g_bss_001ad252 = 0x32;
  g_bss_001aceb6 = 10;
  g_bss_001acebb = 0x400;
  g_bss_001acebd = 0x3e;
  g_bss_001acebe = 0;
  g_bss_001acecc = 0;
  g_bss_001aceb7 = 0;
  g_bss_001aceba = 1;
  g_bss_001aced3 = 10;
  g_bss_001aced8 = 0x400;
  g_bss_001aceda = 0x3e;
  g_bss_001acedb = 0;
  g_bss_001acee9 = 0;
  g_bss_001aced4 = 0;
  g_bss_001aced7 = 1;
  g_bss_001acef0 = 10;
  g_bss_001acef5 = 0x400;
  g_bss_001acef7 = 0x3e;
  g_bss_001acef8 = 0;
  g_bss_001acf06 = 0;
  g_bss_001acef1 = 0;
  g_bss_001acef4 = 1;
  g_bss_001acf0d = 10;
  g_bss_001acf12 = 0x400;
  g_bss_001acf14 = 0x3e;
  g_bss_001acf15 = 0;
  g_bss_001acf23 = 0;
  g_bss_001acf0e = 0;
  g_bss_001acf11 = 1;
  g_bss_001acf2a = 10;
  g_bss_001acf2f = 0x400;
  g_bss_001acf31 = 0x3e;
  g_bss_001acf32 = 0;
  g_bss_001acf40 = 0;
  g_bss_001acf2b = 0;
  g_bss_001acf2e = 1;
  g_bss_001acf47 = 10;
  g_bss_001acf4c = 0x400;
  g_bss_001acf4e = 0x3e;
  g_bss_001acf4f = 0;
  g_bss_001acf5d = 0;
  g_bss_001acf48 = 0;
  g_bss_001acf4b = 1;
  g_bss_001acf64 = 10;
  g_bss_001acf69 = 0x400;
  g_bss_001acf6b = 0x3e;
  g_bss_001acf6c = 0;
  g_bss_001acf7a = 0;
  g_bss_001acf65 = 0;
  g_bss_001acf68 = 1;
  g_bss_001acf81 = 10;
  g_bss_001acf86 = 0x400;
  g_bss_001acf88 = 0x3e;
  g_bss_001acf89 = 0;
  g_bss_001acf97 = 0;
  g_bss_001acf82 = 0;
  g_bss_001acf85 = 1;
  g_bss_001acf9e = 10;
  g_bss_001acfa3 = 0x400;
  g_bss_001acfa5 = 0x3e;
  g_bss_001acfa6 = 0;
  g_bss_001acfb4 = 0;
  g_bss_001acf9f = 0;
  g_bss_001acfa2 = 1;
  g_bss_001acfbb = 10;
  g_bss_001acfc0 = 0x400;
  g_bss_001acfc2 = 0x3e;
  g_bss_001acfc3 = 0;
  g_bss_001acfd1 = 0;
  g_bss_001acfbc = 0;
  g_bss_001acfbf = 1;
  g_bss_001acfd8 = 10;
  g_bss_001acfdd = 0x400;
  g_bss_001acfdf = 0x3e;
  g_bss_001acfe0 = 0;
  g_bss_001acfee = 0;
  g_bss_001acfd9 = 0;
  g_bss_001acfdc = 1;
  g_bss_001acff5 = 10;
  g_bss_001acffa = 0x400;
  g_bss_001acffc = 0x3e;
  g_bss_001acffd = 0;
  g_bss_001ad00b = 0;
  g_bss_001acff6 = 0;
  g_bss_001acff9 = 1;
  g_bss_001ad012 = 10;
  g_bss_001ad017 = 0x400;
  g_bss_001ad019 = 0x3e;
  g_bss_001ad01a = 0;
  g_bss_001ad028 = 0;
  g_bss_001ad013 = 0;
  g_bss_001ad016 = 1;
  g_bss_001ad290 = 10;
  g_bss_001ad295 = 0x400;
  g_bss_001ad297 = 0x3e;
  g_bss_001ad298 = 0;
  g_bss_001ad2a6 = 0;
  g_bss_001ad291 = 0;
  g_bss_001ad294 = 1;
  g_bss_001ad2ad = 10;
  g_bss_001ad2b2 = 0x400;
  g_bss_001ad2b4 = 0x3e;
  g_bss_001ad2b5 = 0;
  g_bss_001ad2c3 = 0;
  g_bss_001ad2ae = 0;
  g_bss_001ad2b1 = 1;
  g_bss_001ad2ca = 10;
  g_bss_001ad2cf = 0x400;
  g_bss_001ad2d1 = 0x3e;
  g_bss_001ad2d2 = 0;
  g_bss_001ad2e0 = 0;
  g_bss_001ad2cb = 0;
  g_bss_001ad2ce = 1;
  g_bss_001adca5 = 10;
  g_bss_001adcaa = 0x400;
  g_bss_001adcac = 0x3e;
  g_bss_001adcad = 0;
  g_bss_001adcbb = 0;
  g_bss_001adca6 = 0;
  g_bss_001adca9 = 1;
  g_bss_001ad752 = 10;
  g_bss_001ad757 = 0x400;
  g_bss_001ad759 = 0x3e;
  g_bss_001ad75a = 0;
  g_bss_001ad768 = 0;
  g_bss_001ad753 = 0;
  g_bss_001ad76f = 10;
  g_bss_001ad774 = 0x400;
  g_bss_001ad776 = 0x3e;
  g_bss_001ad777 = 0;
  g_bss_001ad785 = 0;
  g_bss_001ad770 = 0;
  g_bss_001ad78c = 10;
  g_bss_001ad791 = 0x400;
  g_bss_001ad793 = 0x3e;
  g_bss_001ad794 = 0;
  g_bss_001ad7a2 = 0;
  g_bss_001ad78d = 0;
  g_bss_001ad7a9 = 10;
  g_bss_001ad7ae = 0x400;
  g_bss_001ad7b0 = 0x3e;
  g_bss_001ad7b1 = 0;
  g_bss_001ad7bf = 0;
  g_bss_001ad7aa = 0;
  g_bss_001ad7c6 = 10;
  g_bss_001ad7cb = 0x400;
  g_bss_001ad7cd = 0x3e;
  g_bss_001ad7ce = 0;
  g_bss_001ad7dc = 0;
  g_bss_001ad7c7 = 0;
  g_bss_001ad7e3 = 10;
  g_bss_001ad7e8 = 0x400;
  g_bss_001ad7ea = 0x3e;
  g_bss_001ad7eb = 0;
  g_bss_001ad7f9 = 0;
  g_bss_001ad7e4 = 0;
  g_bss_001ad800 = 10;
  g_bss_001ad805 = 0x400;
  g_bss_001ad807 = 0x3e;
  g_bss_001ad808 = 0;
  g_bss_001ad816 = 0;
  g_bss_001ad801 = 0;
  g_bss_001ad9d3 = 1;
  g_bss_001ad821 = 1;
  g_bss_001ad83e = 1;
  g_bss_001ad85b = 1;
  g_bss_001ad878 = 1;
  g_bss_001ad895 = 1;
  g_bss_001ad8b2 = 1;
  g_bss_001ad97d = 1;
  g_bss_001ad99a = 1;
  g_bss_001ad9b7 = 1;
  g_bss_001ad9d4 = 1;
  g_bss_001adbf7 = 10;
  val_2 = 0x675;
  do {
    val = val_2 + 0x1d;
    (&g_bss_001acd7b)[val_2] = 1;
    val_2 = val;
  } while (val != 0x9be);
  g_bss_001adbc1 = 1;
  g_bss_001ad06d = 1;
  g_bss_001ad08a = 1;
  g_bss_001ad0fe = 1;
  g_bss_001ad11b = 1;
  g_bss_001ada65 = 1;
  g_bss_001ada82 = 1;
  g_bss_001adabc = 1;
  g_bss_001ada9f = 1;
  g_bss_001adad9 = 1;
  g_bss_001adaf6 = 1;
  g_bss_001adba4 = 1;
  return;
}

/******************************************************************************
 * Function : inits_fn_043ac3 (Original VA: 0x43ac3, Ghidra: FUN_00043ac3)
 * Prototype: undefined4 inits_fn_043ac3(void);
 * Address  : 0x43ac3 (Size: 240 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x043ac3
 * Callers  : 11 -> effect_roll_action_random_0250ef, effect_roll_action_random_025504, file_buff_struct_num_02ab14, scrsupp_allocate_light_new_hero_069268, scrsupp_script_could_find_hero_0694d4, setup_switch_screen_resolution, spell_update_creature_control_07231c, update_state_return_type_human_0e0b1c ...
 * Callees  : 9 -> effect_allocate_light_effect_024998, inits_told_you_so_create_043bb3, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, inits_allocate_dynamic_light_shot_0444a9, inits_allocate_dynamic_light_trap_0447fb, inits_told_you_so_create_044b13, inits_told_you_so_create_044d42 ...
 ******************************************************************************/
undefined4 inits_fn_043ac3(void)

{
  ushort arg_dx;
  undefined4 uval;
  
  uval = 0;
  if (arg_dx < 5) {
    if (arg_dx < 2) {
      if (arg_dx == 1) {
        uval = inits_allocate_light_object_043f07();
      }
    }
    else if (arg_dx < 3) {
      uval = inits_allocate_dynamic_light_shot_0442ca();
    }
    else if (arg_dx < 4) {
      uval = inits_allocate_dynamic_light_shot_0444a9();
    }
    else {
      uval = inits_told_you_so_create_044b13(0);
    }
  }
  else if (arg_dx < 6) {
    uval = inits_told_you_so_create_043bb3();
  }
  else if (arg_dx < 8) {
    if (arg_dx == 6) {
      uval = effect_allocate_light_effect_024998();
    }
  }
  else if (arg_dx < 9) {
    uval = inits_allocate_dynamic_light_trap_0447fb();
  }
  else if (0xb < arg_dx) {
    if (arg_dx < 0xd) {
      uval = inits_told_you_so_create_044d42();
    }
    else if (arg_dx == 0xd) {
      uval = inits_update_player_dungeon_044dae();
    }
  }
  return uval;
}

/******************************************************************************
 * Function : inits_told_you_so_create_043bb3 (Original VA: 0x43bb3, Ghidra: FUN_00043bb3)
 * Prototype: int inits_told_you_so_create_043bb3(void);
 * Address  : 0x43bb3 (Size: 852 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 3019
 * Purpose  : String ''Told You So' error! Cannot create creature because there ar'
 * Callers  : 17 -> entrance_find_valid_place_entrance_026b04, file_buff_struct_num_02ab14, gravyard_could_find_valid_position_039901, inits_update_player_dungeon_040832, inits_fn_043ac3, lair_process_thing_entity_04e1f2, process_players_dungeon_command_packet, prison_couldn_create_skeleton_prison_066016 ...
 * Callees  : 14 -> mapwho_process_map_subtile_050c38, person_thing_already_peter_list_063670, person_fn_063b6d, structs_allocate_thing_structure_072829, structs_update_creature_control_0728c2, structs_even_free_up_effect_07290f, structs_update_creature_control_07299d, structs_thing_already_list_072d90 ...
 ******************************************************************************/
int inits_told_you_so_create_043bb3(void)

{
  byte flag;
  short short_val;
  undefined2 uval;
  undefined4 *arg_eax;
  int val;
  int thing_ptr;
  byte *byte_ptr;
  ushort arg_dx;
  ushort arg_bx;
  int val_2;
  byte flag_2;
  undefined8 uval_2;
  undefined1 local_30;
  
  flag_2 = 0;
  val = (uint)arg_dx * 0xe6;
  short_val = structs_update_creature_control_0728c2();
  if (short_val != 0) {
    short_val = structs_allocate_thing_structure_072829();
    if (short_val != 0) {
      thing_ptr = structs_even_free_up_effect_07290f();
      uval_2 = structs_update_creature_control_07299d();
      byte_ptr = (byte *)uval_2;
      flag = *byte_ptr;
      *(undefined1 *)(thing_ptr + 0x1f) = 5; /* thing->class_id */
      *(ushort *)(thing_ptr + 100) = (ushort)flag; /* thing->ccontrol_idx */
      local_30 = (undefined1)arg_dx;
      *(undefined1 *)(thing_ptr + 0x1a) = local_30;
      *(undefined2 *)(thing_ptr + 0x1d) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
      *(undefined4 *)(thing_ptr + 0xd) = *arg_eax; /* thing->mappos.val_x */
      *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_2 * -8) =
           *(undefined2 *)(arg_eax + (uint)flag_2 * -2 + 1);
      *(undefined2 *)(thing_ptr + 0x56) = *(undefined2 *)(&g_bss_002e9182 + val);
      *(undefined2 *)(thing_ptr + 0x58) = *(undefined2 *)(&g_bss_002e9184 + val);
      *(undefined2 *)(thing_ptr + 0x5a) = *(undefined2 *)(&g_bss_002e91e9 + val);
      uval = *(undefined2 *)(&g_bss_002e91eb + val);
      *(undefined1 *)(thing_ptr + 0x20) = 0x20; /* thing->model */
      *(undefined1 *)(thing_ptr + 0x22) = 0;
      *(undefined1 *)(thing_ptr + 0x23) = 0x20;
      *(undefined1 *)(thing_ptr + 0x24) = 8;
      *(undefined2 *)(thing_ptr + 0x52) = 0; /* thing->health */
      *(undefined2 *)(thing_ptr + 0x54) = 0;
      *(undefined2 *)(thing_ptr + 0x5c) = uval;
      *(byte *)(thing_ptr + 0x25) = *(byte *)(thing_ptr + 0x25) | 8;
      *(char *)(thing_ptr + 6) = (char)arg_bx; /* thing->owner */
      uval = creature_update_creature_control_085890();
      *(undefined2 *)(byte_ptr + 0xc4) = uval;
      val_2 = (int)((ulonglong)uval_2 >> 0x20) * 0x10;
      *(undefined4 *)(byte_ptr + 0x2c1) = *(undefined4 *)(&g_data_0018b70f + val_2);
      *(undefined2 *)(byte_ptr + (uint)flag_2 * -8 + 0x2c5) =
           *(undefined2 *)(&g_data_0018b713 + (uint)flag_2 * -8 + val_2);
      update_fn_0dd2f0(0,0,2);
      draw_roll_action_random_08ccec();
      byte_ptr[0x23] = 1;
      *(undefined2 *)(thing_ptr + 0x5e) = (&g_bss_002e9114)[(uint)arg_dx * 0x73];
      *(short *)(byte_ptr + 0xc6) =
           (short)((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] *
                         (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
                  100) + (&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73];
      *(char *)(thing_ptr + 6) = (char)arg_bx; /* thing->owner */
      *(undefined4 *)(thing_ptr + 0xd) = *arg_eax; /* thing->mappos.val_x */
      *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_2 * -8) =
           *(undefined2 *)(arg_eax + (uint)flag_2 * -2 + 1);
      *(undefined4 *)(thing_ptr + 9) = g_game_turn;
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      byte_ptr[0x286] = (char)((ulonglong)g_action_random_seed % 0xd) + 0x11;
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      byte_ptr[0x287] = (byte)((ulonglong)g_action_random_seed % 7);
      if (arg_bx == g_bss_002eb542) {
        byte_ptr[0x89] = 0xff;
        byte_ptr[0x8c] = 1;
      }
      *(undefined4 *)(byte_ptr + 0x288) = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
      *(undefined2 *)(byte_ptr + (uint)flag_2 * -8 + 0x28c) =
           *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_2 * -8);
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(byte_ptr + 0x28c) = uval;
      byte_ptr[0x1d2] = 0xff;
      if ((&g_bss_002e9188)[val] != '\0') {
        *(byte *)(thing_ptr + 0x25) = *(byte *)(thing_ptr + 0x25) | 0x20;
      }
      creature_update_creature_control_082204();
      *(short *)(thing_ptr + 0x5e) =
           (short)((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] *
                         (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
                  100) + (&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73];
      structs_thing_already_list_072d90();
      mapwho_process_map_subtile_050c38();
      if (arg_bx < 6) {
        person_thing_already_peter_list_063670();
      }
      person_fn_063b6d();
      if ((int)*(char *)(thing_ptr + 6) != (uint)g_neutral_player_number) { /* thing->owner */
        *(uint *)(&g_bss_002e1431 + *(char *)(thing_ptr + 6) * 0x1508) = /* thing->owner */
             *(int *)(&g_bss_002e1431 + *(char *)(thing_ptr + 6) * 0x1508) + /* thing->owner */
             (uint)(byte)(&g_bss_002ebaf8)[(uint)byte_ptr[0x23] + (uint)*(byte *)(thing_ptr + 0x1a) * 10];
      }
      byte_ptr[0x1e8] = (&g_data_00188bf4)[(uint)arg_dx * 5];
      return thing_ptr;
    }
  }
  LbErrorLog(); /* LbErrorLog("inits.cpp", line 3019, "'Told You So' error! Cannot create creature because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : inits_allocate_light_object_043f07 (Original VA: 0x43f07, Ghidra: FUN_00043f07)
 * Prototype: int inits_allocate_light_object_043f07(void);
 * Address  : 0x43f07 (Size: 963 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 3196, 3241, 3252
 * Purpose  : String 'Cannot allocate light to object'
 * Callers  : 25 -> door_fn_022fe5, good_fn_038615, inits_fn_043ac3, inits_update_player_view_state_04845c, lair_could_create_totem_04da55, magic_update_creature_and_thing_04e85c, magic_update_creature_and_thing_04f195, magic_update_player_dungeon_04faf1 ...
 * Callees  : 9 -> mapwho_process_map_subtile_050c38, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, draw_roll_action_random_08ccec, light_already_list_0acaf8, light_attempt_set_minimum_light_0ad888, LbErrorLog ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int inits_allocate_light_object_043f07(void)

{
  undefined1 uval;
  byte flag;
  bool flag_2;
  short short_val;
  undefined4 *arg_eax;
  int val;
  int val_2;
  uint thing_ptr;
  int extraout_ECX;
  undefined1 extraout_DL;
  ushort arg_dx;
  undefined1 arg_bl;
  uint loop_i;
  byte flag_3;
  undefined4 uval_2;
  undefined2 uStack_22;
  undefined1 local_1f;
  int local_1c;
  undefined2 *local_18;
  undefined1 local_14;
  ushort local_10;
  
  flag_3 = 0;
  local_18 = (undefined2 *)(&g_bss_001acd73 + (uint)arg_dx * 0x1d);
  local_10 = arg_dx;
  local_14 = arg_bl;
  LbScreenWaitVbi();
  short_val = structs_allocate_thing_structure_072829();
  if (short_val == 0) {
    LbErrorLog(); /* LbErrorLog("inits.cpp", line 3196, "Cannot allocate light to object") */
    return 0;
  }
  local_1c = structs_even_free_up_effect_07290f();
  *(undefined1 *)(local_1c + 0x1f) = 1;
  *(undefined1 *)(local_1c + 0x1a) = extraout_DL;
  if (extraout_ECX == -1) {
    *(undefined2 *)(local_1c + 0x1d) = 0xffff;
  }
  else {
    *(short *)(local_1c + 0x1d) = (short)extraout_ECX;
  }
  val = (uint)local_10 * 0x16;
  *(undefined4 *)(local_1c + 0xd) = *arg_eax;
  *(undefined2 *)(local_1c + 0x11 + (uint)flag_3 * -8) =
       *(undefined2 *)(arg_eax + (uint)flag_3 * -2 + 1);
  *(undefined2 *)(local_1c + 0x56) = *(undefined2 *)(&g_data_0018b90f + val);
  *(undefined2 *)(local_1c + 0x58) = *(undefined2 *)(&g_data_0018b911 + val);
  *(undefined2 *)(local_1c + 0x5a) = *(undefined2 *)(&g_data_0018b90f + val);
  *(undefined2 *)(local_1c + 0x5c) = *(undefined2 *)(&g_data_0018b911 + val);
  *(undefined2 *)(local_1c + 0x5e) = *local_18;
  uval = *(undefined1 *)(local_18 + 2);
  *(undefined1 *)(local_1c + 0x23) = 0xcc;
  *(undefined1 *)(local_1c + 0x24) = 0x33;
  *(undefined1 *)(local_1c + 0x22) = 0;
  *(undefined1 *)(local_1c + 0x20) = uval;
  *(byte *)(local_1c + 0x25) = *(byte *)(local_1c + 0x25) | 8;
  flag = *(byte *)(local_18 + 4);
  *(byte *)(local_1c + 0x25) = *(byte *)(local_1c + 0x25) & 0xbf;
  *(byte *)(local_1c + 0x25) = *(byte *)(local_1c + 0x25) | (flag & 1) << 6;
  *(undefined1 *)(local_1c + 6) = local_14;
  *(undefined4 *)(local_1c + 9) = g_game_turn;
  if ((&g_data_0018b908)[(uint)*(byte *)(local_1c + 0x1a) * 0x16] == '\0') {
    uval = (&g_data_0018b917)[val];
    uval_2 = 0;
  }
  else {
    uval = (&g_data_0018b917)[val];
    uval_2 = 0xffffffff;
  }
  draw_roll_action_random_08ccec(0,uval_2,uval);
  val = local_1c;
  flag = *(byte *)((int)local_18 + 5);
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xfd;
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (flag & 1) * '\x02';
  val_2 = (uint)local_10 * 0x16;
  flag = (&g_data_0018b909)[val_2];
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xfe;
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | flag & 1;
  flag = (&g_data_0018b915)[val_2];
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xcf;
  *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (flag & 3) << 4;
  *(undefined *)(local_1c + 7) = (&g_data_0018b906)[val_2];
  if (*(short *)((int)local_18 + 9) != 0) {
    (&uStack_22)[(uint)flag_3 * -4] = *(undefined2 *)(local_1c + 0x11 + (uint)flag_3 * -8);
    local_1f = *(undefined1 *)(local_18 + 0xd);
    short_val = light_already_list_0acaf8();
    *(short *)(val + 0x62) = short_val;
    if (short_val == 0) {
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 3241, "Could not allocate number for hero door") */
    }
  }
  if (local_10 < 6) {
    if (local_10 < 3) goto LAB_00044294;
    if (3 < local_10) {
      if (local_10 == 5) {
        *(undefined1 *)(local_1c + 0x14) = 1;
        light_attempt_set_minimum_light_0ad888();
      }
      goto LAB_00044294;
    }
    val = (int)g_bss_002eb9ec;
  }
  else if (local_10 < 7) {
    val = (int)g_bss_002eb9ea;
  }
  else {
    if (local_10 < 0x2b) {
      if (local_10 == 0x21) {
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xcf;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | 0x20;
      }
      goto LAB_00044294;
    }
    if (0x2b < local_10) {
      if (local_10 == 0x31) {
        for (loop_i = 1; (int)loop_i < 0x100; loop_i = loop_i + 1) {
          flag_2 = false;
          for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6ec6]; g_thing_ptrs < thing_ptr;
              thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
            if ((*(char *)(thing_ptr + 0x1a) == '1') && (loop_i == *(byte *)(thing_ptr + 0x13))) { /* thing->anim_sprite */
              flag_2 = true;
              break;
            }
          }
          if (!flag_2) {
            *(char *)(local_1c + 0x13) = (char)loop_i;
            break;
          }
        }
        if (loop_i == 0x100) {
          LbErrorLog(); /* LbErrorLog("inits.cpp", line 3252, "'Told You So' error! Cannot create object because there are too many fucking things allocated.") */
        }
      }
      goto LAB_00044294;
    }
    val = (int)g_bss_002eb9ee;
  }
  *(int *)(local_1c + 0x13) = val;
LAB_00044294:
  structs_thing_already_list_072d90();
  mapwho_process_map_subtile_050c38();
  return local_1c;
}

/******************************************************************************
 * Function : inits_allocate_dynamic_light_shot_0442ca (Original VA: 0x442ca, Ghidra: FUN_000442ca)
 * Prototype: int inits_allocate_dynamic_light_shot_0442ca(void);
 * Address  : 0x442ca (Size: 479 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 3310, 3320
 * Purpose  : String 'Cannot allocate dynamic light to shot'
 * Callers  : 5 -> inits_fn_043ac3, magic_update_creature_and_thing_04f195, trap_activation_shot_0763d4, trap_activation_shot_076569, trap_activation_shot_07668c
 * Callees  : 8 -> mapwho_process_map_subtile_050c38, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, draw_roll_action_random_08ccec, light_already_list_0acaf8, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
int inits_allocate_dynamic_light_shot_0442ca(void)

{
  byte flag;
  undefined4 uval;
  short short_val;
  undefined4 *arg_eax;
  undefined1 extraout_CL;
  uint arg_edx;
  int extraout_EDX;
  undefined1 arg_bl;
  byte flag_2;
  undefined2 uStack_26;
  undefined1 local_23;
  int local_20;
  undefined *local_1c;
  int local_18;
  undefined1 local_14;
  
  flag_2 = 0;
  local_1c = &g_data_00188c94 + (arg_edx & 0xffff) * 0x65;
  local_14 = arg_bl;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val != 0) {
    LbScreenWaitVbi();
    local_20 = structs_even_free_up_effect_07290f();
    uval = g_game_turn;
    *(undefined1 *)(local_20 + 0x1f) = 2;
    *(undefined4 *)(local_20 + 9) = uval;
    *(undefined1 *)(local_20 + 0x1a) = extraout_CL;
    *(undefined4 *)(local_20 + 0xd) = *arg_eax;
    *(undefined2 *)(local_20 + 0x11 + (uint)flag_2 * -8) =
         *(undefined2 *)(arg_eax + (uint)flag_2 * -2 + 1);
    *(undefined2 *)(local_20 + 0x1d) = *(undefined2 *)(local_20 + 0x1b);
    *(undefined1 *)(local_20 + 6) = local_14;
    *(undefined *)(local_20 + 0x22) = local_1c[0xd];
    *(undefined *)(local_20 + 0x20) = local_1c[0xf];
    *(undefined *)(local_20 + 0x21) = local_1c[0x10];
    *(undefined *)(local_20 + 0x23) = local_1c[0x11];
    *(undefined *)(local_20 + 0x24) = local_1c[0x12];
    flag = local_1c[0x13];
    *(byte *)(local_20 + 0x25) = *(byte *)(local_20 + 0x25) & 0xf7;
    *(byte *)(local_20 + 0x25) = *(byte *)(local_20 + 0x25) | (flag & 1) << 3;
    local_18 = local_20;
    draw_roll_action_random_08ccec(0,0,2);
    flag = local_1c[6];
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xfd;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (flag & 1) * '\x02';
    flag = local_1c[8];
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xcf;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (flag & 3) << 4;
    flag = local_1c[7];
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xfe;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | flag & 1;
    *(undefined2 *)(local_18 + 0x56) = *(undefined2 *)(local_1c + 9);
    *(undefined2 *)(local_18 + 0x58) = *(undefined2 *)(local_1c + 0xb);
    *(undefined2 *)(local_18 + 0x5a) = *(undefined2 *)(local_1c + 9);
    *(undefined2 *)(local_18 + 0x5c) = *(undefined2 *)(local_1c + 0xb);
    *(undefined2 *)(local_18 + 0x14) = *(undefined2 *)(local_1c + 0x16);
    *(undefined2 *)(local_18 + 0x5e) = *(undefined2 *)(local_1c + 0x14);
    if (*(short *)(local_1c + 0x50) != 0) {
      (&uStack_26)[(uint)flag_2 * -4] = *(undefined2 *)(local_18 + 0x11 + (uint)flag_2 * -8);
      local_23 = 1;
      short_val = light_already_list_0acaf8();
      *(short *)(extraout_EDX + 0x62) = short_val;
      if (short_val == 0) {
        LbErrorLog(); /* LbErrorLog("inits.cpp", line 3310, "Cannot allocate dynamic light to shot") */
      }
    }
    mapwho_process_map_subtile_050c38();
    structs_thing_already_list_072d90();
    return local_20;
  }
  LbErrorLog(); /* LbErrorLog("inits.cpp", line 3320, "'Told You So' error! Cannot create shot because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : inits_allocate_dynamic_light_shot_0444a9 (Original VA: 0x444a9, Ghidra: FUN_000444a9)
 * Prototype: int inits_allocate_dynamic_light_shot_0444a9(void);
 * Address  : 0x444a9 (Size: 850 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 3430
 * Purpose  : String 'Cannot allocate dynamic light to shot'
 * Callers  : 24 -> angtool_process_dungeon_room_010fdf, effect_process_thing_entity_024ab9, effect_process_thing_entity_02606f, evil_update_slab_subtile_columns_028904, impset_fn_03ed80, inits_fn_043ac3, magic_update_player_dungeon_04faf1, process_players_dungeon_command_packet ...
 * Callees  : 10 -> effect_update_player_view_state_02666b, mapwho_process_map_subtile_050c38, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, draw_roll_action_random_08ccec, light_already_list_0acaf8, update_fn_0ddad0 ...
 ******************************************************************************/
int inits_allocate_dynamic_light_shot_0444a9(void)

{
  byte flag;
  byte *byte_ptr;
  char ch;
  short short_val;
  undefined4 *arg_eax;
  undefined1 extraout_CL;
  ushort arg_dx;
  int extraout_EDX;
  int val;
  undefined4 *word_ptr;
  byte flag_2;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined2 local_38;
  byte local_36;
  byte local_35;
  undefined4 local_2e;
  undefined2 uStack_2a;
  undefined1 local_27;
  int local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  ushort local_14;
  
  flag_2 = 0;
  word_ptr = (undefined4 *)&local_38;
  local_24 = (uint)arg_dx * 0x4e;
  local_20 = &g_data_00189934 + local_24;
  uStack_3c = 0x444d3;
  local_14 = arg_dx;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val != 0) {
    uStack_3c = 0x444e3;
    ch = effect_update_player_view_state_02666b();
    if (ch != '\0') {
      uStack_3c = 0x444fa;
      LbScreenWaitVbi();
      uStack_3c = 0x44501;
      local_1c = structs_even_free_up_effect_07290f();
      *(undefined1 *)(local_1c + 0x1f) = 3;
      *(undefined1 *)(local_1c + 0x1a) = (undefined1)local_14;
      *(undefined4 *)(local_1c + 0xd) = *arg_eax;
      *(undefined2 *)(local_1c + 0x11 + (uint)flag_2 * -8) =
           *(undefined2 *)(arg_eax + (uint)flag_2 * -2 + 1);
      *(undefined2 *)(local_1c + 2) = 0;
      *(undefined2 *)(local_1c + 0x56) = 1;
      *(undefined2 *)(local_1c + 0x58) = 1;
      *(undefined2 *)(local_1c + 0x5a) = 1;
      *(undefined2 *)(local_1c + 0x5c) = 1;
      *(undefined2 *)(local_1c + 0x1d) = *(undefined2 *)(local_1c + 0x1b);
      *(undefined1 *)(local_1c + 6) = extraout_CL;
      local_18 = local_1c;
      if (*(short *)(local_20 + 7) == -1) {
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | 1;
      }
      else {
        uStack_3c = (uint)*local_20;
        uStack_40 = 0;
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        word_ptr = &uStack_44;
        uStack_44 = 0;
        g_action_random_seed = (g_action_random_seed >> 0xd | g_action_random_seed * 0x80000) * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        draw_roll_action_random_08ccec();
        flag = (&g_data_00189947)[local_24];
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xfd;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (flag & 1) * '\x02';
        flag = (&g_data_00189948)[local_24];
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xcf;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (flag & 3) << 4;
        flag = (&g_data_00189941)[local_24];
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) & 0xbf;
        *(byte *)(local_1c + 0x4f) = *(byte *)(local_1c + 0x4f) | (flag & 1) << 6;
      }
      val = (uint)local_14 * 0x4e;
      *(undefined *)(local_18 + 0x20) = (&g_data_0018994c)[val];
      *(undefined *)(local_18 + 0x23) = (&g_data_0018994e)[val];
      *(undefined *)(local_18 + 0x24) = (&g_data_00189950)[val];
      *(byte *)(local_18 + 0x25) = *(byte *)(local_18 + 0x25) | 8;
      flag = (&g_data_0018994a)[val];
      *(byte *)(local_18 + 0x25) = *(byte *)(local_18 + 0x25) & 0xef;
      *(byte *)(local_18 + 0x25) = *(byte *)(local_18 + 0x25) | (flag & 1) << 4;
      *(undefined4 *)(local_18 + 9) = g_game_turn;
      if (*(short *)(&g_data_00189937 + val) < 1) {
        *(undefined4 *)((int)word_ptr + -4) = 0x446de;
        short_val = update_fn_0ddad0();
      }
      else {
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        short_val = *(short *)(&g_data_00189937 + val) +
                (short)(g_action_random_seed %
                       (((int)*(short *)(&g_data_00189939 + val) -
                        (int)*(short *)(&g_data_00189937 + val)) + 1U));
      }
      byte_ptr = local_20;
      *(short *)(local_18 + 0x5e) = short_val;
      if (local_20[0x17] == 0) {
        *(undefined1 *)(local_18 + 0x4a) = 0;
      }
      else {
        *(undefined2 *)(local_18 + 0x4b) = *(undefined2 *)(local_20 + 9);
        *(undefined2 *)(local_18 + 0x4d) = *(undefined2 *)(local_20 + 0xb);
        if (local_20[0x17] == 2) {
          *(char *)(local_18 + 0x4a) =
               (char)((int)((uint)*(ushort *)(local_20 + 0xb) - (uint)*(ushort *)(local_20 + 9)) /
                     (int)*(short *)(local_18 + 0x5e)) * '\x02';
          *(byte *)(local_18 + 0x50) = *(byte *)(local_18 + 0x50) | 2;
        }
        else {
          *(char *)(local_18 + 0x4a) =
               (char)((int)((uint)*(ushort *)(local_20 + 0xb) - (uint)*(ushort *)(local_20 + 9)) /
                     (int)*(short *)(local_18 + 0x5e));
          *(byte *)(local_18 + 0x50) = *(byte *)(local_18 + 0x50) & 0xfd;
        }
        *(undefined2 *)(local_18 + 0x46) = *(undefined2 *)(local_20 + 9);
      }
      if (*(short *)(local_20 + 0x39) != 0) {
        local_2e = *(undefined4 *)(local_18 + 0xd);
        (&uStack_2a)[(uint)flag_2 * -4] = *(undefined2 *)(local_18 + 0x11 + (uint)flag_2 * -8);
        local_38 = *(undefined2 *)(byte_ptr + 0x39);
        local_36 = local_20[0x3b];
        local_35 = local_20[0x3c];
        local_27 = 1;
        *(undefined4 *)((int)word_ptr + -4) = 0x447ba;
        short_val = light_already_list_0acaf8();
        *(short *)(extraout_EDX + 0x62) = short_val;
        if (short_val == 0) {
          *(undefined4 *)((int)word_ptr + -4) = 0x447d7;
          LbErrorLog(); /* LbErrorLog("inits.cpp", line 3430, "Cannot allocate dynamic light to shot") */
        }
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x447e4;
      structs_thing_already_list_072d90();
      *(undefined4 *)((int)word_ptr + -4) = 0x447ec;
      mapwho_process_map_subtile_050c38();
      return local_18;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : inits_allocate_dynamic_light_trap_0447fb (Original VA: 0x447fb, Ghidra: FUN_000447fb)
 * Prototype: int inits_allocate_dynamic_light_trap_0447fb(void);
 * Address  : 0x447fb (Size: 425 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 3508, 3517
 * Purpose  : String 'Cannot allocate dynamic light to trap'
 * Callers  : 3 -> inits_fn_043ac3, input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 8 -> mapwho_process_map_subtile_050c38, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, draw_roll_action_random_08ccec, light_already_list_0acaf8, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
int inits_allocate_dynamic_light_trap_0447fb(void)

{
  byte flag;
  undefined2 uval;
  short short_val;
  undefined4 *arg_eax;
  undefined1 extraout_CL;
  uint arg_edx;
  int extraout_EDX;
  undefined1 arg_bl;
  byte flag_2;
  undefined4 uval_2;
  undefined2 uStack_22;
  undefined1 local_1f;
  undefined2 *local_1c;
  int local_18;
  undefined1 local_14;
  
  flag_2 = 0;
  local_1c = (undefined2 *)(&g_data_0018fd09 + (arg_edx & 0xffff) * 0x36);
  local_14 = arg_bl;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val != 0) {
    LbScreenWaitVbi();
    local_18 = structs_even_free_up_effect_07290f();
    *(undefined1 *)(local_18 + 0x1f) = 8;
    *(undefined1 *)(local_18 + 0x1a) = extraout_CL;
    *(undefined4 *)(local_18 + 0xd) = *arg_eax;
    *(undefined2 *)(local_18 + 0x11 + (uint)flag_2 * -8) =
         *(undefined2 *)(arg_eax + (uint)flag_2 * -2 + 1);
    *(undefined2 *)(local_18 + 0x1d) = *(undefined2 *)(local_18 + 0x1b);
    *(undefined1 *)(local_18 + 6) = local_14;
    *(undefined2 *)(local_18 + 2) = 0;
    if (*(char *)((int)local_1c + 0x13) == '\0') {
      uval_2 = 0;
    }
    else {
      uval_2 = 0xffffffff;
    }
    draw_roll_action_random_08ccec((int)*(char *)(local_1c + 6),uval_2,2);
    flag = *(byte *)((int)local_1c + 0x11);
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xfd;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (flag & 1) * '\x02';
    flag = *(byte *)(local_1c + 6);
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xbf;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | (flag & 1) << 6;
    *(undefined2 *)(local_18 + 0x56) = local_1c[10];
    *(undefined2 *)(local_18 + 0x58) = local_1c[0xb];
    *(undefined2 *)(local_18 + 0x5a) = local_1c[10];
    *(undefined2 *)(local_18 + 0x5c) = local_1c[0xb];
    *(undefined4 *)(local_18 + 9) = g_game_turn;
    uval = *local_1c;
    *(undefined1 *)(local_18 + 0x13) = 0;
    *(undefined2 *)(local_18 + 0x5e) = uval;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) & 0xcf;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | 0x20;
    *(undefined4 *)(local_18 + 0x14) = g_game_turn;
    if (local_1c[0xe] != 0) {
      (&uStack_22)[(uint)flag_2 * -4] = *(undefined2 *)(local_18 + 0x11 + (uint)flag_2 * -8);
      local_1f = 1;
      short_val = light_already_list_0acaf8();
      *(short *)(extraout_EDX + 0x62) = short_val;
      if (short_val == 0) {
        LbErrorLog(); /* LbErrorLog("inits.cpp", line 3508, "Cannot allocate dynamic light to trap") */
      }
    }
    structs_thing_already_list_072d90();
    mapwho_process_map_subtile_050c38();
    return local_18;
  }
  LbErrorLog(); /* LbErrorLog("inits.cpp", line 3517, "'Told You So' error! Cannot create trap because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : inits_told_you_so_create_0449a4 (Original VA: 0x449a4, Ghidra: FUN_000449a4)
 * Prototype: int inits_told_you_so_create_0449a4(undefined1 param_1);
 * Address  : 0x449a4 (Size: 367 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 3568
 * Purpose  : String ''Told You So' error! Cannot create door because there are to'
 * Callers  : 2 -> file_buff_struct_num_02ab14, packet_activate_dungeon_special_or_spell
 * Callees  : 7 -> mapwho_process_map_subtile_050c38, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, ceiling_process_map_subtile_07c590, slab_attempt_dump_an_animating_0d8b7c, LbErrorLog
 ******************************************************************************/
int inits_told_you_so_create_0449a4(undefined1 param_1)

{
  short short_val;
  ushort *arg_eax;
  ushort arg_cx;
  int extraout_ECX;
  undefined1 extraout_DL;
  byte arg_bl;
  byte flag;
  undefined4 local_20;
  undefined2 local_1c [2];
  int local_18;
  ushort local_14;
  byte local_10;
  
  flag = 0;
  local_14 = arg_cx;
  local_10 = arg_bl;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val == 0) {
    LbErrorLog(); /* LbErrorLog("inits.cpp", line 3568, "'Told You So' error! Cannot create door because there are too many fucking things allocated.") */
    local_18 = 0;
  }
  else {
    local_18 = structs_even_free_up_effect_07290f();
    *(undefined1 *)(local_18 + 0x1f) = 9;
    *(undefined1 *)(local_18 + 0x1a) = extraout_DL;
    local_1c[0] = 0x180;
    local_20 = CONCAT22((short)((ulonglong)(uint)((int)(uint)arg_eax[1] >> 8) / 3) * 0x300 + 0x180,
                        (short)((ulonglong)(uint)((int)(uint)*arg_eax >> 8) / 3) * 0x300 + 0x180);
    *(undefined4 *)(local_18 + 0xd) = local_20;
    *(undefined2 *)(local_18 + 0x11 + (uint)flag * -8) = local_1c[(uint)flag * -4];
    *(undefined2 *)(local_18 + 2) = 0;
    *(undefined1 *)(local_18 + 7) = 2;
    *(byte *)(local_18 + 0x4f) = *(byte *)(local_18 + 0x4f) | 1;
    *(undefined2 *)(local_18 + 0x1d) = *(undefined2 *)(local_18 + 0x1b);
    *(undefined1 *)(local_18 + 6) = (undefined1)local_14;
    *(ushort *)(local_18 + 0x13) = (ushort)local_10;
    *(undefined4 *)(local_18 + 9) = g_game_turn;
    *(undefined2 *)(local_18 + 0x5e) = *(undefined2 *)(extraout_ECX + 2);
    *(undefined1 *)(local_18 + 0x18) = param_1;
    structs_thing_already_list_072d90();
    mapwho_process_map_subtile_050c38();
    slab_attempt_dump_an_animating_0d8b7c((undefined1)local_14);
    ceiling_process_map_subtile_07c590();
    if ((uint)local_14 != (uint)g_neutral_player_number) {
      *(short *)(&g_bss_002e0ec4 + (uint)local_14 * 0x1508) =
           *(short *)(&g_bss_002e0ec4 + (uint)local_14 * 0x1508) + 1;
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : inits_told_you_so_create_044b13 (Original VA: 0x44b13, Ghidra: FUN_00044b13)
 * Prototype: int inits_told_you_so_create_044b13(undefined1 param_1);
 * Address  : 0x44b13 (Size: 403 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * Purpose  : String ''Told You So' error! Cannot create dead creature because the'
 * Callers  : 4 -> inits_fn_043ac3, creature_could_create_dead_thing_0808b8, room_bloody_hell_bodies_reposition_0cee7c, update_process_map_subtile_0e2a14
 * Callees  : 9 -> mapwho_process_map_subtile_050c38, sound_roll_unsynced_random_06edb9, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, draw_roll_action_random_08ccec, move_process_map_subtile_0b28e8, update_fn_0dd2f0 ...
 ******************************************************************************/
int inits_told_you_so_create_044b13(undefined1 param_1)

{
  short short_val;
  undefined2 uval;
  undefined4 *arg_eax;
  int thing_ptr;
  undefined1 extraout_CL;
  ushort arg_dx;
  short arg_bx;
  byte flag;
  undefined1 local_18;
  
  flag = 0;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val == 0) {
    LbErrorLog();
    thing_ptr = 0;
  }
  else {
    thing_ptr = structs_even_free_up_effect_07290f();
    *(undefined1 *)(thing_ptr + 0x1f) = 4; /* thing->class_id */
    local_18 = (undefined1)arg_dx;
    *(undefined1 *)(thing_ptr + 0x1a) = local_18;
    *(undefined2 *)(thing_ptr + 0x1d) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    *(undefined1 *)(thing_ptr + 0x13) = param_1; /* thing->anim_sprite */
    *(undefined1 *)(thing_ptr + 6) = extraout_CL; /* thing->owner */
    *(undefined2 *)(arg_eax + 1) = 0;
    *(undefined4 *)(thing_ptr + 0xd) = *arg_eax; /* thing->mappos.val_x */
    *(undefined2 *)(thing_ptr + 0x11 + (uint)flag * -8) =
         *(undefined2 *)(arg_eax + (uint)flag * -2 + 1);
    uval = move_process_map_subtile_0b28e8();
    *(undefined2 *)(thing_ptr + 0x56) = 0;
    *(undefined2 *)(thing_ptr + 0x58) = 0;
    *(undefined2 *)(thing_ptr + 0x5a) = 0;
    *(undefined2 *)(thing_ptr + 0x5c) = 0;
    *(undefined1 *)(thing_ptr + 0x20) = 0x10; /* thing->model */
    *(undefined1 *)(thing_ptr + 0x23) = 0xcc;
    *(undefined1 *)(thing_ptr + 0x24) = 0x33;
    *(undefined1 *)(thing_ptr + 0x22) = 0;
    *(undefined2 *)(thing_ptr + 0x11) = uval;
    *(byte *)(thing_ptr + 0x25) = *(byte *)(thing_ptr + 0x25) | 8;
    *(undefined4 *)(thing_ptr + 9) = g_game_turn;
    if ((&g_data_0018b70d)[(uint)arg_dx * 0x10] != '\0') {
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 0x30; /* thing->render_flags */
    }
    structs_thing_already_list_072d90();
    mapwho_process_map_subtile_050c38();
    if (arg_bx == 2) {
      update_fn_0dd2f0(0,0,2);
      draw_roll_action_random_08ccec();
      *(undefined1 *)(thing_ptr + 7) = 2;
    }
    else {
      *(undefined1 *)(thing_ptr + 7) = 1;
      update_fn_0dd2f0(0,0,2);
      draw_roll_action_random_08ccec();
      short_val = update_fn_0ddad0();
      *(short *)(thing_ptr + 0x5e) = short_val * 3;
      sound_roll_unsynced_random_06edb9();
    }
    *(short *)(thing_ptr + 0x46) =
         (short)((ulonglong)((uint)*(byte *)(thing_ptr + 0x13) * 300) / 0x14) + 300; /* thing->anim_sprite */
  }
  return thing_ptr;
}

/******************************************************************************
 * Function : inits_told_you_so_create_044ca6 (Original VA: 0x44ca6, Ghidra: FUN_00044ca6)
 * Prototype: int inits_told_you_so_create_044ca6(int param_1);
 * Address  : 0x44ca6 (Size: 156 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * Purpose  : String ''Told You So' error! Cannot create effect generator because '
 * Callers  : 2 -> file_buff_struct_num_02ab14, slab_illegal_animating_slab_number_0d8cdc
 * Callees  : 4 -> mapwho_process_map_subtile_050c38, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90
 ******************************************************************************/
int inits_told_you_so_create_044ca6(int param_1)

{
  undefined4 uval;
  short short_val;
  int thing_ptr;
  undefined4 *arg_eax;
  undefined1 arg_cl;
  undefined1 extraout_CL;
  byte flag;
  undefined6 uval_2;
  
  flag = 0;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val == 0) {
    LbErrorLog();
    thing_ptr = 0;
  }
  else {
    uval_2 = structs_even_free_up_effect_07290f();
    thing_ptr = (int)uval_2;
    *(undefined1 *)(thing_ptr + 0x1f) = 7; /* thing->class_id */
    *(undefined1 *)(thing_ptr + 0x1a) = extraout_CL;
    if (param_1 == -1) {
      *(undefined2 *)(thing_ptr + 0x1d) = 0xffff;
    }
    else {
      *(short *)(thing_ptr + 0x1d) = (short)param_1;
    }
    *(short *)(thing_ptr + 0x13) = (short)((uint6)uval_2 >> 0x20); /* thing->anim_sprite */
    *(undefined1 *)(thing_ptr + 6) = arg_cl; /* thing->owner */
    *(undefined4 *)(thing_ptr + 0xd) = *arg_eax; /* thing->mappos.val_x */
    *(undefined2 *)(thing_ptr + 0x11 + (uint)flag * -8) =
         *(undefined2 *)(arg_eax + (uint)flag * -2 + 1);
    uval = g_game_turn;
    *(undefined2 *)(thing_ptr + 0x5e) = 0xffff;
    *(undefined4 *)(thing_ptr + 9) = uval;
    *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 1; /* thing->render_flags */
    structs_thing_already_list_072d90();
    mapwho_process_map_subtile_050c38();
  }
  return thing_ptr;
}

/******************************************************************************
 * Function : inits_told_you_so_create_044d42 (Original VA: 0x44d42, Ghidra: FUN_00044d42)
 * Prototype: int inits_told_you_so_create_044d42(void);
 * Address  : 0x44d42 (Size: 108 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 3706
 * Purpose  : String ''Told You So' error! Cannot create ambient sound because the'
 * Callers  : 2 -> inits_could_create_ambient_sound_0404f7, inits_fn_043ac3
 * Callees  : 4 -> structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90, LbErrorLog
 ******************************************************************************/
int inits_told_you_so_create_044d42(void)

{
  short short_val;
  undefined4 *arg_eax;
  int thing_ptr;
  undefined1 extraout_CL;
  undefined1 extraout_DL;
  byte flag;
  
  flag = 0;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val != 0) {
    thing_ptr = structs_even_free_up_effect_07290f();
    *(undefined1 *)(thing_ptr + 0x1f) = 0xc; /* thing->class_id */
    *(undefined1 *)(thing_ptr + 0x1a) = extraout_CL;
    *(undefined2 *)(thing_ptr + 0x1d) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    *(undefined4 *)(thing_ptr + 0xd) = *arg_eax; /* thing->mappos.val_x */
    *(undefined2 *)(thing_ptr + 0x11 + (uint)flag * -8) =
         *(undefined2 *)(arg_eax + (uint)flag * -2 + 1);
    *(undefined1 *)(thing_ptr + 6) = extraout_DL; /* thing->owner */
    *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 1; /* thing->render_flags */
    structs_thing_already_list_072d90();
    return thing_ptr;
  }
  LbErrorLog(); /* LbErrorLog("inits.cpp", line 3706, "'Told You So' error! Cannot create ambient sound because there are too many fucking things allocated.") */
  return 0;
}

/******************************************************************************
 * Function : inits_update_player_dungeon_044dae (Original VA: 0x44dae, Ghidra: FUN_00044dae)
 * Prototype: int inits_update_player_dungeon_044dae(void);
 * Address  : 0x44dae (Size: 193 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> inits_fn_043ac3, magic_update_slab_subtile_columns_04ee2c, update_update_slab_subtile_columns_0df760
 * Callees  : 4 -> mapwho_process_map_subtile_050c38, structs_allocate_thing_structure_072829, structs_even_free_up_effect_07290f, structs_thing_already_list_072d90
 ******************************************************************************/
int inits_update_player_dungeon_044dae(void)

{
  short short_val;
  int thing_ptr;
  undefined4 *extraout_ECX;
  undefined1 arg_dl;
  ushort arg_bx;
  byte flag;
  undefined1 local_18;
  
  flag = 0;
  short_val = structs_allocate_thing_structure_072829();
  if (short_val != 0) {
    thing_ptr = structs_even_free_up_effect_07290f();
    *(undefined1 *)(thing_ptr + 0x1f) = 0xd; /* thing->class_id */
    *(undefined2 *)(thing_ptr + 0x1d) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    *(undefined1 *)(thing_ptr + 0x1a) = 0;
    local_18 = (undefined1)arg_bx;
    *(undefined4 *)(thing_ptr + 0xd) = *extraout_ECX; /* thing->mappos.val_x */
    *(undefined2 *)(thing_ptr + 0x11 + (uint)flag * -8) =
         *(undefined2 *)(extraout_ECX + (uint)flag * -2 + 1);
    *(undefined1 *)(thing_ptr + 6) = local_18; /* thing->owner */
    *(undefined4 *)(thing_ptr + 9) = g_game_turn;
    *(undefined2 *)(thing_ptr + 0x15) = g_bss_002eb049;
    *(undefined1 *)(thing_ptr + 0x13) = *(undefined1 *)((int)extraout_ECX + 1); /* thing->anim_sprite */
    *(undefined1 *)(thing_ptr + 0x14) = *(undefined1 *)((int)extraout_ECX + 3);
    *(undefined1 *)(thing_ptr + 0x17) = arg_dl;
    *(undefined2 *)(thing_ptr + 0x5e) = g_bss_002eb049;
    if ((uint)arg_bx != (uint)g_neutral_player_number) {
      *(uint *)(&g_bss_002e1429 + (uint)arg_bx * 0x1508) = (uint)*(ushort *)(thing_ptr + 0x15);
    }
    structs_thing_already_list_072d90();
    mapwho_process_map_subtile_050c38();
    return thing_ptr;
  }
  return 0;
}

/******************************************************************************
 * Function : inits_fn_044ead (Original VA: 0x44ead, Ghidra: FUN_00044ead)
 * Prototype: undefined4 inits_fn_044ead(void);
 * Address  : 0x44ead (Size: 9 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x044ead
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 inits_fn_044ead(void)

{
  return 0;
}

/******************************************************************************
 * Function : inits_update_creature_and_thing_044eb6 (Original VA: 0x44eb6, Ghidra: FUN_00044eb6)
 * Prototype: void inits_update_creature_and_thing_044eb6(void);
 * Address  : 0x44eb6 (Size: 125 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> file_update_player_dungeon_02c833, file_update_player_dungeon_02ca74, setup_verify_cdrom_installation
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_update_creature_and_thing_044eb6(void)

{
  undefined4 *thing_ptr;
  undefined *word_ptr;
  undefined4 *word_ptr_2;
  int val;
  
  word_ptr = &g_bss_00233a03;
  thing_ptr = &g_thing_ptrs;
  val = 0;
  do {
    val = val + 1;
    *thing_ptr = word_ptr;
    word_ptr = word_ptr + 0x6b;
    thing_ptr = thing_ptr + 1;
  } while (val < 0x800);
  g_bss_001b09fc = &g_bss_00269203;
  word_ptr = &g_bss_00203203;
  thing_ptr = &g_creature_ctrl_ptrs;
  val = 0;
  do {
    val = val + 1;
    *thing_ptr = word_ptr;
    word_ptr = word_ptr + 0x308;
    thing_ptr = thing_ptr + 1;
  } while (val < 0x100);
  g_bss_001b0e00 = &g_bss_00233a03;
  word_ptr_2 = &g_bss_0019e973;
  thing_ptr = &g_bss_001b0e04;
  val = 0;
  do {
    val = val + 1;
    *thing_ptr = word_ptr_2;
    word_ptr_2 = word_ptr_2 + 6;
    thing_ptr = thing_ptr + 1;
  } while (val < 0x800);
  g_bss_001b2e04 = &g_bss_001aa973;
  return;
}

/******************************************************************************
 * Function : inits_roll_action_random_044f33 (Original VA: 0x44f33, Ghidra: FUN_00044f33)
 * Prototype: void inits_roll_action_random_044f33(void);
 * Address  : 0x44f33 (Size: 365 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> update_illegal_effect_element_bounce_0e26dc
 * Callees  : 3 -> jtyedit_fn_04c2eb, draw_roll_action_random_08ccec, update_fn_0ddad0
 ******************************************************************************/
void inits_roll_action_random_044f33(void)

{
  byte flag;
  ushort uval;
  ushort uval_2;
  ushort uval_3;
  undefined2 uval_4;
  undefined1 uval_5;
  short short_val;
  int thing;
  int val;
  uint rand_seed;
  int arg_edx;
  int val_2;
  
  val = arg_edx * 0x4e;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  uval = *(ushort *)(&g_data_00189942 + val);
  uval_2 = *(ushort *)(&g_data_00189944 + val);
  uval_3 = *(ushort *)(&g_data_00189942 + val);
  g_action_random_seed = rand_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  uval_4 = *(undefined2 *)(&g_data_0018993f + val);
  *(char *)(thing + 0x1a) = (char)arg_edx;
  val_2 = val;
  draw_roll_action_random_08ccec((int)(char)(&g_data_00189941)[val],0,2,
               (uint)uval_3 + rand_seed % (((uint)uval_2 - (uint)uval) + 1),val,uval_4);
  flag = (&g_data_00189947)[val_2];
  *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) & 0xfd; /* thing->render_flags */
  *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) | (flag & 1) * '\x02'; /* thing->render_flags */
  flag = (&g_data_00189948)[val_2];
  *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) & 0xcf; /* thing->render_flags */
  *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) | (flag & 3) << 4; /* thing->render_flags */
  *(undefined *)(thing + 0x20) = (&g_data_0018994c)[val_2]; /* thing->model */
  *(undefined *)(thing + 0x23) = (&g_data_0018994e)[val_2];
  *(undefined *)(thing + 0x24) = (&g_data_00189950)[val_2];
  if (*(short *)(&g_data_00189937 + val) < 1) {
    short_val = update_fn_0ddad0();
  }
  else {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    short_val = *(short *)(&g_data_00189937 + val) +
            (short)(g_action_random_seed %
                   (((int)*(short *)(&g_data_00189939 + val) - (int)*(short *)(&g_data_00189937 + val)
                    ) + 1U));
  }
  *(short *)(thing + 0x5e) = short_val;
  uval_5 = jtyedit_fn_04c2eb();
  *(undefined1 *)(thing + 0x49) = uval_5;
  return;
}

/******************************************************************************
 * Function : inits_fn_0450a0 (Original VA: 0x450a0, Ghidra: FUN_000450a0)
 * Prototype: void inits_fn_0450a0(void);
 * Address  : 0x450a0 (Size: 131 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x0450a0
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 1 -> inits_fn_045123
 ******************************************************************************/
void inits_fn_0450a0(void)

{
  short short_val;
  short short_val_2;
  undefined4 *word_ptr;
  int val;
  short local_28;
  short local_24;
  undefined1 local_20;
  undefined1 local_1c;
  
  g_bss_002ee9c1._1_1_ = 0;
  g_bss_002ee9c1._0_1_ = 0;
  g_bss_002ee9c1._2_2_ = 0;
  val = 1;
  word_ptr = &g_bss_002ee9c5;
  short_val = -1;
  short_val_2 = -1;
  do {
    local_20 = (undefined1)short_val;
    *(undefined1 *)((int)word_ptr + 1) = local_20;
    local_1c = (undefined1)short_val_2;
    *(undefined1 *)word_ptr = local_1c;
    *(short *)((int)word_ptr + 2) = short_val + short_val_2 * 0x100;
    inits_fn_045123();
    val = val + 1;
    word_ptr = word_ptr + 1;
    short_val = local_28;
    short_val_2 = local_24;
  } while (val < 0x9c4);
  return;
}

/******************************************************************************
 * Function : inits_fn_045123 (Original VA: 0x45123, Ghidra: FUN_00045123)
 * Prototype: void inits_fn_045123(void);
 * Address  : 0x45123 (Size: 117 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x045123
 * Callers  : 1 -> inits_fn_0450a0
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
void inits_fn_045123(void)

{
  int arg_eax;
  int *arg_ecx;
  int *extraout_ECX;
  int arg_edx;
  int val;
  int *arg_ebx;
  longlong val_2;
  
  if ((arg_eax < 0) && (arg_edx + -1 == arg_eax)) {
    val = arg_edx + -2;
    *arg_ebx = arg_eax + -1;
    goto LAB_00045162;
  }
  if (arg_eax == arg_edx) {
    *arg_ecx = arg_edx;
    if (-1 < arg_edx) {
      *arg_ebx = arg_edx + -1;
      return;
    }
    *arg_ebx = arg_edx + 1;
    return;
  }
  if (arg_eax == -arg_edx) {
    *arg_ebx = -arg_edx;
    if (-1 < arg_edx) {
LAB_00045167:
      val = arg_edx + -1;
      goto LAB_00045162;
    }
  }
  else {
    val = bflib_system_io_fn_0e69fc();
    val_2 = bflib_system_io_fn_0e69fc();
    arg_edx = (int)((ulonglong)val_2 >> 0x20);
    if (val <= (int)val_2) {
      *extraout_ECX = arg_edx;
      if (-1 < val_2) {
        *arg_ebx = arg_eax + -1;
        return;
      }
      *arg_ebx = arg_eax + 1;
      return;
    }
    *arg_ebx = arg_eax;
    arg_ecx = extraout_ECX;
    if (arg_eax < 0) goto LAB_00045167;
  }
  val = arg_edx + 1;
LAB_00045162:
  *arg_ecx = val;
  return;
}

/******************************************************************************
 * Function : inits_couldn_get_creature_score_045198 (Original VA: 0x45198, Ghidra: FUN_00045198)
 * Prototype: void inits_couldn_get_creature_score_045198(void);
 * Address  : 0x45198 (Size: 508 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 4116, 4144, 4160
 * Purpose  : String 'COULDN'T GET A CREATURE SCORE (%d)'
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
void inits_couldn_get_creature_score_045198(void)

{
  ulonglong uval;
  undefined *word_ptr;
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  uint uval_2;
  uint uval_3;
  undefined *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  local_20 = 0;
  word_ptr = &g_bss_002e910d;
  uval_3 = 0;
  do {
    uval_2 = (uint)(byte)word_ptr[0xb] + ((uint)(byte)word_ptr[0xb] * 0x13b) / 100 +
            (uint)(byte)word_ptr[0xd] + ((uint)(byte)word_ptr[0xd] * 0x13b) / 100 +
            (uint)(byte)word_ptr[0xf] + ((uint)(byte)word_ptr[0xf] * 0x13b) / 100 +
            (uint)(byte)word_ptr[0xc] + ((uint)(byte)word_ptr[0xc] * 0x13b) / 100 +
            (int)*(short *)(word_ptr + 7) + (*(short *)(word_ptr + 7) * 0x13b) / 100;
    if (((uval_2 == 0) && (uval_3 != 0)) && (uval_3 != 0x1f)) {
      dk_sprintf(&g_log_sprintf_buf,s_COULDN_T_GET_A_CREATURE_SCORE____00165333,uval_3);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4116, g_log_buf) */
      word_ptr = extraout_ECX;
    }
    else if (local_20 < uval_2) {
      local_20 = uval_2;
    }
    uval_3 = uval_3 + 1;
    word_ptr = word_ptr + 0xe6;
  } while (uval_3 < 0x20);
  if (local_20 == 0) {
    LbErrorLog(); /* LbErrorLog("inits.cpp", line 4144, g_log_buf) */
  }
  else {
    uval_3 = 0;
    local_2c = &g_bss_002e910d;
    local_28 = 0;
    do {
      uval_2 = 0;
      local_24 = local_28;
      word_ptr = local_2c;
      do {
        uval = (ulonglong)
                (((uint)(byte)word_ptr[0xb] + ((byte)word_ptr[0xb] * uval_2 * 0x23) / 100 +
                  (uint)(byte)word_ptr[0xd] + ((byte)word_ptr[0xd] * uval_2 * 0x23) / 100 +
                  (uint)(byte)word_ptr[0xf] + ((byte)word_ptr[0xf] * uval_2 * 0x23) / 100 +
                  (uint)(byte)word_ptr[0xc] + ((byte)word_ptr[0xc] * uval_2 * 0x23) / 100 +
                  (int)*(short *)(word_ptr + 7) + ((int)*(short *)(word_ptr + 7) * uval_2 * 0x23) / 100)
                * 200) / (ulonglong)local_20;
        (&g_bss_002ebaf8)[local_24] = (char)uval;
        if ((((int)uval == 0) && (uval_3 != 0)) && (uval_3 != 0x1f)) {
          dk_sprintf(&g_log_sprintf_buf,s_COULDN_T_GET_A_CREATURE_SCORE____00165360,uval_3,uval_2);
          LbErrorLog(); /* LbErrorLog("inits.cpp", line 4160, "CREATURES HAVE NO SCORE") */
          word_ptr = extraout_ECX_00;
        }
        uval_2 = uval_2 + 1;
        local_24 = local_24 + 1;
      } while (uval_2 < 10);
      local_28 = local_28 + 10;
      uval_3 = uval_3 + 1;
      local_2c = local_2c + 0xe6;
    } while (uval_3 < 0x20);
  }
  return;
}

/******************************************************************************
 * Function : inits_fn_045394 (Original VA: 0x45394, Ghidra: FUN_00045394)
 * Prototype: void inits_fn_045394(void);
 * Address  : 0x45394 (Size: 73 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x045394
 * Callers  : 2 -> inits_process_thing_entity_0453dd, person_fn_064b77
 * Callees  : 3 -> person_fn_063b6d, room_update_creature_control_0cb33c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
void inits_fn_045394(void)

{
  short short_val;
  int arg_eax;
  int val;
  
  if (((((int)*(char *)(arg_eax + 6) != (uint)g_neutral_player_number) && (val = room_update_slab_subtile_columns_0d0f50(), val != 0))
      && ((short_val = *(short *)(val + 10), short_val == 4 || ((short_val == 0x10 || (short_val == 5)))))) &&
     (short_val = room_update_creature_control_0cb33c(), short_val != 0)) {
    return;
  }
  person_fn_063b6d();
  return;
}

/******************************************************************************
 * Function : inits_process_thing_entity_0453dd (Original VA: 0x453dd, Ghidra: FUN_000453dd)
 * Prototype: void inits_process_thing_entity_0453dd(void);
 * Address  : 0x453dd (Size: 37 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_update_player_dungeon_040832
 * Callees  : 1 -> inits_fn_045394
 ******************************************************************************/
void inits_process_thing_entity_0453dd(void)

{
  int extraout_EDX;
  uint uval;
  
  uval = g_bss_002e6eb6;
  while (g_thing_ptrs < (&g_thing_ptrs)[uval]) {
    inits_fn_045394();
    uval = (uint)*(ushort *)(extraout_EDX + 0x67);
  }
  return;
}

/******************************************************************************
 * Function : inits_process_map_subtile_045402 (Original VA: 0x45402, Ghidra: FUN_00045402)
 * Prototype: void inits_process_map_subtile_045402(void);
 * Address  : 0x45402 (Size: 290 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> file_update_player_dungeon_02ca74
 * Callees  : 0 -> 
 ******************************************************************************/
void inits_process_map_subtile_045402(void)

{
  byte flag;
  uint arg_eax;
  int val;
  int val_2;
  int loop_i;
  uint uval;
  byte *byte_ptr;
  int val_3;
  uint uval_2;
  bool flag_2;
  
  val_2 = 0;
  do {
    val = val_2 + 5;
    *(byte *)((int)&g_map_subtiles + val_2) = *(byte *)((int)&g_map_subtiles + val_2) & 0x7b;
    val_2 = val;
  } while (val != 0x50000);
  val_2 = (arg_eax & 0xff) * 0x1508;
  uval_2 = (uint)*(ushort *)(&g_bss_002e1080 + val_2);
  byte_ptr = &g_bss_002e1094 + val_2;
  do {
    uval_2 = uval_2 - 1;
    if ((int)uval_2 < 0) {
      return;
    }
    uval = (uint)*(ushort *)(byte_ptr + 1) % 0x100;
    val_2 = (int)(uint)*(ushort *)(byte_ptr + 1) >> 8;
    flag = *byte_ptr;
    if (flag < 2) {
      flag_2 = flag == 1;
LAB_0004550b:
      if (flag_2) {
        val = val_2 + -1;
        val_3 = val * 0x500;
        for (; val <= val_2 + 1; val = val + 1) {
          for (loop_i = (uval - 1) * 5 + val_3; loop_i <= (int)((uval + 1) * 5 + val_3);
              loop_i = loop_i + 5) {
            *(byte *)((int)&g_map_subtiles + loop_i) = *(byte *)((int)&g_map_subtiles + loop_i) | 4;
          }
          val_3 = val_3 + 0x500;
        }
      }
    }
    else {
      if (2 < flag) {
        flag_2 = flag == 3;
        goto LAB_0004550b;
      }
      val = val_2 + -1;
      val_3 = val * 0x500;
      for (; val <= val_2 + 1; val = val + 1) {
        for (loop_i = (uval - 1) * 5 + val_3; loop_i <= (int)((uval + 1) * 5 + val_3);
            loop_i = loop_i + 5) {
          *(byte *)((int)&g_map_subtiles + loop_i) = *(byte *)((int)&g_map_subtiles + loop_i) | 0x80;
        }
        val_3 = val_3 + 0x500;
      }
    }
    byte_ptr = byte_ptr + 3;
  } while( true );
}

/******************************************************************************
 * Function : inits_xls_creature_lairsize_but_045524 (Original VA: 0x45524, Ghidra: FUN_00045524)
 * Prototype: void inits_xls_creature_lairsize_but_045524(void);
 * Address  : 0x45524 (Size: 615 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 4338, 4345, 4351, 4357, 4363, 4370, 4376, 4387, 4394
 * Purpose  : String 'XLS - Creature:%d No LairSize But Heal Requirment - Fixing'
 * Callers  : 2 -> inits_fn_0401ec, inits_update_player_dungeon_040832
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
void inits_xls_creature_lairsize_but_045524(void)

{
  undefined *extraout_ECX;
  undefined *extraout_ECX_00;
  undefined *extraout_ECX_01;
  undefined *extraout_ECX_02;
  undefined *extraout_ECX_03;
  undefined *extraout_ECX_04;
  undefined *extraout_ECX_05;
  undefined *extraout_ECX_06;
  undefined *thing_ptr;
  undefined *extraout_ECX_07;
  undefined *word_ptr;
  int val;
  int local_1c;
  
  word_ptr = &g_bss_002e910d;
  val = 0;
  do {
    thing_ptr = word_ptr;
    if ((word_ptr[0x17] == '\0') && (word_ptr[9] != '\0')) {
      dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_No_LairSize_Bu_001653b8,val);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4338, g_log_buf) */
      word_ptr[10] = 0;
      word_ptr[9] = word_ptr[10];
      thing_ptr = extraout_ECX;
    }
    if ((byte)thing_ptr[10] < (byte)thing_ptr[9]) {
      dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_Heal_Requirmen_001653fd,val);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4345, g_log_buf) */
      extraout_ECX_00[10] = extraout_ECX_00[9];
      thing_ptr = extraout_ECX_00;
    }
    if ((*(short *)(thing_ptr + 0x12) != 0) && (thing_ptr[0x14] == '\0')) {
      dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_HungerRate_>_0_00165443,val);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4351, g_log_buf) */
      extraout_ECX_01[0x14] = 1;
      thing_ptr = extraout_ECX_01;
    }
    if ((thing_ptr[0x19] != '\0') && (thing_ptr[0x1a] == '\0')) {
      dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_SleepSlab___Sl_00165489,val);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4357, g_log_buf) */
      extraout_ECX_02[0x19] = 0;
      thing_ptr = extraout_ECX_02;
    }
    if (0x1e < *(ushort *)(thing_ptr + 0x4f)) { /* thing->render_flags */
      dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_Invalid_GrowUp_001654ce,val);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4363, g_log_buf) */
      *(undefined2 *)(extraout_ECX_03 + 0x4f) = 0;
      thing_ptr = extraout_ECX_03;
    }
    if ((*(short *)(thing_ptr + 0x4f) != 0) && ((thing_ptr[0x51] == 0 || (10 < (byte)thing_ptr[0x51])))) { /* thing->render_flags */
      dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_GrowUp___GrowU_00165502,val);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4370, g_log_buf) */
      extraout_ECX_04[0x51] = 1;
      thing_ptr = extraout_ECX_04;
    }
    if (10 < (byte)thing_ptr[0xd7]) {
      dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_Rebirth_Invali_00165544,val);
      LbErrorLog(); /* LbErrorLog("inits.cpp", line 4376, g_log_buf) */
      extraout_ECX_05[0xd7] = 0;
      thing_ptr = extraout_ECX_05;
    }
    local_1c = 0;
    do {
      if (thing_ptr[0x80] == '\0') {
        if ((thing_ptr[0x8a] != 0) && ((byte)thing_ptr[0x8a] < 0xb)) {
          dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_Instance_Level_001655c1,val,local_1c + 1)
          ;
          LbErrorLog(); /* LbErrorLog("inits.cpp", line 4394, g_log_buf) */
          extraout_ECX_06[0x8a] = 0;
          thing_ptr = extraout_ECX_06;
        }
      }
      else if ((thing_ptr[0x8a] == 0) || (10 < (byte)thing_ptr[0x8a])) {
        dk_sprintf(&g_log_sprintf_buf,s_XLS___Creature__d_Instance_Level_00165579,val,local_1c + 1);
        LbErrorLog(); /* LbErrorLog("inits.cpp", line 4387, g_log_buf) */
        extraout_ECX_07[0x8a] = 1;
        thing_ptr = extraout_ECX_07;
      }
      local_1c = local_1c + 1;
      thing_ptr = thing_ptr + 1;
    } while (local_1c < 10);
    val = val + 1;
    word_ptr = word_ptr + 0xe6;
  } while (val < 0x20);
  return;
}

/******************************************************************************
 * Function : inits_fn_04578b (Original VA: 0x4578b, Ghidra: FUN_0004578b)
 * Prototype: void inits_fn_04578b(void);
 * Address  : 0x4578b (Size: 50 bytes)
 * Module   : inits.cpp [contiguous_same_unit_span]
 * Purpose  : Module inits.cpp procedure @ 0x04578b
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void inits_fn_04578b(void)

{
  byte *loop_i;
  
  LbScreenWaitVbi();
  for (loop_i = &g_data_001915aa; *loop_i != 0; loop_i = loop_i + 5) {
    *(undefined4 *)(&g_bss_003772e4 + (uint)*loop_i * 4) = *(undefined4 *)(loop_i + 1);
  }
  return;
}

/******************************************************************************
 * Function : inits_wlb_file_muddled_fixing_0457bd (Original VA: 0x457bd, Ghidra: FUN_000457bd)
 * Prototype: void inits_wlb_file_muddled_fixing_0457bd(void);
 * Address  : 0x457bd (Size: 1019 bytes)
 * Module   : inits.cpp [direct_file_string_xref]
 * OrigLine : inits.cpp lines 4677
 * Purpose  : String 'WLB file is muddled - Fixing'
 * Callers  : 1 -> file_slab_type_increase_size_02d168
 * Callees  : 9 -> cdtest_ldata_dkwind00_dat_0150f0, file_fn_02c3d0, room_how_room_exist_slabs_0c856c, room_process_dungeon_room_0caa90, room_process_dungeon_room_0cb144, prepare_file_path, LbErrorLog, dk_sprintf ...
 ******************************************************************************/
void inits_wlb_file_muddled_fixing_0457bd(void)

{
  ushort slab_coord;
  bool flag;
  char ch;
  byte flag_2;
  undefined4 arg_eax;
  undefined4 uval;
  byte flag_3;
  int extraout_ECX;
  int val;
  byte *byte_ptr;
  int val_2;
  undefined1 local_d8 [152];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  val = 0;
  local_2c = 0;
  local_38 = 0;
  local_3c = 0;
  do {
    local_40 = local_2c * 3;
    local_34 = 0;
    local_20 = 0;
    local_28 = local_38;
    val_2 = local_3c;
    do {
      local_24 = local_34 * 3;
      local_1c = local_40;
      flag_2 = (&g_slabmap_base)[val_2];
      slab_coord = CONCAT11((&g_slabmap)
                       [(*(int *)((int)&g_subtile_to_slab_lut + local_28) * 0x55 +
                        *(int *)((int)&g_subtile_to_slab_lut + local_20)) * 6],flag_2) & 0x7ff;
      flag_3 = (byte)slab_coord;
      if (flag_2 < 0x1c) {
        if (flag_2 < 0x14) {
          if (flag_3 < 0x10) {
            if (flag_3 != 0xe) goto LAB_00045a10;
          }
          else if (0x10 < flag_3) {
            if (flag_3 != 0x12) goto LAB_00045a10;
            local_30 = (uint)(slab_coord >> 8);
          }
        }
        else if (0x14 < flag_2) {
          if (flag_3 < 0x18) {
            if (flag_3 == 0x16) goto LAB_00045918;
          }
          else if ((flag_3 < 0x19) || (flag_3 == 0x1a)) goto LAB_00045918;
          goto LAB_00045a10;
        }
LAB_00045918:
        val = room_process_dungeon_room_0caa90();
      }
      else {
        if (flag_2 < 0x1d) goto LAB_00045918;
        if (0x23 < flag_3) {
          if (0x24 < flag_3) {
            if (flag_3 < 0x28) {
              if (flag_3 == 0x26) goto LAB_00045918;
            }
            else if ((flag_3 < 0x29) || ((0x32 < flag_3 && ((flag_3 < 0x34 || (flag_3 == 0x35))))))
            goto LAB_00045918;
            goto LAB_00045a10;
          }
          goto LAB_00045918;
        }
        if (flag_3 < 0x20) {
          if (flag_3 == 0x1e) goto LAB_00045918;
        }
        else if ((flag_3 < 0x21) || (flag_3 == 0x22)) goto LAB_00045918;
      }
LAB_00045a10:
      if (val != 0) {
        room_how_room_exist_slabs_0c856c();
        room_process_dungeon_room_0cb144();
      }
      local_20 = local_20 + 0xc;
      local_34 = local_34 + 1;
      val_2 = val_2 + 6;
    } while (local_34 < 0x55);
    local_38 = local_38 + 0xc;
    local_2c = local_2c + 1;
    local_3c = local_3c + 0x1fe;
    if (0x54 < local_2c) {
      prepare_file_path(arg_eax);
      uval = prepare_file_path();
      dk_sprintf(local_d8,s__s_map_05d_wlb_00165614,uval);
      cdtest_ldata_dkwind00_dat_0150f0();
      flag = false;
      ch = file_fn_02c3d0();
      if ((ch != '\0') && (val = bflib_system_io_fn_0e984c(), val == 0x1c39)) {
        flag = true;
        val = 0;
        byte_ptr = g_scratch_work_buf;
        do {
          flag_2 = *byte_ptr;
          (&g_slabmap)[val] = (&g_slabmap)[val] & 0xe7;
          (&g_slabmap)[val] = (&g_slabmap)[val] | (flag_2 & 3) << 3;
          byte_ptr = byte_ptr + 1;
          if ((((((&g_slabmap)[val] & 0x1f) >> 3 != 2) || ((&g_slabmap_base)[val] != '\r')) &&
              ((((&g_slabmap)[val] & 0x1f) >> 3 != 1 || ((&g_slabmap_base)[val] != '\f')))) &&
             (((flag_2 = ((&g_slabmap)[val] & 0x1f) >> 3, flag_2 == 2 || (flag_2 == 1)) &&
              ((&g_slabmap_base)[val] != '3')))) {
            LbErrorLog(); /* LbErrorLog("inits.cpp", line 4677, "WLB file is muddled - Fixing") */
            (&g_slabmap)[extraout_ECX] = (&g_slabmap)[extraout_ECX] & 0xe7;
            val = extraout_ECX;
          }
          val = val + 6;
        } while (val != 0xa956);
      }
      if (!flag) {
        flag_2 = g_data_001922f3 & 3;
        val = 0;
        do {
          if ((byte)(&g_slabmap_base)[val] == 0x33) {
            (&g_slabmap)[val] = (&g_slabmap)[val] & 0xe7;
            (&g_slabmap)[val] = (&g_slabmap)[val] | flag_2 << 3;
          }
          else {
            flag_3 = (&g_data_001921d5)[(uint)(byte)(&g_slabmap_base)[val] * 0x16];
            (&g_slabmap)[val] = (&g_slabmap)[val] & 0xe7;
            (&g_slabmap)[val] = (&g_slabmap)[val] | (flag_3 & 3) << 3;
          }
          val = val + 6;
        } while (val != 0xa956);
      }
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : inits_fn_045bb8 (Original VA: 0x45bb8, Ghidra: FUN_00045bb8)
 * Prototype: void inits_fn_045bb8(void);
 * Address  : 0x45bb8 (Size: 229 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x045bb8
 * Callers  : 1 -> setup_show_bullfrog_legal_splash
 * Callees  : 8 -> setup_detect_physical_memory_tier, sound_fn_06f4c8, sound_fn_06f51e, sound_fn_06f541, bflib_sound_fn_0f1aec, bflib_video_bf_debug_audio_0f1b38, bflib_sound_bf48_load_music_bank_0f2188, bflib_system_io_fn_0f27b7
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_fn_045bb8(void)

{
  char ch;
  int val;
  
  if (g_bss_00334019 == 0) {
    bflib_sound_fn_0f1aec();
    g_bss_002ed420 = s_SOUND_0016564a;
    g_bss_002ed428 = s_SOUND_00165650;
    g_bss_002ed42e = 3;
    g_bss_002ed432 = 1;
    g_bss_002ed431 = 1;
    g_bss_002ed42c = 0x656;
    val = setup_detect_physical_memory_tier();
    if (val < 0x100000) {
      g_bss_002ed430 = 10;
    }
    else {
      g_bss_002ed430 = 0x10;
    }
    g_bss_002ed433 = 0;
    g_bss_002ed435 = 0;
    g_bss_002ed434 = 1;
    g_bss_002ed438 = 1;
    g_bss_002ed436 = (g_bss_0019d0ba & 0x40) != 0;
    g_bss_002ed439 = 1;
    g_bss_002ed437 = 0;
    bflib_video_bf_debug_audio_0f1b38();
    bflib_sound_bf48_load_music_bank_0f2188();
    ch = bflib_system_io_fn_0f27b7();
    if (ch != '\0') {
      sound_fn_06f4c8();
      sound_fn_06f541();
      sound_fn_06f51e();
      return;
    }
    g_bss_00334019 = 1;
  }
  return;
}

/******************************************************************************
 * Function : inits_fn_045ca0 (Original VA: 0x45ca0, Ghidra: FUN_00045ca0)
 * Prototype: void inits_fn_045ca0(void);
 * Address  : 0x45ca0 (Size: 33 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x045ca0
 * Callers  : 0 -> 
 * Callees  : 1 -> get_scaled_viewport_bottom_y
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void inits_fn_045ca0(void)

{
  g_bss_003482b1 = g_graphics_window_width * (uint)g_units_per_pixel;
  g_bss_003482b5 = get_scaled_viewport_bottom_y();
  return;
}

/******************************************************************************
 * Function : inits_fn_045cc1 (Original VA: 0x45cc1, Ghidra: FUN_00045cc1)
 * Prototype: void inits_fn_045cc1(void);
 * Address  : 0x45cc1 (Size: 250 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x045cc1
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 3 -> inits_fn_045f23, inits_update_creature_and_thing_0462a3, instance_fn_049af1
 ******************************************************************************/
void inits_fn_045cc1(void)

{
  int val;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  g_bss_00334015 = 0;
  instance_fn_049af1();
  if ((g_bss_003db526 != '\0') || (g_bss_003db532 != '\0')) {
    g_bss_00334015 = g_bss_00334015 | 1;
  }
  if ((g_bss_003db519 != '\0') || (g_bss_003db599 != '\0')) {
    g_bss_00334015 = g_bss_00334015 | 2;
  }
  if ((g_bss_003db534 != '\0') || (g_bss_003db5b4 != '\0')) {
    g_bss_00334015 = g_bss_00334015 | 4;
  }
  if ((g_bss_0034cf1f != 0) && (g_bss_003db5fc != 0)) {
    (&g_bss_003db4fc)[g_bss_003db5fc] = 0;
  }
  val = inits_fn_045f23();
  *extraout_ECX = *extraout_ECX & 0xdf;
  *extraout_ECX = *extraout_ECX | (val != 0) << 5;
  val = inits_fn_045f23();
  *extraout_ECX_00 = *extraout_ECX_00 & 0xbf;
  *extraout_ECX_00 = *extraout_ECX_00 | (val != 0) << 6;
  inits_update_creature_and_thing_0462a3();
  return;
}

/******************************************************************************
 * Function : inits_fn_045dbb (Original VA: 0x45dbb, Ghidra: FUN_00045dbb)
 * Prototype: undefined4 inits_fn_045dbb(void);
 * Address  : 0x45dbb (Size: 298 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x045dbb
 * Callers  : 1 -> frontend_fn_030996
 * Callees  : 1 -> inits_fn_045ee5
 ******************************************************************************/
undefined4 inits_fn_045dbb(void)

{
  int arg_eax;
  int val;
  undefined1 extraout_CL;
  int arg_ecx;
  int arg_edx;
  char ch;
  int arg_ebx;
  undefined1 local_c;
  
  if (*(int *)(&g_bss_003772e4 + arg_edx * 4) == 0) {
    return 0;
  }
  if ((arg_eax == 4) || (arg_eax == 5)) {
    if ((arg_ebx == 0) && (arg_ecx == 0)) {
      return 0;
    }
    val = (arg_eax == 4) + 4;
LAB_00045dfe:
    if (arg_ebx == 0) {
      ch = '\x1d';
    }
    else {
      ch = '*';
    }
    if ((&g_bss_002ee8e0)[val * 2] != ch) {
      if (arg_ebx == 0) {
        if (arg_ecx != 0) {
          (&g_bss_002ee8e0)[arg_eax * 2] = 0x1d;
        }
      }
      else {
        (&g_bss_002ee8e0)[arg_eax * 2] = 0x2a;
      }
      (&g_bss_002ee8e1)[arg_eax * 2] = 0;
    }
  }
  else {
    local_c = (undefined1)arg_edx;
    if ((arg_eax == 0x1b) || (arg_eax == 0x1c)) {
      if ((arg_ebx != 0) || (arg_ecx != 0)) {
        val = (arg_eax == 0x1b) + 0x1b;
        goto LAB_00045dfe;
      }
      val = inits_fn_045ee5();
      if (val != 0) {
        return 0;
      }
      (&g_bss_002ee8e1)[arg_eax * 2] = 0;
    }
    else {
      if (arg_edx == 0x2a) {
        return 0;
      }
      if (arg_edx == 0x36) {
        return 0;
      }
      if (arg_edx == 0x1d) {
        return 0;
      }
      if (arg_edx == 0x9d) {
        return 0;
      }
      if (1 < (uint)(arg_ebx + arg_ecx)) {
        return 0;
      }
      val = inits_fn_045ee5();
      if (val != 0) {
        return 0;
      }
      (&g_bss_002ee8e1)[arg_eax * 2] = extraout_CL;
    }
    (&g_bss_002ee8e0)[arg_eax * 2] = local_c;
  }
  return 1;
}

/******************************************************************************
 * Function : inits_fn_045ee5 (Original VA: 0x45ee5, Ghidra: FUN_00045ee5)
 * Prototype: undefined4 inits_fn_045ee5(void);
 * Address  : 0x45ee5 (Size: 62 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x045ee5
 * Callers  : 1 -> inits_fn_045dbb
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 inits_fn_045ee5(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  int val_2;
  uint arg_ebx;
  
  val_2 = 0;
  val = 0;
  while( true ) {
    if (0x1f < val_2) {
      return 0;
    }
    if (((arg_eax != val_2) && (arg_edx == (byte)(&g_bss_002ee8e0)[val])) &&
       (arg_ebx == (byte)(&g_bss_002ee8e1)[val])) break;
    val = val + 2;
    val_2 = val_2 + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : inits_fn_045f23 (Original VA: 0x45f23, Ghidra: FUN_00045f23)
 * Prototype: uint inits_fn_045f23(void);
 * Address  : 0x45f23 (Size: 150 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x045f23
 * Callers  : 11 -> inits_fn_045cc1, inits_update_creature_and_thing_0462a3, inits_update_player_view_state_046892, inits_update_player_view_state_046d5a, inits_update_player_view_state_047237, input_process_thing_entity_0473e1, input_draw_text_overlay_047755, input_update_player_dungeon_047bcd ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint inits_fn_045f23(void)

{
  int arg_eax;
  uint uval;
  uint *arg_edx;
  int arg_ebx;
  
  if (arg_edx != (uint *)0x0) {
    *arg_edx = (uint)(byte)(&g_bss_002ee8e0)[arg_eax * 2];
  }
  if ((((arg_eax == 4) || (arg_eax == 5)) || (arg_eax == 0x1b)) || (arg_eax == 0x1c)) {
    uval = (uint)(byte)(&g_bss_002ee8e0)[arg_eax * 2];
    if ((uval == 0x2a) || (uval == 0x36)) {
      return g_bss_00334015 & 1;
    }
    if ((uval == 0x1d) || (uval == 0x9d)) {
      return g_bss_00334015 & 2;
    }
    if ((uval == 0x38) || (uval == 0xb8)) {
      return g_bss_00334015 & 4;
    }
  }
  else {
    if ((arg_ebx == 0) && ((byte)(&g_bss_002ee8e1)[arg_eax * 2] != g_bss_00334015)) {
      return 0;
    }
    uval = (uint)(byte)(&g_bss_002ee8e0)[arg_eax * 2];
  }
  return (uint)(byte)(&g_bss_003db4fc)[uval];
}

/******************************************************************************
 * Function : inits_fn_045fb9 (Original VA: 0x45fb9, Ghidra: FUN_00045fb9)
 * Prototype: undefined1 inits_fn_045fb9(void);
 * Address  : 0x45fb9 (Size: 24 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x045fb9
 * Callers  : 6 -> input_draw_text_overlay_047755, input_update_player_dungeon_047bcd, input_process_thing_entity_047fe2, input_process_thing_entity_0480aa, input_update_player_view_state_049343, input_draw_text_overlay_049426
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 inits_fn_045fb9(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((arg_edx != -1) && (arg_edx != g_bss_00334015)) {
    return 0;
  }
  return (&g_bss_003db4fc)[arg_eax];
}

/******************************************************************************
 * Function : inits_update_slab_subtile_columns_045fd1 (Original VA: 0x45fd1, Ghidra: FUN_00045fd1)
 * Prototype: uint inits_update_slab_subtile_columns_045fd1(void);
 * Address  : 0x45fd1 (Size: 698 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> inits_update_player_view_state_046701
 * Callees  : 1 -> creature_process_map_subtile_085598
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0004624f) */
/* WARNING: Removing unreachable block (ram,0x0004626a) */

uint inits_update_slab_subtile_columns_045fd1(void)

{
  ushort uval;
  short short_val;
  short short_val_2;
  ushort *arg_eax;
  ushort *word_ptr;
  short short_val_3;
  undefined1 *arg_edx;
  int slab_coord;
  uint slab_coord_2;
  int player_off;
  
  short_val_2 = (short)g_engine3_bss_00387dfc;
  word_ptr = arg_eax;
  if ((g_engine3_bss_00387db0 < 0) || (g_engine3_bss_00387db4 < 0)) {
LAB_00046283:
    return (uint)word_ptr & 0xffffff00;
  }
  player_off = g_my_player_word._3_1_ * 0x4ef;
  word_ptr = (ushort *)
           ((ulonglong)*(ushort *)(&g_bss_0019d50c + player_off) /
           (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
  if (((int)word_ptr <= g_engine3_bss_00387db0) ||
     (word_ptr = (ushort *)
               ((ulonglong)*(ushort *)(&g_bss_0019d50e + player_off) /
               (ulonglong)(longlong)(int)(uint)g_units_per_pixel), (int)word_ptr <= g_engine3_bss_00387db4))
  goto LAB_00046283;
  slab_coord = (uint)*(byte *)(&g_subtile_to_slab_lut + g_engine3_bss_00387df4) * 0x55;
  slab_coord_2 = (uint)(byte)(&g_slabmap_base)[((uint)*(byte *)(&g_subtile_to_slab_lut + g_engine3_bss_00387df0) + slab_coord) * 6];
  short_val_3 = (short)g_engine3_bss_00387df4;
  if (((0x29 < slab_coord_2) && (slab_coord_2 < 0x32)) &&
     (((&g_slabmap)[((&g_subtile_to_slab_lut)[g_engine3_bss_00387df0] + (&g_subtile_to_slab_lut)[g_engine3_bss_00387df4] * 0x55) * 6] &
      7) == (&g_player_id_number)[player_off])) {
    *arg_eax = (short)g_engine3_bss_00387df0 * 0x100 + (short)g_engine3_bss_00387df8;
    arg_eax[1] = short_val_3 * 0x100 + (short)g_engine3_bss_00387dfc;
    *arg_edx = 2;
    goto LAB_00046248;
  }
  short_val = (short)((g_engine3_bss_00387df0 & 0xffff) << 8);
  short_val_3 = (short)((g_engine3_bss_00387df4 & 0xffff) << 8);
  if (*(short *)(&g_bss_002e05bc + (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x1508)
      != 0) {
    *arg_eax = short_val + (short)g_engine3_bss_00387df8;
LAB_00046136:
    arg_eax[1] = short_val_3 + short_val_2;
    *arg_edx = 3;
    goto LAB_00046248;
  }
  if ((*(uint *)((int)&g_map_subtiles + (g_engine3_bss_00387df4 * 0x100 + g_engine3_bss_00387df0) * 5 + 1) >> 0x1c &
      1 << ((&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] & 0x1f)) == 0) {
LAB_0004622b:
    *arg_eax = short_val + (short)g_engine3_bss_00387df8;
    arg_eax[1] = short_val_3 + short_val_2;
    *arg_edx = 1;
  }
  else {
    if ((*(byte *)(&g_subtile_to_slab_lut + g_engine3_bss_00387df0) < 0x55) &&
       (*(byte *)(&g_subtile_to_slab_lut + g_engine3_bss_00387df4) < 0x55)) {
      if ((*(uint *)(&g_data_001921c6 + slab_coord_2 * 0x16) & 0x29) != 0) goto LAB_0004622b;
      slab_coord_2 = creature_process_map_subtile_085598(slab_coord,*(uint *)(&g_data_001921c6 + slab_coord_2 * 0x16),
                           (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]);
      short_val_3 = (short)g_engine3_bss_00387de4 << 8;
      short_val_2 = (short)g_engine3_bss_00387dec;
      if (g_thing_ptrs < slab_coord_2) {
        *arg_eax = (short)g_engine3_bss_00387de0 * 0x100 + (short)g_engine3_bss_00387de8;
        goto LAB_00046136;
      }
      *arg_eax = (short)g_engine3_bss_00387de0 * 0x100 + (short)g_engine3_bss_00387de8;
    }
    else {
      short_val_3 = (short)g_engine3_bss_00387de4;
      *arg_eax = (short)g_engine3_bss_00387de0 * 0x100 + (short)g_engine3_bss_00387de8;
      short_val_3 = short_val_3 << 8;
      short_val_2 = (short)g_engine3_bss_00387dec;
    }
    arg_eax[1] = short_val_3 + short_val_2;
    *arg_edx = 0;
  }
LAB_00046248:
  if (0xfeff < *arg_eax) {
    *arg_eax = 0xfeff;
  }
  uval = arg_eax[1];
  if (0xfeff < uval) {
    arg_eax[1] = 0xfeff;
  }
  return CONCAT31((uint3)(byte)(uval >> 8),1);
}

/******************************************************************************
 * Function : inits_update_creature_and_thing_0462a3 (Original VA: 0x462a3, Ghidra: FUN_000462a3)
 * Prototype: longlong inits_update_creature_and_thing_0462a3(void);
 * Address  : 0x462a3 (Size: 872 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> inits_fn_045cc1
 * Callees  : 17 -> inits_fn_045f23, inits_update_player_view_state_04660b, inits_update_player_view_state_046701, input_process_thing_entity_0473e1, input_draw_text_overlay_047755, input_update_player_dungeon_047bcd, input_update_player_view_state_047ea3, input_process_thing_entity_047fe2 ...
 ******************************************************************************/
longlong inits_update_creature_and_thing_0462a3(void)

{
  uint thing_ptr;
  char ch;
  byte flag;
  int player_off;
  char extraout_DL;
  uint arg_edx;
  int extraout_EDX;
  int local_14;
  
  ch = '\0';
  if ((g_bss_0019d0bd & 1) != 0) {
    load_turn_packets_from_file();
    g_CompPlayer_turn = g_CompPlayer_turn + 1;
    if (((((g_bss_003db4fd != '\0') || (g_bss_003db535 != '\0')) || (g_bss_003db518 != '\0')) ||
        ((g_bss_003db534 != '\0' && (g_bss_003db529 != '\0')))) || (g_bss_0034b25c != '\0')) {
      g_bss_003db4fd = '\0';
      g_bss_003db535 = '\0';
      g_bss_003db518 = '\0';
      g_bss_003db529 = '\0';
      g_bss_0034b25c = '\0';
      g_bss_0019a2a0 = 1;
    }
    goto switchD_00046603_default;
  }
  if (g_bss_002e6f2d != '\0') {
    load_turn_packets_from_file();
    g_CompPlayer_turn = g_CompPlayer_turn + 1;
    if ((g_bss_003db534 != '\0') && (g_bss_003db529 != '\0')) {
      g_bss_003db529 = extraout_DL;
      if ((g_game_system_flags & 1) != 0) {
        LbNetwork_Stop_0edc70();
      }
      g_bss_0019a2a0 = 1;
      g_bss_0019a2a1 = 1;
    }
    goto switchD_00046603_default;
  }
  player_off = g_my_player_word._3_1_ * 0x4ef;
  if (((&g_players)[player_off] & 0x80) != 0) {
    *(undefined2 *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[player_off] * 0x11) = 0x7f;
    *(undefined2 *)(&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[player_off] * 0x11) = 0x7f;
    if (((g_bss_0034cf1f != 0) || ((g_game_operation_flags & 1) == 0)) || (player_off = inits_fn_045f23(), player_off == 0))
    goto switchD_00046603_default;
    (&g_bss_003db4fc)[local_14] = 0;
    goto LAB_000465a7;
  }
  if (((&g_bss_0019d0f1)[player_off] == '\x02') &&
     ((((&g_bss_0019d0f4)[player_off] != '\x01' ||
       (thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)], thing_ptr <= g_thing_ptrs)) ||
      ((*(char *)(thing_ptr + 0x1f) != '\x05' || /* thing->class_id */
       ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 2) & 2) == 0)))))) { /* thing->ccontrol_idx */
    input_draw_text_overlay_049426();
    goto LAB_000464da;
  }
  if (((g_game_operation_flags & 1) == 0) || (((g_game_operation_flags & 1) != 0 && ((g_game_operation_flags & 0x80) != 0)))) {
    ch = newgui_process_map_subtile_057fe4();
  }
  if (ch == '\0') {
    ch = input_draw_text_overlay_047755();
  }
  if (g_bss_0034cf1f != 0) goto switchD_00046603_default;
  player_off = g_my_player_word._3_1_ * 0x4ef;
  switch((&g_bss_0019d51a)[player_off]) {
  case 1:
    if ((ch == '\0') && (player_off = input_update_player_dungeon_047bcd(), player_off == 0)) {
      inits_update_player_view_state_046701();
LAB_000464e9:
      input_process_thing_entity_049160();
      input_fn_048add();
      goto switchD_00046603_default;
    }
    inits_update_player_view_state_046701();
    break;
  case 2:
    if ((ch == '\0') && (player_off = input_process_thing_entity_0480aa(), player_off == 0)) {
      input_process_thing_entity_0473e1();
      goto LAB_000464e9;
    }
    input_process_thing_entity_0473e1();
    break;
  case 3:
    if (ch != '\0') break;
    player_off = input_process_thing_entity_047fe2();
    if (player_off == 0) goto LAB_000464e9;
    goto LAB_000464d5;
  case 4:
    if ((ch == '\0') && (player_off = input_update_player_view_state_047ea3(), player_off == 0)) {
      inits_update_player_view_state_04660b();
      goto LAB_000464e9;
    }
    inits_update_player_view_state_04660b();
    break;
  case 5:
    if ((&g_player_view_type)[player_off] == '\x06') goto switchD_00046603_default;
    if ((g_game_system_flags & 1) == 0) {
      g_game_operation_flags = g_game_operation_flags & 0xfe;
    }
    flag = newgui_fn_05b645();
    (&g_bss_0019d0c9)[extraout_EDX] = (&g_bss_0019d0c9)[extraout_EDX] & 0xfe;
    (&g_bss_0019d0c9)[extraout_EDX] = (&g_bss_0019d0c9)[extraout_EDX] | flag & 1;
    goto LAB_000465a7;
  case 6:
    if ((&g_player_view_type)[player_off] == '\a') goto switchD_00046603_default;
LAB_000465a7:
    set_packet_action(0,0);
switchD_00046603_default:
    return (ulonglong)arg_edx << 0x20;
  default:
    goto switchD_00046603_default;
  }
  input_process_thing_entity_049160();
LAB_000464d5:
  input_fn_048add();
LAB_000464da:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : inits_update_player_view_state_04660b (Original VA: 0x4660b, Ghidra: FUN_0004660b)
 * Prototype: void inits_update_player_view_state_04660b(void);
 * Address  : 0x4660b (Size: 246 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 3 -> inits_update_player_view_state_047237, command_fn_07825a, get_scaled_viewport_bottom_y
 ******************************************************************************/
void inits_update_player_view_state_04660b(void)

{
  byte *player_off;
  undefined2 uval;
  int val;
  
  get_scaled_viewport_bottom_y();
  *(short *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11) =
       (short)g_graphics_window_width * g_units_per_pixel;
  uval = get_scaled_viewport_bottom_y();
  val = (int)g_my_player_word._3_1_;
  *(undefined2 *)(&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[val * 0x4ef] * 0x11) = uval;
  player_off = (byte *)((int)&g_packet_control_flags + (uint)(byte)(&g_player_packet_slot)[val * 0x4ef] * 0x11 + 1);
  *player_off = *player_off & 0x7f;
  val = command_fn_07825a();
  if (val != 0) {
    player_off = (byte *)((int)&g_packet_control_flags +
                     (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11 + 1);
    *player_off = *player_off | 0x80;
  }
  if (((g_game_operation_flags & 1) == 0) && ((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x03')) {
    inits_update_player_view_state_047237();
    return;
  }
  return;
}

/******************************************************************************
 * Function : inits_update_player_view_state_046701 (Original VA: 0x46701, Ghidra: FUN_00046701)
 * Prototype: void inits_update_player_view_state_046701(void);
 * Address  : 0x46701 (Size: 401 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> inits_update_creature_and_thing_0462a3, input_draw_text_overlay_049426
 * Callees  : 6 -> inits_update_slab_subtile_columns_045fd1, inits_update_player_view_state_046892, inits_update_player_view_state_046d5a, inits_update_player_view_state_047237, command_fn_07825a, get_scaled_viewport_bottom_y
 ******************************************************************************/
void inits_update_player_view_state_046701(void)

{
  byte *player_off;
  byte flag;
  char ch;
  int val;
  undefined2 local_20;
  undefined2 uStack_1e;
  byte local_18;
  
  get_scaled_viewport_bottom_y();
  g_bss_003482b9 = g_graphics_window_width * (uint)g_units_per_pixel;
  g_bss_003482bd = get_scaled_viewport_bottom_y();
  val = (int)g_my_player_word._3_1_;
  player_off = (byte *)((int)&g_packet_control_flags + (uint)(byte)(&g_player_packet_slot)[val * 0x4ef] * 0x11 + 1);
  *player_off = *player_off & 0x7f;
  if ((&g_bss_0019d51b)[val * 0x4ef] == '\x01') {
    ch = inits_update_slab_subtile_columns_045fd1();
    if (ch != '\0') {
      val = g_my_player_word._3_1_ * 0x4ef;
      *(undefined2 *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[val] * 0x11) = local_20;
      *(undefined2 *)(&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[val] * 0x11) = uStack_1e;
      player_off = (byte *)((int)&g_packet_control_flags + (uint)(byte)(&g_player_packet_slot)[val] * 0x11 + 1);
      *player_off = *player_off | 0x80;
      flag = (&g_player_packet_slot)[val];
      (&g_packet_player_flags)[(uint)flag * 0x11] = (&g_packet_player_flags)[(uint)flag * 0x11] & 0xe1;
      (&g_packet_player_flags)[(uint)flag * 0x11] =
           (&g_packet_player_flags)[(uint)flag * 0x11] | (local_18 & 0xf) * '\x02';
    }
  }
  else {
    val = command_fn_07825a();
    if (val != 0) {
      val = g_my_player_word._3_1_ * 0x4ef;
      *(undefined2 *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[val] * 0x11) = local_20;
      *(undefined2 *)(&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[val] * 0x11) = uStack_1e;
      player_off = (byte *)((int)&g_packet_control_flags + (uint)(byte)(&g_player_packet_slot)[val] * 0x11 + 1);
      *player_off = *player_off | 0x80;
      (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[val] * 0x11] =
           (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[val] * 0x11] & 0xe1;
    }
  }
  flag = (&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef];
  if (flag < 3) {
    if (flag == 2) {
      inits_update_player_view_state_046892();
    }
  }
  else if (flag < 4) {
    inits_update_player_view_state_047237();
  }
  else if (flag == 5) {
    inits_update_player_view_state_046d5a();
  }
  return;
}

/******************************************************************************
 * Function : inits_update_player_view_state_046892 (Original VA: 0x46892, Ghidra: FUN_00046892)
 * Prototype: void inits_update_player_view_state_046892(void);
 * Address  : 0x46892 (Size: 1200 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> inits_update_player_view_state_046701
 * Callees  : 2 -> inits_fn_045f23, set_packet_control_flag
 ******************************************************************************/
void inits_update_player_view_state_046892(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  
  val = g_bss_003482bd;
  val_4 = g_bss_003482b9;
  val_2 = inits_fn_045f23();
  val_3 = inits_fn_045f23();
  if (((&g_players)[g_my_player_word._3_1_ * 0x4ef] & 0x10) == 0) {
    if (val_3 != 0) {
      (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
           (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (val_4 < 5) {
      val_3 = inits_fn_045f23();
      if ((val_3 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if ((int)(g_mouse_cursor_y - 4) <= val_4) {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if (val < 5) {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if ((int)(g_mouse_cursor_x - 4) <= val) {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if (val_2 == 0) {
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
    }
    else {
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
    }
    if (val_4 != 0) {
      set_packet_control_flag();
    }
  }
  return;
}

/******************************************************************************
 * Function : inits_fn_046d42 (Original VA: 0x46d42, Ghidra: FUN_00046d42)
 * Prototype: undefined8 inits_fn_046d42(void);
 * Address  : 0x46d42 (Size: 24 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Module inits.cpp procedure @ 0x046d42
 * Callers  : 1 -> inits_update_player_view_state_046d5a
 * Callees  : 1 -> LbTimerClock
 ******************************************************************************/
undefined8 inits_fn_046d42(void)

{
  undefined4 arg_edx;
  undefined8 clock_ms;
  
  clock_ms = LbTimerClock();
  return CONCAT44(arg_edx,(uint)((uint)clock_ms <= (uint)((ulonglong)clock_ms >> 0x20)));
}

/******************************************************************************
 * Function : inits_update_player_view_state_046d5a (Original VA: 0x46d5a, Ghidra: FUN_00046d5a)
 * Prototype: void inits_update_player_view_state_046d5a(void);
 * Address  : 0x46d5a (Size: 1245 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> inits_update_player_view_state_046701
 * Callees  : 4 -> inits_fn_045f23, inits_fn_046d42, set_packet_control_flag, LbTimerClock
 ******************************************************************************/
void inits_update_player_view_state_046d5a(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  
  val = g_bss_003482bd;
  val_4 = g_bss_003482b9;
  val_2 = inits_fn_045f23();
  val_3 = inits_fn_045f23();
  if (((&g_players)[g_my_player_word._3_1_ * 0x4ef] & 0x10) == 0) {
    if (val_3 != 0) {
      (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
           (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (val_4 < 5) {
      val_3 = inits_fn_045f23();
      if ((val_3 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if ((int)(g_mouse_cursor_y - 4) <= val_4) {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if (val < 5) {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if ((int)(g_mouse_cursor_x - 4) <= val) {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_2 == 0)) {
        (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
             (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
      }
      set_packet_control_flag();
    }
    if (val_2 == 0) {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_4 = inits_fn_046d42(), val_4 == 0)) {
        set_packet_control_flag();
        g_bss_00348298 = LbTimerClock();
      }
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_4 = inits_fn_046d42(), val_4 == 0)) {
        set_packet_control_flag();
        g_bss_0034829c = LbTimerClock();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
    }
    else {
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_4 = inits_fn_046d42(), val_4 == 0)) {
        set_packet_control_flag();
        g_bss_00348298 = LbTimerClock();
      }
      val_4 = inits_fn_045f23();
      if ((val_4 != 0) && (val_4 = inits_fn_046d42(), val_4 == 0)) {
        set_packet_control_flag();
        g_bss_0034829c = LbTimerClock();
      }
      val_4 = inits_fn_045f23();
      if (val_4 != 0) {
        set_packet_control_flag();
      }
      val_4 = inits_fn_045f23();
    }
    if (val_4 != 0) {
      set_packet_control_flag();
    }
    val_4 = inits_fn_045f23();
    if (val_4 != 0) {
      set_packet_control_flag();
    }
    val_4 = inits_fn_045f23();
    if (val_4 != 0) {
      set_packet_control_flag();
    }
  }
  return;
}

/******************************************************************************
 * Function : inits_update_player_view_state_047237 (Original VA: 0x47237, Ghidra: FUN_00047237)
 * Prototype: void inits_update_player_view_state_047237(void);
 * Address  : 0x47237 (Size: 426 bytes)
 * Module   : inits.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> inits_update_player_view_state_04660b, inits_update_player_view_state_046701
 * Callees  : 2 -> inits_fn_045f23, set_packet_control_flag
 ******************************************************************************/
void inits_update_player_view_state_047237(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  
  val_2 = g_bss_003482bd;
  val = g_bss_003482b9;
  val_3 = inits_fn_045f23();
  val_4 = inits_fn_045f23();
  if (((&g_players)[g_my_player_word._3_1_ * 0x4ef] & 0x10) == 0) {
    if (val_4 != 0) {
      (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] =
           (&g_packet_player_flags)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] | 1;
    }
    if (val_3 != 0) {
      val_3 = inits_fn_045f23();
      if (val_3 != 0) {
        set_packet_control_flag();
      }
      val_3 = inits_fn_045f23();
      if (val_3 != 0) {
        set_packet_control_flag();
      }
    }
    if (val_2 < 5) {
      set_packet_control_flag();
    }
    if ((int)(g_mouse_cursor_x - 4) <= val_2) {
      set_packet_control_flag();
    }
    if (val < 5) {
      set_packet_control_flag();
    }
    if ((int)(g_mouse_cursor_y - 4) <= val) {
      set_packet_control_flag();
    }
  }
  return;
}

/******************************************************************************
 * Function : inits_update_player_view_state_04839c (Original VA: 0x4839c, Ghidra: FUN_0004839c)
 * Prototype: undefined1 * inits_update_player_view_state_04839c(void);
 * Address  : 0x4839c (Size: 192 bytes)
 * Module   : inits.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> inits_non_keeper_keeper_game_0402e5
 * Callees  : 1 -> command_update_player_view_state_0784ae
 ******************************************************************************/
undefined1 * inits_update_player_view_state_04839c(void)

{
  undefined1 *arg_eax;
  undefined1 *player_off;
  byte arg_dl;
  
  arg_eax[0x452] = arg_dl;
  if (arg_dl < 2) {
    if (arg_dl != 1) {
      return (undefined1 *)(uint)arg_dl;
    }
    arg_eax[0x453] = arg_eax[0x456];
  }
  else {
    if (arg_dl < 4) {
      arg_eax[0x453] = arg_eax[0x456];
      command_update_player_view_state_0784ae();
      player_off = &g_players + g_my_player_word._3_1_ * 0x4ef;
      if (arg_eax != player_off) {
        return player_off;
      }
      g_bss_0019d0b9 = g_bss_0019d0b9 | 1;
      return player_off;
    }
    if (arg_dl != 4) {
      return (undefined1 *)(uint)arg_dl;
    }
    arg_eax[0x453] = arg_eax[0x456];
  }
  command_update_player_view_state_0784ae();
  player_off = &g_players + g_my_player_word._3_1_ * 0x4ef;
  if (arg_eax != player_off) {
    return player_off;
  }
  g_bss_0019d0b9 = g_bss_0019d0b9 & 0xfe;
  return player_off;
}

/******************************************************************************
 * Function : inits_update_player_view_state_04845c (Original VA: 0x4845c, Ghidra: FUN_0004845c)
 * Prototype: byte inits_update_player_view_state_04845c(void);
 * Address  : 0x4845c (Size: 348 bytes)
 * Module   : inits.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 5 -> instance_fn_04b992, instance_fn_04b9cc, process_players_dungeon_command_packet, update_update_player_dungeon_0dd624, update_update_player_dungeon_0dd6c8
 * Callees  : 5 -> inits_allocate_light_object_043f07, packet_possess_thing_direct, packet_handle_double_click_action, creature_fn_081eac, LbScreenWaitVbi
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte inits_update_player_view_state_04845c(void)

{
  char ch;
  byte flag;
  undefined1 *arg_eax;
  int val;
  byte arg_dl;
  undefined1 arg_bl;
  
  if (arg_dl == arg_eax[0x453]) {
    if (0xf < arg_dl) goto joined_r0x0004859d;
  }
  else {
    arg_eax[0x456] = arg_eax[0x453];
    val = (int)g_my_player_word._3_1_;
    arg_eax[0x453] = arg_dl;
    if (arg_eax == &g_players + val * 0x4ef) {
      g_bss_002eb9da = 0;
    }
    ch = arg_eax[0x453];
    if ((((ch != '\f') && (ch != '\x0f')) && (ch != '\v')) && (ch != '\n')) {
      *(undefined2 *)(arg_eax + 0x2f) = 0;
    }
    arg_dl = arg_eax[0x453];
    if (4 < arg_dl) {
      if (arg_dl < 6) {
        flag = packet_possess_thing_direct();
        return flag;
      }
      if (arg_dl < 0x10) {
        if (arg_dl != 9) {
          return arg_dl;
        }
        LbScreenWaitVbi();
        val = inits_allocate_light_object_043f07();
        *(undefined2 *)(arg_eax + 0x43a) = *(undefined2 *)(val + 0x1b);
        packet_handle_double_click_action();
        flag = creature_fn_081eac();
        return flag;
      }
joined_r0x0004859d:
      if (arg_dl < 0x11) {
        arg_eax[0x4a5] = arg_bl;
        return arg_dl;
      }
      if (arg_dl != 0x12) {
        return arg_dl;
      }
      arg_eax[0x4a6] = arg_bl;
      return 0x12;
    }
    if (arg_dl == 0) {
      return 0;
    }
    if (arg_dl < 2) {
      arg_eax[0x4a4] = 1;
      return arg_dl;
    }
  }
  if (arg_dl != 2) {
    return arg_dl;
  }
  arg_eax[0x4a3] = arg_bl;
  return 2;
}

