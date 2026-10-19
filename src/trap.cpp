/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: trap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 14
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : trap_illegal_trap_trigger_type_075ba4 (Original VA: 0x75ba4, Ghidra: FUN_00075ba4)
 * Prototype: void trap_illegal_trap_trigger_type_075ba4(void);
 * Address  : 0x75ba4 (Size: 140 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp lines 41
 * Purpose  : String 'Illegal trap trigger type'
 * Callers  : 1 -> update_fn_0e2c58
 * Callees  : 3 -> trap_process_map_subtile_075c30, trap_process_map_subtile_0761cd, LbErrorLog
 ******************************************************************************/
void trap_illegal_trap_trigger_type_075ba4(void)

{
  byte flag;
  char ch;
  int arg_eax;
  int extraout_EDX;
  int extraout_EDX_00;
  int thing_ptr;
  
  if (*(char *)(arg_eax + 0x13) != '\0') {
    flag = (&g_data_0018fd21)[(uint)*(byte *)(arg_eax + 0x1a) * 0x36];
    if (flag == 0) {
LAB_00075be1:
      LbErrorLog(); /* LbErrorLog("trap.cpp", line 41, "Illegal trap trigger type") */
      return;
    }
    if (flag < 2) {
      ch = trap_process_map_subtile_075c30();
      thing_ptr = extraout_EDX;
    }
    else {
      if (flag != 2) goto LAB_00075be1;
      ch = trap_process_map_subtile_0761cd();
      thing_ptr = extraout_EDX_00;
    }
    if (((ch != '\0') &&
        (*(int *)(thing_ptr + 0x14) =
              g_game_turn + *(int *)(&g_bss_001ae8a0 + (uint)*(byte *)(thing_ptr + 0x1a) * 0x14),
        *(char *)(thing_ptr + 0x13) != -1)) && /* thing->anim_sprite */
       (*(char *)(thing_ptr + 0x13) = *(char *)(thing_ptr + 0x13) + -1, *(char *)(thing_ptr + 0x13) == '\0')) { /* thing->anim_sprite */
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0xcf; /* thing->render_flags */
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) | 0x20; /* thing->render_flags */
    }
  }
  return;
}

/******************************************************************************
 * Function : trap_process_map_subtile_075c30 (Original VA: 0x75c30, Ghidra: FUN_00075c30)
 * Prototype: undefined8 trap_process_map_subtile_075c30(void);
 * Address  : 0x75c30 (Size: 1437 bytes)
 * Module   : trap.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> trap_illegal_trap_trigger_type_075ba4
 * Callees  : 1 -> trap_illegal_trap_activation_type_076319
 ******************************************************************************/
undefined8 trap_process_map_subtile_075c30(void)

{
  int arg_eax;
  uint uval;
  int loop_i;
  uint uval_2;
  uint thing_ptr;
  undefined4 uval_3;
  uint uval_4;
  uint uval_5;
  uint player_off;
  undefined4 arg_edx;
  int loop_i_2;
  int val;
  int local_b4;
  int local_a8;
  int local_a4;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_3c;
  int local_34;
  int local_30;
  
  uval = *(ushort *)(arg_eax + 0x56) / 2;
  loop_i = *(ushort *)(arg_eax + 0xd) - uval;
  loop_i_2 = loop_i >> 0x1f;
  loop_i = (int)((loop_i + loop_i_2 * -0x100) - (uint)(loop_i_2 << 7 < 0)) >> 8;
  if (loop_i < 1) {
    loop_i = 0;
  }
  uval_2 = (int)(*(ushort *)(arg_eax + 0xd) + uval) >> 8;
  if (0xfe < uval_2) {
    uval_2 = 0xff;
  }
  loop_i_2 = *(ushort *)(arg_eax + 0xf) - uval;
  val = loop_i_2 >> 0x1f;
  local_54 = (int)((loop_i_2 + val * -0x100) - (uint)(val << 7 < 0)) >> 8;
  if (local_54 < 1) {
    local_54 = 0;
  }
  uval = (int)(*(ushort *)(arg_eax + 0xf) + uval) >> 8;
  if (0xfe < uval) {
    uval = 0xff;
  }
  local_b4 = local_54 + -0x14;
  if (local_b4 < 1) {
    local_b4 = 0;
  }
  local_34 = loop_i * 5;
  for (local_a8 = loop_i; local_a8 <= (int)uval_2; local_a8 = local_a8 + 1) {
    local_48 = local_54;
    for (loop_i_2 = local_54 * 0x500 + local_34; local_34 + local_b4 * 0x500 <= loop_i_2;
        loop_i_2 = loop_i_2 + -0x500) {
      if ((*(byte *)((int)&g_map_subtiles + loop_i_2) & 0x10) != 0) {
        local_b4 = local_48 + 1;
        break;
      }
      for (thing_ptr = (*(uint *)((int)&g_map_subtiles + loop_i_2 + 1) & 0x3fffff) >> 0xb;
          thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr; thing_ptr = (uint)*(ushort *)(thing_ptr + 2)
          ) {
        if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6)) /* thing->owner, thing->class_id */
             ) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) && (*(char *)(thing_ptr + 7) != 'C')) {
          uval_4 = (uint)*(char *)(thing_ptr + 6); /* thing->owner */
          uval_5 = (uint)g_neutral_player_number;
          if ((((uval_4 == uval_5) || (player_off = (uint)*(char *)(arg_eax + 6), player_off == uval_5)) ||
              ((((uint)(byte)(&g_player_view_flags)[uval_4 * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f))
                == 0 || ((player_off == uval_5 || (uval_4 == uval_5)))))) ||
             (((uint)(byte)(&g_player_view_flags)[player_off * 0x4ef] & 1 << (*(byte *)(thing_ptr + 6) & 0x1f)) == 0 /* thing->owner */
             )) goto LAB_00075de1;
        }
      }
      local_48 = local_48 + -1;
    }
    local_34 = local_34 + 5;
  }
  local_78 = uval + 0x14;
  if (0xff < local_78) {
    local_78 = 0x100;
  }
  local_30 = loop_i * 5;
  for (local_58 = loop_i; local_58 <= (int)uval_2; local_58 = local_58 + 1) {
    local_50 = uval;
    for (loop_i_2 = uval * 0x500 + local_30; loop_i_2 < (int)(local_30 + local_78 * 0x500);
        loop_i_2 = loop_i_2 + 0x500) {
      if ((*(byte *)((int)&g_map_subtiles + loop_i_2) & 0x10) != 0) {
        local_78 = local_50;
        break;
      }
      for (thing_ptr = (*(uint *)((int)&g_map_subtiles + loop_i_2 + 1) & 0x3fffff) >> 0xb;
          thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr; thing_ptr = (uint)*(ushort *)(thing_ptr + 2)
          ) {
        if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6)) /* thing->owner, thing->class_id */
             ) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) && (*(char *)(thing_ptr + 7) != 'C')) {
          uval_4 = (uint)*(char *)(thing_ptr + 6); /* thing->owner */
          uval_5 = (uint)g_neutral_player_number;
          if (((uval_4 == uval_5) || (player_off = (uint)*(char *)(arg_eax + 6), player_off == uval_5)) ||
             (((((uint)(byte)(&g_player_view_flags)[uval_4 * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f))
                == 0 || ((player_off == uval_5 || (uval_4 == uval_5)))) ||
              (((uint)(byte)(&g_player_view_flags)[player_off * 0x4ef] & 1 << (*(byte *)(thing_ptr + 6) & 0x1f)) == /* thing->owner */
               0)))) goto LAB_00075de1;
        }
      }
      local_50 = local_50 + 1;
    }
    local_30 = local_30 + 5;
  }
  local_7c = loop_i + -0x14;
  if (local_7c < 1) {
    local_7c = 0;
  }
  local_a4 = local_54 * 0x500;
  for (local_4c = local_54; local_4c <= (int)uval; local_4c = local_4c + 1) {
    local_5c = loop_i;
    for (loop_i_2 = loop_i * 5 + local_a4; local_a4 + local_7c * 5 <= loop_i_2; loop_i_2 = loop_i_2 + -5) {
      if ((*(byte *)((int)&g_map_subtiles + loop_i_2) & 0x10) != 0) {
        local_7c = local_5c + 1;
        break;
      }
      for (thing_ptr = (*(uint *)((int)&g_map_subtiles + loop_i_2 + 1) & 0x3fffff) >> 0xb;
          thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr; thing_ptr = (uint)*(ushort *)(thing_ptr + 2)
          ) {
        if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6)) /* thing->owner, thing->class_id */
             ) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) && (*(char *)(thing_ptr + 7) != 'C')) {
          uval_4 = (uint)*(char *)(thing_ptr + 6); /* thing->owner */
          uval_5 = (uint)g_neutral_player_number;
          if ((((uval_4 == uval_5) || (player_off = (uint)*(char *)(arg_eax + 6), player_off == uval_5)) ||
              ((((uint)(byte)(&g_player_view_flags)[uval_4 * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f))
                == 0 || ((player_off == uval_5 || (uval_4 == uval_5)))))) ||
             (((uint)(byte)(&g_player_view_flags)[player_off * 0x4ef] & 1 << (*(byte *)(thing_ptr + 6) & 0x1f)) == 0 /* thing->owner */
             )) goto LAB_00075de1;
        }
      }
      local_5c = local_5c + -1;
    }
    local_a4 = local_a4 + 0x500;
  }
  local_74 = uval_2 + 0x14;
  if (0xff < local_74) {
    local_74 = 0x100;
  }
  local_3c = local_54 * 0x500;
  for (; local_54 <= (int)uval; local_54 = local_54 + 1) {
    local_60 = uval_2;
    for (loop_i = uval_2 * 5 + local_3c; loop_i < (int)(local_3c + local_74 * 5); loop_i = loop_i + 5) {
      if ((*(byte *)((int)&g_map_subtiles + loop_i) & 0x10) != 0) {
        local_74 = local_60;
        break;
      }
      for (thing_ptr = (*(uint *)((int)&g_map_subtiles + loop_i + 1) & 0x3fffff) >> 0xb;
          thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr; thing_ptr = (uint)*(ushort *)(thing_ptr + 2)
          ) {
        if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6)) /* thing->owner, thing->class_id */
             ) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) && (*(char *)(thing_ptr + 7) != 'C')) {
          uval_4 = (uint)*(char *)(thing_ptr + 6); /* thing->owner */
          uval_5 = (uint)g_neutral_player_number;
          if (((uval_5 == uval_4) || (player_off = (uint)*(char *)(arg_eax + 6), uval_5 == player_off)) ||
             (((((uint)(byte)(&g_player_view_flags)[uval_4 * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f))
                == 0 || ((uval_5 == player_off || (uval_5 == uval_4)))) ||
              (((uint)(byte)(&g_player_view_flags)[player_off * 0x4ef] & 1 << (*(byte *)(thing_ptr + 6) & 0x1f)) == /* thing->owner */
               0)))) goto LAB_00075de1;
        }
      }
      local_60 = local_60 + 1;
    }
    local_3c = local_3c + 0x500;
  }
  uval_3 = 0;
LAB_000761c0:
  return CONCAT44(arg_edx,uval_3);
LAB_00075de1:
  trap_illegal_trap_activation_type_076319();
  uval_3 = 1;
  goto LAB_000761c0;
}

/******************************************************************************
 * Function : trap_process_map_subtile_0761cd (Original VA: 0x761cd, Ghidra: FUN_000761cd)
 * Prototype: undefined8 trap_process_map_subtile_0761cd(void);
 * Address  : 0x761cd (Size: 316 bytes)
 * Module   : trap.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> trap_illegal_trap_trigger_type_075ba4
 * Callees  : 1 -> trap_illegal_trap_activation_type_076319
 ******************************************************************************/
undefined8 trap_process_map_subtile_0761cd(void)

{
  int arg_eax;
  uint uval;
  uint thing_ptr;
  undefined4 uval_2;
  uint uval_3;
  uint player_off;
  undefined4 arg_edx;
  int loop_i;
  int val;
  uint uval_4;
  int local_20;
  int local_1c;
  
  uval = *(byte *)(arg_eax + 0xe) / 3;
  thing_ptr = *(byte *)(arg_eax + 0x10) / 3;
  local_20 = thing_ptr * 3;
  val = local_20 + 3;
  local_1c = thing_ptr * 0xf00;
  do {
    if (val <= local_20) {
      uval_2 = 0;
LAB_000761c7:
      return CONCAT44(arg_edx,uval_2);
    }
    for (loop_i = uval * 0xf + local_1c; loop_i < (int)(local_1c + (uval * 3 + 3) * 5);
        loop_i = loop_i + 5) {
      for (thing_ptr = (*(uint *)((int)&g_map_subtiles + loop_i + 1) & 0x3fffff) >> 0xb;
          thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr; thing_ptr = (uint)*(ushort *)(thing_ptr + 2)
          ) {
        if ((((*(char *)(thing_ptr + 0x1f) == '\x05') && (*(char *)(thing_ptr + 6) != *(char *)(arg_eax + 6)) /* thing->owner, thing->class_id */
             ) && ((*(byte *)(thing_ptr + 1) & 1) == 0)) && (*(char *)(thing_ptr + 7) != 'C')) {
          uval_3 = (uint)*(char *)(thing_ptr + 6); /* thing->owner */
          uval_4 = (uint)g_neutral_player_number;
          if ((((uval_4 == uval_3) || (player_off = (uint)*(char *)(arg_eax + 6), uval_4 == player_off)) ||
              ((((uint)(byte)(&g_player_view_flags)[uval_3 * 0x4ef] & 1 << (*(byte *)(arg_eax + 6) & 0x1f))
                == 0 || ((uval_4 == player_off || (uval_4 == uval_3)))))) ||
             (((uint)(byte)(&g_player_view_flags)[player_off * 0x4ef] & 1 << (*(byte *)(thing_ptr + 6) & 0x1f)) == 0 /* thing->owner */
             )) {
            trap_illegal_trap_activation_type_076319();
            uval_2 = 1;
            goto LAB_000761c7;
          }
        }
      }
    }
    local_1c = local_1c + 0x500;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : trap_illegal_trap_activation_type_076319 (Original VA: 0x76319, Ghidra: FUN_00076319)
 * Prototype: void trap_illegal_trap_activation_type_076319(void);
 * Address  : 0x76319 (Size: 187 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp lines 251
 * Purpose  : String 'Illegal trap activation type'
 * Callers  : 2 -> trap_process_map_subtile_075c30, trap_process_map_subtile_0761cd
 * Callees  : 7 -> event_illegal_event_number_created_027390, sound_fn_06e538, trap_activation_shot_0763d4, trap_activation_effect_076643, trap_activation_shot_07668c, trap_fn_0766fa, LbErrorLog
 ******************************************************************************/
void trap_illegal_trap_activation_type_076319(void)

{
  int arg_eax;
  undefined **val;
  undefined4 uStack_1c;
  undefined *local_18;
  
  val = &local_18;
  *(undefined1 *)(arg_eax + 0x18) = 1;
  local_18 = &g_data_0018fd09 + (uint)*(byte *)(arg_eax + 0x1a) * 0x36;
  if (*(char *)(arg_eax + 0x1a) == '\x02') {
    val = (undefined **)&uStack_1c;
    uStack_1c = 0;
    event_illegal_event_number_created_027390();
  }
  *(undefined4 *)((int)val + -4) = 0x100;
  *(undefined4 *)((int)val + -8) = 2;
  *(undefined4 *)((int)val + -0xc) = 0;
  *(undefined4 *)((int)val + -0x10) = 3;
  *(undefined4 *)((int)val + -0x14) = 0x76377;
  sound_fn_06e538();
  switch(local_18[0x19]) {
  case 1:
    *(undefined4 *)((int)val + -0x14) = 0x76397;
    trap_activation_shot_0763d4();
    break;
  case 2:
    *(undefined4 *)((int)val + -0x14) = 0x763a2;
    trap_activation_effect_076643();
    break;
  case 3:
    *(undefined4 *)((int)val + -0x14) = 0x763ad;
    trap_activation_shot_07668c();
    break;
  case 4:
    *(undefined4 *)((int)val + -0x14) = 0x763b8;
    trap_fn_0766fa();
    break;
  default:
    *(undefined4 *)((int)val + -0x14) = 0x763ce;
    LbErrorLog(); /* LbErrorLog("trap.cpp", line 251, "Illegal trap activation type") */
  }
  return;
}

/******************************************************************************
 * Function : trap_activation_shot_0763d4 (Original VA: 0x763d4, Ghidra: FUN_000763d4)
 * Prototype: void trap_activation_shot_0763d4(void);
 * Address  : 0x763d4 (Size: 405 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * Purpose  : String 'Trap activation of shot 0'
 * Callers  : 1 -> trap_illegal_trap_activation_type_076319
 * Callees  : 4 -> anger_fn_010d08, inits_allocate_dynamic_light_shot_0442ca, sound_fn_06e538, bflib_system_io_fn_0e69fc
 ******************************************************************************/
void trap_activation_shot_0763d4(void)

{
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int thing_ptr;
  short *val_3;
  undefined8 uval;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  short local_2c;
  short sStack_2a;
  short local_28;
  undefined *local_24;
  undefined *local_20;
  uint local_1c;
  uint local_18;
  
  val_3 = &local_2c;
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0x36;
  local_24 = &g_data_0018fd09 + val;
  if ((&g_data_0018fd23)[val] == '\0') {
    uStack_30 = 0x763ce;
    LbErrorLog();
  }
  else {
    local_20 = &g_data_00188c94 + (uint)(byte)(&g_data_0018fd23)[val] * 0x65;
    uStack_30 = 0x76418;
    val = inits_allocate_dynamic_light_shot_0442ca();
    if (val != 0) {
      local_1c = (uint)*(ushort *)(arg_eax + 0xd);
      uStack_30 = 0x76437;
      val_2 = bflib_system_io_fn_0e69fc();
      local_1c = (uint)*(ushort *)(arg_eax + 0xf);
      local_18 = (uint)*(ushort *)(extraout_ECX + 0xf);
      uStack_30 = 0x76452;
      uval = bflib_system_io_fn_0e69fc();
      thing_ptr = (int)((ulonglong)uval >> 0x20);
      if ((int)uval < val_2) {
        if (*(ushort *)(extraout_ECX_00 + 0xd) < *(ushort *)(arg_eax + 0xd)) {
          *(undefined2 *)(thing_ptr + 0x52) = 0x600; /* thing->health */
        }
        else {
          *(undefined2 *)(thing_ptr + 0x52) = 0x200; /* thing->health */
        }
      }
      else if (*(ushort *)(extraout_ECX_00 + 0xf) < *(ushort *)(arg_eax + 0xf)) {
        *(undefined2 *)(thing_ptr + 0x52) = 0; /* thing->health */
      }
      else {
        *(undefined2 *)(thing_ptr + 0x52) = 0x400; /* thing->health */
      }
      *(undefined2 *)(val + 0x54) = 0;
      uStack_30 = 0x764a3;
      anger_fn_010d08();
      *(short *)(val + 0x32) = *(short *)(val + 0x32) + local_2c;
      *(short *)(val + 0x34) = *(short *)(val + 0x34) + sStack_2a;
      *(short *)(val + 0x36) = *(short *)(val + 0x36) + local_28;
      *(byte *)(val + 1) = *(byte *)(val + 1) | 4;
      *(undefined *)(val + 0x16) = local_24[0x1b];
      if (*(short *)(local_20 + 0x1b) != 0) {
        uStack_30 = 0x100;
        uStack_34 = 6;
        uStack_38 = 0;
        g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
        val_3 = (short *)&uStack_3c;
        uStack_3c = 3;
        g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
        sound_fn_06e538();
      }
      if (*(short *)(local_20 + 0x1e) != 0) {
        *(undefined4 *)((int)val_3 + -4) = 0x100;
        *(undefined4 *)((int)val_3 + -8) = 2;
        *(undefined4 *)((int)val_3 + -0xc) = 0;
        *(undefined4 *)((int)val_3 + -0x10) = 3;
        *(undefined4 *)((int)val_3 + -0x14) = 0x76550;
        sound_fn_06e538();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : trap_activation_shot_076569 (Original VA: 0x76569, Ghidra: FUN_00076569)
 * Prototype: void trap_activation_shot_076569(void);
 * Address  : 0x76569 (Size: 218 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * Purpose  : String 'Trap activation of shot 0'
 * Callers  : 1 -> instance_update_creature_and_thing_04af38
 * Callees  : 2 -> anger_fn_010d08, inits_allocate_dynamic_light_shot_0442ca
 ******************************************************************************/
void trap_activation_shot_076569(void)

{
  int arg_eax;
  int val;
  int thing_ptr;
  undefined2 extraout_CX;
  short local_20;
  short sStack_1e;
  short local_1c;
  
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0x36;
  if ((&g_data_0018fd23)[val] == '\0') {
    LbErrorLog();
  }
  else {
    thing_ptr = inits_allocate_dynamic_light_shot_0442ca();
    if (thing_ptr != 0) {
      *(undefined2 *)(thing_ptr + 0x54) = 0;
      *(undefined2 *)(thing_ptr + 0x52) = extraout_CX; /* thing->health */
      anger_fn_010d08();
      *(short *)(thing_ptr + 0x32) = *(short *)(thing_ptr + 0x32) + local_20;
      *(short *)(thing_ptr + 0x34) = *(short *)(thing_ptr + 0x34) + sStack_1e;
      *(short *)(thing_ptr + 0x36) = *(short *)(thing_ptr + 0x36) + local_1c;
      *(byte *)(thing_ptr + 1) = *(byte *)(thing_ptr + 1) | 4;
      *(undefined *)(thing_ptr + 0x16) = (&g_data_0018fd24)[val];
      *(int *)(arg_eax + 0x14) =
           g_game_turn + *(int *)(&g_bss_001ae8a0 + (uint)*(byte *)(arg_eax + 0x1a) * 0x14);
      if ((*(char *)(arg_eax + 0x13) != -1) &&
         (*(char *)(arg_eax + 0x13) = *(char *)(arg_eax + 0x13) + -1, *(char *)(arg_eax + 0x13) == '\0'
         )) {
        *(undefined2 *)(arg_eax + 0x5e) = 0xffff;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : trap_activation_effect_076643 (Original VA: 0x76643, Ghidra: FUN_00076643)
 * Prototype: void trap_activation_effect_076643(void);
 * Address  : 0x76643 (Size: 73 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp lines 372
 * Purpose  : String 'Trap activation of effect 0'
 * Callers  : 1 -> trap_illegal_trap_activation_type_076319
 * Callees  : 2 -> effect_allocate_light_effect_024998, LbErrorLog
 ******************************************************************************/
void trap_activation_effect_076643(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  
  if ((&g_data_0018fd23)[(uint)*(byte *)(arg_eax + 0x1a) * 0x36] == '\0') {
    LbErrorLog(); /* LbErrorLog("trap.cpp", line 372, "Trap activation of effect 0") */
  }
  else {
    val = effect_allocate_light_effect_024998();
    if (val != 0) {
      *(undefined1 *)(val + 0x16) = *(undefined1 *)(extraout_ECX + 0x1b);
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : trap_activation_shot_07668c (Original VA: 0x7668c, Ghidra: FUN_0007668c)
 * Prototype: void trap_activation_shot_07668c(void);
 * Address  : 0x7668c (Size: 110 bytes)
 * Module   : trap.cpp [direct_file_string_xref]
 * OrigLine : trap.cpp lines 402
 * Purpose  : String 'Trap activation of shot 0'
 * Callers  : 1 -> trap_illegal_trap_activation_type_076319
 * Callees  : 2 -> inits_allocate_dynamic_light_shot_0442ca, LbErrorLog
 ******************************************************************************/
void trap_activation_shot_07668c(void)

{
  undefined1 uval;
  short short_val;
  int arg_eax;
  int val;
  int extraout_ECX;
  
  if ((&g_data_0018fd23)[(uint)*(byte *)(arg_eax + 0x1a) * 0x36] == '\0') {
    LbErrorLog(); /* LbErrorLog("trap.cpp", line 402, "Trap activation of shot 0") */
  }
  else {
    val = inits_allocate_dynamic_light_shot_0442ca();
    if (val != 0) {
      uval = *(undefined1 *)(extraout_ECX + 0x1b);
      *(undefined2 *)(val + 0x1d) = 0;
      *(undefined1 *)(val + 0x16) = uval;
      *(short *)(val + 0x32) = *(short *)(val + 0x32) + *(short *)(extraout_ECX + 0x30);
      *(short *)(val + 0x34) = *(short *)(val + 0x34) + *(short *)(extraout_ECX + 0x32);
      short_val = *(short *)(extraout_ECX + 0x34);
      *(byte *)(val + 1) = *(byte *)(val + 1) | 4;
      *(short *)(val + 0x36) = *(short *)(val + 0x36) + short_val;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : trap_fn_0766fa (Original VA: 0x766fa, Ghidra: FUN_000766fa)
 * Prototype: void trap_fn_0766fa(void);
 * Address  : 0x766fa (Size: 89 bytes)
 * Module   : trap.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module trap.cpp procedure @ 0x0766fa
 * Callers  : 1 -> trap_illegal_trap_activation_type_076319
 * Callees  : 2 -> slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
void trap_fn_0766fa(void)

{
  int arg_eax;
  
  slab_attempt_place_animating_slab_0d7688(0,*(undefined1 *)(arg_eax + 0xe),*(undefined1 *)(arg_eax + 0x10));
  slab_process_slabmap_tile_0da6fc();
  return;
}

/******************************************************************************
 * Function : trap_process_map_subtile_076753 (Original VA: 0x76753, Ghidra: FUN_00076753)
 * Prototype: uint trap_process_map_subtile_076753(void);
 * Address  : 0x76753 (Size: 54 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 4 -> instance_update_player_dungeon_04a40c, instance_process_dungeon_room_04a6a2, process_players_dungeon_command_packet, object_process_slabmap_tile_0c4b0c
 * Callees  : 0 -> 
 ******************************************************************************/
uint trap_process_map_subtile_076753(void)

{
  int arg_eax;
  uint thing_ptr;
  int arg_edx;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles + (arg_eax + arg_edx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (*(char *)(thing_ptr + 0x1f) == '\b') break; /* thing->class_id */
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  }
  return thing_ptr;
}

/******************************************************************************
 * Function : trap_process_map_subtile_076789 (Original VA: 0x76789, Ghidra: FUN_00076789)
 * Prototype: uint trap_process_map_subtile_076789(void);
 * Address  : 0x76789 (Size: 104 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 6 -> newgui_update_player_view_state_05bf63, process_players_dungeon_command_packet, draw_update_slab_subtile_columns_08f518, draw_update_slab_subtile_columns_08f75c, draw_update_slab_subtile_columns_08f924, draw_update_slab_subtile_columns_08fb10
 * Callees  : 0 -> 
 ******************************************************************************/
uint trap_process_map_subtile_076789(void)

{
  int arg_eax;
  uint thing_ptr;
  int arg_edx;
  int val;
  
  val = 0;
  do {
    if (0x11 < val) {
      return 0;
    }
    thing_ptr = (*(uint *)((int)&g_map_subtiles +
                      ((int)*(char *)((int)&g_data_0018b647 + val + 3) + arg_eax * 3 + 1 +
                      ((int)(char)(&g_data_0018b64b)[val] + arg_edx * 3 + 1) * 0x100) * 5 + 1) &
            0x3fffff) >> 0xb;
    while( true ) {
      thing_ptr = (&g_thing_ptrs)[thing_ptr];
      if (thing_ptr <= g_thing_ptrs) break;
      if (*(char *)(thing_ptr + 0x1f) == '\b') { /* thing->class_id */
        return thing_ptr;
      }
      thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
    }
    val = val + 2;
  } while( true );
}

/******************************************************************************
 * Function : trap_fn_0767f1 (Original VA: 0x767f1, Ghidra: FUN_000767f1)
 * Prototype: undefined8 trap_fn_0767f1(void);
 * Address  : 0x767f1 (Size: 15 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module trap.cpp procedure @ 0x0767f1
 * Callers  : 4 -> instance_update_player_dungeon_04a40c, instance_process_dungeon_room_04a6a2, process_players_dungeon_command_packet, object_process_slabmap_tile_0c4b0c
 * Callees  : 1 -> structs_update_creature_control_072af4
 ******************************************************************************/
undefined8 trap_fn_0767f1(void)

{
  undefined4 arg_edx;
  
  structs_update_creature_control_072af4();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : trap_process_thing_entity_076800 (Original VA: 0x76800, Ghidra: FUN_00076800)
 * Prototype: void trap_process_thing_entity_076800(void);
 * Address  : 0x76800 (Size: 198 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> newgui_fn_05ac80
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void trap_process_thing_entity_076800(void)

{
  uint arg_eax;
  int thing_ptr;
  uint uval;
  char arg_dl;
  
  if (*(short *)(&g_bss_003776e4 + arg_eax * 2) != 0) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(&g_bss_003776e4 + arg_eax * 2)];
    do {
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
      if (thing_ptr == g_thing_ptrs) break;
    } while ((arg_dl != *(char *)(thing_ptr + 6)) || (*(byte *)(thing_ptr + 0x1a) != arg_eax)); /* thing->owner */
    *(undefined2 *)(&g_bss_003776e4 + arg_eax * 2) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  }
  uval = g_bss_002e6eee;
  if (*(short *)(&g_bss_003776e4 + arg_eax * 2) == 0) {
    while (thing_ptr = (&g_thing_ptrs)[uval], thing_ptr != g_thing_ptrs) {
      if ((arg_dl == *(char *)(thing_ptr + 6)) && (*(byte *)(thing_ptr + 0x1a) == arg_eax)) { /* thing->owner */
        *(undefined2 *)(&g_bss_003776e4 + arg_eax * 2) = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        break;
      }
      uval = (uint)*(ushort *)(thing_ptr + 0x67);
    }
  }
  if (*(short *)(&g_bss_003776e4 + arg_eax * 2) != 0) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : trap_process_thing_entity_0768c6 (Original VA: 0x768c6, Ghidra: FUN_000768c6)
 * Prototype: int trap_process_thing_entity_0768c6(void);
 * Address  : 0x768c6 (Size: 53 bytes)
 * Module   : trap.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> newgui_update_player_dungeon_055e33
 * Callees  : 0 -> 
 ******************************************************************************/
int trap_process_thing_entity_0768c6(void)

{
  int thing_ptr;
  uint arg_eax;
  uint uval;
  uint3 uval_2;
  char arg_dl;
  
  uval = g_bss_002e6eee;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    uval_2 = (uint3)((uint)thing_ptr >> 8);
    if (thing_ptr == g_thing_ptrs) {
      return (uint)uval_2 << 8;
    }
    if ((arg_dl == *(char *)(thing_ptr + 6)) && (*(byte *)(thing_ptr + 0x1a) == arg_eax)) break; /* thing->owner */
    uval = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  return CONCAT31(uval_2,1);
}

