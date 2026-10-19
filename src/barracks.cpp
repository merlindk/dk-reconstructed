/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: barracks.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 12
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : barracks_fn_0130c5 (Original VA: 0x130c5, Ghidra: FUN_000130c5)
 * Prototype: void barracks_fn_0130c5(void);
 * Address  : 0x130c5 (Size: 64 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Module barracks.cpp procedure @ 0x0130c5
 * Callers  : 2 -> ariadne_update_creature_control_011e00, barracks_fn_013105
 * Callees  : 3 -> barracks_fn_013359, move_process_map_subtile_0b28e8, get_2d_box_distance
 ******************************************************************************/
void barracks_fn_0130c5(void)

{
  undefined2 uval;
  undefined4 uval_2;
  int arg_edx;
  
  barracks_fn_013359(arg_edx + 0xc);
  uval = move_process_map_subtile_0b28e8();
  *(undefined2 *)(arg_edx + 0x10) = uval;
  uval_2 = get_2d_box_distance();
  *(undefined4 *)(arg_edx + 0x62) = uval_2;
  return;
}

/******************************************************************************
 * Function : barracks_fn_013105 (Original VA: 0x13105, Ghidra: FUN_00013105)
 * Prototype: undefined4 barracks_fn_013105(void);
 * Address  : 0x13105 (Size: 100 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Module barracks.cpp procedure @ 0x013105
 * Callers  : 1 -> ariadne_update_creature_control_012002
 * Callees  : 2 -> ariadne_update_creature_control_011e00, barracks_fn_0130c5
 ******************************************************************************/
undefined4 barracks_fn_013105(void)

{
  undefined4 uval;
  int arg_edx;
  
  if (*(byte *)(arg_edx + 0x28) < *(byte *)(arg_edx + 0x51)) {
    *(char *)(arg_edx + 0x28) = *(char *)(arg_edx + 0x28) + '\x01';
    if (*(byte *)(arg_edx + 0x51) == *(byte *)(arg_edx + 0x28)) {
      if (*(byte *)(arg_edx + 0x51) < *(byte *)(arg_edx + 0x52)) {
        uval = ariadne_update_creature_control_011e00();
      }
      else {
        uval = 1;
      }
    }
    else {
      barracks_fn_0130c5();
      ariadne_fn_01211a();
      uval = 0;
    }
  }
  else {
    uval = 3;
  }
  return uval;
}

/******************************************************************************
 * Function : barracks_fn_013359 (Original VA: 0x13359, Ghidra: FUN_00013359)
 * Prototype: void barracks_fn_013359(void);
 * Address  : 0x13359 (Size: 209 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Module barracks.cpp procedure @ 0x013359
 * Callers  : 1 -> barracks_fn_0130c5
 * Callees  : 0 -> 
 ******************************************************************************/
void barracks_fn_013359(void)

{
  char ch;
  char ch_2;
  short short_val;
  ushort uval;
  int arg_eax;
  short *arg_ecx;
  int arg_edx;
  short short_val_2;
  int arg_ebx;
  int val;
  
  val = arg_ebx * 4 + arg_edx;
  if (arg_ebx == *(byte *)(arg_edx + 0x52) - 1) {
    *arg_ecx = *(short *)(val + 0x29);
    arg_ecx[1] = *(short *)(val + 0x2b);
    return;
  }
  uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  ch = *(char *)(val + 0x29);
  ch_2 = *(char *)(val + 0x2b);
  *arg_ecx = *(short *)(val + 0x29) + 1;
  short_val = *(short *)(val + 0x2b);
  *(undefined1 *)arg_ecx = 0;
  short_val_2 = uval + 1;
  arg_ecx[1] = short_val + 1;
  *(undefined1 *)(arg_ecx + 1) = 0;
  if (ch == -1) {
    if (ch_2 == -1) {
      *arg_ecx = *arg_ecx - short_val_2;
      goto LAB_000133d9;
    }
    if (ch_2 == '\0') {
      *arg_ecx = *arg_ecx - short_val_2;
      return;
    }
    *arg_ecx = *arg_ecx - short_val_2;
  }
  else if (ch == '\0') {
    if (ch_2 == -1) {
LAB_000133d9:
      arg_ecx[1] = arg_ecx[1] - short_val_2;
      return;
    }
    if (ch_2 == '\0') {
      return;
    }
  }
  else {
    if (ch_2 == -1) {
      *arg_ecx = *arg_ecx + uval;
      goto LAB_000133d9;
    }
    if (ch_2 == '\0') {
      *arg_ecx = *arg_ecx + uval;
      return;
    }
    *arg_ecx = *arg_ecx + uval;
  }
  arg_ecx[1] = arg_ecx[1] + uval;
  return;
}

/******************************************************************************
 * Function : barracks_fn_01342a (Original VA: 0x1342a, Ghidra: FUN_0001342a)
 * Prototype: void barracks_fn_01342a(undefined1 *param_1);
 * Address  : 0x1342a (Size: 736 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Module barracks.cpp procedure @ 0x01342a
 * Callers  : 1 -> ariadne_fn_013169
 * Callees  : 3 -> ariadne_fn_0128cd, ariadne_fn_012c46, move_process_map_subtile_0b28e8
 ******************************************************************************/
void barracks_fn_01342a(undefined1 *param_1)

{
  int thing;
  uint uval;
  int val;
  undefined2 *arg_ecx;
  int arg_edx;
  uint arg_ebx;
  byte flag;
  undefined4 local_4c;
  undefined2 local_48 [2];
  undefined4 local_44;
  undefined2 auStack_40 [2];
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  flag = 0;
  local_44 = *(undefined4 *)(thing + 0xd); /* thing->mappos.val_x */
  auStack_40[0] = *(undefined2 *)(thing + 0x11);
  local_34 = (uint)*(ushort *)(thing + 0x52); /* thing->health */
  local_38 = (uint)*(byte *)(arg_edx + 0x20);
  local_3c = (int)*(short *)(arg_edx + 0x26);
  if (arg_ebx < 0x200) {
    if (arg_ebx != 0) goto LAB_000134e1;
    local_10 = 0x600;
    local_14 = 2;
    local_1c = 0x200;
  }
  else if (arg_ebx < 0x201) {
    local_10 = 0;
    local_14 = 2;
    local_1c = 0x400;
  }
  else {
    if (arg_ebx < 0x400) goto LAB_000134e1;
    if (arg_ebx < 0x401) {
      local_10 = 0x200;
      local_14 = 2;
      local_1c = 0x600;
    }
    else {
      if (arg_ebx != 0x600) goto LAB_000134e1;
      local_10 = 0x400;
      local_14 = 2;
      local_1c = 0;
    }
  }
  local_14 = 2;
  local_18 = 1;
LAB_000134e1:
  *(undefined2 *)(arg_edx + 0x26) = 0x100;
  local_28 = ((int)(uint)*(ushort *)(&g_data_0019073b + (uint)*(ushort *)(thing + 0x56) * 2) >> 9) + 2
  ;
  local_2c = local_28;
  local_30 = local_28;
  *(short *)(thing + 0x52) = (short)local_10; /* thing->health */
  local_24 = 0;
  *(undefined1 *)(arg_edx + 0x20) = (undefined1)local_14;
  for (; local_24 < local_28; local_24 = local_24 + 1) {
    uval = ariadne_fn_0128cd();
    if (uval != 0xffffffff) {
      if (uval != arg_ebx) {
        local_4c = CONCAT22((short)((uint)-((int)(&PTR_LAB_00192fe0)[uval] *
                                            (int)*(short *)(arg_edx + 0x26) >> 8) >> 8) +
                            *(short *)(thing + 0xf), /* thing->mappos.val_y */
                            (short)((uint)((int)*(short *)(arg_edx + 0x26) * (&g_slab_attr_table)[uval])
                                   >> 0x10) + *(short *)(thing + 0xd)); /* thing->mappos.val_x */
        local_48[0] = move_process_map_subtile_0b28e8();
        val = ariadne_fn_012c46();
        if (val == 0) {
          *(undefined4 *)(thing + 0xd) = local_4c; /* thing->mappos.val_x */
          *(undefined2 *)(thing + 0x11 + (uint)flag * -8) = local_48[(uint)flag * -4];
          goto LAB_0001352e;
        }
      }
      local_2c = local_24;
      break;
    }
LAB_0001352e:
  }
  *(short *)(thing + 0x52) = (short)local_1c; /* thing->health */
  *(undefined1 *)(arg_edx + 0x20) = (undefined1)local_18;
  local_20 = 0;
  *(undefined4 *)(thing + 0xd) = local_44; /* thing->mappos.val_x */
  *(undefined2 *)(thing + 0x11 + (uint)flag * -8) = auStack_40[(uint)flag * -4];
  do {
    if (local_28 <= local_20) {
LAB_0001369c:
      *(undefined4 *)(thing + 0xd) = local_44; /* thing->mappos.val_x */
      *(undefined2 *)(thing + 0x11 + (uint)flag * -8) = auStack_40[(uint)flag * -4];
      *(short *)(thing + 0x52) = (short)local_34; /* thing->health */
      *(undefined1 *)(arg_edx + 0x20) = (undefined1)local_38;
      *(short *)(arg_edx + 0x26) = (short)local_3c;
      if (local_2c < local_30) {
        *arg_ecx = (short)local_10;
      }
      else if (local_30 < local_2c) {
        *arg_ecx = (short)local_1c;
        local_14._0_1_ = (undefined1)local_18;
      }
      else {
        *arg_ecx = (short)local_10;
      }
      *param_1 = (undefined1)local_14;
      return;
    }
    uval = ariadne_fn_0128cd();
    if (uval != 0xffffffff) {
      if (uval != arg_ebx) {
        local_4c = CONCAT22(*(short *)(thing + 0xf) + /* thing->mappos.val_y */
                            (short)((uint)-((int)*(short *)(arg_edx + 0x26) *
                                            (int)(&PTR_LAB_00192fe0)[uval] >> 8) >> 8),
                            *(short *)(thing + 0xd) + /* thing->mappos.val_x */
                            (short)((uint)((int)*(short *)(arg_edx + 0x26) * (&g_slab_attr_table)[uval])
                                   >> 0x10));
        local_48[0] = move_process_map_subtile_0b28e8();
        val = ariadne_fn_012c46();
        if (val == 0) {
          *(undefined4 *)(thing + 0xd) = local_4c; /* thing->mappos.val_x */
          *(undefined2 *)(thing + 0x11 + (uint)flag * -8) = local_48[(uint)flag * -4];
          goto LAB_000135f9;
        }
      }
      local_30 = local_20;
      goto LAB_0001369c;
    }
LAB_000135f9:
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : barracks_fn_013730 (Original VA: 0x13730, Ghidra: FUN_00013730)
 * Prototype: undefined4 barracks_fn_013730(void);
 * Address  : 0x13730 (Size: 23 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Module barracks.cpp procedure @ 0x013730
 * Callers  : 1 -> barracks_fn_0137af
 * Callees  : 1 -> room_fn_0ce0e4
 ******************************************************************************/
undefined4 barracks_fn_013730(void)

{
  int arg_eax;
  int val;
  
  val = room_fn_0ce0e4();
  if (val != 0) {
    *(undefined1 *)(arg_eax + 8) = 0x41;
  }
  return 1;
}

/******************************************************************************
 * Function : barracks_update_creature_control_013747 (Original VA: 0x13747, Ghidra: FUN_00013747)
 * Prototype: longlong barracks_update_creature_control_013747(void);
 * Address  : 0x13747 (Size: 104 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 5 -> person_fn_063b6d, person_update_creature_control_064ae7, room_attempt_add_creature_room_0cd85c, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong barracks_update_creature_control_013747(void)

{
  char ch;
  int thing;
  int val;
  uint arg_edx;
  
  *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) = 0; /* thing->ccontrol_idx */
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 0xc)) &&
     (*(char *)(val + 3) == *(char *)(thing + 6))) { /* thing->owner */
    ch = room_attempt_add_creature_room_0cd85c();
    if (ch != '\0') {
      person_update_creature_control_064ae7();
      return CONCAT44(arg_edx,1);
    }
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : barracks_fn_0137af (Original VA: 0x137af, Ghidra: FUN_000137af)
 * Prototype: longlong barracks_fn_0137af(void);
 * Address  : 0x137af (Size: 90 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Module barracks.cpp procedure @ 0x0137af
 * Callers  : 0 -> 
 * Callees  : 4 -> barracks_fn_013730, person_fn_063b6d, room_attempt_remove_creature_room_0cd9b0, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong barracks_fn_0137af(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  undefined8 uval;
  
  uval = room_update_slab_subtile_columns_0d0f50();
  val = (int)uval;
  if ((((val != 0) && (*(short *)(val + 10) == 0xc)) &&
      (*(short *)(val + 1) == *(short *)((int)((ulonglong)uval >> 0x20) + 0x7e))) &&
     (*(char *)(val + 3) == *(char *)(arg_eax + 6))) {
    barracks_fn_013730();
    return CONCAT44(arg_edx,1);
  }
  room_attempt_remove_creature_room_0cd9b0();
  person_fn_063b6d();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : barracks_update_creature_control_013809 (Original VA: 0x13809, Ghidra: FUN_00013809)
 * Prototype: undefined8 barracks_update_creature_control_013809(void);
 * Address  : 0x13809 (Size: 192 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> update_creature_has_illegal_state_0e1b88
 * Callees  : 6 -> gravyard_update_creature_and_thing_039d83, person_fn_063b6d, person_fn_064a2e, person_external_change_state_but_064a5f, person_fn_064bce, room_update_creature_control_0cb33c
 ******************************************************************************/
undefined8 barracks_update_creature_control_013809(void)

{
  ushort cctrl_ptr;
  int thing;
  byte *byte_ptr;
  undefined4 arg_edx;
  undefined8 uval;
  
  byte_ptr = (byte *)gravyard_update_creature_and_thing_039d83();
  if (byte_ptr == (byte *)0x0) {
    person_fn_063b6d();
    goto LAB_000138bf;
  }
  if ((*byte_ptr & 0x20) == 0) {
    uval = person_fn_064bce();
    cctrl_ptr = *(ushort *)((int)uval + 0x21);
    if (cctrl_ptr == 0) goto LAB_000138bf;
    if (1 < cctrl_ptr) {
      if (cctrl_ptr == 2) {
        if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) != /* thing->ccontrol_idx */
             *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)((int)((ulonglong)uval >> 0x20) + 100)] + 0x7e))
           && (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) != /* thing->ccontrol_idx */
               *(short *)((&g_creature_ctrl_ptrs)[*(ushort *)((int)((ulonglong)uval >> 0x20) + 100)] + 0x7e
                         ))) {
          person_fn_064a2e();
          room_update_creature_control_0cb33c();
        }
      }
      goto LAB_000138bf;
    }
  }
  if (*(char *)(thing + 7) != 'U') {
    person_external_change_state_but_064a5f();
  }
LAB_000138bf:
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : barracks_update_creature_control_0138c9 (Original VA: 0x138c9, Ghidra: FUN_000138c9)
 * Prototype: undefined8 barracks_update_creature_control_0138c9(void);
 * Address  : 0x138c9 (Size: 516 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 7 -> anger_fn_010010, group_update_creature_and_thing_039c3e, gravyard_update_creature_and_thing_039d83, group_update_creature_and_thing_039e90, person_fn_063b6d, move_fn_0b4ac4, update_fn_0dc440
 ******************************************************************************/
undefined8 barracks_update_creature_control_0138c9(void)

{
  byte *cctrl_ptr;
  bool flag;
  int thing;
  int thing_ptr;
  int val;
  undefined4 uval;
  int cctrl_ptr_2;
  undefined4 arg_edx;
  
  thing_ptr = gravyard_update_creature_and_thing_039d83();
  flag = false;
  if ((thing_ptr != 0) && (thing_ptr != thing)) {
    if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0xad) & 0x10) == 0) { /* thing->ccontrol_idx */
      val = group_update_creature_and_thing_039e90();
      for (cctrl_ptr_2 = 0; cctrl_ptr_2 < val * 3; cctrl_ptr_2 = cctrl_ptr_2 + 3) {
        if (((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + cctrl_ptr_2 + 0x294) & 2) != 0) && /* thing->ccontrol_idx */
           ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + cctrl_ptr_2 + 0x294) & 1) == 0)) { /* thing->ccontrol_idx */
          flag = true;
          cctrl_ptr = (byte *)(cctrl_ptr_2 + 0x294 + (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)]); /* thing->ccontrol_idx */
          *cctrl_ptr = *cctrl_ptr | 1;
          break;
        }
      }
      if (flag) {
        thing_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
        if (*(byte *)(thing_ptr + 0x307) < 9) {
          if ((*(char *)(thing_ptr + 0x307) == '\0') ||
             (*(int *)(thing_ptr + 0x303) + 0x10U <= g_game_turn)) {
            *(uint *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x303) = g_game_turn; /* thing->ccontrol_idx */
            thing_ptr = update_fn_0dc440();
            if ((thing_ptr < 0x601) && ((thing_ptr < 0x101 && (thing_ptr < 1)))) {
              anger_fn_010010();
            }
            else {
              thing_ptr = move_fn_0b4ac4(0);
              if (thing_ptr == -1) {
                uval = 0;
                *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x307) = /* thing->ccontrol_idx */
                     *(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x307) + '\x01'; /* thing->ccontrol_idx */
                goto LAB_00013ac6;
              }
            }
            *(undefined1 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x307) = 0; /* thing->ccontrol_idx */
          }
        }
        else {
          group_update_creature_and_thing_039c3e();
        }
        uval = 0;
        goto LAB_00013ac6;
      }
    }
    else {
      group_update_creature_and_thing_039c3e();
    }
  }
  person_fn_063b6d();
  uval = 1;
LAB_00013ac6:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : barracks_update_creature_and_thing_013acd (Original VA: 0x13acd, Ghidra: FUN_00013acd)
 * Prototype: undefined4 barracks_update_creature_and_thing_013acd(void);
 * Address  : 0x13acd (Size: 118 bytes)
 * Module   : barracks.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> barracks_barrack_party_class_013b43
 * Callees  : 2 -> gravyard_update_creature_control_039a74, gravyard_update_creature_control_039ba4
 ******************************************************************************/
undefined4 barracks_update_creature_and_thing_013acd(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  uint thing;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int arg_edx;
  
  cctrl_ptr = *(ushort *)(arg_edx + 0x3d);
  do {
    if ((&g_thing_ptrs)[cctrl_ptr] <= g_thing_ptrs) {
LAB_00013b05:
      cctrl_ptr = *(ushort *)(arg_edx + 0x3d);
      while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
        if (thing_ptr != thing) {
          gravyard_update_creature_control_039a74();
          thing = extraout_ECX_00;
        }
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa); /* thing->ccontrol_idx */
      }
      return 1;
    }
    if ((&g_thing_ptrs)[cctrl_ptr] != thing) {
      gravyard_update_creature_control_039ba4();
      thing = extraout_ECX;
      goto LAB_00013b05;
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2aa); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : barracks_barrack_party_class_013b43 (Original VA: 0x13b43, Ghidra: FUN_00013b43)
 * Prototype: longlong barracks_barrack_party_class_013b43(void);
 * Address  : 0x13b43 (Size: 83 bytes)
 * Module   : barracks.cpp [direct_file_string_xref]
 * OrigLine : barracks.cpp lines 438
 * Purpose  : String 'INVALID BARRACK PARTY CLASS'
 * Callers  : 1 -> creature_allocate_light_new_hero_080a94
 * Callees  : 3 -> barracks_update_creature_and_thing_013acd, room_update_slab_subtile_columns_0d0f50, LbErrorLog
 ******************************************************************************/
longlong barracks_barrack_party_class_013b43(void)

{
  int thing;
  int val;
  undefined4 uval;
  uint arg_edx;
  
  if (*(char *)(thing + 0x1f) != '\x05') { /* thing->class_id */
    LbErrorLog(); /* LbErrorLog("barracks.cpp", line 438, "INVALID BARRACK PARTY CLASS") */
    return (ulonglong)arg_edx << 0x20;
  }
  val = room_update_slab_subtile_columns_0d0f50();
  if (((val != 0) && (*(short *)(val + 10) == 0xc)) &&
     (*(char *)(val + 3) == *(char *)(thing + 6))) { /* thing->owner */
    uval = barracks_update_creature_and_thing_013acd();
    return CONCAT44(arg_edx,uval);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : barracks_fn_013b98 (Original VA: 0x13b98, Ghidra: FUN_00013b98)
 * Prototype: void barracks_fn_013b98(void);
 * Address  : 0x13b98 (Size: 22 bytes)
 * Module   : barracks.cpp [address_order_boundary_interpolation]
 * Purpose  : Module barracks.cpp procedure @ 0x013b98
 * Callers  : 1 -> inits_could_create_ambient_sound_0404f7
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void barracks_fn_013b98(void)

{
  LbScreenWaitVbi();
  return;
}

