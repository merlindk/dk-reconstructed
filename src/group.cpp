/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: group.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 10
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : group_update_creature_and_thing_039c3e (Original VA: 0x39c3e, Ghidra: FUN_00039c3e)
 * Prototype: undefined8 group_update_creature_and_thing_039c3e(void);
 * Address  : 0x39c3e (Size: 279 bytes)
 * Module   : group.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 10 -> angtool_update_creature_and_thing_011214, barracks_update_creature_control_0138c9, gravyard_update_creature_control_039a74, gravyard_update_creature_control_039ba4, gravyard_fn_039d55, group_infinate_loop_dispand_group_03a237, person_update_creature_control_063a25, person_update_creature_control_063dd3 ...
 * Callees  : 2 -> group_update_creature_and_thing_039de2, group_fn_039e7e
 ******************************************************************************/
undefined8 group_update_creature_and_thing_039c3e(void)

{
  ushort *cctrl_ptr;
  int thing_ptr;
  int thing_ptr_2;
  byte *arg_eax;
  undefined4 arg_edx;
  int cctrl_ptr_2;
  undefined8 thing_ptr_3;
  
  thing_ptr_3 = group_fn_039e7e();
  cctrl_ptr_2 = (int)((ulonglong)thing_ptr_3 >> 0x20);
  if ((int)thing_ptr_3 == 0) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr_2 + 0x78)];
    if (*(short *)(cctrl_ptr_2 + 0x76) == 0) {
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x76) = 0; /* thing->ccontrol_idx */
    }
    else {
      thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr_2 + 0x76)];
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x78) = /* thing->ccontrol_idx */
           *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x76) = /* thing->ccontrol_idx */
           *(undefined2 *)(thing_ptr_2 + 0x1b); /* thing->index_or_angle */
    }
    *(undefined2 *)(cctrl_ptr_2 + 0x76) = 0;
    *(undefined2 *)(cctrl_ptr_2 + 0x78) = 0;
    *(ushort *)(cctrl_ptr_2 + 0x7a) = *(ushort *)(cctrl_ptr_2 + 0x7a) & 0xf000;
    cctrl_ptr_2 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
    if ((*(short *)(cctrl_ptr_2 + 0x78) == 0) && (*(short *)(cctrl_ptr_2 + 0x76) == 0)) {
      *(ushort *)(cctrl_ptr_2 + 0x7a) = *(ushort *)(cctrl_ptr_2 + 0x7a) & 0xf000;
    }
  }
  else if (*(short *)(cctrl_ptr_2 + 0x76) != 0) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(cctrl_ptr_2 + 0x76)];
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x78) = 0; /* thing->ccontrol_idx */
    *(undefined2 *)(cctrl_ptr_2 + 0x76) = 0;
    *(undefined2 *)(cctrl_ptr_2 + 0x78) = 0;
    *(ushort *)(cctrl_ptr_2 + 0x7a) = *(ushort *)(cctrl_ptr_2 + 0x7a) & 0xf000;
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x76) == 0) { /* thing->ccontrol_idx */
      cctrl_ptr = (ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7a); /* thing->ccontrol_idx */
      *cctrl_ptr = *cctrl_ptr & 0xf000;
    }
    else {
      group_update_creature_and_thing_039de2();
    }
  }
  *arg_eax = *arg_eax & 0xbf;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : group_update_creature_and_thing_039dab (Original VA: 0x39dab, Ghidra: FUN_00039dab)
 * Prototype: void group_update_creature_and_thing_039dab(void);
 * Address  : 0x39dab (Size: 55 bytes)
 * Module   : group.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> gravyard_update_creature_control_039a74, group_infinate_loop_dispand_group_03a237, group_infinate_loop_dispand_group_03a32d
 * Callees  : 0 -> 
 ******************************************************************************/
void group_update_creature_and_thing_039dab(void)

{
  int thing;
  
  if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7a) & 0xfff) != 0) { /* thing->ccontrol_idx */
    while (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x76) != 0) { /* thing->ccontrol_idx */
      thing = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x76)]; /* thing->ccontrol_idx */
    }
  }
  return;
}

/******************************************************************************
 * Function : group_update_creature_and_thing_039de2 (Original VA: 0x39de2, Ghidra: FUN_00039de2)
 * Prototype: void group_update_creature_and_thing_039de2(void);
 * Address  : 0x39de2 (Size: 84 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> gravyard_update_creature_control_039ba4, group_update_creature_and_thing_039c3e
 * Callees  : 0 -> 
 ******************************************************************************/
void group_update_creature_and_thing_039de2(void)

{
  ushort *word_ptr;
  int cctrl_ptr;
  uint thing;
  ushort arg_dx;
  uint thing_ptr;
  
  for (thing_ptr = thing; g_thing_ptrs < thing_ptr;
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x76)]) { /* thing->ccontrol_idx */
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]; /* thing->ccontrol_idx */
    word_ptr = (ushort *)(cctrl_ptr + 0x7a);
    *word_ptr = *word_ptr & 0xf000;
    word_ptr = (ushort *)(cctrl_ptr + 0x7a);
    *word_ptr = *word_ptr | arg_dx & 0xfff;
  }
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7b) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7b) & 0xf; /* thing->ccontrol_idx */
  return;
}

/******************************************************************************
 * Function : group_update_creature_and_thing_039e36 (Original VA: 0x39e36, Ghidra: FUN_00039e36)
 * Prototype: undefined8 group_update_creature_and_thing_039e36(void);
 * Address  : 0x39e36 (Size: 72 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> script_party_big_0688a4
 * Callees  : 1 -> gravyard_update_creature_and_thing_039d83
 ******************************************************************************/
undefined8 group_update_creature_and_thing_039e36(void)

{
  uint thing_ptr;
  undefined4 arg_edx;
  byte cctrl_ptr;
  
  thing_ptr = gravyard_update_creature_and_thing_039d83();
  cctrl_ptr = 0;
  if (thing_ptr != 0) {
    for (; g_thing_ptrs < thing_ptr;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x76)]) { /* thing->ccontrol_idx */
      if (cctrl_ptr < *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23)) { /* thing->ccontrol_idx */
        cctrl_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23); /* thing->ccontrol_idx */
      }
    }
  }
  return CONCAT44(arg_edx,(uint)cctrl_ptr);
}

/******************************************************************************
 * Function : group_fn_039e7e (Original VA: 0x39e7e, Ghidra: FUN_00039e7e)
 * Prototype: undefined8 group_fn_039e7e(void);
 * Address  : 0x39e7e (Size: 18 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Purpose  : Module group.cpp procedure @ 0x039e7e
 * Callers  : 3 -> group_update_creature_and_thing_039c3e, update_state_return_type_human_0e0b1c, update_creature_has_illegal_state_0e1b88
 * Callees  : 1 -> gravyard_update_creature_and_thing_039d83
 ******************************************************************************/
undefined8 group_fn_039e7e(void)

{
  undefined4 arg_edx;
  undefined8 uval;
  
  uval = gravyard_update_creature_and_thing_039d83();
  return CONCAT44(arg_edx,(uint)((int)uval == (int)((ulonglong)uval >> 0x20)));
}

/******************************************************************************
 * Function : group_update_creature_and_thing_039e90 (Original VA: 0x39e90, Ghidra: FUN_00039e90)
 * Prototype: undefined8 group_update_creature_and_thing_039e90(void);
 * Address  : 0x39e90 (Size: 58 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> barracks_update_creature_control_0138c9, group_update_creature_control_039eca, setup_compute_creature_eye_offset
 * Callees  : 1 -> gravyard_update_creature_and_thing_039d83
 ******************************************************************************/
undefined8 group_update_creature_and_thing_039e90(void)

{
  uint thing_ptr;
  undefined4 arg_edx;
  int val;
  
  thing_ptr = gravyard_update_creature_and_thing_039d83();
  val = 0;
  if (thing_ptr == 0) {
    return CONCAT44(arg_edx,1);
  }
  for (; g_thing_ptrs < thing_ptr;
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x76)]) { /* thing->ccontrol_idx */
    val = val + 1;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : group_update_creature_control_039eca (Original VA: 0x39eca, Ghidra: FUN_00039eca)
 * Prototype: void group_update_creature_control_039eca(void);
 * Address  : 0x39eca (Size: 877 bytes)
 * Module   : group.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 4 -> group_update_creature_and_thing_039e90, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b3788, LbScreenWaitVbi
 ******************************************************************************/
void group_update_creature_control_039eca(void)

{
  int cctrl_ptr;
  ushort uval;
  undefined2 uval_2;
  int thing;
  uint uval_3;
  int val;
  uint uval_4;
  uint uval_5;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val_7;
  int val_8;
  int val_9;
  int val_10;
  int val_11;
  int local_ac;
  int local_a4;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int val_2;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uval_3 = group_update_creature_and_thing_039e90();
  if ((uval_3 == *(ushort *)(cctrl_ptr + 0x7a) >> 0xc) && (((byte)g_game_turn & 0x1f) != 0)) {
    val_2 = cctrl_ptr;
    do {
      val = val_2 + 3;
      *(byte *)(val_2 + 0x294) = *(byte *)(val_2 + 0x294) & 0xfe;
      val_2 = val;
    } while (val != cctrl_ptr + 0x18);
  }
  else {
    *(byte *)(cctrl_ptr + 0x7b) = *(byte *)(cctrl_ptr + 0x7b) & 0xf;
    *(ushort *)(cctrl_ptr + 0x7a) = *(ushort *)(cctrl_ptr + 0x7a) | (ushort)((uval_3 & 0xf) << 0xc);
    LbScreenWaitVbi();
    uval_4 = *(ushort *)(extraout_ECX + 0x52) + 0x400 & 0x7ff;
    local_50 = -(((int)(&PTR_LAB_00192fe0)[uval_4] << 8) >> 8) >> 8;
    uval_5 = *(ushort *)(extraout_ECX + 0x52) - 0x200 & 0x7ff;
    val = -(((int)(&PTR_LAB_00192fe0)[uval_5] << 8) >> 8) >> 8;
    local_4c = local_50 * 2;
    local_44 = (int)((&g_slab_attr_table)[uval_4] << 8) >> 0x10;
    local_54 = local_44 * 2;
    val_7 = (int)((&g_slab_attr_table)[uval_5] << 8) >> 0x10;
    local_a4 = 0;
    val_2 = extraout_ECX;
    for (local_3c = 2; local_3c <= (int)(uval_3 * 2); local_3c = local_3c + 2) {
      local_40 = val * -2 + local_4c;
      local_58 = val_7 * -2 + local_54;
      val_8 = local_a4 * 3 + cctrl_ptr;
      for (local_34 = -2; local_34 < 3; local_34 = local_34 + 2) {
        val_5 = (uint)*(ushort *)(val_2 + 0xd) + local_58;
        val_3 = val_5 / 0x300;
        val_10 = (uint)*(ushort *)(val_2 + 0xf) + local_40;
        val_9 = val_8;
        if ((((0 < val_3) && (val_4 = val_10 / 0x300, 0 < val_4)) && (val_3 < 0x55)) &&
           (val_4 < 0x55)) {
          uval = (ushort)val_5;
          uval_2 = move_process_map_subtile_0b3788();
          val_5 = ceiling_process_map_subtile_07dbc0(uval,uval_2);
          val_2 = extraout_ECX_00;
          if (val_5 == 0) {
            val_9 = val_8 + 3;
            local_a4 = local_a4 + 1;
            *(ushort *)(val_8 + 0x292) = ((ushort)val_10 & 0xff00) + (uval >> 8);
            *(byte *)(val_8 + 0x294) = *(byte *)(val_8 + 0x294) | 2;
            if ((int)uval_3 <= local_a4) {
              return;
            }
          }
        }
        local_40 = local_40 + val * 2;
        local_58 = local_58 + val_7 * 2;
        val_8 = val_9;
      }
      local_4c = local_4c + local_50 * 2;
      local_54 = local_54 + local_44 * 2;
    }
    val_8 = local_50 * 2;
    val_5 = local_44 * 2;
    for (local_ac = 1; local_ac <= (int)(uval_3 * 2); local_ac = local_ac + 2) {
      val_9 = local_a4 * 3 + cctrl_ptr;
      local_5c = -val;
      local_48 = -val_7;
      for (local_38 = -1; local_38 < 3; local_38 = local_38 + 2) {
        val_4 = local_44 + (uint)*(ushort *)(val_2 + 0xd) + local_48;
        val_10 = val_4 / 0x300;
        val_11 = (uint)*(ushort *)(val_2 + 0xf) + local_5c + local_50;
        val_3 = val_9;
        if (((0 < val_10) && (val_6 = val_11 / 0x300, 0 < val_6)) &&
           ((val_10 < 0x55 && (val_6 < 0x55)))) {
          uval = (ushort)val_4;
          uval_2 = move_process_map_subtile_0b3788();
          val_10 = ceiling_process_map_subtile_07dbc0(uval,uval_2);
          val_2 = extraout_ECX_01;
          if (val_10 == 0) {
            val_3 = val_9 + 3;
            local_a4 = local_a4 + 1;
            *(ushort *)(val_9 + 0x292) = (uval >> 8) + ((ushort)val_11 & 0xff00);
            *(byte *)(val_9 + 0x294) = *(byte *)(val_9 + 0x294) | 2;
            if ((int)uval_3 <= local_a4) {
              return;
            }
          }
        }
        local_5c = local_5c + val * 2;
        local_48 = local_48 + val_7 * 2;
        val_9 = val_3;
      }
      local_50 = local_50 + val_8;
      local_44 = local_44 + val_5;
    }
  }
  return;
}

/******************************************************************************
 * Function : group_infinate_loop_dispand_group_03a237 (Original VA: 0x3a237, Ghidra: FUN_0003a237)
 * Prototype: longlong group_infinate_loop_dispand_group_03a237(void);
 * Address  : 0x3a237 (Size: 118 bytes)
 * Module   : group.cpp [direct_file_string_xref]
 * OrigLine : group.cpp lines 459
 * Purpose  : String 'INFINATE LOOP IN DISPAND GROUP'
 * Callers  : 2 -> angtool_update_creature_and_thing_011214, creature_update_creature_control_080fbc
 * Callees  : 3 -> group_update_creature_and_thing_039c3e, group_update_creature_and_thing_039dab, LbErrorLog
 ******************************************************************************/
longlong group_infinate_loop_dispand_group_03a237(void)

{
  int thing;
  int thing_ptr;
  uint arg_edx;
  int extraout_EDX;
  int val;
  
  if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7a) & 0xfff) != 0) { /* thing->ccontrol_idx */
    thing_ptr = group_update_creature_and_thing_039dab();
    val = 0;
    while (thing_ptr != 0) {
      if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x78) == 0) { /* thing->ccontrol_idx */
        thing_ptr = 0;
      }
      else {
        group_update_creature_and_thing_039c3e();
        thing_ptr = extraout_EDX;
      }
      if (199 < val) {
        LbErrorLog(); /* LbErrorLog("group.cpp", line 459, "INFINATE LOOP IN DISPAND GROUP") */
        return (ulonglong)arg_edx << 0x20;
      }
      val = val + 1;
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : group_update_player_view_state_03a2ad (Original VA: 0x3a2ad, Ghidra: FUN_0003a2ad)
 * Prototype: longlong group_update_player_view_state_03a2ad(void);
 * Address  : 0x3a2ad (Size: 128 bytes)
 * Module   : group.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> group_infinate_loop_dispand_group_03a32d
 * Callees  : 4 -> moodneed_fn_051374, person_update_creature_control_064ae7, room_process_dungeon_room_0c9988, room_fn_0cc4a0
 ******************************************************************************/
longlong group_update_player_view_state_03a2ad(void)

{
  char ch;
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = room_process_dungeon_room_0c9988();
  if (val != 0) {
    ch = person_update_creature_control_064ae7();
    if (ch != '\0') {
      val = room_fn_0cc4a0();
      if (val != 0) {
        if ((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
          moodneed_fn_051374();
        }
        *(undefined1 *)(arg_eax + 8) = 0x33;
        return CONCAT44(arg_edx,1);
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : group_infinate_loop_dispand_group_03a32d (Original VA: 0x3a32d, Ghidra: FUN_0003a32d)
 * Prototype: longlong group_infinate_loop_dispand_group_03a32d(void);
 * Address  : 0x3a32d (Size: 167 bytes)
 * Module   : group.cpp [direct_file_string_xref]
 * OrigLine : group.cpp lines 524
 * Purpose  : String 'INFINATE LOOP IN DISPAND GROUP'
 * Callers  : 1 -> angtool_update_creature_and_thing_011342
 * Callees  : 4 -> group_update_creature_and_thing_039dab, group_update_player_view_state_03a2ad, person_fn_063b6d, LbErrorLog
 ******************************************************************************/
longlong group_infinate_loop_dispand_group_03a32d(void)

{
  int thing;
  int thing_ptr;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  int val_2;
  
  if ((*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7a) & 0xfff) != 0) { /* thing->ccontrol_idx */
    thing_ptr = group_update_creature_and_thing_039dab();
    val_2 = 0;
    while (thing_ptr != 0) {
      if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x78) == 0) { /* thing->ccontrol_idx */
        thing_ptr = 0;
      }
      else {
        val = group_update_player_view_state_03a2ad();
        thing_ptr = extraout_ECX;
        if (val == 0) {
          person_fn_063b6d();
          thing_ptr = extraout_ECX_00;
        }
      }
      if (199 < val_2) {
        LbErrorLog(); /* LbErrorLog("group.cpp", line 524, "INFINATE LOOP IN DISPAND GROUP") */
        goto LAB_0003a3b8;
      }
      val_2 = val_2 + 1;
    }
    thing_ptr = group_update_player_view_state_03a2ad();
    if (thing_ptr != 0) {
      return CONCAT44(arg_edx,1);
    }
  }
  person_fn_063b6d();
LAB_0003a3b8:
  return (ulonglong)arg_edx << 0x20;
}

