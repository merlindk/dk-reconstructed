/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: eyelens.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 7
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : eyelens_update_player_dungeon_026e5e (Original VA: 0x26e5e, Ghidra: FUN_00026e5e)
 * Prototype: undefined8 eyelens_update_player_dungeon_026e5e(void);
 * Address  : 0x26e5e (Size: 239 bytes)
 * Module   : eyelens.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 4 -> event_illegal_event_number_created_027390, person_update_creature_control_063a25, person_fn_063b6d, update_fn_0dc440
 ******************************************************************************/
undefined8 eyelens_update_player_dungeon_026e5e(void)

{
  int gui_btn;
  int val;
  undefined4 uval;
  short *val_2;
  short *extraout_ECX;
  undefined4 arg_edx;
  int val_3;
  uint *word_ptr;
  uint uStack_24;
  int local_20;
  uint local_1c;
  
  local_1c = 0;
  val_2 = &g_dungeons;
  val_3 = 0;
  do {
    if ((int)(uint)g_neutral_player_number <= (int)local_1c) {
      uval = 0;
LAB_00026db6:
      return CONCAT44(arg_edx,uval);
    }
    if (((((&g_players)[val_3] & 1) != 0) && ((&g_bss_0019d0f4)[val_3] == '\x01')) &&
       (local_20 = local_1c * 0x1508, *val_2 != 0)) {
      uStack_24 = 0x26ed4;
      val = update_fn_0dc440();
      val_2 = extraout_ECX;
      if (val < 0x600) {
        uStack_24 = 0x26ee6;
        person_update_creature_control_063a25();
        word_ptr = (uint *)&local_20;
        if (((g_neutral_player_number != local_1c) &&
            (val_3 = (uint)*(byte *)(gui_btn + 0x1a) + local_20, word_ptr = (uint *)&local_20,
            (byte)(&g_bss_002e0ea3)[val_3] < 2)) &&
           (word_ptr = (uint *)&local_20, (&g_bss_002e1a12)[val_3] == '\0')) {
          uStack_24 = (uint)*(ushort *)(gui_btn + 0x1b); /* gui_btn->id_num */
          word_ptr = &uStack_24;
          event_illegal_event_number_created_027390();
          (&g_bss_002e1a12)[(uint)*(byte *)(gui_btn + 0x1a) + local_20] = 1;
        }
        *(undefined4 *)((int)word_ptr + -4) = 0x26f3e;
        person_fn_063b6d();
        uval = 1;
        goto LAB_00026db6;
      }
    }
    local_1c = local_1c + 1;
    val_3 = val_3 + 0x4ef;
    val_2 = val_2 + 0xa84;
  } while( true );
}

/******************************************************************************
 * Function : eyelens_fn_026f4d (Original VA: 0x26f4d, Ghidra: FUN_00026f4d)
 * Prototype: undefined8 eyelens_fn_026f4d(void);
 * Address  : 0x26f4d (Size: 93 bytes)
 * Module   : eyelens.cpp [address_order_boundary_interpolation]
 * Purpose  : Module eyelens.cpp procedure @ 0x026f4d
 * Callers  : 0 -> 
 * Callees  : 4 -> effect_allocate_light_effect_024998, person_fn_063b6d, person_external_change_state_but_064a5f, sound_fn_06e538
 ******************************************************************************/
undefined8 eyelens_fn_026f4d(void)

{
  char ch;
  undefined4 uval;
  
  effect_allocate_light_effect_024998();
  uval = 0;
  sound_fn_06e538(3,0,2,0x100);
  ch = person_external_change_state_but_064a5f();
  if (ch == '\0') {
    person_fn_063b6d();
  }
  return CONCAT44(uval,1);
}

/******************************************************************************
 * Function : eyelens_fn_026faa (Original VA: 0x26faa, Ghidra: FUN_00026faa)
 * Prototype: undefined8 eyelens_fn_026faa(void);
 * Address  : 0x26faa (Size: 95 bytes)
 * Module   : eyelens.cpp [address_order_boundary_interpolation]
 * Purpose  : Module eyelens.cpp procedure @ 0x026faa
 * Callers  : 0 -> 
 * Callees  : 4 -> person_fn_063b6d, sound_roll_unsynced_random_06eeaf, creature_how_hero_have_tend_08608c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 eyelens_fn_026faa(void)

{
  int val;
  undefined4 arg_edx;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if ((val != 0) && (*(short *)(val + 10) == 1)) {
    sound_roll_unsynced_random_06eeaf();
    creature_how_hero_have_tend_08608c(0);
    return 0xffffffff;
  }
  person_fn_063b6d();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : eyelens_memory_already_allocated_02700c (Original VA: 0x2700c, Ghidra: FUN_0002700c)
 * Prototype: void eyelens_memory_already_allocated_02700c(void);
 * Address  : 0x2700c (Size: 212 bytes)
 * Module   : eyelens.cpp [direct_file_string_xref]
 * OrigLine : eyelens.cpp lines 17, 58
 * Purpose  : String 'EyeLens Memory already allocated'
 * Callers  : 2 -> eyelens_fn_027320, game_out_sync_gameturn_036ff4
 * Callees  : 4 -> eyelens_fn_0270e0, LbErrorLog, LbFileLoadAt, bflib_system_io_fn_0e94b0
 ******************************************************************************/
void eyelens_memory_already_allocated_02700c(void)

{
  if ((g_bss_00333193 != 0) || (g_bss_00333197 != 0)) {
    LbErrorLog(); /* LbErrorLog("eyelens.cpp", line 17, "EyeLens Memory already allocated") */
    eyelens_fn_0270e0();
  }
  if (0xf < g_bss_00334065) {
    if (g_active_screen_mode < 10) {
      if (g_active_screen_mode == 1) {
        g_bss_00333193 = LbFileLoadAt();
        if (g_bss_00333193 != 0) {
          g_bss_00333197 = LbFileLoadAt();
          if (g_bss_00333197 != 0) goto LAB_0002708c;
          bflib_system_io_fn_0e94b0();
          g_bss_00333193 = 0;
        }
        goto LAB_00027046;
      }
    }
    else if ((g_active_screen_mode < 0xb) || (g_active_screen_mode == 0xd)) {
      g_bss_00333193 = LbFileLoadAt();
      if (g_bss_00333193 != 0) {
LAB_0002708c:
        g_bss_0019d0bd = g_bss_0019d0bd | 2;
        return;
      }
      g_bss_00333193 = 0;
      goto LAB_00027046;
    }
    LbErrorLog(); /* LbErrorLog("eyelens.cpp", line 58, "Unsupported screen mode") */
  }
LAB_00027046:
  g_bss_0019d0bd = g_bss_0019d0bd & 0xfd;
  return;
}

/******************************************************************************
 * Function : eyelens_fn_0270e0 (Original VA: 0x270e0, Ghidra: FUN_000270e0)
 * Prototype: void eyelens_fn_0270e0(void);
 * Address  : 0x270e0 (Size: 80 bytes)
 * Module   : eyelens.cpp [contiguous_same_unit_span]
 * Purpose  : Module eyelens.cpp procedure @ 0x0270e0
 * Callers  : 6 -> eyelens_memory_already_allocated_02700c, file_update_player_dungeon_02c833, game_out_sync_gameturn_036ff4, packet_build_local_player_turn_packet, setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites
 * Callees  : 1 -> bflib_system_io_fn_0e94b0
 ******************************************************************************/
void eyelens_fn_0270e0(void)

{
  if (g_bss_00333193 != 0) {
    bflib_system_io_fn_0e94b0();
    g_bss_00333193 = 0;
  }
  if (g_bss_00333197 != 0) {
    bflib_system_io_fn_0e94b0();
    g_bss_00333197 = 0;
  }
  g_bss_0019d0c6 = 0;
  g_bss_0019d0c7 = 0;
  g_bss_0019d0bd = g_bss_0019d0bd & 0xfd;
  return;
}

/******************************************************************************
 * Function : eyelens_data_frac_dat_027130 (Original VA: 0x27130, Ghidra: FUN_00027130)
 * Prototype: void eyelens_data_frac_dat_027130(void);
 * Address  : 0x27130 (Size: 496 bytes)
 * Module   : eyelens.cpp [direct_file_string_xref]
 * OrigLine : eyelens.cpp lines 159
 * Purpose  : String 'data\frac%02d.dat'
 * Callers  : 5 -> eyelens_fn_027320, creature_allocate_light_new_hero_080a94, creature_allocate_light_new_hero_080c84, creature_update_player_view_state_085aa4, creature_update_player_view_state_085f80
 * Callees  : 7 -> file_fn_02d861, lair_fn_04de8c, moodneed_fn_051a06, moodneed_fn_051a3f, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e984c
 ******************************************************************************/
void eyelens_data_frac_dat_027130(void)

{
  uint arg_eax;
  int val;
  undefined4 uval;
  undefined1 local_18;
  
  if ((g_bss_0019d0bd & 2) == 0) {
    return;
  }
  if ((0xc < g_bss_0019d0c7) && (g_bss_0019d0c7 < 0xf)) {
    *(undefined4 *)(&g_bss_0019d0cf + g_my_player_word._3_1_ * 0x4ef) = 0;
    g_bss_0019d0c6 = 0;
  }
  if (arg_eax == 0) {
    g_bss_0019d0c6 = 0;
    g_bss_0019d0c7 = 0;
    return;
  }
  local_18 = (undefined1)arg_eax;
  if (g_bss_0019d0c6 == arg_eax) {
    g_bss_0019d0c7 = local_18;
    return;
  }
  if (arg_eax < 4) {
    if (arg_eax == 0) {
LAB_000272c0:
      LbErrorLog(); /* LbErrorLog("eyelens.cpp", line 159, "Invalid lens effect") */
      g_bss_0019d0c6 = 0;
      g_bss_0019d0c7 = 0;
      return;
    }
    if (arg_eax < 3) {
      lair_fn_04de8c();
    }
    else {
      file_fn_02d861();
    }
  }
  else {
    if (arg_eax < 0xc) {
      dk_sprintf(&g_log_sprintf_buf,s_data_frac_02d_dat_001627ed,arg_eax - 4);
    }
    else {
      if (0xc < arg_eax) {
        uval = g_data_00199220;
        if ((arg_eax < 0xe) || (uval = g_data_00199224, arg_eax == 0xe)) {
          val = (int)g_my_player_word._3_1_;
          *(undefined4 *)(&g_bss_0019d591 + val * 0x4ef) = uval;
          *(undefined4 *)(&g_bss_0019d0cf + val * 0x4ef) = uval;
          g_bss_0019d0c6 = local_18;
          g_bss_0019d0c7 = local_18;
          return;
        }
        goto LAB_000272c0;
      }
      dk_sprintf(&g_log_sprintf_buf,s_data_frac_02d_dat_001627ff,arg_eax - 4);
    }
    bflib_system_io_fn_0e984c();
    moodneed_fn_051a06();
    moodneed_fn_051a3f();
  }
  g_bss_0019d0c7 = local_18;
  g_bss_0019d0c6 = local_18;
  return;
}

/******************************************************************************
 * Function : eyelens_fn_027320 (Original VA: 0x27320, Ghidra: FUN_00027320)
 * Prototype: void eyelens_fn_027320(void);
 * Address  : 0x27320 (Size: 37 bytes)
 * Module   : eyelens.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module eyelens.cpp procedure @ 0x027320
 * Callers  : 2 -> file_update_player_dungeon_02c833, setup_init_game_screen_and_subsystems
 * Callees  : 2 -> eyelens_memory_already_allocated_02700c, eyelens_data_frac_dat_027130
 ******************************************************************************/
void eyelens_fn_027320(void)

{
  int extraout_EDX;
  
  eyelens_memory_already_allocated_02700c();
  if (((g_bss_0019d0bd & 2) != 0) && (extraout_EDX != 0)) {
    g_bss_0019d0c7 = 0;
    eyelens_data_frac_dat_027130();
  }
  return;
}

