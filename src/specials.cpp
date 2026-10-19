/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: specials.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 31
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : specials_fn_0701e3 (Original VA: 0x701e3, Ghidra: FUN_000701e3)
 * Prototype: int specials_fn_0701e3(void);
 * Address  : 0x701e3 (Size: 10 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Module specials.cpp procedure @ 0x0701e3
 * Callers  : 6 -> sound3d_fn_06f72b, sound_fn_06f7b2, sound3d_fn_06faa0, sound3d_fn_06fca5, sound3d_fn_06ff7f, sound3d_fn_06ffd9
 * Callees  : 0 -> 
 ******************************************************************************/
int specials_fn_0701e3(void)

{
  int arg_eax;
  
  return *(ushort *)(arg_eax + 2) + 4000;
}

/******************************************************************************
 * Function : specials_fn_0701ed (Original VA: 0x701ed, Ghidra: FUN_000701ed)
 * Prototype: int specials_fn_0701ed(void);
 * Address  : 0x701ed (Size: 5 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Module specials.cpp procedure @ 0x0701ed
 * Callers  : 1 -> sound3d_fn_07019c
 * Callees  : 0 -> 
 ******************************************************************************/
int specials_fn_0701ed(void)

{
  int arg_eax;
  
  return *(int *)(arg_eax + 0x19) + 4000;
}

/******************************************************************************
 * Function : specials_fn_0701f2 (Original VA: 0x701f2, Ghidra: FUN_000701f2)
 * Prototype: undefined4 specials_fn_0701f2(void);
 * Address  : 0x701f2 (Size: 12 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Module specials.cpp procedure @ 0x0701f2
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 specials_fn_0701f2(void)

{
  return 1;
}

/******************************************************************************
 * Function : specials_fn_070234 (Original VA: 0x70234, Ghidra: FUN_00070234)
 * Prototype: int specials_fn_070234(void);
 * Address  : 0x70234 (Size: 71 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Module specials.cpp procedure @ 0x070234
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
int specials_fn_070234(void)

{
  int val;
  int extraout_ECX;
  
  bflib_system_io_fn_0e69fc();
  val = bflib_system_io_fn_0e69fc();
  if (val < extraout_ECX) {
    val = *(int *)(&g_data_0017a4d0 + ((val << 8) / extraout_ECX) * 8) * extraout_ECX;
  }
  else {
    if (val == 0) {
      return 0;
    }
    val = *(int *)(&g_data_0017a4d0 + ((extraout_ECX << 8) / val) * 8) * val;
  }
  return val >> 0xd;
}

/******************************************************************************
 * Function : specials_handle_object_thing_07027c (Original VA: 0x7027c, Ghidra: FUN_0007027c)
 * Prototype: longlong specials_handle_object_thing_07027c(void);
 * Address  : 0x7027c (Size: 32 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Checks Thing->class_id == 1 (Object) and processes state
 * Callers  : 2 -> lair_process_thing_entity_04e120, specials_dungeon_special_model_0708fa
 * Callees  : 0 -> 
 ******************************************************************************/
longlong specials_handle_object_thing_07027c(void)

{
  int thing;
  uint arg_edx;
  
  if (((*(char *)(thing + 0x1f) == '\x01') && (0x55 < *(byte *)(thing + 0x1a))) && /* thing->class_id */
     (*(byte *)(thing + 0x1a) < 0x5e)) {
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : specials_fn_0702e6 (Original VA: 0x702e6, Ghidra: FUN_000702e6)
 * Prototype: void specials_fn_0702e6(void);
 * Address  : 0x702e6 (Size: 58 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Module specials.cpp procedure @ 0x0702e6
 * Callers  : 0 -> 
 * Callees  : 1 -> set_packet_action
 ******************************************************************************/
void specials_fn_0702e6(void)

{
  set_packet_action(0,0);
  return;
}

/******************************************************************************
 * Function : specials_draw_text_overlay_070320 (Original VA: 0x70320, Ghidra: FUN_00070320)
 * Prototype: void specials_draw_text_overlay_070320(void);
 * Address  : 0x70320 (Size: 399 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 4 -> LbTextDraw, LbTextDrawFormatted, dk_sprintf, bflib_system_io_fn_0f0870
 ******************************************************************************/
void specials_draw_text_overlay_070320(void)

{
  undefined2 saved_draw_flags;
  int thing;
  int dungeon_off;
  int extraout_ECX;
  int val;
  undefined4 uval;
  
  saved_draw_flags = g_lb_display_draw_flags;
  uval = 0;
  g_lb_display_draw_flags = 4;
  bflib_system_io_fn_0f0870(0,(int)*(short *)(thing + 0x1f) / (int)(uint)g_units_per_pixel); /* thing->class_id */
  g_lb_current_font_ptr = g_frontend_font_ptr;
  LbTextDraw(uval,(int)((ulonglong)*(ushort *)(thing + 0x25) /
                          (ulonglong)(longlong)(int)(uint)g_units_per_pixel));
  dungeon_off = g_my_player_word._3_1_ * 0x1508;
  if (*(int *)(&g_bss_002e1928 + dungeon_off) == 0x40) {
    val = *(short *)(thing + 0x1b) + g_bss_003772da; /* thing->index_or_angle */
    if (val < 0x40) {
      val = (*(int *)(&g_bss_002e192c + dungeon_off) + val) % 0x40;
      goto LAB_00070400;
    }
  }
  else {
    val = *(short *)(thing + 0x1b) + g_bss_003772da; /* thing->index_or_angle */
    if (val < *(int *)(&g_bss_002e1928 + dungeon_off)) goto LAB_00070400;
  }
  val = -1;
LAB_00070400:
  if (val != -1) {
    g_lb_display_draw_flags = 0x20;
    dk_sprintf(&g_log_sprintf_buf,&g_data_00167714, /* 0x167714=" %s" */
                 (&g_bss_0033319b)
                 [*(ushort *)
                   (&g_data_00188bf7 +
                   (uint)(byte)(&g_bss_002e18a8)[g_my_player_word._3_1_ * 0x1508 + val * 2] * 5)]);
    LbTextDrawFormatted();
    g_lb_display_draw_flags = 0x80;
    dk_sprintf(&g_log_sprintf_buf,s__s__d_00167718,g_bss_003337f3,
                 (byte)(&g_bss_002e18a9)[g_my_player_word._3_1_ * 0x1508 + extraout_ECX] + 1);
    LbTextDrawFormatted();
  }
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : specials_fn_0704af (Original VA: 0x704af, Ghidra: FUN_000704af)
 * Prototype: void specials_fn_0704af(void);
 * Address  : 0x704af (Size: 16 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Module specials.cpp procedure @ 0x0704af
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_fn_0704af(void)

{
  if (g_bss_003772da != 0) {
    g_bss_003772da = g_bss_003772da + -1;
  }
  return;
}

/******************************************************************************
 * Function : specials_update_player_dungeon_0704bf (Original VA: 0x704bf, Ghidra: FUN_000704bf)
 * Prototype: void specials_update_player_dungeon_0704bf(void);
 * Address  : 0x704bf (Size: 36 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_update_player_dungeon_0704bf(void)

{
  if (g_bss_003772da < *(int *)(&g_bss_002e1928 + g_my_player_word._3_1_ * 0x1508)) {
    g_bss_003772da = g_bss_003772da + 1;
  }
  return;
}

/******************************************************************************
 * Function : specials_maintain_gui_button_state_0704e3 (Original VA: 0x704e3, Ghidra: FUN_000704e3)
 * Prototype: void specials_maintain_gui_button_state_0704e3(void);
 * Address  : 0x704e3 (Size: 109 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_maintain_gui_button_state_0704e3(void)

{
  byte *gui_btn;
  int dungeon_off;
  bool flag;
  
  dungeon_off = g_my_player_word._3_1_ * 0x1508;
  if ((*(int *)(&g_bss_002e1928 + dungeon_off) <= g_bss_003772da) && (*(int *)(&g_bss_002e1928 + dungeon_off) != 0)) {
    g_bss_003772de = *(int *)(&g_bss_002e1928 + dungeon_off) + -1;
  }
  if (*(short *)(gui_btn + 0x1b) == 1) { /* gui_btn->id_num */
    flag = g_bss_003772da != 0;
  }
  else {
    flag = g_bss_003772da < *(int *)(&g_bss_002e1928 + g_my_player_word._3_1_ * 0x1508) + -1;
  }
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : specials_update_player_dungeon_070550 (Original VA: 0x70550, Ghidra: FUN_00070550)
 * Prototype: void specials_update_player_dungeon_070550(void);
 * Address  : 0x70550 (Size: 173 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_fn_05c848, set_packet_action
 ******************************************************************************/
void specials_update_player_dungeon_070550(void)

{
  int gui_btn;
  
  if (*(short *)(gui_btn + 0x1b) + g_bss_003772da < /* gui_btn->id_num */
      *(int *)(&g_bss_002e1928 + g_my_player_word._3_1_ * 0x1508)) {
    set_packet_action(0,0);
    newgui_fn_05c848();
  }
  return;
}

/******************************************************************************
 * Function : specials_maintain_gui_button_state_0705fd (Original VA: 0x705fd, Ghidra: FUN_000705fd)
 * Prototype: void specials_maintain_gui_button_state_0705fd(void);
 * Address  : 0x705fd (Size: 48 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_maintain_gui_button_state_0705fd(void)

{
  int dungeon_off;
  byte *gui_btn;
  int val;
  
  val = *(short *)(gui_btn + 0x1b) + g_bss_003772da; /* gui_btn->id_num */
  dungeon_off = *(int *)(&g_bss_002e1928 + g_my_player_word._3_1_ * 0x1508);
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (val < dungeon_off) << 3;
  return;
}

/******************************************************************************
 * Function : specials_draw_text_overlay_07062d (Original VA: 0x7062d, Ghidra: FUN_0007062d)
 * Prototype: void specials_draw_text_overlay_07062d(void);
 * Address  : 0x7062d (Size: 335 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 0 -> 
 * Callees  : 4 -> LbTextDraw, LbTextDrawFormatted, dk_sprintf, bflib_system_io_fn_0f0870
 ******************************************************************************/
void specials_draw_text_overlay_07062d(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  undefined2 saved_draw_flags;
  int thing;
  int cctrl_ptr_2;
  undefined4 uval;
  
  saved_draw_flags = g_lb_display_draw_flags;
  uval = 0;
  g_lb_display_draw_flags = 4;
  bflib_system_io_fn_0f0870(0,(int)((ulonglong)*(ushort *)(thing + 0x25) /
                      (ulonglong)(longlong)(int)(uint)g_units_per_pixel));
  g_lb_current_font_ptr = g_frontend_font_ptr;
  LbTextDraw(uval,(int)*(short *)(thing + 0x1f) / (int)(uint)g_units_per_pixel); /* thing->class_id */
  cctrl_ptr_2 = *(short *)(thing + 0x1b) + g_bss_003772de; /* thing->index_or_angle */
  if (cctrl_ptr_2 < (int)(uint)(byte)(&g_bss_002e0ea2)[g_my_player_word._3_1_ * 0x1508]) {
    cctrl_ptr = (&g_bss_002e05b6)[g_my_player_word._3_1_ * 0xa84];
    for (; (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr && (cctrl_ptr_2 != 0));
        cctrl_ptr_2 = cctrl_ptr_2 + -1) {
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
    if (g_thing_ptrs < thing_ptr) {
      g_lb_display_draw_flags = 0x20;
      dk_sprintf(&g_log_sprintf_buf,&g_data_0016771f, /* 0x16771f=" %s" */
                   (&g_bss_0033319b)[*(ushort *)(&g_data_00188bf7 + (uint)*(byte *)(thing_ptr + 0x1a) * 5)]);
      LbTextDrawFormatted();
      g_lb_display_draw_flags = 0x80;
      dk_sprintf(&g_log_sprintf_buf,s__s__d_00167723,g_bss_003337f3,
                   *(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x23) + 1); /* thing->ccontrol_idx */
      LbTextDrawFormatted();
    }
  }
  g_lb_display_draw_flags = saved_draw_flags;
  return;
}

/******************************************************************************
 * Function : specials_maintain_gui_button_state_07077c (Original VA: 0x7077c, Ghidra: FUN_0007077c)
 * Prototype: void specials_maintain_gui_button_state_07077c(void);
 * Address  : 0x7077c (Size: 39 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_maintain_gui_button_state_07077c(void)

{
  byte dungeon_off;
  byte *gui_btn;
  int val;
  
  dungeon_off = (&g_bss_002e0ea2)[g_my_player_word._3_1_ * 0x1508];
  val = *(short *)(gui_btn + 0x1b) + g_bss_003772de; /* gui_btn->id_num */
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | (val < (int)(uint)dungeon_off) << 3;
  return;
}

/******************************************************************************
 * Function : specials_fn_0707a3 (Original VA: 0x707a3, Ghidra: FUN_000707a3)
 * Prototype: void specials_fn_0707a3(void);
 * Address  : 0x707a3 (Size: 16 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Module specials.cpp procedure @ 0x0707a3
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_fn_0707a3(void)

{
  if (g_bss_003772de != 0) {
    g_bss_003772de = g_bss_003772de + -1;
  }
  return;
}

/******************************************************************************
 * Function : specials_update_player_dungeon_0707b3 (Original VA: 0x707b3, Ghidra: FUN_000707b3)
 * Prototype: void specials_update_player_dungeon_0707b3(void);
 * Address  : 0x707b3 (Size: 35 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_update_player_dungeon_0707b3(void)

{
  if (g_bss_003772de < (int)(uint)(byte)(&g_bss_002e0ea2)[g_my_player_word._3_1_ * 0x1508]) {
    g_bss_003772de = g_bss_003772de + 1;
  }
  return;
}

/******************************************************************************
 * Function : specials_maintain_gui_button_state_0707d6 (Original VA: 0x707d6, Ghidra: FUN_000707d6)
 * Prototype: void specials_maintain_gui_button_state_0707d6(void);
 * Address  : 0x707d6 (Size: 100 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void specials_maintain_gui_button_state_0707d6(void)

{
  byte *gui_btn;
  bool flag;
  
  if ((int)(uint)(byte)(&g_bss_002e0ea2)[g_my_player_word._3_1_ * 0x1508] <= g_bss_003772de) {
    g_bss_003772de = (byte)(&g_bss_002e0ea2)[g_my_player_word._3_1_ * 0x1508] - 1;
  }
  if (*(short *)(gui_btn + 0x1b) == 1) { /* gui_btn->id_num */
    flag = g_bss_003772de != 0;
  }
  else {
    flag = g_bss_003772de < (int)((byte)(&g_bss_002e0ea2)[g_my_player_word._3_1_ * 0x1508] - 1);
  }
  *gui_btn = *gui_btn & 0xf7;
  *gui_btn = *gui_btn | flag << 3;
  return;
}

/******************************************************************************
 * Function : specials_update_creature_and_thing_07083a (Original VA: 0x7083a, Ghidra: FUN_0007083a)
 * Prototype: void specials_update_creature_and_thing_07083a(void);
 * Address  : 0x7083a (Size: 160 bytes)
 * Module   : specials.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 2 -> newgui_fn_05c848, set_packet_action
 ******************************************************************************/
void specials_update_creature_and_thing_07083a(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int gui_btn;
  int cctrl_ptr_2;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [8];
  
  word_ptr = (undefined4 *)auStack_c;
  cctrl_ptr_2 = *(short *)(gui_btn + 0x1b) + g_bss_003772de; /* gui_btn->id_num */
  if (cctrl_ptr_2 < (int)(uint)(byte)(&g_bss_002e0ea2)[g_my_player_word._3_1_ * 0x1508]) {
    cctrl_ptr = (&g_bss_002e05b6)[g_my_player_word._3_1_ * 0xa84];
    for (; (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr && (cctrl_ptr_2 != 0));
        cctrl_ptr_2 = cctrl_ptr_2 + -1) {
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
    if (g_thing_ptrs < thing_ptr) {
      uStack_10 = 0;
      word_ptr = &uStack_14;
      uStack_14 = 0;
      set_packet_action();
    }
    *(undefined4 *)((int)word_ptr + -4) = 0x708d6;
    newgui_fn_05c848();
  }
  return;
}

/******************************************************************************
 * Function : specials_dungeon_special_model_0708fa (Original VA: 0x708fa, Ghidra: FUN_000708fa)
 * Prototype: void specials_dungeon_special_model_0708fa(void);
 * Address  : 0x708fa (Size: 322 bytes)
 * Module   : specials.cpp [direct_file_string_xref]
 * OrigLine : specials.cpp lines 357
 * Purpose  : String 'Invalid dungeon special (Model %d)'
 * Callers  : 3 -> lair_process_thing_entity_04e120, process_players_dungeon_control_packet, object_picking_up_object_0c599c
 * Callees  : 15 -> evil_fn_02778e, moodneed_fn_051374, specials_handle_object_thing_07027c, specials_fn_070c0c, specials_update_creature_and_thing_070c96, specials_bonus_level_assigned_this_070d0d, specials_update_creature_and_thing_070d86, specials_process_slabmap_tile_070e59 ...
 ******************************************************************************/
void specials_dungeon_special_model_0708fa(void)

{
  bool flag;
  byte *arg_eax;
  int val;
  undefined1 *extraout_ECX;
  undefined1 *word_ptr;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  
  flag = false;
  if ((*arg_eax & 1) == 0) {
    return;
  }
  val = specials_handle_object_thing_07027c(*(undefined4 *)(arg_eax + 0xd),*(undefined2 *)(arg_eax + 0x11),
                       arg_eax[0x1a] - 0x56);
  if (val == 0) {
    return;
  }
  switch(arg_eax[0x1a]) {
  case 0x56:
    specials_fn_070c0c();
    break;
  case 0x57:
    specials_update_player_dungeon_071312();
    word_ptr = extraout_ECX_00;
    goto LAB_0007095b;
  case 0x58:
    specials_update_player_dungeon_071367();
    word_ptr = extraout_ECX_01;
    goto LAB_0007095b;
  case 0x59:
    val = specials_update_creature_and_thing_0711f3();
    word_ptr = extraout_ECX_02;
    if (val == 0) goto LAB_0007095b;
    break;
  case 0x5a:
    specials_update_creature_and_thing_070d86();
    break;
  case 0x5b:
    specials_update_creature_and_thing_070c96();
    break;
  case 0x5c:
    specials_process_slabmap_tile_070e59();
    break;
  case 0x5d:
    specials_bonus_level_assigned_this_070d0d();
    break;
  default:
    dk_sprintf(&g_log_sprintf_buf,s_Invalid_dungeon_special__Model___0016772a,arg_eax[0x1a]);
    LbErrorLog(); /* LbErrorLog("specials.cpp", line 357, g_log_buf) */
    word_ptr = extraout_ECX_03;
    goto LAB_0007095b;
  }
  evil_fn_02778e();
  flag = true;
  structs_update_creature_control_072af4();
  word_ptr = extraout_ECX;
LAB_0007095b:
  if (flag) {
    if (&g_players + g_my_player_word._3_1_ * 0x4ef == word_ptr) {
      moodneed_fn_051374();
    }
    specials_fn_0713bc();
  }
  return;
}

/******************************************************************************
 * Function : specials_update_player_view_state_070a3c (Original VA: 0x70a3c, Ghidra: FUN_00070a3c)
 * Prototype: undefined1 specials_update_player_view_state_070a3c(void);
 * Address  : 0x70a3c (Size: 138 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> process_players_dungeon_control_packet
 * Callees  : 6 -> evil_fn_02778e, inits_told_you_so_create_043bb3, moodneed_fn_051374, specials_fn_0713bc, structs_update_creature_control_072af4, creature_update_creature_control_08240c
 ******************************************************************************/
undefined1 specials_update_player_view_state_070a3c(void)

{
  byte *arg_eax;
  int val;
  char arg_dl;
  undefined1 arg_bl;
  
  if ((((*arg_eax & 1) != 0) && (arg_eax[0x1f] == 1)) && (arg_eax[0x1a] == 0x57)) {
    val = inits_told_you_so_create_043bb3();
    if (val != 0) {
      creature_update_creature_control_08240c();
      if (arg_dl == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        moodneed_fn_051374();
      }
    }
    specials_fn_0713bc();
    evil_fn_02778e();
    arg_bl = structs_update_creature_control_072af4();
  }
  return arg_bl;
}

/******************************************************************************
 * Function : specials_update_creature_control_070ac6 (Original VA: 0x70ac6, Ghidra: FUN_00070ac6)
 * Prototype: void specials_update_creature_control_070ac6(void);
 * Address  : 0x70ac6 (Size: 307 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> process_players_dungeon_control_packet
 * Callees  : 5 -> evil_fn_02778e, moodneed_fn_051374, specials_fn_0713bc, structs_update_creature_control_072af4, creature_how_hero_have_tend_08608c
 ******************************************************************************/
void specials_update_creature_control_070ac6(void)

{
  byte *arg_eax;
  int loop_i;
  byte *arg_edx;
  int dungeon_off;
  byte arg_bl;
  uint uval;
  undefined2 *dungeon_off_2;
  
  uval = (uint)arg_bl;
  dungeon_off = uval * 0x1508;
  if (((((*arg_eax & 1) != 0) && (arg_eax[0x1f] == 1)) && (arg_eax[0x1a] == 0x58)) &&
     ((((*arg_edx & 1) != 0 && (arg_edx[0x1f] == 5)) && ((int)(char)arg_edx[6] == uval)))) {
    if (arg_bl == (&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      g_bss_002ee892 = arg_edx[0x1a];
      g_bss_002ee893 = *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_edx + 100)] + 0x23);
    }
    for (loop_i = 0; loop_i < (int)(uint)(byte)(&g_bss_002e05ec)[dungeon_off]; loop_i = loop_i + 1) {
      dungeon_off_2 = &g_dungeons + uval * 0xa84 + loop_i;
      if (*(short *)((int)(&g_dungeons + uval * 0xa84 + loop_i) + 0x33) ==
          *(short *)(arg_edx + 0x1b)) {
        for (; loop_i < (int)((byte)(&g_bss_002e05ec)[dungeon_off] - 1); loop_i = loop_i + 1) {
          *(undefined2 *)((int)dungeon_off_2 + 0x33) = *(undefined2 *)((int)dungeon_off_2 + 0x35);
          dungeon_off_2 = dungeon_off_2 + 1;
        }
        (&g_bss_002e05ec)[dungeon_off] = (&g_bss_002e05ec)[dungeon_off] + -1;
        *(undefined2 *)(&g_bss_002e05bc + (uint)(byte)(&g_bss_002e05ec)[dungeon_off] * 2 + dungeon_off) = 0;
      }
    }
    creature_how_hero_have_tend_08608c(0,0);
    specials_fn_0713bc();
    evil_fn_02778e();
    structs_update_creature_control_072af4();
    if ((&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef] == arg_bl) {
      moodneed_fn_051374();
    }
  }
  return;
}

/******************************************************************************
 * Function : specials_fn_070bf9 (Original VA: 0x70bf9, Ghidra: FUN_00070bf9)
 * Prototype: undefined4 specials_fn_070bf9(void);
 * Address  : 0x70bf9 (Size: 19 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Purpose  : Module specials.cpp procedure @ 0x070bf9
 * Callers  : 5 -> frontend_why_are_we_here_02dfac, creature_dene_says_big_hello_08685c, update_update_player_view_state_0dd894, update_go_first_person_without_0de6a8, bflib_system_io_fn_0e5b3c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 specials_fn_070bf9(void)

{
  int arg_eax;
  
  if ((99 < arg_eax) && (arg_eax < 0x6a)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : specials_fn_070c0c (Original VA: 0x70c0c, Ghidra: FUN_00070c0c)
 * Prototype: void specials_fn_070c0c(void);
 * Address  : 0x70c0c (Size: 138 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Purpose  : Module specials.cpp procedure @ 0x070c0c
 * Callers  : 3 -> specials_dungeon_special_model_0708fa, update_update_player_dungeon_0dd6c8, update_go_first_person_without_0de6a8
 * Callees  : 2 -> dungeon_update_slab_subtile_columns_023de2, panmap_door_flagged_position_063122
 ******************************************************************************/
void specials_fn_070c0c(void)

{
  byte flag;
  uint uval;
  int arg_eax;
  undefined4 *extraout_ECX;
  undefined4 *word_ptr;
  int val;
  int local_20;
  
  flag = *(byte *)(arg_eax + 0x2b);
  val = 0;
  do {
    local_20 = 0;
    do {
      local_20 = local_20 + 1;
      dungeon_update_slab_subtile_columns_023de2();
    } while (local_20 < 0x55);
    val = val + 1;
    word_ptr = extraout_ECX;
  } while (val < 0x55);
  for (; word_ptr < &g_bss_002c91ff; word_ptr = (undefined4 *)((int)word_ptr + 5)) {
    uval = *(uint *)((int)word_ptr + 1);
    *(uint *)((int)word_ptr + 1) = uval & 0xfffffff;
    *(uint *)((int)word_ptr + 1) =
         *(uint *)((int)word_ptr + 1) |
         ((uint)(byte)('\x01' << (flag & 0x1f)) | uval >> 0x1c) << 0x1c;
  }
  panmap_door_flagged_position_063122();
  return;
}

/******************************************************************************
 * Function : specials_update_creature_and_thing_070c96 (Original VA: 0x70c96, Ghidra: FUN_00070c96)
 * Prototype: void specials_update_creature_and_thing_070c96(void);
 * Address  : 0x70c96 (Size: 119 bytes)
 * Module   : specials.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> specials_dungeon_special_model_0708fa
 * Callees  : 1 -> creature_update_creature_control_081f5c
 ******************************************************************************/
void specials_update_creature_and_thing_070c96(void)

{
  ushort cctrl_ptr;
  int arg_eax;
  int extraout_EDX;
  int extraout_EDX_00;
  
  cctrl_ptr = (&g_bss_002e05b6)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84];
  while (g_thing_ptrs < (&g_thing_ptrs)[cctrl_ptr]) {
    creature_update_creature_control_081f5c();
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX + 100)] + 0x1f);
  }
  cctrl_ptr = (&g_bss_002e05b8)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84];
  while (g_thing_ptrs < (&g_thing_ptrs)[cctrl_ptr]) {
    creature_update_creature_control_081f5c();
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_EDX_00 + 100)] + 0x1f);
  }
  return;
}

/******************************************************************************
 * Function : specials_bonus_level_assigned_this_070d0d (Original VA: 0x70d0d, Ghidra: FUN_00070d0d)
 * Prototype: void specials_bonus_level_assigned_this_070d0d(void);
 * Address  : 0x70d0d (Size: 121 bytes)
 * Module   : specials.cpp [direct_file_string_xref]
 * OrigLine : specials.cpp lines 507
 * Purpose  : String 'No Bonus level assigned to this level'
 * Callers  : 1 -> specials_dungeon_special_model_0708fa
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void specials_bonus_level_assigned_this_070d0d(void)

{
  g_bss_0019d0ba = g_bss_0019d0ba | 2;
  if (g_bss_002e78e9 < 0xf) {
    if (7 < g_bss_002e78e9) {
      if (g_bss_002e78e9 < 9) {
        g_bss_002ee888 = 1;
        goto LAB_00070d7c;
      }
      if (g_bss_002e78e9 == 9) {
        g_bss_002ee889 = 1;
        goto LAB_00070d7c;
      }
    }
  }
  else {
    if (g_bss_002e78e9 < 0x10) {
      g_bss_002ee88a = 1;
      goto LAB_00070d7c;
    }
    if (0x10 < g_bss_002e78e9) {
      if (g_bss_002e78e9 < 0x12) {
        g_bss_002ee88b = 1;
        goto LAB_00070d7c;
      }
      if (g_bss_002e78e9 == 0x12) {
        g_bss_002ee88c = 1;
        goto LAB_00070d7c;
      }
    }
  }
  LbErrorLog(); /* LbErrorLog("specials.cpp", line 507, "No Bonus level assigned to this level") */
LAB_00070d7c:
  g_game_operation_flags = g_game_operation_flags & 0xfd;
  return;
}

/******************************************************************************
 * Function : specials_update_creature_and_thing_070d86 (Original VA: 0x70d86, Ghidra: FUN_00070d86)
 * Prototype: void specials_update_creature_and_thing_070d86(void);
 * Address  : 0x70d86 (Size: 211 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> specials_dungeon_special_model_0708fa
 * Callees  : 2 -> inits_told_you_so_create_043bb3, creature_update_creature_control_082204
 ******************************************************************************/
void specials_update_creature_and_thing_070d86(void)

{
  byte flag;
  ushort cctrl_ptr;
  int arg_eax;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  
  flag = *(byte *)(arg_eax + 0x2b);
  cctrl_ptr = (&g_bss_002e05b6)[(uint)flag * 0xa84];
  while( true ) {
    if ((&g_thing_ptrs)[cctrl_ptr] <= g_thing_ptrs) {
      cctrl_ptr = (&g_bss_002e05b8)[(uint)flag * 0xa84];
      while ((g_thing_ptrs < (&g_thing_ptrs)[cctrl_ptr] && (val = inits_told_you_so_create_043bb3(), val != 0))) {
        creature_update_creature_control_082204();
        *(undefined2 *)(val + 0x5e) = *(undefined2 *)(extraout_ECX_00 + 0x5e);
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX_00 + 100)] + 0x1f);
      }
      return;
    }
    val = inits_told_you_so_create_043bb3();
    if (val == 0) break;
    creature_update_creature_control_082204();
    *(undefined2 *)(val + 0x5e) = *(undefined2 *)(extraout_ECX + 0x5e);
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)] + 0x1f);
  }
  return;
}

/******************************************************************************
 * Function : specials_process_slabmap_tile_070e59 (Original VA: 0x70e59, Ghidra: FUN_00070e59)
 * Prototype: void specials_process_slabmap_tile_070e59(void);
 * Address  : 0x70e59 (Size: 922 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> specials_dungeon_special_model_0708fa
 * Callees  : 4 -> imptool_fn_03f80c, slab_attempt_place_animating_slab_0d7688, slab_process_slabmap_tile_0d99f8, dk_sprintf
 ******************************************************************************/
void specials_process_slabmap_tile_070e59(void)

{
  byte flag;
  char *str_ptr;
  int arg_eax;
  char *str_ptr_2;
  int val;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  uint *word_ptr_3;
  char *loop_i;
  uint uval;
  byte *byte_ptr;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  char *local_30;
  char *local_2c;
  byte local_28;
  byte local_24;
  byte local_20;
  byte local_1c;
  
  str_ptr = g_scratch_work_buf;
  word_ptr_3 = &local_68;
  local_38 = (uint)*(byte *)(arg_eax + 0x2b);
  byte_ptr = &g_slabmap_base;
  local_2c = g_scratch_work_buf;
  str_ptr_2 = g_scratch_work_buf + 0x1c39;
  for (loop_i = g_scratch_work_buf; loop_i < str_ptr_2; loop_i = loop_i + 1) {
    flag = *byte_ptr;
    byte_ptr = byte_ptr + 6;
    *loop_i = ((&g_data_001921c6)[(uint)flag * 0x16] & 0x29) != 0;
  }
  local_64 = (&g_subtile_to_slab_lut)
             [*(byte *)((&g_thing_ptrs)
                        [(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]] + 0x10)];
  local_3c = (&g_subtile_to_slab_lut)
             [*(byte *)((&g_thing_ptrs)
                        [(ushort)(&g_dungeons)[(uint)*(byte *)(arg_eax + 0x2b) * 0xa84]] + 0xe)];
  local_34 = 0;
  uval = 0;
  str_ptr[local_64 * 0x55 + local_3c] = str_ptr[local_64 * 0x55 + local_3c] | 2;
  local_30 = str_ptr_2;
  do {
    if (0x9f < local_34) {
      *(uint *)((int)word_ptr_3 + -4) = uval;
      *(undefined **)((int)word_ptr_3 + -8) = &g_data_0016778d;
      *(undefined1 **)((int)word_ptr_3 + -0xc) = &g_log_sprintf_buf;
      *(undefined4 *)((int)word_ptr_3 + -0x10) = 0x70f04;
      dk_sprintf();
    }
    val = local_64 * 0x55 + local_3c;
    local_1c = (char)local_3c - 1;
    word_ptr_2 = (undefined1 *)word_ptr_3;
    if ((local_2c[val + -1] & 1U) == 0) {
      if ((local_2c[val + -1] & 2U) == 0) {
        local_2c[val + -1] = local_2c[val + -1] | 2;
        val = uval * 2;
        local_30[val] = local_1c;
        uval = uval + 1;
        (local_30 + val)[1] = (byte)local_64;
      }
    }
    else {
      local_2c[val + -1] = local_2c[val + -1] | 2;
      if ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val + -1) * 6] * 0x16] == '\x01') {
        local_44 = local_64 & 0xff;
        local_4c = (uint)local_1c;
        *(undefined4 *)((int)word_ptr_3 + -4) = 0x70f80;
        val = imptool_fn_03f80c();
        if (val != 0) {
          local_58 = (uint)(byte)((byte)local_64 * '\x03');
          word_ptr_2 = (undefined1 *)((int)word_ptr_3 + -4);
          *(undefined4 *)((int)word_ptr_3 + -4) = 1;
          local_5c = (uint)(byte)(local_1c * '\x03');
          *(undefined4 *)((int)word_ptr_3 + -8) = 0x70fad;
          slab_process_slabmap_tile_0d99f8();
          *(undefined4 *)((int)word_ptr_3 + -8) = 0x70fbb;
          slab_attempt_place_animating_slab_0d7688();
        }
      }
    }
    val = local_64 * 0x55 + local_3c;
    local_28 = (char)local_3c + 1;
    word_ptr = word_ptr_2;
    if ((local_2c[val + 1] & 1U) == 0) {
      if ((local_2c[val + 1] & 2U) == 0) {
        local_2c[val + 1] = local_2c[val + 1] | 2;
        val = uval * 2;
        local_30[val] = local_28;
        uval = uval + 1;
        (local_30 + val)[1] = (byte)local_64;
      }
    }
    else {
      local_2c[val + 1] = local_2c[val + 1] | 2;
      if ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[(val + 1) * 6] * 0x16] == '\x01') {
        local_48 = local_64 & 0xff;
        local_50 = (uint)local_28;
        *(undefined4 *)(word_ptr_2 + -4) = 0x71034;
        val = imptool_fn_03f80c();
        if (val != 0) {
          local_58 = (uint)(byte)((byte)local_64 * '\x03');
          word_ptr = word_ptr_2 + -4;
          *(undefined4 *)(word_ptr_2 + -4) = 1;
          local_5c = (uint)(byte)(local_28 * '\x03');
          *(undefined4 *)(word_ptr_2 + -8) = 0x71061;
          slab_process_slabmap_tile_0d99f8();
          *(undefined4 *)(word_ptr_2 + -8) = 0x7106f;
          slab_attempt_place_animating_slab_0d7688();
        }
      }
    }
    val = local_3c + (local_64 - 1) * 0x55;
    local_20 = (byte)local_64 - 1;
    byte_ptr = (byte *)(local_2c + val);
    word_ptr_2 = word_ptr;
    if ((*byte_ptr & 1) == 0) {
      if ((*byte_ptr & 2) == 0) {
        *byte_ptr = *byte_ptr | 2;
        val = uval * 2;
        local_30[val] = (char)local_3c;
        uval = uval + 1;
        (local_30 + val)[1] = local_20;
      }
    }
    else {
      *byte_ptr = *byte_ptr | 2;
      if ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[val * 6] * 0x16] == '\x01') {
        local_68 = (uint)local_20;
        local_40 = local_3c & 0xff;
        *(undefined4 *)(word_ptr + -4) = 0x710e6;
        val = imptool_fn_03f80c();
        if (val != 0) {
          local_5c = (uint)(byte)(local_20 * '\x03');
          word_ptr_2 = word_ptr + -4;
          *(undefined4 *)(word_ptr + -4) = 1;
          local_58 = (uint)(byte)((char)local_3c * '\x03');
          *(undefined4 *)(word_ptr + -8) = 0x71113;
          slab_process_slabmap_tile_0d99f8();
          *(undefined4 *)(word_ptr + -8) = 0x71121;
          slab_attempt_place_animating_slab_0d7688();
        }
      }
    }
    val = local_3c + (local_64 + 1) * 0x55;
    local_24 = (byte)local_64 + 1;
    byte_ptr = (byte *)(local_2c + val);
    word_ptr_3 = (uint *)word_ptr_2;
    if ((*byte_ptr & 1) == 0) {
      if ((*byte_ptr & 2) == 0) {
        *byte_ptr = *byte_ptr | 2;
        val = uval * 2;
        local_30[val] = (char)local_3c;
        uval = uval + 1;
        (local_30 + val)[1] = local_24;
      }
    }
    else {
      *byte_ptr = *byte_ptr | 2;
      if ((&g_data_001921cf)[(uint)(byte)(&g_slabmap_base)[val * 6] * 0x16] == '\x01') {
        local_60 = (uint)local_24;
        local_54 = local_3c & 0xff;
        *(undefined4 *)(word_ptr_2 + -4) = 0x71198;
        val = imptool_fn_03f80c();
        if (val != 0) {
          local_5c = (uint)(byte)(local_24 * '\x03');
          word_ptr_3 = (uint *)(word_ptr_2 + -4);
          *(undefined4 *)(word_ptr_2 + -4) = 1;
          local_58 = (uint)(byte)((char)local_3c * '\x03');
          *(undefined4 *)(word_ptr_2 + -8) = 0x711c5;
          slab_process_slabmap_tile_0d99f8();
          *(undefined4 *)(word_ptr_2 + -8) = 0x711d3;
          slab_attempt_place_animating_slab_0d7688();
        }
      }
    }
    local_3c = (uint)*str_ptr_2;
    local_34 = local_34 + 1;
    local_64 = (uint)str_ptr_2[1];
    str_ptr_2 = str_ptr_2 + 2;
  } while (local_34 <= uval);
  *(undefined4 *)((int)word_ptr_3 + -4) = 0x70c8f;
  panmap_door_flagged_position_063122();
  return;
}

/******************************************************************************
 * Function : specials_update_creature_and_thing_0711f3 (Original VA: 0x711f3, Ghidra: FUN_000711f3)
 * Prototype: undefined4 specials_update_creature_and_thing_0711f3(void);
 * Address  : 0x711f3 (Size: 287 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> specials_dungeon_special_model_0708fa
 * Callees  : 3 -> inits_told_you_so_create_043bb3, person_update_creature_control_063a25, move_fn_0b3b10
 ******************************************************************************/
undefined4 specials_update_creature_and_thing_0711f3(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int val;
  uint uval;
  uint dungeon_off;
  
  uval = 0;
  if ((&g_bss_002e0ea2)[(uint)g_bss_002eb542 * 0x1508] != '\0') {
    g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
    dungeon_off = g_action_random_seed % (uint)(byte)(&g_bss_002e0ea2)[(uint)g_bss_002eb542 * 0x1508];
    cctrl_ptr = (&g_bss_002e05b6)[(uint)g_bss_002eb542 * 0xa84];
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      if (((*(char *)(thing_ptr + 0x1a) != '\x06') && (*(char *)(thing_ptr + 0x1a) != '\a')) &&
         (dungeon_off = dungeon_off - 1, uval = thing_ptr, dungeon_off == 0)) {
        if (thing_ptr != 0) break;
        dungeon_off = 1;
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
    if (uval != 0) {
      move_fn_0b3b10();
      person_update_creature_control_063a25();
      return 1;
    }
  }
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  val = inits_told_you_so_create_043bb3();
  if (val != 0) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : specials_update_player_dungeon_071312 (Original VA: 0x71312, Ghidra: FUN_00071312)
 * Prototype: void specials_update_player_dungeon_071312(void);
 * Address  : 0x71312 (Size: 85 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> specials_dungeon_special_model_0708fa
 * Callees  : 2 -> newgui_fn_05c848, newgui_fn_05cf2d
 ******************************************************************************/
void specials_update_player_dungeon_071312(void)

{
  undefined1 *arg_eax;
  int arg_edx;
  
  if ((*(int *)(&g_bss_002e1928 + (uint)(byte)arg_eax[0x2b] * 0x1508) != 0) &&
     (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef)) {
    g_bss_003772d8 = *(undefined2 *)(arg_edx + 0x1b);
    g_bss_003772da = 0;
    newgui_fn_05c848();
    newgui_fn_05cf2d();
  }
  return;
}

/******************************************************************************
 * Function : specials_update_player_dungeon_071367 (Original VA: 0x71367, Ghidra: FUN_00071367)
 * Prototype: void specials_update_player_dungeon_071367(void);
 * Address  : 0x71367 (Size: 85 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> specials_dungeon_special_model_0708fa
 * Callees  : 2 -> newgui_fn_05c848, newgui_fn_05cf2d
 ******************************************************************************/
void specials_update_player_dungeon_071367(void)

{
  undefined1 *arg_eax;
  int arg_edx;
  
  if (((&g_bss_002e0ea2)[(uint)(byte)arg_eax[0x2b] * 0x1508] != '\0') &&
     (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef)) {
    g_bss_003772d8 = *(undefined2 *)(arg_edx + 0x1b);
    g_bss_003772de = 0;
    newgui_fn_05c848();
    newgui_fn_05cf2d();
  }
  return;
}

/******************************************************************************
 * Function : specials_fn_0713bc (Original VA: 0x713bc, Ghidra: FUN_000713bc)
 * Prototype: void specials_fn_0713bc(void);
 * Address  : 0x713bc (Size: 16 bytes)
 * Module   : specials.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module specials.cpp procedure @ 0x0713bc
 * Callers  : 3 -> specials_dungeon_special_model_0708fa, specials_update_player_view_state_070a3c, specials_update_creature_control_070ac6
 * Callees  : 1 -> effect_allocate_light_effect_024998
 ******************************************************************************/
void specials_fn_0713bc(void)

{
  effect_allocate_light_effect_024998();
  return;
}

