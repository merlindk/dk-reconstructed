/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: light.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 54
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : light_update_creature_control_0ac094 (Original VA: 0xac094, Ghidra: FUN_000ac094)
 * Prototype: undefined8 light_update_creature_control_0ac094(void);
 * Address  : 0xac094 (Size: 264 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> dungeon_attempt_get_random_position_0239ee, person_update_creature_control_064ae7, move_fn_0b3c90, room_process_dungeon_room_0c9b2c, room_number_slabs_room_zero_0cc968
 ******************************************************************************/
undefined8 light_update_creature_control_0ac094(void)

{
  int room_off;
  char ch;
  int thing;
  undefined4 arg_edx;
  undefined1 *room_ptr;
  
  if (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xab) & 1) == 0) && /* thing->ccontrol_idx */
     (((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 0xf) == 0)) { /* thing->index_or_angle */
    room_off = (uint)(byte)(&g_bss_002d33c8)
                        [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                         (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] * 0x45;
    room_ptr = &g_rooms + room_off;
    if ((room_ptr != (undefined1 *)0x0) &&
       ((*(short *)(&g_room_slabs_count + room_off) != 0xd ||
        ((&g_bss_002ddd1e)[room_off] != *(char *)(thing + 6))))) { /* thing->owner */
      room_ptr = (undefined1 *)0x0;
    }
    if (room_ptr == (undefined1 *)0x0) {
      room_ptr = (undefined1 *)room_process_dungeon_room_0c9b2c();
    }
    if (room_ptr == (undefined1 *)0x0) {
      ch = dungeon_attempt_get_random_position_0239ee();
    }
    else {
      ch = room_number_slabs_room_zero_0cc968();
    }
    if (ch != '\0') {
      move_fn_0b3c90();
      person_update_creature_control_064ae7();
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : light_update_creature_control_0ac19c (Original VA: 0xac19c, Ghidra: FUN_000ac19c)
 * Prototype: undefined8 light_update_creature_control_0ac19c(void);
 * Address  : 0xac19c (Size: 125 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> person_update_creature_control_064ae7, move_fn_0b4ac4
 ******************************************************************************/
undefined8 light_update_creature_control_0ac19c(void)

{
  char ch;
  int thing;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xab) & 1) == 0) { /* thing->ccontrol_idx */
    uStack_14 = 0;
    ch = move_fn_0b4ac4();
    if ((ch == '\x01') || (word_ptr = &uStack_14, ch == -1)) {
      person_update_creature_control_064ae7();
      word_ptr = &uStack_14;
    }
  }
  return CONCAT44(*(undefined4 *)((int)word_ptr + 4),1);
}

/******************************************************************************
 * Function : light_fn_0ac370 (Original VA: 0xac370, Ghidra: FUN_000ac370)
 * Prototype: void light_fn_0ac370(void);
 * Address  : 0xac370 (Size: 697 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0ac370
 * Callers  : 2 -> frontmap_fn_031599, frontmap_number_players_0322e9
 * Callees  : 0 -> 
 ******************************************************************************/
void light_fn_0ac370(void)

{
  int arg_eax;
  int val;
  int val_2;
  int arg_edx;
  int val_3;
  int val_4;
  undefined1 *word_ptr;
  int arg_ebx;
  int val_5;
  undefined1 *word_ptr_2;
  int val_6;
  int val_7;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  val = 0x100 - arg_ebx;
  val_2 = arg_eax + g_frontnet_bss_00335168 + arg_edx * 0x500;
  val_3 = (arg_eax - g_frontnet_bss_00335182) + 1;
  local_2c = 0;
  word_ptr_2 = (undefined1 *)
           (g_display_bss_003d9818 + (arg_eax - g_frontnet_bss_00335182) + g_screen_pitch * (arg_edx - g_frontnet_bss_00335186));
  local_30 = (arg_edx - g_frontnet_bss_00335186) + 1;
  val_4 = g_screen_pitch - val_3;
  word_ptr = word_ptr_2;
  while (local_30 = local_30 + -1, -1 < local_30) {
    val_6 = 0;
    val_5 = val_3;
    while (val_5 = val_5 + -1, -1 < val_5) {
      val_7 = val_6 >> 8;
      val_6 = val_6 + val;
      *word_ptr = *(undefined1 *)((val_2 + (local_2c >> 8) * -0x500) - val_7);
      word_ptr = word_ptr + -1;
    }
    local_2c = local_2c + val;
    word_ptr = word_ptr + -val_4;
  }
  val_3 = (g_screen_width - (arg_eax - g_frontnet_bss_00335182)) + -1;
  local_20 = 0;
  val_4 = g_screen_pitch + val_3;
  local_24 = (arg_edx - g_frontnet_bss_00335186) + 1;
  word_ptr = word_ptr_2;
  while (local_24 = local_24 - 1, local_24 < 0x80000000) {
    val_6 = 0;
    val_5 = val_3;
    while (val_5 = val_5 + -1, -1 < val_5) {
      val_7 = val_6 >> 8;
      val_6 = val_6 + val;
      *word_ptr = *(undefined1 *)(val_7 + val_2 + (local_20 >> 8) * -0x500);
      word_ptr = word_ptr + 1;
    }
    local_20 = local_20 + val;
    word_ptr = word_ptr + -val_4;
  }
  word_ptr_2 = word_ptr_2 + g_screen_pitch;
  val_3 = (arg_eax - g_frontnet_bss_00335182) + 1;
  local_34 = 0;
  local_1c = (g_screen_height - (arg_edx - g_frontnet_bss_00335186)) + -1;
  val_4 = g_screen_pitch + val_3;
  word_ptr = word_ptr_2;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    val_6 = 0;
    val_5 = val_3;
    while (val_5 = val_5 + -1, -1 < val_5) {
      val_7 = val_6 >> 8;
      val_6 = val_6 + val;
      *word_ptr = *(undefined1 *)(((local_34 >> 8) * 0x500 + val_2) - val_7);
      word_ptr = word_ptr + -1;
    }
    local_34 = local_34 + val;
    word_ptr = word_ptr + val_4;
  }
  val_3 = (g_screen_width - (arg_eax - g_frontnet_bss_00335182)) + -1;
  local_28 = 0;
  local_18 = (g_screen_height - (arg_edx - g_frontnet_bss_00335186)) - 1;
  val_4 = g_screen_pitch - val_3;
  while (local_18 = local_18 - 1, local_18 < 0x80000000) {
    val_6 = 0;
    val_5 = val_3;
    while (val_5 = val_5 + -1, -1 < val_5) {
      val_7 = val_6 >> 8;
      val_6 = val_6 + val;
      *word_ptr_2 = *(undefined1 *)(val_7 + (local_28 >> 8) * 0x500 + val_2);
      word_ptr_2 = word_ptr_2 + 1;
    }
    local_28 = local_28 + val;
    word_ptr_2 = word_ptr_2 + val_4;
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0ac630 (Original VA: 0xac630, Ghidra: FUN_000ac630)
 * Prototype: void light_fn_0ac630(void);
 * Address  : 0xac630 (Size: 97 bytes)
 * Module   : light.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module light.cpp procedure @ 0x0ac630
 * Callers  : 6 -> file_fn_029b54, inits_roll_action_random_040d25, inits_update_player_view_state_040db9, setup_load_core_game_data, structs_fn_072810, light_fn_0b20e0
 * Callees  : 2 -> light_attempt_delete_light_0acce4, light_fn_0b10c0
 ******************************************************************************/
void light_fn_0ac630(void)

{
  byte flag;
  int val;
  int val_2;
  byte flag_2;
  byte *loop_i;
  byte *extraout_EDX;
  
  for (loop_i = &g_bss_001bd5ed; loop_i < &g_bss_001c1dcd; loop_i = loop_i + 0x2e) {
    if ((*loop_i & 1) != 0) {
      light_attempt_delete_light_0acce4();
      loop_i = extraout_EDX;
    }
  }
  if (g_bss_001e31fa == '\0') {
    light_fn_0b10c0();
    flag_2 = 0x1f;
    val = 0;
    do {
      val_2 = val + 4;
      flag = flag_2 & 0x1f;
      flag_2 = flag_2 - 1;
      *(int *)((int)&g_bss_00388e3c + val) = 1 << flag;
      val = val_2;
    } while (val_2 != 0x80);
    g_bss_001e31fa = '\x01';
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0ac694 (Original VA: 0xac694, Ghidra: FUN_000ac694)
 * Prototype: void light_fn_0ac694(void);
 * Address  : 0xac694 (Size: 851 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0ac694
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 1 -> light_maintain_gui_button_state_0adbc0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void light_fn_0ac694(void)

{
  int val;
  int arg_eax;
  uint arg_ecx;
  uint loop_i;
  ushort uval;
  uint arg_edx;
  undefined4 *word_ptr;
  int arg_ebx;
  byte *byte_ptr;
  int val_2;
  undefined4 *word_ptr_2;
  uint loop_i_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  byte flag;
  
  flag = 0;
  g_bss_00388e28 = 0;
  g_bss_00388e2c = 0;
  g_bss_00388e30 = 0;
  g_bss_00388e34 = 0;
  val_2 = (arg_ebx - arg_eax) / 2 + 1;
  val = (int)(arg_ecx - arg_edx) / 2 + 1;
  if ((g_bss_001e31f9 != '\0') &&
     (byte_ptr = &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e, &g_bss_001bd5ed < byte_ptr)) {
    do {
      if (((*byte_ptr & 8) != 0) || ((*byte_ptr & 0x80) != 0)) {
        g_bss_00388e34 = g_bss_00388e34 + 1;
        loop_i_2 = (arg_eax + val_2) - (uint)byte_ptr[0x29];
        loop_i = (int)loop_i_2 >> 0x1f;
        if (((int)((loop_i_2 ^ loop_i) - loop_i) < (int)((uint)byte_ptr[5] + val_2)) &&
           (loop_i_2 = (val + arg_edx) - (uint)byte_ptr[0x2b], loop_i = (int)loop_i_2 >> 0x1f,
           (int)((loop_i_2 ^ loop_i) - loop_i) < (int)((uint)byte_ptr[5] + val))) {
          g_bss_00388e30 = g_bss_00388e30 + 1;
          light_maintain_gui_button_state_0adbc0();
          *byte_ptr = *byte_ptr & 0x77;
        }
      }
      byte_ptr = &g_bss_001bd5ed + (uint)*(ushort *)(byte_ptr + 0x26) * 0x2e;
    } while (&g_bss_001bd5ed < byte_ptr);
  }
  val_2 = arg_edx * 0x100 + arg_eax;
  word_ptr = (undefined4 *)(&g_bss_001e3203 + val_2);
  word_ptr_2 = (undefined4 *)(&g_bss_001c31f5 + val_2 * 2);
  for (loop_i_2 = arg_edx; loop_i_2 <= arg_ecx; loop_i_2 = loop_i_2 + 1) {
    word_ptr_3 = word_ptr_2;
    word_ptr_4 = word_ptr;
    for (loop_i = (arg_ebx - arg_eax & 0x7fffffffU) >> 1; loop_i != 0; loop_i = loop_i - 1) {
      *word_ptr_4 = *word_ptr_3;
      word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
    }
    for (loop_i = (arg_ebx - arg_eax) * 2 & 3; loop_i != 0; loop_i = loop_i - 1) {
      *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
      word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
      word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag * -2 + 1);
    }
    word_ptr = word_ptr + 0x80;
    word_ptr_2 = word_ptr_2 + 0x80;
  }
  if (g_bss_001e31f9 != '\0') {
    val_2 = (arg_ebx - arg_eax) / 2 + 1;
    val = (int)(arg_ecx - arg_edx) / 2 + 1;
    byte_ptr = &g_bss_001bd5ed + g_bss_002e6f16 * 0x2e;
    if (&g_bss_001bd5ed < byte_ptr) {
      do {
        loop_i_2 = (arg_eax + val_2) - (uint)byte_ptr[0x29];
        loop_i = (int)loop_i_2 >> 0x1f;
        if (((int)((loop_i_2 ^ loop_i) - loop_i) < (int)(val_2 + (uint)byte_ptr[5])) &&
           (loop_i_2 = (val + arg_edx) - (uint)byte_ptr[0x2b], loop_i = (int)loop_i_2 >> 0x1f,
           (int)((loop_i_2 ^ loop_i) - loop_i) < (int)((uint)byte_ptr[5] + val))) {
          g_bss_00388e28 = g_bss_00388e28 + 1;
          if ((*byte_ptr & 8) == 0) {
            g_bss_00388e2c = g_bss_00388e2c + 1;
          }
          if ((*byte_ptr & 0x10) != 0) {
            if (byte_ptr[6] == 1) {
              uval = *(ushort *)(byte_ptr + 0x20);
              if ((uint)*(ushort *)(byte_ptr + 0x16) + (uint)*(ushort *)(byte_ptr + 0x1e) < (uint)uval)
              {
                *(short *)(byte_ptr + 0x16) = *(short *)(byte_ptr + 0x16) + *(short *)(byte_ptr + 0x1e);
              }
              else {
                byte_ptr[6] = 2;
LAB_000ac964:
                *(ushort *)(byte_ptr + 0x16) = uval;
              }
            }
            else {
              uval = *(ushort *)(byte_ptr + 0x22);
              if ((int)((uint)*(ushort *)(byte_ptr + 0x16) - (uint)*(ushort *)(byte_ptr + 0x1e)) <=
                  (int)(uint)uval) {
                byte_ptr[6] = 1;
                goto LAB_000ac964;
              }
              *(short *)(byte_ptr + 0x16) = *(short *)(byte_ptr + 0x16) - *(short *)(byte_ptr + 0x1e);
            }
            *byte_ptr = *byte_ptr | 8;
          }
          if ((*byte_ptr & 0x20) != 0) {
            if (byte_ptr[3] == 1) {
              flag = byte_ptr[7];
              if ((uint)byte_ptr[4] + (uint)byte_ptr[2] < (uint)flag) {
                byte_ptr[2] = byte_ptr[2] + byte_ptr[4];
              }
              else {
                byte_ptr[3] = 2;
LAB_000ac9be:
                byte_ptr[2] = flag;
              }
            }
            else {
              flag = byte_ptr[8];
              if ((int)((uint)byte_ptr[2] - (uint)byte_ptr[4]) <= (int)(uint)flag) {
                byte_ptr[3] = 1;
                goto LAB_000ac9be;
              }
              byte_ptr[2] = byte_ptr[2] - byte_ptr[4];
            }
            *byte_ptr = *byte_ptr | 8;
          }
          if (*(short *)(byte_ptr + 0x1c) != 0) {
            *(short *)(byte_ptr + 0x18) = *(short *)(byte_ptr + 0x18) + *(short *)(byte_ptr + 0x1c);
            *byte_ptr = *byte_ptr | 8;
          }
          light_maintain_gui_button_state_0adbc0();
        }
        byte_ptr = &g_bss_001bd5ed + (uint)*(ushort *)(byte_ptr + 0x26) * 0x2e;
      } while (&g_bss_001bd5ed < byte_ptr);
    }
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0ac9e8 (Original VA: 0xac9e8, Ghidra: FUN_000ac9e8)
 * Prototype: void light_fn_0ac9e8(void);
 * Address  : 0xac9e8 (Size: 36 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0ac9e8
 * Callers  : 0 -> 
 * Callees  : 1 -> light_fn_0b087c
 ******************************************************************************/
void light_fn_0ac9e8(void)

{
  int arg_eax;
  
  if (arg_eax != g_bss_001e31f5) {
    g_bss_001e31f5 = arg_eax;
    light_fn_0b087c();
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0aca0c (Original VA: 0xaca0c, Ghidra: FUN_000aca0c)
 * Prototype: void light_fn_0aca0c(void);
 * Address  : 0xaca0c (Size: 89 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0aca0c
 * Callers  : 1 -> inits_could_create_ambient_sound_0404f7
 * Callees  : 2 -> light_fn_0b087c, light_process_map_subtile_0b0980
 ******************************************************************************/
void light_fn_0aca0c(void)

{
  char arg_al;
  
  if (arg_al == '\0') {
    g_bss_001e31f5 = 0x20;
  }
  else {
    g_bss_001e31f5 = 10;
  }
  g_bss_001e31f9 = arg_al != '\0';
  light_process_map_subtile_0b0980();
  light_fn_0b087c();
  return;
}

/******************************************************************************
 * Function : light_fn_0aca68 (Original VA: 0xaca68, Ghidra: FUN_000aca68)
 * Prototype: void light_fn_0aca68(void);
 * Address  : 0xaca68 (Size: 142 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0aca68
 * Callers  : 1 -> build_fn_014a68
 * Callees  : 1 -> light_fn_0b087c
 ******************************************************************************/
void light_fn_0aca68(void)

{
  int arg_eax;
  uint uval;
  int arg_ecx;
  int arg_edx;
  byte *loop_i;
  int arg_ebx;
  
  for (loop_i = &g_bss_001bd61b; loop_i < &g_bss_001c1dcd; loop_i = loop_i + 0x2e) {
    if (((*loop_i & 1) != 0) && ((*loop_i & 4) != 0)) {
      uval = (uint)loop_i[5];
      if ((arg_eax <= (int)(loop_i[0x29] + uval)) &&
         (((int)(loop_i[0x29] - uval) <= arg_ebx && (arg_edx <= (int)(loop_i[0x2b] + uval))))) {
        if ((int)(loop_i[0x2b] - uval) <= arg_ecx) {
          *loop_i = *loop_i | 8;
        }
      }
    }
  }
  light_fn_0b087c();
  return;
}

/******************************************************************************
 * Function : light_already_list_0acaf8 (Original VA: 0xacaf8, Ghidra: FUN_000acaf8)
 * Prototype: longlong light_already_list_0acaf8(void);
 * Address  : 0xacaf8 (Size: 490 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 237, 2725
 * Purpose  : String 'Light is already in list'
 * Callers  : 13 -> effect_allocate_light_effect_024998, file_fn_029b54, inits_fn_040e94, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, inits_allocate_dynamic_light_shot_0444a9, inits_allocate_dynamic_light_trap_0447fb, scrsupp_allocate_light_new_hero_069268 ...
 * Callees  : 2 -> LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000acb12) */
/* WARNING: Removing unreachable block (ram,0x000acb57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong light_already_list_0acaf8(void)

{
  char ch;
  undefined2 *arg_eax;
  uint uval;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  uint arg_edx;
  byte *byte_ptr;
  byte *byte_ptr_2;
  short short_val;
  byte flag;
  
  flag = 0;
  byte_ptr = &g_bss_001bd61b;
  short_val = 1;
  do {
    if ((*byte_ptr & 1) == 0) {
      *(short *)(byte_ptr + 0xe) = short_val;
      *byte_ptr = *byte_ptr | 1;
      goto LAB_000acb36;
    }
    byte_ptr = byte_ptr + 0x2e;
    short_val = short_val + 1;
  } while (byte_ptr < &g_bss_001c1dcd);
  byte_ptr = (byte *)0x0;
LAB_000acb36:
  if (byte_ptr == (byte *)0x0) {
LAB_000acc0e:
    return (ulonglong)arg_edx << 0x20;
  }
  if (*(char *)((int)arg_eax + 0x11) == '\0') {
    g_bss_00388e24 = g_bss_00388e24 + 1;
    if ((byte_ptr[1] & 1) == 0) {
      g_bss_002e6f0a = g_bss_002e6f0a + 1;
      byte_ptr[1] = byte_ptr[1] | 1;
      *(undefined2 *)(byte_ptr + 0x26) = (undefined2)g_bss_002e6f0e;
      g_bss_002e6f0e._0_2_ = *(undefined2 *)(byte_ptr + 0xe);
      g_bss_002e6f0e._2_2_ = 0;
    }
    else {
      LbErrorLog(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
      byte_ptr = extraout_ECX_00;
    }
    g_bss_00388e38 = 1;
  }
  else {
    byte_ptr_2 = &g_bss_001c1e4e;
    do {
      if ((*byte_ptr_2 & 1) == 0) {
        *byte_ptr_2 = *byte_ptr_2 | 1;
        goto LAB_000acb7a;
      }
      byte_ptr_2 = byte_ptr_2 + 0x81;
    } while (byte_ptr_2 < &g_bss_001c31f5);
    byte_ptr_2 = (byte *)0x0;
LAB_000acb7a:
    if (byte_ptr_2 == (byte *)0x0) {
      LbErrorLog(); /* LbErrorLog("light.cpp", line 237, "Cannot allocate cache for dynamic light") */
      LbScreenWaitVbi();
      goto LAB_000acc0e;
    }
    g_bss_00388e20 = g_bss_00388e20 + 1;
    *(short *)(byte_ptr + 0x10) = (short)((int)(byte_ptr_2 + -0x1c1dcd) / 0x81);
    if ((byte_ptr[1] & 1) == 0) {
      g_bss_002e6f12 = g_bss_002e6f12 + 1;
      byte_ptr[1] = byte_ptr[1] | 1;
      *(undefined2 *)(byte_ptr + 0x26) = (undefined2)g_bss_002e6f16;
      g_bss_002e6f16._0_2_ = *(undefined2 *)(byte_ptr + 0xe);
      g_bss_002e6f16._2_2_ = 0;
    }
    else {
      LbErrorLog(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
      byte_ptr = extraout_ECX;
    }
  }
  *byte_ptr = *byte_ptr | 10;
  *(undefined4 *)(byte_ptr + 0x28) = *(undefined4 *)(arg_eax + 5);
  *(undefined2 *)(byte_ptr + (uint)flag * -8 + 0x2c) = arg_eax[(uint)flag * -4 + 7];
  *(undefined2 *)(byte_ptr + 0x16) = *arg_eax;
  byte_ptr[2] = *(byte *)(arg_eax + 1);
  flag = byte_ptr[1];
  ch = *(char *)((int)arg_eax + 3);
  byte_ptr[1] = flag & 1;
  byte_ptr[1] = flag & 1 | ch * '\x02';
  uval = (CONCAT11(*byte_ptr,*(undefined1 *)((int)arg_eax + 0x11)) & 0xff01) & 0xfffffbff;
  flag = (byte)(uval >> 8);
  *byte_ptr = flag;
  *byte_ptr = flag | (char)uval << 2;
  *(undefined2 *)(byte_ptr + 0x1a) = arg_eax[4];
  *(undefined2 *)(byte_ptr + 0x18) = arg_eax[2];
  *(uint *)(byte_ptr + 0x12) = (uint)(ushort)arg_eax[9];
  return CONCAT44(arg_edx,(uint)*(ushort *)(byte_ptr + 0xe));
}

/******************************************************************************
 * Function : light_attempt_delete_light_0acce4 (Original VA: 0xacce4, Ghidra: FUN_000acce4)
 * Prototype: void light_attempt_delete_light_0acce4(void);
 * Address  : 0xacce4 (Size: 277 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 307
 * Purpose  : String 'Attempt to delete light 0'
 * Callers  : 8 -> person_update_creature_control_063a25, pom_update_creature_control_065b07, structs_update_creature_control_072af4, torture_update_creature_and_thing_07436a, creature_update_creature_control_080fbc, light_fn_0ac630, routes_fn_0d6664, slab_illegal_special_case_0d7dac
 * Callees  : 4 -> light_fn_0b087c, light_prev_when_removing_light_0b0f94, LbErrorLog, LbScreenWaitVbi
 ******************************************************************************/
void light_attempt_delete_light_0acce4(void)

{
  int arg_eax;
  
  if (arg_eax == 0) {
    LbErrorLog(); /* LbErrorLog("light.cpp", line 307, "Attempt to delete light 0") */
  }
  else if (((&g_bss_001bd5ed)[arg_eax * 0x2e] & 1) != 0) {
    if (*(short *)(&g_bss_001bd5fd + arg_eax * 0x2e) != 0) {
      LbScreenWaitVbi();
    }
    if (((&g_bss_001bd5ed)[arg_eax * 0x2e] & 4) == 0) {
      g_bss_00388e24 = g_bss_00388e24 + -1;
      light_fn_0b087c();
    }
    else {
      g_bss_00388e20 = g_bss_00388e20 + -1;
    }
    light_prev_when_removing_light_0b0f94();
    LbScreenWaitVbi();
    return;
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0acdfc (Original VA: 0xacdfc, Ghidra: FUN_000acdfc)
 * Prototype: void light_fn_0acdfc(void);
 * Address  : 0xacdfc (Size: 210 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0acdfc
 * Callers  : 2 -> packet_update_player_zoom_box, update_fn_0e0880
 * Callees  : 1 -> light_fn_0b087c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void light_fn_0acdfc(void)

{
  int val;
  int arg_eax;
  short *arg_edx;
  byte *byte_ptr;
  byte flag;
  
  flag = 0;
  val = arg_eax * 0x2e;
  byte_ptr = &g_bss_001bd5ed + val;
  if (((*arg_edx != *(short *)(&g_bss_001bd615 + val)) ||
      (*(short *)(&g_bss_001bd617 + val) != arg_edx[1])) ||
     (*(short *)(&g_bss_001bd619 + val) != arg_edx[2])) {
    if ((*byte_ptr & 4) == 0) {
      g_bss_00388e38 = 1;
      light_fn_0b087c();
    }
    *(undefined4 *)(&g_bss_001bd615 + val) = *(undefined4 *)arg_edx;
    *(short *)(&g_bss_001bd619 + (uint)flag * -8 + val) = arg_edx[(uint)flag * -4 + 2];
    *byte_ptr = *byte_ptr | 8;
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0aced0 (Original VA: 0xaced0, Ghidra: FUN_000aced0)
 * Prototype: undefined8 light_fn_0aced0(void);
 * Address  : 0xaced0 (Size: 29 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0aced0
 * Callers  : 1 -> update_fn_0e0880
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 light_fn_0aced0(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,(uint)((&g_bss_001bd5ed)[arg_eax * 0x2e] & 1));
}

/******************************************************************************
 * Function : light_fn_0acef0 (Original VA: 0xacef0, Ghidra: FUN_000acef0)
 * Prototype: undefined8 light_fn_0acef0(void);
 * Address  : 0xacef0 (Size: 25 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 421
 * Purpose  : Module light.cpp procedure @ 0x0acef0
 * Callers  : 1 -> file_process_thing_entity_02a6c5
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 light_fn_0acef0(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,&g_bss_001bd615 + arg_eax * 0x2e);
}

/******************************************************************************
 * Function : light_attempt_get_anglexy_unallocated_0acf7c (Original VA: 0xacf7c, Ghidra: FUN_000acf7c)
 * Prototype: longlong light_attempt_get_anglexy_unallocated_0acf7c(void);
 * Address  : 0xacf7c (Size: 84 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 445, 476, 500, 588
 * Purpose  : String 'Attempt to get anglexy of unallocated light structure'
 * Callers  : 1 -> file_process_thing_entity_02a6c5
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong light_attempt_get_anglexy_unallocated_0acf7c(void)

{
  int arg_eax;
  uint arg_edx;
  
  if ((arg_eax != 0) && (((&g_bss_001bd5ed)[arg_eax * 0x2e] & 1) != 0)) {
    return CONCAT44(arg_edx,(uint)*(ushort *)(&g_bss_001bd605 + arg_eax * 0x2e));
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 445, "Attempt to get anglexy of light 0") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : light_attempt_get_width_unallocated_0ad0f4 (Original VA: 0xad0f4, Ghidra: FUN_000ad0f4)
 * Prototype: longlong light_attempt_get_width_unallocated_0ad0f4(void);
 * Address  : 0xad0f4 (Size: 84 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 612
 * Purpose  : String 'Attempt to get width of unallocated light structure'
 * Callers  : 1 -> file_process_thing_entity_02a6c5
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong light_attempt_get_width_unallocated_0ad0f4(void)

{
  int arg_eax;
  uint arg_edx;
  
  if ((arg_eax != 0) && (((&g_bss_001bd5ed)[arg_eax * 0x2e] & 1) != 0)) {
    return CONCAT44(arg_edx,(uint)*(ushort *)(&g_bss_001bd607 + arg_eax * 0x2e));
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 612, "Attempt to get width of light 0") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : light_attempt_set_intensity_unallocated_0ad148 (Original VA: 0xad148, Ghidra: FUN_000ad148)
 * Prototype: void light_attempt_set_intensity_unallocated_0ad148(void);
 * Address  : 0xad148 (Size: 242 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 655
 * Purpose  : String 'Attempt to set intensity of unallocated light structure'
 * Callers  : 3 -> effect_process_thing_entity_024ab9, object_update_creature_and_thing_0c3c3c, object_fn_0c55c8
 * Callees  : 2 -> light_fn_0b087c, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void light_attempt_set_intensity_unallocated_0ad148(void)

{
  int val;
  int arg_eax;
  uint arg_edx;
  byte *byte_ptr;
  undefined1 local_14;
  
  local_14 = (undefined1)arg_edx;
  if (arg_eax != 0) {
    val = arg_eax * 0x2e;
    byte_ptr = &g_bss_001bd5ed + val;
    if ((*byte_ptr & 1) != 0) {
      if ((byte)(&g_bss_001bd5ef)[val] == arg_edx) {
        return;
      }
      if ((*byte_ptr & 4) == 0) {
        light_fn_0b087c();
        g_bss_00388e38 = 1;
      }
      (&g_bss_001bd5ef)[val] = local_14;
      if ((ushort)(byte)(&g_bss_001bd5ef)[val] <= *(ushort *)(&g_bss_001bd611 + val)) {
        return;
      }
      *byte_ptr = *byte_ptr | 8;
      return;
    }
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 655, "Attempt to set intensity of light 0") */
  return;
}

/******************************************************************************
 * Function : light_attempt_get_intensity_unallocated_0ad23c (Original VA: 0xad23c, Ghidra: FUN_000ad23c)
 * Prototype: longlong light_attempt_get_intensity_unallocated_0ad23c(void);
 * Address  : 0xad23c (Size: 83 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 679
 * Purpose  : String 'Attempt to get intensity of unallocated light structure'
 * Callers  : 4 -> effect_process_thing_entity_024ab9, file_process_thing_entity_02a6c5, object_update_creature_and_thing_0c3c3c, object_fn_0c55c8
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong light_attempt_get_intensity_unallocated_0ad23c(void)

{
  int arg_eax;
  uint arg_edx;
  
  if ((arg_eax != 0) && (((&g_bss_001bd5ed)[arg_eax * 0x2e] & 1) != 0)) {
    return CONCAT44(arg_edx,(uint)(byte)(&g_bss_001bd5ef)[arg_eax * 0x2e]);
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 679, "Attempt to get intensity of light 0") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : light_attempt_set_size_unallocated_0ad290 (Original VA: 0xad290, Ghidra: FUN_000ad290)
 * Prototype: void light_attempt_set_size_unallocated_0ad290(void);
 * Address  : 0xad290 (Size: 235 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 723
 * Purpose  : String 'Attempt to set size of unallocated light structure'
 * Callers  : 0 -> 
 * Callees  : 2 -> light_fn_0b087c, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void light_attempt_set_size_unallocated_0ad290(void)

{
  int val;
  int arg_eax;
  uint arg_edx;
  byte *byte_ptr;
  
  if (arg_eax != 0) {
    val = arg_eax * 0x2e;
    byte_ptr = &g_bss_001bd5ed + val;
    if ((*byte_ptr & 1) != 0) {
      if (*(ushort *)(&g_bss_001bd603 + val) == arg_edx) {
        return;
      }
      if ((*byte_ptr & 4) == 0) {
        light_fn_0b087c();
        g_bss_00388e38 = 1;
      }
      *(short *)(&g_bss_001bd603 + val) = (short)arg_edx;
      if ((arg_edx & 0xffff) <= (uint)(byte)(&g_bss_001bd5f6)[val]) {
        return;
      }
      *byte_ptr = *byte_ptr | 8;
      return;
    }
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 723, "Attempt to set size of light 0") */
  return;
}

/******************************************************************************
 * Function : light_attempt_get_size_unallocated_0ad37c (Original VA: 0xad37c, Ghidra: FUN_000ad37c)
 * Prototype: longlong light_attempt_get_size_unallocated_0ad37c(void);
 * Address  : 0xad37c (Size: 84 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 747, 778
 * Purpose  : String 'Attempt to get size of unallocated light structure'
 * Callers  : 1 -> file_process_thing_entity_02a6c5
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong light_attempt_get_size_unallocated_0ad37c(void)

{
  int arg_eax;
  uint arg_edx;
  
  if ((arg_eax != 0) && (((&g_bss_001bd5ed)[arg_eax * 0x2e] & 1) != 0)) {
    return CONCAT44(arg_edx,(uint)*(ushort *)(&g_bss_001bd603 + arg_eax * 0x2e));
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 747, "Attempt to get size of light 0") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : light_attempt_stop_animating_size_0ad438 (Original VA: 0xad438, Ghidra: FUN_000ad438)
 * Prototype: void light_attempt_stop_animating_size_0ad438(void);
 * Address  : 0xad438 (Size: 82 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 802, 830
 * Purpose  : String 'Attempt to stop animating size of unallocated light structur'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void light_attempt_stop_animating_size_0ad438(void)

{
  byte flag;
  int arg_eax;
  
  if (arg_eax != 0) {
    flag = (&g_bss_001bd5ed)[arg_eax * 0x2e];
    if ((flag & 1) != 0) {
      (&g_bss_001bd5ed)[arg_eax * 0x2e] = flag & 0xef;
      return;
    }
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 802, "Attempt to stop animating size of light 0") */
  return;
}

/******************************************************************************
 * Function : light_attempt_stop_animating_intensity_0ad4f8 (Original VA: 0xad4f8, Ghidra: FUN_000ad4f8)
 * Prototype: void light_attempt_stop_animating_intensity_0ad4f8(void);
 * Address  : 0xad4f8 (Size: 82 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 854
 * Purpose  : String 'Attempt to stop animating intensity of unallocated light str'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void light_attempt_stop_animating_intensity_0ad4f8(void)

{
  byte flag;
  int arg_eax;
  
  if (arg_eax != 0) {
    flag = (&g_bss_001bd5ed)[arg_eax * 0x2e];
    if ((flag & 1) != 0) {
      (&g_bss_001bd5ed)[arg_eax * 0x2e] = flag & 0xdf;
      return;
    }
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 854, "Attempt to stop animating intensity of light 0") */
  return;
}

/******************************************************************************
 * Function : light_already_list_0ad54c (Original VA: 0xad54c, Ghidra: FUN_000ad54c)
 * Prototype: void light_already_list_0ad54c(void);
 * Address  : 0xad54c (Size: 285 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 887, 892, 2725
 * Purpose  : String 'Light is already in list'
 * Callers  : 6 -> instance_update_player_view_state_04b5ca, instance_update_player_view_state_04b6ae, instance_update_player_view_state_04bd35, packet_update_player_zoom_box, creature_update_player_view_state_085f80, object_dragging_anything_0c39a8
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void light_already_list_0ad54c(void)

{
  byte flag;
  int val;
  int arg_eax;
  byte *byte_ptr;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (arg_eax == 0) {
    LbErrorLog(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
  }
  else {
    val = arg_eax * 0x2e;
    byte_ptr = &g_bss_001bd5ed + val;
    flag = *byte_ptr;
    if ((flag & 1) == 0) {
      LbErrorLog(); /* LbErrorLog("light.cpp", line 2725, "Light is already in list") */
      return;
    }
    if ((flag & 2) == 0) {
      *byte_ptr = flag | 2;
      if ((flag & 4) == 0) {
        if (((&g_bss_001bd5ee)[val] & 1) == 0) {
          g_bss_002e6f0a = g_bss_002e6f0a + 1;
          (&g_bss_001bd5ee)[val] = (&g_bss_001bd5ee)[val] | 1;
          *(undefined2 *)(&g_bss_001bd613 + val) = (undefined2)g_bss_002e6f0e;
          g_bss_002e6f0e = (uint)(ushort)(&g_bss_001bd5fb)[arg_eax * 0x17];
        }
        else {
          LbErrorLog(); /* LbErrorLog("light.cpp", line 887, "Attempt to turn on unallocated light structure") */
          byte_ptr = extraout_ECX;
        }
        g_bss_00388e38 = 1;
      }
      else {
        if (((&g_bss_001bd5ee)[val] & 1) == 0) {
          g_bss_002e6f12 = g_bss_002e6f12 + 1;
          (&g_bss_001bd5ee)[val] = (&g_bss_001bd5ee)[val] | 1;
          *(undefined2 *)(&g_bss_001bd613 + val) = (undefined2)g_bss_002e6f16;
          g_bss_002e6f16 = (uint)(ushort)(&g_bss_001bd5fb)[arg_eax * 0x17];
          *byte_ptr = *byte_ptr | 8;
          return;
        }
        LbErrorLog(); /* LbErrorLog("light.cpp", line 892, "Attempt to turn on light 0") */
        byte_ptr = extraout_ECX_00;
      }
      *byte_ptr = *byte_ptr | 8;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : light_attempt_turn_off_unallocated_0ad66c (Original VA: 0xad66c, Ghidra: FUN_000ad66c)
 * Prototype: void light_attempt_turn_off_unallocated_0ad66c(void);
 * Address  : 0xad66c (Size: 265 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 929, 934
 * Purpose  : String 'Attempt to turn off unallocated light structure'
 * Callers  : 4 -> instance_update_creature_and_thing_04b9ee, instance_update_player_view_state_04bd9b, packet_update_player_zoom_box, object_update_creature_control_0c3960
 * Callees  : 3 -> light_fn_0b087c, light_prev_when_removing_light_0b0f94, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void light_attempt_turn_off_unallocated_0ad66c(void)

{
  byte flag;
  int arg_eax;
  
  if (arg_eax == 0) {
    LbErrorLog(); /* LbErrorLog("light.cpp", line 929, "Attempt to turn off unallocated light structure") */
  }
  else {
    flag = (&g_bss_001bd5ed)[arg_eax * 0x2e];
    if ((flag & 1) == 0) {
      LbErrorLog(); /* LbErrorLog("light.cpp", line 934, "Attempt to turn off light 0") */
      return;
    }
    if ((flag & 2) != 0) {
      (&g_bss_001bd5ed)[arg_eax * 0x2e] = flag & 0xfd;
      if ((flag & 4) == 0) {
        light_fn_0b087c();
        light_prev_when_removing_light_0b0f94();
        g_bss_00388e38 = 1;
        return;
      }
      light_prev_when_removing_light_0b0f94();
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : light_attempt_set_size_unallocated_0ad834 (Original VA: 0xad834, Ghidra: FUN_000ad834)
 * Prototype: void light_attempt_set_size_unallocated_0ad834(void);
 * Address  : 0xad834 (Size: 82 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 1019
 * Purpose  : String 'Attempt to set size of unallocated light structure'
 * Callers  : 6 -> inits_fn_040e94, scrsupp_allocate_light_new_hero_069268, scrsupp_script_could_find_hero_0694d4, scrsupp_allocate_light_new_hero_06972c, creature_allocate_light_new_hero_080a94, creature_allocate_light_new_hero_080c84
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void light_attempt_set_size_unallocated_0ad834(void)

{
  byte flag;
  int arg_eax;
  
  if (arg_eax != 0) {
    flag = (&g_bss_001bd5ed)[arg_eax * 0x2e];
    if ((flag & 1) != 0) {
      (&g_bss_001bd5ed)[arg_eax * 0x2e] = flag | 0x40;
      return;
    }
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 1019, "Attempt to set size of light 0") */
  return;
}

/******************************************************************************
 * Function : light_attempt_set_minimum_light_0ad888 (Original VA: 0xad888, Ghidra: FUN_000ad888)
 * Prototype: void light_attempt_set_minimum_light_0ad888(void);
 * Address  : 0xad888 (Size: 113 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 1055
 * Purpose  : String 'Attempt to set_minimum light size to cache on non dynamic li'
 * Callers  : 1 -> inits_allocate_light_object_043f07
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void light_attempt_set_minimum_light_0ad888(void)

{
  byte flag;
  int val;
  int arg_eax;
  undefined1 arg_dl;
  undefined2 arg_bx;
  
  if (arg_eax != 0) {
    val = arg_eax * 0x2e;
    flag = (&g_bss_001bd5ed)[val];
    if ((flag & 1) != 0) {
      if ((flag & 2) == 0) {
        return;
      }
      (&g_bss_001bd5ed)[val] = flag & 0xfd;
      if ((flag & 4) != 0) {
        (&g_bss_001bd5f6)[val] = arg_dl;
        *(undefined2 *)(&g_bss_001bd611 + val) = arg_bx;
        return;
      }
    }
  }
  LbErrorLog(); /* LbErrorLog("light.cpp", line 1055, "Attempt to set minimum light size for light 0") */
  return;
}

/******************************************************************************
 * Function : light_maintain_gui_button_state_0adbc0 (Original VA: 0xadbc0, Ghidra: FUN_000adbc0)
 * Prototype: void light_maintain_gui_button_state_0adbc0(void);
 * Address  : 0xadbc0 (Size: 10532 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 2 -> light_fn_0ac694, light_fn_0b06fc
 * Callees  : 2 -> bflib_system_io_fn_0e66ec, LbScreenWaitVbi
 ******************************************************************************/
void light_maintain_gui_button_state_0adbc0(void)

{
  byte flag;
  ushort uval;
  longlong val;
  bool flag_2;
  undefined *word_ptr;
  ushort uval_2;
  ushort uval_3;
  byte *gui_btn;
  uint uval_4;
  uint uval_5;
  int val_2;
  int val_3;
  int val_4;
  uint uval_6;
  int val_5;
  int val_6;
  int val_7;
  uint uval_7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  uint extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_ECX_16;
  uint extraout_ECX_17;
  int extraout_ECX_18;
  int extraout_ECX_19;
  int extraout_ECX_20;
  int extraout_ECX_21;
  int extraout_ECX_22;
  int extraout_ECX_23;
  int extraout_ECX_24;
  int extraout_ECX_25;
  int val_8;
  uint uval_8;
  uint uval_9;
  uint unaff_EBP;
  int *int_ptr;
  uint *word_ptr_2;
  uint uval_10;
  ushort *word_ptr_3;
  int val_9;
  int *local_1bc;
  byte local_1ac;
  byte local_1a8;
  byte local_1a0;
  byte local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  int local_18c;
  uint local_188;
  uint *local_184;
  uint *local_180;
  uint local_17c;
  uint *local_178;
  uint *local_174;
  uint *local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  ushort *local_13c;
  int local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  int local_fc;
  uint local_f8;
  undefined *local_f4;
  uint *local_f0;
  uint *local_ec;
  uint local_e8;
  uint local_e4;
  int local_e0;
  uint *local_dc;
  uint local_d8;
  uint local_d4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint *local_70;
  uint *local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint *local_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  ushort *local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  
  if ((gui_btn[1] & 0xfe) == 0) {
    uval_3 = *(ushort *)(gui_btn + 0x16);
    uval_7 = (uint)gui_btn[2] << 8;
    uval_10 = uval_7;
  }
  else {
    uval_3 = *(ushort *)(gui_btn + 0x16);
    uval_7 = g_bss_001e31fb * 0x24a1 + 0x24df;
    g_bss_001e31fb = uval_7 >> 0xd | uval_7 * 0x80000;
    uval_7 = (uint)gui_btn[2] * 0x100 + 0x101;
    uval_10 = (uint)gui_btn[2] * 0x100 + -0x100 + g_bss_001e31fb % 0x201;
  }
  uval_9 = (uint)uval_3;
  uval_6 = uval_9;
  if ((*gui_btn & 4) != 0) {
    if (uval_9 < (uint)gui_btn[9] * 0x100) {
      uval_6 = (uint)gui_btn[9] * 0x100;
    }
    if (uval_7 < (uint)*(ushort *)(gui_btn + 0x24) * 0x100) {
      uval_7 = (uint)*(ushort *)(gui_btn + 0x24) * 0x100;
    }
  }
  if ((int)uval_7 < g_bss_001e31f5 * 0x100) {
    uval_7 = 0;
  }
  else {
    uval_7 = (int)(uval_7 + g_bss_001e31f5 * -0x100) / (int)(uval_7 / (uint)((int)uval_6 >> 8)) + 1;
    if (0x1f < (int)uval_7) {
      uval_7 = 0x1f;
    }
  }
  gui_btn[5] = (byte)uval_7;
  if (uval_9 == 0) {
    return;
  }
  if ((int)uval_10 < 1) {
    return;
  }
  flag = *gui_btn;
  if ((flag & 4) != 0) {
    if ((flag & 0x40) == 0) {
      if ((flag & 8) == 0) {
        val_8 = (uint)*(ushort *)(gui_btn + 0x28) + uval_7 * -0x100;
        if (val_8 < 1) {
          val_8 = 0;
        }
        val_3 = (uint)*(ushort *)(gui_btn + 0x2a) + uval_7 * -0x100;
        if (val_3 < 1) {
          val_3 = 0;
        }
        val_2 = (uint)*(ushort *)(gui_btn + 0x28) + uval_7 * 0x100;
        if (0xfffe < val_2) {
          val_2 = 0xffff;
        }
        val_4 = (uint)*(ushort *)(gui_btn + 0x2a) + uval_7 * 0x100;
        if (0xfffe < val_4) {
          val_4 = 0xffff;
        }
        val_5 = (int)((val_8 + (val_8 >> 0x1f) * -0x100) - (uint)((val_8 >> 0x1f) << 7 < 0)) >>
                 8;
        word_ptr_3 = &g_bss_001e3203 +
                  ((int)((val_3 + (val_3 >> 0x1f) * -0x100) - (uint)((val_3 >> 0x1f) << 7 < 0))
                  >> 8) * 0x100 + val_5;
        uval_7 = *(uint *)(&g_bss_001c1dce + (uint)*(ushort *)(gui_btn + 0x10) * 0x81);
        word_ptr = &g_bss_001c1dcd + (uint)*(ushort *)(gui_btn + 0x10) * 0x81;
        for (; val_3 <= val_4; val_3 = val_3 + 0x100) {
          word_ptr_2 = &g_bss_00388e3c;
          val_6 = val_8 - val_2;
          val_9 = val_8;
          while (val_9 == val_2 || SBORROW4(val_9,val_2) != val_6 < 0) {
            if ((*word_ptr_2 & uval_7) != 0) {
              uval_6 = (int)((uint)*(ushort *)(gui_btn + 0x28) - val_9) >> 0x1f;
              val_6 = ((uint)*(ushort *)(gui_btn + 0x28) - val_9 ^ uval_6) - uval_6;
              uval_6 = (int)((uint)*(ushort *)(gui_btn + 0x2a) - val_3) >> 0x1f;
              val_7 = ((uint)*(ushort *)(gui_btn + 0x2a) - val_3 ^ uval_6) - uval_6;
              if (val_7 < val_6) {
                val_6 = *(int *)(&g_data_0017a4d0 + ((val_7 * 0x100) / val_6) * 8) * val_6 >> 0xd;
              }
              else if (val_7 == 0) {
                val_6 = 0;
              }
              else {
                val_6 = *(int *)(&g_data_0017a4d0 + ((val_6 * 0x100) / val_7) * 8) * val_7 >> 0xd;
              }
              val = (longlong)(int)((uval_9 - val_6) * uval_10) / (longlong)(int)uval_9;
              if ((int)(uint)*word_ptr_3 < (int)val) {
                *word_ptr_3 = (ushort)val;
              }
            }
            val_9 = val_9 + 0x100;
            word_ptr_3 = word_ptr_3 + 1;
            word_ptr_2 = word_ptr_2 + 1;
            val_6 = val_9 - val_2;
          }
          uval_7 = *(uint *)(word_ptr + 5);
          word_ptr_3 = word_ptr_3 + (0xff - (((int)((val_2 + (val_2 >> 0x1f) * -0x100) -
                                             (uint)((val_2 >> 0x1f) << 7 < 0)) >> 8) - val_5));
          word_ptr = word_ptr + 4;
        }
        return;
      }
      local_124 = (uint)*(ushort *)(gui_btn + 0x28);
      local_120 = (uint)*(ushort *)(gui_btn + 0x2a);
      local_11c = (uint)(*(ushort *)(gui_btn + 0x28) >> 8);
      uval_7 = (uint)(*(ushort *)(gui_btn + 0x2a) >> 8);
      val_8 = *(int *)(gui_btn + 0x2a) >> 0x1f;
      local_110 = (int)(((*(int *)(gui_btn + 0x2a) >> 0x10) + val_8 * -0x100) -
                       (uint)(val_8 << 7 < 0)) >> 8;
      local_f4 = &g_bss_001c1dcd + (uint)*(ushort *)(gui_btn + 0x10) * 0x81;
      local_134 = uval_9;
      local_114 = uval_7;
      LbScreenWaitVbi();
      LbScreenWaitVbi();
      val_8 = local_11c + uval_7 * 0x100;
      if (local_110 <
          (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                               (*(uint *)((int)&g_map_subtiles + val_8 * 5 + 1) & 0x7ff) * 0x18 + 2)
                     >> 4)) {
LAB_000af5d6:
        *gui_btn = *gui_btn & 0xf7;
        return;
      }
      *(uint *)(local_f4 + extraout_ECX_08 * 4 + 1) =
           *(uint *)(local_f4 + extraout_ECX_08 * 4 + 1) |
           1 << (0x1fU - (char)extraout_ECX_08 & 0x1f);
      uval_6 = local_124 + local_11c * -0x100;
      uval_9 = local_120 + uval_7 * -0x100;
      uval_7 = (int)uval_6 >> 0x1f;
      val_2 = (uval_6 ^ uval_7) - uval_7;
      uval_7 = (int)uval_9 >> 0x1f;
      val_3 = (uval_9 ^ uval_7) - uval_7;
      if (val_3 < val_2) {
        val_2 = *(int *)(&g_data_0017a4d0 + ((val_3 * 0x100) / val_2) * 8) * val_2;
      }
      else {
        val_4 = 0;
        if (val_3 == 0) goto LAB_000ae9bc;
        val_2 = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val_3) * 8) * val_3;
      }
      val_4 = val_2 >> 0xd;
LAB_000ae9bc:
      val_3 = (int)((local_134 - val_4) * uval_10) / (int)local_134;
      if ((int)(uint)(ushort)(&g_bss_001e3203)[val_8] < val_3) {
        (&g_bss_001e3203)[val_8] = (ushort)val_3;
      }
      local_160 = local_124 >> 8;
      local_64 = local_120 >> 8;
      int_ptr = &g_bss_001baded;
      local_130 = uval_10;
      local_12c = extraout_ECX_08;
      do {
        if ((&g_bss_001baded + g_bss_001e31ff * 2 <= int_ptr) ||
           (local_12c < *(byte *)((int)int_ptr + 1))) goto LAB_000af5d6;
        local_10c = local_11c + (int)*(char *)((int)int_ptr + 2);
        local_108 = local_114 + (*int_ptr >> 0x18);
        if ((0xff < local_10c) || (0xff < local_108)) goto LAB_000af4ea;
        local_1c = local_10c * 0x100;
        local_138 = local_108 * 0x100;
        uval_3 = bflib_system_io_fn_0e66ec();
        if ((byte)local_10c < (byte)local_11c) {
          if ((byte)local_108 < (byte)local_114) {
            local_fc = 4;
          }
          else {
            local_fc = 3;
          }
        }
        else if ((byte)local_108 < (byte)local_114) {
          local_fc = 1;
        }
        else {
          local_fc = 2;
        }
        local_48 = local_108 * 0x100;
        local_60 = local_fc + -1;
        local_30 = local_10c * 0x100 + -1;
        local_14c = local_60 * 4;
        local_28 = local_30 - local_124;
        if ((&g_bss_001bcded)[(uint)uval_3 % 0x800] != '\0') {
          local_f0 = &local_104;
          local_ec = &local_100;
          if (local_10c == local_160) {
            if (local_108 < local_64) {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (uint)uval_3 % 0x800;
            }
            else {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (int)(uint)uval_3 % extraout_ECX_09 & 0xffff;
            }
          }
          else if (local_64 == local_108) {
            if (local_10c < local_160) {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (int)(uint)uval_3 % extraout_ECX_10 & 0xffff;
            }
            else {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (uint)uval_3 % 0x800;
            }
          }
          else {
            switch(local_60) {
            case 0:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (uint)uval_3 % 0x800;
              break;
            case 1:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (uint)uval_3 % 0x800;
              break;
            case 2:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (int)(uint)uval_3 % extraout_ECX_11 & 0xffff;
              break;
            case 3:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_e4 = (int)(uint)uval_3 % extraout_ECX_12 & 0xffff;
            }
          }
          if (((int)((local_e8 + ((int)local_e8 >> 0x1f) * -0x200) -
                    (uint)(((int)local_e8 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_e8) {
            local_e8 = local_e8 + 1 & 0x7ff;
          }
          if (((int)((local_e4 + ((int)local_e4 >> 0x1f) * -0x200) -
                    (uint)(((int)local_e4 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_e4) {
            local_e4 = local_e4 - 1 & 0x7ff;
          }
          *local_f0 = local_e8;
          *local_ec = local_e4;
          if ((((&g_bss_001bcded)[local_104] == '\0') || ((&g_bss_001bcded)[local_100] == '\0')) &&
             (local_110 <
              (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                   (*(uint *)((int)&g_map_subtiles +
                                             (local_108 * 0x100 + local_10c) * 5 + 1) & 0x7ff) *
                                   0x18 + 2) >> 4))) {
            if ((int)local_100 < (int)local_104) {
              LbScreenWaitVbi();
              LbScreenWaitVbi();
            }
            else {
              LbScreenWaitVbi();
            }
          }
          goto LAB_000af4ea;
        }
        local_e0 = (local_10c + local_48) * 5;
        local_128 = (int)&g_map_subtiles + local_e0;
        local_40 = &g_bss_001e3203 + local_10c + local_48;
        local_f8 = (uint)(local_110 <
                         (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                              (*(uint *)((int)&g_map_subtiles + local_e0 + 1) & 0x7ff)
                                              * 0x18 + 2) >> 4));
        if (local_f8 != 0) {
          local_178 = &local_104;
          local_dc = &local_100;
          if (local_10c == local_160) {
            if (local_108 < local_64) {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (uint)uval_3 % 0x800;
            }
            else {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (int)(uint)uval_3 % extraout_ECX_13 & 0xffff;
            }
          }
          else if (local_64 == local_108) {
            if (local_10c < local_160) {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (int)(uint)uval_3 % extraout_ECX_14 & 0xffff;
            }
            else {
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (uint)uval_3 % 0x800;
            }
          }
          else {
            switch(local_60) {
            case 0:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (uint)uval_3 % 0x800;
              break;
            case 1:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (uint)uval_3 % 0x800;
              break;
            case 2:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (int)(uint)uval_3 % extraout_ECX_15 & 0xffff;
              break;
            case 3:
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d8 = (uint)uval_3 % 0x800;
              uval_3 = bflib_system_io_fn_0e66ec();
              local_d4 = (int)(uint)uval_3 % extraout_ECX_16 & 0xffff;
            }
          }
          if (((int)((local_d8 + ((int)local_d8 >> 0x1f) * -0x200) -
                    (uint)(((int)local_d8 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_d8) {
            local_d8 = local_d8 + 1 & 0x7ff;
          }
          if (((int)((local_d4 + ((int)local_d4 >> 0x1f) * -0x200) -
                    (uint)(((int)local_d4 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_d4) {
            local_d4 = local_d4 - 1 & 0x7ff;
          }
          *local_178 = local_d8;
          *local_dc = local_d4;
          if ((int)local_100 < (int)local_104) {
            LbScreenWaitVbi();
          }
          LbScreenWaitVbi();
        }
        if (local_f8 == 0) goto LAB_000af3f4;
        switch(local_fc) {
        case 1:
          if ((int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                   (*(uint *)((int)&g_map_subtiles +
                                             (local_108 * 0x100 + (local_10c - 1)) * 5 + 1) & 0x7ff)
                                   * 0x18 + 2) >> 4) <= local_110) goto switchD_000af3df_caseD_2;
          flag_2 = false;
          break;
        case 3:
          if (local_110 <
              (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                   (*(uint *)((int)&g_map_subtiles +
                                             ((local_108 - 1) * 0x100 + local_10c) * 5 + 1) & 0x7ff)
                                   * 0x18 + 2) >> 4)) goto switchD_000af3df_caseD_4;
        default:
switchD_000af3df_caseD_2:
          flag_2 = true;
          break;
        case 4:
switchD_000af3df_caseD_4:
          flag_2 = false;
        }
        if (flag_2) {
LAB_000af3f4:
          uval_7 = (int)(local_124 - local_1c) >> 0x1f;
          val_8 = (local_124 - local_1c ^ uval_7) - uval_7;
          uval_7 = (int)(local_120 - local_138) >> 0x1f;
          val_3 = (local_120 - local_138 ^ uval_7) - uval_7;
          if (val_3 < val_8) {
            val_8 = *(int *)(&g_data_0017a4d0 + ((val_3 * 0x100) / val_8) * 8) * val_8 >> 0xd;
          }
          else if (val_3 == 0) {
            val_8 = 0;
          }
          else {
            val_8 = *(int *)(&g_data_0017a4d0 + ((val_8 * 0x100) / val_3) * 8) * val_3 >> 0xd;
          }
          val = (longlong)(int)((local_134 - val_8) * local_130) / (longlong)(int)local_134;
          val_8 = (int)val;
          if (val_8 <= g_bss_001e31f5) goto LAB_000af5d6;
          val_3 = local_12c + (*int_ptr >> 0x18);
          *(uint *)(local_f4 + val_3 * 4 + 1) =
               *(uint *)(local_f4 + val_3 * 4 + 1) |
               1 << (0x1fU - ((char)local_12c + *(char *)((int)int_ptr + 2)) & 0x1f);
          if ((int)(uint)*local_40 < val_8) {
            *local_40 = (ushort)val;
          }
        }
LAB_000af4ea:
        int_ptr = int_ptr + 2;
      } while( true );
    }
    uval_3 = *(ushort *)(gui_btn + 0x28);
    uval_6 = (uint)uval_3;
    uval = *(ushort *)(gui_btn + 0x2a);
    uval_4 = (uint)(uval_3 >> 8);
    val_8 = *(int *)(gui_btn + 0x2a) >> 0x1f;
    val_8 = (int)(((*(int *)(gui_btn + 0x2a) >> 0x10) + val_8 * -0x100) - (uint)(val_8 << 7 < 0))
             >> 8;
    LbScreenWaitVbi();
    if (val_8 < (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                      (*(uint *)((int)&g_map_subtiles + (uval_4 + extraout_ECX) * 5 + 1
                                                ) & 0x7ff) * 0x18 + 2) >> 4)) {
      return;
    }
    uval_5 = uval_6 + uval_4 * -0x100;
    uval_8 = (int)uval_5 >> 0x1f;
    val_2 = (uval_5 ^ uval_8) - uval_8;
    uval_8 = (uint)uval - extraout_ECX;
    uval_5 = (int)uval_8 >> 0x1f;
    val_3 = (uval_8 ^ uval_5) - uval_5;
    if (val_3 < val_2) {
      val_2 = *(int *)(&g_data_0017a4d0 + ((val_3 * 0x100) / val_2) * 8) * val_2;
    }
    else {
      val_4 = 0;
      if (val_3 == 0) goto LAB_000addf2;
      val_2 = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val_3) * 8) * val_3;
    }
    val_4 = val_2 >> 0xd;
LAB_000addf2:
    val_3 = (int)((uval_9 - val_4) * uval_10) / (int)uval_9;
    if ((int)(uint)(ushort)(&g_bss_001e3203)[uval_4 + extraout_ECX] < val_3) {
      (&g_bss_001e3203)[uval_4 + extraout_ECX] = (ushort)val_3;
    }
    local_38 = (uint)(uval_3 >> 8);
    local_15c = (uint)(uval >> 8);
    local_1bc = &g_bss_001baded;
    do {
      if (&g_bss_001baded + g_bss_001e31ff * 2 <= local_1bc) {
        return;
      }
      if (uval_7 < *(byte *)((int)local_1bc + 1)) {
        return;
      }
      uval_5 = uval_4 + (int)*(char *)((int)local_1bc + 2);
      uval_8 = (uint)(uval >> 8) + (*local_1bc >> 0x18);
      if ((uval_5 < 0x100) && (uval_8 < 0x100)) {
        local_20 = uval_5 * 0x100;
        local_140 = uval_8 * 0x100;
        uval_2 = bflib_system_io_fn_0e66ec();
        local_190 = (uint)uval_2 % 0x800;
        local_1ac = (byte)(uval_3 >> 8);
        local_1a0 = (byte)uval_5;
        local_19c = (byte)uval_8;
        local_1a8 = (byte)(uval >> 8);
        if (local_1a0 < local_1ac) {
          if (local_19c < local_1a8) {
            local_18c = 4;
          }
          else {
            local_18c = 3;
          }
        }
        else if (local_19c < local_1a8) {
          local_18c = 1;
        }
        else {
          local_18c = 2;
        }
        local_44 = uval_8 * 0x100;
        local_154 = local_18c + -1;
        local_2c = local_154 * 4;
        local_144 = (uval_5 * 0x100 + -1) - uval_6;
        if ((&g_bss_001bcded)[local_190] != '\0') {
          local_184 = &local_198;
          local_180 = &local_194;
          if (uval_5 == local_38) {
            if (uval_8 < local_15c) {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (uint)uval_2 % 0x800;
            }
            else {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (int)(uint)uval_2 % extraout_ECX_00 & 0xffff;
            }
          }
          else if (local_15c == uval_8) {
            if (uval_5 < local_38) {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (int)(uint)uval_2 % extraout_ECX_01 & 0xffff;
            }
            else {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (uint)uval_2 % 0x800;
            }
          }
          else {
            switch(local_154) {
            case 0:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (uint)uval_2 % 0x800;
              break;
            case 1:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (uint)uval_2 % 0x800;
              break;
            case 2:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (int)(uint)uval_2 % extraout_ECX_02 & 0xffff;
              break;
            case 3:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_17c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              unaff_EBP = (int)(uint)uval_2 % extraout_ECX_03 & 0xffff;
            }
          }
          if (((int)((local_17c + ((int)local_17c >> 0x1f) * -0x200) -
                    (uint)(((int)local_17c >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_17c) {
            local_17c = local_17c + 1 & 0x7ff;
          }
          if (((int)((unaff_EBP + ((int)unaff_EBP >> 0x1f) * -0x200) -
                    (uint)(((int)unaff_EBP >> 0x1f) << 8 < 0)) >> 9) * 0x200 != unaff_EBP) {
            unaff_EBP = unaff_EBP - 1 & 0x7ff;
          }
          *local_184 = local_17c;
          *local_180 = unaff_EBP;
          if ((((&g_bss_001bcded)[local_198] == '\0') || ((&g_bss_001bcded)[local_194] == '\0')) &&
             (val_8 < (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                            (*(uint *)((int)&g_map_subtiles +
                                                      (uval_8 * 0x100 + uval_5) * 5 + 1) & 0x7ff) *
                                            0x18 + 2) >> 4))) {
            if ((int)local_194 < (int)local_198) {
              LbScreenWaitVbi();
              LbScreenWaitVbi();
            }
            else {
              LbScreenWaitVbi();
            }
          }
          goto LAB_000ae746;
        }
        local_e0 = (uval_5 + local_44) * 5;
        local_13c = &g_bss_001e3203 + uval_5 + local_44;
        local_188 = (uint)(val_8 < (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                                         (*(uint *)((int)&g_map_subtiles +
                                                                   local_e0 + 1) & 0x7ff) * 0x18 + 2
                                                         ) >> 4));
        if (local_188 != 0) {
          local_174 = &local_198;
          local_170 = &local_194;
          if (uval_5 == local_38) {
            if (uval_8 < local_15c) {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (uint)uval_2 % 0x800;
            }
            else {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (int)(uint)uval_2 % extraout_ECX_04 & 0xffff;
            }
          }
          else if (local_15c == uval_8) {
            if (uval_5 < local_38) {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (int)(uint)uval_2 % extraout_ECX_05 & 0xffff;
            }
            else {
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (uint)uval_2 % 0x800;
            }
          }
          else {
            switch(local_154) {
            case 0:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (uint)uval_2 % 0x800;
              break;
            case 1:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (uint)uval_2 % 0x800;
              break;
            case 2:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (int)(uint)uval_2 % extraout_ECX_06 & 0xffff;
              break;
            case 3:
              uval_2 = bflib_system_io_fn_0e66ec();
              local_16c = (uint)uval_2 % 0x800;
              uval_2 = bflib_system_io_fn_0e66ec();
              local_168 = (int)(uint)uval_2 % extraout_ECX_07 & 0xffff;
            }
          }
          if (((int)((local_16c + ((int)local_16c >> 0x1f) * -0x200) -
                    (uint)(((int)local_16c >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_16c) {
            local_16c = local_16c + 1 & 0x7ff;
          }
          if (((int)((local_168 + ((int)local_168 >> 0x1f) * -0x200) -
                    (uint)(((int)local_168 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_168) {
            local_168 = local_168 - 1 & 0x7ff;
          }
          *local_174 = local_16c;
          *local_170 = local_168;
          if ((int)local_194 < (int)local_198) {
            LbScreenWaitVbi();
          }
          LbScreenWaitVbi();
        }
        if (local_188 == 0) goto LAB_000ae6a3;
        switch(local_18c) {
        case 1:
          if ((int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                   (*(uint *)((int)&g_map_subtiles +
                                             (uval_8 * 0x100 + (uval_5 - 1)) * 5 + 1) & 0x7ff) * 0x18
                                   + 2) >> 4) <= val_8) goto switchD_000ae68e_caseD_2;
          flag_2 = false;
          break;
        case 3:
          if (val_8 < (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                            (*(uint *)((int)&g_map_subtiles +
                                                      ((uval_8 - 1) * 0x100 + uval_5) * 5 + 1) &
                                            0x7ff) * 0x18 + 2) >> 4)) goto switchD_000ae68e_caseD_4;
        default:
switchD_000ae68e_caseD_2:
          flag_2 = true;
          break;
        case 4:
switchD_000ae68e_caseD_4:
          flag_2 = false;
        }
        if (flag_2) {
LAB_000ae6a3:
          uval_5 = (int)(uval_6 - local_20) >> 0x1f;
          val_3 = (uval_6 - local_20 ^ uval_5) - uval_5;
          uval_8 = (uint)uval - local_140;
          uval_5 = (int)uval_8 >> 0x1f;
          val_2 = (uval_8 ^ uval_5) - uval_5;
          if (val_2 < val_3) {
            val_3 = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val_3) * 8) * val_3 >> 0xd;
          }
          else if (val_2 == 0) {
            val_3 = 0;
          }
          else {
            val_3 = *(int *)(&g_data_0017a4d0 + ((val_3 * 0x100) / val_2) * 8) * val_2 >> 0xd;
          }
          val = (longlong)(int)((uval_9 - val_3) * uval_10) / (longlong)(int)uval_9;
          val_3 = (int)val;
          if (val_3 <= g_bss_001e31f5) {
            return;
          }
          if ((int)(uint)*local_13c < val_3) {
            *local_13c = (ushort)val;
          }
        }
      }
LAB_000ae746:
      local_1bc = local_1bc + 2;
    } while( true );
  }
  local_9c = (uint)*(ushort *)(gui_btn + 0x28);
  local_98 = (uint)*(ushort *)(gui_btn + 0x2a);
  local_94 = (uint)(*(ushort *)(gui_btn + 0x28) >> 8);
  local_90 = (uint)(*(ushort *)(gui_btn + 0x2a) >> 8);
  val_8 = *(int *)(gui_btn + 0x2a) >> 0x1f;
  local_8c = (int)(((*(int *)(gui_btn + 0x2a) >> 0x10) + val_8 * -0x100) - (uint)(val_8 << 7 < 0))
             >> 8;
  LbScreenWaitVbi();
  if (local_8c <
      (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                           (*(uint *)((int)&g_map_subtiles + (local_94 + local_90 * 0x100) * 5 + 1) &
                           0x7ff) * 0x18 + 2) >> 4)) {
    return;
  }
  uval_7 = local_98 + local_90 * -0x100;
  uval_6 = local_9c + local_94 * -0x100;
  uval_4 = (int)uval_6 >> 0x1f;
  val_3 = (uval_6 ^ uval_4) - uval_4;
  uval_6 = (int)uval_7 >> 0x1f;
  val_8 = (uval_7 ^ uval_6) - uval_6;
  if (val_8 < val_3) {
    val_3 = *(int *)(&g_data_0017a4d0 + ((val_8 * 0x100) / val_3) * 8) * val_3;
  }
  else {
    val_2 = 0;
    if (val_8 == 0) goto LAB_000af99a;
    val_3 = *(int *)(&g_data_0017a4d0 + ((val_3 * 0x100) / val_8) * 8) * val_8;
  }
  val_2 = val_3 >> 0xd;
LAB_000af99a:
  val_8 = (int)((uval_9 - val_2) * uval_10) / (int)uval_9;
  if ((int)(uint)*(ushort *)(&g_bss_001c31f5 + (local_90 * 0x100 + local_94) * 2) < val_8) {
    *(ushort *)(&g_bss_001c31f5 + (local_90 * 0x100 + local_94) * 2) = (ushort)val_8;
  }
  local_164 = local_9c >> 8;
  local_3c = local_98 >> 8;
  int_ptr = &g_bss_001baded;
  local_a8 = uval_9;
  local_a4 = uval_10;
  local_a0 = extraout_ECX_17;
  do {
    if (&g_bss_001baded + g_bss_001e31ff * 2 <= int_ptr) {
      return;
    }
    if (local_a0 < *(byte *)((int)int_ptr + 1)) {
      return;
    }
    local_88 = local_94 + (int)*(char *)((int)int_ptr + 2);
    local_84 = local_90 + (*int_ptr >> 0x18);
    if ((local_88 < 0x100) && (local_84 < 0x100)) {
      uval_3 = bflib_system_io_fn_0e66ec();
      if ((byte)local_88 < (byte)local_94) {
        if ((byte)local_84 < (byte)local_90) {
          local_78 = 4;
        }
        else {
          local_78 = 3;
        }
      }
      else if ((byte)local_84 < (byte)local_90) {
        local_78 = 1;
      }
      else {
        local_78 = 2;
      }
      local_4c = local_84 * 0x100;
      local_158 = local_78 + -1;
      local_34 = local_4c + 0x100;
      local_150 = local_158 * 4;
      local_148 = (local_88 * 0x100 + -1) - local_9c;
      if ((&g_bss_001bcded)[(uint)uval_3 % 0x800] != '\0') {
        local_70 = &local_80;
        local_6c = &local_7c;
        if (local_88 == local_164) {
          if (local_84 < local_3c) {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (uint)uval_3 % 0x800;
          }
          else {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (int)(uint)uval_3 % extraout_ECX_18 & 0xffff;
          }
        }
        else if (local_3c == local_84) {
          if (local_88 < local_164) {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (int)(uint)uval_3 % extraout_ECX_19 & 0xffff;
          }
          else {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (uint)uval_3 % 0x800;
          }
        }
        else {
          switch(local_158) {
          case 0:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (uint)uval_3 % 0x800;
            break;
          case 1:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (uint)uval_3 % 0x800;
            break;
          case 2:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (int)(uint)uval_3 % extraout_ECX_20 & 0xffff;
            break;
          case 3:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_68 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_118 = (int)(uint)uval_3 % extraout_ECX_21 & 0xffff;
          }
        }
        if (((int)((local_68 + ((int)local_68 >> 0x1f) * -0x200) -
                  (uint)(((int)local_68 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_68) {
          local_68 = local_68 + 1 & 0x7ff;
        }
        if (((int)((local_118 + ((int)local_118 >> 0x1f) * -0x200) -
                  (uint)(((int)local_118 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_118) {
          local_118 = local_118 - 1 & 0x7ff;
        }
        *local_70 = local_68;
        *local_6c = local_118;
        if ((((&g_bss_001bcded)[local_80] == '\0') || ((&g_bss_001bcded)[local_7c] == '\0')) &&
           (local_8c <
            (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                 (*(uint *)((int)&g_map_subtiles +
                                           (local_84 * 0x100 + local_88) * 5 + 1) & 0x7ff) * 0x18 +
                                 2) >> 4))) {
          if ((int)local_7c < (int)local_80) {
            LbScreenWaitVbi();
            LbScreenWaitVbi();
          }
          else {
            LbScreenWaitVbi();
          }
        }
        goto LAB_000b0414;
      }
      local_74 = (uint)(local_8c <
                       (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                            (*(uint *)((int)&g_map_subtiles +
                                                      (local_88 + local_4c) * 5 + 1) & 0x7ff) * 0x18
                                            + 2) >> 4));
      if (local_74 != 0) {
        local_5c = &local_80;
        local_58 = &local_7c;
        if (local_88 == local_164) {
          if (local_84 < local_3c) {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (uint)uval_3 % 0x800;
          }
          else {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (int)(uint)uval_3 % extraout_ECX_22 & 0xffff;
          }
        }
        else if (local_3c == local_84) {
          if (local_88 < local_164) {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (int)(uint)uval_3 % extraout_ECX_23 & 0xffff;
          }
          else {
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (uint)uval_3 % 0x800;
          }
        }
        else {
          switch(local_158) {
          case 0:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (uint)uval_3 % 0x800;
            break;
          case 1:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (uint)uval_3 % 0x800;
            break;
          case 2:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (int)(uint)uval_3 % extraout_ECX_24 & 0xffff;
            break;
          case 3:
            uval_3 = bflib_system_io_fn_0e66ec();
            local_54 = (uint)uval_3 % 0x800;
            uval_3 = bflib_system_io_fn_0e66ec();
            local_50 = (int)(uint)uval_3 % extraout_ECX_25 & 0xffff;
          }
        }
        if (((int)((local_54 + ((int)local_54 >> 0x1f) * -0x200) -
                  (uint)(((int)local_54 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_54) {
          local_54 = local_54 + 1 & 0x7ff;
        }
        if (((int)((local_50 + ((int)local_50 >> 0x1f) * -0x200) -
                  (uint)(((int)local_50 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_50) {
          local_50 = local_50 - 1 & 0x7ff;
        }
        *local_5c = local_54;
        *local_58 = local_50;
        if ((int)local_7c < (int)local_80) {
          LbScreenWaitVbi();
        }
        LbScreenWaitVbi();
      }
      if (local_74 == 0) goto LAB_000b03b9;
      switch(local_78) {
      case 1:
        if ((int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                 (*(uint *)((int)&g_map_subtiles +
                                           (local_84 * 0x100 + (local_88 - 1)) * 5 + 1) & 0x7ff) *
                                 0x18 + 2) >> 4) <= local_8c) goto switchD_000b03a8_caseD_2;
        flag_2 = false;
        break;
      case 3:
        if (local_8c <
            (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                 (*(uint *)((int)&g_map_subtiles +
                                           ((local_84 - 1) * 0x100 + local_88) * 5 + 1) & 0x7ff) *
                                 0x18 + 2) >> 4)) goto switchD_000b03a8_caseD_4;
      default:
switchD_000b03a8_caseD_2:
        flag_2 = true;
        break;
      case 4:
switchD_000b03a8_caseD_4:
        flag_2 = false;
      }
      if (flag_2) {
LAB_000b03b9:
        val_8 = (int)((local_a8 - int_ptr[1]) * local_a4) / (int)local_a8;
        if (val_8 <= g_bss_001e31f5) {
          return;
        }
        if ((int)(uint)*(ushort *)(&g_bss_001c31f5 + (local_84 * 0x100 + local_88) * 2) < val_8) {
          *(ushort *)(&g_bss_001c31f5 + (local_84 * 0x100 + local_88) * 2) = (ushort)val_8;
        }
      }
    }
LAB_000b0414:
    int_ptr = int_ptr + 2;
  } while( true );
}

/******************************************************************************
 * Function : light_fn_0b04e4 (Original VA: 0xb04e4, Ghidra: FUN_000b04e4)
 * Prototype: void light_fn_0b04e4(void);
 * Address  : 0xb04e4 (Size: 536 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0b04e4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void light_fn_0b04e4(void)

{
  longlong val;
  int arg_eax;
  int val_2;
  int val_3;
  uint uval;
  int val_4;
  int val_5;
  int arg_ecx;
  int val_6;
  int arg_edx;
  int val_7;
  uint uval_2;
  int arg_ebx;
  uint uval_3;
  uint *word_ptr;
  ushort *word_ptr_2;
  int val_8;
  bool flag;
  bool flag_2;
  bool flag_3;
  undefined *local_28;
  uint local_20;
  int local_18;
  
  val_4 = (uint)*(ushort *)(arg_eax + 0x10) * 0x81;
  val_7 = (uint)*(ushort *)(arg_eax + 0x28) + arg_ecx * -0x100;
  if (val_7 < 1) {
    val_7 = 0;
  }
  local_18 = (uint)*(ushort *)(arg_eax + 0x2a) + arg_ecx * -0x100;
  if (local_18 < 1) {
    local_18 = 0;
  }
  val_2 = (uint)*(ushort *)(arg_eax + 0x28) + arg_ecx * 0x100;
  if (0xfffe < val_2) {
    val_2 = 0xffff;
  }
  val_6 = arg_ecx * 0x100 + (uint)*(ushort *)(arg_eax + 0x2a);
  if (0xfffe < val_6) {
    val_6 = 0xffff;
  }
  val_3 = (int)((val_7 + (val_7 >> 0x1f) * -0x100) - (uint)((val_7 >> 0x1f) << 7 < 0)) >> 8;
  word_ptr_2 = &g_bss_001e3203 +
            ((int)((local_18 + (local_18 >> 0x1f) * -0x100) - (uint)((local_18 >> 0x1f) << 7 < 0))
            >> 8) * 0x100 + val_3;
  local_20 = *(uint *)(&g_bss_001c1dce + val_4);
  if (local_18 <= val_6) {
    word_ptr = &g_bss_00388e3c;
    flag_3 = SBORROW4(val_7,val_2);
    flag_2 = val_7 - val_2 < 0;
    flag = val_7 == val_2;
    val_8 = val_7;
    local_28 = &g_bss_001c1dcd + val_4;
    while( true ) {
      while (flag || flag_3 != flag_2) {
        if ((*word_ptr & local_20) != 0) {
          uval_3 = (uint)*(ushort *)(arg_eax + 0x2a) - local_18;
          uval = (uint)*(ushort *)(arg_eax + 0x28) - val_8;
          uval_2 = (int)uval >> 0x1f;
          val_4 = (uval ^ uval_2) - uval_2;
          uval = (int)uval_3 >> 0x1f;
          val_5 = (uval_3 ^ uval) - uval;
          if (val_5 < val_4) {
            val_4 = *(int *)(&g_data_0017a4d0 + ((val_5 * 0x100) / val_4) * 8) * val_4 >> 0xd;
          }
          else if (val_5 == 0) {
            val_4 = 0;
          }
          else {
            val_4 = *(int *)(&g_data_0017a4d0 + ((val_4 * 0x100) / val_5) * 8) * val_5 >> 0xd;
          }
          val = (longlong)((arg_edx - val_4) * arg_ebx) / (longlong)arg_edx;
          if ((int)(uint)*word_ptr_2 < (int)val) {
            *word_ptr_2 = (ushort)val;
          }
        }
        val_8 = val_8 + 0x100;
        word_ptr_2 = word_ptr_2 + 1;
        word_ptr = word_ptr + 1;
        flag_3 = SBORROW4(val_8,val_2);
        flag_2 = val_8 - val_2 < 0;
        flag = val_8 == val_2;
      }
      local_18 = local_18 + 0x100;
      local_20 = *(uint *)(local_28 + 5);
      word_ptr_2 = word_ptr_2 + (0xff - (((int)((val_2 + (val_2 >> 0x1f) * -0x100) -
                                         (uint)((val_2 >> 0x1f) << 7 < 0)) >> 8) - val_3));
      if (val_6 < local_18) break;
      word_ptr = &g_bss_00388e3c;
      flag_3 = SBORROW4(val_7,val_2);
      flag_2 = val_7 - val_2 < 0;
      flag = val_7 == val_2;
      val_8 = val_7;
      local_28 = local_28 + 4;
    }
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0b06fc (Original VA: 0xb06fc, Ghidra: FUN_000b06fc)
 * Prototype: void light_fn_0b06fc(void);
 * Address  : 0xb06fc (Size: 381 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0b06fc
 * Callers  : 0 -> 
 * Callees  : 1 -> light_maintain_gui_button_state_0adbc0
 ******************************************************************************/
void light_fn_0b06fc(void)

{
  int val;
  int arg_eax;
  int val_2;
  uint arg_ecx;
  uint loop_i;
  uint arg_edx;
  uint uval;
  undefined4 *word_ptr;
  int arg_ebx;
  byte *byte_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  byte flag;
  
  flag = 0;
  val_2 = (arg_ebx - arg_eax) / 2 + 1;
  val = (int)(arg_ecx - arg_edx) / 2 + 1;
  if ((g_bss_001e31f9 != '\0') &&
     (byte_ptr = &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e, &g_bss_001bd5ed < byte_ptr)) {
    do {
      if (((*byte_ptr & 8) != 0) || ((*byte_ptr & 0x80) != 0)) {
        g_bss_00388e34 = g_bss_00388e34 + 1;
        loop_i = (arg_eax + val_2) - (uint)byte_ptr[0x29];
        uval = (int)loop_i >> 0x1f;
        if (((int)((loop_i ^ uval) - uval) < (int)((uint)byte_ptr[5] + val_2)) &&
           (loop_i = (arg_edx + val) - (uint)byte_ptr[0x2b], uval = (int)loop_i >> 0x1f,
           (int)((loop_i ^ uval) - uval) < (int)(val + (uint)byte_ptr[5]))) {
          g_bss_00388e30 = g_bss_00388e30 + 1;
          light_maintain_gui_button_state_0adbc0();
          *byte_ptr = *byte_ptr & 0x77;
        }
      }
      byte_ptr = &g_bss_001bd5ed + (uint)*(ushort *)(byte_ptr + 0x26) * 0x2e;
    } while (&g_bss_001bd5ed < byte_ptr);
  }
  val_2 = arg_edx * 0x100 + arg_eax;
  word_ptr_2 = (undefined4 *)(&g_bss_001e3203 + val_2);
  word_ptr = (undefined4 *)(&g_bss_001c31f5 + val_2 * 2);
  for (; arg_edx <= arg_ecx; arg_edx = arg_edx + 1) {
    word_ptr_3 = word_ptr;
    word_ptr_4 = word_ptr_2;
    for (loop_i = (arg_ebx - arg_eax & 0x7fffffffU) >> 1; loop_i != 0; loop_i = loop_i - 1) {
      *word_ptr_4 = *word_ptr_3;
      word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
    }
    for (loop_i = (arg_ebx - arg_eax) * 2 & 3; loop_i != 0; loop_i = loop_i - 1) {
      *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
      word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
      word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag * -2 + 1);
    }
    word_ptr_2 = word_ptr_2 + 0x80;
    word_ptr = word_ptr + 0x80;
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0b087c (Original VA: 0xb087c, Ghidra: FUN_000b087c)
 * Prototype: void light_fn_0b087c(void);
 * Address  : 0xb087c (Size: 158 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0b087c
 * Callers  : 8 -> light_fn_0ac9e8, light_fn_0aca0c, light_fn_0aca68, light_attempt_delete_light_0acce4, light_fn_0acdfc, light_attempt_set_intensity_unallocated_0ad148, light_attempt_set_size_unallocated_0ad290, light_attempt_turn_off_unallocated_0ad66c
 * Callees  : 1 -> light_process_map_subtile_0b0980
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void light_fn_0b087c(void)

{
  byte flag;
  int arg_eax;
  uint uval;
  int arg_ecx;
  int arg_edx;
  byte *loop_i;
  int arg_ebx;
  int val;
  
  val = 0;
  for (loop_i = &g_bss_001bd61b; loop_i < &g_bss_001c1dcd; loop_i = loop_i + 0x2e) {
    if (((*loop_i & 1) != 0) && ((*loop_i & 4) == 0)) {
      uval = (uint)loop_i[5];
      if ((arg_eax <= (int)(loop_i[0x29] + uval)) &&
         ((((int)(loop_i[0x29] - uval) <= arg_ebx && (arg_edx <= (int)(loop_i[0x2b] + uval))) &&
          ((int)(loop_i[0x2b] - uval) <= arg_ecx)))) {
        flag = *loop_i;
        g_bss_00388e38 = 1;
        *loop_i = flag | 8;
        val = val + 1;
        *loop_i = flag & 0x7f | 8;
      }
    }
  }
  if (val != 0) {
    light_process_map_subtile_0b0980();
  }
  return;
}

/******************************************************************************
 * Function : light_process_map_subtile_0b0980 (Original VA: 0xb0980, Ghidra: FUN_000b0980)
 * Prototype: void light_process_map_subtile_0b0980(void);
 * Address  : 0xb0980 (Size: 308 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> light_fn_0aca0c, light_fn_0b087c
 * Callees  : 0 -> 
 ******************************************************************************/
void light_process_map_subtile_0b0980(void)

{
  int arg_eax;
  int val;
  int arg_ecx;
  int val_2;
  int arg_edx;
  int val_3;
  int arg_ebx;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  int val_8;
  int val_9;
  
  val = arg_edx - arg_ecx;
  while (arg_edx == arg_ecx || SBORROW4(arg_edx,arg_ecx) != val < 0) {
    if (arg_eax <= arg_ebx) {
      val_5 = arg_eax * 5 + arg_edx * 0x500;
      val = arg_eax + -1;
      val_3 = arg_edx + -1;
      val_4 = arg_eax * 2 + arg_edx * 0x200;
      val_2 = arg_eax;
      do {
        val_6 = val_3;
        if (val_3 < 1) {
          val_6 = 0;
        }
        val_7 = val;
        if (val < 1) {
          val_7 = 0;
        }
        val_8 = val_3;
        if (val_3 < 1) {
          val_8 = 0;
        }
        val_9 = val;
        if (val < 1) {
          val_9 = 0;
        }
        if (((((*(uint *)((int)&g_map_subtiles + val_5 + 1) & 0x7ff) == 0) ||
             ((*(uint *)((int)&g_map_subtiles + (val_6 * 0x100 + val_2) * 5 + 1) & 0x7ff) == 0)) ||
            ((*(uint *)((int)&g_map_subtiles + (val_7 + arg_edx * 0x100) * 5 + 1) & 0x7ff) == 0)) ||
           ((*(uint *)((int)&g_map_subtiles + (val_9 + val_8 * 0x100) * 5 + 1) & 0x7ff) == 0)) {
          *(undefined2 *)(&g_bss_001c31f5 + val_4) = 0;
        }
        else {
          *(short *)(&g_bss_001c31f5 + val_4) = (short)g_bss_001e31f5 << 8;
        }
        val_5 = val_5 + 5;
        val = val + 1;
        val_2 = val_2 + 1;
        val_4 = val_4 + 2;
      } while (val_2 <= arg_ebx);
    }
    arg_edx = arg_edx + 1;
    val = arg_edx - arg_ecx;
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0b0ab4 (Original VA: 0xb0ab4, Ghidra: FUN_000b0ab4)
 * Prototype: void light_fn_0b0ab4(void);
 * Address  : 0xb0ab4 (Size: 108 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0b0ab4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void light_fn_0b0ab4(void)

{
  byte *thing;
  
  if (thing[6] == 1) {
    if ((uint)*(ushort *)(thing + 0x1e) + (uint)*(ushort *)(thing + 0x16) <
        (uint)*(ushort *)(thing + 0x20)) { /* thing->model */
      *(short *)(thing + 0x16) = *(short *)(thing + 0x16) + *(short *)(thing + 0x1e);
    }
    else {
      thing[6] = 2;
      *(ushort *)(thing + 0x16) = *(ushort *)(thing + 0x20); /* thing->model */
    }
  }
  else {
    if ((int)(uint)*(ushort *)(thing + 0x22) <
        (int)((uint)*(ushort *)(thing + 0x16) - (uint)*(ushort *)(thing + 0x1e))) {
      *(short *)(thing + 0x16) = *(short *)(thing + 0x16) - *(short *)(thing + 0x1e);
      *thing = *thing | 8;
      return;
    }
    thing[6] = 1;
    *(ushort *)(thing + 0x16) = *(ushort *)(thing + 0x22);
  }
  *thing = *thing | 8;
  return;
}

/******************************************************************************
 * Function : light_fn_0b0b20 (Original VA: 0xb0b20, Ghidra: FUN_000b0b20)
 * Prototype: void light_fn_0b0b20(void);
 * Address  : 0xb0b20 (Size: 26 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0b0b20
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void light_fn_0b0b20(void)

{
  byte *arg_eax;
  
  *(short *)(arg_eax + 0x18) = *(short *)(arg_eax + 0x18) + *(short *)(arg_eax + 0x1c);
  *arg_eax = *arg_eax | 8;
  return;
}

/******************************************************************************
 * Function : light_fn_0b0b9c (Original VA: 0xb0b9c, Ghidra: FUN_000b0b9c)
 * Prototype: longlong light_fn_0b0b9c(void);
 * Address  : 0xb0b9c (Size: 58 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0b0b9c
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000b0bab) */

longlong light_fn_0b0b9c(void)

{
  uint arg_edx;
  byte *byte_ptr;
  
  byte_ptr = &g_bss_001c1e4e;
  do {
    if ((*byte_ptr & 1) == 0) {
      *byte_ptr = *byte_ptr | 1;
      return CONCAT44(arg_edx,byte_ptr);
    }
    byte_ptr = byte_ptr + 0x81;
  } while (byte_ptr < &g_bss_001c31f5);
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : light_fn_0b0c44 (Original VA: 0xb0c44, Ghidra: FUN_000b0c44)
 * Prototype: undefined8 light_fn_0b0c44(void);
 * Address  : 0xb0c44 (Size: 198 bytes)
 * Module   : light.cpp [contiguous_same_unit_span]
 * Purpose  : Module light.cpp procedure @ 0x0b0c44
 * Callers  : 2 -> get_thing_anim_sprite_id_checked, update_thing_anim_sprite_frame
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 light_fn_0b0c44(void)

{
  int arg_eax;
  uint uval;
  undefined4 arg_edx;
  uint uval_2;
  int val;
  uint uval_3;
  int val_2;
  
  uval_2 = (uint)*(byte *)(arg_eax + 0xe);
  uval_3 = uval_2 + 1;
  if (0xfe < uval_3) {
    uval_3 = 0xff;
  }
  uval = *(byte *)(arg_eax + 0x10) + 1;
  if (0xfe < uval) {
    uval = 0xff;
  }
  val_2 = (uint)*(byte *)(arg_eax + 0x10) * 0x100;
  val = (uint)(ushort)(&g_bss_001e3203)[uval_2 + val_2] +
          ((int)(((uint)(ushort)(&g_bss_001e3203)[uval_2 + uval * 0x100] -
                 (uint)(ushort)(&g_bss_001e3203)[uval_2 + val_2]) * (uint)*(byte *)(arg_eax + 0xf)) >> 8
          );
  val = ((int)((uint)*(byte *)(arg_eax + 0xd) *
                ((((int)((uint)*(byte *)(arg_eax + 0xf) *
                        ((uint)(ushort)(&g_bss_001e3203)[uval * 0x100 + uval_3] -
                        (uint)(ushort)(&g_bss_001e3203)[val_2 + uval_3])) >> 8) +
                 (uint)(ushort)(&g_bss_001e3203)[val_2 + uval_3]) - val)) >> 8) + val;
  if ((val < 0x2000) && (val = val + 0x800, 0x2000 < val)) {
    val = 0x2000;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : light_fn_0b0d0c (Original VA: 0xb0d0c, Ghidra: FUN_000b0d0c)
 * Prototype: int light_fn_0b0d0c(void);
 * Address  : 0xb0d0c (Size: 586 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 2725
 * Purpose  : Module light.cpp procedure @ 0x0b0d0c
 * Callers  : 1 -> ssprite_decode_and_blit_rle_frame
 * Callees  : 1 -> update_fn_0dc440
 ******************************************************************************/
int light_fn_0b0d0c(void)

{
  ushort *word_ptr;
  short *arg_eax;
  int loop_i;
  undefined4 *word_ptr_2;
  int val;
  undefined4 *arg_edx;
  byte flag;
  int aiStack_40 [6];
  int local_28;
  int local_24;
  undefined4 *local_20;
  byte *local_1c;
  byte *local_18;
  
  flag = 0;
  local_24 = 0;
  if (g_bss_002ee8d2 != 0) {
    val = 0;
    local_20 = arg_edx;
    for (loop_i = 0; loop_i < (int)(uint)g_bss_002ee8d2; loop_i = loop_i + 1) {
      *(undefined4 *)((int)aiStack_40 + val + 4) = 0x7fffffff;
      val = val + 4;
    }
    local_18 = &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e;
    if (&g_bss_001bd5ed < &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e) {
      do {
        if ((*local_18 & 1) != 0) {
          aiStack_40[0] = 0xb0db0;
          local_28 = update_fn_0dc440();
          if ((((local_28 < 0xa00) && (local_28 < aiStack_40[g_bss_002ee8d2])) &&
              (*arg_eax != *(short *)(local_18 + 0x28))) &&
             (arg_eax[1] != *(short *)(local_18 + 0x2a))) {
            if ((1 < g_bss_002ee8d2) && (val = g_bss_002ee8d2 - 1, 0 < val)) {
              loop_i = val * 4;
              word_ptr_2 = (undefined4 *)(val * 6 + -6 + (int)local_20);
              do {
                *(undefined4 *)((int)aiStack_40 + loop_i + 4) =
                     *(undefined4 *)((int)aiStack_40 + loop_i);
                loop_i = loop_i + -4;
                *(undefined4 *)((int)word_ptr_2 + 6) = *word_ptr_2;
                *(undefined2 *)((int)word_ptr_2 + (uint)flag * -8 + 10) =
                     *(undefined2 *)(word_ptr_2 + (uint)flag * -2 + 1);
                word_ptr_2 = (undefined4 *)((int)word_ptr_2 + -6);
              } while (0 < loop_i);
            }
            aiStack_40[1] = local_28;
            *local_20 = *(undefined4 *)(local_18 + 0x28);
            *(undefined2 *)(local_20 + (uint)flag * -2 + 1) =
                 *(undefined2 *)(local_18 + (uint)flag * -8 + 0x2c);
          }
        }
        word_ptr = (ushort *)(local_18 + 0x26);
        local_18 = &g_bss_001bd5ed + (uint)*word_ptr * 0x2e;
      } while (&g_bss_001bd5ed < &g_bss_001bd5ed + (uint)*word_ptr * 0x2e);
    }
    local_1c = &g_bss_001bd5ed + g_bss_002e6f16 * 0x2e;
    if (&g_bss_001bd5ed < &g_bss_001bd5ed + g_bss_002e6f16 * 0x2e) {
      do {
        if ((*local_1c & 1) != 0) {
          aiStack_40[0] = 0xb0e9b;
          aiStack_40[5] = update_fn_0dc440();
          if (((aiStack_40[5] < 0xa00) && (aiStack_40[5] < aiStack_40[g_bss_002ee8d2])) &&
             ((*arg_eax != *(short *)(local_1c + 0x28) && (arg_eax[1] != *(short *)(local_1c + 0x2a)))
             )) {
            if ((1 < g_bss_002ee8d2) && (val = g_bss_002ee8d2 - 1, 0 < val)) {
              loop_i = val * 4;
              word_ptr_2 = (undefined4 *)(val * 6 + -6 + (int)local_20);
              do {
                *(undefined4 *)((int)aiStack_40 + loop_i + 4) =
                     *(undefined4 *)((int)aiStack_40 + loop_i);
                loop_i = loop_i + -4;
                *(undefined4 *)((int)word_ptr_2 + 6) = *word_ptr_2;
                *(undefined2 *)((int)word_ptr_2 + (uint)flag * -8 + 10) =
                     *(undefined2 *)(word_ptr_2 + (uint)flag * -2 + 1);
                word_ptr_2 = (undefined4 *)((int)word_ptr_2 + -6);
              } while (0 < loop_i);
            }
            aiStack_40[1] = aiStack_40[5];
            *local_20 = *(undefined4 *)(local_1c + 0x28);
            *(undefined2 *)(local_20 + (uint)flag * -2 + 1) =
                 *(undefined2 *)(local_1c + (uint)flag * -8 + 0x2c);
          }
        }
        word_ptr = (ushort *)(local_1c + 0x26);
        local_1c = &g_bss_001bd5ed + (uint)*word_ptr * 0x2e;
      } while (&g_bss_001bd5ed < &g_bss_001bd5ed + (uint)*word_ptr * 0x2e);
    }
    val = 0;
    for (loop_i = 0;
        (val < (int)(uint)g_bss_002ee8d2 && (*(int *)((int)aiStack_40 + loop_i + 4) != 0x7fffffff));
        loop_i = loop_i + 4) {
      val = val + 1;
      local_24 = local_24 + 1;
    }
  }
  return local_24;
}

/******************************************************************************
 * Function : light_prev_when_removing_light_0b0f94 (Original VA: 0xb0f94, Ghidra: FUN_000b0f94)
 * Prototype: void light_prev_when_removing_light_0b0f94(void);
 * Address  : 0xb0f94 (Size: 298 bytes)
 * Module   : light.cpp [direct_file_string_xref]
 * OrigLine : light.cpp lines 2764, 2773, 2778
 * Purpose  : String 'No prev when removing light from list'
 * Callers  : 2 -> light_attempt_delete_light_0acce4, light_attempt_turn_off_unallocated_0ad66c
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
void light_prev_when_removing_light_0b0f94(void)

{
  ushort *word_ptr;
  bool flag;
  undefined1 *arg_eax;
  undefined1 *word_ptr_2;
  undefined1 *extraout_ECX;
  int *arg_edx;
  undefined1 *word_ptr_3;
  
  flag = false;
  if ((arg_eax[1] & 1) != 0) {
    if ((uint)*(ushort *)(arg_eax + 0xe) == arg_edx[1]) {
      flag = true;
      arg_edx[1] = CONCAT22((short)((uint)arg_edx[1] >> 0x10),*(undefined2 *)(arg_eax + 0x26));
      *arg_edx = *arg_edx + -1;
      *(undefined2 *)(arg_eax + 0x26) = 0;
      arg_eax[1] = arg_eax[1] & 0xfe;
    }
    else {
      word_ptr_2 = (undefined1 *)0x0;
      word_ptr_3 = &g_bss_001bd5ed + arg_edx[1] * 0x2e;
      if (&g_bss_001bd5ed + arg_edx[1] * 0x2e != &g_bss_001bd5ed) {
        do {
          if (word_ptr_3 == arg_eax) {
            flag = true;
            if (word_ptr_2 == (undefined1 *)0x0) {
              dk_sprintf(&g_log_sprintf_buf,s_No_prev_when_removing_light_from_0016ad33);
              LbErrorLog(); /* LbErrorLog("light.cpp", line 2764, g_log_buf) */
              arg_eax = extraout_ECX;
            }
            else {
              *(undefined2 *)(word_ptr_2 + 0x26) = *(undefined2 *)(arg_eax + 0x26);
              arg_eax[1] = arg_eax[1] & 0xfe;
              *arg_edx = *arg_edx + -1;
              *(undefined2 *)(arg_eax + 0x26) = 0;
            }
          }
          word_ptr = (ushort *)(word_ptr_3 + 0x26);
          word_ptr_2 = word_ptr_3;
          word_ptr_3 = &g_bss_001bd5ed + (uint)*word_ptr * 0x2e;
        } while (&g_bss_001bd5ed + (uint)*word_ptr * 0x2e != &g_bss_001bd5ed);
      }
    }
    if (!flag) {
      dk_sprintf(&g_log_sprintf_buf,s_Could_not_find_light__d_in_list_0016ad63,
                   *(undefined2 *)(arg_eax + 0xe));
      LbErrorLog(); /* LbErrorLog("light.cpp", line 2773, g_log_buf) */
    }
    if (*arg_edx < 0) {
      LbErrorLog(); /* LbErrorLog("light.cpp", line 2778, "List has < 0 structures") */
    }
  }
  return;
}

/******************************************************************************
 * Function : light_fn_0b10c0 (Original VA: 0xb10c0, Ghidra: FUN_000b10c0)
 * Prototype: void light_fn_0b10c0(void);
 * Address  : 0xb10c0 (Size: 689 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b10c0
 * Callers  : 1 -> light_fn_0ac630
 * Callees  : 1 -> light_fn_0b182c
 ******************************************************************************/
void light_fn_0b10c0(void)

{
  int val;
  int val_2;
  uint uval;
  uint uval_2;
  undefined1 *word_ptr;
  undefined4 *word_ptr_2;
  int val_3;
  byte flag;
  int aiStack_60 [5];
  undefined1 auStack_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34 [5];
  uint local_20;
  char local_1c [4];
  
  flag = 0;
  word_ptr_2 = (undefined4 *)auStack_4c;
  val_3 = 0;
  local_20 = 1;
  local_44 = 0x100;
  local_34[4] = 0x100;
  local_40 = 0;
  do {
    do {
      val_2 = *(int *)((int)&PTR_LAB_00192fe0 + *(int *)((int)word_ptr_2 + 0xc));
      *(int *)((int)word_ptr_2 + 0x14) =
           *(int *)((int)word_ptr_2 + 0x28) * *(int *)((int)&g_slab_attr_table + *(int *)((int)word_ptr_2 + 0xc))
           >> 0x10;
      *(int *)((int)word_ptr_2 + 0x18) = -(*(int *)((int)word_ptr_2 + 0x28) * val_2 >> 8) >> 8;
      val_2 = *(int *)((int)word_ptr_2 + 0x14) >> 0x1f;
      *(int *)((int)word_ptr_2 + 0x14) =
           (int)((*(int *)((int)word_ptr_2 + 0x14) + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
      val_2 = *(int *)((int)word_ptr_2 + 0x18) >> 0x1f;
      val_2 = (int)((*(int *)((int)word_ptr_2 + 0x18) + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
      *(int *)((int)word_ptr_2 + 0x18) = val_2;
      uval_2 = val_2 << 8;
      uval = (*(int *)((int)word_ptr_2 + 0x14) << 8) >> 0x1f;
      val_2 = (*(int *)((int)word_ptr_2 + 0x14) << 8 ^ uval) - uval;
      uval = (int)uval_2 >> 0x1f;
      val = (uval_2 ^ uval) - uval;
      if (val < val_2) {
        val_2 = *(int *)(&g_data_0017a4d0 + ((val * 0x100) / val_2) * 8) * val_2 >> 0xd;
      }
      else if (val == 0) {
        val_2 = 0;
      }
      else {
        val_2 = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val) * 8) * val >> 0xd;
      }
      *(int *)((int)word_ptr_2 + 0x10) = val_2;
      word_ptr = (undefined1 *)word_ptr_2;
      if ((*(int *)((int)word_ptr_2 + 0x14) != 0) || (*(int *)((int)word_ptr_2 + 0x18) != 0)) {
        do {
          val = 0;
          word_ptr[0x30] = 0;
          val_2 = 0;
          do {
            if (*(char *)((int)&g_bss_001baded + val_2) == '\0') break;
            if ((*(int *)((int)&g_bss_001bade9 + val_2 + 3) >> 0x18 == *(int *)(word_ptr + 0x14)) &&
               (*(int *)((int)&g_bss_001baded + val_2) >> 0x18 == *(int *)(word_ptr + 0x18))) {
              *(int *)(word_ptr + 0x24) = val;
              word_ptr[0x30] = 1;
              break;
            }
            val_2 = val_2 + 8;
            val = val + 1;
          } while (val_2 < 0x2000);
          if (word_ptr[0x30] == '\0') {
            *(undefined1 *)((int)&g_bss_001baded + val_3 * 8 + 2) = word_ptr[0x14];
            *(undefined1 *)((int)&g_bss_001baded + val_3 * 8 + 3) = word_ptr[0x18];
            *(undefined1 *)((int)&g_bss_001baded + val_3 * 8 + 1) = word_ptr[0x2c];
            (&g_bss_001badf1)[val_3 * 2] = *(undefined4 *)(word_ptr + 0x10);
            *(undefined1 **)(word_ptr + -4) = word_ptr + 0x20;
            *(undefined1 **)(word_ptr + -8) = word_ptr + 0x1c;
            *(int *)(word_ptr + -0xc) = *(int *)(word_ptr + 0x18) + 1;
            val_2 = *(int *)(word_ptr + 0x14);
            *(undefined1 *)(&g_bss_001baded + val_3 * 2) = 1;
            word_ptr_2 = (undefined4 *)(word_ptr + -0x10);
            *(int *)(word_ptr + -0x10) = val_2 + 1;
            val_3 = val_3 + 1;
            *(undefined4 *)(word_ptr + -0x14) = 0xb12f9;
            light_fn_0b182c();
          }
          else {
            word_ptr_2 = (undefined4 *)word_ptr;
            if ((uint)*(byte *)((int)&g_bss_001baded + *(int *)(word_ptr + 0x24) * 8 + 1) ==
                *(uint *)(word_ptr + 0x2c)) break;
            val_2 = *(int *)(word_ptr + 0x24) * 8;
            if (*(int *)(word_ptr + 0x24) < 0x3ff) {
              do {
                if (*(char *)((int)&g_bss_001baded + val_2) == '\0') break;
                val = val_2 + 8;
                *(undefined4 *)((int)&g_bss_001baded + val_2) =
                     *(undefined4 *)((int)&g_bss_001badf5 + val_2);
                *(undefined4 *)((int)&g_bss_001badf1 + (uint)flag * -8 + val_2) =
                     *(undefined4 *)((int)&g_bss_001badf9 + (uint)flag * -8 + val_2);
                val_2 = val;
              } while (val < 0x1ff8);
            }
            val_3 = val_3 + -1;
          }
          word_ptr = (undefined1 *)word_ptr_2;
        } while (*(char *)((int)word_ptr_2 + 0x30) != '\0');
      }
      val_2 = word_ptr_2[3];
      word_ptr_2[3] = val_2 + 4;
    } while (val_2 + 4 != 0x2000);
    val_2 = word_ptr_2[0xb];
    word_ptr_2[2] = word_ptr_2[2] + 0x100;
    word_ptr_2[0xb] = val_2 + 1;
    if (0xf < val_2 + 1) {
      uval = 0x100;
      g_bss_001e31ff = val_3;
      do {
        uval = uval & 0xffffff00;
        val_3 = 0;
        do {
          if ((*(char *)((int)&g_bss_001baded + val_3) == '\0') ||
             (*(char *)((int)&g_bss_001badf5 + val_3) == '\0')) break;
          if (*(int *)((int)&g_bss_001badf9 + val_3) < *(int *)((int)&g_bss_001badf1 + val_3)) {
            *word_ptr_2 = *(undefined4 *)((int)&g_bss_001baded + val_3);
            word_ptr_2[(uint)flag * -2 + 1] =
                 *(undefined4 *)((int)&g_bss_001badf1 + (uint)flag * -8 + val_3);
            *(undefined4 *)((int)&g_bss_001baded + val_3) =
                 *(undefined4 *)((int)&g_bss_001badf5 + val_3);
            *(undefined4 *)((int)&g_bss_001badf1 + (uint)flag * -8 + val_3) =
                 *(undefined4 *)((int)&g_bss_001badf9 + (uint)flag * -8 + val_3);
            uval = CONCAT31((int3)(uval >> 8),(char)(uval >> 8));
            *(undefined4 *)((int)&g_bss_001badf5 + val_3) = *word_ptr_2;
            *(undefined4 *)((int)&g_bss_001badf9 + (uint)flag * -8 + val_3) =
                 word_ptr_2[(uint)flag * -2 + 1];
          }
          val_3 = val_3 + 8;
        } while (val_3 < 0x1ff8);
        if ((char)uval == '\0') {
          return;
        }
      } while( true );
    }
    word_ptr_2[10] = word_ptr_2[2];
    word_ptr_2[3] = 0;
  } while( true );
}

/******************************************************************************
 * Function : light_fn_0b1398 (Original VA: 0xb1398, Ghidra: FUN_000b1398)
 * Prototype: void light_fn_0b1398(void);
 * Address  : 0xb1398 (Size: 40 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b1398
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void light_fn_0b1398(void)

{
  byte flag;
  int val;
  int val_2;
  byte flag_2;
  
  flag_2 = 0x1f;
  val = 0;
  do {
    val_2 = val + 4;
    flag = flag_2 & 0x1f;
    flag_2 = flag_2 - 1;
    *(int *)((int)&g_bss_00388e3c + val) = 1 << flag;
    val = val_2;
  } while (val_2 != 0x80);
  return;
}

/******************************************************************************
 * Function : light_fn_0b13c0 (Original VA: 0xb13c0, Ghidra: FUN_000b13c0)
 * Prototype: undefined4 light_fn_0b13c0(int param_1,int param_2);
 * Address  : 0xb13c0 (Size: 183 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b13c0
 * Callers  : 2 -> light_fn_0b14a0, light_fn_0b182c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 light_fn_0b13c0(int param_1,int param_2)

{
  int arg_eax;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  if ((arg_eax < arg_ebx) || (param_1 < arg_eax)) {
    if (arg_eax < arg_ebx) {
      if ((arg_ecx <= arg_edx) && (arg_edx <= param_2)) {
        return 3;
      }
      if (param_2 < arg_edx) {
        return 2;
      }
      if (arg_edx < arg_ecx) {
        return 4;
      }
    }
    else if (param_1 < arg_eax) {
      if ((arg_ecx <= arg_edx) && (arg_edx <= param_2)) {
        return 7;
      }
      if (param_2 < arg_edx) {
        return 8;
      }
      if (arg_edx < arg_ecx) {
        return 6;
      }
    }
  }
  else {
    if ((arg_ecx <= arg_edx) && (arg_edx <= param_2)) {
      return 0xffffffff;
    }
    if (param_2 < arg_edx) {
      return 1;
    }
    if (arg_edx < arg_ecx) {
      return 5;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : light_fn_0b14a0 (Original VA: 0xb14a0, Ghidra: FUN_000b14a0)
 * Prototype: void light_fn_0b14a0(uint *param_1,uint *param_2);
 * Address  : 0xb14a0 (Size: 866 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b14a0
 * Callers  : 0 -> 
 * Callees  : 2 -> light_fn_0b13c0, bflib_system_io_fn_0e66ec
 ******************************************************************************/
void light_fn_0b14a0(uint *param_1,uint *param_2)

{
  ushort uval;
  undefined4 uval_2;
  uint arg_ecx;
  uint unaff_EBP;
  uint local_18;
  
  uval_2 = light_fn_0b13c0(param_1,param_2);
  local_18 = arg_ecx;
  switch(uval_2) {
  case 1:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 2:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 3:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 4:
    bflib_system_io_fn_0e66ec();
    bflib_system_io_fn_0e66ec();
  case 5:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 6:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 7:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 8:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 0xffffffff:
    unaff_EBP = 0;
    local_18 = 0;
  }
  if (((int)((local_18 + ((int)local_18 >> 0x1f) * -0x200) -
            (uint)(((int)local_18 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_18) {
    local_18 = local_18 + 1 & 0x7ff;
  }
  if (((int)((unaff_EBP + ((int)unaff_EBP >> 0x1f) * -0x200) -
            (uint)(((int)unaff_EBP >> 0x1f) << 8 < 0)) >> 9) * 0x200 != unaff_EBP) {
    unaff_EBP = unaff_EBP - 1 & 0x7ff;
  }
  *param_1 = local_18;
  *param_2 = unaff_EBP;
  return;
}

/******************************************************************************
 * Function : light_fn_0b182c (Original VA: 0xb182c, Ghidra: FUN_000b182c)
 * Prototype: void light_fn_0b182c(uint *param_1,uint *param_2);
 * Address  : 0xb182c (Size: 866 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b182c
 * Callers  : 1 -> light_fn_0b10c0
 * Callees  : 2 -> light_fn_0b13c0, bflib_system_io_fn_0e66ec
 ******************************************************************************/
void light_fn_0b182c(uint *param_1,uint *param_2)

{
  ushort uval;
  undefined4 uval_2;
  uint arg_ecx;
  uint unaff_EBP;
  uint local_18;
  
  uval_2 = light_fn_0b13c0(param_1,param_2);
  local_18 = arg_ecx;
  switch(uval_2) {
  case 1:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 2:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 3:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 4:
    bflib_system_io_fn_0e66ec();
    bflib_system_io_fn_0e66ec();
  case 5:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 6:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 7:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 8:
    uval = bflib_system_io_fn_0e66ec();
    local_18 = (uint)uval % 0x800;
    uval = bflib_system_io_fn_0e66ec();
    unaff_EBP = (uint)uval % 0x800;
    break;
  case 0xffffffff:
    unaff_EBP = 0;
    local_18 = 0;
  }
  if (((int)((local_18 + ((int)local_18 >> 0x1f) * -0x200) -
            (uint)(((int)local_18 >> 0x1f) << 8 < 0)) >> 9) * 0x200 != local_18) {
    local_18 = local_18 + 1 & 0x7ff;
  }
  if (((int)((unaff_EBP + ((int)unaff_EBP >> 0x1f) * -0x200) -
            (uint)(((int)unaff_EBP >> 0x1f) << 8 < 0)) >> 9) * 0x200 != unaff_EBP) {
    unaff_EBP = unaff_EBP - 1 & 0x7ff;
  }
  *param_1 = local_18;
  *param_2 = unaff_EBP;
  return;
}

/******************************************************************************
 * Function : light_fn_0b1b90 (Original VA: 0xb1b90, Ghidra: FUN_000b1b90)
 * Prototype: bool light_fn_0b1b90(void);
 * Address  : 0xb1b90 (Size: 52 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b1b90
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool light_fn_0b1b90(void)

{
  int arg_eax;
  int arg_edx;
  
  return arg_edx < (int)(uint)(*(byte *)((int)&g_bss_0019e973 +
                                       (*(uint *)(arg_eax + 1) & 0x7ff) * 0x18 + 2) >> 4);
}

/******************************************************************************
 * Function : light_fn_0b1c20 (Original VA: 0xb1c20, Ghidra: FUN_000b1c20)
 * Prototype: int light_fn_0b1c20(void);
 * Address  : 0xb1c20 (Size: 17 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b1c20
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int light_fn_0b1c20(void)

{
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  return ((arg_edx - arg_ebx) * arg_eax) / arg_edx;
}

/******************************************************************************
 * Function : light_fn_0b1c40 (Original VA: 0xb1c40, Ghidra: FUN_000b1c40)
 * Prototype: void light_fn_0b1c40(void);
 * Address  : 0xb1c40 (Size: 42 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b1c40
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void light_fn_0b1c40(void)

{
  uint *word_ptr;
  int arg_eax;
  int val;
  char arg_cl;
  char arg_dl;
  uint uval;
  int arg_ebx;
  
  val = arg_eax + arg_ebx * 4;
  uval = 1 << (0x1fU - arg_dl & 0x1f);
  if (arg_cl != '\0') {
    word_ptr = (uint *)(val + 1);
    *word_ptr = *word_ptr | uval;
    return;
  }
  word_ptr = (uint *)(val + 1);
  *word_ptr = *word_ptr & ~uval;
  return;
}

/******************************************************************************
 * Function : light_fn_0b1f60 (Original VA: 0xb1f60, Ghidra: FUN_000b1f60)
 * Prototype: void light_fn_0b1f60(void);
 * Address  : 0xb1f60 (Size: 69 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b1f60
 * Callers  : 0 -> 
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void light_fn_0b1f60(void)

{
  int arg_eax;
  int arg_edx;
  
  if (arg_edx < arg_eax) {
    LbScreenWaitVbi();
  }
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : light_fn_0b20e0 (Original VA: 0xb20e0, Ghidra: FUN_000b20e0)
 * Prototype: void light_fn_0b20e0(void);
 * Address  : 0xb20e0 (Size: 119 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b20e0
 * Callers  : 1 -> evil_process_map_subtile_0298b5
 * Callees  : 4 -> column_fn_015318, structs_fn_072810, light_fn_0ac630, light_update_slab_subtile_columns_0b2158
 ******************************************************************************/
void light_fn_0b20e0(void)

{
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int extraout_EDX;
  int val_4;
  int val_5;
  
  do {
    light_update_slab_subtile_columns_0b2158();
  } while (extraout_EDX < 0x10000);
  val_3 = 0x10;
  val_5 = 0;
  do {
    val_4 = val_5 * 0x18;
    val = val_4 - val_3;
    val_2 = val_4;
    while (val != 0) {
      *(undefined2 *)((int)&g_bss_0019e97b + val_2) = 0;
      val = (val_2 + 2) - val_3;
      val_2 = val_2 + 2;
    }
    *(undefined1 *)((int)&g_bss_0019e977 + val_4 + 3) = 0;
    val_5 = val_5 + 1;
    *(undefined2 *)((int)&g_bss_0019e977 + val_4 + 1) = 1;
    column_fn_015318();
    val_3 = extraout_ECX;
  } while (val_5 < 0x7ff);
  light_fn_0ac630();
  structs_fn_072810();
  return;
}

/******************************************************************************
 * Function : light_update_slab_subtile_columns_0b2158 (Original VA: 0xb2158, Ghidra: FUN_000b2158)
 * Prototype: undefined8 light_update_slab_subtile_columns_0b2158(void);
 * Address  : 0xb2158 (Size: 151 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> light_fn_0b20e0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 light_update_slab_subtile_columns_0b2158(void)

{
  uint *word_ptr;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  
  (&g_bss_001e3203)[arg_eax] = 0x2000;
  word_ptr = (uint *)((int)&g_map_subtiles + arg_eax * 5 + 1);
  *word_ptr = *word_ptr & 0xf000000;
  *(undefined1 *)((int)&g_map_subtiles + arg_eax * 5) = 0;
  val = arg_eax / 0x100;
  if ((arg_eax % 0x100 < 0xff) &&
     (val = (int)((arg_eax + (arg_eax >> 0x1f) * -0x100) - (uint)((arg_eax >> 0x1f) << 7 < 0)) >> 8,
     val < 0xff)) {
    val = (&g_subtile_to_slab_lut)[arg_eax % 0x100] + (&g_subtile_to_slab_lut)[val] * 0x55;
    (&g_bss_002d33c8)[val * 6] = 0;
    (&g_bss_002d33c9)[val * 6] = 0;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : light_fn_0b21f0 (Original VA: 0xb21f0, Ghidra: FUN_000b21f0)
 * Prototype: void light_fn_0b21f0(void);
 * Address  : 0xb21f0 (Size: 89 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b21f0
 * Callers  : 2 -> file_fn_029bfe, file_process_map_subtile_02cb2b
 * Callees  : 1 -> column_fn_015318
 ******************************************************************************/
void light_fn_0b21f0(void)

{
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int val_4;
  int val_5;
  
  val_3 = 0x10;
  val_5 = 0;
  do {
    val_4 = val_5 * 0x18;
    val = val_4 - val_3;
    val_2 = val_4;
    while (val != 0) {
      *(undefined2 *)((int)&g_bss_0019e97b + val_2) = 0;
      val = (val_2 + 2) - val_3;
      val_2 = val_2 + 2;
    }
    *(undefined1 *)((int)&g_bss_0019e977 + val_4 + 3) = 0;
    val_5 = val_5 + 1;
    *(undefined2 *)((int)&g_bss_0019e977 + val_4 + 1) = 1;
    column_fn_015318();
    val_3 = extraout_ECX;
  } while (val_5 < 0x7ff);
  return;
}

/******************************************************************************
 * Function : light_fn_0b224c (Original VA: 0xb224c, Ghidra: FUN_000b224c)
 * Prototype: void light_fn_0b224c(void);
 * Address  : 0xb224c (Size: 52 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b224c
 * Callers  : 1 -> evil_fn_029800
 * Callees  : 0 -> 
 ******************************************************************************/
void light_fn_0b224c(void)

{
  int val;
  int val_3;
  int val_4;
  int val_2;
  
  val_3 = 0xc;
  val_4 = 0;
  do {
    val_2 = val_4 * 0x12;
    do {
      val = val_2 + 2;
      *(undefined2 *)((int)&g_bss_001aa973 + val_2) = 0;
      val_2 = val;
    } while (val != val_3);
    val_4 = val_4 + 1;
    val_3 = val_3 + 0x12;
  } while (val_4 < 0x200);
  return;
}

/******************************************************************************
 * Function : light_fn_0b2280 (Original VA: 0xb2280, Ghidra: FUN_000b2280)
 * Prototype: void light_fn_0b2280(void);
 * Address  : 0xb2280 (Size: 95 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Module light.cpp procedure @ 0x0b2280
 * Callers  : 2 -> file_fn_02a25c, inits_fn_0401ec
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void light_fn_0b2280(void)

{
  int val;
  uint extraout_ECX;
  uint uval;
  short short_val;
  int val_2;
  
  val_2 = 2;
  LbScreenWaitVbi();
  uval = extraout_ECX;
  do {
    short_val = 1;
    val = 0x12;
    do {
      if (*(ushort *)((int)&g_bss_001aa97b + val) == uval) {
        *(short *)(&g_bss_002e8c11 + val_2) = short_val;
        break;
      }
      val = val + 0x12;
      short_val = short_val + 1;
    } while (val < 0x2400);
    uval = uval + 1;
    val_2 = val_2 + 2;
    if (0x24f < (int)uval) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : light_process_map_subtile_0b2398 (Original VA: 0xb2398, Ghidra: FUN_000b2398)
 * Prototype: uint light_process_map_subtile_0b2398(void);
 * Address  : 0xb2398 (Size: 82 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 15 -> evil_could_find_position_028bae, person_update_creature_control_063dd3, shot_process_thing_entity_06ca16, shot_roll_action_random_06d4df, temple_update_creature_control_073607, temple_update_slab_subtile_columns_0739b9, move_fn_0b45b4, move_process_slabmap_tile_0b5264 ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint light_process_map_subtile_0b2398(void)

{
  byte flag;
  int arg_eax;
  int val;
  int arg_edx;
  
  val = (*(uint *)((int)&g_map_subtiles + (arg_edx * 0x100 + arg_eax) * 5 + 1) & 0x7ff) * 0x18;
  flag = *(byte *)((int)&g_bss_0019e973 + val + 2);
  if ((flag & 0xf0) != 0) {
    return *(int *)((int)&g_bss_0019e977 + (uint)(flag >> 4) * 2 + val) >> 0x10;
  }
  return (uint)*(ushort *)(&g_bss_002e8c11 + (*(int *)((int)&g_bss_0019e973 + val + 3) >> 0x10) * 2);
}

/******************************************************************************
 * Function : light_process_map_subtile_0b23ec (Original VA: 0xb23ec, Ghidra: FUN_000b23ec)
 * Prototype: undefined8 light_process_map_subtile_0b23ec(void);
 * Address  : 0xb23ec (Size: 80 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> update_state_return_type_human_0e0b1c, update_update_slab_subtile_columns_0e45c0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 light_process_map_subtile_0b23ec(void)

{
  byte flag;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  
  val = (*(uint *)((int)&g_map_subtiles + arg_eax * 5 + 1) & 0x7ff) * 0x18;
  flag = *(byte *)((int)&g_bss_0019e973 + val + 2);
  if ((flag & 0xf0) != 0) {
    return CONCAT44(arg_edx,*(int *)((int)&g_bss_0019e977 + (uint)(flag >> 4) * 2 + val) >> 0x10);
  }
  return CONCAT44(arg_edx,(uint)*(ushort *)
                                (&g_bss_002e8c11 +
                                (*(int *)((int)&g_bss_0019e973 + val + 3) >> 0x10) * 2));
}

/******************************************************************************
 * Function : light_process_map_subtile_0b2440 (Original VA: 0xb2440, Ghidra: FUN_000b2440)
 * Prototype: undefined8 light_process_map_subtile_0b2440(void);
 * Address  : 0xb2440 (Size: 39 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> person_update_creature_control_0640f7, script_update_creature_and_thing_068788, update_update_slab_subtile_columns_0df760
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 light_process_map_subtile_0b2440(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,((*(uint *)((int)&g_map_subtiles +
                                    ((uint)*(byte *)(arg_eax + 3) * 0x100 +
                                    (uint)*(byte *)(arg_eax + 1)) * 5 + 1) & 0xfffffff) >> 0x18) << 8
                 );
}

/******************************************************************************
 * Function : light_process_map_subtile_0b250c (Original VA: 0xb250c, Ghidra: FUN_000b250c)
 * Prototype: int light_process_map_subtile_0b250c(void);
 * Address  : 0xb250c (Size: 986 bytes)
 * Module   : light.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> effect_process_thing_entity_02606f
 * Callees  : 0 -> 
 ******************************************************************************/
int light_process_map_subtile_0b250c(void)

{
  byte flag;
  ushort uval;
  uint uval_2;
  uint uval_3;
  int thing;
  uint uval_4;
  int val;
  uint uval_5;
  ushort *arg_edx;
  uint uval_6;
  uint uval_7;
  uint loop_i;
  int val_2;
  uint uval_8;
  uint local_5c;
  uint local_58;
  
  if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
    uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2);
  }
  else {
    uval = *(ushort *)(thing + 0x56);
  }
  uval_4 = uval / 2;
  uval_6 = *arg_edx - uval_4;
  if ((int)uval_6 < 0) {
    uval_6 = 0;
  }
  uval_7 = arg_edx[1] - uval_4;
  if ((int)uval_7 < 0) {
    uval_7 = 0;
  }
  uval_8 = *arg_edx + uval_4;
  if (0xffff < uval_8) {
    uval_8 = 0xffff;
  }
  uval_4 = uval_4 + arg_edx[1];
  if (0xffff < uval_4) {
    uval_4 = 0xffff;
  }
  local_5c = 0;
  local_58 = 0xf;
  uval_2 = local_58;
  for (loop_i = uval_7; uval_3 = uval_6, loop_i < uval_4; loop_i = loop_i + 0x100) {
    for (; uval_3 < uval_8; uval_3 = uval_3 + 0x100) {
      val = ((loop_i >> 8 & 0xff) * 0x100 + (uval_3 >> 8 & 0xff)) * 5;
      val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
      uval_5 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
      if (uval_5 <= local_5c) {
        uval_5 = local_5c;
      }
      flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
      if ((flag & 0xe) == 0) {
        local_58 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
        if (uval_2 <= local_58) {
          local_58 = uval_2;
        }
      }
      else {
        local_58 = 8 - ((flag & 0xf) >> 1);
        if (uval_2 < local_58) {
          local_58 = uval_2;
        }
      }
      local_5c = uval_5;
      uval_2 = local_58;
    }
  }
  for (; uval_7 < uval_4; uval_7 = uval_7 + 0x100) {
    val = ((uval_7 >> 8 & 0xff) * 0x100 + (uval_8 >> 8 & 0xff)) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    loop_i = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (loop_i <= local_5c) {
      loop_i = local_5c;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_58 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_58) {
        local_58 = uval_2;
      }
    }
    else {
      local_58 = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_58) {
        local_58 = uval_2;
      }
    }
    local_5c = loop_i;
    uval_2 = local_58;
  }
  for (; uval_6 < uval_8; uval_6 = uval_6 + 0x100) {
    val = ((uval_6 >> 8 & 0xff) + (uval_4 >> 8 & 0xff) * 0x100) * 5;
    val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
    uval_7 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
    if (uval_7 <= local_5c) {
      uval_7 = local_5c;
    }
    flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
    if ((flag & 0xe) == 0) {
      local_58 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
      if (uval_2 <= local_58) {
        local_58 = uval_2;
      }
    }
    else {
      local_58 = 8 - ((flag & 0xf) >> 1);
      if (uval_2 < local_58) {
        local_58 = uval_2;
      }
    }
    local_5c = uval_7;
    uval_2 = local_58;
  }
  val = ((uval_8 >> 8 & 0xff) + (uval_4 >> 8 & 0xff) * 0x100) * 5;
  val_2 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18;
  uval_6 = (uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4);
  if (uval_6 <= local_5c) {
    uval_6 = local_5c;
  }
  flag = *(byte *)((int)&g_bss_0019e973 + val_2 + 2);
  if ((flag & 0xe) == 0) {
    uval_4 = (*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18;
    if (uval_2 <= uval_4) {
      uval_4 = uval_2;
    }
  }
  else {
    uval_4 = 8 - ((flag & 0xf) >> 1);
    if (uval_2 < uval_4) {
      uval_4 = uval_2;
    }
  }
  if (((uint)(*(int *)(arg_edx + 1) >> 0x10) < uval_6 << 8) ||
     (uval_4 * 0x100 - (uint)*(ushort *)(thing + 0x58) <= uval_6 << 8)) {
    val = *(int *)(arg_edx + 1) >> 0x10;
  }
  else {
    val = (uval_4 * 0x100 + -1) - (uint)*(ushort *)(thing + 0x58);
  }
  return val;
}

