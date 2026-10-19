/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: frontend.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 89
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : frontend_fn_02d8e2 (Original VA: 0x2d8e2, Ghidra: FUN_0002d8e2)
 * Prototype: void frontend_fn_02d8e2(int param_1,int param_2);
 * Address  : 0x2d8e2 (Size: 61 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02d8e2
 * Callers  : 1 -> draw_unhandled_screen_mode_087da4
 * Callees  : 1 -> file_fn_02d4a7
 ******************************************************************************/
void frontend_fn_02d8e2(int param_1,int param_2)

{
  undefined4 arg_eax;
  undefined4 arg_ecx;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  
  g_frontnet_bss_0033462c = arg_edx;
  g_frontnet_bss_00334630 = arg_eax;
  g_frontnet_bss_00334634 = arg_ecx;
  g_frontnet_bss_00334638 = arg_ebx;
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    file_fn_02d4a7();
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_02d920 (Original VA: 0x2d920, Ghidra: FUN_0002d920)
 * Prototype: void frontend_fn_02d920(void);
 * Address  : 0x2d920 (Size: 84 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02d920
 * Callers  : 1 -> frontend_fn_02dcec
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02d920(void)

{
  int *arg_eax;
  int *arg_edx;
  int *arg_ebx;
  
  *arg_eax = arg_ebx[1] * arg_edx[1] + *arg_ebx * *arg_edx + arg_ebx[2] * arg_edx[2];
  arg_eax[1] = arg_ebx[1] * arg_edx[5] + *arg_ebx * arg_edx[4] + arg_ebx[2] * arg_edx[6];
  arg_eax[2] = *arg_ebx * arg_edx[8] + arg_ebx[1] * arg_edx[9] + arg_ebx[2] * arg_edx[10];
  return;
}

/******************************************************************************
 * Function : frontend_fn_02d974 (Original VA: 0x2d974, Ghidra: FUN_0002d974)
 * Prototype: void frontend_fn_02d974(void);
 * Address  : 0x2d974 (Size: 314 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02d974
 * Callers  : 1 -> frontend_fn_02dbac
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02d974(void)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int *arg_eax;
  int *arg_edx;
  int *arg_ebx;
  
  *arg_eax = *arg_edx * *arg_ebx + arg_edx[1] * arg_ebx[4] + arg_edx[2] * arg_ebx[8];
  arg_eax[1] = *arg_edx * arg_ebx[1] + arg_edx[1] * arg_ebx[5] + arg_edx[2] * arg_ebx[9];
  arg_eax[2] = arg_edx[1] * arg_ebx[6] + *arg_edx * arg_ebx[2] + arg_edx[2] * arg_ebx[10];
  arg_eax[4] = arg_edx[4] * *arg_ebx + arg_edx[5] * arg_ebx[4] + arg_edx[6] * arg_ebx[8];
  arg_eax[5] = arg_edx[4] * arg_ebx[1] + arg_edx[5] * arg_ebx[5] + arg_edx[6] * arg_ebx[9];
  arg_eax[6] = arg_edx[4] * arg_ebx[2] + arg_edx[5] * arg_ebx[6] + arg_edx[6] * arg_ebx[10];
  arg_eax[8] = arg_edx[8] * *arg_ebx + arg_edx[9] * arg_ebx[4] + arg_edx[10] * arg_ebx[8];
  arg_eax[9] = arg_edx[8] * arg_ebx[1] + arg_edx[9] * arg_ebx[5] + arg_edx[10] * arg_ebx[9];
  val = arg_edx[8];
  val_2 = arg_ebx[2];
  val_3 = arg_edx[9];
  val_4 = arg_ebx[6];
  val_5 = arg_edx[10];
  val_6 = arg_ebx[10];
  *arg_eax = *arg_eax >> 0xe;
  arg_eax[1] = arg_eax[1] >> 0xe;
  arg_eax[4] = arg_eax[4] >> 0xe;
  arg_eax[5] = arg_eax[5] >> 0xe;
  arg_eax[3] = *arg_eax * arg_eax[1];
  arg_eax[8] = arg_eax[8] >> 0xe;
  arg_eax[9] = arg_eax[9] >> 0xe;
  arg_eax[7] = arg_eax[4] * arg_eax[5];
  arg_eax[2] = arg_eax[2] >> 0xe;
  arg_eax[6] = arg_eax[6] >> 0xe;
  arg_eax[10] = val_3 * val_4 + val * val_2 + val_5 * val_6;
  arg_eax[10] = arg_eax[10] >> 0xe;
  arg_eax[0xb] = arg_eax[8] * arg_eax[9];
  return;
}

/******************************************************************************
 * Function : frontend_fn_02daae (Original VA: 0x2daae, Ghidra: FUN_0002daae)
 * Prototype: void frontend_fn_02daae(void);
 * Address  : 0x2daae (Size: 94 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02daae
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0e8cc8
 ******************************************************************************/
void frontend_fn_02daae(void)

{
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  int extraout_ECX;
  uint arg_edx;
  int *int_ptr;
  
  int_ptr = (int *)((arg_edx & 0xff) * 4 + arg_eax);
  val = *int_ptr;
  val_2 = int_ptr[8];
  val_3 = bflib_system_io_fn_0e8cc8(val * val);
  val_3 = val_3 + 1;
  *int_ptr = (val << 0xe) / val_3;
  int_ptr[4] = (extraout_ECX << 0xe) / val_3;
  int_ptr[8] = (val_2 << 0xe) / val_3;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02db0c (Original VA: 0x2db0c, Ghidra: FUN_0002db0c)
 * Prototype: void frontend_fn_02db0c(void);
 * Address  : 0x2db0c (Size: 56 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02db0c
 * Callers  : 1 -> frontend_fn_02dcec
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02db0c(void)

{
  int *arg_eax;
  int *arg_edx;
  int *arg_ebx;
  
  *arg_eax = arg_edx[1] * arg_ebx[2] - arg_edx[2] * arg_ebx[1];
  arg_eax[1] = arg_edx[2] * *arg_ebx - *arg_edx * arg_ebx[2];
  arg_eax[2] = *arg_edx * arg_ebx[1] - arg_edx[1] * *arg_ebx;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02dbac (Original VA: 0x2dbac, Ghidra: FUN_0002dbac)
 * Prototype: void frontend_fn_02dbac(void);
 * Address  : 0x2dbac (Size: 11 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02dbac
 * Callers  : 1 -> frontend_fn_02dbb7
 * Callees  : 1 -> frontend_fn_02d974
 ******************************************************************************/
void frontend_fn_02dbac(void)

{
  frontend_fn_02d974();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02dbb7 (Original VA: 0x2dbb7, Ghidra: FUN_0002dbb7)
 * Prototype: void frontend_fn_02dbb7(void);
 * Address  : 0x2dbb7 (Size: 106 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02dbb7
 * Callers  : 0 -> 
 * Callees  : 1 -> frontend_fn_02dbac
 ******************************************************************************/
void frontend_fn_02dbb7(void)

{
  ushort arg_ax;
  int loop_i;
  undefined4 *arg_edx;
  undefined4 *word_ptr;
  undefined4 local_44 [12];
  
  word_ptr = local_44;
  for (loop_i = 0xc; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *arg_edx;
    arg_edx = arg_edx + 1;
    word_ptr = word_ptr + 1;
  }
  frontend_fn_02dbac((int)(&PTR_LAB_00192fe0)[(short)(arg_ax & 0x7ff)] >> 2,0,
               (int)(&g_slab_attr_table)[(short)(arg_ax & 0x7ff)] >> 2);
  return;
}

/******************************************************************************
 * Function : frontend_fn_02dc8e (Original VA: 0x2dc8e, Ghidra: FUN_0002dc8e)
 * Prototype: void frontend_fn_02dc8e(void);
 * Address  : 0x2dc8e (Size: 94 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02dc8e
 * Callers  : 1 -> frontend_fn_02dcec
 * Callees  : 1 -> bflib_system_io_fn_0e8cc8
 ******************************************************************************/
void frontend_fn_02dc8e(void)

{
  int *int_ptr;
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  uint arg_edx;
  undefined8 uval;
  
  int_ptr = (int *)(arg_eax + (arg_edx & 0xff) * 0x10);
  val = int_ptr[1];
  val_2 = int_ptr[2];
  uval = bflib_system_io_fn_0e8cc8(*int_ptr * *int_ptr);
  val_3 = (int)uval;
  *int_ptr = ((int)((ulonglong)uval >> 0x20) << 0xe) / val_3;
  int_ptr[1] = (val << 0xe) / val_3;
  int_ptr[2] = (val_2 << 0xe) / val_3;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02dcec (Original VA: 0x2dcec, Ghidra: FUN_0002dcec)
 * Prototype: void frontend_fn_02dcec(void);
 * Address  : 0x2dcec (Size: 704 bytes)
 * Module   : frontend.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontend.cpp procedure @ 0x02dcec
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 3 -> frontend_fn_02d920, frontend_fn_02db0c, frontend_fn_02dc8e
 ******************************************************************************/
void frontend_fn_02dcec(void)

{
  int *int_ptr;
  int val;
  int val_2;
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  ushort arg_dx;
  byte arg_bl;
  int val_3;
  int val_4;
  int val_5;
  int local_50;
  int local_4c;
  int local_48;
  byte local_1c;
  byte local_18;
  byte local_14;
  
  if (arg_bl < 2) {
    if (arg_bl == 1) {
      local_18 = 0;
      local_14 = 2;
      local_1c = 1;
    }
  }
  else if (arg_bl < 3) {
    local_18 = 1;
    local_1c = 0;
    local_14 = 2;
  }
  else if (arg_bl == 3) {
    local_18 = 2;
    local_1c = 0;
    local_14 = 1;
  }
  val_3 = (uint)local_18 * 0x10;
  val = *(int *)(arg_eax + 4 + val_3);
  val_2 = *(int *)(arg_eax + val_3);
  val_3 = *(int *)(arg_eax + 8 + val_3);
  val_4 = val_2 * val_2 >> 0xe;
  val_5 = 0x4000 - ((int)(&PTR_LAB_00192fe0)[(short)(arg_dx & 0x7ff)] >> 2);
  int_ptr = (int *)(arg_eax + (uint)local_1c * 0x10);
  frontend_fn_02d920(((0x4000 - val_4) * ((int)(&PTR_LAB_00192fe0)[(short)(arg_dx & 0x7ff)] >> 2) >> 0xe) +
               val_4,((val * val_2 >> 0xe) * val_5 >> 0xe) -
                     (((int)(&g_slab_attr_table)[(short)(arg_dx & 0x7ff)] >> 2) * val_3 >> 0xe),
               ((val_2 * val_3 >> 0xe) * val_5 >> 0xe) +
               (val * ((int)(&g_slab_attr_table)[(short)(arg_dx & 0x7ff)] >> 2) >> 0xe));
  *int_ptr = local_50 >> 0xe;
  int_ptr[1] = local_4c >> 0xe;
  int_ptr[2] = local_48 >> 0xe;
  int_ptr = (int *)(extraout_ECX + (uint)local_14 * 0x10);
  val = *int_ptr;
  val_2 = int_ptr[1];
  val_3 = int_ptr[2];
  frontend_fn_02d920();
  *int_ptr = local_50 >> 0xe;
  int_ptr[1] = local_4c >> 0xe;
  int_ptr[2] = local_48 >> 0xe;
  frontend_fn_02dc8e();
  frontend_fn_02db0c();
  *(int *)(extraout_ECX_00 + 0x10) = val >> 0xe;
  *(int *)(extraout_ECX_00 + 0x14) = val_2 >> 0xe;
  *(int *)(extraout_ECX_00 + 0x18) = val_3 >> 0xe;
  frontend_fn_02dc8e();
  frontend_fn_02db0c();
  *extraout_ECX_01 = val >> 0xe;
  extraout_ECX_01[1] = val_2 >> 0xe;
  extraout_ECX_01[2] = val_3 >> 0xe;
  frontend_fn_02dc8e();
  extraout_ECX_02[3] = *extraout_ECX_02 * extraout_ECX_02[1];
  extraout_ECX_02[7] = extraout_ECX_02[4] * extraout_ECX_02[5];
  extraout_ECX_02[0xb] = extraout_ECX_02[8] * extraout_ECX_02[9];
  return;
}

/******************************************************************************
 * Function : frontend_why_are_we_here_02dfac (Original VA: 0x2dfac, Ghidra: FUN_0002dfac)
 * Prototype: void frontend_why_are_we_here_02dfac(void);
 * Address  : 0x2dfac (Size: 1242 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp lines 739, 1006
 * Purpose  : String 'Why are we here'
 * Callers  : 1 -> game_out_sync_gameturn_036ff4
 * Callees  : 30 -> file_update_player_dungeon_02c833, frontend_load_frontend_palette_02e8a7, frontend_fn_02faf6, frontend_fn_02fc49, frontend_fn_02fda1, frontend_fn_02feca, frontend_fn_030ca0, frontend_process_map_subtile_030cd9 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontend_why_are_we_here_02dfac(void)

{
  byte flag;
  int screen_res;
  int screen_res_2;
  char extraout_CL;
  char extraout_CL_00;
  uint extraout_EDX;
  longdouble val;
  double val_2;
  
  val = (longdouble)pom_iterations_065724();
  g_bss_0033401d = (float)val;
  val_2 = (double)val;
  if ((val <= (longdouble)g_data_00163433) || (g_data_0016343b <= val_2)) {
    g_bss_002ee88d = 0;
  }
  else {
    g_bss_002ee88d = 1;
  }
  if ((g_bss_0019d0bd & 1) != 0) {
    g_bss_002e6f2d = '\0';
  }
  g_bss_0019d0c1 = -1;
  frontend_fn_02feca();
  if ((g_bss_002e6f2d == '\0') || (g_bss_002e6ff3 != '\0')) {
    if ((g_game_operation_flags & 2) == 0) {
      screen_res = setup_reload_gui_and_mode_sprites();
      if (screen_res == 0) {
        g_bss_00334021 = 1;
        LbMemoryCopy();
        g_bss_0019a2a1 = 1;
        return;
      }
      bflib_system_io_fn_0e7904(0);
      bflib_system_io_fn_0e79fc();
      screen_res = frontend_process_map_subtile_030cd9();
      if (screen_res == 0) {
        LbErrorLog(); /* LbErrorLog("frontend.cpp", line 739, g_log_buf) */
        g_bss_0019a2a1 = 1;
        return;
      }
      LbScreenWaitVbi();
      LbPaletteSet(g_scratch_work_buf);
      if ((g_bss_0019d0bd & 0x40) == 0) {
        if ((g_game_system_flags & 1) == 0) {
          screen_res = g_my_player_word._3_1_ * 0x4ef;
          if ((((&g_player_state_base)[screen_res] & 2) == 0) && ((&g_bss_0019d0f1)[screen_res] != '\0')) {
            if ((g_bss_0019d0bd & 1) == 0) {
              if ((&g_bss_0019d0f1)[screen_res] == '\x01') {
                if (g_bss_002e78ea < 0x15) {
                  if (((&g_bss_0019d0cb)[screen_res] & 0x10) != 0) goto LAB_0002e0f4;
                  specials_fn_070bf9();
                }
                else {
                  specials_fn_070bf9();
                }
              }
            }
            else {
              g_bss_0019d0bd = g_bss_0019d0bd & 0xfe;
            }
          }
        }
        else if (((&g_bss_0019d0cb)[g_my_player_word._3_1_ * 0x4ef] & 0x10) == 0) {
          if (((&g_player_state_base)[g_my_player_word._3_1_ * 0x4ef] & 2) != 0) {
            frontnet_fn_033156();
          }
        }
        else {
          screen_res = g_my_player_word._3_1_ * 0x4ef;
LAB_0002e0f4:
          (&g_bss_0019d0cb)[screen_res] = (&g_bss_0019d0cb)[screen_res] & 0xef;
        }
      }
      else if ((g_bss_0033401d <= (float)g_data_00163433) || ((float)g_data_0016343b <= g_bss_0033401d)) {
        frontend_fn_030e04();
      }
      frontend_load_frontend_palette_02e8a7();
      screen_res = 0;
      g_bss_0019d0bd = g_bss_0019d0bd & 0xbf;
      while (screen_res == 0) {
        screen_res_2 = LbKeyboardRead();
        if ((screen_res_2 == 0) && ((g_game_system_flags & 1) == 0)) {
          screen_res = 1;
          g_bss_0019a2a1 = '\x01';
          break;
        }
        moodneed_fn_052934();
        g_frontnet_bss_00334a58 = g_frontnet_bss_00334738;
        g_frontnet_bss_00334738 = 0;
        frontend_fn_02faf6();
        if ((g_bss_0019a2a1 != '\0') || (frontend_fn_02fc49(), g_bss_0019a2a1 != '\0')) {
          screen_res = 1;
          break;
        }
        if ((screen_res == 0) && (screen_res_2 = LbScreenLock(), screen_res_2 != 0)) {
          frontend_fn_02fda1();
          bflib_system_io_fn_0e79fc();
        }
        if (g_bss_00334019 == 0) {
          sound3d_attempt_query_sample_06f98e();
          sndheap_fn_06dfd3();
          bflib_system_io_fn_0ead2f();
        }
        if (g_frontnet_bss_00335130 != '\0') {
          frontend_fn_030ca0();
          g_frontnet_bss_00335130 = '\0';
        }
      }
      bflib_system_io_fn_0e8d80(val_2,screen_res);
      bflib_system_io_fn_0e7904(0);
      bflib_system_io_fn_0e79fc();
      frontend_load_frontend_palette_02e8a7();
      if (g_bss_0019a2a1 != '\0') goto LAB_0002e46d;
      screen_res = frontend_fn_030e88();
      if (screen_res == 0) {
        return;
      }
      setup_show_loading_raw_screen();
      flag = g_game_system_flags & 0xfe;
      if (extraout_EDX < 8) {
        if (extraout_EDX != 7) goto LAB_0002e46d;
        g_my_player_word._3_1_ = '\0';
        g_game_type = 2;
        g_bss_0019d0f4 = 1;
        g_bss_002e78e9 = g_bss_0019d0c2;
        g_game_system_flags = flag;
      }
      else {
        if (8 < extraout_EDX) {
          if (extraout_EDX < 10) goto LAB_0002e46d;
          if (extraout_EDX < 0xb) {
            if (g_bss_0019d0c1 == -2) {
              g_game_system_flags = flag;
              LbErrorLog(); /* LbErrorLog("frontend.cpp", line 1006, "Why are we here") */
              g_bss_0019d0c1 = extraout_CL;
            }
            else {
              g_game_system_flags = flag;
              bflib_system_io_fn_0e7904(0);
              bflib_system_io_fn_0e79fc();
              file_update_player_dungeon_02c833();
              g_bss_0019d0c1 = extraout_CL_00;
            }
            goto LAB_0002e46d;
          }
          if (extraout_EDX != 0x19) goto LAB_0002e46d;
          g_bss_0019d0bd = g_bss_0019d0bd | 1;
          goto LAB_0002e023;
        }
        g_bss_002e78e9 = g_bss_0019d0c2;
        g_game_type = 5;
        g_game_system_flags = g_game_system_flags | 1;
        (&g_bss_0019d0f4)[g_my_player_word._3_1_ * 0x4ef] = 1;
      }
    }
    else {
      screen_res = frontend_fn_030e88();
      if (screen_res == 0) {
        return;
      }
      g_my_player_word._3_1_ = '\0';
      g_game_type = 2;
      g_bss_0019d0f4 = 1;
      g_bss_002e78e9 = g_bss_0019d0c2;
    }
    packet_resync_network_game_state();
  }
  else {
    screen_res = frontend_fn_030e88();
    if (screen_res == 0) {
      return;
    }
LAB_0002e023:
    packet_init_level_replay_or_resync();
  }
LAB_0002e46d:
  (&g_player_state_base)[g_my_player_word._3_1_ * 0x4ef] = (&g_player_state_base)[g_my_player_word._3_1_ * 0x4ef] & 0xfd;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e486 (Original VA: 0x2e486, Ghidra: FUN_0002e486)
 * Prototype: void frontend_fn_02e486(void);
 * Address  : 0x2e486 (Size: 4 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e486
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02e486(void)

{
  byte *arg_eax;
  
  *arg_eax = *arg_eax | 8;
  return;
}

/******************************************************************************
 * Function : frontend_update_player_view_state_02e48a (Original VA: 0x2e48a, Ghidra: FUN_0002e48a)
 * Prototype: void frontend_update_player_view_state_02e48a(void);
 * Address  : 0x2e48a (Size: 118 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> frontend_load_frontend_palette_02e8a7
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontend_update_player_view_state_02e48a(void)

{
  int val;
  int val_2;
  
  g_bss_002e78ea = 1;
  val_2 = 0;
  do {
    val = val_2 + 0x4ef;
    (&g_player_state_base)[val_2] = (&g_player_state_base)[val_2] & 0xfd;
    val_2 = val;
  } while (val != 0x18ab);
  g_bss_002ee892 = 0;
  g_bss_002ee893 = 0;
  val_2 = 0;
  do {
    val = val_2 + 1;
    (&g_bss_002ee888)[val_2] = 0;
    val_2 = val;
  } while (val < 6);
  if ((g_bss_0033401d <= (float)g_data_00163443) || (g_data_0016344b <= (double)g_bss_0033401d)) {
    g_bss_002ee88d = 0;
  }
  else {
    g_bss_002ee88d = 1;
  }
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e500 (Original VA: 0x2e500, Ghidra: FUN_0002e500)
 * Prototype: void frontend_fn_02e500(void);
 * Address  : 0x2e500 (Size: 52 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e500
 * Callers  : 0 -> 
 * Callees  : 1 -> frontend_draw_gui_button_label_02efb4
 ******************************************************************************/
void frontend_fn_02e500(void)

{
  frontend_draw_gui_button_label_02efb4();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e534 (Original VA: 0x2e534, Ghidra: FUN_0002e534)
 * Prototype: void frontend_fn_02e534(void);
 * Address  : 0x2e534 (Size: 45 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e534
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02e534(void)

{
  frontend_draw_gui_button_label_02efb4();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e561 (Original VA: 0x2e561, Ghidra: FUN_0002e561)
 * Prototype: void frontend_fn_02e561(void);
 * Address  : 0x2e561 (Size: 42 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e561
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02e561(void)

{
  frontend_draw_gui_button_label_02efb4();
  return;
}

/******************************************************************************
 * Function : frontend_draw_gui_button_label_02e58b (Original VA: 0x2e58b, Ghidra: FUN_0002e58b)
 * Prototype: void frontend_draw_gui_button_label_02e58b(void);
 * Address  : 0x2e58b (Size: 153 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontend_draw_gui_button_label_02e58b(void)

{
  int gui_btn;
  int val;
  uint uval;
  int val_2;
  
  val_2 = *(int *)(gui_btn + 0x33) + g_frontnet_bss_00334de8 + -0x2d; /* gui_btn->content */
  uval = (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3]; /* gui_btn->content */
  if ((*(int *)(gui_btn + 0x33) != 0) && (g_frontnet_bss_00334738 == *(int *)(gui_btn + 0x33))) { /* gui_btn->content */
    uval = 2;
  }
  g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + uval * 4);
  g_lb_display_draw_flags = 0x20;
  LbTextDraw();
  val = 0;
  do {
    if (0x87 < val) {
      return;
    }
    if ((&g_frontnet_bss_00334d5c)[val] != '\0') {
      if (val_2 == 0) {
        LbTextDrawFormatted();
        return;
      }
      val_2 = val_2 + -1;
    }
    val = val + 0x11;
  } while( true );
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02e624 (Original VA: 0x2e624, Ghidra: FUN_0002e624)
 * Prototype: void frontend_maintain_gui_button_state_02e624(void);
 * Address  : 0x2e624 (Size: 35 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02e624(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = *(int *)(gui_btn + 0x33) + g_frontnet_bss_00334de8 + -0x2d < g_frontnet_bss_00334dec; /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02e647 (Original VA: 0x2e647, Ghidra: FUN_0002e647)
 * Prototype: void frontend_maintain_gui_button_state_02e647(void);
 * Address  : 0x2e647 (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02e647(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_bss_00334de8 != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02e654 (Original VA: 0x2e654, Ghidra: FUN_0002e654)
 * Prototype: void frontend_maintain_gui_button_state_02e654(void);
 * Address  : 0x2e654 (Size: 19 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02e654(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_bss_00334de8 < g_frontnet_bss_00334dec + -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e667 (Original VA: 0x2e667, Ghidra: FUN_0002e667)
 * Prototype: void frontend_fn_02e667(void);
 * Address  : 0x2e667 (Size: 47 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e667
 * Callers  : 0 -> 
 * Callees  : 1 -> LbTimerClock
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontend_fn_02e667(void)

{
  int gui_btn;
  int val;
  undefined8 clock_ms;
  
  if (*(char *)(gui_btn + 6) == '\x05') {
    val = (int)*(short *)(gui_btn + 0x1b); /* gui_btn->id_num */
  }
  else {
    val = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  }
  if (val != g_frontnet_bss_00334a58) {
    clock_ms = LbTimerClock();
    val = (int)((ulonglong)clock_ms >> 0x20);
    g_frontnet_bss_0033473c = (undefined4)clock_ms;
  }
  g_frontnet_bss_00334738 = val;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e696 (Original VA: 0x2e696, Ghidra: FUN_0002e696)
 * Prototype: void frontend_fn_02e696(void);
 * Address  : 0x2e696 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e696
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02e696(void)

{
  if (g_frontnet_bss_00334de8 != 0) {
    g_frontnet_bss_00334de8 = g_frontnet_bss_00334de8 + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e6a6 (Original VA: 0x2e6a6, Ghidra: FUN_0002e6a6)
 * Prototype: void frontend_fn_02e6a6(void);
 * Address  : 0x2e6a6 (Size: 21 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e6a6
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02e6a6(void)

{
  if (g_frontnet_bss_00334de8 < g_frontnet_bss_00334dec + -1) {
    g_frontnet_bss_00334de8 = g_frontnet_bss_00334de8 + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e6bb (Original VA: 0x2e6bb, Ghidra: FUN_0002e6bb)
 * Prototype: void frontend_fn_02e6bb(void);
 * Address  : 0x2e6bb (Size: 9 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e6bb
 * Callers  : 0 -> 
 * Callees  : 1 -> frontend_load_frontend_palette_02e8a7
 ******************************************************************************/
void frontend_fn_02e6bb(void)

{
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02e6c4 (Original VA: 0x2e6c4, Ghidra: FUN_0002e6c4)
 * Prototype: void frontend_fn_02e6c4(void);
 * Address  : 0x2e6c4 (Size: 243 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02e6c4
 * Callers  : 0 -> 
 * Callees  : 8 -> file_fn_02c736, frontend_load_frontend_palette_02e8a7, frontend_fn_02feca, prepare_file_path, dk_sprintf, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead
 ******************************************************************************/
void frontend_fn_02e6c4(void)

{
  int gui_btn;
  int file_handle;
  undefined4 uval;
  int loop_i;
  int val;
  undefined1 local_b8 [164];
  
  val = 0;
  file_handle = 0;
  for (loop_i = 0; loop_i < 0x88; loop_i = loop_i + 0x11) {
    if ((&g_frontnet_bss_00334d5c)[loop_i] != '\0') {
      if (file_handle == *(int *)(gui_btn + 0x33) + g_frontnet_bss_00334de8 + -0x2d) { /* gui_btn->content */
        g_bss_0019d0c1 = (undefined1)val;
        break;
      }
      file_handle = file_handle + 1;
    }
    val = val + 1;
  }
  prepare_file_path(val);
  uval = prepare_file_path();
  dk_sprintf(local_b8,s__s_GAME_04d_SAV_0016345a,uval);
  file_handle = LbFileOpen();
  if (file_handle == -1) {
    (&g_frontnet_bss_00334d5c)[val * 0x11] = 0;
    file_fn_02c736();
    frontend_fn_02feca();
  }
  else {
    file_handle = LbFileRead();
    if (file_handle == 10) {
      bflib_system_io_fn_0e8a1c();
      goto LAB_0002e7ac;
    }
    (&g_frontnet_bss_00334d5c)[val * 0x11] = 0;
    file_fn_02c736();
    frontend_fn_02feca();
    bflib_system_io_fn_0e8a1c();
  }
  if (g_frontnet_bss_00334dec != 0) {
    return;
  }
LAB_0002e7ac:
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontend_load_frontend_palette_02e8a7 (Original VA: 0x2e8a7, Ghidra: FUN_0002e8a7)
 * Prototype: void frontend_load_frontend_palette_02e8a7(void);
 * Address  : 0x2e8a7 (Size: 1046 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp lines 1303, 1420, 1588
 * Purpose  : String 'Unable to load FRONTEND PALETTE'
 * Callers  : 23 -> frontend_why_are_we_here_02dfac, frontend_update_player_view_state_02e48a, frontend_fn_02e6bb, frontend_fn_02e6c4, frontend_continue_sav_02ed41, frontend_fn_02f541, frontend_fn_02f8a2, frontend_fn_02f9f5 ...
 * Callees  : 37 -> cdtest_ldata_dkwind00_dat_0150f0, file_settings_dat_02a355, frontend_continue_sav_02ff2e, frontend_ldata_front_raw_02ffe4, frontend_ldata_front_raw_030057, frontend_data_hiscores_dat_030322, frontend_fn_0306e4, frontend_fn_030cb9 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontend_load_frontend_palette_02e8a7(void)

{
  undefined4 arg_eax;
  int val;
  
  switch(g_frontnet_bss_00334a44) {
  case 0:
    newgui_fn_0543dd();
    dk_sprintf(&g_log_sprintf_buf,s__s_LDATA_FRONT_PAL_0016346a,&g_bss_002ee923);
    cdtest_ldata_dkwind00_dat_0150f0();
    val = bflib_system_io_fn_0e984c();
    if (val != 0x300) {
      LbErrorLog(); /* LbErrorLog("frontend.cpp", line 1303, "Unable to load FRONTEND PALETTE") */
    }
    frontend_data_hiscores_dat_030322();
    bflib_system_io_fn_0ebf9c();
    moodneed_fn_052934();
    break;
  case 1:
    goto LAB_0002e953;
  case 2:
    goto LAB_0002e953;
  case 3:
    frontmap_ldata_dkflag00_dat_031213();
    goto LAB_0002e969;
  case 4:
    goto LAB_0002e953;
  case 5:
    goto LAB_0002e953;
  case 6:
    goto LAB_0002e953;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0x15:
  case 0x19:
    break;
  case 0xc:
  case 0x1d:
    frontend_ldata_front_raw_030057();
    break;
  case 0xf:
    newgui_fn_05c848();
    frontnet_save_config_net_035bbf();
    break;
  case 0x10:
    newgui_fn_05c848();
    frontnet_save_config_net_035bbf();
    break;
  case 0x11:
    bflib_system_io_fn_0eae8a();
    goto LAB_0002e953;
  case 0x12:
LAB_0002e953:
    newgui_fn_05c848();
    break;
  case 0x13:
    fronttor_ldata_fronttor_tab_03699b();
    goto LAB_0002e969;
  default:
    LbErrorLog(); /* LbErrorLog("frontend.cpp", line 1420, "Unhandled FRONTEND state") */
    break;
  case 0x18:
    frontmap_ldata_netflag_dat_031bd6();
LAB_0002e969:
    frontend_process_map_subtile_030cd9();
    break;
  case 0x1a:
    newgui_fn_05c848();
    file_settings_dat_02a355();
    break;
  case 0x1b:
    newgui_fn_05c848();
  case 0xd:
    if ((g_bss_0019d0bd & 0x10) == 0) {
      bflib_sound_bf110_cd_non_audio_0ecd76();
    }
  }
  if (g_frontnet_bss_00334a44 != 0) {
    frontend_fn_030cb9();
  }
  g_frontnet_bss_00335130 = 1;
  switch(arg_eax) {
  case 0:
    goto LAB_0002ea32;
  case 1:
    bflib_system_io_fn_0ebc10();
    g_frontnet_bss_00334de4 = frontend_continue_sav_02ff2e();
    newgui_fn_05cf2d();
    g_frontnet_bss_00334e08 = LbTimerClock();
    g_frontnet_bss_00334e0c = g_graphics_window_width * (uint)g_units_per_pixel;
    g_frontnet_bss_00334e10 = get_scaled_viewport_bottom_y();
    g_frontnet_bss_00334a50 = 1;
    g_game_system_flags = g_game_system_flags & 0xfe;
    break;
  case 2:
    newgui_fn_05cf2d();
LAB_0002ea32:
    bflib_system_io_fn_0ebc10();
    break;
  case 3:
    val = frontmap_ldata_dkflag00_dat_030ef8();
    if (val == 0) {
      arg_eax = 7;
    }
    break;
  case 4:
    newgui_fn_05cf2d();
    frontnet_LbNetwork_EnumerateServices_033ead();
    break;
  case 5:
    newgui_fn_05cf2d();
    frontnet_fn_03468f();
    bflib_system_io_fn_0ebc10();
    g_game_system_flags = g_game_system_flags & 0xfe;
    break;
  case 6:
    newgui_fn_05cf2d();
    frontnet_fn_034ed8();
    bflib_system_io_fn_0ebc10();
    g_game_system_flags = g_game_system_flags | 1;
    break;
  case 8:
    if ((g_bss_0019d0ba & 0x10) != 0) {
      bflib_system_io_fn_0ed034();
    }
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0x15:
  case 0x19:
    g_frontnet_bss_00335130 = 0;
    break;
  case 0xc:
  case 0x1d:
    frontend_ldata_front_raw_02ffe4();
    break;
  case 0xd:
    g_frontnet_bss_0033512c = 0;
    g_frontnet_bss_00335128 = g_screen_height;
    LbTextDraw();
    g_lb_display_draw_flags = 0x100;
    break;
  case 0xf:
    newgui_fn_05cf2d();
    frontnet_fn_0344c8();
    break;
  case 0x10:
    newgui_fn_05cf2d();
    frontnet_fn_03409c();
    break;
  case 0x11:
    newgui_fn_05cf2d();
    bflib_system_io_fn_0ebc10();
    frontnet_fn_036008();
    break;
  case 0x12:
    newgui_fn_05cf2d();
    if (*(int *)(&g_bss_002e18a0 + g_my_player_word._3_1_ * 0x1508) != 0) {
      *(undefined4 *)(&g_bss_002e18a0 + g_my_player_word._3_1_ * 0x1508) = 0;
      frontend_fn_0306e4();
    }
    bflib_system_io_fn_0ebc10();
    g_bss_003db5fc = 0;
    break;
  case 0x13:
    bflib_system_io_fn_0ebc10();
    fronttor_ldata_fronttor_tab_036654();
    break;
  default:
    LbErrorLog(); /* LbErrorLog("frontend.cpp", line 1588, "Unhandled FRONTEND state") */
    break;
  case 0x18:
    bflib_system_io_fn_0ebc10();
    frontmap_ldata_netflag_dat_031a51();
    break;
  case 0x1a:
    g_frontnet_bss_00335135 = 0;
    g_frontnet_bss_00335131 = 0;
    goto LAB_0002ea55;
  case 0x1b:
LAB_0002ea55:
    newgui_fn_05cf2d();
  }
  g_frontnet_bss_00334a44 = arg_eax;
  return;
}

/******************************************************************************
 * Function : frontend_why_are_we_here_02ecbd (Original VA: 0x2ecbd, Ghidra: FUN_0002ecbd)
 * Prototype: void frontend_why_are_we_here_02ecbd(void);
 * Address  : 0x2ecbd (Size: 119 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp lines 1599
 * Purpose  : String 'Why are we here when it's not a new level'
 * Callers  : 0 -> 
 * Callees  : 4 -> prepare_file_path, LbErrorLog, dk_sprintf, bflib_system_io_fn_0e98c8
 ******************************************************************************/
void frontend_why_are_we_here_02ecbd(void)

{
  undefined1 arg_al;
  undefined4 uval;
  int extraout_ECX;
  int arg_edx;
  
  if (arg_edx == 0) {
    LbErrorLog(); /* LbErrorLog("frontend.cpp", line 1599, "Why are we here when it's not a new level") */
  }
  prepare_file_path(s_CONTINUE_SAV_0016352d);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s__s_00163541,uval);
  if (extraout_ECX == 0) {
    arg_al = 0;
  }
  g_bss_0019d0b4._1_1_ = arg_al;
  bflib_system_io_fn_0e98c8();
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02ed34 (Original VA: 0x2ed34, Ghidra: FUN_0002ed34)
 * Prototype: void frontend_maintain_gui_button_state_02ed34(void);
 * Address  : 0x2ed34 (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02ed34(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_bss_00334de4 != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_continue_sav_02ed41 (Original VA: 0x2ed41, Ghidra: FUN_0002ed41)
 * Prototype: void frontend_continue_sav_02ed41(void);
 * Address  : 0x2ed41 (Size: 191 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : String 'CONTINUE.SAV'
 * Callers  : 0 -> 
 * Callees  : 8 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_load_frontend_palette_02e8a7, prepare_file_path, dk_sprintf, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead, bflib_system_io_fn_0e8a98
 ******************************************************************************/
void frontend_continue_sav_02ed41(void)

{
  byte flag;
  undefined4 uval;
  int file_handle;
  byte flag_2;
  undefined2 auStackY_100c [2028];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  
  flag_2 = 0;
  prepare_file_path(s_CONTINUE_SAV_00163547);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s__s_0016355b,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  file_handle = bflib_system_io_fn_0e8a98();
  if ((file_handle == 0x151825) && (file_handle = LbFileOpen(), file_handle != -1)) {
    LbFileRead();
    bflib_system_io_fn_0e8a1c();
    flag = uStack_1c._1_1_;
    if ((uStack_1c._1_1_ != 0) && (uStack_1c._1_1_ < 0x15)) {
      uStack_1c._1_1_ = 0;
      g_bss_002e78ea = flag;
      g_bss_0019d0ac = local_24;
      (&g_bss_0019d0b0)[(uint)flag_2 * -2] = (&uStack_20)[(uint)flag_2 * -2];
      (&g_bss_0019d0b4)[(uint)flag_2 * -4 + (uint)flag_2 * -4] =
           (&uStack_1c)[(uint)flag_2 * -4 + (uint)flag_2 * -4];
      frontend_load_frontend_palette_02e8a7();
      return;
    }
  }
  g_frontnet_bss_00334de4 = 0;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02ee00 (Original VA: 0x2ee00, Ghidra: FUN_0002ee00)
 * Prototype: void frontend_fn_02ee00(void);
 * Address  : 0x2ee00 (Size: 62 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02ee00
 * Callers  : 3 -> frontend_draw_text_overlay_030061, frontend_draw_text_overlay_0300a7, frontend_draw_text_overlay_03012d
 * Callees  : 1 -> LbFileClose
 ******************************************************************************/
void frontend_fn_02ee00(void)

{
  int loop_i;
  
  for (loop_i = 0; loop_i < g_screen_height; loop_i = loop_i + 1) {
    LbFileClose();
  }
  return;
}

/******************************************************************************
 * Function : frontend_draw_gui_button_label_02ee3e (Original VA: 0x2ee3e, Ghidra: FUN_0002ee3e)
 * Prototype: void frontend_draw_gui_button_label_02ee3e(void);
 * Address  : 0x2ee3e (Size: 123 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontend_draw_gui_button_label_02ee3e(void)

{
  byte *gui_btn;
  
  g_lb_display_draw_flags = 0x20;
  g_lb_current_font_ptr = g_frontnet_bss_003346f0;
  if (((*gui_btn & 8) != 0) &&
     ((*(int *)(gui_btn + 0x33) == 0 || /* gui_btn->content */
      (g_lb_current_font_ptr = g_frontnet_bss_003346ec, g_frontnet_bss_00334738 != *(int *)(gui_btn + 0x33))))) { /* gui_btn->content */
    g_lb_current_font_ptr = *(undefined4 *)
                    (&g_frontnet_bss_003346e4 + (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3] * 4); /* gui_btn->content */
  }
  LbTextDraw();
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_02eeb9 (Original VA: 0x2eeb9, Ghidra: FUN_0002eeb9)
 * Prototype: void frontend_draw_text_overlay_02eeb9(void);
 * Address  : 0x2eeb9 (Size: 218 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 6 -> LbTextDraw, bflib_system_io_draw_text_overlay_0e6c1c, LbMemoryCopy, bflib_system_io_fn_0e9dd6, LbTimerClock, bflib_system_io_fn_0efdb4
 ******************************************************************************/
void frontend_draw_text_overlay_02eeb9(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined8 uval;
  
  while (val = bflib_system_io_draw_text_overlay_0e6c1c(), 0xf0 < val) {
    uval = bflib_system_io_fn_0efdb4();
    *(undefined1 *)((int)((ulonglong)uval >> 0x20) + -1 + (int)uval) = 0;
  }
  LbMemoryCopy();
  val = extraout_ECX;
  if (arg_eax == g_bss_0034cf1f) {
    LbTimerClock();
    bflib_system_io_fn_0e9dd6();
    val = extraout_ECX_00;
  }
  g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + val * 4);
  g_lb_display_draw_flags = 0x20;
  LbTextDraw();
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02ef93 (Original VA: 0x2ef93, Ghidra: FUN_0002ef93)
 * Prototype: void frontend_fn_02ef93(void);
 * Address  : 0x2ef93 (Size: 33 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02ef93
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontend_fn_02ef93(void)

{
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : frontend_draw_gui_button_label_02efb4 (Original VA: 0x2efb4, Ghidra: FUN_0002efb4)
 * Prototype: void frontend_draw_gui_button_label_02efb4(void);
 * Address  : 0x2efb4 (Size: 470 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 1 -> frontend_fn_02e500
 * Callees  : 4 -> LbTextDraw, LbTextDrawFormatted, LbTimerClock, watcom_crt_fn_13a710
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontend_draw_gui_button_label_02efb4(void)

{
  byte *gui_btn;
  undefined2 arg_cx;
  int arg_edx;
  int arg_ebx;
  uint local_1c;
  
  local_1c = (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3]; /* gui_btn->content */
  if ((*gui_btn & 8) == 0) {
    local_1c = 3;
  }
  else if ((*(int *)(gui_btn + 0x33) != 0) && (g_frontnet_bss_00334738 == *(int *)(gui_btn + 0x33))) { /* gui_btn->content */
    LbTimerClock();
    local_1c = 2;
  }
  if (arg_edx == 2) {
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
  }
  else {
    if (arg_edx != 1) {
      watcom_crt_fn_13a710();
      goto LAB_0002f0fc;
    }
    watcom_crt_fn_13a710();
  }
  watcom_crt_fn_13a710();
LAB_0002f0fc:
  watcom_crt_fn_13a710();
  if (arg_ebx != 0) {
    g_lb_current_font_ptr = *(undefined4 *)(&g_frontnet_bss_003346e4 + local_1c * 4);
    g_lb_display_draw_flags = arg_cx;
    LbTextDraw();
    LbTextDrawFormatted();
  }
  return;
}

/******************************************************************************
 * Function : frontend_update_player_view_state_02f18a (Original VA: 0x2f18a, Ghidra: FUN_0002f18a)
 * Prototype: void frontend_update_player_view_state_02f18a(void);
 * Address  : 0x2f18a (Size: 62 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> frontnet_fn_0349d9, frontnet_fn_034a8a
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_update_player_view_state_02f18a(void)

{
  char arg_al;
  int player_off;
  
  player_off = arg_al * 0x4ef;
  *(undefined2 *)(&g_player_hand_thing_idx + player_off) = 0;
  *(undefined2 *)(&g_bss_0019d512 + player_off) = 0;
  *(undefined2 *)(&g_bss_0019d50c + player_off) = 0x280;
  *(undefined2 *)(&g_bss_0019d50e + player_off) = 0x1e0;
  g_my_player_word._3_1_ = arg_al;
  (&g_player_id_number)[player_off] = arg_al;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f1c8 (Original VA: 0x2f1c8, Ghidra: FUN_0002f1c8)
 * Prototype: void frontend_fn_02f1c8(void);
 * Address  : 0x2f1c8 (Size: 10 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f1c8
 * Callers  : 5 -> frontend_ldata_front_raw_02ffe4, frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_netflag_dat_031a51, fronttor_ldata_fronttor_tab_036654, setup_reload_gui_and_mode_sprites
 * Callees  : 1 -> bflib_system_io_fn_0e8230
 ******************************************************************************/
void frontend_fn_02f1c8(void)

{
  bflib_system_io_fn_0e8230();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f1d2 (Original VA: 0x2f1d2, Ghidra: FUN_0002f1d2)
 * Prototype: void frontend_fn_02f1d2(void);
 * Address  : 0x2f1d2 (Size: 10 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f1d2
 * Callers  : 5 -> frontend_ldata_front_raw_02ffe4, frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_netflag_dat_031a51, fronttor_ldata_fronttor_tab_036654, setup_reload_gui_and_mode_sprites
 * Callees  : 1 -> bflib_system_io_fn_0e8230
 ******************************************************************************/
void frontend_fn_02f1d2(void)

{
  bflib_system_io_fn_0e8230();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f1dc (Original VA: 0x2f1dc, Ghidra: FUN_0002f1dc)
 * Prototype: void frontend_fn_02f1dc(void);
 * Address  : 0x2f1dc (Size: 91 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f1dc
 * Callers  : 2 -> frontend_fn_02f237, frontnet_fn_0338fd
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontend_fn_02f1dc(void)

{
  int arg_eax;
  
  watcom_crt_fn_13a710(*(undefined2 *)(arg_eax + 0x27));
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f237 (Original VA: 0x2f237, Ghidra: FUN_0002f237)
 * Prototype: void frontend_fn_02f237(void);
 * Address  : 0x2f237 (Size: 26 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f237
 * Callers  : 0 -> 
 * Callees  : 1 -> frontend_fn_02f1dc
 ******************************************************************************/
void frontend_fn_02f237(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_02f251 (Original VA: 0x2f251, Ghidra: FUN_0002f251)
 * Prototype: void frontend_draw_text_overlay_02f251(void);
 * Address  : 0x2f251 (Size: 435 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 2 -> frontend_draw_text_overlay_0303ad, watcom_crt_fn_13a710
 ******************************************************************************/
void frontend_draw_text_overlay_02f251(void)

{
  byte *byte_ptr;
  int thing;
  uint uval;
  uint *word_ptr;
  int val;
  uint auStack_44 [5];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = 0xc;
  local_30 = 0;
  local_20 = (int)*(short *)(thing + 0x1d);
  val = g_frontnet_bss_00334728 + 0x96;
  do {
    local_30 = local_30 + 1;
    watcom_crt_fn_13a710();
    byte_ptr = (byte *)(val + 4);
    val = val + 6;
    local_20 = local_20 + (uint)*byte_ptr;
  } while (local_30 < 6);
  for (; 0 < local_1c; local_1c = local_1c - val) {
    if (local_1c < 3) {
      val = 0x21;
    }
    else {
      val = 0x28;
    }
    val = g_frontnet_bss_00334728 + val * 6;
    auStack_44[4] = (uint)*(short *)(thing + 0x1d);
    local_2c = 0;
    do {
      local_2c = local_2c + 1;
      watcom_crt_fn_13a710();
      byte_ptr = (byte *)(val + 4);
      val = val + 6;
      auStack_44[4] = auStack_44[4] + *byte_ptr;
    } while (local_2c < 6);
    if (local_1c < 3) {
      val = 1;
    }
    else {
      val = 3;
    }
  }
  local_24 = 0;
  auStack_44[3] = (uint)*(short *)(thing + 0x1d);
  val = g_frontnet_bss_00334728 + 0x11a;
  do {
    local_24 = local_24 + 1;
    watcom_crt_fn_13a710();
    byte_ptr = (byte *)(val + 4);
    val = val + 6;
    auStack_44[3] = auStack_44[3] + *byte_ptr;
  } while (local_24 < 6);
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  auStack_44[2] = (int)*(short *)(thing + 0x1d) + (uint)*(byte *)(g_frontnet_bss_00334728 + 0xca);
  g_lb_display_draw_flags = 0;
  local_28 = (uint)*(byte *)(g_frontnet_bss_00334728 + 0x9b) + (int)*(short *)(thing + 0x1f) + 3; /* thing->class_id */
  val = 0;
  word_ptr = auStack_44 + 2;
  do {
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    *(uint *)((int)word_ptr + -4) = uval;
    *(undefined4 *)((int)word_ptr + -8) = 0x2f3cb;
    frontend_draw_text_overlay_0303ad();
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    val = val + 1;
    local_28 = local_28 + uval;
    word_ptr = (uint *)((int)word_ptr + -4);
  } while (val < 10);
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02f404 (Original VA: 0x2f404, Ghidra: FUN_0002f404)
 * Prototype: void frontend_maintain_gui_button_state_02f404(void);
 * Address  : 0x2f404 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02f404(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_data_0017ae42 == -1;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_02f414 (Original VA: 0x2f414, Ghidra: FUN_0002f414)
 * Prototype: void frontend_draw_text_overlay_02f414(void);
 * Address  : 0x2f414 (Size: 301 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 3 -> frontend_data_hiscores_dat_030309, bflib_system_io_draw_text_overlay_0e6c1c, LbMemoryCopy
 ******************************************************************************/
void frontend_draw_text_overlay_02f414(void)

{
  byte flag;
  undefined8 uval;
  
  if (g_bss_003db5fc == 0) {
    return;
  }
  if ((g_bss_003db5fc & 0x80) != 0) {
    g_bss_003db5fc = 0;
    return;
  }
  if (g_bss_003db5fc == 0xe) {
    if (g_frontnet_bss_00335124 == 0) {
      g_bss_003db5fc = 0;
      return;
    }
    g_frontnet_bss_00335124 = g_frontnet_bss_00335124 + -1;
  }
  else {
    if (g_bss_003db5fc == 0x1c) {
      LbMemoryCopy();
      g_data_0017ae42 = 0xffffffff;
      frontend_data_hiscores_dat_030309();
      g_bss_003db5fc = 0;
      return;
    }
    if (0x3e < g_frontnet_bss_00335124) {
      g_bss_003db5fc = 0;
      return;
    }
    g_lb_current_font_ptr = g_frontnet_bss_003346e8;
    if ((g_bss_003db526 == '\0') && (g_bss_003db532 == '\0')) {
      flag = (&g_data_00195458)[g_bss_003db5fc];
    }
    else {
      flag = (&g_data_001954d8)[g_bss_003db5fc];
    }
    if (flag == 0) {
      g_lb_current_font_ptr = g_frontnet_bss_003346e8;
      g_bss_003db5fc = 0;
      return;
    }
    if (*(byte *)((flag - 0x1f) * 6 + 4 + g_frontnet_bss_003346e8) < 2) {
      g_lb_current_font_ptr = g_frontnet_bss_003346e8;
      g_bss_003db5fc = 0;
      return;
    }
    uval = bflib_system_io_draw_text_overlay_0e6c1c();
    if (299 < (int)uval + (int)((ulonglong)uval >> 0x20)) {
      g_bss_003db5fc = 0;
      return;
    }
    (&g_frontnet_bss_003350e4)[g_frontnet_bss_00335124] = flag;
    g_frontnet_bss_00335124 = g_frontnet_bss_00335124 + 1;
  }
  (&g_frontnet_bss_003350e4)[g_frontnet_bss_00335124] = 0;
  g_bss_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f541 (Original VA: 0x2f541, Ghidra: FUN_0002f541)
 * Prototype: void frontend_fn_02f541(void);
 * Address  : 0x2f541 (Size: 45 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f541
 * Callers  : 0 -> 
 * Callees  : 2 -> frontend_load_frontend_palette_02e8a7, frontnet_fn_032f6a
 ******************************************************************************/
void frontend_fn_02f541(void)

{
  int val;
  
  val = frontnet_fn_032f6a();
  if ((val == 0) && (g_frontnet_bss_00334a50 == 0)) {
    frontend_load_frontend_palette_02e8a7();
    return;
  }
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f56e (Original VA: 0x2f56e, Ghidra: FUN_0002f56e)
 * Prototype: void frontend_fn_02f56e(void);
 * Address  : 0x2f56e (Size: 282 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f56e
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontend_fn_02f56e(void)

{
  byte *arg_eax;
  int extraout_ECX;
  
  if ((*arg_eax & 8) != 0) {
    arg_eax[0x27] = 0x20;
    arg_eax[0x28] = 0;
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710((int)((uint)*(ushort *)(extraout_ECX + 0x37) *
                      (*(ushort *)(extraout_ECX + 0x25) - 0x40)) >> 8);
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f688 (Original VA: 0x2f688, Ghidra: FUN_0002f688)
 * Prototype: void frontend_fn_02f688(void);
 * Address  : 0x2f688 (Size: 205 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f688
 * Callers  : 0 -> 
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void frontend_fn_02f688(void)

{
  byte *arg_eax;
  int val;
  int extraout_ECX;
  
  if ((*arg_eax & 8) != 0) {
    arg_eax[0x27] = 0x20;
    arg_eax[0x28] = 0;
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    if (*(char *)(extraout_ECX + 1) == '\0') {
      val = g_frontnet_bss_00334728 + 0x1d4;
    }
    else {
      val = g_frontnet_bss_00334728 + 0x222;
    }
    watcom_crt_fn_13a710(val);
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f755 (Original VA: 0x2f755, Ghidra: FUN_0002f755)
 * Prototype: void frontend_fn_02f755(void);
 * Address  : 0x2f755 (Size: 20 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f755
 * Callers  : 0 -> 
 * Callees  : 1 -> file_settings_dat_02a355
 ******************************************************************************/
void frontend_fn_02f755(void)

{
  g_bss_002ee921 = g_bss_002ee921 == '\0';
  file_settings_dat_02a355();
  return;
}

/******************************************************************************
 * Function : frontend_draw_gui_button_label_02f769 (Original VA: 0x2f769, Ghidra: FUN_0002f769)
 * Prototype: void frontend_draw_gui_button_label_02f769(void);
 * Address  : 0x2f769 (Size: 106 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 2 -> LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontend_draw_gui_button_label_02f769(void)

{
  int gui_btn;
  
  g_lb_current_font_ptr = g_frontnet_bss_003346ec;
  if (g_frontnet_bss_00334738 != *(int *)(gui_btn + 0x33)) { /* gui_btn->content */
    g_lb_current_font_ptr = *(undefined4 *)
                    (&g_frontnet_bss_003346e4 + (uint)(byte)(&g_data_0017ad09)[*(int *)(gui_btn + 0x33) * 3] * 4); /* gui_btn->content */
  }
  LbTextDraw();
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02f7d3 (Original VA: 0x2f7d3, Ghidra: FUN_0002f7d3)
 * Prototype: void frontend_maintain_gui_button_state_02f7d3(void);
 * Address  : 0x2f7d3 (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02f7d3(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = 0 < g_frontnet_bss_00334dec;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f7e0 (Original VA: 0x2f7e0, Ghidra: FUN_0002f7e0)
 * Prototype: void frontend_fn_02f7e0(void);
 * Address  : 0x2f7e0 (Size: 15 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f7e0
 * Callers  : 0 -> 
 * Callees  : 1 -> file_settings_dat_02a355
 ******************************************************************************/
void frontend_fn_02f7e0(void)

{
  g_bss_002ee922 = g_frontnet_bss_00334a48;
  file_settings_dat_02a355();
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02f7ef (Original VA: 0x2f7ef, Ghidra: FUN_0002f7ef)
 * Prototype: void frontend_maintain_gui_button_state_02f7ef(void);
 * Address  : 0x2f7ef (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02f7ef(void)

{
  byte *gui_btn;
  bool flag;
  
  flag = g_frontnet_bss_00335131 != 0;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02f7fc (Original VA: 0x2f7fc, Ghidra: FUN_0002f7fc)
 * Prototype: void frontend_maintain_gui_button_state_02f7fc(void);
 * Address  : 0x2f7fc (Size: 13 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02f7fc(void)

{
  bool flag;
  byte *gui_btn;
  
  flag = g_frontnet_bss_00335131 < 0x1f;
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f809 (Original VA: 0x2f809, Ghidra: FUN_0002f809)
 * Prototype: void frontend_fn_02f809(void);
 * Address  : 0x2f809 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f809
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02f809(void)

{
  if (g_frontnet_bss_00335131 != 0) {
    g_frontnet_bss_00335131 = g_frontnet_bss_00335131 + -1;
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f819 (Original VA: 0x2f819, Ghidra: FUN_0002f819)
 * Prototype: void frontend_fn_02f819(void);
 * Address  : 0x2f819 (Size: 16 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f819
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02f819(void)

{
  if (g_frontnet_bss_00335131 < 0x1f) {
    g_frontnet_bss_00335131 = g_frontnet_bss_00335131 + 1;
  }
  return;
}

/******************************************************************************
 * Function : frontend_maintain_gui_button_state_02f829 (Original VA: 0x2f829, Ghidra: FUN_0002f829)
 * Prototype: void frontend_maintain_gui_button_state_02f829(void);
 * Address  : 0x2f829 (Size: 19 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_maintain_gui_button_state_02f829(void)

{
  byte *gui_btn;
  int val;
  
  val = g_frontnet_bss_00335131 - *(int *)(gui_btn + 0x33); /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (val + -1 < 0x20) << 3;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f83c (Original VA: 0x2f83c, Ghidra: FUN_0002f83c)
 * Prototype: void frontend_fn_02f83c(void);
 * Address  : 0x2f83c (Size: 19 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f83c
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02f83c(void)

{
  frontend_fn_02f1dc();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f84f (Original VA: 0x2f84f, Ghidra: FUN_0002f84f)
 * Prototype: void frontend_fn_02f84f(void);
 * Address  : 0x2f84f (Size: 37 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f84f
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontend_fn_02f84f(void)

{
  g_bss_0034cf11 = (uint)g_bss_002ee8d8;
  g_bss_0034cf0d = (uint)g_bss_002ee8d7;
  g_frontnet_bss_00334a48 = (uint)g_bss_002ee922;
  return;
}

/******************************************************************************
 * Function : frontend_intromix_smk_02f874 (Original VA: 0x2f874, Ghidra: FUN_0002f874)
 * Prototype: void frontend_intromix_smk_02f874(void);
 * Address  : 0x2f874 (Size: 46 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : String 'INTROMIX.SMK'
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 2 -> frontend_fn_02f9f5, dk_sprintf
 ******************************************************************************/
void frontend_intromix_smk_02f874(void)

{
  dk_sprintf(&g_log_sprintf_buf,s__s_LDATA__s_00163572,&g_bss_002ee923,s_INTROMIX_SMK_00163565);
  frontend_fn_02f9f5();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f8a2 (Original VA: 0x2f8a2, Ghidra: FUN_0002f8a2)
 * Prototype: void frontend_fn_02f8a2(void);
 * Address  : 0x2f8a2 (Size: 300 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02f8a2
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 6 -> cdtest_ldata_dkwind00_dat_0150f0, file_fn_02c3d0, frontend_load_frontend_palette_02e8a7, frontend_fn_02f9f5, dk_sprintf, LbMemoryCopy
 ******************************************************************************/
void frontend_fn_02f8a2(void)

{
  byte flag;
  char ch;
  int val;
  
  if (((g_bss_002ed3ee != '\0') && ((&g_data_0017acf4)[g_frontnet_bss_00334650 * 5] == '\0')) &&
     (g_frontnet_bss_00334650 = g_frontnet_bss_00334650 + 1, (&g_data_0017acf4)[g_frontnet_bss_00334650 * 5] == '\x03')) {
    g_frontnet_bss_00334650 = 0;
  }
  val = g_frontnet_bss_00334650 * 5;
  flag = (&g_data_0017acf4)[val];
  if (flag == 0) {
    dk_sprintf(&g_log_sprintf_buf,s__s_LDATA__s_0016358b,&g_bss_002ee923,
                 *(undefined4 *)((int)&g_data_0017acf5 + val));
    frontend_fn_02f9f5();
  }
  else {
    if (flag < 2) {
      dk_sprintf(&g_log_sprintf_buf,s__s_LDATA__s_00163597,&g_bss_002ee923,
                   *(undefined4 *)((int)&g_data_0017acf5 + val));
      cdtest_ldata_dkwind00_dat_0150f0();
      ch = file_fn_02c3d0();
      if (ch == '\0') goto LAB_0002f9a9;
      LbMemoryCopy();
      g_bss_002e6f2d = 1;
      g_bss_002e6fe0 = 0;
    }
    else if (flag != 2) goto LAB_0002f9a9;
    frontend_load_frontend_palette_02e8a7();
  }
LAB_0002f9a9:
  g_frontnet_bss_00334650 = g_frontnet_bss_00334650 + 1;
  if ((&g_data_0017acf4)[g_frontnet_bss_00334650 * 5] == '\x03') {
    g_frontnet_bss_00334650 = 0;
  }
  return;
}

/******************************************************************************
 * Function : frontend_outromix_smk_02f9ce (Original VA: 0x2f9ce, Ghidra: FUN_0002f9ce)
 * Prototype: void frontend_outromix_smk_02f9ce(void);
 * Address  : 0x2f9ce (Size: 39 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : String 'OUTROMIX.SMK'
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
void frontend_outromix_smk_02f9ce(void)

{
  dk_sprintf(&g_log_sprintf_buf,s__s_LDATA__s_001635b0,&g_bss_002ee923,s_OUTROMIX_SMK_001635a3);
  frontend_fn_02f9f5();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02f9f5 (Original VA: 0x2f9f5, Ghidra: FUN_0002f9f5)
 * Prototype: undefined4 frontend_fn_02f9f5(void);
 * Address  : 0x2f9f5 (Size: 257 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp lines 2326
 * Purpose  : Module frontend.cpp procedure @ 0x02f9f5
 * Callers  : 2 -> frontend_intromix_smk_02f874, frontend_fn_02f8a2
 * Callees  : 10 -> frontend_load_frontend_palette_02e8a7, setup_reload_gui_and_mode_sprites, LbErrorLog, bflib_system_io_fn_0e7904, bflib_system_io_fn_0e79fc, LbPaletteSet, LbMemoryCopy, bflib_system_io_fn_0ebab0 ...
 ******************************************************************************/
undefined4 frontend_fn_02f9f5(void)

{
  int val;
  int extraout_ECX;
  undefined4 extraout_EDX;
  
  val = setup_reload_gui_and_mode_sprites();
  if (val != 0) {
    bflib_system_io_fn_0ebab0();
    bflib_system_io_fn_0e7904(extraout_EDX);
    bflib_system_io_fn_0e79fc();
    val = bflib_system_io_fn_0efde0();
    if (val == 0) {
      LbErrorLog(); /* LbErrorLog("frontend.cpp", line 2326, "Smacker error") */
    }
  }
  val = setup_reload_gui_and_mode_sprites();
  if (val == 0) {
    g_bss_00334021 = 1;
    LbMemoryCopy();
    g_bss_0019a2a1 = 1;
    return 0;
  }
  bflib_system_io_fn_0e7904(0);
  bflib_system_io_fn_0e79fc();
  LbPaletteSet(&g_frontnet_bss_00334740);
  if (extraout_ECX != -1) {
    frontend_load_frontend_palette_02e8a7();
  }
  g_display_bss_003d987b = 0;
  g_display_bss_003d987c = 0;
  g_display_bss_003d987d = 0;
  bflib_system_io_fn_0ebf9c();
  return 1;
}

/******************************************************************************
 * Function : frontend_fn_02faf6 (Original VA: 0x2faf6, Ghidra: FUN_0002faf6)
 * Prototype: void frontend_fn_02faf6(void);
 * Address  : 0x2faf6 (Size: 339 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02faf6
 * Callers  : 1 -> frontend_why_are_we_here_02dfac
 * Callees  : 12 -> frontend_load_frontend_palette_02e8a7, frontend_draw_text_overlay_02f414, frontend_fn_030266, frontend_fn_0302ba, frontend_fn_030996, frontmap_fn_031273, frontmap_fn_031c23, frontnet_fn_035037 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontend_fn_02faf6(void)

{
  int ui_scale;
  bool flag;
  
  if (g_frontnet_bss_00334a44 < 0xd) {
    if (g_frontnet_bss_00334a44 < 3) {
      if ((g_frontnet_bss_00334a44 == 1) &&
         (((uint)g_units_per_pixel * g_graphics_window_width - g_frontnet_bss_00334e0c != 0 ||
          (ui_scale = get_scaled_viewport_bottom_y(), ui_scale != g_frontnet_bss_00334e10)))) {
        g_frontnet_bss_00334e0c = g_graphics_window_width * (uint)g_units_per_pixel;
        g_frontnet_bss_00334e10 = get_scaled_viewport_bottom_y();
        g_frontnet_bss_00334e08 = LbTimerClock();
      }
      goto LAB_0002fb22;
    }
    if (g_frontnet_bss_00334a44 < 4) {
      frontmap_fn_031273();
      return;
    }
    if (g_frontnet_bss_00334a44 < 6) goto LAB_0002fb22;
    if (g_frontnet_bss_00334a44 < 7) {
      newgui_process_map_subtile_057fe4();
      frontnet_fn_035037();
      return;
    }
    flag = g_frontnet_bss_00334a44 == 0xc;
  }
  else {
    if (g_frontnet_bss_00334a44 < 0xe) {
      ui_scale = frontend_fn_0302ba();
      if ((ui_scale != 0) || (g_frontnet_bss_0033512c != 0)) {
        frontend_load_frontend_palette_02e8a7();
      }
      frontend_fn_030266();
      return;
    }
    if (g_frontnet_bss_00334a44 < 0x18) {
      if (0x11 < g_frontnet_bss_00334a44) {
        if (g_frontnet_bss_00334a44 < 0x13) {
          newgui_process_map_subtile_057fe4();
          frontend_draw_text_overlay_02f414();
          return;
        }
        if (g_frontnet_bss_00334a44 == 0x13) {
          fronttor_LbNetwork_Exchange_036a59();
          return;
        }
      }
      goto LAB_0002fb22;
    }
    if (g_frontnet_bss_00334a44 < 0x19) {
      frontmap_fn_031c23();
      return;
    }
    if (g_frontnet_bss_00334a44 < 0x1a) goto LAB_0002fb22;
    if (g_frontnet_bss_00334a44 < 0x1b) {
      if (g_frontnet_bss_00335135 != 0) {
        frontend_fn_030996();
        return;
      }
      goto LAB_0002fb22;
    }
    flag = g_frontnet_bss_00334a44 == 0x1d;
  }
  if (flag) {
    ui_scale = frontend_fn_0302ba();
    if (ui_scale == 0) {
      return;
    }
    frontend_load_frontend_palette_02e8a7();
    return;
  }
LAB_0002fb22:
  newgui_process_map_subtile_057fe4();
  return;
}

/******************************************************************************
 * Function : frontend_fn_02fc49 (Original VA: 0x2fc49, Ghidra: FUN_0002fc49)
 * Prototype: void frontend_fn_02fc49(void);
 * Address  : 0x2fc49 (Size: 344 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02fc49
 * Callers  : 1 -> frontend_why_are_we_here_02dfac
 * Callees  : 14 -> frontend_load_frontend_palette_02e8a7, frontend_fn_02fefd, frontmap_fn_031854, frontmap_LbNetwork_Exchange_031def, frontnet_fn_033f26, frontnet_fn_034105, frontnet_fn_03457c, frontnet_LbNetwork_EnumerateSessions_0346de ...
 ******************************************************************************/
void frontend_fn_02fc49(void)

{
  undefined4 *arg_eax;
  int val;
  undefined8 uval;
  
  if (g_frontnet_bss_00334a44 < 9) {
    if (g_frontnet_bss_00334a44 < 4) {
      if (1 < g_frontnet_bss_00334a44) {
        if (2 < g_frontnet_bss_00334a44) {
          uval = frontmap_fn_031854();
          *(undefined4 *)((ulonglong)uval >> 0x20) = (int)uval;
          return;
        }
        frontend_fn_02fefd();
        return;
      }
      if (g_frontnet_bss_00334a44 != 1) {
        return;
      }
      g_data_0017ad21 = 1;
      if (g_frontnet_bss_00334de4 == 0) {
        g_data_0017ad21 = 3;
      }
      LbTimerClock();
      val = bflib_system_io_fn_0e69fc();
      if (val < 0x7531) {
        return;
      }
      frontend_load_frontend_palette_02e8a7();
      return;
    }
    if (g_frontnet_bss_00334a44 < 5) {
      frontnet_fn_033f26();
      return;
    }
    if (g_frontnet_bss_00334a44 < 6) {
      frontnet_LbNetwork_EnumerateSessions_0346de();
      return;
    }
    if (g_frontnet_bss_00334a44 < 7) {
      frontnet_LbNetwork_EnumeratePlayers_034f38();
      return;
    }
  }
  else if (g_frontnet_bss_00334a44 < 10) {
    g_bss_0019a2a1 = 1;
  }
  else if (g_frontnet_bss_00334a44 < 0x11) {
    if (0xc < g_frontnet_bss_00334a44) {
      if (0xd < g_frontnet_bss_00334a44) {
        if (g_frontnet_bss_00334a44 < 0xf) {
          return;
        }
        if (0xf < g_frontnet_bss_00334a44) {
          frontnet_fn_034105();
          return;
        }
        frontnet_fn_03457c();
        return;
      }
      goto joined_r0x0002fd2f;
    }
    if (g_frontnet_bss_00334a44 != 10) {
      return;
    }
  }
  else {
    if (g_frontnet_bss_00334a44 < 0x12) {
      frontnet_draw_text_overlay_036188();
      return;
    }
    if (g_frontnet_bss_00334a44 < 0x18) {
      if (g_frontnet_bss_00334a44 != 0x13) {
        return;
      }
      fronttor_fn_036e52();
      return;
    }
    if (g_frontnet_bss_00334a44 < 0x19) {
      uval = frontmap_LbNetwork_Exchange_031def();
      *(undefined4 *)((ulonglong)uval >> 0x20) = (int)uval;
      return;
    }
    if (0x19 < g_frontnet_bss_00334a44) {
      if (g_frontnet_bss_00334a44 != 0x1b) {
        return;
      }
joined_r0x0002fd2f:
      if ((g_bss_0019d0bd & 0x10) != 0) {
        return;
      }
      bflib_sound_bf110_play_cd_non_0ecabc();
      return;
    }
  }
  *arg_eax = 1;
  return;
}

/******************************************************************************
 * Function : frontend_fn_02fda1 (Original VA: 0x2fda1, Ghidra: FUN_0002fda1)
 * Prototype: undefined8 frontend_fn_02fda1(void);
 * Address  : 0x2fda1 (Size: 297 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02fda1
 * Callers  : 1 -> frontend_why_are_we_here_02dfac
 * Callees  : 12 -> frontend_intromix_smk_02f874, frontend_fn_02f8a2, frontend_outromix_smk_02f9ce, frontend_draw_text_overlay_030061, frontend_draw_text_overlay_0300a7, frontend_draw_text_overlay_03012d, frontend_draw_text_overlay_030a28, frontmap_fn_031599 ...
 ******************************************************************************/
undefined8 frontend_fn_02fda1(void)

{
  undefined4 arg_edx;
  undefined4 uval;
  undefined4 extraout_EDX;
  bool flag;
  undefined8 screen_res;
  
  uval = 1;
  flag = false;
  if (g_frontnet_bss_00334a44 < 0xe) {
    if (g_frontnet_bss_00334a44 == 0xb) {
      frontend_intromix_smk_02f874();
      goto LAB_0002fdc2;
    }
LAB_0002fdd4:
    flag = true;
  }
  else {
    if (g_frontnet_bss_00334a44 < 0xf) {
      frontend_fn_02f8a2();
    }
    else {
      if (g_frontnet_bss_00334a44 != 0x15) goto LAB_0002fdd4;
      frontend_outromix_smk_02f9ce();
    }
LAB_0002fdc2:
    uval = 0;
  }
  if (!flag) goto LAB_0002fec5;
  screen_res = LbScreenLock();
  if ((int)screen_res != 1) {
    return CONCAT44(arg_edx,(int)((ulonglong)screen_res >> 0x20));
  }
  if (g_frontnet_bss_00334a44 < 0xf) {
    if (g_frontnet_bss_00334a44 < 4) {
      if (g_frontnet_bss_00334a44 != 0) {
        if (g_frontnet_bss_00334a44 < 3) goto LAB_0002fdf9;
        frontmap_fn_031599();
      }
    }
    else {
      if (g_frontnet_bss_00334a44 < 6) goto LAB_0002fdf9;
      if (g_frontnet_bss_00334a44 < 0xc) {
        flag = g_frontnet_bss_00334a44 == 6;
        goto LAB_0002fe84;
      }
      if (g_frontnet_bss_00334a44 < 0xd) {
        frontend_draw_text_overlay_030061();
      }
      else if (g_frontnet_bss_00334a44 == 0xd) {
        frontend_draw_text_overlay_03012d();
      }
    }
  }
  else if (g_frontnet_bss_00334a44 < 0x13) {
LAB_0002fdf9:
    newgui_draw_text_overlay_05449e();
  }
  else if (g_frontnet_bss_00334a44 < 0x18) {
    if (g_frontnet_bss_00334a44 < 0x14) {
      fronttor_fn_0369c4();
    }
    else {
      flag = g_frontnet_bss_00334a44 == 0x14;
LAB_0002fe84:
      if (flag) goto LAB_0002fdf9;
    }
  }
  else if (g_frontnet_bss_00334a44 < 0x19) {
    frontmap_number_players_0322e9();
  }
  else if (g_frontnet_bss_00334a44 < 0x1b) {
    if ((g_frontnet_bss_00334a44 == 0x1a) && (newgui_draw_text_overlay_05449e(), g_frontnet_bss_00335135 != 0)) {
      frontend_draw_text_overlay_030a28();
    }
  }
  else {
    if (g_frontnet_bss_00334a44 < 0x1c) goto LAB_0002fdf9;
    if (g_frontnet_bss_00334a44 == 0x1d) {
      frontend_draw_text_overlay_0300a7();
    }
  }
  LbScreenLock();
  uval = extraout_EDX;
LAB_0002fec5:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : frontend_fn_02feca (Original VA: 0x2feca, Ghidra: FUN_0002feca)
 * Prototype: void frontend_fn_02feca(void);
 * Address  : 0x2feca (Size: 51 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02feca
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, frontend_fn_02e6c4
 * Callees  : 1 -> file_fn_02c6e2
 ******************************************************************************/
void frontend_fn_02feca(void)

{
  int val;
  
  file_fn_02c6e2();
  g_frontnet_bss_00334dec = 0;
  val = 0;
  do {
    if ((&g_frontnet_bss_00334d5c)[val] != '\0') {
      g_frontnet_bss_00334dec = g_frontnet_bss_00334dec + 1;
    }
    val = val + 0x11;
  } while (val != 0x88);
  return;
}

/******************************************************************************
 * Function : frontend_fn_02fefd (Original VA: 0x2fefd, Ghidra: FUN_0002fefd)
 * Prototype: void frontend_fn_02fefd(void);
 * Address  : 0x2fefd (Size: 49 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x02fefd
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_02fefd(void)

{
  if ((g_frontnet_bss_00334dec == 0) || (g_frontnet_bss_00334de8 < 0)) {
    g_frontnet_bss_00334de8 = 0;
  }
  else if (g_frontnet_bss_00334dec + -1 < g_frontnet_bss_00334de8) {
    g_frontnet_bss_00334de8 = g_frontnet_bss_00334dec + -1;
    return;
  }
  return;
}

/******************************************************************************
 * Function : frontend_continue_sav_02ff2e (Original VA: 0x2ff2e, Ghidra: FUN_0002ff2e)
 * Prototype: longlong frontend_continue_sav_02ff2e(void);
 * Address  : 0x2ff2e (Size: 182 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : String 'CONTINUE.SAV'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 7 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, LbFileOpen, bflib_system_io_fn_0e8a1c, LbFileRead, bflib_system_io_fn_0e8a98
 ******************************************************************************/
longlong frontend_continue_sav_02ff2e(void)

{
  undefined4 uval;
  int file_handle;
  uint arg_edx;
  byte local_13;
  
  prepare_file_path(s_CONTINUE_SAV_001635d7);
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s__s_001635eb,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  file_handle = bflib_system_io_fn_0e8a98();
  if (file_handle == 0x151825) {
    if (g_data_0017ad03 != 0) {
      file_handle = LbFileOpen();
      if (file_handle != -1) {
        LbFileRead();
        bflib_system_io_fn_0e8a1c();
        if (local_13 != 0) {
          g_bss_002e78ea = local_13;
        }
      }
      g_data_0017ad03 = 0;
    }
    if (g_bss_002e78ea < 0x15) {
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : frontend_ldata_front_raw_02ffe4 (Original VA: 0x2ffe4, Ghidra: FUN_0002ffe4)
 * Prototype: undefined8 frontend_ldata_front_raw_02ffe4(void);
 * Address  : 0x2ffe4 (Size: 115 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp lines 2759
 * Purpose  : String 'LDATA\FRONT.RAW'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 10 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_fn_02f1c8, frontend_fn_02f1d2, LbErrorLog, LbDataLoadAll, LbPaletteSet, LbTimerClock, bflib_system_io_fn_0f05f0 ...
 ******************************************************************************/
undefined8 frontend_ldata_front_raw_02ffe4(void)

{
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  cdtest_ldata_dkwind00_dat_0150f0();
  frontend_fn_02f1c8();
  val = LbDataLoadAll();
  if (val != 0) {
    uval = LbErrorLog(); /* LbErrorLog("frontend.cpp", line 2759, "Unable to Load FRONT STORY FILES") */
    return CONCAT44(arg_edx,uval);
  }
  frontend_fn_02f1d2();
  bflib_system_io_fn_0f05f0();
  LbPaletteSet(&g_frontnet_bss_00334740);
  LbTimerClock();
  bflib_system_io_fn_0f071e();
  val = bflib_system_io_fn_0f06fa();
  g_frontnet_bss_0033513d = val % 0x1a + 0x323;
  return CONCAT44(arg_edx,val / 0x1a);
}

/******************************************************************************
 * Function : frontend_ldata_front_raw_030057 (Original VA: 0x30057, Ghidra: FUN_00030057)
 * Prototype: void frontend_ldata_front_raw_030057(void);
 * Address  : 0x30057 (Size: 10 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : String 'LDATA\FRONT.RAW'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 1 -> LbDataFree
 ******************************************************************************/
void frontend_ldata_front_raw_030057(void)

{
  LbDataFree();
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_030061 (Original VA: 0x30061, Ghidra: FUN_00030061)
 * Prototype: void frontend_draw_text_overlay_030061(void);
 * Address  : 0x30061 (Size: 70 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 2 -> frontend_fn_02ee00, LbTextDraw
 ******************************************************************************/
void frontend_draw_text_overlay_030061(void)

{
  frontend_fn_02ee00();
  LbTextDraw();
  g_lb_current_font_ptr = g_frontnet_bss_00334df4;
  g_lb_display_draw_flags = 0x100;
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_0300a7 (Original VA: 0x300a7, Ghidra: FUN_000300a7)
 * Prototype: void frontend_draw_text_overlay_0300a7(void);
 * Address  : 0x300a7 (Size: 134 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 5 -> frontend_load_frontend_palette_02e8a7, frontend_fn_02ee00, frontmap_fn_030e47, LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontend_draw_text_overlay_0300a7(void)

{
  int val;
  
  frontend_fn_02ee00();
  LbTextDraw();
  g_lb_display_draw_flags = 0x100;
  g_lb_current_font_ptr = g_frontnet_bss_00334df4;
  val = frontmap_fn_030e47();
  if (val != 0) {
    LbTextDrawFormatted();
    LbTextDrawFormatted();
    return;
  }
  frontend_load_frontend_palette_02e8a7();
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_03012d (Original VA: 0x3012d, Ghidra: FUN_0003012d)
 * Prototype: void frontend_draw_text_overlay_03012d(void);
 * Address  : 0x3012d (Size: 313 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 3 -> frontend_fn_02ee00, LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void frontend_draw_text_overlay_03012d(void)

{
  bool flag;
  uint uval;
  int extraout_ECX;
  int loop_i;
  int val;
  int local_18;
  
  local_18 = 1;
  g_frontnet_bss_00335128 = g_frontnet_bss_00335128 - g_frontnet_bss_00334e04;
  frontend_fn_02ee00();
  g_lb_display_draw_flags = 0x100;
  LbTextDraw();
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  flag = 0 < g_frontnet_bss_00335128;
  val = 0;
  for (loop_i = g_frontnet_bss_00335128;
      ((&PTR_DAT_0017af0e)[val] != (undefined *)0x0 && (loop_i < g_screen_height));
      loop_i = loop_i + uval + 2) {
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    if ((int)-uval < loop_i) {
      if (*(&PTR_DAT_0017af0e)[val] == '*') {
        loop_i = 1;
        val = val + 1;
      }
      else {
        loop_i = 2;
      }
      if (loop_i != local_18) {
        g_lb_current_font_ptr = *(int *)(&g_frontnet_bss_003346e4 + loop_i * 4);
        local_18 = loop_i;
      }
      LbTextDrawFormatted();
      flag = true;
      loop_i = extraout_ECX;
    }
    else if (*(&PTR_DAT_0017af0e)[val] == '*') {
      val = val + 1;
    }
    if (g_lb_current_font_ptr == 0) {
      uval = 0;
    }
    else {
      uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
    }
    val = val + 1;
  }
  if (!flag) {
    g_frontnet_bss_00335128 = g_screen_height;
    g_frontnet_bss_0033512c = 1;
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_030266 (Original VA: 0x30266, Ghidra: FUN_00030266)
 * Prototype: void frontend_fn_030266(void);
 * Address  : 0x30266 (Size: 84 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x030266
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_030266(void)

{
  g_frontnet_bss_00334e04 = 1;
  if (g_bss_003db5cc == '\0') {
    if (((g_bss_003db5c4 != '\0') && ((int)g_frontnet_bss_00335128 < 1)) &&
       (g_frontnet_bss_00334e04 = -(uint)*(byte *)(g_frontnet_bss_003346e8 + 0xc5),
       -g_frontnet_bss_00335128 == (uint)*(byte *)(g_frontnet_bss_003346e8 + 0xc5) ||
       (int)g_frontnet_bss_00334e04 < (int)g_frontnet_bss_00335128)) {
      g_frontnet_bss_00334e04 = g_frontnet_bss_00335128;
    }
  }
  else {
    g_frontnet_bss_00334e04 = (uint)*(byte *)(g_frontnet_bss_003346e8 + 0xc5);
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_0302ba (Original VA: 0x302ba, Ghidra: FUN_000302ba)
 * Prototype: undefined4 frontend_fn_0302ba(void);
 * Address  : 0x302ba (Size: 79 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x0302ba
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 frontend_fn_0302ba(void)

{
  if (g_bss_003db535 == '\0') {
    if (g_bss_003db518 == '\0') {
      if (g_bss_003db4fd == '\0') {
        if (g_bss_0034b25c == '\0') {
          return 0;
        }
        g_bss_0034b25c = '\0';
      }
      else {
        g_bss_003db4fd = '\0';
      }
    }
    else {
      g_bss_003db518 = '\0';
    }
  }
  else {
    g_bss_003db535 = '\0';
  }
  return 1;
}

/******************************************************************************
 * Function : frontend_data_hiscores_dat_030309 (Original VA: 0x30309, Ghidra: FUN_00030309)
 * Prototype: void frontend_data_hiscores_dat_030309(void);
 * Address  : 0x30309 (Size: 25 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : String 'DATA\HISCORES.DAT'
 * Callers  : 2 -> frontend_draw_text_overlay_02f414, frontend_data_hiscores_dat_030322
 * Callees  : 1 -> bflib_system_io_fn_0e98c8
 ******************************************************************************/
void frontend_data_hiscores_dat_030309(void)

{
  bflib_system_io_fn_0e98c8();
  return;
}

/******************************************************************************
 * Function : frontend_data_hiscores_dat_030322 (Original VA: 0x30322, Ghidra: FUN_00030322)
 * Prototype: void frontend_data_hiscores_dat_030322(void);
 * Address  : 0x30322 (Size: 103 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : String 'DATA\HISCORES.DAT'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 4 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_data_hiscores_dat_030309, dk_sprintf, bflib_system_io_fn_0e984c
 ******************************************************************************/
void frontend_data_hiscores_dat_030322(void)

{
  int val;
  int val_2;
  undefined *word_ptr;
  int extraout_ECX;
  int extraout_EDX;
  int val_3;
  
  cdtest_ldata_dkwind00_dat_0150f0();
  val = bflib_system_io_fn_0e984c();
  if (val != 0x2d0) {
    val_3 = 1000;
    val = 0;
    word_ptr = &g_frontnet_bss_00334e18;
    do {
      dk_sprintf(word_ptr,s_Bullfrog_00163643);
      word_ptr = (undefined *)(extraout_ECX + 0x48);
      val_2 = 10 - val;
      *(int *)(&g_frontnet_bss_00334e14 + extraout_EDX) = val_3;
      val_3 = val_3 + -100;
      val = val + 1;
      *(int *)(&g_frontnet_bss_00334e58 + extraout_EDX) = val_2;
    } while (val < 10);
    frontend_data_hiscores_dat_030309();
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_030389 (Original VA: 0x30389, Ghidra: FUN_00030389)
 * Prototype: void frontend_fn_030389(void);
 * Address  : 0x30389 (Size: 1 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x030389
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_030389(void)

{
  return;
}

/******************************************************************************
 * Function : frontend_fn_03038a (Original VA: 0x3038a, Ghidra: FUN_0003038a)
 * Prototype: void frontend_fn_03038a(void);
 * Address  : 0x3038a (Size: 35 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x03038a
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
void frontend_fn_03038a(void)

{
  char *arg_eax;
  
  if (*arg_eax != '*') {
    dk_sprintf(&g_frontnet_bss_00334654,s__s__s_0016364c,&g_bss_002ee923);
  }
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_0303ad (Original VA: 0x303ad, Ghidra: FUN_000303ad)
 * Prototype: void frontend_draw_text_overlay_0303ad(void);
 * Address  : 0x303ad (Size: 823 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> frontend_draw_text_overlay_02f251
 * Callees  : 6 -> LbTextDraw, LbTextDrawFormatted, dk_sprintf, LbMemoryCopy, bflib_system_io_fn_0e9dd6, LbTimerClock
 ******************************************************************************/
void frontend_draw_text_overlay_0303ad(void)

{
  int arg_eax;
  int clock_ms;
  
  g_lb_display_draw_flags = 0x80;
  if ((arg_eax + 1) / 10 != 0) {
    LbTextDraw();
    dk_sprintf(&g_log_sprintf_buf,&g_data_00163652,(arg_eax + 1) / 10);
    LbTextDrawFormatted();
  }
  LbTextDraw();
  dk_sprintf(&g_log_sprintf_buf,&g_data_00163655,(arg_eax + 1) % 10);
  LbTextDrawFormatted();
  LbTextDraw();
  dk_sprintf(&g_log_sprintf_buf,&g_data_00163658,*(undefined4 *)(&g_frontnet_bss_00334e14 + arg_eax * 0x48));
  LbTextDrawFormatted();
  if (*(int *)(&g_frontnet_bss_00334e58 + arg_eax * 0x48) / 10 != 0) {
    LbTextDraw();
    dk_sprintf(&g_log_sprintf_buf,&g_data_0016365b,*(int *)(&g_frontnet_bss_00334e58 + arg_eax * 0x48) / 10);
    LbTextDrawFormatted();
  }
  LbTextDraw();
  dk_sprintf(&g_log_sprintf_buf,&g_data_0016365e,*(int *)(&g_frontnet_bss_00334e58 + arg_eax * 0x48) % 10);
  LbTextDrawFormatted();
  g_lb_display_draw_flags = 0;
  LbTextDraw();
  if (arg_eax == g_data_0017ae42) {
    clock_ms = LbTimerClock();
    LbMemoryCopy();
    if ((clock_ms / 200 & 1U) != 0) {
      bflib_system_io_fn_0e9dd6();
    }
  }
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontend_fn_0306e4 (Original VA: 0x306e4, Ghidra: FUN_000306e4)
 * Prototype: void frontend_fn_0306e4(void);
 * Address  : 0x306e4 (Size: 158 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x0306e4
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 1 -> LbMemoryCopy
 ******************************************************************************/
void frontend_fn_0306e4(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  int loop_i;
  
  if (g_frontnet_bss_0033509c < arg_eax) {
    val = 9;
    for (loop_i = 0x240; (0 < val && (*(int *)(&g_frontnet_bss_00334e14 + loop_i) < arg_eax));
        loop_i = loop_i + -0x48) {
      *(undefined4 *)(&g_frontnet_bss_00334e14 + val * 0x48) = *(undefined4 *)(&g_frontnet_bss_00334e14 + loop_i);
      *(undefined4 *)(&g_frontnet_bss_00334e58 + val * 0x48) = *(undefined4 *)(&g_frontnet_bss_00334e58 + loop_i);
      LbMemoryCopy();
      val = extraout_ECX;
    }
    g_frontnet_bss_003350e4 = 0;
    g_data_0017ae42 = val;
    *(int *)(&g_frontnet_bss_00334e14 + val * 0x48) = arg_eax;
    g_frontnet_bss_00335124 = 0;
    *(undefined4 *)(&g_frontnet_bss_00334e58 + val * 0x48) = arg_edx;
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_030782 (Original VA: 0x30782, Ghidra: FUN_00030782)
 * Prototype: void frontend_fn_030782(void);
 * Address  : 0x30782 (Size: 11 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x030782
 * Callers  : 3 -> frontend_fn_030ca0, frontend_fn_030cb9, setup_show_loading_raw_screen
 * Callees  : 1 -> bflib_system_io_fn_0e8d80
 ******************************************************************************/
void frontend_fn_030782(void)

{
  bflib_system_io_fn_0e8d80();
  return;
}

/******************************************************************************
 * Function : frontend_draw_gui_button_label_03078d (Original VA: 0x3078d, Ghidra: FUN_0003078d)
 * Prototype: void frontend_draw_gui_button_label_03078d(void);
 * Address  : 0x3078d (Size: 485 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 3 -> LbTextDraw, LbTextDrawFormatted, bflib_system_io_fn_0e9dd6
 ******************************************************************************/
void frontend_draw_gui_button_label_03078d(void)

{
  int val;
  int val_2;
  int gui_btn;
  undefined2 *word_ptr;
  undefined2 local_1c;
  
  val = (g_frontnet_bss_00335131 - *(int *)(gui_btn + 0x33)) + -1; /* gui_btn->content */
  local_1c = g_frontnet_bss_00335141;
  if (val < 0x20) {
    val_2 = *(int *)(&g_bss_003772e4 + (uint)(byte)(&g_bss_002ee8e0)[val * 2] * 4);
    if (val_2 < 0) {
      word_ptr = &local_1c;
      local_1c = CONCAT11((char)((ushort)g_frontnet_bss_00335141 >> 8),-(char)val_2);
    }
    else {
      word_ptr = (undefined2 *)(&g_bss_0033319b)[val_2];
    }
    g_lb_current_font_ptr = g_frontnet_bss_003346e8;
    if (g_frontnet_bss_00334738 == *(int *)(gui_btn + 0x33)) { /* gui_btn->content */
      g_lb_current_font_ptr = g_frontnet_bss_003346ec;
    }
    LbTextDraw(word_ptr);
    g_lb_display_draw_flags = 0x20;
    LbTextDrawFormatted();
    g_lb_display_draw_flags = 0x80;
    g_log_sprintf_buf = 0;
    if (((&g_bss_002ee8e1)[val * 2] & 2) != 0) {
      bflib_system_io_fn_0e9dd6();
      bflib_system_io_fn_0e9dd6();
    }
    if (((&g_bss_002ee8e1)[val * 2] & 4) != 0) {
      bflib_system_io_fn_0e9dd6();
      bflib_system_io_fn_0e9dd6();
    }
    if (((&g_bss_002ee8e1)[val * 2] & 1) != 0) {
      bflib_system_io_fn_0e9dd6();
      bflib_system_io_fn_0e9dd6();
    }
    bflib_system_io_fn_0e9dd6();
    LbTextDrawFormatted();
  }
  return;
}

/******************************************************************************
 * Function : frontend_fn_030972 (Original VA: 0x30972, Ghidra: FUN_00030972)
 * Prototype: void frontend_fn_030972(void);
 * Address  : 0x30972 (Size: 36 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x030972
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_fn_030972(void)

{
  int gui_btn;
  
  g_frontnet_bss_00335135 = 1;
  g_frontnet_bss_00335139 = (g_frontnet_bss_00335131 - *(int *)(gui_btn + 0x33)) + -1; /* gui_btn->content */
  g_bss_003db5fc = 0;
  return;
}

/******************************************************************************
 * Function : frontend_fn_030996 (Original VA: 0x30996, Ghidra: FUN_00030996)
 * Prototype: void frontend_fn_030996(void);
 * Address  : 0x30996 (Size: 146 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontend.cpp procedure @ 0x030996
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 1 -> inits_fn_045dbb
 ******************************************************************************/
void frontend_fn_030996(void)

{
  int val;
  
  if (g_bss_003db5fc != '\x01') {
    if (g_bss_003db5fc == '\0') {
      return;
    }
    if (g_bss_003db4f8 != '\0') {
      g_bss_003db5fc = g_bss_003db5fc + -0x80;
    }
    val = inits_fn_045dbb();
    if (val == 0) {
      g_bss_003db5fc = 0;
      return;
    }
  }
  g_bss_003db5fc = 0;
  g_frontnet_bss_00335135 = 0;
  return;
}

/******************************************************************************
 * Function : frontend_draw_text_overlay_030a28 (Original VA: 0x30a28, Ghidra: FUN_00030a28)
 * Prototype: void frontend_draw_text_overlay_030a28(void);
 * Address  : 0x30a28 (Size: 5 bytes)
 * Module   : frontend.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 0 -> 
 ******************************************************************************/
void frontend_draw_text_overlay_030a28(void)

{
  int val;
  int val_2;
  undefined4 uval;
  int val_3;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  uval = g_bss_003338f3;
  iStack_1c = bflib_system_io_draw_text_overlay_0e6c1c(g_bss_003338f3);
  if (iStack_1c < 0x1b0) {
    iStack_1c = iStack_1c / 0x6c;
    val_3 = 1;
  }
  else {
    val_3 = iStack_1c / 0x144;
    iStack_1c = 4;
    if (4 < val_3) {
      LbErrorLog();
    }
  }
  if (iStack_1c < 2) {
    iStack_1c = 2;
  }
  else if (4 < iStack_1c) {
    iStack_1c = 4;
  }
  val = (iStack_1c + -2) * 0x6c + 0xea;
  val_2 = (g_screen_height + -0x5c) / 2;
  watcom_crt_fn_13a710();
  for (iStack_20 = 0; iStack_20 < iStack_1c; iStack_20 = iStack_20 + 1) {
    watcom_crt_fn_13a710(uval,g_frontnet_bss_00334728 + (iStack_20 % 4 + 0x1a) * 6,val,val_2,val_3);
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  for (iStack_28 = 0; iStack_28 < iStack_1c; iStack_28 = iStack_28 + 1) {
    watcom_crt_fn_13a710(uval,g_frontnet_bss_00334728 + (iStack_28 % 4 + 0x29) * 6);
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  for (iStack_24 = 0; iStack_24 < iStack_1c; iStack_24 = iStack_24 + 1) {
    watcom_crt_fn_13a710(uval,g_frontnet_bss_00334728 + (iStack_24 % 4 + 0x30) * 6);
  }
  watcom_crt_fn_13a710();
  g_lb_display_draw_flags = 0x100;
  LbTextDraw();
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontend_text_long_box_030a2d (Original VA: 0x30a2d, Ghidra: FUN_00030a2d)
 * Prototype: void frontend_text_long_box_030a2d(void);
 * Address  : 0x30a2d (Size: 627 bytes)
 * Module   : frontend.cpp [direct_file_string_xref]
 * OrigLine : frontend.cpp lines 3295
 * Purpose  : String 'Text too long for error box'
 * Callers  : 3 -> frontnet_fn_035c1e, frontnet_LbNetwork_Stop_035d29, frontnet_fn_035e19
 * Callees  : 4 -> LbErrorLog, LbTextDraw, bflib_system_io_draw_text_overlay_0e6c1c, watcom_crt_fn_13a710
 ******************************************************************************/
void frontend_text_long_box_030a2d(void)

{
  int val;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  g_lb_current_font_ptr = g_frontnet_bss_003346e8;
  val = bflib_system_io_draw_text_overlay_0e6c1c();
  if (val < 0x1b0) {
    local_1c = val / 0x6c;
  }
  else {
    local_1c = 4;
    if (4 < val / 0x144) {
      LbErrorLog(); /* LbErrorLog("frontend.cpp", line 3295, "Text too long for error box") */
    }
  }
  if (local_1c < 2) {
    local_1c = 2;
  }
  else if (4 < local_1c) {
    local_1c = 4;
  }
  watcom_crt_fn_13a710();
  for (local_20 = 0; local_20 < local_1c; local_20 = local_20 + 1) {
    watcom_crt_fn_13a710();
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  for (local_28 = 0; local_28 < local_1c; local_28 = local_28 + 1) {
    watcom_crt_fn_13a710();
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  for (local_24 = 0; local_24 < local_1c; local_24 = local_24 + 1) {
    watcom_crt_fn_13a710();
  }
  watcom_crt_fn_13a710();
  g_lb_display_draw_flags = 0x100;
  LbTextDraw();
  LbTextDrawFormatted();
  return;
}

/******************************************************************************
 * Function : frontend_fn_030ca0 (Original VA: 0x30ca0, Ghidra: FUN_00030ca0)
 * Prototype: void frontend_fn_030ca0(void);
 * Address  : 0x30ca0 (Size: 25 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module frontend.cpp procedure @ 0x030ca0
 * Callers  : 1 -> frontend_why_are_we_here_02dfac
 * Callees  : 1 -> frontend_fn_030782
 ******************************************************************************/
void frontend_fn_030ca0(void)

{
  frontend_fn_030782();
  return;
}

/******************************************************************************
 * Function : frontend_fn_030cb9 (Original VA: 0x30cb9, Ghidra: FUN_00030cb9)
 * Prototype: void frontend_fn_030cb9(void);
 * Address  : 0x30cb9 (Size: 32 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module frontend.cpp procedure @ 0x030cb9
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 2 -> frontend_fn_030782, bflib_system_io_fn_0e7904
 ******************************************************************************/
void frontend_fn_030cb9(void)

{
  frontend_fn_030782();
  bflib_system_io_fn_0e7904(0);
  return;
}

/******************************************************************************
 * Function : frontend_process_map_subtile_030cd9 (Original VA: 0x30cd9, Ghidra: FUN_00030cd9)
 * Prototype: longlong frontend_process_map_subtile_030cd9(void);
 * Address  : 0x30cd9 (Size: 299 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, frontend_load_frontend_palette_02e8a7
 * Callees  : 5 -> cdtest_ldata_dkwind00_dat_0150f0, prepare_file_path, dk_sprintf, bflib_system_io_fn_0e984c, bflib_system_io_fn_0f05d8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong frontend_process_map_subtile_030cd9(void)

{
  undefined4 uval;
  int val;
  uint arg_edx;
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_FRONT_RAW_0016369a,uval);
  cdtest_ldata_dkwind00_dat_0150f0();
  val = bflib_system_io_fn_0e984c();
  if (val == 0x4b000) {
    g_frontnet_bss_00334724 = &g_map_subtiles;
    prepare_file_path();
    uval = prepare_file_path();
    dk_sprintf(&g_log_sprintf_buf,s__s_FRONTBIT_DAT_001636af,uval); /* 0x1636af="%s\FRONTBIT.DAT" */
    cdtest_ldata_dkwind00_dat_0150f0();
    val = bflib_system_io_fn_0e984c();
    if (val != -1) {
      g_frontnet_bss_00334734 = (int)&g_render_poly_buf_start + val;
      g_frontnet_bss_00334730 = &g_render_poly_buf_start;
      prepare_file_path();
      uval = prepare_file_path();
      dk_sprintf(&g_log_sprintf_buf,s__s_FRONTBIT_TAB_001636c7,uval);
      cdtest_ldata_dkwind00_dat_0150f0();
      val = bflib_system_io_fn_0e984c();
      if (val != -1) {
        g_frontnet_bss_00334728 = g_frontnet_bss_00334734;
        g_frontnet_bss_0033472c = g_frontnet_bss_00334734 + val;
        bflib_system_io_fn_0f05d8();
        return CONCAT44(arg_edx,1);
      }
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : frontend_fn_030e04 (Original VA: 0x30e04, Ghidra: FUN_00030e04)
 * Prototype: longlong frontend_fn_030e04(void);
 * Address  : 0x30e04 (Size: 67 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module frontend.cpp procedure @ 0x030e04
 * Callers  : 1 -> frontend_why_are_we_here_02dfac
 * Callees  : 1 -> bflib_system_io_fn_0eb7b0
 ******************************************************************************/
longlong frontend_fn_030e04(void)

{
  char *str_ptr;
  uint arg_edx;
  char local_14;
  char local_13;
  
  bflib_system_io_fn_0eb7b0();
  str_ptr = &g_data_0017b41a;
  while( true ) {
    if (*str_ptr == '\0') {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((*str_ptr == local_14) && (str_ptr[1] == local_13)) break;
    str_ptr = str_ptr + 6;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : frontend_fn_030e88 (Original VA: 0x30e88, Ghidra: FUN_00030e88)
 * Prototype: longlong frontend_fn_030e88(void);
 * Address  : 0x30e88 (Size: 110 bytes)
 * Module   : frontend.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module frontend.cpp procedure @ 0x030e88
 * Callers  : 1 -> frontend_why_are_we_here_02dfac
 * Callees  : 3 -> file_settings_dat_02a355, setup_init_game_screen_and_subsystems, LbMemoryCopy
 ******************************************************************************/
longlong frontend_fn_030e88(void)

{
  int val;
  uint arg_edx;
  
  val = setup_init_game_screen_and_subsystems();
  if (val == 0) {
    if ((g_bss_002ee8dc != 0xd) || (val = setup_init_game_screen_and_subsystems(), val == 0)) {
      g_bss_00334021 = 1;
      LbMemoryCopy();
      g_bss_0019a2a1 = 1;
      return (ulonglong)arg_edx << 0x20;
    }
    g_bss_002ee8dc = 1;
    file_settings_dat_02a355();
  }
  return CONCAT44(arg_edx,1);
}

