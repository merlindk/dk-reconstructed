/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: command.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 60
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : command_fn_0781c8 (Original VA: 0x781c8, Ghidra: FUN_000781c8)
 * Prototype: void command_fn_0781c8(void);
 * Address  : 0x781c8 (Size: 146 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x0781c8
 * Callers  : 0 -> 
 * Callees  : 1 -> workshop_update_player_view_state_0780df
 ******************************************************************************/
void command_fn_0781c8(void)

{
  workshop_update_player_view_state_0780df();
  return;
}

/******************************************************************************
 * Function : command_fn_07825a (Original VA: 0x7825a, Ghidra: FUN_0007825a)
 * Prototype: int command_fn_07825a(void);
 * Address  : 0x7825a (Size: 138 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x07825a
 * Callers  : 3 -> inits_update_player_view_state_04660b, inits_update_player_view_state_046701, newgui_process_map_subtile_057fe4
 * Callees  : 2 -> command_update_player_view_state_0782e4, command_fn_07841c
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000782ae) */
/* WARNING: Removing unreachable block (ram,0x000782c9) */

int command_fn_07825a(void)

{
  byte flag;
  int arg_eax;
  ushort *arg_ecx;
  int val;
  ushort local_14;
  ushort local_10 [2];
  
  flag = *(byte *)(arg_eax + 6);
  val = 0;
  if (flag < 3) {
    if (flag == 0) goto LAB_000782a7;
LAB_00078273:
    val = command_update_player_view_state_0782e4(local_10);
  }
  else {
    if (3 < flag) {
      if (flag != 5) goto LAB_000782a7;
      goto LAB_00078273;
    }
    val = command_fn_07841c(local_10);
  }
  if (val != 0) {
    *arg_ecx = local_14;
    arg_ecx[1] = local_10[0];
  }
LAB_000782a7:
  if (0xfeff < *arg_ecx) {
    *arg_ecx = 0xfeff;
  }
  if (0xfeff < arg_ecx[1]) {
    arg_ecx[1] = 0xfeff;
  }
  return val;
}

/******************************************************************************
 * Function : command_update_player_view_state_0782e4 (Original VA: 0x782e4, Ghidra: FUN_000782e4)
 * Prototype: undefined4 command_update_player_view_state_0782e4(int *param_1);
 * Address  : 0x782e4 (Size: 312 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> command_fn_07825a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 command_update_player_view_state_0782e4(int *param_1)

{
  char player_off;
  int val;
  int *arg_ecx;
  int player_off_2;
  
  val = g_engine3_bss_00387de4;
  if ((-1 < g_engine3_bss_00387db0) && (-1 < g_engine3_bss_00387db4)) {
    player_off_2 = g_my_player_word._3_1_ * 0x4ef;
    if ((g_engine3_bss_00387db0 <
         (int)((ulonglong)*(ushort *)(&g_bss_0019d50c + player_off_2) /
              (ulonglong)(longlong)(int)(uint)g_units_per_pixel)) &&
       (g_engine3_bss_00387db4 <
        (int)((ulonglong)*(ushort *)(&g_bss_0019d50e + player_off_2) /
             (ulonglong)(longlong)(int)(uint)g_units_per_pixel))) {
      if (((((&g_bss_0019d51b)[player_off_2] == '\x01') && ((&g_bss_0019d51c)[player_off_2] != '\0')) ||
          (player_off = (&g_bss_0019d51b)[g_my_player_word._3_1_ * 0x4ef], player_off == '\x02')) ||
         ((((player_off == '\x12' || (player_off == '\x10')) || (player_off == '\b')) || (player_off == '\x17')))) {
        *arg_ecx = g_engine3_bss_00387df0 * 0x100 + g_engine3_bss_00387df8;
        val = g_engine3_bss_00387df4;
        player_off_2 = g_engine3_bss_00387dfc;
      }
      else {
        *arg_ecx = g_engine3_bss_00387de0 * 0x100 + g_engine3_bss_00387de8;
        player_off_2 = g_engine3_bss_00387dec;
      }
      *param_1 = val * 0x100 + player_off_2;
      if (*param_1 < 0) {
        *param_1 = 0;
      }
      else if (0xfeff < *param_1) {
        *param_1 = 0xfeff;
      }
      if (*arg_ecx < 0) {
        *arg_ecx = 0;
      }
      else if (0xfeff < *arg_ecx) {
        *arg_ecx = 0xfeff;
      }
      return 1;
    }
  }
  *param_1 = 0;
  *arg_ecx = *param_1;
  return 0;
}

/******************************************************************************
 * Function : command_fn_07841c (Original VA: 0x7841c, Ghidra: FUN_0007841c)
 * Prototype: undefined4 command_fn_07841c(int *param_1);
 * Address  : 0x7841c (Size: 146 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x07841c
 * Callers  : 1 -> command_fn_07825a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 command_fn_07841c(int *param_1)

{
  int *arg_ecx;
  int arg_edx;
  int val;
  int arg_ebx;
  
  *param_1 = 0;
  *arg_ecx = *param_1;
  if ((((0x95 < arg_edx) && (arg_edx < 0x1ea)) && (0x37 < arg_ebx)) && (arg_ebx < 0x18c)) {
    val = arg_edx + -0x96 >> 0x1f;
    *arg_ecx = ((int)((arg_edx + -0x96 + val * -4) - (uint)(val << 1 < 0)) >> 2) * 0x300 + 0x180;
    val = arg_ebx + -0x38 >> 0x1f;
    val = ((int)((arg_ebx + -0x38 + val * -4) - (uint)(val << 1 < 0)) >> 2) * 0x300 + 0x180;
    *param_1 = val;
    if (((-1 < *arg_ecx) && (*arg_ecx < 0x10000)) && ((-1 < val && (val < 0x10000)))) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : command_update_player_view_state_0784ae (Original VA: 0x784ae, Ghidra: FUN_000784ae)
 * Prototype: void command_update_player_view_state_0784ae(void);
 * Address  : 0x784ae (Size: 278 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 7 -> file_update_player_dungeon_02ca74, input_maintain_gui_button_state_04823a, inits_update_player_view_state_04839c, instance_update_player_view_state_04bdfa, instance_update_player_view_state_04bef7, creature_fn_080e04, creature_update_creature_control_080fbc
 * Callees  : 5 -> sound3d_fn_06f859, sound3d_fn_06f968, draw_frames_different_between_views_08ae00, draw_frames_different_between_views_08aee4, bflib_system_io_fn_0ebf9c
 ******************************************************************************/
void command_update_player_view_state_0784ae(void)

{
  undefined1 *arg_eax;
  undefined1 *word_ptr;
  undefined1 uval;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  uint arg_edx;
  
  uval = (undefined1)arg_edx;
  if (arg_edx < 3) {
    if (arg_edx == 0) goto LAB_000784d4;
    if (arg_edx < 2) {
      *(undefined1 **)(arg_eax + 0x38) = arg_eax + 0x66;
      if (arg_eax == &g_players + g_my_player_word._3_1_ * 0x4ef) {
        g_view_projection_mode = 2;
        draw_frames_different_between_views_08aee4();
        sound3d_fn_06f859();
        sound3d_fn_06f968();
        bflib_system_io_fn_0ebf9c();
        uval = extraout_CL;
      }
      goto LAB_000784d4;
    }
    word_ptr = arg_eax + 0x3c;
LAB_00078582:
    *(undefined1 **)(arg_eax + 0x38) = word_ptr;
    if (arg_eax != &g_players + g_my_player_word._3_1_ * 0x4ef) goto LAB_000784d4;
    g_view_projection_mode = 0;
    draw_frames_different_between_views_08ae00();
  }
  else {
    if (3 < arg_edx) {
      if ((arg_edx < 5) || (5 < arg_edx)) goto LAB_000784d4;
      word_ptr = arg_eax + 0xba;
      goto LAB_00078582;
    }
    *(undefined1 **)(arg_eax + 0x38) = arg_eax + 0x90;
    if (arg_eax != &g_players + g_my_player_word._3_1_ * 0x4ef) goto LAB_000784d4;
  }
  sound3d_fn_06f859();
  sound3d_fn_06f968();
  uval = extraout_CL_00;
LAB_000784d4:
  arg_eax[0x37] = uval;
  return;
}

/******************************************************************************
 * Function : command_process_map_subtile_0785c4 (Original VA: 0x785c4, Ghidra: FUN_000785c4)
 * Prototype: uint command_process_map_subtile_0785c4(void);
 * Address  : 0x785c4 (Size: 200 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint command_process_map_subtile_0785c4(void)

{
  uint arg_eax;
  int thing_ptr;
  uint uval;
  uint extraout_ECX;
  uint arg_edx;
  int val;
  uint thing_ptr_2;
  int val_2;
  int val_3;
  undefined8 uval_2;
  
  val_3 = 0xffff;
  uval = 0;
  val_2 = 0;
  do {
    val = (int)(char)(&g_data_0018b6c2)[val_2] + (arg_eax >> 8 & 0xff);
    if ((val < 0x100) &&
       (thing_ptr = (int)(char)(&g_data_0018b6c3)[val_2] + (arg_edx >> 8 & 0xff), thing_ptr < 0x100)) {
      for (thing_ptr_2 = (&g_thing_ptrs)
                   [(*(uint *)((int)&g_map_subtiles + (val + thing_ptr * 0x100) * 5 + 1) & 0x3fffff) >>
                    0xb]; g_thing_ptrs < thing_ptr_2; thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)]) {
        if (*(char *)(thing_ptr_2 + 0x1f) == '\x05') { /* thing->class_id */
          val = bflib_system_io_fn_0e69fc();
          uval_2 = bflib_system_io_fn_0e69fc();
          thing_ptr_2 = (uint)((ulonglong)uval_2 >> 0x20);
          val = (int)uval_2 + val;
          uval = extraout_ECX;
          if (val < val_3) {
            uval = thing_ptr_2;
            val_3 = val;
          }
        }
      }
    }
    val_2 = val_2 + 2;
  } while (val_2 != 0x12);
  return uval;
}

/******************************************************************************
 * Function : command_process_map_subtile_07868c (Original VA: 0x7868c, Ghidra: FUN_0007868c)
 * Prototype: uint command_process_map_subtile_07868c(void);
 * Address  : 0x7868c (Size: 220 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint command_process_map_subtile_07868c(void)

{
  uint arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  code *arg_ebx;
  int val_3;
  uint thing_ptr;
  uint uval;
  int local_10;
  
  local_10 = 0xffff;
  uval = 0;
  val_2 = 0;
  do {
    val_3 = (int)(char)(&g_data_0018b6c2)[val_2] + (arg_eax >> 8 & 0xff);
    val = (int)(char)(&g_data_0018b6c3)[val_2] + (arg_edx >> 8 & 0xff);
    if ((((-1 < val_3) && (val_3 < 0x100)) && (-1 < val)) && (val < 0x100)) {
      for (thing_ptr = (&g_thing_ptrs)
                   [(*(uint *)((int)&g_map_subtiles + (val_3 + val * 0x100) * 5 + 1) & 0x3fffff) >>
                    0xb]; g_thing_ptrs < thing_ptr; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
        if (*(char *)(thing_ptr + 0x1f) == '\x05') { /* thing->class_id */
          val = (*arg_ebx)();
          val_2 = extraout_ECX;
          if (val != 0) {
            val = bflib_system_io_fn_0e69fc();
            val_3 = bflib_system_io_fn_0e69fc();
            val_2 = extraout_ECX_00;
            if (val_3 + val < local_10) {
              uval = thing_ptr;
              local_10 = val_3 + val;
            }
          }
        }
      }
    }
    val_2 = val_2 + 2;
  } while (val_2 != 0x12);
  return uval;
}

/******************************************************************************
 * Function : command_process_map_subtile_078768 (Original VA: 0x78768, Ghidra: FUN_00078768)
 * Prototype: uint command_process_map_subtile_078768(void);
 * Address  : 0x78768 (Size: 227 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint command_process_map_subtile_078768(void)

{
  uint arg_eax;
  int val;
  uint uval;
  uint extraout_ECX;
  uint arg_edx;
  int val_2;
  uint thing_ptr;
  int arg_ebx;
  int val_3;
  undefined8 uval_2;
  int local_18;
  
  local_18 = 0xffff;
  uval = 0;
  val_3 = 0;
  do {
    val_2 = (int)(char)(&g_data_0018b6c2)[val_3] + (arg_eax >> 8 & 0xff);
    val = (int)(char)(&g_data_0018b6c3)[val_3] + (arg_edx >> 8 & 0xff);
    if ((((-1 < val_2) && (val_2 < 0x100)) && (-1 < val)) && (val < 0x100)) {
      for (thing_ptr = (&g_thing_ptrs)
                   [(*(uint *)((int)&g_map_subtiles + (val_2 + val * 0x100) * 5 + 1) & 0x3fffff) >>
                    0xb]; g_thing_ptrs < thing_ptr; thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 2)]) {
        if (((*(char *)(thing_ptr + 0x1f) == '\x01') && (*(char *)(thing_ptr + 6) == arg_ebx)) && /* thing->owner, thing->class_id */
           (*(char *)(thing_ptr + 0x1a) == '\x05')) {
          val = bflib_system_io_fn_0e69fc();
          uval_2 = bflib_system_io_fn_0e69fc();
          thing_ptr = (uint)((ulonglong)uval_2 >> 0x20);
          val = val + (int)uval_2;
          uval = extraout_ECX;
          if (val < local_18) {
            uval = thing_ptr;
            local_18 = val;
          }
        }
      }
    }
    val_3 = val_3 + 2;
  } while (val_3 != 0x12);
  return uval;
}

/******************************************************************************
 * Function : command_process_map_subtile_07884b (Original VA: 0x7884b, Ghidra: FUN_0007884b)
 * Prototype: uint command_process_map_subtile_07884b(void);
 * Address  : 0x7884b (Size: 206 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 1 -> process_players_dungeon_command_packet
 * Callees  : 2 -> creature_update_creature_control_0865b8, bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint command_process_map_subtile_07884b(void)

{
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint arg_edx;
  uint arg_ebx;
  int val_3;
  uint thing_ptr;
  uint uval;
  int val_4;
  undefined8 uval_2;
  
  val_4 = 0xffff;
  uval = 0;
  val_2 = 0;
  do {
    val_3 = (int)(char)(&g_data_0018b6c2)[val_2] + (arg_edx >> 8 & 0xff);
    val = (int)(char)(&g_data_0018b6c3)[val_2] + (arg_ebx >> 8 & 0xff);
    if ((((-1 < val_3) && (val_3 < 0x100)) && (-1 < val)) && (val < 0x100)) {
      for (thing_ptr = (*(uint *)((int)&g_map_subtiles + (val_3 + val * 0x100) * 5 + 1) & 0x3fffff) >>
                   0xb; thing_ptr = (&g_thing_ptrs)[thing_ptr], g_thing_ptrs < thing_ptr;
          thing_ptr = (uint)*(ushort *)(thing_ptr + 2)) {
        val = creature_update_creature_control_0865b8();
        val_2 = extraout_ECX;
        if (val != 0) {
          bflib_system_io_fn_0e69fc();
          uval_2 = bflib_system_io_fn_0e69fc();
          val = (int)((ulonglong)uval_2 >> 0x20) + (int)uval_2;
          val_2 = extraout_ECX_00;
          if (val < val_4) {
            uval = thing_ptr;
            val_4 = val;
          }
        }
      }
    }
    val_2 = val_2 + 2;
  } while (val_2 != 0x12);
  return uval;
}

/******************************************************************************
 * Function : command_process_slabmap_tile_078919 (Original VA: 0x78919, Ghidra: FUN_00078919)
 * Prototype: undefined4 command_process_slabmap_tile_078919(void);
 * Address  : 0x78919 (Size: 169 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 command_process_slabmap_tile_078919(void)

{
  int arg_eax;
  char ch;
  uint arg_edx;
  
  if ((int)*(char *)(arg_eax + 6) != arg_edx) {
    if (*(char *)(arg_eax + 7) == '\x0e') {
      ch = *(char *)(arg_eax + 8);
    }
    else {
      ch = *(char *)(arg_eax + 7);
    }
    if (ch != ')') {
      if (*(char *)(arg_eax + 7) == '\x0e') {
        ch = *(char *)(arg_eax + 8);
      }
      else {
        ch = *(char *)(arg_eax + 7);
      }
      if (ch != '(') {
        if (*(char *)(arg_eax + 7) == '\x0e') {
          ch = *(char *)(arg_eax + 8);
        }
        else {
          ch = *(char *)(arg_eax + 7);
        }
        if (ch != '+') {
          if (*(char *)(arg_eax + 7) == '\x0e') {
            ch = *(char *)(arg_eax + 8);
          }
          else {
            ch = *(char *)(arg_eax + 7);
          }
          if (ch != '*') {
            return 0;
          }
        }
      }
    }
    if (((&g_slabmap)
         [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
          (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55) * 6] & 7) != arg_edx) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : command_fn_0789c2 (Original VA: 0x789c2, Ghidra: FUN_000789c2)
 * Prototype: undefined4 command_fn_0789c2(void);
 * Address  : 0x789c2 (Size: 29 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x0789c2
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 command_fn_0789c2(void)

{
  int arg_eax;
  int arg_edx;
  
  if ((*(char *)(arg_eax + 6) != arg_edx) && (*(char *)(arg_eax + 0x1a) != '\x17')) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : command_fn_0789df (Original VA: 0x789df, Ghidra: FUN_000789df)
 * Prototype: bool command_fn_0789df(void);
 * Address  : 0x789df (Size: 14 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x0789df
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool command_fn_0789df(void)

{
  int arg_eax;
  
  return *(char *)(arg_eax + 0x1a) != '\x17';
}

/******************************************************************************
 * Function : command_fn_0789f0 (Original VA: 0x789f0, Ghidra: FUN_000789f0)
 * Prototype: undefined4 command_fn_0789f0(void);
 * Address  : 0x789f0 (Size: 233 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x0789f0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* Decompilation failed: procedure_pseudo_code failed: Ghidra decompilation failed:  Low-level Error: Cannot properly adjust input varnodes */

/******************************************************************************
 * Function : command_script_number_parameters_078ada (Original VA: 0x78ada, Ghidra: FUN_00078ada)
 * Prototype: undefined8 command_script_number_parameters_078ada(void);
 * Address  : 0x78ada (Size: 374 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 532, 813
 * Purpose  : String '(script:%d) Invalid number of parameters, %s'
 * Callers  : 1 -> file_load_script_file_02c502
 * Callees  : 4 -> command_script_unexpected_07909c, LbErrorLog, dk_sprintf, dk_atoi
 ******************************************************************************/
undefined8 command_script_number_parameters_078ada(void)

{
  code ch;
  char ch_2;
  undefined4 *word_ptr;
  uint uval;
  undefined4 uval_2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *word_ptr_2;
  int val;
  undefined4 arg_edx;
  uint uval_3;
  code *str_ptr;
  byte flag;
  undefined8 uval_4;
  char local_168 [300];
  undefined4 auStack_3c [8];
  char local_1c;
  
  flag = 0;
  local_1c = '\0';
  if (g_bss_0037775e != '\0') {
    g_bss_0037775e = g_bss_0037775e + -1;
  }
  local_168[0] = '\0';
  word_ptr = (undefined4 *)command_script_unexpected_07909c();
  if (word_ptr == (undefined4 *)0x0) {
    if (((int)(char)(&g_data_0017469c)[(byte)(local_168[0] + 1)] & 0xe0U) != 0) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_command____s_00167f6e,g_data_00179c04,local_168)
      ;
      LbErrorLog(); /* LbErrorLog("command.cpp", line 532, g_log_buf) */
    }
  }
  else if (*(char *)(word_ptr + 3) != '\n') {
    uval_3 = 0;
    while (((uval = uval_3 & 0xffff, word_ptr_2 = word_ptr, uval < 8 &&
            (*(char *)((int)word_ptr + uval + 4) != ' ')) && (local_1c == '\0'))) {
      command_script_unexpected_07909c();
      word_ptr_2 = extraout_ECX;
      if (local_1c != '\0') break;
      ch_2 = *(char *)((int)word_ptr + uval + 4);
      if ((ch_2 == 'N') || (word_ptr = extraout_ECX, ch_2 == 'n')) {
        uval_4 = dk_atoi();
        auStack_3c[(int)((ulonglong)uval_4 >> 0x20)] = (int)uval_4;
        word_ptr = extraout_ECX_00;
      }
      uval_3 = uval_3 + 1;
    }
    if ((7 < (uval_3 & 0xffff)) ||
       ((ch_2 = *(char *)((int)word_ptr_2 + (uval_3 & 0xffff) + 4), ch_2 != 'A' && (ch_2 != 'N')))) {
      val = 0x2f;
      str_ptr = command_fn_0789f0;
      do {
        if (val == 0) break;
        val = val + -1;
        ch = *str_ptr;
        str_ptr = str_ptr + (uint)flag * -2 + 1;
      } while (*(code *)(word_ptr_2 + 3) != ch);
                    /* WARNING: Could not recover jumptable at 0x00079042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uval_4 = (**(code **)(val * 4 + 0x78a1e))();
      return uval_4;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_number_of_pa_00167f04,g_data_00179c04,*word_ptr_2);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 813, g_log_buf) */
    uval_2 = 0xffffffff;
    goto LAB_00079095;
  }
  uval_2 = 0;
LAB_00079095:
  return CONCAT44(arg_edx,uval_2);
}

/******************************************************************************
 * Function : command_script_unexpected_07909c (Original VA: 0x7909c, Ghidra: FUN_0007909c)
 * Prototype: int command_script_unexpected_07909c(void);
 * Address  : 0x7909c (Size: 795 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 900
 * Purpose  : String '(script:%d) Unexpected '-''
 * Callers  : 1 -> command_script_number_parameters_078ada
 * Callees  : 7 -> LbErrorLog, dk_sprintf, dk_stricmp, bflib_system_io_fn_0f06fa, bflib_system_io_fn_0f0964, bflib_system_io_fn_0f0a2c, bflib_system_io_fn_0f5375
 ******************************************************************************/
int command_script_unexpected_07909c(void)

{
  byte flag;
  char *str_ptr;
  int *arg_eax;
  int val;
  undefined4 uval;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  char ch;
  char *arg_edx;
  undefined4 extraout_EDX;
  undefined1 *arg_ebx;
  int loop_i;
  char *str_ptr_2;
  int val_2;
  
  val_2 = 0;
  while (((((str_ptr = (char *)*arg_eax, ((&g_data_0017469c)[(byte)(*str_ptr + 1)] & 0xe0) == 0 &&
            (*str_ptr != '-')) && (*str_ptr != '\"')) && ((*str_ptr != '=' && (*str_ptr != '!')))) &&
         ((*str_ptr != '<' && (*str_ptr != '>'))))) {
    if ((*str_ptr == '\n') || (*str_ptr == '\0')) {
      *arg_ebx = 1;
      return 0;
    }
    *arg_eax = (int)(str_ptr + 1);
  }
  *arg_edx = '\0';
  str_ptr = (char *)*arg_eax;
  str_ptr_2 = arg_edx;
  if (((int)(char)(&g_data_0017469c)[(byte)(*str_ptr + 1U)] & 0xc0U) != 0) {
    while ((((&g_data_0017469c)[(byte)(*(char *)*arg_eax + 1)] & 0xe0) != 0 || (*(char *)*arg_eax == '_')
           )) {
      *str_ptr_2 = *(char *)*arg_eax;
      str_ptr_2 = str_ptr_2 + 1;
      *arg_eax = *arg_eax + 1;
    }
    *str_ptr_2 = '\0';
    bflib_system_io_fn_0f0a2c();
    for (loop_i = 0; *(int *)((int)&PTR_s_CREATE_PARTY_00191a04 + loop_i) != 0; loop_i = loop_i + 0xd) {
      val = dk_stricmp();
      if (val == 0) {
        val_2 = (int)&PTR_s_CREATE_PARTY_00191a04 + loop_i;
        break;
      }
    }
    loop_i = dk_stricmp();
    arg_eax = extraout_ECX;
    if (loop_i == 0) {
      while( true ) {
        str_ptr = (char *)*extraout_ECX;
        str_ptr_2 = arg_edx;
        if (((&g_data_0017469c)[(byte)(*str_ptr + 1)] & 0x20) != 0) goto LAB_000791b9;
        if (*str_ptr == '-') break;
        *extraout_ECX = (int)(str_ptr + 1);
      }
      ch = *str_ptr;
      while( true ) {
        *str_ptr_2 = ch;
        str_ptr_2 = str_ptr_2 + 1;
        *extraout_ECX = *extraout_ECX + 1;
LAB_000791b9:
        if (((&g_data_0017469c)[(byte)(*(char *)*extraout_ECX + 1)] & 0x20) == 0) break;
        ch = *(char *)*extraout_ECX;
      }
      *str_ptr_2 = '\0';
      uval = bflib_system_io_fn_0f0964();
      while (((&g_data_0017469c)[(byte)(*(char *)*extraout_ECX_00 + 1)] & 0x20) == 0) {
        *extraout_ECX_00 = (int)((char *)*extraout_ECX_00 + 1);
      }
      while (((&g_data_0017469c)[(byte)(*(char *)*extraout_ECX_00 + 1)] & 0x20) != 0) {
        *arg_edx = *(char *)*extraout_ECX_00;
        arg_edx = arg_edx + 1;
        *extraout_ECX_00 = *extraout_ECX_00 + 1;
      }
      *arg_edx = '\0';
      bflib_system_io_fn_0f0964(uval);
      bflib_system_io_fn_0f06fa();
      bflib_system_io_fn_0f5375(uval,val_2,extraout_EDX);
      arg_eax = extraout_ECX_01;
      str_ptr_2 = arg_edx;
    }
    goto LAB_00079397;
  }
  if ((*str_ptr == '-') || (((&g_data_0017469c)[(byte)(*str_ptr + 1U)] & 0x20) != 0)) {
    if (*(char *)*arg_eax == '-') {
      *arg_edx = *(char *)*arg_eax;
      str_ptr_2 = arg_edx + 1;
      *arg_eax = *arg_eax + 1;
    }
    if (((&g_data_0017469c)[(byte)(*(char *)*arg_eax + 1)] & 0x20) == 0) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unexpected_____00167fa3,g_data_00179c04);
LAB_00079293:
      LbErrorLog(); /* LbErrorLog("command.cpp", line 900, g_log_buf) */
      return 0;
    }
    while (((&g_data_0017469c)[(byte)(*(char *)*arg_eax + 1)] & 0x20) != 0) {
      *str_ptr_2 = *(char *)*arg_eax;
      str_ptr_2 = str_ptr_2 + 1;
      *arg_eax = *arg_eax + 1;
    }
    goto LAB_00079397;
  }
  if (*str_ptr == '\"') {
    *arg_eax = (int)(str_ptr + 1);
    while( true ) {
      str_ptr = (char *)*arg_eax;
      str_ptr_2 = arg_edx;
      if ((*str_ptr == '\0') || (*str_ptr == '\n')) goto LAB_00079397;
      if (*str_ptr == '\"') break;
      *arg_edx = *str_ptr;
      arg_edx = arg_edx + 1;
      *arg_eax = *arg_eax + 1;
    }
    *arg_eax = (int)(str_ptr + 1);
    goto LAB_00079397;
  }
  *arg_edx = *str_ptr;
  *arg_eax = *arg_eax + 1;
  str_ptr = (char *)*arg_eax;
  flag = str_ptr[-1];
  str_ptr_2 = arg_edx + 1;
  if (flag < 0x3c) {
    if (flag != 0x21) goto LAB_00079397;
    if (*str_ptr != '=') {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Expected_____after___00167ff9,g_data_00179c04);
      goto LAB_00079293;
    }
  }
  else {
    if (0x3c < flag) {
      if (flag < 0x3e) {
        if (*str_ptr != '=') {
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Expected_____after___00167fca,g_data_00179c04);
          goto LAB_00079293;
        }
        goto LAB_00079327;
      }
      if (flag != 0x3e) goto LAB_00079397;
    }
    if (*str_ptr != '=') goto LAB_00079397;
  }
LAB_00079327:
  *str_ptr_2 = *str_ptr;
  *arg_eax = *arg_eax + 1;
  str_ptr_2 = arg_edx + 2;
LAB_00079397:
  if ((*(char *)*arg_eax == '\0') || (*(char *)*arg_eax == '\n')) {
    *arg_ebx = 1;
  }
  *str_ptr_2 = '\0';
  return val_2;
}

/******************************************************************************
 * Function : command_script_conditions_script_0793b7 (Original VA: 0x793b7, Ghidra: FUN_000793b7)
 * Prototype: void command_script_conditions_script_0793b7(void);
 * Address  : 0x793b7 (Size: 512 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 985
 * Purpose  : String '(script:%d) Too many conditions in script'
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_conditions_deep_script_0795b7, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_conditions_script_0793b7(void)

{
  undefined4 arg_eax;
  int val;
  int val_2;
  int val_3;
  undefined2 extraout_CX;
  undefined4 arg_ecx;
  undefined1 local_14;
  
  if (g_bss_002ec62e < 0x30) {
    val = get_script_command_id();
    if (val == -1) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__0016805e,g_data_00179c04,arg_eax);
    }
    else {
      val_2 = get_script_command_id();
      if (val_2 == -1) {
        val_2 = 7;
        val_3 = get_script_command_id();
        if (val_3 == -1) {
          val_2 = 0x1a;
          val_3 = get_script_command_id();
          if (val_3 == -1) {
            val_2 = 0x15;
            val_3 = get_script_command_id();
            if (val_3 == -1) {
              val_2 = 0x19;
              val_3 = get_script_command_id();
              if (val_3 == -1) {
                val_2 = 0x23;
                val_3 = get_script_command_id();
                if (val_3 == -1) {
                  dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_VARIABLE_____0016808e,
                               g_data_00179c04);
                  goto LAB_000793f7;
                }
              }
            }
          }
        }
      }
      val_3 = get_script_command_id();
      if (val_3 != -1) {
        (&g_bss_002ec3ee)[g_bss_002ec62e * 6] = g_data_00179c08;
        local_14 = (undefined1)val;
        (&g_bss_002ec3f1)[g_bss_002ec62e * 0xc] = local_14;
        (&g_bss_002ec3f2)[g_bss_002ec62e * 0xc] = (char)val_2;
        (&g_bss_002ec3f5)[g_bss_002ec62e * 0xc] = (char)val_3;
        *(undefined4 *)(&g_bss_002ec3f6 + g_bss_002ec62e * 0xc) = arg_ecx;
        *(undefined2 *)(&g_bss_002ec3f3 + g_bss_002ec62e * 0xc) = extraout_CX;
        command_script_conditions_deep_script_0795b7();
        g_bss_002ec62e = g_bss_002ec62e + 1;
        return;
      }
      dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_comparison____001680bd,g_data_00179c04);
    }
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_conditions_i_00168028,g_data_00179c04);
  }
LAB_000793f7:
  LbErrorLog(); /* LbErrorLog("command.cpp", line 985, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_conditions_deep_script_0795b7 (Original VA: 0x795b7, Ghidra: FUN_000795b7)
 * Prototype: void command_script_conditions_deep_script_0795b7(void);
 * Address  : 0x795b7 (Size: 120 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1051
 * Purpose  : String '(script:%d) Conditions too deep in script'
 * Callers  : 3 -> command_script_conditions_script_0793b7, command_script_conditions_script_07a58b, command_script_conditions_script_07b430
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_conditions_deep_script_0795b7(void)

{
  undefined2 arg_ax;
  uint uval;
  
  if (0x2f < g_bss_0037775c) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Conditions_too_deep_i_001680ee,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 1051, g_log_buf) */
    return;
  }
  if (-1 < g_data_00179c08) {
    uval = (uint)g_bss_0037775c;
    g_bss_0037775c = g_bss_0037775c + 1;
    *(short *)(&g_bss_003776fc + uval * 2) = g_data_00179c08;
  }
  g_data_00179c08 = arg_ax;
  return;
}

/******************************************************************************
 * Function : command_script_unexpected_endif_07962f (Original VA: 0x7962f, Ghidra: FUN_0007962f)
 * Prototype: undefined8 command_script_unexpected_endif_07962f(void);
 * Address  : 0x7962f (Size: 119 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1066
 * Purpose  : String '(script: %d) unexpected ENDIF'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 command_script_unexpected_endif_07962f(void)

{
  undefined4 arg_edx;
  
  if (g_data_00179c08 == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script___d__unexpected_ENDIF_00168124,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 1066, g_log_buf) */
  }
  else {
    if (g_bss_0037775c != 0) {
      g_bss_0037775c = g_bss_0037775c - 1;
      g_data_00179c08 = *(short *)(&g_bss_003776fc + (uint)g_bss_0037775c * 2);
      return CONCAT44(arg_edx,(int)*(short *)(&g_bss_003776fc + (uint)g_bss_0037775c * 2));
    }
    g_data_00179c08 = -1;
  }
  return CONCAT44(arg_edx,0xffffffff);
}

/******************************************************************************
 * Function : command_script_partys_script_0796a6 (Original VA: 0x796a6, Ghidra: FUN_000796a6)
 * Prototype: void command_script_partys_script_0796a6(void);
 * Address  : 0x796a6 (Size: 92 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1082
 * Purpose  : String '(script:%d) Too many partys in script'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbErrorLog, dk_sprintf, LbMemoryCopy
 ******************************************************************************/
void command_script_partys_script_0796a6(void)

{
  if (0xf < g_bss_002ed332) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_partys_in_s_0016814e,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 1082, g_log_buf) */
    return;
  }
  LbMemoryCopy();
  g_bss_002ed332 = g_bss_002ed332 + 1;
  return;
}

/******************************************************************************
 * Function : command_script_creature_level_parameter_079702 (Original VA: 0x79702, Ghidra: FUN_00079702)
 * Prototype: void command_script_creature_level_parameter_079702(undefined4 param_1,undefined4 param_2);
 * Address  : 0x79702 (Size: 481 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1134
 * Purpose  : String '(script:%d) Invalid CREATURE LEVEL parameter - Range: (1 - 1'
 * Callers  : 0 -> 
 * Callees  : 4 -> get_script_command_id, LbErrorLog, dk_sprintf, dk_stricmp
 ******************************************************************************/
void command_script_creature_level_parameter_079702(undefined4 param_1,undefined4 param_2)

{
  int val;
  undefined1 extraout_CL;
  undefined2 arg_cx;
  int val_2;
  int extraout_ECX;
  int arg_ebx;
  int val_3;
  undefined *word_ptr;
  
  if ((arg_ebx < 1) || (10 < arg_ebx)) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_CREATURE_LEV_00168180,g_data_00179c04);
  }
  else {
    word_ptr = &g_bss_002ec632;
    val_2 = 0;
    while (val_2 < g_bss_002ed332) {
      val_3 = val_2 * 0xd0;
      val = dk_stricmp(word_ptr);
      if (val == 0) {
        if ((int)(&g_bss_002ec6fe)[val_2 * 0x34] < 8) {
          val = get_script_command_id();
          if (val == -1) {
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_creature_nam_00168216,g_data_00179c04);
          }
          else {
            val = get_script_command_id();
            if (val != -1) {
              (&g_bss_002ec696)[(&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3] =
                   (&g_bss_002ec696)[(&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3] & 0xfd;
              (&g_bss_002ec698)[(&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3] = extraout_CL;
              *(undefined2 *)(&g_bss_002ec69f + (&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3) = arg_cx;
              (&g_bss_002ec69e)[(&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3] = (char)arg_ebx + -1;
              *(undefined2 *)(&g_bss_002ec6a1 + (&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3) = 1;
              (&g_bss_002ec699)[(&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3] = (char)val;
              *(undefined4 *)(&g_bss_002ec69a + (&g_bss_002ec6fe)[val_2 * 0x34] * 0xd + val_3) = param_2
              ;
              (&g_bss_002ec6fe)[val_2 * 0x34] = (&g_bss_002ec6fe)[val_2 * 0x34] + 1;
              return;
            }
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_objective_na_0016824a,g_data_00179c04,
                         param_1);
          }
        }
        else {
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_creatures_i_001681cb,g_data_00179c04);
        }
        goto LAB_000798d8;
      }
      word_ptr = word_ptr + 0xd0;
      val_2 = extraout_ECX + 1;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_party_name____0016827f,g_data_00179c04);
  }
LAB_000798d8:
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1134, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_number_parameter_0798e3 (Original VA: 0x798e3, Ghidra: FUN_000798e3)
 * Prototype: void command_script_number_parameter_0798e3(void);
 * Address  : 0x798e3 (Size: 645 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1231
 * Purpose  : String '(script:%d) Invalid NUMBER parameter'
 * Callers  : 0 -> 
 * Callees  : 6 -> script_party_big_0688a4, get_script_command_id, LbErrorLog, dk_sprintf, dk_atoi, dk_stricmp
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_number_parameter_0798e3(void)

{
  int val;
  int val_2;
  int val_3;
  undefined2 extraout_CX;
  int arg_ecx;
  byte flag;
  undefined4 arg_edx;
  int loop_i;
  undefined1 local_10;
  
  if (arg_ecx == 0) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_NUMBER_param_001682b0,g_data_00179c04);
  }
  else if (g_bss_002ebfe6 < 0x30) {
    val = get_script_command_id();
    if (val == -1) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__00168316,g_data_00179c04);
    }
    else {
      val_2 = get_script_command_id();
      if (val_2 == -1) {
        val_2 = dk_atoi();
        if (val_2 < 1) {
          if ((*(byte *)(&g_thing_ptrs)[-val_2] & 1) == 0) {
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Hero_Door____001683a8,g_data_00179c04);
            goto LAB_00079b5f;
          }
          val_2 = val_2 + -1000;
        }
        else {
          if (0x1f < val_2) {
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_where_id_____00168346,g_data_00179c04);
            goto LAB_00079b5f;
          }
          if (((&g_bss_002eb401)[val_2 * 10] & 1) == 0) {
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Action_Point_00168375,g_data_00179c04);
            goto LAB_00079b5f;
          }
          val_2 = -val_2;
        }
      }
      for (loop_i = 0; loop_i < g_bss_002ed332; loop_i = loop_i + 1) {
        val_3 = dk_stricmp();
        if (val_3 == 0) {
          if (g_data_00179c08 == -1) {
            script_party_big_0688a4();
            return;
          }
          val_3 = g_bss_002ebfe6 * 0xd;
          flag = g_bss_0037775e & 1;
          (&g_bss_002ebd76)[val_3] = (&g_bss_002ebd76)[val_3] & 0xfe;
          (&g_bss_002ebd76)[val_3] = (&g_bss_002ebd76)[val_3] | flag;
          (&g_bss_002ebd76)[g_bss_002ebfe6 * 0xd] = (&g_bss_002ebd76)[g_bss_002ebfe6 * 0xd] & 0xfd;
          local_10 = (undefined1)val;
          (&g_bss_002ebd79)[g_bss_002ebfe6 * 0xd] = local_10;
          (&g_bss_002ebd78)[g_bss_002ebfe6 * 0xd] = -(char)loop_i;
          *(int *)((int)&g_bss_002ebd7a + g_bss_002ebfe6 * 0xd) = val_2;
          *(undefined2 *)((int)&g_bss_002ebd81 + g_bss_002ebfe6 * 0xd) = extraout_CX;
          (&g_bss_002ebd77)[g_bss_002ebfe6 * 0xd] = g_data_00179c08;
          g_bss_002ebfe6 = g_bss_002ebfe6 + 1;
          return;
        }
      }
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_party___s__001683d8,g_data_00179c04,arg_edx);
    }
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_creatures_i_001682e1,g_data_00179c04);
  }
LAB_00079b5f:
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1231, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_creature_level_parameter_079b68 (Original VA: 0x79b68, Ghidra: FUN_00079b68)
 * Prototype: void command_script_creature_level_parameter_079b68(int param_1,undefined4 param_2);
 * Address  : 0x79b68 (Size: 716 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1241
 * Purpose  : String '(script:%d) Invalid CREATURE LEVEL parameter'
 * Callers  : 0 -> 
 * Callees  : 5 -> script_fn_068873, get_script_command_id, LbErrorLog, dk_sprintf, dk_atoi
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_creature_level_parameter_079b68(int param_1,undefined4 param_2)

{
  int val;
  int val_2;
  int val_3;
  int val_4;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined2 uval;
  int arg_ecx;
  byte flag;
  undefined1 local_14;
  undefined1 local_10;
  
  if ((param_1 < 1) || (10 < param_1)) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_CREATURE_LEV_00168403,g_data_00179c04);
  }
  else if (arg_ecx == 0) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_number_of_cr_0016843c,g_data_00179c04);
  }
  else if (g_bss_002ebfe6 < 0x30) {
    val = get_script_command_id();
    if (val == -1) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__001684ac,g_data_00179c04);
    }
    else {
      val_2 = get_script_command_id();
      if (val_2 == -1) {
        dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_creature_____001684de,g_data_00179c04);
      }
      else {
        val_3 = get_script_command_id();
        uval = extraout_CX;
        if (val_3 != -1) {
LAB_00079d66:
          if (g_data_00179c08 == -1) {
            script_fn_068873(param_2,param_1 + -1);
            return;
          }
          val_4 = g_bss_002ebfe6 * 0xd;
          flag = g_bss_0037775e & 1;
          (&g_bss_002ebd76)[val_4] = (&g_bss_002ebd76)[val_4] & 0xfe;
          (&g_bss_002ebd76)[val_4] = (&g_bss_002ebd76)[val_4] | flag;
          (&g_bss_002ebd76)[g_bss_002ebfe6 * 0xd] = (&g_bss_002ebd76)[g_bss_002ebfe6 * 0xd] & 0xfd;
          local_10 = (undefined1)val;
          (&g_bss_002ebd79)[g_bss_002ebfe6 * 0xd] = local_10;
          local_14 = (undefined1)val_2;
          (&g_bss_002ebd78)[g_bss_002ebfe6 * 0xd] = local_14;
          *(int *)((int)&g_bss_002ebd7a + g_bss_002ebfe6 * 0xd) = val_3;
          (&g_bss_002ebd7e)[g_bss_002ebfe6 * 0xd] = (char)param_1 + -1;
          *(short *)((int)&g_bss_002ebd7f + g_bss_002ebfe6 * 0xd) = (short)param_2;
          *(undefined2 *)((int)&g_bss_002ebd81 + g_bss_002ebfe6 * 0xd) = uval;
          (&g_bss_002ebd77)[g_bss_002ebfe6 * 0xd] = g_data_00179c08;
          g_bss_002ebfe6 = g_bss_002ebfe6 + 1;
          return;
        }
        val_3 = dk_atoi();
        uval = extraout_CX_00;
        if (val_3 < 1) {
          if ((*(byte *)(&g_thing_ptrs)[-val_3] & 1) != 0) {
            val_3 = val_3 + -1000;
            goto LAB_00079d66;
          }
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Hero_Door____0016856f,g_data_00179c04);
        }
        else if (val_3 < 0x20) {
          if (((&g_bss_002eb401)[val_3 * 10] & 1) != 0) {
            val_3 = -val_3;
            goto LAB_00079d66;
          }
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Action_Point_0016853c,g_data_00179c04);
        }
        else {
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_where_id_____0016850d,g_data_00179c04);
        }
      }
    }
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_creatures_i_00168477,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1241, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_name_079e34 (Original VA: 0x79e34, Ghidra: FUN_00079e34)
 * Prototype: void command_script_player_name_079e34(void);
 * Address  : 0x79e34 (Size: 125 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1369
 * Purpose  : String '(script:%d) invalid player name, '%s''
 * Callers  : 0 -> 
 * Callees  : 3 -> get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_name_079e34(void)

{
  int val;
  int val_2;
  undefined4 extraout_ECX;
  int arg_edx;
  
  val = get_script_command_id();
  if (val != -1) {
    if (val == 8) {
      val = 0;
      do {
        val_2 = val + 0x1508;
        *(int *)((int)&g_bss_002e1086 + val) = *(int *)((int)&g_bss_002e1086 + val) + arg_edx;
        *(int *)((int)&g_bss_002e1082 + val) = *(int *)((int)&g_bss_002e1082 + val) + arg_edx;
        val = val_2;
      } while (val_2 != 0x6928);
    }
    else {
      (&g_bss_002e1086)[val * 0x542] = (&g_bss_002e1086)[val * 0x542] + arg_edx;
      (&g_bss_002e1082)[val * 0x542] = (&g_bss_002e1082)[val * 0x542] + arg_edx;
    }
    return;
  }
  dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__0016859f,g_data_00179c04,extraout_ECX);
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1369, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_values_script_079eb1 (Original VA: 0x79eb1, Ghidra: FUN_00079eb1)
 * Prototype: void command_script_values_script_079eb1(undefined4 param_1);
 * Address  : 0x79eb1 (Size: 239 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1392
 * Purpose  : String '(script:%d) Too many VALUEs in script'
 * Callers  : 19 -> command_script_player_079fa0, command_script_player_07a040, command_script_player_07a0e0, command_script_player_07a180, command_script_player_07a220, command_script_player_name_07a2ec, command_script_player_07a6b8, command_script_player_07aae5 ...
 * Callees  : 3 -> script_fn_068340, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_values_script_079eb1(undefined4 param_1)

{
  undefined1 arg_al;
  int val;
  undefined4 arg_ecx;
  undefined1 arg_dl;
  ushort uval;
  undefined4 arg_ebx;
  
  if (0x3f < g_bss_002ec3ea) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_VALUEs_in_s_001685d1,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 1392, g_log_buf) */
    return;
  }
  if (g_data_00179c08 == -1) {
    script_fn_068340(param_1);
    return;
  }
  val = g_bss_002ec3ea * 0x10;
  uval = CONCAT11(g_bss_0037775e,arg_dl) & 0x1ff;
  (&g_bss_002ebfea)[val] = (&g_bss_002ebfea)[val] & 0xfe;
  (&g_bss_002ebfea)[val] = (&g_bss_002ebfea)[val] | (byte)(uval >> 8);
  (&g_bss_002ebfea)[g_bss_002ec3ea * 0x10] = (&g_bss_002ebfea)[g_bss_002ec3ea * 0x10] & 0xfd;
  (&g_bss_002ebfec)[g_bss_002ec3ea * 0x10] = arg_al;
  (&g_bss_002ebfed)[g_bss_002ec3ea * 0x10] = (char)uval;
  (&g_bss_002ebfee)[g_bss_002ec3ea * 4] = arg_ebx;
  (&g_bss_002ebff2)[g_bss_002ec3ea * 4] = arg_ecx;
  (&g_bss_002ebff6)[g_bss_002ec3ea * 4] = param_1;
  (&g_bss_002ebfeb)[g_bss_002ec3ea * 0x10] = g_data_00179c08;
  g_bss_002ec3ea = g_bss_002ec3ea + 1;
  return;
}

/******************************************************************************
 * Function : command_script_player_079fa0 (Original VA: 0x79fa0, Ghidra: FUN_00079fa0)
 * Prototype: void command_script_player_079fa0(void);
 * Address  : 0x79fa0 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1422
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_079fa0(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168603,g_data_00179c04);
  }
  else {
    val = get_script_command_id(val);
    if (val != -1) {
      command_script_values_script_079eb1(extraout_ECX);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_room____s__00168630,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1422, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07a040 (Original VA: 0x7a040, Ghidra: FUN_0007a040)
 * Prototype: void command_script_player_07a040(void);
 * Address  : 0x7a040 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1445
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07a040(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__0016865b,g_data_00179c04);
  }
  else {
    val = get_script_command_id(val);
    if (val != -1) {
      command_script_values_script_079eb1(extraout_ECX);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_creature_____00168688,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1445, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07a0e0 (Original VA: 0x7a0e0, Ghidra: FUN_0007a0e0)
 * Prototype: void command_script_player_07a0e0(void);
 * Address  : 0x7a0e0 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1468
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07a0e0(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__001686b7,g_data_00179c04);
  }
  else {
    val = get_script_command_id(val);
    if (val != -1) {
      command_script_values_script_079eb1(extraout_ECX);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_magic____s__001686e4,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1468, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07a180 (Original VA: 0x7a180, Ghidra: FUN_0007a180)
 * Prototype: void command_script_player_07a180(void);
 * Address  : 0x7a180 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1491
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07a180(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168710,g_data_00179c04);
  }
  else {
    val = get_script_command_id(val);
    if (val != -1) {
      command_script_values_script_079eb1(extraout_ECX);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_trap____s__0016873d,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1491, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07a220 (Original VA: 0x7a220, Ghidra: FUN_0007a220)
 * Prototype: void command_script_player_07a220(void);
 * Address  : 0x7a220 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1514
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07a220(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168768,g_data_00179c04);
  }
  else {
    val = get_script_command_id(val);
    if (val != -1) {
      command_script_values_script_079eb1(extraout_ECX);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_door____s__00168795,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1514, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : get_script_command_id (Original VA: 0x7a2c0, Ghidra: FUN_0007a2c0)
 * Prototype: uint get_script_command_id(void);
 * Address  : 0x7a2c0 (Size: 44 bytes)
 * Module   : command.cpp [contiguous_same_unit_span]
 * Purpose  : Case-insensitive lookup of script token in CommandDesc table
 * Callers  : 31 -> command_script_conditions_script_0793b7, command_script_creature_level_parameter_079702, command_script_number_parameter_0798e3, command_script_creature_level_parameter_079b68, command_script_player_name_079e34, command_script_player_079fa0, command_script_player_07a040, command_script_player_07a0e0 ...
 * Callees  : 1 -> dk_stricmp
 ******************************************************************************/
uint get_script_command_id(void)

{
  int *arg_eax;
  int val;
  
  while( true ) {
    if (*arg_eax == 0) {
      return 0xffffffff;
    }
    val = dk_stricmp();
    if (val == 0) break;
    arg_eax = (int *)((int)arg_eax + 5);
  }
  return (uint)*(byte *)(arg_eax + 1);
}

/******************************************************************************
 * Function : command_script_player_name_07a2ec (Original VA: 0x7a2ec, Ghidra: FUN_0007a2ec)
 * Prototype: void command_script_player_name_07a2ec(void);
 * Address  : 0x7a2ec (Size: 585 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1548
 * Purpose  : String '(script:%d) invalid player name, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_name_07a2ec(void)

{
  int loop_i;
  uint uval;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uval_2;
  int val;
  
  loop_i = get_script_command_id();
  if (loop_i == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__001687c0,g_data_00179c04);
  }
  else {
    if (loop_i == 8) {
      val = 0;
      for (loop_i = 0; loop_i < 0x6928; loop_i = loop_i + 0x1508) {
        if (0x21 < (byte)(&g_bss_002e1505)[loop_i]) {
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_RESEARCH_IT_001687f2,g_data_00179c04,val)
          ;
          goto LAB_0007a332;
        }
        val = val + 1;
      }
    }
    else if (0x21 < (byte)(&g_bss_002e1505)[loop_i * 0x1508]) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_RESEARCH_IT_00168834,g_data_00179c04);
      goto LAB_0007a332;
    }
    uval = get_script_command_id();
    if (uval == 0xffffffff) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_research_typ_00168876,g_data_00179c04);
    }
    else {
      if (uval < 2) {
        if (uval == 1) {
          loop_i = get_script_command_id(1);
          uval_2 = extraout_ECX;
          if (loop_i != -1) goto LAB_0007a51e;
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_magic____s__001688aa,g_data_00179c04);
          goto LAB_0007a332;
        }
      }
      else {
        if (uval < 3) {
          loop_i = get_script_command_id(uval);
          uval_2 = extraout_ECX_00;
          if (loop_i != -1) {
LAB_0007a51e:
            command_script_values_script_079eb1(uval_2);
            return;
          }
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_room____s__001688d6,g_data_00179c04);
          goto LAB_0007a332;
        }
        if (uval == 3) {
          loop_i = get_script_command_id(3);
          uval_2 = extraout_ECX_01;
          if (loop_i != -1) goto LAB_0007a51e;
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_creature_____00168901,g_data_00179c04);
          goto LAB_0007a332;
        }
      }
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unhandled_type_id_ca_00168930,g_data_00179c04);
    }
  }
LAB_0007a332:
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1548, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07a535 (Original VA: 0x7a535, Ghidra: FUN_0007a535)
 * Prototype: void command_script_player_07a535(void);
 * Address  : 0x7a535 (Size: 86 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1632
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> scrsupp_update_player_view_state_069a12, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07a535(void)

{
  int val;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__0016895f,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 1632, g_log_buf) */
    return;
  }
  scrsupp_update_player_view_state_069a12();
  return;
}

/******************************************************************************
 * Function : command_script_conditions_script_07a58b (Original VA: 0x7a58b, Ghidra: FUN_0007a58b)
 * Prototype: void command_script_conditions_script_07a58b(void);
 * Address  : 0x7a58b (Size: 301 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1670
 * Purpose  : String '(script:%d) Too many conditions in script'
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_conditions_deep_script_0795b7, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_conditions_script_07a58b(void)

{
  int arg_eax;
  int val;
  undefined4 extraout_ECX;
  
  if (g_bss_002ec62e < 0x30) {
    if (((arg_eax < 1) || (0x20 < arg_eax)) || (((&g_bss_002eb401)[arg_eax * 10] & 1) == 0)) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Action_Point_001689c2,g_data_00179c04);
    }
    else {
      val = get_script_command_id();
      if (val != -1) {
        (&g_bss_002ec3ee)[g_bss_002ec62e * 6] = g_data_00179c08;
        (&g_bss_002ec3f1)[g_bss_002ec62e * 0xc] = (char)val;
        (&g_bss_002ec3f2)[g_bss_002ec62e * 0xc] = 0x13;
        (&g_bss_002ec3f5)[g_bss_002ec62e * 0xc] = 0;
        *(undefined4 *)(&g_bss_002ec3f6 + g_bss_002ec62e * 0xc) = 0;
        *(short *)(&g_bss_002ec3f3 + g_bss_002ec62e * 0xc) = (short)arg_eax;
        command_script_conditions_deep_script_0795b7();
        g_bss_002ec62e = g_bss_002ec62e + 1;
        return;
      }
      dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__001689f5,g_data_00179c04,
                   extraout_ECX);
    }
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_conditions_i_0016898c,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1670, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07a6b8 (Original VA: 0x7a6b8, Ghidra: FUN_0007a6b8)
 * Prototype: void command_script_player_07a6b8(void);
 * Address  : 0x7a6b8 (Size: 156 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1705
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07a6b8(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168a25,g_data_00179c04,extraout_ECX
                );
  }
  else {
    val = get_script_command_id();
    if (val != -1) {
      command_script_values_script_079eb1(0);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_timer____s__00168a52,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1705, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_tunnellers_script_07a754 (Original VA: 0x7a754, Ghidra: FUN_0007a754)
 * Prototype: void command_script_tunnellers_script_07a754(byte param_1,undefined4 param_2);
 * Address  : 0x7a754 (Size: 681 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1724
 * Purpose  : String '(script:%d) Too many tunnellers in script'
 * Callers  : 0 -> 
 * Callees  : 5 -> script_process_thing_entity_0689a7, get_script_command_id, LbErrorLog, dk_sprintf, dk_atoi
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_tunnellers_script_07a754(byte param_1,undefined4 param_2)

{
  undefined4 arg_eax;
  int val;
  int val_2;
  int val_3;
  int val_4;
  undefined4 extraout_ECX;
  ushort uval;
  undefined1 local_10;
  
  if (g_bss_002ebd72 < 0x10) {
    val = get_script_command_id();
    if (val == -1) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168ab4,g_data_00179c04,arg_eax);
    }
    else {
      val_2 = get_script_command_id();
      if (val_2 == -1) {
        val_2 = dk_atoi();
        if (val_2 < 1) {
          if ((*(byte *)(&g_thing_ptrs)[-val_2] & 1) == 0) {
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Hero_Door____00168b43,g_data_00179c04);
            goto LAB_0007a78d;
          }
          val_2 = val_2 + -1000;
        }
        else {
          if (0x1f < val_2) {
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_where_id_____00168ae1,g_data_00179c04);
            goto LAB_0007a78d;
          }
          if (((&g_bss_002eb401)[val_2 * 10] & 1) == 0) {
            dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Action_Point_00168b10,g_data_00179c04);
            goto LAB_0007a78d;
          }
          val_2 = -val_2;
        }
      }
      val_3 = get_script_command_id();
      if (val_3 == -1) {
        dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_head_for_____00168b73,g_data_00179c04);
      }
      else {
        if ((param_1 != 0) && (param_1 < 0xb)) {
          if (g_data_00179c08 == -1) {
            script_process_thing_entity_0689a7(param_1 - 1,param_2);
            return;
          }
          val_4 = g_bss_002ebd72 * 0x12;
          uval = CONCAT11(g_bss_0037775e,(char)val_3) & 0x1ff;
          (&g_bss_002ebc52)[val_4] = (&g_bss_002ebc52)[val_4] & 0xfe;
          (&g_bss_002ebc52)[val_4] = (&g_bss_002ebc52)[val_4] | (byte)(uval >> 8);
          (&g_bss_002ebc52)[g_bss_002ebd72 * 0x12] = (&g_bss_002ebc52)[g_bss_002ebd72 * 0x12] & 0xfd;
          (&g_bss_002ebc53)[g_bss_002ebd72 * 0x12] = g_data_00179c08;
          local_10 = (undefined1)val;
          (&g_bss_002ebc54)[g_bss_002ebd72 * 0x12] = local_10;
          *(int *)((int)&g_bss_002ebc55 + g_bss_002ebd72 * 0x12) = val_2;
          (&g_bss_002ebc59)[g_bss_002ebd72 * 0x12] = (char)uval;
          *(undefined4 *)((int)&g_bss_002ebc5a + g_bss_002ebd72 * 0x12) = extraout_ECX;
          (&g_bss_002ebc62)[g_bss_002ebd72 * 0x12] = param_1 - 1;
          *(undefined4 *)((int)&g_bss_002ebc5e + g_bss_002ebd72 * 0x12) = param_2;
          (&g_bss_002ebc63)[g_bss_002ebd72 * 0x12] = 0;
          g_bss_002ebd72 = g_bss_002ebd72 + 1;
          return;
        }
        dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_CREATURE_LEV_00168ba2,g_data_00179c04);
      }
    }
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_tunnellers_i_00168a7e,g_data_00179c04);
  }
LAB_0007a78d:
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1724, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_condition_win_game_07a9fd (Original VA: 0x7a9fd, Ghidra: FUN_0007a9fd)
 * Prototype: void command_script_condition_win_game_07a9fd(void);
 * Address  : 0x7a9fd (Size: 116 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1818
 * Purpose  : String '(script:%d) No condition for WIN GAME'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_condition_win_game_07a9fd(void)

{
  if (g_data_00179c08 == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__No_condition_for_WIN_00168bdb,g_data_00179c04);
  }
  else if (g_bss_002ed33e < 4) {
    (&g_bss_002ed336)[g_bss_002ed33e] = g_data_00179c08;
    g_bss_002ed33e = g_bss_002ed33e + 1;
    return;
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1818, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_condition_lose_game_07aa71 (Original VA: 0x7aa71, Ghidra: FUN_0007aa71)
 * Prototype: void command_script_condition_lose_game_07aa71(void);
 * Address  : 0x7aa71 (Size: 116 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1835
 * Purpose  : String '(script:%d) No condition for LOSE GAME'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_condition_lose_game_07aa71(void)

{
  if (g_data_00179c08 == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__No_condition_for_LOS_00168c3b,g_data_00179c04);
  }
  else if (g_bss_002ed34a < 4) {
    (&g_bss_002ed342)[g_bss_002ed34a] = g_data_00179c08;
    g_bss_002ed34a = g_bss_002ed34a + 1;
    return;
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1835, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07aae5 (Original VA: 0x7aae5, Ghidra: FUN_0007aae5)
 * Prototype: void command_script_player_07aae5(void);
 * Address  : 0x7aae5 (Size: 156 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1936
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07aae5(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168c9d,g_data_00179c04,extraout_ECX
                );
  }
  else {
    val = get_script_command_id();
    if (val != -1) {
      command_script_values_script_079eb1(0);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_flag____s__00168cca,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 1936, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07ab81 (Original VA: 0x7ab81, Ghidra: FUN_0007ab81)
 * Prototype: void command_script_player_07ab81(void);
 * Address  : 0x7ab81 (Size: 95 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 1955
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07ab81(void)

{
  int val;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168cf5,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 1955, g_log_buf) */
    return;
  }
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_script_text_number_07abe0 (Original VA: 0x7abe0, Ghidra: FUN_0007abe0)
 * Prototype: void command_script_text_number_07abe0(void);
 * Address  : 0x7abe0 (Size: 329 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2043
 * Purpose  : String '(script:%d) Invalid TEXT number'
 * Callers  : 0 -> 
 * Callees  : 5 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf, dk_atoi
 ******************************************************************************/
void command_script_text_number_07abe0(void)

{
  int arg_eax;
  int val;
  uint arg_ecx;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int arg_edx;
  uint arg_ebx;
  
  if (arg_eax < 0) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_TEXT_number_00168d22,g_data_00179c04);
  }
  else {
    if (((arg_edx == 0) || (val = get_script_command_id(), arg_ecx = extraout_ECX, val != -1)) ||
       (val = dk_atoi(), arg_ecx = extraout_ECX_00, val == 0)) {
LAB_0007ad03:
      command_script_values_script_079eb1(arg_ebx & 0xff | (arg_ecx & 0xff) << 8);
      return;
    }
    if (val < 1) {
      if ((*(byte *)(&g_thing_ptrs)[-val] & 1) != 0) goto LAB_0007ad03;
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Hero_Door____00168db0,g_data_00179c04);
    }
    else if (val < 0x20) {
      if (((&g_bss_002eb401)[val * 10] & 1) != 0) goto LAB_0007ad03;
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Action_Point_00168d7d,g_data_00179c04);
    }
    else {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_where_id_____00168d4e,g_data_00179c04);
    }
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2043, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_information_number_07ad29 (Original VA: 0x7ad29, Ghidra: FUN_0007ad29)
 * Prototype: void command_script_information_number_07ad29(void);
 * Address  : 0x7ad29 (Size: 70 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2186
 * Purpose  : String '(script:%d) Invalid INFORMATION number'
 * Callers  : 0 -> 
 * Callees  : 3 -> command_script_values_script_079eb1, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_information_number_07ad29(void)

{
  int arg_eax;
  
  if (arg_eax < 0) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_INFORMATION_n_00168de0,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 2186, g_log_buf) */
    return;
  }
  command_script_values_script_079eb1();
  return;
}

/******************************************************************************
 * Function : command_script_tunnellers_script_07ad6f (Original VA: 0x7ad6f, Ghidra: FUN_0007ad6f)
 * Prototype: void command_script_tunnellers_script_07ad6f(undefined4 param_1,byte param_2,undefined4 param_3);
 * Address  : 0x7ad6f (Size: 851 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2209, 2229
 * Purpose  : String '(script:%d) Too many tunnellers in script'
 * Callers  : 0 -> 
 * Callees  : 6 -> script_process_thing_entity_068ad7, get_script_command_id, LbErrorLog, dk_sprintf, dk_atoi, dk_stricmp
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_tunnellers_script_07ad6f(undefined4 param_1,byte param_2,undefined4 param_3)

{
  int val;
  int val_2;
  int val_3;
  undefined4 extraout_ECX;
  ushort uval;
  undefined4 arg_edx;
  int val_4;
  undefined1 local_14;
  int local_10;
  
  if (g_bss_002ebd72 < 0x10) {
    val = get_script_command_id();
    if (val == -1) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__00168e49,g_data_00179c04);
    }
    else {
      local_10 = -1;
      val_4 = 0;
      while ((val_3 = local_10, val_4 < g_bss_002ed332 &&
             (val_2 = dk_stricmp(), val_3 = val_4, val_2 != 0))) {
        val_4 = val_4 + 1;
      }
      local_10 = val_3;
      if (local_10 == -1) {
        dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_party_name____00168e76,g_data_00179c04,arg_edx)
        ;
        LbErrorLog(); /* LbErrorLog("command.cpp", line 2209, g_log_buf) */
      }
      if ((int)(&g_bss_002ec6fe)[local_10 * 0x34] < 7) {
        val_4 = get_script_command_id();
        if (val_4 == -1) {
          val_4 = dk_atoi();
          if (val_4 < 1) {
            if ((*(byte *)(&g_thing_ptrs)[-val_4] & 1) == 0) {
              dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Hero_Door____00168f34,g_data_00179c04);
              goto LAB_0007adac;
            }
            val_4 = val_4 + -1000;
          }
          else {
            if (0x1f < val_4) {
              dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_where_id_____00168ed2,g_data_00179c04);
              goto LAB_0007adac;
            }
            if (((&g_bss_002eb401)[val_4 * 10] & 1) == 0) {
              dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Action_Point_00168f01,g_data_00179c04);
              goto LAB_0007adac;
            }
            val_4 = -val_4;
          }
        }
        val_3 = get_script_command_id();
        if (val_3 == -1) {
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_head_for_____00168f64,g_data_00179c04,
                       extraout_ECX);
        }
        else {
          if ((param_2 != 0) && (param_2 < 0xb)) {
            if (g_data_00179c08 == -1) {
              script_process_thing_entity_068ad7(param_1,param_2 - 1,param_3);
              return;
            }
            val_2 = g_bss_002ebd72 * 0x12;
            uval = CONCAT11(g_bss_0037775e,(char)val_3) & 0x1ff;
            (&g_bss_002ebc52)[val_2] = (&g_bss_002ebc52)[val_2] & 0xfe;
            (&g_bss_002ebc52)[val_2] = (&g_bss_002ebc52)[val_2] | (byte)(uval >> 8);
            (&g_bss_002ebc52)[g_bss_002ebd72 * 0x12] = (&g_bss_002ebc52)[g_bss_002ebd72 * 0x12] & 0xfd;
            (&g_bss_002ebc53)[g_bss_002ebd72 * 0x12] = g_data_00179c08;
            local_14 = (undefined1)val;
            (&g_bss_002ebc54)[g_bss_002ebd72 * 0x12] = local_14;
            *(int *)((int)&g_bss_002ebc55 + g_bss_002ebd72 * 0x12) = val_4;
            (&g_bss_002ebc59)[g_bss_002ebd72 * 0x12] = (char)uval;
            *(undefined4 *)((int)&g_bss_002ebc5a + g_bss_002ebd72 * 0x12) = param_1;
            (&g_bss_002ebc62)[g_bss_002ebd72 * 0x12] = param_2 - 1;
            *(undefined4 *)((int)&g_bss_002ebc5e + g_bss_002ebd72 * 0x12) = param_3;
            (&g_bss_002ebc63)[g_bss_002ebd72 * 0x12] = (char)local_10 + '\x01';
            g_bss_002ebd72 = g_bss_002ebd72 + 1;
            return;
          }
          dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_CREATURE_LEV_00168f93,g_data_00179c04);
        }
      }
      else {
        dk_sprintf(&g_log_sprintf_buf,s_Party_too_big__Max__d_members__00168ea7,7);
      }
    }
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_tunnellers_i_00168e13,g_data_00179c04);
  }
LAB_0007adac:
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2229, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_creature_07b0c2 (Original VA: 0x7b0c2, Ghidra: FUN_0007b0c2)
 * Prototype: void command_script_creature_07b0c2(void);
 * Address  : 0x7b0c2 (Size: 145 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2312
 * Purpose  : String '(script:%d) Unknown creature, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_creature_07b0c2(void)

{
  int val;
  int extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_creature_____00168fcc,g_data_00179c04);
  }
  else {
    if ((-2 < extraout_ECX) && (extraout_ECX < 0x101)) {
      command_script_values_script_079eb1(0);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_number___d__o_00168ffb,g_data_00179c04,
                 extraout_ECX);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2312, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_action_point_07b153 (Original VA: 0x7b153, Ghidra: FUN_0007b153)
 * Prototype: void command_script_action_point_07b153(void);
 * Address  : 0x7b153 (Size: 138 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2329
 * Purpose  : String '(script:%d) Invalid Action Point, '%s''
 * Callers  : 0 -> 
 * Callees  : 3 -> command_script_values_script_079eb1, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_action_point_07b153(void)

{
  int arg_eax;
  
  if ((arg_eax < 1) || (0x20 < arg_eax)) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_Action_Point_00169043,g_data_00179c04);
  }
  else {
    if (((&g_bss_002eb401)[arg_eax * 10] & 1) != 0) {
      command_script_values_script_079eb1(0);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_Action_Point_00169076,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2329, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_07b1dd (Original VA: 0x7b1dd, Ghidra: FUN_0007b1dd)
 * Prototype: void command_script_player_07b1dd(void);
 * Address  : 0x7b1dd (Size: 209 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2355
 * Purpose  : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_07b1dd(void)

{
  int val;
  undefined4 extraout_ECX;
  int arg_ebx;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_player____s__001690a9,g_data_00179c04);
  }
  else {
    val = get_script_command_id();
    if (val == -1) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_creature_____001690d6,g_data_00179c04,
                   extraout_ECX);
    }
    else {
      if ((0 < arg_ebx) && (arg_ebx < 0xc)) {
        command_script_values_script_079eb1(0);
        return;
      }
      dk_sprintf(&g_log_sprintf_buf,s__script__d__Invalid_level____d__00169105,g_data_00179c04);
    }
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2355, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_fn_07b2ae (Original VA: 0x7b2ae, Ghidra: FUN_0007b2ae)
 * Prototype: void command_fn_07b2ae(void);
 * Address  : 0x7b2ae (Size: 20 bytes)
 * Module   : command.cpp [contiguous_same_unit_span]
 * Purpose  : Module command.cpp procedure @ 0x07b2ae
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void command_fn_07b2ae(void)

{
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_fn_07b2c2 (Original VA: 0x7b2c2, Ghidra: FUN_0007b2c2)
 * Prototype: void command_fn_07b2c2(void);
 * Address  : 0x7b2c2 (Size: 6 bytes)
 * Module   : command.cpp [contiguous_same_unit_span]
 * Purpose  : Module command.cpp procedure @ 0x07b2c2
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_fn_07b2c2(void)

{
  undefined4 arg_eax;
  
  g_bss_002ed781 = arg_eax;
  return;
}

/******************************************************************************
 * Function : command_script_creature_07b2c8 (Original VA: 0x7b2c8, Ghidra: FUN_0007b2c8)
 * Prototype: void command_script_creature_07b2c8(void);
 * Address  : 0x7b2c8 (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2507
 * Purpose  : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_creature_07b2c8(void)

{
  int val;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_CREATURE_____00169131,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 2507, g_log_buf) */
    return;
  }
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_script_creature_07b322 (Original VA: 0x7b322, Ghidra: FUN_0007b322)
 * Prototype: void command_script_creature_07b322(void);
 * Address  : 0x7b322 (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2519
 * Purpose  : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_creature_07b322(void)

{
  int val;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_CREATURE_____00169160,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 2519, g_log_buf) */
    return;
  }
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_script_creature_07b37c (Original VA: 0x7b37c, Ghidra: FUN_0007b37c)
 * Prototype: void command_script_creature_07b37c(void);
 * Address  : 0x7b37c (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2531
 * Purpose  : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_creature_07b37c(void)

{
  int val;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_CREATURE_____0016918f,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 2531, g_log_buf) */
    return;
  }
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_script_creature_07b3d6 (Original VA: 0x7b3d6, Ghidra: FUN_0007b3d6)
 * Prototype: void command_script_creature_07b3d6(void);
 * Address  : 0x7b3d6 (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2543
 * Purpose  : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_creature_07b3d6(void)

{
  int val;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Unknown_CREATURE_____001691be,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 2543, g_log_buf) */
    return;
  }
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_script_conditions_script_07b430 (Original VA: 0x7b430, Ghidra: FUN_0007b430)
 * Prototype: void command_script_conditions_script_07b430(void);
 * Address  : 0x7b430 (Size: 503 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2558
 * Purpose  : String '(script:%d) Too many conditions in script'
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_conditions_deep_script_0795b7, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void command_script_conditions_script_07b430(void)

{
  int val;
  int val_2;
  int val_3;
  undefined1 extraout_CL;
  undefined4 arg_ecx;
  undefined1 local_10;
  
  if (g_bss_002ec62e < 0x30) {
    val = get_script_command_id();
    if (val == -1) {
      dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__00169223,g_data_00179c04);
    }
    else {
      val_2 = get_script_command_id();
      if (val_2 == -1) {
        val_2 = get_script_command_id();
        if (val_2 == -1) {
          val_2 = get_script_command_id();
          if (val_2 == -1) {
            val_2 = get_script_command_id();
            if (val_2 == -1) {
              dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_VARIABLE_____00169253,g_data_00179c04);
              goto LAB_0007b46d;
            }
          }
        }
      }
      val_3 = get_script_command_id();
      if (val_3 == -1) {
        dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_comparison____00169282,g_data_00179c04);
      }
      else {
        if (val_3 == 1) {
          (&g_bss_002ec3ee)[g_bss_002ec62e * 6] = g_data_00179c08;
          local_10 = (undefined1)val;
          (&g_bss_002ec3f1)[g_bss_002ec62e * 0xc] = local_10;
          (&g_bss_002ec3f2)[g_bss_002ec62e * 0xc] = 0x42;
          (&g_bss_002ec3f5)[g_bss_002ec62e * 0xc] = extraout_CL;
          *(undefined4 *)(&g_bss_002ec3f6 + g_bss_002ec62e * 0xc) = arg_ecx;
          *(short *)(&g_bss_002ec3f3 + g_bss_002ec62e * 0xc) = (short)val_2;
          command_script_conditions_deep_script_0795b7();
          g_bss_002ec62e = g_bss_002ec62e + 1;
          return;
        }
        dk_sprintf(&g_log_sprintf_buf,s__script__d__only______can_be_use_001692b3,g_data_00179c04);
      }
    }
  }
  else {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__Too_many_conditions_i_001691ed,g_data_00179c04);
  }
LAB_0007b46d:
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2558, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_name_07b627 (Original VA: 0x7b627, Ghidra: FUN_0007b627)
 * Prototype: void command_script_player_name_07b627(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x7b627 (Size: 184 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2659
 * Purpose  : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 3 -> get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_name_07b627(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int val;
  undefined4 arg_ecx;
  int extraout_ECX;
  int val_2;
  undefined4 arg_edx;
  undefined4 arg_ebx;
  int local_10;
  
  local_10 = 0;
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__001692f2,g_data_00179c04);
    LbErrorLog(); /* LbErrorLog("command.cpp", line 2659, g_log_buf) */
  }
  else {
    val_2 = extraout_ECX;
    if (val != 8) {
      val_2 = val + 1;
      local_10 = val;
    }
    for (local_10 = local_10 * 0x14ca; local_10 < val_2 * 0x14ca; local_10 = local_10 + 0x14ca) {
      *(undefined4 *)(&g_bss_002ccbe7 + local_10) = arg_ebx;
      *(undefined4 *)(&g_bss_002ccbeb + local_10) = arg_ecx;
      *(undefined4 *)(&g_bss_002ccbef + local_10) = arg_edx;
      *(undefined4 *)(&g_bss_002ccbe7 + local_10) = arg_ebx;
      *(undefined4 *)(&g_bss_002ccc03 + local_10) = param_1;
      *(undefined4 *)(&g_bss_002ccbff + local_10) = param_2;
      *(undefined4 *)(&g_bss_002ccbf3 + local_10) = param_3;
    }
  }
  return;
}

/******************************************************************************
 * Function : command_script_player_name_07b6df (Original VA: 0x7b6df, Ghidra: FUN_0007b6df)
 * Prototype: void command_script_player_name_07b6df(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x7b6df (Size: 250 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * Purpose  : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 3 -> get_script_command_id, dk_sprintf, bflib_system_io_fn_0f09e5
 ******************************************************************************/
void command_script_player_name_07b6df(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int val;
  int val_2;
  undefined4 arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_ebx;
  undefined *loop_i;
  undefined *word_ptr;
  int local_14;
  int local_10;
  
  local_14 = 5;
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__00169322,g_data_00179c04);
  }
  else {
    local_10 = 0;
    if (val != 8) {
      local_14 = val + 1;
      local_10 = val;
    }
    word_ptr = &g_bss_002ccbd3 + local_10 * 0x14ca;
    val = extraout_ECX;
    for (; local_10 < local_14; local_10 = local_10 + 1) {
      for (loop_i = word_ptr + 0x620; (loop_i[4] & 2) == 0; loop_i = loop_i + 0x20) {
        val_2 = bflib_system_io_fn_0f09e5();
        val = extraout_ECX_00;
        if (val_2 == 0) {
          *(undefined4 *)(loop_i + 8) = arg_ebx;
          *(undefined4 *)(loop_i + 0x10) = arg_ecx;
          *(undefined4 *)(loop_i + 0x14) = param_1;
          *(undefined4 *)(loop_i + 0x18) = param_2;
          val = extraout_ECX_00 + 1;
          *(undefined4 *)(loop_i + 0x1c) = param_3;
        }
      }
      word_ptr = word_ptr + 0x14ca;
    }
    if (val != 0) {
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__no_computer_check_fo_00169352,g_data_00179c04);
  }
  LbErrorLog();
  return;
}

/******************************************************************************
 * Function : command_script_player_name_07b7d9 (Original VA: 0x7b7d9, Ghidra: FUN_0007b7d9)
 * Prototype: void command_script_player_name_07b7d9(void);
 * Address  : 0x7b7d9 (Size: 255 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2763
 * Purpose  : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 4 -> get_script_command_id, LbErrorLog, dk_sprintf, bflib_system_io_fn_0f09e5
 ******************************************************************************/
void command_script_player_name_07b7d9(void)

{
  int val;
  int arg_ecx;
  int *int_ptr;
  int *int_ptr_2;
  int *extraout_ECX;
  int arg_ebx;
  int *loop_i;
  int val_2;
  int local_14;
  int local_10;
  
  local_14 = 5;
  local_10 = 0;
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__0016938d,g_data_00179c04);
  }
  else {
    val_2 = 0;
    if (val != 8) {
      local_14 = val + 1;
      val_2 = val;
    }
    int_ptr = (int *)(val_2 * 0x14ca + 0x2cd5e3);
    for (; val_2 < local_14; val_2 = val_2 + 1) {
      int_ptr_2 = int_ptr;
      for (loop_i = (int *)(&g_bss_002cd3d3 + val_2 * 0x14ca); (*loop_i != 0 && (loop_i < int_ptr));
          loop_i = loop_i + 0xb) {
        val = bflib_system_io_fn_0f09e5();
        if (val == 0) {
          loop_i[7] = arg_ebx;
          local_10 = local_10 + 1;
          loop_i[8] = arg_ecx;
        }
        int_ptr_2 = extraout_ECX;
      }
      int_ptr = (int *)((int)int_ptr_2 + 0x14ca);
    }
    if (local_10 != 0) {
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__no_computer_event_fo_001693bd,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2763, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_script_player_name_07b8d8 (Original VA: 0x7b8d8, Ghidra: FUN_0007b8d8)
 * Prototype: void command_script_player_name_07b8d8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x7b8d8 (Size: 247 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * Purpose  : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 3 -> get_script_command_id, dk_sprintf, bflib_system_io_fn_0f09e5
 ******************************************************************************/
void command_script_player_name_07b8d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int val;
  int val_2;
  undefined4 arg_ecx;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_ebx;
  undefined *loop_i;
  undefined *word_ptr;
  int local_14;
  int local_10;
  
  local_14 = 5;
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__001693f8,g_data_00179c04);
  }
  else {
    local_10 = 0;
    if (val != 8) {
      local_14 = val + 1;
      local_10 = val;
    }
    word_ptr = &g_bss_002ccbd3 + local_10 * 0x14ca;
    val = extraout_ECX;
    for (; local_10 < local_14; local_10 = local_10 + 1) {
      for (loop_i = word_ptr + 0x38; (loop_i[0x44] & 2) == 0; loop_i = loop_i + 0x48) {
        val_2 = bflib_system_io_fn_0f09e5();
        val = extraout_ECX_00;
        if (val_2 == 0) {
          *(undefined4 *)(loop_i + 4) = arg_ebx;
          *(undefined4 *)(loop_i + 8) = arg_ecx;
          *(undefined4 *)(loop_i + 0xc) = param_1;
          *(undefined4 *)(loop_i + 0x10) = param_2;
          val = extraout_ECX_00 + 1;
          *(undefined4 *)(loop_i + 0x14) = param_3;
        }
      }
      word_ptr = word_ptr + 0x14ca;
    }
    if (val != 0) {
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__no_computer_process_f_00169428,g_data_00179c04);
  }
  LbErrorLog();
  return;
}

/******************************************************************************
 * Function : command_script_player_name_07b9cf (Original VA: 0x7b9cf, Ghidra: FUN_0007b9cf)
 * Prototype: void command_script_player_name_07b9cf(void);
 * Address  : 0x7b9cf (Size: 156 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp lines 2822
 * Purpose  : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 4 -> command_script_values_script_079eb1, get_script_command_id, LbErrorLog, dk_sprintf
 ******************************************************************************/
void command_script_player_name_07b9cf(void)

{
  int val;
  undefined4 extraout_ECX;
  
  val = get_script_command_id();
  if (val == -1) {
    dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__00169465,g_data_00179c04,extraout_ECX
                );
  }
  else {
    val = get_script_command_id();
    if (val != -1) {
      command_script_values_script_079eb1(0);
      return;
    }
    dk_sprintf(&g_log_sprintf_buf,s__script__d__invalid_player_name__00169495,g_data_00179c04);
  }
  LbErrorLog(); /* LbErrorLog("command.cpp", line 2822, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : command_fn_07ba6b (Original VA: 0x7ba6b, Ghidra: FUN_0007ba6b)
 * Prototype: void command_fn_07ba6b(void);
 * Address  : 0x7ba6b (Size: 21 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x07ba6b
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void command_fn_07ba6b(void)

{
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_fn_07ba80 (Original VA: 0x7ba80, Ghidra: FUN_0007ba80)
 * Prototype: void command_fn_07ba80(void);
 * Address  : 0x7ba80 (Size: 21 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Module command.cpp procedure @ 0x07ba80
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void command_fn_07ba80(void)

{
  command_script_values_script_079eb1(0);
  return;
}

/******************************************************************************
 * Function : command_process_slabmap_tile_07ba98 (Original VA: 0x7ba98, Ghidra: FUN_0007ba98)
 * Prototype: undefined4 command_process_slabmap_tile_07ba98(void);
 * Address  : 0x7ba98 (Size: 120 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 2 -> ceiling_fn_07bb10, ceiling_fn_07bc8d
 * Callees  : 1 -> door_process_map_subtile_022b3a
 ******************************************************************************/
undefined4 command_process_slabmap_tile_07ba98(void)

{
  char ch;
  int val;
  int extraout_ECX;
  int subtile_x;
  int slab_coord;
  int subtile_y;
  
  val = door_process_map_subtile_022b3a();
  slab_coord = (uint)(byte)(&g_slabmap_base)
                      [((&g_subtile_to_slab_lut)[subtile_y] * 0x55 + (&g_subtile_to_slab_lut)[subtile_x]) * 6] * 0x16;
  if (((&g_data_001921c6)[slab_coord] & 0x40) == 0) {
    if ((&g_data_001921d2)[slab_coord] != '\0') {
      return 1;
    }
    if ((byte)(&g_slabmap_base)[((&g_subtile_to_slab_lut)[subtile_y] * 0x55 + (&g_subtile_to_slab_lut)[subtile_x]) * 6] !=
        0xc) {
      return 0;
    }
    ch = (&g_bss_002e9125)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0xe6];
  }
  else {
    if (val == 0) {
      return 0;
    }
    if (*(char *)(val + 6) != *(char *)(extraout_ECX + 6)) {
      return 0;
    }
    ch = *(char *)(val + 0x18);
  }
  if (ch == '\0') {
    return 1;
  }
  return 0;
}

