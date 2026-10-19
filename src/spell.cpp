/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: spell.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : spell_type_thing_0713cc (Original VA: 0x713cc, Ghidra: FUN_000713cc)
 * Prototype: int spell_type_thing_0713cc(void);
 * Address  : 0x713cc (Size: 74 bytes)
 * Module   : spell.cpp [direct_file_string_xref]
 * OrigLine : spell.cpp lines 22
 * Purpose  : String 'NO SPELL OF TYPE ON THING'
 * Callers  : 2 -> prison_update_creature_and_thing_06616d, spell_update_creature_control_07231c
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
int spell_type_thing_0713cc(void)

{
  int thing;
  int cctrl_ptr;
  uint arg_edx;
  int val;
  
  val = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  while( true ) {
    if (4 < val) {
      LbErrorLog(); /* LbErrorLog("spell.cpp", line 22, "NO SPELL OF TYPE ON THING") */
      return 0;
    }
    if (*(byte *)(cctrl_ptr + 0x1d4) == arg_edx) break;
    cctrl_ptr = cctrl_ptr + 4;
    val = val + 1;
  }
  return (int)*(short *)(cctrl_ptr + 0x1d5);
}

/******************************************************************************
 * Function : spell_update_creature_control_071416 (Original VA: 0x71416, Ghidra: FUN_00071416)
 * Prototype: void spell_update_creature_control_071416(void);
 * Address  : 0x71416 (Size: 389 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 5 -> spell_update_creature_control_071edd, spell_could_find_teleport_destination_07225e, creature_update_creature_and_thing_082cac, creature_update_creature_control_085890, move_fn_0b3b10
 ******************************************************************************/
void spell_update_creature_control_071416(void)

{
  short *val;
  int cctrl_ptr;
  ulonglong rand_seed;
  undefined2 uval;
  int thing;
  uint rand_seed_2;
  uint rand_seed_3;
  int extraout_ECX;
  int val_2;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val_2 = cctrl_ptr;
  do {
    if (*(char *)(val_2 + 0x1d4) != '\0') {
      if ((*(char *)(val_2 + 0x1d4) == '\n') && ((int)*(short *)(val_2 + 0x1d5) == g_bss_001ae9ac / 2)
         ) {
        spell_could_find_teleport_destination_07225e();
        move_fn_0b3b10();
        creature_update_creature_and_thing_082cac();
        if ((*(byte *)(extraout_ECX + 0x25) & 0x20) == 0) {
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          rand_seed_2 = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          g_action_random_seed = rand_seed_2 * 0x24a1 + 0x24df;
          rand_seed_3 = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          g_action_random_seed = rand_seed_3 * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          rand_seed = (ulonglong)g_action_random_seed;
          *(short *)(extraout_ECX + 0x32) =
               *(short *)(extraout_ECX + 0x32) + (short)(rand_seed_2 % 0xc0) + -0x60;
          *(short *)(extraout_ECX + 0x34) =
               *(short *)(extraout_ECX + 0x34) + (short)(rand_seed_3 % 0xc0) + -0x60;
          *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) | 4;
          *(short *)(extraout_ECX + 0x36) =
               *(short *)(extraout_ECX + 0x36) + (short)(rand_seed % 0x60) + 0x28;
        }
      }
      *(short *)(val_2 + 0x1d5) = *(short *)(val_2 + 0x1d5) + -1;
      if (*(short *)(val_2 + 0x1d5) < 1) {
        spell_update_creature_control_071edd();
      }
    }
    val_2 = val_2 + 4;
  } while (val_2 != cctrl_ptr + 0x14);
  if (*(short *)(cctrl_ptr + 0x21) != 0) {
    val = (short *)(cctrl_ptr + 0x21);
    *val = *val + -1;
    if (*val == 0) {
      uval = creature_update_creature_control_085890();
      *(undefined2 *)(cctrl_ptr + 0xc4) = uval;
    }
  }
  return;
}

/******************************************************************************
 * Function : spell_update_creature_control_07159b (Original VA: 0x7159b, Ghidra: FUN_0007159b)
 * Prototype: undefined8 spell_update_creature_control_07159b(void);
 * Address  : 0x7159b (Size: 102 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> spell_update_creature_control_0717de
 * Callees  : 1 -> spell_update_creature_control_071edd
 ******************************************************************************/
undefined8 spell_update_creature_control_07159b(void)

{
  int thing;
  int cctrl_ptr;
  int extraout_ECX;
  undefined4 arg_edx;
  int loop_i;
  int local_1c;
  
  local_1c = 0x7fffffff;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  for (loop_i = 0; loop_i < 5; loop_i = loop_i + 1) {
    if (*(char *)(cctrl_ptr + 0x1d4) == '\0') goto LAB_00071594;
    if (*(short *)(cctrl_ptr + 0x1d5) < local_1c) {
      local_1c = (int)*(short *)(cctrl_ptr + 0x1d5);
    }
    cctrl_ptr = cctrl_ptr + 4;
  }
  spell_update_creature_control_071edd();
  loop_i = extraout_ECX;
LAB_00071594:
  return CONCAT44(arg_edx,loop_i);
}

/******************************************************************************
 * Function : spell_update_creature_control_071601 (Original VA: 0x71601, Ghidra: FUN_00071601)
 * Prototype: void spell_update_creature_control_071601(void);
 * Address  : 0x71601 (Size: 477 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> spell_update_creature_control_0717de
 * Callees  : 2 -> anger_update_creature_control_01017e, person_external_change_state_but_064a5f
 ******************************************************************************/
void spell_update_creature_control_071601(void)

{
  int cctrl_ptr;
  undefined2 uval;
  int thing;
  int arg_ecx;
  int extraout_ECX;
  uint arg_edx;
  int arg_ebx;
  int cctrl_ptr_2;
  int val;
  
  val = arg_ebx * 4;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  cctrl_ptr_2 = arg_ecx * 4 + cctrl_ptr;
  if (arg_edx < 0xb) {
    if (arg_edx < 6) {
      if (2 < arg_edx) {
        if (arg_edx < 4) {
          *(undefined2 *)(cctrl_ptr + 0x1d5 + arg_ecx * 4) = g_bss_001ae990;
          anger_update_creature_control_01017e();
          return;
        }
        if (arg_edx == 4) {
          *(undefined2 *)(cctrl_ptr + 0x1d5 + arg_ecx * 4) =
               *(undefined2 *)(&g_bss_002eb1c9 + arg_ebx * 4);
          return;
        }
      }
      return;
    }
    uval = g_bss_001ae99c;
    if (6 < arg_edx) {
      if (arg_edx < 9) {
        if (arg_edx == 7) {
          *(short *)(thing + 0x5e) = *(short *)(thing + 0x5e) + *(short *)(&g_bss_002eb099 + val);
          if (*(short *)(thing + 0x5e) < 0) {
            *(undefined2 *)(thing + 0x5e) = 0;
          }
          else {
            cctrl_ptr_2 = (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * /* thing->ccontrol_idx */
                          (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] * 0x23)
                    / 100 + (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73];
            if (cctrl_ptr_2 < *(short *)(thing + 0x5e)) {
              *(short *)(thing + 0x5e) = (short)cctrl_ptr_2;
            }
          }
          *(undefined1 *)(cctrl_ptr + 0x2b0) = 7;
          *(undefined2 *)(cctrl_ptr + 0x2ae) = g_bss_002eb095;
          return;
        }
        return;
      }
      uval = (undefined2)g_bss_001ae9ac;
      if (arg_edx < 10) {
        uval = *(undefined2 *)(&g_bss_002eb215 + val);
      }
    }
  }
  else if (arg_edx < 0xc) {
    uval = *(undefined2 *)(&g_bss_002eb17d + val);
  }
  else if (arg_edx < 0x14) {
    uval = g_bss_001ae9b4;
    if ((0xc < arg_edx) && (uval = g_bss_001ae9d0, arg_edx != 0x13)) {
      return;
    }
  }
  else {
    uval = g_bss_001ae9d4;
    if (0x14 < arg_edx) {
      if (arg_edx < 0x1a) {
        uval = g_bss_001ae9d8;
        if (arg_edx != 0x15) {
          return;
        }
      }
      else {
        if (arg_edx < 0x1b) {
          *(undefined2 *)(cctrl_ptr_2 + 0x1d5) = *(undefined2 *)(&g_bss_002eb261 + val);
          *(undefined1 *)(cctrl_ptr + 0xb6) = *(undefined1 *)(thing + 6); /* thing->owner */
          return;
        }
        if (arg_edx != 0x1b) {
          return;
        }
        person_external_change_state_but_064a5f();
        *(undefined2 *)(extraout_ECX + 0x282) = 10;
        uval = *(undefined2 *)(&g_bss_002eb2ad + val);
      }
    }
  }
  *(undefined2 *)(cctrl_ptr_2 + 0x1d5) = uval;
  return;
}

/******************************************************************************
 * Function : spell_update_creature_control_0717de (Original VA: 0x717de, Ghidra: FUN_000717de)
 * Prototype: void spell_update_creature_control_0717de(void);
 * Address  : 0x717de (Size: 1721 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 11 -> effect_update_creature_and_thing_025af0, magic_fn_04f3bc, magic_update_player_view_state_04f41d, magic_fn_04f4f1, magic_fn_04f552, magic_update_creature_control_04f5b3, magic_update_creature_control_04f87e, setup_compute_creature_eye_offset ...
 * Callees  : 7 -> anger_update_creature_control_01017e, anger_fn_010d08, inits_allocate_light_object_043f07, person_external_change_state_but_064a5f, spell_update_creature_control_07159b, spell_update_creature_control_071601, creature_update_creature_control_085890
 ******************************************************************************/
void spell_update_creature_control_0717de(void)

{
  undefined2 uval;
  int thing;
  int val;
  int thing_ptr;
  int extraout_ECX;
  uint arg_edx;
  int arg_ebx;
  int val_2;
  byte flag;
  undefined8 uval_2;
  short local_38 [4];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  flag = 0;
  thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val_2 = thing_ptr;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (*(byte *)(val_2 + 0x1d4) == arg_edx) {
      spell_update_creature_control_071601();
      return;
    }
    val_2 = val_2 + 4;
  }
  val_2 = arg_ebx * 4;
  if (arg_edx < 0xb) {
    if (arg_edx < 6) {
      if (2 < arg_edx) {
        if (arg_edx < 4) {
          val_2 = spell_update_creature_control_07159b();
          if (val_2 != -1) {
            *(undefined1 *)(thing_ptr + 0x1d4 + val_2 * 4) = 3;
            *(undefined2 *)(thing_ptr + 0x1d5 + val_2 * 4) = g_bss_001ae990;
            *(byte *)(thing_ptr + 0xab) = *(byte *)(thing_ptr + 0xab) | 2;
            if ((*(byte *)(thing + 0x25) & 0x20) != 0) {
              *(byte *)(thing_ptr + 0xad) = *(byte *)(thing_ptr + 0xad) | 0x80;
              *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xdf;
            }
            anger_update_creature_control_01017e();
            return;
          }
        }
        else if (arg_edx == 4) {
          uval_2 = spell_update_creature_control_07159b();
          local_1c = (int)((ulonglong)uval_2 >> 0x20);
          val_2 = (int)uval_2;
          if (val_2 != -1) {
            *(undefined1 *)(thing_ptr + 0x1d4 + val_2 * 4) = 4;
            local_14 = 0;
            *(undefined2 *)(thing_ptr + 0x1d5 + val_2 * 4) =
                 *(undefined2 *)(&g_bss_002eb1c9 + local_1c * 4);
            local_28 = 0;
            local_1c = local_1c << 2;
            *(byte *)(thing_ptr + 0xac) = *(byte *)(thing_ptr + 0xac) | 4;
            local_2c = thing_ptr;
            do {
              local_38[(uint)flag * -4] = *(short *)(thing + 0x11 + (uint)flag * -8);
              local_38[0] = local_38[0] + (short)local_14 * (*(ushort *)(thing + 0x58) / 2);
              thing_ptr = inits_allocate_light_object_043f07();
              if (thing_ptr != 0) {
                *(undefined2 *)(local_2c + 0x2b3) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
                *(short *)(thing_ptr + 0x5e) = *(short *)(&g_bss_002eb1c9 + local_1c) + 1;
                *(undefined2 *)(thing_ptr + 0x13) = *(undefined2 *)(thing + 0x1b); /* thing->anim_sprite, thing->index_or_angle */
                *(undefined1 *)(thing_ptr + 0x15) = (undefined1)local_14;
                *(undefined2 *)(thing_ptr + 0x52) = *(undefined2 *)(thing + 0x52); /* thing->health */
                *(undefined2 *)(thing_ptr + 0x54) = *(undefined2 *)(thing + 0x54);
                anger_fn_010d08();
                *(short *)(thing_ptr + 0x32) = *(short *)(thing_ptr + 0x32) + local_38[2];
                *(short *)(thing_ptr + 0x34) = *(short *)(thing_ptr + 0x34) + local_38[3];
                *(byte *)(thing_ptr + 1) = *(byte *)(thing_ptr + 1) | 4;
                *(short *)(thing_ptr + 0x36) = *(short *)(thing_ptr + 0x36) + local_30;
              }
              local_28 = local_28 + 0xaa8;
              local_14 = local_14 + 1;
              local_2c = local_2c + 2;
            } while (local_14 < 3);
          }
        }
      }
    }
    else if (arg_edx < 7) {
      val_2 = spell_update_creature_control_07159b();
      if (val_2 != -1) {
        *(undefined1 *)(thing_ptr + 0x1d4 + val_2 * 4) = 6;
        *(undefined2 *)(thing_ptr + 0x1d5 + val_2 * 4) = g_bss_001ae99c;
        *(byte *)(thing_ptr + 0xac) = *(byte *)(thing_ptr + 0xac) | 8;
        return;
      }
    }
    else {
      if (arg_edx < 9) {
        if (arg_edx != 7) {
          return;
        }
        *(short *)(thing + 0x5e) = *(short *)(thing + 0x5e) + *(short *)(&g_bss_002eb099 + val_2);
        if (*(short *)(thing + 0x5e) < 0) {
          *(undefined2 *)(thing + 0x5e) = 0;
        }
        else if ((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] *
                       (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 0x23) / /* thing->ccontrol_idx */
                 100 + (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] <
                 (int)*(short *)(thing + 0x5e)) {
          *(short *)(thing + 0x5e) =
               (&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] +
               (short)((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] *
                             (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * /* thing->ccontrol_idx */
                            0x23) / 100);
        }
        *(undefined1 *)(thing_ptr + 0x2b0) = 7;
        *(undefined2 *)(thing_ptr + 0x2ae) = g_bss_002eb095;
        return;
      }
      if (arg_edx < 10) {
        val = spell_update_creature_control_07159b();
        if (val != -1) {
          *(undefined1 *)(thing_ptr + 0x1d4 + val * 4) = 9;
          *(undefined2 *)(thing_ptr + 0x1d5 + val * 4) = *(undefined2 *)(&g_bss_002eb215 + val_2);
          *(undefined2 *)(thing_ptr + 0xaf) = 0;
          *(byte *)(thing_ptr + 0xac) = *(byte *)(thing_ptr + 0xac) | 0x20;
          return;
        }
      }
      else {
        val_2 = spell_update_creature_control_07159b();
        if (val_2 != -1) {
          *(undefined1 *)(thing_ptr + 0x1d4 + val_2 * 4) = 10;
          *(undefined2 *)(thing_ptr + 0x1d5 + val_2 * 4) = (undefined2)g_bss_001ae9ac;
          *(byte *)(thing_ptr + 0xab) = *(byte *)(thing_ptr + 0xab) | 4;
          return;
        }
      }
    }
  }
  else if (arg_edx < 0xc) {
    val = spell_update_creature_control_07159b();
    if (val != -1) {
      *(undefined1 *)(thing_ptr + 0x1d4 + val * 4) = 0xb;
      *(undefined2 *)(thing_ptr + 0x1d5 + val * 4) = *(undefined2 *)(&g_bss_002eb17d + val_2);
      *(byte *)(thing_ptr + 0xac) = *(byte *)(thing_ptr + 0xac) | 2;
LAB_00071cb9:
      uval = creature_update_creature_control_085890();
      *(undefined2 *)(thing_ptr + 0xc4) = uval;
      return;
    }
  }
  else if (arg_edx < 0x14) {
    if (0xc < arg_edx) {
      return;
    }
    val_2 = spell_update_creature_control_07159b();
    if (val_2 != -1) {
      *(undefined1 *)(thing_ptr + 0x1d4 + val_2 * 4) = 0xc;
      *(undefined2 *)(thing_ptr + 0x1d5 + val_2 * 4) = g_bss_001ae9b4;
      *(byte *)(thing_ptr + 0xac) = *(byte *)(thing_ptr + 0xac) | 1;
      goto LAB_00071cb9;
    }
  }
  else if (arg_edx < 0x15) {
    val_2 = spell_update_creature_control_07159b();
    if (val_2 != -1) {
      *(undefined1 *)(thing_ptr + 0x1d4 + val_2 * 4) = 0x14;
      *(undefined2 *)(thing_ptr + 0x1d5 + val_2 * 4) = g_bss_001ae9d4;
      *(byte *)(thing_ptr + 0xac) = *(byte *)(thing_ptr + 0xac) | 0x10;
      *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) | 0x20;
      return;
    }
  }
  else if (arg_edx < 0x1a) {
    if (arg_edx != 0x15) {
      return;
    }
    val_2 = spell_update_creature_control_07159b();
    if (val_2 != -1) {
      *(undefined1 *)(thing_ptr + 0x1d4 + val_2 * 4) = 0x15;
      *(undefined2 *)(thing_ptr + 0x1d5 + val_2 * 4) = g_bss_001ae9d8;
      *(byte *)(thing_ptr + 0xac) = *(byte *)(thing_ptr + 0xac) | 0x40;
      return;
    }
  }
  else if (arg_edx < 0x1b) {
    val = spell_update_creature_control_07159b();
    if (val != -1) {
      *(undefined1 *)(thing_ptr + 0x1d4 + val * 4) = 0x1a;
      *(undefined2 *)(thing_ptr + 0x1d5 + val * 4) = *(undefined2 *)(&g_bss_002eb261 + val_2);
      *(byte *)(thing_ptr + 0xad) = *(byte *)(thing_ptr + 0xad) | 1;
      local_14 = 0;
      local_24 = 0;
      *(undefined1 *)(thing_ptr + 0xb6) = *(undefined1 *)(thing + 6); /* thing->owner */
      *(undefined4 *)(thing_ptr + 0x2eb) = g_game_turn;
      local_20 = val_2;
      local_18 = thing_ptr;
      do {
        local_38[(uint)flag * -4] = *(short *)(thing + 0x11 + (uint)flag * -8);
        local_38[0] = local_38[0] + (short)local_14 * (*(ushort *)(thing + 0x58) / 2);
        thing_ptr = inits_allocate_light_object_043f07();
        if (thing_ptr != 0) {
          *(undefined2 *)(local_18 + 0x2b9) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
          *(short *)(thing_ptr + 0x5e) = *(short *)(&g_bss_002eb261 + local_20) + 1;
          *(undefined2 *)(thing_ptr + 0x13) = *(undefined2 *)(thing + 0x1b); /* thing->anim_sprite, thing->index_or_angle */
          *(undefined1 *)(thing_ptr + 0x15) = (undefined1)local_14;
          *(undefined2 *)(thing_ptr + 0x52) = *(undefined2 *)(thing + 0x52); /* thing->health */
          *(undefined2 *)(thing_ptr + 0x54) = *(undefined2 *)(thing + 0x54);
          anger_fn_010d08();
          *(short *)(thing_ptr + 0x32) = *(short *)(thing_ptr + 0x32) + local_38[2];
          *(short *)(thing_ptr + 0x34) = *(short *)(thing_ptr + 0x34) + local_38[3];
          *(byte *)(thing_ptr + 1) = *(byte *)(thing_ptr + 1) | 4;
          *(short *)(thing_ptr + 0x36) = *(short *)(thing_ptr + 0x36) + local_30;
        }
        local_24 = local_24 + 0xaa8;
        local_14 = local_14 + 1;
        local_18 = local_18 + 2;
      } while (local_14 < 3);
    }
  }
  else {
    if (arg_edx != 0x1b) {
      return;
    }
    val = spell_update_creature_control_07159b();
    if (val != -1) {
      person_external_change_state_but_064a5f();
      *(undefined2 *)(thing_ptr + 0x282) = 10;
      *(byte *)(thing_ptr + 0xad) = *(byte *)(thing_ptr + 0xad) | 2;
      *(undefined1 *)(thing_ptr + 0x1d4 + extraout_ECX * 4) = 0x1b;
      *(undefined2 *)(thing_ptr + 0x1d5 + extraout_ECX * 4) = *(undefined2 *)(&g_bss_002eb2ad + val_2);
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : spell_update_creature_and_thing_071e97 (Original VA: 0x71e97, Ghidra: FUN_00071e97)
 * Prototype: void spell_update_creature_and_thing_071e97(void);
 * Address  : 0x71e97 (Size: 70 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> temple_how_you_sacrifice_neutral_0731f3
 * Callees  : 1 -> spell_update_creature_control_0717de
 ******************************************************************************/
void spell_update_creature_and_thing_071e97(void)

{
  ushort cctrl_ptr;
  int arg_eax;
  int extraout_ECX;
  
  cctrl_ptr = (&g_bss_002e05b6)[arg_eax * 0xa84];
  while (g_thing_ptrs < (&g_thing_ptrs)[cctrl_ptr]) {
    spell_update_creature_control_0717de();
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x1f);
  }
  return;
}

/******************************************************************************
 * Function : spell_update_creature_control_071edd (Original VA: 0x71edd, Ghidra: FUN_00071edd)
 * Prototype: void spell_update_creature_control_071edd(void);
 * Address  : 0x71edd (Size: 497 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 5 -> pom_update_creature_control_065b07, spell_update_creature_control_071416, spell_update_creature_control_07159b, temple_update_creature_control_072f08, torture_update_creature_and_thing_07436a
 * Callees  : 3 -> person_external_change_state_but_064a5f, structs_update_creature_control_072af4, creature_update_creature_control_085890
 ******************************************************************************/
void spell_update_creature_control_071edd(void)

{
  int cctrl_ptr;
  int val;
  undefined2 uval;
  int thing;
  int extraout_ECX;
  int loop_i;
  int extraout_ECX_00;
  uint arg_edx;
  int val_2;
  int local_18;
  
  local_18 = -1;
  val_2 = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  for (loop_i = cctrl_ptr;
      (val = local_18, val_2 < 5 && (val = val_2, arg_edx != *(byte *)(loop_i + 0x1d4)));
      loop_i = loop_i + 4) {
    val_2 = val_2 + 1;
  }
  local_18 = val;
  if (local_18 < 0) {
    return;
  }
  if (arg_edx < 0xb) {
    if (arg_edx < 6) {
      if (2 < arg_edx) {
        if (arg_edx < 4) {
          *(byte *)(cctrl_ptr + 0xab) = *(byte *)(cctrl_ptr + 0xab) & 0xfd;
          if ((*(byte *)(cctrl_ptr + 0xad) & 0x80) != 0) {
            *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) | 0x20;
            *(byte *)(cctrl_ptr + 0xad) = *(byte *)(cctrl_ptr + 0xad) & 0x7f;
          }
        }
        else if (arg_edx == 4) {
          *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xfb;
          loop_i = cctrl_ptr;
          do {
            if (*(short *)(loop_i + 0x2b3) != 0) {
              structs_update_creature_control_072af4();
              *(undefined2 *)(extraout_ECX + 0x2b3) = 0;
              loop_i = extraout_ECX;
            }
            loop_i = loop_i + 2;
          } while (loop_i != cctrl_ptr + 6);
        }
      }
    }
    else if (arg_edx < 7) {
      *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xf7;
    }
    else if (8 < arg_edx) {
      if (arg_edx < 10) {
        *(undefined2 *)(cctrl_ptr + 0xaf) = 0;
        *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xdf;
      }
      else {
        *(byte *)(cctrl_ptr + 0xab) = *(byte *)(cctrl_ptr + 0xab) & 0xfb;
      }
    }
    goto LAB_000720b3;
  }
  if (arg_edx < 0xc) {
    *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xfd;
  }
  else {
    if (0x13 < arg_edx) {
      if (arg_edx < 0x15) {
        if (*(char *)(thing + 0x1a) != '\x13') {
          *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xdf;
        }
        *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xef;
      }
      else if (arg_edx < 0x1a) {
        if (arg_edx == 0x15) {
          *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xbf;
        }
      }
      else if (arg_edx < 0x1b) {
        *(byte *)(cctrl_ptr + 0xad) = *(byte *)(cctrl_ptr + 0xad) & 0xfe;
        loop_i = cctrl_ptr;
        do {
          if (*(short *)(loop_i + 0x2b9) != 0) {
            structs_update_creature_control_072af4();
            *(undefined2 *)(extraout_ECX_00 + 0x2b9) = 0;
            loop_i = extraout_ECX_00;
          }
          loop_i = loop_i + 2;
        } while (loop_i != cctrl_ptr + 6);
      }
      else if (arg_edx == 0x1b) {
        *(byte *)(cctrl_ptr + 0xad) = *(byte *)(cctrl_ptr + 0xad) & 0xfd;
        person_external_change_state_but_064a5f();
        *(undefined2 *)(cctrl_ptr + 0x282) = 10;
      }
      goto LAB_000720b3;
    }
    if (0xc < arg_edx) goto LAB_000720b3;
    *(byte *)(cctrl_ptr + 0xac) = *(byte *)(cctrl_ptr + 0xac) & 0xfe;
  }
  uval = creature_update_creature_control_085890();
  *(undefined2 *)(cctrl_ptr + 0xc4) = uval;
LAB_000720b3:
  *(undefined1 *)(cctrl_ptr + 0x1d4 + local_18 * 4) = 0;
  *(undefined2 *)(cctrl_ptr + 0x1d5 + local_18 * 4) = 0;
  return;
}

/******************************************************************************
 * Function : spell_update_creature_control_0720ce (Original VA: 0x720ce, Ghidra: FUN_000720ce)
 * Prototype: int spell_update_creature_control_0720ce(void);
 * Address  : 0x720ce (Size: 59 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 11 -> compevnt_update_creature_and_thing_01916a, compevnt_update_creature_and_thing_01a68b, comptask_update_creature_and_thing_01c92a, comptask_process_thing_entity_01ca68, comptool_update_creature_and_thing_0200e0, magic_fn_04f3bc, magic_update_player_view_state_04f41d, magic_fn_04f4f1 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int spell_update_creature_control_0720ce(void)

{
  int thing;
  byte *cctrl_ptr;
  uint arg_edx;
  int loop_i;
  
  if (*(short *)(thing + 100) != 0) { /* thing->ccontrol_idx */
    cctrl_ptr = (byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x1d4); /* thing->ccontrol_idx */
    for (loop_i = 0; loop_i < 5; loop_i = loop_i + 1) {
      if (*cctrl_ptr == arg_edx) {
        return (int)*(short *)(cctrl_ptr + 1);
      }
      cctrl_ptr = cctrl_ptr + 4;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : spell_update_creature_control_072109 (Original VA: 0x72109, Ghidra: FUN_00072109)
 * Prototype: void spell_update_creature_control_072109(undefined1 param_1);
 * Address  : 0x72109 (Size: 257 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> instance_update_creature_control_04a079
 * Callees  : 5 -> effect_allocate_light_effect_024998, effect_illegal_hit_thing_type_02585f, setup_switch_screen_resolution, sound_fn_06e538, spell_update_creature_control_0717de
 ******************************************************************************/
void spell_update_creature_control_072109(undefined1 param_1)

{
  byte *thing;
  undefined4 uval;
  int val;
  undefined1 arg_cl;
  int arg_edx;
  undefined4 *word_ptr;
  int packet_off;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  
  word_ptr = (undefined4 *)local_10;
  packet_off = arg_edx * 0x11;
  if (arg_edx == 10) {
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xb7) = arg_cl; /* thing->ccontrol_idx */
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xb8) = param_1; /* thing->ccontrol_idx */
  }
  if ((*thing & 0x20) == 0) {
    uval = 4;
  }
  else {
    uval = 1;
  }
  if ((&g_data_0018f5cc)[packet_off] == '\0') {
    if ((&g_data_0018f5cd)[packet_off] != '\0') {
      word_ptr = (undefined4 *)local_10;
      if (*(short *)(&g_data_0018f5d1 + packet_off) != 0) {
        uStack_14 = 0x100;
        uStack_18 = 4;
        uStack_1c = 0;
        word_ptr = &uStack_20;
        uStack_20 = 3;
        sound_fn_06e538();
      }
      *(undefined4 *)((int)word_ptr + -4) = 0x721c2;
      spell_update_creature_control_0717de();
    }
  }
  else {
    word_ptr = &uStack_14;
    uStack_18 = 0x72173;
    uStack_14 = uval;
    setup_switch_screen_resolution();
  }
  if ((&g_data_0018f5ce)[packet_off] != '\0') {
    *(undefined4 *)((int)word_ptr + -4) = 0x721d8;
    val = effect_allocate_light_effect_024998();
    if ((val != 0) && ((&g_data_0018f5ce)[packet_off] == '\x0e')) {
      *(undefined1 *)(val + 0x16) = 3;
    }
  }
  if (*(int *)(&g_data_0018f5d3 + packet_off) != 0) {
    *(uint *)((int)word_ptr + -4) = (uint)(byte)(&g_data_0018f5db)[packet_off];
    *(undefined4 *)((int)word_ptr + -8) = 0x72204;
    effect_illegal_hit_thing_type_02585f();
  }
  return;
}

/******************************************************************************
 * Function : spell_handle_object_thing_07220a (Original VA: 0x7220a, Ghidra: FUN_0007220a)
 * Prototype: void spell_handle_object_thing_07220a(void);
 * Address  : 0x7220a (Size: 84 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 1 -> instance_update_creature_control_04a079
 * Callees  : 1 -> setup_switch_screen_resolution
 ******************************************************************************/
void spell_handle_object_thing_07220a(void)

{
  byte *arg_eax;
  int arg_edx;
  undefined4 uval;
  
  if ((*arg_eax & 0x20) == 0) {
    if (*(char *)(arg_edx + 0x1f) == '\x01') {
      uval = 3;
      goto LAB_00072246;
    }
    if (*(byte *)(arg_edx + 6) != arg_eax[6]) {
      uval = 4;
      goto LAB_00072246;
    }
  }
  else if (*(char *)(arg_edx + 0x1f) == '\x01') {
    uval = 1;
    goto LAB_00072246;
  }
  uval = 2;
LAB_00072246:
  setup_switch_screen_resolution(uval);
  return;
}

/******************************************************************************
 * Function : spell_could_find_teleport_destination_07225e (Original VA: 0x7225e, Ghidra: FUN_0007225e)
 * Prototype: void spell_could_find_teleport_destination_07225e(void);
 * Address  : 0x7225e (Size: 190 bytes)
 * Module   : spell.cpp [direct_file_string_xref]
 * OrigLine : spell.cpp lines 812
 * Purpose  : String 'Could not find teleport destination for creature'
 * Callers  : 1 -> spell_update_creature_control_071416
 * Callees  : 3 -> ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b3788, LbErrorLog
 ******************************************************************************/
void spell_could_find_teleport_destination_07225e(void)

{
  short short_val;
  int thing;
  int cctrl_ptr;
  short *arg_edx;
  byte flag;
  
  flag = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *arg_edx = (ushort)*(byte *)(cctrl_ptr + 0xb7) * 0x100 + 0x80;
  arg_edx[1] = (ushort)*(byte *)(cctrl_ptr + 0xb8) * 0x100 + 0x80;
  short_val = move_process_map_subtile_0b3788();
  arg_edx[2] = short_val;
  cctrl_ptr = ceiling_process_map_subtile_07dbc0();
  if (cctrl_ptr != 0) {
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a) == 0) { /* thing->ccontrol_idx */
      cctrl_ptr = (int)*(char *)(thing + 6); /* thing->owner */
      if ((cctrl_ptr < (int)(uint)g_neutral_player_number) && ((&g_dungeons)[cctrl_ptr * 0xa84] != 0)) {
        thing = (&g_thing_ptrs)[(ushort)(&g_dungeons)[cctrl_ptr * 0xa84]];
      }
      else {
        LbErrorLog(); /* LbErrorLog("spell.cpp", line 812, "Could not find teleport destination for creature") */
      }
    }
    else {
      thing = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a)]; /* thing->ccontrol_idx */
    }
    *(undefined4 *)arg_edx = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
    arg_edx[(uint)flag * -4 + 2] = *(short *)(thing + 0x11 + (uint)flag * -8);
  }
  return;
}

/******************************************************************************
 * Function : spell_update_creature_control_07231c (Original VA: 0x7231c, Ghidra: FUN_0007231c)
 * Prototype: void spell_update_creature_control_07231c(void);
 * Address  : 0x7231c (Size: 1053 bytes)
 * Module   : spell.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 7 -> anger_fn_010132, inits_fn_043ac3, inits_allocate_dynamic_light_shot_0444a9, jtyedit_fn_04c2eb, spell_type_thing_0713cc, ceiling_fn_07df48, draw_roll_action_random_08ccec
 ******************************************************************************/
void spell_update_creature_control_07231c(void)

{
  ushort uval;
  undefined *word_ptr;
  int thing;
  int val;
  int thing_ptr;
  uint uval_2;
  int extraout_ECX;
  uint uval_3;
  int extraout_ECX_00;
  int *int_ptr;
  undefined1 *word_ptr_2;
  int *int_ptr_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  undefined4 *word_ptr_5;
  undefined4 *word_ptr_6;
  byte flag;
  int aiStack_50 [6];
  short local_38;
  short local_36;
  short local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  flag = 0;
  local_30 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  int_ptr_2 = aiStack_50 + 5;
  aiStack_50[5] = thing;
  if ((*(byte *)(local_30 + 0xac) & 8) != 0) {
    uval = *(ushort *)(thing + 0x56);
    local_2c = (uint)*(ushort *)(thing + 0x58) + ((int)(uint)*(ushort *)(thing + 0x58) >> 2);
    local_24 = jtyedit_fn_04c2eb();
    local_24 = local_24 & 0xff;
    local_1c = g_game_turn % local_24;
    local_20 = ((uint)uval * 4) / 4;
    int_ptr = aiStack_50 + 5;
    thing_ptr = extraout_ECX;
    for (local_34 = *(short *)(aiStack_50[5] + 0x11); int_ptr_2 = int_ptr,
        (int)local_34 < *(short *)(aiStack_50[5] + 0x11) + local_2c; local_34 = local_34 + 0x40) {
      local_38 = *(short *)(aiStack_50[5] + 0xd) +
                 (short)(local_20 * (&g_slab_attr_table)[(thing_ptr % 8) * 0x100] >> 0x10);
      word_ptr = (&PTR_LAB_00192fe0)[(thing_ptr % 8) * 0x100];
      int_ptr_2 = (int *)((int)int_ptr + -4);
      *(undefined4 *)((int)int_ptr + -4) = 0xffffffff;
      local_36 = *(short *)(aiStack_50[5] + 0xf) +
                 (short)((uint)-((int)(local_20 * (int)word_ptr) >> 8) >> 8);
      *(undefined4 *)((int)int_ptr + -8) = 0x72453;
      val = inits_fn_043ac3();
      if (val == 0) break;
      *(undefined4 *)((int)int_ptr + -8) = 2;
      *(int *)((int)int_ptr + -0xc) = (int)(char)local_1c;
      *(undefined4 *)((int)int_ptr + -0x10) = 0;
      *(undefined4 *)((int)int_ptr + -0x14) = 0x723cd;
      draw_roll_action_random_08ccec();
      local_1c = (int)(local_1c + 1) % (int)local_24;
      thing_ptr = thing_ptr + 1;
      int_ptr = (int *)((int)int_ptr + -0x10);
    }
  }
  if ((*(byte *)(local_30 + 0xac) & 1) != 0) {
    local_28 = ((uint)*(ushort *)(aiStack_50[5] + 0x56) * 4) / 2;
    uval_3 = (uint)*(ushort *)(aiStack_50[5] + 0x58) +
            ((int)(uint)*(ushort *)(aiStack_50[5] + 0x58) >> 2);
    thing_ptr = (int)uval_3 >> 6;
    if (thing_ptr == 0) {
      thing_ptr = 1;
    }
    val = g_game_turn - *(int *)(aiStack_50[5] + 9);
    uval_2 = (uint)(thing_ptr * 2) / 2;
    if (val % (thing_ptr * 2) < (int)uval_2) {
      local_34 = *(short *)(aiStack_50[5] + 0x11) +
                 (short)(val % (int)uval_2) * (short)(uval_3 / uval_2);
    }
    else {
      local_34 = (short)(uval_3 / uval_2) * ((short)uval_2 - (short)(val % (int)uval_2)) +
                 *(short *)(aiStack_50[5] + 0x11);
    }
    uval_3 = local_28 / 2;
    thing_ptr = 0;
    word_ptr_2 = (undefined1 *)int_ptr_2;
    do {
      val = (&g_slab_attr_table)[(thing_ptr % 0x10) * 0x80];
      word_ptr = (&PTR_LAB_00192fe0)[(thing_ptr % 0x10) * 0x80];
      int_ptr_2 = (int *)(word_ptr_2 + -4);
      *(undefined4 *)(word_ptr_2 + -4) = 0xffffffff;
      local_38 = *(short *)(aiStack_50[5] + 0xd) + (short)(val * uval_3 >> 0x10);
      local_36 = (short)((uint)-((int)((int)word_ptr * uval_3) >> 8) >> 8) +
                 *(short *)(aiStack_50[5] + 0xf);
      thing_ptr = thing_ptr + 1;
      *(undefined4 *)(word_ptr_2 + -8) = 0x7256d;
      inits_fn_043ac3();
      word_ptr_2 = word_ptr_2 + -4;
    } while (thing_ptr < 0x10);
  }
  word_ptr_2 = (undefined1 *)int_ptr_2;
  if ((*(byte *)(local_30 + 0xac) & 0x10) != 0) {
    word_ptr_2 = (undefined1 *)((int)int_ptr_2 + -4);
    *(undefined4 *)((int)int_ptr_2 + -4) = 0xffffffff;
    *(undefined4 *)((int)int_ptr_2 + -8) = 0x7259c;
    inits_fn_043ac3();
  }
  if ((*(byte *)(local_30 + 0xac) & 2) != 0) {
    *(undefined4 *)(word_ptr_2 + -4) = 0x725bf;
    thing_ptr = inits_allocate_dynamic_light_shot_0444a9();
    if (thing_ptr != 0) {
      word_ptr_5 = (undefined4 *)(thing_ptr + 0x42 + (uint)flag * -8);
      word_ptr_3 = (undefined4 *)(aiStack_50[5] + 0x42 + (uint)flag * -8);
      *(undefined4 *)(thing_ptr + 0x3e) = *(undefined4 *)(aiStack_50[5] + 0x3e);
      word_ptr_6 = word_ptr_5 + (uint)flag * -2 + 1;
      word_ptr_4 = word_ptr_3 + (uint)flag * -2 + 1;
      *word_ptr_5 = *word_ptr_3;
      *word_ptr_6 = *word_ptr_4;
      word_ptr_6[(uint)flag * -2 + 1] = word_ptr_4[(uint)flag * -2 + 1];
      (word_ptr_6 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
           (word_ptr_4 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
      *(undefined2 *)(thing_ptr + 0x3e) = 0;
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0xcf; /* thing->render_flags */
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 0x20; /* thing->render_flags */
      *(undefined2 *)(thing_ptr + 0x52) = *(undefined2 *)(aiStack_50[5] + 0x52); /* thing->health */
    }
  }
  if ((*(byte *)(local_30 + 0xab) & 4) != 0) {
    *(undefined4 *)(word_ptr_2 + -4) = 0x72607;
    thing_ptr = spell_type_thing_0713cc();
    if (g_bss_001ae9ac / 2 < thing_ptr) {
      *(undefined4 *)(word_ptr_2 + -4) = 0x72630;
      thing_ptr = inits_allocate_dynamic_light_shot_0444a9();
      if (thing_ptr != 0) {
        word_ptr_5 = (undefined4 *)(thing_ptr + 0x42 + (uint)flag * -8);
        word_ptr_3 = (undefined4 *)(aiStack_50[5] + 0x42 + (uint)flag * -8);
        *(undefined4 *)(thing_ptr + 0x3e) = *(undefined4 *)(aiStack_50[5] + 0x3e);
        word_ptr_6 = word_ptr_5 + (uint)flag * -2 + 1;
        word_ptr_4 = word_ptr_3 + (uint)flag * -2 + 1;
        *word_ptr_5 = *word_ptr_3;
        *word_ptr_6 = *word_ptr_4;
        word_ptr_6[(uint)flag * -2 + 1] = word_ptr_4[(uint)flag * -2 + 1];
        (word_ptr_6 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_4 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        *(undefined2 *)(thing_ptr + 0x3e) = 0;
        *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0xcf; /* thing->render_flags */
        *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 0x20; /* thing->render_flags */
        *(undefined2 *)(thing_ptr + 0x52) = *(undefined2 *)(aiStack_50[5] + 0x52); /* thing->health */
      }
    }
    else if (thing_ptr < g_bss_001ae9ac / 2) {
      if (thing_ptr % 2 == 0) {
        *(undefined4 *)(word_ptr_2 + -4) = 0x72687;
        inits_allocate_dynamic_light_shot_0444a9();
      }
      *(undefined4 *)(word_ptr_2 + -4) = 0x726ac;
      anger_fn_010132();
    }
  }
  if ((*(byte *)(local_30 + 0xad) & 0x20) != 0) {
    if ((int)(g_game_turn - *(int *)(aiStack_50[5] + 9)) % 2 == 0) {
      *(undefined4 *)(word_ptr_2 + -4) = 0x726f0;
      inits_allocate_dynamic_light_shot_0444a9();
    }
    *(undefined4 *)(word_ptr_2 + -4) = 0x72715;
    anger_fn_010132();
    if (extraout_ECX_00 < 0x21) {
      *(undefined4 *)(word_ptr_2 + -4) = 0x72722;
      thing_ptr = ceiling_fn_07df48();
      if (thing_ptr == 0) {
        return;
      }
    }
    *(byte *)(local_30 + 0xad) = *(byte *)(local_30 + 0xad) & 0xdf;
  }
  return;
}

/******************************************************************************
 * Function : spell_update_creature_control_072739 (Original VA: 0x72739, Ghidra: FUN_00072739)
 * Prototype: void spell_update_creature_control_072739(void);
 * Address  : 0x72739 (Size: 212 bytes)
 * Module   : spell.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 1 -> inits_allocate_dynamic_light_shot_0444a9
 ******************************************************************************/
void spell_update_creature_control_072739(void)

{
  int cctrl_ptr;
  uint rand_seed;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(short *)(cctrl_ptr + 0x2ae) = *(short *)(cctrl_ptr + 0x2ae) + -1;
  if (*(short *)(cctrl_ptr + 0x2ae) < 1) {
    *(undefined1 *)(cctrl_ptr + 0x2b0) = 0;
  }
  else if (*(char *)(cctrl_ptr + 0x2b0) == '\a') {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    rand_seed = g_action_random_seed >> 0xd;
    g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
    inits_allocate_dynamic_light_shot_0444a9(*(short *)(thing + 0xd) + /* thing->mappos.val_x */
                 (short)((uint)((&g_slab_attr_table)[rand_seed & 0x7ff] *
                               ((int)((uint)*(ushort *)(thing + 0x56) * 5) >> 3)) >> 0x10),
                 *(undefined2 *)(thing + 0x11));
  }
  return;
}

