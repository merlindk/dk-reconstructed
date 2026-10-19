/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: ceiling.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 20
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : ceiling_fn_07bb10 (Original VA: 0x7bb10, Ghidra: FUN_0007bb10)
 * Prototype: int ceiling_fn_07bb10(void);
 * Address  : 0x7bb10 (Size: 381 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07bb10
 * Callers  : 1 -> combchk_fn_016175
 * Callees  : 3 -> command_process_slabmap_tile_07ba98, ceiling_fn_07bc8d, bflib_system_io_fn_0e66ec
 ******************************************************************************/
int ceiling_fn_07bb10(void)

{
  undefined4 uval;
  char ch;
  undefined4 uval_2;
  short short_val;
  int arg_eax;
  uint uval_3;
  uint uval_4;
  int val;
  int val_2;
  undefined4 *arg_edx;
  int arg_ebx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  byte flag;
  int aiStack_48 [2];
  undefined1 local_40 [4];
  uint local_3c;
  undefined2 uStack_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined2 uStack_34;
  undefined2 uStack_32;
  int local_30;
  undefined4 local_2c;
  undefined2 auStack_28 [2];
  int local_24;
  uint local_20;
  undefined1 local_18;
  
  flag = 0;
  uval = *(undefined4 *)(arg_eax + 0xd);
  uStack_38 = *(undefined2 *)(arg_eax + 0x11);
  local_2c._1_1_ = (byte)((uint)uval >> 8);
  local_2c._2_2_ = (undefined2)((uint)uval >> 0x10);
  local_2c._0_1_ = (undefined1)uval;
  local_2c._0_2_ = CONCAT11((local_2c._1_1_ / 3) * '\x03' + '\x01',(undefined1)local_2c);
  uval_2 = local_2c;
  local_2c._3_1_ = (byte)((uint)uval >> 0x18);
  local_2c._0_3_ = (undefined3)uval_2;
  local_2c = CONCAT13((local_2c._3_1_ / 3) * '\x03' + '\x01',(undefined3)local_2c);
  uval_3 = (*(byte *)((int)arg_edx + 1) / 3) * 3 + 1;
  local_20 = (*(byte *)((int)arg_edx + 3) / 3) * 3 + 1;
  uStack_32 = *(undefined2 *)(arg_edx + 1);
  local_18 = (undefined1)uval_3;
  uStack_34 = (undefined2)((uint)*arg_edx >> 0x10);
  _local_36 = CONCAT11(local_18,(char)*arg_edx);
  _local_36 = CONCAT13((undefined1)local_20,_local_36);
  local_3c = local_2c;
  local_30 = 0;
  word_ptr_2 = local_40;
  auStack_28[0] = uStack_38;
  do {
    if (arg_ebx <= local_30) {
      return 0;
    }
    if (((local_2c >> 8 & 0xff) == uval_3) && (local_2c >> 0x18 == local_20)) {
      return local_30 + 1;
    }
    *(undefined4 *)(word_ptr_2 + -4) = 0x7bba7;
    uval_4 = bflib_system_io_fn_0e66ec();
    val = (int)((uval_4 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
    *(undefined4 *)(word_ptr_2 + -4) = 0x7bbd5;
    val_2 = command_process_slabmap_tile_07ba98();
    if (val_2 == 0) {
      local_24 = arg_ebx - local_30;
      word_ptr = word_ptr_2 + -4;
      *(int **)(word_ptr_2 + -4) = &local_24;
      *(undefined4 *)(word_ptr_2 + -8) = 0x7bc2b;
      short_val = ceiling_fn_07bc8d();
      if (short_val == -1) {
        return -1;
      }
      local_30 = local_30 + local_24;
      if (short_val == 1) {
        return local_30 + 1;
      }
      local_2c = local_3c;
      auStack_28[(uint)flag * -4] = (&uStack_38)[(uint)flag * -4];
    }
    else {
      ch = *(char *)((int)&g_data_0018b67b + val * 2 + 3);
      local_3c = local_2c;
      (&uStack_38)[(uint)flag * -4] = auStack_28[(uint)flag * -4];
      uval_4 = local_2c;
      local_2c._0_2_ = CONCAT11(local_2c._1_1_ + ch * '\x03',(undefined1)local_2c);
      uval = local_2c;
      local_2c._3_1_ = SUB41(uval_4,3);
      local_2c._0_3_ = (undefined3)uval;
      local_2c = CONCAT13(local_2c._3_1_ + (&g_data_0018b67f)[val * 2] * '\x03',(undefined3)local_2c)
      ;
      word_ptr = word_ptr_2;
    }
    local_30 = local_30 + 1;
    word_ptr_2 = word_ptr;
  } while( true );
}

/******************************************************************************
 * Function : ceiling_fn_07bc8d (Original VA: 0x7bc8d, Ghidra: FUN_0007bc8d)
 * Prototype: undefined4 ceiling_fn_07bc8d(void);
 * Address  : 0x7bc8d (Size: 1364 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07bc8d
 * Callers  : 1 -> ceiling_fn_07bb10
 * Callees  : 3 -> command_process_slabmap_tile_07ba98, bflib_system_io_fn_0e66ec, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 ceiling_fn_07bc8d(void)

{
  ushort uval;
  ushort uval_2;
  ushort uval_3;
  ushort uval_4;
  byte flag;
  byte flag_2;
  ushort uval_5;
  ushort uval_6;
  byte flag_3;
  short short_val;
  short short_val_2;
  int val;
  uint uval_7;
  int val_2;
  undefined4 uval_8;
  char arg_cl;
  ushort *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *int_ptr;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  char extraout_DL;
  int arg_edx;
  int arg_ebx;
  uint local_5c;
  undefined1 local_4c;
  undefined1 local_48;
  ushort local_40;
  uint local_3c;
  undefined1 local_38;
  undefined1 local_34;
  uint local_20;
  uint local_18;
  char local_14;
  char local_10;
  
  flag = *(byte *)(arg_ebx + 1);
  flag_2 = *(byte *)(arg_ebx + 3);
  uval = (ushort)*(byte *)(arg_edx + 1);
  uval_2 = (ushort)*(byte *)(arg_edx + 3);
  bflib_system_io_fn_0e69fc();
  local_20 = (byte)(arg_cl + 1) & 0xffffff03;
  bflib_system_io_fn_0e69fc();
  val = bflib_system_io_fn_0e69fc();
  local_3c = val - 1;
  local_5c = (byte)(extraout_DL + 3) & 0xffffff03;
  uval_3 = (ushort)*(byte *)(arg_edx + 1);
  flag_3 = *(byte *)(arg_edx + 3);
  bflib_system_io_fn_0e69fc();
  uval_4 = (ushort)flag_3;
  local_10 = '\0';
  bflib_system_io_fn_0e69fc();
  val = bflib_system_io_fn_0e69fc();
  local_18 = val - 1;
  uval_5 = *extraout_ECX;
  local_14 = '\0';
  while( true ) {
    local_38 = (undefined1)uval_3;
    local_48 = (undefined1)uval_4;
    local_4c = (undefined1)uval;
    local_34 = (undefined1)uval_2;
    if ((uval_5 == 0) || ((local_10 == '\x02' && (local_14 == '\x02')))) break;
    if (local_10 != '\x02') {
      uval_7 = bflib_system_io_fn_0e66ec();
      bflib_system_io_fn_0e69fc();
      bflib_system_io_fn_0e69fc();
      val = bflib_system_io_fn_0e69fc();
      int_ptr = extraout_ECX_00;
      if ((int)(local_3c & 0xffff) < val) {
LAB_0007beb8:
        if (local_10 == '\x01') {
          *(undefined1 *)(arg_edx + 1) = local_4c;
          local_48 = local_34;
          goto LAB_0007c1d0;
        }
        flag_3 = (char)local_20 + 3;
        uval_6 = 0;
        while( true ) {
          uval_7 = flag_3 & 0xffffff03;
          if (3 < uval_6) break;
          val = (flag_3 & 0xff03) * 2;
          val_2 = command_process_slabmap_tile_07ba98();
          int_ptr = extraout_ECX_03;
          if (val_2 != 0) {
            uval = uval + *(char *)((int)&g_data_0018b67b + val + 3) * 3;
            uval_2 = uval_2 + (char)(&g_data_0018b67f)[val] * 3;
            local_20 = uval_7;
            break;
          }
          flag_3 = (char)uval_7 + 1;
          uval_6 = uval_6 + 1;
        }
      }
      else {
        val = ((int)((uval_7 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9) * 2;
        val_2 = command_process_slabmap_tile_07ba98();
        int_ptr = extraout_ECX_01;
        if (val_2 == 0) goto LAB_0007beb8;
        uval = uval + *(char *)((int)&g_data_0018b67b + val + 3) * 3;
        uval_2 = uval_2 + (char)(&g_data_0018b67f)[val] * 3;
        bflib_system_io_fn_0e69fc();
        bflib_system_io_fn_0e69fc();
        local_3c = bflib_system_io_fn_0e69fc();
        local_10 = '\x01';
        int_ptr = extraout_ECX_02;
      }
      if ((uval == flag) && (uval_2 == flag_2)) goto LAB_0007bf6c;
    }
    if (local_14 != '\x02') {
      uval_7 = bflib_system_io_fn_0e66ec();
      bflib_system_io_fn_0e69fc();
      bflib_system_io_fn_0e69fc();
      val = bflib_system_io_fn_0e69fc();
      int_ptr = extraout_ECX_04;
      if ((int)(local_18 & 0xffff) < val) {
LAB_0007c0a2:
        if (local_14 == '\x01') {
          *(undefined1 *)(arg_edx + 1) = local_38;
          goto LAB_0007c1d0;
        }
        flag_3 = (char)local_5c + 1;
        uval_6 = 0;
        while( true ) {
          uval_7 = flag_3 & 0xffffff03;
          if (3 < uval_6) break;
          val = (flag_3 & 0xff03) * 2;
          val_2 = command_process_slabmap_tile_07ba98();
          int_ptr = extraout_ECX_07;
          if (val_2 != 0) {
            uval_3 = uval_3 + *(char *)((int)&g_data_0018b67b + val + 3) * 3;
            uval_4 = uval_4 + (char)(&g_data_0018b67f)[val] * 3;
            local_5c = uval_7;
            break;
          }
          flag_3 = (char)uval_7 + 3;
          uval_6 = uval_6 + 1;
        }
      }
      else {
        val = ((int)((uval_7 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9) * 2;
        val_2 = command_process_slabmap_tile_07ba98();
        int_ptr = extraout_ECX_05;
        if (val_2 == 0) goto LAB_0007c0a2;
        uval_3 = uval_3 + *(char *)((int)&g_data_0018b67b + val + 3) * 3;
        uval_4 = uval_4 + (char)(&g_data_0018b67f)[val] * 3;
        bflib_system_io_fn_0e69fc();
        bflib_system_io_fn_0e69fc();
        local_18 = bflib_system_io_fn_0e69fc();
        local_14 = '\x01';
        int_ptr = extraout_ECX_06;
      }
      if ((uval_3 == flag) && (uval_4 == flag_2)) {
LAB_0007bf6c:
        *int_ptr = *int_ptr - (uint)uval_5;
        return 1;
      }
    }
    uval_5 = uval_5 - 1;
  }
  if (uval_5 == 0) {
    uval_8 = 0xffffffff;
  }
  else {
    short_val = bflib_system_io_fn_0e69fc();
    short_val_2 = bflib_system_io_fn_0e69fc();
    local_40 = short_val + short_val_2;
    short_val = bflib_system_io_fn_0e69fc();
    short_val_2 = bflib_system_io_fn_0e69fc();
    int_ptr = extraout_ECX_08;
    if ((ushort)(short_val + short_val_2) < local_40) {
      *(undefined1 *)(arg_edx + 1) = local_38;
    }
    else {
      *(undefined1 *)(arg_edx + 1) = local_4c;
      local_48 = local_34;
    }
LAB_0007c1d0:
    *(undefined1 *)(arg_edx + 3) = local_48;
    *int_ptr = *int_ptr - (uint)uval_5;
    uval_8 = 0;
  }
  return uval_8;
}

/******************************************************************************
 * Function : ceiling_illegal_ceiling_step_value_07c1f0 (Original VA: 0x7c1f0, Ghidra: FUN_0007c1f0)
 * Prototype: undefined4 ceiling_illegal_ceiling_step_value_07c1f0(void);
 * Address  : 0x7c1f0 (Size: 190 bytes)
 * Module   : ceiling.cpp [direct_file_string_xref]
 * OrigLine : ceiling.cpp lines 46, 50, 58
 * Purpose  : String 'Illegal ceiling step value'
 * Callers  : 2 -> compturn_fn_0225c0, setup_load_core_game_data
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 ceiling_illegal_ceiling_step_value_07c1f0(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  
  if (0 < arg_ebx) {
    if (0xf < arg_eax) {
      LbErrorLog(); /* LbErrorLog("ceiling.cpp", line 46, "Max height is too high") */
      return 0;
    }
    if (arg_eax < arg_edx) {
      LbErrorLog(); /* LbErrorLog("ceiling.cpp", line 50, "Ceiling max height is smaller than min height") */
      return 0;
    }
    g_bss_002e78b8 = (arg_eax - arg_edx) / arg_ebx;
    if (0x9c3 < g_bss_002e78b8) {
      g_bss_002e78b8 = 0x9c4;
    }
    if (g_bss_002e78b8 < 0x15) {
      val = g_bss_002e78b8 * 2 + 1;
      g_bss_002e78b0 = arg_eax;
      g_bss_002e78b4 = arg_edx;
      g_bss_002e78c0 = arg_ebx;
      g_bss_002e78bc = val * val;
      return 1;
    }
  }
  LbErrorLog(); /* LbErrorLog("ceiling.cpp", line 58, "Ceiling search distance too big") */
  return 0;
}

/******************************************************************************
 * Function : ceiling_process_map_subtile_07c3c8 (Original VA: 0x7c3c8, Ghidra: FUN_0007c3c8)
 * Prototype: undefined4 ceiling_process_map_subtile_07c3c8(void);
 * Address  : 0x7c3c8 (Size: 455 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> file_fn_02a25c
 * Callees  : 2 -> ceiling_fn_07caf0, ceiling_process_map_subtile_07cd3c
 ******************************************************************************/
undefined4 ceiling_process_map_subtile_07c3c8(void)

{
  bool flag;
  int *int_ptr;
  uint uval;
  int val;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  char *str_ptr;
  int local_44;
  uint local_40;
  int local_3c;
  uint *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_3c = 0;
  do {
    local_24 = local_3c * 0x100;
    local_2c = local_3c * 0x500;
    local_30 = 0;
    do {
      local_28 = (uint *)((int)&g_map_subtiles + local_2c + 1);
      val = (int)((local_24 + (local_24 >> 0x1f) * -0x100) - (uint)((local_24 >> 0x1f) << 7 < 0))
              >> 8;
      local_40 = ceiling_process_map_subtile_07cd3c();
      uval_2 = local_40;
      if (0x7fffffff < local_40) {
        local_20 = local_24;
        val_2 = 0;
        str_ptr = (char *)&g_bss_002ee9c1;
        local_38 = &local_40;
        local_34 = &local_44;
        int_ptr = &local_44;
        local_1c = val;
        local_18 = extraout_ECX_00;
        if (0 < g_bss_002e78bc) {
          do {
            val = *str_ptr + local_1c;
            if ((((-1 < str_ptr[1] + local_18) && (str_ptr[1] + local_18 < 0x100)) && (-1 < val)) &&
               ((val < 0x100 && (uval_2 = ceiling_process_map_subtile_07cd3c(), -1 < (int)uval_2)))) {
              *local_38 = uval_2;
              uval = local_18 - extraout_ECX;
              uval_2 = local_1c - val;
              if ((int)((uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f)) <
                  (int)((uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f))) {
                uval_2 = uval;
              }
              *local_34 = (uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f);
              flag = true;
              goto LAB_0007c568;
            }
            val_2 = val_2 + 1;
            str_ptr = str_ptr + 4;
            int_ptr = local_34;
          } while (val_2 < g_bss_002e78bc);
        }
        local_34 = int_ptr;
        flag = false;
LAB_0007c568:
        uval_2 = g_bss_002e78b0;
        if (flag) {
          uval_2 = ceiling_fn_07caf0();
        }
      }
      local_30 = local_30 + 1;
      *(byte *)((int)local_28 + 3) = *(byte *)((int)local_28 + 3) & 0xf0;
      local_24 = local_24 + 1;
      local_2c = local_2c + 5;
      *local_28 = *local_28 | (uval_2 & 0xf) << 0x18;
    } while (local_30 < 0xff);
    local_3c = local_3c + 1;
    if (0xfe < local_3c) {
      return 1;
    }
  } while( true );
}

/******************************************************************************
 * Function : ceiling_process_map_subtile_07c590 (Original VA: 0x7c590, Ghidra: FUN_0007c590)
 * Prototype: undefined4 ceiling_process_map_subtile_07c590(void);
 * Address  : 0x7c590 (Size: 736 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> build_fn_014a68, compturn_process_map_subtile_022660, inits_told_you_so_create_0449a4
 * Callees  : 2 -> ceiling_fn_07caf0, ceiling_process_map_subtile_07cd3c
 ******************************************************************************/
undefined4 ceiling_process_map_subtile_07c590(void)

{
  uint *word_ptr;
  char ch;
  bool flag;
  undefined1 uval;
  int arg_eax;
  int val;
  uint uval_2;
  int *int_ptr;
  int arg_ecx;
  int extraout_ECX;
  int val_2;
  int arg_edx;
  int arg_ebx;
  int val_3;
  int val_4;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_4c = g_bss_002e78b8;
  if (4 < g_bss_002e78b8) {
    local_4c = 4;
  }
  local_34 = arg_eax - local_4c;
  if (local_34 < 1) {
    local_34 = 0;
  }
  local_48 = arg_edx - local_4c;
  if (local_48 < 1) {
    local_48 = 0;
  }
  local_2c = arg_ebx + local_4c;
  if (0xff < local_2c) {
    local_2c = 0x100;
  }
  local_4c = local_4c + arg_ecx;
  if (0xff < local_4c) {
    local_4c = 0x100;
  }
  g_bss_00377760 = g_scratch_work_buf;
  local_38 = local_34 - g_bss_002e78b8;
  if (local_38 < 1) {
    local_38 = 0;
  }
  val = local_48 - g_bss_002e78b8;
  if (val < 1) {
    val = 0;
  }
  val_4 = local_2c + g_bss_002e78b8;
  if (0xff < val_4) {
    val_4 = 0x100;
  }
  local_44 = g_bss_002e78b8 + local_4c;
  if (0xff < local_44) {
    local_44 = 0x100;
  }
  if (val < local_44) {
    local_3c = val << 8;
    val_2 = local_38;
    do {
      for (; val_2 < val_4; val_2 = val_2 + 1) {
        uval = ceiling_process_map_subtile_07cd3c();
        *(undefined1 *)(extraout_ECX + g_bss_00377760) = uval;
      }
      local_3c = local_3c + 0x100;
      val = val + 1;
      val_2 = local_38;
    } while (val < local_44);
  }
  if (local_48 < local_4c) {
    local_30 = local_48 << 8;
    local_40 = local_4c << 8;
    do {
      local_24 = local_34;
      local_1c = local_34 + local_30;
      if (local_34 < local_2c) {
        local_20 = local_1c * 5;
        do {
          val = local_20;
          word_ptr = (uint *)((int)&g_map_subtiles + local_20 + 1);
          uval_2 = (uint)*(char *)(g_bss_00377760 + local_1c);
          if (0x7fffffff < uval_2) {
            local_28 = &local_50;
            local_18 = local_1c;
            local_10 = local_1c % 0x100;
            local_14 = local_1c / 0x100;
            val_4 = 0;
            int_ptr = &g_bss_002ee9c1;
            if (0 < g_bss_002e78bc) {
              do {
                val_2 = *(char *)((int)int_ptr + 1) + local_10;
                val_3 = (char)*int_ptr + local_14;
                if ((((-1 < val_2) && (val_2 < 0x100)) && (-1 < val_3)) &&
                   ((val_3 < 0x100 &&
                    (ch = *(char *)(g_bss_00377760 + (*int_ptr >> 0x10) + local_1c),
                    local_50 = (uint)ch, -1 < ch)))) {
                  flag = true;
                  goto LAB_0007c807;
                }
                val_4 = val_4 + 1;
                int_ptr = int_ptr + 1;
              } while (val_4 < g_bss_002e78bc);
            }
            flag = false;
            local_50 = uval_2;
LAB_0007c807:
            uval_2 = g_bss_002e78b0;
            if (flag) {
              uval_2 = ceiling_fn_07caf0();
            }
          }
          local_20 = local_20 + 5;
          local_1c = local_1c + 1;
          (&g_bss_00279207)[val] = (&g_bss_00279207)[val] & 0xf0;
          local_24 = local_24 + 1;
          *word_ptr = *word_ptr | (uval_2 & 0xf) << 0x18;
        } while (local_24 < local_2c);
      }
      local_30 = local_30 + 0x100;
    } while (local_30 < local_40);
  }
  return 1;
}

/******************************************************************************
 * Function : ceiling_fn_07c870 (Original VA: 0x7c870, Ghidra: FUN_0007c870)
 * Prototype: undefined8 ceiling_fn_07c870(void);
 * Address  : 0x7c870 (Size: 295 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07c870
 * Callers  : 0 -> 
 * Callees  : 2 -> ceiling_fn_07caf0, ceiling_process_map_subtile_07cd3c
 ******************************************************************************/
undefined8 ceiling_fn_07c870(void)

{
  bool flag;
  int *int_ptr;
  int arg_eax;
  int val;
  uint uval;
  char *str_ptr;
  char *extraout_ECX;
  uint uval_2;
  undefined4 arg_edx;
  int val_2;
  int val_3;
  int local_34;
  uint local_30;
  int *local_2c;
  uint *local_28;
  int local_20;
  int local_1c;
  
  val = (int)((arg_eax + (arg_eax >> 0x1f) * -0x100) - (uint)((arg_eax >> 0x1f) << 7 < 0)) >> 8;
  local_30 = ceiling_process_map_subtile_07cd3c();
  uval = local_30;
  if (0x7fffffff < local_30) {
    val_2 = 0;
    local_28 = &local_30;
    str_ptr = (char *)&g_bss_002ee9c1;
    local_2c = &local_34;
    int_ptr = &local_34;
    local_20 = arg_eax % 0x100;
    local_1c = val;
    if (0 < g_bss_002e78bc) {
      do {
        val = str_ptr[1] + local_20;
        val_3 = *str_ptr + local_1c;
        if ((((-1 < val) && (val < 0x100)) && (-1 < val_3)) &&
           ((val_3 < 0x100 && (uval = ceiling_process_map_subtile_07cd3c(), str_ptr = extraout_ECX, -1 < (int)uval)))) {
          *local_28 = uval;
          uval_2 = local_20 - val;
          uval = local_1c - val_3;
          if ((int)((uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f)) <
              (int)((uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f))) {
            uval = uval_2;
          }
          *local_2c = (uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f);
          flag = true;
          goto LAB_0007c976;
        }
        val_2 = val_2 + 1;
        str_ptr = str_ptr + 4;
        int_ptr = local_2c;
      } while (val_2 < g_bss_002e78bc);
    }
    local_2c = int_ptr;
    flag = false;
LAB_0007c976:
    uval = g_bss_002e78b0;
    if (flag) {
      uval = ceiling_fn_07caf0();
    }
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : ceiling_fn_07c998 (Original VA: 0x7c998, Ghidra: FUN_0007c998)
 * Prototype: undefined8 ceiling_fn_07c998(void);
 * Address  : 0x7c998 (Size: 281 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07c998
 * Callers  : 0 -> 
 * Callees  : 1 -> ceiling_fn_07caf0
 ******************************************************************************/
undefined8 ceiling_fn_07c998(void)

{
  bool flag;
  int arg_eax;
  uint uval;
  int *int_ptr;
  uint uval_2;
  int val;
  undefined4 arg_edx;
  int val_2;
  int val_3;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_20;
  int local_1c;
  
  uval = (uint)*(char *)(arg_eax + g_bss_00377760);
  if (0x7fffffff < uval) {
    local_1c = arg_eax % 0x100;
    local_20 = arg_eax / 0x100;
    val_2 = 0;
    int_ptr = &g_bss_002ee9c1;
    if (0 < g_bss_002e78bc) {
      do {
        val = *(char *)((int)int_ptr + 1) + local_1c;
        val_3 = (char)*int_ptr + local_20;
        if ((((-1 < val) && (val < 0x100)) && (-1 < val_3)) &&
           ((val_3 < 0x100 &&
            (local_2c = (uint)*(char *)(g_bss_00377760 + (*int_ptr >> 0x10) + arg_eax),
            -1 < (int)local_2c)))) {
          uval_2 = local_1c - val;
          uval = local_20 - val_3;
          if ((int)((uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f)) <
              (int)((uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f))) {
            uval = uval_2;
          }
          local_30 = (uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f);
          flag = true;
          goto LAB_0007ca90;
        }
        val_2 = val_2 + 1;
        int_ptr = int_ptr + 1;
      } while (val_2 < g_bss_002e78bc);
    }
    flag = false;
    local_2c = uval;
LAB_0007ca90:
    local_28 = &local_30;
    uval = g_bss_002e78b0;
    if (flag) {
      uval = ceiling_fn_07caf0();
    }
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : ceiling_fn_07caf0 (Original VA: 0x7caf0, Ghidra: FUN_0007caf0)
 * Prototype: int ceiling_fn_07caf0(void);
 * Address  : 0x7caf0 (Size: 49 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07caf0
 * Callers  : 4 -> ceiling_process_map_subtile_07c3c8, ceiling_process_map_subtile_07c590, ceiling_fn_07c870, ceiling_fn_07c998
 * Callees  : 0 -> 
 ******************************************************************************/
int ceiling_fn_07caf0(void)

{
  int arg_eax;
  int arg_edx;
  
  if (arg_eax < g_bss_002e78b0) {
    arg_eax = arg_eax + arg_edx * g_bss_002e78c0;
    if (g_bss_002e78b0 <= arg_eax) {
      return g_bss_002e78b0;
    }
  }
  else if (g_bss_002e78b0 < arg_eax) {
    arg_eax = arg_eax - arg_edx * g_bss_002e78c0;
    if (arg_eax <= g_bss_002e78b4) {
      arg_eax = g_bss_002e78b4;
    }
  }
  return arg_eax;
}

/******************************************************************************
 * Function : ceiling_process_map_subtile_07cd3c (Original VA: 0x7cd3c, Ghidra: FUN_0007cd3c)
 * Prototype: uint ceiling_process_map_subtile_07cd3c(void);
 * Address  : 0x7cd3c (Size: 781 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> ceiling_process_map_subtile_07c3c8, ceiling_process_map_subtile_07c590, ceiling_fn_07c870
 * Callees  : 1 -> column_fn_0157e4
 ******************************************************************************/
uint ceiling_process_map_subtile_07cd3c(void)

{
  byte flag;
  int val;
  bool flag_2;
  int arg_eax;
  uint uval;
  int arg_edx;
  int arg_ebx;
  
  if ((*(byte *)((int)&g_map_subtiles + arg_eax * 5) & 0x10) == 0) {
    if ((*(byte *)((int)&g_bss_0019e973 +
                  (*(uint *)((int)&g_map_subtiles + arg_eax * 5 + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
    {
      flag_2 = false;
    }
    else {
      flag_2 = true;
    }
  }
  else {
    flag_2 = true;
  }
  if (flag_2) {
    flag = *(byte *)((int)&g_bss_0019e973 +
                     (*(uint *)((int)&g_map_subtiles + arg_eax * 5 + 1) & 0x7ff) * 0x18 + 2);
    if ((flag & 0xe) == 0) {
      uval = (uint)(flag >> 4);
    }
    else {
      uval = column_fn_0157e4();
    }
  }
  else {
    if (arg_edx < 1) {
      if (0 < arg_ebx) {
        val = (arg_eax + -0x100) * 5;
        if ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0) {
          if ((*(byte *)((int)&g_bss_0019e973 +
                        (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
          {
            flag_2 = false;
          }
          else {
            flag_2 = true;
          }
        }
        else {
          flag_2 = true;
        }
        if (flag_2) {
          flag = *(byte *)((int)&g_bss_0019e973 +
                           (*(uint *)((int)&g_map_subtiles + (arg_eax + -0x100) * 5 + 1) & 0x7ff) *
                           0x18 + 2);
          if ((flag & 0xe) != 0) {
            uval = column_fn_0157e4();
            return uval;
          }
          return (uint)(flag >> 4);
        }
      }
    }
    else {
      val = (arg_eax + -1) * 5;
      if ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0) {
        if ((*(byte *)((int)&g_bss_0019e973 +
                      (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0) {
          flag_2 = false;
        }
        else {
          flag_2 = true;
        }
      }
      else {
        flag_2 = true;
      }
      if (flag_2) {
        flag = *(byte *)((int)&g_bss_0019e973 +
                         (*(uint *)((int)&g_map_subtiles + (arg_eax + -1) * 5 + 1) & 0x7ff) * 0x18 + 2)
        ;
        if ((flag & 0xe) != 0) {
          uval = column_fn_0157e4();
          return uval;
        }
        return (uint)(flag >> 4);
      }
      if (0 < arg_ebx) {
        val = (arg_eax + -0x100) * 5;
        if ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0) {
          if ((*(byte *)((int)&g_bss_0019e973 +
                        (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
          {
            flag_2 = false;
          }
          else {
            flag_2 = true;
          }
        }
        else {
          flag_2 = true;
        }
        if (flag_2) {
          flag = *(byte *)((int)&g_bss_0019e973 +
                           (*(uint *)((int)&g_map_subtiles + (arg_eax + -0x100) * 5 + 1) & 0x7ff) *
                           0x18 + 2);
          if ((flag & 0xe) != 0) {
            uval = column_fn_0157e4();
            return uval;
          }
          return (uint)(flag >> 4);
        }
        val = (arg_eax + -0x101) * 5;
        if ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0) {
          if ((*(byte *)((int)&g_bss_0019e973 +
                        (*(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff) * 0x18 + 2) & 0xe) == 0)
          {
            flag_2 = false;
          }
          else {
            flag_2 = true;
          }
        }
        else {
          flag_2 = true;
        }
        if (flag_2) {
          flag = *(byte *)((int)&g_bss_0019e973 +
                           (*(uint *)((int)&g_map_subtiles + (arg_eax + -0x101) * 5 + 1) & 0x7ff) *
                           0x18 + 2);
          if ((flag & 0xe) != 0) {
            uval = column_fn_0157e4();
            return uval;
          }
          return (uint)(flag >> 4);
        }
      }
    }
    uval = 0xffffffff;
  }
  return uval;
}

/******************************************************************************
 * Function : ceiling_process_thing_entity_07d100 (Original VA: 0x7d100, Ghidra: FUN_0007d100)
 * Prototype: byte * ceiling_process_thing_entity_07d100(void);
 * Address  : 0x7d100 (Size: 755 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> food_process_dungeon_room_0ab8dc
 * Callees  : 0 -> 
 ******************************************************************************/
byte * ceiling_process_thing_entity_07d100(void)

{
  byte *thing_ptr;
  int arg_eax;
  int val;
  int val_2;
  ushort arg_cx;
  int arg_edx;
  uint uval;
  uint uval_2;
  uint uval_3;
  short arg_bx;
  int val_3;
  byte *byte_ptr;
  int local_24;
  int local_20;
  int local_1c;
  
  val_3 = 0x7fffffff;
  byte_ptr = (byte *)0x0;
  if ((arg_bx == 5) && (arg_cx == 0xffff)) {
    for (thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6]; g_thing_ptrs < thing_ptr;
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)]) {
      if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) &&
         (uval = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
         uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
         val = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                 ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval), val < val_3)) { /* thing->mappos.val_x */
        val_3 = val;
        byte_ptr = thing_ptr;
      }
    }
  }
  else if ((arg_bx == -1) && (arg_cx == 0xffff)) {
    val = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + val);
      if ((((*thing_ptr & 1) != 0) && ((*thing_ptr & 0x10) == 0)) &&
         (((thing_ptr[1] & 2) == 0 &&
          (uval = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
          uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
          val_2 = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                  ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval), val_2 < val_3)))) { /* thing->mappos.val_x */
        val_3 = val_2;
        byte_ptr = thing_ptr;
      }
      val = val + 4;
    } while (val != 0x2000);
  }
  else {
    uval = (uint)arg_bx;
    if (uval == 0xffffffff) {
      local_24 = 4;
      do {
        thing_ptr = *(byte **)((int)&g_thing_ptrs + local_24);
        if (((((*thing_ptr & 1) != 0) && (thing_ptr[0x1a] == arg_cx)) && ((*thing_ptr & 0x10) == 0)) &&
           (((thing_ptr[1] & 2) == 0 &&
            (uval = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
            uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
            val = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                    ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval), val < val_3)))) /* thing->mappos.val_x */
        {
          val_3 = val;
          byte_ptr = thing_ptr;
        }
        local_24 = local_24 + 4;
      } while (local_24 != 0x2000);
    }
    else if (arg_cx == 0xffff) {
      local_1c = 4;
      do {
        thing_ptr = *(byte **)((int)&g_thing_ptrs + local_1c);
        if ((((*thing_ptr & 1) != 0) && (thing_ptr[0x1f] == uval)) &&
           (((*thing_ptr & 0x10) == 0 &&
            (((thing_ptr[1] & 2) == 0 &&
             (uval_2 = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
             uval_3 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
             val = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_3) - uval_3) + /* thing->mappos.val_y */
                     ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval_2) - uval_2), val < val_3)))) /* thing->mappos.val_x */
           )) {
          val_3 = val;
          byte_ptr = thing_ptr;
        }
        local_1c = local_1c + 4;
      } while (local_1c != 0x2000);
    }
    else {
      local_20 = 4;
      do {
        thing_ptr = *(byte **)((int)&g_thing_ptrs + local_20);
        if (((((*thing_ptr & 1) != 0) && (thing_ptr[0x1a] == arg_cx)) &&
            (CONCAT31((int3)(char)(arg_cx >> 8),thing_ptr[0x1f]) == uval)) &&
           ((((*thing_ptr & 0x10) == 0 && ((thing_ptr[1] & 2) == 0)) &&
            (uval_2 = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
            uval_3 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
            val = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_3) - uval_3) + /* thing->mappos.val_y */
                    ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval_2) - uval_2), val < val_3)))) /* thing->mappos.val_x */
        {
          val_3 = val;
          byte_ptr = thing_ptr;
        }
        local_20 = local_20 + 4;
      } while (local_20 != 0x2000);
    }
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : ceiling_process_thing_entity_07d3f4 (Original VA: 0x7d3f4, Ghidra: FUN_0007d3f4)
 * Prototype: byte * ceiling_process_thing_entity_07d3f4(void);
 * Address  : 0x7d3f4 (Size: 638 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * ceiling_process_thing_entity_07d3f4(void)

{
  byte *thing_ptr;
  byte *arg_eax;
  int val;
  int val_2;
  ushort arg_cx;
  int val_3;
  int arg_edx;
  uint uval;
  uint uval_2;
  uint uval_3;
  int arg_ebx;
  byte *byte_ptr;
  int in_stack_00000002;
  int local_28;
  int local_20;
  int local_18;
  
  val_3 = 0x7fffffff;
  byte_ptr = (byte *)0x0;
  uval = in_stack_00000002 >> 0x10;
  if ((arg_cx == 0xffff) && (uval == 0xffffffff)) {
    local_20 = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + local_20);
      if ((((*thing_ptr & 1) != 0) && ((*thing_ptr & 0x10) == 0)) &&
         (((thing_ptr[1] & 2) == 0 && (thing_ptr != arg_eax)))) {
        uval = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f; /* thing->mappos.val_x */
        uval_2 = (int)(arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f; /* thing->mappos.val_y */
        val = ((arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval); /* thing->mappos.val_x */
        if (val < val_3) {
          val_3 = val;
          byte_ptr = thing_ptr;
        }
      }
      local_20 = local_20 + 4;
    } while (local_20 != 0x2000);
  }
  else if (arg_cx == 0xffff) {
    local_28 = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + local_28);
      if (((((*thing_ptr & 1) != 0) && (thing_ptr[0x1a] == uval)) && ((*thing_ptr & 0x10) == 0)) &&
         (((thing_ptr[1] & 2) == 0 && (thing_ptr != arg_eax)))) {
        uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f; /* thing->mappos.val_x */
        uval_3 = (int)(arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f; /* thing->mappos.val_y */
        val = ((arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_3) - uval_3) + /* thing->mappos.val_y */
                ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval_2) - uval_2); /* thing->mappos.val_x */
        if (val < val_3) {
          val_3 = val;
          byte_ptr = thing_ptr;
        }
      }
      local_28 = local_28 + 4;
    } while (local_28 != 0x2000);
  }
  else if (uval == 0xffffffff) {
    val = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + val);
      if ((((*thing_ptr & 1) != 0) && (thing_ptr[0x1f] == arg_cx)) &&
         (((*thing_ptr & 0x10) == 0 && (((thing_ptr[1] & 2) == 0 && (thing_ptr != arg_eax)))))) {
        uval = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f; /* thing->mappos.val_x */
        uval_2 = (int)(arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f; /* thing->mappos.val_y */
        val_2 = ((arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval); /* thing->mappos.val_x */
        if (val_2 < val_3) {
          val_3 = val_2;
          byte_ptr = thing_ptr;
        }
      }
      val = val + 4;
    } while (val != 0x2000);
  }
  else {
    local_18 = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + local_18);
      if ((*thing_ptr & 1) != 0) {
        if ((((thing_ptr[0x1a] == uval) &&
             (CONCAT31((int3)(char)((uint)in_stack_00000002 >> 0x18),thing_ptr[0x1f]) ==
              (int)(short)arg_cx)) && ((*thing_ptr & 0x10) == 0)) &&
           (((thing_ptr[1] & 2) == 0 && (thing_ptr != arg_eax)))) {
          uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f; /* thing->mappos.val_x */
          uval_3 = (int)(arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f; /* thing->mappos.val_y */
          val = ((arg_ebx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_3) - uval_3) + /* thing->mappos.val_y */
                  ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval_2) - uval_2); /* thing->mappos.val_x */
          if (val < val_3) {
            val_3 = val;
            byte_ptr = thing_ptr;
          }
        }
      }
      local_18 = local_18 + 4;
    } while (local_18 != 0x2000);
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : ceiling_roll_action_random_07d674 (Original VA: 0x7d674, Ghidra: FUN_0007d674)
 * Prototype: int ceiling_roll_action_random_07d674(void);
 * Address  : 0x7d674 (Size: 212 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> angtool_process_dungeon_room_010f6c
 * Callees  : 2 -> mapwho_process_map_subtile_05131e, creature_fn_0827fc
 ******************************************************************************/
int ceiling_roll_action_random_07d674(void)

{
  char ch;
  int val;
  int arg_edx;
  uint rand_seed;
  int val_2;
  int local_20;
  
  local_20 = 0;
  rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
  rand_seed = g_action_random_seed % (uint)*(ushort *)(arg_edx + 0x3b);
  val_2 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(arg_edx + 0x3b) <= val_2) {
      return local_20;
    }
    val = mapwho_process_map_subtile_05131e();
    if (((val != 0) && (ch = creature_fn_0827fc(), ch != '\0')) &&
       (rand_seed = rand_seed - 1, local_20 = val, rand_seed == 0)) break;
    val_2 = val_2 + 1;
  }
  return val;
}

/******************************************************************************
 * Function : ceiling_fn_07d748 (Original VA: 0x7d748, Ghidra: FUN_0007d748)
 * Prototype: byte * ceiling_fn_07d748(void);
 * Address  : 0x7d748 (Size: 120 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07d748
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * ceiling_fn_07d748(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  uint uval;
  uint uval_2;
  byte *byte_ptr;
  int val_2;
  byte *byte_ptr_2;
  
  val_2 = 0x7fffffff;
  byte_ptr_2 = (byte *)0x0;
  byte_ptr = &g_bss_002eb40b;
  do {
    if (((*byte_ptr & 1) != 0) &&
       (uval = (int)(arg_eax - (uint)*(ushort *)(byte_ptr + 1)) >> 0x1f,
       uval_2 = (int)(arg_edx - (uint)*(ushort *)(byte_ptr + 3)) >> 0x1f,
       val = ((arg_edx - (uint)*(ushort *)(byte_ptr + 3) ^ uval_2) - uval_2) +
               ((arg_eax - (uint)*(ushort *)(byte_ptr + 1) ^ uval) - uval), val < val_2)) {
      val_2 = val;
      byte_ptr_2 = byte_ptr;
    }
    byte_ptr = byte_ptr + 10;
  } while (byte_ptr != &g_network_game_active);
  return byte_ptr_2;
}

/******************************************************************************
 * Function : ceiling_process_thing_entity_07d7c0 (Original VA: 0x7d7c0, Ghidra: FUN_0007d7c0)
 * Prototype: byte * ceiling_process_thing_entity_07d7c0(int param_1);
 * Address  : 0x7d7c0 (Size: 598 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
byte * ceiling_process_thing_entity_07d7c0(int param_1)

{
  byte *thing_ptr;
  int arg_eax;
  int val;
  int val_2;
  ushort arg_cx;
  int arg_edx;
  uint uval;
  uint uval_2;
  short arg_bx;
  int val_3;
  byte *byte_ptr;
  int local_24;
  int local_20;
  int local_1c;
  
  val_3 = 0x7fffffff;
  byte_ptr = (byte *)0x0;
  if ((arg_bx == -1) && (arg_cx == 0xffff)) {
    local_24 = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + local_24);
      if (((*thing_ptr & 1) != 0) &&
         (uval = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
         uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
         val = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                 ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval), val < val_3)) { /* thing->mappos.val_x */
        val_3 = val;
        byte_ptr = thing_ptr;
      }
      local_24 = local_24 + 4;
    } while (local_24 != 0x2000);
  }
  else if (arg_bx == -1) {
    val = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + val);
      if ((((*thing_ptr & 1) != 0) && (thing_ptr[0x1a] == arg_cx)) &&
         (uval = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
         uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
         val_2 = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                 ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval), val_2 < val_3)) { /* thing->mappos.val_x */
        val_3 = val_2;
        byte_ptr = thing_ptr;
      }
      val = val + 4;
    } while (val != 0x2000);
  }
  else if (arg_cx == 0xffff) {
    local_20 = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + local_20);
      if ((((*thing_ptr & 1) != 0) && ((uint)thing_ptr[0x1f] == (int)arg_bx)) &&
         (uval = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
         uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
         val = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                 ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval), val < val_3)) { /* thing->mappos.val_x */
        val_3 = val;
        byte_ptr = thing_ptr;
      }
      local_20 = local_20 + 4;
    } while (local_20 != 0x2000);
  }
  else {
    local_1c = 4;
    do {
      thing_ptr = *(byte **)((int)&g_thing_ptrs + local_1c);
      if (((((*thing_ptr & 1) != 0) && (thing_ptr[0x1a] == arg_cx)) &&
          (CONCAT31((int3)(char)(arg_cx >> 8),thing_ptr[0x1f]) == (int)arg_bx)) &&
         (uval = (int)(arg_eax - (uint)*(ushort *)(thing_ptr + 0xd)) >> 0x1f, /* thing->mappos.val_x */
         uval_2 = (int)(arg_edx - (uint)*(ushort *)(thing_ptr + 0xf)) >> 0x1f, /* thing->mappos.val_y */
         val = ((arg_edx - (uint)*(ushort *)(thing_ptr + 0xf) ^ uval_2) - uval_2) + /* thing->mappos.val_y */
                 ((arg_eax - (uint)*(ushort *)(thing_ptr + 0xd) ^ uval) - uval), val < val_3)) { /* thing->mappos.val_x */
        val_3 = val;
        byte_ptr = thing_ptr;
      }
      local_1c = local_1c + 4;
    } while (local_1c != 0x2000);
  }
  if ((byte_ptr != (byte *)0x0) &&
     (uval = (int)(arg_eax - (uint)*(ushort *)(byte_ptr + 0xd)) >> 0x1f,
     uval_2 = (int)(arg_edx - (uint)*(ushort *)(byte_ptr + 0xf)) >> 0x1f,
     param_1 < (int)(((arg_edx - (uint)*(ushort *)(byte_ptr + 0xf) ^ uval_2) - uval_2) +
                    ((arg_eax - (uint)*(ushort *)(byte_ptr + 0xd) ^ uval) - uval)))) {
    byte_ptr = (byte *)0x0;
  }
  return byte_ptr;
}

/******************************************************************************
 * Function : ceiling_process_map_subtile_07da18 (Original VA: 0x7da18, Ghidra: FUN_0007da18)
 * Prototype: undefined8 ceiling_process_map_subtile_07da18(void);
 * Address  : 0x7da18 (Size: 148 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 13 -> ceiling_fn_07daac, get_2d_angle_between_positions, get_3d_angles_between_positions, ssprite_blit_span_alpha_mode0, ssprite_blit_span_alpha_mode1, ssprite_blit_span_alpha_mode2, ssprite_blit_span_alpha_mode3, can_thing_traverse_subtile ...
 * Callees  : 1 -> move_process_map_subtile_0b391c
 ******************************************************************************/
undefined8 ceiling_process_map_subtile_07da18(void)

{
  int val;
  int arg_eax;
  int val_2;
  undefined4 *word_ptr;
  uint uval;
  uint extraout_ECX;
  undefined4 arg_edx;
  uint local_14;
  uint local_10;
  
  val = (uint)CONCAT11(*(undefined1 *)(arg_eax + 3),*(undefined1 *)(arg_eax + 1)) * 5;
  uval = *(uint *)((int)&g_map_subtiles + val + 1) & 0x7ff;
  val_2 = uval * 0x18;
  word_ptr = &g_bss_0019e973 + uval * 6;
  if ((*(byte *)((int)&g_bss_0019e973 + val_2 + 2) & 0xe) == 0) {
    if (((undefined4 *)((*(uint *)((int)&g_map_subtiles + val + 1) & 0xfffffff) >> 0x18) <=
         (undefined4 *)(uint)*(byte *)(arg_eax + 5)) ||
       (word_ptr = (undefined4 *)(uint)(*(byte *)((int)&g_bss_0019e973 + val_2 + 2) >> 4),
       (undefined4 *)(uint)*(byte *)(arg_eax + 5) < word_ptr)) {
      uval = CONCAT31((int3)((uint)word_ptr >> 8),1);
      goto LAB_0007daa5;
    }
  }
  else {
    word_ptr = (undefined4 *)move_process_map_subtile_0b391c();
    if ((local_10 <= extraout_ECX) || (extraout_ECX < local_14)) {
      uval = CONCAT31((int3)((uint)word_ptr >> 8),1);
      goto LAB_0007daa5;
    }
  }
  uval = (uint)word_ptr & 0xffffff00;
LAB_0007daa5:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : ceiling_fn_07daac (Original VA: 0x7daac, Ghidra: FUN_0007daac)
 * Prototype: undefined4 ceiling_fn_07daac(void);
 * Address  : 0x7daac (Size: 52 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07daac
 * Callers  : 1 -> move_coord3d_along_angle_checked
 * Callees  : 2 -> door_process_map_subtile_022b3a, ceiling_process_map_subtile_07da18
 ******************************************************************************/
undefined4 ceiling_fn_07daac(void)

{
  int val;
  undefined4 uval;
  int extraout_ECX;
  
  val = door_process_map_subtile_022b3a();
  if (val == 0) {
    uval = ceiling_process_map_subtile_07da18();
    return uval;
  }
  if (val == extraout_ECX) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : ceiling_fn_07dae0 (Original VA: 0x7dae0, Ghidra: FUN_0007dae0)
 * Prototype: undefined4 ceiling_fn_07dae0(void);
 * Address  : 0x7dae0 (Size: 223 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07dae0
 * Callers  : 1 -> creature_process_map_subtile_07f690
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 ceiling_fn_07dae0(void)

{
  int arg_eax;
  uint uval;
  uint uval_2;
  undefined4 uval_3;
  ushort *arg_edx;
  uint uval_4;
  int arg_ebx;
  
  if ((((*(short *)(arg_eax + 0x1d) == *(short *)(arg_ebx + 0x1d)) ||
       (uval = ((uint)*(ushort *)(arg_ebx + 0x5a) + (uint)*(ushort *)(arg_eax + 0x5a)) / 2,
       uval_2 = (uint)*arg_edx - (uint)*(ushort *)(arg_ebx + 0xd), uval_4 = (int)uval_2 >> 0x1f,
       (int)uval <= (int)((uval_2 ^ uval_4) - uval_4))) ||
      (uval_2 = (uint)arg_edx[1] - (uint)*(ushort *)(arg_ebx + 0xf), uval_4 = (int)uval_2 >> 0x1f,
      (int)uval <= (int)((uval_2 ^ uval_4) - uval_4))) ||
     (uval = ((*(int *)(arg_edx + 1) >> 0x10) + *(ushort *)(arg_eax + 0x5c) / 2) -
              (*(ushort *)(arg_ebx + 0x5c) / 2 + (*(int *)(arg_ebx + 0xf) >> 0x10)),
     uval_2 = (int)uval >> 0x1f,
     (int)(((uint)*(ushort *)(arg_eax + 0x5c) + (uint)*(ushort *)(arg_ebx + 0x5c)) / 2) <=
     (int)((uval ^ uval_2) - uval_2))) {
    uval_3 = 0;
  }
  else {
    uval_3 = 1;
  }
  return uval_3;
}

/******************************************************************************
 * Function : ceiling_process_map_subtile_07dbc0 (Original VA: 0x7dbc0, Ghidra: FUN_0007dbc0)
 * Prototype: undefined4 ceiling_process_map_subtile_07dbc0(void);
 * Address  : 0x7dbc0 (Size: 435 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 35 -> combold_thing_stuck_finding_melee_0171e4, effect_process_thing_entity_02606f, group_update_creature_control_039eca, process_players_dungeon_command_packet, scrsupp_allocate_light_new_hero_069268, scrsupp_script_could_find_hero_0694d4, scrsupp_allocate_light_new_hero_06972c, shot_roll_action_random_06d4df ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 ceiling_process_map_subtile_07dbc0(void)

{
  byte flag;
  ushort uval;
  bool flag_2;
  uint uval_2;
  byte *byte_ptr;
  int thing;
  uint uval_3;
  uint uval_4;
  ushort *arg_edx;
  uint uval_5;
  uint uval_6;
  byte *byte_ptr_2;
  
  if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
    uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2);
  }
  else {
    uval = *(ushort *)(thing + 0x56);
  }
  uval_3 = uval / 2;
  uval_5 = arg_edx[1] - uval_3 >> 8;
  uval_6 = *arg_edx - uval_3 >> 8;
  byte_ptr_2 = (byte *)((int)&g_map_subtiles + (uval_6 + uval_5 * 0x100) * 5);
  uval_4 = (uint)*(ushort *)(thing + 0x58) + (*(int *)(arg_edx + 1) >> 0x10);
  do {
    uval_2 = uval_6;
    byte_ptr = byte_ptr_2;
    if (arg_edx[1] + uval_3 >> 8 < uval_5) {
      return 0;
    }
    for (; uval_2 <= *arg_edx + uval_3 >> 8; uval_2 = uval_2 + 1) {
      if ((*byte_ptr & 0x10) == 0) {
        flag = *(byte *)((int)&g_bss_0019e973 + (*(uint *)(byte_ptr + 1) & 0x7ff) * 0x18 + 2);
        if (*(int *)(arg_edx + 1) >> 0x10 < (int)((uint)(flag >> 4) * 0x100)) {
          return 1;
        }
        if ((flag & 0xe) == 0) {
          if (((*(uint *)(byte_ptr + 1) & 0xfffffff) >> 0x18) * 0x100 < uval_4) {
            return 1;
          }
        }
        else if ((8 - (uint)((flag & 0xf) >> 1)) * 0x100 < uval_4) {
          return 1;
        }
        flag_2 = false;
      }
      else {
        flag_2 = true;
      }
      if (flag_2) {
        return 1;
      }
      byte_ptr = byte_ptr + 5;
    }
    uval_5 = uval_5 + 1;
    byte_ptr_2 = byte_ptr_2 + 0x500;
  } while( true );
}

/******************************************************************************
 * Function : ceiling_process_map_subtile_07ddf8 (Original VA: 0x7ddf8, Ghidra: FUN_0007ddf8)
 * Prototype: undefined4 ceiling_process_map_subtile_07ddf8(void);
 * Address  : 0x7ddf8 (Size: 333 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 7 -> temple_update_slab_subtile_columns_0739b9, room_number_slabs_room_zero_0cc968, room_could_find_valid_first_0ccc08, room_number_slabs_room_zero_0ccf10, room_could_find_valid_random_0cd1d4, room_update_slab_subtile_columns_0cdcd0, slab_could_find_nearby_space_0dacf0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 ceiling_process_map_subtile_07ddf8(void)

{
  byte flag;
  int val;
  byte *byte_ptr;
  int arg_eax;
  uint uval;
  ushort *arg_edx;
  int val_2;
  int arg_ebx;
  int val_3;
  byte *byte_ptr_2;
  
  val_2 = (int)((uint)arg_edx[1] - arg_ebx) >> 8;
  val_3 = (int)((uint)*arg_edx - arg_ebx) >> 8;
  uval = (uint)*(ushort *)(arg_eax + 0x58) + (*(int *)(arg_edx + 1) >> 0x10);
  byte_ptr_2 = (byte *)((int)&g_map_subtiles + (val_3 + val_2 * 0x100) * 5);
  do {
    val = val_3;
    byte_ptr = byte_ptr_2;
    if ((int)((uint)arg_edx[1] + arg_ebx) >> 8 < val_2) {
      return 0;
    }
    for (; val <= (int)((uint)*arg_edx + arg_ebx) >> 8; val = val + 1) {
      if ((*byte_ptr & 0x10) != 0) {
        return 1;
      }
      flag = *(byte *)((int)&g_bss_0019e973 + (*(uint *)(byte_ptr + 1) & 0x7ff) * 0x18 + 2);
      if (*(int *)(arg_edx + 1) >> 0x10 < (int)((uint)(flag >> 4) * 0x100)) {
        return 1;
      }
      if ((flag & 0xe) == 0) {
        if (((*(uint *)(byte_ptr + 1) & 0xfffffff) >> 0x18) * 0x100 < uval) {
          return 1;
        }
      }
      else if ((int)((8 - (uint)((flag & 0xf) >> 1)) * 0x100) < (int)uval) {
        return 1;
      }
      byte_ptr = byte_ptr + 5;
    }
    val_2 = val_2 + 1;
    byte_ptr_2 = byte_ptr_2 + 0x500;
  } while( true );
}

/******************************************************************************
 * Function : ceiling_fn_07df48 (Original VA: 0x7df48, Ghidra: FUN_0007df48)
 * Prototype: undefined8 ceiling_fn_07df48(void);
 * Address  : 0x7df48 (Size: 28 bytes)
 * Module   : ceiling.cpp [address_order_boundary_interpolation]
 * Purpose  : Module ceiling.cpp procedure @ 0x07df48
 * Callers  : 12 -> combmove_update_creature_control_016b29, impset_fn_03ed80, person_update_creature_control_063dd3, person_update_creature_control_0640f7, shot_roll_action_random_06d4df, spell_update_creature_control_07231c, temple_update_creature_control_073607, room_process_dungeon_room_0c6be0 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 ceiling_fn_07df48(void)

{
  int arg_eax;
  undefined4 arg_edx;
  
  return CONCAT44(arg_edx,(uint)(*(int *)(arg_eax + 0xf) >> 0x10 == (uint)*(ushort *)(arg_eax + 0x60)))
  ;
}

