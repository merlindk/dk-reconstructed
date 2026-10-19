/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: sound.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sound_fn_06e538 (Original VA: 0x6e538, Ghidra: FUN_0006e538)
 * Prototype: void sound_fn_06e538(char param_1,byte param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0x6e538 (Size: 182 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06e538
 * Callers  : 66 -> compturn_process_map_subtile_022660, compturn_fn_0228b1, door_fn_022933, effect_allocate_light_effect_024998, effect_process_thing_entity_02606f, eyelens_fn_026f4d, evil_update_slab_subtile_columns_028904, evil_update_creature_and_thing_028eb4 ...
 * Callees  : 4 -> sound_fn_06f5e5, sound_fn_06f6fa, get_3d_box_distance, bflib_system_io_fn_0f27d0
 ******************************************************************************/
void sound_fn_06e538(char param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uval;
  int arg_eax;
  int val;
  char extraout_CL;
  undefined2 arg_bx;
  
  if (g_bss_00334019 == 0) {
    val = bflib_system_io_fn_0f27d0();
    if (0 < val) {
      val = get_3d_box_distance(g_bss_0037706e,g_bss_00377072);
      if (val < g_data_001872b4) {
        if (*(char *)(arg_eax + 0x66) == '\0') {
          uval = sound_fn_06f5e5(0,arg_bx,param_4,(int)extraout_CL,param_2 | 1,param_3);
          *(undefined1 *)(arg_eax + 0x66) = uval;
        }
        else {
          sound_fn_06f6fa(param_4,(int)extraout_CL,(int)param_1,param_2 | 1,param_3);
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_fn_06e5ee (Original VA: 0x6e5ee, Ghidra: FUN_0006e5ee)
 * Prototype: void sound_fn_06e5ee(void);
 * Address  : 0x6e5ee (Size: 48 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06e5ee
 * Callers  : 2 -> navigate_fn_0c3780, object_update_player_dungeon_0c3a38
 * Callees  : 2 -> sound3d_fn_06f72b, sound_fn_06f865
 ******************************************************************************/
void sound_fn_06e5ee(void)

{
  int arg_eax;
  int val;
  
  if (*(char *)(arg_eax + 0x66) != '\0') {
    val = sound_fn_06f865();
    if (val != 0) {
      sound3d_fn_06f72b();
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_update_creature_control_06e61e (Original VA: 0x6e61e, Ghidra: FUN_0006e61e)
 * Prototype: void sound_update_creature_control_06e61e(void);
 * Address  : 0x6e61e (Size: 734 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> update_go_first_person_without_0de6a8, update_update_creature_and_thing_0e3a8c
 * Callees  : 5 -> sound_fn_06e538, sound3d_fn_06f72b, sound_fn_06f865, creature_update_creature_control_081d84, bflib_system_io_fn_0e69fc
 ******************************************************************************/
void sound_update_creature_control_06e61e(void)

{
  byte flag;
  uint unsynced_seed;
  uint unsynced_seed_2;
  int thing;
  int val;
  int val_2;
  int extraout_ECX;
  undefined4 *word_ptr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 local_1c;
  
  uStack_24 = 0x6e64c;
  val = bflib_system_io_fn_0e69fc();
  val = (int)((val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0)) >> 8;
  uStack_24 = 0x6e67b;
  val_2 = bflib_system_io_fn_0e69fc();
  local_20 = (int)((val_2 + (val_2 >> 0x1f) * -0x100) - (uint)((val_2 >> 0x1f) << 7 < 0)) >> 8;
  if ((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x01') {
    local_1c = 0x100;
  }
  else {
    local_1c = 0x32;
  }
  if (val <= local_20) {
    val = local_20;
  }
  if (9 < val) {
    return;
  }
  if (*(char *)(thing + 0x1a) == '\x1f') {
    return;
  }
  if (((*(char *)(thing + 0x1a) == '\x13') && ((*(byte *)(thing + 0x25) & 0x20) != 0)) &&
     ((int)(uint)*(ushort *)(thing + 0x60) < (int)*(short *)(thing + 0x11))) {
    uStack_24 = 0x6e700;
    val = sound_fn_06f865();
    if (val != 0) {
      return;
    }
    uStack_24 = local_1c;
    uStack_28 = 2;
    word_ptr = &uStack_30;
    uStack_30 = 2;
    uStack_2c = 0;
  }
  else {
    uStack_24 = 0x6e736;
    val = sound_fn_06f865();
    if (val != 0) {
      uStack_24 = 0x6e74a;
      sound3d_fn_06f72b();
    }
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 9) == 0) { /* thing->ccontrol_idx */
      return;
    }
    uStack_24 = 0x6e768;
    val = creature_update_creature_control_081d84();
    if (val == 0) {
      return;
    }
    flag = *(byte *)(extraout_ECX + 0x67);
    *(byte *)(extraout_ECX + 0x67) = *(byte *)(extraout_ECX + 0x67) & 0xe0;
    *(byte *)(extraout_ECX + 0x67) = *(byte *)(extraout_ECX + 0x67) | (flag & 0x1f) + 1 & 0x1f;
    if (3 < (*(byte *)(extraout_ECX + 0x67) & 0x1f)) {
      g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
      unsynced_seed = g_unsynced_random_seed >> 0xd;
      unsynced_seed_2 = g_unsynced_random_seed * 0x80000;
      g_unsynced_random_seed._0_1_ = (byte)unsynced_seed;
      flag = (byte)g_unsynced_random_seed;
      g_unsynced_random_seed = unsynced_seed | unsynced_seed_2;
      *(byte *)(extraout_ECX + 0x66) = *(byte *)(extraout_ECX + 0x66) & 0xe3;
      *(byte *)(extraout_ECX + 0x67) = *(byte *)(extraout_ECX + 0x67) & 0xe0;
      *(byte *)(extraout_ECX + 0x66) = *(byte *)(extraout_ECX + 0x66) | (flag & 3) << 2;
    }
    uStack_24 = local_1c;
    uStack_28 = 1;
    uStack_2c = 3;
    uStack_30 = 3;
    uStack_34 = 0x6e865;
    sound_fn_06e538();
    if ((*(byte *)(thing + 0x25) & 1) == 0) {
      return;
    }
    g_data_0019929c = g_data_0019929c * 0x24a1 + 0x24df;
    g_data_0019929c = (g_data_0019929c >> 0xd | g_data_0019929c * 0x80000) * 0x24a1 + 0x24df;
    g_data_0019929c = g_data_0019929c >> 0xd | g_data_0019929c * 0x80000;
    uStack_34 = 0x100;
    uStack_38 = 1;
    uStack_3c = 3;
    word_ptr = &uStack_40;
    uStack_40 = 3;
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x6e8f5;
  sound_fn_06e538();
  return;
}

/******************************************************************************
 * Function : sound_room_ambient_sound_object_06e8fc (Original VA: 0x6e8fc, Ghidra: FUN_0006e8fc)
 * Prototype: void sound_room_ambient_sound_object_06e8fc(void);
 * Address  : 0x6e8fc (Size: 175 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp lines 217
 * Purpose  : String 'No room ambient sound object'
 * Callers  : 1 -> research_update_slab_subtile_columns_0670b2
 * Callees  : 6 -> sound_fn_06e538, sound_fn_06f653, sound_fn_06f7b2, sound_fn_06f865, move_fn_0b3b10, LbErrorLog
 ******************************************************************************/
void sound_room_ambient_sound_object_06e8fc(void)

{
  int thing_ptr;
  int arg_edx;
  
  if (g_bss_002eb9b2 == 0) {
    LbErrorLog(); /* LbErrorLog("sound.cpp", line 217, "No room ambient sound object") */
  }
  else {
    thing_ptr = (&g_thing_ptrs)[g_bss_002eb9b2];
    if (arg_edx != 0) {
      move_fn_0b3b10();
      if (*(char *)(thing_ptr + 0x66) != '\0') {
        thing_ptr = sound_fn_06f865();
        if (thing_ptr != 0) {
          return;
        }
        sound_fn_06f7b2();
      }
      sound_fn_06e538(3,0,6,0x100);
      return;
    }
    if (*(char *)(thing_ptr + 0x66) != '\0') {
      sound_fn_06f653();
      *(undefined1 *)(thing_ptr + 0x66) = 0;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_non_emitter_has_been_06e9ab (Original VA: 0x6e9ab, Ghidra: FUN_0006e9ab)
 * Prototype: void sound_non_emitter_has_been_06e9ab(void);
 * Address  : 0x6e9ab (Size: 175 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp lines 233
 * Purpose  : String 'Non 3d Emitter has been deleted!'
 * Callers  : 24 -> build_update_player_view_state_01458c, build_update_player_view_state_0145d2, input_game_action_048c77, instance_update_player_view_state_04b222, instance_update_player_view_state_04b5ca, instance_update_player_view_state_04b6ae, lair_process_thing_entity_04e1f2, magic_update_creature_and_thing_04e4ad ...
 * Callees  : 5 -> sound_fn_06f5e5, sound_fn_06f6fa, sound_fn_06f974, LbErrorLog, bflib_system_io_fn_0f27d0
 ******************************************************************************/
void sound_non_emitter_has_been_06e9ab(void)

{
  int val;
  
  if (g_bss_00334019 == 0) {
    val = bflib_system_io_fn_0f27d0();
    if (0 < val) {
      if (g_bss_00376544 != 0) {
        val = sound_fn_06f974();
        if (val == 0) {
          LbErrorLog(); /* LbErrorLog("sound.cpp", line 233, "Non 3d Emitter has been deleted!") */
          g_bss_00376544 = 0;
        }
      }
      if (g_bss_00376544 == 0) {
        g_bss_00376544 = sound_fn_06f5e5(0,100,0x100,0,8,0x7ffffffe);
        return;
      }
      sound_fn_06f6fa(0x100,0,3,8,0x7ffffffe);
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_non_emitter_has_been_06ea5a (Original VA: 0x6ea5a, Ghidra: FUN_0006ea5a)
 * Prototype: void sound_non_emitter_has_been_06ea5a(void);
 * Address  : 0x6ea5a (Size: 192 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp lines 263
 * Purpose  : String 'Non 3d Emitter has been deleted!'
 * Callers  : 4 -> newgui_process_map_subtile_057fe4, newgui_stupid_spell_chosen_059dc4, newgui_fn_05a3ce, sound_simon_says_hi_everyone_06f0cd
 * Callees  : 6 -> sound_fn_06f5e5, sound_fn_06f6fa, sound_fn_06f865, sound_fn_06f974, LbErrorLog, bflib_system_io_fn_0f27d0
 ******************************************************************************/
void sound_non_emitter_has_been_06ea5a(void)

{
  int val;
  
  if (g_bss_00334019 == 0) {
    val = bflib_system_io_fn_0f27d0();
    if (0 < val) {
      if (g_bss_00376544 != 0) {
        val = sound_fn_06f974();
        if (val == 0) {
          LbErrorLog(); /* LbErrorLog("sound.cpp", line 263, "Non 3d Emitter has been deleted!") */
          g_bss_00376544 = 0;
        }
      }
      if (g_bss_00376544 == 0) {
        g_bss_00376544 = sound_fn_06f5e5(0,100,0x100,0,8,0x7ffffffe);
        return;
      }
      val = sound_fn_06f865();
      if (val == 0) {
        sound_fn_06f6fa(0x100,0,3,8,0x7ffffffe);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_speech_emitter_has_been_06eb1a (Original VA: 0x6eb1a, Ghidra: FUN_0006eb1a)
 * Prototype: longlong sound_speech_emitter_has_been_06eb1a(void);
 * Address  : 0x6eb1a (Size: 229 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp lines 295, 308
 * Purpose  : String 'Speech Emitter has been deleted!'
 * Callers  : 1 -> moodneed_fn_051374
 * Callees  : 6 -> sound_fn_06f5e5, sound_fn_06f6b8, sound_fn_06f6fa, sound_fn_06f974, LbErrorLog, bflib_system_io_fn_0f27d0
 ******************************************************************************/
longlong sound_speech_emitter_has_been_06eb1a(void)

{
  int val;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr_2 = (undefined4 *)&stack0xfffffff0;
  if (g_bss_00334019 == 0) {
    uStack_14 = 0x6eb32;
    val = bflib_system_io_fn_0f27d0();
    word_ptr_2 = (undefined4 *)&stack0xfffffff0;
    if (0 < val) {
      if (g_bss_00376548 != 0) {
        uStack_14 = 0x6eb4d;
        val = sound_fn_06f974();
        if (val == 0) {
          uStack_14 = 0x6eb65;
          LbErrorLog(); /* LbErrorLog("sound.cpp", line 295, "Speech Emitter has been deleted!") */
          g_bss_00376548 = 0;
        }
      }
      if (g_bss_00376548 == 0) {
        uStack_14 = 0x7fffffff;
        uStack_18 = 8;
        uStack_1c = 0;
        uStack_20 = 0x100;
        uStack_24 = 100;
        word_ptr = &uStack_28;
        uStack_28 = 1;
        g_bss_00376548 = sound_fn_06f5e5();
        if (g_bss_00376548 != 0) {
LAB_0006eba0:
          return CONCAT44(*(undefined4 *)((int)word_ptr + 4),1);
        }
        LbErrorLog(); /* LbErrorLog("sound.cpp", line 308, "Cannot create speech emitter!") */
        word_ptr_2 = &uStack_28;
      }
      else {
        uStack_14 = 0x6ebca;
        val = sound_fn_06f6b8();
        word_ptr_2 = (undefined4 *)&stack0xfffffff0;
        if (val != 0) {
          uStack_14 = 0x7fffffff;
          uStack_18 = 8;
          uStack_1c = 3;
          uStack_20 = 0;
          word_ptr = &uStack_24;
          word_ptr_2 = &uStack_24;
          uStack_24 = 0x100;
          uStack_28 = 0x6ebf4;
          val = sound_fn_06f6fa();
          if (val != 0) goto LAB_0006eba0;
        }
      }
    }
  }
  return (ulonglong)*(uint *)((int)word_ptr_2 + 4) << 0x20;
}

/******************************************************************************
 * Function : sound_speech_emitter_has_been_06ebff (Original VA: 0x6ebff, Ghidra: FUN_0006ebff)
 * Prototype: longlong sound_speech_emitter_has_been_06ebff(void);
 * Address  : 0x6ebff (Size: 100 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp lines 339
 * Purpose  : String 'Speech Emitter has been deleted!'
 * Callers  : 2 -> moodneed_fn_051374, mapwho_fn_051417
 * Callees  : 4 -> sound_fn_06f8b7, sound_fn_06f974, LbErrorLog, bflib_system_io_fn_0f27d0
 ******************************************************************************/
longlong sound_speech_emitter_has_been_06ebff(void)

{
  int val;
  undefined4 uval;
  uint arg_edx;
  
  if (g_bss_00334019 == 0) {
    val = bflib_system_io_fn_0f27d0();
    if (0 < val) {
      if (g_bss_00376548 != 0) {
        val = sound_fn_06f974();
        if (val == 0) {
          LbErrorLog(); /* LbErrorLog("sound.cpp", line 339, "Speech Emitter has been deleted!") */
          g_bss_00376548 = 0;
        }
      }
      if (g_bss_00376548 != 0) {
        uval = sound_fn_06f8b7();
        return CONCAT44(arg_edx,uval);
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : sound_fn_06ec63 (Original VA: 0x6ec63, Ghidra: FUN_0006ec63)
 * Prototype: undefined4 sound_fn_06ec63(void);
 * Address  : 0x6ec63 (Size: 12 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06ec63
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sound_fn_06ec63(void)

{
  return 1;
}

/******************************************************************************
 * Function : sound_fn_06ec6f (Original VA: 0x6ec6f, Ghidra: FUN_0006ec6f)
 * Prototype: void sound_fn_06ec6f(void);
 * Address  : 0x6ec6f (Size: 53 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06ec6f
 * Callers  : 2 -> input_maintain_gui_button_state_04823a, sound_process_thing_entity_06f3d6
 * Callees  : 1 -> sound_fn_06f653
 ******************************************************************************/
void sound_fn_06ec6f(void)

{
  byte *byte_ptr;
  byte *extraout_EDX;
  int val;
  
  val = 1;
  byte_ptr = g_bss_001aea00;
  do {
    if (((*byte_ptr & 1) != 0) && (byte_ptr[0x66] != 0)) {
      sound_fn_06f653();
      extraout_EDX[0x66] = 0;
      byte_ptr = extraout_EDX;
    }
    val = val + 1;
    byte_ptr = byte_ptr + 0x6b;
  } while (val < 0x800);
  return;
}

/******************************************************************************
 * Function : sound_fn_06ecd0 (Original VA: 0x6ecd0, Ghidra: FUN_0006ecd0)
 * Prototype: undefined * sound_fn_06ecd0(void);
 * Address  : 0x6ecd0 (Size: 233 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06ecd0
 * Callers  : 3 -> sound_roll_unsynced_random_06edb9, sound_fn_06ee65, sound_roll_unsynced_random_06eeaf
 * Callees  : 0 -> 
 ******************************************************************************/
undefined * sound_fn_06ecd0(void)

{
  int arg_eax;
  undefined4 arg_edx;
  undefined *word_ptr;
  
  word_ptr = (undefined *)0x0;
  switch(arg_edx) {
  case 1:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x188114);
  case 2:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x1880fc);
  case 3:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x188104);
  case 4:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x18810c);
  case 5:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x188124);
  case 6:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x18812c);
  case 7:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x188134);
  case 8:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x18813c);
  case 9:
    return (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x18811c);
  case 10:
    return &g_data_001880f4 + (uint)*(byte *)(arg_eax + 0x1a) * 0x58;
  case 0xb:
    word_ptr = (undefined *)((uint)*(byte *)(arg_eax + 0x1a) * 0x58 + 0x188144);
  }
  return word_ptr;
}

/******************************************************************************
 * Function : sound_roll_unsynced_random_06edb9 (Original VA: 0x6edb9, Ghidra: FUN_0006edb9)
 * Prototype: void sound_roll_unsynced_random_06edb9(void);
 * Address  : 0x6edb9 (Size: 172 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed)
 * Callers  : 14 -> combtool_update_creature_control_017e7e, inits_told_you_so_create_044b13, lair_update_creature_control_04d197, lair_process_thing_entity_04e1f2, person_update_creature_control_065360, person_update_creature_control_065448, pom_update_creature_control_0654d8, pom_update_creature_control_065be8 ...
 * Callees  : 3 -> sound_fn_06e538, sound_fn_06ecd0, sound_fn_06f865
 ******************************************************************************/
void sound_roll_unsynced_random_06edb9(void)

{
  int val;
  int arg_ecx;
  int extraout_ECX;
  undefined4 arg_ebx;
  int loop_i;
  undefined4 uval;
  
  val = sound_fn_06ecd0();
  if ((val != 0) && (*(int *)(val + 4) != 0)) {
    for (loop_i = 0; loop_i < *(int *)(val + 4); loop_i = loop_i + 1) {
      val = sound_fn_06f865();
      if (val != 0) {
        return;
      }
      val = extraout_ECX;
    }
    g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
    if (arg_ecx == 0) {
      uval = 0;
    }
    else {
      uval = 8;
    }
    sound_fn_06e538(3,uval,arg_ebx,0x100);
  }
  return;
}

/******************************************************************************
 * Function : sound_fn_06ee65 (Original VA: 0x6ee65, Ghidra: FUN_0006ee65)
 * Prototype: void sound_fn_06ee65(void);
 * Address  : 0x6ee65 (Size: 74 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06ee65
 * Callers  : 1 -> creature_process_thing_entity_0849c8
 * Callees  : 3 -> sound_fn_06ecd0, sound3d_fn_06f72b, sound_fn_06f865
 ******************************************************************************/
void sound_fn_06ee65(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int loop_i;
  
  val = sound_fn_06ecd0();
  if ((val != 0) && (*(int *)(val + 4) != 0)) {
    for (loop_i = 0; loop_i < *(int *)(val + 4); loop_i = loop_i + 1) {
      val_2 = sound_fn_06f865();
      val = extraout_ECX;
      if (val_2 != 0) {
        sound3d_fn_06f72b();
        val = extraout_ECX_00;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_roll_unsynced_random_06eeaf (Original VA: 0x6eeaf, Ghidra: FUN_0006eeaf)
 * Prototype: void sound_roll_unsynced_random_06eeaf(void);
 * Address  : 0x6eeaf (Size: 171 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates unsynced visual/audio PRNG (g_unsynced_random_seed)
 * Callers  : 1 -> eyelens_fn_026faa
 * Callees  : 4 -> effect_allocate_light_effect_024998, sound_fn_06e538, sound_fn_06ecd0, sound_fn_06f865
 ******************************************************************************/
void sound_roll_unsynced_random_06eeaf(void)

{
  int val;
  int extraout_ECX;
  undefined4 arg_ebx;
  int loop_i;
  
  val = sound_fn_06ecd0();
  if ((val != 0) && (*(int *)(val + 4) != 0)) {
    for (loop_i = 0; loop_i < *(int *)(val + 4); loop_i = loop_i + 1) {
      val = sound_fn_06f865();
      if (val != 0) {
        return;
      }
      val = extraout_ECX;
    }
    g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
    val = effect_allocate_light_effect_024998();
    if (val != 0) {
      sound_fn_06e538(3,0,arg_ebx,0x100);
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_fn_06ef5a (Original VA: 0x6ef5a, Ghidra: FUN_0006ef5a)
 * Prototype: void sound_fn_06ef5a(void);
 * Address  : 0x6ef5a (Size: 371 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06ef5a
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 1 -> sound_non_emitter_has_been_06e9ab
 ******************************************************************************/
void sound_fn_06ef5a(void)

{
  if (g_bss_003db526 == '\0') {
    g_bss_0019d0bc = '\0';
  }
  else {
    if ((g_bss_0019d0bc == '\0') && (g_bss_003db51d != '\0')) {
      g_bss_0019d0bc = '\x01';
    }
    if ((g_bss_0019d0bc == '\x01') && (g_bss_003db50e != '\0')) {
      g_bss_0019d0bc = '\x02';
    }
    if ((g_bss_0019d0bc == '\x02') && (g_bss_003db52a != '\0')) {
      g_bss_0019d0bc = '\x03';
    }
    if ((g_bss_0019d0bc == '\x03') && (g_bss_003db521 != '\0')) {
      g_bss_0019d0bc = '\x04';
    }
    if ((g_bss_0019d0bc == '\x04') && (g_bss_003db514 != '\0')) {
      g_bss_0019d0bc = '\x05';
    }
    if ((g_bss_0019d0bc == '\x05') && (g_bss_003db51d != '\0')) {
      g_bss_0019d0bc = '\x06';
    }
    if ((g_bss_0019d0bc == '\x06') && (g_bss_003db51d != '\0')) {
      g_bss_0019d0bc = '\a';
    }
  }
  if ((g_bss_0019d0ba & 0x20) != 0) {
    if ((g_bss_003db526 == '\0') || (g_bss_003db532 == '\0')) {
      g_bss_0019d0be = '\0';
    }
    else {
      if ((g_bss_0019d0be == '\0') && (g_bss_003db520 != '\0')) {
        sound_non_emitter_has_been_06e9ab();
        g_bss_0019d0be = '\x01';
      }
      if ((g_bss_0019d0be == '\x01') && (g_bss_003db522 != '\0')) {
        sound_non_emitter_has_been_06e9ab();
        g_bss_0019d0be = '\x02';
      }
      if ((g_bss_0019d0be == '\x02') && (g_bss_003db50d != '\0')) {
        sound_non_emitter_has_been_06e9ab();
        g_bss_0019d0be = 3;
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sound_simon_says_hi_everyone_06f0cd (Original VA: 0x6f0cd, Ghidra: FUN_0006f0cd)
 * Prototype: void sound_simon_says_hi_everyone_06f0cd(void);
 * Address  : 0x6f0cd (Size: 777 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : String 'Simon says Hi to everyone he knows...'
 * Callers  : 1 -> creature_dene_says_big_hello_08685c
 * Callees  : 6 -> sound_non_emitter_has_been_06ea5a, LbTextDraw, bflib_system_io_draw_text_overlay_0e6c1c, bflib_system_io_draw_text_overlay_0e6d20, LbTextDrawFormatted, dk_sprintf
 ******************************************************************************/
void sound_simon_says_hi_everyone_06f0cd(void)

{
  int val;
  
  if (g_bss_0019d0bc == '\a') {
    LbTextDraw();
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xbf;
    g_lb_current_font_ptr = g_frontend_font_ptr;
    dk_sprintf(&g_log_sprintf_buf,s_Simon_says_Hi_to_everyone_he_kno_00167677);
    g_bss_00376534 = g_bss_00376534 + g_data_001872a4;
    g_bss_00376538 = g_bss_00376538 + g_data_001872a8;
    if (g_bss_00376534 < 0) {
      g_bss_00376534 = 0;
      g_data_001872a4 = -g_data_001872a4;
    }
    if (g_bss_00376538 < 0) {
      g_bss_00376538 = 0;
      g_data_001872a8 = -g_data_001872a8;
    }
    val = bflib_system_io_draw_text_overlay_0e6c1c();
    if ((int)(uint)g_mouse_cursor_y <= (int)(g_bss_00376534 + val * (uint)g_units_per_pixel)) {
      g_data_001872a4 = -g_data_001872a4;
      val = bflib_system_io_draw_text_overlay_0e6c1c();
      g_bss_00376534 = (g_mouse_cursor_y - 1) - (uint)g_units_per_pixel * val;
    }
    val = bflib_system_io_draw_text_overlay_0e6d20();
    if ((int)(uint)g_mouse_cursor_x <= (int)(g_bss_00376538 + val * (uint)g_units_per_pixel)) {
      g_data_001872a8 = -g_data_001872a8;
      val = bflib_system_io_draw_text_overlay_0e6d20();
      g_bss_00376538 = (g_mouse_cursor_x - 1) - (uint)g_units_per_pixel * val;
    }
    if (g_display_bss_003d9818 != 0) {
      LbTextDrawFormatted();
    }
    sound_non_emitter_has_been_06ea5a();
  }
  if (((g_bss_0019d0ba & 0x20) != 0) && (g_bss_0019d0be == '\x03')) {
    LbTextDraw();
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xbf;
    g_lb_current_font_ptr = g_frontend_font_ptr;
    dk_sprintf(&g_log_sprintf_buf,s_Alex__hopefully_lying_on_a_beach_0016769d);
    g_bss_0037653c = g_bss_0037653c + g_data_001872ac;
    g_bss_00376540 = g_bss_00376540 + g_data_001872b0;
    if (g_bss_0037653c < 0) {
      g_bss_0037653c = 0;
      g_data_001872ac = -g_data_001872ac;
    }
    if (g_bss_00376540 < 0) {
      g_bss_00376540 = 0;
      g_data_001872b0 = -g_data_001872b0;
    }
    val = bflib_system_io_draw_text_overlay_0e6c1c();
    if ((int)(uint)g_mouse_cursor_y <= (int)(g_bss_0037653c + val * (uint)g_units_per_pixel)) {
      g_data_001872ac = -g_data_001872ac;
      val = bflib_system_io_draw_text_overlay_0e6c1c();
      g_bss_0037653c = (g_mouse_cursor_y - 1) - (uint)g_units_per_pixel * val;
    }
    val = bflib_system_io_draw_text_overlay_0e6d20();
    if ((int)(uint)g_mouse_cursor_x <= (int)((uint)g_units_per_pixel * val + g_bss_00376540)) {
      g_data_001872b0 = -g_data_001872b0;
      val = bflib_system_io_draw_text_overlay_0e6d20();
      g_bss_00376540 = (g_mouse_cursor_x - 1) - val * (uint)g_units_per_pixel;
    }
    if (g_display_bss_003d9818 != 0) {
      LbTextDrawFormatted();
    }
    sound_non_emitter_has_been_06ea5a();
  }
  return;
}

/******************************************************************************
 * Function : sound_process_thing_entity_06f3d6 (Original VA: 0x6f3d6, Ghidra: FUN_0006f3d6)
 * Prototype: void sound_process_thing_entity_06f3d6(void);
 * Address  : 0x6f3d6 (Size: 242 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> file_update_player_dungeon_02ca74
 * Callees  : 6 -> mapwho_fn_051468, sound_fn_06ec6f, sound_fn_06f653, bflib_system_io_fn_0f0ab8, bflib_video_sbawe32_mdi_0f143c, bflib_system_io_fn_0f1874
 ******************************************************************************/
void sound_process_thing_entity_06f3d6(void)

{
  int val;
  int extraout_EDX;
  uint extraout_EDX_00;
  
  sound_fn_06ec6f();
  if (g_bss_00376548 != 0) {
    sound_fn_06f653();
    g_bss_00376548 = 0;
  }
  if (g_bss_00376544 != 0) {
    sound_fn_06f653();
    g_bss_00376544 = 0;
  }
  if ((g_bss_002eb9b2 != 0) && (*(char *)((&g_thing_ptrs)[g_bss_002eb9b2] + 0x66) != '\0')) {
    sound_fn_06f653();
    *(undefined1 *)(extraout_EDX + 0x66) = 0;
  }
  bflib_system_io_fn_0f1874();
  mapwho_fn_051468();
  g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
  g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
  bflib_system_io_fn_0f0ab8();
  if (((extraout_EDX_00 != 0) && (1 < extraout_EDX_00)) && (extraout_EDX_00 != 2)) {
    return;
  }
  val = bflib_video_sbawe32_mdi_0f143c();
  if (val != 0) {
    bflib_system_io_fn_0f1874();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sound_fn_06f4c8 (Original VA: 0x6f4c8, Ghidra: FUN_0006f4c8)
 * Prototype: undefined8 sound_fn_06f4c8(void);
 * Address  : 0x6f4c8 (Size: 86 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06f4c8
 * Callers  : 1 -> inits_fn_045bb8
 * Callees  : 9 -> sound_fn_06f541, sound3d_fn_06f816, sound3d_fn_06f82f, sound3d_fn_06f859, sound3d_fn_06f85f, sound3d_fn_06f8f7, sound3d_fn_06f968, sound3d_fn_0700a0 ...
 ******************************************************************************/
undefined8 sound_fn_06f4c8(void)

{
  undefined4 arg_edx;
  
  sound3d_fn_0700a0();
  sound3d_fn_06f816();
  sound3d_fn_06f82f();
  sound3d_fn_06f85f();
  sound3d_fn_06f859();
  sound3d_fn_06f8f7();
  sound3d_fn_06f968();
  sound_fn_06f541();
  sound3d_fn_0700b8();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound_fn_06f51e (Original VA: 0x6f51e, Ghidra: FUN_0006f51e)
 * Prototype: undefined4 sound_fn_06f51e(void);
 * Address  : 0x6f51e (Size: 35 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06f51e
 * Callers  : 1 -> inits_fn_045bb8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sound_fn_06f51e(void)

{
  int arg_eax;
  
  if (arg_eax < 1) {
    arg_eax = 1;
  }
  else if (0x10000 < arg_eax) {
    arg_eax = 0x10000;
  }
  g_data_001872b4 = arg_eax;
  return 1;
}

/******************************************************************************
 * Function : sound_fn_06f541 (Original VA: 0x6f541, Ghidra: FUN_0006f541)
 * Prototype: undefined4 sound_fn_06f541(void);
 * Address  : 0x6f541 (Size: 29 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06f541
 * Callers  : 2 -> inits_fn_045bb8, sound_fn_06f4c8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sound_fn_06f541(void)

{
  int arg_eax;
  
  if (arg_eax < 1) {
    arg_eax = 1;
  }
  else if (0x10 < arg_eax) {
    arg_eax = 0x10;
  }
  g_bss_00376554 = arg_eax;
  return 1;
}

/******************************************************************************
 * Function : sound_fn_06f5e5 (Original VA: 0x6f5e5, Ghidra: FUN_0006f5e5)
 * Prototype: uint sound_fn_06f5e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
 * Address  : 0x6f5e5 (Size: 110 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f5e5
 * Callers  : 4 -> sound_fn_06e538, sound_non_emitter_has_been_06e9ab, sound_non_emitter_has_been_06ea5a, sound_speech_emitter_has_been_06eb1a
 * Callees  : 3 -> sound3d_fn_06faa0, sound3d_fn_070050, sound3d_fn_070080
 ******************************************************************************/
uint sound_fn_06f5e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 arg_ax;
  uint uval;
  int val;
  undefined2 arg_dx;
  undefined2 arg_bx;
  
  uval = sound3d_fn_070050();
  uval = uval & 0xffff;
  if (uval != 0) {
    val = uval * 0x16;
    (&g_bss_00376582)[val] = 100;
    (&g_bss_00376583)[val] = 100;
    *(undefined2 *)(&g_bss_00376572 + val) = arg_ax;
    *(undefined2 *)(&g_bss_00376576 + val) = arg_bx;
    (&g_bss_0037656f)[val] = (undefined1)param_5;
    *(undefined2 *)(&g_bss_00376574 + val) = arg_dx;
    val = sound3d_fn_06faa0(param_3,param_4,3,param_5,param_6);
    if (val != 0) {
      return uval;
    }
    sound3d_fn_070080();
  }
  return 0;
}

/******************************************************************************
 * Function : sound_fn_06f653 (Original VA: 0x6f653, Ghidra: FUN_0006f653)
 * Prototype: undefined8 sound_fn_06f653(void);
 * Address  : 0x6f653 (Size: 30 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f653
 * Callers  : 4 -> sound_room_ambient_sound_object_06e8fc, sound_fn_06ec6f, sound_process_thing_entity_06f3d6, structs_update_creature_control_072af4
 * Callees  : 2 -> sound3d_fn_06ff7f, sound3d_fn_070080
 ******************************************************************************/
undefined8 sound_fn_06f653(void)

{
  undefined4 arg_edx;
  
  sound3d_fn_06ff7f();
  sound3d_fn_070080();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound_fn_06f671 (Original VA: 0x6f671, Ghidra: FUN_0006f671)
 * Prototype: undefined8 sound_fn_06f671(void);
 * Address  : 0x6f671 (Size: 18 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06f671
 * Callers  : 4 -> effect_process_thing_entity_024ab9, update_update_slab_subtile_columns_0df760, update_fn_0e0880, update_fn_0e3e08
 * Callees  : 1 -> sound3d_fn_06ffd9
 ******************************************************************************/
undefined8 sound_fn_06f671(void)

{
  undefined4 arg_edx;
  
  sound3d_fn_06ffd9();
  sound3d_fn_070080();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound_fn_06f69c (Original VA: 0x6f69c, Ghidra: FUN_0006f69c)
 * Prototype: undefined4 sound_fn_06f69c(void);
 * Address  : 0x6f69c (Size: 28 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound.cpp procedure @ 0x06f69c
 * Callers  : 3 -> update_update_slab_subtile_columns_0df760, update_fn_0e0880, update_fn_0e3e08
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sound_fn_06f69c(void)

{
  int arg_eax;
  int val;
  undefined2 arg_cx;
  undefined2 arg_dx;
  undefined2 arg_bx;
  
  val = arg_eax * 0x16;
  *(undefined2 *)(&g_bss_00376572 + val) = arg_dx;
  *(undefined2 *)(&g_bss_00376574 + val) = arg_bx;
  *(undefined2 *)(&g_bss_00376576 + val) = arg_cx;
  (&g_bss_0037656e)[val] = (&g_bss_0037656e)[val] | 4;
  return 1;
}

/******************************************************************************
 * Function : sound_fn_06f6b8 (Original VA: 0x6f6b8, Ghidra: FUN_0006f6b8)
 * Prototype: bool sound_fn_06f6b8(void);
 * Address  : 0x6f6b8 (Size: 18 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f6b8
 * Callers  : 4 -> sound_speech_emitter_has_been_06eb1a, update_update_slab_subtile_columns_0df760, update_fn_0e0880, update_fn_0e3e08
 * Callees  : 0 -> 
 ******************************************************************************/
bool sound_fn_06f6b8(void)

{
  int arg_eax;
  
  return ((&g_bss_0037656e)[arg_eax * 0x16] & 2) == 0;
}

/******************************************************************************
 * Function : sound_fn_06f6fa (Original VA: 0x6f6fa, Ghidra: FUN_0006f6fa)
 * Prototype: bool sound_fn_06f6fa(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0x6f6fa (Size: 49 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f6fa
 * Callers  : 4 -> sound_fn_06e538, sound_non_emitter_has_been_06e9ab, sound_non_emitter_has_been_06ea5a, sound_speech_emitter_has_been_06eb1a
 * Callees  : 1 -> sound3d_fn_06faa0
 ******************************************************************************/
bool sound_fn_06f6fa(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int val;
  
  val = sound3d_fn_06faa0(param_1,param_2,(int)param_3,param_4,param_5);
  return val != 0;
}

/******************************************************************************
 * Function : sound_fn_06f7b2 (Original VA: 0x6f7b2, Ghidra: FUN_0006f7b2)
 * Prototype: undefined8 sound_fn_06f7b2(void);
 * Address  : 0x6f7b2 (Size: 100 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f7b2
 * Callers  : 1 -> sound_room_ambient_sound_object_06e8fc
 * Callees  : 2 -> sndheap_trying_use_two_sound_06e09b, specials_fn_0701e3
 ******************************************************************************/
undefined8 sound_fn_06f7b2(void)

{
  int arg_eax;
  int val;
  char ch;
  char extraout_CL;
  uint uval;
  undefined4 arg_edx;
  
  uval = 0;
  while (ch = (char)uval, (int)uval < g_bss_00376554) {
    val = uval * 0x25;
    if (((&g_bss_0037709e)[val] != '\0') &&
       (&g_bss_0037656e + arg_eax * 0x16 == *(undefined **)((int)&g_bss_00377094 + val))) {
      (&g_bss_0037709e)[val] = 0;
      specials_fn_0701e3();
      sndheap_trying_use_two_sound_06e09b();
      ch = extraout_CL;
    }
    uval = (uint)(byte)(ch + 1);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound_fn_06f865 (Original VA: 0x6f865, Ghidra: FUN_0006f865)
 * Prototype: undefined4 sound_fn_06f865(void);
 * Address  : 0x6f865 (Size: 82 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f865
 * Callers  : 17 -> instance_update_creature_control_04bf40, person_update_creature_control_0653ce, scavenge_update_creature_and_thing_067fd3, sound_fn_06e5ee, sound_update_creature_control_06e61e, sound_room_ambient_sound_object_06e8fc, sound_non_emitter_has_been_06ea5a, sound_roll_unsynced_random_06edb9 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sound_fn_06f865(void)

{
  int arg_eax;
  undefined4 *thing_ptr;
  byte flag;
  int arg_edx;
  uint arg_ebx;
  
  flag = 0;
  thing_ptr = &g_bss_0037707f;
  while( true ) {
    if (g_bss_00376554 <= (int)(uint)flag) {
      return 0;
    }
    if ((((*(char *)((int)thing_ptr + 0x1f) != '\0') && /* thing->class_id */
         (&g_bss_0037656e + arg_eax * 0x16 == *(undefined **)((int)thing_ptr + 0x15))) &&
        (*(short *)(thing_ptr + 2) == arg_edx)) && (*(byte *)((int)thing_ptr + 10) == arg_ebx)) break;
    flag = flag + 1;
    thing_ptr = (undefined4 *)((int)thing_ptr + 0x25);
  }
  return 1;
}

/******************************************************************************
 * Function : sound_fn_06f8b7 (Original VA: 0x6f8b7, Ghidra: FUN_0006f8b7)
 * Prototype: longlong sound_fn_06f8b7(void);
 * Address  : 0x6f8b7 (Size: 64 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f8b7
 * Callers  : 1 -> sound_speech_emitter_has_been_06ebff
 * Callees  : 0 -> 
 ******************************************************************************/
longlong sound_fn_06f8b7(void)

{
  int arg_eax;
  undefined4 *thing_ptr;
  byte flag;
  uint arg_edx;
  
  flag = 0;
  thing_ptr = &g_bss_0037707f;
  while( true ) {
    if (g_bss_00376554 <= (int)(uint)flag) {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((*(char *)((int)thing_ptr + 0x1f) != '\0') && /* thing->class_id */
       (&g_bss_0037656e + arg_eax * 0x16 == *(undefined **)((int)thing_ptr + 0x15))) break;
    flag = flag + 1;
    thing_ptr = (undefined4 *)((int)thing_ptr + 0x25);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound_fn_06f974 (Original VA: 0x6f974, Ghidra: FUN_0006f974)
 * Prototype: undefined4 sound_fn_06f974(void);
 * Address  : 0x6f974 (Size: 26 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound.cpp procedure @ 0x06f974
 * Callers  : 4 -> sound_non_emitter_has_been_06e9ab, sound_non_emitter_has_been_06ea5a, sound_speech_emitter_has_been_06eb1a, sound_speech_emitter_has_been_06ebff
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sound_fn_06f974(void)

{
  int arg_eax;
  
  if ((arg_eax != 0) && (((&g_bss_0037656e)[arg_eax * 0x16] & 1) != 0)) {
    return 1;
  }
  return 0;
}

