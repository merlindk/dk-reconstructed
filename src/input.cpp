/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: input.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 19
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : input_process_thing_entity_0473e1 (Original VA: 0x473e1, Ghidra: FUN_000473e1)
 * Prototype: void input_process_thing_entity_0473e1(void);
 * Address  : 0x473e1 (Size: 884 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 4 -> inits_fn_045f23, set_packet_control_flag, get_scaled_viewport_bottom_y, bflib_system_io_fn_0ebf9c
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00047601) */
/* WARNING: Removing unreachable block (ram,0x0004763f) */

void input_process_thing_entity_0473e1(void)

{
  byte flag;
  int thing_ptr;
  short short_val;
  ushort uval;
  undefined2 uval_2;
  int player_off;
  uint ui_scale;
  int val;
  undefined8 uval_3;
  
  uval_3 = get_scaled_viewport_bottom_y();
  val = (int)uval_3;
  player_off = g_my_player_word._3_1_ * 0x4ef;
  thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)];
  *(undefined2 *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[player_off] * 0x11) = 0x7f;
  *(undefined2 *)(&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[player_off] * 0x11) = 0x7f;
  if (g_active_screen_mode == 0xd) {
    val = val + 0x28;
  }
  if (((&g_players)[g_my_player_word._3_1_ * 0x4ef] & 8) != 0) {
    return;
  }
  ui_scale = g_graphics_window_width * (uint)g_units_per_pixel;
  player_off = (uint)g_units_per_pixel * g_graphics_window_height;
  while ((ui_scale != g_mouse_cursor_y / 2 || (val != player_off))) {
    bflib_system_io_fn_0ebf9c();
    ui_scale = g_graphics_window_width * (uint)g_units_per_pixel;
    player_off = g_graphics_window_height * (uint)g_units_per_pixel;
  }
  if (g_bss_002ee921 == '\0') {
    uval_2 = (undefined2)((player_off * 0xff) / (int)(uint)g_mouse_cursor_x);
  }
  else {
    uval_2 = (undefined2)((int)(((uint)g_mouse_cursor_x - player_off) * 0xff) / (int)(uint)g_mouse_cursor_x);
  }
  *(undefined2 *)(&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11) =
       uval_2;
  val = g_my_player_word._3_1_ * 0x4ef;
  *(short *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[val] * 0x11) =
       (short)(((int)((ulonglong)uval_3 >> 0x20) * 0xff) / (int)(uint)g_mouse_cursor_y);
  player_off = (uint)(byte)(&g_player_packet_slot)[val] * 0x11;
  ui_scale = g_bss_002ee922 + 1;
  if (ui_scale < 6) {
    *(short *)(&g_packet_pos_x + player_off) =
         (short)((int)(*(ushort *)(&g_packet_pos_x + player_off) - 0x7f) / (int)(6 - ui_scale)) + 0x7f;
    short_val = (short)((int)(*(ushort *)(&g_packet_pos_y + player_off) - 0x7f) / (int)(6 - ui_scale));
    flag = (&g_player_packet_slot)[val];
  }
  else {
    if (ui_scale < 7) goto LAB_000475df;
    uval = (ushort)g_bss_002ee922;
    *(ushort *)(&g_packet_pos_x + player_off) =
         (short)(*(ushort *)(&g_packet_pos_x + player_off) - 0x7f) * (uval - 5) + 0x7f;
    short_val = (uval - 5) * (short)(*(ushort *)(&g_packet_pos_y + player_off) - 0x7f);
    flag = (&g_player_packet_slot)[val];
  }
  *(short *)(&g_packet_pos_y + (uint)flag * 0x11) = short_val + 0x7f;
LAB_000475df:
  if (0xff < *(ushort *)
              (&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11)) {
    *(undefined2 *)(&g_packet_pos_x + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11)
         = 0xff;
  }
  if (0xff < *(ushort *)
              (&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11)) {
    *(undefined2 *)(&g_packet_pos_y + (uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11)
         = 0xff;
  }
  if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
    if (g_bss_0034b25c != '\0') {
      g_bss_0034b25c = '\0';
      g_bss_0034b25a = 0;
    }
    if (g_bss_0034b25d != '\0') {
      g_bss_0034b25d = '\0';
      g_bss_0034b25b = 0;
    }
    val = inits_fn_045f23();
    if (val != 0) {
      set_packet_control_flag();
    }
    val = inits_fn_045f23();
    if (val != 0) {
      set_packet_control_flag();
    }
    val = inits_fn_045f23();
    if (val != 0) {
      set_packet_control_flag();
    }
    val = inits_fn_045f23();
    if (val != 0) {
      set_packet_control_flag();
    }
  }
  return;
}

/******************************************************************************
 * Function : input_draw_text_overlay_047755 (Original VA: 0x47755, Ghidra: FUN_00047755)
 * Prototype: undefined8 input_draw_text_overlay_047755(void);
 * Address  : 0x47755 (Size: 1144 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 5 -> inits_fn_045f23, inits_fn_045fb9, newgui_fn_057fd9, set_packet_action, bflib_system_io_draw_text_overlay_0e6c1c
 ******************************************************************************/
undefined8 input_draw_text_overlay_047755(void)

{
  char ch;
  int loop_i;
  undefined4 uval;
  int val;
  undefined4 arg_edx;
  int *int_ptr;
  int *int_ptr_2;
  undefined1 *word_ptr;
  int aiStack_34 [8];
  
  aiStack_34[6] = 0x47767;
  ch = newgui_fn_057fd9();
  if ((ch != '\0') && (g_bss_0034cf1f == 0)) {
LAB_00047bc6:
    uval = 0;
    goto LAB_0004688c;
  }
  if (((&g_players)[g_my_player_word._3_1_ * 0x4ef] & 4) == 0) {
    if (((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x01') && ((g_game_system_flags & 1) != 0)) {
      aiStack_34[6] = 0x47899;
      loop_i = inits_fn_045fb9();
      if (loop_i == 0) goto LAB_000478dc;
      g_bss_003db518 = 0;
LAB_000478c4:
      aiStack_34[6] = 0;
      aiStack_34[5] = 0;
      int_ptr = aiStack_34 + 5;
LAB_000478c8:
      *(undefined4 *)((int)int_ptr + -4) = 0x478d2;
      set_packet_action();
    }
    else {
LAB_000478dc:
      for (loop_i = 0x3b; loop_i < 0x43; loop_i = loop_i + 1) {
        aiStack_34[6] = 0x478f5;
        val = inits_fn_045fb9();
        if (val != 0) {
          (&g_bss_003db4fc)[loop_i] = 0;
          aiStack_34[6] = 0;
          int_ptr = aiStack_34 + 5;
          aiStack_34[5] = 0;
          goto LAB_000478c8;
        }
      }
      if ((((&g_bss_0019d578)[g_my_player_word._3_1_ * 0x4ef] != '\x0e') &&
          ((&g_bss_0019d578)[g_my_player_word._3_1_ * 0x4ef] != '\x0f')) && (g_bss_0034cf1f == 0)) {
        aiStack_34[6] = 0x47960;
        loop_i = inits_fn_045f23();
        if (loop_i != 0) {
          (&g_bss_003db4fc)[aiStack_34[7]] = 0;
          goto LAB_000478c4;
        }
      }
      if ((g_game_operation_flags & 1) == 0) {
        aiStack_34[6] = 0x479af;
        loop_i = inits_fn_045fb9();
        if (loop_i != 0) {
          g_bss_003db54a = 0;
          g_bss_002ed3de = g_bss_002ed3de + 2;
          if (g_bss_002ed3de < 0) {
            g_bss_002ed3de = 0;
          }
          else if (0x40 < g_bss_002ed3de) {
            g_bss_002ed3de = 0x40;
          }
        }
        aiStack_34[6] = 0x479f8;
        loop_i = inits_fn_045fb9();
        if (loop_i != 0) {
          g_bss_003db546 = 0;
          g_bss_002ed3de = g_bss_002ed3de + -2;
          if (g_bss_002ed3de < 0) {
            g_bss_002ed3de = 0;
          }
          else if (0x40 < g_bss_002ed3de) {
            g_bss_002ed3de = 0x40;
          }
        }
        aiStack_34[6] = 0x47a3e;
        loop_i = inits_fn_045fb9();
        int_ptr_2 = aiStack_34 + 7;
        if ((loop_i != 0) &&
           (g_bss_003db546 = 0, int_ptr_2 = aiStack_34 + 7,
           *(ushort *)(&g_bss_0019d518 + g_my_player_word._3_1_ * 0x4ef) < 0x800)) {
          aiStack_34[6] = 0;
          int_ptr_2 = aiStack_34 + 5;
          aiStack_34[5] = 0;
          set_packet_action();
        }
        *(undefined4 *)((int)int_ptr_2 + -4) = 0x47a9c;
        loop_i = inits_fn_045fb9();
        word_ptr = (undefined1 *)int_ptr_2;
        if ((loop_i != 0) &&
           (g_bss_003db54a = 0, 0x80 < *(ushort *)(&g_bss_0019d518 + g_my_player_word._3_1_ * 0x4ef))) {
          *(undefined4 *)((int)int_ptr_2 + -4) = 0;
          word_ptr = (undefined1 *)((int)int_ptr_2 + -8);
          *(undefined4 *)((int)int_ptr_2 + -8) = 0;
          *(undefined4 *)((int)int_ptr_2 + -0xc) = 0x47aec;
          set_packet_action();
        }
        *(undefined4 *)(word_ptr + -4) = 0x47afb;
        loop_i = inits_fn_045fb9();
        if (loop_i != 0) {
          *(undefined4 *)(word_ptr + -4) = 0;
          int_ptr = (int *)(word_ptr + -8);
          *(undefined4 *)(word_ptr + -8) = 0;
          goto LAB_000478c8;
        }
        *(undefined4 *)(word_ptr + -4) = 0x47b32;
        loop_i = inits_fn_045fb9();
        if ((loop_i == 0) || ((&g_bss_0019d0f1)[g_my_player_word._3_1_ * 0x4ef] == '\0')) {
          *(undefined4 *)(word_ptr + -4) = 0x47b8a;
          loop_i = inits_fn_045f23();
          if (loop_i != 0) {
            (&g_bss_003db4fc)[aiStack_34[7]] = 0;
            *(undefined4 *)(word_ptr + -4) = 0;
            *(undefined4 *)(word_ptr + -8) = 0;
            *(undefined4 *)(word_ptr + -0xc) = 0x47bc6;
            set_packet_action();
          }
          goto LAB_00047bc6;
        }
        *(undefined4 *)(word_ptr + -4) = 0;
        *(undefined4 *)(word_ptr + -8) = 0;
        *(undefined4 *)(word_ptr + -0xc) = 0x47b6f;
        set_packet_action();
        g_bss_003db535 = 0;
      }
    }
  }
  else {
    aiStack_34[6] = 0x4779e;
    loop_i = inits_fn_045fb9();
    if (loop_i == 0) {
      g_lb_current_font_ptr = g_frontend_font_ptr;
      if (g_bss_003db5fc != '\x0e') {
        aiStack_34[6] = 0x47815;
        loop_i = bflib_system_io_draw_text_overlay_0e6c1c();
        if (0x1c1 < (int)(loop_i * (uint)g_units_per_pixel)) goto LAB_000478d2;
      }
      aiStack_34[6] = 0;
      aiStack_34[5] = 0;
      set_packet_action();
      g_bss_003db5fc = '\0';
      g_bss_003db4fc = 0;
    }
    else {
      aiStack_34[6] = 0;
      aiStack_34[5] = 0;
      set_packet_action();
      g_bss_003db5fc = '\0';
      g_bss_003db518 = 0;
    }
  }
LAB_000478d2:
  uval = 1;
LAB_0004688c:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : input_update_player_dungeon_047bcd (Original VA: 0x47bcd, Ghidra: FUN_00047bcd)
 * Prototype: longlong input_update_player_dungeon_047bcd(void);
 * Address  : 0x47bcd (Size: 726 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 13 -> inits_fn_045f23, inits_fn_045fb9, input_fn_04897f, input_update_player_view_state_049343, input_fn_04991c, instance_fn_049a52, instance_fn_049a9a, newgui_fn_05afda ...
 ******************************************************************************/
longlong input_update_player_dungeon_047bcd(void)

{
  char ch;
  short short_val;
  int val;
  uint arg_edx;
  int local_14;
  
  if ((&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] == '\0') {
    val = input_fn_04897f();
    if (val == 0) {
      val = input_update_player_view_state_049343();
      if (val == 0) {
        if (g_bss_003db53e != '\0') {
          g_bss_003db53e = '\0';
          newgui_fn_05b5e1();
        }
        if ((g_bss_003db50b != '\0') &&
           (((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x02' ||
            ((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x05')))) {
          g_bss_003db50b = '\0';
          newgui_update_player_view_state_05b9b3();
        }
        val = inits_fn_045f23();
        if (val == 0) {
          val = inits_fn_045f23();
          if (val == 0) {
            ch = instance_fn_049a52();
            if (ch == '\0') {
              val = inits_fn_045f23();
              if (val == 0) {
                val = inits_fn_045fb9();
                if (val != 0) {
                  g_bss_003db51d = 0;
                  if ((g_bss_0019d0bd & 0x80) == 0) {
                    g_bss_0019d0bd = g_bss_0019d0bd | 0x80;
                  }
                  else {
                    g_bss_0019d0bd = g_bss_0019d0bd & 0x7f;
                  }
                }
                val = inits_fn_045fb9();
                if (val != 0) {
                  g_bss_003db4fe = 0;
                  newgui_fn_05cda7();
                }
                val = inits_fn_045fb9();
                if (val != 0) {
                  g_bss_003db4ff = 0;
                  newgui_fn_05cda7();
                }
                val = inits_fn_045fb9();
                if (val != 0) {
                  g_bss_003db500 = 0;
                  newgui_fn_05cda7();
                }
                val = inits_fn_045fb9();
                if (val != 0) {
                  g_bss_003db501 = 0;
                  newgui_fn_05cda7();
                }
                val = inits_fn_045fb9();
                if (val != 0) {
                  g_bss_003db502 = 0;
                  newgui_fn_05cda7();
                }
                return (ulonglong)arg_edx << 0x20;
              }
              (&g_bss_003db4fc)[local_14] = 0;
              if (((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] != '\a') && (g_bss_002e90b1 != '\x02'))
              {
                newgui_fn_05afda();
                input_fn_04991c();
              }
            }
          }
          else {
            (&g_bss_003db4fc)[local_14] = 0;
            short_val = creature_update_creature_and_thing_0844f4();
            *(short *)(&g_bss_002e1700 + g_my_player_word._3_1_ * 0x1508) = short_val;
            if (short_val != 0) {
              set_packet_action(0,0);
            }
          }
        }
        else {
          (&g_bss_003db4fc)[local_14] = 0;
          instance_fn_049a9a();
        }
      }
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : input_update_player_view_state_047ea3 (Original VA: 0x47ea3, Ghidra: FUN_00047ea3)
 * Prototype: longlong input_update_player_view_state_047ea3(void);
 * Address  : 0x47ea3 (Size: 319 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 6 -> inits_fn_045f23, instance_fn_0499ce, newgui_fn_05afda, newgui_fn_05b5e1, set_packet_action, get_scaled_viewport_bottom_y
 ******************************************************************************/
longlong input_update_player_view_state_047ea3(void)

{
  int val;
  int extraout_ECX;
  int val_2;
  uint arg_edx;
  int val_3;
  int local_14;
  
  val = get_scaled_viewport_bottom_y();
  val_3 = val + -0x38 >> 0x1f;
  val_2 = ((int)((extraout_ECX + (extraout_ECX >> 0x1f) * -4) -
                (uint)((extraout_ECX >> 0x1f) << 1 < 0)) >> 2) * 3 + 1;
  val = ((int)((val + -0x38 + val_3 * -4) - (uint)(val_3 << 1 < 0)) >> 2) * 3 + 1;
  if ((((-1 < val_2) && (val_2 < 0xff)) && (-1 < val)) && (val < 0xff)) {
    if (g_bss_0034b25c != '\0') {
      g_bss_0034b25c = '\0';
    }
    if (g_bss_0034b25a != '\0') {
      set_packet_action(0,0);
      g_bss_0034b25a = '\0';
      goto LAB_00047f7b;
    }
  }
  if (g_bss_0034b25d != '\0') {
    g_bss_0034b25d = '\0';
  }
  if (g_bss_0034b25b == '\0') {
    if ((&g_packet_action_type)[(uint)(byte)(&g_player_packet_slot)[g_my_player_word._3_1_ * 0x4ef] * 0x11] != '\0')
    goto LAB_00047f7b;
    if (g_bss_003db53e != '\0') {
      g_bss_003db53e = '\0';
      newgui_fn_05b5e1();
    }
    val = inits_fn_045f23();
    if (val == 0) {
      return (ulonglong)arg_edx << 0x20;
    }
    (&g_bss_003db4fc)[local_14] = 0;
    newgui_fn_05afda();
  }
  else {
    g_bss_0034b25b = '\0';
  }
  instance_fn_0499ce();
LAB_00047f7b:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : input_process_thing_entity_047fe2 (Original VA: 0x47fe2, Ghidra: FUN_00047fe2)
 * Prototype: longlong input_process_thing_entity_047fe2(void);
 * Address  : 0x47fe2 (Size: 200 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 4 -> inits_fn_045fb9, newgui_process_map_subtile_057fe4, newgui_fn_05ba63, set_packet_action
 ******************************************************************************/
longlong input_process_thing_entity_047fe2(void)

{
  int player_off;
  uint arg_edx;
  undefined4 uval;
  
  if (((g_game_operation_flags & 1) == 0) || (((g_game_operation_flags & 1) != 0 && ((g_game_operation_flags & 0x80) != 0)))) {
    newgui_process_map_subtile_057fe4();
  }
  player_off = g_my_player_word._3_1_ * 0x4ef;
  if (*(short *)((int)&g_bss_0019d0f7 + player_off) != 0) {
    if (((g_bss_0034b25b != '\0') ||
        (*(int *)((byte *)(&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)] + 9) !=
         *(int *)(&g_bss_0019d0f9 + player_off))) ||
       ((*(byte *)(&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)] & 1) == 0)) {
      uval = 0;
      set_packet_action(0,0);
      return CONCAT44(uval,1);
    }
    player_off = inits_fn_045fb9();
    if (player_off != 0) {
      g_bss_003db50b = 0;
      newgui_fn_05ba63();
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : input_process_thing_entity_0480aa (Original VA: 0x480aa, Ghidra: FUN_000480aa)
 * Prototype: longlong input_process_thing_entity_0480aa(void);
 * Address  : 0x480aa (Size: 376 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 5 -> inits_fn_045fb9, instance_update_creature_control_049e95, newgui_process_map_subtile_057fe4, newgui_update_player_view_state_05b9b3, set_packet_action
 ******************************************************************************/
longlong input_process_thing_entity_0480aa(void)

{
  byte *thing_ptr;
  int player_off;
  int val;
  int val_2;
  int loop_i;
  uint *word_ptr;
  undefined1 *word_ptr_2;
  uint auStack_1c [2];
  
  if (((g_game_operation_flags & 1) == 0) || (((g_game_operation_flags & 1) != 0 && ((g_game_operation_flags & 0x80) != 0)))) {
    auStack_1c[1] = 0x480d4;
    newgui_process_map_subtile_057fe4();
  }
  player_off = g_my_player_word._3_1_ * 0x4ef;
  word_ptr = (uint *)&stack0xffffffec;
  if ((*(short *)((int)&g_bss_0019d0f7 + player_off) != 0) &&
     ((((g_bss_0034b25b != '\0' ||
        (thing_ptr = (byte *)(&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)],
        *(int *)(thing_ptr + 9) != *(int *)(&g_bss_0019d0f9 + player_off))) || ((*thing_ptr & 1) == 0)) ||
      (word_ptr = (uint *)&stack0xffffffec, thing_ptr[7] == 0x43)))) {
    auStack_1c[1] = 0;
    word_ptr = auStack_1c;
    auStack_1c[0] = 0;
    g_bss_0034b25b = '\0';
    set_packet_action();
  }
  *(undefined4 *)((int)word_ptr + -4) = 0x48161;
  player_off = inits_fn_045fb9();
  if (player_off != 0) {
    g_bss_003db50b = 0;
    *(undefined4 *)((int)word_ptr + -4) = 0x48171;
    newgui_update_player_view_state_05b9b3();
  }
  player_off = -1;
  for (loop_i = 2; loop_i < 0xc; loop_i = loop_i + 1) {
    *(undefined4 *)((int)word_ptr + -4) = 0x4818c;
    val = inits_fn_045fb9();
    if (val != 0) {
      (&g_bss_003db4fc)[loop_i] = 0;
      player_off = loop_i + -2;
      break;
    }
  }
  word_ptr_2 = (undefined1 *)word_ptr;
  if (player_off != -1) {
    val = 0;
    for (loop_i = 0; loop_i < 10; loop_i = loop_i + 1) {
      *(undefined4 *)((int)word_ptr + -4) = 0x481e4;
      val_2 = instance_update_creature_control_049e95();
      if (val_2 != 0) {
        if (val == player_off) {
          *(undefined4 *)((int)word_ptr + -4) = 0;
          word_ptr_2 = (undefined1 *)((int)word_ptr + -8);
          *(undefined4 *)((int)word_ptr + -8) = 0;
          *(undefined4 *)((int)word_ptr + -0xc) = 0x4821b;
          set_packet_action();
          break;
        }
        val = val + 1;
      }
    }
  }
  return (ulonglong)*(uint *)(word_ptr_2 + 8) << 0x20;
}

/******************************************************************************
 * Function : input_maintain_gui_button_state_04823a (Original VA: 0x4823a, Ghidra: FUN_0004823a)
 * Prototype: void input_maintain_gui_button_state_04823a(void);
 * Address  : 0x4823a (Size: 354 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates GUI button enabled bit (0x08)
 * Callers  : 10 -> instance_process_thing_entity_04bb19, instance_update_player_view_state_04be63, instance_update_player_view_state_04be9d, creature_control_creature_as_passenger_0809d0, creature_allocate_light_new_hero_080a94, creature_allocate_light_new_hero_080c84, creature_fn_080e04, creature_update_creature_control_080fbc ...
 * Callees  : 5 -> instance_fn_049eff, newgui_fn_05b645, sound_fn_06ec6f, workshop_update_player_view_state_0780df, command_update_player_view_state_0784ae
 ******************************************************************************/
void input_maintain_gui_button_state_04823a(void)

{
  byte *gui_btn;
  byte *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  byte arg_dl;
  
  if (arg_dl == gui_btn[0x452]) {
switchD_000482a9_default:
    return;
  }
  gui_btn[0x452] = arg_dl;
  *gui_btn = *gui_btn & 0xf7;
  if (gui_btn == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    g_bss_0019d0b9 = g_bss_0019d0b9 & 0xf6;
    g_bss_0019d0b9 = g_bss_0019d0b9 | 1;
  }
  if (gui_btn == &g_players + g_my_player_word._3_1_ * 0x4ef) {
    sound_fn_06ec6f();
    gui_btn = extraout_ECX;
  }
  switch(gui_btn[0x452]) {
  case 1:
    if (gui_btn[0x4b5] == 5) {
      command_update_player_view_state_0784ae();
    }
    command_update_player_view_state_0784ae();
    if (extraout_ECX_00 == &g_players + g_my_player_word._3_1_ * 0x4ef) {
      newgui_fn_05b645();
    }
    break;
  case 2:
  case 3:
    command_update_player_view_state_0784ae();
    if (extraout_ECX_01 == &g_players + g_my_player_word._3_1_ * 0x4ef) {
      g_bss_0019d0b9 = g_bss_0019d0b9 & 0xfe;
    }
    break;
  case 4:
    gui_btn[0x456] = gui_btn[0x453];
    command_update_player_view_state_0784ae();
    return;
  case 5:
    goto LAB_00048389;
  case 6:
LAB_00048389:
    instance_fn_049eff();
    return;
  default:
    goto switchD_000482a9_default;
  }
  workshop_update_player_view_state_0780df();
  return;
}

/******************************************************************************
 * Function : input_update_player_view_state_0485b8 (Original VA: 0x485b8, Ghidra: FUN_000485b8)
 * Prototype: void input_update_player_view_state_0485b8(int param_1);
 * Address  : 0x485b8 (Size: 189 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 3 -> input_fn_048675, input_fn_04878e, input_fn_048897
 * Callees  : 0 -> 
 ******************************************************************************/
void input_update_player_view_state_0485b8(int param_1)

{
  undefined *word_ptr;
  int arg_eax;
  uint uval;
  int ui_scale;
  int ui_scale_2;
  int *arg_ecx;
  int arg_edx;
  int val;
  int *arg_ebx;
  int player_off;
  
  player_off = g_my_player_word._3_1_ * 0x4ef;
  uval = -*(int *)(*(int *)((int)&g_player_active_camera + player_off) + 7) & 0x7ff;
  word_ptr = (&PTR_LAB_00192fe0)[uval];
  val = (&g_slab_attr_table)[uval];
  ui_scale = arg_eax / (int)(uint)g_units_per_pixel;
  ui_scale_2 = arg_edx / (int)(uint)g_units_per_pixel;
  *arg_ebx = ui_scale_2 * val + (int)word_ptr * ui_scale >> 0x10;
  *arg_ecx = -ui_scale * val + ui_scale_2 * (int)word_ptr >> 0x10;
  val = *arg_ebx * param_1 >> 0x1f;
  *arg_ebx = ((int)((*arg_ebx * param_1 + val * -0x100) - (uint)(val << 7 < 0)) >> 8) +
               (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off) + 1);
  val = *arg_ecx * param_1 >> 0x1f;
  *arg_ecx = ((int)((*arg_ecx * param_1 + val * -0x100) - (uint)(val << 7 < 0)) >> 8) +
            (uint)*(byte *)(*(int *)((int)&g_player_active_camera + player_off) + 3);
  return;
}

/******************************************************************************
 * Function : input_fn_048675 (Original VA: 0x48675, Ghidra: FUN_00048675)
 * Prototype: undefined1 input_fn_048675(undefined4 param_1);
 * Address  : 0x48675 (Size: 281 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Module input.cpp procedure @ 0x048675
 * Callers  : 1 -> input_fn_04897f
 * Callees  : 3 -> input_update_player_view_state_0485b8, set_packet_action, bflib_system_io_fn_0ebf9c
 ******************************************************************************/
undefined1 input_fn_048675(undefined4 param_1)

{
  int local_14;
  int local_10;
  undefined1 local_c;
  
  local_c = 0;
  if (g_bss_0034b25a != '\0') {
    if (g_bss_003482ad != 0) {
      if (g_bss_003482ac == '\0') {
        input_update_player_view_state_0485b8(param_1);
        g_bss_002ee8a9 = (undefined2)local_14;
        g_bss_002ee8ab = (undefined2)local_10;
        if ((((-1 < local_14) && (local_14 < 0xff)) && (-1 < local_10)) && (local_10 < 0xff)) {
          local_c = 1;
          set_packet_action(0,0);
        }
      }
      else {
        g_bss_002e90b1 = 2;
        bflib_system_io_fn_0ebf9c();
      }
    }
    g_bss_003482ac = '\0';
    g_bss_003482ad = 0;
    g_bss_0034b25a = '\0';
  }
  return local_c;
}

/******************************************************************************
 * Function : input_fn_04878e (Original VA: 0x4878e, Ghidra: FUN_0004878e)
 * Prototype: undefined4 input_fn_04878e(undefined4 param_1);
 * Address  : 0x4878e (Size: 265 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Module input.cpp procedure @ 0x04878e
 * Callers  : 1 -> input_fn_04897f
 * Callees  : 3 -> input_update_player_view_state_0485b8, set_packet_action, bflib_system_io_fn_0e69fc
 ******************************************************************************/
undefined4 input_fn_04878e(undefined4 param_1)

{
  int val;
  undefined4 uval;
  undefined4 local_14;
  undefined4 local_10;
  
  if (g_bss_003482ad == 0) {
    g_bss_003482ac = '\0';
LAB_00048890:
    uval = 0;
  }
  else {
    val = bflib_system_io_fn_0e69fc();
    if (val < 2) {
      val = bflib_system_io_fn_0e69fc();
      if (val < 2) goto LAB_00048890;
    }
    if (g_bss_003482ac == '\0') {
      g_bss_003482ac = '\x01';
    }
    input_update_player_view_state_0485b8(param_1);
    g_bss_002ee8a9 = (undefined2)local_14;
    g_bss_002ee8ab = (undefined2)local_10;
    if ((((-1 < local_14) && (local_14 < 0xff)) && (-1 < local_10)) && (local_10 < 0xff)) {
      set_packet_action(0,0);
    }
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : input_fn_048897 (Original VA: 0x48897, Ghidra: FUN_00048897)
 * Prototype: undefined4 input_fn_048897(undefined4 param_1);
 * Address  : 0x48897 (Size: 232 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Module input.cpp procedure @ 0x048897
 * Callers  : 1 -> input_fn_04897f
 * Callees  : 3 -> input_update_player_view_state_0485b8, set_packet_action, creature_fn_084d98
 ******************************************************************************/
undefined4 input_fn_048897(undefined4 param_1)

{
  char ch;
  int local_c;
  int local_8;
  
  input_update_player_view_state_0485b8(param_1);
  g_bss_002ee8a9 = (undefined2)local_c;
  g_bss_002ee8ab = (undefined2)local_8;
  ch = creature_fn_084d98();
  if (ch != '\0') {
    g_bss_002e90b1 = 1;
  }
  if (g_bss_0034b25d != '\0') {
    g_bss_0034b25d = '\0';
  }
  if ((((g_bss_0034b25b != '\0') && (g_bss_0034b25b = '\0', -1 < local_c)) && (local_c < 0xff)) &&
     ((-1 < local_8 && (local_8 < 0xff)))) {
    set_packet_action(0,0);
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : input_fn_04897f (Original VA: 0x4897f, Ghidra: FUN_0004897f)
 * Prototype: undefined1 input_fn_04897f(void);
 * Address  : 0x4897f (Size: 350 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Module input.cpp procedure @ 0x04897f
 * Callers  : 2 -> input_update_player_dungeon_047bcd, input_draw_text_overlay_049426
 * Callees  : 6 -> input_fn_048675, input_fn_04878e, input_fn_048897, input_fn_0498d9, get_scaled_viewport_bottom_y, bflib_system_io_fn_0ebf9c
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 input_fn_04897f(void)

{
  undefined4 *word_ptr;
  char ch;
  undefined4 uval;
  undefined4 uval_2;
  undefined4 arg_ebx;
  undefined4 *word_ptr_2;
  undefined8 uval_3;
  undefined4 auStack_30 [4];
  undefined1 local_14;
  
  word_ptr_2 = (undefined4 *)&stack0xffffffe0;
  local_14 = 0;
  auStack_30[3] = 0x489a6;
  uval_3 = get_scaled_viewport_bottom_y();
  uval_2 = (undefined4)((ulonglong)uval_3 >> 0x20);
  uval = (undefined4)uval_3;
  g_bss_003482a0 = 1;
  if (g_bss_003482ac == '\0') {
    g_bss_002e90b1 = 0;
  }
  if ((g_game_operation_flags & 0x20) != 0) {
    auStack_30[3] = 0x489e7;
    g_bss_003482a4 = uval_2;
    g_bss_003482a8 = uval;
    ch = input_fn_0498d9();
    uval_3 = CONCAT44(g_bss_003482a4,g_bss_003482a8);
    if ((ch != '\0') || (g_bss_003482ac != '\0')) {
      if (g_bss_0034b25c != '\0') {
        g_bss_003482ad = 1;
        g_bss_0034b25c = '\0';
      }
      auStack_30[2] = 0x48a20;
      auStack_30[3] = arg_ebx;
      ch = input_fn_048675();
      word_ptr = auStack_30 + 3;
      if (ch == '\0') {
        auStack_30[1] = 0x48a36;
        auStack_30[2] = arg_ebx;
        ch = input_fn_048897();
        word_ptr = auStack_30 + 2;
        if (ch == '\0') {
          word_ptr_2 = auStack_30 + 1;
          auStack_30[1] = arg_ebx;
          ch = input_fn_04878e();
          uval_3 = CONCAT44(g_bss_003482a4,g_bss_003482a8);
          word_ptr = auStack_30 + 1;
          if (ch == '\0') goto LAB_00048a60;
        }
      }
      word_ptr_2 = word_ptr;
      uval_3 = CONCAT44(g_bss_003482a4,g_bss_003482a8);
      local_14 = 1;
      goto LAB_00048a60;
    }
  }
  g_bss_003482ad = 0;
LAB_00048a60:
  g_bss_003482a4 = (undefined4)((ulonglong)uval_3 >> 0x20);
  g_bss_003482a8 = (undefined4)uval_3;
  if (g_bss_003482ac != '\0') {
    word_ptr_2[0xffffffff] = 0x48ab4;
    bflib_system_io_fn_0ebf9c();
    uval_3 = CONCAT44(g_bss_003482a4,g_bss_003482a8);
  }
  g_bss_003482a4 = (undefined4)((ulonglong)uval_3 >> 0x20);
  g_bss_003482a8 = (undefined4)uval_3;
  g_bss_003482b1 = uval_2;
  g_bss_003482b5 = uval;
  if (g_bss_003482ac != '\0') {
    g_bss_002e90b1 = 2;
  }
  return local_14;
}

/******************************************************************************
 * Function : input_fn_048add (Original VA: 0x48add, Ghidra: FUN_00048add)
 * Prototype: void input_fn_048add(void);
 * Address  : 0x48add (Size: 298 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Module input.cpp procedure @ 0x048add
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 1 -> set_packet_control_flag
 ******************************************************************************/
void input_fn_048add(void)

{
  if ((g_game_operation_flags & 1) == 0) {
    if (g_bss_0034b258 != '\0') {
      set_packet_control_flag();
    }
    if (g_bss_0034b259 != '\0') {
      set_packet_control_flag();
    }
    if (g_bss_0034b25c != '\0') {
      set_packet_control_flag();
    }
    if (g_bss_0034b25d != '\0') {
      set_packet_control_flag();
    }
    if (g_bss_0034b25a != '\0') {
      set_packet_control_flag();
    }
    if (g_bss_0034b25b != '\0') {
      set_packet_control_flag();
    }
  }
  return;
}

/******************************************************************************
 * Function : input_game_action_048c77 (Original VA: 0x48c77, Ghidra: FUN_00048c77)
 * Prototype: ushort input_game_action_048c77(ushort param_1,ushort param_2);
 * Address  : 0x48c77 (Size: 1257 bytes)
 * Module   : input.cpp [direct_file_string_xref]
 * OrigLine : input.cpp lines 2634
 * Purpose  : String 'UNKNOWN GAME ACTION -%d'
 * Callers  : 1 -> comptask_fn_01df28
 * Callees  : 33 -> build_update_player_view_state_01458c, dungeon_remove_reserve_023868, inits_allocate_dynamic_light_trap_0447fb, lair_process_thing_entity_04e1f2, magic_update_creature_and_thing_04e4ad, magic_update_player_dungeon_04e585, magic_update_player_dungeon_04e60d, magic_process_thing_entity_04e66f ...
 ******************************************************************************/
ushort input_game_action_048c77(ushort param_1,ushort param_2)

{
  char arg_al;
  undefined1 uval;
  ushort uval_2;
  short short_val;
  undefined2 uval_3;
  int dungeon_off;
  int val;
  ushort arg_cx;
  uint extraout_ECX;
  undefined2 arg_dx;
  undefined2 arg_bx;
  
  dungeon_off = arg_al * 0x1508;
  switch(arg_dx) {
  case 1:
    break;
  case 2:
    if ((&g_bss_002e156a)[dungeon_off] != '\0') {
      dungeon_off = creature_thing_hand_084904();
      if (-1 < dungeon_off) {
        return 1;
      }
      return 0xffff;
    }
    break;
  case 3:
    if ((&g_bss_002e156a)[dungeon_off] != '\0') {
      short_val = creature_process_thing_entity_0849c8();
      if (-1 < short_val) {
        return 1;
      }
      return 0xffff;
    }
    break;
  case 4:
    if ((&g_bss_002e156b)[dungeon_off] != '\0') {
      lair_process_thing_entity_04e1f2();
      return 1;
    }
    break;
  case 5:
    if ((&g_bss_002e156d)[dungeon_off] != '\0') {
      uval_2 = magic_update_player_dungeon_04e585();
      return uval_2;
    }
    break;
  case 6:
    if ((&g_bss_002e156e)[dungeon_off] != '\0') {
      uval_2 = magic_process_thing_entity_04e66f();
      return uval_2;
    }
    break;
  case 7:
    if ((&g_bss_002e156c)[dungeon_off] != '\0') {
      magic_update_creature_and_thing_04e4ad();
      return 1;
    }
    break;
  case 8:
    if ((&g_bss_002e1571)[dungeon_off] != '\0') {
      magic_update_creature_control_04f5b3(arg_bx);
      return 1;
    }
    break;
  case 9:
    if ((&g_bss_002e156f)[dungeon_off] != '\0') {
      uval_2 = magic_update_creature_and_thing_04e85c(1);
      return uval_2;
    }
    break;
  case 10:
    if ((&g_bss_002e1570)[dungeon_off] != '\0') {
      magic_update_slab_subtile_columns_04ee2c();
      return 1;
    }
    break;
  case 0xb:
    magic_update_creature_and_thing_04ed3d();
    return 1;
  case 0xc:
    *(undefined4 *)(&g_bss_002e0e15 + dungeon_off) = 0;
    return 1;
  case 0xd:
  case 0xe:
    if (((&g_slabmap_base)
         [((uint)*(byte *)(&g_subtile_to_slab_lut + param_1) * 0x55 + (uint)*(byte *)(&g_subtile_to_slab_lut + arg_cx))
          * 6] != '\f') &&
       ((&g_slabmap_base)
        [((uint)*(byte *)(&g_subtile_to_slab_lut + param_1) * 0x55 + (uint)*(byte *)(&g_subtile_to_slab_lut + arg_cx))
         * 6] != '\r')) {
      dungeon_off = build_update_player_view_state_01458c();
      return (ushort)(0 < dungeon_off);
    }
    slab_attempt_place_animating_slab_0d7688(0);
    slab_process_slabmap_tile_0da6fc();
    return 1;
  case 0xf:
  case 0x10:
    short_val = structs_process_dungeon_room_0728e9();
    if ((short_val == 0) || (dungeon_off = dungeon_remove_reserve_023868(), -1 < dungeon_off)) {
      dungeon_off = room_how_room_exist_slabs_0cae40();
      if (dungeon_off != 0) {
        return *(ushort *)(dungeon_off + 1);
      }
    }
    else if (extraout_ECX == (byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
      moodneed_fn_051374();
    }
    break;
  case 0x11:
    *(ushort *)(&g_bss_002e0591 + dungeon_off) = param_2;
    return 1;
  case 0x12:
    if ((&g_bss_002e1591)[dungeon_off + (uint)param_2] != '\0') {
      uval = 0x80;
      uval_3 = move_process_map_subtile_0b3788(0x80);
      inits_allocate_dynamic_light_trap_0447fb(uval,uval_3);
      val = workshop_item_class_077a5b();
      if (val != 0) {
        *(int *)(&g_bss_002e1800 + dungeon_off) = *(int *)(&g_bss_002e1800 + dungeon_off) + 1;
      }
      *(undefined4 *)(&g_bss_002e142d + arg_al * 0x1508) = 0xc0;
      if ((int)arg_al != (uint)(byte)(&g_player_id_number)[g_my_player_word._3_1_ * 0x4ef]) {
        return 1;
      }
      sound_non_emitter_has_been_06e9ab();
      return 1;
    }
    break;
  case 0x13:
    uval = draw_update_slab_subtile_columns_08f924();
    uval_2 = packet_activate_dungeon_special_or_spell(uval);
    return uval_2;
  case 0x14:
    magic_update_creature_and_thing_04f195();
    return 1;
  case 0x15:
    magic_fn_04f3bc(arg_bx);
    return 1;
  case 0x16:
    magic_fn_04f4f1(arg_bx);
    return 1;
  case 0x17:
    magic_fn_04f552(arg_bx);
    return 1;
  case 0x18:
    magic_update_creature_and_thing_04efd4();
    break;
  case 0x19:
    magic_update_creature_control_04f87e(arg_bx);
    return 1;
  case 0x1a:
    magic_update_player_view_state_04f41d(arg_bx);
    return 1;
  default:
    dk_sprintf(&g_log_sprintf_buf,s_UNKNOWN_GAME_ACTION___d_00165658,arg_dx);
    LbErrorLog(); /* LbErrorLog("input.cpp", line 2634, g_log_buf) */
    break;
  case 0x1c:
    if ((&g_bss_002e156d)[dungeon_off] != '\0') {
      uval_2 = magic_update_player_dungeon_04e60d();
      return uval_2;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : input_process_thing_entity_049160 (Original VA: 0x49160, Ghidra: FUN_00049160)
 * Prototype: void input_process_thing_entity_049160(void);
 * Address  : 0x49160 (Size: 483 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 7 -> newgui_process_thing_entity_057f6b, newgui_fn_05ae20, newgui_fn_05afda, newgui_fn_05c82f, newgui_fn_05cf2d, set_packet_control_flag, set_packet_action
 ******************************************************************************/
void input_process_thing_entity_049160(void)

{
  char ch;
  int player_off;
  undefined4 *word_ptr;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [8];
  
  if ((g_game_operation_flags & 1) != 0) {
    if ((g_game_operation_flags & 1) == 0) {
      return;
    }
    if ((g_game_operation_flags & 0x80) == 0) {
      return;
    }
  }
  player_off = g_my_player_word._3_1_ * 0x4ef;
  ch = (&g_bss_0019d51a)[player_off];
  if (ch == '\x03') {
    word_ptr = (undefined4 *)auStack_c;
    if ((*(char *)((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + player_off)] + 0x1f) != '\x05') ||
       (word_ptr = (undefined4 *)auStack_c, g_bss_0034b25b == '\0')) goto LAB_00049310;
    uStack_10 = 0x491d0;
    ch = newgui_fn_05ae20();
    if (ch != '\0') {
      g_bss_0019d0b9 = g_bss_0019d0b9 & 0xf7;
      (&g_players)[g_my_player_word._3_1_ * 0x4ef] =
           (&g_players)[g_my_player_word._3_1_ * 0x4ef] & 0xf7;
LAB_00049214:
      uStack_10 = 0x49219;
      newgui_fn_05afda();
      word_ptr = (undefined4 *)auStack_c;
      goto LAB_00049310;
    }
    g_bss_0019d0b9 = g_bss_0019d0b9 | 8;
    (&g_players)[g_my_player_word._3_1_ * 0x4ef] = (&g_players)[g_my_player_word._3_1_ * 0x4ef] | 8;
  }
  else {
    word_ptr = (undefined4 *)auStack_c;
    if ((((ch == '\x02') || (word_ptr = (undefined4 *)auStack_c, ch == '\x04')) ||
        (word_ptr = (undefined4 *)auStack_c, ch == '\x05')) ||
       (word_ptr = (undefined4 *)auStack_c, ch == '\x06')) goto LAB_00049310;
    if (g_bss_0034b25b != '\0') {
      if (((&g_bss_0019d51b)[player_off] != '\x05') ||
         (word_ptr = (undefined4 *)auStack_c,
         *(short *)(&g_bss_002e05bc + g_my_player_word._3_1_ * 0x1508) == 0)) {
        uStack_10 = 0x4927d;
        player_off = newgui_fn_05afda();
        word_ptr = (undefined4 *)auStack_c;
        if (player_off == 0) {
          ch = (&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef];
          if (ch == '\f') {
            uStack_10 = 0x492a3;
            newgui_fn_05c82f();
          }
          else {
            word_ptr = (undefined4 *)auStack_c;
            if ((ch == '\x0f') || (word_ptr = (undefined4 *)auStack_c, ch == '\x01'))
            goto LAB_00049310;
          }
          uStack_10 = 0;
          uStack_14 = 0;
          set_packet_action();
          g_bss_0034b25b = '\0';
          word_ptr = &uStack_14;
        }
      }
      goto LAB_00049310;
    }
    word_ptr = (undefined4 *)auStack_c;
    if (g_bss_003db4fd == '\0') goto LAB_00049310;
    g_bss_003db4fd = '\0';
    uStack_10 = 0x492fe;
    ch = newgui_fn_05ae20();
    if (ch != '\0') goto LAB_00049214;
  }
  uStack_10 = 0x49310;
  newgui_fn_05cf2d();
  word_ptr = (undefined4 *)auStack_c;
LAB_00049310:
  *(undefined4 *)((int)word_ptr + -4) = 0x49315;
  ch = newgui_process_thing_entity_057f6b();
  if (ch != '\0') {
    *(undefined4 *)((int)word_ptr + -4) = 0x4933f;
    set_packet_control_flag();
  }
  return;
}

/******************************************************************************
 * Function : input_update_player_view_state_049343 (Original VA: 0x49343, Ghidra: FUN_00049343)
 * Prototype: longlong input_update_player_view_state_049343(void);
 * Address  : 0x49343 (Size: 203 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 2 -> input_update_player_dungeon_047bcd, input_draw_text_overlay_049426
 * Callees  : 2 -> inits_fn_045fb9, set_packet_action
 ******************************************************************************/
longlong input_update_player_view_state_049343(void)

{
  int val;
  uint uval;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  int val_2;
  uint *word_ptr;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint auStack_c [2];
  
  word_ptr = auStack_c;
  uval = 2;
  val_2 = 0;
  auStack_c[0] = arg_edx;
  while( true ) {
    if (6 < uval) {
      return (ulonglong)auStack_c[0] << 0x20;
    }
    uStack_10 = 0x49368;
    val = inits_fn_045fb9();
    if (val != 0) break;
    uStack_10 = 0x493ba;
    val = inits_fn_045fb9();
    if ((val != 0) && ((&g_bss_003db4fc)[extraout_ECX_00] = 0, ((&g_bss_002ed350)[val_2] & 1) != 0)) {
      uStack_10 = 0;
      word_ptr = &uStack_14;
      uStack_14 = 0;
      set_packet_action();
      goto LAB_000493a5;
    }
    val_2 = val_2 + 3;
    uval = extraout_ECX_00 + 1;
  }
  (&g_bss_003db4fc)[extraout_ECX] = 0;
  val = (int)g_my_player_word._3_1_;
  (&g_bss_002ed34e)[val_2] = *(undefined1 *)(*(int *)((int)&g_player_active_camera + val * 0x4ef) + 1);
  (&g_bss_002ed34f)[val_2] = *(undefined1 *)(*(int *)((int)&g_player_active_camera + val * 0x4ef) + 3);
  (&g_bss_002ed350)[val_2] = (&g_bss_002ed350)[val_2] | 1;
LAB_000493a5:
  return CONCAT44(*word_ptr,1);
}

/******************************************************************************
 * Function : input_draw_text_overlay_049426 (Original VA: 0x49426, Ghidra: FUN_00049426)
 * Prototype: void input_draw_text_overlay_049426(void);
 * Address  : 0x49426 (Size: 1203 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Configures font/flags and draws text on screen
 * Callers  : 1 -> inits_update_creature_and_thing_0462a3
 * Callees  : 20 -> inits_fn_045f23, inits_fn_045fb9, inits_update_player_view_state_046701, input_fn_04897f, input_update_player_view_state_049343, input_fn_04991c, instance_fn_0499ce, instance_fn_049eff ...
 ******************************************************************************/
void input_draw_text_overlay_049426(void)

{
  char ch;
  int val;
  int ui_scale;
  int val_2;
  int val_3;
  int *int_ptr;
  int *int_ptr_2;
  int aiStack_38 [8];
  
  int_ptr = aiStack_38 + 7;
  ui_scale = (uint)g_units_per_pixel * g_graphics_window_width + -0x96;
  aiStack_38[6] = 0x49448;
  val = get_scaled_viewport_bottom_y();
  if (((&g_players)[g_my_player_word._3_1_ * 0x4ef] & 4) != 0) {
    aiStack_38[6] = 0x49471;
    ui_scale = inits_fn_045fb9();
    if (ui_scale != 0) {
      aiStack_38[6] = 0;
      aiStack_38[5] = 0;
      set_packet_action();
      g_bss_003db518 = 0;
      g_bss_003db5fc = 0;
      return;
    }
    g_lb_current_font_ptr = g_frontend_font_ptr;
    if (g_bss_003db5fc != '\x0e') {
      aiStack_38[6] = 0x494e8;
      ui_scale = bflib_system_io_draw_text_overlay_0e6c1c();
      if (0x1c1 < (int)(ui_scale * (uint)g_units_per_pixel)) {
        return;
      }
    }
    aiStack_38[6] = 0;
    aiStack_38[5] = 0;
    set_packet_action();
    g_bss_003db5fc = 0;
    g_bss_003db4fc = 0;
    return;
  }
  if ((g_game_system_flags & 1) != 0) {
    aiStack_38[6] = 0x49563;
    val_2 = inits_fn_045fb9();
    if (val_2 == 0) goto LAB_00049597;
    g_bss_003db518 = 0;
    aiStack_38[6] = 0;
    int_ptr_2 = aiStack_38 + 5;
    aiStack_38[5] = 0;
    goto LAB_00049882;
  }
LAB_00049597:
  aiStack_38[6] = 0x495a3;
  val_2 = inits_fn_045fb9();
  if (val_2 != 0) {
    g_bss_003db535 = 0;
    aiStack_38[6] = 0;
    int_ptr = aiStack_38 + 5;
    aiStack_38[5] = 0;
    set_packet_action();
  }
  if ((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x04') {
    *(undefined4 *)((int)int_ptr + -4) = 0x49608;
    val_2 = inits_fn_045f23();
    if (val_2 == 0) {
      if (g_bss_0034b25b == '\0') {
        if (g_bss_0034b25a != '\0') {
          val_2 = ui_scale >> 0x1f;
          val_3 = val + -0x38 >> 0x1f;
          ui_scale = ((int)((ui_scale + val_2 * -4) - (uint)(val_2 << 1 < 0)) >> 2) * 3 + 1;
          val = ((int)((val + -0x38 + val_3 * -4) - (uint)(val_3 << 1 < 0)) >> 2) * 3 + 1;
          if ((((-1 < ui_scale) && (ui_scale < 0xff)) && (-1 < val)) && (val < 0xff)) {
            *(undefined4 *)((int)int_ptr + -4) = 0;
            *(undefined4 *)((int)int_ptr + -8) = 0;
            *(undefined4 *)((int)int_ptr + -0xc) = 0x496b7;
            set_packet_action();
            g_bss_0034b25a = '\0';
            int_ptr = (int *)((int)int_ptr + -8);
          }
        }
        goto LAB_0004972b;
      }
      g_bss_0034b25b = '\0';
    }
    else {
      (&g_bss_003db4fc)[aiStack_38[7]] = 0;
    }
    *(undefined4 *)((int)int_ptr + -4) = 0x4961b;
    instance_fn_0499ce();
  }
  else if ((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef] == '\x01') {
    if (g_bss_003db50b == '\0') {
      *(undefined4 *)((int)int_ptr + -4) = 0x496ff;
      ui_scale = inits_fn_045f23();
      if ((ui_scale != 0) &&
         ((&g_bss_003db4fc)[aiStack_38[7]] = 0, (&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] != '\a'))
      {
        *(undefined4 *)((int)int_ptr + -4) = 0x4972b;
        input_fn_04991c();
      }
    }
    else if (((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x02') ||
            ((&g_player_view_type)[g_my_player_word._3_1_ * 0x4ef] == '\x05')) {
      g_bss_003db50b = '\0';
      *(undefined4 *)((int)int_ptr + -4) = 0x496ee;
      newgui_update_player_view_state_05b9b3();
    }
  }
LAB_0004972b:
  if (g_bss_003db4fd != '\0') {
    g_bss_003db4fd = '\0';
    *(undefined4 *)((int)int_ptr + -4) = 0x49744;
    ch = newgui_fn_05ae20();
    if (ch == '\0') {
      *(undefined4 *)((int)int_ptr + -4) = 0x4975c;
      newgui_fn_05cf2d();
    }
    else {
      *(undefined4 *)((int)int_ptr + -4) = 0x4974d;
      newgui_fn_05afda();
    }
  }
  switch((&g_bss_0019d51a)[g_my_player_word._3_1_ * 0x4ef]) {
  case 1:
    *(undefined4 *)((int)int_ptr + -4) = 0x4978f;
    ch = newgui_fn_052b58();
    if ((ch == '\0') && ((g_game_operation_flags & 0x20) != 0)) {
      *(undefined4 *)((int)int_ptr + -4) = 0x497a6;
      packet_check_all_room_ traps_sync();
      *(undefined4 *)((int)int_ptr + -4) = 0x497ab;
      newgui_fn_05aee2();
      *(undefined4 *)((int)int_ptr + -4) = 0x497b5;
      newgui_fn_05cf2d();
    }
    *(undefined4 *)((int)int_ptr + -4) = 0x497bf;
    ch = newgui_process_map_subtile_057fe4();
    if (ch == '\0') {
      if ((&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef] == '\x0f') {
        *(undefined4 *)((int)int_ptr + -4) = 0x497f3;
        instance_fn_049eff();
      }
      else {
        *(undefined4 *)((int)int_ptr + -4) = 0x49827;
        ui_scale = input_fn_04897f();
        if (ui_scale == 0) {
          *(undefined4 *)((int)int_ptr + -4) = 0x49830;
          input_update_player_view_state_049343();
        }
        *(undefined4 *)((int)int_ptr + -4) = 0x49835;
        inits_update_player_view_state_046701();
      }
    }
    break;
  case 2:
    if ((*(char *)((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)] +
                  0x1f) == '\x05') &&
       ((*(byte *)((&g_creature_ctrl_ptrs)
                   [*(ushort *)
                     ((&g_thing_ptrs)[*(ushort *)((int)&g_bss_0019d0f7 + g_my_player_word._3_1_ * 0x4ef)]
                     + 100)] + 2) & 2) != 0)) {
      return;
    }
    *(undefined4 *)((int)int_ptr + -4) = 0;
    goto LAB_0004987e;
  case 3:
    *(undefined4 *)((int)int_ptr + -4) = 0;
LAB_0004987e:
    int_ptr_2 = (int *)((int)int_ptr + -8);
    *(undefined4 *)((int)int_ptr + -8) = 0;
LAB_00049882:
    *(undefined4 *)((int)int_ptr_2 + -4) = 0x4988c;
    set_packet_action();
    break;
  case 4:
    *(undefined4 *)((int)int_ptr + -4) = 0x498b5;
    ch = newgui_fn_052b58();
    if ((ch != '\0') && ((g_game_operation_flags & 0x20) != 0)) {
      *(undefined4 *)((int)int_ptr + -4) = 0x498d4;
      newgui_fn_05c848();
    }
  }
  return;
}

/******************************************************************************
 * Function : input_fn_0498d9 (Original VA: 0x498d9, Ghidra: FUN_000498d9)
 * Prototype: bool input_fn_0498d9(void);
 * Address  : 0x498d9 (Size: 67 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Module input.cpp procedure @ 0x0498d9
 * Callers  : 4 -> input_fn_04897f, newgui_process_map_subtile_057fe4, draw_update_player_dungeon_08a194, draw_update_slab_subtile_columns_08afd8
 * Callees  : 2 -> get_scaled_viewport_bottom_y, bflib_system_io_fn_0e8cc8
 ******************************************************************************/
bool input_fn_0498d9(void)

{
  int val;
  
  get_scaled_viewport_bottom_y();
  val = bflib_system_io_fn_0e8cc8();
  return val < 0x3a;
}

/******************************************************************************
 * Function : input_fn_04991c (Original VA: 0x4991c, Ghidra: FUN_0004991c)
 * Prototype: void input_fn_04991c(void);
 * Address  : 0x4991c (Size: 178 bytes)
 * Module   : input.cpp [address_order_boundary_interpolation]
 * Purpose  : Module input.cpp procedure @ 0x04991c
 * Callers  : 2 -> input_update_player_dungeon_047bcd, input_draw_text_overlay_049426
 * Callees  : 4 -> newgui_fn_05afda, newgui_fn_05b645, newgui_fn_05c2e3, set_packet_action
 ******************************************************************************/
void input_fn_04991c(void)

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

