/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: temple.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 21
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : temple_creatures_temple_072eab (Original VA: 0x72eab, Ghidra: FUN_00072eab)
 * Prototype: longlong temple_creatures_temple_072eab(void);
 * Address  : 0x72eab (Size: 76 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp lines 23
 * Purpose  : String 'NO CREATURES IN TEMPLE'
 * Callers  : 1 -> temple_fn_072ef7
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong temple_creatures_temple_072eab(void)

{
  char *str_ptr;
  int dungeon_off;
  int arg_eax;
  uint arg_edx;
  
  dungeon_off = (uint)*(byte *)(arg_eax + 0x1a) + *(char *)(arg_eax + 6) * 0x1508;
  if (*(char *)((int)&g_dungeons + dungeon_off + 0x8b4) == '\0') {
    LbErrorLog(); /* LbErrorLog("temple.cpp", line 23, "NO CREATURES IN TEMPLE") */
    return (ulonglong)arg_edx << 0x20;
  }
  str_ptr = (char *)((int)&g_dungeons + dungeon_off + 0x8b4);
  *str_ptr = *str_ptr + -1;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : temple_fn_072ef7 (Original VA: 0x72ef7, Ghidra: FUN_00072ef7)
 * Prototype: undefined8 temple_fn_072ef7(void);
 * Address  : 0x72ef7 (Size: 17 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Module temple.cpp procedure @ 0x072ef7
 * Callers  : 0 -> 
 * Callees  : 2 -> person_fn_064e59, temple_creatures_temple_072eab
 ******************************************************************************/
undefined8 temple_fn_072ef7(void)

{
  undefined4 arg_edx;
  
  temple_creatures_temple_072eab();
  person_fn_064e59();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : temple_update_creature_control_072f08 (Original VA: 0x72f08, Ghidra: FUN_00072f08)
 * Prototype: undefined8 temple_update_creature_control_072f08(void);
 * Address  : 0x72f08 (Size: 74 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> temple_update_creature_control_072fbc, room_update_creature_control_0cb33c
 * Callees  : 1 -> spell_update_creature_control_071edd
 ******************************************************************************/
undefined8 temple_update_creature_control_072f08(void)

{
  int cctrl_ptr;
  int thing;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(byte *)(cctrl_ptr + 0xad) & 1) != 0) {
    spell_update_creature_control_071edd();
  }
  if ((*(byte *)(cctrl_ptr + 0xad) & 2) != 0) {
    spell_update_creature_control_071edd();
  }
  *(undefined4 *)(cctrl_ptr + 0x3d) = g_game_turn;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : temple_update_creature_control_072f52 (Original VA: 0x72f52, Ghidra: FUN_00072f52)
 * Prototype: undefined4 temple_update_creature_control_072f52(void);
 * Address  : 0x72f52 (Size: 106 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> temple_fn_0730e8
 * Callees  : 2 -> instance_negative_instance_049bfc, temple_this_should_happen_073d41
 ******************************************************************************/
undefined4 temple_update_creature_control_072f52(void)

{
  int thing;
  int cctrl_ptr;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(char *)(cctrl_ptr + 0xd2) == '\0') {
    if (*(int *)(cctrl_ptr + 0x82) < 0x79) {
      cctrl_ptr = temple_this_should_happen_073d41();
      if (cctrl_ptr != 0) {
        return 1;
      }
    }
    else if (*(int *)(cctrl_ptr + 0x82) + -0x78 < 0x32) {
      instance_negative_instance_049bfc(0);
    }
    else {
      *(undefined4 *)(cctrl_ptr + 0x82) = 0;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : temple_update_creature_control_072fbc (Original VA: 0x72fbc, Ghidra: FUN_00072fbc)
 * Prototype: undefined8 temple_update_creature_control_072fbc(void);
 * Address  : 0x72fbc (Size: 124 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> temple_fn_0730e8
 * Callees  : 5 -> anger_fn_010434, person_fn_063b6d, scavenge_fn_067018, scavenge_fn_06709c, temple_update_creature_control_072f08
 ******************************************************************************/
undefined8 temple_update_creature_control_072fbc(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = scavenge_fn_06709c();
  if (val != 0) {
    scavenge_fn_067018();
    anger_fn_010434();
    temple_update_creature_control_072f08();
    *(int *)(cctrl_ptr + 0x82) = *(int *)(cctrl_ptr + 0x82) + 1;
  }
  else {
    person_fn_063b6d();
  }
  return CONCAT44(arg_edx,(uint)(val == 0));
}

/******************************************************************************
 * Function : temple_update_creature_control_073038 (Original VA: 0x73038, Ghidra: FUN_00073038)
 * Prototype: longlong temple_update_creature_control_073038(void);
 * Address  : 0x73038 (Size: 176 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 7 -> moodneed_fn_051374, person_fn_063b6d, person_update_creature_control_064ae7, structs_update_player_dungeon_072e88, room_attempt_add_creature_room_0cd85c, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong temple_update_creature_control_073038(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0x80) = 0;
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 10)) &&
     (*(char *)(val + 3) == *(char *)(extraout_ECX + 6))) {
    ch = room_attempt_add_creature_room_0cd85c();
    if (ch != '\0') {
      person_update_creature_control_064ae7();
      structs_update_player_dungeon_072e88();
      *(undefined4 *)(cctrl_ptr + 0x82) = 0;
      return CONCAT44(arg_edx,1);
    }
    if ((int)*(char *)(val + 3) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      moodneed_fn_051374();
    }
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : temple_fn_0730e8 (Original VA: 0x730e8, Ghidra: FUN_000730e8)
 * Prototype: longlong temple_fn_0730e8(void);
 * Address  : 0x730e8 (Size: 101 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Module temple.cpp procedure @ 0x0730e8
 * Callers  : 0 -> 
 * Callees  : 5 -> person_fn_063b6d, temple_update_creature_control_072f52, temple_update_creature_control_072fbc, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong temple_fn_0730e8(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if ((((val != 0) && (*(short *)(val + 10) == 10)) &&
      (*(short *)(val + 1) == *(short *)(extraout_ECX + 0x7e))) &&
     (*(char *)(val + 3) == *(char *)(arg_eax + 6))) {
    val = temple_update_creature_control_072fbc();
    if (val == 0) {
      temple_update_creature_control_072f52();
    }
    return CONCAT44(arg_edx,1);
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : temple_update_player_dungeon_07314d (Original VA: 0x7314d, Ghidra: FUN_0007314d)
 * Prototype: longlong temple_update_player_dungeon_07314d(void);
 * Address  : 0x7314d (Size: 47 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> temple_process_slabmap_tile_073d8d
 * Callees  : 0 -> 
 ******************************************************************************/
longlong temple_update_player_dungeon_07314d(void)

{
  int arg_eax;
  int dungeon_off;
  uint arg_edx;
  
  dungeon_off = *(char *)(arg_eax + 6) * 0x1508;
  if (*(char *)(arg_eax + 0x1a) == '\n') {
    (&g_bss_002e0e5d)[dungeon_off] = (&g_bss_002e0e5d)[dungeon_off] + '\x01';
    return (ulonglong)arg_edx << 0x20;
  }
  (&g_bss_002e0e5e)[dungeon_off] = (&g_bss_002e0e5e)[dungeon_off] + '\x01';
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : temple_could_create_creature_07317c (Original VA: 0x7317c, Ghidra: FUN_0007317c)
 * Prototype: undefined4 temple_could_create_creature_07317c(void);
 * Address  : 0x7317c (Size: 119 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp lines 288
 * Purpose  : String 'COULD NOT CREATE CREATURE'
 * Callers  : 1 -> temple_how_you_sacrifice_neutral_0731f3
 * Callees  : 4 -> inits_told_you_so_create_043bb3, person_update_creature_control_064ae7, creature_update_creature_control_08240c, LbErrorLog
 ******************************************************************************/
undefined4 temple_could_create_creature_07317c(void)

{
  int thing_ptr;
  int extraout_ECX;
  int arg_ebx;
  
  *(int *)(&g_bss_002e17d8 + arg_ebx * 0x1508) = *(int *)(&g_bss_002e17d8 + arg_ebx * 0x1508) + 1;
  thing_ptr = inits_told_you_so_create_043bb3();
  if (thing_ptr != 0) {
    creature_update_creature_control_08240c();
    person_update_creature_control_064ae7();
    *(int *)(&g_bss_002e17d8 + extraout_ECX) = *(int *)(&g_bss_002e17d8 + extraout_ECX) + 1;
    *(byte *)(thing_ptr + 0x25) = *(byte *)(thing_ptr + 0x25) | 4;
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x9c) = 0x30; /* thing->ccontrol_idx */
    return 1;
  }
  LbErrorLog(); /* LbErrorLog("temple.cpp", line 288, "COULD NOT CREATE CREATURE") */
  return 0;
}

/******************************************************************************
 * Function : temple_how_you_sacrifice_neutral_0731f3 (Original VA: 0x731f3, Ghidra: FUN_000731f3)
 * Prototype: undefined4 temple_how_you_sacrifice_neutral_0731f3(void);
 * Address  : 0x731f3 (Size: 977 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp lines 496
 * Purpose  : String 'HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?'
 * Callers  : 1 -> temple_sacrifice_return_073765
 * Callees  : 7 -> angtool_update_creature_and_thing_011db9, research_update_player_dungeon_066d65, spell_update_creature_and_thing_071e97, temple_could_create_creature_07317c, workshop_update_player_dungeon_076d14, food_update_creature_and_thing_0abf38, LbErrorLog
 ******************************************************************************/
undefined4 temple_how_you_sacrifice_neutral_0731f3(void)

{
  char ch;
  uint arg_edx;
  int arg_ebx;
  int dungeon_off;
  
  if (4 < arg_ebx) {
    LbErrorLog(); /* LbErrorLog("temple.cpp", line 496, "HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?") */
    return 0;
  }
  dungeon_off = arg_ebx * 0x1508;
  if (arg_edx < 0x16) {
    if (arg_edx < 0x10) {
      if (arg_edx != 0xe) {
        return 0;
      }
      if ((&g_bss_002e0e6d)[dungeon_off] == '\0') {
        return 0xffffffff;
      }
      angtool_update_creature_and_thing_011db9();
      (&g_bss_002e0e6d)[dungeon_off] = 0;
      (&g_bss_002e0e8d)[dungeon_off] = 0;
      return 3;
    }
    if (arg_edx < 0x11) {
LAB_000733ea:
      if ((((&g_bss_002e0e73)[dungeon_off] != '\0') && ((&g_bss_002e0e75)[dungeon_off] != '\0')) &&
         ((&g_bss_002e0e6f)[dungeon_off] != '\0')) {
        temple_could_create_creature_07317c();
        (&g_bss_002e0e73)[dungeon_off] = 0;
        (&g_bss_002e0e75)[dungeon_off] = 0;
        (&g_bss_002e0e6f)[dungeon_off] = 0;
        (&g_bss_002e0e93)[dungeon_off] = 0;
        (&g_bss_002e0e95)[dungeon_off] = 0;
        (&g_bss_002e0e8f)[dungeon_off] = 0;
        return 2;
      }
      return 1;
    }
    if (arg_edx < 0x13) {
      return 0;
    }
    if (0x13 < arg_edx) {
      if (arg_edx != 0x14) {
        return 0;
      }
      goto LAB_000733ea;
    }
    if (1 < (byte)(&g_bss_002e0e72)[dungeon_off]) {
      research_update_player_dungeon_066d65();
      (&g_bss_002e0e72)[dungeon_off] = 0;
      (&g_bss_002e0e92)[dungeon_off] = 0;
      return 2;
    }
    if ((&g_bss_002e0e72)[dungeon_off] == '\0') {
      return 1;
    }
    if ((&g_bss_002e0e79)[dungeon_off] == '\0') {
      return 1;
    }
LAB_00073287:
    temple_could_create_creature_07317c();
    (&g_bss_002e0e72)[dungeon_off] = 0;
    (&g_bss_002e0e92)[dungeon_off] = 0;
  }
  else {
    if (arg_edx < 0x17) {
      if (1 < (byte)(&g_bss_002e0e75)[dungeon_off]) {
        spell_update_creature_and_thing_071e97();
        (&g_bss_002e0e75)[dungeon_off] = 0;
        (&g_bss_002e0e95)[dungeon_off] = 0;
        return 3;
      }
      goto LAB_000733ea;
    }
    if (arg_edx < 0x19) {
      if (arg_edx < 0x18) {
        return 1;
      }
      if (1 < (byte)(&g_bss_002e0e77)[dungeon_off]) {
        workshop_update_player_dungeon_076d14();
        (&g_bss_002e0e77)[dungeon_off] = 0;
        (&g_bss_002e0e97)[dungeon_off] = 0;
        return 2;
      }
      if ((&g_bss_002e0e77)[dungeon_off] == '\0') {
        return 1;
      }
      ch = (&g_bss_002e0e79)[dungeon_off];
    }
    else {
      if (arg_edx < 0x1a) {
        if ((byte)(&g_bss_002e0e78)[dungeon_off] < 2) {
          return 0xffffffff;
        }
        spell_update_creature_and_thing_071e97();
        (&g_bss_002e0e78)[dungeon_off] = 0;
        (&g_bss_002e0e98)[dungeon_off] = 0;
        return 3;
      }
      if (0x1a < arg_edx) {
        if (arg_edx != 0x1c) {
          return 0;
        }
        if ((&g_bss_002e0e7b)[dungeon_off] == '\0') {
          return 0xffffffff;
        }
        food_update_creature_and_thing_0abf38();
        (&g_bss_002e0e7b)[dungeon_off] = 0;
        (&g_bss_002e0e9b)[dungeon_off] = 0;
        return 3;
      }
      if (2 < (byte)(&g_bss_002e0e79)[dungeon_off]) {
        temple_could_create_creature_07317c();
        goto LAB_00073302;
      }
      if (((&g_bss_002e0e72)[dungeon_off] != '\0') && ((&g_bss_002e0e79)[dungeon_off] != '\0')) goto LAB_00073287;
      if ((&g_bss_002e0e77)[dungeon_off] == '\0') {
        return 1;
      }
      ch = (&g_bss_002e0e79)[dungeon_off];
    }
    if (ch == '\0') {
      return 1;
    }
    temple_could_create_creature_07317c();
    (&g_bss_002e0e77)[dungeon_off] = 0;
    (&g_bss_002e0e97)[dungeon_off] = 0;
  }
LAB_00073302:
  (&g_bss_002e0e79)[dungeon_off] = 0;
  (&g_bss_002e0e99)[dungeon_off] = 0;
  return 2;
}

/******************************************************************************
 * Function : temple_how_you_sacrifice_neutral_0735c4 (Original VA: 0x735c4, Ghidra: FUN_000735c4)
 * Prototype: void temple_how_you_sacrifice_neutral_0735c4(void);
 * Address  : 0x735c4 (Size: 67 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp lines 516
 * Purpose  : String 'HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?'
 * Callers  : 1 -> temple_sacrifice_return_073765
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void temple_how_you_sacrifice_neutral_0735c4(void)

{
  char *str_ptr;
  int arg_eax;
  int dungeon_off;
  int arg_edx;
  char arg_bl;
  
  if (arg_eax < 5) {
    dungeon_off = arg_eax * 0x1508;
    str_ptr = (char *)((int)&g_dungeons + arg_edx + 0x8d6 + dungeon_off);
    *str_ptr = *str_ptr + '\x01';
    str_ptr = (char *)((int)&g_dungeons + arg_edx + 0x8f6 + dungeon_off);
    *str_ptr = *str_ptr + arg_bl + '\x01';
    *(int *)(&g_bss_002e17d0 + dungeon_off) = *(int *)(&g_bss_002e17d0 + dungeon_off) + 1;
    return;
  }
  LbErrorLog(); /* LbErrorLog("temple.cpp", line 516, "HOW CAN YOU SACRIFICE A NEUTRAL CREATURE?") */
  return;
}

/******************************************************************************
 * Function : temple_update_creature_control_073607 (Original VA: 0x73607, Ghidra: FUN_00073607)
 * Prototype: undefined8 temple_update_creature_control_073607(void);
 * Address  : 0x73607 (Size: 330 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 7 -> effect_allocate_light_effect_024998, person_fn_063b6d, person_update_creature_control_064ae7, ceiling_fn_07df48, light_process_map_subtile_0b2398, move_process_map_subtile_0b28e8, move_fn_0b4ac4
 ******************************************************************************/
undefined8 temple_update_creature_control_073607(void)

{
  short short_val;
  bool flag;
  int thing;
  int slab_coord;
  undefined4 uval;
  undefined4 arg_edx;
  
  if ((*(byte *)(thing + 0x25) & 0x20) != 0) {
    *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xdf;
  }
  short_val = *(short *)(thing + 0x11);
  slab_coord = light_process_map_subtile_0b2398((*(short *)(&g_subtile_to_slab_lut + *(byte *)(thing + 0xe)) * 3 + 1) * 0x100 + 0x80)
  ;
  if ((slab_coord < 0x126) || (0x12e < slab_coord)) {
    flag = false;
  }
  else {
    flag = true;
  }
  if (flag) {
    slab_coord = move_fn_0b4ac4(0);
    if (slab_coord != 0) {
      slab_coord = move_process_map_subtile_0b28e8();
      if (short_val == slab_coord) {
        slab_coord = ceiling_fn_07df48();
        if (slab_coord != 0) {
          *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a) = 0x30; /* thing->ccontrol_idx */
          *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9c) = 0x30; /* thing->ccontrol_idx */
          *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) | 4;
          person_update_creature_control_064ae7();
          *(undefined4 *)(thing + 0x13) = 0; /* thing->anim_sprite */
          effect_allocate_light_effect_024998();
        }
        goto LAB_00073686;
      }
    }
    uval = 0;
  }
  else {
    person_fn_063b6d();
LAB_00073686:
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : temple_sacrifice_return_073765 (Original VA: 0x73765, Ghidra: FUN_00073765)
 * Prototype: undefined8 temple_sacrifice_return_073765(void);
 * Address  : 0x73765 (Size: 364 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp lines 619
 * Purpose  : String 'INVALID SACRIFICE RETURN'
 * Callers  : 0 -> 
 * Callees  : 6 -> anger_fn_010132, moodneed_fn_051374, temple_how_you_sacrifice_neutral_0731f3, temple_how_you_sacrifice_neutral_0735c4, creature_how_hero_have_tend_08608c, LbErrorLog
 ******************************************************************************/
undefined8 temple_sacrifice_return_073765(void)

{
  short *val;
  int cctrl_ptr;
  int thing;
  undefined4 uval;
  undefined4 arg_edx;
  byte flag;
  undefined2 auStack_24 [2];
  uint local_20;
  uint local_1c;
  
  flag = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = (short *)(cctrl_ptr + 0x9a);
  *val = *val + -1;
  if (0 < *(short *)(cctrl_ptr + 0x9a)) {
    anger_fn_010132();
    *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xdf;
    uval = 0;
    goto LAB_00073032;
  }
  local_1c = (uint)*(byte *)(thing + 0x1a);
  local_20 = (uint)((&g_slabmap)
                    [((&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
                     (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55) * 6] & 7);
  temple_how_you_sacrifice_neutral_0735c4();
  auStack_24[(uint)flag * -4] = *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
  creature_how_hero_have_tend_08608c(0,0);
  uval = temple_how_you_sacrifice_neutral_0731f3();
  if ((byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == local_20) {
    switch(uval) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 0xffffffff:
      break;
    default:
      LbErrorLog(); /* LbErrorLog("temple.cpp", line 619, "INVALID SACRIFICE RETURN") */
      goto LAB_000738a6;
    }
    moodneed_fn_051374();
  }
LAB_000738a6:
  uval = 0xffffffff;
LAB_00073032:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : temple_fn_0738d1 (Original VA: 0x738d1, Ghidra: FUN_000738d1)
 * Prototype: undefined8 temple_fn_0738d1(void);
 * Address  : 0x738d1 (Size: 33 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Module temple.cpp procedure @ 0x0738d1
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 temple_fn_0738d1(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  if ((&g_bss_002e9188)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0') {
    *(byte *)(arg_eax + 0x25) = *(byte *)(arg_eax + 0x25) | 0x20;
  }
  *(byte *)(arg_eax + 0x25) = *(byte *)(arg_eax + 0x25) & 0xfb;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : temple_update_creature_control_0738f2 (Original VA: 0x738f2, Ghidra: FUN_000738f2)
 * Prototype: longlong temple_update_creature_control_0738f2(void);
 * Address  : 0x738f2 (Size: 199 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> anger_fn_010132, effect_allocate_light_effect_024998, lair_fn_04ccc2, person_fn_063b6d
 ******************************************************************************/
longlong temple_update_creature_control_0738f2(void)

{
  int cctrl_ptr;
  int thing;
  uint arg_edx;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [8];
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(cctrl_ptr + 0x9a) == 0) {
    lair_fn_04ccc2(local_1c,local_24,local_20);
    effect_allocate_light_effect_024998();
    *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) | 4;
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9a) = 1; /* thing->ccontrol_idx */
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9c) = 0x30; /* thing->ccontrol_idx */
  }
  else {
    *(short *)(cctrl_ptr + 0x9a) = *(short *)(cctrl_ptr + 0x9a) + 1;
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x9c) < *(short *)(cctrl_ptr + 0x9a)) { /* thing->ccontrol_idx */
      *(byte *)(thing + 0x25) = *(byte *)(thing + 0x25) & 0xfb;
      person_fn_063b6d();
    }
    else {
      anger_fn_010132();
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : temple_update_slab_subtile_columns_0739b9 (Original VA: 0x739b9, Ghidra: FUN_000739b9)
 * Prototype: undefined4 temple_update_slab_subtile_columns_0739b9(void);
 * Address  : 0x739b9 (Size: 904 bytes)
 * Module   : temple.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> temple_this_should_happen_073d41
 * Callees  : 4 -> ceiling_process_map_subtile_07ddf8, light_process_map_subtile_0b2398, move_process_map_subtile_0b2cb4, room_update_slab_subtile_columns_0d0ee0
 ******************************************************************************/
undefined4 temple_update_slab_subtile_columns_0739b9(void)

{
  bool flag;
  int thing;
  int slab_coord;
  int val;
  undefined *word_ptr;
  int val_2;
  int arg_edx;
  uint rand_seed;
  undefined4 *arg_ebx;
  int val_3;
  byte flag_2;
  int local_60 [4];
  undefined4 local_50;
  undefined2 local_4c [2];
  int local_44;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  flag_2 = 0;
  slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] +
          (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 0x55;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  rand_seed = g_action_random_seed % 9;
  if (*(short *)(arg_edx + 0x3b) == 1) {
    for (local_30 = 0; local_30 < 9; local_30 = local_30 + 1) {
      val = (slab_coord % 0x55) * 3 + (int)rand_seed % 3;
      val_3 = (slab_coord / 0x55) * 3 + (int)rand_seed / 3;
      if ((*(byte *)((int)&g_map_subtiles + (val_3 * 0x100 + val) * 5) & 0x10) == 0) {
        local_50 = CONCAT22((short)val_3 * 0x100 + 0x80,(short)val * 0x100 + 0x80);
        local_4c[0] = move_process_map_subtile_0b2cb4();
        slab_coord = ceiling_process_map_subtile_07ddf8();
joined_r0x00073d32:
        if (slab_coord != 0) {
          return 0;
        }
        *arg_ebx = local_50;
        *(undefined2 *)(arg_ebx + (uint)flag_2 * -2 + 1) = local_4c[(uint)flag_2 * -4];
        return 1;
      }
      rand_seed = (int)(rand_seed + 1) % 9;
    }
  }
  else {
    local_28 = 0;
    val_3 = 0;
    do {
      word_ptr = (undefined *)room_update_slab_subtile_columns_0d0ee0();
      val = light_process_map_subtile_0b2398();
      if ((word_ptr < &g_bss_002ddd1c) || (*(short *)(word_ptr + 1) != *(short *)(arg_edx + 1))) {
LAB_00073b2d:
        *(undefined4 *)((int)local_60 + val_3) = 0;
      }
      else {
        if ((val < 0x126) || (0x12e < val)) {
          flag = false;
        }
        else {
          flag = true;
        }
        if (flag) goto LAB_00073b2d;
        *(undefined4 *)((int)local_60 + val_3) = 1;
      }
      local_28 = local_28 + 2;
      val_3 = val_3 + 4;
    } while (local_28 != 8);
    if (local_60[0] == 0) {
      if (local_60[1] == 0) {
        val_3 = 2;
      }
      else if (local_60[3] == 0) {
        val_3 = 1;
      }
      else {
        val_3 = ((int)((uint)*(ushort *)(thing + 0x52) % 0x800) >> 10) * 2 + 1; /* thing->health */
      }
    }
    else if (local_60[2] == 0) {
      if (local_60[1] == 0) {
        val_3 = 3;
      }
      else {
        val_3 = 0;
      }
    }
    else {
      val_3 = ((int)((*(ushort *)(thing + 0x52) + 0x200) % 0x800) >> 10) * 2; /* thing->health */
    }
    for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
      if (local_60[val_3] != 0) {
        local_2c = rand_seed;
        for (local_44 = 0; local_44 < 9; local_44 = local_44 + 1) {
          val_2 = ((*(short *)(&g_data_0018b6b2 + val_3 * 2) + slab_coord) % 0x55) * 3 + (int)local_2c % 3;
          val = ((*(short *)(&g_data_0018b6b2 + val_3 * 2) + slab_coord) / 0x55) * 3 + (int)local_2c / 3;
          if ((*(byte *)((int)&g_map_subtiles + (val * 0x100 + val_2) * 5) & 0x10) == 0) {
            local_50 = CONCAT22((short)val * 0x100 + 0x80,(short)val_2 * 0x100 + 0x80);
            local_4c[0] = move_process_map_subtile_0b2cb4();
            slab_coord = ceiling_process_map_subtile_07ddf8();
            goto joined_r0x00073d32;
          }
          local_2c = (int)(local_2c + 1) % 9;
        }
      }
      val_3 = (val_3 + 1) % 4;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : temple_this_should_happen_073d41 (Original VA: 0x73d41, Ghidra: FUN_00073d41)
 * Prototype: undefined4 temple_this_should_happen_073d41(void);
 * Address  : 0x73d41 (Size: 76 bytes)
 * Module   : temple.cpp [direct_file_string_xref]
 * OrigLine : temple.cpp lines 833
 * Purpose  : String 'THIS SHOULD NOT HAPPEN'
 * Callers  : 1 -> temple_update_creature_control_072f52
 * Callees  : 3 -> temple_update_slab_subtile_columns_0739b9, move_fn_0b3be4, LbErrorLog
 ******************************************************************************/
undefined4 temple_this_should_happen_073d41(void)

{
  short short_val;
  int val;
  int extraout_ECX;
  
  val = temple_update_slab_subtile_columns_0739b9();
  if (val != 0) {
    short_val = move_fn_0b3be4();
    if (short_val != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x53;
      return 1;
    }
    LbErrorLog(); /* LbErrorLog("temple.cpp", line 833, "THIS SHOULD NOT HAPPEN") */
  }
  return 0;
}

/******************************************************************************
 * Function : temple_process_slabmap_tile_073d8d (Original VA: 0x73d8d, Ghidra: FUN_00073d8d)
 * Prototype: void temple_process_slabmap_tile_073d8d(void);
 * Address  : 0x73d8d (Size: 538 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> room_process_dungeon_room_0c6be0
 * Callees  : 4 -> moodneed_fn_051374, temple_update_player_dungeon_07314d, food_update_creature_and_thing_0abf38, object_fn_0c57a4
 ******************************************************************************/
void temple_process_slabmap_tile_073d8d(void)

{
  byte slab_coord;
  int arg_eax;
  uint uval;
  int val;
  uint uval_2;
  uint player_off;
  uint arg_edx;
  int val_2;
  int val_3;
  
  slab_coord = (&g_slabmap)
          [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
           (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55) * 6] & 7;
  uval = (uint)slab_coord;
  if (*(char *)(arg_eax + 0x1a) == '\n') {
    temple_update_player_dungeon_07314d();
    food_update_creature_and_thing_0abf38();
    slab_coord = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
  }
  else {
    val = object_fn_0c57a4();
    if (val == 0) {
      return;
    }
    if (*(int *)(arg_eax + 0x13) == 0) {
      return;
    }
    temple_update_player_dungeon_07314d();
    if ((g_game_system_flags & 1) == 0) {
      slab_coord = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
    }
    else {
      val = 0;
      uval_2 = 0;
      val_2 = 0;
      do {
        if ((((uval_2 != uval) && (player_off = (uint)g_neutral_player_number, uval != player_off)) && (uval_2 != player_off))
           && (((((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << ((byte)uval_2 & 0x1f)) != 0 &&
                (uval_2 != player_off)) &&
               ((uval != player_off && ((1 << slab_coord & (uint)(byte)(&g_player_view_flags)[val_2]) != 0)))))) {
          val = val + 1;
        }
        uval_2 = uval_2 + 1;
        val_2 = val_2 + 0x4ef;
      } while ((int)uval_2 < 5);
      if (val != 0) {
        val = *(int *)(arg_eax + 0x13) / val;
        uval_2 = 0;
        val_3 = 0;
        val_2 = 0;
        do {
          if ((((uval_2 != uval) && (player_off = (uint)g_neutral_player_number, player_off != uval)) &&
              ((uval_2 != player_off &&
               (((((uint)(byte)(&g_player_view_flags)[uval * 0x4ef] & 1 << ((byte)uval_2 & 0x1f)) != 0 &&
                 (uval_2 != player_off)) && (player_off != uval)))))) &&
             ((1 << slab_coord & (uint)(byte)(&g_player_view_flags)[val_3]) != 0)) {
            *(int *)((int)&g_bss_002e1086 + val_2) = *(int *)((int)&g_bss_002e1086 + val_2) + val;
            *(int *)((int)&g_bss_002e1082 + val_2) = *(int *)((int)&g_bss_002e1082 + val_2) + val;
          }
          val_3 = val_3 + 0x4ef;
          uval_2 = uval_2 + 1;
          val_2 = val_2 + 0x1508;
        } while ((int)uval_2 < 5);
        return;
      }
      slab_coord = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
    }
  }
  if (slab_coord == arg_edx) {
    moodneed_fn_051374();
  }
  return;
}

/******************************************************************************
 * Function : temple_fn_073fa8 (Original VA: 0x73fa8, Ghidra: FUN_00073fa8)
 * Prototype: void temple_fn_073fa8(void);
 * Address  : 0x73fa8 (Size: 17 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Purpose  : Module temple.cpp procedure @ 0x073fa8
 * Callers  : 1 -> creature_update_creature_and_thing_0811d8
 * Callees  : 0 -> 
 ******************************************************************************/
void temple_fn_073fa8(void)

{
  int arg_eax;
  undefined1 arg_dl;
  byte arg_bl;
  
  *(undefined1 *)(arg_eax + 0x51) = arg_dl;
  *(byte *)(arg_eax + 0x4f) = *(byte *)(arg_eax + 0x4f) & 0xf3;
  *(byte *)(arg_eax + 0x4f) = *(byte *)(arg_eax + 0x4f) | (arg_bl & 3) << 2;
  return;
}

/******************************************************************************
 * Function : temple_update_creature_control_073fb9 (Original VA: 0x73fb9, Ghidra: FUN_00073fb9)
 * Prototype: undefined8 temple_update_creature_control_073fb9(void);
 * Address  : 0x73fb9 (Size: 103 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_update_slab_subtile_columns_0df760
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 temple_update_creature_control_073fb9(void)

{
  int thing;
  undefined4 arg_edx;
  int cctrl_ptr;
  
  cctrl_ptr = (uint)*(byte *)(thing + 0x1a) +
          (uint)*(ushort *)(thing + 0xf) + (uint)*(ushort *)(thing + 0xd) + /* thing->mappos.val_x, thing->mappos.val_y */
          (int)*(short *)(thing + 0x11) + (int)*(short *)(thing + 0x5e) +
          (int)*(char *)(thing + 6) + (uint)*(byte *)(thing + 0x1f); /* thing->owner, thing->class_id */
  if (*(byte *)(thing + 0x1f) == 5) { /* thing->class_id */
    cctrl_ptr = cctrl_ptr + (uint)*(byte *)(thing + 0x48) + (uint)*(byte *)(thing + 0x49) +
            (int)*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd4) + /* thing->ccontrol_idx */
            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xd2); /* thing->ccontrol_idx */
  }
  return CONCAT44(arg_edx,(uint)*(ushort *)(thing + 0x1b) * cctrl_ptr); /* thing->index_or_angle */
}

/******************************************************************************
 * Function : temple_update_player_view_state_074020 (Original VA: 0x74020, Ghidra: FUN_00074020)
 * Prototype: undefined1 * temple_update_player_view_state_074020(void);
 * Address  : 0x74020 (Size: 24 bytes)
 * Module   : temple.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> creature_fn_081e5c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * temple_update_player_view_state_074020(void)

{
  byte *arg_eax;
  
  if ((*arg_eax & 0x20) != 0) {
    return &g_players + (char)arg_eax[6] * 0x4ef;
  }
  return (undefined1 *)0x0;
}

