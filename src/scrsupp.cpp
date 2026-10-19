/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: scrsupp.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 15
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : scrsupp_fn_068cee (Original VA: 0x68cee, Ghidra: FUN_00068cee)
 * Prototype: void scrsupp_fn_068cee(void);
 * Address  : 0x68cee (Size: 138 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scrsupp.cpp procedure @ 0x068cee
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void scrsupp_fn_068cee(void)

{
  byte flag;
  undefined2 uval;
  code ch;
  char ch_2;
  uint arg_eax;
  uint uval_2;
  char ch_3;
  char *arg_ecx;
  int val;
  byte flag_3;
  code ch_4;
  uint *arg_edx;
  undefined4 arg_ebx;
  char *str_ptr_2;
  uint uval_3;
  int unaff_EBP;
  byte *unaff_ESI;
  byte *unaff_EDI;
  code *str_ptr_3;
  undefined2 in_ES;
  undefined2 in_CS;
  byte flag_2;
  char *str_ptr;
  char ch_5;
  
  uval_3 = (uint)&stack0x00000000 & *arg_edx;
  flag = *unaff_ESI;
  flag_3 = (byte)arg_edx;
  flag_2 = *unaff_ESI;
  *unaff_ESI = (flag_2 - flag_3) - (arg_eax < 0x191a1b1c);
  uval_2 = (uint)(flag < flag_3 || (byte)(flag_2 - flag_3) < (arg_eax < 0x191a1b1c));
  ch_3 = (char)arg_ecx;
  *unaff_EDI = *unaff_EDI + ch_3 +
               (0xeeedeceb < arg_eax + 0xe6e5e4e4 || CARRY4(arg_eax + 0xf7f7f7f8,uval_2));
  *(undefined2 *)(uval_3 - 4) = in_CS;
  uval_2 = arg_eax + 0xf7f7f7f8 + uval_2 | 0x90a0b0c;
  *unaff_EDI = *unaff_EDI | (byte)uval_2;
  *(undefined2 *)(uval_3 - 8) = in_ES;
  str_ptr = (char *)(uval_2 + 0xb291628e);
  *str_ptr = *str_ptr + (char)arg_ebx;
  unaff_ESI[-0x21fff973] = unaff_ESI[-0x21fff973] + (char)((uint)arg_edx >> 8);
  ch_5 = (char)((uint)arg_ebx >> 8);
  *arg_ecx = *arg_ecx + ch_5;
  unaff_ESI[-0x72] = unaff_ESI[-0x72] + ch_3;
  *(undefined2 *)(uval_3 - 0xc) = *(undefined2 *)unaff_ESI;
  ch_4 = (code)(flag_3 + ch_3);
  str_ptr = (char *)CONCAT31((int3)((uint)arg_edx >> 8),ch_4);
  ch_2 = (char)((uint)unaff_ESI >> 8);
  ch_5 = ch_5 + ch_2;
  str_ptr_2 = (char *)CONCAT22((short)((uint)arg_ebx >> 0x10),CONCAT11(ch_5,(char)arg_ebx));
  ch_2 = ch_2 + ch_5;
  val = CONCAT22((short)((uint)unaff_ESI >> 0x10),CONCAT11(ch_2,(char)unaff_ESI));
  uval = *(undefined2 *)unaff_ESI;
  *arg_ecx = *arg_ecx + (char)ch_4;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uval_3 - 0xc);
  *unaff_ESI = *unaff_ESI + ch_2;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uval_3 - 8);
  *str_ptr_2 = *str_ptr_2 + ch_5;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uval_3 - 4);
  *(char *)(val + -0x71) = *(char *)(val + -0x71) + (char)ch_4;
  *(undefined2 *)(uval_3 - 4) = uval;
  *(char *)(unaff_EBP + -0x71) = *(char *)(unaff_EBP + -0x71) + ch_2;
  *(undefined2 *)(uval_3 - 8) = uval;
  str_ptr[-0x71] = str_ptr[-0x71] + ch_5;
  *(undefined2 *)(uval_3 - 0xc) = uval;
  unaff_EDI[-0x5bfff971] = unaff_EDI[-0x5bfff971] + ch_3;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uval_3 - 0xc);
  arg_ecx[-0x17fff971] = arg_ecx[-0x17fff971] + ch_5;
  *(undefined4 *)unaff_ESI = *(undefined4 *)(uval_3 - 8);
  *str_ptr = *str_ptr + (char)unaff_ESI;
  *(undefined2 *)(uval_3 - 8) = uval;
  *unaff_ESI = *unaff_ESI + (char)ch_4;
  *(undefined2 *)(uval_3 - 0xc) = uval;
  ch_2 = (char)((uint)arg_ecx >> 8);
  *unaff_EDI = *unaff_EDI + ch_2;
  *(undefined2 *)(uval_3 - 0x10) = uval;
  *(char *)(val + -0x70) = *(char *)(val + -0x70) + ch_2;
  *(undefined2 *)(uval_3 - 0x14) = uval;
  str_ptr = (char *)(val + 6 + (int)str_ptr * 4);
  *str_ptr = *str_ptr + ch_5;
  arg_ecx[-0x59fff970] = arg_ecx[-0x59fff970] + (char)ch_4;
  *(undefined2 *)(uval_3 - 0x18) = uval;
  arg_ecx[0x56] = arg_ecx[0x56] + (char)ch_4;
  *(byte **)(uval_3 - 0x1c) = unaff_EDI;
  *(int *)(uval_3 - 0x20) = unaff_EBP;
  val = 0x1c;
  str_ptr_3 = scrsupp_fn_068cee;
  do {
    if (val == 0) break;
    val = val + -1;
    ch = *str_ptr_3;
    str_ptr_3 = str_ptr_3 + 1;
  } while (ch_4 != ch);
                    /* WARNING: Could not recover jumptable at 0x00068d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val * 4 + 0x68d09))();
  return;
}

/******************************************************************************
 * Function : scrsupp_fn_068d79 (Original VA: 0x68d79, Ghidra: FUN_00068d79)
 * Prototype: void scrsupp_fn_068d79(void);
 * Address  : 0x68d79 (Size: 31 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scrsupp.cpp procedure @ 0x068d79
 * Callers  : 1 -> script_fn_068b37
 * Callees  : 0 -> 
 ******************************************************************************/
void scrsupp_fn_068d79(void)

{
  code ch;
  int val;
  code arg_dl;
  code *str_ptr;
  
  val = 0x1c;
  str_ptr = scrsupp_fn_068cee;
  do {
    if (val == 0) break;
    val = val + -1;
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
  } while (arg_dl != ch);
                    /* WARNING: Could not recover jumptable at 0x00068d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val * 4 + 0x68d09))();
  return;
}

/******************************************************************************
 * Function : scrsupp_fn_06916d (Original VA: 0x6916d, Ghidra: FUN_0006916d)
 * Prototype: undefined8 scrsupp_fn_06916d(void);
 * Address  : 0x6916d (Size: 53 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scrsupp.cpp procedure @ 0x06916d
 * Callers  : 1 -> script_fn_068b37
 * Callees  : 1 -> scrsupp_fn_0698d0
 ******************************************************************************/
undefined8 scrsupp_fn_06916d(void)

{
  uint uval;
  undefined4 arg_edx;
  int val;
  ulonglong uval_2;
  
  uval_2 = scrsupp_fn_0698d0();
  val = (int)(uval_2 >> 0x20);
  uval = 0;
  if ((uval_2 & 0xff) != 0) {
    if (*(char *)(val + 3) == '\b') {
      return CONCAT44(arg_edx,1);
    }
    uval = (uint)uval_2 & 0xff & 1 << (*(byte *)(val + 3) & 0x1f);
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : scrsupp_fn_0691a2 (Original VA: 0x691a2, Ghidra: FUN_000691a2)
 * Prototype: void scrsupp_fn_0691a2(void);
 * Address  : 0x691a2 (Size: 110 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scrsupp.cpp procedure @ 0x0691a2
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_update_player_dungeon_05ba80, newgui_copy_state_struct_05bcc1
 ******************************************************************************/
void scrsupp_fn_0691a2(void)

{
  newgui_copy_state_struct_05bcc1();
  newgui_update_player_dungeon_05ba80();
  return;
}

/******************************************************************************
 * Function : scrsupp_update_player_dungeon_069220 (Original VA: 0x69220, Ghidra: FUN_00069220)
 * Prototype: bool scrsupp_update_player_dungeon_069220(void);
 * Address  : 0x69220 (Size: 70 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> script_fn_068b37
 * Callees  : 0 -> 
 ******************************************************************************/
bool scrsupp_update_player_dungeon_069220(void)

{
  int arg_eax;
  int dungeon_off;
  uint uval;
  uint arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  if (arg_edx - 0x1eU < 4) {
    dungeon_off = arg_eax * 0x1508 + arg_ebx;
    switch(arg_edx) {
    case 0x1e:
      uval = (uint)(byte)(&g_bss_002e1569)[dungeon_off];
      break;
    case 0x1f:
      uval = (uint)(byte)(&g_bss_002e1591)[dungeon_off];
      break;
    case 0x20:
      uval = (uint)(byte)(&g_bss_002e15a6)[dungeon_off];
      break;
    case 0x21:
      uval = (uint)(byte)(&g_bss_002e1507)[dungeon_off];
    }
    return uval == arg_ecx;
  }
  return false;
}

/******************************************************************************
 * Function : scrsupp_allocate_light_new_hero_069268 (Original VA: 0x69268, Ghidra: FUN_00069268)
 * Prototype: undefined2 scrsupp_allocate_light_new_hero_069268(char param_1);
 * Address  : 0x69268 (Size: 620 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp lines 79
 * Purpose  : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> script_update_creature_and_thing_068788, script_process_thing_entity_0689a7
 * Callees  : 10 -> inits_fn_043ac3, moodneed_fn_051374, structs_update_creature_control_072af4, ceiling_process_map_subtile_07dbc0, creature_fn_082774, light_already_list_0acaf8, light_attempt_set_size_unallocated_0ad834, move_process_map_subtile_0b28e8 ...
 ******************************************************************************/
undefined2 scrsupp_allocate_light_new_hero_069268(char param_1)

{
  uint rand_seed;
  char cctrl_ptr;
  undefined2 uval;
  short short_val;
  int arg_eax;
  int thing_ptr;
  int cctrl_ptr_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  byte flag;
  undefined4 uval_2;
  undefined2 uStack_1e;
  undefined1 local_1b;
  short local_18;
  short local_16;
  int local_10;
  
  flag = 0;
  if ((arg_eax != 0) && (thing_ptr = arg_eax * 10, ((&g_bss_002eb401)[thing_ptr] & 1) != 0)) {
    if ((param_1 == '\0') || (*(short *)(&g_bss_002eb406 + thing_ptr) == 0)) {
      local_18 = *(short *)(&g_bss_002eb402 + thing_ptr);
      local_16 = *(short *)(&g_bss_002eb404 + thing_ptr);
    }
    else {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      rand_seed = g_action_random_seed >> 0xd;
      g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
      rand_seed = rand_seed & 0x7ff;
      local_10 = (int)((uint)*(ushort *)(&g_bss_002eb406 + thing_ptr) * (&g_slab_attr_table)[rand_seed]) >> 0x10;
      local_18 = *(short *)(&g_bss_002eb402 + thing_ptr) +
                 (short)((uint)*(ushort *)(&g_bss_002eb406 + thing_ptr) * (&g_slab_attr_table)[rand_seed] >> 0x10);
      local_16 = (short)((uint)-((int)((int)(&PTR_LAB_00192fe0)[rand_seed] *
                                      (uint)*(ushort *)(&g_bss_002eb406 + thing_ptr)) >> 8) >> 8) +
                 *(short *)(&g_bss_002eb404 + thing_ptr);
    }
    uval_2 = 0xffffffff;
    thing_ptr = inits_fn_043ac3(0xffffffff);
    if (thing_ptr != 0) {
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(thing_ptr + 0x11) = uval;
      cctrl_ptr_2 = ceiling_process_map_subtile_07dbc0();
      thing_ptr = extraout_ECX;
      if ((cctrl_ptr_2 == 0) || (cctrl_ptr = move_fn_0b5100(), thing_ptr = extraout_ECX_00, cctrl_ptr != '\0')) {
        if (((&g_dungeons)[(uint)g_bss_002eb542 * 0xa84] == 0) ||
           (cctrl_ptr = creature_fn_082774(), thing_ptr = extraout_ECX_01, cctrl_ptr == '\0')) {
          cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
        }
        else {
          *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_01 + 100)] + 0xae) =
               *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_01 + 100)] + 0xae) | 1;
          cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_01 + 100)];
        }
        *(undefined4 *)(cctrl_ptr_2 + 0x288) = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
        *(undefined2 *)(cctrl_ptr_2 + 0x28c + (uint)flag * -8) =
             *(undefined2 *)(thing_ptr + 0x11 + (uint)flag * -8);
        uval = move_process_map_subtile_0b28e8();
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_02 + 100)] + 0x28c) = uval;
        *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_02 + 100)] + 0x89) = 0xff;
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        rand_seed = g_action_random_seed >> 0xd;
        g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
        thing_ptr = extraout_ECX_02;
        if ((rand_seed & 3) == 0) {
          (&uStack_1e)[(uint)flag * -4] =
               *(undefined2 *)(extraout_ECX_02 + 0x11 + (uint)flag * -8);
          local_1b = 1;
          short_val = light_already_list_0acaf8(uval_2,0xa00);
          *(short *)(extraout_ECX_03 + 0x62) = short_val;
          if (short_val == 0) {
            LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 79, "Cannot allocate light to new hero") */
            thing_ptr = extraout_ECX_04;
          }
          else {
            light_attempt_set_size_unallocated_0ad834();
            thing_ptr = extraout_ECX_05;
          }
        }
        if ((*(char *)(thing_ptr + 0x1a) == '\x06') || (*(char *)(thing_ptr + 0x1a) == '\a')) {
          moodneed_fn_051374();
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          moodneed_fn_051374();
          thing_ptr = extraout_ECX_06;
        }
        return *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
      }
      structs_update_creature_control_072af4();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : scrsupp_script_could_find_hero_0694d4 (Original VA: 0x694d4, Ghidra: FUN_000694d4)
 * Prototype: undefined2 scrsupp_script_could_find_hero_0694d4(void);
 * Address  : 0x694d4 (Size: 600 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp lines 123, 166
 * Purpose  : String 'Script error - could not find hero door'
 * Callers  : 2 -> script_update_creature_and_thing_068788, script_process_thing_entity_0689a7
 * Callees  : 8 -> inits_fn_043ac3, structs_update_creature_control_072af4, ceiling_process_map_subtile_07dbc0, light_already_list_0acaf8, light_attempt_set_size_unallocated_0ad834, move_process_map_subtile_0b28e8, move_fn_0b5100, LbErrorLog
 ******************************************************************************/
undefined2 scrsupp_script_could_find_hero_0694d4(void)

{
  bool flag;
  char cctrl_ptr;
  undefined2 uval;
  short short_val;
  uint arg_eax;
  int thing_ptr;
  int cctrl_ptr_2;
  uint thing_ptr_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  byte flag_2;
  undefined4 uval_2;
  undefined2 uStack_26;
  undefined1 local_23;
  short local_20;
  short sStack_1e;
  short local_1c;
  undefined2 local_18;
  undefined2 local_16;
  short local_14;
  
  flag_2 = 0;
  if (arg_eax != 0) {
    flag = false;
    for (thing_ptr_2 = g_bss_002e6ec6; thing_ptr_2 = (&g_thing_ptrs)[thing_ptr_2], g_thing_ptrs < thing_ptr_2;
        thing_ptr_2 = (uint)*(ushort *)(thing_ptr_2 + 0x67)) {
      if ((*(char *)(thing_ptr_2 + 0x1a) == '1') && (*(byte *)(thing_ptr_2 + 0x13) == arg_eax)) { /* thing->anim_sprite */
        flag = true;
        break;
      }
    }
    if (flag) {
      local_18 = *(undefined2 *)(thing_ptr_2 + 0xd); /* thing->mappos.val_x */
      local_16 = *(undefined2 *)(thing_ptr_2 + 0xf); /* thing->mappos.val_y */
      uval_2 = 0xffffffff;
      local_14 = *(short *)(thing_ptr_2 + 0x11) + 0x180;
      thing_ptr = inits_fn_043ac3(0xffffffff);
      if (thing_ptr != 0) {
        uval = move_process_map_subtile_0b28e8();
        *(undefined2 *)(thing_ptr + 0x11) = uval;
        cctrl_ptr_2 = ceiling_process_map_subtile_07dbc0();
        thing_ptr = extraout_ECX_00;
        if ((cctrl_ptr_2 == 0) || (cctrl_ptr = move_fn_0b5100(), thing_ptr = extraout_ECX_01, cctrl_ptr != '\0')) {
          *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xae) = /* thing->ccontrol_idx */
               *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xae) | 2; /* thing->ccontrol_idx */
          cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
          *(undefined4 *)(cctrl_ptr_2 + 0x288) = *(undefined4 *)(thing_ptr + 0xd); /* thing->mappos.val_x */
          *(undefined2 *)(cctrl_ptr_2 + 0x28c + (uint)flag_2 * -8) =
               *(undefined2 *)(thing_ptr + 0x11 + (uint)flag_2 * -8);
          uval = move_process_map_subtile_0b28e8();
          *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_02 + 100)] + 0x28c) = uval;
          *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_02 + 100)] + 0x89) = 0xff;
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          thing_ptr_2 = g_action_random_seed >> 0xd;
          g_action_random_seed = thing_ptr_2 | g_action_random_seed * 0x80000;
          thing_ptr = extraout_ECX_02;
          if ((thing_ptr_2 & 3) == 0) {
            (&uStack_26)[(uint)flag_2 * -4] =
                 *(undefined2 *)(extraout_ECX_02 + 0x11 + (uint)flag_2 * -8);
            local_23 = 1;
            short_val = light_already_list_0acaf8(uval_2,0xa00);
            *(short *)(extraout_ECX_03 + 0x62) = short_val;
            if (short_val == 0) {
              LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 123, "Script error - could not find hero door") */
              thing_ptr = extraout_ECX_04;
            }
            else {
              light_attempt_set_size_unallocated_0ad834();
              thing_ptr = extraout_ECX_05;
            }
          }
          *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) = /* thing->ccontrol_idx */
               *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) | 0x20; /* thing->ccontrol_idx */
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          thing_ptr_2 = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          local_20 = (short)((ulonglong)thing_ptr_2 % 0xc0) + -0x60;
          g_action_random_seed = thing_ptr_2 * 0x24a1 + 0x24df;
          thing_ptr_2 = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          sStack_1e = (short)((ulonglong)thing_ptr_2 % 0xc0) + -0x60;
          g_action_random_seed = thing_ptr_2 * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          local_1c = (short)((ulonglong)g_action_random_seed % 0x60) + 0x50;
          *(short *)(thing_ptr + 0x32) = *(short *)(thing_ptr + 0x32) + local_20;
          *(short *)(thing_ptr + 0x34) = *(short *)(thing_ptr + 0x34) + sStack_1e;
          *(short *)(thing_ptr + 0x36) = *(short *)(thing_ptr + 0x36) + local_1c;
          *(byte *)(thing_ptr + 1) = *(byte *)(thing_ptr + 1) | 4;
          if ((*(char *)(thing_ptr + 0x1a) == '\x06') || (*(char *)(thing_ptr + 0x1a) == '\a')) {
            moodneed_fn_051374();
            g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
            g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
            moodneed_fn_051374();
            thing_ptr = extraout_ECX;
          }
          return *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        }
        structs_update_creature_control_072af4();
      }
    }
    else {
      LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 166, "Cannot allocate light to new hero") */
    }
  }
  return 0;
}

/******************************************************************************
 * Function : scrsupp_allocate_light_new_hero_06972c (Original VA: 0x6972c, Ghidra: FUN_0006972c)
 * Prototype: undefined2 scrsupp_allocate_light_new_hero_06972c(void);
 * Address  : 0x6972c (Size: 420 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp lines 221, 238, 246
 * Purpose  : String 'Cannot allocate light to new hero'
 * Callers  : 2 -> script_update_creature_and_thing_068788, script_process_thing_entity_0689a7
 * Callees  : 9 -> inits_told_you_so_create_043bb3, moodneed_fn_051374, structs_update_creature_control_072af4, ceiling_process_map_subtile_07dbc0, light_already_list_0acaf8, light_attempt_set_size_unallocated_0ad834, move_process_map_subtile_0b28e8, LbErrorLog ...
 ******************************************************************************/
undefined2 scrsupp_allocate_light_new_hero_06972c(void)

{
  uint rand_seed;
  undefined2 uval;
  short short_val;
  int cctrl_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 arg_dl;
  uint arg_ebx;
  byte flag;
  undefined2 uStack_1a;
  undefined1 local_17;
  int local_14;
  
  flag = 0;
  if ((&g_dungeons)[(arg_ebx & 0xff) * 0xa84] == 0) {
    dk_sprintf(&g_log_sprintf_buf,s_SCRIPT_SUPPORT___Player__d_has_n_00166dd7,arg_dl);
    LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 221, "Cannot allocate light to new hero") */
  }
  else {
    local_14 = inits_told_you_so_create_043bb3();
    if (local_14 != 0) {
      uval = move_process_map_subtile_0b28e8();
      *(undefined2 *)(extraout_ECX + 0x11) = uval;
      cctrl_ptr = ceiling_process_map_subtile_07dbc0();
      if (cctrl_ptr == 0) {
        *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x89) = 0xff;
        g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
        rand_seed = g_action_random_seed >> 0xd;
        g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
        if ((rand_seed & 3) == 0) {
          (&uStack_1a)[(uint)flag * -4] =
               *(undefined2 *)(extraout_ECX_00 + 0x11 + (uint)flag * -8);
          local_17 = 1;
          short_val = light_already_list_0acaf8(0xa00);
          *(short *)(extraout_ECX_01 + 0x62) = short_val;
          if (short_val == 0) {
            LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 238, "SCRIPT SUPPORT - Dungeon heart created thing in wall") */
          }
          else {
            light_attempt_set_size_unallocated_0ad834();
          }
        }
        if ((*(char *)(local_14 + 0x1a) == '\x06') || (*(char *)(local_14 + 0x1a) == '\a')) {
          moodneed_fn_051374();
          g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
          moodneed_fn_051374();
        }
        return *(undefined2 *)(local_14 + 0x1b);
      }
      LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 246, g_log_buf) */
      structs_update_creature_control_072af4();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : scrsupp_fn_0698d0 (Original VA: 0x698d0, Ghidra: FUN_000698d0)
 * Prototype: undefined4 scrsupp_fn_0698d0(void);
 * Address  : 0x698d0 (Size: 10 bytes)
 * Module   : scrsupp.cpp [contiguous_same_unit_span]
 * Purpose  : Module scrsupp.cpp procedure @ 0x0698d0
 * Callers  : 1 -> scrsupp_fn_06916d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 scrsupp_fn_0698d0(void)

{
  int arg_eax;
  
  return CONCAT31((int3)((uint)(arg_eax * 10) >> 8),(&g_bss_002eb40a)[arg_eax * 10]);
}

/******************************************************************************
 * Function : scrsupp_script_support_dungeon_heart_0698da (Original VA: 0x698da, Ghidra: FUN_000698da)
 * Prototype: undefined4 scrsupp_script_support_dungeon_heart_0698da(void);
 * Address  : 0x698da (Size: 80 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp lines 268
 * Purpose  : String 'SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!'
 * Callers  : 1 -> script_process_thing_entity_0689a7
 * Callees  : 2 -> good_update_creature_control_0390af, LbErrorLog
 ******************************************************************************/
undefined4 scrsupp_script_support_dungeon_heart_0698da(void)

{
  uint arg_edx;
  
  if ((&g_dungeons)[(arg_edx & 0xff) * 0xa84] != 0) {
    good_update_creature_control_0390af();
    return 1;
  }
  LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 268, "SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!") */
  return 0;
}

/******************************************************************************
 * Function : scrsupp_script_support_dungeon_heart_06992a (Original VA: 0x6992a, Ghidra: FUN_0006992a)
 * Prototype: bool scrsupp_script_support_dungeon_heart_06992a(void);
 * Address  : 0x6992a (Size: 93 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp lines 286
 * Purpose  : String 'SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!'
 * Callers  : 1 -> script_process_thing_entity_0689a7
 * Callees  : 3 -> dungeon_attempt_get_random_position_0239ee, good_update_creature_control_0390af, LbErrorLog
 ******************************************************************************/
bool scrsupp_script_support_dungeon_heart_06992a(void)

{
  short dungeon_off;
  uint arg_edx;
  
  dungeon_off = (&g_dungeons)[(arg_edx & 0xff) * 0xa84];
  if (dungeon_off == 0) {
    LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 286, "SCRIPT SUPPORT - No Dungeon Heart to send tunneller to!") */
  }
  else {
    dungeon_attempt_get_random_position_0239ee();
    good_update_creature_control_0390af();
  }
  return dungeon_off != 0;
}

/******************************************************************************
 * Function : scrsupp_script_support_could_find_069987 (Original VA: 0x69987, Ghidra: FUN_00069987)
 * Prototype: undefined8 scrsupp_script_support_could_find_069987(void);
 * Address  : 0x69987 (Size: 89 bytes)
 * Module   : scrsupp.cpp [direct_file_string_xref]
 * OrigLine : scrsupp.cpp lines 305
 * Purpose  : String 'SCRIPT SUPPORT - Could not find appropriate dungeon to send '
 * Callers  : 2 -> good_update_creature_and_thing_038989, script_process_thing_entity_0689a7
 * Callees  : 4 -> dungeon_attempt_get_random_position_0239ee, dungeon_update_player_dungeon_023a48, good_update_creature_control_0390af, LbErrorLog
 ******************************************************************************/
undefined8 scrsupp_script_support_could_find_069987(void)

{
  char ch;
  undefined4 arg_edx;
  
  ch = dungeon_update_player_dungeon_023a48();
  if (ch == -1) {
    LbErrorLog(); /* LbErrorLog("scrsupp.cpp", line 305, "SCRIPT SUPPORT - Could not find appropriate dungeon to send tunneller to!") */
  }
  else {
    dungeon_attempt_get_random_position_0239ee();
    good_update_creature_control_0390af();
  }
  return CONCAT44(arg_edx,(uint)(ch != -1));
}

/******************************************************************************
 * Function : scrsupp_fn_0699e0 (Original VA: 0x699e0, Ghidra: FUN_000699e0)
 * Prototype: undefined4 scrsupp_fn_0699e0(void);
 * Address  : 0x699e0 (Size: 50 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Module scrsupp.cpp procedure @ 0x0699e0
 * Callers  : 1 -> script_process_thing_entity_0689a7
 * Callees  : 1 -> good_update_creature_control_0390e3
 ******************************************************************************/
undefined4 scrsupp_fn_0699e0(void)

{
  int arg_edx;
  
  good_update_creature_control_0390e3(*(undefined2 *)(&g_bss_002eb402 + arg_edx * 10));
  return 1;
}

/******************************************************************************
 * Function : scrsupp_update_player_view_state_069a12 (Original VA: 0x69a12, Ghidra: FUN_00069a12)
 * Prototype: undefined4 scrsupp_update_player_view_state_069a12(void);
 * Address  : 0x69a12 (Size: 47 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> packet_resync_network_game_state, command_script_player_07a535
 * Callees  : 2 -> compturn_update_player_dungeon_021056, inits_process_thing_entity_040ee4
 ******************************************************************************/
undefined4 scrsupp_update_player_view_state_069a12(void)

{
  byte arg_al;
  int player_off;
  
  player_off = (uint)arg_al * 0x4ef;
  (&g_bss_0019d0f4)[player_off] = 1;
  (&g_player_id_number)[player_off] = arg_al;
  (&g_players)[player_off] = (&g_players)[player_off] | 0x41;
  inits_process_thing_entity_040ee4();
  compturn_update_player_dungeon_021056();
  return 1;
}

/******************************************************************************
 * Function : scrsupp_process_thing_entity_069a41 (Original VA: 0x69a41, Ghidra: FUN_00069a41)
 * Prototype: void scrsupp_process_thing_entity_069a41(void);
 * Address  : 0x69a41 (Size: 79 bytes)
 * Module   : scrsupp.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void scrsupp_process_thing_entity_069a41(void)

{
  byte arg_al;
  uint thing_ptr;
  
  thing_ptr = g_bss_002e6ec6;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return;
    }
    if (((&g_bss_001acd79)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x1d] != '\0') &&
       ((int)*(char *)(thing_ptr + 6) == (uint)arg_al)) break; /* thing->owner */
    thing_ptr = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  (&g_dungeons)[(uint)arg_al * 0xa84] = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  return;
}

