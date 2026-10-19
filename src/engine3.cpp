/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: engine3.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 36
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : engine3_clip_and_emit_textured_tri_mode0 (Original VA: 0x948a0, Ghidra: FUN_000948a0)
 * Prototype: void engine3_clip_and_emit_textured_tri_mode0(undefined4 param_1);
 * Address  : 0x948a0 (Size: 3606 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 0)
 * Callers  : 0 -> 
 * Callees  : 1 -> draw_fn_094824
 ******************************************************************************/
void engine3_clip_and_emit_textured_tri_mode0(undefined4 param_1)

{
  undefined1 *poly_write_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int *arg_eax;
  int val;
  undefined2 arg_cx;
  int extraout_ECX;
  int extraout_ECX_00;
  int *tri_v1;
  int *arg_ebx;
  undefined4 unaff_ESI;
  undefined4 *poly_write_ptr_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *poly_write_ptr_4;
  undefined4 *word_ptr_3;
  byte flag;
  undefined4 unaff_retaddr;
  int local_20;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  flag = 0;
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_eax + 2) & *(ushort *)(tri_v1 + 2) & 0x1f8) == 0)
  {
    val = (*tri_v1 - *arg_eax) * (arg_ebx[1] - tri_v1[1]) -
            (*arg_ebx - *tri_v1) * (tri_v1[1] - arg_eax[1]);
  }
  else {
    val = 0;
  }
  if (0 < val) {
    val = arg_eax[6];
    if (arg_eax[6] < tri_v1[6]) {
      val = tri_v1[6];
    }
    if (val < arg_ebx[6]) {
      val = arg_ebx[6];
    }
    val = (int)((val + (val >> 0x1f) * -0x10) - (uint)((val >> 0x1f) << 3 < 0)) >> 4;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      if (((*(ushort *)(arg_ebx + 2) | *(ushort *)(arg_eax + 2) | *(ushort *)(tri_v1 + 2)) & 3) !=
          0) {
        poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
        g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
        *poly_write_ptr = (&g_data_00191d6c)
                  [((*(ushort *)(arg_ebx + 2) & 0xff) & 0xffffff03) * 0x10 +
                   ((*(ushort *)(tri_v1 + 2) & 0xff) & 0xffffff03) +
                   ((*(ushort *)(arg_eax + 2) & 0xff) & 0xffffff03) * 4];
        uval = (&g_key_to_ascii_table)[val];
        *(undefined1 *)(poly_write_ptr_2 + 1) = 9;
        *poly_write_ptr_2 = uval;
        (&g_key_to_ascii_table)[val] = poly_write_ptr_2;
        *(undefined2 *)((int)poly_write_ptr_2 + 6) = arg_cx;
        draw_fn_094824(param_1);
        draw_fn_094824(unaff_retaddr);
        draw_fn_094824(unaff_ESI);
        poly_write_ptr_3 = g_render_poly_write_ptr;
        if (0x1f < (int)poly_write_ptr_2[8]) {
          if (0x1f < (int)poly_write_ptr_2[0xd]) {
            if (*(int *)(local_20 + 0x18) < 0x20) {
              *(undefined *)((int)g_render_poly_write_ptr + 5) =
                   (&g_data_00191d6c)
                   [((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03) +
                    (uint)(*(ushort *)(poly_write_ptr_2 + 4) & 3) * 4 + (*(ushort *)(local_20 + 8) & 3) * 0x10
                   ];
              uval = (&g_key_to_ascii_table)[val];
              *(undefined1 *)(g_render_poly_write_ptr + 1) = 9;
              *g_render_poly_write_ptr = uval;
              (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
              *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
              poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
              poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
              (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
              poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
              poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
              (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
              poly_write_ptr_4 = g_render_poly_write_ptr + (uint)flag * -2 + 0xd;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
              g_render_poly_write_ptr[0xc] = poly_write_ptr_2[0xc];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              poly_write_ptr_4 = g_render_poly_write_ptr + (uint)flag * -2 + 8;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
              g_render_poly_write_ptr[7] = poly_write_ptr_2[7];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (poly_write_ptr_2[8] - *(int *)(local_20 + 0x18));
              g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
              poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                             ((poly_write_ptr_2[6] - *(int *)(local_20 + 0x10)) * val >> 8);
              poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                             ((poly_write_ptr_2[7] - *(int *)(local_20 + 0x14)) * val >> 8);
              poly_write_ptr_2[0x19] = 0x20;
              (*g_engine3_bss_00388304)(unaff_ESI,poly_write_ptr_2 + 0x14,poly_write_ptr_2 + 0x17);
              poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[4] - poly_write_ptr_2[0xe]) * val >> 8);
              poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[5] - poly_write_ptr_2[0xf]) * val >> 8);
              poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0x10]) * val >> 8);
              poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
              poly_write_ptr_3[2] = poly_write_ptr_2[0xc];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              poly_write_ptr_3[0x11] = poly_write_ptr_2[0x17];
              poly_write_ptr_3[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 0x18];
              (poly_write_ptr_3 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1];
              poly_write_ptr_3[0x14] = poly_write_ptr_2[0xb];
              poly_write_ptr_3[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
              (poly_write_ptr_3 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
              val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (poly_write_ptr_2[0xd] - *(int *)(local_20 + 0x18));
              poly_write_ptr_3[0x17] = *(int *)(local_20 + 0x10) +
                             ((poly_write_ptr_2[0xb] - *(int *)(local_20 + 0x10)) * val >> 8);
              poly_write_ptr_3[0x18] = *(int *)(local_20 + 0x14) +
                             ((poly_write_ptr_2[0xc] - *(int *)(local_20 + 0x14)) * val >> 8);
              poly_write_ptr_3[0x19] = 0x20;
              (*g_engine3_bss_00388304)();
              poly_write_ptr_3[0xe] = ((poly_write_ptr_3[9] - poly_write_ptr_3[0xe]) * val >> 8) + poly_write_ptr_3[0xe];
              poly_write_ptr_3[0xf] = poly_write_ptr_3[0xf] + ((poly_write_ptr_3[10] - poly_write_ptr_3[0xf]) * val >> 8);
              poly_write_ptr_3[0x10] = ((poly_write_ptr_3[0xb] - poly_write_ptr_3[0x10]) * val >> 8) + poly_write_ptr_3[0x10];
              return;
            }
            poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
            poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
            poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
            poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
            poly_write_ptr_3 = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
            poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
            poly_write_ptr_2[(uint)flag * -2 + 0x18] = *poly_write_ptr_3;
            (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] =
                 poly_write_ptr_3[(uint)flag * -2 + 1];
            return;
          }
          if (*(int *)(local_20 + 0x18) < 0x20) {
            val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (int)(poly_write_ptr_2[8] - poly_write_ptr_2[0xd]);
            poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * val >> 8);
            poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((poly_write_ptr_2[7] - poly_write_ptr_2[0xc]) * val >> 8);
            poly_write_ptr_2[0x16] = 0x20;
            (*g_engine3_bss_00388304)();
            poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[4] - poly_write_ptr_2[9]) * val >> 8);
            poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[5] - poly_write_ptr_2[10]) * val >> 8);
            poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + (val * (poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) >> 8);
            val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                    (poly_write_ptr_2[8] - *(int *)(local_20 + 0x18));
            poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                           ((poly_write_ptr_2[6] - *(int *)(local_20 + 0x10)) * val >> 8);
            poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                           ((poly_write_ptr_2[7] - *(int *)(local_20 + 0x14)) * val >> 8);
            poly_write_ptr_2[0x19] = 0x20;
            (*g_engine3_bss_00388304)();
            poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[4] - poly_write_ptr_2[0xe]) * val >> 8);
            poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[5] - poly_write_ptr_2[0xf]) * val >> 8);
            poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + (val * (poly_write_ptr_2[6] - poly_write_ptr_2[0x10]) >> 8);
            poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
            poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
            return;
          }
          poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
          g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
          *poly_write_ptr = (&g_data_00191d6c)
                    [((*(ushort *)(local_20 + 8) & 0xff) & 0xffffff03) * 0x10 +
                     ((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03) +
                     ((*(ushort *)(poly_write_ptr_2 + 4) & 0xff) & 0xffffff03) * 4];
          uval = (&g_key_to_ascii_table)[val];
          *(undefined1 *)(poly_write_ptr_3 + 1) = 9;
          *poly_write_ptr_3 = uval;
          (&g_key_to_ascii_table)[val] = poly_write_ptr_3;
          *(undefined2 *)((int)poly_write_ptr_3 + 6) = arg_cx;
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
          poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
          (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
          word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_2[(uint)flag * -2 + 0x18] = *word_ptr;
          (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1]
          ;
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 8;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
          poly_write_ptr_3[7] = poly_write_ptr_2[7];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 0xd;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
          poly_write_ptr_3[0xc] = poly_write_ptr_2[0xc];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (int)(poly_write_ptr_2[8] - poly_write_ptr_2[0xd]);
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((poly_write_ptr_2[7] - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_2[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[4] - poly_write_ptr_2[9]) * extraout_ECX >> 8);
          poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[5] - poly_write_ptr_2[10]) * extraout_ECX >> 8);
          poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * extraout_ECX >> 8);
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
          poly_write_ptr_3[2] = poly_write_ptr_2[7];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          poly_write_ptr_3[0x11] = poly_write_ptr_2[0x14];
          poly_write_ptr_3[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 0x15];
          (poly_write_ptr_3 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1];
          word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_3[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_3[(uint)flag * -2 + 0x18] = *word_ptr;
          (poly_write_ptr_3 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1]
          ;
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[0xd]);
          poly_write_ptr_3[0x14] = poly_write_ptr_2[0xb] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_3[0x15] = poly_write_ptr_2[0xc] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_3[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_3[9] = poly_write_ptr_3[9] + ((poly_write_ptr_3[0xe] - poly_write_ptr_3[9]) * extraout_ECX_00 >> 8);
          poly_write_ptr_3[10] = poly_write_ptr_3[10] + ((poly_write_ptr_3[0xf] - poly_write_ptr_3[10]) * extraout_ECX_00 >> 8);
          poly_write_ptr_3[0xb] = ((poly_write_ptr_3[0x10] - poly_write_ptr_3[0xb]) * extraout_ECX_00 >> 8) + poly_write_ptr_3[0xb];
          return;
        }
        if ((int)poly_write_ptr_2[0xd] < 0x20) {
          poly_write_ptr_3 = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_2[(uint)flag * -2 + 0x18] = *poly_write_ptr_3;
          (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = poly_write_ptr_3[(uint)flag * -2 + 1]
          ;
          val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[8]);
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[6]) * val >> 8);
          poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[7]) * val >> 8);
          poly_write_ptr_2[0x13] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[0xe] - poly_write_ptr_2[4]) * val >> 8);
          poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[0xf] - poly_write_ptr_2[5]) * val >> 8);
          poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0x10] - poly_write_ptr_2[6]) * val >> 8);
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[0xd]);
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_2[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[0xe] - poly_write_ptr_2[9]) * val >> 8);
          poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[0xf] - poly_write_ptr_2[10]) * val >> 8);
          poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[0x10] - poly_write_ptr_2[0xb]) * val >> 8);
          return;
        }
        if (*(int *)(local_20 + 0x18) < 0x20) {
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
          poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
          (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
          val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (int)(poly_write_ptr_2[0xd] - poly_write_ptr_2[8]);
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
          poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((poly_write_ptr_2[0xc] - poly_write_ptr_2[7]) * val >> 8);
          poly_write_ptr_2[0x13] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[9] - poly_write_ptr_2[4]) * val >> 8);
          poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[10] - poly_write_ptr_2[5]) * val >> 8);
          poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
          val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                  (poly_write_ptr_2[0xd] - *(int *)(local_20 + 0x18));
          poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                         ((poly_write_ptr_2[0xb] - *(int *)(local_20 + 0x10)) * val >> 8);
          poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                         ((poly_write_ptr_2[0xc] - *(int *)(local_20 + 0x14)) * val >> 8);
          poly_write_ptr_2[0x19] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[9] - poly_write_ptr_2[0xe]) * val >> 8);
          poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[10] - poly_write_ptr_2[0xf]) * val >> 8);
          poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + (val * (poly_write_ptr_2[0xb] - poly_write_ptr_2[0x10]) >> 8);
          return;
        }
        poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
        g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
        *poly_write_ptr = (&g_data_00191d6c)
                  [(*(ushort *)(local_20 + 8) & 3) * 0x10 +
                   ((*(ushort *)(poly_write_ptr_2 + 4) & 0xff) & 0xffffff03) * 4 +
                   ((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03)];
        uval = (&g_key_to_ascii_table)[val];
        *(undefined1 *)(poly_write_ptr_3 + 1) = 9;
        *poly_write_ptr_3 = uval;
        (&g_key_to_ascii_table)[val] = poly_write_ptr_3;
        *(undefined2 *)((int)poly_write_ptr_3 + 6) = arg_cx;
        poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
        poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
        (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
             (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
        word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
        poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
        poly_write_ptr_2[(uint)flag * -2 + 0x18] = *word_ptr;
        (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 3;
        poly_write_ptr_3[2] = poly_write_ptr_2[2];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 0xd;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
        poly_write_ptr_3[0xc] = poly_write_ptr_2[0xc];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (int)(poly_write_ptr_2[0xd] - poly_write_ptr_2[8]);
        poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((poly_write_ptr_2[0xc] - poly_write_ptr_2[7]) * val >> 8);
        poly_write_ptr_2[0x13] = 0x20;
        (*g_engine3_bss_00388304)();
        poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[9] - poly_write_ptr_2[4]) * val >> 8);
        poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[10] - poly_write_ptr_2[5]) * val >> 8);
        poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 8;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 3;
        poly_write_ptr_3[7] = poly_write_ptr_2[2];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        poly_write_ptr_3[0x14] = poly_write_ptr_2[0x11];
        poly_write_ptr_3[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0x12];
        (poly_write_ptr_3 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
             (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1];
        word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
        poly_write_ptr_3[0x17] = *(undefined4 *)(local_20 + 0x10);
        poly_write_ptr_3[(uint)flag * -2 + 0x18] = *word_ptr;
        (poly_write_ptr_3 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
        val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[8]);
        poly_write_ptr_3[0x11] = poly_write_ptr_2[6] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_3[0x12] = poly_write_ptr_2[7] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[7]) * val >> 8);
        poly_write_ptr_3[0x13] = 0x20;
        (*g_engine3_bss_00388304)();
        poly_write_ptr_3[4] = ((poly_write_ptr_3[0xe] - poly_write_ptr_3[4]) * val >> 8) + poly_write_ptr_3[4];
        poly_write_ptr_3[5] = poly_write_ptr_3[5] + ((poly_write_ptr_3[0xf] - poly_write_ptr_3[5]) * val >> 8);
        poly_write_ptr_3[6] = ((poly_write_ptr_3[0x10] - poly_write_ptr_3[6]) * val >> 8) + poly_write_ptr_3[6];
        return;
      }
      uval = (&g_key_to_ascii_table)[val];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
      *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
      draw_fn_094824(param_1);
      draw_fn_094824(param_1);
      draw_fn_094824(param_1);
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_clip_and_emit_textured_tri_mode1 (Original VA: 0x956b8, Ghidra: FUN_000956b8)
 * Prototype: void engine3_clip_and_emit_textured_tri_mode1(undefined4 param_1);
 * Address  : 0x956b8 (Size: 3606 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 1)
 * Callers  : 1 -> engine3_build_subtile_column_geometry_high
 * Callees  : 1 -> draw_fn_094824
 ******************************************************************************/
void engine3_clip_and_emit_textured_tri_mode1(undefined4 param_1)

{
  undefined1 *poly_write_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int *arg_eax;
  int val;
  undefined2 arg_cx;
  int extraout_ECX;
  int extraout_ECX_00;
  int *tri_v1;
  int *arg_ebx;
  undefined4 unaff_ESI;
  undefined4 *poly_write_ptr_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *poly_write_ptr_4;
  undefined4 *word_ptr_3;
  byte flag;
  undefined4 unaff_retaddr;
  int local_20;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  flag = 0;
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_eax + 2) & *(ushort *)(tri_v1 + 2) & 0x1f8) == 0)
  {
    val = (*tri_v1 - *arg_eax) * (arg_ebx[1] - tri_v1[1]) -
            (*arg_ebx - *tri_v1) * (tri_v1[1] - arg_eax[1]);
  }
  else {
    val = 0;
  }
  if (0 < val) {
    val = arg_eax[6];
    if (arg_eax[6] < tri_v1[6]) {
      val = tri_v1[6];
    }
    if (val < arg_ebx[6]) {
      val = arg_ebx[6];
    }
    val = (int)((val + (val >> 0x1f) * -0x10) - (uint)((val >> 0x1f) << 3 < 0)) >> 4;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      if (((*(ushort *)(arg_ebx + 2) | *(ushort *)(arg_eax + 2) | *(ushort *)(tri_v1 + 2)) & 3) !=
          0) {
        poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
        g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
        *poly_write_ptr = (&g_data_00191d6c)
                  [((*(ushort *)(arg_ebx + 2) & 0xff) & 0xffffff03) * 0x10 +
                   ((*(ushort *)(tri_v1 + 2) & 0xff) & 0xffffff03) +
                   ((*(ushort *)(arg_eax + 2) & 0xff) & 0xffffff03) * 4];
        uval = (&g_key_to_ascii_table)[val];
        *(undefined1 *)(poly_write_ptr_2 + 1) = 9;
        *poly_write_ptr_2 = uval;
        (&g_key_to_ascii_table)[val] = poly_write_ptr_2;
        *(undefined2 *)((int)poly_write_ptr_2 + 6) = arg_cx;
        draw_fn_094824(param_1);
        draw_fn_094824(unaff_retaddr);
        draw_fn_094824(unaff_ESI);
        poly_write_ptr_3 = g_render_poly_write_ptr;
        if (0x1f < (int)poly_write_ptr_2[8]) {
          if (0x1f < (int)poly_write_ptr_2[0xd]) {
            if (*(int *)(local_20 + 0x18) < 0x20) {
              *(undefined *)((int)g_render_poly_write_ptr + 5) =
                   (&g_data_00191d6c)
                   [((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03) +
                    (uint)(*(ushort *)(poly_write_ptr_2 + 4) & 3) * 4 + (*(ushort *)(local_20 + 8) & 3) * 0x10
                   ];
              uval = (&g_key_to_ascii_table)[val];
              *(undefined1 *)(g_render_poly_write_ptr + 1) = 9;
              *g_render_poly_write_ptr = uval;
              (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
              *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
              poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
              poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
              (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
              poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
              poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
              (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
              poly_write_ptr_4 = g_render_poly_write_ptr + (uint)flag * -2 + 0xd;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
              g_render_poly_write_ptr[0xc] = poly_write_ptr_2[0xc];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              poly_write_ptr_4 = g_render_poly_write_ptr + (uint)flag * -2 + 8;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
              g_render_poly_write_ptr[7] = poly_write_ptr_2[7];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (poly_write_ptr_2[8] - *(int *)(local_20 + 0x18));
              g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
              poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                             ((poly_write_ptr_2[6] - *(int *)(local_20 + 0x10)) * val >> 8);
              poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                             ((poly_write_ptr_2[7] - *(int *)(local_20 + 0x14)) * val >> 8);
              poly_write_ptr_2[0x19] = 0x20;
              (*g_engine3_bss_00388304)(unaff_ESI,poly_write_ptr_2 + 0x14,poly_write_ptr_2 + 0x17);
              poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[4] - poly_write_ptr_2[0xe]) * val >> 8);
              poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[5] - poly_write_ptr_2[0xf]) * val >> 8);
              poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0x10]) * val >> 8);
              poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
              poly_write_ptr_3[2] = poly_write_ptr_2[0xc];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              poly_write_ptr_3[0x11] = poly_write_ptr_2[0x17];
              poly_write_ptr_3[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 0x18];
              (poly_write_ptr_3 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1];
              poly_write_ptr_3[0x14] = poly_write_ptr_2[0xb];
              poly_write_ptr_3[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
              (poly_write_ptr_3 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
              val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (poly_write_ptr_2[0xd] - *(int *)(local_20 + 0x18));
              poly_write_ptr_3[0x17] = *(int *)(local_20 + 0x10) +
                             ((poly_write_ptr_2[0xb] - *(int *)(local_20 + 0x10)) * val >> 8);
              poly_write_ptr_3[0x18] = *(int *)(local_20 + 0x14) +
                             ((poly_write_ptr_2[0xc] - *(int *)(local_20 + 0x14)) * val >> 8);
              poly_write_ptr_3[0x19] = 0x20;
              (*g_engine3_bss_00388304)();
              poly_write_ptr_3[0xe] = ((poly_write_ptr_3[9] - poly_write_ptr_3[0xe]) * val >> 8) + poly_write_ptr_3[0xe];
              poly_write_ptr_3[0xf] = poly_write_ptr_3[0xf] + ((poly_write_ptr_3[10] - poly_write_ptr_3[0xf]) * val >> 8);
              poly_write_ptr_3[0x10] = ((poly_write_ptr_3[0xb] - poly_write_ptr_3[0x10]) * val >> 8) + poly_write_ptr_3[0x10];
              return;
            }
            poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
            poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
            poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
            poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
            poly_write_ptr_3 = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
            poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
            poly_write_ptr_2[(uint)flag * -2 + 0x18] = *poly_write_ptr_3;
            (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] =
                 poly_write_ptr_3[(uint)flag * -2 + 1];
            return;
          }
          if (*(int *)(local_20 + 0x18) < 0x20) {
            val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (int)(poly_write_ptr_2[8] - poly_write_ptr_2[0xd]);
            poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * val >> 8);
            poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((poly_write_ptr_2[7] - poly_write_ptr_2[0xc]) * val >> 8);
            poly_write_ptr_2[0x16] = 0x20;
            (*g_engine3_bss_00388304)();
            poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[4] - poly_write_ptr_2[9]) * val >> 8);
            poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[5] - poly_write_ptr_2[10]) * val >> 8);
            poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + (val * (poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) >> 8);
            val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                    (poly_write_ptr_2[8] - *(int *)(local_20 + 0x18));
            poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                           ((poly_write_ptr_2[6] - *(int *)(local_20 + 0x10)) * val >> 8);
            poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                           ((poly_write_ptr_2[7] - *(int *)(local_20 + 0x14)) * val >> 8);
            poly_write_ptr_2[0x19] = 0x20;
            (*g_engine3_bss_00388304)();
            poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[4] - poly_write_ptr_2[0xe]) * val >> 8);
            poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[5] - poly_write_ptr_2[0xf]) * val >> 8);
            poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + (val * (poly_write_ptr_2[6] - poly_write_ptr_2[0x10]) >> 8);
            poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
            poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
            return;
          }
          poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
          g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
          *poly_write_ptr = (&g_data_00191d6c)
                    [((*(ushort *)(local_20 + 8) & 0xff) & 0xffffff03) * 0x10 +
                     ((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03) +
                     ((*(ushort *)(poly_write_ptr_2 + 4) & 0xff) & 0xffffff03) * 4];
          uval = (&g_key_to_ascii_table)[val];
          *(undefined1 *)(poly_write_ptr_3 + 1) = 9;
          *poly_write_ptr_3 = uval;
          (&g_key_to_ascii_table)[val] = poly_write_ptr_3;
          *(undefined2 *)((int)poly_write_ptr_3 + 6) = arg_cx;
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
          poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
          (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
          word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_2[(uint)flag * -2 + 0x18] = *word_ptr;
          (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1]
          ;
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 8;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
          poly_write_ptr_3[7] = poly_write_ptr_2[7];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 0xd;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
          poly_write_ptr_3[0xc] = poly_write_ptr_2[0xc];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (int)(poly_write_ptr_2[8] - poly_write_ptr_2[0xd]);
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((poly_write_ptr_2[7] - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_2[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[4] - poly_write_ptr_2[9]) * extraout_ECX >> 8);
          poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[5] - poly_write_ptr_2[10]) * extraout_ECX >> 8);
          poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * extraout_ECX >> 8);
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
          poly_write_ptr_3[2] = poly_write_ptr_2[7];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          poly_write_ptr_3[0x11] = poly_write_ptr_2[0x14];
          poly_write_ptr_3[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 0x15];
          (poly_write_ptr_3 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1];
          word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_3[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_3[(uint)flag * -2 + 0x18] = *word_ptr;
          (poly_write_ptr_3 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1]
          ;
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[0xd]);
          poly_write_ptr_3[0x14] = poly_write_ptr_2[0xb] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_3[0x15] = poly_write_ptr_2[0xc] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_3[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_3[9] = poly_write_ptr_3[9] + ((poly_write_ptr_3[0xe] - poly_write_ptr_3[9]) * extraout_ECX_00 >> 8);
          poly_write_ptr_3[10] = poly_write_ptr_3[10] + ((poly_write_ptr_3[0xf] - poly_write_ptr_3[10]) * extraout_ECX_00 >> 8);
          poly_write_ptr_3[0xb] = ((poly_write_ptr_3[0x10] - poly_write_ptr_3[0xb]) * extraout_ECX_00 >> 8) + poly_write_ptr_3[0xb];
          return;
        }
        if ((int)poly_write_ptr_2[0xd] < 0x20) {
          poly_write_ptr_3 = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_2[(uint)flag * -2 + 0x18] = *poly_write_ptr_3;
          (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = poly_write_ptr_3[(uint)flag * -2 + 1]
          ;
          val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[8]);
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[6]) * val >> 8);
          poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[7]) * val >> 8);
          poly_write_ptr_2[0x13] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[0xe] - poly_write_ptr_2[4]) * val >> 8);
          poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[0xf] - poly_write_ptr_2[5]) * val >> 8);
          poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0x10] - poly_write_ptr_2[6]) * val >> 8);
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[0xd]);
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_2[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[0xe] - poly_write_ptr_2[9]) * val >> 8);
          poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[0xf] - poly_write_ptr_2[10]) * val >> 8);
          poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[0x10] - poly_write_ptr_2[0xb]) * val >> 8);
          return;
        }
        if (*(int *)(local_20 + 0x18) < 0x20) {
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
          poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
          (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
          val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (int)(poly_write_ptr_2[0xd] - poly_write_ptr_2[8]);
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
          poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((poly_write_ptr_2[0xc] - poly_write_ptr_2[7]) * val >> 8);
          poly_write_ptr_2[0x13] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[9] - poly_write_ptr_2[4]) * val >> 8);
          poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[10] - poly_write_ptr_2[5]) * val >> 8);
          poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
          val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                  (poly_write_ptr_2[0xd] - *(int *)(local_20 + 0x18));
          poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                         ((poly_write_ptr_2[0xb] - *(int *)(local_20 + 0x10)) * val >> 8);
          poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                         ((poly_write_ptr_2[0xc] - *(int *)(local_20 + 0x14)) * val >> 8);
          poly_write_ptr_2[0x19] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[9] - poly_write_ptr_2[0xe]) * val >> 8);
          poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[10] - poly_write_ptr_2[0xf]) * val >> 8);
          poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + (val * (poly_write_ptr_2[0xb] - poly_write_ptr_2[0x10]) >> 8);
          return;
        }
        poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
        g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
        *poly_write_ptr = (&g_data_00191d6c)
                  [(*(ushort *)(local_20 + 8) & 3) * 0x10 +
                   ((*(ushort *)(poly_write_ptr_2 + 4) & 0xff) & 0xffffff03) * 4 +
                   ((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03)];
        uval = (&g_key_to_ascii_table)[val];
        *(undefined1 *)(poly_write_ptr_3 + 1) = 9;
        *poly_write_ptr_3 = uval;
        (&g_key_to_ascii_table)[val] = poly_write_ptr_3;
        *(undefined2 *)((int)poly_write_ptr_3 + 6) = arg_cx;
        poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
        poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
        (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
             (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
        word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
        poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
        poly_write_ptr_2[(uint)flag * -2 + 0x18] = *word_ptr;
        (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 3;
        poly_write_ptr_3[2] = poly_write_ptr_2[2];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 0xd;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
        poly_write_ptr_3[0xc] = poly_write_ptr_2[0xc];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (int)(poly_write_ptr_2[0xd] - poly_write_ptr_2[8]);
        poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((poly_write_ptr_2[0xc] - poly_write_ptr_2[7]) * val >> 8);
        poly_write_ptr_2[0x13] = 0x20;
        (*g_engine3_bss_00388304)();
        poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[9] - poly_write_ptr_2[4]) * val >> 8);
        poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[10] - poly_write_ptr_2[5]) * val >> 8);
        poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 8;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 3;
        poly_write_ptr_3[7] = poly_write_ptr_2[2];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        poly_write_ptr_3[0x14] = poly_write_ptr_2[0x11];
        poly_write_ptr_3[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0x12];
        (poly_write_ptr_3 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
             (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1];
        word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
        poly_write_ptr_3[0x17] = *(undefined4 *)(local_20 + 0x10);
        poly_write_ptr_3[(uint)flag * -2 + 0x18] = *word_ptr;
        (poly_write_ptr_3 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
        val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[8]);
        poly_write_ptr_3[0x11] = poly_write_ptr_2[6] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_3[0x12] = poly_write_ptr_2[7] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[7]) * val >> 8);
        poly_write_ptr_3[0x13] = 0x20;
        (*g_engine3_bss_00388304)();
        poly_write_ptr_3[4] = ((poly_write_ptr_3[0xe] - poly_write_ptr_3[4]) * val >> 8) + poly_write_ptr_3[4];
        poly_write_ptr_3[5] = poly_write_ptr_3[5] + ((poly_write_ptr_3[0xf] - poly_write_ptr_3[5]) * val >> 8);
        poly_write_ptr_3[6] = ((poly_write_ptr_3[0x10] - poly_write_ptr_3[6]) * val >> 8) + poly_write_ptr_3[6];
        return;
      }
      uval = (&g_key_to_ascii_table)[val];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
      *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
      draw_fn_094824(param_1);
      draw_fn_094824(param_1);
      draw_fn_094824(param_1);
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_clip_and_emit_textured_tri_mode2 (Original VA: 0x964d0, Ghidra: FUN_000964d0)
 * Prototype: void engine3_clip_and_emit_textured_tri_mode2(undefined4 param_1);
 * Address  : 0x964d0 (Size: 3606 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Frustum-clip 3D triangle (mask 0x1f8) and emit textured poly (mode 2)
 * Callers  : 1 -> engine3_build_subtile_column_geometry_high
 * Callees  : 1 -> draw_fn_094824
 ******************************************************************************/
void engine3_clip_and_emit_textured_tri_mode2(undefined4 param_1)

{
  undefined1 *poly_write_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int *arg_eax;
  int val;
  undefined2 arg_cx;
  int extraout_ECX;
  int extraout_ECX_00;
  int *tri_v1;
  int *arg_ebx;
  undefined4 unaff_ESI;
  undefined4 *poly_write_ptr_3;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined4 *poly_write_ptr_4;
  undefined4 *word_ptr_3;
  byte flag;
  undefined4 unaff_retaddr;
  int local_20;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  flag = 0;
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_eax + 2) & *(ushort *)(tri_v1 + 2) & 0x1f8) == 0)
  {
    val = (*tri_v1 - *arg_eax) * (arg_ebx[1] - tri_v1[1]) -
            (*arg_ebx - *tri_v1) * (tri_v1[1] - arg_eax[1]);
  }
  else {
    val = 0;
  }
  if (0 < val) {
    val = arg_eax[6];
    if (arg_eax[6] < tri_v1[6]) {
      val = tri_v1[6];
    }
    if (val < arg_ebx[6]) {
      val = arg_ebx[6];
    }
    val = (int)((val + (val >> 0x1f) * -0x10) - (uint)((val >> 0x1f) << 3 < 0)) >> 4;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      if (((*(ushort *)(arg_ebx + 2) | *(ushort *)(arg_eax + 2) | *(ushort *)(tri_v1 + 2)) & 3) !=
          0) {
        poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
        g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
        *poly_write_ptr = (&g_data_00191d6c)
                  [((*(ushort *)(arg_ebx + 2) & 0xff) & 0xffffff03) * 0x10 +
                   ((*(ushort *)(tri_v1 + 2) & 0xff) & 0xffffff03) +
                   ((*(ushort *)(arg_eax + 2) & 0xff) & 0xffffff03) * 4];
        uval = (&g_key_to_ascii_table)[val];
        *(undefined1 *)(poly_write_ptr_2 + 1) = 9;
        *poly_write_ptr_2 = uval;
        (&g_key_to_ascii_table)[val] = poly_write_ptr_2;
        *(undefined2 *)((int)poly_write_ptr_2 + 6) = arg_cx;
        draw_fn_094824(param_1);
        draw_fn_094824(unaff_retaddr);
        draw_fn_094824(unaff_ESI);
        poly_write_ptr_3 = g_render_poly_write_ptr;
        if (0x1f < (int)poly_write_ptr_2[8]) {
          if (0x1f < (int)poly_write_ptr_2[0xd]) {
            if (*(int *)(local_20 + 0x18) < 0x20) {
              *(undefined *)((int)g_render_poly_write_ptr + 5) =
                   (&g_data_00191d6c)
                   [((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03) +
                    (uint)(*(ushort *)(poly_write_ptr_2 + 4) & 3) * 4 + (*(ushort *)(local_20 + 8) & 3) * 0x10
                   ];
              uval = (&g_key_to_ascii_table)[val];
              *(undefined1 *)(g_render_poly_write_ptr + 1) = 9;
              *g_render_poly_write_ptr = uval;
              (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
              *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
              poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
              poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
              (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
              poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
              poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
              (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
              poly_write_ptr_4 = g_render_poly_write_ptr + (uint)flag * -2 + 0xd;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
              g_render_poly_write_ptr[0xc] = poly_write_ptr_2[0xc];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              poly_write_ptr_4 = g_render_poly_write_ptr + (uint)flag * -2 + 8;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
              g_render_poly_write_ptr[7] = poly_write_ptr_2[7];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (poly_write_ptr_2[8] - *(int *)(local_20 + 0x18));
              g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
              poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                             ((poly_write_ptr_2[6] - *(int *)(local_20 + 0x10)) * val >> 8);
              poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                             ((poly_write_ptr_2[7] - *(int *)(local_20 + 0x14)) * val >> 8);
              poly_write_ptr_2[0x19] = 0x20;
              (*g_engine3_bss_00388304)(unaff_ESI,poly_write_ptr_2 + 0x14,poly_write_ptr_2 + 0x17);
              poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[4] - poly_write_ptr_2[0xe]) * val >> 8);
              poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[5] - poly_write_ptr_2[0xf]) * val >> 8);
              poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0x10]) * val >> 8);
              poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
              word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
              poly_write_ptr_3[2] = poly_write_ptr_2[0xc];
              word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
              word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
              *poly_write_ptr_4 = *word_ptr;
              *word_ptr_3 = *word_ptr_2;
              word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
              (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
                   (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
              poly_write_ptr_3[0x11] = poly_write_ptr_2[0x17];
              poly_write_ptr_3[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 0x18];
              (poly_write_ptr_3 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1];
              poly_write_ptr_3[0x14] = poly_write_ptr_2[0xb];
              poly_write_ptr_3[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
              (poly_write_ptr_3 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                   (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
              val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                      (poly_write_ptr_2[0xd] - *(int *)(local_20 + 0x18));
              poly_write_ptr_3[0x17] = *(int *)(local_20 + 0x10) +
                             ((poly_write_ptr_2[0xb] - *(int *)(local_20 + 0x10)) * val >> 8);
              poly_write_ptr_3[0x18] = *(int *)(local_20 + 0x14) +
                             ((poly_write_ptr_2[0xc] - *(int *)(local_20 + 0x14)) * val >> 8);
              poly_write_ptr_3[0x19] = 0x20;
              (*g_engine3_bss_00388304)();
              poly_write_ptr_3[0xe] = ((poly_write_ptr_3[9] - poly_write_ptr_3[0xe]) * val >> 8) + poly_write_ptr_3[0xe];
              poly_write_ptr_3[0xf] = poly_write_ptr_3[0xf] + ((poly_write_ptr_3[10] - poly_write_ptr_3[0xf]) * val >> 8);
              poly_write_ptr_3[0x10] = ((poly_write_ptr_3[0xb] - poly_write_ptr_3[0x10]) * val >> 8) + poly_write_ptr_3[0x10];
              return;
            }
            poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
            poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
            poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
            poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
            poly_write_ptr_3 = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
            poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
            poly_write_ptr_2[(uint)flag * -2 + 0x18] = *poly_write_ptr_3;
            (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] =
                 poly_write_ptr_3[(uint)flag * -2 + 1];
            return;
          }
          if (*(int *)(local_20 + 0x18) < 0x20) {
            val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (int)(poly_write_ptr_2[8] - poly_write_ptr_2[0xd]);
            poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * val >> 8);
            poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((poly_write_ptr_2[7] - poly_write_ptr_2[0xc]) * val >> 8);
            poly_write_ptr_2[0x16] = 0x20;
            (*g_engine3_bss_00388304)();
            poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[4] - poly_write_ptr_2[9]) * val >> 8);
            poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[5] - poly_write_ptr_2[10]) * val >> 8);
            poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + (val * (poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) >> 8);
            val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                    (poly_write_ptr_2[8] - *(int *)(local_20 + 0x18));
            poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                           ((poly_write_ptr_2[6] - *(int *)(local_20 + 0x10)) * val >> 8);
            poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                           ((poly_write_ptr_2[7] - *(int *)(local_20 + 0x14)) * val >> 8);
            poly_write_ptr_2[0x19] = 0x20;
            (*g_engine3_bss_00388304)();
            poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[4] - poly_write_ptr_2[0xe]) * val >> 8);
            poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[5] - poly_write_ptr_2[0xf]) * val >> 8);
            poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + (val * (poly_write_ptr_2[6] - poly_write_ptr_2[0x10]) >> 8);
            poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
            poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
            (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
                 (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
            return;
          }
          poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
          g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
          *poly_write_ptr = (&g_data_00191d6c)
                    [((*(ushort *)(local_20 + 8) & 0xff) & 0xffffff03) * 0x10 +
                     ((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03) +
                     ((*(ushort *)(poly_write_ptr_2 + 4) & 0xff) & 0xffffff03) * 4];
          uval = (&g_key_to_ascii_table)[val];
          *(undefined1 *)(poly_write_ptr_3 + 1) = 9;
          *poly_write_ptr_3 = uval;
          (&g_key_to_ascii_table)[val] = poly_write_ptr_3;
          *(undefined2 *)((int)poly_write_ptr_3 + 6) = arg_cx;
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6];
          poly_write_ptr_2[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 7];
          (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 7)[(uint)flag * -2 + 1];
          word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_2[(uint)flag * -2 + 0x18] = *word_ptr;
          (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1]
          ;
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 8;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
          poly_write_ptr_3[7] = poly_write_ptr_2[7];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 0xd;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
          poly_write_ptr_3[0xc] = poly_write_ptr_2[0xc];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (int)(poly_write_ptr_2[8] - poly_write_ptr_2[0xd]);
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((poly_write_ptr_2[7] - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_2[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[4] - poly_write_ptr_2[9]) * extraout_ECX >> 8);
          poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[5] - poly_write_ptr_2[10]) * extraout_ECX >> 8);
          poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[6] - poly_write_ptr_2[0xb]) * extraout_ECX >> 8);
          poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
          word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 8;
          poly_write_ptr_3[2] = poly_write_ptr_2[7];
          word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
          *poly_write_ptr_4 = *word_ptr;
          *word_ptr_3 = *word_ptr_2;
          word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
          (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
               (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
          poly_write_ptr_3[0x11] = poly_write_ptr_2[0x14];
          poly_write_ptr_3[(uint)flag * -2 + 0x12] = poly_write_ptr_2[(uint)flag * -2 + 0x15];
          (poly_write_ptr_3 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1];
          word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_3[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_3[(uint)flag * -2 + 0x18] = *word_ptr;
          (poly_write_ptr_3 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1]
          ;
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[0xd]);
          poly_write_ptr_3[0x14] = poly_write_ptr_2[0xb] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_3[0x15] = poly_write_ptr_2[0xc] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_3[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_3[9] = poly_write_ptr_3[9] + ((poly_write_ptr_3[0xe] - poly_write_ptr_3[9]) * extraout_ECX_00 >> 8);
          poly_write_ptr_3[10] = poly_write_ptr_3[10] + ((poly_write_ptr_3[0xf] - poly_write_ptr_3[10]) * extraout_ECX_00 >> 8);
          poly_write_ptr_3[0xb] = ((poly_write_ptr_3[0x10] - poly_write_ptr_3[0xb]) * extraout_ECX_00 >> 8) + poly_write_ptr_3[0xb];
          return;
        }
        if ((int)poly_write_ptr_2[0xd] < 0x20) {
          poly_write_ptr_3 = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
          poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
          poly_write_ptr_2[(uint)flag * -2 + 0x18] = *poly_write_ptr_3;
          (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = poly_write_ptr_3[(uint)flag * -2 + 1]
          ;
          val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[8]);
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[6]) * val >> 8);
          poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[7]) * val >> 8);
          poly_write_ptr_2[0x13] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[0xe] - poly_write_ptr_2[4]) * val >> 8);
          poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[0xf] - poly_write_ptr_2[5]) * val >> 8);
          poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0x10] - poly_write_ptr_2[6]) * val >> 8);
          val = ((0x20 - poly_write_ptr_2[0xd]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[0xd]);
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[0xb]) * val >> 8);
          poly_write_ptr_2[0x15] = poly_write_ptr_2[0xc] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[0xc]) * val >> 8);
          poly_write_ptr_2[0x16] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[9] = poly_write_ptr_2[9] + ((poly_write_ptr_2[0xe] - poly_write_ptr_2[9]) * val >> 8);
          poly_write_ptr_2[10] = poly_write_ptr_2[10] + ((poly_write_ptr_2[0xf] - poly_write_ptr_2[10]) * val >> 8);
          poly_write_ptr_2[0xb] = poly_write_ptr_2[0xb] + ((poly_write_ptr_2[0x10] - poly_write_ptr_2[0xb]) * val >> 8);
          return;
        }
        if (*(int *)(local_20 + 0x18) < 0x20) {
          poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
          poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
          (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
               (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
          val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (int)(poly_write_ptr_2[0xd] - poly_write_ptr_2[8]);
          poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
          poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((poly_write_ptr_2[0xc] - poly_write_ptr_2[7]) * val >> 8);
          poly_write_ptr_2[0x13] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[9] - poly_write_ptr_2[4]) * val >> 8);
          poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[10] - poly_write_ptr_2[5]) * val >> 8);
          poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
          val = ((0x20 - *(int *)(local_20 + 0x18)) * 0x100) /
                  (poly_write_ptr_2[0xd] - *(int *)(local_20 + 0x18));
          poly_write_ptr_2[0x17] = *(int *)(local_20 + 0x10) +
                         ((poly_write_ptr_2[0xb] - *(int *)(local_20 + 0x10)) * val >> 8);
          poly_write_ptr_2[0x18] = *(int *)(local_20 + 0x14) +
                         ((poly_write_ptr_2[0xc] - *(int *)(local_20 + 0x14)) * val >> 8);
          poly_write_ptr_2[0x19] = 0x20;
          (*g_engine3_bss_00388304)();
          poly_write_ptr_2[0xe] = poly_write_ptr_2[0xe] + ((poly_write_ptr_2[9] - poly_write_ptr_2[0xe]) * val >> 8);
          poly_write_ptr_2[0xf] = poly_write_ptr_2[0xf] + ((poly_write_ptr_2[10] - poly_write_ptr_2[0xf]) * val >> 8);
          poly_write_ptr_2[0x10] = poly_write_ptr_2[0x10] + (val * (poly_write_ptr_2[0xb] - poly_write_ptr_2[0x10]) >> 8);
          return;
        }
        poly_write_ptr = (undefined1 *)((int)g_render_poly_write_ptr + 5);
        g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1a;
        *poly_write_ptr = (&g_data_00191d6c)
                  [(*(ushort *)(local_20 + 8) & 3) * 0x10 +
                   ((*(ushort *)(poly_write_ptr_2 + 4) & 0xff) & 0xffffff03) * 4 +
                   ((*(ushort *)(poly_write_ptr_2 + 9) & 0xff) & 0xffffff03)];
        uval = (&g_key_to_ascii_table)[val];
        *(undefined1 *)(poly_write_ptr_3 + 1) = 9;
        *poly_write_ptr_3 = uval;
        (&g_key_to_ascii_table)[val] = poly_write_ptr_3;
        *(undefined2 *)((int)poly_write_ptr_3 + 6) = arg_cx;
        poly_write_ptr_2[0x14] = poly_write_ptr_2[0xb];
        poly_write_ptr_2[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0xc];
        (poly_write_ptr_2 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
             (poly_write_ptr_2 + (uint)flag * -2 + 0xc)[(uint)flag * -2 + 1];
        word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
        poly_write_ptr_2[0x17] = *(undefined4 *)(local_20 + 0x10);
        poly_write_ptr_2[(uint)flag * -2 + 0x18] = *word_ptr;
        (poly_write_ptr_2 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 3;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 3;
        poly_write_ptr_3[2] = poly_write_ptr_2[2];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 0xd;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 0xd;
        poly_write_ptr_3[0xc] = poly_write_ptr_2[0xc];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (int)(poly_write_ptr_2[0xd] - poly_write_ptr_2[8]);
        poly_write_ptr_2[0x11] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_2[0x12] = poly_write_ptr_2[7] + ((poly_write_ptr_2[0xc] - poly_write_ptr_2[7]) * val >> 8);
        poly_write_ptr_2[0x13] = 0x20;
        (*g_engine3_bss_00388304)();
        poly_write_ptr_2[4] = poly_write_ptr_2[4] + ((poly_write_ptr_2[9] - poly_write_ptr_2[4]) * val >> 8);
        poly_write_ptr_2[5] = poly_write_ptr_2[5] + ((poly_write_ptr_2[10] - poly_write_ptr_2[5]) * val >> 8);
        poly_write_ptr_2[6] = poly_write_ptr_2[6] + ((poly_write_ptr_2[0xb] - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_4 = poly_write_ptr_3 + (uint)flag * -2 + 8;
        word_ptr = poly_write_ptr_2 + (uint)flag * -2 + 3;
        poly_write_ptr_3[7] = poly_write_ptr_2[2];
        word_ptr_3 = poly_write_ptr_4 + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
        *poly_write_ptr_4 = *word_ptr;
        *word_ptr_3 = *word_ptr_2;
        word_ptr_3[(uint)flag * -2 + 1] = word_ptr_2[(uint)flag * -2 + 1];
        (word_ptr_3 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
             (word_ptr_2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1];
        poly_write_ptr_3[0x14] = poly_write_ptr_2[0x11];
        poly_write_ptr_3[(uint)flag * -2 + 0x15] = poly_write_ptr_2[(uint)flag * -2 + 0x12];
        (poly_write_ptr_3 + (uint)flag * -2 + 0x15)[(uint)flag * -2 + 1] =
             (poly_write_ptr_2 + (uint)flag * -2 + 0x12)[(uint)flag * -2 + 1];
        word_ptr = (undefined4 *)(local_20 + 0x14 + (uint)flag * -8);
        poly_write_ptr_3[0x17] = *(undefined4 *)(local_20 + 0x10);
        poly_write_ptr_3[(uint)flag * -2 + 0x18] = *word_ptr;
        (poly_write_ptr_3 + (uint)flag * -2 + 0x18)[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
        val = ((0x20 - poly_write_ptr_2[8]) * 0x100) / (*(int *)(local_20 + 0x18) - poly_write_ptr_2[8]);
        poly_write_ptr_3[0x11] = poly_write_ptr_2[6] + ((*(int *)(local_20 + 0x10) - poly_write_ptr_2[6]) * val >> 8);
        poly_write_ptr_3[0x12] = poly_write_ptr_2[7] + ((*(int *)(local_20 + 0x14) - poly_write_ptr_2[7]) * val >> 8);
        poly_write_ptr_3[0x13] = 0x20;
        (*g_engine3_bss_00388304)();
        poly_write_ptr_3[4] = ((poly_write_ptr_3[0xe] - poly_write_ptr_3[4]) * val >> 8) + poly_write_ptr_3[4];
        poly_write_ptr_3[5] = poly_write_ptr_3[5] + ((poly_write_ptr_3[0xf] - poly_write_ptr_3[5]) * val >> 8);
        poly_write_ptr_3[6] = ((poly_write_ptr_3[0x10] - poly_write_ptr_3[6]) * val >> 8) + poly_write_ptr_3[6];
        return;
      }
      uval = (&g_key_to_ascii_table)[val];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
      *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
      draw_fn_094824(param_1);
      draw_fn_094824(param_1);
      draw_fn_094824(param_1);
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_emit_unclipped_tri_variant0 (Original VA: 0x98104, Ghidra: FUN_00098104)
 * Prototype: void engine3_emit_unclipped_tri_variant0(void);
 * Address  : 0x98104 (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Emit unclipped 3D triangle primitive (variant 0) into g_render_poly_write_ptr
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_emit_unclipped_tri_variant0(void)

{
  int *poly_write_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int *tri_v0;
  int val;
  undefined2 arg_cx;
  int *arg_edx;
  int *arg_ebx;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_edx + 2) & *(ushort *)(tri_v0 + 2) & 0x1f8) == 0)
  {
    val = (*arg_edx - *tri_v0) * (arg_ebx[1] - arg_edx[1]) -
            (arg_edx[1] - tri_v0[1]) * (*arg_ebx - *arg_edx);
  }
  else {
    val = 0;
  }
  if (0 < val) {
    val = tri_v0[6];
    if (tri_v0[6] < arg_edx[6]) {
      val = arg_edx[6];
    }
    if (val < arg_ebx[6]) {
      val = arg_ebx[6];
    }
    val = (int)((val + (val >> 0x1f) * -0x10) - (uint)((val >> 0x1f) << 3 < 0)) >> 4;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      uval = (&g_key_to_ascii_table)[val];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
      *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
      poly_write_ptr = g_render_poly_write_ptr + 2;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
      *poly_write_ptr = *tri_v0;
      val = tri_v0[1];
      poly_write_ptr_2[4] = 0;
      poly_write_ptr_2[5] = 0x1fffff;
      poly_write_ptr_2[3] = val;
      poly_write_ptr_2[6] = (tri_v0[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[7] = *arg_edx;
      val = arg_edx[1];
      poly_write_ptr_2[9] = 0;
      poly_write_ptr_2[10] = 0;
      poly_write_ptr_2[8] = val;
      poly_write_ptr_2[0xb] = (arg_edx[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[0xc] = *arg_ebx;
      val = arg_ebx[1];
      poly_write_ptr_2[0xe] = 0x1fffff;
      poly_write_ptr_2[0xf] = 0;
      poly_write_ptr_2[0xd] = val;
      poly_write_ptr_2[0x10] = (arg_ebx[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_emit_unclipped_tri_variant1 (Original VA: 0x98248, Ghidra: FUN_00098248)
 * Prototype: void engine3_emit_unclipped_tri_variant1(void);
 * Address  : 0x98248 (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Emit unclipped 3D triangle primitive (variant 1) into g_render_poly_write_ptr
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_emit_unclipped_tri_variant1(void)

{
  int *poly_write_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int *tri_v0;
  int val;
  undefined2 arg_cx;
  int *arg_edx;
  int *arg_ebx;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_edx + 2) & *(ushort *)(tri_v0 + 2) & 0x1f8) == 0)
  {
    val = (*arg_edx - *tri_v0) * (arg_ebx[1] - arg_edx[1]) -
            (arg_edx[1] - tri_v0[1]) * (*arg_ebx - *arg_edx);
  }
  else {
    val = 0;
  }
  if (0 < val) {
    val = tri_v0[6];
    if (tri_v0[6] < arg_edx[6]) {
      val = arg_edx[6];
    }
    if (val < arg_ebx[6]) {
      val = arg_ebx[6];
    }
    val = (int)((val + (val >> 0x1f) * -0x10) - (uint)((val >> 0x1f) << 3 < 0)) >> 4;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      uval = (&g_key_to_ascii_table)[val];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
      *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
      poly_write_ptr = g_render_poly_write_ptr + 2;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
      *poly_write_ptr = *tri_v0;
      val = tri_v0[1];
      poly_write_ptr_2[4] = 0;
      poly_write_ptr_2[5] = 0;
      poly_write_ptr_2[3] = val;
      poly_write_ptr_2[6] = (tri_v0[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[7] = *arg_edx;
      val = arg_edx[1];
      poly_write_ptr_2[9] = 0x1fffff;
      poly_write_ptr_2[10] = 0;
      poly_write_ptr_2[8] = val;
      poly_write_ptr_2[0xb] = (arg_edx[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[0xc] = *arg_ebx;
      val = arg_ebx[1];
      poly_write_ptr_2[0xe] = 0x1fffff;
      poly_write_ptr_2[0xf] = 0x1fffff;
      poly_write_ptr_2[0xd] = val;
      poly_write_ptr_2[0x10] = (arg_ebx[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_emit_unclipped_tri_variant2 (Original VA: 0x9838c, Ghidra: FUN_0009838c)
 * Prototype: void engine3_emit_unclipped_tri_variant2(void);
 * Address  : 0x9838c (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Emit unclipped 3D triangle primitive (variant 2) into g_render_poly_write_ptr
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_emit_unclipped_tri_variant2(void)

{
  int *poly_write_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int *tri_v0;
  int val;
  undefined2 arg_cx;
  int *arg_edx;
  int *arg_ebx;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_edx + 2) & *(ushort *)(tri_v0 + 2) & 0x1f8) == 0)
  {
    val = (*arg_edx - *tri_v0) * (arg_ebx[1] - arg_edx[1]) -
            (arg_edx[1] - tri_v0[1]) * (*arg_ebx - *arg_edx);
  }
  else {
    val = 0;
  }
  if (0 < val) {
    val = tri_v0[6];
    if (tri_v0[6] < arg_edx[6]) {
      val = arg_edx[6];
    }
    if (val < arg_ebx[6]) {
      val = arg_ebx[6];
    }
    val = (int)((val + (val >> 0x1f) * -0x10) - (uint)((val >> 0x1f) << 3 < 0)) >> 4;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      uval = (&g_key_to_ascii_table)[val];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
      *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
      poly_write_ptr = g_render_poly_write_ptr + 2;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
      *poly_write_ptr = *tri_v0;
      val = tri_v0[1];
      poly_write_ptr_2[4] = 0x1fffff;
      poly_write_ptr_2[5] = 0x1fffff;
      poly_write_ptr_2[3] = val;
      poly_write_ptr_2[6] = (tri_v0[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[7] = *arg_edx;
      val = arg_edx[1];
      poly_write_ptr_2[9] = 0;
      poly_write_ptr_2[10] = 0x1fffff;
      poly_write_ptr_2[8] = val;
      poly_write_ptr_2[0xb] = (arg_edx[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[0xc] = *arg_ebx;
      val = arg_ebx[1];
      poly_write_ptr_2[0xe] = 0;
      poly_write_ptr_2[0xf] = 0;
      poly_write_ptr_2[0xd] = val;
      poly_write_ptr_2[0x10] = (arg_ebx[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_emit_unclipped_tri_variant3 (Original VA: 0x984d0, Ghidra: FUN_000984d0)
 * Prototype: void engine3_emit_unclipped_tri_variant3(void);
 * Address  : 0x984d0 (Size: 323 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Emit unclipped 3D triangle primitive (variant 3) into g_render_poly_write_ptr
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_emit_unclipped_tri_variant3(void)

{
  int *poly_write_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int *tri_v0;
  int val;
  undefined2 arg_cx;
  int *arg_edx;
  int *arg_ebx;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_edx + 2) & *(ushort *)(tri_v0 + 2) & 0x1f8) == 0)
  {
    val = (*arg_edx - *tri_v0) * (arg_ebx[1] - arg_edx[1]) -
            (arg_edx[1] - tri_v0[1]) * (*arg_ebx - *arg_edx);
  }
  else {
    val = 0;
  }
  if (0 < val) {
    val = tri_v0[6];
    if (tri_v0[6] < arg_edx[6]) {
      val = arg_edx[6];
    }
    if (val < arg_ebx[6]) {
      val = arg_ebx[6];
    }
    val = (int)((val + (val >> 0x1f) * -0x10) - (uint)((val >> 0x1f) << 3 < 0)) >> 4;
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      uval = (&g_key_to_ascii_table)[val];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
      *(undefined2 *)((int)g_render_poly_write_ptr + 6) = arg_cx;
      poly_write_ptr = g_render_poly_write_ptr + 2;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
      *poly_write_ptr = *tri_v0;
      val = tri_v0[1];
      poly_write_ptr_2[4] = 0x1fffff;
      poly_write_ptr_2[5] = 0;
      poly_write_ptr_2[3] = val;
      poly_write_ptr_2[6] = (tri_v0[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[7] = *arg_edx;
      val = arg_edx[1];
      poly_write_ptr_2[9] = 0x1fffff;
      poly_write_ptr_2[10] = 0x1fffff;
      poly_write_ptr_2[8] = val;
      poly_write_ptr_2[0xb] = (arg_edx[2] >> 0x10) * 0x100 + 0xc0000;
      poly_write_ptr_2[0xc] = *arg_ebx;
      val = arg_ebx[1];
      poly_write_ptr_2[0xe] = 0;
      poly_write_ptr_2[0xf] = 0x1fffff;
      poly_write_ptr_2[0xd] = val;
      poly_write_ptr_2[0x10] = (arg_ebx[2] >> 0x10) * 0x100 + 0xc0000;
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_build_subtile_column_geometry_high (Original VA: 0x98614, Ghidra: FUN_00098614)
 * Prototype: void engine3_build_subtile_column_geometry_high(void);
 * Address  : 0x98614 (Size: 1699 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Generate 3D voxel column faces for visible subtile strip (high detail)
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 3 -> engine3_clip_and_emit_textured_tri_mode1, engine3_clip_and_emit_textured_tri_mode2, ssprite_decode_and_blit_rle_frame
 ******************************************************************************/
void engine3_build_subtile_column_geometry_high(void)

{
  byte flag;
  undefined4 uval;
  int arg_eax;
  uint uval_2;
  int arg_ecx;
  int arg_edx;
  int extraout_EDX;
  int arg_ebx;
  int *thing_ptr;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  int *int_ptr;
  int val;
  int val_2;
  int local_8c [2];
  int local_84;
  undefined4 *local_80;
  int local_78;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_4c;
  int local_48;
  
  thing_ptr = local_8c;
  if ((0 < arg_edx) && (arg_edx < 0xff)) {
    if (arg_eax + arg_ebx < 1) {
      arg_ebx = 1 - arg_eax;
    }
    if (0xff < arg_eax + arg_ecx) {
      arg_ecx = 0xff - arg_eax;
    }
    local_4c = (arg_ebx + 0x1f) * 0x1c0;
    local_48 = g_bss_00387218 + local_4c;
    local_4c = g_bss_0038721c + local_4c;
    local_78 = arg_eax + arg_ebx;
    local_80 = &g_bss_0019e973 + g_bss_002e6f23 * 6;
    local_58 = (uint)*(ushort *)((int)&g_bss_0019e973 + g_bss_002e6f23 * 0x18 + 3);
    local_68 = 0;
    local_5c = (int)&g_map_subtiles + arg_edx * 0x500 + (arg_eax + arg_ebx) * 5;
    local_8c[0] = local_48 + 0x2a0;
    local_60 = local_4c + 0x2a0;
    local_54 = local_4c + 0xe0;
    local_84 = arg_ecx - arg_ebx;
    local_64 = local_48 + 0xe0;
    if (0 < arg_ecx - arg_ebx) {
      do {
        val = *(int *)((int)thing_ptr + 0x30);
        *(undefined4 *)((int)thing_ptr + 0x3c) = *(undefined4 *)((int)thing_ptr + 0xc);
        if ((*(uint *)(val + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
          if ((*(uint *)(val + 1) & 0x3ff800) != 0) {
            *(undefined4 *)((int)thing_ptr + -4) = 0x98b64;
            ssprite_decode_and_blit_rle_frame();
            val = extraout_EDX;
          }
          *(undefined4 **)((int)thing_ptr + 0x3c) = &g_bss_0019e973 + (*(uint *)(val + 1) & 0x7ff) * 6;
        }
        *(uint *)((int)thing_ptr + 0x58) = (uint)*(ushort *)(*(int *)((int)thing_ptr + 0x3c) + 3);
        uval = *(undefined4 *)((int)thing_ptr + 0x34);
        *(undefined4 *)((int)thing_ptr + 0x50) = uval;
        *(undefined4 *)((int)thing_ptr + 0x54) = uval;
        *(undefined4 *)((int)thing_ptr + 0x4c) = uval;
        *(undefined4 *)((int)thing_ptr + 0x48) = uval;
        if ((*(uint *)(val + -0x4ff) >> 0x1c & (uint)g_bss_00379395) != 0) {
          *(uint *)((int)thing_ptr + 0x50) =
               (uint)*(ushort *)
                      ((int)&g_bss_0019e973 + (*(uint *)(val + -0x4ff) & 0x7ff) * 0x18 + 3);
        }
        if ((*(uint *)(val + 0x501) >> 0x1c & (uint)g_bss_00379395) != 0) {
          *(uint *)((int)thing_ptr + 0x4c) =
               (uint)*(ushort *)((int)&g_bss_0019e973 + (*(uint *)(val + 0x501) & 0x7ff) * 0x18 + 3)
          ;
        }
        if ((*(uint *)(val + -4) >> 0x1c & (uint)g_bss_00379395) != 0) {
          *(uint *)((int)thing_ptr + 0x48) =
               (uint)*(ushort *)((int)&g_bss_0019e973 + (*(uint *)(val + -4) & 0x7ff) * 0x18 + 3);
        }
        if ((*(uint *)(val + 6) >> 0x1c & (uint)g_bss_00379395) != 0) {
          *(uint *)((int)thing_ptr + 0x54) =
               (uint)*(ushort *)((int)&g_bss_0019e973 + (*(uint *)(val + 6) & 0x7ff) * 0x18 + 3);
        }
        val = *(int *)((int)thing_ptr + 0x44);
        *(undefined1 **)((int)thing_ptr + 0x68) = &g_data_00191d44;
        *(int *)((int)thing_ptr + 100) = *(int *)((int)thing_ptr + 0x3c) + 8; /* thing->ccontrol_idx */
        val_2 = *(int *)((int)thing_ptr + 0x40);
        *(int *)((int)thing_ptr + 0x78) = val + 0x1c0;
        *(int *)((int)thing_ptr + 0x74) = val + 0x1dc;
        *(undefined4 *)((int)thing_ptr + 0x7c) = 1;
        *(int *)((int)thing_ptr + 0x70) = val_2 + 0x1dc;
        while( true ) {
          uval_2 = (uint)*(ushort *)((int)thing_ptr + 0x7c);
          if (*(int *)((int)thing_ptr + 0x58) < (int)uval_2) break;
          *(int *)((int)thing_ptr + 0x6c) = (int)&g_bss_001aa973 + **(short **)((int)thing_ptr + 100) * 0x12 /* thing->ccontrol_idx */
          ;
          if ((uval_2 & *(uint *)((int)thing_ptr + 0x58)) != 0) {
            word_ptr_2 = (undefined1 *)thing_ptr;
            if ((*(uint *)((int)thing_ptr + 0x50) & uval_2) == 0) {
              flag = **(byte **)((int)thing_ptr + 0x68);
              *(undefined4 *)((int)thing_ptr + -4) = g_bss_0037937c;
              *(int *)((int)thing_ptr + 4) =
                   (int)*(short *)((uint)flag * 2 + *(int *)((int)thing_ptr + 0x6c));
              *(undefined4 *)((int)thing_ptr + -8) = 0x987c6;
              engine3_clip_and_emit_textured_tri_mode1();
              word_ptr_2 = (undefined1 *)((int)thing_ptr + -8);
              *(undefined4 *)((int)thing_ptr + -8) = g_bss_0037937c;
              *(undefined4 *)((int)thing_ptr + -0xc) = 0x987e0;
              engine3_clip_and_emit_textured_tri_mode2();
            }
            word_ptr = word_ptr_2;
            if (((uint)*(ushort *)(word_ptr_2 + 0x7c) & *(uint *)(word_ptr_2 + 0x4c)) == 0) {
              flag = *(byte *)(*(int *)(word_ptr_2 + 0x68) + 2);
              *(undefined4 *)(word_ptr_2 + -4) = g_bss_00379380;
              *(int *)(word_ptr_2 + 0x60) = val_2 + 0x1c;
              *(int *)(word_ptr_2 + 4) = (int)*(short *)((uint)flag * 2 + *(int *)(word_ptr_2 + 0x6c));
              *(undefined4 *)(word_ptr_2 + -8) = 0x98827;
              engine3_clip_and_emit_textured_tri_mode1();
              word_ptr = word_ptr_2 + -8;
              *(undefined4 *)(word_ptr_2 + -8) = g_bss_00379380;
              *(undefined4 *)(word_ptr_2 + -0xc) = 0x9883e;
              engine3_clip_and_emit_textured_tri_mode2();
            }
            word_ptr_2 = word_ptr;
            if (((uint)*(ushort *)(word_ptr + 0x7c) & *(uint *)(word_ptr + 0x48)) == 0) {
              flag = *(byte *)(*(int *)(word_ptr + 0x68) + 3);
              *(undefined4 *)(word_ptr + -4) = g_bss_00379374;
              *(int *)(word_ptr + 0x5c) = val + 0x1c;
              *(int *)(word_ptr + 4) = (int)*(short *)((uint)flag * 2 + *(int *)(word_ptr + 0x6c));
              *(undefined4 *)(word_ptr + -8) = 0x98884;
              engine3_clip_and_emit_textured_tri_mode1();
              word_ptr_2 = word_ptr + -8;
              *(undefined4 *)(word_ptr + -8) = g_bss_00379374;
              *(undefined4 *)(word_ptr + -0xc) = 0x9889b;
              engine3_clip_and_emit_textured_tri_mode2();
            }
            thing_ptr = (int *)word_ptr_2;
            if (((uint)*(ushort *)(word_ptr_2 + 0x7c) & *(uint *)(word_ptr_2 + 0x54)) == 0) {
              flag = *(byte *)(*(int *)(word_ptr_2 + 0x68) + 1);
              *(undefined4 *)(word_ptr_2 + -4) = g_bss_00379378;
              *(int *)(word_ptr_2 + 4) = (int)*(short *)((uint)flag * 2 + *(int *)(word_ptr_2 + 0x6c));
              *(undefined4 *)(word_ptr_2 + -8) = 0x988e1;
              engine3_clip_and_emit_textured_tri_mode1();
              thing_ptr = (int *)(word_ptr_2 + -8);
              *(undefined4 *)(word_ptr_2 + -8) = g_bss_00379378;
              *(undefined4 *)(word_ptr_2 + -0xc) = 0x988fa;
              engine3_clip_and_emit_textured_tri_mode2();
            }
          }
          val = val + 0x1c;
          val_2 = val_2 + 0x1c;
          *(int *)((int)thing_ptr + 0x7c) = *(int *)((int)thing_ptr + 0x7c) * 2;
          *(int *)((int)thing_ptr + 0x78) = *(int *)((int)thing_ptr + 0x78) + 0x1c;
          *(int *)((int)thing_ptr + 0x70) = *(int *)((int)thing_ptr + 0x70) + 0x1c;
          *(int *)((int)thing_ptr + 100) = *(int *)((int)thing_ptr + 100) + 2; /* thing->ccontrol_idx */
          *(int *)((int)thing_ptr + 0x74) = *(int *)((int)thing_ptr + 0x74) + 0x1c;
        }
        val = (&g_bss_00377f70)[*(int *)((int)thing_ptr + 0x58)];
        if (val == 0) {
          *(undefined4 *)((int)thing_ptr + -4) = 0xffffffff;
          *(undefined4 *)((int)thing_ptr + -8) = 0x98990;
          engine3_clip_and_emit_textured_tri_mode1();
          *(undefined4 *)((int)thing_ptr + -8) = 0xffffffff;
        }
        else {
          *(undefined4 *)((int)thing_ptr + -4) = 0xffffffff;
          *(int *)((int)thing_ptr + 4) = *(int *)((int)thing_ptr + 0x40) + val * 0x1c;
          *(undefined4 *)((int)thing_ptr + -8) = 0x98954;
          engine3_clip_and_emit_textured_tri_mode1();
          *(undefined4 *)((int)thing_ptr + -8) = 0xffffffff;
        }
        int_ptr = (int *)((int)thing_ptr + -8);
        *(undefined4 *)((int)thing_ptr + -0xc) = 0x989a3;
        engine3_clip_and_emit_textured_tri_mode2();
        val = (&g_bss_00377b70)[*(int *)((int)thing_ptr + 0x50)];
        if (val != 0) {
          *(undefined4 *)((int)thing_ptr + 8) = (&g_bss_00377770)[*(int *)((int)thing_ptr + 0x50)]; /* thing->active_state */
          val_2 = *(int *)(val * 2 + *(int *)((int)thing_ptr + 0x34) + 4);
          *(undefined4 *)((int)thing_ptr + -0xc) = 0xffffffff;
          *(int *)((int)thing_ptr + 0x18) = (int)&g_bss_001aa973 + (val_2 >> 0x10) * 0x12;
          *(int *)((int)thing_ptr + 0x14) = *(int *)((int)thing_ptr + 0x38) + val * 0x1c;
          *(undefined4 *)((int)thing_ptr + -0x10) = 0x98a18;
          engine3_clip_and_emit_textured_tri_mode1();
          *(undefined4 *)((int)thing_ptr + -0x10) = 0xffffffff;
          val = *(int *)((int)thing_ptr + 4);
          *(undefined4 *)((int)thing_ptr + -0x14) = 0x98a2d;
          engine3_clip_and_emit_textured_tri_mode2();
          *(undefined4 *)((int)thing_ptr + -0x14) = 0xffffffff;
          *(int *)((int)thing_ptr + 8) = *(int *)((int)thing_ptr + 0x34) + val * 0x1c; /* thing->active_state */
          *(undefined4 *)((int)thing_ptr + -0x18) = 0x98a68;
          engine3_clip_and_emit_textured_tri_mode1();
          int_ptr = (int *)((int)thing_ptr + -0x18);
          *(undefined4 *)((int)thing_ptr + -0x18) = 0xffffffff;
          *(undefined4 *)((int)thing_ptr + -0x1c) = 0x98a79;
          engine3_clip_and_emit_textured_tri_mode2();
        }
        int_ptr[-1] = 0xffffffff;
        val = int_ptr[0xb];
        val_2 = int_ptr[0xe];
        int_ptr[-2] = 0x98ab7;
        engine3_clip_and_emit_textured_tri_mode1();
        thing_ptr = int_ptr + -2;
        int_ptr[-2] = 0xffffffff;
        int_ptr[10] = val + 0x1c0;
        int_ptr[-3] = 0x98ad0;
        engine3_clip_and_emit_textured_tri_mode2();
        int_ptr[0xc] = val_2 + 0x1c0;
        int_ptr[-2] = int_ptr[-2] + 0x1c0;
        int_ptr[8] = int_ptr[8] + 0x1c0;
        int_ptr[0xf] = int_ptr[0xf] + 0x1c0;
        int_ptr[0xe] = int_ptr[0xe] + 0x1c0;
        int_ptr[10] = int_ptr[10] + 5;
        val = int_ptr[7];
        int_ptr[3] = int_ptr[3] + 1;
        int_ptr[7] = val + 1;
      } while (val + 1 < *int_ptr);
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_build_subtile_column_geometry_med (Original VA: 0x98cb8, Ghidra: FUN_00098cb8)
 * Prototype: void engine3_build_subtile_column_geometry_med(void);
 * Address  : 0x98cb8 (Size: 12598 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Generate 3D voxel column faces for visible subtile strip (medium detail)
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 1 -> ssprite_decode_and_blit_rle_frame
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0009b616) */
/* WARNING: Removing unreachable block (ram,0x0009ae83) */
/* WARNING: Removing unreachable block (ram,0x0009b826) */
/* WARNING: Removing unreachable block (ram,0x0009b099) */
/* WARNING: Removing unreachable block (ram,0x0009ba99) */
/* WARNING: Removing unreachable block (ram,0x0009bcc7) */

void engine3_build_subtile_column_geometry_med(void)

{
  int *poly_write_ptr;
  int *int_ptr;
  int *poly_write_ptr_2;
  byte flag;
  short short_val;
  undefined2 uval;
  undefined4 uval_2;
  int val;
  int val_2;
  bool flag_2;
  bool flag_3;
  undefined4 *poly_write_ptr_3;
  int arg_eax;
  int val_3;
  int val_4;
  uint uval_3;
  int val_5;
  uint uval_4;
  uint uval_5;
  int val_6;
  int arg_ecx;
  int val_7;
  int *int_ptr_2;
  int arg_edx;
  int val_8;
  int arg_ebx;
  int *int_ptr_3;
  int *int_ptr_4;
  int *int_ptr_5;
  int *local_338;
  int *local_334;
  uint local_328;
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  short *local_304;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_264;
  int local_260;
  int local_25c;
  int local_23c;
  int local_238;
  int local_234;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_180;
  int local_17c;
  int local_178;
  int *local_80;
  int *local_7c;
  int local_78;
  int local_74;
  uint local_40;
  
  if ((0 < arg_edx) && (arg_edx < 0xff)) {
    flag_2 = arg_eax + arg_ebx < 1;
    if (flag_2) {
      arg_ebx = 1 - arg_eax;
    }
    flag_3 = 0xff < arg_eax + arg_ecx;
    if (flag_3) {
      arg_ecx = 0xff - arg_eax;
    }
    val_3 = arg_eax + arg_ebx;
    val_4 = (arg_ebx + 0x1f) * 0x1c0;
    local_338 = (int *)(g_bss_00387218 + val_4);
    local_334 = (int *)(g_bss_0038721c + val_4);
    val_7 = arg_ecx - arg_ebx;
    val_4 = g_bss_002e6f23 * 0x18;
    uval_3 = (uint)*(ushort *)((int)&g_bss_0019e973 + val_4 + 3);
    local_328 = 0;
    local_78 = (int)&g_map_subtiles + arg_edx * 0x500 + val_3 * 5;
    if (0 < val_7) {
      local_74 = arg_edx * 0x500 + val_3 * 5;
      do {
        flag = *(byte *)((int)&g_map_subtiles + local_74);
        val_5 = val_4;
        if ((*(uint *)(local_78 + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
          if ((*(uint *)(local_78 + 1) & 0x3ff800) != 0) {
            ssprite_decode_and_blit_rle_frame(val_3);
          }
          val_5 = (*(uint *)(local_78 + 1) & 0x7ff) * 0x18;
        }
        uval_4 = (uint)*(ushort *)((int)&g_bss_0019e973 + val_5 + 3);
        local_318 = uval_3;
        if ((*(uint *)(local_78 + -0x4ff) >> 0x1c & (uint)g_bss_00379395) != 0) {
          local_318 = (uint)*(ushort *)
                             ((int)&g_bss_0019e973 + (*(uint *)(local_78 + -0x4ff) & 0x7ff) * 0x18 + 3
                             );
        }
        local_310 = uval_3;
        if ((*(uint *)(local_78 + 0x501) >> 0x1c & (uint)g_bss_00379395) != 0) {
          local_310 = (uint)*(ushort *)
                             ((int)&g_bss_0019e973 + (*(uint *)(local_78 + 0x501) & 0x7ff) * 0x18 + 3)
          ;
        }
        local_30c = uval_3;
        if ((*(uint *)(local_78 + -4) >> 0x1c & (uint)g_bss_00379395) != 0) {
          local_30c = (uint)*(ushort *)
                             ((int)&g_bss_0019e973 + (*(uint *)(local_78 + -4) & 0x7ff) * 0x18 + 3);
        }
        local_314 = uval_3;
        if ((*(uint *)(local_78 + 6) >> 0x1c & (uint)g_bss_00379395) != 0) {
          local_314 = (uint)*(ushort *)
                             ((int)&g_bss_0019e973 + (*(uint *)(local_78 + 6) & 0x7ff) * 0x18 + 3);
        }
        if ((arg_edx == 1 || (flag_2 || flag_3)) || arg_edx == 0xfe) {
          if ((flag_2) && (local_328 == 0)) {
            local_30c = local_328;
          }
          if ((flag_3) && (local_328 == val_7 - 1U)) {
            local_314 = 0;
          }
          if (arg_edx == 1) {
            local_318 = 0;
          }
          if (arg_edx == 0xfe) {
            local_310 = 0;
          }
        }
        local_304 = (short *)((int)&g_bss_0019e97b + val_5);
        local_80 = local_338 + 0x70;
        int_ptr_2 = local_334 + 0x77;
        local_7c = local_334 + 0x70;
        int_ptr_3 = local_338 + 0x77;
        int_ptr_4 = local_338;
        int_ptr_5 = local_334;
        for (local_40 = 1; poly_write_ptr_3 = g_render_poly_write_ptr, val_8 = g_bss_0037937c, uval_5 = local_40 & 0xffff
            , uval_5 <= uval_4; local_40 = local_40 * 2) {
          short_val = *local_304;
          if ((uval_5 & uval_4) != 0) {
            if ((local_318 & uval_5) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d44 * 2 + short_val * 0x12);
              int_ptr = int_ptr_4 + 7;
              if ((*(ushort *)(int_ptr_4 + 2) & *(ushort *)(int_ptr_3 + 2) & *(ushort *)(int_ptr_4 + 9) &
                  0x1f8) == 0) {
                val_6 = (int_ptr_4[1] - int_ptr_4[8]) * (*int_ptr - *int_ptr_3) -
                         (int_ptr_4[8] - int_ptr_3[1]) * (*int_ptr_4 - *int_ptr);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = int_ptr_3[6];
                if (int_ptr_3[6] < int_ptr_4[0xd]) {
                  val_6 = int_ptr_4[0xd];
                }
                if (val_6 < int_ptr_4[6]) {
                  val_6 = int_ptr_4[6];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_2c8 = int_ptr_3[2] >> 0x10;
                  local_2c4 = int_ptr_4[9] >> 0x10;
                  local_2c0 = int_ptr_4[2] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_2c8 = local_2c8 * val_8 >> 0x11;
                    local_2c4 = local_2c4 * val_8 >> 0x11;
                    local_2c0 = val_8 * local_2c0 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *int_ptr_3;
                  poly_write_ptr_3[3] = int_ptr_3[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_2c8 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *int_ptr;
                  poly_write_ptr_3[8] = int_ptr_4[8];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_2c4 << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *int_ptr_4;
                  val_8 = int_ptr_4[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_2c0 << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_8 = g_bss_0037937c;
              if ((*(ushort *)(int_ptr_3 + 2) & *(ushort *)(int_ptr_4 + 2) & *(ushort *)(local_80 + 2) &
                  0x1f8) == 0) {
                val_6 = (*local_80 - *int_ptr_4) * (int_ptr_3[1] - local_80[1]) -
                         (local_80[1] - int_ptr_4[1]) * (*int_ptr_3 - *local_80);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = int_ptr_4[6];
                if (int_ptr_4[6] < local_80[6]) {
                  val_6 = local_80[6];
                }
                if (val_6 < int_ptr_3[6]) {
                  val_6 = int_ptr_3[6];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_2a0 = int_ptr_4[2] >> 0x10;
                  local_29c = local_80[2] >> 0x10;
                  local_298 = int_ptr_3[2] >> 0x10;
                  int_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_2a0 = local_2a0 * val_8 >> 0x11;
                    local_29c = local_29c * val_8 >> 0x11;
                    local_298 = val_8 * local_298 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_4;
                  poly_write_ptr_3[3] = int_ptr_4[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_2a0 << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *local_80;
                  poly_write_ptr_3[8] = local_80[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_29c << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr_3;
                  val_8 = int_ptr_3[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_298 << 8;
                }
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            val_8 = g_bss_00379380;
            if ((local_40 & 0xffff & local_310) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d46 * 2 + short_val * 0x12);
              int_ptr = int_ptr_5 + 7;
              if ((*(ushort *)(local_7c + 2) & *(ushort *)(int_ptr_5 + 9) & *(ushort *)(int_ptr_2 + 2) &
                  0x1f8) == 0) {
                val_6 = (*int_ptr_2 - *int_ptr) * (local_7c[1] - int_ptr_2[1]) -
                         (int_ptr_2[1] - int_ptr_5[8]) * (*local_7c - *int_ptr_2);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = int_ptr_5[0xd];
                if (int_ptr_5[0xd] < int_ptr_2[6]) {
                  val_6 = int_ptr_2[6];
                }
                if (val_6 < local_7c[6]) {
                  val_6 = local_7c[6];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_264 = int_ptr_5[9] >> 0x10;
                  local_260 = int_ptr_2[2] >> 0x10;
                  local_25c = local_7c[2] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_264 = local_264 * val_8 >> 0x11;
                    local_260 = local_260 * val_8 >> 0x11;
                    local_25c = val_8 * local_25c >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *int_ptr;
                  poly_write_ptr_3[3] = int_ptr_5[8];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_264 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *int_ptr_2;
                  poly_write_ptr_3[8] = int_ptr_2[1];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_260 << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *local_7c;
                  val_8 = local_7c[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_25c << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_8 = g_bss_00379380;
              if ((*(ushort *)(int_ptr_5 + 9) & *(ushort *)(local_7c + 2) & *(ushort *)(int_ptr_5 + 2) &
                  0x1f8) == 0) {
                val_6 = (*int_ptr_5 - *local_7c) * (int_ptr_5[8] - int_ptr_5[1]) -
                         (int_ptr_5[1] - local_7c[1]) * (*int_ptr - *int_ptr_5);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = local_7c[6];
                if (local_7c[6] < int_ptr_5[6]) {
                  val_6 = int_ptr_5[6];
                }
                if (val_6 < int_ptr_5[0xd]) {
                  val_6 = int_ptr_5[0xd];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_23c = local_7c[2] >> 0x10;
                  local_238 = int_ptr_5[2] >> 0x10;
                  local_234 = int_ptr_5[9] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_23c = local_23c * val_8 >> 0x11;
                    local_238 = local_238 * val_8 >> 0x11;
                    local_234 = val_8 * local_234 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *local_7c;
                  poly_write_ptr_3[3] = local_7c[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_23c << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *int_ptr_5;
                  poly_write_ptr_3[8] = int_ptr_5[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_238 << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr;
                  val_8 = int_ptr_5[8];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_234 << 8;
                }
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            val_8 = g_bss_00379374;
            if ((local_40 & 0xffff & local_30c) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d47 * 2 + short_val * 0x12);
              int_ptr = int_ptr_4 + 7;
              poly_write_ptr = int_ptr_5 + 7;
              if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_4 + 9) & *(ushort *)(int_ptr_5 + 9) &
                  0x1f8) == 0) {
                val_6 = (int_ptr_5[1] - int_ptr_5[8]) * (*poly_write_ptr - *int_ptr) -
                         (*int_ptr_5 - *poly_write_ptr) * (int_ptr_5[8] - int_ptr_4[8]);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = int_ptr_4[0xd];
                if (int_ptr_4[0xd] < int_ptr_5[0xd]) {
                  val_6 = int_ptr_5[0xd];
                }
                if (val_6 < int_ptr_5[6]) {
                  val_6 = int_ptr_5[6];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_204 = int_ptr_4[9] >> 0x10;
                  local_200 = int_ptr_5[9] >> 0x10;
                  local_1fc = int_ptr_5[2] >> 0x10;
                  poly_write_ptr_2 = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_204 = local_204 * val_8 >> 0x11;
                    local_200 = local_200 * val_8 >> 0x11;
                    local_1fc = val_8 * local_1fc >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr_2 = *int_ptr;
                  poly_write_ptr_3[3] = int_ptr_4[8];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_204 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *poly_write_ptr;
                  poly_write_ptr_3[8] = int_ptr_5[8];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_200 << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *int_ptr_5;
                  val_8 = int_ptr_5[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_1fc << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_8 = g_bss_00379374;
              if ((*(ushort *)(int_ptr_4 + 9) & *(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_4 + 2) &
                  0x1f8) == 0) {
                val_6 = (*int_ptr_4 - *int_ptr_5) * (int_ptr_4[8] - int_ptr_4[1]) -
                         (int_ptr_4[1] - int_ptr_5[1]) * (*int_ptr - *int_ptr_4);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = int_ptr_5[6];
                if (int_ptr_5[6] < int_ptr_4[6]) {
                  val_6 = int_ptr_4[6];
                }
                if (val_6 < int_ptr_4[0xd]) {
                  val_6 = int_ptr_4[0xd];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_1dc = int_ptr_5[2] >> 0x10;
                  local_1d8 = int_ptr_4[2] >> 0x10;
                  local_1d4 = int_ptr_4[9] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_1dc = local_1dc * val_8 >> 0x11;
                    local_1d8 = local_1d8 * val_8 >> 0x11;
                    local_1d4 = val_8 * local_1d4 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *int_ptr_5;
                  poly_write_ptr_3[3] = int_ptr_5[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_1dc << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *int_ptr_4;
                  poly_write_ptr_3[8] = int_ptr_4[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_1d8 << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr;
                  val_8 = int_ptr_4[8];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_1d4 << 8;
                }
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            val_8 = g_bss_00379378;
            if ((local_40 & 0xffff & local_314) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d45 * 2 + short_val * 0x12);
              if ((*(ushort *)(local_80 + 2) & *(ushort *)(int_ptr_2 + 2) & *(ushort *)(int_ptr_3 + 2) &
                  0x1f8) == 0) {
                val_6 = (*int_ptr_3 - *int_ptr_2) * (local_80[1] - int_ptr_3[1]) -
                         (int_ptr_3[1] - int_ptr_2[1]) * (*local_80 - *int_ptr_3);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = int_ptr_2[6];
                if (int_ptr_2[6] < int_ptr_3[6]) {
                  val_6 = int_ptr_3[6];
                }
                if (val_6 < local_80[6]) {
                  val_6 = local_80[6];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_1a8 = int_ptr_2[2] >> 0x10;
                  local_1a4 = int_ptr_3[2] >> 0x10;
                  local_1a0 = local_80[2] >> 0x10;
                  int_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_1a8 = local_1a8 * val_8 >> 0x11;
                    local_1a4 = local_1a4 * val_8 >> 0x11;
                    local_1a0 = val_8 * local_1a0 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_2;
                  poly_write_ptr_3[3] = int_ptr_2[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_1a8 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *int_ptr_3;
                  poly_write_ptr_3[8] = int_ptr_3[1];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_1a4 << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *local_80;
                  val_8 = local_80[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_1a0 << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_8 = g_bss_00379378;
              if ((*(ushort *)(int_ptr_2 + 2) & *(ushort *)(local_80 + 2) & *(ushort *)(local_7c + 2)
                  & 0x1f8) == 0) {
                val_6 = (*local_7c - *local_80) * (int_ptr_2[1] - local_7c[1]) -
                         (local_7c[1] - local_80[1]) * (*int_ptr_2 - *local_7c);
              }
              else {
                val_6 = 0;
              }
              if (0 < val_6) {
                val_6 = local_80[6];
                if (local_80[6] < local_7c[6]) {
                  val_6 = local_7c[6];
                }
                if (val_6 < int_ptr_2[6]) {
                  val_6 = int_ptr_2[6];
                }
                val_6 = (int)((val_6 + (val_6 >> 0x1f) * -0x10) -
                              (uint)((val_6 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_6];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_180 = local_80[2] >> 0x10;
                  local_17c = local_7c[2] >> 0x10;
                  local_178 = int_ptr_2[2] >> 0x10;
                  int_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_8) {
                    val_8 = val_8 * 4 + 0x10000;
                    local_180 = local_180 * val_8 >> 0x11;
                    local_17c = local_17c * val_8 >> 0x11;
                    local_178 = val_8 * local_178 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *local_80;
                  poly_write_ptr_3[3] = local_80[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_180 << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *local_7c;
                  poly_write_ptr_3[8] = local_7c[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_17c << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr_2;
                  val_8 = int_ptr_2[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_178 << 8;
                }
              }
            }
          }
          int_ptr_3 = int_ptr_3 + 7;
          int_ptr_4 = int_ptr_4 + 7;
          int_ptr_2 = int_ptr_2 + 7;
          int_ptr_5 = int_ptr_5 + 7;
          local_7c = local_7c + 7;
          local_304 = local_304 + 1;
          local_80 = local_80 + 7;
        }
        val_8 = (&g_bss_00377f70)[uval_4];
        int_ptr_2 = local_334 + 0x70;
        int_ptr_3 = local_338 + 0x70;
        if (val_8 == 0) {
          if ((flag & 4) == 0) {
            uval = *(undefined2 *)((int)&g_bss_0019e977 + val_5 + 1);
            if ((*(ushort *)(local_334 + 0x72) &
                 *(ushort *)(local_338 + 0x72) & *(ushort *)(local_338 + 2) & 0x1f8) == 0) {
              val_8 = (local_334[0x71] - local_338[0x71]) * (*int_ptr_3 - *local_338) -
                       (*int_ptr_2 - *int_ptr_3) * (local_338[0x71] - local_338[1]);
            }
            else {
              val_8 = 0;
            }
            if (0 < val_8) {
              val_8 = local_338[6];
              if (local_338[6] < local_338[0x76]) {
                val_8 = local_338[0x76];
              }
              if (val_8 < local_334[0x76]) {
                val_8 = local_334[0x76];
              }
              val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) - (uint)((val_8 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_2 = (&g_key_to_ascii_table)[val_8];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_2;
                (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_8 = local_338[0x72];
                val_6 = local_338[2];
                val_2 = local_334[0x72];
                int_ptr_4 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_4 = *local_338;
                val = local_338[1];
                poly_write_ptr_3[4] = 0;
                poly_write_ptr_3[5] = 0;
                poly_write_ptr_3[3] = val;
                poly_write_ptr_3[6] = (val_6 >> 0x10) << 8;
                poly_write_ptr_3[7] = *int_ptr_3;
                poly_write_ptr_3[8] = local_338[0x71];
                poly_write_ptr_3[9] = 0x1fffff;
                poly_write_ptr_3[0xb] = (val_8 >> 0x10) << 8;
                poly_write_ptr_3[10] = 0;
                poly_write_ptr_3[0xc] = *int_ptr_2;
                val_8 = local_334[0x71];
                poly_write_ptr_3[0xe] = 0x1fffff;
                poly_write_ptr_3[0xd] = val_8;
                poly_write_ptr_3[0xf] = 0x1fffff;
                poly_write_ptr_3[0x10] = (val_2 >> 0x10) << 8;
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            uval = *(undefined2 *)((int)&g_bss_0019e977 + val_5 + 1);
            if ((*(ushort *)(local_338 + 2) &
                 *(ushort *)(local_334 + 0x72) & *(ushort *)(local_334 + 2) & 0x1f8) == 0) {
              val_8 = (local_338[1] - local_334[1]) * (*local_334 - *int_ptr_2) -
                       (*local_338 - *local_334) * (local_334[1] - local_334[0x71]);
            }
            else {
              val_8 = 0;
            }
            if (0 < val_8) {
              val_8 = local_334[0x76];
              if (local_334[0x76] < local_334[6]) {
                val_8 = local_334[6];
              }
              if (val_8 < local_338[6]) {
                val_8 = local_338[6];
              }
              val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) - (uint)((val_8 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_2 = (&g_key_to_ascii_table)[val_8];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_2;
                (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_8 = local_334[0x72];
                val_6 = local_334[2];
                val = local_338[2];
                int_ptr_3 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_3 = *int_ptr_2;
                val_2 = local_334[0x71];
                poly_write_ptr_3[4] = 0x1fffff;
                poly_write_ptr_3[3] = val_2;
                poly_write_ptr_3[5] = 0x1fffff;
                poly_write_ptr_3[6] = (val_8 >> 0x10) << 8;
                poly_write_ptr_3[7] = *local_334;
                val_8 = local_334[1];
                poly_write_ptr_3[9] = 0;
                poly_write_ptr_3[8] = val_8;
                poly_write_ptr_3[10] = 0x1fffff;
                poly_write_ptr_3[0xb] = (val_6 >> 0x10) << 8;
                int_ptr_2 = poly_write_ptr_3 + 0xc;
                *int_ptr_2 = *local_338;
                val_8 = local_338[1];
                poly_write_ptr_3[0xe] = 0;
                poly_write_ptr_3[0xd] = val_8;
                goto LAB_0009b8e3;
              }
            }
          }
          else {
            if ((*(ushort *)(local_334 + 0x72) &
                 *(ushort *)(local_338 + 2) & *(ushort *)(local_338 + 0x72) & 0x1f8) == 0) {
              val_8 = (local_334[0x71] - local_338[0x71]) * (*int_ptr_3 - *local_338) -
                       (*int_ptr_2 - *int_ptr_3) * (local_338[0x71] - local_338[1]);
            }
            else {
              val_8 = 0;
            }
            if (0 < val_8) {
              val_8 = local_338[6];
              if (local_338[6] < local_338[0x76]) {
                val_8 = local_338[0x76];
              }
              if (val_8 < local_334[0x76]) {
                val_8 = local_334[0x76];
              }
              val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) - (uint)((val_8 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_2 = (&g_key_to_ascii_table)[val_8];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_2;
                (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                int_ptr_4 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_4 = *local_338;
                val_8 = local_338[1];
                poly_write_ptr_3[4] = 0;
                poly_write_ptr_3[3] = val_8;
                poly_write_ptr_3[5] = 0;
                poly_write_ptr_3[6] = (local_338[2] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[7] = *int_ptr_3;
                val_8 = local_338[0x71];
                poly_write_ptr_3[9] = 0x1fffff;
                poly_write_ptr_3[8] = val_8;
                poly_write_ptr_3[10] = 0;
                poly_write_ptr_3[0xb] = (local_338[0x72] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[0xc] = *int_ptr_2;
                val_8 = local_334[0x71];
                poly_write_ptr_3[0xe] = 0x1fffff;
                poly_write_ptr_3[0xd] = val_8;
                poly_write_ptr_3[0xf] = 0x1fffff;
                poly_write_ptr_3[0x10] = (local_334[0x72] >> 0x10) * 0x100 + 0xc0000;
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            if ((*(ushort *)(local_338 + 2) &
                 *(ushort *)(local_334 + 0x72) & *(ushort *)(local_334 + 2) & 0x1f8) == 0) {
              val_8 = (*local_334 - *int_ptr_2) * (local_338[1] - local_334[1]) -
                       (*local_338 - *local_334) * (local_334[1] - local_334[0x71]);
            }
            else {
              val_8 = 0;
            }
            if (0 < val_8) {
              val_8 = local_334[0x76];
              if (local_334[0x76] < local_334[6]) {
                val_8 = local_334[6];
              }
              if (val_8 < local_338[6]) {
                val_8 = local_338[6];
              }
              val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) - (uint)((val_8 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_2 = (&g_key_to_ascii_table)[val_8];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_2;
                (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                int_ptr_3 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_3 = *int_ptr_2;
                val_8 = local_334[0x71];
                poly_write_ptr_3[4] = 0x1fffff;
                poly_write_ptr_3[3] = val_8;
                poly_write_ptr_3[5] = 0x1fffff;
                poly_write_ptr_3[6] = (local_334[0x72] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[7] = *local_334;
                val_8 = local_334[1];
                poly_write_ptr_3[9] = 0;
                poly_write_ptr_3[10] = 0x1fffff;
                poly_write_ptr_3[8] = val_8;
                poly_write_ptr_3[0xb] = (local_334[2] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[0xc] = *local_338;
                val_8 = local_338[1];
                poly_write_ptr_3[0xe] = 0;
                poly_write_ptr_3[0xf] = 0;
                poly_write_ptr_3[0xd] = val_8;
                poly_write_ptr_3[0x10] = (local_338[2] >> 0x10) * 0x100 + 0xc0000;
              }
            }
          }
        }
        else {
          int_ptr_5 = local_338 + val_8 * 7;
          int_ptr_4 = local_334 + val_8 * 7;
          if ((flag & 0x84) == 0) {
            uval = *(undefined2 *)
                     ((int)&g_bss_001aa97b +
                     (*(int *)((int)&g_bss_0019e973 + val_8 * 2 + val_5 + 4) >> 0x10) * 0x12);
            int_ptr_3 = int_ptr_3 + val_8 * 7;
            int_ptr_2 = int_ptr_2 + val_8 * 7;
            if ((*(ushort *)(int_ptr_2 + 2) & *(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_3 + 2) &
                0x1f8) == 0) {
              val_8 = (int_ptr_2[1] - int_ptr_3[1]) * (*int_ptr_3 - *int_ptr_5) -
                       (*int_ptr_2 - *int_ptr_3) * (int_ptr_3[1] - int_ptr_5[1]);
            }
            else {
              val_8 = 0;
            }
            if (0 < val_8) {
              val_8 = int_ptr_5[6];
              if (int_ptr_5[6] < int_ptr_3[6]) {
                val_8 = int_ptr_3[6];
              }
              if (val_8 < int_ptr_2[6]) {
                val_8 = int_ptr_2[6];
              }
              val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) - (uint)((val_8 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_2 = (&g_key_to_ascii_table)[val_8];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_2;
                (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_8 = int_ptr_5[2];
                val_6 = int_ptr_3[2];
                val_2 = int_ptr_2[2];
                int_ptr = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr = *int_ptr_5;
                poly_write_ptr_3[3] = int_ptr_5[1];
                poly_write_ptr_3[4] = 0;
                poly_write_ptr_3[6] = (val_8 >> 0x10) << 8;
                poly_write_ptr_3[5] = 0;
                poly_write_ptr_3[7] = *int_ptr_3;
                poly_write_ptr_3[8] = int_ptr_3[1];
                poly_write_ptr_3[9] = 0x1fffff;
                poly_write_ptr_3[0xb] = (val_6 >> 0x10) << 8;
                poly_write_ptr_3[10] = 0;
                poly_write_ptr_3[0xc] = *int_ptr_2;
                val_8 = int_ptr_2[1];
                poly_write_ptr_3[0xe] = 0x1fffff;
                poly_write_ptr_3[0xd] = val_8;
                poly_write_ptr_3[0xf] = 0x1fffff;
                poly_write_ptr_3[0x10] = (val_2 >> 0x10) << 8;
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            if ((*(ushort *)(int_ptr_4 + 2) & *(ushort *)(int_ptr_2 + 2) & *(ushort *)(int_ptr_5 + 2) &
                0x1f8) == 0) {
              val_8 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_2) -
                       (*int_ptr_5 - *int_ptr_4) * (int_ptr_4[1] - int_ptr_2[1]);
            }
            else {
              val_8 = 0;
            }
            if (0 < val_8) {
              val_8 = int_ptr_2[6];
              if (int_ptr_2[6] < int_ptr_4[6]) {
                val_8 = int_ptr_4[6];
              }
              if (val_8 < int_ptr_5[6]) {
                val_8 = int_ptr_5[6];
              }
              val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) - (uint)((val_8 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_2 = (&g_key_to_ascii_table)[val_8];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_2;
                (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_8 = int_ptr_2[2];
                val_6 = int_ptr_4[2];
                val = int_ptr_5[2];
                int_ptr_3 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_3 = *int_ptr_2;
                poly_write_ptr_3[3] = int_ptr_2[1];
                poly_write_ptr_3[4] = 0x1fffff;
                poly_write_ptr_3[6] = (val_8 >> 0x10) << 8;
                poly_write_ptr_3[5] = 0x1fffff;
                poly_write_ptr_3[7] = *int_ptr_4;
                val_8 = int_ptr_4[1];
                poly_write_ptr_3[9] = 0;
                poly_write_ptr_3[10] = 0x1fffff;
                poly_write_ptr_3[8] = val_8;
                poly_write_ptr_3[0xb] = (val_6 >> 0x10) << 8;
                int_ptr_2 = poly_write_ptr_3 + 0xc;
                *int_ptr_2 = *int_ptr_5;
                val_8 = int_ptr_5[1];
                poly_write_ptr_3[0xe] = 0;
                poly_write_ptr_3[0xd] = val_8;
LAB_0009b8e3:
                int_ptr_2[3] = 0;
                int_ptr_2[4] = (val >> 0x10) << 8;
              }
            }
          }
          else {
            int_ptr_2 = int_ptr_4 + 0x70;
            int_ptr_3 = int_ptr_5 + 0x70;
            if ((flag & 1) == 0) {
              if ((*(ushort *)(int_ptr_4 + 0x72) &
                   *(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_5 + 0x72) & 0x1f8) == 0) {
                val_8 = (int_ptr_4[0x71] - int_ptr_5[0x71]) * (*int_ptr_3 - *int_ptr_5) -
                         (*int_ptr_2 - *int_ptr_3) * (int_ptr_5[0x71] - int_ptr_5[1]);
              }
              else {
                val_8 = 0;
              }
              if (0 < val_8) {
                val_8 = int_ptr_5[6];
                if (int_ptr_5[6] < int_ptr_5[0x76]) {
                  val_8 = int_ptr_5[0x76];
                }
                if (val_8 < int_ptr_4[0x76]) {
                  val_8 = int_ptr_4[0x76];
                }
                val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) -
                              (uint)((val_8 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_8];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                  int_ptr = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_5;
                  val_8 = int_ptr_5[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[3] = val_8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[6] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_3;
                  val_8 = int_ptr_5[0x71];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[8] = val_8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xb] = (int_ptr_5[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_2;
                  val_8 = int_ptr_4[0x71];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_4 + 0x72) & *(ushort *)(int_ptr_4 + 2)
                  & 0x1f8) == 0) {
                val_8 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_2) -
                         (*int_ptr_5 - *int_ptr_4) * (int_ptr_4[1] - int_ptr_4[0x71]);
              }
              else {
                val_8 = 0;
              }
              if (0 < val_8) {
                val_8 = int_ptr_4[0x76];
                if (int_ptr_4[0x76] < int_ptr_4[6]) {
                  val_8 = int_ptr_4[6];
                }
                if (val_8 < int_ptr_5[6]) {
                  val_8 = int_ptr_5[6];
                }
                val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) -
                              (uint)((val_8 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_8];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                  int_ptr_3 = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr_3 = *int_ptr_2;
                  val_8 = int_ptr_4[0x71];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[3] = val_8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[6] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_4;
                  val_8 = int_ptr_4[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[8] = val_8;
                  poly_write_ptr_3[0xb] = (int_ptr_4[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_5;
                  val_8 = int_ptr_5[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0x10] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
            else {
              if ((*(ushort *)(int_ptr_4 + 0x72) &
                   *(ushort *)(int_ptr_5 + 0x72) & *(ushort *)(int_ptr_5 + 2) & 0x1f8) == 0) {
                val_8 = (int_ptr_4[0x71] - int_ptr_5[0x71]) * (*int_ptr_3 - *int_ptr_5) -
                         (*int_ptr_2 - *int_ptr_3) * (int_ptr_5[0x71] - int_ptr_5[1]);
              }
              else {
                val_8 = 0;
              }
              if (0 < val_8) {
                val_8 = int_ptr_5[6];
                if (int_ptr_5[6] < int_ptr_5[0x76]) {
                  val_8 = int_ptr_5[0x76];
                }
                if (val_8 < int_ptr_4[0x76]) {
                  val_8 = int_ptr_4[0x76];
                }
                val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) -
                              (uint)((val_8 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_8];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x243;
                  int_ptr = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_5;
                  val_8 = int_ptr_5[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[3] = val_8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[6] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_3;
                  val_8 = int_ptr_5[0x71];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[8] = val_8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xb] = (int_ptr_5[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_2;
                  val_8 = int_ptr_4[0x71];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_4 + 0x72) & *(ushort *)(int_ptr_4 + 2)
                  & 0x1f8) == 0) {
                val_8 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_2) -
                         (*int_ptr_5 - *int_ptr_4) * (int_ptr_4[1] - int_ptr_4[0x71]);
              }
              else {
                val_8 = 0;
              }
              if (0 < val_8) {
                val_8 = int_ptr_4[0x76];
                if (int_ptr_4[0x76] < int_ptr_4[6]) {
                  val_8 = int_ptr_4[6];
                }
                if (val_8 < int_ptr_5[6]) {
                  val_8 = int_ptr_5[6];
                }
                val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) -
                              (uint)((val_8 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_2 = (&g_key_to_ascii_table)[val_8];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_2;
                  (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x243;
                  int_ptr_3 = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr_3 = *int_ptr_2;
                  val_8 = int_ptr_4[0x71];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[3] = val_8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[6] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_4;
                  val_8 = int_ptr_4[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[8] = val_8;
                  poly_write_ptr_3[0xb] = (int_ptr_4[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_5;
                  val_8 = int_ptr_5[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0xd] = val_8;
                  poly_write_ptr_3[0x10] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
          }
        }
        poly_write_ptr_3 = g_render_poly_write_ptr;
        val_8 = (&g_bss_00377b70)[uval_4];
        if (val_8 != 0) {
          val_5 = (*(int *)((int)&g_bss_0019e973 + val_8 * 2 + val_5 + 4) >> 0x10) * 0x12;
          int_ptr_2 = local_338 + val_8 * 7 + 0x70;
          int_ptr_3 = local_334 + val_8 * 7 + 0x70;
          int_ptr_5 = local_338 + val_8 * 7;
          int_ptr_4 = local_334 + val_8 * 7;
          uval = *(undefined2 *)((int)&g_bss_001aa97b + val_5);
          if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_2 + 2) & *(ushort *)(int_ptr_3 + 2) &
              0x1f8) == 0) {
            val_8 = (int_ptr_3[1] - int_ptr_2[1]) * (*int_ptr_2 - *int_ptr_5) -
                     (*int_ptr_3 - *int_ptr_2) * (int_ptr_2[1] - int_ptr_5[1]);
          }
          else {
            val_8 = 0;
          }
          if (0 < val_8) {
            val_8 = int_ptr_5[6];
            if (int_ptr_5[6] < int_ptr_2[6]) {
              val_8 = int_ptr_2[6];
            }
            if (val_8 < int_ptr_3[6]) {
              val_8 = int_ptr_3[6];
            }
            val_8 = (int)((val_8 + (val_8 >> 0x1f) * -0x10) - (uint)((val_8 >> 0x1f) << 3 < 0))
                     >> 4;
            if (g_render_poly_write_ptr < g_render_poly_buf_end) {
              uval_2 = (&g_key_to_ascii_table)[val_8];
              *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
              *g_render_poly_write_ptr = uval_2;
              (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr;
              *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
              val_8 = int_ptr_5[2];
              val_6 = int_ptr_2[2];
              val_2 = int_ptr_3[2];
              int_ptr = g_render_poly_write_ptr + 2;
              g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
              *int_ptr = *int_ptr_5;
              poly_write_ptr_3[3] = int_ptr_5[1];
              poly_write_ptr_3[4] = 0;
              poly_write_ptr_3[6] = (val_8 >> 0x10) << 8;
              poly_write_ptr_3[5] = 0;
              poly_write_ptr_3[7] = *int_ptr_2;
              poly_write_ptr_3[8] = int_ptr_2[1];
              poly_write_ptr_3[9] = 0x1fffff;
              poly_write_ptr_3[0xb] = (val_6 >> 0x10) << 8;
              poly_write_ptr_3[10] = 0;
              poly_write_ptr_3[0xc] = *int_ptr_3;
              val_8 = int_ptr_3[1];
              poly_write_ptr_3[0xe] = 0x1fffff;
              poly_write_ptr_3[0xd] = val_8;
              poly_write_ptr_3[0xf] = 0x1fffff;
              poly_write_ptr_3[0x10] = (val_2 >> 0x10) << 8;
            }
          }
          poly_write_ptr_3 = g_render_poly_write_ptr;
          uval = *(undefined2 *)((int)&g_bss_001aa97b + val_5);
          if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_3 + 2) & *(ushort *)(int_ptr_4 + 2) &
              0x1f8) == 0) {
            val_5 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_3) -
                     (*int_ptr_5 - *int_ptr_4) * (int_ptr_4[1] - int_ptr_3[1]);
          }
          else {
            val_5 = 0;
          }
          if (0 < val_5) {
            val_5 = int_ptr_3[6];
            if (int_ptr_3[6] < int_ptr_4[6]) {
              val_5 = int_ptr_4[6];
            }
            if (val_5 < int_ptr_5[6]) {
              val_5 = int_ptr_5[6];
            }
            val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) - (uint)((val_5 >> 0x1f) << 3 < 0))
                     >> 4;
            if (g_render_poly_write_ptr < g_render_poly_buf_end) {
              uval_2 = (&g_key_to_ascii_table)[val_5];
              *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
              *g_render_poly_write_ptr = uval_2;
              (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
              *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
              val_5 = int_ptr_4[2];
              val_8 = int_ptr_3[2];
              val_6 = int_ptr_5[2];
              int_ptr_2 = g_render_poly_write_ptr + 2;
              g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
              *int_ptr_2 = *int_ptr_3;
              val_2 = int_ptr_3[1];
              poly_write_ptr_3[4] = 0x1fffff;
              poly_write_ptr_3[5] = 0x1fffff;
              poly_write_ptr_3[3] = val_2;
              poly_write_ptr_3[6] = (val_8 >> 0x10) << 8;
              poly_write_ptr_3[7] = *int_ptr_4;
              val_8 = int_ptr_4[1];
              poly_write_ptr_3[9] = 0;
              poly_write_ptr_3[8] = val_8;
              poly_write_ptr_3[10] = 0x1fffff;
              poly_write_ptr_3[0xb] = (val_5 >> 0x10) << 8;
              poly_write_ptr_3[0xc] = *int_ptr_5;
              val_5 = int_ptr_5[1];
              poly_write_ptr_3[0xe] = 0;
              poly_write_ptr_3[0xd] = val_5;
              poly_write_ptr_3[0xf] = 0;
              poly_write_ptr_3[0x10] = (val_6 >> 0x10) << 8;
            }
          }
        }
        local_338 = local_338 + 0x70;
        local_334 = local_334 + 0x70;
        local_78 = local_78 + 5;
        local_74 = local_74 + 5;
        val_3 = val_3 + 1;
        local_328 = local_328 + 1;
      } while ((int)local_328 < val_7);
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_build_subtile_column_geometry_low (Original VA: 0x9bdf0, Ghidra: FUN_0009bdf0)
 * Prototype: void engine3_build_subtile_column_geometry_low(void);
 * Address  : 0x9bdf0 (Size: 12618 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Generate 3D voxel column faces for visible subtile strip (low detail)
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 1 -> ssprite_decode_and_blit_rle_frame
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0009e4ee) */
/* WARNING: Removing unreachable block (ram,0x0009dd65) */
/* WARNING: Removing unreachable block (ram,0x0009e6f7) */
/* WARNING: Removing unreachable block (ram,0x0009df79) */
/* WARNING: Removing unreachable block (ram,0x0009e951) */
/* WARNING: Removing unreachable block (ram,0x0009eb78) */

void engine3_build_subtile_column_geometry_low(void)

{
  int *poly_write_ptr;
  int *int_ptr;
  int *poly_write_ptr_2;
  byte flag;
  short short_val;
  undefined2 uval;
  ushort uval_2;
  undefined4 uval_3;
  int val;
  int val_2;
  int val_3;
  undefined4 *poly_write_ptr_3;
  int arg_eax;
  int val_4;
  uint uval_4;
  int val_5;
  uint uval_5;
  int arg_ecx;
  int *int_ptr_2;
  int arg_edx;
  int arg_ebx;
  int *int_ptr_3;
  int val_6;
  int *int_ptr_4;
  int *int_ptr_5;
  int *local_340;
  int *local_33c;
  int local_330;
  undefined4 *local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  short *local_304;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_270;
  int local_26c;
  int local_268;
  int local_248;
  int local_244;
  int local_240;
  int local_210;
  int local_20c;
  int local_208;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_18c;
  int local_188;
  int local_184;
  int *local_90;
  int *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_3c;
  
  if ((0 < arg_edx) && (arg_edx < 0xff)) {
    if (arg_eax + arg_ebx < 1) {
      arg_ebx = 1 - arg_eax;
    }
    if (0xff < arg_eax + arg_ecx) {
      arg_ecx = 0xff - arg_eax;
    }
    val_6 = arg_eax + arg_ebx;
    val_4 = (arg_ebx + 0x1f) * 0x1c0;
    local_340 = (int *)(g_bss_00387218 + val_4);
    local_33c = (int *)(g_bss_0038721c + val_4);
    val_3 = g_bss_002e6f23 * 6;
    uval_4 = (*(ushort *)((int)&g_bss_0019e973 + g_bss_002e6f23 * 0x18 + 3) & 0xff) & 0xffffff03;
    local_330 = 0;
    val_4 = val_6 * 5;
    local_74 = arg_edx * 0x500;
    local_88 = (int)&g_map_subtiles + local_74 + val_4;
    local_84 = val_4 + local_74;
    local_80 = val_4 + -0x500 + local_74;
    local_7c = val_4 + 0x500 + local_74;
    local_78 = val_4 + -5 + local_74;
    local_74 = val_4 + 5 + local_74;
    if (0 < arg_ecx - arg_ebx) {
      do {
        flag = *(byte *)((int)&g_map_subtiles + local_84);
        local_324 = &g_bss_0019e973 + val_3;
        local_320 = uval_4;
        local_30c = uval_4;
        if ((*(uint *)(local_88 + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
          if ((*(uint *)(local_88 + 1) & 0x3ff800) != 0) {
            ssprite_decode_and_blit_rle_frame(val_6);
          }
          uval_5 = *(uint *)(local_88 + 1) & 0x7ff;
          val_4 = uval_5 * 0x18;
          local_324 = &g_bss_0019e973 + uval_5 * 6;
          uval_2 = *(ushort *)((int)&g_bss_0019e973 + val_4 + 3);
          local_30c = (uint)uval_2;
          local_320 = local_30c;
          if (((7 < uval_2) && ((*(byte *)((int)&g_map_subtiles + local_84) & 0x42) == 0)) &&
             ((*(byte *)((int)&g_bss_0019e973 + val_4 + 2) & 0xe) == 0)) {
            local_320 = local_30c & 3;
          }
        }
        local_31c = uval_4;
        if ((*(uint *)(local_88 + -0x4ff) >> 0x1c & (uint)g_bss_00379395) != 0) {
          val_4 = (*(uint *)(local_88 + -0x4ff) & 0x7ff) * 0x18;
          uval_2 = *(ushort *)((int)&g_bss_0019e973 + val_4 + 3);
          local_31c = (uint)uval_2;
          if (((7 < uval_2) && ((*(byte *)((int)&g_map_subtiles + local_80) & 0x42) == 0)) &&
             ((*(byte *)((int)&g_bss_0019e973 + val_4 + 2) & 0xe) == 0)) {
            local_31c = local_31c & 3;
          }
        }
        local_314 = uval_4;
        if ((*(uint *)(local_88 + 0x501) >> 0x1c & (uint)g_bss_00379395) != 0) {
          val_4 = (*(uint *)(local_88 + 0x501) & 0x7ff) * 0x18;
          local_314 = (uint)*(ushort *)((int)&g_bss_0019e973 + val_4 + 3);
          if (((7 < local_314) && ((*(byte *)((int)&g_map_subtiles + local_7c) & 0x42) == 0)) &&
             ((*(byte *)((int)&g_bss_0019e973 + val_4 + 2) & 0xe) == 0)) {
            local_314 = local_314 & 3;
          }
        }
        local_310 = uval_4;
        if ((*(uint *)(local_88 + -4) >> 0x1c & (uint)g_bss_00379395) != 0) {
          val_4 = (*(uint *)(local_88 + -4) & 0x7ff) * 0x18;
          uval_2 = *(ushort *)((int)&g_bss_0019e973 + val_4 + 3);
          local_310 = (uint)uval_2;
          if (((7 < uval_2) && ((*(byte *)((int)&g_map_subtiles + local_78) & 0x42) == 0)) &&
             ((*(byte *)((int)&g_bss_0019e973 + val_4 + 2) & 0xe) == 0)) {
            local_310 = local_310 & 3;
          }
        }
        local_318 = uval_4;
        if ((*(uint *)(local_88 + 6) >> 0x1c & (uint)g_bss_00379395) != 0) {
          val_4 = (*(uint *)(local_88 + 6) & 0x7ff) * 0x18;
          uval_2 = *(ushort *)((int)&g_bss_0019e973 + val_4 + 3);
          local_318 = (uint)uval_2;
          if (((7 < uval_2) && ((*(byte *)((int)&g_map_subtiles + local_74) & 0x42) == 0)) &&
             ((*(byte *)((int)&g_bss_0019e973 + val_4 + 2) & 0xe) == 0)) {
            local_318 = local_318 & 3;
          }
        }
        local_304 = (short *)(local_324 + 2);
        local_90 = local_340 + 0x70;
        int_ptr_2 = local_33c + 0x77;
        local_8c = local_33c + 0x70;
        int_ptr_3 = local_340 + 0x77;
        int_ptr_4 = local_33c;
        int_ptr_5 = local_340;
        for (local_3c = 1; poly_write_ptr_3 = g_render_poly_write_ptr, val_4 = g_bss_0037937c, uval_5 = local_3c & 0xffff
            , uval_5 <= local_320; local_3c = local_3c * 2) {
          short_val = *local_304;
          if ((uval_5 & local_320) != 0) {
            if ((local_31c & uval_5) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d44 * 2 + short_val * 0x12);
              int_ptr = int_ptr_5 + 7;
              if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_3 + 2) & *(ushort *)(int_ptr_5 + 9) &
                  0x1f8) == 0) {
                val_5 = (int_ptr_5[1] - int_ptr_5[8]) * (*int_ptr - *int_ptr_3) -
                         (int_ptr_5[8] - int_ptr_3[1]) * (*int_ptr_5 - *int_ptr);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = int_ptr_3[6];
                if (int_ptr_3[6] < int_ptr_5[0xd]) {
                  val_5 = int_ptr_5[0xd];
                }
                if (val_5 < int_ptr_5[6]) {
                  val_5 = int_ptr_5[6];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_2d0 = int_ptr_3[2] >> 0x10;
                  local_2cc = int_ptr_5[9] >> 0x10;
                  local_2c8 = int_ptr_5[2] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_2d0 = local_2d0 * val_4 >> 0x11;
                    local_2cc = local_2cc * val_4 >> 0x11;
                    local_2c8 = val_4 * local_2c8 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *int_ptr_3;
                  poly_write_ptr_3[3] = int_ptr_3[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_2d0 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *int_ptr;
                  poly_write_ptr_3[8] = int_ptr_5[8];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_2cc << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *int_ptr_5;
                  val_4 = int_ptr_5[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_2c8 << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_4 = g_bss_0037937c;
              if ((*(ushort *)(int_ptr_3 + 2) & *(ushort *)(int_ptr_5 + 2) & *(ushort *)(local_90 + 2) &
                  0x1f8) == 0) {
                val_5 = (*local_90 - *int_ptr_5) * (int_ptr_3[1] - local_90[1]) -
                         (local_90[1] - int_ptr_5[1]) * (*int_ptr_3 - *local_90);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = int_ptr_5[6];
                if (int_ptr_5[6] < local_90[6]) {
                  val_5 = local_90[6];
                }
                if (val_5 < int_ptr_3[6]) {
                  val_5 = int_ptr_3[6];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_2a8 = int_ptr_5[2] >> 0x10;
                  local_2a4 = local_90[2] >> 0x10;
                  local_2a0 = int_ptr_3[2] >> 0x10;
                  int_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_2a8 = local_2a8 * val_4 >> 0x11;
                    local_2a4 = local_2a4 * val_4 >> 0x11;
                    local_2a0 = val_4 * local_2a0 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_5;
                  poly_write_ptr_3[3] = int_ptr_5[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_2a8 << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *local_90;
                  poly_write_ptr_3[8] = local_90[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_2a4 << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr_3;
                  val_4 = int_ptr_3[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_2a0 << 8;
                }
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            val_4 = g_bss_00379380;
            if ((local_3c & 0xffff & local_314) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d46 * 2 + short_val * 0x12);
              int_ptr = int_ptr_4 + 7;
              if ((*(ushort *)(local_8c + 2) & *(ushort *)(int_ptr_4 + 9) & *(ushort *)(int_ptr_2 + 2) &
                  0x1f8) == 0) {
                val_5 = (*int_ptr_2 - *int_ptr) * (local_8c[1] - int_ptr_2[1]) -
                         (int_ptr_2[1] - int_ptr_4[8]) * (*local_8c - *int_ptr_2);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = int_ptr_4[0xd];
                if (int_ptr_4[0xd] < int_ptr_2[6]) {
                  val_5 = int_ptr_2[6];
                }
                if (val_5 < local_8c[6]) {
                  val_5 = local_8c[6];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_270 = int_ptr_4[9] >> 0x10;
                  local_26c = int_ptr_2[2] >> 0x10;
                  local_268 = local_8c[2] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_270 = local_270 * val_4 >> 0x11;
                    local_26c = local_26c * val_4 >> 0x11;
                    local_268 = val_4 * local_268 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *int_ptr;
                  poly_write_ptr_3[3] = int_ptr_4[8];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_270 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *int_ptr_2;
                  poly_write_ptr_3[8] = int_ptr_2[1];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_26c << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *local_8c;
                  val_4 = local_8c[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_268 << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_4 = g_bss_00379380;
              if ((*(ushort *)(int_ptr_4 + 9) & *(ushort *)(local_8c + 2) & *(ushort *)(int_ptr_4 + 2) &
                  0x1f8) == 0) {
                val_5 = (*int_ptr_4 - *local_8c) * (int_ptr_4[8] - int_ptr_4[1]) -
                         (int_ptr_4[1] - local_8c[1]) * (*int_ptr - *int_ptr_4);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = local_8c[6];
                if (local_8c[6] < int_ptr_4[6]) {
                  val_5 = int_ptr_4[6];
                }
                if (val_5 < int_ptr_4[0xd]) {
                  val_5 = int_ptr_4[0xd];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_248 = local_8c[2] >> 0x10;
                  local_244 = int_ptr_4[2] >> 0x10;
                  local_240 = int_ptr_4[9] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_248 = local_248 * val_4 >> 0x11;
                    local_244 = local_244 * val_4 >> 0x11;
                    local_240 = val_4 * local_240 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *local_8c;
                  poly_write_ptr_3[3] = local_8c[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_248 << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *int_ptr_4;
                  poly_write_ptr_3[8] = int_ptr_4[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_244 << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr;
                  val_4 = int_ptr_4[8];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_240 << 8;
                }
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            val_4 = g_bss_00379374;
            if ((local_3c & 0xffff & local_310) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d47 * 2 + short_val * 0x12);
              int_ptr = int_ptr_5 + 7;
              poly_write_ptr = int_ptr_4 + 7;
              if ((*(ushort *)(int_ptr_4 + 9) & *(ushort *)(int_ptr_5 + 9) & *(ushort *)(int_ptr_4 + 2) &
                  0x1f8) == 0) {
                val_5 = (int_ptr_4[1] - int_ptr_4[8]) * (*poly_write_ptr - *int_ptr) -
                         (*int_ptr_4 - *poly_write_ptr) * (int_ptr_4[8] - int_ptr_5[8]);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = int_ptr_5[0xd];
                if (int_ptr_5[0xd] < int_ptr_4[0xd]) {
                  val_5 = int_ptr_4[0xd];
                }
                if (val_5 < int_ptr_4[6]) {
                  val_5 = int_ptr_4[6];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_210 = int_ptr_5[9] >> 0x10;
                  local_20c = int_ptr_4[9] >> 0x10;
                  local_208 = int_ptr_4[2] >> 0x10;
                  poly_write_ptr_2 = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_210 = local_210 * val_4 >> 0x11;
                    local_20c = local_20c * val_4 >> 0x11;
                    local_208 = val_4 * local_208 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr_2 = *int_ptr;
                  poly_write_ptr_3[3] = int_ptr_5[8];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_210 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *poly_write_ptr;
                  poly_write_ptr_3[8] = int_ptr_4[8];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_20c << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *int_ptr_4;
                  val_4 = int_ptr_4[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_208 << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_4 = g_bss_00379374;
              if ((*(ushort *)(int_ptr_5 + 9) & *(ushort *)(int_ptr_4 + 2) & *(ushort *)(int_ptr_5 + 2) &
                  0x1f8) == 0) {
                val_5 = (*int_ptr_5 - *int_ptr_4) * (int_ptr_5[8] - int_ptr_5[1]) -
                         (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr - *int_ptr_5);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = int_ptr_4[6];
                if (int_ptr_4[6] < int_ptr_5[6]) {
                  val_5 = int_ptr_5[6];
                }
                if (val_5 < int_ptr_5[0xd]) {
                  val_5 = int_ptr_5[0xd];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_1e8 = int_ptr_4[2] >> 0x10;
                  local_1e4 = int_ptr_5[2] >> 0x10;
                  local_1e0 = int_ptr_5[9] >> 0x10;
                  poly_write_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_1e8 = local_1e8 * val_4 >> 0x11;
                    local_1e4 = local_1e4 * val_4 >> 0x11;
                    local_1e0 = val_4 * local_1e0 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *poly_write_ptr = *int_ptr_4;
                  poly_write_ptr_3[3] = int_ptr_4[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_1e8 << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *int_ptr_5;
                  poly_write_ptr_3[8] = int_ptr_5[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_1e4 << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr;
                  val_4 = int_ptr_5[8];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_1e0 << 8;
                }
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            val_4 = g_bss_00379378;
            if ((local_3c & 0xffff & local_318) == 0) {
              uval = *(undefined2 *)((int)&g_bss_001aa973 + (uint)g_data_00191d45 * 2 + short_val * 0x12);
              if ((*(ushort *)(local_90 + 2) & *(ushort *)(int_ptr_2 + 2) & *(ushort *)(int_ptr_3 + 2) &
                  0x1f8) == 0) {
                val_5 = (*int_ptr_3 - *int_ptr_2) * (local_90[1] - int_ptr_3[1]) -
                         (int_ptr_3[1] - int_ptr_2[1]) * (*local_90 - *int_ptr_3);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = int_ptr_2[6];
                if (int_ptr_2[6] < int_ptr_3[6]) {
                  val_5 = int_ptr_3[6];
                }
                if (val_5 < local_90[6]) {
                  val_5 = local_90[6];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_1b4 = int_ptr_2[2] >> 0x10;
                  local_1b0 = int_ptr_3[2] >> 0x10;
                  local_1ac = local_90[2] >> 0x10;
                  int_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_1b4 = local_1b4 * val_4 >> 0x11;
                    local_1b0 = local_1b0 * val_4 >> 0x11;
                    local_1ac = val_4 * local_1ac >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_2;
                  poly_write_ptr_3[3] = int_ptr_2[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[6] = local_1b4 << 8;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[7] = *int_ptr_3;
                  poly_write_ptr_3[8] = int_ptr_3[1];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[0xb] = local_1b0 << 8;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xc] = *local_90;
                  val_4 = local_90[1];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = local_1ac << 8;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              val_4 = g_bss_00379378;
              if ((*(ushort *)(int_ptr_2 + 2) & *(ushort *)(local_90 + 2) & *(ushort *)(local_8c + 2)
                  & 0x1f8) == 0) {
                val_5 = (*local_8c - *local_90) * (int_ptr_2[1] - local_8c[1]) -
                         (local_8c[1] - local_90[1]) * (*int_ptr_2 - *local_8c);
              }
              else {
                val_5 = 0;
              }
              if (0 < val_5) {
                val_5 = local_90[6];
                if (local_90[6] < local_8c[6]) {
                  val_5 = local_8c[6];
                }
                if (val_5 < int_ptr_2[6]) {
                  val_5 = int_ptr_2[6];
                }
                val_5 = (int)((val_5 + (val_5 >> 0x1f) * -0x10) -
                              (uint)((val_5 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_5];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                  local_18c = local_90[2] >> 0x10;
                  local_188 = local_8c[2] >> 0x10;
                  local_184 = int_ptr_2[2] >> 0x10;
                  int_ptr = g_render_poly_write_ptr + 2;
                  if (-1 < val_4) {
                    val_4 = val_4 * 4 + 0x10000;
                    local_18c = local_18c * val_4 >> 0x11;
                    local_188 = local_188 * val_4 >> 0x11;
                    local_184 = val_4 * local_184 >> 0x11;
                  }
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *local_90;
                  poly_write_ptr_3[3] = local_90[1];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[6] = local_18c << 8;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[7] = *local_8c;
                  poly_write_ptr_3[8] = local_8c[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[0xb] = local_188 << 8;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[0xc] = *int_ptr_2;
                  val_4 = int_ptr_2[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0x10] = local_184 << 8;
                }
              }
            }
          }
          int_ptr_3 = int_ptr_3 + 7;
          int_ptr_5 = int_ptr_5 + 7;
          int_ptr_2 = int_ptr_2 + 7;
          int_ptr_4 = int_ptr_4 + 7;
          local_8c = local_8c + 7;
          local_304 = local_304 + 1;
          local_90 = local_90 + 7;
        }
        val_4 = (&g_bss_00377f70)[local_320];
        int_ptr_3 = local_340 + 0x70;
        int_ptr_2 = local_33c + 0x70;
        if (val_4 == 0) {
          if ((flag & 4) == 0) {
            uval = *(undefined2 *)((int)local_324 + 5);
            if ((*(ushort *)(local_33c + 0x72) &
                 *(ushort *)(local_340 + 2) & *(ushort *)(local_340 + 0x72) & 0x1f8) == 0) {
              val_4 = (local_33c[0x71] - local_340[0x71]) * (*int_ptr_3 - *local_340) -
                       (*int_ptr_2 - *int_ptr_3) * (local_340[0x71] - local_340[1]);
            }
            else {
              val_4 = 0;
            }
            if (0 < val_4) {
              val_4 = local_340[6];
              if (local_340[6] < local_340[0x76]) {
                val_4 = local_340[0x76];
              }
              if (val_4 < local_33c[0x76]) {
                val_4 = local_33c[0x76];
              }
              val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_3 = (&g_key_to_ascii_table)[val_4];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_3;
                (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_4 = local_340[2];
                val_5 = local_340[0x72];
                val = local_33c[0x72];
                int_ptr_4 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_4 = *local_340;
                poly_write_ptr_3[3] = local_340[1];
                poly_write_ptr_3[4] = 0;
                poly_write_ptr_3[6] = (val_4 >> 0x10) << 8;
                poly_write_ptr_3[5] = 0;
                poly_write_ptr_3[7] = *int_ptr_3;
                val_4 = local_340[0x71];
                poly_write_ptr_3[9] = 0x1fffff;
                poly_write_ptr_3[10] = 0;
                poly_write_ptr_3[8] = val_4;
                poly_write_ptr_3[0xb] = (val_5 >> 0x10) << 8;
                poly_write_ptr_3[0xc] = *int_ptr_2;
                val_4 = local_33c[0x71];
                poly_write_ptr_3[0xe] = 0x1fffff;
                poly_write_ptr_3[0xd] = val_4;
                poly_write_ptr_3[0xf] = 0x1fffff;
                poly_write_ptr_3[0x10] = (val >> 0x10) << 8;
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            uval = *(undefined2 *)((int)local_324 + 5);
            if ((*(ushort *)(local_340 + 2) &
                 *(ushort *)(local_33c + 2) & *(ushort *)(local_33c + 0x72) & 0x1f8) == 0) {
              val_4 = (local_340[1] - local_33c[1]) * (*local_33c - *int_ptr_2) -
                       (*local_340 - *local_33c) * (local_33c[1] - local_33c[0x71]);
            }
            else {
              val_4 = 0;
            }
            if (0 < val_4) {
              val_4 = local_33c[0x76];
              if (local_33c[0x76] < local_33c[6]) {
                val_4 = local_33c[6];
              }
              if (val_4 < local_340[6]) {
                val_4 = local_340[6];
              }
              val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_3 = (&g_key_to_ascii_table)[val_4];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_3;
                (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_4 = local_33c[0x72];
                val_2 = local_340[2];
                val_5 = local_33c[2];
                int_ptr_3 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_3 = *int_ptr_2;
                val = local_33c[0x71];
                poly_write_ptr_3[4] = 0x1fffff;
                poly_write_ptr_3[3] = val;
                poly_write_ptr_3[5] = 0x1fffff;
                poly_write_ptr_3[6] = (val_4 >> 0x10) << 8;
                poly_write_ptr_3[7] = *local_33c;
                val_4 = local_33c[1];
                poly_write_ptr_3[9] = 0;
                poly_write_ptr_3[10] = 0x1fffff;
                poly_write_ptr_3[8] = val_4;
                poly_write_ptr_3[0xb] = (val_5 >> 0x10) << 8;
                int_ptr_2 = poly_write_ptr_3 + 0xc;
                *int_ptr_2 = *local_340;
                val_4 = local_340[1];
                poly_write_ptr_3[0xe] = 0;
                poly_write_ptr_3[0xd] = val_4;
                goto LAB_0009e79b;
              }
            }
          }
          else {
            if ((*(ushort *)(local_33c + 0x72) &
                 *(ushort *)(local_340 + 2) & *(ushort *)(local_340 + 0x72) & 0x1f8) == 0) {
              val_4 = (*int_ptr_3 - *local_340) * (local_33c[0x71] - local_340[0x71]) -
                       (*int_ptr_2 - *int_ptr_3) * (local_340[0x71] - local_340[1]);
            }
            else {
              val_4 = 0;
            }
            if (0 < val_4) {
              val_4 = local_340[6];
              if (local_340[6] < local_340[0x76]) {
                val_4 = local_340[0x76];
              }
              if (val_4 < local_33c[0x76]) {
                val_4 = local_33c[0x76];
              }
              val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_3 = (&g_key_to_ascii_table)[val_4];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_3;
                (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                int_ptr_4 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_4 = *local_340;
                val_4 = local_340[1];
                poly_write_ptr_3[4] = 0;
                poly_write_ptr_3[3] = val_4;
                poly_write_ptr_3[5] = 0;
                poly_write_ptr_3[6] = (local_340[2] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[7] = *int_ptr_3;
                val_4 = local_340[0x71];
                poly_write_ptr_3[9] = 0x1fffff;
                poly_write_ptr_3[8] = val_4;
                poly_write_ptr_3[10] = 0;
                poly_write_ptr_3[0xb] = (local_340[0x72] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[0xc] = *int_ptr_2;
                val_4 = local_33c[0x71];
                poly_write_ptr_3[0xe] = 0x1fffff;
                poly_write_ptr_3[0xd] = val_4;
                poly_write_ptr_3[0xf] = 0x1fffff;
                poly_write_ptr_3[0x10] = (local_33c[0x72] >> 0x10) * 0x100 + 0xc0000;
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            if ((*(ushort *)(local_340 + 2) &
                 *(ushort *)(local_33c + 0x72) & *(ushort *)(local_33c + 2) & 0x1f8) == 0) {
              val_4 = (local_340[1] - local_33c[1]) * (*local_33c - *int_ptr_2) -
                       (*local_340 - *local_33c) * (local_33c[1] - local_33c[0x71]);
            }
            else {
              val_4 = 0;
            }
            if (0 < val_4) {
              val_4 = local_33c[0x76];
              if (local_33c[0x76] < local_33c[6]) {
                val_4 = local_33c[6];
              }
              if (val_4 < local_340[6]) {
                val_4 = local_340[6];
              }
              val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_3 = (&g_key_to_ascii_table)[val_4];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_3;
                (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                int_ptr_3 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_3 = *int_ptr_2;
                val_4 = local_33c[0x71];
                poly_write_ptr_3[4] = 0x1fffff;
                poly_write_ptr_3[3] = val_4;
                poly_write_ptr_3[5] = 0x1fffff;
                poly_write_ptr_3[6] = (local_33c[0x72] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[7] = *local_33c;
                val_4 = local_33c[1];
                poly_write_ptr_3[9] = 0;
                poly_write_ptr_3[10] = 0x1fffff;
                poly_write_ptr_3[8] = val_4;
                poly_write_ptr_3[0xb] = (local_33c[2] >> 0x10) * 0x100 + 0xc0000;
                poly_write_ptr_3[0xc] = *local_340;
                val_4 = local_340[1];
                poly_write_ptr_3[0xe] = 0;
                poly_write_ptr_3[0xf] = 0;
                poly_write_ptr_3[0xd] = val_4;
                poly_write_ptr_3[0x10] = (local_340[2] >> 0x10) * 0x100 + 0xc0000;
              }
            }
          }
        }
        else {
          int_ptr_5 = local_340 + val_4 * 7;
          int_ptr_4 = local_33c + val_4 * 7;
          if ((flag & 0x84) == 0) {
            uval = *(undefined2 *)
                     ((int)&g_bss_001aa97b +
                     (*(int *)((int)local_324 + (&g_bss_00377f70)[local_30c] * 2 + 4) >> 0x10) * 0x12)
            ;
            int_ptr_3 = int_ptr_3 + val_4 * 7;
            int_ptr_2 = int_ptr_2 + val_4 * 7;
            if ((*(ushort *)(int_ptr_2 + 2) & *(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_3 + 2) &
                0x1f8) == 0) {
              val_4 = (int_ptr_2[1] - int_ptr_3[1]) * (*int_ptr_3 - *int_ptr_5) -
                       (*int_ptr_2 - *int_ptr_3) * (int_ptr_3[1] - int_ptr_5[1]);
            }
            else {
              val_4 = 0;
            }
            if (0 < val_4) {
              val_4 = int_ptr_5[6];
              if (int_ptr_5[6] < int_ptr_3[6]) {
                val_4 = int_ptr_3[6];
              }
              if (val_4 < int_ptr_2[6]) {
                val_4 = int_ptr_2[6];
              }
              val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_3 = (&g_key_to_ascii_table)[val_4];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_3;
                (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_4 = int_ptr_3[2];
                val_5 = int_ptr_5[2];
                val = int_ptr_2[2];
                int_ptr = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr = *int_ptr_5;
                val_2 = int_ptr_5[1];
                poly_write_ptr_3[4] = 0;
                poly_write_ptr_3[5] = 0;
                poly_write_ptr_3[3] = val_2;
                poly_write_ptr_3[6] = (val_5 >> 0x10) << 8;
                poly_write_ptr_3[7] = *int_ptr_3;
                poly_write_ptr_3[8] = int_ptr_3[1];
                poly_write_ptr_3[9] = 0x1fffff;
                poly_write_ptr_3[0xb] = (val_4 >> 0x10) << 8;
                poly_write_ptr_3[10] = 0;
                poly_write_ptr_3[0xc] = *int_ptr_2;
                val_4 = int_ptr_2[1];
                poly_write_ptr_3[0xe] = 0x1fffff;
                poly_write_ptr_3[0xd] = val_4;
                poly_write_ptr_3[0xf] = 0x1fffff;
                poly_write_ptr_3[0x10] = (val >> 0x10) << 8;
              }
            }
            poly_write_ptr_3 = g_render_poly_write_ptr;
            if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_4 + 2) & *(ushort *)(int_ptr_2 + 2) &
                0x1f8) == 0) {
              val_4 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_2) -
                       (*int_ptr_5 - *int_ptr_4) * (int_ptr_4[1] - int_ptr_2[1]);
            }
            else {
              val_4 = 0;
            }
            if (0 < val_4) {
              val_4 = int_ptr_2[6];
              if (int_ptr_2[6] < int_ptr_4[6]) {
                val_4 = int_ptr_4[6];
              }
              if (val_4 < int_ptr_5[6]) {
                val_4 = int_ptr_5[6];
              }
              val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0)
                            ) >> 4;
              if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                uval_3 = (&g_key_to_ascii_table)[val_4];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                *g_render_poly_write_ptr = uval_3;
                (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
                val_4 = int_ptr_4[2];
                val_5 = int_ptr_2[2];
                val_2 = int_ptr_5[2];
                int_ptr_3 = g_render_poly_write_ptr + 2;
                g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                *int_ptr_3 = *int_ptr_2;
                val = int_ptr_2[1];
                poly_write_ptr_3[4] = 0x1fffff;
                poly_write_ptr_3[5] = 0x1fffff;
                poly_write_ptr_3[3] = val;
                poly_write_ptr_3[6] = (val_5 >> 0x10) << 8;
                poly_write_ptr_3[7] = *int_ptr_4;
                poly_write_ptr_3[8] = int_ptr_4[1];
                poly_write_ptr_3[9] = 0;
                poly_write_ptr_3[0xb] = (val_4 >> 0x10) << 8;
                poly_write_ptr_3[10] = 0x1fffff;
                int_ptr_2 = poly_write_ptr_3 + 0xc;
                *int_ptr_2 = *int_ptr_5;
                val_4 = int_ptr_5[1];
                poly_write_ptr_3[0xe] = 0;
                poly_write_ptr_3[0xd] = val_4;
LAB_0009e79b:
                int_ptr_2[3] = 0;
                int_ptr_2[4] = (val_2 >> 0x10) << 8;
              }
            }
          }
          else {
            int_ptr_2 = int_ptr_4 + 0x70;
            int_ptr_3 = int_ptr_5 + 0x70;
            if ((flag & 1) == 0) {
              if ((*(ushort *)(int_ptr_4 + 0x72) &
                   *(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_5 + 0x72) & 0x1f8) == 0) {
                val_4 = (int_ptr_4[0x71] - int_ptr_5[0x71]) * (*int_ptr_3 - *int_ptr_5) -
                         (*int_ptr_2 - *int_ptr_3) * (int_ptr_5[0x71] - int_ptr_5[1]);
              }
              else {
                val_4 = 0;
              }
              if (0 < val_4) {
                val_4 = int_ptr_5[6];
                if (int_ptr_5[6] < int_ptr_5[0x76]) {
                  val_4 = int_ptr_5[0x76];
                }
                if (val_4 < int_ptr_4[0x76]) {
                  val_4 = int_ptr_4[0x76];
                }
                val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) -
                              (uint)((val_4 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_4];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                  int_ptr = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_5;
                  val_4 = int_ptr_5[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[3] = val_4;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[6] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_3;
                  val_4 = int_ptr_5[0x71];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[8] = val_4;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xb] = (int_ptr_5[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_2;
                  val_4 = int_ptr_4[0x71];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_4 + 0x72) & *(ushort *)(int_ptr_4 + 2)
                  & 0x1f8) == 0) {
                val_4 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_2) -
                         (*int_ptr_5 - *int_ptr_4) * (int_ptr_4[1] - int_ptr_4[0x71]);
              }
              else {
                val_4 = 0;
              }
              if (0 < val_4) {
                val_4 = int_ptr_4[0x76];
                if (int_ptr_4[0x76] < int_ptr_4[6]) {
                  val_4 = int_ptr_4[6];
                }
                if (val_4 < int_ptr_5[6]) {
                  val_4 = int_ptr_5[6];
                }
                val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) -
                              (uint)((val_4 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_4];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x242;
                  int_ptr_3 = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr_3 = *int_ptr_2;
                  val_4 = int_ptr_4[0x71];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[3] = val_4;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[6] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_4;
                  val_4 = int_ptr_4[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[8] = val_4;
                  poly_write_ptr_3[0xb] = (int_ptr_4[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_5;
                  val_4 = int_ptr_5[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0x10] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
            else {
              if ((*(ushort *)(int_ptr_4 + 0x72) &
                   *(ushort *)(int_ptr_5 + 0x72) & *(ushort *)(int_ptr_5 + 2) & 0x1f8) == 0) {
                val_4 = (int_ptr_4[0x71] - int_ptr_5[0x71]) * (*int_ptr_3 - *int_ptr_5) -
                         (*int_ptr_2 - *int_ptr_3) * (int_ptr_5[0x71] - int_ptr_5[1]);
              }
              else {
                val_4 = 0;
              }
              if (0 < val_4) {
                val_4 = int_ptr_5[6];
                if (int_ptr_5[6] < int_ptr_5[0x76]) {
                  val_4 = int_ptr_5[0x76];
                }
                if (val_4 < int_ptr_4[0x76]) {
                  val_4 = int_ptr_4[0x76];
                }
                val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) -
                              (uint)((val_4 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_4];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x243;
                  int_ptr = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr = *int_ptr_5;
                  val_4 = int_ptr_5[1];
                  poly_write_ptr_3[4] = 0;
                  poly_write_ptr_3[3] = val_4;
                  poly_write_ptr_3[5] = 0;
                  poly_write_ptr_3[6] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_3;
                  val_4 = int_ptr_5[0x71];
                  poly_write_ptr_3[9] = 0x1fffff;
                  poly_write_ptr_3[8] = val_4;
                  poly_write_ptr_3[10] = 0;
                  poly_write_ptr_3[0xb] = (int_ptr_5[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_2;
                  val_4 = int_ptr_4[0x71];
                  poly_write_ptr_3[0xe] = 0x1fffff;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0xf] = 0x1fffff;
                  poly_write_ptr_3[0x10] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                }
              }
              poly_write_ptr_3 = g_render_poly_write_ptr;
              if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_4 + 2) & *(ushort *)(int_ptr_4 + 0x72)
                  & 0x1f8) == 0) {
                val_4 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_2) -
                         (*int_ptr_5 - *int_ptr_4) * (int_ptr_4[1] - int_ptr_4[0x71]);
              }
              else {
                val_4 = 0;
              }
              if (0 < val_4) {
                val_4 = int_ptr_4[0x76];
                if (int_ptr_4[0x76] < int_ptr_4[6]) {
                  val_4 = int_ptr_4[6];
                }
                if (val_4 < int_ptr_5[6]) {
                  val_4 = int_ptr_5[6];
                }
                val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) -
                              (uint)((val_4 >> 0x1f) << 3 < 0)) >> 4;
                if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                  uval_3 = (&g_key_to_ascii_table)[val_4];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
                  *(undefined2 *)((int)g_render_poly_write_ptr + 6) = 0x243;
                  int_ptr_3 = g_render_poly_write_ptr + 2;
                  g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
                  *int_ptr_3 = *int_ptr_2;
                  val_4 = int_ptr_4[0x71];
                  poly_write_ptr_3[4] = 0x1fffff;
                  poly_write_ptr_3[3] = val_4;
                  poly_write_ptr_3[5] = 0x1fffff;
                  poly_write_ptr_3[6] = (int_ptr_4[0x72] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[7] = *int_ptr_4;
                  val_4 = int_ptr_4[1];
                  poly_write_ptr_3[9] = 0;
                  poly_write_ptr_3[10] = 0x1fffff;
                  poly_write_ptr_3[8] = val_4;
                  poly_write_ptr_3[0xb] = (int_ptr_4[2] >> 0x10) * 0x100 + 0xc0000;
                  poly_write_ptr_3[0xc] = *int_ptr_5;
                  val_4 = int_ptr_5[1];
                  poly_write_ptr_3[0xe] = 0;
                  poly_write_ptr_3[0xf] = 0;
                  poly_write_ptr_3[0xd] = val_4;
                  poly_write_ptr_3[0x10] = (int_ptr_5[2] >> 0x10) * 0x100 + 0xc0000;
                }
              }
            }
          }
        }
        poly_write_ptr_3 = g_render_poly_write_ptr;
        val_4 = (&g_bss_00377b70)[local_320];
        if (val_4 != 0) {
          val_5 = (*(int *)((int)local_324 + val_4 * 2 + 4) >> 0x10) * 0x12;
          int_ptr_2 = local_340 + val_4 * 7 + 0x70;
          int_ptr_3 = local_33c + val_4 * 7 + 0x70;
          int_ptr_5 = local_340 + val_4 * 7;
          int_ptr_4 = local_33c + val_4 * 7;
          uval = *(undefined2 *)((int)&g_bss_001aa97b + val_5);
          if ((*(ushort *)(int_ptr_3 + 2) & *(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_2 + 2) &
              0x1f8) == 0) {
            val_4 = (int_ptr_3[1] - int_ptr_2[1]) * (*int_ptr_2 - *int_ptr_5) -
                     (*int_ptr_3 - *int_ptr_2) * (int_ptr_2[1] - int_ptr_5[1]);
          }
          else {
            val_4 = 0;
          }
          if (0 < val_4) {
            val_4 = int_ptr_5[6];
            if (int_ptr_5[6] < int_ptr_2[6]) {
              val_4 = int_ptr_2[6];
            }
            if (val_4 < int_ptr_3[6]) {
              val_4 = int_ptr_3[6];
            }
            val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0))
                     >> 4;
            if (g_render_poly_write_ptr < g_render_poly_buf_end) {
              uval_3 = (&g_key_to_ascii_table)[val_4];
              *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
              *g_render_poly_write_ptr = uval_3;
              (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
              *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
              val_4 = int_ptr_5[2];
              val = int_ptr_2[2];
              val_2 = int_ptr_3[2];
              int_ptr = g_render_poly_write_ptr + 2;
              g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
              *int_ptr = *int_ptr_5;
              poly_write_ptr_3[3] = int_ptr_5[1];
              poly_write_ptr_3[4] = 0;
              poly_write_ptr_3[6] = (val_4 >> 0x10) << 8;
              poly_write_ptr_3[5] = 0;
              poly_write_ptr_3[7] = *int_ptr_2;
              poly_write_ptr_3[8] = int_ptr_2[1];
              poly_write_ptr_3[9] = 0x1fffff;
              poly_write_ptr_3[0xb] = (val >> 0x10) << 8;
              poly_write_ptr_3[10] = 0;
              poly_write_ptr_3[0xc] = *int_ptr_3;
              val_4 = int_ptr_3[1];
              poly_write_ptr_3[0xe] = 0x1fffff;
              poly_write_ptr_3[0xd] = val_4;
              poly_write_ptr_3[0xf] = 0x1fffff;
              poly_write_ptr_3[0x10] = (val_2 >> 0x10) << 8;
            }
          }
          poly_write_ptr_3 = g_render_poly_write_ptr;
          uval = *(undefined2 *)((int)&g_bss_001aa97b + val_5);
          if ((*(ushort *)(int_ptr_5 + 2) & *(ushort *)(int_ptr_3 + 2) & *(ushort *)(int_ptr_4 + 2) &
              0x1f8) == 0) {
            val_4 = (int_ptr_5[1] - int_ptr_4[1]) * (*int_ptr_4 - *int_ptr_3) -
                     (int_ptr_4[1] - int_ptr_3[1]) * (*int_ptr_5 - *int_ptr_4);
          }
          else {
            val_4 = 0;
          }
          if (0 < val_4) {
            val_4 = int_ptr_3[6];
            if (int_ptr_3[6] < int_ptr_4[6]) {
              val_4 = int_ptr_4[6];
            }
            if (val_4 < int_ptr_5[6]) {
              val_4 = int_ptr_5[6];
            }
            val_4 = (int)((val_4 + (val_4 >> 0x1f) * -0x10) - (uint)((val_4 >> 0x1f) << 3 < 0))
                     >> 4;
            if (g_render_poly_write_ptr < g_render_poly_buf_end) {
              uval_3 = (&g_key_to_ascii_table)[val_4];
              *(undefined1 *)(g_render_poly_write_ptr + 1) = 0;
              *g_render_poly_write_ptr = uval_3;
              (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
              *(undefined2 *)((int)g_render_poly_write_ptr + 6) = uval;
              val_4 = int_ptr_4[2];
              val_5 = int_ptr_3[2];
              val = int_ptr_5[2];
              int_ptr_2 = g_render_poly_write_ptr + 2;
              g_render_poly_write_ptr = g_render_poly_write_ptr + 0x11;
              *int_ptr_2 = *int_ptr_3;
              val_2 = int_ptr_3[1];
              poly_write_ptr_3[4] = 0x1fffff;
              poly_write_ptr_3[5] = 0x1fffff;
              poly_write_ptr_3[3] = val_2;
              poly_write_ptr_3[6] = (val_5 >> 0x10) << 8;
              poly_write_ptr_3[7] = *int_ptr_4;
              val_5 = int_ptr_4[1];
              poly_write_ptr_3[9] = 0;
              poly_write_ptr_3[8] = val_5;
              poly_write_ptr_3[10] = 0x1fffff;
              poly_write_ptr_3[0xb] = (val_4 >> 0x10) << 8;
              poly_write_ptr_3[0xc] = *int_ptr_5;
              val_4 = int_ptr_5[1];
              poly_write_ptr_3[0xe] = 0;
              poly_write_ptr_3[0xd] = val_4;
              poly_write_ptr_3[0xf] = 0;
              poly_write_ptr_3[0x10] = (val >> 0x10) << 8;
            }
          }
        }
        local_340 = local_340 + 0x70;
        local_33c = local_33c + 0x70;
        local_88 = local_88 + 5;
        local_84 = local_84 + 5;
        local_80 = local_80 + 5;
        local_7c = local_7c + 5;
        local_78 = local_78 + 5;
        local_74 = local_74 + 5;
        val_6 = val_6 + 1;
        local_330 = local_330 + 1;
      } while (local_330 < arg_ecx - arg_ebx);
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_clear_visible_subtile_span_list (Original VA: 0x9ef3c, Ghidra: FUN_0009ef3c)
 * Prototype: void engine3_clear_visible_subtile_span_list(void);
 * Address  : 0x9ef3c (Size: 870 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Reset visible subtile span buffers for g_view_render_radius
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 1 -> bflib_system_io_fn_0e8cc8
 ******************************************************************************/
void engine3_clear_visible_subtile_span_list(void)

{
  undefined *word_ptr;
  int val;
  int val_2;
  int val_3;
  int extraout_ECX;
  int val_4;
  int val_5;
  int *int_ptr;
  undefined4 *word_ptr_2;
  int val_6;
  int val_7;
  int val_8;
  undefined8 uval;
  
  val_7 = g_view_render_radius + 1;
  int_ptr = &g_bss_00379490;
  if (0 < val_7) {
    do {
      uval = bflib_system_io_fn_0e8cc8();
      val_5 = (int)((ulonglong)uval >> 0x20);
      val_3 = (int)uval;
      *(int *)(val_5 + -4) = val_3;
      int_ptr[1] = val_3;
      *(int *)(val_5 + -8) = val_3;
      *(int *)(val_5 + -8) = -val_3;
      *int_ptr = -val_3;
      int_ptr = int_ptr + -2;
    } while (extraout_ECX + 1 < val_7);
  }
  if (g_view_projection_mode != '\0') {
    word_ptr = (&PTR_LAB_00192fe0)[g_bss_00379388];
    val_5 = (&g_slab_attr_table)[g_bss_00379388];
    val = (int)word_ptr * 6 >> 0x10;
    val_2 = (g_screen_width << 7) / g_data_00191d30;
    val_4 = val_5 * -6 >> 0x10;
    val_7 = val_4 + (val_2 * (int)word_ptr + val_5 * -0x100 >> 0x10);
    val_6 = val + ((int)word_ptr * 0x100 + val_2 * val_5 >> 0x10);
    val_3 = val_4 + ((int)word_ptr * -val_2 + val_5 * -0x100 >> 0x10);
    val_2 = val + (-val_2 * val_5 + (int)word_ptr * 0x100 >> 0x10);
    int_ptr = &g_bss_00379398 + (0x1f - g_view_render_radius) * 2;
    val_5 = (val_7 - val_4) * 0x100;
    if (val_6 < val) {
      val_5 = val_5 / (val_6 - val);
      val_7 = -g_view_render_radius;
      if (-g_view_render_radius == g_view_render_radius || val_7 < g_view_render_radius) {
        val_6 = val_7 * val_5 + -val * val_5;
        do {
          val_8 = (val_6 >> 8) + val_4;
          if (val_8 < int_ptr[1]) {
            int_ptr[1] = val_8;
          }
          int_ptr = int_ptr + 2;
          val_7 = val_7 + 1;
          val_6 = val_6 + val_5;
        } while (val_7 <= g_view_render_radius);
      }
    }
    else if (val < val_6) {
      val_5 = val_5 / (val_6 - val);
      val_7 = -g_view_render_radius;
      if (-g_view_render_radius == g_view_render_radius || val_7 < g_view_render_radius) {
        val_6 = val_7 * val_5 + -val * val_5;
        do {
          val_8 = (val_6 >> 8) + val_4;
          if (*int_ptr < val_8) {
            *int_ptr = val_8;
          }
          int_ptr = int_ptr + 2;
          val_7 = val_7 + 1;
          val_6 = val_6 + val_5;
        } while (val_7 <= g_view_render_radius);
      }
    }
    else {
      word_ptr_2 = &g_bss_00379490 + val * 2;
      val_5 = val;
      if (val_4 < val_7) {
        for (; val_5 <= g_view_render_radius; val_5 = val_5 + 1) {
          word_ptr_2[1] = 0;
          *word_ptr_2 = word_ptr_2[1];
          word_ptr_2 = word_ptr_2 + 2;
        }
      }
      else {
        for (; -g_view_render_radius <= val_5; val_5 = val_5 + -1) {
          word_ptr_2[1] = 0;
          *word_ptr_2 = word_ptr_2[1];
          word_ptr_2 = word_ptr_2 + -2;
        }
      }
    }
    int_ptr = &g_bss_00379398 + (0x1f - g_view_render_radius) * 2;
    val_7 = (val_3 - val_4) * 0x100;
    if (val_2 < val) {
      val_7 = val_7 / (val_2 - val);
      val_3 = -g_view_render_radius;
      if (-g_view_render_radius == g_view_render_radius || val_3 < g_view_render_radius) {
        val_5 = val_3 * val_7 + -val * val_7;
        do {
          val = (val_5 >> 8) + val_4;
          if (*int_ptr < val) {
            *int_ptr = val;
          }
          int_ptr = int_ptr + 2;
          val_3 = val_3 + 1;
          val_5 = val_5 + val_7;
        } while (val_3 <= g_view_render_radius);
      }
    }
    else if (val < val_2) {
      val_7 = val_7 / (val_2 - val);
      val_3 = -g_view_render_radius;
      if (-g_view_render_radius == g_view_render_radius || val_3 < g_view_render_radius) {
        val_5 = val_3 * val_7 + -val * val_7;
        do {
          val = (val_5 >> 8) + val_4;
          if (val < int_ptr[1]) {
            int_ptr[1] = val;
          }
          int_ptr = int_ptr + 2;
          val_3 = val_3 + 1;
          val_5 = val_5 + val_7;
        } while (val_3 <= g_view_render_radius);
      }
    }
    else {
      word_ptr_2 = &g_bss_00379490 + val * 2;
      if (val_3 < val_4) {
        for (; val <= g_view_render_radius; val = val + 1) {
          word_ptr_2[1] = 0;
          *word_ptr_2 = word_ptr_2[1];
          word_ptr_2 = word_ptr_2 + 2;
        }
      }
      else {
        for (; -g_view_render_radius <= val; val = val + -1) {
          word_ptr_2[1] = 0;
          *word_ptr_2 = word_ptr_2[1];
          word_ptr_2 = word_ptr_2 + -2;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_intersect_frustum_edge_with_grid (Original VA: 0x9f2a4, Ghidra: FUN_0009f2a4)
 * Prototype: uint engine3_intersect_frustum_edge_with_grid(void);
 * Address  : 0x9f2a4 (Size: 111 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute subtile grid intersection along camera frustum ray
 * Callers  : 1 -> engine3_scan_frustum_subtile_bounds
 * Callees  : 0 -> 
 ******************************************************************************/
uint engine3_intersect_frustum_edge_with_grid(void)

{
  uint arg_eax;
  int arg_ecx;
  int arg_edx;
  uint arg_ebx;
  int val;
  
  val = (arg_ebx & 0xff) * 0x100;
  if (arg_ecx < 1) {
    if ((int)arg_eax < arg_edx) {
      return 0xfffff060;
    }
    do {
      if ((*(byte *)((int)&g_map_subtiles + ((arg_eax & 0xff) + val) * 5) & 0x10) != 0) {
        return arg_eax;
      }
      arg_eax = arg_eax - 1;
    } while (arg_edx <= (int)arg_eax);
    return 0xfffff060;
  }
  while( true ) {
    if (arg_edx < (int)arg_eax) {
      return 0xfffff060;
    }
    if ((*(byte *)((int)&g_map_subtiles + ((arg_eax & 0xff) + val) * 5) & 0x10) != 0) break;
    arg_eax = arg_eax + 1;
  }
  return arg_eax;
}

/******************************************************************************
 * Function : engine3_scan_frustum_subtile_bounds (Original VA: 0x9f314, Ghidra: FUN_0009f314)
 * Prototype: void engine3_scan_frustum_subtile_bounds(void);
 * Address  : 0x9f314 (Size: 1446 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute left/right visible subtile bounds across frustum edges
 * Callers  : 1 -> engine3_determine_visible_subtiles_for_camera
 * Callees  : 1 -> engine3_intersect_frustum_edge_with_grid
 ******************************************************************************/
void engine3_scan_frustum_subtile_bounds(void)

{
  bool flag;
  bool flag_2;
  int arg_eax;
  uint uval;
  uint uval_2;
  uint uval_3;
  int val;
  int arg_ecx;
  uint arg_edx;
  int arg_ebx;
  uint uval_4;
  int *int_ptr;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  flag_2 = false;
  flag = false;
  uval = engine3_intersect_frustum_edge_with_grid();
  uval_2 = engine3_intersect_frustum_edge_with_grid();
  uval_3 = engine3_intersect_frustum_edge_with_grid();
  if (((uval != 0xfffff060) && (uval_2 != 0xfffff060)) && (uval_3 != 0xfffff060)) {
    if ((int)uval_3 < (int)uval) {
      uval = uval_3;
    }
    local_10 = uval;
    if ((int)uval_2 < (int)uval) {
      local_10 = uval_2;
    }
    g_bss_00379498 = local_10 - arg_eax;
    flag_2 = true;
  }
  uval = engine3_intersect_frustum_edge_with_grid();
  uval_2 = engine3_intersect_frustum_edge_with_grid();
  uval_3 = engine3_intersect_frustum_edge_with_grid();
  if (((uval != 0xfffff060) && (uval_2 != 0xfffff060)) && (uval_3 != 0xfffff060)) {
    if ((int)uval < (int)uval_3) {
      uval = uval_3;
    }
    local_14 = uval;
    if ((int)uval < (int)uval_2) {
      local_14 = uval_2;
    }
    g_bss_0037949c = (local_14 - arg_eax) + 1;
    flag = true;
  }
  local_1c = 1;
  int_ptr = &g_bss_00379498 + arg_ebx * 2;
  local_18 = arg_edx;
  if (1 < arg_ecx) {
    while (local_18 = local_18 + arg_ebx, *int_ptr < int_ptr[1]) {
      if (flag_2) {
        uval = *int_ptr + arg_eax;
        if ((int)local_10 < (int)uval) goto LAB_0009f4a7;
      }
      else {
        uval = *int_ptr + arg_eax;
LAB_0009f4a7:
        local_10 = uval;
      }
      if (flag) {
        uval = int_ptr[1] + arg_eax;
        if ((int)uval < (int)local_14) goto LAB_0009f4c6;
      }
      else {
        uval = int_ptr[1] + arg_eax;
LAB_0009f4c6:
        local_14 = uval;
      }
      uval_2 = local_18 - arg_edx;
      uval = (int)uval_2 >> 0x1f;
      if (((uval_2 ^ uval) - uval == 1) ||
         (val = (int)(local_10 - arg_eax) / (int)(((uval_2 ^ uval) - uval) + -1),
         val == 1 || val + -1 < 0)) {
        flag_2 = false;
      }
      else {
        local_10 = local_10 + (int)(local_10 - arg_eax) / (int)(((uval_2 ^ uval) - uval) + -1) + -1;
        flag_2 = true;
      }
      uval = local_10;
      uval_2 = local_10 - 1;
      do {
        uval_3 = uval_2;
        if (int_ptr[1] + arg_eax <= (int)uval_3) break;
        uval_2 = uval_3 + 1;
      } while ((*(byte *)((int)&g_map_subtiles + ((uval_3 + 1 & 0xff) + (local_18 & 0xff) * 0x100) * 5)
               & 0x10) != 0);
      val = *int_ptr;
      if (((flag_2) || ((int)local_10 < (int)uval_3)) ||
         ((*(byte *)((int)&g_map_subtiles + ((local_18 & 0xff) * 0x100 + (uval_3 & 0xff)) * 5) & 0x10)
          != 0)) {
        *int_ptr = (local_10 - arg_eax) + -1;
        flag_2 = true;
        local_10 = uval_3;
      }
      else {
        uval_4 = local_18 - arg_edx;
        uval_2 = (int)uval_4 >> 0x1f;
        if (((uval_4 ^ uval_2) - uval_2 == 1) ||
           ((int)((int)(uval_3 - arg_eax) / (int)(((uval_4 ^ uval_2) - uval_2) + -1) + local_10 + -1) <
            *int_ptr + arg_eax)) {
          uval_2 = *int_ptr + arg_eax;
          flag_2 = false;
        }
        else {
          uval_2 = ((int)(uval_3 - arg_eax) / (int)(((uval_4 ^ uval_2) - uval_2) + -1) + local_10) - 1;
          flag_2 = true;
          *int_ptr = (uval_2 - arg_eax) + -1;
          local_10 = uval_2;
        }
        if ((int)uval_2 <= (int)uval) {
          do {
            if ((*(byte *)((int)&g_map_subtiles + ((uval & 0xff) + (local_18 & 0xff) * 0x100) * 5) &
                0x10) != 0) {
              flag_2 = true;
              *int_ptr = (uval - arg_eax) + -1;
              local_10 = uval;
              break;
            }
            uval = uval - 1;
          } while ((int)uval_2 <= (int)uval);
        }
      }
      uval_2 = local_18 - arg_edx;
      uval = (int)uval_2 >> 0x1f;
      if (((uval_2 ^ uval) - uval == 1) ||
         (-1 < (int)(local_14 - arg_eax) / (int)(((uval_2 ^ uval) - uval) + -1) + 1)) {
        flag = false;
      }
      else {
        local_14 = local_14 + (int)(local_14 - arg_eax) / (int)(((uval_2 ^ uval) - uval) + -1) + 1;
        flag = true;
      }
      uval_2 = local_14;
      uval = local_14 + 1;
      while ((val + arg_eax < (int)uval &&
             ((*(byte *)((int)&g_map_subtiles + ((uval - 1 & 0xff) + (local_18 & 0xff) * 0x100) * 5)
              & 0x10) != 0))) {
        uval = uval - 1;
      }
      if (((flag) || ((int)uval < (int)local_14)) ||
         ((*(byte *)((int)&g_map_subtiles + ((local_18 & 0xff) * 0x100 + (uval & 0xff)) * 5) & 0x10)
          != 0)) {
        flag = true;
        int_ptr[1] = (local_14 - arg_eax) + 2;
        local_14 = uval;
      }
      else {
        flag = false;
        uval_4 = local_18 - arg_edx;
        uval_3 = (int)uval_4 >> 0x1f;
        if (((uval_4 ^ uval_3) - uval_3 == 1) ||
           (int_ptr[1] + arg_eax <
            (int)(local_14 + (int)(uval - arg_eax) / (int)(((uval_4 ^ uval_3) - uval_3) + -1) + 1))) {
          uval = int_ptr[1] + arg_eax;
        }
        else {
          uval = (int)(uval - arg_eax) / (int)(((uval_4 ^ uval_3) - uval_3) + -1) + local_14 + 1;
          flag = true;
          int_ptr[1] = (uval - arg_eax) + 2;
          local_14 = uval;
        }
        if ((int)uval_2 <= (int)uval) {
          do {
            if ((*(byte *)((int)&g_map_subtiles + ((uval_2 & 0xff) + (local_18 & 0xff) * 0x100) * 5) &
                0x10) != 0) {
              flag = true;
              int_ptr[1] = (uval_2 - arg_eax) + 2;
              local_14 = uval_2;
              break;
            }
            uval_2 = uval_2 + 1;
          } while ((int)uval_2 <= (int)uval);
        }
      }
      if (-*int_ptr != g_view_render_radius && *int_ptr <= -g_view_render_radius) {
        *int_ptr = -g_view_render_radius;
      }
      if (g_view_render_radius < int_ptr[1]) {
        int_ptr[1] = g_view_render_radius;
      }
      if (int_ptr[1] <= *int_ptr) break;
      int_ptr = int_ptr + arg_ebx * 2;
      local_1c = local_1c + 1;
      if (arg_ecx <= local_1c) {
        return;
      }
    }
    while (local_1c < arg_ecx) {
      *int_ptr = 0;
      local_1c = local_1c + 1;
      int_ptr[1] = *int_ptr;
      int_ptr = int_ptr + arg_ebx * 2;
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_determine_visible_subtiles_for_camera (Original VA: 0x9f8bc, Ghidra: FUN_0009f8bc)
 * Prototype: void engine3_determine_visible_subtiles_for_camera(void);
 * Address  : 0x9f8bc (Size: 1404 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Build visible subtile list for isometric or first-person camera
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 2 -> draw_fn_090610, engine3_scan_frustum_subtile_bounds
 ******************************************************************************/
void engine3_determine_visible_subtiles_for_camera(void)

{
  int arg_eax;
  int loop_i;
  int loop_i_2;
  int val;
  int val_2;
  int loop_i_3;
  int arg_edx;
  uint uval;
  int player_off;
  int unaff_ESI;
  int local_48 [4];
  int local_38 [4];
  int local_28;
  int local_24;
  int local_18;
  
  player_off = (g_my_player_word >> 0x18) * 0x4ef;
  if ((&g_player_view_type)[player_off] == '\x01') {
    engine3_scan_frustum_subtile_bounds();
    engine3_scan_frustum_subtile_bounds();
  }
  else if ((&g_player_view_type)[player_off] == '\x02') {
    local_28 = (*(int *)(*(int *)((int)&g_player_active_camera + player_off) + 0x17) / (int)(uint)g_units_per_pixel) *
               0x300 >> 0x11;
    local_18 = arg_edx;
    draw_fn_090610();
    local_24 = (local_28 +
               (uint)*(ushort *)(&g_bss_0019d50e + (g_my_player_word >> 0x18) * 0x4ef) /
               (uint)g_units_per_pixel) - ((g_engine3_bss_003882e4 << 3) >> 8);
    draw_fn_090610();
    draw_fn_090610();
    draw_fn_090610();
    player_off = 4;
    do {
      if (*(int *)((int)local_38 + player_off) < local_38[0]) {
        loop_i_3 = *(int *)((int)local_48 + player_off);
        *(int *)((int)local_48 + player_off) = local_48[0];
        local_48[0] = loop_i_3;
        loop_i_3 = *(int *)((int)local_38 + player_off);
        *(int *)((int)local_38 + player_off) = local_38[0];
        local_38[0] = loop_i_3;
      }
      player_off = player_off + 4;
    } while (player_off != 0x10);
    player_off = 0;
    do {
      if (local_38[3] < *(int *)((int)local_38 + player_off)) {
        loop_i_3 = *(int *)((int)local_48 + player_off);
        *(int *)((int)local_48 + player_off) = local_48[3];
        local_48[3] = loop_i_3;
        loop_i_3 = *(int *)((int)local_38 + player_off);
        *(int *)((int)local_38 + player_off) = local_38[3];
        local_38[3] = loop_i_3;
      }
      loop_i = local_38[1];
      loop_i_3 = local_48[2];
      player_off = player_off + 4;
    } while (player_off != 0xc);
    if (local_48[2] < local_48[1]) {
      local_48[2] = local_48[1];
      local_48[1] = loop_i_3;
      local_38[1] = local_38[2];
      local_38[2] = loop_i;
    }
    loop_i_3 = local_48[2];
    player_off = local_48[1];
    uval = local_38[1] - local_38[0] >> 0x1f;
    loop_i = (local_38[1] - local_38[0] ^ uval) - uval;
    uval = local_38[3] - local_38[1] >> 0x1f;
    loop_i_2 = (local_38[3] - local_38[1] ^ uval) - uval;
    uval = local_38[2] - local_38[0] >> 0x1f;
    val = (local_38[2] - local_38[0] ^ uval) - uval;
    uval = local_38[3] - local_38[2] >> 0x1f;
    val_2 = (local_38[3] - local_38[2] ^ uval) - uval;
    if ((local_48[0] < local_48[1]) && (loop_i < loop_i_2)) {
      local_48[1] = local_48[0];
      local_48[0] = player_off;
      local_38[1] = local_38[0];
    }
    player_off = local_48[1];
    if ((local_48[3] < local_48[1]) && (loop_i_2 < loop_i)) {
      local_48[1] = local_48[3];
      local_48[3] = player_off;
      local_38[1] = local_38[3];
    }
    player_off = local_48[3];
    if ((local_48[2] < local_48[0]) && (val < val_2)) {
      local_48[2] = local_48[0];
      local_48[0] = loop_i_3;
      local_38[2] = local_38[0];
    }
    if ((local_48[2] < local_48[3]) && (val_2 < val)) {
      local_48[3] = local_48[2];
      local_48[2] = player_off;
      local_38[2] = local_38[3];
    }
    local_48[0] = local_48[0] - arg_eax;
    local_18 = 0x20 - local_18;
    local_48[1] = local_48[1] - arg_eax;
    local_38[0] = local_38[0] + local_18;
    local_48[2] = local_48[2] - arg_eax;
    local_38[1] = local_38[1] + local_18;
    local_38[2] = local_38[2] + local_18;
    local_38[3] = local_38[3] + local_18;
    if (0 < local_38[0]) {
      player_off = 0;
      do {
        loop_i_3 = player_off + 8;
        *(undefined4 *)((int)&g_bss_0037939c + player_off) = 0;
        *(undefined4 *)((int)&g_bss_00379398 + player_off) = 0;
        player_off = loop_i_3;
      } while (loop_i_3 < local_38[0] * 8);
    }
    player_off = local_48[0] * 0x10000;
    if (local_38[0] < local_38[1]) {
      unaff_ESI = ((local_48[1] - local_48[0]) * 0x10000) / (local_38[1] - local_38[0]);
    }
    loop_i_3 = local_38[0];
    if (local_38[0] < 0) {
      player_off = player_off - local_38[0] * unaff_ESI;
      loop_i_3 = 0;
    }
    loop_i = local_38[1];
    if (0x3f < local_38[1]) {
      loop_i = 0x3f;
    }
    for (loop_i_2 = loop_i_3 * 8; loop_i_2 < loop_i * 8; loop_i_2 = loop_i_2 + 8) {
      if (player_off >> 0x10 < -0x1e) {
        *(undefined4 *)((int)&g_bss_00379398 + loop_i_2) = 0xffffffe2;
      }
      else {
        *(int *)((int)&g_bss_00379398 + loop_i_2) = player_off >> 0x10;
      }
      loop_i_3 = loop_i_3 + 1;
      player_off = player_off + unaff_ESI;
    }
    player_off = local_48[1] * 0x10000;
    if (local_38[1] < local_38[3]) {
      unaff_ESI = (((local_48[3] - arg_eax) - local_48[1]) * 0x10000) / (local_38[3] - local_38[1]);
    }
    loop_i = local_38[3];
    if (0x3f < local_38[3]) {
      loop_i = 0x3f;
    }
    if (loop_i_3 < 0) {
      player_off = player_off - loop_i_3 * unaff_ESI;
      loop_i_3 = 0;
    }
    for (loop_i_3 = loop_i_3 * 8; loop_i_3 < loop_i * 8; loop_i_3 = loop_i_3 + 8) {
      if (player_off >> 0x10 < -0x1e) {
        *(undefined4 *)((int)&g_bss_00379398 + loop_i_3) = 0xffffffe2;
      }
      else {
        *(int *)((int)&g_bss_00379398 + loop_i_3) = player_off >> 0x10;
      }
      player_off = player_off + unaff_ESI;
    }
    player_off = local_48[0] * 0x10000;
    if (local_38[0] < local_38[2]) {
      unaff_ESI = ((local_48[2] - local_48[0]) * 0x10000) / (local_38[2] - local_38[0]);
    }
    loop_i_3 = local_38[2];
    if (0x3f < local_38[2]) {
      loop_i_3 = 0x3f;
    }
    if (local_38[0] < 0) {
      player_off = player_off - local_38[0] * unaff_ESI;
      local_38[0] = 0;
    }
    for (loop_i = local_38[0] * 8; loop_i < loop_i_3 * 8; loop_i = loop_i + 8) {
      if (player_off >> 0x10 < 0x1f) {
        *(int *)((int)&g_bss_0037939c + loop_i) = (player_off >> 0x10) + 1;
      }
      else {
        *(undefined4 *)((int)&g_bss_0037939c + loop_i) = 0x1f;
      }
      local_38[0] = local_38[0] + 1;
      player_off = player_off + unaff_ESI;
    }
    player_off = local_48[2] * 0x10000;
    if (local_38[2] < local_38[3]) {
      unaff_ESI = (((local_48[3] - arg_eax) - local_48[2]) * 0x10000) / (local_38[3] - local_38[2]);
    }
    if (0x3f < local_38[3]) {
      local_38[3] = 0x3f;
    }
    if (local_38[0] < 0) {
      player_off = player_off - local_38[0] * unaff_ESI;
      local_38[0] = 0;
    }
    for (loop_i_3 = local_38[0] * 8; loop_i_3 < local_38[3] * 8; loop_i_3 = loop_i_3 + 8) {
      if (player_off >> 0x10 < 0x1f) {
        *(int *)((int)&g_bss_0037939c + loop_i_3) = (player_off >> 0x10) + 1;
      }
      else {
        *(undefined4 *)((int)&g_bss_0037939c + loop_i_3) = 0x1f;
      }
      local_38[0] = local_38[0] + 1;
      player_off = player_off + unaff_ESI;
    }
    for (local_38[0] = local_38[0] * 8; local_38[0] < 0x1f9; local_38[0] = local_38[0] + 8) {
      *(undefined4 *)((int)&g_bss_0037939c + local_38[0]) = 0;
      *(undefined4 *)((int)&g_bss_00379398 + local_38[0]) = 0;
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_begin_frame_projection_setup (Original VA: 0x9fe38, Ghidra: FUN_0009fe38)
 * Prototype: void engine3_begin_frame_projection_setup(void);
 * Address  : 0x9fe38 (Size: 156 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Reset g_render_poly_write_ptr and select projection transform for frame
 * Callers  : 0 -> 
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine3_begin_frame_projection_setup(void)

{
  int val;
  
  g_render_poly_write_ptr = &g_render_poly_buf_start;
  LbScreenWaitVbi();
  g_engine3_bss_00388304 = (&PTR_FUN_000947b8_00191edc)[g_view_projection_mode];
  g_engine3_bss_00387d38 = g_view_render_radius * 0x100;
  g_engine3_bss_00387d88 = g_view_render_radius * 0x100;
  g_engine3_bss_00388300 = *(undefined4 *)((uint)g_view_projection_mode * 4 + 0x191ecc); /* 0x191ecc="`^\n" */
  g_engine3_bss_00387d90 = (g_view_render_radius + 1) * 0x100;
  val = g_view_render_radius * 0x300 >> 0x1f;
  g_engine3_bss_00387d8c = (int)((g_view_render_radius * 0x300 + val * -4) - (uint)(val << 1 < 0)) >> 2;
  g_engine3_bss_00387d30 = g_data_00191d28 << 8;
  g_engine3_bss_00387d34 = g_data_00191d2c << 8;
  return;
}

/******************************************************************************
 * Function : engine3_rasterize_depth_buckets_high (Original VA: 0x9ff84, Ghidra: FUN_0009ff84)
 * Prototype: void engine3_rasterize_depth_buckets_high(void);
 * Address  : 0x9ff84 (Size: 15047 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Traverse all 704 depth buckets (0x2bf..0) and rasterize queued polygons (high)
 * Callers  : 1 -> engine3_project_camera_grid_to_screen
 * Callees  : 10 -> lair_fn_04ca51, draw_update_player_view_state_0915dc, engine3_draw_queued_billboard_sprite, engine3_draw_string_billboard, engine3_draw_keeper_hand_or_object_sprite, engine3_draw_translucent_effect_sprite, get_thing_anim_sprite_id_checked, ssprite_noop_stub ...
 ******************************************************************************/
void engine3_rasterize_depth_buckets_high(void)

{
  char player_off;
  undefined4 *word_ptr;
  int val;
  undefined1 *word_ptr_2;
  undefined4 *word_ptr_3;
  uint auStack_ae0 [2];
  undefined1 auStack_ad8 [8];
  int local_ad0 [5];
  int local_abc [5];
  int local_aa8 [10];
  int local_a80 [5];
  int local_a6c [5];
  int local_a58 [5];
  int local_a44 [15];
  int local_a08 [10];
  int local_9e0 [5];
  int local_9cc [5];
  int local_9b8 [5];
  int local_9a4 [10];
  int local_97c [5];
  int local_968 [15];
  int local_92c [10];
  int local_904 [5];
  int local_8f0 [5];
  int local_8dc [10];
  int local_8b4 [10];
  int local_88c [10];
  int local_864 [5];
  int local_850 [20];
  int local_800 [10];
  int local_7d8 [5];
  int local_7c4 [30];
  int local_74c [25];
  int local_6e8 [30];
  int local_670 [15];
  int local_634 [15];
  int local_5f8 [20];
  int local_5a8 [10];
  int local_580 [5];
  int local_56c [5];
  int local_558 [5];
  int local_544 [5];
  int local_530 [5];
  int local_51c [10];
  int local_4f4 [15];
  int local_4b8 [10];
  int local_490 [5];
  int local_47c [5];
  int local_468 [10];
  int local_440 [266];
  
  word_ptr_2 = auStack_ad8;
  word_ptr_3 = &g_render_depth_buckets;
  g_bss_003d9578 = 0;
  local_440[0x109] = 0x2bf;
  word_ptr = g_render_depth_buckets;
  do {
    while (word_ptr == (undefined4 *)0x0) {
      val = *(int *)(word_ptr_2 + 0xabc);
      word_ptr_3 = word_ptr_3 + -1;
      *(int *)(word_ptr_2 + 0xabc) = val + -1;
      if (val + -1 == 0) {
        return;
      }
      word_ptr = (undefined4 *)*word_ptr_3;
    }
    if (*(byte *)(word_ptr + 1) < 0x14) {
      switch(*(byte *)(word_ptr + 1)) {
      case 0:
        g_data_00186fad = 5;
        g_data_00184290 = (&g_bss_002f18e3)[*(ushort *)((int)word_ptr + 6)];
        *(undefined4 *)(word_ptr_2 + -4) = 0x9ffe0;
        watcom_crt_fn_1295e0();
        break;
      case 1:
        g_data_00186fad = 7;
        g_data_00186fac = (undefined1)
                       ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
        g_data_00184290 = (&g_bss_002f18e3)[*(ushort *)((int)word_ptr + 6)];
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0058;
        watcom_crt_fn_130ea0();
        break;
      case 2:
        g_data_00186fac = *(undefined1 *)((int)word_ptr + 5);
        *(int *)(word_ptr_2 + 0x2a8) = (int)word_ptr[1] >> 0x10;
        *(int *)(word_ptr_2 + 0x2ac) = *(int *)((int)word_ptr + 6) >> 0x10;
        *(int *)(word_ptr_2 + 0x334) = (int)word_ptr[2] >> 0x10;
        *(int *)(word_ptr_2 + 0x338) = *(int *)((int)word_ptr + 10) >> 0x10;
        *(int *)(word_ptr_2 + 0x3c0) = (int)word_ptr[3] >> 0x10;
        *(int *)(word_ptr_2 + 0x3c4) = *(int *)((int)word_ptr + 0xe) >> 0x10;
        g_data_00186fad = 0;
        *(undefined4 *)(word_ptr_2 + -4) = 0xa021a;
        watcom_crt_fn_1295e0();
        break;
      case 3:
        g_data_00186fac = *(undefined1 *)((int)word_ptr + 5);
        *(int *)(word_ptr_2 + 0x2a8) = (int)word_ptr[1] >> 0x10;
        *(int *)(word_ptr_2 + 0x2ac) = *(int *)((int)word_ptr + 6) >> 0x10;
        *(int *)(word_ptr_2 + 0x334) = (int)word_ptr[2] >> 0x10;
        *(int *)(word_ptr_2 + 0x338) = *(int *)((int)word_ptr + 10) >> 0x10;
        *(int *)(word_ptr_2 + 0x3c0) = (int)word_ptr[3] >> 0x10;
        *(int *)(word_ptr_2 + 0x3c4) = *(int *)((int)word_ptr + 0xe) >> 0x10;
        *(uint *)(word_ptr_2 + 0x2b8) = (uint)*(byte *)((int)word_ptr + 0x12) << 0x10;
        *(uint *)(word_ptr_2 + 0x344) = (uint)*(byte *)((int)word_ptr + 0x13) << 0x10;
        g_data_00186fad = 4;
        *(uint *)(word_ptr_2 + 0x3d0) = (uint)*(byte *)(word_ptr + 5) << 0x10;
        *(undefined4 *)(word_ptr_2 + -4) = 0xa02c4;
        watcom_crt_fn_1295e0();
        break;
      case 4:
        *(int *)(word_ptr_2 + 0x2a8) = (int)word_ptr[1] >> 0x10;
        *(int *)(word_ptr_2 + 0x2ac) = *(int *)((int)word_ptr + 6) >> 0x10;
        *(int *)(word_ptr_2 + 0x334) = (int)word_ptr[2] >> 0x10;
        *(int *)(word_ptr_2 + 0x338) = *(int *)((int)word_ptr + 10) >> 0x10;
        *(int *)(word_ptr_2 + 0x3c0) = (int)word_ptr[3] >> 0x10;
        *(int *)(word_ptr_2 + 0x3c4) = *(int *)((int)word_ptr + 0xe) >> 0x10;
        *(uint *)(word_ptr_2 + 0x2b0) = (uint)*(byte *)(word_ptr + 5) << 0x10;
        *(uint *)(word_ptr_2 + 0x2b4) = (uint)*(byte *)((int)word_ptr + 0x15) << 0x10;
        *(uint *)(word_ptr_2 + 0x33c) = (uint)*(byte *)((int)word_ptr + 0x16) << 0x10;
        *(uint *)(word_ptr_2 + 0x340) = (uint)*(byte *)((int)word_ptr + 0x17) << 0x10;
        *(uint *)(word_ptr_2 + 0x3c8) = (uint)*(byte *)(word_ptr + 6) << 0x10;
        g_data_00186fad = 2;
        *(uint *)(word_ptr_2 + 0x3cc) = (uint)*(byte *)((int)word_ptr + 0x19) << 0x10;
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0393;
        watcom_crt_fn_130ea0();
        break;
      case 5:
        *(int *)(word_ptr_2 + 0x2a8) = (int)word_ptr[1] >> 0x10;
        *(int *)(word_ptr_2 + 0x2ac) = *(int *)((int)word_ptr + 6) >> 0x10;
        *(int *)(word_ptr_2 + 0x334) = (int)word_ptr[2] >> 0x10;
        *(int *)(word_ptr_2 + 0x338) = *(int *)((int)word_ptr + 10) >> 0x10;
        *(int *)(word_ptr_2 + 0x3c0) = (int)word_ptr[3] >> 0x10;
        *(int *)(word_ptr_2 + 0x3c4) = *(int *)((int)word_ptr + 0xe) >> 0x10;
        *(uint *)(word_ptr_2 + 0x2b0) = (uint)*(byte *)(word_ptr + 5) << 0x10;
        *(uint *)(word_ptr_2 + 0x2b4) = (uint)*(byte *)((int)word_ptr + 0x15) << 0x10;
        *(uint *)(word_ptr_2 + 0x33c) = (uint)*(byte *)((int)word_ptr + 0x16) << 0x10;
        *(uint *)(word_ptr_2 + 0x340) = (uint)*(byte *)((int)word_ptr + 0x17) << 0x10;
        *(uint *)(word_ptr_2 + 0x3c8) = (uint)*(byte *)(word_ptr + 6) << 0x10;
        *(uint *)(word_ptr_2 + 0x3cc) = (uint)*(byte *)((int)word_ptr + 0x19) << 0x10;
        *(uint *)(word_ptr_2 + 0x2b8) = (uint)*(byte *)((int)word_ptr + 0x1a) << 0x10;
        *(uint *)(word_ptr_2 + 0x344) = (uint)*(byte *)((int)word_ptr + 0x1b) << 0x10;
        g_data_00186fad = 5;
        *(uint *)(word_ptr_2 + 0x3d0) = (uint)*(byte *)(word_ptr + 7) << 0x10;
        *(undefined4 *)(word_ptr_2 + -4) = 0xa055e;
        watcom_crt_fn_1295e0();
        break;
      case 6:
        *(int *)(word_ptr_2 + 0x2a8) = (int)word_ptr[1] >> 0x10;
        *(int *)(word_ptr_2 + 0x2ac) = *(int *)((int)word_ptr + 6) >> 0x10;
        *(int *)(word_ptr_2 + 0x334) = (int)word_ptr[2] >> 0x10;
        *(int *)(word_ptr_2 + 0x338) = *(int *)((int)word_ptr + 10) >> 0x10;
        *(int *)(word_ptr_2 + 0x3c0) = (int)word_ptr[3] >> 0x10;
        *(int *)(word_ptr_2 + 0x3c4) = *(int *)((int)word_ptr + 0xe) >> 0x10;
        *(uint *)(word_ptr_2 + 0x2b0) = (uint)*(byte *)(word_ptr + 5) << 0x10;
        *(uint *)(word_ptr_2 + 0x2b4) = (uint)*(byte *)((int)word_ptr + 0x15) << 0x10;
        *(uint *)(word_ptr_2 + 0x33c) = (uint)*(byte *)((int)word_ptr + 0x16) << 0x10;
        *(uint *)(word_ptr_2 + 0x340) = (uint)*(byte *)((int)word_ptr + 0x17) << 0x10;
        *(uint *)(word_ptr_2 + 0x3c8) = (uint)*(byte *)(word_ptr + 6) << 0x10;
        g_data_00186fad = 3;
        *(uint *)(word_ptr_2 + 0x3cc) = (uint)*(byte *)((int)word_ptr + 0x19) << 0x10;
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0462;
        watcom_crt_fn_130ea0();
        break;
      case 7:
        g_data_00186fad = 6;
        *(int *)(word_ptr_2 + 0x2a8) = (int)word_ptr[1] >> 0x10;
        *(int *)(word_ptr_2 + 0x2ac) = *(int *)((int)word_ptr + 6) >> 0x10;
        *(int *)(word_ptr_2 + 0x334) = (int)word_ptr[2] >> 0x10;
        *(int *)(word_ptr_2 + 0x338) = *(int *)((int)word_ptr + 10) >> 0x10;
        *(int *)(word_ptr_2 + 0x3c0) = (int)word_ptr[3] >> 0x10;
        *(int *)(word_ptr_2 + 0x3c4) = *(int *)((int)word_ptr + 0xe) >> 0x10;
        *(uint *)(word_ptr_2 + 0x2b0) = (uint)*(byte *)(word_ptr + 5) << 0x10;
        *(uint *)(word_ptr_2 + 0x2b4) = (uint)*(byte *)((int)word_ptr + 0x15) << 0x10;
        *(uint *)(word_ptr_2 + 0x33c) = (uint)*(byte *)((int)word_ptr + 0x16) << 0x10;
        *(uint *)(word_ptr_2 + 0x340) = (uint)*(byte *)((int)word_ptr + 0x17) << 0x10;
        *(uint *)(word_ptr_2 + 0x3c8) = (uint)*(byte *)(word_ptr + 6) << 0x10;
        *(uint *)(word_ptr_2 + 0x3cc) = (uint)*(byte *)((int)word_ptr + 0x19) << 0x10;
        *(uint *)(word_ptr_2 + 0x2b8) = (uint)*(byte *)((int)word_ptr + 0x1a) << 0x10;
        *(uint *)(word_ptr_2 + 0x344) = (uint)*(byte *)((int)word_ptr + 0x1b) << 0x10;
        *(uint *)(word_ptr_2 + 0x3d0) = (uint)*(byte *)(word_ptr + 7) << 0x10;
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0659;
        watcom_crt_fn_130ea0();
        break;
      case 8:
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0084;
        ssprite_noop_stub();
        break;
      case 9:
        g_data_00184290 = (&g_bss_002f18e3)[*(ushort *)((int)word_ptr + 6)];
        switch(*(undefined1 *)((int)word_ptr + 5)) {
        case 0:
          g_data_00186fad = 5;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa068f;
          watcom_crt_fn_1295e0();
          break;
        case 1:
          *(int *)(word_ptr_2 + 0x900) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x904) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x908) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x4a4) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x4a8) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(int *)(word_ptr_2 + 0x4ac) = (int)(word_ptr[6] + word_ptr[0xb]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa070d;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa071c;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa072e;
          watcom_crt_fn_1295e0();
          break;
        case 2:
          *(int *)(word_ptr_2 + 0x75c) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x760) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x764) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x4e0) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x4e4) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x4e8) = (int)(word_ptr[0xb] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa07a9;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa07bb;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa07cd;
          watcom_crt_fn_1295e0();
          break;
        case 3:
          *(int *)(word_ptr_2 + 0x9e4) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x9e8) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x9ec) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x530) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x534) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x538) = (int)(word_ptr[6] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0848;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa085a;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa086c;
          watcom_crt_fn_1295e0();
          break;
        case 4:
          *(int *)(word_ptr_2 + 0x8dc) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x8e0) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x8e4) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x5f8) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x5fc) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(int *)(word_ptr_2 + 0x600) = (int)(word_ptr[6] + word_ptr[0xb]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa08e7;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x750) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x754) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x758) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x224) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x228) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x22c) = (int)(word_ptr[0xb] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0955;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x8b8) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x8bc) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x8c0) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x29c) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x2a0) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x2a4) = (int)(word_ptr[6] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa09ca;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa09d9;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa09ef;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0a09;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0a1f;
          watcom_crt_fn_1295e0();
          break;
        case 5:
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x96c) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x970) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x974) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x5e4) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x5e8) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(int *)(word_ptr_2 + 0x5ec) = (int)(word_ptr[6] + word_ptr[0xb]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0a9c;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x858) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x96c) >> 1;
          *(int *)(word_ptr_2 + 0x85c) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x970) >> 1;
          *(int *)(word_ptr_2 + 0x860) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x974) >> 1;
          *(int *)(word_ptr_2 + 0x3f0) = word_ptr[4] + *(int *)(word_ptr_2 + 0x5e4) >> 1;
          *(int *)(word_ptr_2 + 0x3f4) = word_ptr[5] + *(int *)(word_ptr_2 + 0x5e8) >> 1;
          *(int *)(word_ptr_2 + 0x3f8) = word_ptr[6] + *(int *)(word_ptr_2 + 0x5ec) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0b2e;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xab0) = *(int *)(word_ptr_2 + 0x96c) + word_ptr[0x14] >> 1;
          *(int *)(word_ptr_2 + 0xab4) = *(int *)(word_ptr_2 + 0x970) + word_ptr[0x15] >> 1;
          *(int *)(word_ptr_2 + 0xab8) = *(int *)(word_ptr_2 + 0x974) + word_ptr[0x16] >> 1;
          *(int *)(word_ptr_2 + 0x440) = *(int *)(word_ptr_2 + 0x5e4) + word_ptr[9] >> 1;
          *(int *)(word_ptr_2 + 0x444) = *(int *)(word_ptr_2 + 0x5e8) + word_ptr[10] >> 1;
          *(int *)(word_ptr_2 + 0x448) = *(int *)(word_ptr_2 + 0x5ec) + word_ptr[0xb] >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0bb7;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0bc6;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0bdc;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0bf2;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0c04;
          watcom_crt_fn_1295e0();
          break;
        case 6:
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x81c) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x820) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x824) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x5bc) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x5c0) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x5c4) = (int)(word_ptr[0xb] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0c80;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x7b0) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x81c) >> 1;
          *(int *)(word_ptr_2 + 0x7b4) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x820) >> 1;
          *(int *)(word_ptr_2 + 0x7b8) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x824) >> 1;
          *(int *)(word_ptr_2 + 0x4f4) = word_ptr[9] + *(int *)(word_ptr_2 + 0x5bc) >> 1;
          *(int *)(word_ptr_2 + 0x4f8) = word_ptr[10] + *(int *)(word_ptr_2 + 0x5c0) >> 1;
          *(int *)(word_ptr_2 + 0x4fc) = word_ptr[0xb] + *(int *)(word_ptr_2 + 0x5c4) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0d12;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x918) = *(int *)(word_ptr_2 + 0x81c) + word_ptr[0x17] >> 1;
          *(int *)(word_ptr_2 + 0x91c) = *(int *)(word_ptr_2 + 0x820) + word_ptr[0x18] >> 1;
          *(int *)(word_ptr_2 + 0x920) = *(int *)(word_ptr_2 + 0x824) + word_ptr[0x19] >> 1;
          *(int *)(word_ptr_2 + 0x670) = *(int *)(word_ptr_2 + 0x5bc) + word_ptr[0xe] >> 1;
          *(int *)(word_ptr_2 + 0x674) = *(int *)(word_ptr_2 + 0x5c0) + word_ptr[0xf] >> 1;
          *(int *)(word_ptr_2 + 0x678) = *(int *)(word_ptr_2 + 0x5c4) + word_ptr[0x10] >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0d98;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0daa;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0dc0;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0dd6;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0de8;
          watcom_crt_fn_1295e0();
          break;
        case 7:
          *(int *)(word_ptr_2 + 0x930) = (int)(word_ptr[0x17] + word_ptr[0x11]) >> 1;
          *(int *)(word_ptr_2 + 0x934) = (int)(word_ptr[0x18] + word_ptr[0x12]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x938) = (int)(word_ptr[0x19] + word_ptr[0x13]) >> 1;
          *(int *)(word_ptr_2 + 0x3a0) = (int)(word_ptr[0xe] + word_ptr[4]) >> 1;
          *(int *)(word_ptr_2 + 0x3a4) = (int)(word_ptr[0xf] + word_ptr[5]) >> 1;
          *(int *)(word_ptr_2 + 0x3a8) = (int)(word_ptr[0x10] + word_ptr[6]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0e63;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x78c) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0x930) >> 1;
          *(int *)(word_ptr_2 + 0x790) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0x934) >> 1;
          *(int *)(word_ptr_2 + 0x794) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0x938) >> 1;
          *(int *)(word_ptr_2 + 0x3b4) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x3a0) >> 1;
          *(int *)(word_ptr_2 + 0x3b8) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x3a4) >> 1;
          *(int *)(word_ptr_2 + 0x3bc) = word_ptr[0x10] + *(int *)(word_ptr_2 + 0x3a8) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0ef5;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x714) = *(int *)(word_ptr_2 + 0x930) + word_ptr[0x11] >> 1;
          *(int *)(word_ptr_2 + 0x718) = *(int *)(word_ptr_2 + 0x934) + word_ptr[0x12] >> 1;
          *(int *)(word_ptr_2 + 0x71c) = *(int *)(word_ptr_2 + 0x938) + word_ptr[0x13] >> 1;
          *(int *)(word_ptr_2 + 0x404) = *(int *)(word_ptr_2 + 0x3a0) + word_ptr[4] >> 1;
          *(int *)(word_ptr_2 + 0x408) = *(int *)(word_ptr_2 + 0x3a4) + word_ptr[5] >> 1;
          *(int *)(word_ptr_2 + 0x40c) = *(int *)(word_ptr_2 + 0x3a8) + word_ptr[6] >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0f7b;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0f8d;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0fa3;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0fb9;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa0fcb;
          watcom_crt_fn_1295e0();
          break;
        case 8:
          *(int *)(word_ptr_2 + 0x7ec) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x7f0) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x7f4) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x1fc) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x200) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(int *)(word_ptr_2 + 0x204) = (int)(word_ptr[6] + word_ptr[0xb]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1046;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x768) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x76c) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x770) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x6c0) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x6c4) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x6c8) = (int)(word_ptr[0xb] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa10b4;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x840) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x844) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x848) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x288) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x28c) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x290) = (int)(word_ptr[6] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1122;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x6e4) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x7ec) >> 1;
          *(int *)(word_ptr_2 + 0x6e8) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x7f0) >> 1;
          *(int *)(word_ptr_2 + 0x6ec) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x7f4) >> 1;
          *(int *)(word_ptr_2 + 0x2d8) = word_ptr[4] + *(int *)(word_ptr_2 + 0x1fc) >> 1;
          *(int *)(word_ptr_2 + 0x2dc) = word_ptr[5] + *(int *)(word_ptr_2 + 0x200) >> 1;
          *(int *)(word_ptr_2 + 0x2e0) = word_ptr[6] + *(int *)(word_ptr_2 + 0x204) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa11b4;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x9f0) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x7ec) >> 1;
          *(int *)(word_ptr_2 + 0x9f4) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x7f0) >> 1;
          *(int *)(word_ptr_2 + 0x9f8) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x7f4) >> 1;
          *(int *)(word_ptr_2 + 0x314) = word_ptr[9] + *(int *)(word_ptr_2 + 0x1fc) >> 1;
          *(int *)(word_ptr_2 + 0x318) = word_ptr[10] + *(int *)(word_ptr_2 + 0x200) >> 1;
          *(int *)(word_ptr_2 + 0x31c) = word_ptr[0xb] + *(int *)(word_ptr_2 + 0x204) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa124d;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa125c;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1276;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1290;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa12a6;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa12c0;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa12d6;
          watcom_crt_fn_1295e0();
          break;
        case 9:
          *(int *)(word_ptr_2 + 0x8c4) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x8c8) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x8cc) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x350) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x354) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(int *)(word_ptr_2 + 0x358) = (int)(word_ptr[6] + word_ptr[0xb]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1351;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa8c) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0xa90) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0xa94) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x38c) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x390) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x394) = (int)(word_ptr[0xb] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa13bf;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x7d4) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x7d8) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x7dc) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x418) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x41c) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x420) = (int)(word_ptr[6] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa142d;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xaa4) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0xa8c) >> 1;
          *(int *)(word_ptr_2 + 0xaa8) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0xa90) >> 1;
          *(int *)(word_ptr_2 + 0xaac) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0xa94) >> 1;
          *(int *)(word_ptr_2 + 0x42c) = word_ptr[9] + *(int *)(word_ptr_2 + 0x38c) >> 1;
          *(int *)(word_ptr_2 + 0x430) = word_ptr[10] + *(int *)(word_ptr_2 + 0x390) >> 1;
          *(int *)(word_ptr_2 + 0x434) = word_ptr[0xb] + *(int *)(word_ptr_2 + 0x394) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa14bf;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa08) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0xa8c) >> 1;
          *(int *)(word_ptr_2 + 0xa0c) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0xa90) >> 1;
          *(int *)(word_ptr_2 + 0xa10) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0xa94) >> 1;
          *(int *)(word_ptr_2 + 0x47c) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x38c) >> 1;
          *(int *)(word_ptr_2 + 0x480) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x390) >> 1;
          *(int *)(word_ptr_2 + 0x484) = word_ptr[0x10] + *(int *)(word_ptr_2 + 0x394) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1558;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1567;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1581;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1597;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa15b1;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa15cb;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa15e1;
          watcom_crt_fn_1295e0();
          break;
        case 10:
          *(int *)(word_ptr_2 + 0x990) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x994) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x998) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x94) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x98) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(int *)(word_ptr_2 + 0x9c) = (int)(word_ptr[6] + word_ptr[0xb]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa165c;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x93c) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x940) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x944) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x508) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x50c) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x510) = (int)(word_ptr[0xb] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa16ca;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa5c) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0xa60) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0xa64) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x468) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x46c) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0x470) = (int)(word_ptr[6] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1738;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa50) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0xa5c) >> 1;
          *(int *)(word_ptr_2 + 0xa54) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0xa60) >> 1;
          *(int *)(word_ptr_2 + 0xa58) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0xa64) >> 1;
          *(int *)(word_ptr_2 + 0x170) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x468) >> 1;
          *(int *)(word_ptr_2 + 0x174) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x46c) >> 1;
          *(int *)(word_ptr_2 + 0x178) = word_ptr[0x10] + *(int *)(word_ptr_2 + 0x470) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa17ca;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x7e0) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0xa5c) >> 1;
          *(int *)(word_ptr_2 + 0x7e4) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0xa60) >> 1;
          *(int *)(word_ptr_2 + 0x7e8) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0xa64) >> 1;
          *(int *)(word_ptr_2 + 0x620) = word_ptr[4] + *(int *)(word_ptr_2 + 0x468) >> 1;
          *(int *)(word_ptr_2 + 0x624) = word_ptr[5] + *(int *)(word_ptr_2 + 0x46c) >> 1;
          *(int *)(word_ptr_2 + 0x628) = word_ptr[6] + *(int *)(word_ptr_2 + 0x470) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1863;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1872;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa188c;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa18a2;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa18bc;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa18d6;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa18ec;
          watcom_crt_fn_1295e0();
          break;
        case 0xb:
          g_data_00186fad = 5;
          *(int *)(word_ptr_2 + 0x828) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x82c) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x830) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x30) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x34) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(int *)(word_ptr_2 + 0x38) = (int)(word_ptr[6] + word_ptr[0xb]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa195d;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x84c) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x850) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x854) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0xa8) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0xac) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0xb0) = (int)(word_ptr[0xb] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa19cb;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x9a8) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x9ac) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x9b0) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0xd0) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0xd4) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(int *)(word_ptr_2 + 0xd8) = (int)(word_ptr[6] + word_ptr[0x10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1a39;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x894) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x828) >> 1;
          *(int *)(word_ptr_2 + 0x898) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x82c) >> 1;
          *(int *)(word_ptr_2 + 0x89c) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x830) >> 1;
          *(int *)(word_ptr_2 + 0x134) = word_ptr[4] + *(int *)(word_ptr_2 + 0x30) >> 1;
          *(int *)(word_ptr_2 + 0x138) = word_ptr[5] + *(int *)(word_ptr_2 + 0x34) >> 1;
          *(int *)(word_ptr_2 + 0x13c) = word_ptr[6] + *(int *)(word_ptr_2 + 0x38) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1ac2;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa68) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x828) >> 1;
          *(int *)(word_ptr_2 + 0xa6c) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x82c) >> 1;
          *(int *)(word_ptr_2 + 0xa70) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x830) >> 1;
          *(int *)(word_ptr_2 + 0x184) = word_ptr[9] + *(int *)(word_ptr_2 + 0x30) >> 1;
          *(int *)(word_ptr_2 + 0x188) = word_ptr[10] + *(int *)(word_ptr_2 + 0x34) >> 1;
          *(int *)(word_ptr_2 + 0x18c) = word_ptr[0xb] + *(int *)(word_ptr_2 + 0x38) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1b4b;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x708) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x84c) >> 1;
          *(int *)(word_ptr_2 + 0x70c) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x850) >> 1;
          *(int *)(word_ptr_2 + 0x710) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x854) >> 1;
          *(int *)(word_ptr_2 + 0x1ac) = word_ptr[9] + *(int *)(word_ptr_2 + 0xa8) >> 1;
          *(int *)(word_ptr_2 + 0x1b0) = word_ptr[10] + *(int *)(word_ptr_2 + 0xac) >> 1;
          *(int *)(word_ptr_2 + 0x1b4) = word_ptr[0xb] + *(int *)(word_ptr_2 + 0xb0) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1bdd;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x948) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0x84c) >> 1;
          *(int *)(word_ptr_2 + 0x94c) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0x850) >> 1;
          *(int *)(word_ptr_2 + 0x950) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0x854) >> 1;
          *(int *)(word_ptr_2 + 0x698) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0xa8) >> 1;
          *(int *)(word_ptr_2 + 0x69c) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0xac) >> 1;
          *(int *)(word_ptr_2 + 0x6a0) = word_ptr[0x10] + *(int *)(word_ptr_2 + 0xb0) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1c6f;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa38) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0x9a8) >> 1;
          *(int *)(word_ptr_2 + 0xa3c) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0x9ac) >> 1;
          *(int *)(word_ptr_2 + 0xa40) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0x9b0) >> 1;
          *(int *)(word_ptr_2 + 0x24c) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0xd0) >> 1;
          *(int *)(word_ptr_2 + 0x250) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0xd4) >> 1;
          *(int *)(word_ptr_2 + 0x254) = word_ptr[0x10] + *(int *)(word_ptr_2 + 0xd8) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1d01;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x72c) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x9a8) >> 1;
          *(int *)(word_ptr_2 + 0x730) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x9ac) >> 1;
          *(int *)(word_ptr_2 + 0x734) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x9b0) >> 1;
          *(int *)(word_ptr_2 + 0x4b8) = word_ptr[4] + *(int *)(word_ptr_2 + 0xd0) >> 1;
          *(int *)(word_ptr_2 + 0x4bc) = word_ptr[5] + *(int *)(word_ptr_2 + 0xd4) >> 1;
          *(int *)(word_ptr_2 + 0x4c0) = word_ptr[6] + *(int *)(word_ptr_2 + 0xd8) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1d93;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x804) = *(int *)(word_ptr_2 + 0x828) + *(int *)(word_ptr_2 + 0x9a8) >> 1;
          *(int *)(word_ptr_2 + 0x808) = *(int *)(word_ptr_2 + 0x82c) + *(int *)(word_ptr_2 + 0x9ac) >> 1;
          *(int *)(word_ptr_2 + 0x80c) = *(int *)(word_ptr_2 + 0x830) + *(int *)(word_ptr_2 + 0x9b0) >> 1;
          *(int *)(word_ptr_2 + 0x328) = *(int *)(word_ptr_2 + 0x30) + *(int *)(word_ptr_2 + 0xd0) >> 1;
          *(int *)(word_ptr_2 + 0x32c) = *(int *)(word_ptr_2 + 0x34) + *(int *)(word_ptr_2 + 0xd4) >> 1;
          *(int *)(word_ptr_2 + 0x330) = *(int *)(word_ptr_2 + 0x38) + *(int *)(word_ptr_2 + 0xd8) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1e32;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x9fc) = *(int *)(word_ptr_2 + 0x828) + *(int *)(word_ptr_2 + 0x84c) >> 1;
          *(int *)(word_ptr_2 + 0xa00) = *(int *)(word_ptr_2 + 0x82c) + *(int *)(word_ptr_2 + 0x850) >> 1;
          *(int *)(word_ptr_2 + 0xa04) = *(int *)(word_ptr_2 + 0x830) + *(int *)(word_ptr_2 + 0x854) >> 1;
          *(int *)(word_ptr_2 + 0x364) = *(int *)(word_ptr_2 + 0x30) + *(int *)(word_ptr_2 + 0xa8) >> 1;
          *(int *)(word_ptr_2 + 0x368) = *(int *)(word_ptr_2 + 0x34) + *(int *)(word_ptr_2 + 0xac) >> 1;
          *(int *)(word_ptr_2 + 0x36c) = *(int *)(word_ptr_2 + 0x38) + *(int *)(word_ptr_2 + 0xb0) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1ed1;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa20) = *(int *)(word_ptr_2 + 0x84c) + *(int *)(word_ptr_2 + 0x9a8) >> 1;
          *(int *)(word_ptr_2 + 0xa24) = *(int *)(word_ptr_2 + 0x850) + *(int *)(word_ptr_2 + 0x9ac) >> 1;
          *(int *)(word_ptr_2 + 0xa28) = *(int *)(word_ptr_2 + 0x854) + *(int *)(word_ptr_2 + 0x9b0) >> 1;
          *(int *)(word_ptr_2 + 0x6ac) = *(int *)(word_ptr_2 + 0xa8) + *(int *)(word_ptr_2 + 0xd0) >> 1;
          *(int *)(word_ptr_2 + 0x6b0) = *(int *)(word_ptr_2 + 0xac) + *(int *)(word_ptr_2 + 0xd4) >> 1;
          *(int *)(word_ptr_2 + 0x6b4) = *(int *)(word_ptr_2 + 0xb0) + *(int *)(word_ptr_2 + 0xd8) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1f79;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1f8f;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1fa6;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1fbd;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1fd3;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa1fed;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2004;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa201e;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2038;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2052;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa206c;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2086;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa20a0;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa20ba;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa20d4;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa20ee;
          watcom_crt_fn_1295e0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2104;
          watcom_crt_fn_1295e0();
          break;
        case 0xc:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(undefined4 *)(word_ptr_2 + -4) = 0xa213f;
          watcom_crt_fn_130ea0();
          break;
        case 0xd:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0xa44) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0xa48) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0xa4c) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0xf8) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0xfc) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa21d1;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa21e0;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa21f2;
          watcom_crt_fn_130ea0();
          break;
        case 0xe:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x99c) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x9a0) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x9a4) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x558) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x55c) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2281;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2293;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa22a5;
          watcom_crt_fn_130ea0();
          break;
        case 0xf:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x774) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x778) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x77c) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x1e8) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x1ec) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2334;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2346;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2358;
          watcom_crt_fn_130ea0();
          break;
        case 0x10:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x7c8) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x7cc) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 2000) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0xbc) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0xc0) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa23e5;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x6d8) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x6dc) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x6e0) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x120) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x124) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2444;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x6cc) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x6d0) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x6d4) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x56c) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x570) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa24aa;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa24b9;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa24cf;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa24e9;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa24ff;
          watcom_crt_fn_130ea0();
          break;
        case 0x11:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x7a4) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x7a8) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x7ac) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x274) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x278) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa258e;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x9c0) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x7a4) >> 1;
          *(int *)(word_ptr_2 + 0x9c4) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x7a8) >> 1;
          *(int *)(word_ptr_2 + 0x9c8) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x7ac) >> 1;
          *(int *)(word_ptr_2 + 0x2c4) = word_ptr[4] + *(int *)(word_ptr_2 + 0x274) >> 1;
          *(int *)(word_ptr_2 + 0x2c8) = word_ptr[5] + *(int *)(word_ptr_2 + 0x278) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa260b;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x6fc) = *(int *)(word_ptr_2 + 0x7a4) + word_ptr[0x14] >> 1;
          *(int *)(word_ptr_2 + 0x700) = *(int *)(word_ptr_2 + 0x7a8) + word_ptr[0x15] >> 1;
          *(int *)(word_ptr_2 + 0x704) = *(int *)(word_ptr_2 + 0x7ac) + word_ptr[0x16] >> 1;
          *(int *)(word_ptr_2 + 0x51c) = *(int *)(word_ptr_2 + 0x274) + word_ptr[9] >> 1;
          *(int *)(word_ptr_2 + 0x520) = *(int *)(word_ptr_2 + 0x278) + word_ptr[10] >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2683;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2692;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa26a7;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa26bd;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa26cf;
          watcom_crt_fn_130ea0();
          break;
        case 0x12:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0xa98) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0xa9c) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0xaa0) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x4cc) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x4d0) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa275d;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x8f4) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0xa98) >> 1;
          *(int *)(word_ptr_2 + 0x8f8) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0xa9c) >> 1;
          *(int *)(word_ptr_2 + 0x8fc) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0xaa0) >> 1;
          *(int *)(word_ptr_2 + 0x3dc) = word_ptr[9] + *(int *)(word_ptr_2 + 0x4cc) >> 1;
          *(int *)(word_ptr_2 + 0x3e0) = word_ptr[10] + *(int *)(word_ptr_2 + 0x4d0) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa27da;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x744) = *(int *)(word_ptr_2 + 0xa98) + word_ptr[0x17] >> 1;
          *(int *)(word_ptr_2 + 0x748) = *(int *)(word_ptr_2 + 0xa9c) + word_ptr[0x18] >> 1;
          *(int *)(word_ptr_2 + 0x74c) = *(int *)(word_ptr_2 + 0xaa0) + word_ptr[0x19] >> 1;
          *(int *)(word_ptr_2 + 0x544) = *(int *)(word_ptr_2 + 0x4cc) + word_ptr[0xe] >> 1;
          *(int *)(word_ptr_2 + 0x548) = *(int *)(word_ptr_2 + 0x4d0) + word_ptr[0xf] >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa284d;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2861;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2876;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa288b;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa289c;
          watcom_crt_fn_130ea0();
          break;
        case 0x13:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x8e8) = (int)(word_ptr[0x17] + word_ptr[0x11]) >> 1;
          *(int *)(word_ptr_2 + 0x8ec) = (int)(word_ptr[0x18] + word_ptr[0x12]) >> 1;
          *(int *)(word_ptr_2 + 0x8f0) = (int)(word_ptr[0x19] + word_ptr[0x13]) >> 1;
          *(int *)(word_ptr_2 + 0x1d4) = (int)(word_ptr[0xe] + word_ptr[4]) >> 1;
          *(int *)(word_ptr_2 + 0x1d8) = (int)(word_ptr[0xf] + word_ptr[5]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa292b;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x870) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0x8e8) >> 1;
          *(int *)(word_ptr_2 + 0x874) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0x8ec) >> 1;
          *(int *)(word_ptr_2 + 0x878) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0x8f0) >> 1;
          *(int *)(word_ptr_2 + 0x210) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x1d4) >> 1;
          *(int *)(word_ptr_2 + 0x214) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x1d8) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa29a8;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x87c) = *(int *)(word_ptr_2 + 0x8e8) + word_ptr[0x11] >> 1;
          *(int *)(word_ptr_2 + 0x880) = *(int *)(word_ptr_2 + 0x8ec) + word_ptr[0x12] >> 1;
          *(int *)(word_ptr_2 + 0x884) = *(int *)(word_ptr_2 + 0x8f0) + word_ptr[0x13] >> 1;
          *(int *)(word_ptr_2 + 0x238) = *(int *)(word_ptr_2 + 0x1d4) + word_ptr[4] >> 1;
          *(int *)(word_ptr_2 + 0x23c) = *(int *)(word_ptr_2 + 0x1d8) + word_ptr[5] >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2a1b;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2a2f;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2a44;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2a59;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2a6a;
          watcom_crt_fn_130ea0();
          break;
        case 0x14:
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x834) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          g_data_00186fad = 7;
          *(int *)(word_ptr_2 + 0x838) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x83c) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x15c) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x160) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2af7;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x7bc) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x7c0) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x7c4) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x198) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x19c) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2b56;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa74) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0xa78) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0xa7c) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x634) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x638) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2bb5;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x960) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x834) >> 1;
          *(int *)(word_ptr_2 + 0x964) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x838) >> 1;
          *(int *)(word_ptr_2 + 0x968) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x83c) >> 1;
          *(int *)(word_ptr_2 + 0x454) = word_ptr[4] + *(int *)(word_ptr_2 + 0x15c) >> 1;
          *(int *)(word_ptr_2 + 0x458) = word_ptr[5] + *(int *)(word_ptr_2 + 0x160) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2c32;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x9b4) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x834) >> 1;
          *(int *)(word_ptr_2 + 0x9b8) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x838) >> 1;
          *(int *)(word_ptr_2 + 0x9bc) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x83c) >> 1;
          *(int *)(word_ptr_2 + 0x260) = word_ptr[9] + *(int *)(word_ptr_2 + 0x15c) >> 1;
          *(int *)(word_ptr_2 + 0x264) = word_ptr[10] + *(int *)(word_ptr_2 + 0x160) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2cb6;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2cc5;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2cdf;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2cf9;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2d0f;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2d29;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2d3f;
          watcom_crt_fn_130ea0();
          break;
        case 0x15:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0xa14) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0xa18) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0xa1c) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x490) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x494) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2dce;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x6f0) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x6f4) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x6f8) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x65c) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x660) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2e2d;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x8a0) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x8a4) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x8a8) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x2ec) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x2f0) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2e8c;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x798) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x6f0) >> 1;
          *(int *)(word_ptr_2 + 0x79c) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x6f4) >> 1;
          *(int *)(word_ptr_2 + 0x7a0) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x6f8) >> 1;
          *(int *)(word_ptr_2 + 0x648) = word_ptr[9] + *(int *)(word_ptr_2 + 0x65c) >> 1;
          *(int *)(word_ptr_2 + 0x64c) = word_ptr[10] + *(int *)(word_ptr_2 + 0x660) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2f09;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x924) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0x6f0) >> 1;
          *(int *)(word_ptr_2 + 0x928) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0x6f4) >> 1;
          *(int *)(word_ptr_2 + 0x92c) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0x6f8) >> 1;
          *(int *)(word_ptr_2 + 0x594) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x65c) >> 1;
          *(int *)(word_ptr_2 + 0x598) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x660) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2f8d;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2f9c;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2fb6;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2fcc;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa2fe6;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3000;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3016;
          watcom_crt_fn_130ea0();
          break;
        case 0x16:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x8d0) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x8d4) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x8d8) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x378) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x37c) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa30a5;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x7f8) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x7fc) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x800) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x5d0) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x5d4) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3104;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa80) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0xa84) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0xa88) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x1c) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x20) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa315a;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x978) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0xa80) >> 1;
          *(int *)(word_ptr_2 + 0x97c) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0xa84) >> 1;
          *(int *)(word_ptr_2 + 0x980) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0xa88) >> 1;
          *(int *)(word_ptr_2 + 0x58) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x1c) >> 1;
          *(int *)(word_ptr_2 + 0x5c) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x20) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa31c8;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0xa2c) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0xa80) >> 1;
          *(int *)(word_ptr_2 + 0xa30) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0xa84) >> 1;
          *(int *)(word_ptr_2 + 0xa34) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0xa88) >> 1;
          *(int *)(word_ptr_2 + 0x80) = word_ptr[4] + *(int *)(word_ptr_2 + 0x1c) >> 1;
          *(int *)(word_ptr_2 + 0x84) = word_ptr[5] + *(int *)(word_ptr_2 + 0x20) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3243;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3252;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3269;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa327c;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3290;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa32a4;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa32b7;
          watcom_crt_fn_130ea0();
          break;
        case 0x17:
          g_data_00186fad = 7;
          g_data_00186fac = (undefined1)
                         ((uint)((int)(word_ptr[0x10] + word_ptr[6] + word_ptr[0xb]) / 3) >> 0x10);
          *(int *)(word_ptr_2 + 0x9d8) = (int)(word_ptr[0x11] + word_ptr[0x14]) >> 1;
          *(int *)(word_ptr_2 + 0x9dc) = (int)(word_ptr[0x12] + word_ptr[0x15]) >> 1;
          *(int *)(word_ptr_2 + 0x9e0) = (int)(word_ptr[0x13] + word_ptr[0x16]) >> 1;
          *(int *)(word_ptr_2 + 0x580) = (int)(word_ptr[4] + word_ptr[9]) >> 1;
          *(int *)(word_ptr_2 + 0x584) = (int)(word_ptr[5] + word_ptr[10]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3346;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x9cc) = (int)(word_ptr[0x14] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x9d0) = (int)(word_ptr[0x15] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x9d4) = (int)(word_ptr[0x16] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x300) = (int)(word_ptr[9] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x304) = (int)(word_ptr[10] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa33a5;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x984) = (int)(word_ptr[0x11] + word_ptr[0x17]) >> 1;
          *(int *)(word_ptr_2 + 0x988) = (int)(word_ptr[0x12] + word_ptr[0x18]) >> 1;
          *(int *)(word_ptr_2 + 0x98c) = (int)(word_ptr[0x13] + word_ptr[0x19]) >> 1;
          *(int *)(word_ptr_2 + 0x684) = (int)(word_ptr[4] + word_ptr[0xe]) >> 1;
          *(int *)(word_ptr_2 + 0x688) = (int)(word_ptr[5] + word_ptr[0xf]) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3404;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x738) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x9d8) >> 1;
          *(int *)(word_ptr_2 + 0x73c) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x9dc) >> 1;
          *(int *)(word_ptr_2 + 0x740) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x9e0) >> 1;
          *(int *)(word_ptr_2 + 0x5a8) = word_ptr[4] + *(int *)(word_ptr_2 + 0x580) >> 1;
          *(int *)(word_ptr_2 + 0x5ac) = word_ptr[5] + *(int *)(word_ptr_2 + 0x584) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3481;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x8ac) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x9d8) >> 1;
          *(int *)(word_ptr_2 + 0x8b0) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x9dc) >> 1;
          *(int *)(word_ptr_2 + 0x8b4) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x9e0) >> 1;
          *(int *)(word_ptr_2 + 0x1c0) = word_ptr[9] + *(int *)(word_ptr_2 + 0x580) >> 1;
          *(int *)(word_ptr_2 + 0x1c4) = word_ptr[10] + *(int *)(word_ptr_2 + 0x584) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa34fe;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x810) = word_ptr[0x14] + *(int *)(word_ptr_2 + 0x9cc) >> 1;
          *(int *)(word_ptr_2 + 0x814) = word_ptr[0x15] + *(int *)(word_ptr_2 + 0x9d0) >> 1;
          *(int *)(word_ptr_2 + 0x818) = word_ptr[0x16] + *(int *)(word_ptr_2 + 0x9d4) >> 1;
          *(int *)(word_ptr_2 + 0x60c) = word_ptr[9] + *(int *)(word_ptr_2 + 0x300) >> 1;
          *(int *)(word_ptr_2 + 0x610) = word_ptr[10] + *(int *)(word_ptr_2 + 0x304) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa357b;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x864) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0x9cc) >> 1;
          *(int *)(word_ptr_2 + 0x868) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0x9d0) >> 1;
          *(int *)(word_ptr_2 + 0x86c) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0x9d4) >> 1;
          *(int *)(word_ptr_2 + 8) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x300) >> 1;
          *(int *)(word_ptr_2 + 0xc) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x304) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa35ed;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x888) = word_ptr[0x17] + *(int *)(word_ptr_2 + 0x984) >> 1;
          *(int *)(word_ptr_2 + 0x88c) = word_ptr[0x18] + *(int *)(word_ptr_2 + 0x988) >> 1;
          *(int *)(word_ptr_2 + 0x890) = word_ptr[0x19] + *(int *)(word_ptr_2 + 0x98c) >> 1;
          *(int *)(word_ptr_2 + 0x44) = word_ptr[0xe] + *(int *)(word_ptr_2 + 0x684) >> 1;
          *(int *)(word_ptr_2 + 0x48) = word_ptr[0xf] + *(int *)(word_ptr_2 + 0x688) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3661;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x780) = word_ptr[0x11] + *(int *)(word_ptr_2 + 0x984) >> 1;
          *(int *)(word_ptr_2 + 0x784) = word_ptr[0x12] + *(int *)(word_ptr_2 + 0x988) >> 1;
          *(int *)(word_ptr_2 + 0x788) = word_ptr[0x13] + *(int *)(word_ptr_2 + 0x98c) >> 1;
          *(int *)(word_ptr_2 + 0x6c) = word_ptr[4] + *(int *)(word_ptr_2 + 0x684) >> 1;
          *(int *)(word_ptr_2 + 0x70) = word_ptr[5] + *(int *)(word_ptr_2 + 0x688) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa36d5;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x720) = *(int *)(word_ptr_2 + 0x9d8) + *(int *)(word_ptr_2 + 0x984) >> 1;
          *(int *)(word_ptr_2 + 0x724) = *(int *)(word_ptr_2 + 0x9dc) + *(int *)(word_ptr_2 + 0x988) >> 1;
          *(int *)(word_ptr_2 + 0x728) = *(int *)(word_ptr_2 + 0x9e0) + *(int *)(word_ptr_2 + 0x98c) >> 1;
          *(int *)(word_ptr_2 + 0xe4) = *(int *)(word_ptr_2 + 0x580) + *(int *)(word_ptr_2 + 0x684) >> 1;
          *(int *)(word_ptr_2 + 0xe8) = *(int *)(word_ptr_2 + 0x584) + *(int *)(word_ptr_2 + 0x688) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3764;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x90c) = *(int *)(word_ptr_2 + 0x9d8) + *(int *)(word_ptr_2 + 0x9cc) >> 1;
          *(int *)(word_ptr_2 + 0x910) = *(int *)(word_ptr_2 + 0x9dc) + *(int *)(word_ptr_2 + 0x9d0) >> 1;
          *(int *)(word_ptr_2 + 0x914) = *(int *)(word_ptr_2 + 0x9e0) + *(int *)(word_ptr_2 + 0x9d4) >> 1;
          *(int *)(word_ptr_2 + 0x10c) = *(int *)(word_ptr_2 + 0x580) + *(int *)(word_ptr_2 + 0x300) >> 1;
          *(int *)(word_ptr_2 + 0x110) = *(int *)(word_ptr_2 + 0x584) + *(int *)(word_ptr_2 + 0x304) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa37f3;
          (*g_engine3_bss_00388304)();
          *(int *)(word_ptr_2 + 0x954) = *(int *)(word_ptr_2 + 0x9cc) + *(int *)(word_ptr_2 + 0x984) >> 1;
          *(int *)(word_ptr_2 + 0x958) = *(int *)(word_ptr_2 + 0x9d0) + *(int *)(word_ptr_2 + 0x988) >> 1;
          *(int *)(word_ptr_2 + 0x95c) = *(int *)(word_ptr_2 + 0x9d4) + *(int *)(word_ptr_2 + 0x98c) >> 1;
          *(int *)(word_ptr_2 + 0x148) = *(int *)(word_ptr_2 + 0x300) + *(int *)(word_ptr_2 + 0x684) >> 1;
          *(int *)(word_ptr_2 + 0x14c) = *(int *)(word_ptr_2 + 0x304) + *(int *)(word_ptr_2 + 0x688) >> 1;
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3886;
          (*g_engine3_bss_00388304)();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3895;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa38af;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa38c9;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa38df;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa38f6;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3910;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa392a;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3941;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa395b;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa3975;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa398f;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa39a9;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa39c0;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa39d5;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa39e7;
          watcom_crt_fn_130ea0();
          *(undefined4 *)(word_ptr_2 + -4) = 0xa39f5;
          watcom_crt_fn_130ea0();
        }
        break;
      case 10:
        g_data_00186fac = *(undefined1 *)((int)word_ptr + 6);
        g_data_00186fad = 0;
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0078;
        watcom_crt_fn_1295e0();
        break;
      case 0xb:
switchD_000a3a36_caseD_b:
        *(undefined4 *)(word_ptr_2 + -4) = 0xa00d9;
        get_thing_anim_sprite_id_checked();
        break;
      case 0xc:
        *(undefined4 *)(word_ptr_2 + -4) = 0xa00fa;
        lair_fn_04ca51();
        g_data_00186fad = 10;
        g_data_00184290 = g_scratch_work_buf;
        g_data_00186fac = *(undefined1 *)(word_ptr + 6);
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0126;
        watcom_crt_fn_130ea0();
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0132;
        watcom_crt_fn_130ea0();
        break;
      case 0xd:
        *(uint *)(word_ptr_2 + -4) = (uint)*(byte *)(word_ptr + 6);
        *(undefined4 *)(word_ptr_2 + -8) = 0xa0675;
        draw_update_player_view_state_0915dc();
        word_ptr_2 = word_ptr_2 + -4;
        break;
      case 0xe:
        player_off = *(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6);
        if ((player_off == '\x02') || (player_off == '\x05')) {
          *(undefined4 *)(word_ptr_2 + -4) = 0xa019d;
          engine3_draw_queued_billboard_sprite();
        }
        break;
      case 0x10:
        *(undefined4 *)(word_ptr_2 + -4) = 0xa0090;
        engine3_draw_string_billboard();
        break;
      case 0x11:
        *(undefined4 *)(word_ptr_2 + -4) = 0xa009c;
        engine3_draw_keeper_hand_or_object_sprite();
        break;
      case 0x12:
        if (*(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6) == '\x02')
        goto switchD_000a3a36_caseD_b;
        break;
      case 0x13:
        *(undefined4 *)(word_ptr_2 + -4) = 0xa00a8;
        engine3_draw_translucent_effect_sprite();
      }
    }
    word_ptr = (undefined4 *)*word_ptr;
  } while( true );
}

/******************************************************************************
 * Function : engine3_update_camera_rotation_trig (Original VA: 0xa3a4c, Ghidra: FUN_000a3a4c)
 * Prototype: void engine3_update_camera_rotation_trig(void);
 * Address  : 0xa3a4c (Size: 81 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Compute sin/cos camera rotation matrix terms
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_update_camera_rotation_trig(void)

{
  g_bss_0037937c = -g_engine3_bss_00387d80;
  g_bss_00379378 = -g_engine3_bss_00387d78;
  g_bss_00379380 = g_engine3_bss_00387d80;
  if (g_engine3_bss_00387d80 < 0) {
    g_bss_00379380 = 0;
  }
  if (g_bss_0037937c < 0) {
    g_bss_0037937c = 0;
  }
  g_bss_00379374 = g_engine3_bss_00387d78;
  if (g_engine3_bss_00387d78 < 0) {
    g_bss_00379374 = 0;
  }
  if (g_bss_00379378 < 0) {
    g_bss_00379378 = 0;
  }
  return;
}

/******************************************************************************
 * Function : engine3_project_camera_grid_to_screen (Original VA: 0xa3aa0, Ghidra: FUN_000a3aa0)
 * Prototype: void engine3_project_camera_grid_to_screen(void);
 * Address  : 0xa3aa0 (Size: 2220 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Transform world subtile grid coordinates into camera/screen space
 * Callers  : 1 -> draw_process_map_subtile_0a43b4
 * Callees  : 16 -> frontend_fn_02dcec, draw_fn_090610, draw_fn_09164c, draw_update_player_view_state_092be0, draw_process_map_subtile_092d10, draw_process_map_subtile_093120, draw_process_map_subtile_0938d8, draw_update_player_view_state_0940dc ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine3_project_camera_grid_to_screen(void)

{
  ushort uval;
  int camera;
  int ui_scale;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined2 extraout_var;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined *word_ptr;
  int extraout_ECX_03;
  int val;
  uint uval_2;
  int *int_ptr;
  int val_2;
  int local_a4;
  int local_a0;
  int local_88;
  int local_84;
  undefined4 local_6c;
  undefined4 local_68;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_3c;
  uint local_38;
  int local_2c;
  
  ui_scale = (int)(CONCAT44(*(int *)(camera + 0x17) >> 0x1f,*(undefined4 *)(camera + 0x17)) / /* camera->zoom */
               (longlong)(int)(uint)g_units_per_pixel);
  g_render_poly_write_ptr = &g_render_poly_buf_start;
  LbScreenWaitVbi();
  g_engine3_bss_00388300 = *(undefined4 *)((uint)g_view_projection_mode * 4 + 0x191ecc); /* 0x191ecc="`^\n" */
  g_engine3_bss_00388304 = (&PTR_FUN_000947b8_00191edc)[g_view_projection_mode];
  g_engine3_bss_00387d38 = g_view_render_radius * 0x100;
  g_engine3_bss_00387d90 = (g_view_render_radius + 1) * 0x100;
  val = g_view_render_radius * 0x300 >> 0x1f;
  g_engine3_bss_00387d8c = (int)((g_view_render_radius * 0x300 + val * -4) - (uint)(val << 1 < 0)) >> 2;
  g_engine3_bss_00387d4c = 0;
  g_engine3_bss_00387d50 = 0;
  g_engine3_bss_00387d54 = 0;
  g_engine3_bss_00387d68 = 0;
  g_engine3_bss_00387d78 = 0;
  g_engine3_bss_00387d5c = 0;
  g_engine3_bss_00387d7c = 0;
  g_engine3_bss_00387d60 = 0;
  g_engine3_bss_00387d30 = g_data_00191d28 << 8;
  g_engine3_bss_00387d70 = 0;
  g_engine3_bss_00387d34 = g_data_00191d2c << 8;
  g_engine3_bss_00387d58 = 0x4000;
  g_engine3_bss_00387d6c = 0x4000;
  g_engine3_bss_00387d80 = 0x4000;
  g_engine3_bss_00387d88 = g_engine3_bss_00387d38;
  frontend_fn_02dcec();
  g_bss_00379374 = g_engine3_bss_00387d78;
  g_bss_0037937c = -g_engine3_bss_00387d80;
  g_bss_00379378 = -g_engine3_bss_00387d78;
  g_bss_00379380 = g_engine3_bss_00387d80;
  if (g_engine3_bss_00387d80 < 0) {
    g_bss_00379380 = 0;
  }
  if (g_bss_0037937c < 0) {
    g_bss_0037937c = 0;
  }
  if (g_engine3_bss_00387d78 < 0) {
    g_bss_00379374 = 0;
  }
  if (g_bss_00379378 < 0) {
    g_bss_00379378 = 0;
  }
  frontend_fn_02dcec();
  frontend_fn_02dcec();
  g_bss_00379388 = (uint)*(ushort *)(extraout_ECX + 7);
  g_bss_0037938c = (uint)*(ushort *)(extraout_ECX + 0xf);
  g_bss_00379390 = -(uint)*(ushort *)(extraout_ECX + 0xb);
  uval = *(ushort *)(extraout_ECX + 4);
  draw_update_player_view_state_092be0();
  g_engine3_bss_00387da0 = (uint)uval;
  if (g_view_projection_mode == 0) {
    g_engine3_bss_00387d8c = 1000000;
    val_2 = 1000000;
    ssprite_clear_render_state(1000000,ui_scale,g_bss_00379388,g_bss_0037938c);
    draw_update_player_view_state_0940dc();
    g_engine3_bss_003882bc = local_6c;
    g_engine3_bss_003882c0 = local_68;
    g_engine3_bss_003882c4 = local_38;
    draw_update_player_view_state_0940dc();
    val = (g_my_player_word >> 0x18) * 0x4ef;
    g_engine3_bss_003882c8 = local_88 -
                   ((int)(uint)*(ushort *)(&g_bss_0019d50c + val) /
                   CONCAT22(extraout_var,g_units_per_pixel)) / 2;
    g_engine3_bss_003882cc = local_84 -
                   ((int)(uint)*(ushort *)(&g_bss_0019d50e + val) /
                   CONCAT22(extraout_var,g_units_per_pixel)) / 2;
    g_engine3_bss_003882d0 = extraout_ECX_00;
    draw_update_player_view_state_0940dc();
    val = (g_my_player_word >> 0x18) * 0x4ef;
    g_engine3_bss_003882d4 = val_2 - ((uint)*(ushort *)(&g_bss_0019d50c + val) / (uint)g_units_per_pixel) / 2;
    g_engine3_bss_003882d8 = ui_scale - ((uint)*(ushort *)(&g_bss_0019d50e + val) / (uint)g_units_per_pixel) / 2;
    g_engine3_bss_003882dc = 0xffff0000;
    draw_update_player_view_state_0940dc();
    ui_scale = (g_my_player_word >> 0x18) * 0x4ef;
    g_engine3_bss_003882e0 = local_a4 - ((uint)*(ushort *)(&g_bss_0019d50c + ui_scale) / (uint)g_units_per_pixel) / 2;
    g_engine3_bss_003882e4 = local_a0 - ((uint)*(ushort *)(&g_bss_0019d50e + ui_scale) / (uint)g_units_per_pixel) / 2;
    g_engine3_bss_003882e8 = 0;
    draw_fn_090610();
    draw_fn_090610();
    uval_2 = local_50 - local_48 >> 0x1f;
    ui_scale = (local_50 - local_48 ^ uval_2) - uval_2;
    uval_2 = local_4c - local_44 >> 0x1f;
    val = (local_4c - local_44 ^ uval_2) - uval_2;
    if (val < ui_scale) {
      g_view_render_radius = ui_scale + (val >> 1);
    }
    else {
      g_view_render_radius = val + (ui_scale >> 1);
    }
    g_view_render_radius = g_view_render_radius + 2;
    if (g_data_00191d38 < g_view_render_radius) {
      g_view_render_radius = g_data_00191d38;
    }
  }
  else {
    g_view_render_radius = g_data_00191d38;
    g_engine3_bss_00387d38 = g_data_00191d38 * 0x100;
    g_engine3_bss_00387d90 = (g_data_00191d38 + 1) * 0x100;
    ui_scale = g_data_00191d38 * 0x300 >> 0x1f;
    g_engine3_bss_00387d8c = (int)((g_data_00191d38 * 0x300 + ui_scale * -4) - (uint)(ui_scale << 1 < 0)) >> 2;
    g_engine3_bss_00387d30 = g_data_00191d28 << 8;
    g_engine3_bss_00387d34 = g_data_00191d2c << 8;
    g_engine3_bss_00387d94 = g_engine3_bss_00387d38 - g_engine3_bss_00387d8c >> 8;
    g_engine3_bss_00387d88 = g_engine3_bss_00387d38;
    ssprite_clear_render_state(g_engine3_bss_00387d8c,g_data_00191d30,g_bss_00379388,g_bss_0037938c);
  }
  ui_scale = -(local_3c & 0xff);
  local_2c = (local_38 & 0xff) + g_view_render_radius * 0x100;
  engine3_clear_visible_subtile_span_list();
  engine3_determine_visible_subtiles_for_camera();
  g_bss_00387218 = &g_bss_00379598;
  g_bss_0038721c = &g_bss_003803d8;
  int_ptr = &g_bss_00379398 + (0x1f - g_view_render_radius) * 2;
  g_engine3_bss_00387d98 = ui_scale;
  g_engine3_bss_00387d9c = local_2c;
  if (g_view_projection_mode == 0) {
    if (g_bss_002ee8d6 == '\0') {
      draw_process_map_subtile_093120();
    }
    else {
      draw_process_map_subtile_0938d8();
    }
  }
  else {
    draw_process_map_subtile_092d10();
  }
  val = g_view_render_radius * 2;
  while (word_ptr = g_bss_0038721c, val = val + -1, val != 0) {
    g_bss_0038721c = g_bss_00387218;
    int_ptr = int_ptr + 2;
    val_2 = *int_ptr;
    g_bss_00387218 = word_ptr;
    local_2c = local_2c + -0x100;
    g_engine3_bss_00387d9c = local_2c;
    if (g_view_projection_mode == 0) {
      if (g_bss_002ee8d6 == '\0') {
        g_engine3_bss_00387d98 = ui_scale;
        draw_process_map_subtile_093120();
        if (val_2 < extraout_ECX_01) {
          g_engine3_bss_00387d98 = ui_scale;
          g_engine3_bss_00387d9c = local_2c;
          engine3_build_subtile_column_geometry_med();
        }
      }
      else {
        g_engine3_bss_00387d98 = ui_scale;
        draw_process_map_subtile_0938d8();
        if (val_2 < extraout_ECX_03) {
          g_engine3_bss_00387d98 = ui_scale;
          g_engine3_bss_00387d9c = local_2c;
          engine3_build_subtile_column_geometry_low();
        }
      }
    }
    else {
      g_engine3_bss_00387d98 = ui_scale;
      draw_process_map_subtile_092d10();
      if (val_2 < extraout_ECX_02) {
        g_engine3_bss_00387d98 = ui_scale;
        g_engine3_bss_00387d9c = local_2c;
        engine3_build_subtile_column_geometry_high();
      }
    }
  }
  if (g_engine3_bss_00387e02._2_1_ != '\0') {
    draw_fn_09164c();
  }
  engine3_rasterize_depth_buckets_high();
  g_engine3_bss_00387e02._2_1_ = 0;
  return;
}

/******************************************************************************
 * Function : engine3_sweep_visible_subtile_rows (Original VA: 0xa434c, Ghidra: FUN_000a434c)
 * Prototype: void engine3_sweep_visible_subtile_rows(void);
 * Address  : 0xa434c (Size: 103 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Iterate visible subtile rows within g_view_render_radius
 * Callers  : 0 -> 
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void engine3_sweep_visible_subtile_rows(void)

{
  int *int_ptr;
  int *extraout_ECX;
  int loop_i;
  
  int_ptr = &g_bss_00379398 + (0x1f - g_view_render_radius) * 2;
  for (loop_i = g_view_render_radius * 2 + 1; loop_i != 0; loop_i = loop_i + -1) {
    if (*int_ptr < int_ptr[1]) {
      LbScreenWaitVbi();
      int_ptr = extraout_ECX;
    }
    int_ptr = int_ptr + 2;
  }
  return;
}

/******************************************************************************
 * Function : engine3_draw_creature_health_and_level_bar (Original VA: 0xa49ec, Ghidra: FUN_000a49ec)
 * Prototype: void engine3_draw_creature_health_and_level_bar(void);
 * Address  : 0xa49ec (Size: 1494 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Render floating health bar and level flower above Creature Thing
 * Callers  : 1 -> ssprite_decode_and_blit_rle_frame
 * Callees  : 3 -> anger_fn_010c1a, lair_fn_04ccc2, get_2d_squared_distance
 ******************************************************************************/
void engine3_draw_creature_health_and_level_bar(void)

{
  undefined4 *poly_write_ptr;
  undefined *word_ptr;
  undefined4 uval;
  undefined4 *poly_write_ptr_2;
  int thing;
  int val;
  int val_2;
  int val_3;
  int arg_edx;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  int local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  short sStack_34;
  int local_32;
  ushort local_2c;
  ushort local_28 [2];
  byte local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_14 [4];
  
  local_20._0_2_ = *(short *)(thing + 0x52); /* thing->health */
  local_1c = anger_fn_010c1a();
  local_20 = CONCAT22(local_20._2_2_,(short)local_20 - (short)local_1c) & 0xffff07ff;
  val = get_2d_squared_distance();
  val = (val >> 0x11) + 0x10;
  if (val < 0x10) {
    val = 0x10;
  }
  else if (0x1f < val) {
    val = 0x1f;
  }
  lair_fn_04ccc2();
  val_5 = (((local_20 & 0xff) + (int)sStack_34) * -2 + 0xc) * 4;
  val_4 = local_32 >> 0x10;
  val_6 = ((sStack_34 * 2 + 0xc) - (val * 8 + -0x80)) * 4;
  word_ptr = (&PTR_LAB_00192fe0)[local_28[0]];
  val_7 = (&g_slab_attr_table)[local_28[0]];
  val_2 = (val_4 * -8 * val_7 - val_5 * (int)word_ptr >> 0x10) + *(int *)(arg_edx + 0x18);
  val_3 = (val_4 * -8 * val_7 - val_6 * (int)word_ptr >> 0x10) + *(int *)(arg_edx + 0x18);
  val_6 = ((int)((val_4 + (uint)local_24[0]) * -8 * val_7 - val_6 * (int)word_ptr) >> 0x10) +
           *(int *)(arg_edx + 0x18);
  val_7 = ((int)(val_7 * (val_4 + (uint)local_24[0]) * -8 - val_5 * (int)word_ptr) >> 0x10) +
           *(int *)(arg_edx + 0x18);
  (*g_engine3_bss_00388300)();
  (*g_engine3_bss_00388300)();
  (*g_engine3_bss_00388300)();
  (*g_engine3_bss_00388300)();
  poly_write_ptr_2 = g_render_poly_write_ptr;
  if (val_6 <= val_3) {
    val_3 = val_6;
  }
  if (val_2 < val_7) {
    val_7 = val_2;
  }
  if (val_3 < val_7) {
    val_7 = val_3;
  }
  if (g_render_poly_buf_end <= g_render_poly_write_ptr) {
    return;
  }
  val_7 = (int)((val_7 + (val_7 >> 0x1f) * -0x10) - (uint)((val_7 >> 0x1f) << 3 < 0)) >> 4;
  if (val_7 < 0) {
    val_7 = 0;
  }
  else if (0x2be < val_7) {
    val_7 = 0x2be;
  }
  uval = (&g_key_to_ascii_table)[val_7];
  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xc;
  *g_render_poly_write_ptr = uval;
  (&g_key_to_ascii_table)[val_7] = g_render_poly_write_ptr;
  poly_write_ptr = g_render_poly_write_ptr + 2;
  g_render_poly_write_ptr = (undefined4 *)((int)g_render_poly_write_ptr + 0x5f);
  *poly_write_ptr = local_84;
  poly_write_ptr_2[4] = 0;
  poly_write_ptr_2[5] = ((local_20 & 0xff) - 1) * 0x10000;
  val_7 = g_engine3_bss_00387d8c;
  poly_write_ptr_2[3] = local_80;
  if (val_7 < local_78) {
    if (local_78 < g_engine3_bss_00387d38) {
      val_7 = ((g_engine3_bss_00387d88 - local_78) * (local_7c >> 0x10)) / g_engine3_bss_00387d94 + 0x8000;
      goto LAB_000a4e1d;
    }
    poly_write_ptr_2[6] = 0x8000;
  }
  else {
    val_7 = (local_7c >> 0x10) << 8;
LAB_000a4e1d:
    poly_write_ptr_2[6] = val_7;
  }
  poly_write_ptr_2[7] = local_68;
  poly_write_ptr_2[9] = 0;
  poly_write_ptr_2[8] = local_64;
  val_7 = g_engine3_bss_00387d8c;
  poly_write_ptr_2[10] = 0;
  if (val_7 < local_5c) {
    if (local_5c < g_engine3_bss_00387d38) {
      val_7 = ((g_engine3_bss_00387d88 - local_5c) * (local_60 >> 0x10)) / g_engine3_bss_00387d94 + 0x8000;
      goto LAB_000a4e8e;
    }
    poly_write_ptr_2[0xb] = 0x8000;
  }
  else {
    val_7 = (local_60 >> 0x10) << 8;
LAB_000a4e8e:
    poly_write_ptr_2[0xb] = val_7;
  }
  poly_write_ptr_2[0xc] = local_a0;
  poly_write_ptr_2[0xf] = 0;
  poly_write_ptr_2[0xd] = local_9c;
  val_7 = g_engine3_bss_00387d8c;
  poly_write_ptr_2[0xe] = (local_24[0] - 1) * 0x10000;
  if (val_7 < local_94) {
    if (local_94 < g_engine3_bss_00387d38) {
      val_7 = ((g_engine3_bss_00387d88 - local_94) * (local_98 >> 0x10)) / g_engine3_bss_00387d94 + 0x8000;
      goto LAB_000a4f0a;
    }
    poly_write_ptr_2[0x10] = 0x8000;
  }
  else {
    val_7 = (local_98 >> 0x10) << 8;
LAB_000a4f0a:
    poly_write_ptr_2[0x10] = val_7;
  }
  poly_write_ptr_2[0x11] = local_14;
  poly_write_ptr_2[0x12] = local_24;
  poly_write_ptr_2[0x13] = (local_24[0] - 1) * 0x10000;
  val_7 = g_engine3_bss_00387d8c;
  poly_write_ptr_2[0x14] = ((local_20 & 0xff) - 1) * 0x10000;
  if (val_7 < local_b0) {
    if (g_engine3_bss_00387d38 <= local_b0) {
      poly_write_ptr_2[0x15] = 0x8000;
      goto LAB_000a4f99;
    }
    val_7 = ((g_engine3_bss_00387d88 - local_b0) * ((int)local_28 >> 0x10)) / g_engine3_bss_00387d94 + 0x8000;
  }
  else {
    val_7 = ((int)local_28 >> 0x10) << 8;
  }
  poly_write_ptr_2[0x15] = val_7;
LAB_000a4f99:
  poly_write_ptr_2[6] = val;
  poly_write_ptr_2[0x16] = (uint)local_2c;
  *(undefined2 *)(poly_write_ptr_2 + 0x17) = *(undefined2 *)(thing + 0x44);
  *(undefined1 *)((int)poly_write_ptr_2 + 0x5e) = *(undefined1 *)(thing + 0x48);
  return;
}

/******************************************************************************
 * Function : engine3_copy_sprite_draw_descriptor (Original VA: 0xa5030, Ghidra: FUN_000a5030)
 * Prototype: void engine3_copy_sprite_draw_descriptor(void);
 * Address  : 0xa5030 (Size: 214 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Copy 28-byte (7-dword) sprite draw descriptor
 * Callers  : 1 -> ssprite_decode_and_blit_rle_frame
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_copy_sprite_draw_descriptor(void)

{
  int *poly_write_ptr;
  undefined4 uval;
  int arg_eax;
  int loop_i;
  undefined4 *arg_edx;
  undefined4 *word_ptr;
  undefined4 local_2c [5];
  int local_18;
  int local_14;
  
  word_ptr = local_2c;
  for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *arg_edx;
    arg_edx = arg_edx + 1;
    word_ptr = word_ptr + 1;
  }
  local_18 = local_18 +
             (uint)*(ushort *)(&g_data_0018e933 + (uint)*(byte *)(arg_eax + 0x1a) * 2) +
             (uint)*(ushort *)(arg_eax + 0x58);
  (*g_engine3_bss_00388300)();
  if (g_render_poly_write_ptr < g_render_poly_buf_end) {
    loop_i = (int)((local_14 + (local_14 >> 0x1f) * -0x10) - (uint)((local_14 >> 0x1f) << 3 < 0)) >>
            4;
    if (g_view_projection_mode == '\0') {
      loop_i = 1;
    }
    if (loop_i < 0) {
      loop_i = 0;
    }
    else if (0x2be < loop_i) {
      loop_i = 0x2be;
    }
    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
      uval = (&g_key_to_ascii_table)[loop_i];
      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xe;
      *g_render_poly_write_ptr = uval;
      (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
      g_render_poly_write_ptr[2] = arg_eax;
      g_render_poly_write_ptr[3] = local_2c[0];
      g_render_poly_write_ptr[4] = local_2c[1];
      poly_write_ptr = g_render_poly_write_ptr + 5;
      g_render_poly_write_ptr = g_render_poly_write_ptr + 6;
      *poly_write_ptr = local_14;
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_queue_room_flag_or_special_sprite (Original VA: 0xa5178, Ghidra: FUN_000a5178)
 * Prototype: undefined8 engine3_queue_room_flag_or_special_sprite(void);
 * Address  : 0xa5178 (Size: 183 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Queue room efficiency/banner sprite into depth bucket
 * Callers  : 2 -> draw_update_creature_and_thing_08bb2c, engine3_draw_queued_billboard_sprite
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 engine3_queue_room_flag_or_special_sprite(void)

{
  longlong cctrl_ptr;
  int thing;
  int val;
  undefined4 arg_edx;
  byte flag;
  int val_2;
  
  val_2 = *(int *)(thing + 0x5c) >> 0x10;
  if (val_2 < 0) {
    val_2 = 0;
  }
  if (*(int *)(thing + 3) >> 0x18 == (uint)g_neutral_player_number) {
    flag = (byte)g_game_turn & 3;
  }
  else {
    flag = *(byte *)(thing + 6); /* thing->owner */
  }
  cctrl_ptr = (longlong)
          (int)((uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x23) * /* thing->ccontrol_idx */
                (*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10) * 0x23) /
          100;
  val = (*(int *)(&g_bss_002e9112 + (uint)*(byte *)(thing + 0x1a) * 0xe6) >> 0x10) + (int)cctrl_ptr;
  if (val == 0) {
    val_2 = 0;
  }
  else if (val_2 == val) {
    val_2 = CONCAT31((int3)(((uint)(ushort)((ulonglong)cctrl_ptr >> 0x10) << 0x10) >> 8),flag) * 8 +
            0x51;
  }
  else {
    val_2 = ((uint)flag * 8 + 0x58) - (val_2 * 8) / val;
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : engine3_draw_queued_billboard_sprite (Original VA: 0xa5240, Ghidra: FUN_000a5240)
 * Prototype: void engine3_draw_queued_billboard_sprite(void);
 * Address  : 0xa5240 (Size: 1834 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Render depth-sorted 2D billboard sprite in 3D view
 * Callers  : 3 -> draw_process_map_subtile_08bde8, engine3_rasterize_depth_buckets_high, engine3_rasterize_depth_buckets_low
 * Callees  : 8 -> anger_update_creature_control_010575, anger_update_creature_control_010589, anger_update_creature_control_0105a1, person_fn_064bce, engine3_queue_room_flag_or_special_sprite, bflib_system_io_fn_0f0624, bflib_system_io_fn_0f3300, watcom_crt_fn_13a710
 ******************************************************************************/
void engine3_draw_queued_billboard_sprite(void)

{
  byte flag;
  char player_off;
  int cctrl_ptr;
  undefined **val;
  undefined4 uval;
  int arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int arg_edx;
  int val_2;
  int arg_ebx;
  int *int_ptr;
  uint uval_2;
  int aiStack_48 [9];
  int local_24;
  undefined1 auStack_22 [6];
  short local_1c;
  undefined2 uStack_18;
  short local_14;
  undefined1 local_10;
  
  int_ptr = aiStack_48 + 3;
  local_1c = 0;
  local_14 = 0;
  uStack_18 = 0;
  aiStack_48[5] = (uint)g_lb_display_draw_flags;
  g_lb_display_draw_flags = 0;
  aiStack_48[8] = 0;
  if ((g_bss_0019d0bd & 0x80) != 0) {
    if (*(short *)(arg_ebx + 0x1b) != *(short *)(&g_bss_0019d0fd + (g_my_player_word >> 0x18) * 0x4ef))
    {
      *(uint *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)] + 0x43) = g_game_turn;
      return;
    }
    *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)] + 0x47) = 0x28;
  }
  aiStack_48[7] = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)];
  local_10 = *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)] + 0x23);
  player_off = *(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6);
  aiStack_48[4] = arg_edx;
  if ((player_off == '\x02') || (player_off == '\x05')) {
    aiStack_48[2] = 0xa5313;
    uStack_18 = engine3_queue_room_flag_or_special_sprite();
    arg_ecx = extraout_ECX;
    if (g_my_player_word._3_1_ == *(char *)(arg_ebx + 6)) {
      cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)];
      g_lb_display_draw_flags = g_lb_display_draw_flags | 4;
      if (g_game_turn - 1 == *(int *)(cctrl_ptr + 0x43)) {
        if (CONCAT31((uint3)(g_game_turn - 1 >> 8) ^ (uint3)((uint)*(int *)(cctrl_ptr + 0x43) >> 8),
                     *(char *)(cctrl_ptr + 0x47)) < 0x28) {
          *(char *)(cctrl_ptr + 0x47) = *(char *)(cctrl_ptr + 0x47) + '\x01';
        }
      }
      else {
        *(undefined1 *)(cctrl_ptr + 0x47) = 0;
      }
      *(uint *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)] + 0x43) = g_game_turn;
      if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)] + 0x47) == '(') {
        aiStack_48[2] = 0xa53a2;
        cctrl_ptr = person_fn_064bce();
        arg_ecx = extraout_ECX_00;
        if (*(char *)(cctrl_ptr + 0x23) == '\0') {
          aiStack_48[2] = 0xa53b3;
          cctrl_ptr = anger_update_creature_control_010589();
          if (cctrl_ptr == 0) {
            player_off = *(char *)(arg_ebx + 7);
            if (player_off == '\x0e') {
              player_off = *(char *)(arg_ebx + 8);
            }
            if (player_off != '\'') {
              player_off = *(char *)(arg_ebx + 7);
              if (player_off == '\x0e') {
                player_off = *(char *)(arg_ebx + 8);
              }
              if (player_off != 't') {
                player_off = *(char *)(arg_ebx + 7);
                if (player_off == '\x0e') {
                  player_off = *(char *)(arg_ebx + 8);
                }
                if (player_off == 'c') {
                  val = &PTR_FUN_0002864e_0018d47b;
                }
                else {
                  aiStack_48[2] = 0xa541f;
                  cctrl_ptr = anger_update_creature_control_010575();
                  if (cctrl_ptr == 0) {
                    cctrl_ptr = (uint)*(byte *)(arg_ebx + 0x1a) * 0xe6;
                    if ((*(short *)(&g_bss_002e911f + cctrl_ptr) == 0) ||
                       (*(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)] + 0x39) <=
                        *(int *)(&g_bss_002e911d + cctrl_ptr) >> 0x10)) {
                      aiStack_48[6] = (&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)];
                      aiStack_48[3] = (uint)*(byte *)(arg_ebx + 0x1a) * 0xe6;
                      auStack_22._2_4_ = 100;
                      cctrl_ptr = (uint)(byte)(&g_bss_002e9116)[aiStack_48[3]] *
                              ((int)((uint)*(byte *)(aiStack_48[6] + 0x23) *
                                     (*(int *)(&g_bss_002e9112 + aiStack_48[3]) >> 0x10) * 0x23) / 100
                              + (*(int *)(&g_bss_002e9112 + aiStack_48[3]) >> 0x10));
                      val_2 = cctrl_ptr >> 0x1f;
                      if (*(int *)(arg_ebx + 0x5c) >> 0x10 <
                          (int)((cctrl_ptr + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8) {
                        val = &PTR_FUN_0006db51_0018c8ca;
                      }
                      else if (*(char *)(aiStack_48[6] + 0x48) == '\0') {
                        val = (undefined **)
                                  (&g_data_0018c4a0 + (uint)*(byte *)(arg_ebx + 7) * 0x29);
                      }
                      else {
                        val = &PTR_FUN_00028851_0018d0a3;
                      }
                    }
                    else {
                      val = &PTR_FUN_000ab594_0018c7ab;
                    }
                  }
                  else {
                    val = &PTR_FUN_0004d0d5_0018c878;
                  }
                }
                goto LAB_000a550f;
              }
            }
            val = &PTR_FUN_0002855c_0018cadf;
          }
          else {
            val = &PTR_FUN_00026c6d_0018cca2;
          }
LAB_000a550f:
          if (*(char *)((int)val + 0x1e) == '\x06') {
            val = (undefined **)(&g_data_0018c4a0 + (uint)*(byte *)(arg_ebx + 8) * 0x29);
          }
          if ((*(short *)((int)val + 0x26) == 1) || (arg_ebx == g_bss_003d9578)) {
            local_1c = *(short *)(val + 9);
          }
          aiStack_48[2] = 0xa5554;
          uval = anger_update_creature_control_0105a1();
          arg_ecx = extraout_ECX_01;
          switch(uval) {
          case 1:
            local_14 = 0x34;
            break;
          case 2:
            local_14 = 0x3b;
            break;
          case 3:
            local_14 = 0x36;
            break;
          case 4:
            local_14 = 0x37;
          }
        }
      }
    }
  }
  if ((local_1c != 0) || (local_14 != 0)) {
    aiStack_48[2] =
         (int)(arg_ecx * (uint)g_units_per_pixel * (uint)*(byte *)(g_data_001991c0 + 0x1a9)) >> 0xd;
    aiStack_48[3] = aiStack_48[4] - aiStack_48[2];
    int_ptr = aiStack_48 + 2;
    local_24 = aiStack_48[2];
    bflib_system_io_fn_0f0624();
  }
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xfff3;
  if (((g_game_turn & 4) == 0) && (*(int *)((int)int_ptr + 0x26) >> 0x10 != 0)) {
    if ((short)int_ptr[10] == 0) goto LAB_000a56f1;
    int_ptr[-1] = int_ptr[6];
    int_ptr[7] = int_ptr[1] - int_ptr[6];
    int_ptr[-2] = 0xa56ce;
    bflib_system_io_fn_0f0624();
    flag = *(byte *)(g_data_001991c0 + 5 + (*(int *)((int)int_ptr + 0x1a) >> 0x10) * 6);
  }
  else {
    if ((short)int_ptr[8] == 0) goto LAB_000a56f1;
    int_ptr[-1] = int_ptr[6];
    *int_ptr = (*(int *)((int)int_ptr + 0x1e) >> 0x10) * 6;
    int_ptr[7] = int_ptr[1] - int_ptr[6];
    cctrl_ptr = *int_ptr;
    int_ptr[-2] = 0xa5678;
    bflib_system_io_fn_0f0624();
    flag = *(byte *)(g_data_001991c0 + cctrl_ptr + 5);
  }
  int_ptr[4] = (uint)flag;
  int_ptr = int_ptr + -1;
LAB_000a56f1:
  if (((*(int *)(arg_ebx + 0x15) >> 0x10 < 1) || (*(short *)((int)int_ptr + 0x24) == 0)) ||
     ((g_game_turn & 1) == 0)) {
    cctrl_ptr = (g_my_player_word >> 0x18) * 0x4ef;
    if (((*(short *)(arg_ebx + 0x1b) == *(short *)(&g_bss_0019d0fd + cctrl_ptr)) ||
        (((*(int *)(arg_ebx + 3) >> 0x18 != (uint)(byte)(&g_player_id_number)[cctrl_ptr] &&
          (((*(byte *)(*(int *)((int)int_ptr + 0x10) + 0xac) & 0x20) == 0 ||
           (0 < *(int *)(*(int *)((int)int_ptr + 0x10) + 0xad) >> 0x10)))) ||
         (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(arg_ebx + 100)] + 3) != '\0')))) ||
       ((0 < *(int *)(arg_ebx + 0x15) >> 0x10 ||
        (*(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6) == '\x03'))))
    {
      *(uint *)((int)int_ptr + 0x1c) =
           (*(int *)((int)int_ptr + 4) -
           ((uint)*(byte *)(g_data_001991c0 + (*(int *)((int)int_ptr + 0x22) >> 0x10) * 6 + 5) *
           (uint)g_units_per_pixel) / (uint)g_units_per_pixel) - *(int *)((int)int_ptr + 0x14);
      *(undefined4 *)((int)int_ptr + -4) = 0xa58fe;
      watcom_crt_fn_13a710();
      *(undefined4 *)((int)int_ptr + -4) = 0xa5959;
      watcom_crt_fn_13a710();
    }
  }
  else {
    uval_2 = *(int *)(arg_ebx + 3) >> 0x18;
    if (uval_2 == g_neutral_player_number) {
      *(uint *)((int)int_ptr + 0x1c) = (uint)(byte)(&g_data_0019177a)[g_game_turn & 3];
      *(undefined4 *)((int)int_ptr + -4) = 0xa57f0;
      bflib_system_io_fn_0f3300();
      g_lb_display_draw_flags = (short)*(undefined4 *)((int)int_ptr + 8);
      return;
    }
    *(uint *)((int)int_ptr + 0x1c) = (uint)(byte)(&g_data_0019177a)[uval_2];
    *(undefined4 *)((int)int_ptr + -4) = 0xa579e;
    bflib_system_io_fn_0f3300();
  }
  g_lb_display_draw_flags = (short)*(undefined4 *)((int)int_ptr + 8);
  return;
}

/******************************************************************************
 * Function : engine3_draw_string_billboard (Original VA: 0xa596c, Ghidra: FUN_000a596c)
 * Prototype: void engine3_draw_string_billboard(void);
 * Address  : 0xa596c (Size: 264 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Render floating text/number billboard in 3D view
 * Callers  : 2 -> engine3_rasterize_depth_buckets_high, engine3_rasterize_depth_buckets_low
 * Callees  : 1 -> bflib_system_io_fn_0f0624
 ******************************************************************************/
void engine3_draw_string_billboard(void)

{
  char player_off;
  uint *word_ptr;
  int arg_eax;
  int loop_i;
  int val;
  uint *word_ptr_2;
  uint auStack_2c [5];
  
  auStack_2c[2] = (uint)g_lb_display_draw_flags;
  g_lb_display_draw_flags = g_lb_display_draw_flags & 0xfffe;
  loop_i = *(int *)(arg_eax + 0x10);
  player_off = *(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6);
  if ((player_off == '\x02') || (word_ptr_2 = auStack_2c + 2, player_off == '\x05')) {
    auStack_2c[4] = (uint)*(byte *)(g_data_001991c0 + 0x1af);
    val = 0;
    for (; 0 < loop_i; loop_i = loop_i / 10) {
      val = val + 1;
    }
    word_ptr_2 = auStack_2c + 2;
    if (0 < val) {
      word_ptr = auStack_2c + 2;
      word_ptr_2 = auStack_2c + 2;
      for (loop_i = *(int *)(arg_eax + 0x10); 0 < loop_i; loop_i = loop_i / 10) {
        word_ptr_2 = (uint *)((int)word_ptr + -4);
        *(undefined4 *)((int)word_ptr + -4) = *(undefined4 *)((int)word_ptr + 8);
        *(undefined4 *)((int)word_ptr + -8) = 0xa5a4b;
        bflib_system_io_fn_0f0624();
        word_ptr = (uint *)((int)word_ptr + -4);
      }
    }
  }
  g_lb_display_draw_flags = (short)*word_ptr_2;
  return;
}

/******************************************************************************
 * Function : engine3_draw_keeper_hand_or_object_sprite (Original VA: 0xa5a74, Ghidra: FUN_000a5a74)
 * Prototype: void engine3_draw_keeper_hand_or_object_sprite(void);
 * Address  : 0xa5a74 (Size: 435 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Render Keeper hand or held object sprite in 3D view
 * Callers  : 2 -> engine3_rasterize_depth_buckets_high, engine3_rasterize_depth_buckets_low
 * Callees  : 1 -> bflib_system_io_fn_0f0870
 ******************************************************************************/
void engine3_draw_keeper_hand_or_object_sprite(void)

{
  char player_off;
  ushort room_ptr;
  int arg_eax;
  int ui_scale;
  int player_off_2;
  uint ui_scale_2;
  
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfe;
  room_ptr = *(ushort *)(&g_room_slabs_count + (uint)*(ushort *)(arg_eax + 6) * 0x45);
  if (((room_ptr != 0) && (1 < room_ptr)) &&
     ((room_ptr < 7 || ((7 < room_ptr && ((room_ptr < 0xf || (0x10 < room_ptr)))))))) {
    player_off = *(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6);
    if (((player_off == '\x02') || (player_off == '\x05')) && (g_bss_002ee8d9 != '\0')) {
      player_off_2 = *(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef);
      ui_scale = *(int *)(player_off_2 + 0x17) / (int)(uint)g_units_per_pixel;
      if (*(char *)(player_off_2 + 6) == '\x05') {
        ui_scale = 0xffe;
      }
      ui_scale_2 = (uint)g_units_per_pixel;
      player_off_2 = ((ui_scale << 7) >> 0xd) * ui_scale_2;
      bflib_system_io_fn_0f0870(g_data_001995b0,player_off_2,(int)(*(int *)(arg_eax + 0xc) * ui_scale_2 - player_off_2) / (int)ui_scale_2);
      bflib_system_io_fn_0f0870(g_data_001993a0);
    }
  }
  return;
}

/******************************************************************************
 * Function : engine3_draw_translucent_effect_sprite (Original VA: 0xa5c28, Ghidra: FUN_000a5c28)
 * Prototype: void engine3_draw_translucent_effect_sprite(void);
 * Address  : 0xa5c28 (Size: 247 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Render translucent spell/effect sprite in 3D view
 * Callers  : 2 -> engine3_rasterize_depth_buckets_high, engine3_rasterize_depth_buckets_low
 * Callees  : 1 -> draw_fn_08d740
 ******************************************************************************/
void engine3_draw_translucent_effect_sprite(void)

{
  char player_off;
  ushort room_ptr;
  int arg_eax;
  
  g_lb_display_draw_flags._0_1_ = (byte)g_lb_display_draw_flags & 0xfe;
  room_ptr = *(ushort *)(&g_room_slabs_count + (uint)*(ushort *)(arg_eax + 6) * 0x45);
  if (((((room_ptr != 0) && (1 < room_ptr)) &&
       ((room_ptr < 7 || ((7 < room_ptr && ((room_ptr < 0xf || (0x10 < room_ptr)))))))) &&
      ((player_off = *(char *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 6),
       player_off == '\x02' || (player_off == '\x05')))) && (g_bss_002ee8d9 != '\0')) {
    draw_fn_08d740();
  }
  return;
}

/******************************************************************************
 * Function : engine3_mark_slab_subtiles_rendered (Original VA: 0xa5d4c, Ghidra: FUN_000a5d4c)
 * Prototype: void engine3_mark_slab_subtiles_rendered(void);
 * Address  : 0xa5d4c (Size: 126 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Mark 3x3 subtiles of a slab as visited during frame rendering
 * Callers  : 2 -> cdtest_update_player_view_state_014e9f, slab_process_slabmap_tile_0da7bc
 * Callees  : 1 -> panmap_door_flagged_position_063122
 ******************************************************************************/
void engine3_mark_slab_subtiles_rendered(void)

{
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  int arg_edx;
  int val_4;
  int val_5;
  
  val = arg_edx + 3;
  val_3 = arg_edx * 0x500;
  if (arg_edx < val) {
    do {
      val_5 = arg_eax * 5 + val_3;
      val_4 = (arg_eax + 3) * 5 + val_3;
      val_2 = val_5 - val_4;
      while (SBORROW4(val_5,val_4) != val_2 < 0) {
        *(byte *)((int)&g_map_subtiles + val_5) = *(byte *)((int)&g_map_subtiles + val_5) & 0x7b;
        val_2 = (val_5 + 5) - val_4;
        val_5 = val_5 + 5;
      }
      arg_edx = arg_edx + 1;
      val_3 = val_3 + 0x500;
    } while (arg_edx < val);
  }
  panmap_door_flagged_position_063122();
  return;
}

/******************************************************************************
 * Function : engine3_init_quad_vertex_uvs (Original VA: 0xa5dd0, Ghidra: FUN_000a5dd0)
 * Prototype: void engine3_init_quad_vertex_uvs(void);
 * Address  : 0xa5dd0 (Size: 37 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Populate quad vertex indices and 16.16 fixed-point UV coordinates
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_init_quad_vertex_uvs(void)

{
  undefined4 *arg_eax;
  undefined4 arg_ecx;
  undefined4 *arg_edx;
  undefined4 arg_ebx;
  
  *arg_eax = *arg_edx;
  arg_eax[1] = arg_edx[1];
  arg_eax[2] = arg_ebx;
  arg_eax[3] = arg_ecx;
  arg_eax[4] = ((int)arg_edx[2] >> 0x10) * 0x100 + 0xc0000;
  return;
}

/******************************************************************************
 * Function : engine3_is_triangle_front_facing_and_inside_frustum (Original VA: 0xa5e00, Ghidra: FUN_000a5e00)
 * Prototype: int engine3_is_triangle_front_facing_and_inside_frustum(void);
 * Address  : 0xa5e00 (Size: 87 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Test 3D triangle clip flags (0x1f8) and 2D screen-space cross product winding
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
int engine3_is_triangle_front_facing_and_inside_frustum(void)

{
  int *arg_eax;
  int *tri_v1;
  int *arg_ebx;
  
  if ((*(ushort *)(arg_ebx + 2) & *(ushort *)(arg_eax + 2) & *(ushort *)(tri_v1 + 2) & 0x1f8) != 0)
  {
    return 0;
  }
  return (*tri_v1 - *arg_eax) * (arg_ebx[1] - tri_v1[1]) -
         (tri_v1[1] - arg_eax[1]) * (*arg_ebx - *tri_v1);
}

/******************************************************************************
 * Function : engine3_project_vertex_perspective (Original VA: 0xa5e60, Ghidra: FUN_000a5e60)
 * Prototype: void engine3_project_vertex_perspective(void);
 * Address  : 0xa5e60 (Size: 398 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Project 3D camera-space vertex to 2D screen coordinates (perspective)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_project_vertex_perspective(void)

{
  int val;
  int *arg_eax;
  int player_off;
  int *arg_edx;
  int val_2;
  int val_3;
  int val_4;
  
  player_off = *(int *)(*(int *)((int)&g_player_active_camera + (g_my_player_word >> 0x18) * 0x4ef) + 0x17) /
          (int)(uint)g_units_per_pixel;
  val_2 = arg_eax[4];
  val = arg_eax[5];
  val_3 = val_2 * val;
  val_4 = arg_eax[6];
  arg_eax[4] = (((*arg_edx + val) * (arg_edx[1] + val_2) - arg_edx[3]) - val_3) + arg_edx[2] * val_4 >>
              0xe;
  arg_eax[5] = (((arg_edx[4] + val) * (arg_edx[5] + val_2) - arg_edx[7]) - val_3) + arg_edx[6] * val_4
              >> 0xe;
  arg_eax[6] = (((val_2 + arg_edx[9]) * (val + arg_edx[8]) - arg_edx[0xb]) - val_3) +
              val_4 * arg_edx[10] >> 0xe;
  val = g_engine3_bss_00387d54;
  val_4 = arg_eax[5] + g_engine3_bss_00387d50;
  arg_eax[4] = arg_eax[4] + g_engine3_bss_00387d4c;
  val_2 = g_viewport_center_x;
  arg_eax[5] = val_4;
  arg_eax[6] = arg_eax[6] + val;
  *arg_eax = val_2 + (arg_eax[4] * player_off >> 0x10);
  val_2 = g_view_render_radius * 0x100;
  arg_eax[1] = g_viewport_center_y - (player_off * arg_eax[5] >> 0x10);
  val_2 = (val_2 + arg_eax[6]) / 2;
  arg_eax[6] = val_2;
  if (val_2 < 0x20) {
    arg_eax[6] = 0;
  }
  else if (0x2bdf < val_2) {
    arg_eax[6] = 0x2be0;
  }
  if (*arg_eax < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 8;
  }
  else if (g_data_0018429c <= *arg_eax) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x10;
  }
  if (arg_eax[1] < 0) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x20;
  }
  else if (g_data_001842a0 <= arg_eax[1]) {
    *(byte *)(arg_eax + 2) = *(byte *)(arg_eax + 2) | 0x40;
  }
  return;
}

/******************************************************************************
 * Function : engine3_enqueue_line_primitive (Original VA: 0xa5ff0, Ghidra: FUN_000a5ff0)
 * Prototype: void engine3_enqueue_line_primitive(void);
 * Address  : 0xa5ff0 (Size: 141 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Append 3D line primitive into g_render_poly_write_ptr and depth bucket
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_enqueue_line_primitive(void)

{
  undefined4 *poly_write_ptr;
  undefined4 uval;
  undefined4 *arg_eax;
  int val;
  undefined4 *arg_edx;
  int val_2;
  undefined1 arg_bl;
  
  val = (int)(arg_eax[6] + arg_edx[6]) / 2;
  if (g_render_poly_write_ptr < g_render_poly_buf_end) {
    val_2 = val >> 0x1f;
    val = ((int)((val + val_2 * -0x10) - (uint)(val_2 << 3 < 0)) >> 4) + -2;
    if (val < 0) {
      val = 0;
    }
    else if (0x2be < val) {
      val = 0x2be;
    }
    uval = (&g_key_to_ascii_table)[val];
    *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
    *g_render_poly_write_ptr = uval;
    (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
    g_render_poly_write_ptr[2] = *arg_eax;
    g_render_poly_write_ptr[3] = arg_eax[1];
    g_render_poly_write_ptr[4] = *arg_edx;
    g_render_poly_write_ptr[5] = arg_edx[1];
    poly_write_ptr = g_render_poly_write_ptr + 6;
    g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
    *(undefined1 *)poly_write_ptr = arg_bl;
  }
  return;
}

/******************************************************************************
 * Function : engine3_enqueue_point_or_marker_primitive (Original VA: 0xa60a0, Ghidra: FUN_000a60a0)
 * Prototype: void engine3_enqueue_point_or_marker_primitive(void);
 * Address  : 0xa60a0 (Size: 128 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Append marker primitive into g_render_poly_write_ptr and depth bucket
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void engine3_enqueue_point_or_marker_primitive(void)

{
  int *poly_write_ptr;
  ushort uval;
  ushort uval_2;
  undefined4 *poly_write_ptr_2;
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  uint ui_scale;
  
  poly_write_ptr_2 = g_render_poly_write_ptr;
  if (g_render_poly_write_ptr < g_render_poly_buf_end) {
    ui_scale = (uint)g_units_per_pixel;
    *g_render_poly_write_ptr = g_bss_00387224;
    *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xe;
    g_render_poly_write_ptr[2] = arg_eax;
    g_render_poly_write_ptr[3] = arg_edx / (int)ui_scale;
    uval = *(ushort *)(&g_data_0018e933 + (uint)*(byte *)(arg_eax + 0x1a) * 2);
    uval_2 = *(ushort *)(arg_eax + 0x58);
    poly_write_ptr = g_render_poly_write_ptr + 5;
    g_render_poly_write_ptr = g_render_poly_write_ptr + 6;
    *poly_write_ptr = arg_ebx;
    g_bss_00387224 = poly_write_ptr_2;
    poly_write_ptr_2[4] = (int)(arg_ebx - ((uint)uval + (uint)uval_2) / 0xc) / (int)ui_scale;
  }
  return;
}

/******************************************************************************
 * Function : engine3_collect_and_queue_subtile_things (Original VA: 0xa6134, Ghidra: FUN_000a6134)
 * Prototype: void engine3_collect_and_queue_subtile_things(void);
 * Address  : 0xa6134 (Size: 902 bytes)
 * Module   : engine3.cpp [address_order_boundary_interpolation]
 * Purpose  : Walk mapwho Thing linked list on subtile and queue sprites for rendering
 * Callers  : 0 -> 
 * Callees  : 1 -> engine3_scale_coord_by_camera_zoom
 ******************************************************************************/
void engine3_collect_and_queue_subtile_things(void)

{
  ushort uval;
  ushort uval_2;
  int thing_ptr;
  undefined4 uval_3;
  undefined4 *word_ptr;
  int val;
  uint ui_scale;
  ushort arg_dx;
  int *int_ptr;
  int *int_ptr_2;
  undefined4 *poly_write_ptr;
  int local_30 [7];
  
  int_ptr = local_30 + 2;
  poly_write_ptr = g_render_poly_write_ptr;
  do {
    thing_ptr = (&g_thing_ptrs)[arg_dx];
    int_ptr_2 = int_ptr;
    if ((*(byte *)(thing_ptr + 0x4f) & 1) == 0) { /* thing->render_flags */
      g_render_poly_write_ptr = poly_write_ptr;
      switch(*(byte *)(thing_ptr + 0x50) >> 2) {
      case 2:
        int_ptr[-1] = (int)(int_ptr + 2);
        int_ptr[-2] = 0xa6192;
        engine3_scale_coord_by_camera_zoom();
        int_ptr_2 = int_ptr + -1;
        poly_write_ptr = g_render_poly_write_ptr;
        if (g_render_poly_write_ptr < g_render_poly_buf_end) {
          val = int_ptr[1] + -3;
          if (val < 0) {
            val = 0;
          }
          else if (0x2be < val) {
            val = 0x2be;
          }
          uval_3 = (&g_key_to_ascii_table)[val];
          *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xb;
          *g_render_poly_write_ptr = uval_3;
          (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
          g_render_poly_write_ptr[2] = thing_ptr;
          ui_scale = (uint)g_units_per_pixel;
          g_render_poly_write_ptr[3] = int_ptr[-1] / (int)ui_scale;
          g_render_poly_write_ptr[4] = *int_ptr / (int)ui_scale;
          g_render_poly_write_ptr[5] = *int_ptr;
          poly_write_ptr = g_render_poly_write_ptr + 6;
          int_ptr_2 = int_ptr + -1;
          if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
            val = int_ptr[-1];
            int_ptr[3] = *int_ptr;
            int_ptr_2 = int_ptr + -1;
            if (poly_write_ptr < g_render_poly_buf_end) {
              *poly_write_ptr = g_bss_00387224;
              *(undefined1 *)(g_render_poly_write_ptr + 7) = 0xe;
              g_bss_00387224 = poly_write_ptr;
              g_render_poly_write_ptr[8] = thing_ptr;
              g_render_poly_write_ptr[9] = val / (int)ui_scale;
              uval = *(ushort *)(&g_data_0018e933 + (uint)*(byte *)(thing_ptr + 0x1a) * 2);
              uval_2 = *(ushort *)(thing_ptr + 0x58);
              int_ptr[2] = 0xc;
              g_render_poly_write_ptr[10] =
                   (int_ptr[3] - (int)((uint)uval + (uint)uval_2) / int_ptr[2]) / (int)ui_scale;
              poly_write_ptr = g_render_poly_write_ptr + 0xc;
              g_render_poly_write_ptr[0xb] = int_ptr[3];
              int_ptr_2 = int_ptr + -1;
            }
          }
        }
        break;
      case 4:
        int_ptr[-1] = (int)(int_ptr + 2);
        int_ptr[-2] = 0xa633f;
        engine3_scale_coord_by_camera_zoom();
        int_ptr_2 = int_ptr + -1;
        poly_write_ptr = g_render_poly_write_ptr;
        if (g_render_poly_write_ptr < g_render_poly_buf_end) {
          *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x10;
          *g_render_poly_write_ptr = g_bss_00387224;
          ui_scale = (uint)g_units_per_pixel;
          g_bss_00387224 = g_render_poly_write_ptr;
          g_render_poly_write_ptr[2] = int_ptr[-1] / (int)ui_scale;
          g_render_poly_write_ptr[3] = *int_ptr / (int)ui_scale;
          g_render_poly_write_ptr[4] = *(undefined4 *)(thing_ptr + 0x13); /* thing->anim_sprite */
          int_ptr_2 = int_ptr + -1;
          poly_write_ptr = g_render_poly_write_ptr + 5;
        }
        break;
      case 5:
        int_ptr[-1] = (int)(int_ptr + 2);
        int_ptr[-2] = 0xa63af;
        engine3_scale_coord_by_camera_zoom();
        int_ptr_2 = int_ptr + -1;
        poly_write_ptr = g_render_poly_write_ptr;
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
          int_ptr_2 = int_ptr + -1;
          if (*(char *)(thing_ptr + 0x19) == '(') {
            val = int_ptr[1] + -3;
            if (val < 0) {
              val = 0;
            }
            else if (0x2be < val) {
              val = 0x2be;
            }
            uval_3 = (&g_key_to_ascii_table)[val];
            *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x11;
            *g_render_poly_write_ptr = uval_3;
            (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
            ui_scale = (uint)g_units_per_pixel;
            g_render_poly_write_ptr[2] = int_ptr[-1] / (int)ui_scale;
            g_render_poly_write_ptr[3] = *int_ptr / (int)ui_scale;
            word_ptr = g_render_poly_buf_end;
            poly_write_ptr = g_render_poly_write_ptr + 4;
            *(undefined2 *)((int)g_render_poly_write_ptr + 6) = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
            int_ptr_2 = int_ptr + -1;
            if (poly_write_ptr < word_ptr) {
              *(undefined1 *)(g_render_poly_write_ptr + 5) = 0x13;
              *poly_write_ptr = g_bss_00387224;
              g_bss_00387224 = poly_write_ptr;
              g_render_poly_write_ptr[6] = int_ptr[-1] / (int)ui_scale;
              g_render_poly_write_ptr[7] = *int_ptr / (int)ui_scale;
              *(undefined2 *)((int)g_render_poly_write_ptr + 0x16) = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
              int_ptr_2 = int_ptr + -1;
              poly_write_ptr = g_render_poly_write_ptr + 8;
            }
          }
        }
        break;
      case 6:
        int_ptr[-1] = (int)(int_ptr + 2);
        int_ptr[-2] = 0xa62ad;
        engine3_scale_coord_by_camera_zoom();
        int_ptr_2 = int_ptr + -1;
        poly_write_ptr = g_render_poly_write_ptr;
        if (g_render_poly_write_ptr < g_render_poly_buf_end) {
          val = int_ptr[1] + -3;
          if (val < 0) {
            val = 0;
          }
          else if (0x2be < val) {
            val = 0x2be;
          }
          uval_3 = (&g_key_to_ascii_table)[val];
          *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x12;
          *g_render_poly_write_ptr = uval_3;
          (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr;
          g_render_poly_write_ptr[2] = thing_ptr;
          ui_scale = (uint)g_units_per_pixel;
          g_render_poly_write_ptr[3] = int_ptr[-1] / (int)ui_scale;
          g_render_poly_write_ptr[4] = *int_ptr / (int)ui_scale;
          g_render_poly_write_ptr[5] = *int_ptr;
          int_ptr_2 = int_ptr + -1;
          poly_write_ptr = g_render_poly_write_ptr + 6;
        }
      }
    }
    arg_dx = *(ushort *)(thing_ptr + 2);
    int_ptr = int_ptr_2;
  } while (arg_dx != 0);
  g_render_poly_write_ptr = poly_write_ptr;
  return;
}

/******************************************************************************
 * Function : engine3_rasterize_depth_buckets_low (Original VA: 0xa6504, Ghidra: FUN_000a6504)
 * Prototype: void engine3_rasterize_depth_buckets_low(void);
 * Address  : 0xa6504 (Size: 1127 bytes)
 * Module   : engine3.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Traverse all 704 depth buckets (0x2bf..0) and rasterize queued polygons (low)
 * Callers  : 1 -> engine3_render_3d_dungeon_viewport
 * Callees  : 9 -> draw_update_player_view_state_0915dc, engine3_draw_queued_billboard_sprite, engine3_draw_string_billboard, engine3_draw_keeper_hand_or_object_sprite, engine3_draw_translucent_effect_sprite, update_neutral_thing_anim_sprite, update_thing_anim_sprite_frame, watcom_crt_fn_1295e0 ...
 ******************************************************************************/
void engine3_rasterize_depth_buckets_low(void)

{
  int val;
  uint ui_scale;
  uint *word_ptr;
  int val_2;
  int *int_ptr;
  uint auStack_a4 [34];
  undefined4 *local_1c;
  
  word_ptr = auStack_a4 + 2;
  val_2 = 0x2bf;
  g_bss_003d9578 = 0;
  local_1c = &g_render_depth_buckets;
  do {
    int_ptr = *(int **)((int)word_ptr + 0x80);
switchD_000a6956_caseD_c:
    int_ptr = (int *)*int_ptr;
    if (int_ptr != (int *)0x0) {
      do {
        switch((char)int_ptr[1]) {
        case '\v':
          word_ptr[-1] = 0xa6878;
          update_thing_anim_sprite_frame();
          int_ptr = (int *)*int_ptr;
          break;
        default:
          goto switchD_000a6956_caseD_c;
        case '\r':
          word_ptr[-1] = (uint)*(byte *)(int_ptr + 6);
          word_ptr[-2] = 0xa6915;
          draw_update_player_view_state_0915dc();
          int_ptr = (int *)*int_ptr;
          word_ptr = word_ptr + -1;
          break;
        case '\x0e':
          if (g_units_per_pixel == 1) {
            word_ptr[-1] = 0xa68d5;
            engine3_draw_queued_billboard_sprite();
            int_ptr = (int *)*int_ptr;
          }
          else {
            word_ptr[-1] = 0xa68f3;
            engine3_draw_queued_billboard_sprite();
            int_ptr = (int *)*int_ptr;
          }
          break;
        case '\x0f':
          if (g_engine3_bss_00388318 == 0) {
            g_data_00184290 = (&g_bss_002f18e3)[*(int *)((int)int_ptr + 6)];
            g_data_00186fad = 5;
            val = *(int *)((int)int_ptr + 0x2a);
            if (val == 3) {
              g_data_00184290 = (&g_bss_002f18e3)[*(int *)((int)int_ptr + 6)];
            }
            else if (val == 0) {
              g_data_00184290 = g_bss_002f21eb;
            }
            else if (val == 1) {
              g_data_00184290 = g_bss_002f21ef;
            }
            ui_scale = (uint)g_units_per_pixel;
            word_ptr[0x1b] = (*(int *)((int)int_ptr + 10) >> 8) / (int)ui_scale;
            word_ptr[0x1c] = (*(int *)((int)int_ptr + 0xe) >> 8) / (int)ui_scale;
            word_ptr[0x1d] = *(undefined4 *)(&g_data_00191fe0 + (uint)*(byte *)((int)int_ptr + 5) * 4);
            word_ptr[0x1e] = *(undefined4 *)(&g_data_00192020 + (uint)*(byte *)((int)int_ptr + 5) * 4);
            word_ptr[0x1f] = *(undefined4 *)((int)int_ptr + 0x1a);
            word_ptr[0x16] = (*(int *)((int)int_ptr + 10) + *(int *)((int)int_ptr + 0x12) >> 8) /
                           (int)ui_scale;
            word_ptr[0x17] = (*(int *)((int)int_ptr + 0xe) >> 8) / (int)ui_scale;
            word_ptr[0x18] = (uint)(&PTR_DAT_00191ff0)[*(byte *)((int)int_ptr + 5)];
            word_ptr[0x19] = *(undefined4 *)(&g_data_00192030 + (uint)*(byte *)((int)int_ptr + 5) * 4);
            word_ptr[0x1a] = *(undefined4 *)((int)int_ptr + 0x1e);
            word_ptr[0xc] = (*(int *)((int)int_ptr + 10) + *(int *)((int)int_ptr + 0x12) >> 8) /
                          (int)ui_scale;
            word_ptr[0xd] = (*(int *)((int)int_ptr + 0xe) + *(int *)((int)int_ptr + 0x16) >> 8) /
                          (int)ui_scale;
            word_ptr[0xe] = (uint)(&PTR_DAT_00192000)[*(byte *)((int)int_ptr + 5)];
            word_ptr[0xf] = (uint)(&PTR_DAT_00192040)[*(byte *)((int)int_ptr + 5)];
            word_ptr[0x10] = *(undefined4 *)((int)int_ptr + 0x22);
            word_ptr[0x11] = (*(int *)((int)int_ptr + 10) >> 8) / (int)ui_scale;
            word_ptr[0x12] = (*(int *)((int)int_ptr + 0xe) + *(int *)((int)int_ptr + 0x16) >> 8) /
                           (int)ui_scale;
            word_ptr[0x13] = *(undefined4 *)(&g_data_00192010 + (uint)*(byte *)((int)int_ptr + 5) * 4);
            word_ptr[0x14] = (uint)(&PTR_DAT_00192050)[*(byte *)((int)int_ptr + 5)];
            word_ptr[0x15] = *(undefined4 *)((int)int_ptr + 0x26);
            word_ptr[-1] = 0xa684f;
            watcom_crt_fn_1295e0();
            word_ptr[-1] = 0xa6860;
            watcom_crt_fn_1295e0();
            int_ptr = (int *)*int_ptr;
          }
          else {
            val = *(int *)((int)int_ptr + 0x2a);
            if (val == 3) {
              *word_ptr = (&g_bss_002f18e3)[*(int *)((int)int_ptr + 6)];
              word_ptr[3] = *(int *)((int)int_ptr + 0x1a) >> 0x10;
              word_ptr[4] = *(int *)((int)int_ptr + 0x1e) >> 0x10;
              word_ptr[6] = *(int *)((int)int_ptr + 0x22) >> 0x10;
              word_ptr[5] = *(int *)((int)int_ptr + 0x26) >> 0x10;
            }
            else if (val == 0) {
              *word_ptr = g_bss_002f21eb;
              word_ptr[3] = *(int *)((int)int_ptr + 0x1a) >> 0x10;
              word_ptr[4] = *(int *)((int)int_ptr + 0x1e) >> 0x10;
              word_ptr[6] = *(int *)((int)int_ptr + 0x22) >> 0x10;
              word_ptr[5] = *(int *)((int)int_ptr + 0x26) >> 0x10;
            }
            else if (val == 1) {
              *word_ptr = g_bss_002f21ef;
              word_ptr[3] = *(int *)((int)int_ptr + 0x1a) >> 0x10;
              word_ptr[4] = *(int *)((int)int_ptr + 0x1e) >> 0x10;
              word_ptr[6] = *(int *)((int)int_ptr + 0x22) >> 0x10;
              word_ptr[5] = *(int *)((int)int_ptr + 0x26) >> 0x10;
            }
            ui_scale = (uint)g_units_per_pixel;
            word_ptr[1] = (*(int *)((int)int_ptr + 10) >> 8) / (int)ui_scale;
            word_ptr[2] = (*(int *)((int)int_ptr + 0xe) >> 8) / (int)ui_scale;
            word_ptr[7] = *(undefined4 *)(&g_data_00191fb0 + (uint)*(byte *)((int)int_ptr + 5) * 4);
            word_ptr[8] = *(undefined4 *)(&g_data_00191fc0 + (uint)*(byte *)((int)int_ptr + 5) * 4);
            word_ptr[9] = *(undefined4 *)(&g_data_00191fd0 + (uint)*(byte *)((int)int_ptr + 5) * 4);
            word_ptr[10] = (*(int *)((int)int_ptr + 0x12) >> 8) / (int)ui_scale >> 5;
            word_ptr[0xb] = (*(int *)((int)int_ptr + 0x16) >> 8) / (int)ui_scale >> 4;
            word_ptr[-1] = 0xa66a5;
            watcom_crt_fn_12f958();
            int_ptr = (int *)*int_ptr;
          }
          break;
        case '\x10':
          word_ptr[-1] = 0xa68a6;
          engine3_draw_string_billboard();
          int_ptr = (int *)*int_ptr;
          break;
        case '\x11':
          word_ptr[-1] = 0xa6927;
          engine3_draw_keeper_hand_or_object_sprite();
          int_ptr = (int *)*int_ptr;
          break;
        case '\x12':
          word_ptr[-1] = 0xa6890;
          update_neutral_thing_anim_sprite();
          int_ptr = (int *)*int_ptr;
          break;
        case '\x13':
          word_ptr[-1] = 0xa6939;
          engine3_draw_translucent_effect_sprite();
          int_ptr = (int *)*int_ptr;
        }
        if (int_ptr == (int *)0x0) break;
      } while( true );
    }
    val_2 = val_2 + -1;
    *(int *)((int)word_ptr + 0x80) = *(int *)((int)word_ptr + 0x80) + -4;
    if (val_2 < 0) {
      return;
    }
  } while( true );
}

/******************************************************************************
 * Function : engine3_render_3d_dungeon_viewport (Original VA: 0xa6990, Ghidra: FUN_000a6990)
 * Prototype: void engine3_render_3d_dungeon_viewport(void);
 * Address  : 0xa6990 (Size: 10513 bytes)
 * Module   : engine3.cpp [direct_file_string_xref]
 * OrigLine : engine3.cpp lines 602
 * Purpose  : Top-level 3D dungeon viewport renderer (clamps camera zoom, projects & rasterizes scene)
 * Callers  : 1 -> draw_fn_087694
 * Callees  : 9 -> workshop_update_player_view_state_0780df, engine3_rasterize_depth_buckets_low, engine3_scale_coord_by_camera_zoom, get_scaled_viewport_bottom_y, LbErrorLog, LbScreenWaitVbi, bflib_system_io_fn_0e6a6c, watcom_crt_fn_12f940 ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine3_render_3d_dungeon_viewport(void)

{
  int *poly_write_ptr;
  undefined2 *poly_write_ptr_2;
  byte flag;
  ushort uval;
  ushort uval_2;
  undefined4 uval_3;
  undefined4 uval_4;
  undefined4 uval_5;
  undefined4 *word_ptr;
  undefined4 *poly_write_ptr_3;
  int camera;
  int val;
  int val_2;
  int val_3;
  uint uval_6;
  uint *word_ptr_2;
  undefined4 uval_7;
  int val_4;
  int val_5;
  int loop_i;
  uint ui_scale;
  int thing_ptr;
  uint uval_8;
  int val_6;
  int val_7;
  int val_8;
  int val_9;
  undefined4 *poly_write_ptr_4;
  undefined4 *poly_write_ptr_5;
  undefined4 *poly_write_ptr_6;
  int **val_10;
  int val_11;
  int val_12;
  undefined8 uval_9;
  int *local_3ac;
  uint local_3a8 [36];
  undefined2 local_318;
  undefined2 local_316;
  undefined2 local_314;
  int local_308;
  int local_2fc;
  ushort *local_2dc;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  int local_2b4;
  int local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_50;
  int local_44;
  int local_40;
  byte local_3c;
  byte local_38;
  undefined1 local_34;
  byte local_24;
  byte local_20;
  
  g_engine3_bss_00388318 = (uint)(*(int *)(camera + 0x17) == 0x10000); /* camera->zoom */
  if (0x10000 < *(int *)(camera + 0x17)) { /* camera->zoom */
    *(undefined4 *)(camera + 0x17) = 0x10000; /* camera->zoom */
  }
  local_2d4 = g_display_bss_003d983c;
  local_2d0 = g_display_bss_003d9840;
  local_2cc = g_display_bss_003d9844;
  thing_ptr = (g_my_player_word >> 0x18) * 0x4ef;
  local_2c8 = g_display_bss_003d9848;
  ui_scale = (uint)g_units_per_pixel;
  local_2c4 = *(ushort *)(&g_player_hand_thing_idx + thing_ptr) / ui_scale;
  local_2c0 = *(ushort *)(&g_bss_0019d512 + thing_ptr) / ui_scale;
  uval = *(ushort *)(&g_bss_0019d50e + thing_ptr);
  local_3a8[0] = 0xa6a9d;
  bflib_system_io_fn_0e6a6c();
  local_3a8[0] = 0xa6aae;
  watcom_crt_fn_12f940();
  local_3ac = (int *)0xa6ac0;
  local_3a8[0] = uval / ui_scale;
  watcom_crt_fn_137e43();
  thing_ptr = (int)(*(int *)((int)local_2dc + 7) + 0x100U & 0x7ff) >> 9;
  val_5 = *(int *)((int)local_2dc + 0x17) * 0x20;
  local_24 = (byte)thing_ptr;
  loop_i = val_5 >> 0x1f;
  local_2b4 = (int)((val_5 + loop_i * -0x100) - (uint)(loop_i << 7 < 0)) >> 8;
  local_2a0 = *(undefined4 *)(&g_data_00191f50 + thing_ptr * 4);
  local_29c = *(undefined4 *)(&g_data_00191f60 + thing_ptr * 4);
  local_298 = *(undefined4 *)(&g_data_00191f30 + thing_ptr * 4);
  local_294 = *(undefined4 *)(&g_data_00191f40 + thing_ptr * 4);
  loop_i = (g_my_player_word >> 0x18) * 0x4ef;
  thing_ptr = (int)((uint)*(ushort *)(&g_bss_0019d50c + loop_i) << 0x10) / local_2b4;
  val_5 = (int)((uint)*(ushort *)(&g_bss_0019d50e + loop_i) << 0x10) / local_2b4;
  g_bss_00379394 = (&g_player_id_number)[loop_i];
  g_bss_00379395 = '\x01' << (g_bss_00379394 & 0x1f);
  g_render_poly_write_ptr = &g_render_poly_buf_start;
  local_3ac = (int *)0xa6bbe;
  LbScreenWaitVbi();
  thing_ptr = thing_ptr >> 1;
  val_5 = val_5 >> 1;
  local_3ac = (int *)0xa6bfc;
  workshop_update_player_view_state_0780df();
  if (3 < local_24) {
    local_3ac = (int *)0xa6fb3;
    LbErrorLog(); /* LbErrorLog("engine3.cpp", line 602, "Illegal quadrant") */
    return;
  }
  loop_i = g_my_player_word >> 0x18;
  switch(local_24) {
  case 0:
    local_2a8 = (int)((uint)*local_2dc - thing_ptr) >> 8;
    local_2a4 = (int)((uint)local_2dc[1] - val_5) >> 8;
    local_44 = (uint)*(ushort *)(&g_bss_0019d50c + loop_i * 0x4ef) * 0x80 -
               ((int)(((uint)*local_2dc + local_2a8 * -0x100) * local_2b4) >> 8);
    local_40 = (uint)*(ushort *)(&g_bss_0019d50e + loop_i * 0x4ef) * 0x80 -
               ((int)(((uint)local_2dc[1] + local_2a4 * -0x100) * local_2b4) >> 8);
    break;
  case 1:
    val_5 = (int)(val_5 + (uint)*local_2dc) >> 8;
    local_2a4 = (int)((uint)local_2dc[1] - thing_ptr) >> 8;
    local_44 = (uint)*(ushort *)(&g_bss_0019d50c + loop_i * 0x4ef) * 0x80 -
               ((int)(((uint)local_2dc[1] + local_2a4 * -0x100) * local_2b4) >> 8);
    local_2a8 = val_5 + -1;
    local_40 = (uint)*(ushort *)(&g_bss_0019d50e + loop_i * 0x4ef) * 0x80 -
               ((int)((val_5 * 0x100 - (uint)*local_2dc) * local_2b4) >> 8);
    break;
  case 2:
    local_2a8 = (int)(thing_ptr + (uint)*local_2dc) >> 8;
    local_2a4 = (int)(val_5 + (uint)local_2dc[1]) >> 8;
    local_44 = (uint)*(ushort *)(&g_bss_0019d50c + loop_i * 0x4ef) * 0x80 -
               ((int)(local_2b4 * ((local_2a8 + 1) * 0x100 - (uint)*local_2dc)) >> 8);
    local_40 = (uint)*(ushort *)(&g_bss_0019d50e + loop_i * 0x4ef) * 0x80 -
               ((int)((local_2a4 * 0x100 - (uint)local_2dc[1]) * local_2b4) >> 8);
    local_2a4 = local_2a4 + -1;
    break;
  case 3:
    local_2a8 = (int)((uint)*local_2dc - val_5) >> 8;
    local_2a4 = (int)(thing_ptr + (uint)local_2dc[1]) >> 8;
    local_44 = (uint)*(ushort *)(&g_bss_0019d50c + loop_i * 0x4ef) * 0x80 -
               ((int)(((local_2a4 + 1) * 0x100 - (uint)local_2dc[1]) * local_2b4) >> 8);
    local_40 = (uint)*(ushort *)(&g_bss_0019d50e + loop_i * 0x4ef) * 0x80 -
               ((int)(((uint)*local_2dc + local_2a8 * -0x100) * local_2b4) >> 8);
  }
  uval = *(ushort *)(&g_player_hand_thing_idx + loop_i * 0x4ef);
  thing_ptr = (uint)g_units_per_pixel * g_graphics_window_width;
  local_3ac = (int *)0xa6cef;
  uval_9 = get_scaled_viewport_bottom_y();
  local_2c0 = ((int)uval_9 - (int)((ulonglong)uval_9 >> 0x20)) * 0x100 - local_40;
  val_5 = local_2b4 * 0x80 >> 0x1f;
  local_280 = (int)((local_2b4 * 0x80 + val_5 * -0x100) - (uint)(val_5 << 7 < 0)) >> 8;
  local_27c = (int)(((thing_ptr - (uint)uval) * 0x100 - local_44) * 0x100) / local_2b4;
  thing_ptr = 0;
  local_278 = local_2a8 * 0x100;
  local_50 = -1;
  local_274 = local_2a4 * 0x100;
  do {
    uval_8 = (uint)local_24;
    val_5 = (int)(local_2c0 << 8) / local_2b4;
    ui_scale = local_27c * *(int *)(&g_data_00191f50 + uval_8 * 4) + local_2a8 * 0x100 +
             *(int *)(&g_data_00191f30 + uval_8 * 4) * val_5;
    uval_6 = local_27c * *(int *)(&g_data_00191f60 + uval_8 * 4) + local_2a4 * 0x100 +
             val_5 * *(int *)(&g_data_00191f40 + uval_8 * 4);
    local_2bc = ui_scale & 0xff;
    local_2b8 = uval_6 & 0xff;
    val_11 = *(int *)(&g_data_00191f10 + uval_8 * 4) + ((int)ui_scale >> 8);
    val_12 = *(int *)(&g_data_00191f20 + uval_8 * 4) + ((int)uval_6 >> 8);
    val_5 = g_engine3_bss_00387da4;
    loop_i = g_engine3_bss_00387dd8;
    val_9 = g_engine3_bss_00387ddc;
    val_4 = g_engine3_bss_00387de0;
    val = g_engine3_bss_00387de4;
    ui_scale = g_engine3_bss_00387de8;
    uval_6 = g_engine3_bss_00387dec;
    if ((((-1 < val_11) && (val_11 < 0xff)) && (-1 < val_12)) && (val_12 < 0xff)) {
      val_3 = (val_12 * 0x100 + val_11) * 5;
      val_5 = (int)&g_map_subtiles + val_3;
      loop_i = val_11;
      val_9 = val_12;
      val_4 = val_11;
      val = val_12;
      ui_scale = local_2bc;
      uval_6 = local_2b8;
      if (thing_ptr != 0) {
        if (((uint)*(ushort *)
                    ((int)&g_bss_0019e973 +
                    (*(uint *)((int)&g_map_subtiles + val_3 + 1) & 0x7ff) * 0x18 + 3) &
            1 << ((byte)local_50 & 0x1f)) != 0) {
          g_engine3_bss_00387da4 = val_5;
          g_engine3_bss_00387de0 = val_11;
          g_engine3_bss_00387de4 = val_12;
          g_engine3_bss_00387de8 = local_2bc;
          g_engine3_bss_00387dec = local_2b8;
        }
        val_5 = g_engine3_bss_00387da4;
        val_4 = g_engine3_bss_00387de0;
        val = g_engine3_bss_00387de4;
        ui_scale = g_engine3_bss_00387de8;
        uval_6 = g_engine3_bss_00387dec;
        if (((g_engine3_bss_00388314 != '\0') && (thing_ptr == 2)) ||
           ((loop_i = g_engine3_bss_00387dd8, val_9 = g_engine3_bss_00387ddc, g_engine3_bss_00388314 == '\0' && (thing_ptr == 5))))
        {
          loop_i = g_engine3_bss_00387dd8;
          val_9 = g_engine3_bss_00387ddc;
          g_engine3_bss_00387df0 = val_11;
          g_engine3_bss_00387df4 = val_12;
          g_engine3_bss_00387df8 = local_2bc;
          g_engine3_bss_00387dfc = local_2b8;
        }
      }
    }
    g_engine3_bss_00387dec = uval_6;
    g_engine3_bss_00387de8 = ui_scale;
    g_engine3_bss_00387de4 = val;
    g_engine3_bss_00387de0 = val_4;
    g_engine3_bss_00387ddc = val_9;
    g_engine3_bss_00387dd8 = loop_i;
    g_engine3_bss_00387da4 = val_5;
    local_50 = local_50 + 1;
    thing_ptr = thing_ptr + 1;
    local_2c0 = local_2c0 + local_280;
  } while (thing_ptr < 8);
  val_10 = (int **)local_3a8;
  if (g_engine3_bss_00387e02._2_1_ == '\0') goto LAB_000a7ab4;
  local_38 = (byte)((uint)local_2b4 >> 8);
  local_20 = local_38;
  val_10 = (int **)local_3a8;
  if (g_engine3_bss_00387e02._2_1_ == '\0') goto LAB_000a7ab4;
  local_34 = (undefined1)((int)(*(int *)((int)local_2dc + 7) + 0x100U & 0x7ff) >> 9);
  local_318 = g_engine3_bss_00387e07;
  local_316 = g_engine3_bss_00387e0b;
  local_3ac = &local_264;
  local_314 = 0x500;
  val_10 = &local_3ac;
  engine3_scale_coord_by_camera_zoom();
  ui_scale = (uint)local_3c;
  thing_ptr = ((int)(ui_scale * 0x80) >> 8) * (5 - g_engine3_bss_00387e17);
  local_264 = ui_scale * 3;
  if (local_38 < 2) {
    if (local_38 == 1) goto LAB_000a72ca;
  }
  else {
    val_5 = local_270 + ui_scale * -3;
    if (local_38 < 3) {
      local_270 = val_5;
LAB_000a72ca:
      local_26c = local_26c + ui_scale * -3;
      local_268 = local_268 + local_264;
    }
    else if (local_38 == 3) {
      local_270 = val_5;
    }
  }
  local_268 = local_268 - local_24 / 2;
  val_5 = 0;
  do {
    loop_i = g_engine3_bss_00387e02;
    poly_write_ptr_6 = g_render_poly_write_ptr;
    local_25c = (val_5 + 1) * (uint)local_24 + local_270;
    local_254 = g_engine3_bss_00387e02 >> 0x18;
    val_9 = local_254;
    local_260 = local_26c;
    local_258 = local_26c;
    if (local_268 < 0) {
      val_4 = 0;
    }
    else {
      val_4 = local_268;
      if (0x2be < local_268) {
        val_4 = 0x2be;
      }
    }
    uval_7 = (&g_key_to_ascii_table)[val_4];
    *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
    uval_6 = (uint)g_units_per_pixel;
    *g_render_poly_write_ptr = uval_7;
    (&g_key_to_ascii_table)[val_4] = g_render_poly_write_ptr;
    g_render_poly_write_ptr[2] = (int)((uint)local_24 * val_5 + local_270) / (int)uval_6;
    g_render_poly_write_ptr[3] = local_26c / (int)uval_6;
    g_render_poly_write_ptr[4] = local_25c / (int)uval_6;
    g_render_poly_write_ptr[5] = local_26c / (int)uval_6;
    local_254._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    *(undefined1 *)(g_render_poly_write_ptr + 6) = (undefined1)local_254;
    loop_i = g_engine3_bss_00387e02;
    val = local_268 + ui_scale * -3;
    local_250 = val;
    local_240 = g_engine3_bss_00387e02 >> 0x18;
    val_4 = local_240;
    local_308 = local_26c + local_264;
    local_248 = (val_5 + 1) * (uint)local_24 + local_270;
    local_24c = (uint)local_24 * val_5 + local_270;
    if (val < 0) {
      val = 0;
    }
    else if (0x2be < val) {
      val = 0x2be;
    }
    uval_7 = (&g_key_to_ascii_table)[val];
    *(undefined1 *)(g_render_poly_write_ptr + 8) = 0xd;
    g_render_poly_write_ptr[7] = uval_7;
    (&g_key_to_ascii_table)[val] = g_render_poly_write_ptr + 7;
    uval_6 = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[9] = local_24c / (int)uval_6;
    g_render_poly_write_ptr[10] = local_308 / (int)uval_6;
    g_render_poly_write_ptr[0xb] = local_248 / (int)uval_6;
    poly_write_ptr = g_render_poly_write_ptr + 0xc;
    g_render_poly_write_ptr = g_render_poly_write_ptr + 0xe;
    *poly_write_ptr = local_308 / (int)uval_6;
    local_240._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    *(undefined1 *)(poly_write_ptr_6 + 0xd) = (undefined1)local_240;
    loop_i = g_engine3_bss_00387e02;
    poly_write_ptr_6 = g_render_poly_write_ptr;
    local_2fc = g_engine3_bss_00387e02 >> 0x18;
    val = local_2fc;
    local_234 = local_26c + thing_ptr;
    local_238 = (val_5 + 1) * (uint)local_24 + local_270;
    local_23c = (uint)local_24 * val_5 + local_270;
    if (local_268 < 0) {
      val_11 = 0;
    }
    else {
      val_11 = local_268;
      if (0x2be < local_268) {
        val_11 = 0x2be;
      }
    }
    uval_7 = (&g_key_to_ascii_table)[val_11];
    *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
    *g_render_poly_write_ptr = uval_7;
    (&g_key_to_ascii_table)[val_11] = g_render_poly_write_ptr;
    uval_6 = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[2] = local_23c / (int)uval_6;
    g_render_poly_write_ptr[3] = local_234 / (int)uval_6;
    g_render_poly_write_ptr[4] = local_238 / (int)uval_6;
    poly_write_ptr = g_render_poly_write_ptr + 5;
    g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
    *poly_write_ptr = local_234 / (int)uval_6;
    local_2fc._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    *(undefined1 *)(poly_write_ptr_6 + 6) = (undefined1)local_2fc;
    loop_i = g_engine3_bss_00387e02;
    val_12 = local_268 + ui_scale * -3;
    local_230 = val_12;
    local_220 = g_engine3_bss_00387e02 >> 0x18;
    val_11 = local_220;
    local_224 = local_26c + local_264 + thing_ptr;
    local_228 = (val_5 + 1) * (uint)local_24 + local_270;
    local_22c = (uint)local_24 * val_5 + local_270;
    if (val_12 < 0) {
      val_12 = 0;
    }
    else if (0x2be < val_12) {
      val_12 = 0x2be;
    }
    uval_7 = (&g_key_to_ascii_table)[val_12];
    *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
    *g_render_poly_write_ptr = uval_7;
    (&g_key_to_ascii_table)[val_12] = g_render_poly_write_ptr;
    uval_6 = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[2] = local_22c / (int)uval_6;
    g_render_poly_write_ptr[3] = local_224 / (int)uval_6;
    g_render_poly_write_ptr[4] = local_228 / (int)uval_6;
    val_5 = val_5 + 1;
    g_render_poly_write_ptr[5] = local_224 / (int)uval_6;
    local_220._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    poly_write_ptr_6 = g_render_poly_write_ptr + 6;
    g_render_poly_write_ptr = g_render_poly_write_ptr + 7;
    *(undefined1 *)poly_write_ptr_6 = (undefined1)local_220;
  } while (val_5 < 3);
  val_5 = 0;
  do {
    loop_i = g_engine3_bss_00387e02;
    val_3 = val_5 * (uint)local_24;
    local_21c = local_268 - val_3;
    local_20c = g_engine3_bss_00387e02 >> 0x18;
    val_12 = local_20c;
    local_210 = (uint)local_24 * (val_5 + 1) + local_26c;
    local_218 = local_270;
    local_214 = local_270;
    if (local_21c < 0) {
      val_6 = 0;
    }
    else {
      val_6 = local_21c;
      if (0x2be < local_21c) {
        val_6 = 0x2be;
      }
    }
    uval_7 = (&g_key_to_ascii_table)[val_6];
    *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xd;
    *g_render_poly_write_ptr = uval_7;
    (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr;
    ui_scale = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[2] = local_270 / (int)ui_scale;
    g_render_poly_write_ptr[3] = (local_26c + val_3) / (int)ui_scale;
    g_render_poly_write_ptr[4] = local_270 / (int)ui_scale;
    g_render_poly_write_ptr[5] = local_210 / (int)ui_scale;
    local_20c._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    *(undefined1 *)(g_render_poly_write_ptr + 6) = (undefined1)local_20c;
    loop_i = g_engine3_bss_00387e02;
    local_204 = val_5 * (uint)local_24;
    val_6 = local_268 - local_204;
    local_208 = val_6;
    local_1f8 = g_engine3_bss_00387e02 >> 0x18;
    val_3 = local_1f8;
    local_1fc = local_26c + (uint)local_24 * (val_5 + 1);
    local_200 = local_270 + local_264;
    local_204 = local_204 + local_26c;
    if (val_6 < 0) {
      val_6 = 0;
    }
    else if (0x2be < val_6) {
      val_6 = 0x2be;
    }
    uval_7 = (&g_key_to_ascii_table)[val_6];
    *(undefined1 *)(g_render_poly_write_ptr + 8) = 0xd;
    ui_scale = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[7] = uval_7;
    (&g_key_to_ascii_table)[val_6] = g_render_poly_write_ptr + 7;
    g_render_poly_write_ptr[9] = local_200 / (int)ui_scale;
    g_render_poly_write_ptr[10] = local_204 / (int)ui_scale;
    g_render_poly_write_ptr[0xb] = local_200 / (int)ui_scale;
    g_render_poly_write_ptr[0xc] = local_1fc / (int)ui_scale;
    local_1f8._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    *(undefined1 *)(g_render_poly_write_ptr + 0xd) = (undefined1)local_1f8;
    loop_i = g_engine3_bss_00387e02;
    val_2 = val_5 * (uint)local_24;
    val_7 = local_268 - val_2;
    local_1f4 = val_7;
    local_1e4 = g_engine3_bss_00387e02 >> 0x18;
    val_6 = local_1e4;
    local_1ec = val_2 + local_26c + thing_ptr;
    local_1f0 = local_270;
    local_1e8 = local_270;
    if (val_7 < 0) {
      val_7 = 0;
    }
    else if (0x2be < val_7) {
      val_7 = 0x2be;
    }
    uval_7 = (&g_key_to_ascii_table)[val_7];
    *(undefined1 *)(g_render_poly_write_ptr + 0xf) = 0xd;
    g_render_poly_write_ptr[0xe] = uval_7;
    (&g_key_to_ascii_table)[val_7] = g_render_poly_write_ptr + 0xe;
    ui_scale = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[0x10] = local_270 / (int)ui_scale;
    g_render_poly_write_ptr[0x11] = local_1ec / (int)ui_scale;
    g_render_poly_write_ptr[0x12] = local_270 / (int)ui_scale;
    g_render_poly_write_ptr[0x13] = (int)(local_26c + (uint)local_24 * (val_5 + 1) + thing_ptr) / (int)ui_scale;
    local_1e4._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    *(undefined1 *)(g_render_poly_write_ptr + 0x14) = (undefined1)local_1e4;
    loop_i = g_engine3_bss_00387e02;
    val_7 = val_5 * (uint)local_24;
    val_8 = local_268 - val_7;
    local_1e0 = val_8;
    local_1d4 = thing_ptr + (uint)local_24 * (val_5 + 1) + local_26c;
    local_1dc = local_270 + local_264;
    local_1d0 = g_engine3_bss_00387e02 >> 0x18;
    val_2 = local_1d0;
    local_1d8 = val_7 + local_26c + thing_ptr;
    if (val_8 < 0) {
      val_8 = 0;
    }
    else if (0x2be < val_8) {
      val_8 = 0x2be;
    }
    uval_7 = (&g_key_to_ascii_table)[val_8];
    *(undefined1 *)(g_render_poly_write_ptr + 0x16) = 0xd;
    g_render_poly_write_ptr[0x15] = uval_7;
    (&g_key_to_ascii_table)[val_8] = g_render_poly_write_ptr + 0x15;
    ui_scale = (uint)g_units_per_pixel;
    g_render_poly_write_ptr[0x17] = local_1dc / (int)ui_scale;
    g_render_poly_write_ptr[0x18] = local_1d8 / (int)ui_scale;
    g_render_poly_write_ptr[0x19] = local_1dc / (int)ui_scale;
    val_5 = val_5 + 1;
    g_render_poly_write_ptr[0x1a] = local_1d4 / (int)ui_scale;
    local_1d0._0_1_ = (undefined1)((uint)loop_i >> 0x18);
    poly_write_ptr_6 = g_render_poly_write_ptr + 0x1b;
    g_render_poly_write_ptr = g_render_poly_write_ptr + 0x1c;
    *(undefined1 *)poly_write_ptr_6 = (undefined1)local_1d0;
    local_2fc = val;
    local_254 = val_9;
    local_240 = val_4;
    local_220 = val_11;
    local_20c = val_12;
    local_1f8 = val_3;
    local_1e4 = val_6;
    local_1d0 = val_2;
  } while (val_5 < 3);
LAB_000a7ab4:
  g_engine3_bss_00387e02._0_3_ = (uint3)(ushort)g_engine3_bss_00387e02;
  val_9 = (g_my_player_word >> 0x18) * 0x4ef;
  loop_i = (int)(((uint)*(ushort *)(&g_bss_0019d50e + val_9) * 0x100 +
                 *(int *)((int)val_10 + 0xf4) * 8) - *(int *)((int)val_10 + 0x368)) /
           *(int *)((int)val_10 + 0xf4);
  thing_ptr = *(int *)((int)val_10 + 0x100);
  val_5 = *(int *)((int)val_10 + 0x104);
  *(int *)((int)val_10 + 0x368) =
       *(int *)((int)val_10 + 0x368) + *(int *)((int)val_10 + 0xf4) * loop_i;
  *(int *)((int)val_10 + 0x100) = thing_ptr + *(int *)((int)val_10 + 0x110) * loop_i;
  *(int *)((int)val_10 + 0xf8) = thing_ptr + *(int *)((int)val_10 + 0x110) * loop_i;
  uval = *(ushort *)(&g_bss_0019d50c + val_9);
  *(int *)((int)val_10 + 0x104) = val_5 + loop_i * *(int *)((int)val_10 + 0x114);
  *(int *)((int)val_10 + 0xfc) = val_5 + loop_i * *(int *)((int)val_10 + 0x114);
  *(uint *)((int)val_10 + 0x124) = (uint)uval << 8;
  *(int *)((int)val_10 + 0x118) = *(int *)((int)val_10 + 0x364);
  if (*(int *)((int)val_10 + 0x364) < *(int *)((int)val_10 + 0x124)) {
    *(byte *)((int)val_10 + 0x380) = *(char *)((int)val_10 + 900) + 2U & 3;
    thing_ptr = *(int *)((int)val_10 + 0xf4) * 0x80 >> 0x1f;
    *(int *)((int)val_10 + 200) =
         (int)((*(int *)((int)val_10 + 0xf4) * 0x80 + thing_ptr * -0x100) - (uint)(thing_ptr << 7 < 0))
         >> 8;
    do {
      *(uint *)((int)val_10 + 0x1e0) =
           (uint)*(ushort *)(&g_bss_0019d50e + (g_my_player_word >> 0x18) * 0x4ef) << 8;
      if (*(int *)((int)val_10 + 0x110) == 0) {
        *(undefined4 *)((int)val_10 + 0xfc) = *(undefined4 *)((int)val_10 + 0x104);
      }
      else {
        *(undefined4 *)((int)val_10 + 0xf8) = *(undefined4 *)((int)val_10 + 0x100);
      }
      *(undefined4 *)((int)val_10 + 0x11c) = *(undefined4 *)((int)val_10 + 0x368);
      while (thing_ptr = (int)val_10[0x47], -(int)val_10[0x3d] < thing_ptr) {
        val_5 = (int)val_10[0x3e];
        if (((0 < val_5) && (val_5 < 0xff)) &&
           ((loop_i = (int)val_10[0x3f], 0 < loop_i && (loop_i < 0xff)))) {
          val_5 = loop_i * 0x100 + val_5;
          loop_i = val_5 * 5;
          uval = *(ushort *)((int)&g_map_subtiles + loop_i + 1);
          val_10[0x48] = (int *)((int)&g_map_subtiles + loop_i);
          if ((uval & 0x7ff) != 0) {
            val_9 = (g_my_player_word >> 0x18) * 0x4ef;
            val_10[0x79] = (int *)((int)&g_map_subtiles + loop_i);
            val_10[0x7a] = val_10[0x3e];
            val_10[0x7b] = val_10[0x3f];
            val_10[0x7c] = val_10[0x46];
            *(undefined1 *)(val_10 + 0xde) = *(undefined1 *)(val_10 + 0xe1);
            val_10[0x7d] = (int *)(val_10 + 0x78);
            *(undefined1 *)(val_10 + 0xdf) = *(undefined1 *)(val_10 + 0xe0);
            val_10[0x80] = val_10[0x32];
            val_10[0x81] = val_10[0x3d];
            val_10[0x82] = val_10[0x3d];
            uval = *(ushort *)(&g_bss_0019d50e + val_9);
            val_10[0xbd] = (int *)(thing_ptr >> 8);
            uval_2 = (&g_bss_001e3203)[val_5];
            flag = (&g_player_id_number)[val_9];
            val_9 = (uval + 0x40) - (int)val_10[0xbd];
            val_10[0x84] =
                 (int *)(*(uint *)((int)&g_map_subtiles + (val_5 + -0x101) * 5 + 1) >> 0x1c);
            val_10[0x85] =
                 (int *)(*(uint *)((int)&g_map_subtiles + (val_5 + -0x100) * 5 + 1) >> 0x1c);
            ui_scale = *(uint *)((int)&g_map_subtiles + loop_i + 1);
            val_10[0x86] =
                 (int *)(*(uint *)((int)&g_map_subtiles + (val_5 + -0xff) * 5 + 1) >> 0x1c);
            val_10[0x88] = (int *)(ui_scale >> 0x1c);
            val_10[0x89] = (int *)(*(uint *)((int)&g_map_subtiles + (val_5 + 1) * 5 + 1) >> 0x1c);
            val_10[0x83] = (int *)(1 << (flag & 0x1f));
            ui_scale = *(uint *)((int)&g_map_subtiles + (val_5 + -1) * 5 + 1);
            val_10[0x8a] =
                 (int *)(*(uint *)((int)&g_map_subtiles + (val_5 + 0xff) * 5 + 1) >> 0x1c);
            val_10[0x87] = (int *)(ui_scale >> 0x1c);
            ui_scale = *(uint *)((int)&g_map_subtiles + (val_5 + 0x100) * 5 + 1);
            val_10[0x8c] =
                 (int *)(*(uint *)((int)&g_map_subtiles + (val_5 + 0x101) * 5 + 1) >> 0x1c);
            val_10[0x8b] = (int *)(ui_scale >> 0x1c);
            ui_scale = 0;
            if (((uint)val_10[0x84] & (uint)val_10[0x85] & (uint)val_10[0x87] &
                 (uint)val_10[0x88] & (uint)val_10[0x83]) != 0) {
              ui_scale = (uint)uval_2;
            }
            word_ptr_2 = &g_bss_002f10e3 +
                      ((int)val_10[0x7a] * 4 + (int)val_10[0x7b] + (int)val_10[0x7b] * 0x10 &
                      0xff);
            val_10[0x8d] = (int *)(ui_scale - 0x100);
            val_5 = 0;
            do {
              uval_6 = ui_scale;
              if ((0x100 < ui_scale) && (ui_scale < 0x3e01)) {
                uval_6 = *word_ptr_2;
                word_ptr_2 = word_ptr_2 + 1;
                uval_6 = (uval_6 & 0x3f) * 0x20 + (int)val_10[0x8d];
              }
              val_10[0xbd] = (int *)(uval_6 << 8);
              loop_i = (-(uint)*(byte *)(val_10 + 0xde) & 3) * 0x24 + val_5;
              val_5 = val_5 + 4;
              *(int **)((int)val_10 + loop_i) = val_10[0xbd];
            } while (val_5 != 0x24);
            ui_scale = 0;
            if (((uint)val_10[0x85] & (uint)val_10[0x86] & (uint)val_10[0x88] &
                 (uint)val_10[0x89] & (uint)val_10[0x83]) != 0) {
              ui_scale = (uint)(ushort)(&g_bss_001e3205)
                                     [(int)val_10[0x7b] * 0x100 + (int)val_10[0x7a]];
            }
            word_ptr_2 = &g_bss_002f10e3 +
                      ((int)val_10[0x7b] * 0x10 + (int)val_10[0x7b] +
                       (int)val_10[0x7a] * 4 + 4 & 0xff);
            val_10[0x8e] = (int *)(ui_scale - 0x100);
            val_5 = 0;
            do {
              uval_6 = ui_scale;
              if ((0x100 < ui_scale) && (ui_scale < 0x3e01)) {
                uval_6 = *word_ptr_2;
                word_ptr_2 = word_ptr_2 + 1;
                uval_6 = (uval_6 & 0x3f) * 0x20 + (int)val_10[0x8e];
              }
              val_10[0xbd] = (int *)(uval_6 << 8);
              loop_i = (1 - *(byte *)(val_10 + 0xde) & 3) * 0x24 + val_5;
              val_5 = val_5 + 4;
              *(int **)((int)val_10 + loop_i) = val_10[0xbd];
            } while (val_5 != 0x24);
            ui_scale = 0;
            if (((uint)val_10[0x87] & (uint)val_10[0x88] & (uint)val_10[0x8a] &
                 (uint)val_10[0x8b] & (uint)val_10[0x83]) != 0) {
              ui_scale = (uint)*(ushort *)
                              (&g_bss_001e3403 +
                              ((int)val_10[0x7b] * 0x100 + (int)val_10[0x7a]) * 2);
            }
            word_ptr_2 = &g_bss_002f10e3 +
                      ((int)val_10[0x7b] * 0x10 + (int)val_10[0x7b] + 0x11 +
                       (int)val_10[0x7a] * 4 & 0xff);
            val_10[0x8f] = (int *)(ui_scale - 0x100);
            val_5 = 0;
            do {
              uval_6 = ui_scale;
              if ((0x100 < ui_scale) && (ui_scale < 0x3e01)) {
                uval_6 = *word_ptr_2;
                word_ptr_2 = word_ptr_2 + 1;
                uval_6 = (uval_6 & 0x3f) * 0x20 + (int)val_10[0x8f];
              }
              val_10[0xbd] = (int *)(uint)*(byte *)(val_10 + 0xde);
              loop_i = (3U - (int)val_10[0xbd] & 3) * 0x24 + val_5;
              val_5 = val_5 + 4;
              *(uint *)((int)val_10 + loop_i) = uval_6 << 8;
            } while (val_5 != 0x24);
            ui_scale = 0;
            if (((uint)val_10[0x88] & (uint)val_10[0x89] & (uint)val_10[0x8b] &
                 (uint)val_10[0x8c] & (uint)val_10[0x83]) != 0) {
              ui_scale = (uint)*(ushort *)
                              (&g_bss_001e3405 +
                              ((int)val_10[0x7b] * 0x100 + (int)val_10[0x7a]) * 2);
            }
            word_ptr_2 = &g_bss_002f10e3 +
                      ((int)val_10[0x7a] * 4 +
                       (int)val_10[0x7b] + (int)val_10[0x7b] * 0x10 + 0x15 & 0xff);
            val_10[0x90] = (int *)(ui_scale - 0x100);
            val_5 = 0;
            do {
              uval_6 = ui_scale;
              if ((0x100 < ui_scale) && (ui_scale < 0x3e01)) {
                uval_6 = *word_ptr_2;
                word_ptr_2 = word_ptr_2 + 1;
                uval_6 = (uval_6 & 0x3f) * 0x20 + (int)val_10[0x90];
              }
              val_10[0xbd] = (int *)(uval_6 << 8);
              loop_i = (2 - *(byte *)(val_10 + 0xde) & 3) * 0x24 + val_5;
              val_5 = val_5 + 4;
              *(int **)((int)val_10 + loop_i) = val_10[0xbd];
            } while (val_5 != 0x24);
            ui_scale = g_bss_002e6f23;
            if ((*(uint *)((int)val_10[0x79] + 1) >> 0x1c & (uint)g_bss_00379395) != 0) {
              ui_scale = *(uint *)((int)val_10[0x79] + 1) & 0x7ff;
            }
            loop_i = ui_scale * 0x18;
            val_5 = *val_10[0x7d];
            val_10[0x7e] = &g_bss_0019e973 + ui_scale * 6;
            if (((thing_ptr < val_5) && (*(short *)((int)&g_bss_0019e977 + loop_i + 1) != 0)) &&
               (*(short *)(&g_bss_0019e97b + ui_scale * 6) == 0)) {
              *val_10[0x7d] = thing_ptr;
              if ((*(byte *)((int)&g_map_subtiles +
                            ((int)val_10[0x7b] * 0x100 + (int)val_10[0x7a]) * 5) & 4) == 0) {
                uval_7 = val_10[0x12];
                val_10[0x9b] = (int *)thing_ptr;
                val_5 = *(int *)((int)&g_bss_0019e973 + loop_i + 3);
                val_10[0x9a] = val_10[0x7c];
                val_10[0x9f] = (int *)0x0;
                val_10[0x9e] = (int *)(val_5 >> 0x10);
                val_10[0x9c] = val_10[0x82];
                val_10[0x4e] = *val_10;
                val_10[0x9d] = val_10[0x81];
                val_10[0x26] = val_10[9];
                val_10[0x27] = val_10[0x1b];
                if (val_9 < 0) {
                  val_5 = 0;
                }
                else {
                  val_5 = val_9;
                  if (0x2be < val_9) {
                    val_5 = 0x2be;
                  }
                }
                uval_3 = (&g_key_to_ascii_table)[val_5];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                *g_render_poly_write_ptr = uval_3;
                (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                *(undefined4 *)((int)g_render_poly_write_ptr + 0x22) = uval_7;
                uval_7 = val_10[0x9e];
                *(undefined4 *)((int)g_render_poly_write_ptr + 0x2a) = 3;
                *(undefined4 *)((int)g_render_poly_write_ptr + 6) = uval_7;
                *(int **)((int)g_render_poly_write_ptr + 10) = val_10[0x9a];
                *(int **)((int)g_render_poly_write_ptr + 0xe) = val_10[0x9b];
                *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0x9c];
                *(int **)((int)g_render_poly_write_ptr + 0x16) = val_10[0x9d];
                *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 0x9f);
                *(int **)((int)g_render_poly_write_ptr + 0x1a) = val_10[0x4e];
                *(int **)((int)g_render_poly_write_ptr + 0x1e) = val_10[0x26];
                poly_write_ptr_6 = (undefined4 *)((int)g_render_poly_write_ptr + 0x26);
                g_render_poly_write_ptr = (undefined4 *)((int)g_render_poly_write_ptr + 0x2e);
                *poly_write_ptr_6 = val_10[0x27];
              }
              else {
                val_5 = *(int *)((int)&g_bss_0019e973 + loop_i + 3);
                val_10[0x91] = val_10[0x7c];
                val_10[0x94] = (int *)(val_5 >> 0x10);
                val_10[0x92] = val_10[0x82];
                val_10[0x95] = (int *)0x0;
                val_10[0x93] = val_10[0x81];
                val_10[0x99] = (int *)0x0;
                val_10[0x96] = (int *)0x200000;
                val_10[0x97] = (int *)0x200000;
                val_10[0x98] = (int *)0x200000;
                if (val_9 < 0) {
                  val_5 = 0;
                }
                else {
                  val_5 = val_9;
                  if (0x2be < val_9) {
                    val_5 = 0x2be;
                  }
                }
                uval_7 = (&g_key_to_ascii_table)[val_5];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                *g_render_poly_write_ptr = uval_7;
                (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                *(int *)((int)g_render_poly_write_ptr + 0xe) = thing_ptr;
                uval_7 = val_10[0x94];
                *(undefined4 *)((int)g_render_poly_write_ptr + 0x26) = 0x200000;
                *(undefined4 *)((int)g_render_poly_write_ptr + 6) = uval_7;
                *(int **)((int)g_render_poly_write_ptr + 10) = val_10[0x91];
                *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0x92];
                *(int **)((int)g_render_poly_write_ptr + 0x16) = val_10[0x93];
                *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 0x95);
                *(int **)((int)g_render_poly_write_ptr + 0x1a) = val_10[0x96];
                *(int **)((int)g_render_poly_write_ptr + 0x1e) = val_10[0x97];
                *(int **)((int)g_render_poly_write_ptr + 0x22) = val_10[0x98];
                poly_write_ptr_6 = (undefined4 *)((int)g_render_poly_write_ptr + 0x2a);
                g_render_poly_write_ptr = (undefined4 *)((int)g_render_poly_write_ptr + 0x2e);
                *poly_write_ptr_6 = val_10[0x99];
              }
            }
            loop_i = 0;
            val_10[0x7f] = (int *)0x0;
            val_10[0xd7] = val_10[0x7e];
            thing_ptr = thing_ptr + (int)val_10[0x81];
            val_5 = 0;
            do {
              if (*(short *)((int)val_10[0xd7] + 8) == 0) break;
              thing_ptr = thing_ptr - (int)val_10[0x80];
              val_10[0x7f] =
                   (int *)((int)&g_bss_001aa973 + (*(int *)((int)val_10[0xd7] + 6) >> 0x10) * 0x12);
              if (thing_ptr < *val_10[0x7d]) {
                *val_10[0x7d] = thing_ptr;
                uval = *(ushort *)((uint)*(byte *)(val_10 + 0xdf) * 2 + (int)val_10[0x7f]);
                val_10[0xa1] = (int *)thing_ptr;
                val_10[0xa0] = val_10[0x7c];
                val_10[0xa4] = (int *)(uint)uval;
                val_10[0xa2] = val_10[0x82];
                val_10[0xa5] = (int *)0x0;
                uval_7 = *(undefined4 *)((int)val_10 + loop_i + 0x70);
                val_10[0xa3] = val_10[0x80];
                val_10[0xa6] = (int *)uval_7;
                val_10[0xa7] = (int *)*(undefined4 *)((int)val_10 + loop_i + 0x4c);
                uval_7 = *(undefined4 *)((int)val_10 + loop_i + 0x48);
                val_10[0xaa] = (int *)0x3;
                val_10[0xa8] = (int *)uval_7;
                val_10[0xa9] = (int *)*(undefined4 *)((int)val_10 + loop_i + 0x6c);
                if (val_9 < 0) {
                  val_4 = 0;
                }
                else {
                  val_4 = val_9;
                  if (0x2be < val_9) {
                    val_4 = 0x2be;
                  }
                }
                val_10[0xbd] = (int *)(val_4 * 4);
                *g_render_poly_write_ptr = (&g_key_to_ascii_table)[val_4];
                val_4 = (int)val_10[0xbd];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                *(undefined4 **)((int)&g_key_to_ascii_table + val_4) = g_render_poly_write_ptr;
                *(int **)((int)g_render_poly_write_ptr + 6) = val_10[0xa4];
                *(int **)((int)g_render_poly_write_ptr + 10) = val_10[0xa0];
                *(int **)((int)g_render_poly_write_ptr + 0xe) = val_10[0xa1];
                *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0xa2];
                *(int **)((int)g_render_poly_write_ptr + 0x16) = val_10[0xa3];
                *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 0xa5);
                *(int **)((int)g_render_poly_write_ptr + 0x1a) = val_10[0xa6];
                *(int **)((int)g_render_poly_write_ptr + 0x1e) = val_10[0xa7];
                *(int **)((int)g_render_poly_write_ptr + 0x22) = val_10[0xa8];
                *(int **)((int)g_render_poly_write_ptr + 0x26) = val_10[0xa9];
                poly_write_ptr_6 = (undefined4 *)((int)g_render_poly_write_ptr + 0x2a);
                g_render_poly_write_ptr = (undefined4 *)((int)g_render_poly_write_ptr + 0x2e);
                *poly_write_ptr_6 = val_10[0xaa];
              }
              loop_i = loop_i + 4;
              val_5 = val_5 + 1;
              val_10[0xd7] = (int *)((int)val_10[0xd7] + 2);
            } while (val_5 < 8);
            if (val_10[0x7f] != (int *)0x0) {
              if (thing_ptr - (int)val_10[0x81] < *val_10[0x7d]) {
                *val_10[0x7d] = thing_ptr - (int)val_10[0x81];
                flag = *(byte *)((int)&g_map_subtiles +
                                 ((int)val_10[0x7b] * 0x100 + (int)val_10[0x7a]) * 5);
                uval_7 = *val_10[0x7d];
                if ((flag & 0x84) == 0) {
                  val_10[0xdb] = (int *)(uint)*(byte *)(val_10 + 0xde);
                  val_10[0xbd] = (int *)(uint)*(ushort *)((int)val_10[0x7f] + 8);
                  val_10[0x2a] = val_10[0x7c];
                  val_10[0xbf] = val_10[0x82];
                  val_10[0xc0] = val_10[0x81];
                  val_10[0x2b] = val_10[0xbd];
                  val_10[0xbe] = (int *)uval_7;
                  val_10[0xc1] = val_10[0xdb];
                  val_10[0x2d] = val_10[val_5];
                  uval_7 = val_10[val_5 + 9];
                  val_10[0x2e] = (int *)0x3;
                  val_10[0xc2] = (int *)uval_7;
                  uval_7 = val_10[val_5 + 0x1b];
                  val_10[0xc3] = val_10[val_5 + 0x12];
                  if (val_9 < 0) {
                    loop_i = 0;
                  }
                  else {
                    loop_i = val_9;
                    if (0x2be < val_9) {
                      loop_i = 0x2be;
                    }
                  }
                  uval_3 = (&g_key_to_ascii_table)[loop_i];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
                  *(int **)((int)g_render_poly_write_ptr + 6) = val_10[0x2b];
                  *(undefined4 *)((int)g_render_poly_write_ptr + 0x26) = uval_7;
                  *(int **)((int)g_render_poly_write_ptr + 10) = val_10[0x2a];
                  *(int **)((int)g_render_poly_write_ptr + 0xe) = val_10[0xbe];
                  *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0xbf];
                  *(int **)((int)g_render_poly_write_ptr + 0x16) = val_10[0xc0];
                  *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 0xc1);
                  *(int **)((int)g_render_poly_write_ptr + 0x1a) = val_10[0x2d];
                  *(int **)((int)g_render_poly_write_ptr + 0x1e) = val_10[0xc2];
                  *(int **)((int)g_render_poly_write_ptr + 0x22) = val_10[0xc3];
                  uval_7 = val_10[0x2e];
                }
                else if ((flag & 0x80) == 0) {
                  val_10[0xb6] = (int *)uval_7;
                  uval = *(ushort *)((int)val_10[0x7f] + 8);
                  val_10[0xb7] = val_10[0x82];
                  val_10[0xb8] = (int *)(uint)*(byte *)(val_10 + 0xde);
                  val_10[0xb5] = val_10[0x7c];
                  val_10[0x28] = val_10[0x81];
                  val_10[0x5a] = (int *)0x200000;
                  val_10[0xb9] = (int *)0x200000;
                  val_10[0xba] = (int *)0x200000;
                  val_10[0xbb] = (int *)0x200000;
                  val_10[0xbc] = (int *)0x0;
                  if (val_9 < 0) {
                    loop_i = 0;
                  }
                  else {
                    loop_i = val_9;
                    if (0x2be < val_9) {
                      loop_i = 0x2be;
                    }
                  }
                  uval_7 = (&g_key_to_ascii_table)[loop_i];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                  *g_render_poly_write_ptr = uval_7;
                  (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
                  uval_7 = val_10[0xb5];
                  *(uint *)((int)g_render_poly_write_ptr + 6) = (uint)uval;
                  *(undefined4 *)((int)g_render_poly_write_ptr + 10) = uval_7;
                  *(int **)((int)g_render_poly_write_ptr + 0xe) = val_10[0xb6];
                  *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0xb7];
                  *(int **)((int)g_render_poly_write_ptr + 0x16) = val_10[0x28];
                  *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 0xb8);
                  *(int **)((int)g_render_poly_write_ptr + 0x1a) = val_10[0x5a];
                  *(int **)((int)g_render_poly_write_ptr + 0x1e) = val_10[0xb9];
                  *(int **)((int)g_render_poly_write_ptr + 0x22) = val_10[0xba];
                  *(int **)((int)g_render_poly_write_ptr + 0x26) = val_10[0xbb];
                  uval_7 = val_10[0xbc];
                }
                else {
                  val_10[0xac] = (int *)uval_7;
                  uval = *(ushort *)((int)val_10[0x7f] + 8);
                  val_10[0xad] = val_10[0x82];
                  val_10[0xae] = (int *)(uint)uval;
                  val_10[0xaf] = (int *)(uint)*(byte *)(val_10 + 0xde);
                  val_10[0xab] = val_10[0x7c];
                  uval_7 = val_10[0x81];
                  val_10[0xb0] = (int *)0x200000;
                  val_10[0xb1] = (int *)0x200000;
                  val_10[0xb2] = (int *)0x200000;
                  val_10[0xb3] = (int *)0x200000;
                  val_10[0xb4] = (int *)0x1;
                  if (val_9 < 0) {
                    loop_i = 0;
                  }
                  else {
                    loop_i = val_9;
                    if (0x2be < val_9) {
                      loop_i = 0x2be;
                    }
                  }
                  uval_3 = (&g_key_to_ascii_table)[loop_i];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                  *g_render_poly_write_ptr = uval_3;
                  (&g_key_to_ascii_table)[loop_i] = g_render_poly_write_ptr;
                  *(int **)((int)g_render_poly_write_ptr + 6) = val_10[0xae];
                  *(undefined4 *)((int)g_render_poly_write_ptr + 0x16) = uval_7;
                  *(int **)((int)g_render_poly_write_ptr + 10) = val_10[0xab];
                  *(int **)((int)g_render_poly_write_ptr + 0xe) = val_10[0xac];
                  *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0xad];
                  *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 0xaf);
                  *(int **)((int)g_render_poly_write_ptr + 0x1a) = val_10[0xb0];
                  *(int **)((int)g_render_poly_write_ptr + 0x1e) = val_10[0xb1];
                  *(int **)((int)g_render_poly_write_ptr + 0x22) = val_10[0xb2];
                  *(int **)((int)g_render_poly_write_ptr + 0x26) = val_10[0xb3];
                  uval_7 = val_10[0xb4];
                }
                poly_write_ptr_6 = (undefined4 *)((int)g_render_poly_write_ptr + 0x2a);
                g_render_poly_write_ptr = (undefined4 *)((int)g_render_poly_write_ptr + 0x2e);
                *poly_write_ptr_6 = uval_7;
              }
            }
            if (((*(byte *)((int)val_10[0x7e] + 2) & 0xe) != 0) &&
               (1 << ((byte)val_5 & 0x1f) < (int)(uint)*(ushort *)((int)val_10[0x7e] + 3))) {
              for (loop_i = val_5 * 2 + (int)val_10[0x7e];
                  (val_5 < 8 && (*(short *)(loop_i + 8) == 0)); loop_i = loop_i + 2) {
                val_5 = val_5 + 1;
                thing_ptr = thing_ptr - (int)val_10[0x80];
              }
              loop_i = val_5 * 4;
              val_10[0xd8] = (int *)(val_5 * 2 + (int)val_10[0x7e]);
              while ((val_5 < 8 && (*(short *)((int)val_10[0xd8] + 8) != 0))) {
                thing_ptr = thing_ptr - (int)val_10[0x80];
                val_10[0x7f] =
                     (int *)((int)&g_bss_001aa973 + (*(int *)((int)val_10[0xd8] + 6) >> 0x10) * 0x12
                            );
                if (thing_ptr < *val_10[0x7d]) {
                  uval = *(ushort *)((uint)*(byte *)(val_10 + 0xdf) * 2 + (int)val_10[0x7f]);
                  val_10[0x2f] = (int *)thing_ptr;
                  val_10[0xc4] = val_10[0x7c];
                  val_10[199] = (int *)(uint)uval;
                  val_10[0xc5] = val_10[0x82];
                  val_10[200] = (int *)0x0;
                  uval_7 = *(undefined4 *)((int)val_10 + loop_i + 0x70);
                  val_10[0xc6] = val_10[0x80];
                  val_10[0xc9] = (int *)uval_7;
                  val_10[0xca] = (int *)*(undefined4 *)((int)val_10 + loop_i + 0x4c);
                  uval_7 = *(undefined4 *)((int)val_10 + loop_i + 0x48);
                  val_10[0xcd] = (int *)0x3;
                  val_10[0xcb] = (int *)uval_7;
                  val_10[0xcc] = (int *)*(undefined4 *)((int)val_10 + loop_i + 0x6c);
                  if (val_9 < 0) {
                    val_4 = 0;
                  }
                  else {
                    val_4 = val_9;
                    if (0x2be < val_9) {
                      val_4 = 0x2be;
                    }
                  }
                  val_10[0xbd] = (int *)(val_4 * 4);
                  *g_render_poly_write_ptr = (&g_key_to_ascii_table)[val_4];
                  val_4 = (int)val_10[0xbd];
                  *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                  *(undefined4 **)((int)&g_key_to_ascii_table + val_4) = g_render_poly_write_ptr;
                  *(int **)((int)g_render_poly_write_ptr + 6) = val_10[199];
                  *(int **)((int)g_render_poly_write_ptr + 10) = val_10[0xc4];
                  *(int **)((int)g_render_poly_write_ptr + 0xe) = val_10[0x2f];
                  *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0xc5];
                  *(int **)((int)g_render_poly_write_ptr + 0x16) = val_10[0xc6];
                  *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 200);
                  *(int **)((int)g_render_poly_write_ptr + 0x1a) = val_10[0xc9];
                  *(int **)((int)g_render_poly_write_ptr + 0x1e) = val_10[0xca];
                  *(int **)((int)g_render_poly_write_ptr + 0x22) = val_10[0xcb];
                  *(int **)((int)g_render_poly_write_ptr + 0x26) = val_10[0xcc];
                  poly_write_ptr_6 = (undefined4 *)((int)g_render_poly_write_ptr + 0x2a);
                  g_render_poly_write_ptr = (undefined4 *)((int)g_render_poly_write_ptr + 0x2e);
                  *poly_write_ptr_6 = val_10[0xcd];
                }
                loop_i = loop_i + 4;
                val_5 = val_5 + 1;
                val_10[0xd8] = (int *)((int)val_10[0xd8] + 2);
              }
              if ((val_10[0x7f] != (int *)0x0) && (thing_ptr - (int)val_10[0x81] < *val_10[0x7d])
                 ) {
                val_10[0x30] = (int *)(thing_ptr - (int)val_10[0x81]);
                uval_7 = val_10[val_5 + 9];
                uval = *(ushort *)((int)val_10[0x7f] + 8);
                val_10[0xcf] = val_10[0x82];
                val_10[0xd0] = (int *)(uint)uval;
                val_10[0xd1] = (int *)(uint)*(byte *)(val_10 + 0xde);
                val_10[0xce] = val_10[0x7c];
                uval_3 = val_10[val_5];
                val_10[0x31] = val_10[0x81];
                val_10[0xd2] = (int *)uval_3;
                uval_3 = val_10[val_5 + 0x1b];
                uval_4 = val_10[val_5 + 0x12];
                if (val_9 < 0) {
                  val_9 = 0;
                }
                else if (0x2be < val_9) {
                  val_9 = 0x2be;
                }
                uval_5 = (&g_key_to_ascii_table)[val_9];
                *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xf;
                *g_render_poly_write_ptr = uval_5;
                (&g_key_to_ascii_table)[val_9] = g_render_poly_write_ptr;
                *(undefined4 *)((int)g_render_poly_write_ptr + 0x1e) = uval_7;
                *(undefined4 *)((int)g_render_poly_write_ptr + 0x22) = uval_4;
                *(undefined4 *)((int)g_render_poly_write_ptr + 0x26) = uval_3;
                uval_7 = val_10[0xd0];
                *(undefined4 *)((int)g_render_poly_write_ptr + 0x2a) = 3;
                *(undefined4 *)((int)g_render_poly_write_ptr + 6) = uval_7;
                *(int **)((int)g_render_poly_write_ptr + 10) = val_10[0xce];
                *(int **)((int)g_render_poly_write_ptr + 0xe) = val_10[0x30];
                *(int **)((int)g_render_poly_write_ptr + 0x12) = val_10[0xcf];
                *(int **)((int)g_render_poly_write_ptr + 0x16) = val_10[0x31];
                *(undefined1 *)((int)g_render_poly_write_ptr + 5) = *(undefined1 *)(val_10 + 0xd1);
                poly_write_ptr_6 = (undefined4 *)((int)g_render_poly_write_ptr + 0x1a);
                g_render_poly_write_ptr = (undefined4 *)((int)g_render_poly_write_ptr + 0x2e);
                *poly_write_ptr_6 = val_10[0xd2];
              }
            }
            if (((*(uint *)((int)val_10[0x48] + 1) & 0x3ff800) != 0) &&
               ((*(uint *)((int)val_10[0x48] + 1) >> 0x1c &
                1 << ((&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] & 0x1f)) != 0)) {
              ui_scale = (*(uint *)((int)val_10[0x48] + 1) & 0x3fffff) >> 0xb;
              poly_write_ptr_6 = val_10;
              do {
                thing_ptr = (&g_thing_ptrs)[ui_scale];
                val_10 = (int **)poly_write_ptr_6;
                poly_write_ptr_4 = g_render_poly_write_ptr;
                if ((*(byte *)(thing_ptr + 0x4f) & 1) == 0) { /* thing->render_flags */
                  switch(*(byte *)(thing_ptr + 0x50) >> 2) {
                  case 2:
                    *(undefined1 **)((int)poly_write_ptr_6 + -4) = (undefined1 *)((int)poly_write_ptr_6 + 0x354);
                    *(undefined4 *)((int)poly_write_ptr_6 + -8) = 0xa8c00;
                    engine3_scale_coord_by_camera_zoom();
                    poly_write_ptr_3 = g_render_poly_write_ptr;
                    val_10 = (int **)((int)poly_write_ptr_6 + -4);
                    poly_write_ptr_4 = g_render_poly_write_ptr;
                    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                      val_5 = *(int *)((int)poly_write_ptr_6 + 0x350) + -3;
                      if (val_5 < 0) {
                        val_5 = 0;
                      }
                      else if (0x2be < val_5) {
                        val_5 = 0x2be;
                      }
                      uval_7 = (&g_key_to_ascii_table)[val_5];
                      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0xb;
                      *g_render_poly_write_ptr = uval_7;
                      (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                      g_render_poly_write_ptr[2] = thing_ptr;
                      ui_scale = (uint)g_units_per_pixel;
                      g_render_poly_write_ptr[3] = *(int *)((int)poly_write_ptr_6 + 0x348) / (int)ui_scale;
                      g_render_poly_write_ptr[4] = *(int *)((int)poly_write_ptr_6 + 0x34c) / (int)ui_scale;
                      g_render_poly_write_ptr[5] = *(undefined4 *)((int)poly_write_ptr_6 + 0x34c);
                      poly_write_ptr_4 = g_render_poly_write_ptr + 6;
                      val_10 = (int **)((int)poly_write_ptr_6 + -4);
                      if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
                        val_5 = *(int *)((int)poly_write_ptr_6 + 0x348);
                        loop_i = *(int *)((int)poly_write_ptr_6 + 0x34c);
                        val_10 = (int **)((int)poly_write_ptr_6 + -4);
                        if (poly_write_ptr_4 < g_render_poly_buf_end) {
                          *poly_write_ptr_4 = g_bss_00387224;
                          *(undefined1 *)(g_render_poly_write_ptr + 7) = 0xe;
                          g_bss_00387224 = poly_write_ptr_4;
                          g_render_poly_write_ptr[8] = thing_ptr;
                          g_render_poly_write_ptr[9] = val_5 / (int)ui_scale;
                          *(uint *)((int)poly_write_ptr_6 + 0x368) =
                               (uint)*(ushort *)(&g_data_0018e933 + (uint)*(byte *)(thing_ptr + 0x1a) * 2)
                          ;
                          uval = *(ushort *)(thing_ptr + 0x58);
                          val_5 = *(int *)((int)poly_write_ptr_6 + 0x368);
                          *(undefined4 *)((int)poly_write_ptr_6 + 0x368) = 0xc;
                          val_9 = *(int *)((int)poly_write_ptr_6 + 0x368);
                          poly_write_ptr = g_render_poly_write_ptr + 0xb;
                          g_render_poly_write_ptr = g_render_poly_write_ptr + 0xc;
                          *poly_write_ptr = loop_i;
                          poly_write_ptr_3[10] = (loop_i - (int)((uint)uval + val_5) / val_9) /
                                        (int)ui_scale;
                          val_10 = (int **)((int)poly_write_ptr_6 + -4);
                          poly_write_ptr_4 = g_render_poly_write_ptr;
                        }
                      }
                    }
                    break;
                  case 4:
                    *(undefined1 **)((int)poly_write_ptr_6 + -4) = (undefined1 *)((int)poly_write_ptr_6 + 0x354);
                    *(undefined4 *)((int)poly_write_ptr_6 + -8) = 0xa8e02;
                    engine3_scale_coord_by_camera_zoom();
                    val_10 = (int **)((int)poly_write_ptr_6 + -4);
                    poly_write_ptr_4 = g_render_poly_write_ptr;
                    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x10;
                      *g_render_poly_write_ptr = g_bss_00387224;
                      ui_scale = (uint)g_units_per_pixel;
                      g_bss_00387224 = g_render_poly_write_ptr;
                      g_render_poly_write_ptr[2] = *(int *)((int)poly_write_ptr_6 + 0x348) / (int)ui_scale;
                      g_render_poly_write_ptr[3] = *(int *)((int)poly_write_ptr_6 + 0x34c) / (int)ui_scale;
                      poly_write_ptr_4 = g_render_poly_write_ptr + 4;
                      g_render_poly_write_ptr = g_render_poly_write_ptr + 5;
                      *poly_write_ptr_4 = *(undefined4 *)(thing_ptr + 0x13); /* thing->anim_sprite */
                      val_10 = (int **)((int)poly_write_ptr_6 + -4);
                      poly_write_ptr_4 = g_render_poly_write_ptr;
                    }
                    break;
                  case 5:
                    *(undefined1 **)((int)poly_write_ptr_6 + -4) = (undefined1 *)((int)poly_write_ptr_6 + 0x354);
                    *(undefined4 *)((int)poly_write_ptr_6 + -8) = 0xa8e85;
                    engine3_scale_coord_by_camera_zoom();
                    val_10 = (int **)((int)poly_write_ptr_6 + -4);
                    poly_write_ptr_4 = g_render_poly_write_ptr;
                    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                      if (g_game_turn + -1 == *(int *)(thing_ptr + 0x15)) {
                        if (CONCAT31((uint3)((uint)(g_game_turn + -1) >> 8) ^
                                     (uint3)((uint)*(int *)(thing_ptr + 0x15) >> 8),
                                     *(char *)(thing_ptr + 0x19)) < 0x28) {
                          *(char *)(thing_ptr + 0x19) = *(char *)(thing_ptr + 0x19) + '\x01';
                        }
                      }
                      else {
                        *(undefined1 *)(thing_ptr + 0x19) = 0;
                      }
                      *(int *)(thing_ptr + 0x15) = g_game_turn;
                      poly_write_ptr_3 = g_render_poly_write_ptr;
                      val_10 = (int **)((int)poly_write_ptr_6 + -4);
                      poly_write_ptr_4 = g_render_poly_write_ptr;
                      if (*(char *)(thing_ptr + 0x19) == '(') {
                        val_5 = *(int *)((int)poly_write_ptr_6 + 0x350) + -3;
                        if (val_5 < 0) {
                          val_5 = 0;
                        }
                        else if (0x2be < val_5) {
                          val_5 = 0x2be;
                        }
                        uval_7 = (&g_key_to_ascii_table)[val_5];
                        *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x11;
                        *g_render_poly_write_ptr = uval_7;
                        (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                        ui_scale = (uint)g_units_per_pixel;
                        g_render_poly_write_ptr[2] = *(int *)((int)poly_write_ptr_6 + 0x348) / (int)ui_scale;
                        word_ptr = g_render_poly_buf_end;
                        g_render_poly_write_ptr[3] = *(int *)((int)poly_write_ptr_6 + 0x34c) / (int)ui_scale;
                        poly_write_ptr_5 = g_render_poly_write_ptr + 4;
                        poly_write_ptr_2 = (undefined2 *)((int)g_render_poly_write_ptr + 6);
                        g_render_poly_write_ptr = poly_write_ptr_5;
                        *poly_write_ptr_2 = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
                        val_10 = (int **)((int)poly_write_ptr_6 + -4);
                        poly_write_ptr_4 = g_render_poly_write_ptr;
                        if (poly_write_ptr_5 < word_ptr) {
                          *(undefined1 *)(poly_write_ptr_3 + 5) = 0x13;
                          *poly_write_ptr_5 = g_bss_00387224;
                          g_bss_00387224 = poly_write_ptr_5;
                          poly_write_ptr_3[6] = *(int *)((int)poly_write_ptr_6 + 0x348) / (int)ui_scale;
                          poly_write_ptr_3[7] = *(int *)((int)poly_write_ptr_6 + 0x34c) / (int)ui_scale;
                          g_render_poly_write_ptr = poly_write_ptr_3 + 8;
                          *(undefined2 *)((int)poly_write_ptr_3 + 0x16) = *(undefined2 *)(thing_ptr + 0x13); /* thing->anim_sprite */
                          val_10 = (int **)((int)poly_write_ptr_6 + -4);
                          poly_write_ptr_4 = g_render_poly_write_ptr;
                        }
                      }
                    }
                    break;
                  case 6:
                    *(undefined1 **)((int)poly_write_ptr_6 + -4) = (undefined1 *)((int)poly_write_ptr_6 + 0x354);
                    *(undefined4 *)((int)poly_write_ptr_6 + -8) = 0xa8d53;
                    engine3_scale_coord_by_camera_zoom();
                    val_10 = (int **)((int)poly_write_ptr_6 + -4);
                    poly_write_ptr_4 = g_render_poly_write_ptr;
                    if (g_render_poly_write_ptr < g_render_poly_buf_end) {
                      val_5 = *(int *)((int)poly_write_ptr_6 + 0x350) + -3;
                      if (val_5 < 0) {
                        val_5 = 0;
                      }
                      else if (0x2be < val_5) {
                        val_5 = 0x2be;
                      }
                      uval_7 = (&g_key_to_ascii_table)[val_5];
                      *(undefined1 *)(g_render_poly_write_ptr + 1) = 0x12;
                      *g_render_poly_write_ptr = uval_7;
                      (&g_key_to_ascii_table)[val_5] = g_render_poly_write_ptr;
                      g_render_poly_write_ptr[2] = thing_ptr;
                      ui_scale = (uint)g_units_per_pixel;
                      g_render_poly_write_ptr[3] = *(int *)((int)poly_write_ptr_6 + 0x348) / (int)ui_scale;
                      g_render_poly_write_ptr[4] = *(int *)((int)poly_write_ptr_6 + 0x34c) / (int)ui_scale;
                      poly_write_ptr_4 = g_render_poly_write_ptr + 5;
                      g_render_poly_write_ptr = g_render_poly_write_ptr + 6;
                      *poly_write_ptr_4 = *(undefined4 *)((int)poly_write_ptr_6 + 0x34c);
                      val_10 = (int **)((int)poly_write_ptr_6 + -4);
                      poly_write_ptr_4 = g_render_poly_write_ptr;
                    }
                  }
                }
                g_render_poly_write_ptr = poly_write_ptr_4;
                ui_scale = (uint)*(ushort *)(thing_ptr + 2);
                poly_write_ptr_6 = val_10;
              } while (*(ushort *)(thing_ptr + 2) != 0);
            }
          }
        }
        *(int *)((int)val_10 + 0xf8) =
             *(int *)((int)val_10 + 0xf8) - *(int *)((int)val_10 + 0x110);
        *(int *)((int)val_10 + 0xfc) =
             *(int *)((int)val_10 + 0xfc) - *(int *)((int)val_10 + 0x114);
        *(int *)((int)val_10 + 0x11c) =
             *(int *)((int)val_10 + 0x11c) - *(int *)((int)val_10 + 0xf4);
      }
      thing_ptr = (int)val_10[0x46];
      val_10[0x3e] = (int *)((int)val_10[0x3e] + (int)val_10[0x42]);
      val_10[0x3f] = (int *)((int)val_10[0x3f] + (int)val_10[0x43]);
      val_10[0x46] = (int *)(thing_ptr + (int)val_10[0x3d]);
    } while (thing_ptr + (int)val_10[0x3d] < (int)val_10[0x49]);
  }
  *(undefined4 *)((int)val_10 + -4) = 0xa9288;
  engine3_rasterize_depth_buckets_low();
  *(undefined4 *)((int)val_10 + -4) = 0xa9294;
  bflib_system_io_fn_0e6a6c();
  return;
}

/******************************************************************************
 * Function : engine3_scale_coord_by_camera_zoom (Original VA: 0xaa3a8, Ghidra: FUN_000aa3a8)
 * Prototype: undefined4 engine3_scale_coord_by_camera_zoom(int *param_1);
 * Address  : 0xaa3a8 (Size: 432 bytes)
 * Module   : engine3.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Scale world coordinate delta by camera zoom factor
 * Callers  : 3 -> engine3_collect_and_queue_subtile_things, engine3_render_3d_dungeon_viewport, food_fn_0aa558
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 engine3_scale_coord_by_camera_zoom(int *param_1)

{
  ushort *arg_eax;
  int *arg_ecx;
  ushort *arg_edx;
  int val;
  int val_2;
  int val_3;
  undefined4 uval;
  int *arg_ebx;
  int player_off;
  int local_10;
  
  val = *(int *)((int)arg_edx + 0x17) * 0x20;
  val_2 = val >> 0x1f;
  val = (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
  switch((int)(*(int *)((int)arg_edx + 7) + 0x100U & 0x7ff) >> 9) {
  case 0:
    val_2 = (uint)*arg_eax - (uint)*arg_edx;
    local_10 = (uint)arg_eax[1] - (uint)arg_edx[1];
    break;
  case 1:
    val_2 = (uint)arg_eax[1] - (uint)arg_edx[1];
    local_10 = (uint)*arg_edx - (uint)*arg_eax;
    break;
  case 2:
    val_2 = (uint)*arg_edx - (uint)*arg_eax;
    local_10 = (uint)arg_edx[1] - (uint)arg_eax[1];
    break;
  case 3:
    val_2 = (uint)arg_edx[1] - (uint)arg_eax[1];
    local_10 = (uint)*arg_eax - (uint)*arg_edx;
    break;
  default:
    goto switchD_000aa3f9_default;
  }
  player_off = (g_my_player_word >> 0x18) * 0x4ef;
  *arg_ebx = *(ushort *)(&g_bss_0019d50c + player_off) / 2 + (val * val_2 >> 0x10);
  val_2 = (*(ushort *)(&g_bss_0019d50e + player_off) / 2) * 0x100 + (local_10 * val >> 8);
  *param_1 = (*(ushort *)(&g_bss_0019d50e + player_off) + 0x40) - (val_2 >> 8);
  val = (*(int *)(arg_eax + 1) >> 0x10) * val * 0x80;
  val_3 = val >> 0x1f;
  *arg_ecx = val_2 - ((int)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0)) >> 0x10) >> 8;
  if ((((*arg_ebx < 0) || ((int)(uint)*(ushort *)(&g_bss_0019d50c + player_off) <= *arg_ebx)) ||
      (*arg_ecx < 0)) || ((int)(uint)*(ushort *)(&g_bss_0019d50e + player_off) <= *arg_ecx)) {
switchD_000aa3f9_default:
    uval = 0;
  }
  else {
    uval = 1;
  }
  return uval;
}

