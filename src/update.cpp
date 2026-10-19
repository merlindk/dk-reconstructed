/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: update.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 49
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : update_fn_0dc440 (Original VA: 0xdc440, Ghidra: FUN_000dc440)
 * Prototype: int update_fn_0dc440(void);
 * Address  : 0xdc440 (Size: 96 bytes)
 * Module   : update.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module update.cpp procedure @ 0x0dc440
 * Callers  : 40 -> barracks_update_creature_control_0138c9, combat_update_creature_control_015be4, combchk_fn_016498, combtool_fn_0189d4, compturn_process_map_subtile_022660, effect_update_creature_and_thing_025cf7, effect_update_creature_and_thing_02649f, effect_update_player_view_state_02666b ...
 * Callees  : 0 -> 
 ******************************************************************************/
int update_fn_0dc440(void)

{
  ushort uval;
  ushort uval_2;
  ushort *arg_eax;
  ushort *arg_edx;
  uint uval_3;
  uint uval_4;
  
  uval_3 = (int)((uint)*arg_eax - (uint)*arg_edx) >> 0x1f;
  uval_4 = (int)((uint)arg_eax[1] - (uint)arg_edx[1]) >> 0x1f;
  if ((int)(((uint)arg_eax[1] - (uint)arg_edx[1] ^ uval_4) - uval_4) <
      (int)(((uint)*arg_eax - (uint)*arg_edx ^ uval_3) - uval_3)) {
    uval = *arg_eax;
    uval_2 = *arg_edx;
  }
  else {
    uval = arg_eax[1];
    uval_2 = arg_edx[1];
  }
  uval_3 = (int)((uint)uval - (uint)uval_2) >> 0x1f;
  return ((uint)uval - (uint)uval_2 ^ uval_3) - uval_3;
}

/******************************************************************************
 * Function : update_fn_0dd20c (Original VA: 0xdd20c, Ghidra: FUN_000dd20c)
 * Prototype: uint update_fn_0dd20c(void);
 * Address  : 0xdd20c (Size: 228 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0dd20c
 * Callers  : 1 -> prison_update_creature_control_065d3e
 * Callees  : 1 -> room_update_slab_subtile_columns_0d0fc0
 ******************************************************************************/
uint update_fn_0dd20c(void)

{
  ushort *arg_eax;
  int val;
  int val_2;
  uint uval;
  uint uval_2;
  short extraout_CX;
  ushort *arg_edx;
  uint arg_ebx;
  int val_3;
  short short_val;
  undefined8 uval_3;
  
  val = (uint)*arg_edx - (uint)*arg_eax;
  val_2 = (uint)arg_edx[1] - (uint)arg_eax[1];
  if (val < 0) {
    val = -val;
  }
  if (val_2 < 0) {
    val_3 = -0x50;
    val_2 = -val_2;
  }
  else {
    val_3 = 0x50;
  }
  val = val + 1;
  uval = val / 0x50;
  val_2 = val_2 + 1;
  uval_2 = uval;
  if (val != val_2) {
    if (val_2 < val) {
      uval_2 = (val_2 * val_3) / val;
    }
    else {
      uval_2 = val_2 / 0x50;
      uval = uval_2;
    }
  }
  short_val = (short)*(undefined4 *)arg_eax;
  if (uval != 0) {
    do {
      uval_3 = room_update_slab_subtile_columns_0d0fc0(short_val);
      uval_2 = (uint)uval_3;
      if (uval_2 != arg_ebx) {
        return uval_2 & 0xffffff00;
      }
      short_val = short_val + extraout_CX;
    } while ((int)((ulonglong)uval_3 >> 0x20) != 1);
  }
  return CONCAT31((int3)(uval_2 >> 8),1);
}

/******************************************************************************
 * Function : update_fn_0dd2f0 (Original VA: 0xdd2f0, Ghidra: FUN_000dd2f0)
 * Prototype: uint update_fn_0dd2f0(void);
 * Address  : 0xdd2f0 (Size: 144 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0dd2f0
 * Callers  : 7 -> inits_told_you_so_create_043bb3, inits_told_you_so_create_044b13, instance_update_creature_and_thing_04ac70, person_update_creature_control_065283, creature_update_creature_and_thing_0811d8, creature_thing_hand_084904, update_process_map_subtile_0e2a14
 * Callees  : 0 -> 
 ******************************************************************************/
uint update_fn_0dd2f0(void)

{
  int arg_eax;
  uint uval;
  byte arg_dl;
  
  if ((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) {
    uval = (uint)*(ushort *)
                   (&g_data_00187b74 + (uint)arg_dl * 2 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c);
    if (-1 < *(int *)(&g_bss_002f29d1 +
                     (uint)*(ushort *)
                            (&g_data_00187b74 + (uint)arg_dl * 2 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c
                            ) * 2) >> 0x10) {
      return *(int *)(&g_bss_002f29d1 +
                     (uint)*(ushort *)
                            (&g_data_00187b74 + (uint)arg_dl * 2 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c
                            ) * 2) >> 0x10;
    }
  }
  else {
    uval = *(int *)((int)&g_bss_002f2223 +
                    (uint)*(ushort *)
                           (&g_data_00187b74 + (uint)arg_dl * 2 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c)
                    * 2 + 2) >> 0x10;
    if ((int)uval < 0) {
      uval = (uint)*(ushort *)
                     (&g_data_00187b74 + (uint)arg_dl * 2 + (uint)*(byte *)(arg_eax + 0x1a) * 0x2c);
    }
  }
  return uval;
}

/******************************************************************************
 * Function : update_fn_0dd380 (Original VA: 0xdd380, Ghidra: FUN_000dd380)
 * Prototype: undefined4 update_fn_0dd380(int *param_1);
 * Address  : 0xdd380 (Size: 146 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0dd380
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 update_fn_0dd380(int *param_1)

{
  ushort uval;
  ushort *arg_eax;
  int ui_scale;
  undefined4 uval_2;
  int *arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  ui_scale = (uint)g_units_per_pixel * (((*(int *)(arg_eax + 1) >> 0x10) << 5) >> 8);
  if (ui_scale < 2) {
    ui_scale = 2;
  }
  else if (0x20 < ui_scale) {
    ui_scale = 0x20;
  }
  uval = arg_eax[1];
  *arg_ecx = ((int)((arg_edx - (uint)*arg_eax) * ui_scale) >> 8) + 0xaa;
  ui_scale = ((int)(ui_scale * (arg_ebx - (uint)uval)) >> 8) + 0xaa;
  *param_1 = ui_scale;
  if ((((*arg_ecx < 0x96) || (0x1e8 < *arg_ecx)) || (ui_scale < 0x38)) || (0x18a < ui_scale)) {
    uval_2 = 0;
  }
  else {
    uval_2 = 1;
  }
  return uval_2;
}

/******************************************************************************
 * Function : update_fn_0dd414 (Original VA: 0xdd414, Ghidra: FUN_000dd414)
 * Prototype: void update_fn_0dd414(int param_1,int param_2);
 * Address  : 0xdd414 (Size: 155 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0dd414
 * Callers  : 1 -> setup_switch_screen_resolution
 * Callees  : 1 -> ceiling_process_map_subtile_07da18
 ******************************************************************************/
void update_fn_0dd414(int param_1,int param_2)

{
  int val;
  char ch;
  undefined4 *arg_eax;
  short extraout_CX;
  int arg_ecx;
  undefined4 *arg_edx;
  int extraout_EDX;
  int arg_ebx;
  byte flag;
  short local_18;
  short sStack_16;
  short local_14 [2];
  int local_10;
  
  flag = 0;
  val = (&g_slab_attr_table)[arg_ebx];
  local_10 = param_1 * (&g_slab_attr_table)[arg_ecx] >> 0x10;
  local_18 = (short)*arg_eax;
  sStack_16 = (short)((uint)*arg_eax >> 0x10);
  local_14[0] = *(short *)(arg_eax + 1);
  if (param_2 != 0) {
    do {
      ch = ceiling_process_map_subtile_07da18();
      if (ch != '\0') break;
      local_18 = local_18 + (short)((uint)(param_1 * val) >> 0x10);
      sStack_16 = sStack_16 + extraout_CX;
      local_14[0] = local_14[0] + (short)local_10;
    } while (extraout_EDX != 1);
  }
  *arg_edx = CONCAT22(sStack_16,local_18);
  *(short *)(arg_edx + (uint)flag * -2 + 1) = local_14[(uint)flag * -4];
  return;
}

/******************************************************************************
 * Function : update_update_player_view_state_0dd4b0 (Original VA: 0xdd4b0, Ghidra: FUN_000dd4b0)
 * Prototype: undefined4 update_update_player_view_state_0dd4b0(void);
 * Address  : 0xdd4b0 (Size: 80 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 update_update_player_view_state_0dd4b0(void)

{
  int arg_eax;
  int arg_edx;
  int player_off;
  
  player_off = (g_my_player_word >> 0x18) * 0x4ef;
  if ((((*(short *)(&g_bss_0019d518 + player_off) != 0) &&
       ((int)(uint)*(ushort *)(&g_bss_0019d514 + player_off) <= arg_eax)) &&
      (arg_eax < (int)(*(ushort *)(&g_bss_0019d514 + player_off) + 0x74))) &&
     (((int)(uint)*(ushort *)(&g_bss_0019d516 + player_off) <= arg_edx &&
      (arg_edx < (int)(*(ushort *)(&g_bss_0019d516 + player_off) + 0x74))))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : update_update_player_dungeon_0dd500 (Original VA: 0xdd500, Ghidra: FUN_000dd500)
 * Prototype: void update_update_player_dungeon_0dd500(void);
 * Address  : 0xdd500 (Size: 292 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> door_process_thing_entity_023519, script_fn_068ab1
 * Callees  : 3 -> frontnet_update_player_dungeon_035e3c, moodneed_fn_051374, creature_process_thing_entity_085b1c
 ******************************************************************************/
void update_update_player_dungeon_0dd500(void)

{
  undefined1 *arg_eax;
  int dungeon_off;
  int val;
  
  if (arg_eax[0x29] == '\0') {
    if (arg_eax[0x2b] == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
      frontnet_update_player_dungeon_035e3c();
    }
    dungeon_off = (uint)(byte)arg_eax[0x2b] * 0x1508;
    arg_eax[0x29] = 1;
    val = (&g_bss_002e107a)[(uint)(byte)arg_eax[0x2b] * 0x542];
    if ((g_game_system_flags & 1) == 0) {
      val = val + (int)((uint)g_bss_002e78e9 * 10 * val) / 100;
    }
    else {
      val = val * 2;
    }
    if ((&g_bss_0019d0f1)[(uint)(byte)arg_eax[0x2b] * 0x4ef] == '\x02') {
      val = val / 2;
    }
    *(undefined4 *)(&g_bss_002e18a0 + dungeon_off) = 1;
    *(int *)(&g_bss_002e18a4 + dungeon_off) = val;
    if ((g_game_system_flags & 1) == 0) {
      *(int *)(arg_eax + 0x4eb) = g_game_turn + 300;
    }
    if (arg_eax == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
      val = creature_process_thing_entity_085b1c();
      if (val != 0) {
        (&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] =
             (&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] | 0x10;
      }
      moodneed_fn_051374();
    }
  }
  return;
}

/******************************************************************************
 * Function : update_update_player_dungeon_0dd624 (Original VA: 0xdd624, Ghidra: FUN_000dd624)
 * Prototype: void update_update_player_dungeon_0dd624(void);
 * Address  : 0xdd624 (Size: 164 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 6 -> input_maintain_gui_button_state_04823a, inits_update_player_view_state_04845c, magic_update_creature_and_thing_04ed3d, newgui_fn_05cc4a, structs_update_creature_control_072af4, LbScreenWaitVbi
 ******************************************************************************/
void update_update_player_dungeon_0dd624(void)

{
  byte flag;
  int val;
  int arg_eax;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *word_ptr;
  int dungeon_off;
  
  flag = *(byte *)(arg_eax + 0x2b);
  dungeon_off = (uint)flag * 0x1508;
  LbScreenWaitVbi();
  val = (&g_bss_002e0e0d)[(uint)flag * 0x542];
  (&g_bss_002e05ec)[dungeon_off] = 0;
  word_ptr = extraout_ECX;
  if (val != 0) {
    magic_update_creature_and_thing_04ed3d();
    word_ptr = extraout_ECX_00;
  }
  if (*(short *)(&g_bss_002e0b61 + dungeon_off) != 0) {
    structs_update_creature_control_072af4();
    *(undefined2 *)(&g_bss_002e0b61 + dungeon_off) = 0;
    word_ptr = extraout_ECX_01;
  }
  if (word_ptr == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
    newgui_fn_05cc4a();
  }
  input_maintain_gui_button_state_04823a();
  inits_update_player_view_state_04845c();
  return;
}

/******************************************************************************
 * Function : update_update_player_dungeon_0dd6c8 (Original VA: 0xdd6c8, Ghidra: FUN_000dd6c8)
 * Prototype: void update_update_player_dungeon_0dd6c8(void);
 * Address  : 0xdd6c8 (Size: 459 bytes)
 * Module   : update.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> door_process_thing_entity_02347d, script_fn_068ac4, update_go_first_person_without_0de6a8
 * Callees  : 11 -> compturn_update_player_dungeon_021527, frontnet_update_player_dungeon_035e3c, input_maintain_gui_button_state_04823a, inits_update_player_view_state_04845c, magic_update_creature_and_thing_04ed3d, moodneed_fn_051374, newgui_fn_05ae90, newgui_fn_05cc4a ...
 ******************************************************************************/
void update_update_player_dungeon_0dd6c8(void)

{
  byte flag;
  undefined1 *arg_eax;
  int dungeon_off;
  int val;
  int val_2;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  
  flag = arg_eax[0x2b];
  dungeon_off = (uint)flag * 0x1508;
  if (arg_eax[0x29] == '\0') {
    if (arg_eax[0x2b] == (&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
      frontnet_update_player_dungeon_035e3c();
      arg_eax = extraout_ECX;
    }
    arg_eax[0x29] = 2;
    val = (&g_bss_002e107a)[(uint)flag * 0x542];
    if ((g_game_system_flags & 1) == 0) {
      val = val + (int)((uint)g_bss_002e78e9 * 10 * val) / 100;
    }
    else {
      val = val * 2;
    }
    if ((&g_bss_0019d0f1)[(uint)(byte)arg_eax[0x2b] * 0x4ef] == '\x02') {
      val = val / 2;
    }
    val_2 = g_my_player_word >> 0x18;
    *(int *)(&g_bss_002e18a4 + dungeon_off) = val;
    if (arg_eax == &g_players + val_2 * 0x4ef) {
      moodneed_fn_051374();
      newgui_fn_05ae90();
      g_bss_002ee892 = 0;
      g_bss_002ee893 = 0;
      arg_eax = extraout_ECX_00;
    }
    flag = arg_eax[0x2b];
    val_2 = (uint)flag * 0x1508;
    LbScreenWaitVbi();
    val = (&g_bss_002e0e0d)[(uint)flag * 0x542];
    (&g_bss_002e05ec)[val_2] = 0;
    if (val != 0) {
      magic_update_creature_and_thing_04ed3d();
    }
    if (*(short *)(&g_bss_002e0b61 + val_2) != 0) {
      structs_update_creature_control_072af4();
      *(undefined2 *)(&g_bss_002e0b61 + val_2) = 0;
    }
    if (arg_eax == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
      newgui_fn_05cc4a();
    }
    input_maintain_gui_button_state_04823a();
    inits_update_player_view_state_04845c();
    if ((g_game_system_flags & 1) == 0) {
      *(int *)(extraout_ECX_01 + 0x4eb) = g_game_turn + 300;
    }
    if ((g_game_system_flags & 1) != 0) {
      specials_fn_070c0c();
    }
    if (((&g_bss_002e0593)[dungeon_off] & 1) != 0) {
      compturn_update_player_dungeon_021527();
    }
  }
  return;
}

/******************************************************************************
 * Function : update_update_player_view_state_0dd894 (Original VA: 0xdd894, Ghidra: FUN_000dd894)
 * Prototype: void update_update_player_view_state_0dd894(void);
 * Address  : 0xdd894 (Size: 85 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 2 -> specials_fn_070bf9, LbNetwork_Stop_0edc70
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_update_player_view_state_0dd894(void)

{
  undefined1 *arg_eax;
  int val;
  
  if (arg_eax == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
    if ((g_game_system_flags & 1) == 0) {
      val = specials_fn_070bf9();
      if (val == 0) {
        g_bss_002e78ea = g_bss_002e78ea + 1;
      }
      g_bss_0019d0c2 = (uint)g_bss_002e78ea;
    }
    else {
      LbNetwork_Stop_0edc70();
    }
    g_bss_0019a2a0 = 1;
  }
  return;
}

/******************************************************************************
 * Function : update_update_player_view_state_0dd8ec (Original VA: 0xdd8ec, Ghidra: FUN_000dd8ec)
 * Prototype: void update_update_player_view_state_0dd8ec(void);
 * Address  : 0xdd8ec (Size: 49 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetwork_Stop_0edc70
 ******************************************************************************/
void update_update_player_view_state_0dd8ec(void)

{
  undefined1 *arg_eax;
  
  if (arg_eax == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
    if ((g_game_system_flags & 1) != 0) {
      LbNetwork_Stop_0edc70();
    }
    g_bss_0019a2a0 = 1;
  }
  return;
}

/******************************************************************************
 * Function : prepare_file_path (Original VA: 0xdd920, Ghidra: FUN_000dd920)
 * Prototype: undefined * prepare_file_path(void);
 * Address  : 0xdd920 (Size: 26 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Build full file path in g_file_path_buf
 * Callers  : 58 -> evil_settings_dat_029738, evil_fn_029800, evil_process_map_subtile_0298b5, file_process_map_subtile_029979, file_process_slabmap_tile_0299f8, file_process_map_subtile_029ac2, file_fn_029b54, file_fn_029bfe ...
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
undefined * prepare_file_path(void)

{
  dk_sprintf(&g_file_path_buf,&g_data_0016c950); /* 0x16c950="%s%s" */
  return &g_file_path_buf;
}

/******************************************************************************
 * Function : coord3d_equal (Original VA: 0xdd93c, Ghidra: FUN_000dd93c)
 * Prototype: bool coord3d_equal(void);
 * Address  : 0xdd93c (Size: 37 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : 6-byte equality comparison between two Coord3d structures
 * Callers  : 3 -> move_fn_0b45b4, move_fn_0b4894, move_fn_0b4994
 * Callees  : 0 -> 
 ******************************************************************************/
bool coord3d_equal(void)

{
  byte *pos_a;
  int val;
  int val_2;
  byte *pos_b;
  bool flag;
  bool flag_2;
  
  val_2 = 6;
  flag = false;
  val = 0;
  flag_2 = true;
  do {
    if (val_2 == 0) break;
    val_2 = val_2 + -1;
    flag = *pos_a < *pos_b;
    flag_2 = *pos_a == *pos_b;
    pos_a = pos_a + 1;
    pos_b = pos_b + 1;
  } while (flag_2);
  if (!flag_2) {
    val = (1 - (uint)flag) - (uint)(flag != 0);
  }
  return val == 0;
}

/******************************************************************************
 * Function : things_collide_at (Original VA: 0xdd964, Ghidra: FUN_000dd964)
 * Prototype: undefined4 things_collide_at(void);
 * Address  : 0xdd964 (Size: 217 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : 3D bounding-box collision check between two Coord3d positions
 * Callers  : 1 -> move_fn_0b45b4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 things_collide_at(void)

{
  int arg_eax;
  uint uval;
  ushort *pos_b;
  ushort *arg_ebx;
  
  uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  if (((int)(*pos_b - uval) >> 8 == (int)(*arg_ebx - uval) >> 8) &&
     ((int)(*pos_b + uval) >> 8 == (int)(*arg_ebx + uval) >> 8)) {
    if (((int)(pos_b[1] - uval) >> 8 == (int)(arg_ebx[1] - uval) >> 8) &&
       ((int)(pos_b[1] + uval) >> 8 == (int)(uval + arg_ebx[1]) >> 8)) {
      if ((*(int *)(pos_b + 1) >> 0x18 == *(int *)(arg_ebx + 1) >> 0x18) &&
         ((int)((*(int *)(pos_b + 1) >> 0x10) + (uint)*(ushort *)(arg_eax + 0x58)) >> 8 ==
          (int)((*(int *)(arg_ebx + 1) >> 0x10) + (uint)*(ushort *)(arg_eax + 0x58)) >> 8)) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : update_fn_0ddad0 (Original VA: 0xddad0, Ghidra: FUN_000ddad0)
 * Prototype: int update_fn_0ddad0(void);
 * Address  : 0xddad0 (Size: 29 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0ddad0
 * Callers  : 4 -> inits_allocate_dynamic_light_shot_0444a9, inits_told_you_so_create_044b13, inits_roll_action_random_044f33, instance_negative_instance_049bfc
 * Callees  : 1 -> jtyedit_fn_04c2eb
 ******************************************************************************/
int update_fn_0ddad0(void)

{
  undefined1 uval;
  int arg_edx;
  undefined4 extraout_EDX;
  
  uval = jtyedit_fn_04c2eb();
  return (CONCAT31((int3)((uint)extraout_EDX >> 8),uval) << 8) / arg_edx;
}

/******************************************************************************
 * Function : LbErrorLog (Original VA: 0xddaf0, Ghidra: FUN_000ddaf0)
 * Prototype: undefined4 LbErrorLog(void);
 * Address  : 0xddaf0 (Size: 8 bytes)
 * Module   : update.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Bullfrog ERRORLOG(__FILE__, __LINE__, msg) handler
 * Callers  : 439 -> anger_hurrah_mental_instability_creature_01073a, anger_removing_annoyed_creature_non_0109ea, angtool_update_creature_control_0119bc, ariadne_manoeuvre_state_01264b, ariadne_speed_01277d, barracks_barrack_party_class_013b43, battle_attempt_create_battle_null_013bae, battle_creature_has_been_removed_013d3b ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 LbErrorLog(void)

{
  return 1;
}

/******************************************************************************
 * Function : LbWarnLog (Original VA: 0xddaf8, Ghidra: FUN_000ddaf8)
 * Prototype: void LbWarnLog(void);
 * Address  : 0xddaf8 (Size: 1 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Bullfrog WARNLOG(__FILE__, __LINE__, msg) handler
 * Callers  : 7 -> person_thing_already_peter_list_063670, person_peter_list_06385d, move_shiiiiiit_place_move_backwards_0b4f00, move_shiiiiiit_place_tunnel_0b4fa0, routes_ve_been_pushing_very_0d1ae0, routes_illegal_block_direction_lookahead_0d29ac, routes_ve_been_pushing_very_0d4188
 * Callees  : 0 -> 
 ******************************************************************************/
void LbWarnLog(void)

{
  return;
}

/******************************************************************************
 * Function : compute_things_checksum (Original VA: 0xddafc, Ghidra: FUN_000ddafc)
 * Prototype: undefined8 compute_things_checksum(void);
 * Address  : 0xddafc (Size: 91 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Deterministic lockstep checksum across all 2,048 Thing slots
 * Callers  : 2 -> write_turn_packets_to_file, load_turn_packets_from_file
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compute_things_checksum(void)

{
  byte *thing_ptr;
  undefined4 arg_edx;
  int val;
  int val_2;
  
  val_2 = 0;
  val = 0;
  do {
    thing_ptr = *(byte **)((int)&g_thing_ptrs + val);
    if (((*thing_ptr & 1) != 0) && (thing_ptr[0x1f] != 0xc)) {
      val_2 = val_2 + (uint)*(ushort *)(thing_ptr + 0x52) + /* thing->health */
                      (*(int *)(thing_ptr + 0xf) >> 0x10) + /* thing->mappos.val_y */
                      (uint)*(ushort *)(thing_ptr + 0xd) + (uint)*(ushort *)(thing_ptr + 0xf) + /* thing->mappos.val_x, thing->mappos.val_y */
                      (*(int *)(thing_ptr + 3) >> 0x18);
    }
    val = val + 4;
  } while (val != 0x2000);
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : update_fn_0ddb5c (Original VA: 0xddb5c, Ghidra: FUN_000ddb5c)
 * Prototype: undefined4 update_fn_0ddb5c(void);
 * Address  : 0xddb5c (Size: 101 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0ddb5c
 * Callers  : 1 -> update_process_map_subtile_0ddbe0
 * Callees  : 3 -> door_process_map_subtile_022b3a, ceiling_process_map_subtile_07da18, move_fn_0b3afc
 ******************************************************************************/
undefined4 update_fn_0ddb5c(void)

{
  char ch;
  int val;
  int extraout_ECX;
  
  val = move_fn_0b3afc();
  if (val != 0) {
    return 2;
  }
  ch = ceiling_process_map_subtile_07da18();
  if ((ch != '\0') &&
     (((val = door_process_map_subtile_022b3a(), val == 0 || (*(int *)(val + 3) >> 0x18 != extraout_ECX)) ||
      (*(char *)(val + 0x18) != '\0')))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : update_process_map_subtile_0ddbe0 (Original VA: 0xddbe0, Ghidra: FUN_000ddbe0)
 * Prototype: uint update_process_map_subtile_0ddbe0(void);
 * Address  : 0xddbe0 (Size: 1063 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> anger_handle_door_thing_0102c0
 * Callees  : 1 -> update_fn_0ddb5c
 ******************************************************************************/
uint update_process_map_subtile_0ddbe0(void)

{
  byte flag;
  byte flag_2;
  short short_val;
  short short_val_2;
  short short_val_3;
  char ch;
  undefined1 uval;
  char ch_2;
  uint *arg_eax;
  int loop_i;
  uint uval_2;
  uint uval_3;
  ushort *arg_edx;
  uint uval_4;
  int val;
  int val_2;
  byte flag_3;
  undefined4 uval_5;
  short short_val_4;
  ushort auStack_50 [2];
  uint local_4c;
  ushort auStack_48 [2];
  undefined1 local_44;
  byte bStack_43;
  undefined2 uStack_42;
  ushort local_40 [2];
  undefined1 local_3c;
  char local_3b;
  undefined2 local_3a;
  ushort auStack_38 [2];
  byte *local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  undefined4 local_14;
  
  flag_3 = 0;
  loop_i = (uint)*arg_edx - (uint)(ushort)*arg_eax;
  local_30 = (uint)arg_edx[1] - (uint)*(ushort *)((int)arg_eax + 2);
  val = (*(int *)(arg_edx + 1) >> 0x10) - (*(int *)((int)arg_eax + 2) >> 0x10);
  uval_4 = 0;
  if ((*(char *)((int)arg_eax + 1) != *(char *)((int)arg_edx + 1)) ||
     (*(char *)((int)arg_edx + 3) != *(char *)((int)arg_eax + 3))) {
    if (loop_i < 0) {
      loop_i = -loop_i;
      local_28 = -0x100;
    }
    else {
      local_28 = 0x100;
    }
    if (local_30 < 0) {
      local_30 = -local_30;
      local_24 = -0x100;
    }
    else {
      local_24 = 0x100;
    }
    if (val < 0) {
      val = -val;
      local_18 = -0x100;
    }
    else {
      local_18 = 0x100;
    }
    local_1c = (byte *)((int)arg_eax + 1);
    local_34 = (byte *)((int)arg_edx + 1);
    if (loop_i == local_30) {
      uval_2 = (uint)*local_34 - (uint)*local_1c;
    }
    else {
      if (local_30 < loop_i) {
        local_24 = (local_30 * local_24) / loop_i;
        flag = *local_34;
        flag_2 = *local_1c;
      }
      else {
        local_28 = (local_28 * loop_i) / local_30;
        flag = *(byte *)((int)arg_edx + 3);
        flag_2 = *(byte *)((int)arg_eax + 3);
        loop_i = local_30;
      }
      uval_2 = (uint)flag - (uint)flag_2;
    }
    local_18 = (val * local_18) / loop_i;
    local_4c = *arg_eax;
    auStack_48[0] = (ushort)arg_eax[1];
    uStack_42 = *(ushort *)((int)arg_eax + 2) + (short)local_24;
    local_40[0] = (ushort)arg_eax[1] + (short)local_18;
    _local_44 = (ushort)*arg_eax + (short)local_28;
    for (loop_i = (uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f); loop_i != 0;
        loop_i = loop_i + -1) {
      uval_3 = update_fn_0ddb5c();
      short_val_3 = local_3a;
      ch_2 = local_3b;
      uval = local_3c;
      uval_2 = local_4c;
      uval_4 = uval_4 | uval_3;
      if ((uval_4 & 1) != 0) {
        return 0;
      }
      local_14 = 3;
      local_20 = (uStack_42._1_1_ / 3) * 0x300;
      if ((*(byte *)((int)&g_map_subtiles + ((bStack_43 / 3) * 3 + local_20 + 0x101) * 5) & 0x40) != 0
         ) {
        return 0;
      }
      val_2 = (uint)bStack_43 - (local_4c >> 8 & 0xff);
      val = (uint)uStack_42._1_1_ - (local_4c >> 0x18);
      short_val_2 = uStack_42;
      if ((val_2 != 0) && (val != 0)) {
        local_3c = (undefined1)local_4c;
        local_3b = (char)(local_4c >> 8);
        local_3a._0_1_ = (undefined1)(local_4c >> 0x10);
        local_3a._1_1_ = (char)(local_4c >> 0x18);
        ch = local_3a._1_1_;
        short_val = (short)local_4c;
        short_val_4 = (short)(local_4c >> 0x10);
        switch(val * 2 + val_2) {
        case 1:
          auStack_38[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          auStack_50[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          local_3a._1_1_ = local_3a._1_1_ + '\x01';
          uval_5 = CONCAT22(short_val_4,short_val + -0x100);
          uval_2 = update_fn_0ddb5c(uval_5);
          if (((uval_4 | uval_2) & 1) != 0) {
            return 0;
          }
          uval_3 = update_fn_0ddb5c(uval_5);
          uval_4 = uval_4 | uval_2 | uval_3;
          uval = local_3c;
          ch_2 = local_3b;
          short_val_2 = uStack_42;
          short_val_3 = CONCAT11(local_3a._1_1_,(undefined1)local_3a);
          if ((uval_4 & 1) != 0) {
            return 0;
          }
          break;
        case 3:
          auStack_38[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          auStack_50[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          uval_5 = CONCAT13(ch + '\x01',(int3)uval_2);
          local_3b = local_3b + '\x01';
          uval_2 = update_fn_0ddb5c(uval_5);
          if (((uval_4 | uval_2) & 1) != 0) {
            return 0;
          }
          uval_3 = update_fn_0ddb5c(uval_5);
          uval_4 = uval_4 | uval_2 | uval_3;
          uval = local_3c;
          ch_2 = local_3b;
          short_val_2 = uStack_42;
          short_val_3 = CONCAT11(local_3a._1_1_,(undefined1)local_3a);
          if ((uval_4 & 1) != 0) {
            return 0;
          }
          break;
        case -3:
          auStack_38[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          auStack_50[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          local_3a = CONCAT11(local_3a._1_1_,(undefined1)local_3a) + -0x100;
          uval_5 = CONCAT22(short_val_4,short_val + -0x100);
          uval_2 = update_fn_0ddb5c(uval_5);
          if (((uval_4 | uval_2) & 1) != 0) {
            return 0;
          }
          uval_3 = update_fn_0ddb5c(uval_5);
          uval_4 = uval_4 | uval_2 | uval_3;
          uval = local_3c;
          ch_2 = local_3b;
          short_val_2 = uStack_42;
          short_val_3 = local_3a;
          if ((uval_4 & 1) != 0) {
            return 0;
          }
          break;
        case -1:
          auStack_38[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          auStack_50[(uint)flag_3 * -4] = auStack_48[(uint)flag_3 * -4];
          uval_5 = CONCAT22(short_val_4 + -0x100,short_val);
          local_3b = local_3b + '\x01';
          uval_2 = update_fn_0ddb5c(uval_5);
          if (((uval_4 | uval_2) & 1) != 0) {
            return 0;
          }
          uval_3 = update_fn_0ddb5c(uval_5);
          uval_4 = uval_4 | uval_2 | uval_3;
          uval = local_3c;
          ch_2 = local_3b;
          short_val_2 = uStack_42;
          short_val_3 = CONCAT11(local_3a._1_1_,(undefined1)local_3a);
          if ((uval_4 & 1) != 0) {
            return 0;
          }
        }
      }
      local_3b = ch_2;
      local_3c = uval;
      uStack_42._1_1_ = (byte)((ushort)short_val_2 >> 8);
      uStack_42._0_1_ = (undefined1)short_val_2;
      short_val = (short)local_28;
      local_4c = CONCAT13(uStack_42._1_1_,CONCAT12((undefined1)uStack_42,_local_44));
      uStack_42 = short_val_2;
      local_3a = short_val_3;
      auStack_48[(uint)flag_3 * -4] = local_40[(uint)flag_3 * -4];
      uStack_42 = uStack_42 + (short)local_24;
      local_40[0] = local_40[0] + (short)local_18;
      _local_44 = _local_44 + short_val;
    }
    if (uval_4 != 0) {
      return uval_4;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : update_fn_0de008 (Original VA: 0xde008, Ghidra: FUN_000de008)
 * Prototype: undefined4 update_fn_0de008(void);
 * Address  : 0xde008 (Size: 77 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0de008
 * Callers  : 0 -> 
 * Callees  : 3 -> door_process_map_subtile_022b3a, ceiling_process_map_subtile_07da18, move_fn_0b3afc
 ******************************************************************************/
undefined4 update_fn_0de008(void)

{
  int val;
  undefined4 uval;
  int extraout_ECX;
  
  val = door_process_map_subtile_022b3a();
  if (val == 0) {
    val = move_fn_0b3afc();
    if (val != 0) {
      return 2;
    }
    uval = ceiling_process_map_subtile_07da18();
    return uval;
  }
  if (val == extraout_ECX) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : update_fn_0de074 (Original VA: 0xde074, Ghidra: FUN_000de074)
 * Prototype: uint update_fn_0de074(void);
 * Address  : 0xde074 (Size: 1541 bytes)
 * Module   : update.cpp [address_order_boundary_interpolation]
 * Purpose  : Module update.cpp procedure @ 0x0de074
 * Callers  : 1 -> anger_handle_door_thing_0102c0
 * Callees  : 3 -> door_process_map_subtile_022b3a, ceiling_process_map_subtile_07da18, move_fn_0b3afc
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000de662) */

uint update_fn_0de074(void)

{
  short short_val;
  short short_val_2;
  undefined1 uval;
  ushort uval_2;
  char ch;
  char ch_2;
  short short_val_3;
  ushort *arg_eax;
  int val;
  int val_2;
  uint uval_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  ushort *arg_edx;
  uint uval_4;
  uint uval_5;
  uint uval_6;
  byte flag;
  undefined1 local_5c;
  byte bStack_5b;
  undefined2 uStack_5a;
  ushort local_58 [2];
  undefined4 local_54;
  ushort auStack_50 [2];
  undefined1 local_4c;
  byte local_4b;
  undefined2 local_4a;
  ushort auStack_48 [3];
  undefined2 uStack_42;
  ushort auStack_40 [2];
  byte *local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  
  flag = 0;
  val = (uint)*arg_edx - (uint)*arg_eax;
  local_2c = (uint)arg_edx[1] - (uint)arg_eax[1];
  val_2 = (*(int *)(arg_edx + 1) >> 0x10) - (*(int *)(arg_eax + 1) >> 0x10);
  uval_6 = 0;
  if ((*(char *)((int)arg_eax + 1) != *(char *)((int)arg_edx + 1)) ||
     (*(char *)((int)arg_eax + 3) != *(char *)((int)arg_edx + 3))) {
    if (val < 0) {
      val = -val;
      local_28 = -0x100;
    }
    else {
      local_28 = 0x100;
    }
    if (local_2c < 0) {
      local_2c = -local_2c;
      local_18 = -0x100;
    }
    else {
      local_18 = 0x100;
    }
    if (val_2 < 0) {
      val_2 = -val_2;
      local_34 = -0x100;
    }
    else {
      local_34 = 0x100;
    }
    val_2 = val_2 * local_34;
    local_24 = (byte *)((int)arg_eax + 1);
    local_20 = (byte *)((int)arg_edx + 1);
    if (val == local_2c) {
      local_34 = val_2 / val;
      uval_3 = (uint)*local_20;
      uval_4 = (uint)*local_24;
    }
    else if (local_2c < val) {
      local_18 = (local_2c * local_18) / val;
      local_34 = val_2 / val;
      uval_3 = (uint)*local_20;
      uval_4 = (uint)*local_24;
    }
    else {
      local_28 = (local_28 * val) / local_2c;
      local_34 = val_2 / local_2c;
      uval_3 = (uint)*(byte *)((int)arg_edx + 3);
      uval_4 = (uint)*(byte *)((int)arg_eax + 3);
    }
    uval_5 = (int)(uval_3 - uval_4) >> 0x1f;
    local_30 = (uval_3 - uval_4 ^ uval_5) - uval_5;
    local_54 = *(undefined4 *)arg_eax;
    auStack_50[0] = arg_eax[2];
    short_val_3 = *arg_eax + (short)local_28;
    uStack_5a = arg_eax[1] + (short)local_18;
    local_58[0] = arg_eax[2] + (short)local_34;
    if (local_30 != 0) {
      local_1c = &local_4b;
      local_3c = &local_4b;
      local_14 = &bStack_5b;
      do {
        bStack_5b = (byte)((ushort)short_val_3 >> 8);
        local_5c = (undefined1)short_val_3;
        val = door_process_map_subtile_022b3a();
        if (val == 0) {
          val = move_fn_0b3afc();
          if (val == 0) {
            ch = ceiling_process_map_subtile_07da18();
            short_val = uStack_5a;
            short_val_2 = local_4a;
          }
          else {
            ch = '\x02';
            short_val = uStack_5a;
            short_val_2 = local_4a;
          }
        }
        else {
          short_val = uStack_5a;
          short_val_2 = local_4a;
          if (val == extraout_ECX) {
            ch = '\0';
          }
          else {
            ch = '\x01';
          }
        }
        uval_2 = auStack_48[2];
        uval = local_4c;
        uStack_5a._1_1_ = (byte)((ushort)short_val >> 8);
        uval_6 = uval_6 | (int)ch;
        if ((uval_6 & 1) != 0) {
          return 0;
        }
        if (((uint)bStack_5b - (uint)local_54._1_1_ != 0) &&
           ((uint)uStack_5a._1_1_ - (uint)local_54._3_1_ != 0)) {
          local_4c = (undefined1)local_54;
          local_4a._0_1_ = (undefined1)((uint)local_54 >> 0x10);
          auStack_48[2] = (ushort)local_54;
          short_val_3 = (short)((uint)local_54 >> 0x10);
          uStack_42._0_1_ = (undefined1)local_4a;
          local_4a._1_1_ = local_54._3_1_;
          uStack_42._1_1_ = local_54._3_1_;
          uStack_5a = short_val;
          switch(((uint)uStack_5a._1_1_ - (uint)local_54._3_1_) * 2 +
                 ((uint)bStack_5b - (uint)local_54._1_1_)) {
          case 1:
            auStack_48[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            auStack_40[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            auStack_48[2] = auStack_48[2] + -0x100;
            local_4a._1_1_ = local_54._3_1_ + 1;
            local_4b = local_54._1_1_;
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch = ceiling_process_map_subtile_07da18();
              }
              else {
                ch = '\x02';
              }
            }
            else if (val == extraout_ECX_04) {
              ch = '\0';
            }
            else {
              ch = '\x01';
            }
            if (((uval_6 | (int)ch) & 1) != 0) {
              return 0;
            }
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch_2 = ceiling_process_map_subtile_07da18();
                short_val = uStack_5a;
              }
              else {
                ch_2 = '\x02';
                short_val = uStack_5a;
              }
            }
            else {
              short_val = uStack_5a;
              if (val == extraout_ECX_05) {
                ch_2 = '\0';
              }
              else {
                ch_2 = '\x01';
              }
            }
            uval_6 = uval_6 | (int)ch | (int)ch_2;
            uval = local_4c;
            uval_2 = auStack_48[2];
            short_val_2 = CONCAT11(local_4a._1_1_,(undefined1)local_4a);
            if ((uval_6 & 1) != 0) {
              return 0;
            }
            break;
          case 3:
            auStack_48[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            auStack_40[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            uStack_42._1_1_ = local_54._3_1_ + 1;
            local_4b = local_54._1_1_ + 1;
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch = ceiling_process_map_subtile_07da18();
              }
              else {
                ch = '\x02';
              }
            }
            else if (val == extraout_ECX_06) {
              ch = '\0';
            }
            else {
              ch = '\x01';
            }
            if (((uval_6 | (int)ch) & 1) != 0) {
              return 0;
            }
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch_2 = ceiling_process_map_subtile_07da18();
                short_val = uStack_5a;
              }
              else {
                ch_2 = '\x02';
                short_val = uStack_5a;
              }
            }
            else {
              short_val = uStack_5a;
              if (val == extraout_ECX_07) {
                ch_2 = '\0';
              }
              else {
                ch_2 = '\x01';
              }
            }
            uval_6 = uval_6 | (int)ch | (int)ch_2;
            uval = local_4c;
            uval_2 = auStack_48[2];
            short_val_2 = CONCAT11(local_4a._1_1_,(undefined1)local_4a);
            if ((uval_6 & 1) != 0) {
              return 0;
            }
            break;
          case 0xfffffffd:
            auStack_48[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            auStack_40[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            auStack_48[2] = auStack_48[2] + -0x100;
            local_4b = local_54._1_1_;
            local_4a = short_val_3 + -0x100;
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch = ceiling_process_map_subtile_07da18();
              }
              else {
                ch = '\x02';
              }
            }
            else if (val == extraout_ECX_00) {
              ch = '\0';
            }
            else {
              ch = '\x01';
            }
            if (((uval_6 | (int)ch) & 1) != 0) {
              return 0;
            }
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch_2 = ceiling_process_map_subtile_07da18();
                short_val = uStack_5a;
              }
              else {
                ch_2 = '\x02';
                short_val = uStack_5a;
              }
            }
            else {
              short_val = uStack_5a;
              if (val == extraout_ECX_01) {
                ch_2 = '\0';
              }
              else {
                ch_2 = '\x01';
              }
            }
            uval_6 = uval_6 | (int)ch | (int)ch_2;
            uval = local_4c;
            uval_2 = auStack_48[2];
            short_val_2 = local_4a;
            if ((uval_6 & 1) != 0) {
              return 0;
            }
            break;
          case 0xffffffff:
            auStack_48[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            auStack_40[(uint)flag * -4] = auStack_50[(uint)flag * -4];
            local_4b = local_54._1_1_ + 1;
            uStack_42 = short_val_3 + -0x100;
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch = ceiling_process_map_subtile_07da18();
              }
              else {
                ch = '\x02';
              }
            }
            else if (val == extraout_ECX_02) {
              ch = '\0';
            }
            else {
              ch = '\x01';
            }
            if (((uval_6 | (int)ch) & 1) != 0) {
              return 0;
            }
            val = door_process_map_subtile_022b3a();
            if (val == 0) {
              val = move_fn_0b3afc();
              if (val == 0) {
                ch_2 = ceiling_process_map_subtile_07da18();
                short_val = uStack_5a;
              }
              else {
                ch_2 = '\x02';
                short_val = uStack_5a;
              }
            }
            else {
              short_val = uStack_5a;
              if (val == extraout_ECX_03) {
                ch_2 = '\0';
              }
              else {
                ch_2 = '\x01';
              }
            }
            uval_6 = uval_6 | (int)ch | (int)ch_2;
            uval = local_4c;
            uval_2 = auStack_48[2];
            short_val_2 = CONCAT11(local_4a._1_1_,(undefined1)local_4a);
            if ((uval_6 & 1) != 0) {
              return 0;
            }
          }
        }
        auStack_48[2] = uval_2;
        local_4c = uval;
        uStack_5a._1_1_ = (byte)((ushort)short_val >> 8);
        uStack_5a._0_1_ = (undefined1)short_val;
        short_val_3 = CONCAT11(bStack_5b,local_5c) + (short)local_28;
        local_54 = CONCAT13(uStack_5a._1_1_,
                            CONCAT12((undefined1)uStack_5a,CONCAT11(bStack_5b,local_5c)));
        local_4a = short_val_2;
        auStack_50[(uint)flag * -4] = local_58[(uint)flag * -4];
        uStack_5a = short_val + (short)local_18;
        local_58[0] = local_58[0] + (short)local_34;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
      if (uval_6 != 0) {
        return uval_6;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : update_go_first_person_without_0de6a8 (Original VA: 0xde6a8, Ghidra: FUN_000de6a8)
 * Prototype: undefined8 update_go_first_person_without_0de6a8(void);
 * Address  : 0xde6a8 (Size: 4090 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 2207
 * Purpose  : String 'Cannot go first person without controlling creature'
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 42 -> compturn_update_player_view_state_021369, door_update_creature_and_thing_023250, effect_process_thing_entity_024344, event_fn_0275c1, event_update_player_dungeon_02764f, evil_process_thing_entity_027892, instance_fn_049f4e, moodneed_fn_051374 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 update_go_first_person_without_0de6a8(void)

{
  undefined1 uval;
  int *player_off;
  byte *thing_ptr;
  undefined2 *word_ptr;
  ulonglong rand_seed;
  char ch;
  ushort loop_i;
  short short_val;
  uint uval_2;
  int val;
  undefined4 uval_3;
  undefined4 extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  int extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  int extraout_ECX_07;
  ushort extraout_DX;
  ushort extraout_DX_00;
  int thing_ptr_2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  int cctrl_ptr;
  byte *thing_ptr_3;
  undefined1 *word_ptr_2;
  int *int_ptr;
  int val_2;
  byte flag;
  uint auStack_1024 [1012];
  undefined1 auStack_54 [8];
  uint auStack_4c [12];
  uint local_1c;
  
  flag = 0;
  int_ptr = (int *)auStack_54;
  word_ptr_2 = auStack_54;
  if ((g_game_operation_flags & 1) == 0) {
    switch((&g_player_view_type)[(g_my_player_word >> 0x18) * 0x4ef]) {
    case 1:
    case 2:
    case 5:
      g_bss_002e8c09 = 0x1e;
      g_bss_002e8c05 = 0x1e;
    }
    light_fn_0ac694();
  }
  uval_2 = packet_exchange_all_players_packets();
  if (g_bss_0019a2a0 == '\0') {
    uval_2 = 1;
    word_ptr_2 = auStack_54;
    if (g_game_type != '\x01') {
      if ((g_game_operation_flags & 1) == 0) {
        if (((&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] & 8) != 0) {
          panmap_update_player_view_state_0627b5();
          (&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] =
               (&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] & 0xf7;
        }
        for (local_1c = 0; (local_1c & 0xffff) <= (uint)g_bss_002eb542; local_1c = local_1c + 1) {
          LbScreenWaitVbi();
          LbScreenWaitVbi();
          LbScreenWaitVbi();
        }
        g_bss_002ed3dd = 1;
        for (loop_i = 1; loop_i < 0x20; loop_i = loop_i + 1) {
          if (*(int *)(&g_bss_002ed35d + (uint)loop_i * 4) != 0) {
            g_bss_002ed3dd = 0;
          }
        }
        if ((g_game_turn & 1) != 0) {
          g_bss_003d97ac = (g_bss_003d97ac + 1) % 8;
          thing_ptr_2 = g_bss_003d97ac * 2;
          cctrl_ptr = 0;
          do {
            int_ptr = (int *)(&g_bss_002e78e9 + thing_ptr_2);
            val = cctrl_ptr + 4;
            thing_ptr_2 = thing_ptr_2 + 0x10;
            *(undefined4 *)((int)&g_bss_002f2163 + cctrl_ptr) = (&g_bss_002f18e3)[*int_ptr >> 0x10];
            cctrl_ptr = val;
          } while (val != 0xc0);
        }
        update_update_slab_subtile_columns_0df760();
        room_process_dungeon_room_0c7be4();
        door_update_creature_and_thing_023250();
        uval_3 = 1;
        cctrl_ptr = 0;
        thing_ptr_2 = 0;
        do {
          if ((((&g_players)[thing_ptr_2] & (byte)uval_3) != 0) && ((&g_bss_0019d0f4)[thing_ptr_2] == '\x01')
             ) {
            research_illegal_research_type_process_066b28();
            uval_3 = extraout_ECX;
            thing_ptr_2 = extraout_EDX;
          }
          cctrl_ptr = cctrl_ptr + 1;
          thing_ptr_2 = thing_ptr_2 + 0x4ef;
        } while (cctrl_ptr < 5);
        cctrl_ptr = 0;
        thing_ptr_2 = 0;
        do {
          if ((((&g_players)[thing_ptr_2] & 1) != 0) && ((&g_bss_0019d0f4)[thing_ptr_2] == '\x01')) {
            workshop_door_choice_076b29();
            thing_ptr_2 = extraout_EDX_00;
          }
          cctrl_ptr = cctrl_ptr + 1;
          thing_ptr_2 = thing_ptr_2 + 0x4ef;
        } while (cctrl_ptr < 5);
        event_update_player_dungeon_02764f();
        evil_process_thing_entity_027892();
        script_update_player_view_state_06809c();
        if ((g_bss_0019d0b9 & 4) != 0) {
          compturn_update_player_view_state_021369();
        }
        thing_ptr_3 = &g_players;
        thing_ptr_2 = 0;
        do {
          if ((*thing_ptr_3 & 1) != 0) {
            instance_fn_049f4e();
            thing_ptr_2 = extraout_EDX_01;
          }
          thing_ptr_2 = thing_ptr_2 + 1;
          thing_ptr_3 = thing_ptr_3 + 0x4ef;
        } while (thing_ptr_2 < 5);
        thing_ptr_3 = &g_players;
        thing_ptr_2 = 0;
        do {
          if ((((*thing_ptr_3 & 1) != 0) && ((*thing_ptr_3 & 0x40) == 0)) && (thing_ptr_3[0x453] == 0xf)) {
            **(undefined2 **)(thing_ptr_3 + 0x38) =
                 *(undefined2 *)((int)(&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x2f)] + 0xd);
            *(undefined2 *)(*(int *)(thing_ptr_3 + 0x38) + 2) =
                 *(undefined2 *)((int)(&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x2f)] + 0xf);
          }
          thing_ptr_2 = thing_ptr_2 + 1;
          thing_ptr_3 = thing_ptr_3 + 0x4ef;
        } while (thing_ptr_2 < 5);
        thing_ptr_2 = 0;
        do {
          thing_ptr_2 = thing_ptr_2 + 1;
        } while (thing_ptr_2 < 5);
        thing_ptr_3 = &g_players;
        do {
          if (((*thing_ptr_3 & 1) != 0) && (thing_ptr_3[0x2c] == 1)) {
            bflib_system_io_fn_0e612c();
            bflib_system_io_fn_0e612c();
            effect_process_thing_entity_024344();
            if (((g_game_system_flags & 1) != 0) &&
               ((*(int *)(extraout_ECX_00 + 0x4eb) == 0 && (extraout_ECX_00[0x29] != 0)))) {
              *(uint *)(extraout_ECX_00 + 0x4eb) = g_game_turn + 1;
            }
            thing_ptr_3 = extraout_ECX_00;
            if (*(uint *)(extraout_ECX_00 + 0x4eb) == g_game_turn) {
              thing_ptr_2 = CONCAT31((uint3)(*(uint *)(extraout_ECX_00 + 0x4eb) >> 8) ^
                                (uint3)(g_game_turn >> 8),extraout_ECX_00[0x29]);
              if (thing_ptr_2 == 1) {
                if (extraout_ECX_00 == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
                  newgui_copy_state_struct_05bcc1();
                }
                newgui_update_player_dungeon_05ba80();
                thing_ptr_3 = extraout_ECX_01;
              }
              else if (thing_ptr_2 == 2) {
                if (extraout_ECX_00 == &g_players + (g_my_player_word >> 0x18) * 0x4ef) {
                  newgui_copy_state_struct_05bcc1();
                }
                newgui_update_player_dungeon_05ba80();
                thing_ptr_3 = extraout_ECX_02;
              }
            }
          }
          thing_ptr_3 = thing_ptr_3 + 0x4ef;
        } while (thing_ptr_3 <= &g_bss_0019e484);
        setup_init_color_tables();
        int_ptr = (int *)auStack_54;
        if ((&g_player_view_type)[(g_my_player_word >> 0x18) * 0x4ef] == '\x01') {
          auStack_4c[4] = g_data_001927d4;
          auStack_4c[(uint)flag * -2 + 5] = (&g_data_001927d8)[(uint)flag * -2];
          auStack_4c[(uint)flag * -2 + (uint)flag * -2 + 6] =
               (&g_data_001927dc)[(uint)flag * -2 + (uint)flag * -2];
          int_ptr = (int *)auStack_54;
          if (g_bss_003d97b0 != 0) {
            LbScreenWaitVbi();
            thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ec6];
            if (g_thing_ptrs < thing_ptr_3) {
              do {
                if (((&g_data_0018b916)[(uint)thing_ptr_3[0x1a] * 0x16] != '\0') &&
                   (thing_ptr_2 = update_fn_0dc440(), thing_ptr_3 = extraout_ECX_03, thing_ptr_2 < (int)auStack_4c[4])
                   ) {
                  cctrl_ptr = 8;
                  do {
                    *(undefined4 *)((int)auStack_4c + cctrl_ptr + 4) =
                         *(undefined4 *)((int)auStack_4c + cctrl_ptr);
                    *(undefined4 *)((int)auStack_4c + cctrl_ptr + 0x10) =
                         *(undefined4 *)((int)auStack_4c + cctrl_ptr + 0xc);
                    cctrl_ptr = cctrl_ptr + -4;
                  } while (cctrl_ptr != 0);
                  auStack_4c[1] = (uint)*(ushort *)(extraout_ECX_03 + 0x1b);
                  auStack_4c[4] = thing_ptr_2;
                }
                thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
              } while (g_thing_ptrs < thing_ptr_3);
            }
            thing_ptr_2 = 0;
            word_ptr_2 = auStack_54;
            do {
              int_ptr = (int *)word_ptr_2;
              if (*(int *)(word_ptr_2 + thing_ptr_2 + 0xc) == 0) break;
              if (*(char *)((int)(&g_thing_ptrs)[*(int *)(word_ptr_2 + thing_ptr_2 + 0xc)] + 0x66) == '\0')
              {
LAB_000dec53:
                *(undefined4 *)(word_ptr_2 + -4) = 0x100;
                *(undefined4 *)(word_ptr_2 + -8) = 2;
                *(undefined4 *)(word_ptr_2 + -0xc) = 1;
                int_ptr = (int *)(word_ptr_2 + -0x10);
                *(undefined4 *)(word_ptr_2 + -0x10) = 3;
                *(undefined4 *)(word_ptr_2 + -0x14) = 0xdec71;
                sound_fn_06e538();
              }
              else {
                *(undefined4 *)(word_ptr_2 + -4) = 0xdec4f;
                cctrl_ptr = sound_fn_06f865();
                if (cctrl_ptr == 0) goto LAB_000dec53;
              }
              thing_ptr_2 = thing_ptr_2 + 4;
              word_ptr_2 = (undefined1 *)int_ptr;
            } while (thing_ptr_2 < 0xc);
          }
          g_bss_003d97b0 = (byte)((g_bss_003d97b0 + 1) % 4);
        }
        *int_ptr = g_data_001927c8;
        int_ptr[(uint)flag * -2 + 1] = (&g_data_001927cc)[(uint)flag * -2];
        (int_ptr + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (&g_data_001927d0)[(uint)flag * -2 + (uint)flag * -2];
        player_off = *(int **)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef);
        int_ptr[9] = *player_off;
        *(short *)(int_ptr + (uint)flag * -2 + 10) = (short)player_off[(uint)flag * -2 + 1];
        if (g_bss_003d97b4 == 0) {
          int_ptr[-1] = 0xdecda;
          LbScreenWaitVbi();
          thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6eb6];
          if (thing_ptr_3 != g_thing_ptrs) {
            do {
              flag = thing_ptr_3[1];
              thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
              thing_ptr_3[1] = flag & 0xdf;
              if ((((*thing_ptr_3 & 0x10) == 0) && ((flag & 2) == 0)) &&
                 (*(int *)(&g_data_001880f4 + (uint)thing_ptr_3[0x1a] * 0x58) != 0)) {
                thing_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_3 + 100)]; /* thing->ccontrol_idx */
                int_ptr[-1] = 0xded4d;
                cctrl_ptr = update_fn_0dc440();
                if ((cctrl_ptr < *int_ptr) &&
                   (((*(short *)(thing_ptr_2 + 9) != 0 &&
                     (*(int *)(extraout_ECX_04 + 0xf) >> 0x10 <=
                      (int)(uint)*(ushort *)(extraout_ECX_04 + 0x60))) ||
                    ((*(byte *)(extraout_ECX_04 + 0x25) & 0x20) != 0)))) {
                  thing_ptr_2 = 8;
                  do {
                    *(undefined4 *)((int)&g_bss_003d97b8 + thing_ptr_2) =
                         *(undefined4 *)((int)&g_bss_003d97b4 + thing_ptr_2);
                    *(undefined4 *)((int)int_ptr + thing_ptr_2) =
                         *(undefined4 *)((int)int_ptr + thing_ptr_2 + -4);
                    thing_ptr_2 = thing_ptr_2 + -4;
                  } while (thing_ptr_2 != 0);
                  g_bss_003d97b8 = (uint)*(ushort *)(extraout_ECX_04 + 0x1b);
                  *int_ptr = cctrl_ptr;
                }
              }
              thing_ptr_3 = thing_ptr;
            } while (thing_ptr != g_thing_ptrs);
          }
        }
        thing_ptr_2 = 0;
        do {
          if (*(int *)((int)&g_bss_003d97b8 + thing_ptr_2) == 0) break;
          if (*(char *)((int)(&g_thing_ptrs)[*(int *)((int)&g_bss_003d97b8 + thing_ptr_2)] + 0x1f) ==
              '\x05') {
            thing_ptr_3 = (byte *)((int)(&g_thing_ptrs)[*(int *)((int)&g_bss_003d97b8 + thing_ptr_2)] + 1);
            *thing_ptr_3 = *thing_ptr_3 | 0x20;
            int_ptr[-1] = 0xdedcf;
            sound_update_creature_control_06e61e();
          }
          thing_ptr_2 = thing_ptr_2 + 4;
        } while (thing_ptr_2 < 0xc);
        if ((g_bss_003d97b4 == 0) &&
           (thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6eb6], thing_ptr_3 != g_thing_ptrs)) {
          do {
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
            if ((thing_ptr_3[0x1a] == 0x13) && (-1 < (char)(thing_ptr_3[1] << 2))) {
              int_ptr[-1] = 0xdee37;
              thing_ptr_2 = sound_fn_06f865();
              if (thing_ptr_2 != 0) {
                int_ptr[-1] = 0xdee49;
                sound3d_fn_06f72b();
              }
            }
            thing_ptr_3 = thing_ptr;
          } while (thing_ptr != g_thing_ptrs);
        }
        g_bss_003d97b4 = (g_bss_003d97b4 + 1) % 4;
        int_ptr[-1] = 0xdee85;
        panmap_fn_062578();
        if (g_bss_002ed402 != 0) {
          if ((g_game_turn < (uint)(g_bss_002ed402 + g_bss_002ee894)) &&
             ((((&g_bss_0019d0f1)[(ram0x002ed407 >> 0x18) * 0x4ef] == '\x02' ||
               ((&g_dungeons)[(ram0x002ed407 >> 0x18) * 0xa84] == 0)) ||
              (*(char *)((int)(&g_thing_ptrs)
                              [(ushort)(&g_dungeons)[(ram0x002ed407 >> 0x18) * 0xa84]] + 7) ==
               '\x03')))) {
            g_bss_002ed402 = 0;
          }
          if (g_bss_002ed402 + g_bss_002ee894 == g_game_turn) {
            uval_3 = 1;
            thing_ptr_2 = 0;
            do {
              if ((((&g_players)[thing_ptr_2] & (byte)uval_3) != 0) &&
                 ((&g_bss_0019d0f4)[thing_ptr_2] == '\x01')) {
                int_ptr[-1] = 0xdef4a;
                specials_fn_070c0c();
                uval_3 = extraout_EDX_02;
              }
              thing_ptr_2 = thing_ptr_2 + 0x4ef;
            } while (thing_ptr_2 != 0x18ab);
          }
          if ((uint)(g_bss_002ed402 + g_bss_002ee894) < g_game_turn) {
            uval_2 = 0;
            thing_ptr_2 = 0;
            cctrl_ptr = 0;
            do {
              if (((((&g_players)[thing_ptr_2] & 1) != 0) && ((&g_bss_0019d0f4)[thing_ptr_2] == '\x01')) &&
                 (((&g_bss_0019d0f1)[thing_ptr_2] == '\0' && ((&g_bss_002e0ea2)[cctrl_ptr] == '\0')))) {
                int_ptr[-1] = 0xdefbf;
                event_fn_0275c1();
                int_ptr[-1] = 0xdefc7;
                update_update_player_dungeon_0dd6c8();
                uval_2 = extraout_ECX_05;
                loop_i = extraout_DX;
                if (extraout_ECX_05 == (byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
                  int_ptr[-1] = g_display_palette;
                  int_ptr[-2] = 0xdeff0;
                  LbPaletteSet();
                  uval_2 = extraout_ECX_06;
                  loop_i = extraout_DX_00;
                }
                if (loop_i != *(ushort *)((int)&g_dungeons + cctrl_ptr)) {
                  *(undefined2 *)
                   ((int)(&g_thing_ptrs)[*(ushort *)((int)&g_dungeons + cctrl_ptr)] + 0x5e) = 0xffff;
                }
              }
              thing_ptr_2 = thing_ptr_2 + 0x4ef;
              uval_2 = uval_2 + 1;
              cctrl_ptr = cctrl_ptr + 0x1508;
            } while ((int)uval_2 < 5);
          }
        }
      }
      *(undefined4 *)((int)int_ptr + -4) = 0xdf021;
      draw_process_dungeon_room_08ed2c();
      *(undefined4 *)((int)int_ptr + 0x34) = 0;
      do {
        thing_ptr_2 = *(int *)((int)int_ptr + 0x34);
        if ((((&g_players)[thing_ptr_2] & 1) != 0) && (((&g_players)[thing_ptr_2] & 0x40) == 0)) {
          *(undefined4 *)((int)int_ptr + -4) = 0xdf0bf;
          workshop_fn_077b8d();
          word_ptr = *(undefined2 **)((int)&g_player_active_camera + thing_ptr_2);
          uval = *(undefined1 *)(word_ptr + 3);
          *(undefined4 *)((int)int_ptr + 0x30) = extraout_EDX_03;
          switch(uval) {
          case 1:
            if (*(ushort *)((int)&g_bss_0019d0f7 + thing_ptr_2) == 0) {
              if ((&g_bss_0019d578)[thing_ptr_2] != '\v') {
                *(undefined4 *)((int)int_ptr + -4) = 0xdf4e3;
                LbErrorLog(); /* LbErrorLog("update.cpp", line 2207, "Cannot go first person without controlling creature") */
              }
            }
            else {
              thing_ptr_2 = (int)(&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + thing_ptr_2)];
              *(undefined **)((int)int_ptr + 0x2c) =
                   &g_bss_002e910d + (uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6;
              *(undefined4 *)((int)int_ptr + -4) = 0xdf130;
              ch = creature_fn_081dd8();
              if (*(char *)(thing_ptr_2 + 0x1f) == '\x05') { /* thing->class_id */
                cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)]; /* thing->ccontrol_idx */
                if ((*(int *)(cctrl_ptr + 0xc6) >> 0x10 == 0) ||
                   ((int)(uint)*(ushort *)(thing_ptr_2 + 0x60) < *(int *)(thing_ptr_2 + 0xf) >> 0x10)) { /* thing->mappos.val_y */
                  *(undefined1 *)(cctrl_ptr + 0x1e9) = 0;
                }
                else {
                  *(char *)(cctrl_ptr + 0x1e9) = ch << 4;
                }
                val_2 = (uint)*(ushort *)(thing_ptr_2 + 0xd) + /* thing->mappos.val_x */
                         ((&g_slab_attr_table)[*(ushort *)(thing_ptr_2 + 0x52)] * -0x5a >> 0x10); /* thing->health */
                val = (uint)*(ushort *)(thing_ptr_2 + 0xf) + /* thing->mappos.val_y */
                         (-((int)(&PTR_LAB_00192fe0)[*(ushort *)(thing_ptr_2 + 0x52)] * -0x5a >> 8) >> 8) /* thing->health */
                ;
                if (val_2 < 0) {
                  val_2 = 0;
                }
                else if (0xffff < val_2) {
                  val_2 = 0xffff;
                }
                if (val < 0) {
                  val = 0;
                }
                else if (0xffff < val) {
                  val = 0xffff;
                }
                if ((*(byte *)(thing_ptr_2 + 0x25) & 0x20) == 0) {
                  *word_ptr = (short)val_2;
                  word_ptr[1] = (short)val;
                  *(uint *)((int)word_ptr + 7) = (uint)*(ushort *)(thing_ptr_2 + 0x52); /* thing->health */
                  loop_i = *(ushort *)(thing_ptr_2 + 0x54);
                  *(undefined4 *)((int)word_ptr + 0xf) = 0;
                  *(uint *)((int)word_ptr + 0xb) = (uint)loop_i;
                  val = *(int *)(thing_ptr_2 + 0xf) >> 0x10; /* thing->mappos.val_y */
                  uval_2 = (uint)*(ushort *)(*(int *)((int)int_ptr + 0x2c) + 0x55);
                  val_2 = *(int *)(word_ptr + 1) >> 0x10;
                  short_val = (short)((uint)*(int *)(word_ptr + 1) >> 0x10);
                  if (val_2 < (int)(val + uval_2)) {
                    word_ptr[2] = (short)((int)((val + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18) + uval_2)
                                             - val_2) / 2) + short_val;
                    val = *(int *)((int)int_ptr + 0x2c);
                    if ((int)((uint)*(ushort *)(val + 0x55) +
                             (*(int *)(thing_ptr_2 + 0xf) >> 0x10) + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18)) /* thing->mappos.val_y */
                        < *(int *)(word_ptr + 1) >> 0x10) {
LAB_000df2e9:
                      word_ptr[2] = *(short *)(thing_ptr_2 + 0x11) + (short)*(char *)(cctrl_ptr + 0x1e9) +
                                  *(short *)(val + 0x55);
                    }
                  }
                  else {
                    word_ptr[2] = (short)((int)((val + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18) + uval_2)
                                             - val_2) / 2) + short_val;
                    val = *(int *)((int)int_ptr + 0x2c);
                    if (*(int *)(word_ptr + 1) >> 0x10 <
                        (int)((*(int *)(thing_ptr_2 + 0xf) >> 0x10) + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18) /* thing->mappos.val_y */
                             + (uint)*(ushort *)(val + 0x55))) goto LAB_000df2e9;
                  }
                }
                else {
                  *word_ptr = (short)val_2;
                  word_ptr[1] = (short)val;
                  word_ptr[2] = *(undefined2 *)(thing_ptr_2 + 0x11);
                  word_ptr[2] = word_ptr[2] + *(short *)(*(int *)((int)int_ptr + 0x2c) + 0x55);
                  *(uint *)((int)word_ptr + 7) = (uint)*(ushort *)(thing_ptr_2 + 0x52); /* thing->health */
                  *(uint *)((int)word_ptr + 0xb) = (uint)*(ushort *)(thing_ptr_2 + 0x54);
                  *(int *)((int)word_ptr + 0xf) = *(int *)(cctrl_ptr + 0xca) >> 0x10;
                }
                thing_ptr_2 = (uint)*(byte *)(thing_ptr_2 + 0xe) + (uint)*(byte *)(thing_ptr_2 + 0x10) * 0x100;
                thing_ptr_2 = (int)(((*(uint *)((int)&g_map_subtiles + thing_ptr_2 * 5 + 1) & 0xfffffff) >> 0x18
                               ) * 0x100 +
                               ((*(uint *)((int)&g_map_subtiles + (thing_ptr_2 + 1) * 5 + 1) & 0xfffffff)
                               >> 0x18) * 0x100 +
                               ((*(uint *)((int)&g_map_subtiles + (thing_ptr_2 + 0x100) * 5 + 1) &
                                0xfffffff) >> 0x18) * 0x100 +
                              ((*(uint *)((int)&g_map_subtiles + (thing_ptr_2 + 0x101) * 5 + 1) & 0xfffffff
                               ) >> 0x18) * 0x100) >> 2;
                if (thing_ptr_2 + -0x40 < *(int *)(word_ptr + 1) >> 0x10) {
                  word_ptr[2] = (short)thing_ptr_2 + -0x40;
                }
              }
              else if (*(char *)(thing_ptr_2 + 0x1a) == '\n') {
                *word_ptr = *(undefined2 *)(thing_ptr_2 + 0xd); /* thing->mappos.val_x */
                word_ptr[1] = *(undefined2 *)(thing_ptr_2 + 0xf); /* thing->mappos.val_y */
                word_ptr[2] = *(short *)(thing_ptr_2 + 0x11) + 0xf0;
                *(uint *)((int)word_ptr + 7) = (uint)*(ushort *)(thing_ptr_2 + 0x52); /* thing->health */
                loop_i = *(ushort *)(thing_ptr_2 + 0x54);
                *(undefined4 *)((int)word_ptr + 0xf) = 0;
                *(uint *)((int)word_ptr + 0xb) = (uint)loop_i;
                cctrl_ptr = *(int *)(thing_ptr_2 + 0x13) >> 0x18; /* thing->anim_sprite */
                *(undefined2 *)(thing_ptr_2 + 0x54) = 0;
                if (cctrl_ptr != 0) {
                  ch = (char)((uint)*(int *)(thing_ptr_2 + 0x13) >> 0x18); /* thing->anim_sprite */
                  if (cctrl_ptr < 4) {
                    *(short *)(thing_ptr_2 + 0x54) = ch * -0x74 + 0x800;
                  }
                  else {
                    *(short *)(thing_ptr_2 + 0x54) = (ch + -3) * 0x74 + 0x6a4;
                  }
                }
              }
              else {
                *word_ptr = *(undefined2 *)(thing_ptr_2 + 0xd); /* thing->mappos.val_x */
                word_ptr[1] = *(undefined2 *)(thing_ptr_2 + 0xf); /* thing->mappos.val_y */
                *(uint *)((int)word_ptr + 7) = (uint)*(ushort *)(thing_ptr_2 + 0x52); /* thing->health */
                loop_i = *(ushort *)(thing_ptr_2 + 0x54);
                *(undefined4 *)((int)word_ptr + 0xf) = 0;
                *(uint *)((int)word_ptr + 0xb) = (uint)loop_i;
                cctrl_ptr = *(int *)(thing_ptr_2 + 0xf) >> 0x10; /* thing->mappos.val_y */
                val = *(int *)(word_ptr + 1) >> 0x10;
                short_val = (short)(((cctrl_ptr + 0x40) - val) / 2) +
                        (short)((uint)*(int *)(word_ptr + 1) >> 0x10);
                if (val < cctrl_ptr + 0x20) {
                  word_ptr[2] = short_val;
                  if ((*(int *)(thing_ptr_2 + 0xf) >> 0x10) + 0x40 < *(int *)(word_ptr + 1) >> 0x10) { /* thing->mappos.val_y */
                    word_ptr[2] = *(short *)(thing_ptr_2 + 0x11) + 0x40;
                  }
                }
                else {
                  word_ptr[2] = short_val;
                  if (*(int *)(word_ptr + 1) >> 0x10 < (*(int *)(thing_ptr_2 + 0xf) >> 0x10) + 0x40) { /* thing->mappos.val_y */
                    word_ptr[2] = *(short *)(thing_ptr_2 + 0x11) + 0x40;
                  }
                }
              }
            }
            break;
          case 2:
            *(undefined2 *)(&g_bss_0019d182 + thing_ptr_2) = *word_ptr;
            *(undefined2 *)(&g_bss_0019d184 + thing_ptr_2) =
                 *(undefined2 *)(*(int *)((int)&g_player_active_camera + thing_ptr_2) + 2);
            break;
          case 5:
            *(undefined2 *)(&g_bss_0019d104 + thing_ptr_2) = *word_ptr;
            *(undefined2 *)(&g_bss_0019d106 + thing_ptr_2) =
                 *(undefined2 *)(*(int *)((int)&g_player_active_camera + thing_ptr_2) + 2);
          }
          thing_ptr_2 = *(int *)(*(int *)((int)int_ptr + 0x30) + 0xea0);
          if (thing_ptr_2 != 0) {
            *(int *)(*(int *)((int)int_ptr + 0x30) + 0xea0) = thing_ptr_2 + -1;
          }
          thing_ptr_2 = *(int *)(*(int *)((int)int_ptr + 0x30) + 0xea4);
          if (0 < thing_ptr_2) {
            *(int *)(*(int *)((int)int_ptr + 0x30) + 0xea4) = thing_ptr_2 + -0x20;
          }
        }
        thing_ptr_2 = *(int *)((int)int_ptr + 0x34);
        *(int *)((int)int_ptr + 0x34) = thing_ptr_2 + 0x4ef;
      } while (thing_ptr_2 + 0x4ef != 0x18ab);
      if ((g_game_operation_flags & 1) == 0) {
        *(undefined4 *)((int)int_ptr + -4) = 0xdf4fa;
        mapwho_fn_051417();
        if (g_bss_00334019 == 0) {
          if (((g_bss_0019d0bd & 0x10) == 0) && (g_bss_0019d0bf != '\0')) {
            *(undefined4 *)((int)int_ptr + -4) = 0xdf521;
            bflib_sound_bf110_play_cd_non_0ecabc();
          }
          *(undefined4 *)((int)int_ptr + -4) = 0xdf54e;
          sound3d_fn_06f816();
          *(undefined4 *)((int)int_ptr + -4) = 0xdf570;
          sound3d_fn_06f82f();
        }
        g_game_turn = g_game_turn + 1;
      }
      *(undefined4 *)((int)int_ptr + -4) = 0xdf57b;
      research_update_slab_subtile_columns_0670b2();
      *(undefined4 *)((int)int_ptr + -4) = 0xdf580;
      sound3d_attempt_query_sample_06f98e();
      thing_ptr_2 = (int)(g_bss_002ee88e - g_game_turn) / 2;
      *(undefined4 *)((int)int_ptr + -4) = 0xdf5a7;
      uval_2 = specials_fn_070bf9();
      if ((uval_2 != 0) &&
         ((extraout_ECX_07 == 0 ||
          ((0 < extraout_ECX_07 &&
           ((((thing_ptr_2 < 0x65 && (thing_ptr_2 % 10 == 0)) || ((thing_ptr_2 < 0x12d && (thing_ptr_2 % 0x32 == 0))))
            || (uval_2 = thing_ptr_2 / 0xfa, thing_ptr_2 % 0xfa == 0)))))))) {
        *(undefined4 *)((int)int_ptr + -4) = 0xdf5fe;
        uval_2 = sound_non_emitter_has_been_06e9ab();
      }
      word_ptr_2 = (undefined1 *)int_ptr;
      if (g_game_turn != 0) {
        uval_2 = g_game_turn / 20000;
        if ((int)((ulonglong)g_game_turn % 20000) == 0) {
          uval_2 = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = uval_2 >> 0xd | uval_2 * 0x80000;
          rand_seed = (ulonglong)g_game_turn % 20000 << 0x20 | (ulonglong)g_action_random_seed;
          uval_2 = (uint)(rand_seed / 2000);
          if ((int)(rand_seed % 2000) == 0) {
            uval_2 = g_unsynced_random_seed * 0x24a1 + 0x24df;
            g_unsynced_random_seed = uval_2 >> 0xd | uval_2 * 0x80000;
            *(undefined4 *)((int)int_ptr + -4) = 0xdf690;
            uval_2 = moodneed_fn_051374();
          }
        }
      }
    }
    g_bss_002ebaf7 = 0;
  }
  return CONCAT44(*(undefined4 *)(word_ptr_2 + 0x48),uval_2);
}

/******************************************************************************
 * Function : update_update_slab_subtile_columns_0df760 (Original VA: 0xdf760, Ghidra: FUN_000df760)
 * Prototype: void update_update_slab_subtile_columns_0df760(void);
 * Address  : 0xdf760 (Size: 2606 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 19 -> effect_allocate_light_effect_024998, inits_allocate_dynamic_light_shot_0444a9, inits_update_player_dungeon_044dae, magic_update_slab_subtile_columns_04ef8a, magic_update_slab_subtile_columns_050349, person_fn_064a2e, sound_fn_06f671, sound_fn_06f69c ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_update_slab_subtile_columns_0df760(void)

{
  longlong rand_seed;
  byte flag;
  short short_val;
  ushort uval;
  uint thing_ptr;
  int val;
  undefined4 uval_2;
  byte *thing_ptr_2;
  int extraout_ECX;
  int val_2;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  byte *thing_ptr_3;
  uint uval_3;
  ushort *word_ptr;
  undefined1 *word_ptr_2;
  int val_3;
  undefined8 uval_4;
  undefined4 auStack_5c [3];
  undefined1 local_50 [24];
  int local_38;
  
  word_ptr = (ushort *)local_50;
  word_ptr_2 = local_50;
  local_38 = 0;
  g_bss_003d97c4 = 0;
  g_bss_003d97c8 = 0;
  g_bss_003d97cc = g_bss_001e31f9;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6eb6];
  if ((&g_thing_ptrs)[g_bss_002e6eb6] != g_thing_ptrs) {
    do {
      thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((*thing_ptr_3 & 0x40) == 0) {
        if ((*thing_ptr_3 & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      temple_update_creature_control_073fb9();
      thing_ptr_3 = thing_ptr_2;
    } while (thing_ptr_2 != g_thing_ptrs);
  }
  update_some_thing_has_been_0e01f4();
  local_38 = local_38 + extraout_ECX;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6eee];
  val_2 = 0;
  if (thing_ptr_3 != g_thing_ptrs) {
    do {
      flag = *thing_ptr_3;
      thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((flag & 0x40) == 0) {
        if ((flag & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      val_2 = temple_update_creature_control_073fb9();
      val_2 = extraout_ECX_00 + val_2;
    } while (thing_ptr_3 != g_thing_ptrs);
  }
  local_38 = local_38 + val_2;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ebe];
  val_2 = 0;
  if (thing_ptr_3 != g_thing_ptrs) {
    do {
      flag = *thing_ptr_3;
      thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((flag & 0x40) == 0) {
        if ((flag & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      val_2 = temple_update_creature_control_073fb9();
      val_2 = extraout_ECX_01 + val_2;
    } while (thing_ptr_3 != g_thing_ptrs);
  }
  local_38 = local_38 + val_2;
  val_2 = 0;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ec6];
  if ((&g_thing_ptrs)[g_bss_002e6ec6] != g_thing_ptrs) {
    do {
      thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((*thing_ptr_3 & 0x40) == 0) {
        if ((*thing_ptr_3 & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      val_2 = temple_update_creature_control_073fb9();
      val_2 = extraout_ECX_02 + val_2;
      thing_ptr_3 = thing_ptr_2;
    } while (thing_ptr_2 != g_thing_ptrs);
  }
  local_38 = local_38 + val_2;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ede];
  val_2 = 0;
  if (thing_ptr_3 != g_thing_ptrs) {
    do {
      flag = *thing_ptr_3;
      thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((flag & 0x40) == 0) {
        if ((flag & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      val_2 = temple_update_creature_control_073fb9();
      val_2 = extraout_ECX_03 + val_2;
    } while (thing_ptr_3 != g_thing_ptrs);
  }
  local_38 = local_38 + val_2;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ece];
  if (thing_ptr_3 != g_thing_ptrs) {
    do {
      flag = *thing_ptr_3;
      thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((flag & 0x40) == 0) {
        if ((flag & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      temple_update_creature_control_073fb9();
    } while (thing_ptr_3 != g_thing_ptrs);
  }
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ed6];
  val_2 = 0;
  if (thing_ptr_3 != g_thing_ptrs) {
    do {
      flag = *thing_ptr_3;
      thing_ptr_3 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((flag & 0x40) == 0) {
        if ((flag & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      val_2 = temple_update_creature_control_073fb9();
      val_2 = extraout_ECX_04 + val_2;
    } while (thing_ptr_3 != g_thing_ptrs);
  }
  local_38 = local_38 + val_2;
  val_2 = 0;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ee6];
  if ((&g_thing_ptrs)[g_bss_002e6ee6] != g_thing_ptrs) {
    do {
      thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if ((*thing_ptr_3 & 0x40) == 0) {
        if ((*thing_ptr_3 & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      val_2 = temple_update_creature_control_073fb9();
      val_2 = extraout_ECX_05 + val_2;
      thing_ptr_3 = thing_ptr_2;
    } while (thing_ptr_2 != g_thing_ptrs);
  }
  local_38 = local_38 + val_2;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6ef6];
  val_2 = 0;
  if (thing_ptr_3 != g_thing_ptrs) {
    do {
      if ((*thing_ptr_3 & 0x40) == 0) {
        if ((*thing_ptr_3 & 0x10) == 0) {
          update_fn_0e0880();
        }
        else {
          update_update_creature_control_0e413c();
        }
      }
      uval_4 = temple_update_creature_control_073fb9();
      thing_ptr_3 = (byte *)((ulonglong)uval_4 >> 0x20);
      val_2 = extraout_ECX_06 + (int)uval_4;
    } while (thing_ptr_3 != g_thing_ptrs);
  }
  local_38 = local_38 + val_2;
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6efe];
  if ((&g_thing_ptrs)[g_bss_002e6efe] != g_thing_ptrs) {
    do {
      thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      if (thing_ptr_3[0x66] != 0) {
        val_2 = sound_fn_06f6b8();
        if (val_2 == 0) {
          sound_fn_06f69c();
        }
        else {
          sound_fn_06f671();
          thing_ptr_3[0x66] = 0;
        }
      }
      thing_ptr_3 = thing_ptr_2;
    } while (thing_ptr_2 != g_thing_ptrs);
  }
  thing_ptr_3 = (&g_thing_ptrs)[g_bss_002e6f06];
  if (thing_ptr_3 != g_thing_ptrs) {
    do {
      *(byte **)(word_ptr + 10) = (&g_thing_ptrs)[*(ushort *)(thing_ptr_3 + 0x67)];
      val_2 = g_bss_002eb049 / 5;
      thing_ptr_3[0x4f] = thing_ptr_3[0x4f] | 1;
      *(short *)(thing_ptr_3 + 0x5e) = *(short *)(thing_ptr_3 + 0x5e) + -1;
      *(byte *)(word_ptr + 0x1a) = thing_ptr_3[6];
      if (*(int *)(thing_ptr_3 + 0x5c) >> 0x10 < 1) {
        word_ptr[-0xffffffff00000002] = -0x420;
        word_ptr[-0xffffffff00000001] = 0xd;
        structs_update_creature_control_072af4();
      }
      else {
        if (g_game_turn % 3 == 0) {
          thing_ptr = g_action_random_seed * 0x24a1 + 0x24df;
          thing_ptr = thing_ptr >> 0xd | thing_ptr * 0x80000;
          uval_3 = thing_ptr % 9;
          word_ptr[0x18] = 0x2c0;
          word_ptr[0x19] = 0;
          thing_ptr = thing_ptr * 0x24a1 + 0x24df;
          thing_ptr = thing_ptr >> 0xd | thing_ptr * 0x80000;
          *(uint *)(word_ptr + 0x18) =
               (*(int *)((int)&g_data_0018b647 + uval_3 * 2) >> 0x18) *
               (thing_ptr % *(uint *)(word_ptr + 0x18));
          *word_ptr = *(short *)(thing_ptr_3 + 0xd) + (short)*(undefined4 *)(word_ptr + 0x18); /* thing->mappos.val_x */
          thing_ptr = thing_ptr * 0x24a1 + 0x24df;
          g_action_random_seed = thing_ptr >> 0xd | thing_ptr * 0x80000;
          word_ptr[1] = (short)(char)((uint)*(undefined4 *)((int)&g_data_0018b647 + uval_3 * 2 + 1) >>
                                    0x18) * (short)((ulonglong)g_action_random_seed % 0x2c0) +
                       *(short *)(thing_ptr_3 + 0xf); /* thing->mappos.val_y */
          word_ptr[-0xffffffff00000002] = -0x314;
          word_ptr[-0xffffffff00000001] = 0xd;
          short_val = light_process_map_subtile_0b2440();
          word_ptr[2] = short_val + -0x80;
          word_ptr[-0xffffffff00000002] = -0x2fc;
          word_ptr[-0xffffffff00000001] = 0xd;
          val = inits_allocate_dynamic_light_shot_0444a9();
          if (val != 0) {
            *(undefined2 *)(val + 0x5e) = g_bss_002eb049;
          }
        }
        thing_ptr = g_game_turn - *(int *)(thing_ptr_3 + 9);
        if ((thing_ptr != 0) &&
           ((int)thing_ptr % val_2 ==
            ((int)((val_2 + (val_2 >> 0x1f) * -4) - (uint)((val_2 >> 0x1f) << 1 < 0)) >> 2) * 3)) {
          *word_ptr = *(short *)(thing_ptr_3 + 0xd) + 0x80; /* thing->mappos.val_x */
          word_ptr[1] = *(short *)(thing_ptr_3 + 0xf) + 0x80; /* thing->mappos.val_y */
          word_ptr[-0xffffffff00000002] = -0x29a;
          word_ptr[-0xffffffff00000001] = 0xd;
          short_val = move_process_map_subtile_0b3788();
          word_ptr[2] = short_val + 0x180;
          word_ptr[-0xffffffff00000002] = -0x285;
          word_ptr[-0xffffffff00000001] = 0xd;
          effect_allocate_light_effect_024998();
        }
        if (thing_ptr % g_bss_002ed41c == 0) {
          flag = thing_ptr_3[0x10];
          word_ptr[0xe] = 0;
          word_ptr[0xf] = 0;
          *(uint *)(word_ptr + 0x16) = flag - 1;
          do {
            flag = thing_ptr_3[0xe];
            *(uint *)((int)word_ptr + 0x20) = flag - 1;
            *(undefined4 *)((int)word_ptr + 0x24) = 0;
            *(uint *)((int)word_ptr + 0x28) = (flag - 1) * 5 + *(int *)((int)word_ptr + 0x2c) * 0x500
            ;
            do {
              thing_ptr_2 = (&g_thing_ptrs)
                       [(*(uint *)((int)&g_map_subtiles + *(int *)((int)word_ptr + 0x28) + 1) &
                        0x3fffff) >> 0xb];
              if (g_thing_ptrs < thing_ptr_2) {
                val_2 = *(int *)((int)word_ptr + 0x28);
                do {
                  if (thing_ptr_2[0x1f] == 5) {
                    *(undefined4 *)((int)word_ptr + -4) = 0xdfe99;
                    creature_fn_081c10();
                    if (*(int *)(thing_ptr_2 + 0x5c) >> 0x10 < 0) {
                      *(undefined4 *)((int)word_ptr + -4) = 0;
                      *(undefined4 *)((int)word_ptr + -8) = 1;
                      *(undefined4 *)((int)word_ptr + -0xc) = 0xdfebf;
                      creature_how_hero_have_tend_08608c();
                      thing_ptr_2 = (&g_thing_ptrs)
                               [(*(uint *)((int)&g_map_subtiles + val_2 + 1) & 0x3fffff) >> 0xb];
                      word_ptr = (ushort *)((int)word_ptr + -8);
                    }
                    else if ((*thing_ptr_2 & 0x20) == 0) {
                      flag = thing_ptr_2[7];
                      if (flag == 0xe) {
                        flag = thing_ptr_2[8];
                      }
                      if (flag != 0x8f) {
                        *(undefined4 *)((int)word_ptr + -4) = 0xdfe07;
                        val = person_fn_064a2e();
                        if (val != 0) {
                          *(undefined4 *)((int)word_ptr + -4) = 0xdfe12;
                          val = magic_update_slab_subtile_columns_050349();
                          if (val != 0) {
                            thing_ptr_2[8] = 0x8f;
                          }
                        }
                      }
                    }
                  }
                  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                } while (g_thing_ptrs < thing_ptr_2);
              }
              val_2 = *(int *)((int)word_ptr + 0x24);
              *(int *)((int)word_ptr + 0x24) = val_2 + 1;
              *(int *)((int)word_ptr + 0x28) = *(int *)((int)word_ptr + 0x28) + 5;
              *(int *)((int)word_ptr + 0x20) = *(int *)((int)word_ptr + 0x20) + 1;
            } while (val_2 + 1 < 3);
            val_2 = *(int *)((int)word_ptr + 0x1c);
            *(int *)((int)word_ptr + 0x1c) = val_2 + 1;
            *(int *)((int)word_ptr + 0x2c) = *(int *)((int)word_ptr + 0x2c) + 1;
          } while (val_2 + 1 < 3);
        }
        val_2 = *(int *)(thing_ptr_3 + 0x5c) >> 0x10;
        if (((val_2 <= (g_bss_002eb049 << 3) / 10) && ((g_bss_002eb049 * 2) / 10 <= val_2)) &&
           (rand_seed = (longlong)val_2 % (longlong)(g_bss_002eb049 / 10), (int)rand_seed == 0)) {
          thing_ptr = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = thing_ptr >> 0xd | thing_ptr * 0x80000;
          val_2 = (int)((rand_seed << 0x20 | (ulonglong)g_action_random_seed) % 9) * 2;
          val = *(int *)((int)&g_data_0018b647 + val_2 + 1);
          *word_ptr = *(short *)(&g_subtile_to_slab_lut +
                               (*(int *)((int)&g_data_0018b647 + val_2) >> 0x18) * 3 +
                               (uint)thing_ptr_3[0xe]) * 3 + 1;
          short_val = *(short *)(&g_subtile_to_slab_lut + (val >> 0x18) * 3 + (uint)thing_ptr_3[0x10]);
          word_ptr[2] = 0;
          uval = short_val * 3 + 1;
          word_ptr[1] = uval;
          if ((*word_ptr < 0xff) && (uval < 0xff)) {
            word_ptr[-0xffffffff00000002] = 0xfff1;
            word_ptr[-0xffffffff00000001] = 0xd;
            val_2 = magic_update_slab_subtile_columns_04ef8a();
            if (val_2 != 0) {
              thing_ptr = (*(uint *)((int)&g_map_subtiles +
                                ((uint)*word_ptr + (uint)word_ptr[1] * 0x100) * 5 + 1) & 0x3fffff) >>
                      0xb;
              while ((thing_ptr != 0 && (*(char *)((int)(&g_thing_ptrs)[thing_ptr] + 0x1f) != '\r'))) {
                thing_ptr = (uint)*(ushort *)((int)(&g_thing_ptrs)[thing_ptr] + 2);
              }
              if (thing_ptr == 0) {
                *word_ptr = (short)(*(int *)word_ptr << 8);
                word_ptr[1] = (ushort)(*(int *)(word_ptr + 1) << 8);
                word_ptr[4] = (ushort)thing_ptr_3[0x13] << 8;
                word_ptr[5] = (ushort)thing_ptr_3[0x14] << 8;
                word_ptr[-0xffffffff00000002] = 0x80;
                word_ptr[-0xffffffff00000001] = 0xe;
                uval_2 = update_fn_0dc440();
                *(undefined4 *)(word_ptr + 8) = uval_2;
                if ((int)(uint)*(byte *)((int)word_ptr + 0x11) <=
                    *(int *)(&g_bss_002eb04d + (uint)thing_ptr_3[0x17] * 4)) {
                  word_ptr[-0xffffffff00000002] = 0xa9;
                  word_ptr[-0xffffffff00000001] = 0xe;
                  thing_ptr_2 = (byte *)inits_update_player_dungeon_044dae();
                  if ((g_thing_ptrs < thing_ptr_2) &&
                     (*(short *)(thing_ptr_2 + 0x5e) = *(short *)(thing_ptr_3 + 0x5e) + 5,
                     0 < *(int *)(thing_ptr_2 + 0x5c) >> 0x10)) {
                    thing_ptr_2[0x13] = thing_ptr_3[0x13];
                    thing_ptr_2[0x14] = thing_ptr_3[0x14];
                  }
                }
              }
            }
          }
        }
      }
      thing_ptr_3 = *(byte **)((int)word_ptr + 0x14);
      word_ptr_2 = (undefined1 *)word_ptr;
    } while (thing_ptr_3 != g_thing_ptrs);
  }
  val_2 = 0;
  do {
    if ((((&g_players)[val_2] & 1) != 0) && (((&g_players)[val_2] & 0x40) == 0)) {
      word_ptr = *(ushort **)((int)&g_player_active_camera + val_2);
      val_3 = *(int *)(word_ptr_2 + 0x18) +
               (*(int *)(word_ptr + 1) >> 0x10) + (uint)*word_ptr + (uint)word_ptr[1];
      val = *(int *)((int)&g_bss_0019d579 + val_2);
      flag = (&g_bss_0019d578)[val_2];
      *(int *)(word_ptr_2 + 0x18) = val_3;
      *(uint *)(word_ptr_2 + 0x18) = val_3 + (uint)flag + val;
    }
    val_2 = val_2 + 0x4ef;
  } while (val_2 != 0x18ab);
  val_2 = (g_my_player_word >> 0x18) * 0x4ef;
  (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val_2] * 0x11] = word_ptr_2[0x18];
  (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val_2] * 0x11] =
       (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[val_2] * 0x11] + (char)g_action_random_seed;
  return;
}

/******************************************************************************
 * Function : update_some_thing_has_been_0e01f4 (Original VA: 0xe01f4, Ghidra: FUN_000e01f4)
 * Prototype: void update_some_thing_has_been_0e01f4(void);
 * Address  : 0xe01f4 (Size: 113 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 597
 * Purpose  : String 'Some THING has been deleted during the processing of another'
 * Callers  : 1 -> update_update_slab_subtile_columns_0df760
 * Callees  : 3 -> LbErrorLog, update_fn_0e0880, update_update_creature_control_0e413c
 ******************************************************************************/
void update_some_thing_has_been_0e01f4(void)

{
  byte flag;
  byte *thing_ptr;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  
  thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6];
  if (thing_ptr == g_thing_ptrs) {
    return;
  }
  do {
    if (*(short *)(thing_ptr + 0x1b) == 0) { /* thing->index_or_angle */
      LbErrorLog(); /* LbErrorLog("update.cpp", line 597, "Some THING has been deleted during the processing of another thing") */
      return;
    }
    flag = *thing_ptr;
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
    if ((flag & 0x40) != 0) {
      if ((flag & 0x10) == 0) {
        update_fn_0e0880();
        thing_ptr = extraout_EDX;
      }
      else {
        update_update_creature_control_0e413c();
        thing_ptr = extraout_EDX_00;
      }
    }
  } while (thing_ptr != g_thing_ptrs);
  return;
}

/******************************************************************************
 * Function : update_fn_0e0880 (Original VA: 0xe0880, Ghidra: FUN_000e0880)
 * Prototype: longlong update_fn_0e0880(void);
 * Address  : 0xe0880 (Size: 667 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Module update.cpp procedure @ 0x0e0880
 * Callers  : 2 -> update_update_slab_subtile_columns_0df760, update_some_thing_has_been_0e01f4
 * Callees  : 7 -> sound_fn_06f671, sound_fn_06f69c, sound_fn_06f6b8, light_fn_0acdfc, light_fn_0aced0, update_update_creature_control_0e413c, LbScreenWaitVbi
 ******************************************************************************/
longlong update_fn_0e0880(void)

{
  undefined4 uval;
  int thing;
  int val;
  uint arg_edx;
  int val_2;
  byte flag;
  short local_24 [6];
  
  flag = 0;
  if ((*(byte *)(thing + 0x25) & 0x40) == 0) {
    if ((*(byte *)(thing + 1) & 4) != 0) {
      *(short *)(thing + 0x2c) = *(short *)(thing + 0x2c) + *(short *)(thing + 0x32);
      *(short *)(thing + 0x2e) = *(short *)(thing + 0x2e) + *(short *)(thing + 0x34);
      *(short *)(thing + 0x30) = *(short *)(thing + 0x30) + *(short *)(thing + 0x36);
      LbScreenWaitVbi();
      *(byte *)(thing + 1) = *(byte *)(thing + 1) & 0xfb;
    }
    *(undefined4 *)(thing + 0x38) = *(undefined4 *)(thing + 0x2c);
    *(undefined2 *)(thing + 0x3c + (uint)flag * -8) =
         *(undefined2 *)(thing + 0x30 + (uint)flag * -8);
    if ((*(byte *)(thing + 1) & 8) != 0) {
      *(short *)(thing + 0x38) = *(short *)(thing + 0x38) + *(short *)(thing + 0x26);
      *(short *)(thing + 0x3c) = *(short *)(thing + 0x3c) + *(short *)(thing + 0x2a);
      *(short *)(thing + 0x3a) = *(short *)(thing + 0x3a) + *(short *)(thing + 0x28);
      LbScreenWaitVbi();
      *(byte *)(thing + 1) = *(byte *)(thing + 1) & 0xf7;
    }
  }
  val = (uint)*(byte *)(thing + 0x1f) * 4; /* thing->class_id */
  if (*(int *)(&g_data_00190303 + val) != 0) {
    val = (**(code **)(&g_data_00190303 + val))();
    if (-1 < val) {
      if ((*(byte *)(thing + 0x25) & 0x40) == 0) {
        if ((int)(uint)*(ushort *)(thing + 0x60) < *(int *)(thing + 0xf) >> 0x10) { /* thing->mappos.val_y */
          if (*(short *)(thing + 0x2c) != 0) {
            val = (0x100 - (uint)*(byte *)(thing + 0x24)) * (*(int *)(thing + 0x2a) >> 0x10);
            val_2 = val >> 0x1f;
            *(short *)(thing + 0x2c) =
                 (short)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0) >> 8);
          }
          if (*(short *)(thing + 0x2e) != 0) {
            val = (0x100 - (uint)*(byte *)(thing + 0x24)) * (*(int *)(thing + 0x2c) >> 0x10);
            val_2 = val >> 0x1f;
            *(short *)(thing + 0x2e) =
                 (short)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0) >> 8);
          }
          if ((*(byte *)(thing + 0x25) & 0x20) == 0) {
            local_24[2] = 0;
            local_24[3] = 0;
            local_24[4] = -(short)*(char *)(thing + 0x20); /* thing->model */
            *(short *)(thing + 0x36) = *(short *)(thing + 0x36) + local_24[4];
            *(byte *)(thing + 1) = *(byte *)(thing + 1) | 4;
          }
        }
        else {
          if (*(short *)(thing + 0x2c) != 0) {
            val = (*(int *)(thing + 0x2a) >> 0x10) * (0x100 - (uint)*(byte *)(thing + 0x23));
            val_2 = val >> 0x1f;
            *(short *)(thing + 0x2c) =
                 (short)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0) >> 8);
          }
          if (*(short *)(thing + 0x2e) != 0) {
            val = (0x100 - (uint)*(byte *)(thing + 0x23)) * (*(int *)(thing + 0x2c) >> 0x10);
            val_2 = val >> 0x1f;
            *(short *)(thing + 0x2e) =
                 (short)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0) >> 8);
          }
          *(undefined2 *)(thing + 0x11) = *(undefined2 *)(thing + 0x60);
          if ((*(byte *)(thing + 0x25) & 8) != 0) {
            *(undefined2 *)(thing + 0x30) = 0;
          }
        }
      }
      update_update_creature_control_0e413c();
      if (*(char *)(thing + 0x66) != '\0') {
        val = sound_fn_06f6b8();
        if (val == 0) {
          sound_fn_06f69c();
        }
        else {
          sound_fn_06f671();
          *(undefined1 *)(thing + 0x66) = 0;
        }
      }
      if ((g_bss_003d97cc != '\0') && (*(short *)(thing + 0x62) != 0)) {
        val = light_fn_0aced0();
        if (val == 0) {
          *(undefined2 *)(thing + 0x62) = 0;
        }
        else {
          uval = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
          local_24[(uint)flag * -4] = *(short *)(thing + 0x11 + (uint)flag * -8);
          local_24[0] = (short)local_24._0_4_ + *(short *)(thing + 0x58);
          light_fn_0acdfc(uval);
        }
      }
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : update_state_return_type_human_0e0b1c (Original VA: 0xe0b1c, Ghidra: FUN_000e0b1c)
 * Prototype: longlong update_state_return_type_human_0e0b1c(void);
 * Address  : 0xe0b1c (Size: 3811 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 968
 * Purpose  : String 'A state return type for a human controlled creature?'
 * Callers  : 0 -> 
 * Callees  : 28 -> anger_fn_010434, effect_allocate_light_effect_024998, evil_update_creature_control_029696, group_fn_039e7e, group_update_creature_control_039eca, inits_fn_043ac3, instance_update_creature_control_049df5, panmap_update_player_view_state_0627b5 ...
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

longlong update_state_return_type_human_0e0b1c(void)

{
  short *val;
  undefined4 uval;
  byte flag;
  undefined *word_ptr;
  short short_val;
  short short_val_2;
  byte *byte_ptr;
  char ch;
  undefined2 uval_2;
  byte *thing;
  int thing_ptr;
  int val_2;
  uint uval_3;
  uint extraout_ECX;
  undefined2 extraout_var;
  uint arg_edx;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  uint unaff_EDI;
  bool flag_2;
  byte flag_3;
  undefined2 auStack_830 [1010];
  undefined4 auStack_4c [3];
  undefined4 local_40;
  short local_3c [2];
  undefined4 local_38;
  int local_34 [6];
  byte *local_1c;
  
  flag_3 = 0;
  word_ptr_3 = &local_40;
  local_34[5] = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_34[2] = 1;
  if ((thing[7] == 0x43) &&
     ((*(byte *)((int)&g_map_subtiles + ((uint)thing[0xe] + (uint)thing[0x10] * 0x100) * 5) & 0x40)
      != 0)) {
    auStack_4c[2] = 1;
    word_ptr_3 = auStack_4c + 1;
    auStack_4c[1] = 0;
    creature_how_hero_have_tend_08608c();
    local_34[0] = 0;
    goto LAB_000e19f1;
  }
  if (*(int *)(thing + 0x5c) >> 0x10 < 0) {
    auStack_4c[2] = 0;
    auStack_4c[1] = 0;
    creature_how_hero_have_tend_08608c();
    return (ulonglong)unaff_EDI << 0x20;
  }
  if (((g_bss_002ed402 != 0) && (*(uint *)(local_34[5] + 0x2ef) != 0)) &&
     (*(uint *)(local_34[5] + 0x2ef) <= g_game_turn)) {
    *(undefined4 *)(local_34[5] + 0x2ef) = 0;
    auStack_4c[2] = 0xe0c08;
    effect_allocate_light_effect_024998();
    auStack_4c[2] = 0xe0c14;
    move_fn_0b3b10();
  }
  if (*(char *)(local_34[5] + 0xb1) != '\0') {
    *(char *)(local_34[5] + 0xb1) = *(char *)(local_34[5] + 0xb1) + -1;
  }
  if (*(char *)(local_34[5] + 0x8b) == '\0') {
    *(undefined1 *)(local_34[5] + 0x8b) = g_bss_002ebaf7;
  }
  if (*(char *)(local_34[5] + 0x302) == '\0') {
    auStack_4c[2] = 0xe0c5c;
    instance_update_creature_control_049df5();
  }
  auStack_4c[2] = 0xe0c63;
  bflib_system_io_update_creature_control_0e5e04();
  if ((*thing & 0x20) == 0) {
    if (*(char *)(local_34[5] + 0xab) == '\0') {
      if (*(char *)(local_34[5] + 0x302) == '\0') {
        auStack_4c[2] = 0xe0c8e;
        thing_ptr = update_creature_has_illegal_state_0e1b88();
        if (thing_ptr != 0) {
          return (ulonglong)arg_edx << 0x20;
        }
      }
      else {
        *(char *)(local_34[5] + 0x302) = *(char *)(local_34[5] + 0x302) + -1;
      }
    }
  }
  else {
    if (*(char *)(local_34[5] + 0xab) == '\0') {
      if (*(char *)(local_34[5] + 0x302) == '\0') {
        auStack_4c[2] = 0xe0cda;
        thing_ptr = update_creature_has_illegal_state_0e1b88();
        if (thing_ptr != 0) {
          auStack_4c[2] = 0xe0cf2;
          LbErrorLog(); /* LbErrorLog("update.cpp", line 968, "A state return type for a human controlled creature?") */
        }
      }
      else {
        *(char *)(local_34[5] + 0x302) = *(char *)(local_34[5] + 0x302) + -1;
      }
    }
    if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xab) & 2) == 0) { /* thing->ccontrol_idx */
      if (((&g_bss_0019d0cb)[(*(int *)(thing + 3) >> 0x18) * 0x4ef] & 4) != 0) goto LAB_000e0d4c;
    }
    else if (((&g_bss_0019d0cb)[(*(int *)(thing + 3) >> 0x18) * 0x4ef] & 4) == 0) {
LAB_000e0d4c:
      auStack_4c[2] = 0xe0d56;
      panmap_update_player_view_state_0627b5();
    }
  }
  thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval_3 = 0;
  if (*(char *)(thing_ptr + 0xab) == '\0') {
    if ((*thing & 0x20) == 0) {
      if ((*(byte *)(thing_ptr + 2) & 1) == 0) {
        if (*(short *)(thing_ptr + 200) != 0) {
          *(short *)(thing_ptr + 0xbb) =
               (short)((uint)((*(int *)(thing_ptr + 0xc6) >> 0x10) *
                             (&g_slab_attr_table)[*(ushort *)(thing + 0x52)]) >> 0x10); /* thing->health */
          word_ptr = (&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52)]; /* thing->health */
          *(undefined2 *)(thing_ptr + 0xbf) = 0;
          uval_3 = 1;
          *(short *)(thing_ptr + 0xbd) =
               (short)((uint)-((*(int *)(thing_ptr + 0xc6) >> 0x10) * (int)word_ptr >> 8) >> 8);
        }
      }
      else {
        uval_3 = 1;
        *(byte *)(thing_ptr + 2) = *(byte *)(thing_ptr + 2) & 0xfe;
      }
    }
    else if ((thing[0x25] & 0x20) == 0) {
      flag_2 = *(short *)(thing_ptr + 200) != 0;
      if (flag_2) {
        *(short *)(thing_ptr + 0xbb) =
             (short)((uint)((*(int *)(thing_ptr + 0xc6) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x52)]) >> 0x10); /* thing->health */
        *(short *)(thing_ptr + 0xbd) =
             (short)((uint)-((*(int *)(thing_ptr + 0xc6) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52)] >> 8) >> 8); /* thing->health */
      }
      uval_3 = (uint)flag_2;
      if (*(short *)(thing_ptr + 0xca) != 0) {
        *(short *)(thing_ptr + 0xbb) =
             (short)((uint)*(undefined4 *)(thing_ptr + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(thing_ptr + 200) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff]) >> 0x10); /* thing->health */
        uval_3 = 1;
        *(short *)(thing_ptr + 0xbd) =
             (short)((uint)*(undefined4 *)(thing_ptr + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(thing_ptr + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff] >> /* thing->health */
                            8) >> 8);
      }
    }
    else {
      if (*(short *)(thing_ptr + 200) != 0) {
        *(short *)(thing_ptr + 0xbb) =
             (short)((uint)(((int)(&g_slab_attr_table)[*(ushort *)(thing + 0x52)] >> 8) * /* thing->health */
                           ((*(int *)(thing_ptr + 0xc6) >> 0x10) *
                            (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x54)] >> 8)) >> 0x10);
        *(short *)(thing_ptr + 0xbd) =
             (short)((uint)-(((int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52)] >> 8) * /* thing->health */
                             ((*(int *)(thing_ptr + 0xc6) >> 0x10) *
                              (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x54)] >> 8) >> 8) >> 8)
        ;
        *(short *)(thing_ptr + 0xbf) =
             (short)((uint)((*(int *)(thing_ptr + 0xc6) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x54)]) >> 0x10);
      }
      if (*(short *)(thing_ptr + 0xca) != 0) {
        *(short *)(thing_ptr + 0xbb) =
             (short)((uint)*(undefined4 *)(thing_ptr + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(thing_ptr + 200) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff]) >> 0x10); /* thing->health */
        *(short *)(thing_ptr + 0xbd) =
             (short)((uint)*(undefined4 *)(thing_ptr + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(thing_ptr + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff] >> /* thing->health */
                            8) >> 8);
      }
    }
    if (((thing[0x25] & 0x20) == 0) || ((*thing & 0x20) != 0)) goto LAB_000e10bd;
    auStack_4c[2] = 0xe102d;
    val_2 = move_process_map_subtile_0b3040();
    val_2 = (val_2 + 0x100) - (*(int *)(thing + 0xf) >> 0x10); /* thing->mappos.val_y */
    val = (short *)(thing_ptr + 0xbf);
    if (0 < val_2) {
      if (0x20 < val_2) {
        val_2 = 0x20;
      }
      uval_3 = 1;
      *val = *val + (short)val_2;
      goto LAB_000e10bd;
    }
    uval_3 = extraout_ECX;
    if (-1 < val_2) goto LAB_000e10bd;
    thing_ptr = -val_2;
    if (val_2 != -0x20 && 0x1f < thing_ptr) {
      thing_ptr = 0x20;
    }
    *val = *val - (short)thing_ptr;
    flag_2 = true;
  }
  else {
    *(undefined2 *)(thing_ptr + 0xbb) = 0;
    *(undefined2 *)(thing_ptr + 0xbd) = 0;
    *(undefined2 *)(thing_ptr + 0xbf) = 0;
    *(undefined2 *)(thing_ptr + 200) = 0;
    uval_3 = 1;
    *(byte *)(thing_ptr + 2) = *(byte *)(thing_ptr + 2) & 0xfe;
LAB_000e10bd:
    if (uval_3 == 0) {
      if (((*(short *)(thing_ptr + 0xbb) == 0) && (*(short *)(thing_ptr + 0xbd) == 0)) &&
         (*(short *)(thing_ptr + 0xbf) == 0)) {
        flag_2 = false;
      }
      else {
        flag_2 = true;
      }
    }
    else {
      flag_2 = true;
    }
  }
  if (flag_2) {
    *(short *)(thing + 0x38) = *(short *)(thing + 0x38) + *(short *)(local_34[5] + 0xbb);
    *(short *)(thing + 0x3a) = *(short *)(thing + 0x3a) + *(short *)(local_34[5] + 0xbd);
    *(short *)(thing + 0x3c) = *(short *)(thing + 0x3c) + *(short *)(local_34[5] + 0xbf);
  }
  auStack_4c[2] = 0xe1139;
  move_update_creature_control_0b3dac();
  if ((*thing & 0x20) != 0) {
    if ((*(byte *)(local_34[5] + 1) & 0x40) == 0) {
      *(short *)(local_34[5] + 200) = *(short *)(local_34[5] + 200) / 2;
    }
    if ((*(byte *)(local_34[5] + 1) & 0x80) == 0) {
      *(short *)(local_34[5] + 0xca) = *(short *)(local_34[5] + 0xca) / 2;
    }
  }
  if ((*thing & 0x20) == 0) {
    *(undefined2 *)(local_34[5] + 200) = 0;
  }
  auStack_4c[2] = 0xe11a1;
  spell_update_creature_control_07231c();
  local_34[4] = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  thing[0x25] = thing[0x25] & 0x7c;
  *(undefined2 *)(local_34[4] + 0xb9) = 0;
  if (*(int *)(thing + 0xf) >> 0x10 == /* thing->mappos.val_y */
      (uint)((&g_bss_00269203)[(uint)thing[0x10] * 0x100 + (uint)thing[0xe]] & 0xf) << 8) {
    auStack_4c[2] = 0xe11fc;
    local_1c = thing;
    uval_3 = light_process_map_subtile_0b23ec();
    if ((uval_3 & 0xfffffffe) == 0x28) {
      auStack_4c[2] = 0xe122e;
      creature_fn_081c10();
      thing[0x25] = thing[0x25] | 2;
    }
    else if (uval_3 == 0x27) {
      thing[0x25] = thing[0x25] | 1;
    }
    byte_ptr = local_1c;
    if ((local_1c[0x25] & 1) == 0) {
      if (*(char *)(local_34[4] + 0xc1) == '\0') {
        word_ptr_3 = &local_40;
        uval_3 = local_38;
        if (g_bss_002e7bed == '\x02') {
          auStack_4c[2] = 0xe12b0;
          thing_ptr = creature_update_creature_control_081d84();
          local_38 = *(uint *)(byte_ptr + 0xd);
          uval_3 = local_38;
          *(undefined2 *)(local_34 + (uint)flag_3 * -2) =
               *(undefined2 *)(byte_ptr + (uint)flag_3 * -8 + 0x11);
          word_ptr_3 = &local_40;
          if ((&g_slabmap_base)
              [((&g_subtile_to_slab_lut)[local_38 >> 0x18] * 0x55 + (&g_subtile_to_slab_lut)[local_38 >> 8 & 0xff]) *
               6] == '\n') {
            local_1c[0x25] = local_1c[0x25] | 0x80;
            local_38._2_2_ = (short)(local_38 >> 0x10);
            if (thing_ptr == 1) {
              short_val = (short)((uint)((&g_slab_attr_table)[*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff]
                                    << 6) >> 0x10);
              short_val_2 = (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                            [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6) >>
                                     8) >> 8);
            }
            else {
              word_ptr_3 = &local_40;
              if (thing_ptr != 2) goto LAB_000e16f9;
              short_val = -(short)((uint)((&g_slab_attr_table)[*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff]
                                     << 6) >> 0x10);
              short_val_2 = -(short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                             [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6) >>
                                      8) >> 8);
            }
            auStack_4c[2] = 0xffffffff;
            local_38 = CONCAT22(local_38._2_2_ + short_val_2,(short)local_38 + short_val);
            auStack_4c[1] = 0xe16f9;
            inits_fn_043ac3();
            word_ptr_3 = auStack_4c + 2;
            uval_3 = local_38;
          }
        }
      }
      else {
        auStack_4c[2] = 0xe14fb;
        thing_ptr = creature_update_creature_control_081d84();
        local_34[3] = (&g_creature_ctrl_ptrs)[CONCAT22(extraout_var,*(undefined2 *)(local_1c + 100))];
        flag = local_1c[0x1a];
        uval = *(undefined4 *)(local_1c + 0xd);
        local_3c[(uint)flag_3 * -4] = *(short *)(local_1c + (uint)flag_3 * -8 + 0x11);
        flag = (&g_data_0018b70c)[(uint)flag * 0x10];
        if (flag < 3) {
LAB_000e153e:
          local_40._0_2_ = (short)uval;
          local_40._2_2_ = (short)((uint)uval >> 0x10);
          if (thing_ptr == 1) {
            auStack_4c[2] = 0xffffffff;
            local_40 = CONCAT22(local_40._2_2_ +
                                (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                      [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff]
                                                << 6) >> 8) >> 8),
                                (short)local_40 +
                                (short)((uint)((&g_slab_attr_table)
                                               [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6)
                                       >> 0x10));
            auStack_4c[1] = 0xe15bd;
            inits_fn_043ac3();
            *(char *)(local_34[2] + 0xc1) = *(char *)(local_34[2] + 0xc1) + -1;
            word_ptr_2 = auStack_4c + 2;
            uval = local_40;
          }
          else {
            word_ptr_2 = &local_40;
            if (thing_ptr == 2) {
              auStack_4c[2] = 0xffffffff;
              local_40 = CONCAT22(local_40._2_2_ -
                                  (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                        [*(ushort *)(local_1c + 0x52) - 0x200 &
                                                         0x7ff] << 6) >> 8) >> 8),
                                  (short)local_40 -
                                  (short)((uint)((&g_slab_attr_table)
                                                 [*(ushort *)(local_1c + 0x52) - 0x200 & 0x7ff] << 6
                                                ) >> 0x10));
              auStack_4c[1] = 0xe14df;
              inits_fn_043ac3();
              *(char *)(local_34[2] + 0xc1) = *(char *)(local_34[2] + 0xc1) + -1;
              word_ptr_2 = auStack_4c + 2;
              uval = local_40;
            }
          }
        }
        else {
          word_ptr_2 = &local_40;
          if (4 < flag) {
            if (flag != 5) goto LAB_000e153e;
            word_ptr_2 = &local_40;
            if (thing_ptr != 0) {
              word_ptr_2 = auStack_4c + 2;
              auStack_4c[2] = 0xffffffff;
              auStack_4c[1] = 0xe13a1;
              local_40 = uval;
              inits_fn_043ac3();
              *(char *)(local_34[2] + 0xc1) = *(char *)(local_34[2] + 0xc1) + -1;
              uval = local_40;
            }
          }
        }
        local_40 = uval;
        thing_ptr = word_ptr_2[9];
        word_ptr_2[0xffffffff] = 0xe13bc;
        val_2 = creature_update_creature_control_081d84();
        word_ptr_2[2] = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
        *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -2 + 3) =
             *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_3 * -8);
        if (val_2 == 1) {
          *(short *)(word_ptr_2 + 2) =
               *(short *)(word_ptr_2 + 2) +
               (short)((uint)((&g_slab_attr_table)[*(ushort *)(word_ptr_2[9] + 0x52) - 0x200 & 0x7ff] << 6)
                      >> 0x10);
          word_ptr = (&PTR_LAB_00192fe0)[*(ushort *)(word_ptr_2[9] + 0x52) - 0x200 & 0x7ff];
          word_ptr_2[0xffffffff] = 0xffffffff;
          *(short *)((int)word_ptr_2 + 10) =
               *(short *)((int)word_ptr_2 + 10) + (short)((uint)-(((int)word_ptr << 6) >> 8) >> 8);
          word_ptr_2[0xfffffffe] = 0xe1451;
          inits_fn_043ac3();
          *(char *)(word_ptr_2[6] + 0xc1) = *(char *)(word_ptr_2[6] + 0xc1) + -1;
          word_ptr_3 = word_ptr_2 + 0xffffffff;
          uval_3 = local_38;
        }
        else {
          word_ptr_3 = word_ptr_2;
          uval_3 = local_38;
          if (val_2 == 2) {
            *(short *)(word_ptr_2 + 2) =
                 *(short *)(word_ptr_2 + 2) -
                 (short)((uint)((&g_slab_attr_table)[*(ushort *)(word_ptr_2[9] + 0x52) - 0x200 & 0x7ff] << 6
                               ) >> 0x10);
            word_ptr = (&PTR_LAB_00192fe0)[*(ushort *)(word_ptr_2[9] + 0x52) - 0x200 & 0x7ff];
            word_ptr_3 = word_ptr_2 + 0xffffffff;
            word_ptr_2[0xffffffff] = 0xffffffff;
            *(short *)((int)word_ptr_2 + 10) =
                 *(short *)((int)word_ptr_2 + 10) - (short)((uint)-(((int)word_ptr << 6) >> 8) >> 8);
            word_ptr_2[0xfffffffe] = 0xe165b;
            inits_fn_043ac3();
            *(char *)(word_ptr_2[6] + 0xc1) = *(char *)(word_ptr_2[6] + 0xc1) + -1;
            uval_3 = local_38;
          }
        }
      }
    }
    else {
      auStack_4c[2] = 0xe1254;
      thing_ptr = creature_update_creature_control_081d84();
      if (thing_ptr != 0) {
        auStack_4c[2] = 0xe126e;
        effect_allocate_light_effect_024998();
      }
      *(undefined1 *)(local_34[4] + 0xc1) = 0;
      word_ptr_3 = &local_40;
      uval_3 = local_38;
    }
LAB_000e16f9:
    local_38 = uval_3;
    thing_ptr = word_ptr_3[9];
    val_2 = *(int *)(thing_ptr + 3);
    word_ptr_3[4] = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
    if (val_2 >> 0x18 == (uint)g_bss_002eb542) {
      thing_ptr = (&g_thing_ptrs)
               [(*(uint *)((int)&g_map_subtiles +
                          ((uint)*(byte *)(word_ptr_3[9] + 0x10) * 0x100 +
                          (uint)*(byte *)(thing_ptr + 0xe)) * 5 + 1) & 0x3fffff) >> 0xb];
      if (thing_ptr != g_thing_ptrs) {
LAB_000e1786:
        if (*(char *)(thing_ptr + 0x1f) != '\x04') goto LAB_000e1767; /* thing->class_id */
        val_2 = word_ptr_3[4];
        *(undefined1 *)(val_2 + 0xc1) = 0x14;
        uval_2 = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
LAB_000e1864:
        *(undefined2 *)(val_2 + 0xb9) = uval_2;
      }
    }
    else {
      for (thing_ptr = (&g_thing_ptrs)
                    [(*(uint *)((int)&g_map_subtiles +
                               (uint)CONCAT11(*(undefined1 *)(word_ptr_3[9] + 0x10),
                                              *(byte *)(thing_ptr + 0xe)) * 5 + 1) & 0x3fffff) >> 0xb];
          thing_ptr != g_thing_ptrs; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
        if (*(char *)(thing_ptr + 0x1f) == '\x04') { /* thing->class_id */
          word_ptr_3[0xffffffff] = 0xe1851;
          anger_fn_010434();
          *(undefined1 *)(word_ptr_3[4] + 0xc1) = 0x14;
          val_2 = word_ptr_3[4];
          uval_2 = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          goto LAB_000e1864;
        }
      }
    }
  }
LAB_000e186b:
  if ((((**(byte **)((int)word_ptr_3 + 0x24) & 0x20) == 0) &&
      (((*(byte **)((int)word_ptr_3 + 0x24))[0x25] & 2) != 0)) &&
     (thing_ptr = *(int *)((int)word_ptr_3 + 0x24),
     (&g_bss_002e9125)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6] != '\0')) {
    ch = *(char *)(thing_ptr + 7);
    if (ch == '\x0e') {
      ch = *(char *)(thing_ptr + 8); /* thing->active_state */
    }
    if ((ch != -0x71) && (*(int *)(*(int *)((int)word_ptr_3 + 0x1c) + 0x2fe) + 0x40U < g_game_turn)
       ) {
      *(uint *)(*(int *)((int)word_ptr_3 + 0x1c) + 0x2fe) = g_game_turn;
      *(undefined4 *)((int)word_ptr_3 + -4) = 0xe18e1;
      thing_ptr = person_fn_064a2e();
      if (thing_ptr != 0) {
        *(undefined4 *)((int)word_ptr_3 + -4) = 0xe18ee;
        thing_ptr = pom_update_slab_subtile_columns_0655fa();
        if (thing_ptr == 0) {
          *(undefined4 *)((int)word_ptr_3 + -4) = 0xe1905;
          person_fn_063b6d();
        }
        else {
          *(undefined1 *)(*(int *)((int)word_ptr_3 + 0x24) + 8) = 0x8f;
        }
      }
    }
  }
  *(undefined4 *)((int)word_ptr_3 + -4) = 0xe190f;
  update_update_creature_and_thing_0e1a00();
  *(undefined4 *)((int)word_ptr_3 + -4) = 0xe1916;
  move_fn_0b3b10();
  *(undefined4 *)((int)word_ptr_3 + -4) = 0xe191d;
  creature_update_creature_and_thing_0811d8();
  if (*(char *)(*(int *)((int)word_ptr_3 + 0x20) + 0x2b0) != '\0') {
    *(undefined4 *)((int)word_ptr_3 + -4) = 0xe1931;
    spell_update_creature_control_072739();
  }
  if (0 < *(int *)(thing + 0x15) >> 0x10) {
    *(short *)(thing + 0x17) = *(short *)(thing + 0x17) + -1;
  }
  if ((*(ushort *)(*(int *)((int)word_ptr_3 + 0x20) + 0x7a) & 0xfff) != 0) {
    *(undefined4 *)((int)word_ptr_3 + -4) = 0xe1952;
    thing_ptr = group_fn_039e7e();
    if (thing_ptr != 0) {
      *(undefined4 *)((int)word_ptr_3 + -4) = 0xe195d;
      group_update_creature_control_039eca();
    }
  }
  if ((*(short *)(*(int *)((int)word_ptr_3 + 0x20) + 0x6e) != 0) &&
     ((*(byte *)((&g_thing_ptrs)[*(ushort *)(*(int *)((int)word_ptr_3 + 0x20) + 0x6e)] + 1) & 1) == 1))
  {
    *(undefined4 *)((int)word_ptr_3 + -4) = 0xe1992;
    move_fn_0b3b10();
  }
  *(undefined4 *)((int)word_ptr_3 + -4) = 0xe1999;
  thing_ptr = creature_could_create_creature_081fec();
  if (thing_ptr == -1) {
    *(undefined4 *)((int)word_ptr_3 + 0x14) = 0;
    return CONCAT44(*(undefined4 *)((int)word_ptr_3 + 0x34),*(undefined4 *)((int)word_ptr_3 + 0x14));
  }
  *(undefined4 *)((int)word_ptr_3 + -4) = 0xe19be;
  evil_update_creature_control_029696();
  *(undefined4 *)((int)word_ptr_3 + -4) = 0xe19ce;
  LbScreenWaitVbi();
  thing_ptr = *(int *)((int)word_ptr_3 + 0x20);
  *(byte *)(thing_ptr + 1) = *(byte *)(thing_ptr + 1) & 0x3f;
  *(byte *)(thing_ptr + 0xad) = *(byte *)(thing_ptr + 0xad) & 0xfb;
  *(undefined4 *)((int)word_ptr_3 + -4) = 0xe19f1;
  spell_update_creature_control_071416();
LAB_000e19f1:
  return CONCAT44(word_ptr_3[0xd],word_ptr_3[5]);
LAB_000e1767:
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
  if (thing_ptr == g_thing_ptrs) goto LAB_000e186b;
  goto LAB_000e1786;
}

/******************************************************************************
 * Function : update_update_creature_and_thing_0e1a00 (Original VA: 0xe1a00, Ghidra: FUN_000e1a00)
 * Prototype: undefined8 update_update_creature_and_thing_0e1a00(void);
 * Address  : 0xe1a00 (Size: 392 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 2 -> spell_update_creature_control_0717de, creature_fn_081c10
 ******************************************************************************/
undefined8 update_update_creature_and_thing_0e1a00(void)

{
  byte flag;
  byte flag_2;
  int cctrl_ptr;
  int thing;
  uint uval;
  uint thing_ptr;
  uint extraout_ECX;
  undefined4 arg_edx;
  int val;
  
  thing_ptr = (uint)*(ushort *)(thing + 100); /* thing->ccontrol_idx */
  cctrl_ptr = (&g_creature_ctrl_ptrs)[thing_ptr];
  if ((*(byte *)(cctrl_ptr + 0xad) & 1) != 0) {
    thing_ptr = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = thing_ptr >> 0xd | thing_ptr * 0x80000;
    if (g_action_random_seed % 100 < (uint)g_bss_002ed3ff) {
      flag = *(byte *)(thing + 0x10);
      flag_2 = *(byte *)(thing + 0xe);
      val = 0;
      do {
        thing_ptr = (&g_thing_ptrs)
                [(*(uint *)((int)&g_map_subtiles +
                           ((*(int *)((int)&g_data_0018b624 + val) >> 0x10) +
                           (uint)flag_2 + (uint)flag * 0x100) * 5 + 1) & 0x3fffff) >> 0xb];
        if (g_thing_ptrs < thing_ptr) {
          do {
            if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && (*(char *)(thing_ptr + 0x1a) != '\x17')) && /* thing->class_id */
                (*(int *)(thing_ptr + 3) >> 0x18 != (uint)*(byte *)(cctrl_ptr + 0xb6))) &&
               ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 1) == 0)) { /* thing->ccontrol_idx */
              spell_update_creature_control_0717de();
              *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0xb6) =
                   *(undefined1 *)(cctrl_ptr + 0xb6);
              thing_ptr = extraout_ECX;
            }
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
          } while (g_thing_ptrs < thing_ptr);
        }
        val = val + 2;
      } while (val != 0x12);
    }
    uval = g_game_turn - *(int *)(cctrl_ptr + 0x2eb);
    thing_ptr = uval / g_bss_002ed401;
    if (uval % (uint)g_bss_002ed401 == 0) {
      thing_ptr = creature_fn_081c10();
    }
  }
  return CONCAT44(arg_edx,thing_ptr);
}

/******************************************************************************
 * Function : update_creature_has_illegal_state_0e1b88 (Original VA: 0xe1b88, Ghidra: FUN_000e1b88)
 * Prototype: undefined8 update_creature_has_illegal_state_0e1b88(void);
 * Address  : 0xe1b88 (Size: 827 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 1557, 1571
 * Purpose  : String 'Creature has illegal state[1], T%d, S%d, TCS%d'
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 19 -> anger_fn_010434, barracks_update_creature_control_013809, combat_fn_015ed7, combobj_fn_016d38, combobj_fn_016f8b, combtool_update_creature_control_01829f, door_process_map_subtile_022b3a, group_fn_039e7e ...
 ******************************************************************************/
undefined8 update_creature_has_illegal_state_0e1b88(void)

{
  byte flag;
  char ch;
  short short_val;
  int thing;
  int thing_ptr;
  int cctrl_ptr;
  uint uval;
  undefined4 uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint thing_ptr_2;
  undefined4 arg_edx;
  int val;
  undefined8 uval_3;
  
  moodneed_fn_052834();
  thing_ptr = combat_fn_015ed7();
  cctrl_ptr = extraout_ECX;
  if ((((thing_ptr != 0) && (thing_ptr = combtool_update_creature_control_01829f(), cctrl_ptr = extraout_ECX_00, thing_ptr == 0)) &&
      (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 3) == '\0')) && /* thing->ccontrol_idx */
     ((*(char *)(thing + 0x1a) != '\x17' &&
      (thing_ptr = creature_update_player_dungeon_084f04(), cctrl_ptr = extraout_ECX_01, thing_ptr != 0)))) {
    combobj_fn_016d38();
    cctrl_ptr = extraout_ECX_02;
  }
  if ((((*(byte *)(cctrl_ptr + 3) & 0x10) == 0) && (*(short *)(cctrl_ptr + 0x1d0) != 0)) &&
     (((*(byte *)(cctrl_ptr + 1) & 2) == 0 &&
      (((ch = person_fn_064c4d(), cctrl_ptr = extraout_ECX_03, ch != '\0' &&
        (thing_ptr = door_process_map_subtile_022b3a(), cctrl_ptr = extraout_ECX_04, thing_ptr != 0)) &&
       (*(char *)(thing_ptr + 6) != *(char *)(thing + 6))))))) { /* thing->owner */
    combobj_fn_016f8b();
    cctrl_ptr = extraout_ECX_05;
  }
  *(undefined2 *)(cctrl_ptr + 0x1d0) = 0;
  if (((*(ushort *)(cctrl_ptr + 0x7a) & 0xfff) != 0) && (cctrl_ptr = group_fn_039e7e(), cctrl_ptr == 0)) {
    barracks_update_creature_control_013809();
  }
  if ((*(byte *)(thing + 7) == 0) || (0x90 < *(byte *)(thing + 7))) {
    dk_sprintf(&g_log_sprintf_buf,s_Creature_has_illegal_state_1___T_0016ca25,
                 *(undefined2 *)(thing + 0x1b),*(undefined1 *)(thing + 7), /* thing->index_or_angle */
                 *(undefined1 *)(thing + 8)); /* thing->active_state */
    LbErrorLog(); /* LbErrorLog("update.cpp", line 1557, g_log_buf) */
    person_fn_063b6d();
  }
  if (((*(byte *)(thing + 0x25) & 0x20) == 0) && (*(char *)(thing + 0x1a) != '\x17')) {
    flag = *(byte *)(thing + 0x10);
    cctrl_ptr = 0;
    uval = (uint)*(byte *)(thing + 0xe);
    do {
      val = (*(int *)((int)&g_data_0018b647 + cctrl_ptr) >> 0x18) + uval;
      thing_ptr = (*(int *)((int)&g_data_0018b647 + cctrl_ptr + 1) >> 0x18) + (uint)flag;
      if ((((-1 < val) && (val < 0x100)) && (-1 < thing_ptr)) &&
         (((thing_ptr < 0x100 &&
           (thing_ptr = (thing_ptr * 0x100 + val) * 5, (*(byte *)((int)&g_map_subtiles + thing_ptr) & 0x10) == 0
           )) && (thing_ptr_2 = (&g_thing_ptrs)
                          [(*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3fffff) >> 0xb],
                 g_thing_ptrs < thing_ptr_2)))) {
        do {
          if (*(char *)(thing_ptr_2 + 0x1f) == '\x01') { /* thing->class_id */
            if (*(char *)(thing_ptr_2 + 0x1a) == '+') {
              uval_3 = ceiling_fn_07df48();
              thing_ptr_2 = (uint)((ulonglong)uval_3 >> 0x20);
              uval = extraout_ECX_06;
              if ((int)uval_3 != 0) goto LAB_000e1dd1;
            }
            if (*(char *)(thing_ptr_2 + 0x1a) == '\n') {
              uval_3 = room_update_slab_subtile_columns_0d0f50();
              thing_ptr_2 = (uint)((ulonglong)uval_3 >> 0x20);
              if (((undefined *)uval_3 < &g_bss_002ddd1c) ||
                 (((short_val = *(short *)((undefined *)uval_3 + 10), uval = extraout_ECX_07,
                   short_val != 0xd && (short_val != 5)) && (short_val != 4)))) goto LAB_000e1dd1;
            }
          }
          thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
        } while (g_thing_ptrs < thing_ptr_2);
      }
      cctrl_ptr = cctrl_ptr + 2;
    } while (cctrl_ptr < 0x10);
    thing_ptr_2 = 0;
LAB_000e1dd1:
    if (thing_ptr_2 != 0) {
      if (*(char *)(thing_ptr_2 + 0x1a) == '+') {
        if (*(int *)(thing_ptr_2 + 0x13) == 0) { /* thing->anim_sprite */
          LbErrorLog(); /* LbErrorLog("update.cpp", line 1571, "GoldPile with no gold!") */
          structs_update_creature_control_072af4();
        }
        else {
          uval = (uint)*(ushort *)(&g_bss_002e912a + (uint)*(byte *)(thing + 0x1a) * 0xe6);
          cctrl_ptr = *(int *)(thing + 0x13); /* thing->anim_sprite */
          if (cctrl_ptr < (int)uval) {
            thing_ptr = *(int *)(thing_ptr_2 + 0x13) + cctrl_ptr; /* thing->anim_sprite */
            if ((int)uval < thing_ptr) {
              *(uint *)(thing + 0x13) = cctrl_ptr + (uval - cctrl_ptr); /* thing->anim_sprite */
              *(int *)(thing_ptr_2 + 0x13) = *(int *)(thing_ptr_2 + 0x13) - (uval - cctrl_ptr); /* thing->anim_sprite */
            }
            else {
              *(int *)(thing + 0x13) = thing_ptr; /* thing->anim_sprite */
              structs_update_creature_control_072af4();
            }
          }
        }
        anger_fn_010434();
      }
      else if ((*(char *)(thing_ptr_2 + 0x1a) == '\n') && (cctrl_ptr = creature_update_player_view_state_085954(), cctrl_ptr == 0)) {
        creature_update_creature_control_085cc4();
      }
    }
  }
  cctrl_ptr = (uint)*(byte *)(thing + 7) * 0x29;
  if ((*(int *)(&g_data_0018c4a0 + cctrl_ptr) == 0) ||
     (short_val = (**(code **)(&g_data_0018c4a0 + cctrl_ptr))(), short_val != -1)) {
    uval_2 = 0;
  }
  else {
    uval_2 = 1;
  }
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : update_process_thing_entity_0e1ec4 (Original VA: 0xe1ec4, Ghidra: FUN_000e1ec4)
 * Prototype: longlong update_process_thing_entity_0e1ec4(void);
 * Address  : 0xe1ec4 (Size: 1791 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 24 -> anger_fn_010c1a, anger_fn_010c44, anger_fn_010d08, effect_allocate_light_effect_024998, effect_roll_action_random_0250ef, effect_update_player_view_state_025780, effect_illegal_hit_thing_type_02585f, effect_update_creature_and_thing_025cf7 ...
 ******************************************************************************/
longlong update_process_thing_entity_0e1ec4(void)

{
  byte flag;
  short short_val;
  short short_val_2;
  undefined2 uval;
  int thing;
  int thing_ptr;
  uint uval_2;
  uint rand_seed;
  undefined4 uval_3;
  undefined1 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *thing_ptr_2;
  byte flag_2;
  undefined2 auStack_874 [1018];
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [56];
  char local_38 [20];
  undefined *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  flag_2 = 0;
  thing_ptr = (uint)*(byte *)(thing + 0x1a) * 0x65;
  local_24 = &g_data_00188c94 + thing_ptr;
  local_1c = 0;
  local_20 = 0;
  if (*(short *)(thing + 0x1d) != *(short *)(thing + 0x1b)) { /* thing->index_or_angle */
    local_20 = (&g_thing_ptrs)[*(ushort *)(thing + 0x1d)];
  }
  thing_ptr_2 = (undefined4 *)local_70;
  if (*(short *)(&g_data_00188cb2 + thing_ptr) != 0) {
    local_74 = 0xe1f27;
    thing_ptr = sound_fn_06f865();
    thing_ptr_2 = (undefined4 *)local_70;
    if (thing_ptr == 0) {
      local_74 = 0x100;
      local_78 = 2;
      thing_ptr_2 = &uStack_80;
      uStack_80 = 3;
      iStack_7c = thing_ptr;
      sound_fn_06e538();
    }
  }
  if (*(char *)(thing_ptr_2[0x13] + 0x47) != '\0') {
    *(short *)(thing + 0x5e) = *(short *)(thing + 0x5e) + -1;
  }
  if (*(int *)(thing + 0x5c) >> 0x10 < 0) {
    *(undefined1 *)(thing_ptr_2 + 0x15) = 1;
  }
  else {
    flag = *(byte *)(thing + 0x1a);
    thing_ptr_2[0x12] = thing + 0xd; /* thing->mappos.val_x */
    if (flag < 0xf) {
      if (flag < 6) {
        if (1 < flag) {
          if (flag < 3) {
            thing_ptr = 0;
            word_ptr_2 = thing_ptr_2;
            do {
              rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
              rand_seed = rand_seed >> 0xd | rand_seed * 0x80000;
              *(short *)((int)word_ptr_2 + 0x40) =
                   (*(short *)(thing + 0xd) + 0x40) - (short)((ulonglong)rand_seed % 0x7f); /* thing->mappos.val_x */
              rand_seed = rand_seed * 0x24a1 + 0x24df;
              rand_seed = rand_seed >> 0xd | rand_seed * 0x80000;
              *(short *)((int)word_ptr_2 + 0x42) =
                   (*(short *)(thing + 0xf) + 0x40) - (short)((ulonglong)rand_seed % 0x7f); /* thing->mappos.val_y */
              rand_seed = rand_seed * 0x24a1 + 0x24df;
              g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
              uval_3 = *(undefined4 *)(thing + 0xf); /* thing->mappos.val_y */
              thing_ptr_2 = (undefined4 *)((int)word_ptr_2 + -4);
              *(undefined4 *)((int)word_ptr_2 + -4) = 0xffffffff;
              *(short *)((int)word_ptr_2 + 0x44) =
                   ((short)((uint)uval_3 >> 0x10) + 0x40) - (short)((ulonglong)g_action_random_seed % 0x7f);
              thing_ptr = thing_ptr + 1;
              *(undefined4 *)((int)word_ptr_2 + -8) = 0xe2141;
              inits_fn_043ac3();
              word_ptr_2 = (undefined4 *)((int)word_ptr_2 + -4);
            } while (thing_ptr < 2);
          }
          else if (flag == 4) {
            thing_ptr_2[-1] = 0xe232a;
            thing_ptr = effect_fn_02683b();
            if ((((thing_ptr != 0) &&
                 ((uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] ==
                  *(int *)(thing + 3) >> 0x18)) && (*(short *)(thing + 0x1d) != 0)) &&
               (*(short *)(thing + 0x1d) ==
                *(short *)((int)&g_bss_0019d0f7 + (g_my_player_word >> 0x18) * 0x4ef))) {
              thing_ptr_2[-1] = 0xe239c;
              panmap_update_player_view_state_0627b5();
              (&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] =
                   (&g_bss_0019d0cb)[(g_my_player_word >> 0x18) * 0x4ef] | 8;
            }
          }
        }
      }
      else if (flag < 7) {
        if ((*(ushort *)(thing + 0x17) != 0) &&
           (thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing + 0x17)], *(char *)(thing_ptr + 0x1f) == '\x05')) /* thing->class_id */
        {
          thing_ptr_2[6] = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
          *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 7) =
               *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_2 * -8);
          *(short *)(thing_ptr_2 + 7) =
               (short)((uint)*(undefined4 *)((int)thing_ptr_2 + 0x1a) >> 0x10) +
               (short)((int)(uint)*(ushort *)(thing_ptr + 0x58) >> 1);
          thing_ptr_2[-1] = 0xe21a9;
          uval = anger_fn_010c1a();
          *(undefined2 *)(thing + 0x52) = uval; /* thing->health */
          thing_ptr_2[-1] = 0xe21be;
          uval = anger_fn_010c44();
          *(undefined2 *)(thing + 0x54) = uval;
          thing_ptr_2[-1] = 0xe21dd;
          anger_fn_010d08();
          short_val = *(short *)(thing + 0x2e);
          *(short *)(thing_ptr_2 + 2) = (short)thing_ptr_2[0xc] - *(short *)(thing + 0x2c);
          short_val_2 = *(short *)(thing + 0x30);
          *(short *)((int)thing_ptr_2 + 10) = (short)*(undefined4 *)((int)thing_ptr_2 + 0x32) - short_val;
          *(short *)(thing_ptr_2 + 3) = (short)thing_ptr_2[0xd] - short_val_2;
          *thing_ptr_2 = thing_ptr_2[2];
          *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 1) =
               *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 3);
          thing_ptr_2[0xc] = thing_ptr_2[2];
          *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 0xd) =
               *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 3);
          thing_ptr_2[-1] = 0xe2245;
          thing_ptr = bflib_system_io_fn_0e8cc8();
          if (0x80 < thing_ptr) {
            *(short *)(thing_ptr_2 + 8) = (short)(thing_ptr_2[0xc] << 7); /* thing->active_state */
            *(short *)(thing_ptr_2 + 9) = (short)(thing_ptr_2[0xd] << 7);
            *(short *)((int)thing_ptr_2 + 0x22) = (short)(*(int *)((int)thing_ptr_2 + 0x32) << 7);
            thing_ptr_2[0xe] = thing_ptr_2[8];
            *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 0xf) =
                 *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 9);
            thing_ptr_2[0xc] = thing_ptr_2[8];
            *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 0xd) =
                 *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 9);
            *(short *)(thing_ptr_2 + 4) = (short)((*(int *)((int)thing_ptr_2 + 0x2e) >> 0x10) / thing_ptr);
            *(short *)((int)thing_ptr_2 + 0x12) = (short)(((int)thing_ptr_2[0xc] >> 0x10) / thing_ptr);
            *(short *)(thing_ptr_2 + 5) = (short)((*(int *)((int)thing_ptr_2 + 0x32) >> 0x10) / thing_ptr);
            thing_ptr_2[10] = thing_ptr_2[4];
            *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 0xb) =
                 *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 5);
            thing_ptr_2[0xc] = thing_ptr_2[4];
            *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 0xd) =
                 *(undefined2 *)(thing_ptr_2 + (uint)flag_2 * -2 + 5);
          }
          *(short *)(thing + 0x32) = *(short *)(thing + 0x32) + (short)thing_ptr_2[0xc];
          *(short *)(thing + 0x34) =
               *(short *)(thing + 0x34) + (short)*(undefined4 *)((int)thing_ptr_2 + 0x32);
          *(short *)(thing + 0x36) = *(short *)(thing + 0x36) + (short)thing_ptr_2[0xd];
          *(byte *)(thing + 1) = *(byte *)(thing + 1) | 4;
        }
      }
      else if (7 < flag) {
        if (flag < 9) {
          thing_ptr = 0;
          word_ptr_2 = thing_ptr_2;
          do {
            word_ptr = (undefined1 *)word_ptr_2;
            rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
            uval_2 = rand_seed >> 0xd;
            g_action_random_seed._0_2_ = (ushort)uval_2;
            uval_2 = (uval_2 | rand_seed * 0x80000) * 0x24a1 + 0x24df;
            *(ushort *)(word_ptr + 0x40) =
                 CONCAT11((char)((ushort)*(undefined2 *)(thing + 0xd) >> 8) + '\x02', /* thing->mappos.val_x */
                          (char)*(undefined2 *)(thing + 0xd)) - ((ushort)g_action_random_seed & 0x3ff); /* thing->mappos.val_x */
            rand_seed = uval_2 >> 0xd;
            g_action_random_seed._0_2_ = (ushort)rand_seed;
            rand_seed = (rand_seed | uval_2 * 0x80000) * 0x24a1 + 0x24df;
            *(ushort *)(word_ptr + 0x42) =
                 CONCAT11((char)((ushort)*(undefined2 *)(thing + 0xf) >> 8) + '\x02', /* thing->mappos.val_y */
                          (char)*(undefined2 *)(thing + 0xf)) - ((ushort)g_action_random_seed & 0x3ff); /* thing->mappos.val_y */
            uval_2 = rand_seed >> 0xd;
            uval = *(undefined2 *)(thing + 0x11);
            g_action_random_seed._0_2_ = (ushort)uval_2;
            thing_ptr_2 = (undefined4 *)(word_ptr + -4);
            *(undefined4 *)(word_ptr + -4) = 0xffffffff;
            *(ushort *)(word_ptr + 0x44) =
                 CONCAT11((char)((ushort)uval >> 8) + '\x02',(char)uval) -
                 ((ushort)g_action_random_seed & 0x3ff);
            thing_ptr = thing_ptr + 1;
            *(undefined4 *)(word_ptr + -8) = 0xe2064;
            g_action_random_seed = uval_2 | rand_seed * 0x80000;
            inits_fn_043ac3();
            word_ptr_2 = (undefined4 *)(word_ptr + -4);
          } while (thing_ptr < 10);
          *(undefined4 *)(word_ptr + -8) = 0xe2074;
          effect_update_creature_and_thing_025cf7();
        }
        else if (flag == 0xb) {
          *(ushort *)(thing + 0x52) = *(short *)(thing + 0x52) + 0x71U & 0x7ff; /* thing->health */
        }
      }
    }
    else if (flag < 0x10) {
LAB_000e23ed:
      thing_ptr_2[-1] = 0xe23f4;
      thing_ptr = shot_roll_action_random_06d4df();
      if (thing_ptr != 0) {
        *(undefined1 *)(thing_ptr_2 + 0x15) = 1;
      }
    }
    else if (flag < 0x13) {
      if (flag < 0x11) {
        thing_ptr_2[-1] = 0xe23bd;
        effect_update_player_view_state_025780();
        thing_ptr_2[-1] = 0xe23c4;
        entrance_update_player_view_state_02684f();
      }
      else if (flag == 0x12) {
        thing_ptr_2[-1] = 0xe23dc;
        effect_fn_02649e();
      }
    }
    else if (flag < 0x14) {
      thing_ptr_2[-1] = 0xe23e8;
      effect_update_creature_and_thing_02649f();
    }
    else if (flag < 0x18) {
      if (flag == 0x14) goto LAB_000e23ed;
    }
    else if (flag < 0x19) {
      thing_ptr_2[-1] = 0xe23d0;
      effect_update_creature_and_thing_0266af();
    }
    else if ((flag == 0x1d) && ((g_game_turn - *(int *)(thing + 9)) % 0x10 == 0)) {
      *(undefined1 *)(thing + 0x19) = 5;
      thing_ptr_2[-1] = 0xe242e;
      effect_process_thing_entity_026795();
      if (*(short *)(thing + 0x17) != 0) {
        thing_ptr_2[-1] = 0xe245d;
        effect_roll_action_random_0250ef();
        thing_ptr_2[-1] = 0xe247e;
        creature_fn_081c10();
      }
    }
    if (*(char *)((int)thing_ptr_2 + 0x54) == '\0') {
      *(undefined4 *)((int)thing_ptr_2 + -4) = 0xe2513;
      uval_3 = move_shot_has_hit_thing_0b41d8();
      return CONCAT44(*(undefined4 *)((int)thing_ptr_2 + 100),uval_3); /* thing->ccontrol_idx */
    }
  }
  if (*(char *)((int)thing_ptr_2 + 0x54) == '\0') {
    return (ulonglong)*(uint *)((int)thing_ptr_2 + 100) << 0x20; /* thing->ccontrol_idx */
  }
  flag_2 = *(byte *)(thing + 0x1a);
  if (flag_2 < 0xf) {
    if (flag_2 < 4) goto LAB_000e25ae;
    if (4 < flag_2) {
      if (flag_2 == 0xb) {
        *(undefined4 *)((int)thing_ptr_2 + -4) = 0xe2531;
        effect_allocate_light_effect_024998();
        *(undefined4 *)((int)thing_ptr_2 + -4) = 0xe2542;
        effect_allocate_light_effect_024998();
        *(uint *)((int)thing_ptr_2 + -4) = (uint)*(byte *)(thing + 0x16);
        *(undefined4 *)((int)thing_ptr_2 + -8) = 0xe255d;
        effect_illegal_hit_thing_type_02585f();
        thing_ptr_2 = (undefined4 *)((int)thing_ptr_2 + -4);
      }
      goto LAB_000e25ae;
    }
  }
  else {
    if (flag_2 < 0x10) {
      *(undefined4 *)((int)thing_ptr_2 + -4) = 0xe258b;
      effect_fn_0263c9();
      goto LAB_000e25ae;
    }
    if ((0x10 < flag_2) && (flag_2 != 0x18)) goto LAB_000e25ae;
  }
  *(undefined4 *)((int)thing_ptr_2 + -4) = 0xe257d;
  panmap_update_player_view_state_0627b5();
LAB_000e25ae:
  *(undefined4 *)((int)thing_ptr_2 + -4) = 0xe25b7;
  structs_update_creature_control_072af4();
  return (ulonglong)*(uint *)((int)thing_ptr_2 + 100) << 0x20; /* thing->ccontrol_idx */
}

/******************************************************************************
 * Function : update_fn_0e25c4 (Original VA: 0xe25c4, Ghidra: FUN_000e25c4)
 * Prototype: undefined8 update_fn_0e25c4(void);
 * Address  : 0xe25c4 (Size: 259 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Module update.cpp procedure @ 0x0e25c4
 * Callers  : 0 -> 
 * Callees  : 6 -> structs_update_creature_control_072af4, ceiling_fn_07df48, food_update_player_dungeon_0abe58, light_process_map_subtile_0b2398, move_fn_0b3afc, move_fn_0b444c
 ******************************************************************************/
undefined8 update_fn_0e25c4(void)

{
  byte flag;
  byte *arg_eax;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  if (*(int *)(&g_data_0018dbed + (uint)arg_eax[0x1a] * 4) != 0) {
    val = (**(code **)(&g_data_0018dbed + (uint)arg_eax[0x1a] * 4))();
    if (val < 1) goto LAB_000e26c3;
  }
  if (*(int *)(&g_data_0018dbd9 + (uint)arg_eax[7] * 4) != 0) {
    val = (**(code **)(&g_data_0018dbd9 + (uint)arg_eax[7] * 4))();
    if (val < 1) goto LAB_000e26c3;
  }
  flag = arg_eax[0x25];
  arg_eax[0x25] = flag & 0xfc;
  if ((flag & 0x40) == 0) {
    val = ceiling_fn_07df48();
    if (val != 0) {
      val = move_fn_0b3afc();
      if (val == 0) {
        val = light_process_map_subtile_0b2398();
        if (val == 0x27) {
          arg_eax[0x25] = arg_eax[0x25] | 1;
        }
      }
      else {
        arg_eax[0x25] = arg_eax[0x25] | 2;
        if ((((&g_data_0018b918)[(uint)arg_eax[0x1a] * 0x16] != '\0') && ((arg_eax[1] & 1) == 0)) &&
           ((*arg_eax & 0x80) == 0)) {
          if (arg_eax[0x1a] == 10) {
            food_update_player_dungeon_0abe58();
          }
          else {
            structs_update_creature_control_072af4();
          }
          return CONCAT44(arg_edx,0xffffffff);
        }
      }
    }
  }
  if ((arg_eax[0x25] & 0x40) == 0) {
    uval = move_fn_0b444c();
    return CONCAT44(arg_edx,uval);
  }
  val = 1;
LAB_000e26c3:
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : update_illegal_effect_element_bounce_0e26dc (Original VA: 0xe26dc, Ghidra: FUN_000e26dc)
 * Prototype: undefined8 update_illegal_effect_element_bounce_0e26dc(void);
 * Address  : 0xe26dc (Size: 822 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 2001, 2559
 * Purpose  : String 'Illegal effect element bounce life: %d'
 * Callers  : 0 -> 
 * Callees  : 9 -> inits_allocate_dynamic_light_shot_0444a9, inits_roll_action_random_044f33, structs_update_creature_control_072af4, ceiling_fn_07df48, light_process_map_subtile_0b2398, move_fn_0b45b4, LbErrorLog, bflib_system_io_fn_0e66ec ...
 ******************************************************************************/
undefined8 update_illegal_effect_element_bounce_0e26dc(void)

{
  int val;
  undefined2 uval;
  ushort uval_2;
  int arg_eax;
  undefined4 uval_3;
  int val_2;
  uint uval_4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 arg_edx;
  
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0x4e;
  if (*(int *)(arg_eax + 0x5c) >> 0x10 < 1) {
    if (*(short *)(&g_data_0018996b + val) == 0) {
      structs_update_creature_control_072af4();
    }
    else {
      inits_roll_action_random_044f33();
    }
    uval_3 = 0;
    goto LAB_000e28a4;
  }
  *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) + -1;
  if (((&g_data_00189946)[val] == '\0') &&
     (*(int *)(arg_eax + 0xf) >> 0x10 <= (int)(uint)*(ushort *)(arg_eax + 0x60))) {
    *(undefined2 *)(arg_eax + 0x3e) = 0;
  }
  if ((&g_data_00189949)[val] != '\0') {
    *(byte *)(arg_eax + 0x25) = *(byte *)(arg_eax + 0x25) & 0xfc;
    val_2 = ceiling_fn_07df48();
    arg_eax = extraout_ECX;
    if (val_2 != 0) {
      uval_4 = light_process_map_subtile_0b2398();
      arg_eax = extraout_ECX_00;
      if (uval_4 == 0x27) {
        *(byte *)(extraout_ECX_00 + 0x25) = *(byte *)(extraout_ECX_00 + 0x25) | 1;
      }
      else if ((uval_4 & 0xfffffffe) == 0x28) {
        *(byte *)(extraout_ECX_00 + 0x25) = *(byte *)(extraout_ECX_00 + 0x25) | 2;
      }
    }
  }
  if ((*(ushort *)(&g_data_00189954 + val) != 0) &&
     ((uint)(*(int *)(arg_eax + 9) - g_game_turn) % (uint)*(ushort *)(&g_data_00189954 + val) == 0))
  {
    inits_allocate_dynamic_light_shot_0444a9();
    arg_eax = extraout_ECX_01;
  }
  switch((&g_data_00189935)[val]) {
  case 2:
    *(short *)(arg_eax + 0x2c) = (short)(((*(int *)(arg_eax + 0x2a) >> 0x10) * 2) / 3);
    *(short *)(arg_eax + 0x2e) = (short)(((*(int *)(arg_eax + 0x2c) >> 0x10) * 2) / 3);
    val_2 = *(int *)(arg_eax + 0x2e) >> 0x10;
    uval = (undefined2)((val_2 * 2) / 3);
    if (val_2 < 0x21) {
      if (val_2 < 0x11) {
        if (val_2 < -0x10) {
          *(undefined2 *)(arg_eax + 0x30) = uval;
          move_fn_0b45b4();
          break;
        }
        *(short *)(arg_eax + 0x30) = *(short *)(arg_eax + 0x30) + 0x10;
        if (0x10 < *(int *)(arg_eax + 0x2e) >> 0x10) goto LAB_000e2883;
      }
      else {
        *(short *)(arg_eax + 0x30) = *(short *)(arg_eax + 0x30) + -0x10;
        if (*(int *)(arg_eax + 0x2e) >> 0x10 < 0x10) {
LAB_000e2883:
          *(undefined2 *)(arg_eax + 0x30) = 0x10;
        }
      }
    }
    else {
      *(undefined2 *)(arg_eax + 0x30) = uval;
    }
    move_fn_0b45b4();
    break;
  case 3:
    *(undefined2 *)(arg_eax + 0x30) = 0x20;
    move_fn_0b45b4();
    break;
  case 4:
    val_2 = *(int *)(arg_eax + 0x5c) >> 0x10;
    if ((val_2 < 0) || (0xf < val_2)) {
      dk_sprintf(&g_log_sprintf_buf,s_Illegal_effect_element_bounce_li_0016ca81,
                   *(int *)(arg_eax + 0x5c) >> 0x10);
      LbErrorLog(); /* LbErrorLog("update.cpp", line 2559, g_log_buf) */
    }
    else {
      *(undefined2 *)(arg_eax + 0x30) = *(undefined2 *)(&g_data_00192788 + val_2 * 4);
    }
  case 1:
    move_fn_0b45b4();
    break;
  case 5:
    break;
  default:
    LbErrorLog(); /* LbErrorLog("update.cpp", line 2001, "Invalid effect element move type!") */
  }
  if (((&g_data_00189936)[val] != '\0') && ((&g_data_00189936)[val] == '\x01')) {
    uval_2 = bflib_system_io_fn_0e66ec();
    uval_4 = (uint)uval_2 % 0x800 - 0x200 & 0x7ff;
    if (0x400 < uval_4) {
      uval_4 = uval_4 - 0x400;
    }
    uval_4 = (int)((uval_4 + ((int)uval_4 >> 0x1f) * -0x80) - (uint)(((int)uval_4 >> 0x1f) << 6 < 0)) >>
            7;
    uval_2 = bflib_system_io_fn_0e66ec();
    *(undefined2 *)(extraout_ECX_02 + 0x3e) = 0;
    *(char *)(extraout_ECX_02 + 0x48) = (char)uval_4;
    *(ushort *)(extraout_ECX_02 + 0x52) = uval_2 % 0x800;
    *(uint *)(extraout_ECX_02 + 0x40) = (uval_4 & 0xff) << 8;
    return CONCAT44(arg_edx,1);
  }
  uval_3 = 1;
LAB_000e28a4:
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : update_process_map_subtile_0e2a14 (Original VA: 0xe2a14, Ghidra: FUN_000e2a14)
 * Prototype: longlong update_process_map_subtile_0e2a14(void);
 * Address  : 0xe2a14 (Size: 579 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 10 -> effect_allocate_light_effect_024998, gravyard_thing_was_graveyard_removed_0399d8, inits_told_you_so_create_044b13, structs_update_creature_control_072af4, creature_fn_081e5c, draw_roll_action_random_08ccec, light_process_map_subtile_0b2398, move_fn_0b3afc ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong update_process_map_subtile_0e2a14(void)

{
  byte flag;
  char ch;
  byte *arg_eax;
  int val;
  uint arg_edx;
  undefined4 *word_ptr;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 local_1e;
  short sStack_1c;
  
  word_ptr = (undefined4 *)&uStack_20;
  if ((*arg_eax & 0x80) == 0) {
    if (arg_eax[7] == 1) {
      uStack_20 = (undefined2)*(undefined4 *)(arg_eax + 0xd);
      local_1e = (undefined2)((uint)*(undefined4 *)(arg_eax + 0xd) >> 0x10);
      sStack_1c = *(short *)(arg_eax + 0x11) +
                  (short)((int)((uint)*(ushort *)(arg_eax + 0x58) * 3) >> 2);
      if (g_bss_002ee9b9 == 3) {
        flag = arg_eax[0x1a];
        if (((&g_bss_002e91e7)[(uint)flag * 0xe6] == '\0') || ((flag != 0 && (flag < 0xe)))) {
          ch = '\0';
        }
        else {
          ch = '\x01';
        }
      }
      else {
        ch = (&g_bss_002e91e7)[(uint)arg_eax[0x1a] * 0xe6];
      }
      if (ch != '\0') {
        uStack_24 = 0xe2ac9;
        effect_allocate_light_effect_024998();
      }
      if (*(short *)(arg_eax + 0x5e) != 0) {
        *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) + -1;
      }
      word_ptr = (undefined4 *)&uStack_20;
      if (*(int *)(arg_eax + 0x5c) >> 0x10 == 0) {
        uStack_24 = 2;
        uStack_2c = 1;
        arg_eax[7] = 2;
        iStack_28 = *(int *)(arg_eax + 0x5c) >> 0x10;
        update_fn_0dd2f0();
        draw_roll_action_random_08ccec();
        word_ptr = &uStack_2c;
      }
    }
    else {
      uStack_24 = 0xe2b81;
      val = creature_fn_081e5c();
      word_ptr = (undefined4 *)&uStack_20;
      if (val != 0) {
        if (arg_eax[0x14] == 0) {
          word_ptr = (undefined4 *)&uStack_20;
          if ((uint)(g_bss_002eb9fa >> 0x10) < (uint)(g_game_turn - *(int *)(arg_eax + 9))) {
            uStack_24 = 0xe2be7;
            structs_update_creature_control_072af4();
            return (ulonglong)arg_edx << 0x20;
          }
        }
        else {
          if (*(short *)(arg_eax + 0x5e) != 0) {
            *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) + -1;
          }
          word_ptr = (undefined4 *)&uStack_20;
          if (*(short *)(arg_eax + 0x5e) == 0) {
            uStack_24 = 0xe2bad;
            gravyard_thing_was_graveyard_removed_0399d8();
            uStack_24 = 0xe2bb6;
            structs_update_creature_control_072af4();
            return (ulonglong)arg_edx << 0x20;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)word_ptr + -4) = 0xe2b1f;
  val = light_process_map_subtile_0b2398();
  if (val == 0x27) {
    arg_eax[0x25] = arg_eax[0x25] | 1;
  }
  if ((*arg_eax & 0x20) == 0) {
    *(undefined4 *)((int)word_ptr + -4) = 0xe2b49;
    val = move_fn_0b3afc();
    if (((val != 0) && ((arg_eax[1] & 1) == 0)) && ((*arg_eax & 0x80) == 0)) {
      *(undefined4 *)((int)word_ptr + -4) = 0xe2b6e;
      structs_update_creature_control_072af4();
      return (ulonglong)*(uint *)((int)word_ptr + 0x14) << 0x20;
    }
    if ((*(byte *)((int)&g_map_subtiles + ((uint)arg_eax[0x10] * 0x100 + (uint)arg_eax[0xe]) * 5) & 0x40
        ) != 0) {
      *(undefined4 *)((int)word_ptr + -4) = 0xe2c1c;
      structs_update_creature_control_072af4();
      *(uint *)((int)word_ptr + -4) = (uint)arg_eax[0x13];
      *(undefined4 *)((int)word_ptr + -8) = 0xe2c35;
      inits_told_you_so_create_044b13();
      return (ulonglong)*(uint *)((int)word_ptr + 0x10) << 0x20;
    }
  }
  *(undefined4 *)((int)word_ptr + -4) = 0xe2c48;
  move_fn_0b4894();
  return CONCAT44(*(undefined4 *)((int)word_ptr + 0x14),1);
}

/******************************************************************************
 * Function : update_fn_0e2c58 (Original VA: 0xe2c58, Ghidra: FUN_000e2c58)
 * Prototype: longlong update_fn_0e2c58(void);
 * Address  : 0xe2c58 (Size: 98 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Module update.cpp procedure @ 0x0e2c58
 * Callers  : 0 -> 
 * Callees  : 4 -> structs_update_creature_control_072af4, trap_illegal_trap_trigger_type_075ba4, workshop_fn_07691e, move_fn_0b3afc
 ******************************************************************************/
longlong update_fn_0e2c58(void)

{
  byte *arg_eax;
  int val;
  uint arg_edx;
  
  if (*(int *)(arg_eax + 0x5c) >> 0x10 < 0) {
    structs_update_creature_control_072af4();
    return (ulonglong)arg_edx << 0x20;
  }
  val = workshop_fn_07691e();
  if (val != 0) {
    trap_illegal_trap_trigger_type_075ba4();
  }
  val = move_fn_0b3afc();
  if (((val != 0) && ((arg_eax[1] & 1) == 0)) && ((*arg_eax & 0x80) == 0)) {
    structs_update_creature_control_072af4();
    return (ulonglong)arg_edx << 0x20;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : update_go_first_person_without_0e2cd0 (Original VA: 0xe2cd0, Ghidra: FUN_000e2cd0)
 * Prototype: void update_go_first_person_without_0e2cd0(void);
 * Address  : 0xe2cd0 (Size: 1236 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 2207
 * Purpose  : String 'Cannot go first person without controlling creature'
 * Callers  : 0 -> 
 * Callees  : 3 -> workshop_fn_077b8d, creature_fn_081dd8, LbErrorLog
 ******************************************************************************/
void update_go_first_person_without_0e2cd0(void)

{
  ushort uval;
  undefined2 *word_ptr;
  char ch;
  short short_val;
  int val;
  int thing_ptr;
  int cctrl_ptr;
  undefined2 *extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uval_2;
  int val_2;
  int local_24;
  
  local_24 = 0;
  do {
    if ((((&g_players)[local_24] & 1) != 0) && (((&g_players)[local_24] & 0x40) == 0)) {
      workshop_fn_077b8d();
      word_ptr = *(undefined2 **)((int)&g_player_active_camera + local_24);
      switch(*(undefined1 *)(word_ptr + 3)) {
      case 1:
        if (*(ushort *)((int)&g_bss_0019d0f7 + local_24) == 0) {
          if ((&g_bss_0019d578)[local_24] != '\v') {
            LbErrorLog(); /* LbErrorLog("update.cpp", line 2207, "Cannot go first person without controlling creature") */
          }
        }
        else {
          thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + local_24)];
          ch = creature_fn_081dd8();
          if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
            cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
            if ((*(int *)(cctrl_ptr + 0xc6) >> 0x10 == 0) ||
               ((int)(uint)*(ushort *)(thing_ptr + 0x60) < *(int *)(thing_ptr + 0xf) >> 0x10)) { /* thing->mappos.val_y */
              *(undefined1 *)(cctrl_ptr + 0x1e9) = 0;
            }
            else {
              *(char *)(cctrl_ptr + 0x1e9) = ch << 4;
            }
            val_2 = (uint)*(ushort *)(thing_ptr + 0xd) + /* thing->mappos.val_x */
                    ((&g_slab_attr_table)[*(ushort *)(thing_ptr + 0x52)] * -0x5a >> 0x10); /* thing->health */
            val = (uint)*(ushort *)(thing_ptr + 0xf) + /* thing->mappos.val_y */
                    (-((int)(&PTR_LAB_00192fe0)[*(ushort *)(thing_ptr + 0x52)] * -0x5a >> 8) >> 8); /* thing->health */
            if (val_2 < 0) {
              val_2 = 0;
            }
            else if (0xffff < val_2) {
              val_2 = 0xffff;
            }
            if (val < 0) {
              val = 0;
            }
            else if (0xffff < val) {
              val = 0xffff;
            }
            if ((*(byte *)(thing_ptr + 0x25) & 0x20) == 0) {
              *extraout_ECX = (short)val_2;
              extraout_ECX[1] = (short)val;
              *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
              uval = *(ushort *)(thing_ptr + 0x54);
              *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
              *(uint *)((int)extraout_ECX + 0xb) = (uint)uval;
              uval_2 = (uint)*(ushort *)(extraout_EDX_00 + 0x55);
              val = *(int *)(thing_ptr + 0xf) >> 0x10; /* thing->mappos.val_y */
              val_2 = *(int *)(extraout_ECX + 1) >> 0x10;
              short_val = (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
              if (val_2 < (int)(val + uval_2)) {
                extraout_ECX[2] =
                     (short)((int)((uval_2 + val + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18)) - val_2) / 2)
                     + short_val;
                if ((int)((*(int *)(thing_ptr + 0xf) >> 0x10) + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18) + /* thing->mappos.val_y */
                         (uint)*(ushort *)(extraout_EDX_00 + 0x55)) <
                    *(int *)(extraout_ECX + 1) >> 0x10) {
LAB_000e2fa4:
                  extraout_ECX[2] =
                       *(short *)(thing_ptr + 0x11) + (short)*(char *)(cctrl_ptr + 0x1e9) +
                       *(short *)(extraout_EDX_00 + 0x55);
                }
              }
              else {
                extraout_ECX[2] =
                     (short)((int)((uval_2 + val + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18)) - val_2) / 2)
                     + short_val;
                if (*(int *)(extraout_ECX + 1) >> 0x10 <
                    (int)((*(int *)(thing_ptr + 0xf) >> 0x10) + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18) + /* thing->mappos.val_y */
                         (uint)*(ushort *)(extraout_EDX_00 + 0x55))) goto LAB_000e2fa4;
              }
            }
            else {
              *extraout_ECX = (short)val_2;
              extraout_ECX[1] = (short)val;
              extraout_ECX[2] = *(undefined2 *)(thing_ptr + 0x11);
              extraout_ECX[2] = extraout_ECX[2] + *(short *)(extraout_EDX_00 + 0x55);
              *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
              *(uint *)((int)extraout_ECX + 0xb) = (uint)*(ushort *)(thing_ptr + 0x54);
              *(int *)((int)extraout_ECX + 0xf) = *(int *)(cctrl_ptr + 0xca) >> 0x10;
            }
            thing_ptr = (uint)*(byte *)(thing_ptr + 0x10) * 0x100 + (uint)*(byte *)(thing_ptr + 0xe);
            thing_ptr = (int)(((*(uint *)((int)&g_map_subtiles + thing_ptr * 5 + 1) & 0xfffffff) >> 0x18) *
                          0x100 + ((*(uint *)((int)&g_map_subtiles + (thing_ptr + 1) * 5 + 1) & 0xfffffff)
                                  >> 0x18) * 0x100 +
                          ((*(uint *)((int)&g_map_subtiles + (thing_ptr + 0x100) * 5 + 1) & 0xfffffff) >>
                          0x18) * 0x100 +
                         ((*(uint *)((int)&g_map_subtiles + (thing_ptr + 0x101) * 5 + 1) & 0xfffffff) >>
                         0x18) * 0x100) >> 2;
            if (thing_ptr + -0x40 < *(int *)(extraout_ECX + 1) >> 0x10) {
              extraout_ECX[2] = (short)thing_ptr + -0x40;
            }
          }
          else if (*(char *)(thing_ptr + 0x1a) == '\n') {
            *extraout_ECX = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
            extraout_ECX[1] = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
            extraout_ECX[2] = *(short *)(thing_ptr + 0x11) + 0xf0;
            *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
            uval = *(ushort *)(thing_ptr + 0x54);
            *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
            *(uint *)((int)extraout_ECX + 0xb) = (uint)uval;
            cctrl_ptr = *(int *)(thing_ptr + 0x13) >> 0x18; /* thing->anim_sprite */
            *(undefined2 *)(thing_ptr + 0x54) = 0;
            if (cctrl_ptr != 0) {
              ch = (char)((uint)*(int *)(thing_ptr + 0x13) >> 0x18); /* thing->anim_sprite */
              if (cctrl_ptr < 4) {
                *(short *)(thing_ptr + 0x54) = ch * -0x74 + 0x800;
              }
              else {
                *(short *)(thing_ptr + 0x54) = (ch + -3) * 0x74 + 0x6a4;
              }
            }
          }
          else {
            *extraout_ECX = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
            extraout_ECX[1] = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
            *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
            uval = *(ushort *)(thing_ptr + 0x54);
            *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
            *(uint *)((int)extraout_ECX + 0xb) = (uint)uval;
            cctrl_ptr = *(int *)(thing_ptr + 0xf) >> 0x10; /* thing->mappos.val_y */
            val = *(int *)(extraout_ECX + 1) >> 0x10;
            short_val = (short)(((cctrl_ptr + 0x40) - val) / 2) +
                    (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
            if (val < cctrl_ptr + 0x20) {
              extraout_ECX[2] = short_val;
              if ((*(int *)(thing_ptr + 0xf) >> 0x10) + 0x40 < *(int *)(extraout_ECX + 1) >> 0x10) { /* thing->mappos.val_y */
                extraout_ECX[2] = *(short *)(thing_ptr + 0x11) + 0x40;
              }
            }
            else {
              extraout_ECX[2] = short_val;
              if (*(int *)(extraout_ECX + 1) >> 0x10 < (*(int *)(thing_ptr + 0xf) >> 0x10) + 0x40) { /* thing->mappos.val_y */
                extraout_ECX[2] = *(short *)(thing_ptr + 0x11) + 0x40;
              }
            }
          }
        }
        break;
      case 2:
        *(undefined2 *)(&g_bss_0019d182 + local_24) = *word_ptr;
        *(undefined2 *)(&g_bss_0019d184 + local_24) =
             *(undefined2 *)(*(int *)((int)&g_player_active_camera + local_24) + 2);
        break;
      case 5:
        *(undefined2 *)(&g_bss_0019d104 + local_24) = *word_ptr;
        *(undefined2 *)(&g_bss_0019d106 + local_24) =
             *(undefined2 *)(*(int *)((int)&g_player_active_camera + local_24) + 2);
      }
      if (*(int *)(extraout_EDX + 0xea0) != 0) {
        *(int *)(extraout_EDX + 0xea0) = *(int *)(extraout_EDX + 0xea0) + -1;
      }
      if (0 < *(int *)(extraout_EDX + 0xea4)) {
        *(int *)(extraout_EDX + 0xea4) = *(int *)(extraout_EDX + 0xea4) + -0x20;
      }
    }
    local_24 = local_24 + 0x4ef;
    if (local_24 == 0x18ab) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : update_go_first_person_without_0e31b8 (Original VA: 0xe31b8, Ghidra: FUN_000e31b8)
 * Prototype: void update_go_first_person_without_0e31b8(void);
 * Address  : 0xe31b8 (Size: 1234 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 2207
 * Purpose  : String 'Cannot go first person without controlling creature'
 * Callers  : 0 -> 
 * Callees  : 3 -> workshop_fn_077b8d, creature_fn_081dd8, LbErrorLog
 ******************************************************************************/
void update_go_first_person_without_0e31b8(void)

{
  ushort uval;
  undefined2 *word_ptr;
  char ch;
  short short_val;
  int arg_eax;
  int val;
  uint uval_2;
  int cctrl_ptr;
  undefined2 *extraout_ECX;
  int extraout_EDX;
  int extraout_EDX_00;
  int val_2;
  int thing_ptr;
  
  workshop_fn_077b8d();
  word_ptr = *(undefined2 **)(arg_eax + 0x38);
  switch(*(undefined1 *)(word_ptr + 3)) {
  case 1:
    if (*(ushort *)(arg_eax + 0x2f) == 0) {
      if (*(char *)(arg_eax + 0x4b0) != '\v') {
        LbErrorLog(); /* LbErrorLog("update.cpp", line 2207, "Cannot go first person without controlling creature") */
      }
      break;
    }
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x2f)];
    ch = creature_fn_081dd8();
    if (*(char *)(thing_ptr + 0x1f) != '\x05') { /* thing->class_id */
      if (*(char *)(thing_ptr + 0x1a) == '\n') {
        *extraout_ECX = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
        extraout_ECX[1] = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
        extraout_ECX[2] = *(short *)(thing_ptr + 0x11) + 0xf0;
        *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
        uval = *(ushort *)(thing_ptr + 0x54);
        *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
        *(uint *)((int)extraout_ECX + 0xb) = (uint)uval;
        cctrl_ptr = *(int *)(thing_ptr + 0x13) >> 0x18; /* thing->anim_sprite */
        *(undefined2 *)(thing_ptr + 0x54) = 0;
        if (cctrl_ptr != 0) {
          ch = (char)((uint)*(int *)(thing_ptr + 0x13) >> 0x18); /* thing->anim_sprite */
          if (cctrl_ptr < 4) {
            *(short *)(thing_ptr + 0x54) = ch * -0x74 + 0x800;
          }
          else {
            *(short *)(thing_ptr + 0x54) = (ch + -3) * 0x74 + 0x6a4;
          }
        }
      }
      else {
        *extraout_ECX = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
        extraout_ECX[1] = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
        *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
        uval = *(ushort *)(thing_ptr + 0x54);
        *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
        *(uint *)((int)extraout_ECX + 0xb) = (uint)uval;
        cctrl_ptr = *(int *)(thing_ptr + 0xf) >> 0x10; /* thing->mappos.val_y */
        val = *(int *)(extraout_ECX + 1) >> 0x10;
        short_val = (short)(((cctrl_ptr + 0x40) - val) / 2) +
                (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
        if (val < cctrl_ptr + 0x20) {
          extraout_ECX[2] = short_val;
          if ((*(int *)(thing_ptr + 0xf) >> 0x10) + 0x40 < *(int *)(extraout_ECX + 1) >> 0x10) { /* thing->mappos.val_y */
            extraout_ECX[2] = *(short *)(thing_ptr + 0x11) + 0x40;
          }
        }
        else {
          extraout_ECX[2] = short_val;
          if (*(int *)(extraout_ECX + 1) >> 0x10 < (*(int *)(thing_ptr + 0xf) >> 0x10) + 0x40) { /* thing->mappos.val_y */
            extraout_ECX[2] = *(short *)(thing_ptr + 0x11) + 0x40;
          }
        }
      }
      break;
    }
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
    if ((*(int *)(cctrl_ptr + 0xc6) >> 0x10 == 0) ||
       ((int)(uint)*(ushort *)(thing_ptr + 0x60) < *(int *)(thing_ptr + 0xf) >> 0x10)) { /* thing->mappos.val_y */
      *(undefined1 *)(cctrl_ptr + 0x1e9) = 0;
    }
    else {
      *(char *)(cctrl_ptr + 0x1e9) = ch << 4;
    }
    val = (uint)*(ushort *)(thing_ptr + 0xd) + /* thing->mappos.val_x */
            ((&g_slab_attr_table)[*(ushort *)(thing_ptr + 0x52)] * -0x5a >> 0x10); /* thing->health */
    val_2 = (uint)*(ushort *)(thing_ptr + 0xf) + /* thing->mappos.val_y */
            (-((int)(&PTR_LAB_00192fe0)[*(ushort *)(thing_ptr + 0x52)] * -0x5a >> 8) >> 8); /* thing->health */
    if (val < 0) {
      val = 0;
    }
    else if (0xffff < val) {
      val = 0xffff;
    }
    if (val_2 < 0) {
      val_2 = 0;
    }
    else if (0xffff < val_2) {
      val_2 = 0xffff;
    }
    if ((*(byte *)(thing_ptr + 0x25) & 0x20) == 0) {
      *extraout_ECX = (short)val;
      extraout_ECX[1] = (short)val_2;
      *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
      uval = *(ushort *)(thing_ptr + 0x54);
      *(undefined4 *)((int)extraout_ECX + 0xf) = 0;
      *(uint *)((int)extraout_ECX + 0xb) = (uint)uval;
      val_2 = *(int *)(thing_ptr + 0xf) >> 0x10; /* thing->mappos.val_y */
      uval_2 = (uint)*(ushort *)(extraout_EDX_00 + 0x55);
      val = *(int *)(extraout_ECX + 1) >> 0x10;
      short_val = (short)((uint)*(int *)(extraout_ECX + 1) >> 0x10);
      if (val < (int)(val_2 + uval_2)) {
        extraout_ECX[2] =
             (short)((int)((val_2 + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18) + uval_2) - val) / 2) + short_val
        ;
        if ((int)((uint)*(ushort *)(extraout_EDX_00 + 0x55) +
                 (*(int *)(thing_ptr + 0xf) >> 0x10) + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18)) < /* thing->mappos.val_y */
            *(int *)(extraout_ECX + 1) >> 0x10) {
LAB_000e3464:
          extraout_ECX[2] =
               *(short *)(thing_ptr + 0x11) + (short)*(char *)(cctrl_ptr + 0x1e9) +
               *(short *)(extraout_EDX_00 + 0x55);
        }
      }
      else {
        extraout_ECX[2] =
             (short)((int)((val_2 + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18) + uval_2) - val) / 2) + short_val
        ;
        if (*(int *)(extraout_ECX + 1) >> 0x10 <
            (int)((uint)*(ushort *)(extraout_EDX_00 + 0x55) +
                 (*(int *)(thing_ptr + 0xf) >> 0x10) + (*(int *)(cctrl_ptr + 0x1e6) >> 0x18))) /* thing->mappos.val_y */
        goto LAB_000e3464;
      }
    }
    else {
      *extraout_ECX = (short)val;
      extraout_ECX[1] = (short)val_2;
      extraout_ECX[2] = *(undefined2 *)(thing_ptr + 0x11);
      extraout_ECX[2] = extraout_ECX[2] + *(short *)(extraout_EDX_00 + 0x55);
      *(uint *)((int)extraout_ECX + 7) = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
      *(uint *)((int)extraout_ECX + 0xb) = (uint)*(ushort *)(thing_ptr + 0x54);
      *(int *)((int)extraout_ECX + 0xf) = *(int *)(cctrl_ptr + 0xca) >> 0x10;
    }
    thing_ptr = (uint)*(byte *)(thing_ptr + 0xe) + (uint)*(byte *)(thing_ptr + 0x10) * 0x100;
    thing_ptr = (int)(((*(uint *)((int)&g_map_subtiles + (thing_ptr + 1) * 5 + 1) & 0xfffffff) >> 0x18) *
                  0x100 + ((*(uint *)((int)&g_map_subtiles + thing_ptr * 5 + 1) & 0xfffffff) >> 0x18) *
                          0x100 +
                  ((*(uint *)((int)&g_map_subtiles + (thing_ptr + 0x100) * 5 + 1) & 0xfffffff) >> 0x18) *
                  0x100 + ((*(uint *)(&g_bss_00279709 + thing_ptr * 5) & 0xfffffff) >> 0x18) * 0x100) >> 2
    ;
    if (thing_ptr + -0x40 < *(int *)(extraout_ECX + 1) >> 0x10) {
      extraout_ECX[2] = (short)thing_ptr + -0x40;
    }
    break;
  case 2:
    *(undefined2 *)(arg_eax + 0xba) = *word_ptr;
    *(undefined2 *)(arg_eax + 0xbc) = *(undefined2 *)(*(int *)(arg_eax + 0x38) + 2);
    break;
  case 5:
    *(undefined2 *)(arg_eax + 0x3c) = *word_ptr;
    *(undefined2 *)(arg_eax + 0x3e) = *(undefined2 *)(*(int *)(arg_eax + 0x38) + 2);
  }
  if (*(int *)(extraout_EDX + 0xea0) != 0) {
    *(int *)(extraout_EDX + 0xea0) = *(int *)(extraout_EDX + 0xea0) + -1;
  }
  if (0 < *(int *)(extraout_EDX + 0xea4)) {
    *(int *)(extraout_EDX + 0xea4) = *(int *)(extraout_EDX + 0xea4) + -0x20;
  }
  return;
}

/******************************************************************************
 * Function : update_update_creature_and_thing_0e3a8c (Original VA: 0xe3a8c, Ghidra: FUN_000e3a8c)
 * Prototype: undefined8 update_update_creature_and_thing_0e3a8c(void);
 * Address  : 0xe3a8c (Size: 470 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 5 -> sound_update_creature_control_06e61e, sound3d_fn_06f72b, sound_fn_06f865, update_fn_0dc440, LbScreenWaitVbi
 ******************************************************************************/
undefined8 update_update_creature_and_thing_0e3a8c(void)

{
  byte flag;
  undefined4 *arg_eax;
  int val;
  byte *thing_ptr;
  byte *extraout_ECX;
  byte *thing_ptr_2;
  undefined4 arg_edx;
  int cctrl_ptr;
  int extraout_EDX;
  int aiStack_30 [5];
  undefined2 uStack_1c;
  
  aiStack_30[1] = g_data_001927c8;
  aiStack_30[2] = g_data_001927cc;
  aiStack_30[3] = g_data_001927d0;
  aiStack_30[4] = *arg_eax;
  uStack_1c = *(undefined2 *)(arg_eax + 1);
  if (g_bss_003d97b4 == 0) {
    aiStack_30[0] = 0xe3ac5;
    LbScreenWaitVbi();
    thing_ptr_2 = (&g_thing_ptrs)[g_bss_002e6eb6];
    if ((&g_thing_ptrs)[g_bss_002e6eb6] != g_thing_ptrs) {
      do {
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 0x67)];
        flag = thing_ptr_2[1];
        thing_ptr_2[1] = flag & 0xdf;
        if ((((*thing_ptr_2 & 0x10) == 0) && ((flag & 2) == 0)) &&
           (*(int *)(&g_data_001880f4 + (uint)thing_ptr_2[0x1a] * 0x58) != 0)) {
          cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)]; /* thing->ccontrol_idx */
          aiStack_30[0] = 0xe3b3c;
          val = update_fn_0dc440();
          thing_ptr = extraout_ECX;
          if ((val < aiStack_30[1]) &&
             (((*(short *)(cctrl_ptr + 9) != 0 &&
               (*(int *)(thing_ptr_2 + 0xf) >> 0x10 <= (int)(uint)*(ushort *)(thing_ptr_2 + 0x60))) || /* thing->mappos.val_y */
              ((thing_ptr_2[0x25] & 0x20) != 0)))) {
            cctrl_ptr = 8;
            do {
              *(undefined4 *)((int)&g_bss_003d97b8 + cctrl_ptr) =
                   *(undefined4 *)((int)&g_bss_003d97b4 + cctrl_ptr);
              *(undefined4 *)((int)aiStack_30 + cctrl_ptr + 4) =
                   *(undefined4 *)((int)aiStack_30 + cctrl_ptr);
              cctrl_ptr = cctrl_ptr + -4;
            } while (cctrl_ptr != 0);
            g_bss_003d97b8 = (uint)*(ushort *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
            aiStack_30[1] = val;
          }
        }
        thing_ptr_2 = thing_ptr;
      } while (thing_ptr != g_thing_ptrs);
    }
  }
  cctrl_ptr = 0;
  do {
    if (*(int *)((int)&g_bss_003d97b8 + cctrl_ptr) == 0) break;
    if (*(char *)((int)(&g_thing_ptrs)[*(int *)((int)&g_bss_003d97b8 + cctrl_ptr)] + 0x1f) == '\x05') {
      thing_ptr_2 = (byte *)((int)(&g_thing_ptrs)[*(int *)((int)&g_bss_003d97b8 + cctrl_ptr)] + 1);
      *thing_ptr_2 = *thing_ptr_2 | 0x20;
      aiStack_30[0] = 0xe3bba;
      sound_update_creature_control_06e61e();
      cctrl_ptr = extraout_EDX;
    }
    cctrl_ptr = cctrl_ptr + 4;
  } while (cctrl_ptr < 0xc);
  if ((g_bss_003d97b4 == 0) && (thing_ptr_2 = (&g_thing_ptrs)[g_bss_002e6eb6], thing_ptr_2 != g_thing_ptrs)) {
    do {
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 0x67)];
      if ((thing_ptr_2[0x1a] == 0x13) && (-1 < (char)(thing_ptr_2[1] << 2))) {
        aiStack_30[0] = 0xe3c22;
        cctrl_ptr = sound_fn_06f865();
        if (cctrl_ptr != 0) {
          aiStack_30[0] = 0xe3c34;
          sound3d_fn_06f72b();
        }
      }
      thing_ptr_2 = thing_ptr;
    } while (thing_ptr != g_thing_ptrs);
  }
  cctrl_ptr = g_bss_003d97b4 + 1;
  g_bss_003d97b4 = cctrl_ptr % 4;
  return CONCAT44(arg_edx,cctrl_ptr / 4);
}

/******************************************************************************
 * Function : update_illegal_effect_element_bounce_0e3db8 (Original VA: 0xe3db8, Ghidra: FUN_000e3db8)
 * Prototype: void update_illegal_effect_element_bounce_0e3db8(void);
 * Address  : 0xe3db8 (Size: 80 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 2559
 * Purpose  : String 'Illegal effect element bounce life: %d'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
void update_illegal_effect_element_bounce_0e3db8(void)

{
  int arg_eax;
  int val;
  
  val = *(int *)(arg_eax + 0x5c) >> 0x10;
  if ((-1 < val) && (val < 0x10)) {
    *(undefined2 *)(arg_eax + 0x30) = *(undefined2 *)(&g_data_00192788 + val * 4);
    return;
  }
  dk_sprintf(&g_log_sprintf_buf,s_Illegal_effect_element_bounce_li_0016ca81,
               *(int *)(arg_eax + 0x5c) >> 0x10);
  LbErrorLog(); /* LbErrorLog("update.cpp", line 2559, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : update_fn_0e3e08 (Original VA: 0xe3e08, Ghidra: FUN_000e3e08)
 * Prototype: undefined8 update_fn_0e3e08(void);
 * Address  : 0xe3e08 (Size: 80 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Module update.cpp procedure @ 0x0e3e08
 * Callers  : 0 -> 
 * Callees  : 3 -> sound_fn_06f671, sound_fn_06f69c, sound_fn_06f6b8
 ******************************************************************************/
undefined8 update_fn_0e3e08(void)

{
  int arg_eax;
  int val;
  undefined4 arg_edx;
  int extraout_EDX;
  
  if (*(char *)(arg_eax + 0x66) != '\0') {
    val = sound_fn_06f6b8();
    if (val == 0) {
      sound_fn_06f69c();
    }
    else {
      sound_fn_06f671();
      *(undefined1 *)(extraout_EDX + 0x66) = 0;
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : update_illegal_primary_target_type_0e3e78 (Original VA: 0xe3e78, Ghidra: FUN_000e3e78)
 * Prototype: undefined2 update_illegal_primary_target_type_0e3e78(void);
 * Address  : 0xe3e78 (Size: 639 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 2654
 * Purpose  : String 'Illegal primary target type for shot'
 * Callers  : 2 -> process_players_creature_control_packet, process_players_map_view_packet
 * Callees  : 4 -> anger_fn_0101c2, anger_fn_010c1a, anger_fn_010c5f, LbErrorLog
 ******************************************************************************/
undefined2 update_illegal_primary_target_type_0e3e78(void)

{
  char ch;
  undefined2 uval;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int thing_ptr;
  undefined4 arg_edx;
  uint uval_2;
  uint uval_3;
  int val_4;
  int local_2c;
  int local_28;
  int local_20;
  
  val = *(byte *)(arg_eax + 0xe) - 0x14;
  uval = 0;
  if (val < 0) {
    val = 0;
  }
  local_2c = *(byte *)(arg_eax + 0x10) - 0x14;
  if (local_2c < 0) {
    local_2c = 0;
  }
  uval_2 = *(byte *)(arg_eax + 0xe) + 0x14;
  if (0xff < uval_2) {
    uval_2 = 0xff;
  }
  uval_3 = *(byte *)(arg_eax + 0x10) + 0x14;
  if (0xff < uval_3) {
    uval_3 = 0xff;
  }
  val_4 = 0x7fffffff;
  if (local_2c <= (int)uval_3) {
    local_28 = local_2c * 0x500;
    do {
      if (val <= (int)uval_2) {
        local_20 = val * 5 + local_28;
        do {
          thing_ptr = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + local_20 + 1) & 0x3fffff) >> 0xb];
          if (thing_ptr != g_thing_ptrs) {
            do {
              if (thing_ptr != arg_eax) {
                switch(arg_edx) {
                case 1:
                case 7:
                  if (*(char *)(thing_ptr + 0x1f) != '\x05') { /* thing->class_id */
                    if (*(char *)(thing_ptr + 0x1f) != '\x01') goto LAB_000e3f7f; /* thing->class_id */
                    ch = *(char *)(thing_ptr + 0x1a);
                    goto joined_r0x000e3fff;
                  }
                  break;
                case 2:
                  ch = *(char *)(thing_ptr + 0x1f); /* thing->class_id */
joined_r0x000e3fff:
                  if (ch != '\x05') goto LAB_000e3f7f;
                  break;
                case 3:
                  if (((*(char *)(thing_ptr + 0x1f) != '\x05') && /* thing->class_id */
                      ((*(char *)(thing_ptr + 0x1f) != '\x01' || (*(char *)(thing_ptr + 0x1a) != '\x05')))) /* thing->class_id */
                     || (*(char *)(thing_ptr + 6) == *(char *)(arg_eax + 6))) goto LAB_000e3f7f; /* thing->owner */
                  break;
                case 4:
                  if ((*(char *)(thing_ptr + 0x1f) != '\x05') || /* thing->class_id */
                     (*(char *)(thing_ptr + 6) == *(char *)(arg_eax + 6))) goto LAB_000e3f7f; /* thing->owner */
                  break;
                case 5:
                  if (((*(char *)(thing_ptr + 0x1f) != '\x05') && /* thing->class_id */
                      ((*(char *)(thing_ptr + 0x1f) != '\x01' || (*(char *)(thing_ptr + 0x1a) != '\x05')))) /* thing->class_id */
                     || (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6))) goto LAB_000e3f7f; /* thing->owner */
                  break;
                case 6:
                  if ((*(char *)(thing_ptr + 0x1f) != '\x05') || /* thing->class_id */
                     (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6))) goto LAB_000e3f7f; /* thing->owner */
                  break;
                case 8:
                  break;
                default:
                  LbErrorLog(); /* LbErrorLog("update.cpp", line 2654, "Illegal primary target type for shot") */
                }
                anger_fn_010c1a();
                val_2 = anger_fn_010c5f();
                thing_ptr = extraout_ECX;
                if ((0x26 < val_2) || (val_3 = anger_fn_0101c2(), thing_ptr = extraout_ECX_00, val_3 == 0))
                {
                  val_2 = 0x7fffffff;
                }
                if (val_2 < val_4) {
                  uval = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
                  val_4 = val_2;
                }
              }
LAB_000e3f7f:
              thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
            } while (thing_ptr != g_thing_ptrs);
          }
          local_20 = local_20 + 5;
        } while (local_20 <= (int)(local_28 + uval_2 * 5));
      }
      local_28 = local_28 + 0x500;
      local_2c = local_2c + 1;
    } while (local_2c <= (int)uval_3);
  }
  return uval;
}

/******************************************************************************
 * Function : update_fn_0e40f8 (Original VA: 0xe40f8, Ghidra: FUN_000e40f8)
 * Prototype: int update_fn_0e40f8(void);
 * Address  : 0xe40f8 (Size: 65 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Module update.cpp procedure @ 0x0e40f8
 * Callers  : 0 -> 
 * Callees  : 3 -> anger_fn_0101c2, anger_fn_010c1a, anger_fn_010c5f
 ******************************************************************************/
int update_fn_0e40f8(void)

{
  int val;
  int val_2;
  int arg_ebx;
  
  anger_fn_010c1a();
  val = anger_fn_010c5f();
  if (val < arg_ebx) {
    val_2 = anger_fn_0101c2();
    if (val_2 != 0) {
      return val;
    }
  }
  return 0x7fffffff;
}

/******************************************************************************
 * Function : update_update_creature_control_0e413c (Original VA: 0xe413c, Ghidra: FUN_000e413c)
 * Prototype: void update_update_creature_control_0e413c(void);
 * Address  : 0xe413c (Size: 228 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> update_update_slab_subtile_columns_0df760, update_some_thing_has_been_0e01f4, update_fn_0e0880
 * Callees  : 0 -> 
 ******************************************************************************/
void update_update_creature_control_0e413c(void)

{
  int thing;
  ushort uval;
  int val;
  int val_2;
  
  if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
    *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xce) = /* thing->ccontrol_idx */
         *(undefined4 *)(thing + 0x40);
  }
  if ((*(short *)(thing + 0x3e) != 0) && (*(char *)(thing + 0x49) != '\0')) {
    val_2 = *(int *)(thing + 0x40) + (*(int *)(thing + 0x3c) >> 0x10);
    *(int *)(thing + 0x40) = val_2;
    while (val_2 < 0) {
      val_2 = *(int *)(thing + 0x40) + (uint)*(byte *)(thing + 0x49) * 0x100;
      *(int *)(thing + 0x40) = val_2;
    }
    val = (uint)*(byte *)(thing + 0x49) * 0x100;
    val_2 = val + -1;
    if (val_2 < *(int *)(thing + 0x40)) {
      if ((*(byte *)(thing + 0x4f) & 0x40) == 0) { /* thing->render_flags */
        val_2 = *(int *)(thing + 0x40) % val;
      }
      else {
        *(undefined2 *)(thing + 0x3e) = 0;
      }
      *(int *)(thing + 0x40) = val_2;
    }
    *(char *)(thing + 0x48) = (char)((uint)*(undefined4 *)(thing + 0x40) >> 8);
  }
  if (*(char *)(thing + 0x4a) == '\0') {
    return;
  }
  uval = *(short *)(thing + 0x46) + (short)*(char *)(thing + 0x4a);
  *(ushort *)(thing + 0x46) = uval;
  if (*(ushort *)(thing + 0x4b) < uval) {
    if (uval < *(ushort *)(thing + 0x4d)) {
      return;
    }
    *(ushort *)(thing + 0x46) = *(ushort *)(thing + 0x4d);
    if ((*(byte *)(thing + 0x50) & 2) != 0) {
      *(char *)(thing + 0x4a) = -*(char *)(thing + 0x4a);
      return;
    }
  }
  else {
    *(ushort *)(thing + 0x46) = *(ushort *)(thing + 0x4b);
    if ((*(byte *)(thing + 0x50) & 2) != 0) {
      *(char *)(thing + 0x4a) = -*(char *)(thing + 0x4a);
      return;
    }
  }
  *(undefined1 *)(thing + 0x4a) = 0;
  return;
}

/******************************************************************************
 * Function : update_update_creature_control_0e4220 (Original VA: 0xe4220, Ghidra: FUN_000e4220)
 * Prototype: longlong update_update_creature_control_0e4220(void);
 * Address  : 0xe4220 (Size: 928 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> move_process_map_subtile_0b3040
 ******************************************************************************/
longlong update_update_creature_control_0e4220(void)

{
  short *val;
  undefined *word_ptr;
  byte *thing;
  int val_2;
  int extraout_ECX;
  int cctrl_ptr;
  uint arg_edx;
  bool flag;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  flag = false;
  if (*(char *)(cctrl_ptr + 0xab) == '\0') {
    if ((*thing & 0x20) == 0) {
      if ((*(byte *)(cctrl_ptr + 2) & 1) == 0) {
        if (*(short *)(cctrl_ptr + 200) != 0) {
          *(short *)(cctrl_ptr + 0xbb) =
               (short)((uint)((*(int *)(cctrl_ptr + 0xc6) >> 0x10) *
                             (&g_slab_attr_table)[*(ushort *)(thing + 0x52)]) >> 0x10); /* thing->health */
          word_ptr = (&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52)]; /* thing->health */
          *(undefined2 *)(cctrl_ptr + 0xbf) = 0;
          flag = true;
          *(short *)(cctrl_ptr + 0xbd) =
               (short)((uint)-((*(int *)(cctrl_ptr + 0xc6) >> 0x10) * (int)word_ptr >> 8) >> 8);
        }
      }
      else {
        flag = true;
        *(byte *)(cctrl_ptr + 2) = *(byte *)(cctrl_ptr + 2) & 0xfe;
      }
    }
    else if ((thing[0x25] & 0x20) == 0) {
      flag = *(short *)(cctrl_ptr + 200) != 0;
      if (flag) {
        *(short *)(cctrl_ptr + 0xbb) =
             (short)((uint)((*(int *)(cctrl_ptr + 0xc6) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x52)]) >> 0x10); /* thing->health */
        *(short *)(cctrl_ptr + 0xbd) =
             (short)((uint)-((*(int *)(cctrl_ptr + 0xc6) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52)] >> 8) >> 8); /* thing->health */
      }
      if (*(short *)(cctrl_ptr + 0xca) != 0) {
        *(short *)(cctrl_ptr + 0xbb) =
             (short)((uint)*(undefined4 *)(cctrl_ptr + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(cctrl_ptr + 200) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff]) >> 0x10); /* thing->health */
        flag = true;
        *(short *)(cctrl_ptr + 0xbd) =
             (short)((uint)*(undefined4 *)(cctrl_ptr + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(cctrl_ptr + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff] >> /* thing->health */
                            8) >> 8);
      }
    }
    else {
      if (*(short *)(cctrl_ptr + 200) != 0) {
        *(short *)(cctrl_ptr + 0xbb) =
             (short)((uint)(((int)(&g_slab_attr_table)[*(ushort *)(thing + 0x52)] >> 8) * /* thing->health */
                           ((*(int *)(cctrl_ptr + 0xc6) >> 0x10) *
                            (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x54)] >> 8)) >> 0x10);
        *(short *)(cctrl_ptr + 0xbd) =
             (short)((uint)-(((int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52)] >> 8) * /* thing->health */
                             ((*(int *)(cctrl_ptr + 0xc6) >> 0x10) *
                              (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x54)] >> 8) >> 8) >> 8)
        ;
        *(short *)(cctrl_ptr + 0xbf) =
             (short)((uint)((*(int *)(cctrl_ptr + 0xc6) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x54)]) >> 0x10);
      }
      if (*(short *)(cctrl_ptr + 0xca) != 0) {
        *(short *)(cctrl_ptr + 0xbb) =
             (short)((uint)*(undefined4 *)(cctrl_ptr + 0xb9) >> 0x10) +
             (short)((uint)((*(int *)(cctrl_ptr + 200) >> 0x10) *
                           (&g_slab_attr_table)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff]) >> 0x10); /* thing->health */
        *(short *)(cctrl_ptr + 0xbd) =
             (short)((uint)*(undefined4 *)(cctrl_ptr + 0xbb) >> 0x10) +
             (short)((uint)-((*(int *)(cctrl_ptr + 200) >> 0x10) *
                             (int)(&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52) + 0x600 & 0x7ff] >> /* thing->health */
                            8) >> 8);
      }
    }
    if (((thing[0x25] & 0x20) != 0) && ((*thing & 0x20) == 0)) {
      val_2 = move_process_map_subtile_0b3040();
      val_2 = (val_2 + 0x100) - (*(int *)(extraout_ECX + 0xf) >> 0x10);
      val = (short *)(cctrl_ptr + 0xbf);
      if (val_2 < 1) {
        if (val_2 < 0) {
          cctrl_ptr = -val_2;
          if (val_2 != -0x20 && 0x1f < cctrl_ptr) {
            cctrl_ptr = 0x20;
          }
          *val = *val - (short)cctrl_ptr;
          return CONCAT44(arg_edx,1);
        }
      }
      else {
        if (0x20 < val_2) {
          val_2 = 0x20;
        }
        *val = *val + (short)val_2;
        flag = true;
      }
    }
  }
  else {
    *(undefined2 *)(cctrl_ptr + 0xbb) = 0;
    *(undefined2 *)(cctrl_ptr + 0xbd) = 0;
    *(undefined2 *)(cctrl_ptr + 0xbf) = 0;
    *(undefined2 *)(cctrl_ptr + 200) = 0;
    flag = true;
    *(byte *)(cctrl_ptr + 2) = *(byte *)(cctrl_ptr + 2) & 0xfe;
  }
  if (!flag) {
    if (((*(short *)(cctrl_ptr + 0xbb) == 0) && (*(short *)(cctrl_ptr + 0xbd) == 0)) &&
       (*(short *)(cctrl_ptr + 0xbf) == 0)) {
      return (ulonglong)arg_edx << 0x20;
    }
    return CONCAT44(arg_edx,1);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : update_update_slab_subtile_columns_0e45c0 (Original VA: 0xe45c0, Ghidra: FUN_000e45c0)
 * Prototype: void update_update_slab_subtile_columns_0e45c0(void);
 * Address  : 0xe45c0 (Size: 1780 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 9 -> anger_fn_010434, effect_allocate_light_effect_024998, inits_fn_043ac3, person_fn_063b6d, person_fn_064a2e, pom_update_slab_subtile_columns_0655fa, creature_fn_081c10, creature_update_creature_control_081d84 ...
 ******************************************************************************/
void update_update_slab_subtile_columns_0e45c0(void)

{
  undefined4 uval;
  byte flag;
  undefined *word_ptr;
  short short_val;
  short short_val_2;
  undefined2 uval_2;
  byte *thing;
  uint uval_3;
  int thing_ptr;
  int val;
  short *val_2;
  short *val_3;
  byte flag_2;
  short asStack_82c [1014];
  undefined4 auStack_40 [3];
  undefined4 local_34;
  short asStack_30 [2];
  undefined4 local_2c;
  int aiStack_28 [4];
  
  flag_2 = 0;
  val_3 = (short *)&local_34;
  aiStack_28[1] = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  thing[0x25] = thing[0x25] & 0x7c;
  *(undefined2 *)(aiStack_28[1] + 0xb9) = 0;
  if (*(int *)(thing + 0xf) >> 0x10 != /* thing->mappos.val_y */
      (uint)((&g_bss_00269203)[(uint)thing[0x10] * 0x100 + (uint)thing[0xe]] & 0xf) << 8)
  goto LAB_000e4c25;
  auStack_40[2] = 0xe4621;
  uval_3 = light_process_map_subtile_0b23ec();
  if ((uval_3 & 0xfffffffe) == 0x28) {
    auStack_40[2] = 0xe4653;
    creature_fn_081c10();
    thing[0x25] = thing[0x25] | 2;
  }
  else if (uval_3 == 0x27) {
    thing[0x25] = thing[0x25] | 1;
  }
  if ((thing[0x25] & 1) == 0) {
    if (*(char *)(aiStack_28[1] + 0xc1) == '\0') {
      val_3 = (short *)&local_34;
      uval_3 = local_34;
      if (g_bss_002e7bed == '\x02') {
        auStack_40[2] = 0xe46c7;
        thing_ptr = creature_update_creature_control_081d84();
        local_34 = *(uint *)(thing + 0xd); /* thing->mappos.val_x */
        uval_3 = local_34;
        asStack_30[(uint)flag_2 * -4] = *(short *)(thing + (uint)flag_2 * -8 + 0x11);
        val_3 = (short *)&local_34;
        if ((&g_slabmap_base)
            [((&g_subtile_to_slab_lut)[local_34 >> 0x18] * 0x55 + (&g_subtile_to_slab_lut)[local_34 >> 8 & 0xff]) * 6]
            == '\n') {
          thing[0x25] = thing[0x25] | 0x80;
          local_34._2_2_ = (short)(local_34 >> 0x10);
          if (thing_ptr == 1) {
            short_val = (short)((uint)((&g_slab_attr_table)[*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6) /* thing->health */
                           >> 0x10);
            short_val_2 = (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                          [*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6) >> 8) /* thing->health */
                           >> 8);
          }
          else {
            val_3 = (short *)&local_34;
            if (thing_ptr != 2) goto LAB_000e4aca;
            short_val = -(short)((uint)((&g_slab_attr_table)[*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6 /* thing->health */
                                   ) >> 0x10);
            short_val_2 = -(short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                           [*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6) >> 8) /* thing->health */
                            >> 8);
          }
          auStack_40[2] = 0xffffffff;
          local_34 = CONCAT22(local_34._2_2_ + short_val_2,(short)local_34 + short_val);
          inits_fn_043ac3();
          val_3 = (short *)(auStack_40 + 2);
          uval_3 = local_34;
        }
      }
    }
    else {
      auStack_40[2] = 0xe48e6;
      thing_ptr = creature_update_creature_control_081d84();
      aiStack_28[3] = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
      flag = thing[0x1a];
      uval = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
      *(undefined2 *)(aiStack_28 + (uint)flag_2 * -2) =
           *(undefined2 *)(thing + (uint)flag_2 * -8 + 0x11);
      flag = (&g_data_0018b70c)[(uint)flag * 0x10];
      if (flag < 3) {
LAB_000e492b:
        local_2c._0_2_ = (short)uval;
        local_2c._2_2_ = (short)((uint)uval >> 0x10);
        if (thing_ptr == 1) {
          auStack_40[2] = 0xffffffff;
          local_2c = CONCAT22(local_2c._2_2_ +
                              (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                    [*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << /* thing->health */
                                              6) >> 8) >> 8),
                              (short)local_2c +
                              (short)((uint)((&g_slab_attr_table)
                                             [*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6) >> /* thing->health */
                                     0x10));
          inits_fn_043ac3();
          *(char *)(aiStack_28[2] + 0xc1) = *(char *)(aiStack_28[2] + 0xc1) + -1;
          val_2 = (short *)(auStack_40 + 2);
          uval = local_2c;
        }
        else {
          val_2 = (short *)&local_34;
          if (thing_ptr == 2) {
            auStack_40[2] = 0xffffffff;
            local_2c = CONCAT22(local_2c._2_2_ -
                                (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                      [*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] /* thing->health */
                                                << 6) >> 8) >> 8),
                                (short)local_2c -
                                (short)((uint)((&g_slab_attr_table)
                                               [*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6) >> /* thing->health */
                                       0x10));
            inits_fn_043ac3();
            *(char *)(aiStack_28[2] + 0xc1) = *(char *)(aiStack_28[2] + 0xc1) + -1;
            val_2 = (short *)(auStack_40 + 2);
            uval = local_2c;
          }
        }
      }
      else {
        val_2 = (short *)&local_34;
        if (4 < flag) {
          if (flag != 5) goto LAB_000e492b;
          val_2 = (short *)&local_34;
          if (thing_ptr != 0) {
            val_2 = (short *)(auStack_40 + 2);
            auStack_40[2] = 0xffffffff;
            local_2c = uval;
            inits_fn_043ac3();
            *(char *)(aiStack_28[2] + 0xc1) = *(char *)(aiStack_28[2] + 0xc1) + -1;
            uval = local_2c;
          }
        }
      }
      local_2c = uval;
      val_2[-0xffffffff00000002] = 0x47b7;
      val_2[-0xffffffff00000001] = 0xe;
      thing_ptr = creature_update_creature_control_081d84();
      *(undefined4 *)val_2 = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
      val_2[(uint)flag_2 * -4 + 2] = *(short *)(thing + (uint)flag_2 * -8 + 0x11);
      if (thing_ptr == 1) {
        *val_2 = *val_2 +
                   (short)((uint)((&g_slab_attr_table)[*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6) /* thing->health */
                          >> 0x10);
        word_ptr = (&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52) - 0x200 & 0x7ff]; /* thing->health */
        val_2[-0xffffffff00000002] = -1;
        val_2[-0xffffffff00000001] = -1;
        val_2[1] = val_2[1] + (short)((uint)-(((int)word_ptr << 6) >> 8) >> 8);
        val_2[-0xffffffff00000004] = 0x483e;
        val_2[-0xffffffff00000003] = 0xe;
        inits_fn_043ac3();
        *(char *)(*(int *)(val_2 + 6) + 0xc1) = *(char *)(*(int *)(val_2 + 6) + 0xc1) + -1;
        val_3 = val_2 + -2;
        uval_3 = local_34;
      }
      else {
        val_3 = val_2;
        uval_3 = local_34;
        if (thing_ptr == 2) {
          *val_2 = *val_2 -
                     (short)((uint)((&g_slab_attr_table)[*(ushort *)(thing + 0x52) - 0x200 & 0x7ff] << 6 /* thing->health */
                                   ) >> 0x10);
          word_ptr = (&PTR_LAB_00192fe0)[*(ushort *)(thing + 0x52) - 0x200 & 0x7ff]; /* thing->health */
          val_3 = val_2 + -2;
          val_2[-0xffffffff00000002] = -1;
          val_2[-0xffffffff00000001] = -1;
          val_2[1] = val_2[1] - (short)((uint)-(((int)word_ptr << 6) >> 8) >> 8);
          val_2[-0xffffffff00000004] = 0x4a3e;
          val_2[-0xffffffff00000003] = 0xe;
          inits_fn_043ac3();
          *(char *)(*(int *)(val_2 + 6) + 0xc1) = *(char *)(*(int *)(val_2 + 6) + 0xc1) + -1;
          uval_3 = local_34;
        }
      }
    }
  }
  else {
    auStack_40[2] = 0xe4677;
    thing_ptr = creature_update_creature_control_081d84();
    if (thing_ptr != 0) {
      auStack_40[2] = 0xe468d;
      effect_allocate_light_effect_024998();
    }
    *(undefined1 *)(aiStack_28[1] + 0xc1) = 0;
    val_3 = (short *)&local_34;
    uval_3 = local_34;
  }
LAB_000e4aca:
  local_34 = uval_3;
  thing_ptr = *(int *)(thing + 3);
  *(undefined4 *)((int)val_3 + 0x14) = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (thing_ptr >> 0x18 == (uint)g_bss_002eb542) {
    for (thing_ptr = (&g_thing_ptrs)
                 [(*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(thing[0x10],thing[0xe]) * 5 + 1)
                  & 0x3fffff) >> 0xb]; thing_ptr != g_thing_ptrs;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
      if (*(char *)(thing_ptr + 0x1f) == '\x04') { /* thing->class_id */
        val = *(int *)((int)val_3 + 0x14);
        *(undefined1 *)(val + 0xc1) = 0x14;
        uval_2 = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
LAB_000e4c1e:
        *(undefined2 *)(val + 0xb9) = uval_2;
        break;
      }
    }
  }
  else {
    for (thing_ptr = (&g_thing_ptrs)
                 [(*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(thing[0x10],thing[0xe]) * 5 + 1)
                  & 0x3fffff) >> 0xb]; thing_ptr != g_thing_ptrs;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
      if (*(char *)(thing_ptr + 0x1f) == '\x04') { /* thing->class_id */
        *(undefined4 *)((int)val_3 + -4) = 0xe4c0b;
        anger_fn_010434();
        *(undefined1 *)(*(int *)((int)val_3 + 0x14) + 0xc1) = 0x14;
        val = *(int *)((int)val_3 + 0x14);
        uval_2 = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        goto LAB_000e4c1e;
      }
    }
  }
LAB_000e4c25:
  if ((((*thing & 0x20) == 0) && ((thing[0x25] & 2) != 0)) &&
     ((&g_bss_002e9125)[(uint)thing[0x1a] * 0xe6] != '\0')) {
    flag_2 = thing[7];
    if (flag_2 == 0xe) {
      flag_2 = thing[8];
    }
    if ((flag_2 != 0x8f) && (*(int *)(*(int *)((int)val_3 + 0x10) + 0x2fe) + 0x40U < g_game_turn)
       ) {
      *(uint *)(*(int *)((int)val_3 + 0x10) + 0x2fe) = g_game_turn;
      *(undefined4 *)((int)val_3 + -4) = 0xe4c8e;
      thing_ptr = person_fn_064a2e();
      if (thing_ptr != 0) {
        *(undefined4 *)((int)val_3 + -4) = 0xe4c99;
        thing_ptr = pom_update_slab_subtile_columns_0655fa();
        if (thing_ptr == 0) {
          *(undefined4 *)((int)val_3 + -4) = 0xe4caa;
          person_fn_063b6d();
        }
        else {
          thing[8] = 0x8f;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : update_update_creature_and_thing_0e4cb4 (Original VA: 0xe4cb4, Ghidra: FUN_000e4cb4)
 * Prototype: void update_update_creature_and_thing_0e4cb4(void);
 * Address  : 0xe4cb4 (Size: 343 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 1 -> anger_fn_010434
 ******************************************************************************/
void update_update_creature_and_thing_0e4cb4(void)

{
  int cctrl_ptr;
  undefined2 uval;
  int thing;
  int arg_edx;
  int thing_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(int *)(thing + 3) >> 0x18 == (uint)g_bss_002eb542) {
    for (thing_ptr = (&g_thing_ptrs)
                 [(*(uint *)((int)&g_map_subtiles +
                            ((uint)*(byte *)(arg_edx + 3) * 0x100 + (uint)*(byte *)(arg_edx + 1)) * 5
                            + 1) & 0x3fffff) >> 0xb]; thing_ptr != g_thing_ptrs;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
      if (*(char *)(thing_ptr + 0x1f) == '\x04') { /* thing->class_id */
        *(undefined1 *)(cctrl_ptr + 0xc1) = 0x14;
        uval = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        goto LAB_000e4dfe;
      }
    }
  }
  else {
    thing_ptr = (&g_thing_ptrs)
            [(*(uint *)((int)&g_map_subtiles +
                       (uint)CONCAT11(*(undefined1 *)(arg_edx + 3),*(byte *)(arg_edx + 1)) * 5 + 1) &
             0x3fffff) >> 0xb];
    if (thing_ptr == g_thing_ptrs) {
      return;
    }
    while (*(char *)(thing_ptr + 0x1f) != '\x04') { /* thing->class_id */
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
      if (thing_ptr == g_thing_ptrs) {
        return;
      }
    }
    anger_fn_010434();
    *(undefined1 *)(cctrl_ptr + 0xc1) = 0x14;
    uval = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
LAB_000e4dfe:
    *(undefined2 *)(cctrl_ptr + 0xb9) = uval;
  }
  return;
}

/******************************************************************************
 * Function : update_update_creature_control_0e4e0c (Original VA: 0xe4e0c, Ghidra: FUN_000e4e0c)
 * Prototype: void update_update_creature_control_0e4e0c(void);
 * Address  : 0xe4e0c (Size: 412 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> inits_fn_043ac3, creature_update_creature_control_081d84
 ******************************************************************************/
void update_update_creature_control_0e4e0c(void)

{
  undefined4 uval;
  byte flag;
  ushort uval_2;
  int cctrl_ptr;
  int val;
  int thing_ptr;
  byte flag_2;
  undefined8 uval_3;
  short short_val;
  undefined2 auStack_1c [2];
  
  flag_2 = 0;
  uval_3 = creature_update_creature_control_081d84();
  thing_ptr = (int)((ulonglong)uval_3 >> 0x20);
  val = (int)uval_3;
  flag = *(byte *)(thing_ptr + 0x1a);
  uval_2 = *(ushort *)(thing_ptr + 100); /* thing->ccontrol_idx */
  uval = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
  auStack_1c[(uint)flag_2 * -4] = *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_2 * -8);
  flag = (&g_data_0018b70c)[(uint)flag * 0x10];
  cctrl_ptr = (&g_creature_ctrl_ptrs)[uval_2];
  if (2 < flag) {
    if (flag < 5) {
      return;
    }
    if (flag == 5) {
      if (val == 0) {
        return;
      }
      inits_fn_043ac3(0xffffffff,uval);
      *(char *)(cctrl_ptr + 0xc1) = *(char *)(cctrl_ptr + 0xc1) + -1;
      return;
    }
  }
  short_val = (short)((uint)uval >> 0x10);
  if (val == 1) {
    inits_fn_043ac3(0xffffffff,
                 CONCAT22(short_val + (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                        [*(ushort *)(thing_ptr + 0x52) - 0x200 & 0x7ff] /* thing->health */
                                                  << 6) >> 8) >> 8),
                          (short)uval +
                          (short)((uint)((&g_slab_attr_table)[*(ushort *)(thing_ptr + 0x52) - 0x200 & 0x7ff] /* thing->health */
                                        << 6) >> 0x10)));
    *(char *)(cctrl_ptr + 0xc1) = *(char *)(cctrl_ptr + 0xc1) + -1;
    return;
  }
  if (val != 2) {
    return;
  }
  inits_fn_043ac3(0xffffffff,
               CONCAT22(short_val - (short)((uint)-(((int)(&PTR_LAB_00192fe0)
                                                      [*(ushort *)(thing_ptr + 0x52) - 0x200 & 0x7ff] << /* thing->health */
                                                6) >> 8) >> 8),
                        (short)uval -
                        (short)((uint)((&g_slab_attr_table)[*(ushort *)(thing_ptr + 0x52) - 0x200 & 0x7ff] << /* thing->health */
                                      6) >> 0x10)));
  *(char *)(cctrl_ptr + 0xc1) = *(char *)(cctrl_ptr + 0xc1) + -1;
  return;
}

/******************************************************************************
 * Function : update_fn_0e4fa8 (Original VA: 0xe4fa8, Ghidra: FUN_000e4fa8)
 * Prototype: void update_fn_0e4fa8(void);
 * Address  : 0xe4fa8 (Size: 84 bytes)
 * Module   : update.cpp [contiguous_same_unit_span]
 * Purpose  : Module update.cpp procedure @ 0x0e4fa8
 * Callers  : 0 -> 
 * Callees  : 2 -> ceiling_fn_07df48, light_process_map_subtile_0b2398
 ******************************************************************************/
void update_fn_0e4fa8(void)

{
  int arg_eax;
  int val;
  uint uval;
  
  *(byte *)(arg_eax + 0x25) = *(byte *)(arg_eax + 0x25) & 0xfc;
  val = ceiling_fn_07df48();
  if (val != 0) {
    uval = light_process_map_subtile_0b2398();
    if (uval == 0x27) {
      *(byte *)(arg_eax + 0x25) = *(byte *)(arg_eax + 0x25) | 1;
      return;
    }
    if ((uval & 0xfffffffe) == 0x28) {
      *(byte *)(arg_eax + 0x25) = *(byte *)(arg_eax + 0x25) | 2;
    }
  }
  return;
}

/******************************************************************************
 * Function : update_update_player_view_state_0e4ffc (Original VA: 0xe4ffc, Ghidra: FUN_000e4ffc)
 * Prototype: void update_update_player_view_state_0e4ffc(void);
 * Address  : 0xe4ffc (Size: 37 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 3472
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> instance_fn_049f4e
 ******************************************************************************/
void update_update_player_view_state_0e4ffc(void)

{
  byte *byte_ptr;
  byte *extraout_EDX;
  int val;
  
  byte_ptr = &g_players;
  val = 0;
  do {
    if ((*byte_ptr & 1) != 0) {
      instance_fn_049f4e();
      byte_ptr = extraout_EDX;
    }
    val = val + 1;
    byte_ptr = byte_ptr + 0x4ef;
  } while (val < 5);
  return;
}

/******************************************************************************
 * Function : update_oh_fuck_illegal_bastard_0e5564 (Original VA: 0xe5564, Ghidra: FUN_000e5564)
 * Prototype: void update_oh_fuck_illegal_bastard_0e5564(void);
 * Address  : 0xe5564 (Size: 145 bytes)
 * Module   : update.cpp [direct_file_string_xref]
 * OrigLine : update.cpp lines 3692
 * Purpose  : String 'Oh fuck, illegal bastard in room list'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void update_oh_fuck_illegal_bastard_0e5564(void)

{
  uint thing_ptr;
  uint extraout_ECX;
  byte *room_ptr;
  
  room_ptr = &g_rooms;
  do {
    if (((*room_ptr & 1) != 0) &&
       (thing_ptr = (&g_thing_ptrs)[*(ushort *)(room_ptr + 0x3d)], g_thing_ptrs < thing_ptr)) {
      do {
        if (*(short *)(thing_ptr + 0x1b) == 0) { /* thing->index_or_angle */
          LbErrorLog(); /* LbErrorLog(NULL, line 3692, g_log_buf) */
          thing_ptr = extraout_ECX;
        }
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa)]; /* thing->ccontrol_idx */
      } while (g_thing_ptrs < thing_ptr);
    }
    room_ptr = room_ptr + 0x45;
  } while (room_ptr <= &g_bss_002e0544);
  return;
}

