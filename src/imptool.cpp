/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: imptool.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 16
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : imptool_process_slabmap_tile_03f7ad (Original VA: 0x3f7ad, Ghidra: FUN_0003f7ad)
 * Prototype: undefined4 imptool_process_slabmap_tile_03f7ad(void);
 * Address  : 0x3f7ad (Size: 95 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 3 -> angtool_fn_011606, imptool_fn_03f80c, imptool_fn_03fed7
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 imptool_process_slabmap_tile_03f7ad(void)

{
  uint arg_eax;
  int arg_edx;
  uint uval;
  int arg_ebx;
  
  uval = (uint)(byte)(&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6];
  if ((((((&g_slabmap)[((&g_subtile_to_slab_lut)[arg_edx * 3] + (&g_subtile_to_slab_lut)[arg_ebx * 3] * 0x55) * 6]
         & 7) == arg_eax) && ((&g_data_001921d2)[uval * 0x16] != '\0')) && (uval != 0xd)) &&
     (uval != 0xc)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : imptool_fn_03f80c (Original VA: 0x3f80c, Ghidra: FUN_0003f80c)
 * Prototype: undefined4 imptool_fn_03f80c(void);
 * Address  : 0x3f80c (Size: 77 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module imptool.cpp procedure @ 0x03f80c
 * Callers  : 10 -> cdtest_process_slabmap_tile_014faa, impset_process_slabmap_tile_03aef2, impset_update_slab_subtile_columns_03af4b, impset_process_map_subtile_03b0a0, heapmgr_update_slab_subtile_columns_03b49d, heapmgr_process_map_subtile_03b643, imptool_process_slabmap_tile_03fbe3, prison_fn_066111 ...
 * Callees  : 1 -> imptool_process_slabmap_tile_03f7ad
 ******************************************************************************/
undefined4 imptool_fn_03f80c(void)

{
  int val;
  int extraout_ECX;
  
  val = 0;
  while( true ) {
    if (7 < val) {
      return 0;
    }
    val = imptool_process_slabmap_tile_03f7ad();
    if (val != 0) break;
    val = extraout_ECX + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : imptool_fn_03f859 (Original VA: 0x3f859, Ghidra: FUN_0003f859)
 * Prototype: undefined4 imptool_fn_03f859(void);
 * Address  : 0x3f859 (Size: 49 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module imptool.cpp procedure @ 0x03f859
 * Callers  : 2 -> imptool_update_creature_and_thing_03fa16, impset_update_creature_and_thing_03fad0
 * Callees  : 1 -> update_fn_0dc440
 ******************************************************************************/
undefined4 imptool_fn_03f859(void)

{
  int val;
  int val_2;
  
  val = update_fn_0dc440();
  val_2 = update_fn_0dc440();
  if ((val_2 < val) && (0x600 < val - val_2)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : imptool_process_map_subtile_03f88a (Original VA: 0x3f88a, Ghidra: FUN_0003f88a)
 * Prototype: undefined4 imptool_process_map_subtile_03f88a(void);
 * Address  : 0x3f88a (Size: 94 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> impset_fn_03eea6, impset_process_slabmap_tile_03fcd0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 imptool_process_map_subtile_03f88a(void)

{
  byte *thing_ptr;
  byte *arg_eax;
  uint uval;
  int arg_edx;
  int arg_ebx;
  
  uval = (*(uint *)((int)&g_map_subtiles + (arg_edx + arg_ebx * 0x100) * 5 + 1) & 0x3fffff) >> 0xb;
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[uval];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if ((((thing_ptr[0x1f] == 5) && (thing_ptr != arg_eax)) && ((*thing_ptr & 0x10) == 0)) &&
       (((thing_ptr[1] & 2) == 0 && ((thing_ptr[7] == 4 || (thing_ptr[7] == 5)))))) break;
    uval = (uint)*(ushort *)(thing_ptr + 2);
  }
  return 1;
}

/******************************************************************************
 * Function : imptool_update_creature_and_thing_03f8e8 (Original VA: 0x3f8e8, Ghidra: FUN_0003f8e8)
 * Prototype: undefined4 imptool_update_creature_and_thing_03f8e8(void);
 * Address  : 0x3f8e8 (Size: 163 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> impset_update_creature_and_thing_03c31c, impset_update_creature_and_thing_03c458, impset_update_creature_and_thing_03c53a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 imptool_update_creature_and_thing_03f8e8(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  int arg_edx;
  char ch;
  
  cctrl_ptr = (&g_bss_002e05b8)[arg_eax * 0xa84];
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x72) == *(short *)(arg_edx + 0x1b)) { /* thing->ccontrol_idx */
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == '\v') {
        return 1;
      }
      if (*(char *)(thing_ptr + 7) == 'G') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == '\f') {
        return 1;
      }
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == '\r') {
        return 1;
      }
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : imptool_update_creature_and_thing_03f98b (Original VA: 0x3f98b, Ghidra: FUN_0003f98b)
 * Prototype: longlong imptool_update_creature_and_thing_03f98b(void);
 * Address  : 0x3f98b (Size: 139 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 3 -> heapmgr_process_thing_entity_03b2c0, impset_process_thing_entity_03b30e, impset_process_thing_entity_03c3e7
 * Callees  : 0 -> 
 ******************************************************************************/
longlong imptool_update_creature_and_thing_03f98b(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int gui_btn;
  uint arg_edx;
  char ch;
  
  cctrl_ptr = (&g_bss_002e05b8)[*(char *)(gui_btn + 6) * 0xa84];
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x70) == *(short *)(gui_btn + 0x1b)) { /* thing->ccontrol_idx, gui_btn->id_num */
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == '\v') {
LAB_0003fa09:
        return CONCAT44(arg_edx,1);
      }
      if (*(char *)(thing_ptr + 7) == 'G') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == '\f') goto LAB_0003fa09;
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : imptool_update_creature_and_thing_03fa16 (Original VA: 0x3fa16, Ghidra: FUN_0003fa16)
 * Prototype: undefined4 imptool_update_creature_and_thing_03fa16(void);
 * Address  : 0x3fa16 (Size: 186 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> impset_fn_03cd63
 * Callees  : 1 -> imptool_fn_03f859
 ******************************************************************************/
undefined4 imptool_update_creature_and_thing_03fa16(void)

{
  ushort cctrl_ptr;
  byte cctrl_ptr_2;
  int arg_eax;
  int val;
  byte *thing_ptr;
  byte *extraout_ECX;
  uint arg_edx;
  undefined2 uval;
  uint arg_ebx;
  
  uval = (undefined2)(arg_edx << 8);
  cctrl_ptr = (&g_bss_002e05b8)[*(char *)(arg_eax + 6) * 0xa84];
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) {
      if (thing_ptr[7] == 0xe) {
        cctrl_ptr_2 = thing_ptr[8];
      }
      else {
        cctrl_ptr_2 = thing_ptr[7];
      }
      if (((cctrl_ptr_2 == 0x49) &&
          (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2e) == arg_edx)) && /* thing->ccontrol_idx */
         (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x30) == arg_ebx)) { /* thing->ccontrol_idx */
        val = imptool_fn_03f859(uval);
        thing_ptr = extraout_ECX;
        if (val != 0) {
          return 1;
        }
      }
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : imptool_update_creature_and_thing_03fb7f (Original VA: 0x3fb7f, Ghidra: FUN_0003fb7f)
 * Prototype: undefined4 imptool_update_creature_and_thing_03fb7f(void);
 * Address  : 0x3fb7f (Size: 100 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 imptool_update_creature_and_thing_03fb7f(void)

{
  ushort cctrl_ptr;
  byte *thing_ptr;
  int arg_eax;
  uint arg_edx;
  uint arg_ebx;
  
  cctrl_ptr = (&g_bss_002e05b8)[arg_eax * 0xa84];
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return 0;
    }
    if (((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) &&
        (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2e) == arg_edx)) && /* thing->ccontrol_idx */
       (*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x30) == arg_ebx)) break; /* thing->ccontrol_idx */
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  return 1;
}

/******************************************************************************
 * Function : imptool_process_slabmap_tile_03fbe3 (Original VA: 0x3fbe3, Ghidra: FUN_0003fbe3)
 * Prototype: undefined4 imptool_process_slabmap_tile_03fbe3(void);
 * Address  : 0x3fbe3 (Size: 86 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 2 -> heapmgr_process_map_subtile_03adf1, imptool_fn_03f80c
 ******************************************************************************/
undefined4 imptool_process_slabmap_tile_03fbe3(void)

{
  int val;
  int arg_edx;
  int arg_ebx;
  
  if ((&g_slabmap_base)[(arg_ebx * 0x55 + arg_edx) * 6] == '\n') {
    val = imptool_fn_03f80c(arg_ebx * 3 + 1);
    if (val != 0) {
      val = heapmgr_process_map_subtile_03adf1();
      if (val == 0) {
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : imptool_process_map_subtile_03fc39 (Original VA: 0x3fc39, Ghidra: FUN_0003fc39)
 * Prototype: undefined4 imptool_process_map_subtile_03fc39(void);
 * Address  : 0x3fc39 (Size: 79 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> impset_process_slabmap_tile_03fcd0
 * Callees  : 1 -> move_fn_0b3afc
 ******************************************************************************/
undefined4 imptool_process_map_subtile_03fc39(void)

{
  byte arg_al;
  int val;
  int arg_edx;
  int arg_ebx;
  
  val = (arg_ebx * 0x100 + arg_edx) * 5;
  if (((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0) &&
     ((*(uint *)((int)&g_map_subtiles + val + 1) >> 0x1c & (uint)(1 << (arg_al & 0x1f) == 0)) == 0))
  {
    val = move_fn_0b3afc();
    if (val == 0) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : imptool_fn_03fc88 (Original VA: 0x3fc88, Ghidra: FUN_0003fc88)
 * Prototype: undefined4 imptool_fn_03fc88(void);
 * Address  : 0x3fc88 (Size: 72 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module imptool.cpp procedure @ 0x03fc88
 * Callers  : 2 -> impset_update_slab_subtile_columns_03c096, impset_process_slabmap_tile_03fcd0
 * Callees  : 1 -> impset_process_slabmap_tile_03f74f
 ******************************************************************************/
undefined4 imptool_fn_03fc88(void)

{
  int val;
  int extraout_ECX;
  
  val = 0;
  while( true ) {
    if (7 < val) {
      return 0;
    }
    val = impset_process_slabmap_tile_03f74f();
    if (val != 0) break;
    val = extraout_ECX + 2;
  }
  return 1;
}

/******************************************************************************
 * Function : imptool_fn_03fed7 (Original VA: 0x3fed7, Ghidra: FUN_0003fed7)
 * Prototype: undefined4 imptool_fn_03fed7(void);
 * Address  : 0x3fed7 (Size: 343 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Module imptool.cpp procedure @ 0x03fed7
 * Callers  : 2 -> impset_fn_03cd1f, impset_update_creature_control_03de04
 * Callees  : 6 -> heapmgr_process_map_subtile_03ad98, imptool_process_slabmap_tile_03f7ad, impset_update_creature_and_thing_03fad0, creature_fn_0827fc, move_process_map_subtile_0b28e8, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 imptool_fn_03fed7(void)

{
  byte flag;
  short short_val;
  undefined2 uval;
  int arg_eax;
  int val;
  uint uval_2;
  undefined4 *arg_ecx;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint arg_edx;
  uint uval_3;
  int *arg_ebx;
  int val_2;
  undefined8 uval_4;
  int local_20;
  int local_14;
  
  flag = *(byte *)(arg_eax + 0xe);
  uval_3 = (arg_edx & 0xffff) % 0x100;
  bflib_system_io_fn_0e69fc();
  uval_4 = bflib_system_io_fn_0e69fc();
  if ((int)uval_4 < (int)((ulonglong)uval_4 >> 0x20)) {
    if (uval_3 == flag || (int)(uval_3 - flag) < 0) {
      local_14 = 1;
    }
    else {
      local_14 = 3;
    }
  }
  else if (extraout_ECX < 1) {
    local_14 = 2;
  }
  else {
    local_14 = 0;
  }
  local_20 = 0;
  do {
    if (3 < local_20) {
      return 0;
    }
    val_2 = uval_3 + *(char *)((int)&g_data_0018b67b + local_14 * 2 + 3) * 2;
    val = imptool_process_slabmap_tile_03f7ad();
    if (val != 0) {
      val = heapmgr_process_map_subtile_03ad98();
      if (val == 0) {
        val = impset_update_creature_and_thing_03fad0();
        if (val == 0) {
          short_val = (short)val_2 * 0x100 + 0x80;
          uval = move_process_map_subtile_0b28e8(short_val,0);
          uval_2 = creature_fn_0827fc(short_val,uval);
          if ((uval_2 & 0xff) != 0xffffffff) {
            *arg_ebx = val_2;
            *arg_ecx = extraout_ECX_00;
            return 1;
          }
        }
      }
    }
    local_14 = (local_14 + 1) % 4;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : imptool_update_player_dungeon_04002e (Original VA: 0x4002e, Ghidra: FUN_0004002e)
 * Prototype: uint imptool_update_player_dungeon_04002e(void);
 * Address  : 0x4002e (Size: 172 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> build_fn_014a9f
 * Callees  : 0 -> 
 ******************************************************************************/
uint imptool_update_player_dungeon_04002e(void)

{
  int arg_eax;
  int dungeon_off;
  uint uval;
  undefined2 *loop_i;
  uint uval_2;
  undefined1 arg_dl;
  int arg_ebx;
  undefined2 *dungeon_off_2;
  
  dungeon_off = arg_eax * 0x1508;
  uval = 0;
  dungeon_off_2 = &g_dungeons + arg_eax * 0xa84;
  for (loop_i = dungeon_off_2;
      ((int)uval < (int)(uint)*(ushort *)(&g_bss_002e1080 + dungeon_off) &&
      (*(char *)((int)loop_i + 0xb0b) != '\0')); loop_i = (undefined2 *)((int)loop_i + 3)) {
    uval = uval + 1;
  }
  uval_2 = (uint)*(ushort *)(&g_bss_002e1080 + dungeon_off);
  if (uval == uval_2) {
    if (299 < uval_2) {
      return uval ^ uval_2;
    }
    *(short *)(&g_bss_002e1080 + dungeon_off) = *(short *)(&g_bss_002e1080 + dungeon_off) + 1;
  }
  *(undefined1 *)((int)dungeon_off_2 + uval * 3 + 0xb0b) = arg_dl;
  *(short *)((int)dungeon_off_2 + uval * 3 + 0xb0c) =
       *(short *)(&g_subtile_to_slab_lut + arg_ebx % 0x100) * 3 + 1 +
       (*(short *)(&g_subtile_to_slab_lut +
                  ((int)((arg_ebx + (arg_ebx >> 0x1f) * -0x100) -
                        (uint)((arg_ebx >> 0x1f) << 7 < 0)) >> 8)) * 3 + 1) * 0x100;
  *(int *)(&g_bss_002e1418 + dungeon_off) = *(int *)(&g_bss_002e1418 + dungeon_off) + 1;
  return 1;
}

/******************************************************************************
 * Function : imptool_stack_pos_0400da (Original VA: 0x400da, Ghidra: FUN_000400da)
 * Prototype: undefined4 imptool_stack_pos_0400da(void);
 * Address  : 0x400da (Size: 134 bytes)
 * Module   : imptool.cpp [direct_file_string_xref]
 * OrigLine : imptool.cpp lines 496
 * Purpose  : String 'INVALID STACK POS'
 * Callers  : 4 -> build_attempt_tag_area_outside_01495c, cdtest_update_player_view_state_014e9f, instance_update_creature_control_04a0d6, slab_process_slabmap_tile_0da7bc
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 imptool_stack_pos_0400da(void)

{
  int arg_eax;
  int dungeon_off;
  int arg_edx;
  int loop_i;
  int val;
  
  dungeon_off = arg_eax * 0x1508;
  if ((-1 < arg_edx) && (arg_edx < (int)(uint)*(ushort *)(&g_bss_002e1080 + dungeon_off))) {
    *(undefined1 *)((int)&g_dungeons + arg_edx * 3 + 0xb0b + dungeon_off) = 0;
    *(undefined2 *)((int)&g_dungeons + arg_edx * 3 + 0xb0c + dungeon_off) = 0;
    val = *(ushort *)(&g_bss_002e1080 + dungeon_off) - 1;
    *(int *)(&g_bss_002e1418 + dungeon_off) = *(int *)(&g_bss_002e1418 + dungeon_off) + -1;
    if (arg_edx == val) {
      for (loop_i = (int)&g_dungeons + val * 3 + dungeon_off;
          (-1 < val && (*(char *)(loop_i + 0xb0b) == '\0')); loop_i = loop_i + -3) {
        val = val + -1;
      }
      *(short *)(&g_bss_002e1080 + dungeon_off) = (short)val + 1;
    }
    return 1;
  }
  LbErrorLog(); /* LbErrorLog("imptool.cpp", line 496, "INVALID STACK POS") */
  return 0;
}

/******************************************************************************
 * Function : imptool_update_player_dungeon_040160 (Original VA: 0x40160, Ghidra: FUN_00040160)
 * Prototype: int imptool_update_player_dungeon_040160(void);
 * Address  : 0x40160 (Size: 74 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 4 -> impset_process_map_subtile_03b0a0, impset_update_creature_control_03d633, impset_update_creature_control_03d77d, impset_stack_type_03e493
 * Callees  : 0 -> 
 ******************************************************************************/
int imptool_update_player_dungeon_040160(void)

{
  int arg_eax;
  char *dungeon_off;
  uint arg_edx;
  int val;
  
  val = 0;
  dungeon_off = &g_bss_002e1094 + arg_eax * 0x1508;
  while( true ) {
    if ((int)(uint)*(ushort *)(&g_bss_002e1080 + arg_eax * 0x1508) <= val) {
      return -1;
    }
    if ((*(ushort *)(dungeon_off + 1) == arg_edx) && (*dungeon_off != '\x03')) break;
    dungeon_off = dungeon_off + 3;
    val = val + 1;
  }
  return val;
}

/******************************************************************************
 * Function : imptool_update_player_dungeon_0401aa (Original VA: 0x401aa, Ghidra: FUN_000401aa)
 * Prototype: int imptool_update_player_dungeon_0401aa(void);
 * Address  : 0x401aa (Size: 66 bytes)
 * Module   : imptool.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 12 -> build_attempt_tag_area_outside_014614, build_attempt_tag_area_outside_01495c, cdtest_update_player_view_state_014e9f, compevnt_process_slabmap_tile_0198cd, comptask_process_map_subtile_01bc3e, comptask_process_slabmap_tile_01d8a1, comptool_fn_01dbbc, comptool_update_slab_subtile_columns_01e5de ...
 * Callees  : 0 -> 
 ******************************************************************************/
int imptool_update_player_dungeon_0401aa(void)

{
  int arg_eax;
  undefined *dungeon_off;
  uint arg_edx;
  int val;
  
  val = 0;
  dungeon_off = &g_bss_002e1094 + arg_eax * 0x1508;
  while( true ) {
    if ((int)(uint)*(ushort *)(&g_bss_002e1080 + arg_eax * 0x1508) <= val) {
      return -1;
    }
    if (*(ushort *)(dungeon_off + 1) == arg_edx) break;
    dungeon_off = dungeon_off + 3;
    val = val + 1;
  }
  return val;
}

