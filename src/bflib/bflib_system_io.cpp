/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: bflib/bflib_system_io.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 449
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : bflib_system_io_fn_0e5b3c (Original VA: 0xe5b3c, Ghidra: FUN_000e5b3c)
 * Prototype: undefined8 bflib_system_io_fn_0e5b3c(void);
 * Address  : 0xe5b3c (Size: 133 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e5b3c
 * Callers  : 0 -> 
 * Callees  : 2 -> sound_non_emitter_has_been_06e9ab, specials_fn_070bf9
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e5b3c(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  undefined4 arg_edx;
  
  val = (g_bss_002ee88e - g_game_turn) / 2;
  val_2 = specials_fn_070bf9();
  if ((val_2 != 0) &&
     ((extraout_ECX == 0 ||
      ((0 < extraout_ECX &&
       ((((val < 0x65 && (val % 10 == 0)) || ((val < 0x12d && (val % 0x32 == 0)))) ||
        (val_2 = val / 0xfa, val % 0xfa == 0)))))))) {
    val_2 = sound_non_emitter_has_been_06e9ab();
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : bflib_system_io_update_creature_control_0e5e04 (Original VA: 0xe5e04, Ghidra: FUN_000e5e04)
 * Prototype: void bflib_system_io_update_creature_control_0e5e04(void);
 * Address  : 0xe5e04 (Size: 320 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_state_return_type_human_0e0b1c
 * Callees  : 2 -> anger_update_creature_control_010575, creature_update_creature_control_084ff8
 ******************************************************************************/
void bflib_system_io_update_creature_control_0e5e04(void)

{
  byte *thing;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  
  if (((((*thing & 1) != 0) && (*(int *)(thing + 3) >> 0x18 <= (int)(uint)g_bss_002eb542)) &&
      ((*thing & 0x10) == 0)) && (((thing[1] & 2) == 0 && (thing[7] != 0x43)))) {
    val = (uint)thing[7] * 0x29;
    if ((&g_data_0018c4be)[val] == '\x06') {
      val = (uint)thing[8] * 0x29;
    }
    *(short *)(&g_bss_002e05ed +
              (uint)(byte)(&g_data_0018c4be)[val] * 2 +
              (*(int *)(thing + 3) >> 0x18) * 0x1508 + (uint)thing[0x1a] * 0x1e) =
         *(short *)(&g_bss_002e05ed +
                   (uint)(byte)(&g_data_0018c4be)[val] * 2 +
                   (*(int *)(thing + 3) >> 0x18) * 0x1508 + (uint)thing[0x1a] * 0x1e) + 1;
    val = creature_update_creature_control_084ff8();
    if ((val != 0) && (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x6e) == 0)) { /* thing->ccontrol_idx */
      *(short *)(&g_bss_002e09ad +
                *(int *)(&g_data_0019133e + (uint)*(byte *)(extraout_ECX + 0x1e) * 4) * 2 +
                (*(int *)(thing + 3) >> 0x18) * 0x1508 + (uint)thing[0x1a] * 6) =
           *(short *)(&g_bss_002e09ad +
                     *(int *)(&g_data_0019133e + (uint)*(byte *)(extraout_ECX + 0x1e) * 4) * 2 +
                     (*(int *)(thing + 3) >> 0x18) * 0x1508 + (uint)thing[0x1a] * 6) + 1;
    }
    val = anger_update_creature_control_010575();
    if (val != 0) {
      *(short *)(&g_bss_002e0a6d +
                *(int *)(&g_data_0019133e + (uint)*(byte *)(extraout_ECX_00 + 0x1e) * 4) * 2 +
                (*(int *)(thing + 3) >> 0x18) * 0x1508 + (uint)thing[0x1a] * 6) =
           *(short *)(&g_bss_002e0a6d +
                     *(int *)(&g_data_0019133e + (uint)*(byte *)(extraout_ECX_00 + 0x1e) * 4) * 2 +
                     (*(int *)(thing + 3) >> 0x18) * 0x1508 + (uint)thing[0x1a] * 6) + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e5f50 (Original VA: 0xe5f50, Ghidra: FUN_000e5f50)
 * Prototype: int bflib_system_io_fn_0e5f50(void);
 * Address  : 0xe5f50 (Size: 28 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e5f50
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0e5f50(void)

{
  int arg_eax;
  int arg_edx;
  int val;
  int val_2;
  
  val = (0x100 - arg_edx) * arg_eax;
  val_2 = val >> 0x1f;
  return (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e5f70 (Original VA: 0xe5f70, Ghidra: FUN_000e5f70)
 * Prototype: undefined4 bflib_system_io_fn_0e5f70(void);
 * Address  : 0xe5f70 (Size: 444 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e5f70
 * Callers  : 1 -> inits_fn_0409ba
 * Callees  : 2 -> bflib_system_io_process_map_subtile_0e6584, bflib_system_io_fn_0e8d50
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0e5f70(void)

{
  int *camera;
  int val;
  int extraout_ECX;
  int *int_ptr;
  int extraout_ECX_00;
  byte arg_dl;
  undefined1 arg_bl;
  int val_2;
  int *int_ptr_2;
  int *int_ptr_3;
  longdouble val_3;
  double val_4;
  double val_5;
  int val_6;
  undefined4 uval;
  
  *(undefined1 *)((int)camera + 0x15) = arg_bl;
  *(byte *)((int)camera + 0x16) = arg_dl;
  camera[1] = 0;
  val_6 = 0;
  camera[2] = 0;
  int_ptr = g_scratch_work_buf;
  *(char *)((int)camera + 0x17) = '\x01' << (arg_dl & 0x1f); /* camera->zoom */
  camera[3] = 0x14;
  camera[4] = 4;
  *(undefined1 *)(camera + 5) = 0;
  val_2 = 0;
  int_ptr_3 = int_ptr;
  do {
    uval = 0x55;
    val = bflib_system_io_process_map_subtile_0e6584();
    int_ptr_2 = int_ptr_3;
    if (val != 0) {
      int_ptr_2 = int_ptr_3 + 1;
      val_6 = val_6 + 1;
      *int_ptr_3 = extraout_ECX;
    }
    val_2 = val_2 + 1;
    int_ptr_3 = int_ptr_2;
  } while (val_2 < 0x1c39);
  if (val_6 != 0) {
    if (val_6 < 0xc9) {
      val_2 = 0;
      if (0 < val_6) {
        do {
          val = *int_ptr;
          *(char *)((int)camera + camera[1] * 2 + 0x18) = (char)((longlong)val % 0x100);
          *(char *)((int)camera + camera[1] * 2 + 0x19) = (char)((longlong)val / 0x100);
          camera[1] = (camera[1] + 1) % 200;
          if (*camera < 200) {
            *camera = *camera + 1;
          }
          val_2 = val_2 + 1;
          int_ptr = int_ptr + 1;
        } while (val_2 < val_6);
      }
    }
    else {
      val_4 = (double)val_6 / g_data_0016cb80;
      val_2 = 0;
      val_5 = 0.0;
      do {
        val_3 = (longdouble)bflib_system_io_fn_0e8d50(val_4,val_5,val_6,uval);
        val = int_ptr[(int)ROUND(val_3)];
        uval = 0x100;
        *(char *)((int)camera + camera[1] * 2 + 0x18) = (char)(val % 0x100);
        *(char *)((int)camera + camera[1] * 2 + 0x19) =
             (char)((val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0) >> 8);
        camera[1] = (camera[1] + 1) % extraout_ECX_00;
        if (*camera < extraout_ECX_00) {
          *camera = *camera + 1;
        }
        val_5 = val_5 + val_4;
        val_2 = val_2 + 1;
      } while (val_2 < 200);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e612c (Original VA: 0xe612c, Ghidra: FUN_000e612c)
 * Prototype: undefined8 bflib_system_io_fn_0e612c(void);
 * Address  : 0xe612c (Size: 539 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e612c
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 2 -> bflib_system_io_process_map_subtile_0e6584, bflib_system_io_fn_0e8d50
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e612c(void)

{
  int *arg_eax;
  int extraout_ECX;
  undefined4 arg_edx;
  int val;
  int val_2;
  int val_3;
  int val_4;
  longdouble val_5;
  int local_84 [20];
  double local_34;
  double local_2c;
  int local_24;
  int local_20;
  int local_1c;
  
  val_4 = arg_eax[2];
  local_1c = 0;
  local_20 = 0;
  val = val_4 % 0x55;
  val_3 = val * 3 + (val_4 / 0x55) * 0x300 + 0x101;
  if (0 < arg_eax[3]) {
    val_2 = 0;
    do {
      val_4 = bflib_system_io_process_map_subtile_0e6584();
      if (val_4 != 0) {
        val_4 = local_1c + 1;
        *(int *)((int)local_84 + val_2) = val_3;
        local_1c = val_4;
        val_2 = val_2 + 4;
        if (((char)arg_eax[5] != '\0') && (val_4 == arg_eax[4])) {
          val_4 = (arg_eax[2] + arg_eax[3]) % 0x1c39;
          break;
        }
      }
      val = val + 1;
      val_4 = extraout_ECX + 1;
      if (val < 0x55) {
        val_3 = val_3 + 3;
      }
      else {
        val = 0;
        if (0x1c38 < val_4) {
          val_4 = 0;
        }
        local_24 = 0x55;
        val_3 = (val_4 / 0x55) * 0x300 + (val_4 % 0x55) * 3 + 0x101;
      }
      local_20 = local_20 + 1;
    } while (local_20 < arg_eax[3]);
  }
  arg_eax[2] = val_4;
  if (local_1c != 0) {
    if (arg_eax[4] < local_1c) {
      local_2c = (double)local_1c / (double)arg_eax[4];
      val_4 = 0;
      local_34 = 0.0;
      if (0 < arg_eax[4]) {
        do {
          val_5 = (longdouble)bflib_system_io_fn_0e8d50();
          local_24 = (int)ROUND(val_5);
          val = local_84[(int)ROUND(val_5)];
          *(char *)((int)arg_eax + arg_eax[1] * 2 + 0x18) = (char)((longlong)val % 0x100);
          *(char *)((int)arg_eax + arg_eax[1] * 2 + 0x19) = (char)((longlong)val / 0x100);
          arg_eax[1] = (arg_eax[1] + 1) % 200;
          if (*arg_eax < 200) {
            *arg_eax = *arg_eax + 1;
          }
          val_4 = val_4 + 1;
          local_34 = local_34 + local_2c;
        } while (val_4 < arg_eax[4]);
      }
    }
    else if (0 < local_1c) {
      val_4 = 0;
      do {
        val = *(int *)((int)local_84 + val_4);
        *(char *)((int)arg_eax + arg_eax[1] * 2 + 0x18) = (char)((longlong)val % 0x100);
        *(char *)((int)arg_eax + arg_eax[1] * 2 + 0x19) = (char)((longlong)val / 0x100);
        arg_eax[1] = (arg_eax[1] + 1) % 200;
        if (*arg_eax < 200) {
          *arg_eax = *arg_eax + 1;
        }
        val_4 = val_4 + 4;
      } while (val_4 < local_1c * 4);
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_roll_action_random_0e6348 (Original VA: 0xe6348, Ghidra: FUN_000e6348)
 * Prototype: bool bflib_system_io_roll_action_random_0e6348(void);
 * Address  : 0xe6348 (Size: 99 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 1 -> dungeon_attempt_get_random_position_0239ee
 * Callees  : 0 -> 
 ******************************************************************************/
bool bflib_system_io_roll_action_random_0e6348(void)

{
  uint uval;
  uint *arg_eax;
  short *arg_edx;
  uint rand_seed;
  
  uval = *arg_eax;
  if (uval != 0) {
    rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
    rand_seed = g_action_random_seed % *arg_eax;
    *arg_edx = (ushort)*(byte *)((int)arg_eax + rand_seed * 2 + 0x18) << 8;
    arg_edx[1] = (ushort)*(byte *)((int)arg_eax + rand_seed * 2 + 0x19) << 8;
  }
  return uval != 0;
}

/******************************************************************************
 * Function : bflib_system_io_nops_currp_slbp_nopstotest_0e63ac (Original VA: 0xe63ac, Ghidra: FUN_000e63ac)
 * Prototype: void bflib_system_io_nops_currp_slbp_nopstotest_0e63ac(void);
 * Address  : 0xe63ac (Size: 290 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'NoPs %d, CurrP %d, SlbP %d, NoPsToTest %d, NoPsToUpdate %d, '
 * Callers  : 0 -> 
 * Callees  : 2 -> dk_sprintf, bflib_system_io_fn_0f0f8c
 ******************************************************************************/
void bflib_system_io_nops_currp_slbp_nopstotest_0e63ac(void)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 *extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int val_2;
  int extraout_EDX_03;
  int val_3;
  undefined4 *word_ptr;
  
  val = 0;
  do {
    if (((&g_players)[val * 0x4ef] & 1) != 0) {
      dk_sprintf(&g_log_sprintf_buf,s_i_Wander_point_log_for_player__d_0016cb86 + 2,val);
      bflib_system_io_fn_0f0f8c(&g_log_sprintf_buf);
      dk_sprintf(&g_log_sprintf_buf,s_NoPs__d__CurrP__d__SlbP__d__NoPs_0016cba7,*extraout_EDX,
                   extraout_EDX[1],extraout_EDX[2],extraout_EDX[3],extraout_EDX[4],
                   *(undefined1 *)((int)extraout_EDX + 0x17));
      val_3 = 0;
      bflib_system_io_fn_0f0f8c(&g_log_sprintf_buf);
      val = extraout_ECX;
      val_2 = extraout_EDX_00;
      do {
        dk_sprintf(&g_log_sprintf_buf,s_Explored_Wander_Point_N_d__Playe_0016cbf0,val_3,val,
                     *(undefined1 *)(val_2 + 0x18),*(undefined1 *)(val_2 + 0x19));
        val_3 = val_3 + 1;
        bflib_system_io_fn_0f0f8c(&g_log_sprintf_buf);
        val = extraout_ECX_00;
        val_2 = extraout_EDX_01;
      } while (val_3 < 200);
      val = extraout_ECX_00 * 0x4ef;
      word_ptr = (undefined4 *)(&g_bss_0019d35a + val);
      dk_sprintf(&g_log_sprintf_buf,s_NoPs__d__CurrP__d__SlbP__d__NoPs_0016cc1e,*word_ptr,
                   *(undefined4 *)(&g_bss_0019d35e + val),*(undefined4 *)(&g_bss_0019d362 + val),
                   *(undefined4 *)(&g_bss_0019d366 + val),*(undefined4 *)(&g_bss_0019d36a + val),
                   (&g_bss_0019d371)[val]);
      bflib_system_io_fn_0f0f8c(&g_log_sprintf_buf);
      val = extraout_ECX_01;
      val_2 = extraout_EDX_02;
      do {
        dk_sprintf(&g_log_sprintf_buf,s_UnExplored_Wander_Point_N_d__Pla_0016cc67,val_2,val,
                     *(undefined1 *)(word_ptr + 6),*(undefined *)((int)word_ptr + 0x19));
        word_ptr = (undefined4 *)((int)word_ptr + 2);
        bflib_system_io_fn_0f0f8c(&g_log_sprintf_buf);
        val = extraout_ECX_02;
        val_2 = extraout_EDX_03;
      } while (extraout_EDX_03 < 200);
    }
    val = val + 1;
  } while (val < 5);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_process_map_subtile_0e6584 (Original VA: 0xe6584, Ghidra: FUN_000e6584)
 * Prototype: undefined4 bflib_system_io_process_map_subtile_0e6584(void);
 * Address  : 0xe6584 (Size: 277 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> bflib_system_io_fn_0e5f70, bflib_system_io_fn_0e612c
 * Callees  : 1 -> routes_fn_0d1420
 ******************************************************************************/
undefined4 bflib_system_io_process_map_subtile_0e6584(void)

{
  int camera;
  int val;
  int arg_edx;
  
  val = arg_edx * 5;
  if (*(char *)(camera + 0x15) == '\0') {
    if ((((((uint)*(byte *)(camera + 0x17) & 1 << (g_bss_002eb542 & 0x1f)) == 0) && /* camera->zoom */
         ((*(uint *)((int)&g_map_subtiles + val + 1) >> 0x1c & (uint)*(byte *)(camera + 0x17)) == 0) /* camera->zoom */
         ) && ((*(byte *)((int)&g_map_subtiles + val) & 0x10) == 0)) &&
       ((((&g_bss_00269203)[arg_edx] & 0x10) == 0 &&
        (val = routes_fn_0d1420((short)(arg_edx % 0x100 << 8)), val != 0)))) {
      return 1;
    }
  }
  else if (((((uint)*(byte *)(camera + 0x17) & 1 << (g_bss_002eb542 & 0x1f)) != 0) || /* camera->zoom */
           ((*(uint *)((int)&g_map_subtiles + val + 1) >> 0x1c & (uint)*(byte *)(camera + 0x17)) != /* camera->zoom */
            0)) && (((*(byte *)((int)&g_map_subtiles + arg_edx * 5) & 0x10) == 0 &&
                    (((&g_bss_00269203)[arg_edx] & 0x10) == 0)))) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e66ec (Original VA: 0xe66ec, Ghidra: FUN_000e66ec)
 * Prototype: undefined8 bflib_system_io_fn_0e66ec(void);
 * Address  : 0xe66ec (Size: 268 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e66ec
 * Callers  : 14 -> anger_fn_010010, anger_fn_01009d, anger_fn_010c1a, comptool_update_slab_subtile_columns_01e5de, compturn_update_slab_subtile_columns_0216d8, sound3d_fn_06fda2, ceiling_fn_07bb10, ceiling_fn_07bc8d ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e66ec(void)

{
  ulonglong uval;
  uint arg_eax;
  uint uval_2;
  uint arg_edx;
  
  if ((arg_eax == 0) && (arg_edx == 0)) {
    return 0;
  }
  if (-1 < (int)arg_eax) {
    if ((int)arg_edx < 0) {
      if ((int)arg_eax < (int)-arg_edx) {
        uval = (ulonglong)(arg_eax << 8) / (ulonglong)-arg_edx;
        return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                        *(undefined2 *)((int)&PTR_LAB_000e67f8 + (int)uval * 2)));
      }
      uval = (ulonglong)(arg_edx * -0x100) / (ulonglong)arg_eax;
      return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                      0x200 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uval * 2)));
    }
    if ((int)arg_eax < (int)arg_edx) {
      uval = (ulonglong)(arg_eax << 8) / (ulonglong)arg_edx;
      return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                      0x400 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uval * 2)));
    }
    uval = (ulonglong)(arg_edx << 8) / (ulonglong)arg_eax;
    return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                    *(short *)((int)&PTR_LAB_000e67f8 + (int)uval * 2) + 0x200));
  }
  uval_2 = -arg_eax;
  if ((int)arg_edx < 0) {
    if ((int)uval_2 < (int)-arg_edx) {
      uval = (ulonglong)(arg_eax * -0x100) / (ulonglong)-arg_edx;
      return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                      0x800 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uval * 2)));
    }
    uval = (ulonglong)(arg_edx * -0x100) / (ulonglong)uval_2;
    return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                    *(short *)((int)&PTR_LAB_000e67f8 + (int)uval * 2) + 0x600));
  }
  if ((int)uval_2 < (int)arg_edx) {
    uval = (ulonglong)(arg_eax * -0x100) / (ulonglong)arg_edx;
    return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                    *(short *)((int)&PTR_LAB_000e67f8 + (int)uval * 2) + 0x400));
  }
  uval = (ulonglong)(arg_edx << 8) / (ulonglong)uval_2;
  return CONCAT44(arg_edx,CONCAT22((short)(uval >> 0x10),
                                  0x600 - *(short *)((int)&PTR_LAB_000e67f8 + (int)uval * 2)));
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e69fc (Original VA: 0xe69fc, Ghidra: FUN_000e69fc)
 * Prototype: void bflib_system_io_fn_0e69fc(void);
 * Address  : 0xe69fc (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e69fc
 * Callers  : 52 -> anger_fn_010c5f, anger_fn_010c85, angtool_fn_011606, ariadne_fn_013169, combat_fn_015d7c, combat_fn_015df9, combmove_update_creature_control_01671a, compevnt_fn_0197a9 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e69fc(void)

{
  return;
}

/******************************************************************************
 * Function : LbScreenWaitVbi (Original VA: 0xe6a10, Ghidra: FUN_000e6a10)
 * Prototype: undefined4 LbScreenWaitVbi(void);
 * Address  : 0xe6a10 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Wait for vertical blank / screen sync
 * Callers  : 178 -> ariadne_update_creature_control_011e00, barracks_fn_013b98, comptask_fn_01b15c, comptask_fn_01ba46, comptask_roll_action_random_01d10e, compturn_update_player_view_state_021008, compturn_update_player_dungeon_021056, compturn_process_slabmap_tile_02213c ...
 * Callees  : 1 -> bflib_system_io_fn_0f69e0
 ******************************************************************************/
undefined4 LbScreenWaitVbi(void)

{
  undefined4 arg_eax;
  
  bflib_system_io_fn_0f69e0();
  return arg_eax;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e6a30 (Original VA: 0xe6a30, Ghidra: FUN_000e6a30)
 * Prototype: longlong bflib_system_io_fn_0e6a30(void);
 * Address  : 0xe6a30 (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e6a30
 * Callers  : 2 -> setup_init_game_screen_and_subsystems, LbScreenSetup
 * Callees  : 1 -> bflib_system_io_fn_0e79ac
 ******************************************************************************/
longlong bflib_system_io_fn_0e6a30(void)

{
  char arg_al;
  int val;
  char extraout_DL;
  uint arg_edx;
  
  if (g_display_bss_003d980c == 0) {
    val = bflib_system_io_fn_0e79ac();
    if (val != 1) {
      return (ulonglong)arg_edx << 0x20;
    }
    g_display_bss_003d980c = 1;
    arg_al = extraout_DL;
  }
  return CONCAT44(arg_edx,*(undefined4 *)(&g_data_00194fe6 + arg_al * 0x26));
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e6a6c (Original VA: 0xe6a6c, Ghidra: FUN_000e6a6c)
 * Prototype: undefined4 bflib_system_io_fn_0e6a6c(void);
 * Address  : 0xe6a6c (Size: 168 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e6a6c
 * Callers  : 8 -> setup_load_core_game_data, setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites, draw_process_map_subtile_08bde8, draw_process_map_subtile_0a43b4, engine3_render_3d_dungeon_viewport, LbScreenSetup, bflib_system_io_fn_0ebab0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e6a6c(void)

{
  int arg_eax;
  int arg_ecx;
  int arg_edx;
  int val;
  int arg_ebx;
  int val_2;
  
  val = arg_ebx + arg_eax;
  val_2 = arg_ecx + arg_edx;
  g_display_bss_003d983c = arg_eax;
  if (val < arg_eax) {
    g_display_bss_003d983c = val;
    val = arg_eax;
  }
  g_display_bss_003d9840 = arg_edx;
  if (val_2 < arg_edx) {
    g_display_bss_003d9840 = val_2;
    val_2 = arg_edx;
  }
  if (g_display_bss_003d983c < 0) {
    g_display_bss_003d983c = 0;
  }
  if (val < 0) {
    val = 0;
  }
  if (g_display_bss_003d9840 < 0) {
    g_display_bss_003d9840 = 0;
  }
  if (val_2 < 0) {
    val_2 = 0;
  }
  if (g_screen_pitch < g_display_bss_003d983c) {
    g_display_bss_003d983c = g_screen_pitch;
  }
  if (g_screen_pitch < val) {
    val = g_screen_pitch;
  }
  if (g_display_bss_003d9838 < g_display_bss_003d9840) {
    g_display_bss_003d9840 = g_display_bss_003d9838;
  }
  if (g_display_bss_003d9838 < val_2) {
    val_2 = g_display_bss_003d9838;
  }
  g_display_bss_003d9844 = val - g_display_bss_003d983c;
  g_display_bss_003d9848 = val_2 - g_display_bss_003d9840;
  g_display_bss_003d9824 = g_display_bss_003d9818 + arg_edx * g_screen_pitch + arg_eax;
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e6b14 (Original VA: 0xe6b14, Ghidra: FUN_000e6b14)
 * Prototype: undefined4 bflib_system_io_fn_0e6b14(void);
 * Address  : 0xe6b14 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e6b14
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e6b14(void)

{
  return g_display_bss_003d9810;
}

/******************************************************************************
 * Function : LbTextDraw (Original VA: 0xe6b20, Ghidra: FUN_000e6b20)
 * Prototype: undefined4 LbTextDraw(void);
 * Address  : 0xe6b20 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Draw text string using g_lb_current_font_ptr
 * Callers  : 45 -> frontend_draw_gui_button_label_02e58b, frontend_load_frontend_palette_02e8a7, frontend_draw_gui_button_label_02ee3e, frontend_draw_text_overlay_02eeb9, frontend_draw_gui_button_label_02efb4, frontend_draw_gui_button_label_02f769, frontend_draw_text_overlay_030061, frontend_draw_text_overlay_0300a7 ...
 * Callees  : 2 -> bflib_system_io_fn_0e6b44, bflib_system_io_fn_0e6b74
 ******************************************************************************/
undefined4 LbTextDraw(void)

{
  bflib_system_io_fn_0e6b44();
  bflib_system_io_fn_0e6b74();
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e6b44 (Original VA: 0xe6b44, Ghidra: FUN_000e6b44)
 * Prototype: undefined4 bflib_system_io_fn_0e6b44(void);
 * Address  : 0xe6b44 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e6b44
 * Callers  : 3 -> newgui_draw_text_overlay_057739, newgui_draw_text_overlay_057a52, LbTextDraw
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0e6b44(void)

{
  int arg_eax;
  int arg_edx;
  undefined4 arg_ebx;
  
  g_display_bss_003d9894 = arg_ebx;
  g_display_bss_003d9890 = arg_edx;
  g_display_bss_003d988c = arg_eax;
  g_display_bss_003d989c = arg_edx * g_screen_pitch + g_display_bss_003d9818 + arg_eax;
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e6b74 (Original VA: 0xe6b74, Ghidra: FUN_000e6b74)
 * Prototype: undefined4 bflib_system_io_fn_0e6b74(void);
 * Address  : 0xe6b74 (Size: 168 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e6b74
 * Callers  : 3 -> newgui_draw_text_overlay_057739, newgui_draw_text_overlay_057a52, LbTextDraw
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e6b74(void)

{
  int arg_eax;
  int arg_ecx;
  int arg_edx;
  int val;
  int arg_ebx;
  int val_2;
  
  val = arg_ebx + arg_eax;
  val_2 = arg_ecx + arg_edx;
  g_display_bss_003d98a0 = arg_eax;
  if (val < arg_eax) {
    g_display_bss_003d98a0 = val;
    val = arg_eax;
  }
  g_display_bss_003d98a4 = arg_edx;
  if (val_2 < arg_edx) {
    g_display_bss_003d98a4 = val_2;
    val_2 = arg_edx;
  }
  if (g_display_bss_003d98a0 < 0) {
    g_display_bss_003d98a0 = 0;
  }
  if (val < 0) {
    val = 0;
  }
  if (g_display_bss_003d98a4 < 0) {
    g_display_bss_003d98a4 = 0;
  }
  if (val_2 < 0) {
    val_2 = 0;
  }
  if (g_screen_pitch < g_display_bss_003d98a0) {
    g_display_bss_003d98a0 = g_screen_pitch;
  }
  if (g_screen_pitch < val) {
    val = g_screen_pitch;
  }
  if (g_display_bss_003d9838 < g_display_bss_003d98a4) {
    g_display_bss_003d98a4 = g_display_bss_003d9838;
  }
  if (g_display_bss_003d9838 < val_2) {
    val_2 = g_display_bss_003d9838;
  }
  g_display_bss_003d98a8 = val - g_display_bss_003d98a0;
  g_display_bss_003d98ac = val_2 - g_display_bss_003d98a4;
  g_display_bss_003d98b0 = g_display_bss_003d9818 + arg_edx * g_screen_pitch + arg_eax;
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_draw_text_overlay_0e6c1c (Original VA: 0xe6c1c, Ghidra: FUN_000e6c1c)
 * Prototype: undefined8 bflib_system_io_draw_text_overlay_0e6c1c(void);
 * Address  : 0xe6c1c (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 12 -> frontend_draw_text_overlay_02eeb9, frontend_draw_text_overlay_02f414, frontend_text_long_box_030a2d, frontmap_number_players_0322e9, frontnet_LbNetwork_Exchange_035758, input_draw_text_overlay_047755, input_draw_text_overlay_049426, newgui_this_bloody_tooltip_long_058b37 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_draw_text_overlay_0e6c1c(void)

{
  byte *byte_ptr;
  byte flag;
  byte *arg_eax;
  int val;
  int val_2;
  undefined4 arg_edx;
  uint uval;
  
  val_2 = 0;
  if (g_lb_current_font_ptr != 0) {
    val = 0;
    flag = *arg_eax;
    while (flag != 0) {
      flag = *arg_eax;
      if (flag < 0x20) {
        if (flag == 9) {
          if (g_lb_current_font_ptr == 0) {
            uval = 0;
          }
          else {
            uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
          }
          val = val + uval * g_data_00195430;
        }
        else if (flag == 10) {
          if (val_2 < val) {
            val_2 = val;
          }
          val = 0;
        }
      }
      else {
        if (g_lb_current_font_ptr == 0) {
          uval = 0;
        }
        else {
          uval = (uint)*(byte *)(g_lb_current_font_ptr + 4 + (flag - 0x1f) * 6);
        }
        val = val + uval;
      }
      byte_ptr = arg_eax + 1;
      arg_eax = arg_eax + 1;
      flag = *byte_ptr;
    }
    if (val_2 < val) goto LAB_000e6cb9;
  }
  val = val_2;
LAB_000e6cb9:
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_draw_text_overlay_0e6cc4 (Original VA: 0xe6cc4, Ghidra: FUN_000e6cc4)
 * Prototype: undefined8 bflib_system_io_draw_text_overlay_0e6cc4(void);
 * Address  : 0xe6cc4 (Size: 90 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 2 -> newgui_draw_text_overlay_05bb9c, LbTextDrawFormatted
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_draw_text_overlay_0e6cc4(void)

{
  byte flag;
  byte *arg_eax;
  undefined4 arg_edx;
  uint uval;
  int val;
  
  val = 0;
  if (g_lb_current_font_ptr != 0) {
    for (; (((flag = *arg_eax, flag != 0x20 && (flag != 9)) && (flag != 10)) && (*arg_eax != 0));
        arg_eax = arg_eax + 1) {
      if (0x20 < *arg_eax) {
        if (g_lb_current_font_ptr == 0) {
          uval = 0;
        }
        else {
          uval = (uint)*(byte *)(g_lb_current_font_ptr + 4 + (*arg_eax - 0x1f) * 6);
        }
        val = val + uval;
      }
    }
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_draw_text_overlay_0e6d20 (Original VA: 0xe6d20, Ghidra: FUN_000e6d20)
 * Prototype: longlong bflib_system_io_draw_text_overlay_0e6d20(void);
 * Address  : 0xe6d20 (Size: 77 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 3 -> newgui_draw_text_overlay_058ba8, sound_simon_says_hi_everyone_06f0cd, creature_dene_says_big_hello_08685c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong bflib_system_io_draw_text_overlay_0e6d20(void)

{
  char *arg_eax;
  uint uval;
  uint arg_edx;
  int val;
  
  val = 1;
  if ((g_lb_current_font_ptr != 0) && (arg_eax != (char *)0x0)) {
    for (; *arg_eax != '\0'; arg_eax = arg_eax + 1) {
      if (*arg_eax == '\n') {
        val = val + 1;
      }
    }
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    return CONCAT44(arg_edx,uval * val);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : LbTextDrawFormatted (Original VA: 0xe6d80, Ghidra: FUN_000e6d80)
 * Prototype: undefined4 LbTextDrawFormatted(void);
 * Address  : 0xe6d80 (Size: 1817 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Draw formatted text in text window
 * Callers  : 40 -> frontend_draw_gui_button_label_02e58b, frontend_draw_gui_button_label_02ee3e, frontend_draw_gui_button_label_02efb4, frontend_draw_gui_button_label_02f769, frontend_draw_text_overlay_0300a7, frontend_draw_text_overlay_03012d, frontend_draw_text_overlay_0303ad, frontend_draw_gui_button_label_03078d ...
 * Callees  : 2 -> bflib_system_io_draw_text_overlay_0e6cc4, bflib_system_io_draw_text_overlay_0e74d4
 ******************************************************************************/
undefined4 LbTextDrawFormatted(void)

{
  byte flag;
  int arg_eax;
  uint uval;
  int val;
  short short_val;
  byte *arg_ebx;
  uint *word_ptr;
  int val_2;
  undefined8 uval_2;
  uint auStack_4c [13];
  int local_14;
  
  word_ptr = auStack_4c + 2;
  if (g_lb_current_font_ptr != 0) {
    auStack_4c[2] = g_display_bss_003d983c;
    auStack_4c[3] = g_display_bss_003d9840;
    auStack_4c[4] = g_display_bss_003d9844;
    auStack_4c[5] = g_display_bss_003d9848;
    auStack_4c[6] = g_display_bss_003d9824;
    g_display_bss_003d983c = g_display_bss_003d98a0;
    g_display_bss_003d9840 = g_display_bss_003d98a4;
    g_display_bss_003d9844 = g_display_bss_003d98a8;
    g_display_bss_003d9848 = g_display_bss_003d98ac;
    g_display_bss_003d9824 = g_display_bss_003d98b0;
    auStack_4c[0xc] = g_display_bss_003d988c - g_display_bss_003d98a0;
    short_val = 0;
    val_2 = arg_eax + (g_display_bss_003d988c - g_display_bss_003d98a0);
    local_14 = val_2;
    for (; word_ptr[5] = word_ptr[0xc] + (g_display_bss_003d9894 - (val_2 - word_ptr[10])), *arg_ebx != 0;
        arg_ebx = arg_ebx + 1) {
      flag = *arg_ebx;
      if (flag < 0x21) {
        if (flag == 0x20) {
          if (g_lb_current_font_ptr == 0) {
            uval = 0;
          }
          else {
            uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
          }
          val_2 = val_2 + uval;
          word_ptr[-1] = 0xe6e6a;
          uval_2 = bflib_system_io_draw_text_overlay_0e6cc4();
          if (g_display_bss_003d9894 < (int)uval_2 + (int)((ulonglong)uval_2 >> 0x20)) {
            if (g_lb_current_font_ptr == 0) {
              word_ptr[9] = 0;
            }
            else {
              word_ptr[9] = (uint)*(byte *)(g_lb_current_font_ptr + 10);
            }
            val = word_ptr[9];
            if (((byte)g_lb_display_draw_flags & 0x20) == 0) {
              if (((byte)g_lb_display_draw_flags & 0x80) == 0) {
                if ((g_lb_display_draw_flags._1_1_ & 1) == 0) {
                  if ((g_lb_display_draw_flags._1_1_ & 2) != 0) {
                    if (0 < short_val) {
                      if (g_lb_current_font_ptr == 0) {
                        word_ptr[6] = 0;
                      }
                      else {
                        word_ptr[6] = (uint)*(byte *)(g_lb_current_font_ptr + 10);
                      }
                      val = val + (g_display_bss_003d9894 - ((val_2 - word_ptr[6]) - word_ptr[10])) /
                                      (uint)(int)short_val;
                    }
                    val_2 = word_ptr[0xc];
                    word_ptr[-1] = val;
                    word_ptr[-2] = 0xe701e;
                    bflib_system_io_draw_text_overlay_0e74d4();
                    word_ptr[10] = (uint)(arg_ebx + 1);
                    goto LAB_000e7036;
                  }
                  goto LAB_000e7038;
                }
                word_ptr[-1] = val;
                val_2 = word_ptr[0xc];
                word_ptr[-2] = 0xe6f90;
                bflib_system_io_draw_text_overlay_0e74d4();
                word_ptr[10] = (uint)(arg_ebx + 1);
                if (g_lb_current_font_ptr == 0) goto LAB_000e6fb2;
                short_val = 0;
                word_ptr = word_ptr + -1;
              }
              else {
                word_ptr[-1] = val;
                val_2 = word_ptr[0xc];
                word_ptr[-2] = 0xe6f13;
                bflib_system_io_draw_text_overlay_0e74d4();
                word_ptr[10] = (uint)(arg_ebx + 1);
                if (g_lb_current_font_ptr == 0) goto LAB_000e6fb2;
                short_val = 0;
                word_ptr = word_ptr + -1;
              }
            }
            else {
              val_2 = word_ptr[0xc];
              word_ptr[-1] = val;
              word_ptr[-2] = 0xe6eb5;
              bflib_system_io_draw_text_overlay_0e74d4();
              word_ptr[10] = (uint)(arg_ebx + 1);
              if (g_lb_current_font_ptr == 0) {
LAB_000e6fb2:
                short_val = 0;
                word_ptr = word_ptr + -1;
              }
              else {
LAB_000e7036:
                word_ptr = word_ptr + -1;
LAB_000e7038:
                short_val = 0;
              }
            }
          }
          else {
            short_val = short_val + 1;
          }
        }
        else if (flag == 10) {
          if (g_lb_current_font_ptr == 0) {
            uval = 0;
          }
          else {
            uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
          }
          word_ptr[-1] = uval;
          val_2 = word_ptr[0xc];
          word_ptr[-2] = 0xe709f;
          bflib_system_io_draw_text_overlay_0e74d4();
          word_ptr[10] = (uint)arg_ebx;
          short_val = 0;
          word_ptr = word_ptr + -1;
        }
        else if (flag == 9) {
          uval = 0;
          if (g_lb_current_font_ptr != 0) {
            uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
          }
          val_2 = val_2 + uval * g_data_00195430;
          word_ptr[-1] = 0xe70f9;
          uval_2 = bflib_system_io_draw_text_overlay_0e6cc4();
          if (g_display_bss_003d9894 < (int)uval_2 + (int)((ulonglong)uval_2 >> 0x20)) {
            if (g_lb_current_font_ptr == 0) {
              word_ptr[8] = 0;
            }
            else {
              word_ptr[8] = (uint)*(byte *)(g_lb_current_font_ptr + 10);
            }
            val = word_ptr[8];
            if (((byte)g_lb_display_draw_flags & 0x20) == 0) {
              if (((byte)g_lb_display_draw_flags & 0x80) == 0) {
                if ((g_lb_display_draw_flags._1_1_ & 1) == 0) {
                  if ((g_lb_display_draw_flags._1_1_ & 2) == 0) goto LAB_000e72e7;
                  if (0 < short_val) {
                    if (g_lb_current_font_ptr == 0) {
                      word_ptr[7] = 0;
                    }
                    else {
                      word_ptr[7] = (uint)*(byte *)(g_lb_current_font_ptr + 10);
                    }
                    val = val + (g_display_bss_003d9894 - ((val_2 - word_ptr[7]) - word_ptr[10])) /
                                    (uint)(int)short_val;
                  }
                  val_2 = word_ptr[0xc];
                  word_ptr[-1] = val;
                  word_ptr[-2] = 0xe72c1;
                  bflib_system_io_draw_text_overlay_0e74d4();
                  word_ptr[10] = (uint)(arg_ebx + 1);
                  if (g_lb_current_font_ptr == 0) goto LAB_000e72e5;
                  short_val = 0;
                  word_ptr = word_ptr + -1;
                }
                else {
                  word_ptr[-1] = val;
                  val_2 = word_ptr[0xc];
                  word_ptr[-2] = 0xe7239;
                  bflib_system_io_draw_text_overlay_0e74d4();
                  word_ptr[10] = (uint)(arg_ebx + 1);
                  if (g_lb_current_font_ptr == 0) goto LAB_000e725b;
                  short_val = 0;
                  word_ptr = word_ptr + -1;
                }
              }
              else {
                word_ptr[-1] = val;
                val_2 = word_ptr[0xc];
                word_ptr[-2] = 0xe71b5;
                bflib_system_io_draw_text_overlay_0e74d4();
                word_ptr[10] = (uint)(arg_ebx + 1);
                if (g_lb_current_font_ptr == 0) {
LAB_000e725b:
                  short_val = 0;
                  word_ptr = word_ptr + -1;
                }
                else {
                  short_val = 0;
                  word_ptr = word_ptr + -1;
                }
              }
            }
            else {
              val_2 = word_ptr[0xc];
              word_ptr[-1] = val;
              word_ptr[-2] = 0xe7146;
              bflib_system_io_draw_text_overlay_0e74d4();
              word_ptr[10] = (uint)(arg_ebx + 1);
LAB_000e72e5:
              word_ptr = word_ptr + -1;
LAB_000e72e7:
              short_val = 0;
            }
          }
          else {
            short_val = short_val + (ushort)g_data_00195430;
          }
        }
        else if ((((flag == 6) || (flag == 7)) || (flag == 8)) || (flag == 9)) {
          if (g_display_bss_003d9894 < (int)(val_2 - word_ptr[10])) {
            val_2 = word_ptr[0xc];
            if (g_lb_current_font_ptr == 0) {
              uval = 0;
            }
            else {
              uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
            }
            word_ptr[-1] = uval;
            word_ptr[-2] = 0xe7354;
            bflib_system_io_draw_text_overlay_0e74d4();
            word_ptr[10] = (uint)arg_ebx;
            short_val = 0;
            word_ptr = word_ptr + -1;
          }
          switch(*arg_ebx) {
          case 6:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 0x20;
            break;
          case 7:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 0x80;
            break;
          case 8:
            g_lb_display_draw_flags._1_1_ = g_lb_display_draw_flags._1_1_ ^ 1;
            break;
          case 9:
            g_lb_display_draw_flags._1_1_ = g_lb_display_draw_flags._1_1_ ^ 2;
          }
        }
        else if (flag == 0xe) {
          arg_ebx = arg_ebx + 1;
        }
      }
      else if (g_lb_current_font_ptr != 0) {
        val_2 = val_2 + (uint)*(byte *)((*arg_ebx - 0x1f) * 6 + 4 + g_lb_current_font_ptr);
      }
    }
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
    }
    word_ptr[-1] = uval;
    word_ptr[-2] = 0xe7460;
    bflib_system_io_draw_text_overlay_0e74d4();
    g_display_bss_003d983c = word_ptr[-1];
    g_display_bss_003d9840 = *word_ptr;
    g_display_bss_003d9844 = word_ptr[1];
    g_display_bss_003d9848 = word_ptr[2];
    g_display_bss_003d9824 = word_ptr[3];
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_draw_text_overlay_0e74d4 (Original VA: 0xe74d4, Ghidra: FUN_000e74d4)
 * Prototype: void bflib_system_io_draw_text_overlay_0e74d4(void);
 * Address  : 0xe74d4 (Size: 557 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> LbTextDrawFormatted
 * Callees  : 3 -> bflib_system_io_fn_0f3300, bflib_system_io_fn_0f6a84, watcom_crt_fn_13a710
 ******************************************************************************/
void bflib_system_io_draw_text_overlay_0e74d4(void)

{
  byte flag;
  byte *arg_eax;
  byte *arg_edx;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  uint auStack_20 [3];
  byte *local_14;
  byte *local_10;
  
  word_ptr_2 = auStack_20 + 2;
  local_14 = arg_edx;
  local_10 = arg_eax;
  if (arg_eax < arg_edx) {
    do {
      flag = *local_10;
      word_ptr = (undefined1 *)word_ptr_2;
      if (flag < 0x21) {
        if (flag == 0x20) {
          if ((g_lb_display_draw_flags._1_1_ & 4) != 0) {
            *(uint *)((int)word_ptr_2 + -4) = (uint)g_render_frame_skip;
            *(undefined4 *)((int)word_ptr_2 + -8) = 0xe75ff;
            bflib_system_io_fn_0f6a84();
            word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
          }
        }
        else if (flag == 9) {
          if ((g_lb_display_draw_flags._1_1_ & 4) != 0) {
            *(uint *)((int)word_ptr_2 + -4) = (uint)g_render_frame_skip;
            *(undefined4 *)((int)word_ptr_2 + -8) = 0xe7666;
            bflib_system_io_fn_0f6a84();
            word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
          }
        }
        else {
          switch(*local_10) {
          case 1:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 4;
            break;
          case 2:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 8;
            break;
          case 3:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 0x10;
            break;
          case 4:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 1;
            break;
          case 5:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 2;
            break;
          case 0xb:
            g_lb_display_draw_flags._1_1_ = g_lb_display_draw_flags._1_1_ ^ 4;
            break;
          case 0xc:
            g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags ^ 0x40;
            break;
          case 0xe:
            local_10 = local_10 + 1;
            g_render_frame_skip = *local_10;
          }
        }
      }
      else {
        auStack_20[2] = (uint)flag * 6 + g_lb_current_font_ptr + -0xba;
        if (((byte)g_lb_display_draw_flags & 0x40) == 0) {
          *(undefined4 *)((int)word_ptr_2 + -4) = 0xe754f;
          watcom_crt_fn_13a710();
        }
        else {
          *(undefined4 *)((int)word_ptr_2 + -4) = 0xe7542;
          bflib_system_io_fn_0f3300();
        }
        if ((g_lb_display_draw_flags._1_1_ & 4) != 0) {
          word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
          *(uint *)((int)word_ptr_2 + -4) = (uint)g_render_frame_skip;
          *(undefined4 *)((int)word_ptr_2 + -8) = 0xe759e;
          bflib_system_io_fn_0f6a84();
        }
      }
      local_10 = local_10 + 1;
      word_ptr_2 = (uint *)word_ptr;
    } while (local_10 < local_14);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e7701 (Original VA: 0xe7701, Ghidra: FUN_000e7701)
 * Prototype: void bflib_system_io_fn_0e7701(void);
 * Address  : 0xe7701 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e7701
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e7701(void)

{
  undefined1 *word_ptr;
  int *arg_eax;
  undefined1 arg_dl;
  
  word_ptr = (undefined1 *)*arg_eax;
  *arg_eax = (int)(word_ptr + 1);
  *word_ptr = arg_dl;
  arg_eax[4] = arg_eax[4] + 1;
  return;
}

/******************************************************************************
 * Function : dk_sprintf (Original VA: 0xe7714, Ghidra: FUN_000e7714)
 * Prototype: void dk_sprintf(int param_1);
 * Address  : 0xe7714 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Formatted string builder (sprintf)
 * Callers  : 238 -> battle_has_members_after_0144d2, cdtest_ldata_dkwind00_dat_0150f0, combchk_control_structure_gt_ca_016423, combobj_creature_has_melee_instance_016df5, combobj_creature_has_melee_instance_017052, combold_thing_stuck_finding_melee_0171e4, combtool_creature_combat_already_state_017fee, comptool_computer_thing_hand_01e119 ...
 * Callees  : 1 -> bflib_system_io_fn_0f6c65
 ******************************************************************************/
void dk_sprintf(int param_1)

{
  int val;
  
  val = bflib_system_io_fn_0f6c65(&stack0x0000000c);
  *(undefined1 *)(param_1 + val) = 0;
  return;
}

/******************************************************************************
 * Function : LbScreenSetup (Original VA: 0xe7750, Ghidra: FUN_000e7750)
 * Prototype: undefined8 LbScreenSetup(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
 * Address  : 0xe7750 (Size: 373 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Initialize VESA/VGA screen mode, resolution, and palette
 * Callers  : 3 -> setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites, setup_show_bullfrog_legal_splash
 * Callees  : 8 -> bflib_system_io_fn_0e6a30, bflib_system_io_fn_0e6a6c, LbTextDraw, LbPaletteSet, bflib_system_io_fn_0ebeec, bflib_system_io_fn_0f0cc0, bflib_system_io_fn_0f7780, bflib_system_io_fn_0f7786
 ******************************************************************************/
undefined8 LbScreenSetup(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int val;
  undefined4 uval;
  char extraout_CL;
  char extraout_CL_00;
  char ch;
  char extraout_CL_01;
  char extraout_CL_02;
  undefined4 arg_edx;
  byte local_4c;
  
  bflib_system_io_fn_0f7780();
  val = bflib_system_io_fn_0e6a30();
  if (val == 0) {
    uval = 0xffffffff;
  }
  else {
    bflib_system_io_fn_0ebeec();
    ch = extraout_CL;
    if (g_display_bss_003d9876 == 0) {
      bflib_system_io_fn_0f7786();
      g_display_bss_003d9876 = (ushort)local_4c;
      ch = extraout_CL_00;
    }
    if (*(int *)(&g_data_00194fea + ch * 0x26) < 0x100) {
      g_display_bss_003d987a = 0;
      bflib_system_io_fn_0f7786();
      ch = extraout_CL_02;
    }
    else {
      g_display_bss_003d987a = 1;
      bflib_system_io_fn_0f0cc0();
      ch = extraout_CL_01;
    }
    g_display_bss_003d9814 = 0xa0000;
    g_screen_width = (uint)*(ushort *)(&g_data_00194fe0 + ch * 0x26);
    g_lb_display_draw_flags = 0;
    g_screen_height = (uint)*(ushort *)(&g_data_00194fe2 + ch * 0x26);
    g_render_frame_skip = 0;
    g_screen_pitch = param_2;
    g_display_bss_003d9838 = param_3;
    g_active_screen_mode = (short)ch;
    bflib_system_io_fn_0e6a6c();
    LbTextDraw();
    if (param_4 != 0) {
      LbPaletteSet(param_4);
    }
    uval = 1;
    g_display_bss_003d98c4 = 1;
    g_display_bss_003d9810 = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e7904 (Original VA: 0xe7904, Ghidra: FUN_000e7904)
 * Prototype: undefined8 bflib_system_io_fn_0e7904(void);
 * Address  : 0xe7904 (Size: 39 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e7904
 * Callers  : 11 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_why_are_we_here_02dfac, frontend_fn_02f9f5, frontend_fn_030cb9, frontmap_fn_032d8c, game_out_sync_gameturn_036ff4, game_fn_0374c3, setup_init_game_screen_and_subsystems ...
 * Callees  : 1 -> bflib_system_io_fn_0f77d0
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e7904(void)

{
  undefined4 arg_edx;
  
  bflib_system_io_fn_0f77d0();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : LbScreenReset (Original VA: 0xe792c, Ghidra: FUN_000e792c)
 * Prototype: undefined8 LbScreenReset(void);
 * Address  : 0xe792c (Size: 79 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Restore previous video mode and release screen buffers
 * Callers  : 3 -> setup_shutdown_video_and_audio, setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites
 * Callees  : 2 -> bflib_system_io_fn_0ebeec, bflib_system_io_fn_0f7786
 ******************************************************************************/
undefined8 LbScreenReset(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  
  if (g_display_bss_003d98c4 == 0) {
    uval = 0xffffffff;
  }
  else {
    bflib_system_io_fn_0ebeec();
    bflib_system_io_fn_0f7786();
    uval = 1;
    g_display_bss_003d98c4 = 0;
    g_display_bss_003d9810 = 0;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : LbScreenLock (Original VA: 0xe797c, Ghidra: FUN_000e797c)
 * Prototype: undefined4 LbScreenLock(void);
 * Address  : 0xe797c (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Lock software backbuffer for direct pixel rendering
 * Callers  : 14 -> cdtest_ldata_dkwind00_dat_0150f0, cdtest_fn_015251, frontend_why_are_we_here_02dfac, frontend_fn_02fda1, frontnet_fn_035c1e, frontnet_fn_035c5a, frontnet_LbNetwork_Stop_035d29, frontnet_fn_035e19 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 LbScreenLock(void)

{
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e79ac (Original VA: 0xe79ac, Ghidra: FUN_000e79ac)
 * Prototype: undefined8 bflib_system_io_fn_0e79ac(void);
 * Address  : 0xe79ac (Size: 80 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e79ac
 * Callers  : 1 -> bflib_system_io_fn_0e6a30
 * Callees  : 2 -> bflib_video_fn_0f0d90, bflib_system_io_fn_0f0e64
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bflib_system_io_fn_0e79ac(void)

{
  undefined4 arg_edx;
  int loop_i;
  undefined8 uval;
  
  bflib_video_fn_0f0d90();
  for (loop_i = 0x26; *(short *)(&g_data_00194fe0 + loop_i) != 0; loop_i = loop_i + 0x26) {
    if (0xff < *(int *)(&g_data_00194fea + loop_i)) {
      uval = bflib_system_io_fn_0f0e64();
      loop_i = (int)((ulonglong)uval >> 0x20);
      *(int *)(&g_data_00194fe6 + loop_i) = (int)uval;
    }
  }
  g_data_0019500c = 1;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e79fc (Original VA: 0xe79fc, Ghidra: FUN_000e79fc)
 * Prototype: undefined8 bflib_system_io_fn_0e79fc(void);
 * Address  : 0xe79fc (Size: 175 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e79fc
 * Callers  : 16 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_why_are_we_here_02dfac, frontend_fn_02f9f5, frontmap_fn_032d8c, frontnet_fn_035c1e, frontnet_LbNetwork_Stop_035d29, frontnet_fn_035e19, game_out_sync_gameturn_036ff4 ...
 * Callees  : 3 -> bflib_system_io_fn_0eb840, bflib_system_io_fn_0eb974, bflib_system_io_fn_0f0d1c
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e79fc(void)

{
  int loop_i;
  int extraout_ECX;
  undefined4 arg_edx;
  int extraout_EDX;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  short short_val;
  
  flag = 0;
  bflib_system_io_fn_0eb840();
  if (g_display_bss_003d987a == '\0') {
    word_ptr = g_display_bss_003d9818;
    word_ptr_2 = g_display_bss_003d9814;
    for (loop_i = g_screen_pitch * g_display_bss_003d9838 >> 2; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
  }
  else {
    word_ptr = g_display_bss_003d9818;
    short_val = 0;
    if (g_screen_pitch * g_display_bss_003d9838 == 0) {
      bflib_system_io_fn_0eb974();
      return CONCAT44(arg_edx,1);
    }
    do {
      bflib_system_io_fn_0f0d1c(short_val);
      word_ptr_2 = word_ptr;
      word_ptr_3 = g_display_bss_003d9814;
      for (loop_i = extraout_ECX >> 2; loop_i != 0; loop_i = loop_i + -1) {
        *word_ptr_3 = *word_ptr_2;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      }
      word_ptr = word_ptr + 0x4000;
      short_val = short_val + 1;
    } while (extraout_EDX != 0);
  }
  bflib_system_io_fn_0eb974();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e7aac (Original VA: 0xe7aac, Ghidra: FUN_000e7aac)
 * Prototype: undefined8 bflib_system_io_fn_0e7aac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6, uint param_7,undefined1 param_8);
 * Address  : 0xe7aac (Size: 440 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e7aac
 * Callers  : 0 -> 
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0eb840, bflib_system_io_fn_0eb974, bflib_system_io_fn_0f0d1c
 ******************************************************************************/
undefined8
bflib_system_io_fn_0e7aac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6,
            uint param_7,undefined1 param_8)

{
  int val;
  uint loop_i;
  uint extraout_ECX;
  undefined4 arg_edx;
  int extraout_EDX;
  uint extraout_EDX_00;
  uint loop_i_2;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_1c;
  
  flag = 0;
  bflib_system_io_fn_0eb840();
  local_20 = extraout_EDX + param_5 * g_screen_width;
  local_28 = extraout_EDX + param_6 + param_5 * g_screen_width;
  local_2c = local_20 >> 0x10;
  word_ptr = (undefined4 *)(param_1 + param_2 + param_3 * g_screen_pitch);
  if (g_display_bss_003d987a != '\0') {
    bflib_system_io_fn_0f0d1c();
  }
  for (local_1c = 0; (local_1c & 0xffff) < param_7; local_1c = local_1c + 1) {
    loop_i = local_20 >> 0x10;
    if (loop_i != local_2c) {
      bflib_system_io_fn_0f0d1c();
      loop_i = extraout_EDX_00;
    }
    word_ptr_3 = (undefined4 *)((local_20 & 0xffff) + 0xa0000);
    if (loop_i == local_28 >> 0x10) {
      word_ptr_2 = word_ptr;
      for (loop_i_2 = param_6 >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *word_ptr_3 = *word_ptr_2;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      }
      for (loop_i_2 = param_6 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
      }
      LbScreenWaitVbi();
      local_2c = loop_i;
    }
    else {
      loop_i_2 = 0x10000 - (local_20 & 0xffff);
      val = param_6 - loop_i_2;
      word_ptr_2 = word_ptr;
      for (loop_i = loop_i_2 >> 2; loop_i != 0; loop_i = loop_i - 1) {
        *word_ptr_3 = *word_ptr_2;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      }
      for (loop_i = loop_i_2 & 3; loop_i != 0; loop_i = loop_i - 1) {
        *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
      }
      LbScreenWaitVbi(loop_i_2,val,param_8);
      bflib_system_io_fn_0f0d1c();
      word_ptr_3 = (undefined4 *)(loop_i_2 + (int)word_ptr);
      word_ptr_2 = (undefined4 *)0xa0000;
      for (loop_i = extraout_ECX >> 2; loop_i != 0; loop_i = loop_i - 1) {
        *word_ptr_2 = *word_ptr_3;
        word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      }
      for (loop_i = extraout_ECX & 3; loop_i != 0; loop_i = loop_i - 1) {
        *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr_3;
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      }
      LbScreenWaitVbi(loop_i_2,val,(undefined4 *)(loop_i_2 + (int)word_ptr));
      local_2c = local_28 >> 0x10;
    }
    local_20 = local_20 + g_screen_pitch;
    local_28 = local_28 + g_screen_width;
    word_ptr = (undefined4 *)((int)word_ptr + g_screen_pitch);
  }
  bflib_system_io_fn_0eb974();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e7c64 (Original VA: 0xe7c64, Ghidra: FUN_000e7c64)
 * Prototype: undefined8 bflib_system_io_fn_0e7c64(byte param_1);
 * Address  : 0xe7c64 (Size: 253 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e7c64
 * Callers  : 0 -> 
 * Callees  : 3 -> bflib_system_io_fn_0eb840, bflib_system_io_fn_0eb974, bflib_system_io_fn_0f0d1c
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e7c64(byte param_1)

{
  int val;
  undefined4 arg_edx;
  int val_2;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  int val_3;
  short short_val;
  
  flag = 0;
  bflib_system_io_fn_0eb840();
  val_2 = g_screen_pitch * g_display_bss_003d9838;
  if (g_display_bss_003d987a == '\0') {
    val_2 = val_2 >> 2;
    word_ptr = g_display_bss_003d9818;
    word_ptr_2 = g_display_bss_003d9814;
    do {
      *word_ptr_2 = *word_ptr;
      (word_ptr + (uint)flag * -2 + 1)[-1] =
           (uint)param_1 * 0x1000000 + (uint)CONCAT12(param_1,CONCAT11(param_1,param_1));
      val_2 = val_2 + -1;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    } while (val_2 != 0);
  }
  else {
    word_ptr = g_display_bss_003d9818;
    short_val = 0;
    if (val_2 == 0) {
      bflib_system_io_fn_0eb974();
      return CONCAT44(arg_edx,1);
    }
    do {
      val_3 = val_2;
      if (0xffff < val_2) {
        val_3 = 0x10000;
      }
      bflib_system_io_fn_0f0d1c(val_3,short_val);
      val = val_3 >> 2;
      word_ptr_2 = word_ptr;
      word_ptr_3 = g_display_bss_003d9814;
      do {
        *word_ptr_3 = *word_ptr_2;
        (word_ptr_2 + (uint)flag * -2 + 1)[-1] =
             (uint)CONCAT12(param_1,CONCAT11(param_1,param_1)) + (uint)param_1 * 0x1000000;
        val = val + -1;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      } while (val != 0);
      val_2 = val_2 - val_3;
      word_ptr = word_ptr + 0x4000;
      short_val = short_val + 1;
    } while (val_2 != 0);
  }
  bflib_system_io_fn_0eb974();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8214 (Original VA: 0xe8214, Ghidra: FUN_000e8214)
 * Prototype: undefined8 bflib_system_io_fn_0e8214(void);
 * Address  : 0xe8214 (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8214
 * Callers  : 5 -> panmap_fn_062578, panmap_update_player_view_state_0627b5, bflib_system_io_fn_0e8d80, bflib_system_io_fn_0efe94, bflib_system_io_fn_0f0064
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8214(void)

{
  byte flag;
  undefined4 arg_edx;
  
  do {
    flag = in(0x3da);
  } while ((flag & 8) == 0);
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8230 (Original VA: 0xe8230, Ghidra: FUN_000e8230)
 * Prototype: void bflib_system_io_fn_0e8230(void);
 * Address  : 0xe8230 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8230
 * Callers  : 2 -> frontend_fn_02f1c8, frontend_fn_02f1d2
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e8230(void)

{
  undefined *arg_eax;
  
  PTR_FUN_000e8238_00195434 = arg_eax;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8238 (Original VA: 0xe8238, Ghidra: FUN_000e8238)
 * Prototype: void bflib_system_io_fn_0e8238(void);
 * Address  : 0xe8238 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8238
 * Callers  : 1 -> bflib_system_io_fn_0e823c
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e8238(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e823c (Original VA: 0xe823c, Ghidra: FUN_000e823c)
 * Prototype: undefined8 bflib_system_io_fn_0e823c(void);
 * Address  : 0xe823c (Size: 205 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e823c
 * Callers  : 2 -> setup_free_gui_data_files, LbDataLoadAll
 * Callees  : 5 -> bflib_system_io_fn_0e8238, LbDataFreeAll, bflib_system_io_fn_0e9498, bflib_system_io_fn_0e97a0, bflib_system_io_fn_0e984c
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e823c(void)

{
  int thing;
  char *str_ptr;
  undefined4 uval;
  int val;
  undefined4 arg_edx;
  code *local_18;
  
  if ((*(byte *)(thing + 0x28) & 1) == 0) {
    local_18 = LbFileLoadAt;
  }
  else {
    local_18 = bflib_system_io_fn_0e9498;
  }
  LbDataFreeAll();
  str_ptr = (char *)(*(code *)PTR_FUN_000e8238_00195434)();
  if (*str_ptr == '*') {
    uval = (*local_18)();
    **(undefined4 **)(thing + 0x1c) = uval;
    if (**(int **)(thing + 0x1c) != 0) {
LAB_000e82e8:
      if (*(int **)(thing + 0x20) != (int *)0x0) { /* thing->model */
        **(int **)(thing + 0x20) = **(int **)(thing + 0x1c) + *(int *)(thing + 0x24); /* thing->model */
      }
      uval = 1;
      goto LAB_000e8300;
    }
  }
  else {
    val = bflib_system_io_fn_0e97a0();
    *(int *)(thing + 0x24) = val;
    if (val < 1) {
      uval = 0xffffff9b;
      goto LAB_000e8300;
    }
    uval = (*local_18)();
    **(undefined4 **)(thing + 0x1c) = uval;
    if (**(int **)(thing + 0x1c) != 0) {
      val = bflib_system_io_fn_0e984c();
      if (val != *(int *)(thing + 0x24)) {
        **(undefined4 **)(thing + 0x1c) = 0;
        **(undefined4 **)(thing + 0x20) = 0; /* thing->model */
        uval = 0xffffff9b;
        *(undefined4 *)(thing + 0x24) = 0;
        goto LAB_000e8300;
      }
      goto LAB_000e82e8;
    }
  }
  uval = 0xffffff9c;
LAB_000e8300:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : LbDataLoadAll (Original VA: 0xe830c, Ghidra: FUN_000e830c)
 * Prototype: undefined8 LbDataLoadAll(void);
 * Address  : 0xe830c (Size: 186 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Load a table of DATA/*.DAT and *.TAB asset files
 * Callers  : 11 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_ldata_front_raw_02ffe4, frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_netflag_dat_031a51, fronttor_ldata_fronttor_tab_036654, instance_data_swpe_dat_04c0ac, setup_load_core_game_data, setup_init_game_screen_and_subsystems ...
 * Callees  : 5 -> dk_sprintf, bflib_system_io_fn_0e823c, LbDataFreeAll, bflib_system_io_fn_0e8568, bflib_system_io_fn_0f0f8c
 ******************************************************************************/
undefined8 LbDataLoadAll(void)

{
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  int extraout_EDX;
  int loop_i;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int extraout_EDX_03;
  ushort uval;
  undefined8 uval_2;
  undefined1 local_148 [152];
  undefined1 local_b0 [152];
  
  bflib_system_io_fn_0f0f8c(s_LbDataLoadAll_0016cc98);
  uval = 0;
  loop_i = *(int *)(extraout_ECX + 0x1c);
  val = extraout_ECX;
  while (loop_i != 0) {
    LbDataFreeAll();
    val = extraout_ECX_00;
    loop_i = *(int *)(extraout_EDX + 0x48);
  }
  for (loop_i = *(int *)(val + 0x1c); loop_i != 0; loop_i = *(int *)(loop_i + 0x48)) {
    uval_2 = bflib_system_io_fn_0e823c();
    loop_i = (int)((ulonglong)uval_2 >> 0x20);
    if ((int)uval_2 == -100) {
      bflib_system_io_fn_0e8568(s_ERROR__Allocation__s__0016cca6,loop_i);
      uval = uval + 1;
      dk_sprintf(local_b0,s_LbDataLoadAll_____Memory_alloact_0016ccbd,extraout_EDX_00);
      loop_i = extraout_EDX_01;
    }
    else if ((int)uval_2 == -0x65) {
      bflib_system_io_fn_0e8568(s_ERROR__File__s__0016ccff,loop_i);
      uval = uval + 1;
      dk_sprintf(local_148,s_LbDataLoadAll_____Error_loading_f_0016cd10,extraout_EDX_02);
      loop_i = extraout_EDX_03;
    }
  }
  return CONCAT44(arg_edx,(uint)uval);
}

/******************************************************************************
 * Function : LbDataFreeAll (Original VA: 0xe83c8, Ghidra: FUN_000e83c8)
 * Prototype: undefined8 LbDataFreeAll(void);
 * Address  : 0xe83c8 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Free a table of loaded DATA/*.DAT and *.TAB asset files
 * Callers  : 4 -> setup_free_gui_data_files, bflib_system_io_fn_0e823c, LbDataLoadAll, LbDataFree
 * Callees  : 1 -> bflib_system_io_fn_0e94b0
 ******************************************************************************/
undefined8 LbDataFreeAll(void)

{
  int arg_eax;
  undefined4 arg_edx;
  int extraout_EDX;
  
  if (**(int **)(arg_eax + 0x1c) != 0) {
    bflib_system_io_fn_0e94b0();
    **(undefined4 **)(extraout_EDX + 0x1c) = 0;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : LbDataFree (Original VA: 0xe83f0, Ghidra: FUN_000e83f0)
 * Prototype: undefined8 LbDataFree(void);
 * Address  : 0xe83f0 (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Free a single loaded asset buffer
 * Callers  : 11 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_ldata_front_raw_030057, frontmap_ldata_dkflag00_dat_031213, frontmap_ldata_netflag_dat_031bd6, fronttor_ldata_fronttor_tab_03699b, instance_data_swpe_dat_04c14e, setup_shutdown_video_and_audio, setup_init_game_screen_and_subsystems ...
 * Callees  : 1 -> LbDataFreeAll
 ******************************************************************************/
undefined8 LbDataFree(void)

{
  int val;
  int arg_eax;
  undefined4 arg_edx;
  int extraout_EDX;
  
  val = *(int *)(arg_eax + 0x1c);
  while (val != 0) {
    LbDataFreeAll();
    val = *(int *)(extraout_EDX + 0x48);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8420 (Original VA: 0xe8420, Ghidra: FUN_000e8420)
 * Prototype: undefined8 bflib_system_io_fn_0e8420(int param_1);
 * Address  : 0xe8420 (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8420
 * Callers  : 1 -> bflib_system_io_fn_0e8d80
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8420(int param_1)

{
  undefined1 uval;
  undefined4 arg_edx;
  int val;
  int val_2;
  
  out(0x3c7,0);
  val = 0;
  do {
    uval = in(0x3c9);
    *(undefined1 *)(param_1 + val) = uval;
    uval = in(0x3c9);
    *(undefined1 *)(param_1 + val + 1) = uval;
    val_2 = val + 2;
    uval = in(0x3c9);
    val = val + 3;
    *(undefined1 *)(param_1 + val_2) = uval;
  } while (val < 0x300);
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : LbPaletteSet (Original VA: 0xe846c, Ghidra: FUN_000e846c)
 * Prototype: undefined8 LbPaletteSet(undefined1 *param_1);
 * Address  : 0xe846c (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Upload 768-byte 256-color RGB palette to VGA DAC
 * Callers  : 17 -> cdtest_ldata_dkwind00_dat_0150f0, door_process_thing_entity_02347d, effect_process_thing_entity_024ab9, frontend_why_are_we_here_02dfac, frontend_fn_02f9f5, frontend_ldata_front_raw_02ffe4, frontmap_ldata_dkflag00_dat_030ef8, frontmap_fn_032d30 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 LbPaletteSet(undefined1 *param_1)

{
  ushort uval;
  undefined4 arg_edx;
  undefined1 *word_ptr;
  
  out(0x3c6,0xff);
  uval = 0;
  while (uval < 0x100) {
    out(0x3c8,(char)uval);
    out(0x3c9,*param_1);
    word_ptr = param_1 + 2;
    out(0x3c9,param_1[1]);
    uval = uval + 1;
    param_1 = param_1 + 3;
    out(0x3c9,*word_ptr);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : LbKeyboardRead (Original VA: 0xe8560, Ghidra: FUN_000e8560)
 * Prototype: undefined4 LbKeyboardRead(void);
 * Address  : 0xe8560 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Poll keyboard input state
 * Callers  : 7 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_why_are_we_here_02dfac, frontnet_fn_035c1e, frontnet_fn_035c5a, frontnet_LbNetwork_Stop_035d29, game_fn_0377eb, setup_show_bullfrog_legal_splash
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 LbKeyboardRead(void)

{
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8568 (Original VA: 0xe8568, Ghidra: FUN_000e8568)
 * Prototype: void bflib_system_io_fn_0e8568(void);
 * Address  : 0xe8568 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8568
 * Callers  : 1 -> LbDataLoadAll
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e8568(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8830 (Original VA: 0xe8830, Ghidra: FUN_000e8830)
 * Prototype: undefined8 bflib_system_io_fn_0e8830(void);
 * Address  : 0xe8830 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8830
 * Callers  : 0 -> 
 * Callees  : 1 -> LbTimerClock
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8830(void)

{
  undefined4 arg_edx;
  undefined8 clock_ms;
  
  clock_ms = LbTimerClock();
  return CONCAT44(arg_edx,(uint)((uint)((int)((ulonglong)clock_ms >> 0x20) * 2) <
                               (uint)((int)clock_ms - g_bss_003d9ac8)));
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8858 (Original VA: 0xe8858, Ghidra: FUN_000e8858)
 * Prototype: undefined8 bflib_system_io_fn_0e8858(void);
 * Address  : 0xe8858 (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8858
 * Callers  : 1 -> cdtest_ldata_dkwind00_dat_0150f0
 * Callees  : 1 -> LbTimerClock
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8858(void)

{
  int clock_ms;
  undefined4 arg_edx;
  undefined8 clock_ms_2;
  
  clock_ms = LbTimerClock();
  do {
    clock_ms_2 = LbTimerClock();
  } while ((uint)((int)clock_ms_2 - clock_ms) < (uint)((ulonglong)clock_ms_2 >> 0x20));
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8876 (Original VA: 0xe8876, Ghidra: FUN_000e8876)
 * Prototype: longlong bflib_system_io_fn_0e8876(void);
 * Address  : 0xe8876 (Size: 60 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8876
 * Callers  : 1 -> cdtest_fn_0151f8
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong bflib_system_io_fn_0e8876(void)

{
  code *str_ptr;
  undefined4 arg_eax;
  undefined2 arg_dx;
  uint unaff_retaddr;
  
  _FUN_0019543e = arg_eax;
  g_data_00195442 = arg_dx;
  if ((g_data_00195902 < 2) || (7 < g_data_00195902)) {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
  }
  else {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e88b2 (Original VA: 0xe88b2, Ghidra: FUN_000e88b2)
 * Prototype: void bflib_system_io_fn_0e88b2(void);
 * Address  : 0xe88b2 (Size: 161 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e88b2
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0f4714, watcom_crt_fn_19543e
 ******************************************************************************/
/* WARNING: This function may have set the stack pointer */

void bflib_system_io_fn_0e88b2(void)

{
  uint extraout_EDX;
  uint unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined2 in_CS;
  undefined2 in_SS;
  ushort in_DS;
  undefined1 auStack_24 [4];
  
  bflib_system_io_fn_0f4714();
  g_data_00195444 = g_data_001958e4;
  g_data_001958e4 = &g_bss_003d9acc;
  g_bss_003d9ec4 = (unaff_EBP & 0xffff) * 0x10 + (unaff_ESI & 0xffff);
  if ((g_data_00195902 < 2) || (7 < g_data_00195902)) {
    if (g_data_00195902 == 1) {
      g_bss_003d9ec8 = (uint)in_DS;
    }
    else {
      g_bss_003d9ec8 = 0x34;
    }
  }
  else {
    g_bss_003d9ec8 = 0x34;
  }
  g_bss_003d9ebc = extraout_EDX & 0xffff;
  g_bss_003d9ec0 = unaff_EDI & 0xffff;
  g_bss_003d9eb4 = 0xe8936;
  g_data_00195438._0_4_ = auStack_24;
  g_data_00195438._4_2_ = in_SS;
  g_bss_003d9eb8 = in_CS;
  watcom_crt_fn_19543e();
  g_data_001958e4 = (undefined *)g_data_00195444;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8960 (Original VA: 0xe8960, Ghidra: FUN_000e8960)
 * Prototype: undefined8 bflib_system_io_fn_0e8960(void);
 * Address  : 0xe8960 (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8960
 * Callers  : 19 -> evil_settings_dat_029738, evil_fn_029800, evil_process_map_subtile_0298b5, file_process_map_subtile_029979, file_process_slabmap_tile_0299f8, file_process_map_subtile_029ac2, file_fn_029b54, file_fn_029bfe ...
 * Callees  : 1 -> bflib_system_io_fn_0f78b2
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8960(void)

{
  int val;
  undefined4 arg_edx;
  
  val = bflib_system_io_fn_0f78b2();
  return CONCAT44(arg_edx,(uint)(val == 0));
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8974 (Original VA: 0xe8974, Ghidra: FUN_000e8974)
 * Prototype: void bflib_system_io_fn_0e8974(void);
 * Address  : 0xe8974 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8974
 * Callers  : 6 -> bflib_system_io_fn_0e98f0, bflib_sound_bf48_load_music_bank_0f2188, bflib_system_io_fn_0f23de, bflib_system_io_fn_0f25b4, bflib_system_io_fn_0fdad0, watcom_crt_fn_114acb
 * Callees  : 1 -> bflib_system_io_fn_0f78ed
 ******************************************************************************/
void bflib_system_io_fn_0e8974(void)

{
  bflib_system_io_fn_0f78ed();
  return;
}

/******************************************************************************
 * Function : LbFileOpen (Original VA: 0xe8980, Ghidra: FUN_000e8980)
 * Prototype: undefined4 LbFileOpen(void);
 * Address  : 0xe8980 (Size: 154 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Open file by path and mode
 * Callers  : 23 -> cdtest_fn_0151f8, file_update_player_dungeon_02c833, file_data_ceiling_txt_02d32d, frontend_fn_02e6c4, frontend_continue_sav_02ed41, frontend_continue_sav_02ff2e, frontnet_save_config_net_035b51, frontnet_save_config_net_035bbf ...
 * Callees  : 5 -> bflib_system_io_fn_0e8960, bflib_system_io_fn_0f78fe, bflib_system_io_fn_0f790b, bflib_system_io_fn_0f79b7, bflib_system_io_fn_0f79e0
 ******************************************************************************/
undefined4 LbFileOpen(void)

{
  int val;
  undefined4 uval;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uval_2;
  byte arg_dl;
  char extraout_DL;
  
  val = bflib_system_io_fn_0e8960();
  if (val == 0) {
    if (extraout_DL == '\x02') {
      return 0xffffffff;
    }
    if (extraout_DL == '\x01') {
      arg_dl = arg_dl ^ 1;
    }
  }
  uval_2 = extraout_ECX;
  if (arg_dl == 0) {
    bflib_system_io_fn_0f78fe();
    bflib_system_io_fn_0f790b();
    bflib_system_io_fn_0f79b7();
    uval_2 = extraout_ECX_00;
  }
  uval = 0xffffffff;
  if (arg_dl == 0) {
    uval = bflib_system_io_fn_0f79e0(uval_2,0x222,0x40);
  }
  else if (arg_dl < 2) {
    uval = bflib_system_io_fn_0f79e0(uval_2,0x202,0x40);
  }
  else if (arg_dl == 2) {
    uval = bflib_system_io_fn_0f79e0(uval_2,0x200,0x40);
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8a1c (Original VA: 0xe8a1c, Ghidra: FUN_000e8a1c)
 * Prototype: undefined4 bflib_system_io_fn_0e8a1c(void);
 * Address  : 0xe8a1c (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8a1c
 * Callers  : 26 -> cdtest_fn_0151f8, file_update_player_dungeon_02c833, file_data_ceiling_txt_02d32d, frontend_fn_02e6c4, frontend_continue_sav_02ed41, frontend_continue_sav_02ff2e, frontnet_save_config_net_035b51, frontnet_save_config_net_035bbf ...
 * Callees  : 1 -> bflib_system_io_fn_0f79b7
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e8a1c(void)

{
  int val;
  
  val = bflib_system_io_fn_0f79b7();
  if (val == 0) {
    return 1;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : LbFileWrite (Original VA: 0xe8a34, Ghidra: FUN_000e8a34)
 * Prototype: undefined4 LbFileWrite(void);
 * Address  : 0xe8a34 (Size: 75 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Write bytes to open file handle
 * Callers  : 16 -> heap_fn_03a857, write_turn_packets_to_file, load_turn_packets_from_file, sndheap_trying_use_two_sound_06e2aa, bflib_system_io_fn_0e98f0, bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_fn_0ead2f, bflib_system_io_fn_0eb021 ...
 * Callees  : 1 -> bflib_system_io_fn_0f7c2e
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000e8a7b) */

undefined4 LbFileWrite(void)

{
  undefined4 uval;
  byte arg_bl;
  
  if (arg_bl == 0) {
    uval = bflib_system_io_fn_0f7c2e();
    return uval;
  }
  if (arg_bl < 2) {
    uval = bflib_system_io_fn_0f7c2e();
    return uval;
  }
  if (arg_bl == 2) {
    uval = bflib_system_io_fn_0f7c2e();
    return uval;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : LbFileRead (Original VA: 0xe8a80, Ghidra: FUN_000e8a80)
 * Prototype: void LbFileRead(void);
 * Address  : 0xe8a80 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Read bytes from open file handle
 * Callers  : 25 -> cdtest_fn_0151f8, file_update_player_dungeon_02c833, file_data_ceiling_txt_02d32d, frontend_fn_02e6c4, frontend_continue_sav_02ed41, frontend_continue_sav_02ff2e, frontnet_save_config_net_035b51, heap_fn_03a857 ...
 * Callees  : 1 -> bflib_system_io_fn_0f7c71
 ******************************************************************************/
void LbFileRead(void)

{
  bflib_system_io_fn_0f7c71();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8a8c (Original VA: 0xe8a8c, Ghidra: FUN_000e8a8c)
 * Prototype: void bflib_system_io_fn_0e8a8c(void);
 * Address  : 0xe8a8c (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8a8c
 * Callers  : 4 -> frontnet_save_config_net_035bbf, open_new_packet_file_for_save, write_turn_packets_to_file, bflib_system_io_fn_0e98c8
 * Callees  : 1 -> bflib_system_io_fn_0f7d6c
 ******************************************************************************/
void bflib_system_io_fn_0e8a8c(void)

{
  bflib_system_io_fn_0f7d6c();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8a98 (Original VA: 0xe8a98, Ghidra: FUN_000e8a98)
 * Prototype: undefined8 bflib_system_io_fn_0e8a98(void);
 * Address  : 0xe8a98 (Size: 41 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8a98
 * Callers  : 8 -> file_data_creature_txt_02b36c, file_load_script_file_02c502, file_update_player_dungeon_02c833, frontend_continue_sav_02ed41, frontend_continue_sav_02ff2e, bflib_system_io_fn_0e97a0, bflib_system_io_fn_0eb531, bflib_sound_fn_114cf2
 * Callees  : 3 -> LbFileOpen, bflib_system_io_fn_0e8a1c, bflib_system_io_fn_0f7f41
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8a98(void)

{
  int file_handle;
  undefined4 arg_edx;
  
  file_handle = LbFileOpen();
  if (file_handle != -1) {
    file_handle = bflib_system_io_fn_0f7f41();
    bflib_system_io_fn_0e8a1c();
  }
  return CONCAT44(arg_edx,file_handle);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8ac4 (Original VA: 0xe8ac4, Ghidra: FUN_000e8ac4)
 * Prototype: undefined4 bflib_system_io_fn_0e8ac4(void);
 * Address  : 0xe8ac4 (Size: 41 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8ac4
 * Callers  : 1 -> bflib_system_io_fn_0eb531
 * Callees  : 2 -> bflib_system_io_fn_0e8b48, bflib_system_io_fn_0f7f7e
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e8ac4(void)

{
  int val;
  
  val = bflib_system_io_fn_0f7f7e();
  if (val != 0) {
    return 0xffffffff;
  }
  bflib_system_io_fn_0e8b48();
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8af0 (Original VA: 0xe8af0, Ghidra: FUN_000e8af0)
 * Prototype: undefined8 bflib_system_io_fn_0e8af0(void);
 * Address  : 0xe8af0 (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8af0
 * Callers  : 1 -> bflib_system_io_fn_0eb531
 * Callees  : 2 -> bflib_system_io_fn_0e8b48, bflib_system_io_fn_0f7f9b
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8af0(void)

{
  int val;
  undefined4 arg_edx;
  
  val = bflib_system_io_fn_0f7f9b();
  if (val != 0) {
    return CONCAT44(arg_edx,0xffffffff);
  }
  bflib_system_io_fn_0e8b48();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8b30 (Original VA: 0xe8b30, Ghidra: FUN_000e8b30)
 * Prototype: undefined4 bflib_system_io_fn_0e8b30(void);
 * Address  : 0xe8b30 (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8b30
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_strcpy
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e8b30(void)

{
  int val;
  
  val = dk_strcpy();
  if (val != 0) {
    return 0xffffffff;
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8b48 (Original VA: 0xe8b48, Ghidra: FUN_000e8b48)
 * Prototype: void bflib_system_io_fn_0e8b48(void);
 * Address  : 0xe8b48 (Size: 315 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8b48
 * Callers  : 2 -> bflib_system_io_fn_0e8ac4, bflib_system_io_fn_0e8af0
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e8b48(void)

{
  char ch;
  char *arg_eax;
  char *str_ptr;
  char *str_ptr_2;
  char *str_ptr_3;
  
  str_ptr_2 = arg_eax + 0xd6;
  str_ptr = str_ptr_2;
  str_ptr_3 = arg_eax;
  do {
    ch = *str_ptr;
    *str_ptr_3 = ch;
    if (ch == '\0') break;
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_3[1] = ch;
    str_ptr_3 = str_ptr_3 + 2;
  } while (ch != '\0');
  str_ptr = arg_eax + 0x90;
  do {
    ch = *str_ptr_2;
    *str_ptr = ch;
    if (ch == '\0') break;
    ch = str_ptr_2[1];
    str_ptr_2 = str_ptr_2 + 2;
    str_ptr[1] = ch;
    str_ptr = str_ptr + 2;
  } while (ch != '\0');
  *(undefined4 *)(arg_eax + 0xa2) = *(undefined4 *)(arg_eax + 0xd2);
  *(int *)(arg_eax + 0x9e) = *(int *)(arg_eax + 0xca) >> 0x18;
  arg_eax[0xaf] = arg_eax[0xd0] & 0x1f;
  arg_eax[0xa6] = '\0';
  arg_eax[0xb0] = (char)((*(ushort *)(arg_eax + 0xd0) & 0x1e0) >> 5);
  arg_eax[0xa7] = '\0';
  arg_eax[0xa8] = '\0';
  arg_eax[0xa9] = '\0';
  arg_eax[0xaa] = '\0';
  *(ushort *)(arg_eax + 0xb1) = (*(ushort *)(arg_eax + 0xd0) >> 9) + 0x7bc;
  arg_eax[0xae] = '\0';
  arg_eax[0xad] = '\0';
  arg_eax[0xb6] = (arg_eax[0xce] & 0x1fU) * '\x02';
  arg_eax[0xac] = '\0';
  arg_eax[0xab] = '\0';
  arg_eax[0xb5] = (char)((*(ushort *)(arg_eax + 0xce) & 0x7e0) >> 5);
  arg_eax[0xb3] = '\0';
  arg_eax[0xb7] = '\0';
  arg_eax[0xb4] = (byte)((ushort)*(undefined2 *)(arg_eax + 0xce) >> 0xb);
  return;
}

/******************************************************************************
 * Function : LbFileClose (Original VA: 0xe8c83, Ghidra: FUN_000e8c83)
 * Prototype: undefined4 * LbFileClose(void);
 * Address  : 0xe8c83 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Close open file handle
 * Callers  : 25 -> cdtest_fn_015251, evil_settings_dat_029738, file_fn_02d4a7, frontend_fn_02ee00, frontmap_ldata_netflag_dat_031bd6, frontmap_fn_032612, frontmap_fn_0327b5, frontmap_enough_memory_game_structure_0329ae ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 * LbFileClose(void)

{
  undefined4 *arg_eax;
  uint loop_i;
  undefined4 *arg_edx;
  uint arg_ebx;
  undefined4 *word_ptr;
  
  word_ptr = arg_eax;
  for (loop_i = arg_ebx >> 2; loop_i != 0; loop_i = loop_i - 1) {
    *word_ptr = *arg_edx;
    arg_edx = arg_edx + 1;
    word_ptr = word_ptr + 1;
  }
  for (loop_i = arg_ebx & 3; loop_i != 0; loop_i = loop_i - 1) {
    *(undefined1 *)word_ptr = *(undefined1 *)arg_edx;
    arg_edx = (undefined4 *)((int)arg_edx + 1);
    word_ptr = (undefined4 *)((int)word_ptr + 1);
  }
  return arg_eax;
}

/******************************************************************************
 * Function : LbMemoryCopy (Original VA: 0xe8ca8, Ghidra: FUN_000e8ca8)
 * Prototype: char * LbMemoryCopy(void);
 * Address  : 0xe8ca8 (Size: 31 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Fast memory block copy / clear helper
 * Callers  : 42 -> comptask_fn_01b8c4, file_keeper_cfg_02a0be, frontend_why_are_we_here_02dfac, frontend_draw_text_overlay_02eeb9, frontend_draw_text_overlay_02f414, frontend_fn_02f8a2, frontend_fn_02f9f5, frontend_draw_text_overlay_0303ad ...
 * Callees  : 0 -> 
 ******************************************************************************/
char * LbMemoryCopy(void)

{
  char ch;
  char *arg_eax;
  char *str_ptr;
  char *arg_edx;
  
  str_ptr = arg_eax;
  do {
    ch = *arg_edx;
    *str_ptr = ch;
    if (ch == '\0') {
      return arg_eax;
    }
    ch = arg_edx[1];
    arg_edx = arg_edx + 2;
    str_ptr[1] = ch;
    str_ptr = str_ptr + 2;
  } while (ch != '\0');
  return arg_eax;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8cc8 (Original VA: 0xe8cc8, Ghidra: FUN_000e8cc8)
 * Prototype: longlong bflib_system_io_fn_0e8cc8(void);
 * Address  : 0xe8cc8 (Size: 66 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8cc8
 * Callers  : 14 -> comptask_process_dungeon_room_01cf1c, frontend_fn_02daae, frontend_fn_02dc8e, input_fn_0498d9, panmap_fn_062d70, sound3d_fn_06ff36, engine3_clear_visible_subtile_span_list, navigate_fn_0be524 ...
 * Callees  : 0 -> 
 ******************************************************************************/
longlong bflib_system_io_fn_0e8cc8(void)

{
  int val;
  uint arg_eax;
  uint arg_edx;
  uint loop_i;
  
  if (arg_eax != 0) {
    val = 0x1f;
    if (arg_eax != 0) {
      for (; arg_eax >> val == 0; val = val + -1) {
      }
    }
    for (loop_i = (uint)*(ushort *)(&g_data_000e8d0a + val * 2); (int)(arg_eax / loop_i) < (int)loop_i;
        loop_i = loop_i + arg_eax / loop_i >> 1) {
    }
    return CONCAT44(arg_edx,loop_i);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8d4a (Original VA: 0xe8d4a, Ghidra: FUN_000e8d4a)
 * Prototype: undefined8 bflib_system_io_fn_0e8d4a(void);
 * Address  : 0xe8d4a (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8d4a
 * Callers  : 27 -> compturn_fn_02252b, game_fn_036f48, game_fn_0373bc, game_fn_03743b, LbTimerClock, bflib_system_io_fn_1012c0, bflib_sound_closing_socket_101c78, bflib_system_io_fn_102e4c ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e8d4a(void)

{
  uint uval;
  undefined4 arg_edx;
  
  uval = bflib_system_io_fn_0f802e();
  if (uval < g_bss_003df164) {
    uval = uval + 0x83d600;
  }
  return CONCAT44(arg_edx,uval - g_bss_003df164);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8d50 (Original VA: 0xe8d50, Ghidra: FUN_000e8d50)
 * Prototype: longdouble bflib_system_io_fn_0e8d50(void);
 * Address  : 0xe8d50 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8d50
 * Callers  : 13 -> compturn_fn_02252b, file_fn_02d545, game_fn_0373bc, game_fn_03743b, lair_fn_04de8c, moodneed_fn_051954, pom_fn_065864, pom_fn_0659ab ...
 * Callees  : 0 -> 
 ******************************************************************************/
longdouble bflib_system_io_fn_0e8d50(void)

{
  longdouble in_ST0;
  
  return ROUND(in_ST0);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8d6e (Original VA: 0xe8d6e, Ghidra: FUN_000e8d6e)
 * Prototype: longdouble bflib_system_io_fn_0e8d6e(void);
 * Address  : 0xe8d6e (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8d6e
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f80e8) */

longdouble bflib_system_io_fn_0e8d6e(void)

{
  int unaff_EBP;
  
  if (unaff_EBP != 0) {
    bflib_system_io_fn_0f8108();
  }
  return (longdouble)0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8d73 (Original VA: 0xe8d73, Ghidra: FUN_000e8d73)
 * Prototype: void bflib_system_io_fn_0e8d73(void);
 * Address  : 0xe8d73 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8d73
 * Callers  : 1 -> watcom_crt_fn_10ef5b
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e8d73(void)

{
  code *str_ptr;
  char ch;
  
  if (g_data_0019595c != '\x01') {
    return;
  }
  if (g_data_00195904 == '\0') {
    if (g_data_00195902 == '\t') {
      (**(code **)(g_data_001955b8 + 0x30))();
    }
    else if (g_data_00195902 == '\0') {
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
    }
    else if (g_data_00195902 == '\x01') {
      watcom_crt_fn_113662();
    }
    else {
      ch = watcom_crt_fn_113662();
      if (ch != '\x01') {
        bflib_system_io_fn_0f82d7();
      }
    }
  }
  else {
    bflib_system_io_fn_0f8312();
  }
  g_data_0019595c = 0;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8d80 (Original VA: 0xe8d80, Ghidra: FUN_000e8d80)
 * Prototype: uint bflib_system_io_fn_0e8d80(void);
 * Address  : 0xe8d80 (Size: 419 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8d80
 * Callers  : 6 -> effect_process_thing_entity_024ab9, frontend_why_are_we_here_02dfac, frontend_fn_030782, frontmap_fn_032d30, instance_process_thing_entity_04baad, instance_process_thing_entity_04bbe4
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0e8214, bflib_system_io_fn_0e8420, LbPaletteSet
 ******************************************************************************/
uint bflib_system_io_fn_0e8d80(void)

{
  undefined1 *arg_eax;
  short loop_i;
  byte arg_dl;
  char arg_bl;
  int val;
  char acStackY_8314 [32764];
  char local_314 [768];
  byte local_14;
  
  local_14 = arg_dl;
  if (arg_bl == '\x01') {
    bflib_system_io_fn_0e8420(&g_bss_003da1cc);
    if (arg_eax == (undefined1 *)0x0) {
      arg_eax = &g_bss_003d9ecc;
      LbScreenWaitVbi();
    }
    for (g_bss_003da4cc = 0; (int)g_bss_003da4cc <= (int)(uint)local_14; g_bss_003da4cc = g_bss_003da4cc + 1
        ) {
      for (loop_i = 0; val = (int)loop_i, val < 0x300; loop_i = loop_i + 1) {
        local_314[val] =
             (char)((int)((int)(short)((ushort)(byte)arg_eax[val] -
                                      (ushort)(byte)(&g_bss_003da1cc)[val]) * g_bss_003da4cc) /
                   (int)(uint)local_14) + (&g_bss_003da1cc)[val];
      }
      bflib_system_io_fn_0e8214();
      LbPaletteSet(local_314);
    }
    g_bss_003da4d0 = 0;
    return g_bss_003da4cc;
  }
  if (g_bss_003da4d0 == '\0') {
    g_bss_003da4cc = 0;
    g_bss_003da4d0 = '\x01';
    bflib_system_io_fn_0e8420(&g_bss_003da1cc);
    if (arg_eax == (undefined1 *)0x0) {
      LbScreenWaitVbi();
    }
  }
  else {
    g_bss_003da4cc = g_bss_003da4cc + 1;
    if (arg_dl == g_bss_003da4cc) {
      g_bss_003da4d0 = '\0';
    }
  }
  if (arg_eax == (undefined1 *)0x0) {
    arg_eax = &g_bss_003d9ecc;
  }
  for (loop_i = 0; val = (int)loop_i, val < 0x300; loop_i = loop_i + 1) {
    local_314[val] =
         (char)((int)((int)(short)((ushort)(byte)arg_eax[val] -
                                  (ushort)(byte)(&g_bss_003da1cc)[val]) * g_bss_003da4cc) /
               (int)(uint)local_14) + (&g_bss_003da1cc)[val];
  }
  bflib_system_io_fn_0e8214();
  LbPaletteSet(local_314);
  return g_bss_003da4cc;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8f24 (Original VA: 0xe8f24, Ghidra: FUN_000e8f24)
 * Prototype: undefined4 bflib_system_io_fn_0e8f24(void);
 * Address  : 0xe8f24 (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8f24
 * Callers  : 6 -> effect_process_thing_entity_024ab9, frontmap_fn_031273, frontmap_fn_032d8c, instance_fn_04bb03, instance_update_player_view_state_04bd35, setup_show_loading_raw_screen
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e8f24(void)

{
  g_bss_003da4d0 = 0;
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e8f34 (Original VA: 0xe8f34, Ghidra: FUN_000e8f34)
 * Prototype: undefined1 bflib_system_io_fn_0e8f34(void);
 * Address  : 0xe8f34 (Size: 1061 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e8f34
 * Callers  : 4 -> inits_fn_0430ba, magic_fn_05067c, setup_load_vga_256_palettes, setup_load_alpha_and_light_tables
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 bflib_system_io_fn_0e8f34(void)

{
  byte *arg_eax;
  byte *byte_ptr;
  ushort uval;
  uint arg_ecx;
  uint arg_edx;
  uint uval_2;
  uint arg_ebx;
  uint uval_3;
  int loop_i;
  uint uval_4;
  uint uval_5;
  uint uval_6;
  byte local_23c [256];
  byte local_13c [256];
  int local_3c;
  uint local_38;
  byte *local_34;
  uint local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  int local_1c;
  undefined1 *local_18;
  uint local_14;
  byte local_10;
  
  uval_6 = arg_edx & 0xff;
  uval_4 = arg_ebx & 0xff;
  uval_5 = arg_ecx & 0xff;
  uval = 0;
  uval_3 = 0;
  local_2c = 0x100;
  local_14 = 0;
  local_1c = 999999;
  byte_ptr = arg_eax;
  do {
    local_38 = (uval_6 - *byte_ptr) * (uval_6 - *byte_ptr) + (uval_4 - byte_ptr[1]) * (uval_4 - byte_ptr[1]);
    local_3c = (uval_5 - byte_ptr[2]) * (uval_5 - byte_ptr[2]);
    local_3c = local_38 + local_3c;
    if ((local_3c < local_1c) && (local_1c = local_3c, local_3c == 0)) goto LAB_000e934d;
    uval_3 = uval_3 + 1;
    byte_ptr = byte_ptr + 3;
  } while (uval_3 < 0x100);
  uval_3 = 0;
  local_18 = local_23c;
  local_20 = arg_eax;
  do {
    local_38 = (uval_6 - *arg_eax) * (uval_6 - *arg_eax) + (uval_4 - arg_eax[1]) * (uval_4 - arg_eax[1]);
    local_3c = (uval_5 - arg_eax[2]) * (uval_5 - arg_eax[2]);
    if (local_38 + local_3c == local_1c) {
      uval = uval + 1;
      *local_18 = (char)uval_3;
      local_18 = local_18 + 1;
    }
    uval_3 = uval_3 + 1;
    arg_eax = arg_eax + 3;
  } while (uval_3 < local_2c);
  if (uval == 1) {
    local_10 = local_23c[0];
  }
  else {
    local_28 = 999999;
    for (loop_i = 0; loop_i < (int)(uint)uval; loop_i = loop_i + 1) {
      local_34 = local_20 + (uint)local_23c[loop_i] * 3;
      uval_3 = (int)(uval_6 - *local_34) >> 0x1f;
      uval_2 = (int)(uval_4 - local_34[1]) >> 0x1f;
      local_3c = ((uval_6 - *local_34 ^ uval_3) - uval_3) + ((uval_4 - local_34[1] ^ uval_2) - uval_2);
      local_38 = (uint)local_34[2];
      uval_3 = uval_5 - local_34[2];
      uval_2 = (int)uval_3 >> 0x1f;
      local_3c = ((uval_3 ^ uval_2) - uval_2) + local_3c;
      if (local_3c < local_28) {
        local_28 = local_3c;
      }
    }
    local_24 = local_13c;
    for (loop_i = 0; loop_i < (int)(uint)uval; loop_i = loop_i + 1) {
      byte_ptr = local_20 + (uint)local_23c[loop_i] * 3;
      uval_3 = (int)(uval_6 - *byte_ptr) >> 0x1f;
      local_3c = (uval_6 - *byte_ptr ^ uval_3) - uval_3;
      uval_3 = (int)(uval_4 - byte_ptr[1]) >> 0x1f;
      local_38 = local_3c + ((uval_4 - byte_ptr[1] ^ uval_3) - uval_3);
      local_34 = (byte *)(uint)byte_ptr[2];
      uval_3 = uval_5 - byte_ptr[2];
      uval_2 = (int)uval_3 >> 0x1f;
      if (((uval_3 ^ uval_2) - uval_2) + local_38 == local_28) {
        *local_24 = local_23c[loop_i];
        local_14 = local_14 + 1;
        local_24 = local_24 + 1;
      }
    }
    if ((short)local_14 == 1) {
      return local_13c[0];
    }
    uval_3 = 999999;
    for (loop_i = 0; loop_i < (int)(local_14 & 0xffff); loop_i = loop_i + 1) {
      byte_ptr = local_20 + (uint)local_13c[loop_i] * 3;
      uval_4 = (uint)byte_ptr[2] * (uint)byte_ptr[2] +
              (uint)*byte_ptr * (uint)*byte_ptr * 2 + (uint)byte_ptr[1] * 2 * (uint)byte_ptr[1];
      if (uval_4 < uval_3) {
        local_10 = local_13c[loop_i];
        uval_3 = uval_4;
      }
    }
  }
  uval_3 = (uint)local_10;
LAB_000e934d:
  return (char)uval_3;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9460 (Original VA: 0xe9460, Ghidra: FUN_000e9460)
 * Prototype: void bflib_system_io_fn_0e9460(void);
 * Address  : 0xe9460 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9460
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0e9554, bflib_system_io_fn_0f844b
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_fn_0e9460(void)

{
  undefined4 extraout_EDX;
  
  bflib_system_io_fn_0f844b();
  bflib_system_io_fn_0e9554();
  g_data_00195454 = extraout_EDX;
  return;
}

/******************************************************************************
 * Function : LbFileLoadAt (Original VA: 0xe9484, Ghidra: FUN_000e9484)
 * Prototype: void LbFileLoadAt(void);
 * Address  : 0xe9484 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Allocate and load entire file into memory
 * Callers  : 16 -> eyelens_memory_already_allocated_02700c, heap_graphics_heap_already_allocated_03a3d4, setup_load_text_strings_dat, setup_allocate_graphics_heap, setup_show_bullfrog_legal_splash, bflib_system_io_alloc_lock_0eb1dd, bflib_system_io_time_elapsed_between_reads_0eb6b6, LbNetwork_Init_0ed4e0 ...
 * Callees  : 1 -> bflib_system_io_fn_0e9594
 ******************************************************************************/
void LbFileLoadAt(void)

{
  bflib_system_io_fn_0e9594();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9498 (Original VA: 0xe9498, Ghidra: FUN_000e9498)
 * Prototype: void bflib_system_io_fn_0e9498(void);
 * Address  : 0xe9498 (Size: 22 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9498
 * Callers  : 2 -> setup_free_gui_data_files, bflib_system_io_fn_0e823c
 * Callees  : 1 -> bflib_system_io_fn_0e9594
 ******************************************************************************/
void bflib_system_io_fn_0e9498(void)

{
  bflib_system_io_fn_0e9594();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e94b0 (Original VA: 0xe94b0, Ghidra: FUN_000e94b0)
 * Prototype: undefined8 bflib_system_io_fn_0e94b0(void);
 * Address  : 0xe94b0 (Size: 31 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e94b0
 * Callers  : 22 -> eyelens_memory_already_allocated_02700c, eyelens_fn_0270e0, heap_graphics_heap_already_allocated_03a3d4, heap_fn_03a4bb, setup_free_gui_data_files, setup_shutdown_video_and_audio, setup_allocate_graphics_heap, setup_show_bullfrog_legal_splash ...
 * Callees  : 1 -> bflib_system_io_fn_0e9670
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e94b0(void)

{
  int val;
  undefined4 arg_edx;
  
  val = bflib_system_io_fn_0e9670();
  if (val != 0) {
    return CONCAT44(arg_edx,1);
  }
  return CONCAT44(arg_edx,0xffffffff);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e94d0 (Original VA: 0xe94d0, Ghidra: FUN_000e94d0)
 * Prototype: undefined8 bflib_system_io_fn_0e94d0(void);
 * Address  : 0xe94d0 (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e94d0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e94d0(void)

{
  undefined4 arg_edx;
  
  if (g_bss_003db4f4 == 0) {
    g_bss_003da4d4 = g_bss_003db4f4;
    g_bss_003db4f4 = 1;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e94f8 (Original VA: 0xe94f8, Ghidra: FUN_000e94f8)
 * Prototype: undefined8 bflib_system_io_fn_0e94f8(void);
 * Address  : 0xe94f8 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e94f8
 * Callers  : 1 -> setup_shutdown_video_and_audio
 * Callees  : 1 -> bflib_system_io_fn_0e9644
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e94f8(void)

{
  undefined4 arg_edx;
  
  g_bss_003db4f4 = 0;
  g_bss_003da4d4 = 0;
  bflib_system_io_fn_0e9644();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9554 (Original VA: 0xe9554, Ghidra: FUN_000e9554)
 * Prototype: void bflib_system_io_fn_0e9554(void);
 * Address  : 0xe9554 (Size: 60 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9554
 * Callers  : 1 -> bflib_system_io_fn_0e9460
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e9554(void)

{
  int *arg_eax;
  int *int_ptr;
  int *int_ptr_2;
  
  arg_eax[0x401] = 0;
  int_ptr = arg_eax;
  int_ptr_2 = arg_eax;
  do {
    int_ptr_2 = int_ptr_2 + 4;
    *int_ptr = (int)int_ptr_2;
    int_ptr = int_ptr + 4;
  } while (int_ptr != arg_eax + 0x3fc);
  arg_eax[0x3fc] = 0;
  arg_eax[0x400] = (int)arg_eax;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9590 (Original VA: 0xe9590, Ghidra: FUN_000e9590)
 * Prototype: void bflib_system_io_fn_0e9590(void);
 * Address  : 0xe9590 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9590
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e9590(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9594 (Original VA: 0xe9594, Ghidra: FUN_000e9594)
 * Prototype: undefined4 bflib_system_io_fn_0e9594(void);
 * Address  : 0xe9594 (Size: 175 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9594
 * Callers  : 2 -> LbFileLoadAt, bflib_system_io_fn_0e9498
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0e970c, bflib_system_io_fn_0f4cb8
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e9594(void)

{
  int arg_eax;
  int val;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *word_ptr;
  int arg_edx;
  int arg_ebx;
  undefined8 uval;
  
  if (arg_edx == 0) {
    return 0;
  }
  if (*(int *)(arg_eax + 0x1000) != 0) {
    if (arg_ebx == 0) {
      val = bflib_system_io_fn_0f4cb8();
      if (val == 0) {
        return 0;
      }
      LbScreenWaitVbi();
      *(undefined2 *)(extraout_ECX_00 + 3) = 0;
      extraout_ECX_00[1] = val;
      extraout_ECX_00[2] = arg_edx;
      word_ptr = extraout_ECX_00;
    }
    else {
      uval = bflib_system_io_fn_0e970c();
      val = (int)((ulonglong)uval >> 0x20);
      if ((uint)uval == 0) {
        return 0;
      }
      *(int *)(val + 8) = arg_edx;
      *(short *)(val + 0xc) = (short)((ulonglong)uval >> 0x10);
      *(uint *)(val + 4) = ((uint)uval & 0xffff) << 4;
      LbScreenWaitVbi();
      word_ptr = extraout_ECX;
    }
    g_bss_003da4d4 = g_bss_003da4d4 + arg_edx;
    *(undefined4 *)(arg_eax + 0x1000) = **(undefined4 **)(arg_eax + 0x1000);
    *word_ptr = *(undefined4 *)(arg_eax + 0x1004);
    *(undefined4 **)(arg_eax + 0x1004) = word_ptr;
    return word_ptr[1];
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9644 (Original VA: 0xe9644, Ghidra: FUN_000e9644)
 * Prototype: void bflib_system_io_fn_0e9644(void);
 * Address  : 0xe9644 (Size: 42 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9644
 * Callers  : 1 -> bflib_system_io_fn_0e94f8
 * Callees  : 1 -> bflib_system_io_fn_0e9670
 ******************************************************************************/
void bflib_system_io_fn_0e9644(void)

{
  int val;
  int arg_eax;
  
  val = *(int *)(arg_eax + 0x1004);
  while (val != 0) {
    bflib_system_io_fn_0e9670();
    val = *(int *)(arg_eax + 0x1004);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9670 (Original VA: 0xe9670, Ghidra: FUN_000e9670)
 * Prototype: undefined4 bflib_system_io_fn_0e9670(void);
 * Address  : 0xe9670 (Size: 156 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9670
 * Callers  : 2 -> bflib_system_io_fn_0e94b0, bflib_system_io_fn_0e9644
 * Callees  : 2 -> bflib_system_io_fn_0e9760, bflib_system_io_fn_0f4d9b
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e9670(void)

{
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  int arg_edx;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *word_ptr_3;
  
  if (arg_edx != 0) {
    word_ptr_3 = *(undefined4 **)(arg_eax + 0x1004);
    word_ptr_2 = *(undefined4 **)(arg_eax + 0x1004);
    while ((word_ptr = word_ptr_3, word_ptr != (undefined4 *)0x0 && (arg_edx != word_ptr[1]))) {
      word_ptr_2 = word_ptr;
      word_ptr_3 = (undefined4 *)*word_ptr;
    }
    if (word_ptr == (undefined4 *)0x0) {
      return 0;
    }
    g_bss_003da4d4 = g_bss_003da4d4 - word_ptr[2];
    if (*(short *)(word_ptr + 3) == 0) {
      bflib_system_io_fn_0f4d9b();
      val = extraout_ECX_00;
      word_ptr_3 = extraout_EDX_00;
    }
    else {
      bflib_system_io_fn_0e9760();
      val = extraout_ECX;
      word_ptr_3 = extraout_EDX;
    }
    if (word_ptr_3 == *(undefined4 **)(val + 0x1004)) {
      *(undefined4 *)(val + 0x1004) = **(undefined4 **)(val + 0x1004);
    }
    else {
      *word_ptr_2 = *word_ptr_3;
    }
    *word_ptr_3 = *(undefined4 *)(val + 0x1000);
    *(undefined4 **)(val + 0x1000) = word_ptr_3;
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e970c (Original VA: 0xe970c, Ghidra: FUN_000e970c)
 * Prototype: undefined8 bflib_system_io_fn_0e970c(void);
 * Address  : 0xe970c (Size: 83 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e970c
 * Callers  : 1 -> bflib_system_io_fn_0e9594
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e970c(void)

{
  uint arg_eax;
  uint uval;
  uint extraout_ECX;
  undefined4 arg_edx;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_2c;
  
  uval = 0;
  if (arg_eax < 0xa0000) {
    bflib_system_io_fn_0f7786();
    uval = extraout_ECX;
    if (local_2c == 0) {
      uval = local_38 << 0x10 | local_44 & 0xffff;
    }
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9760 (Original VA: 0xe9760, Ghidra: FUN_000e9760)
 * Prototype: void bflib_system_io_fn_0e9760(void);
 * Address  : 0xe9760 (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9760
 * Callers  : 1 -> bflib_system_io_fn_0e9670
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
void bflib_system_io_fn_0e9760(void)

{
  short arg_ax;
  
  if (arg_ax != 0) {
    bflib_system_io_fn_0f7786();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e97a0 (Original VA: 0xe97a0, Ghidra: FUN_000e97a0)
 * Prototype: undefined8 bflib_system_io_fn_0e97a0(void);
 * Address  : 0xe97a0 (Size: 170 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e97a0
 * Callers  : 5 -> frontmap_enough_memory_game_structure_0329ae, open_packet_file_for_load, setup_load_text_strings_dat, bflib_system_io_fn_0e823c, bflib_system_io_fn_0e984c
 * Callees  : 5 -> LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead, bflib_system_io_fn_0e8a98, bflib_system_io_fn_0ea1f4
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e97a0(void)

{
  int file_handle;
  undefined4 arg_edx;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  file_handle = LbFileOpen();
  if (file_handle != -1) {
    file_handle = LbFileRead();
    if (file_handle == -1) {
      bflib_system_io_fn_0e8a1c();
      file_handle = -1;
    }
    else {
      bflib_system_io_fn_0e8a1c();
      file_handle = bflib_system_io_fn_0ea1f4();
      if (file_handle == 0) {
        file_handle = (((uint)local_1c * 0x100 + (uint)local_1b) * 0x100 + (uint)local_1a) * 0x100 +
                (uint)local_19;
      }
      else {
        file_handle = bflib_system_io_fn_0e8a98();
      }
    }
  }
  return CONCAT44(arg_edx,file_handle);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e984c (Original VA: 0xe984c, Ghidra: FUN_000e984c)
 * Prototype: int bflib_system_io_fn_0e984c(void);
 * Address  : 0xe984c (Size: 121 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e984c
 * Callers  : 41 -> eyelens_data_frac_dat_027130, evil_settings_dat_029738, evil_fn_029800, evil_process_map_subtile_0298b5, file_process_map_subtile_029979, file_process_slabmap_tile_0299f8, file_process_map_subtile_029ac2, file_fn_029b54 ...
 * Callees  : 6 -> LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead, bflib_system_io_fn_0e97a0, bflib_system_io_fn_0f0f8c, bflib_system_io_fn_0f845c
 ******************************************************************************/
int bflib_system_io_fn_0e984c(void)

{
  int file_handle;
  int file_handle_2;
  
  file_handle = bflib_system_io_fn_0e97a0();
  if (((file_handle == -1) || (file_handle_2 = LbFileOpen(), file_handle_2 == -1)) ||
     (file_handle_2 = LbFileRead(), file_handle_2 == -1)) {
    return -1;
  }
  bflib_system_io_fn_0e8a1c();
  file_handle_2 = bflib_system_io_fn_0f845c();
  if (file_handle_2 < 0) {
    bflib_system_io_fn_0f0f8c(s_ERROR_decompressing__s_0016ce34);
    return -1;
  }
  if (file_handle_2 != 0) {
    return file_handle_2;
  }
  return file_handle;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e98c8 (Original VA: 0xe98c8, Ghidra: FUN_000e98c8)
 * Prototype: int bflib_system_io_fn_0e98c8(void);
 * Address  : 0xe98c8 (Size: 39 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e98c8
 * Callers  : 16 -> file_settings_dat_02a355, file_process_map_subtile_02a3ac, file_process_slabmap_tile_02a427, file_fn_02a558, file_fn_02a653, file_process_thing_entity_02a6c5, file_update_creature_and_thing_02a9f0, file_fn_02c736 ...
 * Callees  : 3 -> LbFileOpen, bflib_system_io_fn_0e8a1c, bflib_system_io_fn_0e8a8c
 ******************************************************************************/
int bflib_system_io_fn_0e98c8(void)

{
  int file_handle;
  
  file_handle = LbFileOpen();
  if (file_handle != -1) {
    file_handle = bflib_system_io_fn_0e8a8c();
    bflib_system_io_fn_0e8a1c();
  }
  return file_handle;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e98f0 (Original VA: 0xe98f0, Ghidra: FUN_000e98f0)
 * Prototype: int bflib_system_io_fn_0e98f0(uint param_1);
 * Address  : 0xe98f0 (Size: 596 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e98f0
 * Callers  : 0 -> 
 * Callees  : 4 -> bflib_system_io_fn_0e8974, LbFileWrite, LbFileRead, bflib_system_io_fn_0e9d2c
 ******************************************************************************/
int bflib_system_io_fn_0e98f0(uint param_1)

{
  char ch;
  int val;
  int val_2;
  uint arg_ecx;
  uint uval;
  int extraout_ECX;
  int extraout_ECX_00;
  uint loop_i;
  char *arg_edx;
  undefined4 *arg_ebx;
  int val_3;
  undefined4 *word_ptr;
  char *str_ptr;
  char *str_ptr_2;
  undefined4 *word_ptr_2;
  byte flag;
  char acStack_b4 [132];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  flag = 0;
  str_ptr_2 = acStack_b4;
  if (arg_ecx < 0x100) {
    val = -3;
  }
  else {
    uval = 0xffffffff;
    str_ptr = arg_edx;
    do {
      if (uval == 0) break;
      uval = uval - 1;
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
    } while (ch != '\0');
    local_10 = ~uval - 1;
    if (0x80 < local_10) {
      return -4;
    }
    val = bflib_system_io_fn_0e8974();
    if (val != -1) {
      local_14 = -2;
      if ((param_1 & 2) == 0) {
        do {
          ch = *arg_edx;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = arg_edx[1];
          arg_edx = arg_edx + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
      }
      else {
        str_ptr_2 = acStack_b4 + 1;
        local_10 = extraout_ECX + 1;
        acStack_b4[0] = '\n';
        do {
          ch = *arg_edx;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = arg_edx[1];
          arg_edx = arg_edx + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
      }
      local_18 = LbFileRead();
      local_1c = extraout_ECX_00;
      do {
        if (local_18 < local_10) break;
        val_3 = 0;
        if (-1 < local_18 - local_10) {
          do {
            val_2 = bflib_system_io_fn_0e9d2c();
            if (val_2 != 0) {
              local_14 = val + local_1c + val_3;
              if (acStack_b4[0] == '\n') {
                local_14 = local_14 + 1;
              }
              break;
            }
            val_3 = val_3 + 1;
          } while (val_3 <= local_18 - local_10);
        }
        if (local_14 == -2) {
          uval = local_18 - val_3;
          word_ptr = (undefined4 *)((int)arg_ebx + val_3);
          word_ptr_2 = arg_ebx;
          for (loop_i = uval >> 2; loop_i != 0; loop_i = loop_i - 1) {
            *word_ptr_2 = *word_ptr;
            word_ptr = word_ptr + (uint)flag * -2 + 1;
            word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          }
          for (loop_i = uval & 3; loop_i != 0; loop_i = loop_i - 1) {
            *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
            word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
            word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          }
          local_1c = local_1c + val_3;
          local_18 = LbFileRead();
          if (local_18 == -1) {
            return -1;
          }
          local_18 = uval + local_18;
        }
      } while (local_14 == -2);
      val = LbFileWrite();
      if (val != -1) {
        val = local_14;
      }
    }
  }
  return val;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9b44 (Original VA: 0xe9b44, Ghidra: FUN_000e9b44)
 * Prototype: undefined4 bflib_system_io_fn_0e9b44(uint param_1);
 * Address  : 0xe9b44 (Size: 246 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9b44
 * Callers  : 1 -> bflib_system_io_fn_0f0ec0
 * Callees  : 1 -> bflib_system_io_fn_0ea370
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e9b44(uint param_1)

{
  char ch;
  int arg_eax;
  int val;
  char *arg_ecx;
  char *extraout_ECX;
  uint uval;
  char *arg_edx;
  uint uval_2;
  char *arg_ebx;
  char *str_ptr;
  char *str_ptr_2;
  byte flag;
  
  flag = 0;
  uval_2 = 0;
  if (arg_eax != 0) {
    val = bflib_system_io_fn_0ea370();
    if (val == -1) {
      return 0xffffffff;
    }
    uval_2 = 0xffffffff;
    str_ptr = extraout_ECX;
    do {
      if (uval_2 == 0) break;
      uval_2 = uval_2 - 1;
      ch = *str_ptr;
      str_ptr = str_ptr + (uint)flag * -2 + 1;
    } while (ch != '\0');
    uval_2 = ~uval_2;
    arg_ecx[uval_2 - 1] = '\\';
    arg_ecx[uval_2] = '\0';
  }
  if (arg_edx != (char *)0x0) {
    uval = 0xffffffff;
    str_ptr = arg_edx;
    do {
      if (uval == 0) break;
      uval = uval - 1;
      ch = *str_ptr;
      str_ptr = str_ptr + (uint)flag * -2 + 1;
    } while (ch != '\0');
    uval_2 = uval_2 + (~uval - 1);
    if (param_1 - 2 <= uval_2) {
      return 0xffffffff;
    }
    val = -1;
    str_ptr = arg_ecx;
    do {
      str_ptr_2 = str_ptr;
      if (val == 0) break;
      val = val + -1;
      str_ptr_2 = str_ptr + (uint)flag * -2 + 1;
      ch = *str_ptr;
      str_ptr = str_ptr_2;
    } while (ch != '\0');
    str_ptr_2 = str_ptr_2 + -1;
    str_ptr = arg_edx;
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    if (arg_edx[uval_2 - 1] != '\\') {
      arg_ecx[uval_2] = '\\';
      uval_2 = uval_2 + 1;
      arg_ecx[uval_2] = '\0';
    }
  }
  uval = 0xffffffff;
  str_ptr = arg_ebx;
  do {
    if (uval == 0) break;
    uval = uval - 1;
    ch = *str_ptr;
    str_ptr = str_ptr + (uint)flag * -2 + 1;
  } while (ch != '\0');
  if (param_1 <= uval_2 + (~uval - 1)) {
    return 0xffffffff;
  }
  val = -1;
  do {
    str_ptr = arg_ecx;
    if (val == 0) break;
    val = val + -1;
    str_ptr = arg_ecx + (uint)flag * -2 + 1;
    ch = *arg_ecx;
    arg_ecx = str_ptr;
  } while (ch != '\0');
  str_ptr = str_ptr + -1;
  do {
    ch = *arg_ebx;
    *str_ptr = ch;
    if (ch == '\0') {
      return 1;
    }
    ch = arg_ebx[1];
    arg_ebx = arg_ebx + 2;
    str_ptr[1] = ch;
    str_ptr = str_ptr + 2;
  } while (ch != '\0');
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9d2c (Original VA: 0xe9d2c, Ghidra: FUN_000e9d2c)
 * Prototype: bool bflib_system_io_fn_0e9d2c(void);
 * Address  : 0xe9d2c (Size: 78 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9d2c
 * Callers  : 1 -> bflib_system_io_fn_0e98f0
 * Callees  : 2 -> bflib_system_io_fn_0ea1f4, bflib_system_io_fn_0f43c7
 ******************************************************************************/
bool bflib_system_io_fn_0e9d2c(void)

{
  int val;
  int arg_ecx;
  int extraout_ECX;
  uint arg_ebx;
  uint uval;
  
  if (arg_ecx == 0) {
    val = bflib_system_io_fn_0ea1f4();
    return val == 0;
  }
  uval = 0;
  if (arg_ebx != 0) {
    do {
      bflib_system_io_fn_0f43c7();
      val = bflib_system_io_fn_0f43c7();
      if (extraout_ECX != val) {
        return false;
      }
      uval = uval + 1;
    } while (uval < arg_ebx);
  }
  return true;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9d7a (Original VA: 0xe9d7a, Ghidra: FUN_000e9d7a)
 * Prototype: int bflib_system_io_fn_0e9d7a(void);
 * Address  : 0xe9d7a (Size: 83 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9d7a
 * Callers  : 3 -> file_install_path_029eef, watcom_crt_fn_10ed88, watcom_crt_fn_1263ec
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0e9d7a(void)

{
  byte flag;
  byte *arg_eax;
  uint uval;
  undefined1 *arg_edx;
  int arg_ebx;
  
  while( true ) {
    if (arg_ebx == 0) {
      return 0;
    }
    flag = *arg_eax;
    uval = (uint)CONCAT11(*arg_edx,flag);
    if ((0x40 < flag) && (flag < 0x5b)) {
      uval = (uint)CONCAT11(*arg_edx,flag + 0x20);
    }
    flag = (byte)(uval >> 8);
    if ((0x40 < flag) && (flag < 0x5b)) {
      uval = (uint)CONCAT11(flag + 0x20,(char)uval);
    }
    flag = (byte)(uval >> 8);
    if ((byte)uval != flag) break;
    if (flag == 0) {
      return 0;
    }
    arg_eax = arg_eax + 1;
    arg_edx = arg_edx + 1;
    arg_ebx = arg_ebx + -1;
  }
  return (uval & 0xff) - (uint)flag;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9dd0 (Original VA: 0xe9dd0, Ghidra: FUN_000e9dd0)
 * Prototype: void bflib_system_io_fn_0e9dd0(void);
 * Address  : 0xe9dd0 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9dd0
 * Callers  : 1 -> file_install_path_029eef
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0e9dd0(void)

{
  undefined4 arg_eax;
  
  g_data_00195558 = arg_eax;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9dd6 (Original VA: 0xe9dd6, Ghidra: FUN_000e9dd6)
 * Prototype: char * bflib_system_io_fn_0e9dd6(void);
 * Address  : 0xe9dd6 (Size: 51 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9dd6
 * Callers  : 9 -> file_keeper_cfg_02a0be, frontend_draw_text_overlay_02eeb9, frontend_draw_text_overlay_0303ad, frontend_draw_gui_button_label_03078d, frontnet_LbNetwork_Stop_035d29, newgui_draw_text_overlay_057739, newgui_fn_05b25b, newgui_fn_05b3fc ...
 * Callees  : 0 -> 
 ******************************************************************************/
char * bflib_system_io_fn_0e9dd6(void)

{
  char ch;
  char *arg_eax;
  int val;
  char *arg_edx;
  char *str_ptr;
  char *str_ptr_2;
  
  val = -1;
  str_ptr = arg_eax;
  do {
    str_ptr_2 = str_ptr;
    if (val == 0) break;
    val = val + -1;
    str_ptr_2 = str_ptr + 1;
    ch = *str_ptr;
    str_ptr = str_ptr_2;
  } while (ch != '\0');
  str_ptr_2 = str_ptr_2 + -1;
  do {
    ch = *arg_edx;
    *str_ptr_2 = ch;
    if (ch == '\0') {
      return arg_eax;
    }
    ch = arg_edx[1];
    arg_edx = arg_edx + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
  } while (ch != '\0');
  return arg_eax;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9e09 (Original VA: 0xe9e09, Ghidra: FUN_000e9e09)
 * Prototype: undefined8 bflib_system_io_fn_0e9e09(void);
 * Address  : 0xe9e09 (Size: 209 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9e09
 * Callers  : 2 -> bflib_system_io_fn_0e9f9e, bflib_system_io_fn_0ea049
 * Callees  : 2 -> bflib_system_io_fn_0f8761, bflib_system_io_fn_0f8774
 ******************************************************************************/
undefined8 bflib_system_io_fn_0e9e09(void)

{
  char ch;
  int arg_eax;
  uint uval;
  uint uval_2;
  uint uval_3;
  undefined4 arg_edx;
  bool flag;
  undefined8 uval_4;
  
  uval_4 = bflib_system_io_fn_0f8761();
  uval_2 = (uint)((ulonglong)uval_4 >> 0x20);
  uval = (uint)uval_4 & 0xff;
  if (((uval != 0x72) && (uval != 0x77)) && (uval != 0x61)) {
    bflib_system_io_fn_0f8774();
    uval_2 = 0;
    goto LAB_000e9ed2;
  }
  ch = *(char *)(arg_eax + 1);
  uval = uval_2 | 3;
  if (ch == '+') {
    uval_3 = CONCAT22((short)((ulonglong)uval_4 >> 0x30),(short)uval) | 0x40;
    if (*(char *)(arg_eax + 2) == 'b') {
LAB_000e9e76:
      uval_2 = uval_3;
    }
    else {
      uval_2 = uval;
      if (*(char *)(arg_eax + 2) != 't') {
        flag = g_data_00195d09 == 0x200;
LAB_000e9e74:
        if (flag) goto LAB_000e9e76;
      }
    }
  }
  else {
    uval_3 = uval_2 | 0x40;
    if (ch == 'b') {
      uval_2 = uval_3;
      if (*(char *)(arg_eax + 2) == '+') {
        uval_3 = CONCAT31((int3)((ulonglong)uval_4 >> 0x28),(char)uval_3) | 3;
LAB_000e9eb2:
        uval_2 = uval_3;
      }
    }
    else {
      if (ch == 't') {
        flag = *(char *)(arg_eax + 2) == '+';
        uval_3 = uval;
        goto LAB_000e9e74;
      }
      if (g_data_00195d09 == 0x200) goto LAB_000e9eb2;
    }
  }
  uval = (uint)uval_4 & 0xff;
  if (uval == 0x77) {
    uval_2 = uval_2 | 2;
  }
  else if (uval == 0x61) {
    uval_2 = uval_2 | 0x82;
  }
  else {
    uval_2 = uval_2 | 1;
  }
LAB_000e9ed2:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9eda (Original VA: 0xe9eda, Ghidra: FUN_000e9eda)
 * Prototype: undefined4 bflib_system_io_fn_0e9eda(int param_1);
 * Address  : 0xe9eda (Size: 196 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9eda
 * Callers  : 2 -> bflib_system_io_fn_0e9f9e, bflib_system_io_fn_0ea049
 * Callees  : 5 -> bflib_system_io_fn_0f79e0, bflib_system_io_fn_0f8761, bflib_system_io_fn_0f8849, bflib_system_io_fn_0f88e2, bflib_system_io_fn_0f89de
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e9eda(int param_1)

{
  undefined4 uval;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  uint arg_ebx;
  
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfc;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | arg_ebx;
  bflib_system_io_fn_0f8761();
  uval = bflib_system_io_fn_0f79e0();
  *(undefined4 *)(extraout_ECX + 0x10) = uval;
  if (*(int *)(extraout_ECX + 0x10) == -1) {
    bflib_system_io_fn_0f8849();
    return 0;
  }
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 0x14) = 0;
  if ((arg_ebx & 0x80) != 0) {
    bflib_system_io_fn_0f88e2();
  }
  bflib_system_io_fn_0f89de();
  return extraout_ECX_00;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9f9e (Original VA: 0xe9f9e, Ghidra: FUN_000e9f9e)
 * Prototype: undefined4 bflib_system_io_fn_0e9f9e(void);
 * Address  : 0xe9f9e (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9f9e
 * Callers  : 1 -> bflib_system_io_fn_0e9fd7
 * Callees  : 3 -> bflib_system_io_fn_0e9e09, bflib_system_io_fn_0e9eda, bflib_system_io_fn_0f87a3
 ******************************************************************************/
undefined4 bflib_system_io_fn_0e9f9e(void)

{
  int val;
  undefined4 uval;
  
  val = bflib_system_io_fn_0e9e09();
  uval = 0;
  if (val != 0) {
    val = bflib_system_io_fn_0f87a3();
    uval = 0;
    if (val != 0) {
      uval = bflib_system_io_fn_0e9eda(val);
    }
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9fd7 (Original VA: 0xe9fd7, Ghidra: FUN_000e9fd7)
 * Prototype: void bflib_system_io_fn_0e9fd7(void);
 * Address  : 0xe9fd7 (Size: 10 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9fd7
 * Callers  : 7 -> file_keeper_cfg_02a0be, navigate_nav_log_0b5694, navigate_region_alloc_overflow_0b62e4, navigate_nav_log_0b6aac, navigate_nav_log_0bfaec, navigate_nav_log_0c206c, navigate_path_init8_0c241c
 * Callees  : 1 -> bflib_system_io_fn_0e9f9e
 ******************************************************************************/
void bflib_system_io_fn_0e9fd7(void)

{
  bflib_system_io_fn_0e9f9e();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0e9fe1 (Original VA: 0xe9fe1, Ghidra: FUN_000e9fe1)
 * Prototype: longlong bflib_system_io_fn_0e9fe1(void);
 * Address  : 0xe9fe1 (Size: 104 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0e9fe1
 * Callers  : 1 -> bflib_system_io_fn_0ea049
 * Callees  : 2 -> bflib_system_io_fn_0ea15f, bflib_system_io_fn_0f8774
 ******************************************************************************/
longlong bflib_system_io_fn_0e9fe1(void)

{
  int arg_eax;
  undefined4 *word_ptr;
  uint arg_edx;
  undefined4 *word_ptr_2;
  
  word_ptr = g_bss_003df16c;
  do {
    if (word_ptr == (undefined4 *)0x0) {
      word_ptr = &g_bss_003df168;
      do {
        word_ptr_2 = word_ptr;
        word_ptr = (undefined4 *)*word_ptr_2;
        if (word_ptr == (undefined4 *)0x0) {
          bflib_system_io_fn_0f8774();
          return (ulonglong)arg_edx << 0x20;
        }
      } while (arg_eax != word_ptr[1]);
      *word_ptr_2 = *word_ptr;
      *word_ptr = g_bss_003df16c;
      g_bss_003df16c = word_ptr;
LAB_000ea008:
      return CONCAT44(arg_edx,arg_eax);
    }
    if (arg_eax == word_ptr[1]) {
      if ((*(byte *)(word_ptr[1] + 0xc) & 3) != 0) {
        bflib_system_io_fn_0ea15f();
      }
      goto LAB_000ea008;
    }
    word_ptr = (undefined4 *)*word_ptr;
  } while( true );
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea049 (Original VA: 0xea049, Ghidra: FUN_000ea049)
 * Prototype: undefined4 bflib_system_io_fn_0ea049(void);
 * Address  : 0xea049 (Size: 66 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea049
 * Callers  : 0 -> 
 * Callees  : 3 -> bflib_system_io_fn_0e9e09, bflib_system_io_fn_0e9eda, bflib_system_io_fn_0e9fe1
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ea049(void)

{
  int val;
  undefined4 uval;
  
  val = bflib_system_io_fn_0e9e09();
  uval = 0;
  if (val != 0) {
    val = bflib_system_io_fn_0e9fe1();
    uval = 0;
    if (val != 0) {
      *(uint *)(val + 0xc) = *(uint *)(val + 0xc) & 0x4000;
      uval = bflib_system_io_fn_0e9eda(val);
    }
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea08b (Original VA: 0xea08b, Ghidra: FUN_000ea08b)
 * Prototype: void bflib_system_io_fn_0ea08b(void);
 * Address  : 0xea08b (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea08b
 * Callers  : 1 -> file_keeper_cfg_02a0be
 * Callees  : 1 -> bflib_system_io_fn_0f8a21
 ******************************************************************************/
void bflib_system_io_fn_0ea08b(void)

{
  bflib_system_io_fn_0f8a21(&stack0x0000000c);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea0ac (Original VA: 0xea0ac, Ghidra: FUN_000ea0ac)
 * Prototype: undefined8 bflib_system_io_fn_0ea0ac(void);
 * Address  : 0xea0ac (Size: 45 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea0ac
 * Callers  : 1 -> file_keeper_cfg_02a0be
 * Callees  : 1 -> bflib_system_io_fn_0ea0d9
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ea0ac(void)

{
  int arg_eax;
  undefined4 *word_ptr;
  undefined4 uval;
  undefined4 arg_edx;
  
  word_ptr = g_bss_003df16c;
  while( true ) {
    if (word_ptr == (undefined4 *)0x0) {
      return CONCAT44(arg_edx,0xffffffff);
    }
    if (arg_eax == word_ptr[1]) break;
    word_ptr = (undefined4 *)*word_ptr;
  }
  uval = bflib_system_io_fn_0ea0d9();
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea0d9 (Original VA: 0xea0d9, Ghidra: FUN_000ea0d9)
 * Prototype: undefined4 bflib_system_io_fn_0ea0d9(void);
 * Address  : 0xea0d9 (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea0d9
 * Callers  : 2 -> bflib_system_io_fn_0ea0ac, watcom_crt_fn_11398b
 * Callees  : 2 -> bflib_system_io_fn_0ea15f, bflib_system_io_fn_0f8849
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ea0d9(void)

{
  undefined4 extraout_EDX;
  
  bflib_system_io_fn_0ea15f();
  bflib_system_io_fn_0f8849();
  return extraout_EDX;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea0ee (Original VA: 0xea0ee, Ghidra: FUN_000ea0ee)
 * Prototype: int bflib_system_io_fn_0ea0ee(void);
 * Address  : 0xea0ee (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea0ee
 * Callers  : 1 -> bflib_system_io_fn_0ea0fa
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0ea0ee(void)

{
  int arg_eax;
  int val;
  
  val = arg_eax + 0x30;
  if (0x39 < val) {
    val = arg_eax + 0x57;
  }
  return val;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea0fa (Original VA: 0xea0fa, Ghidra: FUN_000ea0fa)
 * Prototype: void bflib_system_io_fn_0ea0fa(void);
 * Address  : 0xea0fa (Size: 101 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea0fa
 * Callers  : 1 -> bflib_system_io_fn_0ea15f
 * Callees  : 2 -> bflib_system_io_fn_0ea0ee, bflib_system_io_fn_0f8aa0
 ******************************************************************************/
void bflib_system_io_fn_0ea0fa(void)

{
  undefined1 uval;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined1 *extraout_EDX;
  
  bflib_system_io_fn_0f8aa0();
  *extraout_ECX = 0x74;
  do {
    uval = bflib_system_io_fn_0ea0ee();
    *extraout_EDX = uval;
  } while (extraout_EDX + -1 != extraout_ECX);
  *(undefined1 *)(extraout_ECX_00 + 5) = 0x5f;
  uval = bflib_system_io_fn_0ea0ee();
  *(undefined1 *)(extraout_ECX_01 + 6) = uval;
  uval = bflib_system_io_fn_0ea0ee();
  *(undefined1 *)(extraout_ECX_02 + 8) = 0x2e;
  *(undefined1 *)(extraout_ECX_02 + 9) = 0x74;
  *(undefined1 *)(extraout_ECX_02 + 10) = 0x6d;
  *(undefined1 *)(extraout_ECX_02 + 0xb) = 0x70;
  *(undefined1 *)(extraout_ECX_02 + 0xc) = 0;
  *(undefined1 *)(extraout_ECX_02 + 7) = uval;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea15f (Original VA: 0xea15f, Ghidra: FUN_000ea15f)
 * Prototype: uint bflib_system_io_fn_0ea15f(void);
 * Address  : 0xea15f (Size: 144 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea15f
 * Callers  : 2 -> bflib_system_io_fn_0e9fe1, bflib_system_io_fn_0ea0d9
 * Callees  : 7 -> bflib_system_io_fn_0ea0fa, dk_strcpy, bflib_system_io_fn_0f4d9b, bflib_system_io_fn_0f7c2e, bflib_system_io_fn_0f8aa6, bflib_system_io_fn_0f8b7f, bflib_system_io_fn_0f8baf
 ******************************************************************************/
uint bflib_system_io_fn_0ea15f(void)

{
  int arg_eax;
  uint uval;
  int val;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int val_2;
  int arg_edx;
  
  if (*(int *)(arg_eax + 0xc) == 0) {
    uval = 0xffffffff;
  }
  else {
    uval = 0;
    if ((*(byte *)(arg_eax + 0xd) & 0x10) != 0) {
      uval = bflib_system_io_fn_0f8aa6();
    }
    val = bflib_system_io_fn_0f8b7f();
    val_2 = extraout_ECX;
    if (val != -1) {
      bflib_system_io_fn_0f7c2e();
      val_2 = extraout_ECX_00;
    }
    if (arg_edx != 0) {
      uval_2 = bflib_system_io_fn_0f8baf();
      uval = uval | uval_2;
      val_2 = extraout_ECX_01;
    }
    if ((*(byte *)(val_2 + 0xc) & 8) != 0) {
      bflib_system_io_fn_0f4d9b();
      *(undefined4 *)(extraout_ECX_02 + 8) = 0;
      val_2 = extraout_ECX_02;
    }
    if ((*(byte *)(val_2 + 0xd) & 8) != 0) {
      bflib_system_io_fn_0ea0fa();
      dk_strcpy();
    }
  }
  return uval;
}

/******************************************************************************
 * Function : dk_strcpy (Original VA: 0xea1ef, Ghidra: FUN_000ea1ef)
 * Prototype: longlong dk_strcpy(void);
 * Address  : 0xea1ef (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String copy helper
 * Callers  : 5 -> file_fn_02ae22, file_fn_02af6d, open_new_packet_file_for_save, bflib_system_io_fn_0e8b30, bflib_system_io_fn_0ea15f
 * Callees  : 0 -> 
 ******************************************************************************/
longlong dk_strcpy(void)

{
  code *str_ptr;
  undefined4 uval;
  byte in_CF;
  uint unaff_retaddr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) != 0) {
    uval = watcom_crt_fn_110060();
    return CONCAT44(unaff_retaddr,uval);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea1f4 (Original VA: 0xea1f4, Ghidra: FUN_000ea1f4)
 * Prototype: int bflib_system_io_fn_0ea1f4(void);
 * Address  : 0xea1f4 (Size: 41 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea1f4
 * Callers  : 4 -> file_data_creature_txt_02b36c, bflib_system_io_fn_0e97a0, bflib_system_io_fn_0e9d2c, bflib_video_fn_0f0d90
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0ea1f4(void)

{
  byte *arg_eax;
  byte *arg_edx;
  int arg_ebx;
  
  while( true ) {
    if (arg_ebx == 0) {
      return 0;
    }
    if (*arg_eax != *arg_edx) break;
    if (*arg_eax == 0) {
      return 0;
    }
    arg_eax = arg_eax + 1;
    arg_edx = arg_edx + 1;
    arg_ebx = arg_ebx + -1;
  }
  return (uint)*arg_eax - (uint)*arg_edx;
}

/******************************************************************************
 * Function : dk_atoi (Original VA: 0xea21d, Ghidra: FUN_000ea21d)
 * Prototype: undefined8 dk_atoi(void);
 * Address  : 0xea21d (Size: 109 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : ASCII string to integer conversion
 * Callers  : 10 -> file_data_creature_txt_02b36c, file_data_ceiling_txt_02d32d, frontnet_fn_0330ae, frontnet_fn_034bdc, command_script_number_parameters_078ada, command_script_number_parameter_0798e3, command_script_creature_level_parameter_079b68, command_script_tunnellers_script_07a754 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 dk_atoi(void)

{
  byte flag;
  byte flag_2;
  byte *arg_eax;
  undefined4 arg_edx;
  int val;
  
  while (((&g_data_0017469c)[(byte)(*arg_eax + 1)] & 2) != 0) {
    arg_eax = arg_eax + 1;
  }
  flag = *arg_eax;
  if ((flag == 0x2b) || (flag == 0x2d)) {
    arg_eax = arg_eax + 1;
  }
  val = 0;
  while (((&g_data_0017469c)[(byte)(*arg_eax + 1)] & 0x20) != 0) {
    flag_2 = *arg_eax;
    arg_eax = arg_eax + 1;
    val = val * 10 + (uint)flag_2 + -0x30;
  }
  if (flag == 0x2d) {
    val = -val;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : dk_stricmp (Original VA: 0xea290, Ghidra: FUN_000ea290)
 * Prototype: uint dk_stricmp(void);
 * Address  : 0xea290 (Size: 161 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Case-insensitive string comparison
 * Callers  : 11 -> frontnet_isdn_supported_serial_03442b, frontnet_fn_0345fd, frontnet_fn_034a8a, newgui_backup_input_field_small_05b1bc, command_script_unexpected_07909c, command_script_creature_level_parameter_079702, command_script_number_parameter_0798e3, get_script_command_id ...
 * Callees  : 0 -> 
 ******************************************************************************/
uint dk_stricmp(void)

{
  byte flag;
  uint *arg_eax;
  byte flag_2;
  uint uval_2;
  uint *arg_edx;
  bool flag_3;
  uint uval;
  
  if (arg_eax != arg_edx) {
    do {
      uval = *arg_eax;
      uval_2 = *arg_edx;
      if (uval_2 != uval) {
LAB_000ea309:
        flag = (byte)uval;
        flag_3 = flag < (byte)uval_2;
        if (flag == (byte)uval_2) {
          if (flag == 0) {
            return 0;
          }
          flag = (byte)(uval >> 8);
          flag_2 = (byte)(uval_2 >> 8);
          flag_3 = flag < flag_2;
          if (flag == flag_2) {
            if (flag == 0) {
              return 0;
            }
            flag = (byte)(uval >> 0x10);
            flag_2 = (byte)(uval_2 >> 0x10);
            flag_3 = flag < flag_2;
            if (flag == flag_2) {
              if (flag == 0) {
                return 0;
              }
              flag_3 = (byte)(uval >> 0x18) < (byte)(uval_2 >> 0x18);
            }
          }
        }
        return -(uint)flag_3 | 1;
      }
      if ((uval + 0xfefefeff & ~uval_2 & 0x80808080) != 0) {
        return 0;
      }
      uval = arg_eax[1];
      uval_2 = arg_edx[1];
      if (uval_2 != uval) goto LAB_000ea309;
      if ((uval + 0xfefefeff & ~uval_2 & 0x80808080) != 0) {
        return 0;
      }
      uval = arg_eax[2];
      uval_2 = arg_edx[2];
      if (uval_2 != uval) goto LAB_000ea309;
      if ((uval + 0xfefefeff & ~uval_2 & 0x80808080) != 0) {
        return 0;
      }
      uval = arg_eax[3];
      uval_2 = arg_edx[3];
      if (uval_2 != uval) goto LAB_000ea309;
      arg_eax = arg_eax + 4;
      arg_edx = arg_edx + 4;
    } while ((uval + 0xfefefeff & ~uval_2 & 0x80808080) == 0);
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea370 (Original VA: 0xea370, Ghidra: FUN_000ea370)
 * Prototype: undefined4 bflib_system_io_fn_0ea370(void);
 * Address  : 0xea370 (Size: 100 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea370
 * Callers  : 1 -> bflib_system_io_fn_0e9b44
 * Callees  : 1 -> bflib_system_io_fn_0f8c47
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ea370(void)

{
  char ch;
  char *arg_eax;
  int val;
  uint uval;
  char *str_ptr;
  char *str_ptr_2;
  byte flag;
  
  flag = 0;
  val = bflib_system_io_fn_0f8c47();
  if (val == 0) {
    return 0xffffffff;
  }
  str_ptr = arg_eax;
  str_ptr_2 = arg_eax;
  if (arg_eax[1] == ':') {
    do {
      ch = str_ptr_2[2];
      *str_ptr = ch;
      if (ch == '\0') break;
      ch = str_ptr_2[3];
      str_ptr[1] = ch;
      str_ptr = str_ptr + 2;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
  }
  uval = 0xffffffff;
  str_ptr_2 = arg_eax;
  do {
    if (uval == 0) break;
    uval = uval - 1;
    ch = *str_ptr_2;
    str_ptr_2 = str_ptr_2 + (uint)flag * -2 + 1;
  } while (ch != '\0');
  uval = ~uval;
  if ((0 < (int)(uval - 1)) && (arg_eax[uval - 2] == '\\')) {
    arg_eax[uval - 2] = '\0';
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea3d4 (Original VA: 0xea3d4, Ghidra: FUN_000ea3d4)
 * Prototype: undefined8 bflib_system_io_fn_0ea3d4(void);
 * Address  : 0xea3d4 (Size: 63 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea3d4
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0f78b2, bflib_system_io_fn_0f8ccf
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ea3d4(void)

{
  int val;
  uint uval;
  undefined4 arg_edx;
  undefined4 local_48;
  
  val = bflib_system_io_fn_0f78b2();
  if (val == 0) {
    val = bflib_system_io_fn_0f8ccf();
    if (val != -1) {
      uval = (uint)(((byte)((uint)local_48 >> 8) & 0xf0) == 0x40);
      goto LAB_000ea40d;
    }
  }
  uval = 0;
LAB_000ea40d:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea430 (Original VA: 0xea430, Ghidra: FUN_000ea430)
 * Prototype: char bflib_system_io_fn_0ea430(undefined1 param_1);
 * Address  : 0xea430 (Size: 555 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea430
 * Callers  : 1 -> file_fn_02d6a9
 * Callees  : 1 -> bflib_system_io_fn_0ea65c
 ******************************************************************************/
char bflib_system_io_fn_0ea430(undefined1 param_1)

{
  int arg_eax;
  int val;
  int val_2;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  char local_14;
  
  val = arg_eax - arg_ebx;
  val_2 = arg_ebx - (g_display_bss_003d9844 + -1);
  if (arg_eax < 0) {
    if (arg_ebx < 0) {
      return '\x01';
    }
    arg_edx = arg_edx - ((arg_edx - arg_ecx) * arg_eax) / val;
    if (g_display_bss_003d9844 <= arg_ebx) {
      arg_ecx = arg_ecx - (val_2 * (arg_ecx - arg_edx)) / arg_ebx;
    }
  }
  else if (arg_eax < g_display_bss_003d9844) {
    if (arg_ebx < 0) {
      arg_ecx = arg_ecx - ((arg_ecx - arg_edx) * arg_ebx) / (arg_ebx - arg_eax);
    }
    else if (g_display_bss_003d9844 <= arg_ebx) {
      arg_ecx = arg_ecx - ((arg_ecx - arg_edx) * val_2) / (arg_ebx - arg_eax);
    }
  }
  else {
    if (g_display_bss_003d9844 <= arg_ebx) {
      return '\x01';
    }
    arg_edx = arg_edx - ((arg_edx - arg_ecx) * (arg_eax - (g_display_bss_003d9844 + -1))) / val;
    if (arg_ebx < 0) {
      arg_ecx = arg_ecx - ((arg_ecx - arg_edx) * arg_ebx) / val_2;
    }
  }
  local_14 = (char)arg_ecx - ((char)g_display_bss_003d9848 + -1);
  if (arg_edx < 0) {
    if (arg_ecx < 0) {
      return '\x01';
    }
  }
  else if ((g_display_bss_003d9848 <= arg_edx) && (g_display_bss_003d9848 <= arg_ecx)) {
    return '\x01';
  }
  bflib_system_io_fn_0ea65c(param_1,val,arg_edx - arg_ecx);
  return local_14;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea65c (Original VA: 0xea65c, Ghidra: FUN_000ea65c)
 * Prototype: void bflib_system_io_fn_0ea65c(byte param_1);
 * Address  : 0xea65c (Size: 726 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea65c
 * Callers  : 1 -> bflib_system_io_fn_0ea430
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0ea65c(byte param_1)

{
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int arg_ecx;
  int arg_edx;
  int val_7;
  int arg_ebx;
  uint uval;
  int val_8;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uval = arg_ebx - arg_eax;
  val_3 = (uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f);
  val = val_3 * 2;
  if ((int)uval < 1) {
    val_8 = -1;
  }
  else {
    val_8 = 1;
  }
  uval = arg_ecx - arg_edx;
  val_4 = (uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f);
  val_2 = val_4 * 2;
  if ((int)uval < 1) {
    val_5 = -1;
  }
  else {
    val_5 = 1;
  }
  val_7 = g_screen_pitch * val_5;
  local_28 = val_2 - (val >> 1);
  local_24 = val - (val_2 >> 1);
  val_6 = arg_edx * g_screen_pitch + arg_eax;
  if (((byte)g_lb_display_draw_flags & 4) == 0) {
    if (((byte)g_lb_display_draw_flags & 8) == 0) {
      if (val + val_4 * -2 == 0 || val < val_2) {
        for (; *(byte *)(g_display_bss_003d9824 + val_6) = param_1, arg_edx != arg_ecx; arg_edx = arg_edx + val_5)
        {
          local_14 = local_24;
          if (-1 < local_24) {
            local_14 = local_24 + val_4 * -2;
            val_6 = val_6 + val_8;
          }
          local_24 = local_14 + val;
          val_6 = val_6 + val_7;
        }
      }
      else {
        for (; *(byte *)(g_display_bss_003d9824 + val_6) = param_1, arg_eax != arg_ebx;
            arg_eax = arg_eax + val_8) {
          local_18 = local_28;
          if (-1 < local_28) {
            local_18 = local_28 + val_3 * -2;
            val_6 = val_6 + val_7;
          }
          local_28 = local_18 + val_2;
          val_6 = val_6 + val_8;
        }
      }
    }
    else if (val + val_4 * -2 == 0 || val < val_2) {
      for (; *(byte *)(g_display_bss_003d9824 + val_6) =
                  *(byte *)((uint)param_1 + (uint)*(byte *)(g_display_bss_003d9824 + val_6) * 0x100 +
                           g_display_bss_003d981c), arg_edx != arg_ecx; arg_edx = arg_edx + val_5) {
        local_1c = local_24;
        if (-1 < local_24) {
          local_1c = local_24 + val_4 * -2;
          val_6 = val_6 + val_8;
        }
        local_24 = local_1c + val;
        val_6 = val_6 + val_7;
      }
    }
    else {
      for (; *(byte *)(g_display_bss_003d9824 + val_6) =
                  *(byte *)((uint)param_1 + (uint)*(byte *)(g_display_bss_003d9824 + val_6) * 0x100 +
                           g_display_bss_003d981c), arg_eax != arg_ebx; arg_eax = arg_eax + val_8) {
        local_20 = local_28;
        if (-1 < local_28) {
          local_20 = local_28 + val_3 * -2;
          val_6 = val_6 + val_7;
        }
        local_28 = local_20 + val_2;
        val_6 = val_6 + val_8;
      }
    }
  }
  else if (val + val_4 * -2 == 0 || val < val_2) {
    for (; *(byte *)(g_display_bss_003d9824 + val_6) =
                *(byte *)((uint)param_1 * 0x100 + (uint)*(byte *)(g_display_bss_003d9824 + val_6) +
                         g_display_bss_003d981c), arg_edx != arg_ecx; arg_edx = arg_edx + val_5) {
      if (-1 < local_24) {
        local_24 = local_24 + val_4 * -2;
        val_6 = val_6 + val_8;
      }
      local_24 = local_24 + val;
      val_6 = val_6 + val_7;
    }
  }
  else {
    for (; *(byte *)(g_display_bss_003d9824 + val_6) =
                *(byte *)((uint)param_1 * 0x100 + (uint)*(byte *)(g_display_bss_003d9824 + val_6) +
                         g_display_bss_003d981c), arg_eax != arg_ebx; arg_eax = arg_eax + val_8) {
      if (-1 < local_28) {
        local_28 = local_28 + val_3 * -2;
        val_6 = val_6 + val_7;
      }
      local_28 = local_28 + val_2;
      val_6 = val_6 + val_8;
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea934 (Original VA: 0xea934, Ghidra: FUN_000ea934)
 * Prototype: undefined4 bflib_system_io_fn_0ea934(void);
 * Address  : 0xea934 (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea934
 * Callers  : 1 -> frontmap_fn_031854
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ea934(void)

{
  if ((g_bss_003db7b8 == 0) && (g_data_0019555c == -1)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ea9f9 (Original VA: 0xea9f9, Ghidra: FUN_000ea9f9)
 * Prototype: void bflib_system_io_fn_0ea9f9(void);
 * Address  : 0xea9f9 (Size: 47 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ea9f9
 * Callers  : 1 -> bflib_system_io_fn_0f4c6c
 * Callees  : 3 -> bflib_system_io_fn_0e8a1c, bflib_system_io_fn_0eaf13, bflib_system_io_fn_0eb28b
 ******************************************************************************/
void bflib_system_io_fn_0ea9f9(void)

{
  if (g_data_0019555c != -1) {
    bflib_system_io_fn_0e8a1c();
    g_data_0019555c = -1;
  }
  bflib_system_io_fn_0eaf13();
  bflib_system_io_fn_0eb28b();
  g_bss_003db694 = 0;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ead2f (Original VA: 0xead2f, Ghidra: FUN_000ead2f)
 * Prototype: void bflib_system_io_fn_0ead2f(void);
 * Address  : 0xead2f (Size: 285 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ead2f
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, game_out_sync_gameturn_036ff4
 * Callees  : 7 -> bflib_system_io_fn_0e8a1c, LbFileWrite, LbFileRead, bflib_system_io_fn_0eb147, bflib_system_io_pan_position_pan_target_0eb30c, bflib_sound_AIL_sample_buffer_ready_0fb0ca, bflib_sound_AIL_load_sample_buffer_0fb128
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_fn_0ead2f(void)

{
  int val;
  int val_2;
  int val_3;
  
  val_3 = 0;
  if ((g_bss_003db694 != '\0') && (g_data_00195564 != '\0')) {
    if ((g_bss_003db7c4 & 2) == 0) {
      if ((g_bss_003db7c4 & 1) == 0) {
        if ((g_data_0019555c != -1) && (val = bflib_sound_AIL_sample_buffer_ready_0fb0ca(g_bss_003db696), val != -1)) {
          while (val_3 < 0x4000) {
            val_2 = LbFileRead();
            val_3 = val_3 + val_2;
            if (g_bss_003db7a4 == 0) break;
            if (val_3 < 0x4000) {
              g_bss_003db7c8 = 0;
              g_bss_003db7cc = -val_3;
              LbFileWrite();
              if (0 < g_bss_003db7a4) {
                g_bss_003db7a4 = g_bss_003db7a4 + -1;
              }
            }
          }
          bflib_sound_AIL_load_sample_buffer_0fb128(g_bss_003db696,val,(&g_bss_003db7a8)[val],val_3);
          g_bss_003db7c8 = g_bss_003db7c8 + 1;
          if (val_3 < 0x4000) {
            bflib_system_io_fn_0e8a1c();
            g_data_0019555c = -1;
          }
        }
      }
      else {
        bflib_system_io_fn_0eb147();
      }
    }
    else {
      bflib_system_io_pan_position_pan_target_0eb30c();
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eae4c (Original VA: 0xeae4c, Ghidra: FUN_000eae4c)
 * Prototype: void bflib_system_io_fn_0eae4c(void);
 * Address  : 0xeae4c (Size: 62 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eae4c
 * Callers  : 2 -> frontmap_fn_031854, frontmap_fn_032738
 * Callees  : 1 -> bflib_sound_AIL_set_sample_volume_0faaf9
 ******************************************************************************/
void bflib_system_io_fn_0eae4c(void)

{
  int arg_eax;
  int val;
  
  if ((((g_bss_003db694 != '\0') && (-1 < arg_eax)) && (arg_eax < 0x80)) && (arg_eax != g_data_00195560)) {
    val = arg_eax;
    if (g_data_00195d1c == '\0') {
      val = arg_eax >> 1;
    }
    g_data_00195560 = arg_eax;
    bflib_sound_AIL_set_sample_volume_0faaf9(g_bss_003db696,val);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eae8a (Original VA: 0xeae8a, Ghidra: FUN_000eae8a)
 * Prototype: void bflib_system_io_fn_0eae8a(void);
 * Address  : 0xeae8a (Size: 137 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eae8a
 * Callers  : 2 -> frontend_load_frontend_palette_02e8a7, frontmap_ldata_dkflag00_dat_031213
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0e8a1c, bflib_sound_AIL_end_sample_0faa37, bflib_system_io_fn_0fdd51
 ******************************************************************************/
void bflib_system_io_fn_0eae8a(void)

{
  if (g_bss_003db694 != '\0') {
    bflib_sound_AIL_end_sample_0faa37(g_bss_003db696);
    LbScreenWaitVbi();
    LbScreenWaitVbi();
    if (g_data_0019555c != -1) {
      bflib_system_io_fn_0e8a1c();
      g_data_0019555c = -1;
    }
    if (g_bss_003db7b8 != 0) {
      bflib_system_io_fn_0fdd51();
      g_bss_003db7b8 = 0;
    }
    if (g_bss_003db7e0 != '\0') {
      g_bss_003db7e0 = '\0';
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eaf13 (Original VA: 0xeaf13, Ghidra: FUN_000eaf13)
 * Prototype: void bflib_system_io_fn_0eaf13(void);
 * Address  : 0xeaf13 (Size: 157 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eaf13
 * Callers  : 1 -> bflib_system_io_fn_0ea9f9
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0e8a1c, bflib_sound_AIL_end_sample_0faa37, bflib_system_io_fn_0fdd51
 ******************************************************************************/
void bflib_system_io_fn_0eaf13(void)

{
  if ((g_bss_003db694 != '\0') && (g_data_00195564 != '\0')) {
    bflib_sound_AIL_end_sample_0faa37(g_bss_003db696);
    LbScreenWaitVbi();
    LbScreenWaitVbi();
    if (g_data_0019555c != -1) {
      bflib_system_io_fn_0e8a1c();
      g_data_0019555c = -1;
    }
    if (g_bss_003db7b8 != 0) {
      bflib_system_io_fn_0fdd51();
      g_bss_003db7b8 = 0;
    }
    if (g_bss_003db7e0 != '\0') {
      g_bss_003db7e0 = '\0';
    }
    g_data_00195564 = '\0';
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eafb8 (Original VA: 0xeafb8, Ghidra: FUN_000eafb8)
 * Prototype: longlong bflib_system_io_fn_0eafb8(void);
 * Address  : 0xeafb8 (Size: 105 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eafb8
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_sound_AIL_sample_position_0fb27e
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong bflib_system_io_fn_0eafb8(void)

{
  int val;
  int val_2;
  uint arg_edx;
  
  if ((g_bss_003db694 != '\0') && (g_bss_003db7c8 != 0)) {
    val = g_bss_003db7c8 + -1;
    if ((g_bss_003db7c4 & 1) != 0) {
      val = val * g_bss_003db7c0;
      val_2 = bflib_sound_AIL_sample_position_0fb27e(g_bss_003db696);
      return CONCAT44(arg_edx,val_2 + val * 8);
    }
    val_2 = bflib_sound_AIL_sample_position_0fb27e(g_bss_003db696);
    return CONCAT44(arg_edx,val_2 + val * 0x4000 + g_bss_003db7cc);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb021 (Original VA: 0xeb021, Ghidra: FUN_000eb021)
 * Prototype: void bflib_system_io_fn_0eb021(void);
 * Address  : 0xeb021 (Size: 73 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb021
 * Callers  : 0 -> 
 * Callees  : 1 -> LbFileWrite
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_fn_0eb021(void)

{
  uint extraout_ECX;
  
  if (((g_bss_003db694 != '\0') && ((g_bss_003db7c4 & 1) == 0)) && (g_data_0019555c != -1)) {
    LbFileWrite();
    g_bss_003db7cc = extraout_ECX & 0x3fff;
    g_bss_003db7c8 = (extraout_ECX >> 0xe) + 1;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_bf101_open_file_0eb0cc (Original VA: 0xeb0cc, Ghidra: FUN_000eb0cc)
 * Prototype: void bflib_system_io_bf101_open_file_0eb0cc(void);
 * Address  : 0xeb0cc (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'BF101 - cannot open file %s'
 * Callers  : 1 -> bflib_sound_bf100_streamed_sample_type_0eaa28
 * Callees  : 4 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_system_io_fn_0fdad0, bflib_system_io_fn_0fdd51
 ******************************************************************************/
void bflib_system_io_bf101_open_file_0eb0cc(void)

{
  g_bss_003db7b8 = bflib_system_io_fn_0fdad0();
  if (g_bss_003db7b8 == 0) {
    dk_sprintf(&g_sound_driver_ready,s_BF101___cannot_open_file__s_0016cf41);
    bflib_system_io_fn_0f9610();
  }
  if (0x1000 < g_bss_003db7bc) {
    dk_sprintf(&g_sound_driver_ready,s_BF103___oversized_ADPCM_chunks___0016cf5e,g_bss_003db7bc);
    bflib_system_io_fn_0f9610();
    bflib_system_io_fn_0fdd51();
    g_bss_003db7b8 = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb147 (Original VA: 0xeb147, Ghidra: FUN_000eb147)
 * Prototype: void bflib_system_io_fn_0eb147(void);
 * Address  : 0xeb147 (Size: 150 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb147
 * Callers  : 1 -> bflib_system_io_fn_0ead2f
 * Callees  : 4 -> bflib_sound_AIL_sample_buffer_ready_0fb0ca, bflib_sound_AIL_load_sample_buffer_0fb128, bflib_system_io_fn_0fdd51, bflib_system_io_fn_0fdd6f
 ******************************************************************************/
void bflib_system_io_fn_0eb147(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  int loop_i;
  int local_1c;
  
  if (g_bss_003db7b8 != 0) {
    val = bflib_sound_AIL_sample_buffer_ready_0fb0ca(g_bss_003db696);
    if (val != -1) {
      val_2 = 0;
      for (loop_i = 0; loop_i < 8; loop_i = loop_i + 1) {
        local_1c = bflib_system_io_fn_0fdd6f();
        val_2 = extraout_ECX + g_bss_003db7c0;
        if (local_1c == 0) break;
      }
      bflib_sound_AIL_load_sample_buffer_0fb128(g_bss_003db696,val,(&g_bss_003db7a8)[val],val_2);
      g_bss_003db7c8 = g_bss_003db7c8 + 1;
      if (local_1c == 0) {
        bflib_system_io_fn_0fdd51();
        g_bss_003db7b8 = 0;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_alloc_lock_0eb1dd (Original VA: 0xeb1dd, Ghidra: FUN_000eb1dd)
 * Prototype: longlong bflib_system_io_alloc_lock_0eb1dd(void);
 * Address  : 0xeb1dd (Size: 174 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'Error alloc lock [0]'
 * Callers  : 1 -> bflib_sound_bf100_allocate_buffers_streamed_0ea94f
 * Callees  : 4 -> dk_sprintf, LbFileLoadAt, bflib_system_io_fn_0f9610, bflib_system_io_fn_0fe896
 ******************************************************************************/
longlong bflib_system_io_alloc_lock_0eb1dd(void)

{
  uint arg_edx;
  char *str_ptr;
  
  g_bss_003db7a8 = bflib_system_io_fn_0fe896(0x4000);
  if (g_bss_003db7a8 == 0) {
    str_ptr = s_Error_alloc_lock__0__0016cf84;
  }
  else {
    g_bss_003db7ac = bflib_system_io_fn_0fe896(0x4000);
    if (g_bss_003db7ac == 0) {
      str_ptr = s_Error_alloc_lock__1__0016cf9a;
    }
    else {
      g_bss_003db7dc = LbFileLoadAt();
      if (g_bss_003db7dc == 0) {
        str_ptr = s_Error_allocating_mix_buffer_0016cfb0;
      }
      else {
        g_bss_003db7b4 = LbFileLoadAt();
        if (g_bss_003db7b4 != 0) {
          dk_sprintf(&g_sound_driver_ready,s_allocated_all_stream_buffers_0016cfec);
          bflib_system_io_fn_0f9610();
          return CONCAT44(arg_edx,1);
        }
        str_ptr = s_Error_allocating_adpcm_buffer_0016cfcd;
        g_bss_003db7b4 = 0;
      }
    }
  }
  dk_sprintf(&g_sound_driver_ready,str_ptr);
  bflib_system_io_fn_0f9610();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb28b (Original VA: 0xeb28b, Ghidra: FUN_000eb28b)
 * Prototype: void bflib_system_io_fn_0eb28b(void);
 * Address  : 0xeb28b (Size: 129 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb28b
 * Callers  : 3 -> bflib_sound_bf100_allocate_buffers_streamed_0ea94f, bflib_system_io_fn_0ea9f9, bflib_sound_bf100_streamed_sample_type_0eaa28
 * Callees  : 2 -> bflib_system_io_fn_0e94b0, bflib_system_io_fn_0fe8c1
 ******************************************************************************/
void bflib_system_io_fn_0eb28b(void)

{
  if (g_bss_003db7a8 != 0) {
    bflib_system_io_fn_0fe8c1(g_bss_003db7a8);
    g_bss_003db7a8 = 0;
  }
  if (g_bss_003db7ac != 0) {
    bflib_system_io_fn_0fe8c1(g_bss_003db7ac);
    g_bss_003db7ac = 0;
  }
  if (g_bss_003db7b4 != 0) {
    bflib_system_io_fn_0e94b0();
    g_bss_003db7b4 = 0;
  }
  if (g_bss_003db7dc != 0) {
    bflib_system_io_fn_0e94b0();
    g_bss_003db7dc = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_pan_position_pan_target_0eb30c (Original VA: 0xeb30c, Ghidra: FUN_000eb30c)
 * Prototype: void bflib_system_io_pan_position_pan_target_0eb30c(void);
 * Address  : 0xeb30c (Size: 303 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'Pan Position = %d, pan target = %d, pan direction = %d'
 * Callers  : 1 -> bflib_system_io_fn_0ead2f
 * Callees  : 6 -> dk_sprintf, LbFileWrite, LbFileRead, bflib_system_io_fn_0eb43b, bflib_system_io_fn_0f9610, bflib_sound_AIL_sample_buffer_ready_0fb0ca
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_pan_position_pan_target_0eb30c(void)

{
  int val;
  int val_2;
  undefined4 uval;
  int val_3;
  
  val_3 = 0;
  if (g_bss_003db7e0 != '\0') {
    val = bflib_sound_AIL_sample_buffer_ready_0fb0ca(g_bss_003db696);
    if (val != -1) {
      while (val_3 < 0x8000) {
        val_2 = LbFileRead();
        val_3 = val_3 + val_2;
        if (g_bss_003db7a4 == 0) break;
        if (val_3 < 0x8000) {
          g_bss_003db7c8 = 0;
          g_bss_003db7cc = -val_3;
          LbFileWrite();
          if (0 < g_bss_003db7a4) {
            g_bss_003db7a4 = g_bss_003db7a4 + -1;
          }
        }
      }
      if (g_bss_003db7d4 == 0) {
        uval = 0;
      }
      else if (g_bss_003db7d4 < 0) {
        uval = 0xffffffff;
      }
      else {
        uval = 1;
      }
      bflib_system_io_fn_0eb43b(uval);
      if (g_bss_003db7d4 == 0) {
        uval = 0;
      }
      else if (g_bss_003db7d4 < 0) {
        uval = 0xffffffff;
      }
      else {
        uval = 1;
      }
      dk_sprintf(&g_sound_driver_ready,s_Pan_Position____d__pan_target_____0016d00a,g_bss_003db7d0,
                   g_bss_003db7d8,uval);
      bflib_system_io_fn_0f9610();
      bflib_sound_AIL_load_sample_buffer_0fb128(g_bss_003db696,val,(&g_bss_003db7a8)[val],val_3 >> 1);
      g_bss_003db7c8 = g_bss_003db7c8 + 1;
      if (val_3 < 0x4000) {
        bflib_system_io_fn_0e8a1c();
        g_data_0019555c = 0xffffffff;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb43b (Original VA: 0xeb43b, Ghidra: FUN_000eb43b)
 * Prototype: int bflib_system_io_fn_0eb43b(int param_1);
 * Address  : 0xeb43b (Size: 246 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb43b
 * Callers  : 1 -> bflib_system_io_pan_position_pan_target_0eb30c
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
int bflib_system_io_fn_0eb43b(int param_1)

{
  short short_val;
  short *arg_eax;
  uint uval;
  int val;
  int arg_ecx;
  int extraout_ECX;
  short *arg_edx;
  int arg_ebx;
  short *val_2;
  uint local_1c;
  int local_14;
  uint local_10;
  
  local_14 = 0x80 - arg_ecx;
  if (arg_ecx != g_bss_003db7d8) {
    if (arg_ecx < g_bss_003db7d8) {
      uval = g_bss_003db7d8 - arg_ecx;
    }
    else {
      uval = arg_ecx - g_bss_003db7d8;
    }
    val = bflib_system_io_fn_0e69fc();
    local_1c = (uint)(val * arg_ebx) / uval;
    arg_ecx = extraout_ECX;
    local_10 = local_1c;
  }
  if (arg_ecx == g_bss_003db7d8) {
    local_10 = 1;
    local_1c = 1;
  }
  if ((arg_ecx == 0) && (param_1 == 0)) {
    while (arg_ebx = arg_ebx + -1, arg_ebx != -1) {
      short_val = *arg_eax;
      arg_eax = arg_eax + 2;
      *arg_edx = short_val;
      arg_edx = arg_edx + 1;
    }
  }
  else if ((local_14 == 0) && (param_1 == 0)) {
    while (arg_ebx = arg_ebx + -1, arg_ebx != -1) {
      val_2 = arg_eax + 1;
      arg_eax = arg_eax + 2;
      *arg_edx = *val_2;
      arg_edx = arg_edx + 1;
    }
  }
  else {
    while (arg_ebx != 0) {
      for (; (local_10 = local_10 - 1, local_10 != 0xffffffff && (arg_ebx != 0));
          arg_ebx = arg_ebx + -1) {
        short_val = *arg_eax;
        val_2 = arg_eax + 1;
        arg_eax = arg_eax + 2;
        *arg_edx = (short)(short_val * local_14 + *val_2 * arg_ecx >> 7);
        arg_edx = arg_edx + 1;
      }
      local_14 = local_14 - param_1;
      arg_ecx = arg_ecx + param_1;
      local_10 = local_1c;
    }
    if (arg_ecx == g_bss_003db7d8) {
      g_bss_003db7d4 = 0;
    }
  }
  return arg_ecx;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb531 (Original VA: 0xeb531, Ghidra: FUN_000eb531)
 * Prototype: undefined * bflib_system_io_fn_0eb531(void);
 * Address  : 0xeb531 (Size: 389 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb531
 * Callers  : 2 -> bflib_system_io_fn_0eb531, bflib_system_io_time_elapsed_between_reads_0eb6b6
 * Callees  : 8 -> dk_sprintf, bflib_system_io_fn_0e8a98, bflib_system_io_fn_0e8ac4, bflib_system_io_fn_0e8af0, LbMemoryCopy, bflib_system_io_fn_0e9dd6, dk_stricmp, bflib_system_io_fn_0eb531
 ******************************************************************************/
undefined * bflib_system_io_fn_0eb531(void)

{
  int val;
  int val_2;
  undefined *word_ptr;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uval;
  undefined4 extraout_ECX_03;
  undefined1 local_2a4 [228];
  undefined1 local_1c0 [288];
  char local_a0 [144];
  
  LbMemoryCopy();
  LbMemoryCopy();
  local_2a4[0] = 0;
  bflib_system_io_fn_0e9dd6();
  val = bflib_system_io_fn_0e8ac4();
  LbMemoryCopy();
  while( true ) {
    bflib_system_io_fn_0e9dd6();
    val_2 = bflib_system_io_fn_0e8a98();
    if ((0x4fffff < val_2) || (val == -1)) break;
    val = bflib_system_io_fn_0e8af0();
  }
  dk_sprintf(local_1c0,&g_data_0016d042,extraout_ECX,local_2a4); /* 0x16d042="%s%s" */
  uval = extraout_ECX_00;
  if ((val == -1) || (val_2 = bflib_system_io_fn_0e8a98(), uval = extraout_ECX_01, val_2 < 0x500000)) {
    dk_sprintf(local_1c0,&g_data_0016d047,uval); /* 0x16d047="%s%s" */
    val = bflib_system_io_fn_0e8ac4();
    while ((val_2 = dk_stricmp(), val_2 == 0 ||
           (val_2 = dk_stricmp(), uval = extraout_ECX_02, val_2 == 0))) {
      val = bflib_system_io_fn_0e8af0();
    }
    while (val != -1) {
      dk_sprintf(local_1c0,s__s_s__0016d051,uval,local_2a4);
      bflib_system_io_fn_0eb531();
      LbMemoryCopy();
      if (local_a0[0] != '\0') goto LAB_000eb696;
      val = bflib_system_io_fn_0e8af0();
      uval = extraout_ECX_03;
    }
    word_ptr = (undefined *)0x0;
  }
  else {
    if (val == 1) {
      dk_sprintf(local_a0,&g_data_0016d057,extraout_ECX_01,local_2a4); /* 0x16d057="%s%s" */
    }
LAB_000eb696:
    LbMemoryCopy();
    word_ptr = &g_bss_003db604;
  }
  return word_ptr;
}

/******************************************************************************
 * Function : bflib_system_io_time_elapsed_between_reads_0eb6b6 (Original VA: 0xeb6b6, Ghidra: FUN_000eb6b6)
 * Prototype: undefined8 bflib_system_io_time_elapsed_between_reads_0eb6b6(void);
 * Address  : 0xeb6b6 (Size: 236 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'time elapsed between reads = %d'
 * Callers  : 0 -> 
 * Callees  : 9 -> dk_sprintf, LbFileOpen, LbFileWrite, LbFileRead, LbFileLoadAt, bflib_system_io_fn_0e94b0, bflib_system_io_fn_0eb531, bflib_system_io_fn_0f1abb ...
 ******************************************************************************/
undefined8 bflib_system_io_time_elapsed_between_reads_0eb6b6(void)

{
  bool flag;
  int arg_eax;
  int val;
  int file_handle;
  int val_2;
  undefined4 uval;
  undefined3 uval_2;
  undefined4 arg_edx;
  int loop_i;
  
  flag = false;
  if (arg_eax == 0) {
    val = LbFileLoadAt();
    file_handle = 0;
    if (val != 0) {
      flag = true;
      bflib_system_io_fn_0eb531();
      goto LAB_000eb6f7;
    }
  }
  else {
LAB_000eb6f7:
    val = LbFileLoadAt();
    file_handle = 0;
    if (val != 0) {
      file_handle = LbFileOpen();
      if (file_handle != -1) {
        LbFileWrite();
        val_2 = bflib_system_io_fn_0f1abb();
        val = file_handle;
        for (loop_i = 0; loop_i < 0x500000; loop_i = loop_i + 0x19000) {
          file_handle = LbFileRead();
          if (file_handle != 0x19000) goto LAB_000eb6db;
        }
        file_handle = bflib_system_io_fn_0f1abb(val_2,val);
        dk_sprintf(&g_sound_driver_ready,s_time_elapsed_between_reads____d_0016d064,file_handle - val_2);
        bflib_system_io_fn_0f9610();
        uval = bflib_system_io_fn_0e94b0();
        if (flag) {
          uval = bflib_system_io_fn_0e94b0();
        }
        uval_2 = (undefined3)((uint)uval >> 8);
        if ((uint)(file_handle - val_2) < 0xe) {
          uval = CONCAT31(uval_2,4);
        }
        else {
          uval = CONCAT31(uval_2,2);
        }
        goto LAB_000eb1d6;
      }
    }
  }
LAB_000eb6db:
  uval = CONCAT31((int3)((uint)file_handle >> 8),0xff);
LAB_000eb1d6:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb7b0 (Original VA: 0xeb7b0, Ghidra: FUN_000eb7b0)
 * Prototype: undefined8 bflib_system_io_fn_0eb7b0(void);
 * Address  : 0xeb7b0 (Size: 50 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb7b0
 * Callers  : 2 -> frontend_fn_030e04, frontmap_fn_030e47
 * Callees  : 1 -> bflib_system_io_fn_0fece8
 ******************************************************************************/
undefined8 bflib_system_io_fn_0eb7b0(void)

{
  undefined4 arg_edx;
  undefined1 *extraout_EDX;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 uStack_8;
  undefined4 local_a;
  
  bflib_system_io_fn_0fece8();
  *extraout_EDX = local_c;
  extraout_EDX[1] = local_b;
  *(short *)(extraout_EDX + 2) = (short)local_a;
  extraout_EDX[4] = uStack_8;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : LbTimerClock (Original VA: 0xeb818, Ghidra: FUN_000eb818)
 * Prototype: undefined8 LbTimerClock(void);
 * Address  : 0xeb818 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Read millisecond system timer clock
 * Callers  : 37 -> frontend_fn_02e667, frontend_load_frontend_palette_02e8a7, frontend_draw_text_overlay_02eeb9, frontend_draw_gui_button_label_02efb4, frontend_fn_02faf6, frontend_fn_02fc49, frontend_ldata_front_raw_02ffe4, frontend_draw_text_overlay_0303ad ...
 * Callees  : 1 -> bflib_system_io_fn_0e8d4a
 ******************************************************************************/
undefined8 LbTimerClock(void)

{
  int val;
  undefined4 arg_edx;
  
  val = bflib_system_io_fn_0e8d4a();
  return CONCAT44(arg_edx,(uint)(val * 1000) / 100);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb840 (Original VA: 0xeb840, Ghidra: FUN_000eb840)
 * Prototype: undefined8 bflib_system_io_fn_0eb840(void);
 * Address  : 0xeb840 (Size: 306 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb840
 * Callers  : 4 -> game_draw_text_overlay_03752a, bflib_system_io_fn_0e79fc, bflib_system_io_fn_0e7aac, bflib_system_io_fn_0e7c64
 * Callees  : 1 -> bflib_system_io_fn_0ec420
 ******************************************************************************/
undefined8 bflib_system_io_fn_0eb840(void)

{
  char *str_ptr;
  undefined4 arg_edx;
  char *str_ptr_2;
  int val;
  char *str_ptr_3;
  char *str_ptr_4;
  undefined8 uval;
  int local_20;
  char *local_1c;
  
  g_net_bss_003dd824 = 1;
  if (g_display_bss_003d9828 != 0) {
    g_bss_003dc804 = g_graphics_window_width + g_bss_003dc81c;
    g_bss_003dc808 = g_graphics_window_height + g_bss_003dc820;
    uval = bflib_system_io_fn_0ec420();
    g_bss_003db7f4 = (int)uval;
    if (g_bss_003db7f4 == (int)((ulonglong)uval >> 0x20)) {
      str_ptr_3 = &g_bss_003db804;
      local_1c = &g_bss_003dc824 + (uint)*(byte *)(g_display_bss_003d9828 + 4) * g_bss_003dc810 + g_bss_003dc80c;
      g_bss_003db800 = g_bss_003dc804 + g_bss_003dc80c + g_screen_pitch * (g_bss_003dc808 + g_bss_003dc810);
      str_ptr_4 = (char *)(g_display_bss_003d9818 + g_bss_003db800);
      local_20 = 0;
      if (0 < g_bss_003db7fc) {
        do {
          val = 0;
          str_ptr = str_ptr_4;
          str_ptr_2 = local_1c;
          if (0 < g_bss_003db7f8) {
            do {
              *str_ptr_3 = *str_ptr;
              if (*str_ptr_2 != -2) {
                *str_ptr = *str_ptr_2;
              }
              val = val + 1;
              str_ptr_3 = str_ptr_3 + 1;
              str_ptr = str_ptr + 1;
              str_ptr_2 = str_ptr_2 + 1;
            } while (val < g_bss_003db7f8);
          }
          str_ptr_4 = str_ptr_4 + g_screen_pitch;
          local_1c = local_1c + *(byte *)(g_display_bss_003d9828 + 4);
          local_20 = local_20 + 1;
        } while (local_20 < g_bss_003db7fc);
      }
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eb974 (Original VA: 0xeb974, Ghidra: FUN_000eb974)
 * Prototype: undefined8 bflib_system_io_fn_0eb974(void);
 * Address  : 0xeb974 (Size: 194 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eb974
 * Callers  : 4 -> game_draw_text_overlay_03752a, bflib_system_io_fn_0e79fc, bflib_system_io_fn_0e7aac, bflib_system_io_fn_0e7c64
 * Callees  : 3 -> bflib_system_io_fn_0ec3c8, bflib_system_io_fn_0ec534, bflib_system_io_fn_0ec780
 ******************************************************************************/
undefined8 bflib_system_io_fn_0eb974(void)

{
  undefined1 uval;
  int val;
  undefined4 arg_edx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  undefined1 *word_ptr_3;
  int val_2;
  
  if (g_bss_003db7f4 != 0) {
    word_ptr_2 = &g_bss_003db804;
    val_2 = 0;
    word_ptr_3 = (undefined1 *)(g_display_bss_003d9818 + g_bss_003db800);
    if (0 < g_bss_003db7fc) {
      do {
        val = 0;
        word_ptr = word_ptr_3;
        if (0 < g_bss_003db7f8) {
          do {
            uval = *word_ptr_2;
            word_ptr_2 = word_ptr_2 + 1;
            *word_ptr = uval;
            val = val + 1;
            word_ptr = word_ptr + 1;
          } while (val < g_bss_003db7f8);
        }
        val_2 = val_2 + 1;
        word_ptr_3 = word_ptr_3 + g_screen_pitch;
      } while (val_2 < g_bss_003db7fc);
    }
  }
  if (g_net_bss_003dd838 != 0) {
    g_graphics_window_width = g_graphics_window_width + g_net_bss_003dd830;
    g_graphics_window_height = g_graphics_window_height + g_net_bss_003dd834;
    bflib_system_io_fn_0ec3c8();
    if (g_display_bss_003d98c0 == 0) {
      bflib_system_io_fn_0ec780();
      bflib_system_io_fn_0ec534();
    }
    g_net_bss_003dd838 = 0;
  }
  g_net_bss_003dd824 = 0;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eba38 (Original VA: 0xeba38, Ghidra: FUN_000eba38)
 * Prototype: undefined4 bflib_system_io_fn_0eba38(void);
 * Address  : 0xeba38 (Size: 117 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eba38
 * Callers  : 4 -> setup_load_core_game_data, setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites, bflib_system_io_fn_0ebc10
 * Callees  : 2 -> bflib_system_io_fn_0ec534, bflib_system_io_fn_0ec780
 ******************************************************************************/
undefined4 bflib_system_io_fn_0eba38(void)

{
  int arg_eax;
  int arg_edx;
  int extraout_EDX;
  
  if (g_bss_003db7f0 == 0) {
    return 0xffffffff;
  }
  g_net_bss_003dd824 = 1;
  if (g_display_bss_003d98c0 == 0) {
    bflib_system_io_fn_0ec780();
    arg_edx = extraout_EDX;
  }
  g_bss_003dc81c = -arg_eax;
  g_bss_003dc820 = -arg_edx;
  if (g_display_bss_003d98c0 == 0) {
    bflib_system_io_fn_0ec534();
  }
  g_net_bss_003dd824 = 0;
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebab0 (Original VA: 0xebab0, Ghidra: FUN_000ebab0)
 * Prototype: undefined8 bflib_system_io_fn_0ebab0(void);
 * Address  : 0xebab0 (Size: 352 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebab0
 * Callers  : 6 -> frontend_fn_02f9f5, frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_dkflag00_dat_031213, frontmap_ldata_netflag_dat_031a51, bflib_system_io_fn_0ebc10, bflib_system_io_fn_0ebc98
 * Callees  : 5 -> LbScreenWaitVbi, bflib_system_io_fn_0e6a6c, bflib_system_io_fn_0ec534, bflib_system_io_fn_0ec780, watcom_crt_fn_13a710
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ebab0(void)

{
  undefined4 uval;
  undefined2 saved_draw_flags;
  int arg_eax;
  undefined4 uval_2;
  undefined4 arg_edx;
  
  if (g_bss_003db7f0 == 0) {
    uval_2 = 0xffffffff;
  }
  else {
    if (arg_eax == g_display_bss_003d9828) {
      return CONCAT44(arg_edx,1);
    }
    if ((arg_eax != 0) && ((0x40 < *(byte *)(arg_eax + 4) || (0x40 < *(byte *)(arg_eax + 5))))) {
      return CONCAT44(arg_edx,0xffffffff);
    }
    g_net_bss_003dd824 = 1;
    if (g_display_bss_003d98c0 == 0) {
      bflib_system_io_fn_0ec780();
    }
    g_display_bss_003d9828 = arg_eax;
    LbScreenWaitVbi();
    saved_draw_flags = g_lb_display_draw_flags;
    uval = g_screen_pitch;
    uval_2 = g_display_bss_003d9818;
    if (arg_eax != 0) {
      g_display_bss_003d9818 = &g_bss_003dc824;
      g_screen_pitch = (uint)*(byte *)(arg_eax + 4);
      g_lb_display_draw_flags = 0;
      bflib_system_io_fn_0e6a6c(g_display_bss_003d983c,g_display_bss_003d9848);
      watcom_crt_fn_13a710();
      g_display_bss_003d9818 = (undefined *)uval_2;
      g_screen_pitch = uval;
      g_lb_display_draw_flags = saved_draw_flags;
      bflib_system_io_fn_0e6a6c();
    }
    if (g_display_bss_003d98c0 == 0) {
      bflib_system_io_fn_0ec534();
    }
    uval_2 = 1;
    g_net_bss_003dd824 = 0;
  }
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebc10 (Original VA: 0xebc10, Ghidra: FUN_000ebc10)
 * Prototype: undefined4 bflib_system_io_fn_0ebc10(void);
 * Address  : 0xebc10 (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebc10
 * Callers  : 11 -> frontend_load_frontend_palette_02e8a7, fronttor_ldata_fronttor_tab_036654, game_out_sync_gameturn_036ff4, setup_init_game_screen_and_subsystems, setup_free_pointer_sprites, creature_dene_says_big_hello_08685c, draw_update_player_dungeon_08a194, draw_update_player_view_state_08a9f4 ...
 * Callees  : 2 -> bflib_system_io_fn_0eba38, bflib_system_io_fn_0ebab0
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ebc10(void)

{
  int val;
  
  val = bflib_system_io_fn_0ebab0();
  if (val == 1) {
    bflib_system_io_fn_0eba38();
    return 1;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebc34 (Original VA: 0xebc34, Ghidra: FUN_000ebc34)
 * Prototype: undefined4 bflib_system_io_fn_0ebc34(void);
 * Address  : 0xebc34 (Size: 75 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebc34
 * Callers  : 1 -> bflib_system_io_fn_0ebc98
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ebc34(void)

{
  uint arg_eax;
  uint uval;
  uint arg_edx;
  uint uval_2;
  
  if (g_bss_003db7f0 == 0) {
    return 0xffffffff;
  }
  uval = arg_eax & 0xff;
  if ((uval != 0) && (uval < 0x40)) {
    uval_2 = arg_edx & 0xff;
    if ((uval_2 != 0) && (uval_2 < 0x40)) {
      g_bss_003dc814 = uval;
      g_bss_003dc818 = uval_2;
      return 1;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebc80 (Original VA: 0xebc80, Ghidra: FUN_000ebc80)
 * Prototype: undefined4 bflib_system_io_fn_0ebc80(void);
 * Address  : 0xebc80 (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebc80
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ebc80(void)

{
  if (g_bss_003db7f0 != 0) {
    return 1;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebc98 (Original VA: 0xebc98, Ghidra: FUN_000ebc98)
 * Prototype: undefined8 bflib_system_io_fn_0ebc98(void);
 * Address  : 0xebc98 (Size: 462 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebc98
 * Callers  : 3 -> setup_load_core_game_data, setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites
 * Callees  : 8 -> LbScreenWaitVbi, bflib_system_io_fn_0ebab0, bflib_system_io_fn_0ebc34, bflib_system_io_fn_0ebf50, bflib_system_io_fn_0ebf9c, bflib_system_io_fn_0f7786, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ebc98(void)

{
  undefined4 uval;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  undefined2 local_48;
  
  if (g_bss_003db7f0 == 0) {
    if (g_net_bss_003dd828 == 0) {
      bflib_system_io_fn_0fed1d();
      bflib_system_io_fn_0f7786(0);
      if (local_48 != -1) {
        return CONCAT44(arg_edx,0xffffffff);
      }
    }
    g_bss_003db7f0 = 1;
    g_bss_003dc814 = 1;
    g_bss_003dc81c = 0;
    g_bss_003dc820 = 0;
    g_bss_003dc818 = 1;
    LbScreenWaitVbi();
    g_display_bss_003d9828 = 0;
    g_net_bss_003dd824 = 0;
    LbScreenWaitVbi();
    val = bflib_system_io_fn_0ebf50();
    if (val != extraout_ECX) {
      g_bss_003db7f0 = 0;
      return CONCAT44(arg_edx,0xffffffff);
    }
    val = bflib_system_io_fn_0ebc34();
    if (val != extraout_ECX) {
      g_bss_003db7f0 = 0;
      return CONCAT44(arg_edx,0xffffffff);
    }
    val = bflib_system_io_fn_0ebf9c();
    if (val != extraout_ECX) {
      g_bss_003db7f0 = 0;
      return CONCAT44(arg_edx,0xffffffff);
    }
    val = bflib_system_io_fn_0ebab0();
    if (val != extraout_ECX) {
      g_bss_003db7f0 = 0;
      return CONCAT44(arg_edx,0xffffffff);
    }
    if (g_net_bss_003dd828 == 0) {
      bflib_system_io_fn_0fed45(0xc);
      g_net_bss_003dd828 = 1;
    }
    uval = 1;
  }
  else {
    uval = 0xffffffff;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebe68 (Original VA: 0xebe68, Ghidra: FUN_000ebe68)
 * Prototype: undefined8 bflib_system_io_fn_0ebe68(void);
 * Address  : 0xebe68 (Size: 130 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebe68
 * Callers  : 1 -> setup_shutdown_video_and_audio
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0ec780, bflib_system_io_fn_0f7786
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ebe68(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  
  if (g_bss_003db7f0 == 0) {
    uval = 0xffffffff;
  }
  else {
    g_net_bss_003dd824 = 1;
    if (g_display_bss_003d98c0 == 0) {
      bflib_system_io_fn_0ec780();
    }
    LbScreenWaitVbi();
    bflib_system_io_fn_0f7786();
    uval = 1;
    g_net_bss_003dd828 = 0;
    g_display_bss_003d9828 = 0;
    g_bss_003db7f0 = 0;
    g_net_bss_003dd824 = 0;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebeec (Original VA: 0xebeec, Ghidra: FUN_000ebeec)
 * Prototype: undefined8 bflib_system_io_fn_0ebeec(void);
 * Address  : 0xebeec (Size: 98 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebeec
 * Callers  : 2 -> LbScreenSetup, LbScreenReset
 * Callees  : 2 -> LbScreenWaitVbi, bflib_system_io_fn_0ec780
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ebeec(void)

{
  undefined4 arg_edx;
  
  if (g_bss_003db7f0 == 0) {
    return CONCAT44(arg_edx,0xffffffff);
  }
  g_net_bss_003dd824 = 1;
  if (g_display_bss_003d98c0 == 0) {
    bflib_system_io_fn_0ec780();
  }
  LbScreenWaitVbi();
  g_display_bss_003d9828 = 0;
  g_bss_003db7f0 = 0;
  g_net_bss_003dd824 = 0;
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebf50 (Original VA: 0xebf50, Ghidra: FUN_000ebf50)
 * Prototype: undefined4 bflib_system_io_fn_0ebf50(void);
 * Address  : 0xebf50 (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebf50
 * Callers  : 1 -> bflib_system_io_fn_0ebc98
 * Callees  : 1 -> bflib_system_io_fn_0ec3c8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0ebf50(void)

{
  undefined4 arg_eax;
  undefined4 arg_ecx;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  
  if (g_bss_003db7f0 == 0) {
    return 0xffffffff;
  }
  g_display_bss_003d984c = arg_eax;
  g_display_bss_003d9850 = arg_edx;
  g_display_bss_003d9854 = arg_ebx;
  g_display_bss_003d9858 = arg_ecx;
  bflib_system_io_fn_0ec3c8();
  bflib_system_io_fn_0ec3c8();
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ebf9c (Original VA: 0xebf9c, Ghidra: FUN_000ebf9c)
 * Prototype: undefined4 bflib_system_io_fn_0ebf9c(void);
 * Address  : 0xebf9c (Size: 139 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ebf9c
 * Callers  : 12 -> frontend_load_frontend_palette_02e8a7, frontend_fn_02f9f5, frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_netflag_dat_031a51, frontmap_fn_031c23, frontmap_LbNetwork_Exchange_031def, input_process_thing_entity_0473e1, input_fn_048675 ...
 * Callees  : 3 -> bflib_system_io_fn_0ec3c8, bflib_system_io_fn_0ec534, bflib_system_io_fn_0ec780
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ebf9c(void)

{
  undefined4 arg_eax;
  undefined4 uval;
  undefined4 arg_edx;
  
  if (g_bss_003db7f0 == 0) {
    uval = 0xffffffff;
  }
  else {
    g_net_bss_003dd824 = 1;
    if (g_display_bss_003d98c0 == 0) {
      bflib_system_io_fn_0ec780();
    }
    bflib_system_io_fn_0ec3c8();
    g_display_bss_003d985c = arg_eax;
    g_display_bss_003d9860 = arg_edx;
    g_graphics_window_width = arg_eax;
    g_graphics_window_height = arg_edx;
    if (g_display_bss_003d98c0 == 0) {
      bflib_system_io_fn_0ec534();
    }
    uval = 1;
    g_net_bss_003dd824 = 0;
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ec028 (Original VA: 0xec028, Ghidra: FUN_000ec028)
 * Prototype: undefined8 bflib_system_io_fn_0ec028(void);
 * Address  : 0xec028 (Size: 64 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ec028
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0ec3c8
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ec028(void)

{
  undefined4 arg_edx;
  
  if (g_net_bss_003dd838 != 0) {
    g_graphics_window_width = g_graphics_window_width + g_net_bss_003dd830;
    g_graphics_window_height = g_graphics_window_height + g_net_bss_003dd834;
    bflib_system_io_fn_0ec3c8();
    g_net_bss_003dd838 = 0;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ec068 (Original VA: 0xec068, Ghidra: FUN_000ec068)
 * Prototype: undefined8 bflib_system_io_fn_0ec068(void);
 * Address  : 0xec068 (Size: 863 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ec068
 * Callers  : 0 -> 
 * Callees  : 5 -> bflib_system_io_fn_0ec3c8, bflib_system_io_fn_0ec534, bflib_system_io_fn_0ec780, bflib_system_io_fn_0f0d1c, bflib_system_io_fn_0f4714
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bflib_system_io_fn_0ec068(void)

{
  char ch;
  char ch_2;
  undefined4 arg_eax;
  uint uval;
  int val;
  undefined4 arg_edx;
  short unaff_SI;
  short unaff_DI;
  
  uval = bflib_system_io_fn_0f4714();
  ch_2 = g_display_bss_003d987d;
  ch = g_display_bss_003d987c;
  if (g_bss_003db7f0 != 0) {
    if (uval != 1) {
      if (((uval & 2) != 0) && (g_display_bss_003d987e = 1, g_display_bss_003d987b == '\0')) {
        g_display_bss_003d987b = '\x01';
        g_display_bss_003d985c = g_graphics_window_width;
        g_display_bss_003d9860 = g_graphics_window_height;
        g_display_bss_003d9881 = '\0';
      }
      if (((uval & 4) != 0) && (g_display_bss_003d987e = 0, g_display_bss_003d9881 == '\0')) {
        g_display_bss_003d9881 = '\x01';
        g_display_bss_003d986c = g_graphics_window_width;
        g_display_bss_003d9870 = g_graphics_window_height;
      }
      if ((uval & 8) != 0) {
        g_display_bss_003d987f = 1;
        if (g_display_bss_003d987c == '\0') {
          g_display_bss_003d987c = '\x01';
          g_display_bss_003d985c = g_graphics_window_width;
          g_display_bss_003d9860 = g_graphics_window_height;
          g_display_bss_003d9883 = ch;
        }
      }
      if (((uval & 0x10) != 0) && (g_display_bss_003d987f = 0, g_display_bss_003d9883 == '\0')) {
        g_display_bss_003d9883 = '\x01';
        g_display_bss_003d986c = g_graphics_window_width;
        g_display_bss_003d9870 = g_graphics_window_height;
      }
      if ((uval & 0x20) != 0) {
        g_display_bss_003d9880 = 1;
        if (g_display_bss_003d987d == '\0') {
          g_display_bss_003d987d = '\x01';
          g_display_bss_003d985c = g_graphics_window_width;
          g_display_bss_003d9860 = g_graphics_window_height;
          g_display_bss_003d9882 = ch_2;
        }
      }
      if (((uval & 0x40) != 0) && (g_display_bss_003d9880 = 0, g_display_bss_003d9882 == '\0')) {
        g_display_bss_003d9882 = '\x01';
        g_display_bss_003d986c = g_graphics_window_width;
        g_display_bss_003d9870 = g_graphics_window_height;
      }
    }
    if ((uval & 1) != 0) {
      g_bss_003db7e2._2_2_ = g_net_bss_003dd82c;
      g_bss_003db7e6 = g_net_bss_003dd82e;
      g_net_bss_003dd834 = 0;
      g_net_bss_003dd830 = 0;
      val = (int)unaff_SI - (int)g_net_bss_003dd82c;
      if (val != 0) {
        if (val < 1) {
          g_net_bss_003dd830 = val / g_bss_003dc814;
          g_bss_003db7e8 = g_bss_003db7e8 + val % g_bss_003dc814;
          if (g_bss_003db7e8 < 0) {
            g_net_bss_003dd830 = g_net_bss_003dd830 + -1;
            g_bss_003db7e8 = g_bss_003dc814 + g_bss_003db7e8 % g_bss_003dc814;
          }
        }
        else {
          val = val + g_bss_003db7e8;
          g_bss_003db7e8 = val % g_bss_003dc814;
          g_net_bss_003dd830 = val / g_bss_003dc814;
        }
        g_net_bss_003dd838 = 1;
      }
      val = (int)unaff_DI - (int)g_net_bss_003dd82e;
      if (val != 0) {
        if (val < 1) {
          g_net_bss_003dd834 = val / g_bss_003dc818;
          g_bss_003db7ec = g_bss_003db7ec + val % g_bss_003dc818;
          if (g_bss_003db7ec < 0) {
            g_net_bss_003dd834 = g_net_bss_003dd834 + -1;
            g_bss_003db7ec = g_bss_003dc818 + g_bss_003db7ec % g_bss_003dc818;
          }
        }
        else {
          val = val + g_bss_003db7ec;
          g_bss_003db7ec = val % g_bss_003dc818;
          g_net_bss_003dd834 = val / g_bss_003dc818;
        }
        g_net_bss_003dd838 = 1;
      }
      g_net_bss_003dd82c = unaff_SI;
      g_net_bss_003dd82e = unaff_DI;
      if ((g_net_bss_003dd824 == 0) && (g_display_bss_003d98c0 == 0)) {
        g_graphics_window_width = g_graphics_window_width + g_net_bss_003dd830;
        g_graphics_window_height = g_graphics_window_height + g_net_bss_003dd834;
        bflib_system_io_fn_0ec3c8();
        bflib_system_io_fn_0ec780();
        bflib_system_io_fn_0ec534();
        if (g_display_bss_003d987a != '\0') {
          bflib_system_io_fn_0f0d1c();
        }
        g_net_bss_003dd838 = 0;
      }
    }
  }
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ec3c8 (Original VA: 0xec3c8, Ghidra: FUN_000ec3c8)
 * Prototype: undefined4 bflib_system_io_fn_0ec3c8(void);
 * Address  : 0xec3c8 (Size: 88 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ec3c8
 * Callers  : 5 -> bflib_system_io_fn_0eb974, bflib_system_io_fn_0ebf50, bflib_system_io_fn_0ebf9c, bflib_system_io_fn_0ec028, bflib_system_io_fn_0ec068
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0ec3c8(void)

{
  int *arg_eax;
  undefined4 uval;
  int val;
  int *arg_edx;
  
  uval = 0;
  val = g_display_bss_003d984c;
  if (g_display_bss_003d984c <= *arg_eax) {
    if (*arg_eax < g_display_bss_003d984c + g_display_bss_003d9854) goto LAB_000ec3ee;
    val = g_display_bss_003d984c + g_display_bss_003d9854 + -1;
  }
  uval = 1;
  *arg_eax = val;
LAB_000ec3ee:
  if (*arg_edx < g_display_bss_003d9850) {
    *arg_edx = g_display_bss_003d9850;
    return 1;
  }
  if (g_display_bss_003d9858 + g_display_bss_003d9850 <= *arg_edx) {
    uval = 1;
    *arg_edx = g_display_bss_003d9858 + g_display_bss_003d9850 + -1;
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ec420 (Original VA: 0xec420, Ghidra: FUN_000ec420)
 * Prototype: longlong bflib_system_io_fn_0ec420(void);
 * Address  : 0xec420 (Size: 276 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ec420
 * Callers  : 2 -> bflib_system_io_fn_0eb840, bflib_system_io_fn_0ec534
 * Callees  : 0 -> 
 ******************************************************************************/
longlong bflib_system_io_fn_0ec420(void)

{
  undefined4 uval;
  uint arg_edx;
  
  g_bss_003db7f8 = (uint)*(byte *)(g_display_bss_003d9828 + 4);
  g_bss_003db7fc = (uint)*(byte *)(g_display_bss_003d9828 + 5);
  g_bss_003dc80c = 0;
  g_bss_003dc810 = 0;
  if (((int)-g_bss_003db7f8 < g_bss_003dc804) && (g_bss_003dc804 < g_screen_pitch)) {
    if ((g_bss_003dc808 <= (int)-g_bss_003db7fc) || (g_display_bss_003d9838 <= g_bss_003dc808)) {
      return (ulonglong)arg_edx << 0x20;
    }
    if (g_bss_003dc804 < 0) {
      g_bss_003dc80c = -g_bss_003dc804;
      g_bss_003db7f8 = g_bss_003db7f8 + g_bss_003dc804;
    }
    if (g_screen_pitch < (int)(g_bss_003dc804 + g_bss_003db7f8)) {
      g_bss_003db7f8 = g_screen_pitch - g_bss_003dc804;
    }
    if (g_bss_003dc808 < 0) {
      g_bss_003dc810 = -g_bss_003dc808;
      g_bss_003db7fc = g_bss_003db7fc + g_bss_003dc808;
    }
    if (g_display_bss_003d9838 < (int)(g_bss_003dc808 + g_bss_003db7fc)) {
      g_bss_003db7fc = g_display_bss_003d9838 - g_bss_003dc808;
    }
    uval = 1;
  }
  else {
    uval = 0;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ec534 (Original VA: 0xec534, Ghidra: FUN_000ec534)
 * Prototype: undefined8 bflib_system_io_fn_0ec534(void);
 * Address  : 0xec534 (Size: 585 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ec534
 * Callers  : 5 -> bflib_system_io_fn_0eb974, bflib_system_io_fn_0eba38, bflib_system_io_fn_0ebab0, bflib_system_io_fn_0ebf9c, bflib_system_io_fn_0ec068
 * Callees  : 2 -> bflib_system_io_fn_0ec420, bflib_system_io_fn_0f0d1c
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ec534(void)

{
  undefined4 uval;
  char *str_ptr;
  char *extraout_ECX;
  undefined4 arg_edx;
  char *str_ptr_2;
  char *extraout_EDX;
  char *extraout_EDX_00;
  char *str_ptr_3;
  int val;
  int val_2;
  int val_3;
  int val_4;
  bool flag;
  int local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  
  if (g_bss_003db7f0 == 0) {
    uval = 0xffffffff;
  }
  else {
    if (g_display_bss_003d9828 != 0) {
      g_bss_003dc804 = g_graphics_window_width + g_bss_003dc81c;
      g_bss_003dc808 = g_graphics_window_height + g_bss_003dc820;
      g_bss_003db7f4 = bflib_system_io_fn_0ec420();
      if (g_bss_003db7f4 == 1) {
        str_ptr_2 = &g_bss_003db804;
        local_28 = &g_bss_003dc824 + (uint)*(byte *)(g_display_bss_003d9828 + 4) * g_bss_003dc810 + g_bss_003dc80c;
        g_bss_003db800 = g_bss_003dc804 + g_bss_003dc80c + g_screen_width * (g_bss_003dc808 + g_bss_003dc810);
        if (g_display_bss_003d987a == '\0') {
          local_2c = (char *)(g_bss_003db800 + g_display_bss_003d9814);
          val_4 = g_bss_003db7fc;
          while (val_4 = val_4 + -1, val_4 != -1) {
            val = 0;
            val_3 = -g_bss_003db7f8;
            flag = SBORROW4(0,g_bss_003db7f8);
            str_ptr = local_2c;
            str_ptr_3 = local_28;
            while (flag != val_3 < 0) {
              *str_ptr_2 = *str_ptr;
              str_ptr_2 = str_ptr_2 + 1;
              if (*str_ptr_3 != -2) {
                *str_ptr = *str_ptr_3;
              }
              val = val + 1;
              str_ptr = str_ptr + 1;
              str_ptr_3 = str_ptr_3 + 1;
              val_3 = val - g_bss_003db7f8;
              flag = SBORROW4(val,g_bss_003db7f8);
            }
            local_2c = local_2c + g_screen_width;
            local_28 = local_28 + *(byte *)(g_display_bss_003d9828 + 4);
          }
        }
        else {
          bflib_system_io_fn_0f0d1c();
          local_24 = (char *)(g_display_bss_003d9814 + (g_bss_003db800 & 0xffff));
          local_30 = g_bss_003db7fc;
          str_ptr_2 = extraout_EDX;
          while (val_4 = g_bss_003db7f8, local_30 = local_30 + -1, local_30 != -1) {
            str_ptr = local_28;
            str_ptr_3 = local_24;
            if ((char *)0xaffff < local_24 + g_bss_003db7f8) {
              val = 0xb0000 - (int)local_24;
              flag = SBORROW4(0,val);
              val_3 = -val;
              if (0 < val) {
                val_2 = 0;
                while (flag != val_3 < 0) {
                  *str_ptr_2 = *str_ptr_3;
                  str_ptr_2 = str_ptr_2 + 1;
                  if (*str_ptr != -2) {
                    *str_ptr_3 = *str_ptr;
                  }
                  val_2 = val_2 + 1;
                  str_ptr_3 = str_ptr_3 + 1;
                  str_ptr = str_ptr + 1;
                  val_3 = val_2 - val;
                  flag = SBORROW4(val_2,val);
                }
                val_4 = val_4 - val;
              }
              bflib_system_io_fn_0f0d1c();
              local_24 = local_24 + -0x10000;
              str_ptr_3 = str_ptr_3 + -0x10000;
              str_ptr = extraout_ECX;
              str_ptr_2 = extraout_EDX_00;
            }
            val_3 = 0;
            if (0 < val_4) {
              do {
                *str_ptr_2 = *str_ptr_3;
                str_ptr_2 = str_ptr_2 + 1;
                if (*str_ptr != -2) {
                  *str_ptr_3 = *str_ptr;
                }
                val_3 = val_3 + 1;
                str_ptr_3 = str_ptr_3 + 1;
                str_ptr = str_ptr + 1;
              } while (val_3 < val_4);
            }
            local_24 = local_24 + g_screen_width;
            local_28 = local_28 + *(byte *)(g_display_bss_003d9828 + 4);
          }
        }
      }
    }
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ec780 (Original VA: 0xec780, Ghidra: FUN_000ec780)
 * Prototype: undefined8 bflib_system_io_fn_0ec780(void);
 * Address  : 0xec780 (Size: 354 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ec780
 * Callers  : 7 -> bflib_system_io_fn_0eb974, bflib_system_io_fn_0eba38, bflib_system_io_fn_0ebab0, bflib_system_io_fn_0ebe68, bflib_system_io_fn_0ebeec, bflib_system_io_fn_0ebf9c, bflib_system_io_fn_0ec068
 * Callees  : 1 -> bflib_system_io_fn_0f0d1c
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ec780(void)

{
  undefined1 uval;
  short short_val;
  int arg_eax;
  undefined4 uval_2;
  undefined1 *word_ptr;
  int val;
  undefined4 arg_edx;
  undefined1 *word_ptr_2;
  undefined1 *extraout_EDX;
  undefined1 *extraout_EDX_00;
  int val_2;
  undefined1 *word_ptr_3;
  int val_3;
  int val_4;
  undefined1 *word_ptr_4;
  bool flag;
  
  if (g_bss_003db7f0 == 0) {
    uval_2 = 0xffffffff;
  }
  else {
    if ((((g_graphics_window_width != g_bss_003dc804) || (g_graphics_window_height != g_bss_003dc808)) || (arg_eax != 0)) &&
       (g_bss_003db7f4 != 0)) {
      word_ptr_2 = &g_bss_003db804;
      if (g_display_bss_003d987a == '\0') {
        word_ptr_4 = (undefined1 *)(g_display_bss_003d9814 + g_bss_003db800);
        val_3 = g_bss_003db7fc;
        while (val_3 = val_3 + -1, val_3 != -1) {
          val_2 = 0;
          val_4 = -g_bss_003db7f8;
          flag = SBORROW4(0,g_bss_003db7f8);
          word_ptr = word_ptr_4;
          while (flag != val_4 < 0) {
            uval = *word_ptr_2;
            word_ptr_2 = word_ptr_2 + 1;
            *word_ptr = uval;
            val_2 = val_2 + 1;
            word_ptr = word_ptr + 1;
            val_4 = val_2 - g_bss_003db7f8;
            flag = SBORROW4(val_2,g_bss_003db7f8);
          }
          word_ptr_4 = word_ptr_4 + g_screen_width;
        }
      }
      else {
        short_val = (short)(g_bss_003db800 >> 0x10);
        bflib_system_io_fn_0f0d1c();
        word_ptr_4 = (undefined1 *)(g_display_bss_003d9814 + (g_bss_003db800 & 0xffff));
        word_ptr_2 = extraout_EDX;
        val_3 = g_bss_003db7fc;
        while (val_4 = g_bss_003db7f8, val_3 = val_3 + -1, val_3 != -1) {
          word_ptr = word_ptr_4;
          if ((undefined1 *)0xaffff < word_ptr_4 + g_bss_003db7f8) {
            val_2 = 0xb0000 - (int)word_ptr_4;
            if (0 < val_2) {
              val = 0;
              word_ptr_3 = word_ptr_4;
              if (0 < val_2) {
                do {
                  word_ptr = word_ptr_3 + 1;
                  uval = *word_ptr_2;
                  word_ptr_2 = word_ptr_2 + 1;
                  val = val + 1;
                  *word_ptr_3 = uval;
                  word_ptr_3 = word_ptr;
                } while (val < val_2);
              }
              val_4 = val_4 - val_2;
            }
            short_val = short_val + 1;
            word_ptr = word_ptr + -0x10000;
            word_ptr_4 = word_ptr_4 + -0x10000;
            bflib_system_io_fn_0f0d1c(val_3,short_val);
            word_ptr_2 = extraout_EDX_00;
          }
          val_2 = 0;
          if (0 < val_4) {
            do {
              uval = *word_ptr_2;
              word_ptr_2 = word_ptr_2 + 1;
              val_2 = val_2 + 1;
              *word_ptr = uval;
              word_ptr = word_ptr + 1;
            } while (val_2 < val_4);
          }
          word_ptr_4 = word_ptr_4 + g_screen_width;
        }
      }
      g_bss_003db7f4 = 0;
    }
    uval_2 = 1;
  }
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : bflib_system_io_redbook_countdown_ended_0ec8e4 (Original VA: 0xec8e4, Ghidra: FUN_000ec8e4)
 * Prototype: void bflib_system_io_redbook_countdown_ended_0ec8e4(void);
 * Address  : 0xec8e4 (Size: 91 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'Redbook countdown ended'
 * Callers  : 0 -> 
 * Callees  : 3 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_release_timer_handle_0fa30a
 ******************************************************************************/
void bflib_system_io_redbook_countdown_ended_0ec8e4(void)

{
  if ((g_net_bss_003dd855 != 0) && (g_net_bss_003dd855 = g_net_bss_003dd855 + -5, g_net_bss_003dd855 == 0)) {
    dk_sprintf(&g_sound_driver_ready,s_Redbook_countdown_ended_0016d088);
    bflib_system_io_fn_0f9610();
    g_net_bss_003dd840 = 0;
    bflib_sound_AIL_release_timer_handle_0fa30a(g_net_bss_003dd85a);
    g_net_bss_003dd859 = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0eca60 (Original VA: 0xeca60, Ghidra: FUN_000eca60)
 * Prototype: void bflib_system_io_fn_0eca60(void);
 * Address  : 0xeca60 (Size: 92 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0eca60
 * Callers  : 1 -> bflib_system_io_fn_0f4c6c
 * Callees  : 4 -> bflib_sound_AIL_shutdown_0f98ca, bflib_sound_AIL_redbook_close_0fc91b, bflib_sound_AIL_redbook_stop_0fcce5, bflib_sound_AIL_redbook_set_volume_0fce5d
 ******************************************************************************/
void bflib_system_io_fn_0eca60(void)

{
  if (g_net_bss_003dd849 != 0) {
    bflib_sound_AIL_redbook_stop_0fcce5(g_net_bss_003dd83c);
    g_net_bss_003dd844 = 0;
    bflib_sound_AIL_redbook_set_volume_0fce5d(g_net_bss_003dd83c,g_data_00195568);
    bflib_sound_AIL_redbook_close_0fc91b(g_net_bss_003dd83c);
    if ((g_bss_003df8d1 == '\0') && (g_bss_003df514 == '\0')) {
      bflib_sound_AIL_shutdown_0f98ca();
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ecf0b (Original VA: 0xecf0b, Ghidra: FUN_000ecf0b)
 * Prototype: undefined8 bflib_system_io_fn_0ecf0b(void);
 * Address  : 0xecf0b (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ecf0b
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_sound_AIL_redbook_tracks_0fca93
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ecf0b(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  
  if (g_net_bss_003dd849 == 0) {
    return CONCAT44(arg_edx,0xffffffff);
  }
  uval = bflib_sound_AIL_redbook_tracks_0fca93(g_net_bss_003dd83c);
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ecf4c (Original VA: 0xecf4c, Ghidra: FUN_000ecf4c)
 * Prototype: undefined8 bflib_system_io_fn_0ecf4c(void);
 * Address  : 0xecf4c (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ecf4c
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_sound_AIL_redbook_status_0fca35
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ecf4c(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  
  if (g_net_bss_003dd849 == 0) {
    return CONCAT44(arg_edx,0xffffffff);
  }
  uval = bflib_sound_AIL_redbook_status_0fca35(g_net_bss_003dd83c);
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_bf110_set_redbook_volume_0ecf70 (Original VA: 0xecf70, Ghidra: FUN_000ecf70)
 * Prototype: void bflib_system_io_bf110_set_redbook_volume_0ecf70(void);
 * Address  : 0xecf70 (Size: 94 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'BF110 - set redbook volume to %d'
 * Callers  : 10 -> frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_dkflag00_dat_031213, frontmap_fn_031854, frontmap_ldata_netflag_dat_031a51, frontmap_ldata_netflag_dat_031bd6, frontmap_LbNetwork_Exchange_031def, newgui_fn_05a417, packet_compute_full_dungeon_checksum ...
 * Callees  : 3 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_redbook_set_volume_0fce5d
 ******************************************************************************/
void bflib_system_io_bf110_set_redbook_volume_0ecf70(void)

{
  int arg_eax;
  undefined4 extraout_EDX;
  
  if ((((g_net_bss_003dd849 != 0) && (arg_eax < 0x80)) && (-1 < arg_eax)) && (g_net_bss_003dd844 == '\0')) {
    if (g_bss_003debd4 != 0) {
      g_net_bss_003dd844 = '\x01';
    }
    dk_sprintf(&g_sound_driver_ready,s_BF110___set_redbook_volume_to__d_0016d321);
    bflib_system_io_fn_0f9610();
    bflib_sound_AIL_redbook_set_volume_0fce5d(g_net_bss_003dd83c,extraout_EDX);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ecfce (Original VA: 0xecfce, Ghidra: FUN_000ecfce)
 * Prototype: undefined8 bflib_system_io_fn_0ecfce(void);
 * Address  : 0xecfce (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ecfce
 * Callers  : 1 -> bflib_sound_bf110_cd_non_audio_0ec93f
 * Callees  : 1 -> bflib_sound_AIL_redbook_volume_0fcdff
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ecfce(void)

{
  undefined4 uval;
  undefined4 arg_edx;
  
  if (g_net_bss_003dd849 == 0) {
    return CONCAT44(arg_edx,0xffffffff);
  }
  uval = bflib_sound_AIL_redbook_volume_0fcdff(g_net_bss_003dd83c);
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ecff2 (Original VA: 0xecff2, Ghidra: FUN_000ecff2)
 * Prototype: longlong bflib_system_io_fn_0ecff2(void);
 * Address  : 0xecff2 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ecff2
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_sound_AIL_redbook_position_0fcbbf
 ******************************************************************************/
longlong bflib_system_io_fn_0ecff2(void)

{
  undefined4 uval;
  uint arg_edx;
  
  if (g_net_bss_003dd849 == 0) {
    return (ulonglong)arg_edx << 0x20;
  }
  uval = bflib_sound_AIL_redbook_position_0fcbbf(g_net_bss_003dd83c);
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ed020 (Original VA: 0xed020, Ghidra: FUN_000ed020)
 * Prototype: void bflib_system_io_fn_0ed020(void);
 * Address  : 0xed020 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ed020
 * Callers  : 3 -> lbnet_GenericSerialInit_1008d0, lbnet_GenericModemInit_101158, LbNETWORK_11e314
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0ed020(void)

{
  bflib_system_io_fn_0e9594();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ed028 (Original VA: 0xed028, Ghidra: FUN_000ed028)
 * Prototype: undefined8 bflib_system_io_fn_0ed028(void);
 * Address  : 0xed028 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ed028
 * Callers  : 4 -> bflib_system_io_fn_103134, LbNETWORK_11e254, watcom_crt_fn_11f3f0, watcom_crt_fn_11fbe0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ed028(void)

{
  int val;
  undefined4 arg_edx;
  
  val = bflib_system_io_fn_0e9670();
  if (val != 0) {
    return CONCAT44(arg_edx,1);
  }
  return CONCAT44(arg_edx,0xffffffff);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ed034 (Original VA: 0xed034, Ghidra: FUN_000ed034)
 * Prototype: void bflib_system_io_fn_0ed034(void);
 * Address  : 0xed034 (Size: 23 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ed034
 * Callers  : 3 -> frontend_load_frontend_palette_02e8a7, frontnet_fn_03315b, game_out_sync_gameturn_036ff4
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0ed034(void)

{
  int arg_eax;
  
  g_bss_003dde30 = arg_eax * 1000;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_new_players_are_allowed_0ed0ac (Original VA: 0xed0ac, Ghidra: FUN_000ed0ac)
 * Prototype: undefined8 bflib_system_io_new_players_are_allowed_0ed0ac(void);
 * Address  : 0xed0ac (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'NEW PLAYERS ARE ALLOWED TO JOIN'
 * Callers  : 2 -> frontmap_ldata_netflag_dat_031a51, frontmap_LbNetwork_Exchange_031def
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined8 bflib_system_io_new_players_are_allowed_0ed0ac(void)

{
  int arg_eax;
  undefined4 uval;
  undefined4 arg_edx;
  char *str_ptr;
  
  uval = CONCAT31((int3)((uint)arg_eax >> 8),0xff);
  if (g_net_service_provider_ptr != 0) {
    if (arg_eax == 0) {
      str_ptr = s_NEW_PLAYERS_ARE_NOT_ALLOWED_TO_J_0016d3bb;
    }
    else {
      str_ptr = s_NEW_PLAYERS_ARE_ALLOWED_TO_JOIN_0016d39a;
    }
    LbNetLog(str_ptr);
    uval = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x24))();
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_requested_servicetype_out_range_0ed1b0 (Original VA: 0xed1b0, Ghidra: FUN_000ed1b0)
 * Prototype: void bflib_system_io_requested_servicetype_out_range_0ed1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 *param_9);
 * Address  : 0xed1b0 (Size: 395 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'The requested serviceType %d is out of range'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbNetwork_Init_0ed4e0, LbNetLog
 ******************************************************************************/
void bflib_system_io_requested_servicetype_out_range_0ed1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 *param_9)

{
  char arg_al;
  char ch;
  undefined4 *word_ptr;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined1 *puStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_2c = g_bss_003d97d0;
  local_28 = &g_data_00174590;
  g_bss_003d97d0 = &local_2c;
  local_24 = 0;
  if (param_9 == (undefined4 *)0x0) {
    param_9 = (undefined4 *)(undefined1 *)0x0;
  }
  else {
    switch(arg_al) {
    case '\x02':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      local_54 = *(undefined4 *)((int)param_9 + 0x19);
      local_4c = *(undefined4 *)((int)param_9 + 9);
      local_48 = *(undefined4 *)((int)param_9 + 0xd);
      local_44 = *(undefined4 *)((int)param_9 + 0x11);
      local_40 = *(undefined4 *)((int)param_9 + 0x15);
      param_9 = &local_5c;
      break;
    case '\x03':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      local_54 = *(undefined4 *)((int)param_9 + 9);
      param_9 = &local_5c;
      break;
    case '\x04':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      param_9 = &local_5c;
      break;
    case '\x05':
      local_5c = *(undefined4 *)((int)param_9 + 1);
      local_58 = *(undefined4 *)((int)param_9 + 5);
      local_4c = *(undefined4 *)((int)param_9 + 9);
      local_48 = *(undefined4 *)((int)param_9 + 0xd);
      local_44 = *(undefined4 *)((int)param_9 + 0x11);
      local_40 = *(undefined4 *)((int)param_9 + 0x15);
      param_9 = &local_5c;
    }
  }
  local_1c = param_6;
  local_20 = param_7;
  local_3c = param_1;
  local_38 = param_2;
  local_34 = param_3;
  local_30 = param_4;
  ch = '\0';
  switch(arg_al) {
  case '\x01':
  case '\x06':
    break;
  case '\x02':
  case '\x05':
    break;
  case '\x03':
  case '\x04':
    break;
  default:
    puStack_60 = (undefined1 *)(int)arg_al;
    pcStack_64 = s_The_requested_serviceType__d_is_o_0016d3f1;
    uStack_68 = 0xed2f4;
    LbNetLog();
    ch = -1;
  }
  word_ptr = &local_5c;
  if (ch == '\0') {
    pcStack_64 = (char *)param_8;
    uStack_68 = local_20;
    uStack_6c = local_1c;
    uStack_70 = param_5;
    uStack_74 = local_30;
    uStack_78 = local_34;
    uStack_7c = local_38;
    word_ptr = &uStack_80;
    uStack_80 = local_3c;
    puStack_60 = (undefined1 *)param_9;
    LbNetwork_Init_0ed4e0();
  }
  g_bss_003d97d0 = (undefined4 *)*(undefined4 *)((int)word_ptr + 0x30);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_requested_servicetype_out_range_0ed354 (Original VA: 0xed354, Ghidra: FUN_000ed354)
 * Prototype: void bflib_system_io_requested_servicetype_out_range_0ed354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8, undefined4 param_9);
 * Address  : 0xed354 (Size: 182 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'The requested serviceType %d is out of range'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbNetwork_Init_0ed4e0, LbNetLog
 ******************************************************************************/
void bflib_system_io_requested_servicetype_out_range_0ed354(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  char arg_al;
  char ch;
  undefined4 *word_ptr;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  int iStack_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  
  local_24 = g_bss_003d97d0;
  ch = '\0';
  local_20 = &g_data_00174594;
  local_1c = 0;
  switch(arg_al) {
  case '\x01':
  case '\x06':
    g_bss_003d97d0 = &local_24;
    break;
  case '\x02':
  case '\x05':
    g_bss_003d97d0 = &local_24;
    break;
  case '\x03':
  case '\x04':
    g_bss_003d97d0 = &local_24;
    break;
  default:
    iStack_28 = (int)arg_al;
    pcStack_2c = s_The_requested_serviceType__d_is_o_0016d3f1;
    uStack_30 = 0xed3b8;
    g_bss_003d97d0 = &local_24;
    LbNetLog();
    ch = -1;
  }
  word_ptr = &local_24;
  if (ch == '\0') {
    iStack_28 = param_9;
    pcStack_2c = (char *)param_8;
    uStack_30 = param_7;
    uStack_34 = param_6;
    uStack_38 = param_5;
    uStack_3c = param_4;
    uStack_40 = param_3;
    uStack_44 = param_2;
    word_ptr = &local_48;
    local_48 = param_1;
    LbNetwork_Init_0ed4e0();
  }
  g_bss_003d97d0 = (undefined4 *)*word_ptr;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ef460 (Original VA: 0xef460, Ghidra: FUN_000ef460)
 * Prototype: void bflib_system_io_fn_0ef460(undefined4 param_1,char *param_2);
 * Address  : 0xef460 (Size: 72 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ef460
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0ef600
 ******************************************************************************/
void bflib_system_io_fn_0ef460(undefined4 param_1,char *param_2)

{
  char ch;
  char *str_ptr;
  char local_2b [35];
  
  str_ptr = local_2b;
  do {
    ch = *param_2;
    *str_ptr = ch;
    if (ch == '\0') break;
    ch = param_2[1];
    param_2 = param_2 + 2;
    str_ptr[1] = ch;
    str_ptr = str_ptr + 2;
  } while (ch != '\0');
  bflib_system_io_fn_0ef600();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ef514 (Original VA: 0xef514, Ghidra: FUN_000ef514)
 * Prototype: void bflib_system_io_fn_0ef514(undefined4 param_1);
 * Address  : 0xef514 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ef514
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0ef514(undefined4 param_1)

{
  g_net_host_player_id = param_1;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ef5b8 (Original VA: 0xef5b8, Ghidra: FUN_000ef5b8)
 * Prototype: void bflib_system_io_fn_0ef5b8(void);
 * Address  : 0xef5b8 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ef5b8
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0ef600
 ******************************************************************************/
void bflib_system_io_fn_0ef5b8(void)

{
  bflib_system_io_fn_0ef600();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_Warning_0ef5c4 (Original VA: 0xef5c4, Ghidra: FUN_000ef5c4)
 * Prototype: undefined * bflib_system_io_Warning_0ef5c4(undefined4 param_1,uint param_2);
 * Address  : 0xef5c4 (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Log prefix 'Warning: UnidirectionalMsgCallback invalid length %d vs %d'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined * bflib_system_io_Warning_0ef5c4(undefined4 param_1,uint param_2)

{
  undefined *extraout_EDX;
  undefined *word_ptr;
  
  if (param_2 < 0x20d) {
    word_ptr = &g_bss_003def20;
    g_bss_003df12c = 1;
  }
  else {
    LbNetLog(s_Warning__UnidirectionalMsgCallba_0016e429,param_2,0x20c);
    word_ptr = extraout_EDX;
  }
  return word_ptr;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ef600 (Original VA: 0xef600, Ghidra: FUN_000ef600)
 * Prototype: undefined8 bflib_system_io_fn_0ef600(void);
 * Address  : 0xef600 (Size: 339 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ef600
 * Callers  : 2 -> bflib_system_io_fn_0ef460, bflib_system_io_fn_0ef5b8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ef600(void)

{
  char ch;
  bool flag;
  bool flag_2;
  int arg_eax;
  uint uval;
  undefined3 uval_2;
  undefined4 arg_edx;
  uint uval_3;
  char *str_ptr;
  char *str_ptr_2;
  char *str_ptr_3;
  uint local_20;
  char local_1c;
  
  uval = CONCAT22((short)((uint)arg_eax >> 0x10),0xff00);
  flag_2 = false;
  local_1c = -1;
  if (arg_eax != 0) {
    uval_3 = 0;
    if (g_net_max_players != 0) {
      uval = 0;
      do {
        if ((*(int *)((int)&g_net_bss_003dd8b4 + uval) != 0) &&
           (*(int *)((int)&g_net_bss_003dd8b0 + uval) == *(int *)(arg_eax + 1))) {
          flag_2 = true;
          local_20 = uval_3;
        }
        uval_3 = uval_3 + 1;
        uval = uval + 0x2c;
      } while (uval_3 < g_net_max_players);
    }
    if (flag_2) {
      local_1c = '\0';
    }
    else {
      flag = true;
      uval_3 = 0;
      uval = 0;
      do {
        if (*(int *)((int)&g_net_bss_003dd8b4 + uval) == 0) {
          flag_2 = true;
LAB_000ef683:
          flag = false;
        }
        else {
          uval_3 = uval_3 + 1;
          uval = uval + 0x2c;
          if (g_net_max_players <= uval_3) goto LAB_000ef683;
        }
      } while (flag);
      if (flag_2) {
        *(undefined4 *)((int)&g_net_bss_003dd8b0 + uval) = *(undefined4 *)(arg_eax + 1);
        *(undefined4 *)((int)&g_net_bss_003dd8b4 + uval) = 1;
        str_ptr_2 = (char *)(arg_eax + 0xd);
        str_ptr_3 = &g_net_bss_003dd8bc + uval;
        str_ptr = str_ptr_2;
        do {
          ch = *str_ptr;
          *str_ptr_3 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          str_ptr_3[1] = ch;
          str_ptr_3 = str_ptr_3 + 2;
        } while (ch != '\0');
        uval = uval_3 * 0x24;
        str_ptr_3 = (char *)(g_net_bss_003dd864 + uval);
        local_1c = '\0';
        str_ptr_3[0x20] = '\x01';
        str_ptr_3[0x21] = '\0';
        str_ptr_3[0x22] = '\0';
        str_ptr_3[0x23] = '\0';
        do {
          ch = *str_ptr_2;
          uval_2 = (undefined3)(uval >> 8);
          uval = CONCAT31(uval_2,ch);
          *str_ptr_3 = ch;
          local_20 = uval_3;
          if (ch == '\0') break;
          ch = str_ptr_2[1];
          uval = CONCAT31(uval_2,ch);
          str_ptr_2 = str_ptr_2 + 2;
          str_ptr_3[1] = ch;
          str_ptr_3 = str_ptr_3 + 2;
        } while (ch != '\0');
      }
    }
    if (local_1c == '\0') {
      if (*(int *)(arg_eax + 9) != 0) {
        uval = *(uint *)(arg_eax + 1);
        g_net_host_player_id = uval;
      }
      if (*(int *)(arg_eax + 5) != 0) {
        g_net_local_player_id = *(undefined4 *)(arg_eax + 1);
        g_net_bss_003dd888 = local_20;
        uval = local_20;
      }
    }
  }
  return CONCAT44(arg_edx,CONCAT31((int3)(uval >> 8),local_1c));
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ef754 (Original VA: 0xef754, Ghidra: FUN_000ef754)
 * Prototype: undefined8 bflib_system_io_fn_0ef754(void);
 * Address  : 0xef754 (Size: 82 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ef754
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ef754(void)

{
  bool flag;
  uint *arg_eax;
  int val;
  undefined4 arg_edx;
  uint uval;
  undefined4 uval_2;
  
  flag = true;
  uval_2 = 0;
  uval = 0;
  val = 0;
  do {
    if (uval < g_net_max_players) {
      if ((*(int *)((int)&g_net_bss_003dd8b4 + val) != 0) &&
         (*(uint *)((int)&g_net_bss_003dd8b0 + val) == *arg_eax)) {
        uval_2 = 1;
        *arg_eax = uval;
      }
      val = val + 0x2c;
      uval = uval + 1;
    }
    else {
      flag = false;
    }
  } while (flag);
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0efcf0 (Original VA: 0xefcf0, Ghidra: FUN_000efcf0)
 * Prototype: undefined8 bflib_system_io_fn_0efcf0(void);
 * Address  : 0xefcf0 (Size: 145 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0efcf0
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0ff040, bflib_system_io_fn_1012c0
 ******************************************************************************/
undefined8 bflib_system_io_fn_0efcf0(void)

{
  int val;
  undefined1 extraout_DL;
  undefined4 arg_edx;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined1 local_18;
  
  local_28 = g_bss_003d97d0;
  local_24 = &g_data_001745e4;
  local_20 = 0;
  local_18 = 0;
  g_bss_003d97d0 = &local_28;
  bflib_system_io_fn_0ff040();
  val = bflib_system_io_fn_1012c0();
  *(undefined4 *)(val + 0x723) = 0;
  *(undefined4 *)(val + 0x727) = 0;
  *(undefined1 *)(val + 0x72b) = extraout_DL;
  *(undefined ***)(val + -4) = &PTR_FUN_00103134_00174668;
  g_bss_003d97d0 = (undefined4 *)local_28;
  return CONCAT44(arg_edx,val + -0xd80);
}

/******************************************************************************
 * Function : LbNetLog (Original VA: 0xefd90, Ghidra: FUN_000efd90)
 * Prototype: void LbNetLog(void);
 * Address  : 0xefd90 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Write diagnostic entry to Bullfrog network log
 * Callers  : 84 -> bflib_system_io_new_players_are_allowed_0ed0ac, bflib_system_io_requested_servicetype_out_range_0ed1b0, bflib_system_io_requested_servicetype_out_range_0ed354, LbNetwork_Init_0ed4e0, LbNetwork_Create_0ed84c, LbNetwork_Join_0eda20, LbNetwork_Stop_0edc70, LbNetwork_EnumerateSessions_0edd8c ...
 * Callees  : 0 -> 
 ******************************************************************************/
void LbNetLog(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0efda0 (Original VA: 0xefda0, Ghidra: FUN_000efda0)
 * Prototype: void bflib_system_io_fn_0efda0(void);
 * Address  : 0xefda0 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0efda0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0efda0(void)

{
  int arg_eax;
  
  *(undefined4 *)(arg_eax + 1) = 0;
  *(undefined4 *)(arg_eax + 5) = 0;
  *(undefined1 *)(arg_eax + 9) = 0;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0efdb4 (Original VA: 0xefdb4, Ghidra: FUN_000efdb4)
 * Prototype: int bflib_system_io_fn_0efdb4(void);
 * Address  : 0xefdb4 (Size: 25 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0efdb4
 * Callers  : 6 -> frontend_draw_text_overlay_02eeb9, frontnet_LbNetwork_Exchange_035758, newgui_fn_058a7e, newgui_backup_input_field_small_05b1bc, newgui_fn_05b25b, packet_check_thing_interaction_valid
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0efdb4(void)

{
  char ch;
  char *arg_eax;
  uint uval;
  
  uval = 0xffffffff;
  do {
    if (uval == 0) break;
    uval = uval - 1;
    ch = *arg_eax;
    arg_eax = arg_eax + 1;
  } while (ch != '\0');
  return ~uval - 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0efde0 (Original VA: 0xefde0, Ghidra: FUN_000efde0)
 * Prototype: void bflib_system_io_fn_0efde0(void);
 * Address  : 0xefde0 (Size: 56 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0efde0
 * Callers  : 2 -> frontend_fn_02f9f5, setup_show_bullfrog_legal_splash
 * Callees  : 2 -> bflib_system_io_fn_0efe94, bflib_system_io_fn_0f0064
 ******************************************************************************/
void bflib_system_io_fn_0efde0(void)

{
  byte arg_bl;
  
  g_display_bss_003d987b = 0;
  if ((g_bss_003de9a4 == 0) && ((arg_bl & 0x8c) == 0)) {
    bflib_system_io_fn_0efe94();
    return;
  }
  bflib_system_io_fn_0f0064();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0efe18 (Original VA: 0xefe18, Ghidra: FUN_000efe18)
 * Prototype: undefined8 bflib_system_io_fn_0efe18(void);
 * Address  : 0xefe18 (Size: 124 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0efe18
 * Callers  : 0 -> 
 * Callees  : 7 -> bflib_system_io_fn_0f27dc, watcom_crt_fn_10a7b0, watcom_crt_fn_10ade0, watcom_crt_fn_10bef0, watcom_crt_fn_10c1f0, watcom_crt_fn_10c770, watcom_crt_fn_10cb20
 ******************************************************************************/
undefined8 bflib_system_io_fn_0efe18(void)

{
  int val;
  int val_2;
  undefined4 uval;
  undefined4 *word_ptr;
  undefined1 *word_ptr_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  uint uval_2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  word_ptr_4 = (undefined4 *)&stack0xffffffe8;
  uStack_1c = 0xefe25;
  val = bflib_system_io_fn_0f27dc();
  uval = 0;
  if (val != 0) {
    uStack_1c = 0xefe32;
    uStack_1c = bflib_system_io_fn_0f27dc();
    uStack_20 = 0xefe38;
    watcom_crt_fn_10a7b0();
    uStack_24 = 0x2040;
    word_ptr = &uStack_28;
    word_ptr_3 = &uStack_28;
    word_ptr_4 = &uStack_28;
    uStack_28 = 0xffffffff;
    val = watcom_crt_fn_10cb20();
    uval = 0;
    if (val != 0) {
      uval_2 = 0;
      if (*(int *)(val + 0xc) != 0) {
        do {
          *(int *)((int)word_ptr + -4) = val;
          *(undefined4 *)((int)word_ptr + -8) = 0xefe5e;
          watcom_crt_fn_10c1f0();
          word_ptr_2 = (undefined1 *)((int)word_ptr + -4);
          if (uval_2 != *(uint *)(val + 0xc)) {
            *(int *)((int)word_ptr + -8) = val;
            *(undefined4 *)((int)word_ptr + -0xc) = 0xefe69;
            watcom_crt_fn_10bef0();
            word_ptr_2 = (undefined1 *)((int)word_ptr + -8);
          }
          do {
            word_ptr_3 = (undefined4 *)word_ptr_2;
            if (g_bss_003db518 != '\0') goto LAB_000efe82;
            word_ptr = (undefined4 *)(word_ptr_2 + -4);
            word_ptr_3 = (undefined4 *)(word_ptr_2 + -4);
            *(int *)(word_ptr_2 + -4) = val;
            *(undefined4 *)(word_ptr_2 + -8) = 0xefe78;
            val_2 = watcom_crt_fn_10ade0();
            word_ptr_2 = word_ptr_2 + -4;
          } while (val_2 != 0);
          uval_2 = uval_2 + 1;
        } while (uval_2 < *(uint *)(val + 0xc));
      }
LAB_000efe82:
      word_ptr_4 = (undefined4 *)((int)word_ptr_3 + -4);
      *(int *)((int)word_ptr_3 + -4) = val;
      *(undefined4 *)((int)word_ptr_3 + -8) = 0xefe88;
      watcom_crt_fn_10c770();
      uval = 1;
    }
  }
  return CONCAT44(*(undefined4 *)((int)word_ptr_4 + 0xc),uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0efe94 (Original VA: 0xefe94, Ghidra: FUN_000efe94)
 * Prototype: undefined4 bflib_system_io_fn_0efe94(void);
 * Address  : 0xefe94 (Size: 464 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0efe94
 * Callers  : 1 -> bflib_system_io_fn_0efde0
 * Callees  : 11 -> bflib_system_io_fn_0e79fc, bflib_system_io_fn_0e8214, LbPaletteSet, bflib_system_io_fn_0f27dc, watcom_crt_fn_10a7b0, watcom_crt_fn_10ade0, watcom_crt_fn_10b730, watcom_crt_fn_10bef0 ...
 ******************************************************************************/
undefined4 bflib_system_io_fn_0efe94(void)

{
  undefined4 arg_eax;
  int val;
  undefined4 uval;
  int val_2;
  int val_3;
  int val_4;
  uint arg_ebx;
  byte *byte_ptr;
  uint *word_ptr;
  uint *word_ptr_2;
  uint loop_i;
  undefined4 local_1c;
  
  byte_ptr = &stack0xffffffe8;
  if ((arg_ebx & 1) == 0) {
    local_1c = 0xefeb7;
    val = bflib_system_io_fn_0f27dc();
    byte_ptr = &stack0xffffffe8;
    if (val != 0) {
      local_1c = 0xefec0;
      local_1c = bflib_system_io_fn_0f27dc();
      watcom_crt_fn_10a7b0();
      byte_ptr = (byte *)&local_1c;
    }
  }
  if ((*byte_ptr & 1) == 0) {
    uval = 0xfe000;
  }
  else {
    uval = 0;
  }
  *(undefined4 *)(byte_ptr + -4) = arg_eax;
  *(undefined4 *)(byte_ptr + -8) = uval;
  byte_ptr[-0xffffffff0000000c] = 0xff;
  byte_ptr[-0xffffffff0000000b] = 0xff;
  byte_ptr[-0xffffffff0000000a] = 0xff;
  byte_ptr[-0xffffffff00000009] = 0xff;
  byte_ptr[-0xffffffff00000010] = 0xe3;
  byte_ptr[-0xffffffff0000000f] = 0xfe;
  byte_ptr[-0xffffffff0000000e] = 0xe;
  byte_ptr[-0xffffffff0000000d] = 0;
  val = watcom_crt_fn_10cb20();
  uval = 0;
  if (val != 0) {
    if ((byte_ptr[-0xb] & 1) == 0) {
      val_2 = *(int *)(val + 4);
      val_4 = *(int *)(val + 8);
      *(int *)(byte_ptr + -0x10) = val;
      *(uint *)(byte_ptr + -0x14) = (uint)(g_screen_pitch - val_2) >> 1;
      *(uint *)(byte_ptr + -0x18) = (uint)(g_display_bss_003d9838 - val_4) >> 1;
      *(int *)(byte_ptr + -0x1c) = g_screen_pitch;
      *(int *)(byte_ptr + -0x20) = g_display_bss_003d9838;
      *(undefined4 *)(byte_ptr + -0x24) = g_display_bss_003d9818;
    }
    else {
      val_2 = *(int *)(val + 4);
      *(int *)(byte_ptr + -0x10) = val;
      val_4 = *(int *)(val + 8);
      *(uint *)(byte_ptr + -0x14) = 0x140U - val_2 >> 1;
      *(uint *)(byte_ptr + -0x18) = 200U - val_4 >> 1;
      byte_ptr[-0xffffffff0000001c] = 0x40;
      byte_ptr[-0xffffffff0000001b] = 1;
      byte_ptr[-0xffffffff0000001a] = 0;
      byte_ptr[-0xffffffff00000019] = 0;
      byte_ptr[-0xffffffff00000020] = 200;
      byte_ptr[-0xffffffff0000001f] = 0;
      byte_ptr[-0xffffffff0000001e] = 0;
      byte_ptr[-0xffffffff0000001d] = 0;
      byte_ptr[-0xffffffff00000024] = 0;
      byte_ptr[-0xffffffff00000023] = 0;
      byte_ptr[-0xffffffff00000022] = 10;
      byte_ptr[-0xffffffff00000021] = 0;
    }
    word_ptr_2 = (uint *)(byte_ptr + -0x28);
    byte_ptr[-0xffffffff00000028] = 0;
    byte_ptr[-0xffffffff00000027] = 0;
    byte_ptr[-0xffffffff00000026] = 0;
    byte_ptr[-0xffffffff00000025] = 0;
    byte_ptr[-0xffffffff0000002c] = 0x5c;
    byte_ptr[-0xffffffff0000002b] = 0xff;
    byte_ptr[-0xffffffff0000002a] = 0xe;
    byte_ptr[-0xffffffff00000029] = 0;
    watcom_crt_fn_10b730();
    for (loop_i = 0; ((*(byte *)((int)word_ptr_2 + 1) & 4) != 0 || (loop_i < *(uint *)(val + 0xc)));
        loop_i = loop_i + 1) {
      if ((*(byte *)((int)word_ptr_2 + 1) & 1) == 0) {
        val_2 = *(int *)(val + 0x68);
        *(char *)((int)word_ptr_2 + 4) = '\0';
        if (val_2 != 0) {
          *(char *)((int)word_ptr_2 + 4) = '\x01';
          val_2 = 0;
          val_4 = val;
          do {
            byte_ptr = (byte *)(val_4 + 0x6c);
            val_3 = val_2 + 1;
            val_4 = val_4 + 1;
            (&g_bss_003de650)[val_2] = (char)((int)(uint)*byte_ptr >> 2);
            val_2 = val_3;
          } while (val_3 < 0x300);
        }
        *(int *)((int)word_ptr_2 + -4) = val;
        *(char *)((int)word_ptr_2 + -0xffffffff00000008) = -100;
        *(char *)((int)word_ptr_2 + -0xffffffff00000007) = -1;
        *(char *)((int)word_ptr_2 + -0xffffffff00000006) = '\x0e';
        *(char *)((int)word_ptr_2 + -0xffffffff00000005) = '\0';
        watcom_crt_fn_10c1f0();
        if (*(char *)word_ptr_2 != '\0') {
          *(char *)((int)word_ptr_2 + -0xffffffff00000008) = -0x58;
          *(char *)((int)word_ptr_2 + -0xffffffff00000007) = -1;
          *(char *)((int)word_ptr_2 + -0xffffffff00000006) = '\x0e';
          *(char *)((int)word_ptr_2 + -0xffffffff00000005) = '\0';
          bflib_system_io_fn_0e8214();
          *(undefined1 **)((int)word_ptr_2 + -8) = &g_bss_003de650;
          *(char *)((int)word_ptr_2 + -0xffffffff0000000c) = -0x4e;
          *(char *)((int)word_ptr_2 + -0xffffffff0000000b) = -1;
          *(char *)((int)word_ptr_2 + -0xffffffff0000000a) = '\x0e';
          *(char *)((int)word_ptr_2 + -0xffffffff00000009) = '\0';
          LbPaletteSet();
        }
        *(char *)((int)word_ptr_2 + -0xffffffff00000008) = -0x46;
        *(char *)((int)word_ptr_2 + -0xffffffff00000007) = -1;
        *(char *)((int)word_ptr_2 + -0xffffffff00000006) = '\x0e';
        *(char *)((int)word_ptr_2 + -0xffffffff00000005) = '\0';
        bflib_system_io_fn_0e79fc();
      }
      else {
        if (*(int *)(val + 0x68) != 0) {
          val_2 = 0;
          val_4 = val;
          do {
            byte_ptr = (byte *)(val_4 + 0x6c);
            val_3 = val_2 + 1;
            val_4 = val_4 + 1;
            (&g_bss_003de650)[val_2] = (char)((int)(uint)*byte_ptr >> 2);
            val_2 = val_3;
          } while (val_3 < 0x300);
          *(undefined1 **)((int)word_ptr_2 + -4) = &g_bss_003de650;
          *(char *)((int)word_ptr_2 + -0xffffffff00000008) = 'C';
          *(char *)((int)word_ptr_2 + -0xffffffff00000007) = '\0';
          *(char *)((int)word_ptr_2 + -0xffffffff00000006) = '\x0f';
          *(char *)((int)word_ptr_2 + -0xffffffff00000005) = '\0';
          LbPaletteSet();
        }
        *(int *)((int)word_ptr_2 + -4) = val;
        *(char *)((int)word_ptr_2 + -0xffffffff00000008) = 'L';
        *(char *)((int)word_ptr_2 + -0xffffffff00000007) = '\0';
        *(char *)((int)word_ptr_2 + -0xffffffff00000006) = '\x0f';
        *(char *)((int)word_ptr_2 + -0xffffffff00000005) = '\0';
        watcom_crt_fn_10c1f0();
      }
      *(int *)((int)word_ptr_2 + -8) = val;
      *(char *)((int)word_ptr_2 + -0xffffffff0000000c) = -0x40;
      *(char *)((int)word_ptr_2 + -0xffffffff0000000b) = -1;
      *(char *)((int)word_ptr_2 + -0xffffffff0000000a) = '\x0e';
      *(char *)((int)word_ptr_2 + -0xffffffff00000009) = '\0';
      watcom_crt_fn_10bef0();
      word_ptr = (uint *)((int)word_ptr_2 + -8);
      do {
        if (((*word_ptr & 2) == 0) &&
           ((((g_bss_003db4fd != '\0' || (g_bss_003db518 != '\0')) || (g_bss_003db535 != '\0')) ||
            (g_display_bss_003d987b != '\0')))) {
          word_ptr[-1] = val;
          word_ptr[-2] = 0xeffef;
          watcom_crt_fn_10c770();
          return 2;
        }
        word_ptr_2 = word_ptr + -1;
        word_ptr[-1] = val;
        word_ptr[-2] = 0xefffc;
        val_2 = watcom_crt_fn_10ade0();
        word_ptr = word_ptr + -1;
      } while (val_2 != 0);
    }
    *(int *)((int)word_ptr_2 + -4) = val;
    *(char *)((int)word_ptr_2 + -0xffffffff00000008) = 'W';
    *(char *)((int)word_ptr_2 + -0xffffffff00000007) = '\0';
    *(char *)((int)word_ptr_2 + -0xffffffff00000006) = '\x0f';
    *(char *)((int)word_ptr_2 + -0xffffffff00000005) = '\0';
    watcom_crt_fn_10c770();
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0064 (Original VA: 0xf0064, Ghidra: FUN_000f0064)
 * Prototype: undefined4 bflib_system_io_fn_0f0064(void);
 * Address  : 0xf0064 (Size: 357 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0064
 * Callers  : 1 -> bflib_system_io_fn_0efde0
 * Callees  : 13 -> bflib_system_io_fn_0e8214, LbPaletteSet, LbFileLoadAt, bflib_system_io_fn_0e94b0, bflib_system_io_fn_0f01f8, bflib_system_io_fn_0f27dc, watcom_crt_fn_10a7b0, watcom_crt_fn_10ade0 ...
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f0064(void)

{
  undefined4 arg_eax;
  int val;
  undefined4 uval;
  int val_2;
  int val_3;
  int val_4;
  uint arg_ebx;
  byte *byte_ptr;
  byte *byte_ptr_2;
  uint loop_i;
  undefined8 uval_2;
  undefined4 local_18;
  
  byte_ptr_2 = &stack0xffffffec;
  if ((arg_ebx & 1) == 0) {
    local_18 = 0xf0087;
    val = bflib_system_io_fn_0f27dc();
    byte_ptr_2 = &stack0xffffffec;
    if (val != 0) {
      local_18 = 0xf0090;
      local_18 = bflib_system_io_fn_0f27dc();
      watcom_crt_fn_10a7b0();
      byte_ptr_2 = (byte *)&local_18;
    }
  }
  if ((*byte_ptr_2 & 1) == 0) {
    uval = 0xfe000;
  }
  else {
    uval = 0;
  }
  *(undefined4 *)(byte_ptr_2 + -4) = arg_eax;
  *(undefined4 *)(byte_ptr_2 + -8) = uval;
  byte_ptr_2[-0xffffffff0000000c] = 0xff;
  byte_ptr_2[-0xffffffff0000000b] = 0xff;
  byte_ptr_2[-0xffffffff0000000a] = 0xff;
  byte_ptr_2[-0xffffffff00000009] = 0xff;
  byte_ptr_2[-0xffffffff00000010] = 0xb3;
  byte_ptr_2[-0xffffffff0000000f] = 0;
  byte_ptr_2[-0xffffffff0000000e] = 0xf;
  byte_ptr_2[-0xffffffff0000000d] = 0;
  val = watcom_crt_fn_10cb20();
  uval = 0;
  if (val != 0) {
    byte_ptr_2[-0xffffffff00000010] = 0xcb;
    byte_ptr_2[-0xffffffff0000000f] = 0;
    byte_ptr_2[-0xffffffff0000000e] = 0xf;
    byte_ptr_2[-0xffffffff0000000d] = 0;
    uval_2 = LbFileLoadAt();
    val_2 = (int)((ulonglong)uval_2 >> 0x20);
    if ((int)uval_2 == 0) {
      *(int *)(byte_ptr_2 + -0x10) = val_2;
      byte_ptr_2[-0xffffffff00000014] = 0xd7;
      byte_ptr_2[-0xffffffff00000013] = 0;
      byte_ptr_2[-0xffffffff00000012] = 0xf;
      byte_ptr_2[-0xffffffff00000011] = 0;
      watcom_crt_fn_10c770();
      uval = 0;
    }
    else {
      *(int *)(byte_ptr_2 + -0x10) = val_2;
      byte_ptr_2[-0xffffffff00000014] = 0;
      byte_ptr_2[-0xffffffff00000013] = 0;
      byte_ptr_2[-0xffffffff00000012] = 0;
      byte_ptr_2[-0xffffffff00000011] = 0;
      byte_ptr_2[-0xffffffff00000018] = 0;
      byte_ptr_2[-0xffffffff00000017] = 0;
      byte_ptr_2[-0xffffffff00000016] = 0;
      byte_ptr_2[-0xffffffff00000015] = 0;
      *(undefined4 *)(byte_ptr_2 + -0x1c) = *(undefined4 *)(val_2 + 4);
      *(undefined4 *)(byte_ptr_2 + -0x20) = *(undefined4 *)(val_2 + 8);
      *(int *)(byte_ptr_2 + -0x24) = (int)uval_2;
      byte_ptr = byte_ptr_2 + -0x28;
      byte_ptr_2[-0xffffffff00000028] = 0;
      byte_ptr_2[-0xffffffff00000027] = 0;
      byte_ptr_2[-0xffffffff00000026] = 0;
      byte_ptr_2[-0xffffffff00000025] = 0;
      byte_ptr_2[-0xffffffff0000002c] = 0xf5;
      byte_ptr_2[-0xffffffff0000002b] = 0;
      byte_ptr_2[-0xffffffff0000002a] = 0xf;
      byte_ptr_2[-0xffffffff00000029] = 0;
      watcom_crt_fn_10b730();
      for (loop_i = 0; ((byte_ptr[1] & 4) != 0 || (loop_i < *(uint *)(val + 0xc))); loop_i = loop_i + 1)
      {
        if (*(int *)(val + 0x68) != 0) {
          val_2 = 0;
          val_4 = val;
          do {
            byte_ptr_2 = (byte *)(val_4 + 0x6c);
            val_3 = val_2 + 1;
            val_4 = val_4 + 1;
            (&g_bss_003de650)[val_2] = (char)((int)(uint)*byte_ptr_2 >> 2);
            val_2 = val_3;
          } while (val_3 < 0x300);
        }
        *(int *)(byte_ptr + -4) = val;
        *(undefined4 *)(byte_ptr + -8) = 0xf0139;
        watcom_crt_fn_10c1f0();
        *(undefined4 *)(byte_ptr + -8) = 0xf013e;
        bflib_system_io_fn_0e8214();
        if (*(int *)(val + 0x68) != 0) {
          *(undefined1 **)(byte_ptr + -8) = &g_bss_003de650;
          *(undefined4 *)(byte_ptr + -0xc) = 0xf014e;
          LbPaletteSet();
        }
        *(undefined4 *)(byte_ptr + -8) = 0xf0161;
        bflib_system_io_fn_0f01f8();
        *(int *)(byte_ptr + -8) = val;
        *(undefined4 *)(byte_ptr + -0xc) = 0xf0167;
        watcom_crt_fn_10bef0();
        byte_ptr_2 = byte_ptr + -8;
        do {
          if (((*byte_ptr_2 & 2) == 0) &&
             ((((g_bss_003db4fd != '\0' || (g_bss_003db518 != '\0')) || (g_bss_003db535 != '\0')) ||
              (g_display_bss_003d987b != '\0')))) {
            *(int *)(byte_ptr_2 + -4) = val;
            byte_ptr_2[-0xffffffff00000008] = 0x9b;
            byte_ptr_2[-0xffffffff00000007] = 1;
            byte_ptr_2[-0xffffffff00000006] = 0xf;
            byte_ptr_2[-0xffffffff00000005] = 0;
            watcom_crt_fn_10c770();
            byte_ptr_2[-0xffffffff00000008] = 0xa2;
            byte_ptr_2[-0xffffffff00000007] = 1;
            byte_ptr_2[-0xffffffff00000006] = 0xf;
            byte_ptr_2[-0xffffffff00000005] = 0;
            bflib_system_io_fn_0e94b0();
            return 2;
          }
          byte_ptr = byte_ptr_2 + -4;
          *(int *)(byte_ptr_2 + -4) = val;
          byte_ptr_2[-0xffffffff00000008] = 0xfd;
          byte_ptr_2[-0xffffffff00000007] = 0;
          byte_ptr_2[-0xffffffff00000006] = 0xf;
          byte_ptr_2[-0xffffffff00000005] = 0;
          val_2 = watcom_crt_fn_10ade0();
          byte_ptr_2 = byte_ptr_2 + -4;
        } while (val_2 != 0);
      }
      *(int *)(byte_ptr + -4) = val;
      *(undefined4 *)(byte_ptr + -8) = 0xf01b5;
      watcom_crt_fn_10c770();
      *(undefined4 *)(byte_ptr + -8) = 0xf01bc;
      bflib_system_io_fn_0e94b0();
      uval = 1;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f01cc (Original VA: 0xf01cc, Ghidra: FUN_000f01cc)
 * Prototype: undefined4 bflib_system_io_fn_0f01cc(int param_1);
 * Address  : 0xf01cc (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f01cc
 * Callers  : 7 -> watcom_crt_fn_10a990, watcom_crt_fn_10b320, watcom_crt_fn_10b730, watcom_crt_fn_10b950, watcom_crt_fn_10cb20, watcom_crt_fn_10d3c0, watcom_crt_fn_10e0a0
 * Callees  : 1 -> LbFileLoadAt
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f01cc(int param_1)

{
  undefined4 uval;
  
  if ((param_1 != 0) && (param_1 != -1)) {
    uval = (*(code *)PTR_FUN_000e9484_00195598)();
    return uval;
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f01e8 (Original VA: 0xf01e8, Ghidra: FUN_000f01e8)
 * Prototype: void bflib_system_io_fn_0f01e8(void);
 * Address  : 0xf01e8 (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f01e8
 * Callers  : 7 -> watcom_crt_fn_10a8e0, watcom_crt_fn_10a990, watcom_crt_fn_10b730, watcom_crt_fn_10b950, watcom_crt_fn_10c770, watcom_crt_fn_10cb20, watcom_crt_fn_10d3c0
 * Callees  : 1 -> bflib_system_io_fn_0e94b0
 ******************************************************************************/
void bflib_system_io_fn_0f01e8(void)

{
  (*(code *)PTR_FUN_000e94b0_0019559c)();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f01f8 (Original VA: 0xf01f8, Ghidra: FUN_000f01f8)
 * Prototype: void bflib_system_io_fn_0f01f8(void);
 * Address  : 0xf01f8 (Size: 897 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f01f8
 * Callers  : 1 -> bflib_system_io_fn_0f0064
 * Callees  : 1 -> bflib_system_io_fn_0e79fc
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f055d) */

void bflib_system_io_fn_0f01f8(void)

{
  int val;
  int val_2;
  undefined4 *arg_eax;
  undefined4 uval;
  undefined4 uval_2;
  undefined1 uval_3;
  undefined1 uval_5;
  uint arg_ecx;
  uint uval_4;
  uint loop_i;
  undefined1 uval_6;
  uint arg_edx;
  uint arg_ebx;
  int *int_ptr;
  int val_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  int iStack_40;
  int iStack_3c;
  undefined4 *puStack_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_10;
  
  int_ptr = &local_34;
  if ((g_active_screen_mode == 1) && (g_bss_003de9a4 == (code *)0x0)) {
    local_1c = 0x140;
    word_ptr = (undefined4 *)0xc8;
    val_3 = 0xa0000;
  }
  else {
    local_1c = g_screen_pitch;
    word_ptr = g_display_bss_003d9838;
    val_3 = g_display_bss_003d9818;
  }
  if (((arg_ecx & 4) == 0) && ((arg_ecx & 8) == 0)) {
    val = -arg_ebx;
  }
  else {
    val = arg_ebx * -2;
  }
  if ((arg_ecx & 0x80) == 0) {
    val_2 = -arg_edx;
  }
  else {
    val_2 = arg_edx * -2;
  }
  word_ptr = (undefined4 *)
            (val_3 + ((uint)((int)word_ptr + val) >> 1) * local_1c +
            ((uint)(local_1c + val_2) >> 1));
  val_3 = local_1c * 2;
  local_10 = arg_eax;
  if ((arg_ecx & 4) == 0) {
    if ((arg_ecx & 0x80) == 0) {
      if ((arg_ecx & 8) == 0) {
        uval_4 = 0;
        if (arg_ebx != 0) {
          do {
            puStack_38 = word_ptr;
            word_ptr = local_10;
            word_ptr_2 = puStack_38;
            for (loop_i = arg_edx >> 2; loop_i != 0; loop_i = loop_i - 1) {
              *word_ptr_2 = *word_ptr;
              word_ptr = word_ptr + 1;
              word_ptr_2 = word_ptr_2 + 1;
            }
            for (loop_i = arg_edx & 3; loop_i != 0; loop_i = loop_i - 1) {
              *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
              word_ptr = (undefined4 *)((int)word_ptr + 1);
              word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 1);
            }
            uval_4 = uval_4 + 1;
            local_10 = (undefined4 *)((int)local_10 + arg_edx);
            word_ptr = (undefined4 *)((int)puStack_38 + local_1c);
          } while (uval_4 < arg_ebx);
        }
      }
      else {
        uval_4 = 0;
        if (arg_ebx != 0) {
          do {
            puStack_38 = word_ptr;
            word_ptr = local_10;
            word_ptr_2 = puStack_38;
            for (loop_i = arg_edx >> 2; loop_i != 0; loop_i = loop_i - 1) {
              *word_ptr_2 = *word_ptr;
              word_ptr = word_ptr + 1;
              word_ptr_2 = word_ptr_2 + 1;
            }
            for (loop_i = arg_edx & 3; loop_i != 0; loop_i = loop_i - 1) {
              *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
              word_ptr = (undefined4 *)((int)word_ptr + 1);
              word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 1);
            }
            uval_4 = uval_4 + 1;
            local_10 = (undefined4 *)((int)local_10 + arg_edx);
            word_ptr = (undefined4 *)((int)puStack_38 + val_3);
          } while (uval_4 < arg_ebx);
        }
      }
    }
    else if ((arg_ecx & 8) == 0) {
      local_28 = 0;
      if (arg_ebx != 0) {
        do {
          puStack_38 = word_ptr;
          uval_4 = arg_edx >> 2;
          word_ptr = local_10;
          word_ptr_2 = puStack_38;
          do {
            uval_2 = *word_ptr;
            uval_6 = (undefined1)((uint)uval_2 >> 8);
            uval_5 = (undefined1)((uint)uval_2 >> 0x18);
            uval_3 = (undefined1)((uint)uval_2 >> 0x10);
            *word_ptr_2 = CONCAT22(CONCAT11(uval_6,uval_6),CONCAT11((char)uval_2,(char)uval_2));
            word_ptr_2[1] = CONCAT22(CONCAT11(uval_5,uval_5),CONCAT11(uval_3,uval_3));
            word_ptr = word_ptr + 1;
            word_ptr_2 = word_ptr_2 + 2;
            uval_4 = uval_4 - 1;
          } while (uval_4 != 0);
          local_28 = local_28 + 1;
          local_10 = (undefined4 *)((int)local_10 + arg_edx);
          word_ptr = (undefined4 *)((int)puStack_38 + local_1c);
        } while (local_28 < arg_ebx);
      }
    }
    else {
      local_20 = 0;
      if (arg_ebx != 0) {
        do {
          puStack_38 = word_ptr;
          uval_4 = arg_edx >> 2;
          word_ptr = local_10;
          word_ptr_2 = puStack_38;
          do {
            uval_2 = *word_ptr;
            uval_6 = (undefined1)((uint)uval_2 >> 8);
            uval_5 = (undefined1)((uint)uval_2 >> 0x18);
            uval_3 = (undefined1)((uint)uval_2 >> 0x10);
            *word_ptr_2 = CONCAT22(CONCAT11(uval_6,uval_6),CONCAT11((char)uval_2,(char)uval_2));
            word_ptr_2[1] = CONCAT22(CONCAT11(uval_5,uval_5),CONCAT11(uval_3,uval_3));
            word_ptr = word_ptr + 1;
            word_ptr_2 = word_ptr_2 + 2;
            uval_4 = uval_4 - 1;
          } while (uval_4 != 0);
          local_20 = local_20 + 1;
          local_10 = (undefined4 *)((int)local_10 + arg_edx);
          word_ptr = (undefined4 *)((int)puStack_38 + val_3);
          local_2c = val_3;
        } while (local_20 < arg_ebx);
      }
    }
  }
  else if ((arg_ecx & 0x80) == 0) {
    uval_4 = 0;
    if (arg_ebx != 0) {
      do {
        loop_i = arg_edx >> 2;
        word_ptr_2 = local_10;
        word_ptr_3 = word_ptr;
        do {
          uval_2 = *word_ptr_2;
          *word_ptr_3 = uval_2;
          *(undefined4 *)((int)word_ptr_3 + local_1c) = uval_2;
          word_ptr_2 = word_ptr_2 + 1;
          word_ptr_3 = word_ptr_3 + 1;
          loop_i = loop_i - 1;
        } while (loop_i != 0);
        uval_4 = uval_4 + 1;
        word_ptr = (undefined4 *)((int)word_ptr + val_3);
        local_10 = (undefined4 *)((int)local_10 + arg_edx);
        local_30 = val_3;
      } while (uval_4 < arg_ebx);
    }
  }
  else {
    local_24 = 0;
    if (arg_ebx != 0) {
      do {
        uval_4 = arg_edx >> 2;
        word_ptr_2 = local_10;
        word_ptr_3 = word_ptr;
        do {
          uval_2 = *word_ptr_2;
          uval_3 = (undefined1)((uint)uval_2 >> 8);
          uval = CONCAT22(CONCAT11(uval_3,uval_3),CONCAT11((char)uval_2,(char)uval_2));
          *word_ptr_3 = uval;
          *(undefined4 *)((int)word_ptr_3 + local_1c) = uval;
          uval_5 = (undefined1)((uint)uval_2 >> 0x18);
          uval_3 = (undefined1)((uint)uval_2 >> 0x10);
          uval_2 = CONCAT22(CONCAT11(uval_5,uval_5),CONCAT11(uval_3,uval_3));
          word_ptr_3[1] = uval_2;
          *(undefined4 *)((int)word_ptr_3 + local_1c + 4) = uval_2;
          word_ptr_2 = word_ptr_2 + 1;
          word_ptr_3 = word_ptr_3 + 2;
          uval_4 = uval_4 - 1;
        } while (uval_4 != 0);
        local_24 = local_24 + 1;
        local_10 = (undefined4 *)((int)local_10 + arg_edx);
        word_ptr = (undefined4 *)((int)word_ptr + val_3);
        local_34 = val_3;
      } while (local_24 < arg_ebx);
    }
  }
  if ((g_active_screen_mode != 1) || (g_bss_003de9a4 != (code *)0x0)) {
    if (g_bss_003de9a4 != (code *)0x0) {
      puStack_38 = g_display_bss_003d9838;
      iStack_3c = g_screen_pitch;
      int_ptr = &iStack_40;
      iStack_40 = g_display_bss_003d9818;
      (*g_bss_003de9a4)();
    }
    *(undefined4 *)((int)int_ptr + -4) = 0xf0559;
    bflib_system_io_fn_0e79fc();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0580 (Original VA: 0xf0580, Ghidra: FUN_000f0580)
 * Prototype: undefined4 bflib_system_io_fn_0f0580(void);
 * Address  : 0xf0580 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0580
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f0580(void)

{
  uint *arg_eax;
  uint *arg_edx;
  uint arg_ebx;
  
  for (; arg_eax < arg_edx; arg_eax = (uint *)((int)arg_eax + 6)) {
    if (arg_ebx <= *arg_eax) {
      *arg_eax = *arg_eax - arg_ebx;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f05d8 (Original VA: 0xf05d8, Ghidra: FUN_000f05d8)
 * Prototype: undefined4 bflib_system_io_fn_0f05d8(void);
 * Address  : 0xf05d8 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f05d8
 * Callers  : 3 -> frontend_process_map_subtile_030cd9, setup_load_pointer_sprites, bflib_system_io_fn_0f05f0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f05d8(void)

{
  uint *arg_eax;
  uint *arg_edx;
  uint arg_ebx;
  
  for (; arg_eax < arg_edx; arg_eax = (uint *)((int)arg_eax + 6)) {
    if (*arg_eax < arg_ebx) {
      *arg_eax = *arg_eax + arg_ebx;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f05f0 (Original VA: 0xf05f0, Ghidra: FUN_000f05f0)
 * Prototype: undefined8 bflib_system_io_fn_0f05f0(void);
 * Address  : 0xf05f0 (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f05f0
 * Callers  : 8 -> frontend_ldata_front_raw_02ffe4, frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_netflag_dat_031a51, fronttor_ldata_fronttor_tab_036654, instance_data_swpe_dat_04c0ac, setup_load_core_game_data, setup_init_game_screen_and_subsystems, setup_reload_gui_and_mode_sprites
 * Callees  : 1 -> bflib_system_io_fn_0f05d8
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f05f0(void)

{
  int val;
  int *arg_eax;
  int extraout_ECX;
  undefined4 arg_edx;
  
  val = *arg_eax;
  while (val != 0) {
    bflib_system_io_fn_0f05d8();
    val = *(int *)(extraout_ECX + 0xc);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0624 (Original VA: 0xf0624, Ghidra: FUN_000f0624)
 * Prototype: undefined4 bflib_system_io_fn_0f0624(int param_1);
 * Address  : 0xf0624 (Size: 105 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0624
 * Callers  : 2 -> engine3_draw_queued_billboard_sprite, engine3_draw_string_billboard
 * Callees  : 2 -> watcom_crt_fn_1384c0, watcom_crt_fn_13a3f8
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f0624(int param_1)

{
  undefined4 uval;
  int arg_ecx;
  
  if ((0 < arg_ecx) && (0 < param_1)) {
    if ((g_lb_display_draw_flags._1_1_ & 8) != 0) {
      g_lb_sprite_remap_ptr = g_display_bss_003d9820 + (uint)(g_display_bss_003d9884 & 0x3f) * 0x100;
    }
    watcom_crt_fn_13a3f8();
    uval = watcom_crt_fn_1384c0();
    return uval;
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f06f4 (Original VA: 0xf06f4, Ghidra: FUN_000f06f4)
 * Prototype: undefined * bflib_system_io_fn_0f06f4(void);
 * Address  : 0xf06f4 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f06f4
 * Callers  : 2 -> bflib_system_io_fn_0f06fa, bflib_system_io_fn_0f071e
 * Callees  : 0 -> 
 ******************************************************************************/
undefined * bflib_system_io_fn_0f06f4(void)

{
  return &g_data_001955a0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f06fa (Original VA: 0xf06fa, Ghidra: FUN_000f06fa)
 * Prototype: undefined8 bflib_system_io_fn_0f06fa(void);
 * Address  : 0xf06fa (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f06fa
 * Callers  : 2 -> frontend_ldata_front_raw_02ffe4, command_script_unexpected_07909c
 * Callees  : 1 -> bflib_system_io_fn_0f06f4
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f06fa(void)

{
  uint *word_ptr;
  undefined4 arg_edx;
  uint uval;
  
  word_ptr = (uint *)bflib_system_io_fn_0f06f4();
  uval = 0;
  if (word_ptr != (uint *)0x0) {
    uval = *word_ptr * 0x41c64e6d + 0x3039;
    *word_ptr = uval;
    uval = uval >> 0x10 & 0x7fff;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f071e (Original VA: 0xf071e, Ghidra: FUN_000f071e)
 * Prototype: void bflib_system_io_fn_0f071e(void);
 * Address  : 0xf071e (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f071e
 * Callers  : 2 -> frontend_ldata_front_raw_02ffe4, panmap_fn_0633c4
 * Callees  : 1 -> bflib_system_io_fn_0f06f4
 ******************************************************************************/
void bflib_system_io_fn_0f071e(void)

{
  undefined8 uval;
  
  uval = bflib_system_io_fn_0f06f4();
  if ((undefined4 *)uval != (undefined4 *)0x0) {
    *(undefined4 *)uval = (int)((ulonglong)uval >> 0x20);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0730 (Original VA: 0xf0730, Ghidra: FUN_000f0730)
 * Prototype: void bflib_system_io_fn_0f0730(void);
 * Address  : 0xf0730 (Size: 93 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0730
 * Callers  : 4 -> frontmap_ldata_dkflag00_dat_031213, fronttor_ldata_fronttor_tab_03699b, setup_allocate_graphics_heap, watcom_crt_fn_10f6c8
 * Callees  : 3 -> bflib_sound_AIL_end_sample_0faa37, watcom_crt_fn_10e3f4, watcom_crt_fn_10e5f5
 ******************************************************************************/
void bflib_system_io_fn_0f0730(void)

{
  undefined4 *loop_i;
  
  if (((g_bss_003df514 != '\0') && (g_data_00195d18 != '\0')) && (g_data_00195d1a != '\0')) {
    watcom_crt_fn_10e3f4();
    for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (undefined4 *)((int)loop_i + 0x1d)
        ) {
      bflib_sound_AIL_end_sample_0faa37(*loop_i);
      *(undefined2 *)((int)loop_i + 0x12) = 0;
      *(undefined4 *)((int)loop_i + 0xe) = 0;
      *(undefined1 *)(loop_i + 5) = 0;
      *(undefined1 *)((int)loop_i + 0x15) = 0;
    }
    watcom_crt_fn_10e5f5();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0790 (Original VA: 0xf0790, Ghidra: FUN_000f0790)
 * Prototype: void bflib_system_io_fn_0f0790(void);
 * Address  : 0xf0790 (Size: 214 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0790
 * Callers  : 3 -> frontmap_fn_031854, fronttor_fn_036e52, sound3d_fn_06fca5
 * Callees  : 2 -> bflib_sound_AIL_set_sample_volume_0faaf9, bflib_sound_AIL_sample_status_0fac8f
 ******************************************************************************/
void bflib_system_io_fn_0f0790(void)

{
  int arg_eax;
  int val;
  int arg_ecx;
  short arg_dx;
  short arg_bx;
  int *loop_i;
  
  if (((g_bss_003df514 != '\0') && (g_data_00195d18 != '\0')) && (g_data_00195d1a != '\0')) {
    if ((arg_dx == 0) && (arg_eax == 0)) {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (int *)((int)loop_i + 0x1d)) {
        if (((*loop_i == arg_ecx) && (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4)) &&
           ((val = (int)arg_bx, -1 < val && ((val < 0x80 && (val != loop_i[1])))))) {
LAB_000f0851:
          bflib_sound_AIL_set_sample_volume_0faaf9(*loop_i,(int)arg_bx);
          loop_i[1] = (int)arg_bx;
          return;
        }
      }
    }
    else {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (int *)((int)loop_i + 0x1d)) {
        if (((arg_eax == *(int *)((int)loop_i + 0xe)) && (*(short *)((int)loop_i + 0x12) == arg_dx))
           && ((val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4 &&
               (((val = (int)arg_bx, -1 < val && (val < 0x80)) && (val != loop_i[1]))))))
        goto LAB_000f0851;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0870 (Original VA: 0xf0870, Ghidra: FUN_000f0870)
 * Prototype: undefined4 bflib_system_io_fn_0f0870(byte param_1);
 * Address  : 0xf0870 (Size: 192 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0870
 * Callers  : 17 -> frontmap_number_players_0322e9, newgui_state_type_gui_state_053a18, newgui_update_player_view_state_054eeb, newgui_update_player_dungeon_05542b, newgui_fn_056ee6, newgui_process_thing_entity_0571cf, newgui_process_thing_entity_057348, newgui_update_creature_and_thing_0574b5 ...
 * Callees  : 2 -> bflib_system_io_fn_0f6a84, watcom_crt_fn_10e6bc
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f0870(byte param_1)

{
  uint uval;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  int local_18;
  
  uval = (uint)param_1;
  if (((byte)g_lb_display_draw_flags & 0x10) == 0) {
    watcom_crt_fn_10e6bc(uval);
  }
  else {
    if ((arg_ebx < 1) || (arg_ecx < 1)) {
      return 0xffffffff;
    }
    bflib_system_io_fn_0f6a84(uval);
    bflib_system_io_fn_0f6a84(arg_ecx);
    if (2 < (uint)(local_18 + arg_edx)) {
      bflib_system_io_fn_0f6a84(local_18,uval - 2);
      bflib_system_io_fn_0f6a84(local_18 + arg_edx);
    }
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0964 (Original VA: 0xf0964, Ghidra: FUN_000f0964)
 * Prototype: undefined8 bflib_system_io_fn_0f0964(void);
 * Address  : 0xf0964 (Size: 109 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0964
 * Callers  : 5 -> frontnet_isdn_supported_serial_03442b, frontnet_fn_0345fd, person_ERROR_063412, command_script_unexpected_07909c, bflib_video_bf_debug_audio_0f1b38
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f0964(void)

{
  byte flag;
  byte flag_2;
  byte *arg_eax;
  undefined4 arg_edx;
  int val;
  
  while (((&g_data_0017469c)[(byte)(*arg_eax + 1)] & 2) != 0) {
    arg_eax = arg_eax + 1;
  }
  flag = *arg_eax;
  if ((flag == 0x2b) || (flag == 0x2d)) {
    arg_eax = arg_eax + 1;
  }
  val = 0;
  while (((&g_data_0017469c)[(byte)(*arg_eax + 1)] & 0x20) != 0) {
    flag_2 = *arg_eax;
    arg_eax = arg_eax + 1;
    val = val * 10 + (uint)flag_2 + -0x30;
  }
  if (flag == 0x2d) {
    val = -val;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f09d1 (Original VA: 0xf09d1, Ghidra: FUN_000f09d1)
 * Prototype: void bflib_system_io_fn_0f09d1(void);
 * Address  : 0xf09d1 (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f09d1
 * Callers  : 2 -> frontnet_fn_034a8a, bflib_system_io_fn_0f8e19
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f09d1(void)

{
  char ch;
  char *arg_eax;
  char arg_dl;
  
  do {
    if (arg_dl == *arg_eax) {
      return;
    }
    ch = *arg_eax;
    arg_eax = arg_eax + 1;
  } while (ch != '\0');
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f09e5 (Original VA: 0xf09e5, Ghidra: FUN_000f09e5)
 * Prototype: int bflib_system_io_fn_0f09e5(void);
 * Address  : 0xf09e5 (Size: 71 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f09e5
 * Callers  : 11 -> frontnet_unrecognised_network_service_035546, newgui_fn_05a47f, person_ERROR_063412, command_script_player_name_07b6df, command_script_player_name_07b7d9, command_script_player_name_07b8d8, bflib_video_sbawe32_mdi_0f143c, bflib_sound_sbawe32_mdi_0f174e ...
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0f09e5(void)

{
  byte flag;
  byte flag_2;
  byte *arg_eax;
  byte *arg_edx;
  
  while( true ) {
    flag = *arg_eax;
    flag_2 = *arg_edx;
    if ((0x40 < flag) && (flag < 0x5b)) {
      flag = flag + 0x20;
    }
    if ((0x40 < flag_2) && (flag_2 < 0x5b)) {
      flag_2 = flag_2 + 0x20;
    }
    if ((flag != flag_2) || (flag_2 == 0)) break;
    arg_eax = arg_eax + 1;
    arg_edx = arg_edx + 1;
  }
  return (uint)flag - (uint)flag_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0a2c (Original VA: 0xf0a2c, Ghidra: FUN_000f0a2c)
 * Prototype: void bflib_system_io_fn_0f0a2c(void);
 * Address  : 0xf0a2c (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0a2c
 * Callers  : 2 -> frontnet_save_config_net_035bbf, command_script_unexpected_07909c
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f0a2c(void)

{
  char ch;
  char *arg_eax;
  
  for (; ch = *arg_eax, ch != '\0'; arg_eax = arg_eax + 1) {
    if ((byte)(ch + 0x9fU) < 0x1a) {
      *arg_eax = ch + -0x20;
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0a54 (Original VA: 0xf0a54, Ghidra: FUN_000f0a54)
 * Prototype: void bflib_system_io_fn_0f0a54(void);
 * Address  : 0xf0a54 (Size: 94 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0a54
 * Callers  : 2 -> fronttor_fn_036e52, sndheap_trying_use_two_sound_06e09b
 * Callees  : 2 -> bflib_sound_AIL_end_sample_0faa37, bflib_sound_AIL_sample_status_0fac8f
 ******************************************************************************/
void bflib_system_io_fn_0f0a54(void)

{
  int arg_eax;
  int val;
  short arg_dx;
  undefined4 *loop_i;
  
  if (((g_bss_003df514 != '\0') && (g_data_00195d18 != '\0')) && (g_data_00195d1a != '\0')) {
    for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (undefined4 *)((int)loop_i + 0x1d)
        ) {
      if (((arg_eax == *(int *)((int)loop_i + 0xe)) && (arg_dx == *(short *)((int)loop_i + 0x12))) &&
         (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val != 2)) {
        bflib_sound_AIL_end_sample_0faa37(*loop_i);
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0ab2 (Original VA: 0xf0ab2, Ghidra: FUN_000f0ab2)
 * Prototype: void bflib_system_io_fn_0f0ab2(void);
 * Address  : 0xf0ab2 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0ab2
 * Callers  : 2 -> game_fn_036f48, watcom_crt_response_code_125c34
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f0ab2(void)

{
  code *str_ptr;
  int arg_eax;
  uint uval;
  
  if (arg_eax != 0) {
    uval = (arg_eax * g_bss_003e0304 + 500U) / 1000;
    if (uval == 0) {
      uval = 1;
    }
    do {
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
      uval = uval - 1;
    } while (uval != 0);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0ab8 (Original VA: 0xf0ab8, Ghidra: FUN_000f0ab8)
 * Prototype: void bflib_system_io_fn_0f0ab8(void);
 * Address  : 0xf0ab8 (Size: 168 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0ab8
 * Callers  : 4 -> game_out_sync_gameturn_036ff4, inits_non_keeper_keeper_game_0402e5, sound_process_thing_entity_06f3d6, bflib_sound_bf48_load_music_bank_0f2188
 * Callees  : 4 -> bflib_sound_AIL_release_timer_handle_0fa30a, bflib_sound_AIL_stop_sequence_0fb83c, bflib_sound_AIL_end_sequence_0fb8f8, bflib_sound_AIL_sequence_status_0fba8e
 ******************************************************************************/
void bflib_system_io_fn_0f0ab8(void)

{
  int val;
  
  if ((((g_bss_003df8d1 != '\0') && (g_data_00195d98 != '\0')) && (g_data_00195d99 != '\0')) &&
     (g_bss_003df8d9 != 0)) {
    if (g_bss_003df8fa != '\0') {
      bflib_sound_AIL_release_timer_handle_0fa30a(g_bss_003df8f1);
    }
    g_bss_003df8fb = 0;
    g_bss_003df8fa = '\0';
    g_data_00195d9a = 1;
    g_bss_003df8f9 = 0;
    g_data_00195d9b = 0xff;
    val = bflib_sound_AIL_sequence_status_0fba8e(g_bss_003df8ed);
    if (val != 2) {
      bflib_sound_AIL_stop_sequence_0fb83c(g_bss_003df8ed);
      bflib_sound_AIL_end_sequence_0fb8f8(g_bss_003df8ed);
    }
    g_bss_003df8d9 = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0b60 (Original VA: 0xf0b60, Ghidra: FUN_000f0b60)
 * Prototype: void bflib_system_io_fn_0f0b60(void);
 * Address  : 0xf0b60 (Size: 77 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0b60
 * Callers  : 5 -> game_fn_0374c3, heapmgr_fn_03aa92, heapmgr_fn_03acde, heapmgr_fn_03ad39, draw_update_player_view_state_08ecb0
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f0b60(void)

{
  undefined4 *arg_eax;
  uint loop_i;
  undefined4 *arg_edx;
  uint arg_ebx;
  undefined4 *word_ptr;
  undefined2 *word_ptr_2;
  
  if (arg_edx != arg_eax) {
    if ((arg_edx < arg_eax) && (arg_eax < (undefined4 *)((int)arg_edx + arg_ebx))) {
      loop_i = arg_ebx >> 1;
      word_ptr = (undefined4 *)((int)arg_edx + arg_ebx);
      word_ptr_2 = (undefined2 *)((int)arg_eax + arg_ebx);
      while( true ) {
        if (loop_i == 0) break;
        loop_i = loop_i - 1;
        word_ptr_2[-1] = *(undefined2 *)((int)word_ptr - 2U);
        word_ptr = (undefined4 *)((int)word_ptr - 2U);
        word_ptr_2 = word_ptr_2 + -1;
      }
      loop_i = (uint)((arg_ebx & 1) != 0);
      while( true ) {
        word_ptr_2 = (undefined2 *)((int)word_ptr_2 + -1);
        word_ptr = (undefined4 *)((int)word_ptr - 1);
        if (loop_i == 0) break;
        loop_i = loop_i - 1;
        *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      }
      return;
    }
    for (loop_i = arg_ebx >> 2; loop_i != 0; loop_i = loop_i - 1) {
      *arg_eax = *arg_edx;
      arg_edx = arg_edx + 1;
      arg_eax = arg_eax + 1;
    }
    for (loop_i = arg_ebx & 3; loop_i != 0; loop_i = loop_i - 1) {
      *(undefined1 *)arg_eax = *(undefined1 *)arg_edx;
      arg_edx = (undefined4 *)((int)arg_edx + 1);
      arg_eax = (undefined4 *)((int)arg_eax + 1);
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0bb0 (Original VA: 0xf0bb0, Ghidra: FUN_000f0bb0)
 * Prototype: undefined8 bflib_system_io_fn_0f0bb0(void);
 * Address  : 0xf0bb0 (Size: 271 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0bb0
 * Callers  : 1 -> bflib_system_io_fn_0f0cc0
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bflib_system_io_fn_0f0bb0(void)

{
  short extraout_CX;
  undefined4 arg_edx;
  undefined4 local_88 [6];
  int local_70;
  undefined4 local_6c;
  undefined2 local_66;
  undefined2 local_64;
  undefined4 local_50;
  undefined1 *local_40;
  
  LbScreenWaitVbi();
  local_6c = 0x4f01;
  local_66 = (undefined2)(g_bss_003de9b4 >> 4);
  local_70 = (int)extraout_CX;
  local_88[0] = 0;
  local_64 = local_66;
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  bflib_system_io_fn_0fed1d();
  local_50 = 0x10;
  local_40 = (undefined1 *)local_88;
  bflib_system_io_fn_0fed45();
  g_bss_003de9ba = (ushort)*(byte *)(g_bss_003de9b4 + 5) * 0x100 + (ushort)*(byte *)(g_bss_003de9b4 + 4);
  g_bss_003de9ac =
       (ushort)*(byte *)(g_bss_003de9b4 + 0x11) * 0x100 + (ushort)*(byte *)(g_bss_003de9b4 + 0x10);
  g_bss_003de9ae =
       (ushort)*(byte *)(g_bss_003de9b4 + 0x13) * 0x100 + (ushort)*(byte *)(g_bss_003de9b4 + 0x12);
  g_bss_003de9b0 =
       (ushort)*(byte *)(g_bss_003de9b4 + 0x15) * 0x100 + (ushort)*(byte *)(g_bss_003de9b4 + 0x14);
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0cc0 (Original VA: 0xf0cc0, Ghidra: FUN_000f0cc0)
 * Prototype: undefined8 bflib_system_io_fn_0f0cc0(void);
 * Address  : 0xf0cc0 (Size: 90 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0cc0
 * Callers  : 1 -> LbScreenSetup
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0f0bb0, bflib_system_io_fn_0f7786
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f0cc0(void)

{
  undefined2 extraout_CX;
  undefined4 arg_edx;
  
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  bflib_system_io_fn_0f7786(2,extraout_CX);
  bflib_system_io_fn_0f0bb0();
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0d1c (Original VA: 0xf0d1c, Ghidra: FUN_000f0d1c)
 * Prototype: undefined8 bflib_system_io_fn_0f0d1c(void);
 * Address  : 0xf0d1c (Size: 113 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0d1c
 * Callers  : 8 -> game_draw_text_overlay_03752a, setup_clear_screen_backbuffer, bflib_system_io_fn_0e79fc, bflib_system_io_fn_0e7aac, bflib_system_io_fn_0e7c64, bflib_system_io_fn_0ec068, bflib_system_io_fn_0ec534, bflib_system_io_fn_0ec780
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f0d1c(void)

{
  code *str_ptr;
  short arg_ax;
  undefined1 *word_ptr;
  undefined1 auStack_c [8];
  
  word_ptr = &stack0xffffffec;
  if (arg_ax != g_bss_003de9b8) {
    str_ptr = (code *)swi(0x10);
    (*str_ptr)();
    str_ptr = (code *)swi(0x10);
    (*str_ptr)();
    word_ptr = auStack_c;
    g_bss_003de9b8 = arg_ax;
  }
  return CONCAT44(*(undefined4 *)(word_ptr + 8),1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0e64 (Original VA: 0xf0e64, Ghidra: FUN_000f0e64)
 * Prototype: longlong bflib_system_io_fn_0f0e64(void);
 * Address  : 0xf0e64 (Size: 80 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0e64
 * Callers  : 1 -> bflib_system_io_fn_0e79ac
 * Callees  : 1 -> bflib_video_fn_0f0d90
 ******************************************************************************/
longlong bflib_system_io_fn_0f0e64(void)

{
  short arg_ax;
  int val;
  short *loop_i;
  uint arg_edx;
  
  val = bflib_video_fn_0f0d90();
  if (val == 1) {
    for (loop_i = (short *)((uint)*(ushort *)(g_bss_003de9b4 + 0x10) * 0x10 +
                           (uint)*(ushort *)(g_bss_003de9b4 + 0xe)); *loop_i != -1;
        loop_i = loop_i + 1) {
      if (arg_ax == *loop_i) {
        return CONCAT44(arg_edx,1);
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0ec0 (Original VA: 0xf0ec0, Ghidra: FUN_000f0ec0)
 * Prototype: int bflib_system_io_fn_0f0ec0(void);
 * Address  : 0xf0ec0 (Size: 152 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0ec0
 * Callers  : 1 -> person_ERROR_063412
 * Callees  : 3 -> bflib_system_io_fn_0e9b44, watcom_crt_fn_10e8f0, watcom_crt_fn_10ea34
 ******************************************************************************/
int bflib_system_io_fn_0f0ec0(void)

{
  int val;
  int extraout_ECX;
  
  if (g_bss_003de9bc != 0) {
    return -1;
  }
  val = bflib_system_io_fn_0e9b44(0x90);
  if (val != -1) {
    val = watcom_crt_fn_10e8f0();
    if (val != 1) {
      return -1;
    }
    watcom_crt_fn_10ea34();
    val = extraout_ECX;
    g_bss_003de9bc = extraout_ECX;
  }
  return val;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f0f8c (Original VA: 0xf0f8c, Ghidra: FUN_000f0f8c)
 * Prototype: undefined8 bflib_system_io_fn_0f0f8c(void);
 * Address  : 0xf0f8c (Size: 140 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f0f8c
 * Callers  : 8 -> heap_graphics_heap_already_allocated_03a3d4, moodneed_fn_051d41, packet_build_local_player_turn_packet, setup_init_mouse_and_pointer, setup_allocate_graphics_heap, bflib_system_io_nops_currp_slbp_nopstotest_0e63ac, LbDataLoadAll, bflib_system_io_fn_0e984c
 * Callees  : 2 -> watcom_crt_fn_10e9bc, watcom_crt_fn_10eb2a
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f0f8c(void)

{
  char ch;
  undefined4 uval;
  int val;
  undefined4 arg_edx;
  char *str_ptr;
  char *str_ptr_2;
  byte flag;
  char local_218 [512];
  undefined1 *local_18;
  char *str_ptr_3;
  
  flag = 0;
  if (g_bss_003de9bc == 0) {
    uval = 0xffffffff;
  }
  else {
    local_18 = &stack0x00000008;
    str_ptr = &g_data_0016e782;
    watcom_crt_fn_10eb2a();
    local_18 = (undefined1 *)0x0;
    val = -1;
    str_ptr_3 = local_218;
    do {
      str_ptr_2 = str_ptr_3;
      if (val == 0) break;
      val = val + -1;
      str_ptr_2 = str_ptr_3 + (uint)flag * -2 + 1;
      ch = *str_ptr_3;
      str_ptr_3 = str_ptr_2;
    } while (ch != '\0');
    str_ptr_2 = str_ptr_2 + -1;
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    uval = watcom_crt_fn_10e9bc(&g_bss_003de9c0,local_218);
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f1018 (Original VA: 0xf1018, Ghidra: FUN_000f1018)
 * Prototype: longlong bflib_system_io_fn_0f1018(void);
 * Address  : 0xf1018 (Size: 58 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f1018
 * Callers  : 5 -> bflib_system_io_fn_0f113f, bflib_system_io_fn_0f11e4, bflib_system_io_fn_0f129d, bflib_system_io_fn_0f1342, bflib_video_sbawe32_mdi_0f143c
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
longlong bflib_system_io_fn_0f1018(void)

{
  int arg_eax;
  undefined4 local_18;
  undefined4 local_c;
  
  bflib_system_io_fn_0f7786(0x100,arg_eax + 0xf >> 4);
  if (local_c != 0) {
    return 0;
  }
  return (ulonglong)local_18 << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f1052 (Original VA: 0xf1052, Ghidra: FUN_000f1052)
 * Prototype: int bflib_system_io_fn_0f1052(void);
 * Address  : 0xf1052 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f1052
 * Callers  : 2 -> bflib_system_io_fn_0f13e7, bflib_sound_sbawe32_mdi_0f174e
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
int bflib_system_io_fn_0f1052(void)

{
  undefined4 local_c;
  
  bflib_system_io_fn_0f7786(0x101);
  return (local_c == 0) - 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f1082 (Original VA: 0xf1082, Ghidra: FUN_000f1082)
 * Prototype: undefined8 bflib_system_io_fn_0f1082(void);
 * Address  : 0xf1082 (Size: 55 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f1082
 * Callers  : 1 -> bflib_system_io_fn_0f11e4
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f1082(void)

{
  undefined4 arg_edx;
  undefined4 local_10;
  
  bflib_system_io_fn_0f7786();
  if (local_10 != 0) {
    return CONCAT44(arg_edx,0xffffffff);
  }
  return CONCAT44(arg_edx,2);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f10b9 (Original VA: 0xf10b9, Ghidra: FUN_000f10b9)
 * Prototype: undefined8 bflib_system_io_fn_0f10b9(void);
 * Address  : 0xf10b9 (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f10b9
 * Callers  : 4 -> bflib_system_io_fn_0f113f, bflib_system_io_fn_0f11e4, bflib_system_io_fn_0f129d, bflib_system_io_fn_0f1342
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f10b9(void)

{
  undefined4 arg_edx;
  undefined2 local_20;
  undefined2 local_1c;
  undefined4 local_10;
  
  bflib_system_io_fn_0f7786(6);
  if (local_10 != 0) {
    return CONCAT44(arg_edx,0xffffffff);
  }
  return CONCAT44(arg_edx,((int)(uint)local_1c >> 4) + (uint)local_20 * 0x1000);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f10fc (Original VA: 0xf10fc, Ghidra: FUN_000f10fc)
 * Prototype: undefined8 bflib_system_io_fn_0f10fc(void);
 * Address  : 0xf10fc (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f10fc
 * Callers  : 1 -> bflib_video_sbawe32_mdi_0f143c
 * Callees  : 1 -> bflib_sound_AIL_call_driver_0f9c40
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f10fc(void)

{
  int arg_eax;
  undefined4 arg_edx;
  short local_18 [2];
  undefined2 local_14;
  short local_12;
  char local_10;
  
  local_14 = 0x10;
  bflib_sound_AIL_call_driver_0f9c40(*(undefined4 *)(arg_eax + 4),0x506,local_18,local_18);
  if (local_18[0] == 0) {
    return CONCAT44(arg_edx,(int)local_12 << (local_10 + 0x10U & 0x1f));
  }
  return CONCAT44(arg_edx,0xffffffff);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f113f (Original VA: 0xf113f, Ghidra: FUN_000f113f)
 * Prototype: int bflib_system_io_fn_0f113f(void);
 * Address  : 0xf113f (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f113f
 * Callers  : 1 -> bflib_video_sbawe32_mdi_0f143c
 * Callees  : 3 -> bflib_system_io_fn_0f1018, bflib_system_io_fn_0f10b9, bflib_sound_AIL_call_driver_0f9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int bflib_system_io_fn_0f113f(void)

{
  undefined2 uval;
  int arg_eax;
  undefined2 arg_dx;
  int in_GS_OFFSET;
  int6 val;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  val = CONCAT24(g_bss_003dea98,g_bss_003dea94);
  if ((g_bss_003dea94 == 0) && (val = CONCAT24(g_bss_003dea98,g_bss_003dea94), g_bss_003dea98 == 0)) {
    val = bflib_system_io_fn_0f1018();
    g_bss_003dea98 = (short)((uint6)val >> 0x20);
    g_bss_003dea94 = (int)val;
    if (val == 0) {
      return -1;
    }
  }
  g_bss_003dea98 = (short)((uint6)val >> 0x20);
  g_bss_003dea94 = (int)val;
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94) = arg_dx;
  uval = bflib_system_io_fn_0f10b9();
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94 + 2) = uval;
  local_14 = 0x11;
  local_12 = bflib_system_io_fn_0f10b9();
  local_10 = 0;
  bflib_sound_AIL_call_driver_0f9c40(*(undefined4 *)(arg_eax + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f11e4 (Original VA: 0xf11e4, Ghidra: FUN_000f11e4)
 * Prototype: undefined8 bflib_system_io_fn_0f11e4(void);
 * Address  : 0xf11e4 (Size: 185 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f11e4
 * Callers  : 1 -> bflib_video_sbawe32_mdi_0f143c
 * Callees  : 4 -> bflib_system_io_fn_0f1018, bflib_system_io_fn_0f1082, bflib_system_io_fn_0f10b9, bflib_sound_AIL_call_driver_0f9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bflib_system_io_fn_0f11e4(void)

{
  undefined2 uval;
  int arg_eax;
  undefined4 uval_2;
  undefined2 arg_dx;
  int val;
  int in_GS_OFFSET;
  int6 val_2;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  short local_10;
  
  val_2 = CONCAT24(g_bss_003dea98,g_bss_003dea94);
  if ((g_bss_003dea94 == 0) && (val_2 = CONCAT24(g_bss_003dea98,g_bss_003dea94), g_bss_003dea98 == 0)) {
    val_2 = bflib_system_io_fn_0f1018();
    if (val_2 == 0) {
      g_bss_003dea94 = (int)val_2;
      g_bss_003dea98 = (short)((uint6)val_2 >> 0x20);
      return 0;
    }
  }
  g_bss_003dea98 = (short)((uint6)val_2 >> 0x20);
  g_bss_003dea94 = (int)val_2;
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94) = arg_dx;
  uval = bflib_system_io_fn_0f10b9();
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94 + 2) = uval;
  local_14 = 0x17;
  local_12 = bflib_system_io_fn_0f10b9();
  local_10 = 0;
  bflib_sound_AIL_call_driver_0f9c40(*(undefined4 *)(arg_eax + 4),0x506,local_18,local_18);
  if (local_18[0] == 0) {
    val = (int)local_10;
    uval_2 = bflib_system_io_fn_0f1082();
    return CONCAT44(uval_2,val);
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f129d (Original VA: 0xf129d, Ghidra: FUN_000f129d)
 * Prototype: int bflib_system_io_fn_0f129d(void);
 * Address  : 0xf129d (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f129d
 * Callers  : 1 -> bflib_video_sbawe32_mdi_0f143c
 * Callees  : 3 -> bflib_system_io_fn_0f1018, bflib_system_io_fn_0f10b9, bflib_sound_AIL_call_driver_0f9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int bflib_system_io_fn_0f129d(void)

{
  undefined2 uval;
  int arg_eax;
  undefined2 arg_dx;
  int in_GS_OFFSET;
  int6 val;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  val = CONCAT24(g_bss_003dea98,g_bss_003dea94);
  if ((g_bss_003dea94 == 0) && (val = CONCAT24(g_bss_003dea98,g_bss_003dea94), g_bss_003dea98 == 0)) {
    val = bflib_system_io_fn_0f1018();
    g_bss_003dea98 = (short)((uint6)val >> 0x20);
    g_bss_003dea94 = (int)val;
    if (val == 0) {
      return -1;
    }
  }
  g_bss_003dea98 = (short)((uint6)val >> 0x20);
  g_bss_003dea94 = (int)val;
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94) = arg_dx;
  uval = bflib_system_io_fn_0f10b9();
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94 + 2) = uval;
  local_14 = 0x18;
  local_12 = bflib_system_io_fn_0f10b9();
  local_10 = 0;
  bflib_sound_AIL_call_driver_0f9c40(*(undefined4 *)(arg_eax + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f1342 (Original VA: 0xf1342, Ghidra: FUN_000f1342)
 * Prototype: int bflib_system_io_fn_0f1342(void);
 * Address  : 0xf1342 (Size: 165 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f1342
 * Callers  : 1 -> bflib_video_sbawe32_mdi_0f143c
 * Callees  : 3 -> bflib_system_io_fn_0f1018, bflib_system_io_fn_0f10b9, bflib_sound_AIL_call_driver_0f9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int bflib_system_io_fn_0f1342(void)

{
  undefined2 uval;
  int arg_eax;
  undefined2 arg_dx;
  int in_GS_OFFSET;
  int6 val;
  short local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  
  val = CONCAT24(g_bss_003dea98,g_bss_003dea94);
  if ((g_bss_003dea94 == 0) && (val = CONCAT24(g_bss_003dea98,g_bss_003dea94), g_bss_003dea98 == 0)) {
    val = bflib_system_io_fn_0f1018();
    g_bss_003dea98 = (short)((uint6)val >> 0x20);
    g_bss_003dea94 = (int)val;
    if (val == 0) {
      return -1;
    }
  }
  g_bss_003dea98 = (short)((uint6)val >> 0x20);
  g_bss_003dea94 = (int)val;
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94) = arg_dx;
  uval = bflib_system_io_fn_0f10b9();
  *(undefined2 *)(in_GS_OFFSET + g_bss_003dea94 + 2) = uval;
  local_14 = 0x19;
  local_12 = bflib_system_io_fn_0f10b9();
  local_10 = 0;
  bflib_sound_AIL_call_driver_0f9c40(*(undefined4 *)(arg_eax + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f13e7 (Original VA: 0xf13e7, Ghidra: FUN_000f13e7)
 * Prototype: int bflib_system_io_fn_0f13e7(void);
 * Address  : 0xf13e7 (Size: 85 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f13e7
 * Callers  : 1 -> bflib_sound_sbawe32_mdi_0f174e
 * Callees  : 2 -> bflib_system_io_fn_0f1052, bflib_sound_AIL_call_driver_0f9c40
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int bflib_system_io_fn_0f13e7(void)

{
  int arg_eax;
  short local_18 [2];
  undefined2 local_14;
  
  bflib_system_io_fn_0f1052();
  local_14 = 0x12;
  g_bss_003dea98 = 0;
  g_bss_003dea94 = 0;
  bflib_sound_AIL_call_driver_0f9c40(*(undefined4 *)(arg_eax + 4),0x506,local_18,local_18);
  return (int)local_18[0];
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f17d0 (Original VA: 0xf17d0, Ghidra: FUN_000f17d0)
 * Prototype: void bflib_system_io_fn_0f17d0(int param_1,uint param_2);
 * Address  : 0xf17d0 (Size: 164 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f17d0
 * Callers  : 0 -> 
 * Callees  : 3 -> bflib_sound_AIL_stop_sequence_0fb83c, bflib_sound_AIL_resume_sequence_0fb89a, bflib_sound_AIL_send_channel_voice_message_0fc70b
 ******************************************************************************/
void bflib_system_io_fn_0f17d0(int param_1,uint param_2)

{
  if (param_1 == 0) {
    g_bss_003df8fb = 1;
    if (g_bss_003df8f8 == '\0') {
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,param_2 | 0xb0,0xb,0);
      (&g_bss_003dea9c)[param_2] = 1;
    }
    else {
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,param_2 | 0xb0,0x6b,0x7f);
      g_bss_003df8fb = 0;
    }
  }
  if (param_1 == 1) {
    bflib_sound_AIL_stop_sequence_0fb83c(g_bss_003df8ed);
    bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,param_2 | 0xb0,0,1);
    bflib_sound_AIL_resume_sequence_0fb89a(g_bss_003df8ed);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f1874 (Original VA: 0xf1874, Ghidra: FUN_000f1874)
 * Prototype: void bflib_system_io_fn_0f1874(void);
 * Address  : 0xf1874 (Size: 583 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f1874
 * Callers  : 2 -> inits_non_keeper_keeper_game_0402e5, sound_process_thing_entity_06f3d6
 * Callees  : 9 -> bflib_sound_AIL_release_timer_handle_0fa30a, bflib_sound_AIL_init_sequence_0fb774, bflib_sound_AIL_start_sequence_0fb7de, bflib_sound_AIL_stop_sequence_0fb83c, bflib_sound_AIL_end_sequence_0fb8f8, bflib_sound_AIL_set_sequence_volume_0fb9c0, bflib_sound_AIL_sequence_status_0fba8e, bflib_sound_AIL_register_trigger_callback_0fc255 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_fn_0f1874(void)

{
  byte flag;
  ushort arg_ax;
  int val;
  byte arg_dl;
  byte local_14;
  
  if (g_bss_003debdc != 0) {
    arg_ax = g_bss_003debdc;
  }
  if ((((g_bss_003df8d1 != '\0') && (g_data_00195d98 != '\0')) && (g_data_00195d99 != '\0')) &&
     (((int)(short)arg_ax <= (int)(uint)g_bss_003df8db && ((uint)g_bss_003df8d9 != (int)(short)arg_ax))))
  {
    if (g_bss_003df8fa != '\0') {
      bflib_sound_AIL_release_timer_handle_0fa30a(g_bss_003df8f1);
    }
    g_bss_003df8fb = 0;
    g_bss_003df8fa = '\0';
    g_data_00195d9a = 1;
    g_bss_003df8f9 = 0;
    g_data_00195d9b = 0xff;
    if (g_bss_003df8d9 != 0) {
      val = bflib_sound_AIL_sequence_status_0fba8e(g_bss_003df8ed);
      if (val != 2) {
        bflib_sound_AIL_stop_sequence_0fb83c(g_bss_003df8ed);
        bflib_sound_AIL_end_sequence_0fb8f8(g_bss_003df8ed);
      }
      g_bss_003df8d9 = 0;
    }
    bflib_sound_AIL_init_sequence_0fb774(g_bss_003df8ed,*(undefined4 *)((short)arg_ax * 0x20 + 0x12 + g_bss_003df8dd),0);
    local_14 = 0;
    bflib_sound_AIL_register_trigger_callback_0fc255(g_bss_003df8ed,bflib_system_io_fn_0f17d0);
    while (local_14 < 0x10) {
      (&g_bss_003dea9c)[local_14] = 0;
      flag = local_14 | 0xb0;
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,flag,0,0);
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,flag,7,0);
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,local_14 | 0xe0,0,0x40);
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,flag,0xb,0x7f);
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,flag,1,0);
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,flag,0x5b,0);
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,flag,0x5d,0);
      local_14 = local_14 + 1;
      bflib_sound_AIL_send_channel_voice_message_0fc70b(g_bss_003df8e9,g_bss_003df8ed,flag,0x6b,0);
    }
    if (arg_dl < 0x7f) {
      bflib_sound_AIL_set_sequence_volume_0fb9c0(g_bss_003df8ed,arg_dl,0);
    }
    bflib_sound_AIL_start_sequence_0fb7de(g_bss_003df8ed);
    g_bss_003df8d7 = 100;
    g_bss_003df8d9 = arg_ax;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f1abb (Original VA: 0xf1abb, Ghidra: FUN_000f1abb)
 * Prototype: undefined8 bflib_system_io_fn_0f1abb(void);
 * Address  : 0xf1abb (Size: 47 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f1abb
 * Callers  : 4 -> inits_could_create_ambient_sound_0404f7, pom_fn_065a61, bflib_system_io_time_elapsed_between_reads_0eb6b6, bflib_sound_AIL_startup_0fee88
 * Callees  : 2 -> watcom_crt_fn_10eb71, watcom_crt_fn_10ec34
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f1abb(void)

{
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined8 uval;
  
  watcom_crt_fn_10eb71();
  uval = watcom_crt_fn_10ec34();
  word_ptr = (undefined4 *)((ulonglong)uval >> 0x20);
  if (word_ptr != (undefined4 *)0x0) {
    *word_ptr = (int)uval;
  }
  return CONCAT44(arg_edx,(int)uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f239b (Original VA: 0xf239b, Ghidra: FUN_000f239b)
 * Prototype: void bflib_system_io_fn_0f239b(void);
 * Address  : 0xf239b (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f239b
 * Callers  : 1 -> bflib_system_io_fn_0f23de
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f239b(void)

{
  uint uval;
  
  if ((g_bss_003df8dd != 0) && (g_bss_003df8e5 != 0)) {
    g_bss_003df8db = 0;
    uval = g_bss_003df8dd;
    while (uval + 0x20 < g_bss_003df8e1) {
      g_bss_003df8db = g_bss_003df8db + 1;
      *(int *)(uval + 0x32) = *(int *)(uval + 0x32) + g_bss_003df8e5;
      uval = uval + 0x20;
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f23de (Original VA: 0xf23de, Ghidra: FUN_000f23de)
 * Prototype: int bflib_system_io_fn_0f23de(void);
 * Address  : 0xf23de (Size: 470 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f23de
 * Callers  : 1 -> bflib_sound_bf48_load_music_bank_0f2188
 * Callees  : 6 -> bflib_system_io_fn_0e8974, LbFileWrite, LbFileRead, bflib_system_io_fn_0f239b, bflib_system_io_fn_0f845c, bflib_sound_AIL_init_sequence_0fb774
 ******************************************************************************/
int bflib_system_io_fn_0f23de(void)

{
  char *str_ptr;
  int val;
  char *extraout_ECX;
  byte arg_dl;
  byte loop_i;
  int aiStack_54 [15];
  byte local_18;
  
  local_18 = arg_dl;
  bflib_system_io_fn_0e8974();
  LbFileRead();
  str_ptr = g_bss_003df8e5;
  if (((aiStack_54[(uint)local_18 * 4] == -1) || (g_bss_003df8e5 == (char *)0x0)) ||
     (g_bss_003df8dd == 0)) {
    val = (uint)(local_18 >> 4) << 8;
  }
  else {
    g_bss_003df8e1 = g_bss_003df8dd + aiStack_54[(uint)local_18 * 4 + 1];
    LbFileWrite();
    LbFileRead();
    if (((*str_ptr == 'R') && (str_ptr[1] == 'N')) && (str_ptr[2] == 'C')) {
      LbFileRead();
      bflib_system_io_fn_0f845c();
    }
    else {
      LbFileRead();
    }
    LbFileWrite();
    LbFileRead();
    if (((*extraout_ECX == 'R') && (extraout_ECX[1] == 'N')) && (extraout_ECX[2] == 'C')) {
      LbFileRead();
      bflib_system_io_fn_0f845c();
    }
    else {
      LbFileRead();
    }
    bflib_system_io_fn_0f239b();
    for (loop_i = 1; (uint)loop_i <= (uint)g_bss_003df8db; loop_i = loop_i + 1) {
      bflib_sound_AIL_init_sequence_0fb774(g_bss_003df8ed,*(undefined4 *)(g_bss_003df8dd + 0x12 + (uint)loop_i * 0x20),0);
    }
    g_data_00195d98 = 1;
    val = 1;
  }
  return val;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f25b4 (Original VA: 0xf25b4, Ghidra: FUN_000f25b4)
 * Prototype: undefined8 bflib_system_io_fn_0f25b4(void);
 * Address  : 0xf25b4 (Size: 439 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f25b4
 * Callers  : 1 -> bflib_video_bf25_init_music_0fe128
 * Callees  : 9 -> LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0e8974, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileWrite, LbFileRead, LbFileLoadAt ...
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f25b4(void)

{
  int file_handle;
  undefined4 uval;
  undefined4 arg_edx;
  int val;
  int val_2;
  int val_3;
  bool flag;
  
  dk_sprintf(&g_bss_003dec60,s__s_MUSIC_DAT_0016f11f,&g_bss_003deaac); /* 0x16f11f="%s/MUSIC.DAT" */
  file_handle = LbFileOpen();
  if (file_handle == -1) {
    uval = 0xffffffff;
    goto LAB_000f2394;
  }
  LbScreenWaitVbi();
  LbFileWrite();
  uval = bflib_system_io_fn_0e8974();
  LbFileWrite(uval);
  LbFileWrite();
  LbFileRead();
  val_2 = 0;
  bflib_system_io_fn_0e8a1c();
  file_handle = 0;
  if (g_bss_003df8d2 < 0x57) {
    if (g_bss_003df8d2 < 0x47) {
      flag = g_bss_003df8d2 == 0x46;
LAB_000f26e1:
      val = file_handle;
      val_3 = val_2;
      if (flag) {
        val = g_bss_003dec40;
        val_3 = g_bss_003dec44;
      }
    }
    else {
      val = g_bss_003dec50;
      val_3 = g_bss_003dec54;
      if ((0x47 < g_bss_003df8d2) && (val = file_handle, val_3 = val_2, g_bss_003df8d2 == 0x52)) {
LAB_000f2600:
        val = g_bss_003dec48;
        val_3 = g_bss_003dec4c;
      }
    }
  }
  else {
    val = g_bss_003dec58;
    val_3 = g_bss_003dec5c;
    if (0x57 < g_bss_003df8d2) {
      if (g_bss_003df8d2 < 0x67) {
        flag = g_bss_003df8d2 == 0x66;
        goto LAB_000f26e1;
      }
      val = g_bss_003dec50;
      val_3 = g_bss_003dec54;
      if ((0x67 < g_bss_003df8d2) && (val = file_handle, val_3 = val_2, 0x71 < g_bss_003df8d2)) {
        if (g_bss_003df8d2 < 0x73) goto LAB_000f2600;
        val = g_bss_003dec58;
        val_3 = g_bss_003dec5c;
        if (g_bss_003df8d2 != 0x77) {
          val = file_handle;
          val_3 = val_2;
        }
      }
    }
  }
  if ((val == 0) || (val_3 == 0)) {
    uval = 0xfffffffe;
  }
  else {
    g_bss_003df8e5 = LbFileLoadAt();
    g_bss_003df8dd = LbFileLoadAt();
    if ((g_bss_003df8e5 == 0) || (g_bss_003df8dd == 0)) {
      bflib_system_io_fn_0e94b0();
      bflib_system_io_fn_0e94b0();
      uval = 0;
    }
    else {
      LbScreenWaitVbi();
      LbScreenWaitVbi();
      uval = 1;
    }
  }
LAB_000f2394:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f27b7 (Original VA: 0xf27b7, Ghidra: FUN_000f27b7)
 * Prototype: undefined1 bflib_system_io_fn_0f27b7(void);
 * Address  : 0xf27b7 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f27b7
 * Callers  : 1 -> inits_fn_045bb8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 bflib_system_io_fn_0f27b7(void)

{
  return g_bss_003df514;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f27d0 (Original VA: 0xf27d0, Ghidra: FUN_000f27d0)
 * Prototype: undefined4 bflib_system_io_fn_0f27d0(void);
 * Address  : 0xf27d0 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f27d0
 * Callers  : 6 -> research_update_slab_subtile_columns_0670b2, sound_fn_06e538, sound_non_emitter_has_been_06e9ab, sound_non_emitter_has_been_06ea5a, sound_speech_emitter_has_been_06eb1a, sound_speech_emitter_has_been_06ebff
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f27d0(void)

{
  return g_data_00195d1e;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f27dc (Original VA: 0xf27dc, Ghidra: FUN_000f27dc)
 * Prototype: undefined4 bflib_system_io_fn_0f27dc(void);
 * Address  : 0xf27dc (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f27dc
 * Callers  : 3 -> bflib_system_io_fn_0efe18, bflib_system_io_fn_0efe94, bflib_system_io_fn_0f0064
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f27dc(void)

{
  return g_bss_003df526;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f27e8 (Original VA: 0xf27e8, Ghidra: FUN_000f27e8)
 * Prototype: undefined4 * bflib_system_io_fn_0f27e8(void);
 * Address  : 0xf27e8 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f27e8
 * Callers  : 2 -> sndheap_fn_06dfd3, sndheap_trying_use_two_sound_06e09b
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 * bflib_system_io_fn_0f27e8(void)

{
  return &g_bss_003df170;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f27ee (Original VA: 0xf27ee, Ghidra: FUN_000f27ee)
 * Prototype: undefined4 bflib_system_io_fn_0f27ee(void);
 * Address  : 0xf27ee (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f27ee
 * Callers  : 2 -> sndheap_fn_06dfd3, sndheap_trying_use_two_sound_06e09b
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f27ee(void)

{
  return g_bss_003df510;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f2800 (Original VA: 0xf2800, Ghidra: FUN_000f2800)
 * Prototype: undefined4 bflib_system_io_fn_0f2800(void);
 * Address  : 0xf2800 (Size: 2623 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f2800
 * Callers  : 14 -> newgui_cycle_button_have_gui_05482c, newgui_cycle_button_have_gui_0548cb, newgui_fn_0549a4, newgui_fn_054a22, newgui_cycle_button_must_have_054add, newgui_cycle_button_must_have_054bab, newgui_update_player_dungeon_054d8a, newgui_update_player_view_state_054eeb ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f2800(void)

{
  byte flag;
  int arg_eax;
  int val;
  byte *byte_ptr;
  byte loop_i;
  byte flag_2;
  char ch;
  int arg_ecx;
  int arg_edx;
  int val_2;
  byte *byte_ptr_2;
  undefined4 *arg_ebx;
  uint uval;
  int val_3;
  uint uval_2;
  byte *byte_ptr_3;
  bool saved_draw_flags;
  uint local_b0;
  byte local_a0;
  byte local_9c;
  byte *local_98;
  uint local_94;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  uint local_84;
  byte *local_7c;
  byte *local_78;
  byte *local_74;
  byte local_70;
  byte local_6c;
  byte local_68;
  byte local_64;
  byte local_60;
  byte local_54;
  byte local_4c;
  byte local_3c;
  byte local_1c;
  byte local_18;
  byte local_14;
  
  if ((*(char *)(arg_ebx + 1) == '\0') || (*(char *)((int)arg_ebx + 5) == '\0')) {
    return 1;
  }
  if ((g_display_bss_003d9844 == 0) || (g_display_bss_003d9848 == 0)) {
    return 1;
  }
  val_3 = arg_eax + g_display_bss_003d983c;
  val_2 = arg_edx + g_display_bss_003d9840;
  val = g_display_bss_003d983c - val_3;
  loop_i = *(byte *)(arg_ebx + 1);
  if (val < 1) {
    local_70 = 0;
  }
  else {
    if ((int)(uint)loop_i <= val) {
      return 1;
    }
    local_70 = (byte)val;
  }
  val = (val_3 + (uint)loop_i) - (g_display_bss_003d983c + g_display_bss_003d9844);
  if (0 < val) {
    if ((int)(uint)loop_i <= val) {
      return 1;
    }
    loop_i = loop_i - (char)val;
  }
  val = g_display_bss_003d9840 - val_2;
  flag = *(byte *)((int)arg_ebx + 5);
  if (val < 1) {
    local_94 = (uint)flag;
  }
  else {
    if ((int)(uint)flag <= val) {
      return 1;
    }
    local_94 = (uint)CONCAT11((char)val,flag);
  }
  val = (val_2 + (local_94 & 0xff)) - (g_display_bss_003d9840 + g_display_bss_003d9848);
  ch = (char)local_94;
  uval = local_94;
  if (0 < val) {
    if ((int)(local_94 & 0xff) <= val) {
      return 1;
    }
    uval = (uint)(byte)(ch - (char)val);
  }
  uval_2 = uval & 0xff;
  flag = (byte)(local_94 >> 8);
  if (((byte)g_lb_display_draw_flags & 2) == 0) {
    byte_ptr_2 = (byte *)((uint)local_70 + val_3 + (val_2 + (uint)flag) * g_screen_pitch + g_display_bss_003d9818)
    ;
    val = g_screen_pitch;
  }
  else {
    val_2 = val_2 + uval_2;
    uval_2 = (uint)(byte)(ch - flag);
    byte_ptr_2 = (byte *)((uint)local_70 + val_3 + (val_2 + -1) * g_screen_pitch + g_display_bss_003d9818);
    local_94 = (uint)(byte)(ch - (char)uval) << 8;
    val = -g_screen_pitch;
  }
  ch = (char)(local_94 >> 8);
  flag = (char)uval_2 - ch;
  local_94 = local_94 >> 8;
  flag_2 = loop_i - local_70;
  byte_ptr = (byte *)*arg_ebx;
  if (ch != '\0') {
    do {
      for (; val_2 = (int)(char)*byte_ptr, 0 < val_2; byte_ptr = byte_ptr + val_2 + 1) {
      }
      byte_ptr = byte_ptr + 1;
    } while ((val_2 != 0) || (local_94 = local_94 - 1, local_94 != 0));
  }
  if (((byte)g_lb_display_draw_flags & 0xd) == 0) {
    local_88 = byte_ptr_2 + val;
    local_84 = (uint)flag;
    uval = (uint)flag_2;
    if (local_70 != 0) goto LAB_000f3129;
LAB_000f3076:
    do {
      if (0 < (int)uval) {
        uval_2 = (uint)(char)*byte_ptr;
        if ((int)uval_2 < 1) {
          if (-1 < (int)uval_2) {
            if (local_84 == 1) {
              return 1;
            }
            byte_ptr = byte_ptr + 1;
            goto LAB_000f311e;
          }
          byte_ptr = byte_ptr + 1;
          uval = uval + uval_2;
          byte_ptr_2 = byte_ptr_2 + -uval_2;
        }
        else {
          if ((int)uval <= (int)uval_2) {
            uval_2 = uval;
          }
          byte_ptr_3 = byte_ptr;
          local_90 = byte_ptr_2;
          while (byte_ptr_3 = byte_ptr_3 + 1, local_90 < byte_ptr_2 + uval_2) {
            *local_90 = *(byte *)((uint)*byte_ptr_3 + arg_ecx);
            local_90 = local_90 + 1;
          }
          val_2 = (int)(char)*byte_ptr;
          uval = uval - val_2;
          byte_ptr_2 = byte_ptr_2 + val_2;
          byte_ptr = byte_ptr + val_2 + 1;
        }
        goto LAB_000f3076;
      }
      if (local_84 == 1) {
        return 1;
      }
      do {
        for (; val_2 = (int)(char)*byte_ptr, 0 < val_2; byte_ptr = byte_ptr + val_2 + 1) {
        }
        byte_ptr = byte_ptr + 1;
      } while (val_2 != 0);
LAB_000f311e:
      local_84 = local_84 - 1;
      byte_ptr_2 = local_88;
      local_88 = local_88 + val;
LAB_000f3129:
      uval = (uint)flag_2;
    } while (local_70 == 0);
    local_64 = local_70;
LAB_000f3139:
    val_2 = (int)(char)*byte_ptr;
    if (val_2 < 1) {
      if (val_2 == 0) {
        uval = 0;
        goto LAB_000f3076;
      }
      if (val_2 < (int)-(uint)local_64) {
        local_3c = -local_64 - *byte_ptr;
        if (flag_2 < (byte)(-local_64 - *byte_ptr)) {
          local_3c = flag_2;
        }
        byte_ptr = byte_ptr + 1;
        byte_ptr_2 = byte_ptr_2 + local_3c;
        uval = uval - local_3c;
        goto LAB_000f3076;
      }
      loop_i = *byte_ptr;
      byte_ptr = byte_ptr + 1;
    }
    else {
      if ((int)(uint)local_64 < val_2) {
        local_18 = *byte_ptr - local_64;
        if (flag_2 < (byte)(*byte_ptr - local_64)) {
          local_18 = flag_2;
        }
        local_98 = byte_ptr + local_64 + 1;
        local_8c = byte_ptr_2;
        while (local_8c < byte_ptr_2 + local_18) {
          loop_i = *local_98;
          local_98 = local_98 + 1;
          *local_8c = *(byte *)((uint)loop_i + arg_ecx);
          local_8c = local_8c + 1;
        }
        byte_ptr_2 = byte_ptr_2 + local_18;
        uval = uval - local_18;
        byte_ptr = byte_ptr + (char)*byte_ptr + 1;
        goto LAB_000f3076;
      }
      loop_i = -*byte_ptr;
      byte_ptr = byte_ptr + val_2 + 1;
    }
    local_64 = local_64 + loop_i;
    if (local_64 == 0) goto LAB_000f3076;
    goto LAB_000f3139;
  }
  saved_draw_flags = ((byte)g_lb_display_draw_flags & 1) != 0;
  if (saved_draw_flags) {
    local_70 = *(char *)(arg_ebx + 1) - loop_i;
    byte_ptr_2 = byte_ptr_2 + (flag_2 - 1);
  }
  local_74 = byte_ptr_2 + val;
  local_b0 = (uint)flag;
  uval = (uint)flag_2;
  if (((byte)g_lb_display_draw_flags & 0xc) == 0) {
    if (local_70 != 0) goto LAB_000f2f66;
LAB_000f2eb1:
    do {
      if (0 < (int)uval) {
        local_9c = *byte_ptr;
        val_2 = (int)(char)local_9c;
        if (val_2 < 1) {
          if (-1 < val_2) {
            if (local_b0 == 1) {
              return 1;
            }
            byte_ptr = byte_ptr + 1;
            goto LAB_000f2f5b;
          }
          byte_ptr = byte_ptr + 1;
          uval = uval + val_2;
          byte_ptr_2 = byte_ptr_2 + val_2;
        }
        else {
          if ((int)uval <= val_2) {
            local_9c = (byte)uval;
          }
          byte_ptr_3 = byte_ptr;
          for (loop_i = 0; byte_ptr_3 = byte_ptr_3 + 1, loop_i < local_9c; loop_i = loop_i + 1) {
            *byte_ptr_2 = *(byte *)((uint)*byte_ptr_3 + arg_ecx);
            byte_ptr_2 = byte_ptr_2 + -1;
          }
          uval = uval - (int)(char)*byte_ptr;
          byte_ptr = byte_ptr + (char)*byte_ptr + 1;
        }
        goto LAB_000f2eb1;
      }
      if (local_b0 == 1) {
        return 1;
      }
      do {
        for (; val_2 = (int)(char)*byte_ptr, 0 < val_2; byte_ptr = byte_ptr + val_2 + 1) {
        }
        byte_ptr = byte_ptr + 1;
      } while (val_2 != 0);
LAB_000f2f5b:
      local_b0 = local_b0 - 1;
      byte_ptr_2 = local_74;
      local_74 = local_74 + val;
LAB_000f2f66:
      uval = (uint)flag_2;
    } while (local_70 == 0);
    local_6c = local_70;
LAB_000f2f76:
    val_2 = (int)(char)*byte_ptr;
    if (val_2 < 1) {
      if (val_2 == 0) {
        uval = 0;
        goto LAB_000f2eb1;
      }
      if (val_2 < (int)-(uint)local_6c) {
        local_60 = -local_6c - *byte_ptr;
        if (flag_2 < (byte)(-local_6c - *byte_ptr)) {
          local_60 = flag_2;
        }
        byte_ptr = byte_ptr + 1;
        byte_ptr_2 = byte_ptr_2 + -(uint)local_60;
        uval = uval - local_60;
        goto LAB_000f2eb1;
      }
      loop_i = *byte_ptr;
      byte_ptr = byte_ptr + 1;
    }
    else {
      if ((int)(uint)local_6c < val_2) {
        local_1c = *byte_ptr - local_6c;
        if (flag_2 < (byte)(*byte_ptr - local_6c)) {
          local_1c = flag_2;
        }
        byte_ptr_3 = byte_ptr + local_6c + 1;
        for (local_4c = 0; local_4c < local_1c; local_4c = local_4c + 1) {
          loop_i = *byte_ptr_3;
          byte_ptr_3 = byte_ptr_3 + 1;
          *byte_ptr_2 = *(byte *)((uint)loop_i + arg_ecx);
          byte_ptr_2 = byte_ptr_2 + -1;
        }
        byte_ptr = byte_ptr + (char)*byte_ptr + 1;
        uval = uval - local_1c;
        goto LAB_000f2eb1;
      }
      loop_i = -*byte_ptr;
      byte_ptr = byte_ptr + val_2 + 1;
    }
    local_6c = local_6c + loop_i;
    if (local_6c == 0) goto LAB_000f2eb1;
    goto LAB_000f2f76;
  }
  if (local_70 != 0) goto LAB_000f2c60;
LAB_000f2a37:
  do {
    if ((int)uval < 1) {
      if (local_b0 == 1) {
        return 1;
      }
      do {
        for (; val_2 = (int)(char)*byte_ptr, 0 < val_2; byte_ptr = byte_ptr + val_2 + 1) {
        }
        byte_ptr = byte_ptr + 1;
      } while (val_2 != 0);
LAB_000f2c55:
      local_b0 = local_b0 - 1;
      uval = (uint)flag_2;
      byte_ptr_2 = local_74;
      local_74 = local_74 + val;
LAB_000f2c60:
      if (local_70 != 0) {
        local_54 = local_70;
LAB_000f2c70:
        val_2 = (int)(char)*byte_ptr;
        if (val_2 < 1) {
          if (val_2 == 0) {
            uval = 0;
            goto LAB_000f2a37;
          }
          if (val_2 < (int)-(uint)local_54) {
            local_14 = -local_54 - *byte_ptr;
            if (flag_2 < (byte)(-local_54 - *byte_ptr)) {
              local_14 = flag_2;
            }
            byte_ptr = byte_ptr + 1;
            if (saved_draw_flags) {
              uval_2 = -(uint)local_14;
            }
            else {
              uval_2 = (uint)local_14;
            }
            byte_ptr_2 = byte_ptr_2 + uval_2;
            uval = uval - local_14;
            goto LAB_000f2a37;
          }
          loop_i = *byte_ptr;
          byte_ptr = byte_ptr + 1;
        }
        else {
          if ((int)(uint)local_54 < val_2) {
            local_78 = byte_ptr + local_54 + 1;
            local_68 = *byte_ptr - local_54;
            if (flag_2 < (byte)(*byte_ptr - local_54)) {
              local_68 = flag_2;
            }
            if (saved_draw_flags) {
              if (((byte)g_lb_display_draw_flags & 4) == 0) {
                uval_2 = (uint)flag_2;
                while( true ) {
                  loop_i = (byte)(uval_2 >> 8);
                  flag_2 = (byte)uval_2;
                  if (local_68 <= loop_i) break;
                  *byte_ptr_2 = *(byte *)((uint)*(byte *)((uint)*local_78 + arg_ecx) +
                                     g_display_bss_003d981c + (uint)*byte_ptr_2 * 0x100);
                  local_78 = local_78 + 1;
                  uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
                  byte_ptr_2 = byte_ptr_2 + -1;
                }
                byte_ptr = byte_ptr + (char)*byte_ptr + 1;
                uval = uval - local_68;
                goto LAB_000f2a37;
              }
              uval_2 = (uint)flag_2;
              while( true ) {
                loop_i = (byte)(uval_2 >> 8);
                flag_2 = (byte)uval_2;
                if (local_68 <= loop_i) break;
                *byte_ptr_2 = *(byte *)((uint)*byte_ptr_2 +
                                   (uint)*(byte *)((uint)*local_78 + arg_ecx) * 0x100 + g_display_bss_003d981c)
                ;
                local_78 = local_78 + 1;
                uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
                byte_ptr_2 = byte_ptr_2 + -1;
              }
            }
            else {
              if (((byte)g_lb_display_draw_flags & 4) != 0) {
                uval_2 = (uint)flag_2;
                while( true ) {
                  loop_i = (byte)(uval_2 >> 8);
                  flag_2 = (byte)uval_2;
                  if (local_68 <= loop_i) break;
                  *byte_ptr_2 = *(byte *)((uint)*byte_ptr_2 +
                                     g_display_bss_003d981c +
                                     (uint)*(byte *)((uint)*local_78 + arg_ecx) * 0x100);
                  local_78 = local_78 + 1;
                  uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
                  byte_ptr_2 = byte_ptr_2 + 1;
                }
                byte_ptr = byte_ptr + (char)*byte_ptr + 1;
                uval = uval - local_68;
                goto LAB_000f2a37;
              }
              uval_2 = (uint)flag_2;
              while( true ) {
                loop_i = (byte)(uval_2 >> 8);
                flag_2 = (byte)uval_2;
                if (local_68 <= loop_i) break;
                *byte_ptr_2 = *(byte *)((uint)*(byte *)((uint)*local_78 + arg_ecx) +
                                   g_display_bss_003d981c + (uint)*byte_ptr_2 * 0x100);
                local_78 = local_78 + 1;
                uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
                byte_ptr_2 = byte_ptr_2 + 1;
              }
            }
            byte_ptr = byte_ptr + (char)*byte_ptr + 1;
            uval = uval - local_68;
            goto LAB_000f2a37;
          }
          loop_i = -*byte_ptr;
          byte_ptr = byte_ptr + val_2 + 1;
        }
        local_54 = local_54 + loop_i;
        if (local_54 == 0) goto LAB_000f2a37;
        goto LAB_000f2c70;
      }
      goto LAB_000f2a37;
    }
    local_a0 = *byte_ptr;
    val_2 = (int)(char)local_a0;
    if (val_2 < 1) {
      if (-1 < val_2) {
        if (local_b0 == 1) {
          return 1;
        }
        byte_ptr = byte_ptr + 1;
        goto LAB_000f2c55;
      }
      uval = uval + val_2;
      if (!saved_draw_flags) {
        val_2 = -val_2;
      }
      byte_ptr_2 = byte_ptr_2 + val_2;
      byte_ptr = byte_ptr + 1;
    }
    else {
      if ((int)uval <= val_2) {
        local_a0 = (byte)uval;
      }
      local_7c = byte_ptr + 1;
      uval_2 = (uint)CONCAT11(saved_draw_flags,flag_2);
      if (saved_draw_flags) {
        if (((byte)g_lb_display_draw_flags & 4) == 0) {
          uval_2 = uval_2 & 0xff;
          while( true ) {
            loop_i = (byte)(uval_2 >> 8);
            flag_2 = (byte)uval_2;
            if (local_a0 <= loop_i) break;
            *byte_ptr_2 = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr_2 * 0x100 +
                               (uint)*(byte *)((uint)*local_7c + arg_ecx));
            local_7c = local_7c + 1;
            uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
            byte_ptr_2 = byte_ptr_2 + -1;
          }
          uval = uval - (int)(char)*byte_ptr;
          byte_ptr = byte_ptr + (char)*byte_ptr + 1;
        }
        else {
          uval_2 = uval_2 & 0xff;
          while( true ) {
            loop_i = (byte)(uval_2 >> 8);
            flag_2 = (byte)uval_2;
            if (local_a0 <= loop_i) break;
            *byte_ptr_2 = *(byte *)((uint)*byte_ptr_2 +
                               (uint)*(byte *)((uint)*local_7c + arg_ecx) * 0x100 + g_display_bss_003d981c);
            local_7c = local_7c + 1;
            uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
            byte_ptr_2 = byte_ptr_2 + -1;
          }
LAB_000f2be0:
          uval = uval - (int)(char)*byte_ptr;
          byte_ptr = byte_ptr + (char)*byte_ptr + 1;
        }
      }
      else {
        if (((byte)g_lb_display_draw_flags & 4) == 0) {
          uval_2 = uval_2 & 0xff;
          while( true ) {
            loop_i = (byte)(uval_2 >> 8);
            flag_2 = (byte)uval_2;
            if (local_a0 <= loop_i) break;
            *byte_ptr_2 = *(byte *)((uint)*(byte *)((uint)*local_7c + arg_ecx) +
                               g_display_bss_003d981c + (uint)*byte_ptr_2 * 0x100);
            local_7c = local_7c + 1;
            uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
            byte_ptr_2 = byte_ptr_2 + 1;
          }
          goto LAB_000f2be0;
        }
        uval_2 = uval_2 & 0xff;
        while( true ) {
          loop_i = (byte)(uval_2 >> 8);
          flag_2 = (byte)uval_2;
          if (local_a0 <= loop_i) break;
          *byte_ptr_2 = *(byte *)((uint)*byte_ptr_2 +
                             g_display_bss_003d981c + (uint)*(byte *)((uint)*local_7c + arg_ecx) * 0x100);
          local_7c = local_7c + 1;
          uval_2 = (uint)CONCAT11(loop_i + 1,flag_2);
          byte_ptr_2 = byte_ptr_2 + 1;
        }
        uval = uval - (int)(char)*byte_ptr;
        byte_ptr = byte_ptr + (char)*byte_ptr + 1;
      }
    }
  } while( true );
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f323f (Original VA: 0xf323f, Ghidra: FUN_000f323f)
 * Prototype: void bflib_system_io_fn_0f323f(void);
 * Address  : 0xf323f (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f323f
 * Callers  : 4 -> newgui_this_bloody_tooltip_long_058b37, newgui_backup_input_field_small_05b1bc, bflib_system_io_fn_0f8c47, bflib_system_io_fn_0f8ccf
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f323f(void)

{
  char *arg_eax;
  char *arg_edx;
  int arg_ebx;
  
  for (; (arg_ebx != 0 && (*arg_edx != '\0')); arg_edx = arg_edx + 1) {
    arg_ebx = arg_ebx + -1;
    *arg_eax = *arg_edx;
    arg_eax = arg_eax + 1;
  }
  for (; arg_ebx != 0; arg_ebx = arg_ebx + -1) {
    *arg_eax = '\0';
    arg_eax = arg_eax + 1;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f3264 (Original VA: 0xf3264, Ghidra: FUN_000f3264)
 * Prototype: void bflib_system_io_fn_0f3264(void);
 * Address  : 0xf3264 (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f3264
 * Callers  : 4 -> newgui_fn_05a3ce, packet_compute_full_dungeon_checksum, setup_verify_cdrom_installation, bflib_video_bf25_init_music_0fe128
 * Callees  : 1 -> bflib_sound_AIL_set_XMIDI_master_volume_0fbc06
 ******************************************************************************/
void bflib_system_io_fn_0f3264(void)

{
  int arg_eax;
  
  if ((((g_data_00195d98 != '\0') && (g_bss_003df8d1 != '\0')) && (arg_eax != g_data_00195d94)) &&
     (((arg_eax < 0x80 && (-1 < arg_eax)) && (g_bss_003debcc == 0)))) {
    bflib_sound_AIL_set_XMIDI_master_volume_0fbc06(g_bss_003df8e9);
    g_data_00195d94 = arg_eax;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f32ae (Original VA: 0xf32ae, Ghidra: FUN_000f32ae)
 * Prototype: void bflib_system_io_fn_0f32ae(void);
 * Address  : 0xf32ae (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f32ae
 * Callers  : 3 -> newgui_fn_05a3ce, packet_compute_full_dungeon_checksum, setup_verify_cdrom_installation
 * Callees  : 1 -> bflib_sound_AIL_set_digital_master_volume_0fae65
 ******************************************************************************/
void bflib_system_io_fn_0f32ae(void)

{
  int arg_eax;
  
  if ((((g_data_00195d18 != '\0') && (g_bss_003df514 != '\0')) && (arg_eax != g_data_00195d1e)) &&
     (((arg_eax < 0x80 && (-1 < arg_eax)) && (g_bss_003debd0 == 0)))) {
    bflib_sound_AIL_set_digital_master_volume_0fae65(g_bss_003df526);
    g_data_00195d1e = arg_eax;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f3300 (Original VA: 0xf3300, Ghidra: FUN_000f3300)
 * Prototype: undefined4 bflib_system_io_fn_0f3300(void);
 * Address  : 0xf3300 (Size: 2114 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f3300
 * Callers  : 4 -> newgui_process_thing_entity_05cabb, draw_process_map_subtile_08bde8, engine3_draw_queued_billboard_sprite, bflib_system_io_draw_text_overlay_0e74d4
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f3300(void)

{
  int arg_eax;
  byte arg_cl;
  byte flag;
  uint uval;
  int val;
  char *str_ptr;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  byte flag_2;
  int arg_edx;
  int val_2;
  byte loop_i;
  char ch;
  undefined4 *arg_ebx;
  uint uval_2;
  byte *byte_ptr;
  byte *byte_ptr_2;
  byte *byte_ptr_3;
  int val_3;
  uint uval_3;
  bool saved_draw_flags;
  uint local_30;
  int local_2c;
  uint local_28;
  byte local_24;
  byte local_1c;
  
  if ((*(char *)(arg_ebx + 1) == '\0') || (*(char *)((int)arg_ebx + 5) == '\0')) {
    return 1;
  }
  if ((g_display_bss_003d9844 == 0) || (g_display_bss_003d9848 == 0)) {
    return 1;
  }
  val_3 = arg_eax + g_display_bss_003d983c;
  loop_i = *(byte *)(arg_ebx + 1);
  uval = g_display_bss_003d983c - val_3;
  val_2 = arg_edx + g_display_bss_003d9840;
  if ((int)uval < 1) {
    uval = 0;
  }
  else if ((int)(uint)loop_i <= (int)uval) {
    return 1;
  }
  local_24 = (byte)uval;
  val = (val_3 + (uint)loop_i) - (g_display_bss_003d983c + g_display_bss_003d9844);
  if (0 < val) {
    if ((int)(uint)loop_i <= val) {
      return 1;
    }
    loop_i = loop_i - (char)val;
  }
  val = g_display_bss_003d9840 - val_2;
  flag = *(byte *)((int)arg_ebx + 5);
  if (val < 1) {
    uval_3 = (uint)flag << 8;
  }
  else {
    if ((int)(uint)flag <= val) {
      return 1;
    }
    uval_3 = (uint)CONCAT11(flag,(char)val);
  }
  val = (val_2 + (uval_3 >> 8)) - (g_display_bss_003d9840 + g_display_bss_003d9848);
  flag_2 = (byte)(uval_3 >> 8);
  flag = flag_2;
  if (0 < val) {
    if ((int)(uval_3 >> 8) <= val) {
      return 1;
    }
    flag = flag_2 - (char)val;
  }
  ch = (char)uval_3;
  if (((byte)g_lb_display_draw_flags & 2) == 0) {
    local_2c = g_screen_pitch;
    byte_ptr_3 = (byte *)((uval & 0xff) +
                      val_3 + (val_2 + (uval_3 & 0xff)) * g_screen_pitch + g_display_bss_003d9818);
  }
  else {
    byte_ptr_3 = (byte *)((uval & 0xff) +
                      (val_2 + (uint)flag + -1) * g_screen_pitch + g_display_bss_003d9818 + val_3);
    local_2c = -g_screen_pitch;
    uval_3 = (uint)(byte)(flag_2 - flag);
    flag = flag_2 - ch;
  }
  flag = flag - (char)uval_3;
  flag_2 = loop_i - local_24;
  str_ptr = (char *)*arg_ebx;
  if ((char)uval_3 != '\0') {
    uval_3 = uval_3 & 0xff;
    do {
      for (; val_2 = (int)*str_ptr, 0 < val_2; str_ptr = str_ptr + val_2 + 1) {
      }
      str_ptr = str_ptr + 1;
    } while ((val_2 != 0) || (uval_3 = uval_3 - 1, uval_3 != 0));
  }
  if (((byte)g_lb_display_draw_flags & 0xd) == 0) {
    uval = (uint)flag_2;
    local_30 = (uint)flag;
    if (local_24 != 0) goto LAB_000f3a93;
LAB_000f3a08:
    do {
      if (0 < (int)uval) {
        val_2 = (int)*str_ptr;
        if (val_2 < 1) {
          if (-1 < val_2) {
            local_30 = local_30 - 1;
            if (local_30 == 0) {
              return 1;
            }
            str_ptr = str_ptr + 1;
            goto LAB_000f3a93;
          }
          str_ptr = str_ptr + 1;
          uval = uval + val_2;
        }
        else {
          LbScreenWaitVbi();
          uval = uval - (int)*extraout_ECX_01;
          str_ptr = extraout_ECX_01 + *extraout_ECX_01 + 1;
        }
        goto LAB_000f3a08;
      }
      local_30 = local_30 - 1;
      if (local_30 == 0) {
        return 1;
      }
      do {
        for (; val_2 = (int)*str_ptr, 0 < val_2; str_ptr = str_ptr + val_2 + 1) {
        }
        str_ptr = str_ptr + 1;
      } while (val_2 != 0);
LAB_000f3a93:
      uval = (uint)flag_2;
      for (loop_i = local_24; loop_i != 0; loop_i = loop_i + ch) {
        val_2 = (int)*str_ptr;
        if (val_2 < 1) {
          if (val_2 == 0) {
            uval = 0;
            break;
          }
          if (val_2 < (int)-(uint)loop_i) {
            loop_i = -loop_i - *str_ptr;
            uval_3 = (uint)CONCAT11(loop_i,loop_i);
            if (flag_2 < loop_i) {
              uval_3 = (uint)flag_2;
            }
            str_ptr = str_ptr + 1;
            uval = uval - (uval_3 & 0xff);
            break;
          }
          ch = *str_ptr;
          str_ptr = str_ptr + 1;
        }
        else {
          if ((int)(uint)loop_i < val_2) {
            local_1c = *str_ptr - loop_i;
            if (flag_2 < (byte)(*str_ptr - loop_i)) {
              local_1c = flag_2;
            }
            LbScreenWaitVbi();
            str_ptr = extraout_ECX_02 + *extraout_ECX_02 + 1;
            uval = uval - local_1c;
            break;
          }
          ch = -*str_ptr;
          str_ptr = str_ptr + val_2 + 1;
        }
      }
    } while( true );
  }
  saved_draw_flags = ((byte)g_lb_display_draw_flags & 1) == 0;
  if (!saved_draw_flags) {
    local_24 = *(char *)(arg_ebx + 1) - loop_i;
    byte_ptr_3 = byte_ptr_3 + (flag_2 - 1);
  }
  uval = (uint)flag_2;
  local_28 = (uint)flag;
  byte_ptr = byte_ptr_3 + local_2c;
  if (((byte)g_lb_display_draw_flags & 0xc) == 0) {
    if (local_24 != 0) goto LAB_000f393d;
LAB_000f38aa:
    do {
      if (0 < (int)uval) {
        val_2 = (int)*str_ptr;
        if (val_2 < 1) {
          if (-1 < val_2) {
            local_28 = local_28 - 1;
            if (local_28 == 0) {
              return 1;
            }
            str_ptr = str_ptr + 1;
            goto LAB_000f393d;
          }
          str_ptr = str_ptr + 1;
          uval = uval + val_2;
        }
        else {
          LbScreenWaitVbi();
          uval = uval - (int)*extraout_ECX;
          str_ptr = extraout_ECX + *extraout_ECX + 1;
        }
        goto LAB_000f38aa;
      }
      local_28 = local_28 - 1;
      if (local_28 == 0) {
        return 1;
      }
      do {
        for (; val_2 = (int)*str_ptr, 0 < val_2; str_ptr = str_ptr + val_2 + 1) {
        }
        str_ptr = str_ptr + 1;
      } while (val_2 != 0);
LAB_000f393d:
      uval = (uint)flag_2;
      for (loop_i = local_24; loop_i != 0; loop_i = loop_i + ch) {
        val_2 = (int)*str_ptr;
        if (val_2 < 1) {
          if (val_2 == 0) {
            uval = 0;
            break;
          }
          if (val_2 < (int)-(uint)loop_i) {
            loop_i = -loop_i - *str_ptr;
            uval_3 = (uint)CONCAT11(loop_i,loop_i);
            if (flag_2 < loop_i) {
              uval_3 = (uint)flag_2;
            }
            str_ptr = str_ptr + 1;
            uval = uval - (uval_3 & 0xff);
            break;
          }
          ch = *str_ptr;
          str_ptr = str_ptr + 1;
        }
        else {
          if ((int)(uint)loop_i < val_2) {
            loop_i = *str_ptr - loop_i;
            uval_3 = (uint)CONCAT11(loop_i,loop_i);
            if (flag_2 < loop_i) {
              uval_3 = (uint)flag_2;
            }
            LbScreenWaitVbi();
            uval = uval - (uval_3 & 0xff);
            str_ptr = extraout_ECX_00 + *extraout_ECX_00 + 1;
            break;
          }
          ch = -*str_ptr;
          str_ptr = str_ptr + val_2 + 1;
        }
      }
    } while( true );
  }
  byte_ptr_2 = byte_ptr;
  if (local_24 != 0) goto LAB_000f36b3;
LAB_000f350c:
  do {
    if ((int)uval < 1) {
      local_28 = local_28 - 1;
      if (local_28 == 0) {
        return 1;
      }
      do {
        for (; val_2 = (int)*str_ptr, 0 < val_2; str_ptr = str_ptr + val_2 + 1) {
        }
        str_ptr = str_ptr + 1;
      } while (val_2 != 0);
      byte_ptr = byte_ptr_2 + local_2c;
      byte_ptr_3 = byte_ptr_2;
LAB_000f36b3:
      uval = (uint)flag_2;
      byte_ptr_2 = byte_ptr;
      loop_i = local_24;
      if (local_24 != 0) {
LAB_000f36c1:
        val_2 = (int)*str_ptr;
        if (val_2 < 1) {
          if (val_2 == 0) {
            uval = 0;
            goto LAB_000f350c;
          }
          if (val_2 < (int)-(uint)loop_i) {
            loop_i = -loop_i - *str_ptr;
            uval_3 = (uint)CONCAT11(loop_i,loop_i);
            if (flag_2 < loop_i) {
              uval_3 = (uint)flag_2;
            }
            str_ptr = str_ptr + 1;
            if (saved_draw_flags) {
              uval_2 = uval_3 & 0xff;
            }
            else {
              uval_2 = -(uval_3 & 0xff);
            }
            byte_ptr_3 = byte_ptr_3 + uval_2;
            uval = uval - (uval_3 & 0xff);
            goto LAB_000f350c;
          }
          ch = *str_ptr;
          str_ptr = str_ptr + 1;
        }
        else {
          if ((int)(uint)loop_i < val_2) {
            flag = *str_ptr - loop_i;
            if (flag_2 < (byte)(*str_ptr - loop_i)) {
              flag = flag_2;
            }
            uval_3 = (uint)CONCAT11(flag_2,flag);
            if (saved_draw_flags) {
              if (((byte)g_lb_display_draw_flags & 4) != 0) {
                uval_3 = uval_3 & 0xff;
                while( true ) {
                  loop_i = (byte)(uval_3 >> 8);
                  if ((byte)uval_3 <= loop_i) break;
                  uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
                  *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr_3);
                  byte_ptr_3 = byte_ptr_3 + 1;
                }
                str_ptr = str_ptr + *str_ptr + 1;
                uval = uval - (uval_3 & 0xff);
                goto LAB_000f350c;
              }
              uval_3 = uval_3 & 0xff;
              while( true ) {
                loop_i = (byte)(uval_3 >> 8);
                if ((byte)uval_3 <= loop_i) break;
                uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
                *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr_3 * 0x100 + (uint)arg_cl);
                byte_ptr_3 = byte_ptr_3 + 1;
              }
            }
            else {
              if (((byte)g_lb_display_draw_flags & 4) == 0) {
                uval_3 = uval_3 & 0xff;
                while( true ) {
                  loop_i = (byte)(uval_3 >> 8);
                  if ((byte)uval_3 <= loop_i) break;
                  uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
                  *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr_3 * 0x100 + (uint)arg_cl);
                  byte_ptr_3 = byte_ptr_3 + -1;
                }
                str_ptr = str_ptr + *str_ptr + 1;
                uval = uval - (uval_3 & 0xff);
                goto LAB_000f350c;
              }
              uval_3 = uval_3 & 0xff;
              while( true ) {
                loop_i = (byte)(uval_3 >> 8);
                if ((byte)uval_3 <= loop_i) break;
                uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
                *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr_3);
                byte_ptr_3 = byte_ptr_3 + -1;
              }
            }
            str_ptr = str_ptr + *str_ptr + 1;
            uval = uval - (uval_3 & 0xff);
            goto LAB_000f350c;
          }
          ch = -*str_ptr;
          str_ptr = str_ptr + val_2 + 1;
        }
        loop_i = loop_i + ch;
        if (loop_i == 0) goto LAB_000f350c;
        goto LAB_000f36c1;
      }
      goto LAB_000f350c;
    }
    uval_3 = (uint)*str_ptr;
    if ((int)uval_3 < 1) {
      if (-1 < (int)uval_3) {
        local_28 = local_28 - 1;
        if (local_28 == 0) {
          return 1;
        }
        str_ptr = str_ptr + 1;
        byte_ptr = byte_ptr_2 + local_2c;
        byte_ptr_3 = byte_ptr_2;
        goto LAB_000f36b3;
      }
      uval = uval + uval_3;
      if (saved_draw_flags) {
        uval_3 = -uval_3;
      }
      byte_ptr_3 = byte_ptr_3 + uval_3;
      str_ptr = str_ptr + 1;
    }
    else {
      if ((int)uval <= (int)uval_3) {
        uval_3 = uval;
      }
      if (saved_draw_flags) {
        if (((byte)g_lb_display_draw_flags & 4) == 0) {
          uval_3 = uval_3 & 0xff;
          while( true ) {
            loop_i = (byte)(uval_3 >> 8);
            if ((byte)uval_3 <= loop_i) break;
            uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
            *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr_3 * 0x100 + (uint)arg_cl);
            byte_ptr_3 = byte_ptr_3 + 1;
          }
          goto LAB_000f363a;
        }
        uval_3 = uval_3 & 0xff;
        while( true ) {
          loop_i = (byte)(uval_3 >> 8);
          if ((byte)uval_3 <= loop_i) break;
          uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
          *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr_3);
          byte_ptr_3 = byte_ptr_3 + 1;
        }
        uval = uval - (int)*str_ptr;
        str_ptr = str_ptr + *str_ptr + 1;
      }
      else if (((byte)g_lb_display_draw_flags & 4) == 0) {
        uval_3 = uval_3 & 0xff;
        while( true ) {
          loop_i = (byte)(uval_3 >> 8);
          if ((byte)uval_3 <= loop_i) break;
          uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
          *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr_3 * 0x100 + (uint)arg_cl);
          byte_ptr_3 = byte_ptr_3 + -1;
        }
        uval = uval - (int)*str_ptr;
        str_ptr = str_ptr + *str_ptr + 1;
      }
      else {
        uval_3 = uval_3 & 0xff;
        while( true ) {
          loop_i = (byte)(uval_3 >> 8);
          if ((byte)uval_3 <= loop_i) break;
          uval_3 = (uint)CONCAT11(loop_i + 1,(byte)uval_3);
          *byte_ptr_3 = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr_3);
          byte_ptr_3 = byte_ptr_3 + -1;
        }
LAB_000f363a:
        uval = uval - (int)*str_ptr;
        str_ptr = str_ptr + *str_ptr + 1;
      }
    }
  } while( true );
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f43c7 (Original VA: 0xf43c7, Ghidra: FUN_000f43c7)
 * Prototype: void bflib_system_io_fn_0f43c7(void);
 * Address  : 0xf43c7 (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f43c7
 * Callers  : 3 -> packet_check_thing_interaction_valid, bflib_system_io_fn_0e9d2c, bflib_system_io_fn_0f7766
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f43c7(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f43d5 (Original VA: 0xf43d5, Ghidra: FUN_000f43d5)
 * Prototype: undefined8 bflib_system_io_fn_0f43d5(void);
 * Address  : 0xf43d5 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f43d5
 * Callers  : 3 -> write_turn_packets_to_file, bflib_sound_bf100_allocate_buffers_streamed_0ea94f, bflib_system_io_fn_0f69c6
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f43d5(void)

{
  uint uval;
  uint extraout_ECX;
  undefined4 arg_edx;
  undefined4 *extraout_EDX;
  undefined4 *loop_i;
  int val;
  
  uval = 0xffffffff;
  val = 0;
  for (loop_i = g_bss_003df16c; loop_i != (undefined4 *)0x0; loop_i = (undefined4 *)*loop_i) {
    if (((*(uint *)(loop_i[1] + 0xc) & uval) != 0) &&
       (val = val + 1, (*(byte *)(loop_i[1] + 0xd) & 0x10) != 0)) {
      bflib_system_io_fn_0f8aa6();
      uval = extraout_ECX;
      loop_i = extraout_EDX;
    }
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f43da (Original VA: 0xf43da, Ghidra: FUN_000f43da)
 * Prototype: undefined8 bflib_system_io_fn_0f43da(void);
 * Address  : 0xf43da (Size: 47 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f43da
 * Callers  : 1 -> watcom_crt_fn_127761
 * Callees  : 1 -> bflib_system_io_fn_0f8aa6
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f43da(void)

{
  uint arg_eax;
  uint extraout_ECX;
  undefined4 arg_edx;
  undefined4 *extraout_EDX;
  undefined4 *loop_i;
  int val;
  
  val = 0;
  for (loop_i = g_bss_003df16c; loop_i != (undefined4 *)0x0; loop_i = (undefined4 *)*loop_i) {
    if (((*(uint *)(loop_i[1] + 0xc) & arg_eax) != 0) &&
       (val = val + 1, (*(byte *)(loop_i[1] + 0xd) & 0x10) != 0)) {
      bflib_system_io_fn_0f8aa6();
      arg_eax = extraout_ECX;
      loop_i = extraout_EDX;
    }
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4409 (Original VA: 0xf4409, Ghidra: FUN_000f4409)
 * Prototype: void bflib_system_io_fn_0f4409(void);
 * Address  : 0xf4409 (Size: 34 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4409
 * Callers  : 3 -> panmap_fn_0633c4, person_ERROR_063412, bflib_system_io_fn_0f9610
 * Callees  : 1 -> bflib_system_io_fn_0f8a21
 ******************************************************************************/
void bflib_system_io_fn_0f4409(void)

{
  bflib_system_io_fn_0f8a21(&stack0x00000008);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f442b (Original VA: 0xf442b, Ghidra: FUN_000f442b)
 * Prototype: char * bflib_system_io_fn_0f442b(void);
 * Address  : 0xf442b (Size: 26 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f442b
 * Callers  : 1 -> person_ERROR_063412
 * Callees  : 0 -> 
 ******************************************************************************/
char * bflib_system_io_fn_0f442b(void)

{
  char ch;
  char *arg_eax;
  char arg_dl;
  char *str_ptr;
  
  str_ptr = (char *)0x0;
  do {
    if (arg_dl == *arg_eax) {
      str_ptr = arg_eax;
    }
    ch = *arg_eax;
    arg_eax = arg_eax + 1;
  } while (ch != '\0');
  return str_ptr;
}

/******************************************************************************
 * Function : _watcom_entry (Original VA: 0xf4448, Ghidra: _entry)
 * Prototype: undefined4 _watcom_entry(undefined2 param_1);
 * Address  : 0xf4448 (Size: 2 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : DOS/4GW Watcom C/C++ entry point
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _entry(undefined2 param_1)

{
  code *str_ptr;
  char ch;
  short short_val;
  undefined4 uval;
  short extraout_CX;
  uint loop_i;
  int loop_i_2;
  short extraout_DX;
  char *str_ptr_2;
  undefined1 *word_ptr;
  int val;
  uint *word_ptr_2;
  uint *word_ptr_3;
  char *str_ptr_3;
  char *str_ptr_4;
  undefined4 *word_ptr_4;
  undefined2 in_ES;
  undefined2 in_DS;
  short in_GS;
  bool flag;
  undefined8 uval_2;
  
  g_data_001958e0 = 0x24;
  str_ptr = (code *)swi(0x21);
  g_data_001958d4 = (undefined1 *)register0x00000010;
  g_data_001958e8 = (undefined1 *)register0x00000010;
  uval_2 = (*str_ptr)();
  loop_i_2 = (int)((ulonglong)uval_2 >> 0x20);
  g_data_0019590b = (undefined1)uval_2;
  g_data_0019590c = (undefined1)((ulonglong)uval_2 >> 8);
  val = 0;
  str_ptr_3 = &g_data_00000081;
  short_val = (short)((ulonglong)uval_2 >> 0x10);
  if (short_val == 0x4458) {
    g_data_001958d4 = (undefined1 *)(g_data_0000005c + 0xfffU & 0xfffff000);
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    g_data_00195909 = 0x2c;
  }
  else {
    if (short_val != 0x4243) {
      str_ptr = (code *)swi(0x21);
      ch = (*str_ptr)();
      if (ch == '\0') {
        g_data_00195909 = 0x2c;
        param_1 = 0;
        word_ptr = &stack0x00000008;
      }
      else {
        if (in_GS != 0) {
          g_data_001955bc = in_GS;
        }
        str_ptr = (code *)swi(0x31);
        (*str_ptr)();
        param_1 = 1;
        word_ptr = &stack0x0000000c;
        g_data_001958e0 = in_ES;
        g_data_00195909 = g_data_0000002c;
        if (extraout_DX != 0 || extraout_CX != 0) {
          param_1 = 0x101;
          word_ptr = &stack0x0000000c;
        }
      }
      goto LAB_000f45d5;
    }
    str_ptr = (code *)swi(0x21);
    g_data_001955b8 = loop_i_2;
    (*str_ptr)();
    loop_i_2 = *(int *)(loop_i_2 + 0x10);
    str_ptr_3 = (char *)(loop_i_2 + 0x81);
    val = (uint)*(ushort *)(loop_i_2 + 0x2c) << 4;
    param_1 = 9;
    g_data_001958e0 = in_DS;
    g_data_00195909 = in_DS;
  }
  word_ptr = &stack0x00000008;
LAB_000f45d5:
  g_data_00195902 = (char)param_1;
  g_data_00195903 = (undefined1)((ushort)param_1 >> 8);
  *(int *)(word_ptr + -4) = val;
  str_ptr_2 = &g_bss_003e9570;
  flag = true;
  loop_i = (uint)(byte)str_ptr_3[-1];
  do {
    str_ptr_4 = str_ptr_3;
    if (loop_i == 0) break;
    loop_i = loop_i - 1;
    str_ptr_4 = str_ptr_3 + 1;
    flag = *str_ptr_3 == ' ';
    str_ptr_3 = str_ptr_4;
  } while (flag);
  g_data_000f471d = in_DS;
  g_data_00195905 = val;
  if (!flag) {
    str_ptr_3 = str_ptr_4 + -1;
    for (loop_i_2 = loop_i + 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *str_ptr_2 = *str_ptr_3;
      str_ptr_3 = str_ptr_3 + 1;
      str_ptr_2 = str_ptr_2 + 1;
    }
  }
  *str_ptr_2 = '\0';
  str_ptr_2[1] = '\0';
  word_ptr_3 = *(uint **)(word_ptr + -4);
  *(char **)(word_ptr + -4) = str_ptr_2 + 1;
  *(uint *)(word_ptr + -8) = CONCAT22(0x3e,in_DS);
  g_data_00195900 = 0;
  do {
    if (((*word_ptr_3 | 0x20202020) == 0x37386f6e) && ((char)word_ptr_3[1] == '=')) {
      g_data_00195900 = g_data_00195900 + 1;
    }
    do {
      word_ptr_2 = word_ptr_3;
      word_ptr_3 = (uint *)((int)word_ptr_2 + 1);
    } while ((char)*word_ptr_2 != '\0');
  } while (*(char *)word_ptr_3 != '\0');
  word_ptr_3 = word_ptr_2 + 1;
  str_ptr_3 = str_ptr_2 + 1;
  do {
    loop_i = *word_ptr_3;
    g_data_001958e4 = str_ptr_3 + 1;
    *str_ptr_3 = (char)*word_ptr_3;
    word_ptr_3 = (uint *)((int)word_ptr_3 + 1);
    str_ptr_3 = g_data_001958e4;
  } while ((char)loop_i != '\0');
  g_data_001958dc = *(undefined4 *)(word_ptr + -4);
  loop_i = 0x2503c8;
  if (g_data_00195902 == '\x01') {
    loop_i = 0x1000;
  }
  word_ptr_4 = &g_data_001991a0;
  g_data_001958d0 = word_ptr;
  for (loop_i = loop_i >> 2; loop_i != 0; loop_i = loop_i - 1) {
    *word_ptr_4 = 0;
    word_ptr_4 = word_ptr_4 + 1;
  }
  for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
    *(undefined1 *)word_ptr_4 = 0;
    word_ptr_4 = (undefined4 *)((int)word_ptr_4 + 1);
  }
  g_data_001958d8 = &g_bss_003e9570;
  *(undefined4 *)(word_ptr + -4) = 0xf46d0;
  watcom_crt_fn_10ef10();
  *(undefined4 *)(word_ptr + -4) = 0xf46d7;
  uval = watcom_crt_fn_10eec1();
  *(undefined4 *)(word_ptr + -4) = uval;
  *(undefined4 *)(word_ptr + -8) = 0xf470c;
  watcom_crt_fn_10ef5b();
  str_ptr = (code *)swi(0x21);
  uval = (*str_ptr)();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f44bc (Original VA: 0xf44bc, Ghidra: FUN_000f44bc)
 * Prototype: undefined4 bflib_system_io_fn_0f44bc(undefined2 param_1);
 * Address  : 0xf44bc (Size: 3 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f44bc
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0f44bc(undefined2 param_1)

{
  ushort *word_ptr;
  code *str_ptr;
  char ch;
  short short_val;
  undefined4 uval;
  short extraout_CX;
  uint loop_i;
  int loop_i_2;
  short extraout_DX;
  char *str_ptr_2;
  undefined1 *word_ptr_2;
  ushort unaff_BP;
  int val;
  uint *word_ptr_3;
  uint *word_ptr_4;
  int unaff_EDI;
  char *str_ptr_3;
  char *str_ptr_4;
  undefined4 *word_ptr_5;
  undefined2 in_ES;
  undefined2 in_DS;
  short in_GS;
  bool flag;
  undefined8 uval_2;
  
  word_ptr = (ushort *)(unaff_EDI + 0x6e);
  short_val = (unaff_BP & 3) - (*word_ptr & 3);
  *word_ptr = *word_ptr + (ushort)(0 < short_val) * short_val;
  g_data_001958e0 = 0x24;
  str_ptr = (code *)swi(0x21);
  g_data_001958d4 = (undefined1 *)register0x00000010;
  g_data_001958e8 = (undefined1 *)register0x00000010;
  uval_2 = (*str_ptr)();
  loop_i_2 = (int)((ulonglong)uval_2 >> 0x20);
  g_data_0019590b = (undefined1)uval_2;
  g_data_0019590c = (undefined1)((ulonglong)uval_2 >> 8);
  val = 0;
  str_ptr_3 = &g_data_00000081;
  short_val = (short)((ulonglong)uval_2 >> 0x10);
  if (short_val == 0x4458) {
    g_data_001958d4 = (undefined1 *)(g_data_0000005c + 0xfffU & 0xfffff000);
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    g_data_00195909 = 0x2c;
  }
  else {
    if (short_val != 0x4243) {
      str_ptr = (code *)swi(0x21);
      ch = (*str_ptr)();
      if (ch == '\0') {
        g_data_00195909 = 0x2c;
        param_1 = 0;
        word_ptr_2 = &stack0x00000008;
      }
      else {
        if (in_GS != 0) {
          g_data_001955bc = in_GS;
        }
        str_ptr = (code *)swi(0x31);
        (*str_ptr)();
        param_1 = 1;
        word_ptr_2 = &stack0x0000000c;
        g_data_001958e0 = in_ES;
        g_data_00195909 = g_data_0000002c;
        if (extraout_DX != 0 || extraout_CX != 0) {
          param_1 = 0x101;
          word_ptr_2 = &stack0x0000000c;
        }
      }
      goto LAB_000f45d5;
    }
    str_ptr = (code *)swi(0x21);
    g_data_001955b8 = loop_i_2;
    (*str_ptr)();
    loop_i_2 = *(int *)(loop_i_2 + 0x10);
    str_ptr_3 = (char *)(loop_i_2 + 0x81);
    val = (uint)*(ushort *)(loop_i_2 + 0x2c) << 4;
    param_1 = 9;
    g_data_001958e0 = in_DS;
    g_data_00195909 = in_DS;
  }
  word_ptr_2 = &stack0x00000008;
LAB_000f45d5:
  g_data_00195902 = (char)param_1;
  g_data_00195903 = (undefined1)((ushort)param_1 >> 8);
  *(int *)(word_ptr_2 + -4) = val;
  str_ptr_2 = &g_bss_003e9570;
  flag = true;
  loop_i = (uint)(byte)str_ptr_3[-1];
  do {
    str_ptr_4 = str_ptr_3;
    if (loop_i == 0) break;
    loop_i = loop_i - 1;
    str_ptr_4 = str_ptr_3 + 1;
    flag = *str_ptr_3 == ' ';
    str_ptr_3 = str_ptr_4;
  } while (flag);
  g_data_000f471d = in_DS;
  g_data_00195905 = val;
  if (!flag) {
    str_ptr_3 = str_ptr_4 + -1;
    for (loop_i_2 = loop_i + 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *str_ptr_2 = *str_ptr_3;
      str_ptr_3 = str_ptr_3 + 1;
      str_ptr_2 = str_ptr_2 + 1;
    }
  }
  *str_ptr_2 = '\0';
  str_ptr_2[1] = '\0';
  word_ptr_4 = *(uint **)(word_ptr_2 + -4);
  *(char **)(word_ptr_2 + -4) = str_ptr_2 + 1;
  *(uint *)(word_ptr_2 + -8) = CONCAT22(0x3e,in_DS);
  g_data_00195900 = 0;
  do {
    if (((*word_ptr_4 | 0x20202020) == 0x37386f6e) && ((char)word_ptr_4[1] == '=')) {
      g_data_00195900 = g_data_00195900 + 1;
    }
    do {
      word_ptr_3 = word_ptr_4;
      word_ptr_4 = (uint *)((int)word_ptr_3 + 1);
    } while ((char)*word_ptr_3 != '\0');
  } while (*(char *)word_ptr_4 != '\0');
  word_ptr_4 = word_ptr_3 + 1;
  str_ptr_3 = str_ptr_2 + 1;
  do {
    loop_i = *word_ptr_4;
    g_data_001958e4 = str_ptr_3 + 1;
    *str_ptr_3 = (char)*word_ptr_4;
    word_ptr_4 = (uint *)((int)word_ptr_4 + 1);
    str_ptr_3 = g_data_001958e4;
  } while ((char)loop_i != '\0');
  g_data_001958dc = *(undefined4 *)(word_ptr_2 + -4);
  loop_i = 0x2503c8;
  if (g_data_00195902 == '\x01') {
    loop_i = 0x1000;
  }
  word_ptr_5 = &g_data_001991a0;
  g_data_001958d0 = word_ptr_2;
  for (loop_i = loop_i >> 2; loop_i != 0; loop_i = loop_i - 1) {
    *word_ptr_5 = 0;
    word_ptr_5 = word_ptr_5 + 1;
  }
  for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
    *(undefined1 *)word_ptr_5 = 0;
    word_ptr_5 = (undefined4 *)((int)word_ptr_5 + 1);
  }
  g_data_001958d8 = &g_bss_003e9570;
  *(undefined4 *)(word_ptr_2 + -4) = 0xf46d0;
  watcom_crt_fn_10ef10();
  *(undefined4 *)(word_ptr_2 + -4) = 0xf46d7;
  uval = watcom_crt_fn_10eec1();
  *(undefined4 *)(word_ptr_2 + -4) = uval;
  *(undefined4 *)(word_ptr_2 + -8) = 0xf470c;
  watcom_crt_fn_10ef5b();
  str_ptr = (code *)swi(0x21);
  uval = (*str_ptr)();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f44c0 (Original VA: 0xf44c0, Ghidra: FUN_000f44c0)
 * Prototype: undefined4 bflib_system_io_fn_0f44c0(undefined2 param_1);
 * Address  : 0xf44c0 (Size: 537 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f44c0
 * Callers  : 0 -> 
 * Callees  : 2 -> watcom_crt_fn_10eec1, watcom_crt_fn_10ef10
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0f44c0(undefined2 param_1)

{
  code *str_ptr;
  char ch;
  short short_val;
  undefined4 uval;
  short extraout_CX;
  uint loop_i;
  int loop_i_2;
  short extraout_DX;
  char *str_ptr_2;
  undefined1 *word_ptr;
  int val;
  uint *word_ptr_2;
  uint *word_ptr_3;
  char *str_ptr_3;
  char *str_ptr_4;
  undefined4 *word_ptr_4;
  undefined2 in_ES;
  undefined2 in_DS;
  short in_GS;
  bool flag;
  undefined8 uval_2;
  
  g_data_001958e0 = 0x24;
  str_ptr = (code *)swi(0x21);
  g_data_001958d4 = (undefined1 *)register0x00000010;
  g_data_001958e8 = (undefined1 *)register0x00000010;
  uval_2 = (*str_ptr)();
  loop_i_2 = (int)((ulonglong)uval_2 >> 0x20);
  g_data_0019590b = (undefined1)uval_2;
  g_data_0019590c = (undefined1)((ulonglong)uval_2 >> 8);
  val = 0;
  str_ptr_3 = &g_data_00000081;
  short_val = (short)((ulonglong)uval_2 >> 0x10);
  if (short_val == 0x4458) {
    g_data_001958d4 = (undefined1 *)(g_data_0000005c + 0xfffU & 0xfffff000);
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    g_data_00195909 = 0x2c;
  }
  else {
    if (short_val != 0x4243) {
      str_ptr = (code *)swi(0x21);
      ch = (*str_ptr)();
      if (ch == '\0') {
        g_data_00195909 = 0x2c;
        param_1 = 0;
        word_ptr = &stack0x00000008;
      }
      else {
        if (in_GS != 0) {
          g_data_001955bc = in_GS;
        }
        str_ptr = (code *)swi(0x31);
        (*str_ptr)();
        param_1 = 1;
        word_ptr = &stack0x0000000c;
        g_data_001958e0 = in_ES;
        g_data_00195909 = g_data_0000002c;
        if (extraout_DX != 0 || extraout_CX != 0) {
          param_1 = 0x101;
          word_ptr = &stack0x0000000c;
        }
      }
      goto LAB_000f45d5;
    }
    str_ptr = (code *)swi(0x21);
    g_data_001955b8 = loop_i_2;
    (*str_ptr)();
    loop_i_2 = *(int *)(loop_i_2 + 0x10);
    str_ptr_3 = (char *)(loop_i_2 + 0x81);
    val = (uint)*(ushort *)(loop_i_2 + 0x2c) << 4;
    param_1 = 9;
    g_data_001958e0 = in_DS;
    g_data_00195909 = in_DS;
  }
  word_ptr = &stack0x00000008;
LAB_000f45d5:
  g_data_00195902 = (char)param_1;
  g_data_00195903 = (undefined1)((ushort)param_1 >> 8);
  *(int *)(word_ptr + -4) = val;
  str_ptr_2 = &g_bss_003e9570;
  flag = true;
  loop_i = (uint)(byte)str_ptr_3[-1];
  do {
    str_ptr_4 = str_ptr_3;
    if (loop_i == 0) break;
    loop_i = loop_i - 1;
    str_ptr_4 = str_ptr_3 + 1;
    flag = *str_ptr_3 == ' ';
    str_ptr_3 = str_ptr_4;
  } while (flag);
  g_data_000f471d = in_DS;
  g_data_00195905 = val;
  if (!flag) {
    str_ptr_3 = str_ptr_4 + -1;
    for (loop_i_2 = loop_i + 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *str_ptr_2 = *str_ptr_3;
      str_ptr_3 = str_ptr_3 + 1;
      str_ptr_2 = str_ptr_2 + 1;
    }
  }
  *str_ptr_2 = '\0';
  str_ptr_2[1] = '\0';
  word_ptr_3 = *(uint **)(word_ptr + -4);
  *(char **)(word_ptr + -4) = str_ptr_2 + 1;
  *(uint *)(word_ptr + -8) = CONCAT22(0x3e,in_DS);
  g_data_00195900 = 0;
  do {
    if (((*word_ptr_3 | 0x20202020) == 0x37386f6e) && ((char)word_ptr_3[1] == '=')) {
      g_data_00195900 = g_data_00195900 + 1;
    }
    do {
      word_ptr_2 = word_ptr_3;
      word_ptr_3 = (uint *)((int)word_ptr_2 + 1);
    } while ((char)*word_ptr_2 != '\0');
  } while (*(char *)word_ptr_3 != '\0');
  word_ptr_3 = word_ptr_2 + 1;
  str_ptr_3 = str_ptr_2 + 1;
  do {
    loop_i = *word_ptr_3;
    g_data_001958e4 = str_ptr_3 + 1;
    *str_ptr_3 = (char)*word_ptr_3;
    word_ptr_3 = (uint *)((int)word_ptr_3 + 1);
    str_ptr_3 = g_data_001958e4;
  } while ((char)loop_i != '\0');
  g_data_001958dc = *(undefined4 *)(word_ptr + -4);
  loop_i = 0x2503c8;
  if (g_data_00195902 == '\x01') {
    loop_i = 0x1000;
  }
  word_ptr_4 = &g_data_001991a0;
  g_data_001958d0 = word_ptr;
  for (loop_i = loop_i >> 2; loop_i != 0; loop_i = loop_i - 1) {
    *word_ptr_4 = 0;
    word_ptr_4 = word_ptr_4 + 1;
  }
  for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
    *(undefined1 *)word_ptr_4 = 0;
    word_ptr_4 = (undefined4 *)((int)word_ptr_4 + 1);
  }
  g_data_001958d8 = &g_bss_003e9570;
  *(undefined4 *)(word_ptr + -4) = 0xf46d0;
  watcom_crt_fn_10ef10();
  *(undefined4 *)(word_ptr + -4) = 0xf46d7;
  uval = watcom_crt_fn_10eec1();
  *(undefined4 *)(word_ptr + -4) = uval;
  *(undefined4 *)(word_ptr + -8) = 0xf470c;
  watcom_crt_fn_10ef5b();
  str_ptr = (code *)swi(0x21);
  uval = (*str_ptr)();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f46d9 (Original VA: 0xf46d9, Ghidra: FUN_000f46d9)
 * Prototype: undefined4 bflib_system_io_fn_0f46d9(void);
 * Address  : 0xf46d9 (Size: 59 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f46d9
 * Callers  : 1 -> watcom_crt_fn_12070b
 * Callees  : 1 -> watcom_crt_fn_10ef5b
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f46d9(void)

{
  char ch;
  code *str_ptr;
  undefined4 uval;
  char *arg_edx;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  do {
    ch = *arg_edx;
    arg_edx = arg_edx + 1;
  } while (ch != '\0');
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  watcom_crt_fn_10ef5b();
  str_ptr = (code *)swi(0x21);
  uval = (*str_ptr)();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4714 (Original VA: 0xf4714, Ghidra: FUN_000f4714)
 * Prototype: void bflib_system_io_fn_0f4714(void);
 * Address  : 0xf4714 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4714
 * Callers  : 10 -> bflib_system_io_fn_0e88b2, bflib_system_io_fn_0ec068, bflib_system_io_fn_0f4ae0, watcom_crt_data_swpe_tab_110774, watcom_crt_fn_12531c, watcom_crt_fn_125348, watcom_crt_fn_125374, watcom_crt_fn_1253a0 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f4714(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f471f (Original VA: 0xf471f, Ghidra: FUN_000f471f)
 * Prototype: undefined8 bflib_system_io_fn_0f471f(void);
 * Address  : 0xf471f (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f471f
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bflib_system_io_fn_0f471f(void)

{
  char arg_dl;
  int unaff_EBP;
  longdouble val;
  
  *(char *)(unaff_EBP + -0x77) = *(char *)(unaff_EBP + -0x77) + arg_dl;
  in(0x50);
  val = (longdouble)
          watcom_crt_fn_10f15e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       unaff_EBP + -0x14);
  if (val < (longdouble)0) {
    *(double *)(unaff_EBP + -0x14) = *(double *)(unaff_EBP + -0x14) + g_data_0016f56c;
  }
  return CONCAT44(*(undefined4 *)(unaff_EBP + -0xc),*(undefined4 *)(unaff_EBP + -4));
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4720 (Original VA: 0xf4720, Ghidra: FUN_000f4720)
 * Prototype: undefined8 bflib_system_io_fn_0f4720(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf4720 (Size: 60 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4720
 * Callers  : 4 -> pom_fn_065864, pom_fn_0659ab, bflib_system_io_fn_0f475c, watcom_crt_fn_1208a5
 * Callees  : 1 -> watcom_crt_fn_10f15e
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bflib_system_io_fn_0f4720(undefined4 param_1,undefined4 param_2)

{
  undefined4 arg_eax;
  undefined4 arg_edx;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  local_10 = arg_edx;
  watcom_crt_fn_10f15e(param_1,param_2,local_18);
  return CONCAT44(local_10,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f475c (Original VA: 0xf475c, Ghidra: FUN_000f475c)
 * Prototype: undefined4 bflib_system_io_fn_0f475c(double param_1);
 * Address  : 0xf475c (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f475c
 * Callers  : 1 -> pom_fn_065864
 * Callees  : 1 -> bflib_system_io_fn_0f4720
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f475c(double param_1)

{
  undefined4 local_10;
  
  bflib_system_io_fn_0f4720();
  local_10 = SUB84(-param_1,0);
  return local_10;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4777 (Original VA: 0xf4777, Ghidra: FUN_000f4777)
 * Prototype: int bflib_system_io_fn_0f4777(void);
 * Address  : 0xf4777 (Size: 277 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4777
 * Callers  : 3 -> bflib_system_io_fn_0f488c, watcom_crt_fn_10ec34, watcom_crt_fn_11df04
 * Callees  : 1 -> watcom_crt_fn_10f177
 ******************************************************************************/
int bflib_system_io_fn_0f4777(void)

{
  ulonglong uval;
  int arg_eax;
  undefined4 *arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  int val;
  int arg_ebx;
  uint uval_2;
  uint uval_3;
  undefined **val_2;
  uint uval_4;
  undefined8 uval_5;
  
  if ((arg_edx < 0xa8c0) && (0 < arg_ebx)) {
    uval_3 = (arg_edx + 0x15180) - arg_ebx;
    uval_4 = (arg_eax + uval_3 / 0x15180) - 1;
  }
  else {
    uval_3 = arg_edx - arg_ebx;
    uval_4 = arg_eax + uval_3 / 0x15180;
  }
  arg_ecx[2] = (int)(((ulonglong)uval_3 % 0x15180) / 0xe10);
  uval = ((ulonglong)uval_3 % 0x15180) % 0xe10;
  arg_ecx[1] = (int)(uval / 0x3c);
  *arg_ecx = (int)(uval % 0x3c);
  uval_3 = uval_4 / 0x16e;
  uval_2 = uval_4 + uval_3 * -0x16d;
  if (uval_3 != 0) {
    uval_2 = uval_2 - (uval_3 - 1 >> 2);
  }
  uval_5 = watcom_crt_fn_10f177();
  val = (int)((ulonglong)uval_5 >> 0x20);
  uval_3 = (int)uval_5 + 0x16d;
  for (; uval_3 <= uval_2; uval_2 = uval_2 - uval_3) {
    val = val + 1;
  }
  val_2 = (undefined **)&g_data_00174858;
  *(int *)(extraout_ECX + 0x14) = val;
  *(uint *)(extraout_ECX + 0x1c) = uval_2;
  val = watcom_crt_fn_10f177();
  if (val != 0) {
    val_2 = &PTR_DAT_00174872;
  }
  uval_3 = uval_2 / 0x1f;
  if ((uint)(*(int *)((int)val_2 + uval_3 * 2) >> 0x10) <= uval_2) {
    uval_3 = uval_3 + 1;
  }
  *(uint *)(extraout_ECX_00 + 0x10) = uval_3;
  *(uint *)(extraout_ECX_00 + 0xc) = (uval_2 - (int)*(short *)((int)val_2 + uval_3 * 2)) + 1;
  *(uint *)(extraout_ECX_00 + 0x18) = (uval_4 + 1) % 7;
  return extraout_ECX_00;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f488c (Original VA: 0xf488c, Ghidra: FUN_000f488c)
 * Prototype: void bflib_system_io_fn_0f488c(void);
 * Address  : 0xf488c (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f488c
 * Callers  : 1 -> bflib_system_io_fn_0f48aa
 * Callees  : 1 -> bflib_system_io_fn_0f4777
 ******************************************************************************/
void bflib_system_io_fn_0f488c(void)

{
  int arg_edx;
  
  *(undefined4 *)(arg_edx + 0x20) = 0;
  bflib_system_io_fn_0f4777();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f48aa (Original VA: 0xf48aa, Ghidra: FUN_000f48aa)
 * Prototype: void bflib_system_io_fn_0f48aa(void);
 * Address  : 0xf48aa (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f48aa
 * Callers  : 1 -> pom_fn_065a61
 * Callees  : 1 -> bflib_system_io_fn_0f488c
 ******************************************************************************/
void bflib_system_io_fn_0f48aa(void)

{
  bflib_system_io_fn_0f488c();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f48c0 (Original VA: 0xf48c0, Ghidra: FUN_000f48c0)
 * Prototype: undefined4 bflib_system_io_fn_0f48c0(void);
 * Address  : 0xf48c0 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f48c0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f48c0(void)

{
  if ((g_bss_003df158 == 0) && (g_bss_003df15c == 0)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4908 (Original VA: 0xf4908, Ghidra: FUN_000f4908)
 * Prototype: undefined8 bflib_system_io_fn_0f4908(void);
 * Address  : 0xf4908 (Size: 87 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4908
 * Callers  : 1 -> setup_verify_cdrom_installation
 * Callees  : 3 -> LbScreenWaitVbi, watcom_crt_fn_10f5be, watcom_crt_fn_10f5f0
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f4908(void)

{
  undefined4 arg_edx;
  undefined6 uval;
  
  if ((g_bss_003df158 == 0) && (g_bss_003df15c == 0)) {
    LbScreenWaitVbi();
    uval = watcom_crt_fn_10f5be();
    g_bss_003df15c = (short)((uint6)uval >> 0x20);
    g_bss_003df158 = (int)uval;
    watcom_crt_fn_10f5f0();
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4960 (Original VA: 0xf4960, Ghidra: FUN_000f4960)
 * Prototype: undefined4 bflib_system_io_fn_0f4960(void);
 * Address  : 0xf4960 (Size: 69 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4960
 * Callers  : 1 -> setup_shutdown_video_and_audio
 * Callees  : 1 -> watcom_crt_fn_10f5f0
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f4960(void)

{
  if ((g_bss_003df158 != 0) || (g_bss_003df15c != 0)) {
    watcom_crt_fn_10f5f0();
    g_bss_003df15c = 0;
    g_bss_003df158 = 0;
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f49a8 (Original VA: 0xf49a8, Ghidra: FUN_000f49a8)
 * Prototype: void bflib_system_io_fn_0f49a8(void);
 * Address  : 0xf49a8 (Size: 102 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f49a8
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
void bflib_system_io_fn_0f49a8(void)

{
  code *str_ptr;
  undefined1 extraout_AH;
  bool flag;
  byte local_24;
  
  bflib_system_io_fn_0f7786();
  g_bss_003db600 = (local_24 & 3) != 0;
  if ((local_24 & 4) != 0) {
    g_bss_003db600 = g_bss_003db600 | 2;
  }
  if ((local_24 & 8) != 0) {
    g_bss_003db600 = g_bss_003db600 | 4;
  }
  flag = true;
  g_bss_003db5fc = 0;
  str_ptr = (code *)swi(0x16);
  (*str_ptr)();
  if (!flag) {
    str_ptr = (code *)swi(0x16);
    (*str_ptr)();
    g_bss_003db5fc = extraout_AH;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4a30 (Original VA: 0xf4a30, Ghidra: FUN_000f4a30)
 * Prototype: undefined8 bflib_system_io_fn_0f4a30(void);
 * Address  : 0xf4a30 (Size: 174 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4a30
 * Callers  : 1 -> bflib_system_io_fn_0f4ae0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f4a30(void)

{
  uint arg_eax;
  undefined4 arg_edx;
  
  if (arg_eax == 0x2b) {
    arg_eax = 0x56;
  }
  else {
    switch(g_data_00195558) {
    case 2:
      if (0x26 < arg_eax) {
        if (arg_eax < 0x28) {
          return CONCAT44(arg_edx,0x32);
        }
        if (arg_eax < 0x32) {
          if (arg_eax != 0x2c) {
            return CONCAT44(arg_edx,arg_eax);
          }
          return CONCAT44(arg_edx,0x11);
        }
        if (arg_eax < 0x33) {
          return CONCAT44(arg_edx,0x33);
        }
        if (arg_eax != 0x33) {
          return CONCAT44(arg_edx,arg_eax);
        }
        return CONCAT44(arg_edx,0x27);
      }
      if (arg_eax < 0x11) {
        if (arg_eax != 0x10) {
          return CONCAT44(arg_edx,arg_eax);
        }
        return CONCAT44(arg_edx,0x1e);
      }
      if (0x11 < arg_eax) {
        if (arg_eax != 0x1e) {
          return CONCAT44(arg_edx,arg_eax);
        }
        return CONCAT44(arg_edx,0x10);
      }
LAB_000f4a4f:
      return CONCAT44(arg_edx,0x2c);
    case 3:
      if (0x14 < arg_eax) {
        if (0x15 < arg_eax) {
          if (arg_eax != 0x2c) {
            return CONCAT44(arg_edx,arg_eax);
          }
LAB_000f4aa3:
          return CONCAT44(arg_edx,0x15);
        }
        goto LAB_000f4a4f;
      }
      break;
    case 7:
      if (0x14 < arg_eax) {
        if (0x15 < arg_eax) {
          if (arg_eax != 0x2c) {
            return CONCAT44(arg_edx,arg_eax);
          }
          goto LAB_000f4aa3;
        }
        goto LAB_000f4a4f;
      }
    }
  }
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4ae0 (Original VA: 0xf4ae0, Ghidra: FUN_000f4ae0)
 * Prototype: undefined8 bflib_system_io_fn_0f4ae0(void);
 * Address  : 0xf4ae0 (Size: 394 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4ae0
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0f4714, bflib_system_io_fn_0f4a30
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f4ae0(void)

{
  byte flag;
  undefined4 arg_eax;
  uint uval;
  undefined4 arg_edx;
  int extraout_EDX;
  
  bflib_system_io_fn_0f4714();
  g_bss_003db5fc = in(0x60);
  if (g_bss_003df154 == -0x20) {
    g_bss_003db4f8 = 1;
    if ((g_bss_003db5fc == 0x2a) || (g_bss_003db5fc == 0xaa)) {
      g_bss_003db5fc = 0x80;
    }
    else {
      uval = bflib_system_io_fn_0f4a30();
      (&g_bss_003db4fc)[uval & 0xffff] = g_bss_003db5fc < 0x80;
    }
  }
  else {
    g_bss_003db4f8 = 0;
    uval = bflib_system_io_fn_0f4a30();
    (&g_bss_003db4fc)[uval & 0xffff] = g_bss_003db5fc < 0x80;
  }
  g_bss_003df154 = g_bss_003db5fc;
  g_bss_003db5fc = bflib_system_io_fn_0f4a30();
  g_bss_003db5fd = 0;
  if ((g_bss_003db526 != '\0') || (g_bss_003db532 != '\0')) {
    g_bss_003db5fd = 0x10;
  }
  if ((g_bss_003db519 != '\0') || (g_bss_003db599 != '\0')) {
    g_bss_003db5fd = g_bss_003db5fd | 0x20;
  }
  if ((g_bss_003db534 != '\0') || (g_bss_003db5b4 != '\0')) {
    g_bss_003db5fd = g_bss_003db5fd | 0x40;
  }
  if ((&g_bss_003db4fc)[extraout_EDX] != '\0') {
    (&g_bss_003db4fc)[extraout_EDX] = (&g_bss_003db4fc)[extraout_EDX] | g_bss_003db5fd;
  }
  flag = in(0x61);
  out(0x61,flag | 0x80);
  out(0x61,flag);
  if ((g_bss_003db5fc < 0x80) && (g_bss_003db5fe == 0)) {
    g_bss_003db5fe = g_bss_003db5fc;
    g_bss_003db5ff = g_bss_003db5fd;
  }
  out(0x20,0x20);
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4c6c (Original VA: 0xf4c6c, Ghidra: FUN_000f4c6c)
 * Prototype: void bflib_system_io_fn_0f4c6c(void);
 * Address  : 0xf4c6c (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4c6c
 * Callers  : 1 -> setup_shutdown_video_and_audio
 * Callees  : 4 -> bflib_system_io_fn_0ea9f9, bflib_system_io_fn_0eca60, watcom_crt_fn_10f620, watcom_crt_fn_10f6c8
 ******************************************************************************/
void bflib_system_io_fn_0f4c6c(void)

{
  if (g_bss_003db694 != '\0') {
    bflib_system_io_fn_0ea9f9();
  }
  bflib_system_io_fn_0eca60();
  watcom_crt_fn_10f620();
  watcom_crt_fn_10f6c8();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4c89 (Original VA: 0xf4c89, Ghidra: FUN_000f4c89)
 * Prototype: void bflib_system_io_fn_0f4c89(void);
 * Address  : 0xf4c89 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4c89
 * Callers  : 2 -> bflib_system_io_fn_0f4c8a, bflib_system_io_fn_0f4ca2
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f4c89(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4c8a (Original VA: 0xf4c8a, Ghidra: FUN_000f4c8a)
 * Prototype: void bflib_system_io_fn_0f4c8a(void);
 * Address  : 0xf4c8a (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4c8a
 * Callers  : 2 -> setup_load_text_strings_dat, watcom_crt_fn_10eec1
 * Callees  : 2 -> bflib_system_io_fn_0f4c89, bflib_system_io_fn_0f4ca2
 ******************************************************************************/
void bflib_system_io_fn_0f4c8a(void)

{
  (*(code *)PTR_FUN_000f4c89_001955c8)();
  (*(code *)PTR_FUN_000f4c89_001955cc)();
  bflib_system_io_fn_0f4ca2();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4ca2 (Original VA: 0xf4ca2, Ghidra: FUN_000f4ca2)
 * Prototype: undefined4 bflib_system_io_fn_0f4ca2(void);
 * Address  : 0xf4ca2 (Size: 22 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4ca2
 * Callers  : 1 -> bflib_system_io_fn_0f4c8a
 * Callees  : 1 -> bflib_system_io_fn_0f4c89
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f4ca2(void)

{
  code *str_ptr;
  undefined4 uval;
  undefined4 extraout_EDX;
  
  (*(code *)PTR_FUN_000f4c89_001955cc)();
  (*(code *)PTR_FUN_000f4c89_001955d0)();
  watcom_crt_fn_10ef5b(extraout_EDX);
  str_ptr = (code *)swi(0x21);
  uval = (*str_ptr)();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4cb8 (Original VA: 0xf4cb8, Ghidra: FUN_000f4cb8)
 * Prototype: undefined8 bflib_system_io_fn_0f4cb8(void);
 * Address  : 0xf4cb8 (Size: 227 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4cb8
 * Callers  : 9 -> setup_init_mouse_and_pointer, bflib_system_io_fn_0e9594, bflib_system_io_fn_0f87a3, bflib_system_io_fn_0f8c47, bflib_system_io_fn_0fed8f, watcom_crt_fn_10efaa, watcom_crt_fn_10fe9e, watcom_crt_enough_memory_allocate_file_113903 ...
 * Callees  : 3 -> watcom_crt_fn_10f72e, watcom_crt_fn_10fcd2, watcom_crt_fn_10fe9b
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f4cb8(void)

{
  bool flag;
  uint arg_eax;
  int val;
  uint uval;
  int extraout_ECX;
  undefined4 arg_edx;
  uint uval_2;
  undefined8 uval_3;
  
  if ((arg_eax == 0) || (0xffffffd4 < arg_eax)) {
    val = 0;
  }
  else {
    flag = false;
    uval_2 = arg_eax + 3 & 0xfffffffc;
    while( true ) {
      while( true ) {
        uval = uval_2;
        if (uval_2 < 0xc) {
          uval = 0xc;
        }
        if ((uval <= g_data_001955dc) || (val = g_data_001955d8, g_data_001955d8 == 0)) {
          g_data_001955dc = 0;
          val = g_data_001955d4;
        }
        while (val != 0) {
          g_data_001955d8 = val;
          val = watcom_crt_fn_10f72e();
          if (val != 0) goto LAB_000f4d82;
          if (g_data_001955dc < *(uint *)(extraout_ECX + 0x14)) {
            g_data_001955dc = *(uint *)(extraout_ECX + 0x14);
          }
          val = *(int *)(extraout_ECX + 8);
        }
        if ((flag) || (val = watcom_crt_fn_10fcd2(), val == 0)) break;
        flag = true;
      }
      uval_3 = watcom_crt_fn_10fe9b();
      val = (int)((ulonglong)uval_3 >> 0x20);
      if ((int)uval_3 == 0) break;
      flag = false;
    }
LAB_000f4d82:
    g_bss_003e0324 = 0;
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4d9b (Original VA: 0xf4d9b, Ghidra: FUN_000f4d9b)
 * Prototype: void bflib_system_io_fn_0f4d9b(void);
 * Address  : 0xf4d9b (Size: 130 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4d9b
 * Callers  : 8 -> setup_init_mouse_and_pointer, bflib_system_io_fn_0e9670, bflib_system_io_fn_0ea15f, bflib_system_io_fn_0f8882, bflib_system_io_fn_0feda2, watcom_crt_fn_10fc22, watcom_crt_fn_10fcd2, watcom_crt_fn_12673f
 * Callees  : 1 -> watcom_crt_fn_10f7d6
 ******************************************************************************/
void bflib_system_io_fn_0f4d9b(void)

{
  uint arg_eax;
  uint uval;
  uint extraout_ECX;
  
  if (arg_eax != 0) {
    uval = g_data_001955d4;
    if (((g_bss_003df160 == 0) || (arg_eax < g_bss_003df160)) || (*(uint *)(g_bss_003df160 + 8) <= arg_eax))
    {
      for (; (*(uint *)(uval + 8) != 0 && ((arg_eax < uval || (*(uint *)(uval + 8) <= arg_eax))));
          uval = *(uint *)(uval + 8)) {
      }
    }
    watcom_crt_fn_10f7d6();
    if ((extraout_ECX < g_data_001955d8) && (g_data_001955dc < *(uint *)(extraout_ECX + 0x14))) {
      g_data_001955dc = *(uint *)(extraout_ECX + 0x14);
    }
    g_bss_003e0324 = 0;
    g_bss_003df160 = extraout_ECX;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f4e20 (Original VA: 0xf4e20, Ghidra: FUN_000f4e20)
 * Prototype: undefined4 bflib_system_io_fn_0f4e20(void);
 * Address  : 0xf4e20 (Size: 180 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f4e20
 * Callers  : 4 -> sndheap_fn_06dfd3, sndheap_trying_use_two_sound_06e09b, sound3d_fn_06f8fd, sound3d_attempt_query_sample_06f98e
 * Callees  : 1 -> bflib_sound_AIL_sample_status_0fac8f
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f4e20(void)

{
  int arg_eax;
  int val;
  short arg_dx;
  undefined4 *loop_i;
  
  if (((g_bss_003df514 != '\0') && (g_data_00195d18 != '\0')) && (g_data_00195d1a != '\0')) {
    if ((arg_dx == 0) && (arg_eax == 0)) {
      val = bflib_sound_AIL_sample_status_0fac8f();
      if (val == 4) {
        return 1;
      }
    }
    else if (arg_dx == 0) {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510;
          loop_i = (undefined4 *)((int)loop_i + 0x1d)) {
        if ((arg_eax == *(int *)((int)loop_i + 0xe)) && (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4))
        {
          return 1;
        }
      }
    }
    else {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510;
          loop_i = (undefined4 *)((int)loop_i + 0x1d)) {
        if (((arg_eax == *(int *)((int)loop_i + 0xe)) && (arg_dx == *(short *)((int)loop_i + 0x12)))
           && (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_playsadd_id_num_vol_0f4ed4 (Original VA: 0xf4ed4, Ghidra: FUN_000f4ed4)
 * Prototype: int * bflib_system_io_playsadd_id_num_vol_0f4ed4(ushort param_1,char param_2,undefined4 param_3,int param_4,int param_5);
 * Address  : 0xf4ed4 (Size: 657 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'PLAYSADD    id-%08d    num-%03d    vol-%03d    pan-%03d    p'
 * Callers  : 1 -> sndheap_trying_use_two_sound_06e159
 * Callees  : 10 -> dk_sprintf, bflib_system_io_fn_0f9610, bflib_sound_AIL_init_sample_0fa77e, bflib_sound_AIL_set_sample_file_0fa7dc, bflib_sound_AIL_start_sample_0fa91d, bflib_sound_AIL_set_sample_playback_rate_0faa95, bflib_sound_AIL_set_sample_volume_0faaf9, bflib_sound_AIL_set_sample_pan_0fab5d ...
 ******************************************************************************/
int * bflib_system_io_playsadd_id_num_vol_0f4ed4(ushort param_1,char param_2,undefined4 param_3,int param_4,int param_5)

{
  bool flag;
  int arg_eax;
  int val;
  undefined4 arg_ecx;
  byte extraout_DL;
  short arg_dx;
  int arg_ebx;
  int *loop_i;
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (g_bss_003df514 == '\0') {
    return (int *)0x0;
  }
  if (g_data_00195d18 == '\0') {
    return (int *)0x0;
  }
  if (g_data_00195d1a == '\0') {
    return (int *)0x0;
  }
  if (param_5 == 0xff) {
    return (int *)0x0;
  }
  dk_sprintf(&g_sound_driver_ready,s_PLAYSADD_id__08d_num__03d_vol__0_0016f574);
  bflib_system_io_fn_0f9610();
  if (extraout_DL < 2) {
    if (extraout_DL == 1) {
      for (loop_i = &g_bss_003df170; unaff_ESI = (int *)0x0, loop_i <= g_bss_003df510;
          loop_i = (int *)((int)loop_i + 0x1d)) {
        val = bflib_sound_AIL_sample_status_0fac8f(*loop_i);
        if (val == 2) goto LAB_000f4f43;
      }
    }
  }
  else if (extraout_DL < 3) {
    loop_i = &g_bss_003df170;
    while ((unaff_EDI = (int *)0x0, loop_i <= g_bss_003df510 &&
           (((*(int *)((int)loop_i + 0xe) != arg_eax || (*(short *)((int)loop_i + 0x12) != arg_dx)) ||
            (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), unaff_EDI = loop_i, val == 2))))) {
      loop_i = (int *)((int)loop_i + 0x1d);
    }
    if (unaff_EDI == (int *)0x0) {
      loop_i = &g_bss_003df170;
      while ((unaff_ESI = (int *)0x0, loop_i <= g_bss_003df510 &&
             (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), unaff_ESI = loop_i, val != 2))) {
        loop_i = (int *)((int)loop_i + 0x1d);
      }
    }
  }
  else if (extraout_DL == 3) {
    flag = false;
    for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (int *)((int)loop_i + 0x1d)) {
      if ((*(int *)((int)loop_i + 0xe) == arg_eax) && (*(short *)((int)loop_i + 0x12) == arg_dx)) {
        flag = true;
        unaff_EDI = (int *)0x0;
        unaff_ESI = loop_i;
        break;
      }
    }
    if ((!flag) && (param_5 != 0)) {
      for (loop_i = &g_bss_003df170; unaff_ESI = (int *)0x0, loop_i <= g_bss_003df510;
          loop_i = (int *)((int)loop_i + 0x1d)) {
        if ((*(int *)((int)loop_i + 0xe) == arg_eax) && (*(int *)((int)loop_i + 0x19) == param_5)) {
          flag = true;
          unaff_EDI = (int *)0x0;
          unaff_ESI = loop_i;
          break;
        }
      }
    }
    if (!flag) {
      for (loop_i = &g_bss_003df170; unaff_ESI = (int *)0x0, loop_i <= g_bss_003df510;
          loop_i = (int *)((int)loop_i + 0x1d)) {
        val = bflib_sound_AIL_sample_status_0fac8f(*loop_i);
        if (val == 2) goto LAB_000f4f43;
      }
    }
  }
LAB_000f509a:
  if (((unaff_ESI != (int *)0x0) && (unaff_EDI == (int *)0x0)) &&
     (bflib_sound_AIL_init_sample_0fa77e(*unaff_ESI), param_4 != 0)) {
    bflib_sound_AIL_set_sample_file_0fa7dc(*unaff_ESI,param_4,1);
    bflib_sound_AIL_set_sample_volume_0faaf9(*unaff_ESI,arg_ebx);
    if (g_data_00195d1c != '\0') {
      bflib_sound_AIL_set_sample_pan_0fab5d(*unaff_ESI,arg_ecx);
    }
    if (param_1 != 100) {
      bflib_sound_AIL_set_sample_playback_rate_0faa95(*unaff_ESI,(int)((uint)param_1 * *(int *)(*unaff_ESI + 0x4c)) / 100);
    }
    bflib_sound_AIL_set_sample_loop_count_0fabc1(*unaff_ESI,param_2 + 1);
    bflib_sound_AIL_start_sample_0fa91d(*unaff_ESI);
    *(int *)((int)unaff_ESI + 0xe) = arg_eax;
    *(short *)((int)unaff_ESI + 0x12) = arg_dx;
    unaff_ESI[1] = arg_ebx;
    *(short *)((int)unaff_ESI + 10) = (short)arg_ecx;
    *(ushort *)(unaff_ESI + 2) = param_1;
    *(undefined1 *)(unaff_ESI + 5) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x15) = 0;
    *(undefined1 *)((int)unaff_ESI + 0x17) = 0;
    *(int *)((int)unaff_ESI + 0x19) = param_5;
    return unaff_ESI;
  }
  return (int *)0x0;
LAB_000f4f43:
  unaff_EDI = (int *)0x0;
  unaff_ESI = loop_i;
  goto LAB_000f509a;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f5168 (Original VA: 0xf5168, Ghidra: FUN_000f5168)
 * Prototype: void bflib_system_io_fn_0f5168(void);
 * Address  : 0xf5168 (Size: 192 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f5168
 * Callers  : 1 -> sound3d_fn_06fca5
 * Callees  : 2 -> bflib_sound_AIL_set_sample_pan_0fab5d, bflib_sound_AIL_sample_status_0fac8f
 ******************************************************************************/
void bflib_system_io_fn_0f5168(void)

{
  int arg_eax;
  int val;
  int arg_ecx;
  short arg_dx;
  short arg_bx;
  int *loop_i;
  
  if (((g_bss_003df514 != '\0') && (g_data_00195d18 != '\0')) && (g_data_00195d1a != '\0')) {
    if ((arg_dx == 0) && (arg_eax == 0)) {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (int *)((int)loop_i + 0x1d)) {
        if (((*loop_i == arg_ecx) && (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4)) &&
           (arg_bx != *(short *)((int)loop_i + 10))) {
LAB_000f5212:
          bflib_sound_AIL_set_sample_pan_0fab5d(*loop_i,arg_bx);
          *(short *)((int)loop_i + 10) = arg_bx;
          return;
        }
      }
    }
    else {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (int *)((int)loop_i + 0x1d)) {
        if (((*(int *)((int)loop_i + 0xe) == arg_eax) && (arg_dx == *(short *)((int)loop_i + 0x12)))
           && ((val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4 &&
               (arg_bx != *(short *)((int)loop_i + 10))))) goto LAB_000f5212;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f5228 (Original VA: 0xf5228, Ghidra: FUN_000f5228)
 * Prototype: void bflib_system_io_fn_0f5228(void);
 * Address  : 0xf5228 (Size: 222 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f5228
 * Callers  : 1 -> sound3d_fn_06fca5
 * Callees  : 2 -> bflib_sound_AIL_set_sample_playback_rate_0faa95, bflib_sound_AIL_sample_status_0fac8f
 ******************************************************************************/
void bflib_system_io_fn_0f5228(void)

{
  int arg_eax;
  int val;
  int arg_ecx;
  short arg_dx;
  short arg_bx;
  int *loop_i;
  
  if (((g_bss_003df514 != '\0') && (g_data_00195d18 != '\0')) && (g_data_00195d1a != '\0')) {
    if ((arg_dx == 0) && (arg_eax == 0)) {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (int *)((int)loop_i + 0x1d)) {
        if ((((*loop_i == arg_ecx) && (val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4)) && (0 < arg_bx))
           && ((uint)*(ushort *)(loop_i + 2) != (int)arg_bx)) {
LAB_000f52e4:
          bflib_sound_AIL_set_sample_playback_rate_0faa95(*loop_i,(arg_bx * g_bss_003df52b) / 100);
          *(short *)(loop_i + 2) = arg_bx;
          return;
        }
      }
    }
    else {
      for (loop_i = &g_bss_003df170; loop_i <= g_bss_003df510; loop_i = (int *)((int)loop_i + 0x1d)) {
        if (((*(int *)((int)loop_i + 0xe) == arg_eax) && (arg_dx == *(short *)((int)loop_i + 0x12)))
           && ((val = bflib_sound_AIL_sample_status_0fac8f(*loop_i), val == 4 &&
               ((0 < arg_bx && ((uint)*(ushort *)(loop_i + 2) != (int)arg_bx))))))
        goto LAB_000f52e4;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f532b (Original VA: 0xf532b, Ghidra: FUN_000f532b)
 * Prototype: void bflib_system_io_fn_0f532b(void);
 * Address  : 0xf532b (Size: 74 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f532b
 * Callers  : 1 -> bflib_system_io_fn_0f5375
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f532b(void)

{
  char ch;
  uint arg_eax;
  uint uval;
  char *str_ptr;
  char *arg_edx;
  uint arg_ebx;
  char local_37 [35];
  
  str_ptr = local_37;
  do {
    uval = arg_eax / arg_ebx;
    *str_ptr = "0123456789abcdefghijklmnopqrstuvwxyz"[arg_eax % arg_ebx];
    str_ptr = str_ptr + 1;
    arg_eax = uval;
  } while (uval != 0);
  do {
    str_ptr = str_ptr + -1;
    ch = *str_ptr;
    *arg_edx = ch;
    arg_edx = arg_edx + 1;
  } while (ch != '\0');
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f5375 (Original VA: 0xf5375, Ghidra: FUN_000f5375)
 * Prototype: undefined4 bflib_system_io_fn_0f5375(void);
 * Address  : 0xf5375 (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f5375
 * Callers  : 4 -> command_script_unexpected_07909c, bflib_system_io_fn_0f7123, bflib_system_io_fn_0f7181, bflib_system_io_fn_0f727d
 * Callees  : 1 -> bflib_system_io_fn_0f532b
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f5375(void)

{
  int arg_eax;
  undefined4 extraout_ECX;
  undefined1 *arg_edx;
  int arg_ebx;
  
  if ((arg_ebx == 10) && (arg_eax < 0)) {
    *arg_edx = 0x2d;
  }
  bflib_system_io_fn_0f532b();
  return extraout_ECX;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f5390 (Original VA: 0xf5390, Ghidra: FUN_000f5390)
 * Prototype: undefined8 bflib_system_io_fn_0f5390(void);
 * Address  : 0xf5390 (Size: 53 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f5390
 * Callers  : 3 -> draw_update_slab_subtile_columns_088698, draw_fn_08de90, draw_update_player_view_state_090c14
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f5390(void)

{
  int arg_eax;
  int arg_edx;
  undefined1 arg_bl;
  
  *(undefined1 *)(arg_edx * g_screen_pitch + arg_eax + g_display_bss_003d9824) = arg_bl;
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f53c5 (Original VA: 0xf53c5, Ghidra: FUN_000f53c5)
 * Prototype: undefined8 bflib_system_io_fn_0f53c5(void);
 * Address  : 0xf53c5 (Size: 141 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f53c5
 * Callers  : 1 -> bflib_system_io_fn_0f5460
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f53c5(void)

{
  int arg_eax;
  int arg_edx;
  undefined1 arg_bl;
  undefined1 *word_ptr;
  
  if ((((-1 < arg_eax) && (arg_eax < g_display_bss_003d9844)) && (-1 < arg_edx)) && (arg_edx < g_display_bss_003d9848)) {
    word_ptr = (undefined1 *)(arg_eax + arg_edx * g_screen_pitch + g_display_bss_003d9824);
    if ((g_lb_display_draw_flags & 4) == 0) {
      if ((g_lb_display_draw_flags & 8) == 0) {
        *word_ptr = arg_bl;
      }
      else {
        *word_ptr = *(undefined1 *)((uint)CONCAT11(*word_ptr,arg_bl) + g_display_bss_003d981c);
      }
    }
    else {
      *word_ptr = *(undefined1 *)((uint)CONCAT11(arg_bl,*word_ptr) + g_display_bss_003d981c);
    }
  }
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f5460 (Original VA: 0xf5460, Ghidra: FUN_000f5460)
 * Prototype: undefined4 bflib_system_io_fn_0f5460(void);
 * Address  : 0xf5460 (Size: 5352 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f5460
 * Callers  : 1 -> draw_update_slab_subtile_columns_088698
 * Callees  : 2 -> bflib_system_io_fn_0f53c5, bflib_system_io_fn_0f6a84
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f5460(void)

{
  int arg_eax;
  int val;
  undefined4 uval;
  byte arg_cl;
  int arg_edx;
  int val_2;
  uint arg_ebx;
  int val_3;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  int val_4;
  int val_5;
  int val_6;
  byte *byte_ptr;
  uint uval_2;
  int local_68;
  int local_64;
  int local_60;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  
  if (((byte)g_lb_display_draw_flags & 0x10) == 0) {
    if (arg_ebx == 0) {
      local_44 = 0xf66e2;
      bflib_system_io_fn_0f53c5();
    }
    else {
      if (arg_ebx == 1) {
        local_44 = 0xf66f5;
        bflib_system_io_fn_0f53c5();
        local_44 = 0xf6705;
        bflib_system_io_fn_0f53c5();
        local_44 = 0xf6715;
        bflib_system_io_fn_0f53c5();
        local_44 = 0xf6725;
        bflib_system_io_fn_0f53c5();
        local_44 = 0xf6734;
        bflib_system_io_fn_0f53c5();
        return 1;
      }
      uval_2 = (uint)arg_cl;
      word_ptr_2 = &local_44;
      local_1c = arg_ebx * -2 + 3;
      local_48 = 0xf6777;
      local_44 = uval_2;
      bflib_system_io_fn_0f6a84();
      if (local_20 < 0) {
        local_20 = local_20 + 6;
      }
      else {
        local_4c = 0xf679c;
        local_48 = uval_2;
        bflib_system_io_fn_0f6a84();
        word_ptr_2 = &local_4c;
        local_4c = uval_2;
        bflib_system_io_fn_0f6a84();
        local_24 = arg_ebx - 1;
        local_28 = arg_ebx * -4 + local_28 + 10;
      }
      val_5 = *(int *)((int)word_ptr_2 + 0x2c);
      *(int *)((int)word_ptr_2 + 0x18) = *(int *)((int)word_ptr_2 + 0x28);
      *(int *)((int)word_ptr_2 + 0x2c) = val_5 + 1;
      *(int *)((int)word_ptr_2 + 0x14) = val_5 + 1;
      *(int *)((int)word_ptr_2 + 0x10) = *(int *)((int)word_ptr_2 + 0x2c) << 2;
      *(int *)((int)word_ptr_2 + 0x1c) = *(int *)((int)word_ptr_2 + 0xc) - *(int *)((int)word_ptr_2 + 0x28);
      word_ptr = (undefined1 *)word_ptr_2;
      if (*(int *)((int)word_ptr_2 + 0x2c) < *(int *)((int)word_ptr_2 + 0x28)) {
        do {
          *(uint *)(word_ptr + -4) = (uint)(byte)word_ptr[0x30];
          *(uint *)(word_ptr + 0x20) = (uint)(byte)word_ptr[0x30];
          *(undefined4 *)(word_ptr + -8) = 0xf6837;
          bflib_system_io_fn_0f6a84();
          word_ptr_2 = (uint *)(word_ptr + -8);
          *(undefined4 *)(word_ptr + -8) = *(undefined4 *)(word_ptr + 0x1c);
          *(undefined4 *)(word_ptr + -0xc) = 0xf684b;
          bflib_system_io_fn_0f6a84();
          if (*(int *)(word_ptr + 0x1c) < 0) {
            *(int *)(word_ptr + 0x1c) = *(int *)(word_ptr + 0x1c) + 6 + *(int *)(word_ptr + 8);
          }
          else {
            *(undefined4 *)(word_ptr + -0xc) = *(undefined4 *)(word_ptr + 0x18);
            *(int *)(word_ptr + -8) = *(int *)(word_ptr + 4) + *(int *)(word_ptr + 0xc);
            *(int *)(word_ptr + -4) = *(int *)(word_ptr + 4) - *(int *)(word_ptr + 0xc);
            *(undefined4 *)(word_ptr + -0x10) = 0xf6893;
            bflib_system_io_fn_0f6a84();
            word_ptr_2 = (uint *)(word_ptr + -0x10);
            *(undefined4 *)(word_ptr + -0x10) = *(undefined4 *)(word_ptr + 0x14);
            *(undefined4 *)(word_ptr + -0x14) = 0xf68b0;
            bflib_system_io_fn_0f6a84();
            *(int *)(word_ptr + 0x14) =
                 (*(int *)(word_ptr + 0x1c) - *(int *)(word_ptr + 0x18)) * 4 + *(int *)(word_ptr + 0x14) +
                 10;
            *(int *)(word_ptr + 0xc) = *(int *)(word_ptr + 0xc) + 1;
            *(int *)(word_ptr + 0x18) = *(int *)(word_ptr + 0x18) + -1;
          }
          val_5 = *(int *)((int)word_ptr_2 + 0x2c) + 1;
          *(int *)((int)word_ptr_2 + 0x10) = *(int *)((int)word_ptr_2 + 0x10) + 4;
          *(int *)((int)word_ptr_2 + 0x2c) = val_5;
          *(int *)((int)word_ptr_2 + 0x14) = val_5;
          *(int *)((int)word_ptr_2 + 0x18) = *(int *)((int)word_ptr_2 + 0x28);
          word_ptr = (undefined1 *)word_ptr_2;
        } while (val_5 < *(int *)((int)word_ptr_2 + 0x28));
      }
      if (word_ptr_2[0xb] == word_ptr_2[10]) {
        uval = CONCAT31((uint3)(word_ptr_2[0xb] >> 8) ^ (uint3)(word_ptr_2[10] >> 8),
                         *(undefined1 *)(word_ptr_2 + 0xc));
        word_ptr_2[-1] = uval;
        word_ptr_2[1] = uval;
        word_ptr_2[-2] = 0xf692b;
        bflib_system_io_fn_0f6a84();
        word_ptr_2[-2] = *word_ptr_2;
        word_ptr_2[-3] = 0xf693f;
        bflib_system_io_fn_0f6a84();
      }
    }
    return 1;
  }
  local_44 = arg_ebx * -2 + 3;
  val_2 = arg_edx * g_screen_pitch + arg_eax;
  local_38 = arg_eax + arg_ebx;
  val_5 = arg_edx + arg_ebx;
  if (((byte)g_lb_display_draw_flags & 4) == 0) {
    if (((byte)g_lb_display_draw_flags & 8) == 0) {
      if (arg_ebx < 2) {
        if (((-1 < arg_eax) && (arg_eax < g_display_bss_003d9844)) && ((-1 < arg_edx && (arg_edx < g_display_bss_003d9848)))
           ) {
          *(byte *)(val_2 + g_display_bss_003d9824) = arg_cl;
          return 1;
        }
      }
      else {
        local_48 = 0;
        local_20 = -arg_ebx + arg_eax;
        val_2 = -arg_ebx + arg_edx;
        local_64 = 0;
        val = arg_eax;
        val_3 = arg_edx;
        val_6 = arg_edx;
        local_1c = arg_eax;
        while( true ) {
          val_4 = g_screen_pitch * val_2 + val;
          if ((int)arg_ebx <= (int)local_48) break;
          if (((-1 < val) && (val < g_display_bss_003d9844)) && ((-1 < val_2 && (val_2 < g_display_bss_003d9848))))
          {
            *(byte *)(g_display_bss_003d9824 + val_4) = arg_cl;
          }
          if ((((-1 < local_1c) && (local_1c < g_display_bss_003d9844)) && (-1 < val_2)) &&
             (val_2 < g_display_bss_003d9848)) {
            *(byte *)(g_display_bss_003d9824 + g_screen_pitch * val_2 + local_1c) = arg_cl;
          }
          if (((-1 < val) && (val < g_display_bss_003d9844)) && ((-1 < val_5 && (val_5 < g_display_bss_003d9848))))
          {
            *(byte *)(g_display_bss_003d9824 + g_screen_pitch * val_5 + val) = arg_cl;
          }
          if (((-1 < local_1c) && (local_1c < g_display_bss_003d9844)) &&
             ((-1 < val_5 && (val_5 < g_display_bss_003d9848)))) {
            *(byte *)(g_display_bss_003d9824 + g_screen_pitch * val_5 + local_1c) = arg_cl;
          }
          if ((((-1 < local_20) && (local_20 < g_display_bss_003d9844)) && (-1 < val_3)) &&
             (val_3 < g_display_bss_003d9848)) {
            *(byte *)(g_display_bss_003d9824 + g_screen_pitch * val_3 + local_20) = arg_cl;
          }
          if (((-1 < local_38) && (local_38 < g_display_bss_003d9844)) &&
             ((-1 < val_3 && (val_3 < g_display_bss_003d9848)))) {
            *(byte *)(g_display_bss_003d9824 + g_screen_pitch * val_3 + local_38) = arg_cl;
          }
          if (((-1 < local_20) && (local_20 < g_display_bss_003d9844)) &&
             ((-1 < val_6 && (val_6 < g_display_bss_003d9848)))) {
            *(byte *)(g_display_bss_003d9824 + g_screen_pitch * val_6 + local_20) = arg_cl;
          }
          if ((((-1 < local_38) && (local_38 < g_display_bss_003d9844)) && (-1 < val_6)) &&
             (val_6 < g_display_bss_003d9848)) {
            *(byte *)(g_display_bss_003d9824 + g_screen_pitch * val_6 + local_38) = arg_cl;
          }
          if ((int)local_44 < 0) {
            local_44 = local_44 + local_64 + 6;
          }
          else {
            local_44 = local_44 + (local_48 - arg_ebx) * 4 + 10;
            local_20 = local_20 + 1;
            local_38 = local_38 + -1;
            val_2 = val_2 + 1;
            arg_ebx = arg_ebx - 1;
            val_5 = val_5 + -1;
          }
          local_1c = local_1c + 1;
          local_64 = local_64 + 4;
          val = val + -1;
          val_3 = val_3 + -1;
          local_48 = local_48 + 1;
          val_6 = val_6 + 1;
        }
        if (local_48 == arg_ebx) {
          if ((((-1 < val) && (val < g_display_bss_003d9844)) && (-1 < val_2)) && (val_2 < g_display_bss_003d9848))
          {
            *(byte *)(g_display_bss_003d9824 + val_4) = arg_cl;
          }
          val_5 = arg_eax + local_48;
          if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
             ((val_2 = arg_edx - arg_ebx, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
            *(byte *)(val_2 * g_screen_pitch + val_5 + g_display_bss_003d9824) = arg_cl;
          }
          val_5 = arg_eax - local_48;
          if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
             ((val_2 = arg_edx + arg_ebx, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
            *(byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5) = arg_cl;
          }
          val_5 = arg_eax + local_48;
          if ((((-1 < val_5) && (val_5 < g_display_bss_003d9844)) && (val_2 = arg_edx + arg_ebx, -1 < val_2))
             && (val_2 < g_display_bss_003d9848)) {
            *(byte *)(g_display_bss_003d9824 + val_5 + val_2 * g_screen_pitch) = arg_cl;
          }
          val_5 = arg_eax - arg_ebx;
          if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
             ((val_2 = arg_edx - local_48, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
            *(byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5) = arg_cl;
          }
          val_5 = arg_eax + arg_ebx;
          if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
             ((val_2 = arg_edx - local_48, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
            *(byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5) = arg_cl;
          }
          val_5 = arg_eax - arg_ebx;
          if ((((-1 < val_5) && (val_5 < g_display_bss_003d9844)) && (val_2 = arg_edx + local_48, -1 < val_2))
             && (val_2 < g_display_bss_003d9848)) {
            *(byte *)(g_display_bss_003d9824 + val_5 + val_2 * g_screen_pitch) = arg_cl;
          }
          val_5 = arg_eax + arg_ebx;
          if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
             ((val_2 = arg_edx + local_48, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
            *(byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5) = arg_cl;
          }
        }
      }
    }
    else if (arg_ebx < 2) {
      if ((((-1 < arg_eax) && (arg_eax < g_display_bss_003d9844)) && (-1 < arg_edx)) && (arg_edx < g_display_bss_003d9848))
      {
        *(undefined1 *)(val_2 + g_display_bss_003d9824) =
             *(undefined1 *)
              (g_display_bss_003d981c + (uint)CONCAT11(*(undefined1 *)(val_2 + g_display_bss_003d9824),arg_cl));
        return 1;
      }
    }
    else {
      local_4c = 0;
      val_2 = arg_edx + -arg_ebx;
      val_3 = arg_eax + -arg_ebx;
      local_60 = 0;
      val = arg_eax;
      local_40 = local_44;
      local_30 = arg_eax;
      local_24 = arg_edx;
      local_14 = arg_edx;
      while( true ) {
        val_6 = g_screen_pitch * val_2 + val;
        if ((int)arg_ebx <= (int)local_4c) break;
        if (((-1 < val) && (val < g_display_bss_003d9844)) && ((-1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(val_6 + g_display_bss_003d9824);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if (((-1 < local_30) && (local_30 < g_display_bss_003d9844)) &&
           ((-1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + local_30 + g_screen_pitch * val_2);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if ((((-1 < val) && (val < g_display_bss_003d9844)) && (-1 < val_5)) && (val_5 < g_display_bss_003d9848)) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + g_screen_pitch * val_5 + val);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if (((-1 < local_30) && (local_30 < g_display_bss_003d9844)) &&
           ((-1 < val_5 && (val_5 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + local_30 + g_screen_pitch * val_5);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if (((-1 < val_3) && (val_3 < g_display_bss_003d9844)) &&
           ((-1 < local_24 && (local_24 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + local_24 * g_screen_pitch + val_3);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if ((((-1 < local_38) && (local_38 < g_display_bss_003d9844)) && (-1 < local_24)) &&
           (local_24 < g_display_bss_003d9848)) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + local_38 + local_24 * g_screen_pitch);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if (((-1 < val_3) && (val_3 < g_display_bss_003d9844)) &&
           ((-1 < local_14 && (local_14 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + local_14 * g_screen_pitch + val_3);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if (((-1 < local_38) && (local_38 < g_display_bss_003d9844)) &&
           ((-1 < local_14 && (local_14 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + local_38 + local_14 * g_screen_pitch);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)*byte_ptr * 0x100 + (uint)arg_cl);
        }
        if ((int)local_40 < 0) {
          local_40 = local_40 + local_60 + 6;
        }
        else {
          val_2 = val_2 + 1;
          val_5 = val_5 + -1;
          val_3 = val_3 + 1;
          local_40 = (local_4c - arg_ebx) * 4 + local_40 + 10;
          arg_ebx = arg_ebx - 1;
          local_38 = local_38 + -1;
        }
        val = val + -1;
        local_30 = local_30 + 1;
        local_24 = local_24 + -1;
        local_14 = local_14 + 1;
        local_60 = local_60 + 4;
        local_4c = local_4c + 1;
      }
      if (local_4c == arg_ebx) {
        if (((-1 < val) && (val < g_display_bss_003d9844)) && ((-1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(val_6 + g_display_bss_003d9824);
          *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl + (uint)*byte_ptr * 0x100);
        }
        val_5 = arg_eax + local_4c;
        if ((((-1 < val_5) && (val_5 < g_display_bss_003d9844)) && (val_2 = arg_edx - arg_ebx, -1 < val_2))
           && (val_2 < g_display_bss_003d9848)) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
          *byte_ptr = *(byte *)((uint)arg_cl + (uint)*byte_ptr * 0x100 + g_display_bss_003d981c);
        }
        val_5 = arg_eax - local_4c;
        if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
           ((val_2 = arg_edx + arg_ebx, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
          *byte_ptr = *(byte *)((uint)arg_cl + (uint)*byte_ptr * 0x100 + g_display_bss_003d981c);
        }
        val_5 = arg_eax + local_4c;
        if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
           ((val_2 = arg_edx + arg_ebx, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
          *byte_ptr = *(byte *)((uint)arg_cl + (uint)*byte_ptr * 0x100 + g_display_bss_003d981c);
        }
        val_5 = arg_eax - arg_ebx;
        if ((((-1 < val_5) && (val_5 < g_display_bss_003d9844)) && (val_2 = arg_edx - local_4c, -1 < val_2)) &&
           (val_2 < g_display_bss_003d9848)) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
          *byte_ptr = *(byte *)((uint)arg_cl + (uint)*byte_ptr * 0x100 + g_display_bss_003d981c);
        }
        val_5 = arg_eax + arg_ebx;
        if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
           ((val_2 = arg_edx - local_4c, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
          *byte_ptr = *(byte *)((uint)arg_cl + (uint)*byte_ptr * 0x100 + g_display_bss_003d981c);
        }
        val_5 = arg_eax - arg_ebx;
        if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
           ((val_2 = arg_edx + local_4c, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
          *byte_ptr = *(byte *)((uint)arg_cl + (uint)*byte_ptr * 0x100 + g_display_bss_003d981c);
        }
        val_5 = arg_eax + arg_ebx;
        if ((((-1 < val_5) && (val_5 < g_display_bss_003d9844)) && (val_2 = arg_edx + local_4c, -1 < val_2)) &&
           (val_2 < g_display_bss_003d9848)) {
          byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
          *byte_ptr = *(byte *)((uint)arg_cl + (uint)*byte_ptr * 0x100 + g_display_bss_003d981c);
          return 1;
        }
      }
    }
  }
  else if (arg_ebx < 2) {
    if (((-1 < arg_eax) && (arg_eax < g_display_bss_003d9844)) && ((-1 < arg_edx && (arg_edx < g_display_bss_003d9848)))) {
      *(byte *)(val_2 + g_display_bss_003d9824) =
           *(byte *)(g_display_bss_003d981c + (uint)*(byte *)(val_2 + g_display_bss_003d9824) + (uint)arg_cl * 0x100);
    }
  }
  else {
    local_50 = 0;
    val_2 = arg_edx + -arg_ebx;
    local_28 = -arg_ebx + arg_eax;
    local_68 = 0;
    val = arg_eax;
    val_3 = arg_edx;
    local_3c = local_44;
    local_34 = arg_eax;
    local_2c = arg_edx;
    local_10 = local_38;
    while( true ) {
      val_6 = g_screen_pitch * val_2 + val;
      if ((int)arg_ebx <= (int)local_50) break;
      if ((((-1 < val) && (val < g_display_bss_003d9844)) && (-1 < val_2)) && (val_2 < g_display_bss_003d9848)) {
        byte_ptr = (byte *)(val_6 + g_display_bss_003d9824);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if (((-1 < local_34) && (local_34 < g_display_bss_003d9844)) && ((-1 < val_2 && (val_2 < g_display_bss_003d9848)))
         ) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + local_34 + g_screen_pitch * val_2);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if (((-1 < val) && (val < g_display_bss_003d9844)) && ((-1 < val_5 && (val_5 < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + g_screen_pitch * val_5 + val);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if ((((-1 < local_34) && (local_34 < g_display_bss_003d9844)) && (-1 < val_5)) && (val_5 < g_display_bss_003d9848)
         ) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + local_34 + g_screen_pitch * val_5);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if (((-1 < local_28) && (local_28 < g_display_bss_003d9844)) &&
         ((-1 < local_2c && (local_2c < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + local_28 + local_2c * g_screen_pitch);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if (((-1 < local_10) && (local_10 < g_display_bss_003d9844)) &&
         ((-1 < local_2c && (local_2c < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + local_10 + local_2c * g_screen_pitch);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if ((((-1 < local_28) && (local_28 < g_display_bss_003d9844)) && (-1 < val_3)) && (val_3 < g_display_bss_003d9848)
         ) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + local_28 + g_screen_pitch * val_3);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if (((-1 < local_10) && (local_10 < g_display_bss_003d9844)) && ((-1 < val_3 && (val_3 < g_display_bss_003d9848)))
         ) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + local_10 + g_screen_pitch * val_3);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      if ((int)local_3c < 0) {
        local_3c = local_3c + local_68 + 6;
      }
      else {
        local_3c = (local_50 - arg_ebx) * 4 + local_3c + 10;
        val_2 = val_2 + 1;
        val_5 = val_5 + -1;
        local_28 = local_28 + 1;
        local_10 = local_10 + -1;
        arg_ebx = arg_ebx - 1;
      }
      val = val + -1;
      val_3 = val_3 + 1;
      local_34 = local_34 + 1;
      local_2c = local_2c + -1;
      local_68 = local_68 + 4;
      local_50 = local_50 + 1;
    }
    if (local_50 == arg_ebx) {
      if (((-1 < val) && (val < g_display_bss_003d9844)) && ((-1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(val_6 + g_display_bss_003d9824);
        *byte_ptr = *(byte *)(g_display_bss_003d981c + (uint)arg_cl * 0x100 + (uint)*byte_ptr);
      }
      val_5 = arg_eax + local_50;
      if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
         ((val_2 = arg_edx - arg_ebx, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
        *byte_ptr = *(byte *)((uint)*byte_ptr + (uint)arg_cl * 0x100 + g_display_bss_003d981c);
      }
      val_5 = arg_eax - local_50;
      if ((((-1 < val_5) && (val_5 < g_display_bss_003d9844)) && (val_2 = arg_edx + arg_ebx, -1 < val_2)) &&
         (val_2 < g_display_bss_003d9848)) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
        *byte_ptr = *(byte *)((uint)*byte_ptr + (uint)arg_cl * 0x100 + g_display_bss_003d981c);
      }
      val_5 = arg_eax + local_50;
      if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
         ((val_2 = arg_edx + arg_ebx, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
        *byte_ptr = *(byte *)((uint)arg_cl * 0x100 + (uint)*byte_ptr + g_display_bss_003d981c);
      }
      val_5 = arg_eax - arg_ebx;
      if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
         ((val_2 = arg_edx - local_50, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
        *byte_ptr = *(byte *)((uint)*byte_ptr + (uint)arg_cl * 0x100 + g_display_bss_003d981c);
      }
      val_5 = arg_eax + arg_ebx;
      if ((((-1 < val_5) && (val_5 < g_display_bss_003d9844)) && (val_2 = arg_edx - local_50, -1 < val_2)) &&
         (val_2 < g_display_bss_003d9848)) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
        *byte_ptr = *(byte *)((uint)*byte_ptr + (uint)arg_cl * 0x100 + g_display_bss_003d981c);
      }
      val_5 = arg_eax - arg_ebx;
      if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
         ((val_2 = arg_edx + local_50, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
        *byte_ptr = *(byte *)((uint)arg_cl * 0x100 + (uint)*byte_ptr + g_display_bss_003d981c);
      }
      val_5 = arg_eax + arg_ebx;
      if (((-1 < val_5) && (val_5 < g_display_bss_003d9844)) &&
         ((val_2 = arg_edx + local_50, -1 < val_2 && (val_2 < g_display_bss_003d9848)))) {
        byte_ptr = (byte *)(g_display_bss_003d9824 + val_2 * g_screen_pitch + val_5);
        *byte_ptr = *(byte *)((uint)arg_cl * 0x100 + (uint)*byte_ptr + g_display_bss_003d981c);
        return 1;
      }
    }
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f694b (Original VA: 0xf694b, Ghidra: FUN_000f694b)
 * Prototype: int bflib_system_io_fn_0f694b(void);
 * Address  : 0xf694b (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f694b
 * Callers  : 7 -> navigate_nav_log_0b5694, navigate_region_alloc_overflow_0b62e4, navigate_nav_log_0b6aac, navigate_nav_log_0bfaec, navigate_nav_log_0c206c, navigate_path_init8_0c241c, watcom_crt_fn_1285b6
 * Callees  : 3 -> bflib_system_io_fn_0f8aa6, watcom_crt_fn_10fe9e, watcom_crt_fn_10ff15
 ******************************************************************************/
int bflib_system_io_fn_0f694b(void)

{
  char *arg_eax;
  int val;
  char *extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *str_ptr;
  int arg_edx;
  int val_2;
  bool flag;
  
  if (*(int *)(arg_edx + 8) == 0) {
    watcom_crt_fn_10fe9e();
    arg_eax = extraout_ECX;
  }
  flag = (*(byte *)(arg_edx + 0xd) & 4) != 0;
  if (flag) {
    *(byte *)(arg_edx + 0xd) = *(byte *)(arg_edx + 0xd) & 0xf9 | 2;
  }
  val_2 = 0;
  str_ptr = arg_eax;
  do {
    if (*str_ptr == '\0') goto LAB_000f6998;
    val = watcom_crt_fn_10ff15();
    str_ptr = extraout_ECX_00;
  } while (val != -1);
  val_2 = -1;
LAB_000f6998:
  if ((flag) && (*(byte *)(arg_edx + 0xd) = *(byte *)(arg_edx + 0xd) & 0xf9 | 4, val_2 == 0)) {
    val_2 = bflib_system_io_fn_0f8aa6();
    str_ptr = extraout_ECX_01;
  }
  if (val_2 == 0) {
    val_2 = (int)str_ptr - (int)arg_eax;
  }
  return val_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f69c6 (Original VA: 0xf69c6, Ghidra: FUN_000f69c6)
 * Prototype: int bflib_system_io_fn_0f69c6(void);
 * Address  : 0xf69c6 (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f69c6
 * Callers  : 6 -> navigate_nav_log_0b5694, navigate_region_alloc_overflow_0b62e4, navigate_nav_log_0b6aac, navigate_nav_log_0bfaec, navigate_nav_log_0c206c, navigate_path_init8_0c241c
 * Callees  : 1 -> bflib_system_io_fn_0f43d5
 ******************************************************************************/
int bflib_system_io_fn_0f69c6(void)

{
  undefined4 *arg_eax;
  int val;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int extraout_EDX;
  int val_2;
  int val_3;
  
  if (arg_eax == (undefined4 *)0x0) {
    bflib_system_io_fn_0f43d5();
    return 0;
  }
  val_2 = 0;
  if ((*(byte *)((int)arg_eax + 0xd) & 0x10) == 0) {
    if ((arg_eax[2] != 0) &&
       (*(byte *)(arg_eax + 3) = *(byte *)(arg_eax + 3) & 0xef,
       (*(byte *)((int)arg_eax + 0xd) & 0x20) == 0)) {
      val_3 = 0;
      if (arg_eax[1] != 0) {
        val_3 = bflib_system_io_fn_0f7c2e();
        arg_eax = extraout_ECX_01;
      }
      if (val_3 == -1) {
        *(byte *)(arg_eax + 3) = *(byte *)(arg_eax + 3) | 0x20;
        val_2 = -1;
      }
    }
  }
  else {
    *(byte *)((int)arg_eax + 0xd) = *(byte *)((int)arg_eax + 0xd) & 0xef;
    if (((*(byte *)(arg_eax + 3) & 2) != 0) && (arg_eax[2] != 0)) {
      val_3 = arg_eax[1];
      while ((val_3 != 0 && (val_2 == 0))) {
        val = watcom_crt_fn_1139e3();
        arg_eax = extraout_ECX;
        if (val == -1) {
          *(byte *)(extraout_ECX + 3) = *(byte *)(extraout_ECX + 3) | 0x20;
          val_2 = -1;
        }
        else if (val == 0) {
          bflib_system_io_fn_0f8774();
          val_2 = -1;
          *(byte *)(extraout_ECX_00 + 3) = *(byte *)(extraout_ECX_00 + 3) | 0x20;
          arg_eax = extraout_ECX_00;
          val = extraout_EDX;
        }
        val_3 = val_3 - val;
      }
    }
  }
  arg_eax[1] = 0;
  *arg_eax = arg_eax[2];
  return val_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f69e0 (Original VA: 0xf69e0, Ghidra: FUN_000f69e0)
 * Prototype: void bflib_system_io_fn_0f69e0(void);
 * Address  : 0xf69e0 (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f69e0
 * Callers  : 1 -> LbScreenWaitVbi
 * Callees  : 1 -> bflib_system_io_fn_0f6a17
 ******************************************************************************/
void bflib_system_io_fn_0f69e0(void)

{
  undefined1 *arg_eax;
  undefined1 *word_ptr;
  uint arg_ecx;
  uint uval;
  undefined1 uval_2;
  uint arg_edx;
  undefined6 uval_3;
  
  if (arg_ecx != 0) {
    do {
      if (((uint)arg_eax & 3) == 0) break;
      *arg_eax = (char)arg_edx;
      arg_eax = arg_eax + 1;
      arg_edx = arg_edx >> 8 | arg_edx << 0x18;
      arg_ecx = arg_ecx - 1;
    } while (arg_ecx != 0);
    uval_3 = bflib_system_io_fn_0f6a17();
    word_ptr = (undefined1 *)uval_3;
    uval = arg_ecx & 3;
    if (uval != 0) {
      uval_2 = (undefined1)((uint6)uval_3 >> 0x20);
      *word_ptr = uval_2;
      if ((uval != 1) && (word_ptr[1] = (char)((uint6)uval_3 >> 0x28), uval != 2)) {
        word_ptr[2] = uval_2;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f6a17 (Original VA: 0xf6a17, Ghidra: FUN_000f6a17)
 * Prototype: void bflib_system_io_fn_0f6a17(void);
 * Address  : 0xf6a17 (Size: 108 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f6a17
 * Callers  : 1 -> bflib_system_io_fn_0f69e0
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f6a17(void)

{
  undefined4 *arg_eax;
  undefined4 *word_ptr;
  uint arg_ecx;
  int val;
  uint uval;
  undefined4 arg_edx;
  
  if (arg_ecx != 0) {
    do {
      if (((uint)arg_eax & 0x1f) == 0) break;
      *arg_eax = arg_edx;
      arg_eax = arg_eax + 1;
      arg_ecx = arg_ecx - 1;
    } while (arg_ecx != 0);
    if (arg_ecx >> 2 != 0) {
      val = (arg_ecx >> 2) - 1;
      if (val != 0) {
        do {
          word_ptr = arg_eax;
          *word_ptr = arg_edx;
          word_ptr[1] = arg_edx;
          word_ptr[2] = arg_edx;
          word_ptr[3] = arg_edx;
          if (val == 1) goto LAB_000f6a56;
          word_ptr[4] = arg_edx;
          word_ptr[5] = arg_edx;
          val = val + -2;
          word_ptr[6] = arg_edx;
          word_ptr[7] = arg_edx;
          arg_eax = word_ptr + 8;
        } while (val != 0);
        word_ptr = word_ptr + 4;
LAB_000f6a56:
        arg_eax = word_ptr + 4;
      }
      *arg_eax = arg_edx;
      arg_eax[1] = arg_edx;
      arg_eax[2] = arg_edx;
      arg_eax[3] = arg_edx;
      arg_eax = arg_eax + 4;
    }
    uval = arg_ecx & 3;
    if (uval != 0) {
      *arg_eax = arg_edx;
      if (uval != 1) {
        arg_eax[1] = arg_edx;
        if (uval != 2) {
          arg_eax[2] = arg_edx;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f6a84 (Original VA: 0xf6a84, Ghidra: FUN_000f6a84)
 * Prototype: undefined8 bflib_system_io_fn_0f6a84(byte param_1);
 * Address  : 0xf6a84 (Size: 481 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f6a84
 * Callers  : 3 -> bflib_system_io_draw_text_overlay_0e74d4, bflib_system_io_fn_0f0870, bflib_system_io_fn_0f5460
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f6a84(byte param_1)

{
  int val;
  int arg_eax;
  int val_2;
  uint uval;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  int val_3;
  byte *byte_ptr;
  int local_14;
  int val_4;
  int local_c;
  int local_8;
  
  val = g_display_bss_003d981c;
  val_2 = g_display_bss_003d9844 + -1;
  val_3 = g_display_bss_003d9848 + -1;
  if (arg_ebx < arg_eax) {
    if (arg_eax < 0) {
      return CONCAT44(arg_edx,arg_eax);
    }
    if (val_2 < arg_ebx) {
      return CONCAT44(arg_edx,arg_eax);
    }
    if (arg_ebx < 0) {
      arg_ebx = 0;
    }
    val_4 = arg_eax;
    local_8 = arg_ebx;
    if (val_2 < arg_eax) {
      val_4 = val_2;
    }
  }
  else {
    if (arg_ebx < 0) {
      return CONCAT44(arg_edx,arg_eax);
    }
    if (val_2 < arg_eax) {
      return CONCAT44(arg_edx,arg_eax);
    }
    local_8 = arg_eax;
    if (arg_eax < 0) {
      local_8 = 0;
    }
    val_4 = arg_ebx;
    if (val_2 < arg_ebx) {
      val_4 = val_2;
    }
  }
  if (arg_ecx < arg_edx) {
    if (arg_edx < 0) {
      return CONCAT44(arg_edx,arg_eax);
    }
    if (val_3 < arg_ecx) {
      return CONCAT44(arg_edx,arg_eax);
    }
    if (arg_ecx < 0) {
      arg_ecx = 0;
    }
    local_14 = arg_edx;
    local_c = arg_ecx;
    if (val_3 < arg_edx) {
      local_14 = val_3;
    }
  }
  else {
    if (arg_ecx < 0) {
      return CONCAT44(arg_edx,arg_eax);
    }
    if (val_3 < arg_edx) {
      return CONCAT44(arg_edx,arg_eax);
    }
    local_c = arg_edx;
    if (arg_edx < 0) {
      local_c = 0;
    }
    local_14 = arg_ecx;
    if (val_3 < arg_ecx) {
      local_14 = val_3;
    }
  }
  byte_ptr = (byte *)(local_c * g_screen_pitch + local_8 + g_display_bss_003d9824);
  if (val_4 - local_8 == 0) {
    val_2 = (local_14 - local_c) + 1;
    if ((g_lb_display_draw_flags & 4) == 0) {
      if ((g_lb_display_draw_flags & 8) == 0) {
        do {
          *byte_ptr = param_1;
          byte_ptr = byte_ptr + g_screen_pitch;
          val_2 = val_2 + -1;
        } while (val_2 != 0);
      }
      else {
        uval = (uint)param_1;
        do {
          uval = (uint)CONCAT11(*byte_ptr,(char)uval);
          *byte_ptr = *(byte *)(uval + val);
          byte_ptr = byte_ptr + g_screen_pitch;
          val_2 = val_2 + -1;
        } while (val_2 != 0);
      }
    }
    else {
      val_3 = (uint)param_1 << 8;
      do {
        val_3 = CONCAT31((int3)((uint)val_3 >> 8),*byte_ptr);
        *byte_ptr = *(byte *)(val_3 + val);
        byte_ptr = byte_ptr + g_screen_pitch;
        val_2 = val_2 + -1;
      } while (val_2 != 0);
    }
  }
  else {
    val_2 = (val_4 - local_8) + 1;
    if ((g_lb_display_draw_flags & 4) == 0) {
      if ((g_lb_display_draw_flags & 8) == 0) {
        for (; val_2 != 0; val_2 = val_2 + -1) {
          *byte_ptr = param_1;
          byte_ptr = byte_ptr + 1;
        }
      }
      else {
        uval = (uint)param_1;
        do {
          uval = (uint)CONCAT11(*byte_ptr,(char)uval);
          *byte_ptr = *(byte *)(uval + val);
          byte_ptr = byte_ptr + 1;
          val_2 = val_2 + -1;
        } while (val_2 != 0);
      }
    }
    else {
      val_3 = (uint)param_1 << 8;
      do {
        val_3 = CONCAT31((int3)((uint)val_3 >> 8),*byte_ptr);
        *byte_ptr = *(byte *)(val_3 + val);
        byte_ptr = byte_ptr + 1;
        val_2 = val_2 + -1;
      } while (val_2 != 0);
    }
  }
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f6c65 (Original VA: 0xf6c65, Ghidra: FUN_000f6c65)
 * Prototype: undefined4 bflib_system_io_fn_0f6c65(void);
 * Address  : 0xf6c65 (Size: 730 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f6c65
 * Callers  : 3 -> dk_sprintf, bflib_system_io_fn_0f8a21, watcom_crt_fn_10eb2a
 * Callees  : 2 -> bflib_system_io_fn_0f6f3f, bflib_system_io_fn_0f727d
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f6e96) */
/* WARNING: Removing unreachable block (ram,0x000f6ea5) */
/* WARNING: Removing unreachable block (ram,0x000f6dab) */
/* WARNING: Removing unreachable block (ram,0x000f6d4b) */
/* WARNING: Removing unreachable block (ram,0x000f6d67) */
/* WARNING: Removing unreachable block (ram,0x000f6d82) */
/* WARNING: Removing unreachable block (ram,0x000f6d70) */
/* WARNING: Removing unreachable block (ram,0x000f6d79) */
/* WARNING: Removing unreachable block (ram,0x000f6d53) */
/* WARNING: Removing unreachable block (ram,0x000f6cd8) */
/* WARNING: Removing unreachable block (ram,0x000f6cf3) */
/* WARNING: Removing unreachable block (ram,0x000f6d31) */
/* WARNING: Removing unreachable block (ram,0x000f6cfc) */
/* WARNING: Removing unreachable block (ram,0x000f6ce0) */
/* WARNING: Removing unreachable block (ram,0x000f6d93) */
/* WARNING: Removing unreachable block (ram,0x000f6cea) */
/* WARNING: Removing unreachable block (ram,0x000f6f06) */
/* WARNING: Removing unreachable block (ram,0x000f6f11) */
/* WARNING: Removing unreachable block (ram,0x000f6f24) */

undefined4 bflib_system_io_fn_0f6c65(void)

{
  int val;
  int val_2;
  char ch;
  undefined4 *word_ptr;
  char *str_ptr;
  code *arg_ecx;
  char *extraout_ECX;
  char *arg_edx;
  undefined4 *arg_ebx;
  bool flag;
  int local_30;
  int local_2c;
  int local_28;
  char local_1e;
  char local_1d [5];
  code *local_18;
  undefined1 local_14;
  
  local_14 = 0;
  local_18 = arg_ecx;
  while( true ) {
    while( true ) {
      ch = *arg_edx;
      if (ch == '\0') {
        return 0;
      }
      arg_edx = arg_edx + 1;
      if (ch == '%') break;
      (*local_18)();
    }
    str_ptr = (char *)bflib_system_io_fn_0f6f3f();
    ch = *str_ptr;
    arg_edx = str_ptr + 1;
    if (ch == '\0') break;
    if (ch == 'n') {
      word_ptr = (undefined4 *)*arg_ebx;
      *arg_ebx = word_ptr + 1;
      *(undefined4 *)*word_ptr = 0;
    }
    else {
      bflib_system_io_fn_0f727d();
      if (local_1e == ' ') {
        while (local_30 = local_30 + -1, -1 < local_30) {
          (*local_18)();
        }
      }
      str_ptr = local_1d;
      while (*str_ptr != '\0') {
        (*local_18)();
        str_ptr = extraout_ECX;
      }
      while (val = local_28 + -1, local_28 != 0) {
        (*local_18)();
        local_28 = val;
      }
      if (local_1e != ' ') {
        while (local_30 = local_30 + -1, -1 < local_30) {
          (*local_18)();
        }
      }
      if ((ch == 's') || (ch == 'S')) {
        while (val_2 = local_2c + -1, flag = local_2c != 0, local_2c = val_2, local_28 = val,
              flag) {
          (*local_18)();
        }
      }
      else {
        while (val_2 = local_2c + -1, flag = local_2c != 0, local_2c = val_2, local_28 = val,
              flag) {
          (*local_18)();
        }
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f6f3f (Original VA: 0xf6f3f, Ghidra: FUN_000f6f3f)
 * Prototype: byte * bflib_system_io_fn_0f6f3f(void);
 * Address  : 0xf6f3f (Size: 318 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f6f3f
 * Callers  : 1 -> bflib_system_io_fn_0f6c65
 * Callees  : 1 -> bflib_system_io_fn_0f707d
 ******************************************************************************/
byte * bflib_system_io_fn_0f6f3f(void)

{
  int *int_ptr;
  int val;
  byte *byte_ptr;
  byte *byte_ptr_2;
  byte flag;
  int *arg_edx;
  int arg_ebx;
  
  *(undefined1 *)(arg_ebx + 0x17) = 0;
  *(undefined1 *)(arg_ebx + 0x16) = 0x20;
  byte_ptr = (byte *)bflib_system_io_fn_0f707d();
  *(undefined4 *)(arg_ebx + 4) = 0;
  if ((*byte_ptr < 0x30) || (0x39 < *byte_ptr)) {
    if (*byte_ptr == 0x2a) {
      int_ptr = (int *)*arg_edx;
      *arg_edx = (int)(int_ptr + 1);
      val = *int_ptr;
      *(int *)(arg_ebx + 4) = val;
      if (val < 0) {
        *(int *)(arg_ebx + 4) = -val;
        *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) | 8;
      }
      byte_ptr = byte_ptr + 1;
    }
  }
  else {
    do {
      flag = *byte_ptr;
      byte_ptr = byte_ptr + 1;
      *(uint *)(arg_ebx + 4) = *(int *)(arg_ebx + 4) * 10 + (flag - 0x30);
      if (*byte_ptr < 0x30) break;
    } while (*byte_ptr < 0x3a);
  }
  *(undefined4 *)(arg_ebx + 8) = 0xffffffff;
  byte_ptr_2 = byte_ptr;
  if (*byte_ptr == 0x2e) {
    byte_ptr_2 = byte_ptr + 1;
    *(undefined4 *)(arg_ebx + 8) = 0;
    if (*byte_ptr_2 == 0x2a) {
      int_ptr = (int *)*arg_edx;
      *arg_edx = (int)(int_ptr + 1);
      val = *int_ptr;
      *(int *)(arg_ebx + 8) = val;
      if (val < 0) {
        *(undefined4 *)(arg_ebx + 8) = 0xffffffff;
      }
      byte_ptr_2 = byte_ptr + 2;
    }
    else {
      while( true ) {
        flag = *byte_ptr_2;
        if ((flag < 0x30) || (flag != 0x39 && 0x38 < flag)) break;
        byte_ptr_2 = byte_ptr_2 + 1;
        *(uint *)(arg_ebx + 8) = *(int *)(arg_ebx + 8) * 10 + (flag - 0x30);
      }
    }
  }
  flag = *byte_ptr_2;
  byte_ptr = byte_ptr_2 + 1;
  if (flag < 0x4e) {
    if (0x45 < flag) {
      if (0x46 < flag) {
        if (flag == 0x4c) {
          *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) | 0x40;
          return byte_ptr;
        }
        return byte_ptr_2;
      }
      flag = *(byte *)(arg_ebx + 0x14) | 0x80;
LAB_000f704d:
      *(byte *)(arg_ebx + 0x14) = flag;
      return byte_ptr_2 + 1;
    }
  }
  else if (flag < 0x4f) {
    *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) | 0x40;
    byte_ptr_2 = byte_ptr;
  }
  else {
    if (0x6b < flag) {
      if ((0x6c < flag) && (flag != 0x77)) {
        return byte_ptr_2;
      }
      flag = *(byte *)(arg_ebx + 0x14) | 0x20;
      goto LAB_000f704d;
    }
    if (flag != 0x68) {
      return byte_ptr_2;
    }
    *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) | 0x10;
    byte_ptr_2 = byte_ptr;
  }
  return byte_ptr_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f707d (Original VA: 0xf707d, Ghidra: FUN_000f707d)
 * Prototype: char * bflib_system_io_fn_0f707d(void);
 * Address  : 0xf707d (Size: 95 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f707d
 * Callers  : 1 -> bflib_system_io_fn_0f6f3f
 * Callees  : 0 -> 
 ******************************************************************************/
char * bflib_system_io_fn_0f707d(void)

{
  char ch;
  char *arg_eax;
  int arg_edx;
  
  *(undefined1 *)(arg_edx + 0x14) = 0;
  do {
    ch = *arg_eax;
    if (ch == '-') {
      *(byte *)(arg_edx + 0x14) = *(byte *)(arg_edx + 0x14) | 8;
    }
    else if (ch == '#') {
      *(byte *)(arg_edx + 0x14) = *(byte *)(arg_edx + 0x14) | 1;
    }
    else if (ch == '+') {
      *(byte *)(arg_edx + 0x14) = *(byte *)(arg_edx + 0x14) & 0xfd | 4;
    }
    else if (ch == ' ') {
      if ((*(byte *)(arg_edx + 0x14) & 4) == 0) {
        *(byte *)(arg_edx + 0x14) = *(byte *)(arg_edx + 0x14) | 2;
      }
    }
    else {
      if (ch != '0') {
        return arg_eax;
      }
      *(undefined1 *)(arg_edx + 0x16) = 0x30;
    }
    arg_eax = arg_eax + 1;
  } while( true );
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f70dc (Original VA: 0xf70dc, Ghidra: FUN_000f70dc)
 * Prototype: void bflib_system_io_fn_0f70dc(void);
 * Address  : 0xf70dc (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f70dc
 * Callers  : 1 -> bflib_system_io_fn_0f727d
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f70dc(void)

{
  char ch;
  char *arg_eax;
  int loop_i;
  int arg_ebx;
  
  for (loop_i = 0; (ch = *arg_eax, arg_eax = arg_eax + 1, ch != '\0' && (loop_i != arg_ebx));
      loop_i = loop_i + 1) {
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7100 (Original VA: 0xf7100, Ghidra: FUN_000f7100)
 * Prototype: void bflib_system_io_fn_0f7100(void);
 * Address  : 0xf7100 (Size: 35 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7100
 * Callers  : 1 -> bflib_system_io_fn_0f727d
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f7100(void)

{
  short short_val;
  short *arg_eax;
  int loop_i;
  int arg_ebx;
  
  for (loop_i = 0; (short_val = *arg_eax, arg_eax = arg_eax + 1, short_val != 0 && (loop_i != arg_ebx));
      loop_i = loop_i + 1) {
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7123 (Original VA: 0xf7123, Ghidra: FUN_000f7123)
 * Prototype: void bflib_system_io_fn_0f7123(void);
 * Address  : 0xf7123 (Size: 94 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7123
 * Callers  : 1 -> bflib_system_io_fn_0f727d
 * Callees  : 1 -> bflib_system_io_fn_0f5375
 ******************************************************************************/
void bflib_system_io_fn_0f7123(void)

{
  char ch;
  int val;
  uint uval;
  char *arg_edx;
  char *str_ptr;
  int arg_ebx;
  char *str_ptr_2;
  byte flag;
  
  flag = 0;
  bflib_system_io_fn_0f5375();
  uval = 0xffffffff;
  str_ptr = arg_edx;
  do {
    if (uval == 0) break;
    uval = uval - 1;
    ch = *str_ptr;
    str_ptr = str_ptr + (uint)flag * -2 + 1;
  } while (ch != '\0');
  val = arg_ebx + -1;
  str_ptr = arg_edx + (~uval - 1);
  str_ptr_2 = arg_edx + val;
  while (str_ptr != arg_edx) {
    str_ptr = str_ptr + -1;
    val = val + -1;
    *str_ptr_2 = *str_ptr;
    str_ptr_2 = str_ptr_2 + -1;
  }
  str_ptr = arg_edx + val;
  for (; -1 < val; val = val + -1) {
    *str_ptr = '0';
    str_ptr = str_ptr + -1;
  }
  arg_edx[arg_ebx] = '\0';
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7181 (Original VA: 0xf7181, Ghidra: FUN_000f7181)
 * Prototype: void bflib_system_io_fn_0f7181(void);
 * Address  : 0xf7181 (Size: 245 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7181
 * Callers  : 1 -> bflib_system_io_fn_0f727d
 * Callees  : 1 -> bflib_system_io_fn_0f5375
 ******************************************************************************/
void bflib_system_io_fn_0f7181(void)

{
  undefined1 *arg_eax;
  int loop_i;
  char *extraout_ECX;
  char *loop_i_2;
  char *str_ptr;
  uint arg_edx;
  uint uval;
  int arg_ebx;
  undefined4 local_10;
  
  local_10 = arg_edx;
  if ((int)arg_edx < 0) {
    local_10 = -arg_edx;
    *arg_eax = 0x2d;
  }
  if (*(int *)(arg_ebx + 8) == -1) {
    *(undefined4 *)(arg_ebx + 8) = 4;
  }
  bflib_system_io_fn_0f5375();
  str_ptr = extraout_ECX;
  do {
    loop_i_2 = str_ptr;
    str_ptr = loop_i_2 + 1;
  } while (*loop_i_2 != '\0');
  if (*(int *)(arg_ebx + 8) != 0) {
    *loop_i_2 = '.';
    for (loop_i = 0; loop_i < *(int *)(arg_ebx + 8); loop_i = loop_i + 1) {
      local_10 = local_10 & 0xffff;
      uval = local_10 * 10;
      local_10._2_1_ = (char)(uval >> 0x10);
      *str_ptr = local_10._2_1_ + '0';
      str_ptr = str_ptr + 1;
      local_10 = uval;
    }
    *str_ptr = '\0';
    loop_i_2 = str_ptr;
  }
  if ((local_10 & 0x8000) != 0) {
    while (loop_i_2 != extraout_ECX) {
      str_ptr = loop_i_2 + -1;
      if (*str_ptr == '.') {
        str_ptr = loop_i_2 + -2;
      }
      if (*str_ptr != '9') {
        *str_ptr = *str_ptr + '\x01';
        return;
      }
      *str_ptr = '0';
      loop_i_2 = str_ptr;
    }
    *extraout_ECX = '1';
    str_ptr = extraout_ECX + 1;
    do {
      loop_i_2 = str_ptr;
      str_ptr = loop_i_2 + 1;
    } while (*loop_i_2 == '0');
    if (*loop_i_2 == '.') {
      *loop_i_2 = '0';
      loop_i_2[1] = '.';
      for (loop_i_2 = loop_i_2 + 2; *loop_i_2 == '0'; loop_i_2 = loop_i_2 + 1) {
      }
    }
    *loop_i_2 = '0';
    loop_i_2[1] = '\0';
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7276 (Original VA: 0xf7276, Ghidra: FUN_000f7276)
 * Prototype: void bflib_system_io_fn_0f7276(void);
 * Address  : 0xf7276 (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7276
 * Callers  : 1 -> bflib_system_io_fn_0f727d
 * Callees  : 1 -> watcom_crt_floating_point_support_loaded_10ffb9
 ******************************************************************************/
void bflib_system_io_fn_0f7276(void)

{
  (*(code *)PTR_FUN_0010ffb9_00195e90)();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f727d (Original VA: 0xf727d, Ghidra: FUN_000f727d)
 * Prototype: ulonglong bflib_system_io_fn_0f727d(void);
 * Address  : 0xf727d (Size: 1257 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f727d
 * Callers  : 1 -> bflib_system_io_fn_0f6c65
 * Callees  : 9 -> bflib_system_io_fn_0f5375, bflib_system_io_fn_0f70dc, bflib_system_io_fn_0f7100, bflib_system_io_fn_0f7123, bflib_system_io_fn_0f7181, bflib_system_io_fn_0f7276, bflib_system_io_fn_0f7766, watcom_crt_fn_10fff0 ...
 ******************************************************************************/
ulonglong bflib_system_io_fn_0f727d(void)

{
  byte flag;
  uint *word_ptr;
  undefined4 *word_ptr_2;
  ushort *word_ptr_3;
  byte *byte_ptr;
  bool flag_2;
  ushort *arg_eax;
  uint uval;
  int val;
  ushort *arg_ecx;
  undefined1 *extraout_ECX;
  undefined1 *word_ptr_4;
  ushort *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  ushort *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  short extraout_DX;
  int *arg_edx;
  int arg_ebx;
  uint unaff_EBP;
  short in_DS;
  bool flag_3;
  
  flag_2 = true;
  flag = *(byte *)(arg_ebx + 0x15);
  *(undefined4 *)(arg_ebx + 0xc) = 0;
  if (flag < 0x69) {
    if (0x57 < flag) {
      if (flag < 0x59) goto LAB_000f72d4;
      if (flag == 100) goto LAB_000f7317;
    }
  }
  else {
    if (0x69 < flag) {
      if (flag < 0x75) {
        flag_3 = flag == 0x6f;
      }
      else {
        if (flag < 0x76) goto LAB_000f72d4;
        flag_3 = flag == 0x78;
      }
      if (!flag_3) goto LAB_000f7321;
LAB_000f72d4:
      if ((*(byte *)(arg_ebx + 0x14) & 0x20) == 0) {
        if ((*(byte *)(arg_ebx + 0x14) & 0x10) == 0) {
          word_ptr = (uint *)*arg_edx;
          *arg_edx = (int)(word_ptr + 1);
          unaff_EBP = *word_ptr;
        }
        else {
          word_ptr_3 = (ushort *)*arg_edx;
          *arg_edx = (int)(word_ptr_3 + 2);
          unaff_EBP = (uint)*word_ptr_3;
        }
      }
      else {
        word_ptr = (uint *)*arg_edx;
        *arg_edx = (int)(word_ptr + 1);
        unaff_EBP = *word_ptr;
      }
      *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) & 0xf9;
    }
LAB_000f7317:
    if (*(int *)(arg_ebx + 8) != -1) {
      *(undefined1 *)(arg_ebx + 0x16) = 0x20;
    }
  }
LAB_000f7321:
  flag = *(byte *)(arg_ebx + 0x15);
  if (flag < 0x65) {
    if (flag < 0x50) {
      if (flag < 0x46) {
        flag_3 = flag == 0x45;
      }
      else {
        if (flag < 0x47) goto LAB_000f73dc;
        flag_3 = flag == 0x47;
      }
      if (!flag_3) goto LAB_000f768b;
      goto LAB_000f740e;
    }
    if (0x50 < flag) {
      if (flag < 0x58) {
        if (flag != 0x53) goto LAB_000f768b;
LAB_000f74b9:
        if ((*(byte *)(arg_ebx + 0x14) & 0x80) == 0) {
          if ((*(byte *)(arg_ebx + 0x14) & 0x40) == 0) {
            word_ptr_2 = (undefined4 *)*arg_edx;
            *arg_edx = (int)(word_ptr_2 + 1);
            word_ptr_3 = (ushort *)*word_ptr_2;
          }
          else {
            word_ptr_2 = (undefined4 *)*arg_edx;
            *arg_edx = (int)(word_ptr_2 + 1);
            word_ptr_3 = (ushort *)*word_ptr_2;
          }
          if (word_ptr_3 != (ushort *)0x0) {
            arg_ecx = word_ptr_3;
          }
        }
        else {
          word_ptr_2 = (undefined4 *)*arg_edx;
          *arg_edx = (int)(word_ptr_2 + 2);
          if (((ushort *)*word_ptr_2 != (ushort *)0x0) || (*(short *)(word_ptr_2 + 1) != 0)) {
            arg_ecx = (ushort *)*word_ptr_2;
            in_DS = *(short *)(word_ptr_2 + 1);
          }
        }
        flag = *(byte *)(arg_ebx + 0x14);
        flag_2 = false;
        *(byte *)(arg_ebx + 0x14) = flag & 0xf9;
        if (*(char *)(arg_ebx + 0x15) == 'S') {
          if ((flag & 0x20) == 0) {
            uval = (uint)(byte)*arg_ecx;
            arg_eax = (ushort *)((int)arg_ecx + 1);
          }
          else {
            uval = (uint)*arg_ecx;
            arg_eax = arg_ecx + 1;
          }
        }
        else {
          if ((flag & 0x20) == 0) goto LAB_000f745e;
          uval = bflib_system_io_fn_0f7100();
          arg_eax = extraout_ECX_03;
        }
      }
      else {
        if (flag < 0x59) {
LAB_000f7582:
          if (((*(byte *)(arg_ebx + 0x14) & 1) != 0) && (unaff_EBP != 0)) {
            *(undefined1 *)(arg_ebx + 0x17) = 0x30;
            *(undefined1 *)(arg_ebx + 0x19) = 0;
            *(undefined1 *)(arg_ebx + 0x18) = *(undefined1 *)(arg_ebx + 0x15);
          }
LAB_000f75a5:
          watcom_crt_fn_10fff0();
          word_ptr_4 = extraout_ECX_04;
          if (*(char *)(arg_ebx + 0x15) == 'X') {
            bflib_system_io_fn_0f7766();
            word_ptr_4 = extraout_ECX_05;
          }
          goto LAB_000f7442;
        }
        if (flag < 99) goto LAB_000f768b;
        if (99 < flag) goto LAB_000f7468;
        byte_ptr = (byte *)*arg_edx;
        *arg_edx = (int)(byte_ptr + 4);
        flag = *byte_ptr;
        *(byte *)((int)arg_eax + 1) = 0;
        *(byte *)arg_eax = flag;
        *(undefined4 *)(arg_ebx + 8) = 1;
        flag_2 = false;
        uval = 1;
        *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) & 0xf9;
      }
      goto LAB_000f76b4;
    }
LAB_000f75c8:
    if (*(int *)(arg_ebx + 4) == 0) {
      if ((*(byte *)(arg_ebx + 0x14) & 0x80) == 0) {
        *(undefined4 *)(arg_ebx + 4) = 8;
      }
      else {
        *(undefined4 *)(arg_ebx + 4) = 0xd;
      }
    }
    *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) & 0xf9;
    val = *arg_edx;
    *arg_edx = val + 4;
    if ((*(byte *)(arg_ebx + 0x14) & 0x80) != 0) {
      *arg_edx = val + 8;
      bflib_system_io_fn_0f7123();
      *(byte *)(arg_eax + 2) = 0x3a;
    }
    bflib_system_io_fn_0f7123();
    if (*(char *)(arg_ebx + 0x15) == 'P') {
      bflib_system_io_fn_0f7766();
    }
LAB_000f745e:
    uval = bflib_system_io_fn_0f70dc();
    arg_eax = extraout_ECX_00;
  }
  else {
    if (flag < 0x66) {
LAB_000f740e:
      bflib_system_io_fn_0f7276();
      in_DS = extraout_DX;
      goto LAB_000f745e;
    }
    if (flag < 0x6f) {
      if (flag < 0x67) {
LAB_000f73dc:
        if ((*(byte *)(arg_ebx + 0x14) & 0x10) != 0) {
          *arg_edx = *arg_edx + 4;
          bflib_system_io_fn_0f7181();
          goto LAB_000f745e;
        }
      }
      else if (0x67 < flag) {
        if (flag == 0x69) {
LAB_000f7468:
          if ((*(byte *)(arg_ebx + 0x14) & 0x20) == 0) {
            if ((*(byte *)(arg_ebx + 0x14) & 0x10) == 0) {
              *arg_edx = *arg_edx + 4;
              bflib_system_io_fn_0f5375();
              word_ptr_4 = extraout_ECX_02;
              goto LAB_000f7442;
            }
            *arg_edx = *arg_edx + 4;
          }
          else {
            *arg_edx = *arg_edx + 4;
          }
          watcom_crt_fn_11003a();
          word_ptr_4 = extraout_ECX_01;
          goto LAB_000f7442;
        }
        goto LAB_000f768b;
      }
      goto LAB_000f740e;
    }
    if (flag < 0x70) {
      if ((*(byte *)(arg_ebx + 0x14) & 1) != 0) {
        *(byte *)arg_eax = 0x30;
        arg_eax = (ushort *)((int)arg_eax + 1);
      }
      watcom_crt_fn_11003a();
      word_ptr_4 = extraout_ECX;
LAB_000f7442:
      if ((*(int *)(arg_ebx + 8) == 0) && ((byte)*arg_eax == 0x30)) {
        *word_ptr_4 = 0;
      }
      goto LAB_000f745e;
    }
    if (flag < 0x73) {
      if (flag == 0x70) goto LAB_000f75c8;
    }
    else {
      if (flag < 0x74) goto LAB_000f74b9;
      if (0x74 < flag) {
        if (flag < 0x76) goto LAB_000f75a5;
        if (flag == 0x78) goto LAB_000f7582;
      }
    }
LAB_000f768b:
    *(undefined4 *)(arg_ebx + 4) = 0;
    flag = *(byte *)(arg_ebx + 0x15);
    *(byte *)((int)arg_eax + 1) = 0;
    *(byte *)arg_eax = flag;
    *(undefined4 *)(arg_ebx + 8) = 1;
    flag_2 = false;
    *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) & 0xf9;
    uval = 1;
  }
LAB_000f76b4:
  if (!flag_2) goto LAB_000f7709;
  if ((byte)*arg_eax == 0x2d) {
    *(undefined1 *)(arg_ebx + 0x17) = 0x2d;
    uval = uval - 1;
LAB_000f76f2:
    *(undefined1 *)(arg_ebx + 0x18) = 0;
  }
  else {
    if ((*(byte *)(arg_ebx + 0x14) & 2) != 0) {
      *(undefined1 *)(arg_ebx + 0x17) = 0x20;
      goto LAB_000f76f2;
    }
    if ((*(byte *)(arg_ebx + 0x14) & 4) != 0) {
      *(undefined1 *)(arg_ebx + 0x17) = 0x2b;
      goto LAB_000f76f2;
    }
  }
  if (*(int *)(arg_ebx + 8) < (int)uval) {
    *(uint *)(arg_ebx + 8) = uval;
  }
  else {
    *(uint *)(arg_ebx + 0xc) = *(int *)(arg_ebx + 8) - uval;
  }
LAB_000f7709:
  if (*(char *)(arg_ebx + 0x16) == '*') {
    *(undefined1 *)(arg_ebx + 0x17) = 0;
    *(byte *)(arg_ebx + 0x14) = *(byte *)(arg_ebx + 0x14) & 0xf9;
  }
  if (((*(int *)(arg_ebx + 8) == -1) || ((int)uval < *(int *)(arg_ebx + 8))) &&
     (*(char *)(arg_ebx + 0x15) != 'c')) {
    *(uint *)(arg_ebx + 8) = uval;
  }
  val = bflib_system_io_fn_0f70dc();
  *(int *)(arg_ebx + 4) =
       *(int *)(arg_ebx + 4) - (val + *(int *)(arg_ebx + 8) + *(int *)(arg_ebx + 0xc));
  return (ulonglong)CONCAT24(in_DS,extraout_ECX_06);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7766 (Original VA: 0xf7766, Ghidra: FUN_000f7766)
 * Prototype: void bflib_system_io_fn_0f7766(void);
 * Address  : 0xf7766 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7766
 * Callers  : 1 -> bflib_system_io_fn_0f727d
 * Callees  : 1 -> bflib_system_io_fn_0f43c7
 ******************************************************************************/
void bflib_system_io_fn_0f7766(void)

{
  undefined1 uval;
  char *arg_eax;
  undefined1 *extraout_EDX;
  
  while (*arg_eax != '\0') {
    uval = bflib_system_io_fn_0f43c7();
    *extraout_EDX = uval;
    arg_eax = extraout_EDX + 1;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7780 (Original VA: 0xf7780, Ghidra: FUN_000f7780)
 * Prototype: undefined4 bflib_system_io_fn_0f7780(void);
 * Address  : 0xf7780 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7780
 * Callers  : 1 -> LbScreenSetup
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f7780(void)

{
  return g_data_001955e4;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7786 (Original VA: 0xf7786, Ghidra: FUN_000f7786)
 * Prototype: void bflib_system_io_fn_0f7786(void);
 * Address  : 0xf7786 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7786
 * Callers  : 22 -> LbScreenSetup, LbScreenReset, bflib_system_io_fn_0e970c, bflib_system_io_fn_0e9760, bflib_system_io_fn_0ebc98, bflib_system_io_fn_0ebe68, bflib_system_io_fn_0f0cc0, bflib_system_io_fn_0f1018 ...
 * Callees  : 2 -> bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45
 ******************************************************************************/
void bflib_system_io_fn_0f7786(void)

{
  bflib_system_io_fn_0fed1d();
  bflib_system_io_fn_0fed45();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f77b0 (Original VA: 0xf77b0, Ghidra: FUN_000f77b0)
 * Prototype: void bflib_system_io_fn_0f77b0(void);
 * Address  : 0xf77b0 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f77b0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f77b0(void)

{
  undefined4 *arg_eax;
  uint loop_i;
  undefined4 *arg_edx;
  uint arg_ebx;
  
  for (loop_i = arg_ebx >> 2; loop_i != 0; loop_i = loop_i - 1) {
    *arg_eax = *arg_edx;
    arg_edx = arg_edx + 1;
    arg_eax = arg_eax + 1;
  }
  for (loop_i = arg_ebx & 3; loop_i != 0; loop_i = loop_i - 1) {
    *(undefined1 *)arg_eax = *(undefined1 *)arg_edx;
    arg_edx = (undefined4 *)((int)arg_edx + 1);
    arg_eax = (undefined4 *)((int)arg_eax + 1);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f77d0 (Original VA: 0xf77d0, Ghidra: FUN_000f77d0)
 * Prototype: void bflib_system_io_fn_0f77d0(void);
 * Address  : 0xf77d0 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f77d0
 * Callers  : 1 -> bflib_system_io_fn_0e7904
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void bflib_system_io_fn_0f77d0(void)

{
  LbScreenWaitVbi();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f77dc (Original VA: 0xf77dc, Ghidra: FUN_000f77dc)
 * Prototype: undefined8 bflib_system_io_fn_0f77dc(void);
 * Address  : 0xf77dc (Size: 100 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f77dc
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Switch with 1 destination removed at 0x000f7832 : 3 cases all go to same destination */

undefined8 bflib_system_io_fn_0f77dc(void)

{
  int arg_eax;
  undefined1 arg_cl;
  int val;
  int arg_edx;
  char *arg_ebx;
  int val_2;
  
  val_2 = arg_edx * g_screen_pitch + arg_eax + g_display_bss_003d9824;
  while( true ) {
    if (*arg_ebx == '\0') break;
    val = 6;
    do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      *(undefined1 *)(val_2 + 2) = arg_cl;
      val_2 = val_2 + g_screen_pitch;
      val = val + -1;
    } while (val != 0);
    val_2 = val_2 + g_screen_pitch * -6 + 4;
    arg_ebx = arg_ebx + 1;
  }
  return CONCAT44(arg_edx,arg_eax);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7894 (Original VA: 0xf7894, Ghidra: FUN_000f7894)
 * Prototype: undefined8 bflib_system_io_fn_0f7894(void);
 * Address  : 0xf7894 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7894
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f7894(void)

{
  code *str_ptr;
  uint uval;
  undefined4 *word_ptr;
  undefined1 auStack_4 [4];
  
  uval = g_data_001958f4;
  g_data_001958f4 = 0;
  word_ptr = (undefined4 *)auStack_4;
  if (uval == 0) {
    str_ptr = (code *)swi(0x21);
    uval = (*str_ptr)();
    uval = uval & 0xff;
    word_ptr = (undefined4 *)register0x00000010;
  }
  return CONCAT44(*word_ptr,uval);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f78b1 (Original VA: 0xf78b1, Ghidra: FUN_000f78b1)
 * Prototype: void bflib_system_io_fn_0f78b1(void);
 * Address  : 0xf78b1 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f78b1
 * Callers  : 1 -> watcom_crt_fn_110984
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f78b1(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f78b2 (Original VA: 0xf78b2, Ghidra: FUN_000f78b2)
 * Prototype: void bflib_system_io_fn_0f78b2(void);
 * Address  : 0xf78b2 (Size: 59 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f78b2
 * Callers  : 2 -> bflib_system_io_fn_0e8960, bflib_system_io_fn_0ea3d4
 * Callees  : 1 -> watcom_crt_fn_110055
 ******************************************************************************/
void bflib_system_io_fn_0f78b2(void)

{
  code *str_ptr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  watcom_crt_fn_110055();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f78ed (Original VA: 0xf78ed, Ghidra: FUN_000f78ed)
 * Prototype: void bflib_system_io_fn_0f78ed(void);
 * Address  : 0xf78ed (Size: 17 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f78ed
 * Callers  : 3 -> bflib_system_io_fn_0e8974, bflib_system_io_fn_0f88e2, bflib_system_io_fn_0f8b7f
 * Callees  : 1 -> bflib_system_io_fn_0f7c2e
 ******************************************************************************/
void bflib_system_io_fn_0f78ed(void)

{
  bflib_system_io_fn_0f7c2e();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f78fe (Original VA: 0xf78fe, Ghidra: FUN_000f78fe)
 * Prototype: void bflib_system_io_fn_0f78fe(void);
 * Address  : 0xf78fe (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f78fe
 * Callers  : 1 -> LbFileOpen
 * Callees  : 1 -> bflib_system_io_fn_0f79bc
 ******************************************************************************/
void bflib_system_io_fn_0f78fe(void)

{
  bflib_system_io_fn_0f79bc();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f790b (Original VA: 0xf790b, Ghidra: FUN_000f790b)
 * Prototype: int bflib_system_io_fn_0f790b(void);
 * Address  : 0xf790b (Size: 172 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f790b
 * Callers  : 1 -> LbFileOpen
 * Callees  : 3 -> bflib_system_io_fn_0f8774, watcom_crt_fn_1100d1, watcom_crt_fn_110126
 ******************************************************************************/
int bflib_system_io_fn_0f790b(void)

{
  int val;
  byte flag;
  int arg_eax;
  uint uval;
  undefined4 *loop_i;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  
  uval = watcom_crt_fn_1100d1();
  if (uval != 0) {
    if ((uval & 0x40) == 0) {
      val_2 = 0x100;
    }
    else {
      val_2 = 0x200;
    }
    if (extraout_ECX != val_2) {
      if ((extraout_ECX != 0x200) && (extraout_ECX != 0x100)) goto LAB_000f7922;
      watcom_crt_fn_110126();
      for (loop_i = g_bss_003df16c; loop_i != (undefined4 *)0x0; loop_i = (undefined4 *)*loop_i) {
        val = loop_i[1];
        if ((*(int *)(val + 0xc) != 0) && (arg_eax == *(int *)(val + 0x10))) {
          flag = *(byte *)(val + 0xc) & 0xbf;
          *(byte *)(val + 0xc) = flag;
          if (extraout_ECX_00 != 0x200) {
            return val_2;
          }
          *(byte *)(val + 0xc) = flag | 0x40;
          return val_2;
        }
      }
    }
    return val_2;
  }
LAB_000f7922:
  bflib_system_io_fn_0f8774();
  return -1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f79b7 (Original VA: 0xf79b7, Ghidra: FUN_000f79b7)
 * Prototype: longlong bflib_system_io_fn_0f79b7(void);
 * Address  : 0xf79b7 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f79b7
 * Callers  : 2 -> LbFileOpen, bflib_system_io_fn_0e8a1c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong bflib_system_io_fn_0f79b7(void)

{
  code *str_ptr;
  uint arg_ecx;
  byte in_CF;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) == 0) {
    watcom_crt_fn_110126();
    return (ulonglong)arg_ecx << 0x20;
  }
  bflib_system_io_fn_0f8774();
  return CONCAT44(arg_ecx,0xffffffff);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f79bc (Original VA: 0xf79bc, Ghidra: FUN_000f79bc)
 * Prototype: void bflib_system_io_fn_0f79bc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xf79bc (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f79bc
 * Callers  : 1 -> bflib_system_io_fn_0f78fe
 * Callees  : 1 -> bflib_system_io_fn_0f79e0
 ******************************************************************************/
void bflib_system_io_fn_0f79bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bflib_system_io_fn_0f79e0(param_1,param_2,0,param_3);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f79e0 (Original VA: 0xf79e0, Ghidra: FUN_000f79e0)
 * Prototype: undefined8 bflib_system_io_fn_0f79e0(char *param_1,uint param_2,uint param_3);
 * Address  : 0xf79e0 (Size: 489 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f79e0
 * Callers  : 3 -> LbFileOpen, bflib_system_io_fn_0e9eda, bflib_system_io_fn_0f79bc
 * Callees  : 5 -> bflib_system_io_fn_0f8774, watcom_crt_fn_110060, watcom_crt_fn_1100d1, watcom_crt_fn_110126, watcom_crt_fn_11013b
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 bflib_system_io_fn_0f79e0(char *param_1,uint param_2,uint param_3)

{
  code *str_ptr;
  uint uval;
  bool flag;
  int val;
  short *val_2;
  uint *word_ptr;
  uint *word_ptr_2;
  uint uval_2;
  byte flag_2;
  ulonglong uval_3;
  uint auStack_20 [2];
  uint local_18;
  undefined4 local_8;
  
  for (; *param_1 == ' '; param_1 = param_1 + 1) {
  }
  auStack_20[1] = param_2 & 0x83;
  flag_2 = 0;
  uval_2 = 0xffffffff;
  str_ptr = (code *)swi(0x21);
  val = (*str_ptr)();
  flag = (flag_2 & 1) != 0;
  uval = (val << 1 | (uint)flag_2) >> 1;
  auStack_20[1] = uval | (uint)flag << 0x1f;
  if (!flag) {
    uval_2 = uval & 0xffff;
  }
  word_ptr = auStack_20 + 1;
  if ((((param_3 & 3) == 0) || (word_ptr = auStack_20 + 1, uval_2 == 0xffffffff)) ||
     (uval_3 = watcom_crt_fn_11013b(), word_ptr = auStack_20 + 1, (int)uval_3 != 0)) goto LAB_000f7aad;
  if (((param_3 & 0x400) != 0) && ((uval_3 & 0x2000000000) != 0)) {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    auStack_20[1] = 0xf7a6b;
    bflib_system_io_fn_0f8774();
    uval_2 = 0xffffffff;
    word_ptr_2 = &local_18;
    goto LAB_000f7bc0;
  }
  word_ptr = auStack_20 + 1;
  if ((param_3 & 0x40) == 0) {
LAB_000f7aad:
    word_ptr_2 = word_ptr;
    if (uval_2 != 0xffffffff) goto LAB_000f7b4f;
    val_2 = (short *)word_ptr;
    if (((*(byte *)((int)word_ptr + 0x28) & 0x20) != 0) && (*(short *)word_ptr == 2)) {
      flag_2 = 0;
      str_ptr = (code *)swi(0x21);
      val = (*str_ptr)();
      val_2 = (short *)((int)word_ptr + 4);
      word_ptr_2 = (uint *)((int)word_ptr + 4);
      flag = (flag_2 & 1) != 0;
      *(uint *)((int)word_ptr + 4) = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
      if (!flag) {
        uval_2 = (uint)*(ushort *)((int)word_ptr + 4);
        flag_2 = 0;
        if (*(int *)((int)word_ptr + 0x30) == 0) {
LAB_000f7b4f:
          *(undefined4 *)((int)word_ptr_2 + -4) = 0xf7b56;
          watcom_crt_fn_1100d1();
          *(undefined4 *)((int)word_ptr_2 + -4) = 0xf7b61;
          watcom_crt_fn_11013b();
          *(byte *)((int)word_ptr_2 + 4) = *(byte *)((int)word_ptr_2 + 4) & 0x7f;
          *(undefined4 *)((int)word_ptr_2 + -4) = 0xf7bbe;
          watcom_crt_fn_110126();
          goto LAB_000f7bc0;
        }
        str_ptr = (code *)swi(0x21);
        val = (*str_ptr)();
        val_2 = (short *)((int)word_ptr + 8);
        flag = (flag_2 & 1) != 0;
        *(uint *)((int)word_ptr + 8) = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
        if (!flag) {
          flag_2 = 0;
          str_ptr = (code *)swi(0x21);
          val = (*str_ptr)();
          val_2 = (short *)((int)word_ptr + 0xc);
          word_ptr_2 = (uint *)((int)word_ptr + 0xc);
          flag = (flag_2 & 1) != 0;
          *(uint *)((int)word_ptr + 0xc) = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
          if (!flag) {
            uval_2 = (uint)*(ushort *)((int)word_ptr + 0xc);
            goto LAB_000f7b4f;
          }
        }
      }
    }
  }
  else {
    flag_2 = 0;
    str_ptr = (code *)swi(0x21);
    val = (*str_ptr)();
    word_ptr = &local_18;
    flag = (flag_2 & 1) != 0;
    local_18 = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
    if (!flag) goto LAB_000f7aad;
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    val_2 = (short *)&stack0xffffffec;
  }
  *(undefined4 *)((int)val_2 + -4) = 0xf7aa8;
  uval_2 = watcom_crt_fn_110060();
  word_ptr_2 = (uint *)val_2;
LAB_000f7bc0:
  return CONCAT44(*(undefined4 *)((int)word_ptr_2 + 0x14),uval_2);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7bc9 (Original VA: 0xf7bc9, Ghidra: FUN_000f7bc9)
 * Prototype: undefined8 bflib_system_io_fn_0f7bc9(void);
 * Address  : 0xf7bc9 (Size: 101 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7bc9
 * Callers  : 0 -> 
 * Callees  : 3 -> watcom_crt_fn_110060, watcom_crt_fn_1100d1, watcom_crt_fn_110126
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f7bc9(void)

{
  code *str_ptr;
  bool flag;
  uint uval;
  undefined4 uval_2;
  uint arg_edx;
  int extraout_EDX;
  uint *word_ptr;
  uint *word_ptr_2;
  byte flag_2;
  undefined1 auStack_14 [4];
  uint local_c [2];
  
  word_ptr_2 = (uint *)auStack_14;
  local_c[0] = arg_edx;
  uval = watcom_crt_fn_1100d1();
  watcom_crt_fn_110126();
  flag_2 = 0;
  if ((uval >> 8 & 0x20) == 0) {
LAB_000f7c24:
    uval_2 = 0;
  }
  else {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    word_ptr = (uint *)&stack0xfffffff0;
    if ((flag_2 & 1) == 0) {
      flag_2 = 0;
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
      word_ptr_2 = local_c;
      word_ptr = local_c;
      flag = (flag_2 & 1) != 0;
      local_c[0] = (extraout_EDX << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
      if (!flag) goto LAB_000f7c24;
    }
    *(undefined4 *)((int)word_ptr + -4) = 0xf7c07;
    uval_2 = watcom_crt_fn_110060();
    word_ptr_2 = word_ptr;
  }
  return CONCAT44(*(undefined4 *)((int)word_ptr_2 + 8),uval_2);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7c2e (Original VA: 0xf7c2e, Ghidra: FUN_000f7c2e)
 * Prototype: undefined4 bflib_system_io_fn_0f7c2e(void);
 * Address  : 0xf7c2e (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7c2e
 * Callers  : 8 -> LbFileWrite, bflib_system_io_fn_0ea15f, bflib_video_sbawe32_mdi_0f143c, bflib_system_io_fn_0f78ed, bflib_system_io_fn_0f7c71, bflib_system_io_fn_0f7f41, bflib_system_io_fn_0f88e2, bflib_system_io_fn_0f8aa6
 * Callees  : 1 -> watcom_crt_fn_110060
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f7c2e(void)

{
  code *str_ptr;
  uint arg_edx;
  undefined4 unaff_EDI;
  byte flag;
  
  flag = (arg_edx >> 0xf & 1) != 0;
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((flag & 1) != 0) {
    watcom_crt_fn_110060();
    unaff_EDI = 0xffffffff;
  }
  return unaff_EDI;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7c71 (Original VA: 0xf7c71, Ghidra: FUN_000f7c71)
 * Prototype: uint bflib_system_io_fn_0f7c71(void);
 * Address  : 0xf7c71 (Size: 251 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7c71
 * Callers  : 1 -> LbFileRead
 * Callees  : 4 -> bflib_system_io_fn_0f7c2e, bflib_system_io_fn_0f8774, watcom_crt_fn_110060, watcom_crt_fn_1100d1
 ******************************************************************************/
uint bflib_system_io_fn_0f7c71(void)

{
  code *str_ptr;
  bool flag;
  uint uval;
  int val;
  uint uval_2;
  char *loop_i;
  char *arg_edx;
  int val_2;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag_2;
  undefined4 local_24;
  undefined1 local_20 [4];
  uint local_1c;
  
  local_1c = watcom_crt_fn_1100d1();
  if ((local_1c == 0) || ((local_1c & 1) == 0)) {
    bflib_system_io_fn_0f8774();
    uval = 0xffffffff;
  }
  else {
    flag_2 = 0;
    if ((local_1c & 0x40) == 0) {
      uval = 0;
      word_ptr_2 = &local_24;
      while( true ) {
        flag_2 = 0;
        str_ptr = (code *)swi(0x21);
        val = (*str_ptr)();
        word_ptr = word_ptr_2 + 1;
        flag = (flag_2 & 1) != 0;
        uval_2 = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
        word_ptr_2[2] = uval_2;
        if (flag) break;
        if (uval_2 == 0) {
          return uval;
        }
        word_ptr_2[5] = arg_edx + uval_2;
        val = 0;
        for (loop_i = arg_edx; loop_i < (char *)word_ptr_2[5]; loop_i = loop_i + 1) {
          if (*loop_i == '\x1a') {
            *word_ptr_2 = 0xf7d2d;
            bflib_system_io_fn_0f7c2e();
            return uval;
          }
          val_2 = val;
          if (*loop_i != '\r') {
            uval = uval + 1;
            val_2 = val + 1;
            arg_edx[val] = *loop_i;
          }
          val = val_2;
        }
        val_2 = word_ptr_2[4];
        arg_edx = arg_edx + val;
        word_ptr_2[4] = val_2 - val;
        if ((*(byte *)((int)word_ptr_2 + 0xd) & 0x20) != 0) {
          return uval;
        }
        word_ptr_2 = word_ptr_2 + 1;
        if (val_2 - val == 0) {
          return uval;
        }
      }
    }
    else {
      str_ptr = (code *)swi(0x21);
      val = (*str_ptr)();
      word_ptr = (undefined4 *)local_20;
      flag = (flag_2 & 1) != 0;
      if (!flag) {
        return (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
      }
    }
    *(undefined4 *)((int)word_ptr + -4) = 0xf7cce;
    uval = watcom_crt_fn_110060();
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7d6c (Original VA: 0xf7d6c, Ghidra: FUN_000f7d6c)
 * Prototype: uint bflib_system_io_fn_0f7d6c(void);
 * Address  : 0xf7d6c (Size: 469 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7d6c
 * Callers  : 1 -> bflib_system_io_fn_0e8a8c
 * Callees  : 5 -> bflib_system_io_fn_0f8774, watcom_crt_fn_110060, watcom_crt_fn_1100d1, watcom_crt_fn_110162, watcom_crt_stack_overflow_1101a5
 ******************************************************************************/
uint bflib_system_io_fn_0f7d6c(void)

{
  code *str_ptr;
  bool flag;
  undefined2 uval;
  uint uval_2;
  int val;
  char *arg_edx;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint arg_ebx;
  char *str_ptr_2;
  char **val_2;
  char **val_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  uint uval_3;
  byte flag_2;
  char *local_30 [2];
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  uint local_1c;
  char *local_18;
  uint local_14;
  
  val_3 = (char **)&stack0xffffffcc;
  local_30[0] = arg_edx;
  local_24 = watcom_crt_fn_1100d1();
  if ((local_24 == 0) || ((local_24 & 2) == 0)) {
    bflib_system_io_fn_0f8774();
    return 0xffffffff;
  }
  if ((local_24 & 0x80) != 0) {
    flag_2 = 0;
    str_ptr = (code *)swi(0x21);
    uval = (*str_ptr)();
    val_2 = local_30;
    val_3 = local_30;
    flag = (flag_2 & 1) != 0;
    local_1c = CONCAT22((ushort)((ushort)((extraout_EDX & 0xffff) << 1) | (ushort)flag_2) >> 1 |
                        (ushort)flag << 0xf,uval);
    if (flag) goto LAB_000f7dca;
  }
  flag_2 = 0;
  if ((local_24 & 0x40) == 0) {
    val_3[-1] = (char *)0xf7e1a;
    uval_2 = watcom_crt_fn_110162();
    if (uval_2 < 0xb0) {
      val_3[-1] = (char *)0xf7e28;
      watcom_crt_stack_overflow_1101a5();
      uval_2 = extraout_EDX_00;
    }
    uval_3 = 0x200;
    if (uval_2 < 0x230) {
      uval_3 = 0x80;
    }
    uval_2 = 0;
    local_20 = (undefined1 *)((int)val_3 + -uval_3);
    local_14 = 0;
    local_28 = 0;
    local_18 = local_30[0];
    word_ptr = (undefined4 *)((int)val_3 + -uval_3);
    while (local_14 < arg_ebx) {
      word_ptr_3 = word_ptr;
      if (*local_18 == '\n') {
        local_20[uval_2] = 0xd;
        uval_2 = uval_2 + 1;
        flag_2 = uval_2 < uval_3;
        if (uval_2 == uval_3) {
          str_ptr = (code *)swi(0x21);
          val = (*str_ptr)();
          val_2 = (char **)(word_ptr + 1);
          word_ptr_3 = word_ptr + 1;
          flag = (flag_2 & 1) != 0;
          uval_2 = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
          local_1c = uval_2;
          if (flag) goto LAB_000f7dca;
          word_ptr_2 = word_ptr;
          if (uval_2 != uval_3) goto LAB_000f7e9a;
          uval_2 = uval_2 ^ uval_3;
          local_28 = local_14;
        }
      }
      str_ptr_2 = local_18 + 1;
      local_14 = local_14 + 1;
      local_20[uval_2] = *local_18;
      uval_2 = uval_2 + 1;
      flag_2 = uval_2 < uval_3;
      word_ptr = word_ptr_3;
      local_18 = str_ptr_2;
      if (uval_2 == uval_3) {
        str_ptr = (code *)swi(0x21);
        val = (*str_ptr)();
        val_2 = (char **)((int)word_ptr_3 + 4);
        word_ptr = (undefined4 *)((int)word_ptr_3 + 4);
        flag = (flag_2 & 1) != 0;
        uval_2 = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
        local_1c = uval_2;
        if (flag) goto LAB_000f7dca;
        word_ptr_2 = word_ptr_3;
        if (uval_2 != uval_3) {
LAB_000f7e9a:
          local_1c = uval_2;
          *word_ptr_2 = 0xf7ea4;
          bflib_system_io_fn_0f8774();
          return local_28 + uval_2;
        }
        local_28 = local_14;
        uval_2 = uval_2 ^ uval_3;
      }
    }
    flag_2 = 0;
    if (uval_2 == 0) {
      return arg_ebx;
    }
    str_ptr = (code *)swi(0x21);
    val = (*str_ptr)();
    val_2 = (char **)(word_ptr + 1);
    flag = (flag_2 & 1) != 0;
    uval_3 = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
    local_1c = uval_3;
    if (!flag) {
      if (uval_3 == uval_2) {
        return arg_ebx;
      }
      *word_ptr = 0xf7f30;
      bflib_system_io_fn_0f8774();
      return local_28 + uval_3;
    }
  }
  else {
    str_ptr = (code *)swi(0x21);
    val = (*str_ptr)();
    val_2 = val_3 + 1;
    flag = (flag_2 & 1) != 0;
    uval_2 = (val << 1 | (uint)flag_2) >> 1 | (uint)flag << 0x1f;
    local_1c = uval_2;
    if (!flag) {
      if (uval_2 == arg_ebx) {
        return arg_ebx;
      }
      *val_3 = (char *)0xf7e0d;
      bflib_system_io_fn_0f8774();
      return uval_2;
    }
  }
LAB_000f7dca:
  *(undefined4 *)((int)val_2 + -4) = 0xf7dd5;
  uval_2 = watcom_crt_fn_110060();
  return uval_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7f41 (Original VA: 0xf7f41, Ghidra: FUN_000f7f41)
 * Prototype: undefined8 bflib_system_io_fn_0f7f41(void);
 * Address  : 0xf7f41 (Size: 61 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7f41
 * Callers  : 2 -> bflib_system_io_fn_0e8a98, bflib_video_sbawe32_mdi_0f143c
 * Callees  : 1 -> bflib_system_io_fn_0f7c2e
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f7f41(void)

{
  int val;
  undefined4 arg_edx;
  
  val = bflib_system_io_fn_0f7c2e();
  if (val != -1) {
    val = bflib_system_io_fn_0f7c2e();
    bflib_system_io_fn_0f7c2e();
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7f7e (Original VA: 0xf7f7e, Ghidra: FUN_000f7f7e)
 * Prototype: void bflib_system_io_fn_0f7f7e(void);
 * Address  : 0xf7f7e (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7f7e
 * Callers  : 1 -> bflib_system_io_fn_0e8ac4
 * Callees  : 2 -> bflib_system_io_fn_0f7fba, watcom_crt_fn_1101b4
 ******************************************************************************/
void bflib_system_io_fn_0f7f7e(void)

{
  code *str_ptr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  watcom_crt_fn_1101b4();
  bflib_system_io_fn_0f7fba();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7f9b (Original VA: 0xf7f9b, Ghidra: FUN_000f7f9b)
 * Prototype: void bflib_system_io_fn_0f7f9b(void);
 * Address  : 0xf7f9b (Size: 28 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7f9b
 * Callers  : 1 -> bflib_system_io_fn_0e8af0
 * Callees  : 3 -> bflib_system_io_fn_0f7fba, bflib_system_io_fn_0f7fdd, watcom_crt_fn_1101b4
 ******************************************************************************/
void bflib_system_io_fn_0f7f9b(void)

{
  code *str_ptr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  bflib_system_io_fn_0f7fdd();
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  watcom_crt_fn_1101b4();
  bflib_system_io_fn_0f7fba();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7fba (Original VA: 0xf7fba, Ghidra: FUN_000f7fba)
 * Prototype: void bflib_system_io_fn_0f7fba(void);
 * Address  : 0xf7fba (Size: 35 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7fba
 * Callers  : 2 -> bflib_system_io_fn_0f7f7e, bflib_system_io_fn_0f7f9b
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f7fba(void)

{
  code *str_ptr;
  int loop_i;
  undefined1 *extraout_EDX;
  undefined1 *arg_ebx;
  undefined1 *word_ptr;
  byte flag;
  
  flag = 0;
  if (g_data_00195902 == '\t') {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    word_ptr = extraout_EDX;
    for (loop_i = 0x2b; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr = *arg_ebx;
      arg_ebx = arg_ebx + (uint)flag * -2 + 1;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f7fdd (Original VA: 0xf7fdd, Ghidra: FUN_000f7fdd)
 * Prototype: void bflib_system_io_fn_0f7fdd(void);
 * Address  : 0xf7fdd (Size: 35 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f7fdd
 * Callers  : 1 -> bflib_system_io_fn_0f7f9b
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f7fdd(void)

{
  code *str_ptr;
  int loop_i;
  undefined1 *extraout_EDX;
  undefined1 *arg_ebx;
  undefined1 *word_ptr;
  byte flag;
  
  flag = 0;
  if (g_data_00195902 == '\t') {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    word_ptr = extraout_EDX;
    for (loop_i = 0x2b; loop_i != 0; loop_i = loop_i + -1) {
      *arg_ebx = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      arg_ebx = arg_ebx + (uint)flag * -2 + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8000 (Original VA: 0xf8000, Ghidra: FUN_000f8000)
 * Prototype: undefined4 bflib_system_io_fn_0f8000(void);
 * Address  : 0xf8000 (Size: 46 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8000
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_110060
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f8000(void)

{
  code *str_ptr;
  undefined4 uval;
  byte in_CF;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) != 0) {
    uval = watcom_crt_fn_110060();
    return uval;
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f802e (Original VA: 0xf802e, Ghidra: FUN_000f802e)
 * Prototype: undefined8 bflib_system_io_fn_0f802e(void);
 * Address  : 0xf802e (Size: 91 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f802e
 * Callers  : 2 -> bflib_system_io_fn_0f8089, bflib_system_io_fn_0f8094
 * Callees  : 1 -> watcom_crt_fn_1101c7
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f802e(void)

{
  undefined4 arg_edx;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_14;
  undefined1 local_13;
  
  watcom_crt_fn_1101c7();
  return CONCAT44(arg_edx,(uint)local_14 +
                         (((uint)local_18 + (uint)local_17 * 0x3c) * 0x3c + (uint)local_13) * 100);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8089 (Original VA: 0xf8089, Ghidra: FUN_000f8089)
 * Prototype: void bflib_system_io_fn_0f8089(void);
 * Address  : 0xf8089 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8089
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f802e
 ******************************************************************************/
void bflib_system_io_fn_0f8089(void)

{
  g_bss_003df164 = bflib_system_io_fn_0f802e();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8094 (Original VA: 0xf8094, Ghidra: FUN_000f8094)
 * Prototype: undefined8 bflib_system_io_fn_0f8094(void);
 * Address  : 0xf8094 (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8094
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f802e
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f8094(void)

{
  uint uval;
  undefined4 arg_edx;
  
  uval = bflib_system_io_fn_0f802e();
  if (uval < g_bss_003df164) {
    uval = uval + 0x83d600;
  }
  return CONCAT44(arg_edx,uval - g_bss_003df164);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f80bc (Original VA: 0xf80bc, Ghidra: FUN_000f80bc)
 * Prototype: void bflib_system_io_fn_0f80bc(void);
 * Address  : 0xf80bc (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f80bc
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f80bc(void)

{
  PTR_FUN_0010ffb9_00195e90 = watcom_crt_fn_110215;
  PTR_FUN_0010ffb9_00195e94 = watcom_crt_fn_110358;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f80d8 (Original VA: 0xf80d8, Ghidra: FUN_000f80d8)
 * Prototype: longdouble bflib_system_io_fn_0f80d8(void);
 * Address  : 0xf80d8 (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f80d8
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f8108
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f80e8) */

longdouble bflib_system_io_fn_0f80d8(void)

{
  int unaff_EBP;
  
  if (unaff_EBP != 0) {
    bflib_system_io_fn_0f8108();
  }
  return (longdouble)0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8108 (Original VA: 0xf8108, Ghidra: FUN_000f8108)
 * Prototype: void bflib_system_io_fn_0f8108(void);
 * Address  : 0xf8108 (Size: 203 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8108
 * Callers  : 1 -> bflib_system_io_fn_0f80d8
 * Callees  : 4 -> bflib_system_io_fn_0f81d3, bflib_system_io_fn_0f81f0, bflib_system_io_fn_0f823d, watcom_crt_rational_dos_11358e
 ******************************************************************************/
void bflib_system_io_fn_0f8108(void)

{
  undefined4 uval;
  code *str_ptr;
  int val;
  char ch;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ushort in_CR0;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  g_data_00195448 = 3;
  g_data_0019595c = 1;
  g_data_0019595a = in_CR0 & 6;
  uval = InterruptDescriptorTableRegister();
  uStack_6 = (undefined2)((uint)uval >> 0x10);
  val = CONCAT22(uStack_4,uStack_6);
  if (g_data_00195904 == '\0') {
    if (g_data_00195902 == '\0') {
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
    }
    else if (g_data_00195902 == '\t') {
      bflib_system_io_fn_0f81d3();
      *(undefined4 *)(val + 0x38) = extraout_EDX_00;
      *(undefined4 *)(val + 0x3c) = extraout_ECX_00;
      (**(code **)(g_data_001955b8 + 0x30))();
    }
    else if (g_data_00195902 == '\x01') {
      watcom_crt_rational_dos_11358e();
    }
    else {
      ch = watcom_crt_rational_dos_11358e();
      if (ch != '\x01') {
        bflib_system_io_fn_0f81f0();
      }
    }
  }
  else {
    bflib_system_io_fn_0f81d3();
    *(undefined4 *)(val + 0x38) = extraout_EDX;
    *(undefined4 *)(val + 0x3c) = extraout_ECX;
    bflib_system_io_fn_0f823d();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f81d3 (Original VA: 0xf81d3, Ghidra: FUN_000f81d3)
 * Prototype: void bflib_system_io_fn_0f81d3(void);
 * Address  : 0xf81d3 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f81d3
 * Callers  : 1 -> bflib_system_io_fn_0f8108
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f81d3(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f81f0 (Original VA: 0xf81f0, Ghidra: FUN_000f81f0)
 * Prototype: void bflib_system_io_fn_0f81f0(void);
 * Address  : 0xf81f0 (Size: 77 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f81f0
 * Callers  : 1 -> bflib_system_io_fn_0f8108
 * Callees  : 1 -> bflib_system_io_fn_0f823d
 ******************************************************************************/
void bflib_system_io_fn_0f81f0(void)

{
  code *str_ptr;
  undefined4 arg_ebx;
  undefined2 in_ES;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  g_data_00195954 = arg_ebx;
  g_data_00195958 = in_ES;
  if (g_data_00195902 < '\x03') {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
  }
  else {
    str_ptr = (code *)swi(0x21);
    (*str_ptr)();
    bflib_system_io_fn_0f823d();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f823d (Original VA: 0xf823d, Ghidra: FUN_000f823d)
 * Prototype: void bflib_system_io_fn_0f823d(void);
 * Address  : 0xf823d (Size: 32 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f823d
 * Callers  : 2 -> bflib_system_io_fn_0f8108, bflib_system_io_fn_0f81f0
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_fn_0f823d(void)

{
  code *str_ptr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  g_data_00195914 = g_data_00195914 & 0xfffffffd | 4;
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f825d (Original VA: 0xf825d, Ghidra: FUN_000f825d)
 * Prototype: void bflib_system_io_fn_0f825d(void);
 * Address  : 0xf825d (Size: 122 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f825d
 * Callers  : 0 -> 
 * Callees  : 3 -> bflib_system_io_fn_0f82d7, bflib_system_io_fn_0f8312, watcom_crt_fn_113662
 ******************************************************************************/
void bflib_system_io_fn_0f825d(void)

{
  code *str_ptr;
  char ch;
  
  if (g_data_0019595c != '\x01') {
    return;
  }
  if (g_data_00195904 == '\0') {
    if (g_data_00195902 == '\t') {
      (**(code **)(g_data_001955b8 + 0x30))();
    }
    else if (g_data_00195902 == '\0') {
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
    }
    else if (g_data_00195902 == '\x01') {
      watcom_crt_fn_113662();
    }
    else {
      ch = watcom_crt_fn_113662();
      if (ch != '\x01') {
        bflib_system_io_fn_0f82d7();
      }
    }
  }
  else {
    bflib_system_io_fn_0f8312();
  }
  g_data_0019595c = 0;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f82d7 (Original VA: 0xf82d7, Ghidra: FUN_000f82d7)
 * Prototype: void bflib_system_io_fn_0f82d7(void);
 * Address  : 0xf82d7 (Size: 59 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f82d7
 * Callers  : 1 -> bflib_system_io_fn_0f825d
 * Callees  : 1 -> bflib_system_io_fn_0f8312
 ******************************************************************************/
void bflib_system_io_fn_0f82d7(void)

{
  code *str_ptr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ('\x02' < g_data_00195902) {
    bflib_system_io_fn_0f8312();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8312 (Original VA: 0xf8312, Ghidra: FUN_000f8312)
 * Prototype: void bflib_system_io_fn_0f8312(void);
 * Address  : 0xf8312 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8312
 * Callers  : 2 -> bflib_system_io_fn_0f825d, bflib_system_io_fn_0f82d7
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_fn_0f8312(void)

{
  code *str_ptr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  g_data_00195914 = (uint)g_data_0019595a;
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8333 (Original VA: 0xf8333, Ghidra: FUN_000f8333)
 * Prototype: void bflib_system_io_fn_0f8333(void);
 * Address  : 0xf8333 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8333
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f8333(void)

{
  undefined2 *arg_eax;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined4 in_FPUDataPointer;
  undefined4 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  *arg_eax = in_FPUControlWord;
  arg_eax[2] = in_FPUStatusWord;
  arg_eax[4] = in_FPUTagWord;
  *(undefined4 *)(arg_eax + 10) = in_FPUDataPointer;
  *(undefined4 *)(arg_eax + 6) = in_FPUInstructionPointer;
  arg_eax[9] = in_FPULastInstructionOpcode;
  *(unkbyte10 *)(arg_eax + 0xe) = in_ST0;
  *(unkbyte10 *)(arg_eax + 0x13) = in_ST1;
  *(unkbyte10 *)(arg_eax + 0x18) = in_ST2;
  *(unkbyte10 *)(arg_eax + 0x1d) = in_ST3;
  *(unkbyte10 *)(arg_eax + 0x22) = in_ST4;
  *(unkbyte10 *)(arg_eax + 0x27) = in_ST5;
  *(unkbyte10 *)(arg_eax + 0x2c) = in_ST6;
  *(unkbyte10 *)(arg_eax + 0x31) = in_ST7;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8338 (Original VA: 0xf8338, Ghidra: FUN_000f8338)
 * Prototype: unkbyte10 bflib_system_io_fn_0f8338(void);
 * Address  : 0xf8338 (Size: 4 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8338
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
unkbyte10 bflib_system_io_fn_0f8338(void)

{
  int arg_eax;
  
  return *(unkbyte10 *)(arg_eax + 0x1c);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f833c (Original VA: 0xf833c, Ghidra: FUN_000f833c)
 * Prototype: void bflib_system_io_fn_0f833c(void);
 * Address  : 0xf833c (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f833c
 * Callers  : 1 -> bflib_system_io_fn_0f8377
 * Callees  : 1 -> watcom_crt_fn_1136bc
 ******************************************************************************/
void bflib_system_io_fn_0f833c(void)

{
  if (g_data_00195449 != '\0') {
    PTR_FUN_001136bb_00195fa0 = bflib_system_io_fn_0f8333;
    PTR_FUN_001136bb_00195fa4 = bflib_system_io_fn_0f8338;
  }
  watcom_crt_fn_1136bc();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8377 (Original VA: 0xf8377, Ghidra: FUN_000f8377)
 * Prototype: void bflib_system_io_fn_0f8377(void);
 * Address  : 0xf8377 (Size: 70 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8377
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f833c
 ******************************************************************************/
void bflib_system_io_fn_0f8377(void)

{
  char ch;
  
  if (g_data_00195448 == '\0') {
    g_data_00195449 = g_data_00195448;
    ch = bflib_system_io_fn_0f833c();
    if (g_data_00195900 == '\0') {
      g_data_00195448 = ch;
      g_data_00195449 = ch;
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_undefined_constructor_destructor_called_0f83c0 (Original VA: 0xf83c0, Ghidra: FUN_000f83c0)
 * Prototype: void bflib_system_io_undefined_constructor_destructor_called_0f83c0(void);
 * Address  : 0xf83c0 (Size: 18 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'undefined constructor or destructor called!'
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_1136e4
 ******************************************************************************/
void bflib_system_io_undefined_constructor_destructor_called_0f83c0(void)

{
  watcom_crt_fn_1136e4();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f83d4 (Original VA: 0xf83d4, Ghidra: FUN_000f83d4)
 * Prototype: void bflib_system_io_fn_0f83d4(void);
 * Address  : 0xf83d4 (Size: 92 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f83d4
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_1138d2
 ******************************************************************************/
void bflib_system_io_fn_0f83d4(void)

{
  undefined4 *extraout_EDX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  while (g_data_00195fac != (undefined4 *)0x0) {
    local_18 = g_bss_003d97d0;
    local_14 = g_data_00195fac[1];
    local_10 = g_data_00195fac[2];
    if (*(int *)g_data_00195fac[1] == 4) {
      local_c = g_data_00195fac[3];
    }
    g_data_00195fac = (undefined4 *)*g_data_00195fac;
    g_bss_003d97d0 = &local_18;
    watcom_crt_fn_1138d2();
    *extraout_EDX = 0;
    g_bss_003d97d0 = (undefined4 *)*g_bss_003d97d0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8430 (Original VA: 0xf8430, Ghidra: FUN_000f8430)
 * Prototype: int bflib_system_io_fn_0f8430(void);
 * Address  : 0xf8430 (Size: 4 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8430
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0f8430(void)

{
  int arg_eax;
  
  return arg_eax + 4;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8434 (Original VA: 0xf8434, Ghidra: FUN_000f8434)
 * Prototype: undefined4 bflib_system_io_fn_0f8434(void);
 * Address  : 0xf8434 (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8434
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f8434(void)

{
  int arg_eax;
  int arg_edx;
  
  return *(undefined4 *)(*(int *)(arg_eax + 4) + arg_edx * 8);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f843b (Original VA: 0xf843b, Ghidra: FUN_000f843b)
 * Prototype: void bflib_system_io_fn_0f843b(void);
 * Address  : 0xf843b (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f843b
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f843b(void)

{
  int arg_eax;
  
  *(undefined1 *)(arg_eax + 8) = 0;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8440 (Original VA: 0xf8440, Ghidra: FUN_000f8440)
 * Prototype: void bflib_system_io_fn_0f8440(void);
 * Address  : 0xf8440 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8440
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_system_io_fn_0f8440(void)

{
  g_display_bss_003d9800 = &PTR_FUN_000f8430_00195960;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f844b (Original VA: 0xf844b, Ghidra: FUN_000f844b)
 * Prototype: void bflib_system_io_fn_0f844b(void);
 * Address  : 0xf844b (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f844b
 * Callers  : 2 -> bflib_system_io_fn_0e9460, watcom_crt_fn_1244d0
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f844b(void)

{
  undefined4 *arg_eax;
  
  *arg_eax = g_data_00195fac;
  g_data_00195fac = arg_eax;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f845c (Original VA: 0xf845c, Ghidra: FUN_000f845c)
 * Prototype: undefined8 bflib_system_io_fn_0f845c(void);
 * Address  : 0xf845c (Size: 401 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f845c
 * Callers  : 3 -> bflib_system_io_fn_0e984c, bflib_system_io_fn_0f23de, watcom_crt_fn_114acb
 * Callees  : 4 -> bflib_system_io_fn_0f85f9, bflib_system_io_fn_0f8602, bflib_system_io_fn_0f8645, bflib_system_io_fn_0f86c8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 bflib_system_io_fn_0f845c(void)

{
  ushort uval;
  short *arg_eax;
  short extraout_CX;
  uint uval_2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int loop_i;
  ushort uval_3;
  ushort *arg_edx;
  ushort *word_ptr;
  ushort *word_ptr_2;
  undefined1 *word_ptr_3;
  ushort *word_ptr_4;
  byte flag;
  
  flag = 0;
  if ((*arg_eax == 0x4e52) && (arg_eax[1] == 0x143)) {
    g_data_00195aec = bflib_system_io_fn_0f85f9();
    g_data_00195af0 = bflib_system_io_fn_0f85f9();
    g_data_00195afc = *(char *)((int)arg_eax + 9);
    word_ptr_4 = (ushort *)(arg_eax + 5);
    word_ptr = (ushort *)((int)arg_eax + g_data_00195af0 + 0x12);
    if ((arg_edx < word_ptr) &&
       (word_ptr_2 = (ushort *)((int)arg_edx + (uint)*(byte *)(arg_eax + 8) + g_data_00195aec),
       word_ptr < word_ptr_2)) {
      uval_2 = g_data_00195af0 >> 2;
      word_ptr_4 = word_ptr_2;
      while( true ) {
        if (uval_2 == 0) break;
        uval_2 = uval_2 - 1;
        *(undefined4 *)(word_ptr_4 + -2) = *(undefined4 *)(word_ptr + -2);
        word_ptr = word_ptr + -2;
        word_ptr_4 = word_ptr_4 + -2;
      }
      uval_2 = g_data_00195af0 & 3;
      if ((short)uval_2 != 0) {
        while( true ) {
          word_ptr = (ushort *)((int)word_ptr + -1);
          if (uval_2 == 0) break;
          uval_2 = uval_2 - 1;
          *(undefined1 *)((int)word_ptr_4 + -1) = *(undefined1 *)word_ptr;
          word_ptr_4 = (ushort *)((int)word_ptr_4 + -1);
        }
      }
      flag = 0;
    }
    g_data_00195afd = 0;
    g_data_00195af8 = *word_ptr_4;
    bflib_system_io_fn_0f8645();
    word_ptr = arg_edx;
    do {
      bflib_system_io_fn_0f86c8();
      bflib_system_io_fn_0f86c8();
      bflib_system_io_fn_0f86c8();
      g_data_00195af6 = bflib_system_io_fn_0f8645();
      while( true ) {
        bflib_system_io_fn_0f8602();
        loop_i = extraout_ECX_00;
        if ((short)extraout_ECX_00 != 0) {
          for (; loop_i != 0; loop_i = loop_i + -1) {
            *(char *)word_ptr = (char)*word_ptr_4;
            word_ptr_4 = (ushort *)((int)word_ptr_4 + (uint)flag * -2 + 1);
            word_ptr = (ushort *)((int)word_ptr + (uint)flag * -2 + 1);
          }
          uval = *word_ptr_4;
          uval_3 = (1 << (g_data_00195afd & 0x1f)) - 1;
          g_data_00195af8 = g_data_00195af8 & uval_3;
          g_data_00195afa = word_ptr_4[1] << (g_data_00195afd & 0x1f) |
                         uval_3 & (uval << (g_data_00195afd & 0xf) |
                                 uval >> 0x10 - (g_data_00195afd & 0xf));
          g_data_00195af8 = g_data_00195af8 | uval << (g_data_00195afd & 0x1f);
        }
        g_data_00195af6 = g_data_00195af6 + -1;
        if (g_data_00195af6 == 0) break;
        bflib_system_io_fn_0f8602();
        bflib_system_io_fn_0f8602();
        word_ptr_3 = (undefined1 *)((int)word_ptr - (uint)(ushort)(extraout_CX + 1));
        for (loop_i = CONCAT22((short)((uint)extraout_ECX >> 0x10),(short)extraout_ECX + 2);
            loop_i != 0; loop_i = loop_i + -1) {
          *(undefined1 *)word_ptr = *word_ptr_3;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
          word_ptr = (ushort *)((int)word_ptr + (uint)flag * -2 + 1);
        }
      }
      g_data_00195afc = g_data_00195afc + -1;
      loop_i = g_data_00195aec;
    } while (g_data_00195afc != '\0');
  }
  else {
    loop_i = 0;
  }
  return CONCAT44(arg_edx,loop_i);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f85f9 (Original VA: 0xf85f9, Ghidra: FUN_000f85f9)
 * Prototype: undefined4 bflib_system_io_fn_0f85f9(void);
 * Address  : 0xf85f9 (Size: 9 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f85f9
 * Callers  : 1 -> bflib_system_io_fn_0f845c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f85f9(void)

{
  undefined4 uval;
  undefined4 *unaff_ESI;
  
  uval = *unaff_ESI;
  return CONCAT22(CONCAT11((char)uval,(char)((uint)uval >> 8)),
                  CONCAT11((char)((uint)uval >> 0x10),(char)((uint)uval >> 0x18)));
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8602 (Original VA: 0xf8602, Ghidra: FUN_000f8602)
 * Prototype: ushort bflib_system_io_fn_0f8602(void);
 * Address  : 0xf8602 (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8602
 * Callers  : 1 -> bflib_system_io_fn_0f845c
 * Callees  : 1 -> bflib_system_io_fn_0f8645
 ******************************************************************************/
ushort bflib_system_io_fn_0f8602(void)

{
  ushort *word_ptr;
  ushort uval;
  byte extraout_CL;
  byte extraout_CL_00;
  ushort *arg_edx;
  
  do {
    word_ptr = arg_edx + 1;
    uval = *arg_edx;
    arg_edx = arg_edx + 2;
  } while (*word_ptr != (uval & g_data_00195af8));
  uval = bflib_system_io_fn_0f8645();
  if (1 < extraout_CL) {
    uval = bflib_system_io_fn_0f8645();
    uval = uval | 1 << (extraout_CL_00 & 0x1f);
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8645 (Original VA: 0xf8645, Ghidra: FUN_000f8645)
 * Prototype: ushort bflib_system_io_fn_0f8645(void);
 * Address  : 0xf8645 (Size: 131 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8645
 * Callers  : 3 -> bflib_system_io_fn_0f845c, bflib_system_io_fn_0f8602, bflib_system_io_fn_0f86c8
 * Callees  : 0 -> 
 ******************************************************************************/
ushort bflib_system_io_fn_0f8645(void)

{
  byte arg_al;
  char ch;
  byte flag;
  ushort uval;
  ushort uval_2;
  int unaff_ESI;
  
  uval = (1 << (arg_al & 0x1f)) - 1U & g_data_00195af8;
  ch = g_data_00195afd - arg_al;
  if (g_data_00195afd < arg_al) {
    flag = ch + arg_al;
    uval_2 = (1 << (flag & 0x1f)) - 1U & g_data_00195afa;
    g_data_00195af8 = g_data_00195af8 >> (flag & 0x1f) |
                   uval_2 >> (flag & 0xf) | uval_2 << 0x10 - (flag & 0xf);
    g_data_00195afa = *(ushort *)(unaff_ESI + 2);
    arg_al = arg_al - flag;
    ch = '\x10' - arg_al;
  }
  uval_2 = (1 << (arg_al & 0x1f)) - 1U & g_data_00195afa;
  g_data_00195afa = g_data_00195afa >> (arg_al & 0x1f);
  g_data_00195af8 = g_data_00195af8 >> (arg_al & 0x1f) |
                 uval_2 >> (arg_al & 0xf) | uval_2 << 0x10 - (arg_al & 0xf);
  g_data_00195afd = ch;
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f86c8 (Original VA: 0xf86c8, Ghidra: FUN_000f86c8)
 * Prototype: void bflib_system_io_fn_0f86c8(void);
 * Address  : 0xf86c8 (Size: 153 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f86c8
 * Callers  : 1 -> bflib_system_io_fn_0f845c
 * Callees  : 1 -> bflib_system_io_fn_0f8645
 ******************************************************************************/
void bflib_system_io_fn_0f86c8(void)

{
  int val;
  uint3 uval;
  bool flag;
  undefined1 uval_2;
  byte flag_2;
  ushort uval_3;
  uint uval_4;
  int extraout_ECX;
  int val_2;
  uint uval_5;
  ushort uval_6;
  ushort *arg_edx;
  ushort uval_7;
  ushort uval_8;
  byte *byte_ptr;
  ushort *word_ptr;
  bool flag_3;
  byte flag_4;
  undefined1 auStack_28 [8];
  undefined2 uStack_20;
  undefined2 uStack_1e;
  byte local_18 [16];
  ushort *local_8;
  
  flag_4 = 0;
  byte_ptr = local_18;
  local_8 = arg_edx;
  uval_3 = bflib_system_io_fn_0f8645();
  if (uval_3 != 0) {
    do {
      uStack_20 = 0x86e6;
      uStack_1e = 0xf;
      uval_2 = bflib_system_io_fn_0f8645();
      *byte_ptr = uval_2;
      byte_ptr = byte_ptr + 1;
    } while (extraout_ECX != 1);
    flag_2 = 1;
    uval_7 = 0;
    uval_6 = 0x8000;
    uval_5 = (uint)uval_3;
    byte_ptr = local_18;
    do {
      do {
        if (flag_2 == *byte_ptr) {
          word_ptr = local_8 + (uint)flag_4 * -2 + 1;
          *local_8 = (1 << (flag_2 & 0x1f)) - 1;
          val_2 = CONCAT31((int3)(uval_5 >> 8),flag_2);
          flag_3 = false;
          uval_4 = 0;
          uval_8 = uval_7 >> (0x10 - flag_2 & 0x1f);
          do {
            uval = CONCAT12(flag_3,uval_8);
            flag = (uval_8 & 1) != 0;
            val = uval_4 << 1;
            flag_3 = (uval_4 & 0x8000) != 0;
            val_2 = val_2 + -1;
            uval_4 = (uval_4 & 0x7fff) << 1 | (uint)flag;
            uval_8 = (ushort)(uval >> 1);
          } while (val_2 != 0);
          local_8 = word_ptr + (uint)flag_4 * -2 + 1;
          *word_ptr = (ushort)val | (ushort)flag;
          local_8[0x1e] = CONCAT11(*byte_ptr,((char)byte_ptr - (char)auStack_28) + -0x10);
          uval_5 = uval_5 & 0xffff;
          uval_7 = uval_7 + uval_6;
        }
        uval_5 = uval_5 - 1;
        byte_ptr = byte_ptr + 1;
      } while (uval_5 != 0);
      uval_6 = uval_6 >> 1;
      flag_2 = flag_2 + 1;
      uval_5 = (uint)uval_3;
      byte_ptr = local_18;
    } while (flag_2 != 0x11);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8761 (Original VA: 0xf8761, Ghidra: FUN_000f8761)
 * Prototype: void bflib_system_io_fn_0f8761(void);
 * Address  : 0xf8761 (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8761
 * Callers  : 5 -> bflib_system_io_fn_0e9e09, bflib_system_io_fn_0e9eda, bflib_system_io_fn_0f8ccf, watcom_crt_fn_11fdee, watcom_crt_fn_12235f
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f8761(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f876f (Original VA: 0xf876f, Ghidra: FUN_000f876f)
 * Prototype: void bflib_system_io_fn_0f876f(void);
 * Address  : 0xf876f (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f876f
 * Callers  : 1 -> watcom_crt_fn_1285fe
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f876f(void)

{
  undefined8 uval;
  
  uval = watcom_crt_fn_1138f7();
  *(undefined4 *)uval = (int)((ulonglong)uval >> 0x20);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8774 (Original VA: 0xf8774, Ghidra: FUN_000f8774)
 * Prototype: void bflib_system_io_fn_0f8774(void);
 * Address  : 0xf8774 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8774
 * Callers  : 18 -> bflib_system_io_fn_0e9e09, bflib_system_io_fn_0e9fe1, bflib_system_io_fn_0f790b, bflib_system_io_fn_0f79e0, bflib_system_io_fn_0f7c71, bflib_system_io_fn_0f7d6c, bflib_system_io_fn_0f8780, bflib_system_io_fn_0f87a3 ...
 * Callees  : 1 -> watcom_crt_fn_1138f7
 ******************************************************************************/
void bflib_system_io_fn_0f8774(void)

{
  undefined8 uval;
  
  uval = watcom_crt_fn_1138f7();
  *(undefined4 *)uval = (int)((ulonglong)uval >> 0x20);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8780 (Original VA: 0xf8780, Ghidra: FUN_000f8780)
 * Prototype: void bflib_system_io_fn_0f8780(void);
 * Address  : 0xf8780 (Size: 7 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8780
 * Callers  : 2 -> watcom_crt_fn_120af4, watcom_crt_fn_1285fe
 * Callees  : 1 -> bflib_system_io_fn_0f8774
 ******************************************************************************/
void bflib_system_io_fn_0f8780(void)

{
  bflib_system_io_fn_0f8774();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8797 (Original VA: 0xf8797, Ghidra: FUN_000f8797)
 * Prototype: void bflib_system_io_fn_0f8797(void);
 * Address  : 0xf8797 (Size: 12 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8797
 * Callers  : 1 -> watcom_crt_fn_110060
 * Callees  : 1 -> watcom_crt_fn_1138fd
 ******************************************************************************/
void bflib_system_io_fn_0f8797(void)

{
  undefined8 uval;
  
  uval = watcom_crt_fn_1138fd();
  *(undefined4 *)uval = (int)((ulonglong)uval >> 0x20);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f87a3 (Original VA: 0xf87a3, Ghidra: FUN_000f87a3)
 * Prototype: undefined8 bflib_system_io_fn_0f87a3(void);
 * Address  : 0xf87a3 (Size: 166 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f87a3
 * Callers  : 1 -> bflib_system_io_fn_0e9f9e
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0f4cb8, bflib_system_io_fn_0f8774
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f87a3(void)

{
  undefined4 *word_ptr;
  int val;
  undefined *loop_i;
  int extraout_ECX;
  undefined4 arg_edx;
  uint uval;
  
  if (g_bss_003df168 == (undefined4 *)0x0) {
    for (loop_i = &g_data_00195b00; loop_i < &g_data_00195d08; loop_i = loop_i + 0x1a) {
      if ((loop_i[0xc] & 3) == 0) {
        word_ptr = (undefined4 *)bflib_system_io_fn_0f4cb8();
        if (word_ptr == (undefined4 *)0x0) goto LAB_000f8837;
        uval = 3;
        goto LAB_000f8812;
      }
    }
    uval = 0x4003;
    word_ptr = (undefined4 *)bflib_system_io_fn_0f4cb8();
    if (word_ptr == (undefined4 *)0x0) {
LAB_000f8837:
      bflib_system_io_fn_0f8774();
      val = 0;
      goto LAB_000f8843;
    }
  }
  else {
    uval = (uint)((ushort)*(undefined4 *)(g_bss_003df168[1] + 0xc) & 0x4003 | 3);
    word_ptr = g_bss_003df168;
    g_bss_003df168 = (undefined4 *)*g_bss_003df168;
  }
LAB_000f8812:
  LbScreenWaitVbi();
  *(uint *)(extraout_ECX + 0xc) = uval;
  word_ptr[1] = extraout_ECX;
  *word_ptr = g_bss_003df16c;
  g_bss_003df16c = word_ptr;
  val = extraout_ECX;
LAB_000f8843:
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8849 (Original VA: 0xf8849, Ghidra: FUN_000f8849)
 * Prototype: void bflib_system_io_fn_0f8849(void);
 * Address  : 0xf8849 (Size: 57 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8849
 * Callers  : 2 -> bflib_system_io_fn_0e9eda, bflib_system_io_fn_0ea0d9
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f8849(void)

{
  undefined4 *word_ptr;
  int arg_eax;
  undefined4 *word_ptr_2;
  
  word_ptr = &g_bss_003df16c;
  do {
    word_ptr_2 = word_ptr;
    word_ptr = (undefined4 *)*word_ptr_2;
    if (word_ptr == (undefined4 *)0x0) {
      return;
    }
  } while (arg_eax != word_ptr[1]);
  *(byte *)(arg_eax + 0xc) = *(byte *)(word_ptr[1] + 0xc) | 3;
  *word_ptr_2 = *word_ptr;
  *word_ptr = g_bss_003df168;
  g_bss_003df168 = word_ptr;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8882 (Original VA: 0xf8882, Ghidra: FUN_000f8882)
 * Prototype: void bflib_system_io_fn_0f8882(void);
 * Address  : 0xf8882 (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8882
 * Callers  : 1 -> watcom_crt_fn_11397a
 * Callees  : 1 -> bflib_system_io_fn_0f4d9b
 ******************************************************************************/
void bflib_system_io_fn_0f8882(void)

{
  int extraout_EDX;
  
  while (g_bss_003df168 != 0) {
    bflib_system_io_fn_0f4d9b();
    g_bss_003df168 = extraout_EDX;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f88a0 (Original VA: 0xf88a0, Ghidra: FUN_000f88a0)
 * Prototype: undefined4 bflib_system_io_fn_0f88a0(void);
 * Address  : 0xf88a0 (Size: 66 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f88a0
 * Callers  : 1 -> bflib_system_io_fn_0f88e2
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f88a0(void)

{
  int arg_eax;
  int *arg_edx;
  
  *(byte *)(arg_edx + 3) = *(byte *)(arg_edx + 3) & 0xef;
  if ((arg_eax <= arg_edx[1]) && (arg_edx[2] - *arg_edx <= arg_eax)) {
    *arg_edx = *arg_edx + arg_eax;
    arg_edx[1] = arg_edx[1] - arg_eax;
    return 0;
  }
  arg_edx[1] = 0;
  *arg_edx = arg_edx[2];
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f88e2 (Original VA: 0xf88e2, Ghidra: FUN_000f88e2)
 * Prototype: undefined4 bflib_system_io_fn_0f88e2(void);
 * Address  : 0xf88e2 (Size: 252 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f88e2
 * Callers  : 1 -> bflib_system_io_fn_0e9eda
 * Callees  : 5 -> bflib_system_io_fn_0f78ed, bflib_system_io_fn_0f7c2e, bflib_system_io_fn_0f8774, bflib_system_io_fn_0f88a0, bflib_system_io_fn_0f8aa6
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000f895c) */

undefined4 bflib_system_io_fn_0f88e2(void)

{
  undefined4 *arg_eax;
  int val;
  undefined4 *extraout_ECX;
  int arg_edx;
  uint arg_ebx;
  
  if ((*(byte *)(arg_eax + 3) & 6) == 0) {
    if (arg_ebx == 0) {
      bflib_system_io_fn_0f78ed();
      val = bflib_system_io_fn_0f88a0();
      if ((val != 0) && (val = bflib_system_io_fn_0f7c2e(), val == -1)) {
        return 0xffffffff;
      }
    }
    else if (arg_ebx < 2) {
      val = bflib_system_io_fn_0f88a0();
      if ((val != 0) && (val = bflib_system_io_fn_0f7c2e(), val == -1)) {
        return 0xffffffff;
      }
    }
    else {
      if (arg_ebx != 2) goto LAB_000f8908;
      *arg_eax = arg_eax[2];
      *(byte *)(arg_eax + 3) = *(byte *)(arg_eax + 3) & 0xef;
      arg_eax[1] = 0;
      val = bflib_system_io_fn_0f7c2e();
      if (val == -1) {
        return 0xffffffff;
      }
    }
  }
  else {
    if ((*(byte *)((int)arg_eax + 0xd) & 0x10) == 0) {
      arg_eax[1] = 0;
      *arg_eax = arg_eax[2];
    }
    else {
      val = bflib_system_io_fn_0f8aa6();
      arg_eax = extraout_ECX;
      if (val != 0) {
        if (arg_ebx != 0) {
          return 0xffffffff;
        }
        if (-1 < arg_edx) {
          return 0xffffffff;
        }
LAB_000f8908:
        bflib_system_io_fn_0f8774();
        return 0xffffffff;
      }
    }
    *(byte *)(arg_eax + 3) = *(byte *)(arg_eax + 3) & 0xeb;
    val = bflib_system_io_fn_0f7c2e();
    if (val == -1) {
      return 0xffffffff;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f89de (Original VA: 0xf89de, Ghidra: FUN_000f89de)
 * Prototype: void bflib_system_io_fn_0f89de(void);
 * Address  : 0xf89de (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f89de
 * Callers  : 3 -> bflib_system_io_fn_0e9eda, watcom_crt_fn_10fe9e, watcom_crt_fn_114f1f
 * Callees  : 1 -> watcom_crt_fn_11013b
 ******************************************************************************/
void bflib_system_io_fn_0f89de(void)

{
  byte flag;
  int arg_eax;
  int val;
  undefined8 uval;
  
  if ((*(byte *)(arg_eax + 0xd) & 0x20) == 0) {
    uval = watcom_crt_fn_11013b();
    val = (int)((ulonglong)uval >> 0x20);
    if ((int)uval != 0) {
      flag = *(byte *)(val + 0xd);
      *(byte *)(val + 0xd) = flag | 0x20;
      if ((flag & 7) == 0) {
        *(byte *)(val + 0xd) = flag | 0x22;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8a10 (Original VA: 0xf8a10, Ghidra: FUN_000f8a10)
 * Prototype: void bflib_system_io_fn_0f8a10(void);
 * Address  : 0xf8a10 (Size: 17 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8a10
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_10ff15
 ******************************************************************************/
void bflib_system_io_fn_0f8a10(void)

{
  int arg_eax;
  
  watcom_crt_fn_10ff15();
  *(int *)(arg_eax + 0x10) = *(int *)(arg_eax + 0x10) + 1;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8a21 (Original VA: 0xf8a21, Ghidra: FUN_000f8a21)
 * Prototype: undefined4 bflib_system_io_fn_0f8a21(void);
 * Address  : 0xf8a21 (Size: 127 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8a21
 * Callers  : 2 -> bflib_system_io_fn_0ea08b, bflib_system_io_fn_0f4409
 * Callees  : 3 -> bflib_system_io_fn_0f6c65, bflib_system_io_fn_0f8aa6, watcom_crt_fn_10fe9e
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f8a21(void)

{
  uint uval;
  int arg_eax;
  undefined4 uval_2;
  undefined4 extraout_EDX;
  bool flag;
  
  uval = *(uint *)(arg_eax + 0xc);
  *(byte *)(arg_eax + 0xc) = *(byte *)(arg_eax + 0xc) & 0xcf;
  if (*(int *)(arg_eax + 8) == 0) {
    watcom_crt_fn_10fe9e();
  }
  flag = (*(byte *)(arg_eax + 0xd) & 4) != 0;
  if (flag) {
    *(byte *)(arg_eax + 0xd) = *(byte *)(arg_eax + 0xd) & 0xfa | 1;
  }
  uval_2 = bflib_system_io_fn_0f6c65();
  if (flag) {
    *(byte *)(arg_eax + 0xd) = *(byte *)(arg_eax + 0xd) & 0xfa | 4;
    bflib_system_io_fn_0f8aa6();
    uval_2 = extraout_EDX;
  }
  if ((*(byte *)(arg_eax + 0xc) & 0x20) != 0) {
    uval_2 = 0xffffffff;
  }
  *(uint *)(arg_eax + 0xc) = *(uint *)(arg_eax + 0xc) | uval & 0x30;
  return uval_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8aa0 (Original VA: 0xf8aa0, Ghidra: FUN_000f8aa0)
 * Prototype: undefined4 bflib_system_io_fn_0f8aa0(void);
 * Address  : 0xf8aa0 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8aa0
 * Callers  : 1 -> bflib_system_io_fn_0ea0fa
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0f8aa0(void)

{
  return g_data_001958e0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8aa6 (Original VA: 0xf8aa6, Ghidra: FUN_000f8aa6)
 * Prototype: undefined8 bflib_system_io_fn_0f8aa6(void);
 * Address  : 0xf8aa6 (Size: 217 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8aa6
 * Callers  : 6 -> bflib_system_io_fn_0ea15f, bflib_system_io_fn_0f43da, bflib_system_io_fn_0f694b, bflib_system_io_fn_0f88e2, bflib_system_io_fn_0f8a21, watcom_crt_fn_10ff15
 * Callees  : 3 -> bflib_system_io_fn_0f7c2e, bflib_system_io_fn_0f8774, watcom_crt_fn_1139e3
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f8aa6(void)

{
  undefined4 *arg_eax;
  int val;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 arg_edx;
  int extraout_EDX;
  int val_2;
  int val_3;
  
  val_2 = 0;
  if ((*(byte *)((int)arg_eax + 0xd) & 0x10) == 0) {
    if ((arg_eax[2] != 0) &&
       (*(byte *)(arg_eax + 3) = *(byte *)(arg_eax + 3) & 0xef,
       (*(byte *)((int)arg_eax + 0xd) & 0x20) == 0)) {
      val_3 = 0;
      if (arg_eax[1] != 0) {
        val_3 = bflib_system_io_fn_0f7c2e();
        arg_eax = extraout_ECX_01;
      }
      if (val_3 == -1) {
        *(byte *)(arg_eax + 3) = *(byte *)(arg_eax + 3) | 0x20;
        val_2 = -1;
      }
    }
  }
  else {
    *(byte *)((int)arg_eax + 0xd) = *(byte *)((int)arg_eax + 0xd) & 0xef;
    if (((*(byte *)(arg_eax + 3) & 2) != 0) && (arg_eax[2] != 0)) {
      val_3 = arg_eax[1];
      while ((val_3 != 0 && (val_2 == 0))) {
        val = watcom_crt_fn_1139e3();
        arg_eax = extraout_ECX;
        if (val == -1) {
          *(byte *)(extraout_ECX + 3) = *(byte *)(extraout_ECX + 3) | 0x20;
          val_2 = -1;
        }
        else if (val == 0) {
          bflib_system_io_fn_0f8774();
          val_2 = -1;
          *(byte *)(extraout_ECX_00 + 3) = *(byte *)(extraout_ECX_00 + 3) | 0x20;
          arg_eax = extraout_ECX_00;
          val = extraout_EDX;
        }
        val_3 = val_3 - val;
      }
    }
  }
  arg_eax[1] = 0;
  *arg_eax = arg_eax[2];
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8b7f (Original VA: 0xf8b7f, Ghidra: FUN_000f8b7f)
 * Prototype: undefined8 bflib_system_io_fn_0f8b7f(void);
 * Address  : 0xf8b7f (Size: 48 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8b7f
 * Callers  : 1 -> bflib_system_io_fn_0ea15f
 * Callees  : 1 -> bflib_system_io_fn_0f78ed
 ******************************************************************************/
undefined8 bflib_system_io_fn_0f8b7f(void)

{
  int val;
  undefined4 arg_edx;
  int val_2;
  int val_3;
  undefined8 uval;
  
  uval = bflib_system_io_fn_0f78ed();
  val_2 = (int)((ulonglong)uval >> 0x20);
  val_3 = (int)uval;
  if ((val_3 != -1) && (val = *(int *)(val_2 + 4), val != 0)) {
    if ((*(byte *)(val_2 + 0xd) & 0x10) == 0) {
      val_3 = val_3 - val;
    }
    else {
      val_3 = val + val_3;
    }
  }
  return CONCAT44(arg_edx,val_3);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8baf (Original VA: 0xf8baf, Ghidra: FUN_000f8baf)
 * Prototype: longlong bflib_system_io_fn_0f8baf(void);
 * Address  : 0xf8baf (Size: 53 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8baf
 * Callers  : 1 -> bflib_system_io_fn_0ea15f
 * Callees  : 2 -> bflib_system_io_fn_0f8774, watcom_crt_fn_110126
 ******************************************************************************/
longlong bflib_system_io_fn_0f8baf(void)

{
  code *str_ptr;
  uint arg_ecx;
  byte in_CF;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) == 0) {
    watcom_crt_fn_110126();
    return (ulonglong)arg_ecx << 0x20;
  }
  bflib_system_io_fn_0f8774();
  return CONCAT44(arg_ecx,0xffffffff);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8be4 (Original VA: 0xf8be4, Ghidra: FUN_000f8be4)
 * Prototype: longlong bflib_system_io_fn_0f8be4(void);
 * Address  : 0xf8be4 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8be4
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_110060
 ******************************************************************************/
longlong bflib_system_io_fn_0f8be4(void)

{
  code *str_ptr;
  undefined4 uval;
  byte in_CF;
  uint unaff_retaddr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) != 0) {
    uval = watcom_crt_fn_110060();
    return CONCAT44(unaff_retaddr,uval);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8c05 (Original VA: 0xf8c05, Ghidra: FUN_000f8c05)
 * Prototype: longlong bflib_system_io_fn_0f8c05(void);
 * Address  : 0xf8c05 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8c05
 * Callers  : 1 -> bflib_system_io_fn_0f8ccf
 * Callees  : 1 -> watcom_crt_fn_110060
 ******************************************************************************/
longlong bflib_system_io_fn_0f8c05(void)

{
  code *str_ptr;
  undefined4 uval;
  byte in_CF;
  uint unaff_retaddr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) != 0) {
    uval = watcom_crt_fn_110060();
    return CONCAT44(unaff_retaddr,uval);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8c26 (Original VA: 0xf8c26, Ghidra: FUN_000f8c26)
 * Prototype: longlong bflib_system_io_fn_0f8c26(void);
 * Address  : 0xf8c26 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8c26
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_110060
 ******************************************************************************/
longlong bflib_system_io_fn_0f8c26(void)

{
  code *str_ptr;
  undefined4 uval;
  byte in_CF;
  uint unaff_retaddr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) != 0) {
    uval = watcom_crt_fn_110060();
    return CONCAT44(unaff_retaddr,uval);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8c47 (Original VA: 0xf8c47, Ghidra: FUN_000f8c47)
 * Prototype: undefined4 bflib_system_io_fn_0f8c47(void);
 * Address  : 0xf8c47 (Size: 136 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8c47
 * Callers  : 2 -> bflib_system_io_fn_0ea370, bflib_system_io_fn_0f8ccf
 * Callees  : 3 -> bflib_system_io_fn_0f323f, bflib_system_io_fn_0f4cb8, bflib_system_io_fn_0f8774
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f8c47(void)

{
  code *str_ptr;
  char ch;
  int arg_eax;
  undefined4 uval;
  int val;
  char *str_ptr_2;
  char *str_ptr_3;
  byte flag;
  byte flag_2;
  undefined4 uStack_a0;
  char local_9c [136];
  
  flag_2 = 0;
  flag = 0;
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  str_ptr_2 = (char *)&uStack_a0;
  if ((flag & 1) == 0) {
    str_ptr = (code *)swi(0x21);
    ch = (*str_ptr)();
    str_ptr_2 = local_9c;
    local_9c[0] = ch + 'A';
    local_9c[2] = 0x5c;
    local_9c[1] = 0x3a;
    val = -1;
    str_ptr_3 = local_9c;
    do {
      if (val == 0) break;
      val = val + -1;
      ch = *str_ptr_3;
      str_ptr_3 = str_ptr_3 + (uint)flag_2 * -2 + 1;
    } while (ch != '\0');
    if (arg_eax == 0) {
      uStack_a0 = 0xf8cab;
      val = bflib_system_io_fn_0f4cb8();
      if (val == 0) goto LAB_000f8c6d;
    }
    uStack_a0 = 0xf8cc3;
    uval = bflib_system_io_fn_0f323f();
  }
  else {
LAB_000f8c6d:
    *(undefined4 *)(str_ptr_2 + -4) = 0xf8c72;
    bflib_system_io_fn_0f8774();
    uval = 0;
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8ccf (Original VA: 0xf8ccf, Ghidra: FUN_000f8ccf)
 * Prototype: undefined4 bflib_system_io_fn_0f8ccf(void);
 * Address  : 0xf8ccf (Size: 330 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8ccf
 * Callers  : 1 -> bflib_system_io_fn_0ea3d4
 * Callees  : 8 -> bflib_system_io_fn_0f323f, bflib_system_io_fn_0f8761, bflib_system_io_fn_0f8774, bflib_system_io_fn_0f8c05, bflib_system_io_fn_0f8c47, bflib_system_io_fn_0f8e19, watcom_crt_fn_113a57, watcom_crt_fn_113aa1
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f8ccf(void)

{
  byte flag;
  code *str_ptr;
  undefined2 uval;
  byte *arg_eax;
  int val;
  byte *byte_ptr;
  uint uval_2;
  undefined4 uval_3;
  uint *arg_edx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  byte flag_2;
  undefined1 local_80 [8];
  undefined1 auStack_78 [81];
  byte local_27;
  undefined2 local_26;
  undefined2 local_24;
  undefined4 local_22;
  
  word_ptr_2 = local_80;
  word_ptr = local_80;
  if ((*arg_eax != 0) && (val = watcom_crt_fn_113a57(), word_ptr = local_80, val == 0)) {
    byte_ptr = arg_eax;
    if (arg_eax[1] == 0x3a) {
      byte_ptr = arg_eax + 2;
    }
    flag = *byte_ptr;
    if (((flag == 0x5c) || (flag_2 = flag < 0x2f, flag == 0x2f)) &&
       (flag_2 = false, byte_ptr[1] == 0)) {
      bflib_system_io_fn_0f8c47();
      val = bflib_system_io_fn_0f8c05();
      if (val != 0) {
        return 0xffffffff;
      }
      bflib_system_io_fn_0f8c05();
      local_27 = 0x10;
      local_26 = 0;
      local_24 = 0;
      local_22 = 0;
    }
    else {
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
      str_ptr = (code *)swi(0x21);
      (*str_ptr)();
      word_ptr_2 = auStack_78;
      word_ptr = auStack_78;
      if ((flag_2 & 1) != 0) goto LAB_000f8ced;
    }
    if (arg_eax[1] == 0x3a) {
      *(undefined4 *)(word_ptr_2 + -4) = 0xf8d8a;
      val = bflib_system_io_fn_0f8761();
      uval_2 = val - 0x61;
    }
    else {
      str_ptr = (code *)swi(0x21);
      uval_2 = (*str_ptr)();
      word_ptr_2 = word_ptr_2 + 4;
      uval_2 = uval_2 & 0xff;
    }
    *arg_edx = uval_2;
    *(uint *)((int)arg_edx + 0x12) = *arg_edx;
    *(undefined4 *)((int)arg_edx + 0x16) = local_22;
    *(undefined4 *)(word_ptr_2 + -4) = 0xf8daf;
    uval = bflib_system_io_fn_0f8e19();
    *(undefined2 *)(arg_edx + 2) = uval;
    *(undefined4 *)(word_ptr_2 + -4) = 0xf8dc0;
    uval_3 = watcom_crt_fn_113aa1();
    *(undefined2 *)(arg_edx + 4) = 0;
    *(undefined4 *)((int)arg_edx + 0x1e) = uval_3;
    *(undefined4 *)((int)arg_edx + 0x26) = uval_3;
    *(undefined4 *)((int)arg_edx + 0x22) = uval_3;
    *(undefined4 *)((int)arg_edx + 0x1a) = uval_3;
    *(undefined2 *)((int)arg_edx + 10) = 1;
    arg_edx[3] = (int)(short)arg_edx[4];
    arg_edx[1] = (int)(short)arg_edx[4];
    *(undefined4 *)((int)arg_edx + 0x2e) = 0;
    *(undefined4 *)((int)arg_edx + 0x32) = 0;
    *(undefined2 *)((int)arg_edx + 0x36) = 0;
    *(uint *)((int)arg_edx + 0x2a) = (uint)local_27;
    *(undefined1 *)(arg_edx + 0xe) = 0;
    *(undefined4 *)(word_ptr_2 + -4) = 0xf8e12;
    bflib_system_io_fn_0f323f();
    return 0;
  }
LAB_000f8ced:
  *(undefined4 *)(word_ptr + -4) = 0xf8cf7;
  bflib_system_io_fn_0f8774();
  return 0xffffffff;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8e19 (Original VA: 0xf8e19, Ghidra: FUN_000f8e19)
 * Prototype: uint bflib_system_io_fn_0f8e19(void);
 * Address  : 0xf8e19 (Size: 112 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8e19
 * Callers  : 1 -> bflib_system_io_fn_0f8ccf
 * Callees  : 2 -> dk_stricmp, bflib_system_io_fn_0f09d1
 ******************************************************************************/
uint bflib_system_io_fn_0f8e19(void)

{
  uint arg_eax;
  int val;
  uint uval;
  uint uval_2;
  
  if ((arg_eax & 0x10) == 0) {
    if ((arg_eax & 0x40) == 0) {
      uval = 0x8000;
      val = bflib_system_io_fn_0f09d1();
      if (val != 0) {
        val = dk_stricmp();
        if (val != 0) {
          val = dk_stricmp();
          if (val != 0) goto LAB_000f8e74;
        }
        uval = 0x8049;
      }
    }
    else {
      uval = 0x2000;
    }
  }
  else {
    uval = 0x4049;
  }
LAB_000f8e74:
  uval_2 = uval | 0x124;
  if ((arg_eax & 1) == 0) {
    uval_2 = uval | 0x1b6;
  }
  return uval_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8e89 (Original VA: 0xf8e89, Ghidra: FUN_000f8e89)
 * Prototype: longlong bflib_system_io_fn_0f8e89(void);
 * Address  : 0xf8e89 (Size: 33 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8e89
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_110060
 ******************************************************************************/
longlong bflib_system_io_fn_0f8e89(void)

{
  code *str_ptr;
  undefined4 uval;
  byte in_CF;
  uint unaff_retaddr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  if ((in_CF & 1) != 0) {
    uval = watcom_crt_fn_110060();
    return CONCAT44(unaff_retaddr,uval);
  }
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f8eac (Original VA: 0xf8eac, Ghidra: FUN_000f8eac)
 * Prototype: void bflib_system_io_fn_0f8eac(void);
 * Address  : 0xf8eac (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f8eac
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Control flow encountered bad instruction data */

void bflib_system_io_fn_0f8eac(void)

{
  undefined1 uval;
  short arg_dx;
  int arg_ebx;
  undefined2 *unaff_ESI;
  undefined1 *unaff_EDI;
  
  uval = in(arg_dx);
  *unaff_EDI = uval;
  *(char *)((int)unaff_ESI + -0x6d) =
       *(char *)((int)unaff_ESI + -0x6d) + (char)((uint)(arg_ebx + -1) >> 8);
  TaskRegister(*unaff_ESI);
  LocalDescriptorTableRegister((short)(arg_ebx + -1));
  LocalDescriptorTableRegister(arg_dx + -1);
  LocalDescriptorTableRegister();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/******************************************************************************
 * Function : bflib_system_io_audio_driver_op_0f9460 (Original VA: 0xf9460, Ghidra: FUN_000f9460)
 * Prototype: void bflib_system_io_audio_driver_op_0f9460(void);
 * Address  : 0xf9460 (Size: 56 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Checks g_sound_active_flag / g_sound_driver_ready and updates audio
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_audio_driver_op_0f9460(void)

{
  undefined1 uval;
  ushort uval_2;
  int val;
  undefined4 uval_3;
  int *arg_eax;
  int arg_ecx;
  int arg_edx;
  int val_2;
  int extraout_EDX;
  int arg_ebx;
  int unaff_EBP;
  int unaff_ESI;
  undefined1 *unaff_EDI;
  code *str_ptr;
  byte flag;
  uint auStack_28 [8];
  undefined4 uStack_8;
  
  flag = 0;
  uval = in((short)arg_edx);
  *unaff_EDI = uval;
  uStack_8 = 0x54065606;
  val_2 = *(int *)(arg_ebx + -1);
  val = *arg_eax;
  verr();
  uval_3 = LocalDescriptorTableRegister();
  *(undefined4 *)(unaff_ESI + 0x78000f95) = uval_3;
  verw();
  TaskRegister(*(undefined2 *)((int)arg_eax + (arg_edx + -1) * 4 + 0xf));
  *(char *)(unaff_ESI + -0x6b) = *(char *)(unaff_ESI + -0x6b) + (char)arg_ecx;
  uval_3 = LocalDescriptorTableRegister();
  *(undefined4 *)(unaff_EBP + val_2 + -0x6b) = uval_3;
  LocalDescriptorTableRegister(*(undefined2 *)(arg_ecx + 0x52));
  *(undefined1 **)((int)auStack_28 + val + 0x10) = unaff_EDI + 1;
  val_2 = 0;
  while( true ) {
    if (0 < val_2) {
      return;
    }
    *(uint *)((int)auStack_28 + val + 0xc) = (uint)g_bss_003df524;
    *(char **)((int)auStack_28 + val + 8) = s_BF19____d_0016f912;
    *(undefined **)((int)auStack_28 + val + 4) = &g_sound_driver_ready;
    *(undefined4 *)((int)auStack_28 + val) = 0xf94be;
    dk_sprintf();
    *(undefined4 *)((int)auStack_28 + val + 0xc) = 0xf94cb;
    bflib_system_io_fn_0f9610();
    *(undefined4 *)((int)auStack_28 + val + 0xc) = 0xf94d7;
    val_2 = bflib_sound_fn_114cf2();
    if (val_2 < 1) break;
    *(char **)((int)auStack_28 + val + 0xc) = s___allocation_successful_0016f95e;
    *(undefined **)((int)auStack_28 + val + 8) = &g_sound_driver_ready;
    *(undefined4 *)((int)auStack_28 + val + 4) = 0xf95da;
    dk_sprintf();
    *(undefined4 *)((int)auStack_28 + val + 0xc) = 0xf95e7;
    bflib_system_io_fn_0f9610();
    val_2 = extraout_EDX;
  }
  if (val_2 == -1) {
    *(char **)((int)auStack_28 + val + 0xc) = s___no_sound_dat_0016f91c;
    *(undefined **)((int)auStack_28 + val + 8) = &g_sound_driver_ready;
    *(undefined4 *)((int)auStack_28 + val + 4) = 0xf94f5;
    dk_sprintf();
    *(undefined4 *)((int)auStack_28 + val + 0xc) = 0xf9502;
    bflib_system_io_fn_0f9610();
    g_bss_003df524 = 0;
    return;
  }
  if (val_2 == 0) {
    *(char **)((int)auStack_28 + val + 0xc) = s___cannot_allocate_0016f92d;
  }
  else {
    if (val_2 != -2) goto LAB_000f95b0;
    *(char **)((int)auStack_28 + val + 0xc) = s___not_present_in_sound_dat_0016f941;
  }
  *(undefined **)((int)auStack_28 + val + 8) = &g_sound_driver_ready;
  *(undefined4 *)((int)auStack_28 + val + 4) = 0xf9522;
  dk_sprintf();
  *(undefined4 *)((int)auStack_28 + val + 0xc) = 0xf952f;
  bflib_system_io_fn_0f9610();
LAB_000f95b0:
  val_2 = 10;
  str_ptr = bflib_system_io_audio_driver_op_0f9460;
  do {
    if (val_2 == 0) break;
    val_2 = val_2 + -1;
    uval_2 = *(ushort *)str_ptr;
    str_ptr = str_ptr + ((uint)flag * -2 + 1) * 2;
  } while (g_bss_003df524 != uval_2);
                    /* WARNING: Could not recover jumptable at 0x000f95c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(val_2 * 4 + 0xf9472))();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f95f0 (Original VA: 0xf95f0, Ghidra: FUN_000f95f0)
 * Prototype: void bflib_system_io_fn_0f95f0(void);
 * Address  : 0xf95f0 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f95f0
 * Callers  : 1 -> bflib_sound_bf100_allocate_buffers_streamed_0ea94f
 * Callees  : 1 -> watcom_crt_fn_114f1f
 ******************************************************************************/
void bflib_system_io_fn_0f95f0(void)

{
  watcom_crt_fn_114f1f();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9610 (Original VA: 0xf9610, Ghidra: FUN_000f9610)
 * Prototype: void bflib_system_io_fn_0f9610(void);
 * Address  : 0xf9610 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9610
 * Callers  : 22 -> bflib_sound_bf100_allocate_buffers_streamed_0ea94f, bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_bf101_open_file_0eb0cc, bflib_system_io_alloc_lock_0eb1dd, bflib_system_io_pan_position_pan_target_0eb30c, bflib_system_io_time_elapsed_between_reads_0eb6b6, bflib_system_io_redbook_countdown_ended_0ec8e4, bflib_sound_bf110_cd_non_audio_0ec93f ...
 * Callees  : 1 -> bflib_system_io_fn_0f4409
 ******************************************************************************/
void bflib_system_io_fn_0f9610(void)

{
  if (g_bss_003df650 != '\0') {
    bflib_system_io_fn_0f4409();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_audio_driver_op_0f9623 (Original VA: 0xf9623, Ghidra: FUN_000f9623)
 * Prototype: void bflib_system_io_audio_driver_op_0f9623(void);
 * Address  : 0xf9623 (Size: 128 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Checks g_sound_active_flag / g_sound_driver_ready and updates audio
 * Callers  : 1 -> bflib_system_io_fn_0fed5e
 * Callees  : 2 -> bflib_system_io_fn_0fe993, bflib_system_io_fn_0feaaa
 ******************************************************************************/
void bflib_system_io_audio_driver_op_0f9623(void)

{
  if (g_data_00195d2c == 0) {
    bflib_system_io_fn_0fe993(bflib_system_io_audio_driver_op_0f9623,bflib_system_io_fn_0fdaaa);
    bflib_system_io_fn_0feaaa(&g_sound_active_flag,4);
    bflib_system_io_fn_0feaaa(&g_bss_003df818,4);
    bflib_system_io_fn_0feaaa(&g_bss_003df81c,4);
    bflib_system_io_fn_0feaaa(&g_bss_003df824,4);
    bflib_system_io_fn_0feaaa(&g_data_00195d28,4);
    bflib_system_io_fn_0feaaa(&g_bss_003df820,4);
    g_data_00195d2c = 1;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f96a3 (Original VA: 0xf96a3, Ghidra: FUN_000f96a3)
 * Prototype: void bflib_system_io_fn_0f96a3(char *param_1);
 * Address  : 0xf96a3 (Size: 42 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f96a3
 * Callers  : 10 -> bflib_system_io_fn_0f96cd, bflib_system_io_fn_0f970b, bflib_system_io_fn_0f9733, bflib_system_io_fn_0f9767, bflib_system_io_fn_0f979c, bflib_system_io_fn_0f97d6, bflib_system_io_audio_driver_op_0f9819, bflib_sound_AIL_shutdown_0f98ca ...
 * Callees  : 1 -> watcom_crt_fn_115acb
 ******************************************************************************/
void bflib_system_io_fn_0f96a3(char *param_1)

{
  char ch;
  uint uval;
  char *str_ptr;
  
  uval = 0xffffffff;
  str_ptr = param_1;
  do {
    if (uval == 0) break;
    uval = uval - 1;
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
  } while (ch != '\0');
  watcom_crt_fn_115acb(g_bss_003df824,param_1,~uval - 1);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f96cd (Original VA: 0xf96cd, Ghidra: FUN_000f96cd)
 * Prototype: void bflib_system_io_fn_0f96cd(void);
 * Address  : 0xf96cd (Size: 43 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f96cd
 * Callers  : 2 -> bflib_sound_AIL_set_preference_0f99cc, bflib_sound_AIL_API_read_INI_0f9d16
 * Callees  : 1 -> bflib_system_io_fn_0f96a3
 ******************************************************************************/
void bflib_system_io_fn_0f96cd(void)

{
  undefined1 local_54 [4];
  undefined1 local_50 [64];
  
  (*g_data_00195db0)(local_54,1,s_Result____d_0016f978,local_50);
  bflib_system_io_fn_0f96a3(local_50);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f96f8 (Original VA: 0xf96f8, Ghidra: FUN_000f96f8)
 * Prototype: void bflib_system_io_fn_0f96f8(void);
 * Address  : 0xf96f8 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f96f8
 * Callers  : 1 -> bflib_sound_AIL_install_driver_0fa41b
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f96f8(void)

{
  undefined1 auStack_54 [4];
  undefined1 local_50 [64];
  
  (*g_data_00195db0)(auStack_54,1,s_Result___0x_X_0016f986,local_50);
  bflib_system_io_fn_0f96a3(local_50);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f970b (Original VA: 0xf970b, Ghidra: FUN_000f970b)
 * Prototype: void bflib_system_io_fn_0f970b(void);
 * Address  : 0xf970b (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f970b
 * Callers  : 55 -> bflib_sound_AIL_set_driver_directory_0f996b, bflib_sound_AIL_get_real_vect_0f9a8c, bflib_sound_AIL_restore_USE16_ISR_0f9bc6, bflib_sound_AIL_delay_0f9cb3, bflib_sound_AIL_API_read_INI_0f9d16, bflib_sound_AIL_register_timer_0f9f10, bflib_sound_AIL_start_timer_0fa1a4, bflib_sound_AIL_stop_timer_0fa257 ...
 * Callees  : 1 -> bflib_system_io_fn_0f96a3
 ******************************************************************************/
void bflib_system_io_fn_0f970b(void)

{
  undefined1 local_90 [4];
  undefined1 local_8c [128];
  
  (*g_data_00195db0)(local_90,1);
  bflib_system_io_fn_0f96a3(local_8c);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9733 (Original VA: 0xf9733, Ghidra: FUN_000f9733)
 * Prototype: void bflib_system_io_fn_0f9733(void);
 * Address  : 0xf9733 (Size: 52 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9733
 * Callers  : 32 -> bflib_sound_AIL_set_preference_0f99cc, bflib_sound_AIL_set_real_vect_0f9aea, bflib_sound_AIL_API_read_INI_0f9d16, bflib_sound_AIL_set_timer_user_0f9f71, bflib_sound_AIL_set_timer_period_0f9fd5, bflib_sound_AIL_set_timer_frequency_0fa039, bflib_sound_AIL_install_driver_0fa41b, bflib_sound_AIL_install_DIG_driver_file_0fa593 ...
 * Callees  : 1 -> bflib_system_io_fn_0f96a3
 ******************************************************************************/
void bflib_system_io_fn_0f9733(void)

{
  undefined1 local_90 [128];
  undefined1 local_10 [4];
  
  (*g_data_00195db0)(local_10,2);
  bflib_system_io_fn_0f96a3(local_90);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9767 (Original VA: 0xf9767, Ghidra: FUN_000f9767)
 * Prototype: void bflib_system_io_fn_0f9767(void);
 * Address  : 0xf9767 (Size: 53 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9767
 * Callers  : 16 -> bflib_sound_AIL_set_USE16_ISR_0f9b55, bflib_sound_AIL_set_sample_file_0fa7dc, bflib_sound_AIL_set_sample_address_0fa849, bflib_sound_AIL_set_sample_type_0fa8b3, bflib_sound_AIL_digital_configuration_0faf2a, bflib_sound_AIL_install_DIG_driver_image_0faff6, bflib_sound_AIL_minimum_sample_buffer_size_0fb060, bflib_sound_AIL_set_sample_user_data_0fb46c ...
 * Callees  : 1 -> bflib_system_io_fn_0f96a3
 ******************************************************************************/
void bflib_system_io_fn_0f9767(void)

{
  undefined1 local_90 [128];
  undefined1 local_10 [4];
  
  (*g_data_00195db0)(local_10,3);
  bflib_system_io_fn_0f96a3(local_90);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f979c (Original VA: 0xf979c, Ghidra: FUN_000f979c)
 * Prototype: void bflib_system_io_fn_0f979c(void);
 * Address  : 0xf979c (Size: 58 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f979c
 * Callers  : 5 -> bflib_system_io_audio_driver_op_0f9819, bflib_sound_AIL_call_driver_0f9c40, bflib_sound_AIL_digital_configuration_0faf2a, bflib_sound_AIL_load_sample_buffer_0fb128, bflib_sound_AIL_redbook_track_info_0fcaf1
 * Callees  : 1 -> bflib_system_io_fn_0f96a3
 ******************************************************************************/
void bflib_system_io_fn_0f979c(void)

{
  undefined1 local_94 [128];
  undefined1 local_14 [4];
  
  (*g_data_00195db0)(local_14,4);
  bflib_system_io_fn_0f96a3(local_94);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f97d6 (Original VA: 0xf97d6, Ghidra: FUN_000f97d6)
 * Prototype: void bflib_system_io_fn_0f97d6(void);
 * Address  : 0xf97d6 (Size: 67 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f97d6
 * Callers  : 2 -> bflib_sound_AIL_sample_buffer_info_0fb19f, bflib_sound_AIL_send_channel_voice_message_0fc70b
 * Callees  : 1 -> bflib_system_io_fn_0f96a3
 ******************************************************************************/
void bflib_system_io_fn_0f97d6(void)

{
  undefined1 local_98 [128];
  undefined1 local_18 [4];
  
  (*g_data_00195db0)(local_18,5);
  bflib_system_io_fn_0f96a3(local_98);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_audio_driver_op_0f9819 (Original VA: 0xf9819, Ghidra: FUN_000f9819)
 * Prototype: undefined4 bflib_system_io_audio_driver_op_0f9819(void);
 * Address  : 0xf9819 (Size: 177 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Checks g_sound_active_flag / g_sound_driver_ready and updates audio
 * Callers  : 109 -> bflib_sound_AIL_shutdown_0f98ca, bflib_sound_AIL_set_driver_directory_0f996b, bflib_sound_AIL_set_preference_0f99cc, bflib_sound_AIL_get_real_vect_0f9a8c, bflib_sound_AIL_set_real_vect_0f9aea, bflib_sound_AIL_set_USE16_ISR_0f9b55, bflib_sound_AIL_restore_USE16_ISR_0f9bc6, bflib_sound_AIL_call_driver_0f9c40 ...
 * Callees  : 4 -> bflib_system_io_fn_0f96a3, bflib_system_io_fn_0f979c, watcom_crt_fn_114f96, watcom_crt_fn_115acb
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_audio_driver_op_0f9819(void)

{
  int val;
  
  val = watcom_crt_fn_114f96();
  if (g_sound_active_flag == 1) {
    bflib_system_io_fn_0f979c((uint)(val - g_bss_003df820) % 1000);
  }
  else {
    bflib_system_io_fn_0f96a3(s__0016f9b1,(int)(((ulonglong)(uint)(val - g_bss_003df820) / 60000) % 0x3c));
  }
  if (1 < g_sound_active_flag) {
    watcom_crt_fn_115acb(g_bss_003df824,&g_data_0016f9c1,g_sound_active_flag - 1);
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9a82 (Original VA: 0xf9a82, Ghidra: FUN_000f9a82)
 * Prototype: void bflib_system_io_fn_0f9a82(void);
 * Address  : 0xf9a82 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9a82
 * Callers  : 17 -> watcom_crt_fn_115246, watcom_crt_fn_11575f, watcom_crt_fn_11583f, watcom_crt_fn_115880, watcom_crt_fn_1158a2, watcom_crt_fn_1158c3, watcom_crt_fn_1158e3, watcom_crt_fn_11590d ...
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f9a82(void)

{
  g_data_00196266 = g_data_00196266 + 1;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9a87 (Original VA: 0xf9a87, Ghidra: FUN_000f9a87)
 * Prototype: void bflib_system_io_fn_0f9a87(void);
 * Address  : 0xf9a87 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9a87
 * Callers  : 17 -> watcom_crt_fn_115246, watcom_crt_fn_11575f, watcom_crt_fn_11583f, watcom_crt_fn_115880, watcom_crt_fn_1158a2, watcom_crt_fn_1158c3, watcom_crt_fn_1158e3, watcom_crt_fn_11590d ...
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0f9a87(void)

{
  g_data_00196266 = g_data_00196266 + -1;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9c2b (Original VA: 0xf9c2b, Ghidra: FUN_000f9c2b)
 * Prototype: uint bflib_system_io_fn_0f9c2b(void);
 * Address  : 0xf9c2b (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9c2b
 * Callers  : 2 -> watcom_crt_fn_113c03, watcom_crt_fn_116069
 * Callees  : 0 -> 
 ******************************************************************************/
uint bflib_system_io_fn_0f9c2b(void)

{
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  
  return (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
         (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
         (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
         (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000
         | (uint)(in_AC & 1) * 0x40000;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9c30 (Original VA: 0xf9c30, Ghidra: FUN_000f9c30)
 * Prototype: void bflib_system_io_fn_0f9c30(undefined4 param_1);
 * Address  : 0xf9c30 (Size: 16 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9c30
 * Callers  : 2 -> watcom_crt_fn_113c03, watcom_crt_fn_116069
 * Callees  : 1 -> watcom_crt_fn_1156f8
 ******************************************************************************/
void bflib_system_io_fn_0f9c30(undefined4 param_1)

{
  watcom_crt_fn_1156f8(param_1);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0f9d11 (Original VA: 0xf9d11, Ghidra: FUN_000f9d11)
 * Prototype: undefined4 bflib_system_io_fn_0f9d11(void);
 * Address  : 0xf9d11 (Size: 5 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0f9d11
 * Callers  : 2 -> watcom_crt_fn_1188ac, bflib_sound_xmidi_sequence_119f04
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0f9d11(void)

{
  return g_data_00196262;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fdaaa (Original VA: 0xfdaaa, Ghidra: FUN_000fdaaa)
 * Prototype: void bflib_system_io_fn_0fdaaa(void);
 * Address  : 0xfdaaa (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fdaaa
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0fea1b
 ******************************************************************************/
void bflib_system_io_fn_0fdaaa(void)

{
  if (g_data_00195d2c != 0) {
    bflib_system_io_fn_0fea1b(bflib_system_io_audio_driver_op_0f9623,bflib_system_io_fn_0fdaaa);
    g_data_00195d2c = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fdad0 (Original VA: 0xfdad0, Ghidra: FUN_000fdad0)
 * Prototype: undefined4 bflib_system_io_fn_0fdad0(void);
 * Address  : 0xfdad0 (Size: 641 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fdad0
 * Callers  : 1 -> bflib_system_io_bf101_open_file_0eb0cc
 * Callees  : 6 -> LbScreenWaitVbi, bflib_system_io_fn_0e8974, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileWrite, LbFileRead
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000fdb78) */
/* WARNING: Removing unreachable block (ram,0x000fdb96) */
/* WARNING: Removing unreachable block (ram,0x000fdb62) */
/* WARNING: Removing unreachable block (ram,0x000fdca3) */
/* WARNING: Removing unreachable block (ram,0x000fdc56) */
/* WARNING: Removing unreachable block (ram,0x000fdca5) */
/* WARNING: Removing unreachable block (ram,0x000fdcb2) */
/* WARNING: Removing unreachable block (ram,0x000fdbab) */
/* WARNING: Removing unreachable block (ram,0x000fdbc9) */
/* WARNING: Removing unreachable block (ram,0x000fdbc2) */
/* WARNING: Removing unreachable block (ram,0x000fdbcc) */
/* WARNING: Removing unreachable block (ram,0x000fdc33) */
/* WARNING: Removing unreachable block (ram,0x000fdc49) */
/* WARNING: Removing unreachable block (ram,0x000fdc6d) */
/* WARNING: Removing unreachable block (ram,0x000fdcb4) */
/* WARNING: Removing unreachable block (ram,0x000fdcc1) */
/* WARNING: Removing unreachable block (ram,0x000fdc3f) */
/* WARNING: Removing unreachable block (ram,0x000fdc44) */
/* WARNING: Removing unreachable block (ram,0x000fdc51) */
/* WARNING: Removing unreachable block (ram,0x000fdcde) */
/* WARNING: Removing unreachable block (ram,0x000fdcee) */
/* WARNING: Removing unreachable block (ram,0x000fdcfe) */
/* WARNING: Removing unreachable block (ram,0x000fdd39) */
/* WARNING: Removing unreachable block (ram,0x000fdd48) */

undefined4 bflib_system_io_fn_0fdad0(void)

{
  int val;
  int local_18;
  
  if ((g_data_00195d50 == -1) && (g_data_00195d50 = LbFileOpen(), g_data_00195d50 != -1)) {
    val = LbFileRead();
    if ((val != -1) && ((local_18 == 0x46464952 && (val = LbFileRead(), val != -1)))) {
      LbFileRead();
    }
    bflib_system_io_fn_0e8a1c();
    g_data_00195d50 = -1;
  }
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fdd51 (Original VA: 0xfdd51, Ghidra: FUN_000fdd51)
 * Prototype: void bflib_system_io_fn_0fdd51(void);
 * Address  : 0xfdd51 (Size: 30 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fdd51
 * Callers  : 5 -> bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_fn_0eae8a, bflib_system_io_fn_0eaf13, bflib_system_io_bf101_open_file_0eb0cc, bflib_system_io_fn_0eb147
 * Callees  : 1 -> bflib_system_io_fn_0e8a1c
 ******************************************************************************/
void bflib_system_io_fn_0fdd51(void)

{
  if (g_data_00195d50 != -1) {
    bflib_system_io_fn_0e8a1c();
    g_data_00195d50 = -1;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fdd6f (Original VA: 0xfdd6f, Ghidra: FUN_000fdd6f)
 * Prototype: undefined4 bflib_system_io_fn_0fdd6f(void);
 * Address  : 0xfdd6f (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fdd6f
 * Callers  : 1 -> bflib_system_io_fn_0eb147
 * Callees  : 2 -> bflib_system_io_fn_0fdd97, bflib_system_io_fn_0fdf16
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fdd6f(void)

{
  undefined4 uval;
  
  if (g_data_00195d50 == -1) {
    return 0;
  }
  if (g_bss_003df82a == 1) {
    uval = bflib_system_io_fn_0fdd97();
    return uval;
  }
  uval = bflib_system_io_fn_0fdf16();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fdd97 (Original VA: 0xfdd97, Ghidra: FUN_000fdd97)
 * Prototype: undefined4 bflib_system_io_fn_0fdd97(void);
 * Address  : 0xfdd97 (Size: 383 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fdd97
 * Callers  : 1 -> bflib_system_io_fn_0fdd6f
 * Callees  : 2 -> LbScreenWaitVbi, LbFileRead
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fdd97(void)

{
  short short_val;
  short short_val_2;
  bool flag;
  char ch;
  char *arg_eax;
  int val;
  int val_2;
  undefined4 uval;
  short *extraout_ECX;
  short *val_3;
  int val_4;
  uint uval_2;
  byte local_40;
  short local_3f;
  short local_3d;
  short local_3b;
  int local_20;
  int local_1c;
  char local_18;
  
  flag = true;
  val = g_bss_003df83e - g_bss_003df846;
  if (g_bss_003df842 < g_bss_003df83e - g_bss_003df846) {
    val = g_bss_003df842;
  }
  uval = 0;
  if (val != 0) {
    LbFileRead();
    LbFileRead();
    local_1c = (int)local_3f;
    short_val = *(short *)(&g_bss_003df84a + (uint)local_40 * 4);
    short_val_2 = *(short *)(&g_bss_003df84c + (uint)local_40 * 4);
    val_3 = extraout_ECX;
    if (0 < val) {
      *extraout_ECX = local_3b;
      val_3 = extraout_ECX + 1;
    }
    uval_2 = (uint)(0 < val);
    val_4 = (int)local_3b;
    val_2 = (int)local_3d;
    if ((int)uval_2 < val) {
      uval_2 = uval_2 + 1;
      *val_3 = local_3d;
      val_3 = val_3 + 1;
    }
    while (local_20 = val_2, (int)uval_2 < val) {
      flag = !flag;
      if (flag) {
        ch = local_18 << 4;
      }
      else {
        ch = *arg_eax;
        arg_eax = arg_eax + 1;
        local_18 = ch;
      }
      val_2 = local_1c * (ch >> 4) + (local_20 * short_val + val_4 * short_val_2 >> 8);
      if (val_2 < -0x8000) {
        val_2 = -0x8000;
      }
      else if (0x7fff < val_2) {
        val_2 = 0x7fff;
      }
      *val_3 = (short)val_2;
      uval_2 = uval_2 + 1;
      local_1c = local_1c * *(int *)(&g_data_00195d54 + ((int)(ch >> 4) & 0xfU) * 4) >> 8;
      val_3 = val_3 + 1;
      val_4 = local_20;
      if (local_1c < 0x10) {
        local_1c = 0x10;
      }
    }
    g_bss_003df846 = g_bss_003df846 + uval_2;
    if (g_bss_003df846 < g_bss_003df83e) {
      uval = 1;
    }
    else {
      LbScreenWaitVbi();
      uval = 0;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fdf16 (Original VA: 0xfdf16, Ghidra: FUN_000fdf16)
 * Prototype: undefined4 bflib_system_io_fn_0fdf16(void);
 * Address  : 0xfdf16 (Size: 529 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fdf16
 * Callers  : 1 -> bflib_system_io_fn_0fdd6f
 * Callees  : 1 -> LbFileRead
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fdf16(void)

{
  char ch;
  short short_val;
  short short_val_2;
  short short_val_3;
  short short_val_4;
  char *arg_eax;
  int val;
  int val_2;
  int val_3;
  undefined4 uval;
  short *extraout_ECX;
  short *val_4;
  int val_5;
  uint uval_2;
  byte local_58;
  byte local_57;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  int local_48;
  int local_44;
  int local_34;
  char *local_24;
  int local_20;
  int local_1c;
  
  val = g_bss_003df83e - g_bss_003df846;
  if (g_bss_003df842 < g_bss_003df83e - g_bss_003df846) {
    val = g_bss_003df842;
  }
  uval = 0;
  if (val != 0) {
    LbFileRead();
    LbFileRead();
    local_48 = (int)local_4e;
    local_20 = (int)local_4c;
    local_1c = (int)local_54;
    short_val = *(short *)(&g_bss_003df84a + (uint)local_58 * 4);
    val_5 = (int)local_56;
    short_val_2 = *(short *)(&g_bss_003df84c + (uint)local_58 * 4);
    short_val_3 = *(short *)(&g_bss_003df84a + (uint)local_57 * 4);
    short_val_4 = *(short *)(&g_bss_003df84c + (uint)local_57 * 4);
    val_4 = extraout_ECX;
    if (0 < val) {
      *extraout_ECX = local_4e;
      extraout_ECX[1] = local_4c;
      val_4 = extraout_ECX + 2;
    }
    uval_2 = (uint)(0 < val);
    local_44 = (int)local_50;
    local_34 = (int)local_52;
    local_24 = arg_eax;
    if ((int)uval_2 < val) {
      *val_4 = local_52;
      uval_2 = uval_2 + 1;
      val_4[1] = local_50;
      val_4 = val_4 + 2;
    }
    for (; (int)uval_2 < val; uval_2 = uval_2 + 1) {
      ch = *local_24;
      val_2 = (ch >> 4) * val_5 + (local_48 * short_val_2 + local_34 * short_val >> 8);
      local_24 = local_24 + 1;
      if (val_2 < -0x8000) {
        val_2 = -0x8000;
      }
      else if (0x7fff < val_2) {
        val_2 = 0x7fff;
      }
      *val_4 = (short)val_2;
      val_5 = val_5 * *(int *)(&g_data_00195d54 + (uint)(byte)(ch >> 4) * 4) >> 8;
      if (val_5 < 0x10) {
        val_5 = 0x10;
      }
      local_48 = local_34;
      val_3 = ((char)(ch << 4) >> 4) * local_1c + (local_44 * short_val_3 + local_20 * short_val_4 >> 8);
      if (val_3 < -0x8000) {
        val_3 = -0x8000;
      }
      else if (0x7fff < val_3) {
        val_3 = 0x7fff;
      }
      val_4[1] = (short)val_3;
      local_1c = local_1c * *(int *)(&g_data_00195d54 + (uint)(byte)((char)(ch << 4) >> 4) * 4) >> 8
      ;
      val_4 = val_4 + 2;
      if (local_1c < 0x10) {
        local_1c = 0x10;
      }
      local_20 = local_44;
      local_44 = val_3;
      local_34 = val_2;
    }
    g_bss_003df846 = g_bss_003df846 + uval_2;
    if (g_bss_003df846 < g_bss_003df83e) {
      uval = 1;
    }
    else {
      LbScreenWaitVbi();
      uval = 0;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fe870 (Original VA: 0xfe870, Ghidra: FUN_000fe870)
 * Prototype: undefined4 bflib_system_io_fn_0fe870(undefined4 param_1);
 * Address  : 0xfe870 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fe870
 * Callers  : 2 -> bflib_sound_bf3_init_sound_0f8eec, bflib_video_bf25_init_music_0fe128
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fe870(undefined4 param_1)

{
  undefined4 uval;
  
  uval = g_data_00195da0;
  g_data_00195da0 = param_1;
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fe883 (Original VA: 0xfe883, Ghidra: FUN_000fe883)
 * Prototype: undefined4 bflib_system_io_fn_0fe883(undefined4 param_1);
 * Address  : 0xfe883 (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fe883
 * Callers  : 2 -> bflib_sound_bf3_init_sound_0f8eec, bflib_video_bf25_init_music_0fe128
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fe883(undefined4 param_1)

{
  undefined4 uval;
  
  uval = g_data_00195da4;
  g_data_00195da4 = param_1;
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fe896 (Original VA: 0xfe896, Ghidra: FUN_000fe896)
 * Prototype: int * bflib_system_io_fn_0fe896(int param_1);
 * Address  : 0xfe896 (Size: 43 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fe896
 * Callers  : 10 -> bflib_system_io_alloc_lock_0eb1dd, bflib_system_io_fn_0feb45, bflib_sound_insufficient_memory_driver_descriptor_11419b, bflib_sound_could_allocate_memory_driver_116704, bflib_sound_could_allocate_memory_driver_1193e6, bflib_sound_insufficient_memory_hwave_descriptor_11b68b, watcom_crt_fn_11bef4, watcom_crt_out_memory_11c6b4 ...
 * Callees  : 1 -> bflib_system_io_fn_0feaaa
 ******************************************************************************/
int * bflib_system_io_fn_0fe896(int param_1)

{
  int *int_ptr;
  int *int_ptr_2;
  
  param_1 = param_1 + 4;
  int_ptr = (int *)(*g_data_00195da0)(param_1);
  int_ptr_2 = int_ptr;
  if (int_ptr != (int *)0x0) {
    bflib_system_io_fn_0feaaa(int_ptr,param_1);
    int_ptr_2 = int_ptr + 1;
    *int_ptr = param_1;
  }
  return int_ptr_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fe8c1 (Original VA: 0xfe8c1, Ghidra: FUN_000fe8c1)
 * Prototype: void bflib_system_io_fn_0fe8c1(int param_1);
 * Address  : 0xfe8c1 (Size: 36 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fe8c1
 * Callers  : 17 -> bflib_system_io_fn_0eb28b, bflib_system_io_fn_0feb45, bflib_sound_insufficient_memory_driver_descriptor_11419b, watcom_crt_fn_114475, watcom_crt_fn_116687, bflib_sound_could_allocate_memory_driver_116704, watcom_crt_driver_file_found_116cb6, watcom_crt_fn_11939c ...
 * Callees  : 1 -> bflib_system_io_fn_0feac2
 ******************************************************************************/
void bflib_system_io_fn_0fe8c1(int param_1)

{
  if (param_1 != 0) {
    bflib_system_io_fn_0feac2(param_1,*(undefined4 *)(param_1 + -4));
    (*g_data_00195da4)(param_1 + -4);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fe8e5 (Original VA: 0xfe8e5, Ghidra: FUN_000fe8e5)
 * Prototype: bool bflib_system_io_fn_0fe8e5(int param_1,int *param_2,uint *param_3,uint *param_4);
 * Address  : 0xfe8e5 (Size: 124 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fe8e5
 * Callers  : 3 -> bflib_sound_insufficient_memory_driver_descriptor_11419b, bflib_sound_could_allocate_memory_driver_116704, watcom_crt_fn_11bb5b
 * Callees  : 1 -> bflib_system_io_fn_0fe993
 ******************************************************************************/
bool bflib_system_io_fn_0fe8e5(int param_1,int *param_2,uint *param_3,uint *param_4)

{
  undefined4 local_44;
  int local_40;
  uint local_28 [3];
  uint local_1c;
  int local_10;
  
  local_40 = param_1;
  local_44 = 0x100;
  (*g_data_00195dac)(local_28,&local_44,0x31);
  if (local_10 == 0) {
    *param_3 = local_28[0] << 0x10;
    *param_4 = local_1c & 0xffff;
    *param_2 = (local_28[0] & 0xffff) << 4;
    bflib_system_io_fn_0fe993(*param_3 >> 0xc,param_1 * 0x10 + (*param_3 >> 0xc) + -1);
  }
  return local_10 == 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fe961 (Original VA: 0xfe961, Ghidra: FUN_000fe961)
 * Prototype: void bflib_system_io_fn_0fe961(undefined4 param_1,undefined4 param_2,uint param_3);
 * Address  : 0xfe961 (Size: 50 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fe961
 * Callers  : 5 -> bflib_sound_insufficient_memory_driver_descriptor_11419b, watcom_crt_fn_114475, watcom_crt_fn_116687, bflib_sound_could_allocate_memory_driver_116704, watcom_crt_fn_11bc18
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0fe961(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 local_40 [3];
  uint local_34;
  undefined1 local_24 [28];
  
  local_34 = param_3 & 0xffff;
  local_40[0] = 0x101;
  (*g_data_00195dac)(local_24,local_40,0x31);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fe993 (Original VA: 0xfe993, Ghidra: FUN_000fe993)
 * Prototype: bool bflib_system_io_fn_0fe993(uint param_1,uint param_2);
 * Address  : 0xfe993 (Size: 136 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fe993
 * Callers  : 13 -> bflib_system_io_audio_driver_op_0f9623, bflib_system_io_fn_0fe8e5, bflib_system_io_fn_0feaaa, bflib_system_io_fn_0fed5e, watcom_crt_fn_113b7c, watcom_crt_fn_115b91, watcom_crt_fn_115bb6, watcom_crt_fn_117561 ...
 * Callees  : 0 -> 
 ******************************************************************************/
bool bflib_system_io_fn_0fe993(uint param_1,uint param_2)

{
  int loop_i;
  uint *word_ptr;
  uint local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 local_28 [24];
  int local_10;
  
  word_ptr = local_44;
  for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = 0;
    word_ptr = word_ptr + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr = 0;
    word_ptr = (uint *)((int)word_ptr + 1);
  }
  local_44[1] = param_1;
  if (param_2 <= param_1) {
    local_44[1] = param_2;
  }
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  local_44[2] = local_44[1] & 0xffff;
  local_30 = (param_1 - local_44[1]) + 1;
  local_44[0] = 0x600;
  local_34 = local_30 >> 0x10;
  local_44[1] = local_44[1] >> 0x10;
  local_30 = local_30 & 0xffff;
  (*g_data_00195dac)(local_28,local_44,0x31);
  return local_10 == 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fea1b (Original VA: 0xfea1b, Ghidra: FUN_000fea1b)
 * Prototype: bool bflib_system_io_fn_0fea1b(uint param_1,uint param_2);
 * Address  : 0xfea1b (Size: 143 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fea1b
 * Callers  : 10 -> bflib_system_io_fn_0fdaaa, bflib_system_io_fn_0feac2, bflib_system_io_fn_0fefe4, watcom_crt_fn_114791, watcom_crt_fn_1174a9, watcom_crt_fn_117ca1, watcom_crt_fn_11ac05, watcom_crt_fn_11b895 ...
 * Callees  : 0 -> 
 ******************************************************************************/
bool bflib_system_io_fn_0fea1b(uint param_1,uint param_2)

{
  int loop_i;
  uint uval;
  uint *word_ptr;
  uint local_4c [4];
  uint local_3c;
  uint local_38;
  undefined1 local_30 [24];
  int local_18;
  uint local_14;
  
  uval = param_2;
  if (param_1 < param_2) {
    uval = param_1;
  }
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  local_14 = (param_1 - uval) + 1;
  word_ptr = local_4c;
  for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = 0;
    word_ptr = word_ptr + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr = 0;
    word_ptr = (uint *)((int)word_ptr + 1);
  }
  local_4c[1] = uval >> 0x10;
  local_3c = local_14 >> 0x10;
  local_38 = local_14 & 0xffff;
  local_4c[2] = uval & 0xffff;
  local_4c[0] = 0x601;
  (*g_data_00195dac)(local_30,local_4c,0x31);
  return local_18 == 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0feaaa (Original VA: 0xfeaaa, Ghidra: FUN_000feaaa)
 * Prototype: void bflib_system_io_fn_0feaaa(int param_1,int param_2);
 * Address  : 0xfeaaa (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0feaaa
 * Callers  : 8 -> bflib_system_io_audio_driver_op_0f9623, bflib_system_io_fn_0fe896, watcom_crt_fn_10a990, watcom_crt_fn_113b7c, watcom_crt_fn_115bb6, watcom_crt_fn_117ccb, watcom_crt_fn_11c2ae, watcom_crt_fn_11cbe6
 * Callees  : 1 -> bflib_system_io_fn_0fe993
 ******************************************************************************/
void bflib_system_io_fn_0feaaa(int param_1,int param_2)

{
  bflib_system_io_fn_0fe993(param_1,param_1 + param_2 + -1);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0feac2 (Original VA: 0xfeac2, Ghidra: FUN_000feac2)
 * Prototype: void bflib_system_io_fn_0feac2(int param_1,int param_2);
 * Address  : 0xfeac2 (Size: 24 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0feac2
 * Callers  : 5 -> bflib_system_io_fn_0fe8c1, watcom_crt_fn_10a8e0, watcom_crt_fn_114791, watcom_crt_fn_1174a9, watcom_crt_fn_11ac05
 * Callees  : 1 -> bflib_system_io_fn_0fea1b
 ******************************************************************************/
void bflib_system_io_fn_0feac2(int param_1,int param_2)

{
  bflib_system_io_fn_0fea1b(param_1,param_1 + param_2 + -1);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0feae0 (Original VA: 0xfeae0, Ghidra: FUN_000feae0)
 * Prototype: int bflib_system_io_fn_0feae0(undefined4 param_1);
 * Address  : 0xfeae0 (Size: 101 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0feae0
 * Callers  : 0 -> 
 * Callees  : 3 -> watcom_crt_fn_115a13, watcom_crt_fn_115b37, watcom_crt_fn_115b3d
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int bflib_system_io_fn_0feae0(undefined4 param_1)

{
  int val;
  int val_2;
  
  g_data_00195d9c = 0;
  val = watcom_crt_fn_115a13(param_1,0);
  if ((val != 0) && (val != -1)) {
    val_2 = watcom_crt_fn_115b37(val,0);
    if (val_2 == -1) {
      g_data_00195d9c = 5;
    }
    watcom_crt_fn_115b3d(val);
    return val_2;
  }
  g_data_00195d9c = 3;
  return -1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0feb45 (Original VA: 0xfeb45, Ghidra: FUN_000feb45)
 * Prototype: int * bflib_system_io_fn_0feb45(undefined4 param_1,int *param_2);
 * Address  : 0xfeb45 (Size: 210 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0feb45
 * Callers  : 3 -> watcom_crt_driver_file_found_116cb6, watcom_crt_driver_file_found_119a6e, watcom_crt_out_memory_11c6b4
 * Callees  : 7 -> bflib_system_io_fn_0fe896, bflib_system_io_fn_0fe8c1, watcom_crt_fn_115a13, watcom_crt_fn_115a89, watcom_crt_fn_115b0d, watcom_crt_fn_115b37, watcom_crt_fn_115b3d
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * bflib_system_io_fn_0feb45(undefined4 param_1,int *param_2)

{
  int val;
  int val_2;
  int *int_ptr;
  int val_3;
  int *int_ptr_2;
  
  g_data_00195d9c = 0;
  val = watcom_crt_fn_115a13(param_1,0);
  if ((val == 0) || (val == -1)) {
    g_data_00195d9c = 3;
  }
  else {
    val_2 = watcom_crt_fn_115b37(val,0);
    watcom_crt_fn_115b0d(val,0);
    if ((param_2 == (int *)0x0) || (int_ptr = param_2, param_2 == (int *)0xffffffff)) {
      int_ptr = (int *)bflib_system_io_fn_0fe896(val_2 + 4);
    }
    if (int_ptr == (int *)0x0) {
      g_data_00195d9c = 2;
    }
    else {
      int_ptr_2 = int_ptr;
      if (param_2 == (int *)0xffffffff) {
        int_ptr_2 = int_ptr + 1;
        *int_ptr = val_2;
      }
      val_3 = watcom_crt_fn_115a89(val,int_ptr_2,val_2);
      if (val_3 == val_2) {
        watcom_crt_fn_115b3d(val);
        return int_ptr;
      }
      if (int_ptr != param_2) {
        bflib_system_io_fn_0fe8c1(int_ptr);
      }
      g_data_00195d9c = 5;
    }
    watcom_crt_fn_115b3d(val);
  }
  return (int *)0x0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fec17 (Original VA: 0xfec17, Ghidra: FUN_000fec17)
 * Prototype: undefined4 bflib_system_io_fn_0fec17(undefined4 param_1,undefined4 param_2,int param_3);
 * Address  : 0xfec17 (Size: 104 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fec17
 * Callers  : 0 -> 
 * Callees  : 3 -> watcom_crt_fn_115a2f, watcom_crt_fn_115acb, watcom_crt_fn_115b3d
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000fec62) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0fec17(undefined4 param_1,undefined4 param_2,int param_3)

{
  int val;
  int val_2;
  
  g_data_00195d9c = 0;
  val = watcom_crt_fn_115a2f(param_1);
  if (((val != 0) && (val != -1)) &&
     (val_2 = watcom_crt_fn_115acb(val,param_2,param_3), val_2 == param_3)) {
    watcom_crt_fn_115b3d(val);
    return 1;
  }
  g_data_00195d9c = 4;
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fec7f (Original VA: 0xfec7f, Ghidra: FUN_000fec7f)
 * Prototype: undefined4 bflib_system_io_fn_0fec7f(undefined4 param_1,undefined4 param_2,int param_3);
 * Address  : 0xfec7f (Size: 104 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fec7f
 * Callers  : 0 -> 
 * Callees  : 3 -> watcom_crt_fn_115a4a, watcom_crt_fn_115acb, watcom_crt_fn_115b3d
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000fecca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bflib_system_io_fn_0fec7f(undefined4 param_1,undefined4 param_2,int param_3)

{
  int val;
  int val_2;
  
  g_data_00195d9c = 0;
  val = watcom_crt_fn_115a4a(param_1);
  if (((val != 0) && (val != -1)) &&
     (val_2 = watcom_crt_fn_115acb(val,param_2,param_3), val_2 == param_3)) {
    watcom_crt_fn_115b3d(val);
    return 1;
  }
  g_data_00195d9c = 4;
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fece8 (Original VA: 0xfece8, Ghidra: FUN_000fece8)
 * Prototype: longlong bflib_system_io_fn_0fece8(void);
 * Address  : 0xfece8 (Size: 27 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fece8
 * Callers  : 1 -> bflib_system_io_fn_0eb7b0
 * Callees  : 0 -> 
 ******************************************************************************/
longlong bflib_system_io_fn_0fece8(void)

{
  code *str_ptr;
  undefined1 uval;
  undefined1 *arg_eax;
  undefined2 extraout_CX;
  undefined2 extraout_DX;
  uint unaff_retaddr;
  
  str_ptr = (code *)swi(0x21);
  uval = (*str_ptr)();
  *(undefined2 *)(arg_eax + 2) = extraout_CX;
  arg_eax[1] = (char)((ushort)extraout_DX >> 8);
  *arg_eax = (char)extraout_DX;
  arg_eax[4] = uval;
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fed03 (Original VA: 0xfed03, Ghidra: FUN_000fed03)
 * Prototype: longlong bflib_system_io_fn_0fed03(void);
 * Address  : 0xfed03 (Size: 26 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fed03
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
longlong bflib_system_io_fn_0fed03(void)

{
  code *str_ptr;
  undefined1 *arg_eax;
  undefined2 extraout_CX;
  undefined2 extraout_DX;
  uint unaff_retaddr;
  
  str_ptr = (code *)swi(0x21);
  (*str_ptr)();
  *arg_eax = (char)((ushort)extraout_CX >> 8);
  arg_eax[1] = (char)extraout_CX;
  arg_eax[2] = (char)((ushort)extraout_DX >> 8);
  arg_eax[3] = (char)extraout_DX;
  return (ulonglong)unaff_retaddr << 0x20;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fed1d (Original VA: 0xfed1d, Ghidra: FUN_000fed1d)
 * Prototype: void bflib_system_io_fn_0fed1d(void);
 * Address  : 0xfed1d (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fed1d
 * Callers  : 12 -> bflib_system_io_fn_0ebc98, bflib_system_io_fn_0f0bb0, bflib_video_fn_0f0d90, bflib_system_io_fn_0f7786, lbnet_allocated_fine_handler_size_101360, bflib_sound_closing_socket_101c78, bflib_system_io_fn_101f88, lbnet_network_node_102108 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0fed1d(void)

{
  undefined2 *arg_eax;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  
  arg_eax[1] = in_CS;
  arg_eax[3] = in_DS;
  *arg_eax = in_ES;
  arg_eax[2] = in_SS;
  arg_eax[4] = in_FS;
  arg_eax[5] = in_GS;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fed45 (Original VA: 0xfed45, Ghidra: FUN_000fed45)
 * Prototype: undefined4 bflib_system_io_fn_0fed45(void);
 * Address  : 0xfed45 (Size: 25 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fed45
 * Callers  : 12 -> bflib_system_io_fn_0ebc98, bflib_system_io_fn_0f0bb0, bflib_video_fn_0f0d90, bflib_system_io_fn_0f7786, lbnet_allocated_fine_handler_size_101360, bflib_sound_closing_socket_101c78, bflib_system_io_fn_101f88, lbnet_network_node_102108 ...
 * Callees  : 1 -> watcom_crt_fn_11db26
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fed45(void)

{
  undefined4 *arg_ebx;
  
  watcom_crt_fn_11db26();
  return *arg_ebx;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fed5e (Original VA: 0xfed5e, Ghidra: FUN_000fed5e)
 * Prototype: void bflib_system_io_fn_0fed5e(void);
 * Address  : 0xfed5e (Size: 49 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fed5e
 * Callers  : 1 -> bflib_sound_AIL_startup_0fee88
 * Callees  : 2 -> bflib_system_io_audio_driver_op_0f9623, bflib_system_io_fn_0fe993
 ******************************************************************************/
void bflib_system_io_fn_0fed5e(void)

{
  if (g_data_00195db4 == 0) {
    bflib_system_io_fn_0fe993(bflib_system_io_fn_0fed5e,bflib_system_io_fn_0fefe4);
    g_data_00195db4 = 1;
    bflib_system_io_audio_driver_op_0f9623();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fed8f (Original VA: 0xfed8f, Ghidra: FUN_000fed8f)
 * Prototype: undefined4 bflib_system_io_fn_0fed8f(void);
 * Address  : 0xfed8f (Size: 19 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fed8f
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f4cb8
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fed8f(void)

{
  undefined4 uval;
  
  uval = bflib_system_io_fn_0f4cb8();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0feda2 (Original VA: 0xfeda2, Ghidra: FUN_000feda2)
 * Prototype: void bflib_system_io_fn_0feda2(void);
 * Address  : 0xfeda2 (Size: 15 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0feda2
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f4d9b
 ******************************************************************************/
void bflib_system_io_fn_0feda2(void)

{
  bflib_system_io_fn_0f4d9b();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fedb1 (Original VA: 0xfedb1, Ghidra: FUN_000fedb1)
 * Prototype: undefined4 bflib_system_io_fn_0fedb1(void);
 * Address  : 0xfedb1 (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fedb1
 * Callers  : 1 -> bflib_sound_AIL_startup_0fee88
 * Callees  : 1 -> watcom_crt_fn_10ed88
 ******************************************************************************/
undefined4 bflib_system_io_fn_0fedb1(void)

{
  undefined4 uval;
  
  uval = watcom_crt_fn_10ed88();
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fedbe (Original VA: 0xfedbe, Ghidra: FUN_000fedbe)
 * Prototype: void bflib_system_io_fn_0fedbe(void);
 * Address  : 0xfedbe (Size: 21 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fedbe
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
void bflib_system_io_fn_0fedbe(void)

{
  bflib_system_io_fn_0f7786();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fedeb (Original VA: 0xfedeb, Ghidra: FUN_000fedeb)
 * Prototype: void bflib_system_io_fn_0fedeb(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfedeb (Size: 143 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fedeb
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
void bflib_system_io_fn_0fedeb(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  switch(param_2) {
  case 0:
    dk_sprintf(param_4,param_3);
    return;
  case 1:
    dk_sprintf(param_4,param_3,*param_1);
    return;
  case 2:
    dk_sprintf(param_4,param_3,*param_1,param_1[1]);
    return;
  case 3:
    dk_sprintf(param_4,param_3,*param_1,param_1[1],param_1[2]);
    return;
  case 4:
    dk_sprintf(param_4,param_3,*param_1,param_1[1],param_1[2],param_1[3]);
    return;
  case 5:
    dk_sprintf(param_4,param_3,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fee0c (Original VA: 0xfee0c, Ghidra: FUN_000fee0c)
 * Prototype: void bflib_system_io_fn_0fee0c(void);
 * Address  : 0xfee0c (Size: 14 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fee0c
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
void bflib_system_io_fn_0fee0c(void)

{
  dk_sprintf();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0fefe4 (Original VA: 0xfefe4, Ghidra: FUN_000fefe4)
 * Prototype: void bflib_system_io_fn_0fefe4(void);
 * Address  : 0xfefe4 (Size: 42 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0fefe4
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0fea1b
 ******************************************************************************/
void bflib_system_io_fn_0fefe4(void)

{
  if (g_data_00195db4 != 0) {
    bflib_system_io_fn_0fea1b(bflib_system_io_fn_0fed5e,bflib_system_io_fn_0fefe4);
    g_data_00195db4 = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_pure_virtual_function_called_0ff00e (Original VA: 0xff00e, Ghidra: FUN_000ff00e)
 * Prototype: void bflib_system_io_pure_virtual_function_called_0ff00e(void);
 * Address  : 0xff00e (Size: 37 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'pure virtual function called!'
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_1136e4
 ******************************************************************************/
void bflib_system_io_pure_virtual_function_called_0ff00e(void)

{
  if (g_data_00195fa8 == 0) {
    g_data_00195fa8 = 1;
    watcom_crt_fn_1136e4();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff040 (Original VA: 0xff040, Ghidra: FUN_000ff040)
 * Prototype: undefined8 bflib_system_io_fn_0ff040(void);
 * Address  : 0xff040 (Size: 169 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff040
 * Callers  : 5 -> LbNetwork_Init_0ed4e0, lbnet_GenericIPXInit_0ef8e8, bflib_system_io_fn_0efcf0, watcom_crt_fn_11e100, watcom_crt_fn_11e174
 * Callees  : 1 -> watcom_crt_fn_11e0b0
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ff040(void)

{
  undefined4 *word_ptr;
  char ch;
  int val;
  undefined4 *word_ptr_2;
  undefined4 arg_edx;
  char *str_ptr;
  char *str_ptr_2;
  undefined4 *word_ptr_3;
  
  val = watcom_crt_fn_11e0b0();
  word_ptr = (undefined4 *)(val + -4);
  *(undefined ***)(val + 0xd78) = &PTR_FUN_000ff0ec_001747b4;
  *word_ptr = 0;
  word_ptr_3 = word_ptr;
  do {
    word_ptr_2 = (undefined4 *)((int)word_ptr_3 + 0x3d);
    *(undefined4 *)((int)word_ptr_3 + 9) = 0;
    word_ptr_3 = word_ptr_2;
  } while (word_ptr_2 != (undefined4 *)(val + 0x79c));
  *(undefined4 *)(val + 0x7a0) = 0;
  str_ptr = &g_data_00171410;
  *(undefined4 *)(val + 0x7a4) = 0;
  str_ptr_2 = (char *)(val + 0xd4c);
  *(undefined4 *)(val + 0x7a8) = 0;
  do {
    ch = *str_ptr;
    *str_ptr_2 = ch;
    if (ch == '\0') break;
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
  } while (ch != '\0');
  *(undefined4 *)(val + 0xd70) = 0;
  *(undefined4 *)(val + 0xd74) = 0;
  *(undefined ***)(val + 0xd6c) = &PTR_FUN_000ff904_00195db8;
  return CONCAT44(arg_edx,word_ptr);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff308 (Original VA: 0xff308, Ghidra: FUN_000ff308)
 * Prototype: uint bflib_system_io_fn_0ff308(void);
 * Address  : 0xff308 (Size: 143 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff308
 * Callers  : 2 -> lbnet_Receive_0ffb54, lbnet_Send_1002dc
 * Callees  : 0 -> 
 ******************************************************************************/
uint bflib_system_io_fn_0ff308(void)

{
  bool flag;
  int arg_eax;
  uint uval;
  uint arg_ecx;
  int loop_i;
  int arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  
  flag = false;
  uval = 0;
  loop_i = arg_eax;
  if (*(int *)(arg_eax + 0x7ac) != 0) {
    do {
      if (arg_edx == *(int *)(loop_i + 0x7b1)) {
        flag = true;
        arg_ecx = uval;
      }
      uval = uval + 1;
      loop_i = loop_i + 0x2d;
    } while (uval < *(uint *)(arg_eax + 0x7ac));
  }
  if (flag) {
    uval = *(int *)(arg_eax + 0x7ac) - 1;
    if (arg_ecx != uval) {
      uval = arg_ecx * 0x2d + 0x2d + arg_eax;
      while (arg_ecx < *(int *)(arg_eax + 0x7ac) - 1U) {
        word_ptr_2 = (undefined4 *)(uval + 0x783);
        word_ptr = (undefined4 *)(uval + 0x7b0);
        uval = uval + 0x2d;
        arg_ecx = arg_ecx + 1;
        for (loop_i = 0xb; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_2 = *word_ptr;
          word_ptr = word_ptr + 1;
          word_ptr_2 = word_ptr_2 + 1;
        }
        *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      }
    }
    *(int *)(arg_eax + 0x7ac) = *(int *)(arg_eax + 0x7ac) + -1;
  }
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff398 (Original VA: 0xff398, Ghidra: FUN_000ff398)
 * Prototype: void bflib_system_io_fn_0ff398(void);
 * Address  : 0xff398 (Size: 11 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff398
 * Callers  : 5 -> lbnet_Start_103528, bflib_system_io_fn_1037c8, lbnet_Start_11e484, lbnet_Start_11e554, lbnet_Stop_11eaf8
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0ff398(void)

{
  int arg_eax;
  
  *(undefined4 *)(arg_eax + 0x7ac) = 0;
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff3a4 (Original VA: 0xff3a4, Ghidra: FUN_000ff3a4)
 * Prototype: undefined8 bflib_system_io_fn_0ff3a4(void);
 * Address  : 0xff3a4 (Size: 306 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff3a4
 * Callers  : 2 -> bflib_system_io_bu_gi_1044e0, lbnet_Enumerate_11e9e8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_0ff3a4(void)

{
  char ch;
  bool flag;
  int arg_eax;
  int loop_i;
  uint uval;
  int arg_edx;
  char *str_ptr;
  char *arg_ebx;
  int val;
  char *str_ptr_2;
  int local_18;
  uint local_14;
  
  flag = false;
  loop_i = 0;
  local_14 = 0;
  val = arg_eax;
  do {
    if ((*(int *)(val + 9) != 0) && (*(int *)(val + 5) == arg_edx)) {
      flag = true;
      loop_i = arg_eax + 4 + local_14 * 0x3d;
    }
    local_14 = local_14 + 1;
    val = val + 0x3d;
  } while (local_14 < 0x20);
  if (!flag) {
    flag = true;
    val = arg_eax + 4;
    local_14 = 0;
    local_18 = val;
    do {
      if (*(int *)(arg_eax + 9) == 0) {
        val = local_14 * 0x3d + val;
        *(int *)(arg_eax + 5) = arg_edx;
        str_ptr = (char *)(val + 9);
        if ((str_ptr == (char *)0x0) || (arg_ebx == (char *)0x0)) goto LAB_000ff487;
        uval = 0xffffffff;
        str_ptr_2 = arg_ebx;
        goto code_r0x000ff43d;
      }
      arg_eax = arg_eax + 0x3d;
      local_18 = local_18 + 0x3d;
      local_14 = local_14 + 1;
      if (0x1f < local_14) {
        flag = false;
      }
    } while (flag);
  }
  return CONCAT44(local_14,loop_i);
  while( true ) {
    uval = uval - 1;
    ch = *str_ptr_2;
    str_ptr_2 = str_ptr_2 + 1;
    if (ch == '\0') break;
code_r0x000ff43d:
    if (uval == 0) break;
  }
  str_ptr_2 = str_ptr;
  if (~uval - 1 < 0x20) {
    do {
      ch = *arg_ebx;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = arg_ebx[1];
      arg_ebx = arg_ebx + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
  }
  else {
    for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined4 *)str_ptr = *(undefined4 *)arg_ebx;
      arg_ebx = arg_ebx + 4;
      str_ptr = str_ptr + 4;
    }
    for (loop_i = 3; loop_i != 0; loop_i = loop_i + -1) {
      *str_ptr = *arg_ebx;
      arg_ebx = arg_ebx + 1;
      str_ptr = str_ptr + 1;
    }
    *(undefined1 *)(val + 0x28) = 0;
    str_ptr = (char *)(val + 0x29);
  }
LAB_000ff487:
  *(undefined4 *)(arg_eax + 9) = 1;
  return CONCAT44(str_ptr,local_18);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff4d8 (Original VA: 0xff4d8, Ghidra: FUN_000ff4d8)
 * Prototype: void bflib_system_io_fn_0ff4d8(void);
 * Address  : 0xff4d8 (Size: 25 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff4d8
 * Callers  : 2 -> bflib_system_io_bu_gi_1044e0, lbnet_Enumerate_11e9e8
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0ff4d8(void)

{
  int arg_eax;
  int val;
  int val_2;
  
  val_2 = arg_eax;
  do {
    val = val_2 + 0x3d;
    *(undefined4 *)(val_2 + 9) = 0;
    val_2 = val;
  } while (val != arg_eax + 0x7a0);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff4f4 (Original VA: 0xff4f4, Ghidra: FUN_000ff4f4)
 * Prototype: undefined1 bflib_system_io_fn_0ff4f4(void);
 * Address  : 0xff4f4 (Size: 70 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff4f4
 * Callers  : 1 -> lbnet_Enumerate_11ea38
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 bflib_system_io_fn_0ff4f4(void)

{
  int arg_eax;
  undefined4 arg_ebx;
  uint uval;
  int *int_ptr;
  int *int_ptr_2;
  int val;
  undefined1 auStack_2c [8];
  int aiStack_24 [4];
  undefined1 local_14;
  
  int_ptr_2 = aiStack_24 + 3;
  uval = 0;
  local_14 = 0;
  if (*(int *)(arg_eax + 0x7ac) != 0) {
    val = arg_eax + 0x7b0;
    int_ptr = aiStack_24 + 3;
    do {
      int_ptr[-1] = arg_ebx;
      int_ptr_2 = int_ptr + -2;
      int_ptr[-2] = val;
      uval = uval + 1;
      int_ptr[-3] = 0xff521;
      (*(code *)*int_ptr)();
      val = val + 0x2d;
      int_ptr = int_ptr + -2;
    } while (uval < *(uint *)(arg_eax + 0x7ac));
  }
  return *(undefined1 *)((int)int_ptr_2 + 4);
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff53c (Original VA: 0xff53c, Ghidra: FUN_000ff53c)
 * Prototype: int bflib_system_io_fn_0ff53c(void);
 * Address  : 0xff53c (Size: 20 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff53c
 * Callers  : 2 -> lbnet_Start_11e554, lbnet_warning_network_serialsp_privatereceive_11ee0c
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_0ff53c(void)

{
  char ch;
  uint uval;
  char *arg_edx;
  
  uval = 0xffffffff;
  do {
    if (uval == 0) break;
    uval = uval - 1;
    ch = *arg_edx;
    arg_edx = arg_edx + 1;
  } while (ch != '\0');
  return ~uval + 8;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff628 (Original VA: 0xff628, Ghidra: FUN_000ff628)
 * Prototype: undefined4 bflib_system_io_fn_0ff628(void);
 * Address  : 0xff628 (Size: 6 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff628
 * Callers  : 6 -> LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694, lbnet_HostDataCollection_0eedc0, lbnet_CompleteTwoPlayerExchange_100bb8, lbnet_TwoPlayerCallback_100e14, lbnet_Stop_11eaf8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ff628(void)

{
  return 8;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff678 (Original VA: 0xff678, Ghidra: FUN_000ff678)
 * Prototype: undefined4 bflib_system_io_fn_0ff678(void);
 * Address  : 0xff678 (Size: 38 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff678
 * Callers  : 4 -> lbnet_Start_10646c, watcom_crt_fn_1082bc, watcom_crt_fn_109acc, watcom_crt_fn_10a3b0
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 bflib_system_io_fn_0ff678(void)

{
  undefined4 *arg_eax;
  int loop_i;
  undefined4 *arg_edx;
  
  for (loop_i = 1; arg_eax = arg_eax + 1, loop_i != 0; loop_i = loop_i + -1) {
    *arg_edx = *arg_eax;
    arg_edx = arg_edx + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)arg_edx = *(undefined1 *)arg_eax;
    arg_eax = (undefined4 *)((int)arg_eax + 1);
    arg_edx = (undefined4 *)((int)arg_edx + 1);
  }
  return 1;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff834 (Original VA: 0xff834, Ghidra: FUN_000ff834)
 * Prototype: void bflib_system_io_fn_0ff834(void);
 * Address  : 0xff834 (Size: 96 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff834
 * Callers  : 5 -> lbnet_Start_103528, bflib_system_io_fn_1037c8, bflib_system_io_bu_gi_1044e0, watcom_crt_fn_109428, lbnet_Start_11e484
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_0ff834(void)

{
  char ch;
  char *arg_eax;
  uint loop_i;
  char *arg_edx;
  uint arg_ebx;
  char *str_ptr;
  
  if ((arg_eax != (char *)0x0) && (arg_edx != (char *)0x0)) {
    loop_i = 0xffffffff;
    str_ptr = arg_edx;
    do {
      if (loop_i == 0) break;
      loop_i = loop_i - 1;
      ch = *str_ptr;
      str_ptr = str_ptr + 1;
    } while (ch != '\0');
    if (~loop_i - 1 < arg_ebx) {
      do {
        ch = *arg_edx;
        *arg_eax = ch;
        if (ch == '\0') {
          return;
        }
        ch = arg_edx[1];
        arg_edx = arg_edx + 2;
        arg_eax[1] = ch;
        arg_eax = arg_eax + 2;
      } while (ch != '\0');
      return;
    }
    str_ptr = arg_eax;
    for (loop_i = arg_ebx - 1 >> 2; loop_i != 0; loop_i = loop_i - 1) {
      *(undefined4 *)str_ptr = *(undefined4 *)arg_edx;
      arg_edx = arg_edx + 4;
      str_ptr = str_ptr + 4;
    }
    for (loop_i = arg_ebx - 1 & 3; loop_i != 0; loop_i = loop_i - 1) {
      *str_ptr = *arg_edx;
      arg_edx = arg_edx + 1;
      str_ptr = str_ptr + 1;
    }
    arg_eax[arg_ebx - 1] = '\0';
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_0ff9f8 (Original VA: 0xff9f8, Ghidra: FUN_000ff9f8)
 * Prototype: uint bflib_system_io_fn_0ff9f8(void);
 * Address  : 0xff9f8 (Size: 312 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x0ff9f8
 * Callers  : 2 -> lbnet_Receive_0ffb54, lbnet_Send_1002dc
 * Callees  : 0 -> 
 ******************************************************************************/
uint bflib_system_io_fn_0ff9f8(void)

{
  bool flag;
  uint arg_eax;
  uint uval;
  int loop_i;
  undefined4 *arg_edx;
  uint uval_2;
  uint unaff_EBP;
  int *int_ptr;
  int local_28 [4];
  uint local_18;
  
  int_ptr = local_28;
  local_18 = arg_eax;
  for (loop_i = 1; arg_edx = arg_edx + 1, loop_i != 0; loop_i = loop_i + -1) {
    *int_ptr = *arg_edx;
    int_ptr = int_ptr + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)int_ptr = *(undefined1 *)arg_edx;
    arg_edx = (undefined4 *)((int)arg_edx + 1);
    int_ptr = (undefined4 *)((int)int_ptr + 1);
  }
  uval_2 = 0;
  local_28[2] = 0;
  uval = local_18;
  if (*(int *)(local_18 + 0x7ac) != 0) {
    do {
      if ((local_28[0] == *(int *)(uval + 0x7b1)) && (*(int *)(uval + 0x7b9) != 0)) {
        local_28[2] = 1;
        local_28[1] = uval_2;
      }
      uval_2 = uval_2 + 1;
      uval = uval + 0x2d;
    } while (uval_2 < *(uint *)(local_18 + 0x7ac));
  }
  uval = local_18;
  if (local_28[2] != 0) {
    flag = false;
    uval_2 = 0;
    if (*(int *)(local_18 + 0x7ac) != 0) {
      do {
        if (*(int *)(uval + 0x7b9) == 0) {
          if (flag) {
            if (*(uint *)(uval + 0x7b1) < unaff_EBP) {
              unaff_EBP = *(uint *)(uval + 0x7b1);
              local_28[3] = uval_2;
            }
          }
          else {
            flag = true;
            unaff_EBP = *(uint *)(uval + 0x7b1);
            local_28[3] = uval_2;
          }
        }
        uval_2 = uval_2 + 1;
        uval = uval + 0x2d;
      } while (uval_2 < *(uint *)(local_18 + 0x7ac));
    }
    if (flag) {
      *(undefined4 *)(local_28[3] * 0x2d + local_18 + 0x7b9) = 1;
      *(undefined4 *)(local_28[1] * 0x2d + local_18 + 0x7b9) = 0;
      uval = *(uint *)(local_18 + 0xd70);
      if (*(int *)(uval + 8) != 0) {
        uval = (**(code **)(uval + 8))(unaff_EBP,*(undefined4 *)(local_18 + 0xd78));
      }
    }
  }
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : bflib_system_io_fn_100708 (Original VA: 0x100708, Ghidra: FUN_00100708)
 * Prototype: void bflib_system_io_fn_100708(void);
 * Address  : 0x100708 (Size: 13 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x100708
 * Callers  : 2 -> lbnet_Start_11e554, lbnet_Enumerate_11ea38
 * Callees  : 1 -> lbnet_Receive_0ffb54
 ******************************************************************************/
void bflib_system_io_fn_100708(void)

{
  lbnet_Receive_0ffb54();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_1008a8 (Original VA: 0x1008a8, Ghidra: FUN_001008a8)
 * Prototype: undefined1 bflib_system_io_fn_1008a8(void);
 * Address  : 0x1008a8 (Size: 3 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1008a8
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 bflib_system_io_fn_1008a8(void)

{
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_1012c0 (Original VA: 0x1012c0, Ghidra: FUN_001012c0)
 * Prototype: undefined8 bflib_system_io_fn_1012c0(void);
 * Address  : 0x1012c0 (Size: 86 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1012c0
 * Callers  : 3 -> LbNetwork_Init_0ed4e0, lbnet_GenericIPXInit_0ef8e8, bflib_system_io_fn_0efcf0
 * Callees  : 2 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a
 ******************************************************************************/
undefined8 bflib_system_io_fn_1012c0(void)

{
  int arg_eax;
  undefined4 uval;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 arg_edx;
  
  *(undefined4 *)(arg_eax + 0x1e) = 0;
  *(undefined4 *)(arg_eax + 0x16) = 0;
  *(undefined2 *)(arg_eax + 0x3e) = 0;
  *(undefined2 *)(arg_eax + 0x40) = 0;
  *(undefined2 *)(arg_eax + 0x42) = 0;
  *(undefined2 *)(arg_eax + 0x44) = 0;
  *(undefined2 *)(arg_eax + 0x46) = 0;
  *(undefined4 *)(arg_eax + 8) = 0;
  uval = bflib_system_io_fn_0e8d4a();
  *extraout_ECX = uval;
  LbScreenWaitVbi();
  return CONCAT44(arg_edx,extraout_ECX_00);
}

/******************************************************************************
 * Function : bflib_system_io_fn_101318 (Original VA: 0x101318, Ghidra: FUN_00101318)
 * Prototype: undefined4 bflib_system_io_fn_101318(void);
 * Address  : 0x101318 (Size: 71 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x101318
 * Callers  : 1 -> bflib_system_io_fn_103134
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
undefined4 bflib_system_io_fn_101318(void)

{
  int arg_eax;
  undefined4 extraout_ECX;
  
  *(undefined4 *)(arg_eax + 0x1e) = 0;
  *(undefined4 *)(arg_eax + 0x16) = 0;
  *(undefined2 *)(arg_eax + 0x40) = 0;
  *(undefined2 *)(arg_eax + 0x42) = 0;
  *(undefined2 *)(arg_eax + 0x44) = 0;
  *(undefined2 *)(arg_eax + 0x46) = 0;
  *(undefined4 *)(arg_eax + 8) = 0;
  LbScreenWaitVbi();
  return extraout_ECX;
}

/******************************************************************************
 * Function : bflib_system_io_fn_101f88 (Original VA: 0x101f88, Ghidra: FUN_00101f88)
 * Prototype: undefined4 bflib_system_io_fn_101f88(void);
 * Address  : 0x101f88 (Size: 100 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x101f88
 * Callers  : 0 -> 
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45
 ******************************************************************************/
undefined4 bflib_system_io_fn_101f88(void)

{
  int extraout_ECX;
  undefined2 arg_dx;
  int arg_ebx;
  
  LbScreenWaitVbi();
  bflib_system_io_fn_0fed1d(0x300,arg_dx);
  *(undefined2 *)(arg_ebx + 0x30) = *(undefined2 *)(extraout_ECX + 0x36);
  *(undefined2 *)(arg_ebx + 0x2e) = *(undefined2 *)(extraout_ECX + 0x38);
  bflib_system_io_fn_0fed45();
  return *(undefined4 *)(arg_ebx + 0x1c);
}

/******************************************************************************
 * Function : bflib_system_io_use_this_vector_101fec (Original VA: 0x101fec, Ghidra: FUN_00101fec)
 * Prototype: longlong bflib_system_io_use_this_vector_101fec(void);
 * Address  : 0x101fec (Size: 283 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'CAN USE THIS VECTOR 0x%x'
 * Callers  : 1 -> lbnet_allocated_fine_handler_size_101360
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0f7786, bflib_system_io_fn_103100
 ******************************************************************************/
longlong bflib_system_io_use_this_vector_101fec(void)

{
  bool flag;
  int arg_eax;
  undefined1 extraout_CL;
  undefined2 extraout_CX;
  int extraout_ECX;
  uint arg_edx;
  short short_val;
  undefined4 in_stack_ffffffd0;
  undefined2 uval;
  uint in_stack_ffffffd8;
  short short_val_2;
  uint in_stack_ffffffdc;
  
  while( true ) {
    uval = (undefined2)((uint)in_stack_ffffffd0 >> 0x10);
    LbScreenWaitVbi();
    in_stack_ffffffd0 = CONCAT22(uval,0x200);
    bflib_system_io_fn_0f7786(in_stack_ffffffd0,extraout_CL);
    short_val_2 = (short)in_stack_ffffffdc;
    short_val = (short)in_stack_ffffffd8;
    if ((short_val == 0) && (short_val_2 == 0)) {
      flag = false;
    }
    else {
      flag = true;
    }
    if ((flag) &&
       (*(char *)((in_stack_ffffffd8 & 0xffff) << 4 | in_stack_ffffffdc & 0xffff) == 0xcf)) {
      flag = false;
    }
    if (!flag) break;
    if (0x65 < extraout_ECX + 1) {
      return (ulonglong)arg_edx << 0x20;
    }
  }
  bflib_system_io_fn_103100(s_CAN_USE_THIS_VECTOR_0x_x_0017261e,extraout_ECX);
  *(undefined2 *)(arg_eax + 0x3e) = extraout_CX;
  *(short *)(arg_eax + 0x40) = short_val;
  *(short *)(arg_eax + 0x42) = short_val_2;
  LbScreenWaitVbi();
  bflib_system_io_fn_0f7786(0x201,*(undefined2 *)(arg_eax + 0x3e),*(uint *)(arg_eax + 0x1e) >> 4 & 0xffff,
               *(int *)(arg_eax + 0x1e) + (*(uint *)(arg_eax + 0x1e) >> 4 & 0xffff) * -0x10);
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : bflib_system_io_open_socket_return_code_102264 (Original VA: 0x102264, Ghidra: FUN_00102264)
 * Prototype: uint bflib_system_io_open_socket_return_code_102264(void);
 * Address  : 0x102264 (Size: 222 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'OPEN SOCKET 0x%x, RETURN CODE 0x%x'
 * Callers  : 1 -> LbNETWORK_1032d8
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45, bflib_system_io_fn_103100
 ******************************************************************************/
uint bflib_system_io_open_socket_return_code_102264(void)

{
  int arg_eax;
  ushort extraout_CX;
  ushort extraout_CX_00;
  int loop_i;
  ushort *arg_edx;
  undefined4 *word_ptr;
  ushort *word_ptr_2;
  byte flag;
  undefined1 auStack_68 [20];
  uint local_54;
  uint local_4c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_20;
  
  flag = 0;
  LbScreenWaitVbi();
  local_4c = (uint)extraout_CX;
  local_54 = (int)(uint)*arg_edx >> 8 | (*arg_edx & 0xff) << 8;
  LbScreenWaitVbi();
  local_30 = (uint)extraout_CX_00;
  local_34 = 0x300;
  bflib_system_io_fn_0fed1d();
  local_38 = *(undefined2 *)(arg_eax + 0x36);
  local_3a = *(undefined2 *)(arg_eax + 0x38);
  local_20 = auStack_68;
  bflib_system_io_fn_0fed45();
  *arg_edx = (ushort)local_54;
  word_ptr = (undefined4 *)(arg_eax + 0xc);
  word_ptr_2 = arg_edx + 3;
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined4 *)word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -4 + 2;
  }
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (ushort *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  bflib_system_io_fn_103100(s_OPEN_SOCKET_0x_x__RETURN_CODE_0x_00172672,local_54,local_4c);
  return local_4c;
}

/******************************************************************************
 * Function : bflib_system_io_closing_socket_102344 (Original VA: 0x102344, Ghidra: FUN_00102344)
 * Prototype: void bflib_system_io_closing_socket_102344(void);
 * Address  : 0x102344 (Size: 174 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'CLOSING SOCKET %x'
 * Callers  : 2 -> LbNETWORK_1032d8, LbNETWORK_103464
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45, bflib_system_io_fn_103100
 ******************************************************************************/
void bflib_system_io_closing_socket_102344(void)

{
  ushort uval;
  int extraout_ECX;
  int extraout_ECX_00;
  ushort *arg_edx;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  uint local_54;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_20;
  
  bflib_system_io_fn_103100(s_CLOSING_SOCKET__x_001725cc,*arg_edx);
  LbScreenWaitVbi();
  local_58 = 1;
  local_54 = (uint)*arg_edx;
  uval = *(ushort *)(extraout_ECX + 0x3e);
  LbScreenWaitVbi();
  local_30 = (uint)uval;
  local_34 = 0x300;
  bflib_system_io_fn_0fed1d();
  local_38 = *(undefined2 *)(extraout_ECX_00 + 0x36);
  local_3a = *(undefined2 *)(extraout_ECX_00 + 0x38);
  local_20 = auStack_68;
  bflib_system_io_fn_0fed45();
  bflib_system_io_fn_103100(s_SOCKET_CLOSED_001725df);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_1023f4 (Original VA: 0x1023f4, Ghidra: FUN_001023f4)
 * Prototype: void bflib_system_io_fn_1023f4(uint param_1);
 * Address  : 0x1023f4 (Size: 460 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1023f4
 * Callers  : 17 -> bflib_system_io_open_socket_return_code_1029e0, bflib_system_io_fn_102dd0, bflib_system_io_fn_102e4c, bflib_system_io_fn_1037c8, bflib_system_io_bu_gi_1044e0, bflib_system_io_fn_104d44, watcom_crt_fn_1056a8, watcom_crt_fn_106234 ...
 * Callees  : 2 -> LbScreenWaitVbi, bflib_system_io_fn_102834
 ******************************************************************************/
void bflib_system_io_fn_1023f4(uint param_1)

{
  int arg_eax;
  undefined4 *arg_ecx;
  int loop_i;
  uint loop_i_2;
  undefined2 *arg_edx;
  undefined2 *arg_ebx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  undefined2 local_20;
  ushort local_1e;
  undefined2 local_1c;
  int local_18;
  undefined4 *local_14;
  
  flag = 0;
  do {
    *(short *)(arg_eax + 0x44) = *(short *)(arg_eax + 0x44) + 1;
    if (0x1f < *(ushort *)(arg_eax + 0x44)) {
      *(undefined2 *)(arg_eax + 0x44) = 1;
    }
    word_ptr = (undefined4 *)((*(ushort *)(arg_eax + 0x44) - 1) * 0x26a + *(int *)(arg_eax + 0x16));
  } while (*(char *)(word_ptr + 2) != '\0');
  local_18 = arg_eax;
  local_14 = arg_ecx;
  LbScreenWaitVbi();
  *word_ptr = 0;
  *(undefined2 *)(word_ptr + 1) = *(undefined2 *)(local_18 + 0x3a);
  *(short *)((int)word_ptr + 6) = (short)(*(uint *)(local_18 + 0x1e) >> 4);
  *(undefined2 *)((int)word_ptr + 10) = *arg_edx;
  *(undefined2 *)((int)word_ptr + 0x22) = 1;
  *(ushort *)(word_ptr + 9) = (ushort)((byte)word_ptr + 0x2a & 0xf);
  *(undefined1 *)(word_ptr + 2) = 1;
  *(undefined1 *)((int)word_ptr + 9) = 0;
  *(short *)((int)word_ptr + 0x26) = (short)((int)word_ptr + 0x2aU >> 4);
  *(undefined2 *)(word_ptr + 0xb) = 0x1e00;
  *(short *)(word_ptr + 10) = (short)param_1 + 0x1e;
  *(undefined1 *)((int)word_ptr + 0x2f) = 0;
  *(undefined2 *)((int)word_ptr + 0x3a) = *arg_ebx;
  word_ptr_2 = (undefined4 *)(arg_ebx + 5);
  word_ptr_3 = word_ptr + 7;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_3 = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
  }
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
  }
  word_ptr_2 = (undefined4 *)(arg_ebx + 5);
  word_ptr_3 = word_ptr + 0xd;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_3 = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
  }
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
  }
  word_ptr_2 = (undefined4 *)(arg_ebx + 3);
  word_ptr_3 = word_ptr + 0xc;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_3 = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
  }
  word_ptr_2 = word_ptr + 0x12;
  for (loop_i_2 = param_1 >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
    *word_ptr_2 = *local_14;
    local_14 = local_14 + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (param_1 = param_1 & 3; param_1 != 0; param_1 = param_1 - 1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)local_14;
    local_14 = (undefined4 *)((int)local_14 + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  local_1c = (short)((uint)word_ptr >> 4);
  local_20 = 3;
  local_1e = (ushort)((byte)word_ptr & 0xf);
  *(short *)(local_18 + 0x46) = *(short *)(local_18 + 0x46) + 1;
  if (*(ushort *)(local_18 + 0x46) < 0x1e) {
    word_ptr = (undefined4 *)&local_20;
    word_ptr_2 = (undefined4 *)
             ((*(ushort *)(local_18 + 0x46) - 1) * 6 + *(int *)(local_18 + 0x1e) + 0x90);
    for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    }
  }
  else {
    *(undefined2 *)(local_18 + 0x46) = 0x1f;
    bflib_system_io_fn_102834();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_1025c0 (Original VA: 0x1025c0, Ghidra: FUN_001025c0)
 * Prototype: void bflib_system_io_fn_1025c0(void);
 * Address  : 0x1025c0 (Size: 239 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1025c0
 * Callers  : 12 -> bflib_system_io_open_socket_return_code_1029e0, bflib_system_io_fn_102e4c, LbNETWORK_1032d8, bflib_system_io_fn_1037c8, bflib_system_io_bu_gi_1044e0, bflib_system_io_fn_104d44, watcom_crt_fn_1056a8, lbnet_Start_106da4 ...
 * Callees  : 2 -> LbScreenWaitVbi, bflib_system_io_fn_102834
 ******************************************************************************/
void bflib_system_io_fn_1025c0(void)

{
  int arg_eax;
  undefined4 *extraout_ECX;
  int loop_i;
  ushort uval;
  undefined2 *arg_ebx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined2 local_14;
  ushort local_12;
  undefined2 local_10;
  
  flag = 0;
  LbScreenWaitVbi();
  *extraout_ECX = 0;
  *(undefined2 *)(extraout_ECX + 1) = *(undefined2 *)(arg_eax + 0x3c);
  *(short *)((int)extraout_ECX + 6) = (short)(*(uint *)(arg_eax + 0x1e) >> 4);
  *(undefined2 *)((int)extraout_ECX + 10) = *arg_ebx;
  *(undefined2 *)((int)extraout_ECX + 0x22) = 1;
  *(undefined2 *)(extraout_ECX + 10) = 0x240;
  *(undefined1 *)(extraout_ECX + 2) = 1;
  *(ushort *)(extraout_ECX + 9) = (ushort)((byte)extraout_ECX + 0x2a & 0xf);
  *(undefined1 *)((int)extraout_ECX + 9) = 0;
  *(undefined2 *)(extraout_ECX + 0xb) = 0x1e00;
  *(short *)((int)extraout_ECX + 0x26) = (short)((int)extraout_ECX + 0x2aU >> 4);
  local_14 = 4;
  local_10 = (short)((uint)extraout_ECX >> 4);
  local_12 = (ushort)((byte)extraout_ECX & 0xf);
  uval = *(short *)(arg_eax + 0x46) + 1;
  *(ushort *)(arg_eax + 0x46) = uval;
  if (uval < 0x1e) {
    word_ptr = (undefined4 *)&local_14;
    word_ptr_2 = (undefined4 *)(*(int *)(arg_eax + 0x1e) + 0x90 + (uval - 1) * 6);
    for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    }
  }
  else {
    *(undefined2 *)(arg_eax + 0x46) = 0x1f;
    bflib_system_io_fn_102834();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_1026b0 (Original VA: 0x1026b0, Ghidra: FUN_001026b0)
 * Prototype: int bflib_system_io_fn_1026b0(void);
 * Address  : 0x1026b0 (Size: 115 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1026b0
 * Callers  : 10 -> bflib_system_io_fn_102e4c, bflib_system_io_fn_1037c8, bflib_system_io_bu_gi_1044e0, bflib_system_io_fn_104d44, watcom_crt_fn_1056a8, lbnet_Start_106da4, watcom_crt_fn_1073e0, watcom_crt_fn_1079f8 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int bflib_system_io_fn_1026b0(void)

{
  ushort uval;
  undefined2 *arg_ecx;
  int loop_i;
  int arg_edx;
  int loop_i_2;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  
  loop_i_2 = 0;
  if ((*(char *)(arg_edx + 8) == '\0') && (*(char *)(arg_edx + 9) == '\0')) {
    uval = *(ushort *)(arg_edx + 0x2c);
    *arg_ecx = *(undefined2 *)(arg_edx + 0x46);
    word_ptr = (undefined4 *)(arg_edx + 0x3c);
    word_ptr_2 = (undefined4 *)(arg_ecx + 3);
    for (loop_i_2 = 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + 1;
      word_ptr_2 = word_ptr_2 + 1;
    }
    for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 1);
    }
    loop_i_2 = (ushort)(uval >> 8 | uval << 8) - 0x1e;
    word_ptr = (undefined4 *)(arg_edx + 0x40);
    word_ptr_2 = (undefined4 *)(arg_ecx + 5);
    for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + 1;
      word_ptr_2 = word_ptr_2 + 1;
    }
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 1);
    }
  }
  return loop_i_2;
}

/******************************************************************************
 * Function : bflib_system_io_fn_102724 (Original VA: 0x102724, Ghidra: FUN_00102724)
 * Prototype: undefined8 bflib_system_io_fn_102724(void);
 * Address  : 0x102724 (Size: 52 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x102724
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 bflib_system_io_fn_102724(void)

{
  int arg_eax;
  undefined4 arg_edx;
  int val;
  
  do {
    *(short *)(arg_eax + 0x44) = *(short *)(arg_eax + 0x44) + 1;
    if (0x1f < *(ushort *)(arg_eax + 0x44)) {
      *(undefined2 *)(arg_eax + 0x44) = 1;
    }
    val = (*(ushort *)(arg_eax + 0x44) - 1) * 0x26a + *(int *)(arg_eax + 0x16);
  } while (*(char *)(val + 8) != '\0');
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : bflib_system_io_fn_102758 (Original VA: 0x102758, Ghidra: FUN_00102758)
 * Prototype: void bflib_system_io_fn_102758(void);
 * Address  : 0x102758 (Size: 130 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x102758
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_102834
 ******************************************************************************/
void bflib_system_io_fn_102758(void)

{
  int arg_eax;
  ushort uval;
  int loop_i;
  uint arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 local_18;
  undefined2 local_14;
  
  local_18._0_2_ = 3;
  local_14 = (short)(arg_edx >> 4);
  local_18._2_2_ = (ushort)arg_edx & 0xf;
  uval = *(short *)(arg_eax + 0x46) + 1;
  *(ushort *)(arg_eax + 0x46) = uval;
  if (uval < 0x1e) {
    word_ptr = &local_18;
    word_ptr_2 = (undefined4 *)(*(int *)(arg_eax + 0x1e) + 0x90 + (uval - 1) * 6);
    for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + 1;
      word_ptr_2 = word_ptr_2 + 1;
    }
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 1);
    }
  }
  else {
    *(undefined2 *)(arg_eax + 0x46) = 0x1f;
    bflib_system_io_fn_102834();
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_102834 (Original VA: 0x102834, Ghidra: FUN_00102834)
 * Prototype: void bflib_system_io_fn_102834(void);
 * Address  : 0x102834 (Size: 261 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x102834
 * Callers  : 22 -> bflib_system_io_fn_1023f4, bflib_system_io_fn_1025c0, bflib_system_io_fn_102758, bflib_system_io_open_socket_return_code_1029e0, bflib_system_io_fn_102dd0, bflib_system_io_fn_102e4c, LbNETWORK_1032d8, bflib_system_io_fn_1037c8 ...
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45
 ******************************************************************************/
void bflib_system_io_fn_102834(void)

{
  int arg_eax;
  ushort extraout_CX;
  int loop_i;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined1 auStack_7c [16];
  undefined4 local_6c;
  uint local_60;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 *local_34;
  undefined4 local_20;
  undefined2 local_1c;
  
  if (*(short *)(arg_eax + 0x46) != 0) {
    *(short *)(arg_eax + 0x46) = *(short *)(arg_eax + 0x46) + 1;
    if (*(ushort *)(arg_eax + 0x46) < 0x20) {
      local_20._0_2_ = 10;
      local_20._2_2_ = 0;
      local_1c = 0;
      word_ptr = &local_20;
      word_ptr_2 = (undefined4 *)((*(ushort *)(arg_eax + 0x46) - 1) * 6 + *(int *)(arg_eax + 0x1e) + 0x90)
      ;
      for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
        *word_ptr_2 = *word_ptr;
        word_ptr = word_ptr + 1;
        word_ptr_2 = word_ptr_2 + 1;
      }
      for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
        *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
        word_ptr = (undefined4 *)((int)word_ptr + 1);
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 1);
      }
    }
    LbScreenWaitVbi();
    local_6c = 0xffff;
    local_60 = (uint)*(ushort *)(arg_eax + 0x46);
    LbScreenWaitVbi();
    local_44 = (uint)extraout_CX;
    local_48 = 0x300;
    bflib_system_io_fn_0fed1d();
    local_4c = *(undefined2 *)(arg_eax + 0x36);
    local_4e = *(undefined2 *)(arg_eax + 0x38);
    local_34 = auStack_7c;
    bflib_system_io_fn_0fed45();
    *(undefined2 *)(arg_eax + 0x46) = 0;
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_10293c (Original VA: 0x10293c, Ghidra: FUN_0010293c)
 * Prototype: int bflib_system_io_fn_10293c(void);
 * Address  : 0x10293c (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x10293c
 * Callers  : 1 -> LbNETWORK_1032d8
 * Callees  : 2 -> LbScreenWaitVbi, bflib_system_io_fn_0f7786
 ******************************************************************************/
int bflib_system_io_fn_10293c(void)

{
  int val;
  uint *arg_ebx;
  undefined4 local_20;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  bflib_system_io_fn_0f7786();
  if (local_14 == 0) {
    if (&stack0x00000000 != (undefined1 *)0x10) {
      local_10 = local_20;
    }
    val = 0x1000;
  }
  else {
    val = 0;
  }
  if (val != 0) {
    LbScreenWaitVbi();
    *arg_ebx = local_10 & 0xffff;
  }
  return val;
}

/******************************************************************************
 * Function : bflib_system_io_fn_1029b8 (Original VA: 0x1029b8, Ghidra: FUN_001029b8)
 * Prototype: void bflib_system_io_fn_1029b8(void);
 * Address  : 0x1029b8 (Size: 40 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1029b8
 * Callers  : 1 -> LbNETWORK_103464
 * Callees  : 1 -> bflib_system_io_fn_0f7786
 ******************************************************************************/
void bflib_system_io_fn_1029b8(void)

{
  bflib_system_io_fn_0f7786(0x101);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_open_socket_return_code_1029e0 (Original VA: 0x1029e0, Ghidra: FUN_001029e0)
 * Prototype: undefined4 bflib_system_io_open_socket_return_code_1029e0(void);
 * Address  : 0x1029e0 (Size: 1007 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'OPEN SOCKET 0x%x, RETURN CODE 0x%x'
 * Callers  : 2 -> bflib_system_io_fn_102e4c, lbnet_Start_103528
 * Callees  : 7 -> LbScreenWaitVbi, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45, bflib_system_io_fn_1023f4, bflib_system_io_fn_1025c0, bflib_system_io_fn_102834, bflib_system_io_fn_103100
 ******************************************************************************/
undefined4 bflib_system_io_open_socket_return_code_1029e0(void)

{
  char ch;
  int arg_eax;
  ushort extraout_CX;
  ushort extraout_CX_00;
  undefined2 *arg_ecx;
  int loop_i;
  char *arg_ebx;
  ushort loop_i_2;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  char *str_ptr;
  byte flag;
  char local_138 [48];
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined1 local_f8 [20];
  uint local_e4;
  int local_dc;
  undefined2 local_ca;
  undefined2 local_c8;
  undefined1 local_c4 [20];
  uint local_b0;
  int local_a8;
  undefined2 local_96;
  undefined2 local_94;
  undefined4 local_90;
  uint local_8c;
  undefined1 *local_7c;
  undefined4 local_74;
  uint local_70;
  undefined1 *local_60;
  uint local_58;
  undefined4 auStack_52 [2];
  undefined2 local_48;
  undefined2 *local_20;
  undefined4 *local_1c;
  
  flag = 0;
  local_20 = arg_ecx;
  if (*(int *)(arg_eax + 8) == 0) {
    *(undefined2 *)(arg_eax + 0x48) = 0x452;
    local_58 = CONCAT22(local_58._2_2_,0x452);
    LbScreenWaitVbi();
    local_a8 = 0;
    local_b0 = (int)(local_58 & 0xffff) >> 8 | (local_58 & 0xff) << 8;
    LbScreenWaitVbi();
    local_8c = (uint)extraout_CX;
    local_90 = 0x300;
    bflib_system_io_fn_0fed1d();
    local_94 = *(undefined2 *)(arg_eax + 0x36);
    local_96 = *(undefined2 *)(arg_eax + 0x38);
    local_7c = local_c4;
    bflib_system_io_fn_0fed45();
    local_58 = CONCAT22(local_58._2_2_,(short)local_b0);
    local_1c = auStack_52;
    word_ptr_2 = (undefined4 *)(arg_eax + 0xc);
    word_ptr = local_1c;
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
    }
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr = *(undefined1 *)word_ptr_2;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    }
    bflib_system_io_fn_103100(s_OPEN_SOCKET_0x_x__RETURN_CODE_0x_00172672,local_b0,local_a8);
    if (local_a8 == 0) {
      *(undefined4 *)(arg_eax + 8) = 1;
      *(short *)(arg_eax + 0x48) = (short)local_58;
      for (loop_i_2 = 0; loop_i_2 < 0x20; loop_i_2 = loop_i_2 + 1) {
        bflib_system_io_fn_1025c0();
      }
    }
    else {
      *(undefined2 *)(arg_eax + 0x48) = 0x4141;
      local_58 = CONCAT22(local_58._2_2_,0x4141);
      LbScreenWaitVbi();
      local_dc = 0;
      local_e4 = (int)(local_58 & 0xffff) >> 8 | (local_58 & 0xff) << 8;
      LbScreenWaitVbi();
      local_70 = (uint)extraout_CX_00;
      local_74 = 0x300;
      bflib_system_io_fn_0fed1d();
      word_ptr_2 = local_1c;
      local_c8 = *(undefined2 *)(arg_eax + 0x36);
      local_ca = *(undefined2 *)(arg_eax + 0x38);
      local_60 = local_f8;
      bflib_system_io_fn_0fed45();
      local_58 = CONCAT22(local_58._2_2_,(short)local_e4);
      word_ptr = (undefined4 *)(arg_eax + 0xc);
      for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
        *word_ptr_2 = *word_ptr;
        word_ptr = word_ptr + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      }
      for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
        *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
        word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      }
      bflib_system_io_fn_103100(s_OPEN_SOCKET_0x_x__RETURN_CODE_0x_00172672,local_e4,local_dc);
      if (local_dc != 0) goto LAB_00102ccd;
      *(undefined4 *)(arg_eax + 8) = 1;
      for (loop_i_2 = 0; loop_i_2 < 0x20; loop_i_2 = loop_i_2 + 1) {
        bflib_system_io_fn_1025c0();
      }
    }
    bflib_system_io_fn_102834();
  }
LAB_00102ccd:
  if (*(int *)(arg_eax + 8) == 0) {
    return 1;
  }
  LbScreenWaitVbi();
  local_48 = *(undefined2 *)(arg_eax + 0x48);
  LbScreenWaitVbi();
  local_fc = 0x100;
  local_fe = *local_20;
  word_ptr_2 = (undefined4 *)(arg_eax + 0xc);
  word_ptr = &local_108;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr = *(undefined1 *)word_ptr_2;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
  }
  word_ptr_2 = (undefined4 *)(arg_eax + 0x10);
  word_ptr = &local_104;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
  }
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr = *(undefined1 *)word_ptr_2;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
  }
  str_ptr = local_138;
  do {
    ch = *arg_ebx;
    *str_ptr = ch;
    if (ch == '\0') break;
    ch = arg_ebx[1];
    arg_ebx = arg_ebx + 2;
    str_ptr[1] = ch;
    str_ptr = str_ptr + 2;
  } while (ch != '\0');
  bflib_system_io_fn_1023f4(0x42);
  bflib_system_io_fn_102834();
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_102dd0 (Original VA: 0x102dd0, Ghidra: FUN_00102dd0)
 * Prototype: void bflib_system_io_fn_102dd0(void);
 * Address  : 0x102dd0 (Size: 123 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x102dd0
 * Callers  : 1 -> bflib_system_io_bu_gi_1044e0
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_1023f4, bflib_system_io_fn_102834
 ******************************************************************************/
void bflib_system_io_fn_102dd0(void)

{
  undefined2 uval;
  
  LbScreenWaitVbi();
  uval = 0;
  bflib_system_io_fn_1023f4(4,0x5204);
  bflib_system_io_fn_1023f4(4,CONCAT22(uval,0x4141));
  bflib_system_io_fn_102834();
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_102e4c (Original VA: 0x102e4c, Ghidra: FUN_00102e4c)
 * Prototype: void bflib_system_io_fn_102e4c(void);
 * Address  : 0x102e4c (Size: 678 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x102e4c
 * Callers  : 1 -> watcom_crt_fn_1056a8
 * Callees  : 7 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a, bflib_system_io_fn_1023f4, bflib_system_io_fn_1025c0, bflib_system_io_fn_1026b0, bflib_system_io_fn_102834, bflib_system_io_open_socket_return_code_1029e0
 ******************************************************************************/
void bflib_system_io_fn_102e4c(void)

{
  char ch;
  int *arg_eax;
  undefined2 *arg_ecx;
  int loop_i;
  int val;
  char *arg_ebx;
  undefined2 *word_ptr;
  undefined1 *thing_ptr;
  int *int_ptr;
  byte *byte_ptr;
  undefined4 *word_ptr_2;
  int *int_ptr_2;
  char *str_ptr;
  byte *byte_ptr_2;
  undefined4 *word_ptr_3;
  bool flag;
  bool flag_2;
  byte flag_3;
  int aiStack_ac [2];
  undefined2 local_a4 [2];
  char local_a0 [48];
  int local_70;
  int local_6c;
  undefined2 local_66;
  undefined2 local_60 [24];
  uint local_2c [7];
  short local_10 [2];
  
  flag_3 = 0;
  if (arg_eax[2] != 0) {
    LbScreenWaitVbi();
    local_a4[0] = 0x200;
    local_66 = *arg_ecx;
    int_ptr = arg_eax + 3;
    int_ptr_2 = &local_70;
    for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
      *int_ptr_2 = *int_ptr;
      int_ptr = int_ptr + (uint)flag_3 * -2 + 1;
      int_ptr_2 = int_ptr_2 + (uint)flag_3 * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(char *)int_ptr_2 = (char)*int_ptr;
      int_ptr = (int *)((int)int_ptr + (uint)flag_3 * -2 + 1);
      int_ptr_2 = (int *)((int)int_ptr_2 + (uint)flag_3 * -2 + 1);
    }
    int_ptr = arg_eax + 4;
    int_ptr_2 = &local_6c;
    for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
      *int_ptr_2 = *int_ptr;
      int_ptr = int_ptr + (uint)flag_3 * -2 + 1;
      int_ptr_2 = int_ptr_2 + (uint)flag_3 * -2 + 1;
    }
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *(char *)int_ptr_2 = (char)*int_ptr;
      int_ptr = (int *)((int)int_ptr + (uint)flag_3 * -2 + 1);
      int_ptr_2 = (int *)((int)int_ptr_2 + (uint)flag_3 * -2 + 1);
    }
    str_ptr = local_a0;
    do {
      ch = *arg_ebx;
      *str_ptr = ch;
      word_ptr = local_a4;
      if (ch == '\0') break;
      ch = arg_ebx[1];
      arg_ebx = arg_ebx + 2;
      str_ptr[1] = ch;
      str_ptr = str_ptr + 2;
      word_ptr = local_a4;
    } while (ch != '\0');
    while (*(uint *)((int)word_ptr + 0x88) < *(int *)((int)arg_eax + 0x1a) + 0x4d40U) {
      *(undefined4 *)((int)word_ptr + -4) = 0x102fc6;
      loop_i = bflib_system_io_fn_1026b0();
      thing_ptr = (undefined1 *)word_ptr;
      if (loop_i != 0) {
        val = 6;
        flag = false;
        loop_i = 0;
        flag_2 = true;
        byte_ptr = *(byte **)((int)word_ptr + 0x8c);
        byte_ptr_2 = *(byte **)((int)word_ptr + 0x78);
        do {
          if (val == 0) break;
          val = val + -1;
          flag = *byte_ptr < *byte_ptr_2;
          flag_2 = *byte_ptr == *byte_ptr_2;
          byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
          byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
        } while (flag_2);
        if (!flag_2) {
          loop_i = (1 - (uint)flag) - (uint)(flag != 0);
        }
        if (((loop_i != 0) && (**(short **)((int)word_ptr + 0x84) == 0x100)) &&
           ((short)*(undefined4 *)((int)word_ptr + 0x90) == (*(short **)((int)word_ptr + 0x84))[1])) {
          *(undefined2 *)((int)word_ptr + 0x44) = *(undefined2 *)(*(int *)((int)word_ptr + 0x88) + 0x46)
          ;
          *(undefined4 **)((int)word_ptr + -4) = (undefined4 *)((int)word_ptr + 0x4a);
          word_ptr_2 = *(undefined4 **)((int)word_ptr + 0x80);
          word_ptr_3 = (undefined4 *)((int)word_ptr + 0x4a);
          for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
            *word_ptr_3 = *word_ptr_2;
            word_ptr_2 = word_ptr_2 + (uint)flag_3 * -2 + 1;
            word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
          }
          for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
            *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
            word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_3 * -2 + 1);
            word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
          }
          *(undefined4 **)((int)word_ptr + -4) = (undefined4 *)((int)word_ptr + 0x4e);
          word_ptr_2 = *(undefined4 **)((int)word_ptr + 0x8c);
          word_ptr_3 = (undefined4 *)((int)word_ptr + 0x4e);
          for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
            *word_ptr_3 = *word_ptr_2;
            word_ptr_2 = word_ptr_2 + (uint)flag_3 * -2 + 1;
            word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
          }
          for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
            *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
            word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_3 * -2 + 1);
            word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
          }
          thing_ptr = (undefined1 *)((int)word_ptr + -4);
          *(undefined4 *)((int)word_ptr + -4) = 0x42;
          *(undefined4 *)((int)word_ptr + -8) = 0x103072;
          bflib_system_io_fn_1023f4();
        }
        *(short *)(thing_ptr + 100) = (short)arg_eax[0x12]; /* thing->ccontrol_idx */
        *(int *)(thing_ptr + 0x94) = *(int *)(thing_ptr + 0x94) + 1;
        *(undefined4 *)(thing_ptr + -4) = 0x10309c;
        bflib_system_io_fn_1025c0();
      }
      *(int *)(thing_ptr + 0x8c) = *(int *)(thing_ptr + 0x8c) + 0x26a;
      *(int *)(thing_ptr + 0x84) = *(int *)(thing_ptr + 0x84) + 0x26a;
      *(int *)(thing_ptr + 0x80) = *(int *)(thing_ptr + 0x80) + 0x26a;
      *(int *)(thing_ptr + 0x88) = *(int *)(thing_ptr + 0x88) + 0x26a;
      word_ptr = (undefined2 *)thing_ptr;
    }
    *(undefined4 *)((int)word_ptr + -4) = 0x1030a6;
    loop_i = bflib_system_io_fn_0e8d4a();
    arg_eax[1] = loop_i;
    if ((uint)(loop_i - *arg_eax) < 0xfa1) {
      if (*(short *)((int)word_ptr + 0x94) != 0) {
        *(undefined4 *)((int)word_ptr + -4) = 0x1030e8;
        bflib_system_io_fn_102834();
      }
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x1030ce;
      bflib_system_io_open_socket_return_code_1029e0();
      *arg_eax = arg_eax[1];
    }
  }
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_103100 (Original VA: 0x103100, Ghidra: FUN_00103100)
 * Prototype: void bflib_system_io_fn_103100(void);
 * Address  : 0x103100 (Size: 1 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x103100
 * Callers  : 7 -> lbnet_allocated_fine_handler_size_101360, bflib_sound_closing_socket_101c78, bflib_system_io_use_this_vector_101fec, lbnet_network_node_102108, bflib_system_io_open_socket_return_code_102264, bflib_system_io_closing_socket_102344, bflib_system_io_open_socket_return_code_1029e0
 * Callees  : 0 -> 
 ******************************************************************************/
void bflib_system_io_fn_103100(void)

{
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_103110 (Original VA: 0x103110, Ghidra: FUN_00103110)
 * Prototype: undefined1 bflib_system_io_fn_103110(void);
 * Address  : 0x103110 (Size: 3 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x103110
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 bflib_system_io_fn_103110(void)

{
  return 0;
}

/******************************************************************************
 * Function : bflib_system_io_fn_103114 (Original VA: 0x103114, Ghidra: FUN_00103114)
 * Prototype: undefined1 bflib_system_io_fn_103114(void);
 * Address  : 0x103114 (Size: 29 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x103114
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 bflib_system_io_fn_103114(void)

{
  int arg_eax;
  undefined1 uval;
  undefined4 arg_edx;
  
  uval = 0xff;
  if (*(int *)(arg_eax + 0x7a8) != 0) {
    uval = 0;
    *(undefined4 *)(arg_eax + 0x1832) = arg_edx;
  }
  return uval;
}

/******************************************************************************
 * Function : bflib_system_io_fn_103134 (Original VA: 0x103134, Ghidra: FUN_00103134)
 * Prototype: int bflib_system_io_fn_103134(void);
 * Address  : 0x103134 (Size: 180 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x103134
 * Callers  : 0 -> 
 * Callees  : 5 -> bflib_system_io_fn_0ed028, LbNETWORK_0ff0ec, bflib_system_io_fn_101318, watcom_crt_fn_11fc54, watcom_crt_fn_11fc74
 ******************************************************************************/
int bflib_system_io_fn_103134(void)

{
  int arg_eax;
  uint extraout_ECX;
  uint arg_edx;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  
  if ((arg_edx & 4) == 0) {
    local_20 = g_bss_003d97d0;
    local_1c = &g_data_00174814;
    local_18 = 2;
    g_bss_003d97d0 = &local_20;
    *(undefined ***)(arg_eax + 0xd7c) = &PTR_FUN_00103134_00174668;
    LbNETWORK_0ff0ec();
    *(undefined2 *)(arg_eax + 0x17ed) = 0;
    local_18 = 1;
    bflib_system_io_fn_101318();
    local_18 = 0;
    arg_eax = LbNETWORK_0ff0ec();
    if ((extraout_ECX & 2) != 0) {
      bflib_system_io_fn_0ed028();
    }
    g_bss_003d97d0 = (undefined4 *)local_20;
  }
  else {
    watcom_crt_fn_11fc54();
    watcom_crt_fn_11fc74();
  }
  return arg_eax;
}

/******************************************************************************
 * Function : bflib_system_io_fn_1037c8 (Original VA: 0x1037c8, Ghidra: FUN_001037c8)
 * Prototype: undefined1 bflib_system_io_fn_1037c8(void);
 * Address  : 0x1037c8 (Size: 2706 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1037c8
 * Callers  : 0 -> 
 * Callees  : 11 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a, LbFileLoadAt, bflib_system_io_fn_0e94b0, bflib_system_io_fn_0ff398, bflib_system_io_fn_0ff834, bflib_system_io_fn_1023f4, bflib_system_io_fn_1025c0 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00103978) */
/* WARNING: Removing unreachable block (ram,0x00103d66) */

undefined1 bflib_system_io_fn_1037c8(void)

{
  uint uval;
  undefined4 uval_2;
  char ch;
  int arg_eax;
  int thing_ptr;
  uint *word_ptr;
  int loop_i;
  int val;
  uint extraout_ECX;
  uint loop_i_2;
  char extraout_DL;
  int arg_edx;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined1 *word_ptr_2;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  undefined4 *word_ptr_5;
  byte *byte_ptr;
  char *str_ptr;
  uint *word_ptr_6;
  byte *byte_ptr_2;
  char *str_ptr_2;
  undefined4 *word_ptr_7;
  undefined4 *word_ptr_8;
  bool flag;
  bool flag_2;
  byte flag_3;
  undefined8 uval_3;
  undefined4 auStack_1960 [1525];
  undefined1 auStack_18c [8];
  undefined4 local_184;
  undefined4 auStack_180 [26];
  undefined4 local_116 [6];
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 auStack_ec [18];
  undefined4 local_a4;
  byte local_9e [14];
  undefined4 local_90;
  byte local_8a [18];
  int local_78 [4];
  int local_68;
  uint local_5c;
  uint local_58;
  int local_54 [11];
  undefined1 local_28 [8];
  short local_20;
  
  flag_3 = 0;
  word_ptr_5 = (undefined4 *)auStack_18c;
  if (*(int *)(arg_eax + 0xd74) != 0) {
    local_78[3] = arg_eax;
    local_68 = arg_edx;
    if (arg_edx != 0) {
      word_ptr_5 = (undefined4 *)(arg_edx + 0x29);
      word_ptr_3 = &local_a4;
      for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
        *word_ptr_3 = *word_ptr_5;
        word_ptr_5 = word_ptr_5 + 1;
        word_ptr_3 = word_ptr_3 + 1;
      }
      for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
        *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_5;
        word_ptr_5 = (undefined4 *)((int)word_ptr_5 + 1);
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + 1);
      }
    }
    word_ptr_5 = (undefined4 *)auStack_18c;
    if (((*(int *)(local_78[3] + 0x7a8) == 0) &&
        (word_ptr_5 = (undefined4 *)auStack_18c, *(uint *)(local_68 + 1) < 0x20)) &&
       (word_ptr_5 = (undefined4 *)auStack_18c,
       *(short *)(*(uint *)(local_68 + 1) * 0x36 + local_78[3] + 0xdd2) != 0)) {
      word_ptr_5 = &local_a4;
      word_ptr_3 = &local_90;
      for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
        *word_ptr_3 = *word_ptr_5;
        word_ptr_5 = word_ptr_5 + 1;
        word_ptr_3 = word_ptr_3 + 1;
      }
      for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
        *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_5;
        word_ptr_5 = (undefined4 *)((int)word_ptr_5 + 1);
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + 1);
      }
      auStack_1960[0x5f4] = 0x1038df;
      LbScreenWaitVbi();
      word_ptr_5 = auStack_1960 + 0x5f4;
      auStack_1960[0x5f4] = 0x56;
      local_fc = 0x48515542;
      word_ptr_3 = (undefined4 *)(local_78[3] + 0x158b + (uint)flag_3 * -8);
      local_f0 = *(undefined4 *)(local_78[3] + 0x1587);
      word_ptr_4 = word_ptr_3 + (uint)flag_3 * -2 + 1;
      auStack_ec[(uint)flag_3 * -2] = *word_ptr_3;
      auStack_ec[(uint)flag_3 * -2 + (uint)flag_3 * -2 + 1] = *word_ptr_4;
      (auStack_ec + (uint)flag_3 * -2 + (uint)flag_3 * -2 + 1)[(uint)flag_3 * -2 + 1] =
           word_ptr_4[(uint)flag_3 * -2 + 1];
      auStack_1960[0x5f3] = 0x103911;
      bflib_system_io_fn_1023f4();
      if ((g_heap_alloc_list_head & 1) == 0) {
        g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
        auStack_1960[0x5f3] = 0x103937;
        g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
      }
      if ((g_heap_alloc_list_head & 2) == 0) {
        g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
        auStack_1960[0x5f3] = 0x103955;
        g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
      }
      auStack_1960[0x5f3] = 0x10395f;
      g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
      g_bss_003e02ac = g_bss_003e02ac + 1;
      auStack_1960[0x5f3] = 0x103999;
      bflib_system_io_fn_102834();
      if (99 < (uint)(extraout_EDX - g_bss_003e02a4)) {
        g_bss_003e02ac = 0;
        g_bss_003e02a4 = extraout_EDX;
      }
      auStack_1960[0x5f3] = 0x1039ba;
      loop_i = bflib_system_io_fn_0e8d4a();
joined_r0x001039ca:
      if (local_54[2] == 0) {
        auStack_1960[0x5f3] = 0x103a02;
        thing_ptr = bflib_system_io_fn_0e8d4a();
        if (200 < (uint)(thing_ptr - loop_i)) goto LAB_00103bfd;
        loop_i_2 = *(uint *)(local_78[2] + 0xdca);
        word_ptr = (uint *)(loop_i_2 + 0x48);
        for (; loop_i_2 < *(int *)(local_78[2] + 0xdca) + 0x4d40U; loop_i_2 = loop_i_2 + 0x26a) {
          auStack_1960[0x5f3] = 0x103b7a;
          thing_ptr = bflib_system_io_fn_1026b0();
          if (thing_ptr != 0) {
            val = 6;
            flag = false;
            thing_ptr = 0;
            flag_2 = true;
            byte_ptr = local_8a;
            byte_ptr_2 = local_9e;
            do {
              if (val == 0) break;
              val = val + -1;
              flag = *byte_ptr < *byte_ptr_2;
              flag_2 = *byte_ptr == *byte_ptr_2;
              byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
              byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
            } while (flag_2);
            if (!flag_2) {
              thing_ptr = (1 - (uint)flag) - (uint)(flag != 0);
            }
            if (thing_ptr == 0) {
              ch = -1;
              uval = *word_ptr;
              if (uval < 0x4a435542) {
                if (uval < 0x47445542) {
                  if (0x41535541 < uval) {
                    if (uval < 0x41535543) goto LAB_00103a24;
                    flag = uval == 0x44535542;
                    goto LAB_00103a95;
                  }
                }
                else {
                  if (uval < 0x47445543) goto LAB_00103a42;
                  if (uval < 0x49435542) {
                    flag = uval == 0x48515542;
                  }
                  else {
                    if (uval < 0x49435543) goto LAB_00103a24;
                    flag = uval == 0x49485542;
                  }
LAB_00103a95:
                  if (flag) goto LAB_00103a24;
                }
              }
              else {
                if (0x4a435542 < uval) {
                  if (uval < 0x4e445542) {
                    if (uval < 0x4c435542) {
                      flag = uval == 0x4b535542;
                    }
                    else {
                      if (uval < 0x4c435543) goto LAB_00103a24;
                      flag = uval == 0x4c485542;
                    }
                  }
                  else {
                    if (uval < 0x4e445543) goto LAB_00103a42;
                    if (uval < 0x504e5542) {
                      flag = uval == 0x50485542;
                    }
                    else {
                      if (uval < 0x504e5543) goto LAB_00103a24;
                      flag = uval == 0x50515542;
                    }
                  }
                  goto LAB_00103a95;
                }
LAB_00103a24:
                val = 0x10;
                flag = false;
                thing_ptr = 0;
                flag_2 = true;
                byte_ptr = (byte *)(local_78[2] + 0x1587);
                word_ptr_6 = word_ptr + 3;
                do {
                  if (val == 0) break;
                  val = val + -1;
                  flag = *byte_ptr < (byte)*word_ptr_6;
                  flag_2 = *byte_ptr == (byte)*word_ptr_6;
                  byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
                  word_ptr_6 = (uint *)((int)word_ptr_6 + (uint)flag_3 * -2 + 1);
                } while (flag_2);
                if (!flag_2) {
                  thing_ptr = (1 - (uint)flag) - (uint)(flag != 0);
                }
                if (thing_ptr == 0) {
LAB_00103a42:
                  ch = '\0';
                }
              }
              if (((ch == '\0') && (*word_ptr == 0x49485542)) && (local_20 == (short)word_ptr[0x12]))
              {
                local_5c = (uint)*(ushort *)((int)word_ptr + 0x46);
                local_58 = (uint)(ushort)word_ptr[0x11];
                local_54[2] = 1;
                auStack_1960[0x5f3] = 0x103af9;
                bflib_system_io_fn_1025c0();
                break;
              }
            }
            auStack_1960[0x5f3] = 0x103b21;
            bflib_system_io_fn_1025c0();
          }
          word_ptr = (uint *)((int)word_ptr + 0x26a);
        }
        goto joined_r0x001039ca;
      }
LAB_00103bfd:
      if (local_54[2] == 1) {
        if (local_5c <= local_58) {
          return 0xff;
        }
        auStack_1960[0x5f3] = 0x103c48;
        uval_3 = LbFileLoadAt();
        *(int *)((int)((ulonglong)uval_3 >> 0x20) + 0xdce) = (int)uval_3;
        if ((int)uval_3 == 0) {
          return 0xff;
        }
        auStack_1960[0x5f3] = 0x103c78;
        LbScreenWaitVbi();
        auStack_1960[0x5f3] = 0x103c8b;
        LbScreenWaitVbi();
        auStack_1960[0x5f4] = 0x4a435542;
        word_ptr_5 = (undefined4 *)(local_78[2] + 0x158b + (uint)flag_3 * -8);
        local_184 = *(undefined4 *)(local_78[2] + 0x1587);
        word_ptr_3 = word_ptr_5 + (uint)flag_3 * -2 + 1;
        auStack_180[(uint)flag_3 * -2] = *word_ptr_5;
        auStack_180[(uint)flag_3 * -2 + (uint)flag_3 * -2 + 1] = *word_ptr_3;
        (auStack_180 + (uint)flag_3 * -2 + (uint)flag_3 * -2 + 1)[(uint)flag_3 * -2 + 1] =
             word_ptr_3[(uint)flag_3 * -2 + 1];
        word_ptr_5 = (undefined4 *)(local_78[2] + 0x1492);
        word_ptr_3 = local_116;
        for (loop_i_2 = extraout_ECX >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *word_ptr_3 = *word_ptr_5;
          word_ptr_5 = word_ptr_5 + (uint)flag_3 * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
        }
        for (loop_i_2 = extraout_ECX & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_5;
          word_ptr_5 = (undefined4 *)((int)word_ptr_5 + (uint)flag_3 * -2 + 1);
          word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
        }
        auStack_1960[0x5f3] = 0x103cdb;
        bflib_system_io_fn_0ff834();
        word_ptr_5 = auStack_1960 + 0x5f3;
        auStack_1960[0x5f3] = 0x8e;
        bflib_system_io_fn_1023f4();
        if ((g_heap_alloc_list_head & 1) == 0) {
          g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
          g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
        }
        if ((g_heap_alloc_list_head & 2) == 0) {
          g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
          g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
        }
        g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
        g_bss_003e02ac = g_bss_003e02ac + 1;
        bflib_system_io_fn_102834();
        if (99 < (uint)(extraout_EDX_00 - g_bss_003e02a4)) {
          g_bss_003e02ac = 0;
          g_bss_003e02a4 = extraout_EDX_00;
        }
        local_78[0] = bflib_system_io_fn_0e8d4a();
LAB_00103e1f:
        *(undefined4 *)((int)word_ptr_5 + -4) = 0x103e24;
        loop_i = bflib_system_io_fn_0e8d4a();
        if ((uint)(loop_i - *(int *)((int)word_ptr_5 + 0x11c)) < 0x3e9) {
          if (0x19 < (uint)(loop_i - *(int *)((int)word_ptr_5 + 0x140))) {
            word_ptr_2 = (undefined1 *)((int)word_ptr_5 + -4);
            *(undefined4 *)((int)word_ptr_5 + -4) = 0x8e;
            *(int *)((int)word_ptr_5 + 0x140) = loop_i;
            *(undefined4 *)((int)word_ptr_5 + -8) = 0x103e79;
            bflib_system_io_fn_1023f4();
            if ((g_heap_alloc_list_head & 1) == 0) {
              g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
              *(undefined4 *)((int)word_ptr_5 + -8) = 0x103e9d;
              g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
            }
            if ((g_heap_alloc_list_head & 2) == 0) {
              g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
              *(undefined4 *)((int)word_ptr_5 + -8) = 0x103ebd;
              g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
            }
            *(undefined4 *)((int)word_ptr_5 + -8) = 0x103ec7;
            loop_i = bflib_system_io_fn_0e8d4a();
            if ((extraout_DL == '\0') || (0x32 < (uint)(loop_i - g_bss_003e02a8))) {
              *(undefined4 *)((int)word_ptr_5 + -8) = 0x103efb;
              g_bss_003e02a8 = loop_i;
              g_bss_003e02ac = g_bss_003e02ac + 1;
              bflib_system_io_fn_102834();
            }
            word_ptr_5 = (undefined4 *)((int)word_ptr_5 + -4);
            if (99 < (uint)(loop_i - g_bss_003e02a4)) {
              g_bss_003e02ac = 0;
              word_ptr_5 = (undefined4 *)word_ptr_2;
              g_bss_003e02a4 = loop_i;
            }
          }
          loop_i_2 = *(uint *)(*(int *)((int)word_ptr_5 + 0x120) + 0xdca);
          *(uint *)((int)word_ptr_5 + 0x168) = loop_i_2 + 0x48;
          for (; loop_i_2 < *(int *)(*(int *)((int)word_ptr_5 + 0x120) + 0xdca) + 0x4d40U;
              loop_i_2 = loop_i_2 + 0x26a) {
            *(undefined4 *)((int)word_ptr_5 + 0x130) = *(undefined4 *)((int)word_ptr_5 + 0x168);
            *(undefined4 *)((int)word_ptr_5 + -4) = 0x1041b4;
            loop_i = bflib_system_io_fn_1026b0();
            if (loop_i != 0) {
              thing_ptr = 6;
              flag = false;
              loop_i = 0;
              flag_2 = true;
              byte_ptr = (byte *)((int)word_ptr_5 + 0x116);
              byte_ptr_2 = (byte *)((int)word_ptr_5 + 0xf2);
              do {
                if (thing_ptr == 0) break;
                thing_ptr = thing_ptr + -1;
                flag = *byte_ptr < *byte_ptr_2;
                flag_2 = *byte_ptr == *byte_ptr_2;
                byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
                byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
              } while (flag_2);
              if (!flag_2) {
                loop_i = (1 - (uint)flag) - (uint)(flag != 0);
              }
              if (loop_i == 0) {
                ch = -1;
                uval = **(uint **)((int)word_ptr_5 + 0x168);
                if (uval < 0x4a435542) {
                  if (uval < 0x47445542) {
                    if (0x41535541 < uval) {
                      if (uval < 0x41535543) goto LAB_00103f34;
                      flag = uval == 0x44535542;
                      goto LAB_00103fa5;
                    }
                  }
                  else {
                    if (uval < 0x47445543) goto LAB_00103f52;
                    if (uval < 0x49435542) {
                      flag = uval == 0x48515542;
                    }
                    else {
                      if (uval < 0x49435543) goto LAB_00103f34;
                      flag = uval == 0x49485542;
                    }
LAB_00103fa5:
                    if (flag) goto LAB_00103f34;
                  }
                }
                else {
                  if (0x4a435542 < uval) {
                    if (uval < 0x4e445542) {
                      if (uval < 0x4c435542) {
                        flag = uval == 0x4b535542;
                      }
                      else {
                        if (uval < 0x4c435543) goto LAB_00103f34;
                        flag = uval == 0x4c485542;
                      }
                    }
                    else {
                      if (uval < 0x4e445543) goto LAB_00103f52;
                      if (uval < 0x504e5542) {
                        flag = uval == 0x50485542;
                      }
                      else {
                        if (uval < 0x504e5543) goto LAB_00103f34;
                        flag = uval == 0x50515542;
                      }
                    }
                    goto LAB_00103fa5;
                  }
LAB_00103f34:
                  thing_ptr = 0x10;
                  flag = false;
                  loop_i = 0;
                  flag_2 = true;
                  byte_ptr = (byte *)(*(int *)((int)word_ptr_5 + 0x120) + 0x1587);
                  byte_ptr_2 = (byte *)(*(int *)((int)word_ptr_5 + 0x168) + 0xc);
                  do {
                    if (thing_ptr == 0) break;
                    thing_ptr = thing_ptr + -1;
                    flag = *byte_ptr < *byte_ptr_2;
                    flag_2 = *byte_ptr == *byte_ptr_2;
                    byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
                    byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
                  } while (flag_2);
                  if (!flag_2) {
                    loop_i = (1 - (uint)flag) - (uint)(flag != 0);
                  }
                  if (loop_i == 0) {
LAB_00103f52:
                    ch = '\0';
                  }
                }
                if ((ch == '\0') && (**(int **)((int)word_ptr_5 + 0x130) == 0x504e5542)) {
                  thing_ptr = 0x10;
                  flag = false;
                  loop_i = 0;
                  flag_2 = true;
                  byte_ptr = *(byte **)((int)word_ptr_5 + 0x15c);
                  byte_ptr_2 = (byte *)((int)*(int **)((int)word_ptr_5 + 0x130) + 0x76);
                  do {
                    if (thing_ptr == 0) break;
                    thing_ptr = thing_ptr + -1;
                    flag = *byte_ptr < *byte_ptr_2;
                    flag_2 = *byte_ptr == *byte_ptr_2;
                    byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
                    byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
                  } while (flag_2);
                  if (!flag_2) {
                    loop_i = (1 - (uint)flag) - (uint)(flag != 0);
                  }
                  if (loop_i == 0) {
                    *(undefined4 *)((int)word_ptr_5 + -4) = 0x103ff7;
                    LbScreenWaitVbi();
                    str_ptr_2 = *(char **)((int)word_ptr_5 + 0x158);
                    str_ptr = (char *)(*(int *)(*(int *)((int)word_ptr_5 + 0x124) + 1) * 0x36 +
                                       *(int *)((int)word_ptr_5 + 0x154) + 0x10);
                    *(char **)((int)word_ptr_5 + -4) = str_ptr_2;
                    goto LAB_00104014;
                  }
                }
              }
              *(undefined4 *)((int)word_ptr_5 + -4) = 0x104156;
              bflib_system_io_fn_1025c0();
            }
            *(int *)((int)word_ptr_5 + 0x168) = *(int *)((int)word_ptr_5 + 0x168) + 0x26a;
          }
          goto LAB_00104099;
        }
        goto LAB_001040a7;
      }
    }
  }
LAB_00104249:
  return *(undefined1 *)((int)word_ptr_5 + 0x178);
  while( true ) {
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
    if (ch == '\0') break;
LAB_00104014:
    ch = *str_ptr;
    *str_ptr_2 = ch;
    if (ch == '\0') break;
  }
  loop_i = *(int *)((int)word_ptr_5 + 0x120);
  *(undefined4 *)(loop_i + 0x156d) = *(undefined4 *)(*(int *)((int)word_ptr_5 + 0x124) + 1);
  thing_ptr = *(int *)((int)word_ptr_5 + 0x130);
  word_ptr_7 = (undefined4 *)(loop_i + 0x1541 + (uint)flag_3 * -8);
  word_ptr_3 = (undefined4 *)(loop_i + 0x158b + (uint)flag_3 * -8);
  *(undefined4 *)(loop_i + 0x153d) = *(undefined4 *)(loop_i + 0x1587);
  word_ptr_8 = word_ptr_7 + (uint)flag_3 * -2 + 1;
  word_ptr_4 = word_ptr_3 + (uint)flag_3 * -2 + 1;
  *word_ptr_7 = *word_ptr_3;
  *word_ptr_8 = *word_ptr_4;
  word_ptr_8[(uint)flag_3 * -2 + 1] = word_ptr_4[(uint)flag_3 * -2 + 1];
  *(undefined4 *)(loop_i + 0x1575) = *(undefined4 *)(thing_ptr + 0x52); /* thing->health */
  *(undefined4 *)(loop_i + 0x1571) = *(undefined4 *)(*(int *)((int)word_ptr_5 + 0x130) + 0x40);
  *(undefined4 *)((int)word_ptr_5 + 0x16c) = 1;
  *(undefined4 *)((int)word_ptr_5 + -4) = 0x104099;
  bflib_system_io_fn_1025c0();
LAB_00104099:
  if (*(int *)((int)word_ptr_5 + 0x16c) != 0) goto LAB_001040a7;
  goto LAB_00103e1f;
LAB_001040a7:
  if (*(int *)((int)word_ptr_5 + 0x16c) == 1) {
    *(undefined4 *)((int)word_ptr_5 + -4) = 0x1040ca;
    bflib_system_io_fn_0ff398();
    *(undefined4 *)((int)word_ptr_5 + -4) = 0x1040d6;
    ch = lbnet_Start_106da4();
    if (ch == '\0') {
      loop_i = *(int *)((int)word_ptr_5 + 0x120);
      *(undefined2 *)(loop_i + 0x17ef) = 2;
      *(undefined1 *)(loop_i + 0x17f1) = 0;
      *(undefined4 *)(loop_i + 0x7a8) = 1;
      thing_ptr = loop_i;
      do {
        val = thing_ptr + 1;
        *(undefined1 *)(thing_ptr + 0x17f2) = 0;
        *(undefined1 *)(thing_ptr + 0x1812) = 0;
        thing_ptr = val;
      } while (val != loop_i + 0x20);
      uval_2 = *(undefined4 *)(*(int *)((int)word_ptr_5 + 0x120) + 0x1575);
      *(undefined1 *)((int)word_ptr_5 + 0x178) = 0;
      **(undefined4 **)((int)word_ptr_5 + 0x120) = uval_2;
      return *(undefined1 *)((int)word_ptr_5 + 0x178);
    }
  }
  *(undefined4 *)((int)word_ptr_5 + -4) = 0x104249;
  bflib_system_io_fn_0e94b0();
  goto LAB_00104249;
}

/******************************************************************************
 * Function : bflib_system_io_fn_10425c (Original VA: 0x10425c, Ghidra: FUN_0010425c)
 * Prototype: undefined8 bflib_system_io_fn_10425c(void);
 * Address  : 0x10425c (Size: 363 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x10425c
 * Callers  : 0 -> 
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0e94b0, LbTimerClock, watcom_crt_fn_1073e0
 ******************************************************************************/
undefined8 bflib_system_io_fn_10425c(void)

{
  ushort uval;
  int thing;
  int val;
  int extraout_ECX;
  int loop_i;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined8 clock_ms;
  undefined4 auStackY_183c [1524];
  undefined4 uval_2;
  
  flag = 0;
  if ((*(int *)(thing + 0xd74) != 0) && (*(int *)(thing + 0x7a8) != 0)) {
    LbTimerClock();
    do {
      clock_ms = LbTimerClock();
    } while ((uint)((int)clock_ms - (int)((ulonglong)clock_ms >> 0x20)) < 700);
    *(undefined4 *)(thing + 0x1832) = 0;
    if ((*(short *)(thing + 0x17ef) == 1) || (*(short *)(thing + 0x17ef) == 2)) {
      if (*(short *)(thing + 0x17ef) == 1) {
        uval = *(ushort *)(thing + 0x1523);
      }
      else {
        uval = *(ushort *)(thing + 0x1579);
      }
      if (1 < uval) {
        LbScreenWaitVbi();
        uval_2 = 0x44535542;
        *(char *)(thing + 0x17f1) = *(char *)(thing + 0x17f1) + '\x01';
        word_ptr = (undefined4 *)(thing + 0x158b + (uint)flag * -8);
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *(undefined4 *)(&stack0xffffffa4 + (uint)flag * -8) = *word_ptr;
        *(undefined4 *)(&stack0xffffffa8 + (uint)flag * -8 + (uint)flag * -8) = *word_ptr_2;
        *(undefined4 *)
         ((int)(&stack0xffffffa8 + (uint)flag * -8 + (uint)flag * -8) + ((uint)flag * -2 + 1) * 4
         ) = word_ptr_2[(uint)flag * -2 + 1];
        word_ptr = (undefined4 *)(*(int *)(thing + 0xdce) + extraout_ECX * 0x38);
        word_ptr_2 = (undefined4 *)&stack0xffffffb0;
        for (loop_i = 0xe; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_2 = *word_ptr;
          word_ptr = word_ptr + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        }
        for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
          *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
          word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
          word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
        }
        watcom_crt_fn_1073e0(uval_2,extraout_ECX);
      }
      if (*(int *)(thing + 0xdce) != 0) {
        bflib_system_io_fn_0e94b0();
        *(undefined4 *)(thing + 0xdce) = 0;
        *(undefined2 *)(thing + 0x17ef) = 0;
        *(undefined1 *)(thing + 0x17f1) = 0;
        loop_i = thing;
        do {
          val = loop_i + 1;
          *(undefined1 *)(loop_i + 0x17f2) = 0;
          *(undefined1 *)(loop_i + 0x1812) = 0;
          loop_i = val;
        } while (val != thing + 0x20); /* thing->model */
      }
    }
    *(undefined4 *)(thing + 0x7a8) = 0;
    thing = LbScreenWaitVbi();
  }
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)thing >> 8),0xff));
}

/******************************************************************************
 * Function : bflib_system_io_fn_1043c8 (Original VA: 0x1043c8, Ghidra: FUN_001043c8)
 * Prototype: char bflib_system_io_fn_1043c8(void);
 * Address  : 0x1043c8 (Size: 54 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x1043c8
 * Callers  : 0 -> 
 * Callees  : 2 -> LbNetLog, lbnet_resending_packet_10962c
 ******************************************************************************/
char bflib_system_io_fn_1043c8(void)

{
  char net_status;
  char extraout_DL;
  
  net_status = lbnet_resending_packet_10962c();
  if (net_status == -1) {
    LbNetLog(s_ERROR_SendMessageToPlayer_00172873);
    net_status = extraout_DL;
  }
  return net_status;
}

/******************************************************************************
 * Function : bflib_system_io_fn_104400 (Original VA: 0x104400, Ghidra: FUN_00104400)
 * Prototype: void bflib_system_io_fn_104400(void);
 * Address  : 0x104400 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x104400
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_104410
 ******************************************************************************/
void bflib_system_io_fn_104400(void)

{
  bflib_system_io_fn_104410(0);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_104408 (Original VA: 0x104408, Ghidra: FUN_00104408)
 * Prototype: void bflib_system_io_fn_104408(void);
 * Address  : 0x104408 (Size: 8 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x104408
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_104410
 ******************************************************************************/
void bflib_system_io_fn_104408(void)

{
  bflib_system_io_fn_104410(1);
  return;
}

/******************************************************************************
 * Function : bflib_system_io_fn_104410 (Original VA: 0x104410, Ghidra: FUN_00104410)
 * Prototype: undefined4 bflib_system_io_fn_104410(char param_1);
 * Address  : 0x104410 (Size: 208 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x104410
 * Callers  : 2 -> bflib_system_io_fn_104400, bflib_system_io_fn_104408
 * Callees  : 2 -> lbnet_DecodeMessageStub_0ff8c0, watcom_crt_fn_1056a8
 ******************************************************************************/
undefined4 bflib_system_io_fn_104410(char param_1)

{
  bool flag;
  int arg_eax;
  uint *arg_ecx;
  uint loop_i;
  uint loop_i_2;
  undefined4 *arg_edx;
  undefined4 *arg_ebx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag_2;
  int local_1c;
  undefined4 local_14;
  
  flag_2 = 0;
  flag = false;
  local_14 = 0;
  word_ptr = *(undefined4 **)(arg_eax + 0x1597);
  do {
    if ((undefined4 *)(*(int *)(arg_eax + 0x1597) + 0x4380) <= word_ptr) {
LAB_00104458:
      if (!flag) {
        word_ptr = (undefined4 *)0x0;
      }
      if (word_ptr == (undefined4 *)0x0) {
        *arg_ecx = 0;
        watcom_crt_fn_1056a8();
      }
      else {
        *arg_edx = word_ptr[0x86];
        lbnet_DecodeMessageStub_0ff8c0();
        loop_i = local_1c + 4;
        if (loop_i <= *arg_ecx) {
          local_14 = 1;
          word_ptr_2 = word_ptr;
          for (loop_i_2 = loop_i >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
            *arg_ebx = *word_ptr_2;
            word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
            arg_ebx = arg_ebx + (uint)flag_2 * -2 + 1;
          }
          for (loop_i = loop_i & 3; loop_i != 0; loop_i = loop_i - 1) {
            *(undefined1 *)arg_ebx = *(undefined1 *)word_ptr_2;
            word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
            arg_ebx = (undefined4 *)((int)arg_ebx + (uint)flag_2 * -2 + 1);
          }
          *arg_ecx = local_1c + 4;
          if (param_1 == '\0') {
            *(undefined2 *)((int)word_ptr + 0x216) = 0;
          }
        }
      }
      return local_14;
    }
    if (*(short *)((int)word_ptr + 0x216) != 0) {
      flag = true;
      goto LAB_00104458;
    }
    word_ptr = word_ptr + 0x87;
  } while( true );
}

/******************************************************************************
 * Function : bflib_system_io_bu_gi_1044e0 (Original VA: 0x1044e0, Ghidra: FUN_001044e0)
 * Prototype: undefined1 bflib_system_io_bu_gi_1044e0(void);
 * Address  : 0x1044e0 (Size: 2148 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : String 'BU.GI.'
 * Callers  : 0 -> 
 * Callees  : 11 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a, bflib_system_io_fn_0ff3a4, bflib_system_io_fn_0ff4d8, bflib_system_io_fn_0ff834, bflib_system_io_fn_1023f4, bflib_system_io_fn_1025c0, bflib_system_io_fn_1026b0 ...
 ******************************************************************************/
undefined1 bflib_system_io_bu_gi_1044e0(void)

{
  uint *word_ptr;
  short short_val;
  int arg_eax;
  undefined4 uval;
  char extraout_CL;
  uint uval_2;
  int loop_i;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint loop_i_2;
  char ch;
  code *arg_edx;
  byte *byte_ptr;
  int *thing_ptr;
  undefined1 *word_ptr_2;
  int *int_ptr;
  char *str_ptr;
  int loop_i_3;
  short *val;
  undefined4 *word_ptr_3;
  byte *byte_ptr_2;
  undefined4 *word_ptr_4;
  uint *word_ptr_5;
  char *str_ptr_2;
  int loop_i_4;
  short *val_2;
  undefined4 *word_ptr_6;
  byte *byte_ptr_3;
  bool flag;
  bool flag_2;
  byte flag_3;
  int aiStack_10c [33];
  undefined2 local_88 [8];
  int local_78 [8];
  int aiStack_58 [4];
  int local_40 [3];
  int local_34 [5];
  char acStack_20 [8];
  char local_18 [4];
  byte local_14 [4];
  
  flag_3 = 0;
  int_ptr = aiStack_10c + 2;
  thing_ptr = aiStack_10c + 2;
  if (*(int *)(arg_eax + 0xd74) == 0) goto LAB_001045c1;
  if (*(int *)(arg_eax + 0x7a8) == 0) {
    aiStack_10c[1] = 0x1045d8;
    bflib_system_io_fn_0ff4d8();
    aiStack_10c[1] = 0x1045dd;
    bflib_system_io_fn_0e8d4a();
    loop_i_3 = arg_eax + 0x1492;
    loop_i_4 = arg_eax + 0xd80;
    aiStack_10c[1] = 0x10461a;
    bflib_system_io_fn_102dd0();
    aiStack_58[3] = loop_i_3;
    local_78[5] = loop_i_4;
    local_78[2] = arg_eax + 0xdd2;
    aiStack_58[2] = loop_i_3;
    local_78[6] = loop_i_4;
    local_78[1] = *(int *)(arg_eax + 0xdca) + 0x48;
    aiStack_58[1] = loop_i_3;
    local_78[7] = loop_i_4;
    local_78[0] = *(int *)(arg_eax + 0xdca) + 0x54;
    while ((uint)thing_ptr[0x36] < *(int *)(thing_ptr[0x32] + 0xdca) + 0x4d40U) {
      thing_ptr[-1] = 0x104abe;
      loop_i_3 = bflib_system_io_fn_1026b0();
      if (loop_i_3 != 0) {
        word_ptr = (uint *)thing_ptr[0x24];
        thing_ptr[0x35] = thing_ptr[0x24];
        if ((short)*word_ptr == 0x200) {
          loop_i_4 = 6;
          thing_ptr[0x31] = thing_ptr[0x32];
          *(undefined1 *)(thing_ptr + 0x3b) = 0xff;
          flag = false;
          loop_i_3 = 0;
          flag_2 = true;
          word_ptr_5 = word_ptr + 1;
          byte_ptr = &g_data_0017288e; /* 0x17288e="BU.GI." */
          do {
            if (loop_i_4 == 0) break;
            loop_i_4 = loop_i_4 + -1;
            flag = (byte)*word_ptr_5 < *byte_ptr;
            flag_2 = (byte)*word_ptr_5 == *byte_ptr;
            word_ptr_5 = (uint *)((int)word_ptr_5 + (uint)flag_3 * -2 + 1);
            byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
          } while (flag_2);
          if (!flag_2) {
            loop_i_3 = (1 - (uint)flag) - (uint)(flag != 0);
          }
          if (loop_i_3 == 0) {
            thing_ptr[0x33] = (int)(thing_ptr + 0x1b); /* thing->index_or_angle */
            *(undefined1 *)(thing_ptr + 0x3c) = 0;
            val = (short *)((int)word_ptr + 10);
LAB_00104b39:
            if (*(byte *)(thing_ptr + 0x3c) < 4) {
              thing_ptr[-1] = 0x104b5b;
              LbScreenWaitVbi();
              loop_i_2 = 0;
              do {
                uval_2 = 0xffffffff;
                val_2 = (short *)((int)word_ptr + 10);
                do {
                  if (uval_2 == 0) break;
                  uval_2 = uval_2 - 1;
                  short_val = *val_2;
                  val_2 = (short *)((int)val_2 + (uint)flag_3 * -2 + 1);
                } while ((char)short_val != '\0');
                if (~uval_2 - 1 <= loop_i_2) goto LAB_001046b5;
                short_val = *val;
                val = (short *)((int)val + 1);
                if ((char)short_val == '.') goto LAB_001046b5;
                *(char *)((int)thing_ptr + loop_i_2 + 0x58) = (char)short_val;
                loop_i_2 = loop_i_2 + 1;
              } while( true );
            }
            loop_i_4 = 0x10;
            flag = false;
            loop_i_3 = 0;
            flag_2 = true;
            byte_ptr = (byte *)(thing_ptr[0x31] + 0x1587);
            byte_ptr_2 = (byte *)(thing_ptr + 0x1b); /* thing->index_or_angle */
            do {
              if (loop_i_4 == 0) break;
              loop_i_4 = loop_i_4 + -1;
              flag = *byte_ptr < *byte_ptr_2;
              flag_2 = *byte_ptr == *byte_ptr_2;
              byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
              byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
            } while (flag_2);
            if (!flag_2) {
              loop_i_3 = (1 - (uint)flag) - (uint)(flag != 0);
            }
            if (loop_i_3 == 0) {
              *(undefined1 *)(thing_ptr + 0x3b) = 0;
            }
          }
          if (*(char *)(thing_ptr + 0x3b) == '\0') {
            thing_ptr[-1] = (int)thing_ptr + 0x86;
            word_ptr_3 = (undefined4 *)(thing_ptr[0x35] + 0x38);
            word_ptr_4 = (undefined4 *)((int)thing_ptr + 0x86);
            for (loop_i_3 = 1; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
              *word_ptr_4 = *word_ptr_3;
              word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
              word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
            }
            for (loop_i_3 = 2; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
              *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
              word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
              word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag_3 * -2 + 1);
            }
            thing_ptr[-1] = (int)thing_ptr + 0x82;
            word_ptr_3 = (undefined4 *)(thing_ptr[0x35] + 0x34);
            word_ptr_4 = (undefined4 *)((int)thing_ptr + 0x82);
            for (loop_i_3 = 1; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
              *word_ptr_4 = *word_ptr_3;
              word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
              word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
            }
            for (loop_i_3 = 0; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
              *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
              word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
              word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag_3 * -2 + 1);
            }
            loop_i_3 = thing_ptr[0x32];
            *(undefined2 *)(thing_ptr + 0x1f) = *(undefined2 *)(thing_ptr[0x35] + 0x3e); /* thing->class_id */
            thing_ptr[-1] = 0x1047a5;
            LbScreenWaitVbi();
            thing_ptr[-1] = 0x56;
            *thing_ptr = 0x48515542;
            word_ptr_6 = thing_ptr + (uint)flag_3 * -2 + 4;
            word_ptr_3 = (undefined4 *)(loop_i_3 + 0x158b + (uint)flag_3 * -8);
            thing_ptr[3] = *(undefined4 *)(loop_i_3 + 0x1587);
            word_ptr_4 = word_ptr_3 + (uint)flag_3 * -2 + 1;
            *word_ptr_6 = *word_ptr_3;
            word_ptr_6[(uint)flag_3 * -2 + 1] = *word_ptr_4;
            (word_ptr_6 + (uint)flag_3 * -2 + 1)[(uint)flag_3 * -2 + 1] =
                 word_ptr_4[(uint)flag_3 * -2 + 1];
            thing_ptr[-2] = 0x1047cf;
            bflib_system_io_fn_1023f4();
            thing_ptr = thing_ptr + -1;
          }
        }
        else {
          thing_ptr[0x37] = (int)word_ptr;
          loop_i_2 = *word_ptr;
          ch = -1;
          if (loop_i_2 < 0x4a435542) {
            if (loop_i_2 < 0x47445542) {
              if (0x41535541 < loop_i_2) {
                if (loop_i_2 < 0x41535543) goto LAB_001047d4;
                flag = loop_i_2 == 0x44535542;
                goto LAB_0010488a;
              }
            }
            else {
              if (loop_i_2 < 0x47445543) goto LAB_001047f2;
              if (loop_i_2 < 0x49435542) {
                flag = loop_i_2 == 0x48515542;
              }
              else {
                if (loop_i_2 < 0x49435543) goto LAB_001047d4;
                flag = loop_i_2 == 0x49485542;
              }
LAB_0010488a:
              if (flag) goto LAB_001047d4;
            }
          }
          else {
            if (0x4a435542 < loop_i_2) {
              if (loop_i_2 < 0x4e445542) {
                if (loop_i_2 < 0x4c435542) {
                  flag = loop_i_2 == 0x4b535542;
                }
                else {
                  if (loop_i_2 < 0x4c435543) goto LAB_001047d4;
                  flag = loop_i_2 == 0x4c485542;
                }
              }
              else {
                if (loop_i_2 < 0x4e445543) goto LAB_001047f2;
                if (loop_i_2 < 0x504e5542) {
                  flag = loop_i_2 == 0x50485542;
                }
                else {
                  if (loop_i_2 < 0x504e5543) goto LAB_001047d4;
                  flag = loop_i_2 == 0x50515542;
                }
              }
              goto LAB_0010488a;
            }
LAB_001047d4:
            loop_i_4 = 0x10;
            flag = false;
            loop_i_3 = 0;
            flag_2 = true;
            byte_ptr = (byte *)(thing_ptr[0x32] + 0x1587);
            byte_ptr_2 = (byte *)thing_ptr[0x23];
            do {
              if (loop_i_4 == 0) break;
              loop_i_4 = loop_i_4 + -1;
              flag = *byte_ptr < *byte_ptr_2;
              flag_2 = *byte_ptr == *byte_ptr_2;
              byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
              byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
            } while (flag_2);
            if (!flag_2) {
              loop_i_3 = (1 - (uint)flag) - (uint)(flag != 0);
            }
            if (loop_i_3 == 0) {
LAB_001047f2:
              ch = '\0';
            }
          }
          if ((ch == '\0') && (*(int *)thing_ptr[0x37] == 0x49485542)) {
            loop_i_3 = 0;
            byte_ptr = (byte *)(thing_ptr[0x25] + 10);
LAB_001048bd:
            if (loop_i_3 <= (int)(uint)*(ushort *)(thing_ptr[0x32] + 0x17ed)) {
              loop_i = 6;
              thing_ptr[0x38] = thing_ptr[0x25] + loop_i_3 * 0x36;
              flag = false;
              loop_i_4 = 0;
              flag_2 = true;
              byte_ptr_2 = byte_ptr;
              byte_ptr_3 = (byte *)((int)thing_ptr + 0x86);
              do {
                if (loop_i == 0) break;
                loop_i = loop_i + -1;
                flag = *byte_ptr_2 < *byte_ptr_3;
                flag_2 = *byte_ptr_2 == *byte_ptr_3;
                byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
                byte_ptr_3 = byte_ptr_3 + (uint)flag_3 * -2 + 1;
              } while (flag_2);
              if (!flag_2) {
                loop_i_4 = (1 - (uint)flag) - (uint)(flag != 0);
              }
              if (loop_i_4 != 0) goto LAB_001048b9;
              word_ptr_3 = (undefined4 *)thing_ptr[0x38];
              loop_i_4 = loop_i_3 * 0x36 + thing_ptr[0x32];
              *(int *)(loop_i_4 + 0xe02) = thing_ptr[0x34];
              thing_ptr[-1] = (int)word_ptr_3;
              word_ptr_4 = thing_ptr + 0x1f; /* thing->class_id */
              for (loop_i_3 = 4; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
                *word_ptr_3 = *word_ptr_4;
                word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
                word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
              }
              for (loop_i_3 = 0; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
                *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_4;
                word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag_3 * -2 + 1);
                word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
              }
              thing_ptr[-1] = 0x104952;
              bflib_system_io_fn_0ff834();
              loop_i_3 = -1;
              *(undefined2 *)(loop_i_4 + 0xe06) = *(undefined2 *)(thing_ptr[0x37] + 0x48);
            }
            if (loop_i_3 == -1) goto LAB_00104a2f;
            loop_i_3 = thing_ptr[0x32];
            loop_i_4 = 0;
LAB_00104981:
            if (loop_i_4 <= (int)(uint)*(ushort *)(thing_ptr[0x32] + 0x17ed)) {
              if (*(int *)(loop_i_3 + 0xe02) != 0) goto LAB_0010497d;
              thing_ptr[-1] = loop_i_4 * 0x36 + thing_ptr[0x25];
              word_ptr_3 = thing_ptr + 0x1f; /* thing->class_id */
              word_ptr_4 = (undefined4 *)(loop_i_4 * 0x36 + thing_ptr[0x25]);
              for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
                *word_ptr_4 = *word_ptr_3;
                word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
                word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
              }
              for (loop_i_4 = 0; loop_i_4 != 0; loop_i_4 = loop_i_4 + -1) {
                *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
                word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
                word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag_3 * -2 + 1);
              }
              thing_ptr[-1] = 0x1049e0;
              bflib_system_io_fn_0ff834();
              *(int *)(loop_i_3 + 0xe02) = thing_ptr[0x34];
              *(undefined2 *)(loop_i_3 + 0xe06) = *(undefined2 *)(thing_ptr[0x37] + 0x48);
              loop_i_4 = -1;
            }
            if ((loop_i_4 != -1) && (loop_i_3 = thing_ptr[0x32], *(ushort *)(loop_i_3 + 0x17ed) < 0x20)) {
              *(short *)(loop_i_3 + 0x17ed) = *(short *)(loop_i_3 + 0x17ed) + 1;
            }
          }
        }
LAB_00104a2f:
        *(undefined4 *)((int)thing_ptr + -4) = 0x104a49;
        bflib_system_io_fn_1025c0();
      }
      *(int *)((int)thing_ptr + 0x90) = *(int *)((int)thing_ptr + 0x90) + 0x26a;
      *(int *)((int)thing_ptr + 0x8c) = *(int *)((int)thing_ptr + 0x8c) + 0x26a;
      *(int *)((int)thing_ptr + 0xd8) = *(int *)((int)thing_ptr + 0xd8) + 0x26a;
    }
    *(undefined1 *)(thing_ptr + 0x39) = 0;
    if ((g_heap_alloc_list_head & 1) == 0) {
      g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
      thing_ptr[-1] = 0x104b8d;
      g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
    }
    if ((g_heap_alloc_list_head & 2) == 0) {
      g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
      thing_ptr[-1] = 0x104bab;
      g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
    }
    thing_ptr[-1] = 0x104bb5;
    loop_i_3 = bflib_system_io_fn_0e8d4a();
    if ((*(char *)(thing_ptr + 0x39) == '\0') || (0x32 < (uint)(loop_i_3 - g_bss_003e02a8))) {
      thing_ptr[-1] = 0x104bef;
      g_bss_003e02a8 = loop_i_3;
      g_bss_003e02ac = g_bss_003e02ac + 1;
      bflib_system_io_fn_102834();
    }
    if (99 < (uint)(loop_i_3 - g_bss_003e02a4)) {
      g_bss_003e02ac = 0;
      g_bss_003e02a4 = loop_i_3;
    }
    loop_i_3 = thing_ptr[0x32];
    for (loop_i_4 = 0; loop_i = thing_ptr[0x32], loop_i_4 <= (int)(uint)*(ushort *)(loop_i + 0x17ed);
        loop_i_4 = loop_i_4 + 1) {
      if ((*(int *)(loop_i_3 + 0xe02) != 0) && (700 < (uint)(thing_ptr[0x34] - *(int *)(loop_i_3 + 0xe02)))
         ) {
        thing_ptr[-1] = 0x104c69;
        LbScreenWaitVbi();
        loop_i_4 = extraout_ECX;
      }
      loop_i_3 = loop_i_3 + 0x36;
    }
    thing_ptr[0x2b] = loop_i + 0xdd2;
    thing_ptr[0x27] = loop_i;
    int_ptr = thing_ptr;
    for (loop_i_3 = 0; loop_i_3 <= (int)(uint)*(ushort *)(*(int *)((int)int_ptr + 200) + 0x17ed);
        loop_i_3 = loop_i_3 + 1) {
      word_ptr_2 = (undefined1 *)int_ptr;
      if (*(int *)(*(int *)((int)int_ptr + 0x9c) + 0xe02) != 0) {
        *(int *)((int)int_ptr + 0x98) = *(int *)((int)int_ptr + 0xac) + loop_i_3 * 0x36;
        *(undefined4 *)((int)int_ptr + -4) = 0x104ce6;
        loop_i_4 = bflib_system_io_fn_0ff3a4();
        *(undefined4 **)((int)int_ptr + -4) = (undefined4 *)(loop_i_4 + 0x29);
        word_ptr_3 = *(undefined4 **)((int)int_ptr + 0x98);
        word_ptr_4 = (undefined4 *)(loop_i_4 + 0x29);
        for (loop_i_2 = extraout_ECX_00 >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *word_ptr_4 = *word_ptr_3;
          word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
          word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
        }
        for (loop_i_2 = extraout_ECX_00 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
          word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
          word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag_3 * -2 + 1);
        }
        *(undefined4 **)((int)int_ptr + -4) = (undefined4 *)(loop_i_4 + 0x39);
        word_ptr_3 = (undefined4 *)(*(int *)((int)int_ptr + 0x98) + 0x34);
        word_ptr_4 = (undefined4 *)(loop_i_4 + 0x39);
        for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_4 = *word_ptr_3;
          word_ptr_3 = word_ptr_3 + (uint)flag_3 * -2 + 1;
          word_ptr_4 = word_ptr_4 + (uint)flag_3 * -2 + 1;
        }
        for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
          *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
          word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_3 * -2 + 1);
          word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag_3 * -2 + 1);
        }
        *(undefined4 *)((int)int_ptr + -4) = *(undefined4 *)((int)int_ptr + 0xbc);
        word_ptr_2 = (undefined1 *)((int)int_ptr + -8);
        *(int *)((int)int_ptr + -8) = loop_i_4;
        *(undefined4 *)((int)int_ptr + -0xc) = 0x104d36;
        (**(code **)((int)int_ptr + 0xc0))();
        *(undefined1 *)((int)int_ptr + 0xe0) = 0;
      }
      *(int *)(word_ptr_2 + 0x9c) = *(int *)(word_ptr_2 + 0x9c) + 0x36;
      int_ptr = (int *)word_ptr_2;
    }
    goto LAB_001045c1;
  }
  str_ptr_2 = (char *)(arg_eax + 0x14ab);
  if (*(short *)(arg_eax + 0x17ef) == 1) {
    str_ptr = (char *)(arg_eax + 0x14fb);
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    uval = *(undefined4 *)(arg_eax + 0x151b);
LAB_00104596:
    *(undefined4 *)(arg_eax + 0x14a3) = uval;
  }
  else if (*(short *)(arg_eax + 0x17ef) == 2) {
    str_ptr = (char *)(arg_eax + 0x154d);
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    uval = *(undefined4 *)(arg_eax + 0x156d);
    goto LAB_00104596;
  }
  aiStack_10c[0] = arg_eax + 0x14a2;
  int_ptr = aiStack_10c;
  (*arg_edx)();
LAB_001045c1:
  return *(undefined1 *)((int)int_ptr + 0xe8);
LAB_001048b9:
  byte_ptr = byte_ptr + 0x36;
  loop_i_3 = loop_i_3 + 1;
  goto LAB_001048bd;
LAB_0010497d:
  loop_i_3 = loop_i_3 + 0x36;
  loop_i_4 = loop_i_4 + 1;
  goto LAB_00104981;
LAB_001046b5:
  thing_ptr[-1] = 0x1046cc;
  uval = watcom_crt_fn_11fddc();
  word_ptr_3 = (undefined4 *)thing_ptr[0x33];
  *(char *)(thing_ptr + 0x3c) = extraout_CL + '\x01';
  *word_ptr_3 = uval;
  thing_ptr[0x33] = (int)(word_ptr_3 + 1);
  goto LAB_00104b39;
}

/******************************************************************************
 * Function : bflib_system_io_fn_104d44 (Original VA: 0x104d44, Ghidra: FUN_00104d44)
 * Prototype: undefined4 bflib_system_io_fn_104d44(void);
 * Address  : 0x104d44 (Size: 2403 bytes)
 * Module   : bflib/bflib_system_io.cpp [bflib_library_segment]
 * Purpose  : Module bflib/bflib_system_io.cpp procedure @ 0x104d44
 * Callers  : 0 -> 
 * Callees  : 8 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a, lbnet_EnumeratePlayersForSessionRunning_100828, bflib_system_io_fn_1023f4, bflib_system_io_fn_1025c0, bflib_system_io_fn_1026b0, bflib_system_io_fn_102834, watcom_crt_fn_109428
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x001050f2) */
/* WARNING: Removing unreachable block (ram,0x00104eed) */

undefined4 bflib_system_io_fn_104d44(void)

{
  char ch;
  int arg_eax;
  undefined4 uval;
  int val;
  int *int_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  int extraout_ECX_01;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  int arg_edx;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  undefined1 *word_ptr_3;
  undefined1 *word_ptr_4;
  char *str_ptr;
  undefined4 *word_ptr_5;
  undefined4 *word_ptr_6;
  byte *byte_ptr;
  char *str_ptr_2;
  uint uval_2;
  byte *byte_ptr_2;
  char *str_ptr_3;
  bool flag;
  bool flag_2;
  byte flag_3;
  undefined8 uval_3;
  undefined4 auStack_18cc [1543];
  undefined4 local_ae;
  int local_64;
  int local_60;
  int local_50;
  undefined4 local_48;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  
  flag_3 = 0;
  word_ptr_5 = auStack_18cc + 0x5f4;
  local_64 = 0x20;
  local_48 = 0x20;
  uval = 0xff;
  if (*(int *)(arg_eax + 0xd74) != 0) {
    if (*(int *)(arg_eax + 0x7a8) == 0) {
      if (*(uint *)(arg_edx + 1) < 0x20) {
        if (*(int *)(*(uint *)(arg_edx + 1) * 0x36 + arg_eax + 0xe02) != 0) {
          auStack_18cc[0x5f3] = 0x104e0b;
          local_38 = arg_edx;
          LbScreenWaitVbi();
          auStack_18cc[0x5f4] = 0x50515542;
          word_ptr_5 = (undefined4 *)(arg_eax + 0x158b + (uint)flag_3 * -8);
          auStack_18cc[0x5f7] = *(undefined4 *)(arg_eax + 0x1587);
          word_ptr_6 = word_ptr_5 + (uint)flag_3 * -2 + 1;
          auStack_18cc[(uint)flag_3 * -2 + 0x5f8] = *word_ptr_5;
          auStack_18cc[(uint)flag_3 * -2 + (uint)flag_3 * -2 + 0x5f9] = *word_ptr_6;
          (auStack_18cc + (uint)flag_3 * -2 + (uint)flag_3 * -2 + 0x5f9)[(uint)flag_3 * -2 + 1] =
               word_ptr_6[(uint)flag_3 * -2 + 1];
          local_ae = 0;
          local_30 = arg_eax + 0xdd2 + *(int *)(local_38 + 1) * 0x36;
          auStack_18cc[0x5f3] = 0x104e59;
          local_34 = bflib_system_io_fn_0e8d4a();
          auStack_18cc[0x5f3] = 0x104e72;
          local_3c = bflib_system_io_fn_0e8d4a();
          word_ptr_5 = auStack_18cc + 0x5f3;
          auStack_18cc[0x5f3] = 0x56;
          bflib_system_io_fn_1023f4();
          if ((g_heap_alloc_list_head & 1) == 0) {
            g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
            g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
          }
          if ((g_heap_alloc_list_head & 2) == 0) {
            g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
            g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
          }
          g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
          g_bss_003e02ac = g_bss_003e02ac + 1;
          bflib_system_io_fn_102834();
          if (99 < (uint)(extraout_ECX - g_bss_003e02a4)) {
            g_bss_003e02ac = 0;
            g_bss_003e02a4 = extraout_ECX;
          }
          local_64 = local_60 + 0x1492;
          local_28 = local_60 + 0xd80;
          local_50 = local_60 + 0xdd2;
LAB_00104f63:
          if (*(char *)((int)word_ptr_5 + 0xec) == '\0') {
            *(undefined4 *)((int)word_ptr_5 + -4) = 0x104f76;
            val = bflib_system_io_fn_0e8d4a();
            *(int *)((int)word_ptr_5 + 0xbc) = val;
            *(undefined4 *)((int)word_ptr_5 + -4) = 0x104f8b;
            uval_3 = bflib_system_io_fn_0e8d4a();
            *(int *)((int)word_ptr_5 + 0xb8) = (int)uval_3;
            if (300 < (uint)((int)uval_3 - (int)((ulonglong)uval_3 >> 0x20))) {
              *(undefined1 *)((int)word_ptr_5 + 0xec) = 0xff;
              goto LAB_0010564b;
            }
            if (0x19 < (uint)(val - *(int *)((int)word_ptr_5 + 200))) {
              val_2 = *(int *)(*(int *)((int)word_ptr_5 + 0xc4) + 1);
              word_ptr = (undefined1 *)((int)word_ptr_5 + -4);
              *(undefined4 *)((int)word_ptr_5 + -4) = 0x56;
              *(int *)((int)word_ptr_5 + 200) = val;
              *(int *)((int)word_ptr_5 + 0xcc) = *(int *)((int)word_ptr_5 + 0xb0) + val_2 * 0x36;
              *(undefined4 *)((int)word_ptr_5 + -8) = 0x104ff9;
              bflib_system_io_fn_1023f4();
              if ((g_heap_alloc_list_head & 1) == 0) {
                g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
                *(undefined4 *)((int)word_ptr_5 + -8) = 0x10501d;
                g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
              }
              if ((g_heap_alloc_list_head & 2) == 0) {
                g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
                *(undefined4 *)((int)word_ptr_5 + -8) = 0x10503b;
                g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
              }
              *(undefined4 *)((int)word_ptr_5 + -8) = 0x105045;
              val = bflib_system_io_fn_0e8d4a();
              if ((extraout_DL == '\0') || (0x32 < (uint)(val - g_bss_003e02a8))) {
                *(undefined4 *)((int)word_ptr_5 + -8) = 0x105079;
                g_bss_003e02a8 = val;
                g_bss_003e02ac = g_bss_003e02ac + 1;
                bflib_system_io_fn_102834();
                val = extraout_ECX_00;
              }
              word_ptr_5 = (undefined4 *)((int)word_ptr_5 + -4);
              if (99 < (uint)(val - g_bss_003e02a4)) {
                g_bss_003e02ac = 0;
                word_ptr_5 = (undefined4 *)word_ptr;
                g_bss_003e02a4 = val;
              }
            }
            val = *(int *)(*(int *)((int)word_ptr_5 + 0xa0) + 0xdca);
            *(int *)((int)word_ptr_5 + 0xa4) = val;
            *(int *)((int)word_ptr_5 + 0xd0) = val + 0x54;
            *(int *)((int)word_ptr_5 + 0xd4) = *(int *)((int)word_ptr_5 + 0xa4) + 0x48;
            while (*(uint *)((int)word_ptr_5 + 0xa4) <
                   *(int *)(*(int *)((int)word_ptr_5 + 0xa0) + 0xdca) + 0x4d40U) {
              *(undefined4 *)((int)word_ptr_5 + -4) = 0x10563e;
              val = bflib_system_io_fn_1026b0();
              if (val != 0) {
                *(uint **)((int)word_ptr_5 + 0xa8) = *(uint **)((int)word_ptr_5 + 0xd4);
                uval_2 = **(uint **)((int)word_ptr_5 + 0xd4);
                if (uval_2 < 0x4a435542) {
                  if (uval_2 < 0x47445542) {
                    if (uval_2 < 0x41535542) goto LAB_001055a7;
                    if (0x41535542 < uval_2) {
                      flag = uval_2 == 0x44535542;
                      goto LAB_001051bd;
                    }
                    goto LAB_001050ca;
                  }
                  if (uval_2 < 0x47445543) goto LAB_00105574;
                  if (uval_2 < 0x49435542) {
                    if (uval_2 == 0x48515542) goto LAB_001050ca;
                  }
                  else if ((uval_2 < 0x49435543) || (uval_2 == 0x49485542)) goto LAB_001050ca;
                }
                else {
                  if (0x4a435542 < uval_2) {
                    if (uval_2 < 0x4e445542) {
                      if (uval_2 < 0x4c435542) {
                        flag = uval_2 == 0x4b535542;
                      }
                      else {
                        if (uval_2 < 0x4c435543) goto LAB_001050ca;
                        flag = uval_2 == 0x4c485542;
                      }
                    }
                    else {
                      if (uval_2 < 0x4e445543) goto LAB_00105574;
                      if (uval_2 < 0x504e5542) {
                        flag = uval_2 == 0x50485542;
                      }
                      else {
                        if (uval_2 < 0x504e5543) goto LAB_001050ca;
                        flag = uval_2 == 0x50515542;
                      }
                    }
LAB_001051bd:
                    if (!flag) goto LAB_001055a7;
                  }
LAB_001050ca:
                  val_2 = 0x10;
                  flag = false;
                  val = 0;
                  flag_2 = true;
                  byte_ptr = (byte *)(*(int *)((int)word_ptr_5 + 0xa0) + 0x1587);
                  byte_ptr_2 = *(byte **)((int)word_ptr_5 + 0xd0);
                  do {
                    if (val_2 == 0) break;
                    val_2 = val_2 + -1;
                    flag = *byte_ptr < *byte_ptr_2;
                    flag_2 = *byte_ptr == *byte_ptr_2;
                    byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
                    byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
                  } while (flag_2);
                  if (!flag_2) {
                    val = (1 - (uint)flag) - (uint)(flag != 0);
                  }
                  if (val == 0) {
LAB_00105574:
                    uval_2 = **(uint **)((int)word_ptr_5 + 0xa8);
                    if (0x49485541 < uval_2) {
                      if (uval_2 < 0x49485543) {
                        *(undefined4 *)((int)word_ptr_5 + -4) = 0x1051ea;
                        watcom_crt_fn_109428();
                      }
                      else if (uval_2 == 0x50485542) {
                        val_2 = 6;
                        flag = false;
                        val = 0;
                        flag_2 = true;
                        byte_ptr = (byte *)((int)word_ptr_5 + 0x92);
                        byte_ptr_2 = (byte *)(*(int *)(*(int *)((int)word_ptr_5 + 0xc4) + 1) * 0x36 +
                                           *(int *)((int)word_ptr_5 + 0xb0) + 10);
                        do {
                          if (val_2 == 0) break;
                          val_2 = val_2 + -1;
                          flag = *byte_ptr < *byte_ptr_2;
                          flag_2 = *byte_ptr == *byte_ptr_2;
                          byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
                          byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
                        } while (flag_2);
                        if (!flag_2) {
                          val = (1 - (uint)flag) - (uint)(flag != 0);
                        }
                        if (val == 0) {
                          if ((uint)*(ushort *)(*(int *)((int)word_ptr_5 + 0xa8) + 0x44) ==
                              *(uint *)((int)word_ptr_5 + 0x98)) {
                            if (*(int *)((int)word_ptr_5 + 0x4e) ==
                                *(int *)(*(int *)((int)word_ptr_5 + 0xa8) + 0x4a)) {
                              *(undefined4 *)((int)word_ptr_5 + 0xc0) =
                                   *(undefined4 *)((int)word_ptr_5 + 0xb8);
                              *(undefined4 *)((int)word_ptr_5 + 200) =
                                   *(undefined4 *)((int)word_ptr_5 + 0xbc);
                              *(undefined4 *)((int)word_ptr_5 + 0x5d) = 0;
                              int_ptr = (int *)(*(int *)((int)word_ptr_5 + 0xa8) + 0x52);
                              *(undefined4 *)((int)word_ptr_5 + 0xac) = 0;
                              str_ptr = (char *)(*(int *)((int)word_ptr_5 + 0xa8) + 0x56);
                              word_ptr_3 = (undefined1 *)word_ptr_5;
                              do {
                                word_ptr_2 = word_ptr_3;
                                if ((short)int_ptr[9] != 0) {
                                  val = *int_ptr;
                                  val_2 = *(int *)(*(int *)(word_ptr_3 + 0xa8) + 0x40);
                                  *(int *)(word_ptr_3 + 0xe4) = *(int *)(word_ptr_3 + 0xe4) + 1;
                                  str_ptr_3 = word_ptr_3 + 0x65;
                                  *(uint *)(word_ptr_3 + 0x61) = (uint)(val == val_2);
                                  *(char **)(word_ptr_3 + -4) = str_ptr_3;
                                  str_ptr_2 = str_ptr;
                                  do {
                                    ch = *str_ptr_2;
                                    *str_ptr_3 = ch;
                                    if (ch == '\0') break;
                                    ch = str_ptr_2[1];
                                    str_ptr_2 = str_ptr_2 + 2;
                                    str_ptr_3[1] = ch;
                                    str_ptr_3 = str_ptr_3 + 2;
                                  } while (ch != '\0');
                                  val = *int_ptr;
                                  *(undefined4 *)(word_ptr_3 + -4) = *(undefined4 *)(word_ptr_3 + 0xe0);
                                  *(int *)(word_ptr_3 + 0x59) = val;
                                  word_ptr_2 = word_ptr_3 + -8;
                                  *(undefined1 **)(word_ptr_3 + -8) = word_ptr_3 + 0x58;
                                  *(undefined4 *)(word_ptr_3 + -0xc) = 0x10530f;
                                  (**(code **)(word_ptr_3 + 0xdc))();
                                }
                                val = *(int *)(word_ptr_2 + 0xac);
                                str_ptr = str_ptr + 0x38;
                                int_ptr = int_ptr + 0xe;
                                *(uint *)(word_ptr_2 + 0xac) = val + 1U;
                                word_ptr_3 = word_ptr_2;
                              } while (val + 1U < 6);
                              word_ptr_5 = (undefined4 *)word_ptr_2;
                              if (*(uint *)(word_ptr_2 + 0xe4) < *(uint *)(word_ptr_2 + 0x98)) {
                                uval_2 = *(int *)(word_ptr_2 + 0x4e) + 1;
                                *(uint *)(word_ptr_2 + 0x4e) = uval_2;
                                if ((uint)(*(int *)(word_ptr_2 + 0xb4) * 6) < uval_2 ||
                                    *(int *)(word_ptr_2 + 0xb4) * 6 - uval_2 == 0) {
                                  word_ptr_2[0xec] = 0xff;
                                  *(undefined4 *)(word_ptr_2 + -4) = 0x1053a1;
                                  bflib_system_io_fn_1025c0();
                                }
                                else {
                                  *(undefined4 *)(word_ptr_2 + -4) = 0x56;
                                  *(undefined4 *)(word_ptr_2 + -8) = 0x1053c6;
                                  bflib_system_io_fn_1023f4();
                                  if ((g_heap_alloc_list_head & 1) == 0) {
                                    g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
                                    *(undefined4 *)(word_ptr_2 + -8) = 0x1053ea;
                                    g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
                                  }
                                  if ((g_heap_alloc_list_head & 2) == 0) {
                                    g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
                                    *(undefined4 *)(word_ptr_2 + -8) = 0x10540a;
                                    g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
                                  }
                                  *(undefined4 *)(word_ptr_2 + -8) = 0x105414;
                                  val = bflib_system_io_fn_0e8d4a();
                                  if ((extraout_DL_00 == '\0') ||
                                     (0x32 < (uint)(val - g_bss_003e02a8))) {
                                    *(undefined4 *)(word_ptr_2 + -8) = 0x105448;
                                    g_bss_003e02a8 = val;
                                    g_bss_003e02ac = g_bss_003e02ac + 1;
                                    bflib_system_io_fn_102834();
                                  }
                                  word_ptr_5 = (undefined4 *)(word_ptr_2 + -4);
                                  if (99 < (uint)(val - g_bss_003e02a4)) {
                                    g_bss_003e02ac = 0;
                                    word_ptr_5 = (undefined4 *)(word_ptr_2 + -4);
                                    g_bss_003e02a4 = val;
                                  }
                                }
                              }
                              else {
                                word_ptr_2[0xec] = 1;
                                *(undefined4 *)(word_ptr_2 + -4) = 0x105347;
                                bflib_system_io_fn_1025c0();
                                *(undefined4 *)(word_ptr_2 + -4) = 0x105353;
                                uval_3 = bflib_system_io_fn_0e8d4a();
                                *(int *)(*(int *)((int)((ulonglong)uval_3 >> 0x20) + 1) * 0x36 +
                                         *(int *)(word_ptr_2 + 0xa0) + 0xe02) = (int)uval_3;
                              }
                            }
                          }
                          else {
                            *(uint *)((int)word_ptr_5 + 0x98) =
                                 (uint)*(ushort *)(*(int *)((int)word_ptr_5 + 0xa8) + 0x44);
                            *(undefined4 *)((int)word_ptr_5 + 0xe4) = 0;
                            *(uint *)((int)word_ptr_5 + 0xb4) =
                                 (uint)*(ushort *)(*(int *)((int)word_ptr_5 + 0xa8) + 0x46);
                            *(undefined4 *)((int)word_ptr_5 + 0x4e) = 0;
                            *(undefined4 *)((int)word_ptr_5 + -4) = 0x1054a4;
                            uval = bflib_system_io_fn_0e8d4a();
                            word_ptr_4 = (undefined1 *)((int)word_ptr_5 + -4);
                            *(undefined4 *)((int)word_ptr_5 + -4) = 0x56;
                            *(undefined4 *)((int)word_ptr_5 + 0xb8) = uval;
                            *(undefined4 *)((int)word_ptr_5 + 0xbc) = uval;
                            *(undefined4 *)((int)word_ptr_5 + 0xc0) = uval;
                            *(undefined4 *)((int)word_ptr_5 + 200) = uval;
                            *(undefined4 *)((int)word_ptr_5 + -8) = 0x1054d5;
                            bflib_system_io_fn_1023f4();
                            if ((g_heap_alloc_list_head & 1) == 0) {
                              g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
                              *(undefined4 *)((int)word_ptr_5 + -8) = 0x1054f9;
                              g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
                            }
                            if ((g_heap_alloc_list_head & 2) == 0) {
                              g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
                              *(undefined4 *)((int)word_ptr_5 + -8) = 0x105517;
                              g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
                            }
                            *(undefined4 *)((int)word_ptr_5 + -8) = 0x105521;
                            val = bflib_system_io_fn_0e8d4a();
                            if ((extraout_DL_01 == '\0') || (0x32 < (uint)(val - g_bss_003e02a8))) {
                              *(undefined4 *)((int)word_ptr_5 + -8) = 0x105555;
                              g_bss_003e02a8 = val;
                              g_bss_003e02ac = g_bss_003e02ac + 1;
                              bflib_system_io_fn_102834();
                              val = extraout_ECX_01;
                            }
                            word_ptr_5 = (undefined4 *)((int)word_ptr_5 + -4);
                            if (99 < (uint)(val - g_bss_003e02a4)) {
                              g_bss_003e02ac = 0;
                              word_ptr_5 = (undefined4 *)word_ptr_4;
                              g_bss_003e02a4 = val;
                            }
                          }
                        }
                      }
                    }
                    if (*(int *)((int)word_ptr_5 + 0xe9) >> 0x18 != 0) break;
                  }
                }
LAB_001055a7:
                *(undefined4 *)((int)word_ptr_5 + -4) = 0x1055c1;
                bflib_system_io_fn_1025c0();
              }
              *(int *)((int)word_ptr_5 + 0xd0) = *(int *)((int)word_ptr_5 + 0xd0) + 0x26a;
              *(int *)((int)word_ptr_5 + 0xd4) = *(int *)((int)word_ptr_5 + 0xd4) + 0x26a;
              *(int *)((int)word_ptr_5 + 0xa4) = *(int *)((int)word_ptr_5 + 0xa4) + 0x26a;
            }
            goto LAB_00104f63;
          }
        }
LAB_0010564b:
        if (*(int *)((int)word_ptr_5 + 0xe9) >> 0x18 == -1) {
          *(undefined4 *)((int)word_ptr_5 + -4) = 0x10568f;
          LbScreenWaitVbi();
          return 0xff;
        }
        uval = 0;
      }
    }
    else {
      auStack_18cc[0x5f3] = 0x104dbf;
      uval = lbnet_EnumeratePlayersForSessionRunning_100828();
    }
  }
  return uval;
}

