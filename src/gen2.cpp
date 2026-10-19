/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: gen2.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 15
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : gen2_fn_037874 (Original VA: 0x37874, Ghidra: FUN_00037874)
 * Prototype: longlong gen2_fn_037874(void);
 * Address  : 0x37874 (Size: 70 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Purpose  : Module gen2.cpp procedure @ 0x037874
 * Callers  : 1 -> gen2_update_player_view_state_037964
 * Callees  : 0 -> 
 ******************************************************************************/
longlong gen2_fn_037874(void)

{
  int arg_eax;
  uint arg_edx;
  
  if ((((g_bss_002ed402 == 0) || (g_game_turn < (uint)(g_bss_002ed402 + g_bss_002ee894))) &&
      (*(int *)(arg_eax + 0xae1) != -1)) &&
     (*(uint *)(arg_eax + 0xae1) <= g_game_turn - *(int *)(arg_eax + 0xadd))) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : gen2_update_creature_and_thing_0378ba (Original VA: 0x378ba, Ghidra: FUN_000378ba)
 * Prototype: undefined8 gen2_update_creature_and_thing_0378ba(void);
 * Address  : 0x378ba (Size: 135 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> compturn_process_dungeon_room_0207b3, gen2_update_player_view_state_03806d
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 gen2_update_creature_and_thing_0378ba(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  int room_ptr;
  int val;
  undefined4 arg_edx;
  int val_2;
  
  val_2 = 0;
  val = 0;
  cctrl_ptr = *(ushort *)(arg_eax + 0x27);
  while (room_ptr = (uint)cctrl_ptr * 0x45, &g_rooms < &g_rooms + room_ptr) {
    val = val + (uint)*(ushort *)(&g_bss_002ddd29 + room_ptr);
    val_2 = val_2 + (uint)*(ushort *)(&g_bss_002ddd2b + room_ptr);
    cctrl_ptr = *(ushort *)(&g_bss_002ddd21 + room_ptr);
  }
  cctrl_ptr = *(ushort *)(arg_eax + 0x2d);
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x68) == 0) { /* thing->ccontrol_idx */
      val_2 = val_2 + (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  return CONCAT44(arg_edx,val - val_2);
}

/******************************************************************************
 * Function : gen2_fn_037941 (Original VA: 0x37941, Ghidra: FUN_00037941)
 * Prototype: longlong gen2_fn_037941(void);
 * Address  : 0x37941 (Size: 35 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Purpose  : Module gen2.cpp procedure @ 0x037941
 * Callers  : 1 -> gen2_update_player_view_state_037964
 * Callees  : 0 -> 
 ******************************************************************************/
longlong gen2_fn_037941(void)

{
  int arg_eax;
  uint arg_edx;
  
  if ((*(short *)(arg_eax + 0xd) != 0) &&
     ((int)(uint)*(byte *)(arg_eax + 0x919) < *(int *)(arg_eax + 0x105c))) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : gen2_update_player_view_state_037964 (Original VA: 0x37964, Ghidra: FUN_00037964)
 * Prototype: longlong gen2_update_player_view_state_037964(void);
 * Address  : 0x37964 (Size: 154 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> door_update_creature_and_thing_023250
 * Callees  : 6 -> game_fn_03783c, gen2_fn_037874, gen2_fn_037941, gen2_update_player_dungeon_0379fe, gen2_update_player_dungeon_037d01, gen2_update_player_view_state_03806d
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong gen2_update_player_view_state_037964(void)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val_2;
  uint arg_edx;
  int extraout_EDX;
  undefined8 uval;
  
  val = game_fn_03783c();
  if (val != 0) {
    gen2_update_player_dungeon_0379fe();
    gen2_update_player_dungeon_037d01();
    g_bss_002eb9e0 = g_game_turn;
  }
  val = 0;
  do {
    if (((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) &&
       ((&g_bss_0019d0f1)[val] != '\x02')) {
      uval = gen2_fn_037874();
      val = (int)((ulonglong)uval >> 0x20);
      val_2 = extraout_ECX;
      if ((int)uval != 0) {
        uval = gen2_fn_037941();
        val = (int)((ulonglong)uval >> 0x20);
        val_2 = extraout_ECX_00;
        if ((int)uval != 0) {
          gen2_update_player_view_state_03806d();
          val_2 = extraout_ECX_01;
          val = extraout_EDX;
        }
        *(undefined4 *)(val_2 + 0xadd) = g_game_turn;
      }
      *(undefined4 *)(val_2 + 0x1485) = 0;
    }
    val = val + 0x4ef;
  } while (val != 0x18ab);
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : gen2_update_player_dungeon_0379fe (Original VA: 0x379fe, Ghidra: FUN_000379fe)
 * Prototype: undefined8 gen2_update_player_dungeon_0379fe(void);
 * Address  : 0x379fe (Size: 771 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> gen2_update_player_view_state_037964, inits_update_player_dungeon_040832
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 gen2_update_player_dungeon_0379fe(void)

{
  undefined2 *dungeon_off;
  int val;
  int dungeon_off_2;
  uint dungeon_off_3;
  int val_2;
  uint dungeon_off_4;
  uint uval;
  uint uval_2;
  int val_3;
  undefined4 uval_3;
  int val_4;
  undefined4 arg_edx;
  int dungeon_off_5;
  int val_5;
  int val_6;
  int val_7;
  int dungeon_off_6;
  int val_8;
  int val_9;
  undefined2 *local_20;
  
  val_9 = 0;
  val_4 = 0;
  local_20 = (undefined2 *)&g_bss_002e059a;
  do {
    if ((((&g_players)[val_4] & 1) != 0) && ((&g_bss_0019d0f4)[val_4] == '\x01')) {
      dungeon_off_6 = val_9 * 0x1508;
      val_8 = 0;
      dungeon_off = &g_dungeons + val_9 * 0xa84;
      do {
        if (*(char *)(dungeon_off + 0x2e1) != '\0') {
          val_8 = val_8 + 1;
        }
        dungeon_off = (undefined2 *)((int)dungeon_off + 1);
      } while (dungeon_off != local_20);
      if ((&g_bss_002e0ea2)[dungeon_off_6] == '\0') {
        val = 0;
      }
      else {
        val = (int)(((ulonglong)(ushort)(&g_bss_002e1058)[val_9 * 0xa84] << 8) /
                     (ulonglong)(longlong)(int)(uint)(byte)(&g_bss_002e0ea2)[dungeon_off_6]);
      }
      dungeon_off_2 = (uint)(ushort)(&g_bss_002e105c)[val_9 * 0xa84] -
              (uint)(ushort)(&g_bss_002e105a)[val_9 * 0xa84];
      if (dungeon_off_2 < 0) {
        dungeon_off_2 = 0;
      }
      dungeon_off_5 = (uint)(ushort)(&g_bss_002e0f14)[val_9 * 0xa84] -
               (uint)(ushort)(&g_bss_002e0f16)[val_9 * 0xa84];
      if (dungeon_off_5 < 0) {
        dungeon_off_5 = 0;
      }
      dungeon_off_3 = (uint)(ushort)(&g_bss_002e0ed2)[val_9 * 0xa84];
      if (0x7f < dungeon_off_3) {
        dungeon_off_3 = 0x80;
      }
      if ((int)(&g_bss_002e1082)[val_9 * 0x542] < 30000) {
        val_2 = (&g_bss_002e1082)[val_9 * 0x542];
      }
      else {
        val_2 = 30000;
      }
      dungeon_off_4 = (uint)(ushort)(&g_bss_002e0ec6)[val_9 * 0xa84];
      if (0x1ff < dungeon_off_4) {
        dungeon_off_4 = 0x200;
      }
      uval = (uint)(byte)(&g_bss_002e0ea1)[dungeon_off_6];
      if (0x13 < uval) {
        uval = 0x14;
      }
      val_5 = (int)(&g_bss_002e1706)[val_9 * 0x542] >> 0x1f;
      val_5 = (int)(((&g_bss_002e1706)[val_9 * 0x542] + val_5 * -0x100) - (uint)(val_5 << 7 < 0))
               >> 8;
      if (95999 < val_5) {
        val_5 = 96000;
      }
      val_6 = (int)(&g_bss_002e170a)[val_9 * 0x542] >> 0x1f;
      val_6 = (int)(((&g_bss_002e170a)[val_9 * 0x542] + val_6 * -0x100) - (uint)(val_6 << 7 < 0))
               >> 8;
      if (95999 < val_6) {
        val_6 = 96000;
      }
      val_7 = (int)(&g_bss_002e1702)[val_9 * 0x542] >> 0x1f;
      val_7 = (int)(((&g_bss_002e1702)[val_9 * 0x542] + val_7 * -0x100) - (uint)(val_7 << 7 < 0))
               >> 8;
      if (95999 < val_7) {
        val_7 = 96000;
      }
      if (0x27 < dungeon_off_2) {
        dungeon_off_2 = 0x28;
      }
      if (0x27 < dungeon_off_5) {
        dungeon_off_5 = 0x28;
      }
      if (0x10 < val_8) {
        val_8 = 0x11;
      }
      uval_2 = (uint)(byte)(&g_bss_002e0b4c)[dungeon_off_6];
      if (3 < uval_2) {
        uval_2 = 4;
      }
      if ((int)(&g_bss_002e1a0e)[val_9 * 0x542] < 10) {
        val_3 = (&g_bss_002e1a0e)[val_9 * 0x542];
      }
      else {
        val_3 = 10;
      }
      val_8 = val_8 * 0x400 +
               dungeon_off_5 * 1000 +
               dungeon_off_3 * 4000 + val_2 * 3 + dungeon_off_4 * 0x80 + uval * 400 + val_5 / 2 + val_6 / 2 +
               val_7 / 2 + dungeon_off_2 * 1000 + uval_2 * 20000 + val_3 * 4000;
      dungeon_off_3 = (uint)(byte)(&g_bss_002e0ea2)[dungeon_off_6];
      if (0x7f < dungeon_off_3) {
        dungeon_off_3 = 0x80;
      }
      dungeon_off_6 = val_8 + dungeon_off_3 * -0x200;
      (&g_bss_002e1076)[val_9 * 0x542] = (int)((dungeon_off_3 * 0x200 + val_8) * 1000) / 0x10d290;
      if (dungeon_off_6 < 0) {
        dungeon_off_6 = 0;
      }
      dungeon_off_6 = ((dungeon_off_6 * 1000) / 0xfd290) * (0x100 - val);
      val_8 = dungeon_off_6 >> 0x1f;
      (&g_bss_002e1072)[val_9 * 0x542] =
           (int)((dungeon_off_6 + val_8 * -0x100) - (uint)(val_8 << 7 < 0)) >> 8;
      if ((int)(&g_bss_002e1076)[val_9 * 0x542] < 1) {
        uval_3 = 1;
      }
      else {
        uval_3 = (&g_bss_002e1076)[val_9 * 0x542];
      }
      (&g_bss_002e1076)[val_9 * 0x542] = uval_3;
      if ((int)(&g_bss_002e1072)[val_9 * 0x542] < 1) {
        uval_3 = 1;
      }
      else {
        uval_3 = (&g_bss_002e1072)[val_9 * 0x542];
      }
      (&g_bss_002e1072)[val_9 * 0x542] = uval_3;
      if ((int)(&g_bss_002e107a)[val_9 * 0x542] < (int)(&g_bss_002e1076)[val_9 * 0x542]) {
        (&g_bss_002e107a)[val_9 * 0x542] = (&g_bss_002e1076)[val_9 * 0x542];
      }
    }
    local_20 = local_20 + 0xa84;
    val_9 = val_9 + 1;
    val_4 = val_4 + 0x4ef;
  } while (val_9 < 5);
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : gen2_update_player_dungeon_037d01 (Original VA: 0x37d01, Ghidra: FUN_00037d01)
 * Prototype: undefined8 gen2_update_player_dungeon_037d01(void);
 * Address  : 0x37d01 (Size: 234 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> gen2_update_player_view_state_037964, inits_update_player_dungeon_040832
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 gen2_update_player_dungeon_037d01(void)

{
  int val;
  undefined4 arg_edx;
  undefined2 *word_ptr;
  int val_2;
  
  word_ptr = &g_dungeons;
  val_2 = 0;
  val = 0;
  do {
    if (((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) &&
       (val_2 < *(int *)((int)word_ptr + 0xaed))) {
      val_2 = *(int *)((int)word_ptr + 0xae9);
    }
    val = val + 0x4ef;
    word_ptr = word_ptr + 0xa84;
  } while (val != 0x18ab);
  if (g_bss_002eb9d8 == -1) {
    word_ptr = &g_dungeons;
    val_2 = 0;
    do {
      if ((((&g_players)[val_2] & 1) != 0) && ((&g_bss_0019d0f4)[val_2] == '\x01')) {
        *(undefined4 *)((int)word_ptr + 0xae1) = 0;
      }
      val_2 = val_2 + 0x4ef;
      word_ptr = word_ptr + 0xa84;
    } while (val_2 != 0x18ab);
  }
  else {
    word_ptr = &g_dungeons;
    val = 0;
    do {
      if ((((&g_players)[val] & 1) != 0) && ((&g_bss_0019d0f4)[val] == '\x01')) {
        *(int *)((int)word_ptr + 0xae1) = (g_bss_002eb9d8 * val_2) / *(int *)((int)word_ptr + 0xae9);
      }
      val = val + 0x4ef;
      word_ptr = word_ptr + 0xa84;
    } while (val != 0x18ab);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : gen2_could_get_random_entrance_037deb (Original VA: 0x37deb, Ghidra: FUN_00037deb)
 * Prototype: undefined4 gen2_could_get_random_entrance_037deb(void);
 * Address  : 0x37deb (Size: 59 bytes)
 * Module   : gen2.cpp [direct_file_string_xref]
 * OrigLine : gen2.cpp lines 248
 * Purpose  : String 'COULD NOT GET A RANDOM ENTRANCE'
 * Callers  : 1 -> gen2_update_player_view_state_03806d
 * Callees  : 3 -> entrance_find_valid_place_entrance_026b04, room_this_should_happen_room_0ca9d0, LbErrorLog
 ******************************************************************************/
undefined4 gen2_could_get_random_entrance_037deb(void)

{
  int val;
  
  val = room_this_should_happen_room_0ca9d0();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("gen2.cpp", line 248, "COULD NOT GET A RANDOM ENTRANCE") */
  }
  else {
    val = entrance_find_valid_place_entrance_026b04();
    if (val != 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : gen2_fn_037e26 (Original VA: 0x37e26, Ghidra: FUN_00037e26)
 * Prototype: undefined4 gen2_fn_037e26(void);
 * Address  : 0x37e26 (Size: 133 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Purpose  : Module gen2.cpp procedure @ 0x037e26
 * Callers  : 1 -> gen2_fn_037f3b
 * Callees  : 1 -> room_process_dungeon_room_0d124c
 ******************************************************************************/
undefined4 gen2_fn_037e26(void)

{
  byte flag;
  int val;
  int arg_edx;
  int val_2;
  
  val_2 = arg_edx * 0xe6;
  if (((&g_bss_002e91a9)[val_2] != '\0') &&
     (flag = (&g_bss_002e91ac)[val_2], val = room_process_dungeon_room_0d124c(), val < (int)(uint)flag)) {
    return 0;
  }
  if (((&g_bss_002e91aa)[val_2] != '\0') &&
     (flag = (&g_bss_002e91ad)[val_2], val = room_process_dungeon_room_0d124c(), val < (int)(uint)flag)) {
    return 0;
  }
  if (((&g_bss_002e91ab)[val_2] != '\0') &&
     (flag = (&g_bss_002e91ae)[val_2], val_2 = room_process_dungeon_room_0d124c(), val_2 < (int)(uint)flag)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : gen2_fn_037eab (Original VA: 0x37eab, Ghidra: FUN_00037eab)
 * Prototype: void gen2_fn_037eab(void);
 * Address  : 0x37eab (Size: 57 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Purpose  : Module gen2.cpp procedure @ 0x037eab
 * Callers  : 1 -> creature_create_dead_thing_07fac8
 * Callees  : 0 -> 
 ******************************************************************************/
void gen2_fn_037eab(void)

{
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  if ((arg_ebx == 0) || (*(int *)(&g_bss_002ed35d + arg_eax * 4) != -1)) {
    if ((arg_edx == -1) || ((arg_edx == 0 || (*(int *)(&g_bss_002ed35d + arg_eax * 4) == -1)))) {
      *(int *)(&g_bss_002ed35d + arg_eax * 4) = arg_edx;
      return;
    }
    *(int *)(&g_bss_002ed35d + arg_eax * 4) = *(int *)(&g_bss_002ed35d + arg_eax * 4) + arg_edx;
  }
  return;
}

/******************************************************************************
 * Function : gen2_trying_remove_an_unavailable_037ee4 (Original VA: 0x37ee4, Ghidra: FUN_00037ee4)
 * Prototype: longlong gen2_trying_remove_an_unavailable_037ee4(void);
 * Address  : 0x37ee4 (Size: 55 bytes)
 * Module   : gen2.cpp [direct_file_string_xref]
 * OrigLine : gen2.cpp lines 307
 * Purpose  : String 'Trying to remove an unavailable creature from the creature p'
 * Callers  : 2 -> gen2_update_player_view_state_03806d, scavenge_could_remove_creature_pool_067483
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong gen2_trying_remove_an_unavailable_037ee4(void)

{
  int arg_eax;
  uint arg_edx;
  
  if (*(int *)(&g_bss_002ed35d + arg_eax * 4) == 0) {
    LbErrorLog(); /* LbErrorLog("gen2.cpp", line 307, "Trying to remove an unavailable creature from the creature pool") */
    return (ulonglong)arg_edx << 0x20;
  }
  if (0 < *(int *)(&g_bss_002ed35d + arg_eax * 4)) {
    *(int *)(&g_bss_002ed35d + arg_eax * 4) = *(int *)(&g_bss_002ed35d + arg_eax * 4) + -1;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : gen2_fn_037f1b (Original VA: 0x37f1b, Ghidra: FUN_00037f1b)
 * Prototype: void gen2_fn_037f1b(void);
 * Address  : 0x37f1b (Size: 32 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Purpose  : Module gen2.cpp procedure @ 0x037f1b
 * Callers  : 1 -> gen2_creature_available_but_creature_037f61
 * Callees  : 1 -> scavenge_update_player_dungeon_067290
 ******************************************************************************/
void gen2_fn_037f1b(void)

{
  scavenge_update_player_dungeon_067290();
  return;
}

/******************************************************************************
 * Function : gen2_fn_037f3b (Original VA: 0x37f3b, Ghidra: FUN_00037f3b)
 * Prototype: undefined4 gen2_fn_037f3b(void);
 * Address  : 0x37f3b (Size: 38 bytes)
 * Module   : gen2.cpp [contiguous_same_unit_span]
 * Purpose  : Module gen2.cpp procedure @ 0x037f3b
 * Callers  : 1 -> gen2_creature_available_but_creature_037f61
 * Callees  : 1 -> gen2_fn_037e26
 ******************************************************************************/
undefined4 gen2_fn_037f3b(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  
  if ((*(int *)(&g_bss_002ed35d + arg_edx * 4) != 0) && (*(char *)(arg_edx + 4000 + arg_eax) != '\0')) {
    val = gen2_fn_037e26();
    if (val != 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : gen2_creature_available_but_creature_037f61 (Original VA: 0x37f61, Ghidra: FUN_00037f61)
 * Prototype: undefined8 gen2_creature_available_but_creature_037f61(void);
 * Address  : 0x37f61 (Size: 268 bytes)
 * Module   : gen2.cpp [direct_file_string_xref]
 * OrigLine : gen2.cpp lines 415, 435
 * Purpose  : String 'CREATURE AVAILABLE BUT NO CREATURE SCORES - XLS?'
 * Callers  : 1 -> gen2_update_player_view_state_03806d
 * Callees  : 3 -> gen2_fn_037f1b, gen2_fn_037f3b, LbErrorLog
 ******************************************************************************/
undefined8 gen2_creature_available_but_creature_037f61(void)

{
  int loop_i;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int val;
  uint uval;
  uint auStack_a0 [32];
  uint local_20;
  int local_1c;
  
  val = 1;
  uval = 0;
  local_1c = 0;
  do {
    loop_i = gen2_fn_037f3b();
    if (loop_i == 0) {
      *(undefined4 *)((int)auStack_a0 + extraout_ECX) = 0;
    }
    else {
      local_20 = (uint)*(byte *)(val + 0x17bfcc);
      loop_i = gen2_fn_037f1b();
      loop_i = loop_i + local_20;
      local_1c = local_1c + 1;
      if (loop_i < 1) {
        loop_i = 1;
      }
      uval = uval + loop_i;
      *(uint *)((int)auStack_a0 + extraout_ECX_00) = uval;
    }
    val = val + 1;
  } while (val < 0x20);
  if (local_1c != 0) {
    if (uval == 0) {
      LbErrorLog(); /* LbErrorLog("gen2.cpp", line 415, "CREATURE AVAILABLE BUT NO CREATURE SCORES - XLS?") */
    }
    else {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      val = 1;
      for (loop_i = 4; loop_i < 0x80; loop_i = loop_i + 4) {
        if ((*(int *)((int)auStack_a0 + loop_i) != 0) &&
           ((int)(g_action_random_seed % uval) < *(int *)((int)auStack_a0 + loop_i))) goto LAB_00037cfa;
        val = val + 1;
      }
      LbErrorLog(); /* LbErrorLog("gen2.cpp", line 435, "HOW DID I GET THIS FAR!") */
    }
  }
  val = 0;
LAB_00037cfa:
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : gen2_update_player_view_state_03806d (Original VA: 0x3806d, Ghidra: FUN_0003806d)
 * Prototype: longlong gen2_update_player_view_state_03806d(void);
 * Address  : 0x3806d (Size: 285 bytes)
 * Module   : gen2.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> gen2_update_player_view_state_037964
 * Callees  : 6 -> event_fn_0274ad, gen2_update_creature_and_thing_0378ba, gen2_could_get_random_entrance_037deb, gen2_trying_remove_an_unavailable_037ee4, gen2_creature_available_but_creature_037f61, moodneed_fn_051374
 ******************************************************************************/
longlong gen2_update_player_view_state_03806d(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 arg_edx;
  uint *word_ptr;
  undefined8 uval;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  
  uStack_10 = 0x38077;
  auStack_c[0] = arg_edx;
  val = gen2_creature_available_but_creature_037f61();
  word_ptr = auStack_c;
  if (val != 0) {
    uStack_10 = 0x3808e;
    uval = gen2_update_creature_and_thing_0378ba();
    if (*(int *)(extraout_ECX + 0xaf9) <
        (int)(uint)*(ushort *)(&g_bss_002e91a5 + (int)((ulonglong)uval >> 0x20))) {
      word_ptr = auStack_c;
      if ((int)*(char *)(extraout_ECX + 0xe9f) ==
          (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        uStack_10 = 0x38184;
        moodneed_fn_051374();
        word_ptr = auStack_c;
      }
    }
    else if ((int)uval < 1) {
      val = extraout_ECX;
      if ((int)uval == 0) {
        uStack_10 = 0x380db;
        val_2 = gen2_could_get_random_entrance_037deb();
        val = extraout_ECX_00;
        if (val_2 != 0) {
          uStack_10 = 0x380e6;
          gen2_trying_remove_an_unavailable_037ee4();
          val = extraout_ECX_01;
        }
      }
      if ((int)*(char *)(val + 0xe9f) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])
      {
        uStack_10 = 0x38131;
        moodneed_fn_051374();
        val = extraout_ECX_02;
      }
      word_ptr = auStack_c;
      if (*(short *)(val + 0x27) != 0) {
        uStack_10 = 0;
        event_fn_0274ad();
        word_ptr = &uStack_10;
      }
    }
    else {
      uStack_10 = 0x380b3;
      val = gen2_could_get_random_entrance_037deb();
      word_ptr = auStack_c;
      if (val != 0) {
        uStack_10 = 0x380c2;
        gen2_trying_remove_an_unavailable_037ee4();
        return CONCAT44(auStack_c[0],1);
      }
    }
  }
  return (ulonglong)*word_ptr << 0x20;
}

/******************************************************************************
 * Function : gen2_update_creature_control_03818c (Original VA: 0x3818c, Ghidra: FUN_0003818c)
 * Prototype: undefined8 gen2_update_creature_control_03818c(void);
 * Address  : 0x3818c (Size: 134 bytes)
 * Module   : gen2.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 6 -> person_fn_063b6d, person_update_creature_control_064ae7, room_attempt_add_creature_room_0cd85c, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0cdcd0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 gen2_update_creature_control_03818c(void)

{
  int cctrl_ptr;
  char ch;
  int thing;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  byte flag;
  
  flag = 0;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(undefined2 *)(cctrl_ptr + 0x80) = 0;
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 0x10)) &&
     (*(char *)(val + 3) == *(char *)(thing + 6))) { /* thing->owner */
    ch = room_attempt_add_creature_room_0cd85c();
    if (ch != '\0') {
      person_update_creature_control_064ae7();
      val = room_update_slab_subtile_columns_0cdcd0();
      if (val == 0) {
        *(undefined4 *)(cctrl_ptr + 0x2d) = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
        *(undefined2 *)(cctrl_ptr + 0x31 + (uint)flag * -8) =
             *(undefined2 *)(thing + 0x11 + (uint)flag * -8);
      }
      uval = 1;
      goto LAB_0003820c;
    }
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  uval = 0;
LAB_0003820c:
  return CONCAT44(arg_edx,uval);
}

