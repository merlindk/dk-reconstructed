/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: person.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 45
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : person_ERROR_063412 (Original VA: 0x63412, Ghidra: FUN_00063412)
 * Prototype: undefined4 person_ERROR_063412(void);
 * Address  : 0x63412 (Size: 605 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Purpose  : Log prefix 'ERROR : Incorrect command : %d'
 * Callers  : 1 -> panmap_fn_0633c4
 * Callees  : 7 -> dk_sprintf, LbMemoryCopy, bflib_system_io_fn_0f0964, bflib_system_io_fn_0f09e5, bflib_system_io_fn_0f0ec0, bflib_system_io_fn_0f4409, bflib_system_io_fn_0f442b
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 person_ERROR_063412(void)

{
  ushort arg_ax;
  undefined1 *word_ptr;
  int val;
  int val_2;
  uint uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int val_3;
  char *str_ptr;
  undefined1 local_10c [144];
  undefined1 local_7c;
  undefined1 local_3c;
  char local_1c;
  byte local_18;
  
  g_bss_00334019 = 0;
  LbMemoryCopy();
  local_18 = 1;
  dk_sprintf(&g_bss_00333f77,local_10c);
  word_ptr = (undefined1 *)bflib_system_io_fn_0f442b();
  *word_ptr = 0;
  local_1c = '\0';
  bflib_system_io_fn_0f0ec0();
  g_bss_002e6ff2 = 0;
  g_packet_checksum_verify_enabled = 1;
  g_bss_002e6ff3 = 0;
  g_bss_0019d0c2 = 0;
  g_bss_002ed43e = 0x14;
  g_bss_002ed44e = 0xff;
  val_3 = 1;
  g_bss_0019d0ba = g_bss_0019d0ba & 0xfe;
  g_bss_0019d0bd = g_bss_0019d0bd & 0xbe;
  g_bss_002e6fee = 0xffffffff;
  g_bss_0019d0bd = g_bss_0019d0bd | 0x40;
  val_2 = extraout_ECX;
  do {
    if ((int)(uint)arg_ax <= val_3) {
LAB_00063628:
      uval = (uint)local_1c;
      if (uval != 0xffffffff) {
        g_bss_0019d0c2 = 1;
        uval = 1;
        if ((g_game_operation_flags & 2) == 0) {
          uval = (uint)local_18;
        }
        g_my_player_word._3_1_ = 0;
        g_bss_002e78ea = (undefined1)uval;
      }
      return CONCAT22((short)(uval >> 0x10),(short)local_1c);
    }
    str_ptr = *(char **)(val_2 + val_3 * 4);
    if ((*str_ptr != '-') && (*str_ptr != '/')) {
      str_ptr = s_ERROR___Incorrect_command____d_0016669a;
LAB_0006361c:
      local_1c = -1;
      bflib_system_io_fn_0f4409(str_ptr,val_3);
      goto LAB_00063628;
    }
    LbMemoryCopy();
    local_3c = 0;
    if (val_3 + 1 < (int)(uint)arg_ax) {
      LbMemoryCopy();
    }
    local_7c = 0;
    if (val_3 + 2 < (int)(uint)arg_ax) {
      LbMemoryCopy();
    }
    val_2 = bflib_system_io_fn_0f09e5();
    if (val_2 == 0) {
      g_bss_002ed3ee = 1;
      val_2 = extraout_ECX_07;
    }
    else {
      val_2 = bflib_system_io_fn_0f09e5();
      if (val_2 == 0) {
        g_bss_0019d0bd = g_bss_0019d0bd | 0x10;
        val_2 = extraout_ECX_00;
      }
      else {
        val_2 = bflib_system_io_fn_0f09e5();
        if (val_2 == 0) {
          g_bss_0019d0bb = 1;
          val_2 = extraout_ECX_01;
        }
        else {
          val = bflib_system_io_fn_0f09e5();
          val_2 = extraout_ECX_02;
          if ((val == 0) || (val = bflib_system_io_fn_0f09e5(), val_2 = extraout_ECX_03, val == 0)) {
            g_bss_00334019 = 1;
          }
          else {
            val_2 = bflib_system_io_fn_0f09e5();
            if (val_2 == 0) {
              g_bss_002ed43e = bflib_system_io_fn_0f0964();
              val_3 = val_3 + 1;
              val_2 = extraout_ECX_04;
            }
            else {
              val_2 = bflib_system_io_fn_0f09e5();
              if (val_2 == 0) {
                g_bss_0019d0ba = g_bss_0019d0ba | 0x40;
                val_2 = extraout_ECX_05;
              }
              else {
                val_2 = bflib_system_io_fn_0f09e5();
                if (val_2 != 0) {
                  str_ptr = s_ERROR___Incorrect_command____d_0016667a;
                  goto LAB_0006361c;
                }
                g_bss_0019d0ba = g_bss_0019d0ba | 0x20;
                val_2 = extraout_ECX_06;
              }
            }
          }
        }
      }
    }
    val_3 = val_3 + 1;
  } while( true );
}

/******************************************************************************
 * Function : person_thing_already_peter_list_063670 (Original VA: 0x63670, Ghidra: FUN_00063670)
 * Prototype: void person_thing_already_peter_list_063670(void);
 * Address  : 0x63670 (Size: 493 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp lines 99
 * Purpose  : String 'Thing already in Peter list'
 * Callers  : 3 -> inits_told_you_so_create_043bb3, process_players_dungeon_command_packet, person_update_creature_control_063a25
 * Callees  : 2 -> LbErrorLog, LbWarnLog
 ******************************************************************************/
void person_thing_already_peter_list_063670(void)

{
  undefined2 dungeon_off;
  int thing_ptr;
  byte *thing;
  uint uval;
  
  thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((char)(*thing << 4) < '\0') {
    LbErrorLog(); /* LbErrorLog("person.cpp", line 99, "Thing already in Peter list") */
    LbWarnLog(); /* LbWarnLog("person.cpp", line 99, "Thing already in Peter list") */
    return;
  }
  uval = (uint)(char)thing[6];
  if (uval == g_neutral_player_number) {
    if (g_bss_002ebaf2 == 0) {
      *(undefined2 *)(thing_ptr + 0x1f) = 0; /* thing->class_id */
      *(undefined2 *)(thing_ptr + 0x1d) = 0;
    }
    else {
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[g_bss_002ebaf2] + 100)] + 0x1d) =
           *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
      *(undefined2 *)(thing_ptr + 0x1d) = 0;
      *(ushort *)(thing_ptr + 0x1f) = g_bss_002ebaf2; /* thing->class_id */
    }
    g_bss_002ebaf2 = *(ushort *)(thing + 0x1b); /* thing->index_or_angle */
  }
  else {
    if ((thing[0x1a] == 0x17) && (uval != g_bss_002eb542)) {
      if ((&g_bss_002e05b8)[uval * 0xa84] == 0) {
        *(undefined2 *)(thing_ptr + 0x1f) = 0; /* thing->class_id */
        *(undefined2 *)(thing_ptr + 0x1d) = 0;
      }
      else {
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)
          [*(ushort *)((&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[uval * 0xa84]] + 100)] + 0x1d) =
             *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
        dungeon_off = (&g_bss_002e05b8)[(char)thing[6] * 0xa84];
        *(undefined2 *)(thing_ptr + 0x1d) = 0;
        *(undefined2 *)(thing_ptr + 0x1f) = dungeon_off; /* thing->class_id */
      }
      (&g_bss_002e05b8)[(char)thing[6] * 0xa84] = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
      (&g_bss_002e0ea1)[(char)thing[6] * 0x1508] = (&g_bss_002e0ea1)[(char)thing[6] * 0x1508] + '\x01'
      ;
    }
    else {
      if ((&g_bss_002e05b6)[(char)thing[6] * 0xa84] == 0) {
        *(undefined2 *)(thing_ptr + 0x1f) = 0; /* thing->class_id */
        *(undefined2 *)(thing_ptr + 0x1d) = 0;
      }
      else {
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)
          [*(ushort *)((&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[(char)thing[6] * 0xa84]] + 100)] +
         0x1d) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
        dungeon_off = (&g_bss_002e05b6)[(char)thing[6] * 0xa84];
        *(undefined2 *)(thing_ptr + 0x1d) = 0;
        *(undefined2 *)(thing_ptr + 0x1f) = dungeon_off; /* thing->class_id */
      }
      (&g_bss_002e05b6)[(char)thing[6] * 0xa84] = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
      if ((*(byte *)(thing_ptr + 2) & 2) != 0) goto LAB_000637e2;
      (&g_bss_002e0ea2)[(char)thing[6] * 0x1508] = (&g_bss_002e0ea2)[(char)thing[6] * 0x1508] + '\x01'
      ;
    }
    (&g_bss_002e0ea3)[(uint)thing[0x1a] + (char)thing[6] * 0x1508] =
         (&g_bss_002e0ea3)[(uint)thing[0x1a] + (char)thing[6] * 0x1508] + '\x01';
  }
LAB_000637e2:
  *thing = *thing | 8;
  return;
}

/******************************************************************************
 * Function : person_peter_list_06385d (Original VA: 0x6385d, Ghidra: FUN_0006385d)
 * Prototype: void person_peter_list_06385d(void);
 * Address  : 0x6385d (Size: 456 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp lines 184
 * Purpose  : String 'Not in Peter list'
 * Callers  : 3 -> process_players_dungeon_command_packet, person_update_creature_control_063a25, structs_update_creature_control_072af4
 * Callees  : 2 -> LbErrorLog, LbWarnLog
 ******************************************************************************/
void person_peter_list_06385d(void)

{
  int thing_ptr;
  byte *thing;
  uint uval;
  
  thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*thing & 8) != 0) {
    uval = (uint)(char)thing[6];
    if (uval == g_neutral_player_number) {
      if (*(ushort *)(thing_ptr + 0x1d) == 0) {
        g_bss_002ebaf2 = *(undefined2 *)(thing_ptr + 0x1f); /* thing->class_id */
      }
      else {
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x1d)] + 100)] + 0x1f) =
             *(undefined2 *)(thing_ptr + 0x1f); /* thing->class_id */
      }
      if (*(short *)(thing_ptr + 0x1f) != 0) { /* thing->class_id */
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x1f)] + 100)] + 0x1d) = /* thing->class_id */
             *(undefined2 *)(thing_ptr + 0x1d);
      }
    }
    else if ((thing[0x1a] == 0x17) && (uval != g_bss_002eb542)) {
      if (*(ushort *)(thing_ptr + 0x1d) == 0) {
        (&g_bss_002e05b8)[uval * 0xa84] = *(undefined2 *)(thing_ptr + 0x1f); /* thing->class_id */
      }
      else {
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x1d)] + 100)] + 0x1f) =
             *(undefined2 *)(thing_ptr + 0x1f); /* thing->class_id */
      }
      if (*(short *)(thing_ptr + 0x1f) != 0) { /* thing->class_id */
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x1f)] + 100)] + 0x1d) = /* thing->class_id */
             *(undefined2 *)(thing_ptr + 0x1d);
      }
      (&g_bss_002e0ea1)[(char)thing[6] * 0x1508] = (&g_bss_002e0ea1)[(char)thing[6] * 0x1508] + -1;
    }
    else {
      if (*(ushort *)(thing_ptr + 0x1d) == 0) {
        (&g_bss_002e05b6)[(char)thing[6] * 0xa84] = *(undefined2 *)(thing_ptr + 0x1f); /* thing->class_id */
      }
      else {
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x1d)] + 100)] + 0x1f) =
             *(undefined2 *)(thing_ptr + 0x1f); /* thing->class_id */
      }
      if (*(short *)(thing_ptr + 0x1f) != 0) { /* thing->class_id */
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x1f)] + 100)] + 0x1d) = /* thing->class_id */
             *(undefined2 *)(thing_ptr + 0x1d);
      }
      if ((*(byte *)(thing_ptr + 2) & 2) == 0) {
        (&g_bss_002e0ea2)[(char)thing[6] * 0x1508] = (&g_bss_002e0ea2)[(char)thing[6] * 0x1508] + -1;
        (&g_bss_002e0ea3)[(uint)thing[0x1a] + (char)thing[6] * 0x1508] =
             (&g_bss_002e0ea3)[(uint)thing[0x1a] + (char)thing[6] * 0x1508] + -1;
      }
    }
    *(undefined2 *)(thing_ptr + 0x1d) = 0;
    *(undefined2 *)(thing_ptr + 0x1f) = *(undefined2 *)(thing_ptr + 0x1d); /* thing->class_id */
    *thing = *thing & 0xf7;
    return;
  }
  LbErrorLog(); /* LbErrorLog("person.cpp", line 184, "Not in Peter list") */
  LbWarnLog(); /* LbWarnLog("person.cpp", line 184, "Not in Peter list") */
  return;
}

/******************************************************************************
 * Function : person_update_creature_control_063a25 (Original VA: 0x63a25, Ghidra: FUN_00063a25)
 * Prototype: void person_update_creature_control_063a25(void);
 * Address  : 0x63a25 (Size: 304 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 6 -> angtool_process_thing_entity_011be9, eyelens_update_player_dungeon_026e5e, scavenged_room_disappeared_valid_067e04, specials_update_creature_and_thing_0711f3, torture_update_creature_control_074853, creature_update_creature_and_thing_082cac
 * Callees  : 8 -> anger_update_creature_control_010575, evil_fn_02778e, group_update_creature_and_thing_039c3e, lair_attempt_remove_creature_lair_04d3d4, person_thing_already_peter_list_063670, person_peter_list_06385d, person_fn_063b6d, light_attempt_delete_light_0acce4
 ******************************************************************************/
void person_update_creature_control_063a25(void)

{
  byte *thing;
  int cctrl_ptr;
  byte extraout_CL;
  byte extraout_CL_00;
  byte extraout_CL_01;
  byte extraout_CL_02;
  byte extraout_CL_03;
  byte arg_dl;
  int extraout_EDX;
  int extraout_EDX_00;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(thing + 0x62) != 0) {
    light_attempt_delete_light_0acce4();
    cctrl_ptr = extraout_EDX;
    arg_dl = extraout_CL;
  }
  if ((*(ushort *)(cctrl_ptr + 0x7a) & 0xfff) != 0) {
    group_update_creature_and_thing_039c3e();
    cctrl_ptr = extraout_EDX_00;
    arg_dl = extraout_CL_00;
  }
  if ((*(short *)(cctrl_ptr + 0x68) != 0) && (*(short *)(cctrl_ptr + 0x6a) != 0)) {
    lair_attempt_remove_creature_lair_04d3d4();
    arg_dl = extraout_CL_01;
  }
  if ((*thing & 8) != 0) {
    person_peter_list_06385d();
    arg_dl = extraout_CL_02;
  }
  if ((int)(char)thing[6] != (uint)g_neutral_player_number) {
    *(uint *)(&g_bss_002e1431 + (char)thing[6] * 0x1508) =
         *(int *)(&g_bss_002e1431 + (char)thing[6] * 0x1508) -
         (uint)(byte)(&g_bss_002ebaf8)
                     [(uint)thing[0x1a] * 10 +
                      (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23)]; /* thing->ccontrol_idx */
    cctrl_ptr = anger_update_creature_control_010575();
    if (cctrl_ptr != 0) {
      (&g_bss_002e1058)[(char)thing[6] * 0xa84] = (&g_bss_002e1058)[(char)thing[6] * 0xa84] + -1;
    }
    evil_fn_02778e();
    arg_dl = extraout_CL_03;
  }
  thing[6] = arg_dl;
  person_thing_already_peter_list_063670();
  person_fn_063b6d();
  if ((int)(char)thing[6] != (uint)g_neutral_player_number) {
    *(uint *)(&g_bss_002e1431 + (char)thing[6] * 0x1508) =
         *(int *)(&g_bss_002e1431 + (char)thing[6] * 0x1508) +
         (uint)(byte)(&g_bss_002ebaf8)
                     [(uint)thing[0x1a] * 10 +
                      (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23)]; /* thing->ccontrol_idx */
    cctrl_ptr = anger_update_creature_control_010575();
    if (cctrl_ptr != 0) {
      (&g_bss_002e1058)[(char)thing[6] * 0xa84] = (&g_bss_002e1058)[(char)thing[6] * 0xa84] + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : person_fn_063b55 (Original VA: 0x63b55, Ghidra: FUN_00063b55)
 * Prototype: undefined8 person_fn_063b55(void);
 * Address  : 0x63b55 (Size: 24 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x063b55
 * Callers  : 0 -> 
 * Callees  : 1 -> move_process_slabmap_tile_0b5264
 ******************************************************************************/
undefined8 person_fn_063b55(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  undefined8 uval_2;
  
  uval_2 = move_process_slabmap_tile_0b5264();
  uval = (undefined4)uval_2;
  if ((short)uval_2 != 0) {
    uval = 1;
    *(undefined1 *)((int)((ulonglong)uval_2 >> 0x20) + 8) = 0x30;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_fn_063b6d (Original VA: 0x63b6d, Ghidra: FUN_00063b6d)
 * Prototype: undefined8 person_fn_063b6d(void);
 * Address  : 0x63b6d (Size: 151 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x063b6d
 * Callers  : 128 -> anger_hurrah_mental_instability_creature_01073a, angtool_update_creature_control_010ed3, angtool_process_dungeon_room_010f6c, angtool_process_dungeon_room_010fdf, angtool_fn_01107a, angtool_update_slab_subtile_columns_0110ed, angtool_update_creature_and_thing_0114f6, barracks_update_creature_control_013747 ...
 * Callees  : 1 -> person_initialise_state_but_thing_064b0c
 ******************************************************************************/
undefined8 person_fn_063b6d(void)

{
  int arg_eax;
  undefined2 extraout_var;
  undefined4 arg_edx;
  
  person_initialise_state_but_thing_064b0c();
  return CONCAT44(arg_edx,CONCAT22(extraout_var,(ushort)*(byte *)(arg_eax + 7)));
}

/******************************************************************************
 * Function : person_roll_action_random_063c04 (Original VA: 0x63c04, Ghidra: FUN_00063c04)
 * Prototype: undefined4 person_roll_action_random_063c04(void);
 * Address  : 0x63c04 (Size: 179 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 2 -> person_update_creature_control_063cb7, person_update_creature_control_063d17
 * Callees  : 1 -> move_update_creature_control_0b3b58
 ******************************************************************************/
undefined4 person_roll_action_random_063c04(void)

{
  short short_val;
  short short_val_2;
  
  short_val_2 = 0;
  while( true ) {
    if (4 < short_val_2) {
      return 0;
    }
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = (g_action_random_seed >> 0xd | g_action_random_seed * 0x80000) * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    short_val = move_update_creature_control_0b3b58();
    if (short_val != 0) break;
    short_val_2 = short_val_2 + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : person_update_creature_control_063cb7 (Original VA: 0x63cb7, Ghidra: FUN_00063cb7)
 * Prototype: longlong person_update_creature_control_063cb7(void);
 * Address  : 0x63cb7 (Size: 96 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_063b6d, person_roll_action_random_063c04
 ******************************************************************************/
longlong person_update_creature_control_063cb7(void)

{
  int cctrl_ptr;
  short short_val;
  int thing;
  int extraout_ECX;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  short_val = person_roll_action_random_063c04();
  if (short_val != 0) {
    *(undefined2 *)(cctrl_ptr + 0x89) = 10;
    *(ushort *)(cctrl_ptr + 0x8b) = (ushort)*(byte *)(cctrl_ptr + 0x2e);
    *(ushort *)(cctrl_ptr + 0x8d) = (ushort)*(byte *)(cctrl_ptr + 0x30);
    *(undefined1 *)(extraout_ECX + 8) = 0x36;
    return CONCAT44(arg_edx,1);
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : person_update_creature_control_063d17 (Original VA: 0x63d17, Ghidra: FUN_00063d17)
 * Prototype: longlong person_update_creature_control_063d17(void);
 * Address  : 0x63d17 (Size: 85 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_063b6d, person_roll_action_random_063c04
 ******************************************************************************/
longlong person_update_creature_control_063d17(void)

{
  short *cctrl_ptr;
  short short_val;
  int thing;
  int extraout_ECX;
  uint arg_edx;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x89) != 0) { /* thing->ccontrol_idx */
    cctrl_ptr = (short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x89); /* thing->ccontrol_idx */
    *cctrl_ptr = *cctrl_ptr + -1;
    short_val = person_roll_action_random_063c04();
    if (short_val != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x36;
      return CONCAT44(arg_edx,1);
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : person_update_creature_control_063d6c (Original VA: 0x63d6c, Ghidra: FUN_00063d6c)
 * Prototype: longlong person_update_creature_control_063d6c(void);
 * Address  : 0x63d6c (Size: 82 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> person_fn_064b77
 ******************************************************************************/
longlong person_update_creature_control_063d6c(void)

{
  int cctrl_ptr;
  int thing;
  int extraout_ECX;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0x27f) != '\0') {
    *(char *)(cctrl_ptr + 0x27f) = *(char *)(cctrl_ptr + 0x27f) + -1;
  }
  if (*(char *)(cctrl_ptr + 0x27f) == '\0') {
    person_fn_064b77();
    *(undefined2 *)(extraout_ECX + 0x35) = 0;
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : person_update_creature_control_063dbe (Original VA: 0x63dbe, Ghidra: FUN_00063dbe)
 * Prototype: undefined4 person_update_creature_control_063dbe(void);
 * Address  : 0x63dbe (Size: 21 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 person_update_creature_control_063dbe(void)

{
  int thing;
  
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) & 0xfd; /* thing->ccontrol_idx */
  return 1;
}

/******************************************************************************
 * Function : person_update_creature_control_063dd3 (Original VA: 0x63dd3, Ghidra: FUN_00063dd3)
 * Prototype: undefined8 person_update_creature_control_063dd3(void);
 * Address  : 0x63dd3 (Size: 804 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 18 -> combat_update_creature_control_015e65, combobj_fn_016d38, combobj_fn_016f8b, combtool_update_creature_control_01829f, group_update_creature_and_thing_039c3e, gravyard_update_creature_and_thing_039d83, impset_fn_03e199, person_fn_063b6d ...
 ******************************************************************************/
undefined8 person_update_creature_control_063dd3(void)

{
  ushort uval;
  int cctrl_ptr;
  bool flag;
  short short_val;
  undefined2 uval_2;
  int thing;
  uint slab_coord;
  int val;
  byte *byte_ptr;
  int thing_ptr;
  undefined4 uval_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  byte *extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 2;
  *(int *)(cctrl_ptr + 0x116) = g_game_turn + 100;
  slab_coord = (uint)((&g_slabmap)
                 [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                  (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] & 7);
  val = light_process_map_subtile_0b2398(slab_coord,(uint)*(byte *)(thing + 0x10));
  if ((val < 0x126) || (0x12e < val)) {
    flag = false;
  }
  else {
    flag = true;
  }
  if (flag) {
    if ((int)*(char *)(extraout_ECX + 6) == slab_coord) {
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) & 0xfd;
      person_fn_063b6d();
    }
    val = combat_update_creature_control_015e65();
    if (val == 0) {
LAB_00063ea1:
      if ((*(ushort *)(cctrl_ptr + 0x7a) & 0xfff) != 0) {
        group_update_creature_and_thing_039c3e();
      }
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 2;
      person_initialise_state_but_thing_064b0c();
    }
    else {
      val = combtool_update_creature_control_01829f();
      if (val == 0) {
        if ((*(char *)(extraout_ECX_00 + 0x1a) == '\x17') || (val = creature_update_player_dungeon_084f04(), val == 0))
        goto LAB_00063ea1;
LAB_00063e93:
        combobj_fn_016d38();
      }
    }
  }
  else {
    val = ceiling_fn_07df48();
    if ((val == 0) && ((*(byte *)(extraout_ECX_01 + 0x25) & 0x20) == 0)) {
      uval_3 = 1;
      goto LAB_00064357;
    }
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_01 + 100)] + 0x2b1) = 0;
    if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_01 + 100)] + 0xad) & 2) == 0) {
      if ((*(char *)(extraout_ECX_01 + 0x1f) == '\x05') &&
         (*(char *)(extraout_ECX_01 + 0x1a) == '\x16')) {
        *(undefined4 *)(&g_bss_002e142d + *(char *)(extraout_ECX_01 + 6) * 0x1508) = 0x60;
      }
      person_fn_063b6d();
      if ((int)*(char *)(extraout_ECX_02 + 6) == slab_coord) {
        *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) & 0xfd;
      }
      else {
        *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 2;
      }
      creature_update_creature_and_thing_082cac();
      byte_ptr = (byte *)gravyard_update_creature_and_thing_039d83();
      if ((((byte_ptr != (byte *)0x0) && (byte_ptr != extraout_ECX_03)) && ((*byte_ptr & 0x10) == 0)) &&
         (((byte_ptr[1] & 2) == 0 && (val = update_fn_0dc440(), 0x600 < val)))) {
        group_update_creature_and_thing_039c3e();
      }
      thing_ptr = combat_update_creature_control_015e65();
      val = extraout_ECX_04;
      if (thing_ptr != 0) {
        val = combtool_update_creature_control_01829f();
        if (val == 0) {
          if ((*(char *)(extraout_ECX_05 + 0x1a) != '\x17') && (val = creature_update_player_dungeon_084f04(), val != 0))
          goto LAB_00063e93;
          thing_ptr = pom_roll_action_random_065545();
          val = extraout_ECX_06;
          if (thing_ptr == 0) goto LAB_00063fd0;
          combobj_fn_016f8b();
        }
        goto LAB_000640ae;
      }
LAB_00063fd0:
      if ((*(char *)(val + 0x1a) == '\x17') &&
         ((((int)*(char *)(val + 6) == slab_coord || (g_neutral_player_number == slab_coord)) &&
          (val = impset_fn_03e199(), val != 0)))) {
        uval_3 = 2;
        *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) & 0xfd;
        goto LAB_00064357;
      }
    }
    val = room_update_slab_subtile_columns_0d0f50();
    if ((val == 0) ||
       (((*(char *)(val + 3) != *(char *)(extraout_ECX_07 + 6) && (*(short *)(val + 10) != 5))
        && (*(short *)(val + 10) != 4)))) {
LAB_000640e5:
      *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) & 0xfd;
    }
    else {
      uval = *(ushort *)(val + 10);
      thing_ptr = extraout_ECX_07;
      if ((uval != 0) &&
         (((uval < 2 || ((3 < uval && (uval < 6)))) && ((*(ushort *)(cctrl_ptr + 0x7a) & 0xfff) != 0)
          ))) {
        group_update_creature_and_thing_039c3e();
        thing_ptr = extraout_ECX_08;
      }
      if (*(short *)(val + 10) == 10) {
        thing_ptr = light_process_map_subtile_0b2398();
        if ((thing_ptr < 0x126) || (0x12e < thing_ptr)) {
          flag = false;
        }
        else {
          flag = true;
        }
        thing_ptr = extraout_ECX_09;
        if (flag) goto LAB_000640e5;
      }
      if (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 2) == 0) || /* thing->ccontrol_idx */
         (*(short *)(val + 10) == 10)) {
        short_val = room_update_creature_control_0cb33c();
        if (short_val != 0) {
          uval_2 = room_fn_0cfbd8();
          *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_10 + 100)] + 0x2b1) = uval_2;
          goto LAB_000640ae;
        }
        goto LAB_000640e5;
      }
    }
    person_fn_063b6d();
  }
LAB_000640ae:
  uval_3 = 2;
LAB_00064357:
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : person_update_creature_control_0640f7 (Original VA: 0x640f7, Ghidra: FUN_000640f7)
 * Prototype: longlong person_update_creature_control_0640f7(void);
 * Address  : 0x640f7 (Size: 125 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> person_fn_063b6d, person_initialise_state_but_thing_064b0c, ceiling_fn_07df48, light_process_map_subtile_0b2440
 ******************************************************************************/
longlong person_update_creature_control_0640f7(void)

{
  short short_val;
  int thing;
  int val;
  short extraout_DX;
  uint arg_edx;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) == 0) { /* thing->ccontrol_idx */
    short_val = light_process_map_subtile_0b2440();
    *(short *)(thing + 0x11) = short_val - extraout_DX;
  }
  else if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) < 0) { /* thing->ccontrol_idx */
    val = ceiling_fn_07df48();
    if ((val != 0) || ((*(byte *)(thing + 0x25) & 0x20) != 0)) {
      if ((int)*(char *)(thing + 6) == (uint)g_neutral_player_number) { /* thing->owner */
        person_initialise_state_but_thing_064b0c();
      }
      else {
        person_fn_063b6d();
      }
    }
  }
  *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) = /* thing->ccontrol_idx */
       *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) + -1; /* thing->ccontrol_idx */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : person_update_creature_control_064174 (Original VA: 0x64174, Ghidra: FUN_00064174)
 * Prototype: longlong person_update_creature_control_064174(void);
 * Address  : 0x64174 (Size: 50 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_update_creature_control_0826a0
 ******************************************************************************/
longlong person_update_creature_control_064174(void)

{
  short *val;
  int cctrl_ptr;
  int thing;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = (short *)(cctrl_ptr + 0x280);
  *val = *val + -1;
  if (*(short *)(cctrl_ptr + 0x280) == 0) {
    creature_update_creature_control_0826a0();
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : person_update_creature_and_thing_0641a6 (Original VA: 0x641a6, Ghidra: FUN_000641a6)
 * Prototype: undefined8 person_update_creature_and_thing_0641a6(void);
 * Address  : 0x641a6 (Size: 211 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 5 -> creature_thing_already_dragged_something_084e0c, move_update_creature_control_0b3d04, room_process_dungeon_room_0ca568, room_number_slabs_room_zero_0cc968, update_fn_0dc440
 ******************************************************************************/
undefined8 person_update_creature_and_thing_0641a6(void)

{
  uint thing_ptr;
  char ch;
  short short_val;
  int thing;
  int dungeon_off;
  undefined4 uval;
  undefined4 arg_edx;
  undefined4 *thing_ptr_2;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  
  dungeon_off = *(char *)(thing + 6) * 0x1508; /* thing->owner */
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x74)]; /* thing->ccontrol_idx */
  thing_ptr_2 = (undefined4 *)local_20;
  if ((((*(short *)(&g_bss_002e059c + dungeon_off) != 0) &&
       (thing_ptr_2 = (undefined4 *)local_20, ((&g_bss_002e0591)[dungeon_off] & 1) != 0)) &&
      (thing_ptr_2 = (undefined4 *)local_20, g_thing_ptrs < thing_ptr)) &&
     ((thing_ptr_2 = (undefined4 *)local_20, *(char *)(thing_ptr + 7) == 'C' &&
      (thing_ptr_2 = (undefined4 *)local_20, (*(byte *)(thing_ptr + 1) & 1) == 0)))) {
    uStack_24 = 0x64216;
    dungeon_off = update_fn_0dc440();
    thing_ptr_2 = (undefined4 *)local_20;
    if (dungeon_off < 0x200) {
      uStack_24 = 1;
      dungeon_off = room_process_dungeon_room_0ca568();
      thing_ptr_2 = &uStack_24;
      if (dungeon_off != 0) {
        ch = room_number_slabs_room_zero_0cc968();
        thing_ptr_2 = &uStack_24;
        if (ch != '\0') {
          short_val = move_update_creature_control_0b3d04();
          thing_ptr_2 = &uStack_24;
          if (short_val != 0) {
            creature_thing_already_dragged_something_084e0c();
            uval = 1;
            *(undefined1 *)(thing + 8) = 0x48; /* thing->active_state */
            goto LAB_00064357;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)thing_ptr_2 + -4) = 0x646fc;
  person_fn_063b6d();
  uval = 0;
LAB_00064357:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_update_slab_subtile_columns_064279 (Original VA: 0x64279, Ghidra: FUN_00064279)
 * Prototype: undefined8 person_update_slab_subtile_columns_064279(void);
 * Address  : 0x64279 (Size: 229 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 3 -> person_fn_063b6d, person_initialise_state_but_thing_064b0c, creature_update_creature_control_0826a0
 ******************************************************************************/
undefined8 person_update_slab_subtile_columns_064279(void)

{
  int thing;
  int slab_coord;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  uint uval_2;
  
  uval_2 = (uint)CONCAT11(*(undefined1 *)(thing + 0x10),*(undefined1 *)(thing + 0xe));
  if ((((&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)] != /* thing->ccontrol_idx */
        g_thing_ptrs) &&
      (*(char *)((&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)] + 7 /* thing->ccontrol_idx */
                ) == 'C')) && ((*(byte *)((int)&g_map_subtiles + uval_2 * 5) & 2) != 0)) {
    slab_coord = ((&g_subtile_to_slab_lut)[uval_2 % 0x100] + (&g_subtile_to_slab_lut)[(int)uval_2 >> 8] * 0x55) * 6;
    if (((uint)((&g_slabmap)[slab_coord] & 7) == (int)*(char *)(thing + 6)) && /* thing->owner */
       (*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) == 4)) {
      creature_update_creature_control_0826a0();
      person_initialise_state_but_thing_064b0c();
      *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 1) =
           *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 1) | 2;
      person_fn_063b6d();
      uval = 1;
      goto LAB_00064357;
    }
  }
  person_fn_063b6d();
  uval = 0;
LAB_00064357:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_fn_06435e (Original VA: 0x6435e, Ghidra: FUN_0006435e)
 * Prototype: longlong person_fn_06435e(void);
 * Address  : 0x6435e (Size: 7 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x06435e
 * Callers  : 1 -> person_update_slab_subtile_columns_0644e9
 * Callees  : 0 -> 
 ******************************************************************************/
longlong person_fn_06435e(void)

{
  int unaff_EBP;
  
  person_fn_063b6d();
  return (ulonglong)*(uint *)(unaff_EBP + 0xc) << 0x20;
}

/******************************************************************************
 * Function : person_trying_remove_spell_room_064365 (Original VA: 0x64365, Ghidra: FUN_00064365)
 * Prototype: undefined8 person_trying_remove_spell_room_064365(void);
 * Address  : 0x64365 (Size: 388 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp lines 866
 * Purpose  : String 'TRYING TO REMOVE SPELL FROM A ROOM WITH NO SPELL'
 * Callers  : 0 -> 
 * Callees  : 8 -> magic_remove_spell_player_as_04fdac, moodneed_fn_051374, move_update_creature_control_0b3b58, object_update_creature_control_0c3960, room_process_dungeon_room_0ca568, room_number_slabs_room_zero_0ccf10, update_fn_0dc440, LbErrorLog
 ******************************************************************************/
undefined8 person_trying_remove_spell_room_064365(void)

{
  char room_ptr;
  int thing;
  int room_off;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  undefined4 *thing_ptr;
  undefined4 uStack_28;
  undefined1 local_24 [8];
  uint local_1c;
  
  local_1c = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x72)]; /* thing->ccontrol_idx */
  room_off = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[*(byte *)(local_1c + 0xe)] +
                       (&g_subtile_to_slab_lut)[*(byte *)(local_1c + 0x10)] * 0x55) * 6] * 0x45;
  thing_ptr = (undefined4 *)local_24;
  if (((*(byte *)(local_1c + 1) & 1) == 0) &&
     (thing_ptr = (undefined4 *)local_24, g_thing_ptrs < local_1c)) {
    uStack_28 = 0x643dd;
    val = update_fn_0dc440();
    thing_ptr = (undefined4 *)local_24;
    if (val < 0x200) {
      uStack_28 = 1;
      val = room_process_dungeon_room_0ca568();
      thing_ptr = &uStack_28;
      if ((val != 0) && (room_ptr = room_number_slabs_room_zero_0ccf10(), thing_ptr = &uStack_28, room_ptr != '\0')) {
        if ((room_off != -0x2ddd1b) &&
           ((*(short *)(&g_room_slabs_count + room_off) == 3 &&
            (*(char *)(local_1c + 6) == (&g_bss_002ddd1e)[room_off])))) {
          if ((*(int *)(&g_bss_002ddd32 + room_off) == 0) || (*(short *)(&g_bss_002ddd2b + room_off) == 0)) {
            LbErrorLog(); /* LbErrorLog("person.cpp", line 866, "TRYING TO REMOVE SPELL FROM A ROOM WITH NO SPELL") */
          }
          else {
            *(int *)(&g_bss_002ddd32 + room_off) = *(int *)(&g_bss_002ddd32 + room_off) + -1;
            *(short *)(&g_bss_002ddd2b + room_off) = *(short *)(&g_bss_002ddd2b + room_off) + -1;
            magic_remove_spell_player_as_04fdac();
            if (((int)(char)(&g_bss_002ddd1e)[room_off] ==
                 (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) ||
               ((int)*(char *)(thing + 6) == /* thing->owner */
                (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) {
              moodneed_fn_051374();
            }
          }
        }
        object_update_creature_control_0c3960();
        move_update_creature_control_0b3b58();
        uval = 1;
        *(undefined1 *)(thing + 8) = 0x65; /* thing->active_state */
        goto LAB_00064357;
      }
    }
  }
  *(undefined4 *)((int)thing_ptr + -4) = 0x646fc;
  person_fn_063b6d();
  uval = 0;
LAB_00064357:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_update_slab_subtile_columns_0644e9 (Original VA: 0x644e9, Ghidra: FUN_000644e9)
 * Prototype: undefined4 person_update_slab_subtile_columns_0644e9(void);
 * Address  : 0x644e9 (Size: 244 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 4 -> magic_update_player_dungeon_04fd81, person_fn_06435e, object_dragging_anything_0c39a8, object_handle_object_thing_0c6574
 ******************************************************************************/
undefined4 person_update_slab_subtile_columns_0644e9(void)

{
  int thing;
  int slab_coord;
  undefined4 uval;
  int extraout_ECX;
  uint uval_2;
  undefined8 uval_3;
  
  uval_2 = (uint)CONCAT11(*(undefined1 *)(thing + 0x10),*(undefined1 *)(thing + 0xe));
  if ((((&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)] != /* thing->ccontrol_idx */
        g_thing_ptrs) &&
      (g_thing_ptrs <
       (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)])) && /* thing->ccontrol_idx */
     ((*(byte *)((int)&g_map_subtiles + uval_2 * 5) & 2) != 0)) {
    slab_coord = ((&g_subtile_to_slab_lut)[uval_2 % 0x100] + (&g_subtile_to_slab_lut)[(int)uval_2 >> 8] * 0x55) * 6;
    if (((uint)((&g_slabmap)[slab_coord] & 7) == (int)*(char *)(thing + 6)) && /* thing->owner */
       (*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) == 3)) {
      uval_3 = object_handle_object_thing_0c6574();
      slab_coord = (int)((ulonglong)uval_3 >> 0x20);
      if (((int)uval_3 != 0) && (*(int *)(slab_coord + 0x17) < (int)(uint)*(ushort *)(slab_coord + 0xe))) {
        *(int *)(slab_coord + 0x17) = *(int *)(slab_coord + 0x17) + 1;
        *(short *)(slab_coord + 0x10) = *(short *)(slab_coord + 0x10) + 1;
        magic_update_player_dungeon_04fd81();
      }
      object_dragging_anything_0c39a8();
      *(undefined1 *)(extraout_ECX + 6) = *(undefined1 *)(thing + 6); /* thing->owner */
      uval = person_fn_06435e();
      return uval;
    }
  }
  person_fn_063b6d();
  return 0;
}

/******************************************************************************
 * Function : person_update_creature_and_thing_0645dd (Original VA: 0x645dd, Ghidra: FUN_000645dd)
 * Prototype: undefined8 person_update_creature_and_thing_0645dd(void);
 * Address  : 0x645dd (Size: 294 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 7 -> person_fn_063b6d, workshop_content_077900, workshop_item_class_077a5b, move_update_creature_control_0b3d04, object_update_creature_control_0c3960, room_update_slab_subtile_columns_0d0f50, update_fn_0dc440
 ******************************************************************************/
undefined8 person_update_creature_and_thing_0645dd(void)

{
  int cctrl_ptr;
  uint thing_ptr;
  uint thing_ptr_2;
  short short_val;
  int thing;
  int val;
  int val_2;
  undefined4 uval;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x72)];
  val = room_update_slab_subtile_columns_0d0f50();
  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x70)];
  if (((*(byte *)(thing_ptr + 1) & 1) == 0) && (g_thing_ptrs < thing_ptr)) {
    val_2 = update_fn_0dc440();
    if ((val_2 < 0x200) &&
       (((g_thing_ptrs < thing_ptr_2 && (*(char *)(thing_ptr_2 + 0x1f) == '\b')) && /* thing->class_id */
        (*(char *)(thing_ptr_2 + 0x1a) == (&g_data_0019116c)[*(byte *)(thing_ptr + 0x1a)])))) {
      short_val = move_update_creature_control_0b3d04();
      if (short_val != 0) {
        if (((val != 0) && (*(short *)(val + 10) == 8)) &&
           (*(char *)(thing_ptr + 6) == *(char *)(val + 3))) { /* thing->owner */
          workshop_content_077900();
          if (*(char *)(thing_ptr + 6) < '\x05') { /* thing->owner */
            workshop_item_class_077a5b((&g_data_001911f3)[*(byte *)(thing_ptr + 0x1a)]);
          }
        }
        object_update_creature_control_0c3960();
        uval = 1;
        *(undefined1 *)(thing + 8) = 0xc; /* thing->active_state */
        goto LAB_00064357;
      }
    }
  }
  *(undefined2 *)(cctrl_ptr + 0x70) = 0;
  person_fn_063b6d();
  uval = 0;
LAB_00064357:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_update_creature_and_thing_064703 (Original VA: 0x64703, Ghidra: FUN_00064703)
 * Prototype: undefined8 person_update_creature_and_thing_064703(void);
 * Address  : 0x64703 (Size: 179 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 6 -> move_update_creature_control_0b3d04, object_update_creature_control_0c3960, room_process_dungeon_room_0ca6bc, room_number_slabs_room_zero_0ccf10, room_update_slab_subtile_columns_0d0f50, update_fn_0dc440
 ******************************************************************************/
undefined8 person_update_creature_and_thing_064703(void)

{
  uint thing_ptr;
  char ch;
  short short_val;
  int thing;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x72)]; /* thing->ccontrol_idx */
  room_update_slab_subtile_columns_0d0f50();
  if (((*(byte *)(thing_ptr + 1) & 1) == 0) && (g_thing_ptrs < thing_ptr)) {
    val = update_fn_0dc440();
    if (val < 0x200) {
      val = room_process_dungeon_room_0ca6bc();
      if (val != 0) {
        ch = room_number_slabs_room_zero_0ccf10();
        if (ch != '\0') {
          short_val = move_update_creature_control_0b3d04();
          if (short_val != 0) {
            object_update_creature_control_0c3960();
            uval = 1;
            *(undefined1 *)(thing + 8) = 0x10; /* thing->active_state */
            goto LAB_00064357;
          }
        }
      }
    }
  }
  person_fn_063b6d();
  uval = 0;
LAB_00064357:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_update_creature_and_thing_0647b6 (Original VA: 0x647b6, Ghidra: FUN_000647b6)
 * Prototype: undefined8 person_update_creature_and_thing_0647b6(void);
 * Address  : 0x647b6 (Size: 150 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 5 -> person_fn_063b6d, workshop_fn_07793c, workshop_illegal_item_class_0779fb, object_dragging_anything_0c39a8, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 person_update_creature_and_thing_0647b6(void)

{
  uint thing_ptr;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)]; /* thing->ccontrol_idx */
  if (g_thing_ptrs < thing_ptr) {
    val = room_update_slab_subtile_columns_0d0f50();
    if ((((val != 0) && (*(short *)(val + 10) == 8)) &&
        (*(char *)(val + 3) == *(char *)(extraout_ECX + 6))) &&
       (*(ushort *)(val + 0x10) < *(ushort *)(val + 0xe))) {
      object_dragging_anything_0c39a8();
      *(undefined1 *)(thing_ptr + 6) = *(undefined1 *)(extraout_ECX_00 + 6); /* thing->owner */
      workshop_fn_07793c();
      workshop_illegal_item_class_0779fb();
      person_fn_063b6d();
      uval = 1;
      goto LAB_00064358;
    }
  }
  person_fn_063b6d();
  uval = 0;
LAB_00064358:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_update_creature_and_thing_06484c (Original VA: 0x6484c, Ghidra: FUN_0006484c)
 * Prototype: undefined8 person_update_creature_and_thing_06484c(void);
 * Address  : 0x6484c (Size: 180 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 4 -> mapwho_process_map_subtile_050de3, person_fn_063b6d, structs_update_creature_control_072af4, object_dragging_anything_0c39a8
 ******************************************************************************/
undefined8 person_update_creature_and_thing_06484c(void)

{
  byte flag;
  int thing;
  int val;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  
  if (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)] /* thing->ccontrol_idx */
     ) {
    val = mapwho_process_map_subtile_050de3();
    if ((val == extraout_ECX) && (*(char *)(extraout_ECX + 0x13) == '\0')) {
      *(undefined *)(extraout_ECX + 0x13) =
           (&g_bss_001ae89c)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0x14];
      flag = (&g_data_0018fd1b)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0x36];
      *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) & 0xcf;
      *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) | (flag & 3) << 4;
      *(int *)(&g_bss_002e1804 + *(char *)(thing + 6) * 0x1508) = /* thing->owner */
           *(int *)(&g_bss_002e1804 + *(char *)(thing + 6) * 0x1508) + 1; /* thing->owner */
      object_dragging_anything_0c39a8();
      structs_update_creature_control_072af4();
      person_fn_063b6d();
      uval = 1;
      goto LAB_00064358;
    }
  }
  person_fn_063b6d();
  uval = 0;
LAB_00064358:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_update_creature_and_thing_064900 (Original VA: 0x64900, Ghidra: FUN_00064900)
 * Prototype: undefined8 person_update_creature_and_thing_064900(void);
 * Address  : 0x64900 (Size: 173 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 5 -> move_update_creature_control_0b3d04, object_update_creature_control_0c3960, room_process_dungeon_room_0ca568, room_number_slabs_room_zero_0cc968, update_fn_0dc440
 ******************************************************************************/
undefined8 person_update_creature_and_thing_064900(void)

{
  char ch;
  short short_val;
  int thing;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  undefined4 *thing_ptr;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  
  thing_ptr = (undefined4 *)local_20;
  if (((*(&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x72)] & 0x80) == /* thing->ccontrol_idx */
       0) && (thing_ptr = (undefined4 *)local_20,
             g_thing_ptrs <
             (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x72)])) { /* thing->ccontrol_idx */
    uStack_24 = 0x64941;
    val = update_fn_0dc440();
    thing_ptr = (undefined4 *)local_20;
    if (val < 0x200) {
      uStack_24 = 1;
      val = room_process_dungeon_room_0ca568();
      thing_ptr = &uStack_24;
      if (val != 0) {
        ch = room_number_slabs_room_zero_0cc968();
        thing_ptr = &uStack_24;
        if (ch != '\0') {
          short_val = move_update_creature_control_0b3d04();
          thing_ptr = &uStack_24;
          if (short_val != 0) {
            object_update_creature_control_0c3960();
            uval = 1;
            *(undefined1 *)(thing + 8) = 0x67; /* thing->active_state */
            goto LAB_00064357;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)thing_ptr + -4) = 0x646fc;
  person_fn_063b6d();
  uval = 0;
LAB_00064357:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : person_update_creature_and_thing_0649ad (Original VA: 0x649ad, Ghidra: FUN_000649ad)
 * Prototype: longlong person_update_creature_and_thing_0649ad(void);
 * Address  : 0x649ad (Size: 129 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 4 -> gravyard_creature_already_decomposing_graveyard_0398b4, person_fn_063b6d, object_dragging_anything_0c39a8, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong person_update_creature_and_thing_0649ad(void)

{
  uint thing_ptr;
  int thing;
  int val;
  uint arg_edx;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)]; /* thing->ccontrol_idx */
  if (g_thing_ptrs < thing_ptr) {
    val = room_update_slab_subtile_columns_0d0f50();
    if ((((val != 0) && (*(short *)(val + 10) == 0xb)) &&
        (*(char *)(val + 3) == *(char *)(thing + 6))) && /* thing->owner */
       (*(ushort *)(val + 0x10) < *(ushort *)(val + 0xe))) {
      object_dragging_anything_0c39a8();
      *(undefined1 *)(thing_ptr + 6) = *(undefined1 *)(thing + 6); /* thing->owner */
      gravyard_creature_already_decomposing_graveyard_0398b4();
      person_fn_063b6d();
      return CONCAT44(arg_edx,1);
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : person_fn_064a2e (Original VA: 0x64a2e, Ghidra: FUN_00064a2e)
 * Prototype: undefined8 person_fn_064a2e(void);
 * Address  : 0x64a2e (Size: 49 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x064a2e
 * Callers  : 11 -> anger_hurrah_mental_instability_creature_01073a, barracks_update_creature_control_013809, moodneed_shit_could_get_treasure_0525b2, person_external_change_state_but_064a5f, person_initialise_state_but_thing_064b0c, creature_how_hero_have_tend_08608c, object_update_creature_and_thing_0c3c3c, object_update_creature_and_thing_0c4f70 ...
 * Callees  : 2 -> instance_update_creature_control_049dd9, person_fn_064bce
 ******************************************************************************/
undefined8 person_fn_064a2e(void)

{
  int val;
  undefined4 arg_edx;
  int extraout_EDX;
  
  val = person_fn_064bce();
  if (*(int *)(val + 4) != 0) {
    (**(code **)(val + 4))();
    *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) | 0x10;
    return CONCAT44(arg_edx,1);
  }
  instance_update_creature_control_049dd9();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : person_external_change_state_but_064a5f (Original VA: 0x64a5f, Ghidra: FUN_00064a5f)
 * Prototype: undefined1 person_external_change_state_but_064a5f(void);
 * Address  : 0x64a5f (Size: 136 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp lines 1196
 * Purpose  : String 'External change state, but thing in room list even after cle'
 * Callers  : 41 -> anger_hurrah_mental_instability_creature_01073a, angtool_fn_01107a, angtool_update_creature_control_011862, angtool_update_creature_control_0119bc, angtool_update_creature_control_011a81, angtool_update_player_view_state_011b51, angtool_update_creature_control_011c78, angtool_fn_011d2f ...
 * Callees  : 4 -> person_fn_064a2e, person_fn_064c4d, room_attempt_remove_creature_room_0cd9b0, LbErrorLog
 ******************************************************************************/
undefined1 person_external_change_state_but_064a5f(void)

{
  char ch;
  undefined1 uval;
  int extraout_ECX;
  undefined1 arg_dl;
  
  ch = person_fn_064c4d();
  uval = 0;
  if (ch != '\0') {
    person_fn_064a2e();
    *(undefined1 *)(extraout_ECX + 8) = 0;
    *(undefined1 *)(extraout_ECX + 7) = arg_dl;
    *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) & 0xef;
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x80) = 0;
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x302) = 0;
    if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 1) & 0x20) != 0) {
      LbErrorLog(); /* LbErrorLog("person.cpp", line 1196, "External change state, but thing in room list even after cleanup") */
      room_attempt_remove_creature_room_0cd9b0();
    }
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : person_update_creature_control_064ae7 (Original VA: 0x64ae7, Ghidra: FUN_00064ae7)
 * Prototype: undefined4 person_update_creature_control_064ae7(void);
 * Address  : 0x64ae7 (Size: 37 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 52 -> barracks_update_creature_control_013747, entrance_update_creature_and_thing_026ce2, evil_update_creature_control_02796f, evil_fn_02863c, evil_update_slab_subtile_columns_028904, evil_update_creature_control_028afb, gen2_update_creature_control_03818c, good_fn_038615 ...
 * Callees  : 1 -> instance_update_creature_control_049dd9
 ******************************************************************************/
undefined4 person_update_creature_control_064ae7(void)

{
  int thing;
  undefined1 arg_dl;
  
  *(undefined1 *)(thing + 8) = 0; /* thing->active_state */
  *(undefined1 *)(thing + 7) = arg_dl;
  *(byte *)(thing + 1) = *(byte *)(thing + 1) & 0xef;
  *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x302) = 0; /* thing->ccontrol_idx */
  instance_update_creature_control_049dd9();
  return 1;
}

/******************************************************************************
 * Function : person_initialise_state_but_thing_064b0c (Original VA: 0x64b0c, Ghidra: FUN_00064b0c)
 * Prototype: undefined4 person_initialise_state_but_thing_064b0c(void);
 * Address  : 0x64b0c (Size: 107 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp lines 1310
 * Purpose  : String 'Initialise state, but thing in room list even after cleanup'
 * Callers  : 10 -> comptool_thing_held_computer_unconsious_01e226, lair_process_thing_entity_04e1f2, magic_update_creature_and_thing_04efd4, process_players_dungeon_command_packet, person_fn_063b6d, person_update_creature_control_063dd3, person_update_creature_control_0640f7, person_update_slab_subtile_columns_064279 ...
 * Callees  : 3 -> person_fn_064a2e, room_attempt_remove_creature_room_0cd9b0, LbErrorLog
 ******************************************************************************/
undefined4 person_initialise_state_but_thing_064b0c(void)

{
  int extraout_ECX;
  undefined1 extraout_DL;
  
  person_fn_064a2e();
  *(undefined1 *)(extraout_ECX + 8) = 0;
  *(undefined1 *)(extraout_ECX + 7) = extraout_DL;
  *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) & 0xef;
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x80) = 0;
  *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x302) = 0;
  if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 1) & 0x20) != 0) {
    LbErrorLog(); /* LbErrorLog("person.cpp", line 1310, "Initialise state, but thing in room list even after cleanup") */
    room_attempt_remove_creature_room_0cd9b0();
  }
  return 1;
}

/******************************************************************************
 * Function : person_fn_064b77 (Original VA: 0x64b77, Ghidra: FUN_00064b77)
 * Prototype: undefined4 person_fn_064b77(void);
 * Address  : 0x64b77 (Size: 87 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x064b77
 * Callers  : 1 -> person_update_creature_control_063d6c
 * Callees  : 3 -> inits_fn_045394, person_fn_063b6d, person_update_creature_control_064ae7
 ******************************************************************************/
undefined4 person_fn_064b77(void)

{
  int extraout_ECX;
  int arg_edx;
  int arg_ebx;
  
  if ((*(int *)(&g_data_0018c4a4 + arg_edx * 0x29) == 0) &&
     ((arg_ebx == 0 || (*(int *)(&g_data_0018c4a4 + arg_ebx * 0x29) == 0)))) {
    person_update_creature_control_064ae7();
    *(char *)(extraout_ECX + 8) = (char)arg_ebx;
    return 1;
  }
  if ((((arg_edx != 0x29) && (arg_edx != 0x2b)) && (arg_ebx != 0x29)) && (arg_ebx != 0x2b)) {
    person_fn_063b6d();
    return 1;
  }
  inits_fn_045394();
  return 1;
}

/******************************************************************************
 * Function : person_fn_064bce (Original VA: 0x64bce, Ghidra: FUN_00064bce)
 * Prototype: undefined8 person_fn_064bce(void);
 * Address  : 0x64bce (Size: 42 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x064bce
 * Callers  : 3 -> barracks_update_creature_control_013809, person_fn_064a2e, engine3_draw_queued_billboard_sprite
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 person_fn_064bce(void)

{
  int arg_eax;
  undefined4 arg_edx;
  int val;
  
  val = (uint)*(byte *)(arg_eax + 7) * 0x29;
  if ((&g_data_0018c4be)[val] == '\x06') {
    val = (uint)*(byte *)(arg_eax + 8) * 0x29;
  }
  return CONCAT44(arg_edx,&g_data_0018c4a0 + val);
}

/******************************************************************************
 * Function : person_fn_064bf8 (Original VA: 0x64bf8, Ghidra: FUN_00064bf8)
 * Prototype: undefined8 person_fn_064bf8(void);
 * Address  : 0x64bf8 (Size: 33 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x064bf8
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 person_fn_064bf8(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  if ((&g_data_0018c4be)[(uint)*(byte *)(arg_eax + 7) * 0x29] == '\x06') {
    return CONCAT44(arg_edx,(uint)*(byte *)(arg_eax + 8));
  }
  return CONCAT44(arg_edx,(uint)*(byte *)(arg_eax + 7));
}

/******************************************************************************
 * Function : person_fn_064c4d (Original VA: 0x64c4d, Ghidra: FUN_00064c4d)
 * Prototype: int person_fn_064c4d(void);
 * Address  : 0x64c4d (Size: 179 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x064c4d
 * Callers  : 15 -> anger_hurrah_mental_instability_creature_01073a, angtool_update_creature_control_0119bc, angtool_update_creature_control_011a81, angtool_update_player_view_state_011b51, angtool_update_creature_control_011c78, angtool_fn_011d2f, angtool_fn_011d65, combat_update_creature_control_015e65 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int person_fn_064c4d(void)

{
  int arg_eax;
  int val;
  uint3 uval;
  int arg_edx;
  int val_2;
  int arg_ebx;
  bool flag;
  
  val_2 = arg_edx * 0x29;
  val = arg_ebx * 0x29;
  if ((&g_data_0018c4be)[val_2] == '\x06') {
    val_2 = (uint)*(byte *)(arg_eax + 8) * 0x29;
  }
  uval = (uint3)((uint)(&g_data_0018c4a0 + val) >> 8);
  if ((((&g_data_0018c4c0)[val_2] == '\0') || ((&g_data_0018c4b6)[val] != '\0')) &&
     (((&g_data_0018c4bf)[val_2] == '\0' || ((&g_data_0018c4b5)[val] != '\0')))) {
    switch((&g_data_0018c4be)[val_2]) {
    case 2:
      flag = (&g_data_0018c4b1)[val] == '\0';
      break;
    case 3:
      flag = (&g_data_0018c4b2)[val] == '\0';
      break;
    case 4:
      flag = (&g_data_0018c4b0)[val] == '\0';
      break;
    case 5:
      flag = (&g_data_0018c4b3)[val] == '\0';
      break;
    default:
      goto switchD_00064cf4_caseD_6;
    case 7:
      flag = (&g_data_0018c4b4)[val] == '\0';
      break;
    case 8:
      flag = (&g_data_0018c4b7)[val] == '\0';
      break;
    case 9:
      flag = (&g_data_0018c4b8)[val] == '\0';
      break;
    case 10:
      flag = (&g_data_0018c4b9)[val] == '\0';
      break;
    case 0xb:
      flag = (&g_data_0018c4bb)[val] == '\0';
      break;
    case 0xc:
      flag = (&g_data_0018c4ba)[val] == '\0';
      break;
    case 0xd:
      flag = (&g_data_0018c4bc)[val] == '\0';
      break;
    case 0xe:
      flag = (&g_data_0018c4bd)[val] == '\0';
    }
    if (!flag) {
switchD_00064cf4_caseD_6:
      return CONCAT31(uval,1);
    }
  }
  return (uint)uval << 8;
}

/******************************************************************************
 * Function : person_update_creature_control_064d00 (Original VA: 0x64d00, Ghidra: FUN_00064d00)
 * Prototype: ulonglong person_update_creature_control_064d00(void);
 * Address  : 0x64d00 (Size: 296 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> event_fn_0274ad, moodneed_fn_051374, creature_fn_082774
 ******************************************************************************/
ulonglong person_update_creature_control_064d00(void)

{
  int thing;
  uint uval;
  uint extraout_ECX;
  undefined4 arg_edx;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  int val;
  undefined4 auStack_2c [2];
  uint local_24;
  int local_20;
  uint local_1c;
  
  local_24 = 0;
  local_1c = 0;
  local_20 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = 0;
  word_ptr_2 = &local_24;
  do {
    uval = local_1c;
    word_ptr = (undefined1 *)word_ptr_2;
    if ((((((&g_players)[local_1c] & 1) != 0) &&
         (uval = (uint)(byte)(&g_bss_0019d0f4)[local_1c], uval == 1)) &&
        (*(short *)((int)&g_dungeons + val) != 0)) &&
       (uval = (uint)*(byte *)(local_20 + 0x8a), (uval & 1 << ((byte)local_24 & 0x1f)) == 0)) {
      *(undefined4 *)((int)word_ptr_2 + -4) = 0x64d9b;
      uval = creature_fn_082774();
      if (((char)uval != '\0') &&
         (uval = *(uint *)((int)&g_map_subtiles +
                           (uint)CONCAT11(*(undefined1 *)(thing + 0x10),
                                          *(undefined1 *)(thing + 0xe)) * 5 + 1) >> 0x1c,
         (uval & extraout_ECX) != 0)) {
        *(undefined4 *)((int)word_ptr_2 + -4) = 0;
        *(byte *)(local_20 + 0x8a) = *(byte *)(local_20 + 0x8a) | '\x01' << ((byte)local_24 & 0x1f);
        *(short *)((int)&g_bss_002e1062 + val) = *(short *)((int)&g_bss_002e1062 + val) + 1;
        *(undefined4 *)((int)word_ptr_2 + -8) = 0x64dee;
        event_fn_0274ad();
        uval = (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
        word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
        if (uval == local_24) {
          *(undefined4 *)((int)word_ptr_2 + -8) = 0x64e1c;
          uval = moodneed_fn_051374();
          word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
        }
      }
    }
    local_1c = local_1c + 0x4ef;
    local_24 = local_24 + 1;
    val = val + 0x1508;
    word_ptr_2 = (uint *)word_ptr;
  } while ((int)local_24 < 4);
  return CONCAT44(arg_edx,uval) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : person_update_creature_control_064e28 (Original VA: 0x64e28, Ghidra: FUN_00064e28)
 * Prototype: undefined8 person_update_creature_control_064e28(void);
 * Address  : 0x64e28 (Size: 49 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_thing_dragged_something_084e8c
 ******************************************************************************/
undefined8 person_update_creature_control_064e28(void)

{
  int thing;
  undefined4 arg_edx;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) != 0) { /* thing->ccontrol_idx */
    creature_thing_dragged_something_084e8c();
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : person_fn_064e59 (Original VA: 0x64e59, Ghidra: FUN_00064e59)
 * Prototype: undefined4 person_fn_064e59(void);
 * Address  : 0x64e59 (Size: 10 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x064e59
 * Callers  : 3 -> prison_update_creature_control_0660f1, temple_fn_072ef7, torture_update_creature_and_thing_074b82
 * Callees  : 1 -> room_attempt_remove_creature_room_0cd9b0
 ******************************************************************************/
undefined4 person_fn_064e59(void)

{
  room_attempt_remove_creature_room_0cd9b0();
  return 1;
}

/******************************************************************************
 * Function : person_fn_064e63 (Original VA: 0x64e63, Ghidra: FUN_00064e63)
 * Prototype: undefined4 person_fn_064e63(void);
 * Address  : 0x64e63 (Size: 10 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Module person.cpp procedure @ 0x064e63
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_update_creature_control_082710
 ******************************************************************************/
undefined4 person_fn_064e63(void)

{
  creature_update_creature_control_082710();
  return 1;
}

/******************************************************************************
 * Function : person_update_creature_and_thing_064e6d (Original VA: 0x64e6d, Ghidra: FUN_00064e6d)
 * Prototype: undefined8 person_update_creature_and_thing_064e6d(void);
 * Address  : 0x64e6d (Size: 55 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 1 -> object_dragging_anything_0c39a8
 ******************************************************************************/
undefined8 person_update_creature_and_thing_064e6d(void)

{
  int thing_ptr;
  int thing;
  undefined4 arg_edx;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) != 0) { /* thing->ccontrol_idx */
    thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e)]; /* thing->ccontrol_idx */
    object_dragging_anything_0c39a8();
    *(undefined1 *)(thing_ptr + 6) = g_neutral_player_number; /* thing->owner */
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : person_process_slabmap_tile_064ea4 (Original VA: 0x64ea4, Ghidra: FUN_00064ea4)
 * Prototype: undefined4 person_process_slabmap_tile_064ea4(void);
 * Address  : 0x64ea4 (Size: 506 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> person_nav_outside_room_06509e
 * Callees  : 3 -> creature_fn_0827fc, move_process_map_subtile_0b28e8, slab_fn_0da67c
 ******************************************************************************/
undefined4 person_process_slabmap_tile_064ea4(void)

{
  byte slab_coord;
  byte flag;
  ushort uval;
  short short_val;
  char slab_coord_2;
  undefined2 uval_2;
  int arg_eax;
  uint uval_3;
  int extraout_ECX;
  int extraout_ECX_00;
  uint extraout_EDX;
  int arg_ebx;
  int slab_coord_3;
  uint uval_4;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  slab_coord_3 = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 +
          (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)];
  uval_3 = (uint)(byte)(&g_slabmap_base)[slab_coord_3 * 6];
  slab_coord = (&g_slabmap)
          [((&g_subtile_to_slab_lut)[(slab_coord_3 % 0x55) * 3] + (&g_subtile_to_slab_lut)[(slab_coord_3 / 0x55) * 3] * 0x55) * 6];
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  uval = *(ushort *)(arg_ebx + 0x37);
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  local_18 = g_action_random_seed % (uint)*(ushort *)(arg_ebx + 0x3b);
  for (slab_coord_3 = 0; uval_4 = (uint)uval, slab_coord_3 < (int)local_18; slab_coord_3 = slab_coord_3 + 1) {
    uval = *(ushort *)(&g_bss_002d33c6 + uval_4 * 6);
  }
  local_20 = 0;
  do {
    if ((int)(uint)*(ushort *)(arg_ebx + 0x3b) <= local_20) {
      return 0xffffffff;
    }
    if (*(ushort *)(arg_ebx + 0x3b) == local_18) {
      local_18 = 0;
      uval_4 = (uint)*(ushort *)(arg_ebx + 0x37);
    }
    local_24 = 0;
    for (local_1c = 0; local_1c < 0x10; local_1c = local_1c + 2) {
      slab_coord_3 = (int)*(short *)(&g_data_0018b690 + local_1c) + uval_4;
      flag = (&g_slabmap_base)[slab_coord_3 * 6];
      slab_coord_2 = slab_fn_0da67c(uval_3,slab_coord_3,(&g_subtile_to_slab_lut)[(slab_coord_3 / 0x55) * 3] * 0x55);
      if ((slab_coord_2 != '\0') && ((flag != uval_3 || (extraout_EDX != (slab_coord & 7))))) {
        short_val = *(short *)(&g_data_0018b690 + local_24 * 2);
        *(char *)(extraout_ECX + 1) = (char)((int)(uval_4 + (int)short_val) % 0x55) * '\x03' + '\x01';
        *(char *)(extraout_ECX + 3) = (char)((int)(uval_4 + (int)short_val) / 0x55) * '\x03' + '\x01';
        uval_2 = move_process_map_subtile_0b28e8();
        *(undefined2 *)(extraout_ECX_00 + 4) = uval_2;
        slab_coord_2 = creature_fn_0827fc();
        if (slab_coord_2 != '\0') {
          return 1;
        }
        return 0;
      }
      local_24 = local_24 + 1;
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
    uval_4 = (uint)*(ushort *)(&g_bss_002d33c6 + uval_4 * 6);
  } while( true );
}

/******************************************************************************
 * Function : person_nav_outside_room_06509e (Original VA: 0x6509e, Ghidra: FUN_0006509e)
 * Prototype: undefined8 person_nav_outside_room_06509e(void);
 * Address  : 0x6509e (Size: 251 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp lines 1679
 * Purpose  : String 'Cannot nav outside room'
 * Callers  : 0 -> 
 * Callees  : 3 -> person_process_slabmap_tile_064ea4, move_update_creature_control_0b3b58, LbErrorLog
 ******************************************************************************/
undefined8 person_nav_outside_room_06509e(void)

{
  short short_val;
  int thing;
  int val;
  uint uval;
  undefined4 arg_edx;
  
  uval = (uint)CONCAT11(*(undefined1 *)(thing + 0x10),*(undefined1 *)(thing + 0xe));
  if (((*(byte *)((int)&g_map_subtiles + uval * 5) & 2) != 0) &&
     (*(short *)(&g_bss_002ddd1c +
                (uint)(byte)(&g_bss_002d33c8)
                            [((&g_subtile_to_slab_lut)[uval % 0x100] +
                             (&g_subtile_to_slab_lut)[(int)uval >> 8] * 0x55) * 6] * 0x45) ==
      *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a))) { /* thing->ccontrol_idx */
    val = person_process_slabmap_tile_064ea4();
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2b1) = 0; /* thing->ccontrol_idx */
    if (val == 1) {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) {
        *(undefined1 *)(thing + 8) = 0x6b; /* thing->active_state */
        goto LAB_00064352;
      }
      LbErrorLog(); /* LbErrorLog("person.cpp", line 1679, "Cannot nav outside room") */
    }
    else if (val != -1) goto LAB_00064352;
  }
  person_fn_063b6d();
LAB_00064352:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : person_fn_065199 (Original VA: 0x65199, Ghidra: FUN_00065199)
 * Prototype: longlong person_fn_065199(void);
 * Address  : 0x65199 (Size: 234 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Purpose  : Module person.cpp procedure @ 0x065199
 * Callers  : 0 -> 
 * Callees  : 5 -> anger_update_creature_control_01017e, inits_allocate_dynamic_light_shot_0444a9, person_update_creature_control_064ae7, creature_update_creature_control_0856f8, draw_roll_action_random_08ccec
 ******************************************************************************/
longlong person_fn_065199(void)

{
  short *val;
  int arg_eax;
  int thing_ptr;
  int extraout_ECX;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  uStack_14 = 0x651b1;
  anger_update_creature_control_01017e();
  if (*(short *)(extraout_ECX + 0x282) != 0) {
    val = (short *)(extraout_ECX + 0x282);
    *val = *val + -1;
    if (*val != 0) {
      *(byte *)(arg_eax + 0x50) = *(byte *)(arg_eax + 0x50) | 1;
      *(byte *)(arg_eax + 0x4f) = *(byte *)(arg_eax + 0x4f) | 1;
      uStack_14 = 0x651e7;
      thing_ptr = inits_allocate_dynamic_light_shot_0444a9();
      if (thing_ptr != 0) {
        uStack_14 = 2;
        uStack_18 = 0;
        word_ptr = &uStack_1c;
        uStack_1c = 0xffffffff;
        draw_roll_action_random_08ccec();
        *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0xcf; /* thing->render_flags */
        *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 0x10; /* thing->render_flags */
      }
      return (ulonglong)*(uint *)((int)word_ptr + 4) << 0x20;
    }
  }
  *(byte *)(extraout_ECX + 0xad) = *(byte *)(extraout_ECX + 0xad) | 2;
  *(byte *)(arg_eax + 0x4f) = *(byte *)(arg_eax + 0x4f) & 0xfe;
  uStack_14 = 0x65272;
  creature_update_creature_control_0856f8();
  uStack_14 = 0x65279;
  person_update_creature_control_064ae7();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : person_update_creature_control_065283 (Original VA: 0x65283, Ghidra: FUN_00065283)
 * Prototype: undefined8 person_update_creature_control_065283(void);
 * Address  : 0x65283 (Size: 221 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> anger_update_creature_control_01017e, inits_allocate_dynamic_light_shot_0444a9, creature_update_creature_control_0856f8, draw_roll_action_random_08ccec, update_fn_0dd2f0
 ******************************************************************************/
undefined8 person_update_creature_control_065283(void)

{
  short *val;
  int thing;
  int thing_ptr;
  undefined4 uval;
  int extraout_ECX;
  undefined1 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  word_ptr_2 = (undefined4 *)&stack0xffffffec;
  word_ptr = &stack0xffffffec;
  thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uStack_18 = 0x6529c;
  anger_update_creature_control_01017e();
  if (*(short *)(thing_ptr + 0x282) != 0) {
    val = (short *)(thing_ptr + 0x282);
    *val = *val + -1;
    if (*val != 0) {
      *(byte *)(extraout_ECX + 0x50) = *(byte *)(extraout_ECX + 0x50) | 1;
      *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) | 1;
      uStack_18 = 0x652d0;
      thing_ptr = inits_allocate_dynamic_light_shot_0444a9();
      if (thing_ptr != 0) {
        uStack_18 = 2;
        uStack_1c = 0;
        word_ptr_2 = &uStack_20;
        uStack_20 = 0xffffffff;
        update_fn_0dd2f0();
        draw_roll_action_random_08ccec();
        *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0xcf; /* thing->render_flags */
        *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 0x10; /* thing->render_flags */
      }
      uval = 0;
      word_ptr = (undefined1 *)word_ptr_2;
      goto LAB_00064358;
    }
  }
  *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) & 0xfe;
  *(byte *)(thing_ptr + 0xab) = *(byte *)(thing_ptr + 0xab) & 0xfe;
  *(byte *)(thing_ptr + 0xad) = *(byte *)(thing_ptr + 0xad) & 0xfd;
  uStack_18 = 0x6535b;
  creature_update_creature_control_0856f8();
  uStack_18 = 0x6483b;
  person_fn_063b6d();
  uval = 1;
LAB_00064358:
  return CONCAT44(*(undefined4 *)(word_ptr + 8),uval);
}

/******************************************************************************
 * Function : person_update_creature_control_065360 (Original VA: 0x65360, Ghidra: FUN_00065360)
 * Prototype: longlong person_update_creature_control_065360(void);
 * Address  : 0x65360 (Size: 110 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_063b6d, sound_roll_unsynced_random_06edb9
 ******************************************************************************/
longlong person_update_creature_control_065360(void)

{
  short *val;
  int cctrl_ptr;
  int thing;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0x282) != 0) {
    val = (short *)(cctrl_ptr + 0x282);
    *val = *val + -1;
    if (*val != 0) {
      if (0x20 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x9a))) {
        sound_roll_unsynced_random_06edb9();
        *(int *)(cctrl_ptr + 0x9a) = g_game_turn;
      }
      return CONCAT44(arg_edx,1);
    }
  }
  *(int *)(cctrl_ptr + 0x4e) = g_game_turn;
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : person_update_creature_control_0653ce (Original VA: 0x653ce, Ghidra: FUN_000653ce)
 * Prototype: undefined8 person_update_creature_control_0653ce(void);
 * Address  : 0x653ce (Size: 122 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> person_fn_063b6d, sound_fn_06e538, sound_fn_06f865
 ******************************************************************************/
undefined8 person_update_creature_control_0653ce(void)

{
  short *val;
  int cctrl_ptr;
  int thing;
  int val_2;
  undefined4 uval;
  undefined4 *word_ptr;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  word_ptr = (undefined4 *)&stack0xffffffec;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uStack_18 = 0x653f0;
  val_2 = sound_fn_06f865();
  if (val_2 == 0) {
    uStack_18 = 0x100;
    uStack_1c = 6;
    uStack_20 = 1;
    word_ptr = &uStack_24;
    uStack_24 = 3;
    sound_fn_06e538();
  }
  if (*(short *)(cctrl_ptr + 0x282) != 0) {
    val = (short *)(cctrl_ptr + 0x282);
    *val = *val + -1;
    if (*val != 0) {
      uval = 1;
      goto LAB_00064358;
    }
  }
  *(undefined4 *)(cctrl_ptr + 0xb2) = g_game_turn;
  *(undefined4 *)((int)word_ptr + -4) = 0x65441;
  person_fn_063b6d();
  uval = 0;
LAB_00064358:
  return CONCAT44(*(undefined4 *)((int)word_ptr + 8),uval);
}

/******************************************************************************
 * Function : person_update_creature_control_065448 (Original VA: 0x65448, Ghidra: FUN_00065448)
 * Prototype: undefined8 person_update_creature_control_065448(void);
 * Address  : 0x65448 (Size: 144 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> instance_negative_instance_049bfc, sound_roll_unsynced_random_06edb9
 ******************************************************************************/
undefined8 person_update_creature_control_065448(void)

{
  short *val;
  int cctrl_ptr;
  int thing;
  undefined4 uval;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  uint uStack_18;
  
  word_ptr = &stack0xffffffec;
  word_ptr_2 = (uint *)&stack0xffffffec;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0x282) != 0) {
    val = (short *)(cctrl_ptr + 0x282);
    *val = *val + -1;
    if (*val != 0) {
      if (0x20 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x9a))) {
        uStack_18 = 0x65490;
        sound_roll_unsynced_random_06edb9();
        *(int *)(cctrl_ptr + 0x9a) = g_game_turn;
      }
      uStack_18 = (uint)*(byte *)(cctrl_ptr + 0xd2);
      if (uStack_18 == 0) {
        word_ptr_2 = &uStack_18;
        instance_negative_instance_049bfc();
      }
      uval = 1;
      word_ptr = (undefined1 *)word_ptr_2;
      goto LAB_00064358;
    }
  }
  if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
    uStack_18 = 0x65441;
    person_fn_063b6d();
  }
  uval = 0;
LAB_00064358:
  return CONCAT44(*(undefined4 *)(word_ptr + 8),uval);
}

