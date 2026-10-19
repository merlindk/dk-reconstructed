/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: compevnt.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 32
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : compevnt_process_dungeon_room_018d28 (Original VA: 0x18d28, Ghidra: FUN_00018d28)
 * Prototype: undefined4 compevnt_process_dungeon_room_018d28(void);
 * Address  : 0x18d28 (Size: 165 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01ba46, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_process_dungeon_room_018d28(void)

{
  ushort uval;
  undefined2 uval_2;
  int arg_eax;
  int val;
  int val_2;
  int room_ptr;
  int arg_edx;
  
  room_ptr = *(int *)(arg_eax + 0x24);
  val = (int)((uint)*(byte *)(room_ptr + 0x919) * *(int *)(arg_edx + 0x10)) / 100;
  if (val != 0) {
    val_2 = compturn_fn_0203f0();
    if (val_2 == 0) {
      uval = *(ushort *)(room_ptr + 0xb + *(int *)(arg_edx + 0x14) * 2);
      while (room_ptr = (uint)uval * 0x45, &g_rooms < &g_rooms + room_ptr) {
        if (*(ushort *)(&g_bss_002ddd2b + room_ptr) < *(ushort *)(&g_bss_002ddd29 + room_ptr)) {
          val_2 = comptask_fn_01ba46();
          if (val_2 != 0) {
            *(undefined1 *)(val_2 + 2) = 10;
            uval_2 = *(undefined2 *)(&g_bss_002ddd1c + room_ptr);
            *(undefined2 *)(val_2 + 0x70) = uval_2;
            *(undefined2 *)(val_2 + 0x80) = uval_2;
            *(int *)(val_2 + 0x7c) = val;
            *(undefined4 *)(val_2 + 10) = g_game_turn;
            return 1;
          }
        }
        uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_fn_018dcd (Original VA: 0x18dcd, Ghidra: FUN_00018dcd)
 * Prototype: undefined4 compevnt_fn_018dcd(void);
 * Address  : 0x18dcd (Size: 111 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x018dcd
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01ba46, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_fn_018dcd(void)

{
  undefined4 uval;
  int arg_eax;
  int val;
  undefined4 extraout_ECX;
  int arg_edx;
  
  if ((int)((uint)*(byte *)(*(int *)(arg_eax + 0x24) + 0x919) * *(int *)(arg_edx + 0x10)) / 100 != 0)
  {
    val = compturn_fn_0203f0();
    if (val == 0) {
      val = comptask_fn_01ba46();
      if (val != 0) {
        *(undefined1 *)(val + 2) = 10;
        *(undefined2 *)(val + 0x70) = 0;
        *(undefined2 *)(val + 0x80) = 0;
        uval = g_game_turn;
        *(undefined4 *)(val + 0x7c) = extraout_ECX;
        *(undefined4 *)(val + 10) = uval;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_process_thing_entity_018e3c (Original VA: 0x18e3c, Ghidra: FUN_00018e3c)
 * Prototype: int compevnt_process_thing_entity_018e3c(void);
 * Address  : 0x18e3c (Size: 151 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 3 -> comptool_process_slabmap_tile_01dd33, comptask_fn_01df28, comptool_update_player_dungeon_01e38d
 ******************************************************************************/
int compevnt_process_thing_entity_018e3c(void)

{
  ushort *word_ptr;
  int arg_eax;
  int val;
  uint extraout_ECX;
  int arg_edx;
  uint thing_ptr;
  int thing_ptr_2;
  
  word_ptr = *(ushort **)(arg_eax + 0x24);
  thing_ptr_2 = 4;
  if ((int)(uint)(byte)word_ptr[0x48c] < *(int *)(arg_edx + 0x10)) {
    thing_ptr_2 = comptool_update_player_dungeon_01e38d();
    if (thing_ptr_2 == 1) {
      thing_ptr = (uint)*(byte *)((&g_thing_ptrs)[*word_ptr] + 0x10);
      val = comptool_process_slabmap_tile_01dd33(1,thing_ptr);
      if (val != 0) {
        val = comptask_fn_01df28(extraout_ECX & 0xffff,thing_ptr & 0xffff,1,1);
        if (0 < val) {
          thing_ptr_2 = 1;
        }
      }
    }
  }
  return thing_ptr_2;
}

/******************************************************************************
 * Function : compevnt_roll_action_random_018ed3 (Original VA: 0x18ed3, Ghidra: FUN_00018ed3)
 * Prototype: undefined4 compevnt_roll_action_random_018ed3(void);
 * Address  : 0x18ed3 (Size: 299 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01ba46, comptool_update_creature_and_thing_01f754
 ******************************************************************************/
undefined4 compevnt_roll_action_random_018ed3(void)

{
  undefined2 uval;
  int arg_eax;
  int val;
  int arg_edx;
  uint rand_seed;
  int val_2;
  undefined1 local_18;
  undefined1 local_14;
  
  val = *(int *)(arg_eax + 0x24);
  if ((*(int *)(val + 0x116f) != 0) &&
     ((int)((uint)*(ushort *)(val + 0x93d) * *(int *)(arg_edx + 0x10)) / 100 <
      *(int *)(val + 0x116f))) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    val_2 = 0;
    for (rand_seed = g_action_random_seed % *(uint *)(val + 0x116f);
        (val_2 < *(int *)(val + 0x116f) && (*(short *)(val + 0x106d + rand_seed * 4) != 1));
        rand_seed = (int)(rand_seed + 1) % *(int *)(val + 0x116f)) {
      val_2 = val_2 + 1;
    }
    if (val_2 < *(int *)(val + 0x116f)) {
      rand_seed = (uint)*(ushort *)(val + 0x106b + rand_seed * 4);
      val = comptool_update_creature_and_thing_01f754();
      if (val != 0) {
        val_2 = comptask_fn_01ba46();
        if (val_2 != 0) {
          *(undefined1 *)(val_2 + 2) = 0xb;
          *(undefined1 *)(val_2 + 0x86) = 0;
          local_14 = (undefined1)(rand_seed % 0x100);
          *(undefined1 *)(val_2 + 0x88) = 0;
          *(undefined1 *)(val_2 + 0x87) = local_14;
          local_18 = (undefined1)(rand_seed / 0x100);
          *(undefined1 *)(val_2 + 0x89) = local_18;
          uval = *(undefined2 *)(val + 0x1b);
          *(undefined2 *)(val_2 + 0x80) = 0;
          *(undefined2 *)(val_2 + 0x76) = uval;
          *(undefined4 *)(val_2 + 10) = g_game_turn;
          return 1;
        }
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_roll_action_random_018ffe (Original VA: 0x18ffe, Ghidra: FUN_00018ffe)
 * Prototype: undefined4 compevnt_roll_action_random_018ffe(void);
 * Address  : 0x18ffe (Size: 364 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 0 -> 
 * Callees  : 9 -> combtool_fn_018d16, comptask_fn_01ba46, comptool_fn_01dbbc, comptool_update_player_dungeon_01e38d, comptool_process_dungeon_room_01e425, comptool_update_creature_and_thing_02002c, compturn_fn_02035a, compturn_fn_020596 ...
 ******************************************************************************/
undefined4 compevnt_roll_action_random_018ffe(void)

{
  int arg_eax;
  int val;
  int val_2;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int loop_i;
  byte flag;
  int local_74 [20];
  int local_24;
  undefined2 local_20 [2];
  int local_1c;
  int local_18;
  
  flag = 0;
  local_18 = (int)((uint)*(byte *)(*(int *)(arg_eax + 0x24) + 0x919) * *(int *)(arg_edx + 0x10)) / 100
  ;
  if ((((*(int *)(arg_edx + 0x18) < local_18) &&
       (local_1c = arg_edx, val = comptool_update_player_dungeon_01e38d(), val == 1)) &&
      (val = compturn_fn_02035a(), val == 1)) && (val = compturn_fn_020596(), val == 0)) {
    comptool_fn_01dbbc();
    val = 0;
    for (loop_i = 0; loop_i < 5; loop_i = loop_i + 1) {
      if (((*(int *)((int)local_74 + val + 8) != 0) &&
          (*(int *)(local_1c + 0x18) < *(int *)((int)local_74 + val))) &&
         (val_2 = comptool_process_dungeon_room_01e425(), val = extraout_ECX, val_2 != 0)) {
        local_24 = (uint)CONCAT21((ushort)*(byte *)(val_2 + 9) << 8,*(undefined1 *)(val_2 + 8)) << 8
        ;
        local_20[0] = 0x100;
        val = comptool_update_creature_and_thing_02002c();
        if (val <= *(int *)(local_1c + 0x18)) {
          return 4;
        }
        val = comptask_fn_01ba46();
        if (val == 0) {
          return 4;
        }
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        moodneed_fn_051374();
        *(undefined1 *)(extraout_ECX_00 + 2) = 8;
        *(undefined1 *)(extraout_ECX_00 + 1) = 0;
        *(int *)(extraout_ECX_00 + 0x76) = local_24;
        *(undefined2 *)(extraout_ECX_00 + 0x7a + (uint)flag * -8) = local_20[(uint)flag * -4];
        *(undefined4 *)(extraout_ECX_00 + 0x60) = 0x19;
        *(int *)(extraout_ECX_00 + 0x7c) = local_18;
        val = g_game_turn;
        *(int *)(extraout_ECX_00 + 10) = g_game_turn;
        *(int *)(extraout_ECX_00 + 0x5c) = val - *(int *)(extraout_ECX_00 + 0x60);
        *(undefined4 *)(extraout_ECX_00 + 0x8e) = *(undefined4 *)(local_1c + 0x14);
        uval = combtool_fn_018d16();
        return uval;
      }
      val = val + 0x10;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_update_creature_and_thing_01916a (Original VA: 0x1916a, Ghidra: FUN_0001916a)
 * Prototype: undefined4 compevnt_update_creature_and_thing_01916a(void);
 * Address  : 0x1916a (Size: 343 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 4 -> combtool_fn_018d16, comptask_fn_01df28, comptool_update_player_dungeon_01e38d, spell_update_creature_control_0720ce
 ******************************************************************************/
undefined4 compevnt_update_creature_and_thing_01916a(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  byte flag;
  int arg_eax;
  int val;
  undefined4 uval;
  int arg_edx;
  uint uval_2;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  uint auStack_48 [7];
  undefined4 local_2c;
  undefined1 uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  
  word_ptr_2 = auStack_48 + 5;
  local_24 = 5;
  local_20 = *(int *)(arg_eax + 0x24);
  local_2c = g_data_00174db0;
  uStack_28 = g_data_00174db4;
  auStack_48[5] = arg_edx;
  val = comptool_update_player_dungeon_01e38d();
  if (val == 1) {
    uval_2 = *(uint *)(auStack_48[5] + 0x10);
    if (uval_2 == 0) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      uval_2 = g_action_random_seed % 5;
    }
    for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
      cctrl_ptr = *(ushort *)((uint)*(byte *)((int)&local_2c + uval_2) * 2 + local_20 + 0xb);
      while (local_18 = &g_rooms + (uint)cctrl_ptr * 0x45, &g_rooms < local_18) {
        cctrl_ptr = *(ushort *)((int)&g_bss_002ddd58 + (uint)cctrl_ptr * 0x45);
        while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
          *(undefined4 *)((int)word_ptr_2 + -4) = 0x1926a;
          val = spell_update_creature_control_0720ce();
          word_ptr = (undefined1 *)word_ptr_2;
          if (val == 0) {
            if (*(char *)(thing_ptr + 7) == '\x0e') {
              flag = *(byte *)(thing_ptr + 8); /* thing->active_state */
            }
            else {
              flag = *(byte *)(thing_ptr + 7);
            }
            if ((&g_data_0018c4be)[(uint)flag * 0x29] == '\x01') {
              *(undefined4 *)((int)word_ptr_2 + -4) = 0;
              *(uint *)((int)word_ptr_2 + -8) = (uint)*(ushort *)(thing_ptr + 0x1b); /* thing->index_or_angle */
              *(undefined4 *)((int)word_ptr_2 + -0xc) = 0;
              word_ptr = (undefined1 *)((int)word_ptr_2 + -0x10);
              *(undefined4 *)((int)word_ptr_2 + -0x10) = 0;
              *(undefined4 *)((int)word_ptr_2 + -0x14) = 0x192b8;
              val = comptask_fn_01df28();
              if (0 < val) {
                uval = combtool_fn_018d16();
                return uval;
              }
            }
          }
          word_ptr_2 = (uint *)word_ptr;
          cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa); /* thing->ccontrol_idx */
        }
        cctrl_ptr = *(ushort *)(local_18 + 6);
      }
      uval_2 = (int)(uval_2 + 1) % local_24;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_fn_0192c1 (Original VA: 0x192c1, Ghidra: FUN_000192c1)
 * Prototype: undefined4 compevnt_fn_0192c1(void);
 * Address  : 0x192c1 (Size: 91 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x0192c1
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01ba46, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_fn_0192c1(void)

{
  int val;
  int arg_eax;
  int val_2;
  int extraout_ECX;
  
  val = *(int *)(arg_eax + 0x24);
  val_2 = compturn_fn_0203f0();
  if (val_2 == 0) {
    val_2 = comptask_fn_01ba46();
    if (val_2 != 0) {
      *(undefined1 *)(val_2 + 2) = 0xd;
      *(int *)(val_2 + 0x7c) =
           (int)((uint)*(byte *)(val + 0x918) * *(int *)(extraout_ECX + 0x10)) / 100;
      *(undefined4 *)(val_2 + 10) = g_game_turn;
      return 1;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_process_dungeon_room_01931c (Original VA: 0x1931c, Ghidra: FUN_0001931c)
 * Prototype: undefined4 compevnt_process_dungeon_room_01931c(void);
 * Address  : 0x1931c (Size: 460 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 compevnt_process_dungeon_room_01931c(void)

{
  byte flag;
  ushort uval;
  short short_val;
  int val;
  int arg_eax;
  int room_ptr;
  short *room_ptr_2;
  int val_2;
  uint uval_2;
  uint uval_3;
  int val_3;
  int local_4c;
  int local_44;
  undefined4 local_2c;
  short *local_28;
  short *local_24;
  uint local_20;
  
  local_2c = 4;
  val = *(int *)(arg_eax + 0x24);
  local_20 = 0;
  local_24 = (short *)(arg_eax + 0xb9a);
  local_4c = 0;
  local_28 = (short *)(arg_eax + 0xa1a);
  val_3 = 0;
  local_44 = arg_eax;
  do {
    if ((int)*(char *)(val + 0xe9f) != local_20) {
      uval_2 = (uint)*(char *)(*(int *)(arg_eax + 0x24) + 0xe9f);
      uval_3 = (uint)g_neutral_player_number;
      if (((((uval_3 == uval_2) || (uval_3 == local_20)) ||
           (((uint)(byte)(&g_player_view_flags)[uval_2 * 0x4ef] & 1 << ((byte)local_20 & 0x1f)) == 0)) ||
          ((uval_3 == local_20 || (uval_3 == uval_2)))) ||
         (((uint)(byte)(&g_player_view_flags)[local_4c] &
          1 << (*(byte *)(*(int *)(arg_eax + 0x24) + 0xe9f) & 0x1f)) == 0)) {
        uval = *(ushort *)((int)&g_bss_002e0596 + val_3);
        while (room_ptr = (uint)uval * 0x45, room_ptr_2 = local_28, &g_rooms < &g_rooms + room_ptr)
        {
          for (; (room_ptr_2 < local_24 &&
                 ((*room_ptr_2 != (ushort)((ushort)(byte)(&g_bss_002ddd23)[room_ptr] << 8) ||
                  (room_ptr_2[1] != (ushort)((ushort)(byte)(&g_bss_002ddd24)[room_ptr] << 8)))));
              room_ptr_2 = room_ptr_2 + 3) {
          }
          if (room_ptr_2 == local_24) {
            short_val = *(short *)(local_44 + 0xa14);
            *(short *)(local_44 + 0xa14) = (short)((short_val + 1) % 0x40);
            *(undefined4 *)(local_44 + 0xa10) = g_game_turn;
            val_2 = short_val * 6;
            *(ushort *)(local_44 + 0xa1a + val_2) = (ushort)(byte)(&g_bss_002ddd23)[room_ptr] << 8;
            flag = (&g_bss_002ddd24)[room_ptr];
            local_2c = 2;
            *(undefined2 *)(local_44 + 0xa1e + val_2) = 0x100;
            *(ushort *)(local_44 + 0xa1c + val_2) = (ushort)flag << 8;
          }
          uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
        }
      }
    }
    local_4c = local_4c + 0x4ef;
    local_24 = local_24 + 0xc5;
    local_28 = local_28 + 0xc5;
    local_44 = local_44 + 0x18a;
    local_20 = local_20 + 1;
    val_3 = val_3 + 0x1508;
  } while ((int)local_20 < 5);
  return local_2c;
}

/******************************************************************************
 * Function : compevnt_process_dungeon_room_0194e8 (Original VA: 0x194e8, Ghidra: FUN_000194e8)
 * Prototype: undefined4 compevnt_process_dungeon_room_0194e8(void);
 * Address  : 0x194e8 (Size: 705 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 4 -> combtool_fn_018d16, comptask_fn_01df28, door_process_map_subtile_022b3a, draw_update_slab_subtile_columns_08f924
 ******************************************************************************/
undefined4 compevnt_process_dungeon_room_0194e8(void)

{
  ushort uval;
  bool flag;
  char ch;
  int arg_eax;
  undefined4 uval_2;
  uint uval_3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int arg_edx;
  int val;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  uint uval_4;
  int val_2;
  uint auStack_5c [5];
  undefined1 local_48 [4];
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  word_ptr_2 = local_48;
  local_44 = *(int *)(arg_eax + 0x24);
  local_30 = (uint)*(char *)(local_44 + 0xe9f);
  local_40 = 0;
  local_28 = local_44;
  do {
    if (4 < (int)local_40) {
      return 4;
    }
    if (*(char *)(local_44 + 0x101d) != '\0') {
      val = *(int *)(arg_edx + 0x10);
      if (val == 0) {
        val = (*(int *)(arg_edx + 0x14) + 1) % 0x11;
        *(int *)(arg_edx + 0x14) = val;
      }
      uval = *(ushort *)(val * 2 + local_28 + 0xb);
      while (local_1c = &g_rooms + (uint)uval * 0x45, &g_rooms < local_1c) {
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
        local_20 = g_action_random_seed % 0x6b & 3;
        for (local_2c = 4; local_2c != 0; local_2c = local_2c + -1) {
          uval_3 = (uint)(byte)local_1c[8];
          uval_4 = (uint)(byte)local_1c[9];
          while (&g_rooms +
                 (uint)(byte)(&g_bss_002d33c8)
                             [((&g_subtile_to_slab_lut)[uval_4] * 0x55 + (&g_subtile_to_slab_lut)[uval_3]) * 6] * 0x45
                 == local_1c) {
            uval_3 = uval_3 + *(char *)((int)&g_data_0018b67b + local_20 * 2 + 3) * 3;
            uval_4 = uval_4 + (char)(&g_data_0018b67f)[local_20 * 2] * 3;
          }
          local_34 = local_20 * 2;
          for (local_24 = 4; local_24 != 0; local_24 = local_24 + -1) {
            if ((((&g_slabmap)[((&g_subtile_to_slab_lut)[uval_3] + (&g_subtile_to_slab_lut)[uval_4] * 0x55) * 6] & 7)
                 == local_30) &&
               (local_18 = 3,
               (&g_slabmap_base)[((int)uval_3 / 3 + ((int)uval_4 / 3) * 0x55) * 6] == '\v')) {
              flag = false;
            }
            else {
              flag = true;
            }
            if (flag) {
              local_24 = 0;
              break;
            }
            *(undefined4 *)(word_ptr_2 + -4) = 0x196c5;
            ch = draw_update_slab_subtile_columns_08f924();
            uval_3 = extraout_ECX;
            if (ch != '\0') {
              *(undefined4 *)(word_ptr_2 + -4) = 0x196d6;
              val = door_process_map_subtile_022b3a();
              uval_3 = extraout_ECX_00;
              if (val == 0) break;
            }
            uval_3 = uval_3 + *(char *)((int)&g_data_0018b67b + local_34 + 3) * 3;
            uval_4 = uval_4 + (char)(&g_data_0018b67f)[local_34] * 3;
          }
          word_ptr = word_ptr_2;
          if (local_24 != 0) {
            val_2 = uval_4 + (char)(&g_data_0018b67f)[local_20 * 2] * 3;
            val = uval_3 + *(char *)((int)&g_data_0018b67b + local_20 * 2 + 3) * 3;
            local_3c = uval_3;
            local_38 = uval_4;
            if ((((&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6] & 7
                 ) == local_30) &&
               (local_18 = 3, (&g_slabmap_base)[(val / 3 + (val_2 / 3) * 0x55) * 6] == '\v')) {
              *(undefined4 *)(word_ptr_2 + -4) = 0x1976b;
              val = door_process_map_subtile_022b3a();
              if (val == 0) {
                *(undefined4 *)(word_ptr_2 + -4) = 0;
                *(uint *)(word_ptr_2 + -8) = local_40 & 0xffff;
                *(uint *)(word_ptr_2 + -0xc) = local_38 & 0xffff;
                word_ptr = word_ptr_2 + -0x10;
                *(uint *)(word_ptr_2 + -0x10) = local_3c & 0xffff;
                *(undefined4 *)(word_ptr_2 + -0x14) = 0x1979c;
                val = comptask_fn_01df28();
                if (0 < val) {
                  uval_2 = combtool_fn_018d16();
                  return uval_2;
                }
              }
            }
          }
          local_20 = (int)(local_20 + 1) % 4;
          word_ptr_2 = word_ptr;
        }
        uval = *(ushort *)(local_1c + 6);
      }
    }
    local_44 = local_44 + 1;
    local_40 = local_40 + 1;
  } while( true );
}

/******************************************************************************
 * Function : compevnt_fn_0197a9 (Original VA: 0x197a9, Ghidra: FUN_000197a9)
 * Prototype: undefined4 compevnt_fn_0197a9(void);
 * Address  : 0x197a9 (Size: 292 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x0197a9
 * Callers  : 0 -> 
 * Callees  : 5 -> combtool_fn_018d16, comptask_fn_01ba46, comptask_fn_01d2ff, comptool_process_dungeon_room_01de8c, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 compevnt_fn_0197a9(void)

{
  byte flag;
  int arg_eax;
  int val;
  short *val_2;
  int val_3;
  byte *byte_ptr;
  undefined4 uval;
  undefined4 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  byte flag_2;
  undefined8 uval_2;
  int local_28;
  int local_1c;
  int local_18;
  
  flag_2 = 0;
  val = (uint)g_neutral_player_number * 0x18a + arg_eax + 0xa10;
  local_18 = 0;
  val_2 = (short *)(val + 10);
  local_1c = 0x7fffffff;
  do {
    if (*val_2 != 0) {
      val_3 = comptool_process_dungeon_room_01de8c();
      if (val_3 != 0) {
        bflib_system_io_fn_0e69fc();
        uval_2 = bflib_system_io_fn_0e69fc();
        val_3 = (int)uval_2 + (int)((ulonglong)uval_2 >> 0x20);
        if (val_3 < local_1c) {
          local_18 = local_28;
          local_1c = val_3;
        }
      }
    }
    val_2 = val_2 + 3;
  } while (val_2 != (short *)(val + 0x18a));
  if (local_18 != 0) {
    byte_ptr = (byte *)comptask_fn_01ba46();
    if (byte_ptr != (byte *)0x0) {
      byte_ptr[2] = 0xe;
      uval = g_game_turn;
      byte_ptr[0x80] = 0;
      *(undefined4 *)(byte_ptr + 10) = uval;
      *(ushort *)(byte_ptr + 0x70) = (ushort)*(byte *)(local_28 + 8) << 8;
      flag = *(byte *)(local_28 + 9);
      byte_ptr[0x74] = 0;
      byte_ptr[0x75] = 1;
      *(ushort *)(byte_ptr + 0x72) = (ushort)flag << 8;
      *(undefined4 *)(byte_ptr + 0x76) = *extraout_ECX;
      *(undefined2 *)(byte_ptr + (uint)flag_2 * -8 + 0x7a) =
           *(undefined2 *)(extraout_ECX + (uint)flag_2 * -2 + 1);
      *byte_ptr = *byte_ptr | 4;
      comptask_fn_01d2ff(*(undefined4 *)(byte_ptr + 0x70),*(undefined4 *)(byte_ptr + 0x74),
                   *(undefined4 *)(byte_ptr + 0x76),*(undefined4 *)(byte_ptr + 0x7a));
      extraout_ECX_00[2] = 0;
      extraout_ECX_00[1] = extraout_ECX_00[2];
      *extraout_ECX_00 = extraout_ECX_00[2];
      uval = combtool_fn_018d16();
      return uval;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_process_slabmap_tile_0198cd (Original VA: 0x198cd, Ghidra: FUN_000198cd)
 * Prototype: undefined4 compevnt_process_slabmap_tile_0198cd(void);
 * Address  : 0x198cd (Size: 555 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01df28, imptool_update_player_dungeon_0401aa
 ******************************************************************************/
undefined4 compevnt_process_slabmap_tile_0198cd(void)

{
  int val;
  int arg_eax;
  uint uval;
  int arg_edx;
  int loop_i;
  uint uval_2;
  undefined1 *word_ptr;
  int val_2;
  short *loop_i_2;
  uint auStack_4c [5];
  undefined1 local_38 [4];
  int local_34;
  uint local_30;
  int local_2c;
  short *local_28;
  uint local_24;
  byte *local_20;
  uint local_1c;
  undefined4 local_18;
  
  word_ptr = local_38;
  val = *(int *)(arg_eax + 0x24);
  local_30 = 0;
  val_2 = val + 1;
  local_34 = 0;
  do {
    if ((*(char *)(val_2 + 0x100f) != '\0') && (1 < *(byte *)(val_2 + 0x1008))) {
      local_34 = local_34 + 1;
    }
    val_2 = val_2 + 1;
  } while (val_2 != val + 7);
  val_2 = val;
  for (loop_i = 1; loop_i < 7; loop_i = loop_i + 1) {
    if (*(char *)(val_2 + 0x1010) != '\0') {
      if (*(char *)(val_2 + 0x1009) == '\0') {
        if ((local_34 == 0) && (*(int *)(arg_edx + 0x10) == 0)) {
          return 4;
        }
        if (loop_i == *(int *)(arg_edx + 0x14)) {
          return 4;
        }
      }
      else {
        local_30 = local_30 + 1;
      }
    }
    val_2 = val_2 + 1;
  }
  if (local_30 != 0) {
    local_1c = *(uint *)(arg_edx + 0x14);
    if (local_1c == 0) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      local_1c = 1;
      val_2 = g_action_random_seed % local_30 + 1;
      loop_i = val;
      while (((int)local_1c < 7 &&
             (((*(char *)(loop_i + 0x1010) == '\0' || (*(char *)(loop_i + 0x1009) == '\0')) ||
              (val_2 = val_2 + -1, val_2 != 0))))) {
        local_1c = local_1c + 1;
        loop_i = loop_i + 1;
      }
    }
    local_28 = (short *)(arg_eax + 0x13c4);
    local_20 = (byte *)(arg_eax + 0x134d);
    for (loop_i_2 = (short *)(arg_eax + 0x134c); loop_i_2 < local_28; loop_i_2 = loop_i_2 + 3) {
      if (*loop_i_2 != 0) {
        uval = (uint)*(byte *)((int)loop_i_2 + 3);
        uval_2 = (uint)*local_20;
        local_24 = (uint)*(char *)(val + 0xe9f);
        if (((&g_slabmap)[((&g_subtile_to_slab_lut)[uval_2] + (&g_subtile_to_slab_lut)[uval] * 0x55) * 6] & 7) ==
            local_24) {
          local_2c = (uval / 3) * 0x55;
          local_18 = 3;
          if ((&g_slabmap_base)[(uval_2 / 3 + local_2c) * 6] != '\v') goto LAB_000199de;
          *(undefined4 *)(word_ptr + -4) = 0;
          *(uint *)(word_ptr + -8) = local_1c & 0xffff;
          *(uint *)(word_ptr + -0xc) = uval;
          *(uint *)(word_ptr + -0x10) = uval_2;
          *(undefined4 *)(word_ptr + -0x14) = 0x19ad8;
          val_2 = comptask_fn_01df28();
          word_ptr = word_ptr + -0x10;
          if (0 < val_2) {
            *loop_i_2 = 0;
            return 1;
          }
LAB_00019a27:
          *loop_i_2 = 0;
        }
        else {
LAB_000199de:
          local_2c = (uval / 3) * 0x55;
          local_18 = 3;
          if ((&g_slabmap_base)[(uval_2 / 3 + local_2c) * 6] != '\n') {
            *(undefined4 *)(word_ptr + -4) = 0x19a23;
            val_2 = imptool_update_player_dungeon_0401aa();
            if (val_2 < 0) goto LAB_00019a27;
          }
        }
      }
      local_20 = local_20 + 6;
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_process_dungeon_room_019af8 (Original VA: 0x19af8, Ghidra: FUN_00019af8)
 * Prototype: undefined4 compevnt_process_dungeon_room_019af8(void);
 * Address  : 0x19af8 (Size: 570 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01df28, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_process_dungeon_room_019af8(void)

{
  char ch;
  ushort uval;
  int arg_eax;
  int room_ptr;
  int val;
  int val_2;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  byte *loop_i;
  uint auStack_58 [5];
  undefined1 local_44 [4];
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  
  word_ptr_2 = local_44;
  local_30 = *(int *)(arg_eax + 0x24);
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  local_1c = g_action_random_seed % 0x77 & 3;
  room_ptr = compturn_fn_0203f0();
  if (room_ptr == 0) {
    for (loop_i = &g_data_00174db5; *loop_i != 0; loop_i = loop_i + 2) {
      uval = *(ushort *)((uint)*loop_i * 2 + local_30 + 0xb);
      while (room_ptr = (uint)uval * 0x45, &g_rooms < &g_rooms + room_ptr) {
        if ((*(ushort *)(&g_bss_002ddd56 + room_ptr) < (ushort)loop_i[1]) &&
           (*(short *)(&g_bss_002ddd56 + room_ptr) != 0)) {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          local_18 = (uint)*(ushort *)(&g_bss_002ddd52 + room_ptr);
          for (local_3c = (uint)*(ushort *)(&g_bss_002ddd56 + room_ptr); local_3c != 0;
              local_3c = local_3c - 1) {
            local_2c = (local_18 % 0x55) * 3;
            local_20 = 0;
            local_28 = (local_18 / 0x55) * 3;
            for (local_40 = 0; local_40 < 4; local_40 = local_40 + 1) {
              val = local_1c * 2;
              local_34 = local_28 + (char)(&g_data_0018b67f)[val] * 3;
              local_38 = (local_34 / 3) * 0x55;
              val_2 = local_2c + *(char *)((int)&g_data_0018b67b + val + 3) * 3;
              local_24 = 3;
              word_ptr = word_ptr_2;
              if ((((&g_slabmap_base)[(val_2 / 3 + local_38) * 6] == '\v') &&
                  ((uint)((&g_slabmap)
                          [((&g_subtile_to_slab_lut)[local_34] * 0x55 + (&g_subtile_to_slab_lut)[val_2]) * 6] & 7) ==
                   (int)*(char *)(local_30 + 0xe9f))) && (local_20 = local_20 + 1, 1 < local_20)) {
                *(uint *)(word_ptr_2 + -4) = (uint)*(ushort *)(&g_room_slabs_count + room_ptr);
                ch = (&g_data_0018b67f)[val];
                *(undefined4 *)(word_ptr_2 + -8) = 1;
                *(uint *)(word_ptr_2 + -0xc) = (uint)(ushort)(short)ch * 3 + local_28 & 0xffff;
                word_ptr = word_ptr_2 + -0x10;
                *(uint *)(word_ptr_2 + -0x10) =
                     (uint)(ushort)(short)*(char *)((int)&g_data_0018b67b + val + 3) * 3 + local_2c &
                     0xffff;
                *(undefined4 *)(word_ptr_2 + -0x14) = 0x19cc6;
                val = comptask_fn_01df28();
                if (0 < val) {
                  return 1;
                }
              }
              local_1c = (int)(local_1c + 1) % 4;
              word_ptr_2 = word_ptr;
            }
            local_18 = (uint)*(ushort *)(&g_bss_002d33c6 + local_18 * 6);
            if (local_18 == 0) break;
          }
        }
        uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : compevnt_update_creature_and_thing_019d32 (Original VA: 0x19d32, Ghidra: FUN_00019d32)
 * Prototype: undefined4 compevnt_update_creature_and_thing_019d32(void);
 * Address  : 0x19d32 (Size: 641 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01ba46, comptool_update_creature_and_thing_01d917, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_update_creature_and_thing_019d32(void)

{
  undefined2 uval;
  ushort cctrl_ptr;
  char ch;
  int arg_eax;
  int loop_i;
  int val;
  int val_2;
  uint thing_ptr;
  uint extraout_ECX;
  undefined8 uval_2;
  uint local_1c;
  undefined4 local_18;
  
  uval_2 = comptool_update_creature_and_thing_01d917();
  loop_i = (int)((ulonglong)uval_2 >> 0x20);
  local_18 = 4;
  if (((int)uval_2 < *(int *)(loop_i + 0x14)) || ((int)uval_2 < *(int *)(loop_i + 0x10))) {
    for (loop_i = arg_eax + 0x38; (*(byte *)(loop_i + 0x44) & 2) == 0; loop_i = loop_i + 0x48) {
      if ((*(code **)(loop_i + 0x18) == comptask_process_dungeon_room_01b119) &&
         (*(int *)(loop_i + 4) = *(int *)(loop_i + 4) + 1,
         0x14 < (uint)(g_game_turn - *(int *)(loop_i + 0x3c)))) {
        *(undefined4 *)(loop_i + 0x3c) = 0;
      }
    }
  }
  loop_i = *(int *)(arg_eax + 0x24);
  if ((((*(int *)(loop_i + 0xaf9) < *(int *)(loop_i + 0x14b8)) && (*(short *)(loop_i + 0x1b) != 0)) &&
      (val = compturn_fn_0203f0(), val == 0)) && (val = comptask_fn_01ba46(), val != 0)) {
    *(undefined1 *)(val + 2) = 0x12;
    *(undefined4 *)(val + 0x70) = 0;
    val_2 = g_game_turn;
    *(undefined4 *)(val + 0x60) = 1;
    *(undefined4 *)(val + 0x70) = 5;
    *(undefined4 *)(val + 0x76) = 0;
    *(int *)(val + 10) = val_2;
    *(int *)(val + 0x5c) = val_2;
    *(int *)(val + 0x7c) = (*(int *)(loop_i + 0x14b8) * 3) / 2;
    val_2 = *(int *)(loop_i + 0x14b8);
    *(undefined4 *)(val + 0x86) = 0;
    local_18 = 1;
    *(int *)(val + 0x80) = (val_2 * 3) / 2;
  }
  if ((*(int *)(loop_i + 0xaf9) < (*(int *)(loop_i + 0x14b8) * 3) / 2) &&
     (*(short *)(loop_i + 0x27) != 0)) {
    val = (uint)*(ushort *)(loop_i + 0x27) * 0x45;
    local_1c = 0;
    for (thing_ptr = (&g_thing_ptrs)[*(ushort *)(loop_i + 0x2d)]; g_thing_ptrs < thing_ptr;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]) { /* thing->ccontrol_idx */
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == '!') {
        val_2 = comptask_fn_01ba46();
        if (val_2 == 0) {
          return local_18;
        }
        *(undefined1 *)(val_2 + 2) = 0xb;
        *(ushort *)(val_2 + 0x86) = (ushort)(byte)(&g_bss_002ddd23)[val] << 8;
        *(ushort *)(val_2 + 0x88) = (ushort)(byte)(&g_bss_002ddd24)[val] << 8;
        uval = *(undefined2 *)(extraout_ECX + 0x1b);
        *(undefined2 *)(val_2 + 0x80) = 0;
        *(undefined2 *)(val_2 + 0x76) = uval;
        local_18 = 1;
        local_1c = local_1c + 1;
        *(int *)(val_2 + 10) = g_game_turn;
        thing_ptr = extraout_ECX;
        if (2 < local_1c) break;
      }
    }
    if (local_1c < 3) {
      cctrl_ptr = *(ushort *)(loop_i + 0x2f);
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
        if (*(char *)(thing_ptr + 7) == '\x0e') {
          ch = *(char *)(thing_ptr + 8); /* thing->active_state */
        }
        else {
          ch = *(char *)(thing_ptr + 7);
        }
        if (ch == '!') {
          loop_i = comptask_fn_01ba46();
          if (loop_i == 0) {
            return local_18;
          }
          *(undefined1 *)(loop_i + 2) = 0xb;
          *(ushort *)(loop_i + 0x86) = (ushort)(byte)(&g_bss_002ddd23)[val] << 8;
          *(ushort *)(loop_i + 0x88) = (ushort)(byte)(&g_bss_002ddd24)[val] << 8;
          uval = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          *(undefined2 *)(loop_i + 0x80) = 0;
          *(undefined2 *)(loop_i + 0x76) = uval;
          local_18 = 1;
          local_1c = local_1c + 1;
          *(int *)(loop_i + 10) = g_game_turn;
          if (2 < local_1c) {
            return 1;
          }
        }
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
      }
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : compevnt_unhandled_event_type_019fb4 (Original VA: 0x19fb4, Ghidra: FUN_00019fb4)
 * Prototype: void compevnt_unhandled_event_type_019fb4(void);
 * Address  : 0x19fb4 (Size: 216 bytes)
 * Module   : compevnt.cpp [direct_file_string_xref]
 * OrigLine : compevnt.cpp lines 57
 * Purpose  : String 'Unhandled Event Type'
 * Callers  : 1 -> compturn_process_computer_player_021416
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void compevnt_unhandled_event_type_019fb4(void)

{
  int val;
  int arg_eax;
  int val_2;
  int *loop_i;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  byte *loop_i_2;
  
  val = *(int *)(arg_eax + 0x24);
  for (loop_i = (int *)(arg_eax + 0x800); (*loop_i != 0 && (loop_i < (int *)(arg_eax + 0xa10)));
      loop_i = loop_i + 0xb) {
    if (loop_i[1] == 0) {
      for (loop_i_2 = &g_bss_002e707c; loop_i_2 < &g_bss_002e78b0; loop_i_2 = loop_i_2 + 0x15) {
        if (((((*loop_i_2 & 1) != 0) && ((uint)loop_i_2[10] == (int)*(char *)(val + 0xe9f))) &&
            (loop_i[5] == *(int *)(loop_i_2 + 0x10))) && ((uint)loop_i_2[0xb] == loop_i[2])) {
          val_2 = (*(code *)loop_i[3])();
          loop_i = extraout_ECX;
          if (val_2 == 1) {
            extraout_ECX[10] = g_game_turn;
          }
        }
      }
    }
    else if ((uint)loop_i[1] < 5) {
      if ((uint)(loop_i[10] + loop_i[5]) <= g_game_turn) {
        (*(code *)loop_i[4])();
        extraout_ECX_00[10] = g_game_turn;
        loop_i = extraout_ECX_00;
      }
    }
    else {
      LbErrorLog(); /* LbErrorLog("compevnt.cpp", line 57, "Unhandled Event Type") */
      loop_i = extraout_ECX_01;
    }
  }
  return;
}

/******************************************************************************
 * Function : compevnt_fn_01a08c (Original VA: 0x1a08c, Ghidra: FUN_0001a08c)
 * Prototype: undefined4 compevnt_fn_01a08c(void);
 * Address  : 0x1a08c (Size: 204 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01a08c
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01ba46, comptool_fn_01e061, comptool_update_creature_and_thing_01e4a8
 ******************************************************************************/
undefined4 compevnt_fn_01a08c(void)

{
  undefined4 uval;
  short short_val;
  int arg_eax;
  int val;
  int val_2;
  int arg_edx;
  int arg_ebx;
  byte flag;
  undefined4 local_18;
  undefined2 auStack_14 [2];
  
  flag = 0;
  local_18._0_3_ = (uint3)*(byte *)(arg_ebx + 2) << 8;
  short_val = (short)local_18;
  local_18 = CONCAT13(*(undefined1 *)(arg_ebx + 6),(int3)local_18);
  if ((short_val != 0) && (local_18._2_2_ != 0)) {
    val = comptool_update_creature_and_thing_01e4a8();
    val_2 = (*(int *)(arg_edx + 0x1c) * val) / 100;
    if ((val_2 == 0) && (val != 0)) {
      val_2 = 1;
    }
    if (val_2 != 0) {
      val = comptool_fn_01e061();
      if (val != 0) {
        val = comptask_fn_01ba46();
        if (val != 0) {
          *(undefined1 *)(val + 2) = 0xc;
          *(undefined4 *)(val + 0x76) = local_18;
          *(undefined2 *)(val + 0x7a + (uint)flag * -8) = auStack_14[(uint)flag * -4];
          *(int *)(val + 0x7c) = val_2;
          *(undefined4 *)(val + 0x70) = *(undefined4 *)(arg_edx + 0x20);
          uval = g_game_turn;
          *(undefined4 *)(val + 10) = g_game_turn;
          *(undefined4 *)(val + 0x5c) = uval;
          *(undefined4 *)(val + 0x60) = *(undefined4 *)(arg_eax + 0x34);
          return 1;
        }
      }
    }
    return 4;
  }
  return 0;
}

/******************************************************************************
 * Function : compevnt_fn_01a158 (Original VA: 0x1a158, Ghidra: FUN_0001a158)
 * Prototype: undefined4 compevnt_fn_01a158(void);
 * Address  : 0x1a158 (Size: 383 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01a158
 * Callers  : 0 -> 
 * Callees  : 6 -> comptask_fn_01ba46, comptool_fn_01e061, comptool_update_player_dungeon_01e38d, comptool_update_creature_and_thing_01f352, compturn_fn_02035a, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_fn_01a158(void)

{
  int val;
  short short_val;
  int arg_eax;
  int val_2;
  int arg_edx;
  int arg_ebx;
  byte flag;
  undefined8 uval;
  undefined4 local_1c;
  undefined2 auStack_18 [2];
  int local_14;
  
  flag = 0;
  local_1c._0_3_ = (uint3)*(byte *)(arg_ebx + 2) << 8;
  short_val = (short)local_1c;
  local_1c = CONCAT13(*(undefined1 *)(arg_ebx + 6),(int3)local_1c);
  if ((short_val != 0) && (local_1c._2_2_ != 0)) {
    uval = comptool_update_creature_and_thing_01f352();
    local_14 = (*(int *)((int)((ulonglong)uval >> 0x20) + 0x1c) * (int)uval) / 100;
    if ((local_14 == 0) && ((int)uval != 0)) {
      local_14 = 1;
    }
    if ((local_14 != 0) && (val_2 = comptool_fn_01e061(), val_2 != 0)) {
      val_2 = compturn_fn_0203f0();
      if ((val_2 == 0) || ((*(byte *)(arg_edx + 0x20) & 2) != 0)) {
        val_2 = comptask_fn_01ba46();
        if (val_2 != 0) {
          *(undefined1 *)(val_2 + 2) = 0xc;
          *(undefined4 *)(val_2 + 0x76) = local_1c;
          *(undefined2 *)(val_2 + 0x7a + (uint)flag * -8) = auStack_18[(uint)flag * -4];
          *(int *)(val_2 + 0x7c) = local_14;
          *(undefined4 *)(val_2 + 0x70) = *(undefined4 *)(arg_edx + 0x20);
          val = g_game_turn;
          *(int *)(val_2 + 10) = g_game_turn;
          *(int *)(val_2 + 0x5c) = val;
          *(undefined4 *)(val_2 + 0x60) = *(undefined4 *)(arg_eax + 0x34);
          return 1;
        }
      }
      else {
        val_2 = comptool_update_player_dungeon_01e38d();
        if (((val_2 == 1) &&
            (((val_2 = compturn_fn_0203f0(), val_2 == 0 || ((*(byte *)(arg_edx + 0x20) & 2) != 0)) &&
             (val_2 = compturn_fn_02035a(), val_2 != 0)))) && (val_2 = comptask_fn_01ba46(), val_2 != 0)) {
          *(undefined1 *)(val_2 + 2) = 8;
          *(undefined1 *)(val_2 + 1) = 0;
          *(undefined4 *)(val_2 + 0x76) = local_1c;
          *(undefined2 *)(val_2 + 0x7a + (uint)flag * -8) = auStack_18[(uint)flag * -4];
          *(undefined4 *)(val_2 + 0x60) = 0x19;
          *(int *)(val_2 + 0x7c) = local_14;
          val = g_game_turn;
          *(undefined4 *)(val_2 + 0x8e) = 0x9c4;
          *(int *)(val_2 + 10) = val;
          *(int *)(val_2 + 0x5c) = val - *(int *)(val_2 + 0x60);
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : compevnt_update_creature_and_thing_01a2d7 (Original VA: 0x1a2d7, Ghidra: FUN_0001a2d7)
 * Prototype: undefined8 compevnt_update_creature_and_thing_01a2d7(void);
 * Address  : 0x1a2d7 (Size: 173 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> compevnt_update_creature_and_thing_01a384
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compevnt_update_creature_and_thing_01a2d7(void)

{
  int thing;
  undefined4 uval;
  int thing_ptr;
  int cctrl_ptr;
  undefined4 arg_edx;
  int thing_ptr_2;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((int)*(short *)(thing + 0x5e) <
      ((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] *
             (uint)*(byte *)(cctrl_ptr + 0x23) * 0x23) / 100 +
      (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73]) / 2) {
LAB_0001a31d:
    uval = 1;
  }
  else {
    thing_ptr = cctrl_ptr;
    for (thing_ptr_2 = 0; thing_ptr_2 < 4; thing_ptr_2 = thing_ptr_2 + 1) {
      if ((*(short *)(thing_ptr + 0x13) != 0) && /* thing->anim_sprite */
         (*(char *)((&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x13)] + 0x1a) != '\x17')) /* thing->anim_sprite */
      goto LAB_0001a31d;
      thing_ptr = thing_ptr + 2;
    }
    for (thing_ptr = 0; thing_ptr < 4; thing_ptr = thing_ptr + 1) {
      if ((*(short *)(cctrl_ptr + 0xb) != 0) &&
         (*(char *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xb)] + 0x1a) != '\x17')) goto LAB_0001a31d;
      cctrl_ptr = cctrl_ptr + 2;
    }
    uval = 0;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : compevnt_update_creature_and_thing_01a384 (Original VA: 0x1a384, Ghidra: FUN_0001a384)
 * Prototype: undefined4 compevnt_update_creature_and_thing_01a384(void);
 * Address  : 0x1a384 (Size: 285 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 3 -> compevnt_update_creature_and_thing_01a2d7, comptask_fn_01ba46, creature_update_creature_control_084ff8
 ******************************************************************************/
undefined4 compevnt_update_creature_and_thing_01a384(void)

{
  ushort cctrl_ptr;
  undefined2 uval;
  int thing_ptr;
  char ch;
  int arg_eax;
  int val;
  ushort *extraout_ECX;
  undefined4 local_18;
  
  local_18 = 4;
  if (*(int *)(*(int *)(arg_eax + 0x24) + 0x14a9) != 0) {
    cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2f);
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], thing_ptr != g_thing_ptrs) {
      if (((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) & 1) != 0) || /* thing->ccontrol_idx */
           ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) & 2) != 0)) && /* thing->ccontrol_idx */
          (*(char *)(thing_ptr + 7) != 'C')) &&
         ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) == 0)) { /* thing->ccontrol_idx */
        if (*(char *)(thing_ptr + 7) == '\x0e') {
          ch = *(char *)(thing_ptr + 8); /* thing->active_state */
        }
        else {
          ch = *(char *)(thing_ptr + 7);
        }
        if (ch != '[') {
          val = creature_update_creature_control_084ff8();
          if (val != 0) {
            val = compevnt_update_creature_and_thing_01a2d7();
            if (val != 0) {
              val = comptask_fn_01ba46();
              if (val != 0) {
                *(undefined1 *)(val + 2) = 0xb;
                *(undefined2 *)(val + 0x86) =
                     *(undefined2 *)((&g_thing_ptrs)[*extraout_ECX] + 0xd);
                *(undefined2 *)(val + 0x88) =
                     *(undefined2 *)((&g_thing_ptrs)[*extraout_ECX] + 0xf);
                uval = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
                *(undefined2 *)(val + 0x80) = 0;
                *(undefined2 *)(val + 0x76) = uval;
                local_18 = 1;
                *(undefined4 *)(val + 10) = g_game_turn;
              }
            }
          }
        }
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : compevnt_fn_01a4a1 (Original VA: 0x1a4a1, Ghidra: FUN_0001a4a1)
 * Prototype: undefined4 compevnt_fn_01a4a1(void);
 * Address  : 0x1a4a1 (Size: 364 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01a4a1
 * Callers  : 0 -> 
 * Callees  : 7 -> comptask_fn_01ba46, comptool_fn_01e061, comptool_update_player_dungeon_01e38d, comptool_update_creature_and_thing_01f352, compturn_update_creature_and_thing_0201ed, compturn_fn_02035a, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_fn_01a4a1(void)

{
  undefined4 uval;
  int val;
  int arg_eax;
  int val_2;
  int arg_edx;
  byte flag;
  undefined8 uval_2;
  undefined2 auStack_1c [2];
  int local_18;
  
  flag = 0;
  if ((*(int *)(*(int *)(arg_eax + 0x24) + 0x14a9) != 0) && (val_2 = compturn_update_creature_and_thing_0201ed(), val_2 != 0)) {
    uval = *(undefined4 *)(val_2 + 0xd);
    auStack_1c[(uint)flag * -4] = *(undefined2 *)(val_2 + 0x11 + (uint)flag * -8);
    uval_2 = comptool_update_creature_and_thing_01f352();
    local_18 = (*(int *)((int)((ulonglong)uval_2 >> 0x20) + 0x1c) * (int)uval_2) / 100;
    if ((local_18 == 0) && ((int)uval_2 != 0)) {
      local_18 = 1;
    }
    if ((local_18 != 0) && (val_2 = comptool_fn_01e061(), val_2 != 0)) {
      val_2 = compturn_fn_0203f0();
      if (val_2 == 0) {
        val_2 = comptask_fn_01ba46();
        if (val_2 != 0) {
          *(undefined1 *)(val_2 + 2) = 0xc;
          *(undefined4 *)(val_2 + 0x76) = uval;
          *(undefined2 *)(val_2 + 0x7a + (uint)flag * -8) = auStack_1c[(uint)flag * -4];
          *(int *)(val_2 + 0x7c) = local_18;
          *(undefined4 *)(val_2 + 0x70) = *(undefined4 *)(arg_edx + 0x20);
          val = g_game_turn;
          *(int *)(val_2 + 10) = g_game_turn;
          *(int *)(val_2 + 0x5c) = val;
          *(undefined4 *)(val_2 + 0x60) = *(undefined4 *)(arg_eax + 0x34);
          return 1;
        }
      }
      else {
        val_2 = comptool_update_player_dungeon_01e38d();
        if ((((val_2 == 1) && (val_2 = compturn_fn_0203f0(), val_2 == 0)) &&
            (val_2 = compturn_fn_02035a(), val_2 != 0)) && (val_2 = comptask_fn_01ba46(), val_2 != 0)) {
          *(undefined1 *)(val_2 + 2) = 8;
          *(undefined1 *)(val_2 + 1) = 0;
          *(undefined4 *)(val_2 + 0x76) = uval;
          *(undefined2 *)(val_2 + 0x7a + (uint)flag * -8) = auStack_1c[(uint)flag * -4];
          *(undefined4 *)(val_2 + 0x60) = 0x19;
          *(int *)(val_2 + 0x7c) = local_18;
          val = g_game_turn;
          *(undefined4 *)(val_2 + 0x8e) = 0x9c4;
          *(int *)(val_2 + 10) = val;
          *(int *)(val_2 + 0x5c) = val - *(int *)(val_2 + 0x60);
          return 1;
        }
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_fn_01a60d (Original VA: 0x1a60d, Ghidra: FUN_0001a60d)
 * Prototype: undefined4 compevnt_fn_01a60d(void);
 * Address  : 0x1a60d (Size: 126 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01a60d
 * Callers  : 0 -> 
 * Callees  : 3 -> comptask_fn_01ba46, comptool_update_player_dungeon_01e38d, comptool_update_creature_and_thing_0200e0
 ******************************************************************************/
undefined4 compevnt_fn_01a60d(void)

{
  int arg_eax;
  int val;
  int val_2;
  int arg_edx;
  
  if (*(int *)(*(int *)(arg_eax + 0x24) + 0x14a9) != 0) {
    val = comptool_update_player_dungeon_01e38d();
    if (val == 1) {
      val = comptool_update_creature_and_thing_0200e0();
      if (val != 0) {
        val_2 = comptask_fn_01ba46();
        if (val_2 != 0) {
          *(undefined1 *)(val_2 + 2) = 0xf;
          *(undefined2 *)(val_2 + 0x76) = *(undefined2 *)(val + 0x1b);
          *(undefined4 *)(val_2 + 0x70) = *(undefined4 *)(arg_edx + 0x1c);
          *(undefined4 *)(val_2 + 10) = g_game_turn;
          return 1;
        }
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_update_creature_and_thing_01a68b (Original VA: 0x1a68b, Ghidra: FUN_0001a68b)
 * Prototype: undefined4 compevnt_update_creature_and_thing_01a68b(void);
 * Address  : 0x1a68b (Size: 463 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 4 -> comptask_fn_01ba46, comptool_update_player_dungeon_01e38d, comptool_update_creature_and_thing_0200e0, spell_update_creature_control_0720ce
 ******************************************************************************/
undefined4 compevnt_update_creature_and_thing_01a68b(void)

{
  byte slab_coord;
  char ch;
  uint thing_ptr;
  int arg_eax;
  int thing_ptr_2;
  int arg_edx;
  int val;
  int local_30;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = -1;
  local_20 = 0;
  val = *(int *)(arg_eax + 0x24);
  local_24 = 0;
  local_28 = 0;
  if ((((*(int *)(val + 0x14a9) != 0) && (thing_ptr_2 = comptool_update_creature_and_thing_0200e0(), thing_ptr_2 != 0)) &&
      (thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0xa2)], /* thing->ccontrol_idx */
      g_thing_ptrs < thing_ptr)) && (0 < *(short *)(thing_ptr + 0x5e))) {
    slab_coord = (&g_slabmap)
            [((&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)] +
             (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] * 0x55) * 6];
    ch = *(char *)(val + 0xe9f);
    val = *(int *)(arg_edx + 0x24);
    for (local_30 = 0; val = (val + 1) % 4, local_30 < 4; local_30 = local_30 + 1) {
      local_1c = (int)(char)(&g_data_00174e1b)[val * 0xf];
      if (local_1c == -1) break;
      if (((&g_data_00174e1d)[val * 0xf] == '\0') || ((uint)(slab_coord & 7) == (int)ch)) {
        local_20 = *(int *)(&g_data_00174e1e + val * 0xf);
        if (local_20 < 0) {
          local_20 = *(int *)(arg_edx + 0x20);
        }
        local_24 = *(int *)(&g_data_00174e22 + val * 0xf);
        if (local_24 < 0) {
          local_20 = *(int *)(arg_edx + 0x1c);
        }
        local_28 = (uint)(byte)(&g_data_00174e1c)[val * 0xf];
        thing_ptr_2 = spell_update_creature_control_0720ce();
        if ((thing_ptr_2 == 0) && (thing_ptr_2 = comptool_update_player_dungeon_01e38d(), thing_ptr_2 == 1)) break;
      }
    }
    if (local_1c != -1) {
      *(int *)(arg_edx + 0x24) = val;
      val = comptask_fn_01ba46();
      if (val != 0) {
        *(undefined1 *)(val + 2) = 0x11;
        *(undefined2 *)(val + 0x76) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        *(int *)(val + 0x70) = local_24;
        *(int *)(val + 0x7c) = local_20;
        *(uint *)(val + 0x80) = local_28;
        *(undefined4 *)(val + 10) = g_game_turn;
        *(int *)(val + 0x86) = local_1c;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_fn_01a85a (Original VA: 0x1a85a, Ghidra: FUN_0001a85a)
 * Prototype: undefined4 compevnt_fn_01a85a(void);
 * Address  : 0x1a85a (Size: 113 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01a85a
 * Callers  : 0 -> 
 * Callees  : 1 -> compturn_process_dungeon_room_0207b3
 ******************************************************************************/
undefined4 compevnt_fn_01a85a(void)

{
  int arg_eax;
  int val;
  int val_2;
  int loop_i;
  undefined4 uval;
  
  uval = 4;
  for (loop_i = 0; *(int *)((int)&g_data_001792db + loop_i) != -1; loop_i = loop_i + 8) {
    val = compturn_process_dungeon_room_0207b3();
    val_2 = arg_eax + 0x38;
    if (val < 1) {
      for (; (*(byte *)(val_2 + 0x44) & 2) == 0; val_2 = val_2 + 0x48) {
        if (*(int *)(val_2 + 0x2c) == *(int *)((int)&PTR_PTR_001792df + loop_i)) {
          *(undefined4 *)(val_2 + 0x3c) = 0;
          *(undefined4 *)(val_2 + 0x38) = 0;
          uval = 1;
          *(byte *)(val_2 + 0x44) = *(byte *)(val_2 + 0x44) & 0xf6;
        }
      }
    }
  }
  return uval;
}

/******************************************************************************
 * Function : compevnt_fn_01a8cb (Original VA: 0x1a8cb, Ghidra: FUN_0001a8cb)
 * Prototype: undefined4 compevnt_fn_01a8cb(void);
 * Address  : 0x1a8cb (Size: 165 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01a8cb
 * Callers  : 0 -> 
 * Callees  : 2 -> comptask_fn_01ba46, compturn_fn_0203f0
 ******************************************************************************/
undefined4 compevnt_fn_01a8cb(void)

{
  undefined4 uval;
  int val;
  int arg_eax;
  int val_2;
  int extraout_ECX;
  int arg_edx;
  
  if (*(int *)(*(int *)(arg_eax + 0x24) + 0xaf9) <= *(int *)(*(int *)(arg_eax + 0x24) + 0x14b8)) {
    val_2 = compturn_fn_0203f0();
    if (val_2 == 0) {
      val_2 = comptask_fn_01ba46();
      if (val_2 != 0) {
        *(undefined1 *)(val_2 + 2) = 0x12;
        uval = *(undefined4 *)(arg_edx + 0x20);
        *(undefined4 *)(val_2 + 0x60) = 1;
        *(undefined4 *)(val_2 + 0x76) = 0;
        *(undefined4 *)(val_2 + 0x70) = uval;
        uval = g_game_turn;
        *(undefined4 *)(val_2 + 0x70) = 5;
        *(undefined4 *)(val_2 + 10) = uval;
        *(undefined4 *)(val_2 + 0x5c) = uval;
        *(int *)(val_2 + 0x7c) = (*(int *)(extraout_ECX + 0x14b8) * 3) / 2;
        val = *(int *)(extraout_ECX + 0x14b8);
        *(undefined4 *)(val_2 + 0x86) = 0;
        *(int *)(val_2 + 0x80) = (val * 3) / 2;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_fn_01a970 (Original VA: 0x1a970, Ghidra: FUN_0001a970)
 * Prototype: undefined8 compevnt_fn_01a970(void);
 * Address  : 0x1a970 (Size: 145 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01a970
 * Callers  : 1 -> compturn_process_computer_player_021416
 * Callees  : 1 -> compevnt_fn_01aa01
 ******************************************************************************/
undefined8 compevnt_fn_01a970(void)

{
  undefined4 uval;
  int val;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *word_ptr;
  undefined4 arg_edx;
  int val_2;
  
  val = compevnt_fn_01aa01();
  val_2 = 0;
  word_ptr = extraout_ECX;
  if (val != 0) {
    val_2 = (**(code **)(val + 0x18))();
    word_ptr = extraout_ECX_00;
    if (val_2 == 1) {
      *(short *)(extraout_ECX_00 + 0x531) = (short)((val - (int)(extraout_ECX_00 + 0xe)) / 0x48);
      val_2 = (**(code **)(val + 0x1c))();
      word_ptr = extraout_ECX_01;
      if (val_2 == 1) {
        *(undefined4 *)(val + 0x30) = g_game_turn;
        *extraout_ECX_01 = 3;
      }
    }
    uval = g_game_turn;
    if (val_2 == 4) {
      *(undefined4 *)(val + 0x38) = 0;
      *(undefined4 *)(val + 0x3c) = uval;
    }
    uval = g_game_turn;
    if (val_2 == 0) {
      *(undefined4 *)(val + 0x3c) = 0;
      *(undefined4 *)(val + 0x38) = uval;
    }
  }
  if (val_2 != 1) {
    *(undefined2 *)(word_ptr + 0x531) = 0;
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : compevnt_fn_01aa01 (Original VA: 0x1aa01, Ghidra: FUN_0001aa01)
 * Prototype: undefined8 compevnt_fn_01aa01(void);
 * Address  : 0x1aa01 (Size: 186 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01aa01
 * Callers  : 1 -> compevnt_fn_01a970
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compevnt_fn_01aa01(void)

{
  int arg_eax;
  int loop_i;
  int val;
  undefined4 arg_edx;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  undefined4 local_20;
  undefined4 local_1c;
  
  val_5 = -0x80000000;
  local_20 = 0x96;
  local_1c = 100;
  val_3 = 0;
  val = 0;
  val_2 = 0;
  for (loop_i = arg_eax + 0x38; (*(byte *)(loop_i + 0x44) & 2) == 0; loop_i = loop_i + 0x48) {
    if (((((*(byte *)(loop_i + 0x44) & 4) == 0) && ((*(byte *)(loop_i + 0x44) & 8) == 0)) &&
        ((*(byte *)(loop_i + 0x44) & 0x10) == 0)) &&
       (((*(byte *)(loop_i + 0x44) & 0x20) == 0 && ((*(byte *)(loop_i + 0x44) & 1) == 0)))) {
      if (*(int *)(loop_i + 0x3c) == 0) {
        if (*(int *)(loop_i + 0x38) == 0) {
          if (val_5 < *(int *)(loop_i + 4)) {
            val_5 = *(int *)(loop_i + 4);
            val_2 = loop_i;
          }
        }
        else {
          val_4 = g_game_turn - *(int *)(loop_i + 0x38);
          if (local_20 < val_4) {
            val_3 = loop_i;
            local_20 = val_4;
          }
        }
      }
      else {
        val_4 = g_game_turn - *(int *)(loop_i + 0x3c);
        if (local_1c < val_4) {
          val = loop_i;
          local_1c = val_4;
        }
      }
    }
  }
  if ((val != 0) && ((val_2 == 0 || (*(int *)(val_2 + 4) < *(int *)(val + 4))))) {
    val_2 = val;
  }
  if ((val_3 != 0) && ((val_2 == 0 || (*(int *)(val_2 + 4) < *(int *)(val_3 + 4))))) {
    val_2 = val_3;
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : compevnt_fn_01aabb (Original VA: 0x1aabb, Ghidra: FUN_0001aabb)
 * Prototype: void compevnt_fn_01aabb(void);
 * Address  : 0x1aabb (Size: 31 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01aabb
 * Callers  : 4 -> compevnt_fn_01ac13, compevnt_fn_01ac93, comptask_fn_01b3ad, comptask_fn_01b9ad
 * Callees  : 0 -> 
 ******************************************************************************/
void compevnt_fn_01aabb(void)

{
  int arg_edx;
  
  if (arg_edx != 0) {
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) | 8;
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) & 0xdf;
    *(undefined4 *)(arg_edx + 0x34) = g_game_turn;
    (**(code **)(arg_edx + 0x24))();
  }
  return;
}

/******************************************************************************
 * Function : compevnt_fn_01aada (Original VA: 0x1aada, Ghidra: FUN_0001aada)
 * Prototype: void compevnt_fn_01aada(void);
 * Address  : 0x1aada (Size: 27 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01aada
 * Callers  : 5 -> comptask_update_player_dungeon_01ae5c, comptask_fn_01b15c, comptask_process_slabmap_tile_01b3d7, comptask_update_player_dungeon_01b561, comptask_fn_01ba1e
 * Callees  : 0 -> 
 ******************************************************************************/
void compevnt_fn_01aada(void)

{
  undefined4 uval;
  int arg_edx;
  
  if (arg_edx != 0) {
    *(undefined4 *)(arg_edx + 0x38) = 0;
    uval = g_game_turn;
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) & 0xdf;
    *(undefined4 *)(arg_edx + 0x3c) = uval;
    *(undefined4 *)(arg_edx + 0x34) = uval;
  }
  return;
}

/******************************************************************************
 * Function : compevnt_fn_01aaf5 (Original VA: 0x1aaf5, Ghidra: FUN_0001aaf5)
 * Prototype: void compevnt_fn_01aaf5(void);
 * Address  : 0x1aaf5 (Size: 31 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01aaf5
 * Callers  : 2 -> compevnt_fn_01ac13, compevnt_fn_01ac93
 * Callees  : 0 -> 
 ******************************************************************************/
void compevnt_fn_01aaf5(void)

{
  undefined4 uval;
  int arg_edx;
  
  if (arg_edx != 0) {
    *(undefined4 *)(arg_edx + 0x3c) = 0;
    *(undefined4 *)(arg_edx + 0x38) = 0;
    uval = g_game_turn;
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) & 0xdf;
    *(undefined4 *)(arg_edx + 0x34) = uval;
  }
  return;
}

/******************************************************************************
 * Function : compevnt_fn_01ab14 (Original VA: 0x1ab14, Ghidra: FUN_0001ab14)
 * Prototype: undefined4 compevnt_fn_01ab14(void);
 * Address  : 0x1ab14 (Size: 96 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01ab14
 * Callers  : 0 -> 
 * Callees  : 2 -> comptool_fn_01db99, comptool_fn_02008f
 ******************************************************************************/
undefined4 compevnt_fn_01ab14(void)

{
  int val;
  int val_2;
  int arg_eax;
  int loop_i;
  int val_3;
  int extraout_ECX;
  int arg_edx;
  
  val = *(int *)(arg_eax + 0x24);
  loop_i = comptool_fn_02008f();
  if (loop_i < *(int *)(arg_eax + 0x30)) {
    for (loop_i = 0; *(int *)((int)&g_data_001792db + loop_i) != -1; loop_i = loop_i + 8) {
      val_2 = *(int *)((int)&g_data_001792db + loop_i);
      if ((*(short *)(val_2 * 2 + val + 0xb) == 0) &&
         (val_3 = comptool_fn_01db99(), loop_i = extraout_ECX, val_3 == 1)) {
        *(int *)(arg_edx + 0x10) = val_2;
        return 1;
      }
    }
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_process_dungeon_room_01ab74 (Original VA: 0x1ab74, Ghidra: FUN_0001ab74)
 * Prototype: int compevnt_process_dungeon_room_01ab74(void);
 * Address  : 0x1ab74 (Size: 159 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 3 -> comptool_fn_01db99, comptool_fn_02008f, compturn_process_dungeon_room_0207b3
 ******************************************************************************/
int compevnt_process_dungeon_room_01ab74(void)

{
  ushort uval;
  int arg_eax;
  int val;
  int room_ptr;
  int extraout_ECX;
  int arg_edx;
  
  room_ptr = *(int *)(arg_eax + 0x24);
  val = comptool_fn_01db99();
  if (val != 1) {
    if (val == 0) {
      *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) | 4;
    }
    return val;
  }
  val = comptool_fn_02008f();
  if (val < *(int *)(extraout_ECX + 0x30)) {
    val = 0;
    uval = *(ushort *)(room_ptr + 0xb + *(int *)(arg_edx + 0x10) * 2);
    while (room_ptr = (uint)uval * 0x45, &g_rooms < &g_rooms + room_ptr) {
      val = val + (uint)*(ushort *)(&g_bss_002ddd29 + room_ptr);
      uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
    }
    if (val != 0) {
      room_ptr = compturn_process_dungeon_room_0207b3();
      if (room_ptr == 9999) {
        if (*(int *)(arg_edx + 0x10) == 0xd) {
          return 4;
        }
      }
      else if ((val * 10) / 100 <= room_ptr) {
        return 4;
      }
    }
    return 1;
  }
  return 4;
}

/******************************************************************************
 * Function : compevnt_fn_01ac13 (Original VA: 0x1ac13, Ghidra: FUN_0001ac13)
 * Prototype: undefined4 compevnt_fn_01ac13(void);
 * Address  : 0x1ac13 (Size: 128 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01ac13
 * Callers  : 0 -> 
 * Callees  : 3 -> compevnt_fn_01aabb, compevnt_fn_01aaf5, comptask_process_dungeon_room_01cf1c
 ******************************************************************************/
undefined4 compevnt_fn_01ac13(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  
  val = comptask_process_dungeon_room_01cf1c(*(undefined4 *)(arg_edx + 0x14));
  if (val == 0) {
    if (*(int *)(arg_edx + 0xc) < *(int *)(arg_edx + 8)) {
      if (*(int *)(arg_edx + 8) < 3) {
        return 0;
      }
      *(int *)(arg_edx + 8) = *(int *)(arg_edx + 8) + -1;
    }
    else {
      if (*(int *)(arg_edx + 0xc) < 3) {
        return 0;
      }
      *(int *)(arg_edx + 0xc) = *(int *)(arg_edx + 0xc) + -1;
    }
    compevnt_fn_01aaf5();
  }
  else {
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) | 0x20;
    *(short *)(val + 0x8c) = (short)((arg_edx - (arg_eax + 0x38)) / 0x48);
    compevnt_fn_01aabb();
  }
  return 2;
}

/******************************************************************************
 * Function : compevnt_fn_01ac93 (Original VA: 0x1ac93, Ghidra: FUN_0001ac93)
 * Prototype: undefined4 compevnt_fn_01ac93(void);
 * Address  : 0x1ac93 (Size: 140 bytes)
 * Module   : compevnt.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compevnt.cpp procedure @ 0x01ac93
 * Callers  : 0 -> 
 * Callees  : 3 -> compevnt_fn_01aabb, compevnt_fn_01aaf5, comptask_process_dungeon_room_01cf1c
 ******************************************************************************/
undefined4 compevnt_fn_01ac93(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  
  val = comptask_process_dungeon_room_01cf1c(*(undefined4 *)(arg_edx + 0x14));
  if (val != 0) {
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) | 0x20;
    *(short *)(val + 0x8c) = (short)((arg_edx - (arg_eax + 0x38)) / 0x48);
    compevnt_fn_01aabb();
    *(byte *)(arg_edx + 0x44) = *(byte *)(arg_edx + 0x44) & 0xf7;
    return 2;
  }
  if (*(int *)(arg_edx + 0xc) < *(int *)(arg_edx + 8)) {
    if (*(int *)(arg_edx + 8) < 3) {
      return 0;
    }
    *(int *)(arg_edx + 8) = *(int *)(arg_edx + 8) + -1;
  }
  else {
    if (*(int *)(arg_edx + 0xc) < 3) {
      return 0;
    }
    *(int *)(arg_edx + 0xc) = *(int *)(arg_edx + 0xc) + -1;
  }
  compevnt_fn_01aaf5();
  return 2;
}

