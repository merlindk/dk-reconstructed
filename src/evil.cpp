/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: evil.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : evil_fn_02778e (Original VA: 0x2778e, Ghidra: FUN_0002778e)
 * Prototype: void evil_fn_02778e(void);
 * Address  : 0x2778e (Size: 69 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Module evil.cpp procedure @ 0x02778e
 * Callers  : 5 -> person_update_creature_control_063a25, specials_dungeon_special_model_0708fa, specials_update_player_view_state_070a3c, specials_update_creature_control_070ac6, creature_how_hero_have_tend_08608c
 * Callees  : 2 -> event_update_player_dungeon_0275f6, evil_process_thing_entity_0277d3
 ******************************************************************************/
void evil_fn_02778e(void)

{
  int val;
  int extraout_ECX;
  byte *loop_i;
  
  for (loop_i = &g_bss_002e7091; loop_i < (byte *)0x2e789c; loop_i = loop_i + 0x15) {
    if (((*loop_i & 1) != 0) && (loop_i[0xb] != 3)) {
      val = evil_process_thing_entity_0277d3();
      if (val == extraout_ECX) {
        event_update_player_dungeon_0275f6();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : evil_process_thing_entity_0277d3 (Original VA: 0x277d3, Ghidra: FUN_000277d3)
 * Prototype: longlong evil_process_thing_entity_0277d3(void);
 * Address  : 0x277d3 (Size: 81 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> evil_fn_02778e, evil_process_thing_entity_027892
 * Callees  : 0 -> 
 ******************************************************************************/
longlong evil_process_thing_entity_0277d3(void)

{
  byte flag;
  int arg_eax;
  uint arg_edx;
  bool flag_2;
  
  flag = (&g_bss_002e7087)[arg_eax * 0x15];
  if (flag < 0xe) {
    if (flag < 6) {
      flag_2 = flag == 3;
    }
    else {
      if (flag < 7) goto LAB_000277f3;
      flag_2 = flag == 10;
    }
LAB_0002781e:
    if (!flag_2) goto LAB_00027820;
  }
  else if (0xe < flag) {
    if (flag < 0x11) {
      flag_2 = flag == 0x10;
      goto LAB_0002781e;
    }
    if ((0x11 < flag) && ((flag < 0x18 || (0x1a < flag)))) goto LAB_00027820;
  }
LAB_000277f3:
  if (*(int *)(&g_bss_002e7088 + arg_eax * 0x15) != 0) {
    return CONCAT44(arg_edx,(&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + arg_eax * 0x15)]);
  }
LAB_00027820:
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : evil_process_thing_entity_027892 (Original VA: 0x27892, Ghidra: FUN_00027892)
 * Prototype: void evil_process_thing_entity_027892(void);
 * Address  : 0x27892 (Size: 176 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 2 -> evil_process_thing_entity_0277d3, newgui_update_player_view_state_052f78
 ******************************************************************************/
void evil_process_thing_entity_027892(void)

{
  byte *thing_ptr;
  int val;
  int extraout_EDX;
  int val_2;
  undefined8 uval;
  
  val_2 = 0xc;
  do {
    uval = evil_process_thing_entity_0277d3();
    val = (int)((ulonglong)uval >> 0x20);
    if ((int)uval != 0) {
      thing_ptr = (byte *)(&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val)];
      if (((thing_ptr[0x1f] == 5) && (((*thing_ptr & 0x10) != 0 || ((thing_ptr[1] & 2) != 0)))) ||
         ((int)(char)thing_ptr[6] != (uint)(byte)(&g_bss_002e7086)[val])) {
        *(undefined4 *)(&g_bss_002e707e + val) = 0;
        *(undefined4 *)(&g_bss_002e7082 + val) = 0;
      }
      else {
        *(uint *)(&g_bss_002e707e + val) = (uint)*(ushort *)(thing_ptr + 0xd); /* thing->mappos.val_x */
        *(uint *)(&g_bss_002e7082 + val) = (uint)*(ushort *)(thing_ptr + 0xf); /* thing->mappos.val_y */
      }
    }
    val_2 = val_2 + -1;
  } while (0 < val_2);
  val_2 = 0;
  do {
    if (((&g_players)[val_2] & 1) != 0) {
      newgui_update_player_view_state_052f78();
      val_2 = extraout_EDX;
    }
    val_2 = val_2 + 0x4ef;
  } while (val_2 != 0x18ab);
  return;
}

/******************************************************************************
 * Function : evil_fn_027944 (Original VA: 0x27944, Ghidra: FUN_00027944)
 * Prototype: undefined4 evil_fn_027944(void);
 * Address  : 0x27944 (Size: 43 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Module evil.cpp procedure @ 0x027944
 * Callers  : 2 -> research_update_creature_and_thing_0666a8, room_update_creature_control_0cb33c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 evil_fn_027944(void)

{
  int arg_eax;
  int val;
  ushort arg_dx;
  
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0xe6;
  if ((arg_dx != *(ushort *)(&g_bss_002e910d + val)) &&
     ((*(ushort *)(&g_bss_002e910f + val) & arg_dx) == 0)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : evil_update_creature_control_02796f (Original VA: 0x2796f, Ghidra: FUN_0002796f)
 * Prototype: undefined8 evil_update_creature_control_02796f(void);
 * Address  : 0x2796f (Size: 1848 bytes)
 * Module   : evil.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 18 -> dungeon_attempt_get_random_position_0239ee, event_fn_0274ad, evil_illegal_job_preference_028149, instance_update_creature_control_049e95, lair_process_dungeon_room_04d683, moodneed_fn_051374, person_external_change_state_but_064a5f, person_update_creature_control_064ae7 ...
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 evil_update_creature_control_02796f(void)

{
  int cctrl_ptr;
  char ch;
  short short_val;
  int thing;
  int val;
  undefined4 uval;
  uint uval_2;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined1 *word_ptr_3;
  undefined1 *word_ptr_4;
  bool flag;
  uint auStack_44 [3];
  undefined1 local_38 [8];
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined *local_20;
  uint local_1c;
  
  word_ptr_2 = (undefined4 *)local_38;
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_20 = &g_bss_002e910d + val;
  if (1 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x9a))) {
    if ((*(byte *)(cctrl_ptr + 0xad) & 0x10) == 0) {
      word_ptr = (undefined4 *)local_38;
      if (((*(short *)(cctrl_ptr + 0x68) == 0) &&
          (word_ptr = (undefined4 *)local_38, (&g_bss_002e9124)[val] != '\0')) &&
         (word_ptr = (undefined4 *)local_38, 0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2c7)))) {
        *(int *)(cctrl_ptr + 0x2c7) = g_game_turn;
        auStack_44[2] = (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing + 0x1a) * 0xe6];
        word_ptr_2 = auStack_44 + 2;
        word_ptr = auStack_44 + 2;
        auStack_44[1] = 0x27a26;
        val = room_process_dungeon_room_0ca568();
        if (val != 0) goto LAB_000279bc;
        if ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) { /* thing->owner */
          if (*(short *)(&g_bss_002e05b0 +
                        (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x1508) != 0) {
            auStack_44[1] = 0x27a7c;
            room_process_dungeon_room_0ca8c0();
          }
          auStack_44[1] = 0x27ab6;
          moodneed_fn_051374();
        }
        if (*(short *)(&g_bss_002e05b0 + *(char *)(thing + 6) * 0x1508) != 0) { /* thing->owner */
          auStack_44[1] = (uint)*(ushort *)(thing + 0x1b); /* thing->index_or_angle */
          word_ptr = auStack_44 + 1;
          event_fn_0274ad();
        }
      }
      if ((*(short *)(cctrl_ptr + 0x2b1) != 0) &&
         (0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2e7)))) {
        word_ptr[0xffffffff] = 0x27b0f;
        val = evil_illegal_job_preference_028149();
        if (val != 0) goto LAB_00027c7a;
        *(int *)(cctrl_ptr + 0x2e7) = g_game_turn;
      }
      if ((*(short *)(&g_bss_002e910d + (uint)*(byte *)(thing + 0x1a) * 0xe6) != 0) &&
         (0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2cf)))) {
        word_ptr[0xffffffff] = 0x27b58;
        val = evil_illegal_job_preference_028149();
        if (val != 0) goto LAB_00027c7a;
        *(int *)(cctrl_ptr + 0x2cf) = g_game_turn;
      }
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      local_24 = g_action_random_seed % 3;
      word_ptr_2 = word_ptr;
      for (local_30 = 0; local_30 < 3; local_30 = local_30 + 1) {
        word_ptr_4 = (undefined1 *)word_ptr_2;
        if (local_24 == 0) {
          if ((*(short *)(cctrl_ptr + 0x68) != 0) &&
             (0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2c7)))) {
            *(int *)(cctrl_ptr + 0x2c7) = g_game_turn;
            *(undefined4 *)((int)word_ptr_2 + -4) = 0x27be8;
            val = room_fn_0cc4a0();
            if (val != 0) goto LAB_00027bf0;
          }
        }
        else if (local_24 < 2) {
          if (((local_20[9] != '\0') && (local_20[0x17] != '\0')) &&
             (200 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2d7)))) {
            *(int *)(cctrl_ptr + 0x2d7) = g_game_turn;
            *(undefined4 *)((int)word_ptr_2 + -4) = 0x27c3d;
            ch = shot_update_creature_control_06dda0();
            if (ch != '\0') {
              if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68) == 0) { /* thing->ccontrol_idx */
                *(undefined4 *)((int)word_ptr_2 + -4) = 0x27c5e;
                val = lair_process_dungeon_room_04d683();
                if (val == 0) goto LAB_00028015;
              }
              *(undefined4 *)((int)word_ptr_2 + -4) = 0x27c72;
              ch = person_external_change_state_but_064a5f();
              flag = ch == '\0';
LAB_00027c74:
              word_ptr_4 = (undefined1 *)word_ptr_2;
              if (!flag) goto LAB_00027c7a;
            }
          }
        }
        else if ((local_24 == 2) && (0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2d3)))) {
          *(int *)(cctrl_ptr + 0x2d3) = g_game_turn;
          uval_2 = (uint)*(ushort *)(local_20 + 2);
          if (uval_2 != 0) {
            val = 0;
            for (; uval_2 != 0; uval_2 = uval_2 >> 1) {
              val = val + 1;
            }
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            local_2c = g_action_random_seed >> 0xd;
            g_action_random_seed = local_2c | g_action_random_seed * 0x80000;
            local_2c = local_2c & 0x1ff;
            local_28 = (uint)(0x200 / (longlong)val);
            local_1c = local_28;
            if ((local_20[2] & 8) != 0) {
              if (local_28 < local_2c) {
                *(undefined4 *)((int)word_ptr_2 + -4) = 0x27d13;
                val = train_update_creature_control_075b48();
                if (val != 0) {
                  *(undefined4 *)((int)word_ptr_2 + -4) = 1;
                  *(undefined4 *)((int)word_ptr_2 + -8) = 0x27d2b;
                  val = room_process_dungeon_room_0ca568();
                  word_ptr_4 = (undefined1 *)((int)word_ptr_2 + -4);
                  if (val != 0) {
                    *(undefined4 *)((int)word_ptr_2 + -8) = 0x27d38;
                    short_val = room_update_creature_control_0cb33c();
                    word_ptr_4 = (undefined1 *)((int)word_ptr_2 + -4);
                    if (short_val != 0) goto LAB_00027c7a;
                  }
                }
              }
              else {
                local_1c = local_28 * 2;
              }
            }
            word_ptr_3 = word_ptr_4;
            if ((local_20[2] & 4) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)(word_ptr_4 + -4) = 0x27d5f;
                val = research_update_player_dungeon_066334();
                if (val != 0) {
                  *(undefined4 *)(word_ptr_4 + -4) = 1;
                  *(undefined4 *)(word_ptr_4 + -8) = 0x27d77;
                  val = room_process_dungeon_room_0ca568();
                  word_ptr_3 = word_ptr_4 + -4;
                  if (val != 0) {
                    *(undefined4 *)(word_ptr_4 + -8) = 0x27d84;
                    short_val = room_update_creature_control_0cb33c();
                    word_ptr_3 = word_ptr_4 + -4;
                    if (short_val != 0) goto LAB_00027c7a;
                  }
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            word_ptr_4 = word_ptr_3;
            if ((local_20[2] & 0x10) != 0) {
              if (local_1c < local_2c) {
                if (local_20[0x9a] != '\0') {
                  *(undefined4 *)(word_ptr_3 + -4) = 1;
                  *(undefined4 *)(word_ptr_3 + -8) = 0x27dc5;
                  val = room_process_dungeon_room_0ca568();
                  word_ptr_4 = word_ptr_3 + -4;
                  if (val != 0) {
                    *(undefined4 *)(word_ptr_3 + -8) = 0x27dd2;
                    short_val = room_update_creature_control_0cb33c();
                    word_ptr_4 = word_ptr_3 + -4;
                    if (short_val != 0) goto LAB_00027c7a;
                  }
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            word_ptr_3 = word_ptr_4;
            if ((local_20[2] & 0x20) != 0) {
              if (local_1c < local_2c) {
                if (local_20[0x25] != '\0') {
                  *(undefined4 *)(word_ptr_4 + -4) = 0x27e03;
                  val = scavenge_fn_067fa9();
                  if (val != 0) {
                    *(undefined4 *)(word_ptr_4 + -4) = 1;
                    *(undefined4 *)(word_ptr_4 + -8) = 0x27e1b;
                    val = room_process_dungeon_room_0ca568();
                    word_ptr_3 = word_ptr_4 + -4;
                    if (val != 0) {
                      *(undefined4 *)(word_ptr_4 + -8) = 0x27e28;
                      short_val = room_update_creature_control_0cb33c();
                      word_ptr_3 = word_ptr_4 + -4;
                      if (short_val != 0) goto LAB_00027c7a;
                    }
                  }
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            word_ptr_4 = word_ptr_3;
            if ((local_20[2] & 0x40) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)(word_ptr_3 + -4) = 1;
                *(undefined4 *)(word_ptr_3 + -8) = 0x27e5d;
                val = room_process_dungeon_room_0ca568();
                word_ptr_4 = word_ptr_3 + -4;
                if (val != 0) {
                  *(undefined4 *)(word_ptr_3 + -8) = 0x27e6a;
                  short_val = room_update_creature_control_0cb33c();
                  word_ptr_4 = word_ptr_3 + -4;
                  if (short_val != 0) goto LAB_00027c7a;
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            word_ptr_3 = word_ptr_4;
            if ((local_20[3] & 2) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)(word_ptr_4 + -4) = 1;
                *(undefined4 *)(word_ptr_4 + -8) = 0x27e9f;
                val = room_process_dungeon_room_0ca568();
                word_ptr_3 = word_ptr_4 + -4;
                if (val != 0) {
                  *(undefined4 *)(word_ptr_4 + -8) = 0x27eac;
                  short_val = room_update_creature_control_0cb33c();
                  word_ptr_3 = word_ptr_4 + -4;
                  if (short_val != 0) goto LAB_00027c7a;
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            word_ptr_2 = (undefined4 *)word_ptr_3;
            if ((local_20[3] & 0x20) != 0) {
              word_ptr_4 = word_ptr_3;
              if (local_1c < local_2c) {
                *(undefined4 *)(word_ptr_3 + -4) = 0x27ed9;
                val = instance_update_creature_control_049e95();
                if (val != 0) {
                  word_ptr_4 = word_ptr_3 + -4;
                  word_ptr_2 = (undefined4 *)(word_ptr_3 + -4);
                  *(undefined4 *)(word_ptr_3 + -4) = 1;
                  *(undefined4 *)(word_ptr_3 + -8) = 0x27ef1;
                  val = room_process_dungeon_room_0ca928();
                  if (val != 0) goto LAB_000279bc;
                }
              }
              local_1c = local_1c + local_28;
              word_ptr_2 = (undefined4 *)word_ptr_4;
            }
            if ((local_20[3] & 1) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)((int)word_ptr_2 + -4) = 0x27f22;
                person_update_creature_control_064ae7();
                uval = 1;
                *(undefined2 *)(cctrl_ptr + 0x9a) = 0;
                goto LAB_00028ba7;
              }
              local_1c = local_1c + local_28;
            }
            if ((local_20[3] & 0x40) != 0) {
              if (local_1c < local_2c) goto LAB_000279bc;
              local_1c = local_1c + local_28;
            }
            word_ptr_3 = (undefined1 *)word_ptr_2;
            if (((local_20[3] & 0x10) != 0) && (local_1c < local_2c)) {
              *(undefined4 *)((int)word_ptr_2 + -4) = 1;
              *(undefined4 *)((int)word_ptr_2 + -8) = 0x27f81;
              val = room_process_dungeon_room_0ca568();
              word_ptr_3 = (undefined1 *)((int)word_ptr_2 + -4);
              if (val != 0) {
                *(undefined4 *)((int)word_ptr_2 + -8) = 0x27f8e;
                short_val = room_update_creature_control_0cb33c();
                word_ptr_3 = (undefined1 *)((int)word_ptr_2 + -4);
                if (short_val != 0) goto LAB_00027c7a;
              }
            }
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            word_ptr_4 = word_ptr_3;
            if (g_action_random_seed % 100 == 0) {
              word_ptr_2 = (undefined4 *)(word_ptr_3 + -4);
              *(undefined4 *)(word_ptr_3 + -4) = 1;
              *(undefined4 *)(word_ptr_3 + -8) = 0x27fde;
              val = room_process_dungeon_room_0ca568();
              word_ptr_4 = word_ptr_3 + -4;
              if (val != 0) {
                *(undefined4 *)(word_ptr_3 + -8) = 0x27feb;
                short_val = room_update_creature_control_0cb33c();
                flag = short_val == 0;
                goto LAB_00027c74;
              }
            }
          }
        }
LAB_00028015:
        local_24 = (int)(local_24 + 1) % 3;
        word_ptr_2 = (undefined4 *)word_ptr_4;
      }
      if (0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2cb))) {
        *(int *)(cctrl_ptr + 0x2cb) = g_game_turn;
        *(undefined4 *)((int)word_ptr_2 + -4) = 0x2805d;
        ch = dungeon_attempt_get_random_position_0239ee();
        if (ch != '\0') {
          *(undefined4 *)((int)word_ptr_2 + -4) = 0x28072;
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
LAB_00027bf0:
            uval = 1;
            *(undefined1 *)(thing + 8) = 0x11; /* thing->active_state */
            goto LAB_00028ba7;
          }
        }
      }
      *(undefined4 *)((int)word_ptr_2 + -4) = 0x28087;
      person_update_creature_control_064ae7();
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282) = (undefined2)g_game_turn /* thing->ccontrol_idx */
      ;
      uval = 0;
      goto LAB_00028ba7;
    }
LAB_000279bc:
    word_ptr_2[0xffffffff] = 0x279c3;
    person_update_creature_control_064ae7();
  }
LAB_00027c7a:
  uval = 1;
LAB_00028ba7:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : evil_update_creature_control_0280a7 (Original VA: 0x280a7, Ghidra: FUN_000280a7)
 * Prototype: longlong evil_update_creature_control_0280a7(void);
 * Address  : 0x280a7 (Size: 74 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_063b6d, move_process_slabmap_tile_0b5264
 ******************************************************************************/
longlong evil_update_creature_control_0280a7(void)

{
  short short_val;
  int thing;
  uint arg_edx;
  int extraout_EDX;
  
  if ((uint)(g_game_turn - *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x282)) < 0x80) /* thing->ccontrol_idx */
  {
    short_val = move_process_slabmap_tile_0b5264();
    if (short_val != 0) {
      *(undefined1 *)(extraout_EDX + 8) = 0x7b;
    }
    return CONCAT44(arg_edx,1);
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : evil_update_creature_control_0280f1 (Original VA: 0x280f1, Ghidra: FUN_000280f1)
 * Prototype: undefined4 evil_update_creature_control_0280f1(void);
 * Address  : 0x280f1 (Size: 87 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 evil_update_creature_control_0280f1(void)

{
  short short_val;
  byte flag;
  char ch;
  byte flag_2;
  byte *arg_eax;
  undefined3 uval_2;
  char *str_ptr_2;
  int cctrl_ptr;
  undefined4 uval;
  char arg_cl;
  char ch_2;
  uint arg_edx;
  char *arg_ebx;
  int unaff_EBP;
  code *str_ptr_3;
  char *str_ptr;
  byte *byte_ptr;
  
  flag = (byte)arg_eax;
  *arg_eax = *arg_eax + flag;
  *arg_eax = *arg_eax & flag;
  *arg_eax = *arg_eax + flag;
  uval_2 = (undefined3)((uint)arg_eax >> 8);
  ch = flag + *arg_eax;
  str_ptr = (char *)CONCAT31(uval_2,ch);
  *(char **)(str_ptr + 0x20004000) = str_ptr + *(int *)(str_ptr + 0x20004000);
  ch_2 = (char)arg_edx;
  *str_ptr = *str_ptr + ch_2;
  *str_ptr = *str_ptr + arg_cl;
  *(char *)((int)str_ptr * 2) = *(char *)((int)str_ptr * 2) + ch;
  flag_2 = ch + *str_ptr;
  byte_ptr = (byte *)CONCAT31(uval_2,flag_2);
  *(byte **)byte_ptr = byte_ptr + *(int *)byte_ptr;
  flag = *byte_ptr;
  *byte_ptr = *byte_ptr + flag_2;
  ch = flag_2 + *(char *)(unaff_EBP + -0x7aabfffe) + CARRY1(flag,flag_2);
  ch = ch + *(char *)CONCAT31(uval_2,ch);
  str_ptr_2 = (char *)CONCAT31(uval_2,ch);
  str_ptr = (char *)(unaff_EBP + 2 + (int)str_ptr_2 * 4);
  *str_ptr = *str_ptr + ch_2;
  str_ptr_2[-0x7e] = str_ptr_2[-0x7e] + (char)arg_ebx;
  ch = ch + *str_ptr_2;
  ch = ch + *(char *)CONCAT31(uval_2,ch);
  cctrl_ptr = CONCAT31(uval_2,ch + *(char *)CONCAT31(uval_2,ch));
  cctrl_ptr = cctrl_ptr + *(int *)(arg_edx + 0x2847600 + cctrl_ptr);
  *(char *)(arg_edx + 0x3000284) = *(char *)(arg_edx + 0x3000284) + (char)(arg_edx >> 8);
  *arg_ebx = *arg_ebx + (char)cctrl_ptr;
  *arg_ebx = *arg_ebx + arg_cl;
  arg_ebx[0x51] = arg_ebx[0x51] + ch_2;
  cctrl_ptr = (&g_creature_ctrl_ptrs)
          [*(ushort *)
            (CONCAT22((short)((uint)cctrl_ptr >> 0x10),
                      CONCAT11((char)((uint)cctrl_ptr >> 8) + arg_cl,(char)cctrl_ptr)) + 100)];
  if (0x4000 < arg_edx) {
    dk_sprintf(&g_log_sprintf_buf,s_Illegal_Job_Preference__d__T_d_C_00162955);
    LbErrorLog();
    *(undefined2 *)(cctrl_ptr + 0x2b1) = 0;
    return 0;
  }
  cctrl_ptr = 0xf;
  str_ptr_3 = evil_update_creature_control_0280f1;
  do {
    if (cctrl_ptr == 0) break;
    cctrl_ptr = cctrl_ptr + -1;
    short_val = *(short *)str_ptr_3;
    str_ptr_3 = str_ptr_3 + 2;
  } while ((short)arg_edx != short_val);
                    /* WARNING: Could not recover jumptable at 0x0002817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uval = (**(code **)(cctrl_ptr * 4 + 0x2810d))();
  return uval;
}

/******************************************************************************
 * Function : evil_illegal_job_preference_028149 (Original VA: 0x28149, Ghidra: FUN_00028149)
 * Prototype: undefined4 evil_illegal_job_preference_028149(void);
 * Address  : 0x28149 (Size: 133 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp lines 545, 706
 * Purpose  : String 'Illegal Job Preference %d (T%d C%d M%d)'
 * Callers  : 1 -> evil_update_creature_control_02796f
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
undefined4 evil_illegal_job_preference_028149(void)

{
  short short_val;
  int thing;
  undefined4 uval;
  int cctrl_ptr;
  uint arg_edx;
  code *str_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (0x4000 < arg_edx) {
    dk_sprintf(&g_log_sprintf_buf,s_Illegal_Job_Preference__d__T_d_C_00162955);
    LbErrorLog(); /* LbErrorLog("evil.cpp", line 545, g_log_buf) */
    *(undefined2 *)(cctrl_ptr + 0x2b1) = 0;
    return 0;
  }
  cctrl_ptr = 0xf;
  str_ptr = evil_update_creature_control_0280f1;
  do {
    if (cctrl_ptr == 0) break;
    cctrl_ptr = cctrl_ptr + -1;
    short_val = *(short *)str_ptr;
    str_ptr = str_ptr + 2;
  } while ((short)arg_edx != short_val);
                    /* WARNING: Could not recover jumptable at 0x0002817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uval = (**(code **)(cctrl_ptr * 4 + 0x2810d))();
  return uval;
}

/******************************************************************************
 * Function : evil_roll_action_random_02855c (Original VA: 0x2855c, Ghidra: FUN_0002855c)
 * Prototype: undefined8 evil_roll_action_random_02855c(void);
 * Address  : 0x2855c (Size: 224 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 0 -> 
 * Callees  : 6 -> combobj_fn_016f8b, evil_do_this_destroy_room_029254, person_fn_063b6d, pom_roll_action_random_065545, move_update_creature_control_0b3c00, move_process_slabmap_tile_0b5264
 ******************************************************************************/
undefined8 evil_roll_action_random_02855c(void)

{
  short short_val;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  
  if ((&g_bss_002e0e0d)[*(char *)(arg_eax + 6) * 0x542] == 0) {
    person_fn_063b6d();
  }
  else {
    val = pom_roll_action_random_065545();
    if (val != 0) {
      combobj_fn_016f8b();
      return CONCAT44(arg_edx,2);
    }
    val = evil_do_this_destroy_room_029254();
    if (val == 0) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      if (((g_action_random_seed % 7 == 0) && (short_val = move_update_creature_control_0b3c00(), short_val != 0)) ||
         (short_val = move_process_slabmap_tile_0b5264(), short_val != 0)) {
        *(undefined1 *)(arg_eax + 8) = 0x74;
      }
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : evil_fn_02863c (Original VA: 0x2863c, Ghidra: FUN_0002863c)
 * Prototype: undefined8 evil_fn_02863c(void);
 * Address  : 0x2863c (Size: 18 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Module evil.cpp procedure @ 0x02863c
 * Callers  : 0 -> 
 * Callees  : 1 -> person_update_creature_control_064ae7
 ******************************************************************************/
undefined8 evil_fn_02863c(void)

{
  undefined4 arg_edx;
  
  person_update_creature_control_064ae7();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : evil_update_creature_control_02864e (Original VA: 0x2864e, Ghidra: FUN_0002864e)
 * Prototype: undefined8 evil_update_creature_control_02864e(void);
 * Address  : 0x2864e (Size: 135 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> person_fn_063b6d, move_update_creature_control_0b3c00, move_process_slabmap_tile_0b5264
 ******************************************************************************/
undefined8 evil_update_creature_control_02864e(void)

{
  uint rand_seed;
  short short_val;
  int thing;
  undefined4 arg_edx;
  
  if (*(uint *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2fa) < g_game_turn) { /* thing->ccontrol_idx */
    person_fn_063b6d();
    goto LAB_00028632;
  }
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = g_action_random_seed >> 0xd;
  g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
  if ((rand_seed & 3) == 0) {
    short_val = move_update_creature_control_0b3c00();
    if (short_val == 0) goto LAB_000286bc;
  }
  else {
LAB_000286bc:
    short_val = move_process_slabmap_tile_0b5264();
    if (short_val == 0) goto LAB_00028632;
  }
  *(undefined1 *)(thing + 8) = 99; /* thing->active_state */
LAB_00028632:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : evil_hope_we_never_get_0286d5 (Original VA: 0x286d5, Ghidra: FUN_000286d5)
 * Prototype: undefined8 evil_hope_we_never_get_0286d5(void);
 * Address  : 0x286d5 (Size: 350 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp lines 989
 * Purpose  : String 'Hope we never get here...'
 * Callers  : 0 -> 
 * Callees  : 6 -> instance_negative_instance_049bfc, person_fn_063b6d, move_update_creature_control_0b3b58, move_fn_0b4ac4, room_number_slabs_room_zero_0cc968, LbErrorLog
 ******************************************************************************/
undefined8 evil_hope_we_never_get_0286d5(void)

{
  int cctrl_ptr;
  char ch;
  undefined4 uval;
  int thing;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(int *)(cctrl_ptr + 0x82) == -1) && (*(char *)(cctrl_ptr + 0xd2) == '\0')) {
    ch = room_number_slabs_room_zero_0cc968();
    if (ch != '\0') {
      move_update_creature_control_0b3b58();
      *(undefined1 *)(thing + 8) = 0x34; /* thing->active_state */
      *(undefined4 *)(cctrl_ptr + 0x82) = 0;
    }
  }
  else {
    ch = move_fn_0b4ac4(0);
    if (ch == '\x01') {
      if (*(int *)(cctrl_ptr + 0x82) == 0) {
        *(undefined4 *)(cctrl_ptr + 0x82) = 1;
        instance_negative_instance_049bfc(0);
      }
      else if ((*(int *)(cctrl_ptr + 0x82) == 1) && (*(char *)(cctrl_ptr + 0xd2) == '\0')) {
        *(undefined4 *)(cctrl_ptr + 0x82) = 0xffffffff;
      }
    }
    else if (ch == -1) {
      LbErrorLog(); /* LbErrorLog("evil.cpp", line 989, "Hope we never get here...") */
      person_fn_063b6d();
      uval = 0;
      goto LAB_00028ba7;
    }
  }
  uval = 1;
LAB_00028ba7:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : evil_update_creature_control_028833 (Original VA: 0x28833, Ghidra: FUN_00028833)
 * Prototype: longlong evil_update_creature_control_028833(void);
 * Address  : 0x28833 (Size: 30 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_update_creature_control_085890
 ******************************************************************************/
longlong evil_update_creature_control_028833(void)

{
  undefined2 uval;
  uint arg_edx;
  int extraout_EDX;
  
  uval = creature_update_creature_control_085890();
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uval;
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : evil_update_creature_control_028851 (Original VA: 0x28851, Ghidra: FUN_00028851)
 * Prototype: undefined8 evil_update_creature_control_028851(void);
 * Address  : 0x28851 (Size: 179 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> anger_fn_010434, evil_update_creature_control_028aa0, person_fn_063b6d, room_process_dungeon_room_0ca474, room_fn_0cc4a0
 ******************************************************************************/
undefined8 evil_update_creature_control_028851(void)

{
  char *cctrl_ptr;
  undefined4 *word_ptr;
  int thing;
  int val;
  int extraout_ECX;
  undefined4 *word_ptr_2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr_2 = &uStack_14;
  uStack_14 = 1;
  uStack_18 = 0x28869;
  val = room_process_dungeon_room_0ca474();
  if (val == 0) {
    word_ptr_2 = &uStack_18;
    uStack_18 = 1;
    val = room_process_dungeon_room_0ca474();
    word_ptr = &uStack_18;
    if (val != 0) {
      evil_update_creature_control_028aa0();
      goto LAB_000288fa;
    }
  }
  else {
    uStack_18 = 0x2887a;
    val = room_fn_0cc4a0();
    word_ptr = &uStack_14;
    if (val != 0) {
      *(undefined1 *)(thing + 8) = 0x4c; /* thing->active_state */
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
           *(undefined2 *)(extraout_ECX + 1);
      goto LAB_000288fa;
    }
  }
  word_ptr_2 = word_ptr;
  if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x48) != '\0') { /* thing->ccontrol_idx */
    cctrl_ptr = (char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x48); /* thing->ccontrol_idx */
    *cctrl_ptr = *cctrl_ptr + -1;
    *(undefined4 *)((int)word_ptr_2 + -4) = 0x288f3;
    anger_fn_010434();
  }
  *(undefined4 *)((int)word_ptr_2 + -4) = 0x288fa;
  person_fn_063b6d();
LAB_000288fa:
  return CONCAT44(*(undefined4 *)((int)word_ptr_2 + 4),1);
}

/******************************************************************************
 * Function : evil_update_slab_subtile_columns_028904 (Original VA: 0x28904, Ghidra: FUN_00028904)
 * Prototype: undefined8 evil_update_slab_subtile_columns_028904(void);
 * Address  : 0x28904 (Size: 412 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 5 -> dungeon_remove_reserve_023868, inits_allocate_dynamic_light_shot_0444a9, person_fn_063b6d, person_update_creature_control_064ae7, sound_fn_06e538
 ******************************************************************************/
undefined8 evil_update_slab_subtile_columns_028904(void)

{
  char *cctrl_ptr;
  int thing;
  int slab_coord;
  uint cctrl_ptr_2;
  undefined4 *word_ptr;
  undefined1 *word_ptr_2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  word_ptr = (undefined4 *)&stack0xffffffec;
  word_ptr_2 = &stack0xffffffec;
  cctrl_ptr_2 = (uint)CONCAT11(*(undefined1 *)(thing + 0x10),*(undefined1 *)(thing + 0xe));
  if ((*(byte *)((int)&g_map_subtiles + cctrl_ptr_2 * 5) & 2) != 0) {
    slab_coord = ((&g_subtile_to_slab_lut)[cctrl_ptr_2 % 0x100] + (&g_subtile_to_slab_lut)[(int)cctrl_ptr_2 >> 8] * 0x55) * 6;
    if ((((uint)((&g_slabmap)[slab_coord] & 7) == (int)*(char *)(thing + 6)) && /* thing->owner */
        (*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) == 2)) &&
       ((*(short *)(&g_bss_002ddd2b + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) != 0 ||
        ((&g_bss_002e1086)[*(char *)(thing + 6) * 0x542] != 0)))) { /* thing->owner */
      slab_coord = (uint)*(byte *)(thing + 0x1a) * 0xe6;
      if (*(short *)(&g_bss_002e19a9 +
                    (uint)*(byte *)(thing + 0x1a) * 2 + *(char *)(thing + 6) * 0x1508) == 0) { /* thing->owner */
        cctrl_ptr_2 = ((uint)*(ushort *)(&g_bss_002e91a5 + slab_coord) *
                 (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
                (uint)*(ushort *)(&g_bss_002e91a5 + slab_coord);
      }
      else {
        cctrl_ptr_2 = (((uint)*(ushort *)(&g_bss_002e91a5 + slab_coord) *
                  (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
                (uint)*(ushort *)(&g_bss_002e91a5 + slab_coord)) / 2;
      }
      uStack_18 = 0x28a29;
      dungeon_remove_reserve_023868();
      if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x48) != '\0') { /* thing->ccontrol_idx */
        cctrl_ptr = (char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x48); /* thing->ccontrol_idx */
        *cctrl_ptr = *cctrl_ptr + -1;
      }
      uStack_18 = 0x28a49;
      person_fn_063b6d();
      uStack_18 = 0x28a55;
      slab_coord = inits_allocate_dynamic_light_shot_0444a9();
      if (slab_coord != 0) {
        uStack_18 = 0x100;
        uStack_1c = 2;
        uStack_20 = 0;
        word_ptr = &uStack_24;
        uStack_24 = 3;
        *(uint *)(slab_coord + 0x13) = cctrl_ptr_2;
        sound_fn_06e538();
      }
      *(uint *)(&g_bss_002e17ec + *(char *)(thing + 6) * 0x1508) = /* thing->owner */
           *(int *)(&g_bss_002e17ec + *(char *)(thing + 6) * 0x1508) + cctrl_ptr_2; /* thing->owner */
      word_ptr_2 = (undefined1 *)word_ptr;
      goto LAB_00028a96;
    }
  }
  uStack_18 = 0x28a96;
  person_update_creature_control_064ae7();
LAB_00028a96:
  return CONCAT44(*(undefined4 *)(word_ptr_2 + 8),1);
}

/******************************************************************************
 * Function : evil_update_creature_control_028aa0 (Original VA: 0x28aa0, Ghidra: FUN_00028aa0)
 * Prototype: undefined4 evil_update_creature_control_028aa0(void);
 * Address  : 0x28aa0 (Size: 91 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> evil_update_creature_control_028851, moodneed_shit_could_get_treasure_0525b2
 * Callees  : 2 -> move_update_creature_control_0b3b58, room_number_slabs_room_zero_0cc968
 ******************************************************************************/
undefined4 evil_update_creature_control_028aa0(void)

{
  char ch;
  short short_val;
  int thing;
  int arg_edx;
  
  ch = room_number_slabs_room_zero_0cc968();
  if ((ch != '\0') && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
    *(undefined1 *)(thing + 8) = 0x4c; /* thing->active_state */
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = *(undefined2 *)(arg_edx + 1) /* thing->ccontrol_idx */
    ;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : evil_update_creature_control_028afb (Original VA: 0x28afb, Ghidra: FUN_00028afb)
 * Prototype: undefined8 evil_update_creature_control_028afb(void);
 * Address  : 0x28afb (Size: 179 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> door_process_map_subtile_022b3a, person_update_creature_control_064ae7, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 evil_update_creature_control_028afb(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0x1d0) == 0) {
    if (*(short *)(cctrl_ptr + 0x80) != 0) {
      val = room_update_slab_subtile_columns_0d0f50();
      if ((val != 0) && (*(short *)(val + 1) == *(short *)(cctrl_ptr + 0x80))) {
        person_update_creature_control_064ae7();
        goto LAB_00028ba2;
      }
    }
  }
  else {
    val = door_process_map_subtile_022b3a(0x100);
    if (val != 0) {
      person_update_creature_control_064ae7();
      *(undefined2 *)(cctrl_ptr + 0x86) = *(undefined2 *)(val + 0x1b);
LAB_00028ba2:
      uval = 1;
      goto LAB_00028ba7;
    }
  }
  uval = 0;
LAB_00028ba7:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : evil_could_find_position_028bae (Original VA: 0x28bae, Ghidra: FUN_00028bae)
 * Prototype: undefined8 evil_could_find_position_028bae(void);
 * Address  : 0x28bae (Size: 471 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp lines 1212
 * Purpose  : String 'Could not find position'
 * Callers  : 0 -> 
 * Callees  : 5 -> anger_fn_010010, anger_fn_010434, light_process_map_subtile_0b2398, move_update_creature_control_0b3b58, LbErrorLog
 ******************************************************************************/
undefined8 evil_could_find_position_028bae(void)

{
  byte flag;
  byte flag_2;
  int thing_ptr;
  bool flag_3;
  short short_val;
  uint thing;
  uint thing_ptr_2;
  undefined4 uval;
  undefined4 arg_edx;
  int local_24;
  uint local_20;
  
  flag = *(byte *)(thing + 0xe);
  flag_2 = *(byte *)(thing + 0x10);
  anger_fn_010434();
  flag_3 = false;
  if ((((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x86) == 0) || /* thing->ccontrol_idx */
       (thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x86)], /* thing->ccontrol_idx */
       *(char *)(thing_ptr + 0x1f) != '\t')) || ((uint)(g_game_turn - *(int *)(thing_ptr + 9)) < 4)) || /* thing->class_id */
     (*(char *)(thing_ptr + 0x18) == '\0')) {
    person_update_creature_control_064ae7();
    uval = 1;
  }
  else {
    for (thing_ptr_2 = (*(uint *)((int)&g_map_subtiles + ((uint)flag_2 * 0x100 + (uint)flag) * 5 + 1) &
                 0x3fffff) >> 0xb; thing_ptr_2 = (&g_thing_ptrs)[thing_ptr_2], g_thing_ptrs < thing_ptr_2;
        thing_ptr_2 = (uint)*(ushort *)(thing_ptr_2 + 2)) {
      if (((thing_ptr_2 != thing) && (*(char *)(thing_ptr_2 + 0x1f) == '\x05')) && /* thing->class_id */
         ((*(ushort *)(thing_ptr_2 + 0x1b) < *(ushort *)(thing + 0x1b) && /* thing->index_or_angle */
          ((*(char *)(thing_ptr_2 + 7) == 'l' || (*(char *)(thing_ptr_2 + 8) == 'l')))))) { /* thing->active_state */
        flag_3 = true;
        break;
      }
    }
    if (flag_3) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      local_20 = g_action_random_seed >> 0xd;
      g_action_random_seed = local_20 | g_action_random_seed * 0x80000;
      local_20 = local_20 & 3;
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        if ((*(byte *)((int)&g_map_subtiles +
                      (((int)(char)(&g_data_0018b67f)[local_20 * 2] + (uint)flag_2) * 0x100 +
                      (uint)flag + (int)*(char *)((int)&g_data_0018b67b + local_20 * 2 + 3)) * 5) &
            0x10) == 0) {
          thing_ptr_2 = light_process_map_subtile_0b2398();
          if ((thing_ptr_2 & 0xfffffffe) != 0x28) {
            short_val = move_update_creature_control_0b3b58();
            if (short_val != 0) {
              uval = 1;
              *(undefined1 *)(thing + 8) = 0x6c; /* thing->active_state */
              goto LAB_00028ba7;
            }
          }
        }
        local_20 = (int)(local_20 + 1) % 4;
      }
      LbErrorLog(); /* LbErrorLog("evil.cpp", line 1212, "Could not find position") */
    }
    anger_fn_010010();
    uval = 0;
  }
LAB_00028ba7:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : evil_update_creature_control_028d85 (Original VA: 0x28d85, Ghidra: FUN_00028d85)
 * Prototype: undefined8 evil_update_creature_control_028d85(void);
 * Address  : 0x28d85 (Size: 267 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> dungeon_attempt_get_random_position_0239ee, creature_fn_0827fc, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 evil_update_creature_control_028d85(void)

{
  int cctrl_ptr;
  char ch;
  short short_val;
  int thing;
  undefined4 arg_edx;
  uint rand_seed;
  int local_20;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  rand_seed = g_action_random_seed % 5;
  local_20 = 0;
  do {
    if (4 < local_20) {
LAB_00028ba2:
      return CONCAT44(arg_edx,1);
    }
    if (((&g_players)[rand_seed * 0x4ef] & 1) != 0) {
      ch = dungeon_attempt_get_random_position_0239ee();
      if (ch != '\0') {
        ch = creature_fn_0827fc();
        if (ch != '\0') {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            if ((uint)(g_game_turn - *(int *)(cctrl_ptr + 0x4e)) < 0xc9) {
              *(undefined1 *)(thing + 8) = 0x6f; /* thing->active_state */
            }
            else {
              *(undefined2 *)(cctrl_ptr + 0x282) = 0x32;
              *(undefined1 *)(thing + 8) = 0x7d; /* thing->active_state */
            }
            goto LAB_00028ba2;
          }
        }
        if (200 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x4e))) {
          *(undefined2 *)(cctrl_ptr + 0x282) = 0x32;
          person_update_creature_control_064ae7();
        }
        goto LAB_00028ba2;
      }
    }
    rand_seed = (int)(rand_seed + 1) % 5;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : evil_update_creature_control_028e90 (Original VA: 0x28e90, Ghidra: FUN_00028e90)
 * Prototype: undefined4 evil_update_creature_control_028e90(void);
 * Address  : 0x28e90 (Size: 36 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 evil_update_creature_control_028e90(void)

{
  int cctrl_ptr;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0x9a) = 0;
  *(undefined4 *)(cctrl_ptr + 0x9c) = 0;
  return 1;
}

/******************************************************************************
 * Function : evil_update_creature_and_thing_028eb4 (Original VA: 0x28eb4, Ghidra: FUN_00028eb4)
 * Prototype: undefined8 evil_update_creature_and_thing_028eb4(void);
 * Address  : 0x28eb4 (Size: 776 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 10 -> anger_fn_010408, combchk_update_creature_control_015f21, dungeon_attempt_get_random_position_0239ee, instance_negative_instance_049bfc, person_fn_063b6d, sound_fn_06e538, move_update_creature_control_0b3b58, move_update_creature_control_0b3c00 ...
 ******************************************************************************/
undefined8 evil_update_creature_and_thing_028eb4(void)

{
  byte flag;
  int cctrl_ptr;
  char ch;
  short short_val;
  int thing;
  int val;
  uint uval;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 arg_edx;
  byte *thing_ptr_2;
  int local_1c;
  byte *thing_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  flag = *(byte *)(thing + 6); /* thing->owner */
  local_1c = 0x7fffffff;
  if (*(short *)(cctrl_ptr + 0x9a) == 0) {
    thing_ptr_2 = (byte *)0x0;
  }
  else {
    thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x9a)];
    if (((*thing_ptr_2 & 1) == 0) || (*(int *)(thing_ptr_2 + 9) != *(int *)(cctrl_ptr + 0x9c))) {
      thing_ptr_2 = (byte *)0x0;
      *(undefined4 *)(cctrl_ptr + 0x9c) = 0;
      *(undefined2 *)(cctrl_ptr + 0x9a) = *(undefined2 *)(cctrl_ptr + 0x9c);
    }
  }
  if (0x40 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0xa0))) {
    *(int *)(cctrl_ptr + 0xa0) = g_game_turn;
    uval = g_bss_002e6eb6;
    while (thing_ptr = (&g_thing_ptrs)[uval], thing_ptr != g_thing_ptrs) {
      if (((thing_ptr[6] != flag) && (val = combchk_update_creature_control_015f21(), thing_ptr = extraout_ECX, val != 0)) &&
         (val = update_fn_0dc440(), thing_ptr = extraout_ECX_00, val < local_1c)) {
        thing_ptr_2 = extraout_ECX_00;
        local_1c = val;
      }
      uval = (uint)*(ushort *)(thing_ptr + 0x67);
    }
  }
  if (g_thing_ptrs < thing_ptr_2) {
    *(undefined2 *)(cctrl_ptr + 0x9a) = *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    *(undefined4 *)(cctrl_ptr + 0x9c) = *(undefined4 *)(thing_ptr_2 + 9);
    update_fn_0dc440();
    val = anger_fn_010408();
    if (val != 0) {
      if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
        if ((extraout_ECX_01 < 0x900) && ((uint)(g_game_turn - *(short *)(cctrl_ptr + 0x282)) < 0x14))
        {
          instance_negative_instance_049bfc(0);
          g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
          g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
          sound_fn_06e538(3,0,2,0x100);
        }
        else {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          uval = g_action_random_seed >> 0xd;
          g_action_random_seed = uval | g_action_random_seed * 0x80000;
          if ((((uval & 3) != 0) && (short_val = move_update_creature_control_0b3c00(), short_val != 0)) ||
             (short_val = move_process_slabmap_tile_0b5264(), short_val != 0)) {
            *(undefined1 *)(thing + 8) = 0x73; /* thing->active_state */
            *(undefined2 *)(cctrl_ptr + 0x282) = (undefined2)g_game_turn;
          }
        }
      }
      goto LAB_00028ba7;
    }
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    uval = g_action_random_seed >> 0xd;
    g_action_random_seed = uval | g_action_random_seed * 0x80000;
    if (((uval & 0x3f) == 0) && (short_val = move_update_creature_control_0b3c00(), short_val != 0)) {
      *(undefined1 *)(thing + 8) = 0x73; /* thing->active_state */
    }
  }
  else {
    *(undefined2 *)(cctrl_ptr + 0x9a) = 0;
  }
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  if (g_action_random_seed % 0xc == 0) {
    ch = dungeon_attempt_get_random_position_0239ee();
    if (ch != '\0') {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) {
        *(undefined1 *)(thing + 8) = 0x73; /* thing->active_state */
      }
      goto LAB_00028ba7;
    }
  }
  else {
    short_val = move_process_slabmap_tile_0b5264();
    if (short_val != 0) {
      *(undefined1 *)(thing + 8) = 0x73; /* thing->active_state */
      goto LAB_00028ba7;
    }
  }
  person_fn_063b6d();
LAB_00028ba7:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : evil_update_creature_control_0291bc (Original VA: 0x291bc, Ghidra: FUN_000291bc)
 * Prototype: longlong evil_update_creature_control_0291bc(void);
 * Address  : 0x291bc (Size: 152 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 3 -> evil_roll_action_random_029396, instance_negative_instance_049bfc, person_fn_063b6d
 ******************************************************************************/
longlong evil_update_creature_control_0291bc(void)

{
  int thing;
  int val;
  uint arg_edx;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  if ((uint)(byte)(&g_bss_002d33c8)
                  [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                   (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] * 0x45 == 0) {
    uStack_14 = 0x29242;
    val = evil_roll_action_random_029396();
    if (val == 0) {
      uStack_14 = 0x2924d;
      person_fn_063b6d();
      return (ulonglong)arg_edx << 0x20;
    }
  }
  else {
    word_ptr = (undefined4 *)&stack0xfffffff0;
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) == '\0') { /* thing->ccontrol_idx */
      word_ptr = &uStack_14;
      uStack_14 = 0;
      instance_negative_instance_049bfc();
    }
  }
  return CONCAT44(*(undefined4 *)((int)word_ptr + 4),1);
}

/******************************************************************************
 * Function : evil_do_this_destroy_room_029254 (Original VA: 0x29254, Ghidra: FUN_00029254)
 * Prototype: undefined4 evil_do_this_destroy_room_029254(void);
 * Address  : 0x29254 (Size: 322 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp lines 1536
 * Purpose  : String 'Cannot do this 'destroy room' stuff'
 * Callers  : 2 -> evil_roll_action_random_02855c, evil_roll_action_random_029396
 * Callees  : 6 -> event_fn_0274ad, moodneed_fn_051374, creature_fn_0827fc, room_fn_0cc45c, room_could_find_valid_first_0ccc08, LbErrorLog
 ******************************************************************************/
undefined4 evil_do_this_destroy_room_029254(void)

{
  short room_ptr;
  char ch;
  int thing;
  int room_off;
  int val;
  uint arg_edx;
  uint arg_ebx;
  
  room_off = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[arg_ebx & 0xff] * 0x55 + (&g_subtile_to_slab_lut)[arg_edx & 0xff]) *
                       6] * 0x45;
  if ((((room_off != 0) && ((&g_bss_002ddd1e)[room_off] != *(char *)(thing + 6))) && /* thing->owner */
      (room_ptr = *(short *)(&g_room_slabs_count + room_off), room_ptr != 7)) && ((room_ptr != 1 && (room_ptr != 0xf))))
  {
    ch = room_could_find_valid_first_0ccc08();
    if (ch != '\0') {
      ch = creature_fn_0827fc();
      if (ch != '\0') {
        val = room_fn_0cc45c();
        if (val != 0) {
          event_fn_0274ad(0);
          if ((int)(char)(&g_bss_002ddd1e)[room_off] ==
              (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
            moodneed_fn_051374();
          }
          *(undefined1 *)(thing + 8) = 0x87; /* thing->active_state */
          *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
               *(undefined2 *)(&g_bss_002ddd1c + room_off);
          return 1;
        }
        LbErrorLog(); /* LbErrorLog("evil.cpp", line 1536, "Cannot do this 'destroy room' stuff") */
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : evil_roll_action_random_029396 (Original VA: 0x29396, Ghidra: FUN_00029396)
 * Prototype: undefined8 evil_roll_action_random_029396(void);
 * Address  : 0x29396 (Size: 141 bytes)
 * Module   : evil.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> evil_update_creature_control_0291bc
 * Callees  : 1 -> evil_do_this_destroy_room_029254
 ******************************************************************************/
undefined8 evil_roll_action_random_029396(void)

{
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  int val_2;
  
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  val_2 = 0;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  do {
    if (3 < val_2) {
      uval = 0;
LAB_00028ba8:
      return CONCAT44(arg_edx,uval);
    }
    val = evil_do_this_destroy_room_029254();
    if (val != 0) {
      uval = 1;
      goto LAB_00028ba8;
    }
    val_2 = val_2 + 1;
  } while( true );
}

/******************************************************************************
 * Function : evil_fn_029423 (Original VA: 0x29423, Ghidra: FUN_00029423)
 * Prototype: undefined8 evil_fn_029423(void);
 * Address  : 0x29423 (Size: 167 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Module evil.cpp procedure @ 0x029423
 * Callers  : 0 -> 
 * Callees  : 3 -> dungeon_attempt_get_random_position_0239ee, person_fn_063b6d, move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 evil_fn_029423(void)

{
  char ch;
  short short_val;
  int arg_eax;
  undefined4 uval;
  undefined4 arg_edx;
  
  ch = dungeon_attempt_get_random_position_0239ee();
  if (ch == '\0') {
LAB_00029478:
    ch = dungeon_attempt_get_random_position_0239ee();
    if (ch != '\0') {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) goto LAB_0002946d;
    }
    person_fn_063b6d();
    uval = 0;
  }
  else {
    short_val = move_update_creature_control_0b3b58();
    if (short_val == 0) goto LAB_00029478;
LAB_0002946d:
    uval = 1;
    *(undefined1 *)(arg_eax + 8) = 0x11;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : evil_update_creature_control_0294ca (Original VA: 0x294ca, Ghidra: FUN_000294ca)
 * Prototype: longlong evil_update_creature_control_0294ca(void);
 * Address  : 0x294ca (Size: 460 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> evil_update_creature_control_029696
 * Callees  : 2 -> instance_update_creature_control_049e95, instance_update_creature_control_049ea9
 ******************************************************************************/
longlong evil_update_creature_control_0294ca(void)

{
  char ch;
  int thing;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  uint arg_edx;
  
  if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xac) & 0x40) == 0) { /* thing->ccontrol_idx */
    val = instance_update_creature_control_049e95();
    if (val != 0) {
      val = instance_update_creature_control_049ea9();
      if (val != 0) {
        return CONCAT44(arg_edx,0x19);
      }
    }
  }
  val_2 = instance_update_creature_control_049e95();
  val = extraout_ECX;
  if ((val_2 != 0) &&
     ((int)*(short *)(thing + 0x5e) < (int)(((uint)*(ushort *)(extraout_ECX + 0xc6) * 2) / 3))) {
    val_2 = instance_update_creature_control_049ea9();
    val = extraout_ECX_00;
    if (val_2 != 0) {
      return CONCAT44(arg_edx,0xb);
    }
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch != ')') {
    if (*(char *)(thing + 7) == '\x0e') {
      ch = *(char *)(thing + 8); /* thing->active_state */
    }
    else {
      ch = *(char *)(thing + 7);
    }
    if (ch != '(') {
      if (*(char *)(thing + 7) == '\x0e') {
        ch = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing + 7);
      }
      if (ch != '+') {
        if (*(char *)(thing + 7) == '\x0e') {
          ch = *(char *)(thing + 8); /* thing->active_state */
        }
        else {
          ch = *(char *)(thing + 7);
        }
        if (ch != '*') {
          if ((*(byte *)(val + 0xad) & 4) != 0) {
            val_2 = instance_update_creature_control_049e95();
            val = extraout_ECX_01;
            if (val_2 != 0) {
              val_2 = instance_update_creature_control_049ea9();
              val = extraout_ECX_02;
              if (val_2 != 0) {
                return CONCAT44(arg_edx,0x16);
              }
            }
          }
          if ((*(byte *)(val + 0xac) & 2) == 0) {
            val_2 = instance_update_creature_control_049e95();
            val = extraout_ECX_03;
            if (val_2 != 0) {
              val_2 = instance_update_creature_control_049ea9();
              val = extraout_ECX_04;
              if (val_2 != 0) {
                return CONCAT44(arg_edx,0xf);
              }
            }
          }
          if ((*(byte *)(val + 0xac) & 0x10) == 0) {
            val_2 = instance_update_creature_control_049e95();
            val = extraout_ECX_05;
            if (val_2 != 0) {
              val_2 = instance_update_creature_control_049ea9();
              val = extraout_ECX_06;
              if (val_2 != 0) {
                return CONCAT44(arg_edx,0x18);
              }
            }
          }
          if ((*(byte *)(val + 0xac) & 0x20) == 0) {
            val = instance_update_creature_control_049e95();
            if (val != 0) {
              val = instance_update_creature_control_049ea9();
              if (val != 0) {
                return CONCAT44(arg_edx,0xd);
              }
            }
          }
        }
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : evil_update_creature_control_029696 (Original VA: 0x29696, Ghidra: FUN_00029696)
 * Prototype: longlong evil_update_creature_control_029696(void);
 * Address  : 0x29696 (Size: 160 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 2 -> evil_update_creature_control_0294ca, instance_negative_instance_049bfc
 ******************************************************************************/
longlong evil_update_creature_control_029696(void)

{
  byte *thing;
  int val;
  uint arg_edx;
  undefined4 unaff_ESI;
  
  if ((((((*thing & 0x20) == 0) &&
        (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x280) == 0)) && /* thing->ccontrol_idx */
       ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xab) & 2) == 0)) && /* thing->ccontrol_idx */
      (((&g_data_0018c4be)[(uint)thing[7] * 0x29] != '\0' &&
       (((&g_data_0018c4be)[(uint)thing[7] * 0x29] != '\x06' ||
        ((&g_data_0018c4be)[(uint)thing[8] * 0x29] != '\0')))))) &&
     (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2) == '\0')) { /* thing->ccontrol_idx */
    val = evil_update_creature_control_0294ca();
    if (val != 0) {
      instance_negative_instance_049bfc(0);
      return CONCAT44(unaff_ESI,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : evil_settings_dat_029738 (Original VA: 0x29738, Ghidra: FUN_00029738)
 * Prototype: undefined8 evil_settings_dat_029738(void);
 * Address  : 0x29738 (Size: 200 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : String 'SETTINGS.DAT'
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 8 -> cdtest_ldata_dkwind00_dat_0150f0, compturn_fn_02245b, file_settings_dat_02a355, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, LbFileClose, bflib_system_io_fn_0e984c
 ******************************************************************************/
undefined8 evil_settings_dat_029738(void)

{
  bool flag;
  char ch;
  undefined4 uval;
  int val;
  uint uval_2;
  undefined4 arg_edx;
  undefined1 local_c0 [152];
  int local_28;
  
  compturn_fn_02245b();
  prepare_file_path(s_SETTINGS_DAT_001629f8); /* 0x1629f8="SETTINGS.DAT" */
  uval = prepare_file_path();
  dk_sprintf(local_c0,s__s__s_00162a0c,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  flag = true;
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    val = bflib_system_io_fn_0e984c();
    if (val == 0x52) {
      flag = false;
    }
  }
  if (flag) {
    LbFileClose();
    if (local_28 == 0) {
      uval_2 = 4;
    }
    else {
      uval_2 = local_28 >> 8 & 0xf;
    }
    if ((5 < uval_2) && (0xf < g_bss_00334065)) {
      g_bss_002ee8dc = 0xd;
    }
    file_settings_dat_02a355();
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : evil_fn_029800 (Original VA: 0x29800, Ghidra: FUN_00029800)
 * Prototype: undefined8 evil_fn_029800(void);
 * Address  : 0x29800 (Size: 181 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Module evil.cpp procedure @ 0x029800
 * Callers  : 1 -> inits_fn_0401ec
 * Callees  : 6 -> cdtest_ldata_dkwind00_dat_0150f0, light_fn_0b224c, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
undefined8 evil_fn_029800(void)

{
  char ch;
  undefined4 uval;
  int loop_i;
  undefined4 arg_edx;
  int val;
  int *int_ptr;
  int *int_ptr_2;
  int *int_ptr_3;
  int *int_ptr_4;
  int *int_ptr_5;
  byte flag;
  undefined1 local_ac [152];
  
  flag = 0;
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_ac,s__s_Cube_dat_00162a19,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  ch = bflib_system_io_fn_0e8960();
  if (ch == '\0') {
    uval = 0;
  }
  else {
    light_fn_0b224c();
    bflib_system_io_fn_0e984c();
    val = *g_scratch_work_buf;
    if (val < 0) {
      val = 0;
    }
    else if (0x1ff < val) {
      val = 0x1ff;
    }
    int_ptr = g_scratch_work_buf + 1;
    for (loop_i = 0; loop_i <= val * 0x12; loop_i = loop_i + 0x12) {
      int_ptr_4 = (int *)((int)&g_bss_001aa977 + (uint)flag * -8 + loop_i);
      int_ptr_2 = int_ptr + (uint)flag * -2 + 1;
      *(int *)((int)&g_bss_001aa973 + loop_i) = *int_ptr;
      int_ptr_5 = int_ptr_4 + (uint)flag * -2 + 1;
      int_ptr_3 = int_ptr_2 + (uint)flag * -2 + 1;
      *int_ptr_4 = *int_ptr_2;
      *int_ptr_5 = *int_ptr_3;
      int_ptr_5[(uint)flag * -2 + 1] = int_ptr_3[(uint)flag * -2 + 1];
      *(short *)(int_ptr_5 + (uint)flag * -2 + 1 + (uint)flag * -2 + 1) =
           (short)(int_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      int_ptr = (int *)((int)int_ptr + 0x12);
    }
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : evil_process_map_subtile_0298b5 (Original VA: 0x298b5, Ghidra: FUN_000298b5)
 * Prototype: longlong evil_process_map_subtile_0298b5(void);
 * Address  : 0x298b5 (Size: 196 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 6 -> cdtest_ldata_dkwind00_dat_0150f0, light_fn_0b20e0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e8960, bflib_system_io_fn_0e984c
 ******************************************************************************/
longlong evil_process_map_subtile_0298b5(void)

{
  uint *word_ptr;
  short short_val;
  char ch;
  undefined4 uval;
  int val;
  int val_2;
  uint arg_edx;
  short *val_3;
  undefined1 local_a4 [152];
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(local_a4,s__s_MAP_05d_dat_00162a2e,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  val_3 = &g_bss_00299201;
  ch = bflib_system_io_fn_0e8960();
  if (ch != '\0') {
    light_fn_0b20e0();
    bflib_system_io_fn_0e984c();
    val_2 = 0x4fffb;
    do {
      val = val_2 + -5;
      short_val = *val_3;
      *(undefined1 *)((int)&g_map_subtiles + val_2 + 1) = 0;
      *(byte *)((int)&g_bss_00279205 + val_2) = *(byte *)((int)&g_bss_00279205 + val_2) & 0xf8;
      val_3 = val_3 + -1;
      word_ptr = (uint *)((int)&g_map_subtiles + val_2 + 1);
      *word_ptr = *word_ptr | -(int)short_val & 0x7ffU;
      val_2 = val;
    } while (val != -5);
    val = 0;
    val_2 = 0;
    do {
      *(undefined2 *)((int)&g_bss_001e3203 + val) = 0x20;
      val = val + 2;
      word_ptr = (uint *)((int)&g_map_subtiles + val_2 + 1);
      *word_ptr = *word_ptr & 0xc007ff;
      val_2 = val_2 + 5;
    } while (val != 0x20000);
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

