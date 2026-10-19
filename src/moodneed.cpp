/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: moodneed.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : moodneed_fn_051374 (Original VA: 0x51374, Ghidra: FUN_00051374)
 * Prototype: void moodneed_fn_051374(void);
 * Address  : 0x51374 (Size: 139 bytes)
 * Module   : moodneed.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Module moodneed.cpp procedure @ 0x051374
 * Callers  : 77 -> anger_hurrah_mental_instability_creature_01073a, angtool_update_creature_control_011862, angtool_update_player_view_state_011b51, combtool_update_creature_control_017e7e, compevnt_roll_action_random_018ffe, comptask_roll_action_random_01b721, door_update_creature_and_thing_023291, dungeon_remove_reserve_023868 ...
 * Callees  : 6 -> mapwho_roll_unsynced_random_051484, mapwho_fn_0514c2, mapwho_fn_0514ca, mapwho_fn_0514f8, sound_speech_emitter_has_been_06eb1a, sound_speech_emitter_has_been_06ebff
 ******************************************************************************/
void moodneed_fn_051374(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_ebx;
  undefined8 uval;
  
  if (g_game_turn < (uint)(&g_data_0017cb84)[arg_eax * 3]) {
    return;
  }
  val = sound_speech_emitter_has_been_06ebff();
  if (val == 0) {
    mapwho_roll_unsynced_random_051484();
    val = mapwho_fn_0514c2();
    if (val == 0) {
      return;
    }
    uval = sound_speech_emitter_has_been_06eb1a();
    if ((int)uval != 0) {
      g_bss_0034b238 = extraout_ECX_00;
      (&g_data_0017cb84)[arg_eax * 3] = (int)((ulonglong)uval >> 0x20) + g_game_turn;
      return;
    }
    if (arg_ebx == 0) {
      return;
    }
    if (extraout_ECX_00 == g_bss_0034b238) {
      return;
    }
    val = mapwho_fn_0514ca();
  }
  else {
    if (arg_ebx == 0) {
      return;
    }
    if (extraout_ECX == g_bss_0034b238) {
      return;
    }
    val = mapwho_fn_0514ca();
  }
  if (val == 0) {
    mapwho_fn_0514f8();
  }
  return;
}

/******************************************************************************
 * Function : moodneed_fn_0516a4 (Original VA: 0x516a4, Ghidra: FUN_000516a4)
 * Prototype: void moodneed_fn_0516a4(void);
 * Address  : 0x516a4 (Size: 289 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x0516a4
 * Callers  : 1 -> moodneed_fn_051904
 * Callees  : 0 -> 
 ******************************************************************************/
void moodneed_fn_0516a4(void)

{
  int val;
  int arg_eax;
  uint uval;
  uint uval_2;
  int val_2;
  int loop_i;
  int arg_edx;
  uint uval_3;
  uint uval_4;
  int val_3;
  
  uval = arg_edx * 0x200 + 0x100;
  uval_4 = 0;
  while ((int)uval_4 < 0x100) {
    uval_2 = (arg_edx >> 1) + uval_4;
    val_2 = uval_4 * 0x100;
    uval_4 = uval_4 + arg_edx;
    val_2 = arg_eax + val_2;
    val = arg_eax + (uval_4 & 0xff) * 0x100;
    for (loop_i = 0; loop_i < 0x100; loop_i = loop_i + arg_edx) {
      uval_3 = loop_i + arg_edx & 0xff;
      g_data_0017d164 = g_data_0017d164 * 0x24a1 + 0x24df;
      g_data_0017d164 = g_data_0017d164 >> 0xd | g_data_0017d164 * 0x80000;
      val_3 = ((int)((uint)*(byte *)(uval_3 + val) +
                    (uint)*(byte *)(loop_i + val_2) + (uint)*(byte *)(uval_3 + val_2) +
                    (uint)*(byte *)(loop_i + val)) >> 2) +
              ((int)(g_data_0017d164 % uval - ((int)uval >> 1)) >> 8);
      if (val_3 < 0) {
        val_3 = 0;
      }
      if (0xff < val_3) {
        val_3 = 0xff;
      }
      *(char *)((uval_2 & 0xff) * 0x100 + arg_eax + ((arg_edx >> 1) + loop_i & 0xffU)) = (char)val_3;
    }
  }
  return;
}

/******************************************************************************
 * Function : moodneed_fn_0517c5 (Original VA: 0x517c5, Ghidra: FUN_000517c5)
 * Prototype: void moodneed_fn_0517c5(void);
 * Address  : 0x517c5 (Size: 319 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x0517c5
 * Callers  : 1 -> moodneed_fn_051904
 * Callees  : 0 -> 
 ******************************************************************************/
void moodneed_fn_0517c5(void)

{
  int val;
  int arg_eax;
  int val_2;
  int val_3;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  int val_4;
  int val_5;
  undefined4 local_18;
  undefined4 local_14;
  
  val_2 = arg_ecx >> 1;
  for (local_14 = 0; local_14 < 0x100; local_14 = local_14 + arg_ecx) {
    val_3 = local_14 + arg_ebx;
    val = arg_eax + val_3 * 0x100;
    local_18 = 0;
    while (local_18 < 0x100) {
      val_5 = local_18 + arg_edx;
      g_data_0017d168 = g_data_0017d168 * 0x24a1 + 0x24df;
      g_data_0017d168 = g_data_0017d168 >> 0xd | g_data_0017d168 * 0x80000;
      val_4 = ((int)((uint)*(byte *)(val_5 + arg_eax + (val_3 + val_2 & 0xffU) * 0x100) +
                    (uint)*(byte *)(val_5 + arg_eax + (val_3 - val_2 & 0xffU) * 0x100) +
                    (uint)*(byte *)((val_5 - val_2 & 0xffU) + val) +
                    (uint)*(byte *)(val + (val_2 + val_5 & 0xffU))) >> 2) +
              ((int)(g_data_0017d168 % (uint)(arg_ecx << 9) - ((arg_ecx << 9) >> 1)) >> 8);
      if (val_4 < 0) {
        val_4 = 0;
      }
      if (0xff < val_4) {
        val_4 = 0xff;
      }
      local_18 = local_18 + arg_ecx;
      *(char *)(val_5 + val_3 * 0x100 + arg_eax) = (char)val_4;
    }
  }
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051904 (Original VA: 0x51904, Ghidra: FUN_00051904)
 * Prototype: void moodneed_fn_051904(void);
 * Address  : 0x51904 (Size: 80 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051904
 * Callers  : 0 -> 
 * Callees  : 2 -> moodneed_fn_0516a4, moodneed_fn_0517c5
 ******************************************************************************/
void moodneed_fn_051904(void)

{
  undefined1 *arg_eax;
  uint loop_i;
  
  *arg_eax = 0x80;
  for (loop_i = 0x100; 1 < loop_i; loop_i = (int)loop_i >> 1) {
    moodneed_fn_0516a4();
    moodneed_fn_0517c5();
    moodneed_fn_0517c5();
  }
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051954 (Original VA: 0x51954, Ghidra: FUN_00051954)
 * Prototype: void moodneed_fn_051954(void);
 * Address  : 0x51954 (Size: 178 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051954
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0e8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void moodneed_fn_051954(void)

{
  undefined1 *word_ptr;
  int extraout_ECX;
  int extraout_EDX;
  uint uval;
  uint uval_2;
  longdouble val;
  longdouble val_2;
  longdouble extraout_ST1;
  int aiStack_42c [257];
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  val = (longdouble)g_data_00165a0c;
  val_2 = (longdouble)g_data_00165a04;
  do {
    fsin((longdouble)local_18 * val_2 * val);
    aiStack_42c[0] = 0x5198c;
    val_2 = (longdouble)bflib_system_io_fn_0e8d50();
    local_28 = (int)ROUND(val_2);
    local_18 = local_18 + 1;
    *(int *)((int)aiStack_42c + extraout_EDX) = (int)ROUND(val_2);
    val_2 = extraout_ST1;
  } while (local_18 < 0x100);
  local_1c = 0x10000;
  local_24 = extraout_ECX;
  uval = 0;
  do {
    word_ptr = (undefined1 *)(uval + extraout_ECX);
    local_20 = (undefined1 *)(extraout_ECX + local_1c);
    uval_2 = uval;
    do {
      local_28 = aiStack_42c[(uval_2 & 0x100) + 1] + 0x8000 >> 9;
      *word_ptr = (undefined1)local_28;
      word_ptr = word_ptr + 0x100;
      uval_2 = uval_2 + 1;
    } while (word_ptr != (undefined1 *)(extraout_ECX + local_1c));
    uval = uval + 1;
    local_1c = local_1c + 1;
  } while ((int)uval < 0x100);
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051a06 (Original VA: 0x51a06, Ghidra: FUN_00051a06)
 * Prototype: void moodneed_fn_051a06(void);
 * Address  : 0x51a06 (Size: 57 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051a06
 * Callers  : 1 -> eyelens_data_frac_dat_027130
 * Callees  : 1 -> moodneed_fn_051a3f
 ******************************************************************************/
void moodneed_fn_051a06(void)

{
  undefined4 *gui_btn;
  undefined4 arg_ecx;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  
  *(undefined1 *)(gui_btn + 3) = 0;
  *(undefined1 *)((int)gui_btn + 0xe) = 0x32;
  *(undefined1 *)((int)gui_btn + 0xd) = 0;
  *(undefined1 *)((int)gui_btn + 0xf) = 0x80;
  *gui_btn = arg_edx;
  gui_btn[1] = arg_ebx;
  gui_btn[2] = arg_ecx;
  moodneed_fn_051a3f();
  *(undefined1 *)(gui_btn + 6) = 2;
  *(undefined1 *)((int)gui_btn + 0x19) = 1;
  *(undefined1 *)((int)gui_btn + 0x1a) = 0xfd;
  *(undefined1 *)((int)gui_btn + 0x1b) = 3; /* gui_btn->id_num */
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051a3f (Original VA: 0x51a3f, Ghidra: FUN_00051a3f)
 * Prototype: void moodneed_fn_051a3f(void);
 * Address  : 0x51a3f (Size: 7 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051a3f
 * Callers  : 2 -> eyelens_data_frac_dat_027130, moodneed_fn_051a06
 * Callees  : 0 -> 
 ******************************************************************************/
void moodneed_fn_051a3f(void)

{
  int arg_eax;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  
  *(undefined4 *)(arg_eax + 0x10) = arg_edx;
  *(undefined4 *)(arg_eax + 0x14) = arg_ebx;
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051a46 (Original VA: 0x51a46, Ghidra: FUN_00051a46)
 * Prototype: void moodneed_fn_051a46(void);
 * Address  : 0x51a46 (Size: 33 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051a46
 * Callers  : 1 -> draw_unhandled_screen_mode_087da4
 * Callees  : 0 -> 
 ******************************************************************************/
void moodneed_fn_051a46(void)

{
  int gui_btn;
  
  *(char *)(gui_btn + 0xc) = *(char *)(gui_btn + 0xc) + *(char *)(gui_btn + 0x18);
  *(char *)(gui_btn + 0xd) = *(char *)(gui_btn + 0xd) + *(char *)(gui_btn + 0x19);
  *(char *)(gui_btn + 0xe) = *(char *)(gui_btn + 0xe) - *(char *)(gui_btn + 0x1a);
  *(char *)(gui_btn + 0xf) = *(char *)(gui_btn + 0xf) + *(char *)(gui_btn + 0x1b); /* gui_btn->id_num */
  *(int *)(gui_btn + 0x10) = *(int *)(gui_btn + 0x10) + *(int *)(gui_btn + 0x14);
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051a67 (Original VA: 0x51a67, Ghidra: FUN_00051a67)
 * Prototype: void moodneed_fn_051a67(int param_1,int param_2,int param_3);
 * Address  : 0x51a67 (Size: 202 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051a67
 * Callers  : 1 -> draw_unhandled_screen_mode_087da4
 * Callees  : 0 -> 
 ******************************************************************************/
void moodneed_fn_051a67(int param_1,int param_2,int param_3)

{
  byte flag;
  int *arg_eax;
  byte *arg_ecx;
  uint uval;
  undefined1 *arg_edx;
  int arg_ebx;
  int local_24;
  int local_20;
  byte local_1c;
  byte local_18;
  byte local_14;
  byte local_10;
  
  local_14 = *(byte *)(arg_eax + 3);
  local_1c = *(byte *)((int)arg_eax + 0xd);
  local_18 = *(byte *)((int)arg_eax + 0xe);
  local_10 = *(byte *)((int)arg_eax + 0xf);
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    local_20 = 0;
    while (local_20 < param_2) {
      uval = (int)((uint)*(byte *)((uint)local_14 + *arg_eax + (uint)local_1c * 0x100) +
                   (uint)*(byte *)((uint)local_18 + (uint)local_10 * 0x100 + *arg_eax)) >> 3;
      if ((int)uval < 0) {
        uval = 0;
      }
      else if (0x20 < uval) {
        uval = 0x20;
      }
      local_20 = local_20 + 1;
      local_14 = local_14 + 1;
      flag = *arg_ecx;
      local_10 = local_10 - 1;
      arg_ecx = arg_ecx + 1;
      *arg_edx = *(undefined1 *)(arg_eax[1] + uval * 0x100 + (uint)flag);
      arg_edx = arg_edx + 1;
    }
    local_1c = local_1c + 1;
    local_18 = local_18 - 1;
    arg_edx = arg_edx + (arg_ebx - param_2);
    arg_ecx = arg_ecx + (param_1 - param_2);
    local_14 = local_14 - (char)param_2;
    local_10 = local_10 + (char)param_2;
  }
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051d41 (Original VA: 0x51d41, Ghidra: FUN_00051d41)
 * Prototype: void moodneed_fn_051d41(int param_1,int param_2,int param_3);
 * Address  : 0x51d41 (Size: 276 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051d41
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f0f8c
 ******************************************************************************/
void moodneed_fn_051d41(int param_1,int param_2,int param_3)

{
  byte flag;
  int val;
  int *arg_eax;
  int val_2;
  byte extraout_CL;
  byte flag_2;
  byte extraout_CH;
  byte flag_3;
  byte *arg_ecx;
  undefined1 *arg_edx;
  undefined1 *extraout_EDX;
  int arg_ebx;
  int local_1c;
  int local_18;
  byte local_14;
  byte local_10;
  
  local_1c = 0;
  val = arg_eax[4];
  flag_2 = *(byte *)(arg_eax + 3);
  local_14 = *(byte *)((int)arg_eax + 0xd);
  local_10 = *(byte *)((int)arg_eax + 0xe);
  flag_3 = *(byte *)((int)arg_eax + 0xf);
  for (; local_1c < param_3; local_1c = local_1c + 1) {
    local_18 = 0;
    while (local_18 < param_2) {
      val_2 = ((int)((uint)*(byte *)((uint)local_10 + *arg_eax + (uint)flag_3 * 0x100) +
                    (uint)*(byte *)((uint)flag_2 + *arg_eax + (uint)local_14 * 0x100)) >> 3) -
              ((val >> 10) + -0x20);
      if (val_2 < 0) {
        val_2 = 0;
      }
      else if (0x1f < val_2) {
        val_2 = 0x1f;
      }
      if ((local_1c == 100) && (local_18 == 100)) {
        bflib_system_io_fn_0f0f8c(s__alpha__d_00165a1b + 1,val_2);
        arg_edx = extraout_EDX;
        flag_2 = extraout_CL;
        flag_3 = extraout_CH;
      }
      local_18 = local_18 + 1;
      flag_2 = flag_2 + 1;
      flag = *arg_ecx;
      arg_ecx = arg_ecx + 1;
      flag_3 = flag_3 - 1;
      *arg_edx = *(undefined1 *)((uint)flag + arg_eax[1] + g_data_0017d16c * 0x100);
      arg_edx = arg_edx + 1;
    }
    local_14 = local_14 + 1;
    local_10 = local_10 - 1;
    flag_2 = flag_2 - (char)param_2;
    arg_edx = arg_edx + (arg_ebx - param_2);
    arg_ecx = arg_ecx + (param_1 - param_2);
    flag_3 = flag_3 + (char)param_2;
  }
  if (g_data_0017d16c != 0) {
    g_data_0017d16c = g_data_0017d16c + -1;
  }
  return;
}

/******************************************************************************
 * Function : moodneed_fn_051e55 (Original VA: 0x51e55, Ghidra: FUN_00051e55)
 * Prototype: void moodneed_fn_051e55(int param_1,int param_2,int param_3);
 * Address  : 0x51e55 (Size: 244 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x051e55
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void moodneed_fn_051e55(int param_1,int param_2,int param_3)

{
  byte flag;
  int val;
  int *arg_eax;
  byte *arg_ecx;
  int val_2;
  undefined1 *arg_edx;
  int arg_ebx;
  int loop_i;
  int local_34;
  byte local_1c;
  byte local_18;
  byte local_14;
  byte local_10;
  
  local_10 = *(byte *)(arg_eax + 3);
  local_1c = *(byte *)((int)arg_eax + 0xd);
  local_14 = *(byte *)((int)arg_eax + 0xe);
  local_18 = *(byte *)((int)arg_eax + 0xf);
  val = arg_eax[4];
  for (loop_i = 0; loop_i < param_3; loop_i = loop_i + 1) {
    local_34 = 0;
    while (local_34 < param_2) {
      val_2 = ((int)((uint)*(byte *)((uint)local_18 * 0x100 + *arg_eax + (uint)local_14) +
                    (uint)*(byte *)((uint)local_1c * 0x100 + *arg_eax + (uint)local_10)) >> 3) -
              ((val >> 10) + -0x20);
      if (val_2 < 0) {
        val_2 = 0;
      }
      else if (0x20 < val_2) {
        val_2 = 0x20;
      }
      flag = *arg_ecx;
      local_34 = local_34 + 1;
      local_10 = local_10 + 1;
      local_18 = local_18 - 1;
      arg_ecx = arg_ecx + 1;
      *arg_edx = *(undefined1 *)
                 ((uint)*(byte *)((uint)flag + (0x20 - val_2) * 0x100 + arg_eax[1]) + arg_eax[2]);
      arg_edx = arg_edx + 1;
    }
    local_1c = local_1c + 1;
    local_14 = local_14 - 1;
    arg_edx = arg_edx + (arg_ebx - param_2);
    arg_ecx = arg_ecx + (param_1 - param_2);
    local_10 = local_10 - (char)param_2;
    local_18 = local_18 + (char)param_2;
  }
  return;
}

/******************************************************************************
 * Function : moodneed_update_creature_control_051f4c (Original VA: 0x51f4c, Ghidra: FUN_00051f4c)
 * Prototype: undefined4 moodneed_update_creature_control_051f4c(void);
 * Address  : 0x51f4c (Size: 461 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> moodneed_fn_052834
 * Callees  : 4 -> anger_fn_010434, lair_process_dungeon_room_04d683, person_external_change_state_but_064a5f, shot_update_creature_control_06dda0
 ******************************************************************************/
undefined4 moodneed_update_creature_control_051f4c(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  int arg_edx;
  int val_2;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(arg_edx + 9) == '\0') {
    return 0;
  }
  if (*(char *)(arg_edx + 0x17) == '\0') {
    return 0;
  }
  val = ((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] *
                 (uint)*(byte *)(cctrl_ptr + 0x23) * 0x23) / 100 +
          (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73]) * 0x20;
  val_2 = val >> 0x1f;
  if ((int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8 <=
      (int)*(short *)(thing + 0x5e)) {
    return 0;
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch == '\x19') {
    return 1;
  }
  if (*(char *)(thing + 7) == '\x1a') {
    return 1;
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch == 'Y') {
    return 1;
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch == '\x15') {
    return 1;
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch == '\x16') {
    return 1;
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch != '\x14') {
    if (*(char *)(thing + 7) == '\x0e') {
      ch = *(char *)(thing + 8); /* thing->active_state */
    }
    else {
      ch = *(char *)(thing + 7);
    }
    if (ch != 'P') {
      if (*(char *)(thing + 7) == '\x0e') {
        ch = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing + 7);
      }
      if (ch != '~') {
        ch = shot_update_creature_control_06dda0();
        if (ch == '\0') {
          return 0;
        }
        if (((uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2d7)) < 0x81) ||
           ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68) == 0 && /* thing->ccontrol_idx */
            (val = lair_process_dungeon_room_04d683(), val == 0)))) {
          anger_fn_010434();
        }
        else {
          ch = person_external_change_state_but_064a5f();
          if (ch != '\0') {
            return 1;
          }
          *(int *)(cctrl_ptr + 0x2d7) = g_game_turn;
        }
        *(int *)(cctrl_ptr + 0x2d7) = g_game_turn;
        return 0;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

/******************************************************************************
 * Function : moodneed_update_creature_control_052119 (Original VA: 0x52119, Ghidra: FUN_00052119)
 * Prototype: undefined4 moodneed_update_creature_control_052119(void);
 * Address  : 0x52119 (Size: 471 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> moodneed_fn_052834
 * Callees  : 4 -> anger_fn_010434, lair_process_dungeon_room_04d683, person_external_change_state_but_064a5f, shot_update_creature_control_06dda0
 ******************************************************************************/
undefined4 moodneed_update_creature_control_052119(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined4 uval;
  int arg_edx;
  int val_2;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (((*(char *)(arg_edx + 9) == '\0') || (*(char *)(arg_edx + 0x17) == '\0')) ||
     (val = (uint)(byte)(&g_bss_002e9116)[(uint)*(byte *)(thing + 0x1a) * 0xe6] *
              ((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] +
              (int)((uint)*(byte *)(cctrl_ptr + 0x23) *
                    (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing + 0x1a) * 0x73] * 0x23) / 100
              ), val_2 = val >> 0x1f,
     (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8 <= (int)*(short *)(thing + 0x5e)
     )) {
LAB_0005257c:
    uval = 0;
  }
  else {
    if (*(char *)(thing + 7) == '\x0e') {
      ch = *(char *)(thing + 8); /* thing->active_state */
    }
    else {
      ch = *(char *)(thing + 7);
    }
    if ((ch != '\x19') && (*(char *)(thing + 7) != '\x1a')) {
      if (*(char *)(thing + 7) == '\x0e') {
        ch = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing + 7);
      }
      if (ch != 'Y') {
        if (*(char *)(thing + 7) == '\x0e') {
          ch = *(char *)(thing + 8); /* thing->active_state */
        }
        else {
          ch = *(char *)(thing + 7);
        }
        if (ch != '\x15') {
          if (*(char *)(thing + 7) == '\x0e') {
            ch = *(char *)(thing + 8); /* thing->active_state */
          }
          else {
            ch = *(char *)(thing + 7);
          }
          if (ch != '\x16') {
            if (*(char *)(thing + 7) == '\x0e') {
              ch = *(char *)(thing + 8); /* thing->active_state */
            }
            else {
              ch = *(char *)(thing + 7);
            }
            if (ch != '\x14') {
              if (*(char *)(thing + 7) == '\x0e') {
                ch = *(char *)(thing + 8); /* thing->active_state */
              }
              else {
                ch = *(char *)(thing + 7);
              }
              if (ch != 'P') {
                if (*(char *)(thing + 7) == '\x0e') {
                  ch = *(char *)(thing + 8); /* thing->active_state */
                }
                else {
                  ch = *(char *)(thing + 7);
                }
                if (ch != '~') {
                  ch = shot_update_creature_control_06dda0();
                  if (ch == '\0') goto LAB_0005257c;
                  if ((uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2d7)) < 0x81) {
LAB_000522be:
                    anger_fn_010434();
                  }
                  else {
                    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68) == 0) { /* thing->ccontrol_idx */
                      val = lair_process_dungeon_room_04d683();
                      if (val == 0) goto LAB_000522be;
                    }
                    ch = person_external_change_state_but_064a5f();
                    if (ch != '\0') goto LAB_000522a7;
                    *(int *)(cctrl_ptr + 0x2d7) = g_game_turn;
                  }
                  *(int *)(cctrl_ptr + 0x2d7) = g_game_turn;
                  goto LAB_0005257c;
                }
              }
            }
          }
        }
      }
    }
LAB_000522a7:
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : moodneed_update_creature_control_0522f0 (Original VA: 0x522f0, Ghidra: FUN_000522f0)
 * Prototype: longlong moodneed_update_creature_control_0522f0(void);
 * Address  : 0x522f0 (Size: 114 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> moodneed_fn_052834, prison_update_creature_control_065ebd
 * Callees  : 1 -> creature_fn_081c44
 ******************************************************************************/
longlong moodneed_update_creature_control_0522f0(void)

{
  int cctrl_ptr;
  int thing;
  uint arg_edx;
  int val;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (((*(short *)(&g_bss_002e911f + val) != 0) && ((*(byte *)(cctrl_ptr + 0xab) & 2) == 0)) &&
     (*(int *)(cctrl_ptr + 0x39) = *(int *)(cctrl_ptr + 0x39) + 1,
     (int)*(short *)(&g_bss_002e911f + val) < *(int *)(cctrl_ptr + 0x39))) {
    if (((uint)*(ushort *)(thing + 0x1b) + g_game_turn) % (uint)g_bss_002ebc48 == 0) { /* thing->index_or_angle */
      creature_fn_081c44();
    }
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : moodneed_this_shouldn_happen_052362 (Original VA: 0x52362, Ghidra: FUN_00052362)
 * Prototype: undefined4 moodneed_this_shouldn_happen_052362(void);
 * Address  : 0x52362 (Size: 592 bytes)
 * Module   : moodneed.cpp [direct_file_string_xref]
 * OrigLine : moodneed.cpp lines 175
 * Purpose  : String 'This shouldn't happen'
 * Callers  : 1 -> moodneed_fn_052834
 * Callees  : 8 -> anger_fn_010434, event_fn_0274ad, moodneed_fn_051374, person_external_change_state_but_064a5f, food_update_creature_control_0ab284, room_process_dungeon_room_0c9b2c, room_process_dungeon_room_0ca474, LbErrorLog
 ******************************************************************************/
undefined4 moodneed_this_shouldn_happen_052362(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined1 *word_ptr;
  undefined1 *extraout_ECX;
  int arg_edx;
  int *int_ptr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(&g_bss_002e911f + val) == 0) {
    return 0;
  }
  if (*(int *)(cctrl_ptr + 0x39) <= (int)*(short *)(&g_bss_002e911f + val)) {
    return 0;
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch == '\x12') {
    return 1;
  }
  if (*(char *)(thing + 7) == 'j') {
    return 1;
  }
  if (*(char *)(thing + 7) == '\x0e') {
    ch = *(char *)(thing + 8); /* thing->active_state */
  }
  else {
    ch = *(char *)(thing + 7);
  }
  if (ch == '\x13') {
    return 1;
  }
  uStack_1c = 0x523ec;
  local_18 = arg_edx;
  ch = food_update_creature_control_0ab284();
  if (ch == '\0') {
    return 0;
  }
  if (*(byte *)(local_18 + 0x14) <= *(byte *)(cctrl_ptr + 0x42)) {
    *(int *)(cctrl_ptr + 0x2db) = g_game_turn;
    *(char *)(cctrl_ptr + 0x42) = *(char *)(cctrl_ptr + 0x42) - *(char *)(local_18 + 0x14);
    return 0;
  }
  if (*(short *)(&g_bss_002e05ae + *(char *)(thing + 6) * 0x1508) == 0) { /* thing->owner */
    int_ptr = &local_18;
    if ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) { /* thing->owner */
      uStack_1c = 0x525b0;
      moodneed_fn_051374();
      int_ptr = &local_18;
    }
    goto LAB_0005255a;
  }
  int_ptr = &local_18;
  if ((uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2db)) < 0x81) goto LAB_0005255a;
  uStack_1c = 1;
  uStack_20 = 0x52457;
  word_ptr = (undefined1 *)room_process_dungeon_room_0ca474();
  if (word_ptr < &g_bss_002ddd1c) {
    *(int *)(cctrl_ptr + 0x2db) = g_game_turn;
    uStack_20 = 0x52481;
    word_ptr = (undefined1 *)room_process_dungeon_room_0c9b2c();
    if (&g_rooms < word_ptr) {
      if ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) /* thing->owner */
      goto LAB_000524e2;
    }
    else if ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) /* thing->owner */
    {
LAB_000524e2:
      uStack_20 = 0x524e7;
      moodneed_fn_051374();
      word_ptr = extraout_ECX;
    }
  }
  if (&g_rooms < word_ptr) {
    uStack_20 = 0x524fb;
    ch = person_external_change_state_but_064a5f();
    if (ch != '\0') {
      if (*(char *)(cctrl_ptr + 0x42) == '\0') {
        *(undefined1 *)(cctrl_ptr + 0x41) = *(undefined1 *)(local_18 + 0x14);
      }
      else {
        ch = *(char *)(local_18 + 0x14) - *(char *)(cctrl_ptr + 0x42);
        *(char *)(cctrl_ptr + 0x41) = ch;
        if (ch < '\x01') {
          uStack_20 = 0x5252c;
          LbErrorLog(); /* LbErrorLog("moodneed.cpp", line 175, "This shouldn't happen") */
          *(undefined1 *)(cctrl_ptr + 0x41) = 1;
        }
        *(undefined1 *)(cctrl_ptr + 0x42) = 0;
      }
      return 1;
    }
  }
  uStack_20 = 0;
  event_fn_0274ad();
  int_ptr = &uStack_20;
LAB_0005255a:
  *(undefined4 *)((int)int_ptr + -4) = 0x5257c;
  anger_fn_010434();
  return 0;
}

/******************************************************************************
 * Function : moodneed_shit_could_get_treasure_0525b2 (Original VA: 0x525b2, Ghidra: FUN_000525b2)
 * Prototype: undefined4 moodneed_shit_could_get_treasure_0525b2(void);
 * Address  : 0x525b2 (Size: 386 bytes)
 * Module   : moodneed.cpp [direct_file_string_xref]
 * OrigLine : moodneed.cpp lines 244
 * Purpose  : String 'Shit, could not get to treasure room door and I've cleaned u'
 * Callers  : 1 -> moodneed_fn_052834
 * Callees  : 10 -> anger_fn_010434, evil_update_creature_control_028aa0, person_fn_063b6d, person_fn_064a2e, person_external_change_state_but_064a5f, person_fn_064c4d, room_process_dungeon_room_0c9988, room_process_dungeon_room_0ca474 ...
 ******************************************************************************/
undefined4 moodneed_shit_could_get_treasure_0525b2(void)

{
  char *str_ptr;
  char ch;
  int thing;
  int val;
  int cctrl_ptr;
  int extraout_ECX;
  int arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(short *)(arg_edx + 0x98) == 0) || (*(char *)(cctrl_ptr + 0x48) == '\0')) {
    return 0;
  }
  if (*(char *)(thing + 7) != 'K') {
    if (*(char *)(thing + 7) == '\x0e') {
      ch = *(char *)(thing + 8); /* thing->active_state */
    }
    else {
      ch = *(char *)(thing + 7);
    }
    if (ch != 'L') {
      ch = person_fn_064c4d();
      if (ch == '\0') {
        return 0;
      }
      val = room_process_dungeon_room_0ca474(1);
      if (val != 0) {
        ch = person_external_change_state_but_064a5f();
        if (ch == '\0') {
          return 0;
        }
        anger_fn_010434();
        return 1;
      }
      val = room_process_dungeon_room_0ca474(1);
      if (val == 0) {
        if (((int)(&g_bss_002e1082)[*(char *)(thing + 6) * 0x542] < 1) || /* thing->owner */
           (val = room_process_dungeon_room_0c9988(), val == 0)) {
          str_ptr = (char *)(cctrl_ptr + 0x48);
          *str_ptr = *str_ptr + -1;
          anger_fn_010434();
          return 0;
        }
        person_fn_064a2e();
        cctrl_ptr = room_fn_0cc4a0();
        if (cctrl_ptr != 0) {
          *(undefined1 *)(thing + 8) = 0x4c; /* thing->active_state */
          *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = /* thing->ccontrol_idx */
               *(undefined2 *)(extraout_ECX + 1);
          return 1;
        }
      }
      else {
        person_fn_064a2e();
        cctrl_ptr = evil_update_creature_control_028aa0();
        if (cctrl_ptr != 0) {
          return 1;
        }
      }
      LbErrorLog(); /* LbErrorLog("moodneed.cpp", line 244, "Shit, could not get to treasure room door and I've cleaned up my old state") */
      person_fn_063b6d();
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : moodneed_update_creature_control_052734 (Original VA: 0x52734, Ghidra: FUN_00052734)
 * Prototype: undefined4 moodneed_update_creature_control_052734(void);
 * Address  : 0x52734 (Size: 128 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> moodneed_fn_052834
 * Callees  : 2 -> anger_fn_010434, train_update_creature_control_075b48
 ******************************************************************************/
undefined4 moodneed_update_creature_control_052734(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int arg_edx;
  undefined8 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(arg_edx + 0xc2) != 0) {
    uval = train_update_creature_control_075b48();
    if ((int)uval != 0) {
      if (*(char *)(thing + 7) == '\x0e') {
        ch = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing + 7);
      }
      if ((ch != '!') &&
         (*(int *)(cctrl_ptr + 0x4a) = *(int *)(cctrl_ptr + 0x4a) + 1,
         (int)*(short *)((int)((ulonglong)uval >> 0x20) + 0xc0) <= *(int *)(cctrl_ptr + 0x4a))) {
        anger_fn_010434();
        *(undefined4 *)(cctrl_ptr + 0x4a) = 0;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : moodneed_update_creature_and_thing_0527b4 (Original VA: 0x527b4, Ghidra: FUN_000527b4)
 * Prototype: undefined4 moodneed_update_creature_and_thing_0527b4(void);
 * Address  : 0x527b4 (Size: 128 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> moodneed_fn_052834
 * Callees  : 1 -> person_external_change_state_but_064a5f
 ******************************************************************************/
undefined4 moodneed_update_creature_and_thing_0527b4(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((((*(short *)(cctrl_ptr + 0xb9) != 0) &&
       (*(char *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0xb9)] + 6) != *(char *)(thing + 6))) && /* thing->owner */
      ((&g_bss_002e91a3)[(uint)*(byte *)(thing + 0x1a) * 0xe6] != '\0')) &&
     (200 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0xb2)))) {
    ch = person_external_change_state_but_064a5f();
    if (ch != '\0') {
      *(undefined2 *)(cctrl_ptr + 0x282) = 0x32;
      *(int *)(cctrl_ptr + 0xb2) = g_game_turn;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : moodneed_fn_052834 (Original VA: 0x52834, Ghidra: FUN_00052834)
 * Prototype: void moodneed_fn_052834(void);
 * Address  : 0x52834 (Size: 253 bytes)
 * Module   : moodneed.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module moodneed.cpp procedure @ 0x052834
 * Callers  : 1 -> update_creature_has_illegal_state_0e1b88
 * Callees  : 8 -> anger_hurrah_mental_instability_creature_01073a, moodneed_update_creature_control_051f4c, moodneed_update_creature_control_052119, moodneed_update_creature_control_0522f0, moodneed_this_shouldn_happen_052362, moodneed_shit_could_get_treasure_0525b2, moodneed_update_creature_control_052734, moodneed_update_creature_and_thing_0527b4
 ******************************************************************************/
void moodneed_fn_052834(void)

{
  char ch;
  int arg_eax;
  int val;
  
  if (((int)*(char *)(arg_eax + 6) < (int)(uint)g_bss_002eb542) && (*(char *)(arg_eax + 0x1a) != '\x17')
     ) {
    if (*(char *)(arg_eax + 7) == '\x0e') {
      ch = *(char *)(arg_eax + 8);
    }
    else {
      ch = *(char *)(arg_eax + 7);
    }
    if (ch != ')') {
      if (*(char *)(arg_eax + 7) == '\x0e') {
        ch = *(char *)(arg_eax + 8);
      }
      else {
        ch = *(char *)(arg_eax + 7);
      }
      if (ch != '(') {
        if (*(char *)(arg_eax + 7) == '\x0e') {
          ch = *(char *)(arg_eax + 8);
        }
        else {
          ch = *(char *)(arg_eax + 7);
        }
        if (ch != '+') {
          if (*(char *)(arg_eax + 7) == '\x0e') {
            ch = *(char *)(arg_eax + 8);
          }
          else {
            ch = *(char *)(arg_eax + 7);
          }
          if (ch != '*') {
            moodneed_update_creature_control_0522f0();
            val = moodneed_update_creature_control_051f4c();
            if (val == 0) {
              val = moodneed_shit_could_get_treasure_0525b2();
              if (val == 0) {
                val = moodneed_this_shouldn_happen_052362();
                if (val == 0) {
                  val = anger_hurrah_mental_instability_creature_01073a();
                  if (val == 0) {
                    moodneed_update_creature_control_052119();
                  }
                }
              }
            }
            moodneed_update_creature_control_052734();
            moodneed_update_creature_and_thing_0527b4();
          }
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : moodneed_fn_052934 (Original VA: 0x52934, Ghidra: FUN_00052934)
 * Prototype: void moodneed_fn_052934(void);
 * Address  : 0x52934 (Size: 35 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x052934
 * Callers  : 3 -> frontend_why_are_we_here_02dfac, frontend_load_frontend_palette_02e8a7, game_out_sync_gameturn_036ff4
 * Callees  : 4 -> moodneed_fn_052957, newgui_fn_052988, newgui_fn_0529b9, newgui_fn_052a88
 ******************************************************************************/
void moodneed_fn_052934(void)

{
  newgui_fn_0529b9();
  newgui_fn_052a88();
  moodneed_fn_052957();
  newgui_fn_052988();
  g_display_bss_003d987b = 0;
  g_display_bss_003d987c = 0;
  return;
}

/******************************************************************************
 * Function : moodneed_fn_052957 (Original VA: 0x52957, Ghidra: FUN_00052957)
 * Prototype: void moodneed_fn_052957(void);
 * Address  : 0x52957 (Size: 49 bytes)
 * Module   : moodneed.cpp [address_order_boundary_interpolation]
 * Purpose  : Module moodneed.cpp procedure @ 0x052957
 * Callers  : 1 -> moodneed_fn_052934
 * Callees  : 0 -> 
 ******************************************************************************/
void moodneed_fn_052957(void)

{
  g_bss_0034b25c = g_display_bss_003d987b;
  g_bss_0034b260 = g_display_bss_003d985c * (uint)g_units_per_pixel;
  g_bss_0034b264 = (uint)g_units_per_pixel * g_display_bss_003d9860;
  return;
}

