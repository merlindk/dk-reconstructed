/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: compturn.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 32
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : compturn_update_creature_and_thing_0201ed (Original VA: 0x201ed, Ghidra: FUN_000201ed)
 * Prototype: longlong compturn_update_creature_and_thing_0201ed(void);
 * Address  : 0x201ed (Size: 102 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> compevnt_fn_01a4a1
 * Callees  : 0 -> 
 ******************************************************************************/
longlong compturn_update_creature_and_thing_0201ed(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  uint arg_edx;
  
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2f);
  while( true ) {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
      while( true ) {
        thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
        if (thing_ptr <= g_thing_ptrs) {
          return (ulonglong)arg_edx << 0x20;
        }
        if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) != '\0') break; /* thing->ccontrol_idx */
        cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
      }
      return CONCAT44(arg_edx,thing_ptr);
    }
    if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 3) != '\0') break; /* thing->ccontrol_idx */
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  return CONCAT44(arg_edx,thing_ptr);
}

/******************************************************************************
 * Function : compturn_process_dungeon_room_020253 (Original VA: 0x20253, Ghidra: FUN_00020253)
 * Prototype: undefined8 compturn_process_dungeon_room_020253(void);
 * Address  : 0x20253 (Size: 263 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compturn_process_dungeon_room_020253(void)

{
  byte flag;
  int val;
  int arg_eax;
  int room_off;
  int val_2;
  undefined4 arg_edx;
  uint uval;
  ushort uval_2;
  int val_3;
  undefined1 *word_ptr;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  
  local_24 = -0x80000000;
  val = *(int *)(arg_eax + 0x24);
  word_ptr = (undefined1 *)0x0;
  uval = 0;
  do {
    val_2 = (uval & 0xffff) * 5;
    if ((&g_data_00174df0)[val_2] == '\0') {
      return CONCAT44(arg_edx,word_ptr);
    }
    flag = (&g_data_00174df0)[val_2];
    if (flag < 3) {
LAB_000202c2:
      uval_2 = *(ushort *)(val + 0xb + (uint)(byte)(&g_data_00174df0)[(uval & 0xffff) * 5] * 2);
      val_2 = 0;
      local_20 = 0;
      local_1c = (undefined1 *)0x0;
      while( true ) {
        room_off = (uint)uval_2 * 0x45;
        if (&g_rooms + room_off < &g_bss_002ddd1c) break;
        if (*(ushort *)(&g_bss_002ddd2b + room_off) < *(ushort *)(&g_bss_002ddd29 + room_off)) {
          val_3 = (uint)*(ushort *)(&g_bss_002ddd29 + room_off) -
                  (uint)*(ushort *)(&g_bss_002ddd2b + room_off);
          val_2 = val_2 + val_3;
          if (local_20 < val_3) {
            local_20 = val_3;
            local_1c = &g_rooms + room_off;
          }
        }
        uval_2 = *(ushort *)(&g_bss_002ddd21 + room_off);
      }
      if ((local_1c != (undefined1 *)0x0) &&
         (val_2 = val_2 * *(int *)((int)&g_data_00174df1 + (uval & 0xffff) * 5),
         val_2 - local_24 != 0 && local_24 <= val_2)) {
        word_ptr = local_1c;
        local_24 = val_2;
      }
    }
    else {
      if (3 < flag) {
        if (flag == 8) {
          uval_2 = 1;
          while ((uval_2 < 7 &&
                 ((val_2 = (uint)uval_2 + val, *(char *)(val_2 + 0x100f) == '\0' ||
                  (*(char *)(val_2 + 0x1008) != '\0'))))) {
            uval_2 = uval_2 + 1;
          }
          if (uval_2 == 7) goto LAB_0002033f;
        }
        goto LAB_000202c2;
      }
      if (-1 < *(int *)(val + 0xf78)) goto LAB_000202c2;
    }
LAB_0002033f:
    uval = uval + 1;
  } while( true );
}

/******************************************************************************
 * Function : compturn_fn_02035a (Original VA: 0x2035a, Ghidra: FUN_0002035a)
 * Prototype: undefined8 compturn_fn_02035a(void);
 * Address  : 0x2035a (Size: 150 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x02035a
 * Callers  : 4 -> compevnt_roll_action_random_018ffe, compevnt_fn_01a158, compevnt_fn_01a4a1, comptask_fn_01b762
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compturn_fn_02035a(void)

{
  ushort uval;
  int val;
  int arg_eax;
  int val_2;
  undefined4 arg_edx;
  
  val_2 = 1;
  if (*(int *)(*(int *)(arg_eax + 0x24) + 0x884) != 0) {
    uval = *(ushort *)(arg_eax + 0x14c6);
    while( true ) {
      val = (uint)uval * 0x94;
      if (&g_bss_002c9203 + val < &g_bss_002c9204) break;
      if (((((&g_bss_002c9203)[val] & 1) != 0) && ((&g_bss_002c9205)[val] == '\b')) &&
         ((&g_bss_002c9204)[val] == '\x02')) {
        if (val_2 == 1) {
          val_2 = 0;
        }
        if ((uint)(*(int *)(&g_bss_002c9263 + val) -
                  (g_game_turn - *(int *)(&g_bss_002c925f + val))) <
            (uint)(*(int *)(&g_bss_002c9263 + val) - *(int *)(&g_bss_002c9263 + val) / 10)) {
          val_2 = -1;
          break;
        }
      }
      uval = *(ushort *)(&g_bss_002c9295 + val);
    }
  }
  return CONCAT44(arg_edx,val_2);
}

/******************************************************************************
 * Function : compturn_fn_0203f0 (Original VA: 0x203f0, Ghidra: FUN_000203f0)
 * Prototype: byte * compturn_fn_0203f0(void);
 * Address  : 0x203f0 (Size: 70 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x0203f0
 * Callers  : 10 -> compevnt_process_dungeon_room_018d28, compevnt_fn_018dcd, compevnt_fn_0192c1, compevnt_process_dungeon_room_019af8, compevnt_update_creature_and_thing_019d32, compevnt_fn_01a158, compevnt_fn_01a4a1, compevnt_fn_01a8cb ...
 * Callees  : 0 -> 
 ******************************************************************************/
byte * compturn_fn_0203f0(void)

{
  ushort uval;
  int arg_eax;
  int val;
  byte *byte_ptr;
  uint arg_edx;
  byte flag;
  
  uval = *(ushort *)(arg_eax + 0x14c6);
  do {
    val = (uint)uval * 0x94;
    byte_ptr = &g_bss_002c9203 + val;
    if (byte_ptr < &g_bss_002c9204) {
      return (byte *)0x0;
    }
    if ((*byte_ptr & 1) != 0) {
      if ((&g_bss_002c9205)[val] == '\x10') {
        flag = (&g_bss_002c9206)[val];
      }
      else {
        flag = (&g_bss_002c9205)[val];
      }
      if (flag == arg_edx) {
        return byte_ptr;
      }
    }
    uval = *(ushort *)(&g_bss_002c9295 + val);
  } while( true );
}

/******************************************************************************
 * Function : compturn_update_creature_and_thing_020436 (Original VA: 0x20436, Ghidra: FUN_00020436)
 * Prototype: int compturn_update_creature_and_thing_020436(void);
 * Address  : 0x20436 (Size: 301 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> comptask_update_player_dungeon_01ae5c, comptask_fn_01bb96
 * Callees  : 2 -> comptask_fn_01ba46, creature_update_creature_control_084ff8
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0002053f) */

int compturn_update_creature_and_thing_020436(void)

{
  ushort cctrl_ptr;
  int val;
  uint thing_ptr;
  byte flag;
  int arg_eax;
  int val_2;
  uint uval_2;
  uint extraout_ECX;
  int extraout_ECX_00;
  undefined4 *arg_edx;
  int arg_ebx;
  bool flag_2;
  bool flag_3;
  byte flag_4;
  int local_1c;
  int local_14;
  uint uval;
  
  flag_4 = 0;
  local_1c = 0;
  val = *(int *)(arg_eax + 0x24);
  local_14 = 0;
  do {
    if (arg_ebx <= local_14) {
      return local_1c;
    }
    uval_2 = 0;
    cctrl_ptr = *(ushort *)(val + 0x2f);
    while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
      val_2 = creature_update_creature_control_084ff8();
      uval_2 = extraout_ECX;
      if (val_2 != 0) {
        if (*(char *)(thing_ptr + 7) == '\x0e') {
          flag = *(byte *)(thing_ptr + 8); /* thing->active_state */
        }
        else {
          flag = *(byte *)(thing_ptr + 7);
        }
        uval = (uint)flag;
        flag = (&g_data_0018c4be)[uval * 0x29];
        uval_2 = thing_ptr;
        if (flag < 5) {
          if ((flag == 0) || (1 < flag)) break;
LAB_000204a0:
          if (uval < 7) {
            uval_2 = extraout_ECX;
            if (2 < uval) {
              flag_2 = uval < 5;
              flag_3 = uval == 5;
LAB_000204b6:
              uval_2 = extraout_ECX;
              if (flag_2 || flag_3) goto LAB_0002049c;
            }
          }
          else if (uval < 8) {
LAB_0002049c:
            uval_2 = thing_ptr;
          }
          else {
            uval_2 = extraout_ECX;
            if (0x45 < uval) {
              if (uval < 0x47) goto LAB_0002049c;
              uval_2 = extraout_ECX;
              if (0x60 < uval) {
                flag_2 = uval < 0x62;
                flag_3 = uval == 0x62;
                goto LAB_000204b6;
              }
            }
          }
        }
        else {
          uval_2 = extraout_ECX;
          if (5 < flag) {
            uval_2 = thing_ptr;
            if (flag < 7) break;
            uval_2 = extraout_ECX;
            if ((7 < flag) && (uval_2 = extraout_ECX, flag == 8)) goto LAB_000204a0;
          }
        }
      }
      cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
    }
    if (uval_2 == 0) {
      return local_1c;
    }
    val_2 = comptask_fn_01ba46();
    if (val_2 == 0) {
      return local_1c;
    }
    *(undefined1 *)(val_2 + 2) = 0xb;
    *(undefined4 *)(val_2 + 0x86) = *arg_edx;
    *(undefined2 *)(val_2 + 0x8a + (uint)flag_4 * -8) =
         *(undefined2 *)(arg_edx + (uint)flag_4 * -2 + 1);
    *(undefined2 *)(val_2 + 0x76) = *(undefined2 *)(extraout_ECX_00 + 0x1b);
    local_1c = local_1c + 1;
    local_14 = local_14 + 1;
    *(undefined4 *)(val_2 + 10) = g_game_turn;
  } while( true );
}

/******************************************************************************
 * Function : compturn_fn_020563 (Original VA: 0x20563, Ghidra: FUN_00020563)
 * Prototype: undefined4 compturn_fn_020563(void);
 * Address  : 0x20563 (Size: 51 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x020563
 * Callers  : 5 -> comptask_fn_01bb96, comptask_process_dungeon_room_01c0ec, comptask_process_slabmap_tile_01c1f1, comptask_process_slabmap_tile_01c3d3, comptask_fn_01ca08
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 compturn_fn_020563(void)

{
  int arg_eax;
  undefined4 *arg_edx;
  short *val;
  
  val = (short *)(arg_eax + 0x134c);
  while( true ) {
    if ((short *)(arg_eax + 0x13c4U) <= val) {
      return 0;
    }
    if (*val == 0) break;
    val = val + 3;
  }
  *(undefined4 *)val = *arg_edx;
  val[2] = *(short *)(arg_edx + 1);
  return 1;
}

/******************************************************************************
 * Function : compturn_fn_020596 (Original VA: 0x20596, Ghidra: FUN_00020596)
 * Prototype: undefined8 compturn_fn_020596(void);
 * Address  : 0x20596 (Size: 113 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x020596
 * Callers  : 3 -> compevnt_roll_action_random_018ffe, comptask_update_player_dungeon_01b561, comptask_update_player_dungeon_01b629
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compturn_fn_020596(void)

{
  char ch;
  ushort uval;
  int arg_eax;
  int val;
  byte *byte_ptr;
  undefined4 arg_edx;
  int loop_i;
  undefined4 local_20;
  undefined2 uStack_1c;
  undefined1 uStack_1a;
  
  local_20 = g_data_00179438;
  uStack_1c = g_data_0017943c;
  uStack_1a = g_data_0017943e;
  uval = *(ushort *)(arg_eax + 0x14c6);
  while( true ) {
    val = (uint)uval * 0x94;
    byte_ptr = &g_bss_002c9203 + val;
    if (byte_ptr < &g_bss_002c9204) break;
    if ((*byte_ptr & 1) != 0) {
      if ((&g_bss_002c9205)[val] == '\x10') {
        ch = (&g_bss_002c9206)[val];
      }
      else {
        ch = (&g_bss_002c9205)[val];
      }
      for (loop_i = 0; *(char *)((int)&local_20 + loop_i) != '\0'; loop_i = loop_i + 1) {
        if (ch == *(char *)((int)&local_20 + loop_i)) goto LAB_0001f531;
      }
    }
    uval = *(ushort *)(&g_bss_002c9295 + val);
  }
  byte_ptr = (byte *)0x0;
LAB_0001f531:
  return CONCAT44(arg_edx,byte_ptr);
}

/******************************************************************************
 * Function : compturn_update_creature_and_thing_020607 (Original VA: 0x20607, Ghidra: FUN_00020607)
 * Prototype: undefined8 compturn_update_creature_and_thing_020607(void);
 * Address  : 0x20607 (Size: 98 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> comptask_fn_01c563
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compturn_update_creature_and_thing_020607(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  undefined4 arg_edx;
  int val;
  char ch;
  
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
  val = 0;
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return CONCAT44(arg_edx,val);
    }
    if (*(char *)(thing_ptr + 7) == '\x0e') {
      ch = *(char *)(thing_ptr + 8); /* thing->active_state */
    }
    else {
      ch = *(char *)(thing_ptr + 7);
    }
    if (ch == '\'') {
LAB_00020638:
      val = val + 1;
    }
    else {
      if (*(char *)(thing_ptr + 7) == '\x0e') {
        ch = *(char *)(thing_ptr + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr + 7);
      }
      if (ch == 't') goto LAB_00020638;
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : compturn_update_creature_and_thing_020669 (Original VA: 0x20669, Ghidra: FUN_00020669)
 * Prototype: undefined8 compturn_update_creature_and_thing_020669(void);
 * Address  : 0x20669 (Size: 73 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> comptask_fn_01c563
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compturn_update_creature_and_thing_020669(void)

{
  ushort cctrl_ptr;
  uint thing_ptr;
  int arg_eax;
  undefined4 arg_edx;
  int val;
  char ch;
  
  val = 0;
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
  while (thing_ptr = (&g_thing_ptrs)[cctrl_ptr], g_thing_ptrs < thing_ptr) {
    if (*(char *)(thing_ptr + 7) == '\x0e') {
      ch = *(char *)(thing_ptr + 8); /* thing->active_state */
    }
    else {
      ch = *(char *)(thing_ptr + 7);
    }
    if (ch == 't') {
      val = val + 1;
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : compturn_update_creature_and_thing_0206b2 (Original VA: 0x206b2, Ghidra: FUN_000206b2)
 * Prototype: byte * compturn_update_creature_and_thing_0206b2(void);
 * Address  : 0x206b2 (Size: 257 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> comptask_fn_01c563
 * Callees  : 1 -> person_fn_064c4d
 ******************************************************************************/
byte * compturn_update_creature_and_thing_0206b2(void)

{
  ushort cctrl_ptr;
  byte flag;
  char cctrl_ptr_2;
  int arg_eax;
  uint cctrl_ptr_3;
  byte *extraout_ECX;
  byte *thing_ptr;
  int arg_edx;
  byte *byte_ptr;
  uint uval;
  
  uval = 0x80000000;
  cctrl_ptr = *(ushort *)(*(int *)(arg_eax + 0x24) + 0x2d);
  byte_ptr = (byte *)0x0;
  do {
    thing_ptr = (&g_thing_ptrs)[cctrl_ptr];
    if (thing_ptr <= g_thing_ptrs) {
      return byte_ptr;
    }
    if ((((*thing_ptr & 0x10) == 0) && ((thing_ptr[1] & 2) == 0)) && (thing_ptr[7] != 0x43)) {
      if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 8) == 0) { /* thing->ccontrol_idx */
LAB_000206e3:
        if (thing_ptr[7] == 0xe) {
          flag = thing_ptr[8];
        }
        else {
          flag = thing_ptr[7];
        }
        if ((((&g_data_0018c4c8)[(uint)flag * 0x29] != '\0') &&
            (cctrl_ptr_2 = person_fn_064c4d(), thing_ptr = extraout_ECX, cctrl_ptr_2 != '\0')) &&
           ((cctrl_ptr_3 = uval, arg_edx == 0 ||
            ((cctrl_ptr_3 = (uint)(byte)(&g_bss_002ebaf8)
                                  [(uint)extraout_ECX[0x1a] * 10 +
                                   (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(extraout_ECX + 100)]
                                                  + 0x23)], (int)uval <= (int)cctrl_ptr_3 ||
             (byte_ptr == (byte *)0x0)))))) {
          byte_ptr = extraout_ECX;
          uval = cctrl_ptr_3;
        }
      }
      else if ((*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0xad) & 8) != 0) { /* thing->ccontrol_idx */
        if (thing_ptr[7] == 0xe) {
          flag = thing_ptr[8];
        }
        else {
          flag = thing_ptr[7];
        }
        if ((&g_data_0018c4c8)[(uint)flag * 0x29] != '\0') goto LAB_000206e3;
      }
    }
    cctrl_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x1f); /* thing->ccontrol_idx */
  } while( true );
}

/******************************************************************************
 * Function : compturn_process_dungeon_room_0207b3 (Original VA: 0x207b3, Ghidra: FUN_000207b3)
 * Prototype: int compturn_process_dungeon_room_0207b3(void);
 * Address  : 0x207b3 (Size: 115 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> compevnt_fn_01a85a, compevnt_process_dungeon_room_01ab74
 * Callees  : 1 -> gen2_update_creature_and_thing_0378ba
 ******************************************************************************/
int compturn_process_dungeon_room_0207b3(void)

{
  ushort uval;
  int arg_eax;
  int val;
  int room_ptr;
  uint arg_edx;
  int val_2;
  
  if (0xc < arg_edx) {
    if (arg_edx < 0xe) {
      return 9999;
    }
    if (arg_edx == 0xe) {
      if ((uint)*(ushort *)(*(int *)(arg_eax + 0x24) + 0x27) * 0x45 == 0) {
        return 9999;
      }
      val = gen2_update_creature_and_thing_0378ba();
      return val;
    }
  }
  val = 0;
  val_2 = 0;
  uval = *(ushort *)(*(int *)(arg_eax + 0x24) + 0xb + arg_edx * 2);
  while (room_ptr = (uint)uval * 0x45, &g_rooms < &g_rooms + room_ptr) {
    val = val + (uint)*(ushort *)(&g_bss_002ddd2b + room_ptr);
    val_2 = val_2 + (uint)*(ushort *)(&g_bss_002ddd29 + room_ptr);
    uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
  }
  if (val_2 == 0) {
    return 9999;
  }
  return val_2 - val;
}

/******************************************************************************
 * Function : compturn_update_creature_and_thing_020826 (Original VA: 0x20826, Ghidra: FUN_00020826)
 * Prototype: uint compturn_update_creature_and_thing_020826(void);
 * Address  : 0x20826 (Size: 1661 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 1 -> comptask_process_dungeon_room_01cc83
 * Callees  : 5 -> anger_update_creature_control_010575, anger_update_creature_control_010589, compturn_process_dungeon_room_020ea3, creature_update_creature_control_084ff8, bflib_system_io_fn_0e69fc
 ******************************************************************************/
uint compturn_update_creature_and_thing_020826(void)

{
  ushort thing_ptr;
  char ch;
  byte flag;
  int arg_eax;
  int cctrl_ptr;
  int val;
  uint thing_ptr_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 *arg_edx;
  uint thing_ptr_3;
  int val_2;
  uint unaff_EDI;
  undefined8 uval;
  int local_28;
  undefined1 *local_24;
  uint local_20;
  uint local_1c;
  
  val = *(int *)(arg_eax + 0x24);
  thing_ptr = *(ushort *)(val + 0x2d);
  local_1c = 0;
  for (; g_thing_ptrs < (&g_thing_ptrs)[thing_ptr];
      thing_ptr = *(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[thing_ptr] + 100)] + 0x1f)) {
    local_1c = local_1c + 1;
  }
  g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = g_action_random_seed >> 0xd | g_action_random_seed * 0x80000;
  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(val + 0x2d)];
  for (thing_ptr_3 = g_action_random_seed % local_1c; (g_thing_ptrs < thing_ptr_2 && (thing_ptr_3 != 0)); thing_ptr_3 = thing_ptr_3 - 1) {
    thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f)]; /* thing->ccontrol_idx */
  }
  for (local_20 = local_1c; thing_ptr_3 = 0, local_20 != 0; local_20 = local_20 - 1) {
    if (thing_ptr_2 <= g_thing_ptrs) {
      thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(val + 0x2d)];
    }
    cctrl_ptr = creature_update_creature_control_084ff8();
    val = extraout_ECX;
    if (cctrl_ptr != 0) {
      if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
        ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
      }
      else {
        ch = *(char *)(thing_ptr_2 + 7);
      }
      if (ch != '[') {
        if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
          flag = *(byte *)(thing_ptr_2 + 8); /* thing->active_state */
        }
        else {
          flag = *(byte *)(thing_ptr_2 + 7);
        }
        thing_ptr_3 = thing_ptr_2;
        if ((((&g_data_0018c4be)[(uint)flag * 0x29] == '\n') ||
            (cctrl_ptr = anger_update_creature_control_010589(), val = extraout_ECX_00, cctrl_ptr != 0)) &&
           (*(short *)(val + 0xd) != 0)) {
          unaff_EDI = 1;
          break;
        }
        cctrl_ptr = anger_update_creature_control_010575();
        val = extraout_ECX_01;
        if (cctrl_ptr == 0) {
LAB_000209ba:
          cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)]; /* thing->ccontrol_idx */
          if (((*(char *)(cctrl_ptr + 3) == '\0') && ((*(byte *)(cctrl_ptr + 3) & 1) == 0)) &&
             ((*(byte *)(cctrl_ptr + 3) & 2) == 0)) {
            cctrl_ptr = ((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x73] +
                    (int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x73] *
                          (uint)*(byte *)(cctrl_ptr + 0x23) * 0x23) / 100) *
                    (uint)(byte)(&g_bss_002e9117)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6];
            val_2 = cctrl_ptr >> 0x1f;
            if ((int)*(short *)(thing_ptr_2 + 0x5e) <
                (int)((cctrl_ptr + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8) {
              if (*(char *)(thing_ptr_2 + 7) != '\x1a') {
                if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                  ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                }
                else {
                  ch = *(char *)(thing_ptr_2 + 7);
                }
                if ((ch != '\x19') && (*(char *)(thing_ptr_2 + 7) != '\x1a')) {
                  if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                    ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                  }
                  else {
                    ch = *(char *)(thing_ptr_2 + 7);
                  }
                  if (ch != 'Y') {
                    if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                      ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                    }
                    else {
                      ch = *(char *)(thing_ptr_2 + 7);
                    }
                    if (ch != '\x15') {
                      if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                        ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                      }
                      else {
                        ch = *(char *)(thing_ptr_2 + 7);
                      }
                      if (ch != '\x16') {
                        if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                          ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                        }
                        else {
                          ch = *(char *)(thing_ptr_2 + 7);
                        }
                        if (ch != '\x14') {
                          if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                            ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                          }
                          else {
                            ch = *(char *)(thing_ptr_2 + 7);
                          }
                          if (ch != 'P') {
                            if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                              ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                            }
                            else {
                              ch = *(char *)(thing_ptr_2 + 7);
                            }
                            if (ch != '~') {
                              if (*(short *)(extraout_ECX_01 + 0x27) != 0) goto LAB_00020b2b;
                              goto LAB_00020c7c;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
LAB_00020c7c:
              cctrl_ptr = (uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6;
              if ((*(short *)(&g_bss_002e911f + cctrl_ptr) == 0) ||
                 (*(int *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x39) <= /* thing->ccontrol_idx */
                  (int)*(short *)(&g_bss_002e911f + cctrl_ptr))) {
LAB_00020d0b:
                if (*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x48) == '\0') { /* thing->ccontrol_idx */
LAB_00020d53:
                  if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                    flag = *(byte *)(thing_ptr_2 + 8); /* thing->active_state */
                  }
                  else {
                    flag = *(byte *)(thing_ptr_2 + 7);
                  }
                  if (((&g_data_0018c4be)[(uint)flag * 0x29] == '\0') &&
                     (cctrl_ptr = compturn_process_dungeon_room_020ea3(), val = extraout_ECX_02, cctrl_ptr != 0)) {
                    unaff_EDI = (uint)*(ushort *)(cctrl_ptr + 10);
                    break;
                  }
                }
                else if (*(char *)(thing_ptr_2 + 7) != 'K') {
                  if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                    ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                  }
                  else {
                    ch = *(char *)(thing_ptr_2 + 7);
                  }
                  if (ch != 'L') {
                    if (*(short *)(extraout_ECX_01 + 0xf) == 0) goto LAB_00020d53;
                    unaff_EDI = 2;
                    break;
                  }
                }
              }
              else {
                if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                  ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                }
                else {
                  ch = *(char *)(thing_ptr_2 + 7);
                }
                if ((ch != '\x12') && (*(char *)(thing_ptr_2 + 7) != 'j')) {
                  if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                    ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                  }
                  else {
                    ch = *(char *)(thing_ptr_2 + 7);
                  }
                  if (ch != '\x13') {
                    if (*(short *)(extraout_ECX_01 + 0x25) == 0) goto LAB_00020d0b;
                    unaff_EDI = 0xd;
                    break;
                  }
                }
              }
            }
          }
          else {
            cctrl_ptr = ((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x73] +
                    (int)((int)(short)(&g_bss_002e9114)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0x73] *
                          (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x23) * 0x23) /* thing->ccontrol_idx */
                    / 100) * (uint)(byte)(&g_bss_002e9117)[(uint)*(byte *)(thing_ptr_2 + 0x1a) * 0xe6];
            val_2 = cctrl_ptr >> 0x1f;
            if (((int)*(short *)(thing_ptr_2 + 0x5e) <
                 (int)((cctrl_ptr + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8) &&
               (*(char *)(thing_ptr_2 + 7) != '\x1a')) {
              if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
              }
              else {
                ch = *(char *)(thing_ptr_2 + 7);
              }
              if ((ch != '\x19') && (*(char *)(thing_ptr_2 + 7) != '\x1a')) {
                if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                  ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                }
                else {
                  ch = *(char *)(thing_ptr_2 + 7);
                }
                if (ch != 'Y') {
                  if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                    ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                  }
                  else {
                    ch = *(char *)(thing_ptr_2 + 7);
                  }
                  if (ch != '\x15') {
                    if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                      ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                    }
                    else {
                      ch = *(char *)(thing_ptr_2 + 7);
                    }
                    if (ch != '\x16') {
                      if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                        ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                      }
                      else {
                        ch = *(char *)(thing_ptr_2 + 7);
                      }
                      if (ch != '\x14') {
                        if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                          ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                        }
                        else {
                          ch = *(char *)(thing_ptr_2 + 7);
                        }
                        if (ch != 'P') {
                          if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
                            ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
                          }
                          else {
                            ch = *(char *)(thing_ptr_2 + 7);
                          }
                          if ((ch != '~') && (*(short *)(extraout_ECX_01 + 0x27) != 0)) {
LAB_00020b2b:
                            unaff_EDI = 0xe;
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
            ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
          }
          else {
            ch = *(char *)(thing_ptr_2 + 7);
          }
          if (ch != 'R') {
            if (*(char *)(thing_ptr_2 + 7) == '\x0e') {
              ch = *(char *)(thing_ptr_2 + 8); /* thing->active_state */
            }
            else {
              ch = *(char *)(thing_ptr_2 + 7);
            }
            if (ch != 'S') {
              if (*(short *)(extraout_ECX_01 + 0x1f) == 0) goto LAB_000209ba;
              unaff_EDI = 10;
              break;
            }
          }
        }
      }
    }
    thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_2 + 100)] + 0x1f)]; /* thing->ccontrol_idx */
  }
  if (thing_ptr_3 != 0) {
    thing_ptr = *(ushort *)(val + 0xb + unaff_EDI * 2);
    local_28 = 0x7fffffff;
    local_24 = (undefined1 *)0x0;
    while( true ) {
      val = (uint)thing_ptr * 0x45;
      if (&g_rooms + val < &g_bss_002ddd1c) break;
      if (*(short *)(&g_room_slabs_count + val) == 2) {
        cctrl_ptr = (uint)*(byte *)(thing_ptr_3 + 0x1a) * 0xe6;
        if (*(short *)(&g_bss_002e19a9 +
                      (uint)*(byte *)(thing_ptr_3 + 0x1a) * 2 + *(char *)(thing_ptr_3 + 6) * 0x1508) == 0) { /* thing->owner */
          thing_ptr_2 = ((uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr) *
                   (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_3 + 100)] + 0x23) * 0x23) / 100 + /* thing->ccontrol_idx */
                  (uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr);
        }
        else {
          thing_ptr_2 = (((uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr) *
                    (uint)*(byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr_3 + 100)] + 0x23) * 0x23) / 100 /* thing->ccontrol_idx */
                  + (uint)*(ushort *)(&g_bss_002e91a5 + cctrl_ptr)) / 2;
        }
        if (*(uint *)(&g_bss_002ddd32 + val) <= thing_ptr_2) goto LAB_00020e47;
      }
      else {
LAB_00020e47:
        bflib_system_io_fn_0e69fc();
        uval = bflib_system_io_fn_0e69fc();
        cctrl_ptr = (int)uval + (int)((ulonglong)uval >> 0x20);
        if (cctrl_ptr < local_28) {
          local_28 = cctrl_ptr;
          local_24 = &g_rooms + val;
        }
      }
      thing_ptr = *(ushort *)(&g_bss_002ddd21 + val);
    }
    if (local_24 != (undefined1 *)0x0) {
      *arg_edx = local_24;
      return thing_ptr_3;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : compturn_process_dungeon_room_020ea3 (Original VA: 0x20ea3, Ghidra: FUN_00020ea3)
 * Prototype: undefined1 * compturn_process_dungeon_room_020ea3(void);
 * Address  : 0x20ea3 (Size: 357 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> compturn_update_creature_and_thing_020826
 * Callees  : 1 -> room_fn_0cfbd8
 ******************************************************************************/
undefined1 * compturn_process_dungeon_room_020ea3(void)

{
  byte flag;
  int val;
  uint uval;
  uint extraout_ECX;
  int arg_edx;
  undefined1 *room_ptr;
  ushort uval_2;
  int val_2;
  undefined8 uval_3;
  int local_2c;
  undefined1 *local_20;
  int local_1c;
  int local_18;
  
  local_20 = (undefined1 *)0x0;
  local_1c = -0x80000000;
  uval = 0;
  do {
    val = (uval & 0xffff) * 5;
    if ((&g_data_00174df0)[val] == '\0') {
      return local_20;
    }
    uval_2 = *(ushort *)(&g_bss_002e9111 + (uint)*(byte *)(arg_edx + 0x1a) * 0xe6);
    uval_3 = room_fn_0cfbd8();
    val_2 = (int)((ulonglong)uval_3 >> 0x20);
    if (((uint)uval_2 & (uint)uval_3) == 0) {
      flag = (&g_data_00174df0)[val];
      if (flag < 6) {
        if ((flag == 3) && (*(int *)(val_2 + 0xf78) < 0)) goto LAB_00020faa;
      }
      else if (flag < 7) {
        if (*(int *)(val_2 + 0xaf9) <= *(int *)(val_2 + 0x14b8) * 2) goto LAB_00020faa;
      }
      else if (flag == 8) {
        uval_2 = 1;
        while ((uval_2 < 7 &&
               ((val = (uint)uval_2 + val_2, *(char *)(val + 0x100f) == '\0' ||
                (*(char *)(val + 0x1008) != '\0'))))) {
          uval_2 = uval_2 + 1;
        }
        if (uval_2 == 7) goto LAB_00020faa;
      }
      uval_2 = *(ushort *)
               (val_2 + 0xb + (uint)(byte)(&g_data_00174df0)[(extraout_ECX & 0xffff) * 5] * 2);
      local_18 = 0;
      local_2c = 0;
      room_ptr = (undefined1 *)0x0;
      while( true ) {
        val = (uint)uval_2 * 0x45;
        if (&g_rooms + val < &g_bss_002ddd1c) break;
        if (*(ushort *)(&g_bss_002ddd2b + val) < *(ushort *)(&g_bss_002ddd29 + val)) {
          val_2 = (uint)*(ushort *)(&g_bss_002ddd29 + val) -
                  (uint)*(ushort *)(&g_bss_002ddd2b + val);
          local_18 = local_18 + val_2;
          if (local_2c < val_2) {
            room_ptr = &g_rooms + val;
            local_2c = val_2;
          }
        }
        uval_2 = *(ushort *)(&g_bss_002ddd21 + val);
      }
      if ((room_ptr != (undefined1 *)0x0) &&
         (local_18 = local_18 * *(int *)((int)&g_data_00174df1 + (extraout_ECX & 0xffff) * 5),
         local_18 - local_1c != 0 && local_1c <= local_18)) {
        local_20 = room_ptr;
        local_1c = local_18;
      }
    }
LAB_00020faa:
    uval = extraout_ECX + 1;
  } while( true );
}

/******************************************************************************
 * Function : compturn_update_player_view_state_021008 (Original VA: 0x21008, Ghidra: FUN_00021008)
 * Prototype: void compturn_update_player_view_state_021008(void);
 * Address  : 0x21008 (Size: 78 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> inits_update_player_dungeon_040832
 * Callees  : 3 -> compturn_update_player_dungeon_021056, compturn_process_slabmap_tile_02213c, LbScreenWaitVbi
 ******************************************************************************/
void compturn_update_player_view_state_021008(void)

{
  uint uval;
  uint extraout_ECX;
  byte *byte_ptr;
  
  compturn_process_slabmap_tile_02213c();
  LbScreenWaitVbi();
  uval = 0;
  byte_ptr = &g_players;
  do {
    if (((*byte_ptr & 1) != 0) && (byte_ptr[0x2c] == 1)) {
      compturn_update_player_dungeon_021056();
      uval = extraout_ECX;
    }
    uval = uval + 1;
    byte_ptr = byte_ptr + 0x4ef;
  } while (uval < 5);
  return;
}

/******************************************************************************
 * Function : compturn_update_player_dungeon_021056 (Original VA: 0x21056, Ghidra: FUN_00021056)
 * Prototype: void compturn_update_player_dungeon_021056(void);
 * Address  : 0x21056 (Size: 448 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 3 -> compturn_update_player_view_state_021008, compturn_fn_021515, scrsupp_update_player_view_state_069a12
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void compturn_update_player_dungeon_021056(void)

{
  undefined4 uval;
  int arg_eax;
  int val;
  int loop_i;
  undefined **packet_off;
  uint extraout_ECX;
  int loop_i_2;
  int arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  undefined **val_2;
  uint uval_2;
  uint uval_3;
  undefined **val_3;
  undefined4 *word_ptr_3;
  byte flag;
  undefined4 *local_1c;
  
  flag = 0;
  val = arg_eax * 0x14ca;
  word_ptr = (undefined4 *)(&g_bss_002ccbd3 + val);
  LbScreenWaitVbi();
  loop_i = arg_edx * 0x464;
  *(undefined2 **)((int)&g_bss_002ccbf7 + val) = &g_dungeons + extraout_ECX * 0xa84;
  packet_off = &PTR_s_Build_and_defend_Computer_00175563 + arg_edx * 0x119;
  *(int *)((int)&g_bss_002ccbfb + val) = arg_edx;
  *(undefined4 *)(&g_bss_002ccbeb + val) = *(undefined4 *)(&g_data_0017556f + loop_i);
  *(undefined4 *)(&g_bss_002ccbe7 + val) = *(undefined4 *)(&g_data_0017556b + loop_i);
  *(undefined4 *)(&g_bss_002ccc03 + val) = *(undefined4 *)(&g_data_00175573 + loop_i);
  *(undefined4 *)(&g_bss_002ccbff + val) = *(undefined4 *)(&g_data_00175577 + loop_i);
  uval = *(undefined4 *)(&g_data_0017557b + loop_i);
  *(undefined4 *)(&g_bss_002ccbdf + val) = 1;
  *word_ptr = 2;
  *(undefined4 *)(&g_bss_002ccbf3 + val) = uval;
  uval_2 = 0;
  word_ptr_2 = word_ptr;
  do {
    if (uval_2 == extraout_ECX) {
      *(undefined4 *)((int)word_ptr_2 + 0xa16) = 0x80000000;
    }
    else {
      *(undefined4 *)((int)word_ptr_2 + 0xa16) = 0;
    }
    uval_2 = uval_2 + 1;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 0x18a);
  } while (uval_2 < 5);
  *(undefined4 *)(&g_bss_002ccbef + val) = *(undefined4 *)(&g_data_00175567 + loop_i);
  val = 0;
  val_2 = packet_off;
  local_1c = word_ptr;
  while ((val_2 < (undefined **)(loop_i + 0x1755b3U) && (val_2[8] != (undefined *)0x0))) {
    if ((*(code **)(val_2[8] + 0x1c) == compevnt_fn_01ac13) && (-1 < *(int *)(val_2[8] + 0x14))) {
      for (loop_i_2 = 0;
          (loop_i_2 < 0x12 && (*(uint *)(val_2[8] + 0x14) != (uint)(byte)(&g_data_00174e09)[loop_i_2]));
          loop_i_2 = loop_i_2 + 1) {
      }
      if (loop_i_2 == 0x12) {
        loop_i_2 = -1;
      }
      *(int *)(val_2[8] + 0x14) = loop_i_2;
    }
    word_ptr_2 = (undefined4 *)val_2[8];
    word_ptr_3 = local_1c + 0xe;
    for (loop_i_2 = 0x12; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
      *word_ptr_3 = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
    }
    val = val + 1;
    local_1c[0x19] = val_2[8];
    val_2 = val_2 + 1;
    local_1c = local_1c + 0x12;
  }
  uval_2 = 0;
  *(byte *)(word_ptr + val * 0x12 + 0x1f) = *(byte *)(word_ptr + val * 0x12 + 0x1f) | 2;
  val_2 = packet_off;
  while ((uval_2 < 0xf && (val_2[0x1c] != (undefined *)0x0))) {
    val = uval_2 * 8;
    val_3 = val_2 + 0x1c;
    val_2 = val_2 + 8;
    uval_2 = uval_2 + 1;
    word_ptr_2 = word_ptr + val + 0x188;
    for (loop_i = 8; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *val_3;
      val_3 = val_3 + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
  }
  uval_3 = 0;
  *(byte *)(word_ptr + uval_2 * 8 + 0x189) = *(byte *)(word_ptr + uval_2 * 8 + 0x189) | 2;
  while ((uval_3 < 0xc && (packet_off[0x94] != (undefined *)0x0))) {
    val = uval_3 * 0xb;
    val_2 = packet_off + 0x94;
    packet_off = packet_off + 0xb;
    uval_3 = uval_3 + 1;
    word_ptr_2 = word_ptr + val + 0x200;
    for (loop_i = 0xb; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_2 = *val_2;
      val_2 = val_2 + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
  }
  if (uval_3 < 0xc) {
    word_ptr[uval_3 * 0xb + 0x200] = 0;
  }
  return;
}

/******************************************************************************
 * Function : compturn_update_player_dungeon_021216 (Original VA: 0x21216, Ghidra: FUN_00021216)
 * Prototype: void compturn_update_player_dungeon_021216(void);
 * Address  : 0x21216 (Size: 303 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 1 -> file_update_player_dungeon_02ca74
 * Callees  : 0 -> 
 ******************************************************************************/
void compturn_update_player_dungeon_021216(void)

{
  undefined **loop_i;
  undefined **packet_off;
  byte *byte_ptr;
  undefined *word_ptr;
  uint uval;
  undefined *word_ptr_2;
  int val;
  int local_20;
  uint local_1c;
  
  local_20 = 0;
  word_ptr_2 = &g_bss_002ccbd3;
  byte_ptr = &g_players;
  do {
    *(int *)(word_ptr_2 + 0x24) = (int)&g_dungeons + local_20;
    val = *(int *)(word_ptr_2 + 0x28);
    if (((*byte_ptr & 1) != 0) && (byte_ptr[0x2c] == 1)) {
      packet_off = &PTR_s_Build_and_defend_Computer_00175563 + val * 0x119;
      word_ptr = word_ptr_2;
      for (loop_i = packet_off;
          (loop_i < (undefined **)(val * 0x464 + 0x1755b3) && (loop_i[8] != (undefined *)0x0));
          loop_i = loop_i + 1) {
        *(undefined4 *)(word_ptr + 0x50) = *(undefined4 *)(loop_i[8] + 0x18);
        *(undefined4 *)(word_ptr + 0x54) = *(undefined4 *)(loop_i[8] + 0x1c);
        *(undefined4 *)(word_ptr + 0x58) = *(undefined4 *)(loop_i[8] + 0x20);
        *(undefined4 *)(word_ptr + 0x5c) = *(undefined4 *)(loop_i[8] + 0x24);
        *(undefined4 *)(word_ptr + 0x60) = *(undefined4 *)(loop_i[8] + 0x28);
        word_ptr = word_ptr + 0x48;
      }
      uval = 0;
      for (loop_i = packet_off;
          (uval < 0xf && (val = uval * 0x20, loop_i[0x1c] != (undefined *)0x0));
          loop_i = loop_i + 8) {
        uval = uval + 1;
        *(undefined **)(word_ptr_2 + val + 0x62c) = loop_i[0x1f];
      }
      local_1c = 0;
      for (; (local_1c < 0xc && (packet_off[0x94] != (undefined *)0x0)); packet_off = packet_off + 0xb) {
        *(undefined **)(word_ptr_2 + local_1c * 0x2c + 0x810) = packet_off[0x98];
        *(undefined **)(word_ptr_2 + local_1c * 0x2c + 0x80c) = packet_off[0x97];
        *(undefined **)(word_ptr_2 + local_1c * 0x2c + 0x818) = packet_off[0x9a];
        local_1c = local_1c + 1;
      }
    }
    local_20 = local_20 + 0x1508;
    word_ptr_2 = word_ptr_2 + 0x14ca;
    byte_ptr = byte_ptr + 0x4ef;
  } while (local_20 != 0x6928);
  return;
}

/******************************************************************************
 * Function : compturn_fn_021345 (Original VA: 0x21345, Ghidra: FUN_00021345)
 * Prototype: int compturn_fn_021345(void);
 * Address  : 0x21345 (Size: 36 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x021345
 * Callers  : 1 -> compturn_update_player_view_state_021369
 * Callees  : 0 -> 
 ******************************************************************************/
int compturn_fn_021345(void)

{
  int arg_eax;
  int val;
  
  val = arg_eax + 0x38;
  while( true ) {
    if ((*(byte *)(val + 0x44) & 2) != 0) {
      return 0;
    }
    if (*(code **)(val + 0x1c) == comptask_fn_01b15c) break;
    val = val + 0x48;
  }
  if ((*(byte *)(val + 0x44) & 4) != 0) {
    return val;
  }
  return 0;
}

/******************************************************************************
 * Function : compturn_update_player_view_state_021369 (Original VA: 0x21369, Ghidra: FUN_00021369)
 * Prototype: void compturn_update_player_view_state_021369(void);
 * Address  : 0x21369 (Size: 173 bytes)
 * Module   : compturn.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Accesses per-player PlayerInfo state (stride 0x4ef)
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 3 -> compturn_fn_021345, compturn_process_computer_player_021416, compturn_process_slabmap_tile_02213c
 ******************************************************************************/
void compturn_update_player_view_state_021369(void)

{
  byte *byte_ptr;
  bool flag;
  uint uval;
  uint extraout_ECX;
  byte *byte_ptr_2;
  int val;
  undefined8 uval_2;
  
  flag = false;
  byte_ptr_2 = &g_players;
  uval = 0;
  val = 0;
  do {
    if (((*byte_ptr_2 & 1) != 0) &&
       ((((*byte_ptr_2 & 0x40) != 0 || (((&g_bss_002e0593)[val] & 1) != 0)) && (byte_ptr_2[0x2c] == 1)))) {
      compturn_process_computer_player_021416();
      uval_2 = compturn_fn_021345();
      byte_ptr_2 = (byte *)((ulonglong)uval_2 >> 0x20);
      uval = extraout_ECX;
      if (((int)uval_2 != 0) && (g_data_001991a8 + 5000 < g_game_turn)) {
        flag = true;
        byte_ptr = (byte *)((int)uval_2 + 0x44);
        *byte_ptr = *byte_ptr & 0xfb;
      }
    }
    byte_ptr_2 = byte_ptr_2 + 0x4ef;
    val = val + 0x1508;
    uval = uval + 1;
  } while (uval < 5);
  if (flag) {
    g_data_001991a8 = g_game_turn;
    compturn_process_slabmap_tile_02213c();
  }
  return;
}

/******************************************************************************
 * Function : compturn_process_computer_player_021416 (Original VA: 0x21416, Ghidra: FUN_00021416)
 * Prototype: void compturn_process_computer_player_021416(void);
 * Address  : 0x21416 (Size: 255 bytes)
 * Module   : compturn.cpp [direct_file_string_xref]
 * OrigLine : compturn.cpp lines 231, 239
 * Purpose  : String 'No Process for a computer player'
 * Callers  : 1 -> compturn_update_player_view_state_021369
 * Callees  : 5 -> combtool_fn_018a0c, compevnt_unhandled_event_type_019fb4, compevnt_fn_01a970, comptask_computer_task_state_01b8ff, LbErrorLog
 ******************************************************************************/
void compturn_process_computer_player_021416(void)

{
  uint uval;
  int arg_eax;
  int val;
  int val_2;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  uint *extraout_ECX_02;
  uint *word_ptr;
  uint *extraout_ECX_03;
  uint uval_2;
  
  val = arg_eax * 0x14ca;
  if ((*(int *)(&g_bss_002ccbe7 + val) == 0) || (g_game_turn < *(uint *)(&g_bss_002ccbff + val))) {
    val_2 = 0;
  }
  else {
    val_2 = 1;
  }
  *(int *)(&g_bss_002ccbe3 + val) = val_2;
  if (val_2 != 0) {
    compevnt_unhandled_event_type_019fb4();
    combtool_fn_018a0c();
    uval_2 = extraout_ECX[4];
    word_ptr = extraout_ECX;
    while ((0 < (int)uval_2 && (word_ptr[4] != 0))) {
      if (g_game_turn % word_ptr[6] == 0) {
        comptask_computer_task_state_01b8ff();
        word_ptr = extraout_ECX_03;
      }
      uval = *word_ptr;
      if (uval < 2) {
        if ((uval == 1) && (word_ptr[2] = word_ptr[2] - 1, (int)word_ptr[2] < 1)) {
          word_ptr[2] = word_ptr[1];
          goto LAB_00021478;
        }
      }
      else if (uval < 3) {
LAB_00021478:
        compevnt_fn_01a970();
        word_ptr = extraout_ECX_00;
      }
      else if (uval == 3) {
        if ((short)word_ptr[0x531] == 0) {
          LbErrorLog(); /* LbErrorLog("compturn.cpp", line 231, "No Process for a computer player") */
          *extraout_ECX_02 = 1;
          word_ptr = extraout_ECX_02;
        }
        else {
          (*(code *)word_ptr[(uint)(ushort)word_ptr[0x531] * 0x12 + 0x16])();
          word_ptr = extraout_ECX_01;
        }
      }
      uval_2 = uval_2 - 1;
    }
    if ((int)word_ptr[4] < 0) {
      LbErrorLog(); /* LbErrorLog("compturn.cpp", line 239, "Computer performed more than one task") */
    }
  }
  return;
}

/******************************************************************************
 * Function : compturn_fn_021515 (Original VA: 0x21515, Ghidra: FUN_00021515)
 * Prototype: undefined4 compturn_fn_021515(void);
 * Address  : 0x21515 (Size: 18 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x021515
 * Callers  : 0 -> 
 * Callees  : 1 -> compturn_update_player_dungeon_021056
 ******************************************************************************/
undefined4 compturn_fn_021515(void)

{
  compturn_update_player_dungeon_021056();
  return 1;
}

/******************************************************************************
 * Function : compturn_update_player_dungeon_021527 (Original VA: 0x21527, Ghidra: FUN_00021527)
 * Prototype: undefined4 compturn_update_player_dungeon_021527(void);
 * Address  : 0x21527 (Size: 33 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses per-player Dungeon state (stride 0x1508)
 * Callers  : 4 -> packet_exchange_all_players_packets, process_players_dungeon_control_packet, packet_update_pause_mode_state, update_update_player_dungeon_0dd6c8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 compturn_update_player_dungeon_021527(void)

{
  int arg_eax;
  int dungeon_off;
  
  dungeon_off = arg_eax * 0x1508;
  if (((&g_bss_002e0593)[dungeon_off] & 1) == 0) {
    (&g_bss_002e0593)[dungeon_off] = (&g_bss_002e0593)[dungeon_off] | 1;
  }
  else {
    (&g_bss_002e0593)[dungeon_off] = (&g_bss_002e0593)[dungeon_off] & 0xfe;
  }
  return 1;
}

/******************************************************************************
 * Function : compturn_update_slab_subtile_columns_021548 (Original VA: 0x21548, Ghidra: FUN_00021548)
 * Prototype: int compturn_update_slab_subtile_columns_021548(char param_1);
 * Address  : 0x21548 (Size: 400 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> comptool_update_slab_subtile_columns_01e5de
 * Callees  : 0 -> 
 ******************************************************************************/
int compturn_update_slab_subtile_columns_021548(char param_1)

{
  int slab_coord;
  ushort uval;
  char arg_al;
  char arg_cl;
  byte flag;
  char ch;
  uint arg_edx;
  int val;
  uint arg_ebx;
  int val_2;
  
  if (param_1 == '\0') {
    ch = '\x03';
  }
  else {
    ch = '\x01';
  }
  flag = (arg_cl - ch) + 4;
  uval = 0;
  while( true ) {
    flag = flag & 3;
    if (3 < uval) {
      return -1;
    }
    val = (char)(&g_data_0018b67f)[(uint)flag * 2] * 3 + (arg_ebx & 0xffff);
    val_2 = *(char *)((int)&g_data_0018b67b + (uint)flag * 2 + 3) * 3 + (arg_edx & 0xffff);
    if (((((&g_data_001921d4)[(uint)(byte)(&g_slabmap_base)[(val_2 / 3 + (val / 3) * 0x55) * 6] * 0x16]
           != '\0') && ((byte)(&g_slabmap_base)[(val_2 / 3 + (val / 3) * 0x55) * 6] != 0x34)) &&
        ((slab_coord = (val * 0x100 + val_2) * 5, (*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) == 0
         || (((*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) != 0 &&
             ((uint)((&g_slabmap)[((&g_subtile_to_slab_lut)[val] * 0x55 + (&g_subtile_to_slab_lut)[val_2]) * 6] &
                    7) == (int)arg_al)))))) ||
       ((((&g_data_001921c6)
          [(uint)(byte)(&g_slabmap_base)
                       [((int)((arg_edx & 0xffff) +
                              *(char *)((int)&g_data_0018b67b + (uint)flag * 2 + 3) * 3) / 3 +
                        ((int)((arg_ebx & 0xffff) + (char)(&g_data_0018b67f)[(uint)flag * 2] * 3) /
                        3) * 0x55) * 6] * 0x16] & 0x29) == 0 &&
        ((byte)(&g_slabmap_base)
               [((int)((arg_edx & 0xffff) + *(char *)((int)&g_data_0018b67b + (uint)flag * 2 + 3) * 3)
                 / 3 + ((int)((arg_ebx & 0xffff) + (char)(&g_data_0018b67f)[(uint)flag * 2] * 3) / 3
                       ) * 0x55) * 6] != 0xc)))) break;
    flag = flag + ch;
    uval = uval + 1;
  }
  return (arg_edx & 0xffff) + *(char *)((int)&g_data_0018b67b + (uint)flag * 2 + 3) * 3 +
         ((char)(&g_data_0018b67f)[(uint)flag * 2] * 3 + (arg_ebx & 0xffff)) * 0x100;
}

/******************************************************************************
 * Function : compturn_update_slab_subtile_columns_0216d8 (Original VA: 0x216d8, Ghidra: FUN_000216d8)
 * Prototype: ushort compturn_update_slab_subtile_columns_0216d8(ushort param_1,char param_2,ushort param_3);
 * Address  : 0x216d8 (Size: 2660 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> comptool_update_slab_subtile_columns_01e5de
 * Callees  : 2 -> bflib_system_io_fn_0e66ec, bflib_system_io_fn_0e69fc
 ******************************************************************************/
ushort compturn_update_slab_subtile_columns_0216d8(ushort param_1,char param_2,ushort param_3)

{
  uint rand_seed;
  int slab_coord;
  ushort uval;
  byte flag;
  short short_val;
  short short_val_2;
  int arg_eax;
  int val;
  uint uval_2;
  int val_2;
  ushort arg_cx;
  ushort extraout_CX;
  ushort uval_3;
  uint extraout_ECX;
  ushort arg_dx;
  ushort extraout_DX;
  int slab_coord_2;
  ushort arg_bx;
  ushort uval_4;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint local_24;
  char local_14;
  char local_10;
  
  local_34 = (byte)(param_2 + 1) & 0xffffff03;
  bflib_system_io_fn_0e69fc();
  bflib_system_io_fn_0e69fc();
  short_val = 0x96;
  val = bflib_system_io_fn_0e69fc();
  local_3c = val - 1;
  local_30 = (byte)(param_2 + 3) & 0xffffff03;
  bflib_system_io_fn_0e69fc();
  bflib_system_io_fn_0e69fc();
  local_14 = '\0';
  val = bflib_system_io_fn_0e69fc();
  local_24 = val - 1;
  local_10 = '\0';
  uval_4 = arg_dx;
  while ((short_val != 0 && ((local_14 != '\x02' || (local_10 != '\x02'))))) {
    if (local_14 != '\x02') {
      uval_2 = bflib_system_io_fn_0e66ec();
      val = (int)((uval_2 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
      bflib_system_io_fn_0e69fc();
      bflib_system_io_fn_0e69fc();
      val_2 = bflib_system_io_fn_0e69fc();
      if ((int)(local_3c & 0xffff) < val_2) {
LAB_00021a99:
        if (local_14 == '\x01') {
          local_14 = '\x02';
        }
        else {
          flag = (char)local_34 + 3;
          uval_3 = 0;
          while( true ) {
            uval_2 = (uint)flag;
            if (3 < uval_3) break;
            val = (uval_2 & 0xff03) * 2;
            val_2 = (uint)arg_bx + (char)(&g_data_0018b67f)[val] * 3;
            val = *(char *)((int)&g_data_0018b67b + val + 3) * 3 + (uint)arg_dx;
            if (((((&g_data_001921d4)
                   [(uint)(byte)(&g_slabmap_base)[(val / 3 + (val_2 / 3) * 0x55) * 6] * 0x16] !=
                   '\0') && ((byte)(&g_slabmap_base)[(val / 3 + (val_2 / 3) * 0x55) * 6] != 0x34))
                && ((slab_coord_2 = (val_2 * 0x100 + val) * 5,
                    (*(byte *)((int)&g_map_subtiles + slab_coord_2) & 0x20) == 0 ||
                    (((*(byte *)((int)&g_map_subtiles + slab_coord_2) & 0x20) != 0 &&
                     (((&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6]
                      & 7) == param_3)))))) ||
               ((val = (uval_2 & 0xff03) * 2,
                ((&g_data_001921c6)
                 [(uint)(byte)(&g_slabmap_base)
                              [((int)(*(char *)((int)&g_data_0018b67b + val + 3) * 3 + (uint)arg_dx) /
                                3 + ((int)((uint)arg_bx + (char)(&g_data_0018b67f)[val] * 3) / 3) *
                                    0x55) * 6] * 0x16] & 0x29) == 0 &&
                ((byte)(&g_slabmap_base)
                       [((int)(*(char *)((int)&g_data_0018b67b + val + 3) * 3 + (uint)arg_dx) / 3 +
                        ((int)((uint)arg_bx + (char)(&g_data_0018b67f)[val] * 3) / 3) * 0x55) * 6]
                 != 0xc)))) {
              arg_dx = arg_dx + *(char *)((int)&g_data_0018b67b + (uval_2 & 0xff03) * 2 + 3) * 3;
              arg_bx = arg_bx + (char)(&g_data_0018b67f)[(uval_2 & 0xff03) * 2] * 3;
              local_34 = uval_2 & 0xffffff03;
              break;
            }
            flag = (char)(uval_2 & 0xffffff03) + 1;
            uval_3 = uval_3 + 1;
          }
        }
      }
      else {
        val_2 = (uint)arg_bx + (char)(&g_data_0018b67f)[val * 2] * 3;
        slab_coord_2 = *(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3 + (uint)arg_dx;
        if (((((&g_data_001921d4)
               [(uint)(byte)(&g_slabmap_base)[(slab_coord_2 / 3 + (val_2 / 3) * 0x55) * 6] * 0x16] == '\0')
             || ((byte)(&g_slabmap_base)[(slab_coord_2 / 3 + (val_2 / 3) * 0x55) * 6] == 0x34)) ||
            ((slab_coord = (val_2 * 0x100 + slab_coord_2) * 5,
             (*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) != 0 &&
             (((*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) == 0 ||
              (param_3 !=
               ((&g_slabmap)[((&g_subtile_to_slab_lut)[slab_coord_2] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6] & 7))
              ))))) &&
           ((((&g_data_001921c6)
              [(uint)(byte)(&g_slabmap_base)
                           [((int)(*(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3 + (uint)arg_dx)
                             / 3 + ((int)((uint)arg_bx + (char)(&g_data_0018b67f)[val * 2] * 3) / 3
                                   ) * 0x55) * 6] * 0x16] & 0x29) != 0 ||
            ((byte)(&g_slabmap_base)
                   [((int)(*(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3 + (uint)arg_dx) / 3 +
                    ((int)((uint)arg_bx + (char)(&g_data_0018b67f)[val * 2] * 3) / 3) * 0x55) * 6]
             == 0xc)))) goto LAB_00021a99;
        arg_dx = arg_dx + *(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3;
        arg_bx = arg_bx + (char)(&g_data_0018b67f)[val * 2] * 3;
        bflib_system_io_fn_0e69fc();
        bflib_system_io_fn_0e69fc();
        local_3c = bflib_system_io_fn_0e69fc();
        local_14 = '\x01';
      }
      if ((arg_dx == arg_cx) && (arg_bx == param_1)) goto LAB_00021c54;
    }
    if (local_10 != '\x02') {
      uval_2 = bflib_system_io_fn_0e66ec();
      val = (int)((uval_2 & 0xffff) % 0x800 + 0x100 & 0x7ff) >> 9;
      bflib_system_io_fn_0e69fc();
      bflib_system_io_fn_0e69fc();
      val_2 = bflib_system_io_fn_0e69fc();
      uval_3 = (ushort)extraout_ECX;
      if ((int)(local_24 & 0xffff) < val_2) {
LAB_00021ec0:
        if (local_10 == '\x01') {
          local_10 = '\x02';
        }
        else {
          flag = (char)local_30 + 1;
          uval = 0;
          while( true ) {
            uval_2 = (uint)flag;
            if (3 < uval) break;
            val = (uval_2 & 0xff03) * 2;
            val_2 = (extraout_ECX & 0xffff) + (char)(&g_data_0018b67f)[val] * 3;
            val = *(char *)((int)&g_data_0018b67b + val + 3) * 3 + (uint)uval_4;
            if (((((&g_data_001921d4)
                   [(uint)(byte)(&g_slabmap_base)[(val / 3 + (val_2 / 3) * 0x55) * 6] * 0x16] !=
                   '\0') && ((byte)(&g_slabmap_base)[(val / 3 + (val_2 / 3) * 0x55) * 6] != 0x34))
                && ((slab_coord_2 = (val_2 * 0x100 + val) * 5,
                    (*(byte *)((int)&g_map_subtiles + slab_coord_2) & 0x20) == 0 ||
                    (((*(byte *)((int)&g_map_subtiles + slab_coord_2) & 0x20) != 0 &&
                     (((&g_slabmap)[((&g_subtile_to_slab_lut)[val] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6]
                      & 7) == param_3)))))) ||
               ((val = (uval_2 & 0xff03) * 2,
                ((&g_data_001921c6)
                 [(uint)(byte)(&g_slabmap_base)
                              [((int)((uint)uval_4 + *(char *)((int)&g_data_0018b67b + val + 3) * 3)
                                / 3 + ((int)((extraout_ECX & 0xffff) +
                                            (char)(&g_data_0018b67f)[val] * 3) / 3) * 0x55) * 6] *
                  0x16] & 0x29) == 0 &&
                ((byte)(&g_slabmap_base)
                       [((int)((uint)uval_4 + *(char *)((int)&g_data_0018b67b + val + 3) * 3) / 3 +
                        ((int)((extraout_ECX & 0xffff) + (char)(&g_data_0018b67f)[val] * 3) / 3) *
                        0x55) * 6] != 0xc)))) {
              uval_4 = uval_4 + *(char *)((int)&g_data_0018b67b + (uval_2 & 0xff03) * 2 + 3) * 3;
              uval_3 = uval_3 + (char)(&g_data_0018b67f)[(uval_2 & 0xff03) * 2] * 3;
              local_30 = uval_2 & 0xffffff03;
              break;
            }
            flag = (char)(uval_2 & 0xffffff03) + 3;
            uval = uval + 1;
          }
        }
      }
      else {
        val_2 = (char)(&g_data_0018b67f)[val * 2] * 3 + (extraout_ECX & 0xffff);
        slab_coord_2 = *(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3 + (uint)uval_4;
        if (((((&g_data_001921d4)
               [(uint)(byte)(&g_slabmap_base)[(slab_coord_2 / 3 + (val_2 / 3) * 0x55) * 6] * 0x16] == '\0')
             || ((byte)(&g_slabmap_base)[(slab_coord_2 / 3 + (val_2 / 3) * 0x55) * 6] == 0x34)) ||
            ((slab_coord = (val_2 * 0x100 + slab_coord_2) * 5,
             (*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) != 0 &&
             (((*(byte *)((int)&g_map_subtiles + slab_coord) & 0x20) == 0 ||
              (param_3 !=
               ((&g_slabmap)[((&g_subtile_to_slab_lut)[slab_coord_2] + (&g_subtile_to_slab_lut)[val_2] * 0x55) * 6] & 7))
              ))))) &&
           ((((&g_data_001921c6)
              [(uint)(byte)(&g_slabmap_base)
                           [((int)((uint)uval_4 + *(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3)
                             / 3 + ((int)((extraout_ECX & 0xffff) +
                                         (char)(&g_data_0018b67f)[val * 2] * 3) / 3) * 0x55) * 6] *
               0x16] & 0x29) != 0 ||
            ((byte)(&g_slabmap_base)
                   [((int)((uint)uval_4 + *(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3) / 3 +
                    ((int)((extraout_ECX & 0xffff) + (char)(&g_data_0018b67f)[val * 2] * 3) / 3) *
                    0x55) * 6] == 0xc)))) goto LAB_00021ec0;
        uval_4 = uval_4 + *(char *)((int)&g_data_0018b67b + val * 2 + 3) * 3;
        bflib_system_io_fn_0e69fc();
        bflib_system_io_fn_0e69fc();
        local_24 = bflib_system_io_fn_0e69fc();
        local_10 = '\x01';
        uval_3 = extraout_CX;
      }
      if ((uval_4 == arg_cx) && (uval_3 == param_1)) goto LAB_00022087;
    }
    short_val = short_val + -1;
  }
  if ((*(char *)(arg_eax + 0x1c) == '\0') || (*(char *)(arg_eax + 0x1c) == '\x01')) {
    uval_4 = (ushort)*(byte *)(arg_eax + 0x1c);
  }
  else {
    bflib_system_io_fn_0e69fc();
    bflib_system_io_fn_0e69fc();
    short_val = bflib_system_io_fn_0e69fc();
    short_val_2 = bflib_system_io_fn_0e69fc();
    if (extraout_DX < (ushort)(short_val_2 + short_val)) {
LAB_00021c54:
      uval_4 = 1;
    }
    else if ((ushort)(short_val_2 + short_val) < extraout_DX) {
LAB_00022087:
      uval_4 = 0;
    }
    else {
      g_action_random_seed = g_action_random_seed * 0x24a1 + 0x24df;
      uval_2 = g_action_random_seed >> 0xd;
      rand_seed = g_action_random_seed * 0x80000;
      g_action_random_seed._0_2_ = (ushort)uval_2;
      uval_4 = (ushort)g_action_random_seed & 1;
      g_action_random_seed = uval_2 | rand_seed;
    }
  }
  return uval_4;
}

/******************************************************************************
 * Function : compturn_process_slabmap_tile_02213c (Original VA: 0x2213c, Ghidra: FUN_0002213c)
 * Prototype: void compturn_process_slabmap_tile_02213c(void);
 * Address  : 0x2213c (Size: 725 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 2 -> compturn_update_player_view_state_021008, compturn_update_player_view_state_021369
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void compturn_process_slabmap_tile_02213c(void)

{
  char *str_ptr;
  int val;
  undefined1 *word_ptr;
  int val_2;
  int loop_i;
  uint uval;
  undefined1 uval_2;
  byte *byte_ptr;
  undefined1 *word_ptr_2;
  byte *byte_ptr_2;
  char *str_ptr_2;
  int val_3;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_1c;
  
  LbScreenWaitVbi();
  word_ptr = g_scratch_work_buf;
  str_ptr = g_scratch_work_buf + 0x1c39;
  val_2 = 0;
  word_ptr_2 = g_scratch_work_buf;
  do {
    if (((&g_slabmap_base)[val_2] == '\x01') || ((&g_slabmap_base)[val_2] == '4')) {
      uval_2 = 0;
    }
    else {
      uval_2 = 1;
    }
    val_2 = val_2 + 6;
    *word_ptr_2 = uval_2;
    word_ptr_2 = word_ptr_2 + 1;
  } while (val_2 != 0xa956);
  local_24 = 0;
  local_48 = 0;
  local_30 = 0;
  do {
    local_40 = 0;
    byte_ptr = word_ptr + local_30;
    do {
      if (((*byte_ptr & 1) == 0) && ((*byte_ptr & 2) == 0)) {
        local_58 = 0;
        local_34 = 0;
        local_28 = 0;
        local_3c = 0;
        local_4c = local_40;
        local_1c = local_48;
        uval = 0;
        *byte_ptr = *byte_ptr | 2;
        local_54 = 0;
        local_50 = 0;
        str_ptr_2 = str_ptr;
        do {
          local_58 = local_58 + local_4c;
          local_34 = local_34 + local_1c;
          val_2 = local_4c + local_1c * 0x55;
          local_28 = local_28 + 1;
          if ((&g_slabmap_base)[val_2 * 6] == '4') {
            local_54 = local_54 + 1;
          }
          else {
            local_50 = local_50 + 1;
            if (((word_ptr[val_2 + -1] & 1) == 0) && ((word_ptr[val_2 + -1] & 2) == 0)) {
              word_ptr[val_2 + -1] = word_ptr[val_2 + -1] | 2;
              val_2 = uval * 2;
              str_ptr[val_2] = (char)local_4c + -1;
              uval = uval + 1;
              (str_ptr + val_2)[1] = (char)local_1c;
            }
            val_2 = local_1c * 0x55 + local_4c;
            if (((word_ptr[val_2 + 1] & 1) == 0) && ((word_ptr[val_2 + 1] & 2) == 0)) {
              word_ptr[val_2 + 1] = word_ptr[val_2 + 1] | 2;
              val_2 = uval * 2;
              str_ptr[val_2] = (char)local_4c + '\x01';
              uval = uval + 1;
              (str_ptr + val_2)[1] = (char)local_1c;
            }
            byte_ptr_2 = word_ptr + (local_1c + -1) * 0x55 + local_4c;
            if (((*byte_ptr_2 & 1) == 0) && ((*byte_ptr_2 & 2) == 0)) {
              *byte_ptr_2 = *byte_ptr_2 | 2;
              val_2 = uval * 2;
              str_ptr[val_2] = (char)local_4c;
              uval = uval + 1;
              (str_ptr + val_2)[1] = (char)local_1c + -1;
            }
            byte_ptr_2 = word_ptr + (local_1c + 1) * 0x55 + local_4c;
            if (((*byte_ptr_2 & 1) == 0) && ((*byte_ptr_2 & 2) == 0)) {
              *byte_ptr_2 = *byte_ptr_2 | 2;
              val_2 = uval * 2;
              str_ptr[val_2] = (char)local_4c;
              uval = uval + 1;
              (str_ptr + val_2)[1] = (char)local_1c + '\x01';
            }
          }
          local_4c = (int)*str_ptr_2;
          local_3c = local_3c + 1;
          local_1c = (int)str_ptr_2[1];
          str_ptr_2 = str_ptr_2 + 2;
        } while (local_3c <= uval);
        if (local_24 < 0x28) {
          val_2 = local_24;
          local_24 = local_24 + 1;
        }
        else if (local_54 == 0) {
          val_3 = 0;
          for (loop_i = 0;
              (val_2 = -1, loop_i < 0x460 &&
              ((*(int *)((int)&g_bss_002eb562 + loop_i) != 0 ||
               (val_2 = val_3, (int)local_50 <= (int)(uint)*(ushort *)((int)&g_bss_002eb55c + loop_i))
               ))); loop_i = loop_i + 0x1c) {
            val_3 = val_3 + 1;
          }
        }
        else {
          val_2 = -1;
          local_2c = local_50;
          val_3 = 0;
          local_38 = local_54;
          loop_i = 0;
          do {
            val = *(int *)((int)&g_bss_002eb562 + loop_i);
            if (val == local_38) {
              if ((int)(uint)*(ushort *)((int)&g_bss_002eb55c + loop_i) < (int)local_2c) {
                val_2 = val_3;
                local_2c = (uint)*(ushort *)((int)&g_bss_002eb55c + loop_i);
              }
            }
            else if (val < local_38) {
              local_2c = (uint)*(ushort *)((int)&g_bss_002eb55c + loop_i);
              val_2 = val_3;
              local_38 = val;
            }
            val_3 = val_3 + 1;
            loop_i = loop_i + 0x1c;
          } while (val_3 < 0x28);
        }
        if (val_2 != -1) {
          (&g_bss_002eb558)[val_2 * 0xe] = (short)(local_58 / local_28) * 3 + 1;
          (&g_bss_002eb55e)[val_2 * 0xe] = 0;
          (&g_bss_002eb552)[val_2 * 0x1c] = (&g_bss_002eb552)[val_2 * 0x1c] | 1;
          (&g_bss_002eb55a)[val_2 * 0xe] = (short)(local_34 / local_28) * 3 + 1;
          (&g_bss_002eb55c)[val_2 * 0xe] = (short)local_50;
          (&g_bss_002eb560)[val_2 * 0xe] = (short)local_50;
          (&g_bss_002eb562)[val_2 * 7] = local_54;
        }
      }
      local_40 = local_40 + 1;
      byte_ptr = byte_ptr + 1;
    } while (local_40 < 0x55);
    local_48 = local_48 + 1;
    local_30 = local_30 + 0x55;
  } while (local_48 < 0x55);
  return;
}

/******************************************************************************
 * Function : compturn_fn_022414 (Original VA: 0x22414, Ghidra: FUN_00022414)
 * Prototype: void compturn_fn_022414(void);
 * Address  : 0x22414 (Size: 71 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x022414
 * Callers  : 1 -> compturn_fn_02245b
 * Callees  : 0 -> 
 ******************************************************************************/
void compturn_fn_022414(void)

{
  int val;
  int *int_ptr;
  int *arg_eax;
  int *arg_ecx;
  int *arg_edx;
  int *arg_ebx;
  
  val = *arg_eax;
  if (val == 0) {
    int_ptr = (int *)cpuid_basic_info(0);
  }
  else if (val == 1) {
    int_ptr = (int *)cpuid_Version_info(1);
  }
  else if (val == 2) {
    int_ptr = (int *)cpuid_cache_tlb_info(2);
  }
  else if (val == 3) {
    int_ptr = (int *)cpuid_serial_info(3);
  }
  else if (val == 4) {
    int_ptr = (int *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (val == 5) {
    int_ptr = (int *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (val == 6) {
    int_ptr = (int *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (val == 7) {
    int_ptr = (int *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (val == 9) {
    int_ptr = (int *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (val == 10) {
    int_ptr = (int *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (val == 0xb) {
    int_ptr = (int *)cpuid_Extended_Topology_info(0xb);
  }
  else if (val == 0xd) {
    int_ptr = (int *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (val == 0xf) {
    int_ptr = (int *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (val == -0x7ffffffe) {
    int_ptr = (int *)cpuid_brand_part1_info(0x80000002);
  }
  else if (val == -0x7ffffffd) {
    int_ptr = (int *)cpuid_brand_part2_info(0x80000003);
  }
  else if (val == -0x7ffffffc) {
    int_ptr = (int *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    int_ptr = (int *)cpuid(val);
  }
  g_data_001991ac = int_ptr[1];
  g_data_001991b4 = int_ptr[2];
  g_data_001991b0 = int_ptr[3];
  *arg_eax = *int_ptr;
  *arg_edx = g_data_001991ac;
  *arg_ebx = g_data_001991b0;
  *arg_ecx = g_data_001991b4;
  return;
}

/******************************************************************************
 * Function : compturn_fn_02245b (Original VA: 0x2245b, Ghidra: FUN_0002245b)
 * Prototype: void compturn_fn_02245b(void);
 * Address  : 0x2245b (Size: 208 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x02245b
 * Callers  : 2 -> evil_settings_dat_029738, setup_verify_cdrom_installation
 * Callees  : 1 -> compturn_fn_022414
 ******************************************************************************/
void compturn_fn_02245b(void)

{
  int *arg_eax;
  uint uval;
  int val;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uval_2;
  int val_2;
  int local_20;
  int local_1c;
  int local_18;
  
  val_2 = 0xd;
  val = (int)arg_eax + 0xd;
  while( true ) {
    if (val_2 + -1 < 0) break;
    *(undefined1 *)(val + 0xb) = *(undefined1 *)(val_2 + 0x17943f);
    val_2 = val_2 + -1;
    val = val + -1;
  }
  arg_eax[2] = 0;
  *arg_eax = 0;
  arg_eax[1] = 0;
  uval_2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
          | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uval = uval_2 ^ 0x200000;
  if (((uint)((uval & 0x4000) != 0) * 0x4000 | (uint)((uval & 0x200) != 0) * 0x200 |
       (uint)((uval & 0x100) != 0) * 0x100 | (uint)((uval & 0x40) != 0) * 0x40 |
       (uint)((uval & 0x10) != 0) * 0x10 | (uint)((uval & 4) != 0) * 4 |
       (uint)((uval & 0x200000) != 0) * 0x200000 | (uint)((uval & 0x40000) != 0) * 0x40000) !=
      uval_2) {
    compturn_fn_022414(0);
    arg_eax[3] = local_20;
    arg_eax[4] = local_18;
    arg_eax[5] = local_1c;
    val_2 = 1;
    compturn_fn_022414();
    *arg_eax = val_2;
    arg_eax[1] = local_18;
    if (*arg_eax == 0) {
      uval = 4;
    }
    else {
      uval = *arg_eax >> 8 & 0xf;
    }
    if ((4 < uval) && ((*(byte *)(arg_eax + 1) & 0x10) != 0)) {
      arg_eax[2] = 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : compturn_fn_02252b (Original VA: 0x2252b, Ghidra: FUN_0002252b)
 * Prototype: undefined4 compturn_fn_02252b(void);
 * Address  : 0x2252b (Size: 146 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x02252b
 * Callers  : 0 -> 
 * Callees  : 2 -> bflib_system_io_fn_0e8d4a, bflib_system_io_fn_0e8d50
 ******************************************************************************/
undefined4 compturn_fn_02252b(void)

{
  int arg_eax;
  undefined4 uval;
  int val;
  int val_2;
  uint uval_2;
  int extraout_ECX;
  longdouble val_3;
  
  if (*(int *)(arg_eax + 8) == 0) {
    uval = 0;
  }
  else {
    val = bflib_system_io_fn_0e8d4a();
    do {
      val_2 = bflib_system_io_fn_0e8d4a();
      if (*(int *)(arg_eax + 8) != 0) {
        rdtsc();
      }
    } while (val_2 == val);
    do {
      uval_2 = bflib_system_io_fn_0e8d4a();
      if (*(int *)(arg_eax + 8) != 0) {
        rdtsc();
      }
    } while (uval_2 < val_2 + 0x65U);
    val_3 = (longdouble)bflib_system_io_fn_0e8d50((uval_2 - extraout_ECX) * 1000,0);
    uval = (undefined4)(longlong)ROUND(val_3);
  }
  return uval;
}

/******************************************************************************
 * Function : compturn_fn_0225c0 (Original VA: 0x225c0, Ghidra: FUN_000225c0)
 * Prototype: undefined8 compturn_fn_0225c0(void);
 * Address  : 0x225c0 (Size: 41 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x0225c0
 * Callers  : 1 -> watcom_crt_fn_10ef10
 * Callees  : 1 -> ceiling_illegal_ceiling_step_value_07c1f0
 ******************************************************************************/
undefined8 compturn_fn_0225c0(void)

{
  undefined4 extraout_ECX;
  undefined4 arg_edx;
  
  ceiling_illegal_ceiling_step_value_07c1f0();
  return CONCAT44(arg_edx,extraout_ECX);
}

/******************************************************************************
 * Function : compturn_fn_0225fc (Original VA: 0x225fc, Ghidra: FUN_000225fc)
 * Prototype: longlong compturn_fn_0225fc(void);
 * Address  : 0x225fc (Size: 100 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x0225fc
 * Callers  : 0 -> 
 * Callees  : 6 -> compturn_process_map_subtile_022660, compturn_fn_0228b1, door_fn_022905, door_fn_022933, door_fn_0229e4, door_process_slabmap_tile_022f53
 ******************************************************************************/
longlong compturn_fn_0225fc(void)

{
  char ch;
  uint arg_edx;
  int extraout_EDX;
  
  ch = door_process_slabmap_tile_022f53();
  if ((ch != '\0') && (-1 < *(short *)(extraout_EDX + 0x5e))) {
    switch(*(undefined1 *)(extraout_EDX + 7)) {
    case 1:
      compturn_fn_0228b1();
      break;
    case 2:
      door_fn_022905();
      break;
    case 3:
      door_fn_0229e4();
      break;
    case 4:
      door_fn_022933();
    }
    return CONCAT44(arg_edx,1);
  }
  *(undefined2 *)(extraout_EDX + 0x5e) = 0xffff;
  compturn_process_map_subtile_022660();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : compturn_process_map_subtile_022660 (Original VA: 0x22660, Ghidra: FUN_00022660)
 * Prototype: undefined8 compturn_process_map_subtile_022660(void);
 * Address  : 0x22660 (Size: 581 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 3 -> compturn_fn_0225fc, process_players_dungeon_command_packet, object_process_slabmap_tile_0c4b0c
 * Callees  : 10 -> effect_allocate_light_effect_024998, effect_fn_025fbb, sound_fn_06e538, structs_update_creature_control_072af4, ceiling_process_map_subtile_07c590, creature_update_creature_and_thing_082cac, creature_process_thing_entity_0859fc, slab_attempt_place_animating_slab_0d7688 ...
 ******************************************************************************/
undefined8 compturn_process_map_subtile_022660(void)

{
  uint thing_ptr;
  int arg_eax;
  uint thing_ptr_2;
  int val;
  int val_2;
  int val_3;
  undefined4 arg_edx;
  int *int_ptr;
  byte flag;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 local_28;
  undefined2 auStack_24 [2];
  uint local_20;
  uint local_1c;
  
  flag = 0;
  int_ptr = &local_2c;
  local_20 = (uint)*(byte *)(arg_eax + 0xe);
  local_1c = (uint)*(byte *)(arg_eax + 0x10);
  thing_ptr = (&g_thing_ptrs)
          [(*(uint *)((int)&g_map_subtiles + (local_1c * 0x100 + local_20) * 5 + 1) & 0x3fffff) >> 0xb
          ];
  do {
    thing_ptr_2 = thing_ptr;
    local_2c = arg_eax;
    if (thing_ptr_2 <= g_thing_ptrs) goto LAB_000226c7;
    thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
  } while ((*(char *)(thing_ptr_2 + 0x1f) != '\x01') || (*(char *)(thing_ptr_2 + 0x1a) != ',')); /* thing->class_id */
  uStack_30 = 0x226c7;
  structs_update_creature_control_072af4();
LAB_000226c7:
  uStack_30 = 0x226e2;
  ceiling_process_map_subtile_07c590();
  uStack_30 = 0x226f9;
  effect_fn_025fbb();
  if (*(short *)(local_2c + 0x13) == 0) {
    uStack_30 = 0x2273c;
    effect_fn_025fbb();
  }
  else {
    uStack_30 = 0x22718;
    effect_fn_025fbb();
  }
  uStack_30 = 0x22752;
  effect_fn_025fbb();
  uStack_30 = 0x22769;
  val = effect_allocate_light_effect_024998();
  if (val != 0) {
    g_unsynced_random_seed = g_unsynced_random_seed * 0x24a1 + 0x24df;
    g_unsynced_random_seed = g_unsynced_random_seed >> 0xd | g_unsynced_random_seed * 0x80000;
    uStack_30 = 0x100;
    uStack_34 = 3;
    uStack_38 = 0;
    int_ptr = &uStack_3c;
    uStack_3c = 3;
    sound_fn_06e538();
  }
  if ((int)*(char *)(local_2c + 6) != (uint)g_neutral_player_number) {
    *(short *)(&g_bss_002e0ec4 + *(char *)(local_2c + 6) * 0x1508) =
         *(short *)(&g_bss_002e0ec4 + *(char *)(local_2c + 6) * 0x1508) + -1;
    *(int *)(&g_bss_002e0ece + *(char *)(local_2c + 6) * 0x1508) =
         *(int *)(&g_bss_002e0ece + *(char *)(local_2c + 6) * 0x1508) + 1;
  }
  local_28 = *(undefined4 *)(local_2c + 0xd);
  auStack_24[(uint)flag * -4] = *(undefined2 *)(local_2c + 0x11 + (uint)flag * -8);
  *(undefined4 *)((int)int_ptr + -4) = 0x22806;
  structs_update_creature_control_072af4();
  *(undefined4 *)((int)int_ptr + -4) = 0;
  *(undefined4 *)((int)int_ptr + -8) = 0x2283a;
  slab_attempt_place_animating_slab_0d7688();
  *(undefined4 *)((int)int_ptr + -8) = 0x2284f;
  slab_process_slabmap_tile_0da6fc();
  val = 0;
  do {
    if (((&g_players)[val] & 1) != 0) {
      *(undefined4 *)((int)int_ptr + -8) = 0x2287f;
      val_2 = creature_process_thing_entity_0859fc();
      *(undefined4 *)((int)int_ptr + -8) = 0x22890;
      val_3 = update_fn_0dc440();
      if (val_3 <= val_2 * 0x300) {
        *(undefined4 *)((int)int_ptr + -8) = 0x228a3;
        creature_update_creature_and_thing_082cac();
      }
    }
    val = val + 0x4ef;
  } while (val != 0x18ab);
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : compturn_fn_0228a5 (Original VA: 0x228a5, Ghidra: FUN_000228a5)
 * Prototype: undefined8 compturn_fn_0228a5(void);
 * Address  : 0x228a5 (Size: 12 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x0228a5
 * Callers  : 1 -> door_fn_022933
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 compturn_fn_0228a5(void)

{
  int unaff_EBP;
  
  return CONCAT44(*(undefined4 *)(unaff_EBP + 0xc),1);
}

/******************************************************************************
 * Function : compturn_fn_0228b1 (Original VA: 0x228b1, Ghidra: FUN_000228b1)
 * Prototype: longlong compturn_fn_0228b1(void);
 * Address  : 0x228b1 (Size: 84 bytes)
 * Module   : compturn.cpp [address_order_boundary_interpolation]
 * Purpose  : Module compturn.cpp procedure @ 0x0228b1
 * Callers  : 1 -> compturn_fn_0225fc
 * Callees  : 2 -> door_process_map_subtile_022a72, sound_fn_06e538
 ******************************************************************************/
longlong compturn_fn_0228b1(void)

{
  int arg_eax;
  undefined4 *word_ptr;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  word_ptr = (undefined4 *)&stack0xfffffff0;
  if (*(char *)(arg_eax + 0x18) != '\0') {
    *(undefined1 *)(arg_eax + 0x15) = 0;
  }
  uStack_14 = 0x228c8;
  iStack_1c = door_process_map_subtile_022a72();
  if (iStack_1c == 0) {
    if (*(char *)(arg_eax + 0x15) == '\0') {
      uStack_14 = 0x100;
      uStack_18 = 2;
      word_ptr = &uStack_20;
      uStack_20 = 3;
      *(undefined1 *)(arg_eax + 7) = 4;
      sound_fn_06e538();
    }
    else {
      *(char *)(arg_eax + 0x15) = *(char *)(arg_eax + 0x15) + -1;
    }
  }
  else {
    *(undefined1 *)(arg_eax + 0x15) = 10;
    word_ptr = (undefined4 *)&stack0xfffffff0;
  }
  return (ulonglong)*(uint *)((int)word_ptr + 4) << 0x20;
}

