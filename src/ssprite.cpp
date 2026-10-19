/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: ssprite.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 25
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : ssprite_clear_render_state (Original VA: 0xdb120, Ghidra: FUN_000db120)
 * Prototype: void ssprite_clear_render_state(int param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xdb120 (Size: 110 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Initialize scaled sprite renderer state variables
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ssprite_clear_render_state(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 arg_eax;
  int arg_ecx;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  
  g_bss_003d97a4 = g_data_0018429c / 2;
  g_bss_003d9788 = arg_eax;
  g_bss_003d97a8 = g_data_001842a0 / 2;
  g_bss_003d978c = arg_edx;
  g_bss_003d9784 = param_3;
  g_bss_003d9790 = arg_ebx;
  g_bss_003d97a0 = param_2;
  g_bss_003d9798 = arg_ecx;
  g_bss_003d9794 = param_1;
  g_bss_003d979c = arg_ecx - param_1;
  return;
}

/******************************************************************************
 * Function : ssprite_decode_and_blit_rle_frame (Original VA: 0xdb1a4, Ghidra: FUN_000db1a4)
 * Prototype: void ssprite_decode_and_blit_rle_frame(void);
 * Address  : 0xdb1a4 (Size: 1053 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Decode and blit RLE-compressed sprite frame from TbSprite table
 * Callers  : 3 -> engine3_build_subtile_column_geometry_high, engine3_build_subtile_column_geometry_med, engine3_build_subtile_column_geometry_low
 * Callees  : 3 -> engine3_draw_creature_health_and_level_bar, engine3_copy_sprite_draw_descriptor, light_fn_0b0d0c
 ******************************************************************************/
void ssprite_decode_and_blit_rle_frame(void)

{
  int *poly_write_ptr;
  undefined2 *poly_write_ptr_2;
  int thing_ptr;
  undefined4 uval;
  ushort arg_ax;
  int loop_i;
  int val;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  int local_3c;
  int local_38;
  int local_34;
  
  flag = 0;
  do {
    thing_ptr = (&g_thing_ptrs)[arg_ax];
    if ((*(byte *)(thing_ptr + 0x4f) & 1) == 0) { /* thing->render_flags */
      switch(*(byte *)(thing_ptr + 0x50) >> 2) {
      case 2:
        local_3c = (int)(short)(*(short *)(thing_ptr + 0xd) - g_bss_003d9788); /* thing->mappos.val_x */
        local_34 = (int)(short)(g_bss_003d978c - *(short *)(thing_ptr + 0xf)); /* thing->mappos.val_y */
        local_38 = (uint)*(ushort *)(thing_ptr + 0x60) - g_bss_003d9790;
        local_44 = 0;
        if ((*(char *)(thing_ptr + 0x1f) == '\x05') && ((*(byte *)(thing_ptr + 0x25) & 4) == 0)) { /* thing->class_id */
          loop_i = light_fn_0b0d0c();
          val = 0;
          if (0 < loop_i) {
            do {
              engine3_draw_creature_health_and_level_bar();
              val = val + 1;
            } while (val < loop_i);
          }
        }
        local_38 = (*(int *)(thing_ptr + 0xf) >> 0x10) - g_bss_003d9790; /* thing->mappos.val_y */
        if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
          engine3_copy_sprite_draw_descriptor();
        }
        (*g_engine3_bss_00388300)();
        if (g_render_poly_write_ptr < g_render_poly_buf_end) {
          loop_i = local_34 + -0x40 >> 0x1f;
          loop_i = (int)((local_34 + -0x40 + loop_i * -0x10) - (uint)(loop_i << 3 < 0)) >> 4;
          if (g_view_projection_mode == '\0') {
            loop_i = loop_i + -6;
          }
          if (loop_i < 0) {
            loop_i = 0;
          }
          else if (0x2be < loop_i) {
            loop_i = 0x2be;
          }
          uval = (&g_key_to_ascii_table)[loop_i];
          *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xb;
          *g_render_poly_write_ptr = uval;
          (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
          g_render_poly_write_ptr[2] = thing_ptr;
          g_render_poly_write_ptr[3] = local_4c;
          g_render_poly_write_ptr[4] = local_48;
          poly_write_ptr = g_render_poly_write_ptr + 5;
          g_render_poly_write_ptr = g_render_poly_write_ptr + 6;
          *poly_write_ptr = local_34;
        }
        break;
      case 3:
        local_3c = (int)(short)(*(short *)(thing_ptr + 0xd) - g_bss_003d9788); /* thing->mappos.val_x */
        local_34 = (int)(short)(g_bss_003d978c - *(short *)(thing_ptr + 0xf)); /* thing->mappos.val_y */
        local_44 = 0;
        local_38 = (*(int *)(thing_ptr + 0xf) >> 0x10) - g_bss_003d9790; /* thing->mappos.val_y */
        word_ptr = &local_4c;
        word_ptr_2 = &g_engine3_bss_00387d3c;
        for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_2 = *word_ptr;
          word_ptr = word_ptr + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        }
        g_engine3_bss_00387d4c = 0;
        g_engine3_bss_00387d50 = 0;
        g_engine3_bss_00387d54 = 0;
        break;
      case 4:
        local_3c = (int)(short)(*(short *)(thing_ptr + 0xd) - g_bss_003d9788); /* thing->mappos.val_x */
        local_34 = (int)(short)(g_bss_003d978c - *(short *)(thing_ptr + 0xf)); /* thing->mappos.val_y */
        local_38 = (*(int *)(thing_ptr + 0xf) >> 0x10) - g_bss_003d9790; /* thing->mappos.val_y */
        (*g_engine3_bss_00388300)();
        if (g_render_poly_write_ptr < g_render_poly_buf_end) {
          *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x10;
          *g_render_poly_write_ptr = g_bss_00387224;
          g_bss_00387224 = g_render_poly_write_ptr;
          g_render_poly_write_ptr[2] = local_4c;
          g_render_poly_write_ptr[3] = local_48;
          word_ptr = g_render_poly_write_ptr + 4;
          g_render_poly_write_ptr = g_render_poly_write_ptr + 5;
          *word_ptr = *(undefined4 *)(thing_ptr + 0x13); /* thing->anim_sprite */
        }
        break;
      case 5:
        local_3c = (int)(short)(*(short *)(thing_ptr + 0xd) - g_bss_003d9788); /* thing->mappos.val_x */
        local_34 = (int)(short)(g_bss_003d978c - *(short *)(thing_ptr + 0xf)); /* thing->mappos.val_y */
        local_38 = (*(int *)(thing_ptr + 0xf) >> 0x10) - g_bss_003d9790; /* thing->mappos.val_y */
        (*g_engine3_bss_00388300)();
        if (g_render_poly_write_ptr < g_render_poly_buf_end) {
          if (g_game_turn + -1 == *(int *)(thing_ptr + 0x15)) {
            if (CONCAT31((uint3)((uint)(g_game_turn + -1) >> 8) ^
                         (uint3)((uint)*(int *)(thing_ptr + 0x15) >> 8),*(char *)(thing_ptr + 0x19)) < 0x28)
            {
              *(char *)(thing_ptr + 0x19) = *(char *)(thing_ptr + 0x19) + '\x01';
            }
          }
          else {
            *(undefined1 *)(thing_ptr + 0x19) = 0;
          }
          *(int *)(thing_ptr + 0x15) = g_game_turn;
          word_ptr = g_render_poly_write_ptr;
          if (*(char *)(thing_ptr + 0x19) == '(') {
            loop_i = local_34 + -0x40 >> 0x1f;
            loop_i = ((int)((local_34 + -0x40 + loop_i * -0x10) - (uint)(loop_i << 3 < 0)) >> 4) + -6;
            if (loop_i < 0) {
              loop_i = 0;
            }
            else if (0x2be < loop_i) {
              loop_i = 0x2be;
            }
            uval = (&g_key_to_ascii_table)[loop_i];
            *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x11;
            *g_render_poly_write_ptr = uval;
            (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
            g_render_poly_write_ptr[2] = local_4c;
            g_render_poly_write_ptr[3] = local_48;
            word_ptr_2 = g_render_poly_write_ptr + 4;
            poly_write_ptr_2 = (undefined2 *)((int)g_render_poly_write_ptr + 6);
            g_render_poly_write_ptr = word_ptr_2;
            *poly_write_ptr_2 = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
            if (word_ptr_2 < g_render_poly_buf_end) {
              *(undefined1 *)(word_ptr + 5) = 0x13;
              *word_ptr_2 = g_bss_00387224;
              g_bss_00387224 = word_ptr_2;
              word_ptr[6] = local_4c;
              word_ptr[7] = local_48;
              g_render_poly_write_ptr = word_ptr + 8;
              *(undefined2 *)((int)word_ptr + 0x16) = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
            }
          }
        }
        break;
      case 6:
        local_3c = (int)(short)(*(short *)(thing_ptr + 0xd) - g_bss_003d9788); /* thing->mappos.val_x */
        local_34 = (int)(short)(g_bss_003d978c - *(short *)(thing_ptr + 0xf)); /* thing->mappos.val_y */
        local_38 = (*(int *)(thing_ptr + 0xf) >> 0x10) - g_bss_003d9790; /* thing->mappos.val_y */
        (*g_engine3_bss_00388300)();
        if (g_render_poly_write_ptr < g_render_poly_buf_end) {
          *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x12;
          *g_render_poly_write_ptr = g_bss_00387224;
          g_bss_00387224 = g_render_poly_write_ptr;
          g_render_poly_write_ptr[2] = thing_ptr;
          g_render_poly_write_ptr[3] = local_4c;
          g_render_poly_write_ptr[4] = local_48;
          poly_write_ptr = g_render_poly_write_ptr + 5;
          g_render_poly_write_ptr = g_render_poly_write_ptr + 6;
          *poly_write_ptr = local_34;
        }
      }
    }
    arg_ax = *(ushort *)(thing_ptr + 2);
  } while (arg_ax != 0);
  return;
}

/******************************************************************************
 * Function : get_thing_anim_sprite_id_checked (Original VA: 0xdb5c4, Ghidra: FUN_000db5c4)
 * Prototype: void get_thing_anim_sprite_id_checked(void);
 * Address  : 0xdb5c4 (Size: 1449 bytes)
 * Module   : ssprite.cpp [direct_file_string_xref]
 * OrigLine : ssprite.cpp lines 922
 * Purpose  : Resolve animation graphic ID for Thing model/class with bounds logging
 * Callers  : 1 -> engine3_rasterize_depth_buckets_high
 * Callees  : 5 -> jtyedit_fn_04c2eb, lair_update_creature_control_04c7eb, light_fn_0b0c44, LbErrorLog, dk_sprintf
 ******************************************************************************/
void get_thing_anim_sprite_id_checked(void)

{
  char ch;
  int thing_ptr;
  int val;
  byte flag;
  ushort uval;
  undefined2 uval_2;
  int arg_eax;
  int val_2;
  uint uval_3;
  int val_3;
  int extraout_ECX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  char **val_4;
  char *pcStack_50;
  uint uStack_4c;
  uint local_48 [6];
  ushort local_30;
  undefined2 uStack_2e;
  short local_2c;
  undefined2 uStack_2a;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  
  val_4 = (char **)(local_48 + 2);
  local_48[4] = (uint)g_lb_display_draw_flags;
  thing_ptr = *(int *)(arg_eax + 8);
  local_1c = g_bss_003d9581;
  if (*(char *)(g_bss_002f10da + 8 +
               (uint)*(ushort *)((int)&PTR_DAT_00179450 + (*(int *)(thing_ptr + 0x42) >> 0x10) * 2) *
               0x10) == '\0') {
    uval_3 = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
  }
  else {
    uval_3 = (uint)*(ushort *)(thing_ptr + 0x52) - g_bss_003d9784; /* thing->health */
  }
  local_2c = (short)uval_3;
  uStack_2a = (undefined2)(uval_3 >> 0x10);
  if (g_view_projection_mode == '\0') {
    val_2 = 0x10000;
    if ((*(byte *)(thing_ptr + 0x4f) & 2) == 0) { /* thing->render_flags */
      local_48[1] = 0xdb6b9;
      uval_2 = light_fn_0b0c44();
      val_3 = CONCAT22(extraout_var_00,uval_2);
    }
    else {
      val_3 = 0x2000;
    }
  }
  else {
    val_2 = *(int *)(arg_eax + 0x14);
    if (g_bss_003d9794 < val_2) {
      if (val_2 < g_bss_003d9798) {
        if ((*(byte *)(thing_ptr + 0x4f) & 2) == 0) { /* thing->render_flags */
          local_48[1] = 0xdb66f;
          uval = light_fn_0b0c44();
          uval_3 = (uint)uval;
          val_3 = extraout_ECX;
        }
        else {
          uval_3 = 0x2000;
          val_3 = g_bss_003d979c;
        }
        val_3 = (int)(((longlong)(g_bss_003d9798 - val_2) * (longlong)(int)uval_3) / (longlong)val_3);
      }
      else {
        val_3 = 0;
      }
    }
    else if ((*(byte *)(thing_ptr + 0x4f) & 2) == 0) { /* thing->render_flags */
      local_48[1] = 0xdb697;
      uval_2 = light_fn_0b0c44();
      val_3 = CONCAT22(extraout_var,uval_2);
    }
    else {
      val_3 = 0x2000;
    }
  }
  val_2 = (int)((uint)*(ushort *)(thing_ptr + 0x46) * g_bss_003d97a0) / val_2;
  if ((*(byte *)(thing_ptr + 0x4f) & 0xc) == 0) { /* thing->render_flags */
    if (val_3 >> 8 == 0x20) {
      g_lb_display_draw_flags = g_lb_display_draw_flags & 0xf7ff;
    }
    else {
      g_lb_sprite_remap_ptr = &g_pixmap_fade_tables + (val_3 >> 8) * 0x100;
      g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
    }
  }
  else {
    g_lb_sprite_remap_ptr = &g_pixmap_ghost_tables + (uint)*(byte *)(thing_ptr + 0x51) * 0x100;
    g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
  }
  g_bss_003d9581 = 0;
  flag = (*(byte *)(thing_ptr + 0x4f) & 0x3f) >> 4; /* thing->render_flags */
  if (flag == 1) {
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xf7ff | 8;
  }
  else if (flag == 2) {
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xf7ff | 4;
  }
  else if (flag == 3) {
    g_bss_003d9581 = 1;
  }
  ch = *(char *)(thing_ptr + 0x1f); /* thing->class_id */
  if (((ch == '\x05') || (ch == '\x01')) || (ch == '\x04')) {
    val_3 = (g_my_player_word >> 0x18) * 0x4ef;
    if ((*(short *)(thing_ptr + 0x1b) == *(short *)(&g_bss_0019d0fd + val_3)) && ((g_game_turn & 2) != 0) /* thing->index_or_angle */
       ) {
      if (*(char *)(*(int *)((int)&g_player_active_camera + val_3) + 6) == '\x02') {
        g_lb_sprite_remap_ptr = &g_bss_003d9584;
        g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
      }
    }
    else if ((*(byte *)(thing_ptr + 0x4f) & 0x80) != 0) { /* thing->render_flags */
      g_lb_sprite_remap_ptr = &g_bss_003d9684;
      g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0x7f; /* thing->render_flags */
    }
    g_bss_003d9580 = 1;
    g_bss_003d957c = thing_ptr;
  }
  else {
    g_bss_003d9580 = 0;
    g_bss_003d957c = 0;
  }
  if (0x3d5 < *(byte *)(thing_ptr + 0x48)) {
    local_48[1] = (uint)*(byte *)(thing_ptr + 0x1f); /* thing->class_id */
    local_48[0] = (uint)*(byte *)(thing_ptr + 0x1a);
    uStack_4c = *(int *)(thing_ptr + 0x42) >> 0x10;
    pcStack_50 = s_Invalid_graphic_Id__d_from_model_0016c8dc;
    dk_sprintf(&g_log_sprintf_buf);
    local_48[1] = 0xdb86c;
    LbErrorLog(); /* LbErrorLog("ssprite.cpp", line 922, g_log_buf) */
    val_4 = (char **)(local_48 + 2);
    goto LAB_000dbb50;
  }
  val_3 = g_my_player_word >> 0x18;
  if (*(char *)(thing_ptr + 0x1f) == '\x01') { /* thing->class_id */
    flag = *(byte *)(thing_ptr + 0x1a);
    if (flag < 4) {
      if (flag == 2) goto LAB_000db8dd;
      goto LAB_000dbb2b;
    }
    if ((4 < flag) && (flag != 0x1c)) goto LAB_000dbb2b;
LAB_000db8dd:
    local_48[5] = val_2 >> 2;
    local_24 = val_2 >> 1;
    val = CONCAT22(uStack_2a,local_2c);
    if (*(char *)(thing_ptr + 0x1a) == '\x1c') {
      local_30 = 0x70;
      if ((&g_bss_0019d51a)[val_3 * 0x4ef] == '\x01') {
        local_20 = val_2 >> 3;
        local_24 = local_48[5] - val_2;
      }
      else {
        local_48[3] = (&g_slab_attr_table)[val] * val_2 >> 0x14;
        local_24 = (int)(&PTR_LAB_00192fe0)[val] * (-local_24 - val_2) >> 0x10;
        local_20 = local_48[3];
      }
      local_28 = val_2 / 2;
    }
    else {
      local_30 = 0x71;
      if (*(char *)(thing_ptr + 0x1a) == '\x02') {
        if ((&g_bss_0019d51a)[val_3 * 0x4ef] == '\x01') {
          local_20 = 0;
          local_24 = val_2 * 3 >> 3;
        }
        else {
          local_20 = (&g_slab_attr_table)[val] * val_2 >> 0x14;
          local_24 = (int)(&PTR_LAB_00192fe0)[val] * val_2 >> 0x14;
        }
        local_28 = (val_2 / 3) * 2;
      }
      else {
        if ((&g_bss_0019d51a)[val_3 * 0x4ef] == '\x01') {
          local_20 = (int)local_48[5] / 3;
        }
        else {
          local_48[3] = (&g_slab_attr_table)[val] * val_2 >> 0x14;
          local_24 = (-local_24 - val_2) * (int)(&PTR_LAB_00192fe0)[val] >> 0x10;
          local_20 = local_48[3];
        }
        local_24 = local_24 / 3;
        local_28 = val_2 / 3;
      }
    }
    uStack_2e = 0;
    local_48[1] = 0xdba81;
    uval_3 = jtyedit_fn_04c2eb();
    local_48[2] = (*(ushort *)(thing_ptr + 0x1b) + g_game_turn) % (uval_3 & 0xff); /* thing->index_or_angle */
    g_bss_003d9581 = 0;
    local_48[0] = (uint)*(byte *)(thing_ptr + 0x48);
    local_48[3] = (uint)local_2c;
    uStack_4c = 0xdbad6;
    local_48[1] = val_2;
    lair_update_creature_control_04c7eb();
    g_bss_003d9581 = 1;
    uStack_4c = (uint)local_30;
    pcStack_50 = (char *)(local_48[0] & 0xff);
    val_4 = &pcStack_50;
  }
  else {
    if ((((*(char *)(thing_ptr + 0x1f) == '\b') && (*(char *)(thing_ptr + 0x1a) != '\x01')) && /* thing->class_id */
        (*(int *)(thing_ptr + 3) >> 0x18 != (uint)(byte)(&g_player_id_number)[val_3 * 0x4ef])) &&
       (*(char *)(thing_ptr + 0x18) == '\0')) goto LAB_000dbb50;
LAB_000dbb2b:
    local_48[0] = (uint)*(byte *)(thing_ptr + 0x48);
    val_4 = (char **)local_48;
    local_48[1] = val_2;
  }
  *(undefined4 *)((int)val_4 + -4) = 0xdbb50;
  lair_update_creature_control_04c7eb();
LAB_000dbb50:
  g_lb_display_draw_flags = (short)*(undefined4 *)((int)val_4 + 8);
  g_bss_003d9581 = *(undefined1 *)((int)val_4 + 0x24);
  return;
}

/******************************************************************************
 * Function : update_neutral_thing_anim_sprite (Original VA: 0xdbb70, Ghidra: FUN_000dbb70)
 * Prototype: void update_neutral_thing_anim_sprite(void);
 * Address  : 0xdbb70 (Size: 18 bytes)
 * Module   : ssprite.cpp [contiguous_same_unit_span]
 * Purpose  : Update animation sprite for neutral (owner 5) Thing
 * Callers  : 1 -> engine3_rasterize_depth_buckets_low
 * Callees  : 1 -> update_thing_anim_sprite_frame
 ******************************************************************************/
void update_neutral_thing_anim_sprite(void)

{
  int arg_eax;
  
  if (*(char *)(arg_eax + 6) == '\x05') {
    update_thing_anim_sprite_frame();
  }
  return;
}

/******************************************************************************
 * Function : update_thing_anim_sprite_frame (Original VA: 0xdbb84, Ghidra: FUN_000dbb84)
 * Prototype: void update_thing_anim_sprite_frame(void);
 * Address  : 0xdbb84 (Size: 1372 bytes)
 * Module   : ssprite.cpp [direct_file_string_xref]
 * OrigLine : ssprite.cpp lines 1161
 * Purpose  : Advance and validate Thing animation sprite frame
 * Callers  : 2 -> engine3_rasterize_depth_buckets_low, update_neutral_thing_anim_sprite
 * Callees  : 5 -> jtyedit_fn_04c2eb, lair_update_creature_control_04c7eb, light_fn_0b0c44, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

void update_thing_anim_sprite_frame(void)

{
  char ch;
  int thing_ptr;
  byte flag;
  int camera;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int val;
  int val_2;
  char **val_3;
  uint uval;
  char *pcStack_48;
  uint auStack_44 [7];
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  
  val_3 = (char **)(auStack_44 + 3);
  auStack_44[4] = (uint)g_lb_display_draw_flags;
  thing_ptr = *(int *)(arg_edx + 8);
  local_18 = g_bss_003d9581;
  if (*(char *)(g_bss_002f10da + 8 +
               (uint)*(ushort *)((int)&PTR_DAT_00179450 + (*(int *)(thing_ptr + 0x42) >> 0x10) * 2) *
               0x10) == '\0') {
    local_28 = (uint)*(ushort *)(thing_ptr + 0x52); /* thing->health */
  }
  else {
    local_28 = (uint)*(ushort *)(thing_ptr + 0x52) - (uint)*(ushort *)(camera + 7); /* thing->health */
  }
  flag = (*(byte *)(thing_ptr + 0x4f) & 0x3f) >> 4; /* thing->render_flags */
  if (flag == 1) {
    g_lb_display_draw_flags = g_lb_display_draw_flags | 8;
  }
  else if (flag == 2) {
    g_lb_display_draw_flags = g_lb_display_draw_flags | 4;
  }
  if ((*(byte *)(thing_ptr + 0x4f) & 2) == 0) { /* thing->render_flags */
    auStack_44[2] = 0xdbc2a;
    uval = light_fn_0b0c44();
    uval = uval & 0xffff;
    camera = extraout_ECX;
  }
  else {
    uval = 0x2000;
  }
  val = *(int *)(camera + 0x17) * 0x2000; /* camera->zoom */
  val_2 = val >> 0x1f;
  auStack_44[2] =
       (int)((uint)*(ushort *)(thing_ptr + 0x46) *
            (((int)((val + val_2 * -0x10000) - (uint)(val_2 << 0xf < 0)) >> 0x10) /
            (int)(uint)g_units_per_pixel)) / 0x10000;
  if ((*(byte *)(thing_ptr + 0x4f) & 0xc) == 0) { /* thing->render_flags */
    if ((int)uval >> 8 == 0x20) {
      g_lb_display_draw_flags = g_lb_display_draw_flags & 0xf7ff;
    }
    else {
      g_lb_sprite_remap_ptr = &g_pixmap_fade_tables + ((int)uval >> 8) * 0x100;
      g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
    }
  }
  else {
    auStack_44[4] = (uint)g_lb_display_draw_flags;
    g_lb_sprite_remap_ptr = &g_pixmap_ghost_tables + (uint)*(byte *)(thing_ptr + 0x51) * 0x100;
    g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
  }
  g_bss_003d9581 = 0;
  flag = (*(byte *)(thing_ptr + 0x4f) & 0x3f) >> 4; /* thing->render_flags */
  if (flag < 2) {
    if (flag == 1) {
      g_lb_display_draw_flags = g_lb_display_draw_flags & 0xf7ff | 8;
    }
  }
  else if (flag < 3) {
    g_lb_display_draw_flags = g_lb_display_draw_flags & 0xf7ff | 4;
  }
  else if (flag == 3) {
    g_bss_003d9581 = 1;
  }
  ch = *(char *)(thing_ptr + 0x1f); /* thing->class_id */
  if (((ch == '\x05') || (ch == '\x01')) || (ch == '\x04')) {
    if ((*(short *)(thing_ptr + 0x1b) == *(short *)(&g_bss_0019d0fd + (g_my_player_word >> 0x18) * 0x4ef)) && /* thing->index_or_angle */
       ((g_game_turn & 2) != 0)) {
      g_lb_sprite_remap_ptr = &g_bss_003d9584;
      g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
    }
    else if ((*(byte *)(thing_ptr + 0x4f) & 0x80) != 0) { /* thing->render_flags */
      g_lb_display_draw_flags = g_lb_display_draw_flags | 0x800;
      g_lb_sprite_remap_ptr = &g_bss_003d9684;
      *(byte *)(thing_ptr + 0x4f) = *(byte *)(thing_ptr + 0x4f) & 0x7f; /* thing->render_flags */
    }
    g_bss_003d9580 = 1;
    g_bss_003d957c = thing_ptr;
  }
  else {
    g_bss_003d9580 = 0;
    g_bss_003d957c = 0;
  }
  if (*(byte *)(thing_ptr + 0x48) < 0x3d6) {
    val = g_my_player_word >> 0x18;
    if ((*(char *)(thing_ptr + 0x1f) == '\x01') && /* thing->class_id */
       (((ch = *(char *)(thing_ptr + 0x1a), ch == '\x02' || (ch == '\x1c')) ||
        (ch == '\x04')))) {
      auStack_44[6] = (int)auStack_44[2] >> 2;
      local_20 = (int)auStack_44[2] >> 1;
      if (*(char *)(thing_ptr + 0x1a) == '\x1c') {
        auStack_44[5] = 0x70;
        if ((&g_bss_0019d51a)[val * 0x4ef] == '\x01') {
          local_20 = auStack_44[6] - auStack_44[2];
        }
        else {
          local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * (-local_20 - auStack_44[2])) >> 0x10
          ;
        }
        local_1c = (int)auStack_44[2] / 2;
      }
      else {
        auStack_44[5] = 0x71;
        if (*(char *)(thing_ptr + 0x1a) == '\x02') {
          if ((&g_bss_0019d51a)[val * 0x4ef] == '\x01') {
            local_20 = (int)(auStack_44[2] * 3) >> 3;
          }
          else {
            local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * auStack_44[2]) >> 0x14;
          }
          local_1c = ((int)auStack_44[2] / 3) * 2;
        }
        else {
          if ((&g_bss_0019d51a)[val * 0x4ef] == '\x01') {
            local_24 = 3;
          }
          else {
            local_20 = (int)((int)(&PTR_LAB_00192fe0)[local_28] * (-local_20 - auStack_44[2])) >>
                       0x10;
          }
          local_20 = local_20 / 3;
          local_1c = (int)auStack_44[2] / 3;
        }
      }
      auStack_44[2] = 0xdbfc2;
      uval = jtyedit_fn_04c2eb();
      auStack_44[3] = (*(ushort *)(thing_ptr + 0x1b) + g_game_turn) % (uval & 0xff); /* thing->index_or_angle */
      auStack_44[1] = (uint)*(byte *)(thing_ptr + 0x48);
      g_bss_003d9581 = 0;
      auStack_44[0] = 0xdc012;
      auStack_44[2] = extraout_ECX_00;
      lair_update_creature_control_04c7eb();
      auStack_44[0] = local_24 & 0xffff;
      g_bss_003d9581 = 1;
      val_3 = &pcStack_48;
      pcStack_48 = (char *)0x0;
    }
    else {
      if ((((*(char *)(thing_ptr + 0x1f) == '\b') && (*(char *)(thing_ptr + 0x1a) != '\x01')) && /* thing->class_id */
          (*(int *)(thing_ptr + 3) >> 0x18 != (uint)(byte)(&g_player_id_number)[val * 0x4ef])) &&
         (*(char *)(thing_ptr + 0x18) == '\0')) goto LAB_000dc0c4;
      auStack_44[1] = (uint)*(byte *)(thing_ptr + 0x48);
      val_3 = (char **)(auStack_44 + 1);
    }
    val_3[0xffffffff] = (char *)0xdc0c4;
    lair_update_creature_control_04c7eb();
  }
  else {
    auStack_44[2] = (uint)*(byte *)(thing_ptr + 0x1f); /* thing->class_id */
    auStack_44[1] = (uint)*(byte *)(thing_ptr + 0x1a);
    auStack_44[0] = *(int *)(thing_ptr + 0x42) >> 0x10;
    pcStack_48 = s_Invalid_graphic_Id__d_from_model_0016c916;
    dk_sprintf(&g_log_sprintf_buf);
    auStack_44[2] = 0xdbe0a;
    LbErrorLog(); /* LbErrorLog("ssprite.cpp", line 1161, g_log_buf) */
    val_3 = (char **)(auStack_44 + 3);
  }
LAB_000dc0c4:
  g_lb_display_draw_flags = (short)val_3[1];
  g_bss_003d9581 = (char)val_3[8];
  return;
}

/******************************************************************************
 * Function : ssprite_noop_stub (Original VA: 0xdc0e0, Ghidra: FUN_000dc0e0)
 * Prototype: void ssprite_noop_stub(void);
 * Address  : 0xdc0e0 (Size: 1 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Empty sprite callback stub
 * Callers  : 1 -> engine3_rasterize_depth_buckets_high
 * Callees  : 0 -> 
 ******************************************************************************/
void ssprite_noop_stub(void)

{
  return;
}

/******************************************************************************
 * Function : scale_value_by_creature_level (Original VA: 0xdc0f0, Ghidra: FUN_000dc0f0)
 * Prototype: int scale_value_by_creature_level(void);
 * Address  : 0xdc0f0 (Size: 93 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Scale base stat value by creature experience level (10% per level)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int scale_value_by_creature_level(void)

{
  int player_idx;
  int val;
  int arg_edx;
  int arg_ebx;
  
  if ((g_game_system_flags & 1) == 0) {
    val = arg_edx + (arg_ebx * 10 * arg_edx) / 100;
  }
  else {
    val = arg_edx * 2;
  }
  if ((&g_bss_0019d0f1)[player_idx * 0x4ef] == '\x02') {
    val = val / 2;
  }
  return val;
}

/******************************************************************************
 * Function : get_scaled_viewport_bottom_y (Original VA: 0xdc150, Ghidra: FUN_000dc150)
 * Prototype: undefined8 get_scaled_viewport_bottom_y(void);
 * Address  : 0xdc150 (Size: 50 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Calculate scaled bottom Y coordinate of 3D viewport
 * Callers  : 30 -> frontend_load_frontend_palette_02e8a7, frontend_fn_02faf6, frontmap_fn_031599, frontmap_fn_031c23, frontmap_LbNetwork_Exchange_031def, frontmap_fn_032805, fronttor_LbNetwork_Exchange_036a59, inits_fn_045ca0 ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 get_scaled_viewport_bottom_y(void)

{
  int ui_scale;
  undefined4 arg_edx;
  
  ui_scale = (uint)g_units_per_pixel * g_graphics_window_height;
  if (((g_active_screen_mode == 0xd) && (g_bss_00376518 == 0)) && (ui_scale = ui_scale + -0x28, ui_scale < 0)) {
    ui_scale = 0;
  }
  return CONCAT44(arg_edx,ui_scale);
}

/******************************************************************************
 * Function : toggle_player_view_flag_bit (Original VA: 0xdc184, Ghidra: FUN_000dc184)
 * Prototype: void toggle_player_view_flag_bit(void);
 * Address  : 0xdc184 (Size: 21 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : XOR a bit in g_player_view_flags for player_idx
 * Callers  : 1 -> packet_resync_network_game_state
 * Callees  : 0 -> 
 ******************************************************************************/
void toggle_player_view_flag_bit(void)

{
  int player_idx;
  byte arg_dl;
  
  (&g_player_view_flags)[player_idx * 0x4ef] = (&g_player_view_flags)[player_idx * 0x4ef] ^ '\x01' << (arg_dl & 0x1f);
  return;
}

/******************************************************************************
 * Function : is_subtile_revealed_and_within_bounds (Original VA: 0xdc19c, Ghidra: FUN_000dc19c)
 * Prototype: undefined4 is_subtile_revealed_and_within_bounds(void);
 * Address  : 0xdc19c (Size: 299 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Check if (subtile_x, subtile_y) is within 0..254 and revealed to player
 * Callers  : 5 -> comptool_fn_01e061, process_players_dungeon_command_packet, creature_process_thing_entity_0849c8, creature_fn_084d98, draw_update_slab_subtile_columns_08fd14
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 is_subtile_revealed_and_within_bounds(void)

{
  int slab_coord;
  int arg_eax;
  int arg_ecx;
  int subtile_x;
  uint arg_ebx;
  
  if (((((-1 < arg_eax) && (arg_eax < 0xff)) && (-1 < subtile_x)) &&
      ((subtile_x < 0xff &&
       (slab_coord = (arg_eax + subtile_x * 0x100) * 5,
       (*(uint *)((int)&g_map_subtiles + slab_coord + 1) >> 0x1c & 1 << ((byte)arg_ebx & 0x1f)) != 0))))
     && (((*(byte *)((int)&g_map_subtiles + slab_coord) & 0x10) == 0 &&
         ((*(byte *)((int)&g_map_subtiles + ((arg_eax / 3) * 3 + (subtile_x / 3) * 0x300 + 0x101) * 5) &
          0x40) == 0)))) {
    slab_coord = ((&g_subtile_to_slab_lut)[arg_eax] + (&g_subtile_to_slab_lut)[subtile_x] * 0x55) * 6;
    if (((&g_slabmap)[slab_coord] & 7) == arg_ebx) {
      return 1;
    }
    if (((arg_ecx != 0) && (((&g_slabmap)[slab_coord] & 7) == g_neutral_player_number)) &&
       ((&g_slabmap_base)[slab_coord] == '\n')) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : get_2d_box_distance_xy (Original VA: 0xdc2c8, Ghidra: FUN_000dc2c8)
 * Prototype: int get_2d_box_distance_xy(void);
 * Address  : 0xdc2c8 (Size: 89 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute 2D octile/box distance between (x1, y1) and (x2, y2)
 * Callers  : 2 -> event_fn_0274ad, draw_process_thing_entity_088e2c
 * Callees  : 0 -> 
 ******************************************************************************/
int get_2d_box_distance_xy(void)

{
  int arg_eax;
  int val;
  int val_2;
  int val_3;
  int arg_ecx;
  int arg_edx;
  uint uval;
  int arg_ebx;
  
  uval = arg_eax - arg_ebx >> 0x1f;
  val = (arg_eax - arg_ebx ^ uval) - uval;
  uval = arg_edx - arg_ecx >> 0x1f;
  val_2 = (arg_edx - arg_ecx ^ uval) - uval;
  if (val_2 < val) {
    return *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val) * 8) * val >> 0xd;
  }
  val_3 = 0;
  if (val_2 != 0) {
    val_3 = *(int *)(&g_data_0017a4d0 + ((val * 0x100) / val_2) * 8) * val_2 >> 0xd;
  }
  return val_3;
}

/******************************************************************************
 * Function : get_2d_squared_distance (Original VA: 0xdc324, Ghidra: FUN_000dc324)
 * Prototype: int get_2d_squared_distance(void);
 * Address  : 0xdc324 (Size: 45 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute 2D squared Euclidean distance between two Coord3d positions
 * Callers  : 2 -> engine3_draw_creature_health_and_level_bar, routes_illegal_block_direction_lookahead_0d29ac
 * Callees  : 0 -> 
 ******************************************************************************/
int get_2d_squared_distance(void)

{
  ushort *pos_a;
  ushort *pos_b;
  
  return ((uint)pos_a[1] - (uint)pos_b[1]) * ((uint)pos_a[1] - (uint)pos_b[1]) +
         ((uint)*pos_a - (uint)*pos_b) * ((uint)*pos_a - (uint)*pos_b);
}

/******************************************************************************
 * Function : get_2d_box_distance (Original VA: 0xdc354, Ghidra: FUN_000dc354)
 * Prototype: int get_2d_box_distance(void);
 * Address  : 0xdc354 (Size: 106 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute 2D octile/box distance between two Coord3d positions
 * Callers  : 13 -> anger_fn_010c44, ariadne_fn_012230, ariadne_fn_0123ba, ariadne_manoeuvre_state_01264b, barracks_fn_0130c5, comptool_update_slab_subtile_columns_01e5de, effect_illegal_hit_thing_type_02585f, effect_update_creature_and_thing_025af0 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int get_2d_box_distance(void)

{
  ushort *pos_a;
  int val;
  int val_2;
  ushort *pos_b;
  uint uval;
  
  uval = (int)((uint)*pos_a - (uint)*pos_b) >> 0x1f;
  val = ((uint)*pos_a - (uint)*pos_b ^ uval) - uval;
  uval = (int)((uint)pos_a[1] - (uint)pos_b[1]) >> 0x1f;
  val_2 = ((uint)pos_a[1] - (uint)pos_b[1] ^ uval) - uval;
  if (val_2 < val) {
    val = *(int *)(&g_data_0017a4d0 + ((val_2 * 0x100) / val) * 8) * val;
  }
  else {
    if (val_2 == 0) {
      return 0;
    }
    val = *(int *)(&g_data_0017a4d0 + ((val * 0x100) / val_2) * 8) * val_2;
  }
  return val >> 0xd;
}

/******************************************************************************
 * Function : get_3d_box_distance (Original VA: 0xdc3c0, Ghidra: FUN_000dc3c0)
 * Prototype: int get_3d_box_distance(void);
 * Address  : 0xdc3c0 (Size: 128 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute 3D octile/box distance between two Coord3d positions
 * Callers  : 1 -> sound_fn_06e538
 * Callees  : 0 -> 
 ******************************************************************************/
int get_3d_box_distance(void)

{
  ushort *pos_a;
  int val;
  int val_2;
  int val_3;
  ushort *pos_b;
  uint uval;
  uint uval_2;
  int val_4;
  
  uval = (int)((uint)*pos_b - (uint)*pos_a) >> 0x1f;
  val = ((uint)*pos_b - (uint)*pos_a ^ uval) - uval;
  uval = (int)((uint)pos_b[1] - (uint)pos_a[1]) >> 0x1f;
  val_2 = ((uint)pos_b[1] - (uint)pos_a[1] ^ uval) - uval;
  uval = (*(int *)(pos_b + 1) >> 0x10) - (*(int *)(pos_a + 1) >> 0x10);
  uval_2 = (int)uval >> 0x1f;
  val_3 = (uval ^ uval_2) - uval_2;
  val_4 = val;
  if (val <= val_2) {
    val_4 = val_2;
  }
  if ((val_3 < val_4) && (val_3 = val_2, val_2 < val)) {
    val_3 = val;
  }
  return val_3;
}

/******************************************************************************
 * Function : get_chessboard_distance_xy (Original VA: 0xdc4a0, Ghidra: FUN_000dc4a0)
 * Prototype: int get_chessboard_distance_xy(void);
 * Address  : 0xdc4a0 (Size: 44 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute Chebyshev max(|dx|, |dy|) distance between (x1, y1) and (x2, y2)
 * Callers  : 7 -> impset_stack_type_03d3f3, impset_update_creature_control_03d8b0, impset_update_creature_control_03de04, object_process_map_subtile_0c65f0, object_process_map_subtile_0c6758, object_process_map_subtile_0c68b4, object_process_map_subtile_0c69e8
 * Callees  : 0 -> 
 ******************************************************************************/
int get_chessboard_distance_xy(void)

{
  int arg_eax;
  uint uval;
  int arg_ecx;
  int arg_edx;
  int arg_ebx;
  uint uval_2;
  
  uval = arg_eax - arg_ebx;
  uval_2 = arg_edx - arg_ecx;
  if ((int)((uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f)) <
      (int)((uval ^ (int)uval >> 0x1f) - ((int)uval >> 0x1f))) {
    uval_2 = uval;
  }
  return (uval_2 ^ (int)uval_2 >> 0x1f) - ((int)uval_2 >> 0x1f);
}

/******************************************************************************
 * Function : get_2d_angle_between_positions (Original VA: 0xdc4cc, Ghidra: FUN_000dc4cc)
 * Prototype: uint get_2d_angle_between_positions(void);
 * Address  : 0xdc4cc (Size: 219 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute 2D angle (0..2047) from pos1 to pos2
 * Callers  : 1 -> effect_process_thing_entity_026795
 * Callees  : 1 -> ceiling_process_map_subtile_07da18
 ******************************************************************************/
uint get_2d_angle_between_positions(void)

{
  ushort *pos_a;
  int val;
  uint uval;
  uint uval_2;
  int val_2;
  ushort *pos_b;
  int val_3;
  short short_val;
  int val_4;
  undefined8 uval_3;
  
  val = (uint)*pos_b - (uint)*pos_a;
  val_4 = (uint)pos_b[1] - (uint)pos_a[1];
  if (val < 0) {
    val_3 = -0x50;
    val = -val;
  }
  else {
    val_3 = 0x50;
  }
  if (val_4 < 0) {
    val_2 = -0x50;
    val_4 = -val_4;
  }
  else {
    val_2 = 0x50;
  }
  val = val + 1;
  uval = val / 0x50;
  val_4 = val_4 + 1;
  uval_2 = uval;
  if (val != val_4) {
    if (val_4 < val) {
      uval_2 = (val_4 * val_2) / val;
    }
    else {
      val_3 = (val * val_3) / val_4;
      uval_2 = val_4 / 0x50;
      uval = uval_2;
    }
  }
  short_val = (short)*(undefined4 *)pos_a;
  if (uval != 0) {
    do {
      uval_3 = ceiling_process_map_subtile_07da18(short_val);
      uval_2 = (uint)uval_3;
      if ((char)uval_3 != '\0') {
        return uval_2 & 0xffffff00;
      }
      short_val = short_val + (short)val_3;
    } while ((int)((ulonglong)uval_3 >> 0x20) != 1);
  }
  return CONCAT31((int3)(uval_2 >> 8),1);
}

/******************************************************************************
 * Function : get_3d_angles_between_positions (Original VA: 0xdc5c4, Ghidra: FUN_000dc5c4)
 * Prototype: uint get_3d_angles_between_positions(void);
 * Address  : 0xdc5c4 (Size: 572 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute horizontal and vertical angles from pos1 to pos2
 * Callers  : 6 -> anger_fn_0101c2, anger_fn_010229, anger_handle_door_thing_0102c0, effect_illegal_hit_thing_type_02585f, effect_update_creature_and_thing_025af0, creature_update_creature_and_thing_082cac
 * Callees  : 2 -> ceiling_process_map_subtile_07da18, ssprite_return_true_stub
 ******************************************************************************/
uint get_3d_angles_between_positions(void)

{
  char ch;
  byte flag;
  byte flag_2;
  short short_val;
  short short_val_2;
  short short_val_3;
  undefined1 uval;
  ushort uval_2;
  undefined1 uval_3;
  ushort *pos_a;
  int val;
  ushort *pos_b;
  uint uval_4;
  int val_2;
  int val_3;
  byte flag_3;
  undefined4 uStack_48;
  ushort auStack_44 [2];
  undefined1 local_40;
  byte bStack_3f;
  undefined2 uStack_3e;
  ushort local_3c [3];
  undefined2 uStack_36;
  ushort auStack_34 [2];
  undefined1 uStack_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  ushort auStack_2c [2];
  byte *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  flag_3 = 0;
  val = (uint)*pos_b - (uint)*pos_a;
  val_3 = (uint)pos_b[1] - (uint)pos_a[1];
  val_2 = (*(int *)(pos_b + 1) >> 0x10) - (*(int *)(pos_a + 1) >> 0x10);
  ch = *(char *)((int)pos_a + 1);
  if ((ch == *(char *)((int)pos_b + 1)) &&
     (local_20 = CONCAT31((int3)(CONCAT22((short)((uint)((int)pos_a + 1) >> 0x10),
                                          CONCAT11(*(char *)((int)pos_b + 1),ch)) >> 8),
                          *(char *)((int)pos_a + 3)),
     *(char *)((int)pos_a + 3) == *(char *)((int)pos_b + 3))) goto code_r0x000dc95a;
  if (val < 0) {
    val = -val;
    local_18 = -0x100;
  }
  else {
    local_18 = 0x100;
  }
  if (val_3 < 0) {
    val_3 = -val_3;
    local_1c = -0x100;
  }
  else {
    local_1c = 0x100;
  }
  if (val_2 < 0) {
    val_2 = -val_2;
    local_20 = -0x100;
  }
  else {
    local_20 = 0x100;
  }
  local_28 = (byte *)((int)pos_a + 1);
  local_24 = (byte *)((int)pos_b + 1);
  if (val == val_3) {
    flag = *local_24;
    flag_2 = *local_28;
LAB_000dc6f2:
    uval_4 = (uint)flag - (uint)flag_2;
    val = val_3;
  }
  else {
    if (val <= val_3) {
      local_18 = (local_18 * val) / val_3;
      flag = *(byte *)((int)pos_b + 3);
      flag_2 = *(byte *)((int)pos_a + 3);
      goto LAB_000dc6f2;
    }
    local_1c = (local_1c * val_3) / val;
    uval_4 = (uint)*local_24 - (uint)*local_28;
  }
  local_20 = (val_2 * local_20) / val;
  val = (uval_4 ^ (int)uval_4 >> 0x1f) - ((int)uval_4 >> 0x1f);
  uStack_48 = *(undefined4 *)pos_a;
  auStack_44[0] = pos_a[2];
  _local_40 = *pos_a + (short)local_18;
  uStack_3e = pos_a[1] + (short)local_1c;
  local_3c[0] = pos_a[2] + (short)local_20;
  if (val == 0) {
    uval_4 = ssprite_return_true_stub();
    return uval_4;
  }
  do {
    uval_4 = ceiling_process_map_subtile_07da18();
    short_val_3 = uStack_2e;
    uval_3 = uStack_30;
    uval_2 = local_3c[2];
    if ((char)uval_4 != '\0') {
      return uval_4 & 0xffffff00;
    }
    uval_4 = ((bStack_3f / 3) * 3 + (uStack_3e._1_1_ / 3) * 0x300 + 0x101) * 5;
    if ((*(byte *)((int)&g_map_subtiles + uval_4) & 0x40) != 0) {
      return uval_4 & 0xffffff00;
    }
    val_3 = (uint)bStack_3f - (uint)uStack_48._1_1_;
    val_2 = (uint)uStack_3e._1_1_ - (uint)uStack_48._3_1_;
    short_val_2 = uStack_3e;
    if ((val_3 != 0) && (val_2 != 0)) {
      uStack_30 = (undefined1)uStack_48;
      uStack_2e._0_1_ = (undefined1)((uint)uStack_48 >> 0x10);
      uval = (undefined1)uStack_2e;
      local_3c[2] = (ushort)uStack_48;
      short_val = (short)((uint)uStack_48 >> 0x10);
      uStack_36._0_1_ = uval;
      uStack_36._1_1_ = uStack_48._3_1_;
      uStack_2e._1_1_ = uStack_48._3_1_;
      switch(val_3 + val_2 * 2) {
      case 1:
        auStack_2c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        local_3c[2] = local_3c[2] + -0x100;
        uStack_2e._1_1_ = uStack_2e._1_1_ + 1;
        uval_4 = ceiling_process_map_subtile_07da18();
        if ((char)uval_4 != '\0') {
LAB_000dc8ee:
          return uval_4 & 0xffffff00;
        }
        uval_4 = ceiling_process_map_subtile_07da18();
        uval_2 = local_3c[2];
        uval_3 = uStack_30;
        short_val_2 = uStack_3e;
        short_val_3 = CONCAT11(uStack_2e._1_1_,(undefined1)uStack_2e);
        if ((char)uval_4 != '\0') goto LAB_000dc8ee;
        break;
      case 3:
        auStack_2c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        uStack_36._1_1_ = uStack_48._3_1_ + 1;
        bStack_2f = bStack_2f + 1;
        uval_4 = ceiling_process_map_subtile_07da18();
        if ((char)uval_4 != '\0') {
LAB_000dc937:
          return uval_4 & 0xffffff00;
        }
        uval_4 = ceiling_process_map_subtile_07da18();
        uval_2 = local_3c[2];
        uval_3 = uStack_30;
        short_val_2 = uStack_3e;
        short_val_3 = CONCAT11(uStack_2e._1_1_,(undefined1)uStack_2e);
        if ((char)uval_4 != '\0') goto LAB_000dc937;
        break;
      case -3:
        auStack_2c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        local_3c[2] = local_3c[2] + -0x100;
        uStack_36._0_1_ = (undefined1)uStack_2e;
        uStack_2e = short_val + -0x100;
        uval_4 = ceiling_process_map_subtile_07da18();
        if ((char)uval_4 != '\0') {
LAB_000dc84e:
          return uval_4 & 0xffffff00;
        }
        uval_4 = ceiling_process_map_subtile_07da18();
        uval_2 = local_3c[2];
        uval_3 = uStack_30;
        short_val_2 = uStack_3e;
        short_val_3 = uStack_2e;
        if ((char)uval_4 != '\0') goto LAB_000dc84e;
        break;
      case -1:
        auStack_2c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        bStack_2f = uStack_48._1_1_;
        auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
        bStack_2f = bStack_2f + 1;
        uStack_36 = short_val + -0x100;
        uval_4 = ceiling_process_map_subtile_07da18();
        if ((char)uval_4 != '\0') {
LAB_000dc8a2:
          return uval_4 & 0xffffff00;
        }
        uval_4 = ceiling_process_map_subtile_07da18();
        uval_2 = local_3c[2];
        uval_3 = uStack_30;
        short_val_2 = uStack_3e;
        short_val_3 = CONCAT11(uStack_2e._1_1_,(undefined1)uStack_2e);
        if ((char)uval_4 != '\0') goto LAB_000dc8a2;
      }
    }
    uStack_30 = uval_3;
    local_3c[2] = uval_2;
    uStack_3e._1_1_ = (byte)((ushort)short_val_2 >> 8);
    uStack_3e._0_1_ = (undefined1)short_val_2;
    uStack_48 = CONCAT13(uStack_3e._1_1_,CONCAT12((undefined1)uStack_3e,_local_40));
    uStack_3e = short_val_2;
    uStack_2e = short_val_3;
    auStack_44[(uint)flag_3 * -4] = local_3c[(uint)flag_3 * -4];
    _local_40 = _local_40 + (short)local_18;
    uStack_3e = uStack_3e + (short)local_1c;
    local_3c[0] = local_3c[0] + (short)local_20;
    val = val + -1;
  } while (val != 0);
code_r0x000dc95a:
  return CONCAT31((int3)((uint)local_20 >> 8),1);
}

/******************************************************************************
 * Function : ssprite_blit_span_alpha_mode0 (Original VA: 0xdc800, Ghidra: switchD_000dc952::caseD_fffffffd)
 * Prototype: return ssprite_blit_span_alpha_mode0((int3);
 * Address  : 0xdc800 (Size: 89 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Scanline RLE sprite blitter helper (alpha/remap mode 0)
 * Callers  : 0 -> 
 * Callees  : 1 -> ceiling_process_map_subtile_07da18
 ******************************************************************************/
uint switchD_000dc952::caseD_fffffffd
               (undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
               undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short short_val;
  short short_val_2;
  short short_val_3;
  short short_val_4;
  undefined1 uval;
  byte flag;
  undefined1 uval_2;
  uint uval_3;
  int val;
  int val_2;
  int unaff_EBP;
  byte flag_2;
  byte flag_3;
  undefined4 unaff_retaddr;
  
  short_val_4 = (short)((uint)param_2 >> 0x10);
  flag_2 = 0;
code_r0x000dc800:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_4._0_2_ = (short)param_4 + -0x100;
  param_4._2_1_ = param_6._2_1_;
  param_4._3_1_ = param_6._3_1_;
  param_6._2_2_ = (short)((uint)unaff_retaddr >> 0x10) + -0x100;
  param_2._2_2_ = short_val_4;
  uval_3 = ceiling_process_map_subtile_07da18();
  if ((char)uval_3 == '\0') {
    uval_3 = ceiling_process_map_subtile_07da18();
    uval_2 = (undefined1)param_6;
    short_val_3 = param_6._2_2_;
    if ((char)uval_3 == '\0') {
      do {
        do {
          short_val_2 = param_2._2_2_;
          short_val = (short)param_2;
          param_6._0_1_ = uval_2;
          param_2._3_1_ = (byte)((ushort)short_val_2 >> 8);
          flag = param_2._3_1_;
          param_2._2_1_ = (undefined1)short_val_2;
          uval = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,short_val));
          param_2._0_2_ = short_val;
          param_2._2_2_ = short_val_2;
          param_6._2_2_ = short_val_3;
          *(short *)((int)&param_1 + (uint)flag_2 * -8) = (&param_3)[(uint)flag_2 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uval_3 = ceiling_process_map_subtile_07da18();
          short_val_3 = param_6._2_2_;
          uval_2 = (undefined1)param_6;
          if ((char)uval_3 != '\0') {
            return uval_3 & 0xffffff00;
          }
          uval_3 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&g_map_subtiles + uval_3) & 0x40) != 0) {
            return uval_3 & 0xffffff00;
          }
          flag_3 = (byte)((ushort)short_val >> 8);
          val_2 = (uint)param_2._1_1_ - (uint)flag_3;
          val = (uint)param_2._3_1_ - (uint)flag;
        } while ((val_2 == 0) || (val == 0));
        param_6._0_1_ = (undefined1)short_val;
        param_6._2_1_ = uval;
        short_val_4 = param_2._2_2_;
        param_4._2_1_ = param_6._2_1_;
        switch(val_2 + val * 2) {
        case 1:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._0_2_ = short_val + -0x100;
          param_6._3_1_ = param_6._3_1_ + 1;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            uval_2 = (undefined1)param_6;
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case 3:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag + 1;
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._0_2_ = short_val;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            uval_2 = (undefined1)param_6;
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case -3:
          goto code_r0x000dc800;
        case -1:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._2_2_ = short_val_2 + -0x100;
          param_4._0_2_ = short_val;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            uval_2 = (undefined1)param_6;
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        }
      } while( true );
    }
  }
  return uval_3 & 0xffffff00;
}

/******************************************************************************
 * Function : ssprite_blit_span_alpha_mode1 (Original VA: 0xdc859, Ghidra: FUN_000dc859)
 * Prototype: uint ssprite_blit_span_alpha_mode1(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
 * Address  : 0xdc859 (Size: 84 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Scanline RLE sprite blitter helper (alpha/remap mode 1)
 * Callers  : 0 -> 
 * Callees  : 1 -> ceiling_process_map_subtile_07da18
 ******************************************************************************/
uint ssprite_blit_span_alpha_mode1(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short short_val;
  short short_val_2;
  short short_val_3;
  short short_val_4;
  undefined1 uval;
  byte flag;
  undefined1 uval_2;
  uint uval_3;
  int val;
  int val_2;
  int unaff_EBP;
  byte flag_2;
  byte flag_3;
  undefined4 unaff_retaddr;
  
  short_val_4 = (short)((uint)param_2 >> 0x10);
  flag_2 = 0;
code_r0x000dc859:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_6._1_1_ = param_6._1_1_ + 1;
  param_4._2_2_ = (short)((uint)unaff_retaddr >> 0x10) + -0x100;
  param_2._2_2_ = short_val_4;
  uval_3 = ceiling_process_map_subtile_07da18();
  if ((char)uval_3 == '\0') {
    uval_3 = ceiling_process_map_subtile_07da18();
    uval_2 = (undefined1)param_6;
    short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
    if ((char)uval_3 == '\0') {
      do {
        do {
          short_val_2 = param_2._2_2_;
          short_val = (short)param_2;
          param_6._0_1_ = uval_2;
          param_2._3_1_ = (byte)((ushort)short_val_2 >> 8);
          flag = param_2._3_1_;
          param_2._2_1_ = (undefined1)short_val_2;
          uval = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,short_val));
          param_2._0_2_ = short_val;
          param_2._2_2_ = short_val_2;
          param_6._2_2_ = short_val_3;
          *(short *)((int)&param_1 + (uint)flag_2 * -8) = (&param_3)[(uint)flag_2 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uval_3 = ceiling_process_map_subtile_07da18();
          short_val_3 = param_6._2_2_;
          uval_2 = (undefined1)param_6;
          if ((char)uval_3 != '\0') {
            return uval_3 & 0xffffff00;
          }
          uval_3 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&g_map_subtiles + uval_3) & 0x40) != 0) {
            return uval_3 & 0xffffff00;
          }
          flag_3 = (byte)((ushort)short_val >> 8);
          val_2 = (uint)param_2._1_1_ - (uint)flag_3;
          val = (uint)param_2._3_1_ - (uint)flag;
        } while ((val_2 == 0) || (val == 0));
        param_6._0_1_ = (undefined1)short_val;
        param_6._2_1_ = uval;
        short_val_4 = param_2._2_2_;
        param_4._2_1_ = param_6._2_1_;
        switch(val_2 + val * 2) {
        case 1:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._0_2_ = short_val + -0x100;
          param_6._3_1_ = param_6._3_1_ + 1;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case 3:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag + 1;
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._0_2_ = short_val;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case -3:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._0_2_ = short_val + -0x100;
          param_4._2_1_ = param_6._2_1_;
          param_6._2_2_ = short_val_2 + -0x100;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = param_6._2_2_;
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case -1:
          goto code_r0x000dc859;
        }
      } while( true );
    }
  }
  return uval_3 & 0xffffff00;
}

/******************************************************************************
 * Function : ssprite_blit_span_alpha_mode2 (Original VA: 0xdc8ad, Ghidra: FUN_000dc8ad)
 * Prototype: uint ssprite_blit_span_alpha_mode2(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
 * Address  : 0xdc8ad (Size: 76 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Scanline RLE sprite blitter helper (alpha/remap mode 2)
 * Callers  : 0 -> 
 * Callees  : 1 -> ceiling_process_map_subtile_07da18
 ******************************************************************************/
uint ssprite_blit_span_alpha_mode2(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short short_val;
  short short_val_2;
  short short_val_3;
  short short_val_4;
  undefined1 uval;
  byte flag;
  undefined1 uval_2;
  uint uval_3;
  int val;
  int val_2;
  int unaff_EBP;
  byte flag_2;
  byte flag_3;
  undefined4 unaff_retaddr;
  
  short_val_4 = (short)((uint)param_2 >> 0x10);
  flag_2 = 0;
code_r0x000dc8ad:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_4._2_1_ = param_6._2_1_;
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  param_4._3_1_ = param_6._3_1_;
  (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_4._0_2_ = (short)param_4 + -0x100;
  param_6._3_1_ = param_6._3_1_ + '\x01';
  param_2._2_2_ = short_val_4;
  uval_3 = ceiling_process_map_subtile_07da18();
  if ((char)uval_3 == '\0') {
    uval_3 = ceiling_process_map_subtile_07da18();
    uval_2 = (undefined1)param_6;
    short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
    if ((char)uval_3 == '\0') {
      do {
        do {
          short_val_2 = param_2._2_2_;
          short_val = (short)param_2;
          param_6._0_1_ = uval_2;
          param_2._3_1_ = (byte)((ushort)short_val_2 >> 8);
          flag = param_2._3_1_;
          param_2._2_1_ = (undefined1)short_val_2;
          uval = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,short_val));
          param_2._0_2_ = short_val;
          param_2._2_2_ = short_val_2;
          param_6._2_2_ = short_val_3;
          *(short *)((int)&param_1 + (uint)flag_2 * -8) = (&param_3)[(uint)flag_2 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uval_3 = ceiling_process_map_subtile_07da18();
          short_val_3 = param_6._2_2_;
          uval_2 = (undefined1)param_6;
          if ((char)uval_3 != '\0') {
            return uval_3 & 0xffffff00;
          }
          uval_3 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&g_map_subtiles + uval_3) & 0x40) != 0) {
            return uval_3 & 0xffffff00;
          }
          flag_3 = (byte)((ushort)short_val >> 8);
          val_2 = (uint)param_2._1_1_ - (uint)flag_3;
          val = (uint)param_2._3_1_ - (uint)flag;
        } while ((val_2 == 0) || (val == 0));
        param_6._0_1_ = (undefined1)short_val;
        param_6._2_1_ = uval;
        uval = param_6._2_1_;
        short_val_4 = param_2._2_2_;
        switch(val_2 + val * 2) {
        case 1:
          goto code_r0x000dc8ad;
        case 3:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag + 1;
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._0_2_ = short_val;
          param_4._2_1_ = uval;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case -3:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._0_2_ = short_val + -0x100;
          param_4._2_1_ = param_6._2_1_;
          param_6._2_2_ = short_val_2 + -0x100;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = param_6._2_2_;
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case -1:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._2_2_ = short_val_2 + -0x100;
          param_4._0_2_ = short_val;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        }
      } while( true );
    }
  }
  return uval_3 & 0xffffff00;
}

/******************************************************************************
 * Function : ssprite_blit_span_alpha_mode3 (Original VA: 0xdc8f9, Ghidra: FUN_000dc8f9)
 * Prototype: uint ssprite_blit_span_alpha_mode3(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4, undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8, undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
 * Address  : 0xdc8f9 (Size: 97 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Scanline RLE sprite blitter helper (alpha/remap mode 3)
 * Callers  : 0 -> 
 * Callees  : 1 -> ceiling_process_map_subtile_07da18
 ******************************************************************************/
uint ssprite_blit_span_alpha_mode3(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4,
                 undefined2 param_5,undefined4 param_6,undefined2 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  short short_val;
  short short_val_2;
  short short_val_3;
  short short_val_4;
  undefined1 uval;
  byte flag;
  char ch;
  undefined1 uval_2;
  uint uval_3;
  int val;
  int val_2;
  int unaff_EBP;
  byte flag_2;
  byte flag_3;
  undefined4 unaff_retaddr;
  
  short_val_4 = (short)((uint)param_2 >> 0x10);
  flag_2 = 0;
code_r0x000dc8f9:
  param_6._0_1_ = (undefined1)unaff_retaddr;
  param_6._1_1_ = (byte)((uint)unaff_retaddr >> 8);
  param_6._2_1_ = (undefined1)((uint)unaff_retaddr >> 0x10);
  param_4._2_1_ = param_6._2_1_;
  param_6._3_1_ = (byte)((uint)unaff_retaddr >> 0x18);
  ch = param_6._3_1_;
  (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_4._0_2_ = (short)unaff_retaddr;
  (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
  param_4._3_1_ = ch + '\x01';
  param_6._1_1_ = param_6._1_1_ + 1;
  param_2._2_2_ = short_val_4;
  uval_3 = ceiling_process_map_subtile_07da18();
  if ((char)uval_3 == '\0') {
    uval_3 = ceiling_process_map_subtile_07da18();
    uval_2 = (undefined1)param_6;
    short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
    if ((char)uval_3 == '\0') {
      do {
        do {
          short_val_2 = param_2._2_2_;
          short_val = (short)param_2;
          param_6._0_1_ = uval_2;
          param_2._3_1_ = (byte)((ushort)short_val_2 >> 8);
          flag = param_2._3_1_;
          param_2._2_1_ = (undefined1)short_val_2;
          uval = param_2._2_1_;
          unaff_retaddr = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,short_val));
          param_2._0_2_ = short_val;
          param_2._2_2_ = short_val_2;
          param_6._2_2_ = short_val_3;
          *(short *)((int)&param_1 + (uint)flag_2 * -8) = (&param_3)[(uint)flag_2 * -4];
          param_2._0_2_ = (short)param_2 + (short)param_12;
          param_2._2_2_ = param_2._2_2_ + (short)param_11;
          param_3 = param_3 + (short)param_10;
          unaff_EBP = unaff_EBP + -1;
          if (unaff_EBP == 0) {
            return CONCAT31((int3)((uint)param_10 >> 8),1);
          }
          uval_3 = ceiling_process_map_subtile_07da18();
          short_val_3 = param_6._2_2_;
          uval_2 = (undefined1)param_6;
          if ((char)uval_3 != '\0') {
            return uval_3 & 0xffffff00;
          }
          uval_3 = ((param_2._1_1_ / 3) * 3 + (param_2._3_1_ / 3) * 0x300 + 0x101) * 5;
          if ((*(byte *)((int)&g_map_subtiles + uval_3) & 0x40) != 0) {
            return uval_3 & 0xffffff00;
          }
          flag_3 = (byte)((ushort)short_val >> 8);
          val_2 = (uint)param_2._1_1_ - (uint)flag_3;
          val = (uint)param_2._3_1_ - (uint)flag;
        } while ((val_2 == 0) || (val == 0));
        param_6._0_1_ = (undefined1)short_val;
        param_6._2_1_ = uval;
        uval = param_6._2_1_;
        short_val_4 = param_2._2_2_;
        switch(val_2 + val * 2) {
        case 1:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._0_2_ = short_val + -0x100;
          param_6._3_1_ = param_6._3_1_ + 1;
          param_4._2_1_ = uval;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case 3:
          goto code_r0x000dc8f9;
        case -3:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._0_2_ = short_val + -0x100;
          param_4._2_1_ = param_6._2_1_;
          param_6._2_2_ = short_val_2 + -0x100;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = param_6._2_2_;
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        case -1:
          param_6._3_1_ = flag;
          (&param_7)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_4._3_1_ = flag;
          param_6._1_1_ = flag_3;
          (&param_5)[(uint)flag_2 * -4] = *(undefined2 *)((int)&param_1 + (uint)flag_2 * -8);
          param_6._1_1_ = param_6._1_1_ + 1;
          param_4._2_2_ = short_val_2 + -0x100;
          param_4._0_2_ = short_val;
          uval_3 = ceiling_process_map_subtile_07da18();
          if ((char)uval_3 == '\0') {
            uval_3 = ceiling_process_map_subtile_07da18();
            uval_2 = (undefined1)param_6;
            short_val_3 = CONCAT11(param_6._3_1_,param_6._2_1_);
            if ((char)uval_3 == '\0') break;
          }
          return uval_3 & 0xffffff00;
        }
      } while( true );
    }
  }
  return uval_3 & 0xffffff00;
}

/******************************************************************************
 * Function : ssprite_return_true_stub (Original VA: 0xdc95a, Ghidra: FUN_000dc95a)
 * Prototype: undefined1 ssprite_return_true_stub(void);
 * Address  : 0xdc95a (Size: 11 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Constant true (1) return stub
 * Callers  : 1 -> get_3d_angles_between_positions
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 ssprite_return_true_stub(void)

{
  return 1;
}

/******************************************************************************
 * Function : move_coord3d_along_angle_checked (Original VA: 0xdc984, Ghidra: FUN_000dc984)
 * Prototype: undefined4 move_coord3d_along_angle_checked(void);
 * Address  : 0xdc984 (Size: 887 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Advance Coord3d position along angle and speed with map bounds clamp
 * Callers  : 1 -> anger_handle_door_thing_0102c0
 * Callees  : 1 -> ceiling_fn_07daac
 ******************************************************************************/
undefined4 move_coord3d_along_angle_checked(void)

{
  byte flag;
  byte flag_2;
  short short_val;
  short short_val_2;
  undefined1 uval;
  ushort uval_2;
  char ch;
  short short_val_3;
  ushort *pos_a;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  ushort *arg_edx;
  uint uval_3;
  int val_3;
  byte flag_3;
  undefined4 uStack_48;
  ushort auStack_44 [2];
  undefined1 local_40;
  byte local_3f;
  undefined2 local_3e;
  ushort auStack_3c [3];
  undefined2 uStack_36;
  ushort auStack_34 [2];
  undefined1 local_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  ushort local_2c [2];
  byte *local_28;
  byte *local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  flag_3 = 0;
  val = (uint)*arg_edx - (uint)*pos_a;
  val_3 = (uint)arg_edx[1] - (uint)pos_a[1];
  val_2 = (*(int *)(arg_edx + 1) >> 0x10) - (*(int *)(pos_a + 1) >> 0x10);
  if ((*(char *)((int)pos_a + 1) == *(char *)((int)arg_edx + 1)) &&
     (*(char *)((int)pos_a + 3) == *(char *)((int)arg_edx + 3))) {
    return 1;
  }
  if (val < 0) {
    val = -val;
    local_1c = -0x100;
  }
  else {
    local_1c = 0x100;
  }
  if (val_3 < 0) {
    val_3 = -val_3;
    local_18 = -0x100;
  }
  else {
    local_18 = 0x100;
  }
  if (val_2 < 0) {
    val_2 = -val_2;
    local_14 = -0x100;
  }
  else {
    local_14 = 0x100;
  }
  local_28 = (byte *)((int)pos_a + 1);
  local_24 = (byte *)((int)arg_edx + 1);
  if (val == val_3) {
    flag = *local_24;
    flag_2 = *local_28;
  }
  else {
    if (val_3 < val) {
      local_18 = (local_18 * val_3) / val;
      uval_3 = (uint)*local_24 - (uint)*local_28;
      goto LAB_000dcac5;
    }
    local_1c = (local_1c * val) / val_3;
    flag = *(byte *)((int)arg_edx + 3);
    flag_2 = *(byte *)((int)pos_a + 3);
  }
  uval_3 = (uint)flag - (uint)flag_2;
  val = val_3;
LAB_000dcac5:
  local_14 = (val_2 * local_14) / val;
  uStack_48 = *(undefined4 *)pos_a;
  auStack_44[0] = pos_a[2];
  short_val_3 = *pos_a + (short)local_1c;
  uStack_2e = pos_a[1] + (short)local_18;
  local_2c[0] = pos_a[2] + (short)local_14;
  if ((uval_3 ^ (int)uval_3 >> 0x1f) != (int)uval_3 >> 0x1f) {
    do {
      _local_30 = short_val_3;
      ch = ceiling_fn_07daac();
      uval_2 = auStack_3c[2];
      short_val_2 = local_3e;
      uval = local_40;
      if (ch != '\0') {
        return 0;
      }
      val = extraout_ECX;
      short_val = uStack_2e;
      if (((uint)bStack_2f - (uint)uStack_48._1_1_ != 0) &&
         ((uint)uStack_2e._1_1_ - (uint)uStack_48._3_1_ != 0)) {
        local_40 = (undefined1)uStack_48;
        local_3e._0_1_ = (undefined1)((uint)uStack_48 >> 0x10);
        auStack_3c[2] = (ushort)uStack_48;
        short_val_3 = (short)((uint)uStack_48 >> 0x10);
        uStack_36._0_1_ = (undefined1)local_3e;
        local_3e._1_1_ = uStack_48._3_1_;
        uStack_36._1_1_ = uStack_48._3_1_;
        switch(((uint)uStack_2e._1_1_ - (uint)uStack_48._3_1_) * 2 +
               ((uint)bStack_2f - (uint)uStack_48._1_1_)) {
        case 1:
          auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          auStack_3c[2] = auStack_3c[2] + -0x100;
          local_3e._1_1_ = uStack_48._3_1_ + 1;
          local_3f = uStack_48._1_1_;
          ch = ceiling_fn_07daac();
          if (ch != '\0') {
            return 0;
          }
          ch = ceiling_fn_07daac();
          val = extraout_ECX_02;
          uval = local_40;
          uval_2 = auStack_3c[2];
          short_val = uStack_2e;
          short_val_2 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
          if (ch != '\0') {
            return 0;
          }
          break;
        case 3:
          auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          uStack_36._1_1_ = uStack_48._3_1_ + 1;
          local_3f = uStack_48._1_1_ + 1;
          ch = ceiling_fn_07daac();
          if (ch != '\0') {
            return 0;
          }
          ch = ceiling_fn_07daac();
          val = extraout_ECX_03;
          uval = local_40;
          uval_2 = auStack_3c[2];
          short_val = uStack_2e;
          short_val_2 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
          if (ch != '\0') {
            return 0;
          }
          break;
        case 0xfffffffd:
          auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          auStack_3c[2] = auStack_3c[2] + -0x100;
          local_3f = uStack_48._1_1_;
          local_3e = short_val_3 + -0x100;
          ch = ceiling_fn_07daac();
          if (ch != '\0') {
            return 0;
          }
          ch = ceiling_fn_07daac();
          val = extraout_ECX_00;
          uval = local_40;
          uval_2 = auStack_3c[2];
          short_val = uStack_2e;
          short_val_2 = local_3e;
          if (ch != '\0') {
            return 0;
          }
          break;
        case 0xffffffff:
          auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          auStack_34[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
          local_3f = uStack_48._1_1_ + 1;
          uStack_36 = short_val_3 + -0x100;
          ch = ceiling_fn_07daac();
          if (ch != '\0') {
            return 0;
          }
          ch = ceiling_fn_07daac();
          val = extraout_ECX_01;
          uval = local_40;
          uval_2 = auStack_3c[2];
          short_val = uStack_2e;
          short_val_2 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
          if (ch != '\0') {
            return 0;
          }
        }
      }
      auStack_3c[2] = uval_2;
      local_40 = uval;
      uStack_2e._1_1_ = (byte)((ushort)short_val >> 8);
      uStack_2e._0_1_ = (undefined1)short_val;
      short_val_3 = _local_30 + (short)local_1c;
      uStack_48 = CONCAT13(uStack_2e._1_1_,CONCAT12((undefined1)uStack_2e,_local_30));
      local_3e = short_val_2;
      uStack_2e = short_val;
      auStack_44[(uint)flag_3 * -4] = local_2c[(uint)flag_3 * -4];
      uStack_2e = uStack_2e + (short)local_18;
      local_2c[0] = local_2c[0] + (short)local_14;
    } while (val != 1);
  }
  return 1;
}

/******************************************************************************
 * Function : can_thing_traverse_subtile (Original VA: 0xdccfc, Ghidra: FUN_000dccfc)
 * Prototype: undefined8 can_thing_traverse_subtile(void);
 * Address  : 0xdccfc (Size: 41 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Check whether Thing can move through target subtile
 * Callers  : 0 -> 
 * Callees  : 2 -> ceiling_process_map_subtile_07da18, move_fn_0b3afc
 ******************************************************************************/
undefined8 can_thing_traverse_subtile(void)

{
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  
  val = move_fn_0b3afc();
  if (val != 0) {
    return CONCAT44(arg_edx,CONCAT31((int3)((uint)val >> 8),1));
  }
  uval = ceiling_process_map_subtile_07da18();
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : trace_line_of_sight_2d (Original VA: 0xdcd44, Ghidra: FUN_000dcd44)
 * Prototype: uint trace_line_of_sight_2d(void);
 * Address  : 0xdcd44 (Size: 1224 bytes)
 * Module   : ssprite.cpp [address_order_boundary_interpolation]
 * Purpose  : Raymarch 2D line of sight between two Coord3d positions
 * Callers  : 1 -> anger_fn_010229
 * Callees  : 2 -> ceiling_process_map_subtile_07da18, move_fn_0b3afc
 ******************************************************************************/
uint trace_line_of_sight_2d(void)

{
  byte flag;
  byte flag_2;
  short short_val;
  short short_val_2;
  short short_val_3;
  ushort uval;
  undefined1 uval_2;
  char extraout_AL;
  char ch;
  ushort *pos_a;
  int val;
  int val_2;
  int val_3;
  uint uval_3;
  int val_4;
  uint3 uval_4;
  uint3 extraout_var;
  ushort *pos_b;
  short short_val_4;
  byte flag_3;
  undefined1 local_58;
  byte bStack_57;
  undefined2 uStack_56;
  ushort auStack_54 [3];
  undefined2 uStack_4e;
  ushort auStack_4c [2];
  undefined4 local_48;
  ushort auStack_44 [2];
  undefined1 local_40;
  byte local_3f;
  undefined2 local_3e;
  ushort auStack_3c [2];
  byte *local_38;
  byte *local_34;
  byte *local_30;
  int local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  
  short_val_2 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
  flag_3 = 0;
  val = (uint)*pos_b - (uint)*pos_a;
  val_2 = (uint)pos_b[1] - (uint)pos_a[1];
  val_3 = (*(int *)(pos_b + 1) >> 0x10) - (*(int *)(pos_a + 1) >> 0x10);
  ch = *(char *)((int)pos_a + 1);
  if ((ch != *(char *)((int)pos_b + 1)) ||
     (val_4 = CONCAT31((int3)(CONCAT22((short)((uint)((int)pos_a + 1) >> 0x10),
                                        CONCAT11(*(char *)((int)pos_b + 1),ch)) >> 8),
                        *(char *)((int)pos_a + 3)),
     *(char *)((int)pos_a + 3) != *(char *)((int)pos_b + 3))) {
    if (val < 0) {
      val = -val;
      local_1c = -0x100;
    }
    else {
      local_1c = 0x100;
    }
    if (val_2 < 0) {
      val_2 = -val_2;
      local_24 = -0x100;
    }
    else {
      local_24 = 0x100;
    }
    if (val_3 < 0) {
      val_3 = -val_3;
      local_20 = -0x100;
    }
    else {
      local_20 = 0x100;
    }
    local_34 = (byte *)((int)pos_a + 1);
    local_38 = (byte *)((int)pos_b + 1);
    if (val == val_2) {
      uval_3 = (uint)*local_38 - (uint)*local_34;
    }
    else {
      if (val_2 < val) {
        local_24 = (local_24 * val_2) / val;
        flag = *local_38;
        flag_2 = *local_34;
        val_2 = val;
      }
      else {
        local_1c = (local_1c * val) / val_2;
        flag = *(byte *)((int)pos_b + 3);
        flag_2 = *(byte *)((int)pos_a + 3);
      }
      uval_3 = (uint)flag - (uint)flag_2;
    }
    local_20 = (val_3 * local_20) / val_2;
    local_2c = (uval_3 ^ (int)uval_3 >> 0x1f) - ((int)uval_3 >> 0x1f);
    local_48 = *(undefined4 *)pos_a;
    auStack_44[0] = pos_a[2];
    val_2 = CONCAT22((short)((uint)local_2c >> 0x10),*pos_a) + local_1c;
    short_val_4 = (short)val_2;
    val_2 = CONCAT22((short)((uint)val_2 >> 0x10),pos_a[1]) + local_24;
    uStack_56 = (short)val_2;
    val_4 = CONCAT22((short)((uint)val_2 >> 0x10),pos_a[2]) + local_20;
    auStack_54[0] = (ushort)val_4;
    if (local_2c != 0) {
      local_30 = &local_3f;
      local_28 = &local_3f;
      local_18 = &bStack_57;
      do {
        bStack_57 = (byte)((ushort)short_val_4 >> 8);
        local_58 = (undefined1)short_val_4;
        uStack_4e = short_val_2;
        val_2 = move_fn_0b3afc();
        if (val_2 == 0) {
          ceiling_process_map_subtile_07da18();
          ch = extraout_AL;
          uval_4 = extraout_var;
          short_val_3 = uStack_56;
          short_val_2 = uStack_4e;
          short_val_4 = local_3e;
        }
        else {
          uval_4 = (uint3)((uint)val_2 >> 8);
          ch = '\x01';
          short_val_3 = uStack_56;
          short_val_2 = uStack_4e;
          short_val_4 = local_3e;
        }
        uval_2 = local_40;
        uval = auStack_54[2];
        uStack_56._1_1_ = (byte)((ushort)short_val_3 >> 8);
        if (ch != '\0') {
          return (uint)uval_4 << 8;
        }
        uval_3 = ((bStack_57 / 3) * 3 + (uStack_56._1_1_ / 3) * 0x300 + 0x101) * 5;
        if ((*(byte *)((int)&g_map_subtiles + uval_3) & 0x40) != 0) {
          return uval_3 & 0xffffff00;
        }
        val_2 = (uint)bStack_57 - (uint)local_48._1_1_;
        uStack_4e._1_1_ = local_48._3_1_;
        val = (uint)uStack_56._1_1_ - (uint)local_48._3_1_;
        if ((val_2 != 0) && (val != 0)) {
          local_40 = (undefined1)local_48;
          local_3e._0_1_ = (undefined1)((uint)local_48 >> 0x10);
          uStack_4e._0_1_ = (undefined1)local_3e;
          auStack_54[2] = (ushort)local_48;
          short_val = (short)((uint)local_48 >> 0x10);
          local_3e._1_1_ = local_48._3_1_;
          uStack_56 = short_val_3;
          switch(val_2 + val * 2) {
          case 1:
            auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            auStack_54[2] = auStack_54[2] + -0x100;
            local_3e._1_1_ = local_3e._1_1_ + 1;
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
            }
            if ((char)uval_3 != '\0') {
LAB_000dd15a:
              return uval_3 & 0xffffff00;
            }
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
              short_val_3 = uStack_56;
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
              short_val_3 = uStack_56;
            }
            uval = auStack_54[2];
            uval_2 = local_40;
            short_val_4 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
            short_val_2 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
            if ((char)uval_3 != '\0') goto LAB_000dd15a;
            break;
          case 3:
            auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            uStack_4e._1_1_ = uStack_4e._1_1_ + 1;
            local_3f = local_3f + 1;
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
            }
            if ((char)uval_3 != '\0') {
LAB_000dd1de:
              return uval_3 & 0xffffff00;
            }
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
              short_val_3 = uStack_56;
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
              short_val_3 = uStack_56;
            }
            uval = auStack_54[2];
            uval_2 = local_40;
            short_val_4 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
            short_val_2 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
            if ((char)uval_3 != '\0') goto LAB_000dd1de;
            break;
          case -3:
            auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            auStack_54[2] = auStack_54[2] + -0x100;
            local_3e = short_val + -0x100;
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
            }
            if ((char)uval_3 != '\0') {
LAB_000dd04c:
              return uval_3 & 0xffffff00;
            }
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
              short_val_3 = uStack_56;
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
              short_val_3 = uStack_56;
            }
            short_val_2 = CONCAT11(uStack_4e._1_1_,(undefined1)uStack_4e);
            uval = auStack_54[2];
            uval_2 = local_40;
            short_val_4 = local_3e;
            if ((char)uval_3 != '\0') goto LAB_000dd04c;
            break;
          case -1:
            auStack_3c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            local_3f = local_48._1_1_;
            auStack_4c[(uint)flag_3 * -4] = auStack_44[(uint)flag_3 * -4];
            uStack_4e = short_val + -0x100;
            local_3f = local_3f + 1;
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
            }
            if ((char)uval_3 != '\0') {
LAB_000dd0d7:
              return uval_3 & 0xffffff00;
            }
            val_2 = move_fn_0b3afc();
            if (val_2 == 0) {
              uval_3 = ceiling_process_map_subtile_07da18();
              short_val_3 = uStack_56;
            }
            else {
              uval_3 = CONCAT31((int3)((uint)val_2 >> 8),1);
              short_val_3 = uStack_56;
            }
            uval = auStack_54[2];
            uval_2 = local_40;
            short_val_4 = CONCAT11(local_3e._1_1_,(undefined1)local_3e);
            short_val_2 = uStack_4e;
            if ((char)uval_3 != '\0') goto LAB_000dd0d7;
          }
        }
        local_40 = uval_2;
        auStack_54[2] = uval;
        val_2 = local_1c;
        uStack_56._1_1_ = (byte)((ushort)short_val_3 >> 8);
        uStack_56._0_1_ = (undefined1)short_val_3;
        local_48 = CONCAT13(uStack_56._1_1_,
                            CONCAT12((undefined1)uStack_56,CONCAT11(bStack_57,local_58)));
        local_3e = short_val_4;
        auStack_44[(uint)flag_3 * -4] = auStack_54[(uint)flag_3 * -4];
        short_val_4 = CONCAT11(bStack_57,local_58) + (short)val_2;
        uStack_56 = short_val_3 + (short)local_24;
        auStack_54[0] = auStack_54[0] + (short)local_20;
        local_2c = local_2c + -1;
        if (local_2c == 0) {
          return CONCAT31((int3)((uint)local_20 >> 8),1);
        }
      } while( true );
    }
  }
  return CONCAT31((int3)((uint)val_4 >> 8),1);
}

