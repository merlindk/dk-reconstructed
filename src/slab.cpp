/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: slab.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 31
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : slab_process_map_subtile_0d6760 (Original VA: 0xd6760, Ghidra: FUN_000d6760)
 * Prototype: int slab_process_map_subtile_0d6760(void);
 * Address  : 0xd6760 (Size: 1216 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d6c10) */

int slab_process_map_subtile_0d6760(void)

{
  undefined2 uval;
  bool flag;
  int arg_eax;
  int thing_ptr;
  int arg_ecx;
  byte *byte_ptr;
  undefined2 arg_dx;
  int val;
  uint thing_ptr_2;
  uint thing_ptr_3;
  int arg_ebx;
  uint uval_2;
  uint uval_3;
  int val_2;
  int local_4c;
  undefined1 local_40;
  uint local_20;
  int local_1c;
  
  local_20 = 0;
  local_4c = 0;
  local_1c = arg_eax;
  do {
    val_2 = (*(int *)(&g_data_001926d6 + local_4c) >> 0x18) + arg_ecx + 1;
    uval_2 = (*(int *)(&g_data_001926d5 + local_4c) >> 0x18) + arg_ebx + 1;
    thing_ptr = (val_2 * 0x100 + uval_2) * 5;
    if ((*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3ff800) == 0) {
      thing_ptr_2 = local_20 & 0xff;
      if (((thing_ptr_2 != 4) &&
          (thing_ptr_2 = *(uint *)((int)&g_map_subtiles +
                            (((*(int *)(&g_data_001926d6 + thing_ptr_2 * 2) >> 0x18) + val_2) * 0x100 +
                            (*(int *)(&g_data_001926d5 + thing_ptr_2 * 2) >> 0x18) + uval_2) * 5 + 1),
          (thing_ptr_2 & 0x3ff800) != 0)) && (local_1c < g_bss_001b89b8 >> 0x10)) {
        for (thing_ptr = (&g_thing_ptrs)[(thing_ptr_2 & 0x3fffff) >> 0xb]; thing_ptr != g_thing_ptrs;
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
          if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
            val = local_1c * 0xd;
            (&g_bss_001b93f6)[val] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
            (&g_bss_001b93f7)[val] = *(undefined1 *)(thing_ptr + 0x1a);
            local_40 = (undefined1)((ushort)*(undefined2 *)(thing_ptr + 0x13) >> 8); /* thing->anim_sprite */
            (&g_bss_001b93f8)[val] = local_40;
            (&g_bss_001b93ef)[val] = (undefined1)local_20;
            (&g_bss_001b93ec)[val] = 0;
            *(undefined2 *)(&g_bss_001b93ed + val) = arg_dx;
            *(short *)(&g_bss_001b93f0 + val) = *(short *)(thing_ptr + 0xd) + (short)uval_2 * -0x100; /* thing->mappos.val_x */
            *(short *)(&g_bss_001b93f2 + val) = *(short *)(thing_ptr + 0xf) + (short)val_2 * -0x100; /* thing->mappos.val_y */
            *(undefined2 *)(&g_bss_001b93f4 + val) = *(undefined2 *)(thing_ptr + 0x11);
            flag = true;
            goto LAB_000d6b9a;
          }
        }
      }
    }
    else if (local_1c < g_bss_001b89b8 >> 0x10) {
      for (thing_ptr = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3fffff) >> 0xb];
          thing_ptr != g_thing_ptrs; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
        if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
          val = local_1c * 0xd;
          (&g_bss_001b93f6)[val] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
          (&g_bss_001b93f7)[val] = *(undefined1 *)(thing_ptr + 0x1a);
          local_40 = (undefined1)((ushort)*(undefined2 *)(thing_ptr + 0x13) >> 8); /* thing->anim_sprite */
          (&g_bss_001b93f8)[val] = local_40;
          (&g_bss_001b93ef)[val] = (undefined1)local_20;
          (&g_bss_001b93ec)[val] = 0;
          *(undefined2 *)(&g_bss_001b93ed + val) = arg_dx;
          *(short *)(&g_bss_001b93f0 + val) = *(short *)(thing_ptr + 0xd) + (short)uval_2 * -0x100; /* thing->mappos.val_x */
          *(short *)(&g_bss_001b93f2 + val) = *(short *)(thing_ptr + 0xf) + (short)val_2 * -0x100; /* thing->mappos.val_y */
          *(undefined2 *)(&g_bss_001b93f4 + val) = *(undefined2 *)(thing_ptr + 0x11);
          flag = true;
          goto LAB_000d6b9a;
        }
      }
    }
    flag = false;
LAB_000d6b9a:
    if (flag) {
      local_1c = local_1c + 1;
    }
    byte_ptr = &g_bss_001bd61b;
    do {
      if (g_bss_001b89b8 >> 0x10 <= local_1c) goto LAB_000d6aed;
      if ((((*byte_ptr & 1) != 0) && (byte_ptr[0x29] == uval_2)) &&
         (thing_ptr_2 = g_bss_001aea00, CONCAT31((int3)(uval_2 >> 8),byte_ptr[0x2b]) == val_2)) {
        for (; thing_ptr_2 < g_bss_001b09f8; thing_ptr_2 = thing_ptr_2 + 0x6b) {
          if ((*(short *)(thing_ptr_2 + 0x62) == *(short *)(byte_ptr + 0xe)) &&
             (*(char *)(thing_ptr_2 + 0x1f) != '\x0e')) goto LAB_000d69b5; /* thing->class_id */
        }
        thing_ptr_2 = 0;
LAB_000d69b5:
        if (thing_ptr_2 == 0) {
          thing_ptr = local_1c * 0xd;
          (&g_bss_001b93ec)[thing_ptr] = 1;
          *(undefined2 *)(&g_bss_001b93ed + thing_ptr) = arg_dx;
          (&g_bss_001b93ef)[thing_ptr] = (undefined1)local_20;
          *(short *)(&g_bss_001b93f0 + thing_ptr) =
               (short)((uint)*(ushort *)(byte_ptr + 0x28) + uval_2 * -0x100);
          *(short *)(&g_bss_001b93f2 + thing_ptr) =
               (short)((uint)*(ushort *)(byte_ptr + 0x2a) + val_2 * -0x100);
          uval = *(undefined2 *)(byte_ptr + 0x2c);
          (&g_bss_001b93f6)[thing_ptr] = 0;
          *(undefined2 *)(&g_bss_001b93f4 + thing_ptr) = uval;
          (&g_bss_001b93f7)[thing_ptr] = byte_ptr[2];
          (&g_bss_001b93f8)[thing_ptr] = (char)((ushort)*(undefined2 *)(byte_ptr + 0x16) >> 8);
          flag = true;
          goto LAB_000d6aef;
        }
      }
      byte_ptr = byte_ptr + 0x2e;
    } while (byte_ptr < &g_bss_001c1dcd);
    thing_ptr_2 = local_20 & 0xff;
    if (thing_ptr_2 != 4) {
      byte_ptr = &g_bss_001bd61b;
      uval_3 = uval_2 + (*(int *)(&g_data_001926d5 + thing_ptr_2 * 2) >> 0x18);
      do {
        if (g_bss_001b89b8 >> 0x10 <= local_1c) break;
        if ((((*byte_ptr & 1) != 0) && (byte_ptr[0x29] == uval_3)) &&
           (thing_ptr_3 = g_bss_001aea00,
           CONCAT31((int3)(uval_3 >> 8),byte_ptr[0x2b]) ==
           val_2 + (*(int *)(&g_data_001926d6 + thing_ptr_2 * 2) >> 0x18))) {
          for (; thing_ptr_3 < g_bss_001b09f8; thing_ptr_3 = thing_ptr_3 + 0x6b) {
            if ((*(short *)(thing_ptr_3 + 0x62) == *(short *)(byte_ptr + 0xe)) &&
               (*(char *)(thing_ptr_3 + 0x1f) != '\x0e')) goto LAB_000d6a8f; /* thing->class_id */
          }
          thing_ptr_3 = 0;
LAB_000d6a8f:
          if (thing_ptr_3 == 0) {
            thing_ptr = local_1c * 0xd;
            (&g_bss_001b93ec)[thing_ptr] = 1;
            *(undefined2 *)(&g_bss_001b93ed + thing_ptr) = arg_dx;
            (&g_bss_001b93ef)[thing_ptr] = (undefined1)local_20;
            *(short *)(&g_bss_001b93f0 + thing_ptr) =
                 (short)((uint)*(ushort *)(byte_ptr + 0x28) + uval_2 * -0x100);
            *(short *)(&g_bss_001b93f2 + thing_ptr) =
                 (short)((uint)*(ushort *)(byte_ptr + 0x2a) + val_2 * -0x100);
            uval = *(undefined2 *)(byte_ptr + 0x2c);
            (&g_bss_001b93f6)[thing_ptr] = 0;
            *(undefined2 *)(&g_bss_001b93f4 + thing_ptr) = uval;
            (&g_bss_001b93f7)[thing_ptr] = byte_ptr[2];
            (&g_bss_001b93f8)[thing_ptr] = (char)((ushort)*(undefined2 *)(byte_ptr + 0x16) >> 8);
            flag = true;
            goto LAB_000d6aef;
          }
        }
        byte_ptr = byte_ptr + 0x2e;
      } while (byte_ptr < &g_bss_001c1dcd);
    }
LAB_000d6aed:
    flag = false;
LAB_000d6aef:
    if (flag) {
      local_1c = local_1c + 1;
    }
    local_4c = local_4c + 2;
    local_20 = local_20 + 1;
    if (8 < local_20) {
      return local_1c;
    }
  } while( true );
}

/******************************************************************************
 * Function : slab_process_map_subtile_0d6c20 (Original VA: 0xd6c20, Ghidra: FUN_000d6c20)
 * Prototype: uint slab_process_map_subtile_0d6c20(int param_1);
 * Address  : 0xd6c20 (Size: 550 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint slab_process_map_subtile_0d6c20(int param_1)

{
  undefined2 uval;
  uint uval_2;
  undefined2 arg_ax;
  uint thing_ptr;
  int arg_ecx;
  byte arg_dl;
  int arg_ebx;
  undefined1 local_14;
  
  thing_ptr = (arg_ebx + arg_ecx * 0x100) * 5;
  if ((*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3ff800) == 0) {
    thing_ptr = (uint)arg_dl;
    if (thing_ptr != 4) {
      thing_ptr = ((*(int *)(&g_data_001926d5 + thing_ptr * 2) >> 0x18) + arg_ebx +
              ((*(int *)(&g_data_001926d6 + thing_ptr * 2) >> 0x18) + arg_ecx) * 0x100) * 5;
      uval_2 = *(uint *)((int)&g_map_subtiles + thing_ptr + 1);
      if (((uval_2 & 0x3ff800) != 0) && (param_1 < g_bss_001b89b8 >> 0x10)) {
        thing_ptr = (&g_thing_ptrs)[(uval_2 & 0x3fffff) >> 0xb];
        if (thing_ptr == g_thing_ptrs) {
          return thing_ptr & 0xffffff00;
        }
        do {
          if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
            param_1 = param_1 * 0xd;
            (&g_bss_001b93f6)[param_1] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
            (&g_bss_001b93f7)[param_1] = *(undefined1 *)(thing_ptr + 0x1a);
            uval = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
            (&g_bss_001b93ec)[param_1] = 0;
            *(undefined2 *)(&g_bss_001b93ed + param_1) = arg_ax;
            local_14 = (undefined1)((ushort)uval >> 8);
            (&g_bss_001b93f8)[param_1] = local_14;
            (&g_bss_001b93ef)[param_1] = arg_dl;
            *(short *)(&g_bss_001b93f0 + param_1) = *(short *)(thing_ptr + 0xd) - (short)(arg_ebx << 8); /* thing->mappos.val_x */
            *(short *)(&g_bss_001b93f2 + param_1) = *(short *)(thing_ptr + 0xf) - (short)(arg_ecx << 8); /* thing->mappos.val_y */
            uval = *(undefined2 *)(thing_ptr + 0x11);
            *(undefined2 *)(&g_bss_001b93f4 + param_1) = uval;
            return CONCAT31((int3)(CONCAT22((short)(thing_ptr >> 0x10),uval) >> 8),1);
          }
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)];
        } while (thing_ptr != g_thing_ptrs);
      }
    }
  }
  else if (param_1 < g_bss_001b89b8 >> 0x10) {
    for (thing_ptr = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + thing_ptr + 1) & 0x3fffff) >> 0xb];
        thing_ptr != g_thing_ptrs; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
      if ((*(char *)(thing_ptr + 0x1f) == '\x01') || (*(char *)(thing_ptr + 0x1f) == '\a')) { /* thing->class_id */
        param_1 = param_1 * 0xd;
        (&g_bss_001b93f6)[param_1] = *(undefined1 *)(thing_ptr + 0x1f); /* thing->class_id */
        (&g_bss_001b93f7)[param_1] = *(undefined1 *)(thing_ptr + 0x1a);
        uval = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
        (&g_bss_001b93ec)[param_1] = 0;
        local_14 = (undefined1)((ushort)uval >> 8);
        (&g_bss_001b93f8)[param_1] = local_14;
        (&g_bss_001b93ef)[param_1] = arg_dl;
        *(undefined2 *)(&g_bss_001b93ed + param_1) = arg_ax;
        *(short *)(&g_bss_001b93f0 + param_1) = *(short *)(thing_ptr + 0xd) - (short)(arg_ebx << 8); /* thing->mappos.val_x */
        *(short *)(&g_bss_001b93f2 + param_1) = *(short *)(thing_ptr + 0xf) - (short)(arg_ecx << 8); /* thing->mappos.val_y */
        uval = *(undefined2 *)(thing_ptr + 0x11);
        *(undefined2 *)(&g_bss_001b93f4 + param_1) = uval;
        return CONCAT31((int3)(CONCAT22((short)(thing_ptr >> 0x10),uval) >> 8),1);
      }
    }
  }
  return thing_ptr & 0xffffff00;
}

/******************************************************************************
 * Function : slab_process_map_subtile_0d7090 (Original VA: 0xd7090, Ghidra: FUN_000d7090)
 * Prototype: void slab_process_map_subtile_0d7090(void);
 * Address  : 0xd7090 (Size: 469 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void slab_process_map_subtile_0d7090(void)

{
  int val;
  int val_2;
  int val_3;
  short *val_4;
  short *val_5;
  int val_6;
  int val_7;
  int local_54;
  int local_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_24 = 0;
  local_50 = 3;
  g_bss_001b2e08 = 0x518;
  do {
    local_34 = local_24 * 0x12;
    local_2c = 3;
    val_2 = local_50 * 0x500;
    do {
      val_4 = (short *)((int)&g_bss_001b2e0a + local_34);
      val_6 = val_2;
      val_7 = val_2 + 0xf;
      do {
        val_3 = val_6 + local_2c * 5;
        val_5 = val_4;
        do {
          val = val_3 + 1;
          val_4 = val_5 + 1;
          val_3 = val_3 + 5;
          *val_5 = -((ushort)*(undefined4 *)((int)&g_map_subtiles + val) & 0x7ff);
          val_5 = val_4;
        } while (val_3 != local_2c * 5 + val_7);
        val_6 = val_6 + 0x500;
        val_7 = val_7 + 0x500;
      } while (val_6 != val_2 + 0xf00);
      local_34 = local_34 + 0x12;
      local_24 = local_24 + 1;
      local_2c = local_2c + 6;
    } while (local_2c != 0xab);
    local_50 = local_50 + 6;
  } while (local_50 != 0xff);
  local_54 = 3;
  do {
    local_30 = local_24 * 0x12;
    val_2 = local_54 * 0x500;
    local_28 = 0xab;
    do {
      val_4 = (short *)((int)&g_bss_001b2e0a + local_30);
      val_6 = val_2;
      val_7 = val_2 + 0xf;
      do {
        val_3 = val_6 + local_28 * 5;
        val_5 = val_4;
        do {
          val = val_3 + 1;
          val_4 = val_5 + 1;
          val_3 = val_3 + 5;
          *val_5 = -((ushort)*(undefined4 *)((int)&g_map_subtiles + val) & 0x7ff);
          val_5 = val_4;
        } while (val_3 != local_28 * 5 + val_7);
        val_6 = val_6 + 0x500;
        val_7 = val_7 + 0x500;
      } while (val_6 != val_2 + 0xf00);
      local_30 = local_30 + 0x12;
      local_24 = local_24 + 1;
      local_28 = local_28 + 6;
    } while (local_28 != 0xdb);
    local_54 = local_54 + 6;
  } while (local_54 != 99);
  return;
}

/******************************************************************************
 * Function : slab_update_slab_subtile_columns_0d72f8 (Original VA: 0xd72f8, Ghidra: FUN_000d72f8)
 * Prototype: void slab_update_slab_subtile_columns_0d72f8(byte param_1);
 * Address  : 0xd72f8 (Size: 909 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 624
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> slab_attempt_dump_an_animating_0d8b7c
 * Callees  : 6 -> build_fn_014a68, panmap_door_flagged_position_063122, slab_update_slab_subtile_columns_0d8974, slab_illegal_animating_slab_number_0d8cdc, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

void slab_update_slab_subtile_columns_0d72f8(byte param_1)

{
  int thing_ptr;
  uint *word_ptr;
  int arg_eax;
  int slab_coord;
  int thing_ptr_2;
  byte arg_cl;
  char ch;
  char ch_2;
  byte flag;
  int arg_edx;
  byte arg_bl;
  uint *word_ptr_2;
  uint uval;
  uint uval_2;
  int val;
  uint local_3c [6];
  undefined4 local_24;
  char local_20 [4];
  char local_1c [4];
  byte local_18;
  byte local_14 [4];
  byte local_10;
  
  local_18 = *(byte *)(&g_subtile_to_slab_lut + arg_bl);
  local_14[0] = *(byte *)(&g_subtile_to_slab_lut + arg_cl);
  local_20[0] = local_18 * '\x03';
  local_1c[0] = local_14[0] * '\x03';
  local_3c[2] = arg_eax;
  if (0x517 < arg_edx) {
    dk_sprintf(&g_log_sprintf_buf,s_x_Illegal_animating_slab_number__0016c71a + 2);
    LbErrorLog(); /* LbErrorLog("slab.cpp", line 624, g_log_buf) */
  }
  uval_2 = (uint)local_14[0];
  uval = (uint)local_18;
  (&g_bss_002d33c9)[(uval_2 * 0x55 + uval) * 6] =
       (&g_bss_002eb9b4)[(uint)*(ushort *)(&g_data_001921c4 + local_3c[2] * 0x16) * 2];
  slab_update_slab_subtile_columns_0d8974();
  local_10 = param_1 & 7;
  val = 0;
  while( true ) {
    while( true ) {
      ch = (char)val;
      ch_2 = (char)((uint)val >> 8);
      if (2 < ch) break;
      slab_coord = ((&g_subtile_to_slab_lut)[(int)ch + uval * 3] +
              (&g_subtile_to_slab_lut)[(int)ch_2 + uval_2 * 3] * 0x55) * 6;
      (&g_slabmap)[slab_coord] = (&g_slabmap)[slab_coord] & 0xf8;
      val = CONCAT31((int3)((uint)val >> 8),ch + '\x01');
      (&g_slabmap)[slab_coord] = (&g_slabmap)[slab_coord] | param_1 & 7;
    }
    flag = ch_2 + 1;
    if ('\x02' < (char)flag) break;
    val = (uint)flag << 8;
  }
  local_3c[3] = 0;
  local_3c[4] = 0;
  val = 0;
  local_24 = 0;
  word_ptr = local_3c + 1;
  while( true ) {
    do {
      word_ptr_2 = word_ptr;
      slab_coord = ((uint)(byte)word_ptr_2[6] + val + ((uint)(byte)word_ptr_2[7] + word_ptr_2[2]) * 0x100) * 5;
      thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + slab_coord + 1) & 0x3fffff) >> 0xb];
      if ((&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + slab_coord + 1) & 0x3fffff) >> 0xb] !=
          g_thing_ptrs) {
        do {
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
          flag = *(byte *)((int)&g_bss_0019e973 +
                           (*(uint *)((int)&g_map_subtiles + slab_coord + 1) & 0x7ff) * 0x18 + 2) >> 4;
          if (((*(char *)(thing_ptr_2 + 0x1f) != '\x05') || (flag < 5)) && /* thing->class_id */
             (*(char *)(thing_ptr_2 + 0x1a) != '\x02')) {
            *(ushort *)(thing_ptr_2 + 0x11) = (ushort)flag << 8;
          }
          thing_ptr_2 = thing_ptr;
        } while (thing_ptr != g_thing_ptrs);
      }
      word_ptr_2[-1] = (uint)((&g_slabmap)
                          [((&g_subtile_to_slab_lut)[(byte)word_ptr_2[7]] * 0x55 +
                           (&g_subtile_to_slab_lut)[(byte)word_ptr_2[6]]) * 6] & 7);
      word_ptr_2[-2] = (uint)(ushort)word_ptr_2[5];
      word_ptr_2[4] = (uint)(byte)word_ptr_2[9] * 0x55;
      word_ptr_2[-3] = 0xd7525;
      slab_illegal_animating_slab_number_0d8cdc();
      val = val + 1;
      word_ptr_2[3] = word_ptr_2[3] + 1;
      word_ptr = word_ptr_2 + -2;
    } while (val < 3);
    val = *word_ptr_2;
    word_ptr_2[1] = word_ptr_2[1] + 3;
    *word_ptr_2 = val + 1;
    if (2 < val + 1) break;
    val = 0;
    word_ptr_2[3] = word_ptr_2[1];
    word_ptr = word_ptr_2 + -2;
  }
  (&g_slabmap_base)[((uint)(byte)word_ptr_2[7] * 0x55 + (uint)(byte)word_ptr_2[6]) * 6] = (char)word_ptr_2[-1];
  word_ptr_2[-3] = 0xd7621;
  panmap_door_flagged_position_063122();
  if ((word_ptr_2[-1] == 0x33) || (word_ptr_2[-1] == 0x35)) {
    word_ptr_2[-3] = 0xd767c;
    build_fn_014a68();
  }
  return;
}

/******************************************************************************
 * Function : slab_attempt_place_animating_slab_0d7688 (Original VA: 0xd7688, Ghidra: FUN_000d7688)
 * Prototype: void slab_attempt_place_animating_slab_0d7688(char param_1);
 * Address  : 0xd7688 (Size: 1828 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 681
 * Purpose  : String 'Attempt to place animating slab as standard slab'
 * Callers  : 18 -> build_process_map_subtile_014afe, cdtest_process_slabmap_tile_014c9a, build_process_map_subtile_014d45, cdtest_update_player_view_state_014e9f, cdtest_fn_015030, compturn_process_map_subtile_022660, effect_process_thing_entity_024ab9, input_game_action_048c77 ...
 * Callees  : 10 -> build_fn_014a68, effect_allocate_light_effect_024998, panmap_door_flagged_position_063122, structs_update_creature_control_072af4, move_process_map_subtile_0b3788, slab_illegal_special_case_0d7dac, slab_process_slabmap_tile_0d9418, slab_process_slabmap_tile_0d9dc0 ...
 ******************************************************************************/
void slab_attempt_place_animating_slab_0d7688(char param_1)

{
  char *str_ptr;
  byte slab_coord;
  byte slab_coord_2;
  undefined1 uval;
  undefined2 uval_2;
  int arg_eax;
  int val;
  byte arg_cl;
  char ch;
  byte extraout_CL;
  char ch_2;
  byte flag;
  byte arg_dl;
  int val_2;
  byte arg_bl;
  byte loop_i;
  uint thing_ptr;
  uint thing_ptr_2;
  short short_val;
  short short_val_2;
  byte local_2c;
  byte local_28;
  
  slab_coord = *(byte *)(&g_subtile_to_slab_lut + arg_dl);
  slab_coord_2 = *(byte *)(&g_subtile_to_slab_lut + arg_bl);
  if (arg_eax < 0x2a) {
    for (loop_i = 0; thing_ptr_2 = (uint)loop_i, loop_i < 8; loop_i = loop_i + 1) {
      val = (uint)slab_coord + (*(int *)((int)&g_data_001926c4 + thing_ptr_2 * 2 + 1) >> 0x18);
      val_2 = (uint)slab_coord_2 + (*(int *)((int)&g_data_001926c4 + thing_ptr_2 * 2 + 2) >> 0x18);
      if ((((-1 < val) && (val < 0x55)) && (-1 < val_2)) && (val_2 < 0x55)) {
        (&g_data_001921b8)[thing_ptr_2] = (&g_slabmap_base)[(val + val_2 * 0x55) * 6];
      }
    }
    loop_i = slab_process_slabmap_tile_0d9418();
    (&g_slabmap_base)[((uint)slab_coord_2 * 0x55 + (uint)slab_coord) * 6] = loop_i;
    val = 0;
    while( true ) {
      while( true ) {
        ch = (char)val;
        ch_2 = (char)((uint)val >> 8);
        if (2 < ch) break;
        val_2 = ((&g_subtile_to_slab_lut)[(int)ch + (uint)slab_coord * 3] +
                 (&g_subtile_to_slab_lut)[(int)ch_2 + (uint)slab_coord_2 * 3] * 0x55) * 6;
        (&g_slabmap)[val_2] = (&g_slabmap)[val_2] & 0xf8;
        val = CONCAT31((int3)((uint)val >> 8),ch + '\x01');
        (&g_slabmap)[val_2] = (&g_slabmap)[val_2] | arg_cl & 7;
      }
      flag = ch_2 + 1;
      if ('\x02' < (char)flag) break;
      val = (uint)flag << 8;
    }
    slab_illegal_special_case_0d7dac();
    slab_process_map_subtile_0dafb0();
    if (((&g_data_001921cf)[(uint)loop_i * 0x16] == '\x04') ||
       ((&g_data_001921cf)[(uint)loop_i * 0x16] == '\x02')) {
      for (loop_i = 0; loop_i < 8; loop_i = loop_i + 1) {
        val = (int)(char)(slab_coord + *(char *)((int)&g_data_001926c8 + (uint)loop_i * 2));
        if (((-1 < val) && (val < 0x55)) &&
           ((val_2 = (int)(char)(slab_coord_2 + *(char *)((int)&g_data_001926c8 + (uint)loop_i * 2 + 1)),
            -1 < val_2 &&
            ((val_2 < 0x55 &&
             (val = (val + val_2 * 0x55) * 6, (&g_slabmap_base)[val] == '\x02')))))) {
          uval = slab_process_slabmap_tile_0d9dc0();
          (&g_slabmap_base)[val] = uval;
          loop_i = extraout_CL;
        }
      }
    }
    else {
      for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
        val = (int)(char)(slab_coord + *(char *)((int)&g_data_001926c8 + (uint)local_2c * 2));
        if ((((-1 < val) && (val < 0x55)) &&
            (val_2 = (int)(char)(slab_coord_2 + *(char *)((int)&g_data_001926c8 + (uint)local_2c * 2 + 1)),
            -1 < val_2)) &&
           ((val_2 < 0x55 &&
            (val = (val_2 * 0x55 + val) * 6, (char)(&g_slabmap_base)[val] < '*')))) {
          uval = slab_process_slabmap_tile_0d9418();
          (&g_slabmap_base)[val] = uval;
        }
      }
    }
    panmap_door_flagged_position_063122();
    for (local_28 = 0; thing_ptr_2 = (uint)local_28, thing_ptr_2 < 8; local_28 = local_28 + 1) {
      val = (uint)slab_coord + (*(int *)((int)&g_data_001926c4 + thing_ptr_2 * 2 + 1) >> 0x18);
      val_2 = (uint)slab_coord_2 + (*(int *)((int)&g_data_001926c4 + thing_ptr_2 * 2 + 2) >> 0x18);
      if (((((-1 < val) && (val < 0x55)) && ((-1 < val_2 && (val_2 < 0x55)))) &&
          ((thing_ptr = (uint)(byte)(&g_slabmap_base)[(val_2 * 0x55 + val) * 6],
           *(int *)((int)&g_data_001921b4 + thing_ptr_2 + 1) >> 0x18 != thing_ptr ||
           (((thing_ptr != 1 && (thing_ptr != 0)) || (g_game_type == '\x01')))))) &&
         ((&g_data_001921cf)[thing_ptr * 0x16] != '\x05')) {
        slab_illegal_special_case_0d7dac();
      }
    }
    if (param_1 == '\0') {
      build_fn_014a68();
    }
    if (arg_eax == 2) {
      val = 0;
      do {
        thing_ptr_2 = (&g_thing_ptrs)
                 [(*(uint *)((int)&g_map_subtiles +
                            ((*(int *)((int)&g_data_0018b624 + val) >> 0x10) +
                            (uint)slab_coord * 3 + (uint)slab_coord_2 * 0x300 + 0x101) * 5 + 1) & 0x3fffff) >>
                  0xb];
        if (g_thing_ptrs < thing_ptr_2) {
          do {
            str_ptr = (char *)(thing_ptr_2 + 0x1f); /* thing->class_id */
            thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
            if (*str_ptr == '\x01') {
              structs_update_creature_control_072af4();
            }
          } while (g_thing_ptrs < thing_ptr_2);
        }
        val = val + 2;
      } while (val != 0x12);
    }
    else if (arg_eax == 0xc) {
      val = (uint)slab_coord * 3 + (uint)slab_coord_2 * 0x300 + 0x101;
      val_2 = 0;
      short_val = ((ushort)val & 0xff) + 0x80;
      do {
        thing_ptr_2 = (&g_thing_ptrs)
                 [(*(uint *)((int)&g_map_subtiles +
                            ((*(int *)((int)&g_data_0018b624 + val_2) >> 0x10) + val) * 5 + 1) &
                  0x3fffff) >> 0xb];
        if (g_thing_ptrs <
            (&g_thing_ptrs)
            [(*(uint *)((int)&g_map_subtiles +
                       ((*(int *)((int)&g_data_0018b624 + val_2) >> 0x10) + val) * 5 + 1) & 0x3fffff
             ) >> 0xb]) {
          do {
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
            if ((*(char *)(thing_ptr_2 + 0x1f) == '\x01') && /* thing->class_id */
               ((&g_data_0018b91b)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x16] != '\0')) {
              short_val_2 = short_val;
              uval_2 = move_process_map_subtile_0b3788(short_val);
              effect_allocate_light_effect_024998(short_val_2,uval_2);
              structs_update_creature_control_072af4();
            }
            thing_ptr_2 = thing_ptr;
          } while (g_thing_ptrs < thing_ptr);
        }
        val_2 = val_2 + 2;
      } while (val_2 != 0x12);
    }
    else if (arg_eax == 0xd) {
      val = (uint)slab_coord * 3 + (uint)slab_coord_2 * 0x300 + 0x101;
      val_2 = 0;
      short_val = (byte)val + 0x80;
      do {
        thing_ptr_2 = (&g_thing_ptrs)
                 [(*(uint *)((int)&g_map_subtiles +
                            ((*(int *)((int)&g_data_0018b624 + val_2) >> 0x10) + val) * 5 + 1) &
                  0x3fffff) >> 0xb];
        if (g_thing_ptrs <
            (&g_thing_ptrs)
            [(*(uint *)((int)&g_map_subtiles +
                       ((*(int *)((int)&g_data_0018b624 + val_2) >> 0x10) + val) * 5 + 1) & 0x3fffff
             ) >> 0xb]) {
          do {
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
            if ((*(char *)(thing_ptr_2 + 0x1f) == '\x01') && /* thing->class_id */
               ((&g_data_0018b91b)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x16] != '\0')) {
              short_val_2 = short_val;
              uval_2 = move_process_map_subtile_0b3788(short_val);
              effect_allocate_light_effect_024998(short_val_2,uval_2);
              structs_update_creature_control_072af4();
            }
            thing_ptr_2 = thing_ptr;
          } while (g_thing_ptrs < thing_ptr);
        }
        val_2 = val_2 + 2;
      } while (val_2 != 0x12);
    }
  }
  else {
    LbErrorLog(); /* LbErrorLog("slab.cpp", line 681, "Attempt to place animating slab as standard slab") */
  }
  return;
}

/******************************************************************************
 * Function : slab_illegal_special_case_0d7dac (Original VA: 0xd7dac, Ghidra: FUN_000d7dac)
 * Prototype: void slab_illegal_special_case_0d7dac(void);
 * Address  : 0xd7dac (Size: 3014 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 1038
 * Purpose  : String 'Illegal special case!!!'
 * Callers  : 1 -> slab_attempt_place_animating_slab_0d7688
 * Callees  : 6 -> light_attempt_delete_light_0acce4, slab_update_slab_subtile_columns_0d8974, slab_illegal_animating_slab_number_0d8cdc, slab_process_map_subtile_0d916c, slab_process_slabmap_tile_0d9338, LbErrorLog
 ******************************************************************************/
void slab_illegal_special_case_0d7dac(void)

{
  char ch;
  uint3 uval;
  byte flag;
  int arg_eax;
  int val;
  int val_2;
  uint uval_2;
  uint uval_3;
  undefined1 *word_ptr;
  int extraout_ECX;
  uint uval_4;
  byte arg_dl;
  int extraout_EDX;
  byte arg_bl;
  short short_val;
  undefined2 *word_ptr_2;
  char *str_ptr;
  undefined4 *word_ptr_3;
  undefined1 *word_ptr_4;
  uint uval_5;
  uint uval_6;
  undefined2 uval_7;
  ushort uval_8;
  uint uval_9;
  uint auStack_dc [3];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined2 local_bc [10];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 uStack_98;
  undefined1 auStack_96 [6];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 auStack_82 [6];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  int local_6c;
  int local_68;
  uint local_64 [6];
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_38;
  uint local_34;
  byte local_30;
  byte local_2c;
  byte local_28;
  char local_24;
  byte local_20;
  byte local_1c [4];
  byte local_18;
  byte local_14;
  byte local_10;
  
  word_ptr_3 = &local_d0;
  auStack_82._2_4_ = g_bss_003d9530;
  uStack_7c = g_bss_003d9534;
  uStack_78 = g_bss_003d9538;
  uStack_74 = g_bss_003d953c;
  uStack_70 = g_bss_003d9540;
  auStack_96._2_4_ = g_bss_003d9542;
  uStack_90 = g_bss_003d9546;
  uStack_8c = g_bss_003d954a;
  uStack_88 = g_bss_003d954e;
  uStack_84 = g_bss_003d9552;
  local_d0 = g_bss_003d9554;
  uStack_cc = g_bss_003d9558;
  uStack_c8 = g_bss_003d955c;
  uStack_c4 = g_bss_003d9560;
  uStack_c0 = g_bss_003d9564;
  local_a8 = g_bss_003d9566;
  uStack_a4 = g_bss_003d956a;
  uStack_a0 = g_bss_003d956e;
  uStack_9c = g_bss_003d9572;
  uStack_98 = g_bss_003d9576;
  val_2 = 0;
  do {
    val = val_2 + 2;
    *(short *)((int)&local_d0 + val_2) = (short)arg_eax;
    val_2 = val;
  } while (val != 0x12);
  local_6c = arg_eax;
  local_20 = arg_dl;
  local_18 = arg_bl;
  if ((&g_data_001921cf)[arg_eax * 0x16] == '\x03') {
    local_64[0] = 0;
    local_38 = 0;
    local_34 = 0xffffffff;
    local_64[1] = 2;
    do {
      uval_5 = local_64[1];
      uval_6 = (uint)local_18;
      uval_3 = (uint)local_20;
      val_2 = (*(int *)((int)&g_data_001926c4 + local_38 + 1) >> 0x18) + uval_3;
      val = (*(int *)((int)&g_data_001926c4 + local_38 + 2) >> 0x18) + uval_6;
      if ((((-1 < val_2) && (val_2 < 0x55)) && (-1 < val)) &&
         (((val < 0x55 && (flag = (&g_slabmap_base)[(val_2 + val * 0x55) * 6], flag != 0x35)) &&
          (flag != 0x33)))) {
        if ((flag == (&g_slabmap_base)
                      [((*(int *)((int)&g_data_001926c4 + (local_34 & 7) * 2 + 1) >> 0x18) + uval_3 +
                       ((*(int *)((int)&g_data_001926c4 + (local_34 & 7) * 2 + 2) >> 0x18) + uval_6) *
                       0x55) * 6]) &&
           (uval_2 = local_64[0] * 2 + 1 & 7,
           (&g_slabmap_base)
           [((*(int *)((int)&g_data_001926c4 + (local_34 & 7) * 2 + 1) >> 0x18) + uval_3 +
            ((*(int *)((int)&g_data_001926c4 + (local_34 & 7) * 2 + 2) >> 0x18) + uval_6) * 0x55) * 6]
           == (&g_slabmap_base)
              [((*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 1) >> 0x18) + uval_3 +
               (uval_6 + (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 2) >> 0x18)) * 0x55) * 6])) {
          uval_7 = 9;
        }
        else {
          uval_7 = 0;
        }
        if ((&g_data_001921cf)[(uint)flag * 0x16] == '\x04') {
          uval_3 = local_64[0] * 2 - 1;
          do {
            ch = (&g_data_001926c0)[uval_3 & 7];
            uval_3 = uval_3 + 1;
            *(undefined2 *)((int)&local_a8 + (uint)(byte)(ch + 4) * 2) = uval_7;
            *(ushort *)((int)&local_d0 + (uint)(byte)(ch + 4) * 2) = flag + 1;
          } while (uval_3 != uval_5);
        }
      }
      local_38 = local_38 + 4;
      local_34 = local_34 + 2;
      local_64[1] = local_64[1] + 2;
      local_64[0] = local_64[0] + 1;
    } while ((int)local_64[0] < 4);
  }
  uval_5 = (uint)local_20;
  slab_process_map_subtile_0d916c();
  local_4c = extraout_ECX * 0x55 + uval_5;
  val_2 = uval_5 * 3 + -1;
  if (val_2 < 0) {
    val_2 = 0;
  }
  local_48 = extraout_ECX * 3 + -1;
  if (local_48 < 0) {
    local_48 = 0;
  }
  local_44 = uval_5 * 3 + 4;
  if (0xff < local_44) {
    local_44 = 0xff;
  }
  val = extraout_ECX * 3 + 4;
  if (0xff < val) {
    val = 0xff;
  }
  word_ptr = &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e;
  if (&g_bss_001bd5ed < &g_bss_001bd5ed + g_bss_002e6f0e * 0x2e) {
    do {
      uval_8 = *(ushort *)(word_ptr + 0x26);
      if ((((*(int *)(word_ptr + 0x12) == local_4c) && (val_2 <= (int)(uint)(byte)word_ptr[0x29])) &&
          ((int)(uint)(byte)word_ptr[0x29] <= (int)local_44)) &&
         ((local_48 <= (int)(uint)(byte)word_ptr[0x2b] && ((int)(uint)(byte)word_ptr[0x2b] <= val))))
      {
        light_attempt_delete_light_0acce4();
        val = extraout_EDX;
      }
      word_ptr = &g_bss_001bd5ed + (uint)uval_8 * 0x2e;
    } while (&g_bss_001bd5ed < &g_bss_001bd5ed + (uint)uval_8 * 0x2e);
  }
  word_ptr_2 = &g_bss_001b2e0a + (local_6c * 0x1c + 0x1b) * 9;
  val_2 = 0;
  do {
    val = val_2 + 2;
    uval_7 = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + 1;
    *(undefined2 *)((int)local_bc + val_2) = uval_7;
    val_2 = val;
  } while (val != 0x12);
  uval_5 = 2;
  local_64[0] = 0;
  do {
    uval_3 = (local_64[0] & 0xff) * 2 & 7;
    val = (*(int *)((int)&g_data_001926c4 + uval_3 * 2 + 1) >> 0x18) + (uint)local_20;
    val_2 = (*(int *)((int)&g_data_001926c4 + uval_3 * 2 + 2) >> 0x18) + (uint)local_18;
    if (((val < 0) || (0x54 < val)) || ((val_2 < 0 || (0x54 < val_2)))) {
      uval = 0;
    }
    else {
      uval = (uint3)(byte)(&g_data_001921ce)
                           [(uint)(byte)(&g_slabmap_base)[(val + val_2 * 0x55) * 6] * 0x16];
    }
    uval_3 = local_64[0] * 2 - 1;
    do {
      uval_2 = uval_3 & 7;
      uval_6 = (uint)uval;
      if ((int)(uint)uval <=
          *(int *)(auStack_82 + (uint)(byte)((&g_data_001926c0)[uval_2] + 4) * 2) >> 0x10) {
        uval_6 = *(int *)(auStack_82 + (uint)(byte)((&g_data_001926c0)[uval_2] + 4) * 2) >> 0x10;
      }
      uval_3 = uval_3 + 1;
      *(short *)(auStack_82 + (uint)(byte)((&g_data_001926c0)[uval_2] + 4) * 2 + 2) = (short)uval_6;
    } while (uval_3 != uval_5);
    local_64[0] = local_64[0] + 1;
    uval_5 = uval_5 + 2;
  } while ((int)local_64[0] < 4);
  if ((local_6c == 5) || (local_6c == 3)) {
    if (local_6c == 3) {
      short_val = 2;
    }
    else {
      short_val = (short)local_6c + 4;
    }
    local_2c = local_20;
    local_10 = 0;
    uval_5 = (uint)local_20;
    local_28 = local_18;
    if ((uval_5 % 5 == 0) &&
       (local_24 = ((&g_slabmap_base)[((local_18 - 1) * 0x55 + uval_5) * 6] == '\v') +
                   ((&g_slabmap_base)[((local_18 + 1) * 0x55 + uval_5) * 6] == '\v'), local_24 != '\0'
       )) {
      local_10 = 1;
    }
    if (((int)((ulonglong)(longlong)(int)(uint)local_18 % 5) == 0) &&
       (val_2 = (uint)local_18 * 0x55 + (uint)local_20,
       (char)(((&g_slabmap_base)[(val_2 + -1) * 6] == '\v') +
             ((&g_slabmap_base)[(val_2 + 1) * 6] == '\v')) != '\0')) {
      local_10 = local_10 | 2;
    }
    local_64[5] = (uint)local_10;
    if (local_64[5] != 0) {
      if ((local_10 & 1) == 0) {
        if ((local_10 & 2) != 0) {
          local_d0 = CONCAT22(short_val,(undefined2)local_d0);
          uStack_c4 = CONCAT22(short_val,(undefined2)uStack_c4);
          if ((local_18 + local_20 & 1) == 0) {
            uStack_c8 = CONCAT22(short_val,(undefined2)uStack_c8);
          }
          else {
            uStack_cc = CONCAT22(short_val,(undefined2)uStack_cc);
          }
        }
      }
      else {
        uStack_cc = CONCAT22(short_val,(undefined2)uStack_cc);
        uStack_c8 = CONCAT22(short_val,(undefined2)uStack_c8);
        if ((local_18 + local_20 & 1) == 0) {
          uStack_c4 = CONCAT22(short_val,(undefined2)uStack_c4);
        }
        else {
          local_d0 = CONCAT22(short_val,(undefined2)local_d0);
        }
      }
    }
  }
  val_2 = 0;
  local_30 = 0;
  do {
    local_30 = local_30 * '\x02';
    flag = slab_process_slabmap_tile_0d9338();
    local_30 = local_30 | flag;
    val_2 = val_2 + 2;
  } while (val_2 != 8);
  uval_5 = (uint)local_30;
  if (uval_5 == 0) {
    if ((&g_data_001921cf)[local_6c * 0x16] == '\x04') {
      val_2 = 1;
      do {
        local_30 = local_30 * '\x02';
        flag = slab_process_slabmap_tile_0d9338();
        local_30 = local_30 | flag;
        val_2 = val_2 + 2;
      } while (val_2 != 9);
      if (local_30 == 0) {
        val_2 = 0;
        do {
          *(short *)(auStack_96 + val_2 + 2) = *(short *)((int)&local_d0 + val_2) * 0x1c + 0x1b;
          val = val_2 + 2;
          *(undefined2 *)((int)local_bc + val_2) =
               *(undefined2 *)(val + (*(int *)(auStack_96 + val_2) >> 0x10) * 0x12 + 0x1b2e08);
          val_2 = val;
        } while (val != 0x12);
      }
      else {
        str_ptr = &g_data_00192732;
        val_2 = 0;
        do {
          *(short *)(auStack_96 + val_2 + 2) =
               *(short *)((int)&local_d0 + val_2) * 0x1c + (short)*str_ptr +
               *(short *)(auStack_82 + val_2 + 2) * 9;
          val = val_2 + 2;
          str_ptr = str_ptr + 1;
          *(undefined2 *)((int)local_bc + val_2) =
               *(undefined2 *)(val + (*(int *)(auStack_96 + val_2) >> 0x10) * 0x12 + 0x1b2e08);
          val_2 = val;
        } while (val != 0x12);
      }
    }
    else {
      val_2 = 0;
      do {
        *(short *)(auStack_96 + val_2 + 2) = *(short *)((int)&local_d0 + val_2) * 0x1c + 0x1b;
        val = val_2 + 2;
        *(undefined2 *)((int)local_bc + val_2) =
             *(undefined2 *)(val + (*(int *)(auStack_96 + val_2) >> 0x10) * 0x12 + 0x1b2e08);
        val_2 = val;
      } while (val != 0x12);
    }
  }
  else {
    ch = (&g_data_001926ec)[uval_5];
    if (ch == -1) {
      str_ptr = *(char **)(&g_data_0019273c + uval_5 * 4);
      if (str_ptr == (char *)0x0) {
        LbErrorLog(); /* LbErrorLog("slab.cpp", line 1038, "Illegal special case!!!") */
      }
      else {
        val_2 = 0;
        do {
          short_val = *(short *)((int)&local_d0 + val_2) * 0x1c + (short)*str_ptr +
                   *(short *)(auStack_82 + val_2 + 2) * 9 + *(short *)((int)&local_a8 + val_2);
          val = val_2 + 2;
          *(short *)(auStack_96 + val_2 + 2) = short_val;
          str_ptr = str_ptr + 1;
          *(undefined2 *)((int)local_bc + val_2) = *(undefined2 *)(val + short_val * 0x12 + 0x1b2e08)
          ;
          val_2 = val;
        } while (val != 0x12);
      }
    }
    else {
      val_2 = 0;
      do {
        short_val = *(short *)((int)&local_d0 + val_2) * 0x1c + (short)ch +
                 *(short *)(auStack_82 + val_2 + 2) * 9 + *(short *)((int)&local_a8 + val_2);
        val = val_2 + 2;
        *(short *)(auStack_96 + val_2 + 2) = short_val;
        *(undefined2 *)((int)local_bc + val_2) = *(undefined2 *)(val + short_val * 0x12 + 0x1b2e08);
        val_2 = val;
      } while (val != 0x12);
    }
  }
  if ((&g_data_001921cf)[local_6c * 0x16] == '\x03') {
    uval_5 = 0xffffffff;
    local_64[0] = 0;
    uval_3 = 0xfffffffe;
    do {
      local_40 = local_64[0] * 2;
      uval_6 = (uint)local_18;
      uval_4 = (uint)local_20;
      uval_9 = local_64[0] * 2 & 7;
      local_14 = (&g_slabmap_base)
                 [((*(int *)((int)&g_data_001926c4 + uval_9 * 2 + 1) >> 0x18) + uval_4 +
                  (uval_6 + (*(int *)((int)&g_data_001926c4 + uval_9 * 2 + 2) >> 0x18)) * 0x55) * 6];
      uval_2 = (uint)(byte)(&g_slabmap_base)
                          [(((*(int *)((int)&g_data_001926c4 + (uval_5 & 7) * 2 + 2) >> 0x18) + uval_6)
                            * 0x55 + (*(int *)((int)&g_data_001926c4 + (uval_5 & 7) * 2 + 1) >> 0x18) +
                                     uval_4) * 6];
      ch = (&g_data_001921cf)[uval_2 * 0x16];
      if (((((ch == '\x02') || (ch == '\x04')) || (ch == '\x05')) ||
          ((uval_2 == 0xd || (uval_2 == 0xc)))) &&
         (((&g_data_001921cf)
           [(uint)(byte)(&g_slabmap_base)
                        [((*(int *)((int)&g_data_001926c4 + (uval_3 & 7) * 2 + 1) >> 0x18) + uval_4 +
                         ((*(int *)((int)&g_data_001926c4 + (uval_3 & 7) * 2 + 2) >> 0x18) + uval_6) *
                         0x55) * 6] * 0x16] == '\x03' &&
          ((&g_data_001921cf)
           [(uint)(byte)(&g_slabmap_base)
                        [((*(int *)((int)&g_data_001926c4 + uval_9 * 2 + 1) >> 0x18) + uval_4 +
                         (uval_6 + (*(int *)((int)&g_data_001926c4 + uval_9 * 2 + 2) >> 0x18)) * 0x55)
                         * 6] * 0x16] == '\x03')))) {
        val_2 = *(int *)((uval_5 & 7) + 0x1926bd) >> 0x18;
        *(undefined2 *)((int)&uStack_c8 + val_2 * 2) = 6;
        short_val = *(short *)((int)&uStack_78 + val_2 * 2) * 9 + 0xb0 +
                 *(short *)((int)&uStack_a0 + val_2 * 2);
        *(short *)((int)&uStack_8c + val_2 * 2) = short_val;
        local_bc[val_2 + 4] = (&g_bss_001b2e0a)[short_val * 9 + val_2 + 4];
      }
      uval_3 = uval_3 + 2;
      local_64[0] = local_64[0] + 1;
      uval_5 = uval_5 + 2;
    } while ((int)local_64[0] < 4);
  }
  local_40 = (uint)local_18 * 0x55 + (uint)local_20;
  (&g_bss_002d33c9)[local_40 * 6] =
       (&g_bss_002eb9b4)[(uint)*(ushort *)(&g_data_001921c4 + local_6c * 0x16) * 2];
  slab_update_slab_subtile_columns_0d8974();
  local_64[5] = local_40;
  local_68 = (uint)local_20 * 3;
  local_64[3] = (uint)local_18 * 3;
  uval_8 = 0;
  local_64[4] = local_64[3] + 3;
  do {
    val_2 = *(int *)((int)word_ptr_3 + 0x68);
    *(undefined4 *)((int)word_ptr_3 + 0x94) = *(undefined4 *)((int)word_ptr_3 + 0x78);
    *(int *)((int)word_ptr_3 + 0x74) = val_2 + 3;
    word_ptr = (undefined1 *)word_ptr_3;
    do {
      word_ptr_4 = word_ptr;
      *(uint *)(word_ptr_4 + -4) = (uint)(byte)word_ptr_4[0xb4];
      word_ptr_3 = (undefined4 *)(word_ptr_4 + -8);
      *(uint *)(word_ptr_4 + -8) = (uint)uval_8;
      val_2 = val_2 + 1;
      *(undefined4 *)(word_ptr_4 + -0xc) = 0xd895d;
      slab_illegal_animating_slab_number_0d8cdc();
      uval_8 = uval_8 + 1;
      word_ptr = word_ptr_4 + -8;
    } while (val_2 != *(int *)(word_ptr_4 + 0x6c));
    val_2 = *(int *)(word_ptr_4 + 0x70);
    *(int *)(word_ptr_4 + 0x70) = val_2 + 1;
  } while (val_2 + 1 != *(int *)(word_ptr_4 + 0x74));
  return;
}

/******************************************************************************
 * Function : slab_update_slab_subtile_columns_0d8974 (Original VA: 0xd8974, Ghidra: FUN_000d8974)
 * Prototype: void slab_update_slab_subtile_columns_0d8974(void);
 * Address  : 0xd8974 (Size: 519 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 1811
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 2 -> slab_update_slab_subtile_columns_0d72f8, slab_illegal_special_case_0d7dac
 * Callees  : 3 -> jtyedit_we_should_only_dealing_04c1e3, slab_process_map_subtile_0da4b8, LbErrorLog
 ******************************************************************************/
void slab_update_slab_subtile_columns_0d8974(void)

{
  ushort uval;
  short short_val;
  byte flag;
  int arg_eax;
  uint loop_i;
  short *arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val;
  byte arg_dl;
  int slab_coord;
  byte arg_bl;
  int local_20;
  
  if ((&g_data_001921d5)[arg_eax * 0x16] != '\x03') {
    slab_coord = (&g_subtile_to_slab_lut)[arg_dl] + (&g_subtile_to_slab_lut)[arg_bl] * 0x55;
    loop_i = (CONCAT11((&g_slabmap)[slab_coord * 6],(&g_data_001921d5)[arg_eax * 0x16]) & 0xff03) &
            0xffffe7ff;
    flag = (byte)(loop_i >> 8);
    (&g_slabmap)[slab_coord * 6] = flag;
    (&g_slabmap)[slab_coord * 6] = flag | (char)loop_i << 3;
  }
  local_20 = 0;
  slab_coord = arg_eax * 0x16;
  do {
    jtyedit_we_should_only_dealing_04c1e3();
    flag = *(byte *)((int)&g_map_subtiles +
                     ((uint)arg_dl + extraout_ECX_00 + ((uint)arg_bl + local_20) * 0x100) * 5) &
            0x84;
    uval = *(ushort *)(&g_data_001921c2 + slab_coord);
    short_val = *arg_ecx;
    val = extraout_ECX_00;
    if (-(int)short_val < 0) {
      LbErrorLog(); /* LbErrorLog("slab.cpp", line 1811, "BBlocks") */
      val = extraout_ECX_01;
    }
    for (loop_i = (uint)*(byte *)((int)&g_bss_0019e973 + short_val * -0x18 + 3) << 8;
        ((loop_i & 0xff) < 8 && ((loop_i & 0x100) != 0));
        loop_i = (uint)CONCAT11((byte)(loop_i >> 8) >> 1,(char)loop_i + '\x01')) {
    }
    if ((uint)uval < (loop_i & 0xff)) {
      *(byte *)((int)&g_map_subtiles + ((uint)arg_dl + val + (local_20 + (uint)arg_bl) * 0x100) * 5
               ) = (&g_data_001921c6)[slab_coord] | flag;
    }
    else {
      *(byte *)((int)&g_map_subtiles + (((uint)arg_bl + local_20) * 0x100 + (uint)arg_dl + val) * 5
               ) = (&g_data_001921ca)[slab_coord] | flag;
    }
    slab_process_map_subtile_0da4b8();
    arg_ecx = arg_ecx + 1;
  } while ((extraout_ECX + 1 < 3) || (local_20 = local_20 + 1, local_20 < 3));
  return;
}

/******************************************************************************
 * Function : slab_attempt_dump_an_animating_0d8b7c (Original VA: 0xd8b7c, Ghidra: FUN_000d8b7c)
 * Prototype: void slab_attempt_dump_an_animating_0d8b7c(byte param_1);
 * Address  : 0xd8b7c (Size: 351 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 1256
 * Purpose  : String 'Attempt to dump an invalid animating slab: %d'
 * Callers  : 5 -> door_fn_022933, door_fn_0229e4, door_fn_023042, inits_told_you_so_create_0449a4, room_how_room_exist_slabs_0cae40
 * Callees  : 6 -> slab_update_slab_subtile_columns_0d72f8, slab_process_map_subtile_0d916c, slab_process_map_subtile_0da4b8, slab_process_map_subtile_0dafb0, LbErrorLog, dk_sprintf
 ******************************************************************************/
void slab_attempt_dump_an_animating_0d8b7c(byte param_1)

{
  int slab_coord;
  int arg_eax;
  uint uval;
  int val;
  uint arg_ecx;
  int extraout_ECX;
  int val_2;
  uint arg_ebx;
  int val_3;
  
  slab_coord = (&g_subtile_to_slab_lut)[arg_ebx & 0xff];
  if (arg_eax < 0x2a) {
    dk_sprintf(&g_log_sprintf_buf,s_Attempt_to_dump_an_invalid_anima_0016c7b3);
    LbErrorLog(); /* LbErrorLog("slab.cpp", line 1256, g_log_buf) */
    slab_update_slab_subtile_columns_0d72f8(g_neutral_player_number);
  }
  else {
    slab_process_map_subtile_0d916c((&g_subtile_to_slab_lut)[arg_ecx & 0xff]);
    uval = (uint)param_1;
    slab_update_slab_subtile_columns_0d72f8();
    val_3 = 0;
    slab_process_map_subtile_0dafb0();
    do {
      val = (*(int *)((int)&g_data_001926c4 + val_3 + 1) >> 0x18) + slab_coord;
      val_2 = (*(int *)((int)&g_data_001926c4 + val_3 + 2) >> 0x18) + uval;
      if ((((-1 < val) && (val < 0x55)) && (-1 < val_2)) && (val_2 < 0x55)) {
        val = 0;
        do {
          do {
            slab_process_map_subtile_0da4b8();
          } while (extraout_ECX + 1 < 3);
          val = val + 1;
        } while (val < 3);
      }
      val_3 = val_3 + 2;
    } while (val_3 != 0x10);
  }
  return;
}

/******************************************************************************
 * Function : slab_illegal_animating_slab_number_0d8cdc (Original VA: 0xd8cdc, Ghidra: FUN_000d8cdc)
 * Prototype: void slab_illegal_animating_slab_number_0d8cdc(void);
 * Address  : 0xd8cdc (Size: 1167 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 1295, 1350, 1359, 1365, 1385
 * Purpose  : String 'Illegal animating slab number: %d'
 * Callers  : 2 -> slab_update_slab_subtile_columns_0d72f8, slab_illegal_special_case_0d7dac
 * Callees  : 6 -> inits_allocate_light_object_043f07, inits_told_you_so_create_044ca6, light_already_list_0acaf8, LbErrorLog, LbScreenWaitVbi, dk_sprintf
 ******************************************************************************/
void slab_illegal_animating_slab_number_0d8cdc(void)

{
  byte flag;
  bool flag_2;
  int val;
  int val_2;
  uint uval;
  int val_3;
  ushort arg_cx;
  int extraout_ECX;
  int arg_edx;
  uint uval_2;
  int arg_ebx;
  short *val_4;
  short *val_5;
  uint uval_3;
  undefined4 auStackY_60 [2];
  short local_4c;
  undefined1 local_4a [8];
  short local_42 [3];
  undefined1 local_3b [3];
  undefined2 local_38;
  undefined2 uStack_36;
  short local_34 [2];
  int local_30 [6];
  ushort local_18;
  undefined1 auStack_16 [6];
  undefined4 local_10;
  
  auStack_16._2_2_ = *(undefined2 *)(&g_bss_001b89bc + (uint)arg_cx * 2);
  LbScreenWaitVbi();
  if (0x517 < extraout_ECX) {
    dk_sprintf(&g_log_sprintf_buf,s_Illegal_animating_slab_number____0016c7ea,extraout_ECX);
    LbErrorLog(); /* LbErrorLog("slab.cpp", line 1295, g_log_buf) */
  }
  if ((auStack_16._2_2_ != -1) && (auStack_16._2_2_ != g_bss_001b89b8._2_2_)) {
    local_30[3] = arg_edx / 3;
    val = arg_ebx / 3;
    local_30[5] = arg_edx << 8;
    local_30[4] = arg_ebx << 8;
    val_4 = &local_4c;
    while ((short)*(undefined4 *)(val_4 + 0x1c) < g_bss_001b89b8._2_2_) {
      val_2 = (*(int *)(val_4 + 0x1b) >> 0x10) * 0xd;
      if ((short)*(undefined4 *)(val_4 + 0x1e) != *(short *)(&g_bss_001b93ed + val_2)) {
        return;
      }
      val_5 = val_4;
      if ((ushort)(byte)(&g_bss_001b93ef)[val_2] == val_4[0x28]) {
        val_4[10] = (short)*(undefined4 *)(val_4 + 0x18) + *(short *)(&g_bss_001b93f0 + val_2);
        val_4[0xb] = (short)(*(int *)(val_4 + 0x16) + (uint)*(ushort *)(&g_bss_001b93f2 + val_2));
        val_4[0xc] = *(short *)(&g_bss_001b93f4 + val_2);
        if ((*(byte *)((int)&g_map_subtiles +
                      ((uint)*(byte *)((int)val_4 + 0x17) * 0x100 +
                      (uint)*(byte *)((int)val_4 + 0x15)) * 5) & 0x10) != 0) goto LAB_000d8e13;
        if ((&g_bss_001b93ec)[val_2] == '\0') {
          if ((&g_bss_001b93f6)[val_2] == '\x01') {
            flag = (&g_bss_001b93f7)[val_2];
            if (flag < 0x6f) {
LAB_000d8e57:
              uval_3 = (uint)(byte)(&g_bss_001b93f7)[val_2];
            }
            else if (flag < 0x70) {
              uval_3 = *(uint *)(&g_data_001912ce + (uint)*(byte *)(val_4 + 0x2a) * 4);
            }
            else {
              if (flag != 0x73) goto LAB_000d8e57;
              uval_3 = *(uint *)(&g_data_001912b6 + (uint)*(byte *)(val_4 + 0x2a) * 4);
            }
            if (uval_3 == 0) goto LAB_000d8e13;
            if ((uval_3 == 0x1b) && (val_4[0x28] != 4)) {
              flag = *(byte *)(val_4 + 0x28);
              *(int *)(val_4 + 0xe) = val;
              *(undefined4 *)(val_4 + 0x10) = *(undefined4 *)(val_4 + 0x14);
              uval = 0;
              if ((flag & 1) == 0) {
                flag = (&g_data_0019277c)[flag];
                uval_2 = (uint)flag;
                if (uval_2 != 0xffffffff) {
                  val_3 = (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 1) >> 0x18) +
                          *(int *)(val_4 + 0x14);
                  val_2 = (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 2) >> 0x18) + val;
                  *(int *)(val_4 + 0x12) = val_2;
                  if (((&g_data_001921c6)
                       [(uint)(byte)(&g_slabmap_base)[(val_2 * 0x55 + val_3) * 6] * 0x16] & 0x29) != 0
                     ) {
                    uval = 0x100;
                  }
                  if ((&g_slabmap_base)[(val_3 + *(int *)(val_4 + 0x12) * 0x55) * 6] == '\x14') {
                    uval = CONCAT31((int3)(uval >> 8),1);
                  }
                  uval_2 = (uint)(flag + 2 & 7);
                  val_2 = (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 2) >> 0x18) +
                          *(int *)(val_4 + 0xe);
                  val_3 = (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 1) >> 0x18) +
                          *(int *)(val_4 + 0x10);
                  if (((&g_data_001921c6)
                       [(uint)(byte)(&g_slabmap_base)[(val_2 * 0x55 + val_3) * 6] * 0x16] & 0x29) != 0
                     ) {
                    uval = (uint)CONCAT11((char)(uval >> 8) + '\x01',(char)uval);
                  }
                  if ((&g_slabmap_base)[(val_2 * 0x55 + val_3) * 6] == '\x14') {
                    uval = CONCAT31((int3)(uval >> 8),(char)uval + '\x01');
                  }
                }
                flag_2 = (uval >> 8) + (uval & 0xff) < 2;
              }
              else if (((&g_data_001921c6)
                        [(uint)(byte)(&g_slabmap_base)
                                     [((*(int *)(&g_data_001926d5 + (uint)flag * 2) >> 0x18) +
                                       *(int *)(val_4 + 0x14) +
                                      ((*(int *)(&g_data_001926d6 + (uint)flag * 2) >> 0x18) + val)
                                      * 0x55) * 6] * 0x16] & 0x29) == 0) {
                flag_2 = true;
              }
              else {
                flag_2 = false;
              }
              if (!flag_2) goto LAB_000d8e13;
            }
            val_4[-0xffffffff00000002] = -0x7010;
            val_4[-0xffffffff00000001] = 0xd;
            val_2 = inits_allocate_light_object_043f07();
            if (val_2 != 0) goto LAB_000d8e13;
            *(uint *)(val_4 + -2) = uval_3;
            *(char **)(val_4 + -4) = s_Cannot_create_object_type__d_0016c815;
            *(undefined1 **)(val_4 + -6) = &g_log_sprintf_buf;
            val_4[-0xffffffff00000008] = -0x6ff3;
            val_4[-0xffffffff00000007] = 0xd;
            dk_sprintf();
            val_4[-0xffffffff00000002] = -0x6fe1;
            val_4[-0xffffffff00000001] = 0xd;
            LbErrorLog(); /* LbErrorLog("slab.cpp", line 1350, g_log_buf) */
            val_4[0x1c] = val_4[0x1c] + 1;
          }
          else if ((&g_bss_001b93f6)[val_2] == '\a') {
            *(uint *)(val_4 + -2) = (uint)(ushort)val_4[0x1a];
            val_4[-0xffffffff00000004] = -0x6fa9;
            val_4[-0xffffffff00000003] = 0xd;
            val_3 = inits_told_you_so_create_044ca6();
            val_5 = val_4 + -2;
            if (val_3 != 0) goto LAB_000d8e13;
            *(uint *)(val_4 + -4) = (uint)(byte)(&g_bss_001b93f7)[val_2];
            *(char **)(val_4 + -6) = s_Cannot_effect_generator_type__d_0016c83b;
            *(undefined1 **)(val_4 + -8) = &g_log_sprintf_buf;
            val_4[-0xffffffff0000000a] = -0x6f89;
            val_4[-0xffffffff00000009] = 0xd;
            dk_sprintf();
            val_4[-0xffffffff00000004] = -0x6f77;
            val_4[-0xffffffff00000003] = 0xd;
            LbErrorLog(); /* LbErrorLog("slab.cpp", line 1359, g_log_buf) */
            val_4[0x1a] = val_4[0x1a] + 1;
            val_4 = val_4 + -2;
          }
          else {
            val_4[-0xffffffff00000002] = 0;
            val_4[-0xffffffff00000001] = 0;
            *(char **)(val_4 + -4) = s_Stupid_thing_class__d_0016c864;
            *(undefined1 **)(val_4 + -6) = &g_log_sprintf_buf;
            val_4[-0xffffffff00000008] = -0x6f53;
            val_4[-0xffffffff00000007] = 0xd;
            dk_sprintf();
            val_4[-0xffffffff00000002] = -0x6f41;
            val_4[-0xffffffff00000001] = 0xd;
            LbErrorLog(); /* LbErrorLog("slab.cpp", line 1365, g_log_buf) */
            val_4[0x1c] = val_4[0x1c] + 1;
          }
        }
        else if ((&g_bss_001b93ec)[val_2] == '\x01') {
          *(undefined *)(val_4 + 1) = (&g_bss_001b93f7)[val_2];
          *val_4 = (ushort)(byte)(&g_bss_001b93f8)[val_2] << 8;
          val_4[5] = (short)*(undefined4 *)(val_4 + 10);
          val_4[6] = (short)*(undefined4 *)(val_4 + 0xb);
          *(undefined1 *)((int)val_4 + 3) = 0;
          val_4[7] = (short)*(undefined4 *)(val_4 + 0xc);
          *(undefined1 *)((int)val_4 + 0x11) = 0;
          val_4[-0xffffffff00000002] = -0x6ef8;
          val_4[-0xffffffff00000001] = 0xd;
          val_2 = light_already_list_0acaf8();
          if (val_2 * 0x2e == -0x1bd5ed) {
            val_4[-0xffffffff00000002] = -0x6ec4;
            val_4[-0xffffffff00000001] = 0xd;
            LbErrorLog(); /* LbErrorLog("slab.cpp", line 1385, "Cannot create light") */
            val_4[0x1c] = val_4[0x1c] + 1;
          }
          else {
            *(uint *)(&g_bss_001bd5ff + val_2 * 0x2e) = (uint)(ushort)val_4[0x1a];
            val_4[0x1c] = val_4[0x1c] + 1;
          }
        }
        else {
          val_4[0x1c] = val_4[0x1c] + 1;
        }
      }
      else {
LAB_000d8e13:
        *(short *)((int)val_5 + 0x38) = *(short *)((int)val_5 + 0x38) + 1;
        val_4 = val_5;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : slab_process_map_subtile_0d916c (Original VA: 0xd916c, Ghidra: FUN_000d916c)
 * Prototype: void slab_process_map_subtile_0d916c(void);
 * Address  : 0xd916c (Size: 255 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> slab_illegal_special_case_0d7dac, slab_attempt_dump_an_animating_0d8b7c
 * Callees  : 1 -> structs_update_creature_control_072af4
 ******************************************************************************/
void slab_process_map_subtile_0d916c(void)

{
  int thing_ptr;
  int arg_eax;
  int thing_ptr_2;
  uint uval;
  uint extraout_ECX;
  int arg_edx;
  int val;
  int local_1c;
  
  uval = arg_edx * 0x55 + arg_eax;
  local_1c = arg_edx * 3 + -1;
  do {
    val = arg_eax * 3 + -1;
    do {
      if ((((-1 < val) && (-1 < local_1c)) && (val < 0x100)) &&
         ((local_1c < 0x100 &&
          (thing_ptr_2 = (&g_thing_ptrs)
                   [(*(uint *)((int)&g_map_subtiles + (local_1c * 0x100 + val) * 5 + 1) & 0x3fffff)
                    >> 0xb],
          (&g_thing_ptrs)
          [(*(uint *)((int)&g_map_subtiles + (local_1c * 0x100 + val) * 5 + 1) & 0x3fffff) >> 0xb]
          != g_thing_ptrs)))) {
        do {
          thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
          if ((*(ushort *)(thing_ptr_2 + 0x1d) == uval) &&
             (((thing_ptr_2 = CONCAT31((uint3)(byte)(*(ushort *)(thing_ptr_2 + 0x1d) >> 8) ^ (uint3)(uval >> 8)
                                 ,*(undefined1 *)(thing_ptr_2 + 0x1f)), thing_ptr_2 == 1 || (thing_ptr_2 == 7)) || /* thing->class_id */
              (thing_ptr_2 == 0xe)))) {
            structs_update_creature_control_072af4();
            uval = extraout_ECX;
          }
          thing_ptr_2 = thing_ptr;
        } while (thing_ptr != g_thing_ptrs);
      }
      val = val + 1;
    } while (val != arg_eax * 3 + 4);
    local_1c = local_1c + 1;
  } while (local_1c != arg_edx * 3 + 4);
  return;
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0d9338 (Original VA: 0xd9338, Ghidra: FUN_000d9338)
 * Prototype: int slab_process_slabmap_tile_0d9338(void);
 * Address  : 0xd9338 (Size: 223 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> slab_illegal_special_case_0d7dac
 * Callees  : 0 -> 
 ******************************************************************************/
int slab_process_slabmap_tile_0d9338(void)

{
  char arg_al;
  uint uval;
  uint3 uval_2;
  int arg_ecx;
  int arg_edx;
  int slab_coord;
  int arg_ebx;
  
  uval = arg_edx * 0xb;
  if ((((-1 < arg_ebx) && (arg_ebx < 0x55)) && (-1 < arg_ecx)) &&
     ((arg_ecx < 0x55 &&
      (uval = (uint)(byte)(&g_data_001921d0)
                           [(uint)(byte)(&g_slabmap_base)[(arg_ecx * 0x55 + arg_ebx) * 6] * 0x16],
      uval == (byte)(&g_data_001921d0)[arg_edx * 0x16])))) {
    slab_coord = (&g_subtile_to_slab_lut)[arg_ecx * 3] * 0x55 + (&g_subtile_to_slab_lut)[arg_ebx * 3];
    uval_2 = (uint3)((uint)(slab_coord * 3) >> 8);
    uval = CONCAT31(uval_2,(&g_slabmap)[slab_coord * 6]) & 0xffffff07;
    if (((char)uval == arg_al) || ((char)uval == g_neutral_player_number)) {
      return (uint)uval_2 << 8;
    }
  }
  return CONCAT31((int3)(uval >> 8),1);
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0d9418 (Original VA: 0xd9418, Ghidra: FUN_000d9418)
 * Prototype: char slab_process_slabmap_tile_0d9418(void);
 * Address  : 0xd9418 (Size: 182 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> slab_attempt_place_animating_slab_0d7688
 * Callees  : 1 -> slab_process_slabmap_tile_0d9dc0
 ******************************************************************************/
char slab_process_slabmap_tile_0d9418(void)

{
  char arg_al;
  int val;
  byte loop_i;
  byte extraout_CL;
  char arg_dl;
  int val_2;
  char arg_bl;
  char local_4;
  
  local_4 = arg_al;
  if (arg_al == '\x02') {
    for (loop_i = 0; loop_i < 8; loop_i = loop_i + 1) {
      val_2 = (int)(char)(arg_dl + *(char *)((int)&g_data_001926c8 + (uint)loop_i * 2));
      if ((((-1 < val_2) && (val_2 < 0x55)) &&
          (val = (int)(char)(*(char *)((int)&g_data_001926c8 + (uint)loop_i * 2 + 1) + arg_bl),
          -1 < val)) &&
         ((val < 0x55 &&
          (((val_2 = (int)(char)(&g_slabmap_base)[(val_2 + val * 0x55) * 6], val_2 == 0xb ||
            ((&g_data_001921cf)[val_2 * 0x16] == '\x04')) || (0x29 < val_2)))))) {
        local_4 = slab_process_slabmap_tile_0d9dc0();
        loop_i = extraout_CL;
        break;
      }
    }
    if (loop_i == 8) {
      local_4 = '\x02';
    }
  }
  return local_4;
}

/******************************************************************************
 * Function : slab_fn_0d9600 (Original VA: 0xd9600, Ghidra: FUN_000d9600)
 * Prototype: longlong slab_fn_0d9600(void);
 * Address  : 0xd9600 (Size: 63 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Module slab.cpp procedure @ 0x0d9600
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong slab_fn_0d9600(void)

{
  int arg_eax;
  uint thing_ptr;
  uint arg_edx;
  
  thing_ptr = g_bss_001aea00;
  while( true ) {
    if (g_bss_001b09f8 <= thing_ptr) {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((*(short *)(thing_ptr + 0x62) == *(short *)(arg_eax + 0xe)) &&
       (*(char *)(thing_ptr + 0x1f) != '\x0e')) break; /* thing->class_id */
    thing_ptr = thing_ptr + 0x6b;
  }
  return CONCAT44(arg_edx,thing_ptr);
}

/******************************************************************************
 * Function : slab_fn_0d9640 (Original VA: 0xd9640, Ghidra: FUN_000d9640)
 * Prototype: longlong slab_fn_0d9640(void);
 * Address  : 0xd9640 (Size: 53 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 1811
 * Purpose  : Module slab.cpp procedure @ 0x0d9640
 * Callers  : 1 -> file_process_thing_entity_02a6c5
 * Callees  : 0 -> 
 ******************************************************************************/
longlong slab_fn_0d9640(void)

{
  int arg_eax;
  uint uval;
  uint arg_edx;
  
  uval = g_bss_001aea00;
  while( true ) {
    if (g_bss_001b09f8 <= uval) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (*(short *)(uval + 0x62) == *(short *)(arg_eax + 0xe)) break;
    uval = uval + 0x6b;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : slab_process_map_subtile_0d96c0 (Original VA: 0xd96c0, Ghidra: FUN_000d96c0)
 * Prototype: void slab_process_map_subtile_0d96c0(void);
 * Address  : 0xd96c0 (Size: 459 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 1811
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> file_slab_type_increase_size_02d168
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d9817) */

void slab_process_map_subtile_0d96c0(void)

{
  uint loop_i;
  int val;
  undefined1 *word_ptr;
  int val_2;
  int local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_2c;
  
  local_44 = 0;
  local_4c = 0;
  local_48 = 3;
  do {
    local_34 = 0;
    local_38 = local_4c;
    local_3c = 3;
    do {
      if (local_44 * 3 < local_48) {
        val_2 = (uint)(byte)(&g_slabmap_base)[local_38] * 0x16;
        local_54 = local_44 * 0xf00;
        local_2c = local_44 * 3;
        do {
          if (local_34 * 3 < local_3c) {
            word_ptr = (undefined1 *)((int)&g_map_subtiles + local_54 + local_34 * 0xf);
            val = local_34 * 3;
            do {
              for (loop_i = (uint)*(byte *)((int)&g_bss_0019e973 +
                                          (*(uint *)((int)&g_map_subtiles +
                                                    (local_2c * 0x100 + val) * 5 + 1) & 0x7ff) *
                                          0x18 + 3) << 8;
                  ((loop_i & 0xff) < 8 && ((loop_i & 0x100) != 0));
                  loop_i = (uint)CONCAT11((byte)(loop_i >> 8) >> 1,(char)loop_i + '\x01')) {
              }
              if ((uint)*(ushort *)(&g_data_001921c2 + val_2) < (loop_i & 0xff)) {
                *word_ptr = (&g_data_001921c6)[val_2];
              }
              else {
                *word_ptr = (&g_data_001921ca)[val_2];
              }
              val = val + 1;
              word_ptr = word_ptr + 5;
            } while (val < local_3c);
          }
          local_54 = local_54 + 0x500;
          local_2c = local_2c + 1;
        } while (local_2c < local_48);
      }
      local_38 = local_38 + 6;
      local_3c = local_3c + 3;
      local_34 = local_34 + 1;
    } while (local_34 < 0x55);
    local_4c = local_4c + 0x1fe;
    local_48 = local_48 + 3;
    local_44 = local_44 + 1;
  } while (local_44 < 0x55);
  return;
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0d988c (Original VA: 0xd988c, Ghidra: FUN_000d988c)
 * Prototype: void slab_process_slabmap_tile_0d988c(void);
 * Address  : 0xd988c (Size: 83 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> file_slab_type_increase_size_02d168
 * Callees  : 0 -> 
 ******************************************************************************/
void slab_process_slabmap_tile_0d988c(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  
  val_4 = 0x1fe;
  val_3 = 0;
  val = val_3;
  do {
    do {
      val_2 = val + 6;
      (&g_bss_002d33c9)[val] =
           (&g_bss_002eb9b4)
           [(uint)*(ushort *)(&g_data_001921c4 + (uint)(byte)(&g_slabmap_base)[val] * 0x16) * 2];
      val = val_2;
    } while (val_2 != val_4);
    val_3 = val_3 + 0x1fe;
    val_4 = val_4 + 0x1fe;
    val = val_3;
  } while (val_3 != 0xa956);
  return;
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0d99f8 (Original VA: 0xd99f8, Ghidra: FUN_000d99f8)
 * Prototype: undefined4 slab_process_slabmap_tile_0d99f8(void);
 * Address  : 0xd99f8 (Size: 968 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 3 -> cdtest_update_player_view_state_014e9f, specials_process_slabmap_tile_070e59, slab_process_slabmap_tile_0da7bc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 slab_process_slabmap_tile_0d99f8(void)

{
  byte arg_al;
  uint thing_ptr;
  uint thing_ptr_2;
  int val;
  int val_2;
  undefined4 uval;
  byte arg_dl;
  uint uval_2;
  byte arg_bl;
  byte local_1c;
  
  if (arg_al == g_neutral_player_number) {
    thing_ptr = 0x2a;
    thing_ptr_2 = 0x2a;
  }
  else {
    thing_ptr = *(byte *)((&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)arg_al * 0xa84]] + 0xe) / 3;
    thing_ptr_2 = *(byte *)((&g_thing_ptrs)[(ushort)(&g_dungeons)[(uint)arg_al * 0xa84]] + 0x10) / 3;
  }
  uval_2 = (int)(thing_ptr_2 - arg_bl) >> 0x1f;
  uval_2 = (thing_ptr_2 - arg_bl ^ uval_2) - uval_2;
  thing_ptr_2 = (int)(thing_ptr - arg_dl) >> 0x1f;
  thing_ptr_2 = (thing_ptr - arg_dl ^ thing_ptr_2) - thing_ptr_2;
  thing_ptr = (int)thing_ptr_2 >> 0x1f;
  val = (thing_ptr_2 ^ thing_ptr) - thing_ptr;
  thing_ptr = (int)uval_2 >> 0x1f;
  val_2 = (uval_2 ^ thing_ptr) - thing_ptr;
  if (val_2 < val) {
    val = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val) * 8) * val >> 0xd;
  }
  else if (val_2 == 0) {
    val = 0;
  }
  else {
    val = *(int *)(&g_data_0017a4d0 + ((val * 0x100) / val_2) * 8) * val_2 >> 0xd;
  }
  thing_ptr = (uint)arg_dl;
  local_1c = 0;
  if ((thing_ptr % 5 == 0) &&
     ((char)(((&g_slabmap_base)[(thing_ptr + (arg_bl - 1) * 0x55) * 6] == '\v') +
            ((&g_slabmap_base)[(thing_ptr + (arg_bl + 1) * 0x55) * 6] == '\v')) != '\0')) {
    local_1c = 1;
  }
  thing_ptr = (uint)arg_bl;
  if ((thing_ptr % 5 == 0) &&
     ((char)(((&g_slabmap_base)[(thing_ptr * 0x55 + (uint)arg_dl + -1) * 6] == '\v') +
            ((&g_slabmap_base)[(thing_ptr * 0x55 + (uint)arg_dl + 1) * 6] == '\v')) != '\0')) {
    local_1c = local_1c | 2;
  }
  if (local_1c == 0) {
    thing_ptr = (uint)arg_dl;
    if ((thing_ptr % 2 == 1) &&
       ((char)(((&g_slabmap_base)[(thing_ptr + (arg_bl - 1) * 0x55) * 6] == '\v') +
              ((&g_slabmap_base)[(thing_ptr + (arg_bl + 1) * 0x55) * 6] == '\v')) != '\0')) {
      return 4;
    }
    thing_ptr = (uint)arg_bl;
    if ((thing_ptr % 2 == 1) &&
       ((char)(((&g_slabmap_base)[((uint)arg_dl + thing_ptr * 0x55 + -1) * 6] == '\v') +
              ((&g_slabmap_base)[(thing_ptr * 0x55 + (uint)arg_dl + 1) * 6] == '\v')) != '\0')) {
      return 4;
    }
    val = (int)((val + (val >> 0x1f) * -4) - (uint)((val >> 0x1f) << 1 < 0)) >> 2;
    uval = CONCAT31((int3)((ulonglong)((longlong)val / 3) >> 8),(&g_data_001926bc)[val % 3]);
  }
  else {
    uval = 5;
  }
  return uval;
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0d9dc0 (Original VA: 0xd9dc0, Ghidra: FUN_000d9dc0)
 * Prototype: char slab_process_slabmap_tile_0d9dc0(void);
 * Address  : 0xd9dc0 (Size: 484 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 4 -> cdtest_fn_015030, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0d9418, slab_process_slabmap_tile_0dab3c
 * Callees  : 0 -> 
 ******************************************************************************/
char slab_process_slabmap_tile_0d9dc0(void)

{
  byte flag;
  uint arg_edx;
  byte arg_bl;
  uint uval;
  
  flag = 0;
  if (((int)(((ulonglong)arg_edx & 0xffffffff000000ff) % 5) == 0) &&
     ((char)(((&g_slabmap_base)[((arg_edx & 0xff) + (arg_bl - 1) * 0x55) * 6] == '\v') +
            ((&g_slabmap_base)[((arg_bl + 1) * 0x55 + (arg_edx & 0xff)) * 6] == '\v')) != '\0')) {
    flag = 1;
  }
  uval = (uint)arg_bl;
  if ((uval % 5 == 0) &&
     ((char)(((&g_slabmap_base)[(uval * 0x55 + (arg_edx & 0xff) + -1) * 6] == '\v') +
            ((&g_slabmap_base)[(uval * 0x55 + (arg_edx & 0xff) + 1) * 6] == '\v')) != '\0')) {
    flag = flag | 2;
  }
  return (flag != 0) + '\x02';
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0d9fa4 (Original VA: 0xd9fa4, Ghidra: FUN_000d9fa4)
 * Prototype: char slab_process_slabmap_tile_0d9fa4(void);
 * Address  : 0xd9fa4 (Size: 140 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
char slab_process_slabmap_tile_0d9fa4(void)

{
  int arg_eax;
  int arg_edx;
  
  return ((&g_slabmap_base)[(arg_edx * 0x55 + arg_eax + -1) * 6] == '\v') +
         ((&g_slabmap_base)[(arg_edx * 0x55 + 1 + arg_eax) * 6] == '\v');
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0da030 (Original VA: 0xda030, Ghidra: FUN_000da030)
 * Prototype: char slab_process_slabmap_tile_0da030(void);
 * Address  : 0xda030 (Size: 139 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
char slab_process_slabmap_tile_0da030(void)

{
  int arg_eax;
  int arg_edx;
  
  return ((&g_slabmap_base)[((arg_edx + -1) * 0x55 + arg_eax) * 6] == '\v') +
         ((&g_slabmap_base)[((arg_edx + 1) * 0x55 + arg_eax) * 6] == '\v');
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0da0bc (Original VA: 0xda0bc, Ghidra: FUN_000da0bc)
 * Prototype: uint slab_process_slabmap_tile_0da0bc(void);
 * Address  : 0xda0bc (Size: 492 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint slab_process_slabmap_tile_0da0bc(void)

{
  int arg_eax;
  int val;
  int val_2;
  uint3 uval_3;
  uint uval;
  uint uval_2;
  int arg_edx;
  byte arg_bl;
  int val_3;
  int val_4;
  
  val = arg_eax / 3;
  val_2 = arg_edx / 3;
  uval = 0;
  if ((arg_bl & 1) == 0) {
    uval_2 = (uint)(byte)(&g_data_0019277c)[arg_bl];
    if (uval_2 != 0xffffffff) {
      val_3 = (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 2) >> 0x18) + val_2;
      val_4 = (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 1) >> 0x18) + val;
      if (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(val_3 * 0x55 + val_4) * 6] * 0x16] & 0x29)
          != 0) {
        uval = 0x100;
      }
      if ((&g_slabmap_base)[(val_3 * 0x55 + val_4) * 6] == '\x14') {
        uval = CONCAT31((int3)(uval >> 8),1);
      }
      uval_2 = (uint)((&g_data_0019277c)[arg_bl] + 2 & 7);
      val_2 = val_2 + (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 2) >> 0x18);
      val = val + (*(int *)((int)&g_data_001926c4 + uval_2 * 2 + 1) >> 0x18);
      if (((&g_data_001921c6)[(uint)(byte)(&g_slabmap_base)[(val_2 * 0x55 + val) * 6] * 0x16] & 0x29)
          != 0) {
        uval = (uint)CONCAT11((char)(uval >> 8) + '\x01',(char)uval);
      }
      if ((&g_slabmap_base)[(val_2 * 0x55 + val) * 6] == '\x14') {
        uval = CONCAT31((int3)(uval >> 8),(char)uval + '\x01');
      }
    }
    uval = (uint)((uval >> 8) + (uval & 0xff) < 2);
  }
  else {
    uval_3 = (uint3)((uint)(byte)(&g_slabmap_base)
                                [(((*(int *)(&g_data_001926d6 + (uint)arg_bl * 2) >> 0x18) + val_2) *
                                  0x55 + val + (*(int *)(&g_data_001926d5 + (uint)arg_bl * 2) >>
                                                 0x18)) * 6] * 0xb >> 8);
    if (((&g_data_001921c6)
         [(uint)(byte)(&g_slabmap_base)
                      [(((*(int *)(&g_data_001926d6 + (uint)arg_bl * 2) >> 0x18) + val_2) * 0x55 +
                       val + (*(int *)(&g_data_001926d5 + (uint)arg_bl * 2) >> 0x18)) * 6] * 0x16]
        & 0x29) == 0) {
      uval = CONCAT31(uval_3,1);
    }
    else {
      uval = (uint)uval_3 << 8;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0da2a8 (Original VA: 0xda2a8, Ghidra: FUN_000da2a8)
 * Prototype: uint slab_process_slabmap_tile_0da2a8(void);
 * Address  : 0xda2a8 (Size: 354 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint slab_process_slabmap_tile_0da2a8(void)

{
  byte arg_al;
  uint uval;
  byte arg_dl;
  uint uval_2;
  
  uval = (uint)arg_al;
  uval_2 = (uint)arg_al << 8;
  if ((uval % 5 == 0) &&
     ((char)(((&g_slabmap_base)[(uval + (arg_dl - 1) * 0x55) * 6] == '\v') +
            ((&g_slabmap_base)[((arg_dl + 1) * 0x55 + uval) * 6] == '\v')) != '\0')) {
    uval_2 = (uint)arg_al << 8 | 1;
  }
  uval = (uint)arg_dl;
  if ((uval % 5 == 0) &&
     ((char)(((&g_slabmap_base)[(uval * 0x55 + (uval_2 >> 8) + -1) * 6] == '\v') +
            ((&g_slabmap_base)[(uval * 0x55 + (uval_2 >> 8) + 1) * 6] == '\v')) != '\0')) {
    uval_2 = (uint)(byte)((byte)uval_2 | 2);
  }
  return uval_2 & 0xff;
}

/******************************************************************************
 * Function : slab_process_map_subtile_0da4b8 (Original VA: 0xda4b8, Ghidra: FUN_000da4b8)
 * Prototype: void slab_process_map_subtile_0da4b8(void);
 * Address  : 0xda4b8 (Size: 451 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> slab_update_slab_subtile_columns_0d8974, slab_attempt_dump_an_animating_0d8b7c
 * Callees  : 0 -> 
 ******************************************************************************/
void slab_process_map_subtile_0da4b8(void)

{
  uint *word_ptr;
  byte arg_al;
  byte flag;
  byte flag_2;
  uint uval;
  uint uval_2;
  byte arg_dl;
  int val;
  byte arg_bl;
  byte flag_3;
  byte flag_4;
  
  uval = (uint)arg_al;
  flag = arg_dl / 3;
  flag_2 = arg_bl / 3;
  flag_3 = 0;
  uval_2 = (uint)(byte)(&g_data_001921d1)[uval * 0x16];
  if ((uval == 0xd) || (uval == 0xc)) {
    flag_4 = (uint)arg_dl % 3 == 0;
    if ((uint)arg_bl % 3 == 0) {
      flag_4 = flag_4 | 2;
    }
    if (((&g_slabmap_base)[((uint)flag + (uint)flag_2 * 0x55 + -1) * 6] == '\r') ||
       ((&g_slabmap_base)[((uint)flag + (uint)flag_2 * 0x55 + -1) * 6] == '\f')) {
      flag_3 = 1;
    }
    if (((&g_slabmap_base)[((flag_2 - 1) * 0x55 + (uint)flag) * 6] == '\r') ||
       ((&g_slabmap_base)[((flag_2 - 1) * 0x55 + (uint)flag) * 6] == '\f')) {
      flag_3 = flag_3 | 2;
    }
    if (((&g_slabmap_base)[((flag_2 - 1) * 0x55 + (uint)flag + -1) * 6] == '\r') ||
       ((&g_slabmap_base)[((flag_2 - 1) * 0x55 + (uint)flag + -1) * 6] == '\f')) {
      flag_3 = flag_3 | 4;
    }
    if (flag_4 == 3) {
      if (flag_3 != 7) goto LAB_000da645;
    }
    else if (flag_4 == 1) {
      if ((flag_3 & 1) == 0) goto LAB_000da645;
    }
    else if (flag_4 == 2) {
      if ((flag_3 & 2) != 0) {
        uval_2 = 2;
      }
      goto LAB_000da645;
    }
    uval_2 = 2;
  }
LAB_000da645:
  val = (uint)arg_dl + (uint)arg_bl * 0x100;
  *(byte *)((int)&g_bss_00279205 + val * 5 + 1) =
       *(byte *)((int)&g_bss_00279205 + val * 5 + 1) & 0x3f;
  word_ptr = (uint *)((int)&g_map_subtiles + val * 5 + 1);
  *word_ptr = *word_ptr | (uval_2 & 3) << 0x16;
  return;
}

/******************************************************************************
 * Function : slab_fn_0da67c (Original VA: 0xda67c, Ghidra: FUN_000da67c)
 * Prototype: undefined8 slab_fn_0da67c(void);
 * Address  : 0xda67c (Size: 26 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Module slab.cpp procedure @ 0x0da67c
 * Callers  : 1 -> person_process_slabmap_tile_064ea4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 slab_fn_0da67c(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)(arg_eax * 0xb) >> 8),
                                  ((&g_data_001921c6)[arg_eax * 0x16] & 0x19) == 0));
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0da698 (Original VA: 0xda698, Ghidra: FUN_000da698)
 * Prototype: undefined4 slab_process_slabmap_tile_0da698(void);
 * Address  : 0xda698 (Size: 97 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> room_process_slabmap_tile_0c8268
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 slab_process_slabmap_tile_0da698(void)

{
  byte flag;
  byte flag_2;
  int arg_eax;
  undefined3 uval;
  int arg_edx;
  
  flag = (&g_slabmap_base)[(arg_edx * 0x55 + arg_eax) * 6];
  flag_2 = (&g_data_001921cf)[(uint)flag * 0x16];
  uval = (undefined3)((uint)flag * 0xb >> 8);
  if (flag_2 < 3) {
    if (flag_2 != 1) {
      return CONCAT31(uval,flag);
    }
    return CONCAT31(uval,2);
  }
  if (3 < flag_2) {
    if (flag_2 != 5) {
      return CONCAT31(uval,flag);
    }
    return CONCAT31(uval,99);
  }
  return CONCAT31(uval,4);
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0da6fc (Original VA: 0xda6fc, Ghidra: FUN_000da6fc)
 * Prototype: void slab_process_slabmap_tile_0da6fc(void);
 * Address  : 0xda6fc (Size: 189 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 19 -> build_process_map_subtile_014afe, cdtest_process_slabmap_tile_014c9a, build_process_map_subtile_014d45, cdtest_update_player_view_state_014e9f, cdtest_fn_015030, compturn_process_map_subtile_022660, effect_process_thing_entity_024ab9, input_game_action_048c77 ...
 * Callees  : 2 -> room_how_room_exist_slabs_0c856c, room_process_dungeon_room_0cb144
 ******************************************************************************/
void slab_process_slabmap_tile_0da6fc(void)

{
  byte arg_al;
  int val;
  byte arg_dl;
  int val_2;
  int val_3;
  
  val_3 = 0;
  do {
    val = (uint)arg_al + (*(int *)((int)&g_data_0018b67b + val_3) >> 0x18);
    val_2 = (*(int *)((int)&g_data_0018b67b + val_3 + 1) >> 0x18) + (uint)arg_dl;
    if ((((-1 < val) && (val < 0x55)) && (-1 < val_2)) &&
       ((val_2 < 0x55 &&
        ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val_2 * 0x55 + val) * 6] * 0x16] == '\x04'))
       )) {
      room_how_room_exist_slabs_0c856c();
      room_process_dungeon_room_0cb144();
    }
    val_3 = val_3 + 2;
  } while (val_3 != 8);
  return;
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0da7bc (Original VA: 0xda7bc, Ghidra: FUN_000da7bc)
 * Prototype: void slab_process_slabmap_tile_0da7bc(void);
 * Address  : 0xda7bc (Size: 895 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> cdtest_update_player_view_state_014e9f
 * Callees  : 7 -> imptool_stack_pos_0400da, imptool_update_player_dungeon_0401aa, creature_process_map_subtile_082828, engine3_mark_slab_subtiles_rendered, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0d99f8, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
void slab_process_slabmap_tile_0da7bc(void)

{
  byte arg_al;
  byte arg_dl;
  int val;
  int val_2;
  byte arg_bl;
  uint uval;
  uint *word_ptr;
  uint *word_ptr_2;
  uint auStack_4c [9];
  uint local_28 [2];
  uint local_20 [2];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  word_ptr = auStack_4c + 2;
  if (((&g_data_001921cf)
       [(uint)(byte)(&g_slabmap_base)[((uint)arg_bl * 0x55 + (uint)arg_dl) * 6] * 0x16] == '\x03') &&
     (((&g_slabmap)
       [((&g_subtile_to_slab_lut)[(uint)arg_dl * 3] + (&g_subtile_to_slab_lut)[(uint)arg_bl * 3] * 0x55) * 6] & 7) ==
      arg_al)) {
    auStack_4c[5] = 0;
    auStack_4c[6] = 0;
    do {
      *(uint *)((int)word_ptr + 0x14) =
           (uint)*(byte *)((int)word_ptr + 0x28) +
           (*(int *)((int)&g_data_0018b67b + *(int *)((int)word_ptr + 0x10)) >> 0x18);
      val = (uint)*(byte *)((int)word_ptr + 0x2c) +
              (*(int *)((int)&g_data_0018b67b + *(int *)((int)word_ptr + 0x10) + 1) >> 0x18);
      *(int *)((int)word_ptr + 0x18) = val;
      if ((((&g_data_001921cf)
            [(uint)(byte)(&g_slabmap_base)[(val * 0x55 + *(int *)((int)word_ptr + 0x14)) * 6] * 0x16]
            == '\x02') ||
          ((&g_data_001921cf)
           [(uint)(byte)(&g_slabmap_base)[(val * 0x55 + *(int *)((int)word_ptr + 0x14)) * 6] * 0x16]
           == '\x04')) &&
         (((&g_slabmap)
           [((&g_subtile_to_slab_lut)[*(int *)((int)word_ptr + 0x18) * 3] * 0x55 +
            (&g_subtile_to_slab_lut)[*(int *)((int)word_ptr + 0x14) * 3]) * 6] & 7) ==
          *(byte *)((int)word_ptr + 0x30))) {
        *(undefined4 *)((int)word_ptr + 8) = 0xffffffff;
        *(int *)((int)word_ptr + 0x20) = *(int *)((int)word_ptr + 0xc) + -1;
        word_ptr_2 = word_ptr;
        do {
          uval = word_ptr_2[8] & 3;
          val = (*(int *)((int)&g_data_0018b67b + uval * 2 + 1) >> 0x18) + word_ptr_2[6];
          val_2 = (*(int *)((int)&g_data_0018b67b + uval * 2) >> 0x18) + word_ptr_2[5];
          word_ptr = word_ptr_2;
          if (((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val * 0x55 + val_2) * 6] * 0x16] ==
               '\x03') &&
             (((&g_slabmap)[((&g_subtile_to_slab_lut)[val * 3] * 0x55 + (&g_subtile_to_slab_lut)[val_2 * 3]) * 6]
              & 7) == (byte)word_ptr_2[0xc])) {
            word_ptr_2[7] = val_2 + (*(int *)((int)&g_data_0018b67b + (uval + word_ptr_2[2] & 3) * 2) >> 0x18)
            ;
            uval = val + (*(int *)((int)&g_data_0018b67b + (uval + word_ptr_2[2] & 3) * 2 + 1) >> 0x18)
            ;
            word_ptr_2[9] = uval;
            if (((&g_slabmap_base)[(uval * 0x55 + word_ptr_2[7]) * 6] == '\x02') ||
               ((&g_slabmap_base)[(uval * 0x55 + word_ptr_2[7]) * 6] == '\x03')) {
              word_ptr = word_ptr_2 + -1;
              word_ptr_2[-1] = 1;
              *word_ptr_2 = (ushort)((ushort)(byte)word_ptr_2[9] * 3) & 0xff;
              word_ptr_2[1] = (ushort)((ushort)(byte)word_ptr_2[7] * 3) & 0xff;
              word_ptr_2[-2] = 0xdaa5a;
              slab_process_slabmap_tile_0d99f8();
              word_ptr_2[-2] = 0xdaa6e;
              slab_attempt_place_animating_slab_0d7688();
              word_ptr_2[-2] = 0xdaa7b;
              slab_process_slabmap_tile_0da6fc();
              word_ptr_2[-2] = 0xdaa86;
              creature_process_map_subtile_082828();
              uval = 0;
              do {
                if (uval != (byte)word_ptr_2[0xb]) {
                  word_ptr_2[-2] = 0xdaafe;
                  val = imptool_update_player_dungeon_0401aa();
                  if (-1 < val) {
                    word_ptr_2[-2] = 0xdab0b;
                    imptool_stack_pos_0400da();
                    if (uval == (byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
                      word_ptr_2[-2] = 0xdab31;
                      engine3_mark_slab_subtiles_rendered();
                    }
                  }
                }
                uval = uval + 1;
              } while ((int)uval < 3);
            }
          }
          val = *(int *)((int)word_ptr + 8);
          *(int *)((int)word_ptr + 0x20) = *(int *)((int)word_ptr + 0x20) + 2;
          *(int *)((int)word_ptr + 8) = val + 2;
          word_ptr_2 = word_ptr;
        } while (val + 2 < 2);
      }
      val = *(int *)((int)word_ptr + 0xc);
      *(int *)((int)word_ptr + 0x10) = *(int *)((int)word_ptr + 0x10) + 2;
      *(int *)((int)word_ptr + 0xc) = val + 1;
    } while (val + 1 < 4);
  }
  return;
}

/******************************************************************************
 * Function : slab_process_slabmap_tile_0dab3c (Original VA: 0xdab3c, Ghidra: FUN_000dab3c)
 * Prototype: void slab_process_slabmap_tile_0dab3c(void);
 * Address  : 0xdab3c (Size: 435 bytes)
 * Module   : slab.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> cdtest_fn_015030
 * Callees  : 3 -> slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0d9dc0, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
void slab_process_slabmap_tile_0dab3c(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  int *int_ptr;
  int *int_ptr_2;
  int val_5;
  int aiStack_38 [3];
  int local_2c [3];
  byte local_20 [4];
  byte local_1c [4];
  byte local_18 [4];
  undefined1 local_14 [4];
  
  aiStack_38[2] = 0;
  int_ptr_2 = aiStack_38 + 2;
  do {
    int_ptr_2[1] = (uint)*(byte *)(int_ptr_2 + 4) + (*(int *)((int)&g_data_0018b67b + *int_ptr_2) >> 0x18);
    val_3 = (uint)*(byte *)(int_ptr_2 + 5) + (*(int *)((int)&g_data_0018b67b + *int_ptr_2 + 1) >> 0x18);
    int_ptr_2[3] = val_3;
    *(byte *)(int_ptr_2 + 6) =
         (&g_slabmap)[((&g_subtile_to_slab_lut)[val_3 * 3] * 0x55 + (&g_subtile_to_slab_lut)[int_ptr_2[1] * 3]) * 6] &
         7;
    int_ptr = int_ptr_2;
    if (((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val_3 * 0x55 + int_ptr_2[1]) * 6] * 0x16] ==
         '\x03') && ((char)int_ptr_2[6] != (char)int_ptr_2[7])) {
      val = 0;
      val_3 = 0;
      do {
        val_4 = (*(int *)((int)&g_data_0018b67b + val + 1) >> 0x18) + int_ptr_2[3];
        val_5 = (*(int *)((int)&g_data_0018b67b + val) >> 0x18) + int_ptr_2[1];
        val_2 = val_3;
        if (((((&g_slabmap)[((&g_subtile_to_slab_lut)[val_4 * 3] * 0x55 + (&g_subtile_to_slab_lut)[val_5 * 3]) * 6]
              & 7) == *(byte *)(int_ptr_2 + 6)) &&
            (val_2 = 4,
            (&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val_5 + val_4 * 0x55) * 6] * 0x16] !=
            '\x02')) &&
           ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val_5 + val_4 * 0x55) * 6] * 0x16] !=
            '\x04')) {
          val_2 = val_3 + 1;
        }
        val = val + 2;
        val_3 = val_2;
      } while (val != 8);
      if (val_2 < 2) {
        int_ptr = int_ptr_2 + -1;
        int_ptr_2[-1] = 0;
        int_ptr_2[2] = (uint)(byte)((char)int_ptr_2[1] * '\x03' + 1);
        int_ptr_2[-2] = 0xdac1e;
        slab_process_slabmap_tile_0d9dc0();
        int_ptr_2[-2] = 0xdac2e;
        slab_attempt_place_animating_slab_0d7688();
        int_ptr_2[-2] = 0xdac37;
        slab_process_slabmap_tile_0da6fc();
      }
    }
    val_3 = *int_ptr;
    *int_ptr = val_3 + 2;
    int_ptr_2 = int_ptr;
  } while (val_3 + 2 != 8);
  return;
}

/******************************************************************************
 * Function : slab_could_find_nearby_space_0dacf0 (Original VA: 0xdacf0, Ghidra: FUN_000dacf0)
 * Prototype: undefined8 slab_could_find_nearby_space_0dacf0(void);
 * Address  : 0xdacf0 (Size: 373 bytes)
 * Module   : slab.cpp [direct_file_string_xref]
 * OrigLine : slab.cpp lines 2581
 * Purpose  : String 'Could not find a nearby space for thing C%d M%d'
 * Callers  : 1 -> slab_process_map_subtile_0dafb0
 * Callees  : 7 -> mapwho_process_map_subtile_050d3c, ceiling_process_map_subtile_07ddf8, move_process_map_subtile_0b28e8, move_process_map_subtile_0b2cb4, move_fn_0b3b10, LbErrorLog, dk_sprintf
 ******************************************************************************/
undefined8 slab_could_find_nearby_space_0dacf0(void)

{
  byte flag;
  byte flag_2;
  undefined2 uval;
  int thing;
  undefined4 uval_2;
  uint uval_3;
  undefined4 arg_edx;
  short short_val;
  int val;
  int val_2;
  char *local_28;
  int local_1c;
  
  local_28 = (char *)&g_bss_002ee9c1;
  flag = *(byte *)(thing + 0xe);
  flag_2 = *(byte *)(thing + 0x10);
  local_1c = 0;
  do {
    val = (int)local_28[1] + (uint)flag;
    val_2 = (int)*local_28 + (uint)flag_2;
    if ((((val < 0xff) && (-1 < val)) && (val_2 < 0xff)) &&
       ((-1 < val_2 && ((*(byte *)((int)&g_map_subtiles + (val_2 * 0x100 + val) * 5) & 0x10) == 0)))
       ) {
      val_2 = mapwho_process_map_subtile_050d3c();
      if (val_2 == 0) {
        short_val = (short)val * 0x100 + 0x80;
        uval = move_process_map_subtile_0b2cb4(short_val);
        val = ceiling_process_map_subtile_07ddf8(short_val,uval);
        if (val == 0) {
          uval = move_process_map_subtile_0b28e8();
          uval_2 = move_fn_0b3b10(short_val,uval);
          uval_3 = CONCAT31((int3)((uint)uval_2 >> 8),1);
          goto LAB_000dae5b;
        }
      }
    }
    local_1c = local_1c + 1;
    local_28 = local_28 + 4;
  } while (local_1c < 0x78);
  dk_sprintf(&g_log_sprintf_buf,s_Could_not_find_a_nearby_space_fo_0016c8a0,
               *(undefined1 *)(thing + 0x1f),*(undefined1 *)(thing + 0x1a)); /* thing->class_id */
  uval_3 = LbErrorLog(); /* LbErrorLog("slab.cpp", line 2581, g_log_buf) */
  uval_3 = uval_3 & 0xffffff00;
LAB_000dae5b:
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : slab_process_map_subtile_0dae68 (Original VA: 0xdae68, Ghidra: FUN_000dae68)
 * Prototype: void slab_process_map_subtile_0dae68(void);
 * Address  : 0xdae68 (Size: 310 bytes)
 * Module   : slab.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> process_players_dungeon_command_packet, room_how_room_exist_slabs_0cae40
 * Callees  : 1 -> structs_update_creature_control_072af4
 ******************************************************************************/
void slab_process_map_subtile_0dae68(void)

{
  int val;
  int thing_ptr;
  uint arg_eax;
  int val_2;
  int val_3;
  int thing_ptr_2;
  uint extraout_ECX;
  int val_4;
  int local_20;
  int local_1c;
  
  val_4 = (int)arg_eax % 0x55;
  local_20 = ((int)arg_eax / 0x55) * 3;
  val_2 = local_20 + 3;
  local_1c = ((int)arg_eax / 0x55) * 0xf00;
  if (local_20 < val_2) {
    do {
      val_3 = val_4 * 0xf + local_1c;
      val = local_1c + (val_4 * 3 + 3) * 5;
      thing_ptr_2 = val_3 - val;
      while (SBORROW4(val_3,val) != thing_ptr_2 < 0) {
        thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + val_3 + 1) & 0x3fffff) >> 0xb];
        if ((&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + val_3 + 1) & 0x3fffff) >> 0xb] !=
            g_thing_ptrs) {
          do {
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
            if (((*(ushort *)(thing_ptr_2 + 0x1d) != arg_eax) && (*(char *)(thing_ptr_2 + 0x1f) == '\x01')) && /* thing->class_id */
               ((&g_data_0018b91a)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x16] == '\x03')) {
              structs_update_creature_control_072af4();
              arg_eax = extraout_ECX;
            }
            thing_ptr_2 = thing_ptr;
          } while (thing_ptr != g_thing_ptrs);
        }
        val_3 = val_3 + 5;
        thing_ptr_2 = val_3 - val;
      }
      local_1c = local_1c + 0x500;
      local_20 = local_20 + 1;
    } while (local_20 < val_2);
  }
  return;
}

/******************************************************************************
 * Function : slab_process_map_subtile_0dafb0 (Original VA: 0xdafb0, Ghidra: FUN_000dafb0)
 * Prototype: void slab_process_map_subtile_0dafb0(void);
 * Address  : 0xdafb0 (Size: 362 bytes)
 * Module   : slab.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> slab_attempt_place_animating_slab_0d7688, slab_attempt_dump_an_animating_0d8b7c
 * Callees  : 2 -> structs_update_creature_control_072af4, slab_could_find_nearby_space_0dacf0
 ******************************************************************************/
void slab_process_map_subtile_0dafb0(void)

{
  char ch;
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int thing_ptr;
  int arg_edx;
  int val_3;
  int thing_ptr_2;
  int local_1c;
  
  local_1c = arg_edx * 3;
  val = local_1c + 3;
  if (local_1c < val) {
    do {
      val_2 = arg_eax * 0xf + local_1c * 0x500;
      val_3 = (arg_eax * 3 + 3) * 5 + local_1c * 0x500;
      thing_ptr_2 = val_2 - val_3;
      while (SBORROW4(val_2,val_3) != thing_ptr_2 < 0) {
        thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + val_2 + 1) & 0x3fffff) >> 0xb];
        if (thing_ptr_2 != g_thing_ptrs) {
          do {
            thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
            if ((uint)*(ushort *)(thing_ptr_2 + 0x1d) != arg_edx * 0x55 + arg_eax) {
              ch = *(char *)(thing_ptr_2 + 0x1f); /* thing->class_id */
              if (ch == '\x01') {
                switch((&g_data_0018b91a)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x16]) {
                case 1:
                  if ((4 < *(byte *)((int)&g_bss_0019e973 +
                                    (*(uint *)((int)&g_map_subtiles + val_2 + 1) & 0x7ff) * 0x18 + 2)
                           >> 4) && (ch = slab_could_find_nearby_space_0dacf0(), thing_ptr = extraout_ECX, ch == '\0'))
                  goto switchD_000db0e2_caseD_2;
                  break;
                case 2:
switchD_000db0e2_caseD_2:
                  structs_update_creature_control_072af4();
                  thing_ptr = extraout_ECX_00;
                }
              }
              else if ((ch == '\a') || (ch == '\x0e')) {
                structs_update_creature_control_072af4();
                thing_ptr = extraout_ECX_01;
              }
            }
            thing_ptr_2 = thing_ptr;
          } while (thing_ptr != g_thing_ptrs);
        }
        val_2 = val_2 + 5;
        thing_ptr_2 = val_2 - val_3;
      }
      local_1c = local_1c + 1;
    } while (local_1c < val);
  }
  return;
}

