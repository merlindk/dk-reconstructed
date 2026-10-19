/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: anger.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 34
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : anger_fn_010010 (Original VA: 0x10010, Ghidra: FUN_00010010)
 * Prototype: void anger_fn_010010(void);
 * Address  : 0x10010 (Size: 141 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x010010
 * Callers  : 13 -> angtool_update_slab_subtile_columns_0110ed, barracks_update_creature_control_0138c9, combmove_update_creature_control_0168a2, combmove_update_creature_control_0169a5, combmove_update_creature_control_016b29, combold_update_creature_control_017381, evil_could_find_position_028bae, impset_update_creature_control_03ef50 ...
 * Callees  : 3 -> anger_fn_010c5f, anger_fn_010c85, bflib_system_io_fn_0e66ec
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00010071) */

void anger_fn_010010(void)

{
  short short_val;
  int thing;
  uint uval;
  int val;
  uint uval_2;
  
  bflib_system_io_fn_0e66ec();
  uval = anger_fn_010c5f();
  val = anger_fn_010c85();
  uval_2 = (uint)*(ushort *)(&g_bss_002e9160 + (uint)*(byte *)(thing + 0x1a) * 0xe6);
  if ((int)uval < (int)(uint)*(ushort *)(&g_bss_002e9160 + (uint)*(byte *)(thing + 0x1a) * 0xe6)) {
    uval_2 = uval;
  }
  short_val = (short)uval_2;
  if (val < 0) {
    short_val = -short_val;
  }
  *(ushort *)(thing + 0x52) = short_val + *(short *)(thing + 0x52) & 0x7ff; /* thing->health */
  anger_fn_010c5f();
  return;
}

/******************************************************************************
 * Function : anger_fn_01009d (Original VA: 0x1009d, Ghidra: FUN_0001009d)
 * Prototype: void anger_fn_01009d(void);
 * Address  : 0x1009d (Size: 149 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x01009d
 * Callers  : 1 -> move_update_creature_control_0b4ae4
 * Callees  : 3 -> anger_fn_010c5f, anger_fn_010c85, bflib_system_io_fn_0e66ec
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00010107) */

void anger_fn_01009d(void)

{
  short short_val;
  int thing;
  uint uval;
  int val;
  uint uval_2;
  
  bflib_system_io_fn_0e66ec();
  uval = anger_fn_010c5f();
  val = anger_fn_010c85();
  uval_2 = (uint)*(ushort *)(&g_bss_002e9160 + (uint)*(byte *)(thing + 0x1a) * 0xe6);
  if ((int)uval < (int)(uint)*(ushort *)(&g_bss_002e9160 + (uint)*(byte *)(thing + 0x1a) * 0xe6)) {
    uval_2 = uval;
  }
  short_val = (short)uval_2;
  if (val < 0) {
    short_val = -short_val;
  }
  *(ushort *)(thing + 0x52) = short_val + *(short *)(thing + 0x52) & 0x7ff; /* thing->health */
  anger_fn_010c5f();
  return;
}

/******************************************************************************
 * Function : anger_fn_010132 (Original VA: 0x10132, Ghidra: FUN_00010132)
 * Prototype: void anger_fn_010132(void);
 * Address  : 0x10132 (Size: 76 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x010132
 * Callers  : 8 -> impset_fn_03ed80, research_move_research_room_0668b0, shot_update_creature_and_thing_06da97, spell_update_creature_control_07231c, temple_sacrifice_return_073765, temple_update_creature_control_0738f2, torture_centre_table_torture_0746e4, move_update_creature_control_0b4c30
 * Callees  : 2 -> anger_fn_010c5f, anger_fn_010c85
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00010166) */

void anger_fn_010132(void)

{
  short short_val;
  int thing;
  uint uval;
  int val;
  uint uval_2;
  
  uval = anger_fn_010c5f();
  val = anger_fn_010c85();
  uval_2 = (uint)*(ushort *)(&g_bss_002e9160 + (uint)*(byte *)(thing + 0x1a) * 0xe6);
  if ((int)uval < (int)(uint)*(ushort *)(&g_bss_002e9160 + (uint)*(byte *)(thing + 0x1a) * 0xe6)) {
    uval_2 = uval;
  }
  short_val = (short)uval_2;
  if (val < 0) {
    short_val = -short_val;
  }
  *(ushort *)(thing + 0x52) = short_val + *(short *)(thing + 0x52) & 0x7ff; /* thing->health */
  anger_fn_010c5f();
  return;
}

/******************************************************************************
 * Function : anger_update_creature_control_01017e (Original VA: 0x1017e, Ghidra: FUN_0001017e)
 * Prototype: void anger_update_creature_control_01017e(void);
 * Address  : 0x1017e (Size: 68 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 6 -> person_fn_065199, person_update_creature_control_065283, spell_update_creature_control_071601, spell_update_creature_control_0717de, move_update_creature_control_0b4ae4, move_update_creature_control_0b4c30
 * Callees  : 0 -> 
 ******************************************************************************/
void anger_update_creature_control_01017e(void)

{
  int cctrl_ptr;
  int thing;
  short arg_dx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  *(short *)(cctrl_ptr + 200) = arg_dx;
  if (arg_dx < -0x100) {
    *(undefined2 *)(cctrl_ptr + 200) = 0x100;
    *(short *)(cctrl_ptr + 200) = -*(short *)(cctrl_ptr + 200);
  }
  else if (0x100 < arg_dx) {
    *(undefined2 *)(cctrl_ptr + 200) = 0x100;
  }
  *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 0x40;
  return;
}

/******************************************************************************
 * Function : anger_fn_0101c2 (Original VA: 0x101c2, Ghidra: FUN_000101c2)
 * Prototype: undefined4 anger_fn_0101c2(void);
 * Address  : 0x101c2 (Size: 103 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x0101c2
 * Callers  : 2 -> update_illegal_primary_target_type_0e3e78, update_fn_0e40f8
 * Callees  : 1 -> get_3d_angles_between_positions
 ******************************************************************************/
undefined4 anger_fn_0101c2(void)

{
  char ch;
  int arg_eax;
  int arg_edx;
  undefined4 uval;
  short short_val;
  undefined4 uval_2;
  short short_val_2;
  
  uval = *(undefined4 *)(arg_eax + 0xd);
  uval_2 = *(undefined4 *)(arg_edx + 0xd);
  short_val_2 = *(short *)(arg_edx + 0x11);
  short_val = *(short *)(arg_eax + 0x11) +
          *(short *)(&g_bss_002e9162 + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6);
  ch = get_3d_angles_between_positions(uval,short_val,uval_2,short_val_2);
  if (ch == '\0') {
    ch = get_3d_angles_between_positions(uval,short_val,uval_2,short_val_2 + *(short *)(arg_edx + 0x58));
    if (ch == '\0') {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : anger_fn_010229 (Original VA: 0x10229, Ghidra: FUN_00010229)
 * Prototype: undefined4 anger_fn_010229(void);
 * Address  : 0x10229 (Size: 151 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x010229
 * Callers  : 0 -> 
 * Callees  : 3 -> routes_fn_0d5ac0, get_3d_angles_between_positions, trace_line_of_sight_2d
 ******************************************************************************/
undefined4 anger_fn_010229(void)

{
  char ch;
  int arg_eax;
  int val;
  int arg_edx;
  
  val = routes_fn_0d5ac0(*(undefined4 *)(arg_eax + 0xd),
                       *(short *)(arg_eax + 0x11) +
                       *(short *)(&g_bss_002e9162 + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6),
                       *(undefined4 *)(arg_edx + 0xd),*(undefined2 *)(arg_edx + 0x11));
  if (val == 0) {
    ch = trace_line_of_sight_2d();
    if (ch != '\0') {
      return 1;
    }
    ch = trace_line_of_sight_2d();
  }
  else {
    ch = get_3d_angles_between_positions();
    if (ch != '\0') {
      return 1;
    }
    ch = get_3d_angles_between_positions();
  }
  if (ch != '\0') {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : anger_handle_door_thing_0102c0 (Original VA: 0x102c0, Ghidra: FUN_000102c0)
 * Prototype: int anger_handle_door_thing_0102c0(void);
 * Address  : 0x102c0 (Size: 328 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Checks Thing->class_id == 9 (Door) and processes state
 * Callers  : 1 -> combchk_fn_01614f
 * Callees  : 6 -> move_process_map_subtile_0b39e4, routes_fn_0d5ac0, get_3d_angles_between_positions, move_coord3d_along_angle_checked, update_process_map_subtile_0ddbe0, update_fn_0de074
 ******************************************************************************/
int anger_handle_door_thing_0102c0(void)

{
  char ch;
  int val;
  int arg_edx;
  bool flag;
  
  if (*(char *)(arg_edx + 0x1f) == '\t') {
    val = routes_fn_0d5ac0();
    if ((val == 0) && (val = move_process_map_subtile_0b39e4(), val == 0)) {
      val = update_fn_0de074();
      if (val < 1) {
        val = update_fn_0de074();
        return val;
      }
      return val;
    }
    val = move_coord3d_along_angle_checked();
    if (val != 0) {
      return 1;
    }
    val = move_coord3d_along_angle_checked();
    flag = val == 0;
  }
  else {
    val = routes_fn_0d5ac0();
    if ((val == 0) && (val = move_process_map_subtile_0b39e4(), val == 0)) {
      val = update_process_map_subtile_0ddbe0();
      if (val < 1) {
        val = update_process_map_subtile_0ddbe0();
        return val;
      }
      return val;
    }
    ch = get_3d_angles_between_positions();
    if (ch != '\0') {
      return 1;
    }
    ch = get_3d_angles_between_positions();
    flag = ch == '\0';
  }
  if (!flag) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : anger_fn_010408 (Original VA: 0x10408, Ghidra: FUN_00010408)
 * Prototype: bool anger_fn_010408(void);
 * Address  : 0x10408 (Size: 44 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x010408
 * Callers  : 2 -> combchk_fn_016175, evil_update_creature_and_thing_028eb4
 * Callees  : 0 -> 
 ******************************************************************************/
bool anger_fn_010408(void)

{
  int arg_eax;
  int arg_edx;
  
  return (int)((arg_edx + (arg_edx >> 0x1f) * -0x100) - (uint)((arg_edx >> 0x1f) << 7 < 0)) >> 8 <=
         (int)(uint)(byte)(&g_bss_002e91a8)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6];
}

/******************************************************************************
 * Function : anger_fn_010434 (Original VA: 0x10434, Ghidra: FUN_00010434)
 * Prototype: void anger_fn_010434(void);
 * Address  : 0x10434 (Size: 167 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x010434
 * Callers  : 27 -> door_update_creature_and_thing_023250, effect_update_creature_and_thing_02649f, entrance_update_creature_and_thing_026ce2, evil_update_creature_control_028851, evil_could_find_position_028bae, magic_update_creature_and_thing_04eb02, moodneed_update_creature_control_051f4c, moodneed_update_creature_control_052119 ...
 * Callees  : 2 -> anger_update_player_dungeon_010b30, anger_fn_010b75
 ******************************************************************************/
void anger_fn_010434(void)

{
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  if (*(short *)(&g_bss_002e9122 + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6) != 0) {
    if (arg_edx < 0) {
      anger_fn_010b75();
      if (arg_ebx == 4) {
        anger_fn_010b75();
        anger_fn_010b75();
        anger_fn_010b75();
        return;
      }
    }
    else if (arg_edx != 0) {
      anger_update_player_dungeon_010b30();
      if (arg_ebx != 4) {
        anger_update_player_dungeon_010b30();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : anger_fn_0104db (Original VA: 0x104db, Ghidra: FUN_000104db)
 * Prototype: void anger_fn_0104db(void);
 * Address  : 0x104db (Size: 154 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Module anger.cpp procedure @ 0x0104db
 * Callers  : 3 -> lair_update_creature_control_04d0d5, lair_update_creature_control_04d197, creature_update_creature_control_085ba4
 * Callees  : 2 -> anger_update_player_dungeon_010b30, anger_fn_010b75
 ******************************************************************************/
void anger_fn_0104db(void)

{
  int arg_eax;
  int arg_edx;
  
  if (*(short *)(&g_bss_002e9122 + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6) != 0) {
    if (arg_edx < 0) {
      anger_fn_010b75();
      anger_fn_010b75();
      anger_fn_010b75();
      anger_fn_010b75();
      return;
    }
    if (arg_edx != 0) {
      anger_update_player_dungeon_010b30();
      anger_update_player_dungeon_010b30();
      anger_update_player_dungeon_010b30();
      anger_update_player_dungeon_010b30();
    }
  }
  return;
}

/******************************************************************************
 * Function : anger_update_creature_control_010575 (Original VA: 0x10575, Ghidra: FUN_00010575)
 * Prototype: byte anger_update_creature_control_010575(void);
 * Address  : 0x10575 (Size: 20 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 8 -> anger_hurrah_mental_instability_creature_01073a, compturn_update_creature_and_thing_020826, lair_update_creature_control_04d0d5, lair_update_creature_control_04d197, person_update_creature_control_063a25, creature_update_creature_and_thing_0844f4, engine3_draw_queued_billboard_sprite, bflib_system_io_update_creature_control_0e5e04
 * Callees  : 0 -> 
 ******************************************************************************/
byte anger_update_creature_control_010575(void)

{
  int thing;
  
  return *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x66) & 1; /* thing->ccontrol_idx */
}

/******************************************************************************
 * Function : anger_update_creature_control_010589 (Original VA: 0x10589, Ghidra: FUN_00010589)
 * Prototype: byte anger_update_creature_control_010589(void);
 * Address  : 0x10589 (Size: 24 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> anger_hurrah_mental_instability_creature_01073a, compturn_update_creature_and_thing_020826, engine3_draw_queued_billboard_sprite
 * Callees  : 0 -> 
 ******************************************************************************/
byte anger_update_creature_control_010589(void)

{
  int thing;
  
  return (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x66) & 3) >> 1; /* thing->ccontrol_idx */
}

/******************************************************************************
 * Function : anger_update_creature_control_0105a1 (Original VA: 0x105a1, Ghidra: FUN_000105a1)
 * Prototype: undefined8 anger_update_creature_control_0105a1(void);
 * Address  : 0x105a1 (Size: 101 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> anger_hurrah_mental_instability_creature_01073a, engine3_draw_queued_billboard_sprite
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 anger_update_creature_control_0105a1(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  int val_2;
  undefined4 arg_edx;
  int val_3;
  int val_4;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  val_3 = 0;
  val_4 = 0;
  if ((*(short *)(&g_bss_002e9122 + val) != 0) &&
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x66) & 1) != 0)) { /* thing->ccontrol_idx */
    val_2 = 1;
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    do {
      if (val_3 < *(int *)(cctrl_ptr + 0x56)) {
        val_3 = *(int *)(cctrl_ptr + 0x56);
        val_4 = val_2;
      }
      val_2 = val_2 + 1;
      cctrl_ptr = cctrl_ptr + 4;
    } while (val_2 < 5);
    if (*(short *)(&g_bss_002e9122 + val) <= val_3) goto LAB_00010600;
  }
  val_4 = 0;
LAB_00010600:
  return CONCAT44(arg_edx,val_4);
}

/******************************************************************************
 * Function : anger_update_creature_control_010606 (Original VA: 0x10606, Ghidra: FUN_00010606)
 * Prototype: undefined4 anger_update_creature_control_010606(void);
 * Address  : 0x10606 (Size: 68 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> angtool_update_creature_and_thing_011db9
 * Callees  : 1 -> anger_removing_annoyed_creature_non_0109ea
 ******************************************************************************/
undefined4 anger_update_creature_control_010606(void)

{
  int thing;
  
  if ((*(short *)(&g_bss_002e9122 + (uint)*(byte *)(thing + 0x1a) * 0xe6) != 0) &&
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x66) & 1) == 0)) { /* thing->ccontrol_idx */
    anger_removing_annoyed_creature_non_0109ea();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : anger_update_creature_control_01064a (Original VA: 0x1064a, Ghidra: FUN_0001064a)
 * Prototype: undefined4 anger_update_creature_control_01064a(void);
 * Address  : 0x1064a (Size: 63 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 1 -> anger_removing_annoyed_creature_non_0109ea
 ******************************************************************************/
undefined4 anger_update_creature_control_01064a(void)

{
  int thing;
  
  if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x66) & 1) == 0) { /* thing->ccontrol_idx */
    anger_removing_annoyed_creature_non_0109ea();
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : anger_update_creature_control_010689 (Original VA: 0x10689, Ghidra: FUN_00010689)
 * Prototype: undefined4 anger_update_creature_control_010689(void);
 * Address  : 0x10689 (Size: 161 bytes)
 * Module   : anger.cpp [leading_unit_prologue]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> newgui_update_creature_and_thing_0570a7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 anger_update_creature_control_010689(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  int *arg_edx;
  int *arg_ebx;
  int val_2;
  int local_18;
  int local_14;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  val_2 = 0;
  local_18 = 0;
  if (*(short *)(&g_bss_002e9122 + val) != 0) {
    local_14 = 1;
    cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
    do {
      if (val_2 < *(int *)(cctrl_ptr + 0x56)) {
        local_18 = local_14;
        val_2 = *(int *)(cctrl_ptr + 0x56);
      }
      local_14 = local_14 + 1;
      cctrl_ptr = cctrl_ptr + 4;
    } while (local_14 < 5);
    if (val_2 != 0) {
      if (val_2 < 0) {
        val_2 = 0;
      }
      else if (*(short *)(&g_bss_002e9122 + val) * 2 < val_2) {
        val_2 = *(short *)(&g_bss_002e9122 + val) * 2;
      }
      *arg_ebx = (val_2 << 8) / (*(short *)(&g_bss_002e9122 + val) * 2);
      *arg_edx = local_18;
      return 1;
    }
  }
  *arg_ebx = 0;
  *arg_edx = 0;
  return 0;
}

/******************************************************************************
 * Function : anger_hurrah_mental_instability_creature_01073a (Original VA: 0x1073a, Ghidra: FUN_0001073a)
 * Prototype: undefined4 anger_hurrah_mental_instability_creature_01073a(void);
 * Address  : 0x1073a (Size: 688 bytes)
 * Module   : anger.cpp [direct_file_string_xref]
 * OrigLine : anger.cpp lines 234, 270
 * Purpose  : String 'Hurrah, mental instability error - creature has a psychosis.'
 * Callers  : 1 -> moodneed_fn_052834
 * Callees  : 14 -> anger_update_creature_control_010575, anger_update_creature_control_010589, anger_update_creature_control_0105a1, anger_update_creature_control_010dac, anger_roll_action_random_010dfc, moodneed_fn_051374, person_fn_063b6d, person_fn_064a2e ...
 ******************************************************************************/
undefined4 anger_hurrah_mental_instability_creature_01073a(void)

{
  int cctrl_ptr;
  char ch;
  byte flag;
  short short_val;
  int thing;
  int val;
  undefined4 uval;
  int arg_edx;
  int *int_ptr;
  undefined4 uStack_1c;
  int local_18;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if (*(short *)(arg_edx + 0x15) == 0) {
    return 0;
  }
  uStack_1c = 0x10762;
  local_18 = arg_edx;
  ch = anger_update_creature_control_010dac();
  if (ch == '\0') {
    return 0;
  }
  uStack_1c = 0x10771;
  val = anger_update_creature_control_010575();
  if (val == 0) {
    return 0;
  }
  if ((uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] != (int)*(char *)(thing + 6)) /* thing->owner */
  goto LAB_00010812;
  uStack_1c = 0x10804;
  uval = anger_update_creature_control_0105a1();
  switch(uval) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    if (*(short *)(cctrl_ptr + 0x6a) != 0) goto switchD_0001080a_caseD_4;
    break;
  case 4:
switchD_0001080a_caseD_4:
    break;
  default:
    uStack_1c = 0x107fb;
    LbErrorLog(); /* LbErrorLog("anger.cpp", line 234, "Hurrah, mental instability error - creature has a psychosis. It is angry but has no motive.") */
    goto LAB_00010812;
  }
  uStack_1c = 0x107ae;
  moodneed_fn_051374();
LAB_00010812:
  if (*(char *)(thing + 7) == '\x0e') {
    flag = *(byte *)(thing + 8); /* thing->active_state */
  }
  else {
    flag = *(byte *)(thing + 7);
  }
  if ((&g_data_0018c4be)[(uint)flag * 0x29] != '\n') {
    uStack_1c = 0x10840;
    val = anger_update_creature_control_010589();
    if ((val != 0) && (((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 0x3f) == 0)) { /* thing->index_or_angle */
      uStack_1c = 0x10859;
      val = anger_roll_action_random_010dfc();
      if (val != 0) {
        return 1;
      }
    }
    int_ptr = &local_18;
    if (((*(short *)(local_18 + 0xb6) < 0) &&
        (int_ptr = &local_18, *(short *)(&g_bss_002e05a8 + *(char *)(thing + 6) * 0x1508) != 0)) && /* thing->owner */
       (int_ptr = &local_18, 0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2df)))) {
      if (*(char *)(thing + 7) == '\x0e') {
        ch = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing + 7);
      }
      if (ch == 'R') {
        return 1;
      }
      if (*(char *)(thing + 7) == '\x0e') {
        ch = *(char *)(thing + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing + 7);
      }
      if (ch == 'S') {
        return 1;
      }
      uStack_1c = 1;
      *(int *)(cctrl_ptr + 0x2df) = g_game_turn;
      val = room_process_dungeon_room_0ca568();
      if (val == 0) {
        int_ptr = &uStack_1c;
        if ((int)*(char *)(thing + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) { /* thing->owner */
          moodneed_fn_051374();
          int_ptr = &uStack_1c;
        }
      }
      else {
        val = room_fn_0cfc48();
        int_ptr = &uStack_1c;
        if ((val != 0) && (ch = person_fn_064c4d(), int_ptr = &uStack_1c, ch != '\0')) {
          person_fn_064a2e();
          short_val = room_update_creature_control_0cb33c();
          if (short_val != 0) {
            return 1;
          }
          person_fn_063b6d();
          LbErrorLog(); /* LbErrorLog("anger.cpp", line 270, "Tried sending creature to Temple, could not get there. Cleaned up old state.") */
          int_ptr = &uStack_1c;
        }
      }
    }
    if (((*(short *)(cctrl_ptr + 0x68) != 0) && (*(char *)(local_18 + 0x17) != '\0')) &&
       (0x80 < (uint)(g_game_turn - *(int *)(cctrl_ptr + 0x2e3)))) {
      *(int *)(cctrl_ptr + 0x2e3) = g_game_turn;
      *(undefined4 *)((int)int_ptr + -4) = 0x109bf;
      anger_update_creature_control_0105a1();
      *(undefined4 *)((int)int_ptr + -4) = 0x109d0;
      ch = person_external_change_state_but_064a5f();
      if (ch != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : anger_removing_annoyed_creature_non_0109ea (Original VA: 0x109ea, Ghidra: FUN_000109ea)
 * Prototype: void anger_removing_annoyed_creature_non_0109ea(void);
 * Address  : 0x109ea (Size: 236 bytes)
 * Module   : anger.cpp [direct_file_string_xref]
 * OrigLine : anger.cpp lines 361
 * Purpose  : String 'REMOVING ANNOYED CREATURE - NON TO Remove'
 * Callers  : 7 -> anger_update_creature_control_010606, anger_update_creature_control_01064a, anger_fn_010ad6, anger_update_player_dungeon_010b30, anger_fn_010b75, lair_could_create_totem_04da55, shot_update_creature_control_06db51
 * Callees  : 3 -> anger_update_creature_control_010ba3, event_fn_0274ad, LbErrorLog
 ******************************************************************************/
void anger_removing_annoyed_creature_non_0109ea(void)

{
  int thing;
  int val;
  int extraout_ECX;
  int arg_edx;
  int extraout_EDX;
  byte cctrl_ptr;
  int arg_ebx;
  
  cctrl_ptr = *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x66) & 1; /* thing->ccontrol_idx */
  if ((g_bss_0019d0c0 == '\0') &&
     (*(short *)(&g_bss_002e9122 + (uint)*(byte *)(thing + 0x1a) * 0xe6) != 0)) {
    if (arg_edx < 0) {
      arg_edx = 0;
    }
    else if (0xfffe < arg_edx) {
      arg_edx = 0xfffe;
    }
    *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x52 + arg_ebx * 4) = arg_edx; /* thing->ccontrol_idx */
    anger_update_creature_control_010ba3();
    val = (int)*(char *)(extraout_ECX + 6);
    if (val < 5) {
      if ((*(byte *)(extraout_EDX + 0x66) & 1) == 0) {
        if (cctrl_ptr != 0) {
          if ((&g_bss_002e1058)[val * 0xa84] != 0) {
            (&g_bss_002e1058)[val * 0xa84] = (&g_bss_002e1058)[val * 0xa84] + -1;
            return;
          }
          LbErrorLog(); /* LbErrorLog("anger.cpp", line 361, "REMOVING ANNOYED CREATURE - NON TO Remove") */
        }
      }
      else if (cctrl_ptr == 0) {
        (&g_bss_002e1058)[val * 0xa84] = (&g_bss_002e1058)[val * 0xa84] + 1;
        event_fn_0274ad(*(undefined2 *)(extraout_ECX + 0x1b));
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : anger_fn_010ad6 (Original VA: 0x10ad6, Ghidra: FUN_00010ad6)
 * Prototype: void anger_fn_010ad6(void);
 * Address  : 0x10ad6 (Size: 55 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module anger.cpp procedure @ 0x010ad6
 * Callers  : 5 -> angtool_process_thing_entity_011be9, scavenged_room_disappeared_valid_067e04, torture_update_creature_control_074853, creature_create_dead_thing_07fac8, creature_update_creature_control_085ba4
 * Callees  : 1 -> anger_removing_annoyed_creature_non_0109ea
 ******************************************************************************/
void anger_fn_010ad6(void)

{
  int arg_eax;
  int val;
  
  if (*(short *)(&g_bss_002e9122 + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6) != 0) {
    val = 1;
    do {
      val = val + 1;
      anger_removing_annoyed_creature_non_0109ea();
    } while (val < 5);
  }
  return;
}

/******************************************************************************
 * Function : anger_update_creature_control_010b0d (Original VA: 0x10b0d, Ghidra: FUN_00010b0d)
 * Prototype: undefined4 anger_update_creature_control_010b0d(void);
 * Address  : 0x10b0d (Size: 29 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> anger_update_player_dungeon_010b30
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 anger_update_creature_control_010b0d(void)

{
  int thing;
  
  if ((*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 3) == '\0') && /* thing->ccontrol_idx */
     ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 8) == 0)) { /* thing->ccontrol_idx */
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : anger_fn_010b2a (Original VA: 0x10b2a, Ghidra: FUN_00010b2a)
 * Prototype: undefined4 anger_fn_010b2a(void);
 * Address  : 0x10b2a (Size: 6 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010b2a
 * Callers  : 1 -> anger_fn_010b75
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 anger_fn_010b2a(void)

{
  return 1;
}

/******************************************************************************
 * Function : anger_update_player_dungeon_010b30 (Original VA: 0x10b30, Ghidra: FUN_00010b30)
 * Prototype: void anger_update_player_dungeon_010b30(void);
 * Address  : 0x10b30 (Size: 69 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> anger_fn_010434, anger_fn_0104db
 * Callees  : 2 -> anger_removing_annoyed_creature_non_0109ea, anger_update_creature_control_010b0d
 ******************************************************************************/
void anger_update_player_dungeon_010b30(void)

{
  int val;
  int extraout_ECX;
  
  val = anger_update_creature_control_010b0d();
  if (val != 0) {
    if (*(char *)(extraout_ECX + 6) < 5) {
      *(int *)(&g_bss_002e1834 + *(char *)(extraout_ECX + 6) * 0x1508) =
           *(int *)(&g_bss_002e1834 + *(char *)(extraout_ECX + 6) * 0x1508) + 1;
    }
    anger_removing_annoyed_creature_non_0109ea();
  }
  return;
}

/******************************************************************************
 * Function : anger_fn_010b75 (Original VA: 0x10b75, Ghidra: FUN_00010b75)
 * Prototype: void anger_fn_010b75(void);
 * Address  : 0x10b75 (Size: 46 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module anger.cpp procedure @ 0x010b75
 * Callers  : 2 -> anger_fn_010434, anger_fn_0104db
 * Callees  : 2 -> anger_removing_annoyed_creature_non_0109ea, anger_fn_010b2a
 ******************************************************************************/
void anger_fn_010b75(void)

{
  int val;
  
  val = anger_fn_010b2a();
  if (val != 0) {
    anger_removing_annoyed_creature_non_0109ea();
  }
  return;
}

/******************************************************************************
 * Function : anger_update_creature_control_010ba3 (Original VA: 0x10ba3, Ghidra: FUN_00010ba3)
 * Prototype: void anger_update_creature_control_010ba3(void);
 * Address  : 0x10ba3 (Size: 90 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> anger_removing_annoyed_creature_non_0109ea
 * Callees  : 0 -> 
 ******************************************************************************/
void anger_update_creature_control_010ba3(void)

{
  int cctrl_ptr;
  int val;
  int thing;
  int val_2;
  int val_3;
  
  val_2 = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val_3 = 1;
  *(byte *)(cctrl_ptr + 0x66) = *(byte *)(cctrl_ptr + 0x66) & 0xfc;
  val = cctrl_ptr;
  while( true ) {
    if (4 < val_3) {
      return;
    }
    if (((int)*(short *)(&g_bss_002e9122 + val_2) <= *(int *)(val + 0x56)) &&
       (*(byte *)(cctrl_ptr + 0x66) = *(byte *)(cctrl_ptr + 0x66) | 1,
       *(short *)(&g_bss_002e9122 + val_2) * 2 <= *(int *)(val + 0x56))) break;
    val_3 = val_3 + 1;
    val = val + 4;
  }
  *(byte *)(cctrl_ptr + 0x66) = *(byte *)(cctrl_ptr + 0x66) | 2;
  return;
}

/******************************************************************************
 * Function : anger_fn_010c1a (Original VA: 0x10c1a, Ghidra: FUN_00010c1a)
 * Prototype: uint anger_fn_010c1a(void);
 * Address  : 0x10c1a (Size: 42 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010c1a
 * Callers  : 19 -> ariadne_fn_01211a, ariadne_fn_012230, ariadne_fn_012edf, combmove_update_creature_control_0168a2, combmove_update_creature_control_0169a5, combold_thing_stuck_finding_melee_0171e4, effect_illegal_hit_thing_type_02585f, setup_switch_screen_resolution ...
 * Callees  : 1 -> bflib_system_io_fn_0e66ec
 ******************************************************************************/
uint anger_fn_010c1a(void)

{
  uint uval;
  
  uval = bflib_system_io_fn_0e66ec();
  return (uval & 0xffff) % 0x800;
}

/******************************************************************************
 * Function : anger_fn_010c44 (Original VA: 0x10c44, Ghidra: FUN_00010c44)
 * Prototype: uint anger_fn_010c44(void);
 * Address  : 0x10c44 (Size: 27 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010c44
 * Callers  : 5 -> setup_switch_screen_resolution, setup_compute_creature_eye_offset, object_process_thing_entity_0c4574, object_process_thing_entity_0c4840, update_process_thing_entity_0e1ec4
 * Callees  : 1 -> get_2d_box_distance
 ******************************************************************************/
uint anger_fn_010c44(void)

{
  uint uval;
  
  get_2d_box_distance();
  uval = bflib_system_io_fn_0e66ec();
  return (uval & 0xffff) % 0x800;
}

/******************************************************************************
 * Function : anger_fn_010c5f (Original VA: 0x10c5f, Ghidra: FUN_00010c5f)
 * Prototype: uint anger_fn_010c5f(void);
 * Address  : 0x10c5f (Size: 38 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010c5f
 * Callers  : 13 -> anger_fn_010010, anger_fn_01009d, anger_fn_010132, combmove_update_creature_control_0168a2, combmove_update_creature_control_0169a5, combold_thing_stuck_finding_melee_0171e4, sound3d_fn_06fda2, food_fn_0ab870 ...
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint anger_fn_010c5f(void)

{
  uint uval;
  
  uval = bflib_system_io_fn_0e69fc();
  if (0x400 < (int)uval) {
    uval = 0x800 - uval & 0xffff;
  }
  return uval;
}

/******************************************************************************
 * Function : anger_fn_010c85 (Original VA: 0x10c85, Ghidra: FUN_00010c85)
 * Prototype: int anger_fn_010c85(void);
 * Address  : 0x10c85 (Size: 82 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010c85
 * Callers  : 6 -> anger_fn_010010, anger_fn_01009d, anger_fn_010132, sound3d_fn_06fda2, food_fn_0ab870, food_process_dungeon_room_0ab8dc
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
int anger_fn_010c85(void)

{
  uint arg_eax;
  uint arg_edx;
  int val;
  longlong val_2;
  undefined8 uval;
  
  if ((arg_edx & 0x7ff) == (arg_eax & 0x7ff)) {
    return 0;
  }
  val_2 = bflib_system_io_fn_0e69fc();
  val = (int)((ulonglong)val_2 >> 0x20);
  if (0x400 < (int)val_2) {
    if (val_2 < 0) {
      val = val + 0x800;
    }
    else {
      val = val + -0x800;
    }
  }
  if (val == 0) {
    return 0;
  }
  uval = bflib_system_io_fn_0e69fc();
  return (int)(char)((int)((ulonglong)uval >> 0x20) / (int)uval);
}

/******************************************************************************
 * Function : anger_fn_010cd7 (Original VA: 0x10cd7, Ghidra: FUN_00010cd7)
 * Prototype: void anger_fn_010cd7(void);
 * Address  : 0x10cd7 (Size: 30 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010cd7
 * Callers  : 2 -> effect_update_creature_and_thing_025cf7, food_process_dungeon_room_0ab8dc
 * Callees  : 0 -> 
 ******************************************************************************/
void anger_fn_010cd7(void)

{
  short short_val;
  int arg_eax;
  short *arg_edx;
  
  *(short *)(arg_eax + 0x26) = *(short *)(arg_eax + 0x26) + *arg_edx;
  *(short *)(arg_eax + 0x28) = *(short *)(arg_eax + 0x28) + arg_edx[1];
  short_val = arg_edx[2];
  *(byte *)(arg_eax + 1) = *(byte *)(arg_eax + 1) | 8;
  *(short *)(arg_eax + 0x2a) = *(short *)(arg_eax + 0x2a) + short_val;
  return;
}

/******************************************************************************
 * Function : anger_fn_010cf5 (Original VA: 0x10cf5, Ghidra: FUN_00010cf5)
 * Prototype: void anger_fn_010cf5(void);
 * Address  : 0x10cf5 (Size: 19 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010cf5
 * Callers  : 1 -> setup_compute_creature_eye_offset
 * Callees  : 0 -> 
 ******************************************************************************/
void anger_fn_010cf5(void)

{
  int arg_eax;
  
  *(undefined2 *)(arg_eax + 0x32) = 0;
  *(undefined2 *)(arg_eax + 0x34) = 0;
  *(undefined2 *)(arg_eax + 0x36) = 0;
  return;
}

/******************************************************************************
 * Function : anger_fn_010d08 (Original VA: 0x10d08, Ghidra: FUN_00010d08)
 * Prototype: void anger_fn_010d08(void);
 * Address  : 0x10d08 (Size: 139 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010d08
 * Callers  : 8 -> setup_switch_screen_resolution, setup_compute_creature_eye_offset, spell_update_creature_control_0717de, trap_activation_shot_0763d4, trap_activation_shot_076569, object_process_thing_entity_0c4574, object_process_thing_entity_0c4840, update_process_thing_entity_0e1ec4
 * Callees  : 0 -> 
 ******************************************************************************/
void anger_fn_010d08(void)

{
  int val;
  longlong val_2;
  longlong val_3;
  ushort arg_ax;
  undefined2 *arg_ecx;
  ushort arg_dx;
  int arg_ebx;
  int val_4;
  
  val = (&g_slab_attr_table)[(short)arg_dx];
  val_4 = arg_ebx * 0x4000 - ((int)(&PTR_LAB_00192fe0)[(short)(arg_dx & 0x7ff)] >> 2);
  val_2 = (longlong)val_4 * (longlong)((int)(&g_slab_attr_table)[(short)(arg_ax & 0x7ff)] >> 2);
  val_3 = (longlong)val_4 * (longlong)((int)(&PTR_LAB_00192fe0)[(short)(arg_ax & 0x7ff)] >> 2);
  *arg_ecx = (short)((int)((uint)val_2 >> 0xe | (int)((ulonglong)val_2 >> 0x20) << 0x12) >> 0xe);
  arg_ecx[1] = (short)((int)-((uint)val_3 >> 0xe | (int)((ulonglong)val_3 >> 0x20) << 0x12) >> 0xe);
  arg_ecx[2] = (short)((uint)(val * arg_ebx) >> 0x10);
  return;
}

/******************************************************************************
 * Function : anger_fn_010d93 (Original VA: 0x10d93, Ghidra: FUN_00010d93)
 * Prototype: undefined8 anger_fn_010d93(void);
 * Address  : 0x10d93 (Size: 22 bytes)
 * Module   : anger.cpp [address_order_boundary_interpolation]
 * Purpose  : Module anger.cpp procedure @ 0x010d93
 * Callers  : 4 -> ariadne_fn_0128cd, ariadne_fn_012c46, routes_update_creature_control_0d2510, routes_update_creature_control_0d5624
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 anger_fn_010d93(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,(int)(arg_eax + 0x100U & 0x7ff) >> 9);
}

/******************************************************************************
 * Function : anger_update_creature_control_010dac (Original VA: 0x10dac, Ghidra: FUN_00010dac)
 * Prototype: ulonglong anger_update_creature_control_010dac(void);
 * Address  : 0x10dac (Size: 80 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> anger_hurrah_mental_instability_creature_01073a
 * Callees  : 1 -> creature_update_player_view_state_085954
 ******************************************************************************/
ulonglong anger_update_creature_control_010dac(void)

{
  byte *thing;
  undefined4 arg_edx;
  
  if (((((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 8) == 0) && /* thing->ccontrol_idx */
       (*(int *)(&g_bss_002e0e11 + (char)thing[6] * 0x1508) == 0)) &&
      ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 2) == 0)) && /* thing->ccontrol_idx */
     (((*thing & 0x10) == 0 && ((thing[1] & 2) == 0)))) {
    thing = (byte *)creature_update_player_view_state_085954();
    if (thing == (byte *)0x0) {
      return CONCAT44(arg_edx,1);
    }
  }
  return CONCAT44(arg_edx,thing) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : anger_roll_action_random_010dfc (Original VA: 0x10dfc, Ghidra: FUN_00010dfc)
 * Prototype: undefined8 anger_roll_action_random_010dfc(void);
 * Address  : 0x10dfc (Size: 208 bytes)
 * Module   : anger.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> anger_hurrah_mental_instability_creature_01073a
 * Callees  : 1 -> angtool_update_creature_control_011862
 ******************************************************************************/
undefined8 anger_roll_action_random_010dfc(void)

{
  short loop_i;
  int arg_eax;
  int val;
  int val_2;
  undefined4 uval;
  undefined4 arg_edx;
  uint uval_2;
  int rand_seed;
  int local_1c;
  
  val = (uint)*(byte *)(arg_eax + 0x1a) * 0xe6;
  if (*(short *)(&g_bss_002e91db + val) != 0) {
    uval_2 = 0;
    for (loop_i = *(short *)(&g_bss_002e91db + val); loop_i != 0; loop_i = loop_i >> 1) {
      uval_2 = uval_2 + 1;
    }
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    local_1c = 0;
    rand_seed = g_action_random_seed % uval_2 + 1;
    while( true ) {
      if (((int)*(short *)(&g_bss_002e91db + val) & 1 << ((byte)local_1c & 0x1f)) != 0) {
        rand_seed = rand_seed + -1;
      }
      if (rand_seed == 0) break;
      local_1c = local_1c + 1;
    }
    for (rand_seed = 0; rand_seed < 8; rand_seed = rand_seed + 1) {
      if (((int)*(short *)(&g_bss_002e91db + val) & 1 << ((byte)local_1c & 0x1f)) != 0) {
        val_2 = angtool_update_creature_control_011862();
        if (val_2 != 0) {
          uval = 1;
          goto LAB_00011201;
        }
      }
      local_1c = (local_1c + 1) % 8;
    }
  }
  uval = 0;
LAB_00011201:
  return CONCAT44(arg_edx,uval);
}

