/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: comptool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01d917 (Original VA: 0x1d917, Ghidra: FUN_0001d917)
 * Prototype: undefined8 comptool_update_creature_and_thing_01d917(void);
 * Address  : 0x1d917 (Size: 79 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> compevnt_update_creature_and_thing_019d32, comptask_process_dungeon_room_01b119, comptool_update_player_dungeon_01e38d
 * Callees  : 1 -> comptask_fn_01d5f7
 ******************************************************************************/
undefined8 comptool_update_creature_and_thing_01d917(void)

{
  int val;
  int arg_eax;
  int val_2;
  uint thing_ptr;
  undefined4 arg_edx;
  
  val = *(int *)(arg_eax + 0x24);
  val_2 = comptask_fn_01d5f7();
  for (thing_ptr = (&g_thing_ptrs)[*(ushort *)(val + 0x2d)]; g_thing_ptrs < thing_ptr;
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f)]) { /* thing->ccontrol_idx */
    val_2 = val_2 - (uint)*(ushort *)(&g_bss_002e91a5 + (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6);
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : comptool_process_slabmap_tile_01d966 (Original VA: 0x1d966, Ghidra: FUN_0001d966)
 * Prototype: uint comptool_process_slabmap_tile_01d966(void);
 * Address  : 0x1d966 (Size: 563 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> comptask_process_slabmap_tile_01b3d7
 * Callees  : 1 -> comptool_process_slabmap_tile_01dd33
 ******************************************************************************/
uint comptool_process_slabmap_tile_01d966(void)

{
  int val;
  int arg_eax;
  uint uval;
  uint uval_2;
  uint uval_3;
  int val_2;
  uint uval_4;
  int arg_ecx;
  int extraout_ECX;
  int arg_edx;
  byte slab_coord;
  int arg_ebx;
  undefined1 *word_ptr;
  uint uval_5;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  val = *(int *)(arg_eax + 0x24);
  uval_5 = 1 << (*(byte *)(val + 0xe9f) & 0x1f);
  uval = ((arg_edx - arg_ecx / 2) / 3) * 3;
  if ((int)uval < 0) {
    uval = 0;
  }
  local_14 = ((arg_ebx - arg_ecx / 2) / 3) * 3;
  if ((int)local_14 < 0) {
    local_14 = 0;
  }
  uval_2 = ((arg_ecx / 2 + arg_edx) / 3) * 3;
  if (0xff < (int)uval_2) {
    uval_2 = 0xff;
  }
  uval_3 = ((arg_ecx / 2 + arg_ebx) / 3) * 3;
  if (0xff < (int)uval_3) {
    uval_3 = 0xff;
  }
  local_20 = local_14 << 2;
  do {
    if (uval_3 <= local_14) {
      if (uval_5 == 1 << (*(byte *)(val + 0xe9f) & 0x1f)) {
        return 0xffffffff;
      }
      return uval_5;
    }
    local_1c = uval << 2;
    for (local_18 = uval; local_18 < uval_2; local_18 = local_18 + 3) {
      slab_coord = (&g_slabmap)
              [(*(int *)((int)&g_subtile_to_slab_lut + local_20) * 0x55 +
               *(int *)((int)&g_subtile_to_slab_lut + local_1c)) * 6] & 7;
      if (((uint)slab_coord != (int)*(char *)(val + 0xe9f)) &&
         (((slab_coord != g_neutral_player_number ||
           ((((&g_data_001921c6)
              [(uint)(byte)(&g_slabmap_base)[(local_18 / 3 + (local_14 / 3) * 0x55) * 6] * 0x16] &
             0x29) == 0 &&
            ((byte)(&g_slabmap_base)[(local_18 / 3 + (local_14 / 3) * 0x55) * 6] != 0xc)))) &&
          ((uval_5 & 1 << slab_coord) == 0)))) {
        val_2 = comptool_process_slabmap_tile_01dd33();
        if (val_2 != 0) {
          val_2 = arg_eax + extraout_ECX * 0x18a;
          word_ptr = (undefined1 *)
                   (*(short *)(val_2 + 0xa14) * 6 + arg_eax + extraout_ECX * 0x18a + 0xa1a);
          *(short *)(val_2 + 0xa14) = (short)((*(short *)(val_2 + 0xa14) + 1) % 0x40);
          *(undefined4 *)(val_2 + 0xa10) = g_game_turn;
          word_ptr[1] = (undefined1)local_18;
          *word_ptr = 0;
          word_ptr[2] = 0;
          word_ptr[3] = (undefined1)local_14;
          uval_5 = uval_5 | 1 << slab_coord;
          uval_4 = (1 << (g_neutral_player_number + 1 & 0x1f)) - 1;
          if (uval_5 == uval_4) {
            return uval_4;
          }
        }
      }
      local_1c = local_1c + 0xc;
    }
    local_20 = local_20 + 0xc;
    local_14 = local_14 + 3;
  } while( true );
}

/******************************************************************************
 * Function : comptool_fn_01db99 (Original VA: 0x1db99, Ghidra: FUN_0001db99)
 * Prototype: undefined4 comptool_fn_01db99(void);
 * Address  : 0x1db99 (Size: 35 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x01db99
 * Callers  : 3 -> compevnt_fn_01ab14, compevnt_process_dungeon_room_01ab74, comptool_update_slab_subtile_columns_01e5de
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptool_fn_01db99(void)

{
  int arg_eax;
  int val;
  undefined4 uval;
  int arg_edx;
  
  val = *(int *)(arg_eax + 0x24) + arg_edx;
  if (*(char *)(val + 0xf8f) == '\0') {
    uval = 0;
  }
  else {
    uval = 1;
    if (*(char *)(val + 0xf7e) != '\x01') {
      return 4;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : comptool_fn_01dbbc (Original VA: 0x1dbbc, Ghidra: FUN_0001dbbc)
 * Prototype: void comptool_fn_01dbbc(void);
 * Address  : 0x1dbbc (Size: 375 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x01dbbc
 * Callers  : 3 -> compevnt_roll_action_random_018ffe, comptask_update_player_dungeon_01b561, comptask_update_player_dungeon_01b629
 * Callees  : 3 -> comptool_fn_01ddd4, imptool_update_player_dungeon_0401aa, bflib_system_io_fn_0e69fc
 ******************************************************************************/
void comptool_fn_01dbbc(void)

{
  int val;
  int val_2;
  int val_3;
  int arg_eax;
  int *int_ptr;
  int *arg_edx;
  int val_4;
  short *val_5;
  int val_6;
  undefined8 uval;
  int local_20;
  int *local_1c;
  int local_18;
  
  val_6 = 0;
  int_ptr = arg_edx;
  val_4 = arg_eax;
  do {
    val_3 = *(int *)(val_4 + 0xa16);
    int_ptr[2] = 0;
    int_ptr[3] = 0x7fffffff;
    *int_ptr = val_3;
    val_4 = val_4 + 0x18a;
    int_ptr[1] = val_6;
    val_6 = val_6 + 1;
    int_ptr = int_ptr + 4;
  } while (val_6 < 5);
  val_4 = 0;
  int_ptr = arg_edx;
  do {
    if (*int_ptr < int_ptr[4]) {
      val_6 = *int_ptr;
      val_3 = int_ptr[1];
      val = int_ptr[2];
      val_2 = int_ptr[3];
      *int_ptr = int_ptr[4];
      int_ptr[1] = int_ptr[5];
      int_ptr[2] = int_ptr[6];
      int_ptr[3] = int_ptr[7];
      int_ptr[4] = val_6;
      int_ptr[5] = val_3;
      int_ptr[6] = val;
      int_ptr[7] = val_2;
    }
    int_ptr = int_ptr + 4;
  } while ((int_ptr != arg_edx + 0x10) || (val_4 = val_4 + 1, int_ptr = arg_edx, val_4 < 5));
  local_1c = arg_edx;
  do {
    val_4 = local_1c[1] * 0x18a + arg_eax + 0xa10;
    local_18 = (int)*(short *)(val_4 + 4);
    if (local_18 != 0) {
      local_18 = local_18 + -1;
    }
    local_20 = 0;
    do {
      val_5 = (short *)(local_18 * 6 + val_4 + 10);
      if (*val_5 != 0) {
        val_6 = comptool_fn_01ddd4();
        if ((val_6 == 0x19) || (val_6 = imptool_update_player_dungeon_0401aa(), -1 < val_6)) {
          *val_5 = 0;
        }
        else {
          bflib_system_io_fn_0e69fc();
          uval = bflib_system_io_fn_0e69fc();
          val_6 = (int)uval + (int)((ulonglong)uval >> 0x20);
          if (val_6 <= local_1c[3]) {
            local_1c[3] = val_6;
            local_1c[2] = (int)val_5;
          }
        }
      }
      local_18 = (local_18 + 1) % 0x40;
      local_20 = local_20 + 1;
    } while (local_20 < 0x40);
    local_1c = local_1c + 4;
  } while (local_1c != arg_edx + 0x14);
  return;
}

/******************************************************************************
 * Function : comptool_process_slabmap_tile_01dd33 (Original VA: 0x1dd33, Ghidra: FUN_0001dd33)
 * Prototype: undefined4 comptool_process_slabmap_tile_01dd33(void);
 * Address  : 0x1dd33 (Size: 161 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 5 -> compevnt_process_thing_entity_018e3c, comptask_fn_01b762, comptask_process_slabmap_tile_01c3d3, comptask_fn_01c73c, comptool_process_slabmap_tile_01d966
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptool_process_slabmap_tile_01dd33(void)

{
  int arg_eax;
  int subtile_x;
  uint arg_ebx;
  
  if (((((&g_slabmap)[((&g_subtile_to_slab_lut)[arg_eax] + (&g_subtile_to_slab_lut)[subtile_x] * 0x55) * 6] & 7) ==
        arg_ebx) || (arg_ebx == 0xffffffff)) &&
     (((((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6] * 0x16]
        & 0x10) == 0 && ((byte)(&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6] != 0xc)) ||
      (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6] * 0x16]
       & 2) != 0)))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : comptool_fn_01ddd4 (Original VA: 0x1ddd4, Ghidra: FUN_0001ddd4)
 * Prototype: int comptool_fn_01ddd4(void);
 * Address  : 0x1ddd4 (Size: 184 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x01ddd4
 * Callers  : 3 -> comptask_roll_action_random_01d10e, comptask_fn_01d807, comptool_fn_01dbbc
 * Callees  : 0 -> 
 ******************************************************************************/
int comptool_fn_01ddd4(void)

{
  int val;
  int val_2;
  bool flag;
  int arg_eax;
  int val_3;
  code *arg_ecx;
  uint uval;
  uint extraout_ECX;
  int arg_ebx;
  int val_4;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_10;
  
  val_4 = 0;
  local_20 = 0;
  local_1c = 0;
  flag = false;
  local_10 = (uint)*(byte *)(arg_eax + 3);
  uval = (uint)*(byte *)(arg_eax + 1);
  do {
    if (flag) {
      local_1c = local_1c + 1;
    }
    val = *(int *)(&g_data_00174dd0 + local_20 * 8);
    val_2 = *(int *)(&g_data_00174dd4 + local_20 * 8);
    for (local_18 = local_1c; local_18 != 0; local_18 = local_18 + -1) {
      if ((uval < 0xff) && (local_10 < 0xff)) {
        val_3 = (*arg_ecx)();
        if (val_3 != 0) {
          *(char *)(arg_eax + 1) = (char)extraout_ECX;
          *(undefined1 *)(arg_eax + 3) = (undefined1)local_10;
          if (val_3 == -1) {
            val_4 = -val_4;
          }
          return val_4;
        }
        val_4 = val_4 + 1;
        uval = extraout_ECX;
        if (arg_ebx <= val_4) {
          return val_4;
        }
      }
      uval = uval + val;
      local_10 = local_10 + val_2;
    }
    local_20 = local_20 + 1 & 3;
    flag = (bool)(flag ^ 1);
  } while( true );
}

/******************************************************************************
 * Function : comptool_process_dungeon_room_01de8c (Original VA: 0x1de8c, Ghidra: FUN_0001de8c)
 * Prototype: undefined4 comptool_process_dungeon_room_01de8c(void);
 * Address  : 0x1de8c (Size: 156 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> compevnt_fn_0197a9, comptool_fn_01ff84
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 comptool_process_dungeon_room_01de8c(void)

{
  ushort uval;
  int arg_eax;
  uint uval_2;
  uint uval_3;
  int val;
  uint uval_4;
  int *extraout_ECX;
  int *arg_edx;
  int val_2;
  int val_3;
  int arg_ebx;
  int val_4;
  int val_5;
  undefined8 uval_5;
  uint local_14;
  
  val_4 = *(int *)(arg_eax + 0x24);
  val_5 = 0;
  *arg_edx = 0;
  uval_2 = (uint)*(byte *)(arg_ebx + 1);
  local_14 = 0xffffffff;
  uval_3 = (uint)*(byte *)(arg_ebx + 3);
  val_2 = val_4 + 0x22;
  do {
    uval = *(ushort *)(val_4 + 0xb);
    while (&g_rooms < &g_rooms + (uint)uval * 0x45) {
      val = bflib_system_io_fn_0e69fc(val_2,uval_3,uval_2);
      uval_5 = bflib_system_io_fn_0e69fc();
      val_3 = (int)((ulonglong)uval_5 >> 0x20);
      uval_4 = (int)uval_5 + val;
      if (uval_4 < local_14) {
        val_5 = val_3;
        local_14 = uval_4;
      }
      arg_edx = extraout_ECX;
      uval = *(ushort *)(val_3 + 6);
    }
    val_4 = val_4 + 2;
  } while (val_4 != val_2);
  if (val_5 != 0) {
    *arg_edx = val_5;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : comptool_fn_01df65 (Original VA: 0x1df65, Ghidra: FUN_0001df65)
 * Prototype: undefined4 comptool_fn_01df65(int param_1);
 * Address  : 0x1df65 (Size: 252 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x01df65
 * Callers  : 1 -> comptask_roll_action_random_01d10e
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 comptool_fn_01df65(int param_1)

{
  char ch;
  ushort uval;
  int val;
  short short_val;
  int arg_eax;
  int arg_ecx;
  int arg_edx;
  int val_2;
  int val_3;
  undefined8 uval_2;
  int val_4;
  
  if (arg_ecx <= param_1) {
    arg_ecx = param_1;
  }
  val_2 = arg_edx + arg_ecx * -3;
  if (val_2 < 1) {
    val_2 = 0;
  }
  uval = *(ushort *)(arg_eax + 0x14c6);
  do {
    val = (uint)uval * 0x94;
    if (&g_bss_002c9203 + val < &g_bss_002c9204) {
      return 1;
    }
    ch = (&g_bss_002c9205)[val];
    if ((((ch == '\x01') || (ch == '\x02')) || (ch == '\x03')) || (ch == '\x04')) {
      short_val = *(short *)(&g_bss_002c927f + val);
      if (short_val <= *(short *)(&g_bss_002c9281 + val)) {
        short_val = *(short *)(&g_bss_002c9281 + val);
      }
      val_4 = short_val * 3;
      val_3 = (uint)(byte)(&g_bss_002c9268)[val] - val_4 / 2;
      if (val_3 < 1) {
        val_3 = 0;
      }
      uval_2 = bflib_system_io_fn_0e69fc(val_4,val_3,val_2);
      if (((int)uval_2 <= (int)((ulonglong)uval_2 >> 0x20)) &&
         (uval_2 = bflib_system_io_fn_0e69fc(val_4,val_3,val_2), (int)uval_2 <= (int)((ulonglong)uval_2 >> 0x20))) {
        return 0;
      }
    }
    uval = *(ushort *)(&g_bss_002c9295 + val);
  } while( true );
}

/******************************************************************************
 * Function : comptool_fn_01e061 (Original VA: 0x1e061, Ghidra: FUN_0001e061)
 * Prototype: undefined4 comptool_fn_01e061(void);
 * Address  : 0x1e061 (Size: 184 bytes)
 * Module   : comptool.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module comptool.cpp procedure @ 0x01e061
 * Callers  : 5 -> compevnt_fn_01a08c, compevnt_fn_01a158, compevnt_fn_01a4a1, comptool_computer_thing_hand_01e119, comptool_thing_held_computer_unconsious_01e226
 * Callees  : 1 -> is_subtile_revealed_and_within_bounds
 ******************************************************************************/
undefined4 comptool_fn_01e061(void)

{
  char ch;
  char ch_2;
  char ch_3;
  char ch_4;
  int val;
  undefined1 *arg_edx;
  int loop_i;
  char local_20;
  char local_1c;
  int local_18;
  
  local_18 = 0;
  do {
    if (0x11 < local_18) {
      return 0;
    }
    ch = (&g_data_0018b65c)[local_18];
    ch_2 = arg_edx[1];
    ch_3 = (&g_data_0018b65d)[local_18];
    ch_4 = arg_edx[3];
    for (loop_i = 0; loop_i < 0x12; loop_i = loop_i + 2) {
      local_20 = ch_2 + ch * '\x03' + (&g_data_0018b65c)[loop_i];
      local_1c = ch_4 + ch_3 * '\x03' + (&g_data_0018b65d)[loop_i];
      val = is_subtile_revealed_and_within_bounds();
      if (val == 1) {
        arg_edx[1] = local_20;
        *arg_edx = 0x80;
        arg_edx[2] = 0x80;
        arg_edx[3] = local_1c;
        return 1;
      }
    }
    local_18 = local_18 + 2;
  } while( true );
}

/******************************************************************************
 * Function : comptool_computer_thing_hand_01e119 (Original VA: 0x1e119, Ghidra: FUN_0001e119)
 * Prototype: undefined4 comptool_computer_thing_hand_01e119(void);
 * Address  : 0x1e119 (Size: 269 bytes)
 * Module   : comptool.cpp [direct_file_string_xref]
 * OrigLine : comptool.cpp lines 715
 * Purpose  : String 'COMPUTER INVALID THING FOR HAND C%d M%d'
 * Callers  : 4 -> comptask_fn_01c73c, comptask_fn_01c7fa, comptask_fn_01c897, comptask_process_dungeon_room_01cc83
 * Callees  : 9 -> comptool_fn_01e061, instance_update_creature_control_049dd9, person_external_change_state_but_064a5f, creature_fn_081eac, creature_fn_084d98, creature_update_creature_control_084ff8, object_process_slabmap_tile_0c57c4, LbErrorLog ...
 ******************************************************************************/
undefined4 comptool_computer_thing_hand_01e119(void)

{
  char ch;
  int arg_eax;
  int val;
  byte *arg_edx;
  
  if ((arg_edx[0x1f] == 5) || ((arg_edx[0x1f] == 1 && (val = object_process_slabmap_tile_0c57c4(), val != 0)))) {
    val = creature_update_creature_control_084ff8();
    if (val != 0) {
      if ((*arg_edx & 0x20) != 0) {
        return 0;
      }
      val = comptool_fn_01e061();
      if (val == 0) {
        return 0;
      }
      ch = creature_fn_084d98();
      if (ch == '\0') {
        return 0;
      }
      if (arg_edx[0x1f] == 5) {
        instance_update_creature_control_049dd9();
        person_external_change_state_but_064a5f();
      }
      creature_fn_081eac();
      *(undefined2 *)(arg_eax + 0x14c8) = *(undefined2 *)(arg_edx + 0x1b);
      *(int *)(arg_eax + 0x10) = *(int *)(arg_eax + 0x10) + -1;
      return 1;
    }
    dk_sprintf(&g_log_sprintf_buf,s_COMPUTER_TRIES_TO_PICK_UP_INVALI_001624f1,arg_edx[0x1a]);
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s_COMPUTER_INVALID_THING_FOR_HAND_C_001624bc,arg_edx[0x1f],
                 arg_edx[0x1a]);
  }
  LbErrorLog(); /* LbErrorLog("comptool.cpp", line 715, g_log_buf) */
  return 0;
}

/******************************************************************************
 * Function : comptool_thing_held_computer_unconsious_01e226 (Original VA: 0x1e226, Ghidra: FUN_0001e226)
 * Prototype: undefined4 comptool_thing_held_computer_unconsious_01e226(void);
 * Address  : 0x1e226 (Size: 284 bytes)
 * Module   : comptool.cpp [direct_file_string_xref]
 * OrigLine : comptool.cpp lines 758
 * Purpose  : String 'Thing Held By computer is unconsious'
 * Callers  : 4 -> comptask_fn_01c73c, comptask_fn_01c7fa, comptask_fn_01c897, comptask_process_dungeon_room_01cc83
 * Callees  : 7 -> comptool_fn_01e061, person_initialise_state_but_thing_064b0c, creature_fn_081ec8, creature_fn_084d98, move_process_map_subtile_0b28e8, move_process_map_subtile_0b33e4, LbErrorLog
 ******************************************************************************/
undefined4 comptool_thing_held_computer_unconsious_01e226(void)

{
  char ch;
  int arg_eax;
  int val;
  int arg_edx;
  int val_2;
  int extraout_EDX;
  int arg_ebx;
  byte flag;
  undefined4 local_18;
  short local_14 [2];
  
  flag = 0;
  if (*(char *)(arg_edx + 7) == 'C') {
    LbErrorLog(); /* LbErrorLog("comptool.cpp", line 758, "Thing Held By computer is unconsious") */
  }
  val = comptool_fn_01e061();
  if (val != 0) {
    ch = creature_fn_084d98();
    if (ch != '\0') {
      local_18 = CONCAT22((ushort)*(byte *)(arg_ebx + 3) * 0x100 + 0x80,
                          (ushort)*(byte *)(arg_ebx + 1) * 0x100 + 0x80);
      local_14[0] = 0;
      local_14[0] = move_process_map_subtile_0b28e8();
      val = move_process_map_subtile_0b33e4();
      val_2 = (uint)*(ushort *)(arg_edx + 0x58) + (int)local_14[0];
      if (val_2 < val) {
        val = val - val_2;
        if (val < 0) {
          val = 0;
        }
        else if (0x300 < val) {
          val = 0x300;
        }
        *(undefined4 *)(arg_edx + 0xd) = local_18;
        *(short *)(arg_edx + 0x11 + (uint)flag * -8) = local_14[(uint)flag * -4];
        *(short *)(arg_edx + 0x11) = *(short *)(arg_edx + 0x11) + (short)val;
        creature_fn_081ec8();
        if (*(char *)(extraout_EDX + 0x1f) == '\x05') {
          person_initialise_state_but_thing_064b0c();
        }
        *(undefined2 *)(arg_eax + 0x14c8) = 0;
        *(int *)(arg_eax + 0x10) = *(int *)(arg_eax + 0x10) + -1;
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : comptool_fn_01e342 (Original VA: 0x1e342, Ghidra: FUN_0001e342)
 * Prototype: byte * comptool_fn_01e342(void);
 * Address  : 0x1e342 (Size: 75 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x01e342
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * comptool_fn_01e342(void)

{
  uint arg_eax;
  byte *loop_i;
  uint arg_edx;
  byte *byte_ptr;
  int val;
  
  val = -0x80000000;
  byte_ptr = (byte *)0x0;
  for (loop_i = &g_bss_002e707c; loop_i < &g_bss_002e78b0; loop_i = loop_i + 0x15) {
    if (((((*loop_i & 1) != 0) && (arg_eax == loop_i[0xb])) &&
        ((arg_edx == loop_i[10] || (arg_edx == 0xffffffff)))) && (val < *(int *)(loop_i + 0x10))) {
      val = *(int *)(loop_i + 0x10);
      byte_ptr = loop_i;
    }
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : comptool_update_player_dungeon_01e38d (Original VA: 0x1e38d, Ghidra: FUN_0001e38d)
 * Prototype: undefined4 comptool_update_player_dungeon_01e38d(void);
 * Address  : 0x1e38d (Size: 152 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 11 -> compevnt_process_thing_entity_018e3c, compevnt_roll_action_random_018ffe, compevnt_update_creature_and_thing_01916a, compevnt_fn_01a158, compevnt_fn_01a4a1, compevnt_fn_01a60d, compevnt_update_creature_and_thing_01a68b, comptask_fn_01b35a ...
 * Callees  : 1 -> comptool_update_creature_and_thing_01d917
 ******************************************************************************/
undefined4 comptool_update_player_dungeon_01e38d(void)

{
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int arg_edx;
  int arg_ebx;
  bool flag;
  undefined8 uval;
  
  val = *(int *)(arg_eax + 0x24) + arg_edx;
  if (*(char *)(val + 0xff4) == '\0') {
    return 0xffffffff;
  }
  if (*(char *)(val + 0xfe0) != '\0') {
    uval = comptool_update_creature_and_thing_01d917();
    val_2 = (int)((ulonglong)uval >> 0x20);
    val = (int)uval;
    if (val_2 == 2) {
      val_2 = *(char *)(*(int *)(arg_eax + 0x24) + 0xe9f) * 0x1508;
      val_2 = ((byte)(&g_bss_002e0ea1)[val_2] + 1) - (uint)(byte)(&g_bss_002e0e76)[val_2];
      if (val_2 < 1) {
        val_2 = 1;
      }
      val_3 = (val_2 * g_bss_002eaea9) / 2;
      val_2 = val - val_3;
      flag = val == val_3;
    }
    else {
      val_3 = extraout_ECX * *(int *)(&g_bss_002eae11 + arg_ebx * 4 + val_2 * 0x4c);
      val_2 = val - val_3;
      flag = val_2 == 0;
    }
    if (!flag && SBORROW4(val,val_3) == val_2 < 0) {
      return 1;
    }
    return 0;
  }
  return 4;
}

/******************************************************************************
 * Function : comptool_process_dungeon_room_01e425 (Original VA: 0x1e425, Ghidra: FUN_0001e425)
 * Prototype: undefined1 * comptool_process_dungeon_room_01e425(void);
 * Address  : 0x1e425 (Size: 131 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> compevnt_roll_action_random_018ffe
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * comptool_process_dungeon_room_01e425(void)

{
  int arg_edx;
  uint rand_seed;
  int val;
  byte local_14 [4];
  
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = g_action_random_seed >> 0xd;
  val = 0;
  g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
  rand_seed = (uint)local_14[rand_seed & 3];
  while( true ) {
    if (0x10 < val) {
      return (undefined1 *)0x0;
    }
    if (&g_rooms <
        &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + rand_seed * 2 + arg_edx * 0x1508) * 0x45)
    break;
    val = val + 1;
    rand_seed = (int)(rand_seed + 1) % 0x11;
  }
  return &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + rand_seed * 2 + arg_edx * 0x1508) * 0x45;
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01e4a8 (Original VA: 0x1e4a8, Ghidra: FUN_0001e4a8)
 * Prototype: int comptool_update_creature_and_thing_01e4a8(void);
 * Address  : 0x1e4a8 (Size: 310 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> compevnt_fn_01a08c
 * Callees  : 2 -> room_fn_0cfc48, bflib_system_io_fn_0e69fc
 ******************************************************************************/
int comptool_update_creature_and_thing_01e4a8(void)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  byte flag;
  int arg_eax;
  int val;
  int arg_ecx;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_ebx;
  undefined8 uval;
  
  val_2 = 0;
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return val_2;
    }
    if (((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr[7] != 0x43)) &&
       (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) == '\0')) { /* thing->ccontrol_idx */
      if (thing_ptr[7] == 0xe) {
        flag = thing_ptr[8];
      }
      else {
        flag = thing_ptr[7];
      }
      if (flag != 0x27) {
        if (thing_ptr[7] == 0xe) {
          flag = thing_ptr[8];
        }
        else {
          flag = thing_ptr[7];
        }
        if (flag != 0x74) {
          if (thing_ptr[7] == 0xe) {
            flag = thing_ptr[8];
          }
          else {
            flag = thing_ptr[7];
          }
          if (flag != 0x5b) {
            if (thing_ptr[7] == 0xe) {
              flag = thing_ptr[8];
            }
            else {
              flag = thing_ptr[7];
            }
            if (((&g_data_0018c4be)[(uint)flag * 0x29] != '\x01') || (arg_ecx != 0)) {
              if (arg_ebx == 0) {
                bflib_system_io_fn_0e69fc();
                uval = bflib_system_io_fn_0e69fc();
                val_2 = extraout_ECX_00;
                if (1 < (int)uval + (int)((ulonglong)uval >> 0x20)) goto LAB_0001e585;
              }
              else {
                val = room_fn_0cfc48();
                val_2 = extraout_ECX;
                if (val != 0) {
LAB_0001e585:
                  val_2 = val_2 + 1;
                }
              }
            }
          }
        }
      }
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : comptool_update_slab_subtile_columns_01e5de (Original VA: 0x1e5de, Ghidra: FUN_0001e5de)
 * Prototype: undefined4 comptool_update_slab_subtile_columns_01e5de(void);
 * Address  : 0x1e5de (Size: 2845 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 8 -> comptask_update_player_dungeon_01ae5c, comptask_fn_01b15c, comptask_fn_01bb96, comptask_process_dungeon_room_01c0ec, comptask_process_slabmap_tile_01c1f1, comptask_process_slabmap_tile_01c3d3, comptask_fn_01ca08, comptask_fn_01d807
 * Callees  : 7 -> comptool_fn_01db99, comptask_fn_01df28, compturn_update_slab_subtile_columns_021548, compturn_update_slab_subtile_columns_0216d8, imptool_update_player_dungeon_0401aa, get_2d_box_distance, bflib_system_io_fn_0e66ec
 ******************************************************************************/
undefined4 comptool_update_slab_subtile_columns_01e5de(void)

{
  char ch;
  bool flag;
  short short_val;
  undefined1 uval;
  ushort uval_2;
  ushort uval_3;
  int arg_eax;
  uint uval_4;
  int val;
  int slab_coord;
  undefined4 uval_5;
  int val_2;
  int arg_ecx;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uval_6;
  int extraout_ECX_01;
  undefined4 *arg_edx;
  int arg_ebx;
  uint uval_7;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  undefined1 *word_ptr_4;
  uint *word_ptr_5;
  byte flag_2;
  uint auStack_58 [5];
  ushort local_18;
  undefined1 local_14;
  undefined1 local_10;
  undefined1 *word_ptr_3;
  
  flag_2 = 0;
  word_ptr = &stack0xffffffbc;
  val_2 = *(int *)(arg_eax + 0x24);
  *(int *)((int)arg_edx + 0x46) = *(int *)((int)arg_edx + 0x46) + 1;
  if (0x163 < *(int *)((int)arg_edx + 0x46)) {
    return 0xfffffffe;
  }
  uval_2 = (*(byte *)((int)arg_edx + 0xd) / 3) * 3;
  uval_3 = (*(byte *)((int)arg_edx + 0xf) / 3) * 3;
  auStack_58[4] = 0x1e647;
  uval_4 = bflib_system_io_fn_0e66ec();
  local_18 = (ushort)((int)((uval_4 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9);
  auStack_58[4] = 0x1e67d;
  val = get_2d_box_distance();
  short_val = 0;
  if ((int)arg_edx[6] < val) {
    auStack_58[4] = (uint)*(byte *)(arg_edx + 7);
    auStack_58[3] = 0x1ef3b;
    val = compturn_update_slab_subtile_columns_021548();
    if (val == -1) {
      return 0xfffffffe;
    }
    uval_2 = (short)((val % 0x100) / 3) * 3;
    val = (val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0);
    uval_7 = (int)(CONCAT44(val >> 0x1f,val >> 8) / 3) * 3;
    uval_6 = uval_7 & 0xffff;
    uval_4 = (uint)uval_2;
    word_ptr_5 = auStack_58 + 4;
    if ((((&g_data_001921d4)[(uint)(byte)(&g_slabmap_base)[(uval_4 / 3 + (uval_6 / 3) * 0x55) * 6] * 0x16]
          != '\0') &&
        (word_ptr_5 = auStack_58 + 4,
        (byte)(&g_slabmap_base)[(uval_4 / 3 + (uval_6 / 3) * 0x55) * 6] != 0x34)) &&
       ((val = (uval_6 * 0x100 + uval_4) * 5, (*(byte *)((int)&g_map_subtiles + val) & 0x20) == 0
        || ((word_ptr_5 = auStack_58 + 4, (*(byte *)((int)&g_map_subtiles + val) & 0x20) != 0 &&
            (word_ptr_5 = auStack_58 + 4,
            (uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[uval_6] * 0x55 + (&g_subtile_to_slab_lut)[uval_4]) * 6] &
                  7) == (int)*(char *)(val_2 + 0xe9f))))))) {
      auStack_58[3] = 0x1f026;
      val_2 = imptool_update_player_dungeon_0401aa();
      word_ptr_5 = auStack_58 + 4;
      if ((val_2 < 0) && (word_ptr_5 = auStack_58 + 4, arg_ebx == 0)) {
        auStack_58[3] = 1;
        auStack_58[2] = 1;
        word_ptr_5 = auStack_58;
        auStack_58[1] = uval_7 & 0xffff;
        val_2 = comptask_fn_01df28();
        if (val_2 < 1) {
          return 0xfffffffe;
        }
      }
    }
    *(undefined4 *)((int)word_ptr_5 + -4) = 0x1f07e;
    uval_4 = bflib_system_io_fn_0e66ec();
    *(char *)((int)arg_edx + 0x1d) = (char)((int)((uval_4 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9);
    local_10 = (undefined1)uval_2;
    *(undefined1 *)((int)arg_edx + 0x13) = local_10;
    local_14 = (undefined1)uval_7;
    *(undefined1 *)((int)arg_edx + 0x15) = local_14;
    if ((uval_2 / 3 == *(byte *)((int)arg_edx + 7) / 3) &&
       (extraout_ECX_01 / 3 == *(byte *)((int)arg_edx + 9) / 3)) {
      return 0xffffffff;
    }
    *(undefined1 *)((int)arg_edx + 0xd) = local_10;
    *(undefined1 *)((int)arg_edx + 0xf) = local_14;
    return 0;
  }
  while( true ) {
    if ((((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] * 0x16]
         & 0x29) == 0) && ((byte)(&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] != 0xc)) {
      flag = true;
    }
    else {
      flag = false;
    }
    if (!flag && (&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] != '\r') break;
LAB_0001e73d:
    if ((&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] == '\r' ||
        (&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] == '\f') {
      if (arg_ecx == 2) {
        auStack_58[4] = 0x1e790;
        val = comptool_fn_01db99();
        if (val == 1) goto LAB_0001e799;
      }
      goto LAB_0001e8f3;
    }
LAB_0001e799:
    if (((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[uval_3] * 0x55 + (&g_subtile_to_slab_lut)[uval_2]) * 6] & 7)
         != (int)*(char *)(val_2 + 0xe9f)) &&
       (((((ch = (&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6], ch == '+' ||
           (ch == '*')) || (ch == '-')) || ((ch == ',' || (ch == '/')))) ||
        ((ch == '.' || ((ch == '1' || (ch == '0')))))))) goto LAB_0001e8f3;
    local_10 = (undefined1)uval_2;
    *(undefined1 *)((int)arg_edx + 0x13) = local_10;
    local_14 = (undefined1)uval_3;
    *(undefined1 *)((int)arg_edx + 0x15) = local_14;
    if ((uval_2 / 3 == *(byte *)((int)arg_edx + 7) / 3) &&
       (uval_3 / 3 == *(byte *)((int)arg_edx + 9) / 3)) {
      return 0xffffffff;
    }
    auStack_58[4] = 0x1e8a6;
    uval_4 = bflib_system_io_fn_0e66ec();
    val = (int)((uval_4 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
    local_18 = (ushort)val;
    uval_2 = uval_2 + *(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3;
    uval_3 = uval_3 + (char)(&g_data_0018b67f)[val * 2] * 3;
  }
  auStack_58[4] = 0x1e735;
  val = imptool_update_player_dungeon_0401aa();
  if (-1 < val) goto LAB_0001e73d;
LAB_0001e8f3:
  if ((&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] == '\r' ||
      (&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] == '\f') {
    auStack_58[4] = 0x1e938;
    val = comptool_fn_01db99();
    if (val == 1) goto LAB_0001e93d;
  }
  val = *(int *)((int)arg_edx + 0x1e);
  while( true ) {
    local_10 = (undefined1)uval_2;
    local_14 = (undefined1)uval_3;
    word_ptr_4 = word_ptr;
    if (val == 0) break;
    uval_7 = (uint)uval_3;
    uval_4 = (uint)uval_2;
    if (((((&g_data_001921d4)
           [(uint)(byte)(&g_slabmap_base)[(uval_4 / 3 + (uval_7 / 3) * 0x55) * 6] * 0x16] == '\0') ||
         ((byte)(&g_slabmap_base)[(uval_4 / 3 + (uval_7 / 3) * 0x55) * 6] == 0x34)) ||
        ((slab_coord = (uval_7 * 0x100 + uval_4) * 5, (*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) != 0
         && (((*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) == 0 ||
             ((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[uval_7] * 0x55 + (&g_subtile_to_slab_lut)[uval_4]) * 6]
                    & 7) != (int)*(char *)(val_2 + 0xe9f))))))) &&
       ((((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] * 0x16]
         & 1) == 0 || (arg_ecx == 0)))) break;
    if (arg_ebx == 0) {
      *(undefined4 *)(word_ptr + -4) = 1;
      *(undefined4 *)(word_ptr + -8) = 1;
      *(uint *)(word_ptr + -0xc) = (uint)uval_3;
      word_ptr_4 = word_ptr + -0x10;
      word_ptr_2 = word_ptr + -0x10;
      word_ptr_3 = word_ptr + -0x10;
      *(uint *)(word_ptr + -0x10) = (uint)uval_2;
      *(undefined4 *)(word_ptr + -0x14) = 0x1ead7;
      slab_coord = comptask_fn_01df28();
      if (slab_coord < 1) break;
      word_ptr = word_ptr + -0x10;
      if ((arg_ecx != 0) &&
         (word_ptr = word_ptr_2,
         ((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] * 0x16]
         & 1) != 0)) {
        *(int *)((int)arg_edx + 0x4a) = *(int *)((int)arg_edx + 0x4a) + 1;
        word_ptr = word_ptr_3;
      }
    }
    *(undefined1 *)((int)arg_edx + 0x13) = local_10;
    *(undefined1 *)((int)arg_edx + 0x15) = local_14;
    short_val = short_val + 1;
    if ((uval_2 / 3 == *(byte *)((int)arg_edx + 7) / 3) &&
       (uval_3 / 3 == *(byte *)((int)arg_edx + 9) / 3)) {
      return 0xffffffff;
    }
    *(undefined4 *)(word_ptr + -4) = 0x1e986;
    uval_4 = bflib_system_io_fn_0e66ec();
    slab_coord = (int)((uval_4 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
    local_18 = (ushort)slab_coord;
    val = val + -1;
    uval_2 = uval_2 + *(char *)((int)&g_data_0018b67b + slab_coord * 2 + 3) * 3;
    uval_3 = uval_3 + (char)(&g_data_0018b67f)[slab_coord * 2] * 3;
  }
  if ((uval_2 / 3 == *(byte *)((int)arg_edx + 7) / 3) && (uval_3 / 3 == *(byte *)((int)arg_edx + 9) / 3)
     ) {
    *(undefined1 *)((int)arg_edx + 0x13) = local_10;
    *(undefined1 *)((int)arg_edx + 0x15) = local_14;
    return 0xffffffff;
  }
  if (short_val != 0) {
    *(undefined1 *)((int)arg_edx + 0xd) = local_10;
    *(undefined1 *)((int)arg_edx + 0xf) = local_14;
    *(undefined4 *)(word_ptr_4 + -4) = 0x1ebde;
    uval_5 = get_2d_box_distance();
    arg_edx[6] = uval_5;
    return 0;
  }
  if (val == *(int *)(arg_eax + 0xc)) {
    uval_2 = uval_2 + *(char *)((int)&g_data_0018b67b + (uint)local_18 * 2 + 3) * -3;
    uval_3 = uval_3 + (char)(&g_data_0018b67f)[(uint)local_18 * 2] * -3;
    *(ushort *)(arg_edx + 3) = uval_2 * 0x100;
    *(undefined2 *)(arg_edx + 4) = 0;
    *(ushort *)((int)arg_edx + 0xe) = uval_3 * 0x100;
    *arg_edx = arg_edx[3];
    *(undefined2 *)(arg_edx + (uint)flag_2 * -2 + 1) =
         *(undefined2 *)(arg_edx + (uint)flag_2 * -2 + 4);
  }
  if (((*(short *)((int)arg_edx + 0x12) == 0) && (*(short *)(arg_edx + 5) == 0)) &&
     (*(short *)((int)arg_edx + 0x16) == 0)) {
    *(undefined4 *)((int)arg_edx + 0x12) = *arg_edx;
    *(undefined2 *)((int)arg_edx + (uint)flag_2 * -8 + 0x16) =
         *(undefined2 *)(arg_edx + (uint)flag_2 * -2 + 1);
  }
  *(int *)((int)arg_edx + 0x3a) = *(int *)((int)arg_edx + 0x3a) + 1;
  if (((*(int *)((int)arg_edx + 0x3a) < 0xb) || ((uint)uval_2 != *(uint *)((int)arg_edx + 0x3e))) ||
     ((uint)uval_3 != *(uint *)((int)arg_edx + 0x42))) {
    *(uint *)((int)arg_edx + 0x3e) = (uint)uval_2;
    *(uint *)((int)arg_edx + 0x42) = (uint)uval_3;
    *(undefined4 *)(word_ptr_4 + -4) = 0x1eca2;
    uval_5 = get_2d_box_distance();
    arg_edx[6] = uval_5;
    *(int *)(word_ptr_4 + -4) = (int)*(char *)(val_2 + 0xe9f);
    *(uint *)(word_ptr_4 + -8) = (uint)local_18;
    *(uint *)(word_ptr_4 + -0xc) = (uint)*(byte *)((int)arg_edx + 9);
    *(undefined4 *)(word_ptr_4 + -0x10) = 0x1ecd1;
    uval = compturn_update_slab_subtile_columns_0216d8();
    *(undefined1 *)(arg_edx + 7) = uval;
    *(uint *)(word_ptr_4 + -0x10) = (uint)*(byte *)(arg_edx + 7);
    *(undefined4 *)(word_ptr_4 + -0x14) = 0x1ed1d;
    val = compturn_update_slab_subtile_columns_021548();
    if (val != -1) {
      uval_2 = (short)((val % 0x100) / 3) * 3;
      val = (val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0);
      uval_3 = (short)(CONCAT44(val >> 0x1f,val >> 8) / 3) * 3;
      if ((&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] == '\r' ||
          (&g_slabmap_base)[(uval_2 / 3 + (uval_3 / 3) * 0x55) * 6] == '\f') {
        *(undefined4 *)(word_ptr_4 + -0x14) = 0x1ed95;
        val = comptool_fn_01db99();
        if (val == 1) {
LAB_0001e93d:
          local_10 = (undefined1)uval_2;
          *(undefined1 *)((int)arg_edx + 0x13) = local_10;
          local_14 = (undefined1)uval_3;
          *(undefined1 *)((int)arg_edx + 0x15) = local_14;
          return 0xfffffffb;
        }
      }
      uval_4 = (uint)uval_3;
      *(undefined4 *)(word_ptr_4 + -0x14) = 0x1edc5;
      uval_7 = bflib_system_io_fn_0e66ec();
      *(char *)((int)arg_edx + 0x1d) = (char)((int)((uval_7 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9);
      if ((((&g_data_001921d4)
            [(uint)(byte)(&g_slabmap_base)[(extraout_ECX / 3 + (uval_4 / 3) * 0x55) * 6] * 0x16] !=
            '\0') && ((byte)(&g_slabmap_base)[(extraout_ECX / 3 + (uval_4 / 3) * 0x55) * 6] != 0x34))
         && ((val = (uval_4 * 0x100 + extraout_ECX) * 5,
             (*(byte *)((int)&g_map_subtiles + val) & 0x20) == 0 ||
             (((*(byte *)((int)&g_map_subtiles + val) & 0x20) != 0 &&
              ((uint)((&g_slabmap)
                      [((&g_subtile_to_slab_lut)[uval_4] * 0x55 + (&g_subtile_to_slab_lut)[extraout_ECX]) * 6] & 7) ==
               (int)*(char *)(val_2 + 0xe9f))))))) {
        *(undefined4 *)(word_ptr_4 + -0x14) = 0x1ee94;
        val_2 = imptool_update_player_dungeon_0401aa();
        if ((val_2 < 0) && (arg_ebx == 0)) {
          *(undefined4 *)(word_ptr_4 + -0x14) = 1;
          *(undefined4 *)(word_ptr_4 + -0x18) = 1;
          *(uint *)(word_ptr_4 + -0x1c) = (uint)uval_3;
          *(undefined4 *)(word_ptr_4 + -0x20) = extraout_ECX_00;
          *(undefined4 *)(word_ptr_4 + -0x24) = 0x1eebd;
          val_2 = comptask_fn_01df28();
          if (val_2 < 1) {
            return 0xfffffffe;
          }
        }
      }
      local_10 = (undefined1)uval_2;
      *(undefined1 *)((int)arg_edx + 0x13) = local_10;
      local_14 = (undefined1)uval_3;
      *(undefined1 *)((int)arg_edx + 0x15) = local_14;
      if ((uval_2 / 3 == *(byte *)((int)arg_edx + 7) / 3) &&
         (uval_3 / 3 == *(byte *)((int)arg_edx + 9) / 3)) {
        return 0xffffffff;
      }
      *(undefined1 *)((int)arg_edx + 0xd) = local_10;
      *(undefined1 *)((int)arg_edx + 0xf) = local_14;
      return 0;
    }
  }
  return 0xfffffffe;
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01f0fb (Original VA: 0x1f0fb, Ghidra: FUN_0001f0fb)
 * Prototype: undefined8 comptool_update_creature_and_thing_01f0fb(void);
 * Address  : 0x1f0fb (Size: 44 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> combtool_update_player_dungeon_018a55
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 comptool_update_creature_and_thing_01f0fb(void)

{
  ushort thing_ptr;
  int arg_eax;
  undefined4 arg_edx;
  int val;
  
  val = 0;
  for (thing_ptr = *(ushort *)(arg_eax + 0x2d); g_thing_ptrs < (&g_thing_ptrs)[thing_ptr];
      thing_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[thing_ptr] + 100)] + 0x1f)) {
    val = val + 1;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01f127 (Original VA: 0x1f127, Ghidra: FUN_0001f127)
 * Prototype: undefined8 comptool_update_creature_and_thing_01f127(void);
 * Address  : 0x1f127 (Size: 44 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> combtool_update_player_dungeon_018a55
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 comptool_update_creature_and_thing_01f127(void)

{
  ushort thing_ptr;
  int arg_eax;
  undefined4 arg_edx;
  int val;
  
  val = 0;
  for (thing_ptr = *(ushort *)(arg_eax + 0x2f); g_thing_ptrs < (&g_thing_ptrs)[thing_ptr];
      thing_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[thing_ptr] + 100)] + 0x1f)) {
    val = val + 1;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01f153 (Original VA: 0x1f153, Ghidra: FUN_0001f153)
 * Prototype: uint comptool_update_creature_and_thing_01f153(void);
 * Address  : 0x1f153 (Size: 511 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> comptask_fn_01c73c
 * Callees  : 3 -> creature_update_creature_control_084ff8, room_fn_0cfc48, bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint comptool_update_creature_and_thing_01f153(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  char ch;
  byte flag;
  int arg_eax;
  int cctrl_ptr_2;
  int val;
  int arg_ecx;
  uint extraout_ECX;
  uint cctrl_ptr_3;
  int arg_edx;
  int arg_ebx;
  uint uval;
  uint uval_2;
  int val_2;
  uint uval_3;
  uint local_14;
  
  local_14 = 0x80000000;
  val_2 = *(int *)(arg_eax + 0x24);
  uval = 0;
  uval_2 = 0;
  uval_3 = 0;
  if (arg_edx != 0) {
    uval_2 = (uint)*(byte *)(arg_edx + 1);
    uval_3 = (uint)*(byte *)(arg_edx + 3);
  }
  cctrl_ptr = *(ushort *)(val_2 + 0x2d);
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return uval;
    }
    cctrl_ptr_2 = creature_update_creature_control_084ff8(uval_2,val_2,uval_3);
    if (cctrl_ptr_2 != 0) {
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch != '[') {
        if (*(char *)(thing_ptr + 7) == '\x0e') {
          flag = *(byte *)(thing_ptr + 8); /* thing->active_state */
        }
        else {
          flag = *(byte *)(thing_ptr + 7);
        }
        if (((&g_data_0018c4be)[(uint)flag * 0x29] != '\x01') || ((uval == 0 && (arg_ecx != 0)))) {
          if (arg_ebx == 0) {
            cctrl_ptr_2 = bflib_system_io_fn_0e69fc();
            val = bflib_system_io_fn_0e69fc();
            if ((1 < val + cctrl_ptr_2) &&
               (((cctrl_ptr_3 = local_14, arg_ecx == 0 ||
                 (cctrl_ptr_3 = (uint)(byte)(&g_bss_002ebaf8)
                                      [(uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + /* thing->ccontrol_idx */
                                                      0x23) + (uint)*(byte *)(thing_ptr + 0x1a) * 10],
                 (int)local_14 <= (int)cctrl_ptr_3)) || (uval == 0)))) goto LAB_0001f2a5;
          }
          else {
            cctrl_ptr_2 = room_fn_0cfc48();
            if (cctrl_ptr_2 != 0) {
              cctrl_ptr = *(ushort *)(arg_ebx + 10);
              if (cctrl_ptr < 6) {
                cctrl_ptr_3 = extraout_ECX;
                if (cctrl_ptr == 3) {
                  cctrl_ptr_3 = (uint)(byte)(&g_bss_002e91a1)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
                  cctrl_ptr_2 = cctrl_ptr_3 * *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
LAB_0001f239:
                  cctrl_ptr_3 = (cctrl_ptr_3 + (uint)(cctrl_ptr_2 * 0x23) / 100) * 100;
                  goto LAB_0001f249;
                }
              }
              else if (cctrl_ptr < 7) {
                cctrl_ptr_3 = (uint)(byte)(&g_bss_002ebaf8)
                                    [(uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + /* thing->ccontrol_idx */
                                                    0x23) + (uint)*(byte *)(thing_ptr + 0x1a) * 10];
LAB_0001f249:
                if ((int)cctrl_ptr_3 < (int)local_14) goto LAB_0001f2a7;
              }
              else {
                cctrl_ptr_3 = extraout_ECX;
                if (cctrl_ptr == 8) {
                  cctrl_ptr_3 = (uint)(byte)(&g_bss_002e91a7)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
                  cctrl_ptr_2 = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * cctrl_ptr_3; /* thing->ccontrol_idx */
                  goto LAB_0001f239;
                }
              }
LAB_0001f2a5:
              local_14 = cctrl_ptr_3;
              uval = thing_ptr;
            }
          }
        }
      }
    }
LAB_0001f2a7:
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01f352 (Original VA: 0x1f352, Ghidra: FUN_0001f352)
 * Prototype: undefined8 comptool_update_creature_and_thing_01f352(void);
 * Address  : 0x1f352 (Size: 486 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> compevnt_fn_01a158, compevnt_fn_01a4a1
 * Callees  : 1 -> creature_update_creature_control_084ff8
 ******************************************************************************/
undefined8 comptool_update_creature_and_thing_01f352(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  char ch;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val_2 = 0;
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    val = creature_update_creature_control_084ff8();
    if ((val != 0) && (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) == '\0')) { /* thing->ccontrol_idx */
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch != 'W') {
        if (*(char *)(thing_ptr + 7) == '\x0e') {
          ch = *(char *)(thing_ptr + 8); /* thing->active_state */
        }
        else {
          ch = *(char *)(thing_ptr + 7);
        }
        if ((ch != 'c') &&
           ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) == 0)) { /* thing->ccontrol_idx */
          if (*(char *)(thing_ptr + 7) == '\x0e') {
            ch = *(char *)(thing_ptr + 8); /* thing->active_state */
          }
          else {
            ch = *(char *)(thing_ptr + 7);
          }
          if ((ch != '\x19') && (*(char *)(thing_ptr + 7) != '\x1a')) {
            if (*(char *)(thing_ptr + 7) == '\x0e') {
              ch = *(char *)(thing_ptr + 8); /* thing->active_state */
            }
            else {
              ch = *(char *)(thing_ptr + 7);
            }
            if (ch != 'Y') {
              if (*(char *)(thing_ptr + 7) == '\x0e') {
                ch = *(char *)(thing_ptr + 8); /* thing->active_state */
              }
              else {
                ch = *(char *)(thing_ptr + 7);
              }
              if (ch != '\x15') {
                if (*(char *)(thing_ptr + 7) == '\x0e') {
                  ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                }
                else {
                  ch = *(char *)(thing_ptr + 7);
                }
                if (ch != '\x16') {
                  if (*(char *)(thing_ptr + 7) == '\x0e') {
                    ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                  }
                  else {
                    ch = *(char *)(thing_ptr + 7);
                  }
                  if (ch != '\x14') {
                    if (*(char *)(thing_ptr + 7) == '\x0e') {
                      ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                    }
                    else {
                      ch = *(char *)(thing_ptr + 7);
                    }
                    if (ch != 'P') {
                      if (*(char *)(thing_ptr + 7) == '\x0e') {
                        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                      }
                      else {
                        ch = *(char *)(thing_ptr + 7);
                      }
                      if (ch != '~') {
                        if (*(char *)(thing_ptr + 7) == '\x0e') {
                          ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                        }
                        else {
                          ch = *(char *)(thing_ptr + 7);
                        }
                        if ((ch != '[') &&
                           (0x14 < (*(short *)(thing_ptr + 0x5e) * 100) /
                                   ((int)(short)(&g_bss_002e9114)
                                                [(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] +
                                   (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + /* thing->ccontrol_idx */
                                                        0x23) *
                                         (int)(short)(&g_bss_002e9114)
                                                     [(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] * 0x23)
                                   / 100))) {
                          val_2 = val_2 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01f538 (Original VA: 0x1f538, Ghidra: FUN_0001f538)
 * Prototype: undefined8 comptool_update_creature_and_thing_01f538(void);
 * Address  : 0x1f538 (Size: 540 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> comptask_fn_01c897
 * Callees  : 1 -> creature_update_creature_control_084ff8
 ******************************************************************************/
undefined8 comptool_update_creature_and_thing_01f538(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  char ch;
  int arg_eax;
  int cctrl_ptr_2;
  int cctrl_ptr_3;
  undefined4 arg_edx;
  uint uval;
  int local_20;
  
  local_20 = -0x80000000;
  uval = 0;
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    cctrl_ptr_3 = creature_update_creature_control_084ff8();
    if ((cctrl_ptr_3 != 0) && (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) == '\0')) { /* thing->ccontrol_idx */
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch != 'W') {
        if (*(char *)(thing_ptr + 7) == '\x0e') {
          ch = *(char *)(thing_ptr + 8); /* thing->active_state */
        }
        else {
          ch = *(char *)(thing_ptr + 7);
        }
        if ((ch != 'c') &&
           ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) == 0)) { /* thing->ccontrol_idx */
          if (*(char *)(thing_ptr + 7) == '\x0e') {
            ch = *(char *)(thing_ptr + 8); /* thing->active_state */
          }
          else {
            ch = *(char *)(thing_ptr + 7);
          }
          if ((ch != '\x19') && (*(char *)(thing_ptr + 7) != '\x1a')) {
            if (*(char *)(thing_ptr + 7) == '\x0e') {
              ch = *(char *)(thing_ptr + 8); /* thing->active_state */
            }
            else {
              ch = *(char *)(thing_ptr + 7);
            }
            if (ch != 'Y') {
              if (*(char *)(thing_ptr + 7) == '\x0e') {
                ch = *(char *)(thing_ptr + 8); /* thing->active_state */
              }
              else {
                ch = *(char *)(thing_ptr + 7);
              }
              if (ch != '\x15') {
                if (*(char *)(thing_ptr + 7) == '\x0e') {
                  ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                }
                else {
                  ch = *(char *)(thing_ptr + 7);
                }
                if (ch != '\x16') {
                  if (*(char *)(thing_ptr + 7) == '\x0e') {
                    ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                  }
                  else {
                    ch = *(char *)(thing_ptr + 7);
                  }
                  if (ch != '\x14') {
                    if (*(char *)(thing_ptr + 7) == '\x0e') {
                      ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                    }
                    else {
                      ch = *(char *)(thing_ptr + 7);
                    }
                    if (ch != 'P') {
                      if (*(char *)(thing_ptr + 7) == '\x0e') {
                        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                      }
                      else {
                        ch = *(char *)(thing_ptr + 7);
                      }
                      if (ch != '~') {
                        if (*(char *)(thing_ptr + 7) == '\x0e') {
                          ch = *(char *)(thing_ptr + 8); /* thing->active_state */
                        }
                        else {
                          ch = *(char *)(thing_ptr + 7);
                        }
                        if (ch != '[') {
                          cctrl_ptr_3 = (*(short *)(thing_ptr + 0x5e) * 100) /
                                  ((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73]
                                  + (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] /* thing->ccontrol_idx */
                                                         + 0x23) *
                                          (int)(short)(&g_bss_002e9114)
                                                      [(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] * 0x23)
                                    / 100);
                          cctrl_ptr_2 = (int)((uint)(byte)(&g_bss_002ebaf8)
                                                    [(uint)*(byte *)(thing_ptr + 0x1a) * 10 +
                                                     (uint)*(byte *)((&g_creature_ctrl_ptrs)
                                                                     [*(ushort *)(thing_ptr + 100)] + /* thing->ccontrol_idx */
                                                                    0x23)] * cctrl_ptr_3) / 100;
                          if ((local_20 < cctrl_ptr_2) && (0x14 < cctrl_ptr_3)) {
                            uval = thing_ptr;
                            local_20 = cctrl_ptr_2;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_01f754 (Original VA: 0x1f754, Ghidra: FUN_0001f754)
 * Prototype: uint comptool_update_creature_and_thing_01f754(void);
 * Address  : 0x1f754 (Size: 268 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> compevnt_roll_action_random_018ed3
 * Callees  : 2 -> creature_update_creature_control_084ff8, bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint comptool_update_creature_and_thing_01f754(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  char ch;
  int arg_eax;
  int val;
  byte flag;
  uint uval;
  undefined8 uval_2;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0x7fffffff;
  local_14 = 0x7fffffff;
  uval = 0;
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2f);
  local_1c = 0;
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    if (((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) == '\0') && /* thing->ccontrol_idx */
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
          bflib_system_io_fn_0e69fc();
          uval_2 = bflib_system_io_fn_0e69fc();
          val = (int)uval_2 + (int)((ulonglong)uval_2 >> 0x20);
          if (*(char *)(thing_ptr + 7) == '\x0e') {
            flag = *(byte *)(thing_ptr + 8); /* thing->active_state */
          }
          else {
            flag = *(byte *)(thing_ptr + 7);
          }
          if ((&g_data_0018c4be)[(uint)flag * 0x29] == '\x01') {
            if (val < local_18) {
              local_1c = thing_ptr;
              local_18 = val;
            }
          }
          else if (val < local_14) {
            uval = thing_ptr;
            local_14 = val;
          }
        }
      }
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  if (uval != 0) {
    return uval;
  }
  return local_1c;
}

/******************************************************************************
 * Function : comptool_fn_01f860 (Original VA: 0x1f860, Ghidra: FUN_0001f860)
 * Prototype: undefined4 comptool_fn_01f860(void);
 * Address  : 0x1f860 (Size: 47 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x01f860
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptool_fn_01f860(void)

{
  int arg_eax;
  int loop_i;
  int arg_edx;
  undefined4 uval;
  
  uval = 0;
  for (loop_i = arg_eax + 0x38; (*(byte *)(loop_i + 0x44) & 2) == 0; loop_i = loop_i + 0x48) {
    if (*(int *)(loop_i + 0x2c) == *(int *)(arg_edx + 0x18)) {
      *(undefined4 *)(loop_i + 0x3c) = 0;
      uval = 1;
      *(byte *)(loop_i + 0x44) = *(byte *)(loop_i + 0x44) & 0xf6;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : comptool_update_slab_subtile_columns_01f8d4 (Original VA: 0x1f8d4, Ghidra: FUN_0001f8d4)
 * Prototype: undefined4 comptool_update_slab_subtile_columns_01f8d4(void);
 * Address  : 0x1f8d4 (Size: 437 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 1 -> imptool_update_player_dungeon_0401aa
 ******************************************************************************/
undefined4 comptool_update_slab_subtile_columns_01f8d4(void)

{
  bool flag;
  int arg_eax;
  int val;
  int extraout_ECX;
  int subtile_x;
  uint uval;
  uint arg_ebx;
  
  uval = (uint)(byte)(&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6];
  if (((&g_data_001921cf)[uval * 0x16] == '\x04') || (((&g_data_001921c6)[uval * 0x16] & 2) != 0)) {
    return 0xffffffff;
  }
  if ((uval != 0x34) &&
     ((&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6] != '\r' && uval != 0xc)) {
    if ((((&g_data_001921c6)
          [(uint)(byte)(&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6] * 0x16] & 0x29) == 0)
       && ((byte)(&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6] != 0xc)) {
      flag = true;
    }
    else {
      flag = false;
    }
    if ((&g_slabmap_base)[(arg_eax / 3 + (subtile_x / 3) * 0x55) * 6] != '\r' && !flag) {
      val = imptool_update_player_dungeon_0401aa();
      if (val < 0) {
        if ((&g_data_001921d4)
            [(uint)(byte)(&g_slabmap_base)[(extraout_ECX / 3 + (subtile_x / 3) * 0x55) * 6] * 0x16] ==
            '\0') {
          return 1;
        }
        if ((byte)(&g_slabmap_base)[(extraout_ECX / 3 + (subtile_x / 3) * 0x55) * 6] == 0x34) {
          return 1;
        }
        val = (extraout_ECX + subtile_x * 0x100) * 5;
        if ((*(byte *)((int)&g_map_subtiles + val) & 0x20) != 0) {
          if ((*(byte *)((int)&g_map_subtiles + val) & 0x20) == 0) {
            return 1;
          }
          if (((&g_slabmap)[((&g_subtile_to_slab_lut)[subtile_x] * 0x55 + (&g_subtile_to_slab_lut)[extraout_ECX]) * 6]
              & 7) != arg_ebx) {
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : comptool_update_slab_subtile_columns_01fa89 (Original VA: 0x1fa89, Ghidra: FUN_0001fa89)
 * Prototype: undefined4 comptool_update_slab_subtile_columns_01fa89(void);
 * Address  : 0x1fa89 (Size: 420 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 1 -> imptool_update_player_dungeon_0401aa
 ******************************************************************************/
undefined4 comptool_update_slab_subtile_columns_01fa89(void)

{
  bool flag;
  int arg_eax;
  int val;
  int extraout_ECX;
  int arg_edx;
  uint uval;
  uint arg_ebx;
  
  uval = (uint)(byte)(&g_slabmap_base)[(arg_eax / 3 + (arg_edx / 3) * 0x55) * 6];
  if (uval == 0x34) {
    return 1;
  }
  val = uval * 0x16;
  if (((&g_data_001921cf)[val] != '\x04') && (((&g_data_001921c6)[val] & 2) == 0)) {
    if ((((&g_data_001921c6)[val] & 0x29) == 0) && (uval != 0xc)) {
      flag = true;
    }
    else {
      flag = false;
    }
    if ((((&g_slabmap_base)[(arg_eax / 3 + (arg_edx / 3) * 0x55) * 6] != '\r' && !flag) &&
        (val = imptool_update_player_dungeon_0401aa(), val < 0)) &&
       (((&g_data_001921c6)
         [(uint)(byte)(&g_slabmap_base)[(arg_eax / 3 + (extraout_ECX / 3) * 0x55) * 6] * 0x16] & 1) ==
        0)) {
      if ((&g_slabmap_base)[(arg_eax / 3 + (extraout_ECX / 3) * 0x55) * 6] == '\r' ||
          (byte)(&g_slabmap_base)[(arg_eax / 3 + (extraout_ECX / 3) * 0x55) * 6] == 0xc) {
        return 1;
      }
      if ((&g_data_001921d4)
          [(uint)(byte)(&g_slabmap_base)[(arg_eax / 3 + (extraout_ECX / 3) * 0x55) * 6] * 0x16] == '\0'
         ) {
        return 1;
      }
      if ((byte)(&g_slabmap_base)[(arg_eax / 3 + (extraout_ECX / 3) * 0x55) * 6] == 0x34) {
        return 1;
      }
      val = (extraout_ECX * 0x100 + arg_eax) * 5;
      if ((*(byte *)((int)&g_map_subtiles + val) & 0x20) != 0) {
        if ((*(byte *)((int)&g_map_subtiles + val) & 0x20) == 0) {
          return 1;
        }
        if (((&g_slabmap)[((&g_subtile_to_slab_lut)[extraout_ECX] * 0x55 + (&g_subtile_to_slab_lut)[arg_eax]) * 6] &
            7) != arg_ebx) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : comptool_update_slab_subtile_columns_01fc2d (Original VA: 0x1fc2d, Ghidra: FUN_0001fc2d)
 * Prototype: undefined4 comptool_update_slab_subtile_columns_01fc2d(ushort param_1);
 * Address  : 0x1fc2d (Size: 855 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> comptask_roll_action_random_01d10e
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 comptool_update_slab_subtile_columns_01fc2d(ushort param_1)

{
  int slab_coord;
  int arg_eax;
  char arg_cl;
  uint uval;
  int arg_edx;
  byte arg_bl;
  uint uval_2;
  uint uval_3;
  int local_20;
  uint local_1c;
  
  local_20 = 0;
  uval_2 = (uint)*(byte *)(arg_eax + 3);
  uval = (uint)*(byte *)(arg_eax + 1);
  for (; (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] * 0x16]
          & 2) != 0 && (local_20 < (int)(uint)param_1)); local_20 = local_20 + 1) {
    uval = uval + *(char *)((int)&g_data_0018b67b + (uint)arg_bl * 2 + 3) * 3;
    uval_2 = uval_2 + (char)(&g_data_0018b67f)[(uint)arg_bl * 2] * 3;
    if (0xfe < uval) {
      return 0;
    }
    if (0xfe < uval_2) {
      return 0;
    }
  }
  *(char *)(arg_eax + 1) = (char)uval;
  local_1c = 0;
  *(char *)(arg_eax + 3) = (char)uval_2;
  for (; (((((&g_data_001921c6)
             [(uint)(byte)(&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] * 0x16] & 0x10) == 0
           && ((byte)(&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] != 0xc)) ||
          (((&g_data_001921c6)
            [(uint)(byte)(&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] * 0x16] & 2) != 0))
         && ((int)local_1c < (int)(uint)param_1)); local_1c = local_1c + 1) {
    uval = uval + *(char *)((int)&g_data_0018b67b + (uint)arg_bl * 2 + 3) * 3;
    uval_2 = uval_2 + (char)(&g_data_0018b67f)[(uint)arg_bl * 2] * 3;
    if ((0xfe < uval) || (0xfe < uval_2)) {
      return 0;
    }
  }
  if (param_1 != local_1c) {
    *(char *)(arg_eax + 1) = (char)uval;
    *(char *)(arg_eax + 3) = (char)uval_2;
    uval_3 = 0;
    while (((int)uval_3 < (int)(uint)param_1 &&
           ((((((&g_data_001921d4)
                [(uint)(byte)(&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] * 0x16] != '\0'
               && ((byte)(&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] != 0x34)) &&
              ((slab_coord = (uval_2 * 0x100 + uval) * 5,
               (*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) == 0 ||
               (((*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) != 0 &&
                ((uint)((&g_slabmap)
                        [((&g_subtile_to_slab_lut)[uval] + (&g_subtile_to_slab_lut)[uval_2] * 0x55) * 6] & 7) ==
                 (int)arg_cl)))))) && ((&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] != '\r')
             ) || ((((&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] == '\v' &&
                    ((int)arg_cl ==
                     (uint)((&g_slabmap)
                            [((&g_subtile_to_slab_lut)[uval] + (&g_subtile_to_slab_lut)[uval_2] * 0x55) * 6] & 7))) ||
                   ((&g_slabmap_base)[(uval / 3 + (uval_2 / 3) * 0x55) * 6] == '\n'))))))) {
      uval = uval + *(char *)((int)&g_data_0018b67b + (uint)arg_bl * 2 + 3) * 3;
      uval_2 = uval_2 + (char)(&g_data_0018b67f)[(uint)arg_bl * 2] * 3;
      if (0xfe < uval) {
        return 0;
      }
      if (0xfe < uval_2) {
        return 0;
      }
      uval_3 = uval_3 + 1;
    }
    if (uval_3 != param_1) {
      return 0;
    }
  }
  *(char *)(arg_edx + 1) = (char)uval;
  *(char *)(arg_edx + 3) = (char)uval_2;
  return 1;
}

/******************************************************************************
 * Function : comptool_fn_01ff84 (Original VA: 0x1ff84, Ghidra: FUN_0001ff84)
 * Prototype: undefined4 comptool_fn_01ff84(void);
 * Address  : 0x1ff84 (Size: 168 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x01ff84
 * Callers  : 2 -> comptask_update_player_dungeon_01b561, comptask_update_player_dungeon_01b629
 * Callees  : 3 -> comptask_fn_01ba46, comptask_fn_01d2ff, comptool_process_dungeon_room_01de8c
 ******************************************************************************/
undefined4 comptool_fn_01ff84(void)

{
  int arg_eax;
  int val;
  byte *byte_ptr;
  undefined2 extraout_CX;
  int arg_edx;
  undefined4 *arg_ebx;
  byte flag;
  int local_10;
  
  flag = 0;
  val = comptool_process_dungeon_room_01de8c();
  if (val != 0) {
    byte_ptr = (byte *)comptask_fn_01ba46();
    if (byte_ptr != (byte *)0x0) {
      byte_ptr[2] = 7;
      *(ushort *)(byte_ptr + 0x70) = (ushort)*(byte *)(local_10 + 8) << 8;
      *(ushort *)(byte_ptr + 0x72) = (ushort)*(byte *)(local_10 + 9) << 8;
      byte_ptr[0x74] = 0;
      byte_ptr[0x75] = 1;
      *(undefined4 *)(byte_ptr + 0x76) = *arg_ebx;
      *(undefined2 *)(byte_ptr + (uint)flag * -8 + 0x7a) =
           *(undefined2 *)(arg_ebx + (uint)flag * -2 + 1);
      byte_ptr[0x5c] = 0;
      byte_ptr[0x5d] = 0;
      byte_ptr[0x5e] = 0;
      byte_ptr[0x5f] = 0;
      *(undefined2 *)(byte_ptr + 0x86) = extraout_CX;
      *(short *)(byte_ptr + 0x8c) = (short)((arg_edx - (arg_eax + 0x38)) / 0x48);
      *byte_ptr = *byte_ptr | 4;
      comptask_fn_01d2ff(*(undefined4 *)(byte_ptr + 0x70),*(undefined4 *)(byte_ptr + 0x74),
                   *(undefined4 *)(byte_ptr + 0x76),*(undefined4 *)(byte_ptr + 0x7a));
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_02002c (Original VA: 0x2002c, Ghidra: FUN_0002002c)
 * Prototype: int comptool_update_creature_and_thing_02002c(void);
 * Address  : 0x2002c (Size: 99 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> compevnt_roll_action_random_018ffe, comptask_update_player_dungeon_01b561, comptask_update_player_dungeon_01b629
 * Callees  : 1 -> creature_fn_082774
 ******************************************************************************/
int comptool_update_creature_and_thing_02002c(void)

{
  ushort cctrl_ptr;
  char ch;
  int arg_eax;
  uint thing_ptr;
  uint extraout_ECX;
  int arg_edx;
  int val;
  
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
  val = 0;
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return val;
    }
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) == '\0') { /* thing->ccontrol_idx */
      if (arg_edx != 0) {
        ch = creature_fn_082774();
        thing_ptr = extraout_ECX;
        if (ch == '\0') goto LAB_0002003d;
      }
      val = val + 1;
    }
LAB_0002003d:
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : comptool_fn_02008f (Original VA: 0x2008f, Ghidra: FUN_0002008f)
 * Prototype: undefined8 comptool_fn_02008f(void);
 * Address  : 0x2008f (Size: 81 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module comptool.cpp procedure @ 0x02008f
 * Callers  : 2 -> compevnt_fn_01ab14, compevnt_process_dungeon_room_01ab74
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 comptool_fn_02008f(void)

{
  char ch;
  ushort uval;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  int val_2;
  
  uval = *(ushort *)(arg_eax + 0x14c6);
  val_2 = 0;
  while( true ) {
    val = (uint)uval * 0x94;
    if (&g_bss_002c9203 + val < &g_bss_002c9204) break;
    if ((((&g_bss_002c9203)[val] & 1) != 0) &&
       ((((ch = (&g_bss_002c9205)[val], ch == '\x01' || (ch == '\x02')) ||
         (ch == '\x03')) || (ch == '\x04')))) {
      val_2 = val_2 + 1;
    }
    uval = *(ushort *)(&g_bss_002c9295 + val);
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : comptool_update_creature_and_thing_0200e0 (Original VA: 0x200e0, Ghidra: FUN_000200e0)
 * Prototype: uint comptool_update_creature_and_thing_0200e0(void);
 * Address  : 0x200e0 (Size: 269 bytes)
 * Module   : comptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> compevnt_fn_01a60d, compevnt_update_creature_and_thing_01a68b
 * Callees  : 1 -> spell_update_creature_control_0720ce
 ******************************************************************************/
uint comptool_update_creature_and_thing_0200e0(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  uint cctrl_ptr_2;
  uint local_18;
  
  val_2 = *(int *)(arg_eax + 0x24);
  cctrl_ptr_2 = 0x80000000;
  cctrl_ptr = *(ushort *)(val_2 + 0x2d);
  local_18 = 0;
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    if ((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) != '\0') && /* thing->ccontrol_idx */
       (*(char *)(thing_ptr + 7) != 'C')) {
      if (arg_edx != 0) {
        val = spell_update_creature_control_0720ce();
        arg_edx = extraout_ECX;
        if (val != 0) goto LAB_000200ff;
      }
      if ((int)cctrl_ptr_2 <
          (int)(uint)(byte)(&g_bss_002ebaf8)
                           [(uint)*(byte *)(thing_ptr + 0x1a) * 10 +
                            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23)]) { /* thing->ccontrol_idx */
        cctrl_ptr_2 = (uint)(byte)(&g_bss_002ebaf8)
                            [(uint)*(byte *)(thing_ptr + 0x1a) * 10 +
                             (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23)]; /* thing->ccontrol_idx */
        local_18 = thing_ptr;
      }
    }
LAB_000200ff:
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  cctrl_ptr = *(ushort *)(val_2 + 0x2f);
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return local_18;
    }
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) != '\0') { /* thing->ccontrol_idx */
      if (arg_edx != 0) {
        val_2 = spell_update_creature_control_0720ce();
        arg_edx = extraout_ECX_00;
        if (val_2 != 0) goto LAB_0002017c;
      }
      if ((int)cctrl_ptr_2 <
          (int)(uint)(byte)(&g_bss_002ebaf8)
                           [(uint)*(byte *)(thing_ptr + 0x1a) * 10 +
                            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23)]) { /* thing->ccontrol_idx */
        cctrl_ptr_2 = (uint)(byte)(&g_bss_002ebaf8)
                            [(uint)*(byte *)(thing_ptr + 0x1a) * 10 +
                             (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23)]; /* thing->ccontrol_idx */
        local_18 = thing_ptr;
      }
    }
LAB_0002017c:
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

