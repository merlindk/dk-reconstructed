/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: workshop.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 35
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : workshop_fn_0768fb (Original VA: 0x768fb, Ghidra: FUN_000768fb)
 * Prototype: undefined4 workshop_fn_0768fb(void);
 * Address  : 0x768fb (Size: 35 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x0768fb
 * Callers  : 1 -> magic_update_creature_control_04fe44
 * Callees  : 1 -> workshop_fn_07691e
 ******************************************************************************/
undefined4 workshop_fn_0768fb(void)

{
  int arg_eax;
  int arg_edx;
  undefined8 uval;
  
  if ((*(char *)(arg_eax + 6) == arg_edx) && (*(char *)(arg_eax + 0x1a) == '\x01')) {
    uval = workshop_fn_07691e();
    if ((int)uval != 0) {
      return (int)((ulonglong)uval >> 0x20);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : workshop_fn_07691e (Original VA: 0x7691e, Ghidra: FUN_0007691e)
 * Prototype: longlong workshop_fn_07691e(void);
 * Address  : 0x7691e (Size: 31 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x07691e
 * Callers  : 2 -> workshop_fn_0768fb, update_fn_0e2c58
 * Callees  : 0 -> 
 ******************************************************************************/
longlong workshop_fn_07691e(void)

{
  int arg_eax;
  uint arg_edx;
  
  if (('\0' < *(char *)(arg_eax + 0x13)) && (*(uint *)(arg_eax + 0x14) <= g_game_turn)) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : workshop_fn_076944 (Original VA: 0x76944, Ghidra: FUN_00076944)
 * Prototype: void workshop_fn_076944(void);
 * Address  : 0x76944 (Size: 30 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x076944
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_076944(void)

{
  short short_val;
  int arg_eax;
  short *arg_edx;
  
  *(short *)(arg_eax + 0x32) = *(short *)(arg_eax + 0x32) + *arg_edx;
  *(short *)(arg_eax + 0x34) = *(short *)(arg_eax + 0x34) + arg_edx[1];
  short_val = arg_edx[2];
  *(byte *)(arg_eax + 1) = *(byte *)(arg_eax + 1) | 4;
  *(short *)(arg_eax + 0x36) = *(short *)(arg_eax + 0x36) + short_val;
  return;
}

/******************************************************************************
 * Function : workshop_fn_076964 (Original VA: 0x76964, Ghidra: FUN_00076964)
 * Prototype: undefined4 workshop_fn_076964(void);
 * Address  : 0x76964 (Size: 6 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x076964
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 workshop_fn_076964(void)

{
  return 0x100;
}

/******************************************************************************
 * Function : workshop_update_creature_control_076970 (Original VA: 0x76970, Ghidra: FUN_00076970)
 * Prototype: undefined8 workshop_update_creature_control_076970(void);
 * Address  : 0x76970 (Size: 122 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> person_fn_063b6d, person_update_creature_control_064ae7, workshop_update_slab_subtile_columns_077647, room_attempt_add_creature_room_0cd85c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 workshop_update_creature_control_076970(void)

{
  char ch;
  int thing;
  int val;
  undefined4 arg_edx;
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if ((((val != 0) && (*(short *)(val + 10) == 8)) &&
      (*(char *)(val + 3) == *(char *)(thing + 6))) && /* thing->owner */
     (*(ushort *)(val + 0x10) < *(ushort *)(val + 0xe))) {
    ch = room_attempt_add_creature_room_0cd85c();
    if (ch != '\0') {
      person_update_creature_control_064ae7();
      workshop_update_slab_subtile_columns_077647();
      goto LAB_000769e0;
    }
  }
  person_fn_063b6d();
LAB_000769e0:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : workshop_update_player_dungeon_0769ea (Original VA: 0x769ea, Ghidra: FUN_000769ea)
 * Prototype: undefined8 workshop_update_player_dungeon_0769ea(void);
 * Address  : 0x769ea (Size: 319 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 6 -> moodneed_fn_051374, person_fn_063b6d, scavenge_fn_067018, workshop_update_slab_subtile_columns_077033, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined8 workshop_update_player_dungeon_0769ea(void)

{
  char ch;
  int arg_eax;
  int dungeon_off;
  int val;
  undefined4 uval;
  int extraout_ECX;
  undefined4 arg_edx;
  int val_2;
  undefined8 uval_2;
  
  ch = *(char *)(arg_eax + 6);
  dungeon_off = ch * 0x1508;
  uval_2 = room_update_slab_subtile_columns_0d0f50();
  val = (int)((ulonglong)uval_2 >> 0x20);
  val_2 = (int)uval_2;
  if ((((val_2 != 0) && (*(short *)(val_2 + 10) == 8)) &&
      (*(short *)(val_2 + 1) == *(short *)(val + 0x7e))) &&
     ((*(char *)(val_2 + 3) == *(char *)(extraout_ECX + 6) &&
      (*(short *)(val_2 + 1) == *(short *)(val + 0x7e))))) {
    if (*(ushort *)(val_2 + 0x10) <= *(ushort *)(val_2 + 0xe)) {
      if ((&g_bss_002e1712)[dungeon_off] != '\0') {
        val = scavenge_fn_067018((&g_bss_002e91a7)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0xe6],100);
        val = val * (uint)*(ushort *)(val_2 + 0x3f);
        val_2 = val >> 0x1f;
        val_2 = (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
        *(int *)(&g_bss_002e170e + dungeon_off) = *(int *)(&g_bss_002e170e + dungeon_off) + val_2;
        (&g_bss_002e170a)[ch * 0x542] = (&g_bss_002e170a)[ch * 0x542] + val_2;
      }
      workshop_update_slab_subtile_columns_077033();
      uval = 1;
      goto LAB_00076ae3;
    }
    if ((int)*(char *)(extraout_ECX + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])
    {
      moodneed_fn_051374();
    }
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  uval = 0;
LAB_00076ae3:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : workshop_door_choice_076b29 (Original VA: 0x76b29, Ghidra: FUN_00076b29)
 * Prototype: undefined8 workshop_door_choice_076b29(void);
 * Address  : 0x76b29 (Size: 491 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 139
 * Purpose  : String 'BAD DOOR CHOICE'
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 7 -> moodneed_fn_051374, workshop_what_hell_have_we_076d56, workshop_fn_076ee6, workshop_fn_076f1e, room_process_dungeon_room_0ca65c, room_process_dungeon_room_0d129c, LbErrorLog
 ******************************************************************************/
undefined8 workshop_door_choice_076b29(void)

{
  char *str_ptr;
  byte player_off;
  uint arg_eax;
  int val;
  int val_2;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 arg_edx;
  
  val = room_process_dungeon_room_0d129c();
  if (val != 0) {
    if ((&g_bss_002e1712)[extraout_ECX] == '\0') {
LAB_00076d04:
      workshop_fn_076f1e();
    }
    else {
      val = workshop_fn_076ee6();
      if (val * 0x100 <= *(int *)(extraout_ECX_00 + 0x1185)) {
        val_2 = room_process_dungeon_room_0ca65c();
        if (val_2 == 0) {
          *(undefined1 *)(extraout_ECX_01 + 0x1189) = 0;
          uval = 0;
          goto LAB_00076d0e;
        }
        val_2 = workshop_what_hell_have_we_076d56();
        if (val_2 != 0) {
          if (*(char *)(extraout_ECX_02 + 0x1189) == '\t') {
            val_2 = (uint)*(byte *)(extraout_ECX_02 + 0x118a) + extraout_ECX_02;
            if (*(byte *)(val_2 + 0x101d) < 199) {
              str_ptr = (char *)(val_2 + 0x101d);
              *str_ptr = *str_ptr + '\x01';
              *(int *)(extraout_ECX_02 + 0x122b) = *(int *)(extraout_ECX_02 + 0x122b) + 1;
              *(undefined1 *)(extraout_ECX_02 + 0x1027 + (uint)*(byte *)(extraout_ECX_02 + 0x118a))
                   = 1;
              player_off = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
joined_r0x00076c8f:
              val_2 = extraout_ECX_02;
              if (player_off == arg_eax) {
                moodneed_fn_051374();
                val_2 = extraout_ECX_03;
              }
              *(int *)(val_2 + 0x1185) = *(int *)(val_2 + 0x1185) + val * -0x100;
              *(undefined4 *)(val_2 + 0x118b) = g_game_turn;
              *(int *)(val_2 + 0x1233) = *(int *)(val_2 + 0x1233) + 1;
              goto LAB_00076d04;
            }
          }
          else if ((*(char *)(extraout_ECX_02 + 0x1189) == '\b') &&
                  (val_2 = (uint)*(byte *)(extraout_ECX_02 + 0x118a) + extraout_ECX_02,
                  *(byte *)(val_2 + 0x1008) < 199)) {
            str_ptr = (char *)(val_2 + 0x1008);
            *str_ptr = *str_ptr + '\x01';
            *(int *)(extraout_ECX_02 + 0x122f) = *(int *)(extraout_ECX_02 + 0x122f) + 1;
            *(undefined1 *)(extraout_ECX_02 + 0x1016 + (uint)*(byte *)(extraout_ECX_02 + 0x118a)) =
                 1;
            player_off = (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
            goto joined_r0x00076c8f;
          }
        }
        LbErrorLog(); /* LbErrorLog("workshop.cpp", line 139, "BAD DOOR CHOICE") */
        uval = 0;
        goto LAB_00076d0e;
      }
    }
  }
  uval = 1;
LAB_00076d0e:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : workshop_update_player_dungeon_076d14 (Original VA: 0x76d14, Ghidra: FUN_00076d14)
 * Prototype: longlong workshop_update_player_dungeon_076d14(void);
 * Address  : 0x76d14 (Size: 66 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> temple_how_you_sacrifice_neutral_0731f3
 * Callees  : 1 -> workshop_fn_076ee6
 ******************************************************************************/
longlong workshop_update_player_dungeon_076d14(void)

{
  int arg_eax;
  int dungeon_off;
  int val;
  uint arg_edx;
  
  dungeon_off = arg_eax * 0x1508;
  if ((&g_bss_002e1712)[dungeon_off] != '\0') {
    val = workshop_fn_076ee6();
    val = val * 0x100;
    if (val <= *(int *)(&g_bss_002e170e + dungeon_off)) {
      val = *(int *)(&g_bss_002e170e + dungeon_off);
    }
    *(int *)(&g_bss_002e170e + dungeon_off) = val;
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : workshop_what_hell_have_we_076d56 (Original VA: 0x76d56, Ghidra: FUN_00076d56)
 * Prototype: undefined4 workshop_what_hell_have_we_076d56(void);
 * Address  : 0x76d56 (Size: 400 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 238, 277, 290
 * Purpose  : String 'WHAT THE HELL HAVE WE CREATED?'
 * Callers  : 1 -> workshop_door_choice_076b29
 * Callees  : 10 -> effect_allocate_light_effect_024998, event_illegal_event_number_created_027390, inits_allocate_light_object_043f07, sound_fn_06e538, structs_update_creature_control_072af4, move_process_map_subtile_0b28e8, move_fn_0b3b10, room_process_dungeon_room_0c9e8c ...
 ******************************************************************************/
undefined4 workshop_what_hell_have_we_076d56(void)

{
  char ch;
  int arg_eax;
  int val;
  int extraout_ECX;
  int arg_edx;
  int arg_ebx;
  int *int_ptr;
  int iStack_28;
  
  if ((arg_edx == 8) || (arg_edx == 9)) {
    iStack_28 = 0x76d8b;
    val = inits_allocate_light_object_043f07();
  }
  else {
    iStack_28 = 0x76dc0;
    LbErrorLog(); /* LbErrorLog("workshop.cpp", line 238, "WHAT THE HELL HAVE WE CREATED?") */
    val = 0;
  }
  if (val == 0) {
    iStack_28 = 0x76edf;
    LbErrorLog(); /* LbErrorLog("workshop.cpp", line 277, "Could not find room for thing") */
  }
  else {
    iStack_28 = 0x76ddc;
    val = room_process_dungeon_room_0c9e8c();
    if (val != 0) {
      iStack_28 = 0x76df2;
      ch = room_number_slabs_room_zero_0ccf10();
      if (ch != '\0') {
        iStack_28 = 0x76e04;
        move_process_map_subtile_0b28e8();
        iStack_28 = 0x76e12;
        move_fn_0b3b10();
        *(short *)(extraout_ECX + 0x10) = *(short *)(extraout_ECX + 0x10) + 1;
        *(int *)(extraout_ECX + 0x17) = *(int *)(extraout_ECX + 0x17) + 1;
        val = arg_eax * 0x1508 + arg_ebx;
        if (arg_edx == 8) {
          ch = (&g_bss_002e159f)[val];
        }
        else {
          ch = (&g_bss_002e15b0)[val];
        }
        int_ptr = (int *)&stack0xffffffdc;
        if (ch == '\0') {
          int_ptr = &iStack_28;
          iStack_28 = arg_ebx;
          event_illegal_event_number_created_027390();
        }
        *(undefined4 *)((int)int_ptr + -4) = 0x76e73;
        effect_allocate_light_effect_024998();
        *(undefined4 *)((int)int_ptr + -4) = 0x100;
        *(undefined4 *)((int)int_ptr + -8) = 2;
        *(undefined4 *)((int)int_ptr + -0xc) = 0;
        *(undefined4 *)((int)int_ptr + -0x10) = 3;
        *(undefined4 *)((int)int_ptr + -0x14) = 0x76e91;
        sound_fn_06e538();
        return 1;
      }
    }
    iStack_28 = 0x76eaf;
    LbErrorLog(); /* LbErrorLog("workshop.cpp", line 290, "COULD NOT CREATE SPELL") */
    iStack_28 = 0x76eb8;
    structs_update_creature_control_072af4();
  }
  return 0;
}

/******************************************************************************
 * Function : workshop_fn_076ee6 (Original VA: 0x76ee6, Ghidra: FUN_00076ee6)
 * Prototype: undefined4 workshop_fn_076ee6(void);
 * Address  : 0x76ee6 (Size: 56 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 310
 * Purpose  : Module workshop.cpp procedure @ 0x076ee6
 * Callers  : 3 -> newgui_update_player_dungeon_05686f, workshop_door_choice_076b29, workshop_update_player_dungeon_076d14
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 workshop_fn_076ee6(void)

{
  int arg_eax;
  int arg_edx;
  
  if (arg_eax == 8) {
    return *(undefined4 *)(&g_bss_001ae898 + arg_edx * 0x14);
  }
  if (arg_eax == 9) {
    return *(undefined4 *)(&g_bss_001ae924 + arg_edx * 0x14);
  }
  LbErrorLog(); /* LbErrorLog("workshop.cpp", line 310, "INVALID TYPE") */
  return 0;
}

/******************************************************************************
 * Function : workshop_fn_076f1e (Original VA: 0x76f1e, Ghidra: FUN_00076f1e)
 * Prototype: undefined8 workshop_fn_076f1e(void);
 * Address  : 0x76f1e (Size: 277 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Purpose  : Module workshop.cpp procedure @ 0x076f1e
 * Callers  : 1 -> workshop_door_choice_076b29
 * Callees  : 1 -> workshop_fn_077547
 ******************************************************************************/
undefined8 workshop_fn_076f1e(void)

{
  int val;
  char ch;
  int val_2;
  uint uval;
  undefined4 arg_edx;
  int extraout_EDX;
  uint uval_2;
  int val_3;
  int local_24;
  int local_20;
  int local_1c;
  
  workshop_fn_077547();
  ch = '\0';
  uval_2 = 0x7fffffff;
  local_1c = 1;
  val_2 = 0x14;
  val_3 = 0x7fffffff;
  val = extraout_EDX;
  do {
    if ((((*(char *)(val + 0x1023) != '\0') &&
         (*(int *)(&g_bss_001ae920 + val_2) <= *(int *)(extraout_EDX + 0x118f))) &&
        (uval = (uint)*(byte *)(val + 0x101e), uval < 199)) &&
       ((uval < uval_2 || ((uval_2 == uval && (*(int *)(&g_bss_001ae920 + val_2) < val_3)))))) {
      local_24 = local_1c;
      ch = '\t';
      val_3 = *(int *)(&g_bss_001ae920 + val_2);
      uval_2 = uval;
    }
    local_1c = local_1c + 1;
    val_2 = val_2 + 0x14;
    val = val + 1;
  } while (local_1c < 5);
  local_20 = 1;
  val_2 = 0x14;
  val = extraout_EDX;
  do {
    if ((((*(char *)(val + 0x1010) != '\0') &&
         (*(int *)(&g_bss_001ae894 + val_2) <= *(int *)(extraout_EDX + 0x118f))) &&
        (uval = (uint)*(byte *)(val + 0x1009), uval < 199)) &&
       ((uval < uval_2 || ((uval_2 == uval && (*(int *)(&g_bss_001ae894 + val_2) < val_3)))))) {
      local_24 = local_20;
      ch = '\b';
      val_3 = *(int *)(&g_bss_001ae894 + val_2);
      uval_2 = uval;
    }
    local_20 = local_20 + 1;
    val_2 = val_2 + 0x14;
    val = val + 1;
  } while (local_20 < 7);
  if (ch != '\0') {
    *(char *)(extraout_EDX + 0x1189) = ch;
    *(undefined1 *)(extraout_EDX + 0x118a) = (undefined1)local_24;
  }
  return CONCAT44(arg_edx,(uint)(ch != '\0'));
}

/******************************************************************************
 * Function : workshop_update_slab_subtile_columns_077033 (Original VA: 0x77033, Ghidra: FUN_00077033)
 * Prototype: undefined4 workshop_update_slab_subtile_columns_077033(void);
 * Address  : 0x77033 (Size: 1300 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> workshop_update_player_dungeon_0769ea
 * Callees  : 7 -> anger_fn_010010, instance_negative_instance_049bfc, person_fn_063b6d, workshop_illegal_setup_0775be, workshop_update_slab_subtile_columns_077647, workshop_update_slab_subtile_columns_07779d, move_fn_0b4ac4
 ******************************************************************************/
undefined4 workshop_update_slab_subtile_columns_077033(void)

{
  int cctrl_ptr;
  char thing_ptr;
  int thing;
  int thing_ptr_2;
  uint thing_ptr_3;
  int extraout_ECX;
  int thing_ptr_4;
  short *val;
  undefined4 uStack_3c;
  short local_38;
  short local_36;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  
  val = &local_38;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (((uint)(g_game_turn - *(int *)(&g_bss_002e1714 + *(char *)(thing + 6) * 0x1508)) < 0x32) && /* thing->owner */
     (((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 3) == 0)) { /* thing->index_or_angle */
    if (*(char *)(cctrl_ptr + 0xd2) != '\0') {
      return 1;
    }
LAB_00077535:
    uStack_3c = 0;
    instance_negative_instance_049bfc();
    return 1;
  }
  if (*(char *)(cctrl_ptr + 0xd2) != '\0') {
    return 1;
  }
  thing_ptr = *(char *)(cctrl_ptr + 0x9a);
  if (thing_ptr == '\x01') {
    *(char *)(cctrl_ptr + 0x9e) = *(char *)(cctrl_ptr + 0x9e) + -1;
    if (*(char *)(cctrl_ptr + 0x9e) < '\x01') {
      uStack_3c = 0x770d3;
      workshop_update_slab_subtile_columns_07779d();
      *(undefined1 *)(cctrl_ptr + 0x9e) = 0x32;
      return 1;
    }
    val = (short *)&uStack_3c;
    uStack_3c = 0;
    thing_ptr = move_fn_0b4ac4();
    if (thing_ptr != '\x01') {
LAB_000771a1:
      if (thing_ptr != -1) {
        return 1;
      }
      person_fn_063b6d();
      return 1;
    }
    for (thing_ptr_3 = (*(uint *)((int)&g_map_subtiles +
                           (((&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)] * 3 + 1) * 0x100 +
                           (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)] * 3 + 1) * 5 + 1) & 0x3fffff) >>
                 0xb; thing_ptr_3 != 0; thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2)) {
      if (((*(char *)((&g_thing_ptrs)[thing_ptr_3] + 0x1f) == '\x01') &&
          ((thing_ptr = *(char *)((&g_thing_ptrs)[thing_ptr_3] + 0x1a), thing_ptr == 'r' || (thing_ptr == '\x1a'))))
         && (*(char *)((&g_thing_ptrs)[thing_ptr_3] + 6) == *(char *)(thing + 6))) { /* thing->owner */
        *(undefined1 *)(cctrl_ptr + 0x9a) = 2;
        *(undefined1 *)(cctrl_ptr + 0x9e) = 0x32;
        return 1;
      }
    }
  }
  else if (thing_ptr == '\x02') {
    local_2c = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0xe)];
    local_18 = (&g_subtile_to_slab_lut)[*(byte *)(thing + 0x10)];
    local_20 = 0;
    for (thing_ptr_2 = 0; thing_ptr_2 < 8; thing_ptr_2 = thing_ptr_2 + 2) {
      local_28 = local_18 + (char)(&g_data_0018b67f)[thing_ptr_2];
      thing_ptr_4 = *(char *)((int)&g_data_0018b67b + thing_ptr_2 + 3) + local_2c;
      if ((&g_slabmap_base)[(local_28 * 0x55 + thing_ptr_4) * 6] == '\x1c') {
        local_24 = local_28 * 3;
        local_30 = (uint)((&g_slabmap)
                          [((&g_data_0019033f)[thing_ptr_4 * 3] + (&g_data_0019033f)[local_28 * 3] * 0x55) * 6]
                         & 7);
        if ((int)*(char *)(thing + 6) == local_30) { /* thing->owner */
          local_30 = ((char)(&g_data_001917b9)[thing_ptr_2] + local_24) * 0x100;
          thing_ptr_3 = (*(uint *)((int)&g_map_subtiles +
                            ((int)(char)(&g_data_001917b8)[thing_ptr_2] + thing_ptr_4 * 3 + local_30) * 5 + 1) &
                  0x3fffff) >> 0xb;
          while ((thing_ptr_3 != 0 &&
                 (((thing_ptr_4 = (&g_thing_ptrs)[thing_ptr_3], *(char *)(thing_ptr_4 + 0x1f) != '\x05' || /* thing->class_id */
                   (*(char *)(thing_ptr_4 + 7) != '-')) ||
                  ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_4 + 100)] + 0x9a) < 2 || /* thing->ccontrol_idx */
                   (*(char *)(thing_ptr_4 + 6) != *(char *)(thing + 6)))))))) { /* thing->owner */
            thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2);
          }
          if (thing_ptr_3 == 0) {
            thing_ptr_3 = (*(uint *)((int)&g_map_subtiles +
                              ((*(char *)((int)&g_data_0018b67b + thing_ptr_2 + 3) + local_2c) * 3 +
                               ((char)(&g_data_0018b67f)[thing_ptr_2] + local_18) * 0x300 + 0x101) * 5 + 1) &
                    0x3fffff) >> 0xb;
            while ((thing_ptr_3 != 0 &&
                   ((*(char *)((&g_thing_ptrs)[thing_ptr_3] + 0x1f) != '\x01' ||
                    (((thing_ptr = *(char *)((&g_thing_ptrs)[thing_ptr_3] + 0x1a), thing_ptr != 'r' &&
                      (thing_ptr != '\x1a')) ||
                     (*(char *)((&g_thing_ptrs)[thing_ptr_3] + 6) != *(char *)(thing + 6)))))))) { /* thing->owner */
              thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2);
            }
          }
          if (thing_ptr_3 == 0) {
            *(char *)(cctrl_ptr + 0x9c) =
                 *(char *)(&g_subtile_to_slab_lut + *(byte *)(thing + 0xe)) * '\x03' + '\x01';
            *(char *)(cctrl_ptr + 0x9d) =
                 *(char *)(&g_subtile_to_slab_lut + *(byte *)(thing + 0x10)) * '\x03' + '\x01';
            local_2c = (*(char *)((int)&g_data_0018b67b + local_20 * 2 + 3) + local_2c) * 3 +
                       (int)(char)(&g_data_001917b8)[local_20 * 2];
            local_18 = ((char)(&g_data_0018b67f)[local_20 * 2] + local_18) * 3 +
                       (int)(char)(&g_data_001917b9)[local_20 * 2];
            uStack_3c = 0x773c4;
            workshop_illegal_setup_0775be();
            *(undefined1 *)(cctrl_ptr + 0x9a) = 3;
            break;
          }
        }
      }
      local_20 = local_20 + 1;
    }
    val = &local_38;
    if (*(char *)(cctrl_ptr + 0x9a) != '\x02') {
      return 1;
    }
  }
  else {
    if (thing_ptr == '\x03') {
      uStack_3c = 0;
      thing_ptr = move_fn_0b4ac4();
      if (thing_ptr == '\x01') {
        thing_ptr_3 = (*(uint *)((int)&g_map_subtiles +
                          (uint)CONCAT11(*(undefined1 *)(thing + 0x10),
                                         *(undefined1 *)(thing + 0xe)) * 5 + 1) & 0x3fffff) >> 0xb;
        do {
          thing_ptr_2 = 0;
          if (thing_ptr_3 == 0) {
LAB_000774a8:
            if (thing_ptr_2 != 0) {
              return 1;
            }
            *(undefined1 *)(cctrl_ptr + 0x9a) = 4;
            return 1;
          }
          if ((((thing != (&g_thing_ptrs)[thing_ptr_3]) &&
               (thing_ptr_2 = (&g_thing_ptrs)[thing_ptr_3], *(char *)(thing_ptr_2 + 0x1f) == '\x05')) && /* thing->class_id */
              (*(char *)(thing_ptr_2 + 7) == '-')) &&
             ((1 < *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x9a) && /* thing->ccontrol_idx */
              (*(char *)(thing_ptr_2 + 6) == *(char *)(thing + 6))))) { /* thing->owner */
            workshop_update_slab_subtile_columns_077647();
            thing_ptr_2 = extraout_ECX;
            goto LAB_000774a8;
          }
          thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2);
        } while( true );
      }
      goto LAB_000771a1;
    }
    if (thing_ptr == '\x04') {
      local_38 = (ushort)*(byte *)(cctrl_ptr + 0x9c) * 0x100 + 0x80;
      local_36 = (ushort)*(byte *)(cctrl_ptr + 0x9d) * 0x100 + 0x80;
      uStack_3c = 0x774f3;
      thing_ptr_2 = anger_fn_010010();
      if (0x37 < thing_ptr_2) {
        return 1;
      }
      *(undefined1 *)(cctrl_ptr + 0x9a) = 5;
      *(undefined1 *)(cctrl_ptr + 0x9b) = 0x4b;
      return 1;
    }
    *(char *)(cctrl_ptr + 0x9b) = *(char *)(cctrl_ptr + 0x9b) + -1;
    if (0 < *(char *)(cctrl_ptr + 0x9b)) {
      if ((int)*(char *)(cctrl_ptr + 0x9b) % 8 != 0) {
        return 1;
      }
      goto LAB_00077535;
    }
  }
  *(undefined4 *)((int)val + -4) = 0x773ea;
  workshop_update_slab_subtile_columns_077647();
  return 1;
}

/******************************************************************************
 * Function : workshop_fn_077547 (Original VA: 0x77547, Ghidra: FUN_00077547)
 * Prototype: undefined8 workshop_fn_077547(void);
 * Address  : 0x77547 (Size: 119 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Purpose  : Module workshop.cpp procedure @ 0x077547
 * Callers  : 1 -> workshop_fn_076f1e
 * Callees  : 1 -> room_process_dungeon_room_0d11f4
 ******************************************************************************/
undefined8 workshop_fn_077547(void)

{
  int arg_eax;
  uint uval;
  undefined4 arg_edx;
  
  uval = room_process_dungeon_room_0d11f4();
  if (uval < 0x11) {
    if (uval < 10) {
      *(undefined4 *)(arg_eax + 0x118f) = 0;
    }
    else {
      *(undefined4 *)(arg_eax + 0x118f) = 1;
    }
    goto LAB_000775b6;
  }
  if (uval < 0x14) {
LAB_00077583:
    *(undefined4 *)(arg_eax + 0x118f) = 2;
  }
  else {
    if (0x14 < uval) {
      if (uval < 0x1a) goto LAB_00077583;
      if (uval < 0x25) {
        *(undefined4 *)(arg_eax + 0x118f) = 3;
        goto LAB_000775b6;
      }
    }
    *(undefined4 *)(arg_eax + 0x118f) = 4;
  }
LAB_000775b6:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : workshop_illegal_setup_0775be (Original VA: 0x775be, Ghidra: FUN_000775be)
 * Prototype: void workshop_illegal_setup_0775be(void);
 * Address  : 0x775be (Size: 137 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 661
 * Purpose  : String 'Illegal setup to X%d Y%d'
 * Callers  : 3 -> workshop_update_slab_subtile_columns_077033, workshop_update_slab_subtile_columns_077647, workshop_update_slab_subtile_columns_07779d
 * Callees  : 5 -> person_fn_063b6d, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, LbErrorLog, dk_sprintf
 ******************************************************************************/
void workshop_illegal_setup_0775be(void)

{
  int cctrl_ptr;
  undefined2 uval;
  int thing;
  int val;
  int arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(char *)(cctrl_ptr + 0x2e) = (char)(arg_edx % 0x100);
  *(undefined1 *)(cctrl_ptr + 0x2d) = 0x80;
  *(char *)(cctrl_ptr + 0x30) = (char)(arg_edx / 0x100);
  *(undefined1 *)(cctrl_ptr + 0x2f) = 0x80;
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(cctrl_ptr + 0x31) = uval;
  val = ceiling_process_map_subtile_07dbc0();
  if (val != 0) {
    dk_sprintf(&g_log_sprintf_buf,s_Illegal_setup_to_X_d_Y_d_00167e33,*(undefined1 *)(cctrl_ptr + 0x2e),
                 *(undefined1 *)(cctrl_ptr + 0x30));
    LbErrorLog(); /* LbErrorLog("workshop.cpp", line 661, g_log_buf) */
    person_fn_063b6d();
  }
  return;
}

/******************************************************************************
 * Function : workshop_update_slab_subtile_columns_077647 (Original VA: 0x77647, Ghidra: FUN_00077647)
 * Prototype: void workshop_update_slab_subtile_columns_077647(void);
 * Address  : 0x77647 (Size: 342 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 3 -> workshop_update_creature_control_076970, workshop_update_slab_subtile_columns_077033, workshop_update_slab_subtile_columns_07779d
 * Callees  : 1 -> workshop_illegal_setup_0775be
 ******************************************************************************/
void workshop_update_slab_subtile_columns_077647(void)

{
  int thing;
  int slab_coord;
  int arg_ebx;
  int cctrl_ptr;
  int val;
  uint rand_seed;
  int local_18;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (arg_ebx != 0) {
    *(undefined1 *)(cctrl_ptr + 0x9e) = 0x32;
  }
  *(undefined1 *)(cctrl_ptr + 0x9a) = 1;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  local_18 = 0;
  cctrl_ptr = 0;
  rand_seed = g_action_random_seed >> 0xd;
  g_action_random_seed = rand_seed | g_action_random_seed * 0x80000;
  rand_seed = rand_seed & 7;
  do {
    if ((1 < cctrl_ptr) || (8 < local_18)) {
      if (1 < cctrl_ptr) {
        workshop_illegal_setup_0775be();
      }
      return;
    }
    cctrl_ptr = 0;
    val = (int)*(short *)((int)&g_data_0018b624 + rand_seed * 2 + 2) +
            (uint)CONCAT11(*(undefined1 *)(thing + 0x10),*(undefined1 *)(thing + 0xe));
    while (((*(byte *)((int)&g_map_subtiles + val * 5) & 2) != 0 &&
           ((*(byte *)((int)&g_map_subtiles + val * 5) & 0x10) == 0))) {
      slab_coord = ((&g_subtile_to_slab_lut)[val % 0x100] +
              (&g_subtile_to_slab_lut)
              [(int)((val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0)) >> 8] *
              0x55) * 6;
      if (((uint)((&g_slabmap)[slab_coord] & 7) != (int)*(char *)(thing + 6)) || /* thing->owner */
         ((*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[slab_coord] * 0x45) != 8 || (7 < cctrl_ptr)
          ))) break;
      cctrl_ptr = cctrl_ptr + 1;
      val = val + *(short *)((int)&g_data_0018b624 + rand_seed * 2 + 2);
    }
    if (cctrl_ptr < 2) {
      rand_seed = rand_seed + 1 & 7;
    }
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : workshop_update_slab_subtile_columns_07779d (Original VA: 0x7779d, Ghidra: FUN_0007779d)
 * Prototype: void workshop_update_slab_subtile_columns_07779d(void);
 * Address  : 0x7779d (Size: 355 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> workshop_update_slab_subtile_columns_077033
 * Callees  : 2 -> workshop_illegal_setup_0775be, workshop_update_slab_subtile_columns_077647
 ******************************************************************************/
void workshop_update_slab_subtile_columns_07779d(void)

{
  char thing_ptr;
  ushort uval;
  uint thing_ptr_2;
  int arg_eax;
  int room_off;
  uint thing_ptr_3;
  uint uval_2;
  uint local_24;
  int local_20;
  
  room_off = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
                       (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55) * 6] * 0x45;
  local_24 = 0xffffffff;
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  thing_ptr_3 = g_action_random_seed % (uint)*(ushort *)(&g_bss_002ddd56 + room_off);
  uval = *(ushort *)(&g_bss_002ddd52 + room_off);
  while ((uval_2 = (uint)uval, 0 < (int)thing_ptr_3 && (uval_2 != 0))) {
    thing_ptr_3 = thing_ptr_3 - 1;
    uval = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(ushort *)(&g_bss_002ddd56 + room_off);
      local_20 = local_20 + 1) {
    if (uval_2 == 0) {
      uval_2 = (uint)*(ushort *)(&g_bss_002ddd52 + room_off);
    }
    thing_ptr_3 = (*(uint *)((int)&g_map_subtiles +
                      ((uval_2 % 0x55) * 3 + 0x101 + (uval_2 / 0x55) * 0x300) * 5 + 1) & 0x3fffff) >>
            0xb;
    while ((thing_ptr_2 = local_24, thing_ptr_3 != 0 &&
           ((*(char *)((&g_thing_ptrs)[thing_ptr_3] + 0x1f) != '\x01' ||
            (((thing_ptr = *(char *)((&g_thing_ptrs)[thing_ptr_3] + 0x1a), thing_ptr != 'r' && (thing_ptr != '\x1a'))
             || (thing_ptr_2 = thing_ptr_3, *(char *)((&g_thing_ptrs)[thing_ptr_3] + 6) != *(char *)(arg_eax + 6)))))))
          ) {
      thing_ptr_3 = (uint)*(ushort *)((&g_thing_ptrs)[thing_ptr_3] + 2);
    }
    local_24 = thing_ptr_2;
    uval_2 = (uint)*(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
  }
  if (local_24 == 0xffffffff) {
    workshop_update_slab_subtile_columns_077647();
  }
  else {
    workshop_illegal_setup_0775be();
  }
  return;
}

/******************************************************************************
 * Function : workshop_content_077900 (Original VA: 0x77900, Ghidra: FUN_00077900)
 * Prototype: longlong workshop_content_077900(void);
 * Address  : 0x77900 (Size: 60 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 791
 * Purpose  : String 'INVALID WORKSHOP CONTENT'
 * Callers  : 2 -> person_update_creature_and_thing_0645dd, workshop_crate_workshop_ok_07795d
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
longlong workshop_content_077900(void)

{
  int camera;
  uint arg_edx;
  
  if ((*(short *)(camera + 0x10) != 0) && (0 < *(int *)(camera + 0x17))) { /* camera->zoom */
    *(short *)(camera + 0x10) = *(short *)(camera + 0x10) + -1;
    *(int *)(camera + 0x17) = *(int *)(camera + 0x17) + -1; /* camera->zoom */
    return CONCAT44(arg_edx,1);
  }
  LbErrorLog(); /* LbErrorLog("workshop.cpp", line 791, "INVALID WORKSHOP CONTENT") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : workshop_fn_07793c (Original VA: 0x7793c, Ghidra: FUN_0007793c)
 * Prototype: longlong workshop_fn_07793c(void);
 * Address  : 0x7793c (Size: 33 bytes)
 * Module   : workshop.cpp [contiguous_same_unit_span]
 * Purpose  : Module workshop.cpp procedure @ 0x07793c
 * Callers  : 1 -> person_update_creature_and_thing_0647b6
 * Callees  : 0 -> 
 ******************************************************************************/
longlong workshop_fn_07793c(void)

{
  int camera;
  uint arg_edx;
  
  if (*(ushort *)(camera + 0x10) < *(ushort *)(camera + 0xe)) {
    *(short *)(camera + 0x10) = *(short *)(camera + 0x10) + 1;
    *(int *)(camera + 0x17) = *(int *)(camera + 0x17) + 1; /* camera->zoom */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : workshop_crate_workshop_ok_07795d (Original VA: 0x7795d, Ghidra: FUN_0007795d)
 * Prototype: undefined4 workshop_crate_workshop_ok_07795d(void);
 * Address  : 0x7795d (Size: 158 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 830
 * Purpose  : String 'CRATE NOT IN A WORKSHOP - ok'
 * Callers  : 3 -> comptask_sell_item_type_01cd80, process_players_dungeon_command_packet, packet_activate_dungeon_special_or_spell
 * Callees  : 5 -> effect_allocate_light_effect_024998, structs_update_creature_control_072af4, workshop_content_077900, room_update_slab_subtile_columns_0d0f50, LbErrorLog
 ******************************************************************************/
undefined4 workshop_crate_workshop_ok_07795d(void)

{
  byte *thing_ptr;
  int arg_eax;
  int val;
  uint uval;
  uint arg_edx;
  
  uval = g_bss_002e6ec6;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    if (thing_ptr == g_thing_ptrs) {
      return 0;
    }
    if (((((*thing_ptr & 1) != 0) && (thing_ptr[0x1a] == arg_edx)) && ((char)thing_ptr[6] == arg_eax)) &&
       (((*thing_ptr & 0x10) == 0 && ((thing_ptr[1] & 2) == 0)))) break;
    uval = (uint)*(ushort *)(thing_ptr + 0x67);
  }
  val = room_update_slab_subtile_columns_0d0f50();
  if ((val == 0) || (*(short *)(val + 10) != 8)) {
    LbErrorLog(); /* LbErrorLog("workshop.cpp", line 830, "CRATE NOT IN A WORKSHOP - ok") */
  }
  else {
    workshop_content_077900();
  }
  effect_allocate_light_effect_024998();
  structs_update_creature_control_072af4();
  return 1;
}

/******************************************************************************
 * Function : workshop_illegal_item_class_0779fb (Original VA: 0x779fb, Ghidra: FUN_000779fb)
 * Prototype: undefined4 workshop_illegal_item_class_0779fb(void);
 * Address  : 0x779fb (Size: 96 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 889
 * Purpose  : String 'ILLEGAL ITEM CLASS'
 * Callers  : 3 -> person_update_creature_and_thing_0647b6, room_bloody_hell_spells_reposition_0cf19c, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 workshop_illegal_item_class_0779fb(void)

{
  char *str_ptr;
  int dungeon_off;
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  dungeon_off = arg_ebx + arg_eax * 0x1508;
  if (arg_edx == 8) {
    *(undefined1 *)((int)&g_dungeons + dungeon_off + 0x1016) = 1;
    str_ptr = (char *)((int)&g_dungeons + dungeon_off + 0x1008);
    *str_ptr = *str_ptr + '\x01';
  }
  else {
    if (arg_edx != 9) {
      LbErrorLog(); /* LbErrorLog("workshop.cpp", line 889, "ILLEGAL ITEM CLASS") */
      return 0;
    }
    *(undefined1 *)((int)&g_dungeons + dungeon_off + 0x1027) = 1;
    str_ptr = (char *)((int)&g_dungeons + dungeon_off + 0x101d);
    *str_ptr = *str_ptr + '\x01';
  }
  return 1;
}

/******************************************************************************
 * Function : workshop_item_class_077a5b (Original VA: 0x77a5b, Ghidra: FUN_00077a5b)
 * Prototype: undefined4 workshop_item_class_077a5b(void);
 * Address  : 0x77a5b (Size: 115 bytes)
 * Module   : workshop.cpp [direct_file_string_xref]
 * OrigLine : workshop.cpp lines 924
 * Purpose  : String 'INVALID ITEM CLASS'
 * Callers  : 8 -> comptask_sell_item_type_01cd80, input_game_action_048c77, process_players_dungeon_command_packet, packet_activate_dungeon_special_or_spell, person_update_creature_and_thing_0645dd, room_lair_thinks_it_belongs_0c9280, room_bloody_hell_spells_reposition_0cf19c, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 workshop_item_class_077a5b(void)

{
  char *str_ptr;
  int dungeon_off;
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  dungeon_off = arg_ebx + arg_eax * 0x1508;
  if (arg_edx == 8) {
    if (*(char *)((int)&g_dungeons + dungeon_off + 0x1008) != '\0') {
      str_ptr = (char *)((int)&g_dungeons + dungeon_off + 0x1008);
      *str_ptr = *str_ptr + -1;
      return 1;
    }
  }
  else {
    if ((arg_edx == 9) && (*(char *)((int)&g_dungeons + dungeon_off + 0x101d) != '\0')) {
      str_ptr = (char *)((int)&g_dungeons + dungeon_off + 0x101d);
      *str_ptr = *str_ptr + -1;
      *(int *)(&g_bss_002e1808 + arg_eax * 0x1508) = *(int *)(&g_bss_002e1808 + arg_eax * 0x1508) + 1;
      return 1;
    }
    LbErrorLog(); /* LbErrorLog("workshop.cpp", line 924, "INVALID DOOR") */
  }
  return 0;
}

/******************************************************************************
 * Function : workshop_fn_077ad0 (Original VA: 0x77ad0, Ghidra: FUN_00077ad0)
 * Prototype: void workshop_fn_077ad0(void);
 * Address  : 0x77ad0 (Size: 63 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077ad0
 * Callers  : 1 -> process_players_global_packet_action
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
void workshop_fn_077ad0(void)

{
  int arg_eax;
  int val;
  undefined4 uval;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int arg_edx;
  
  *(int *)(arg_eax + 0x25) = *(int *)(arg_eax + 0x25) + arg_edx;
  val = bflib_system_io_fn_0e69fc();
  if (-*(int *)(extraout_ECX + 0x25) == val || -val < *(int *)(extraout_ECX + 0x25)) {
    val_2 = bflib_system_io_fn_0e69fc();
    val = extraout_ECX_01;
    if (val_2 < *(int *)(extraout_ECX_01 + 0x25)) {
      uval = bflib_system_io_fn_0e69fc();
      *(undefined4 *)(extraout_ECX_02 + 0x25) = uval;
      val = extraout_ECX_02;
    }
  }
  else {
    uval = bflib_system_io_fn_0e69fc();
    *(undefined4 *)(extraout_ECX_00 + 0x25) = uval;
    *(int *)(extraout_ECX_00 + 0x25) = -*(int *)(extraout_ECX_00 + 0x25);
    val = extraout_ECX_00;
  }
  *(undefined1 *)(val + 0x29) = 1;
  return;
}

/******************************************************************************
 * Function : workshop_fn_077b0f (Original VA: 0x77b0f, Ghidra: FUN_00077b0f)
 * Prototype: void workshop_fn_077b0f(void);
 * Address  : 0x77b0f (Size: 63 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077b0f
 * Callers  : 1 -> process_players_global_packet_action
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
void workshop_fn_077b0f(void)

{
  int thing;
  int val;
  undefined4 uval;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int arg_edx;
  
  *(int *)(thing + 0x20) = *(int *)(thing + 0x20) + arg_edx; /* thing->model */
  val = bflib_system_io_fn_0e69fc();
  if (-*(int *)(extraout_ECX + 0x20) == val || -val < *(int *)(extraout_ECX + 0x20)) {
    val_2 = bflib_system_io_fn_0e69fc();
    val = extraout_ECX_01;
    if (val_2 < *(int *)(extraout_ECX_01 + 0x20)) {
      uval = bflib_system_io_fn_0e69fc();
      *(undefined4 *)(extraout_ECX_02 + 0x20) = uval;
      val = extraout_ECX_02;
    }
  }
  else {
    uval = bflib_system_io_fn_0e69fc();
    *(undefined4 *)(extraout_ECX_00 + 0x20) = uval;
    *(int *)(extraout_ECX_00 + 0x20) = -*(int *)(extraout_ECX_00 + 0x20);
    val = extraout_ECX_00;
  }
  *(undefined1 *)(val + 0x24) = 1;
  return;
}

/******************************************************************************
 * Function : workshop_fn_077b4e (Original VA: 0x77b4e, Ghidra: FUN_00077b4e)
 * Prototype: void workshop_fn_077b4e(void);
 * Address  : 0x77b4e (Size: 63 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077b4e
 * Callers  : 1 -> process_players_global_packet_action
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
void workshop_fn_077b4e(void)

{
  int gui_btn;
  int thing_ptr;
  undefined4 uval;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int arg_edx;
  
  *(int *)(gui_btn + 0x1b) = *(int *)(gui_btn + 0x1b) + arg_edx; /* gui_btn->id_num */
  thing_ptr = bflib_system_io_fn_0e69fc();
  if (-*(int *)(extraout_ECX + 0x1b) == thing_ptr || -thing_ptr < *(int *)(extraout_ECX + 0x1b)) {
    val = bflib_system_io_fn_0e69fc();
    thing_ptr = extraout_ECX_01;
    if (val < *(int *)(extraout_ECX_01 + 0x1b)) {
      uval = bflib_system_io_fn_0e69fc();
      *(undefined4 *)(extraout_ECX_02 + 0x1b) = uval;
      thing_ptr = extraout_ECX_02;
    }
  }
  else {
    uval = bflib_system_io_fn_0e69fc();
    *(undefined4 *)(extraout_ECX_00 + 0x1b) = uval;
    *(int *)(extraout_ECX_00 + 0x1b) = -*(int *)(extraout_ECX_00 + 0x1b);
    thing_ptr = extraout_ECX_00;
  }
  *(undefined1 *)(thing_ptr + 0x1f) = 1; /* thing->class_id */
  return;
}

/******************************************************************************
 * Function : workshop_fn_077b8d (Original VA: 0x77b8d, Ghidra: FUN_00077b8d)
 * Prototype: void workshop_fn_077b8d(void);
 * Address  : 0x77b8d (Size: 185 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077b8d
 * Callers  : 3 -> update_go_first_person_without_0de6a8, update_go_first_person_without_0e2cd0, update_go_first_person_without_0e31b8
 * Callees  : 5 -> workshop_fn_077c46, workshop_fn_077cf1, workshop_fn_077da0, workshop_fn_077e5c, bflib_system_io_fn_0e69fc
 ******************************************************************************/
void workshop_fn_077b8d(void)

{
  int thing;
  
  if (*(int *)(thing + 0x20) < 0) { /* thing->model */
    bflib_system_io_fn_0e69fc();
    workshop_fn_077da0();
  }
  else if (0 < *(int *)(thing + 0x20)) { /* thing->model */
    bflib_system_io_fn_0e69fc();
    workshop_fn_077e5c();
  }
  if (*(char *)(thing + 0x24) == '\0') {
    *(int *)(thing + 0x20) = *(int *)(thing + 0x20) / 2; /* thing->model */
  }
  else {
    *(undefined1 *)(thing + 0x24) = 0;
  }
  if (*(int *)(thing + 0x25) < 0) {
    bflib_system_io_fn_0e69fc();
    workshop_fn_077c46();
  }
  else if (0 < *(int *)(thing + 0x25)) {
    bflib_system_io_fn_0e69fc();
    workshop_fn_077cf1();
  }
  if (*(char *)(thing + 0x29) == '\0') {
    *(int *)(thing + 0x25) = *(int *)(thing + 0x25) / 2;
  }
  else {
    *(undefined1 *)(thing + 0x29) = 0;
  }
  if (*(int *)(thing + 0x1b) != 0) { /* thing->index_or_angle */
    *(uint *)(thing + 7) = *(int *)(thing + 7) + *(int *)(thing + 0x1b) & 0x7ff; /* thing->index_or_angle */
  }
  if (*(char *)(thing + 0x1f) != '\0') { /* thing->class_id */
    *(undefined1 *)(thing + 0x1f) = 0; /* thing->class_id */
    return;
  }
  *(int *)(thing + 0x1b) = *(int *)(thing + 0x1b) / 2; /* thing->index_or_angle */
  return;
}

/******************************************************************************
 * Function : workshop_fn_077c46 (Original VA: 0x77c46, Ghidra: FUN_00077c46)
 * Prototype: void workshop_fn_077c46(void);
 * Address  : 0x77c46 (Size: 171 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077c46
 * Callers  : 1 -> workshop_fn_077b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_077c46(void)

{
  byte flag;
  ushort *arg_eax;
  int arg_edx;
  int val;
  int val_2;
  bool flag_2;
  
  flag = (byte)arg_eax[3];
  if (flag < 3) {
    flag_2 = flag == 2;
  }
  else {
    if (flag < 4) {
      val = (uint)arg_eax[1] - arg_edx;
      if (val < 0) {
        val = 0;
      }
      else if (0xffff < val) {
        val = 0xffff;
      }
      goto LAB_00077cc1;
    }
    flag_2 = flag == 5;
  }
  if (!flag_2) {
    return;
  }
  val_2 = ((&g_slab_attr_table)[*(int *)((int)arg_eax + 7)] * arg_edx >> 0x10) + (uint)*arg_eax;
  val = (-(arg_edx * (int)(&PTR_LAB_00192fe0)[*(int *)((int)arg_eax + 7)] >> 8) >> 8) +
          (uint)arg_eax[1];
  if (val_2 < 0) {
    val_2 = 0;
  }
  else if (0xffff < val_2) {
    val_2 = 0xffff;
  }
  if (val < 0) {
    val = 0;
  }
  else if (0xffff < val) {
    val = 0xffff;
  }
  *arg_eax = (ushort)val_2;
LAB_00077cc1:
  arg_eax[1] = (ushort)val;
  return;
}

/******************************************************************************
 * Function : workshop_fn_077cf1 (Original VA: 0x77cf1, Ghidra: FUN_00077cf1)
 * Prototype: void workshop_fn_077cf1(void);
 * Address  : 0x77cf1 (Size: 175 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077cf1
 * Callers  : 1 -> workshop_fn_077b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_077cf1(void)

{
  byte flag;
  ushort *arg_eax;
  int val;
  int arg_edx;
  int val_2;
  bool flag_2;
  
  flag = (byte)arg_eax[3];
  if (flag < 3) {
    flag_2 = flag == 2;
  }
  else {
    if (flag < 4) {
      val = (uint)arg_eax[1] + arg_edx;
      if (val < 0) {
        val = 0;
      }
      else if (0xffff < val) {
        val = 0xffff;
      }
      goto LAB_00077d70;
    }
    flag_2 = flag == 5;
  }
  if (!flag_2) {
    return;
  }
  val_2 = (uint)*arg_eax - ((&g_slab_attr_table)[*(int *)((int)arg_eax + 7)] * arg_edx >> 0x10);
  val = (uint)arg_eax[1] -
          (-(arg_edx * (int)(&PTR_LAB_00192fe0)[*(int *)((int)arg_eax + 7)] >> 8) >> 8);
  if (val_2 < 0) {
    val_2 = 0;
  }
  else if (0xffff < val_2) {
    val_2 = 0xffff;
  }
  if (val < 0) {
    val = 0;
  }
  else if (0xffff < val) {
    val = 0xffff;
  }
  *arg_eax = (ushort)val_2;
LAB_00077d70:
  arg_eax[1] = (ushort)val;
  return;
}

/******************************************************************************
 * Function : workshop_fn_077da0 (Original VA: 0x77da0, Ghidra: FUN_00077da0)
 * Prototype: void workshop_fn_077da0(void);
 * Address  : 0x77da0 (Size: 188 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077da0
 * Callers  : 1 -> workshop_fn_077b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_077da0(void)

{
  byte flag;
  ushort *arg_eax;
  int arg_edx;
  uint uval;
  int val;
  int val_2;
  bool flag_2;
  
  flag = (byte)arg_eax[3];
  if (flag < 3) {
    flag_2 = flag == 2;
  }
  else {
    if (flag < 4) {
      val_2 = (uint)*arg_eax - arg_edx;
      if (val_2 < 0) {
        val_2 = 0;
      }
      else if (0xffff < val_2) {
        val_2 = 0xffff;
      }
      *arg_eax = (ushort)val_2;
      return;
    }
    flag_2 = flag == 5;
  }
  if (!flag_2) {
    return;
  }
  uval = *(int *)((int)arg_eax + 7) + 0x200U & 0x7ff;
  val_2 = (uint)*arg_eax - ((&g_slab_attr_table)[uval] * arg_edx >> 0x10);
  val = (uint)arg_eax[1] - (-(arg_edx * (int)(&PTR_LAB_00192fe0)[uval] >> 8) >> 8);
  if (val_2 < 0) {
    val_2 = 0;
  }
  else if (0xffff < val_2) {
    val_2 = 0xffff;
  }
  if (val < 0) {
    val = 0;
  }
  else if (0xffff < val) {
    val = 0xffff;
  }
  *arg_eax = (ushort)val_2;
  arg_eax[1] = (ushort)val;
  return;
}

/******************************************************************************
 * Function : workshop_fn_077e5c (Original VA: 0x77e5c, Ghidra: FUN_00077e5c)
 * Prototype: void workshop_fn_077e5c(void);
 * Address  : 0x77e5c (Size: 186 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077e5c
 * Callers  : 1 -> workshop_fn_077b8d
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_077e5c(void)

{
  byte flag;
  ushort *arg_eax;
  int arg_edx;
  int val;
  uint uval;
  int val_2;
  bool flag_2;
  
  flag = (byte)arg_eax[3];
  if (flag < 3) {
    flag_2 = flag == 2;
  }
  else {
    if (flag < 4) {
      val = (uint)*arg_eax + arg_edx;
      if (val < 0) {
        val = 0;
      }
      else if (0xffff < val) {
        val = 0xffff;
      }
      *arg_eax = (ushort)val;
      return;
    }
    flag_2 = flag == 5;
  }
  if (!flag_2) {
    return;
  }
  uval = *(int *)((int)arg_eax + 7) + 0x200U & 0x7ff;
  val = ((&g_slab_attr_table)[uval] * arg_edx >> 0x10) + (uint)*arg_eax;
  val_2 = (uint)arg_eax[1] + (-(arg_edx * (int)(&PTR_LAB_00192fe0)[uval] >> 8) >> 8);
  if (val < 0) {
    val = 0;
  }
  else if (0xffff < val) {
    val = 0xffff;
  }
  if (val_2 < 0) {
    val_2 = 0;
  }
  else if (0xffff < val_2) {
    val_2 = 0xffff;
  }
  *arg_eax = (ushort)val;
  arg_eax[1] = (ushort)val_2;
  return;
}

/******************************************************************************
 * Function : workshop_fn_077f16 (Original VA: 0x77f16, Ghidra: FUN_00077f16)
 * Prototype: void workshop_fn_077f16(void);
 * Address  : 0x77f16 (Size: 198 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077f16
 * Callers  : 2 -> instance_process_thing_entity_04b2a7, process_players_global_packet_action
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_077f16(void)

{
  byte flag;
  int camera;
  int val;
  int arg_edx;
  int val_2;
  int arg_ebx;
  
  flag = *(byte *)(camera + 6);
  if (flag < 3) {
    if (flag == 2) {
      val = (*(int *)(camera + 0x17) * 100) / 0x55; /* camera->zoom */
      *(int *)(camera + 0x17) = val; /* camera->zoom */
      if (val < arg_ebx) {
        *(int *)(camera + 0x17) = arg_ebx; /* camera->zoom */
        return;
      }
      if (arg_edx < val) {
        *(int *)(camera + 0x17) = arg_edx; /* camera->zoom */
        return;
      }
    }
  }
  else if (flag < 4) {
    val = *(short *)(camera + 4) * 5;
    val_2 = val >> 0x1f;
    val = (int)((val + val_2 * -4) - (uint)(val_2 << 1 < 0)) >> 2;
    if (*(short *)(camera + 4) == val) {
      *(short *)(camera + 4) = *(short *)(camera + 4) + 1;
    }
    else {
      *(short *)(camera + 4) = (short)val;
    }
    if (*(short *)(camera + 4) < 0x10) {
      *(undefined2 *)(camera + 4) = 0x10;
      return;
    }
    if (0x400 < *(short *)(camera + 4)) {
      *(undefined2 *)(camera + 4) = 0x400;
      return;
    }
  }
  else {
    if (flag != 5) {
      return;
    }
    val = (*(int *)(camera + 0x17) * 100) / 0x55; /* camera->zoom */
    *(int *)(camera + 0x17) = val; /* camera->zoom */
    if (val < 0x4000) {
      *(undefined4 *)(camera + 0x17) = 0x4000; /* camera->zoom */
      return;
    }
    if (0x10000 < val) {
      *(undefined4 *)(camera + 0x17) = 0x10000; /* camera->zoom */
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : workshop_fn_077fdc (Original VA: 0x77fdc, Ghidra: FUN_00077fdc)
 * Prototype: void workshop_fn_077fdc(void);
 * Address  : 0x77fdc (Size: 199 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x077fdc
 * Callers  : 2 -> instance_fn_04b792, process_players_global_packet_action
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_077fdc(void)

{
  byte flag;
  int camera;
  int val;
  int arg_edx;
  int arg_ebx;
  
  flag = *(byte *)(camera + 6);
  if (flag < 3) {
    if (flag == 2) {
      val = (*(int *)(camera + 0x17) * 0x55) / 100; /* camera->zoom */
      *(int *)(camera + 0x17) = val; /* camera->zoom */
      if (val < arg_ebx) {
        *(int *)(camera + 0x17) = arg_ebx; /* camera->zoom */
        return;
      }
      if (arg_edx < val) {
        *(int *)(camera + 0x17) = arg_edx; /* camera->zoom */
        return;
      }
    }
  }
  else if (flag < 4) {
    val = ((int)*(short *)(camera + 4) << 2) / 5;
    if (*(short *)(camera + 4) == val) {
      *(short *)(camera + 4) = *(short *)(camera + 4) + 1;
    }
    else {
      *(short *)(camera + 4) = (short)val;
    }
    if (*(short *)(camera + 4) < 0x10) {
      *(undefined2 *)(camera + 4) = 0x10;
      return;
    }
    if (0x400 < *(short *)(camera + 4)) {
      *(undefined2 *)(camera + 4) = 0x400;
      return;
    }
  }
  else {
    if (flag != 5) {
      return;
    }
    val = (*(int *)(camera + 0x17) * 0x55) / 100; /* camera->zoom */
    *(int *)(camera + 0x17) = val; /* camera->zoom */
    if (val < 0x4000) {
      *(undefined4 *)(camera + 0x17) = 0x4000; /* camera->zoom */
      return;
    }
    if (0x10000 < val) {
      *(undefined4 *)(camera + 0x17) = 0x10000; /* camera->zoom */
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : workshop_fn_0780a3 (Original VA: 0x780a3, Ghidra: FUN_000780a3)
 * Prototype: longlong workshop_fn_0780a3(void);
 * Address  : 0x780a3 (Size: 31 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x0780a3
 * Callers  : 5 -> instance_update_player_view_state_04b222, instance_fn_04b792, instance_fn_04b992, newgui_create_floating_spirit_05ce63, process_players_global_packet_action
 * Callees  : 0 -> 
 ******************************************************************************/
longlong workshop_fn_0780a3(void)

{
  byte flag;
  int camera;
  uint arg_edx;
  
  flag = *(byte *)(camera + 6);
  if (1 < flag) {
    if (flag < 3) {
      return CONCAT44(arg_edx,*(undefined4 *)(camera + 0x17)); /* camera->zoom */
    }
    if (flag == 3) {
      return CONCAT44(arg_edx,(int)*(short *)(camera + 4));
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : workshop_fn_0780c2 (Original VA: 0x780c2, Ghidra: FUN_000780c2)
 * Prototype: void workshop_fn_0780c2(void);
 * Address  : 0x780c2 (Size: 29 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x0780c2
 * Callers  : 6 -> instance_process_thing_entity_04b2a7, instance_update_creature_and_thing_04b478, instance_fn_04b792, instance_update_player_view_state_04b7d4, process_players_global_packet_action, creature_update_player_view_state_085f80
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_fn_0780c2(void)

{
  byte flag;
  int camera;
  undefined4 arg_edx;
  
  flag = *(byte *)(camera + 6);
  if (1 < flag) {
    if (flag < 3) {
      *(undefined4 *)(camera + 0x17) = arg_edx; /* camera->zoom */
      return;
    }
    if (flag == 3) {
      *(short *)(camera + 4) = (short)arg_edx;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : workshop_update_player_view_state_0780df (Original VA: 0x780df, Ghidra: FUN_000780df)
 * Prototype: void workshop_update_player_view_state_0780df(void);
 * Address  : 0x780df (Size: 176 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 11 -> game_out_sync_gameturn_036ff4, inits_non_keeper_keeper_game_0402e5, input_maintain_gui_button_state_04823a, newgui_update_player_view_state_05b9c0, packet_build_local_player_turn_packet, workshop_fn_07818f, command_fn_0781c8, draw_update_player_dungeon_0872b8 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void workshop_update_player_view_state_0780df(void)

{
  uint arg_eax;
  int arg_ecx;
  uint arg_edx;
  int player_off;
  int arg_ebx;
  
  if ((g_game_operation_flags & 0x20) == 0) {
    if ((int)arg_eax < 0) {
      arg_eax = 0;
      goto LAB_0007811c;
    }
  }
  else if ((int)arg_eax < 0x8c) {
    arg_eax = 0x8c;
    goto LAB_0007811c;
  }
  if ((int)(uint)g_mouse_cursor_y < (int)arg_eax) {
    arg_eax = (uint)g_mouse_cursor_y;
  }
LAB_0007811c:
  if ((int)arg_edx < 0) {
    arg_edx = 0;
  }
  else if ((int)(uint)g_mouse_cursor_x < (int)arg_edx) {
    arg_edx = (uint)g_mouse_cursor_x;
  }
  if (arg_ebx < 0) {
    arg_ebx = 0;
  }
  if ((int)(uint)g_mouse_cursor_y < (int)(arg_eax + arg_ebx)) {
    arg_ebx = g_mouse_cursor_y - arg_eax;
  }
  if (arg_ecx < 0) {
    arg_ecx = 0;
  }
  else if ((int)(uint)g_mouse_cursor_x < (int)(arg_edx + arg_ecx)) {
    arg_ecx = g_mouse_cursor_x - arg_edx;
  }
  player_off = g_my_player_word._3_1_ * 0x4ef;
  *(short *)(&g_player_hand_thing_idx + player_off) = (short)arg_eax;
  *(short *)(&g_bss_0019d512 + player_off) = (short)arg_edx;
  *(short *)(&g_bss_0019d50c + player_off) = (short)arg_ebx;
  *(short *)(&g_bss_0019d50e + player_off) = (short)arg_ecx;
  return;
}

/******************************************************************************
 * Function : workshop_fn_07818f (Original VA: 0x7818f, Ghidra: FUN_0007818f)
 * Prototype: void workshop_fn_07818f(void);
 * Address  : 0x7818f (Size: 57 bytes)
 * Module   : workshop.cpp [address_order_boundary_interpolation]
 * Purpose  : Module workshop.cpp procedure @ 0x07818f
 * Callers  : 0 -> 
 * Callees  : 1 -> workshop_update_player_view_state_0780df
 ******************************************************************************/
void workshop_fn_07818f(void)

{
  workshop_update_player_view_state_0780df();
  return;
}

