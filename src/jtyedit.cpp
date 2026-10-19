/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: jtyedit.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 8
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : jtyedit_roll_action_random_04c16c (Original VA: 0x4c16c, Ghidra: FUN_0004c16c)
 * Prototype: uint jtyedit_roll_action_random_04c16c(void);
 * Address  : 0x4c16c (Size: 119 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint jtyedit_roll_action_random_04c16c(void)

{
  byte flag;
  short short_val;
  uint arg_eax;
  undefined1 *arg_edx;
  
  short_val = *(short *)(&g_bss_003485c8 + (short)arg_eax * 2);
  flag = (&g_bss_003489c8)[(short)arg_eax];
  if (-1 < short_val) {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    *arg_edx = 1;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed << 0x13;
    return (uint)*(ushort *)
                  (&g_bss_00348bc8 +
                  (int)(((ulonglong)g_action_random_seed % 0x1ff) % (ulonglong)flag) * 2 + short_val * 0x10);
  }
  return arg_eax;
}

/******************************************************************************
 * Function : jtyedit_we_should_only_dealing_04c1e3 (Original VA: 0x4c1e3, Ghidra: FUN_0004c1e3)
 * Prototype: void jtyedit_we_should_only_dealing_04c1e3(void);
 * Address  : 0x4c1e3 (Size: 247 bytes)
 * Module   : jtyedit.cpp [direct_file_string_xref]
 * OrigLine : jtyedit.cpp lines 130
 * Purpose  : String 'We should only be dealing with columns now'
 * Callers  : 2 -> room_fn_0cfdec, slab_update_slab_subtile_columns_0d8974
 * Callees  : 2 -> column_allocate_column_015479, LbErrorLog
 ******************************************************************************/
void jtyedit_we_should_only_dealing_04c1e3(void)

{
  uint *word_ptr;
  bool flag;
  short arg_ax;
  int val;
  byte arg_dl;
  ushort slab_coord;
  byte arg_bl;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  val = (int)arg_ax;
  flag = false;
  if (-1 < val) {
    LbErrorLog(); /* LbErrorLog("jtyedit.cpp", line 130, "We should only be dealing with columns now") */
    return;
  }
  uStack_24 = (&g_bss_0019e97b)[val * -6];
  uStack_20 = (&g_bss_0019e97f)[val * -6];
  uStack_1c = (&g_bss_0019e983)[val * -6];
  uStack_18 = (&g_bss_0019e987)[val * -6];
  val = 0;
  do {
    if (*(short *)((int)&uStack_24 + val) != 0) {
      if ((&g_data_00190103)[*(short *)((int)&uStack_24 + val)] != 0) {
        local_14 = (&g_subtile_to_slab_lut)[arg_bl] * 0x55;
        slab_coord = CONCAT11((&g_slabmap)[((&g_subtile_to_slab_lut)[arg_dl] + local_14) * 6],arg_dl) & 0x7ff;
        arg_dl = (byte)slab_coord;
        flag = true;
        *(undefined2 *)((int)&uStack_24 + val) =
             *(undefined2 *)
              (&g_data_001900a3 +
              (uint)(slab_coord >> 8) * 2 +
              (uint)(byte)(&g_data_00190103)[*(short *)((int)&uStack_24 + val)] * 0xc);
      }
    }
    val = val + 2;
  } while (val != 0x10);
  if (!flag) {
    val = ((uint)arg_bl * 0x100 + (uint)arg_dl) * 5;
    *(undefined1 *)((int)&g_map_subtiles + val + 1) = 0;
    *(byte *)((int)&g_bss_00279205 + val) = *(byte *)((int)&g_bss_00279205 + val) & 0xf8;
    word_ptr = (uint *)((int)&g_map_subtiles + val + 1);
    *word_ptr = *word_ptr | -(int)arg_ax & 0x7ffU;
    return;
  }
  column_allocate_column_015479();
  return;
}

/******************************************************************************
 * Function : jtyedit_fn_04c2dc (Original VA: 0x4c2dc, Ghidra: FUN_0004c2dc)
 * Prototype: void jtyedit_fn_04c2dc(void);
 * Address  : 0x4c2dc (Size: 15 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Purpose  : Module jtyedit.cpp procedure @ 0x04c2dc
 * Callers  : 3 -> jtyedit_fn_04c3a2, jtyedit_fn_04c4f2, lair_fn_04c6ec
 * Callees  : 0 -> 
 ******************************************************************************/
void jtyedit_fn_04c2dc(void)

{
  int arg_eax;
  
  if (g_bss_003d9578 == 0) {
    g_bss_003d9578 = arg_eax;
  }
  return;
}

/******************************************************************************
 * Function : jtyedit_fn_04c2eb (Original VA: 0x4c2eb, Ghidra: FUN_0004c2eb)
 * Prototype: undefined8 jtyedit_fn_04c2eb(void);
 * Address  : 0x4c2eb (Size: 27 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Purpose  : Module jtyedit.cpp procedure @ 0x04c2eb
 * Callers  : 8 -> inits_roll_action_random_044f33, spell_update_creature_control_07231c, draw_frames_different_between_views_08ae00, draw_frames_different_between_views_08aee4, draw_roll_action_random_08ccec, get_thing_anim_sprite_id_checked, update_thing_anim_sprite_frame, update_fn_0ddad0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 jtyedit_fn_04c2eb(void)

{
  uint arg_eax;
  int val;
  undefined4 arg_edx;
  
  val = (uint)*(ushort *)((int)&PTR_DAT_00179450 + (arg_eax & 0xffff) * 2) * 0x10;
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)val >> 8),*(undefined1 *)(g_bss_002f10da + 9 + val)
                                 ));
}

/******************************************************************************
 * Function : jtyedit_fn_04c353 (Original VA: 0x4c353, Ghidra: FUN_0004c353)
 * Prototype: void jtyedit_fn_04c353(int param_1);
 * Address  : 0x4c353 (Size: 79 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Purpose  : Module jtyedit.cpp procedure @ 0x04c353
 * Callers  : 1 -> jtyedit_fn_04c4f2
 * Callees  : 2 -> watcom_crt_fn_128b60, watcom_crt_fn_1384c0
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jtyedit_fn_04c353(int param_1)

{
  int arg_ecx;
  
  if (0 < arg_ecx - g_bss_00348eec) {
    if (g_bss_003d9581 != '\0') {
      watcom_crt_fn_128b60();
      return;
    }
    watcom_crt_fn_1384c0(**(undefined4 **)(&g_bss_003363a8 + param_1 * 4));
  }
  return;
}

/******************************************************************************
 * Function : jtyedit_fn_04c3a2 (Original VA: 0x4c3a2, Ghidra: FUN_0004c3a2)
 * Prototype: void jtyedit_fn_04c3a2(int param_1);
 * Address  : 0x4c3a2 (Size: 336 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Purpose  : Module jtyedit.cpp procedure @ 0x04c3a2
 * Callers  : 1 -> lair_update_creature_control_04c7eb
 * Callees  : 3 -> jtyedit_fn_04c2dc, watcom_crt_fn_1292c8, watcom_crt_fn_13a3f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jtyedit_fn_04c3a2(int param_1)

{
  int arg_eax;
  undefined4 arg_ecx;
  int arg_edx;
  int arg_ebx;
  ushort uval;
  undefined2 local_10;
  
  uval = (ushort)*(byte *)(arg_ebx + 4);
  local_10 = ((ushort)*(byte *)(arg_ebx + 6) - (ushort)*(byte *)(arg_ebx + 10)) - uval;
  if (g_bss_003d9581 == '\0') {
    g_bss_00348f00 = (int)((uint)(ushort)*(byte *)(arg_ebx + 5) * param_1) >> 5;
    g_bss_00348efc = (int)((uint)uval * param_1) >> 5;
    g_bss_00348ef8 = ((short)(ushort)*(byte *)(arg_ebx + 0xb) * param_1 >> 5) + arg_edx;
    g_bss_00348ef4 = (param_1 * local_10 >> 5) + arg_eax;
    watcom_crt_fn_13a3f8(g_bss_00348efc,g_bss_00348f00,g_bss_00348ef8);
  }
  else {
    g_bss_00348f00 = (int)((uint)(ushort)*(byte *)(arg_ebx + 5) * param_1) >> 5;
    g_bss_00348efc = (int)((uint)uval * param_1) >> 5;
    g_bss_00348ef8 = ((short)(ushort)*(byte *)(arg_ebx + 0xb) * param_1 >> 5) + arg_edx;
    g_bss_00348ef4 = (param_1 * local_10 >> 5) + arg_eax;
    watcom_crt_fn_1292c8(g_bss_00348efc,g_bss_00348f00,g_bss_00348ef8);
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
 * Function : jtyedit_fn_04c4f2 (Original VA: 0x4c4f2, Ghidra: FUN_0004c4f2)
 * Prototype: void jtyedit_fn_04c4f2(int param_1);
 * Address  : 0x4c4f2 (Size: 294 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Purpose  : Module jtyedit.cpp procedure @ 0x04c4f2
 * Callers  : 1 -> lair_update_creature_control_04c7eb
 * Callees  : 4 -> jtyedit_fn_04c2dc, jtyedit_fn_04c353, watcom_crt_fn_1292c8, watcom_crt_fn_13a3f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jtyedit_fn_04c4f2(int param_1)

{
  int arg_eax;
  undefined4 arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  g_bss_00348ef4 = arg_eax;
  g_bss_00348ef8 = arg_edx;
  if (g_bss_003d9581 == '\0') {
    g_bss_00348f00 = (int)(param_1 * (uint)*(byte *)(arg_ebx + 7)) >> 5;
    g_bss_00348efc = (int)(param_1 * (uint)(ushort)*(byte *)(arg_ebx + 6)) >> 5;
    watcom_crt_fn_13a3f8(g_bss_00348efc,g_bss_00348f00);
  }
  else {
    g_bss_00348f00 = (int)(param_1 * (uint)*(byte *)(arg_ebx + 7)) >> 5;
    g_bss_00348efc = (int)(param_1 * (uint)(ushort)*(byte *)(arg_ebx + 6)) >> 5;
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
 * Function : jtyedit_fn_04c618 (Original VA: 0x4c618, Ghidra: FUN_0004c618)
 * Prototype: void jtyedit_fn_04c618(int param_1);
 * Address  : 0x4c618 (Size: 212 bytes)
 * Module   : jtyedit.cpp [address_order_boundary_interpolation]
 * Purpose  : Module jtyedit.cpp procedure @ 0x04c618
 * Callers  : 1 -> lair_update_creature_control_04c7eb
 * Callees  : 1 -> watcom_crt_fn_1292c8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jtyedit_fn_04c618(int param_1)

{
  int arg_eax;
  undefined4 arg_ecx;
  int arg_edx;
  int arg_ebx;
  
  if (g_bss_003d9581 == '\0') {
    g_bss_00348f00 = (int)((uint)(ushort)*(byte *)(arg_ebx + 5) * param_1) >> 5;
    g_bss_00348efc = (int)((uint)*(byte *)(arg_ebx + 4) * param_1) >> 5;
    g_bss_00348ef8 = ((short)(ushort)*(byte *)(arg_ebx + 0xb) * param_1 >> 5) + arg_edx;
    g_bss_00348ef4 = (param_1 * (short)(ushort)*(byte *)(arg_ebx + 10) >> 5) + arg_eax;
    watcom_crt_fn_13a3f8(g_bss_00348efc,g_bss_00348f00,g_bss_00348ef8);
  }
  else {
    g_bss_00348f00 = (int)((uint)(ushort)*(byte *)(arg_ebx + 5) * param_1) >> 5;
    g_bss_00348efc = (int)((uint)*(byte *)(arg_ebx + 4) * param_1) >> 5;
    g_bss_00348ef8 = ((short)(ushort)*(byte *)(arg_ebx + 0xb) * param_1 >> 5) + arg_edx;
    g_bss_00348ef4 = (param_1 * (short)(ushort)*(byte *)(arg_ebx + 10) >> 5) + arg_eax;
    watcom_crt_fn_1292c8(g_bss_00348efc,g_bss_00348f00,g_bss_00348ef8);
  }
  if ((((g_bss_003d9580 != '\0') && (g_bss_00348ef4 <= g_engine3_bss_00387db0)) &&
      (g_engine3_bss_00387db0 <= g_bss_00348ef4 + g_bss_00348efc)) &&
     ((g_bss_00348ef8 <= g_engine3_bss_00387db4 && (g_engine3_bss_00387db4 <= g_bss_00348ef8 + g_bss_00348f00)))) {
    jtyedit_fn_04c2dc();
  }
  jtyedit_fn_04c353(arg_ecx);
  return;
}

