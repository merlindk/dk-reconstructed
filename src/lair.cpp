/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: lair.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : lair_fn_04c6ec (Original VA: 0x4c6ec, Ghidra: FUN_0004c6ec)
 * Prototype: void lair_fn_04c6ec(int param_1);
 * Address  : 0x4c6ec (Size: 255 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Module lair.cpp procedure @ 0x04c6ec
 * Callers  : 1 -> lair_update_creature_control_04c7eb
 * Callees  : 3 -> jtyedit_fn_04c2dc, watcom_crt_fn_1292c8, watcom_crt_fn_13a3f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lair_fn_04c6ec(int param_1)

{
  int arg_eax;
  undefined4 arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  g_bss_00348ef4 = arg_eax;
  g_bss_00348ef8 = arg_edx;
  if (g_bss_003d9581 == '\0') {
    g_bss_00348f00 = (int)(param_1 * (uint)*(byte *)(arg_ebx + 7)) >> 5;
    g_bss_00348efc = (int)(param_1 * (uint)*(byte *)(arg_ebx + 6)) >> 5;
    watcom_crt_fn_13a3f8(g_bss_00348efc,g_bss_00348f00);
  }
  else {
    g_bss_00348f00 = (int)(param_1 * (uint)*(byte *)(arg_ebx + 7)) >> 5;
    g_bss_00348efc = (int)(param_1 * (uint)*(byte *)(arg_ebx + 6)) >> 5;
    watcom_crt_fn_1292c8(g_bss_00348efc,g_bss_00348f00);
  }
  if ((((g_bss_003d9580 != '\0') && (g_bss_00348ef4 <= g_engine3_bss_00387db0)) &&
      (g_engine3_bss_00387db0 <= g_bss_00348ef4 + g_bss_00348efc)) &&
     ((g_bss_00348ef8 <= g_engine3_bss_00387db4 && (g_engine3_bss_00387db4 <= g_bss_00348ef8 + g_bss_00348f00)))) {
    jtyedit_fn_04c2dc();
  }
  jtyedit_fn_04c353(arg_ecx);
  return;
}

/******************************************************************************
 * Function : lair_update_creature_control_04c7eb (Original VA: 0x4c7eb, Ghidra: FUN_0004c7eb)
 * Prototype: void lair_update_creature_control_04c7eb(undefined4 param_1,int param_2);
 * Address  : 0x4c7eb (Size: 614 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> draw_update_slab_subtile_columns_08afd8, get_thing_anim_sprite_id_checked, update_thing_anim_sprite_frame
 * Callees  : 7 -> heap_fn_03a5aa, jtyedit_fn_04c3a2, jtyedit_fn_04c4f2, jtyedit_fn_04c618, lair_fn_04c6ec, lair_fn_04ccc2, bflib_system_io_fn_0e69fc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lair_update_creature_control_04c7eb(undefined4 param_1,int param_2)

{
  ushort uval;
  undefined2 uval_2;
  int cctrl_ptr;
  undefined4 arg_ecx;
  short arg_dx;
  int val;
  uint arg_ebx;
  byte **val_2;
  undefined4 *word_ptr;
  int val_3;
  byte *pbStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  byte local_18 [8];
  char local_10;
  
  word_ptr = &local_2c;
  val_2 = (byte **)&local_2c;
  uval = (ushort)arg_ecx & 0x7ff;
  if ((uval < 0x480) || (0x77e < uval)) {
    local_10 = '\0';
  }
  else {
    local_10 = '\x01';
  }
  if (local_10 == '\0') {
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfe;
  }
  else {
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 1;
  }
  local_2c._2_2_ = (undefined2)((uint)arg_ecx >> 0x10);
  local_2c = CONCAT22(local_2c._2_2_,(ushort)arg_ecx + 0x80) & 0xffff07ff;
  puStack_30 = (undefined1 *)0x4c844;
  local_28._0_2_ = arg_dx;
  uval_2 = bflib_system_io_fn_0e69fc();
  local_2c = CONCAT22(local_2c._2_2_,uval_2);
  val_3 = g_bss_002f10da + (uint)*(ushort *)((int)&PTR_DAT_00179450 + (arg_ebx & 0xffff) * 2) * 0x10
  ;
  g_bss_00348f04 = param_2;
  local_24 = (int)(short)local_24 + (*(short *)(val_3 + 0xc) * param_2 >> 5);
  local_28 = (int)(short)local_28 + (*(short *)(val_3 + 0xe) * param_2 >> 5);
  cctrl_ptr = local_28;
  if ((g_bss_003d957c == 0) ||
     ((((*(byte *)(g_bss_003d957c + 0x25) & 1) == 0 && ((*(byte *)(g_bss_003d957c + 0x25) & 2) == 0)) &&
      (cctrl_ptr = g_bss_003d957c, (*(byte *)(g_bss_003d957c + 0x25) & 4) == 0)))) {
    g_bss_00348eec = 0;
    g_bss_00348ee8 = 0;
  }
  else {
    if ((*(byte *)(g_bss_003d957c + 0x25) & 4) == 0) {
      cctrl_ptr = 6;
    }
    else {
      puStack_30 = local_1c;
      puStack_34 = local_20;
      pbStack_38 = local_18;
      val_2 = &pbStack_38;
      lair_fn_04ccc2();
      cctrl_ptr = (0x30 - *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(g_bss_003d957c + 100)] + 0x9a)) *
              (uint)local_18[0];
      val = cctrl_ptr >> 0x1f;
      cctrl_ptr = (cctrl_ptr + val * -0x20) - (uint)(val << 4 < 0);
      cctrl_ptr = (cctrl_ptr >> 5) - (cctrl_ptr >> 0x1f) >> 1;
    }
    g_bss_00348eec = cctrl_ptr * 2;
    word_ptr = val_2;
    if ((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x01') {
      g_bss_00348ee8 = g_bss_00348eec * param_2 >> 5;
      g_bss_00348eec = cctrl_ptr;
    }
    else {
      cctrl_ptr = cctrl_ptr * param_2 >> 5;
      g_bss_00348ee8 = cctrl_ptr;
    }
  }
  local_28 = local_28 + CONCAT22((short)((uint)cctrl_ptr >> 0x10),g_bss_00348ee8);
  if (*(char *)(val_3 + 8) == '\0') {
    *(undefined4 *)((int)word_ptr + -4) = 0x4c999;
    cctrl_ptr = heap_fn_03a5aa();
    if (cctrl_ptr != 0) {
      if (local_10 == '\0') {
        *(int *)((int)word_ptr + -4) = param_2;
        *(undefined4 *)((int)word_ptr + -8) = 0x4c9df;
        lair_fn_04c6ec();
      }
      else {
        *(int *)((int)word_ptr + -4) = param_2;
        *(undefined4 *)((int)word_ptr + -8) = 0x4c9c8;
        jtyedit_fn_04c4f2();
      }
    }
  }
  else if (*(char *)(val_3 + 8) == '\x02') {
    *(undefined4 *)((int)word_ptr + -4) = 0x4c9e9;
    cctrl_ptr = heap_fn_03a5aa();
    if (cctrl_ptr != 0) {
      if (local_10 == '\0') {
        *(int *)((int)word_ptr + -4) = param_2;
        *(undefined4 *)((int)word_ptr + -8) = 0x4ca4c;
        jtyedit_fn_04c618();
      }
      else {
        *(int *)((int)word_ptr + -4) = param_2;
        *(undefined4 *)((int)word_ptr + -8) = 0x4ca32;
        jtyedit_fn_04c3a2();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : lair_fn_04ca51 (Original VA: 0x4ca51, Ghidra: FUN_0004ca51)
 * Prototype: void lair_fn_04ca51(void);
 * Address  : 0x4ca51 (Size: 625 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Module lair.cpp procedure @ 0x04ca51
 * Callers  : 1 -> engine3_rasterize_depth_buckets_high
 * Callees  : 5 -> heap_fn_03a5aa, bflib_system_io_fn_0e69fc, LbScreenWaitVbi, watcom_crt_fn_1382d0, watcom_crt_fn_1383c5
 ******************************************************************************/
void lair_fn_04ca51(void)

{
  char ch;
  bool flag;
  uint arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  ushort arg_dx;
  uint arg_ebx;
  undefined6 uval;
  char local_30;
  char local_28;
  char local_1c;
  char local_10;
  
  if (((arg_dx & 0x7ff) < 0x480) || (0x77e < (arg_dx & 0x7ff))) {
    flag = false;
  }
  else {
    flag = true;
  }
  bflib_system_io_fn_0e69fc();
  ch = *(char *)(g_bss_002f10da +
                    (uint)*(ushort *)((int)&PTR_DAT_00179450 + (arg_eax & 0xffff) * 2) * 0x10 + 8);
  if (ch == '\0') {
    val = heap_fn_03a5aa();
    if (val != 0) {
      val = extraout_ECX + (arg_ebx & 0xff) * 0x10;
      if (!flag) {
        local_1c = *(char *)(val + 7);
        while (local_1c != '\0') {
          local_1c = local_1c + -1;
          LbScreenWaitVbi();
        }
LAB_0004cbd4:
        watcom_crt_fn_1382d0();
        return;
      }
      local_28 = *(char *)(val + 7);
      while (local_28 != '\0') {
        local_28 = local_28 + -1;
        LbScreenWaitVbi();
      }
LAB_0004cb66:
      watcom_crt_fn_1383c5();
      return;
    }
  }
  else if (ch == '\x02') {
    uval = heap_fn_03a5aa();
    if ((int)uval != 0) {
      val = extraout_ECX_00 +
              ((int)(short)((uint6)uval >> 0x20) * (uint)*(byte *)(extraout_ECX_00 + 9) +
              (arg_ebx & 0xff)) * 0x10;
      if (!flag) {
        local_10 = *(char *)(val + 5);
        while (local_10 != '\0') {
          local_10 = local_10 + -1;
          LbScreenWaitVbi();
        }
        goto LAB_0004cbd4;
      }
      local_30 = *(char *)(val + 5);
      while (local_30 != '\0') {
        local_30 = local_30 + -1;
        LbScreenWaitVbi();
      }
      goto LAB_0004cb66;
    }
  }
  return;
}

/******************************************************************************
 * Function : lair_fn_04ccc2 (Original VA: 0x4ccc2, Ghidra: FUN_0004ccc2)
 * Prototype: void lair_fn_04ccc2(undefined1 *param_1,ushort *param_2,ushort *param_3);
 * Address  : 0x4ccc2 (Size: 330 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Module lair.cpp procedure @ 0x04ccc2
 * Callers  : 3 -> lair_update_creature_control_04c7eb, temple_update_creature_control_0738f2, engine3_draw_creature_health_and_level_bar
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
void lair_fn_04ccc2(undefined1 *param_1,ushort *param_2,ushort *param_3)

{
  byte flag;
  bool flag_2;
  undefined1 uval;
  short short_val;
  byte *extraout_ECX;
  ushort arg_dx;
  int extraout_EDX;
  int val;
  byte arg_bl;
  undefined2 local_1c;
  
  if (((arg_dx & 0x7ff) < 0x480) || (0x77e < (arg_dx & 0x7ff))) {
    flag_2 = false;
  }
  else {
    flag_2 = true;
  }
  if (flag_2) {
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 1;
  }
  else {
    g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfe;
  }
  local_1c = arg_dx + 0x80 & 0x7ff;
  short_val = bflib_system_io_fn_0e69fc((short)local_1c >> 8);
  if (*(char *)(extraout_EDX + 8) == '\0') {
    val = extraout_EDX + (uint)arg_bl * 0x10;
    if (flag_2) {
      *extraout_ECX = *(byte *)(val + 6);
      *param_1 = *(undefined1 *)(val + 7);
      short_val = (ushort)*extraout_ECX - (ushort)*(byte *)(val + 10);
      flag = *(byte *)(val + 4);
      goto LAB_0004cd91;
    }
    *extraout_ECX = *(byte *)(val + 6);
    uval = *(undefined1 *)(val + 7);
LAB_0004cda0:
    *param_1 = uval;
    *param_2 = (ushort)*(byte *)(val + 10);
  }
  else {
    val = extraout_EDX;
    if (*(char *)(extraout_EDX + 8) != '\x02') goto LAB_0004cd54;
    val = extraout_EDX + ((int)short_val * (uint)*(byte *)(extraout_EDX + 9) + (uint)arg_bl) * 0x10;
    if (!flag_2) {
      *extraout_ECX = *(byte *)(val + 4);
      uval = *(undefined1 *)(val + 5);
      goto LAB_0004cda0;
    }
    *extraout_ECX = *(byte *)(val + 4);
    *param_1 = *(undefined1 *)(val + 5);
    short_val = (ushort)*(byte *)(val + 6) - (ushort)*(byte *)(val + 10);
    flag = *extraout_ECX;
LAB_0004cd91:
    *param_2 = short_val - (ushort)flag;
  }
  *param_3 = (ushort)*(byte *)(val + 0xb);
LAB_0004cd54:
  *param_2 = *param_2 + *(short *)(val + 0xc);
  *param_3 = *param_3 + *(short *)(val + 0xe);
  return;
}

/******************************************************************************
 * Function : lair_fn_04ce0c (Original VA: 0x4ce0c, Ghidra: FUN_0004ce0c)
 * Prototype: longlong lair_fn_04ce0c(void);
 * Address  : 0x4ce0c (Size: 75 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Module lair.cpp procedure @ 0x04ce0c
 * Callers  : 0 -> 
 * Callees  : 3 -> lair_update_creature_control_04d022, person_fn_063b6d, person_update_creature_control_064ae7
 ******************************************************************************/
longlong lair_fn_04ce0c(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  if ((&g_bss_002e9124)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\0') {
    person_fn_063b6d();
    return (ulonglong)arg_edx << 0x20;
  }
  val = lair_update_creature_control_04d022();
  if (val != 0) {
    *(undefined1 *)(arg_eax + 8) = 0x11;
    return CONCAT44(arg_edx,1);
  }
  person_update_creature_control_064ae7();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_chosen_lair_valid_ooops_04ce57 (Original VA: 0x4ce57, Ghidra: FUN_0004ce57)
 * Prototype: longlong lair_chosen_lair_valid_ooops_04ce57(void);
 * Address  : 0x4ce57 (Size: 254 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp lines 55
 * Purpose  : String 'CHOSEN LAIR IS NOT VALID - OOOPS'
 * Callers  : 0 -> 
 * Callees  : 7 -> event_fn_0274ad, lair_process_dungeon_room_04d683, lair_get_somewhere_room_04dcd5, moodneed_fn_051374, person_fn_063b6d, room_process_dungeon_room_0ca8c0, LbErrorLog
 ******************************************************************************/
longlong lair_chosen_lair_valid_ooops_04ce57(void)

{
  int arg_eax;
  int val;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  uStack_14 = 0x4ce62;
  val = lair_process_dungeon_room_04d683();
  if (val == 0) {
    if ((int)*(char *)(arg_eax + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      if (*(short *)(&g_bss_002e05b0 +
                    (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x1508) != 0) {
        uStack_14 = 0x4cee5;
        room_process_dungeon_room_0ca8c0();
      }
      uStack_14 = 0x4cf1f;
      moodneed_fn_051374();
    }
    if (*(short *)(&g_bss_002e05b0 + *(char *)(arg_eax + 6) * 0x1508) != 0) {
      word_ptr = &uStack_14;
      uStack_14 = 0;
      event_fn_0274ad();
    }
  }
  else {
    uStack_14 = 0x4ce6f;
    val = lair_get_somewhere_room_04dcd5();
    if (val != 0) {
      *(undefined1 *)(arg_eax + 8) = 0x16;
      return CONCAT44(arg_edx,1);
    }
    uStack_14 = 0x4ce95;
    LbErrorLog(); /* LbErrorLog("lair.cpp", line 55, "CHOSEN LAIR IS NOT VALID - OOOPS") */
    word_ptr = (undefined4 *)&stack0xfffffff0;
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x4cf4e;
  person_fn_063b6d();
  return (ulonglong)*(uint *)((int)word_ptr + 4) << 0x20;
}

/******************************************************************************
 * Function : lair_fn_04cf55 (Original VA: 0x4cf55, Ghidra: FUN_0004cf55)
 * Prototype: longlong lair_fn_04cf55(void);
 * Address  : 0x4cf55 (Size: 75 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Module lair.cpp procedure @ 0x04cf55
 * Callers  : 0 -> 
 * Callees  : 4 -> lair_update_creature_control_04d2c3, person_fn_063b6d, person_update_creature_control_064ae7, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong lair_fn_04cf55(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 0xe)) &&
     (*(char *)(val + 3) == *(char *)(arg_eax + 6))) {
    val = lair_update_creature_control_04d2c3();
    if (val == 0) {
      person_update_creature_control_064ae7();
      return CONCAT44(arg_edx,1);
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_update_creature_control_04cfa0 (Original VA: 0x4cfa0, Ghidra: FUN_0004cfa0)
 * Prototype: longlong lair_update_creature_control_04cfa0(void);
 * Address  : 0x4cfa0 (Size: 130 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 4 -> lair_get_somewhere_room_04dcd5, person_fn_063b6d, room_fn_0cfd8c, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong lair_update_creature_control_04cfa0(void)

{
  int thing;
  int val;
  uint arg_edx;
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 0xe)) &&
     (*(char *)(val + 3) == *(char *)(thing + 6))) { /* thing->owner */
    val = room_fn_0cfd8c();
    if (val != 0) {
      val = lair_get_somewhere_room_04dcd5();
      if (val != 0) {
        if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68) == 0) { /* thing->ccontrol_idx */
          *(undefined1 *)(thing + 8) = 0x16; /* thing->active_state */
        }
        else {
          *(undefined1 *)(thing + 8) = 0x7e; /* thing->active_state */
        }
        return CONCAT44(arg_edx,1);
      }
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_update_creature_control_04d022 (Original VA: 0x4d022, Ghidra: FUN_0004d022)
 * Prototype: longlong lair_update_creature_control_04d022(void);
 * Address  : 0x4d022 (Size: 46 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> lair_fn_04ce0c, lair_fn_04d081, shot_fn_06da70, room_update_creature_control_0cb33c
 * Callees  : 1 -> lair_update_creature_control_04dc4e
 ******************************************************************************/
longlong lair_update_creature_control_04d022(void)

{
  int thing;
  int val;
  uint arg_edx;
  
  if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68) != 0) && /* thing->ccontrol_idx */
     (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a) != 0)) { /* thing->ccontrol_idx */
    val = lair_update_creature_control_04dc4e();
    if (val != 0) {
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_update_creature_control_04d050 (Original VA: 0x4d050, Ghidra: FUN_0004d050)
 * Prototype: longlong lair_update_creature_control_04d050(void);
 * Address  : 0x4d050 (Size: 49 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 3 -> lair_fn_04d081, lair_update_creature_control_04d0d5, lair_update_creature_control_04d197
 * Callees  : 0 -> 
 ******************************************************************************/
longlong lair_update_creature_control_04d050(void)

{
  int thing;
  uint arg_edx;
  
  if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x21) == 0) && /* thing->ccontrol_idx */
     (*(int *)(&g_bss_002e0e11 + *(char *)(thing + 6) * 0x1508) == 0)) { /* thing->owner */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_fn_04d081 (Original VA: 0x4d081, Ghidra: FUN_0004d081)
 * Prototype: longlong lair_fn_04d081(void);
 * Address  : 0x4d081 (Size: 84 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Module lair.cpp procedure @ 0x04d081
 * Callers  : 0 -> 
 * Callees  : 4 -> lair_update_creature_control_04d022, lair_update_creature_control_04d050, person_fn_063b6d, person_update_creature_control_064ae7
 ******************************************************************************/
longlong lair_fn_04d081(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  
  val = lair_update_creature_control_04d022();
  if (val != 0) {
    *(undefined1 *)(arg_eax + 8) = 0x18;
    return CONCAT44(arg_edx,1);
  }
  if ((&g_bss_002e9124)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0') {
    val = lair_update_creature_control_04d050();
    if (val != 0) {
      person_update_creature_control_064ae7();
      return (ulonglong)arg_edx << 0x20;
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_update_creature_control_04d0d5 (Original VA: 0x4d0d5, Ghidra: FUN_0004d0d5)
 * Prototype: longlong lair_update_creature_control_04d0d5(void);
 * Address  : 0x4d0d5 (Size: 194 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 8 -> anger_fn_0104db, anger_update_creature_control_010575, lair_update_creature_control_04d050, lair_update_slab_subtile_columns_04d8d2, lair_update_creature_control_04dbf1, person_fn_063b6d, person_update_creature_control_064ae7, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong lair_update_creature_control_04d0d5(void)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  
  val = lair_update_creature_control_04d050();
  if (val != 0) {
    val = lair_update_creature_control_04dbf1();
    if (val != 0) {
      val = room_update_slab_subtile_columns_0d0f50();
      if ((((val != 0) && (*(short *)(val + 10) == 0xe)) &&
          (*(char *)(val + 3) == *(char *)(extraout_ECX + 6))) &&
         (*(short *)(val + 1) ==
          *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x68))) {
        val = anger_update_creature_control_010575();
        if (val != 0) {
          lair_update_slab_subtile_columns_04d8d2();
          person_update_creature_control_064ae7();
          *(undefined4 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x82) = 0;
          anger_fn_0104db();
          return CONCAT44(arg_edx,1);
        }
      }
    }
  }
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_update_creature_control_04d197 (Original VA: 0x4d197, Ghidra: FUN_0004d197)
 * Prototype: undefined8 lair_update_creature_control_04d197(void);
 * Address  : 0x4d197 (Size: 300 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 9 -> anger_fn_0104db, anger_update_creature_control_010575, instance_negative_instance_049bfc, lair_update_creature_control_04d050, lair_update_slab_subtile_columns_04d8d2, lair_update_creature_control_04dbf1, person_fn_063b6d, sound_roll_unsynced_random_06edb9 ...
 ******************************************************************************/
undefined8 lair_update_creature_control_04d197(void)

{
  int cctrl_ptr;
  int val;
  int thing;
  int val_2;
  undefined4 uval;
  uint *word_ptr;
  uint uStack_18;
  
  word_ptr = (uint *)&stack0xffffffec;
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  uStack_18 = 0x4d1ae;
  val_2 = lair_update_creature_control_04d050();
  if (val_2 != 0) {
    uStack_18 = 0x4d1bd;
    val_2 = lair_update_creature_control_04dbf1();
    if (val_2 != 0) {
      uStack_18 = 0x4d1cc;
      val_2 = room_update_slab_subtile_columns_0d0f50();
      if ((((val_2 != 0) && (*(short *)(val_2 + 10) == 0xe)) &&
          (*(char *)(val_2 + 3) == *(char *)(thing + 6))) && /* thing->owner */
         (*(short *)(val_2 + 1) == *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68))) { /* thing->ccontrol_idx */
        uStack_18 = 0x4d20f;
        val_2 = anger_update_creature_control_010575();
        if (val_2 != 0) {
          uStack_18 = 0x4d21e;
          lair_update_slab_subtile_columns_04d8d2();
          val = *(int *)(cctrl_ptr + 0x82);
          val_2 = val + 1;
          *(int *)(cctrl_ptr + 0x82) = val_2;
          word_ptr = (uint *)&stack0xffffffec;
          if (200 < val) {
            if (val_2 % 0x20 == 0) {
              uStack_18 = 0x4d255;
              sound_roll_unsynced_random_06edb9();
            }
            if (*(int *)(cctrl_ptr + 0x82) + -200 < 0x32) {
              word_ptr = (uint *)&stack0xffffffec;
              if (*(byte *)(cctrl_ptr + 0xd2) == 0) {
                uStack_18 = (uint)*(byte *)(cctrl_ptr + 0xd2);
                instance_negative_instance_049bfc();
                word_ptr = &uStack_18;
              }
            }
            else {
              *(undefined4 *)(cctrl_ptr + 0x82) = 0;
              word_ptr = (uint *)&stack0xffffffec;
            }
          }
          *(undefined4 *)((int)word_ptr + -4) = 0x4d2ad;
          anger_fn_0104db();
          uval = 1;
          goto LAB_0004d2bd;
        }
      }
    }
  }
  uStack_18 = 0x4d2bb;
  person_fn_063b6d();
  uval = 0;
LAB_0004d2bd:
  return CONCAT44(*(undefined4 *)((int)word_ptr + 8),uval);
}

/******************************************************************************
 * Function : lair_update_creature_control_04d2c3 (Original VA: 0x4d2c3, Ghidra: FUN_0004d2c3)
 * Prototype: undefined4 lair_update_creature_control_04d2c3(void);
 * Address  : 0x4d2c3 (Size: 178 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> lair_fn_04cf55, lair_update_slab_subtile_columns_04ddd0
 * Callees  : 6 -> lair_attempt_remove_creature_lair_04d3d4, lair_could_create_totem_04da55, lair_process_map_subtile_04dc89, mapwho_process_map_subtile_050c38, mapwho_process_map_subtile_050ca9, room_fn_0cfd8c
 ******************************************************************************/
undefined4 lair_update_creature_control_04d2c3(void)

{
  char *str_ptr;
  byte flag;
  int cctrl_ptr;
  int thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  
  flag = *(byte *)(thing + 0x1a);
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = room_fn_0cfd8c();
  if (val != 0) {
    val = lair_process_map_subtile_04dc89();
    if (val == 0) {
      str_ptr = (char *)(extraout_ECX + 0x17 + (uint)*(byte *)(thing + 0x1a));
      *str_ptr = *str_ptr + '\x01';
      *(short *)(extraout_ECX + 0x10) =
           *(short *)(extraout_ECX + 0x10) + (ushort)(byte)(&g_bss_002e9124)[(uint)flag * 0xe6];
      val = extraout_ECX;
      if ((*(short *)(cctrl_ptr + 0x68) != 0) && (*(short *)(cctrl_ptr + 0x6a) != 0)) {
        lair_attempt_remove_creature_lair_04d3d4();
        val = extraout_ECX_00;
      }
      *(undefined2 *)(cctrl_ptr + 0x68) = *(undefined2 *)(val + 1);
      lair_could_create_totem_04da55();
      mapwho_process_map_subtile_050ca9();
      mapwho_process_map_subtile_050c38();
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : lair_totem_owner_04d375 (Original VA: 0x4d375, Ghidra: FUN_0004d375)
 * Prototype: longlong lair_totem_owner_04d375(void);
 * Address  : 0x4d375 (Size: 95 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp lines 356
 * Purpose  : String 'NO TOTEM OWNER'
 * Callers  : 2 -> lair_attempt_remove_creature_lair_04d3d4, room_update_creature_and_thing_0cf594
 * Callees  : 2 -> structs_update_creature_control_072af4, LbErrorLog
 ******************************************************************************/
longlong lair_totem_owner_04d375(void)

{
  int thing_ptr;
  int arg_eax;
  uint arg_edx;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x13)];
  if (thing_ptr != 0) {
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x68) = 0; /* thing->ccontrol_idx */
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x6a) = 0; /* thing->ccontrol_idx */
    structs_update_creature_control_072af4();
    return CONCAT44(arg_edx,1);
  }
  LbErrorLog(); /* LbErrorLog("lair.cpp", line 356, "NO TOTEM OWNER") */
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_attempt_remove_creature_lair_04d3d4 (Original VA: 0x4d3d4, Ghidra: FUN_0004d3d4)
 * Prototype: undefined4 lair_attempt_remove_creature_lair_04d3d4(void);
 * Address  : 0x4d3d4 (Size: 361 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp lines 394, 408
 * Purpose  : String 'Attempt to remove creature lair from room with too little us'
 * Callers  : 5 -> lair_update_creature_control_04d2c3, person_update_creature_control_063a25, structs_update_creature_control_072af4, room_lair_thinks_it_belongs_0c9280, room_lair_thinks_it_belongs_0d08a8
 * Callees  : 3 -> effect_allocate_light_effect_024998, lair_totem_owner_04d375, LbErrorLog
 ******************************************************************************/
undefined4 lair_attempt_remove_creature_lair_04d3d4(void)

{
  char *str_ptr;
  int thing;
  int extraout_ECX;
  int arg_edx;
  int val;
  
  val = (uint)*(byte *)(thing + 0x1a) * 0xe6;
  if (*(short *)(arg_edx + 1) == *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68)) { /* thing->ccontrol_idx */
    if (*(char *)(*(byte *)(thing + 0x1a) + 0x17 + arg_edx) == '\0') {
      LbErrorLog(); /* LbErrorLog("lair.cpp", line 394, "Attempt to remove creature lair from room not containing this breed") */
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x68) = 0;
      if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x6a) == 0) {
        return 0;
      }
      effect_allocate_light_effect_024998();
      lair_totem_owner_04d375();
      return 0;
    }
    if (-1 < (int)((uint)*(ushort *)(arg_edx + 0x10) - (uint)(byte)(&g_bss_002e9124)[val])) {
      *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) - (ushort)(byte)(&g_bss_002e9124)[val];
      str_ptr = (char *)(*(byte *)(thing + 0x1a) + 0x17 + arg_edx);
      *str_ptr = *str_ptr + -1;
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68) = 0; /* thing->ccontrol_idx */
      if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a) != 0) { /* thing->ccontrol_idx */
        effect_allocate_light_effect_024998();
        lair_totem_owner_04d375();
      }
      return 1;
    }
  }
  LbErrorLog(); /* LbErrorLog("lair.cpp", line 408, "Attempt to remove a creatures lair from room he didn't think he was in") */
  return 0;
}

/******************************************************************************
 * Function : lair_fn_04d53d (Original VA: 0x4d53d, Ghidra: FUN_0004d53d)
 * Prototype: undefined4 lair_fn_04d53d(void);
 * Address  : 0x4d53d (Size: 201 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp lines 499
 * Purpose  : Module lair.cpp procedure @ 0x04d53d
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 lair_fn_04d53d(void)

{
  bool flag;
  bool flag_2;
  bool flag_3;
  int arg_eax;
  undefined4 uval;
  int arg_edx;
  uint uval_2;
  
  flag = false;
  flag_2 = false;
  flag_3 = false;
  uval_2 = 0;
  while (((int)uval_2 < 0x20 && (((!flag || (!flag_2)) || (!flag_3))))) {
    if (*(char *)(arg_edx + 0x17) != '\0') {
      if (uval_2 == *(byte *)(arg_eax + 0x1a)) {
        flag = true;
      }
      else {
        flag_2 = true;
        if (uval_2 == (int)*(short *)(&g_bss_002e91e0 + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6)) {
          flag_3 = true;
        }
      }
    }
    arg_edx = arg_edx + 1;
    uval_2 = uval_2 + 1;
  }
  if (flag) {
    if (flag_2) {
      if (flag_3) {
        uval = 1;
      }
      else {
        uval = 5;
      }
    }
    else {
      uval = 6;
    }
  }
  else if (flag_2) {
    if (flag_3) {
      uval = 2;
    }
    else {
      uval = 4;
    }
  }
  else {
    uval = 3;
  }
  return uval;
}

/******************************************************************************
 * Function : lair_process_dungeon_room_04d683 (Original VA: 0x4d683, Ghidra: FUN_0004d683)
 * Prototype: undefined8 lair_process_dungeon_room_04d683(void);
 * Address  : 0x4d683 (Size: 591 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 4 -> evil_update_creature_control_02796f, lair_chosen_lair_valid_ooops_04ce57, moodneed_update_creature_control_051f4c, moodneed_update_creature_control_052119
 * Callees  : 4 -> room_fn_0cc420, room_fn_0cfd8c, update_fn_0dc440, LbScreenWaitVbi
 ******************************************************************************/
undefined8 lair_process_dungeon_room_04d683(void)

{
  byte flag;
  ushort dungeon_off;
  bool flag_2;
  bool flag_3;
  bool flag_4;
  int val;
  int arg_eax;
  int room_ptr;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 room_ptr_2;
  undefined4 extraout_ECX_01;
  undefined4 arg_edx;
  int local_48;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  
  val = g_scratch_work_buf;
  flag = *(byte *)(arg_eax + 0x1a);
  LbScreenWaitVbi();
  dungeon_off = *(ushort *)(&g_bss_002e05b0 + *(char *)(arg_eax + 6) * 0x1508);
  local_3c = (undefined1 *)0x0;
  local_34 = 0x7fffffff;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_44 = 0;
  local_2c = 0;
  while (&g_rooms < &g_rooms + (uint)dungeon_off * 0x45) {
    room_ptr = room_fn_0cfd8c();
    val_2 = extraout_ECX;
    if ((room_ptr != 0) && (room_ptr = room_fn_0cc420(), val_2 = extraout_ECX_00, room_ptr != 0)) {
      flag_2 = false;
      flag_3 = false;
      flag_4 = false;
      local_30 = 0;
      room_ptr = extraout_ECX_00;
      while (((int)local_30 < 0x20 && (((!flag_2 || (!flag_3)) || (!flag_4))))) {
        if (*(char *)(room_ptr + 0x17) != '\0') {
          if (*(byte *)(arg_eax + 0x1a) == local_30) {
            flag_2 = true;
          }
          else {
            flag_3 = true;
            if (local_30 == (int)*(short *)(&g_bss_002e91e0 + (uint)flag * 0xe6)) {
              flag_4 = true;
            }
          }
        }
        local_30 = local_30 + 1;
        room_ptr = room_ptr + 1;
      }
      if ((flag_2) && (flag_3)) {
        if (flag_4) {
          local_2c = local_2c + 1;
          *(undefined1 *)(val + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 1;
        }
        else {
          local_38 = local_38 + 1;
          *(undefined1 *)(val + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 5;
        }
      }
      else if (flag_2) {
        local_48 = local_48 + 1;
        *(undefined1 *)(val + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 6;
      }
      else if (flag_3) {
        if (flag_4) {
          local_44 = local_44 + 1;
          *(undefined1 *)(val + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 2;
        }
        else {
          local_40 = local_40 + 1;
          *(undefined1 *)(val + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 4;
        }
      }
      else {
        local_28 = local_28 + 1;
        *(undefined1 *)(val + (uint)*(ushort *)(extraout_ECX_00 + 1)) = 3;
      }
    }
    dungeon_off = *(ushort *)(val_2 + 6);
  }
  if (local_48 == 0) {
    if (local_38 == 0) {
      if (local_28 == 0) {
        if (local_40 == 0) {
          if (local_2c == 0) {
            if (local_44 == 0) {
              local_3c = (undefined1 *)0x0;
              goto LAB_0004d2bd;
            }
            room_ptr_2 = 2;
          }
          else {
            room_ptr_2 = 1;
          }
        }
        else {
          room_ptr_2 = 4;
        }
      }
      else {
        room_ptr_2 = 3;
      }
    }
    else {
      room_ptr_2 = 5;
    }
  }
  else {
    room_ptr_2 = 6;
  }
  dungeon_off = *(ushort *)(&g_bss_002e05b0 + *(char *)(arg_eax + 6) * 0x1508);
  while( true ) {
    val_2 = (uint)dungeon_off * 0x45;
    if (&g_rooms + val_2 < &g_bss_002ddd1c) break;
    if (((char)room_ptr_2 == *(char *)(val + (uint)*(ushort *)(&g_bss_002ddd1c + val_2))) &&
       (room_ptr = update_fn_0dc440((ushort)(byte)(&g_bss_002ddd23)[val_2] << 8,0x100),
       room_ptr_2 = extraout_ECX_01, room_ptr < local_34)) {
      local_3c = &g_rooms + val_2;
      local_34 = room_ptr;
    }
    dungeon_off = *(ushort *)(&g_bss_002ddd21 + val_2);
  }
LAB_0004d2bd:
  return CONCAT44(arg_edx,local_3c);
}

/******************************************************************************
 * Function : lair_update_slab_subtile_columns_04d8d2 (Original VA: 0x4d8d2, Ghidra: FUN_0004d8d2)
 * Prototype: undefined4 lair_update_slab_subtile_columns_04d8d2(void);
 * Address  : 0x4d8d2 (Size: 387 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 4 -> lair_update_creature_control_04d0d5, lair_update_creature_control_04d197, shot_update_creature_and_thing_06da97, shot_update_creature_control_06db51
 * Callees  : 4 -> combchk_fn_016175, combtool_creature_combat_already_adding_018087, combtool_fn_0189d4, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
undefined4 lair_update_slab_subtile_columns_04d8d2(void)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  byte *thing;
  int room_off;
  undefined1 *word_ptr;
  undefined1 *arg_edx;
  undefined1 *word_ptr_2;
  int *int_ptr;
  uint uval;
  int aiStack_2c [3];
  undefined *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = arg_edx;
  if (arg_edx == (undefined1 *)0x0) {
    uval = (uint)CONCAT11(thing[0x10],thing[0xe]);
    if ((*(byte *)((int)&g_map_subtiles + uval * 5) & 2) == 0) {
      return 0;
    }
    aiStack_2c[2] = (&g_subtile_to_slab_lut)[(int)uval >> 8] * 0x55;
    local_18 = 0x100;
    room_off = (uint)(byte)(&g_bss_002d33c8)[((&g_subtile_to_slab_lut)[uval % 0x100] + aiStack_2c[2]) * 6] * 0x45
    ;
    local_1c = &g_rooms + room_off;
    if (*(short *)(&g_room_slabs_count + room_off) != 0xe) {
      return 0;
    }
    if (*(short *)(&g_bss_002ddd1c + room_off) !=
        *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x68)) { /* thing->ccontrol_idx */
      return 0;
    }
    if ((&g_bss_002ddd1e)[room_off] != thing[6]) {
      return 0;
    }
  }
  local_20 = &g_bss_002e910d + (uint)thing[0x1a] * 0xe6;
  if ((*(short *)(&g_bss_002e91e0 + (uint)thing[0x1a] * 0xe6) != 0) &&
     (((uint)*(ushort *)(thing + 0x1b) + g_game_turn & 0x3f) == 0)) { /* thing->index_or_angle */
    cctrl_ptr = (&g_bss_002e05b6)[(char)thing[6] * 0xa84];
    int_ptr = aiStack_2c + 2;
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      word_ptr_2 = (undefined1 *)int_ptr;
      if (((((ushort)thing_ptr[0x1a] == *(ushort *)(local_20 + 0xd3)) &&
           (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) == '\0')) && /* thing->ccontrol_idx */
          ((*thing_ptr & 0x10) == 0)) && (((thing_ptr[1] & 2) == 0 && (thing_ptr != thing)))) {
        *(undefined4 *)((int)int_ptr + -4) = 0x4da1f;
        word_ptr = (undefined1 *)room_update_slab_subtile_columns_0d0f50();
        if (word_ptr == local_1c) {
          *(undefined4 *)((int)int_ptr + -4) = 0x4da2d;
          combtool_fn_0189d4();
          word_ptr_2 = (undefined1 *)((int)int_ptr + -4);
          *(undefined4 *)((int)int_ptr + -4) = 0;
          *(undefined4 *)((int)int_ptr + -8) = 0x4da3c;
          room_off = combchk_fn_016175();
          if (0 < room_off) {
            *(undefined4 *)((int)int_ptr + -8) = 0x4da4b;
            combtool_creature_combat_already_adding_018087();
            return 1;
          }
        }
      }
      int_ptr = (int *)word_ptr_2;
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
  }
  return 0;
}

/******************************************************************************
 * Function : lair_could_create_totem_04da55 (Original VA: 0x4da55, Ghidra: FUN_0004da55)
 * Prototype: void lair_could_create_totem_04da55(void);
 * Address  : 0x4da55 (Size: 412 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp lines 760
 * Purpose  : String 'Could not create totem'
 * Callers  : 1 -> lair_update_creature_control_04d2c3
 * Callees  : 7 -> anger_removing_annoyed_creature_non_0109ea, effect_allocate_light_effect_024998, inits_allocate_light_object_043f07, sound_fn_06e538, draw_roll_action_random_08ccec, move_process_map_subtile_0b28e8, LbErrorLog
 ******************************************************************************/
void lair_could_create_totem_04da55(void)

{
  ushort uval;
  uint rand_seed;
  uint rand_seed_2;
  undefined2 uval_2;
  ushort rand_seed_3;
  int thing;
  int thing_ptr;
  undefined2 uval_3;
  
  uval_2 = *(undefined2 *)(thing + 0xd); /* thing->mappos.val_x */
  uval_3 = *(undefined2 *)(thing + 0x11);
  uval = *(ushort *)(&g_data_00188bf5 + (uint)*(byte *)(thing + 0x1a) * 5);
  thing_ptr = inits_allocate_light_object_043f07(uval_2,uval_3);
  if (thing_ptr == 0) {
    LbErrorLog(uval_2,uval_3,0); /* LbErrorLog("lair.cpp", line 760, "Could not create totem") */
  }
  else {
    uval_2 = move_process_map_subtile_0b28e8();
    *(undefined2 *)(thing_ptr + 0x11) = uval_2;
    *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a) = /* thing->ccontrol_idx */
         *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
    uval_2 = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
    *(undefined2 *)(thing_ptr + 0x15) = 1;
    *(undefined2 *)(thing_ptr + 0x13) = uval_2; /* thing->anim_sprite */
    *(short *)(thing_ptr + 0x17) =
         (short)((ulonglong)
                 ((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * 300) / 0x14) /* thing->ccontrol_idx */
         + 300;
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    rand_seed = g_action_random_seed >> 0xd;
    rand_seed_2 = g_action_random_seed * 0x80000;
    g_action_random_seed._0_2_ = (ushort)rand_seed;
    rand_seed_3 = (ushort)g_action_random_seed & 0x7ff;
    g_action_random_seed = rand_seed | rand_seed_2;
    *(ushort *)(thing_ptr + 0x52) = rand_seed_3; /* thing->health */
    draw_roll_action_random_08ccec(0,0xffffffff,(&g_data_0018b917)[(uint)uval * 0x16]);
    sound_fn_06e538(3,1,2,0x100);
    effect_allocate_light_effect_024998();
    anger_removing_annoyed_creature_non_0109ea();
  }
  return;
}

/******************************************************************************
 * Function : lair_update_creature_control_04dbf1 (Original VA: 0x4dbf1, Ghidra: FUN_0004dbf1)
 * Prototype: longlong lair_update_creature_control_04dbf1(void);
 * Address  : 0x4dbf1 (Size: 93 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 4 -> lair_update_creature_control_04d0d5, lair_update_creature_control_04d197, shot_update_creature_and_thing_06da97, shot_update_creature_control_06db51
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
longlong lair_update_creature_control_04dbf1(void)

{
  int thing;
  int val;
  uint arg_edx;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a) != 0) { /* thing->ccontrol_idx */
    val = bflib_system_io_fn_0e69fc();
    if (val < 1) {
      val = bflib_system_io_fn_0e69fc();
      if (val < 1) {
        return CONCAT44(arg_edx,1);
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_update_creature_control_04dc4e (Original VA: 0x4dc4e, Ghidra: FUN_0004dc4e)
 * Prototype: undefined8 lair_update_creature_control_04dc4e(void);
 * Address  : 0x4dc4e (Size: 59 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> lair_update_creature_control_04d022
 * Callees  : 1 -> move_update_creature_control_0b3b58
 ******************************************************************************/
undefined8 lair_update_creature_control_04dc4e(void)

{
  short short_val;
  int thing;
  undefined4 uval;
  undefined4 arg_edx;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6a) != 0) { /* thing->ccontrol_idx */
    short_val = move_update_creature_control_0b3b58();
    uval = 1;
    if (short_val == 1) goto LAB_0004dc85;
  }
  uval = 0;
LAB_0004dc85:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : lair_process_map_subtile_04dc89 (Original VA: 0x4dc89, Ghidra: FUN_0004dc89)
 * Prototype: uint lair_process_map_subtile_04dc89(void);
 * Address  : 0x4dc89 (Size: 76 bytes)
 * Module   : lair.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 4 -> lair_update_creature_control_04d2c3, lair_get_somewhere_room_04dcd5, room_lair_thinks_it_belongs_0c9280, room_update_creature_and_thing_0cf594
 * Callees  : 0 -> 
 ******************************************************************************/
uint lair_process_map_subtile_04dc89(void)

{
  uint arg_eax;
  uint thing_ptr;
  uint arg_edx;
  
  thing_ptr = (*(uint *)((int)&g_map_subtiles + ((arg_eax & 0xffff) + (arg_edx & 0xffff) * 0x100) * 5 + 1) &
          0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[thing_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((*(char *)(thing_ptr + 0x1f) == '\x01') && /* thing->class_id */
       ((&g_data_0018b919)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x16] != '\0')) break;
    thing_ptr = (uint)*(ushort *)(thing_ptr + 2);
  }
  return thing_ptr;
}

/******************************************************************************
 * Function : lair_get_somewhere_room_04dcd5 (Original VA: 0x4dcd5, Ghidra: FUN_0004dcd5)
 * Prototype: undefined4 lair_get_somewhere_room_04dcd5(void);
 * Address  : 0x4dcd5 (Size: 251 bytes)
 * Module   : lair.cpp [direct_file_string_xref]
 * OrigLine : lair.cpp lines 864, 869
 * Purpose  : String 'CANNOT GET SOMEWHERE IN ROOM'
 * Callers  : 2 -> lair_chosen_lair_valid_ooops_04ce57, lair_update_creature_control_04cfa0
 * Callees  : 3 -> lair_process_map_subtile_04dc89, move_update_creature_control_0b3b58, LbErrorLog
 ******************************************************************************/
undefined4 lair_get_somewhere_room_04dcd5(void)

{
  short short_val;
  int loop_i;
  int arg_edx;
  int local_1c;
  uint local_18;
  
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  local_18 = g_action_random_seed % (uint)*(ushort *)(arg_edx + 0x3b);
  for (loop_i = 0; loop_i < (int)local_18; loop_i = loop_i + 1) {
  }
  local_1c = 0;
  do {
    if ((int)(uint)*(ushort *)(arg_edx + 0x3b) <= local_1c) {
      LbErrorLog(); /* LbErrorLog("lair.cpp", line 864, "CANNOT GET SOMEWHERE IN ROOM") */
      return 0;
    }
    if (*(ushort *)(arg_edx + 0x3b) == local_18) {
      local_18 = 0;
    }
    loop_i = lair_process_map_subtile_04dc89();
    if (loop_i == 0) {
      short_val = move_update_creature_control_0b3b58();
      if (short_val != 0) {
        return 1;
      }
      LbErrorLog(); /* LbErrorLog("lair.cpp", line 869, "No more slab-room for lair") */
    }
    local_1c = local_1c + 1;
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : lair_update_slab_subtile_columns_04ddd0 (Original VA: 0x4ddd0, Ghidra: FUN_0004ddd0)
 * Prototype: longlong lair_update_slab_subtile_columns_04ddd0(void);
 * Address  : 0x4ddd0 (Size: 157 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 0 -> 
 * Callees  : 2 -> lair_update_creature_control_04d2c3, person_update_creature_control_064ae7
 ******************************************************************************/
longlong lair_update_slab_subtile_columns_04ddd0(void)

{
  int arg_eax;
  int room_ptr;
  uint uval;
  uint arg_edx;
  
  uval = (uint)CONCAT11(*(undefined1 *)(arg_eax + 0x10),*(undefined1 *)(arg_eax + 0xe));
  if ((((*(byte *)((int)&g_map_subtiles + uval * 5) & 2) != 0) &&
      (room_ptr = ((&g_subtile_to_slab_lut)[uval % 0x100] + (&g_subtile_to_slab_lut)[(int)uval >> 8] * 0x55) * 6,
      (uint)((&g_slabmap)[room_ptr] & 7) == (int)*(char *)(arg_eax + 6))) &&
     (*(short *)(&g_room_slabs_count + (uint)(byte)(&g_bss_002d33c8)[room_ptr] * 0x45) == 0xe)) {
    room_ptr = lair_update_creature_control_04d2c3();
    if (room_ptr == 0) {
      person_update_creature_control_064ae7();
      goto LAB_0004d2bb;
    }
  }
  person_fn_063b6d();
LAB_0004d2bb:
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : lair_fn_04de8c (Original VA: 0x4de8c, Ghidra: FUN_0004de8c)
 * Prototype: void lair_fn_04de8c(uint param_1);
 * Address  : 0x4de8c (Size: 593 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Module lair.cpp procedure @ 0x04de8c
 * Callers  : 1 -> eyelens_data_frac_dat_027130
 * Callees  : 1 -> bflib_system_io_fn_0e8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lair_fn_04de8c(uint param_1)

{
  float loop_i;
  float val;
  float loop_i_2;
  int *arg_eax;
  int loop_i_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int arg_ebx;
  int loop_i_4;
  longdouble val_2;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_1c;
  
  if (param_1 == 0) {
    for (loop_i_4 = 0; loop_i_4 < arg_ebx; loop_i_4 = loop_i_4 + 1) {
      for (loop_i_3 = 0; loop_i_3 < arg_edx; loop_i_3 = loop_i_3 + 1) {
        *arg_eax = arg_edx * (loop_i_4 / 2) + loop_i_3 / 2;
        arg_eax = arg_eax + 1;
      }
    }
  }
  else if (param_1 < 2) {
    loop_i = (float)arg_edx * g_data_00165904;
    val = (float)arg_ebx * g_data_00165904;
    for (loop_i_2 = -val; loop_i_2 < val; loop_i_2 = loop_i_2 + 1.0) {
      local_28 = -loop_i;
      while (local_28 < loop_i) {
        fsin(((longdouble)loop_i_2 / (longdouble)arg_edx) * (longdouble)g_data_0016590c);
        fsin(((longdouble)local_28 / (longdouble)arg_ebx) * (longdouble)g_data_0016590c);
        val_2 = (longdouble)bflib_system_io_fn_0e8d50();
        local_24 = (int)ROUND(val_2);
        val_2 = (longdouble)bflib_system_io_fn_0e8d50();
        local_34 = (int)ROUND(val_2);
        if (local_24 < 0) {
          local_24 = 0;
        }
        else if (arg_edx <= local_24) {
          local_24 = extraout_ECX;
        }
        if (local_34 < 0) {
          local_34 = 0;
        }
        else if (arg_ebx <= local_34) {
          local_34 = arg_ebx + -1;
        }
        local_28 = local_28 + 1.0;
        *arg_eax = local_24 + arg_edx * local_34;
        arg_eax = arg_eax + 1;
      }
    }
  }
  else if (param_1 == 2) {
    val = (float)arg_edx * g_data_00165904;
    loop_i_2 = (float)arg_ebx * g_data_00165904;
    for (loop_i = -loop_i_2; loop_i < loop_i_2; loop_i = loop_i + 1.0) {
      local_1c = -val;
      while (local_1c < val) {
        val_2 = (longdouble)bflib_system_io_fn_0e8d50();
        local_2c = (int)ROUND(val_2);
        val_2 = (longdouble)bflib_system_io_fn_0e8d50();
        local_30 = (int)ROUND(val_2);
        if (local_2c < 0) {
          local_2c = 0;
        }
        else if (arg_edx <= local_2c) {
          local_2c = extraout_ECX_00;
        }
        if (local_30 < 0) {
          local_30 = 0;
        }
        else if (arg_ebx <= local_30) {
          local_30 = arg_ebx + -1;
        }
        local_1c = local_1c + 1.0;
        *arg_eax = local_2c + arg_edx * local_30;
        arg_eax = arg_eax + 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : lair_fn_04e0dd (Original VA: 0x4e0dd, Ghidra: FUN_0004e0dd)
 * Prototype: void lair_fn_04e0dd(int param_1,int param_2);
 * Address  : 0x4e0dd (Size: 65 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Module lair.cpp procedure @ 0x04e0dd
 * Callers  : 1 -> draw_unhandled_screen_mode_087da4
 * Callees  : 0 -> 
 ******************************************************************************/
void lair_fn_04e0dd(int param_1,int param_2)

{
  int val;
  undefined1 *arg_eax;
  int arg_ecx;
  int arg_edx;
  int *arg_ebx;
  int local_10;
  
  for (; local_10 = arg_ecx, param_1 != 0; param_1 = param_1 + -1) {
    while (local_10 != 0) {
      val = *arg_ebx;
      local_10 = local_10 + -1;
      arg_ebx = arg_ebx + 1;
      *arg_eax = *(undefined1 *)(arg_edx + val);
      arg_eax = arg_eax + 1;
    }
    arg_eax = arg_eax + (param_2 - arg_ecx);
  }
  return;
}

/******************************************************************************
 * Function : lair_process_thing_entity_04e120 (Original VA: 0x4e120, Ghidra: FUN_0004e120)
 * Prototype: undefined4 lair_process_thing_entity_04e120(void);
 * Address  : 0x4e120 (Size: 210 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 5 -> specials_handle_object_thing_07027c, specials_dungeon_special_model_0708fa, creature_process_thing_entity_0847d4, creature_update_creature_control_084ff8, object_process_slabmap_tile_0c57c4
 ******************************************************************************/
undefined4 lair_process_thing_entity_04e120(void)

{
  ushort arg_ax;
  int thing_ptr;
  short arg_cx;
  int extraout_ECX;
  int thing_ptr_2;
  
  thing_ptr_2 = 0;
  if ((byte)(&g_bss_002e05ec)[(uint)arg_ax * 0x1508] < 8) {
    if ((arg_cx != 0) && (thing_ptr = creature_update_creature_control_084ff8(), thing_ptr != 0)) {
      thing_ptr_2 = *(int *)((int)&g_thing_ptrs + extraout_ECX);
    }
    if ((thing_ptr_2 == 0) && (*(short *)(&g_bss_0019d0fd + (uint)arg_ax * 0x4ef) != 0)) {
      thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(&g_bss_0019d0fd + (uint)arg_ax * 0x4ef)];
    }
    if ((thing_ptr_2 != 0) && (thing_ptr = creature_update_creature_control_084ff8(), thing_ptr != 0)) {
      if (*(char *)(thing_ptr_2 + 0x1f) == '\x01') { /* thing->class_id */
        thing_ptr_2 = specials_handle_object_thing_07027c();
        if (thing_ptr_2 != 0) {
          specials_dungeon_special_model_0708fa();
          return 0;
        }
        thing_ptr_2 = object_process_slabmap_tile_0c57c4();
        if (thing_ptr_2 == 0) {
          return 0;
        }
      }
      creature_process_thing_entity_0847d4();
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : lair_process_thing_entity_04e1f2 (Original VA: 0x4e1f2, Ghidra: FUN_0004e1f2)
 * Prototype: undefined4 lair_process_thing_entity_04e1f2(void);
 * Address  : 0x4e1f2 (Size: 520 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 10 -> dungeon_remove_reserve_023868, inits_told_you_so_create_043bb3, magic_update_slab_subtile_columns_05003d, moodneed_fn_051374, person_initialise_state_but_thing_064b0c, sound_non_emitter_has_been_06e9ab, sound_roll_unsynced_random_06edb9, structs_allocate_thing_structure_072829 ...
 ******************************************************************************/
undefined4 lair_process_thing_entity_04e1f2(void)

{
  ulonglong rand_seed;
  char ch;
  ushort arg_ax;
  short player_off;
  int val;
  uint thing_ptr;
  uint rand_seed_2;
  
  ch = magic_update_slab_subtile_columns_05003d(0);
  if (((ch == '\0') || (player_off = structs_update_creature_control_0728c2(), player_off == 0)) ||
     (player_off = structs_allocate_thing_structure_072829(), player_off == 0)) {
    if (arg_ax == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      sound_non_emitter_has_been_06e9ab();
    }
  }
  else {
    val = dungeon_remove_reserve_023868();
    if (val < 0) {
      if (arg_ax == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
      return 0xffffffff;
    }
    move_process_map_subtile_0b3788();
    thing_ptr = inits_told_you_so_create_043bb3();
    if (g_thing_ptrs < thing_ptr) {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      rand_seed_2 = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      g_action_random_seed = rand_seed_2 * 0x24a1 + 0x24df;
      g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
      rand_seed = (ulonglong)g_action_random_seed;
      *(short *)(thing_ptr + 0x32) = *(short *)(thing_ptr + 0x32) + (short)((ulonglong)rand_seed_2 % 0xa0) + -0x50
      ;
      *(short *)(thing_ptr + 0x34) = *(short *)(thing_ptr + 0x34) + (short)(rand_seed % 0xa0) + -0x50;
      *(undefined2 *)(thing_ptr + 0x52) = 0; /* thing->health */
      *(short *)(thing_ptr + 0x36) = *(short *)(thing_ptr + 0x36) + 0xa0;
      *(byte *)(thing_ptr + 1) = *(byte *)(thing_ptr + 1) | 4;
      person_initialise_state_but_thing_064b0c();
      sound_roll_unsynced_random_06edb9();
    }
  }
  return 1;
}

/******************************************************************************
 * Function : lair_update_creature_and_thing_04e3fa (Original VA: 0x4e3fa, Ghidra: FUN_0004e3fa)
 * Prototype: void lair_update_creature_and_thing_04e3fa(void);
 * Address  : 0x4e3fa (Size: 179 bytes)
 * Module   : lair.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 1 -> creature_update_creature_control_084ff8
 ******************************************************************************/
void lair_update_creature_and_thing_04e3fa(void)

{
  int cctrl_ptr;
  char extraout_CL;
  int arg_edx;
  short arg_bx;
  uint thing_ptr;
  uint uval;
  uint loop_i;
  
  for (loop_i = 0; thing_ptr = loop_i & 0xffff, thing_ptr < 9; loop_i = loop_i + 1) {
    uval = arg_edx + (uint)(ushort)(short)(char)(&g_data_0018b6c2)[thing_ptr * 2] & 0xffff;
    if ((uval < 0x100) && ((ushort)((char)(&g_data_0018b6c3)[thing_ptr * 2] + arg_bx) < 0x100)) {
      for (thing_ptr = (*(uint *)((int)&g_map_subtiles +
                             ((uint)(ushort)((char)(&g_data_0018b6c3)[thing_ptr * 2] + arg_bx) * 0x100 +
                             uval) * 5 + 1) & 0x3fffff) >> 0xb; thing_ptr = (&g_thing_ptrs)[thing_ptr],
          g_thing_ptrs < thing_ptr; thing_ptr = (uint)*(ushort *)(thing_ptr + 2)) {
        if (((*(char *)(thing_ptr + 0x1f) == '\x05') && (cctrl_ptr = creature_update_creature_control_084ff8(), cctrl_ptr != 0)) && /* thing->class_id */
           (extraout_CL == *(char *)(thing_ptr + 6))) { /* thing->owner */
          *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x302) = 0x14; /* thing->ccontrol_idx */
        }
      }
    }
  }
  return;
}

