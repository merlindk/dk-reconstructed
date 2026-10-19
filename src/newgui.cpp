/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: newgui.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 240
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : newgui_fn_052988 (Original VA: 0x52988, Ghidra: FUN_00052988)
 * Prototype: void newgui_fn_052988(void);
 * Address  : 0x52988 (Size: 49 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Purpose  : Module newgui.cpp procedure @ 0x052988
 * Callers  : 1 -> moodneed_fn_052934
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_052988(void)

{
  g_bss_0034b25d = g_display_bss_003d987c;
  g_bss_0034b268 = g_display_bss_003d985c * (uint)g_units_per_pixel;
  g_bss_0034b26c = (uint)g_units_per_pixel * g_display_bss_003d9860;
  return;
}

/******************************************************************************
 * Function : newgui_fn_0529b9 (Original VA: 0x529b9, Ghidra: FUN_000529b9)
 * Prototype: void newgui_fn_0529b9(void);
 * Address  : 0x529b9 (Size: 207 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Purpose  : Module newgui.cpp procedure @ 0x0529b9
 * Callers  : 1 -> moodneed_fn_052934
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_0529b9(void)

{
  g_bss_0034b25a = 0;
  g_bss_0034b25e = 0;
  if (g_display_bss_003d987b != '\0') {
    g_bss_0034b258 = '\x01';
    g_bss_0034b280 = g_graphics_window_width * (uint)g_units_per_pixel;
    g_bss_0034b284 = (uint)g_units_per_pixel * g_graphics_window_height;
  }
  if (g_bss_0034b258 == '\0') {
    if (g_bss_0034b2a0 < 0x7fffffff) {
      g_bss_0034b2a0 = g_bss_0034b2a0 + 1;
    }
  }
  else if (g_display_bss_003d987e == '\0') {
    g_bss_0034b258 = 0;
    g_bss_0034b25a = 1;
    g_bss_0034b270 = g_graphics_window_width * (uint)g_units_per_pixel;
    g_bss_0034b274 = (uint)g_units_per_pixel * g_graphics_window_height;
    if (g_bss_0034b2a0 < 5) {
      g_bss_0034b290 = g_bss_0034b270;
      g_bss_0034b294 = g_bss_0034b274;
    }
    g_bss_0034b25e = g_bss_0034b2a0 < 5;
    g_bss_0034b2a0 = 0;
    return;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_052a88 (Original VA: 0x52a88, Ghidra: FUN_00052a88)
 * Prototype: void newgui_fn_052a88(void);
 * Address  : 0x52a88 (Size: 207 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Purpose  : Module newgui.cpp procedure @ 0x052a88
 * Callers  : 1 -> moodneed_fn_052934
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_052a88(void)

{
  g_bss_0034b25b = 0;
  g_bss_0034b25f = 0;
  if (g_display_bss_003d987c != '\0') {
    g_bss_0034b259 = '\x01';
    g_bss_0034b288 = g_graphics_window_width * (uint)g_units_per_pixel;
    g_bss_0034b28c = (uint)g_units_per_pixel * g_graphics_window_height;
  }
  if (g_bss_0034b259 == '\0') {
    if (g_bss_0034b2a4 < 0x7fffffff) {
      g_bss_0034b2a4 = g_bss_0034b2a4 + 1;
    }
  }
  else if (g_display_bss_003d987f == '\0') {
    g_bss_0034b259 = 0;
    g_bss_0034b25b = 1;
    g_bss_0034b278 = g_graphics_window_width * (uint)g_units_per_pixel;
    g_bss_0034b27c = (uint)g_units_per_pixel * g_graphics_window_height;
    if (g_bss_0034b2a4 < 5) {
      g_bss_0034b298 = g_bss_0034b278;
      g_bss_0034b29c = g_bss_0034b27c;
    }
    g_bss_0034b25f = g_bss_0034b2a4 < 5;
    g_bss_0034b2a4 = 0;
    return;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_052b58 (Original VA: 0x52b58, Ghidra: FUN_00052b58)
 * Prototype: bool newgui_fn_052b58(void);
 * Address  : 0x52b58 (Size: 15 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Purpose  : Module newgui.cpp procedure @ 0x052b58
 * Callers  : 7 -> input_draw_text_overlay_049426, newgui_draw_text_overlay_05449e, newgui_fn_05ae90, newgui_fn_05aee2, newgui_fn_05afda, newgui_fn_05c2e3, newgui_fn_05c985
 * Callees  : 1 -> newgui_fn_053c6b
 ******************************************************************************/
bool newgui_fn_052b58(void)

{
  int val;
  
  val = newgui_fn_053c6b();
  return val != -1;
}

/******************************************************************************
 * Function : newgui_more_room_menu_stack_052b67 (Original VA: 0x52b67, Ghidra: FUN_00052b67)
 * Prototype: void newgui_more_room_menu_stack_052b67(void);
 * Address  : 0x52b67 (Size: 128 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 1907
 * Purpose  : String 'NO MORE ROOM FOR MENU STACK'
 * Callers  : 1 -> newgui_oi_there_fade_time_053ccc
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void newgui_more_room_menu_stack_052b67(void)

{
  byte arg_al;
  uint uval;
  char ch;
  uint uval_2;
  int val;
  
  if ('\a' < g_bss_0034cf04) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 1907, "NO MORE ROOM FOR MENU STACK") */
    return;
  }
  val = (int)g_bss_0034cf04;
  uval_2 = (uint)arg_al << 8;
  while( true ) {
    ch = (char)(uval_2 >> 8);
    if (val <= (int)(uval_2 & 0xff)) {
      g_bss_0034cf04 = g_bss_0034cf04 + '\x01';
      (&g_bss_0034cefc)[val] = ch;
      return;
    }
    if (ch == (&g_bss_0034cefc)[uval_2 & 0xff]) break;
    uval_2 = CONCAT31((int3)(uval_2 >> 8),(char)uval_2 + '\x01');
  }
  while( true ) {
    uval = uval_2 & 0xff;
    if (g_bss_0034cf04 + -1 <= (int)uval) break;
    uval_2 = CONCAT31((int3)(uval_2 >> 8),(char)uval_2 + '\x01');
    (&g_bss_0034cefc)[uval] = (&g_bss_0034cefd)[uval];
  }
  (&g_bss_0034cefb)[g_bss_0034cf04] = (char)(uval_2 >> 8);
  return;
}

/******************************************************************************
 * Function : newgui_fn_052be7 (Original VA: 0x52be7, Ghidra: FUN_00052be7)
 * Prototype: void newgui_fn_052be7(void);
 * Address  : 0x52be7 (Size: 86 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x052be7
 * Callers  : 3 -> newgui_draw_text_overlay_05449e, newgui_fn_05b25b, newgui_fn_05c848
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_052be7(void)

{
  byte arg_al;
  uint uval;
  uint uval_2;
  
  uval_2 = (uint)arg_al << 8;
  while( true ) {
    if ((int)g_bss_0034cf04 <= (int)(uval_2 & 0xff)) break;
    if ((char)(uval_2 >> 8) == (&g_bss_0034cefc)[uval_2 & 0xff]) goto LAB_00052c17;
    uval_2 = CONCAT31((int3)(uval_2 >> 8),(char)uval_2 + '\x01');
  }
LAB_00052c26:
  if ((uval_2 & 0xff) != (int)g_bss_0034cf04) {
    g_bss_0034cf04 = g_bss_0034cf04 + -1;
  }
  return;
LAB_00052c17:
  while( true ) {
    uval = uval_2 & 0xff;
    if (g_bss_0034cf04 + -1 <= (int)uval) break;
    (&g_bss_0034cefc)[uval] = (&g_bss_0034cefd)[uval];
    uval_2 = (uint)(byte)((char)uval_2 + 1);
  }
  goto LAB_00052c26;
}

/******************************************************************************
 * Function : newgui_fn_052c47 (Original VA: 0x52c47, Ghidra: FUN_00052c47)
 * Prototype: void newgui_fn_052c47(void);
 * Address  : 0x52c47 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x052c47
 * Callers  : 1 -> newgui_fn_05c4f3
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_052c47(void)

{
  g_bss_002ee385 = 0;
  g_bss_002ee389 = 0;
  g_bss_002ee38a = 0;
  g_bss_002ee38e = 0;
  return;
}

/******************************************************************************
 * Function : newgui_fn_052c6d (Original VA: 0x52c6d, Ghidra: FUN_00052c6d)
 * Prototype: void newgui_fn_052c6d(void);
 * Address  : 0x52c6d (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x052c6d
 * Callers  : 0 -> 
 * Callees  : 3 -> file_fn_02c6e2, set_packet_action, dk_sprintf
 ******************************************************************************/
void newgui_fn_052c6d(void)

{
  byte flag;
  char extraout_DL;
  uint uval;
  int val;
  
  set_packet_action(0,0);
  file_fn_02c6e2();
  flag = 0;
  while (uval = (uint)flag, uval < 8) {
    val = g_bss_003336f3;
    if ((&g_bss_002e6ff4)[uval * 0x11] != '\0') {
      val = uval * 0x11 + 0x2e6ff6;
    }
    dk_sprintf(&g_bss_0034cf63 + uval * 0x10,val);
    flag = extraout_DL + 1;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_052ced (Original VA: 0x52ced, Ghidra: FUN_00052ced)
 * Prototype: void newgui_fn_052ced(void);
 * Address  : 0x52ced (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x052ced
 * Callers  : 0 -> 
 * Callees  : 3 -> file_fn_02c6e2, set_packet_action, dk_sprintf
 ******************************************************************************/
void newgui_fn_052ced(void)

{
  byte flag;
  char extraout_DL;
  uint uval;
  int val;
  
  set_packet_action(0,0);
  file_fn_02c6e2();
  flag = 0;
  while (uval = (uint)flag, uval < 8) {
    val = g_bss_003336f3;
    if ((&g_bss_002e6ff4)[uval * 0x11] != '\0') {
      val = uval * 0x11 + 0x2e6ff6;
    }
    dk_sprintf(&g_bss_0034cf63 + uval * 0x10,val);
    flag = extraout_DL + 1;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_052d6d (Original VA: 0x52d6d, Ghidra: FUN_00052d6d)
 * Prototype: void newgui_fn_052d6d(void);
 * Address  : 0x52d6d (Size: 51 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x052d6d
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_052d6d(void)

{
  g_bss_0034cf1a = g_bss_002ee8d2;
  g_bss_0034cf1b = g_bss_002ee8d3;
  g_bss_0034cf1c = g_bss_002ee8d5;
  g_bss_0034cf1d = g_bss_002ee8d6;
  g_bss_0034cf1e = g_bss_002ee8da;
  return;
}

/******************************************************************************
 * Function : newgui_fn_052da0 (Original VA: 0x52da0, Ghidra: FUN_00052da0)
 * Prototype: void newgui_fn_052da0(void);
 * Address  : 0x52da0 (Size: 25 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x052da0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_052da0(void)

{
  g_bss_0034cf11 = (uint)g_bss_002ee8d8;
  g_bss_0034cf0d = (uint)g_bss_002ee8d7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052def (Original VA: 0x52def, Ghidra: FUN_00052def)
 * Prototype: void newgui_maintain_gui_button_state_052def(void);
 * Address  : 0x52def (Size: 78 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 1 -> newgui_fn_053c6b
 ******************************************************************************/
void newgui_maintain_gui_button_state_052def(void)

{
  char ch;
  byte *gui_btn;
  uint uval;
  
  if (*(short *)(&g_bss_002e059c + g_my_player_word._3_1_ * 0x1508) != 0) {
    gui_btn[0x29] = 0x5e;
    gui_btn[0x2a] = 1;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x29] = 0x62;
  gui_btn[0x2a] = 1;
  *gui_btn = *gui_btn & 0xf7;
  if (gui_btn[1] != 0) {
    ch = newgui_fn_053c6b();
    if (ch != -1) {
      uval = 0;
      do {
        uval = uval + 1;
      } while (uval < 0x56);
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052e3d (Original VA: 0x52e3d, Ghidra: FUN_00052e3d)
 * Prototype: void newgui_maintain_gui_button_state_052e3d(void);
 * Address  : 0x52e3d (Size: 66 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052e3d(void)

{
  byte *gui_btn;
  
  if ((gui_btn[0x33] != (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) &&
     (((&g_players)[(uint)gui_btn[0x33] * 0x4ef] & 1) != 0)) {
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *gui_btn = *gui_btn | 8;
    return;
  }
  *gui_btn = *gui_btn & 0xf7;
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052e7f (Original VA: 0x52e7f, Ghidra: FUN_00052e7f)
 * Prototype: void newgui_maintain_gui_button_state_052e7f(void);
 * Address  : 0x52e7f (Size: 46 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052e7f(void)

{
  byte *gui_btn;
  
  if ((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x05') {
    *gui_btn = *gui_btn & 0xf7;
    gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
    return;
  }
  gui_btn[0x1b] = 0;
  gui_btn[0x1c] = 0;
  *gui_btn = *gui_btn | 8;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052ead (Original VA: 0x52ead, Ghidra: FUN_00052ead)
 * Prototype: void newgui_maintain_gui_button_state_052ead(void);
 * Address  : 0x52ead (Size: 17 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052ead(void)

{
  byte *gui_btn;
  
  if ((g_game_system_flags & 1) != 0) {
    *gui_btn = *gui_btn & 0xf7;
    return;
  }
  *gui_btn = *gui_btn | 8;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052ebe (Original VA: 0x52ebe, Ghidra: FUN_00052ebe)
 * Prototype: void newgui_maintain_gui_button_state_052ebe(void);
 * Address  : 0x52ebe (Size: 42 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052ebe(void)

{
  int val;
  int val_2;
  int val_3;
  byte *gui_btn;
  
  val = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  val_2 = *(int *)(val + 0x409);
  val_3 = *(int *)(val + 0x405);
  val = *(int *)(val + 0x400);
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | ((val_2 - val_3) + 2 < val) << 3;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052ee8 (Original VA: 0x52ee8, Ghidra: FUN_00052ee8)
 * Prototype: void newgui_maintain_gui_button_state_052ee8(void);
 * Address  : 0x52ee8 (Size: 27 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052ee8(void)

{
  int val;
  byte *gui_btn;
  
  val = *(int *)(*(int *)(gui_btn + 0x33) + 0x400); /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (val < 0) << 3;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052f03 (Original VA: 0x52f03, Ghidra: FUN_00052f03)
 * Prototype: void newgui_maintain_gui_button_state_052f03(void);
 * Address  : 0x52f03 (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052f03(void)

{
  int val;
  int val_2;
  byte *gui_btn;
  
  val_2 = *(int *)(*(int *)(gui_btn + 0x33) + 0x409); /* gui_btn->content */
  val = *(int *)(*(int *)(gui_btn + 0x33) + 0x405); /* gui_btn->content */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (val_2 < val) << 3;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052f16 (Original VA: 0x52f16, Ghidra: FUN_00052f16)
 * Prototype: void newgui_maintain_gui_button_state_052f16(void);
 * Address  : 0x52f16 (Size: 46 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052f16(void)

{
  char ch;
  byte *gui_btn;
  
  ch = g_bss_0034d0e5;
  if ('\x06' < g_bss_0034d0e4) {
    *gui_btn = *gui_btn | 4;
    *gui_btn = *gui_btn & 0xf7;
    *gui_btn = *gui_btn | ('\0' < ch) << 3;
    return;
  }
  *gui_btn = *gui_btn & 0xf3;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_052f44 (Original VA: 0x52f44, Ghidra: FUN_00052f44)
 * Prototype: void newgui_maintain_gui_button_state_052f44(void);
 * Address  : 0x52f44 (Size: 52 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_052f44(void)

{
  byte *gui_btn;
  int val;
  int val_2;
  
  val = (int)g_bss_0034d0e4;
  if (6 < val) {
    val_2 = (int)g_bss_0034d0e5;
    *gui_btn = *gui_btn | 4;
    *gui_btn = *gui_btn & 0xf7;
    *gui_btn = *gui_btn | (val_2 < val + -6) << 3;
    return;
  }
  *gui_btn = *gui_btn & 0xf3;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_052f78 (Original VA: 0x52f78, Ghidra: FUN_00052f78)
 * Prototype: void newgui_update_player_view_state_052f78(void);
 * Address  : 0x52f78 (Size: 169 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> event_fn_027824, evil_process_thing_entity_027892
 * Callees  : 1 -> sound_non_emitter_has_been_06e9ab
 ******************************************************************************/
void newgui_update_player_view_state_052f78(void)

{
  int val;
  int arg_eax;
  int val_2;
  int extraout_ECX;
  int val_3;
  int extraout_EDX;
  
  val_2 = 0;
  val = arg_eax;
  do {
    val_3 = val + 1;
    if ((*(char *)(val + 0x13a8) != '\0') && (*(char *)(val + 0x13a7) == '\0')) {
      *(undefined1 *)(val + 0x13a7) = *(undefined1 *)(val + 0x13a8);
      *(undefined1 *)(val + 0x13a8) = 0;
      if (((&g_bss_002e7090)[(uint)*(byte *)(val + 0x13a7) * 0x15] != '\0') &&
         ((val_2 == 0 || ((0 < val_2 && (*(char *)(val + 0x13a6) != '\0')))))) {
        if ((int)*(char *)(arg_eax + 0xe9f) ==
            (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
          sound_non_emitter_has_been_06e9ab();
          val_2 = extraout_ECX;
          val_3 = extraout_EDX;
        }
        (&g_bss_002e7090)[(uint)*(byte *)(val_3 + 0x13a6) * 0x15] = 0;
      }
    }
    val_2 = val_2 + 1;
    val = val_3;
  } while (val_2 != 0xc);
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053021 (Original VA: 0x53021, Ghidra: FUN_00053021)
 * Prototype: void newgui_maintain_gui_button_state_053021(void);
 * Address  : 0x53021 (Size: 316 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_fn_05c377, newgui_fn_05c985
 ******************************************************************************/
void newgui_maintain_gui_button_state_053021(void)

{
  byte flag;
  undefined2 uval;
  byte *gui_btn;
  int dungeon_off;
  uint uval_2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  uint uval_3;
  
  flag = gui_btn[0x33];
  dungeon_off = g_my_player_word._3_1_ * 0x1508;
  uval_2 = (uint)flag;
  if (((&g_bss_002e16fc)[dungeon_off] != '\0') &&
     (uval_2 = (uint)CONCAT11((&g_bss_002e16fc)[dungeon_off],flag),
     (&g_bss_002e16fc)[dungeon_off] == (&g_bss_002e1930)[dungeon_off + (uint)flag])) {
    newgui_fn_05c985();
    uval_2 = extraout_ECX;
    gui_btn = extraout_EDX;
  }
  dungeon_off = (uval_2 & 0xff) + g_my_player_word._3_1_ * 0x1508;
  if ((&g_bss_002e1930)[dungeon_off] != '\0') {
    uval_3 = (uint)(byte)(&g_bss_002e7087)[(uint)(byte)(&g_bss_002e1930)[dungeon_off] * 0x15];
    if ((uval_3 == 3) && (g_bss_0034cf15 != '\0')) {
      newgui_fn_05c377();
      uval_2 = extraout_ECX_00;
      gui_btn = extraout_EDX_00;
    }
    *(undefined2 *)(gui_btn + 0x29) = *(undefined2 *)(&g_data_0019137a + uval_3 * 0x10);
    if (((uval_3 == 2) &&
        (((*(int *)(&g_bss_002e707e +
                   (uint)(byte)(&g_bss_002e1930)[g_my_player_word._3_1_ * 0x1508 + (uval_2 & 0xff)] * 0x15)
           != 0 || (*(int *)(&g_bss_002e7082 +
                            (uint)(byte)(&g_bss_002e1930)
                                        [g_my_player_word._3_1_ * 0x1508 + (uval_2 & 0xff)] * 0x15) != 0)
          ) && (((byte)g_game_turn & 1) != 0)))) ||
       (((uval_3 == 0x15 && (((byte)g_game_turn & 1) != 0)) &&
        (*(int *)(&g_bss_002e7088 +
                 (uint)(byte)(&g_bss_002e1930)[g_my_player_word._3_1_ * 0x1508 + (uval_2 & 0xff)] * 0x15) <
         0)))) {
      *(short *)(gui_btn + 0x29) = *(short *)(gui_btn + 0x29) + 2;
    }
    uval = *(undefined2 *)(&g_data_0019137e + uval_3 * 0x10);
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *(undefined2 *)(gui_btn + 0x2b) = uval;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x29] = 0;
  gui_btn[0x2a] = 0;
  gui_btn[1] = 0;
  gui_btn[2] = 0;
  gui_btn[0x2b] = 0xc9;
  gui_btn[0x2c] = 0;
  gui_btn[0x1c] = gui_btn[0x1c] | 0x40;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_05315d (Original VA: 0x5315d, Ghidra: FUN_0005315d)
 * Prototype: void newgui_maintain_gui_button_state_05315d(void);
 * Address  : 0x5315d (Size: 43 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_05315d(void)

{
  byte *gui_btn;
  
  if (((&g_players)[*(int *)(gui_btn + 0x33) * 0x4ef] & 1) != 0) { /* gui_btn->content */
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x2b] = 0xc9;
  gui_btn[0x2c] = 0;
  gui_btn[0x1c] = gui_btn[0x1c] | 0x40;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053188 (Original VA: 0x53188, Ghidra: FUN_00053188)
 * Prototype: void newgui_maintain_gui_button_state_053188(void);
 * Address  : 0x53188 (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053188(void)

{
  char dungeon_off;
  byte *gui_btn;
  uint uval;
  int val;
  
  if (*(short *)(gui_btn + 0x1b) == 0) { /* gui_btn->id_num */
    uval = 0x17;
  }
  else {
    uval = (uint)(ushort)(&g_bss_0034d1a8)[(int)*(short *)(gui_btn + 0x1b) + (int)g_bss_0034d0e5]; /* gui_btn->id_num */
  }
  if (uval == 0x17) {
    dungeon_off = (&g_bss_002e0ea1)[g_my_player_word._3_1_ * 0x1508];
  }
  else {
    dungeon_off = (&g_bss_002e0ea3)[g_my_player_word._3_1_ * 0x1508 + uval];
  }
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (dungeon_off != '\0') << 3;
  val = (int)g_bss_0034d0e4;
  *gui_btn = *gui_btn & 0xfb;
  *gui_btn = *gui_btn | (*(short *)(gui_btn + 0x1b) < val) << 2; /* gui_btn->id_num */
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053208 (Original VA: 0x53208, Ghidra: FUN_00053208)
 * Prototype: void newgui_maintain_gui_button_state_053208(void);
 * Address  : 0x53208 (Size: 56 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053208(void)

{
  byte *gui_btn;
  
  if ((&g_bss_002e1507)[(uint)gui_btn[0x33] + g_my_player_word._3_1_ * 0x1508] != '\0') {
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053240 (Original VA: 0x53240, Ghidra: FUN_00053240)
 * Prototype: void newgui_maintain_gui_button_state_053240(void);
 * Address  : 0x53240 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053240(void)

{
  byte *gui_btn;
  
  *(int *)(gui_btn + 0x33) = g_bss_002ee8ad; /* gui_btn->content */
  *(undefined2 *)(gui_btn + 0x29) = (undefined2)g_bss_002ee8b1;
  *(undefined2 *)(gui_btn + 0x2b) = (undefined2)g_bss_002ee8b5;
  if ((&g_bss_002e1507)[g_my_player_word._3_1_ * 0x1508 + g_bss_002ee8ad] != '\0') {
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053290 (Original VA: 0x53290, Ghidra: FUN_00053290)
 * Prototype: void newgui_maintain_gui_button_state_053290(void);
 * Address  : 0x53290 (Size: 118 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053290(void)

{
  byte flag;
  byte *gui_btn;
  
  flag = gui_btn[0x33];
  if ((&g_bss_002e1569)[g_my_player_word._3_1_ * 0x1508 + (uint)flag] != '\0') {
    if (flag == 0x13) {
      if (g_bss_002ed402 == 0) {
        gui_btn[0x1b] = 0;
        gui_btn[0x1c] = 0;
        *gui_btn = *gui_btn | 8;
      }
      else {
        gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
        *gui_btn = *gui_btn & 0xf7;
      }
    }
    if ((flag != 9) || (*(int *)(&g_bss_002e0e15 + g_my_player_word._3_1_ * 0x1508) == 0)) {
      gui_btn[0x1b] = 0;
      gui_btn[0x1c] = 0;
      *gui_btn = *gui_btn | 8;
      return;
    }
  }
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053306 (Original VA: 0x53306, Ghidra: FUN_00053306)
 * Prototype: void newgui_maintain_gui_button_state_053306(void);
 * Address  : 0x53306 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053306(void)

{
  byte *gui_btn;
  
  *(int *)(gui_btn + 0x33) = g_bss_002ee8b9; /* gui_btn->content */
  *(undefined2 *)(gui_btn + 0x29) = (undefined2)g_bss_002ee8bd;
  *(undefined2 *)(gui_btn + 0x2b) = (undefined2)g_bss_002ee8c1;
  if ((&g_bss_002e1569)[g_my_player_word._3_1_ * 0x1508 + g_bss_002ee8b9] != '\0') {
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053356 (Original VA: 0x53356, Ghidra: FUN_00053356)
 * Prototype: void newgui_maintain_gui_button_state_053356(void);
 * Address  : 0x53356 (Size: 144 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053356(void)

{
  byte *gui_btn;
  
  *(int *)(gui_btn + 0x33) = g_bss_002ee8c5; /* gui_btn->content */
  *(undefined2 *)(gui_btn + 0x29) = (undefined2)g_bss_002ee8c9;
  *(undefined2 *)(gui_btn + 0x2b) = (undefined2)g_bss_002ee8cd;
  if (((*(int *)(&g_data_0018ed31 + g_bss_002ee8c5 * 0x10) != 0x10) ||
      ((&g_bss_002e1591)[g_my_player_word._3_1_ * 0x1508 + g_bss_002ee8c5] == '\0')) &&
     ((*(int *)(&g_data_0018ed31 + g_bss_002ee8c5 * 0x10) != 0x12 ||
      ((&g_bss_002e15a6)[g_my_player_word._3_1_ * 0x1508 + g_bss_002ee8c5] == '\0')))) {
    gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
    *gui_btn = *gui_btn & 0xf7;
    return;
  }
  gui_btn[0x1b] = 0;
  gui_btn[0x1c] = 0;
  *gui_btn = *gui_btn | 8;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_0533e6 (Original VA: 0x533e6, Ghidra: FUN_000533e6)
 * Prototype: void newgui_maintain_gui_button_state_0533e6(void);
 * Address  : 0x533e6 (Size: 56 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_0533e6(void)

{
  byte *gui_btn;
  
  if ((&g_bss_002e159f)[(uint)gui_btn[0x33] + g_my_player_word._3_1_ * 0x1508] != '\0') {
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_05341e (Original VA: 0x5341e, Ghidra: FUN_0005341e)
 * Prototype: void newgui_maintain_gui_button_state_05341e(void);
 * Address  : 0x5341e (Size: 63 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_05341e(void)

{
  byte *gui_btn;
  
  if ((&g_bss_002e15b0)
      [g_my_player_word._3_1_ * 0x1508 + (uint)(byte)(&g_data_0018ed35)[(uint)gui_btn[0x33] * 0x10]] != '\0'
     ) {
    gui_btn[0x1b] = 0;
    gui_btn[0x1c] = 0;
    *gui_btn = *gui_btn | 8;
    return;
  }
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05345d (Original VA: 0x5345d, Ghidra: FUN_0005345d)
 * Prototype: void newgui_fn_05345d(void);
 * Address  : 0x5345d (Size: 136 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05345d
 * Callers  : 1 -> process_players_map_view_packet
 * Callees  : 1 -> instance_update_creature_control_049e95
 ******************************************************************************/
void newgui_fn_05345d(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  int loop_i;
  int val_2;
  
  val_2 = 0;
  for (loop_i = 0; val = 0, loop_i < 10; loop_i = loop_i + 1) {
    val = instance_update_creature_control_049e95();
    if (val != 0) {
      val = val_2;
      if (extraout_ECX == arg_eax) break;
      val_2 = val_2 + 1;
    }
  }
  if ((val < 6) && ((g_bss_0034d1f0 != 0 || (val < 4)))) {
    g_bss_0034d1f0 = 1;
  }
  else {
    g_bss_0034d1f0 = 0;
  }
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_0534e5 (Original VA: 0x534e5, Ghidra: FUN_000534e5)
 * Prototype: void newgui_maintain_gui_button_state_0534e5(void);
 * Address  : 0x534e5 (Size: 415 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 1 -> instance_update_creature_control_049e95
 ******************************************************************************/
void newgui_maintain_gui_button_state_0534e5(void)

{
  char thing_ptr;
  char thing_ptr_2;
  ushort player_off;
  byte *gui_btn;
  int thing_ptr_3;
  int val;
  int extraout_ECX;
  uint thing_ptr_4;
  uint extraout_ECX_00;
  int thing_ptr_5;
  int local_1c;
  int local_18;
  
  player_off = *(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef);
  if (((&g_thing_ptrs)[player_off] != 0) && (*(char *)((&g_thing_ptrs)[player_off] + 0x1f) == '\x05')) {
    local_18 = 0;
    thing_ptr = *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[player_off] + 100)] + 0x1e8);
    thing_ptr_5 = 0;
    val = 0;
    while (thing_ptr_3 = local_18, val < 10) {
      thing_ptr_2 = (&g_bss_002e918d)
              [(uint)*(byte *)((&g_thing_ptrs)
                               [*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)] + 0x1a
                              ) * 0xe6 + val];
      val = instance_update_creature_control_049e95();
      if (val != 0) {
        thing_ptr_3 = thing_ptr_5;
        if (thing_ptr_2 == thing_ptr) break;
        thing_ptr_5 = thing_ptr_5 + 1;
      }
      val = extraout_ECX + 1;
    }
    local_18 = thing_ptr_3;
    if ((local_18 < 6) && ((g_bss_0034d1f0 != 0 || (local_18 < 4)))) {
      val = *(int *)(gui_btn + 0x33); /* gui_btn->content */
      g_bss_0034d1f0 = 1;
    }
    else {
      val = *(int *)(gui_btn + 0x33) + 4; /* gui_btn->content */
      g_bss_0034d1f0 = 0;
    }
    thing_ptr_4 = 0;
    local_1c = 0;
    for (thing_ptr_5 = 0; thing_ptr_5 < 10; thing_ptr_5 = thing_ptr_5 + 1) {
      thing_ptr_4 = (uint)(byte)(&g_bss_002e918d)
                          [thing_ptr_5 + (uint)*(byte *)((&g_thing_ptrs)
                                                   [*(ushort *)
                                                     ((int)&g_bss_0019d0f7 +
                                                     g_my_player_word._3_1_ * 0x4ef)] + 0x1a) * 0xe6];
      thing_ptr_3 = instance_update_creature_control_049e95();
      if (thing_ptr_3 != 0) {
        if (local_1c == val) break;
        local_1c = local_1c + 1;
      }
      thing_ptr_4 = extraout_ECX_00;
    }
    val = thing_ptr_4 * 6;
    if (*(int *)(&g_data_0018ff83 + val) != 0) {
      *(undefined2 *)(gui_btn + 0x29) = *(undefined2 *)(&g_data_0018ff83 + val);
      *(undefined2 *)(gui_btn + 0x2b) = *(undefined2 *)(&g_data_0018ff87 + val);
    }
    if ((thing_ptr_4 != 0) && (val = instance_update_creature_control_049e95(), val != 0)) {
      gui_btn[0x1b] = 0;
      gui_btn[0x1c] = 0;
      *gui_btn = *gui_btn | 8;
      return;
    }
  }
  gui_btn[0x1c] = gui_btn[0x1c] | 0x80;
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053684 (Original VA: 0x53684, Ghidra: FUN_00053684)
 * Prototype: void newgui_maintain_gui_button_state_053684(void);
 * Address  : 0x53684 (Size: 146 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053684(void)

{
  char dungeon_off;
  byte *gui_btn;
  int val;
  byte flag;
  
  if (*(short *)(gui_btn + 0x1b) == 0) { /* gui_btn->id_num */
    flag = 0x17;
  }
  else {
    flag = *(byte *)(&g_bss_0034d1a8 + (int)*(short *)(gui_btn + 0x1b) + (int)g_bss_0034d0e5); /* gui_btn->id_num */
  }
  if (flag == 0x17) {
    dungeon_off = (&g_bss_002e0ea1)[g_my_player_word._3_1_ * 0x1508];
  }
  else {
    dungeon_off = (&g_bss_002e0ea3)[(uint)flag + g_my_player_word._3_1_ * 0x1508];
  }
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (dungeon_off != '\0') << 3;
  val = (int)g_bss_0034d0e4;
  *gui_btn = *gui_btn & 0xfb;
  *gui_btn = *gui_btn | (*(short *)(gui_btn + 0x1b) < val) << 2; /* gui_btn->id_num */
  *(undefined2 *)(gui_btn + 0x29) = *(undefined2 *)(&g_data_00187b9c + (uint)flag * 0x2c);
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_053716 (Original VA: 0x53716, Ghidra: FUN_00053716)
 * Prototype: void newgui_maintain_gui_button_state_053716(void);
 * Address  : 0x53716 (Size: 61 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_053716(void)

{
  byte *gui_btn;
  
  if (((&g_bss_002e16fc)[g_my_player_word._3_1_ * 0x1508] != '\0') &&
     ((*(int *)(&g_bss_002e707e + (uint)(byte)(&g_bss_002e16fc)[g_my_player_word._3_1_ * 0x1508] * 0x15) !=
       0 || (*(int *)(&g_bss_002e7082 +
                     (uint)(byte)(&g_bss_002e16fc)[g_my_player_word._3_1_ * 0x1508] * 0x15) != 0)))) {
    *gui_btn = *gui_btn | 8;
    return;
  }
  *gui_btn = *gui_btn & 0xf7;
  return;
}

/******************************************************************************
 * Function : newgui_illegal_computer_player_053753 (Original VA: 0x53753, Ghidra: FUN_00053753)
 * Prototype: void newgui_illegal_computer_player_053753(void);
 * Address  : 0x53753 (Size: 92 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 2772
 * Purpose  : String 'Illegal computer player'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void newgui_illegal_computer_player_053753(void)

{
  int arg_eax;
  int player_off;
  
  player_off = (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x14ca;
  if ((-1 < *(int *)((int)&g_bss_002ccbfb + player_off)) && (*(int *)((int)&g_bss_002ccbfb + player_off) < 10)) {
    *(undefined2 *)(arg_eax + 0x2b) =
         *(undefined2 *)(&g_data_00184179 + *(int *)((int)&g_bss_002ccbfb + player_off) * 2);
    return;
  }
  LbErrorLog(); /* LbErrorLog("newgui.cpp", line 2772, "Illegal computer player") */
  return;
}

/******************************************************************************
 * Function : newgui_update_creature_and_thing_0537af (Original VA: 0x537af, Ghidra: FUN_000537af)
 * Prototype: void newgui_update_creature_and_thing_0537af(void);
 * Address  : 0x537af (Size: 236 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> newgui_process_thing_entity_05389b, newgui_process_thing_entity_053971
 * Callees  : 4 -> newgui_draw_text_overlay_057a52, newgui_fn_05b3fc, newgui_fn_05c8fa, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_creature_and_thing_0537af(void)

{
  int thing_ptr;
  int val;
  int arg_ebx;
  
  watcom_crt_fn_13a710();
  if ((arg_ebx != 0) && (*(short *)(arg_ebx + 100) != 0)) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)];
    val = (int)*(short *)(thing_ptr + 0x5e);
    if (val < 1) {
      val = 0;
    }
    newgui_fn_05c8fa(val,(int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * /* thing->ccontrol_idx */
                             (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] *
                            0x23) / 100 +
                       (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73]);
    newgui_fn_05b3fc();
    newgui_draw_text_overlay_057a52();
  }
  return;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_05389b (Original VA: 0x5389b, Ghidra: FUN_0005389b)
 * Prototype: void newgui_process_thing_entity_05389b(void);
 * Address  : 0x5389b (Size: 214 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_update_creature_and_thing_0537af, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_process_thing_entity_05389b(void)

{
  ushort player_off;
  
  newgui_update_creature_and_thing_0537af();
  player_off = *(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef);
  if (((&g_thing_ptrs)[player_off] != 0) && (*(short *)((&g_thing_ptrs)[player_off] + 100) != 0)) {
    watcom_crt_fn_13a710();
  }
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_053971 (Original VA: 0x53971, Ghidra: FUN_00053971)
 * Prototype: void newgui_process_thing_entity_053971(void);
 * Address  : 0x53971 (Size: 167 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> newgui_update_creature_and_thing_0537af
 ******************************************************************************/
void newgui_process_thing_entity_053971(void)

{
  ushort player_off;
  
  newgui_update_creature_and_thing_0537af();
  player_off = *(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef);
  if (((&g_thing_ptrs)[player_off] != 0) && (*(short *)((&g_thing_ptrs)[player_off] + 100) != 0)) {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_state_type_gui_state_053a18 (Original VA: 0x53a18, Ghidra: FUN_00053a18)
 * Prototype: void newgui_state_type_gui_state_053a18(void);
 * Address  : 0x53a18 (Size: 493 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 2885
 * Purpose  : String 'Unknown state_type_to_gui_state[]'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, bflib_system_io_fn_0f0870
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00053bb1) */

void newgui_state_type_gui_state_053a18(void)

{
  uint uval;
  ushort saved_draw_flags;
  char ch;
  int arg_eax;
  uint uval_2;
  uint loop_i;
  uint extraout_ECX;
  int val;
  int local_24;
  uint local_1c;
  
  saved_draw_flags = g_lb_display_draw_flags;
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
  if (g_bss_0034d0e4 < '\a') {
    g_bss_0034d0e5 = '\0';
  }
  ch = g_bss_0034d0e4;
  if (g_bss_0034d0e4 < '\x01') {
    ch = '\x01';
  }
  if (ch < '\a') {
    uval_2 = (uint)g_bss_0034d0e4;
    if ((int)uval_2 < 1) {
      uval_2 = 1;
    }
  }
  else {
    uval_2 = 6;
  }
  for (loop_i = 0; loop_i < (uval_2 & 0xffff); loop_i = (uint)(byte)((char)loop_i + 1)) {
    if (loop_i == 0) {
      local_1c = 0x17;
    }
    else {
      local_1c = (uint)(ushort)(&g_bss_0034d1a8)[loop_i + (int)g_bss_0034d0e5];
    }
    (&g_bss_0034d0e6)[loop_i * 4] = 0;
    val = 0;
    (&g_bss_0034d0ea)[loop_i * 4] = 0;
    local_24 = 0;
    (&g_bss_0034d0ee)[loop_i * 4] = 0;
    do {
      uval = *(uint *)(&g_data_0019133e + local_24);
      if (uval == 0) {
        (&g_bss_0034d0e6)[(loop_i & 0xff) * 4] =
             (&g_bss_0034d0e6)[(loop_i & 0xff) * 4] +
             (uint)*(ushort *)
                    (&g_bss_002e05ed + val + g_my_player_word._3_1_ * 0x1508 + local_1c * 0x1e);
      }
      else if (uval < 2) {
        (&g_bss_0034d0ea)[(loop_i & 0xff) * 4] =
             (&g_bss_0034d0ea)[(loop_i & 0xff) * 4] +
             (uint)*(ushort *)
                    (&g_bss_002e05ed + val + local_1c * 0x1e + g_my_player_word._3_1_ * 0x1508);
      }
      else if (uval == 2) {
        (&g_bss_0034d0ee)[(loop_i & 0xff) * 4] =
             (&g_bss_0034d0ee)[(loop_i & 0xff) * 4] +
             (uint)*(ushort *)
                    (&g_bss_002e05ed + val + local_1c * 0x1e + g_my_player_word._3_1_ * 0x1508);
      }
      else {
        LbErrorLog(); /* LbErrorLog("newgui.cpp", line 2885, "Unknown state_type_to_gui_state[]") */
        loop_i = extraout_ECX;
      }
      val = val + 2;
      local_24 = local_24 + 4;
    } while (val != 0x1e);
  }
  g_lb_display_draw_flags = g_lb_display_draw_flags | 4;
  bflib_system_io_fn_0f0870(g_data_001992a0,(*(short *)(arg_eax + 10) + 0xda) / (int)(uint)g_units_per_pixel);
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_fn_053c05 (Original VA: 0x53c05, Ghidra: FUN_00053c05)
 * Prototype: undefined8 newgui_fn_053c05(void);
 * Address  : 0x53c05 (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x053c05
 * Callers  : 1 -> newgui_oi_there_fade_time_053ccc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 newgui_fn_053c05(void)

{
  undefined4 arg_edx;
  int val;
  char ch;
  
  ch = '\0';
  while( true ) {
    val = (int)ch;
    if (7 < val) {
      return CONCAT44(arg_edx,0xffffffff);
    }
    if ((&g_bss_0034bad7)[val * 0x20] == '\0') break;
    ch = ch + '\x01';
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : newgui_fn_053c32 (Original VA: 0x53c32, Ghidra: FUN_00053c32)
 * Prototype: undefined8 newgui_fn_053c32(void);
 * Address  : 0x53c32 (Size: 57 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x053c32
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 newgui_fn_053c32(void)

{
  char ch;
  undefined4 arg_edx;
  int val;
  
  ch = '\0';
  while( true ) {
    val = (int)ch;
    if (7 < val) {
      return CONCAT44(arg_edx,0xffffffff);
    }
    if (((&g_bss_0034bad7)[val * 0x20] != '\0') && ((&g_bss_0034baf4)[val * 0x20] != '\0')) break;
    ch = ch + '\x01';
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : newgui_fn_053c6b (Original VA: 0x53c6b, Ghidra: FUN_00053c6b)
 * Prototype: undefined8 newgui_fn_053c6b(void);
 * Address  : 0x53c6b (Size: 56 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x053c6b
 * Callers  : 14 -> newgui_fn_052b58, newgui_maintain_gui_button_state_052def, newgui_oi_there_fade_time_053ccc, newgui_draw_text_overlay_05449e, newgui_fn_059ccb, newgui_fn_059d02, newgui_fn_05abd1, newgui_fn_05aee2 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 newgui_fn_053c6b(void)

{
  byte arg_al;
  undefined4 arg_edx;
  int val;
  int val_2;
  
  val = (uint)arg_al << 8;
  while( true ) {
    val_2 = (int)(char)val;
    if (7 < val_2) {
      return CONCAT44(arg_edx,0xffffffff);
    }
    if (((&g_bss_0034bad7)[val_2 * 0x20] != '\0') &&
       ((char)((uint)val >> 8) == (&g_bss_0034bad6)[val_2 * 0x20])) break;
    val = CONCAT31((int3)((uint)val >> 8),(char)val + '\x01');
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : newgui_fn_053ca3 (Original VA: 0x53ca3, Ghidra: FUN_00053ca3)
 * Prototype: undefined8 newgui_fn_053ca3(void);
 * Address  : 0x53ca3 (Size: 41 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x053ca3
 * Callers  : 1 -> newgui_fn_0540cb
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 newgui_fn_053ca3(void)

{
  undefined4 arg_edx;
  int val;
  char ch;
  
  ch = '\0';
  while( true ) {
    val = (int)ch;
    if (0x55 < val) {
      return CONCAT44(arg_edx,0xffffffff);
    }
    if (((&g_bss_0034bbd6)[val * 0x39] & 1) == 0) break;
    ch = ch + '\x01';
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : newgui_oi_there_fade_time_053ccc (Original VA: 0x53ccc, Ghidra: FUN_00053ccc)
 * Prototype: undefined8 newgui_oi_there_fade_time_053ccc(void);
 * Address  : 0x53ccc (Size: 914 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 3104, 3151
 * Purpose  : String 'Oi! There is a fade time less than 1. Idiot.'
 * Callers  : 2 -> newgui_fn_0587ff, newgui_fn_05cf2d
 * Callees  : 10 -> newgui_more_room_menu_stack_052b67, newgui_fn_053c05, newgui_fn_053c6b, newgui_fn_0540cb, newgui_fn_05426d, newgui_fn_0542d6, newgui_fn_05435a, newgui_fn_05b5f5 ...
 ******************************************************************************/
undefined8 newgui_oi_there_fade_time_053ccc(void)

{
  ushort uval;
  char ch;
  short short_val;
  char *arg_eax;
  int val;
  int loop_i;
  uint uval_2;
  undefined4 uval_3;
  undefined1 *word_ptr;
  undefined1 *extraout_ECX;
  char *str_ptr;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  undefined4 arg_edx;
  int local_1c;
  
  local_1c = newgui_fn_053c6b();
  if (local_1c == -1) {
    newgui_more_room_menu_stack_052b67();
    local_1c = newgui_fn_053c05();
    if (local_1c == -1) {
LAB_00054052:
      uval_3 = LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3104, "Oi! There is a fade time less than 1. Idiot.") */
      uval_3 = CONCAT31((int3)((uint)uval_3 >> 8),0xff);
      goto LAB_0005499e;
    }
    loop_i = local_1c * 0x20;
    str_ptr = &g_bss_0034bad6 + loop_i;
    (&g_bss_0034bad7)[loop_i] = 1;
    *(char **)(&g_bss_0034baeb + loop_i) = arg_eax;
    (&g_bss_0034baea)[loop_i] = (undefined1)local_1c;
    ch = *arg_eax;
    *str_ptr = ch;
    if (ch == '\x01') {
      g_data_0017d175 = (short)g_graphics_window_width * g_units_per_pixel;
      g_data_0017d177 = get_scaled_viewport_bottom_y();
      str_ptr = extraout_ECX_00;
    }
    short_val = *(short *)(arg_eax + 8);
    if (short_val == -999) {
      *(ushort *)(str_ptr + 8) = g_units_per_pixel * (short)g_graphics_window_width - *(ushort *)(arg_eax + 0xc) / 2;
      goto LAB_00053e2b;
    }
    if (short_val == 999) {
      short_val = *(short *)(&g_player_hand_thing_idx + g_my_player_word._3_1_ * 0x4ef) +
              (*(ushort *)(&g_bss_0019d50c + g_my_player_word._3_1_ * 0x4ef) / 2 -
              *(ushort *)(arg_eax + 0xc) / 2);
LAB_00053e27:
      *(short *)(str_ptr + 8) = short_val;
    }
    else {
      if (short_val != -0x3e6) {
        short_val = *(short *)(arg_eax + 8);
        goto LAB_00053e27;
      }
      short_val = g_data_0017d175 - *(ushort *)(arg_eax + 0xc) / 2;
      *(short *)(str_ptr + 8) = short_val;
      if (short_val < 0x8c) {
        str_ptr[8] = -0x74;
        str_ptr[9] = '\0';
      }
      else if (g_screen_width < short_val) {
        short_val = (short)g_screen_width;
        goto LAB_00053e27;
      }
    }
LAB_00053e2b:
    if (*(short *)(arg_eax + 10) == -999) {
      uval = *(ushort *)(arg_eax + 0xe);
      loop_i = get_scaled_viewport_bottom_y();
      uval_2 = loop_i - uval / 2;
      str_ptr = extraout_ECX_01;
LAB_00053ece:
      *(short *)(str_ptr + 10) = (short)uval_2;
    }
    else if (*(short *)(arg_eax + 10) == 999) {
      *(ushort *)(str_ptr + 10) =
           (*(ushort *)(&g_bss_0019d50e + g_my_player_word._3_1_ * 0x4ef) / 2 -
           *(ushort *)(arg_eax + 0xe) / 2) + -10;
    }
    else {
      if (*(short *)(arg_eax + 8) != -0x3e6) {
        uval_2 = (uint)*(ushort *)(arg_eax + 10);
        goto LAB_00053ece;
      }
      short_val = g_data_0017d177 - *(ushort *)(arg_eax + 0xe) / 2;
      *(short *)(str_ptr + 10) = short_val;
      if (short_val < 0) {
        str_ptr[10] = '\0';
        str_ptr[0xb] = '\0';
      }
      else {
        uval_2 = (uint)((ulonglong)g_mouse_cursor_x / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
        if ((int)uval_2 < (int)short_val) goto LAB_00053ece;
      }
    }
    if (*(short *)(arg_eax + 8) == 999) {
      if ((int)*(short *)(str_ptr + 8) <
          (int)(uint)*(ushort *)(&g_player_hand_thing_idx + g_my_player_word._3_1_ * 0x4ef)) {
        short_val = *(short *)(&g_player_hand_thing_idx + g_my_player_word._3_1_ * 0x4ef);
      }
      else {
        if ((int)*(short *)(str_ptr + 8) <=
            (int)((uint)g_mouse_cursor_y - (uint)*(ushort *)(arg_eax + 0xc))) goto LAB_00053f4e;
        short_val = g_mouse_cursor_y - *(short *)(arg_eax + 0xc);
      }
LAB_00053f4a:
      *(short *)(str_ptr + 8) = short_val;
    }
    else if (*(short *)(str_ptr + 8) < 0) {
      str_ptr[8] = '\0';
      str_ptr[9] = '\0';
    }
    else if ((int)((uint)g_mouse_cursor_y - (uint)*(ushort *)(arg_eax + 0xc)) <
             (int)*(short *)(str_ptr + 8)) {
      short_val = g_mouse_cursor_y - *(short *)(arg_eax + 0xc);
      goto LAB_00053f4a;
    }
LAB_00053f4e:
    for (loop_i = 0; loop_i < 3; loop_i = loop_i + 1) {
      if (((int)*arg_eax == (uint)(byte)(&g_data_00184176)[loop_i]) && (g_mouse_cursor_x == 0x1e0)) {
        *(short *)(str_ptr + 10) = *(short *)(str_ptr + 10) + 0x50;
        break;
      }
    }
    short_val = *(short *)(arg_eax + 2);
    *(short *)(str_ptr + 2) = short_val;
    if (short_val == 0) {
      LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3151, "Too many menus open") */
      str_ptr = extraout_ECX_02;
    }
    *(undefined4 *)(str_ptr + 4) = *(undefined4 *)(arg_eax + 4);
    *(undefined2 *)(str_ptr + 0xc) = *(undefined2 *)(arg_eax + 0xc);
    *(undefined2 *)(str_ptr + 0xe) = *(undefined2 *)(arg_eax + 0xe);
    *(undefined4 *)(str_ptr + 0x10) = *(undefined4 *)(arg_eax + 0x10);
    *(undefined4 *)(str_ptr + 0x19) = *(undefined4 *)(arg_eax + 0x19);
    str_ptr[0x1e] = arg_eax[0x1e];
    str_ptr[0x1f] = arg_eax[0x1f];
    if (((g_game_operation_flags & 0x20) == 0) &&
       (loop_i = newgui_fn_05b5f5(), str_ptr = extraout_ECX_03, loop_i != 0)) {
      extraout_ECX_03[0x1d] = '\0';
    }
    else {
      str_ptr[0x1d] = '\x01';
    }
    if (*(int *)(str_ptr + 0x19) != 0) {
      (**(code **)(str_ptr + 0x19))();
    }
    for (loop_i = 0; *(char *)(*(int *)(arg_eax + 4) + loop_i) != -1; loop_i = loop_i + 0x37) {
      ch = newgui_fn_0540cb();
      if (ch == -1) goto LAB_00054052;
    }
    newgui_fn_05435a();
    newgui_fn_05426d();
    loop_i = newgui_fn_0542d6();
  }
  else {
    val = local_1c * 0x20;
    word_ptr = &g_bss_0034bad6 + val;
    (&g_bss_0034bad7)[val] = 1;
    loop_i = CONCAT22((short)((uint)val >> 0x10),*(undefined2 *)(arg_eax + 2));
    *(undefined2 *)(&g_bss_0034bad8 + val) = *(undefined2 *)(arg_eax + 2);
    if (((g_game_operation_flags & 0x20) == 0) && (loop_i = newgui_fn_05b5f5(), word_ptr = extraout_ECX, loop_i != 0))
    {
      extraout_ECX[0x1d] = 0;
    }
    else {
      word_ptr[0x1d] = 1;
    }
  }
  uval_3 = CONCAT31((int3)((uint)loop_i >> 8),(undefined1)local_1c);
LAB_0005499e:
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : newgui_fn_054089 (Original VA: 0x54089, Ghidra: FUN_00054089)
 * Prototype: void newgui_fn_054089(void);
 * Address  : 0x54089 (Size: 66 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x054089
 * Callers  : 2 -> newgui_draw_text_overlay_05449e, newgui_fn_05c848
 * Callees  : 1 -> newgui_fn_054269
 ******************************************************************************/
void newgui_fn_054089(void)

{
  int arg_eax;
  int val;
  int extraout_EDX;
  char ch;
  
  if (*(char *)(arg_eax + 1) != '\0') {
    *(undefined1 *)(arg_eax + 1) = 0;
    ch = '\0';
    while( true ) {
      if (0x55 < ch) break;
      val = ch * 0x39;
      if ((((&g_bss_0034bbd6)[val] & 1) != 0) &&
         ((&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 0x14))) {
        newgui_fn_054269();
        arg_eax = extraout_EDX;
      }
      ch = ch + '\x01';
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0540cb (Original VA: 0x540cb, Ghidra: FUN_000540cb)
 * Prototype: undefined4 newgui_fn_0540cb(void);
 * Address  : 0x540cb (Size: 414 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0540cb
 * Callers  : 1 -> newgui_oi_there_fade_time_053ccc
 * Callees  : 1 -> newgui_fn_053ca3
 ******************************************************************************/
undefined4 newgui_fn_0540cb(void)

{
  byte flag;
  int val;
  int arg_eax;
  int val_2;
  uint uval;
  undefined4 uval_2;
  int extraout_ECX;
  short short_val;
  undefined1 *thing_ptr;
  byte *byte_ptr;
  undefined8 uval_3;
  undefined1 local_18;
  
  uval_3 = newgui_fn_053ca3();
  thing_ptr = (undefined1 *)((ulonglong)uval_3 >> 0x20);
  if ((int)uval_3 == -1) {
    uval_2 = 0xffffffff;
  }
  else {
    val_2 = (int)uval_3 * 0x39;
    byte_ptr = &g_bss_0034bbd6 + val_2;
    *byte_ptr = *byte_ptr | 1;
    val = *(int *)(arg_eax + 0x15);
    (&g_bss_0034bbd9)[val_2] = *(undefined1 *)(arg_eax + 0x14);
    (&g_bss_0034bbdc)[val_2] = *thing_ptr;
    *(undefined2 *)((int)&g_bss_0034bbda + val_2) = *(undefined2 *)(thing_ptr + 1);
    flag = thing_ptr[5];
    *byte_ptr = *byte_ptr & 0xfd;
    *byte_ptr = *byte_ptr | (flag & 1) * '\x02';
    *(undefined4 *)((int)&g_bss_0034bbdd + val_2) = *(undefined4 *)(thing_ptr + 7);
    *(undefined4 *)(&g_bss_0034bbe1 + val_2) = *(undefined4 *)(thing_ptr + 0xb);
    *(undefined4 *)((int)&g_bss_0034bbe5 + val_2) = *(undefined4 *)(thing_ptr + 0xf); /* thing->mappos.val_y */
    *(undefined2 *)(&g_bss_0034bbf1 + val_2) = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
    *(undefined2 *)((int)&g_bss_0034bbfb + val_2) = *(undefined2 *)(thing_ptr + 0x1d);
    *(undefined2 *)((int)&g_bss_0034bbfd + val_2) = *(undefined2 *)(thing_ptr + 0x1f); /* thing->class_id */
    *(undefined4 *)((int)&g_bss_0034bbe9 + val_2) = *(undefined4 *)(thing_ptr + 0x21);
    *(undefined2 *)(&g_bss_0034bbff + val_2) = *(undefined2 *)(thing_ptr + 0x25);
    *(undefined2 *)(&g_bss_0034bc01 + val_2) = *(undefined2 *)(thing_ptr + 0x27);
    *(undefined4 *)((int)&g_bss_0034bc05 + val_2) = *(undefined4 *)(thing_ptr + 0x29);
    *(undefined4 *)((int)&g_bss_0034bc09 + val_2) = *(undefined4 *)(thing_ptr + 0x2d);
    *(undefined2 *)(&g_bss_0034bc03 + val_2) = *(undefined2 *)(thing_ptr + 0x31);
    uval_2 = *(undefined4 *)(thing_ptr + 0x33);
    (&g_bss_0034bbd7)[val_2] = 0;
    *(undefined4 *)((int)&g_bss_0034bbed + val_2) = uval_2;
    *byte_ptr = *byte_ptr & 0xe3;
    *byte_ptr = *byte_ptr | 0xc;
    flag = thing_ptr[6];
    *byte_ptr = *byte_ptr & 0xdf;
    *byte_ptr = *byte_ptr | (flag & 1) << 5;
    if ((*(short *)(thing_ptr + 0x15) == 999) || (*(short *)(thing_ptr + 0x19) == 999)) {
      short_val = (*(short *)(arg_eax + 8) + *(ushort *)(val + 0xc) / 2) -
              *(ushort *)(extraout_ECX + 0x1d) / 2;
      *(short *)((int)&g_bss_0034bbf3 + val_2) = short_val;
      *(short *)(&g_bss_0034bbf7 + val_2) = short_val;
    }
    else {
      *(short *)(&g_bss_0034bbf7 + val_2) = *(short *)(thing_ptr + 0x19) + *(short *)(arg_eax + 8);
      *(short *)((int)&g_bss_0034bbf3 + val_2) = *(short *)(thing_ptr + 0x15) + *(short *)(arg_eax + 8);
    }
    if ((*(short *)(extraout_ECX + 0x17) == 999) || (*(short *)(extraout_ECX + 0x1b) == 999)) {
      short_val = (*(short *)(arg_eax + 10) + *(ushort *)(val + 0xe) / 2) -
              *(ushort *)(extraout_ECX + 0x1f) / 2;
      *(short *)(&g_bss_0034bbf5 + val_2) = short_val;
      *(short *)((int)&g_bss_0034bbf9 + val_2) = short_val;
    }
    else {
      *(short *)((int)&g_bss_0034bbf9 + val_2) =
           *(short *)(extraout_ECX + 0x1b) + *(short *)(arg_eax + 10);
      *(short *)(&g_bss_0034bbf5 + val_2) = *(short *)(extraout_ECX + 0x17) + *(short *)(arg_eax + 10);
    }
    uval = (uint)(char)(&g_bss_0034bbdc)[val_2];
    if (((uval == 3) && (*(int *)((int)&g_bss_0034bc09 + val_2) != 0)) &&
       (uval = (uint)**(byte **)((int)&g_bss_0034bc09 + val_2), uval == 1)) {
      (&g_bss_0034bbd7)[val_2] = 1;
    }
    else {
      (&g_bss_0034bbd7)[val_2] = 0;
    }
    local_18 = (undefined1)uval_3;
    uval_2 = CONCAT31((int3)(uval >> 8),local_18);
    (&g_bss_0034bbd8)[val_2] = 0;
  }
  return uval_2;
}

/******************************************************************************
 * Function : newgui_fn_054269 (Original VA: 0x54269, Ghidra: FUN_00054269)
 * Prototype: void newgui_fn_054269(void);
 * Address  : 0x54269 (Size: 4 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x054269
 * Callers  : 1 -> newgui_fn_054089
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_054269(void)

{
  byte *arg_eax;
  
  *arg_eax = *arg_eax & 0xfe;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05426d (Original VA: 0x5426d, Ghidra: FUN_0005426d)
 * Prototype: void newgui_fn_05426d(void);
 * Address  : 0x5426d (Size: 105 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05426d
 * Callers  : 1 -> newgui_oi_there_fade_time_053ccc
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05426d(void)

{
  int arg_eax;
  int val;
  int val_2;
  byte local_18;
  
  for (local_18 = 0; local_18 < 0x56; local_18 = local_18 + 1) {
    val_2 = (uint)local_18 * 0x39;
    if (((*(int *)((int)&g_bss_0034bc09 + val_2) != 0) &&
        ((&g_bss_0034bbd9)[val_2] == *(char *)(arg_eax + 0x14))) && ((&g_bss_0034bbdc)[val_2] == '\x04'))
    {
      val = **(int **)((int)&g_bss_0034bc09 + val_2);
      if (val < 0) {
        val = 0;
      }
      else if (*(short *)(&g_bss_0034bc03 + val_2) < val) {
        val = (int)*(short *)(&g_bss_0034bc03 + val_2);
      }
      *(short *)((int)&g_bss_0034bc0d + val_2) =
           (short)((val << 8) / (*(short *)(&g_bss_0034bc03 + val_2) + 1));
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0542d6 (Original VA: 0x542d6, Ghidra: FUN_000542d6)
 * Prototype: void newgui_fn_0542d6(void);
 * Address  : 0x542d6 (Size: 53 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0542d6
 * Callers  : 1 -> newgui_oi_there_fade_time_053ccc
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_0542d6(void)

{
  int arg_eax;
  char ch;
  char extraout_CL;
  uint uval;
  int val;
  
  uval = 0;
  while (ch = (char)uval, uval < 0x56) {
    val = uval * 0x39;
    if ((*(int *)((int)&g_bss_0034bbed + val) != 0) &&
       ((&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 0x14))) {
      (**(code **)((int)&g_bss_0034bbed + val))();
      ch = extraout_CL;
    }
    uval = (uint)(byte)(ch + 1);
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05430b (Original VA: 0x5430b, Ghidra: FUN_0005430b)
 * Prototype: void newgui_fn_05430b(void);
 * Address  : 0x5430b (Size: 25 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05430b
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05430b(void)

{
  int gui_btn;
  
  **(int **)(gui_btn + 0x33) = /* gui_btn->content */
       (int)((uint)*(ushort *)(gui_btn + 0x37) * (*(short *)(gui_btn + 0x2d) + 1)) >> 8;
  return;
}

/******************************************************************************
 * Function : newgui_fn_054324 (Original VA: 0x54324, Ghidra: FUN_00054324)
 * Prototype: void newgui_fn_054324(void);
 * Address  : 0x54324 (Size: 54 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x054324
 * Callers  : 1 -> newgui_fn_058718
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_054324(void)

{
  int arg_eax;
  int val;
  uint loop_i;
  
  for (loop_i = 0; loop_i < 0x56; loop_i = (uint)(byte)((char)loop_i + 1)) {
    val = loop_i * 0x39;
    if (((&g_bss_0034bbdc)[val] == '\x03') &&
       (loop_i = (uint)CONCAT11((&g_bss_0034bbd9)[val],(char)loop_i),
       (&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 0x14))) {
      (&g_bss_0034bbd7)[val] = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05435a (Original VA: 0x5435a, Ghidra: FUN_0005435a)
 * Prototype: void newgui_fn_05435a(void);
 * Address  : 0x5435a (Size: 70 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05435a
 * Callers  : 2 -> newgui_oi_there_fade_time_053ccc, newgui_fn_058718
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05435a(void)

{
  undefined1 *word_ptr;
  int arg_eax;
  int val;
  uint loop_i;
  
  for (loop_i = 0; loop_i < 0x56; loop_i = (uint)(byte)((char)loop_i + 1)) {
    val = loop_i * 0x39;
    word_ptr = *(undefined1 **)((int)&g_bss_0034bc09 + val);
    if (((word_ptr != (undefined1 *)0x0) &&
        (loop_i = (uint)CONCAT11((&g_bss_0034bbd9)[val],(char)loop_i),
        (&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 0x14))) && ((&g_bss_0034bbdc)[val] == '\x03'))
    {
      if ((&g_bss_0034bbd7)[val] == '\0') {
        *word_ptr = 0;
      }
      else {
        *word_ptr = 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0543dd (Original VA: 0x543dd, Ghidra: FUN_000543dd)
 * Prototype: void newgui_fn_0543dd(void);
 * Address  : 0x543dd (Size: 173 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0543dd
 * Callers  : 3 -> file_update_player_dungeon_02ca74, frontend_load_frontend_palette_02e8a7, inits_non_keeper_keeper_game_0402e5
 * Callees  : 2 -> newgui_fn_05cd55, LbScreenWaitVbi
 ******************************************************************************/
void newgui_fn_0543dd(void)

{
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  g_bss_0034d1a8 = 0x17;
  g_bss_0034d0e4 = 1;
  g_bss_0034d0e5 = 0;
  g_data_0017d175 = 0xfc19;
  g_data_0017d177 = 0xfc19;
  g_data_0017d179 = 0xfc19;
  g_data_0017d17b._0_2_ = 0xfc19;
  newgui_fn_05cd55();
  g_bss_0034cf15 = 0;
  g_bss_0034cf1f = 0;
  g_bss_0034cfe3 = 0;
  g_bss_0034cf04 = 0;
  return;
}

/******************************************************************************
 * Function : newgui_draw_text_overlay_05449e (Original VA: 0x5449e, Ghidra: FUN_0005449e)
 * Prototype: void newgui_draw_text_overlay_05449e(void);
 * Address  : 0x5449e (Size: 676 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 6 -> frontend_fn_02fda1, creature_dene_says_big_hello_08685c, draw_fn_0872a4, draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 9 -> newgui_fn_052b58, newgui_fn_052be7, newgui_fn_053c6b, newgui_fn_054089, newgui_fn_054742, newgui_fn_0588b6, newgui_fn_05cc56, LbTextDraw ...
 ******************************************************************************/
void newgui_draw_text_overlay_05449e(void)

{
  bool flag;
  char ch;
  uint saved_draw_flags;
  int extraout_ECX;
  int extraout_ECX_00;
  int loop_i;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  byte *byte_ptr;
  byte *extraout_ECX_04;
  byte *extraout_ECX_05;
  byte *extraout_ECX_06;
  byte *byte_ptr_2;
  int extraout_EDX;
  int extraout_EDX_00;
  int val;
  int extraout_EDX_01;
  bool flag_2;
  bool flag_3;
  bool flag_4;
  undefined8 uval;
  byte *byte_ptr_3;
  
  saved_draw_flags = (uint)g_lb_display_draw_flags;
  g_lb_current_font_ptr = g_frontend_font_ptr;
  LbTextDraw();
  do {
    ch = newgui_fn_0588b6();
    loop_i = extraout_ECX;
    val = extraout_EDX;
    if (ch == -1) {
      newgui_fn_054089();
      newgui_fn_052be7();
      loop_i = extraout_ECX_00;
      val = extraout_EDX_00;
    }
  } while (val + 0x20 != loop_i);
  for (loop_i = 0; loop_i < g_bss_0034cf04; loop_i = loop_i + 1) {
    uval = newgui_fn_053c6b();
    val = (int)((ulonglong)uval >> 0x20) + (int)uval * 0x20;
    loop_i = extraout_ECX_01;
    if ((*(char *)(val + 1) != '\0') && (*(char *)(val + 0x1d) != '\0')) {
      if ((*(char *)(val + 1) != '\x02') &&
         ((*(short *)(val + 2) != 0 && (*(short *)(*(int *)(val + 0x15) + 2) != 0)))) {
        g_lb_display_draw_flags = g_lb_display_draw_flags | 4;
      }
      if (*(int *)(val + 0x10) != 0) {
        (**(code **)(val + 0x10))();
        loop_i = extraout_ECX_02;
        val = extraout_EDX_01;
      }
      if (*(char *)(val + 1) == '\x02') {
        newgui_fn_054742();
        loop_i = extraout_ECX_03;
      }
      g_lb_display_draw_flags = g_lb_display_draw_flags & 0xfffb;
    }
  }
  if ((g_bss_002ee79f != 0) && (loop_i = newgui_fn_053c6b(), (&g_bss_0034baf3)[loop_i * 0x20] != '\0')) {
    byte_ptr = &g_bss_0034bbd6;
    byte_ptr_3 = &g_bss_0034cefc;
    do {
      byte_ptr_2 = byte_ptr;
      if ((((*(int *)(byte_ptr + 0x13) != 0) && ((*byte_ptr & 4) != 0)) && ((*byte_ptr & 1) != 0)) &&
         (g_bss_002ee79f != 0)) {
        flag = false;
        switch(*(undefined2 *)(byte_ptr + 4)) {
        case 1:
          if (0x43 < g_bss_002ee79f) {
            flag_4 = SBORROW4(g_bss_002ee79f,0x47);
            flag_3 = g_bss_002ee79f + -0x47 < 0;
            flag_2 = g_bss_002ee79f == 0x47;
LAB_000545de:
            if (flag_2 || flag_4 != flag_3) {
              flag = true;
            }
          }
          break;
        case 2:
          if (5 < g_bss_002ee79f) {
            flag_4 = SBORROW4(g_bss_002ee79f,0x14);
            flag_3 = g_bss_002ee79f + -0x14 < 0;
            flag_2 = g_bss_002ee79f == 0x14;
            goto LAB_000545de;
          }
          break;
        case 3:
          if (0x14 < g_bss_002ee79f) {
            flag_4 = SBORROW4(g_bss_002ee79f,0x24);
            flag_3 = g_bss_002ee79f + -0x24 < 0;
            flag_2 = g_bss_002ee79f == 0x24;
            goto LAB_000545de;
          }
          break;
        case 4:
          if (0x34 < g_bss_002ee79f) {
            flag_4 = SBORROW4(g_bss_002ee79f,0x3d);
            flag_3 = g_bss_002ee79f + -0x3d < 0;
            flag_2 = g_bss_002ee79f == 0x3d;
            goto LAB_000545de;
          }
        }
        if (flag) {
          ch = newgui_fn_052b58();
          byte_ptr_2 = extraout_ECX_04;
          if (ch == '\0') {
            watcom_crt_fn_13a710((int)(((int)*(short *)(byte_ptr + 0x23) + *(ushort *)(byte_ptr + 0x27) / 2) -
                              ((uint)*(byte *)(g_data_001991c0 + 0x425) * (uint)g_units_per_pixel) / 2) /
                         (int)(uint)g_units_per_pixel,saved_draw_flags,byte_ptr_3,
                         g_data_001991c0 + ((g_game_turn >> 1 & 7) + 0xb0) * 6);
            byte_ptr_2 = extraout_ECX_05;
          }
        }
        else {
          newgui_fn_05cc56();
          byte_ptr_2 = extraout_ECX_06;
        }
      }
      byte_ptr = byte_ptr_2 + 0x39;
    } while (byte_ptr != byte_ptr_3);
  }
  if (((g_bss_002ee79f != 0) && (g_bss_002ee7a3 != -1)) &&
     (g_bss_002ee7a3 = g_bss_002ee7a3 + -1, g_bss_002ee7a3 == 0)) {
    g_bss_002ee79f = 0;
  }
  g_lb_display_draw_flags = (short)saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_fn_054742 (Original VA: 0x54742, Ghidra: FUN_00054742)
 * Prototype: void newgui_fn_054742(void);
 * Address  : 0x54742 (Size: 177 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x054742
 * Callers  : 1 -> newgui_draw_text_overlay_05449e
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_054742(void)

{
  int arg_eax;
  char loop_i;
  char extraout_CL;
  char extraout_CL_00;
  int val;
  
  for (loop_i = '\0'; loop_i < 0x56; loop_i = loop_i + '\x01') {
    val = loop_i * 0x39;
    if (((((*(int *)((int)&g_bss_0034bbe9 + val) != 0) && (((&g_bss_0034bbd6)[val] & 4) != 0)) &&
         (((&g_bss_0034bbd6)[val] & 1) != 0)) &&
        ((&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 0x14))) &&
       ((((&g_bss_0034bbd7)[val] == '\0' && ((&g_bss_0034bbd8)[val] == '\0')) ||
        (((&g_bss_0034bbdc)[val] == '\x04' ||
         (*(code **)((int)&g_bss_0034bbe9 + val) == newgui_fn_0547f3)))))) {
      (**(code **)((int)&g_bss_0034bbe9 + val))();
      loop_i = extraout_CL;
    }
  }
  for (loop_i = '\0'; loop_i < 0x56; loop_i = loop_i + '\x01') {
    val = loop_i * 0x39;
    if ((((*(int *)((int)&g_bss_0034bbe9 + val) != 0) && (((&g_bss_0034bbd6)[val] & 4) != 0)) &&
        (((&g_bss_0034bbd6)[val] & 1) != 0)) &&
       ((((&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 0x14) && ((&g_bss_0034bbdc)[val] != '\x04'))
        && ((*(code **)((int)&g_bss_0034bbe9 + val) != newgui_fn_0547f3 &&
            (((&g_bss_0034bbd7)[val] != '\0' || ((&g_bss_0034bbd8)[val] != '\0')))))))) {
      (**(code **)((int)&g_bss_0034bbe9 + val))();
      loop_i = extraout_CL_00;
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0547f3 (Original VA: 0x547f3, Ghidra: FUN_000547f3)
 * Prototype: void newgui_fn_0547f3(void);
 * Address  : 0x547f3 (Size: 57 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0547f3
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_0547f3(void)

{
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : newgui_cycle_button_have_gui_05482c (Original VA: 0x5482c, Ghidra: FUN_0005482c)
 * Prototype: void newgui_cycle_button_have_gui_05482c(void);
 * Address  : 0x5482c (Size: 159 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 3645
 * Purpose  : String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, bflib_system_io_fn_0f2800
 ******************************************************************************/
void newgui_cycle_button_have_gui_05482c(void)

{
  byte *arg_eax;
  byte *extraout_ECX;
  
  if (arg_eax[6] == 2) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3645, "Cycle button cannot have a 'gui_area_normal_button' draw function!") */
    arg_eax = extraout_ECX;
  }
  if ((*arg_eax & 8) == 0) {
    bflib_system_io_fn_0f2800();
  }
  else {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_cycle_button_have_gui_0548cb (Original VA: 0x548cb, Ghidra: FUN_000548cb)
 * Prototype: void newgui_cycle_button_have_gui_0548cb(void);
 * Address  : 0x548cb (Size: 217 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 3665
 * Purpose  : String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbErrorLog, bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_cycle_button_have_gui_0548cb(void)

{
  byte *arg_eax;
  byte *extraout_ECX;
  
  if (arg_eax[6] == 2) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3665, "Cycle button cannot have a 'gui_area_normal_button' draw function!") */
    arg_eax = extraout_ECX;
  }
  if ((*arg_eax & 8) == 0) {
    bflib_system_io_fn_0f2800();
  }
  else {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0549a4 (Original VA: 0x549a4, Ghidra: FUN_000549a4)
 * Prototype: void newgui_fn_0549a4(void);
 * Address  : 0x549a4 (Size: 126 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0549a4
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f2800
 ******************************************************************************/
void newgui_fn_0549a4(void)

{
  byte *arg_eax;
  
  if ((*arg_eax & 8) == 0) {
    bflib_system_io_fn_0f2800();
  }
  else {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_054a22 (Original VA: 0x54a22, Ghidra: FUN_00054a22)
 * Prototype: void newgui_fn_054a22(void);
 * Address  : 0x54a22 (Size: 135 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x054a22
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f2800
 ******************************************************************************/
void newgui_fn_054a22(void)

{
  byte *arg_eax;
  
  if ((*arg_eax & 8) == 0) {
    bflib_system_io_fn_0f2800();
  }
  else {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_054aa9 (Original VA: 0x54aa9, Ghidra: FUN_00054aa9)
 * Prototype: void newgui_fn_054aa9(void);
 * Address  : 0x54aa9 (Size: 52 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x054aa9
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_054aa9(void)

{
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : newgui_cycle_button_must_have_054add (Original VA: 0x54add, Ghidra: FUN_00054add)
 * Prototype: void newgui_cycle_button_must_have_054add(void);
 * Address  : 0x54add (Size: 206 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 3747, 3752
 * Purpose  : String 'Cycle button must have a non-null UBYTE Data pointer!'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, bflib_system_io_fn_0f2800
 ******************************************************************************/
void newgui_cycle_button_must_have_054add(void)

{
  byte *gui_btn;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (gui_btn[6] == 2) {
    if (*(int *)(gui_btn + 0x33) == 0) { /* gui_btn->content */
      LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3747, "Cycle button must have a non-null UBYTE Data pointer!") */
      gui_btn = extraout_ECX;
    }
    if (*(short *)(gui_btn + 0x2d) == 0) {
      LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3752, "Cycle button must have a non-zero MaxVal!") */
      gui_btn = extraout_ECX_00;
    }
  }
  if ((((*gui_btn & 8) == 0) || (gui_btn[1] != 0)) || (gui_btn[2] != 0)) {
    bflib_system_io_fn_0f2800();
  }
  else {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_cycle_button_must_have_054bab (Original VA: 0x54bab, Ghidra: FUN_00054bab)
 * Prototype: void newgui_cycle_button_must_have_054bab(void);
 * Address  : 0x54bab (Size: 206 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 3786, 3791
 * Purpose  : String 'Cycle button must have a non-null UBYTE Data pointer!'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, bflib_system_io_fn_0f2800
 ******************************************************************************/
void newgui_cycle_button_must_have_054bab(void)

{
  byte *gui_btn;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  if (gui_btn[6] == 2) {
    if (*(int *)(gui_btn + 0x33) == 0) { /* gui_btn->content */
      LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3786, "Cycle button must have a non-null UBYTE Data pointer!") */
      gui_btn = extraout_ECX;
    }
    if (*(short *)(gui_btn + 0x2d) == 0) {
      LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3791, "Cycle button must have a non-zero MaxVal!") */
      gui_btn = extraout_ECX_00;
    }
  }
  if ((((*gui_btn & 8) == 0) || (gui_btn[1] != 0)) || (gui_btn[2] != 0)) {
    bflib_system_io_fn_0f2800();
  }
  else {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_054c79 (Original VA: 0x54c79, Ghidra: FUN_00054c79)
 * Prototype: void newgui_fn_054c79(void);
 * Address  : 0x54c79 (Size: 200 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x054c79
 * Callers  : 0 -> 
 * Callees  : 4 -> newgui_draw_text_overlay_057739, newgui_bar_small_057bba, newgui_bar_small_057cac, dk_sprintf
 ******************************************************************************/
void newgui_fn_054c79(void)

{
  ushort uval;
  byte *gui_btn;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  undefined *word_ptr;
  undefined4 uval_2;
  
  uval = *(ushort *)(gui_btn + 0x29);
  if ((*gui_btn & 8) == 0) {
    return;
  }
  if (uval != 0) {
    if (uval < 2) {
      gui_btn[0x27] = 0x20;
      gui_btn[0x28] = 0;
      if ((gui_btn[1] != 0) || (gui_btn[2] != 0)) {
        newgui_bar_small_057bba();
        newgui_bar_small_057cac();
        gui_btn = extraout_ECX_00;
        goto LAB_00054cfd;
      }
    }
    else {
      if (uval != 2) goto LAB_00054cfd;
      gui_btn[0x27] = 0x20;
      gui_btn[0x28] = 0;
    }
    newgui_bar_small_057bba();
    gui_btn = extraout_ECX;
  }
LAB_00054cfd:
  if (*(ushort *)(gui_btn + 0x2b) == 0xc9) {
    if (*(int *)(gui_btn + 0x33) == 0) { /* gui_btn->content */
      return;
    }
    uval_2 = *(undefined4 *)(gui_btn + 0x33); /* gui_btn->content */
    word_ptr = &g_data_00165d73;
  }
  else {
    uval_2 = (&g_bss_0033319b)[*(ushort *)(gui_btn + 0x2b)];
    word_ptr = &g_data_00165d70;
  }
  dk_sprintf(&g_log_sprintf_buf,word_ptr,uval_2);
  newgui_draw_text_overlay_057739();
  return;
}

/******************************************************************************
 * Function : newgui_button_must_point_scroll_054d41 (Original VA: 0x54d41, Ghidra: FUN_00054d41)
 * Prototype: void newgui_button_must_point_scroll_054d41(void);
 * Address  : 0x54d41 (Size: 73 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 3880
 * Purpose  : String 'Button must point to a SCROLL_TEXT_WINDOW data item'
 * Callers  : 0 -> 
 * Callees  : 3 -> newgui_have_text_scrolling_box_05789a, LbErrorLog, dk_sprintf
 ******************************************************************************/
void newgui_button_must_point_scroll_054d41(void)

{
  byte *gui_btn;
  
  if ((*gui_btn & 8) != 0) {
    if (*(int *)(gui_btn + 0x33) != 0) { /* gui_btn->content */
      dk_sprintf(&g_log_sprintf_buf,&g_data_00165d76,*(int *)(gui_btn + 0x33)); /* gui_btn->content */
      newgui_have_text_scrolling_box_05789a();
      return;
    }
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 3880, "Button must point to a SCROLL_TEXT_WINDOW data item") */
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_054d8a (Original VA: 0x54d8a, Ghidra: FUN_00054d8a)
 * Prototype: void newgui_update_player_dungeon_054d8a(void);
 * Address  : 0x54d8a (Size: 353 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_054d8a(void)

{
  byte flag;
  undefined2 saved_draw_flags;
  int gui_btn;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *byte_ptr;
  
  saved_draw_flags = g_lb_display_draw_flags;
  flag = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  watcom_crt_fn_13a710();
  if ((&g_bss_002e1518)[(uint)flag + g_my_player_word._3_1_ * 0x1508] != '\0') {
    if ((*extraout_ECX & 8) != 0) {
      byte_ptr = extraout_ECX;
      if (*(short *)(&g_bss_002e0594 + (uint)flag * 2 + g_my_player_word._3_1_ * 0x1508) != 0) {
        watcom_crt_fn_13a710();
        byte_ptr = extraout_ECX_00;
      }
      if ((byte_ptr[1] != 0) || (byte_ptr[2] != 0)) {
        bflib_system_io_fn_0f2800();
        g_lb_display_draw_flags = saved_draw_flags;
        return;
      }
    }
    watcom_crt_fn_13a710();
  }
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_054eeb (Original VA: 0x54eeb, Ghidra: FUN_00054eeb)
 * Prototype: void newgui_update_player_view_state_054eeb(void);
 * Address  : 0x54eeb (Size: 761 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 7 -> newgui_draw_text_overlay_057b6f, room_process_dungeon_room_0d003c, room_process_dungeon_room_0d0098, dk_sprintf, bflib_system_io_fn_0f0870, bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_view_state_054eeb(void)

{
  int gui_btn;
  int val;
  char *loop_i;
  undefined4 uval;
  int val_2;
  uint *word_ptr;
  uint uStack_2c;
  uint local_28;
  int local_24;
  uint local_20;
  byte local_1c;
  
  word_ptr = &local_28;
  local_1c = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  local_20 = (uint)g_lb_display_draw_flags;
  if (*(int *)(gui_btn + 0x33) == 0) { /* gui_btn->content */
    uStack_2c = 0x553bf;
    watcom_crt_fn_13a710();
    goto LAB_0005499e;
  }
  if ((local_1c == 1) || (local_1c == 7)) {
LAB_00054fe0:
    uStack_2c = 0x5500c;
    watcom_crt_fn_13a710();
  }
  else {
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffeb;
    uStack_2c = 0x54f46;
    val = room_process_dungeon_room_0d0098();
    if (val < 0) goto LAB_00054fe0;
    local_28 = (uint)g_units_per_pixel;
    uStack_2c = 0x54f7f;
    watcom_crt_fn_13a710();
    val_2 = val * 0x15 >> 0x1f;
    uStack_2c = (uint)g_data_001992a0;
    word_ptr = &uStack_2c;
    local_28 = (uint)(6 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
    local_24 = (((int)((val * 0x15 + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8) * -2 + 0x2a)
               / (int)(uint)g_units_per_pixel;
    bflib_system_io_fn_0f0870();
  }
  *(int *)((int)word_ptr + -4) = (int)*(short *)(&g_bss_002eadcd + (uint)local_1c * 4);
  *(undefined **)((int)word_ptr + -8) = &g_data_00165db8; /* 0x165db8="%ld" */
  *(undefined1 **)((int)word_ptr + -0xc) = &g_log_sprintf_buf;
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
  *(undefined4 *)((int)word_ptr + -0x10) = 0x5502f;
  dk_sprintf();
  if ((int)(&g_bss_002e1082)[g_my_player_word._3_1_ * 0x542] <
      (int)*(short *)(&g_bss_002eadcd + g_bss_002ee8ad * 4)) {
    *(undefined4 *)((int)word_ptr + -4) = 0x55141;
    watcom_crt_fn_13a710();
  }
  else {
    val = g_my_player_word._3_1_ * 0x4ef;
    if ((((&g_bss_0019d51b)[val] == '\x02') && ((byte)(&g_bss_0019d56b)[val] == g_bss_002ee8ad)) &&
       (((byte)g_game_turn & 1) != 0)) {
      *(undefined4 *)((int)word_ptr + -4) = 0x550f1;
      bflib_system_io_fn_0f2800();
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x550b8;
      watcom_crt_fn_13a710();
    }
    for (loop_i = &g_log_sprintf_buf; *loop_i != '\0'; loop_i = loop_i + 1) {
      if (0xff < *loop_i) {
        *loop_i = *loop_i + -0x78;
      }
    }
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x55163;
  newgui_draw_text_overlay_057b6f();
  *(undefined4 *)((int)word_ptr + -4) = 0x55180;
  uval = room_process_dungeon_room_0d003c();
  *(undefined4 *)((int)word_ptr + -4) = uval;
  *(undefined **)((int)word_ptr + -8) = &g_data_00165dbc; /* 0x165dbc="@%ld" */
  *(undefined1 **)((int)word_ptr + -0xc) = &g_log_sprintf_buf;
  *(undefined4 *)((int)word_ptr + -0x10) = 0x55190;
  dk_sprintf();
  *(undefined4 *)((int)word_ptr + -4) = 0x551b3;
  newgui_draw_text_overlay_057b6f();
LAB_0005499e:
  g_lb_display_draw_flags = (short)local_20;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_0551e4 (Original VA: 0x551e4, Ghidra: FUN_000551e4)
 * Prototype: void newgui_update_player_dungeon_0551e4(void);
 * Address  : 0x551e4 (Size: 583 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_0551e4(void)

{
  byte flag;
  undefined2 saved_draw_flags;
  int gui_btn;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *dungeon_off;
  
  saved_draw_flags = g_lb_display_draw_flags;
  flag = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  watcom_crt_fn_13a710();
  if ((&g_bss_002e157d)[g_my_player_word._3_1_ * 0x1508 + (uint)flag] != '\0') {
    if ((*extraout_ECX & 8) != 0) {
      if ((((*(int *)(&g_data_0018e977 + (uint)flag * 0x1b) == 6) &&
           ((&g_bss_002e0e0d)[g_my_player_word._3_1_ * 0x542] != 0)) ||
          ((*(int *)(&g_data_0018e977 + (uint)flag * 0x1b) == 8 &&
           (*(short *)(&g_bss_002e0b61 + g_my_player_word._3_1_ * 0x1508) != 0)))) ||
         ((dungeon_off = extraout_ECX, *(int *)(extraout_ECX + 0x33) == 3 &&
          (*(int *)(&g_bss_002e0e11 + g_my_player_word._3_1_ * 0x1508) != 0)))) {
        watcom_crt_fn_13a710();
        dungeon_off = extraout_ECX_00;
      }
      if (((dungeon_off[1] != 0) || (dungeon_off[2] != 0)) ||
         ((((*(int *)(&g_data_0018e977 + (uint)flag * 0x1b) == 6 &&
            ((&g_bss_002e0e0d)[g_my_player_word._3_1_ * 0x542] != 0)) ||
           ((*(int *)(&g_data_0018e977 + (uint)flag * 0x1b) == 8 &&
            (*(short *)(&g_bss_002e0b61 + g_my_player_word._3_1_ * 0x1508) != 0)))) &&
          (((byte)g_game_turn & 1) != 0)))) {
        bflib_system_io_fn_0f2800();
        g_lb_display_draw_flags = saved_draw_flags;
        return;
      }
    }
    watcom_crt_fn_13a710();
  }
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05542b (Original VA: 0x5542b, Ghidra: FUN_0005542b)
 * Prototype: void newgui_update_player_dungeon_05542b(void);
 * Address  : 0x5542b (Size: 726 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 5 -> magic_process_thing_entity_04fa5b, dk_sprintf, bflib_system_io_fn_0f0870, bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_05542b(void)

{
  int gui_btn;
  int val;
  char *loop_i;
  int extraout_ECX;
  uint *word_ptr;
  uint uStack_2c;
  int local_28;
  int local_24;
  uint local_20;
  byte local_1c;
  
  word_ptr = (uint *)&local_28;
  local_1c = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  local_20 = (uint)g_lb_display_draw_flags;
  if (local_1c == 0) {
    uStack_2c = 0x553bf;
    watcom_crt_fn_13a710();
    goto LAB_0005499e;
  }
  if ((&g_data_0018e97b)[(uint)local_1c * 0x1b] == '\0') {
LAB_00055576:
    uStack_2c = 0x5557d;
    watcom_crt_fn_13a710();
  }
  else {
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffeb;
    uStack_2c = 0x55493;
    val = magic_process_thing_entity_04fa5b();
    if (val < 0) goto LAB_00055576;
    local_28 = g_data_00199230 + 0x8a;
    uStack_2c = 0x554cb;
    watcom_crt_fn_13a710();
    val = extraout_ECX * 0x15 >> 0x1f;
    uStack_2c = (uint)g_data_001992a0;
    word_ptr = &uStack_2c;
    local_28 = (int)(6 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
    local_24 = (((int)((extraout_ECX * 0x15 + val * -0x100) - (uint)(val << 7 < 0)) >> 8) * -2 +
               0x2a) / (int)(uint)g_units_per_pixel;
    bflib_system_io_fn_0f0870();
  }
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
  if (local_1c == 2) {
    val = ((byte)(&g_bss_002e0ea1)[(uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x1508]
            + 1) - (uint)(byte)(&g_bss_002e0e76)
                               [(uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x1508];
    if (val < 1) {
      val = 1;
    }
    val = (val * g_bss_002eaea9) / 2;
  }
  else {
    val = *(int *)(&g_bss_002eae11 + (uint)local_1c * 0x4c);
  }
  *(int *)((int)word_ptr + -4) = val;
  *(undefined **)((int)word_ptr + -8) = &g_data_00165dc1; /* 0x165dc1="%ld" */
  *(undefined1 **)((int)word_ptr + -0xc) = &g_log_sprintf_buf;
  *(undefined4 *)((int)word_ptr + -0x10) = 0x555ed;
  dk_sprintf();
  if ((int)(&g_bss_002e1082)[g_my_player_word._3_1_ * 0x542] < val) {
    *(undefined4 *)((int)word_ptr + -4) = 0x556e7;
    watcom_crt_fn_13a710();
  }
  else {
    if (((uint)(byte)(&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] ==
         *(uint *)(&g_data_0018e977 + (uint)local_1c * 0x1b)) && (((byte)g_game_turn & 1) != 0)) {
      local_28 = g_data_00199230 + *(short *)(gui_btn + 0x29) * 6;
      *(undefined4 *)((int)word_ptr + -4) = 0x556a3;
      bflib_system_io_fn_0f2800();
    }
    else {
      *(undefined4 *)((int)word_ptr + -4) = 0x55663;
      watcom_crt_fn_13a710();
    }
    for (loop_i = &g_log_sprintf_buf; *loop_i != '\0'; loop_i = loop_i + 1) {
      *loop_i = *loop_i + -0x78;
    }
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x551b3;
  newgui_draw_text_overlay_057b6f();
LAB_0005499e:
  g_lb_display_draw_flags = (short)local_20;
  return;
}

/******************************************************************************
 * Function : newgui_draw_gui_button_label_055701 (Original VA: 0x55701, Ghidra: FUN_00055701)
 * Prototype: void newgui_draw_gui_button_label_055701(void);
 * Address  : 0x55701 (Size: 1087 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Sets active font and draws GUI button text label
 * Callers  : 0 -> 
 * Callees  : 8 -> instance_update_creature_control_049e95, instance_update_creature_control_049ea9, newgui_fn_056ee6, newgui_fn_05c8fa, spell_update_creature_control_0720ce, LbTextDrawFormatted, dk_sprintf, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_draw_gui_button_label_055701(void)

{
  ushort player_off;
  byte *thing_ptr;
  int thing;
  int thing_ptr_2;
  int val;
  int val_2;
  uint thing_ptr_3;
  int thing_ptr_4;
  int local_20;
  
  thing_ptr_2 = (int)*(short *)(thing + 0x29);
  player_off = *(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef);
  if (((&g_thing_ptrs)[player_off] == 0) || (*(char *)((&g_thing_ptrs)[player_off] + 0x1f) != '\x05')) {
    watcom_crt_fn_13a710();
    bflib_system_io_fn_0f0870(g_data_001992a0,(int)(0x20 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel));
  }
  else {
    if (g_bss_0034d1f0 == 0) {
      val_2 = *(int *)(thing + 0x33) + 4;
    }
    else {
      val_2 = *(int *)(thing + 0x33);
    }
    local_20 = 0;
    for (thing_ptr_4 = 0; thing_ptr_3 = 0, thing_ptr_4 < 10; thing_ptr_4 = thing_ptr_4 + 1) {
      thing_ptr_3 = (uint)(byte)(&g_bss_002e918d)
                          [thing_ptr_4 + (uint)*(byte *)((&g_thing_ptrs)
                                                   [*(ushort *)
                                                     ((int)&g_bss_0019d0f7 +
                                                     g_my_player_word._3_1_ * 0x4ef)] + 0x1a) * 0xe6];
      val = instance_update_creature_control_049e95();
      if (val != 0) {
        if (local_20 == val_2) break;
        local_20 = local_20 + 1;
      }
    }
    thing_ptr_4 = instance_update_creature_control_049e95();
    if ((thing_ptr_4 == 0) || (thing_ptr_3 == 0)) {
      watcom_crt_fn_13a710();
      newgui_fn_056ee6((*(short *)(thing + 0x1f) + 8) / (int)(uint)g_units_per_pixel,thing_ptr_2); /* thing->class_id */
      return;
    }
    if (thing_ptr_3 == *(byte *)((&g_creature_ctrl_ptrs)
                           [*(ushort *)
                             ((&g_thing_ptrs)
                              [*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)] + 100)]
                          + 0x1e8)) {
      thing_ptr_2 = g_data_00199230 + 0xad4;
    }
    else {
      thing_ptr_2 = g_data_00199230 + 0xada;
    }
    watcom_crt_fn_13a710(thing_ptr_2);
    thing_ptr_2 = instance_update_creature_control_049ea9();
    thing_ptr_4 = thing_ptr_3 * 0x2a;
    if (thing_ptr_2 == 0) {
      thing_ptr = (byte *)(&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)]
      ;
      if ((*thing_ptr & 0x20) == 0) {
        thing_ptr_2 = g_game_turn -
                *(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xde + thing_ptr_3 * 4); /* thing->ccontrol_idx */
        thing_ptr_4 = *(int *)(&g_data_0018edfc + thing_ptr_4);
      }
      else {
        thing_ptr_2 = g_game_turn -
                *(int *)(thing_ptr_3 * 4 + 0xde + (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]); /* thing->ccontrol_idx */
        thing_ptr_4 = *(int *)(&g_data_0018ee00 + thing_ptr_4);
      }
    }
    else if ((*(byte *)(&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)]
             & 0x20) == 0) {
      thing_ptr_2 = *(int *)(&g_data_0018edfc + thing_ptr_4);
      thing_ptr_4 = thing_ptr_2;
    }
    else {
      thing_ptr_2 = *(int *)(&g_data_0018ee00 + thing_ptr_4);
      thing_ptr_4 = thing_ptr_2;
    }
    newgui_fn_05c8fa(thing_ptr_2,thing_ptr_4);
    dk_sprintf(&g_log_sprintf_buf,&g_data_00165dc5,(val_2 + 1) % 10);
    LbTextDrawFormatted();
    thing_ptr_2 = *(int *)(&g_data_0018ee0d + thing_ptr_3 * 0x2a);
    val_2 = instance_update_creature_control_049ea9();
    if ((val_2 != 0) && (thing_ptr_2 != 0)) {
      spell_update_creature_control_0720ce();
    }
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_creature_and_thing_055b68 (Original VA: 0x55b68, Ghidra: FUN_00055b68)
 * Prototype: void newgui_update_creature_and_thing_055b68(void);
 * Address  : 0x55b68 (Size: 715 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 2 -> dk_sprintf, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_creature_and_thing_055b68(void)

{
  ushort player_off;
  int thing_ptr;
  int arg_eax;
  int val;
  uint cctrl_ptr;
  int extraout_ECX;
  int val_2;
  undefined *word_ptr;
  
  val = (int)*(short *)(arg_eax + 0x29);
  watcom_crt_fn_13a710(val);
  player_off = *(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef);
  if ((&g_thing_ptrs)[player_off] == 0) {
    return;
  }
  thing_ptr = (&g_thing_ptrs)[player_off];
  if (*(char *)(thing_ptr + 0x1f) != '\x05') { /* thing->class_id */
    return;
  }
  switch(*(undefined4 *)(extraout_ECX + 0x33)) {
  case 0:
    cctrl_ptr = (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xc2); /* thing->ccontrol_idx */
    word_ptr = &g_data_00165dc8; /* 0x165dc8="%ld" */
    break;
  case 1:
    cctrl_ptr = ((uint)(byte)(&g_bss_002e9118)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6] *
             (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
            (uint)(byte)(&g_bss_002e9118)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
    word_ptr = &g_data_00165dcc; /* 0x165dcc="%ld" */
    break;
  case 2:
    cctrl_ptr = *(uint *)(thing_ptr + 0x13); /* thing->anim_sprite */
    word_ptr = &g_data_00165dd0; /* 0x165dd0="%ld" */
    break;
  case 3:
    val_2 = (uint)*(byte *)(thing_ptr + 0x1a) * 0xe6;
    if (*(short *)(&g_bss_002e19a9 + (uint)*(byte *)(thing_ptr + 0x1a) * 2 + *(char *)(thing_ptr + 6) * 0x1508 /* thing->owner */
                  ) == 0) {
      cctrl_ptr = ((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * /* thing->ccontrol_idx */
               (uint)*(ushort *)(&g_bss_002e91a5 + val_2) * 0x23) / 100 +
              (uint)*(ushort *)(&g_bss_002e91a5 + val_2);
    }
    else {
      cctrl_ptr = (((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * /* thing->ccontrol_idx */
                (uint)*(ushort *)(&g_bss_002e91a5 + val_2) * 0x23) / 100 +
              (uint)*(ushort *)(&g_bss_002e91a5 + val_2)) / 2;
    }
    word_ptr = &g_data_00165dd4; /* 0x165dd4="%ld" */
    break;
  case 4:
    cctrl_ptr = (uint)(byte)(&g_bss_002e9119)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
    word_ptr = &g_data_00165dd8; /* 0x165dd8="%ld" */
    break;
  case 5:
    cctrl_ptr = ((uint)(byte)(&g_bss_002e911c)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6] *
             (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
            (uint)(byte)(&g_bss_002e911c)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
    word_ptr = &g_data_00165ddc; /* 0x165ddc="%ld" */
    break;
  case 6:
    cctrl_ptr = (uint)(g_game_turn - *(int *)(thing_ptr + 9)) / 2000 +
            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x286); /* thing->ccontrol_idx */
    if (99 < cctrl_ptr) {
      cctrl_ptr = 99;
    }
    word_ptr = &g_data_00165de0; /* 0x165de0="%ld" */
    break;
  case 7:
    cctrl_ptr = ((uint)(byte)(&g_bss_002e911a)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6] *
             (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
            (uint)(byte)(&g_bss_002e911a)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
    word_ptr = &g_data_00165de4; /* 0x165de4="%ld" */
    break;
  case 8:
    cctrl_ptr = (uint)(byte)(&g_bss_002e911d)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
    word_ptr = &g_data_00165de8; /* 0x165de8="%ld" */
    break;
  case 9:
    cctrl_ptr = *(uint *)(&g_data_0018fced +
                     (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x287) * 4); /* thing->ccontrol_idx */
    word_ptr = &g_data_00165dec;
    break;
  default:
    goto switchD_00055e2b_default;
  }
  dk_sprintf(&g_log_sprintf_buf,word_ptr,cctrl_ptr);
switchD_00055e2b_default:
  watcom_crt_fn_13a710(val);
  newgui_draw_text_overlay_057739();
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_055e33 (Original VA: 0x55e33, Ghidra: FUN_00055e33)
 * Prototype: void newgui_update_player_dungeon_055e33(void);
 * Address  : 0x55e33 (Size: 477 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 3 -> door_process_thing_entity_023210, trap_process_thing_entity_0768c6, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_055e33(void)

{
  byte flag;
  undefined2 saved_draw_flags;
  char ch;
  int gui_btn;
  int val;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *byte_ptr;
  
  saved_draw_flags = g_lb_display_draw_flags;
  flag = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  val = g_data_00199230 + 0x90;
  watcom_crt_fn_13a710(val);
  if (((*(int *)(&g_data_0018ed31 + (uint)flag * 0x10) == 0x10) &&
      ((&g_bss_002e1598)[*(int *)(&g_data_0018ed35 + (uint)flag * 0x10) + g_my_player_word._3_1_ * 0x1508]
       != '\0')) ||
     ((*(int *)(&g_data_0018ed31 + (uint)flag * 0x10) == 0x12 &&
      ((&g_bss_002e15ab)[*(int *)(&g_data_0018ed35 + (uint)flag * 0x10) + g_my_player_word._3_1_ * 0x1508]
       != '\0')))) {
    if ((*extraout_ECX & 8) != 0) {
      if (*(int *)(&g_data_0018ed31 + (uint)flag * 0x10) == 0x10) {
        ch = trap_process_thing_entity_0768c6();
        byte_ptr = extraout_ECX_00;
        if (ch != '\0') {
          watcom_crt_fn_13a710(val);
          byte_ptr = extraout_ECX_01;
        }
      }
      else {
        byte_ptr = extraout_ECX;
        if ((*(int *)(&g_data_0018ed31 + (uint)flag * 0x10) == 0x12) &&
           (ch = door_process_thing_entity_023210(), byte_ptr = extraout_ECX_02, ch != '\0')) {
          watcom_crt_fn_13a710(val);
          byte_ptr = extraout_ECX_03;
        }
      }
      if ((byte_ptr[1] != 0) || (byte_ptr[2] != 0)) {
        bflib_system_io_fn_0f2800();
        g_lb_display_draw_flags = saved_draw_flags;
        return;
      }
    }
    watcom_crt_fn_13a710(val);
  }
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_056010 (Original VA: 0x56010, Ghidra: FUN_00056010)
 * Prototype: void newgui_update_player_dungeon_056010(void);
 * Address  : 0x56010 (Size: 502 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 4 -> newgui_draw_text_overlay_057b6f, dk_sprintf, bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_056010(void)

{
  byte flag;
  ushort saved_draw_flags;
  int gui_btn;
  int val;
  uint extraout_ECX;
  uint dungeon_off;
  int extraout_ECX_00;
  uint ui_scale;
  
  saved_draw_flags = g_lb_display_draw_flags;
  flag = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  if (*(int *)(gui_btn + 0x33) == 0) { /* gui_btn->content */
    watcom_crt_fn_13a710();
  }
  else {
    ui_scale = (uint)g_units_per_pixel;
    watcom_crt_fn_13a710(ui_scale);
    val = (uint)flag * 0x10;
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
    if (*(int *)(&g_data_0018ed31 + val) == 0x10) {
      dungeon_off = (uint)(byte)(&g_bss_002e1591)
                          [g_my_player_word._3_1_ * 0x1508 + *(int *)(&g_data_0018ed35 + val)];
    }
    else {
      dungeon_off = extraout_ECX;
      if (*(int *)(&g_data_0018ed31 + val) == 0x12) {
        dungeon_off = (uint)(byte)(&g_bss_002e15a6)
                            [g_my_player_word._3_1_ * 0x1508 + *(int *)(&g_data_0018ed35 + val)];
      }
    }
    dk_sprintf(&g_log_sprintf_buf,&g_data_00165def,dungeon_off); /* 0x165def="@%ld" */
    if (((extraout_ECX_00 == 0) ||
        ((((&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] != '\x10' ||
          ((uint)(byte)(&g_bss_0019d56d)[g_my_player_word._3_1_ * 0x4ef] !=
           *(uint *)(&g_data_0018ed35 + (uint)flag * 0x10))) &&
         (((&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] != '\x12' ||
          ((uint)(byte)(&g_bss_0019d56e)[g_my_player_word._3_1_ * 0x4ef] !=
           *(uint *)(&g_data_0018ed35 + (uint)flag * 0x10))))))) || (((byte)g_game_turn & 1) == 0)) {
      watcom_crt_fn_13a710(ui_scale);
    }
    else {
      bflib_system_io_fn_0f2800();
    }
    newgui_draw_text_overlay_057b6f();
  }
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_0563b1 (Original VA: 0x563b1, Ghidra: FUN_000563b1)
 * Prototype: void newgui_update_player_dungeon_0563b1(void);
 * Address  : 0x563b1 (Size: 348 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 3 -> dk_sprintf, bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_0563b1(void)

{
  int val;
  byte *thing;
  uint uval;
  char *loop_i;
  uint uval_2;
  int val_2;
  uint local_1c;
  
  val = **(int **)(thing + 0x33);
  uval = (int)*(int **)(thing + 0x33) - 0x34d0e6;
  uval_2 = (uval & 0xf) >> 2;
  val_2 = (int)*(short *)(thing + 0x29);
  if (*(short *)(thing + 0x1b) == 0) { /* thing->index_or_angle */
    local_1c = 0x17;
  }
  else {
    local_1c = (uint)(ushort)(&g_bss_0034d1a8)[(uval >> 4) + (int)g_bss_0034d0e5];
  }
  if ((local_1c != 0) && ((*thing & 8) != 0)) {
    if (val != 0) {
      val_2 = val_2 + (int)((longlong)
                            (ulonglong)
                            ((uint)*(ushort *)
                                    (&g_bss_002e0a6d +
                                    uval_2 * 2 + local_1c * 6 + g_my_player_word._3_1_ * 0x1508) * 0xe) /
                           (longlong)val);
    }
    if ((thing[1] == 0) && (thing[2] == 0)) {
      watcom_crt_fn_13a710();
    }
    else {
      bflib_system_io_fn_0f2800(g_data_00199230 + val_2 * 6,
                   (*(short *)(thing + 0x1f) + -2) / (int)(uint)g_units_per_pixel); /* thing->class_id */
    }
    if (*(int *)(thing + 0x33) != 0) {
      dk_sprintf(&g_log_sprintf_buf,&g_data_00165df4,val); /* 0x165df4="%ld" */
      if ((val != 0) &&
         (*(short *)(&g_bss_002e09ad + uval_2 * 2 + g_my_player_word._3_1_ * 0x1508 + local_1c * 6) != 0))
      {
        for (loop_i = &g_log_sprintf_buf; *loop_i != '\0'; loop_i = loop_i + 1) {
          *loop_i = *loop_i + -0x78;
        }
      }
      newgui_draw_text_overlay_057739();
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_056642 (Original VA: 0x56642, Ghidra: FUN_00056642)
 * Prototype: void newgui_fn_056642(void);
 * Address  : 0x56642 (Size: 87 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x056642
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_056642(void)

{
  byte *arg_eax;
  
  if ((*arg_eax & 8) != 0) {
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_056699 (Original VA: 0x56699, Ghidra: FUN_00056699)
 * Prototype: void newgui_update_player_dungeon_056699(void);
 * Address  : 0x56699 (Size: 179 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 4 -> newgui_draw_text_overlay_057a52, newgui_fn_05c8fa, dk_sprintf, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_056699(void)

{
  watcom_crt_fn_13a710();
  newgui_fn_05c8fa(g_bss_002ed3e6,g_bss_002ed3e2);
  dk_sprintf(&g_log_sprintf_buf,&g_data_00165e00,
               *(undefined4 *)(&g_bss_002e1a41 + g_my_player_word._3_1_ * 0x1508));
  newgui_draw_text_overlay_057a52();
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05674c (Original VA: 0x5674c, Ghidra: FUN_0005674c)
 * Prototype: void newgui_update_player_dungeon_05674c(void);
 * Address  : 0x5674c (Size: 291 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 3 -> newgui_fn_05c8fa, research_update_player_dungeon_066ecc, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_05674c(void)

{
  int arg_eax;
  int val;
  int dungeon_off;
  
  val = (int)*(short *)(arg_eax + 0x29);
  watcom_crt_fn_13a710(val);
  watcom_crt_fn_13a710();
  if (*(int *)(&g_bss_002e1501 + g_my_player_word._3_1_ * 0x1508) < 0) {
    bflib_system_io_fn_0f0870(g_data_001992a0,val,(int)(8 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel));
  }
  else {
    val = research_update_player_dungeon_066ecc();
    dungeon_off = *(int *)(&g_bss_002e171c + g_my_player_word._3_1_ * 0x1508) >> 0x1f;
    newgui_fn_05c8fa((int)((*(int *)(&g_bss_002e171c + g_my_player_word._3_1_ * 0x1508) + dungeon_off * -0x100) -
                      (uint)(dungeon_off << 7 < 0)) >> 8,
                 (int)((val + (val >> 0x1f) * -0x100) - (uint)((val >> 0x1f) << 7 < 0)) >> 8);
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05686f (Original VA: 0x5686f, Ghidra: FUN_0005686f)
 * Prototype: void newgui_update_player_dungeon_05686f(void);
 * Address  : 0x5686f (Size: 306 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 3 -> newgui_fn_05c8fa, workshop_fn_076ee6, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_05686f(void)

{
  int arg_eax;
  int val;
  undefined4 uval;
  
  val = (int)*(short *)(arg_eax + 0x29);
  watcom_crt_fn_13a710(val);
  watcom_crt_fn_13a710();
  if ((&g_bss_002e1712)[g_my_player_word._3_1_ * 0x1508] == '\0') {
    bflib_system_io_fn_0f0870(g_data_001992a0,val,(int)(0x20 / (ulonglong)(longlong)(int)(uint)g_units_per_pixel));
  }
  else {
    uval = workshop_fn_076ee6();
    val = *(int *)(&g_bss_002e170e + g_my_player_word._3_1_ * 0x1508) >> 0x1f;
    newgui_fn_05c8fa((int)((*(int *)(&g_bss_002e170e + g_my_player_word._3_1_ * 0x1508) + val * -0x100) -
                      (uint)(val << 7 < 0)) >> 8,uval);
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_0569a1 (Original VA: 0x569a1, Ghidra: FUN_000569a1)
 * Prototype: void newgui_update_player_dungeon_0569a1(void);
 * Address  : 0x569a1 (Size: 175 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 2 -> dk_sprintf, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_0569a1(void)

{
  byte flag;
  short short_val;
  int gui_btn;
  
  short_val = *(short *)(gui_btn + 0x29);
  flag = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  watcom_crt_fn_13a710();
  if (((&g_players)[(uint)flag * 0x4ef] & 1) != 0) {
    watcom_crt_fn_13a710(g_data_00199230 + short_val * 6);
    dk_sprintf(&g_log_sprintf_buf,&g_data_00165e03,(&g_bss_002e0ec3)[(uint)flag * 0x1508]);
    newgui_draw_text_overlay_057739();
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_056a50 (Original VA: 0x56a50, Ghidra: FUN_00056a50)
 * Prototype: void newgui_update_player_dungeon_056a50(void);
 * Address  : 0x56a50 (Size: 275 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 4 -> newgui_draw_text_overlay_057739, dk_sprintf, bflib_system_io_fn_0f2800, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_player_dungeon_056a50(void)

{
  byte flag;
  int gui_btn;
  int val;
  int dungeon_off;
  
  val = (int)*(short *)(gui_btn + 0x29);
  flag = *(byte *)(gui_btn + 0x33); /* gui_btn->content */
  watcom_crt_fn_13a710(val);
  if (((&g_players)[(uint)flag * 0x4ef] & 1) != 0) {
    dungeon_off = (uint)flag * 0x1508;
    if ((((int)(uint)(byte)(&g_bss_002e0ea2)[dungeon_off] < *(int *)(&g_bss_002e15e5 + dungeon_off)) &&
        (g_bss_002ed3dd == '\0')) || (((byte)g_game_turn & 1) != 0)) {
      watcom_crt_fn_13a710(val);
    }
    else {
      bflib_system_io_fn_0f2800();
    }
    dk_sprintf(&g_log_sprintf_buf,&g_data_00165e06,(&g_bss_002e0ea2)[(uint)flag * 0x1508]);
    newgui_draw_text_overlay_057739();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_056b63 (Original VA: 0x56b63, Ghidra: FUN_00056b63)
 * Prototype: void newgui_fn_056b63(void);
 * Address  : 0x56b63 (Size: 166 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x056b63
 * Callers  : 0 -> 
 * Callees  : 1 -> newgui_bar_small_057d9e
 ******************************************************************************/
void newgui_fn_056b63(void)

{
  byte *arg_eax;
  int extraout_ECX;
  
  if ((*arg_eax & 8) != 0) {
    arg_eax[0x27] = 0x20;
    arg_eax[0x28] = 0;
    newgui_bar_small_057d9e();
    watcom_crt_fn_13a710((int)((*(ushort *)(extraout_ECX + 0x25) - 0x40) *
                      (uint)*(ushort *)(extraout_ECX + 0x37)) >> 8);
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_056ee6 (Original VA: 0x56ee6, Ghidra: FUN_00056ee6)
 * Prototype: void newgui_fn_056ee6(void);
 * Address  : 0x56ee6 (Size: 12 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x056ee6
 * Callers  : 1 -> newgui_draw_gui_button_label_055701
 * Callees  : 1 -> bflib_system_io_fn_0f0870
 ******************************************************************************/
void newgui_fn_056ee6(void)

{
  bflib_system_io_fn_0f0870();
  return;
}

/******************************************************************************
 * Function : newgui_update_creature_and_thing_0570a7 (Original VA: 0x570a7, Ghidra: FUN_000570a7)
 * Prototype: void newgui_update_creature_and_thing_0570a7(void);
 * Address  : 0x570a7 (Size: 306 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 2 -> anger_update_creature_control_010689, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_creature_and_thing_0570a7(void)

{
  int thing_ptr;
  
  watcom_crt_fn_13a710();
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)];
  if ((*(char *)(thing_ptr + 0x1f) == '\x05') && /* thing->class_id */
     ((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] *
            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
      (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] != 0)) {
    anger_update_creature_control_010689();
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_0571cf (Original VA: 0x571cf, Ghidra: FUN_000571cf)
 * Prototype: void newgui_process_thing_entity_0571cf(void);
 * Address  : 0x571cf (Size: 377 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_process_thing_entity_05cabb, bflib_system_io_fn_0f0870
 ******************************************************************************/
void newgui_process_thing_entity_0571cf(void)

{
  int thing;
  uint uval;
  uint uval_2;
  int extraout_ECX;
  uint ui_scale;
  uint *word_ptr;
  undefined1 *word_ptr_2;
  uint auStack_44 [5];
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  byte local_1c;
  
  local_1c = (&g_bss_002e16fd)[(int)*(short *)(thing + 0x1b) + g_my_player_word._3_1_ * 0x1508]; /* thing->index_or_angle */
  uval_2 = (uint)*(ushort *)(thing + 0x25);
  uval = uval_2 / 7;
  auStack_44[3] = (uint)*(short *)(thing + 0x1d);
  local_20 = (auStack_44[3] + uval_2) - uval;
  auStack_44[2] = (uint)g_data_001992a0;
  ui_scale = (uint)g_units_per_pixel;
  auStack_44[4] = (uint)((ulonglong)*(ushort *)(thing + 0x27) / (ulonglong)(longlong)(int)ui_scale);
  local_2c = (int)((ulonglong)uval_2 / (ulonglong)(longlong)(int)ui_scale);
  local_30 = (int)*(short *)(thing + 0x1f) / (int)ui_scale; /* thing->class_id */
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 4;
  bflib_system_io_fn_0f0870();
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfb;
  if ((local_1c != 0) && (*(int *)(&g_bss_002ed450 + (uint)local_1c * 0x11) != 0)) {
    local_28 = uval / 2;
    local_24 = 0;
    word_ptr = auStack_44 + 2;
    do {
      word_ptr_2 = (undefined1 *)word_ptr;
      if (((&g_thing_ptrs)[*(ushort *)(&g_bss_0034d146 + *(short *)(thing + 0x1b) * 0x10 + local_24)] /* thing->index_or_angle */
           != g_thing_ptrs) &&
         (*(char *)((&g_thing_ptrs)
                    [*(ushort *)(&g_bss_0034d146 + *(short *)(thing + 0x1b) * 0x10 + local_24)] + /* thing->index_or_angle */
                   0x1f) == '\x05')) {
        *(undefined4 *)((int)word_ptr + -4) = 0x572d9;
        newgui_process_thing_entity_05cabb();
        if ((*(short *)(extraout_ECX + 0x1b) == g_bss_0034d1a6) && ((g_game_turn & 2) != 0)) {
          word_ptr_2 = (undefined1 *)((int)word_ptr + -4);
          *(uint *)((int)word_ptr + -4) = (uint)(byte)(&g_data_0019177a)[g_game_turn & 3];
          local_30 = (int)((ulonglong)*(ushort *)(thing + 0x27) /
                          (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
          local_2c = (int)*(short *)(thing + 0x1f) / (int)(uint)g_units_per_pixel; /* thing->class_id */
          g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 0x14;
          *(undefined4 *)((int)word_ptr + -8) = 0x57339;
          bflib_system_io_fn_0f0870();
          g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xeb;
        }
        local_20 = local_20 - uval;
      }
      local_24 = local_24 + 2;
      word_ptr = (uint *)word_ptr_2;
    } while (local_24 != 0xe);
  }
  return;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_057348 (Original VA: 0x57348, Ghidra: FUN_00057348)
 * Prototype: void newgui_process_thing_entity_057348(void);
 * Address  : 0x57348 (Size: 365 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_process_thing_entity_05cabb, bflib_system_io_fn_0f0870
 ******************************************************************************/
void newgui_process_thing_entity_057348(void)

{
  int thing;
  int extraout_ECX;
  undefined1 *word_ptr;
  uint *word_ptr_2;
  uint auStack_3c [5];
  int local_28;
  uint local_24;
  int local_20;
  byte local_1c;
  
  local_1c = (&g_bss_002e16fd)[(int)*(short *)(thing + 0x1b) + g_my_player_word._3_1_ * 0x1508]; /* thing->index_or_angle */
  local_24 = *(ushort *)(thing + 0x25) / 7;
  auStack_3c[2] = (uint)g_data_001992a0;
  auStack_3c[4] =
       (uint)((ulonglong)*(ushort *)(thing + 0x27) / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
  auStack_3c[3] = (int)*(short *)(thing + 0x1f) / (int)(uint)g_units_per_pixel; /* thing->class_id */
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 4;
  bflib_system_io_fn_0f0870();
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfb;
  if ((local_1c != 0) && (*(int *)(&g_bss_002ed450 + (uint)local_1c * 0x11) != 0)) {
    local_28 = (int)local_24 / 2;
    local_20 = 0;
    word_ptr_2 = auStack_3c + 2;
    do {
      word_ptr = (undefined1 *)word_ptr_2;
      if (((&g_thing_ptrs)[*(ushort *)(&g_bss_0034d176 + *(short *)(thing + 0x1b) * 0x10 + local_20)] /* thing->index_or_angle */
           != g_thing_ptrs) &&
         (*(char *)((&g_thing_ptrs)
                    [*(ushort *)(&g_bss_0034d176 + *(short *)(thing + 0x1b) * 0x10 + local_20)] + /* thing->index_or_angle */
                   0x1f) == '\x05')) {
        *(undefined4 *)((int)word_ptr_2 + -4) = 0x57444;
        newgui_process_thing_entity_05cabb();
        if ((*(short *)(extraout_ECX + 0x1b) == g_bss_0034d1a6) && ((g_game_turn & 2) != 0)) {
          word_ptr = (undefined1 *)((int)word_ptr_2 + -4);
          *(uint *)((int)word_ptr_2 + -4) = (uint)(byte)(&g_data_0019177a)[g_game_turn & 3];
          auStack_3c[3] = (int)local_24 / (int)(uint)g_units_per_pixel;
          auStack_3c[4] = (int)*(short *)(thing + 0x1f) / (int)(uint)g_units_per_pixel; /* thing->class_id */
          g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 0x14;
          *(undefined4 *)((int)word_ptr_2 + -8) = 0x574a6;
          bflib_system_io_fn_0f0870();
          g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xeb;
        }
      }
      local_20 = local_20 + 2;
      word_ptr_2 = (uint *)word_ptr;
    } while (local_20 != 0xe);
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_creature_and_thing_0574b5 (Original VA: 0x574b5, Ghidra: FUN_000574b5)
 * Prototype: void newgui_update_creature_and_thing_0574b5(void);
 * Address  : 0x574b5 (Size: 375 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 3 -> newgui_fn_05c8fa, bflib_system_io_fn_0f0870, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_update_creature_and_thing_0574b5(void)

{
  int thing_ptr;
  int thing;
  uint *word_ptr;
  undefined4 uStack_24;
  uint uStack_20;
  int local_1c;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)];
  if ((*(char *)(thing_ptr + 0x1f) == '\x05') && /* thing->class_id */
     ((int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] *
            (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
      (int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr + 0x1a) * 0x73] != 0)) {
    uStack_20 = 0x5754c;
    watcom_crt_fn_13a710();
    uStack_24 = *(undefined4 *)
                 ((&g_creature_ctrl_ptrs)
                  [*(ushort *)
                    ((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)] +
                    100)] + 0x24);
    uStack_20 = *(int *)(&g_bss_002e9133 +
                        (uint)*(byte *)((&g_creature_ctrl_ptrs)
                                        [*(ushort *)
                                          ((&g_thing_ptrs)
                                           [*(ushort *)
                                             ((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)] +
                                          100)] + 0x23) * 4 +
                        (uint)*(byte *)((&g_thing_ptrs)
                                        [*(ushort *)
                                          ((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)] + 0x1a)
                        * 0xe6) << 8;
    if (uStack_20 == 0) {
      uStack_20 = (uint)g_data_001992a0;
      word_ptr = &uStack_20;
      local_1c = (*(short *)(thing + 0x1f) + 4) / (int)(uint)g_units_per_pixel; /* thing->class_id */
      uStack_24 = 0x575f6;
      bflib_system_io_fn_0f0870();
    }
    else {
      word_ptr = &uStack_24;
      newgui_fn_05c8fa();
    }
    *(uint *)((int)word_ptr + -4) =
         *(byte *)((&g_creature_ctrl_ptrs)
                   [*(ushort *)
                     ((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)]
                     + 100)] + 0x23) + 1;
    *(undefined **)((int)word_ptr + -8) = &g_data_00165e09; /* 0x165e09="%ld" */
    *(undefined1 **)((int)word_ptr + -0xc) = &g_log_sprintf_buf;
    *(undefined4 *)((int)word_ptr + -0x10) = 0x56b4f;
    dk_sprintf();
    *(undefined4 *)((int)word_ptr + -4) = 0x56b5e;
    newgui_draw_text_overlay_057739();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05762c (Original VA: 0x5762c, Ghidra: FUN_0005762c)
 * Prototype: void newgui_fn_05762c(void);
 * Address  : 0x5762c (Size: 269 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05762c
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f2800
 ******************************************************************************/
void newgui_fn_05762c(void)

{
  byte *arg_eax;
  
  if ((*arg_eax & 8) != 0) {
    if ((arg_eax[1] == 0) && (arg_eax[2] == 0)) {
      watcom_crt_fn_13a710();
    }
    else {
      bflib_system_io_fn_0f2800();
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_draw_text_overlay_057739 (Original VA: 0x57739, Ghidra: FUN_00057739)
 * Prototype: void newgui_draw_text_overlay_057739(void);
 * Address  : 0x57739 (Size: 353 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 3 -> newgui_fn_054c79, newgui_update_player_dungeon_056a50, newgui_fn_05cf9f
 * Callees  : 6 -> newgui_draw_text_overlay_05bb9c, LbTextDraw, bflib_system_io_fn_0e6b44, bflib_system_io_fn_0e6b74, LbTextDrawFormatted, bflib_system_io_fn_0e9dd6
 ******************************************************************************/
void newgui_draw_text_overlay_057739(void)

{
  undefined2 saved_draw_flags;
  int thing;
  
  saved_draw_flags = g_lb_display_draw_flags;
  if ((*(char *)(thing + 6) == '\x05') && (thing == g_bss_0034cf1f)) { /* thing->owner */
    g_bss_0034b2a8 = g_bss_0034b2a8 + '\x01';
    bflib_system_io_fn_0e9dd6();
  }
  bflib_system_io_fn_0e6b44(g_units_per_pixel);
  bflib_system_io_fn_0e6b74((int)((ulonglong)*(ushort *)(thing + 0x25) /
                    (ulonglong)(longlong)(int)(uint)g_units_per_pixel),
               (int)*(short *)(thing + 0x1f) / (int)(uint)g_units_per_pixel); /* thing->class_id */
  g_lb_display_draw_flags = 0x100;
  newgui_draw_text_overlay_05bb9c();
  LbTextDrawFormatted();
  bflib_system_io_fn_0e6b44();
  bflib_system_io_fn_0e6b74();
  LbTextDraw();
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_have_text_scrolling_box_05789a (Original VA: 0x5789a, Ghidra: FUN_0005789a)
 * Prototype: void newgui_have_text_scrolling_box_05789a(void);
 * Address  : 0x5789a (Size: 440 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 5257
 * Purpose  : String 'Cannot have a TEXT_SCROLLING box type without a pointer to a'
 * Callers  : 1 -> newgui_button_must_point_scroll_054d41
 * Callees  : 4 -> newgui_draw_text_overlay_05bb9c, LbErrorLog, LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void newgui_have_text_scrolling_box_05789a(void)

{
  byte flag;
  int val;
  ushort saved_draw_flags;
  int thing;
  undefined4 ui_scale;
  int ui_scale_2;
  int val_2;
  uint uval;
  
  saved_draw_flags = g_lb_display_draw_flags;
  ui_scale = (undefined4)
          ((ulonglong)*(ushort *)(thing + 0x25) / (ulonglong)(longlong)(int)(uint)g_units_per_pixel);
  ui_scale_2 = (int)*(short *)(thing + 0x1f) / (int)(uint)g_units_per_pixel; /* thing->class_id */
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xfebf;
  g_lb_display_draw_flags = g_lb_display_draw_flags | 0x100;
  LbTextDraw(ui_scale,ui_scale_2);
  if (*(int *)(thing + 0x33) == 0) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 5257, "Cannot have a TEXT_SCROLLING box type without a pointer to a TextScrollWindow") */
    LbTextDraw(ui_scale,ui_scale_2);
    return;
  }
  val = *(int *)(thing + 0x33);
  *(uint *)(val + 0x409) = (uint)*(ushort *)(thing + 0x27);
  if (*(int *)(val + 0x405) == 0) {
    val_2 = newgui_draw_text_overlay_05bb9c();
    *(int *)(val + 0x405) = val_2;
  }
  else {
    val_2 = *(int *)(val + 0x405);
  }
  uval = (uint)*(ushort *)(thing + 0x27);
  if (val_2 <= (int)uval) {
    *(int *)(val + 0x400) = (int)(uval - val_2) / 2;
    goto LAB_0005787d;
  }
  flag = *(byte *)(val + 0x404);
  if (flag < 2) {
    if (flag == 1) {
      *(int *)(val + 0x400) = *(int *)(val + 0x400) + 8;
    }
  }
  else if (flag < 3) {
    *(int *)(val + 0x400) = *(int *)(val + 0x400) + -8;
  }
  else if (flag < 4) {
    *(int *)(val + 0x400) = *(int *)(val + 0x400) + uval;
  }
  else if (flag < 6) {
    *(int *)(val + 0x400) = *(int *)(val + 0x400) - uval;
  }
  if (*(char *)(val + 0x404) == '\x05') {
    if (-*(int *)(val + 0x400) != val_2 && *(int *)(val + 0x400) <= -val_2) {
LAB_000579b5:
      *(undefined4 *)(val + 0x400) = 0;
    }
  }
  else if (*(char *)(val + 0x404) != '\0') {
    val_2 = (uint)*(ushort *)(thing + 0x27) - val_2;
    if (*(int *)(val + 0x400) < val_2) {
      *(int *)(val + 0x400) = val_2;
    }
    else if (0 < *(int *)(val + 0x400)) goto LAB_000579b5;
  }
  *(undefined1 *)(val + 0x404) = 0;
LAB_0005787d:
  LbTextDrawFormatted();
  LbTextDraw(ui_scale,ui_scale_2);
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_draw_text_overlay_057a52 (Original VA: 0x57a52, Ghidra: FUN_00057a52)
 * Prototype: void newgui_draw_text_overlay_057a52(void);
 * Address  : 0x57a52 (Size: 285 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 2 -> newgui_update_creature_and_thing_0537af, newgui_update_player_dungeon_056699
 * Callees  : 4 -> LbTextDraw, bflib_system_io_fn_0e6b44, bflib_system_io_fn_0e6b74, LbTextDrawFormatted
 ******************************************************************************/
void newgui_draw_text_overlay_057a52(void)

{
  ushort saved_draw_flags;
  
  saved_draw_flags = g_lb_display_draw_flags;
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
  bflib_system_io_fn_0e6b44();
  bflib_system_io_fn_0e6b74();
  g_lb_display_draw_flags = g_lb_display_draw_flags | 0x100;
  LbTextDrawFormatted();
  bflib_system_io_fn_0e6b44();
  bflib_system_io_fn_0e6b74();
  LbTextDraw();
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_draw_text_overlay_057b6f (Original VA: 0x57b6f, Ghidra: FUN_00057b6f)
 * Prototype: void newgui_draw_text_overlay_057b6f(void);
 * Address  : 0x57b6f (Size: 75 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 2 -> newgui_update_player_view_state_054eeb, newgui_update_player_dungeon_056010
 * Callees  : 1 -> LbTextDrawFormatted
 ******************************************************************************/
void newgui_draw_text_overlay_057b6f(void)

{
  ushort saved_draw_flags;
  
  saved_draw_flags = g_lb_display_draw_flags;
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
  LbTextDrawFormatted();
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_bar_small_057bba (Original VA: 0x57bba, Ghidra: FUN_00057bba)
 * Prototype: void newgui_bar_small_057bba(void);
 * Address  : 0x57bba (Size: 242 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 5315
 * Purpose  : String 'Bar is too small'
 * Callers  : 3 -> newgui_fn_054c79, newgui_bar_small_057d9e, newgui_fn_05cf9f
 * Callees  : 2 -> LbErrorLog, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_bar_small_057bba(void)

{
  int thing;
  uint ui_scale;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  int arg_ebx;
  
  if (arg_ebx < 0x48) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 5315, "Bar is too small") */
    return;
  }
  ui_scale = (uint)g_units_per_pixel;
  watcom_crt_fn_13a710(ui_scale);
  val = arg_ebx + thing;
  val_2 = extraout_ECX;
  while (thing = thing + 0x20, thing < val + -0x40) { /* thing->model */
    ui_scale = g_data_001991c0 + 0xc;
    watcom_crt_fn_13a710(ui_scale,val_2 / (int)(uint)g_units_per_pixel);
    val_2 = extraout_ECX_00;
  }
  watcom_crt_fn_13a710(ui_scale,g_units_per_pixel);
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : newgui_bar_small_057cac (Original VA: 0x57cac, Ghidra: FUN_00057cac)
 * Prototype: void newgui_bar_small_057cac(void);
 * Address  : 0x57cac (Size: 242 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 5338
 * Purpose  : String 'Bar is too small'
 * Callers  : 2 -> newgui_fn_054c79, newgui_fn_05cf9f
 * Callees  : 2 -> LbErrorLog, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_bar_small_057cac(void)

{
  int thing;
  uint ui_scale;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  int arg_ebx;
  
  if (arg_ebx < 0x20) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 5338, "Bar is too small") */
    return;
  }
  ui_scale = (uint)g_units_per_pixel;
  watcom_crt_fn_13a710(ui_scale);
  val = arg_ebx + thing;
  val_2 = extraout_ECX;
  while (thing = thing + 0x20, thing < val + -0x40) { /* thing->model */
    ui_scale = g_data_001991c0 + 0x30;
    watcom_crt_fn_13a710(ui_scale,val_2 / (int)(uint)g_units_per_pixel);
    val_2 = extraout_ECX_00;
  }
  watcom_crt_fn_13a710(ui_scale,g_units_per_pixel);
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : newgui_bar_small_057d9e (Original VA: 0x57d9e, Ghidra: FUN_00057d9e)
 * Prototype: void newgui_bar_small_057d9e(void);
 * Address  : 0x57d9e (Size: 260 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 5368
 * Purpose  : String 'Bar is too small'
 * Callers  : 1 -> newgui_fn_056b63
 * Callees  : 3 -> newgui_bar_small_057bba, LbErrorLog, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_bar_small_057d9e(void)

{
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val;
  int arg_ebx;
  undefined4 local_14;
  
  newgui_bar_small_057bba();
  if (arg_ebx + -0x40 < 0x48) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 5368, "Bar is too small") */
    return;
  }
  watcom_crt_fn_13a710((extraout_ECX + 10) / (int)(uint)g_units_per_pixel);
  local_14 = arg_eax + 0x40;
  val = extraout_ECX_00;
  while (local_14 < arg_eax + arg_ebx + -0x40 + -0x20) {
    local_14 = local_14 + 0x20;
    watcom_crt_fn_13a710(val / (int)(uint)g_units_per_pixel,g_data_001991c0 + 0x1e);
    val = extraout_ECX_01;
  }
  watcom_crt_fn_13a710((uint)g_units_per_pixel,val / (int)(uint)g_units_per_pixel);
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : newgui_fn_057ea2 (Original VA: 0x57ea2, Ghidra: FUN_00057ea2)
 * Prototype: ulonglong newgui_fn_057ea2(void);
 * Address  : 0x57ea2 (Size: 95 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x057ea2
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 1 -> get_scaled_viewport_bottom_y
 ******************************************************************************/
ulonglong newgui_fn_057ea2(void)

{
  short short_val;
  ushort uval;
  int arg_eax;
  int val;
  undefined4 arg_edx;
  int val_2;
  undefined8 uval_2;
  
  val = (int)*(short *)(arg_eax + 0x21);
  if ((val <= (int)(g_graphics_window_width * (uint)g_units_per_pixel)) &&
     (val = val + (uint)*(ushort *)(arg_eax + 0x25),
     (int)((uint)g_units_per_pixel * g_graphics_window_width) < val)) {
    short_val = *(short *)(arg_eax + 0x23);
    uval_2 = get_scaled_viewport_bottom_y();
    val_2 = (int)((ulonglong)uval_2 >> 0x20);
    val = (int)uval_2;
    if (short_val <= val) {
      short_val = *(short *)(val_2 + 0x23);
      uval = *(ushort *)(val_2 + 0x27);
      uval_2 = get_scaled_viewport_bottom_y();
      val = (int)uval_2;
      if ((val < (int)((uint)uval + (int)short_val)) &&
         ((*(byte *)((ulonglong)uval_2 >> 0x20) & 4) != 0)) {
        return CONCAT44(arg_edx,CONCAT31((int3)((ulonglong)uval_2 >> 8),1));
      }
    }
  }
  return CONCAT44(arg_edx,val) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : newgui_fn_057f01 (Original VA: 0x57f01, Ghidra: FUN_00057f01)
 * Prototype: undefined4 newgui_fn_057f01(void);
 * Address  : 0x57f01 (Size: 106 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x057f01
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 newgui_fn_057f01(void)

{
  int arg_eax;
  int val;
  char loop_i;
  int arg_edx;
  char local_18;
  
  local_18 = -1;
  for (loop_i = '\0'; val = (int)loop_i, val < 8; loop_i = loop_i + '\x01') {
    if (((((&g_bss_0034bad7)[val * 0x20] != '\0') && ((&g_bss_0034bad7)[val * 0x20] == '\x02')) &&
        ((&g_bss_0034baf3)[val * 0x20] != '\0')) &&
       ((((short)(&g_bss_0034bade)[val * 0x10] <= arg_eax &&
         (arg_eax < (int)((int)(short)(&g_bss_0034bade)[val * 0x10] +
                        (uint)(ushort)(&g_bss_0034bae2)[val * 0x10]))) &&
        (((short)(&g_bss_0034bae0)[val * 0x10] <= arg_edx &&
         (arg_edx < (int)((uint)(ushort)(&g_bss_0034bae4)[val * 0x10] +
                        (int)(short)(&g_bss_0034bae0)[val * 0x10]))))))) {
      local_18 = loop_i;
    }
  }
  return CONCAT31(loop_i >> 7,local_18);
}

/******************************************************************************
 * Function : newgui_process_thing_entity_057f6b (Original VA: 0x57f6b, Ghidra: FUN_00057f6b)
 * Prototype: ulonglong newgui_process_thing_entity_057f6b(void);
 * Address  : 0x57f6b (Size: 110 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 10 -> input_process_thing_entity_049160, process_players_dungeon_command_packet, draw_update_player_dungeon_08a194, draw_update_slab_subtile_columns_08afd8, draw_update_slab_subtile_columns_08f320, draw_update_slab_subtile_columns_08f518, draw_update_slab_subtile_columns_08f75c, draw_update_slab_subtile_columns_08f924 ...
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong newgui_process_thing_entity_057f6b(void)

{
  byte *byte_ptr;
  uint thing_ptr;
  undefined4 arg_edx;
  
  thing_ptr = g_my_player_word._3_1_ * 0x4ef;
  byte_ptr = &g_bss_0019d51b + thing_ptr;
  if ((g_bss_0034cfe3 != '\0') &&
     (((g_bss_0034d1a6 == 0 || ((&g_data_0018e98c)[(uint)(byte)(&g_data_00191780)[*byte_ptr] * 0x1b] == '\0'))
      || ((thing_ptr = (uint)(byte)(&g_player_id_number)[thing_ptr],
          (int)*(char *)((&g_thing_ptrs)[g_bss_0034d1a6] + 6) != thing_ptr &&
          ((&g_data_0018e98d)[(uint)(byte)(&g_data_00191780)[*byte_ptr] * 0x1b] == '\0')))))) {
    return CONCAT44(arg_edx,CONCAT31((int3)(thing_ptr >> 8),1));
  }
  return CONCAT44(arg_edx,thing_ptr) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : newgui_fn_057fd9 (Original VA: 0x57fd9, Ghidra: FUN_00057fd9)
 * Prototype: bool newgui_fn_057fd9(void);
 * Address  : 0x57fd9 (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x057fd9
 * Callers  : 1 -> input_draw_text_overlay_047755
 * Callees  : 0 -> 
 ******************************************************************************/
bool newgui_fn_057fd9(void)

{
  return g_bss_0034cf1f != 0;
}

/******************************************************************************
 * Function : newgui_process_map_subtile_057fe4 (Original VA: 0x57fe4, Ghidra: FUN_00057fe4)
 * Prototype: undefined8 newgui_process_map_subtile_057fe4(void);
 * Address  : 0x57fe4 (Size: 1816 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 5 -> frontend_fn_02faf6, inits_update_creature_and_thing_0462a3, input_process_thing_entity_047fe2, input_process_thing_entity_0480aa, input_draw_text_overlay_049426
 * Callees  : 20 -> input_fn_0498d9, newgui_fn_053c32, newgui_fn_05430b, newgui_fn_057ea2, newgui_fn_057f01, newgui_fn_058718, newgui_fn_0587a6, newgui_fn_0587ff ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 newgui_process_map_subtile_057fe4(void)

{
  byte *byte_ptr;
  char ch;
  short short_val;
  int arg_eax;
  int val;
  int ui_scale;
  uint ui_scale_2;
  undefined4 uval;
  char extraout_CL;
  char extraout_CL_00;
  char extraout_CL_01;
  char extraout_CL_02;
  char extraout_CL_03;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  byte *extraout_ECX_01;
  undefined4 arg_edx;
  int val_2;
  char loop_i;
  byte *byte_ptr_2;
  undefined8 uval_2;
  undefined1 local_33;
  undefined1 local_31;
  char local_20;
  undefined1 local_1c;
  
  local_1c = 0;
  g_bss_0034b2a9 = 0;
  newgui_update_player_dungeon_05ad26();
  g_data_0017d17b._3_1_ = 0xff;
  g_data_0017d17f = 0xff;
  g_data_0017d180 = 0xff;
  g_data_0017d181 = 0xff;
  g_bss_0034d1a6 = 0;
  if (arg_eax != 0) {
    newgui_update_player_dungeon_05d032();
  }
  if (g_display_bss_003d987e == '\0') {
    g_data_0017d179 = 0xfc19;
    g_data_0017d17b._0_2_ = 0xfc19;
    for (loop_i = '\0'; loop_i < 0x56; loop_i = loop_i + '\x01') {
      val = loop_i * 0x39;
      if ((((&g_bss_0034bbd6)[val] & 1) != 0) && ((&g_bss_0034bbdc)[val] == '\x06')) {
        (&g_bss_0034bbd7)[val] = 0;
      }
    }
  }
  get_scaled_viewport_bottom_y();
  local_20 = -1;
  loop_i = newgui_fn_057f01();
  g_bss_0034cfe3 = loop_i != -1;
  newgui_fn_053c32();
  for (loop_i = '\0'; loop_i < 0x56; loop_i = loop_i + '\x01') {
    val = loop_i * 0x39;
    byte_ptr_2 = &g_bss_0034bbd6 + val;
    if (((*byte_ptr_2 & 1) != 0) && ((&g_bss_0034baf3)[(char)(&g_bss_0034bbd9)[val] * 0x20] != '\0')) {
      if (*(int *)((int)&g_bss_0034bbed + val) != 0) {
        (**(code **)((int)&g_bss_0034bbed + val))();
        loop_i = extraout_CL_02;
      }
      if ((((&g_bss_0034bbf2)[val] & 0x40) == 0) &&
         (ch = input_fn_0498d9(), loop_i = extraout_CL_03, ch == '\0')) {
        loop_i = newgui_fn_057ea2();
        uval = extraout_ECX;
        if (((loop_i == '\0') || (g_bss_0034cf1f != (byte *)0x0)) &&
           (((&g_bss_0034bbdc)[val] != '\x06' || ((&g_bss_0034bbd7)[val] == '\0')))) {
LAB_000580b1:
          *byte_ptr_2 = *byte_ptr_2 & 0xef;
        }
        else {
          ch = (char)((uint)extraout_ECX >> 8);
          loop_i = (char)extraout_ECX;
          if ((ch != -1) && (ch != (&g_bss_0034bbd9)[loop_i * 0x39])) goto LAB_000580b1;
          g_bss_0034cfe3 = '\x01';
          *byte_ptr_2 = *byte_ptr_2 | 0x10;
          if (*(int *)((int)&g_bss_0034bbe5 + val) != 0) {
            (**(code **)((int)&g_bss_0034bbe5 + val))();
            uval = extraout_ECX_00;
          }
          local_20 = loop_i;
          if ((&g_bss_0034bbdc)[val] == '\x06') break;
          if ((&g_bss_0034bbdc)[val] != '\x04') {
            g_data_0017d174 = -1;
          }
        }
        loop_i = (char)uval;
        if ((&g_bss_0034bbdc)[val] == '\x04') {
          val = ((int)((uint)*(ushort *)((int)&g_bss_0034bc0d + val) *
                        (*(ushort *)((int)&g_bss_0034bbfb + val) - 0x40)) >> 8) +
                  *(short *)((int)&g_bss_0034bbf3 + val) + 0x20;
          if ((((val + -10 < (int)(g_graphics_window_width * (uint)g_units_per_pixel)) &&
               (ui_scale = (uint)g_units_per_pixel * g_graphics_window_width, val = val + 0xc,
               ui_scale - val == 0 || ui_scale < val)) &&
              (uval_2 = get_scaled_viewport_bottom_y(), loop_i = extraout_CL,
              (int)((ulonglong)uval_2 >> 0x20) < (int)uval_2)) &&
             ((uval_2 = get_scaled_viewport_bottom_y(), loop_i = extraout_CL_00,
              (int)uval_2 <= (int)((ulonglong)uval_2 >> 0x20) && (g_bss_0034b25c != '\0')))) {
            g_bss_0034b25c = '\0';
            g_data_0017d174 = extraout_CL_00;
            sound_non_emitter_has_been_06ea5a();
            loop_i = extraout_CL_01;
          }
        }
      }
    }
  }
  if (g_bss_0034cf1f != (byte *)0x0) {
    g_bss_0034cfe3 = '\x01';
    loop_i = newgui_fn_05b25b();
    if (loop_i != '\0') {
      local_1c = 1;
    }
  }
  if ((g_data_0017d174 != -1) && (g_bss_0034b25a != '\0')) {
    g_bss_0034b25a = '\0';
    (&g_bss_0034bbd7)[local_20 * 0x39] = 0;
    g_data_0017d174 = -1;
    sound_non_emitter_has_been_06ea5a();
  }
  if (((local_20 == -1) ||
      (val = local_20 * 0x39, (&g_bss_0034bad7)[(char)(&g_bss_0034bbd9)[val] * 0x20] != '\x02')) ||
     (((int)*(short *)(&g_bss_0034bbf1 + val) & 0x8000U) != 0)) {
    g_bss_0034bad2 = 0;
    g_bss_0034bac5 = (undefined1 *)0x0;
  }
  else if (&g_bss_0034bbd6 + local_20 * 0x39 == g_bss_0034bac5) {
    if ((g_bss_0034bad2 < 0xb) && ((&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] != '\f')) {
      g_bss_0034b2a9 = 1;
      g_bss_0034cfe3 = '\x01';
      g_bss_0034bad2 = g_bss_0034bad2 + 1;
    }
    else {
      g_bss_0034cfe3 = '\x01';
      if (*(code **)((int)&g_bss_0034bbe9 + local_20 * 0x39) != newgui_fn_054c79) {
        newgui_jonty_here_am_writing_058921();
      }
    }
  }
  else {
    g_bss_0034bad2 = 0;
    g_bss_0034bace = (short)g_graphics_window_width * g_units_per_pixel;
    g_bss_0034bac5 = &g_bss_0034bbd6 + local_20 * 0x39;
    short_val = get_scaled_viewport_bottom_y();
    g_bss_0034bad0 = short_val + 0x56;
    g_bss_0034bacd = 0;
  }
  if (g_data_0017d174 != -1) {
    ui_scale = g_data_0017d174 * 0x39;
    (&g_bss_0034bbd7)[ui_scale] = 1;
    ui_scale_2 = (uint)g_units_per_pixel;
    val = *(short *)(&g_bss_0034bbf7 + ui_scale) + 0x20;
    if (g_graphics_window_width * ui_scale_2 - val == 0 || (int)(g_graphics_window_width * ui_scale_2) < val) {
      *(undefined2 *)((int)&g_bss_0034bc0d + ui_scale) = 0;
    }
    else {
      val_2 = (uint)*(ushort *)((int)&g_bss_0034bbfb + ui_scale) + (int)*(short *)(&g_bss_0034bbf7 + ui_scale)
              + -0x20;
      if ((int)(g_graphics_window_width * ui_scale_2) < val_2) {
        if ((g_graphics_window_width * ui_scale_2 - val != 0 && val <= (int)(g_graphics_window_width * ui_scale_2)) &&
           ((int)(g_graphics_window_width * ui_scale_2) < val_2)) {
          *(short *)((int)&g_bss_0034bc0d + ui_scale) =
               (short)((int)((ui_scale_2 * g_graphics_window_width - val) * 0x100) /
                      (int)(*(ushort *)((int)&g_bss_0034bbfb + ui_scale) - 0x40));
        }
      }
      else {
        *(undefined2 *)((int)&g_bss_0034bc0d + ui_scale) = 0xff;
      }
    }
    uval = newgui_fn_05430b();
    if (*(int *)((int)&g_bss_0034bbdd + ui_scale) != 0) {
      uval = (**(code **)((int)&g_bss_0034bbdd + ui_scale))();
    }
    uval = CONCAT31((int3)((uint)uval >> 8),1);
    goto LAB_0005499e;
  }
  if (local_20 != -1) {
    val = local_20 * 0x39;
    byte_ptr_2 = &g_bss_0034bbd6 + val;
    if (g_display_bss_003d987e == '\0') {
      if ((g_display_bss_003d987f != '\0') && (local_1c = 1, *(int *)(&g_bss_0034bbe1 + val) != 0))
      goto LAB_00058482;
    }
    else {
      local_1c = 1;
      if ((*(int *)((int)&g_bss_0034bbdd + val) != 0) ||
         ((((*byte_ptr_2 & 2) != 0 || (*(int *)((int)&g_bss_0034bc05 + val) != 0)) ||
          ((&g_bss_0034bbdc)[val] == '\x03')))) {
LAB_00058482:
        local_1c = 1;
        newgui_fn_0587a6();
        byte_ptr_2 = extraout_ECX_01;
      }
    }
    if (g_bss_0034b25c == '\0') {
      if (g_bss_0034b25d != '\0') {
        local_1c = 1;
        if ((g_bss_002ee79f != 0) && (*(short *)(byte_ptr_2 + 4) == g_bss_002ee79f)) {
          g_bss_002ee79f = 0;
        }
        if (*(int *)(byte_ptr_2 + 0xb) != 0) {
          g_bss_0034cf09 = (int)*(short *)(byte_ptr_2 + 4);
          g_bss_0034b25d = '\0';
          goto LAB_00058533;
        }
      }
    }
    else {
      local_1c = 1;
      if ((g_bss_002ee79f != 0) && (*(short *)(byte_ptr_2 + 4) == g_bss_002ee79f)) {
        g_bss_002ee79f = 0;
      }
      if ((((*(int *)(byte_ptr_2 + 7) != 0) || ((*byte_ptr_2 & 2) != 0)) ||
          (*(int *)(byte_ptr_2 + 0x2f) != 0)) || (byte_ptr_2[6] == 3)) {
        g_bss_0034cf05 = (int)*(short *)(byte_ptr_2 + 4);
        g_bss_0034b25c = '\0';
LAB_00058533:
        local_1c = 1;
        newgui_fn_058718();
      }
    }
  }
  for (loop_i = '\0'; loop_i < 0x56; loop_i = loop_i + '\x01') {
    val = loop_i * 0x39;
    byte_ptr_2 = &g_bss_0034bbd6 + val;
    if ((((*byte_ptr_2 & 1) != 0) && ((local_20 == -1 || (loop_i != local_20)))) &&
       (((&g_bss_0034bbdc)[val] != '\x03' && (byte_ptr_2 != g_bss_0034cf1f)))) {
      (&g_bss_0034bbd7)[val] = 0;
      (&g_bss_0034bbd8)[val] = 0;
      *byte_ptr_2 = *byte_ptr_2 & 0xef;
    }
  }
  byte_ptr_2 = (byte *)(int)local_20;
  if (byte_ptr_2 != (byte *)0xffffffff) {
    val = (int)byte_ptr_2 * 0x39;
    byte_ptr_2 = &g_bss_0034bbd6 + val;
    if (((&g_bss_0034bbd7)[val] == '\0') || (g_bss_0034b25a == '\0')) {
      if (((&g_bss_0034bbd8)[val] != '\0') &&
         ((g_bss_0034b25b != '\0' && (local_1c = 1, *(int *)(&g_bss_0034bbe1 + val) != 0)))) {
        g_bss_0034b25b = '\0';
        goto LAB_000585f6;
      }
    }
    else {
      local_1c = 1;
      if ((((*(int *)((int)&g_bss_0034bbdd + val) != 0) || ((*byte_ptr_2 & 2) != 0)) ||
          (*(int *)((int)&g_bss_0034bc05 + val) != 0)) || ((&g_bss_0034bbdc)[val] == '\x03')) {
        g_bss_0034b25a = '\0';
LAB_000585f6:
        local_1c = 1;
        byte_ptr_2 = (byte *)newgui_fn_0587ff();
      }
    }
  }
  if (((arg_eax != 0) && (byte_ptr_2 = (byte *)(int)g_bss_0034bad2, byte_ptr_2 == (byte *)0x0)) &&
     (g_bss_0034cfe3 == '\0')) {
    get_scaled_viewport_bottom_y();
    val = command_fn_07825a();
    byte_ptr_2 = (byte *)0x0;
    if (((val != 0) &&
        (byte_ptr_2 = (byte *)(g_my_player_word._3_1_ * 0x4ef),
        (*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(local_31,local_33) * 5 + 1) >> 0x1c &
        1 << (byte_ptr_2[0x19d0f3] & 0x1f)) != 0)) &&
       (byte_ptr = byte_ptr_2 + 0x19d0ff, byte_ptr_2 = (byte *)0x0, *byte_ptr != 1)) {
      ui_scale_2 = newgui_update_player_view_state_05bf63();
      byte_ptr_2 = (byte *)(ui_scale_2 & 0xff);
      if (byte_ptr_2 == (byte *)0x0) {
        ui_scale_2 = newgui_process_thing_entity_05c053();
        byte_ptr_2 = (byte *)(ui_scale_2 & 0xff);
        if (byte_ptr_2 == (byte *)0x0) {
          ui_scale_2 = newgui_process_slabmap_tile_05be78();
          byte_ptr_2 = (byte *)(ui_scale_2 & 0xff);
          if (byte_ptr_2 == (byte *)0x0) {
            ui_scale_2 = newgui_process_dungeon_room_05bd22();
            byte_ptr_2 = (byte *)(ui_scale_2 & 0xff);
            if (byte_ptr_2 == (byte *)0x0) {
              g_bss_0034bad4 = 0;
              g_bss_0034bac9 = 0;
            }
          }
        }
      }
    }
  }
  if (g_bss_0034b2c4 == '\0') {
    byte_ptr_2 = (byte *)newgui_fn_05ceca();
  }
  uval = CONCAT31((int3)((uint)byte_ptr_2 >> 8),local_1c);
LAB_0005499e:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : newgui_fn_058718 (Original VA: 0x58718, Ghidra: FUN_00058718)
 * Prototype: void newgui_fn_058718(void);
 * Address  : 0x58718 (Size: 142 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x058718
 * Callers  : 2 -> newgui_process_map_subtile_057fe4, newgui_fn_05cda7
 * Callees  : 3 -> newgui_fn_054324, newgui_fn_05435a, newgui_fn_05cee9
 ******************************************************************************/
void newgui_fn_058718(void)

{
  undefined1 *word_ptr;
  byte *gui_btn;
  byte *arg_edx;
  undefined1 *extraout_EDX;
  code *arg_ebx;
  
  word_ptr = *(undefined1 **)(gui_btn + 0x33); /* gui_btn->content */
  if ((gui_btn[6] != 3) || (gui_btn + 2 != arg_edx)) {
    if ((*gui_btn & 8) == 0) {
      return;
    }
    switch(gui_btn[6]) {
    case 0:
    case 2:
    case 5:
    case 6:
      *arg_edx = 1;
      return;
    case 3:
      if ((*(int *)(gui_btn + 0x33) != 0) && (*arg_edx == 0)) { /* gui_btn->content */
        newgui_fn_05cee9();
        newgui_fn_054324();
        *word_ptr = 1;
        *extraout_EDX = 1;
        newgui_fn_05435a();
      }
      if (arg_ebx != (code *)0x0) {
        (*arg_ebx)();
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0587a6 (Original VA: 0x587a6, Ghidra: FUN_000587a6)
 * Prototype: void newgui_fn_0587a6(void);
 * Address  : 0x587a6 (Size: 89 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0587a6
 * Callers  : 2 -> newgui_process_map_subtile_057fe4, newgui_fn_05cda7
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_0587a6(void)

{
  byte flag;
  byte *arg_eax;
  byte *arg_edx;
  code *arg_ebx;
  
  if ((arg_eax[6] != 3) || (arg_eax + 2 != arg_edx)) {
    if ((*arg_eax & 8) == 0) {
      return;
    }
    flag = arg_eax[6];
    if (flag < 2) {
      if (flag != 0) {
        if ((*arg_edx < 6) || (arg_ebx == (code *)0x0)) {
          *arg_edx = *arg_edx + 1;
          return;
        }
LAB_000587c7:
        (*arg_ebx)();
        return;
      }
    }
    else if (((3 < flag) && (4 < flag)) && (5 < flag)) {
      if (flag != 6) {
        return;
      }
      if (arg_ebx != (code *)0x0) goto LAB_000587c7;
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0587ff (Original VA: 0x587ff, Ghidra: FUN_000587ff)
 * Prototype: void newgui_fn_0587ff(void);
 * Address  : 0x587ff (Size: 183 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0587ff
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 4 -> newgui_oi_there_fade_time_053ccc, newgui_backup_input_field_small_05b1bc, newgui_fn_05cee9, newgui_fn_05cef9
 ******************************************************************************/
void newgui_fn_0587ff(void)

{
  byte flag;
  byte *byte_ptr;
  byte *gui_btn;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *arg_edx;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  undefined1 *word_ptr;
  undefined1 *extraout_EDX_01;
  undefined1 *extraout_EDX_02;
  code *arg_ebx;
  
  byte_ptr = *(byte **)(gui_btn + 0x33); /* gui_btn->content */
  if ((gui_btn[6] != 3) || (gui_btn + 2 != arg_edx)) {
    flag = gui_btn[6];
    if (flag < 3) {
      if ((1 < flag) && (*byte_ptr = *byte_ptr + 1, *(short *)(gui_btn + 0x2d) < (short)(ushort)*byte_ptr)
         ) {
        *byte_ptr = 0;
      }
      if ((*arg_edx != 0) && (arg_ebx != (code *)0x0)) {
        newgui_fn_05cee9();
        (*arg_ebx)();
        gui_btn = extraout_ECX_00;
        arg_edx = extraout_EDX_00;
      }
      *arg_edx = 0;
    }
    else if (((3 < flag) && (4 < flag)) && (flag < 6)) {
      g_bss_0034cf1f = gui_btn;
      newgui_backup_input_field_small_05b1bc();
      gui_btn = extraout_ECX;
      arg_edx = extraout_EDX;
    }
    if (gui_btn + 1 == arg_edx) {
      word_ptr = &g_bss_0034bad6 + (char)gui_btn[3] * 0x20;
      if (*(int *)(gui_btn + 0x2f) != 0) {
        newgui_oi_there_fade_time_053ccc();
        gui_btn = extraout_ECX_01;
        word_ptr = extraout_EDX_01;
      }
      if (((*gui_btn & 2) != 0) && (gui_btn[6] != 5)) {
        if (arg_ebx == (code *)0x0) {
          newgui_fn_05cef9();
          word_ptr = extraout_EDX_02;
        }
        word_ptr[1] = 3;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_0588b6 (Original VA: 0x588b6, Ghidra: FUN_000588b6)
 * Prototype: ulonglong newgui_fn_0588b6(void);
 * Address  : 0x588b6 (Size: 107 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0588b6
 * Callers  : 2 -> newgui_draw_text_overlay_05449e, newgui_fn_05c848
 * Callees  : 0 -> 
 ******************************************************************************/
ulonglong newgui_fn_0588b6(void)

{
  short *val;
  char ch;
  int arg_eax;
  undefined3 uval;
  undefined4 arg_edx;
  
  ch = *(char *)(arg_eax + 1);
  if (ch != '\0') {
    if (ch == '\x01') {
      uval = (undefined3)((uint)arg_eax >> 8);
      if (*(short *)(arg_eax + 2) == 0) {
        *(undefined2 *)(arg_eax + 2) = 1;
        return (ulonglong)CONCAT43(arg_edx,uval) << 8;
      }
      val = (short *)(arg_eax + 2);
      *val = *val + -1;
      if (*val == 0) {
        if (*(short *)(*(int *)(arg_eax + 0x15) + 2) == 0) {
          *(undefined2 *)(arg_eax + 2) = 1;
        }
        else {
          *(undefined2 *)(arg_eax + 2) = *(undefined2 *)(*(int *)(arg_eax + 0x15) + 2);
        }
        *(undefined1 *)(arg_eax + 1) = 2;
        return CONCAT44(arg_edx,CONCAT31(uval,1));
      }
    }
    else if (ch == '\x03') {
      if (*(short *)(arg_eax + 2) != 0) {
        *(short *)(arg_eax + 2) = *(short *)(arg_eax + 2) + -1;
        arg_eax = (int)*(short *)(arg_eax + 2);
        if (0 < arg_eax) goto LAB_0005891d;
      }
      return CONCAT44(arg_edx,CONCAT31((int3)((uint)arg_eax >> 8),0xff));
    }
  }
LAB_0005891d:
  return CONCAT44(arg_edx,arg_eax) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : newgui_jonty_here_am_writing_058921 (Original VA: 0x58921, Ghidra: FUN_00058921)
 * Prototype: void newgui_jonty_here_am_writing_058921(void);
 * Address  : 0x58921 (Size: 349 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : String 'JONTY HERE   : ...I AM WRITING THIS AT 4AM ON KEEPERS LAST D'
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 3 -> get_scaled_viewport_bottom_y, dk_sprintf, LbMemoryCopy
 ******************************************************************************/
void newgui_jonty_here_am_writing_058921(void)

{
  short short_val;
  int gui_btn;
  int player_off;
  undefined *word_ptr;
  byte flag;
  char *str_ptr;
  undefined4 uval;
  
  if (*(short *)(gui_btn + 0x2b) == 0xc9) {
    return;
  }
  if (g_bss_002ee920 == '\0') {
    return;
  }
  g_bss_0034b2c4 = 1;
  LbMemoryCopy();
  short_val = *(short *)(gui_btn + 0x2b);
  if ((short_val == 0x1c8) || (short_val == 0x1c7)) {
    player_off = *(int *)(g_bss_0034bac5 + 0x33) * 0x4ef;
    if ((&g_bss_0019d0dd)[player_off] == '\0') {
      dk_sprintf(&g_bss_0034b2c5,&g_data_00165ec5,(&g_bss_0033319b)[*(ushort *)(gui_btn + 0x2b)]);
      goto LAB_00058a49;
    }
    word_ptr = &g_bss_0019d0dd + player_off;
    uval = (&g_bss_0033319b)[*(ushort *)(gui_btn + 0x2b)];
    str_ptr = s__s___s_00165ebe;
  }
  else {
    if ((short_val == 0x292) && (0x10 < (byte)(&g_bss_002e0e5d)[g_my_player_word._3_1_ * 0x1508])) {
      LbMemoryCopy();
      goto LAB_00058a49;
    }
    if (*(short *)(gui_btn + 0x2b) != 0x2dd) goto LAB_00058a49;
    if (*(short *)(gui_btn + 0x1b) == 0) { /* gui_btn->id_num */
      flag = 0x17;
    }
    else {
      flag = *(byte *)(&g_bss_0034d1a8 + (int)*(short *)(gui_btn + 0x1b) + (int)g_bss_0034d0e5); /* gui_btn->id_num */
    }
    word_ptr = (undefined *)(&g_bss_0033319b)[*(ushort *)(gui_btn + 0x2b)];
    uval = (&g_bss_0033319b)[*(ushort *)(&g_data_00188bf7 + (uint)flag * 5)];
    str_ptr = s___6s___s_00165ec8;
  }
  dk_sprintf(&g_bss_0034b2c5,str_ptr,uval,word_ptr);
LAB_00058a49:
  if (gui_btn != g_bss_0034bac5) {
    g_bss_0034bace = (short)g_graphics_window_width * g_units_per_pixel;
    g_bss_0034bac5 = gui_btn;
    short_val = get_scaled_viewport_bottom_y();
    g_bss_0034bad0 = short_val + 0x56;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_058a7e (Original VA: 0x58a7e, Ghidra: FUN_00058a7e)
 * Prototype: void newgui_fn_058a7e(void);
 * Address  : 0x58a7e (Size: 163 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x058a7e
 * Callers  : 1 -> newgui_draw_text_overlay_058ba8
 * Callees  : 3 -> newgui_fn_058b21, newgui_this_bloody_tooltip_long_058b37, bflib_system_io_fn_0efdb4
 ******************************************************************************/
void newgui_fn_058a7e(void)

{
  undefined1 uval;
  int arg_eax;
  int loop_i;
  int val;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  int val_2;
  
  loop_i = newgui_fn_058b21();
  val_2 = 10 - loop_i;
  val = bflib_system_io_fn_0efdb4();
  val = val + 9;
  if (0 < val_2) {
    word_ptr_2 = (undefined1 *)(val + arg_eax);
    word_ptr = word_ptr_2 + -val_2;
    for (; 9 < val; val = val + -1) {
      uval = *word_ptr;
      word_ptr = word_ptr + -1;
      *word_ptr_2 = uval;
      word_ptr_2 = word_ptr_2 + -1;
    }
    word_ptr_2 = (undefined1 *)(val + arg_eax);
    for (; loop_i <= val; val = val + -1) {
      *word_ptr_2 = 0x20;
      word_ptr_2 = word_ptr_2 + -1;
    }
    word_ptr_2 = (undefined1 *)(arg_eax + 9);
    word_ptr = word_ptr_2 + -(val_2 / 2);
    for (loop_i = 9; val_2 / 2 <= loop_i; loop_i = loop_i + -1) {
      uval = *word_ptr;
      word_ptr = word_ptr + -1;
      *word_ptr_2 = uval;
      word_ptr_2 = word_ptr_2 + -1;
    }
    word_ptr_2 = (undefined1 *)(loop_i + arg_eax);
    for (; -1 < loop_i; loop_i = loop_i + -1) {
      *word_ptr_2 = 0x20;
      word_ptr_2 = word_ptr_2 + -1;
    }
  }
  newgui_this_bloody_tooltip_long_058b37();
  return;
}

/******************************************************************************
 * Function : newgui_fn_058b21 (Original VA: 0x58b21, Ghidra: FUN_00058b21)
 * Prototype: int newgui_fn_058b21(void);
 * Address  : 0x58b21 (Size: 22 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x058b21
 * Callers  : 1 -> newgui_fn_058a7e
 * Callees  : 0 -> 
 ******************************************************************************/
int newgui_fn_058b21(void)

{
  char *arg_eax;
  char arg_dl;
  int val;
  
  val = 0;
  for (; (arg_dl != *arg_eax && (*arg_eax != '\0')); arg_eax = arg_eax + 1) {
    val = val + 1;
  }
  return val;
}

/******************************************************************************
 * Function : newgui_this_bloody_tooltip_long_058b37 (Original VA: 0x58b37, Ghidra: FUN_00058b37)
 * Prototype: int newgui_this_bloody_tooltip_long_058b37(void);
 * Address  : 0x58b37 (Size: 113 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 6287
 * Purpose  : String 'This bloody tooltip is too long'
 * Callers  : 1 -> newgui_fn_058a7e
 * Callees  : 4 -> LbErrorLog, bflib_system_io_draw_text_overlay_0e6c1c, dk_sprintf, bflib_system_io_fn_0f323f
 ******************************************************************************/
int newgui_this_bloody_tooltip_long_058b37(void)

{
  char *arg_eax;
  int extraout_ECX;
  int val;
  int extraout_ECX_00;
  char extraout_DL;
  
  dk_sprintf(&g_log_sprintf_buf,&g_data_00165ed1);
  val = extraout_ECX;
  for (; (extraout_DL != *arg_eax && (*arg_eax != '\0')); arg_eax = arg_eax + 1) {
    val = val + 1;
  }
  if (0x100 < val) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 6287, "This bloody tooltip is too long") */
  }
  bflib_system_io_fn_0f323f();
  (&g_log_sprintf_buf)[extraout_ECX_00] = 0;
  val = bflib_system_io_draw_text_overlay_0e6c1c();
  return val * (uint)g_units_per_pixel;
}

/******************************************************************************
 * Function : newgui_draw_text_overlay_058ba8 (Original VA: 0x58ba8, Ghidra: FUN_00058ba8)
 * Prototype: void newgui_draw_text_overlay_058ba8(void);
 * Address  : 0x58ba8 (Size: 255 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 5 -> creature_dene_says_big_hello_08685c, draw_fn_0872a4, draw_update_player_dungeon_0872b8, draw_fn_087694, draw_update_creature_and_thing_087870
 * Callees  : 6 -> newgui_fn_058a7e, newgui_draw_text_overlay_058ca7, get_scaled_viewport_bottom_y, LbTextDraw, bflib_system_io_draw_text_overlay_0e6c1c, bflib_system_io_draw_text_overlay_0e6d20
 ******************************************************************************/
void newgui_draw_text_overlay_058ba8(void)

{
  ushort saved_draw_flags;
  int *int_ptr;
  undefined8 uval;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  saved_draw_flags = g_lb_display_draw_flags;
  int_ptr = &local_18;
  g_lb_current_font_ptr = g_frontend_font_ptr;
  if (g_bss_0034b2c4 != '\0') {
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf;
    uStack_1c = 0x58bf3;
    local_18 = newgui_fn_058a7e();
    uStack_1c = 0x58c00;
    bflib_system_io_draw_text_overlay_0e6c1c();
    uStack_1c = 0x58c14;
    iStack_20 = bflib_system_io_draw_text_overlay_0e6d20();
    iStack_20 = (uint)g_units_per_pixel * iStack_20;
    g_lb_display_draw_flags = saved_draw_flags;
    if ((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x04') {
      uStack_1c = 0x58c43;
      uval = get_scaled_viewport_bottom_y();
      iStack_20 = (int)((ulonglong)uval >> 0x20);
    }
    uStack_1c = local_18;
    int_ptr = &iStack_20;
    newgui_draw_text_overlay_058ca7();
  }
  *(undefined4 *)((int)int_ptr + -4) = 0x58c9b;
  LbTextDraw();
  g_bss_0034b2c4 = 0;
  return;
}

/******************************************************************************
 * Function : newgui_draw_text_overlay_058ca7 (Original VA: 0x58ca7, Ghidra: FUN_00058ca7)
 * Prototype: void newgui_draw_text_overlay_058ca7(undefined4 param_1,int param_2);
 * Address  : 0x58ca7 (Size: 373 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> newgui_draw_text_overlay_058ba8
 * Callees  : 3 -> newgui_fn_058e1c, LbTextDraw, LbTextDrawFormatted
 ******************************************************************************/
void newgui_draw_text_overlay_058ca7(undefined4 param_1,int param_2)

{
  ushort saved_draw_flags;
  char *arg_eax;
  int arg_ecx;
  
  saved_draw_flags = g_lb_display_draw_flags;
  if (param_2 < arg_ecx) {
    if (g_bss_0034b2c0 < 1) {
      if (-arg_ecx < g_bss_0034b2bc) {
        g_bss_0034b2bc = g_bss_0034b2bc + -4;
      }
      else {
        g_bss_0034b2bc = param_2;
      }
    }
    else {
      g_bss_0034b2c0 = g_bss_0034b2c0 + -1;
      if (g_bss_0034b2c0 == 0) {
        g_bss_0034b2bc = 0;
      }
    }
  }
  if ((arg_eax != (char *)0x0) && (g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffbf, *arg_eax != '\0')) {
    LbTextDraw();
    newgui_fn_058e1c();
    g_lb_display_draw_flags = 0;
    LbTextDrawFormatted();
  }
  LbTextDraw();
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : newgui_fn_058e1c (Original VA: 0x58e1c, Ghidra: FUN_00058e1c)
 * Prototype: void newgui_fn_058e1c(void);
 * Address  : 0x58e1c (Size: 732 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x058e1c
 * Callers  : 4 -> newgui_draw_text_overlay_058ca7, creature_dene_says_big_hello_08685c, draw_draw_text_overlay_08d998, draw_draw_text_overlay_08dcd0
 * Callees  : 2 -> LbFileClose, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_fn_058e1c(void)

{
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int arg_ecx;
  uint ui_scale;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int arg_edx;
  int arg_ebx;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_10;
  
  ui_scale = (uint)g_units_per_pixel;
  val = arg_eax / (int)ui_scale;
  val_2 = arg_edx / (int)ui_scale;
  local_10 = arg_ecx / (int)ui_scale;
  val_3 = arg_ebx / (int)ui_scale;
  if (val < 0) {
    val_3 = val_3 + val;
    val = 0;
  }
  if (val_2 < 0) {
    local_10 = local_10 + val_2;
    val_2 = 0;
  }
  if ((int)((uint)g_units_per_pixel * g_screen_width) < val + val_3) {
    val_3 = (uint)g_units_per_pixel * g_screen_width - val;
  }
  if ((int)(uint)g_mouse_cursor_x < local_10 + val_2) {
    local_10 = (uint)g_mouse_cursor_x - val_2;
  }
  val = val_3 + -0x40;
  local_18 = 0;
  do {
    if (local_10 <= local_18) {
      val_3 = arg_eax + 10;
      while (val_3 < arg_eax + arg_ebx + -0xc) {
        watcom_crt_fn_13a710();
        watcom_crt_fn_13a710();
        val_3 = extraout_ECX_02;
      }
      val_3 = arg_edx + 10;
      while (val_3 < arg_edx + arg_ecx + -0xc) {
        watcom_crt_fn_13a710();
        watcom_crt_fn_13a710();
        val_3 = extraout_ECX_03;
      }
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      return;
    }
    if (val_3 < 0x40) {
LAB_00058ee4:
      LbFileClose();
      val_3 = extraout_ECX;
    }
    else {
      LbFileClose();
      local_20 = 0x40;
      val_3 = extraout_ECX_00;
      while (local_20 < val) {
        local_20 = local_20 + 0x40;
        LbFileClose();
        val_3 = extraout_ECX_01;
      }
      if (val_3 != local_20 && -1 < val_3 - local_20) goto LAB_00058ee4;
    }
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : newgui_fn_0590f8 (Original VA: 0x590f8, Ghidra: FUN_000590f8)
 * Prototype: void newgui_fn_0590f8(void);
 * Address  : 0x590f8 (Size: 555 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0590f8
 * Callers  : 1 -> newgui_fn_059a23
 * Callees  : 2 -> bflib_system_io_fn_0f0870, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_fn_0590f8(void)

{
  int arg_eax;
  uint saved_draw_flags;
  int ui_scale;
  int val;
  int val_2;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int val_3;
  int arg_edx;
  int arg_ebx;
  undefined4 uval;
  undefined2 uval_2;
  
  saved_draw_flags = (uint)g_lb_display_draw_flags;
  ui_scale = (arg_ecx + -8) / (int)(uint)g_units_per_pixel;
  uval = 1;
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xffeb;
  g_lb_display_draw_flags = g_lb_display_draw_flags | 4;
  bflib_system_io_fn_0f0870(1,(arg_edx + 4) / (int)(uint)g_units_per_pixel,ui_scale);
  val = arg_ecx + arg_edx + -4;
  val_3 = arg_eax + 0x22;
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xfffb;
  while (val_3 < arg_eax + arg_ebx + -0x22) {
    watcom_crt_fn_13a710(uval,arg_edx / (int)(uint)g_units_per_pixel,g_data_00199230 + 0x5ac,val);
    ui_scale = g_data_00199230 + 0x5d0;
    watcom_crt_fn_13a710(uval,val / (int)(uint)g_units_per_pixel,ui_scale);
    val_3 = extraout_ECX;
  }
  val_3 = arg_edx + 0x1c;
  val_2 = arg_ebx + arg_eax + -4;
  while (val_3 < arg_edx + arg_ecx + -0x1c) {
    watcom_crt_fn_13a710(uval,val_3 / (int)(uint)g_units_per_pixel,g_data_00199230 + 0x5b8,val,saved_draw_flags,val_2);
    ui_scale = g_data_00199230 + 0x5c4;
    watcom_crt_fn_13a710(uval,extraout_ECX_00 / (int)(uint)g_units_per_pixel,ui_scale);
    val_3 = extraout_ECX_01;
  }
  watcom_crt_fn_13a710(uval,g_data_00199230 + 0x5a6,ui_scale,val,saved_draw_flags,val_2);
  uval_2 = (undefined2)saved_draw_flags;
  watcom_crt_fn_13a710(uval,arg_edx / (int)(uint)g_units_per_pixel);
  watcom_crt_fn_13a710(uval,(uint)g_units_per_pixel,(arg_edx + arg_ecx + -0x1c) / (int)(uint)g_units_per_pixel);
  watcom_crt_fn_13a710();
  g_lb_display_draw_flags = uval_2;
  return;
}

/******************************************************************************
 * Function : newgui_fn_059323 (Original VA: 0x59323, Ghidra: FUN_00059323)
 * Prototype: void newgui_fn_059323(void);
 * Address  : 0x59323 (Size: 648 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059323
 * Callers  : 1 -> newgui_fn_05990a
 * Callees  : 1 -> watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_fn_059323(void)

{
  int arg_eax;
  int val;
  int val_2;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int arg_ebx;
  int val_3;
  int val_4;
  int val_5;
  
  val_4 = arg_edx + -4;
  val_5 = arg_ecx + arg_edx;
  val = arg_eax + 10;
  val_3 = arg_eax + arg_ebx + -0xc;
  while (val < val_3) {
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    val = extraout_ECX;
  }
  val = arg_edx + 10;
  while (val < arg_edx + arg_ecx + -0x10) {
    watcom_crt_fn_13a710();
    watcom_crt_fn_13a710();
    val = extraout_ECX_00;
  }
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  val = arg_ecx + arg_edx;
  val_2 = val + -0x1c;
  watcom_crt_fn_13a710(val,val_2,val_2 / (int)(uint)g_units_per_pixel,(uint)g_units_per_pixel,val_4,val_3,val_5);
  watcom_crt_fn_13a710(val,val_2,val_2 / (int)(uint)g_units_per_pixel,g_data_001991c0 + 0x72);
  watcom_crt_fn_13a710(val,val_2,g_units_per_pixel);
  watcom_crt_fn_13a710(val,val_2,g_data_001991c0 + 0x42,(val + -0x4e) / (int)(uint)g_units_per_pixel);
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 1;
  watcom_crt_fn_13a710();
  watcom_crt_fn_13a710();
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfe;
  return;
}

/******************************************************************************
 * Function : newgui_fn_0595ab (Original VA: 0x595ab, Ghidra: FUN_000595ab)
 * Prototype: void newgui_fn_0595ab(void);
 * Address  : 0x595ab (Size: 863 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x0595ab
 * Callers  : 2 -> newgui_fn_05990a, packet_draw_debug_cursor_overlay
 * Callees  : 2 -> LbFileClose, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_fn_0595ab(void)

{
  int arg_eax;
  int arg_ecx;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int arg_ebx;
  undefined4 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  do {
    if (arg_ecx / (int)(uint)g_units_per_pixel <= local_18) {
      val = arg_eax + 10;
      while (val < arg_eax + arg_ebx + -0xc) {
        watcom_crt_fn_13a710();
        watcom_crt_fn_13a710();
        val = extraout_ECX;
      }
      val = arg_edx + 10;
      while (val < arg_edx + arg_ecx + -0x10) {
        watcom_crt_fn_13a710();
        watcom_crt_fn_13a710();
        val = extraout_ECX_00;
      }
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags | 1;
      watcom_crt_fn_13a710();
      watcom_crt_fn_13a710();
      g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfe;
      return;
    }
    if (arg_ebx < 0x40) {
LAB_00059636:
      LbFileClose();
    }
    else {
      LbFileClose();
      local_10 = 0x40;
      while (local_10 < arg_ebx / (int)(uint)g_units_per_pixel + -0x40) {
        local_10 = local_10 + 0x40;
        LbFileClose();
      }
      if (arg_ebx != local_10 && -1 < arg_ebx - local_10) goto LAB_00059636;
    }
    local_18 = local_18 + 1;
  } while( true );
}

/******************************************************************************
 * Function : newgui_fn_05990a (Original VA: 0x5990a, Ghidra: FUN_0005990a)
 * Prototype: void newgui_fn_05990a(void);
 * Address  : 0x5990a (Size: 281 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05990a
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_fn_059323, newgui_fn_0595ab
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_05990a(void)

{
  int arg_eax;
  
  if (g_data_00165efe <= (double)g_bss_002e8c0d) {
    if (0 < *(short *)(*(int *)(arg_eax + 0x15) + 2)) goto LAB_00059970;
  }
  else {
    if (*(char *)(arg_eax + 1) != '\x01') goto LAB_00059970;
    *(undefined2 *)(arg_eax + 2) = 1;
  }
  *(undefined1 *)(arg_eax + 1) = 2;
LAB_00059970:
  if ((*(char *)(arg_eax + 1) == '\x01') || (*(char *)(arg_eax + 1) == '\x03')) {
    newgui_fn_059323();
  }
  else {
    newgui_fn_0595ab();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_059a23 (Original VA: 0x59a23, Ghidra: FUN_00059a23)
 * Prototype: void newgui_fn_059a23(void);
 * Address  : 0x59a23 (Size: 204 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059a23
 * Callers  : 0 -> 
 * Callees  : 1 -> newgui_fn_0590f8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_059a23(void)

{
  int arg_eax;
  
  if (g_data_00165f06 <= (double)g_bss_002e8c0d) {
    if (0 < *(short *)(*(int *)(arg_eax + 0x15) + 2)) goto LAB_00059a78;
  }
  else {
    if (*(char *)(arg_eax + 1) != '\x01') goto LAB_00059a78;
    *(undefined2 *)(arg_eax + 2) = 1;
  }
  *(undefined1 *)(arg_eax + 1) = 2;
LAB_00059a78:
  newgui_fn_0590f8();
  return;
}

/******************************************************************************
 * Function : newgui_fn_059aef (Original VA: 0x59aef, Ghidra: FUN_00059aef)
 * Prototype: void newgui_fn_059aef(void);
 * Address  : 0x59aef (Size: 386 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059aef
 * Callers  : 0 -> 
 * Callees  : 1 -> get_scaled_viewport_bottom_y
 ******************************************************************************/
void newgui_fn_059aef(void)

{
  short ui_scale;
  int arg_eax;
  int val;
  short extraout_CX;
  int extraout_EDX;
  short short_val;
  short short_val_2;
  
  short_val = (&g_bss_0034bade)[*(char *)(arg_eax + 3) * 0x10];
  short_val_2 = (&g_bss_0034bae0)[*(char *)(arg_eax + 3) * 0x10];
  ui_scale = (short)g_graphics_window_width * g_units_per_pixel;
  if (g_data_0017d179 != -999) {
    ui_scale = get_scaled_viewport_bottom_y();
    short_val = short_val - extraout_CX;
    short_val_2 = short_val_2 - ((short)g_data_0017d17b - ui_scale);
    if (short_val < 0) {
      short_val = 0;
    }
    else if ((int)((uint)g_mouse_cursor_y - (uint)*(ushort *)(extraout_EDX + 0xc)) < (int)short_val) {
      short_val = g_mouse_cursor_y - *(short *)(extraout_EDX + 0xc);
    }
    if (short_val_2 < 0) {
      short_val_2 = 0;
    }
    else if ((int)((uint)g_mouse_cursor_x - (uint)*(ushort *)(extraout_EDX + 0xe)) < (int)short_val_2) {
      short_val_2 = g_mouse_cursor_x - *(short *)(extraout_EDX + 0xe);
    }
    for (ui_scale = 0; ui_scale < 0x56; ui_scale = ui_scale + 1) {
      val = ui_scale * 0x39;
      if ((((&g_bss_0034bbd6)[val] & 1) != 0) && ((&g_bss_0034bbd9)[val] == *(char *)(arg_eax + 3)))
      {
        *(short *)((int)&g_bss_0034bbf3 + val) =
             *(short *)((int)&g_bss_0034bbf3 + val) + (short_val - *(short *)(extraout_EDX + 8));
        *(short *)(&g_bss_0034bbf5 + val) =
             *(short *)(&g_bss_0034bbf5 + val) + (short_val_2 - *(short *)(extraout_EDX + 10));
        *(short *)(&g_bss_0034bbf7 + val) =
             *(short *)(&g_bss_0034bbf7 + val) + (short_val - *(short *)(extraout_EDX + 8));
        *(short *)((int)&g_bss_0034bbf9 + val) =
             *(short *)((int)&g_bss_0034bbf9 + val) + (short_val_2 - *(short *)(extraout_EDX + 10));
      }
    }
    if (g_data_0017d175 != -999) {
      g_data_0017d175 = g_data_0017d175 + (short_val - *(short *)(extraout_EDX + 8));
      g_data_0017d177 = g_data_0017d177 + (short_val_2 - *(short *)(extraout_EDX + 10));
    }
    if (g_bss_0034b2c4 != '\0') {
      g_bss_0034bace = g_bss_0034bace + (short_val - *(short *)(extraout_EDX + 8));
      g_bss_0034bad0 = g_bss_0034bad0 + (short_val_2 - *(short *)(extraout_EDX + 10));
    }
    *(short *)(extraout_EDX + 8) = short_val;
    *(short *)(extraout_EDX + 10) = short_val_2;
    ui_scale = (short)g_graphics_window_width * g_units_per_pixel;
  }
  g_data_0017d179 = ui_scale;
  g_data_0017d17b._0_2_ = get_scaled_viewport_bottom_y();
  return;
}

/******************************************************************************
 * Function : newgui_fn_059c71 (Original VA: 0x59c71, Ghidra: FUN_00059c71)
 * Prototype: void newgui_fn_059c71(void);
 * Address  : 0x59c71 (Size: 18 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059c71
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_059c71(void)

{
  if ('\0' < g_bss_0034d0e5) {
    g_bss_0034d0e5 = g_bss_0034d0e5 + -1;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_059c83 (Original VA: 0x59c83, Ghidra: FUN_00059c83)
 * Prototype: void newgui_fn_059c83(void);
 * Address  : 0x59c83 (Size: 30 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059c83
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_059c83(void)

{
  if (g_bss_0034d0e5 + 6 < (int)g_bss_0034d0e4) {
    g_bss_0034d0e5 = g_bss_0034d0e5 + '\x01';
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_059ca1 (Original VA: 0x59ca1, Ghidra: FUN_00059ca1)
 * Prototype: void newgui_fn_059ca1(void);
 * Address  : 0x59ca1 (Size: 22 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * Purpose  : Module newgui.cpp procedure @ 0x059ca1
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_059ca1(void)

{
  LbErrorLog();
  return;
}

/******************************************************************************
 * Function : newgui_fn_059ccb (Original VA: 0x59ccb, Ghidra: FUN_00059ccb)
 * Prototype: void newgui_fn_059ccb(void);
 * Address  : 0x59ccb (Size: 88 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059ccb
 * Callers  : 2 -> newgui_fn_05b645, newgui_fn_05b940
 * Callees  : 1 -> newgui_fn_053c6b
 ******************************************************************************/
void newgui_fn_059ccb(void)

{
  int val;
  int extraout_ECX;
  byte *byte_ptr;
  byte *extraout_EDX;
  
  val = newgui_fn_053c6b();
  if (val != -1) {
    byte_ptr = &g_bss_0034bbd6;
    (&g_bss_0034baf3)[val * 0x20] = 1;
    do {
      if ((((*byte_ptr & 1) != 0) && ((char)byte_ptr[3] == val)) && (*(int *)(byte_ptr + 0x17) != 0)) {
        (**(code **)(byte_ptr + 0x17))();
        val = extraout_ECX;
        byte_ptr = extraout_EDX;
      }
      byte_ptr = byte_ptr + 0x39;
    } while (byte_ptr != &g_bss_0034cefc);
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_059d02 (Original VA: 0x59d02, Ghidra: FUN_00059d02)
 * Prototype: void newgui_fn_059d02(void);
 * Address  : 0x59d02 (Size: 24 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059d02
 * Callers  : 2 -> newgui_fn_05b645, newgui_fn_05b940
 * Callees  : 1 -> newgui_fn_053c6b
 ******************************************************************************/
void newgui_fn_059d02(void)

{
  int val;
  
  val = newgui_fn_053c6b();
  if (val != -1) {
    (&g_bss_0034baf3)[val * 0x20] = 0;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_059d1a (Original VA: 0x59d1a, Ghidra: FUN_00059d1a)
 * Prototype: void newgui_fn_059d1a(void);
 * Address  : 0x59d1a (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059d1a
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_059d1a(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_059d40 (Original VA: 0x59d40, Ghidra: FUN_00059d40)
 * Prototype: void newgui_fn_059d40(void);
 * Address  : 0x59d40 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059d40
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_059d40(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_059d66 (Original VA: 0x59d66, Ghidra: FUN_00059d66)
 * Prototype: void newgui_fn_059d66(void);
 * Address  : 0x59d66 (Size: 94 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059d66
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_fn_059d66(void)

{
  int gui_btn;
  
  set_packet_action(0,0);
  g_bss_002ee8ad = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  g_bss_002ee8b1 = (uint)*(ushort *)(&g_data_0018f7c9 + *(int *)(gui_btn + 0x33) * 6); /* gui_btn->content */
  g_bss_002ee8b5 = (uint)*(ushort *)(gui_btn + 0x2b);
  return;
}

/******************************************************************************
 * Function : newgui_stupid_spell_chosen_059dc4 (Original VA: 0x59dc4, Ghidra: FUN_00059dc4)
 * Prototype: void newgui_stupid_spell_chosen_059dc4(void);
 * Address  : 0x59dc4 (Size: 291 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 6930
 * Purpose  : String 'Stupid spell chosen'
 * Callers  : 0 -> 
 * Callees  : 3 -> set_packet_action, sound_non_emitter_has_been_06ea5a, LbErrorLog
 ******************************************************************************/
void newgui_stupid_spell_chosen_059dc4(void)

{
  int gui_btn;
  
  if (*(int *)(&g_data_0018e973 + g_bss_002ee8b9 * 0x1b) == 0) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 6930, "Stupid spell chosen") */
  }
  else if (((*(int *)(&g_data_0018e977 + *(int *)(gui_btn + 0x33) * 0x1b) == 6) && /* gui_btn->content */
           ((&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] == '\x06')) ||
          ((*(int *)(&g_data_0018e977 + *(int *)(gui_btn + 0x33) * 0x1b) == 8 && /* gui_btn->content */
           ((&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] == '\b')))) {
    set_packet_action(0,0);
  }
  else {
    set_packet_action(0,0);
    sound_non_emitter_has_been_06ea5a();
  }
  g_bss_002ee8b9 = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  g_bss_002ee8bd = (uint)*(ushort *)(&g_data_0018e97c + *(int *)(gui_btn + 0x33) * 0x1b); /* gui_btn->content */
  g_bss_002ee8c1 = (uint)*(ushort *)(gui_btn + 0x2b);
  return;
}

/******************************************************************************
 * Function : newgui_fn_059ee7 (Original VA: 0x59ee7, Ghidra: FUN_00059ee7)
 * Prototype: void newgui_fn_059ee7(void);
 * Address  : 0x59ee7 (Size: 106 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059ee7
 * Callers  : 0 -> 
 * Callees  : 1 -> newgui_fn_05cf2d
 ******************************************************************************/
void newgui_fn_059ee7(void)

{
  int gui_btn;
  
  g_bss_002ee8b9 = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  g_bss_002ee8c1 = (uint)*(ushort *)(gui_btn + 0x2b);
  g_bss_002ee8bd = (uint)*(ushort *)(&g_data_0018e97c + g_bss_002ee8b9 * 0x1b);
  if ((*(int *)(&g_bss_002eae11 + g_bss_002ee8b9 * 0x4c) <
       (int)(&g_bss_002e1082)[g_my_player_word._3_1_ * 0x542]) &&
     ((g_bss_002ee8b9 == 0x13 || (g_bss_002ee8b9 == 9)))) {
    newgui_fn_05cf2d();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_059f51 (Original VA: 0x59f51, Ghidra: FUN_00059f51)
 * Prototype: void newgui_fn_059f51(void);
 * Address  : 0x59f51 (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059f51
 * Callers  : 0 -> 
 * Callees  : 1 -> magic_fn_050007
 ******************************************************************************/
void newgui_fn_059f51(void)

{
  int extraout_EDX;
  
  magic_fn_050007();
  g_bss_002ee8b9 = *(int *)(extraout_EDX + 0x33);
  g_bss_002ee8bd = (uint)*(ushort *)(&g_data_0018e97c + *(int *)(extraout_EDX + 0x33) * 0x1b);
  g_bss_002ee8c1 = (uint)*(ushort *)(extraout_EDX + 0x2b);
  return;
}

/******************************************************************************
 * Function : newgui_fn_059f7e (Original VA: 0x59f7e, Ghidra: FUN_00059f7e)
 * Prototype: void newgui_fn_059f7e(void);
 * Address  : 0x59f7e (Size: 86 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059f7e
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_fn_059f7e(void)

{
  g_bss_002ee8ad = 0;
  g_bss_002ee8b1 = 0;
  g_bss_002ee8b5 = 0;
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_059fd4 (Original VA: 0x59fd4, Ghidra: FUN_00059fd4)
 * Prototype: void newgui_fn_059fd4(void);
 * Address  : 0x59fd4 (Size: 48 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x059fd4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_059fd4(void)

{
  g_bss_002ee8c5 = 0;
  g_bss_002ee8c9 = 0;
  g_bss_002ee8cd = 0;
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a004 (Original VA: 0x5a004, Ghidra: FUN_0005a004)
 * Prototype: void newgui_fn_05a004(void);
 * Address  : 0x5a004 (Size: 105 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a004
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_fn_05a004(void)

{
  int gui_btn;
  
  set_packet_action(0,0);
  g_bss_002ee8c5 = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  g_bss_002ee8c9 = (uint)*(ushort *)(&g_data_0018ed39 + *(int *)(gui_btn + 0x33) * 0x10); /* gui_btn->content */
  g_bss_002ee8cd = (uint)*(ushort *)(gui_btn + 0x2b);
  return;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_05a06d (Original VA: 0x5a06d, Ghidra: FUN_0005a06d)
 * Prototype: void newgui_process_thing_entity_05a06d(void);
 * Address  : 0x5a06d (Size: 122 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_process_thing_entity_05a06d(void)

{
  int gui_btn;
  
  if ((&g_bss_002e918d)
      [(uint)*(byte *)((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)]
                      + 0x1a) * 0xe6 + (uint)*(byte *)(gui_btn + 0x33)] != '\0') { /* gui_btn->content */
    set_packet_action(0,0);
    g_bss_0019d0b9 = g_bss_0019d0b9 & 0xf7;
    (&g_players)[g_my_player_word._3_1_ * 0x4ef] = (&g_players)[g_my_player_word._3_1_ * 0x4ef] & 0xf7
    ;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a0e7 (Original VA: 0x5a0e7, Ghidra: FUN_0005a0e7)
 * Prototype: void newgui_fn_05a0e7(void);
 * Address  : 0x5a0e7 (Size: 42 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a0e7
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a0e7(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_illegal_autopilot_type_05a111 (Original VA: 0x5a111, Ghidra: FUN_0005a111)
 * Prototype: void newgui_illegal_autopilot_type_05a111(void);
 * Address  : 0x5a111 (Size: 111 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 7051
 * Purpose  : String 'ILLEGAL AUTOPILOT TYPE'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void newgui_illegal_autopilot_type_05a111(void)

{
  if ((((g_bss_002ee8a3 == '\0') && (g_bss_002ee8a4 == '\0')) && (g_bss_002ee8a5 == '\0')) &&
     (g_bss_002ee8a6 == '\0')) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 7051, "ILLEGAL AUTOPILOT TYPE") */
  }
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a180 (Original VA: 0x5a180, Ghidra: FUN_0005a180)
 * Prototype: void newgui_fn_05a180(void);
 * Address  : 0x5a180 (Size: 10 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a180
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a180(void)

{
  creature_fn_084704();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a18a (Original VA: 0x5a18a, Ghidra: FUN_0005a18a)
 * Prototype: void newgui_fn_05a18a(void);
 * Address  : 0x5a18a (Size: 18 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a18a
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_fn_084704
 ******************************************************************************/
void newgui_fn_05a18a(void)

{
  creature_fn_084704();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a19c (Original VA: 0x5a19c, Ghidra: FUN_0005a19c)
 * Prototype: void newgui_fn_05a19c(void);
 * Address  : 0x5a19c (Size: 8 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a19c
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a19c(void)

{
  creature_fn_084704();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a1a4 (Original VA: 0x5a1a4, Ghidra: FUN_0005a1a4)
 * Prototype: void newgui_fn_05a1a4(void);
 * Address  : 0x5a1a4 (Size: 18 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a1a4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a1a4(void)

{
  creature_update_player_dungeon_084750();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a1b6 (Original VA: 0x5a1b6, Ghidra: FUN_0005a1b6)
 * Prototype: void newgui_fn_05a1b6(void);
 * Address  : 0x5a1b6 (Size: 27 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a1b6
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_update_player_dungeon_084750
 ******************************************************************************/
void newgui_fn_05a1b6(void)

{
  creature_update_player_dungeon_084750();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a1d1 (Original VA: 0x5a1d1, Ghidra: FUN_0005a1d1)
 * Prototype: void newgui_fn_05a1d1(void);
 * Address  : 0x5a1d1 (Size: 9 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a1d1
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a1d1(void)

{
  creature_update_player_dungeon_084750();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a1da (Original VA: 0x5a1da, Ghidra: FUN_0005a1da)
 * Prototype: void newgui_fn_05a1da(void);
 * Address  : 0x5a1da (Size: 40 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a1da
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a1da(void)

{
  creature_fn_084704();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a202 (Original VA: 0x5a202, Ghidra: FUN_0005a202)
 * Prototype: void newgui_fn_05a202(void);
 * Address  : 0x5a202 (Size: 41 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a202
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a202(void)

{
  creature_update_player_dungeon_084750();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a22b (Original VA: 0x5a22b, Ghidra: FUN_0005a22b)
 * Prototype: void newgui_fn_05a22b(void);
 * Address  : 0x5a22b (Size: 59 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a22b
 * Callers  : 0 -> 
 * Callees  : 1 -> creature_fn_084704
 ******************************************************************************/
void newgui_fn_05a22b(void)

{
  creature_fn_084704();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a266 (Original VA: 0x5a266, Ghidra: FUN_0005a266)
 * Prototype: void newgui_fn_05a266(void);
 * Address  : 0x5a266 (Size: 61 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a266
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a266(void)

{
  creature_update_player_dungeon_084750();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a2b1 (Original VA: 0x5a2b1, Ghidra: FUN_0005a2b1)
 * Prototype: void newgui_fn_05a2b1(void);
 * Address  : 0x5a2b1 (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a2b1
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a2b1(void)

{
  g_bss_002ee8d2 = g_bss_0034cf1a;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a2bc (Original VA: 0x5a2bc, Ghidra: FUN_0005a2bc)
 * Prototype: void newgui_fn_05a2bc(void);
 * Address  : 0x5a2bc (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a2bc
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a2bc(void)

{
  g_bss_002ee8d3 = g_bss_0034cf1b;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a2c7 (Original VA: 0x5a2c7, Ghidra: FUN_0005a2c7)
 * Prototype: void newgui_fn_05a2c7(void);
 * Address  : 0x5a2c7 (Size: 102 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a2c7
 * Callers  : 0 -> 
 * Callees  : 2 -> file_settings_dat_02a355, set_packet_action
 ******************************************************************************/
void newgui_fn_05a2c7(void)

{
  set_packet_action(0,0);
  file_settings_dat_02a355();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a338 (Original VA: 0x5a338, Ghidra: FUN_0005a338)
 * Prototype: void newgui_fn_05a338(void);
 * Address  : 0x5a338 (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a338
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a338(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a365 (Original VA: 0x5a365, Ghidra: FUN_0005a365)
 * Prototype: void newgui_fn_05a365(void);
 * Address  : 0x5a365 (Size: 67 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a365
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a365(void)

{
  g_bss_0034cf1e = (byte)((ulonglong)(g_bss_0034cf1e + 1) % 5);
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a3a8 (Original VA: 0x5a3a8, Ghidra: FUN_0005a3a8)
 * Prototype: void newgui_fn_05a3a8(void);
 * Address  : 0x5a3a8 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a3a8
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a3a8(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a3ce (Original VA: 0x5a3ce, Ghidra: FUN_0005a3ce)
 * Prototype: void newgui_fn_05a3ce(void);
 * Address  : 0x5a3ce (Size: 73 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a3ce
 * Callers  : 0 -> 
 * Callees  : 4 -> file_settings_dat_02a355, sound_non_emitter_has_been_06ea5a, bflib_system_io_fn_0f3264, bflib_system_io_fn_0f32ae
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void newgui_fn_05a3ce(void)

{
  int arg_eax;
  
  if ((*(short *)(arg_eax + 4) == 0x4b) && (g_bss_002ee8d7 != g_bss_0034cf0d)) {
    sound_non_emitter_has_been_06ea5a();
  }
  g_bss_002ee8d7 = g_bss_0034cf0d;
  file_settings_dat_02a355();
  bflib_system_io_fn_0f32ae();
  bflib_system_io_fn_0f3264();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a417 (Original VA: 0x5a417, Ghidra: FUN_0005a417)
 * Prototype: void newgui_fn_05a417(void);
 * Address  : 0x5a417 (Size: 27 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a417
 * Callers  : 0 -> 
 * Callees  : 2 -> file_settings_dat_02a355, bflib_system_io_bf110_set_redbook_volume_0ecf70
 ******************************************************************************/
void newgui_fn_05a417(void)

{
  g_bss_002ee8d8 = g_bss_0034cf11;
  file_settings_dat_02a355();
  bflib_system_io_bf110_set_redbook_volume_0ecf70();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a432 (Original VA: 0x5a432, Ghidra: FUN_0005a432)
 * Prototype: void newgui_fn_05a432(void);
 * Address  : 0x5a432 (Size: 77 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 7264
 * Purpose  : Module newgui.cpp procedure @ 0x05a432
 * Callers  : 0 -> 
 * Callees  : 2 -> file_update_player_dungeon_02c833, LbErrorLog
 ******************************************************************************/
void newgui_fn_05a432(void)

{
  int val;
  
  val = file_update_player_dungeon_02c833();
  if (val == 0) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 7264, "Error in load!") */
  }
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a47f (Original VA: 0x5a47f, Ghidra: FUN_0005a47f)
 * Prototype: void newgui_fn_05a47f(void);
 * Address  : 0x5a47f (Size: 117 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 7280
 * Purpose  : Module newgui.cpp procedure @ 0x05a47f
 * Callers  : 0 -> 
 * Callees  : 4 -> file_fn_02c785, LbErrorLog, LbMemoryCopy, bflib_system_io_fn_0f09e5
 ******************************************************************************/
void newgui_fn_05a47f(void)

{
  int gui_btn;
  int val;
  
  val = bflib_system_io_fn_0f09e5();
  if (val != 0) {
    LbMemoryCopy();
    (&g_bss_002e6ff4)[(uint)*(byte *)(gui_btn + 0x1b) * 0x11] = 1; /* gui_btn->id_num */
    val = file_fn_02c785();
    if (val == 0) {
      LbErrorLog(); /* LbErrorLog("newgui.cpp", line 7280, "Error in save!") */
    }
  }
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05a521 (Original VA: 0x5a521, Ghidra: FUN_0005a521)
 * Prototype: void newgui_fn_05a521(void);
 * Address  : 0x5a521 (Size: 5 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05a521
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05a521(void)

{
  byte flag;
  
  newgui_fn_05afda();
  flag = g_game_operation_flags & 0x3f;
  g_game_operation_flags = g_game_operation_flags & 0xbf;
  g_game_operation_flags = g_game_operation_flags | (flag >> 5) << 6;
  if (((g_game_system_flags & 1) != 0) || (0x140 < g_screen_width)) {
    flag = newgui_fn_05b645();
    g_game_operation_flags = g_game_operation_flags & 0xbf;
    g_game_operation_flags = g_game_operation_flags | (flag & 1) << 6;
  }
  set_packet_action(0,0);
  newgui_fn_05c2e3();
  return;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_05a526 (Original VA: 0x5a526, Ghidra: FUN_0005a526)
 * Prototype: void newgui_update_player_view_state_05a526(void);
 * Address  : 0x5a526 (Size: 65 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_update_player_view_state_05a526(void)

{
  if ((&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef] != '\x02') {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_05a567 (Original VA: 0x5a567, Ghidra: FUN_0005a567)
 * Prototype: void newgui_update_player_view_state_05a567(void);
 * Address  : 0x5a567 (Size: 78 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_update_player_view_state_05a567(void)

{
  if (*(ushort *)(&g_bss_0019d518 + g_my_player_word._3_1_ * 0x4ef) < 0x800) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_05a5b5 (Original VA: 0x5a5b5, Ghidra: FUN_0005a5b5)
 * Prototype: void newgui_update_player_view_state_05a5b5(void);
 * Address  : 0x5a5b5 (Size: 75 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_update_player_view_state_05a5b5(void)

{
  if (0x80 < *(ushort *)(&g_bss_0019d518 + g_my_player_word._3_1_ * 0x4ef)) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05a600 (Original VA: 0x5a600, Ghidra: FUN_0005a600)
 * Prototype: void newgui_update_player_dungeon_05a600(void);
 * Address  : 0x5a600 (Size: 73 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_fn_05bb49, newgui_fn_05c377
 ******************************************************************************/
void newgui_update_player_dungeon_05a600(void)

{
  int gui_btn;
  int dungeon_off;
  
  dungeon_off = (uint)*(byte *)(gui_btn + 0x33) + g_my_player_word._3_1_ * 0x1508; /* gui_btn->content */
  if ((&g_bss_002e16fc)[g_my_player_word._3_1_ * 0x1508] == (&g_bss_002e1930)[dungeon_off]) {
    newgui_fn_05bb49();
    return;
  }
  if ((&g_bss_002e1930)[dungeon_off] != '\0') {
    newgui_fn_05c377();
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05a649 (Original VA: 0x5a649, Ghidra: FUN_0005a649)
 * Prototype: void newgui_update_player_dungeon_05a649(void);
 * Address  : 0x5a649 (Size: 73 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_update_player_dungeon_05a649(void)

{
  if ((&g_bss_002e16fc)[g_my_player_word._3_1_ * 0x1508] != '\0') {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05a692 (Original VA: 0x5a692, Ghidra: FUN_0005a692)
 * Prototype: void newgui_update_player_dungeon_05a692(void);
 * Address  : 0x5a692 (Size: 20 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_update_player_dungeon_05a692(void)

{
  char player_off;
  undefined1 uval;
  int player_off_2;
  
  player_off_2 = (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x1508;
  if ((&g_bss_002e16ff)[player_off_2] != '\0') {
    player_off = battle_fn_014188((&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]);
    if (player_off != '\0') {
      (&g_bss_002e16ff)[player_off_2] = player_off;
      uval = battle_fn_014235();
      (&g_bss_002e16fe)[player_off_2] = uval;
      uval = battle_fn_014235();
      (&g_bss_002e16fd)[player_off_2] = uval;
    }
  }
  newgui_update_player_dungeon_05d15e();
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05a6a6 (Original VA: 0x5a6a6, Ghidra: FUN_0005a6a6)
 * Prototype: void newgui_update_player_dungeon_05a6a6(void);
 * Address  : 0x5a6a6 (Size: 95 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> instance_fn_049a9a
 * Callees  : 3 -> battle_fn_014188, battle_fn_014235, newgui_update_player_dungeon_05d15e
 ******************************************************************************/
void newgui_update_player_dungeon_05a6a6(void)

{
  byte arg_al;
  char ch;
  undefined1 uval;
  int dungeon_off;
  
  dungeon_off = (uint)arg_al * 0x1508;
  if ((&g_bss_002e16ff)[dungeon_off] != '\0') {
    ch = battle_fn_014188();
    if (ch != '\0') {
      (&g_bss_002e16ff)[dungeon_off] = ch;
      uval = battle_fn_014235();
      (&g_bss_002e16fe)[dungeon_off] = uval;
      uval = battle_fn_014235();
      (&g_bss_002e16fd)[dungeon_off] = uval;
    }
  }
  newgui_update_player_dungeon_05d15e();
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05a705 (Original VA: 0x5a705, Ghidra: FUN_0005a705)
 * Prototype: void newgui_update_player_dungeon_05a705(void);
 * Address  : 0x5a705 (Size: 103 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 2 -> battle_fn_014188, battle_fn_014235
 ******************************************************************************/
void newgui_update_player_dungeon_05a705(void)

{
  char player_off;
  undefined1 uval;
  int player_off_2;
  
  player_off_2 = (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] * 0x1508;
  if ((&g_bss_002e16fd)[player_off_2] != '\0') {
    player_off = battle_fn_014235((&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]);
    if (player_off != '\0') {
      (&g_bss_002e16fd)[player_off_2] = player_off;
      uval = battle_fn_014188();
      (&g_bss_002e16fe)[player_off_2] = uval;
      uval = battle_fn_014188();
      (&g_bss_002e16ff)[player_off_2] = uval;
    }
  }
  newgui_update_player_dungeon_05d15e();
  return;
}

/******************************************************************************
 * Function : newgui_process_map_subtile_05a76c (Original VA: 0x5a76c, Ghidra: FUN_0005a76c)
 * Prototype: void newgui_process_map_subtile_05a76c(void);
 * Address  : 0x5a76c (Size: 209 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_process_map_subtile_05a76c(void)

{
  int gui_btn;
  int thing_ptr;
  
  if ((((g_bss_0034d1a6 == 0) &&
       ((&g_bss_002e16fd)[(int)*(short *)(gui_btn + 0x1b) + g_my_player_word._3_1_ * 0x1508] != '\0')) && /* gui_btn->id_num */
      (thing_ptr = 6 - (int)((uint)g_units_per_pixel * g_graphics_window_width - (int)*(short *)(gui_btn + 0x1d)) /
                   (int)(*(ushort *)(gui_btn + 0x25) / 7), thing_ptr < 7)) &&
     ((thing_ptr = (&g_thing_ptrs)
               [*(ushort *)(&g_bss_0034d146 + thing_ptr * 2 + *(short *)(gui_btn + 0x1b) * 0x10)], /* gui_btn->id_num */
      thing_ptr != g_thing_ptrs &&
      ((*(uint *)((int)&g_map_subtiles +
                 (uint)CONCAT11(*(undefined1 *)(thing_ptr + 0x10),*(undefined1 *)(thing_ptr + 0xe)) * 5 + 1)
        >> 0x1c & 1 << ((&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] & 0x1f)) != 0)))) {
    g_bss_0034d1a6 = *(short *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  }
  return;
}

/******************************************************************************
 * Function : newgui_process_map_subtile_05a83d (Original VA: 0x5a83d, Ghidra: FUN_0005a83d)
 * Prototype: void newgui_process_map_subtile_05a83d(void);
 * Address  : 0x5a83d (Size: 182 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_process_map_subtile_05a83d(void)

{
  int gui_btn;
  int thing_ptr;
  
  if ((((g_bss_0034d1a6 == 0) &&
       ((&g_bss_002e16fd)[(int)*(short *)(gui_btn + 0x1b) + g_my_player_word._3_1_ * 0x1508] != '\0')) && /* gui_btn->id_num */
      (thing_ptr = (int)((uint)g_units_per_pixel * g_graphics_window_width - (int)*(short *)(gui_btn + 0x1d)) /
               (int)(*(ushort *)(gui_btn + 0x25) / 7), thing_ptr < 7)) &&
     ((thing_ptr = (&g_thing_ptrs)
               [*(ushort *)(&g_bss_0034d176 + thing_ptr * 2 + *(short *)(gui_btn + 0x1b) * 0x10)], /* gui_btn->id_num */
      thing_ptr != g_thing_ptrs &&
      ((*(uint *)((int)&g_map_subtiles +
                 (uint)CONCAT11(*(undefined1 *)(thing_ptr + 0x10),*(undefined1 *)(thing_ptr + 0xe)) * 5 + 1)
        >> 0x1c & 1 << ((&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] & 0x1f)) != 0)))) {
    g_bss_0034d1a6 = *(short *)(thing_ptr + 0x1b); /* thing->index_or_angle */
  }
  return;
}

/******************************************************************************
 * Function : newgui_eek_this_what_you_05a8f3 (Original VA: 0x5a8f3, Ghidra: FUN_0005a8f3)
 * Prototype: void newgui_eek_this_what_you_05a8f3(void);
 * Address  : 0x5a8f3 (Size: 513 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 7459
 * Purpose  : String 'EEK! This is what you just picked up a second ago!'
 * Callers  : 0 -> 
 * Callees  : 3 -> magic_update_slab_subtile_columns_05003d, set_packet_action, LbErrorLog
 ******************************************************************************/
void newgui_eek_this_what_you_05a8f3(void)

{
  byte *thing_ptr;
  char ch;
  byte cctrl_ptr;
  int player_off;
  int val;
  undefined4 *word_ptr;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  byte local_18;
  
  thing_ptr = (byte *)(&g_thing_ptrs)[g_bss_0034d1a6];
  if (g_bss_0034d1a6 == 0) {
    return;
  }
  player_off = g_my_player_word._3_1_ * 0x4ef;
  local_18 = (&g_data_00191780)[(byte)(&g_bss_0019d51b)[player_off]];
  if (local_18 != 0) {
    val = (uint)local_18 * 0x1b;
    if ((&g_data_0018e98c)[val] == '\0') {
      g_bss_0034d1a6 = 0;
      return;
    }
    if (((int)(char)thing_ptr[6] != (uint)(byte)(&g_player_id_number)[player_off]) &&
       ((&g_data_0018e98d)[val] == '\0')) {
      g_bss_0034d1a6 = 0;
      return;
    }
    uStack_1c = 0;
    uStack_20 = 0x5a994;
    ch = magic_update_slab_subtile_columns_05003d();
    if (ch == '\0') {
      g_bss_0034d1a6 = 0;
      return;
    }
    word_ptr = &uStack_24;
    uStack_24 = 0;
    goto LAB_0005aadc;
  }
  if ((int)(char)thing_ptr[6] != (uint)(byte)(&g_player_id_number)[player_off]) {
    g_bss_0034d1a6 = 0;
    return;
  }
  if ((*thing_ptr & 0x10) != 0) {
    g_bss_0034d1a6 = 0;
    return;
  }
  if ((thing_ptr[1] & 2) != 0) {
    g_bss_0034d1a6 = 0;
    return;
  }
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x6e) != 0) { /* thing->ccontrol_idx */
    g_bss_0034d1a6 = 0;
    return;
  }
  if (thing_ptr[7] == 0xe) {
    cctrl_ptr = thing_ptr[8];
  }
  else {
    cctrl_ptr = thing_ptr[7];
  }
  if (cctrl_ptr == 0x29) {
LAB_0005aa6a:
    if ((&g_bss_002ddd1e)[(uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7e) * 0x45] /* thing->ccontrol_idx */
        != thing_ptr[6]) {
      g_bss_0034d1a6 = 0;
      return;
    }
  }
  else {
    if (thing_ptr[7] == 0xe) {
      cctrl_ptr = thing_ptr[8];
    }
    else {
      cctrl_ptr = thing_ptr[7];
    }
    if (cctrl_ptr == 0x28) goto LAB_0005aa6a;
    if (thing_ptr[7] == 0xe) {
      cctrl_ptr = thing_ptr[8];
    }
    else {
      cctrl_ptr = thing_ptr[7];
    }
    if (cctrl_ptr == 0x2b) goto LAB_0005aa6a;
    if (thing_ptr[7] == 0xe) {
      cctrl_ptr = thing_ptr[8];
    }
    else {
      cctrl_ptr = thing_ptr[7];
    }
    if (cctrl_ptr == 0x2a) goto LAB_0005aa6a;
  }
  if (*(ushort *)(&g_bss_002e05bc + g_my_player_word._3_1_ * 0x1508) == g_bss_0034d1a6) {
    uStack_1c = 0x5aab8;
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 7459, "EEK! This is what you just picked up a second ago!") */
    g_bss_0034d1a6 = 0;
    return;
  }
  uStack_1c = 0;
  word_ptr = &uStack_20;
LAB_0005aadc:
  uStack_20 = 0;
  *(undefined4 *)((int)word_ptr + -4) = 0x5aae6;
  set_packet_action();
  g_bss_0034d1a6 = 0;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05aaf4 (Original VA: 0x5aaf4, Ghidra: FUN_0005aaf4)
 * Prototype: void newgui_fn_05aaf4(void);
 * Address  : 0x5aaf4 (Size: 81 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05aaf4
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_fn_05aaf4(void)

{
  if (g_bss_0034d1a6 != 0) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ab45 (Original VA: 0x5ab45, Ghidra: FUN_0005ab45)
 * Prototype: void newgui_fn_05ab45(void);
 * Address  : 0x5ab45 (Size: 60 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ab45
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ab45(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05ab81 (Original VA: 0x5ab81, Ghidra: FUN_0005ab81)
 * Prototype: void newgui_update_player_dungeon_05ab81(void);
 * Address  : 0x5ab81 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> event_update_player_dungeon_0275f6
 * Callees  : 1 -> newgui_fn_05c848
 ******************************************************************************/
void newgui_update_player_dungeon_05ab81(void)

{
  uint arg_eax;
  char arg_dl;
  
  if ((arg_dl == (&g_bss_002e16fc)[arg_eax * 0x1508]) &&
     ((&g_bss_002e16fc)[arg_eax * 0x1508] = 0,
     arg_eax == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])) {
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05c848();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05abd1 (Original VA: 0x5abd1, Ghidra: FUN_0005abd1)
 * Prototype: void newgui_fn_05abd1(void);
 * Address  : 0x5abd1 (Size: 34 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05abd1
 * Callers  : 0 -> 
 * Callees  : 3 -> newgui_fn_053c6b, newgui_fn_05aee2, newgui_fn_05cf2d
 ******************************************************************************/
void newgui_fn_05abd1(void)

{
  int val;
  
  val = newgui_fn_053c6b();
  if (val == -1) {
    newgui_fn_05aee2();
    newgui_fn_05cf2d();
  }
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_05abf3 (Original VA: 0x5abf3, Ghidra: FUN_0005abf3)
 * Prototype: void newgui_maintain_gui_button_state_05abf3(void);
 * Address  : 0x5abf3 (Size: 32 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_05abf3(void)

{
  char player_off;
  byte *gui_btn;
  
  player_off = (&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef];
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (player_off != '\x02') << 3;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ac13 (Original VA: 0x5ac13, Ghidra: FUN_0005ac13)
 * Prototype: void newgui_fn_05ac13(void);
 * Address  : 0x5ac13 (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ac13
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ac13(void)

{
  int gui_btn;
  
  *(undefined1 *)(*(int *)(gui_btn + 0x33) + 0x404) = 1; /* gui_btn->content */
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ac1e (Original VA: 0x5ac1e, Ghidra: FUN_0005ac1e)
 * Prototype: void newgui_fn_05ac1e(void);
 * Address  : 0x5ac1e (Size: 11 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ac1e
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ac1e(void)

{
  int gui_btn;
  
  *(undefined1 *)(*(int *)(gui_btn + 0x33) + 0x404) = 2; /* gui_btn->content */
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ac4a (Original VA: 0x5ac4a, Ghidra: FUN_0005ac4a)
 * Prototype: void newgui_fn_05ac4a(void);
 * Address  : 0x5ac4a (Size: 45 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ac4a
 * Callers  : 0 -> 
 * Callees  : 1 -> room_fn_0cfeb4
 ******************************************************************************/
void newgui_fn_05ac4a(void)

{
  int extraout_EDX;
  
  room_fn_0cfeb4();
  g_bss_002ee8ad = *(int *)(extraout_EDX + 0x33);
  g_bss_002ee8b1 = (uint)*(ushort *)(&g_data_0018f7c9 + *(int *)(extraout_EDX + 0x33) * 6);
  g_bss_002ee8b5 = (uint)*(ushort *)(extraout_EDX + 0x2b);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ac77 (Original VA: 0x5ac77, Ghidra: FUN_0005ac77)
 * Prototype: void newgui_fn_05ac77(void);
 * Address  : 0x5ac77 (Size: 9 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ac77
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ac77(void)

{
  int gui_btn;
  
  g_data_0017d17b._3_1_ = *(undefined1 *)(gui_btn + 0x33); /* gui_btn->content */
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ac80 (Original VA: 0x5ac80, Ghidra: FUN_0005ac80)
 * Prototype: void newgui_fn_05ac80(void);
 * Address  : 0x5ac80 (Size: 76 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ac80
 * Callers  : 0 -> 
 * Callees  : 1 -> trap_process_thing_entity_076800
 ******************************************************************************/
void newgui_fn_05ac80(void)

{
  int gui_btn;
  
  trap_process_thing_entity_076800();
  g_bss_002ee8c5 = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  g_bss_002ee8c9 = (uint)*(ushort *)(&g_data_0018ed39 + *(int *)(gui_btn + 0x33) * 0x10); /* gui_btn->content */
  g_bss_002ee8cd = (uint)*(ushort *)(gui_btn + 0x2b);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05accc (Original VA: 0x5accc, Ghidra: FUN_0005accc)
 * Prototype: void newgui_fn_05accc(void);
 * Address  : 0x5accc (Size: 43 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05accc
 * Callers  : 0 -> 
 * Callees  : 1 -> door_process_thing_entity_02313c
 ******************************************************************************/
void newgui_fn_05accc(void)

{
  int gui_btn;
  
  door_process_thing_entity_02313c();
  g_bss_002ee8c5 = *(int *)(gui_btn + 0x33); /* gui_btn->content */
  g_bss_002ee8c9 = (uint)*(ushort *)(&g_data_0018ed39 + *(int *)(gui_btn + 0x33) * 0x10); /* gui_btn->content */
  g_bss_002ee8cd = (uint)*(ushort *)(gui_btn + 0x2b);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05acf7 (Original VA: 0x5acf7, Ghidra: FUN_0005acf7)
 * Prototype: void newgui_fn_05acf7(void);
 * Address  : 0x5acf7 (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05acf7
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05acf7(void)

{
  int gui_btn;
  
  g_data_0017d180 = (&g_data_0018ed35)[(uint)*(byte *)(gui_btn + 0x33) * 0x10]; /* gui_btn->content */
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ad0a (Original VA: 0x5ad0a, Ghidra: FUN_0005ad0a)
 * Prototype: void newgui_fn_05ad0a(void);
 * Address  : 0x5ad0a (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ad0a
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ad0a(void)

{
  int gui_btn;
  
  g_data_0017d17f = (&g_data_0018ed35)[(uint)*(byte *)(gui_btn + 0x33) * 0x10]; /* gui_btn->content */
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05ad26 (Original VA: 0x5ad26, Ghidra: FUN_0005ad26)
 * Prototype: void newgui_update_player_dungeon_05ad26(void);
 * Address  : 0x5ad26 (Size: 250 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_update_player_dungeon_05ad26(void)

{
  byte flag;
  uint loop_i;
  ushort uval;
  uint uval_2;
  
  for (loop_i = 1; loop_i < 0x1f; loop_i = (uint)(byte)((char)loop_i + 1)) {
    if ((&g_bss_002e0ea3)[g_my_player_word._3_1_ * 0x1508 + loop_i] != '\0') {
      while( true ) {
        flag = (byte)(loop_i >> 8);
        if (((int)g_bss_0034d0e4 <= (int)(uint)flag) ||
           ((uint)(ushort)(&g_bss_0034d1a8)[flag] == (loop_i & 0xff))) break;
        loop_i = (uint)CONCAT11(flag + 1,(char)loop_i);
      }
      if ((uint)flag == (int)g_bss_0034d0e4) {
        g_bss_0034d0e4 = g_bss_0034d0e4 + '\x01';
        (&g_bss_0034d1a8)[flag] = (ushort)loop_i & 0xff;
      }
    }
  }
  loop_i = 1;
  while( true ) {
    if (0x1e < loop_i) {
      return;
    }
    if (((&g_bss_002e0ea3)[g_my_player_word._3_1_ * 0x1508 + loop_i] == '\0') && (loop_i != 0x17)) break;
LAB_0005aded:
    loop_i = (uint)(byte)((char)loop_i + 1);
  }
  flag = 0;
LAB_0005ad99:
  if ((int)(uint)flag < (int)g_bss_0034d0e4) {
    if ((ushort)(&g_bss_0034d1a8)[flag] != loop_i) goto LAB_0005ad97;
    uval = CONCAT11(flag,(char)loop_i);
    while( true ) {
      loop_i = (uint)uval;
      flag = (byte)(uval >> 8);
      uval_2 = (uint)flag;
      if (g_bss_0034d0e4 + -1 <= (int)uval_2) break;
      uval = CONCAT11(flag + 1,(char)uval);
      (&g_bss_0034d1a8)[uval_2] = (&g_bss_0034d1aa)[uval_2];
    }
    g_bss_0034d0e4 = g_bss_0034d0e4 + -1;
    (&g_bss_0034d1a8)[uval_2] = 0;
  }
  goto LAB_0005aded;
LAB_0005ad97:
  flag = flag + 1;
  goto LAB_0005ad99;
}

/******************************************************************************
 * Function : newgui_fn_05ae20 (Original VA: 0x5ae20, Ghidra: FUN_0005ae20)
 * Prototype: longlong newgui_fn_05ae20(void);
 * Address  : 0x5ae20 (Size: 112 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ae20
 * Callers  : 2 -> input_process_thing_entity_049160, input_draw_text_overlay_049426
 * Callees  : 0 -> 
 ******************************************************************************/
longlong newgui_fn_05ae20(void)

{
  char ch;
  short short_val;
  undefined4 arg_edx;
  
  short_val = 0;
  while( true ) {
    if ((int)g_bss_0034cf04 <= (int)short_val) {
      return (ulonglong)CONCAT43(arg_edx,(int3)(char)((ushort)short_val >> 8)) << 8;
    }
    ch = (&g_bss_0034cefc)[short_val];
    if (((((ch != '\x01') && (ch != '\x02')) && (ch != '\x03')) &&
        ((((ch != '\x04' && (ch != '\x05')) &&
          ((ch != '\a' && ((ch != '\x06' && (ch != '\x10')))))) && (ch != '\x1f')))) &&
       ((((ch != '#' && (ch != ' ')) && (ch != '\"')) &&
        ((ch != '&' && (ch != '\x1b')))))) break;
    short_val = short_val + 1;
  }
  return CONCAT44(arg_edx,CONCAT31(ch >> 7,1));
}

/******************************************************************************
 * Function : newgui_fn_05ae90 (Original VA: 0x5ae90, Ghidra: FUN_0005ae90)
 * Prototype: void newgui_fn_05ae90(void);
 * Address  : 0x5ae90 (Size: 82 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ae90
 * Callers  : 2 -> game_out_sync_gameturn_036ff4, update_update_player_dungeon_0dd6c8
 * Callees  : 4 -> newgui_fn_052b58, newgui_fn_05aee2, newgui_fn_05afda, newgui_fn_05c848
 ******************************************************************************/
void newgui_fn_05ae90(void)

{
  char ch;
  
  newgui_fn_05aee2();
  newgui_fn_05afda();
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
    return;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05aee2 (Original VA: 0x5aee2, Ghidra: FUN_0005aee2)
 * Prototype: void newgui_fn_05aee2(void);
 * Address  : 0x5aee2 (Size: 248 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05aee2
 * Callers  : 4 -> input_draw_text_overlay_049426, newgui_fn_05abd1, newgui_fn_05ae90, process_players_dungeon_command_packet
 * Callees  : 4 -> newgui_fn_052b58, newgui_fn_053c6b, newgui_fn_05c848, packet_validate_active_Catalogue_entries
 ******************************************************************************/
void newgui_fn_05aee2(void)

{
  char ch;
  int val;
  
  val = newgui_fn_053c6b();
  if (val != -1) {
    packet_validate_active_Catalogue_entries();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
    return;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05afda (Original VA: 0x5afda, Ghidra: FUN_0005afda)
 * Prototype: undefined8 newgui_fn_05afda(void);
 * Address  : 0x5afda (Size: 482 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05afda
 * Callers  : 10 -> input_update_player_dungeon_047bcd, input_update_player_view_state_047ea3, input_process_thing_entity_049160, input_draw_text_overlay_049426, input_fn_04991c, instance_update_player_view_state_04b222, instance_update_player_view_state_04b5ca, instance_update_player_view_state_04b6ae ...
 * Callees  : 3 -> newgui_fn_052b58, newgui_fn_05c848, set_packet_action
 ******************************************************************************/
undefined8 newgui_fn_05afda(void)

{
  char ch;
  undefined4 *word_ptr;
  undefined1 *word_ptr_2;
  uint uval;
  undefined4 auStack_24 [5];
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  auStack_24[4] = 0x5afe8;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    auStack_24[4] = 0x5affd;
    newgui_fn_05c848();
  }
  uval = (uint)(ch != '\0');
  auStack_24[4] = 0x5b007;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    auStack_24[4] = 0;
    word_ptr = auStack_24 + 3;
    auStack_24[3] = 0;
    set_packet_action();
    uval = 1;
    newgui_fn_05c848();
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x5b052;
  ch = newgui_fn_052b58();
  word_ptr_2 = (undefined1 *)word_ptr;
  if (ch != '\0') {
    *(undefined4 *)((int)word_ptr + -4) = 0;
    word_ptr_2 = (undefined1 *)((int)word_ptr + -8);
    *(undefined4 *)((int)word_ptr + -8) = 0;
    *(undefined4 *)((int)word_ptr + -0xc) = 0x5b084;
    set_packet_action();
    uval = 1;
    *(undefined4 *)((int)word_ptr + -0xc) = 0x5b093;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b09d;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b0b0;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b0ba;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b0cd;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b0d7;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b0ea;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b0f4;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b107;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b111;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b124;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b12e;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b141;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b14b;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b15e;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b168;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b17b;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b185;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b198;
    newgui_fn_05c848();
  }
  *(undefined4 *)(word_ptr_2 + -4) = 0x5b1a2;
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    uval = 1;
    *(undefined4 *)(word_ptr_2 + -4) = 0x5b1b5;
    newgui_fn_05c848();
  }
  return CONCAT44(*(undefined4 *)(word_ptr_2 + 4),uval);
}

/******************************************************************************
 * Function : newgui_backup_input_field_small_05b1bc (Original VA: 0x5b1bc, Ghidra: FUN_0005b1bc)
 * Prototype: void newgui_backup_input_field_small_05b1bc(void);
 * Address  : 0x5b1bc (Size: 159 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 7871
 * Purpose  : String 'backup_input_field too small'
 * Callers  : 1 -> newgui_fn_0587ff
 * Callees  : 7 -> LbErrorLog, LbScreenWaitVbi, dk_sprintf, LbMemoryCopy, dk_stricmp, bflib_system_io_fn_0efdb4, bflib_system_io_fn_0f323f
 ******************************************************************************/
void newgui_backup_input_field_small_05b1bc(void)

{
  uint uval;
  int val;
  
  g_bss_003db5fc = 0;
  LbScreenWaitVbi();
  uval = bflib_system_io_fn_0efdb4();
  if (uval < 0x40) {
    LbMemoryCopy();
  }
  else {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 7871, "backup_input_field too small") */
    bflib_system_io_fn_0f323f();
    g_bss_0034cf62 = 0;
  }
  dk_sprintf(&g_log_sprintf_buf,g_bss_00333733);
  val = dk_stricmp();
  if (val == 0) {
    LbScreenWaitVbi();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05b25b (Original VA: 0x5b25b, Ghidra: FUN_0005b25b)
 * Prototype: undefined4 newgui_fn_05b25b(void);
 * Address  : 0x5b25b (Size: 386 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05b25b
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 5 -> newgui_fn_052be7, bflib_system_io_fn_0e69fc, LbMemoryCopy, bflib_system_io_fn_0e9dd6, bflib_system_io_fn_0efdb4
 ******************************************************************************/
undefined4 newgui_fn_05b25b(void)

{
  char ch;
  byte *arg_eax;
  uint uval;
  int val;
  char *extraout_ECX;
  undefined8 uval_2;
  
  uval_2 = bflib_system_io_fn_0efdb4();
  val = (int)((ulonglong)uval_2 >> 0x20);
  uval = (uint)g_bss_003db5fc;
  if ((g_bss_003db5fc & 0x80) != 0) {
    (&g_bss_003db4fc)[g_bss_003db5fc] = 0;
    g_bss_003db5fc = 0;
    return 0;
  }
  if ((val == -1) && ((g_bss_003db526 != '\0' || (g_bss_003db532 != '\0')))) {
    if (g_bss_003db5fc == 0x2a) {
      g_bss_003db5fc = 0;
      return 0;
    }
    if (g_bss_003db5fc == 0x36) {
      g_bss_003db5fc = 0;
      return 0;
    }
    ch = (&g_data_001954d8)[uval];
  }
  else {
    ch = (&g_data_00195458)[uval];
  }
  if (uval == 0x1c) {
    if (((*(short *)(arg_eax + 0x2d) < 0) || (*extraout_ECX != '\0')) || (val == -3)) {
      arg_eax[1] = 0;
      (**(code **)(arg_eax + 7))();
      g_bss_0034cf1f = 0;
      if ((*arg_eax & 2) != 0) {
        (&g_bss_0034bad7)[(char)arg_eax[3] * 0x20] = 3;
        newgui_fn_052be7();
      }
    }
  }
  else if (uval == 1) {
    LbMemoryCopy();
    g_bss_0034cf1f = 0;
  }
  else if (uval == 0xe) {
    (extraout_ECX + (int)uval_2)[-1] = '\0';
    extraout_ECX[(int)uval_2] = '\0';
  }
  else {
    val = bflib_system_io_fn_0e69fc();
    uval_2 = bflib_system_io_fn_0efdb4();
    if ((uint)uval_2 < val - 1U) {
      if ((int)((ulonglong)uval_2 >> 0x20) == -1) {
        if (((&g_data_0017469c)[(byte)(ch + 1U)] & 8) == 0) goto LAB_0005b3ac;
      }
      else if ((((int)(char)(&g_data_0017469c)[(byte)(ch + 1U)] & 0xe0U) == 0) && (ch != ' '))
      goto LAB_0005b3ac;
      bflib_system_io_fn_0e9dd6();
    }
  }
LAB_0005b3ac:
  (&g_bss_003db4fc)[uval] = 0;
  g_bss_003db5fc = 0;
  return 1;
}

/******************************************************************************
 * Function : newgui_copy_state_struct_05b3dd (Original VA: 0x5b3dd, Ghidra: FUN_0005b3dd)
 * Prototype: void newgui_copy_state_struct_05b3dd(void);
 * Address  : 0x5b3dd (Size: 31 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 1 -> newgui_fn_05c848
 * Callees  : 1 -> LbMemoryCopy
 ******************************************************************************/
void newgui_copy_state_struct_05b3dd(void)

{
  LbMemoryCopy();
  g_bss_0034cf1f = 0;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05b3fc (Original VA: 0x5b3fc, Ghidra: FUN_0005b3fc)
 * Prototype: void newgui_fn_05b3fc(void);
 * Address  : 0x5b3fc (Size: 235 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05b3fc
 * Callers  : 1 -> newgui_update_creature_and_thing_0537af
 * Callees  : 2 -> dk_sprintf, bflib_system_io_fn_0e9dd6
 ******************************************************************************/
void newgui_fn_05b3fc(void)

{
  int arg_eax;
  undefined2 extraout_CX;
  uint extraout_ECX;
  uint uval;
  
  if (*(char *)(arg_eax + 0x1a) == '\a') {
    dk_sprintf();
    return;
  }
  dk_sprintf();
  uval = extraout_ECX;
  while ((byte)(uval >> 8) < (byte)uval) {
    bflib_system_io_fn_0e9dd6();
    uval = (uint)CONCAT11((char)((ushort)extraout_CX >> 8) + '\x01',(char)extraout_CX);
  }
  return;
}

/******************************************************************************
 * Function : newgui_copy_state_struct_05b4e7 (Original VA: 0x5b4e7, Ghidra: FUN_0005b4e7)
 * Prototype: void newgui_copy_state_struct_05b4e7(void);
 * Address  : 0x5b4e7 (Size: 42 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 1 -> file_fn_02c785
 * Callees  : 2 -> newgui_fn_05cf2d, LbMemoryCopy
 ******************************************************************************/
void newgui_copy_state_struct_05b4e7(void)

{
  if (g_bss_002e6f2d == '\0') {
    LbMemoryCopy();
    newgui_fn_05cf2d();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05b5e1 (Original VA: 0x5b5e1, Ghidra: FUN_0005b5e1)
 * Prototype: void newgui_fn_05b5e1(void);
 * Address  : 0x5b5e1 (Size: 20 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05b5e1
 * Callers  : 2 -> input_update_player_dungeon_047bcd, input_update_player_view_state_047ea3
 * Callees  : 1 -> file_settings_dat_02a355
 ******************************************************************************/
void newgui_fn_05b5e1(void)

{
  g_bss_002ee920 = g_bss_002ee920 == '\0';
  file_settings_dat_02a355();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05b5f5 (Original VA: 0x5b5f5, Ghidra: FUN_0005b5f5)
 * Prototype: undefined4 newgui_fn_05b5f5(void);
 * Address  : 0x5b5f5 (Size: 80 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05b5f5
 * Callers  : 1 -> newgui_oi_there_fade_time_053ccc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 newgui_fn_05b5f5(void)

{
  byte arg_al;
  bool flag;
  
  if (arg_al < 0x1f) {
    if (arg_al < 5) {
      if (arg_al != 0) {
        return 1;
      }
      return 0;
    }
    if (arg_al < 8) {
      return 1;
    }
    if (arg_al < 0x10) {
      return 0;
    }
    if (arg_al < 0x11) {
      return 1;
    }
    flag = arg_al == 0x1b;
  }
  else {
    if (arg_al < 0x20) {
      return 1;
    }
    if (arg_al < 0x22) {
      flag = arg_al == 0x20;
    }
    else {
      if (arg_al < 0x23) {
        return 1;
      }
      if (arg_al < 0x24) {
        return 1;
      }
      flag = arg_al == 0x26;
    }
  }
  if (flag) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : newgui_fn_05b645 (Original VA: 0x5b645, Ghidra: FUN_0005b645)
 * Prototype: undefined8 newgui_fn_05b645(void);
 * Address  : 0x5b645 (Size: 763 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05b645
 * Callers  : 10 -> inits_update_creature_and_thing_0462a3, input_maintain_gui_button_state_04823a, input_fn_04991c, instance_fn_0499ce, instance_update_player_view_state_04bdfa, instance_update_player_view_state_04bef7, newgui_update_player_view_state_05b9c0, creature_control_creature_as_passenger_0809d0 ...
 * Callees  : 3 -> newgui_fn_053c6b, newgui_fn_059ccb, newgui_fn_059d02
 ******************************************************************************/
undefined8 newgui_fn_05b645(void)

{
  uint arg_eax;
  int val;
  undefined4 arg_edx;
  uint uval;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint extraout_EDX_07;
  uint extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  undefined4 extraout_EDX_12;
  uint extraout_EDX_13;
  
  val = newgui_fn_053c6b();
  uval = (uint)(byte)(&g_bss_0034baf3)[val * 0x20];
  if (arg_eax != uval) {
    if (arg_eax == 0) {
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2ad = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2ae = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2af = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b0 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b1 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b2 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b3 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b4 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b5 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b6 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b7 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b8 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      val = newgui_fn_053c6b();
      g_bss_0034b2b9 = (&g_bss_0034baf3)[val * 0x20];
      newgui_fn_059d02();
      uval = extraout_EDX_13;
    }
    else {
      newgui_fn_059ccb();
      uval = extraout_EDX;
      if (g_bss_0034b2ad != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_00;
      }
      if (g_bss_0034b2ae != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_01;
      }
      if (g_bss_0034b2af != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_02;
      }
      if (g_bss_0034b2b0 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_03;
      }
      if (g_bss_0034b2b2 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_04;
      }
      if (g_bss_0034b2b3 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_05;
      }
      if (g_bss_0034b2b1 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_06;
      }
      if (g_bss_0034b2b4 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_07;
      }
      if (g_bss_0034b2b5 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_08;
      }
      if (g_bss_0034b2b6 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_09;
      }
      if (g_bss_0034b2b8 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_10;
      }
      if (g_bss_0034b2b7 != '\0') {
        newgui_fn_059ccb();
        uval = extraout_EDX_11;
      }
      if (g_bss_0034b2b9 != '\0') {
        newgui_fn_059ccb();
        return CONCAT44(arg_edx,extraout_EDX_12);
      }
    }
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : newgui_fn_05b940 (Original VA: 0x5b940, Ghidra: FUN_0005b940)
 * Prototype: undefined4 newgui_fn_05b940(void);
 * Address  : 0x5b940 (Size: 115 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05b940
 * Callers  : 1 -> newgui_update_player_view_state_05b9c0
 * Callees  : 3 -> newgui_fn_053c6b, newgui_fn_059ccb, newgui_fn_059d02
 ******************************************************************************/
undefined4 newgui_fn_05b940(void)

{
  int arg_eax;
  int val;
  
  if (arg_eax == 0) {
    val = newgui_fn_053c6b();
    g_bss_0034b2ba = (&g_bss_0034baf3)[val * 0x20];
    newgui_fn_059d02();
    val = newgui_fn_053c6b();
    g_bss_0034b2bb = (&g_bss_0034baf3)[val * 0x20];
    newgui_fn_059d02();
  }
  else if ((g_bss_0034b2ba != '\0') || (g_bss_0034b2bb != '\0')) {
    newgui_fn_059ccb();
  }
  return 1;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_05b9b3 (Original VA: 0x5b9b3, Ghidra: FUN_0005b9b3)
 * Prototype: void newgui_update_player_view_state_05b9b3(void);
 * Address  : 0x5b9b3 (Size: 13 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 3 -> input_update_player_dungeon_047bcd, input_process_thing_entity_0480aa, input_draw_text_overlay_049426
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_update_player_view_state_05b9b3(void)

{
  byte flag;
  
  flag = g_game_operation_flags & 0x20;
  g_game_operation_flags = g_game_operation_flags & 0xdf;
  g_game_operation_flags = g_game_operation_flags | (flag == 0) << 5;
  if ((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x02') {
    newgui_fn_05b940();
  }
  else {
    newgui_fn_05b645();
  }
  workshop_update_player_view_state_0780df();
  return;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_05b9c0 (Original VA: 0x5b9c0, Ghidra: FUN_0005b9c0)
 * Prototype: void newgui_update_player_view_state_05b9c0(void);
 * Address  : 0x5b9c0 (Size: 163 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> inits_non_keeper_keeper_game_0402e5, newgui_update_player_view_state_05d280
 * Callees  : 3 -> newgui_fn_05b645, newgui_fn_05b940, workshop_update_player_view_state_0780df
 ******************************************************************************/
void newgui_update_player_view_state_05b9c0(void)

{
  byte arg_al;
  
  g_game_operation_flags = g_game_operation_flags & 0xdf;
  g_game_operation_flags = g_game_operation_flags | (arg_al & 1) << 5;
  if ((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x02') {
    newgui_fn_05b940();
  }
  else {
    newgui_fn_05b645();
  }
  workshop_update_player_view_state_0780df();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ba63 (Original VA: 0x5ba63, Ghidra: FUN_0005ba63)
 * Prototype: void newgui_fn_05ba63(void);
 * Address  : 0x5ba63 (Size: 29 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ba63
 * Callers  : 1 -> input_process_thing_entity_047fe2
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ba63(void)

{
  byte flag;
  
  flag = g_game_operation_flags & 0x20;
  g_game_operation_flags = g_game_operation_flags & 0xdf;
  g_game_operation_flags = g_game_operation_flags | (flag == 0) << 5;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05ba80 (Original VA: 0x5ba80, Ghidra: FUN_0005ba80)
 * Prototype: void newgui_update_player_dungeon_05ba80(void);
 * Address  : 0x5ba80 (Size: 189 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> scrsupp_fn_0691a2, update_go_first_person_without_0de6a8
 * Callees  : 3 -> event_fn_0274ad, event_fn_027553, creature_process_thing_entity_085ad4
 ******************************************************************************/
void newgui_update_player_dungeon_05ba80(void)

{
  int arg_eax;
  int val;
  int arg_edx;
  int arg_ebx;
  undefined2 uval;
  byte local_10;
  
  for (local_10 = 0; local_10 < 0xd; local_10 = local_10 + 1) {
    if ((&g_bss_002e7087)[(uint)(byte)(&g_bss_002e1930)[(uint)local_10 + arg_eax * 0x1508] * 0x15] ==
        '\x03') {
      event_fn_027553(0);
      return;
    }
  }
  if ((arg_edx == 0xff) && (arg_ebx == 0xff)) {
    val = creature_process_thing_entity_085ad4();
    if (val == 0) {
      return;
    }
    uval = *(undefined2 *)(val + 0x1b);
  }
  else {
    uval = 0;
  }
  event_fn_0274ad(uval);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05bb49 (Original VA: 0x5bb49, Ghidra: FUN_0005bb49)
 * Prototype: void newgui_fn_05bb49(void);
 * Address  : 0x5bb49 (Size: 83 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05bb49
 * Callers  : 1 -> newgui_update_player_dungeon_05a600
 * Callees  : 2 -> newgui_fn_05c848, set_packet_action
 ******************************************************************************/
void newgui_fn_05bb49(void)

{
  set_packet_action(0,0);
  newgui_fn_05c848();
  newgui_fn_05c848();
  newgui_fn_05c848();
  return;
}

/******************************************************************************
 * Function : newgui_draw_text_overlay_05bb9c (Original VA: 0x5bb9c, Ghidra: FUN_0005bb9c)
 * Prototype: undefined8 newgui_draw_text_overlay_05bb9c(void);
 * Address  : 0x5bb9c (Size: 293 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 2 -> newgui_draw_text_overlay_057739, newgui_have_text_scrolling_box_05789a
 * Callees  : 2 -> bflib_system_io_draw_text_overlay_0e6cc4, LbMemoryCopy
 ******************************************************************************/
undefined8 newgui_draw_text_overlay_05bb9c(void)

{
  byte flag;
  int val;
  uint uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int val_2;
  undefined4 arg_edx;
  int val_3;
  int val_4;
  byte *byte_ptr;
  undefined8 uval_2;
  byte local_424 [1024];
  int local_24;
  int local_20;
  int local_1c;
  
  byte_ptr = local_424;
  local_20 = 0;
  if (g_lb_current_font_ptr != 0) {
    LbMemoryCopy();
    val = g_display_bss_003d988c - g_display_bss_003d98a0;
    local_1c = val;
    val_2 = extraout_ECX;
    val_4 = val;
    while( true ) {
      local_20 = val_2 + 1;
      if (*byte_ptr == 0) break;
      if (*byte_ptr < 0x21) {
        flag = *byte_ptr;
        if (flag == 0x20) {
          if (g_lb_current_font_ptr == 0) {
            uval = 0;
          }
          else {
            uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
          }
LAB_0005bc04:
          local_24 = (val_4 + uval) - local_1c;
          uval_2 = bflib_system_io_draw_text_overlay_0e6cc4();
          local_20 = extraout_ECX_00;
          val_3 = (int)((ulonglong)uval_2 >> 0x20);
          if (g_display_bss_003d9894 < (int)uval_2 + local_24) {
            local_20 = extraout_ECX_00 + 1;
            val_3 = val;
          }
        }
        else {
          val_3 = val;
          if (flag != 10) {
            if (flag == 9) {
              if (g_lb_current_font_ptr == 0) {
                uval = 0;
              }
              else {
                uval = (uint)*(byte *)(g_lb_current_font_ptr + 10);
              }
              uval = uval * g_data_00195430;
              goto LAB_0005bc04;
            }
            local_20 = val_2;
            val_3 = val_4;
            if (flag == 0xe) {
              byte_ptr = byte_ptr + 1;
            }
          }
        }
      }
      else {
        if (g_lb_current_font_ptr == 0) {
          uval = 0;
        }
        else {
          uval = (uint)*(byte *)((*byte_ptr - 0x1f) * 6 + g_lb_current_font_ptr + 4);
        }
        local_20 = val_2;
        val_3 = val_4 + uval;
      }
      byte_ptr = byte_ptr + 1;
      val_2 = local_20;
      val_4 = val_3;
    }
  }
  if (g_lb_current_font_ptr == 0) {
    uval = 0;
  }
  else {
    uval = (uint)*(byte *)(g_lb_current_font_ptr + 0xb);
  }
  return CONCAT44(arg_edx,(uint)g_units_per_pixel * local_20 * uval);
}

/******************************************************************************
 * Function : newgui_copy_state_struct_05bcc1 (Original VA: 0x5bcc1, Ghidra: FUN_0005bcc1)
 * Prototype: void newgui_copy_state_struct_05bcc1(void);
 * Address  : 0x5bcc1 (Size: 22 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Copies fixed-size state structure via LbMemoryCopy
 * Callers  : 2 -> scrsupp_fn_0691a2, update_go_first_person_without_0de6a8
 * Callees  : 1 -> LbMemoryCopy
 ******************************************************************************/
void newgui_copy_state_struct_05bcc1(void)

{
  LbMemoryCopy();
  g_bss_0034cf15 = 1;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05bcd7 (Original VA: 0x5bcd7, Ghidra: FUN_0005bcd7)
 * Prototype: void newgui_fn_05bcd7(void);
 * Address  : 0x5bcd7 (Size: 75 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05bcd7
 * Callers  : 0 -> 
 * Callees  : 1 -> event_illegal_event_number_created_027390
 ******************************************************************************/
void newgui_fn_05bcd7(void)

{
  int arg_eax;
  
  event_illegal_event_number_created_027390(-arg_eax);
  return;
}

/******************************************************************************
 * Function : newgui_process_dungeon_room_05bd22 (Original VA: 0x5bd22, Ghidra: FUN_0005bd22)
 * Prototype: ulonglong newgui_process_dungeon_room_05bd22(void);
 * Address  : 0x5bd22 (Size: 342 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 2 -> get_scaled_viewport_bottom_y, dk_sprintf
 ******************************************************************************/
ulonglong newgui_process_dungeon_room_05bd22(void)

{
  ushort room_ptr;
  undefined1 *arg_eax;
  int room_off;
  undefined4 arg_edx;
  undefined8 uval;
  undefined *word_ptr;
  undefined4 room_ptr_2;
  
  if (g_bss_002ee920 == '\0') {
LAB_0005be73:
    return CONCAT44(arg_edx,arg_eax) & 0xffffffffffffff00;
  }
  room_off = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[(byte)arg_eax[1]] + (&g_subtile_to_slab_lut)[(byte)arg_eax[3]] * 0x55)
                       * 6] * 0x45;
  arg_eax = &g_rooms + room_off;
  if ((arg_eax == (undefined1 *)0x0) ||
     (*(short *)(&g_data_0018ebbd + (uint)*(ushort *)(&g_room_slabs_count + room_off) * 0x17) == 0xc9))
  goto LAB_0005be73;
  if (arg_eax != g_bss_0034bac9) {
    g_bss_0034bad4 = 0;
    g_bss_0034bac9 = arg_eax;
  }
  if ((g_bss_0034bad4 < 0x15) && ((&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] != '\f')) {
    g_bss_0034bad4 = g_bss_0034bad4 + 1;
    goto LAB_0005be6e;
  }
  room_ptr = *(ushort *)(&g_room_slabs_count + room_off);
  if (room_ptr < 8) {
    if (1 < room_ptr) goto LAB_0005be01;
LAB_0005bdda:
    room_ptr_2 = (&g_bss_0033319b)
            [*(ushort *)(&g_data_0018ebbd + (uint)*(ushort *)(&g_room_slabs_count + room_off) * 0x17)];
    word_ptr = &g_data_00166012;
  }
  else {
    if (((0xd < room_ptr) && (0xe < room_ptr)) && (room_ptr != 0x10)) goto LAB_0005bdda;
LAB_0005be01:
    room_ptr_2 = (&g_bss_0033319b)
            [*(ushort *)(&g_data_0018ebbd + (uint)*(ushort *)(&g_room_slabs_count + room_off) * 0x17)];
    word_ptr = &g_data_0016600f;
  }
  dk_sprintf(&g_bss_0034b2c5,word_ptr,room_ptr_2);
  g_bss_0034b2c4 = 1;
  g_bss_0034bace = (short)g_graphics_window_width * g_units_per_pixel;
  uval = get_scaled_viewport_bottom_y();
  arg_eax = (undefined1 *)((int)uval + 0x56 + (int)((ulonglong)uval >> 0x20));
  g_bss_0034bacd = 1;
  g_bss_0034bad0 = SUB42(arg_eax,0);
LAB_0005be6e:
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)arg_eax >> 8),1));
}

/******************************************************************************
 * Function : newgui_process_slabmap_tile_05be78 (Original VA: 0x5be78, Ghidra: FUN_0005be78)
 * Prototype: ulonglong newgui_process_slabmap_tile_05be78(void);
 * Address  : 0x5be78 (Size: 235 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 2 -> get_scaled_viewport_bottom_y, dk_sprintf
 ******************************************************************************/
ulonglong newgui_process_slabmap_tile_05be78(void)

{
  byte *byte_ptr;
  int arg_eax;
  uint slab_coord;
  int val;
  undefined4 arg_edx;
  uint uval;
  
  slab_coord = ((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 1)] + (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 3)] * 0x55) *
          6;
  byte_ptr = &g_slabmap_base + slab_coord;
  if (g_bss_002ee920 != '\0') {
    uval = (uint)*byte_ptr;
    slab_coord = (uint)*(ushort *)(&g_data_001921c0 + uval * 0x16);
    if (slab_coord != 0xc9) {
      if (uval != g_bss_0034bac9) {
        g_bss_0034bad4 = 0;
        g_bss_0034bac9 = uval;
      }
      if ((g_bss_0034bad4 < 0x15) &&
         (slab_coord = (uint)(byte)(&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef], slab_coord != 0xc)) {
        g_bss_0034bad4 = g_bss_0034bad4 + 1;
      }
      else {
        g_bss_0034b2c4 = 1;
        dk_sprintf(&g_bss_0034b2c5,
                     (&g_bss_0033319b)[*(ushort *)(&g_data_001921c0 + (uint)*byte_ptr * 0x16)]);
        g_bss_0034bace = (short)g_graphics_window_width * g_units_per_pixel;
        val = get_scaled_viewport_bottom_y();
        slab_coord = val + 0x56;
        g_bss_0034bacd = 2;
        g_bss_0034bad0 = (undefined2)slab_coord;
      }
      return CONCAT44(arg_edx,CONCAT31((int3)(slab_coord >> 8),1));
    }
  }
  return CONCAT44(arg_edx,slab_coord) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_05bf63 (Original VA: 0x5bf63, Ghidra: FUN_0005bf63)
 * Prototype: ulonglong newgui_update_player_view_state_05bf63(void);
 * Address  : 0x5bf63 (Size: 240 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 3 -> trap_process_map_subtile_076789, get_scaled_viewport_bottom_y, dk_sprintf
 ******************************************************************************/
ulonglong newgui_update_player_view_state_05bf63(void)

{
  int val;
  uint uval;
  undefined4 arg_edx;
  
  val = trap_process_map_subtile_076789();
  uval = 0;
  if ((val != 0) &&
     ((*(char *)(val + 0x18) != '\0' ||
      (uval = (uint)*(char *)(val + 6),
      uval == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef])))) {
    if (val != g_bss_0034bac9) {
      g_bss_0034bad4 = 0;
      g_bss_0034bac9 = val;
    }
    if ((g_bss_0034bad4 < 0x15) &&
       (uval = (uint)(byte)(&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef], uval != 0xc)) {
      g_bss_0034bad4 = g_bss_0034bad4 + 1;
    }
    else {
      g_bss_0034b2c4 = 1;
      dk_sprintf(&g_bss_0034b2c5,
                   (&g_bss_0033319b)
                   [*(ushort *)(&g_data_0018ed3d + (uint)*(byte *)(val + 0x1a) * 0x10)]);
      g_bss_0034bace = (short)g_graphics_window_width * g_units_per_pixel;
      val = get_scaled_viewport_bottom_y();
      uval = val + 0x56;
      g_bss_0034bacd = 4;
      g_bss_0034bad0 = (undefined2)uval;
    }
    return CONCAT44(arg_edx,CONCAT31((int3)(uval >> 8),1));
  }
  return CONCAT44(arg_edx,uval) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_05c053 (Original VA: 0x5c053, Ghidra: FUN_0005c053)
 * Prototype: ulonglong newgui_process_thing_entity_05c053(void);
 * Address  : 0x5c053 (Size: 656 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 8 -> object_process_map_subtile_0c65f0, object_process_map_subtile_0c6758, object_handle_object_thing_0c688c, object_process_map_subtile_0c68b4, object_process_map_subtile_0c69e8, get_scaled_viewport_bottom_y, dk_sprintf, LbMemoryCopy
 ******************************************************************************/
ulonglong newgui_process_thing_entity_05c053(void)

{
  byte flag;
  ushort uval;
  uint player_off;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  int val_2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined8 uval_2;
  
  val_2 = 0;
  if ((&g_thing_ptrs)[*(ushort *)(&g_bss_0019d0fd + g_my_player_word._3_1_ * 0x4ef)] != 0) {
    uval_2 = object_handle_object_thing_0c688c();
    val_2 = (int)((ulonglong)uval_2 >> 0x20);
    if ((int)uval_2 != 0) {
      val_2 = extraout_ECX;
    }
  }
  if (val_2 == 0) {
    val_2 = object_process_map_subtile_0c68b4();
    if (val_2 != 0) goto LAB_0005c09f;
    val_2 = object_process_map_subtile_0c65f0();
    if (val_2 != 0) {
      if (val_2 != g_bss_0034bac9) {
        g_bss_0034bad4 = 0;
        g_bss_0034bac9 = val_2;
      }
      uval = *(ushort *)
               (&g_data_0018e980 + (uint)(byte)(&g_data_0019103e)[*(byte *)(val_2 + 0x1a)] * 0x1b);
      goto LAB_0005c0c9;
    }
    val_2 = object_process_map_subtile_0c6758();
    if (val_2 == 0) {
      val_2 = 0;
      if (g_bss_002ee920 == '\0') {
LAB_0005c2dd:
        return CONCAT44(arg_edx,val_2) & 0xffffffffffffff00;
      }
      val = object_process_map_subtile_0c69e8();
      val_2 = 0;
      if (val == 0) goto LAB_0005c2dd;
      if (*(byte *)(val + 0x1a) == 0x31) {
        dk_sprintf(&g_log_sprintf_buf,g_bss_00333a1f);
        val_2 = extraout_EDX;
      }
      else {
        val_2 = (uint)*(byte *)(val + 0x1a) * 0x16;
        if ((&g_data_0018b919)[val_2] == '\0') goto LAB_0005c2dd;
        dk_sprintf(&g_log_sprintf_buf,s__s__s_00166015,
                     (&g_bss_0033319b)
                     [*(ushort *)(&g_data_00188bf7 + (uint)(byte)(&g_data_0018b919)[val_2] * 5)],
                     g_bss_00333b1f);
        val_2 = extraout_EDX_00;
      }
      if (val_2 != g_bss_0034bac9) {
        g_bss_0034bad4 = 0;
        g_bss_0034bac9 = val_2;
      }
      if ((g_bss_0034bad4 < 0x15) &&
         (player_off = (uint)(byte)(&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef], player_off != 0xc)) {
        g_bss_0034bad4 = g_bss_0034bad4 + 1;
      }
      else {
        g_bss_0034b2c4 = 1;
        LbMemoryCopy();
        g_bss_0034bace = (short)g_graphics_window_width * g_units_per_pixel;
        val_2 = get_scaled_viewport_bottom_y();
        player_off = val_2 + 0x56;
        g_bss_0034bacd = 5;
        g_bss_0034bad0 = (undefined2)player_off;
      }
      goto LAB_0005c10f;
    }
    if (val_2 != g_bss_0034bac9) {
      g_bss_0034bad4 = 0;
      g_bss_0034bac9 = val_2;
    }
    flag = *(byte *)(val_2 + 0x1a);
    g_bss_0034b2c4 = 1;
    if ((&g_data_001911f3)[flag] == '\b') {
      player_off = (uint)*(ushort *)(&g_data_0018ed3d + (uint)(byte)(&g_data_0019116c)[flag] * 0x10);
    }
    else {
      player_off = (uint)*(short *)(&g_data_0018ede1 + (uint)(byte)(&g_data_0019116c)[flag] * 2);
    }
    dk_sprintf(&g_bss_0034b2c5,(&g_bss_0033319b)[player_off]);
  }
  else {
LAB_0005c09f:
    if (val_2 != g_bss_0034bac9) {
      g_bss_0034bad4 = 0;
      g_bss_0034bac9 = val_2;
    }
    uval = *(ushort *)(&g_data_0018425f + (uint)(byte)(&g_data_001910c5)[*(byte *)(val_2 + 0x1a)] * 2);
LAB_0005c0c9:
    dk_sprintf(&g_bss_0034b2c5,(&g_bss_0033319b)[uval]);
    g_bss_0034b2c4 = 1;
  }
  g_bss_0034bace = (short)g_graphics_window_width * g_units_per_pixel;
  val_2 = get_scaled_viewport_bottom_y();
  player_off = val_2 + 0x56;
  g_bss_0034bacd = 5;
  g_bss_0034bad0 = (undefined2)player_off;
LAB_0005c10f:
  return CONCAT44(arg_edx,CONCAT31((int3)(player_off >> 8),1));
}

/******************************************************************************
 * Function : newgui_fn_05c2e3 (Original VA: 0x5c2e3, Ghidra: FUN_0005c2e3)
 * Prototype: void newgui_fn_05c2e3(void);
 * Address  : 0x5c2e3 (Size: 148 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c2e3
 * Callers  : 4 -> input_fn_04991c, creature_control_creature_as_passenger_0809d0, creature_allocate_light_new_hero_080a94, creature_allocate_light_new_hero_080c84
 * Callees  : 2 -> newgui_fn_052b58, newgui_fn_05c848
 ******************************************************************************/
void newgui_fn_05c2e3(void)

{
  char ch;
  
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
  }
  ch = newgui_fn_052b58();
  if (ch != '\0') {
    newgui_fn_05c848();
    return;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c377 (Original VA: 0x5c377, Ghidra: FUN_0005c377)
 * Prototype: void newgui_fn_05c377(void);
 * Address  : 0x5c377 (Size: 41 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c377
 * Callers  : 2 -> newgui_maintain_gui_button_state_053021, newgui_update_player_dungeon_05a600
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05c377(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_undefined_event_type_05c408 (Original VA: 0x5c408, Ghidra: FUN_0005c408)
 * Prototype: void newgui_undefined_event_type_05c408(void);
 * Address  : 0x5c408 (Size: 822 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 9093
 * Purpose  : String 'Undefined event type: %d'
 * Callers  : 0 -> 
 * Callees  : 8 -> battle_fn_014083, newgui_fn_05c4f3, newgui_fn_05c544, newgui_fn_05c848, newgui_fn_05cf2d, LbErrorLog, dk_sprintf, LbMemoryCopy
 ******************************************************************************/
void newgui_undefined_event_type_05c408(void)

{
  byte *byte_ptr;
  undefined1 uval;
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  int val;
  int val_2;
  
  val_2 = arg_edx * 0x15;
  (&g_bss_002e16fc)[arg_eax * 0x1508] = (char)arg_edx;
  if ((g_my_player_word._3_1_ == arg_eax) &&
     (*(short *)(&g_data_00191380 + (uint)(byte)(&g_bss_002e7087)[val_2] * 0x10) != 0xc9)) {
    LbMemoryCopy();
  }
  if ((&g_bss_002e7087)[val_2] == '\x02') {
    uval = battle_fn_014083();
    (&g_bss_002e16fd)[arg_eax * 0x1508] = uval;
  }
  if (g_my_player_word._3_1_ != arg_eax) {
    return;
  }
  switch((&g_bss_002e7087)[val_2]) {
  case 1:
  case 4:
  case 0xb:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
    break;
  case 2:
    newgui_fn_05c848();
    goto LAB_0005c55b;
  case 3:
    LbMemoryCopy();
    val = 0xd;
    val_2 = arg_eax * 0x1508 + 0xd;
    do {
      val = val + -1;
      if (val < 0) goto code_r0x0005c4f3;
      byte_ptr = (byte *)(val_2 + 0x2e192f);
      val_2 = val_2 + -1;
    } while ((&g_bss_002e7087)[(uint)*byte_ptr * 0x15] != '\x03');
    newgui_fn_05cf2d();
    g_bss_0034cf15 = 0;
code_r0x0005c4f3:
    newgui_fn_052c47();
    if (extraout_ECX != 0) {
      newgui_fn_05c848();
      newgui_fn_05c848();
      newgui_fn_05c848();
      newgui_fn_05c848();
    }
    return;
  case 5:
    dk_sprintf(&g_bss_002edf85,s__s___s_0016601b,&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)(&g_data_0018ebbd + *(int *)(&g_bss_002e7088 + val_2) * 0x17)]);
    break;
  case 6:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)
                   (&g_data_00188bf7 +
                   (uint)*(byte *)((&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val_2)] + 0x1a) * 5)]);
    return;
  case 7:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)(&g_data_0018e980 + *(int *)(&g_bss_002e7088 + val_2) * 0x1b)]);
    return;
  case 8:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)(&g_data_0018ed3d + *(int *)(&g_bss_002e7088 + val_2) * 0x10)]);
    return;
  case 9:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)[*(short *)(&g_data_0018ede1 + *(int *)(&g_bss_002e7088 + val_2) * 2)]);
    return;
  case 10:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)
                   (&g_data_00188bf7 +
                   (uint)*(byte *)((&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val_2)] + 0x1a) * 5)]);
    return;
  case 0xc:
    newgui_fn_05c544(&g_bss_002edf85,*(undefined4 *)(&g_bss_002e7088 + val_2));
    return;
  case 0xe:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)
                   (&g_data_0018e980 +
                   (uint)(byte)(&g_data_0019103e)
                               [*(byte *)((&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val_2)] + 0x1a)]
                   * 0x1b)]);
    return;
  case 0xf:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)(&g_data_0018ebbd + *(int *)(&g_bss_002e7088 + val_2) * 0x17)]);
    return;
  case 0x10:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)
                   (&g_data_00188bf7 +
                   (uint)*(byte *)((&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val_2)] + 0x1a) * 5)]);
    return;
  case 0x15:
    if (*(int *)(&g_bss_002e7088 + val_2) < 0) {
      *(int *)(&g_bss_002e7088 + val_2) = -*(int *)(&g_bss_002e7088 + val_2);
    }
    LbMemoryCopy();
    LbMemoryCopy();
    break;
  case 0x18:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)
                   (&g_data_0018ed3d +
                   (uint)(byte)(&g_data_0019116c)
                               [*(byte *)((&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val_2)] + 0x1a)]
                   * 0x10)]);
    return;
  case 0x19:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(short *)(&g_data_0018ede1 +
                            (uint)(byte)(&g_data_0019116c)
                                        [*(byte *)((&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val_2)]
                                                  + 0x1a)] * 2)]);
    return;
  case 0x1a:
    newgui_fn_05c544(&g_bss_002edf85,
                 (&g_bss_0033319b)
                 [*(ushort *)
                   (&g_data_0018425f +
                   (uint)(byte)(&g_data_001910c5)
                               [*(byte *)((&g_thing_ptrs)[*(int *)(&g_bss_002e7088 + val_2)] + 0x1a)]
                   * 2)]);
    return;
  default:
    dk_sprintf(&g_log_sprintf_buf,s_Undefined_event_type___d_00166083,(&g_bss_002e7087)[val_2]);
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 9093, g_log_buf) */
    newgui_fn_05c4f3();
    return;
  }
LAB_0005c55b:
  newgui_fn_05cf2d();
  newgui_fn_05c4f3();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c4f3 (Original VA: 0x5c4f3, Ghidra: FUN_0005c4f3)
 * Prototype: void newgui_fn_05c4f3(void);
 * Address  : 0x5c4f3 (Size: 53 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c4f3
 * Callers  : 2 -> newgui_undefined_event_type_05c408, newgui_fn_05c544
 * Callees  : 2 -> newgui_fn_052c47, newgui_fn_05c848
 ******************************************************************************/
void newgui_fn_05c4f3(void)

{
  int extraout_ECX;
  
  newgui_fn_052c47();
  if (extraout_ECX != 0) {
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05c848();
    newgui_fn_05c848();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c544 (Original VA: 0x5c544, Ghidra: FUN_0005c544)
 * Prototype: void newgui_fn_05c544(void);
 * Address  : 0x5c544 (Size: 30 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c544
 * Callers  : 2 -> newgui_undefined_event_type_05c408, newgui_process_thing_entity_05c74d
 * Callees  : 3 -> newgui_fn_05c4f3, newgui_fn_05cf2d, dk_sprintf
 ******************************************************************************/
void newgui_fn_05c544(void)

{
  dk_sprintf(&g_bss_002edf85);
  newgui_fn_05cf2d();
  newgui_fn_05c4f3();
  return;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_05c74d (Original VA: 0x5c74d, Ghidra: FUN_0005c74d)
 * Prototype: void newgui_process_thing_entity_05c74d(void);
 * Address  : 0x5c74d (Size: 51 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 1 -> newgui_fn_05c544
 ******************************************************************************/
void newgui_process_thing_entity_05c74d(void)

{
  int arg_ebx;
  
  newgui_fn_05c544(&g_bss_002edf85,
               (&g_bss_0033319b)
               [*(ushort *)
                 (&g_data_0018425f +
                 (uint)(byte)(&g_data_001910c5)
                             [*(byte *)((&g_thing_ptrs)[*(int *)(arg_ebx + 0xc)] + 0x1a)] * 2)]);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c7c4 (Original VA: 0x5c7c4, Ghidra: FUN_0005c7c4)
 * Prototype: void newgui_fn_05c7c4(void);
 * Address  : 0x5c7c4 (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c7c4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05c7c4(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c7ea (Original VA: 0x5c7ea, Ghidra: FUN_0005c7ea)
 * Prototype: void newgui_fn_05c7ea(void);
 * Address  : 0x5c7ea (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c7ea
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05c7ea(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c810 (Original VA: 0x5c810, Ghidra: FUN_0005c810)
 * Prototype: void newgui_fn_05c810(void);
 * Address  : 0x5c810 (Size: 31 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c810
 * Callers  : 0 -> 
 * Callees  : 1 -> instance_fn_049eff
 ******************************************************************************/
void newgui_fn_05c810(void)

{
  instance_fn_049eff();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c82f (Original VA: 0x5c82f, Ghidra: FUN_0005c82f)
 * Prototype: void newgui_fn_05c82f(void);
 * Address  : 0x5c82f (Size: 25 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c82f
 * Callers  : 2 -> input_process_thing_entity_049160, process_players_dungeon_command_packet
 * Callees  : 1 -> newgui_fn_05c848
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00052c3d) */

void newgui_fn_05c82f(void)

{
  char ch;
  undefined4 extraout_EDX;
  
  newgui_fn_05c848();
  newgui_fn_05c848();
  ch = newgui_fn_053c6b(extraout_EDX);
  if (ch != -1) {
    if ((g_bss_0034cf1f != 0) && (ch == *(char *)(g_bss_0034cf1f + 3))) {
      newgui_copy_state_struct_05b3dd();
    }
    (&g_bss_0034bad7)[ch * 0x20] = 3;
    ch = newgui_fn_0588b6();
    if (ch == -1) {
      newgui_fn_054089();
      newgui_fn_052be7();
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c848 (Original VA: 0x5c848, Ghidra: FUN_0005c848)
 * Prototype: void newgui_fn_05c848(void);
 * Address  : 0x5c848 (Size: 126 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c848
 * Callers  : 19 -> frontend_load_frontend_palette_02e8a7, input_draw_text_overlay_049426, instance_update_player_view_state_04b222, instance_update_player_view_state_04b5ca, instance_update_player_view_state_04b6ae, newgui_update_player_dungeon_05ab81, newgui_fn_05ae90, newgui_fn_05aee2 ...
 * Callees  : 6 -> file_settings_dat_02a355, newgui_fn_052be7, newgui_fn_053c6b, newgui_fn_054089, newgui_fn_0588b6, newgui_copy_state_struct_05b3dd
 ******************************************************************************/
void newgui_fn_05c848(void)

{
  byte arg_al;
  char ch;
  
  if ((0xc < arg_al) && (arg_al < 0xf)) {
    file_settings_dat_02a355();
  }
  ch = newgui_fn_053c6b();
  if (ch != -1) {
    if ((g_bss_0034cf1f != 0) && (ch == *(char *)(g_bss_0034cf1f + 3))) {
      newgui_copy_state_struct_05b3dd();
    }
    (&g_bss_0034bad7)[ch * 0x20] = 3;
    ch = newgui_fn_0588b6();
    if (ch == -1) {
      newgui_fn_054089();
      newgui_fn_052be7();
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c8bc (Original VA: 0x5c8bc, Ghidra: FUN_0005c8bc)
 * Prototype: void newgui_fn_05c8bc(void);
 * Address  : 0x5c8bc (Size: 62 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c8bc
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void newgui_fn_05c8bc(void)

{
  byte *arg_eax;
  
  if ((*arg_eax & 8) != 0) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c8fa (Original VA: 0x5c8fa, Ghidra: FUN_0005c8fa)
 * Prototype: void newgui_fn_05c8fa(undefined4 param_1,int param_2);
 * Address  : 0x5c8fa (Size: 139 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c8fa
 * Callers  : 6 -> newgui_update_creature_and_thing_0537af, newgui_draw_gui_button_label_055701, newgui_update_player_dungeon_056699, newgui_update_player_dungeon_05674c, newgui_update_player_dungeon_05686f, newgui_update_creature_and_thing_0574b5
 * Callees  : 1 -> bflib_system_io_fn_0f0870
 ******************************************************************************/
void newgui_fn_05c8fa(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    bflib_system_io_fn_0f0870(g_data_001992a0);
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c985 (Original VA: 0x5c985, Ghidra: FUN_0005c985)
 * Prototype: void newgui_fn_05c985(void);
 * Address  : 0x5c985 (Size: 74 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c985
 * Callers  : 1 -> newgui_maintain_gui_button_state_053021
 * Callees  : 2 -> newgui_fn_052b58, newgui_fn_05cf2d
 ******************************************************************************/
void newgui_fn_05c985(void)

{
  char ch;
  uint arg_eax;
  
  if ((&g_bss_002e7087)[(arg_eax & 0xff) * 0x15] == '\x02') {
    ch = newgui_fn_052b58();
    if (ch == '\0') {
      newgui_fn_05cf2d();
      return;
    }
  }
  else {
    ch = newgui_fn_052b58();
    if (ch == '\0') {
      newgui_fn_05cf2d();
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05c9cf (Original VA: 0x5c9cf, Ghidra: FUN_0005c9cf)
 * Prototype: void newgui_fn_05c9cf(int param_1);
 * Address  : 0x5c9cf (Size: 236 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05c9cf
 * Callers  : 1 -> newgui_process_thing_entity_05cabb
 * Callees  : 1 -> bflib_system_io_fn_0f0870
 ******************************************************************************/
void newgui_fn_05c9cf(int param_1)

{
  int arg_ebx;
  
  bflib_system_io_fn_0f0870(g_data_001992a0,arg_ebx / (int)(uint)g_units_per_pixel);
  bflib_system_io_fn_0f0870((&g_data_00191774)[*(char *)(param_1 + 6)]);
  return;
}

/******************************************************************************
 * Function : newgui_process_thing_entity_05cabb (Original VA: 0x5cabb, Ghidra: FUN_0005cabb)
 * Prototype: void newgui_process_thing_entity_05cabb(void);
 * Address  : 0x5cabb (Size: 399 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> newgui_process_thing_entity_0571cf, newgui_process_thing_entity_057348
 * Callees  : 3 -> newgui_fn_05c9cf, bflib_system_io_fn_0f3300, watcom_crt_fn_13a710
 ******************************************************************************/
void newgui_process_thing_entity_05cabb(void)

{
  int camera;
  int arg_ebx;
  
  if ((camera != g_thing_ptrs) && (camera != 0)) {
    if ((*(short *)(camera + 0x17) == 0) || (((byte)g_game_turn & 1) == 0)) { /* camera->zoom */
      watcom_crt_fn_13a710();
    }
    else {
      bflib_system_io_fn_0f3300((&g_data_0019177a)[*(char *)(camera + 6)],
                   (int)(arg_ebx -
                        ((uint)*(byte *)(*(short *)(&g_data_00187b9c +
                                                   (uint)*(byte *)(camera + 0x1a) * 0x2c) * 6 +
                                         g_data_00199230 + 5) * (uint)g_units_per_pixel) / 2) /
                   (int)(uint)g_units_per_pixel);
    }
    newgui_fn_05c9cf();
    watcom_crt_fn_13a710();
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cc4a (Original VA: 0x5cc4a, Ghidra: FUN_0005cc4a)
 * Prototype: void newgui_fn_05cc4a(void);
 * Address  : 0x5cc4a (Size: 12 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cc4a
 * Callers  : 3 -> file_load_script_file_02c502, update_update_player_dungeon_0dd624, update_update_player_dungeon_0dd6c8
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05cc4a(void)

{
  undefined4 arg_eax;
  undefined4 arg_edx;
  
  g_bss_002ee79f = arg_eax;
  g_bss_002ee7a3 = arg_edx;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cc56 (Original VA: 0x5cc56, Ghidra: FUN_0005cc56)
 * Prototype: void newgui_fn_05cc56(void);
 * Address  : 0x5cc56 (Size: 159 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cc56
 * Callers  : 1 -> newgui_draw_text_overlay_05449e
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05cc56(void)

{
  int arg_eax;
  
  if ((*(short *)(arg_eax + 4) != 0) && (*(short *)(arg_eax + 4) == g_bss_002ee79f)) {
    watcom_crt_fn_13a710(g_data_001991c0 + ((g_game_turn >> 1 & 7) + 0xb0) * 6);
  }
  return;
}

/******************************************************************************
 * Function : newgui_cycle_button_have_gui_05ccf5 (Original VA: 0x5ccf5, Ghidra: FUN_0005ccf5)
 * Prototype: void newgui_cycle_button_have_gui_05ccf5(void);
 * Address  : 0x5ccf5 (Size: 96 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 10013
 * Purpose  : String 'Cycle button cannot have a 'gui_area_normal_button' draw fun'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void newgui_cycle_button_have_gui_05ccf5(void)

{
  int arg_eax;
  
  if (*(char *)(arg_eax + 6) == '\x02') {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 10013, "Cycle button cannot have a 'gui_area_normal_button' draw function!") */
  }
  watcom_crt_fn_13a710();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cd55 (Original VA: 0x5cd55, Ghidra: FUN_0005cd55)
 * Prototype: void newgui_fn_05cd55(void);
 * Address  : 0x5cd55 (Size: 82 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cd55
 * Callers  : 3 -> newgui_fn_0543dd, newgui_update_player_view_state_05d280, packet_check_all_room_ traps_sync
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05cd55(void)

{
  int arg_eax;
  
  if ((((arg_eax == 7) || (arg_eax == 0x1f)) || (arg_eax == 0x23)) || (arg_eax == 0x20)) {
    g_bss_0034cf16 = 1;
  }
  else {
    g_bss_0034cf16 = 0;
  }
  g_data_0017d17b._2_1_ = arg_eax == 2;
  g_bss_0034cf17 = arg_eax == 3;
  g_bss_0034cf18 = arg_eax == 4;
  g_bss_0034cf19 = arg_eax == 5;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cda7 (Original VA: 0x5cda7, Ghidra: FUN_0005cda7)
 * Prototype: void newgui_fn_05cda7(void);
 * Address  : 0x5cda7 (Size: 150 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cda7
 * Callers  : 1 -> input_update_player_dungeon_047bcd
 * Callees  : 2 -> newgui_fn_058718, newgui_fn_0587a6
 ******************************************************************************/
void newgui_fn_05cda7(void)

{
  int arg_eax;
  byte *byte_ptr;
  byte *byte_ptr_2;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  
  byte_ptr = &g_bss_0034bbd6;
  do {
    byte_ptr_2 = byte_ptr;
    if ((((*byte_ptr & 1) != 0) && ((&g_bss_0034baf3)[(char)byte_ptr[3] * 0x20] != '\0')) &&
       (*(short *)(byte_ptr + 4) == arg_eax)) {
      if (((*(int *)(byte_ptr + 7) != 0) || ((*byte_ptr & 2) != 0)) ||
         ((*(int *)(byte_ptr + 0x2f) != 0 || (byte_ptr[6] == 3)))) {
        newgui_fn_0587a6();
        byte_ptr_2 = extraout_ECX;
      }
      if (((*(int *)(byte_ptr + 7) != 0) || ((*byte_ptr & 2) != 0)) ||
         ((*(int *)(byte_ptr + 0x2f) != 0 || (byte_ptr[6] == 3)))) {
        newgui_fn_058718();
        byte_ptr_2 = extraout_ECX_00;
      }
    }
    byte_ptr = byte_ptr_2 + 0x39;
  } while (byte_ptr != &g_bss_0034cefc);
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ce3d (Original VA: 0x5ce3d, Ghidra: FUN_0005ce3d)
 * Prototype: void newgui_fn_05ce3d(void);
 * Address  : 0x5ce3d (Size: 38 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ce3d
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ce3d(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : newgui_create_floating_spirit_05ce63 (Original VA: 0x5ce63, Ghidra: FUN_0005ce63)
 * Prototype: void newgui_create_floating_spirit_05ce63(void);
 * Address  : 0x5ce63 (Size: 103 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 10108
 * Purpose  : String 'Unable to create floating spirit'
 * Callers  : 0 -> 
 * Callees  : 3 -> workshop_fn_0780a3, creature_allocate_light_new_hero_080c84, LbErrorLog
 ******************************************************************************/
void newgui_create_floating_spirit_05ce63(void)

{
  int thing_ptr;
  undefined8 uval;
  
  uval = workshop_fn_0780a3();
  *(int *)(&g_bss_0019d57e + (int)((ulonglong)uval >> 0x20)) = (int)uval;
  thing_ptr = creature_allocate_light_new_hero_080c84();
  if (thing_ptr == 0) {
    LbErrorLog(); /* LbErrorLog("newgui.cpp", line 10108, "Unable to create floating spirit") */
    return;
  }
  *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 1) = /* thing->ccontrol_idx */
       *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 1) | 2; /* thing->ccontrol_idx */
  return;
}

/******************************************************************************
 * Function : newgui_fn_05ceca (Original VA: 0x5ceca, Ghidra: FUN_0005ceca)
 * Prototype: void newgui_fn_05ceca(void);
 * Address  : 0x5ceca (Size: 21 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05ceca
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_fn_05ceca(void)

{
  g_bss_0034b2bc = 0;
  g_bss_0034b2c0 = 0x19;
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cee9 (Original VA: 0x5cee9, Ghidra: FUN_0005cee9)
 * Prototype: void newgui_fn_05cee9(void);
 * Address  : 0x5cee9 (Size: 26 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cee9
 * Callers  : 2 -> newgui_fn_058718, newgui_fn_0587ff
 * Callees  : 1 -> sound_non_emitter_has_been_06e9ab
 ******************************************************************************/
void newgui_fn_05cee9(void)

{
  int arg_eax;
  
  if ((*(ushort *)(arg_eax + 4) != 0) && (*(ushort *)(arg_eax + 4) < 6)) {
    sound_non_emitter_has_been_06e9ab();
    return;
  }
  sound_non_emitter_has_been_06e9ab();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cef9 (Original VA: 0x5cef9, Ghidra: FUN_0005cef9)
 * Prototype: void newgui_fn_05cef9(void);
 * Address  : 0x5cef9 (Size: 10 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cef9
 * Callers  : 1 -> newgui_fn_0587ff
 * Callees  : 1 -> sound_non_emitter_has_been_06e9ab
 ******************************************************************************/
void newgui_fn_05cef9(void)

{
  sound_non_emitter_has_been_06e9ab();
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cf03 (Original VA: 0x5cf03, Ghidra: FUN_0005cf03)
 * Prototype: void newgui_fn_05cf03(void);
 * Address  : 0x5cf03 (Size: 110 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cf03
 * Callers  : 4 -> instance_update_player_view_state_04b5ca, instance_update_player_view_state_04b6ae, process_players_dungeon_command_packet, creature_update_player_view_state_085f80
 * Callees  : 2 -> newgui_fn_053c6b, newgui_fn_05cf2d
 ******************************************************************************/
void newgui_fn_05cf03(void)

{
  char ch;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uval;
  int extraout_EDX_01;
  
  ch = newgui_fn_053c6b();
  uval = extraout_EDX;
  if (ch == -1) {
    newgui_fn_05cf2d();
    uval = extraout_EDX_00;
  }
  if (g_bss_0034cf16 != '\0') {
    ch = newgui_oi_there_fade_time_053ccc(uval);
    if ((ch != '\0') && (*(char *)(*(int *)(&g_data_0017d186 + extraout_EDX_01) + 0x1f) != '\0')) {
      g_bss_002ee8a2 = 7;
    }
    return;
  }
  if (g_data_0017d17b._2_1_ != '\0') {
    newgui_fn_05cf2d();
    return;
  }
  if (g_bss_0034cf17 != '\0') {
    newgui_fn_05cf2d();
    return;
  }
  if (g_bss_0034cf18 != '\0') {
    newgui_fn_05cf2d();
    return;
  }
  if (g_bss_0034cf19 != '\0') {
    newgui_fn_05cf2d();
    return;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cf2d (Original VA: 0x5cf2d, Ghidra: FUN_0005cf2d)
 * Prototype: void newgui_fn_05cf2d(void);
 * Address  : 0x5cf2d (Size: 46 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cf2d
 * Callers  : 16 -> frontend_load_frontend_palette_02e8a7, inits_non_keeper_keeper_game_0402e5, input_process_thing_entity_049160, input_draw_text_overlay_049426, instance_update_creature_and_thing_04b478, newgui_fn_059ee7, newgui_fn_05abd1, newgui_copy_state_struct_05b4e7 ...
 * Callees  : 1 -> newgui_oi_there_fade_time_053ccc
 ******************************************************************************/
void newgui_fn_05cf2d(void)

{
  undefined1 arg_al;
  char ch;
  int extraout_EDX;
  
  ch = newgui_oi_there_fade_time_053ccc();
  if ((ch != '\0') && (*(char *)(*(int *)(&g_data_0017d186 + extraout_EDX) + 0x1f) != '\0')) {
    g_bss_002ee8a2 = arg_al;
  }
  return;
}

/******************************************************************************
 * Function : newgui_fn_05cf9f (Original VA: 0x5cf9f, Ghidra: FUN_0005cf9f)
 * Prototype: void newgui_fn_05cf9f(void);
 * Address  : 0x5cf9f (Size: 128 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Module newgui.cpp procedure @ 0x05cf9f
 * Callers  : 0 -> 
 * Callees  : 4 -> newgui_draw_text_overlay_057739, newgui_bar_small_057bba, newgui_bar_small_057cac, dk_sprintf
 ******************************************************************************/
void newgui_fn_05cf9f(void)

{
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  
  *(undefined2 *)(arg_eax + 0x27) = 0x20;
  if ((*(char *)(arg_eax + 1) == '\0') && (*(char *)(arg_eax + 2) == '\0')) {
    newgui_bar_small_057bba();
    val = extraout_ECX_00;
  }
  else {
    newgui_bar_small_057bba();
    newgui_bar_small_057cac();
    val = extraout_ECX;
  }
  if (*(int *)(val + 0x33) != 0) {
    dk_sprintf(&g_log_sprintf_buf,&g_data_00166121,*(undefined4 *)(val + 0x33));
    newgui_draw_text_overlay_057739();
  }
  return;
}

/******************************************************************************
 * Function : newgui_maintain_gui_button_state_05d01f (Original VA: 0x5d01f, Ghidra: FUN_0005d01f)
 * Prototype: void newgui_maintain_gui_button_state_05d01f(void);
 * Address  : 0x5d01f (Size: 19 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void newgui_maintain_gui_button_state_05d01f(void)

{
  byte packet_off;
  byte *gui_btn;
  
  packet_off = (&g_bss_002e6ff4)[*(short *)(gui_btn + 0x1b) * 0x11]; /* gui_btn->id_num */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (packet_off & 1) << 3;
  return;
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05d032 (Original VA: 0x5d032, Ghidra: FUN_0005d032)
 * Prototype: void newgui_update_player_dungeon_05d032(void);
 * Address  : 0x5d032 (Size: 300 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> newgui_process_map_subtile_057fe4
 * Callees  : 2 -> battle_fn_014188, newgui_dead_thing_friend_enemy_05d19c
 ******************************************************************************/
void newgui_update_player_dungeon_05d032(void)

{
  char ch;
  int dungeon_off;
  undefined2 uval;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  uint player_off;
  byte flag;
  uint uval_2;
  int dungeon_off_2;
  
  player_off = (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef];
  while( true ) {
    flag = (byte)(player_off >> 8);
    if (2 < flag) break;
    dungeon_off = (uint)flag + (player_off & 0xff) * 0x1508;
    if (*(int *)(&g_bss_002ed450 + (uint)(byte)(&g_bss_002e16fd)[dungeon_off] * 0x11) == 0) {
      (&g_bss_002e16fd)[dungeon_off] = 0;
    }
    player_off = (uint)CONCAT11(flag + 1,(char)player_off);
  }
  uval_2 = 0;
  do {
    if (1 < uval_2) {
      player_off = player_off & 0xff;
      while( true ) {
        uval = (undefined2)player_off;
        if (2 < player_off >> 8) break;
        dungeon_off = (player_off >> 8) + (player_off & 0xff) * 0x1508;
        if (((&g_bss_002e16fd)[dungeon_off] == '\0') &&
           (ch = battle_fn_014188(), uval = extraout_CX, ch != '\0')) {
          (&g_bss_002e16fd)[dungeon_off] = ch;
        }
        player_off = (uint)CONCAT11((char)((ushort)uval >> 8) + '\x01',(char)uval);
      }
      player_off = player_off & 0xff;
      while( true ) {
        uval = (undefined2)player_off;
        if (2 < player_off >> 8) break;
        if ((&g_bss_002e16fd)[(player_off & 0xff) * 0x1508 + (player_off >> 8)] != '\0') {
          newgui_dead_thing_friend_enemy_05d19c();
          uval = extraout_CX_00;
        }
        player_off = (uint)CONCAT11((char)((ushort)uval >> 8) + '\x01',(char)uval);
      }
      return;
    }
    if ((&g_bss_002e16fd)[uval_2 + (player_off & 0xff) * 0x1508] == '\0') {
      uval_2 = (uint)CONCAT11((char)uval_2,(char)uval_2);
      do {
        flag = (char)(uval_2 >> 8) + 1;
        uval_2 = (uint)CONCAT11(flag,(char)uval_2);
        if (2 < flag) goto LAB_0005d08b;
        dungeon_off_2 = (player_off & 0xff) * 0x1508;
        dungeon_off = (uint)flag + dungeon_off_2;
      } while ((&g_bss_002e16fd)[dungeon_off] == '\0');
      (&g_bss_002e16fd)[dungeon_off_2 + (uval_2 & 0xff)] = (&g_bss_002e16fd)[dungeon_off];
      (&g_bss_002e16fd)[dungeon_off] = 0;
    }
LAB_0005d08b:
    uval_2 = (uint)(byte)((char)uval_2 + 1);
  } while( true );
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05d15e (Original VA: 0x5d15e, Ghidra: FUN_0005d15e)
 * Prototype: bool newgui_update_player_dungeon_05d15e(void);
 * Address  : 0x5d15e (Size: 22 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 2 -> instance_fn_049a9a, newgui_update_player_dungeon_05a6a6
 * Callees  : 0 -> 
 ******************************************************************************/
bool newgui_update_player_dungeon_05d15e(void)

{
  uint arg_eax;
  
  return (&g_bss_002e16fd)[(arg_eax & 0xff) * 0x1508] != '\0';
}

/******************************************************************************
 * Function : newgui_update_player_dungeon_05d174 (Original VA: 0x5d174, Ghidra: FUN_0005d174)
 * Prototype: undefined1 newgui_update_player_dungeon_05d174(void);
 * Address  : 0x5d174 (Size: 40 bytes)
 * Module   : newgui.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 newgui_update_player_dungeon_05d174(void)

{
  byte arg_al;
  byte loop_i;
  
  for (loop_i = 0; loop_i < 3; loop_i = loop_i + 1) {
    (&g_bss_002e16fd)[(uint)arg_al * 0x1508 + (uint)loop_i] = 0;
  }
  return 0;
}

/******************************************************************************
 * Function : newgui_dead_thing_friend_enemy_05d19c (Original VA: 0x5d19c, Ghidra: FUN_0005d19c)
 * Prototype: void newgui_dead_thing_friend_enemy_05d19c(void);
 * Address  : 0x5d19c (Size: 228 bytes)
 * Module   : newgui.cpp [direct_file_string_xref]
 * OrigLine : newgui.cpp lines 10378
 * Purpose  : String 'Dead thing in friend/enemy battle-list'
 * Callers  : 1 -> newgui_update_player_dungeon_05d032
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void newgui_dead_thing_friend_enemy_05d19c(void)

{
  ushort cctrl_ptr;
  byte arg_al;
  undefined2 *word_ptr;
  uint uval;
  undefined2 *word_ptr_2;
  uint extraout_ECX;
  uint thing_ptr;
  undefined2 *arg_edx;
  undefined2 *arg_ebx;
  int local_20;
  byte local_1c;
  byte local_14;
  
  local_1c = 0;
  local_14 = 0;
  word_ptr = arg_ebx;
  word_ptr_2 = arg_edx;
  do {
    *word_ptr_2 = 0;
    word_ptr_2 = word_ptr_2 + 1;
    *word_ptr = 0;
    word_ptr = word_ptr + 1;
  } while (word_ptr_2 != arg_edx + 7);
  cctrl_ptr = *(ushort *)(&g_bss_002ed45d + (uint)arg_al * 0x11);
  for (local_20 = 0; (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr && (local_20 < 1000));
      local_20 = local_20 + 1) {
    if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
      if ((int)*(char *)(thing_ptr + 6) == (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) { /* thing->owner */
        uval = (uint)local_1c;
        if (uval < 7) {
          local_1c = local_1c + 1;
          arg_edx[uval] = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        }
      }
      else {
        uval = (uint)local_14;
        if (uval < 7) {
          local_14 = local_14 + 1;
          arg_ebx[uval] = *(undefined2 *)(thing_ptr + 0x1b); /* thing->index_or_angle */
        }
      }
    }
    else {
      LbErrorLog(); /* LbErrorLog("newgui.cpp", line 10378, "Dead thing in friend/enemy battle-list") */
      thing_ptr = extraout_ECX;
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2f3); /* thing->ccontrol_idx */
  }
  return;
}

/******************************************************************************
 * Function : newgui_update_player_view_state_05d280 (Original VA: 0x5d280, Ghidra: FUN_0005d280)
 * Prototype: void newgui_update_player_view_state_05d280(void);
 * Address  : 0x5d280 (Size: 172 bytes)
 * Module   : newgui.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> file_update_player_dungeon_02ca74
 * Callees  : 5 -> newgui_fn_053c6b, newgui_update_player_view_state_05b9c0, newgui_fn_05cd55, newgui_fn_05cf2d, packet_validate_active_Catalogue_entries
 ******************************************************************************/
void newgui_update_player_view_state_05d280(void)

{
  char player_off;
  int val;
  
  if ((((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x02') ||
      ((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x03')) ||
     (newgui_fn_05cf2d(), g_bss_002ee8a2 == '\0')) {
    newgui_fn_05cf2d();
  }
  else {
    newgui_fn_05cd55();
    newgui_fn_05cf2d();
    val = newgui_fn_053c6b();
    if (val != -1) {
      packet_validate_active_Catalogue_entries();
    }
  }
  player_off = (&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef];
  if (((player_off != '\x04') && (player_off != '\x05')) && (player_off != '\x06')) {
    newgui_update_player_view_state_05b9c0();
    return;
  }
  newgui_update_player_view_state_05b9c0();
  return;
}

