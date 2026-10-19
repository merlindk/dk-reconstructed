/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: object.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : object_fn_0c38a4 (Original VA: 0xc38a4, Ghidra: FUN_000c38a4)
 * Prototype: void object_fn_0c38a4(void);
 * Address  : 0xc38a4 (Size: 124 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Module object.cpp procedure @ 0x0c38a4
 * Callers  : 1 -> magic_update_creature_and_thing_04e85c
 * Callees  : 1 -> draw_roll_action_random_08ccec
 ******************************************************************************/
void object_fn_0c38a4(void)

{
  byte flag;
  int arg_eax;
  char ch;
  
  flag = *(byte *)(arg_eax + 0x13);
  ch = '\0';
  if (flag < 2) {
    if (flag == 1) {
      ch = *(char *)(arg_eax + 0x49) - *(char *)(arg_eax + 0x48);
    }
  }
  else if ((2 < flag) && (flag < 5)) {
    ch = *(char *)(arg_eax + 0x48);
  }
  *(undefined1 *)(arg_eax + 0x13) = 4;
  draw_roll_action_random_08ccec(0,(int)ch,2);
  return;
}

/******************************************************************************
 * Function : object_update_creature_control_0c3960 (Original VA: 0xc3960, Ghidra: FUN_000c3960)
 * Prototype: void object_update_creature_control_0c3960(void);
 * Address  : 0xc3960 (Size: 70 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> person_trying_remove_spell_room_064365, person_update_creature_and_thing_0645dd, person_update_creature_and_thing_064703, person_update_creature_and_thing_064900
 * Callees  : 1 -> light_attempt_turn_off_unallocated_0ad66c
 ******************************************************************************/
void object_update_creature_control_0c3960(void)

{
  int thing;
  byte *arg_edx;
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) = /* thing->ccontrol_idx */
       *(undefined2 *)(arg_edx + 0x1b);
  *arg_edx = *arg_edx | 0x80;
  arg_edx[1] = arg_edx[1] | 1;
  arg_edx[6] = g_neutral_player_number;
  if (*(short *)(arg_edx + 0x62) != 0) {
    light_attempt_turn_off_unallocated_0ad66c();
  }
  return;
}

/******************************************************************************
 * Function : object_dragging_anything_0c39a8 (Original VA: 0xc39a8, Ghidra: FUN_000c39a8)
 * Prototype: void object_dragging_anything_0c39a8(void);
 * Address  : 0xc39a8 (Size: 142 bytes)
 * Module   : object.cpp [direct_file_string_xref]
 * OrigLine : object.cpp lines 152, 170
 * Purpose  : String 'NOT DRAGGING ANYTHING'
 * Callers  : 5 -> person_update_slab_subtile_columns_0644e9, person_update_creature_and_thing_0647b6, person_update_creature_and_thing_06484c, person_update_creature_and_thing_0649ad, person_update_creature_and_thing_064e6d
 * Callees  : 3 -> light_already_list_0ad54c, move_fn_0b3b10, LbErrorLog
 ******************************************************************************/
void object_dragging_anything_0c39a8(void)

{
  int cctrl_ptr;
  int thing;
  byte *extraout_ECX;
  int extraout_ECX_00;
  byte *arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0x6e) == 0) {
    LbErrorLog(); /* LbErrorLog("object.cpp", line 152, "NOT DRAGGING ANYTHING") */
    arg_edx = extraout_ECX;
  }
  if (*(short *)(cctrl_ptr + 0x6e) == *(short *)(arg_edx + 0x1b)) {
    *(undefined2 *)(cctrl_ptr + 0x6e) = 0;
    *arg_edx = *arg_edx & 0x7f;
    arg_edx[1] = arg_edx[1] & 0xfe;
    move_fn_0b3b10();
    if (*(short *)(extraout_ECX_00 + 0x62) != 0) {
      light_already_list_0ad54c();
      return;
    }
  }
  else {
    LbErrorLog(); /* LbErrorLog("object.cpp", line 170, "Attempt to drop thing that was not dragged") */
  }
  return;
}

/******************************************************************************
 * Function : object_update_player_dungeon_0c3a38 (Original VA: 0xc3a38, Ghidra: FUN_000c3a38)
 * Prototype: undefined8 object_update_player_dungeon_0c3a38(void);
 * Address  : 0xc3a38 (Size: 499 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 6 -> sound_fn_06e538, sound_fn_06e5ee, structs_update_creature_control_072af4, draw_roll_action_random_08ccec, move_process_map_subtile_0b28e8, move_fn_0b3b10
 ******************************************************************************/
undefined8 object_update_player_dungeon_0c3a38(void)

{
  byte flag;
  undefined2 uval;
  int gui_btn;
  uint uval_2;
  int val;
  undefined4 arg_edx;
  int player_off;
  undefined4 in_stack_ffffffe8;
  undefined4 dungeon_off;
  
  val = *(int *)(gui_btn + 3) >> 0x18;
  player_off = val * 0x4ef;
  if (*(short *)(gui_btn + 0x1b) != *(short *)(&g_bss_0019d504 + player_off)) { /* gui_btn->id_num */
    structs_update_creature_control_072af4();
    return CONCAT44(arg_edx,0xffffffff);
  }
  flag = *(byte *)(gui_btn + 0x13);
  if (flag < 3) {
    if ((flag == 1) && ((int)(*(byte *)(gui_btn + 0x49) - 1) <= (int)(uint)*(byte *)(gui_btn + 0x48))
       ) {
      *(undefined1 *)(gui_btn + 0x13) = 2;
      draw_roll_action_random_08ccec(0,0,2);
      return CONCAT44(in_stack_ffffffe8,1);
    }
  }
  else if (flag < 4) {
    uval_2 = *(byte *)(gui_btn + 0x49) - 1;
    if (*(byte *)(gui_btn + 0x48) == uval_2) {
      *(ushort *)(&g_bss_0019d504 + player_off) = (ushort)*(byte *)(gui_btn + 0x48) ^ (ushort)uval_2;
      structs_update_creature_control_072af4();
      return CONCAT44(arg_edx,0xffffffff);
    }
  }
  else {
    if (flag != 4) {
      return CONCAT44(arg_edx,1);
    }
    if ((uint)*(byte *)(gui_btn + 0x48) == *(byte *)(gui_btn + 0x49) - 1) {
      dungeon_off = CONCAT22((ushort)(byte)(&g_bss_002e0e0b)[(*(int *)(gui_btn + 3) >> 0x18) * 0x1508] *
                       0x100 + 0x80,(ushort)(byte)(&g_bss_002e0e0a)[val * 0x1508] * 0x100 + 0x80);
      uval = move_process_map_subtile_0b28e8(dungeon_off);
      move_fn_0b3b10(dungeon_off,uval);
      draw_roll_action_random_08ccec(0,0,2);
      *(undefined1 *)(gui_btn + 0x13) = 1;
      sound_fn_06e5ee();
      sound_fn_06e538(3,0,6);
      return 0x10000000001;
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : object_update_creature_and_thing_0c3c3c (Original VA: 0xc3c3c, Ghidra: FUN_000c3c3c)
 * Prototype: longlong object_update_creature_and_thing_0c3c3c(void);
 * Address  : 0xc3c3c (Size: 2359 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 15 -> effect_allocate_light_effect_024998, effect_roll_action_random_0250ef, effect_fn_025f6f, person_fn_064a2e, sound_fn_06e538, sound_fn_06f865, structs_update_creature_control_072af4, creature_how_hero_have_tend_08608c ...
 ******************************************************************************/
longlong object_update_creature_and_thing_0c3c3c(void)

{
  ushort uval;
  byte *thing_ptr;
  int val;
  byte flag;
  int arg_eax;
  int dungeon_off;
  int dungeon_off_2;
  uint rand_seed;
  uint uval_2;
  int val_2;
  ushort *dungeon_off_3;
  byte *thing_ptr_2;
  undefined4 *word_ptr;
  undefined1 *word_ptr_2;
  undefined1 *word_ptr_3;
  bool flag_2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  char cStack_37;
  undefined1 uStack_36;
  char cStack_35;
  undefined2 local_34;
  
  word_ptr = (undefined4 *)&local_38;
  dungeon_off = (*(int *)(arg_eax + 3) >> 0x18) * 0x1508;
  if (*(int *)(arg_eax + 0x5c) >> 0x10 < 1) {
    if ((&g_bss_002e15e9)[dungeon_off] == '\0') {
      (&g_bss_002e15e9)[dungeon_off] = 1;
      *(undefined4 *)(&g_bss_002e15ea + dungeon_off) = 0;
      *(undefined4 *)(&g_bss_002e15ee + dungeon_off) = *(undefined4 *)(arg_eax + 0xd);
      *(undefined2 *)(&g_bss_002e15f2 + dungeon_off) = *(undefined2 *)(arg_eax + 0x11);
    }
  }
  else {
    if ((g_bss_002ed3f3 != 0) && (g_game_turn % g_bss_002ed3f3 == 0)) {
      *(short *)(arg_eax + 0x5e) = *(short *)(arg_eax + 0x5e) + g_bss_002ed3f7;
      if (*(int *)(arg_eax + 0x5c) >> 0x10 < 0) {
        *(undefined2 *)(arg_eax + 0x5e) = 0;
      }
      else if (g_bss_001ace04 < (uint)(*(int *)(arg_eax + 0x5c) >> 0x10)) {
        *(undefined2 *)(arg_eax + 0x5e) = (undefined2)g_bss_001ace04;
      }
    }
    dungeon_off = ((int)((uint)((*(int *)(arg_eax + 0x5c) >> 0x10) << 8) / g_bss_001ace04 << 7) >> 8) + 0x80;
    *(short *)(arg_eax + 0x46) = (short)((uint)g_data_0018b981 * dungeon_off >> 8);
    *(short *)(arg_eax + 0x56) = (short)(dungeon_off * (uint)g_data_0018b97d >> 8);
  }
  dungeon_off = *(int *)(arg_eax + 3) >> 0x18;
  dungeon_off_2 = dungeon_off * 0x1508;
  if ((&g_bss_002e15e9)[dungeon_off_2] == '\0') goto switchD_000c3e58_default;
  rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
  uval_2 = rand_seed >> 0xd | rand_seed * 0x80000;
  rand_seed = uval_2 * 0x24a1 + 0x24df;
  g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
  cStack_37 = *(char *)(arg_eax + 0xe) + (char)((ulonglong)uval_2 % 10) + -5;
  local_38 = 0x80;
  cStack_35 = *(char *)(arg_eax + 0x10) + (char)((ulonglong)g_action_random_seed % 10) + -5;
  uStack_36 = 0x80;
  local_3c = 0xc3df0;
  local_34 = move_process_map_subtile_0b3788();
  local_3c = 0xc3e03;
  effect_roll_action_random_0250ef();
  local_3c = 0xc3e18;
  val_2 = sound_fn_06f865();
  word_ptr = (undefined4 *)&local_38;
  if (val_2 == 0) {
    local_3c = 0x100;
    local_40 = 6;
    uStack_44 = 1;
    word_ptr = &uStack_48;
    uStack_48 = 3;
    sound_fn_06e538();
  }
  switch((&g_bss_002e15e9)[dungeon_off_2]) {
  case 1:
    dungeon_off = (uint)*(byte *)(*(int *)((int)word_ptr + 0x18) + 6) * 0x1508;
    dungeon_off_3 = &g_dungeons + (uint)*(byte *)(*(int *)((int)word_ptr + 0x18) + 6) * 0xa84;
    if ((*(int *)(&g_bss_002e1a3d + dungeon_off) == 0) && (*dungeon_off_3 != 0)) {
      uval = *dungeon_off_3;
      *(undefined4 *)(&g_bss_002e1a3d + dungeon_off) = 1;
      (&g_bss_002e1a3b)[dungeon_off] = *(undefined1 *)((int)(&g_thing_ptrs)[uval] + 0xe);
      (&g_bss_002e1a3c)[dungeon_off] = *(undefined1 *)((int)(&g_thing_ptrs)[*dungeon_off_3] + 0x10);
    }
    dungeon_off = *(int *)(&g_bss_002e15ea + dungeon_off_2) + 1;
    *(int *)(&g_bss_002e15ea + dungeon_off_2) = dungeon_off;
    if (dungeon_off < 0x20) {
      dungeon_off_2 = dungeon_off * 0x40 >> 0x1f;
      rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
      if (g_action_random_seed % 0x60 <
          ((int)((dungeon_off * 0x40 + dungeon_off_2 * -0x20) - (uint)(dungeon_off_2 << 4 < 0)) >> 5) + 0x20U)
      goto LAB_000c3f2f;
    }
    else {
      (&g_bss_002e15e9)[dungeon_off_2] = 2;
      *(undefined4 *)(&g_bss_002e15ea + dungeon_off_2) = 0;
    }
    break;
  case 2:
    dungeon_off = *(int *)(&g_bss_002e15ea + dungeon_off_2);
    *(int *)(&g_bss_002e15ea + dungeon_off_2) = dungeon_off + 1;
    if (dungeon_off + 1 < 0x20) {
LAB_000c3f2f:
      *(undefined4 *)((int)word_ptr + -4) = 0xc3f45;
      effect_allocate_light_effect_024998();
      thing_ptr_2 = *(byte **)((int)word_ptr + 0x1c);
      if ((*thing_ptr_2 & 1) == 0) {
        return (ulonglong)*(uint *)((int)word_ptr + 0x2c) << 0x20;
      }
    }
    else {
      (&g_bss_002e15e9)[dungeon_off_2] = 3;
      *(undefined4 *)(&g_bss_002e15ea + dungeon_off_2) = 0;
      thing_ptr_2 = *(byte **)((int)word_ptr + 0x1c);
      if ((*thing_ptr_2 & 1) == 0) {
        return (ulonglong)*(uint *)((int)word_ptr + 0x2c) << 0x20;
      }
    }
    goto LAB_000c43b4;
  case 3:
    (&g_bss_002e15e9)[dungeon_off_2] = 4;
    *(undefined4 *)(&g_bss_002e15ea + dungeon_off_2) = 0;
    thing_ptr_2 = *(byte **)((int)word_ptr + 0x1c);
    if ((*thing_ptr_2 & 1) == 0) {
      return (ulonglong)*(uint *)((int)word_ptr + 0x2c) << 0x20;
    }
    goto LAB_000c43b4;
  case 4:
    if (*(int *)(&g_bss_002e1425 + dungeon_off_2) >> 0x18 != (uint)g_bss_002eb542) {
      word_ptr_2 = (undefined1 *)word_ptr;
      thing_ptr_2 = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[dungeon_off * 0xa84]];
      if (g_thing_ptrs < (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[dungeon_off * 0xa84]]) {
        do {
          thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f)]; /* thing->ccontrol_idx */
          word_ptr = (undefined4 *)word_ptr_2;
          if (*(short *)(thing_ptr_2 + 0x1b) != /* thing->index_or_angle */
              *(short *)((int)&g_bss_0019d0f7 +
                        (*(int *)(*(int *)(word_ptr_2 + 0x18) + 3) >> 0x18) * 0x4ef)) {
            flag = thing_ptr_2[7];
            if (flag == 0xe) {
              flag = thing_ptr_2[8];
            }
            if (flag == 0x29) {
LAB_000c409d:
              *(undefined4 *)(word_ptr_2 + -4) = 0xc40a4;
              val_2 = room_update_slab_subtile_columns_0d0f50();
              if ((val_2 != 0) && (*(byte *)(val_2 + 3) != thing_ptr_2[6])) goto LAB_000c3ff8;
            }
            else {
              flag = thing_ptr_2[7];
              if (flag == 0xe) {
                flag = thing_ptr_2[8];
              }
              if (flag == 0x28) goto LAB_000c409d;
              flag = thing_ptr_2[7];
              if (flag == 0xe) {
                flag = thing_ptr_2[8];
              }
              if (flag == 0x2b) goto LAB_000c409d;
              flag = thing_ptr_2[7];
              if (flag == 0xe) {
                flag = thing_ptr_2[8];
              }
              if (flag == 0x2a) goto LAB_000c409d;
            }
            if (((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) {
              *(undefined4 *)(word_ptr_2 + -4) = 0xc40db;
              val_2 = room_process_dungeon_room_0c9988();
              if (val_2 == 0) {
                *(undefined4 *)(word_ptr_2 + -4) = 0;
                word_ptr = (undefined4 *)(word_ptr_2 + -8);
                *(undefined4 *)(word_ptr_2 + -8) = 0;
                *(undefined4 *)(word_ptr_2 + -0xc) = 0xc4142;
                creature_how_hero_have_tend_08608c();
              }
              else {
                *(undefined4 *)(word_ptr_2 + -4) = 0xc40e8;
                person_fn_064a2e();
                *(undefined4 *)(word_ptr_2 + -4) = 0xc40f1;
                val_2 = room_fn_0cc4a0();
                if (val_2 == 0) {
                  *(undefined4 *)(word_ptr_2 + -4) = 0;
                  word_ptr = (undefined4 *)(word_ptr_2 + -8);
                  *(undefined4 *)(word_ptr_2 + -8) = 0;
                  *(undefined4 *)(word_ptr_2 + -0xc) = 0xc4125;
                  creature_how_hero_have_tend_08608c();
                }
                else {
                  thing_ptr_2[8] = 0x8b;
                  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 1) = /* thing->ccontrol_idx */
                       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 1) | 2; /* thing->ccontrol_idx */
                }
              }
            }
          }
LAB_000c3ff8:
          word_ptr_2 = (undefined1 *)word_ptr;
          thing_ptr_2 = thing_ptr;
        } while (g_thing_ptrs < thing_ptr);
      }
      word_ptr_2 = (undefined1 *)word_ptr;
      thing_ptr_2 = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[dungeon_off * 0xa84]];
      if (g_thing_ptrs < (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[dungeon_off * 0xa84]]) {
        do {
          thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f)]; /* thing->ccontrol_idx */
          flag = thing_ptr_2[7];
          if (flag == 0xe) {
            flag = thing_ptr_2[8];
          }
          word_ptr = (undefined4 *)word_ptr_2;
          if (flag == 0x29) {
LAB_000c41ec:
            *(undefined4 *)(word_ptr_2 + -4) = 0xc41f3;
            val_2 = room_update_slab_subtile_columns_0d0f50();
            if ((val_2 == 0) || (*(byte *)(val_2 + 3) == thing_ptr_2[6])) goto LAB_000c4203;
          }
          else {
            flag = thing_ptr_2[7];
            if (flag == 0xe) {
              flag = thing_ptr_2[8];
            }
            if (flag == 0x28) goto LAB_000c41ec;
            flag = thing_ptr_2[7];
            if (flag == 0xe) {
              flag = thing_ptr_2[8];
            }
            if (flag == 0x2b) goto LAB_000c41ec;
            flag = thing_ptr_2[7];
            if (flag == 0xe) {
              flag = thing_ptr_2[8];
            }
            if (flag == 0x2a) goto LAB_000c41ec;
LAB_000c4203:
            if (((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) {
              *(undefined4 *)(word_ptr_2 + -4) = 0;
              word_ptr = (undefined4 *)(word_ptr_2 + -8);
              *(undefined4 *)(word_ptr_2 + -8) = 0;
              *(undefined4 *)(word_ptr_2 + -0xc) = 0xc422e;
              creature_how_hero_have_tend_08608c();
            }
          }
          word_ptr_2 = (undefined1 *)word_ptr;
          thing_ptr_2 = thing_ptr;
        } while (g_thing_ptrs < thing_ptr);
      }
    }
    (&g_dungeons)[dungeon_off * 0xa84] = 0;
    (&g_bss_002e15e9)[dungeon_off_2] = 0;
    *(undefined4 *)(&g_bss_002e15ea + dungeon_off_2) = 0;
    *(undefined4 *)((int)word_ptr + -4) = 0xc4260;
    dungeon_off = effect_allocate_light_effect_024998();
    if (dungeon_off != 0) {
      *(undefined1 *)(dungeon_off + 0x16) = 8;
    }
    *(undefined4 *)((int)word_ptr + -4) = 0xc427e;
    dungeon_off = effect_allocate_light_effect_024998();
    if (dungeon_off != 0) {
      *(undefined1 *)(dungeon_off + 0x16) = 8;
    }
    uval = *(ushort *)
             (&g_bss_002ddd52 +
             (uint)*(ushort *)
                    (&g_bss_002e05a2 + (*(int *)(*(int *)((int)word_ptr + 0x18) + 3) >> 0x18) * 0x1508)
             * 0x45);
    *(undefined1 **)((int)word_ptr + 0x14) =
         &g_rooms +
         (uint)*(ushort *)
                (&g_bss_002e05a2 + (*(int *)(*(int *)((int)word_ptr + 0x18) + 3) >> 0x18) * 0x1508) *
         0x45;
    rand_seed = (uint)uval;
    while (rand_seed != 0) {
      *(uint *)((int)word_ptr + 0x10) = (uint)*(ushort *)(&g_bss_002d33c6 + rand_seed * 6);
      *(int *)((int)word_ptr + 0xc) = ((int)rand_seed % 0x55) * 3;
      dungeon_off = ((int)rand_seed / 0x55) * 3;
      if (**(int **)((int)word_ptr + 0x14) >> 0x18 != (uint)g_neutral_player_number) {
        *(short *)(&g_bss_002e105e + (**(int **)((int)word_ptr + 0x14) >> 0x18) * 0x1508) =
             *(short *)(&g_bss_002e105e + (**(int **)((int)word_ptr + 0x14) >> 0x18) * 0x1508) + 1;
      }
      val_2 = *(int *)((int)word_ptr + 0xc);
      *(undefined4 *)((int)word_ptr + -4) = 0xc4352;
      room_how_room_exist_slabs_0c8654();
      dungeon_off_2 = dungeon_off + 3;
      *(int *)((int)word_ptr + 8) = dungeon_off_2;
      val = dungeon_off - dungeon_off_2;
      flag_2 = SBORROW4(dungeon_off,dungeon_off_2);
      while (flag_2 != val < 0) {
        for (dungeon_off_2 = *(int *)((int)word_ptr + 0xc); dungeon_off_2 < val_2 + 3; dungeon_off_2 = dungeon_off_2 + 1) {
          *(undefined4 *)((int)word_ptr + -4) = 0xc438e;
          effect_fn_025f6f();
        }
        dungeon_off = dungeon_off + 1;
        val = dungeon_off - *(int *)((int)word_ptr + 8);
        flag_2 = SBORROW4(dungeon_off,*(int *)((int)word_ptr + 8));
      }
      rand_seed = *(uint *)((int)word_ptr + 0x10);
    }
    *(undefined4 *)((int)word_ptr + -4) = 0xc439f;
    structs_update_creature_control_072af4();
  }
switchD_000c3e58_default:
  thing_ptr_2 = *(byte **)((int)word_ptr + 0x1c);
  if ((*thing_ptr_2 & 1) == 0) {
    return (ulonglong)*(uint *)((int)word_ptr + 0x2c) << 0x20;
  }
LAB_000c43b4:
  if (thing_ptr_2[0x13] != 0) {
    thing_ptr_2[0x13] = thing_ptr_2[0x13] - 1;
  }
  dungeon_off = *(int *)((int)word_ptr + 0x1c);
  dungeon_off_2 = (int)((g_bss_001ace04 - (*(int *)(dungeon_off + 0x5c) >> 0x10)) * 0x180) / (int)g_bss_001ace04;
  word_ptr_2 = (undefined1 *)word_ptr;
  if (*(char *)(dungeon_off + 7) == '\x03') goto LAB_000c4564;
  *(undefined2 *)(dungeon_off + 0x3e) = 0;
  *(int *)(dungeon_off + 0x40) =
       *(int *)(dungeon_off + 0x40) +
       (int)(0x900 / (longlong)(int)(0x900 / (longlong)(dungeon_off_2 + 0x80))) *
       (*(int *)(dungeon_off + 0x11) >> 0x18);
  *(undefined4 *)((int)word_ptr + -4) = 0xc444d;
  light_attempt_get_intensity_unallocated_0ad23c();
  *(undefined4 *)((int)word_ptr + -4) = 0xc445b;
  light_attempt_set_intensity_unallocated_0ad148();
  if (*(int *)(dungeon_off + 0x40) < 0) {
    *(undefined4 *)(dungeon_off + 0x40) = 0;
    *(undefined4 *)((int)word_ptr + -4) = 0xc447a;
    light_attempt_set_intensity_unallocated_0ad148();
    *(undefined1 *)(dungeon_off + 0x14) = 1;
  }
  word_ptr_3 = (undefined1 *)word_ptr;
  if (0x8ff < *(int *)(dungeon_off + 0x40)) {
    *(undefined4 *)(dungeon_off + 0x40) = 0x8ff;
    *(undefined4 *)((int)word_ptr + -4) = 0xc44a2;
    light_attempt_set_intensity_unallocated_0ad148();
    *(undefined1 *)(dungeon_off + 0x14) = 0xff;
    if (g_bss_003d8c64 == 0) {
      *(undefined4 *)((int)word_ptr + -4) = 0x100;
      *(undefined4 *)((int)word_ptr + -8) = 6;
      *(undefined4 *)((int)word_ptr + -0xc) = 1;
      word_ptr_3 = (undefined1 *)((int)word_ptr + -0x10);
      *(undefined4 *)((int)word_ptr + -0x10) = 3;
      *(undefined4 *)((int)word_ptr + -0x14) = 0xc44fe;
      sound_fn_06e538();
      if (g_bss_003d8c64 == 0) goto LAB_000c4511;
      g_bss_003d8c64 = 0;
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x100;
      *(undefined4 *)((int)word_ptr + -8) = 6;
      *(undefined4 *)((int)word_ptr + -0xc) = 1;
      word_ptr_3 = (undefined1 *)((int)word_ptr + -0x10);
      *(undefined4 *)((int)word_ptr + -0x10) = 3;
      *(undefined4 *)((int)word_ptr + -0x14) = 0xc44cd;
      sound_fn_06e538();
      if (g_bss_003d8c64 == 0) {
LAB_000c4511:
        word_ptr_3 = (undefined1 *)((int)word_ptr + -0x10);
        g_bss_003d8c64 = 1;
      }
      else {
        g_bss_003d8c64 = 0;
      }
    }
  }
  dungeon_off_2 = *(int *)(dungeon_off + 0x40) >> 0x1f;
  *(char *)(dungeon_off + 0x48) =
       (char)((*(int *)(dungeon_off + 0x40) + dungeon_off_2 * -0x100) - (uint)(dungeon_off_2 << 7 < 0) >> 8);
  *(undefined4 *)(word_ptr_3 + -4) = 0xc453f;
  dungeon_off = sound_fn_06f865();
  word_ptr_2 = word_ptr_3;
  if (dungeon_off == 0) {
    *(undefined4 *)(word_ptr_3 + -4) = 0x100;
    *(undefined4 *)(word_ptr_3 + -8) = 6;
    *(undefined4 *)(word_ptr_3 + -0xc) = 1;
    word_ptr_2 = word_ptr_3 + -0x10;
    *(undefined4 *)(word_ptr_3 + -0x10) = 3;
    *(undefined4 *)(word_ptr_3 + -0x14) = 0xc4564;
    sound_fn_06e538();
  }
LAB_000c4564:
  return CONCAT44(*(undefined4 *)(word_ptr_2 + 0x2c),1);
}

/******************************************************************************
 * Function : object_process_thing_entity_0c4574 (Original VA: 0xc4574, Ghidra: FUN_000c4574)
 * Prototype: undefined8 object_process_thing_entity_0c4574(void);
 * Address  : 0xc4574 (Size: 716 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 5 -> anger_fn_010c1a, anger_fn_010c44, anger_fn_010d08, move_fn_0b3b10, bflib_system_io_fn_0e8cc8
 ******************************************************************************/
undefined8 object_process_thing_entity_0c4574(void)

{
  byte *thing_ptr;
  undefined2 uval;
  int thing;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  uint uval_2;
  uint uval_3;
  byte flag;
  short asStack_44 [4];
  short sStack_3c;
  short local_38;
  short sStack_36;
  short local_34 [2];
  undefined4 local_30;
  short local_2c [4];
  short local_24 [2];
  undefined4 local_20;
  short asStack_1c [2];
  
  flag = 0;
  thing_ptr = (byte *)(&g_thing_ptrs)[*(ushort *)(thing + 0x13)]; /* thing->anim_sprite */
  if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
    uval_2 = *(uint *)(thing_ptr + 0xd); /* thing->mappos.val_x */
    asStack_44[2] = (short)uval_2;
    asStack_44[3] = (short)(uval_2 >> 0x10);
    sStack_3c = *(short *)(thing_ptr + 0x11);
    uval_2 = (uint)*(ushort *)(thing + 0xd) - (uval_2 & 0xffff); /* thing->mappos.val_x */
    uval_3 = (int)uval_2 >> 0x1f;
    if ((((int)((uval_2 ^ uval_3) - uval_3) < 0x201) &&
        (uval_2 = (uint)*(ushort *)(thing + 0xf) - (uint)(ushort)asStack_44[3], /* thing->mappos.val_y */
        uval_3 = (int)uval_2 >> 0x1f, (int)((uval_2 ^ uval_3) - uval_3) < 0x201)) &&
       (uval_2 = (*(int *)(thing + 0xf) >> 0x10) - (int)sStack_3c, uval_3 = (int)uval_2 >> 0x1f, /* thing->mappos.val_y */
       (int)((uval_2 ^ uval_3) - uval_3) < 0x201)) {
      sStack_3c = sStack_3c + (short)((int)(uint)*(ushort *)(thing_ptr + 0x58) >> 1);
      uval = anger_fn_010c1a();
      *(undefined2 *)(thing + 0x52) = uval; /* thing->health */
      uval = anger_fn_010c44();
      *(undefined2 *)(thing + 0x54) = uval;
      anger_fn_010d08();
      val = bflib_system_io_fn_0e8cc8();
      if (0x80 < val) {
        local_2c[0] = local_34[0] << 7;
        local_30 = CONCAT22(sStack_36 << 7,local_38 << 7);
        local_20 = local_30;
        asStack_1c[(uint)flag * -4] = local_2c[(uint)flag * -4];
        local_34[(uint)flag * -4] = local_2c[(uint)flag * -4];
        local_2c[2] = (short)((int)(short)(local_38 << 7) / val);
        local_2c[3] = (short)((int)(short)(sStack_36 << 7) / val);
        local_24[0] = (short)((int)local_34[0] / val);
        asStack_44[(uint)flag * -4] = local_24[(uint)flag * -4];
        local_38 = local_2c[2];
        sStack_36 = local_2c[3];
        local_34[(uint)flag * -4] = local_24[(uint)flag * -4];
      }
    }
    else {
      asStack_44[2] =
           asStack_44[2] +
           (short)((uint)((&g_slab_attr_table)[(uint)*(byte *)(thing + 0x15) * 0x2aa] << 5) >> 0x10);
      asStack_44[3] =
           asStack_44[3] +
           (short)((uint)-(((int)(&PTR_LAB_00192fe0)[(uint)*(byte *)(thing + 0x15) * 0x2aa] << 5)
                          >> 8) >> 8);
      sStack_3c = sStack_3c + (ushort)*(byte *)(thing + 0x15) * (*(ushort *)(thing_ptr + 0x58) / 2);
      move_fn_0b3b10();
      *(undefined2 *)(thing + 0x52) = *(undefined2 *)(extraout_ECX + 0x52); /* thing->health */
      *(undefined2 *)(thing + 0x54) = *(undefined2 *)(extraout_ECX + 0x54);
      anger_fn_010d08();
    }
    *(short *)(thing + 0x32) = *(short *)(thing + 0x32) + local_38;
    *(short *)(thing + 0x34) = *(short *)(thing + 0x34) + sStack_36;
    *(byte *)(thing + 1) = *(byte *)(thing + 1) | 4;
    *(short *)(thing + 0x36) = *(short *)(thing + 0x36) + local_34[0];
    *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) & 0xfe; /* thing->render_flags */
    return CONCAT44(arg_edx,1);
  }
  *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) | 1; /* thing->render_flags */
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : object_process_thing_entity_0c4840 (Original VA: 0xc4840, Ghidra: FUN_000c4840)
 * Prototype: undefined8 object_process_thing_entity_0c4840(void);
 * Address  : 0xc4840 (Size: 716 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 5 -> anger_fn_010c1a, anger_fn_010c44, anger_fn_010d08, move_fn_0b3b10, bflib_system_io_fn_0e8cc8
 ******************************************************************************/
undefined8 object_process_thing_entity_0c4840(void)

{
  byte *thing_ptr;
  undefined2 uval;
  int thing;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  uint uval_2;
  uint uval_3;
  byte flag;
  short asStack_44 [4];
  short sStack_3c;
  short local_38;
  short sStack_36;
  short local_34 [2];
  undefined4 local_30;
  short local_2c [4];
  short local_24 [2];
  undefined4 local_20;
  short asStack_1c [2];
  
  flag = 0;
  thing_ptr = (byte *)(&g_thing_ptrs)[*(ushort *)(thing + 0x13)]; /* thing->anim_sprite */
  if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
    uval_2 = *(uint *)(thing_ptr + 0xd); /* thing->mappos.val_x */
    asStack_44[2] = (short)uval_2;
    asStack_44[3] = (short)(uval_2 >> 0x10);
    sStack_3c = *(short *)(thing_ptr + 0x11);
    uval_2 = (uint)*(ushort *)(thing + 0xd) - (uval_2 & 0xffff); /* thing->mappos.val_x */
    uval_3 = (int)uval_2 >> 0x1f;
    if ((((int)((uval_2 ^ uval_3) - uval_3) < 0x201) &&
        (uval_2 = (uint)*(ushort *)(thing + 0xf) - (uint)(ushort)asStack_44[3], /* thing->mappos.val_y */
        uval_3 = (int)uval_2 >> 0x1f, (int)((uval_2 ^ uval_3) - uval_3) < 0x201)) &&
       (uval_2 = (*(int *)(thing + 0xf) >> 0x10) - (int)sStack_3c, uval_3 = (int)uval_2 >> 0x1f, /* thing->mappos.val_y */
       (int)((uval_2 ^ uval_3) - uval_3) < 0x201)) {
      sStack_3c = sStack_3c + (short)((int)(uint)*(ushort *)(thing_ptr + 0x58) >> 1);
      uval = anger_fn_010c1a();
      *(undefined2 *)(thing + 0x52) = uval; /* thing->health */
      uval = anger_fn_010c44();
      *(undefined2 *)(thing + 0x54) = uval;
      anger_fn_010d08();
      val = bflib_system_io_fn_0e8cc8();
      if (0x80 < val) {
        local_2c[0] = local_34[0] << 7;
        local_30 = CONCAT22(sStack_36 << 7,local_38 << 7);
        local_20 = local_30;
        asStack_1c[(uint)flag * -4] = local_2c[(uint)flag * -4];
        local_34[(uint)flag * -4] = local_2c[(uint)flag * -4];
        local_2c[2] = (short)((int)(short)(local_38 << 7) / val);
        local_2c[3] = (short)((int)(short)(sStack_36 << 7) / val);
        local_24[0] = (short)((int)local_34[0] / val);
        asStack_44[(uint)flag * -4] = local_24[(uint)flag * -4];
        local_38 = local_2c[2];
        sStack_36 = local_2c[3];
        local_34[(uint)flag * -4] = local_24[(uint)flag * -4];
      }
    }
    else {
      asStack_44[2] =
           asStack_44[2] +
           (short)((uint)((&g_slab_attr_table)[(uint)*(byte *)(thing + 0x15) * 0x2aa] << 5) >> 0x10);
      asStack_44[3] =
           asStack_44[3] +
           (short)((uint)-(((int)(&PTR_LAB_00192fe0)[(uint)*(byte *)(thing + 0x15) * 0x2aa] << 5)
                          >> 8) >> 8);
      sStack_3c = sStack_3c + (ushort)*(byte *)(thing + 0x15) * (*(ushort *)(thing_ptr + 0x58) / 2);
      move_fn_0b3b10();
      *(undefined2 *)(thing + 0x52) = *(undefined2 *)(extraout_ECX + 0x52); /* thing->health */
      *(undefined2 *)(thing + 0x54) = *(undefined2 *)(extraout_ECX + 0x54);
      anger_fn_010d08();
    }
    *(short *)(thing + 0x32) = *(short *)(thing + 0x32) + local_38;
    *(short *)(thing + 0x34) = *(short *)(thing + 0x34) + sStack_36;
    *(byte *)(thing + 1) = *(byte *)(thing + 1) | 4;
    *(short *)(thing + 0x36) = *(short *)(thing + 0x36) + local_34[0];
    *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) & 0xfe; /* thing->render_flags */
    return CONCAT44(arg_edx,1);
  }
  *(byte *)(thing + 0x4f) = *(byte *)(thing + 0x4f) | 1; /* thing->render_flags */
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : object_process_slabmap_tile_0c4b0c (Original VA: 0xc4b0c, Ghidra: FUN_000c4b0c)
 * Prototype: void object_process_slabmap_tile_0c4b0c(void);
 * Address  : 0xc4b0c (Size: 449 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> object_update_player_dungeon_0c4d28
 * Callees  : 10 -> cdtest_fn_015030, compturn_process_map_subtile_022660, door_process_map_subtile_022b3a, dungeon_update_player_dungeon_023754, inits_allocate_dynamic_light_shot_0444a9, trap_process_map_subtile_076753, trap_fn_0767f1, move_process_map_subtile_0b3788 ...
 ******************************************************************************/
void object_process_slabmap_tile_0c4b0c(void)

{
  byte flag;
  undefined2 uval;
  int arg_eax;
  int val;
  int arg_edx;
  byte arg_bl;
  int val_2;
  undefined4 uval_2;
  char local_18;
  char local_14;
  
  if ((((arg_eax < 0x55) && (-1 < arg_eax)) && (arg_edx < 0x55)) && (-1 < arg_edx)) {
    val_2 = (arg_eax + arg_edx * 0x55) * 6;
    flag = (&g_slabmap_base)[val_2];
    if (((&g_slabmap)[val_2] & 7) == arg_bl) {
      val = door_process_map_subtile_022b3a();
      if (val != 0) {
        compturn_process_map_subtile_022660();
        flag = (&g_slabmap_base)[val_2];
      }
      if ((&g_data_001921cf)[(uint)flag * 0x16] == '\x02') {
        slab_attempt_place_animating_slab_0d7688(1);
        dungeon_update_player_dungeon_023754();
        cdtest_fn_015030();
        slab_process_slabmap_tile_0da6fc();
        val_2 = 0;
        do {
          val = trap_process_map_subtile_076753();
          if (val != 0) {
            trap_fn_0767f1();
          }
          val_2 = val_2 + 2;
        } while (val_2 != 0x12);
        local_14 = (char)arg_eax;
        uval_2 = CONCAT13(local_14 * '\x03' + '\x01',
                         CONCAT12(0x80,(short)CONCAT31((uint3)(byte)(local_18 * '\x03' + 1),0x80)));
        uval = move_process_map_subtile_0b3788();
        inits_allocate_dynamic_light_shot_0444a9(uval_2,uval);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : object_update_player_dungeon_0c4d28 (Original VA: 0xc4d28, Ghidra: FUN_000c4d28)
 * Prototype: void object_update_player_dungeon_0c4d28(void);
 * Address  : 0xc4d28 (Size: 293 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 1 -> object_process_slabmap_tile_0c4b0c
 ******************************************************************************/
void object_update_player_dungeon_0c4d28(void)

{
  int val;
  int dungeon_off;
  undefined2 *extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *dungeon_off_2;
  int local_24;
  byte local_1c;
  
  for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
    dungeon_off = (uint)local_1c * 0x1508;
    dungeon_off_2 = &g_dungeons + (uint)local_1c * 0xa84;
    if (((*(int *)(&g_bss_002e1a3d + dungeon_off) != 0) && (((byte)g_game_turn & 1) == 0)) &&
       (val = *(int *)(&g_bss_002e1a3d + dungeon_off), *(int *)(&g_bss_002e1a3d + dungeon_off) = val + 1,
       val < 0x54)) {
      for (dungeon_off = 0; dungeon_off < *(int *)(dungeon_off_2 + 0xa5a) * 2 + 1; dungeon_off = dungeon_off + 1) {
        object_process_slabmap_tile_0c4b0c();
        object_process_slabmap_tile_0c4b0c();
        dungeon_off_2 = extraout_ECX;
      }
      for (local_24 = 1; local_24 < *(int *)(dungeon_off_2 + 0xa5a) * 2; local_24 = local_24 + 1) {
        object_process_slabmap_tile_0c4b0c();
        object_process_slabmap_tile_0c4b0c();
        dungeon_off_2 = extraout_ECX_00;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : object_update_creature_and_thing_0c4f70 (Original VA: 0xc4f70, Ghidra: FUN_000c4f70)
 * Prototype: undefined8 object_update_creature_and_thing_0c4f70(void);
 * Address  : 0xc4f70 (Size: 1623 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 13 -> effect_allocate_light_effect_024998, effect_roll_action_random_0250ef, effect_fn_025f6f, person_fn_064a2e, sound_fn_06e538, sound_fn_06f865, structs_update_creature_control_072af4, creature_how_hero_have_tend_08608c ...
 ******************************************************************************/
undefined8 object_update_creature_and_thing_0c4f70(void)

{
  ushort uval;
  byte *thing_ptr;
  int val;
  int val_2;
  byte flag;
  int arg_eax;
  int loop_i;
  uint dungeon_off;
  uint uval_2;
  int val_3;
  ushort *dungeon_off_2;
  uint uval_3;
  undefined4 uval_4;
  undefined4 *word_ptr;
  undefined1 *word_ptr_2;
  byte *thing_ptr_2;
  bool flag_2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  char cStack_37;
  undefined1 uStack_36;
  char cStack_35;
  undefined2 local_34;
  
  word_ptr = (undefined4 *)&local_38;
  loop_i = *(int *)(arg_eax + 3) >> 0x18;
  dungeon_off = loop_i * 0x1508;
  uval_3 = dungeon_off;
  word_ptr_2 = &local_38;
  if ((&g_bss_002e15e9)[dungeon_off] != '\0') {
    uval_3 = g_action_random_seed * 0x24a1 + 0x24df;
    uval_2 = uval_3 >> 0xd | uval_3 * 0x80000;
    uval_3 = uval_2 * 0x24a1 + 0x24df;
    g_action_random_seed = uval_3 >> 0xd | uval_3 * 0x80000;
    cStack_37 = *(char *)(arg_eax + 0xe) + (char)((ulonglong)uval_2 % 10) + -5;
    cStack_35 = *(char *)(arg_eax + 0x10) + (char)((ulonglong)g_action_random_seed % 10) + -5;
    local_38 = 0x80;
    uStack_36 = 0x80;
    local_3c = 0xc502e;
    local_34 = move_process_map_subtile_0b3788();
    local_3c = 0xc5041;
    effect_roll_action_random_0250ef();
    local_3c = 0xc5056;
    val_3 = sound_fn_06f865();
    if (val_3 == 0) {
      local_3c = 0x100;
      local_40 = 6;
      uStack_44 = 1;
      word_ptr = &uStack_48;
      uStack_48 = 3;
      val_3 = sound_fn_06e538();
    }
    flag = (&g_bss_002e15e9)[dungeon_off] - 1;
    uval_3 = CONCAT31((int3)((uint)val_3 >> 8),flag);
    word_ptr_2 = (undefined1 *)word_ptr;
    if (flag < 4) {
      switch((uint)flag) {
      case 0:
        loop_i = (uint)*(byte *)(*(int *)((int)word_ptr + 0x14) + 6) * 0x1508;
        dungeon_off_2 = &g_dungeons + (uint)*(byte *)(*(int *)((int)word_ptr + 0x14) + 6) * 0xa84;
        if ((*(int *)(&g_bss_002e1a3d + loop_i) == 0) && (*dungeon_off_2 != 0)) {
          uval = *dungeon_off_2;
          *(undefined4 *)(&g_bss_002e1a3d + loop_i) = 1;
          (&g_bss_002e1a3b)[loop_i] = *(undefined1 *)((int)(&g_thing_ptrs)[uval] + 0xe);
          (&g_bss_002e1a3c)[loop_i] = *(undefined1 *)((int)(&g_thing_ptrs)[*dungeon_off_2] + 0x10);
        }
        loop_i = *(int *)(&g_bss_002e15ea + dungeon_off) + 1;
        *(int *)(&g_bss_002e15ea + dungeon_off) = loop_i;
        if (0x1f < loop_i) {
          (&g_bss_002e15e9)[dungeon_off] = 2;
          *(undefined4 *)(&g_bss_002e15ea + dungeon_off) = 0;
          return CONCAT44(*(undefined4 *)((int)word_ptr + 0x2c),dungeon_off_2);
        }
        val_3 = loop_i * 0x40 >> 0x1f;
        uval_3 = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = uval_3 >> 0xd | uval_3 * 0x80000;
        uval_3 = g_action_random_seed / 0x60;
        if (((int)((loop_i * 0x40 + val_3 * -0x20) - (uint)(val_3 << 4 < 0)) >> 5) + 0x20U <=
            g_action_random_seed % 0x60) goto LAB_000c4569;
        break;
      case 1:
        loop_i = *(int *)(&g_bss_002e15ea + dungeon_off) + 1;
        *(int *)(&g_bss_002e15ea + dungeon_off) = loop_i;
        if (0x1f < loop_i) {
          (&g_bss_002e15e9)[dungeon_off] = 3;
          *(undefined4 *)(&g_bss_002e15ea + dungeon_off) = 0;
          return CONCAT44(*(undefined4 *)((int)word_ptr + 0x2c),loop_i);
        }
        break;
      case 2:
        (&g_bss_002e15e9)[dungeon_off] = 4;
        *(undefined4 *)(&g_bss_002e15ea + dungeon_off) = 0;
        return CONCAT44(*(undefined4 *)((int)word_ptr + 0x2c),(uint)flag);
      case 3:
        if (*(int *)(&g_bss_002e1425 + dungeon_off) >> 0x18 != (uint)g_bss_002eb542) {
          thing_ptr_2 = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[loop_i * 0xa84]];
          if (g_thing_ptrs < (&g_thing_ptrs)[(ushort)(&g_bss_002e05b6)[loop_i * 0xa84]]) {
            do {
              thing_ptr = (&g_thing_ptrs)
                       [*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f)]; /* thing->ccontrol_idx */
              word_ptr = (undefined4 *)word_ptr_2;
              if (*(short *)(thing_ptr_2 + 0x1b) != /* thing->index_or_angle */
                  *(short *)((int)&g_bss_0019d0f7 +
                            (*(int *)(*(int *)(word_ptr_2 + 0x14) + 3) >> 0x18) * 0x4ef)) {
                flag = thing_ptr_2[7];
                if (flag == 0xe) {
                  flag = thing_ptr_2[8];
                }
                if (flag == 0x29) {
LAB_000c52b5:
                  *(undefined4 *)(word_ptr_2 + -4) = 0xc52bc;
                  val_3 = room_update_slab_subtile_columns_0d0f50();
                  if ((val_3 != 0) && (*(byte *)(val_3 + 3) != thing_ptr_2[6])) goto LAB_000c5210;
                }
                else {
                  flag = thing_ptr_2[7];
                  if (flag == 0xe) {
                    flag = thing_ptr_2[8];
                  }
                  if (flag == 0x28) goto LAB_000c52b5;
                  flag = thing_ptr_2[7];
                  if (flag == 0xe) {
                    flag = thing_ptr_2[8];
                  }
                  if (flag == 0x2b) goto LAB_000c52b5;
                  flag = thing_ptr_2[7];
                  if (flag == 0xe) {
                    flag = thing_ptr_2[8];
                  }
                  if (flag == 0x2a) goto LAB_000c52b5;
                }
                if (((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) {
                  *(undefined4 *)(word_ptr_2 + -4) = 0xc52f3;
                  val_3 = room_process_dungeon_room_0c9988();
                  if (val_3 == 0) {
                    *(undefined4 *)(word_ptr_2 + -4) = 0;
                    word_ptr = (undefined4 *)(word_ptr_2 + -8);
                    *(undefined4 *)(word_ptr_2 + -8) = 0;
                    *(undefined4 *)(word_ptr_2 + -0xc) = 0xc535a;
                    creature_how_hero_have_tend_08608c();
                  }
                  else {
                    *(undefined4 *)(word_ptr_2 + -4) = 0xc5300;
                    person_fn_064a2e();
                    *(undefined4 *)(word_ptr_2 + -4) = 0xc5309;
                    val_3 = room_fn_0cc4a0();
                    if (val_3 == 0) {
                      *(undefined4 *)(word_ptr_2 + -4) = 0;
                      word_ptr = (undefined4 *)(word_ptr_2 + -8);
                      *(undefined4 *)(word_ptr_2 + -8) = 0;
                      *(undefined4 *)(word_ptr_2 + -0xc) = 0xc533d;
                      creature_how_hero_have_tend_08608c();
                    }
                    else {
                      thing_ptr_2[8] = 0x8b;
                      *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 1) = /* thing->ccontrol_idx */
                           *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 1) | 2; /* thing->ccontrol_idx */
                    }
                  }
                }
              }
LAB_000c5210:
              word_ptr_2 = (undefined1 *)word_ptr;
              thing_ptr_2 = thing_ptr;
            } while (g_thing_ptrs < thing_ptr);
          }
          word_ptr_2 = (undefined1 *)word_ptr;
          thing_ptr_2 = (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[loop_i * 0xa84]];
          if (g_thing_ptrs < (&g_thing_ptrs)[(ushort)(&g_bss_002e05b8)[loop_i * 0xa84]]) {
            do {
              thing_ptr = (&g_thing_ptrs)
                       [*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f)]; /* thing->ccontrol_idx */
              flag = thing_ptr_2[7];
              if (flag == 0xe) {
                flag = thing_ptr_2[8];
              }
              word_ptr = (undefined4 *)word_ptr_2;
              if (flag == 0x29) {
LAB_000c5404:
                *(undefined4 *)(word_ptr_2 + -4) = 0xc540b;
                val_3 = room_update_slab_subtile_columns_0d0f50();
                if ((val_3 == 0) || (*(byte *)(val_3 + 3) == thing_ptr_2[6])) goto LAB_000c541b;
              }
              else {
                flag = thing_ptr_2[7];
                if (flag == 0xe) {
                  flag = thing_ptr_2[8];
                }
                if (flag == 0x28) goto LAB_000c5404;
                flag = thing_ptr_2[7];
                if (flag == 0xe) {
                  flag = thing_ptr_2[8];
                }
                if (flag == 0x2b) goto LAB_000c5404;
                flag = thing_ptr_2[7];
                if (flag == 0xe) {
                  flag = thing_ptr_2[8];
                }
                if (flag == 0x2a) goto LAB_000c5404;
LAB_000c541b:
                if (((*thing_ptr_2 & 0x10) == 0) && ((thing_ptr_2[1] & 2) == 0)) {
                  *(undefined4 *)(word_ptr_2 + -4) = 0;
                  word_ptr = (undefined4 *)(word_ptr_2 + -8);
                  *(undefined4 *)(word_ptr_2 + -8) = 0;
                  *(undefined4 *)(word_ptr_2 + -0xc) = 0xc5446;
                  creature_how_hero_have_tend_08608c();
                }
              }
              word_ptr_2 = (undefined1 *)word_ptr;
              thing_ptr_2 = thing_ptr;
            } while (g_thing_ptrs < thing_ptr);
          }
        }
        (&g_dungeons)[loop_i * 0xa84] = 0;
        (&g_bss_002e15e9)[dungeon_off] = 0;
        *(undefined4 *)(&g_bss_002e15ea + dungeon_off) = 0;
        *(undefined4 *)((int)word_ptr + -4) = 0xc5478;
        loop_i = effect_allocate_light_effect_024998();
        if (loop_i != 0) {
          *(undefined1 *)(loop_i + 0x16) = 8;
        }
        *(undefined4 *)((int)word_ptr + -4) = 0xc5496;
        loop_i = effect_allocate_light_effect_024998();
        if (loop_i != 0) {
          *(undefined1 *)(loop_i + 0x16) = 8;
        }
        uval = *(ushort *)
                 (&g_bss_002ddd52 +
                 (uint)*(ushort *)
                        (&g_bss_002e05a2 +
                        (*(int *)(*(int *)((int)word_ptr + 0x14) + 3) >> 0x18) * 0x1508) * 0x45);
        *(undefined1 **)((int)word_ptr + 8) =
             &g_rooms +
             (uint)*(ushort *)
                    (&g_bss_002e05a2 + (*(int *)(*(int *)((int)word_ptr + 0x14) + 3) >> 0x18) * 0x1508)
             * 0x45;
        uval_3 = (uint)uval;
        while (uval_3 != 0) {
          *(uint *)((int)word_ptr + 0xc) = (uint)*(ushort *)(&g_bss_002d33c6 + uval_3 * 6);
          *(int *)((int)word_ptr + 0x1c) = ((int)uval_3 % 0x55) * 3;
          *(int *)((int)word_ptr + 0x10) = ((int)uval_3 / 0x55) * 3;
          if (**(int **)((int)word_ptr + 8) >> 0x18 != (uint)g_neutral_player_number) {
            *(short *)(&g_bss_002e105e + (**(int **)((int)word_ptr + 8) >> 0x18) * 0x1508) =
                 *(short *)(&g_bss_002e105e + (**(int **)((int)word_ptr + 8) >> 0x18) * 0x1508) + 1;
          }
          val_3 = *(int *)((int)word_ptr + 0x10);
          val = *(int *)((int)word_ptr + 0x1c);
          *(undefined4 *)((int)word_ptr + -4) = 0xc5572;
          room_how_room_exist_slabs_0c8654();
          loop_i = val_3 + 3;
          *(int *)((int)word_ptr + 0x18) = loop_i;
          val_2 = val_3 - loop_i;
          flag_2 = SBORROW4(val_3,loop_i);
          while (flag_2 != val_2 < 0) {
            for (loop_i = *(int *)((int)word_ptr + 0x1c); loop_i < val + 3; loop_i = loop_i + 1) {
              *(undefined4 *)((int)word_ptr + -4) = 0xc55ac;
              effect_fn_025f6f();
            }
            val_3 = val_3 + 1;
            val_2 = val_3 - *(int *)((int)word_ptr + 0x18);
            flag_2 = SBORROW4(val_3,*(int *)((int)word_ptr + 0x18));
          }
          uval_3 = *(uint *)((int)word_ptr + 0xc);
        }
        *(undefined4 *)((int)word_ptr + -4) = 0xc55bd;
        uval_4 = structs_update_creature_control_072af4();
        return CONCAT44(*(undefined4 *)((int)word_ptr + 0x2c),uval_4);
      }
      *(undefined4 *)((int)word_ptr + -4) = 0xc518a;
      uval_4 = effect_allocate_light_effect_024998();
      return CONCAT44(*(undefined4 *)((int)word_ptr + 0x2c),uval_4);
    }
  }
LAB_000c4569:
  return CONCAT44(*(undefined4 *)(word_ptr_2 + 0x2c),uval_3);
}

/******************************************************************************
 * Function : object_fn_0c55c8 (Original VA: 0xc55c8, Ghidra: FUN_000c55c8)
 * Prototype: void object_fn_0c55c8(void);
 * Address  : 0xc55c8 (Size: 428 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Module object.cpp procedure @ 0x0c55c8
 * Callers  : 0 -> 
 * Callees  : 4 -> sound_fn_06e538, sound_fn_06f865, light_attempt_set_intensity_unallocated_0ad148, light_attempt_get_intensity_unallocated_0ad23c
 ******************************************************************************/
void object_fn_0c55c8(void)

{
  int arg_eax;
  int val;
  undefined4 *word_ptr;
  bool flag;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  word_ptr = (undefined4 *)&stack0xffffffe8;
  val = ((g_bss_001ace04 - (*(int *)(arg_eax + 0x5c) >> 0x10)) * 0x180) / g_bss_001ace04;
  if (*(char *)(arg_eax + 7) == '\x03') {
    return;
  }
  *(undefined2 *)(arg_eax + 0x3e) = 0;
  *(int *)(arg_eax + 0x40) =
       *(int *)(arg_eax + 0x40) +
       (int)(0x900 / (longlong)(int)(0x900 / (longlong)(val + 0x80))) *
       (*(int *)(arg_eax + 0x11) >> 0x18);
  uStack_1c = 0xc5659;
  light_attempt_get_intensity_unallocated_0ad23c();
  uStack_1c = 0xc5667;
  light_attempt_set_intensity_unallocated_0ad148();
  if (*(int *)(arg_eax + 0x40) < 0) {
    *(undefined4 *)(arg_eax + 0x40) = 0;
    uStack_1c = 0xc5684;
    light_attempt_set_intensity_unallocated_0ad148();
    *(undefined1 *)(arg_eax + 0x14) = 1;
  }
  if (0x8ff < *(int *)(arg_eax + 0x40)) {
    *(undefined4 *)(arg_eax + 0x40) = 0x8ff;
    uStack_1c = 0xc56ac;
    light_attempt_set_intensity_unallocated_0ad148();
    *(undefined1 *)(arg_eax + 0x14) = 0xff;
    val = g_bss_003d8c64;
    if (g_bss_003d8c64 == 0) {
      uStack_1c = 0x100;
      uStack_20 = 6;
      uStack_24 = 1;
      word_ptr = &uStack_28;
      uStack_28 = 3;
      sound_fn_06e538();
      flag = g_bss_003d8c64 != 0;
      g_bss_003d8c64 = val;
      if (flag) goto LAB_000c5724;
    }
    else {
      uStack_1c = 0x100;
      uStack_20 = 6;
      uStack_24 = 1;
      word_ptr = &uStack_28;
      uStack_28 = 3;
      sound_fn_06e538();
      if (g_bss_003d8c64 != 0) {
        g_bss_003d8c64 = 0;
        goto LAB_000c5724;
      }
    }
    word_ptr = &uStack_28;
    g_bss_003d8c64 = 1;
  }
LAB_000c5724:
  val = *(int *)(arg_eax + 0x40) >> 0x1f;
  *(char *)(arg_eax + 0x48) =
       (char)((*(int *)(arg_eax + 0x40) + val * -0x100) - (uint)(val << 7 < 0) >> 8);
  *(undefined4 *)((int)word_ptr + -4) = 0xc5748;
  val = sound_fn_06f865();
  if (val == 0) {
    *(undefined4 *)((int)word_ptr + -4) = 0x100;
    *(undefined4 *)((int)word_ptr + -8) = 6;
    *(undefined4 *)((int)word_ptr + -0xc) = 1;
    *(undefined4 *)((int)word_ptr + -0x10) = 3;
    *(undefined4 *)((int)word_ptr + -0x14) = 0xc576d;
    sound_fn_06e538();
  }
  return;
}

/******************************************************************************
 * Function : object_fn_0c577c (Original VA: 0xc577c, Ghidra: FUN_000c577c)
 * Prototype: undefined4 object_fn_0c577c(void);
 * Address  : 0xc577c (Size: 39 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Module object.cpp procedure @ 0x0c577c
 * Callers  : 1 -> draw_process_map_subtile_08bde8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 object_fn_0c577c(void)

{
  byte flag;
  int arg_eax;
  
  flag = *(byte *)(arg_eax + 0x1a);
  if (flag < 6) {
    if (flag != 3) {
      return 0;
    }
  }
  else if (6 < flag) {
    if (flag < 0x2b) {
      return 0;
    }
    if (0x2b < flag) {
      if (flag < 0x34) {
        return 0;
      }
      if (0x38 < flag) {
        return 0;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : object_fn_0c57a4 (Original VA: 0xc57a4, Ghidra: FUN_000c57a4)
 * Prototype: undefined4 object_fn_0c57a4(void);
 * Address  : 0xc57a4 (Size: 35 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Module object.cpp procedure @ 0x0c57a4
 * Callers  : 9 -> impset_process_map_subtile_03b35c, impset_update_slab_subtile_columns_03c17e, impset_update_slab_subtile_columns_03cbaa, process_players_dungeon_command_packet, packet_possess_thing_direct, temple_process_slabmap_tile_073d8d, creature_process_thing_entity_0849c8, draw_update_slab_subtile_columns_08afd8 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 object_fn_0c57a4(void)

{
  byte flag;
  int arg_eax;
  
  flag = *(byte *)(arg_eax + 0x1a);
  if (flag < 6) {
    if (flag != 3) {
      return 0;
    }
  }
  else if (6 < flag) {
    if (flag < 0x2b) {
      return 0;
    }
    if ((0x2b < flag) && (flag != 0x80)) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : object_process_slabmap_tile_0c57c4 (Original VA: 0xc57c4, Ghidra: FUN_000c57c4)
 * Prototype: undefined4 object_process_slabmap_tile_0c57c4(void);
 * Address  : 0xc57c4 (Size: 406 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 6 -> comptool_computer_thing_hand_01e119, instance_update_creature_and_thing_04ac70, lair_process_thing_entity_04e120, creature_thing_hand_084904, creature_update_creature_control_084ff8, creature_fn_085220
 * Callees  : 1 -> room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined4 object_process_slabmap_tile_0c57c4(void)

{
  byte flag;
  int arg_eax;
  int val;
  uint arg_edx;
  
  flag = *(byte *)(arg_eax + 0x1a);
  if (flag < 10) {
    if (flag < 3) {
      return 0;
    }
    if ((3 < flag) && (flag != 6)) {
      return 0;
    }
  }
  else {
    if (flag < 0xb) {
      if (*(int *)(arg_eax + 3) >> 0x18 != arg_edx) {
        return 0;
      }
      return 1;
    }
    if (0x33 < flag) {
      if (0x38 < flag) {
        if (flag < 0x56) {
          return 0;
        }
        if (0x5d < flag) {
          return 0;
        }
        if (((&g_slabmap)
             [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 +
              (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)]) * 6] & 7) != arg_edx) {
          return 0;
        }
        return 1;
      }
      goto LAB_000c5854;
    }
    if (flag != 0x2b) {
      return 0;
    }
  }
  if ((((byte)(&g_slabmap)
              [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 +
               (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)]) * 6] & 7) == arg_edx) ||
     (((&g_slabmap)
       [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 + (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)]
        ) * 6] & 7) == g_neutral_player_number)) {
    return 1;
  }
LAB_000c5854:
  if ((((((&g_slabmap)
          [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55 +
           (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)]) * 6] & 7) == arg_edx) &&
       (*(int *)(arg_eax + 3) >> 0x18 == arg_edx)) && (val = room_update_slab_subtile_columns_0d0f50(), val != 0)) &&
     (*(short *)(val + 10) == 2)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : object_fn_0c595c (Original VA: 0xc595c, Ghidra: FUN_000c595c)
 * Prototype: undefined4 object_fn_0c595c(void);
 * Address  : 0xc595c (Size: 33 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Module object.cpp procedure @ 0x0c595c
 * Callers  : 2 -> instance_update_creature_and_thing_04af38, magic_update_creature_control_04fe44
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 object_fn_0c595c(void)

{
  int arg_eax;
  int arg_edx;
  
  if (*(int *)(arg_eax + 3) >> 0x18 != arg_edx) {
    return 0;
  }
  if (*(char *)(arg_eax + 0x1a) != '\n') {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : object_fn_0c5980 (Original VA: 0xc5980, Ghidra: FUN_000c5980)
 * Prototype: longlong object_fn_0c5980(void);
 * Address  : 0xc5980 (Size: 25 bytes)
 * Module   : object.cpp [contiguous_same_unit_span]
 * Purpose  : Module object.cpp procedure @ 0x0c5980
 * Callers  : 1 -> instance_update_creature_and_thing_04af38
 * Callees  : 1 -> food_update_player_dungeon_0abe58
 ******************************************************************************/
longlong object_fn_0c5980(void)

{
  int arg_eax;
  uint arg_edx;
  
  if (*(char *)(arg_eax + 0x1a) == '\n') {
    food_update_player_dungeon_0abe58();
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : object_picking_up_object_0c599c (Original VA: 0xc599c, Ghidra: FUN_000c599c)
 * Prototype: int object_picking_up_object_0c599c(void);
 * Address  : 0xc599c (Size: 409 bytes)
 * Module   : object.cpp [direct_file_string_xref]
 * OrigLine : object.cpp lines 1015
 * Purpose  : String 'PICKING UP INVALID OBJECT'
 * Callers  : 1 -> instance_update_creature_and_thing_04ac70
 * Callees  : 7 -> inits_allocate_dynamic_light_shot_0444a9, magic_update_player_dungeon_04faf1, sound_fn_06e538, specials_dungeon_special_model_0708fa, draw_roll_action_random_08ccec, food_fn_0aaecc, LbErrorLog
 ******************************************************************************/
int object_picking_up_object_0c599c(void)

{
  uint unsynced_seed;
  byte flag;
  int arg_eax;
  int val;
  undefined4 extraout_ECX;
  
  flag = *(byte *)(arg_eax + 0x1a);
  if (flag < 10) {
    if ((2 < flag) && ((flag < 4 || (flag == 6)))) {
LAB_000c59d9:
      if ((*(int *)(arg_eax + 0x13) != 0) &&
         (val = inits_allocate_dynamic_light_shot_0444a9(*(undefined2 *)(arg_eax + 0xd),*(short *)(arg_eax + 0x11) + 0x80),
         val != 0)) {
        *(undefined4 *)(val + 0x13) = extraout_ECX;
      }
      return arg_eax;
    }
  }
  else {
    if (flag < 0xb) {
      unsynced_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
      g_unsynced_random_seed = unsynced_seed >> 0xd | unsynced_seed * 0x80000;
      sound_fn_06e538(3,0,2,0x100);
      draw_roll_action_random_08ccec(0xffffffff,0,2);
      food_fn_0aaecc();
      return arg_eax;
    }
    if (flag < 0x34) {
      if (flag == 0x2b) goto LAB_000c59d9;
    }
    else {
      if (flag < 0x39) {
        val = magic_update_player_dungeon_04faf1();
        return val;
      }
      if ((0x55 < flag) && (flag < 0x5e)) {
        specials_dungeon_special_model_0708fa();
        return 0;
      }
    }
  }
  LbErrorLog(); /* LbErrorLog("object.cpp", line 1015, "PICKING UP INVALID OBJECT") */
  return 0;
}

/******************************************************************************
 * Function : object_update_creature_and_thing_0c5b38 (Original VA: 0xc5b38, Ghidra: FUN_000c5b38)
 * Prototype: undefined8 object_update_creature_and_thing_0c5b38(void);
 * Address  : 0xc5b38 (Size: 738 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 1 -> draw_roll_action_random_08ccec
 ******************************************************************************/
undefined8 object_update_creature_and_thing_0c5b38(void)

{
  char ch;
  int camera;
  int val;
  short thing_ptr;
  int val_2;
  uint uStack_18;
  
  ch = *(char *)(camera + 0x48);
  if (*(short *)(camera + 0x13) == 0) {
    thing_ptr = *(short *)(&g_data_0018b913 + (uint)*(byte *)(camera + 0x1a) * 0x16);
  }
  else {
    thing_ptr = (short)(((uint)*(byte *)((&g_creature_ctrl_ptrs)
                                     [*(ushort *)((&g_thing_ptrs)[*(ushort *)(camera + 0x13)] + 100)
                                     ] + 0x23) * 300) / 0x14) + 300;
  }
  *(short *)(camera + 0x17) = thing_ptr; /* camera->zoom */
  val_2 = *(int *)(camera + 0x13) >> 0x10;
  val = *(int *)(camera + 0x15) >> 0x10;
  if (val_2 + 0x20 < val) {
    val = (uint)*(byte *)(camera + 0x1a) * 0x16;
    *(short *)(camera + 0x15) = *(short *)(camera + 0x15) + 0x20;
    uStack_18 = (uint)(byte)(&g_data_0018b917)[val];
    if (((g_view_projection_mode != '\x02') && (g_view_projection_mode != '\x03')) &&
       (-1 < *(int *)((int)&g_bss_002f2223 + (uint)*(ushort *)(&g_data_0018b90b + val) * 2 + 2) >> 0x10
       )) {
      draw_roll_action_random_08ccec(0,(int)ch);
      return CONCAT44(uStack_18,1);
    }
  }
  else if (val < val_2 + -0x20) {
    val = (uint)*(byte *)(camera + 0x1a) * 0x16;
    *(short *)(camera + 0x15) = *(short *)(camera + 0x15) + -0x20;
    uStack_18 = (uint)(byte)(&g_data_0018b917)[val];
    if ((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) {
      if (*(int *)(&g_bss_002f29d1 +
                  (uint)*(ushort *)(&g_data_0018b90b + (uint)*(byte *)(camera + 0x1a) * 0x16) * 2) >>
          0x10 < 0) {
        draw_roll_action_random_08ccec(0,(int)ch);
        return CONCAT44(uStack_18,1);
      }
    }
    else if (-1 < *(int *)((int)&g_bss_002f2223 + (uint)*(ushort *)(&g_data_0018b90b + val) * 2 + 2) >>
                  0x10) {
      draw_roll_action_random_08ccec(0,(int)ch);
      return CONCAT44(uStack_18,1);
    }
  }
  else {
    *(undefined2 *)(camera + 0x15) = *(undefined2 *)(camera + 0x17); /* camera->zoom */
    uStack_18 = (uint)(byte)(&g_data_0018b917)[(uint)*(byte *)(camera + 0x1a) * 0x16];
    if (((g_view_projection_mode == '\x02') || (g_view_projection_mode == '\x03')) &&
       (-1 < *(int *)(&g_bss_002f29d1 +
                     (uint)*(ushort *)(&g_data_0018b90b + (uint)*(byte *)(camera + 0x1a) * 0x16) * 2)
             >> 0x10)) {
      draw_roll_action_random_08ccec(0,(int)ch);
      return CONCAT44(uStack_18,1);
    }
  }
  draw_roll_action_random_08ccec(0,(int)ch);
  return CONCAT44(uStack_18,1);
}

/******************************************************************************
 * Function : object_update_player_dungeon_0c5e1c (Original VA: 0xc5e1c, Ghidra: FUN_000c5e1c)
 * Prototype: undefined8 object_update_player_dungeon_0c5e1c(void);
 * Address  : 0xc5e1c (Size: 1033 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 6 -> inits_allocate_dynamic_light_shot_0444a9, sound_fn_06e538, sound_fn_06f865, structs_update_creature_control_072af4, move_fn_0b3b10, LbScreenWaitVbi
 ******************************************************************************/
undefined8 object_update_player_dungeon_0c5e1c(void)

{
  byte flag;
  int arg_eax;
  int dungeon_off;
  int val;
  uint uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  int val_3;
  ushort *word_ptr;
  uint uval_2;
  int val_4;
  undefined4 uval_3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [28];
  
  word_ptr = (ushort *)local_34;
  dungeon_off = (*(int *)(arg_eax + 3) >> 0x18) * 0x1508;
  *(undefined2 *)(arg_eax + 0x5e) = 2;
  local_38 = 0xc5e51;
  val = sound_fn_06f865();
  if (val == 0) {
    local_38 = 0x100;
    local_3c = 3;
    local_40 = 1;
    word_ptr = (ushort *)&local_44;
    local_44 = 3;
    sound_fn_06e538();
  }
  uval = *(uint *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
  if ((uval <= (uint)(g_game_turn - *(int *)(arg_eax + 9))) &&
     (uval_2 = g_game_turn - *(int *)(&g_bss_002e0b5d + dungeon_off), uval_2 < uval)) {
    val = (uval + ((int)uval >> 0x1f) * -4) - (uint)(((int)uval >> 0x1f) << 1 < 0);
    val_2 = val >> 0x1f;
    uval = (int)(((val >> 2) + val_2 * -4) - (uint)(val_2 << 1 < 0)) >> 2;
    val = *(int *)(&g_data_0018f82f + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
    *(int *)(word_ptr + 4) = (int)uval / val;
    if ((int)uval_2 < 0) {
      uval_2 = 0;
    }
    else if ((int)uval < (int)uval_2) {
      uval_2 = uval;
    }
    val_2 = *(int *)(word_ptr + 4);
    *(int *)(&g_bss_002e0b5d + dungeon_off) =
         g_game_turn - *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
    *(int *)(&g_bss_002e0b5d + dungeon_off) = *(int *)(&g_bss_002e0b5d + dungeon_off) - (val - (int)uval_2 / val_2)
    ;
  }
  val = g_game_turn - *(int *)(&g_bss_002e0b5d + dungeon_off);
  if (val < *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4)) {
    val_2 = 0;
    val_4 = val * 4;
    *(int *)(word_ptr + 8) = val * 0x100;
    if (-1 < val_4) goto LAB_000c5f64;
    val = 0;
    while( true ) {
      *(int *)(word_ptr + 6) = val * 8;
      val = (val * 8 * (&g_slab_attr_table)[*(uint *)(word_ptr + 8) & 0x7ff] >> 0x10) +
              (uint)*(ushort *)(arg_eax + 0xd);
      val_3 = (-(*(int *)(word_ptr + 6) * (int)(&PTR_LAB_00192fe0)[*(uint *)(word_ptr + 8) & 0x7ff] >> 8
                ) >> 8) + (uint)*(ushort *)(arg_eax + 0xf);
      if ((((-1 < val) && (val < 0xff00)) && (-1 < val_3)) && (val_3 < 0xff00)) {
        *word_ptr = (short)val;
        word_ptr[1] = (ushort)val_3;
        word_ptr[2] = 0x580;
        word_ptr[-0xffffffff00000002] = 0x6020;
        word_ptr[-0xffffffff00000001] = 0xc;
        inits_allocate_dynamic_light_shot_0444a9();
        flag = *(byte *)(arg_eax + 0xe);
        *(uint *)(word_ptr + 6) = (uint)*(byte *)(arg_eax + 0x10);
        *(uint *)(word_ptr + 0xc) = ((uint)*(byte *)((int)word_ptr + 3) - *(int *)(word_ptr + 6)) + 0xd;
        val = ((uint)*(byte *)((int)word_ptr + 1) - (uint)flag) + 0xd;
        val_2 = extraout_ECX;
        if ((*word_ptr < 0xff00) && (word_ptr[1] < 0xff00)) {
          *(undefined1 *)
           ((int)&g_dungeons + val + *(int *)(word_ptr + 0xc) * 0x1a + dungeon_off + 0x5dd) = 1;
        }
        else {
          *(undefined1 *)
           ((int)&g_dungeons + val + *(int *)(word_ptr + 0xc) * 0x1a + dungeon_off + 0x5dd) = 0;
        }
      }
      val_2 = val_2 + 1;
      val_4 = val_4 + 1;
      *(int *)(word_ptr + 8) = *(int *)(word_ptr + 8) + 0x40;
      if (3 < val_2) break;
      if (val_4 < 0) {
        val = 0;
      }
      else {
LAB_000c5f64:
        val = *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) >> 0x1f;
        val_3 = (int)((*(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) + val * -4
                      ) - (uint)(val << 1 < 0)) >> 2;
        val = val_4;
        if (val_3 < val_4) {
          val = val_3;
        }
      }
    }
  }
  else {
    val = val - *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
    if (val < *(int *)(&g_data_0018f82f + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4)) {
      word_ptr[2] = 0x580;
      val_4 = *(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) >> 0x1f;
      val_2 = *(int *)(&g_data_0018f82f + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4);
      dungeon_off = (((int)((*(int *)(&g_bss_002eafb5 + (uint)(byte)(&g_bss_002e0b63)[dungeon_off] * 4) + val_4 * -4
                      ) - (uint)(val_4 << 1 < 0)) >> 2) * 8) / (val_2 * 4);
      *(int *)(word_ptr + 10) = dungeon_off;
      val_4 = 0;
      dungeon_off = (val_2 * 4 + val * -4) * dungeon_off;
      do {
        val = 0;
        do {
          *word_ptr = *(short *)(arg_eax + 0xd) +
                    (short)((uint)(*(int *)((int)&g_slab_attr_table + val) * dungeon_off) >> 0x10);
          word_ptr[1] = (short)((uint)-(*(int *)((int)&PTR_LAB_00192fe0 + val) * dungeon_off >> 8) >> 8) +
                      *(short *)(arg_eax + 0xf);
          word_ptr[-0xffffffff00000002] = 0x6180;
          word_ptr[-0xffffffff00000001] = 0xc;
          inits_allocate_dynamic_light_shot_0444a9();
          val = extraout_ECX_00;
        } while (extraout_ECX_00 != 0x2000);
        val_4 = val_4 + 1;
        dungeon_off = dungeon_off - *(int *)(word_ptr + 10);
      } while (val_4 < 4);
    }
    else {
      if (((&g_bss_002e0593)[dungeon_off] & 4) == 0) {
        *(undefined2 *)(&g_bss_002e0b61 + dungeon_off) = 0;
        word_ptr[-0xffffffff00000002] = 0x61ad;
        word_ptr[-0xffffffff00000001] = 0xc;
        LbScreenWaitVbi();
        uval_3 = 0;
        word_ptr[-0xffffffff00000002] = 0x61b8;
        word_ptr[-0xffffffff00000001] = 0xc;
        structs_update_creature_control_072af4();
        goto LAB_000c6219;
      }
      *(int *)(&g_bss_002e0b5d + dungeon_off) = g_game_turn;
      *word_ptr = (ushort)(byte)(&g_bss_002e0b64)[dungeon_off] * 0x100 + 0x80;
      word_ptr[1] = (ushort)(byte)(&g_bss_002e0b65)[dungeon_off] * 0x100 + 0x80;
      word_ptr[2] = 0x580;
      word_ptr[-0xffffffff00000002] = 0x6207;
      word_ptr[-0xffffffff00000001] = 0xc;
      LbScreenWaitVbi();
      word_ptr[-0xffffffff00000002] = 0x6210;
      word_ptr[-0xffffffff00000001] = 0xc;
      move_fn_0b3b10();
      (&g_bss_002e0593)[dungeon_off] = (&g_bss_002e0593)[dungeon_off] & 0xfb;
    }
  }
  uval_3 = 1;
LAB_000c6219:
  return CONCAT44(*(undefined4 *)(word_ptr + 0x14),uval_3);
}

/******************************************************************************
 * Function : object_process_map_subtile_0c6228 (Original VA: 0xc6228, Ghidra: FUN_000c6228)
 * Prototype: undefined8 object_process_map_subtile_0c6228(void);
 * Address  : 0xc6228 (Size: 331 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 3 -> inits_allocate_dynamic_light_shot_0444a9, structs_update_creature_control_072af4, move_process_map_subtile_0b3788
 ******************************************************************************/
undefined8 object_process_map_subtile_0c6228(void)

{
  bool flag;
  undefined2 uval;
  short short_val;
  int arg_eax;
  uint uval_2;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  uint uval_3;
  uint uval_4;
  int val_2;
  int val_3;
  int local_1c;
  
  *(undefined2 *)(arg_eax + 0x5e) = 2;
  val_2 = g_game_turn - *(int *)(arg_eax + 9);
  local_1c = 0;
  val = val_2 * 0x80;
  uval_4 = 0;
  val_2 = val_2 * 0x10;
  do {
    val_3 = val_2;
    uval_3 = (uint)*(ushort *)(arg_eax + 0xd) + ((&g_slab_attr_table)[uval_4 & 0x7ff] * val >> 0x10);
    uval_2 = (uint)*(ushort *)(arg_eax + 0xf) +
            (-((int)(&PTR_LAB_00192fe0)[uval_4 & 0x7ff] * val >> 8) >> 8);
    if ((((-1 < (int)uval_3) && ((int)uval_3 < 0x10000)) && (-1 < (int)uval_2)) &&
       (((int)uval_2 < 0x10000 &&
        ((*(byte *)((int)&g_map_subtiles + ((uval_2 >> 8 & 0xff) * 0x100 + (uval_3 >> 8 & 0xff)) * 5) &
         0x10) == 0)))) {
      uval = (undefined2)uval_3;
      short_val = move_process_map_subtile_0b3788(uval);
      inits_allocate_dynamic_light_shot_0444a9(uval,short_val + 0x80);
      val = extraout_ECX;
    }
    val = val + 8;
    uval_4 = uval_4 + 0x80;
    local_1c = local_1c + 1;
    val_2 = val_3 + 1;
  } while (local_1c < 0x10);
  flag = val_3 * 8 <= (*(int *)(&g_bss_002eb131 + (*(int *)(arg_eax + 0x10) >> 0x18) * 4) / 2) * 0x100
  ;
  if (!flag) {
    structs_update_creature_control_072af4();
  }
  return CONCAT44(arg_edx,(uint)flag);
}

/******************************************************************************
 * Function : object_process_map_subtile_0c6494 (Original VA: 0xc6494, Ghidra: FUN_000c6494)
 * Prototype: uint object_process_map_subtile_0c6494(void);
 * Address  : 0xc6494 (Size: 223 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_fn_03f3b8
 * Callees  : 2 -> mapwho_fn_050e37, structs_update_creature_control_072af4
 ******************************************************************************/
uint object_process_map_subtile_0c6494(void)

{
  byte flag;
  ushort uval;
  bool flag_2;
  uint arg_eax;
  uint thing_ptr;
  uint extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  ushort uval_2;
  int arg_ebx;
  
  uval_2 = 0;
  thing_ptr = (&g_thing_ptrs)
          [(*(uint *)((int)&g_map_subtiles + ((arg_edx & 0xffff) * 0x100 + (arg_eax & 0xffff)) * 5 + 1)
           & 0x3fffff) >> 0xb];
  if (g_thing_ptrs < thing_ptr) {
    do {
      uval = *(ushort *)(thing_ptr + 2);
      if (*(char *)(thing_ptr + 0x1f) == '\x01') { /* thing->class_id */
        flag = *(byte *)(thing_ptr + 0x1a);
        if (flag < 6) {
          if (flag == 3) goto LAB_000c6503;
LAB_000c6527:
          flag_2 = false;
        }
        else {
          if ((6 < flag) && ((flag < 0x2b || ((0x2b < flag && (flag != 0x80))))))
          goto LAB_000c6527;
LAB_000c6503:
          flag_2 = true;
        }
        if (flag_2) {
          if (((int)(arg_ebx - (uint)uval_2) < *(int *)(thing_ptr + 0x13)) && (arg_ebx != -1)) { /* thing->anim_sprite */
            *(uint *)(thing_ptr + 0x13) = *(int *)(thing_ptr + 0x13) - (arg_ebx - (uint)uval_2); /* thing->anim_sprite */
            mapwho_fn_050e37();
            return extraout_ECX;
          }
          uval_2 = uval_2 + *(short *)(thing_ptr + 0x13); /* thing->anim_sprite */
          structs_update_creature_control_072af4();
          arg_ebx = extraout_ECX_00;
        }
      }
      thing_ptr = (&g_thing_ptrs)[uval];
    } while (g_thing_ptrs < thing_ptr);
  }
  return (uint)uval_2;
}

/******************************************************************************
 * Function : object_handle_object_thing_0c6574 (Original VA: 0xc6574, Ghidra: FUN_000c6574)
 * Prototype: longlong object_handle_object_thing_0c6574(void);
 * Address  : 0xc6574 (Size: 39 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 8 -> impset_update_slab_subtile_columns_03b1e2, impset_process_slabmap_tile_03bdb1, impset_update_creature_and_thing_03c762, impset_stack_type_03e493, person_update_slab_subtile_columns_0644e9, draw_update_slab_subtile_columns_088698, draw_update_creature_and_thing_0890bc, draw_process_map_subtile_08bde8
 * Callees  : 0 -> 
 ******************************************************************************/
longlong object_handle_object_thing_0c6574(void)

{
  int thing;
  uint arg_edx;
  
  if ((*(char *)(thing + 0x1f) == '\x01') && ((&g_data_0019103e)[*(byte *)(thing + 0x1a)] != '\0')) { /* thing->class_id */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : object_handle_object_thing_0c659c (Original VA: 0xc659c, Ghidra: FUN_000c659c)
 * Prototype: longlong object_handle_object_thing_0c659c(void);
 * Address  : 0xc659c (Size: 43 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 2 -> impset_update_creature_and_thing_03c458, impset_stack_type_03e493
 * Callees  : 0 -> 
 ******************************************************************************/
longlong object_handle_object_thing_0c659c(void)

{
  int thing;
  uint arg_edx;
  
  if ((*(char *)(thing + 0x1f) == '\x01') && ((&g_data_001911f3)[*(byte *)(thing + 0x1a)] == '\b')) { /* thing->class_id */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : object_handle_object_thing_0c65c8 (Original VA: 0xc65c8, Ghidra: FUN_000c65c8)
 * Prototype: longlong object_handle_object_thing_0c65c8(void);
 * Address  : 0xc65c8 (Size: 39 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 3 -> impset_process_map_subtile_03b263, impset_process_slabmap_tile_03bfa4, impset_update_creature_and_thing_03c53a
 * Callees  : 0 -> 
 ******************************************************************************/
longlong object_handle_object_thing_0c65c8(void)

{
  int thing;
  uint arg_edx;
  
  if ((*(char *)(thing + 0x1f) == '\x01') && ((&g_data_0019116c)[*(byte *)(thing + 0x1a)] != '\0')) { /* thing->class_id */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : object_process_map_subtile_0c65f0 (Original VA: 0xc65f0, Ghidra: FUN_000c65f0)
 * Prototype: uint object_process_map_subtile_0c65f0(void);
 * Address  : 0xc65f0 (Size: 319 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> newgui_process_thing_entity_05c053
 * Callees  : 1 -> get_chessboard_distance_xy
 ******************************************************************************/
uint object_process_map_subtile_0c65f0(void)

{
  int val;
  bool flag;
  int arg_eax;
  int val_2;
  int val_3;
  int arg_edx;
  uint thing_ptr;
  int local_34;
  int local_28;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  val = (arg_eax / 3) * 3;
  local_28 = (arg_edx / 3) * 3;
  val_2 = local_28 + 3;
  do {
    if ((-1 < local_28) && (local_28 < 0x100)) {
      local_34 = val;
      do {
        if (((-1 < local_34) && (local_34 < 0x100)) &&
           (thing_ptr = (&g_thing_ptrs)
                    [(*(uint *)((int)&g_map_subtiles + (local_34 + local_28 * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], g_thing_ptrs < thing_ptr)) {
          do {
            if ((*(char *)(thing_ptr + 0x1f) == '\x01') && /* thing->class_id */
               ((&g_data_0019103e)[*(byte *)(thing_ptr + 0x1a)] != '\0')) {
              flag = true;
            }
            else {
              flag = false;
            }
            if ((flag) && (val_3 = get_chessboard_distance_xy(), val_3 < local_18)) {
              local_1c = thing_ptr;
              local_18 = val_3;
            }
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
          } while (g_thing_ptrs < thing_ptr);
        }
        local_34 = local_34 + 1;
      } while (local_34 != val + 3);
    }
    local_28 = local_28 + 1;
  } while (local_28 != val_2);
  return local_1c;
}

/******************************************************************************
 * Function : object_process_map_subtile_0c6758 (Original VA: 0xc6758, Ghidra: FUN_000c6758)
 * Prototype: uint object_process_map_subtile_0c6758(void);
 * Address  : 0xc6758 (Size: 306 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> newgui_process_thing_entity_05c053
 * Callees  : 1 -> get_chessboard_distance_xy
 ******************************************************************************/
uint object_process_map_subtile_0c6758(void)

{
  int val;
  bool flag;
  int arg_eax;
  int val_2;
  int val_3;
  int arg_edx;
  uint thing_ptr;
  int local_34;
  int local_28;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  val = (arg_eax / 3) * 3;
  local_28 = (arg_edx / 3) * 3;
  val_2 = local_28 + 3;
  do {
    if ((-1 < local_28) && (local_28 < 0x100)) {
      local_34 = val;
      do {
        if (((-1 < local_34) && (local_34 < 0x100)) &&
           (thing_ptr = (&g_thing_ptrs)
                    [(*(uint *)((int)&g_map_subtiles + (local_34 + local_28 * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], g_thing_ptrs < thing_ptr)) {
          do {
            if ((*(char *)(thing_ptr + 0x1f) == '\x01') && /* thing->class_id */
               ((&g_data_0019116c)[*(byte *)(thing_ptr + 0x1a)] != '\0')) {
              flag = true;
            }
            else {
              flag = false;
            }
            if ((flag) && (val_3 = get_chessboard_distance_xy(), val_3 < local_18)) {
              local_1c = thing_ptr;
              local_18 = val_3;
            }
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
          } while (g_thing_ptrs < thing_ptr);
        }
        local_34 = local_34 + 1;
      } while (local_34 != val + 3);
    }
    local_28 = local_28 + 1;
  } while (local_28 != val_2);
  return local_1c;
}

/******************************************************************************
 * Function : object_handle_object_thing_0c688c (Original VA: 0xc688c, Ghidra: FUN_000c688c)
 * Prototype: longlong object_handle_object_thing_0c688c(void);
 * Address  : 0xc688c (Size: 39 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 8 -> impset_update_slab_subtile_columns_03b1e2, impset_process_slabmap_tile_03bdb1, impset_update_creature_and_thing_03c762, impset_stack_type_03e493, newgui_process_thing_entity_05c053, draw_update_slab_subtile_columns_088698, draw_update_creature_and_thing_0890bc, draw_process_map_subtile_08bde8
 * Callees  : 0 -> 
 ******************************************************************************/
longlong object_handle_object_thing_0c688c(void)

{
  int thing;
  uint arg_edx;
  
  if ((*(char *)(thing + 0x1f) == '\x01') && ((&g_data_001910c5)[*(byte *)(thing + 0x1a)] != '\0')) { /* thing->class_id */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : object_process_map_subtile_0c68b4 (Original VA: 0xc68b4, Ghidra: FUN_000c68b4)
 * Prototype: uint object_process_map_subtile_0c68b4(void);
 * Address  : 0xc68b4 (Size: 306 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> newgui_process_thing_entity_05c053
 * Callees  : 1 -> get_chessboard_distance_xy
 ******************************************************************************/
uint object_process_map_subtile_0c68b4(void)

{
  int val;
  bool flag;
  int arg_eax;
  int val_2;
  int val_3;
  int arg_edx;
  uint thing_ptr;
  int local_34;
  int local_28;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  val = (arg_eax / 3) * 3;
  local_28 = (arg_edx / 3) * 3;
  val_2 = local_28 + 3;
  do {
    if ((-1 < local_28) && (local_28 < 0x100)) {
      local_34 = val;
      do {
        if (((-1 < local_34) && (local_34 < 0x100)) &&
           (thing_ptr = (&g_thing_ptrs)
                    [(*(uint *)((int)&g_map_subtiles + (local_34 + local_28 * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], g_thing_ptrs < thing_ptr)) {
          do {
            if ((*(char *)(thing_ptr + 0x1f) == '\x01') && /* thing->class_id */
               ((&g_data_001910c5)[*(byte *)(thing_ptr + 0x1a)] != '\0')) {
              flag = true;
            }
            else {
              flag = false;
            }
            if ((flag) && (val_3 = get_chessboard_distance_xy(), val_3 < local_18)) {
              local_1c = thing_ptr;
              local_18 = val_3;
            }
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
          } while (g_thing_ptrs < thing_ptr);
        }
        local_34 = local_34 + 1;
      } while (local_34 != val + 3);
    }
    local_28 = local_28 + 1;
  } while (local_28 != val_2);
  return local_1c;
}

/******************************************************************************
 * Function : object_process_map_subtile_0c69e8 (Original VA: 0xc69e8, Ghidra: FUN_000c69e8)
 * Prototype: uint object_process_map_subtile_0c69e8(void);
 * Address  : 0xc69e8 (Size: 283 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> newgui_process_thing_entity_05c053
 * Callees  : 1 -> get_chessboard_distance_xy
 ******************************************************************************/
uint object_process_map_subtile_0c69e8(void)

{
  int val;
  int arg_eax;
  int val_2;
  int val_3;
  int arg_edx;
  uint thing_ptr;
  int local_2c;
  int local_20;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 0x7fffffff;
  val = (arg_eax / 3) * 3;
  local_2c = (arg_edx / 3) * 3;
  val_2 = local_2c + 3;
  do {
    if ((-1 < local_2c) && (local_2c < 0x100)) {
      local_20 = val;
      do {
        if (((-1 < local_20) && (local_20 < 0x100)) &&
           (thing_ptr = (&g_thing_ptrs)
                    [(*(uint *)((int)&g_map_subtiles + (local_20 + local_2c * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb], g_thing_ptrs < thing_ptr)) {
          do {
            if ((*(char *)(thing_ptr + 0x1f) == '\x01') && (val_3 = get_chessboard_distance_xy(), val_3 < local_18)) { /* thing->class_id */
              local_1c = thing_ptr;
              local_18 = val_3;
            }
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
          } while (g_thing_ptrs < thing_ptr);
        }
        local_20 = local_20 + 1;
      } while (local_20 != val + 3);
    }
    local_2c = local_2c + 1;
  } while (local_2c != val_2);
  return local_1c;
}

/******************************************************************************
 * Function : object_fn_0c6b04 (Original VA: 0xc6b04, Ghidra: FUN_000c6b04)
 * Prototype: int object_fn_0c6b04(void);
 * Address  : 0xc6b04 (Size: 160 bytes)
 * Module   : object.cpp [address_order_boundary_interpolation]
 * Purpose  : Module object.cpp procedure @ 0x0c6b04
 * Callers  : 2 -> room_fn_0c6ba4, room_process_dungeon_room_0c6be0
 * Callees  : 4 -> mapwho_trying_create_gold_hoarde_050f1a, mapwho_fn_05117d, mapwho_process_map_subtile_05131e, move_process_map_subtile_0b3788
 ******************************************************************************/
int object_fn_0c6b04(void)

{
  undefined2 uval;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  short short_val;
  
  val = mapwho_process_map_subtile_05131e();
  if (val == 0) {
    short_val = ((short)(arg_edx % 0x55) * 3 + 1) * 0x100 + 0x80;
    uval = move_process_map_subtile_0b3788(short_val);
    val_2 = mapwho_trying_create_gold_hoarde_050f1a(short_val,uval);
    val = extraout_ECX_00;
    if (val_2 != 0) {
      val = extraout_ECX_00 - *(int *)(val_2 + 0x13);
    }
  }
  else {
    val = mapwho_fn_05117d();
    val = extraout_ECX - val;
  }
  return val;
}

