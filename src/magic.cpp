/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: magic.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 38
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : magic_update_creature_and_thing_04e4ad (Original VA: 0x4e4ad, Ghidra: FUN_0004e4ad)
 * Prototype: undefined8 magic_update_creature_and_thing_04e4ad(void);
 * Address  : 0x4e4ad (Size: 216 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> dungeon_update_player_dungeon_0235e8, input_game_action_048c77
 * Callees  : 2 -> sound_non_emitter_has_been_06e9ab, creature_update_creature_control_085890
 ******************************************************************************/
undefined8 magic_update_creature_and_thing_04e4ad(void)

{
  ushort cctrl_ptr;
  undefined2 uval;
  uint arg_eax;
  int dungeon_off;
  undefined4 arg_edx;
  int extraout_EDX;
  int extraout_EDX_00;
  
  dungeon_off = (arg_eax & 0xffff) * 0x1508;
  if (*(int *)(&g_bss_002e0e11 + dungeon_off) == 0) {
    *(undefined4 *)(&g_bss_002e0e11 + dungeon_off) = g_game_turn;
    sound_non_emitter_has_been_06e9ab();
  }
  else {
    *(undefined4 *)(&g_bss_002e0e11 + dungeon_off) = 0;
  }
  cctrl_ptr = (&g_bss_002e05b6)[(arg_eax & 0xffff) * 0xa84];
  while (g_thing_ptrs < (&g_thing_ptrs)[cctrl_ptr]) {
    uval = creature_update_creature_control_085890();
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uval;
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX + 100)] + 0x1f);
  }
  cctrl_ptr = (&g_bss_002e05b8)[(arg_eax & 0xffff) * 0xa84];
  while (g_thing_ptrs < (&g_thing_ptrs)[cctrl_ptr]) {
    uval = creature_update_creature_control_085890();
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX_00 + 100)] + 0xc4) = uval;
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX_00 + 100)] + 0x1f);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : magic_update_player_dungeon_04e585 (Original VA: 0x4e585, Ghidra: FUN_0004e585)
 * Prototype: undefined4 magic_update_player_dungeon_04e585(void);
 * Address  : 0x4e585 (Size: 136 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 2 -> instance_fn_049eff, creature_process_map_subtile_085450
 ******************************************************************************/
undefined4 magic_update_player_dungeon_04e585(void)

{
  uint arg_eax;
  int val;
  int extraout_ECX;
  int dungeon_off;
  
  if (((&g_bss_0019d578)[(arg_eax & 0xffff) * 0x4ef] != '\x03') &&
     (dungeon_off = (arg_eax & 0xffff) * 0x1508,
     10 < (uint)(g_game_turn - *(int *)(&g_bss_002e1a37 + dungeon_off)))) {
    val = creature_process_map_subtile_085450();
    if (val != 0) {
      *(undefined2 *)(&g_player_influenced_thing_idx + extraout_ECX) = *(undefined2 *)(val + 0x1b);
      *(undefined4 *)(&g_bss_0019d508 + extraout_ECX) = *(undefined4 *)(val + 9);
      instance_fn_049eff();
      *(int *)(&g_bss_002e17dc + dungeon_off) = *(int *)(&g_bss_002e17dc + dungeon_off) + 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : magic_update_player_dungeon_04e60d (Original VA: 0x4e60d, Ghidra: FUN_0004e60d)
 * Prototype: undefined4 magic_update_player_dungeon_04e60d(void);
 * Address  : 0x4e60d (Size: 98 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> input_game_action_048c77
 * Callees  : 1 -> instance_fn_049eff
 ******************************************************************************/
undefined4 magic_update_player_dungeon_04e60d(void)

{
  uint arg_eax;
  int player_off;
  int extraout_ECX;
  int arg_edx;
  
  player_off = (arg_eax & 0xffff) * 0x4ef;
  if ((((&g_bss_0019d578)[player_off] != '\x03') &&
      (10 < (uint)(g_game_turn - *(int *)(&g_bss_002e1a37 + (arg_eax & 0xffff) * 0x1508)))) &&
     (arg_edx != 0)) {
    *(undefined2 *)(&g_player_influenced_thing_idx + player_off) = *(undefined2 *)(arg_edx + 0x1b);
    *(undefined4 *)(&g_bss_0019d508 + player_off) = *(undefined4 *)(arg_edx + 9);
    instance_fn_049eff();
    *(int *)(&g_bss_002e17dc + extraout_ECX) = *(int *)(&g_bss_002e17dc + extraout_ECX) + 1;
  }
  return 0;
}

/******************************************************************************
 * Function : magic_process_thing_entity_04e66f (Original VA: 0x4e66f, Ghidra: FUN_0004e66f)
 * Prototype: undefined4 magic_process_thing_entity_04e66f(void);
 * Address  : 0x4e66f (Size: 350 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 4 -> dungeon_remove_reserve_023868, magic_update_player_dungeon_04fc98, moodneed_fn_051374, sound_fn_06e538
 ******************************************************************************/
undefined4 magic_process_thing_entity_04e66f(void)

{
  int val;
  uint arg_eax;
  int val_2;
  undefined1 arg_dl;
  int val_3;
  int val_4;
  undefined1 arg_bl;
  int dungeon_off;
  
  dungeon_off = (arg_eax & 0xff) * 0x1508;
  if (*(short *)(&g_bss_002e0b61 + dungeon_off) == 0) {
    dungeon_off = dungeon_remove_reserve_023868();
    if (-1 < dungeon_off) {
      magic_update_player_dungeon_04fc98();
      sound_fn_06e538(3,0,3,0x100);
      return 1;
    }
    if (&g_players + (arg_eax & 0xff) * 0x4ef == &g_players + g_my_player_word._3_1_ * 0x4ef) {
      moodneed_fn_051374();
    }
  }
  else {
    val_3 = *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) >> 0x1f;
    val_3 = (*(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) + val_3 * -4) -
            (uint)(val_3 << 1 < 0);
    val_4 = val_3 >> 0x1f;
    val_4 = ((val_3 >> 2) + val_4 * -4) - (uint)(val_4 << 1 < 0);
    val_2 = val_4 >> 2;
    val_3 = g_game_turn - *(int *)(&g_bss_002e0b5d + dungeon_off);
    if (val_3 < 0) {
      val_3 = 0;
    }
    else if (val_2 < val_3) {
      val_3 = val_2;
    }
    val = *(int *)(&g_data_0018f82f + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
    *(int *)(&g_bss_002e0b5d + dungeon_off) =
         g_game_turn - *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
    *(int *)(&g_bss_002e0b5d + dungeon_off) =
         *(int *)(&g_bss_002e0b5d + dungeon_off) -
         (val - val_3 / (int)(CONCAT44(val_4 >> 0x1f,val_2) / (longlong)val));
    if (g_game_turn - *(int *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e0b61 + dungeon_off)] + 9) <
        *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4)) {
      (&g_bss_002e0593)[dungeon_off] = (&g_bss_002e0593)[dungeon_off] | 4;
      (&g_bss_002e0b64)[dungeon_off] = arg_dl;
      (&g_bss_002e0b65)[dungeon_off] = arg_bl;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : magic_update_player_dungeon_04e7cd (Original VA: 0x4e7cd, Ghidra: FUN_0004e7cd)
 * Prototype: void magic_update_player_dungeon_04e7cd(void);
 * Address  : 0x4e7cd (Size: 143 bytes)
 * Module   : magic.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> magic_remove_spell_player_as_04fdac
 * Callees  : 0 -> 
 ******************************************************************************/
void magic_update_player_dungeon_04e7cd(void)

{
  int val;
  int arg_eax;
  int dungeon_off;
  int val_2;
  int val_3;
  int val_4;
  
  dungeon_off = arg_eax * 0x1508;
  val_3 = *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) >> 0x1f;
  val_3 = (*(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) + val_3 * -4) -
          (uint)(val_3 << 1 < 0);
  val_4 = val_3 >> 0x1f;
  val_4 = ((val_3 >> 2) + val_4 * -4) - (uint)(val_4 << 1 < 0);
  val_2 = val_4 >> 2;
  val_3 = g_game_turn - *(int *)(&g_bss_002e0b5d + dungeon_off);
  if (val_3 < 0) {
    val_3 = 0;
  }
  else if (val_2 < val_3) {
    val_3 = val_2;
  }
  val = *(int *)(&g_data_0018f82f + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
  *(int *)(&g_bss_002e0b5d + dungeon_off) =
       g_game_turn - *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
  *(int *)(&g_bss_002e0b5d + dungeon_off) =
       *(int *)(&g_bss_002e0b5d + dungeon_off) -
       (val - val_3 / (int)(CONCAT44(val_4 >> 0x1f,val_2) / (longlong)val));
  return;
}

/******************************************************************************
 * Function : magic_update_creature_and_thing_04e85c (Original VA: 0x4e85c, Ghidra: FUN_0004e85c)
 * Prototype: undefined4 magic_update_creature_and_thing_04e85c(undefined4 param_1);
 * Address  : 0x4e85c (Size: 678 bytes)
 * Module   : magic.cpp [direct_file_string_xref]
 * OrigLine : magic.cpp lines 443
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 11 -> inits_allocate_light_object_043f07, magic_update_slab_subtile_columns_05003d, person_fn_063b6d, person_external_change_state_but_064a5f, sound_non_emitter_has_been_06e9ab, creature_fn_0827fc, move_process_map_subtile_0b28e8, move_update_creature_control_0b3b58 ...
 ******************************************************************************/
undefined4 magic_update_creature_and_thing_04e85c(undefined4 param_1)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  byte arg_al;
  char ch;
  byte flag;
  undefined2 uval;
  int val;
  undefined4 uval_2;
  undefined1 arg_cl;
  int extraout_ECX;
  short arg_dx;
  int extraout_EDX;
  undefined1 arg_bl;
  int dungeon_off;
  uint uval_3;
  undefined1 local_14;
  
  uval_3 = (uint)arg_al;
  dungeon_off = uval_3 * 0x1508;
  ch = magic_update_slab_subtile_columns_05003d(param_1,arg_dx * 0x100 + 0x80);
  if (ch == '\0') {
    if (arg_al == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      sound_non_emitter_has_been_06e9ab();
    }
LAB_0004eafb:
    uval_2 = 0;
  }
  else {
    local_14 = (undefined1)arg_dx;
    if (((&g_bss_002e0e0d)[uval_3 * 0x542] == 0) && (*(short *)(&g_bss_0019d504 + uval_3 * 0x4ef) == 0)) {
      val = inits_allocate_light_object_043f07();
      if (val == 0) {
        LbErrorLog(); /* LbErrorLog("magic.cpp", line 443, g_log_buf) */
        goto LAB_0004eafb;
      }
      (&g_bss_002e0e0d)[uval_3 * 0x542] = g_game_turn;
      (&g_bss_002e0e0c)[dungeon_off] = arg_cl;
      (&g_bss_002e0e0a)[dungeon_off] = local_14;
      (&g_bss_002e0e0b)[dungeon_off] = arg_bl;
      *(undefined2 *)(&g_bss_0019d504 + uval_3 * 0x4ef) = *(undefined2 *)(val + 0x1b);
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(val + 0x11) = uval;
      navigate_fn_0c3780();
    }
    else {
      (&g_bss_002e0e0d)[uval_3 * 0x542] = g_game_turn;
      (&g_bss_002e0e0a)[dungeon_off] = local_14;
      (&g_bss_002e0e0b)[dungeon_off] = arg_bl;
      object_fn_0c38a4();
      cctrl_ptr = (&g_bss_002e05b6)[extraout_EDX * 0xa84];
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
        if (((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr[7] != 0x43)) &&
           ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 8) != 0)) { /* thing->ccontrol_idx */
          if (thing_ptr[7] == 0xe) {
            flag = thing_ptr[8];
          }
          else {
            flag = thing_ptr[7];
          }
          if ((&g_data_0018c4c8)[(uint)flag * 0x29] == '\0') {
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
              if (flag != 0x74) goto LAB_0004ea52;
            }
          }
          ch = creature_fn_0827fc();
          if (ch == '\0') {
            person_fn_063b6d();
            *(byte *)(extraout_ECX + 0xad) = *(byte *)(extraout_ECX + 0xad) & 0xf7;
          }
          else {
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
                ch = person_external_change_state_but_064a5f();
                if (ch == '\0') {
                  person_fn_063b6d();
                  goto LAB_0004ea52;
                }
              }
            }
            move_update_creature_control_0b3b58();
            thing_ptr[8] = 0x27;
          }
        }
LAB_0004ea52:
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
      }
    }
    uval_2 = 1;
  }
  return uval_2;
}

/******************************************************************************
 * Function : magic_update_creature_and_thing_04eb02 (Original VA: 0x4eb02, Ghidra: FUN_0004eb02)
 * Prototype: undefined8 magic_update_creature_and_thing_04eb02(void);
 * Address  : 0x4eb02 (Size: 571 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> dungeon_update_player_dungeon_0235e8
 * Callees  : 8 -> anger_fn_010434, dungeon_remove_reserve_023868, magic_update_creature_and_thing_04ed3d, moodneed_fn_051374, person_external_change_state_but_064a5f, creature_fn_0827fc, move_update_creature_control_0b3b58, update_fn_0dc440
 ******************************************************************************/
undefined8 magic_update_creature_and_thing_04eb02(void)

{
  ushort dungeon_off;
  byte *thing_ptr;
  byte flag;
  char ch;
  short short_val;
  uint arg_eax;
  int cctrl_ptr;
  int thing_ptr_2;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  
  cctrl_ptr = arg_eax * 0x1508;
  val = g_game_turn - (&g_bss_002e0e0d)[arg_eax * 0x542];
  if ((val % g_bss_002eaffd == 0) &&
     (((&g_slabmap)
       [((&g_subtile_to_slab_lut)[(byte)(&g_bss_002e0e0a)[cctrl_ptr]] +
        (&g_subtile_to_slab_lut)[(byte)(&g_bss_002e0e0b)[cctrl_ptr]] * 0x55) * 6] & 7) != arg_eax)) {
    thing_ptr_2 = dungeon_remove_reserve_023868();
    val = extraout_ECX;
    if (thing_ptr_2 < 0) {
      if (arg_eax == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
      thing_ptr_2 = magic_update_creature_and_thing_04ed3d();
      goto LAB_0004e855;
    }
  }
  thing_ptr_2 = val / 0x10;
  if (val % 0x10 == 0) {
    val = *(int *)(&g_bss_002eb001 + (uint)(byte)(&g_bss_002e0e0c)[cctrl_ptr] * 4);
    short_val = (ushort)(byte)(&g_bss_002e0e0a)[cctrl_ptr] * 0x100 + 0x80;
    thing_ptr_2 = (uint)(byte)(&g_bss_002e0e0b)[cctrl_ptr] * 0x100 + 0x80;
    dungeon_off = (&g_bss_002e05b6)[arg_eax * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[dungeon_off], g_thing_ptrs < thing_ptr) {
      if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr[7] != 0x43)) {
        cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
        if ((*(byte *)(cctrl_ptr + 0xad) & 8) == 0) {
LAB_0004ec33:
          if (thing_ptr[7] == 0xe) {
            flag = thing_ptr[8];
          }
          else {
            flag = thing_ptr[7];
          }
          if ((&g_data_0018c4c8)[(uint)flag * 0x29] != '\0') {
            if ((*(byte *)(cctrl_ptr + 0xad) & 8) == 0) {
              thing_ptr_2 = update_fn_0dc440(short_val);
              if (val << 8 <= thing_ptr_2) goto LAB_0004ecd5;
            }
            if (thing_ptr[7] == 0x1a) {
              anger_fn_010434();
            }
            ch = creature_fn_0827fc();
            if (ch != '\0') {
              ch = person_external_change_state_but_064a5f();
              if (ch != '\0') {
                move_update_creature_control_0b3b58();
                thing_ptr[8] = 0x27;
                *(byte *)(cctrl_ptr + 0xad) = *(byte *)(cctrl_ptr + 0xad) | 8;
              }
            }
          }
        }
        else if ((*(byte *)(cctrl_ptr + 0xad) & 8) != 0) {
          if (thing_ptr[7] == 0xe) {
            flag = thing_ptr[8];
          }
          else {
            flag = thing_ptr[7];
          }
          if ((&g_data_0018c4c8)[(uint)flag * 0x29] != '\0') goto LAB_0004ec33;
        }
      }
LAB_0004ecd5:
      thing_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
      dungeon_off = *(ushort *)(thing_ptr_2 + 0x1f); /* thing->class_id */
    }
  }
LAB_0004e855:
  return CONCAT44(arg_edx,thing_ptr_2);
}

/******************************************************************************
 * Function : magic_update_creature_and_thing_04ed3d (Original VA: 0x4ed3d, Ghidra: FUN_0004ed3d)
 * Prototype: void magic_update_creature_and_thing_04ed3d(void);
 * Address  : 0x4ed3d (Size: 239 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 5 -> input_game_action_048c77, magic_update_creature_and_thing_04eb02, magic_remove_spell_player_as_04fdac, update_update_player_dungeon_0dd624, update_update_player_dungeon_0dd6c8
 * Callees  : 2 -> person_fn_063b6d, navigate_fn_0c3828
 ******************************************************************************/
void magic_update_creature_and_thing_04ed3d(void)

{
  byte *cctrl_ptr;
  ushort cctrl_ptr_2;
  byte flag;
  int arg_eax;
  int extraout_EDX;
  byte *extraout_EDX_00;
  byte *thing_ptr;
  
  if ((&g_bss_002e0e0d)[arg_eax * 0x542] != 0) {
    navigate_fn_0c3828();
    *(undefined4 *)(extraout_EDX + 0x884) = 0;
    cctrl_ptr_2 = (&g_bss_002e05b6)[arg_eax * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr_2], g_thing_ptrs < thing_ptr) {
      if (((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 8) != 0) && /* thing->ccontrol_idx */
           (cctrl_ptr = (byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad), /* thing->ccontrol_idx */
           *cctrl_ptr = *cctrl_ptr & 0xf7, (*thing_ptr & 0x10) == 0)) && ((thing_ptr[1] & 2) == 0)) &&
         (thing_ptr[7] != 0x43)) {
        if (thing_ptr[7] == 0xe) {
          flag = thing_ptr[8];
        }
        else {
          flag = thing_ptr[7];
        }
        if (flag != 0x8b) {
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
            if (flag != 0x74) goto LAB_0004edcb;
          }
          person_fn_063b6d();
          thing_ptr = extraout_EDX_00;
        }
      }
LAB_0004edcb:
      cctrl_ptr_2 = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_update_slab_subtile_columns_04ee2c (Original VA: 0x4ee2c, Ghidra: FUN_0004ee2c)
 * Prototype: void magic_update_slab_subtile_columns_04ee2c(void);
 * Address  : 0x4ee2c (Size: 350 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 5 -> dungeon_remove_reserve_023868, inits_update_player_dungeon_044dae, magic_update_slab_subtile_columns_05003d, moodneed_fn_051374, sound_non_emitter_has_been_06e9ab
 ******************************************************************************/
void magic_update_slab_subtile_columns_04ee2c(void)

{
  char arg_al;
  char ch;
  int val;
  int extraout_ECX;
  int subtile_x;
  uint thing_ptr;
  int subtile_y;
  undefined4 uval;
  
  uval = 0;
  ch = magic_update_slab_subtile_columns_05003d(0);
  if (ch == '\0') {
    if (arg_al == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      sound_non_emitter_has_been_06e9ab();
    }
  }
  else {
    thing_ptr = (*(uint *)((int)&g_map_subtiles +
                      ((&g_subtile_to_slab_lut)[subtile_x] * 3 + (&g_subtile_to_slab_lut)[subtile_y] * 0x300 + 0x101) * 5
                      + 1) & 0x3fffff) >> 0xb;
    while (((short)thing_ptr != 0 &&
           ((*(char *)((&g_thing_ptrs)[thing_ptr] + 0x1f) != '\x03' ||
            (*(char *)((&g_thing_ptrs)[thing_ptr] + 0x1a) != '.'))))) {
      thing_ptr = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr] + 2);
    }
    if ((short)thing_ptr == 0) {
      if (arg_al != g_neutral_player_number) {
        val = dungeon_remove_reserve_023868();
        if (val < 0) {
          if (arg_al != (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
            return;
          }
          moodneed_fn_051374();
          return;
        }
        *(int *)(&g_bss_002e17e0 + extraout_ECX * 0x1508) =
             *(int *)(&g_bss_002e17e0 + extraout_ECX * 0x1508) + 1;
      }
      inits_update_player_dungeon_044dae(uval,(*(short *)(&g_subtile_to_slab_lut + subtile_x) * 3 + 1) * 0x100,0);
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_update_slab_subtile_columns_04ef8a (Original VA: 0x4ef8a, Ghidra: FUN_0004ef8a)
 * Prototype: undefined4 magic_update_slab_subtile_columns_04ef8a(void);
 * Address  : 0x4ef8a (Size: 74 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> update_update_slab_subtile_columns_0df760
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 magic_update_slab_subtile_columns_04ef8a(void)

{
  char arg_al;
  uint slab_coord;
  int subtile_x;
  int subtile_y;
  
  if (((*(byte *)((int)&g_map_subtiles + (subtile_y * 0x100 + subtile_x) * 5) & 0x10) == 0) &&
     ((arg_al == g_neutral_player_number ||
      (slab_coord = CONCAT11((&g_slabmap)
                        [((&g_subtile_to_slab_lut)[subtile_x] + (&g_subtile_to_slab_lut)[subtile_y] * 0x55) * 6],arg_al) &
               0xffff07ff, (char)(slab_coord >> 8) == (char)slab_coord)))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : magic_update_creature_and_thing_04efd4 (Original VA: 0x4efd4, Ghidra: FUN_0004efd4)
 * Prototype: void magic_update_creature_and_thing_04efd4(void);
 * Address  : 0x4efd4 (Size: 333 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_control_packet
 * Callees  : 5 -> effect_allocate_light_effect_024998, magic_update_player_view_state_04fd30, person_initialise_state_but_thing_064b0c, sound_non_emitter_has_been_06e9ab, move_fn_0b3b10
 ******************************************************************************/
void magic_update_creature_and_thing_04efd4(void)

{
  ushort cctrl_ptr;
  byte flag;
  uint arg_eax;
  int val;
  byte *extraout_ECX;
  byte *thing_ptr;
  int dungeon_off;
  
  dungeon_off = (arg_eax & 0xff) * 0x1508;
  if (*(int *)(&g_bss_002e0e15 + dungeon_off) == 0) {
    val = magic_update_player_view_state_04fd30();
    if (val != 0) {
      cctrl_ptr = (&g_bss_002e05b6)[(arg_eax & 0xff) * 0xa84];
      *(undefined4 *)(&g_bss_002e0e15 + dungeon_off) = g_game_turn;
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
        if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
          if (thing_ptr[7] == 0xe) {
            flag = thing_ptr[8];
          }
          else {
            flag = thing_ptr[7];
          }
          if (flag != 0x2b) {
            if (thing_ptr[7] == 0xe) {
              flag = thing_ptr[8];
            }
            else {
              flag = thing_ptr[7];
            }
            if (flag != 0x2a) {
              if (thing_ptr[7] == 0xe) {
                flag = thing_ptr[8];
              }
              else {
                flag = thing_ptr[7];
              }
              if (flag != 0x29) {
                if (thing_ptr[7] == 0xe) {
                  flag = thing_ptr[8];
                }
                else {
                  flag = thing_ptr[7];
                }
                if ((flag != 0x28) && (thing_ptr[7] != 0x43)) {
                  effect_allocate_light_effect_024998();
                  move_fn_0b3b10();
                  person_initialise_state_but_thing_064b0c();
                  *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x82) =
                       0xffffffff;
                  thing_ptr = extraout_ECX;
                }
              }
            }
          }
        }
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
      }
      sound_non_emitter_has_been_06e9ab();
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_update_creature_and_thing_04f121 (Original VA: 0x4f121, Ghidra: FUN_0004f121)
 * Prototype: void magic_update_creature_and_thing_04f121(void);
 * Address  : 0x4f121 (Size: 116 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> dungeon_update_player_dungeon_0235e8
 * Callees  : 1 -> person_fn_063b6d
 ******************************************************************************/
void magic_update_creature_and_thing_04f121(void)

{
  ushort cctrl_ptr;
  char ch;
  uint arg_eax;
  int dungeon_off;
  uint extraout_EDX;
  uint thing_ptr;
  
  dungeon_off = (arg_eax & 0xffff) * 0x1508;
  if (g_bss_002ed40b < (uint)(g_game_turn - *(int *)(&g_bss_002e0e15 + dungeon_off))) {
    *(undefined4 *)(&g_bss_002e0e15 + dungeon_off) = 0;
    cctrl_ptr = (&g_bss_002e05b6)[(arg_eax & 0xffff) * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == '4') {
        person_fn_063b6d();
        thing_ptr = extraout_EDX;
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_update_creature_and_thing_04f195 (Original VA: 0x4f195, Ghidra: FUN_0004f195)
 * Prototype: void magic_update_creature_and_thing_04f195(void);
 * Address  : 0x4f195 (Size: 551 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 11 -> dungeon_process_thing_entity_023e65, effect_allocate_light_effect_024998, inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0442ca, magic_update_player_view_state_04fd30, magic_update_slab_subtile_columns_05003d, sound_fn_06e538, sound_non_emitter_has_been_06e9ab ...
 ******************************************************************************/
void magic_update_creature_and_thing_04f195(void)

{
  byte arg_al;
  char ch;
  short short_val;
  int player_off;
  int thing_ptr;
  int arg_ecx;
  int extraout_ECX;
  byte *thing_ptr_2;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  short arg_dx;
  undefined1 local_20;
  
  ch = magic_update_slab_subtile_columns_05003d(0,arg_dx * 0x100 + 0x80,0);
  if ((ch == '\0') || (player_off = magic_update_player_view_state_04fd30(), player_off == 0)) {
    if (arg_al == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      sound_non_emitter_has_been_06e9ab();
    }
  }
  else {
    player_off = inits_allocate_dynamic_light_shot_0442ca();
    if (player_off != 0) {
      short_val = move_process_map_subtile_0b28e8();
      *(short *)(extraout_ECX + 0x11) = short_val + 0x80;
      local_20 = (undefined1)arg_ecx;
      *(undefined1 *)(extraout_ECX + 0x19) = local_20;
      *(undefined1 *)(extraout_ECX + 0x16) = 2;
      *(undefined4 *)(&g_bss_002e142d + *(char *)(extraout_ECX + 6) * 0x1508) = 0x100;
      player_off = *(int *)(&g_bss_002eb131 + arg_ecx * 4);
      dungeon_process_thing_entity_023e65();
      thing_ptr = inits_allocate_light_object_043f07();
      if (thing_ptr != 0) {
        *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 1; /* thing->render_flags */
        *(undefined1 *)(thing_ptr + 0x13) = local_20; /* thing->anim_sprite */
      }
      for (thing_ptr_2 = (&g_thing_ptrs)[g_bss_002e6eb6]; g_thing_ptrs < thing_ptr_2;
          thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 0x67)]) {
        if (((((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) &&
            ((int)(char)thing_ptr_2[6] != (uint)arg_al)) &&
           (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0xac) & 4) == 0 && /* thing->ccontrol_idx */
            (thing_ptr = update_fn_0dc440(), thing_ptr_2 = extraout_ECX_00, thing_ptr < (player_off << 8) / 2)))) {
          creature_fn_081c10();
          thing_ptr_2 = extraout_ECX_01;
        }
      }
      effect_allocate_light_effect_024998();
      sound_fn_06e538(3,0,2,0x100);
      *(undefined4 *)(&g_bss_0019d5ab + (uint)arg_al * 0x4ef) = g_game_turn;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_fn_04f3bc (Original VA: 0x4f3bc, Ghidra: FUN_0004f3bc)
 * Prototype: void magic_fn_04f3bc(void);
 * Address  : 0x4f3bc (Size: 97 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Module magic.cpp procedure @ 0x04f3bc
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 4 -> magic_update_player_view_state_04fd30, sound_fn_06e538, spell_update_creature_control_0717de, spell_update_creature_control_0720ce
 ******************************************************************************/
void magic_fn_04f3bc(void)

{
  int val;
  
  val = spell_update_creature_control_0720ce();
  if (val == 0) {
    val = magic_update_player_view_state_04fd30();
    if (val != 0) {
      sound_fn_06e538(3,0,2,0x100);
      spell_update_creature_control_0717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_update_player_view_state_04f41d (Original VA: 0x4f41d, Ghidra: FUN_0004f41d)
 * Prototype: void magic_update_player_view_state_04f41d(void);
 * Address  : 0x4f41d (Size: 212 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 7 -> magic_update_player_view_state_04fd30, magic_update_slab_subtile_columns_05003d, magic_update_creature_control_0502a9, sound_fn_06e538, sound_non_emitter_has_been_06e9ab, spell_update_creature_control_0717de, spell_update_creature_control_0720ce
 ******************************************************************************/
void magic_update_player_view_state_04f41d(void)

{
  char arg_al;
  char ch;
  int player_off;
  int arg_edx;
  
  ch = magic_update_slab_subtile_columns_05003d(0);
  if ((ch == '\0') || (player_off = magic_update_creature_control_0502a9(), player_off == 0)) {
    if (arg_al == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      sound_non_emitter_has_been_06e9ab();
    }
  }
  else {
    player_off = spell_update_creature_control_0720ce();
    if (((player_off == 0) && (player_off = magic_update_player_view_state_04fd30(), player_off != 0)) &&
       ((*(char *)(arg_edx + 0x1f) != '\x05' || (*(char *)(arg_edx + 0x1a) != '\a')))) {
      sound_fn_06e538(3,0,2,0x100);
      spell_update_creature_control_0717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_fn_04f4f1 (Original VA: 0x4f4f1, Ghidra: FUN_0004f4f1)
 * Prototype: void magic_fn_04f4f1(void);
 * Address  : 0x4f4f1 (Size: 97 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Module magic.cpp procedure @ 0x04f4f1
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 4 -> magic_update_player_view_state_04fd30, sound_fn_06e538, spell_update_creature_control_0717de, spell_update_creature_control_0720ce
 ******************************************************************************/
void magic_fn_04f4f1(void)

{
  int val;
  
  val = spell_update_creature_control_0720ce();
  if (val == 0) {
    val = magic_update_player_view_state_04fd30();
    if (val != 0) {
      sound_fn_06e538(3,0,2,0x100);
      spell_update_creature_control_0717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_fn_04f552 (Original VA: 0x4f552, Ghidra: FUN_0004f552)
 * Prototype: void magic_fn_04f552(void);
 * Address  : 0x4f552 (Size: 97 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Module magic.cpp procedure @ 0x04f552
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 4 -> magic_update_player_view_state_04fd30, sound_fn_06e538, spell_update_creature_control_0717de, spell_update_creature_control_0720ce
 ******************************************************************************/
void magic_fn_04f552(void)

{
  int val;
  
  val = spell_update_creature_control_0720ce();
  if (val == 0) {
    val = magic_update_player_view_state_04fd30();
    if (val != 0) {
      sound_fn_06e538(3,0,2,0x100);
      spell_update_creature_control_0717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_update_creature_control_04f5b3 (Original VA: 0x4f5b3, Ghidra: FUN_0004f5b3)
 * Prototype: void magic_update_creature_control_04f5b3(void);
 * Address  : 0x4f5b3 (Size: 139 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 3 -> magic_update_player_view_state_04fd30, sound_fn_06e538, spell_update_creature_control_0717de
 ******************************************************************************/
void magic_update_creature_control_04f5b3(void)

{
  int val;
  int arg_edx;
  
  if ((int)*(short *)(arg_edx + 0x5e) <
      (int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(arg_edx + 0x1a) * 0x73] *
            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x23) * 0x23) / 100 +
      (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(arg_edx + 0x1a) * 0x73]) {
    val = magic_update_player_view_state_04fd30();
    if (val != 0) {
      sound_fn_06e538(3,0,2,0x100);
      spell_update_creature_control_0717de();
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e (Original VA: 0x4f63e, Ghidra: FUN_0004f63e)
 * Prototype: void magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e(void);
 * Address  : 0x4f63e (Size: 576 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : String 'XXXXOXXXXXXXX XXXXXXXO OXXXXOXO OXOXXOXO OXOXXXX   XXXX X   '
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 8 -> build_process_map_subtile_014afe, dungeon_update_slab_subtile_columns_023de2, magic_update_player_view_state_04fd30, magic_update_slab_subtile_columns_05003d, sound_non_emitter_has_been_06e9ab, creature_process_map_subtile_082828, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
void magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e(void)

{
  char arg_al;
  char ch;
  int val;
  uint uval;
  int arg_ecx;
  int subtile_x;
  int subtile_y;
  int *int_ptr;
  bool flag;
  int aiStack_6c [5];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  int local_20;
  
  int_ptr = aiStack_6c + 2;
  aiStack_6c[2] = 0;
  ch = magic_update_slab_subtile_columns_05003d();
  if (ch == '\0') {
    ch = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
    int_ptr = aiStack_6c + 2;
  }
  else {
    val = magic_update_player_view_state_04fd30();
    if (val == 0) {
      return;
    }
    local_54 = (&g_subtile_to_slab_lut)[subtile_x] + -1;
    local_2c = (&g_subtile_to_slab_lut)[subtile_y] + -1;
    local_58 = local_2c * 0x1fe;
    local_44 = local_2c * 0xf00;
    local_38 = local_54 * 0xf;
    aiStack_6c[4] = local_54 * 6;
    aiStack_6c[3] = local_54 * 3;
    local_48 = (&g_subtile_to_slab_lut)[subtile_x] + 2;
    local_20 = 0;
    local_40 = arg_ecx * 9;
    local_4c = (&g_subtile_to_slab_lut)[subtile_y] + 2;
    for (; local_2c < local_4c; local_2c = local_2c + 1) {
      if ((local_2c < 1) || (0x54 < local_2c)) {
        local_20 = local_20 + 3;
      }
      else {
        local_3c = aiStack_6c[4] + local_58;
        local_28 = local_20 + local_40;
        val = local_38 + local_44;
        for (local_50 = local_54; local_50 < local_48; local_50 = local_50 + 1) {
          if ((((0 < local_50) && (local_50 < 0x55)) &&
              ((*(byte *)((int)&g_map_subtiles + val) & 0x10) != 0)) &&
             (((*(byte *)((int)&g_map_subtiles + val) & 0x43) == 0 &&
              (uval = (uint)(byte)(&g_slabmap_base)[local_3c], uval != 0)))) {
            if (s_XXXXOXXXXXXXX_XXXXXXXO_OXXXXOXO_O_0017c924[local_28] == 'O') {
              if ((&g_data_001921cf)[uval * 0x16] != '\x03') {
                if (uval != 2) {
                  flag = uval == 3;
                  goto LAB_0004f705;
                }
                goto LAB_0004f707;
              }
              *(undefined4 *)((int)int_ptr + -4) = 0;
              *(undefined4 *)((int)int_ptr + -8) = 0x4f7b8;
              slab_attempt_place_animating_slab_0d7688();
              *(undefined4 *)((int)int_ptr + -8) = 0x4f7c5;
              slab_process_slabmap_tile_0da6fc();
              int_ptr = (int *)((int)int_ptr + -4);
            }
            else {
              flag = s_XXXXOXXXXXXXX_XXXXXXXO_OXXXXOXO_O_0017c924[local_28] == ' ';
LAB_0004f705:
              if (flag) {
LAB_0004f707:
                *(undefined4 *)((int)int_ptr + -4) = 0x4f717;
                build_process_map_subtile_014afe();
                *(undefined4 *)((int)int_ptr + -4) = 0x4f724;
                creature_process_map_subtile_082828();
                *(undefined4 *)((int)int_ptr + -4) = 0x4f731;
                dungeon_update_slab_subtile_columns_023de2();
              }
            }
          }
          local_3c = local_3c + 6;
          local_28 = local_28 + 1;
          local_20 = local_20 + 1;
          val = val + 0xf;
        }
      }
      local_58 = local_58 + 0x1fe;
      local_44 = local_44 + 0xf00;
    }
    ch = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
  }
  if (arg_al == ch) {
    *(undefined4 *)((int)int_ptr + -4) = 0x4f87a;
    sound_non_emitter_has_been_06e9ab();
  }
  return;
}

/******************************************************************************
 * Function : magic_update_creature_control_04f87e (Original VA: 0x4f87e, Ghidra: FUN_0004f87e)
 * Prototype: void magic_update_creature_control_04f87e(void);
 * Address  : 0x4f87e (Size: 177 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> input_game_action_048c77, magic_process_thing_entity_0504ff, process_players_dungeon_command_packet
 * Callees  : 6 -> magic_update_player_view_state_04fd30, magic_update_slab_subtile_columns_05003d, magic_update_creature_control_0502a9, sound_fn_06e538, spell_update_creature_control_0717de, spell_update_creature_control_0720ce
 ******************************************************************************/
void magic_update_creature_control_04f87e(void)

{
  char arg_al;
  char ch;
  int player_off;
  int arg_edx;
  
  ch = magic_update_slab_subtile_columns_05003d(0);
  if ((ch == '\0') || (player_off = magic_update_creature_control_0502a9(), player_off == 0)) {
    if (arg_al == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      sound_non_emitter_has_been_06e9ab();
    }
    return;
  }
  player_off = spell_update_creature_control_0720ce();
  if (player_off != 0) {
    return;
  }
  player_off = magic_update_player_view_state_04fd30();
  if (player_off == 0) {
    return;
  }
  spell_update_creature_control_0717de();
  *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xb6) = arg_al;
  sound_fn_06e538(3,0,3,0x100);
  return;
}

/******************************************************************************
 * Function : magic_update_creature_and_thing_04f92f (Original VA: 0x4f92f, Ghidra: FUN_0004f92f)
 * Prototype: void magic_update_creature_and_thing_04f92f(void);
 * Address  : 0x4f92f (Size: 300 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 3 -> magic_update_player_view_state_04fd30, sound_non_emitter_has_been_06e9ab, creature_how_hero_have_tend_08608c
 ******************************************************************************/
void magic_update_creature_and_thing_04f92f(void)

{
  uint thing_ptr;
  int cctrl_ptr;
  uint thing_ptr_2;
  int extraout_ECX;
  int *int_ptr;
  byte flag;
  int aiStack_30 [5];
  byte local_1c;
  
  flag = 0;
  aiStack_30[3] = g_game_turn + g_bss_002ee894;
  if ((g_bss_002ed402 == 0) && (aiStack_30[4] = aiStack_30[3], cctrl_ptr = magic_update_player_view_state_04fd30(), cctrl_ptr != 0)) {
    g_bss_002ed402 = g_game_turn;
    g_bss_002ed40a = local_1c;
    g_bss_002ee89c = *(undefined4 *)
                    ((&g_thing_ptrs)[(ushort)(&g_dungeons)[extraout_ECX * 0xa84]] + 0xd);
    (&g_bss_002ee8a0)[(uint)flag * -4] =
         *(undefined2 *)
          ((&g_thing_ptrs)[(ushort)(&g_dungeons)[extraout_ECX * 0xa84]] + 0x11 + (uint)flag * -8)
    ;
    thing_ptr_2 = (&g_thing_ptrs)[g_bss_002e6eb6];
    int_ptr = aiStack_30 + 3;
    while (g_thing_ptrs < thing_ptr_2) {
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 0x67)];
      cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)]; /* thing->ccontrol_idx */
      if ((*(byte *)(cctrl_ptr + 0xad) & 2) == 0) {
        if ((int)*(char *)(thing_ptr_2 + 6) == (uint)local_1c) { /* thing->owner */
          *(int *)(cctrl_ptr + 0x2ef) = aiStack_30[3];
          aiStack_30[3] = aiStack_30[3] + g_bss_002ed40f;
          thing_ptr_2 = thing_ptr;
        }
        else {
          *(int *)(cctrl_ptr + 0x2ef) = aiStack_30[3];
          aiStack_30[4] = aiStack_30[4] + g_bss_002ed413;
          thing_ptr_2 = thing_ptr;
        }
      }
      else {
        *(undefined4 *)((int)int_ptr + -4) = 0;
        *(undefined4 *)((int)int_ptr + -8) = 1;
        *(undefined4 *)((int)int_ptr + -0xc) = 0x4fa32;
        creature_how_hero_have_tend_08608c();
        thing_ptr_2 = thing_ptr;
        int_ptr = (int *)((int)int_ptr + -8);
      }
    }
    cctrl_ptr = aiStack_30[4];
    if (aiStack_30[4] <= aiStack_30[3]) {
      cctrl_ptr = aiStack_30[3];
    }
    g_bss_002ed406 = cctrl_ptr + g_bss_002ee898;
    *(undefined4 *)((int)int_ptr + -4) = 0x4fa56;
    sound_non_emitter_has_been_06e9ab();
  }
  return;
}

/******************************************************************************
 * Function : magic_process_thing_entity_04fa5b (Original VA: 0x4fa5b, Ghidra: FUN_0004fa5b)
 * Prototype: int magic_process_thing_entity_04fa5b(void);
 * Address  : 0x4fa5b (Size: 150 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> newgui_update_player_dungeon_05542b
 * Callees  : 0 -> 
 ******************************************************************************/
int magic_process_thing_entity_04fa5b(void)

{
  int thing_ptr;
  byte arg_dl;
  int val;
  
  thing_ptr = 0;
  val = 0;
  if (4 < arg_dl) {
    if (arg_dl < 6) {
      if (*(ushort *)(&g_bss_002e0b61 + g_my_player_word._3_1_ * 0x1508) != 0) {
        thing_ptr = g_game_turn -
                *(int *)((&g_thing_ptrs)[*(ushort *)(&g_bss_002e0b61 + g_my_player_word._3_1_ * 0x1508)] +
                        9);
        val = *(int *)(&g_bss_002eafb5 +
                        (uint)(byte)(&g_bss_002e0b63)[g_my_player_word._3_1_ * 0x1508] * 4) + 8;
      }
    }
    else if ((arg_dl == 6) && ((&g_bss_002e0e0d)[g_my_player_word._3_1_ * 0x542] != 0)) {
      thing_ptr = g_game_turn - (&g_bss_002e0e0d)[g_my_player_word._3_1_ * 0x542];
      val = g_bss_002eaffd;
    }
  }
  if (val != 0) {
    return (thing_ptr << 8) / val;
  }
  return -1;
}

/******************************************************************************
 * Function : magic_update_player_dungeon_04faf1 (Original VA: 0x4faf1, Ghidra: FUN_0004faf1)
 * Prototype: int magic_update_player_dungeon_04faf1(void);
 * Address  : 0x4faf1 (Size: 231 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> object_picking_up_object_0c599c
 * Callees  : 3 -> inits_allocate_light_object_043f07, inits_allocate_dynamic_light_shot_0444a9, mapwho_fn_05102d
 ******************************************************************************/
int magic_update_player_dungeon_04faf1(void)

{
  int gui_btn;
  int arg_edx;
  int val;
  int dungeon_off;
  undefined4 uval;
  short short_val;
  int local_1c;
  
  dungeon_off = arg_edx * 0x1508;
  local_1c = 0;
  if (*(short *)(&g_bss_002e1a45 + dungeon_off) != *(short *)(gui_btn + 0x1b)) { /* gui_btn->id_num */
    *(undefined2 *)(&g_bss_002e1a45 + dungeon_off) = *(undefined2 *)(gui_btn + 0x1b); /* gui_btn->id_num */
    val = *(int *)(gui_btn + 0x13) >> 0x1f;
    val = ((int)((*(int *)(gui_btn + 0x13) + val * -4) - (uint)(val << 1 < 0)) >> 2) + 1;
    if (val < 100) {
      val = 100;
    }
    *(int *)(&g_bss_002e1a47 + dungeon_off) = val;
  }
  uval = *(undefined4 *)(gui_btn + 0xd);
  short_val = *(short *)(gui_btn + 0x11);
  dungeon_off = mapwho_fn_05102d(uval,short_val);
  if (dungeon_off != 0) {
    local_1c = inits_allocate_light_object_043f07();
    if (local_1c != 0) {
      *(int *)(local_1c + 0x13) = dungeon_off;
      val = inits_allocate_dynamic_light_shot_0444a9(uval,short_val + 0x80);
      if (val != 0) {
        *(int *)(val + 0x13) = dungeon_off;
      }
    }
  }
  return local_1c;
}

/******************************************************************************
 * Function : magic_update_creature_control_04fbd8 (Original VA: 0x4fbd8, Ghidra: FUN_0004fbd8)
 * Prototype: void magic_update_creature_control_04fbd8(void);
 * Address  : 0x4fbd8 (Size: 192 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> effect_process_thing_entity_0248e5, instance_update_creature_and_thing_04ac70, packet_handle_double_click_action, creature_process_thing_entity_0849c8
 * Callees  : 0 -> 
 ******************************************************************************/
void magic_update_creature_control_04fbd8(void)

{
  int arg_eax;
  int arg_edx;
  
  if (*(char *)(arg_edx + 0x1f) == '\x05') {
    if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0xad) & 2) == 0) {
      *(undefined2 *)(&g_bss_002e05cc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) =
           *(undefined2 *)(&g_data_0018fe87 + (uint)*(byte *)(arg_edx + 0x1a) * 8);
      *(undefined2 *)(&g_bss_002e05dc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) =
           *(undefined2 *)(&g_data_0018fe89 + (uint)*(byte *)(arg_edx + 0x1a) * 8);
      return;
    }
  }
  else if ((*(char *)(arg_edx + 0x1f) != '\x01') || (*(char *)(arg_edx + 0x1a) != '\n')) {
    *(undefined2 *)(&g_bss_002e05cc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x3c;
    *(undefined2 *)(&g_bss_002e05dc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x28;
    return;
  }
  *(undefined2 *)(&g_bss_002e05cc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0xb;
  *(undefined2 *)(&g_bss_002e05dc + (uint)*(byte *)(arg_eax + 0x2b) * 0x1508) = 0x38;
  return;
}

/******************************************************************************
 * Function : magic_update_player_dungeon_04fc98 (Original VA: 0x4fc98, Ghidra: FUN_0004fc98)
 * Prototype: int magic_update_player_dungeon_04fc98(void);
 * Address  : 0x4fc98 (Size: 152 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> magic_process_thing_entity_04e66f
 * Callees  : 2 -> inits_allocate_light_object_043f07, LbScreenWaitVbi
 ******************************************************************************/
int magic_update_player_dungeon_04fc98(void)

{
  byte arg_al;
  int val;
  undefined1 arg_cl;
  int extraout_ECX;
  short arg_dx;
  int dungeon_off;
  
  dungeon_off = (uint)arg_al * 0x1508;
  val = inits_allocate_light_object_043f07(arg_dx * 0x100 + 0x80,0x580);
  if (val != 0) {
    *(undefined4 *)(&g_bss_002e0b5d + dungeon_off) = g_game_turn;
    *(undefined2 *)(val + 0x5e) = 2;
    (&g_bss_002e0b63)[dungeon_off] = arg_cl;
    *(undefined2 *)(&g_bss_002e0b61 + dungeon_off) = *(undefined2 *)(val + 0x1b);
    LbScreenWaitVbi();
    *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) | 1;
  }
  return val;
}

/******************************************************************************
 * Function : magic_update_player_view_state_04fd30 (Original VA: 0x4fd30, Ghidra: FUN_0004fd30)
 * Prototype: undefined4 magic_update_player_view_state_04fd30(void);
 * Address  : 0x4fd30 (Size: 81 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 10 -> magic_update_creature_and_thing_04efd4, magic_update_creature_and_thing_04f195, magic_fn_04f3bc, magic_update_player_view_state_04f41d, magic_fn_04f4f1, magic_fn_04f552, magic_update_creature_control_04f5b3, magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e ...
 * Callees  : 2 -> dungeon_remove_reserve_023868, moodneed_fn_051374
 ******************************************************************************/
undefined4 magic_update_player_view_state_04fd30(void)

{
  int val;
  char extraout_CL;
  
  val = dungeon_remove_reserve_023868();
  if (val < 0) {
    if (extraout_CL == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      moodneed_fn_051374();
    }
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : magic_update_player_dungeon_04fd81 (Original VA: 0x4fd81, Ghidra: FUN_0004fd81)
 * Prototype: void magic_update_player_dungeon_04fd81(void);
 * Address  : 0x4fd81 (Size: 43 bytes)
 * Module   : magic.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 4 -> person_update_slab_subtile_columns_0644e9, research_could_find_room_thing_066dc2, room_bloody_hell_spells_reposition_0cead4, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 0 -> 
 ******************************************************************************/
void magic_update_player_dungeon_04fd81(void)

{
  char *str_ptr;
  int dungeon_off;
  int arg_eax;
  int arg_edx;
  
  dungeon_off = arg_eax + arg_edx * 0x1508;
  if (*(char *)((int)&g_dungeons + dungeon_off + 0xfe0) != -1) {
    *(undefined1 *)((int)&g_dungeons + dungeon_off + 0xff4) = 1;
    str_ptr = (char *)((int)&g_dungeons + dungeon_off + 0xfe0);
    *str_ptr = *str_ptr + '\x01';
  }
  return;
}

/******************************************************************************
 * Function : magic_remove_spell_player_as_04fdac (Original VA: 0x4fdac, Ghidra: FUN_0004fdac)
 * Prototype: void magic_remove_spell_player_as_04fdac(void);
 * Address  : 0x4fdac (Size: 152 bytes)
 * Module   : magic.cpp [direct_file_string_xref]
 * OrigLine : magic.cpp lines 1560
 * Purpose  : String 'CANNOT REMOVE A SPELL FROM PLAYER AS HE DOESN'T HAVE IT!'
 * Callers  : 4 -> person_trying_remove_spell_room_064365, room_lair_thinks_it_belongs_0c9280, room_bloody_hell_spells_reposition_0cead4, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 3 -> magic_update_player_dungeon_04e7cd, magic_update_creature_and_thing_04ed3d, LbErrorLog
 ******************************************************************************/
void magic_remove_spell_player_as_04fdac(void)

{
  char *str_ptr;
  uint arg_eax;
  int dungeon_off;
  int arg_edx;
  
  dungeon_off = arg_edx * 0x1508;
  if (*(char *)((int)&g_dungeons + arg_eax + dungeon_off + 0xfe0) == '\0') {
    LbErrorLog(); /* LbErrorLog("magic.cpp", line 1560, "CANNOT REMOVE A SPELL FROM PLAYER AS HE DOESN'T HAVE IT!") */
  }
  else {
    str_ptr = (char *)((int)&g_dungeons + arg_eax + dungeon_off + 0xfe0);
    *str_ptr = *str_ptr + -1;
    if (arg_eax < 5) {
      if (arg_eax != 3) {
        return;
      }
      if (*(int *)(&g_bss_002e0e11 + dungeon_off) != 0) {
        *(undefined4 *)(&g_bss_002e0e11 + dungeon_off) = 0;
        return;
      }
    }
    else if (arg_eax < 6) {
      if (*(short *)(&g_bss_002e0b61 + dungeon_off) != 0) {
        magic_update_player_dungeon_04e7cd();
        return;
      }
    }
    else {
      if (arg_eax != 6) {
        return;
      }
      if ((&g_bss_002e0e0d)[arg_edx * 0x542] != 0) {
        magic_update_creature_and_thing_04ed3d();
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : magic_update_creature_control_04fe44 (Original VA: 0x4fe44, Ghidra: FUN_0004fe44)
 * Prototype: undefined4 magic_update_creature_control_04fe44(void);
 * Address  : 0x4fe44 (Size: 451 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> instance_update_creature_and_thing_04af38, creature_process_map_subtile_085450, creature_process_map_subtile_085598
 * Callees  : 2 -> workshop_fn_0768fb, object_fn_0c595c
 ******************************************************************************/
undefined4 magic_update_creature_control_04fe44(void)

{
  int thing;
  undefined4 uval;
  int arg_edx;
  char cctrl_ptr;
  
  cctrl_ptr = *(char *)(thing + 0x1f); /* thing->class_id */
  if (cctrl_ptr == '\x05') {
    if (*(char *)(thing + 6) == arg_edx) { /* thing->owner */
      if (*(char *)(thing + 7) == '\x0e') {
        cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        cctrl_ptr = *(char *)(thing + 7);
      }
      if (cctrl_ptr == 'X') {
        return 0;
      }
      if (*(char *)(thing + 7) == '\x0e') {
        cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        cctrl_ptr = *(char *)(thing + 7);
      }
      if (cctrl_ptr != '\\') {
        if (*(char *)(thing + 7) == '\x0e') {
          cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
        }
        else {
          cctrl_ptr = *(char *)(thing + 7);
        }
        if (cctrl_ptr != '_') {
          if (*(char *)(thing + 7) == '\x0e') {
            cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
          }
          else {
            cctrl_ptr = *(char *)(thing + 7);
          }
          if (cctrl_ptr != ')') {
            if (*(char *)(thing + 7) == '\x0e') {
              cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
            }
            else {
              cctrl_ptr = *(char *)(thing + 7);
            }
            if (cctrl_ptr != '(') {
              if (*(char *)(thing + 7) == '\x0e') {
                cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
              }
              else {
                cctrl_ptr = *(char *)(thing + 7);
              }
              if (cctrl_ptr != '+') {
                if (*(char *)(thing + 7) == '\x0e') {
                  cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
                }
                else {
                  cctrl_ptr = *(char *)(thing + 7);
                }
                if (cctrl_ptr != '*') {
                  return 1;
                }
              }
            }
          }
          if ((char)(&g_bss_002ddd1e)
                    [(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) * 0x45] == /* thing->ccontrol_idx */
              arg_edx) {
            return 1;
          }
          return 0;
        }
        return 0;
      }
      return 0;
    }
    if (*(char *)(thing + 7) == '\x0e') {
      cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
    }
    else {
      cctrl_ptr = *(char *)(thing + 7);
    }
    if (cctrl_ptr != ')') {
      if (*(char *)(thing + 7) == '\x0e') {
        cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        cctrl_ptr = *(char *)(thing + 7);
      }
      if (cctrl_ptr != '(') {
        if (*(char *)(thing + 7) == '\x0e') {
          cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
        }
        else {
          cctrl_ptr = *(char *)(thing + 7);
        }
        if (cctrl_ptr != '+') {
          if (*(char *)(thing + 7) == '\x0e') {
            cctrl_ptr = *(char *)(thing + 8); /* thing->active_state */
          }
          else {
            cctrl_ptr = *(char *)(thing + 7);
          }
          if (cctrl_ptr != '*') {
            return 0;
          }
        }
      }
    }
    cctrl_ptr = (&g_bss_002ddd1e)
            [(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) * 0x45]; /* thing->ccontrol_idx */
  }
  else {
    if (cctrl_ptr == '\x01') {
      uval = object_fn_0c595c();
      return uval;
    }
    if ((cctrl_ptr != '\x02') ||
       ((*(char *)(thing + 0x1a) != '\x0f' && (*(char *)(thing + 0x1a) != '\x14')))) {
      if (*(char *)(thing + 0x1f) != '\b') { /* thing->class_id */
        return 0;
      }
      uval = workshop_fn_0768fb();
      return uval;
    }
    cctrl_ptr = *(char *)(thing + 6); /* thing->owner */
  }
  if (cctrl_ptr != arg_edx) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : magic_fn_050007 (Original VA: 0x50007, Ghidra: FUN_00050007)
 * Prototype: void magic_fn_050007(void);
 * Address  : 0x50007 (Size: 54 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Module magic.cpp procedure @ 0x050007
 * Callers  : 1 -> newgui_fn_059f51
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void magic_fn_050007(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : magic_update_slab_subtile_columns_05003d (Original VA: 0x5003d, Ghidra: FUN_0005003d)
 * Prototype: undefined1 magic_update_slab_subtile_columns_05003d(int param_1);
 * Address  : 0x5003d (Size: 620 bytes)
 * Module   : magic.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 9 -> lair_process_thing_entity_04e1f2, magic_update_creature_and_thing_04e85c, magic_update_slab_subtile_columns_04ee2c, magic_update_creature_and_thing_04f195, magic_update_player_view_state_04f41d, magic_xxxxoxxxxxxxx_xxxxxxxo_oxxxxoxo_oxoxxoxo_04f63e, magic_update_creature_control_04f87e, newgui_eek_this_what_you_05a8f3 ...
 * Callees  : 1 -> dungeon_process_thing_entity_023e65
 ******************************************************************************/
undefined1 magic_update_slab_subtile_columns_05003d(int param_1)

{
  byte arg_al;
  byte slab_coord;
  int val;
  int val_2;
  uint uval;
  byte arg_cl;
  undefined1 extraout_CH;
  undefined1 uval_2;
  undefined1 extraout_CH_00;
  undefined1 extraout_CH_01;
  byte arg_dl;
  byte arg_bl;
  bool flag;
  
  if (arg_dl < 7) {
    if (4 < arg_dl) {
      if (arg_dl < 6) {
        return 1;
      }
      val_2 = (uint)CONCAT11(arg_cl,arg_bl) * 5;
      if ((*(byte *)((int)&g_map_subtiles + val_2) & 0x10) != 0) {
        return 0;
      }
      if ((*(uint *)((int)&g_map_subtiles + val_2 + 1) >> 0x1c & 1 << (arg_al & 0x1f)) != 0) {
        return 1;
      }
      flag = param_1 == 1;
      goto LAB_000500d6;
    }
    if (arg_dl == 2) {
      if ((*(byte *)((int)&g_map_subtiles + (uint)CONCAT11(arg_cl,arg_bl) * 5) & 0x10) != 0) {
        return 0;
      }
      slab_coord = (&g_slabmap)[((&g_subtile_to_slab_lut)[arg_cl] * 0x55 + (&g_subtile_to_slab_lut)[arg_bl]) * 6];
LAB_000500d1:
      flag = (slab_coord & 7) == arg_al;
      goto LAB_000500d6;
    }
  }
  else {
    if (arg_dl < 8) {
      val_2 = (uint)CONCAT11(arg_cl,arg_bl) * 5;
      if ((*(byte *)((int)&g_map_subtiles + val_2) & 0x10) != 0) {
        return 0;
      }
      val = dungeon_process_thing_entity_023e65();
      if (val != 0) {
        return 1;
      }
      uval = *(uint *)((int)&g_map_subtiles + val_2 + 1) >> 0x1c & 1 << (arg_al & 0x1f);
      uval_2 = extraout_CH;
LAB_00050123:
      if (uval != 0) {
        return 1;
      }
      return uval_2;
    }
    if (arg_dl < 0xe) {
      if (arg_dl == 10) {
        val_2 = (uint)CONCAT11(arg_cl,arg_bl) * 5;
        if ((*(byte *)((int)&g_map_subtiles + val_2) & 0x10) != 0) {
          return 0;
        }
        val = dungeon_process_thing_entity_023e65();
        if ((val == 0) &&
           ((*(uint *)((int)&g_map_subtiles + val_2 + 1) >> 0x1c & 1 << (arg_al & 0x1f)) == 0)) {
          return extraout_CH_00;
        }
        if (*(int *)(&g_bss_0019d5ab + (uint)arg_al * 0x4ef) + 0x14U < g_game_turn) {
          return 1;
        }
        return extraout_CH_00;
      }
    }
    else {
      if ((arg_dl < 0xf) || (arg_dl < 0x10)) {
        slab_coord = (&g_slabmap)[((&g_subtile_to_slab_lut)[arg_cl] * 0x55 + (&g_subtile_to_slab_lut)[arg_bl]) * 6];
        goto LAB_000500d1;
      }
      if (arg_dl == 0x10) {
        val_2 = dungeon_process_thing_entity_023e65();
        if ((val_2 == 0) &&
           ((*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(arg_cl,arg_bl) * 5 + 1) >> 0x1c &
            1 << (arg_al & 0x1f)) == 0)) {
          return extraout_CH_01;
        }
        val_2 = (uint)CONCAT11(arg_cl,arg_bl) * 5;
        if ((*(byte *)((int)&g_map_subtiles + val_2) & 0x10) == 0) {
          return extraout_CH_01;
        }
        if ((*(byte *)((int)&g_map_subtiles + val_2) & 0x43) != 0) {
          return extraout_CH_01;
        }
        uval = (uint)(byte)(&g_slabmap_base)
                            [((&g_subtile_to_slab_lut)[arg_bl] + (&g_subtile_to_slab_lut)[arg_cl] * 0x55) * 6];
        uval_2 = extraout_CH_01;
        goto LAB_00050123;
      }
    }
  }
  flag = (*(byte *)((int)&g_map_subtiles + (uint)CONCAT11(arg_cl,arg_bl) * 5) & 0x10) == 0;
LAB_000500d6:
  if (flag) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : magic_update_creature_control_0502a9 (Original VA: 0x502a9, Ghidra: FUN_000502a9)
 * Prototype: undefined4 magic_update_creature_control_0502a9(void);
 * Address  : 0x502a9 (Size: 160 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> magic_update_player_view_state_04f41d, magic_update_creature_control_04f87e, draw_process_thing_entity_08eeec
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 magic_update_creature_control_0502a9(void)

{
  char ch;
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  if ((arg_ebx != 0xe) || (arg_eax != *(char *)(arg_edx + 6))) {
    if (*(char *)(arg_edx + 7) == '\x0e') {
      ch = *(char *)(arg_edx + 8);
    }
    else {
      ch = *(char *)(arg_edx + 7);
    }
    if (ch != ')') {
      if (*(char *)(arg_edx + 7) == '\x0e') {
        ch = *(char *)(arg_edx + 8);
      }
      else {
        ch = *(char *)(arg_edx + 7);
      }
      if (ch != '(') {
        if (*(char *)(arg_edx + 7) == '\x0e') {
          ch = *(char *)(arg_edx + 8);
        }
        else {
          ch = *(char *)(arg_edx + 7);
        }
        if (ch != '+') {
          if (*(char *)(arg_edx + 7) == '\x0e') {
            ch = *(char *)(arg_edx + 8);
          }
          else {
            ch = *(char *)(arg_edx + 7);
          }
          if (ch != '*') {
            return 1;
          }
        }
      }
    }
    if ((char)(&g_bss_002ddd1e)
              [(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x7e) * 0x45] ==
        arg_eax) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : magic_update_slab_subtile_columns_050349 (Original VA: 0x50349, Ghidra: FUN_00050349)
 * Prototype: undefined8 magic_update_slab_subtile_columns_050349(void);
 * Address  : 0x50349 (Size: 438 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> update_update_slab_subtile_columns_0df760
 * Callees  : 3 -> combtool_couldn_get_flee_position_017db0, move_update_creature_control_0b3b58, move_fn_0b3be4
 ******************************************************************************/
undefined8 magic_update_slab_subtile_columns_050349(void)

{
  int slab_coord;
  int slab_coord_2;
  short short_val;
  int arg_eax;
  undefined4 uval;
  uint thing_ptr;
  undefined4 arg_edx;
  int val;
  int val_2;
  char *str_ptr;
  int local_24;
  int local_20;
  
  combtool_couldn_get_flee_position_017db0();
  short_val = move_fn_0b3be4();
  if (short_val == 0) {
    slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)];
    local_24 = 0;
    slab_coord_2 = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)];
    str_ptr = (char *)&g_bss_002ee9c1;
    for (; local_24 < 0x20; local_24 = local_24 + 1) {
      val_2 = slab_coord_2 + *str_ptr;
      val = str_ptr[1] + slab_coord;
      if ((((-1 < val) && (val < 0x55)) && (-1 < val_2)) &&
         ((val_2 < 0x55 &&
          ((&g_data_001921d2)[(uint)(byte)(&g_slabmap_base)[(val_2 * 0x55 + val) * 6] * 0x16] != '\0'))
         )) {
        thing_ptr = (*(uint *)((int)&g_map_subtiles + (val * 3 + val_2 * 0x300 + 0x101) * 5 + 1) &
                0x3fffff) >> 0xb;
        while (((short)thing_ptr != 0 &&
               ((*(char *)((&g_thing_ptrs)[thing_ptr] + 0x1f) != '\x03' ||
                (*(char *)((&g_thing_ptrs)[thing_ptr] + 0x1a) != '.'))))) {
          thing_ptr = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr] + 2);
        }
        if ((short)thing_ptr == 0) {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          thing_ptr = g_action_random_seed % 9;
          for (local_20 = 0; local_20 < 9; local_20 = local_20 + 1) {
            if (((*(byte *)((int)&g_map_subtiles +
                           (((int)(char)(&g_data_0018b64b)[thing_ptr * 2] + val_2 * 3 + 1) * 0x100 +
                           (int)*(char *)((int)&g_data_0018b647 + thing_ptr * 2 + 3) + val * 3 + 1) * 5)
                 & 0x10) == 0) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) goto LAB_00050378;
            thing_ptr = (int)(thing_ptr + 1) % 9;
          }
        }
      }
      str_ptr = str_ptr + 4;
    }
    uval = 0;
  }
  else {
LAB_00050378:
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : magic_process_thing_entity_0504ff (Original VA: 0x504ff, Ghidra: FUN_000504ff)
 * Prototype: void magic_process_thing_entity_0504ff(void);
 * Address  : 0x504ff (Size: 381 bytes)
 * Module   : magic.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 9 -> instance_fn_049eff, magic_update_creature_and_thing_04e85c, magic_update_creature_and_thing_04f195, magic_fn_04f3bc, magic_update_player_view_state_04f41d, magic_fn_04f4f1, magic_fn_04f552, magic_update_creature_control_04f5b3 ...
 ******************************************************************************/
void magic_process_thing_entity_0504ff(void)

{
  byte arg_al;
  byte arg_dl;
  ushort arg_bx;
  
  if (((int)*(char *)((&g_thing_ptrs)[arg_bx] + 6) != (uint)arg_al) &&
     ((&g_data_0018e98d)[(uint)arg_dl * 0x1b] == '\0')) {
    return;
  }
  if (arg_dl < 0xc) {
    if (arg_dl < 8) {
      if (arg_dl == 6) {
        magic_update_creature_and_thing_04e85c(0);
        return;
      }
    }
    else {
      if (arg_dl < 9) {
        magic_update_creature_control_04f5b3();
        return;
      }
      if (9 < arg_dl) {
        if (10 < arg_dl) {
          magic_fn_04f3bc();
          return;
        }
        magic_update_creature_and_thing_04f195();
        return;
      }
    }
    return;
  }
  if (arg_dl < 0xd) {
    magic_fn_04f4f1();
    return;
  }
  if (arg_dl < 0xe) {
    magic_fn_04f552();
    return;
  }
  if (arg_dl < 0xf) {
    magic_update_creature_control_04f87e();
    return;
  }
  if (0xf < arg_dl) {
    if (arg_dl != 0x12) {
      return;
    }
    *(ushort *)(&g_player_influenced_thing_idx + (uint)arg_al * 0x4ef) = arg_bx;
    instance_fn_049eff();
    return;
  }
  magic_update_player_view_state_04f41d();
  return;
}

/******************************************************************************
 * Function : magic_fn_05067c (Original VA: 0x5067c, Ghidra: FUN_0005067c)
 * Prototype: void magic_fn_05067c(void);
 * Address  : 0x5067c (Size: 140 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Module magic.cpp procedure @ 0x05067c
 * Callers  : 2 -> magic_data_mapfadeg_dat_050708, magic_data_mapfadeg_dat_0508a9
 * Callees  : 3 -> bflib_system_io_fn_0e8f34, bflib_system_io_fn_0e984c, bflib_system_io_fn_0e98c8
 ******************************************************************************/
void magic_fn_05067c(void)

{
  undefined1 uval;
  int val;
  int arg_edx;
  undefined1 *arg_ebx;
  undefined1 *word_ptr;
  int local_14;
  
  val = bflib_system_io_fn_0e984c();
  if (val == -1) {
    local_14 = arg_edx;
    do {
      val = arg_edx;
      word_ptr = arg_ebx;
      do {
        uval = bflib_system_io_fn_0e8f34();
        val = val + 3;
        arg_ebx = word_ptr + 1;
        *word_ptr = uval;
        word_ptr = arg_ebx;
      } while (val != arg_edx + 0x300);
      local_14 = local_14 + 3;
    } while (local_14 != arg_edx + 0x300);
    bflib_system_io_fn_0e98c8();
  }
  return;
}

/******************************************************************************
 * Function : magic_data_mapfadeg_dat_050708 (Original VA: 0x50708, Ghidra: FUN_00050708)
 * Prototype: undefined8 magic_data_mapfadeg_dat_050708(void);
 * Address  : 0x50708 (Size: 417 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : String 'DATA\MAPFADEG.DAT'
 * Callers  : 1 -> creature_dene_says_big_hello_08685c
 * Callees  : 9 -> magic_fn_05067c, magic_fn_050a47, draw_fn_0872a4, draw_update_player_dungeon_0872b8, draw_fn_087694, prepare_file_path, dk_sprintf, LbFileClose ...
 ******************************************************************************/
undefined8 magic_data_mapfadeg_dat_050708(void)

{
  int arg_eax;
  undefined4 uval;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 arg_edx;
  undefined *word_ptr;
  int val_2;
  
  if (arg_eax == 0) {
    g_bss_0034b20c = &g_bss_0030317f;
    g_bss_0034b210 = &g_bss_00312b7f;
    g_bss_0034b208 = &g_render_poly_buf_start;
    if ((&g_bss_0019d57d)[g_my_player_word._3_1_ * 0x4ef] == '\x02') {
      draw_update_player_dungeon_0872b8();
    }
    else {
      draw_fn_087694();
    }
    val = 0;
    val_2 = 0;
    while (val < (int)((ulonglong)g_mouse_cursor_x / (ulonglong)(longlong)(int)(uint)g_units_per_pixel)) {
      word_ptr = g_bss_0034b20c + val_2;
      val_2 = val_2 + 0x140;
      LbFileClose(word_ptr);
      val = extraout_ECX;
    }
    prepare_file_path();
    uval = prepare_file_path();
    dk_sprintf(&g_log_sprintf_buf,s__s_gmap_raw_00165987,uval);
    val_2 = 0;
    bflib_system_io_fn_0e984c();
    draw_fn_0872a4();
    val = extraout_ECX_00;
    while (val < (int)((ulonglong)g_mouse_cursor_x / (ulonglong)(longlong)(int)(uint)g_units_per_pixel)) {
      word_ptr = g_bss_0034b210 + val_2;
      val_2 = val_2 + 0x140;
      LbFileClose(g_screen_pitch * val,word_ptr);
      val = extraout_ECX_01;
    }
    magic_fn_05067c();
  }
  val = arg_eax + 4;
  magic_fn_050a47(g_bss_0034b208);
  if (0x1f < val) {
    val = 4;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : magic_data_mapfadeg_dat_0508a9 (Original VA: 0x508a9, Ghidra: FUN_000508a9)
 * Prototype: undefined8 magic_data_mapfadeg_dat_0508a9(void);
 * Address  : 0x508a9 (Size: 414 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : String 'DATA\MAPFADEG.DAT'
 * Callers  : 1 -> creature_dene_says_big_hello_08685c
 * Callees  : 9 -> magic_fn_05067c, magic_fn_050a47, draw_fn_0872a4, draw_update_player_dungeon_0872b8, draw_fn_087694, prepare_file_path, dk_sprintf, LbFileClose ...
 ******************************************************************************/
undefined8 magic_data_mapfadeg_dat_0508a9(void)

{
  int arg_eax;
  undefined4 uval;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 arg_edx;
  undefined *word_ptr;
  int val_2;
  
  if (arg_eax == 0x20) {
    g_bss_0034b20c = &g_bss_0030317f;
    g_bss_0034b210 = &g_bss_00312b7f;
    g_bss_0034b208 = &g_render_poly_buf_start;
    if ((&g_bss_0019d57d)[g_my_player_word._3_1_ * 0x4ef] == '\x02') {
      draw_update_player_dungeon_0872b8();
    }
    else {
      draw_fn_087694();
    }
    val = 0;
    val_2 = 0;
    while (val < (int)((ulonglong)g_mouse_cursor_x / (ulonglong)(longlong)(int)(uint)g_units_per_pixel)) {
      word_ptr = g_bss_0034b20c + val_2;
      val_2 = val_2 + 0x140;
      LbFileClose(word_ptr);
      val = extraout_ECX;
    }
    prepare_file_path();
    uval = prepare_file_path();
    dk_sprintf(&g_log_sprintf_buf,s__s_gmap_raw_001659ac,uval);
    val_2 = 0;
    bflib_system_io_fn_0e984c();
    draw_fn_0872a4();
    val = extraout_ECX_00;
    while (val < (int)((ulonglong)g_mouse_cursor_x / (ulonglong)(longlong)(int)(uint)g_units_per_pixel)) {
      word_ptr = g_bss_0034b210 + val_2;
      val_2 = val_2 + 0x140;
      LbFileClose(g_screen_pitch * val,word_ptr);
      val = extraout_ECX_01;
    }
    magic_fn_05067c();
  }
  val = arg_eax + -4;
  magic_fn_050a47(g_bss_0034b208);
  if (val < 1) {
    val = 0;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : magic_fn_050a47 (Original VA: 0x50a47, Ghidra: FUN_00050a47)
 * Prototype: void magic_fn_050a47(int param_1,int param_2,int param_3,int param_4,int param_5);
 * Address  : 0x50a47 (Size: 494 bytes)
 * Module   : magic.cpp [address_order_boundary_interpolation]
 * Purpose  : Module magic.cpp procedure @ 0x050a47
 * Callers  : 2 -> magic_data_mapfadeg_dat_050708, magic_data_mapfadeg_dat_0508a9
 * Callees  : 0 -> 
 ******************************************************************************/
void magic_fn_050a47(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 *arg_eax;
  int val;
  int loop_i;
  int arg_ecx;
  int arg_edx;
  int loop_i_2;
  int arg_ebx;
  int val_2;
  int loop_i_3;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 *local_10;
  
  val_2 = 0x20 - param_2;
  local_14 = 0;
  local_18 = 0;
  for (loop_i_3 = 0; loop_i_3 < param_3 << 3; loop_i_3 = loop_i_3 + 8) {
    val = local_14 / param_3 + param_2 * 4;
    if (val < 0) {
      val = 0;
    }
    else if (param_3 < val) {
      val = param_3;
    }
    *(int *)((int)&g_bss_00348f0c + loop_i_3) = val;
    val = local_18 / param_3 + val_2 * 4;
    if (val < 0) {
      val = 0;
    }
    else if (param_3 < val) {
      val = param_3;
    }
    *(int *)((int)&g_bss_00348f08 + loop_i_3) = val;
    local_14 = local_14 + param_3 + param_2 * -8;
    local_18 = local_18 + param_3 + val_2 * -8;
  }
  val = (param_4 << 3) / param_3;
  loop_i_3 = param_2 * 4 * val;
  loop_i_2 = loop_i_3 >> 0x1f;
  loop_i_3 = (int)((loop_i_3 + loop_i_2 * -8) - (uint)(loop_i_2 << 2 < 0)) >> 3;
  val = val_2 * 4 * val;
  loop_i_2 = val >> 0x1f;
  val = (int)((val + loop_i_2 * -8) - (uint)(loop_i_2 << 2 < 0)) >> 3;
  local_24 = 0;
  local_1c = 0;
  for (loop_i_2 = 0; loop_i_2 < param_4 << 3; loop_i_2 = loop_i_2 + 8) {
    loop_i = local_24 / param_4 + loop_i_3;
    if (loop_i < 0) {
      loop_i = 0;
    }
    else if (param_4 < loop_i) {
      loop_i = param_4;
    }
    *(int *)((int)&g_bss_0034a30c + loop_i_2) = loop_i * param_3;
    loop_i = local_1c / param_4 + val;
    if (loop_i < 0) {
      loop_i = 0;
    }
    else if (param_4 < loop_i) {
      loop_i = param_4;
    }
    *(int *)((int)&g_bss_0034a308 + loop_i_2) = loop_i * param_3;
    local_24 = local_24 + param_4 + loop_i_3 * -2;
    local_1c = local_1c + param_4 + val * -2;
  }
  local_10 = arg_eax;
  for (loop_i_3 = 0; loop_i_3 < param_4 * 8; loop_i_3 = loop_i_3 + 8) {
    val = *(int *)((int)&g_bss_0034a308 + loop_i_3);
    loop_i_2 = *(int *)((int)&g_bss_0034a30c + loop_i_3);
    for (loop_i = 0; loop_i < param_3 << 3; loop_i = loop_i + 8) {
      *local_10 = *(undefined1 *)
                   ((uint)*(byte *)((uint)*(byte *)(arg_edx + val +
                                                   *(int *)((int)&g_bss_00348f08 + loop_i)) +
                                    param_2 * 0x100 + arg_ecx) +
                    (uint)*(byte *)((uint)*(byte *)(arg_ebx + loop_i_2 +
                                                   *(int *)((int)&g_bss_00348f0c + loop_i)) +
                                    val_2 * 0x100 + arg_ecx) * 0x100 + param_1);
      local_10 = local_10 + 1;
    }
    local_10 = local_10 + (param_5 - param_3);
  }
  return;
}

