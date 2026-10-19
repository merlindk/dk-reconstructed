/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: script.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : script_update_player_view_state_06809c (Original VA: 0x6809c, Ghidra: FUN_0006809c)
 * Prototype: void script_update_player_view_state_06809c(void);
 * Address  : 0x6809c (Size: 552 bytes)
 * Module   : script.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 8 -> script_fn_068340, script_fn_068873, script_party_big_0688a4, script_process_thing_entity_0689a7, script_fn_068ab1, script_fn_068ac4, script_process_thing_entity_068ad7, script_fn_068b37
 ******************************************************************************/
void script_update_player_view_state_06809c(void)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int loop_i;
  uint *word_ptr;
  undefined1 *word_ptr_2;
  undefined1 *word_ptr_3;
  undefined1 *word_ptr_4;
  byte *byte_ptr;
  int loop_i_2;
  uint auStack_2c [4];
  undefined *local_1c;
  
  word_ptr = auStack_2c + 3;
  if (((g_game_system_flags & 1) != 0) || ((&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef] == '\0')) {
    script_fn_068b37();
    byte_ptr = &g_bss_002ebd76;
    for (loop_i_2 = 0; loop_i_2 < g_bss_002ebfe6; loop_i_2 = loop_i_2 + 1) {
      if (((*byte_ptr & 2) == 0) &&
         (((char)byte_ptr[1] == -1 || (((&g_bss_002ec3f0)[(char)byte_ptr[1] * 0xc] & 1) != 0)))) {
        if ((char)byte_ptr[2] < 1) {
          auStack_2c[3] = *(uint *)(byte_ptr + 4);
          local_1c = &g_bss_002ec632 + (char)byte_ptr[2] * -0xd0;
          *(undefined4 *)((int)word_ptr + -4) = 0x68105;
          script_party_big_0688a4();
        }
        else {
          *(uint *)((int)word_ptr + -4) = (uint)byte_ptr[8];
          *(uint *)((int)word_ptr + -8) = (uint)*(ushort *)(byte_ptr + 9);
          *(undefined4 *)((int)word_ptr + -0xc) = 0x6815b;
          script_fn_068873();
          word_ptr = (uint *)((int)word_ptr + -8);
        }
        if ((*byte_ptr & 1) == 0) {
          *byte_ptr = *byte_ptr | 2;
        }
      }
      byte_ptr = byte_ptr + 0xd;
    }
    byte_ptr = &g_bss_002ebc52;
    word_ptr_3 = (undefined1 *)word_ptr;
    for (loop_i_2 = 0; loop_i_2 < g_bss_002ebd72; loop_i_2 = loop_i_2 + 1) {
      word_ptr_2 = word_ptr_3;
      if (((*byte_ptr & 2) == 0) &&
         (((char)byte_ptr[1] == -1 || (((&g_bss_002ec3f0)[(char)byte_ptr[1] * 0xc] & 1) != 0)))) {
        if (byte_ptr[0x11] == 0) {
          *(undefined4 *)(word_ptr_3 + -4) = *(undefined4 *)(byte_ptr + 0xc);
          word_ptr_2 = word_ptr_3 + -8;
          *(uint *)(word_ptr_3 + -8) = (uint)byte_ptr[0x10];
          *(undefined4 *)(word_ptr_3 + -0xc) = 0x68181;
          script_process_thing_entity_0689a7();
        }
        else {
          *(undefined4 *)(word_ptr_3 + -4) = *(undefined4 *)(byte_ptr + 0xc);
          *(uint *)(word_ptr_3 + -8) = (uint)byte_ptr[0x10];
          word_ptr_2 = word_ptr_3 + -0xc;
          *(undefined4 *)(word_ptr_3 + -0xc) = *(undefined4 *)(byte_ptr + 8);
          *(undefined4 *)(word_ptr_3 + -0x10) = 0x681db;
          script_process_thing_entity_068ad7();
        }
        if ((*byte_ptr & 1) == 0) {
          *byte_ptr = *byte_ptr | 2;
        }
      }
      byte_ptr = byte_ptr + 0x12;
      word_ptr_3 = word_ptr_2;
    }
    byte_ptr = &g_bss_002ebfea;
    for (loop_i_2 = 0; loop_i_2 < g_bss_002ec3ea; loop_i_2 = loop_i_2 + 1) {
      if (((*byte_ptr & 2) == 0) &&
         (((char)byte_ptr[1] == -1 || (((&g_bss_002ec3f0)[(char)byte_ptr[1] * 0xc] & 1) != 0)))) {
        word_ptr_4 = word_ptr_3 + -4;
        *(undefined4 *)(word_ptr_3 + -4) = *(undefined4 *)(byte_ptr + 0xc);
        *(undefined4 *)(word_ptr_3 + -8) = 0x68228;
        script_fn_068340();
        word_ptr_3 = word_ptr_3 + -4;
        if ((*byte_ptr & 1) == 0) {
          *byte_ptr = *byte_ptr | 2;
          word_ptr_3 = word_ptr_4;
        }
      }
      byte_ptr = byte_ptr + 0x10;
    }
    if ((g_game_system_flags & 1) == 0) {
      loop_i_2 = 0;
      for (loop_i = 0; loop_i < g_bss_002ed33e; loop_i = loop_i + 1) {
        if (((&g_bss_002ec3f0)[*(short *)((int)&g_bss_002ed336 + loop_i_2) * 0xc] & 1) != 0) {
          *(undefined4 *)(word_ptr_3 + -4) = 0x6827c;
          script_fn_068ab1();
          loop_i_2 = extraout_EDX;
        }
        loop_i_2 = loop_i_2 + 2;
      }
      loop_i_2 = 0;
      for (loop_i = 0; loop_i < g_bss_002ed34a; loop_i = loop_i + 1) {
        if (((&g_bss_002ec3f0)[*(short *)((int)&g_bss_002ed342 + loop_i_2) * 0xc] & 1) != 0) {
          *(undefined4 *)(word_ptr_3 + -4) = 0x682bb;
          script_fn_068ac4();
          loop_i_2 = extraout_EDX_00;
        }
        loop_i_2 = loop_i_2 + 2;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : script_fn_0682c4 (Original VA: 0x682c4, Ghidra: FUN_000682c4)
 * Prototype: void script_fn_0682c4(void);
 * Address  : 0x682c4 (Size: 123 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x0682c4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void script_fn_0682c4(void)

{
  char *str_ptr;
  code ch;
  int val;
  int arg_eax;
  uint uval;
  undefined3 uval_2;
  int arg_ecx;
  int val_2;
  char *str_ptr_2;
  int val_3;
  char ch_3;
  char ch_4;
  int arg_edx;
  char ch_5;
  int arg_ebx;
  char *str_ptr_3;
  int unaff_EBP;
  int *unaff_ESI;
  byte *unaff_EDI;
  code *str_ptr_4;
  char ch_2;
  
  str_ptr_3 = (char *)(arg_ebx + 1);
  val_2 = arg_ecx + 1;
  uval = arg_eax + 1U ^ 0x21222e33;
  *unaff_EDI = *unaff_EDI | (char)uval - 0x16U;
  LOCK();
  val_3 = *unaff_ESI;
  *unaff_ESI = uval + 0x77eeeeee;
  UNLOCK();
  str_ptr = (char *)(arg_ebx + -0x7c5afff9 + val_3 * 4);
  *str_ptr = *str_ptr + (char)val_2;
  ch_4 = (char)((uint)arg_edx >> 8);
  *(char *)(arg_ebx + 0x11000684) = *(char *)(arg_ebx + 0x11000684) + ch_4;
  ch_3 = (char)((uint)val_2 >> 8);
  unaff_EDI[-0x7c] = unaff_EDI[-0x7c] + ch_3;
  ch_2 = ch_3 + (char)val_3;
  str_ptr_2 = (char *)CONCAT22((short)((uint)val_2 >> 0x10),CONCAT11(ch_2,(char)val_2 + ch_3));
  *(char *)unaff_ESI = (char)*unaff_ESI + (char)((uint)val_3 >> 8);
  LOCK();
  ch_3 = (char)*unaff_ESI;
  *(char *)unaff_ESI = (char)val_3;
  uval_2 = (undefined3)((uint)val_3 >> 8);
  UNLOCK();
  *(char *)(arg_ebx + -0x79) = *(char *)(arg_ebx + -0x79) + ch_3;
  str_ptr_2[-0x7a] = str_ptr_2[-0x7a] + (char)arg_edx;
  *(char *)(arg_edx + -0x7b) = *(char *)(arg_edx + -0x7b) + ch_2;
  str_ptr_2[-0x57fff97a] = str_ptr_2[-0x57fff97a] + ch_3;
  LOCK();
  val_3 = *unaff_ESI;
  *(char *)unaff_ESI = ch_3;
  UNLOCK();
  str_ptr = (char *)(CONCAT31(uval_2,(char)val_3) + -0x35fff97a);
  ch_5 = (char)((uint)str_ptr_3 >> 8);
  *str_ptr = *str_ptr + ch_5;
  LOCK();
  val_2 = *unaff_ESI;
  *(char *)unaff_ESI = (char)val_3;
  UNLOCK();
  unaff_EDI[-0x79] = unaff_EDI[-0x79] + ch_4;
  ch_3 = (char)arg_edx + (char)str_ptr_3;
  LOCK();
  val = *unaff_ESI;
  *(char *)unaff_ESI = (char)val_2;
  UNLOCK();
  *str_ptr_2 = *str_ptr_2 + ch_3;
  LOCK();
  val_3 = *unaff_ESI;
  *unaff_ESI = CONCAT31(uval_2,(char)val);
  UNLOCK();
  g_bss_28000687 = g_bss_28000687 + (char)str_ptr_3;
  LOCK();
  val_2 = *unaff_ESI;
  *unaff_ESI = val_3;
  UNLOCK();
  *str_ptr_3 = *str_ptr_3 + ch_4;
  LOCK();
  val_3 = *unaff_ESI;
  *unaff_ESI = val_2;
  UNLOCK();
  *(char *)unaff_ESI = (char)*unaff_ESI + ch_5;
  LOCK();
  val_2 = *unaff_ESI;
  *unaff_ESI = val_3;
  UNLOCK();
  *(char *)((int)unaff_ESI + -0x79) = *(char *)((int)unaff_ESI + -0x79) + ch_3;
  *(char *)(unaff_EBP + -0x79) = *(char *)(unaff_EBP + -0x79) + ch_2;
  *(char *)((int)unaff_ESI + 0x57) = *(char *)((int)unaff_ESI + 0x57) + ch_3;
  if (0x43 < val_2 - 8U) {
    return;
  }
  val_3 = 0x19;
  str_ptr_4 = script_fn_0682c4;
  do {
    if (val_3 == 0) break;
    val_3 = val_3 + -1;
    ch = *str_ptr_4;
    str_ptr_4 = str_ptr_4 + 1;
  } while (SUB41(val_2 - 8U,0) != ch);
                    /* WARNING: Could not recover jumptable at 0x00068384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val_3 * 4 + 0x682dc))(str_ptr_2,str_ptr_3);
  return;
}

/******************************************************************************
 * Function : script_fn_068340 (Original VA: 0x68340, Ghidra: FUN_00068340)
 * Prototype: void script_fn_068340(void);
 * Address  : 0x68340 (Size: 82 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x068340
 * Callers  : 2 -> script_update_player_view_state_06809c, command_script_values_script_079eb1
 * Callees  : 0 -> 
 ******************************************************************************/
void script_fn_068340(void)

{
  code ch;
  int arg_eax;
  int val;
  code *str_ptr;
  
  if (0x43 < arg_eax - 8U) {
    return;
  }
  val = 0x19;
  str_ptr = script_fn_0682c4;
  do {
    if (val == 0) break;
    val = val + -1;
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
  } while (SUB41(arg_eax - 8U,0) != ch);
                    /* WARNING: Could not recover jumptable at 0x00068384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val * 4 + 0x682dc))();
  return;
}

/******************************************************************************
 * Function : script_update_creature_and_thing_068788 (Original VA: 0x68788, Ghidra: FUN_00068788)
 * Prototype: uint script_update_creature_and_thing_068788(void);
 * Address  : 0x68788 (Size: 235 bytes)
 * Module   : script.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> script_fn_068873, script_party_big_0688a4
 * Callees  : 7 -> effect_allocate_light_effect_024998, person_initialise_state_but_thing_064b0c, scrsupp_allocate_light_new_hero_069268, scrsupp_script_could_find_hero_0694d4, scrsupp_allocate_light_new_hero_06972c, creature_update_creature_control_08240c, light_process_map_subtile_0b2440
 ******************************************************************************/
uint script_update_creature_and_thing_068788(void)

{
  undefined2 uval;
  uint thing_ptr;
  undefined4 arg_ecx;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int arg_ebx;
  char *str_ptr;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  char local_10 [4];
  
  str_ptr = local_10;
  if (arg_ebx < -1000) {
    str_ptr = (char *)&uStack_14;
    uStack_14 = 1;
    thing_ptr = scrsupp_script_could_find_hero_0694d4();
  }
  else {
    if (arg_ebx < 0) {
      uStack_14 = 1;
      thing_ptr = scrsupp_allocate_light_new_hero_069268();
      thing_ptr = (&g_thing_ptrs)[thing_ptr & 0xffff];
      word_ptr = &uStack_14;
      if ((g_thing_ptrs < thing_ptr) && (word_ptr = &uStack_14, local_10[0] == g_bss_002eb542)) {
        uval = light_process_map_subtile_0b2440();
        *(undefined2 *)(extraout_ECX + 0x11) = uval;
        effect_allocate_light_effect_024998();
        person_initialise_state_but_thing_064b0c();
        *(byte *)(extraout_ECX_00 + 0x4f) = *(byte *)(extraout_ECX_00 + 0x4f) | 1;
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x282) = 0x18;
        thing_ptr = extraout_ECX_00;
        word_ptr = &uStack_14;
      }
      goto LAB_00068857;
    }
    uStack_14 = 0x6884d;
    thing_ptr = scrsupp_allocate_light_new_hero_06972c();
  }
  thing_ptr = (&g_thing_ptrs)[thing_ptr & 0xffff];
  word_ptr = (undefined4 *)str_ptr;
LAB_00068857:
  if (g_thing_ptrs < thing_ptr) {
    *(undefined4 *)(thing_ptr + 0x13) = arg_ecx; /* thing->anim_sprite */
    *(undefined4 *)((int)word_ptr + -4) = 0x6886c;
    creature_update_creature_control_08240c();
    thing_ptr = extraout_ECX_01;
  }
  return thing_ptr;
}

/******************************************************************************
 * Function : script_fn_068873 (Original VA: 0x68873, Ghidra: FUN_00068873)
 * Prototype: void script_fn_068873(undefined4 param_1,undefined4 param_2);
 * Address  : 0x68873 (Size: 49 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x068873
 * Callers  : 2 -> script_update_player_view_state_06809c, command_script_creature_level_parameter_079b68
 * Callees  : 1 -> script_update_creature_and_thing_068788
 ******************************************************************************/
void script_fn_068873(undefined4 param_1,undefined4 param_2)

{
  int arg_ecx;
  undefined1 *word_ptr;
  undefined4 auStack_1c [2];
  undefined1 local_14 [8];
  
  word_ptr = local_14;
  for (; arg_ecx != 0; arg_ecx = arg_ecx + -1) {
    *(undefined4 *)(word_ptr + -4) = param_2;
    *(undefined4 *)(word_ptr + -8) = 0x68899;
    script_update_creature_and_thing_068788();
    word_ptr = word_ptr + -4;
  }
  return;
}

/******************************************************************************
 * Function : script_party_big_0688a4 (Original VA: 0x688a4, Ghidra: FUN_000688a4)
 * Prototype: int script_party_big_0688a4(void);
 * Address  : 0x688a4 (Size: 243 bytes)
 * Module   : script.cpp [direct_file_string_xref]
 * OrigLine : script.cpp lines 551
 * Purpose  : String 'Party too big'
 * Callers  : 3 -> script_update_player_view_state_06809c, script_process_thing_entity_068ad7, command_script_number_parameter_0798e3
 * Callees  : 5 -> gravyard_update_creature_control_039a74, gravyard_update_creature_control_039ba4, group_update_creature_and_thing_039e36, script_update_creature_and_thing_068788, LbErrorLog
 ******************************************************************************/
int script_party_big_0688a4(void)

{
  int arg_eax;
  int thing_ptr;
  int arg_ecx;
  int extraout_ECX;
  int val;
  int extraout_ECX_00;
  uint *word_ptr;
  uint uval;
  int val_2;
  undefined8 uval_2;
  uint auStack_30 [5];
  int local_18;
  int local_14;
  
  word_ptr = auStack_30 + 3;
  local_18 = 0;
  auStack_30[3] = arg_eax;
  for (local_14 = arg_ecx; local_14 != 0; local_14 = local_14 + -1) {
    if (*(int *)(auStack_30[3] + 0xcc) < 9) {
      uval = auStack_30[3];
      val_2 = 0;
      for (auStack_30[4] = 0; (int)auStack_30[4] < *(int *)(auStack_30[3] + 0xcc);
          auStack_30[4] = auStack_30[4] + 1) {
        *(uint *)((int)word_ptr + -4) = (uint)*(byte *)(uval + 0x6c);
        *(undefined4 *)((int)word_ptr + -8) = 0x6892d;
        thing_ptr = script_update_creature_and_thing_068788();
        val = thing_ptr;
        if (thing_ptr != 0) {
          *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 4) = /* thing->ccontrol_idx */
               *(undefined1 *)(uval + 0x67);
          *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 5) = /* thing->ccontrol_idx */
               g_game_turn + *(int *)(uval + 0x68);
          if (val_2 != 0) {
            *(undefined4 *)((int)word_ptr + -8) = 0x68977;
            uval_2 = group_update_creature_and_thing_039e36();
            if ((int)uval_2 < (int)((ulonglong)uval_2 >> 0x20)) {
              *(undefined4 *)((int)word_ptr + -8) = 0x68988;
              gravyard_update_creature_control_039ba4();
              val = extraout_ECX_00;
              local_18 = thing_ptr;
            }
            else {
              *(undefined4 *)((int)word_ptr + -8) = 0x688fe;
              gravyard_update_creature_control_039a74();
              val = extraout_ECX;
            }
          }
        }
        uval = uval + 0xd;
        word_ptr = (uint *)((int)word_ptr + -4);
        val_2 = val;
      }
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x688ec;
      LbErrorLog(); /* LbErrorLog("script.cpp", line 551, "Party too big") */
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : script_process_thing_entity_0689a7 (Original VA: 0x689a7, Ghidra: FUN_000689a7)
 * Prototype: undefined4 script_process_thing_entity_0689a7(undefined4 param_1,undefined4 param_2);
 * Address  : 0x689a7 (Size: 266 bytes)
 * Module   : script.cpp [direct_file_string_xref]
 * OrigLine : script.cpp lines 624
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 3 -> script_update_player_view_state_06809c, script_process_thing_entity_068ad7, command_script_tunnellers_script_07a754
 * Callees  : 9 -> scrsupp_allocate_light_new_hero_069268, scrsupp_script_could_find_hero_0694d4, scrsupp_allocate_light_new_hero_06972c, scrsupp_script_support_dungeon_heart_0698da, scrsupp_script_support_dungeon_heart_06992a, scrsupp_script_support_could_find_069987, scrsupp_fn_0699e0, creature_update_creature_control_08240c ...
 ******************************************************************************/
undefined4 script_process_thing_entity_0689a7(undefined4 param_1,undefined4 param_2)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int arg_edx;
  undefined1 arg_bl;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  undefined1 local_10 [8];
  undefined1 local_8;
  
  word_ptr = (undefined4 *)local_10;
  local_8 = arg_bl;
  if (arg_edx < -1000) {
    word_ptr = &uStack_14;
    uStack_14 = 1;
    val = scrsupp_script_could_find_hero_0694d4();
  }
  else if (arg_edx < 0) {
    word_ptr = &uStack_14;
    uStack_14 = 1;
    val = scrsupp_allocate_light_new_hero_069268();
  }
  else {
    uStack_14 = 0x68a0b;
    val = scrsupp_allocate_light_new_hero_06972c();
  }
  if (val == 0) {
    val = 0;
  }
  else {
    *(undefined4 *)((&g_thing_ptrs)[val] + 0x13) = param_2;
    *(undefined4 *)((int)word_ptr + -4) = 0x68a92;
    creature_update_creature_control_08240c();
    switch(local_8) {
    case 1:
      *(undefined4 *)((int)word_ptr + -4) = 0x68a49;
      scrsupp_fn_0699e0();
      val = extraout_ECX_01;
      break;
    case 2:
      *(undefined4 *)((int)word_ptr + -4) = 0x68a25;
      scrsupp_script_support_dungeon_heart_06992a();
      val = extraout_ECX;
      break;
    case 3:
      *(undefined4 *)((int)word_ptr + -4) = 0x68a39;
      scrsupp_script_support_dungeon_heart_0698da();
      val = extraout_ECX_00;
      break;
    case 4:
      *(undefined4 *)((int)word_ptr + -4) = 0x68a56;
      scrsupp_script_support_could_find_069987();
      val = extraout_ECX_02;
      break;
    default:
      *(undefined4 *)((int)word_ptr + -4) = 0x68a6c;
      LbErrorLog(); /* LbErrorLog("script.cpp", line 624, "Invalid HEAD_FOR") */
      return 0;
    }
  }
  return (&g_thing_ptrs)[val];
}

/******************************************************************************
 * Function : script_fn_068ab1 (Original VA: 0x68ab1, Ghidra: FUN_00068ab1)
 * Prototype: void script_fn_068ab1(void);
 * Address  : 0x68ab1 (Size: 19 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x068ab1
 * Callers  : 1 -> script_update_player_view_state_06809c
 * Callees  : 1 -> update_update_player_dungeon_0dd500
 ******************************************************************************/
void script_fn_068ab1(void)

{
  update_update_player_dungeon_0dd500();
  return;
}

/******************************************************************************
 * Function : script_fn_068ac4 (Original VA: 0x68ac4, Ghidra: FUN_00068ac4)
 * Prototype: void script_fn_068ac4(void);
 * Address  : 0x68ac4 (Size: 19 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x068ac4
 * Callers  : 1 -> script_update_player_view_state_06809c
 * Callees  : 1 -> update_update_player_dungeon_0dd6c8
 ******************************************************************************/
void script_fn_068ac4(void)

{
  update_update_player_dungeon_0dd6c8();
  return;
}

/******************************************************************************
 * Function : script_process_thing_entity_068ad7 (Original VA: 0x68ad7, Ghidra: FUN_00068ad7)
 * Prototype: void script_process_thing_entity_068ad7(undefined4 param_1,undefined1 param_2,undefined4 param_3);
 * Address  : 0x68ad7 (Size: 96 bytes)
 * Module   : script.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> script_update_player_view_state_06809c, command_script_tunnellers_script_07ad6f
 * Callees  : 3 -> gravyard_update_creature_control_039ba4, script_party_big_0688a4, script_process_thing_entity_0689a7
 ******************************************************************************/
void script_process_thing_entity_068ad7(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  uint uval;
  
  uval = script_process_thing_entity_0689a7(param_2,param_3);
  if (g_thing_ptrs < uval) {
    uval = script_party_big_0688a4();
    if (g_thing_ptrs < uval) {
      gravyard_update_creature_control_039ba4();
    }
  }
  return;
}

/******************************************************************************
 * Function : script_fn_068b37 (Original VA: 0x68b37, Ghidra: FUN_00068b37)
 * Prototype: void script_fn_068b37(void);
 * Address  : 0x68b37 (Size: 344 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x068b37
 * Callers  : 1 -> script_update_player_view_state_06809c
 * Callees  : 4 -> script_fn_068ca7, scrsupp_fn_068d79, scrsupp_fn_06916d, scrsupp_update_player_dungeon_069220
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void script_fn_068b37(void)

{
  char ch;
  int val;
  uint uval;
  int extraout_ECX;
  int extraout_ECX_00;
  short *val_2;
  uint uval_2;
  int local_1c;
  
  val_2 = &g_bss_002ec3ee;
  uval_2 = 0;
  do {
    if (g_bss_002ec62e <= (int)(uval_2 & 0xffff)) {
      return;
    }
    if ((*val_2 == -1) ||
       ((val = *val_2 * 0xc, ((&g_bss_002ec3f0)[val] & 1) != 0 &&
        (((&g_bss_002ec3f0)[val] & 4) == 0)))) {
      if (*(char *)((int)val_2 + 3) == '\b') {
        if ((char)val_2[2] == '\x13') {
          local_1c = 0;
          uval = 0;
          while ((local_1c == 0 && ((uval & 0xffff) < (uint)g_bss_002eb542))) {
            local_1c = scrsupp_fn_06916d();
            uval = extraout_ECX + 1;
          }
        }
        else {
          local_1c = 0;
          uval = 0;
          while ((local_1c == 0 && ((uval & 0xffff) < (uint)g_bss_002eb542))) {
            scrsupp_fn_068d79();
            ch = script_fn_068ca7(*(undefined1 *)((int)val_2 + 7));
            local_1c = (int)ch;
            uval = extraout_ECX_00 + 1;
          }
        }
        *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xfe;
        local_1c._0_1_ = (byte)local_1c & 1;
      }
      else {
        if ((char)val_2[2] == '\x13') {
          local_1c._0_1_ = scrsupp_fn_06916d();
        }
        else {
          if ((char)val_2[2] != 'B') {
            scrsupp_fn_068d79();
            local_1c._0_1_ = script_fn_068ca7();
            local_1c._0_1_ = (byte)local_1c & 1;
            *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xfe;
            goto LAB_00068c31;
          }
          local_1c._0_1_ = scrsupp_update_player_dungeon_069220();
        }
        local_1c._0_1_ = (byte)local_1c & 1;
        *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xfe;
      }
LAB_00068c31:
      *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) | (byte)local_1c;
      if (((*(byte *)(val_2 + 1) & 1) == 0) || ((*(byte *)(val_2 + 1) & 2) != 0)) {
        *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xfb;
      }
      else {
        *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) | 6;
      }
    }
    else {
      *(byte *)(val_2 + 1) = *(byte *)(val_2 + 1) & 0xfe;
    }
    uval_2 = uval_2 + 1;
    val_2 = val_2 + 6;
  } while( true );
}

/******************************************************************************
 * Function : script_fn_068ca7 (Original VA: 0x68ca7, Ghidra: FUN_00068ca7)
 * Prototype: bool script_fn_068ca7(void);
 * Address  : 0x68ca7 (Size: 64 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x068ca7
 * Callers  : 1 -> script_fn_068b37
 * Callees  : 0 -> 
 ******************************************************************************/
bool script_fn_068ca7(void)

{
  undefined1 arg_al;
  int arg_edx;
  int arg_ebx;
  
  switch(arg_al) {
  case 1:
    return arg_edx == arg_ebx;
  case 2:
    return arg_edx != arg_ebx;
  case 3:
    return arg_edx < arg_ebx;
  case 4:
    return arg_ebx < arg_edx;
  case 5:
    return arg_edx <= arg_ebx;
  case 6:
    return arg_ebx <= arg_edx;
  default:
    return false;
  }
}

/******************************************************************************
 * Function : script_fn_068cc0 (Original VA: 0x68cc0, Ghidra: FUN_00068cc0)
 * Prototype: bool script_fn_068cc0(void);
 * Address  : 0x68cc0 (Size: 7 bytes)
 * Module   : script.cpp [address_order_boundary_interpolation]
 * Purpose  : Module script.cpp procedure @ 0x068cc0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool script_fn_068cc0(void)

{
  int arg_eax;
  int arg_ebx;
  
  return arg_eax == arg_ebx;
}

