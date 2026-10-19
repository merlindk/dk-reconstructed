/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: routes.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 22
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : routes_fn_0d13f0 (Original VA: 0xd13f0, Ghidra: FUN_000d13f0)
 * Prototype: undefined4 routes_fn_0d13f0(void);
 * Address  : 0xd13f0 (Size: 6 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Module routes.cpp procedure @ 0x0d13f0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 routes_fn_0d13f0(void)

{
  return 1;
}

/******************************************************************************
 * Function : routes_fn_0d1420 (Original VA: 0xd1420, Ghidra: FUN_000d1420)
 * Prototype: void routes_fn_0d1420(void);
 * Address  : 0xd1420 (Size: 35 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Module routes.cpp procedure @ 0x0d1420
 * Callers  : 1 -> bflib_system_io_process_map_subtile_0e6584
 * Callees  : 1 -> navigate_nav_log_0c206c
 ******************************************************************************/
void routes_fn_0d1420(void)

{
  navigate_nav_log_0c206c();
  return;
}

/******************************************************************************
 * Function : routes_fn_0d1444 (Original VA: 0xd1444, Ghidra: FUN_000d1444)
 * Prototype: void routes_fn_0d1444(void);
 * Address  : 0xd1444 (Size: 258 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Module routes.cpp procedure @ 0x0d1444
 * Callers  : 1 -> move_update_creature_control_0b3c00
 * Callees  : 4 -> ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, move_find_valid_position_place_0b516c, navigate_nav_creature_radius_set_0c2bc0
 ******************************************************************************/
void routes_fn_0d1444(void)

{
  ushort uval;
  ushort uval_2;
  undefined2 uval_3;
  int arg_eax;
  int val;
  char arg_cl;
  ushort *arg_edx;
  undefined2 *arg_ebx;
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  uint local_10;
  
  if (((&g_bss_002e9125)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\0') ||
     ((*(byte *)(arg_eax + 0x25) & 0x20) != 0)) {
    g_bss_003d9528 = 1;
  }
  else {
    g_bss_003d9528 = 0;
  }
  if (arg_cl == '\0') {
    g_bss_003d9524 = *(int *)(arg_eax + 3) >> 0x18;
    uval = arg_edx[1];
    uval_2 = *arg_edx;
  }
  else {
    uval = arg_edx[1];
    uval_2 = *(ushort *)(arg_eax + 0xd);
    g_bss_003d9524 = -1;
  }
  local_10 = (uint)uval_2;
  navigate_nav_creature_radius_set_0c2bc0(uval,local_18,local_14);
  *arg_ebx = local_18[0];
  arg_ebx[1] = local_14[0];
  uval_3 = move_process_map_subtile_0b28e8();
  arg_ebx[2] = uval_3;
  val = ceiling_process_map_subtile_07dbc0();
  if (val != 0) {
    move_find_valid_position_place_0b516c();
  }
  g_bss_003d9528 = 0;
  return;
}

/******************************************************************************
 * Function : routes_fn_0d1548 (Original VA: 0xd1548, Ghidra: FUN_000d1548)
 * Prototype: int routes_fn_0d1548(void);
 * Address  : 0xd1548 (Size: 308 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Module routes.cpp procedure @ 0x0d1548
 * Callers  : 1 -> combchk_fn_01612a
 * Callees  : 2 -> navigate_path_init8_0c241c, get_2d_box_distance
 ******************************************************************************/
int routes_fn_0d1548(void)

{
  undefined2 *word_ptr;
  undefined2 *word_ptr_2;
  ushort uval;
  int arg_eax;
  int val;
  int extraout_ECX;
  short *arg_edx;
  char arg_bl;
  int val_2;
  int val_3;
  byte flag;
  undefined4 uval_2;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 auStack_24 [2];
  int local_20;
  undefined4 local_14;
  
  flag = 0;
  val_3 = 0;
  local_14 = 0;
  if ((*(short *)(arg_eax + 0xd) == *arg_edx) && (*(short *)(arg_eax + 0xf) == arg_edx[1])) {
    local_20 = 0;
  }
  else {
    if (((&g_bss_002e9125)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\0') ||
       ((*(byte *)(arg_eax + 0x25) & 0x20) != 0)) {
      g_bss_003d9528 = 1;
    }
    else {
      g_bss_003d9528 = 0;
    }
    if (arg_bl == '\0') {
      g_bss_003d9524 = *(int *)(arg_eax + 3) >> 0x18;
      uval = *(ushort *)(arg_eax + 0x56);
    }
    else {
      uval = *(ushort *)(arg_eax + 0x56);
      g_bss_003d9524 = -1;
    }
    local_28 = (uint)(byte)((&g_data_00190d3d)[uval] - 1);
    uStack_2c = 0xfffffffe;
    navigate_path_init8_0c241c(arg_edx[1]);
    g_bss_003d9528 = 0;
    if (g_bss_003d8d20 == 0) {
      return 0x7fffffff;
    }
    uval_2 = *(undefined4 *)(arg_eax + 0xd);
    *(undefined2 *)(&uStack_2c + (uint)flag * -2) =
         *(undefined2 *)(arg_eax + 0x11 + (uint)flag * -8);
    if (0 < g_bss_003d8d20) {
      val_2 = 0;
      do {
        word_ptr = (undefined2 *)((int)&g_bss_003d8d24 + val_2);
        word_ptr_2 = (undefined2 *)((int)&g_bss_003d8d28 + val_2);
        val_2 = val_2 + 8;
        local_28 = CONCAT22(*word_ptr_2,*word_ptr);
        val_3 = val_3 + 1;
        val = get_2d_box_distance(uval_2);
        *(undefined2 *)(&uStack_2c + (uint)flag * -2) = auStack_24[(uint)flag * -4];
        local_20 = extraout_ECX + val;
        uval_2 = local_28;
      } while (val_3 < g_bss_003d8d20);
    }
  }
  return local_20;
}

/******************************************************************************
 * Function : routes_fn_0d167c (Original VA: 0xd167c, Ghidra: FUN_000d167c)
 * Prototype: undefined4 routes_fn_0d167c(void);
 * Address  : 0xd167c (Size: 300 bytes)
 * Module   : routes.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module routes.cpp procedure @ 0x0d167c
 * Callers  : 3 -> build_fn_014a68, door_fn_023042, door_remove_keyhole_0230d3
 * Callees  : 2 -> navigate_nav_log_0bfaec, routes_navigation_door_has_player_0d1904
 ******************************************************************************/
undefined4 routes_fn_0d167c(void)

{
  int val;
  undefined1 uval;
  int arg_eax;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int arg_ebx;
  int val_2;
  int val_3;
  int local_1c;
  int local_18;
  
  if (g_bss_003d952c == 0) {
    val_3 = 0;
    do {
      val_2 = 0;
      do {
        uval = routes_navigation_door_has_player_0d1904();
        val_2 = val_2 + 1;
        (&g_bss_00269202)[extraout_ECX] = uval;
      } while (val_2 < 0xff);
      val_3 = val_3 + 1;
    } while (val_3 < 0xff);
    g_bss_003d952c = 1;
  }
  local_1c = arg_eax;
  if (arg_ebx < arg_eax) {
    local_1c = arg_ebx;
  }
  local_18 = arg_edx;
  if (arg_ecx < arg_edx) {
    local_18 = arg_ecx;
  }
  local_1c = local_1c + -1;
  if (local_1c < 3) {
    local_1c = 2;
  }
  local_18 = local_18 + -1;
  if (local_18 < 3) {
    local_18 = 2;
  }
  val_3 = arg_ebx + 1;
  if (0xfb < val_3) {
    val_3 = 0xfc;
  }
  val_2 = arg_ecx + 1;
  if (0xfb < val_2) {
    val_2 = 0xfc;
  }
  for (; val = local_1c, local_18 <= val_2; local_18 = local_18 + 1) {
    for (; val <= val_3; val = val + 1) {
      uval = routes_navigation_door_has_player_0d1904();
      (&g_bss_00269203)[extraout_ECX_00] = uval;
    }
  }
  navigate_nav_log_0bfaec(val_2);
  return 1;
}

/******************************************************************************
 * Function : routes_fn_0d17a8 (Original VA: 0xd17a8, Ghidra: FUN_000d17a8)
 * Prototype: undefined8 routes_fn_0d17a8(void);
 * Address  : 0xd17a8 (Size: 122 bytes)
 * Module   : routes.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module routes.cpp procedure @ 0x0d17a8
 * Callers  : 2 -> file_update_player_dungeon_02ca74, inits_could_create_ambient_sound_0404f7
 * Callees  : 3 -> navigate_fn_0c01fc, routes_navigation_door_has_player_0d1904, LbScreenWaitVbi
 ******************************************************************************/
undefined8 routes_fn_0d17a8(void)

{
  undefined1 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  undefined4 extraout_EDX;
  int val;
  int val_2;
  
  LbScreenWaitVbi();
  val_2 = 0;
  do {
    val = 0;
    do {
      uval = routes_navigation_door_has_player_0d1904();
      val = val + 1;
      (&g_bss_00269202)[extraout_ECX] = uval;
    } while (val < 0xff);
    val_2 = val_2 + 1;
  } while (val_2 < 0xff);
  g_bss_003d952c = 1;
  navigate_fn_0c01fc();
  PTR_FUN_000b5550_0019212c = routes_fn_0d1a48;
  g_bss_002ebaf7 = 1;
  return CONCAT44(arg_edx,extraout_EDX);
}

/******************************************************************************
 * Function : routes_update_creature_control_0d18d0 (Original VA: 0xd18d0, Ghidra: FUN_000d18d0)
 * Prototype: void routes_update_creature_control_0d18d0(undefined1 param_1);
 * Address  : 0xd18d0 (Size: 52 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> move_update_creature_control_0b4ae4
 * Callees  : 1 -> ariadne_update_creature_control_012002
 ******************************************************************************/
void routes_update_creature_control_0d18d0(undefined1 param_1)

{
  int thing;
  
  if (g_bss_002ebaf7 != '\0') {
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23a) = 1; /* thing->ccontrol_idx */
  }
  ariadne_update_creature_control_012002(param_1);
  return;
}

/******************************************************************************
 * Function : routes_navigation_door_has_player_0d1904 (Original VA: 0xd1904, Ghidra: FUN_000d1904)
 * Prototype: byte routes_navigation_door_has_player_0d1904(void);
 * Address  : 0xd1904 (Size: 321 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp lines 884
 * Purpose  : String 'Navigation door has player of larger than 6'
 * Callers  : 2 -> routes_fn_0d167c, routes_fn_0d17a8
 * Callees  : 3 -> door_process_map_subtile_022b3a, light_process_map_subtile_0b2398, LbErrorLog
 ******************************************************************************/
byte routes_navigation_door_has_player_0d1904(void)

{
  bool flag;
  int arg_eax;
  int val;
  uint uval;
  int arg_edx;
  byte local_c;
  
  val = (arg_eax + arg_edx * 0x100) * 5;
  if ((*(byte *)((int)&g_map_subtiles + val) & 0x40) == 0) {
    if ((*(byte *)((int)&g_map_subtiles + val) & 0x10) != 0) {
      return 0xf;
    }
    local_c = *(byte *)((int)&g_bss_0019e973 +
                       (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2) >> 4;
    if (0xf < local_c) {
      local_c = 0xf;
    }
    uval = light_process_map_subtile_0b2398();
    if ((uval & 0xfffffffe) != 0x28) {
      val = light_process_map_subtile_0b2398();
      if ((val < 0x126) || (0x12e < val)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (!flag) {
        return local_c;
      }
    }
    return local_c | 0x10;
  }
  val = door_process_map_subtile_022b3a();
  if (val != 0) {
    if (*(char *)(val + 0x18) == '\0') {
      return 1;
    }
    uval = *(int *)(val + 3) >> 0x18;
    if (uval == g_bss_002eb542) {
      uval = 5;
    }
    else if (uval == g_neutral_player_number) {
      uval = 6;
    }
    if ((int)uval < 7) {
      return ((char)uval + '\x01') * ' ' | 1;
    }
  }
  LbErrorLog(); /* LbErrorLog("routes.cpp", line 884, "Navigation cannot find door for flagged position") */
  return 1;
}

/******************************************************************************
 * Function : routes_fn_0d1a48 (Original VA: 0xd1a48, Ghidra: FUN_000d1a48)
 * Prototype: uint routes_fn_0d1a48(void);
 * Address  : 0xd1a48 (Size: 123 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Purpose  : Module routes.cpp procedure @ 0x0d1a48
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint routes_fn_0d1a48(void)

{
  uint arg_eax;
  uint uval;
  uint arg_edx;
  
  if (1 < (int)((arg_edx & 0xf) - (arg_eax & 0xf))) {
    return 0;
  }
  if ((arg_edx & 0xf0) != 0) {
    if (g_bss_003d9524 != 0xffffffff) {
      uval = ((int)arg_edx >> 5 & 7U) - 1;
      if (uval == 5) {
        uval = (uint)g_bss_002eb542;
      }
      else if (uval == 6) {
        uval = (uint)g_neutral_player_number;
      }
      if (uval == g_bss_003d9524) {
        return uval ^ g_bss_003d9524;
      }
    }
    if ((((arg_edx & 0x10) != 0) && ((arg_eax & 0x10) == 0)) && (g_bss_003d9528 == 0)) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : routes_fn_0d1ac4 (Original VA: 0xd1ac4, Ghidra: FUN_000d1ac4)
 * Prototype: void routes_fn_0d1ac4(void);
 * Address  : 0xd1ac4 (Size: 28 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Purpose  : Module routes.cpp procedure @ 0x0d1ac4
 * Callers  : 1 -> move_update_creature_control_0b4c30
 * Callees  : 0 -> 
 ******************************************************************************/
void routes_fn_0d1ac4(void)

{
  undefined1 *arg_eax;
  undefined4 *arg_ebx;
  
  *arg_eax = 1;
  *(undefined4 *)(arg_eax + 0x21) = *arg_ebx;
  *(undefined2 *)(arg_eax + 0x25) = *(undefined2 *)(arg_ebx + 1);
  arg_eax[3] = 0;
  arg_eax[2] = 0;
  arg_eax[4] = 0;
  return;
}

/******************************************************************************
 * Function : routes_ve_been_pushing_very_0d1ae0 (Original VA: 0xd1ae0, Ghidra: FUN_000d1ae0)
 * Prototype: undefined4 routes_ve_been_pushing_very_0d1ae0(void);
 * Address  : 0xd1ae0 (Size: 2463 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp lines 1130, 1219, 1224, 1231, 1235
 * Purpose  : String 'I've been pushing for a very long time now...'
 * Callers  : 0 -> 
 * Callees  : 12 -> anger_fn_010c1a, creature_fn_07e868, move_process_map_subtile_0b28e8, routes_fn_0d2480, routes_update_creature_control_0d2510, routes_illegal_block_direction_lookahead_0d29ac, routes_fn_0d3f64, routes_fn_0d402c ...
 ******************************************************************************/
undefined4 routes_ve_been_pushing_very_0d1ae0(void)

{
  char *str_ptr;
  ushort uval;
  int cctrl_ptr;
  undefined4 *word_ptr;
  char ch;
  undefined2 uval_2;
  short short_val;
  int thing;
  int val;
  undefined4 uval_3;
  int val_2;
  uint uval_4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined4 *arg_edx;
  ushort uval_5;
  byte flag;
  int *int_ptr;
  int *int_ptr_2;
  byte flag_2;
  short asStack_850 [1018];
  int local_5c [2];
  undefined1 local_54 [16];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 *local_3c;
  undefined4 *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  ushort *local_24;
  uint local_20;
  
  flag_2 = 0;
  int_ptr_2 = (int *)local_54;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  str_ptr = (char *)(cctrl_ptr + 0x1ea);
  local_2c = (uint)*(ushort *)(cctrl_ptr + 0xc4);
  local_30 = 0x10;
  local_34 = arg_edx;
  if (*str_ptr != '\x01') {
    if (*str_ptr != '\x02') {
      return 1;
    }
    if ((*(short *)(cctrl_ptr + 0x205) != *(short *)(thing + 0xd)) || /* thing->mappos.val_x */
       (*(short *)(cctrl_ptr + 0x207) != *(short *)(thing + 0xf))) { /* thing->mappos.val_y */
      local_5c[1] = 0xd1f75;
      val = update_fn_0dc440();
      if (val <= *(int *)(cctrl_ptr + 499)) {
        local_5c[1] = 0xd1f8b;
        val = creature_fn_07e868();
        if (val == 0) {
          return 1;
        }
      }
      *str_ptr = '\x01';
      *(undefined4 *)(cctrl_ptr + 0x20b) = *local_34;
      *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
           *(undefined2 *)(local_34 + (uint)flag_2 * -2 + 1);
      *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
      *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
      *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
      return 1;
    }
    local_5c[1] = 0xd1fc6;
    val = update_fn_0dc440();
    if (val < *(int *)(cctrl_ptr + 0x1ef)) {
      local_5c[1] = 0;
      int_ptr_2 = local_5c;
      local_5c[0] = 1;
      val = routes_fn_0d402c();
      if (val != 0) {
        *str_ptr = '\x01';
        *(undefined4 *)(cctrl_ptr + 0x20b) = *local_3c;
        *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
             *(undefined2 *)(local_3c + (uint)flag_2 * -2 + 1);
        *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
        return 1;
      }
    }
    if ((uint)*(ushort *)(*(int *)((int)int_ptr_2 + 0x2c) + 0x52) != *(uint *)(cctrl_ptr + 0x1f7)) {
      return 1;
    }
    *(short *)((int)int_ptr_2 + -4) = 0x2033;
    *(short *)((int)int_ptr_2 + -2) = 0xd;
    val_2 = routes_update_creature_control_0d2510();
    val = *(int *)(cctrl_ptr + 0x1f7);
    *(int *)((int)int_ptr_2 + 0x30) = val_2;
    if (val_2 != val) {
      *(short *)((int)int_ptr_2 + 8) =
           (short)((uint)(*(int *)((int)int_ptr_2 + 0x28) * (&g_slab_attr_table)[val]) >> 0x10) +
           *(short *)(*(int *)((int)int_ptr_2 + 0x2c) + 0xd);
      *(short *)((int)int_ptr_2 + 10) =
           (short)((uint)-(*(int *)((int)int_ptr_2 + 0x28) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(cctrl_ptr + 0x1f7)] >> 8) >> 8) +
           *(short *)(*(int *)((int)int_ptr_2 + 0x2c) + 0xf);
      *(short *)((int)int_ptr_2 + -4) = 0x209b;
      *(short *)((int)int_ptr_2 + -2) = 0xd;
      short_val = move_process_map_subtile_0b28e8();
      *(short *)((int)int_ptr_2 + 0xc) = short_val;
      *(short *)((int)int_ptr_2 + -4) = 0x20b1;
      *(short *)((int)int_ptr_2 + -2) = 0xd;
      val = creature_fn_07e868();
      if (val == 4) {
        val = *(int *)((int)int_ptr_2 + 0x2c);
        *(short *)((int)int_ptr_2 + -4) = 0x20cf;
        *(short *)((int)int_ptr_2 + -2) = 0xd;
        uval_4 = routes_fn_0d3f64();
        uval_5 = *(ushort *)(val + 0x56);
        *(uint *)((int)int_ptr_2 + 0x34) = uval_4;
        uval_5 = *(ushort *)(&g_data_0019073b + (uint)uval_5 * 2) / 2;
        *(undefined2 *)int_ptr_2 = *(undefined2 *)(val + 0xd);
        *(short *)((int)int_ptr_2 + 2) = *(short *)(val + 0xf);
        if ((uval_4 & 1) != 0) {
          uval = *(ushort *)(val + 0xd);
          if ((ushort)*(undefined4 *)((int)int_ptr_2 + 8) < uval) {
            *(ushort *)int_ptr_2 = uval - uval_5;
            *(undefined1 *)int_ptr_2 = 1;
            *(ushort *)int_ptr_2 = *(short *)int_ptr_2 + uval_5;
          }
          else {
            *(ushort *)int_ptr_2 = uval + uval_5;
            *(undefined1 *)int_ptr_2 = 0xff;
            *(ushort *)int_ptr_2 = *(short *)int_ptr_2 - uval_5;
          }
          *(short *)((int)int_ptr_2 + -4) = 0x2147;
          *(short *)((int)int_ptr_2 + -2) = 0xd;
          short_val = move_process_map_subtile_0b28e8();
          *(short *)((int)int_ptr_2 + 4) = short_val;
        }
        if ((*(byte *)((int)int_ptr_2 + 0x34) & 2) != 0) {
          uval = *(ushort *)(val + 0xf);
          if (*(ushort *)((int)int_ptr_2 + 10) < uval) {
            *(ushort *)((int)int_ptr_2 + 2) = uval - uval_5;
            *(undefined1 *)((int)int_ptr_2 + 2) = 1;
            *(short *)((int)int_ptr_2 + 2) = *(short *)((int)int_ptr_2 + 2) + uval_5;
          }
          else {
            *(ushort *)((int)int_ptr_2 + 2) = uval + uval_5;
            *(undefined1 *)((int)int_ptr_2 + 2) = 0xff;
            *(short *)((int)int_ptr_2 + 2) = *(short *)((int)int_ptr_2 + 2) - uval_5;
          }
          *(short *)((int)int_ptr_2 + -4) = 0x2193;
          *(short *)((int)int_ptr_2 + -2) = 0xd;
          short_val = move_process_map_subtile_0b28e8();
          *(short *)((int)int_ptr_2 + 4) = short_val;
        }
        if ((*(byte *)((int)int_ptr_2 + 0x34) & 4) != 0) {
          uval = *(ushort *)(val + 0xd);
          if (*(ushort *)((int)int_ptr_2 + 8) < uval) {
            *(ushort *)int_ptr_2 = uval - uval_5;
            *(undefined1 *)int_ptr_2 = 1;
            *(ushort *)int_ptr_2 = *(short *)int_ptr_2 + uval_5;
          }
          else {
            *(ushort *)int_ptr_2 = uval + uval_5;
            *(undefined1 *)int_ptr_2 = 0xff;
            *(ushort *)int_ptr_2 = *(short *)int_ptr_2 - uval_5;
          }
          uval = *(ushort *)(val + 0xf);
          if (*(ushort *)((int)int_ptr_2 + 10) < uval) {
            *(ushort *)((int)int_ptr_2 + 2) = uval - uval_5;
            *(undefined1 *)((int)int_ptr_2 + 2) = 1;
            *(short *)((int)int_ptr_2 + 2) = *(short *)((int)int_ptr_2 + 2) + uval_5;
          }
          else {
            *(ushort *)((int)int_ptr_2 + 2) = uval + uval_5;
            *(undefined1 *)((int)int_ptr_2 + 2) = 0xff;
            *(short *)((int)int_ptr_2 + 2) = *(short *)((int)int_ptr_2 + 2) - uval_5;
          }
          *(short *)((int)int_ptr_2 + -4) = 0x2212;
          *(short *)((int)int_ptr_2 + -2) = 0xd;
          short_val = move_process_map_subtile_0b28e8();
          *(short *)((int)int_ptr_2 + 4) = short_val;
        }
        *(int *)((int)int_ptr_2 + 8) = *int_ptr_2;
        *(short *)((int)int_ptr_2 + ((uint)flag_2 * -4 + 6) * 2) =
             *(short *)((int)int_ptr_2 + ((uint)flag_2 * -4 + 2) * 2);
        if (((short)*(undefined4 *)((int)int_ptr_2 + 8) !=
             *(short *)(*(int *)((int)int_ptr_2 + 0x2c) + 0xd)) ||
           ((short)*(undefined4 *)((int)int_ptr_2 + 10) !=
            *(short *)(*(int *)((int)int_ptr_2 + 0x2c) + 0xf))) {
          *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)((int)int_ptr_2 + 8);
          *(short *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
               *(short *)((int)int_ptr_2 + ((uint)flag_2 * -4 + 6) * 2);
          *(short *)((int)int_ptr_2 + -4) = 0x224d;
          *(short *)((int)int_ptr_2 + -2) = 0xd;
          uval_3 = update_fn_0dc440();
          *(undefined4 *)(cctrl_ptr + 499) = uval_3;
          return 1;
        }
      }
    }
    *(short *)((int)int_ptr_2 + -4) = 0x2269;
    *(short *)((int)int_ptr_2 + -2) = 0xd;
    ch = routes_fn_0d2480();
    if (ch != '\0') {
      word_ptr = *(undefined4 **)((int)int_ptr_2 + 0x20);
      *str_ptr = '\x01';
      *(undefined4 *)(cctrl_ptr + 0x20b) = *word_ptr;
      *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
           *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1);
      *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
      *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
      *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
      return 1;
    }
    val = *(int *)((int)int_ptr_2 + 0x30);
    *(int *)(cctrl_ptr + 0x1f7) = val;
    val_2 = *(int *)((int)int_ptr_2 + 0x2c);
    *(short *)(cctrl_ptr + 0x205) =
         (short)((uint)(*(int *)((int)int_ptr_2 + 0x28) * (&g_slab_attr_table)[val]) >> 0x10) +
         *(short *)(val_2 + 0xd);
    *(short *)(cctrl_ptr + 0x207) =
         (short)((uint)-(*(int *)((int)int_ptr_2 + 0x28) *
                         (int)(&PTR_LAB_00192fe0)[*(int *)(cctrl_ptr + 0x1f7)] >> 8) >> 8) +
         *(short *)(val_2 + 0xf);
    uval_3 = *(undefined4 *)((int)int_ptr_2 + 0x28);
    *(short *)((int)int_ptr_2 + -4) = 0x22f6;
    *(short *)((int)int_ptr_2 + -2) = 0xd;
    uval_2 = move_process_map_subtile_0b28e8();
    *(short *)((int)int_ptr_2 + -4) = 0;
    *(short *)((int)int_ptr_2 + -2) = 0;
    *(undefined4 *)((int)int_ptr_2 + -8) = uval_3;
    *(short *)((int)int_ptr_2 + -0xc) = 0x10;
    *(short *)((int)int_ptr_2 + -10) = 0;
    *(undefined2 *)(cctrl_ptr + 0x209) = uval_2;
    *(short *)((int)int_ptr_2 + -0x10) = 0x2312;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    routes_update_creature_control_0d5624();
    *(short *)((int)int_ptr_2 + -0x10) = 0x2326;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    uval_3 = update_fn_0dc440();
    *(undefined4 *)(cctrl_ptr + 499) = uval_3;
    *(short *)((int)int_ptr_2 + -0x10) = 0x2334;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    val = creature_fn_07e868();
    if (val == 1) {
      *(short *)((int)int_ptr_2 + -0x10) = 0x234d;
      *(short *)((int)int_ptr_2 + -0xe) = 0xd;
      LbErrorLog(); /* LbErrorLog("routes.cpp", line 1130, "I've been pushing for a very long time now...") */
      if ((*(byte *)((int)&g_map_subtiles +
                    ((uint)*(byte *)(cctrl_ptr + 0x206) + (uint)*(byte *)(cctrl_ptr + 0x208) * 0x100) * 5) &
          0x40) != 0) {
        *(short *)((int)int_ptr_2 + -0x10) = 0x2382;
        *(short *)((int)int_ptr_2 + -0xe) = 0xd;
        LbErrorLog(); /* LbErrorLog("routes.cpp", line 1219, "A legal collision with a solid object? Come on...") */
      }
      *(short *)((int)int_ptr_2 + -0x10) = 0x2387;
      *(short *)((int)int_ptr_2 + -0xe) = 0xd;
      LbWarnLog(); /* LbErrorLog("routes.cpp", line 1224, "And it has something to do with doors") */
    }
    *(short *)((int)int_ptr_2 + -0x10) = 0x2399;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    val = creature_fn_07e868();
    if (val == 0) {
      return 1;
    }
    *(short *)((int)int_ptr_2 + -0x10) = 0x23b5;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    LbErrorLog(); /* LbWarnLog("routes.cpp", line 1224, "And it has something to do with doors") */
    *(short *)((int)int_ptr_2 + -0x10) = 0x23ba;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    LbWarnLog(); /* LbErrorLog("routes.cpp", line 1231, "I've been given a shite position") */
    val = *(int *)(cctrl_ptr + 0x1f7);
    *(short *)((int)int_ptr_2 + 4) =
         (short)((uint)(*(int *)((int)int_ptr_2 + 0x1c) * (&g_slab_attr_table)[val]) >> 0x10) +
         *(short *)(*(int *)((int)int_ptr_2 + 0x20) + 0xd);
    *(short *)((int)int_ptr_2 + 6) =
         (short)((uint)-(*(int *)((int)int_ptr_2 + 0x1c) * (int)(&PTR_LAB_00192fe0)[val] >> 8) >> 8)
         + *(short *)(*(int *)((int)int_ptr_2 + 0x20) + 0xf);
    *(short *)((int)int_ptr_2 + -0x10) = 0x2413;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    short_val = move_process_map_subtile_0b28e8();
    *(short *)((int)int_ptr_2 + 8) = short_val;
    *(short *)((int)int_ptr_2 + -0x10) = 0x2429;
    *(short *)((int)int_ptr_2 + -0xe) = 0xd;
    val = creature_fn_07e868();
    if (val == 4) {
      *(short *)((int)int_ptr_2 + -0x10) = 0x244a;
      *(short *)((int)int_ptr_2 + -0xe) = 0xd;
      LbErrorLog(); /* LbWarnLog("routes.cpp", line 1231, "I've been given a shite position") */
    }
    word_ptr = *(undefined4 **)((int)int_ptr_2 + 0x14);
    *str_ptr = '\x01';
    *(undefined4 *)(cctrl_ptr + 0x20b) = *word_ptr;
    *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
         *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1);
    *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
    *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
    *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
    val = *(int *)((int)int_ptr_2 + 0x20);
    *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)(val + 0xd);
    *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
         *(undefined2 *)(val + 0x11 + (uint)flag_2 * -8);
    return 1;
  }
  local_5c[1] = 0xd1b3f;
  local_28 = thing;
  val = update_fn_0dc440();
  if (*(int *)(cctrl_ptr + 499) <= val) {
    *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
  }
  int_ptr = (int *)local_54;
  if (*(char *)(cctrl_ptr + 0x1ee) != '\0') goto LAB_000d1e11;
  local_5c[1] = 0xd1b64;
  val = anger_fn_010c1a();
  *(short *)(cctrl_ptr + 0x205) =
       *(short *)(local_28 + 0xd) + (short)((&g_slab_attr_table)[val] * local_2c >> 0x10);
  *(short *)(cctrl_ptr + 0x207) =
       (short)((uint)-((int)(local_2c * (int)(&PTR_LAB_00192fe0)[val]) >> 8) >> 8) +
       *(short *)(local_28 + 0xf);
  local_5c[1] = 0xd1bb9;
  uval_2 = move_process_map_subtile_0b28e8();
  *(undefined2 *)(cctrl_ptr + 0x209) = uval_2;
  *(undefined4 *)(cctrl_ptr + 0x1f7) = extraout_ECX;
  local_5c[1] = 0xd1bcb;
  update_fn_0dc440();
  local_5c[1] = 0xd1bd6;
  val = update_fn_0dc440();
  if (extraout_ECX_00 < val) {
    *(undefined4 *)(cctrl_ptr + 0x205) = *local_34;
    *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
         *(undefined2 *)(local_34 + (uint)flag_2 * -2 + 1);
  }
  local_5c[1] = 0xd1bf8;
  val = creature_fn_07e868();
  int_ptr = (int *)local_54;
  if (val == 0) goto LAB_000d1e11;
  local_5c[1] = 0;
  int_ptr = local_5c;
  local_5c[0] = local_30;
  ch = routes_illegal_block_direction_lookahead_0d29ac();
  val = local_30;
  if (ch == '\0') {
    *str_ptr = '\x01';
    *(undefined4 *)(cctrl_ptr + 0x20b) = *local_3c;
    *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
         *(undefined2 *)(local_3c + (uint)flag_2 * -2 + 1);
    *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
    *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
    *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
    goto LAB_000d1e11;
  }
  local_20 = routes_fn_0d3f64();
  uval_5 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(val + 0x56) * 2) / 2;
  local_24 = (ushort *)(cctrl_ptr + 0x205);
  local_44 = *(undefined4 *)(val + 0xd);
  if ((local_20 & 1) != 0) {
    uval = *(ushort *)(val + 0xd);
    local_44._2_2_ = (short)((uint)*(undefined4 *)(val + 0xd) >> 0x10);
    uval_2 = local_44._2_2_;
    if (*(ushort *)(cctrl_ptr + 0x205) < uval) {
      local_44 = CONCAT22(local_44._2_2_,uval - uval_5);
      local_44 = CONCAT31(local_44._1_3_,1);
      local_44._0_2_ = (short)local_44 + uval_5;
    }
    else {
      local_44 = CONCAT22(local_44._2_2_,uval + uval_5);
      local_44 = CONCAT31(local_44._1_3_,0xff);
      local_44._0_2_ = (short)local_44 - uval_5;
    }
    local_44 = CONCAT22(uval_2,(short)local_44);
    local_40[0] = move_process_map_subtile_0b28e8();
  }
  if ((local_20 & 2) != 0) {
    uval = *(ushort *)(val + 0xf);
    if (local_24[1] < uval) {
      local_44._3_1_ = (undefined1)((ushort)(uval - uval_5) >> 8);
      local_44._0_3_ = CONCAT12(1,(short)local_44);
      local_44._2_2_ = local_44._2_2_ + uval_5;
    }
    else {
      local_44._3_1_ = (undefined1)((ushort)(uval + uval_5) >> 8);
      local_44._0_3_ = CONCAT12(0xff,(short)local_44);
      local_44._2_2_ = local_44._2_2_ - uval_5;
    }
    local_40[0] = move_process_map_subtile_0b28e8();
  }
  if ((local_20 & 4) != 0) {
    uval = *(ushort *)(val + 0xd);
    if (*local_24 < uval) {
      local_44._1_3_ = (uint3)(byte)((ushort)(uval - uval_5) >> 8);
      local_44 = CONCAT31(local_44._1_3_,1);
      local_44._0_2_ = (short)local_44 + uval_5;
    }
    else {
      local_44._1_3_ = (uint3)(byte)((ushort)(uval + uval_5) >> 8);
      local_44 = CONCAT31(local_44._1_3_,0xff);
      local_44._0_2_ = (short)local_44 - uval_5;
    }
    uval = *(ushort *)(val + 0xf);
    if (local_24[1] < uval) {
      local_44._3_1_ = (undefined1)((ushort)(uval - uval_5) >> 8);
      local_44._0_3_ = CONCAT12(1,(short)local_44);
      local_44._2_2_ = local_44._2_2_ + uval_5;
    }
    else {
      local_44._3_1_ = (undefined1)((ushort)(uval + uval_5) >> 8);
      local_44._0_3_ = CONCAT12(0xff,(short)local_44);
      local_44._2_2_ = local_44._2_2_ - uval_5;
    }
    local_40[0] = move_process_map_subtile_0b28e8();
  }
  *(undefined4 *)local_24 = local_44;
  local_24[(uint)flag_2 * -4 + 2] = local_40[(uint)flag_2 * -4];
  if (local_20 == 4) {
    val = *(int *)(cctrl_ptr + 0x1f7);
    if ((val == 0) || (val == 0x400)) {
      *(undefined2 *)(cctrl_ptr + 0x207) = *(undefined2 *)(local_30 + 0xf);
    }
    else {
      if ((val != 0x200) && (val != 0x600)) goto LAB_000d1df4;
      *(undefined2 *)(cctrl_ptr + 0x205) = *(undefined2 *)(local_30 + 0xd);
    }
    uval_2 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(cctrl_ptr + 0x209) = uval_2;
  }
LAB_000d1df4:
  *(undefined1 *)(cctrl_ptr + 0x1ee) = 1;
  int_ptr = local_5c;
LAB_000d1e11:
  if (*(char *)(cctrl_ptr + 0x1ee) != '\0') {
    flag = *(char *)(cctrl_ptr + 0x1ee) + 1;
    *(byte *)(cctrl_ptr + 0x1ee) = flag;
    if (0x20 < flag) {
      *(undefined4 *)((int)int_ptr + -4) = 0xd1e40;
      LbErrorLog(); /* LbErrorLog("routes.cpp", line 1235, "It's even more shit than I first thought") */
    }
    if ((*(short *)(cctrl_ptr + 0x205) == *(short *)(*(int *)((int)int_ptr + 0x2c) + 0xd)) &&
       (*(short *)(cctrl_ptr + 0x207) == *(short *)(*(int *)((int)int_ptr + 0x2c) + 0xf))) {
      *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
      *str_ptr = '\x02';
      val = *(int *)((int)int_ptr + 0x2c);
      *(short *)(cctrl_ptr + 0x205) =
           *(short *)(val + 0xd) +
           (short)((uint)(*(int *)((int)int_ptr + 0x28) * (&g_slab_attr_table)[*(int *)(cctrl_ptr + 0x1f7)])
                  >> 0x10);
      uval_3 = *(undefined4 *)((int)int_ptr + 0x28);
      *(short *)(cctrl_ptr + 0x207) =
           (short)((uint)-(*(int *)((int)int_ptr + 0x28) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(cctrl_ptr + 0x1f7)] >> 8) >> 8) +
           *(short *)(val + 0xf);
      *(undefined4 *)((int)int_ptr + -4) = 0xd1ec7;
      uval_2 = move_process_map_subtile_0b28e8();
      *(undefined4 *)((int)int_ptr + -4) = 0;
      *(undefined2 *)(cctrl_ptr + 0x209) = uval_2;
      *(undefined4 *)((int)int_ptr + -8) = uval_3;
      *(undefined4 *)((int)int_ptr + -0xc) = *(undefined4 *)((int)int_ptr + 0x24);
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd1ee4;
      routes_update_creature_control_0d5624();
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd1ef8;
      uval_3 = update_fn_0dc440();
      *(undefined4 *)(cctrl_ptr + 499) = uval_3;
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd1f06;
      val = creature_fn_07e868();
      if (val != 0) {
        val = *(int *)((int)int_ptr + 0x20);
        *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)(val + 0xd);
        *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
             *(undefined2 *)(val + 0x11 + (uint)flag_2 * -8);
        *(undefined4 *)(cctrl_ptr + 499) = 0;
      }
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd1f2e;
      uval_3 = update_fn_0dc440();
      *(undefined4 *)(cctrl_ptr + 0x1ef) = uval_3;
      return 1;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : routes_fn_0d2480 (Original VA: 0xd2480, Ghidra: FUN_000d2480)
 * Prototype: bool routes_fn_0d2480(void);
 * Address  : 0xd2480 (Size: 142 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Purpose  : Module routes.cpp procedure @ 0x0d2480
 * Callers  : 2 -> routes_ve_been_pushing_very_0d1ae0, routes_ve_been_pushing_very_0d4188
 * Callees  : 0 -> 
 ******************************************************************************/
bool routes_fn_0d2480(void)

{
  uint uval;
  int arg_eax;
  int arg_edx;
  uint uval_2;
  
  uval = *(uint *)(arg_eax + 0xd);
  if ((arg_edx + 0x200U & 0x7ff) == uval) {
    if (*(char *)(arg_eax + 3) == '\x01') {
      *(char *)(arg_eax + 2) = *(char *)(arg_eax + 2) + '\x01';
    }
    else {
      *(undefined1 *)(arg_eax + 3) = 1;
      *(undefined1 *)(arg_eax + 2) = 1;
    }
  }
  else {
    uval_2 = arg_edx - 0x200U & 0x7ff;
    if (uval_2 == uval) {
      if (CONCAT31((uint3)(uval_2 >> 8) ^ (uint3)(uval >> 8),*(undefined1 *)(arg_eax + 3)) == 2) {
        *(char *)(arg_eax + 2) = *(char *)(arg_eax + 2) + '\x01';
        return 3 < *(byte *)(arg_eax + 2);
      }
      *(undefined1 *)(arg_eax + 3) = 2;
      *(undefined1 *)(arg_eax + 2) = 1;
      return 3 < *(byte *)(arg_eax + 2);
    }
    *(undefined1 *)(arg_eax + 2) = 0;
    *(undefined1 *)(arg_eax + 3) = 0;
  }
  return 3 < *(byte *)(arg_eax + 2);
}

/******************************************************************************
 * Function : routes_update_creature_control_0d2510 (Original VA: 0xd2510, Ghidra: FUN_000d2510)
 * Prototype: int routes_update_creature_control_0d2510(void);
 * Address  : 0xd2510 (Size: 1177 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> routes_ve_been_pushing_very_0d1ae0, routes_illegal_block_direction_lookahead_0d29ac, routes_ve_been_pushing_very_0d4188
 * Callees  : 3 -> anger_fn_010d93, creature_fn_07e868, move_process_map_subtile_0b28e8
 ******************************************************************************/
int routes_update_creature_control_0d2510(void)

{
  undefined2 uval;
  int thing;
  int val;
  int val_2;
  uint uval_2;
  short short_val;
  int arg_ebx;
  
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1eb) == '\x01') { /* thing->ccontrol_idx */
    val = anger_fn_010d93();
    move_process_map_subtile_0b28e8();
    val_2 = creature_fn_07e868();
    if (val_2 != 4) {
      return (val - 1U & 3) * 0x200;
    }
    uval_2 = anger_fn_010d93();
    move_process_map_subtile_0b28e8();
    val = creature_fn_07e868();
    if (val != 4) {
      return (uval_2 & 3) * 0x200;
    }
    val = anger_fn_010d93();
    uval_2 = val + 1U & 3;
    short_val = (short)((uint)((&g_slab_attr_table)[uval_2 * 0x200] * arg_ebx) >> 0x10) +
            *(short *)(thing + 0xd); /* thing->mappos.val_x */
    uval = move_process_map_subtile_0b28e8(short_val);
    val = creature_fn_07e868(short_val,uval);
    if (val != 4) {
      return uval_2 * 0x200;
    }
    val = anger_fn_010d93();
    uval_2 = val + 2U & 3;
    move_process_map_subtile_0b28e8(short_val,uval,
                 (short)((uint)((&g_slab_attr_table)[uval_2 * 0x200] * arg_ebx) >> 0x10) +
                 *(short *)(thing + 0xd)); /* thing->mappos.val_x */
    val = creature_fn_07e868();
    if (val != 4) {
      return uval_2 * 0x200;
    }
  }
  else if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1eb) == '\x02') { /* thing->ccontrol_idx */
    val = anger_fn_010d93();
    move_process_map_subtile_0b28e8();
    val_2 = creature_fn_07e868();
    if (val_2 != 4) {
      return (val + 1U & 3) * 0x200;
    }
    uval_2 = anger_fn_010d93();
    move_process_map_subtile_0b28e8();
    val = creature_fn_07e868();
    if (val != 4) {
      return (uval_2 & 3) * 0x200;
    }
    val = anger_fn_010d93();
    move_process_map_subtile_0b28e8();
    val_2 = creature_fn_07e868();
    if (val_2 != 4) {
      return (val - 1U & 3) * 0x200;
    }
    val = anger_fn_010d93();
    move_process_map_subtile_0b28e8();
    val_2 = creature_fn_07e868();
    if (val_2 != 4) {
      return (val + 2U & 3) * 0x200;
    }
  }
  return -1;
}

/******************************************************************************
 * Function : routes_illegal_block_direction_lookahead_0d29ac (Original VA: 0xd29ac, Ghidra: FUN_000d29ac)
 * Prototype: undefined1 routes_illegal_block_direction_lookahead_0d29ac(void);
 * Address  : 0xd29ac (Size: 5435 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp lines 1416
 * Purpose  : String 'Illegal block direction for lookahead'
 * Callers  : 2 -> routes_ve_been_pushing_very_0d1ae0, routes_ve_been_pushing_very_0d4188
 * Callees  : 10 -> creature_fn_07e868, move_process_map_subtile_0b28e8, routes_update_creature_control_0d2510, routes_fn_0d3f64, routes_fn_0d402c, routes_update_creature_control_0d5624, get_2d_squared_distance, update_fn_0dc440 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d310c) */
/* WARNING: Removing unreachable block (ram,0x000d3a52) */

undefined1 routes_illegal_block_direction_lookahead_0d29ac(void)

{
  undefined1 uval;
  ushort uval_2;
  short short_val;
  undefined4 uval_3;
  ushort *word_ptr;
  bool flag;
  bool flag_2;
  undefined2 uval_4;
  int thing;
  uint uval_5;
  uint uval_6;
  undefined4 uval_7;
  int thing_ptr;
  int val;
  int loop_i;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int loop_i_2;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  undefined4 extraout_ECX_06;
  ushort *arg_edx;
  uint uval_8;
  uint uval_9;
  uint uval_10;
  undefined1 *word_ptr_2;
  ushort uval_11;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  undefined4 *word_ptr_5;
  byte flag_3;
  undefined1 auStack_17c [48];
  undefined4 local_14c [12];
  undefined4 local_11c;
  ushort local_118 [14];
  undefined4 local_fc;
  undefined2 local_f8 [14];
  uint local_dc;
  undefined4 local_d8;
  ushort *local_d0;
  uint local_cc;
  uint local_3c;
  undefined1 local_10;
  
  flag_3 = 0;
  word_ptr_3 = (undefined4 *)auStack_17c;
  thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_dc = (uint)*(ushort *)(thing_ptr + 0xc4);
  local_d8 = 0xff;
  uval_8 = (uint)*(ushort *)(thing + 0xf); /* thing->mappos.val_y */
  flag = uval_8 == arg_edx[1] || (int)(uval_8 - arg_edx[1]) < 0;
  uval_5 = (uint)*(ushort *)(thing + 0xd); /* thing->mappos.val_x */
  flag_2 = uval_5 == *arg_edx || (int)(uval_5 - *arg_edx) < 0;
  uval_11 = *(ushort *)(thing_ptr + 0x20d);
  uval_5 = uval_5 - *(ushort *)(thing_ptr + 0x20b);
  uval_9 = (uint)*(ushort *)(thing + 0xf) - (uint)*(ushort *)(thing_ptr + 0x20d); /* thing->mappos.val_y */
  uval_10 = (int)uval_9 >> 0x1f;
  uval_6 = routes_fn_0d3f64();
  if ((uval_6 & 1) == 0) {
    if ((uval_6 & 2) == 0) {
      if ((uval_6 & 4) == 0) {
        LbErrorLog(); /* LbErrorLog("routes.cpp", line 1416, "Illegal block direction for lookahead") */
        LbWarnLog(); /* LbWarnLog("routes.cpp", line 1416, "Illegal block direction for lookahead") */
        return 0;
      }
      loop_i = (uint)flag * 0xc + (uint)flag_2 * 6;
      loop_i_2 = (uint)((int)((uval_5 ^ (int)uval_5 >> 0x1f) - ((int)uval_5 >> 0x1f)) <
                     (int)((uval_9 ^ uval_10) - uval_10)) * 3;
      local_3c = (uint)*(ushort *)(&g_data_0018e91b + loop_i_2 + loop_i);
      local_10 = (&g_data_0018e91d)[loop_i_2 + loop_i];
    }
    else {
      loop_i = (uint)flag * 6;
      loop_i_2 = (uint)((int)uval_5 < 1) * 3;
      local_3c = (uint)*(ushort *)(&g_data_0018e90f + loop_i_2 + loop_i);
      local_10 = (&g_data_0018e911)[loop_i_2 + loop_i];
    }
  }
  else {
    loop_i = (uint)flag_2 * 6;
    loop_i_2 = (uint)((int)(uval_8 - uval_11) < 1) * 3;
    local_3c = (uint)*(ushort *)(&g_data_0018e903 + loop_i_2 + loop_i);
    local_10 = (&g_data_0018e905)[loop_i_2 + loop_i];
  }
  local_fc = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
  local_d0 = arg_edx;
  local_f8[(uint)flag_3 * -4] = *(undefined2 *)(thing + 0x11 + (uint)flag_3 * -8);
  word_ptr_4 = (undefined4 *)(thing_ptr + 0x1ea);
  word_ptr_5 = local_14c;
  for (loop_i = 0xb; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_5 = *word_ptr_4;
    word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
    word_ptr_5 = word_ptr_5 + (uint)flag_3 * -2 + 1;
  }
  *(undefined1 *)word_ptr_5 = *(undefined1 *)word_ptr_4;
  *(short *)(thing + 0x52) = (short)local_3c; /* thing->health */
  *(undefined1 *)(thing_ptr + 0x1eb) = local_10;
  uval_7 = get_2d_squared_distance();
  *(undefined4 *)(thing_ptr + 0x1ef) = uval_7;
  uval_5 = routes_fn_0d3f64();
  local_cc = uval_5;
  uval_11 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2) / 2;
  local_11c = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
  if ((uval_5 & 1) != 0) {
    local_11c._2_2_ = (short)((uint)*(undefined4 *)(thing + 0xd) >> 0x10); /* thing->mappos.val_x */
    uval_4 = local_11c._2_2_;
    if (*arg_edx < *(ushort *)(thing + 0xd)) { /* thing->mappos.val_x */
      local_11c = CONCAT22(local_11c._2_2_,*(short *)(thing + 0xd) - uval_11); /* thing->mappos.val_x */
      local_11c = CONCAT31(local_11c._1_3_,1);
      local_11c._0_2_ = (short)local_11c + uval_11;
    }
    else {
      local_11c = CONCAT22(local_11c._2_2_,*(short *)(thing + 0xd) + uval_11); /* thing->mappos.val_x */
      local_11c = CONCAT31(local_11c._1_3_,0xff);
      local_11c._0_2_ = (short)local_11c - uval_11;
    }
    local_11c = CONCAT22(uval_4,(short)local_11c);
    local_118[0] = move_process_map_subtile_0b28e8();
    uval_5 = extraout_ECX;
  }
  if ((uval_5 & 2) != 0) {
    uval_2 = *(ushort *)(thing + 0xf); /* thing->mappos.val_y */
    if (arg_edx[1] < uval_2) {
      local_11c._3_1_ = (undefined1)((ushort)(uval_2 - uval_11) >> 8);
      local_11c._0_3_ = CONCAT12(1,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ + uval_11;
    }
    else {
      local_11c._3_1_ = (undefined1)((ushort)(uval_2 + uval_11) >> 8);
      local_11c._0_3_ = CONCAT12(0xff,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ - uval_11;
    }
    local_118[0] = move_process_map_subtile_0b28e8();
    uval_5 = extraout_ECX_00;
  }
  if ((uval_5 & 4) != 0) {
    uval_2 = *(ushort *)(thing + 0xd); /* thing->mappos.val_x */
    if (*arg_edx < uval_2) {
      local_11c._1_3_ = (uint3)(byte)((ushort)(uval_2 - uval_11) >> 8);
      local_11c = CONCAT31(local_11c._1_3_,1);
      local_11c._0_2_ = (short)local_11c + uval_11;
    }
    else {
      local_11c._1_3_ = (uint3)(byte)((ushort)(uval_2 + uval_11) >> 8);
      local_11c = CONCAT31(local_11c._1_3_,0xff);
      local_11c._0_2_ = (short)local_11c - uval_11;
    }
    uval_2 = *(ushort *)(thing + 0xf); /* thing->mappos.val_y */
    if (arg_edx[1] < uval_2) {
      local_11c._3_1_ = (undefined1)((ushort)(uval_2 - uval_11) >> 8);
      local_11c._0_3_ = CONCAT12(1,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ + uval_11;
    }
    else {
      local_11c._3_1_ = (undefined1)((ushort)(uval_2 + uval_11) >> 8);
      local_11c._0_3_ = CONCAT12(0xff,(short)local_11c);
      local_11c._2_2_ = local_11c._2_2_ - uval_11;
    }
    local_118[0] = move_process_map_subtile_0b28e8();
    uval_5 = extraout_ECX_01;
  }
  *(undefined4 *)arg_edx = local_11c;
  arg_edx[(uint)flag_3 * -4 + 2] = local_118[(uint)flag_3 * -4];
  if (uval_5 == 4) {
    if ((local_3c == 0) || (local_3c == 0x400)) {
      *(ushort *)(thing + 0xd) = *local_d0; /* thing->mappos.val_x */
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(thing + 0x11) = uval_4;
    }
    else if ((local_3c == 0x200) || (local_3c == 0x600)) {
      *(ushort *)(thing + 0xf) = local_d0[1]; /* thing->mappos.val_y */
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(thing + 0x11) = uval_4;
    }
  }
  else {
    *(undefined4 *)(thing + 0xd) = *(undefined4 *)local_d0; /* thing->mappos.val_x */
    *(ushort *)(thing + 0x11 + (uint)flag_3 * -8) = local_d0[(uint)flag_3 * -4 + 2];
  }
  *(uint *)(thing_ptr + 0x1f7) = local_3c;
  do {
    *(undefined1 *)((int)word_ptr_3 + 0x150) = 0;
    *(undefined4 *)((int)word_ptr_3 + -4) = 0xd3003;
    thing_ptr = get_2d_squared_distance();
    word_ptr_2 = (undefined1 *)word_ptr_3;
    if (thing_ptr < *(int *)(*(int *)((int)word_ptr_3 + 0x130) + 5)) {
      *(uint *)((int)word_ptr_3 + -4) = (uint)*(byte *)((int)word_ptr_3 + 0x168);
      word_ptr_2 = (undefined1 *)((int)word_ptr_3 + -8);
      *(undefined4 *)((int)word_ptr_3 + -8) = *(undefined4 *)((int)word_ptr_3 + 0xf4);
      *(undefined4 *)((int)word_ptr_3 + -0xc) = 0xd303d;
      thing_ptr = routes_fn_0d402c();
      if (thing_ptr != 0) {
        *(undefined4 *)((int)word_ptr_3 + -0xc) = 0xd3054;
        thing_ptr = get_2d_squared_distance();
        *(int *)((int)word_ptr_3 + 0x100) = thing_ptr;
        *(int *)((int)word_ptr_3 + 0x100) = -thing_ptr;
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + -8);
        break;
      }
    }
    if (*(int *)(word_ptr_2 + 0xbc) == 0) {
      short_val = *(short *)(thing + 0x52); /* thing->health */
      if (*(char *)(*(int *)(word_ptr_2 + 0x130) + 1) == '\x01') {
        *(char *)(thing + 0x53) = *(char *)(thing + 0x53) + '\x02';
        if (0x7ff < *(ushort *)(thing + 0x52)) { /* thing->health */
          *(ushort *)(thing + 0x52) = *(ushort *)(thing + 0x52) - 0x800; /* thing->health */
        }
      }
      else {
        *(short *)(thing + 0x52) = short_val + -0x200; /* thing->health */
      }
      *(undefined4 *)(word_ptr_2 + -4) = 0xd312e;
      uval_7 = routes_update_creature_control_0d2510();
      *(undefined4 *)(word_ptr_2 + 0xdc) = uval_7;
      *(short *)(thing + 0x52) = short_val; /* thing->health */
    }
    else {
      *(undefined4 *)(word_ptr_2 + -4) = 0xd30b0;
      uval_7 = routes_update_creature_control_0d2510();
      *(undefined4 *)(word_ptr_2 + 0xdc) = uval_7;
    }
    if ((*(int *)(word_ptr_2 + 0xbc) == 0) ||
       (*(int *)(word_ptr_2 + 0xdc) != *(int *)(*(int *)(word_ptr_2 + 0x130) + 0xd))) {
      *(short *)(word_ptr_2 + 0x98) =
           (short)((uint)(*(int *)(word_ptr_2 + 0x128) *
                         (&g_slab_attr_table)[*(int *)(*(int *)(word_ptr_2 + 0x130) + 0xd)]) >> 0x10) +
           *(short *)(thing + 0xd); /* thing->mappos.val_x */
      *(short *)(word_ptr_2 + 0x9a) =
           *(short *)(thing + 0xf) + /* thing->mappos.val_y */
           (short)((uint)-(*(int *)(word_ptr_2 + 0x128) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(word_ptr_2 + 0x130) + 0xd)] >> 8)
                  >> 8);
      *(undefined4 *)(word_ptr_2 + -4) = 0xd31d9;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(word_ptr_2 + 0x9c) = uval_4;
      *(undefined4 *)(word_ptr_2 + -4) = 0xd31ef;
      thing_ptr = creature_fn_07e868();
      if (thing_ptr == 4) {
        *(undefined4 *)(word_ptr_2 + -4) = 0xd320f;
        uval_5 = routes_fn_0d3f64();
        *(uint *)(word_ptr_2 + 0x110) = uval_5;
        uval_11 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2) / 2;
        *(undefined2 *)(word_ptr_2 + 0x90) = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
        *(undefined2 *)(word_ptr_2 + 0x92) = *(undefined2 *)(thing + 0xf); /* thing->mappos.val_y */
        if ((uval_5 & 1) != 0) {
          uval_2 = *(ushort *)(thing + 0xd); /* thing->mappos.val_x */
          if ((ushort)*(undefined4 *)(word_ptr_2 + 0x98) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x90) = uval_2 - uval_11;
            word_ptr_2[0x90] = 1;
            *(ushort *)(word_ptr_2 + 0x90) = *(short *)(word_ptr_2 + 0x90) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x90) = uval_2 + uval_11;
            word_ptr_2[0x90] = 0xff;
            *(ushort *)(word_ptr_2 + 0x90) = *(short *)(word_ptr_2 + 0x90) - uval_11;
          }
          *(undefined4 *)(word_ptr_2 + -4) = 0xd32b3;
          uval_4 = move_process_map_subtile_0b28e8();
          *(undefined2 *)(word_ptr_2 + 0x94) = uval_4;
        }
        if ((word_ptr_2[0x110] & 2) != 0) {
          uval_2 = *(ushort *)(thing + 0xf); /* thing->mappos.val_y */
          if (*(ushort *)(word_ptr_2 + 0x9a) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x92) = uval_2 - uval_11;
            word_ptr_2[0x92] = 1;
            *(ushort *)(word_ptr_2 + 0x92) = *(short *)(word_ptr_2 + 0x92) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x92) = uval_2 + uval_11;
            word_ptr_2[0x92] = 0xff;
            *(ushort *)(word_ptr_2 + 0x92) = *(short *)(word_ptr_2 + 0x92) - uval_11;
          }
          *(undefined4 *)(word_ptr_2 + -4) = 0xd331b;
          uval_4 = move_process_map_subtile_0b28e8();
          *(undefined2 *)(word_ptr_2 + 0x94) = uval_4;
        }
        if ((word_ptr_2[0x110] & 4) != 0) {
          uval_2 = *(ushort *)(thing + 0xd); /* thing->mappos.val_x */
          if (*(ushort *)(word_ptr_2 + 0x98) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x90) = uval_2 - uval_11;
            word_ptr_2[0x90] = 1;
            *(ushort *)(word_ptr_2 + 0x90) = *(short *)(word_ptr_2 + 0x90) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x90) = uval_2 + uval_11;
            word_ptr_2[0x90] = 0xff;
            *(ushort *)(word_ptr_2 + 0x90) = *(short *)(word_ptr_2 + 0x90) - uval_11;
          }
          uval_2 = *(ushort *)(thing + 0xf); /* thing->mappos.val_y */
          if (*(ushort *)(word_ptr_2 + 0x9a) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x92) = uval_2 - uval_11;
            word_ptr_2[0x92] = 1;
            *(ushort *)(word_ptr_2 + 0x92) = *(short *)(word_ptr_2 + 0x92) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x92) = uval_2 + uval_11;
            word_ptr_2[0x92] = 0xff;
            *(ushort *)(word_ptr_2 + 0x92) = *(short *)(word_ptr_2 + 0x92) - uval_11;
          }
          *(undefined4 *)(word_ptr_2 + -4) = 0xd33ce;
          uval_4 = move_process_map_subtile_0b28e8();
          *(undefined2 *)(word_ptr_2 + 0x94) = uval_4;
        }
        *(undefined4 *)(word_ptr_2 + 0x98) = *(undefined4 *)(word_ptr_2 + 0x90);
        *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x9c) =
             *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x94);
        if (((short)*(undefined4 *)(word_ptr_2 + 0x98) != *(short *)(thing + 0xd)) || /* thing->mappos.val_x */
           ((short)*(undefined4 *)(word_ptr_2 + 0x9a) != *(short *)(thing + 0xf))) { /* thing->mappos.val_y */
          *(undefined4 *)(thing + 0xd) = *(undefined4 *)(word_ptr_2 + 0x98); /* thing->mappos.val_x */
          *(undefined2 *)(thing + 0x11 + (uint)flag_3 * -8) =
               *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x9c);
          *(undefined4 *)(word_ptr_2 + -4) = 0xd341a;
          uval_7 = update_fn_0dc440();
          *(undefined4 *)(*(int *)(word_ptr_2 + 0x130) + 9) = uval_7;
          word_ptr_2[0x150] = 1;
        }
      }
    }
    word_ptr_3 = (undefined4 *)word_ptr_2;
    if (word_ptr_2[0x150] == '\0') {
      thing_ptr = *(int *)(word_ptr_2 + 0x130);
      *(undefined4 *)(thing_ptr + 0xd) = *(undefined4 *)(word_ptr_2 + 0xdc); /* thing->mappos.val_x */
      *(undefined2 *)(thing + 0x52) = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x, thing->health */
      *(short *)(word_ptr_2 + 0x98) =
           (short)((uint)(*(int *)(word_ptr_2 + 0x128) * (&g_slab_attr_table)[*(int *)(thing_ptr + 0xd)]) >> /* thing->mappos.val_x */
                  0x10) + *(short *)(thing + 0xd); /* thing->mappos.val_x */
      *(short *)(word_ptr_2 + 0x9a) =
           *(short *)(thing + 0xf) + /* thing->mappos.val_y */
           (short)((uint)-(*(int *)(word_ptr_2 + 0x128) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(word_ptr_2 + 0x130) + 0xd)] >> 8)
                  >> 8);
      *(undefined4 *)(word_ptr_2 + -4) = 0xd34c2;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(word_ptr_2 + 0x9c) = uval_4;
      *(uint *)(word_ptr_2 + -4) = (uint)(byte)word_ptr_2[0x168];
      *(undefined4 *)(word_ptr_2 + -8) = extraout_ECX_02;
      word_ptr_3 = (undefined4 *)(word_ptr_2 + -0xc);
      *(undefined4 *)(word_ptr_2 + -0xc) = *(undefined4 *)(word_ptr_2 + 0x124);
      *(undefined4 *)(word_ptr_2 + -0x10) = 0xd3504;
      routes_update_creature_control_0d5624();
      *(undefined4 *)(thing + 0xd) = *(undefined4 *)(word_ptr_2 + 0x98); /* thing->mappos.val_x */
      *(undefined2 *)(thing + 0x11 + (uint)flag_3 * -8) =
           *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x9c);
    }
    thing_ptr = *(int *)((int)word_ptr_3 + 0x128);
    loop_i = *(int *)((int)word_ptr_3 + 0xd0);
    *(undefined4 *)((int)word_ptr_3 + -4) = 0xd352d;
    loop_i_2 = get_2d_squared_distance();
    *(int *)((int)word_ptr_3 + 0xd0) = loop_i + thing_ptr;
    if ((loop_i_2 < *(int *)((int)word_ptr_3 + 0x108)) &&
       (*(int *)((int)word_ptr_3 + 0x108) = loop_i_2, loop_i_2 < 0x10000)) {
      *(int *)((int)word_ptr_3 + 0x108) = -loop_i_2;
      break;
    }
    thing_ptr = *(int *)((int)word_ptr_3 + 0xbc);
    *(int *)((int)word_ptr_3 + 0xbc) = thing_ptr + 1;
  } while (thing_ptr + 1 < 100);
  loop_i = word_ptr_3[0x34] * word_ptr_3[0x34];
  thing_ptr = word_ptr_3[0x42];
  if (thing_ptr < 0) {
    word_ptr_3[0x42] = thing_ptr - loop_i;
  }
  else {
    word_ptr_3[0x42] = thing_ptr + loop_i;
  }
  uval_7 = word_ptr_3[0x4f];
  uval_3 = word_ptr_3[0x3c];
  *(undefined4 *)(thing + 0xd) = word_ptr_3[0x20]; /* thing->mappos.val_x */
  *(undefined2 *)(thing + 0x11 + (uint)flag_3 * -8) =
       *(undefined2 *)(word_ptr_3 + (uint)flag_3 * -2 + 0x21);
  word_ptr_3[0x45] = uval_3;
  word_ptr_4 = (undefined4 *)word_ptr_3[0x4c];
  uval_3 = word_ptr_3[0x3b];
  *(short *)(thing + 0x52) = (short)uval_7; /* thing->health */
  uval_7 = word_ptr_3[0x42];
  thing_ptr = word_ptr_3[0x33];
  word_ptr_3[0x31] = uval_3;
  word_ptr_5 = word_ptr_3 + 0xc;
  for (loop_i = 0xb; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_4 = *word_ptr_5;
    word_ptr_5 = word_ptr_5 + (uint)flag_3 * -2 + 1;
    word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
  }
  *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_5;
  word_ptr_3[0x2a] = uval_7;
  word_ptr_3[0x48] = word_ptr_3[0x60];
  word_ptr_3[0x43] = 0x7fffffff;
  word_ptr_3[0x3a] = (uint)*(ushort *)(word_ptr_3 + 0x4d);
  uval_7 = word_ptr_3[0x28];
  word_ptr_3[0x1e] = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
  *(undefined2 *)(word_ptr_3 + (uint)flag_3 * -2 + 0x1f) =
       *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_3 * -8);
  word_ptr_3[0x3f] = uval_7;
  word_ptr_3[0x4b] = word_ptr_3[0x29];
  *(undefined1 *)(word_ptr_3 + 0x59) = *(undefined1 *)(word_ptr_3 + 0x61);
  loop_i = word_ptr_3[0x3c];
  word_ptr_3[0x4e] = CONCAT22((short)((uint)word_ptr_3[0x29] >> 0x10),*(undefined2 *)(thing_ptr + 0x52)); /* thing->health */
  word_ptr_4 = (undefined4 *)word_ptr_3[0x3c];
  word_ptr_5 = word_ptr_3;
  for (loop_i_2 = 0xb; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
    *word_ptr_5 = *word_ptr_4;
    word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
    word_ptr_5 = word_ptr_5 + (uint)flag_3 * -2 + 1;
  }
  *(undefined1 *)word_ptr_5 = *(undefined1 *)word_ptr_4;
  *(short *)(thing_ptr + 0x52) = (short)word_ptr_3[0x3a]; /* thing->health */
  *(undefined1 *)(loop_i + 1) = *(undefined1 *)(word_ptr_3 + 0x53);
  word_ptr_3[-1] = 0xd3695;
  uval_7 = get_2d_squared_distance();
  word_ptr = (ushort *)word_ptr_3[0x3b];
  *(undefined4 *)(word_ptr_3[0x3c] + 5) = uval_7;
  word_ptr_3[0x41] = 0;
  word_ptr_3[-1] = 0xd36bf;
  uval_5 = routes_fn_0d3f64();
  uval_11 = *(ushort *)(thing_ptr + 0x56);
  word_ptr_3[0x2c] = uval_5;
  uval_11 = *(ushort *)(&g_data_0019073b + (uint)uval_11 * 2) / 2;
  *(undefined2 *)(word_ptr_3 + 0x22) = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
  *(undefined2 *)((int)word_ptr_3 + 0x8a) = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
  if ((*(byte *)(word_ptr_3 + 0x2c) & 1) != 0) {
    if (*word_ptr < *(ushort *)(thing_ptr + 0xd)) { /* thing->mappos.val_x */
      *(ushort *)(word_ptr_3 + 0x22) = *(short *)(thing_ptr + 0xd) - uval_11; /* thing->mappos.val_x */
      *(undefined1 *)(word_ptr_3 + 0x22) = 1;
      *(ushort *)(word_ptr_3 + 0x22) = *(short *)(word_ptr_3 + 0x22) + uval_11;
    }
    else {
      *(ushort *)(word_ptr_3 + 0x22) = *(short *)(thing_ptr + 0xd) + uval_11; /* thing->mappos.val_x */
      *(undefined1 *)(word_ptr_3 + 0x22) = 0xff;
      *(ushort *)(word_ptr_3 + 0x22) = *(short *)(word_ptr_3 + 0x22) - uval_11;
    }
    word_ptr_3[-1] = 0xd3761;
    uval_4 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(word_ptr_3 + 0x23) = uval_4;
    uval_5 = extraout_ECX_03;
  }
  if ((uval_5 & 2) != 0) {
    uval_2 = *(ushort *)(thing_ptr + 0xf); /* thing->mappos.val_y */
    if (word_ptr[1] < uval_2) {
      *(ushort *)((int)word_ptr_3 + 0x8a) = uval_2 - uval_11;
      *(undefined1 *)((int)word_ptr_3 + 0x8a) = 1;
      *(short *)((int)word_ptr_3 + 0x8a) = *(short *)((int)word_ptr_3 + 0x8a) + uval_11;
    }
    else {
      *(ushort *)((int)word_ptr_3 + 0x8a) = uval_2 + uval_11;
      *(undefined1 *)((int)word_ptr_3 + 0x8a) = 0xff;
      *(short *)((int)word_ptr_3 + 0x8a) = *(short *)((int)word_ptr_3 + 0x8a) - uval_11;
    }
    word_ptr_3[-1] = 0xd37c4;
    uval_4 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(word_ptr_3 + 0x23) = uval_4;
    uval_5 = extraout_ECX_04;
  }
  if ((uval_5 & 4) != 0) {
    uval_2 = *(ushort *)(thing_ptr + 0xd); /* thing->mappos.val_x */
    if (*word_ptr < uval_2) {
      *(ushort *)(word_ptr_3 + 0x22) = uval_2 - uval_11;
      *(undefined1 *)(word_ptr_3 + 0x22) = 1;
      *(ushort *)(word_ptr_3 + 0x22) = *(short *)(word_ptr_3 + 0x22) + uval_11;
    }
    else {
      *(ushort *)(word_ptr_3 + 0x22) = uval_2 + uval_11;
      *(undefined1 *)(word_ptr_3 + 0x22) = 0xff;
      *(ushort *)(word_ptr_3 + 0x22) = *(short *)(word_ptr_3 + 0x22) - uval_11;
    }
    uval_2 = *(ushort *)(thing_ptr + 0xf); /* thing->mappos.val_y */
    if (word_ptr[1] < uval_2) {
      *(ushort *)((int)word_ptr_3 + 0x8a) = uval_2 - uval_11;
      *(undefined1 *)((int)word_ptr_3 + 0x8a) = 1;
      *(short *)((int)word_ptr_3 + 0x8a) = *(short *)((int)word_ptr_3 + 0x8a) + uval_11;
    }
    else {
      *(ushort *)((int)word_ptr_3 + 0x8a) = uval_2 + uval_11;
      *(undefined1 *)((int)word_ptr_3 + 0x8a) = 0xff;
      *(short *)((int)word_ptr_3 + 0x8a) = *(short *)((int)word_ptr_3 + 0x8a) - uval_11;
    }
    word_ptr_3[-1] = 0xd3872;
    uval_4 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(word_ptr_3 + 0x23) = uval_4;
    uval_5 = extraout_ECX_05;
  }
  *(undefined4 *)word_ptr = word_ptr_3[0x22];
  word_ptr[(uint)flag_3 * -4 + 2] = *(ushort *)(word_ptr_3 + (uint)flag_3 * -2 + 0x23);
  if (uval_5 == 4) {
    loop_i = word_ptr_3[0x3a];
    if ((loop_i == 0) || (loop_i == 0x400)) {
      *(undefined2 *)(thing_ptr + 0xd) = *(undefined2 *)word_ptr_3[0x31]; /* thing->mappos.val_x */
      word_ptr_3[-1] = 0xd38b4;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(thing_ptr + 0x11) = uval_4;
    }
    else if ((loop_i == 0x200) || (loop_i == 0x600)) {
      *(undefined2 *)(thing_ptr + 0xf) = *(undefined2 *)(word_ptr_3[0x31] + 2); /* thing->mappos.val_y */
      word_ptr_3[-1] = 0xd38e3;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(thing_ptr + 0x11) = uval_4;
    }
  }
  else {
    word_ptr_4 = (undefined4 *)word_ptr_3[0x31];
    *(undefined4 *)(thing_ptr + 0xd) = *word_ptr_4; /* thing->mappos.val_x */
    *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_3 * -8) =
         *(undefined2 *)(word_ptr_4 + (uint)flag_3 * -2 + 1);
  }
  loop_i = word_ptr_3[0x45];
  *(undefined4 *)(loop_i + 0xd) = word_ptr_3[0x3a];
  word_ptr_3[0x36] = loop_i + 0x21;
  word_ptr_3[0x47] = thing_ptr + 0xd; /* thing->mappos.val_x */
  word_ptr_3[0x32] = 0;
  word_ptr_3[0x40] = loop_i + 0x1b;
  do {
    *(undefined1 *)((int)word_ptr_3 + 0x148) = 0;
    *(undefined4 *)((int)word_ptr_3 + -4) = 0xd394a;
    loop_i = get_2d_squared_distance();
    word_ptr_2 = (undefined1 *)word_ptr_3;
    if (loop_i < *(int *)(*(int *)((int)word_ptr_3 + 0x114) + 5)) {
      *(uint *)((int)word_ptr_3 + -4) = (uint)*(byte *)((int)word_ptr_3 + 0x164);
      word_ptr_2 = (undefined1 *)((int)word_ptr_3 + -8);
      *(undefined4 *)((int)word_ptr_3 + -8) = *(undefined4 *)((int)word_ptr_3 + 0xfc);
      *(undefined4 *)((int)word_ptr_3 + -0xc) = 0xd3984;
      loop_i = routes_fn_0d402c();
      if (loop_i != 0) {
        *(undefined4 *)((int)word_ptr_3 + -0xc) = 0xd399b;
        loop_i = get_2d_squared_distance();
        *(int *)((int)word_ptr_3 + 0x104) = loop_i;
        *(int *)((int)word_ptr_3 + 0x104) = -loop_i;
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + -8);
        break;
      }
    }
    if (*(int *)(word_ptr_2 + 200) == 0) {
      short_val = *(short *)(thing_ptr + 0x52); /* thing->health */
      if (*(char *)(*(int *)(word_ptr_2 + 0x114) + 1) == '\x01') {
        *(char *)(thing_ptr + 0x53) = *(char *)(thing_ptr + 0x53) + '\x02';
        if (0x7ff < *(ushort *)(thing_ptr + 0x52)) { /* thing->health */
          *(ushort *)(thing_ptr + 0x52) = *(ushort *)(thing_ptr + 0x52) - 0x800; /* thing->health */
        }
      }
      else {
        *(short *)(thing_ptr + 0x52) = short_val + -0x200; /* thing->health */
      }
      *(undefined4 *)(word_ptr_2 + -4) = 0xd3a74;
      uval_7 = routes_update_creature_control_0d2510();
      *(undefined4 *)(word_ptr_2 + 0xb8) = uval_7;
      *(short *)(thing_ptr + 0x52) = short_val; /* thing->health */
    }
    else {
      *(undefined4 *)(word_ptr_2 + -4) = 0xd39f8;
      uval_7 = routes_update_creature_control_0d2510();
      *(undefined4 *)(word_ptr_2 + 0xb8) = uval_7;
    }
    if ((*(int *)(word_ptr_2 + 200) == 0) ||
       (*(int *)(word_ptr_2 + 0xb8) != *(int *)(*(int *)(word_ptr_2 + 0x114) + 0xd))) {
      *(short *)(word_ptr_2 + 0x70) =
           (short)((uint)(*(int *)(word_ptr_2 + 300) *
                         (&g_slab_attr_table)[*(int *)(*(int *)(word_ptr_2 + 0x114) + 0xd)]) >> 0x10) +
           *(short *)(thing_ptr + 0xd); /* thing->mappos.val_x */
      *(short *)(word_ptr_2 + 0x72) =
           *(short *)(thing_ptr + 0xf) + /* thing->mappos.val_y */
           (short)((uint)-(*(int *)(word_ptr_2 + 300) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(word_ptr_2 + 0x114) + 0xd)] >> 8)
                  >> 8);
      *(undefined4 *)(word_ptr_2 + -4) = 0xd3b16;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(word_ptr_2 + 0x74) = uval_4;
      *(undefined4 *)(word_ptr_2 + -4) = 0xd3b26;
      loop_i = creature_fn_07e868();
      if (loop_i == 4) {
        *(undefined4 *)(word_ptr_2 + -4) = 0xd3b47;
        uval_5 = routes_fn_0d3f64();
        uval_11 = *(ushort *)(thing_ptr + 0x56);
        *(uint *)(word_ptr_2 + 0xd4) = uval_5;
        uval_11 = *(ushort *)(&g_data_0019073b + (uint)uval_11 * 2) / 2;
        *(undefined2 *)(word_ptr_2 + 0x68) = *(undefined2 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
        *(undefined2 *)(word_ptr_2 + 0x6a) = *(undefined2 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
        if ((uval_5 & 1) != 0) {
          uval_2 = *(ushort *)(thing_ptr + 0xd); /* thing->mappos.val_x */
          if ((ushort)*(undefined4 *)(word_ptr_2 + 0x70) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x68) = uval_2 - uval_11;
            word_ptr_2[0x68] = 1;
            *(ushort *)(word_ptr_2 + 0x68) = *(short *)(word_ptr_2 + 0x68) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x68) = uval_2 + uval_11;
            word_ptr_2[0x68] = 0xff;
            *(ushort *)(word_ptr_2 + 0x68) = *(short *)(word_ptr_2 + 0x68) - uval_11;
          }
          *(undefined4 *)(word_ptr_2 + -4) = 0xd3bca;
          uval_4 = move_process_map_subtile_0b28e8();
          *(undefined2 *)(word_ptr_2 + 0x6c) = uval_4;
        }
        if ((word_ptr_2[0xd4] & 2) != 0) {
          uval_2 = *(ushort *)(thing_ptr + 0xf); /* thing->mappos.val_y */
          if (*(ushort *)(word_ptr_2 + 0x72) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x6a) = uval_2 - uval_11;
            word_ptr_2[0x6a] = 1;
            *(ushort *)(word_ptr_2 + 0x6a) = *(short *)(word_ptr_2 + 0x6a) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x6a) = uval_2 + uval_11;
            word_ptr_2[0x6a] = 0xff;
            *(ushort *)(word_ptr_2 + 0x6a) = *(short *)(word_ptr_2 + 0x6a) - uval_11;
          }
          *(undefined4 *)(word_ptr_2 + -4) = 0xd3c1a;
          uval_4 = move_process_map_subtile_0b28e8();
          *(undefined2 *)(word_ptr_2 + 0x6c) = uval_4;
        }
        if ((word_ptr_2[0xd4] & 4) != 0) {
          uval_2 = *(ushort *)(thing_ptr + 0xd); /* thing->mappos.val_x */
          if (*(ushort *)(word_ptr_2 + 0x70) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x68) = uval_2 - uval_11;
            word_ptr_2[0x68] = 1;
            *(ushort *)(word_ptr_2 + 0x68) = *(short *)(word_ptr_2 + 0x68) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x68) = uval_2 + uval_11;
            word_ptr_2[0x68] = 0xff;
            *(ushort *)(word_ptr_2 + 0x68) = *(short *)(word_ptr_2 + 0x68) - uval_11;
          }
          uval_2 = *(ushort *)(thing_ptr + 0xf); /* thing->mappos.val_y */
          if (*(ushort *)(word_ptr_2 + 0x72) < uval_2) {
            *(ushort *)(word_ptr_2 + 0x6a) = uval_2 - uval_11;
            word_ptr_2[0x6a] = 1;
            *(ushort *)(word_ptr_2 + 0x6a) = *(short *)(word_ptr_2 + 0x6a) + uval_11;
          }
          else {
            *(ushort *)(word_ptr_2 + 0x6a) = uval_2 + uval_11;
            word_ptr_2[0x6a] = 0xff;
            *(ushort *)(word_ptr_2 + 0x6a) = *(short *)(word_ptr_2 + 0x6a) - uval_11;
          }
          *(undefined4 *)(word_ptr_2 + -4) = 0xd3ca3;
          uval_4 = move_process_map_subtile_0b28e8();
          *(undefined2 *)(word_ptr_2 + 0x6c) = uval_4;
        }
        *(undefined4 *)(word_ptr_2 + 0x70) = *(undefined4 *)(word_ptr_2 + 0x68);
        *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x74) =
             *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x6c);
        if (((short)*(undefined4 *)(word_ptr_2 + 0x70) != *(short *)(thing_ptr + 0xd)) || /* thing->mappos.val_x */
           ((short)*(undefined4 *)(word_ptr_2 + 0x72) != *(short *)(thing_ptr + 0xf))) { /* thing->mappos.val_y */
          *(undefined4 *)(thing_ptr + 0xd) = *(undefined4 *)(word_ptr_2 + 0x70); /* thing->mappos.val_x */
          *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_3 * -8) =
               *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x74);
          *(undefined4 *)(word_ptr_2 + -4) = 0xd3ce0;
          uval_7 = update_fn_0dc440();
          *(undefined4 *)(*(int *)(word_ptr_2 + 0x114) + 9) = uval_7;
          word_ptr_2[0x148] = 1;
        }
      }
    }
    word_ptr_3 = (undefined4 *)word_ptr_2;
    if (word_ptr_2[0x148] == '\0') {
      loop_i = *(int *)(word_ptr_2 + 0x114);
      *(undefined4 *)(loop_i + 0xd) = *(undefined4 *)(word_ptr_2 + 0xb8);
      *(undefined2 *)(thing_ptr + 0x52) = *(undefined2 *)(loop_i + 0xd); /* thing->health */
      *(short *)(word_ptr_2 + 0x70) =
           *(short *)(thing_ptr + 0xd) + /* thing->mappos.val_x */
           (short)((uint)(*(int *)(word_ptr_2 + 300) * (&g_slab_attr_table)[*(int *)(loop_i + 0xd)]) >> 0x10
                  );
      *(short *)(word_ptr_2 + 0x72) =
           (short)((uint)-(*(int *)(word_ptr_2 + 300) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(*(int *)(word_ptr_2 + 0x114) + 0xd)] >> 8)
                  >> 8) + *(short *)(thing_ptr + 0xf); /* thing->mappos.val_y */
      *(undefined4 *)(word_ptr_2 + -4) = 0xd3d7f;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(word_ptr_2 + 0x74) = uval_4;
      *(uint *)(word_ptr_2 + -4) = (uint)(byte)word_ptr_2[0x164];
      *(undefined4 *)(word_ptr_2 + -8) = extraout_ECX_06;
      word_ptr_3 = (undefined4 *)(word_ptr_2 + -0xc);
      *(undefined4 *)(word_ptr_2 + -0xc) = *(undefined4 *)(word_ptr_2 + 0x120);
      *(undefined4 *)(word_ptr_2 + -0x10) = 0xd3db8;
      routes_update_creature_control_0d5624();
      *(undefined4 *)(thing_ptr + 0xd) = *(undefined4 *)(word_ptr_2 + 0x70); /* thing->mappos.val_x */
      *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_3 * -8) =
           *(undefined2 *)(word_ptr_2 + (uint)flag_3 * -8 + 0x74);
    }
    loop_i = *(int *)((int)word_ptr_3 + 300);
    loop_i_2 = *(int *)((int)word_ptr_3 + 0x104);
    *(undefined4 *)((int)word_ptr_3 + -4) = 0xd3de1;
    val = get_2d_squared_distance();
    *(int *)((int)word_ptr_3 + 0x104) = loop_i_2 + loop_i;
    if ((val < *(int *)((int)word_ptr_3 + 0x10c)) &&
       (*(int *)((int)word_ptr_3 + 0x10c) = val, val < 0x10000)) {
      *(int *)((int)word_ptr_3 + 0x10c) = -val;
      break;
    }
    loop_i = *(int *)((int)word_ptr_3 + 200);
    *(int *)((int)word_ptr_3 + 200) = loop_i + 1;
  } while (loop_i + 1 < 100);
  loop_i_2 = word_ptr_3[0x41] * word_ptr_3[0x41];
  loop_i = word_ptr_3[0x43];
  if (loop_i < 0) {
    word_ptr_3[0x43] = loop_i - loop_i_2;
  }
  else {
    word_ptr_3[0x43] = loop_i + loop_i_2;
  }
  uval_7 = word_ptr_3[0x4e];
  *(undefined4 *)(thing_ptr + 0xd) = word_ptr_3[0x1e]; /* thing->mappos.val_x */
  *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_3 * -8) =
       *(undefined2 *)(word_ptr_3 + (uint)flag_3 * -2 + 0x1f);
  word_ptr_4 = (undefined4 *)word_ptr_3[0x45];
  *(short *)(thing_ptr + 0x52) = (short)uval_7; /* thing->health */
  word_ptr_5 = word_ptr_3;
  for (thing_ptr = 0xb; thing_ptr != 0; thing_ptr = thing_ptr + -1) {
    *word_ptr_4 = *word_ptr_5;
    word_ptr_5 = word_ptr_5 + (uint)flag_3 * -2 + 1;
    word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
  }
  *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_5;
  thing_ptr = word_ptr_3[0x2a];
  if (thing_ptr < 0) {
    if (((int)word_ptr_3[0x43] < 0) && (thing_ptr < (int)word_ptr_3[0x43])) {
LAB_000d3eb4:
      *(uint *)word_ptr_3[0x2d] = (uint)*(ushort *)(word_ptr_3 + 0x4d);
      word_ptr_2 = (undefined1 *)word_ptr_3[0x39];
      uval = *(undefined1 *)(word_ptr_3 + 0x53);
      goto LAB_000d3ed5;
    }
  }
  else if (((int)word_ptr_3[0x43] < 0) || ((int)word_ptr_3[0x43] <= thing_ptr)) goto LAB_000d3eb4;
  *(uint *)word_ptr_3[0x2d] = (uint)*(ushort *)(word_ptr_3 + 0x50);
  word_ptr_2 = (undefined1 *)word_ptr_3[0x39];
  uval = *(undefined1 *)(word_ptr_3 + 0x5b);
LAB_000d3ed5:
  *word_ptr_2 = uval;
  return 1;
}

/******************************************************************************
 * Function : routes_fn_0d3ee8 (Original VA: 0xd3ee8, Ghidra: FUN_000d3ee8)
 * Prototype: bool routes_fn_0d3ee8(void);
 * Address  : 0xd3ee8 (Size: 111 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Purpose  : Module routes.cpp procedure @ 0x0d3ee8
 * Callers  : 0 -> 
 * Callees  : 2 -> creature_fn_07e868, move_process_map_subtile_0b28e8
 ******************************************************************************/
bool routes_fn_0d3ee8(void)

{
  short short_val;
  undefined2 uval;
  int arg_eax;
  int val;
  int arg_ecx;
  int arg_edx;
  
  short_val = *(short *)(arg_eax + 0xd) + (short)((uint)((&g_slab_attr_table)[arg_edx] * arg_ecx) >> 0x10);
  uval = move_process_map_subtile_0b28e8(short_val);
  val = creature_fn_07e868(short_val,uval);
  return val != 4;
}

/******************************************************************************
 * Function : routes_fn_0d3f64 (Original VA: 0xd3f64, Ghidra: FUN_000d3f64)
 * Prototype: byte routes_fn_0d3f64(void);
 * Address  : 0xd3f64 (Size: 199 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Purpose  : Module routes.cpp procedure @ 0x0d3f64
 * Callers  : 3 -> routes_ve_been_pushing_very_0d1ae0, routes_illegal_block_direction_lookahead_0d29ac, routes_ve_been_pushing_very_0d4188
 * Callees  : 1 -> creature_fn_07e868
 ******************************************************************************/
byte routes_fn_0d3f64(void)

{
  int arg_eax;
  int val;
  undefined2 *arg_edx;
  byte flag;
  
  val = creature_fn_07e868(*arg_edx,*(undefined2 *)(arg_eax + 0x11));
  flag = val == 4;
  val = creature_fn_07e868(*(undefined2 *)(arg_eax + 0xd),*(undefined2 *)(arg_eax + 0x11));
  if (val == 4) {
    flag = flag | 2;
  }
  if ((flag == 0) && (val = creature_fn_07e868(*arg_edx,*(undefined2 *)(arg_eax + 0x11)), val == 4)) {
    flag = 4;
  }
  return flag;
}

/******************************************************************************
 * Function : routes_fn_0d402c (Original VA: 0xd402c, Ghidra: FUN_000d402c)
 * Prototype: undefined4 routes_fn_0d402c(int param_1);
 * Address  : 0xd402c (Size: 348 bytes)
 * Module   : routes.cpp [contiguous_same_unit_span]
 * Purpose  : Module routes.cpp procedure @ 0x0d402c
 * Callers  : 3 -> routes_ve_been_pushing_very_0d1ae0, routes_illegal_block_direction_lookahead_0d29ac, routes_ve_been_pushing_very_0d4188
 * Callees  : 3 -> anger_fn_010c1a, creature_fn_07e868, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 routes_fn_0d402c(int param_1)

{
  ushort uval;
  ushort uval_2;
  undefined2 uval_3;
  undefined2 uval_4;
  int val;
  undefined4 uval_5;
  ushort *arg_edx;
  byte flag;
  short local_1c;
  ushort local_18 [6];
  
  flag = 0;
  val = anger_fn_010c1a();
  val = (&g_slab_attr_table)[val];
  local_1c = (short)*(undefined4 *)arg_edx;
  local_18[(uint)flag * -4] = arg_edx[(uint)flag * -4 + 2];
  uval = local_1c + (short)((uint)(val * param_1) >> 0x10);
  local_18[0] = move_process_map_subtile_0b28e8();
  uval_2 = *arg_edx;
  if (uval_2 < uval) {
    uval_2 = uval_2 + (short)param_1;
  }
  else if (uval < uval_2) {
    uval_2 = uval_2 - (short)param_1;
  }
  uval_3 = move_process_map_subtile_0b28e8();
  uval = *arg_edx;
  uval_4 = move_process_map_subtile_0b28e8(uval);
  val = creature_fn_07e868(uval,uval_4,uval_2,uval_3);
  if (((val == 4) || (val = creature_fn_07e868(uval,uval_4,uval_2,uval_3), val == 4)) ||
     (val = creature_fn_07e868(uval,uval_4,uval_2,uval_3), val == 4)) {
    uval_5 = 0;
  }
  else {
    uval_5 = 1;
  }
  return uval_5;
}

/******************************************************************************
 * Function : routes_ve_been_pushing_very_0d4188 (Original VA: 0xd4188, Ghidra: FUN_000d4188)
 * Prototype: undefined4 routes_ve_been_pushing_very_0d4188(void);
 * Address  : 0xd4188 (Size: 5275 bytes)
 * Module   : routes.cpp [direct_file_string_xref]
 * OrigLine : routes.cpp lines 1699, 1848, 1852
 * Purpose  : String 'I've been pushing for a very long time now...'
 * Callers  : 1 -> move_update_creature_control_0b4c30
 * Callees  : 15 -> anger_fn_010c1a, anger_fn_010c5f, creature_fn_07e868, creature_fn_07f310, move_process_map_subtile_0b28e8, routes_fn_0d2480, routes_update_creature_control_0d2510, routes_illegal_block_direction_lookahead_0d29ac ...
 ******************************************************************************/
undefined4 routes_ve_been_pushing_very_0d4188(void)

{
  char *str_ptr;
  ushort uval;
  int cctrl_ptr;
  undefined4 *word_ptr;
  undefined4 uval_2;
  ulonglong uval_3;
  char ch;
  undefined2 uval_4;
  short short_val;
  int thing;
  int val;
  uint uval_5;
  undefined4 uval_6;
  int val_2;
  char extraout_CL;
  char extraout_CL_00;
  char extraout_CL_01;
  char extraout_CL_02;
  char extraout_CL_03;
  char extraout_CL_04;
  char extraout_CL_05;
  char extraout_CL_06;
  char extraout_CL_07;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  int extraout_ECX_05;
  byte flag;
  undefined4 *arg_edx;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  byte arg_bl;
  ushort uval_7;
  undefined4 **val_3;
  undefined4 *word_ptr_2;
  int *int_ptr;
  byte flag_2;
  longdouble val_4;
  undefined2 auStack_878 [1010];
  undefined4 *local_94;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  undefined4 local_84;
  ushort local_80 [6];
  undefined2 local_74;
  undefined2 local_72;
  undefined1 local_70;
  char local_6f;
  undefined1 local_6e;
  char local_6d;
  undefined4 local_6c;
  undefined2 local_68 [8];
  ushort *local_58;
  int local_54;
  uint local_50;
  int local_48;
  undefined4 *local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined4 *local_30;
  uint local_2c;
  uint local_20;
  uint local_1c;
  byte local_14;
  
  flag_2 = 0;
  int_ptr = (int *)local_88;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  str_ptr = (char *)(cctrl_ptr + 0x1ea);
  local_38 = (undefined4 *)(uint)*(ushort *)(cctrl_ptr + 0xc4);
  local_34 = 0x21;
  local_2c = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2) / 2;
  local_14 = arg_bl | '\x01' << (*(byte *)(thing + 6) & 0x1f); /* thing->owner */
  ch = *str_ptr;
  local_48 = thing;
  local_30 = arg_edx;
  if (ch != '\x01') {
    if (ch == '\x02') {
      local_8c = 0xd49e8;
      val = update_fn_0dc440();
      if (0x10 < val) {
        local_8c = 0xd49fc;
        val = update_fn_0dc440();
        if (val <= *(int *)(cctrl_ptr + 499)) {
          local_8c = 0xd4a1b;
          val = creature_fn_07e868();
          if (val == 0) {
            return 1;
          }
        }
        *str_ptr = '\x01';
        *(undefined4 *)(cctrl_ptr + 0x20b) = *local_30;
        *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
             *(undefined2 *)(local_30 + (uint)flag_2 * -2 + 1);
        *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
        return 1;
      }
      local_8c = 0xd4a5a;
      val = update_fn_0dc440();
      if (val < *(int *)(cctrl_ptr + 0x1ef)) {
        local_8c = (uint)local_14;
        int_ptr = &local_90;
        local_90 = 1;
        local_94 = (undefined4 *)0xd4a80;
        val = routes_fn_0d402c();
        if (val != 0) {
          *str_ptr = '\x01';
          *(undefined4 *)(cctrl_ptr + 0x20b) = *local_38;
          *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
               *(undefined2 *)(local_38 + (uint)flag_2 * -2 + 1);
          *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
          *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
          *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
          return 1;
        }
      }
      if ((uint)*(ushort *)(*(int *)((int)int_ptr + 0x40) + 0x52) != *(uint *)(cctrl_ptr + 0x1f7)) {
        return 1;
      }
      *(undefined4 *)((int)int_ptr + -4) = 0xd4ad5;
      val_2 = routes_update_creature_control_0d2510();
      val = *(int *)(cctrl_ptr + 0x1f7);
      *(int *)((int)int_ptr + 0x34) = val_2;
      if (val_2 != val) {
        *(short *)((int)int_ptr + 0x18) =
             (short)((uint)(*(int *)((int)int_ptr + 0x50) * (&g_slab_attr_table)[val]) >> 0x10) +
             *(short *)(*(int *)((int)int_ptr + 0x40) + 0xd);
        *(short *)((int)int_ptr + 0x1a) =
             (short)((uint)-(*(int *)((int)int_ptr + 0x50) *
                             (int)(&PTR_LAB_00192fe0)[*(int *)(cctrl_ptr + 0x1f7)] >> 8) >> 8) +
             *(short *)(*(int *)((int)int_ptr + 0x40) + 0xf);
        *(undefined4 *)((int)int_ptr + -4) = 0xd4b3f;
        uval_4 = move_process_map_subtile_0b28e8();
        *(undefined2 *)((int)int_ptr + 0x1c) = uval_4;
        *(undefined4 *)((int)int_ptr + -4) = 0xd4b55;
        val = creature_fn_07e868();
        if (val == 4) {
          val = *(int *)((int)int_ptr + 0x40);
          *(undefined2 **)((int)int_ptr + 0x4c) = (undefined2 *)((int)int_ptr + 0x18);
          *(undefined4 *)((int)int_ptr + -4) = 0xd4b7b;
          uval_5 = routes_fn_0d3f64();
          *(uint *)((int)int_ptr + 0x48) = uval_5;
          uval_7 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(val + 0x56) * 2) / 2;
          *(undefined2 *)((int)int_ptr + 0x28) = *(undefined2 *)(val + 0xd);
          *(undefined2 *)((int)int_ptr + 0x2a) = *(undefined2 *)(val + 0xf);
          if ((uval_5 & 1) != 0) {
            uval = *(ushort *)(val + 0xd);
            if ((ushort)*(undefined4 *)((int)int_ptr + 0x18) < uval) {
              *(ushort *)((int)int_ptr + 0x28) = uval - uval_7;
              *(undefined1 *)((int)int_ptr + 0x28) = 1;
              *(short *)((int)int_ptr + 0x28) = *(short *)((int)int_ptr + 0x28) + uval_7;
            }
            else {
              *(ushort *)((int)int_ptr + 0x28) = uval + uval_7;
              *(undefined1 *)((int)int_ptr + 0x28) = 0xff;
              *(short *)((int)int_ptr + 0x28) = *(short *)((int)int_ptr + 0x28) - uval_7;
            }
            *(undefined4 *)((int)int_ptr + -4) = 0xd4bf7;
            uval_4 = move_process_map_subtile_0b28e8();
            *(undefined2 *)((int)int_ptr + 0x2c) = uval_4;
          }
          if ((*(byte *)((int)int_ptr + 0x48) & 2) != 0) {
            uval = *(ushort *)(val + 0xf);
            if (*(ushort *)(*(int *)((int)int_ptr + 0x4c) + 2) < uval) {
              *(ushort *)((int)int_ptr + 0x2a) = uval - uval_7;
              *(undefined1 *)((int)int_ptr + 0x2a) = 1;
              *(short *)((int)int_ptr + 0x2a) = *(short *)((int)int_ptr + 0x2a) + uval_7;
            }
            else {
              *(ushort *)((int)int_ptr + 0x2a) = uval + uval_7;
              *(undefined1 *)((int)int_ptr + 0x2a) = 0xff;
              *(short *)((int)int_ptr + 0x2a) = *(short *)((int)int_ptr + 0x2a) - uval_7;
            }
            *(undefined4 *)((int)int_ptr + -4) = 0xd4c45;
            uval_4 = move_process_map_subtile_0b28e8();
            *(undefined2 *)((int)int_ptr + 0x2c) = uval_4;
          }
          if ((*(byte *)((int)int_ptr + 0x48) & 4) != 0) {
            uval = *(ushort *)(val + 0xd);
            if (**(ushort **)((int)int_ptr + 0x4c) < uval) {
              *(ushort *)((int)int_ptr + 0x28) = uval - uval_7;
              *(undefined1 *)((int)int_ptr + 0x28) = 1;
              *(short *)((int)int_ptr + 0x28) = *(short *)((int)int_ptr + 0x28) + uval_7;
            }
            else {
              *(ushort *)((int)int_ptr + 0x28) = uval + uval_7;
              *(undefined1 *)((int)int_ptr + 0x28) = 0xff;
              *(short *)((int)int_ptr + 0x28) = *(short *)((int)int_ptr + 0x28) - uval_7;
            }
            uval = *(ushort *)(val + 0xf);
            if (*(ushort *)(*(int *)((int)int_ptr + 0x4c) + 2) < uval) {
              *(ushort *)((int)int_ptr + 0x2a) = uval - uval_7;
              *(undefined1 *)((int)int_ptr + 0x2a) = 1;
              *(short *)((int)int_ptr + 0x2a) = *(short *)((int)int_ptr + 0x2a) + uval_7;
            }
            else {
              *(ushort *)((int)int_ptr + 0x2a) = uval + uval_7;
              *(undefined1 *)((int)int_ptr + 0x2a) = 0xff;
              *(short *)((int)int_ptr + 0x2a) = *(short *)((int)int_ptr + 0x2a) - uval_7;
            }
            *(undefined4 *)((int)int_ptr + -4) = 0xd4ccf;
            uval_4 = move_process_map_subtile_0b28e8();
            *(undefined2 *)((int)int_ptr + 0x2c) = uval_4;
          }
          word_ptr = *(undefined4 **)((int)int_ptr + 0x4c);
          *word_ptr = *(undefined4 *)((int)int_ptr + 0x28);
          *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1) =
               *(undefined2 *)((int)int_ptr + ((uint)flag_2 * -4 + 0x16) * 2);
          *(undefined4 *)((int)int_ptr + -4) = 0xd4cf1;
          val = update_fn_0dc440();
          if (0x10 < val) {
            *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)((int)int_ptr + 0x18);
            *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
                 *(undefined2 *)((int)int_ptr + ((uint)flag_2 * -4 + 0xe) * 2);
            *(undefined4 *)((int)int_ptr + -4) = 0xd4d0a;
            uval_6 = update_fn_0dc440();
            *(undefined4 *)(cctrl_ptr + 499) = uval_6;
            return 1;
          }
        }
      }
      *(undefined4 *)((int)int_ptr + -4) = 0xd4d25;
      ch = routes_fn_0d2480();
      if (ch != '\0') {
        word_ptr = *(undefined4 **)((int)int_ptr + 0x58);
        *str_ptr = '\x01';
        *(undefined4 *)(cctrl_ptr + 0x20b) = *word_ptr;
        *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
             *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1);
        *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
        return 1;
      }
      val = *(int *)((int)int_ptr + 0x34);
      *(int *)(cctrl_ptr + 0x1f7) = val;
      val_2 = *(int *)((int)int_ptr + 0x40);
      *(short *)(cctrl_ptr + 0x205) =
           (short)((uint)(*(int *)((int)int_ptr + 0x50) * (&g_slab_attr_table)[val]) >> 0x10) +
           *(short *)(val_2 + 0xd);
      *(short *)(cctrl_ptr + 0x207) =
           *(short *)(val_2 + 0xf) +
           (short)((uint)-(*(int *)((int)int_ptr + 0x50) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(cctrl_ptr + 0x1f7)] >> 8) >> 8);
      *(undefined4 *)((int)int_ptr + -4) = 0xd4dad;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(cctrl_ptr + 0x209) = uval_4;
      uval_6 = *(undefined4 *)((int)int_ptr + 0x54);
      *(uint *)((int)int_ptr + -4) = (uint)*(byte *)((int)int_ptr + 0x74);
      uval_2 = *(undefined4 *)((int)int_ptr + 0x50);
      *(undefined4 *)((int)int_ptr + 0x18) = *(undefined4 *)(cctrl_ptr + 0x205);
      *(undefined2 *)((int)int_ptr + ((uint)flag_2 * -4 + 0xe) * 2) =
           *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8);
      *(undefined4 *)((int)int_ptr + -8) = uval_2;
      *(undefined4 *)((int)int_ptr + -0xc) = uval_6;
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd4ddb;
      routes_update_creature_control_0d5624();
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd4deb;
      val = update_fn_0dc440();
      if (0x10 < val) {
        *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)((int)int_ptr + 0xc);
        *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
             *(undefined2 *)((int)int_ptr + ((uint)flag_2 * -4 + 8) * 2);
      }
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd4e0d;
      uval_6 = update_fn_0dc440();
      *(undefined4 *)(cctrl_ptr + 499) = uval_6;
      *(uint *)((int)int_ptr + 0x24) = (uint)*(byte *)((int)int_ptr + 0x68);
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd4e2b;
      val = creature_fn_07e868();
      if (val == 4) {
        *(undefined4 *)((int)int_ptr + -0x10) = 0xd4e48;
        LbErrorLog(); /* LbErrorLog("routes.cpp", line 1699, "I've been pushing for a very long time now...") */
        *(undefined4 *)((int)int_ptr + -0x10) = 0xd4e4d;
        LbWarnLog(); /* LbErrorLog("routes.cpp", line 1848, "I've been given a shite position") */
        val = *(int *)(cctrl_ptr + 0x1f7);
        *(short *)((int)int_ptr + -4) =
             (short)((uint)(*(int *)((int)int_ptr + 0x44) * (&g_slab_attr_table)[val]) >> 0x10) +
             *(short *)(*(int *)((int)int_ptr + 0x34) + 0xd);
        *(short *)((int)int_ptr + -2) =
             (short)((uint)-(*(int *)((int)int_ptr + 0x44) * (int)(&PTR_LAB_00192fe0)[val] >> 8)
                    >> 8) + *(short *)(*(int *)((int)int_ptr + 0x34) + 0xf);
        *(undefined4 *)((int)int_ptr + -0x10) = 0xd4ea8;
        uval_4 = move_process_map_subtile_0b28e8();
        *(undefined2 *)int_ptr = uval_4;
        *(undefined4 *)((int)int_ptr + -0x10) = 0xd4ebe;
        val = creature_fn_07e868();
        if (val == 4) {
          *(undefined4 *)((int)int_ptr + -0x10) = 0xd4edf;
          LbErrorLog(); /* LbWarnLog("routes.cpp", line 1848, "I've been given a shite position") */
        }
        word_ptr = *(undefined4 **)((int)int_ptr + 0x4c);
        *str_ptr = '\x01';
        *(undefined4 *)(cctrl_ptr + 0x20b) = *word_ptr;
        *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
             *(undefined2 *)(word_ptr + (uint)flag_2 * -2 + 1);
        *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
        val = *(int *)((int)int_ptr + 0x34);
        *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)(val + 0xd);
        *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
             *(undefined2 *)(val + 0x11 + (uint)flag_2 * -8);
        return 1;
      }
      if (val == 1) {
        *(undefined4 *)((int)int_ptr + -0x10) = 0;
        *(undefined4 *)((int)int_ptr + -0x14) = 0xd4f30;
        uval_7 = creature_fn_07f310();
        *(ushort *)(cctrl_ptr + 0x1ff) = uval_7;
        uval_5 = ((uint)uval_7 % 0x100) / 3;
        *(char *)((int)int_ptr + 9) = ((char)(uval_5 << 2) - (char)uval_5) + '\x01';
        *(undefined1 *)((int)int_ptr + 8) = 0x80;
        uval_3 = (ulonglong)(longlong)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3;
        *(char *)((int)int_ptr + 0xb) = ((char)((int)uval_3 << 2) - (char)uval_3) + '\x01';
        *(undefined1 *)((int)int_ptr + 10) = 0x80;
        *(undefined4 *)((int)int_ptr + 0x54) = 0xffff;
        flag = 0;
        while (flag < 4) {
          *(uint *)((int)int_ptr + 0x5c) =
               (uint)(ushort)(short)*(char *)((int)&g_data_0018b67b + (uint)flag * 2 + 3);
          *(uint *)((int)int_ptr + 0x50) = (uint)*(ushort *)((int)int_ptr + 8);
          *(undefined4 *)((int)int_ptr + -0x14) = 0xd4fec;
          val_4 = (longdouble)bflib_system_io_fn_0e8d50();
          *(int *)((int)int_ptr + 0x50) = (int)ROUND(val_4);
          *(short *)((int)int_ptr + 0x10) = (short)*(undefined4 *)((int)int_ptr + 0x50);
          *(uint *)((int)int_ptr + 0x5c) =
               CONCAT22((short)((uint)*(undefined4 *)((int)int_ptr + 0x50) >> 0x10),
                        (short)(char)(&g_data_0018b67f)[extraout_EDX_01]);
          *(uint *)((int)int_ptr + 0x50) = (uint)*(ushort *)((int)int_ptr + 10);
          *(undefined4 *)((int)int_ptr + -0x14) = 0xd5021;
          val_4 = (longdouble)bflib_system_io_fn_0e8d50();
          *(int *)((int)int_ptr + 0x50) = (int)ROUND(val_4);
          *(short *)((int)int_ptr + 0x12) = (short)*(undefined4 *)((int)int_ptr + 0x50);
          ch = extraout_CL_05;
          if ((*(byte *)((int)&g_map_subtiles +
                        ((uint)*(byte *)((int)int_ptr + 0x13) * 0x100 +
                        (uint)*(byte *)((int)int_ptr + 0x11)) * 5) & 0x10) == 0) {
            *(undefined4 *)((int)int_ptr + -0x14) = 0xd505a;
            val = update_fn_0dc440();
            ch = extraout_CL_06;
            if (val < (int)(uint)*(ushort *)((int)int_ptr + 0x54)) {
              *(undefined4 *)((int)int_ptr + -0x14) = 0xd5078;
              uval_6 = update_fn_0dc440();
              *(undefined4 *)((int)int_ptr + 0x54) = uval_6;
              *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)((int)int_ptr + 0x10);
              *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
                   *(undefined2 *)((int)int_ptr + ((uint)flag_2 * -4 + 10) * 2);
              ch = extraout_CL_07;
            }
          }
          flag = ch + 1;
        }
        *(undefined4 *)((int)int_ptr + -0x14) = 0xd5093;
        uval_6 = anger_fn_010c1a();
        *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
        *(undefined4 *)(cctrl_ptr + 0x1f7) = uval_6;
        *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
        *(undefined4 *)((int)int_ptr + -0x14) = 0xd50a7;
        uval_6 = update_fn_0dc440();
        *str_ptr = '\x04';
        *(undefined4 *)(cctrl_ptr + 499) = uval_6;
        return 1;
      }
      *(undefined4 *)((int)int_ptr + -0x10) = 0xd50c4;
      uval_6 = update_fn_0dc440();
      *(undefined4 *)(cctrl_ptr + 499) = uval_6;
      return 1;
    }
    if (ch != '\x04') {
      if (ch == '\x03') {
        local_8c = 0xd5267;
        val = update_fn_0dc440();
        if (0x10 < val) {
          local_8c = 0xd5275;
          uval_6 = anger_fn_010c1a();
          *str_ptr = '\x03';
          *(undefined4 *)(cctrl_ptr + 0x1f7) = uval_6;
          return 1;
        }
        uval_5 = ((uint)*(ushort *)(cctrl_ptr + 0x1ff) % 0x100) / 3;
        *str_ptr = '\x03';
        local_70 = 0x80;
        local_6f = ((char)(uval_5 << 2) - (char)uval_5) + '\x01';
        uval_3 = (ulonglong)(longlong)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3;
        local_6d = ((char)((int)uval_3 << 2) - (char)uval_3) + '\x01';
        local_6e = 0x80;
        local_8c = 0xd52f9;
        uval_6 = anger_fn_010c1a();
        *(undefined4 *)(cctrl_ptr + 0x1f7) = uval_6;
        local_8c = 0xd530d;
        val = anger_fn_010c5f();
        if (val != 0) {
          return 1;
        }
        uval_3 = ((ulonglong)(longlong)(int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) % 0x100) / 3;
        *str_ptr = '\x05';
        short_val = ((short)((int)uval_3 << 2) - (short)uval_3) +
                (short)((uint)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3) * 0x300 + 0x101;
        *(short *)(cctrl_ptr + 0x1ff) = short_val;
        *(short *)(cctrl_ptr + 0x201) = short_val;
      }
      else if (ch == '\x06') {
        uval_7 = (short)(((ulonglong)(longlong)(int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) % 0x100) / 3) *
                 3 + (short)((uint)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3) * 0x300 + 0x101
        ;
        *(ushort *)(cctrl_ptr + 0x1ff) = uval_7;
        *(ushort *)(cctrl_ptr + 0x201) = uval_7;
        if ((*(byte *)((int)&g_map_subtiles + (uint)uval_7 * 5) & 0x10) == 0) {
          short_val = 0x180 - (short)local_2c;
          if (*(char *)(cctrl_ptr + 0x1eb) == '\x01') {
            *(short *)(cctrl_ptr + 0x205) =
                 *(short *)(cctrl_ptr + 0x205) +
                 *(char *)((int)&g_data_0018b67b +
                          (((int)(*(ushort *)(thing + 0x52) + 0x100) >> 9) + 3U & 3) * 2 + 3) * /* thing->health */
                 short_val;
            uval_5 = ((int)(*(ushort *)(thing + 0x52) + 0x100) >> 9) + 3; /* thing->health */
          }
          else {
            *(short *)(cctrl_ptr + 0x205) =
                 *(short *)(cctrl_ptr + 0x205) +
                 *(char *)((int)&g_data_0018b67b +
                          (((int)(*(ushort *)(thing + 0x52) + 0x100) >> 9) + 1U & 3) * 2 + 3) * /* thing->health */
                 short_val;
            uval_5 = ((int)(*(ushort *)(thing + 0x52) + 0x100) >> 9) + 1; /* thing->health */
          }
          *(short *)(cctrl_ptr + 0x207) =
               *(short *)(cctrl_ptr + 0x207) + (char)(&g_data_0018b67f)[(uval_5 & 3) * 2] * short_val;
          *(short *)(cctrl_ptr + 0x205) =
               *(short *)(cctrl_ptr + 0x205) +
               *(char *)((int)&g_data_0018b67b +
                        ((int)(*(ushort *)(thing + 0x52) + 0x100) >> 9 & 3U) * 2 + 3) * 0x80; /* thing->health */
          ch = (&g_data_0018b67f)[((int)(*(ushort *)(thing + 0x52) + 0x100) >> 9 & 3U) * 2]; /* thing->health */
          *str_ptr = '\a';
          *(short *)(cctrl_ptr + 0x207) = *(short *)(cctrl_ptr + 0x207) + ch * 0x80;
          return 1;
        }
      }
      else {
        if (ch != '\x05') {
          if (ch != '\a') {
            return 1;
          }
          local_8c = 0xd55db;
          val = update_fn_0dc440();
          if (0x10 < val) {
            return 1;
          }
          if (*(char *)(cctrl_ptr + 0x1eb) == '\x01') {
            uval_5 = *(ushort *)(local_48 + 0x52) + 0x200;
          }
          else {
            uval_5 = *(ushort *)(local_48 + 0x52) + 0x600;
          }
          *(uint *)(cctrl_ptr + 0x1f7) = uval_5 & 0x7ff;
          *str_ptr = '\x02';
          return 1;
        }
        uval_7 = (short)(((ulonglong)(longlong)(int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) % 0x100) / 3) *
                 3 + (short)((uint)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3) * 0x300 + 0x101
        ;
        *(ushort *)(cctrl_ptr + 0x1ff) = uval_7;
        *(ushort *)(cctrl_ptr + 0x201) = uval_7;
        if ((*(byte *)((int)&g_map_subtiles + (uint)uval_7 * 5) & 0x10) == 0) {
          *str_ptr = '\x01';
          return 1;
        }
      }
      return 2;
    }
    local_8c = 0xd50f0;
    val = update_fn_0dc440();
    if (val < 0x11) {
      uval_5 = ((uint)*(ushort *)(cctrl_ptr + 0x1ff) % 0x100) / 3;
      *str_ptr = '\x04';
      local_6f = ((char)(uval_5 << 2) - (char)uval_5) + '\x01';
      local_70 = 0x80;
      uval_3 = (ulonglong)(longlong)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3;
      local_6d = ((char)((int)uval_3 << 2) - (char)uval_3) + '\x01';
      local_6e = 0x80;
      local_8c = 0xd51c2;
      uval_6 = anger_fn_010c1a();
      *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
      *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
      *(undefined4 *)(cctrl_ptr + 499) = 0;
      *(undefined4 *)(cctrl_ptr + 0x1f7) = uval_6;
      local_8c = 0xd51e6;
      val = anger_fn_010c5f();
      if (val != 0) {
        return 1;
      }
      uval_3 = ((ulonglong)(longlong)(int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) % 0x100) / 3;
      *str_ptr = '\x06';
      short_val = ((short)((int)uval_3 << 2) - (short)uval_3) +
              (short)(((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / extraout_ECX_05) * 0x300 +
              0x101;
      *(short *)(cctrl_ptr + 0x1ff) = short_val;
      *(short *)(cctrl_ptr + 0x201) = short_val;
      return 2;
    }
    local_8c = 0xd50fe;
    val = update_fn_0dc440();
    if (*(int *)(cctrl_ptr + 499) < val) {
      *str_ptr = '\x01';
    }
    else {
      local_8c = 0xd5128;
      val = creature_fn_07e868();
      if (val == 0) goto LAB_000d5146;
      *str_ptr = '\x01';
    }
    *(undefined4 *)(cctrl_ptr + 0x20b) = *local_30;
    *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
         *(undefined2 *)(local_30 + (uint)flag_2 * -2 + 1);
    *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
    *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
    *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
LAB_000d5146:
    *str_ptr = '\x04';
    return 1;
  }
  local_8c = 0xd421c;
  val = update_fn_0dc440();
  if (*(int *)(cctrl_ptr + 499) <= val) {
    *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
  }
  val_3 = (undefined4 **)local_88;
  if (*(char *)(cctrl_ptr + 0x1ee) == '\0') {
    local_8c = 0xd4241;
    val = anger_fn_010c1a();
    *(short *)(cctrl_ptr + 0x205) =
         (short)((uint)((int)local_38 * (&g_slab_attr_table)[val]) >> 0x10) +
         *(short *)(local_48 + 0xd);
    *(short *)(cctrl_ptr + 0x207) =
         (short)((uint)-((int)local_38 * (int)(&PTR_LAB_00192fe0)[val] >> 8) >> 8) +
         *(short *)(local_48 + 0xf);
    local_8c = 0xd4294;
    uval_4 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(cctrl_ptr + 0x209) = uval_4;
    *(undefined4 *)(cctrl_ptr + 0x1f7) = extraout_ECX;
    local_8c = 0xd42a6;
    update_fn_0dc440();
    local_8c = 0xd42b1;
    val = update_fn_0dc440();
    if (extraout_ECX_00 < val) {
      *(undefined4 *)(cctrl_ptr + 0x205) = *local_30;
      *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
           *(undefined2 *)(local_30 + (uint)flag_2 * -2 + 1);
    }
    local_50 = (uint)local_14;
    local_8c = 0xd42e4;
    val = creature_fn_07e868();
    if (val == 4) {
      local_8c = 0;
      local_90 = 0xd4301;
      val = creature_fn_07f310();
      *(char *)(cctrl_ptr + 0x203) =
           (char)(1 << ((&g_slabmap)
                        [((&g_subtile_to_slab_lut)[val % 0x100] +
                         (&g_subtile_to_slab_lut)
                         [(int)((val + (val >> 0x1f) * -0x100) -
                               (uint)((val >> 0x1f) << 7 < 0)) >> 8] * 0x55) * 6] & 7));
      local_90 = local_54;
      local_94 = local_38;
      ch = routes_illegal_block_direction_lookahead_0d29ac();
      val = local_54;
      if (ch == '\0') {
        *str_ptr = '\x01';
        *(undefined4 *)(cctrl_ptr + 0x20b) = *local_3c;
        *(undefined2 *)(cctrl_ptr + 0x20f + (uint)flag_2 * -8) =
             *(undefined2 *)(local_3c + (uint)flag_2 * -2 + 1);
        *(undefined1 *)(cctrl_ptr + 0x1ed) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ec) = 0;
        *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
        val_3 = &local_94;
      }
      else {
        uval_5 = routes_fn_0d3f64();
        local_34 = uval_5;
        uval_7 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(val + 0x56) * 2) / 2;
        local_84 = *(undefined4 *)(val + 0xd);
        local_58 = (ushort *)(cctrl_ptr + 0x205);
        if ((uval_5 & 1) != 0) {
          uval = *(ushort *)(val + 0xd);
          local_84._2_2_ = (short)((uint)*(undefined4 *)(val + 0xd) >> 0x10);
          uval_4 = local_84._2_2_;
          if (*(ushort *)(cctrl_ptr + 0x205) < uval) {
            local_84 = CONCAT22(local_84._2_2_,uval - uval_7);
            local_84 = CONCAT31(local_84._1_3_,1);
            local_84._0_2_ = (short)local_84 + uval_7;
          }
          else {
            local_84 = CONCAT22(local_84._2_2_,uval + uval_7);
            local_84 = CONCAT31(local_84._1_3_,0xff);
            local_84._0_2_ = (short)local_84 - uval_7;
          }
          local_84 = CONCAT22(uval_4,(short)local_84);
          local_80[0] = move_process_map_subtile_0b28e8();
          uval_5 = extraout_ECX_01;
        }
        if ((uval_5 & 2) != 0) {
          uval = *(ushort *)(val + 0xf);
          if (local_58[1] < uval) {
            local_84._3_1_ = (undefined1)((ushort)(uval - uval_7) >> 8);
            local_84._0_3_ = CONCAT12(1,(short)local_84);
            local_84._2_2_ = local_84._2_2_ + uval_7;
          }
          else {
            local_84._3_1_ = (undefined1)((ushort)(uval + uval_7) >> 8);
            local_84._0_3_ = CONCAT12(0xff,(short)local_84);
            local_84._2_2_ = local_84._2_2_ - uval_7;
          }
          local_80[0] = move_process_map_subtile_0b28e8();
          uval_5 = extraout_ECX_02;
        }
        if ((uval_5 & 4) != 0) {
          uval = *(ushort *)(val + 0xd);
          if (*local_58 < uval) {
            local_84._1_3_ = (uint3)(byte)((ushort)(uval - uval_7) >> 8);
            local_84 = CONCAT31(local_84._1_3_,1);
            local_84._0_2_ = (short)local_84 + uval_7;
          }
          else {
            local_84._1_3_ = (uint3)(byte)((ushort)(uval + uval_7) >> 8);
            local_84 = CONCAT31(local_84._1_3_,0xff);
            local_84._0_2_ = (short)local_84 - uval_7;
          }
          uval = *(ushort *)(val + 0xf);
          if (local_58[1] < uval) {
            local_84._3_1_ = (undefined1)((ushort)(uval - uval_7) >> 8);
            local_84._0_3_ = CONCAT12(1,(short)local_84);
            local_84._2_2_ = local_84._2_2_ + uval_7;
          }
          else {
            local_84._3_1_ = (undefined1)((ushort)(uval + uval_7) >> 8);
            local_84._0_3_ = CONCAT12(0xff,(short)local_84);
            local_84._2_2_ = local_84._2_2_ - uval_7;
          }
          local_80[0] = move_process_map_subtile_0b28e8();
          uval_5 = extraout_ECX_03;
        }
        *(undefined4 *)local_58 = local_84;
        local_58[(uint)flag_2 * -4 + 2] = local_80[(uint)flag_2 * -4];
        if (uval_5 == 4) {
          val = *(int *)(cctrl_ptr + 0x1f7);
          if ((val == 0) || (val == 0x400)) {
            *(undefined2 *)(cctrl_ptr + 0x207) = *(undefined2 *)(local_54 + 0xf);
          }
          else {
            if ((val != 0x200) && (val != 0x600)) goto LAB_000d4551;
            *(undefined2 *)(cctrl_ptr + 0x205) = *(undefined2 *)(local_54 + 0xd);
          }
          uval_4 = move_process_map_subtile_0b28e8();
          *(undefined2 *)(cctrl_ptr + 0x209) = uval_4;
        }
LAB_000d4551:
        *(undefined1 *)(cctrl_ptr + 0x1ee) = 1;
        val_3 = &local_94;
      }
    }
    else {
      val_3 = (undefined4 **)local_88;
      if (val == 1) {
        word_ptr_2 = &local_8c;
        local_8c = 0;
        local_90 = 0xd4774;
        uval_7 = creature_fn_07f310();
        *(ushort *)(cctrl_ptr + 0x1ff) = uval_7;
        uval_5 = ((uint)uval_7 % 0x100) / 3;
        local_74 = CONCAT11(((char)(uval_5 << 2) - (char)uval_5) + '\x01',0x80);
        local_72 = CONCAT11((char)((uint)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3) * '\x03'
                            + '\x01',0x80);
        local_1c = 0xffff;
        flag = 0;
        while (flag < 4) {
          local_20 = (uint)(ushort)(short)*(char *)((int)&g_data_0018b67b + (uint)flag * 2 + 3);
          local_2c = (uint)local_74;
          local_90 = 0xd4830;
          val_4 = (longdouble)bflib_system_io_fn_0e8d50();
          local_6c = CONCAT22(local_6c._2_2_,(short)(int)ROUND(val_4));
          local_20 = CONCAT22((short)((uint)(int)ROUND(val_4) >> 0x10),
                              (short)(char)(&g_data_0018b67f)[extraout_EDX]);
          local_2c = (uint)local_72;
          local_90 = 0xd4865;
          val_4 = (longdouble)bflib_system_io_fn_0e8d50();
          uval_5 = local_6c;
          local_2c = (uint)ROUND(val_4);
          local_6c = CONCAT22((short)local_2c,(undefined2)local_6c);
          ch = extraout_CL;
          if ((*(byte *)((int)&g_map_subtiles +
                        ((uval_5 >> 8 & 0xff) + (local_2c >> 8 & 0xff) * 0x100) * 5) & 0x10) == 0) {
            local_90 = 0xd489e;
            val = update_fn_0dc440();
            ch = extraout_CL_00;
            if (val < (int)(local_1c & 0xffff)) {
              local_90 = 0xd48bc;
              local_1c = update_fn_0dc440();
              *(uint *)(cctrl_ptr + 0x205) = local_6c;
              *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) = local_68[(uint)flag_2 * -4];
              ch = extraout_CL_01;
            }
          }
          flag = ch + 1;
        }
        goto LAB_000d48cb;
      }
    }
  }
  if (*(char *)(cctrl_ptr + 0x1ee) != '\0') {
    flag = *(char *)(cctrl_ptr + 0x1ee) + 1;
    *(byte *)(cctrl_ptr + 0x1ee) = flag;
    if (0x20 < flag) {
      *(undefined4 *)((int)val_3 + -4) = 0xd4584;
      LbErrorLog(); /* LbErrorLog("routes.cpp", line 1852, "It's even more shit than I first thought") */
    }
    *(int *)((int)val_3 + 0x44) = *(int *)((int)val_3 + 0x40) + 0xd;
    *(undefined4 *)((int)val_3 + -4) = 0xd4599;
    val = update_fn_0dc440();
    if (val < 0x11) {
      *(undefined1 *)(cctrl_ptr + 0x1ee) = 0;
      *str_ptr = '\x02';
      val = *(int *)((int)val_3 + 0x40);
      *(short *)(cctrl_ptr + 0x205) =
           *(short *)(val + 0xd) +
           (short)((uint)(*(int *)((int)val_3 + 0x50) * (&g_slab_attr_table)[*(int *)(cctrl_ptr + 0x1f7)])
                  >> 0x10);
      *(short *)(cctrl_ptr + 0x207) =
           *(short *)(val + 0xf) +
           (short)((uint)-(*(int *)((int)val_3 + 0x50) *
                           (int)(&PTR_LAB_00192fe0)[*(int *)(cctrl_ptr + 0x1f7)] >> 8) >> 8);
      *(undefined4 *)((int)val_3 + -4) = 0xd45f8;
      uval_4 = move_process_map_subtile_0b28e8();
      *(undefined2 *)(cctrl_ptr + 0x209) = uval_4;
      flag = *(byte *)((int)val_3 + 0x74);
      *(undefined4 *)((int)val_3 + 0x18) = *(undefined4 *)(cctrl_ptr + 0x205);
      *(undefined2 *)((int)val_3 + (uint)flag_2 * -8 + 0x1c) =
           *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8);
      *(uint *)((int)val_3 + -4) = (uint)flag;
      *(undefined4 *)((int)val_3 + -8) = *(undefined4 *)((int)val_3 + 0x50);
      *(undefined4 *)((int)val_3 + -0xc) = *(undefined4 *)((int)val_3 + 0x54);
      *(undefined4 *)((int)val_3 + -0x10) = 0xd462c;
      routes_update_creature_control_0d5624();
      *(undefined4 *)((int)val_3 + -0x10) = 0xd4639;
      val = update_fn_0dc440();
      if (0x10 < val) {
        *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)((int)val_3 + 0xc);
        *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
             *(undefined2 *)((int)val_3 + (uint)flag_2 * -8 + 0x10);
      }
      *(undefined4 *)((int)val_3 + -0x10) = 0xd4663;
      uval_6 = update_fn_0dc440();
      *(undefined4 *)(cctrl_ptr + 499) = uval_6;
      *(undefined4 *)((int)val_3 + -0x10) = 0xd4671;
      val = creature_fn_07e868();
      if (val == 4) {
        val_2 = *(int *)((int)val_3 + 0x34);
        *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)(val_2 + 0xd);
        *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
             *(undefined2 *)(val_2 + 0x11 + (uint)flag_2 * -8);
        *(undefined4 *)(cctrl_ptr + 499) = 0;
      }
      *(undefined4 *)((int)val_3 + -0x10) = 0xd469e;
      uval_6 = update_fn_0dc440();
      *(undefined4 *)(cctrl_ptr + 0x1ef) = uval_6;
      if (val == 1) {
        word_ptr_2 = (undefined4 *)((int)val_3 + -0x10);
        *(undefined4 *)((int)val_3 + -0x10) = 0;
        *(undefined4 *)((int)val_3 + -0x14) = 0xd46bf;
        uval_7 = creature_fn_07f310();
        *(ushort *)(cctrl_ptr + 0x1ff) = uval_7;
        uval_5 = ((uint)uval_7 % 0x100) / 3;
        *(char *)((int)val_3 + 9) = ((char)(uval_5 << 2) - (char)uval_5) + '\x01';
        *(undefined1 *)((int)val_3 + 8) = 0x80;
        uval_3 = (ulonglong)(longlong)((int)(uint)*(ushort *)(cctrl_ptr + 0x1ff) >> 8) / 3;
        *(undefined1 *)((int)val_3 + 10) = 0x80;
        *(undefined4 *)((int)val_3 + 0x58) = 0xffff;
        *(char *)((int)val_3 + 0xb) = ((char)((int)uval_3 << 2) - (char)uval_3) + '\x01';
        *(undefined4 *)((int)val_3 + -0x14) = 0xd4736;
        anger_fn_010c1a();
        uval_5 = extraout_ECX_04;
        while ((uval_5 & 0xff) < 4) {
          *(uint *)((int)val_3 + 0x5c) =
               (uint)(ushort)(short)*(char *)((int)&g_data_0018b67b + (uval_5 & 0xff) * 2 + 3);
          *(uint *)((int)val_3 + 0x50) = (uint)*(ushort *)((int)val_3 + 8);
          *(undefined4 *)((int)val_3 + -0x14) = 0xd4933;
          val_4 = (longdouble)bflib_system_io_fn_0e8d50();
          *(int *)((int)val_3 + 0x50) = (int)ROUND(val_4);
          *(short *)((int)val_3 + 0x10) = (short)*(undefined4 *)((int)val_3 + 0x50);
          *(uint *)((int)val_3 + 0x5c) =
               CONCAT22((short)((uint)*(undefined4 *)((int)val_3 + 0x50) >> 0x10),
                        (short)(char)(&g_data_0018b67f)[extraout_EDX_00]);
          *(uint *)((int)val_3 + 0x50) = (uint)*(ushort *)((int)val_3 + 10);
          *(undefined4 *)((int)val_3 + -0x14) = 0xd4968;
          val_4 = (longdouble)bflib_system_io_fn_0e8d50();
          *(int *)((int)val_3 + 0x50) = (int)ROUND(val_4);
          *(short *)((int)val_3 + 0x12) = (short)*(undefined4 *)((int)val_3 + 0x50);
          ch = extraout_CL_02;
          if ((*(byte *)((int)&g_map_subtiles +
                        (uint)CONCAT11(*(undefined1 *)((int)val_3 + 0x13),
                                       *(undefined1 *)((int)val_3 + 0x11)) * 5) & 0x10) == 0) {
            *(undefined4 *)((int)val_3 + -0x14) = 0xd49a3;
            val = update_fn_0dc440();
            ch = extraout_CL_03;
            if (val < (int)(uint)*(ushort *)((int)val_3 + 0x58)) {
              *(undefined4 *)((int)val_3 + -0x14) = 0xd49c1;
              uval_6 = update_fn_0dc440();
              *(undefined4 *)((int)val_3 + 0x58) = uval_6;
              *(undefined4 *)(cctrl_ptr + 0x205) = *(undefined4 *)((int)val_3 + 0x10);
              *(undefined2 *)(cctrl_ptr + 0x209 + (uint)flag_2 * -8) =
                   *(undefined2 *)((int)val_3 + (uint)flag_2 * -8 + 0x14);
              ch = extraout_CL_04;
            }
          }
          uval_5 = (uint)(byte)(ch + 1);
        }
LAB_000d48cb:
        *(undefined4 *)((int)word_ptr_2 + -4) = 0xd48d5;
        uval_6 = anger_fn_010c1a();
        *str_ptr = '\x03';
        *(undefined4 *)(cctrl_ptr + 0x1f7) = uval_6;
        return 1;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : routes_update_creature_control_0d5624 (Original VA: 0xd5624, Ghidra: FUN_000d5624)
 * Prototype: undefined4 routes_update_creature_control_0d5624(undefined4 param_1,int param_2);
 * Address  : 0xd5624 (Size: 1178 bytes)
 * Module   : routes.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> routes_ve_been_pushing_very_0d1ae0, routes_illegal_block_direction_lookahead_0d29ac, routes_ve_been_pushing_very_0d4188
 * Callees  : 3 -> anger_fn_010d93, creature_fn_07e868, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined4 routes_update_creature_control_0d5624(undefined4 param_1,int param_2)

{
  undefined4 uval;
  bool flag;
  undefined2 uval_2;
  int thing;
  uint uval_3;
  int val;
  short short_val;
  ushort *arg_edx;
  int arg_ebx;
  byte flag_2;
  undefined2 auStack_44 [2];
  undefined4 local_40;
  undefined2 auStack_3c [2];
  undefined2 local_38;
  undefined2 uStack_36;
  ushort auStack_34 [4];
  undefined2 local_2c;
  short local_28;
  short local_26;
  undefined2 local_24;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  int local_18;
  
  flag_2 = 0;
  local_18 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1ea; /* thing->ccontrol_idx */
  uval_3 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2) / 2;
  flag = false;
  short_val = (short)uval_3;
  if (arg_ebx == 0) {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((int)(*(ushort *)(thing + 0xf) - uval_3) >> 8 <= (int)(arg_edx[1] - uval_3) >> 8) /* thing->mappos.val_y */
    goto LAB_000d57f2;
    local_38._0_1_ = (undefined1)*arg_edx;
    local_38._1_1_ = (undefined1)(*arg_edx >> 8);
    uStack_36._1_1_ = (undefined1)((ushort)(*(short *)(thing + 0xf) + short_val + -0x100) >> 8); /* thing->mappos.val_y */
    uStack_36 = CONCAT11(uStack_36._1_1_,0xff) - short_val;
    auStack_34[0] = move_process_map_subtile_0b28e8();
  }
  else if (arg_ebx == 0x400) {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((uint)((int)(arg_edx[1] + uval_3) >> 8) <=
        (uint)((int)(*(ushort *)(thing + 0xf) + uval_3) >> 8)) goto LAB_000d57f2; /* thing->mappos.val_y */
    local_38._0_1_ = (undefined1)*arg_edx;
    local_38._1_1_ = (undefined1)(*arg_edx >> 8);
    uStack_36 = (short)CONCAT21(auStack_34[0],
                                (char)(*(ushort *)(thing + 0xf) - uval_3 >> 8) + '\x01') * 0x100 + /* thing->mappos.val_y */
                short_val;
    auStack_34[0] = move_process_map_subtile_0b28e8();
  }
  else if (arg_ebx == 0x600) {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((int)(*(ushort *)(thing + 0xd) - uval_3) >> 8 <= (int)(*arg_edx - uval_3) >> 8) /* thing->mappos.val_x */
    goto LAB_000d57f2;
    uStack_36._0_1_ = (undefined1)arg_edx[1];
    uStack_36._1_1_ = (undefined1)(arg_edx[1] >> 8);
    local_38._1_1_ = (undefined1)((ushort)(*(short *)(thing + 0xd) + short_val + -0x100) >> 8); /* thing->mappos.val_x */
    local_38 = CONCAT11(local_38._1_1_,0xff) - short_val;
    auStack_34[0] = move_process_map_subtile_0b28e8();
  }
  else {
    local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38);
    uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36);
    if ((arg_ebx != 0x200) ||
       (local_38 = CONCAT11(local_38._1_1_,(undefined1)local_38),
       uStack_36 = CONCAT11(uStack_36._1_1_,(undefined1)uStack_36),
       (uint)((int)(*arg_edx + uval_3) >> 8) <= (uint)((int)(*(ushort *)(thing + 0xd) + uval_3) >> 8)) /* thing->mappos.val_x */
       ) goto LAB_000d57f2;
    uStack_36._0_1_ = (undefined1)arg_edx[1];
    uStack_36._1_1_ = (undefined1)(arg_edx[1] >> 8);
    local_38 = CONCAT11((undefined1)uStack_36,
                        (char)(*(ushort *)(thing + 0xd) - uval_3 >> 8) + '\x01') * 0x100 + short_val; /* thing->mappos.val_x */
    auStack_34[0] = move_process_map_subtile_0b28e8();
  }
  flag = true;
LAB_000d57f2:
  if (flag) {
    if (*(char *)(local_18 + 1) == '\x01') {
      val = anger_fn_010d93();
      short_val = *(short *)(thing + 0xd) + /* thing->mappos.val_x */
              (short)((uint)(param_2 * (&g_slab_attr_table)[(val - 1U & 3) * 0x200]) >> 0x10);
      uval_2 = move_process_map_subtile_0b28e8(short_val);
      val = creature_fn_07e868(short_val,uval_2);
      if (val == 4) {
        local_40 = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
        auStack_3c[(uint)flag_2 * -4] = *(undefined2 *)(thing + 0x11 + (uint)flag_2 * -8);
        *(uint *)(thing + 0xd) = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38)) /* thing->mappos.val_x */
        ;
        *(ushort *)(thing + 0x11 + (uint)flag_2 * -8) = auStack_34[(uint)flag_2 * -4];
        val = anger_fn_010d93();
        uval_3 = val - 1U & 3;
        local_20 = *(short *)(thing + 0xd) + /* thing->mappos.val_x */
                   (short)((uint)(param_2 * (&g_slab_attr_table)[uval_3 * 0x200]) >> 0x10);
        local_1e = (short)((uint)-(param_2 * (int)(&PTR_LAB_00192fe0)[uval_3 * 0x200] >> 8) >> 8) +
                   *(short *)(thing + 0xf); /* thing->mappos.val_y */
        local_1c = move_process_map_subtile_0b28e8();
        val = creature_fn_07e868(short_val,uval_2);
        if (val != 4) {
          *(uint *)arg_edx = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38));
          arg_edx[(uint)flag_2 * -4 + 2] = auStack_34[(uint)flag_2 * -4];
          *(undefined4 *)(thing + 0xd) = local_40; /* thing->mappos.val_x */
          *(undefined2 *)(thing + 0x11 + (uint)flag_2 * -8) = auStack_3c[(uint)flag_2 * -4];
          return 1;
        }
        *(undefined4 *)(thing + 0xd) = local_40; /* thing->mappos.val_x */
        *(undefined2 *)(thing + 0x11 + (uint)flag_2 * -8) = auStack_3c[(uint)flag_2 * -4];
      }
    }
    if (*(char *)(local_18 + 1) == '\x02') {
      val = anger_fn_010d93();
      uval_3 = val + 1U & 3;
      auStack_34[2] =
           *(short *)(thing + 0xd) + /* thing->mappos.val_x */
           (short)((uint)(param_2 * (&g_slab_attr_table)[uval_3 * 0x200]) >> 0x10);
      auStack_34[3] =
           (short)((uint)-(param_2 * (int)(&PTR_LAB_00192fe0)[uval_3 * 0x200] >> 8) >> 8) +
           *(short *)(thing + 0xf); /* thing->mappos.val_y */
      local_2c = move_process_map_subtile_0b28e8();
      val = creature_fn_07e868();
      if (val == 4) {
        uval = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
        auStack_44[(uint)flag_2 * -4] = *(undefined2 *)(thing + 0x11 + (uint)flag_2 * -8);
        *(uint *)(thing + 0xd) = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38)) /* thing->mappos.val_x */
        ;
        *(ushort *)(thing + 0x11 + (uint)flag_2 * -8) = auStack_34[(uint)flag_2 * -4];
        val = anger_fn_010d93();
        uval_3 = val + 1U & 3;
        local_28 = (short)((uint)(param_2 * (&g_slab_attr_table)[uval_3 * 0x200]) >> 0x10) +
                   *(short *)(thing + 0xd); /* thing->mappos.val_x */
        local_26 = (short)((uint)-(param_2 * (int)(&PTR_LAB_00192fe0)[uval_3 * 0x200] >> 8) >> 8) +
                   *(short *)(thing + 0xf); /* thing->mappos.val_y */
        local_24 = move_process_map_subtile_0b28e8();
        val = creature_fn_07e868();
        if (val != 4) {
          *(uint *)arg_edx = CONCAT13(uStack_36._1_1_,CONCAT12((undefined1)uStack_36,local_38));
          arg_edx[(uint)flag_2 * -4 + 2] = auStack_34[(uint)flag_2 * -4];
          *(undefined4 *)(thing + 0xd) = uval; /* thing->mappos.val_x */
          *(undefined2 *)(thing + 0x11 + (uint)flag_2 * -8) = auStack_44[(uint)flag_2 * -4];
          return 1;
        }
        *(undefined4 *)(thing + 0xd) = uval; /* thing->mappos.val_x */
        *(undefined2 *)(thing + 0x11 + (uint)flag_2 * -8) = auStack_44[(uint)flag_2 * -4];
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : routes_fn_0d5ac0 (Original VA: 0xd5ac0, Ghidra: FUN_000d5ac0)
 * Prototype: longlong routes_fn_0d5ac0(void);
 * Address  : 0xd5ac0 (Size: 38 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Module routes.cpp procedure @ 0x0d5ac0
 * Callers  : 4 -> anger_fn_010229, anger_handle_door_thing_0102c0, ariadne_update_creature_control_011e00, creature_fn_082774
 * Callees  : 0 -> 
 ******************************************************************************/
longlong routes_fn_0d5ac0(void)

{
  int arg_eax;
  uint arg_edx;
  
  if (((&g_bss_002e9125)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0') &&
     ((*(byte *)(arg_eax + 0x25) & 0x20) == 0)) {
    return (ulonglong)arg_edx << 0x20;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : routes_process_map_subtile_0d5af0 (Original VA: 0xd5af0, Ghidra: FUN_000d5af0)
 * Prototype: void routes_process_map_subtile_0d5af0(void);
 * Address  : 0xd5af0 (Size: 2931 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d6012) */
/* WARNING: Removing unreachable block (ram,0x000d65b2) */

void routes_process_map_subtile_0d5af0(void)

{
  bool flag;
  int thing_ptr;
  byte *byte_ptr;
  int val;
  uint thing_ptr_2;
  uint thing_ptr_3;
  uint uval;
  uint uval_2;
  undefined2 uval_3;
  int val_2;
  int local_b4;
  uint local_b0;
  uint local_a8;
  uint local_80;
  uint local_78;
  int local_60;
  int local_5c;
  undefined1 local_50;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_80 = 0;
  local_b4 = 0;
  local_30 = 3;
  g_bss_001b89b8 = CONCAT22(0x200,(undefined2)g_bss_001b89b8);
  do {
    local_34 = local_b4 * 2;
    local_38 = 4;
    do {
      *(short *)(&g_bss_001b89bc + local_34) = (short)local_80;
      if (local_80 < (uint)(g_bss_001b89b8 >> 0x10)) {
        local_a8 = 0;
        local_3c = 0;
        local_b0 = local_80;
        do {
          val_2 = (*(int *)(&g_data_001926d6 + local_3c) >> 0x18) + local_30 + 1;
          uval = (*(int *)(&g_data_001926d5 + local_3c) >> 0x18) + local_38;
          thing_ptr = (val_2 * 0x100 + uval) * 5;
          uval_3 = (undefined2)local_b4;
          if ((*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3ff800) == 0) {
            thing_ptr_2 = local_a8 & 0xff;
            if (((thing_ptr_2 != 4) &&
                (thing_ptr_2 = *(uint *)((int)&g_map_subtiles +
                                  (((*(int *)(&g_data_001926d6 + thing_ptr_2 * 2) >> 0x18) + val_2) * 0x100
                                  + (*(int *)(&g_data_001926d5 + thing_ptr_2 * 2) >> 0x18) + uval) * 5 + 1),
                (thing_ptr_2 & 0x3ff800) != 0)) && ((int)local_b0 < g_bss_001b89b8 >> 0x10)) {
              for (thing_ptr = (&g_thing_ptrs)[(thing_ptr_2 & 0x3fffff) >> 0xb]; thing_ptr != g_thing_ptrs;
                  thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
                if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
                  val = local_b0 * 0xd;
                  (&g_bss_001b93f6)[val] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
                  (&g_bss_001b93f7)[val] = *(undefined1 *)(thing_ptr + 0x1a);
                  local_50 = (undefined1)((ushort)*(undefined2 *)(thing_ptr + 0x13) >> 8); /* thing->anim_sprite */
                  (&g_bss_001b93f8)[val] = local_50;
                  (&g_bss_001b93ef)[val] = (undefined1)local_a8;
                  (&g_bss_001b93ec)[val] = 0;
                  *(undefined2 *)(&g_bss_001b93ed + val) = uval_3;
                  *(short *)(&g_bss_001b93f0 + val) =
                       *(short *)(thing_ptr + 0xd) + (short)uval * -0x100; /* thing->mappos.val_x */
                  *(short *)(&g_bss_001b93f2 + val) =
                       *(short *)(thing_ptr + 0xf) + (short)val_2 * -0x100; /* thing->mappos.val_y */
                  *(undefined2 *)(&g_bss_001b93f4 + val) = *(undefined2 *)(thing_ptr + 0x11);
                  flag = true;
                  goto LAB_000d5f96;
                }
              }
            }
          }
          else if ((int)local_b0 < g_bss_001b89b8 >> 0x10) {
            for (thing_ptr = (&g_thing_ptrs)
                         [(*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3fffff) >> 0xb];
                thing_ptr != g_thing_ptrs; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
              if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
                val = local_b0 * 0xd;
                (&g_bss_001b93f6)[val] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
                (&g_bss_001b93f7)[val] = *(undefined1 *)(thing_ptr + 0x1a);
                local_50 = (undefined1)((ushort)*(undefined2 *)(thing_ptr + 0x13) >> 8); /* thing->anim_sprite */
                (&g_bss_001b93f8)[val] = local_50;
                (&g_bss_001b93ef)[val] = (undefined1)local_a8;
                (&g_bss_001b93ec)[val] = 0;
                *(undefined2 *)(&g_bss_001b93ed + val) = uval_3;
                *(short *)(&g_bss_001b93f0 + val) = *(short *)(thing_ptr + 0xd) + (short)uval * -0x100; /* thing->mappos.val_x */
                *(short *)(&g_bss_001b93f2 + val) = *(short *)(thing_ptr + 0xf) + (short)val_2 * -0x100 /* thing->mappos.val_y */
                ;
                *(undefined2 *)(&g_bss_001b93f4 + val) = *(undefined2 *)(thing_ptr + 0x11);
                flag = true;
                goto LAB_000d5f96;
              }
            }
          }
          flag = false;
LAB_000d5f96:
          if (flag) {
            local_b0 = local_b0 + 1;
          }
          byte_ptr = &g_bss_001bd61b;
          do {
            if (g_bss_001b89b8 >> 0x10 <= (int)local_b0) goto LAB_000d5ee5;
            if ((((*byte_ptr & 1) != 0) && (byte_ptr[0x29] == uval)) &&
               (thing_ptr_2 = g_bss_001aea00, CONCAT31((int3)(uval >> 8),byte_ptr[0x2b]) == val_2)) {
              for (; thing_ptr_2 < g_bss_001b09f8; thing_ptr_2 = thing_ptr_2 + 0x6b) {
                if ((*(short *)(thing_ptr_2 + 0x62) == *(short *)(byte_ptr + 0xe)) &&
                   (*(char *)(thing_ptr_2 + 0x1f) != '\x0e')) goto LAB_000d5da7; /* thing->class_id */
              }
              thing_ptr_2 = 0;
LAB_000d5da7:
              if (thing_ptr_2 == 0) {
                thing_ptr = local_b0 * 0xd;
                (&g_bss_001b93ec)[thing_ptr] = 1;
                *(undefined2 *)(&g_bss_001b93ed + thing_ptr) = uval_3;
                (&g_bss_001b93ef)[thing_ptr] = (undefined1)local_a8;
                *(short *)(&g_bss_001b93f0 + thing_ptr) =
                     (short)((uint)*(ushort *)(byte_ptr + 0x28) + uval * -0x100);
                *(short *)(&g_bss_001b93f2 + thing_ptr) =
                     (short)((uint)*(ushort *)(byte_ptr + 0x2a) + val_2 * -0x100);
                uval_3 = *(undefined2 *)(byte_ptr + 0x2c);
                (&g_bss_001b93f6)[thing_ptr] = 0;
                *(undefined2 *)(&g_bss_001b93f4 + thing_ptr) = uval_3;
                (&g_bss_001b93f7)[thing_ptr] = byte_ptr[2];
                (&g_bss_001b93f8)[thing_ptr] = (char)((ushort)*(undefined2 *)(byte_ptr + 0x16) >> 8);
                flag = true;
                goto LAB_000d5ee7;
              }
            }
            byte_ptr = byte_ptr + 0x2e;
          } while (byte_ptr < &g_bss_001c1dcd);
          thing_ptr_2 = local_a8 & 0xff;
          if (thing_ptr_2 != 4) {
            byte_ptr = &g_bss_001bd61b;
            uval_2 = uval + (*(int *)(&g_data_001926d5 + thing_ptr_2 * 2) >> 0x18);
            do {
              if (g_bss_001b89b8 >> 0x10 <= (int)local_b0) break;
              if ((((*byte_ptr & 1) != 0) && (byte_ptr[0x29] == uval_2)) &&
                 (thing_ptr_3 = g_bss_001aea00,
                 CONCAT31((int3)(uval_2 >> 8),byte_ptr[0x2b]) ==
                 val_2 + (*(int *)(&g_data_001926d6 + thing_ptr_2 * 2) >> 0x18))) {
                for (; thing_ptr_3 < g_bss_001b09f8; thing_ptr_3 = thing_ptr_3 + 0x6b) {
                  if ((*(short *)(thing_ptr_3 + 0x62) == *(short *)(byte_ptr + 0xe)) &&
                     (*(char *)(thing_ptr_3 + 0x1f) != '\x0e')) goto LAB_000d5e84; /* thing->class_id */
                }
                thing_ptr_3 = 0;
LAB_000d5e84:
                if (thing_ptr_3 == 0) {
                  thing_ptr = local_b0 * 0xd;
                  (&g_bss_001b93ec)[thing_ptr] = 1;
                  *(undefined2 *)(&g_bss_001b93ed + thing_ptr) = uval_3;
                  (&g_bss_001b93ef)[thing_ptr] = (undefined1)local_a8;
                  *(short *)(&g_bss_001b93f0 + thing_ptr) =
                       (short)((uint)*(ushort *)(byte_ptr + 0x28) + uval * -0x100);
                  *(short *)(&g_bss_001b93f2 + thing_ptr) =
                       (short)((uint)*(ushort *)(byte_ptr + 0x2a) + val_2 * -0x100);
                  uval_3 = *(undefined2 *)(byte_ptr + 0x2c);
                  (&g_bss_001b93f6)[thing_ptr] = 0;
                  *(undefined2 *)(&g_bss_001b93f4 + thing_ptr) = uval_3;
                  (&g_bss_001b93f7)[thing_ptr] = byte_ptr[2];
                  (&g_bss_001b93f8)[thing_ptr] = (char)((ushort)*(undefined2 *)(byte_ptr + 0x16) >> 8);
                  flag = true;
                  goto LAB_000d5ee7;
                }
              }
              byte_ptr = byte_ptr + 0x2e;
            } while (byte_ptr < &g_bss_001c1dcd);
          }
LAB_000d5ee5:
          flag = false;
LAB_000d5ee7:
          if (flag) {
            local_b0 = local_b0 + 1;
          }
          local_3c = local_3c + 2;
          local_a8 = local_a8 + 1;
          local_80 = local_b0;
        } while (local_a8 < 9);
      }
      if (local_80 == *(int *)((int)&g_bss_001b89b8 + local_34 + 2) >> 0x10) {
        *(undefined2 *)(&g_bss_001b89bc + local_34) = 0xffff;
      }
      local_34 = local_34 + 2;
      local_b4 = local_b4 + 1;
      local_38 = local_38 + 6;
    } while (local_38 != 0xac);
    local_30 = local_30 + 6;
  } while (local_30 != 0xff);
  local_5c = 3;
  do {
    local_60 = local_b4 * 2;
    local_28 = 0xac;
    do {
      *(short *)(&g_bss_001b89bc + local_60) = (short)local_80;
      if (local_80 < (uint)(g_bss_001b89b8 >> 0x10)) {
        local_78 = 0;
        local_2c = 0;
        do {
          val_2 = (*(int *)(&g_data_001926d6 + local_2c) >> 0x18) + local_5c + 1;
          uval = (*(int *)(&g_data_001926d5 + local_2c) >> 0x18) + local_28;
          thing_ptr = (val_2 * 0x100 + uval) * 5;
          uval_3 = (undefined2)local_b4;
          if ((*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3ff800) == 0) {
            thing_ptr_2 = local_78 & 0xff;
            if (((thing_ptr_2 != 4) &&
                (thing_ptr_2 = *(uint *)((int)&g_map_subtiles +
                                  (((*(int *)(&g_data_001926d6 + thing_ptr_2 * 2) >> 0x18) + val_2) * 0x100
                                  + (*(int *)(&g_data_001926d5 + thing_ptr_2 * 2) >> 0x18) + uval) * 5 + 1),
                (thing_ptr_2 & 0x3ff800) != 0)) && ((int)local_80 < g_bss_001b89b8 >> 0x10)) {
              for (thing_ptr = (&g_thing_ptrs)[(thing_ptr_2 & 0x3fffff) >> 0xb]; thing_ptr != g_thing_ptrs;
                  thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
                if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
                  val = local_80 * 0xd;
                  (&g_bss_001b93f6)[val] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
                  (&g_bss_001b93f7)[val] = *(undefined1 *)(thing_ptr + 0x1a);
                  local_50 = (undefined1)((ushort)*(undefined2 *)(thing_ptr + 0x13) >> 8); /* thing->anim_sprite */
                  (&g_bss_001b93f8)[val] = local_50;
                  (&g_bss_001b93ef)[val] = (undefined1)local_78;
                  (&g_bss_001b93ec)[val] = 0;
                  *(undefined2 *)(&g_bss_001b93ed + val) = uval_3;
                  *(short *)(&g_bss_001b93f0 + val) =
                       *(short *)(thing_ptr + 0xd) + (short)uval * -0x100; /* thing->mappos.val_x */
                  *(short *)(&g_bss_001b93f2 + val) =
                       *(short *)(thing_ptr + 0xf) + (short)val_2 * -0x100; /* thing->mappos.val_y */
                  *(undefined2 *)(&g_bss_001b93f4 + val) = *(undefined2 *)(thing_ptr + 0x11);
                  flag = true;
                  goto LAB_000d6536;
                }
              }
            }
          }
          else if ((int)local_80 < g_bss_001b89b8 >> 0x10) {
            for (thing_ptr = (&g_thing_ptrs)
                         [(*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3fffff) >> 0xb];
                thing_ptr != g_thing_ptrs; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
              if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
                val = local_80 * 0xd;
                (&g_bss_001b93f6)[val] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
                (&g_bss_001b93f7)[val] = *(undefined1 *)(thing_ptr + 0x1a);
                local_50 = (undefined1)((ushort)*(undefined2 *)(thing_ptr + 0x13) >> 8); /* thing->anim_sprite */
                (&g_bss_001b93f8)[val] = local_50;
                (&g_bss_001b93ef)[val] = (undefined1)local_78;
                (&g_bss_001b93ec)[val] = 0;
                *(undefined2 *)(&g_bss_001b93ed + val) = uval_3;
                *(short *)(&g_bss_001b93f0 + val) = *(short *)(thing_ptr + 0xd) + (short)uval * -0x100; /* thing->mappos.val_x */
                *(short *)(&g_bss_001b93f2 + val) = *(short *)(thing_ptr + 0xf) + (short)val_2 * -0x100 /* thing->mappos.val_y */
                ;
                *(undefined2 *)(&g_bss_001b93f4 + val) = *(undefined2 *)(thing_ptr + 0x11);
                flag = true;
                goto LAB_000d6536;
              }
            }
          }
          flag = false;
LAB_000d6536:
          if (flag) {
            local_80 = local_80 + 1;
          }
          byte_ptr = &g_bss_001bd61b;
          do {
            if (g_bss_001b89b8 >> 0x10 <= (int)local_80) goto LAB_000d6479;
            if ((((*byte_ptr & 1) != 0) && (byte_ptr[0x29] == uval)) &&
               (thing_ptr_2 = g_bss_001aea00, CONCAT31((int3)(uval >> 8),byte_ptr[0x2b]) == val_2)) {
              for (; thing_ptr_2 < g_bss_001b09f8; thing_ptr_2 = thing_ptr_2 + 0x6b) {
                if ((*(short *)(thing_ptr_2 + 0x62) == *(short *)(byte_ptr + 0xe)) &&
                   (*(char *)(thing_ptr_2 + 0x1f) != '\x0e')) goto LAB_000d633b; /* thing->class_id */
              }
              thing_ptr_2 = 0;
LAB_000d633b:
              if (thing_ptr_2 == 0) {
                thing_ptr = local_80 * 0xd;
                (&g_bss_001b93ec)[thing_ptr] = 1;
                *(undefined2 *)(&g_bss_001b93ed + thing_ptr) = uval_3;
                (&g_bss_001b93ef)[thing_ptr] = (undefined1)local_78;
                *(short *)(&g_bss_001b93f0 + thing_ptr) =
                     (short)((uint)*(ushort *)(byte_ptr + 0x28) + uval * -0x100);
                *(short *)(&g_bss_001b93f2 + thing_ptr) =
                     (short)((uint)*(ushort *)(byte_ptr + 0x2a) + val_2 * -0x100);
                uval_3 = *(undefined2 *)(byte_ptr + 0x2c);
                (&g_bss_001b93f6)[thing_ptr] = 0;
                *(undefined2 *)(&g_bss_001b93f4 + thing_ptr) = uval_3;
                (&g_bss_001b93f7)[thing_ptr] = byte_ptr[2];
                (&g_bss_001b93f8)[thing_ptr] = (char)((ushort)*(undefined2 *)(byte_ptr + 0x16) >> 8);
                flag = true;
                goto LAB_000d647b;
              }
            }
            byte_ptr = byte_ptr + 0x2e;
          } while (byte_ptr < &g_bss_001c1dcd);
          thing_ptr_2 = local_78 & 0xff;
          if (thing_ptr_2 != 4) {
            byte_ptr = &g_bss_001bd61b;
            uval_2 = uval + (*(int *)(&g_data_001926d5 + thing_ptr_2 * 2) >> 0x18);
            do {
              if (g_bss_001b89b8 >> 0x10 <= (int)local_80) break;
              if ((((*byte_ptr & 1) != 0) && (byte_ptr[0x29] == uval_2)) &&
                 (thing_ptr_3 = g_bss_001aea00,
                 CONCAT31((int3)(uval_2 >> 8),byte_ptr[0x2b]) ==
                 val_2 + (*(int *)(&g_data_001926d6 + thing_ptr_2 * 2) >> 0x18))) {
                for (; thing_ptr_3 < g_bss_001b09f8; thing_ptr_3 = thing_ptr_3 + 0x6b) {
                  if ((*(short *)(thing_ptr_3 + 0x62) == *(short *)(byte_ptr + 0xe)) &&
                     (*(char *)(thing_ptr_3 + 0x1f) != '\x0e')) goto LAB_000d6418; /* thing->class_id */
                }
                thing_ptr_3 = 0;
LAB_000d6418:
                if (thing_ptr_3 == 0) {
                  thing_ptr = local_80 * 0xd;
                  (&g_bss_001b93ec)[thing_ptr] = 1;
                  *(undefined2 *)(&g_bss_001b93ed + thing_ptr) = uval_3;
                  (&g_bss_001b93ef)[thing_ptr] = (undefined1)local_78;
                  *(short *)(&g_bss_001b93f0 + thing_ptr) =
                       (short)((uint)*(ushort *)(byte_ptr + 0x28) + uval * -0x100);
                  *(short *)(&g_bss_001b93f2 + thing_ptr) =
                       (short)((uint)*(ushort *)(byte_ptr + 0x2a) + val_2 * -0x100);
                  uval_3 = *(undefined2 *)(byte_ptr + 0x2c);
                  (&g_bss_001b93f6)[thing_ptr] = 0;
                  *(undefined2 *)(&g_bss_001b93f4 + thing_ptr) = uval_3;
                  (&g_bss_001b93f7)[thing_ptr] = byte_ptr[2];
                  (&g_bss_001b93f8)[thing_ptr] = (char)((ushort)*(undefined2 *)(byte_ptr + 0x16) >> 8);
                  flag = true;
                  goto LAB_000d647b;
                }
              }
              byte_ptr = byte_ptr + 0x2e;
            } while (byte_ptr < &g_bss_001c1dcd);
          }
LAB_000d6479:
          flag = false;
LAB_000d647b:
          if (flag) {
            local_80 = local_80 + 1;
          }
          local_2c = local_2c + 2;
          local_78 = local_78 + 1;
        } while (local_78 < 9);
      }
      if (local_80 == *(int *)((int)&g_bss_001b89b8 + local_60 + 2) >> 0x10) {
        *(undefined2 *)(&g_bss_001b89bc + local_60) = 0xffff;
      }
      local_60 = local_60 + 2;
      local_b4 = local_b4 + 1;
      local_28 = local_28 + 6;
    } while (local_28 != 0xdc);
    local_5c = local_5c + 6;
    if (local_5c == 99) {
      g_bss_001b89b8 = CONCAT22((short)local_80,(undefined2)g_bss_001b89b8);
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : routes_fn_0d6664 (Original VA: 0xd6664, Ghidra: FUN_000d6664)
 * Prototype: void routes_fn_0d6664(void);
 * Address  : 0xd6664 (Size: 251 bytes)
 * Module   : routes.cpp [address_order_boundary_interpolation]
 * Purpose  : Module routes.cpp procedure @ 0x0d6664
 * Callers  : 0 -> 
 * Callees  : 1 -> light_attempt_delete_light_0acce4
 ******************************************************************************/
void routes_fn_0d6664(void)

{
  ushort uval;
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int val_4;
  undefined1 *word_ptr;
  int arg_edx;
  
  val = arg_eax * 3 + -1;
  if (val < 0) {
    val = 0;
  }
  val_2 = arg_edx * 3 + -1;
  if (val_2 < 0) {
    val_2 = 0;
  }
  val_3 = arg_eax * 3 + 4;
  if (0xff < val_3) {
    val_3 = 0xff;
  }
  val_4 = arg_edx * 3 + 4;
  if (0xff < val_4) {
    val_4 = 0xff;
  }
  word_ptr = &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e;
  if (&g_bss_001bd5ed < &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e) {
    do {
      uval = *(ushort *)(word_ptr + 0x26);
      if ((((arg_edx * 0x55 + arg_eax == *(int *)(word_ptr + 0x12)) &&
           (val <= (int)(uint)(byte)word_ptr[0x29])) && ((int)(uint)(byte)word_ptr[0x29] <= val_3)) &&
         ((val_2 <= (int)(uint)(byte)word_ptr[0x2b] && ((int)(uint)(byte)word_ptr[0x2b] <= val_4)))) {
        light_attempt_delete_light_0acce4();
      }
      word_ptr = &g_bss_001bd5ed + (uint)uval * 0x2e;
    } while (&g_bss_001bd5ed < &g_bss_001bd5ed + (uint)uval * 0x2e);
  }
  return;
}

