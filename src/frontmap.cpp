/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: frontmap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 22
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : frontmap_fn_030e47 (Original VA: 0x30e47, Ghidra: FUN_00030e47)
 * Prototype: longlong frontmap_fn_030e47(void);
 * Address  : 0x30e47 (Size: 65 bytes)
 * Module   : frontmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontmap.cpp procedure @ 0x030e47
 * Callers  : 1 -> frontend_draw_text_overlay_0300a7
 * Callees  : 1 -> bflib_system_io_fn_0eb7b0
 ******************************************************************************/
longlong frontmap_fn_030e47(void)

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
  return CONCAT44(arg_edx,*(undefined4 *)(str_ptr + 2));
}

/******************************************************************************
 * Function : frontmap_ldata_dkflag00_dat_030ef8 (Original VA: 0x30ef8, Ghidra: FUN_00030ef8)
 * Prototype: longlong frontmap_ldata_dkflag00_dat_030ef8(void);
 * Address  : 0x30ef8 (Size: 795 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp lines 373
 * Purpose  : String 'LDATA\DKFLAG00.DAT'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 15 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_fn_02f1c8, frontend_fn_02f1d2, frontmap_enough_memory_game_structure_0329ae, sndheap_trying_use_two_sound_06e159, LbErrorLog, LbScreenWaitVbi, LbDataLoadAll ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong frontmap_ldata_dkflag00_dat_030ef8(void)

{
  int clock_ms;
  uint uval;
  uint arg_edx;
  uint *word_ptr;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint auStack_c [2];
  
  word_ptr = auStack_c;
  uStack_10 = 0x30f0c;
  auStack_c[0] = arg_edx;
  LbScreenWaitVbi();
  uStack_10 = g_scratch_work_buf;
  uStack_14 = 0x30f17;
  LbPaletteSet();
  g_frontnet_bss_003351e2 = 0;
  g_frontnet_bss_003351e6 = 0;
  g_frontnet_bss_003351ee = 0;
  g_frontnet_bss_003351ea = 0;
  g_frontnet_bss_003351f2 = 0;
  uStack_10 = 0x30f51;
  cdtest_ldata_dkwind00_dat_0150f0();
  uStack_10 = 0x30f56;
  frontend_fn_02f1c8();
  uStack_10 = 0x30f62;
  clock_ms = frontmap_enough_memory_game_structure_0329ae();
  if (clock_ms != 0) {
    uStack_10 = 0x30f7b;
    clock_ms = LbDataLoadAll();
    if (clock_ms == 0) {
      uStack_10 = 0x30f9f;
      bflib_system_io_fn_0f05f0();
      uStack_10 = 0x30fa4;
      frontend_fn_02f1d2();
      if ((g_bss_0019d0bd & 0x10) == 0) {
        uStack_10 = 0x30fb7;
        bflib_sound_bf110_play_cd_non_0ecabc();
      }
      if ((((&g_player_state_base)[g_my_player_word._3_1_ * 0x4ef] & 2) == 0) &&
         (((g_bss_002e78ea == 1 || ((&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef] == '\x02')) ||
          ((&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef] == '\x03')))) {
        g_frontnet_bss_00335182 = (&g_data_0017b644)[(uint)g_bss_002e78ea * 5] - g_screen_width / 2;
        g_frontnet_bss_00335186 = (&g_data_0017b648)[(uint)g_bss_002e78ea * 5] - g_screen_height / 2;
        g_frontnet_bss_0033516c = 0;
        uStack_10 = 0x31040;
        g_frontnet_bss_0033519a = g_frontnet_bss_00335182;
        g_frontnet_bss_0033519e = g_frontnet_bss_00335186;
        clock_ms = LbTimerClock();
        g_frontnet_bss_003351e2 = clock_ms + 1000;
      }
      else {
        if (((&g_player_state_base)[g_my_player_word._3_1_ * 0x4ef] & 2) == 0) {
          uval = g_bss_002e78ea - 1;
        }
        else {
          uval = (uint)g_bss_002e78ea;
        }
        g_frontnet_bss_00335182 = (&g_data_0017b644)[uval * 5] - g_screen_width / 2;
        g_frontnet_bss_00335186 = (&g_data_0017b648)[uval * 5] - g_screen_height / 2;
        g_frontnet_bss_00335176 = (&g_data_0017b644)[uval * 5];
        g_frontnet_bss_0033517a = (&g_data_0017b648)[uval * 5];
        g_frontnet_bss_0033516c = 1;
        g_frontnet_bss_0033516d = 1;
        g_frontnet_bss_00335172 = 0xf0;
        g_frontnet_bss_0033516e = 0xfffffffc;
      }
      g_frontnet_bss_003351f6 = 0x100;
      if (g_frontnet_bss_00335182 < 0) {
        g_frontnet_bss_00335182 = 0;
      }
      else if (0x500 - g_screen_width < g_frontnet_bss_00335182) {
        g_frontnet_bss_00335182 = 0x500 - g_screen_width;
      }
      if (g_frontnet_bss_00335186 < 0) {
        g_frontnet_bss_00335186 = 0;
      }
      else if (0x3c0 - g_screen_height < g_frontnet_bss_00335186) {
        g_frontnet_bss_00335186 = 0x3c0 - g_screen_height;
      }
      g_frontnet_bss_0033518a = g_frontnet_bss_00335182 << 8;
      g_frontnet_bss_0033518e = g_frontnet_bss_00335186 << 8;
      g_frontnet_bss_00335192 = 0;
      g_frontnet_bss_00335196 = 0;
      uStack_10 = 0x3118f;
      bflib_system_io_fn_0ebab0();
      uStack_10 = 0x311ac;
      bflib_system_io_fn_0ebf9c();
      if (0xf < g_bss_00334065) {
        uStack_10 = 0;
        uStack_14 = 2;
        uStack_18 = 0xffffffff;
        uStack_1c = 100;
        uStack_20 = 0x311d0;
        sndheap_trying_use_two_sound_06e159();
        uStack_20 = 0;
        uStack_24 = 2;
        uStack_28 = 0xffffffff;
        word_ptr = &uStack_2c;
        uStack_2c = 100;
        sndheap_trying_use_two_sound_06e159();
      }
      if ((g_bss_0019d0bd & 0x10) == 0) {
        word_ptr[-1] = 0x31200;
        bflib_system_io_bf110_set_redbook_volume_0ecf70();
      }
      g_frontnet_bss_00334a4c = 0;
      return CONCAT44(*word_ptr,1);
    }
    uStack_10 = 0x30f93;
    LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 373, "Unable to load MAP SCREEN sprites") */
  }
  uStack_10 = 0x30f6b;
  frontend_fn_02f1d2();
  return (ulonglong)auStack_c[0] << 0x20;
}

/******************************************************************************
 * Function : frontmap_ldata_dkflag00_dat_031213 (Original VA: 0x31213, Ghidra: FUN_00031213)
 * Prototype: void frontmap_ldata_dkflag00_dat_031213(void);
 * Address  : 0x31213 (Size: 96 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : String 'LDATA\DKFLAG00.DAT'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 7 -> frontmap_fn_032b21, LbDataFree, bflib_system_io_fn_0eae8a, bflib_system_io_fn_0ebab0, bflib_sound_bf110_cd_non_audio_0ecd76, bflib_system_io_bf110_set_redbook_volume_0ecf70, bflib_system_io_fn_0f0730
 ******************************************************************************/
void frontmap_ldata_dkflag00_dat_031213(void)

{
  bflib_system_io_fn_0ebab0();
  frontmap_fn_032b21();
  LbDataFree();
  bflib_system_io_fn_0f0730();
  if ((g_frontnet_bss_003351e6 != 0) || (g_frontnet_bss_003351ee != 0)) {
    g_frontnet_bss_003351e6 = 0;
    g_frontnet_bss_003351ee = 0;
    bflib_system_io_fn_0eae8a();
  }
  if ((g_bss_0019d0bd & 0x10) == 0) {
    bflib_sound_bf110_cd_non_audio_0ecd76();
    bflib_system_io_bf110_set_redbook_volume_0ecf70();
    return;
  }
  return;
}

/******************************************************************************
 * Function : frontmap_fn_031273 (Original VA: 0x31273, Ghidra: FUN_00031273)
 * Prototype: void frontmap_fn_031273(void);
 * Address  : 0x31273 (Size: 806 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x031273
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 5 -> frontend_load_frontend_palette_02e8a7, frontmap_fn_032805, frontmap_fn_0328e1, bflib_system_io_fn_0e8f24, LbTimerClock
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontmap_fn_031273(void)

{
  bool flag;
  int clock_ms;
  int val;
  int val_2;
  int val_3;
  
  flag = false;
  if (g_frontnet_bss_0033516c == '\0') {
    if (g_bss_003db4fd != '\0') {
      g_bss_003db4fd = 0;
      frontend_load_frontend_palette_02e8a7();
      bflib_system_io_fn_0e8f24();
      return;
    }
    frontmap_fn_032805();
    flag = true;
  }
  else if (g_frontnet_bss_0033516d == '\0') {
    g_frontnet_bss_0033516c = '\0';
    clock_ms = LbTimerClock();
    g_frontnet_bss_003351e2 = clock_ms + 1000;
  }
  if ((flag) && (g_bss_0034b25c != '\0')) {
    clock_ms = (uint)g_bss_002e78ea * 0x14;
    g_bss_0034b25c = '\0';
    val = g_bss_0034b260 + g_frontnet_bss_00335182;
    if ((((*(int *)(&g_data_0017b64c + clock_ms) <= val) &&
         (val < (int)((uint)*(byte *)(g_frontnet_bss_003351d2 + 0x40) + *(int *)(&g_data_0017b64c + clock_ms)))) &&
        (val_2 = g_bss_0034b264 + g_frontnet_bss_00335186,
        (int)(*(int *)(&g_data_0017b650 + clock_ms) - (uint)*(byte *)(g_frontnet_bss_003351d2 + 0x41)) <= val_2)) &&
       (val_2 < *(int *)(&g_data_0017b650 + clock_ms))) {
      g_frontnet_bss_0033519a = val - g_screen_width / 2;
      g_frontnet_bss_0033516c = '\x01';
      g_frontnet_bss_0033516d = '\x01';
      g_frontnet_bss_00335172 = 1;
      g_frontnet_bss_0033516e = 4;
      g_frontnet_bss_0033517e = 7;
      g_frontnet_bss_0033519e = val_2 - g_screen_height / 2;
      if (g_frontnet_bss_0033519a < 0) {
        g_frontnet_bss_0033519a = 0;
      }
      else if (0x500 - g_screen_width < g_frontnet_bss_0033519a) {
        g_frontnet_bss_0033519a = 0x500 - g_screen_width;
      }
      if (g_frontnet_bss_0033519e < 0) {
        g_frontnet_bss_0033519e = 0;
      }
      else if (0x3c0 - g_screen_height < g_frontnet_bss_0033519e) {
        g_frontnet_bss_0033519e = 0x3c0 - g_screen_height;
      }
      g_frontnet_bss_0033518a = g_frontnet_bss_00335182 << 8;
      g_frontnet_bss_0033518e = g_frontnet_bss_00335186 << 8;
      g_bss_0019d0c2 = (uint)g_bss_002e78ea;
      g_frontnet_bss_00335176 = val;
      g_frontnet_bss_0033517a = val_2;
    }
    val = 0;
    clock_ms = 0;
    do {
      if ((((&g_bss_002ee888)[val] != '\0') &&
          (val_2 = g_bss_0034b260 + g_frontnet_bss_00335182, *(int *)((int)&g_data_0017b7fc + clock_ms) <= val_2)) &&
         ((val_2 < (int)((uint)*(byte *)(g_frontnet_bss_003351d2 + 0x70) + *(int *)((int)&g_data_0017b7fc + clock_ms)
                        ) &&
          ((val_3 = g_bss_0034b264 + g_frontnet_bss_00335186,
           (int)(*(int *)((int)&g_data_0017b800 + clock_ms) - (uint)*(byte *)(g_frontnet_bss_003351d2 + 0x71)) <=
           val_3 && (val_3 < *(int *)((int)&g_data_0017b800 + clock_ms))))))) {
        g_frontnet_bss_0033516c = '\x01';
        g_frontnet_bss_0033516d = '\x01';
        g_frontnet_bss_00335172 = 1;
        g_frontnet_bss_0033516e = 4;
        g_frontnet_bss_0033517e = 7;
        g_bss_0019d0c2 = *(uint *)((int)&g_data_0017b804 + clock_ms);
        g_frontnet_bss_0033519a = val_2 - g_screen_width / 2;
        g_frontnet_bss_0033519e = val_3 - g_screen_height / 2;
        if (g_frontnet_bss_0033519a < 0) {
          g_frontnet_bss_0033519a = 0;
        }
        else if (0x500 - g_screen_width < g_frontnet_bss_0033519a) {
          g_frontnet_bss_0033519a = 0x500 - g_screen_width;
        }
        if (g_frontnet_bss_0033519e < 0) {
          g_frontnet_bss_0033519e = 0;
        }
        else if (0x3c0 - g_screen_height < g_frontnet_bss_0033519e) {
          g_frontnet_bss_0033519e = 0x3c0 - g_screen_height;
        }
        g_frontnet_bss_0033518a = g_frontnet_bss_00335182 << 8;
        g_frontnet_bss_0033518e = g_frontnet_bss_00335186 << 8;
        g_frontnet_bss_00335176 = val_2;
        g_frontnet_bss_0033517a = val_3;
      }
      val = val + 1;
      clock_ms = clock_ms + 0xc;
    } while (val < 6);
  }
  else {
    frontmap_fn_0328e1();
  }
  return;
}

/******************************************************************************
 * Function : frontmap_fn_031599 (Original VA: 0x31599, Ghidra: FUN_00031599)
 * Prototype: void frontmap_fn_031599(void);
 * Address  : 0x31599 (Size: 699 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x031599
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 5 -> frontmap_fn_0327b5, light_fn_0ac370, get_scaled_viewport_bottom_y, LbTimerClock, watcom_crt_fn_13a710
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontmap_fn_031599(void)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  int extraout_ECX_01;
  int val_2;
  int val_3;
  undefined8 uval;
  
  if (g_frontnet_bss_0033516d == '\0') {
    frontmap_fn_0327b5();
    if (((*(int *)(&g_data_0017b64c + (uint)g_bss_002e78ea * 0x14) <=
          (int)(g_graphics_window_width * (uint)g_units_per_pixel + g_frontnet_bss_00335182)) &&
        ((int)((uint)g_units_per_pixel * g_graphics_window_width + g_frontnet_bss_00335182) <
         (int)((uint)*(byte *)(g_frontnet_bss_003351d2 + 0x40) +
              *(int *)(&g_data_0017b64c + (uint)g_bss_002e78ea * 0x14)))) &&
       (uval = get_scaled_viewport_bottom_y(), (int)((ulonglong)uval >> 0x20) <= (int)uval + g_frontnet_bss_00335186)) {
      get_scaled_viewport_bottom_y();
    }
    LbTimerClock();
    val_3 = 0;
    watcom_crt_fn_13a710();
    val_2 = 0;
    val = extraout_ECX;
    do {
      if ((&g_bss_002ee888)[val_3] != '\0') {
        if (((*(int *)((int)&g_data_0017b7fc + val_2) <=
              (int)(g_graphics_window_width * (uint)g_units_per_pixel + g_frontnet_bss_00335182)) &&
            ((int)((uint)g_units_per_pixel * g_graphics_window_width + g_frontnet_bss_00335182) <
             (int)((uint)*(byte *)(val + 4) + *(int *)((int)&g_data_0017b7fc + val_2)))) &&
           (uval = get_scaled_viewport_bottom_y(), (int)((ulonglong)uval >> 0x20) <= (int)uval + g_frontnet_bss_00335186)) {
          get_scaled_viewport_bottom_y();
        }
        LbTimerClock();
        watcom_crt_fn_13a710();
        val = extraout_ECX_00;
      }
      if ((((float)g_data_00164097 < g_bss_0033401d) && ((double)g_bss_0033401d <= g_data_0016409f)) ||
         (((float)g_data_001640a7 <= g_bss_0033401d && ((double)g_bss_0033401d < g_data_001640af)))) {
        watcom_crt_fn_13a710();
        val = extraout_ECX_01;
      }
      val_3 = val_3 + 1;
      val_2 = val_2 + 0xc;
    } while (val_3 < 6);
  }
  else {
    light_fn_0ac370();
  }
  frontmap_fn_032612();
  return;
}

/******************************************************************************
 * Function : frontmap_fn_031854 (Original VA: 0x31854, Ghidra: FUN_00031854)
 * Prototype: undefined8 frontmap_fn_031854(void);
 * Address  : 0x31854 (Size: 509 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x031854
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 8 -> frontmap_fn_032738, frontmap_fn_032d8c, bflib_system_io_fn_0ea934, bflib_system_io_fn_0eae4c, LbTimerClock, bflib_sound_bf110_play_cd_non_0ecabc, bflib_system_io_bf110_set_redbook_volume_0ecf70, bflib_system_io_fn_0f0790
 ******************************************************************************/
undefined8 frontmap_fn_031854(void)

{
  uint clock_ms;
  undefined4 uval;
  undefined4 arg_edx;
  int val;
  
  if ((g_frontnet_bss_003351e2 != 0) && (clock_ms = LbTimerClock(), g_frontnet_bss_003351e2 < clock_ms)) {
    g_frontnet_bss_003351e2 = 0;
    frontmap_fn_032738();
  }
  val = 0;
  do {
    val = val + 1;
  } while (val < 0x15);
  if (g_frontnet_bss_003351f6 == 0) {
    if (0xf < g_bss_00334065) {
      bflib_system_io_fn_0f0790();
      bflib_system_io_fn_0f0790();
    }
    if ((g_bss_0019d0bd & 0x10) == 0) {
      bflib_system_io_bf110_set_redbook_volume_0ecf70();
    }
    bflib_system_io_fn_0eae4c();
  }
  else {
    if (0xf < g_bss_00334065) {
      bflib_system_io_fn_0f0790();
    }
    bflib_system_io_fn_0f0790();
    bflib_system_io_fn_0eae4c();
    if ((g_bss_0019d0bd & 0x10) == 0) {
      bflib_system_io_bf110_set_redbook_volume_0ecf70();
    }
  }
  if ((g_frontnet_bss_0033516d == '\0') || (val = frontmap_fn_032d8c(), val == 0)) {
    if ((g_frontnet_bss_003351e6 != 0) && (val = bflib_system_io_fn_0ea934(), val != 0)) {
      g_frontnet_bss_003351e6 = 0;
    }
    if ((g_bss_0019d0bd & 0x10) == 0) {
      bflib_sound_bf110_play_cd_non_0ecabc();
    }
    uval = 0;
  }
  else {
    uval = 1;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : frontmap_ldata_netflag_dat_031a51 (Original VA: 0x31a51, Ghidra: FUN_00031a51)
 * Prototype: void frontmap_ldata_netflag_dat_031a51(void);
 * Address  : 0x31a51 (Size: 389 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp lines 972, 989
 * Purpose  : String 'LDATA\NETFLAG.DAT'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 13 -> cdtest_ldata_dkwind00_dat_0150f0, frontend_fn_02f1c8, frontend_fn_02f1d2, frontmap_enough_memory_game_structure_0329ae, frontnet_levelnamefile_add_blank_line_032f9b, LbErrorLog, LbTextDraw, LbDataLoadAll ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontmap_ldata_netflag_dat_031a51(void)

{
  char ch;
  int val;
  
  if (g_frontnet_bss_0033591f != 0) {
    ch = bflib_system_io_new_players_are_allowed_0ed0ac();
    if (ch != '\0') {
      LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 972, g_log_buf) */
    }
  }
  cdtest_ldata_dkwind00_dat_0150f0();
  frontend_fn_02f1c8();
  g_bss_002e78e9 = 0;
  val = frontmap_enough_memory_game_structure_0329ae();
  if (val == 0) {
    frontend_fn_02f1d2();
    return;
  }
  val = LbDataLoadAll();
  if (val != 0) {
    LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 989, "Unable to load MAP SCREEN sprites") */
    return;
  }
  bflib_system_io_fn_0f05f0();
  frontend_fn_02f1d2();
  frontnet_levelnamefile_add_blank_line_032f9b();
  g_frontnet_bss_00335182 = (0x500 - g_screen_width) / 2;
  g_frontnet_bss_00335186 = (0x3c0 - g_screen_height) / 2;
  g_frontnet_bss_00334a54 = 0xffffffff;
  g_frontnet_bss_003351fa = 0xffffffff;
  bflib_system_io_fn_0ebab0();
  bflib_system_io_fn_0ebf9c();
  g_lb_current_font_ptr = g_frontnet_bss_003351b2;
  LbTextDraw();
  g_lb_display_draw_flags = 0;
  g_frontnet_bss_003351f6 = 0x100;
  if ((g_bss_0019d0bd & 0x10) == 0) {
    bflib_system_io_bf110_set_redbook_volume_0ecf70();
  }
  if (g_frontnet_bss_0033591f == 0) {
    g_frontnet_bss_003351fe = 1;
  }
  else {
    g_frontnet_bss_003351fe = 0;
    val = 0;
    do {
      if (((&g_frontnet_player_lobby_state)[val] & 1) != 0) {
        g_frontnet_bss_003351fe = g_frontnet_bss_003351fe + 1;
      }
      val = val + 0xc;
    } while (val != 0x30);
  }
  g_frontnet_bss_00335202 = 0;
  g_frontnet_bss_00335206 = 0;
  return;
}

/******************************************************************************
 * Function : frontmap_ldata_netflag_dat_031bd6 (Original VA: 0x31bd6, Ghidra: FUN_00031bd6)
 * Prototype: void frontmap_ldata_netflag_dat_031bd6(void);
 * Address  : 0x31bd6 (Size: 77 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : String 'LDATA\NETFLAG.DAT'
 * Callers  : 1 -> frontend_load_frontend_palette_02e8a7
 * Callees  : 5 -> frontmap_fn_032b21, LbDataFree, LbFileClose, bflib_sound_bf110_cd_non_audio_0ecd76, bflib_system_io_bf110_set_redbook_volume_0ecf70
 ******************************************************************************/
void frontmap_ldata_netflag_dat_031bd6(void)

{
  frontmap_fn_032b21();
  LbDataFree();
  LbFileClose();
  g_frontnet_bss_0033591f = 0;
  if ((g_bss_0019d0bd & 0x10) == 0) {
    bflib_sound_bf110_cd_non_audio_0ecd76();
    bflib_system_io_bf110_set_redbook_volume_0ecf70();
  }
  return;
}

/******************************************************************************
 * Function : frontmap_fn_031c23 (Original VA: 0x31c23, Ghidra: FUN_00031c23)
 * Prototype: void frontmap_fn_031c23(void);
 * Address  : 0x31c23 (Size: 460 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x031c23
 * Callers  : 1 -> frontend_fn_02faf6
 * Callees  : 5 -> frontmap_fn_032805, frontmap_fn_0328e1, get_scaled_viewport_bottom_y, dk_sprintf, bflib_system_io_fn_0ebf9c
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frontmap_fn_031c23(void)

{
  byte flag;
  int val;
  int ui_scale;
  int val_2;
  int val_3;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_4;
  
  if (g_bss_003db4fd == '\0') {
    if (g_frontnet_bss_00335206 == 0) {
      if ((g_bss_0034b25d != '\0') && (g_bss_0034b25d = '\0', g_frontnet_bss_0033591f != 0)) {
        if (g_frontnet_bss_00334a54 == -1) {
          if (g_frontnet_bss_00335202 == 0) {
            g_frontnet_bss_00335202 = 9;
          }
        }
        else {
          bflib_system_io_fn_0ebf9c();
          g_frontnet_bss_00334a54 = -1;
        }
      }
      if (g_frontnet_bss_00334a54 == -1) {
        g_frontnet_bss_003351fa = -1;
        val_3 = 0;
        val_4 = 0;
        while ((ui_scale = g_frontnet_bss_003351fa, val_3 < g_frontnet_bss_003358eb &&
               (((((int)(uint)(byte)(&g_frontnet_bss_00335374)[val_4] < g_frontnet_bss_003351fe ||
                  ((int)(g_graphics_window_width * (uint)g_units_per_pixel + g_frontnet_bss_00335182) <
                   *(int *)((int)&g_frontnet_bss_00335375 + val_4))) ||
                 ((int)(*(byte *)(g_frontnet_bss_003351d2 + 0x22) / 2 +
                       *(int *)((int)&g_frontnet_bss_00335375 + val_4) + (uint)*(byte *)(g_frontnet_bss_003351d2 + 0x22))
                  <= (int)((uint)g_units_per_pixel * g_graphics_window_width + g_frontnet_bss_00335182))) ||
                ((ui_scale = get_scaled_viewport_bottom_y(), val_3 = extraout_ECX,
                 ui_scale + g_frontnet_bss_00335186 < *(int *)((int)&g_frontnet_bss_00335379 + val_4) ||
                 (val = *(int *)((int)&g_frontnet_bss_00335379 + val_4),
                 flag = *(byte *)(g_frontnet_bss_003351d2 + 0x23), val_2 = get_scaled_viewport_bottom_y(),
                 val_3 = extraout_ECX_00, ui_scale = extraout_ECX_00,
                 (int)(val + (uint)flag + flag / 2) <= val_2 + g_frontnet_bss_00335186))))))) {
          val_4 = val_4 + 0xe;
          val_3 = val_3 + 1;
        }
        g_frontnet_bss_003351fa = ui_scale;
        if (((g_frontnet_bss_003351fa != -1) && (g_frontnet_bss_00335202 == 0)) &&
           ((g_frontnet_bss_00335206 == 0 && (g_bss_0034b25c != '\0')))) {
          g_frontnet_bss_00334a54 = g_frontnet_bss_003351fa;
          g_bss_0034b25c = '\0';
          dk_sprintf(&g_bss_00334025,s__s__d_00164123,g_bss_003337f3,
                       (&g_frontnet_bss_00335373)[g_frontnet_bss_003351fa * 0xe]);
        }
        frontmap_fn_032805();
        frontmap_fn_0328e1();
      }
    }
  }
  else {
    g_frontnet_bss_00334a54 = -2;
    g_bss_003db4fd = '\0';
  }
  return;
}

/******************************************************************************
 * Function : frontmap_LbNetwork_Exchange_031def (Original VA: 0x31def, Ghidra: FUN_00031def)
 * Prototype: undefined8 frontmap_LbNetwork_Exchange_031def(void);
 * Address  : 0x31def (Size: 1274 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp lines 1261, 1276
 * Purpose  : References 'LbNetwork_Exchange failed'
 * Callers  : 1 -> frontend_fn_02fc49
 * Callees  : 11 -> frontend_load_frontend_palette_02e8a7, frontmap_fn_032d8c, frontmap_fn_032e00, get_scaled_viewport_bottom_y, LbErrorLog, LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0ebf9c ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 frontmap_LbNetwork_Exchange_031def(void)

{
  bool flag;
  undefined1 uval;
  undefined2 uval_2;
  char net_status;
  int val;
  undefined4 uval_3;
  int loop_i;
  uint uval_4;
  int val_2;
  int val_3;
  short ui_scale;
  undefined4 arg_edx;
  uint uval_5;
  undefined8 uval_6;
  int local_24;
  int local_20;
  uint local_1c;
  
  if ((g_bss_0019d0bd & 0x10) == 0) {
    bflib_system_io_bf110_set_redbook_volume_0ecf70();
  }
  if (g_frontnet_bss_0033516d == '\0') {
    LbScreenWaitVbi();
    val = (int)g_my_player_word._3_1_;
    loop_i = val * 0xc;
    (&g_frontnet_bss_003358f9)[loop_i] = (undefined1)g_frontnet_bss_00334a54;
    (&g_frontnet_player_lobby_state)[loop_i] = (&g_frontnet_player_lobby_state)[loop_i] | 1;
    if (g_frontnet_bss_00335206 == 0) {
      if (g_frontnet_bss_00334a54 == -1) {
        ui_scale = (short)g_graphics_window_width * g_units_per_pixel + (short)g_frontnet_bss_00335182;
        if (g_frontnet_bss_00335202 != 0) {
          (&g_frontnet_bss_003358f5)[val * 6] = ui_scale;
          ui_scale = get_scaled_viewport_bottom_y();
          val = g_my_player_word._3_1_ * 0xc;
          (&g_frontnet_bss_003358f7)[g_my_player_word._3_1_ * 6] = (short)g_frontnet_bss_00335186 + ui_scale;
          if (g_frontnet_bss_00335202 < 0x11) {
            uval = g_frontnet_bss_00335202;
            (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] & 7;
            (&g_frontnet_bss_003358f9)[val] = uval;
            g_frontnet_bss_00335202 = g_frontnet_bss_00335202 + 1;
            (&g_frontnet_player_lobby_state)[val] = (&g_frontnet_player_lobby_state)[val] | 8;
          }
          else {
            g_frontnet_bss_00335202 = 0;
          }
          goto LAB_00031fdc;
        }
        (&g_frontnet_bss_003358f5)[val * 6] = ui_scale;
        ui_scale = get_scaled_viewport_bottom_y();
        ui_scale = (short)g_frontnet_bss_00335186 + ui_scale;
        loop_i = g_my_player_word._3_1_ * 0xc;
      }
      else {
        ui_scale = *(short *)((int)&g_frontnet_bss_00335379 + g_frontnet_bss_00334a54 * 0xe);
        (&g_frontnet_bss_003358f5)[val * 6] =
             (ushort)*(byte *)(g_frontnet_bss_003351d2 + 10) * (short)g_my_player_word._3_1_ +
             *(short *)((int)&g_frontnet_bss_00335375 + g_frontnet_bss_00334a54 * 0xe);
      }
      *(short *)((int)&g_frontnet_bss_003358f7 + loop_i) = ui_scale;
    }
    else {
      uval_2 = (undefined2)g_frontnet_bss_0033520a;
      (&g_frontnet_player_lobby_state)[loop_i] = (&g_frontnet_player_lobby_state)[loop_i] & 7;
      (&g_frontnet_bss_003358f5)[val * 6] = uval_2;
      (&g_frontnet_player_lobby_state)[loop_i] = (&g_frontnet_player_lobby_state)[loop_i] | 0x10;
      (&g_frontnet_bss_003358f7)[val * 6] = (undefined2)g_frontnet_bss_0033520e;
      (&g_frontnet_bss_003358fa)[loop_i] = g_frontnet_bss_00335206;
      g_frontnet_bss_00335206 = g_frontnet_bss_00335206 + -1;
      if (g_frontnet_bss_00335206 == 0) {
        bflib_system_io_fn_0ebf9c();
      }
    }
LAB_00031fdc:
    if ((g_frontnet_bss_0033591f != 0) && (net_status = LbNetwork_StartExchange_0ee694(), net_status != '\0')) {
      LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 1261, "LbNetwork_Exchange failed") */
    }
    local_1c = 0xffffffff;
    LbScreenWaitVbi();
    flag = false;
    uval_5 = 0;
    local_20 = 0;
    val = 0;
    for (loop_i = 0; val_2 = g_scratch_work_buf, loop_i < 4; loop_i = loop_i + 1) {
      if (((&g_frontnet_player_lobby_state)[val] & 1) != 0) {
        val_3 = (int)(char)(&g_frontnet_bss_003358f9)[val];
        if (val_3 == -2) {
          if ((g_frontnet_bss_0033591f != 0) && (net_status = bflib_system_io_new_players_are_allowed_0ed0ac(), net_status != '\0')) {
            LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 1276, "Unable to enable new players joining exchange") */
          }
          frontend_load_frontend_palette_02e8a7();
          goto LAB_00031a4a;
        }
        if ((val_3 == -1) || ((byte)(&g_frontnet_player_lobby_state)[val] >> 3 == 1)) {
          local_20 = local_20 + 1;
        }
        else {
          *(char *)(val_3 + g_scratch_work_buf) = *(char *)(val_3 + g_scratch_work_buf) + '\x01';
          val_3 = (int)(char)(&g_frontnet_bss_003358f9)[val];
          uval_4 = (uint)*(byte *)(val_2 + val_3);
          if (uval_4 == local_1c) {
            flag = false;
          }
          else if ((int)local_1c < (int)uval_4) {
            flag = true;
            uval_5 = (uint)(byte)(&g_frontnet_bss_00335373)[val_3 * 0xe];
            local_24 = val_3;
            local_1c = uval_4;
          }
        }
        if (((byte)(&g_frontnet_player_lobby_state)[val] >> 3 == 1) && ((&g_frontnet_bss_003358f9)[val] == '\r')) {
          uval_6 = frontmap_fn_032e00();
          val = (int)((ulonglong)uval_6 >> 0x20);
          if ((int)uval_6 != 0) {
            val_2 = (int)g_my_player_word._3_1_;
            g_frontnet_bss_00335206 = 0xc;
            g_frontnet_bss_00334a54 = -1;
            g_frontnet_bss_00335202 = 0;
            g_frontnet_bss_0033520a = (uint)(ushort)(&g_frontnet_bss_003358f5)[val_2 * 6];
            (&g_frontnet_player_lobby_state)[val_2 * 0xc] = (&g_frontnet_player_lobby_state)[val_2 * 0xc] & 7;
            g_frontnet_bss_0033520e = (uint)(ushort)(&g_frontnet_bss_003358f7)[val_2 * 6];
            (&g_frontnet_player_lobby_state)[val_2 * 0xc] = (&g_frontnet_player_lobby_state)[val_2 * 0xc] | 0x10;
          }
        }
      }
      val = val + 0xc;
    }
    if (((local_20 == 0) && (uval_5 != 0)) && (flag)) {
      g_bss_0019d0c2 = uval_5;
      dk_sprintf(&g_bss_00334025,s__s__d_0016418b,g_bss_003337f3,uval_5);
      g_frontnet_bss_0033516d = '\x01';
      g_frontnet_bss_00335172 = 1;
      g_frontnet_bss_0033516e = 4;
      g_frontnet_bss_00335176 = (int)g_my_player_word._3_1_ * (uint)*(byte *)(g_frontnet_bss_003351d2 + 10) +
                     *(int *)((int)&g_frontnet_bss_00335375 + local_24 * 0xe);
      g_frontnet_bss_0033517a = *(int *)((int)&g_frontnet_bss_00335379 + local_24 * 0xe);
      g_frontnet_bss_0033517e = (g_frontnet_bss_0033591f != 0) + 7;
      g_frontnet_bss_0033519a = g_frontnet_bss_00335176 - g_screen_width / 2;
      g_frontnet_bss_0033519e = g_frontnet_bss_0033517a - g_screen_height / 2;
      if (g_frontnet_bss_0033519a < 0) {
        g_frontnet_bss_0033519a = 0;
      }
      else if (0x500 - g_screen_width < g_frontnet_bss_0033519a) {
        g_frontnet_bss_0033519a = 0x500 - g_screen_width;
      }
      if (g_frontnet_bss_0033519e < 0) {
        g_frontnet_bss_0033519e = 0;
      }
      else if (0x3c0 - g_screen_height < g_frontnet_bss_0033519e) {
        g_frontnet_bss_0033519e = 0x3c0 - g_screen_height;
      }
      g_frontnet_bss_0033518a = g_frontnet_bss_00335182 << 8;
      g_frontnet_bss_0033518e = g_frontnet_bss_00335186 << 8;
      if (g_frontnet_bss_0033591f == 0) {
        g_frontnet_bss_00334a4c = 1;
      }
    }
  }
  else {
    val = frontmap_fn_032d8c();
    if (val != 0) {
      uval_3 = 1;
      goto LAB_00032316;
    }
  }
  if ((g_bss_0019d0bd & 0x10) == 0) {
    bflib_sound_bf110_play_cd_non_0ecabc();
  }
LAB_00031a4a:
  uval_3 = 0;
LAB_00032316:
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : frontmap_number_players_0322e9 (Original VA: 0x322e9, Ghidra: FUN_000322e9)
 * Prototype: void frontmap_number_players_0322e9(void);
 * Address  : 0x322e9 (Size: 809 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp lines 1387
 * Purpose  : String 'Invalid number of players'
 * Callers  : 1 -> frontend_fn_02fda1
 * Callees  : 10 -> frontmap_fn_032612, frontmap_fn_0327b5, light_fn_0ac370, LbErrorLog, bflib_system_io_draw_text_overlay_0e6c1c, LbTextDrawFormatted, dk_sprintf, LbTimerClock ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000323f2) */

void frontmap_number_players_0322e9(void)

{
  byte flag;
  uint uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  uint *word_ptr;
  undefined1 *word_ptr_2;
  int val_2;
  int loop_i;
  uint auStack_34 [5];
  int local_20;
  int local_1c;
  
  if (g_frontnet_bss_0033516d == '\0') {
    frontmap_fn_0327b5();
    g_lb_display_draw_flags = 0;
    val_2 = 0;
    for (loop_i = 0; loop_i < g_frontnet_bss_003358eb; loop_i = loop_i + 1) {
      if (g_frontnet_bss_003351fe <= (int)(uint)(byte)(&g_frontnet_bss_00335374)[val_2]) {
        flag = (&g_frontnet_bss_00335374)[val_2];
        if (flag < 3) {
          if (flag != 2) goto LAB_000323ba;
        }
        else if ((3 < flag) && (flag != 4)) {
LAB_000323ba:
          LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 1387, "Invalid number of players") */
          return;
        }
        watcom_crt_fn_13a710();
      }
      val_2 = val_2 + 0xe;
    }
    val_2 = 0;
    local_20 = 0;
    word_ptr = auStack_34 + 2;
    do {
      word_ptr_2 = (undefined1 *)word_ptr;
      if (((&g_frontnet_player_lobby_state)[val_2] & 1) != 0) {
        loop_i = 0;
        val = 0;
        if ((byte)(&g_frontnet_player_lobby_state)[val_2] >> 3 != 1) {
          if ((byte)(&g_frontnet_player_lobby_state)[val_2] >> 3 == 2) {
            uval = (uint)(byte)(&g_frontnet_bss_003358fa)[val_2];
            if (0xb < uval) {
              uval = 0xb;
            }
            loop_i = (&g_data_0017b854)[uval];
            val = (&g_data_0017b884)[uval];
          }
          else if ((&g_frontnet_bss_003358f9)[val_2] == -1) {
            *(undefined4 *)((int)word_ptr + -4) = 0x32429;
            LbTimerClock();
            local_1c = 8;
            loop_i = extraout_ECX;
          }
          else {
            *(undefined4 *)((int)word_ptr + -4) = 0x3244f;
            LbTimerClock();
            local_1c = 4;
            loop_i = extraout_ECX_00;
          }
        }
        auStack_34[4] =
             ((uint)*(ushort *)((int)&g_frontnet_bss_003358f5 + val_2) - g_frontnet_bss_00335182) + -0x12 + loop_i;
        auStack_34[3] =
             ((uint)*(ushort *)((int)&g_frontnet_bss_003358f7 + val_2) - g_frontnet_bss_00335186) + -0x19 + val;
        *(undefined4 *)((int)word_ptr + -4) = 0x324a7;
        watcom_crt_fn_13a710();
        *(undefined4 *)((int)word_ptr + -4) = 0x324ae;
        loop_i = bflib_system_io_draw_text_overlay_0e6c1c();
        if (loop_i != 0) {
          g_lb_display_draw_flags = 0;
          word_ptr_2 = (undefined1 *)((int)word_ptr + -4);
          *(uint *)((int)word_ptr + -4) = (uint)(byte)(&g_data_0017b844)[local_20];
          local_1c = auStack_34[3] + 0x20;
          *(undefined4 *)((int)word_ptr + -8) = 0x324f9;
          bflib_system_io_fn_0f0870();
          *(undefined4 *)((int)word_ptr + -8) = 0x32509;
          LbTextDrawFormatted();
        }
      }
      local_20 = local_20 + 4;
      val_2 = val_2 + 0xc;
      word_ptr = (uint *)word_ptr_2;
    } while (local_20 != 0x10);
    if ((g_frontnet_bss_00334a54 != -1) || (g_frontnet_bss_003351fa != -1)) {
      g_lb_display_draw_flags = 0;
      auStack_34[2] = g_frontnet_bss_003351fa;
      if (g_frontnet_bss_00334a54 != -1) {
        auStack_34[2] = g_frontnet_bss_00334a54;
      }
      *(undefined4 *)(word_ptr_2 + -4) = 0x32593;
      bflib_system_io_draw_text_overlay_0e6c1c();
      word_ptr = (uint *)(word_ptr_2 + -4);
      *(undefined4 *)(word_ptr_2 + -4) = 0;
      *(undefined4 *)(word_ptr_2 + -8) = 0x325db;
      bflib_system_io_fn_0f0870();
      *(uint *)(word_ptr_2 + -8) = (uint)(byte)(&g_frontnet_bss_00335373)[auStack_34[2] * 0xe];
      *(undefined4 *)(word_ptr_2 + -0xc) = g_bss_003337f3;
      *(char **)(word_ptr_2 + -0x10) = s__s__d_001641b8;
      *(undefined **)(word_ptr_2 + -0x14) = &g_bss_00334025;
      *(undefined4 *)(word_ptr_2 + -0x18) = 0x32601;
      dk_sprintf();
      *(undefined4 *)(word_ptr_2 + -8) = 0x3260d;
      LbTextDrawFormatted();
    }
  }
  else {
    light_fn_0ac370();
    word_ptr = auStack_34 + 2;
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x32316;
  frontmap_fn_032612();
  return;
}

/******************************************************************************
 * Function : frontmap_fn_032612 (Original VA: 0x32612, Ghidra: FUN_00032612)
 * Prototype: void frontmap_fn_032612(void);
 * Address  : 0x32612 (Size: 294 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x032612
 * Callers  : 1 -> frontmap_number_players_0322e9
 * Callees  : 1 -> LbFileClose
 ******************************************************************************/
void frontmap_fn_032612(void)

{
  int val;
  int val_2;
  int val_3;
  int *int_ptr;
  int *extraout_ECX;
  int *int_ptr_2;
  int extraout_ECX_00;
  int val_4;
  int loop_i;
  
  val_2 = g_frontnet_bss_00335182 / 2;
  val_3 = g_frontnet_bss_00335186 / 2 << 2;
  for (loop_i = 0; loop_i < g_display_bss_003d9838; loop_i = loop_i + 1) {
    val_4 = 0;
    int_ptr = (int *)(g_frontnet_bss_003351a2 + *(int *)(g_frontnet_bss_003351a6 + val_3));
    while (val_4 < val_2) {
      val_4 = val_4 + *int_ptr;
      int_ptr_2 = (int *)((int)int_ptr + *int_ptr + 4);
      if (val_4 < val_2) {
        val_4 = val_4 + *int_ptr_2;
        int_ptr = int_ptr_2 + 1;
      }
      else {
        if (val_4 - val_2 != 0) {
          LbFileClose(val_3,loop_i,val_4 - val_2);
          int_ptr_2 = extraout_ECX;
        }
        int_ptr = int_ptr_2 + 1;
        val_4 = val_4 + *int_ptr_2;
      }
    }
    for (; val_4 < val_2 + g_screen_pitch; val_4 = val_4 + val + *int_ptr_2) {
      val = *int_ptr;
      LbFileClose();
      int_ptr_2 = (int *)(extraout_ECX_00 + val);
      int_ptr = int_ptr_2 + 1;
    }
    val_3 = val_3 + 4;
  }
  return;
}

/******************************************************************************
 * Function : frontmap_fn_032738 (Original VA: 0x32738, Ghidra: FUN_00032738)
 * Prototype: void frontmap_fn_032738(void);
 * Address  : 0x32738 (Size: 125 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x032738
 * Callers  : 2 -> frontmap_fn_031854, frontnet_draw_text_overlay_036188
 * Callees  : 3 -> dk_sprintf, bflib_sound_bf100_streamed_sample_type_0eaa28, bflib_system_io_fn_0eae4c
 ******************************************************************************/
void frontmap_fn_032738(void)

{
  int arg_eax;
  
  if (arg_eax == 0) {
    dk_sprintf(&g_log_sprintf_buf,s__s_SOUND_ATLAS_BAD_02d_WAV_001641da,&g_bss_00333f77,g_bss_002e78ea - 1)
    ;
    g_frontnet_bss_003351ee = 1;
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__s_SOUND_ATLAS_GOOD_02d_WAV_001641be,&g_bss_00333f77,g_bss_002e78ea);
    g_frontnet_bss_003351e6 = 1;
  }
  bflib_system_io_fn_0eae4c();
  bflib_sound_bf100_streamed_sample_type_0eaa28();
  return;
}

/******************************************************************************
 * Function : frontmap_fn_0327b5 (Original VA: 0x327b5, Ghidra: FUN_000327b5)
 * Prototype: void frontmap_fn_0327b5(void);
 * Address  : 0x327b5 (Size: 80 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x0327b5
 * Callers  : 2 -> frontmap_fn_031599, frontmap_number_players_0322e9
 * Callees  : 1 -> LbFileClose
 ******************************************************************************/
void frontmap_fn_0327b5(void)

{
  int loop_i;
  
  for (loop_i = 0; loop_i < g_screen_height; loop_i = loop_i + 1) {
    LbFileClose();
  }
  return;
}

/******************************************************************************
 * Function : frontmap_fn_032805 (Original VA: 0x32805, Ghidra: FUN_00032805)
 * Prototype: void frontmap_fn_032805(void);
 * Address  : 0x32805 (Size: 220 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x032805
 * Callers  : 2 -> frontmap_fn_031273, frontmap_fn_031c23
 * Callees  : 1 -> get_scaled_viewport_bottom_y
 ******************************************************************************/
void frontmap_fn_032805(void)

{
  int val;
  undefined8 uval;
  
  if ((int)(g_graphics_window_width * (uint)g_units_per_pixel) < 8) {
    g_frontnet_bss_00335192 = g_frontnet_bss_00335192 + -8;
  }
  else {
    if ((int)((uint)g_units_per_pixel * g_graphics_window_width) < g_screen_width + -8) goto LAB_00032879;
    g_frontnet_bss_00335192 = g_frontnet_bss_00335192 + 8;
  }
  if (g_frontnet_bss_00335192 < -0x30) {
    g_frontnet_bss_00335192 = -0x30;
  }
  else if (0x30 < g_frontnet_bss_00335192) {
    g_frontnet_bss_00335192 = 0x30;
  }
LAB_00032879:
  val = get_scaled_viewport_bottom_y();
  if (val < 8) {
    g_frontnet_bss_00335196 = g_frontnet_bss_00335196 + -8;
  }
  else {
    uval = get_scaled_viewport_bottom_y();
    if ((int)uval < (int)((ulonglong)uval >> 0x20)) {
      return;
    }
    g_frontnet_bss_00335196 = g_frontnet_bss_00335196 + 8;
  }
  if (-0x31 < g_frontnet_bss_00335196) {
    if (0x30 < g_frontnet_bss_00335196) {
      g_frontnet_bss_00335196 = 0x30;
    }
    return;
  }
  g_frontnet_bss_00335196 = 0xffffffd0;
  return;
}

/******************************************************************************
 * Function : frontmap_fn_0328e1 (Original VA: 0x328e1, Ghidra: FUN_000328e1)
 * Prototype: void frontmap_fn_0328e1(void);
 * Address  : 0x328e1 (Size: 205 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Purpose  : Module frontmap.cpp procedure @ 0x0328e1
 * Callers  : 2 -> frontmap_fn_031273, frontmap_fn_031c23
 * Callees  : 0 -> 
 ******************************************************************************/
void frontmap_fn_0328e1(void)

{
  int val;
  
  if (g_frontnet_bss_00335192 != 0) {
    g_frontnet_bss_00335182 = g_frontnet_bss_00335182 +
                   ((int)((g_frontnet_bss_00335192 + (g_frontnet_bss_00335192 >> 0x1f) * -4) -
                         (uint)((g_frontnet_bss_00335192 >> 0x1f) << 1 < 0)) >> 2);
    if (g_frontnet_bss_00335182 < 0) {
      g_frontnet_bss_00335182 = 0;
    }
    else if (0x500 - g_screen_width < g_frontnet_bss_00335182) {
      g_frontnet_bss_00335182 = 0x500 - g_screen_width;
    }
    if (g_frontnet_bss_00335192 < 0) {
      val = 2;
    }
    else {
      val = -2;
    }
    g_frontnet_bss_00335192 = g_frontnet_bss_00335192 + val;
  }
  if (g_frontnet_bss_00335196 != 0) {
    g_frontnet_bss_00335186 = g_frontnet_bss_00335186 +
                   ((int)((g_frontnet_bss_00335196 + (g_frontnet_bss_00335196 >> 0x1f) * -4) -
                         (uint)((g_frontnet_bss_00335196 >> 0x1f) << 1 < 0)) >> 2);
    if (g_frontnet_bss_00335186 < 0) {
      g_frontnet_bss_00335186 = 0;
    }
    else if (0x3c0 - g_screen_height < g_frontnet_bss_00335186) {
      g_frontnet_bss_00335186 = 0x3c0 - g_screen_height;
    }
    if (g_frontnet_bss_00335196 < 0) {
      val = 2;
    }
    else {
      val = -2;
    }
    g_frontnet_bss_00335196 = g_frontnet_bss_00335196 + val;
  }
  return;
}

/******************************************************************************
 * Function : frontmap_enough_memory_game_structure_0329ae (Original VA: 0x329ae, Ghidra: FUN_000329ae)
 * Prototype: longlong frontmap_enough_memory_game_structure_0329ae(void);
 * Address  : 0x329ae (Size: 371 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp lines 1916, 2007
 * Purpose  : String 'Not enough memory in game structure for map'
 * Callers  : 2 -> frontmap_ldata_dkflag00_dat_030ef8, frontmap_ldata_netflag_dat_031a51
 * Callees  : 8 -> cdtest_ldata_dkwind00_dat_0150f0, frontmap_fn_032b21, prepare_file_path, LbErrorLog, dk_sprintf, LbFileClose, bflib_system_io_fn_0e97a0, bflib_system_io_fn_0e984c
 ******************************************************************************/
longlong frontmap_enough_memory_game_structure_0329ae(void)

{
  undefined4 uval;
  int val;
  int val_2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint arg_edx;
  
  prepare_file_path();
  uval = prepare_file_path();
  dk_sprintf(&g_log_sprintf_buf,s__s_DKMAP_02d_RAW_001641fd,uval);
  val = bflib_system_io_fn_0e97a0();
  if ((val < 0x12c0c6) && (val_2 = bflib_system_io_fn_0e984c(), val_2 == val)) {
    g_frontnet_bss_00335168 = 0x1badec;
    prepare_file_path(extraout_ECX);
    uval = prepare_file_path();
    dk_sprintf(&g_log_sprintf_buf,s__s_DKWIND_02d_DAT_00164276,uval); /* 0x164276="%s\DKWIND%02d.DAT" */
    cdtest_ldata_dkwind00_dat_0150f0();
    val = bflib_system_io_fn_0e984c();
    if (val != -1) {
      g_frontnet_bss_003351a6 = g_bss_002f2223;
      LbFileClose();
      dk_sprintf(&g_log_sprintf_buf,s__s_LDATA_DKMAP_02d_PAL_001642be,&g_bss_002ee923,extraout_ECX_00);
      cdtest_ldata_dkwind00_dat_0150f0();
      val = bflib_system_io_fn_0e984c();
      if (val == 0x300) {
        g_frontnet_bss_003351a2 = g_frontnet_bss_003351a6 + 0xb40;
        return CONCAT44(arg_edx,1);
      }
    }
    LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 1916, "Not enough memory in game structure for map") */
    frontmap_fn_032b21();
  }
  else {
    LbErrorLog(); /* LbErrorLog("frontmap.cpp", line 2007, "Unable to load MAP WINDOW after generate") */
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : frontmap_fn_032b21 (Original VA: 0x32b21, Ghidra: FUN_00032b21)
 * Prototype: void frontmap_fn_032b21(void);
 * Address  : 0x32b21 (Size: 213 bytes)
 * Module   : frontmap.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module frontmap.cpp procedure @ 0x032b21
 * Callers  : 3 -> frontmap_ldata_dkflag00_dat_031213, frontmap_ldata_netflag_dat_031bd6, frontmap_enough_memory_game_structure_0329ae
 * Callees  : 2 -> LbScreenWaitVbi, LbFileClose
 ******************************************************************************/
void frontmap_fn_032b21(void)

{
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbFileClose();
  return;
}

/******************************************************************************
 * Function : frontmap_fn_032bf6 (Original VA: 0x32bf6, Ghidra: FUN_00032bf6)
 * Prototype: void frontmap_fn_032bf6(void);
 * Address  : 0x32bf6 (Size: 314 bytes)
 * Module   : frontmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontmap.cpp procedure @ 0x032bf6
 * Callers  : 1 -> frontmap_fn_032d8c
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
void frontmap_fn_032bf6(void)

{
  int val;
  int val_2;
  undefined8 uval;
  
  val_2 = g_frontnet_bss_0033519e - g_frontnet_bss_00335186;
  if ((g_frontnet_bss_0033519a != g_frontnet_bss_00335182) || (val_2 != 0)) {
    bflib_system_io_fn_0e69fc();
    bflib_system_io_fn_0e69fc();
    uval = bflib_system_io_fn_0e69fc();
    val = (int)uval;
    if (val < 0) {
      val = 0;
    }
    else if (0x3b < val) {
      val = 0x3b;
    }
    if (val < 2) {
      g_frontnet_bss_00335182 = g_frontnet_bss_0033519a;
      g_frontnet_bss_00335186 = g_frontnet_bss_0033519e;
    }
    else {
      g_frontnet_bss_0033518a = g_frontnet_bss_0033518a + ((int)((ulonglong)uval >> 0x20) << 8) / val;
      g_frontnet_bss_0033518e = g_frontnet_bss_0033518e + (val_2 * 0x100) / val;
      g_frontnet_bss_00335182 = g_frontnet_bss_0033518a >> 8;
      g_frontnet_bss_00335186 = g_frontnet_bss_0033518e >> 8;
    }
    if (g_frontnet_bss_00335182 < 0) {
      g_frontnet_bss_00335182 = 0;
    }
    else if (0x500 - g_screen_width < g_frontnet_bss_00335182) {
      g_frontnet_bss_00335182 = 0x500 - g_screen_width;
    }
    if (g_frontnet_bss_00335186 < 0) {
      g_frontnet_bss_00335186 = 0;
    }
    else if (0x3c0 - g_screen_height < g_frontnet_bss_00335186) {
      g_frontnet_bss_00335186 = 0x3c0 - g_screen_height;
    }
  }
  if ((0 < g_frontnet_bss_003351f6) &&
     (val_2 = g_frontnet_bss_00335172 + -1 >> 0x1f,
     g_frontnet_bss_003351f6 = ((int)((g_frontnet_bss_00335172 + -1 + val_2 * -4) - (uint)(val_2 << 1 < 0)) >> 2) * -5 +
                    0x100, g_frontnet_bss_003351f6 < 0)) {
    g_frontnet_bss_003351f6 = 0;
  }
  return;
}

/******************************************************************************
 * Function : frontmap_fn_032d30 (Original VA: 0x32d30, Ghidra: FUN_00032d30)
 * Prototype: void frontmap_fn_032d30(void);
 * Address  : 0x32d30 (Size: 92 bytes)
 * Module   : frontmap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module frontmap.cpp procedure @ 0x032d30
 * Callers  : 1 -> frontmap_fn_032d8c
 * Callees  : 2 -> LbPaletteSet, bflib_system_io_fn_0e8d80
 ******************************************************************************/
void frontmap_fn_032d30(void)

{
  if (g_frontnet_bss_0033516e < 0) {
    if (g_frontnet_bss_00335172 < 0x79) {
      return;
    }
    if (g_frontnet_bss_00335172 + g_frontnet_bss_0033516e < 0x79) {
      LbPaletteSet(&g_frontnet_bss_00334740);
      return;
    }
  }
  else if (g_frontnet_bss_00335172 < 0x78) {
    return;
  }
  bflib_system_io_fn_0e8d80();
  return;
}

/******************************************************************************
 * Function : frontmap_fn_032d8c (Original VA: 0x32d8c, Ghidra: FUN_00032d8c)
 * Prototype: undefined4 frontmap_fn_032d8c(void);
 * Address  : 0x32d8c (Size: 116 bytes)
 * Module   : frontmap.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module frontmap.cpp procedure @ 0x032d8c
 * Callers  : 2 -> frontmap_fn_031854, frontmap_LbNetwork_Exchange_031def
 * Callees  : 6 -> frontend_load_frontend_palette_02e8a7, frontmap_fn_032bf6, frontmap_fn_032d30, bflib_system_io_fn_0e7904, bflib_system_io_fn_0e79fc, bflib_system_io_fn_0e8f24
 ******************************************************************************/
undefined4 frontmap_fn_032d8c(void)

{
  if (g_frontnet_bss_0033516e == 4) {
    frontmap_fn_032bf6();
  }
  g_frontnet_bss_00335172 = g_frontnet_bss_00335172 + g_frontnet_bss_0033516e;
  if ((g_frontnet_bss_00335172 < 2) || (0xef < g_frontnet_bss_00335172)) {
    bflib_system_io_fn_0e8f24();
    g_frontnet_bss_0033516d = 0;
    if (g_frontnet_bss_0033517e != 0) {
      frontend_load_frontend_palette_02e8a7();
      bflib_system_io_fn_0e7904(0);
      bflib_system_io_fn_0e79fc();
      g_frontnet_bss_0033517e = 0;
      return 1;
    }
  }
  frontmap_fn_032d30();
  return 0;
}

/******************************************************************************
 * Function : frontmap_fn_032e00 (Original VA: 0x32e00, Ghidra: FUN_00032e00)
 * Prototype: undefined8 frontmap_fn_032e00(void);
 * Address  : 0x32e00 (Size: 274 bytes)
 * Module   : frontmap.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module frontmap.cpp procedure @ 0x032e00
 * Callers  : 1 -> frontmap_LbNetwork_Exchange_031def
 * Callees  : 1 -> frontnet_fn_032f12
 ******************************************************************************/
undefined8 frontmap_fn_032e00(void)

{
  int arg_eax;
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  int val_2;
  int val_3;
  int val_4;
  
  val = (int)g_my_player_word._3_1_;
  if (val != arg_eax) {
    if ((byte)(&g_frontnet_player_lobby_state)[val * 0xc] >> 3 != 2) {
      if ((byte)(&g_frontnet_player_lobby_state)[val * 0xc] >> 3 == 1) {
        val_3 = (ushort)(&g_frontnet_bss_003358f5)[val * 6] - 0x1f;
        val = (ushort)(&g_frontnet_bss_003358f7)[val * 6] - 0x1b;
        val_4 = val_3 + (uint)*(byte *)(g_frontnet_bss_003351c2 + 0x3a);
        val_2 = g_frontnet_bss_003351c2 + 0x36;
      }
      else if ((&g_frontnet_bss_003358f9)[val * 0xc] == -1) {
        val_3 = (ushort)(&g_frontnet_bss_003358f5)[val * 6] - 0x13;
        val = (ushort)(&g_frontnet_bss_003358f7)[val * 6] - 0x19;
        val_4 = val_3 + (uint)*(byte *)(g_frontnet_bss_003351c2 + 10);
        val_2 = g_frontnet_bss_003351c2 + 6;
      }
      else {
        val_3 = (ushort)(&g_frontnet_bss_003358f5)[val * 6] - 0x14;
        val = (ushort)(&g_frontnet_bss_003358f7)[val * 6] - 0xe;
        val_4 = val_3 + (uint)*(byte *)(g_frontnet_bss_003351c2 + 0x6a);
        val_2 = g_frontnet_bss_003351c2 + 0x66;
      }
      val = frontnet_fn_032f12(val_3,val,val_4,val + (uint)*(byte *)(val_2 + 5),
                           (ushort)(&g_frontnet_bss_003358f5)[arg_eax * 6] - 7,
                           (ushort)(&g_frontnet_bss_003358f7)[arg_eax * 6] - 0xd,
                           (ushort)(&g_frontnet_bss_003358f5)[arg_eax * 6] + 0x17,
                           (ushort)(&g_frontnet_bss_003358f7)[arg_eax * 6] + 7);
      uval = 0;
      if (val != 0) {
        uval = 1;
      }
      goto LAB_00032f0c;
    }
  }
  uval = 0;
LAB_00032f0c:
  return CONCAT44(arg_edx,uval);
}

