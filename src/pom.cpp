/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: pom.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 11
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : pom_update_creature_control_0654d8 (Original VA: 0x654d8, Ghidra: FUN_000654d8)
 * Prototype: undefined8 pom_update_creature_control_0654d8(void);
 * Address  : 0x654d8 (Size: 109 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> sound_roll_unsynced_random_06edb9
 ******************************************************************************/
undefined8 pom_update_creature_control_0654d8(void)

{
  short *val;
  int cctrl_ptr;
  undefined4 uval;
  int thing;
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
        uStack_18 = 0x65520;
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

/******************************************************************************
 * Function : pom_roll_action_random_065545 (Original VA: 0x65545, Ghidra: FUN_00065545)
 * Prototype: undefined8 pom_roll_action_random_065545(void);
 * Address  : 0x65545 (Size: 181 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 2 -> evil_roll_action_random_02855c, person_update_creature_control_063dd3
 * Callees  : 1 -> door_process_map_subtile_022b3a
 ******************************************************************************/
undefined8 pom_roll_action_random_065545(void)

{
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  undefined4 arg_edx;
  int loop_i;
  
  val = (*(byte *)(arg_eax + 0xe) / 3) * 3 + 1;
  val_2 = (*(byte *)(arg_eax + 0x10) / 3) * 3 + 1;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  for (loop_i = 0; loop_i < 5; loop_i = loop_i + 1) {
    val_3 = door_process_map_subtile_022b3a(val,val_2);
    if ((val_3 != 0) && (*(char *)(val_3 + 6) != *(char *)(arg_eax + 6))) goto LAB_00064357;
  }
  val_3 = 0;
LAB_00064357:
  return CONCAT44(arg_edx,val_3);
}

/******************************************************************************
 * Function : pom_update_slab_subtile_columns_0655fa (Original VA: 0x655fa, Ghidra: FUN_000655fa)
 * Prototype: undefined8 pom_update_slab_subtile_columns_0655fa(void);
 * Address  : 0x655fa (Size: 288 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 2 -> update_state_return_type_human_0e0b1c, update_update_slab_subtile_columns_0e45c0
 * Callees  : 1 -> move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 pom_update_slab_subtile_columns_0655fa(void)

{
  int slab_coord;
  int slab_coord_2;
  short short_val;
  undefined4 uval;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  int val_2;
  uint rand_seed;
  char *str_ptr;
  int local_24;
  int local_20;
  
  slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)];
  local_20 = 0;
  slab_coord_2 = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)];
  str_ptr = (char *)&g_bss_002ee9c1;
  do {
    if (0x1f < local_20) {
      uval = 0;
LAB_00064357:
      return CONCAT44(arg_edx,uval);
    }
    val_2 = str_ptr[1] + slab_coord;
    val = *str_ptr + slab_coord_2;
    if ((((-1 < val_2) && (val_2 < 0x55)) && (-1 < val)) &&
       ((val < 0x55 &&
        ((&g_data_001921d2)[(uint)(byte)(&g_slabmap_base)[(val * 0x55 + val_2) * 6] * 0x16] != '\0'))))
    {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      rand_seed = g_action_random_seed % 9;
      for (local_24 = 0; local_24 < 9; local_24 = local_24 + 1) {
        if ((*(byte *)((int)&g_map_subtiles +
                      (((int)(char)(&g_data_0018b64b)[rand_seed * 2] + val * 3 + 1) * 0x100 +
                      (int)*(char *)((int)&g_data_0018b647 + rand_seed * 2 + 3) + val_2 * 3 + 1) * 5) &
            0x10) == 0) {
          short_val = move_update_creature_control_0b3b58();
          if (short_val != 0) {
            uval = 1;
            goto LAB_00064357;
          }
        }
        rand_seed = (int)(rand_seed + 1) % 9;
      }
    }
    local_20 = local_20 + 1;
    str_ptr = str_ptr + 4;
  } while( true );
}

/******************************************************************************
 * Function : pom_fn_06571a (Original VA: 0x6571a, Ghidra: FUN_0006571a)
 * Prototype: undefined4 pom_fn_06571a(void);
 * Address  : 0x6571a (Size: 8 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Module pom.cpp procedure @ 0x06571a
 * Callers  : 0 -> 
 * Callees  : 1 -> person_fn_063b6d
 ******************************************************************************/
undefined4 pom_fn_06571a(void)

{
  person_fn_063b6d();
  return 0;
}

/******************************************************************************
 * Function : pom_iterations_065724 (Original VA: 0x65724, Ghidra: FUN_00065724)
 * Prototype: longdouble pom_iterations_065724(void);
 * Address  : 0x65724 (Size: 320 bytes)
 * Module   : pom.cpp [direct_file_string_xref]
 * OrigLine : pom.cpp lines 54
 * Purpose  : String 'POM - Too many iterations'
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, setup_verify_cdrom_installation
 * Callees  : 3 -> pom_fn_065864, pom_fn_065a61, LbErrorLog
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longdouble pom_iterations_065724(void)

{
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  int val;
  undefined1 auStack_50 [12];
  int local_44;
  float local_40;
  float local_3c;
  int local_34;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *word_ptr_3;
  undefined1 *word_ptr_4;
  undefined1 *word_ptr_5;
  
  local_44 = 0;
  local_34 = 0;
  local_40 = 0.0;
  local_2c = 0.0;
  local_24 = 0;
  val = 1;
  local_20 = 0;
  local_1c = pom_fn_065a61();
  word_ptr = auStack_50;
  while ((local_24 == 0 && (local_20 = local_20 + 1, local_20 != 0x2711))) {
    if (val == 1) {
      *(float **)(word_ptr + -4) = &local_40;
      *(undefined4 *)(word_ptr + -8) = 0x6579a;
      pom_fn_065864();
      word_ptr = word_ptr + -4;
    }
    else {
      local_44 = local_34;
      local_40 = local_2c;
    }
    val = val + 1;
    word_ptr_2 = word_ptr + -4;
    word_ptr_3 = word_ptr + -4;
    word_ptr_4 = word_ptr + -4;
    word_ptr_5 = word_ptr + -4;
    *(float **)(word_ptr + -4) = &local_2c;
    *(undefined4 *)(word_ptr + -8) = 0x657bb;
    pom_fn_065864();
    if (((local_44 < local_1c) ||
        ((word_ptr = word_ptr + -4, local_1c == local_44 && (word_ptr = word_ptr_2, local_40 <= local_3c))))
       && ((local_1c < local_34 ||
           ((word_ptr = word_ptr_3, local_1c == local_34 && (word_ptr = word_ptr_4, local_3c < local_2c)))))) {
      local_24 = 1;
      word_ptr = word_ptr_5;
    }
  }
  if (local_20 == 10000) {
    local_28 = 0.0;
    *(undefined4 *)(word_ptr + -4) = 0x65815;
    LbErrorLog(); /* LbErrorLog("pom.cpp", line 54, "POM - Too many iterations
") */
  }
  else {
    local_28 = (((local_3c - local_40) + (float)(local_1c - local_44)) /
               ((local_2c - local_40) + (float)(local_34 - local_44))) * (float)g_data_00166817 +
               g_data_0016681f;
  }
  return (longdouble)local_28;
}

/******************************************************************************
 * Function : pom_fn_065864 (Original VA: 0x65864, Ghidra: FUN_00065864)
 * Prototype: void pom_fn_065864(float *param_1);
 * Address  : 0x65864 (Size: 327 bytes)
 * Module   : pom.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module pom.cpp procedure @ 0x065864
 * Callers  : 1 -> pom_iterations_065724
 * Callees  : 3 -> bflib_system_io_fn_0e8d50, bflib_system_io_fn_0f4720, bflib_system_io_fn_0f475c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pom_fn_065864(float *param_1)

{
  float val;
  double val_2;
  float val_3;
  float val_4;
  float val_5;
  float val_6;
  float val_7;
  float val_8;
  float val_9;
  undefined4 *arg_ecx;
  int *extraout_ECX;
  int arg_edx;
  int arg_ebx;
  longdouble val_10;
  longdouble val_11;
  
  val_8 = (float)arg_edx + (float)arg_ebx * (float)g_data_00166823;
  val = val_8 * (float)g_data_0016682b;
  val_9 = val_8 * (float)g_data_00166833 + (float)g_data_0016683b;
  val_7 = val * val * (float)g_data_00166853 + val_8 * (float)g_data_00166843 + (float)g_data_0016684b
  ;
  val_5 = (float)g_data_0016685b;
  val_6 = (float)g_data_00166863;
  val_4 = (float)g_data_0016686b;
  val_3 = (float)g_data_00166873;
  *arg_ecx = &g_bss_0024d9ac + arg_ebx * 7 + arg_edx * 0x1c;
  if ((arg_ebx == 0) || (arg_ebx == 2)) {
    val_10 = (longdouble)fsin((longdouble)val_9 * (longdouble)g_data_0016688b);
    val_10 = val_10 * ((longdouble)g_data_001668a3 - (longdouble)val * (longdouble)g_data_0016689b);
    val_11 = (longdouble)fsin((longdouble)g_data_0016688b * (longdouble)val_7);
    val_11 = val_11 * (longdouble)g_data_001668ab;
  }
  else {
    if ((arg_ebx != 1) && (arg_ebx != 3)) {
      return;
    }
    val_10 = (longdouble)fsin((longdouble)val_9 * (longdouble)g_data_0016688b);
    val_10 = val_10 * ((longdouble)g_data_00166883 - (longdouble)val * (longdouble)g_data_0016687b);
    val_11 = (longdouble)fsin((longdouble)g_data_0016688b * (longdouble)val_7);
    val_11 = val_11 * (longdouble)g_data_00166893;
  }
  val = (float)((val_10 - val_11) +
                 (longdouble)(val_8 * val_4 + val_3 + (val_6 - val * val_5) * val * val));
  val_2 = (double)val;
  if (val_2 < 0.0) {
    bflib_system_io_fn_0f475c(val_2 + g_data_001668b3);
  }
  else {
    bflib_system_io_fn_0f4720(val_2);
  }
  val_10 = (longdouble)bflib_system_io_fn_0e8d50();
  *extraout_ECX = *extraout_ECX + (int)ROUND(val_10);
  *param_1 = val - (float)(int)ROUND(val_10);
  return;
}

/******************************************************************************
 * Function : pom_fn_0659ab (Original VA: 0x659ab, Ghidra: FUN_000659ab)
 * Prototype: int pom_fn_0659ab(void);
 * Address  : 0x659ab (Size: 182 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Module pom.cpp procedure @ 0x0659ab
 * Callers  : 1 -> pom_fn_065a61
 * Callees  : 2 -> bflib_system_io_fn_0e8d50, bflib_system_io_fn_0f4720
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pom_fn_0659ab(void)

{
  int val;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  longdouble extraout_ST0;
  longdouble extraout_ST0_00;
  undefined4 local_c;
  undefined4 local_8;
  
  if (arg_ecx == 0) {
    return 0;
  }
  local_8 = arg_ecx;
  if (arg_ecx < 0) {
    local_8 = arg_ecx + 1;
  }
  if (arg_ebx < 3) {
    val = arg_ebx + 0xd;
    local_8 = local_8 + -1;
  }
  else {
    val = arg_ebx + 1;
  }
  bflib_system_io_fn_0f4720((double)local_8 * g_data_001668bb);
  bflib_system_io_fn_0f4720((double)val * g_data_001668c3);
  val = bflib_system_io_fn_0e8d50();
  local_c = (int)ROUND(extraout_ST0);
  if (0x8fc1c < val + arg_edx) {
    bflib_system_io_fn_0e8d50();
    val = bflib_system_io_fn_0e8d50();
    local_c = local_c + val + (int)ROUND(extraout_ST0_00);
  }
  return local_c;
}

/******************************************************************************
 * Function : pom_fn_065a61 (Original VA: 0x65a61, Ghidra: FUN_00065a61)
 * Prototype: int pom_fn_065a61(void);
 * Address  : 0x65a61 (Size: 142 bytes)
 * Module   : pom.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module pom.cpp procedure @ 0x065a61
 * Callers  : 1 -> pom_iterations_065724
 * Callees  : 3 -> pom_fn_0659ab, bflib_system_io_fn_0f1abb, bflib_system_io_fn_0f48aa
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pom_fn_065a61(void)

{
  int *int_ptr;
  int val;
  float *arg_edx;
  int val_2;
  
  bflib_system_io_fn_0f1abb();
  int_ptr = (int *)bflib_system_io_fn_0f48aa();
  val = pom_fn_0659ab();
  if (int_ptr[2] < 0xc) {
    val = val + -1;
    val_2 = *int_ptr + int_ptr[2] * 0xe10 + int_ptr[1] * 0x3c + 0xa8c0;
  }
  else {
    val_2 = *int_ptr + int_ptr[1] * 0x3c + (int_ptr[2] + -0xc) * 0xe10;
  }
  *arg_edx = (float)val_2 * g_data_001668e3;
  return val;
}

/******************************************************************************
 * Function : pom_fn_065af0 (Original VA: 0x65af0, Ghidra: FUN_00065af0)
 * Prototype: bool pom_fn_065af0(void);
 * Address  : 0x65af0 (Size: 23 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Module pom.cpp procedure @ 0x065af0
 * Callers  : 1 -> pom_update_creature_control_065be8
 * Callees  : 1 -> room_fn_0ce0e4
 ******************************************************************************/
bool pom_fn_065af0(void)

{
  int arg_eax;
  int val;
  
  val = room_fn_0ce0e4();
  if (val != 0) {
    *(undefined1 *)(arg_eax + 8) = 0x29;
  }
  return val != 0;
}

/******************************************************************************
 * Function : pom_update_creature_control_065b07 (Original VA: 0x65b07, Ghidra: FUN_00065b07)
 * Prototype: longlong pom_update_creature_control_065b07(void);
 * Address  : 0x65b07 (Size: 225 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 7 -> moodneed_fn_051374, person_fn_063b6d, person_update_creature_control_064ae7, spell_update_creature_control_071edd, light_attempt_delete_light_0acce4, room_attempt_add_creature_room_0cd85c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong pom_update_creature_control_065b07(void)

{
  char ch;
  int thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int val_2;
  uint arg_edx;
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if ((val != 0) && (*(short *)(val + 10) == 4)) {
    ch = room_attempt_add_creature_room_0cd85c();
    if (ch != '\0') {
      *(undefined4 *)(extraout_ECX + 0x82) = g_game_turn;
      *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) | 2;
      person_update_creature_control_064ae7();
      val = extraout_ECX_00;
      if ((*(byte *)(extraout_ECX_00 + 0xac) & 2) != 0) {
        spell_update_creature_control_071edd();
        val = extraout_ECX_01;
      }
      if ((*(byte *)(val + 0xac) & 0x20) != 0) {
        spell_update_creature_control_071edd();
      }
      if (*(short *)(thing + 0x62) != 0) {
        light_attempt_delete_light_0acce4();
      }
      return CONCAT44(arg_edx,1);
    }
    val_2 = extraout_ECX;
    if ((int)*(char *)(val + 3) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      moodneed_fn_051374();
      val_2 = extraout_ECX_02;
    }
    *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xfd;
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : pom_update_creature_control_065be8 (Original VA: 0x65be8, Ghidra: FUN_00065be8)
 * Prototype: undefined4 pom_update_creature_control_065be8(void);
 * Address  : 0x65be8 (Size: 166 bytes)
 * Module   : pom.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> prison_update_creature_control_065f8a
 * Callees  : 3 -> instance_negative_instance_049bfc, pom_fn_065af0, sound_roll_unsynced_random_06edb9
 ******************************************************************************/
undefined4 pom_update_creature_control_065be8(void)

{
  int thing;
  uint uval;
  int cctrl_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
    uval = g_game_turn - *(int *)(cctrl_ptr + 0x82);
    if (200 < uval) {
      if (uval - 200 < 0x32) {
        instance_negative_instance_049bfc(0);
        if ((uint)(g_game_turn - *(int *)(cctrl_ptr + 0x9a)) < 0x21) {
          return 1;
        }
        sound_roll_unsynced_random_06edb9();
        *(int *)(cctrl_ptr + 0x9a) = g_game_turn;
        return 1;
      }
      *(int *)(cctrl_ptr + 0x82) = g_game_turn;
    }
    cctrl_ptr = pom_fn_065af0();
    if (cctrl_ptr != 0) {
      return 1;
    }
  }
  return 0;
}

