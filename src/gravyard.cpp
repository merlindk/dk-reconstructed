/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: gravyard.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 11
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : gravyard_fn_0391e9 (Original VA: 0x391e9, Ghidra: FUN_000391e9)
 * Prototype: void gravyard_fn_0391e9(void);
 * Address  : 0x391e9 (Size: 25 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Module gravyard.cpp procedure @ 0x0391e9
 * Callers  : 1 -> gravyard_fn_039202
 * Callees  : 1 -> watcom_crt_fn_1295e0
 ******************************************************************************/
void gravyard_fn_0391e9(void)

{
  watcom_crt_fn_1295e0();
  watcom_crt_fn_1295e0();
  return;
}

/******************************************************************************
 * Function : gravyard_fn_039202 (Original VA: 0x39202, Ghidra: FUN_00039202)
 * Prototype: void gravyard_fn_039202(void);
 * Address  : 0x39202 (Size: 195 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Module gravyard.cpp procedure @ 0x039202
 * Callers  : 1 -> good_fn_03919b
 * Callees  : 1 -> gravyard_fn_0391e9
 ******************************************************************************/
void gravyard_fn_039202(void)

{
  undefined4 uval;
  undefined1 uval_2;
  int arg_eax;
  
  uval_2 = g_data_00186fad;
  uval = g_data_00184290;
  g_data_00184290 = (&g_bss_002f18e3)[arg_eax];
  g_data_00186fad = 5;
  gravyard_fn_0391e9();
  g_data_00184290 = uval;
  g_data_00186fad = uval_2;
  return;
}

/******************************************************************************
 * Function : gravyard_fn_0392c5 (Original VA: 0x392c5, Ghidra: FUN_000392c5)
 * Prototype: void gravyard_fn_0392c5(int param_1,int param_2,int param_3);
 * Address  : 0x392c5 (Size: 1278 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Module gravyard.cpp procedure @ 0x0392c5
 * Callers  : 1 -> good_fn_03915c
 * Callees  : 0 -> 
 ******************************************************************************/
void gravyard_fn_0392c5(int param_1,int param_2,int param_3)

{
  byte flag;
  int arg_eax;
  byte *byte_ptr;
  int *int_ptr;
  int arg_ecx;
  uint arg_edx;
  int arg_ebx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  undefined4 local_1228;
  undefined4 local_828;
  byte *local_a8;
  byte *local_a4;
  byte *local_a0;
  byte *local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  byte *local_7c;
  int local_78;
  byte *local_74;
  byte *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 *local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_84 = arg_eax;
  if (arg_edx < 0x30) {
    if (arg_edx < 0x10) {
      if (arg_edx != 0) {
        return;
      }
      local_2c = (int)(0x1fffff / (longlong)param_2);
      local_30 = (int)(0x1fffff / (longlong)param_3);
      local_1c = 0;
    }
    else {
      if (0x10 < arg_edx) {
        if (arg_edx != 0x20) {
          return;
        }
        local_2c = (int)(0x1fffff / (longlong)param_2);
        local_30 = (int)(-0x1fffff / (longlong)param_3);
        local_1c = 0;
        local_20 = 0x1fffff;
        goto LAB_00039382;
      }
      local_2c = (int)(-0x1fffff / (longlong)param_2);
      local_30 = (int)(0x1fffff / (longlong)param_3);
      local_1c = 0x1fffff;
    }
    local_20 = 0;
LAB_00039382:
    if (arg_ecx < 0) {
      param_2 = param_2 + arg_ecx;
      if (param_2 < 0) {
        return;
      }
      local_1c = local_1c - arg_ecx * local_2c;
      arg_ecx = 0;
    }
    if ((arg_ecx + param_2 <= g_data_0018429c) || (param_2 = g_data_0018429c - arg_ecx, -1 < param_2)) {
      if (param_1 < 0) {
        param_3 = param_3 + param_1;
        if (param_3 < 0) {
          return;
        }
        local_20 = local_20 - param_1 * local_30;
        param_1 = 0;
      }
      if ((param_1 + param_3 <= g_data_001842a0) || (param_3 = g_data_001842a0 - param_1, -1 < param_3)) {
        local_78 = param_2;
        local_3c = &local_1228;
        while (local_78 != 0) {
          local_78 = local_78 + -1;
          *local_3c = local_1c;
          local_3c = local_3c + 1;
          local_1c = local_1c + local_2c;
        }
        local_6c = param_3;
        local_48 = &local_828;
        while (local_6c != 0) {
          local_6c = local_6c + -1;
          *local_48 = local_20;
          local_48 = local_48 + 1;
          local_20 = local_20 + local_30;
        }
        word_ptr_2 = (undefined1 *)(param_1 * g_data_00184298 + g_data_0018428c + arg_ecx);
        local_80 = (&g_bss_002f18e3)[local_84];
        int_ptr = &local_828;
        local_a4 = (byte *)((int)&local_1228 + 2);
        if (arg_ebx < 0) {
          local_a8 = local_a4;
          for (local_64 = param_3; local_64 != 0; local_64 = local_64 + -1) {
            local_98 = local_80 + (*int_ptr >> 8 & 0xff00U);
            local_4c = param_2;
            local_74 = local_a4;
            word_ptr = word_ptr_2;
            while (local_4c != 0) {
              flag = *local_74;
              local_4c = local_4c + -1;
              local_74 = local_74 + 4;
              *word_ptr = *(undefined1 *)(local_98 + (uint)flag);
              word_ptr = word_ptr + 1;
            }
            int_ptr = int_ptr + 1;
            word_ptr_2 = word_ptr_2 + g_data_00184298;
          }
        }
        else {
          for (local_60 = param_3; local_60 != 0; local_60 = local_60 + -1) {
            local_50 = word_ptr_2;
            local_44 = param_2;
            local_94 = local_80 + (*int_ptr >> 8 & 0xff00U);
            byte_ptr = local_a4;
            while (word_ptr = local_50, local_44 != 0) {
              flag = *byte_ptr;
              local_44 = local_44 + -1;
              byte_ptr = byte_ptr + 4;
              local_50 = local_50 + 1;
              *word_ptr = (&g_pixmap_fade_tables)[(uint)*(byte *)((uint)flag + local_94) + arg_ebx * 0x100]
              ;
            }
            int_ptr = int_ptr + 1;
            word_ptr_2 = word_ptr_2 + g_data_00184298;
          }
        }
      }
    }
    return;
  }
  if (arg_edx < 0x31) {
    local_2c = (int)(-0x1fffff / (longlong)param_2);
    local_30 = (int)(-0x1fffff / (longlong)param_3);
    local_1c = 0x1fffff;
    local_20 = 0x1fffff;
    goto LAB_00039382;
  }
  if (arg_edx < 0x50) {
    if (arg_edx != 0x40) {
      return;
    }
    local_28 = (int)(0x1fffff / (longlong)param_3);
    local_24 = (int)(0x1fffff / (longlong)param_2);
    local_14 = 0;
  }
  else {
    if (arg_edx < 0x51) {
      local_28 = (int)(0x1fffff / (longlong)param_3);
      local_24 = (int)(-0x1fffff / (longlong)param_2);
      local_14 = 0;
      local_18 = 0x1fffff;
      goto LAB_000395b2;
    }
    if (arg_edx < 0x60) {
      return;
    }
    if (0x60 < arg_edx) {
      if (arg_edx != 0x70) {
        return;
      }
      local_28 = (int)(-0x1fffff / (longlong)param_3);
      local_24 = (int)(-0x1fffff / (longlong)param_2);
      local_14 = 0x1fffff;
      local_18 = 0x1fffff;
      goto LAB_000395b2;
    }
    local_28 = (int)(-0x1fffff / (longlong)param_3);
    local_24 = (int)(0x1fffff / (longlong)param_2);
    local_14 = 0x1fffff;
  }
  local_18 = 0;
LAB_000395b2:
  if (arg_ecx < 0) {
    param_2 = param_2 + arg_ecx;
    if (param_2 < 0) {
      return;
    }
    local_18 = local_18 - arg_ecx * local_24;
    arg_ecx = 0;
  }
  if ((g_data_0018429c < arg_ecx + param_2) && (param_2 = g_data_0018429c - arg_ecx, param_2 < 0)) {
    return;
  }
  if (param_1 < 0) {
    param_3 = param_3 + param_1;
    if (param_3 < 0) {
      return;
    }
    local_14 = local_14 - param_1 * local_28;
    param_1 = 0;
  }
  if ((g_data_001842a0 < param_1 + param_3) && (param_3 = g_data_001842a0 - param_1, param_3 < 0)) {
    return;
  }
  int_ptr = &local_1228;
  local_54 = param_3;
  while (local_54 != 0) {
    local_54 = local_54 + -1;
    *int_ptr = local_14;
    int_ptr = int_ptr + 1;
    local_14 = local_14 + local_28;
  }
  local_34 = param_2;
  local_40 = &local_828;
  while (local_34 != 0) {
    local_34 = local_34 + -1;
    *local_40 = local_18;
    local_40 = local_40 + 1;
    local_18 = local_18 + local_24;
  }
  word_ptr_2 = (undefined1 *)(g_data_00184298 * param_1 + g_data_0018428c + arg_ecx);
  local_88 = (&g_bss_002f18e3)[local_84];
  local_9c = (byte *)((int)&local_828 + 2);
  int_ptr = &local_1228;
  if (arg_ebx < 0) {
    local_a0 = local_9c;
    for (local_68 = param_3; local_68 != 0; local_68 = local_68 + -1) {
      local_90 = local_88 + (*int_ptr >> 0x10 & 0xffU);
      local_5c = param_2;
      local_70 = local_9c;
      word_ptr = word_ptr_2;
      while (local_5c != 0) {
        flag = *local_70;
        local_5c = local_5c + -1;
        local_70 = local_70 + 4;
        *word_ptr = *(undefined1 *)((uint)flag * 0x100 + local_90);
        word_ptr = word_ptr + 1;
      }
      int_ptr = int_ptr + 1;
      word_ptr_2 = word_ptr_2 + g_data_00184298;
    }
    return;
  }
  for (local_38 = param_3; local_38 != 0; local_38 = local_38 + -1) {
    local_8c = local_88 + (*int_ptr >> 0x10 & 0xffU);
    local_58 = param_2;
    local_7c = local_9c;
    word_ptr = word_ptr_2;
    while (local_58 != 0) {
      flag = *local_7c;
      local_58 = local_58 + -1;
      local_7c = local_7c + 4;
      *word_ptr = (&g_pixmap_fade_tables)[(uint)*(byte *)((uint)flag * 0x100 + local_8c) + arg_ebx * 0x100]
      ;
      word_ptr = word_ptr + 1;
    }
    int_ptr = int_ptr + 1;
    word_ptr_2 = word_ptr_2 + g_data_00184298;
  }
  return;
}

/******************************************************************************
 * Function : gravyard_fn_0397c3 (Original VA: 0x397c3, Ghidra: FUN_000397c3)
 * Prototype: void gravyard_fn_0397c3(void);
 * Address  : 0x397c3 (Size: 239 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Module gravyard.cpp procedure @ 0x0397c3
 * Callers  : 3 -> draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void gravyard_fn_0397c3(void)

{
  byte *extraout_ECX;
  byte *byte_ptr;
  byte *arg_ebx;
  int val;
  byte *byte_ptr_2;
  int local_18;
  int local_10;
  
  local_18 = 0;
  byte_ptr_2 = arg_ebx;
  do {
    if ((int)(uint)arg_ebx[1] <= local_18) {
      return;
    }
    byte_ptr = byte_ptr_2;
    for (local_10 = 0; local_10 < (int)(uint)*arg_ebx; local_10 = local_10 + 1) {
      val = local_18;
      if (*(short *)(byte_ptr + 2) == 0) {
        do {
          val = val + -1;
          if (val < 0) break;
        } while (*(short *)(arg_ebx + local_10 * 2 + val * 0x14 + 2) == 0);
      }
      else {
        watcom_crt_fn_13a710();
        byte_ptr = extraout_ECX;
      }
      byte_ptr = byte_ptr + 2;
    }
    byte_ptr_2 = byte_ptr_2 + 0x14;
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : gravyard_creature_already_decomposing_graveyard_0398b4 (Original VA: 0x398b4, Ghidra: FUN_000398b4)
 * Prototype: void gravyard_creature_already_decomposing_graveyard_0398b4(void);
 * Address  : 0x398b4 (Size: 77 bytes)
 * Module   : gravyard.cpp [direct_file_string_xref]
 * OrigLine : gravyard.cpp lines 21
 * Purpose  : String 'Creature already decomposing in graveyard'
 * Callers  : 1 -> person_update_creature_and_thing_0649ad
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void gravyard_creature_already_decomposing_graveyard_0398b4(void)

{
  undefined2 uval;
  int arg_eax;
  int arg_edx;
  
  if ((*(ushort *)(arg_edx + 0x10) < *(ushort *)(arg_edx + 0xe)) && (*(char *)(arg_eax + 0x14) == '\0')
     ) {
    *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) + 1;
    uval = g_bss_002eb9fe;
    *(undefined1 *)(arg_eax + 0x14) = 1;
    *(undefined2 *)(arg_eax + 0x5e) = uval;
    return;
  }
  LbErrorLog(); /* LbErrorLog("gravyard.cpp", line 21, "Graveyard has no space for another corpse") */
  return;
}

/******************************************************************************
 * Function : gravyard_could_find_valid_position_039901 (Original VA: 0x39901, Ghidra: FUN_00039901)
 * Prototype: undefined8 gravyard_could_find_valid_position_039901(void);
 * Address  : 0x39901 (Size: 215 bytes)
 * Module   : gravyard.cpp [direct_file_string_xref]
 * OrigLine : gravyard.cpp lines 58, 68
 * Purpose  : String 'COULD NOT FIND VALID POSITION IN ROOM'
 * Callers  : 1 -> gravyard_thing_was_graveyard_removed_0399d8
 * Callees  : 7 -> effect_allocate_light_effect_024998, inits_told_you_so_create_043bb3, moodneed_fn_051374, structs_update_creature_control_072af4, move_fn_0b3b10, room_number_slabs_room_zero_0cc968, LbErrorLog
 ******************************************************************************/
undefined8 gravyard_could_find_valid_position_039901(void)

{
  char ch;
  char ch_2;
  int arg_eax;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  ch = *(char *)(arg_eax + 3);
  val = inits_told_you_so_create_043bb3();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("gravyard.cpp", line 58, "COULD NOT FIND VALID POSITION IN ROOM") */
  }
  else {
    ch_2 = room_number_slabs_room_zero_0cc968();
    if (ch_2 != '\0') {
      move_fn_0b3b10();
      *(int *)(&g_bss_002e1840 + ch * 0x1508) = *(int *)(&g_bss_002e1840 + ch * 0x1508) + 1;
      effect_allocate_light_effect_024998();
      if ((int)ch == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
      uval = 1;
      goto LAB_000399d1;
    }
    LbErrorLog(); /* LbErrorLog("gravyard.cpp", line 68, "COULD NOT CREATE CREATURE") */
    structs_update_creature_control_072af4();
  }
  uval = 0;
LAB_000399d1:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : gravyard_thing_was_graveyard_removed_0399d8 (Original VA: 0x399d8, Ghidra: FUN_000399d8)
 * Prototype: void gravyard_thing_was_graveyard_removed_0399d8(void);
 * Address  : 0x399d8 (Size: 156 bytes)
 * Module   : gravyard.cpp [direct_file_string_xref]
 * OrigLine : gravyard.cpp lines 107
 * Purpose  : String 'Thing was not in graveyard to be removed'
 * Callers  : 1 -> update_process_map_subtile_0e2a14
 * Callees  : 3 -> gravyard_could_find_valid_position_039901, room_update_slab_subtile_columns_0d0f50, LbErrorLog
 ******************************************************************************/
void gravyard_thing_was_graveyard_removed_0399d8(void)

{
  int arg_eax;
  int val;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if ((val != 0) && (*(short *)(val + 10) == 0xb)) {
    if ((*(short *)(val + 0x10) == 0) || (*(char *)(arg_eax + 0x14) == '\0')) {
      LbErrorLog(); /* LbErrorLog("gravyard.cpp", line 107, "Graveyard had no capacity to remove body from") */
    }
    else {
      *(short *)(val + 0x10) = *(short *)(val + 0x10) + -1;
      *(undefined1 *)(arg_eax + 0x14) = 0;
      val = *(char *)(val + 3) * 0x1508;
      (&g_bss_002e19e9)[val] = (&g_bss_002e19e9)[val] + '\x01';
      *(int *)(&g_bss_002e183c + val) = *(int *)(&g_bss_002e183c + val) + 1;
      if (g_bss_002ed44f < (byte)(&g_bss_002e19e9)[val]) {
        (&g_bss_002e19e9)[val] = (&g_bss_002e19e9)[val] - g_bss_002ed44f;
        gravyard_could_find_valid_position_039901();
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : gravyard_update_creature_control_039a74 (Original VA: 0x39a74, Ghidra: FUN_00039a74)
 * Prototype: undefined4 gravyard_update_creature_control_039a74(void);
 * Address  : 0x39a74 (Size: 304 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> angtool_update_creature_and_thing_011214, barracks_update_creature_and_thing_013acd, script_party_big_0688a4, setup_compute_creature_eye_offset
 * Callees  : 2 -> group_update_creature_and_thing_039c3e, group_update_creature_and_thing_039dab
 ******************************************************************************/
undefined4 gravyard_update_creature_control_039a74(void)

{
  ushort *word_ptr;
  ushort cctrl_ptr;
  byte *thing;
  undefined4 extraout_ECX;
  int thing_ptr;
  byte *byte_ptr;
  undefined4 extraout_EDX;
  int thing_ptr_2;
  undefined8 uval;
  
  uval = group_update_creature_and_thing_039dab();
  byte_ptr = (byte *)((ulonglong)uval >> 0x20);
  if ((thing != byte_ptr) && (thing[6] == byte_ptr[6])) {
    if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7a) & 0xfff) != 0) { /* thing->ccontrol_idx */
      group_update_creature_and_thing_039c3e();
      uval = CONCAT44(extraout_EDX,extraout_ECX);
    }
    thing_ptr_2 = (int)((ulonglong)uval >> 0x20);
    thing_ptr = (int)uval;
    if (thing_ptr == 0) {
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x78) = /* thing->ccontrol_idx */
           *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x76) = /* thing->ccontrol_idx */
           *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
      cctrl_ptr = *(ushort *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
      thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
      word_ptr = (ushort *)(thing_ptr + 0x7a);
      *word_ptr = *word_ptr & 0xf000;
      word_ptr = (ushort *)(thing_ptr + 0x7a);
      *word_ptr = *word_ptr | cctrl_ptr & 0xfff;
      cctrl_ptr = *(ushort *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
      thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)]; /* thing->ccontrol_idx */
      word_ptr = (ushort *)(thing_ptr + 0x7a);
      *word_ptr = *word_ptr & 0xf000;
      word_ptr = (ushort *)(thing_ptr + 0x7a);
      *word_ptr = *word_ptr | cctrl_ptr & 0xfff;
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x76) = 0; /* thing->ccontrol_idx */
      *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7b) = /* thing->ccontrol_idx */
           *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7b) & 0xf; /* thing->ccontrol_idx */
    }
    else {
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x78) = /* thing->ccontrol_idx */
           *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x76) = /* thing->ccontrol_idx */
           *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7a); /* thing->ccontrol_idx */
      thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
      word_ptr = (ushort *)(thing_ptr + 0x7a);
      *word_ptr = *word_ptr & 0xf000;
      word_ptr = (ushort *)(thing_ptr + 0x7a);
      *word_ptr = *word_ptr | cctrl_ptr & 0xfff;
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x76) = 0; /* thing->ccontrol_idx */
    }
    *thing = *thing | 0x40;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : gravyard_update_creature_control_039ba4 (Original VA: 0x39ba4, Ghidra: FUN_00039ba4)
 * Prototype: undefined4 gravyard_update_creature_control_039ba4(void);
 * Address  : 0x39ba4 (Size: 154 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 5 -> angtool_update_creature_and_thing_011214, barracks_update_creature_and_thing_013acd, gravyard_fn_039d55, script_party_big_0688a4, script_process_thing_entity_068ad7
 * Callees  : 3 -> group_update_creature_and_thing_039c3e, gravyard_update_creature_and_thing_039d83, group_update_creature_and_thing_039de2
 ******************************************************************************/
undefined4 gravyard_update_creature_control_039ba4(void)

{
  ushort *word_ptr;
  ushort uval;
  int cctrl_ptr;
  byte *thing;
  byte *extraout_ECX;
  byte *thing_ptr;
  byte *byte_ptr;
  undefined8 uval_2;
  
  uval_2 = gravyard_update_creature_and_thing_039d83();
  byte_ptr = (byte *)((ulonglong)uval_2 >> 0x20);
  thing_ptr = (byte *)uval_2;
  if ((byte *)uval_2 == (byte *)0x0) {
    thing_ptr = byte_ptr;
  }
  if ((thing != byte_ptr) && (thing[6] == byte_ptr[6])) {
    if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7a) & 0xfff) != 0) { /* thing->ccontrol_idx */
      group_update_creature_and_thing_039c3e();
      thing_ptr = extraout_ECX;
    }
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x76) = /* thing->ccontrol_idx */
         *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x78) = /* thing->ccontrol_idx */
         *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
    *thing_ptr = *thing_ptr | 0x40;
    uval = *(ushort *)(thing + 0x1b); /* thing->index_or_angle */
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    word_ptr = (ushort *)(cctrl_ptr + 0x7a);
    *word_ptr = *word_ptr & 0xf000;
    word_ptr = (ushort *)(cctrl_ptr + 0x7a);
    *word_ptr = *word_ptr | uval & 0xfff;
    group_update_creature_and_thing_039de2();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : gravyard_fn_039d55 (Original VA: 0x39d55, Ghidra: FUN_00039d55)
 * Prototype: longlong gravyard_fn_039d55(void);
 * Address  : 0x39d55 (Size: 46 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Module gravyard.cpp procedure @ 0x039d55
 * Callers  : 2 -> process_players_dungeon_command_packet, creature_allocate_light_new_hero_080a94
 * Callees  : 3 -> gravyard_update_creature_control_039ba4, group_update_creature_and_thing_039c3e, gravyard_update_creature_and_thing_039d83
 ******************************************************************************/
longlong gravyard_fn_039d55(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = gravyard_update_creature_and_thing_039d83();
  if ((val != 0) && (val != arg_eax)) {
    group_update_creature_and_thing_039c3e();
    gravyard_update_creature_control_039ba4();
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : gravyard_update_creature_and_thing_039d83 (Original VA: 0x39d83, Ghidra: FUN_00039d83)
 * Prototype: undefined4 gravyard_update_creature_and_thing_039d83(void);
 * Address  : 0x39d83 (Size: 40 bytes)
 * Module   : gravyard.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 9 -> angtool_update_creature_and_thing_011214, barracks_update_creature_control_013809, barracks_update_creature_control_0138c9, gravyard_update_creature_control_039ba4, gravyard_fn_039d55, group_update_creature_and_thing_039e36, group_fn_039e7e, group_update_creature_and_thing_039e90 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 gravyard_update_creature_and_thing_039d83(void)

{
  int thing;
  
  if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7a) & 0xfff) != 0) { /* thing->ccontrol_idx */
    return (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7a) & 0xfff]; /* thing->ccontrol_idx */
  }
  return 0;
}

