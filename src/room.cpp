/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: room.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 102
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : room_process_dungeon_room_0c6374 (Original VA: 0xc6374, Ghidra: FUN_000c6374)
 * Prototype: void room_process_dungeon_room_0c6374(void);
 * Address  : 0xc6374 (Size: 288 bytes)
 * Module   : room.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 2 -> effect_fn_025f6f, room_how_room_exist_slabs_0c8654
 ******************************************************************************/
void room_process_dungeon_room_0c6374(void)

{
  int val;
  ushort dungeon_off;
  ushort room_off;
  int val_2;
  uint uval;
  int arg_eax;
  uint uval_2;
  int val_3;
  
  dungeon_off = *(ushort *)(&g_bss_002e05a2 + arg_eax * 0x1508);
  room_off = *(ushort *)(&g_bss_002ddd52 + (uint)dungeon_off * 0x45);
  while (uval_2 = (uint)room_off, uval_2 != 0) {
    room_off = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
    uval = (uval_2 % 0x55) * 3;
    val_3 = (uval_2 / 0x55) * 3;
    if (*(int *)(&g_rooms + (uint)dungeon_off * 0x45) >> 0x18 != (uint)g_neutral_player_number) {
      *(short *)(&g_bss_002e105e + (*(int *)(&g_rooms + (uint)dungeon_off * 0x45) >> 0x18) * 0x1508) =
           *(short *)(&g_bss_002e105e +
                     (*(int *)(&g_rooms + (uint)dungeon_off * 0x45) >> 0x18) * 0x1508) + 1;
    }
    room_how_room_exist_slabs_0c8654();
    val = val_3 + 3;
    val_2 = val_3 - val;
    while (SBORROW4(val_3,val) != val_2 < 0) {
      uval_2 = uval;
      if (uval < uval + 3) {
        do {
          uval_2 = uval_2 + 1;
          effect_fn_025f6f();
        } while ((int)uval_2 < (int)(uval + 3));
      }
      val_3 = val_3 + 1;
      val_2 = val_3 - val;
    }
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0c6ba4 (Original VA: 0xc6ba4, Ghidra: FUN_000c6ba4)
 * Prototype: void room_fn_0c6ba4(void);
 * Address  : 0xc6ba4 (Size: 58 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c6ba4
 * Callers  : 0 -> 
 * Callees  : 1 -> object_fn_0c6b04
 ******************************************************************************/
void room_fn_0c6ba4(void)

{
  int arg_eax;
  int extraout_ECX;
  int arg_edx;
  
  if (*(short *)(arg_eax + 0x37) == 0) {
    return;
  }
  do {
    if (arg_edx == 0) {
      return;
    }
    arg_edx = object_fn_0c6b04();
  } while (*(short *)(&g_bss_002d33c6 + extraout_ECX) != 0);
  return;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c6be0 (Original VA: 0xc6be0, Ghidra: FUN_000c6be0)
 * Prototype: undefined8 room_process_dungeon_room_0c6be0(void);
 * Address  : 0xc6be0 (Size: 482 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 9 -> mapwho_process_map_subtile_050d90, mapwho_fn_050e37, mapwho_fn_050ea6, structs_update_creature_control_072af4, temple_process_slabmap_tile_073d8d, ceiling_fn_07df48, light_process_map_subtile_0b2398, object_fn_0c6b04 ...
 ******************************************************************************/
undefined8 room_process_dungeon_room_0c6be0(void)

{
  byte flag;
  short short_val;
  int arg_eax;
  int val;
  undefined4 uval;
  undefined1 *word_ptr;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 arg_edx;
  bool flag_2;
  
  val = ceiling_fn_07df48();
  if (val != 0) {
    val = light_process_map_subtile_0b2398();
    if ((val < 0x126) || (0x12e < val)) {
      flag_2 = false;
    }
    else {
      flag_2 = true;
    }
    if (flag_2) {
      room_update_slab_subtile_columns_0d0f50();
      temple_process_slabmap_tile_073d8d();
      structs_update_creature_control_072af4();
      uval = 0xffffffff;
      goto LAB_000c6dbc;
    }
    flag = *(byte *)(arg_eax + 0x1a);
    if (flag < 6) {
      if (flag != 3) goto LAB_000c6c64;
LAB_000c6c44:
      flag_2 = true;
    }
    else {
      if ((flag < 7) || ((0x2a < flag && ((flag < 0x2c || (flag == 0x80)))))) goto LAB_000c6c44;
LAB_000c6c64:
      flag_2 = false;
    }
    if ((flag_2) || (*(char *)(arg_eax + 0x1a) == -0x80)) {
      if (*(int *)(arg_eax + 0x13) == 0) {
        structs_update_creature_control_072af4();
        return CONCAT44(arg_edx,0xffffffff);
      }
      word_ptr = (undefined1 *)room_update_slab_subtile_columns_0d0f50();
      if ((&g_rooms < word_ptr) &&
         (((*(char *)(arg_eax + 6) == word_ptr[3] ||
           (*(int *)(arg_eax + 3) >> 0x18 == (uint)g_neutral_player_number)) && (*(short *)(word_ptr + 10) == 2)))
         ) {
        val = object_fn_0c6b04();
        *(int *)(arg_eax + 0x13) = val;
        if (val != 0) {
          short_val = *(short *)(extraout_ECX + 0x37);
          while ((short_val != 0 && (flag_2 = val != 0, val = 0, flag_2))) {
            val = object_fn_0c6b04();
            short_val = *(short *)(&g_bss_002d33c6 + extraout_ECX_00);
          }
          *(int *)(arg_eax + 0x13) = val;
        }
        if (*(int *)(arg_eax + 0x13) == 0) {
          structs_update_creature_control_072af4();
          return CONCAT44(arg_edx,0xffffffff);
        }
      }
      if (*(char *)(arg_eax + 0x1a) == -0x80) {
        mapwho_fn_050ea6();
        structs_update_creature_control_072af4();
        return CONCAT44(arg_edx,0xffffffff);
      }
      uval_2 = mapwho_process_map_subtile_050d90();
      if (g_thing_ptrs < uval_2) {
        mapwho_fn_050e37();
        structs_update_creature_control_072af4();
        return CONCAT44(arg_edx,0xffffffff);
      }
    }
    *(undefined1 *)(arg_eax + 7) = *(undefined1 *)(arg_eax + 8);
  }
  uval = 1;
LAB_000c6dbc:
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : room_fn_0c6ec0 (Original VA: 0xc6ec0, Ghidra: FUN_000c6ec0)
 * Prototype: uint room_fn_0c6ec0(void);
 * Address  : 0xc6ec0 (Size: 376 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c6ec0
 * Callers  : 3 -> move_update_creature_control_0b3dac, move_fn_0b4894, move_fn_0b4994
 * Callees  : 1 -> creature_fn_07e134
 ******************************************************************************/
uint room_fn_0c6ec0(void)

{
  int arg_eax;
  int val;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint uval;
  undefined2 *arg_edx;
  undefined2 uval_2;
  undefined2 uval_3;
  
  creature_fn_07e134(*arg_edx,*(undefined2 *)(arg_eax + 0x11));
  creature_fn_07e134(*(undefined2 *)(arg_eax + 0xd),*(undefined2 *)(arg_eax + 0x11));
  uval_2 = *(undefined2 *)(arg_eax + 0xd);
  uval_3 = arg_edx[2];
  val = creature_fn_07e134(uval_2,uval_3);
  uval = extraout_ECX;
  if (val != 0) {
    uval = extraout_ECX | 4;
  }
  switch(uval) {
  case 0:
    val = creature_fn_07e134(uval_2,uval_3);
    uval = extraout_ECX_00;
    if (val != 0) {
      return 7;
    }
    break;
  case 1:
    val = creature_fn_07e134(*(undefined2 *)(arg_eax + 0xd),arg_edx[2]);
    if (val != 0) {
      return 7;
    }
    return 1;
  case 2:
    val = creature_fn_07e134(*arg_edx,arg_edx[2]);
    if (val != 0) {
      return 7;
    }
    return 2;
  case 4:
    val = creature_fn_07e134(*arg_edx,*(undefined2 *)(arg_eax + 0x11));
    uval = extraout_ECX_01;
    if (val != 0) {
      uval = 7;
    }
  }
  return uval;
}

/******************************************************************************
 * Function : room_fn_0c7058 (Original VA: 0xc7058, Ghidra: FUN_000c7058)
 * Prototype: byte room_fn_0c7058(void);
 * Address  : 0xc7058 (Size: 414 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c7058
 * Callers  : 6 -> shot_process_thing_entity_06ca16, shot_process_thing_entity_06cee6, shot_roll_action_random_06d4df, move_update_creature_control_0b3dac, move_fn_0b444c, move_fn_0b45b4
 * Callees  : 1 -> ceiling_process_map_subtile_07dbc0
 ******************************************************************************/
byte room_fn_0c7058(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  undefined2 *extraout_ECX_00;
  undefined2 *arg_edx;
  byte flag;
  
  val = ceiling_process_map_subtile_07dbc0(*arg_edx,*(undefined2 *)(arg_eax + 0x11));
  flag = val != 0;
  val = ceiling_process_map_subtile_07dbc0(*(undefined2 *)(arg_eax + 0xd),*(undefined2 *)(arg_eax + 0x11));
  if (val != 0) {
    flag = flag | 2;
  }
  val = ceiling_process_map_subtile_07dbc0(*(undefined2 *)(arg_eax + 0xd),*(undefined2 *)(extraout_ECX + 4));
  if (val != 0) {
    flag = flag | 4;
  }
  switch(flag) {
  case 0:
    val = ceiling_process_map_subtile_07dbc0(*extraout_ECX_00,extraout_ECX_00[2]);
    if (val != 0) {
      return 7;
    }
    break;
  case 1:
    val = ceiling_process_map_subtile_07dbc0(*(undefined2 *)(arg_eax + 0xd),extraout_ECX_00[2]);
    if (val != 0) {
      return 7;
    }
    break;
  case 2:
    val = ceiling_process_map_subtile_07dbc0(*extraout_ECX_00,extraout_ECX_00[2]);
    if (val != 0) {
      return 7;
    }
    break;
  case 4:
    val = ceiling_process_map_subtile_07dbc0(*extraout_ECX_00,*(undefined2 *)(arg_eax + 0x11));
    if (val != 0) {
      flag = 7;
    }
  }
  return flag;
}

/******************************************************************************
 * Function : room_fn_0c7218 (Original VA: 0xc7218, Ghidra: FUN_000c7218)
 * Prototype: void room_fn_0c7218(void);
 * Address  : 0xc7218 (Size: 791 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c7218
 * Callers  : 7 -> shot_process_thing_entity_06ca16, shot_roll_action_random_06d4df, move_update_creature_control_0b3dac, move_fn_0b444c, move_fn_0b45b4, move_fn_0b4894, move_fn_0b4994
 * Callees  : 1 -> room_fn_0c7970
 ******************************************************************************/
void room_fn_0c7218(void)

{
  ushort uval;
  ushort uval_2;
  int arg_eax;
  ushort uval_3;
  ushort uval_4;
  ushort *arg_edx;
  undefined4 arg_ebx;
  byte flag;
  undefined4 local_10;
  ushort local_c [2];
  
  flag = 0;
  switch(arg_ebx) {
  default:
    return;
  case 1:
    break;
  case 2:
    uval_2 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
    uval_3 = *(ushort *)(arg_eax + 0xf);
    uval_4 = arg_edx[1];
    if (uval_3 != uval_4) {
      if (uval_3 < uval_4) {
        uval_3 = ((uval_4 + uval_2 & 0xff00) - 1) - uval_2;
      }
      else {
        uval_3 = (uval_4 - uval_2 & 0xff00) + 0x100 + uval_2;
      }
    }
    arg_edx[1] = uval_3;
    return;
  case 3:
    uval_4 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
    uval_3 = *arg_edx;
    if (*(ushort *)(arg_eax + 0xd) != uval_3) {
      if (*(ushort *)(arg_eax + 0xd) < uval_3) {
        uval_3 = ((uval_3 + uval_4 & 0xff00) - 1) - uval_4;
      }
      else {
        uval_3 = uval_4 + (uval_3 - uval_4 & 0xff00) + 0x100;
      }
    }
    uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
    uval_4 = *(ushort *)(arg_eax + 0xf);
    uval_2 = arg_edx[1];
    if (uval_4 != uval_2) {
      if (uval_4 < uval_2) {
        uval_4 = ((uval_2 + uval & 0xff00) - 1) - uval;
      }
      else {
        uval_4 = (uval_2 - uval & 0xff00) + 0x100 + uval;
      }
    }
    arg_edx[1] = uval_4;
    *arg_edx = uval_3;
    return;
  case 5:
    uval_2 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
    uval_3 = *(ushort *)(arg_eax + 0xd);
    uval_4 = *arg_edx;
    if (uval_3 != uval_4) {
      if (uval_3 < uval_4) {
        uval_3 = ((uval_4 + uval_2 & 0xff00) - 1) - uval_2;
      }
      else {
        uval_3 = (uval_4 - uval_2 & 0xff00) + 0x100 + uval_2;
      }
    }
    *arg_edx = uval_3;
    uval_3 = room_fn_0c7970();
    arg_edx[2] = uval_3;
    return;
  case 6:
    uval_4 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
    uval_3 = arg_edx[1];
    if (*(ushort *)(arg_eax + 0xf) != uval_3) {
      if (*(ushort *)(arg_eax + 0xf) < uval_3) {
        uval_3 = ((uval_3 + uval_4 & 0xff00) - 1) - uval_4;
      }
      else {
        uval_3 = uval_4 + (uval_3 - uval_4 & 0xff00) + 0x100;
      }
    }
    arg_edx[1] = uval_3;
  case 4:
    uval_3 = room_fn_0c7970();
    arg_edx[2] = uval_3;
    return;
  case 7:
    uval_4 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
    uval_3 = *arg_edx;
    if (*(ushort *)(arg_eax + 0xd) != uval_3) {
      if (*(ushort *)(arg_eax + 0xd) < uval_3) {
        uval_3 = ((uval_3 + uval_4 & 0xff00) - 1) - uval_4;
      }
      else {
        uval_3 = uval_4 + (uval_3 - uval_4 & 0xff00) + 0x100;
      }
    }
    uval_2 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
    uval_4 = arg_edx[1];
    if (*(ushort *)(arg_eax + 0xf) != uval_4) {
      if (*(ushort *)(arg_eax + 0xf) < uval_4) {
        uval_4 = ((uval_4 + uval_2 & 0xff00) - 1) - uval_2;
      }
      else {
        uval_4 = uval_2 + (uval_4 - uval_2 & 0xff00) + 0x100;
      }
    }
    local_10 = CONCAT22(uval_4,uval_3);
    arg_edx[1] = uval_4;
    *arg_edx = uval_3;
    local_c[0] = room_fn_0c7970();
    *(undefined4 *)arg_edx = local_10;
    arg_edx[(uint)flag * -4 + 2] = local_c[(uint)flag * -4];
    return;
  }
  uval_4 = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  uval_3 = *arg_edx;
  if (*(ushort *)(arg_eax + 0xd) != uval_3) {
    if (*(ushort *)(arg_eax + 0xd) < uval_3) {
      *arg_edx = ((uval_3 + uval_4 & 0xff00) - 1) - uval_4;
      return;
    }
    uval_3 = uval_4 + (uval_3 - uval_4 & 0xff00) + 0x100;
  }
  *arg_edx = uval_3;
  return;
}

/******************************************************************************
 * Function : room_fn_0c7550 (Original VA: 0xc7550, Ghidra: FUN_000c7550)
 * Prototype: void room_fn_0c7550(void);
 * Address  : 0xc7550 (Size: 65 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c7550
 * Callers  : 4 -> move_fn_0b444c, move_fn_0b45b4, move_fn_0b4894, move_fn_0b4994
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0c7550(void)

{
  int arg_eax;
  undefined4 arg_ebx;
  
  switch(arg_ebx) {
  default:
    return;
  case 1:
    *(undefined2 *)(arg_eax + 0x2c) = 0;
    return;
  case 3:
    *(undefined2 *)(arg_eax + 0x2c) = 0;
  case 2:
    *(undefined2 *)(arg_eax + 0x2e) = 0;
    return;
  case 5:
    *(undefined2 *)(arg_eax + 0x2c) = 0;
    *(undefined2 *)(arg_eax + 0x30) = 0;
    return;
  case 7:
    *(undefined2 *)(arg_eax + 0x2c) = 0;
  case 6:
    *(undefined2 *)(arg_eax + 0x2e) = 0;
  case 4:
    *(undefined2 *)(arg_eax + 0x30) = 0;
    return;
  }
}

/******************************************************************************
 * Function : room_fn_0c7594 (Original VA: 0xc7594, Ghidra: FUN_000c7594)
 * Prototype: void room_fn_0c7594(void);
 * Address  : 0xc7594 (Size: 32 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c7594
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Instruction at (ram,0x000c75b3) overlaps instruction at (ram,0x000c75b2)
    */

void room_fn_0c7594(void)

{
  byte *byte_ptr;
  byte flag;
  byte flag_2;
  byte *arg_eax;
  int val;
  byte *arg_ecx;
  char ch;
  byte flag_3;
  char ch_2;
  undefined2 *arg_edx;
  int val_2;
  char *arg_ebx;
  int val_3;
  int unaff_EBP;
  int val_4;
  char *unaff_EDI;
  char *str_ptr;
  undefined1 auStack_8 [8];
  
  flag_2 = (byte)arg_eax;
  if ((char)(flag_2 - *unaff_EDI) < '\0') {
LAB_000c75a3:
    flag = *arg_eax;
    flag_3 = (byte)arg_edx;
    *arg_eax = *arg_eax + flag_3;
    if (CARRY1(flag,flag_3) || *arg_eax == 0) goto LAB_000c75a7;
    arg_ecx[0x56] = arg_ecx[0x56] + flag_3;
  }
  else {
    ch = (char)arg_edx;
    ch_2 = (char)((uint)arg_edx >> 8) + (char)arg_ebx;
    arg_edx = (undefined2 *)CONCAT22((short)((uint)arg_edx >> 0x10),CONCAT11(ch_2,ch));
    if (ch_2 == '\0') {
      arg_eax[0x76] = arg_eax[0x76] + ch;
      goto LAB_000c75a3;
    }
LAB_000c75a7:
    byte_ptr = (byte *)(unaff_EBP + -0x2ffff389);
    flag = *byte_ptr;
    *byte_ptr = *byte_ptr + flag_2;
    str_ptr = unaff_EDI + 1;
    if (!CARRY1(flag,flag_2) && *byte_ptr != 0) goto LAB_000c75bb;
    *(byte *)(arg_edx + 0x3c) = *(char *)(arg_edx + 0x3c) + flag_2;
    register0x00000010 = (BADSPACEBASE *)auStack_8;
  }
  *(char **)((int)register0x00000010 + -4) = unaff_EDI + 1;
  arg_ecx = arg_eax;
  str_ptr = arg_ebx;
LAB_000c75bb:
  val = *(int *)(arg_eax + 0x2a) >> 0x10;
  val_3 = *(int *)(arg_ecx + 0x2c) >> 0x10;
  val_4 = *(int *)(arg_ecx + 0x2e) >> 0x10;
  switch(str_ptr) {
  case (char *)0x1:
    *arg_edx = *(undefined2 *)(arg_ecx + 0xd);
    val_3 = (int)-((uint)arg_ecx[0x22] * val) >> 0x1f;
    *(short *)(arg_ecx + 0x2c) =
         (short)((int)((-((uint)arg_ecx[0x22] * val) + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >>
                7);
    val = (*(int *)(arg_ecx + 0x2c) >> 0x10) * (0x100 - (uint)arg_ecx[0x23]);
    val_3 = val >> 0x1f;
    *(short *)(arg_ecx + 0x2e) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    val = (*(int *)(arg_ecx + 0x2e) >> 0x10) * (0x100 - (uint)arg_ecx[0x23]);
    val_3 = val >> 0x1f;
    *(short *)(arg_ecx + 0x30) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case (char *)0x2:
    arg_edx[1] = *(undefined2 *)(arg_ecx + 0xf);
    val = (int)-((uint)arg_ecx[0x22] * val_3) >> 0x1f;
    *(short *)(arg_ecx + 0x2e) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_3) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
    val = (0x100 - (uint)arg_ecx[0x23]) * (*(int *)(arg_ecx + 0x2a) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_ecx + 0x2c) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    val = (0x100 - (uint)arg_ecx[0x23]) * (*(int *)(arg_ecx + 0x2e) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_ecx + 0x30) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case (char *)0x3:
    *arg_edx = *(undefined2 *)(arg_ecx + 0xd);
    arg_edx[1] = *(undefined2 *)(arg_ecx + 0xf);
    val_4 = (int)-((uint)arg_ecx[0x22] * val) >> 0x1f;
    *(short *)(arg_ecx + 0x2c) =
         (short)((int)((-((uint)arg_ecx[0x22] * val) + val_4 * -0x80) - (uint)(val_4 << 6 < 0))
                >> 7);
    val = (int)-((uint)arg_ecx[0x22] * val_3) >> 0x1f;
    *(short *)(arg_ecx + 0x2e) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_3) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
    return;
  case (char *)0x4:
    arg_edx[2] = *(undefined2 *)(arg_ecx + 0x11);
    val = (int)-((uint)arg_ecx[0x22] * val_4) >> 0x1f;
    *(short *)(arg_ecx + 0x30) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_4) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
    val = (0x100 - (uint)arg_ecx[0x23]) * (*(int *)(arg_ecx + 0x2a) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_ecx + 0x2c) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    val = (0x100 - (uint)arg_ecx[0x23]) * (*(int *)(arg_ecx + 0x2c) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_ecx + 0x2e) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case (char *)0x5:
    arg_edx[2] = *(undefined2 *)(arg_ecx + 0x11);
    *arg_edx = *(undefined2 *)(arg_ecx + 0xd);
    val_3 = (int)-((uint)arg_ecx[0x22] * val) >> 0x1f;
    *(short *)(arg_ecx + 0x2c) =
         (short)((int)((-((uint)arg_ecx[0x22] * val) + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >>
                7);
    val = (int)-((uint)arg_ecx[0x22] * val_4) >> 0x1f;
    *(short *)(arg_ecx + 0x30) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_4) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
    return;
  case (char *)0x6:
    arg_edx[1] = *(undefined2 *)(arg_ecx + 0xf);
    arg_edx[2] = *(undefined2 *)(arg_ecx + 0x11);
    val = (int)-((uint)arg_ecx[0x22] * val_3) >> 0x1f;
    *(short *)(arg_ecx + 0x2e) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_3) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
    val = (int)-((uint)arg_ecx[0x22] * val_4) >> 0x1f;
    *(short *)(arg_ecx + 0x30) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_4) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
    val = (0x100 - (uint)arg_ecx[0x23]) * (*(int *)(arg_ecx + 0x2a) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_ecx + 0x2c) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case (char *)0x7:
    *arg_edx = *(undefined2 *)(arg_ecx + 0xd);
    arg_edx[1] = *(undefined2 *)(arg_ecx + 0xf);
    arg_edx[2] = *(undefined2 *)(arg_ecx + 0x11);
    val_2 = (int)-((uint)arg_ecx[0x22] * val) >> 0x1f;
    *(short *)(arg_ecx + 0x2c) =
         (short)((int)((-((uint)arg_ecx[0x22] * val) + val_2 * -0x80) - (uint)(val_2 << 6 < 0)) >>
                7);
    val = (int)-((uint)arg_ecx[0x22] * val_3) >> 0x1f;
    *(short *)(arg_ecx + 0x2e) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_3) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
    val = (int)-((uint)arg_ecx[0x22] * val_4) >> 0x1f;
    *(short *)(arg_ecx + 0x30) =
         (short)((int)((-((uint)arg_ecx[0x22] * val_4) + val * -0x80) - (uint)(val << 6 < 0)) >>
                7);
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0c75b4 (Original VA: 0xc75b4, Ghidra: FUN_000c75b4)
 * Prototype: void room_fn_0c75b4(void);
 * Address  : 0xc75b4 (Size: 766 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c75b4
 * Callers  : 2 -> shot_process_thing_entity_06ca16, shot_process_thing_entity_06cee6
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0c75b4(void)

{
  int arg_eax;
  int val;
  undefined2 *arg_edx;
  int val_2;
  undefined4 arg_ebx;
  int val_3;
  int val_4;
  
  val = *(int *)(arg_eax + 0x2a) >> 0x10;
  val_3 = *(int *)(arg_eax + 0x2c) >> 0x10;
  val_4 = *(int *)(arg_eax + 0x2e) >> 0x10;
  switch(arg_ebx) {
  case 1:
    *arg_edx = *(undefined2 *)(arg_eax + 0xd);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2c) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    val = (*(int *)(arg_eax + 0x2c) >> 0x10) * (0x100 - (uint)*(byte *)(arg_eax + 0x23));
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2e) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    val = (*(int *)(arg_eax + 0x2e) >> 0x10) * (0x100 - (uint)*(byte *)(arg_eax + 0x23));
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x30) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case 2:
    arg_edx[1] = *(undefined2 *)(arg_eax + 0xf);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val_3);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2e) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    val = (0x100 - (uint)*(byte *)(arg_eax + 0x23)) * (*(int *)(arg_eax + 0x2a) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2c) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    val = (0x100 - (uint)*(byte *)(arg_eax + 0x23)) * (*(int *)(arg_eax + 0x2e) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x30) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case 3:
    *arg_edx = *(undefined2 *)(arg_eax + 0xd);
    arg_edx[1] = *(undefined2 *)(arg_eax + 0xf);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val);
    val_4 = val >> 0x1f;
    *(short *)(arg_eax + 0x2c) =
         (short)((int)((val + val_4 * -0x80) - (uint)(val_4 << 6 < 0)) >> 7);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val_3);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2e) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    return;
  case 4:
    arg_edx[2] = *(undefined2 *)(arg_eax + 0x11);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val_4);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x30) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    val = (0x100 - (uint)*(byte *)(arg_eax + 0x23)) * (*(int *)(arg_eax + 0x2a) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2c) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    val = (0x100 - (uint)*(byte *)(arg_eax + 0x23)) * (*(int *)(arg_eax + 0x2c) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2e) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case 5:
    arg_edx[2] = *(undefined2 *)(arg_eax + 0x11);
    *arg_edx = *(undefined2 *)(arg_eax + 0xd);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2c) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val_4);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x30) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    return;
  case 6:
    arg_edx[1] = *(undefined2 *)(arg_eax + 0xf);
    arg_edx[2] = *(undefined2 *)(arg_eax + 0x11);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val_3);
    val_3 = val >> 0x1f;
    val_4 = -((uint)*(byte *)(arg_eax + 0x22) * val_4);
    *(short *)(arg_eax + 0x2e) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    val = val_4 >> 0x1f;
    *(short *)(arg_eax + 0x30) =
         (short)((int)((val_4 + val * -0x80) - (uint)(val << 6 < 0)) >> 7);
    val = (0x100 - (uint)*(byte *)(arg_eax + 0x23)) * (*(int *)(arg_eax + 0x2a) >> 0x10);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2c) = (short)((val + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
    return;
  case 7:
    *arg_edx = *(undefined2 *)(arg_eax + 0xd);
    arg_edx[1] = *(undefined2 *)(arg_eax + 0xf);
    arg_edx[2] = *(undefined2 *)(arg_eax + 0x11);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val);
    val_2 = val >> 0x1f;
    *(short *)(arg_eax + 0x2c) =
         (short)((int)((val + val_2 * -0x80) - (uint)(val_2 << 6 < 0)) >> 7);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val_3);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x2e) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
    val = -((uint)*(byte *)(arg_eax + 0x22) * val_4);
    val_3 = val >> 0x1f;
    *(short *)(arg_eax + 0x30) =
         (short)((int)((val + val_3 * -0x80) - (uint)(val_3 << 6 < 0)) >> 7);
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0c7910 (Original VA: 0xc7910, Ghidra: FUN_000c7910)
 * Prototype: uint room_fn_0c7910(void);
 * Address  : 0xc7910 (Size: 93 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c7910
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
uint room_fn_0c7910(void)

{
  int arg_eax;
  uint uval;
  int arg_edx;
  uint uval_2;
  
  uval = *(ushort *)(&g_data_0019073b + (uint)*(ushort *)(arg_eax + 0x56) * 2) / 2;
  uval_2 = (uint)*(ushort *)(arg_edx + 2);
  if (*(ushort *)(arg_eax + 0xf) == uval_2) {
    return uval_2;
  }
  if (*(ushort *)(arg_eax + 0xf) < uval_2) {
    return ((uval_2 + uval & 0xff00) - 1) - uval;
  }
  return uval + (uval_2 - uval & 0xff00) + 0x100;
}

/******************************************************************************
 * Function : room_fn_0c7970 (Original VA: 0xc7970, Ghidra: FUN_000c7970)
 * Prototype: uint room_fn_0c7970(void);
 * Address  : 0xc7970 (Size: 90 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c7970
 * Callers  : 1 -> room_fn_0c7218
 * Callees  : 1 -> move_process_map_subtile_0b33e4
 ******************************************************************************/
uint room_fn_0c7970(void)

{
  int arg_eax;
  int val;
  uint uval;
  int extraout_ECX;
  uint uval_2;
  uint uval_3;
  
  uval_2 = (uint)*(ushort *)(arg_eax + 0x58);
  val = move_process_map_subtile_0b33e4();
  uval = *(int *)(extraout_ECX + 2) >> 0x10;
  uval_3 = *(int *)(arg_eax + 0xf) >> 0x10;
  if (val + -1 <= (int)(uval + uval_2)) {
    return (val - uval_2) - 1;
  }
  if (uval_3 != uval) {
    if ((int)uval_3 < (int)uval) {
      return (((int)(uval + uval_2) >> 8) * 0x100 + -1) - uval_2;
    }
    uval = (uval & 0xff00) + 0x100;
  }
  return uval;
}

/******************************************************************************
 * Function : room_fn_0c79e0 (Original VA: 0xc79e0, Ghidra: FUN_000c79e0)
 * Prototype: bool room_fn_0c79e0(void);
 * Address  : 0xc79e0 (Size: 117 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c79e0
 * Callers  : 3 -> creature_fn_07e134, creature_fn_07e868, creature_fn_07f310
 * Callees  : 0 -> 
 ******************************************************************************/
bool room_fn_0c79e0(void)

{
  ushort *arg_eax;
  ushort *arg_edx;
  uint uval;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  
  if ((int)((uint)*arg_edx - (uint)*arg_eax) < 0) {
    uval = (uint)(byte)*arg_eax;
  }
  else {
    uval = 0xff - (byte)*arg_eax;
  }
  if ((int)((uint)arg_edx[1] - (uint)arg_eax[1]) < 0) {
    uval_2 = (uint)(byte)arg_eax[1];
  }
  else {
    uval_2 = 0xff - (byte)arg_eax[1];
  }
  uval_2 = uval_2 * ((uint)*arg_edx - (uint)*arg_eax);
  uval_3 = (int)uval_2 >> 0x1f;
  uval = ((uint)arg_edx[1] - (uint)arg_eax[1]) * uval;
  uval_4 = (int)uval >> 0x1f;
  return (int)((uval ^ uval_4) - uval_4) < (int)((uval_2 ^ uval_3) - uval_3);
}

/******************************************************************************
 * Function : room_fn_0c7a58 (Original VA: 0xc7a58, Ghidra: FUN_000c7a58)
 * Prototype: bool room_fn_0c7a58(void);
 * Address  : 0xc7a58 (Size: 119 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0c7a58
 * Callers  : 3 -> creature_fn_07e134, creature_fn_07e868, creature_fn_07f310
 * Callees  : 0 -> 
 ******************************************************************************/
bool room_fn_0c7a58(void)

{
  ushort *arg_eax;
  uint uval;
  uint uval_2;
  ushort *arg_edx;
  uint uval_3;
  uint uval_4;
  
  if ((int)((uint)*arg_edx - (uint)*arg_eax) < 0) {
    uval_2 = (uint)(byte)*arg_eax;
  }
  else {
    uval_2 = 0xff - (byte)*arg_eax;
  }
  if ((int)((uint)arg_edx[1] - (uint)arg_eax[1]) < 0) {
    uval = (uint)(byte)arg_eax[1];
  }
  else {
    uval = 0xff - (byte)arg_eax[1];
  }
  uval_2 = ((uint)arg_edx[1] - (uint)arg_eax[1]) * uval_2;
  uval_3 = (int)uval_2 >> 0x1f;
  uval = ((uint)*arg_edx - (uint)*arg_eax) * uval;
  uval_4 = (int)uval >> 0x1f;
  return (int)((uval ^ uval_4) - uval_4) < (int)((uval_2 ^ uval_3) - uval_3);
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c7ad0 (Original VA: 0xc7ad0, Ghidra: FUN_000c7ad0)
 * Prototype: undefined4 room_process_dungeon_room_0c7ad0(void);
 * Address  : 0xc7ad0 (Size: 274 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 room_process_dungeon_room_0c7ad0(void)

{
  ushort uval;
  undefined1 *arg_eax;
  uint uval_2;
  int val;
  char *arg_edx;
  uint uval_3;
  int val_2;
  undefined1 *arg_ebx;
  uint uval_4;
  char *str_ptr;
  int val_3;
  undefined1 local_14;
  
  uval_4 = (uint)*(ushort *)(arg_eax + 0x37);
  uval_3 = uval_4 % 0x55;
  uval_2 = uval_4 / 0x55;
  uval = *(ushort *)(&g_bss_002d33c6 + uval_4 * 6);
  while (uval_4 = (uint)uval, uval_4 != 0) {
    uval_3 = uval_3 + uval_4 % 0x55;
    uval_2 = uval_2 + uval_4 / 0x55;
    uval = *(ushort *)(&g_bss_002d33c6 + uval_4 * 6);
  }
  str_ptr = (char *)&g_bss_002ee9c1;
  val = 0;
  do {
    val_3 = ((int)*str_ptr + (int)uval_2 / (int)(uint)*(ushort *)(arg_eax + 0x3b)) * 3 + 1;
    val_2 = (int)str_ptr[1] + (int)uval_3 / (int)(uint)*(ushort *)(arg_eax + 0x3b);
    if (&g_rooms +
        (uint)(byte)(&g_bss_002d33c8)
                    [((&g_data_0019033f)[val_2 * 3] + (&g_subtile_to_slab_lut)[val_3] * 0x55) * 6] * 0x45 ==
        arg_eax) {
      *arg_edx = (char)val_2 * '\x03' + '\x01';
      local_14 = (undefined1)val_3;
      *arg_ebx = local_14;
      return 1;
    }
    val = val + 1;
    str_ptr = str_ptr + 4;
  } while (val < 0x100);
  return 0;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c7be4 (Original VA: 0xc7be4, Ghidra: FUN_000c7be4)
 * Prototype: void room_process_dungeon_room_0c7be4(void);
 * Address  : 0xc7be4 (Size: 917 bytes)
 * Module   : room.cpp [callgraph_affinity_to_following_unit]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> update_go_first_person_without_0de6a8
 * Callees  : 3 -> inits_allocate_dynamic_light_shot_0444a9, move_process_map_subtile_0b28e8, room_created_chicken_wall_0c7f7c
 ******************************************************************************/
void room_process_dungeon_room_0c7be4(void)

{
  byte flag;
  byte flag_2;
  char ch;
  ushort dungeon_off;
  undefined4 uval;
  ulonglong uval_2;
  short short_val;
  short short_val_2;
  int val;
  uint uval_3;
  byte *extraout_ECX;
  byte *room_ptr;
  byte *extraout_ECX_00;
  byte *extraout_ECX_01;
  byte *extraout_ECX_02;
  byte *extraout_ECX_03;
  byte *byte_ptr;
  char ch_2;
  uint uval_4;
  int val_2;
  char cStack_2d;
  uint local_24;
  
  if (g_bss_002f10d6 <= g_bss_002f10d2) {
LAB_000c7ecd:
    local_24 = 0;
    uval_3 = 1;
    val_2 = 0;
    g_bss_002e0ec3 = 0;
    val = 0;
    while( true ) {
      do {
        if ((uval_3 != 1) && (uval_3 != 7)) {
          ch_2 = '\0';
          for (dungeon_off = *(ushort *)(&g_bss_002e0594 + (uval_3 & 0xff) * 2 + (local_24 & 0xff) * 0x1508)
              ; &g_rooms < &g_rooms + (uint)dungeon_off * 0x45;
              dungeon_off = *(ushort *)(&g_bss_002ddd21 + (uint)dungeon_off * 0x45)) {
            ch_2 = ch_2 + '\x01';
          }
          (&g_bss_002e0ec3)[val_2] = (&g_bss_002e0ec3)[val_2] + ch_2;
        }
        uval_3 = uval_3 + 1;
      } while ((int)uval_3 < 0x11);
      local_24 = local_24 + 1;
      val_2 = val + 0x1508;
      if (4 < (int)local_24) break;
      uval_3 = 1;
      (&g_bss_002e23cb)[val] = 0;
      val = val_2;
    }
    return;
  }
  flag = *g_bss_002f10d2;
  byte_ptr = g_bss_002f10d2;
  do {
    if ((flag & 1) != 0) {
      room_ptr = byte_ptr;
      if (*(short *)(byte_ptr + 10) == 0xd) {
        room_created_chicken_wall_0c7f7c();
        room_ptr = extraout_ECX;
      }
      (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[(g_my_player_word >> 0x18) * 0x4ef] * 0x11] =
           (&g_packet_status_flags)[(uint)(byte)(&g_player_packet_slot)[(g_my_player_word >> 0x18) * 0x4ef] * 0x11] +
           room_ptr[8] + room_ptr[9] + room_ptr[0x3b];
      byte_ptr = room_ptr;
      if ((g_bss_0019d0b9 & 0x40) != 0) {
        flag = room_ptr[0x43];
        flag_2 = room_ptr[0x44];
        val = (uint)flag * 3 + (uint)flag_2;
        dungeon_off = *(ushort *)(room_ptr + 0x41);
        if (*(short *)(room_ptr + 10) != 7) {
          short_val = (short)((uint)*(undefined4 *)(&g_data_00192172 + val * 4) >> 0x10) +
                  (dungeon_off % 0x55) * 0x300 + 0x180;
          uval = *(undefined4 *)(&g_data_00192174 + val * 4);
          if (*(int *)room_ptr >> 0x18 == (uint)g_neutral_player_number) {
            val = inits_allocate_dynamic_light_shot_0444a9(short_val,0);
            byte_ptr = extraout_ECX_00;
            if (val != 0) {
              short_val_2 = move_process_map_subtile_0b28e8();
              *(short *)(val + 0x11) = short_val_2;
              *(short *)(val + 0x11) = short_val_2 + 10;
              uval_3 = (uint)*(ushort *)(extraout_ECX_01 + 0x3f);
              uval_4 = *(ushort *)(val + 0x46) - 0x50;
              byte_ptr = extraout_ECX_01;
LAB_000c7d8b:
              val_2 = (int)(uval_4 * uval_3) >> 0x1f;
              *(short *)(val + 0x46) =
                   (short)((uval_4 * uval_3 + val_2 * -0x100) - (uint)(val_2 << 7 < 0) >> 8) +
                   0x50;
            }
          }
          else if ((u_789__001921a4[*(int *)room_ptr >> 0x18] != L'\0') &&
                  (val = inits_allocate_dynamic_light_shot_0444a9(short_val,0), byte_ptr = extraout_ECX_02, val != 0)) {
            short_val_2 = move_process_map_subtile_0b28e8();
            *(short *)(val + 0x11) = short_val_2;
            *(short *)(val + 0x11) = short_val_2 + 10;
            uval_4 = (uint)*(ushort *)(extraout_ECX_03 + 0x3f);
            uval_3 = *(ushort *)(val + 0x46) - 0x50;
            byte_ptr = extraout_ECX_03;
            goto LAB_000c7d8b;
          }
          if (flag_2 == 2) {
            uval_4 = (uint)flag;
            uval_3 = (uint)(byte)((char)((ushort)short_val >> 8) +
                                 *(char *)((int)&g_data_0018b67b + uval_4 * 2 + 3));
            cStack_2d = (char)((ushort)((dungeon_off / 0x55) * 0x300 + 0x180 +
                                       (short)((uint)uval >> 0x10)) >> 8);
            if (room_ptr ==
                &g_rooms +
                (uint)(byte)(&g_bss_002d33c8)
                            [((&g_subtile_to_slab_lut)[(byte)((&g_data_0018b67f)[uval_4 * 2] + cStack_2d)] *
                              0x55 + (&g_subtile_to_slab_lut)[uval_3]) * 6] * 0x45) {
              uval_2 = (ulonglong)(longlong)(int)(uval_4 + 3) % 4;
              val = (int)uval_2;
              if (room_ptr ==
                  &g_rooms +
                  (uint)(byte)(&g_bss_002d33c8)
                              [((&g_subtile_to_slab_lut)
                                [(uint)(byte)((&g_data_0018b67f)[uval_4 * 2] + cStack_2d) +
                                 (*(int *)((int)&g_data_0018b67b + val * 2 + 1) >> 0x18)] * 0x55 +
                               (&g_subtile_to_slab_lut)
                               [(*(int *)((int)&g_data_0018b67b + val * 2) >> 0x18) + uval_3]) * 6] *
                  0x45) {
                ch_2 = (&g_data_001921b0)[uval_4];
                short_val = *(short *)(room_ptr + 0x41);
                *(short *)(room_ptr + 0x41) = short_val + ch_2;
                ch = (&g_data_001921b0)[val];
                room_ptr[0x43] = (byte)uval_2;
                *(short *)(room_ptr + 0x41) = short_val + ch_2 + (short)ch;
              }
              else {
                *(short *)(room_ptr + 0x41) =
                     *(short *)(room_ptr + 0x41) + (short)(char)(&g_data_001921b0)[uval_4];
              }
            }
            else {
              room_ptr[0x43] = (byte)((ulonglong)(longlong)(int)(uval_4 + 1) % 4);
            }
          }
          room_ptr[0x44] = (byte)((room_ptr[0x44] + 1) % 3);
        }
      }
    }
    byte_ptr = byte_ptr + 0x45;
    if (g_bss_002f10d6 <= byte_ptr) goto LAB_000c7ecd;
    flag = *byte_ptr;
  } while( true );
}

/******************************************************************************
 * Function : room_created_chicken_wall_0c7f7c (Original VA: 0xc7f7c, Ghidra: FUN_000c7f7c)
 * Prototype: undefined8 room_created_chicken_wall_0c7f7c(void);
 * Address  : 0xc7f7c (Size: 747 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 191, 205
 * Purpose  : String 'Created chicken in a wall'
 * Callers  : 1 -> room_process_dungeon_room_0c7be4
 * Callees  : 5 -> inits_allocate_light_object_043f07, mapwho_process_map_subtile_050d3c, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, LbErrorLog
 ******************************************************************************/
undefined8 room_created_chicken_wall_0c7f7c(void)

{
  bool flag;
  ushort loop_i;
  undefined2 uval;
  int arg_eax;
  uint rand_seed;
  int val;
  int val_2;
  undefined4 uval_2;
  undefined4 arg_edx;
  char local_34;
  char local_30;
  uint local_24;
  ushort uStack_20;
  short sStack_1c;
  
  if ((*(ushort *)(arg_eax + 0xe) <= *(ushort *)(arg_eax + 0x10)) ||
     (g_game_turn % ((uint)g_bss_002ebaf4 / (uint)*(ushort *)(arg_eax + 0xe) + 1) != 0)) {
LAB_000c825b:
    uval_2 = 0;
LAB_000c825d:
    return CONCAT44(arg_edx,uval_2);
  }
  do {
    do {
      rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
      local_24 = g_action_random_seed % (uint)*(ushort *)(arg_eax + 0x3b);
      rand_seed = local_24;
      for (sStack_1c = *(short *)(arg_eax + 0x37); ((rand_seed & 0xffff) != 0 && (sStack_1c != 0));
          sStack_1c = *(short *)(&g_bss_002d33c6 + sStack_1c * 6)) {
        rand_seed = rand_seed - 1;
      }
      uStack_20 = 0;
    } while (*(short *)(arg_eax + 0x3b) == 0);
    do {
      if ((ushort)local_24 == *(ushort *)(arg_eax + 0x3b)) {
        local_24 = local_24 ^ *(ushort *)(arg_eax + 0x3b);
        sStack_1c = *(short *)(arg_eax + 0x37);
      }
      rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
      rand_seed = rand_seed >> 0xd | rand_seed * 0x80000;
      g_action_random_seed = rand_seed;
      for (loop_i = 0; rand_seed = rand_seed % 9, loop_i < 9; loop_i = loop_i + 1) {
        local_30 = (char)((int)sStack_1c % 0x55) * '\x03' +
                   (char)((ulonglong)(longlong)(int)rand_seed % 3);
        local_34 = (char)((int)sStack_1c / 0x55) * '\x03' +
                   (char)((ulonglong)(longlong)(int)rand_seed / 3);
        val = mapwho_process_map_subtile_050d3c();
        if (((val == 0) && (val = mapwho_process_map_subtile_050d3c(), val == 0)) &&
           (*(byte *)((int)&g_bss_0019e973 +
                     (*(uint *)((int)&g_map_subtiles + (uint)CONCAT11(local_34,local_30) * 5 + 1) &
                     0x7ff) * 0x18 + 2) >> 4 == 0)) {
          flag = true;
        }
        else {
          flag = false;
        }
        if (flag) {
          val = inits_allocate_light_object_043f07(0x80);
          if (val == 0) {
            LbErrorLog(); /* LbErrorLog("room.cpp", line 191, "Created chicken in a wall") */
            goto LAB_000c825b;
          }
          uval = move_process_map_subtile_0b28e8();
          *(undefined2 *)(val + 0x11) = uval;
          val_2 = ceiling_process_map_subtile_07dbc0();
          if (val_2 != 0) {
            LbErrorLog(); /* LbErrorLog("room.cpp", line 205, "Cannot Create Food!") */
          }
          *(short *)(arg_eax + 0x10) = *(short *)(arg_eax + 0x10) + 1;
          *(short *)(val + 0x13) =
               (short)((int)((uint)*(byte *)(val + 0x49) << 8) / (*(int *)(val + 0x3c) >> 0x10))
               + -1;
          uval_2 = 1;
          goto LAB_000c825d;
        }
        rand_seed = rand_seed + 1;
      }
      uStack_20 = uStack_20 + 1;
      local_24 = local_24 + 1;
      sStack_1c = *(short *)(&g_bss_002d33c6 + sStack_1c * 6);
    } while (uStack_20 < *(ushort *)(arg_eax + 0x3b));
  } while( true );
}

/******************************************************************************
 * Function : room_process_slabmap_tile_0c8268 (Original VA: 0xc8268, Ghidra: FUN_000c8268)
 * Prototype: int room_process_slabmap_tile_0c8268(void);
 * Address  : 0xc8268 (Size: 553 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 326
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 6 -> room_how_room_exist_slabs_0c856c, room_how_room_exist_slabs_0c8654, room_how_room_exist_slabs_0cae40, room_how_room_exist_slabs_0cd4dc, room_how_room_exist_slabs_0d0118, room_how_room_exist_slabs_0d0488
 * Callees  : 1 -> slab_process_slabmap_tile_0da698
 ******************************************************************************/
int room_process_slabmap_tile_0c8268(void)

{
  bool flag;
  byte flag_2;
  int arg_eax;
  int val;
  int val_2;
  int extraout_ECX;
  uint arg_edx;
  int val_3;
  int val_4;
  int val_5;
  
  flag = true;
  val_5 = 2;
  val_2 = 0;
  do {
    val_4 = (*(int *)((int)&g_data_0018b69e + val_5) >> 0x10) + arg_eax;
    val_3 = val_4 % 0x55;
    val = val_4 / 0x55;
    if ((((&g_slabmap)[((&g_subtile_to_slab_lut)[val_3 * 3] + (&g_subtile_to_slab_lut)[val * 3] * 0x55) * 6] & 7)
         == arg_edx) && ((&g_slabmap_base)[val_4 * 6] == (&g_slabmap_base)[arg_eax * 6])) {
      val_2 = val_2 + 2;
    }
    else {
      flag = false;
      flag_2 = slab_process_slabmap_tile_0da698();
      if (flag_2 < 10) {
        if ((flag_2 < 2) || (flag_2 < 3)) {
LAB_000c82ee:
          val_2 = extraout_ECX + 1;
        }
        else {
          val_2 = extraout_ECX;
          if ((flag_2 == 4) &&
             (val_2 = extraout_ECX,
             ((&g_slabmap)[((&g_subtile_to_slab_lut)[val * 3] * 0x55 + (&g_subtile_to_slab_lut)[val_3 * 3]) * 6]
             & 7) == arg_edx)) {
            val_2 = extraout_ECX + 2;
          }
        }
      }
      else {
        val_2 = extraout_ECX;
        if ((0xb < flag_2) && (val_2 = extraout_ECX, 0x33 < flag_2)) {
          if (flag_2 < 0x35) goto LAB_000c82ee;
          val_2 = extraout_ECX;
          if ((flag_2 == 99) &&
             (val_2 = extraout_ECX,
             ((&g_slabmap)[((&g_subtile_to_slab_lut)[val * 3] * 0x55 + (&g_subtile_to_slab_lut)[val_3 * 3]) * 6]
             & 7) == arg_edx)) {
            val_2 = extraout_ECX + 2;
          }
        }
      }
    }
    val_5 = val_5 + 4;
  } while (val_5 != 0x12);
  if (flag) {
    val_5 = 0;
    do {
      val = (*(int *)((int)&g_data_0018b69e + val_5) >> 0x10) + arg_eax;
      if ((((&g_slabmap)
            [((&g_subtile_to_slab_lut)[(val % 0x55) * 3] + (&g_subtile_to_slab_lut)[(val / 0x55) * 3] * 0x55) * 6]
           & 7) != arg_edx) || ((&g_slabmap_base)[val * 6] != (&g_slabmap_base)[arg_eax * 6])) {
        flag = false;
        break;
      }
      val_5 = val_5 + 4;
    } while (val_5 < 0x12);
  }
  if (flag) {
    val_2 = val_2 + 2;
  }
  return val_2;
}

/******************************************************************************
 * Function : room_how_room_exist_slabs_0c856c (Original VA: 0xc856c, Ghidra: FUN_000c856c)
 * Prototype: void room_how_room_exist_slabs_0c856c(void);
 * Address  : 0xc856c (Size: 232 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 326
 * Purpose  : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 2 -> inits_wlb_file_muddled_fixing_0457bd, slab_process_slabmap_tile_0da6fc
 * Callees  : 2 -> room_process_slabmap_tile_0c8268, LbErrorLog
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000c85c7) */

void room_how_room_exist_slabs_0c856c(void)

{
  byte flag;
  ushort uval;
  ushort loop_i;
  int arg_eax;
  uint uval_2;
  int val;
  int val_2;
  int extraout_ECX;
  
  uval = *(ushort *)(arg_eax + 0x3b);
  if (uval == 0) {
    LbErrorLog(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
    val = 0;
  }
  else {
    if (uval < 2) {
      val = 0;
    }
    else if (uval == 2) {
      val = 4;
    }
    else {
      val = (uint)*(ushort *)(arg_eax + 0x3b) * 4 + -4;
    }
    uval_2 = (uint)*(ushort *)(arg_eax + 0x3b);
    if (0x31 < *(ushort *)(arg_eax + 0x3b)) {
      uval_2 = 0x31;
    }
    flag = (&g_data_0018b6d4)[uval_2];
    val_2 = 0;
    uval = *(ushort *)(arg_eax + 0x3b);
    for (loop_i = *(ushort *)(arg_eax + 0x37); loop_i != 0;
        loop_i = *(ushort *)(&g_bss_002d33c6 + (uint)loop_i * 6)) {
      val_2 = room_process_slabmap_tile_0c8268();
      val_2 = extraout_ECX + val_2;
    }
    val = ((val_2 - val) * 0x100) / (int)(((uint)uval * 8 + (uint)flag * 2) - val);
    if (0x100 < val) {
      val = 0x100;
    }
  }
  *(short *)(arg_eax + 0x3f) = (short)val;
  return;
}

/******************************************************************************
 * Function : room_how_room_exist_slabs_0c8654 (Original VA: 0xc8654, Ghidra: FUN_000c8654)
 * Prototype: undefined4 room_how_room_exist_slabs_0c8654(void);
 * Address  : 0xc8654 (Size: 1724 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 326
 * Purpose  : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 7 -> instance_thing_room_04a916, process_players_dungeon_command_packet, shot_update_slab_subtile_columns_06d909, object_update_creature_and_thing_0c3c3c, object_update_creature_and_thing_0c4f70, room_process_dungeon_room_0c6374, room_how_room_exist_slabs_0cae40
 * Callees  : 17 -> dungeon_update_player_dungeon_023787, inits_allocate_dynamic_light_shot_0444a9, mapwho_process_map_subtile_050d3c, person_fn_063b6d, structs_update_creature_control_072af4, room_process_slabmap_tile_0c8268, room_process_dungeon_room_0c8d10, room_how_come_this_bridge_0c9040 ...
 ******************************************************************************/
undefined4 room_how_room_exist_slabs_0c8654(void)

{
  byte *cctrl_ptr;
  byte flag;
  ushort uval;
  ushort uval_2;
  ushort loop_i;
  short short_val;
  int arg_eax;
  int val;
  int slab_coord;
  uint room_ptr;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  uint thing_ptr;
  int extraout_EDX;
  undefined1 arg_bl;
  int *room_ptr_2;
  int local_24;
  
  slab_coord = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[arg_eax * 3] + (&g_subtile_to_slab_lut)[arg_edx * 3] * 0x55) * 6] *
          0x45;
  room_ptr_2 = (int *)(&g_rooms + slab_coord);
  thing_ptr = arg_eax + arg_edx * 0x55;
  dungeon_update_player_dungeon_023787();
  room_lair_thinks_it_belongs_0c9280();
  if (*(short *)(&g_bss_002ddd56 + slab_coord) == 1) {
    if (((*(short *)(&g_room_slabs_count + slab_coord) != 7) && (*(short *)(&g_room_slabs_count + slab_coord) != 1)) &&
       (val = mapwho_process_map_subtile_050d3c(), val != 0)) {
      structs_update_creature_control_072af4();
    }
    room_how_come_this_bridge_0c9040(arg_bl);
    short_val = *(short *)(&g_bss_002ddd52 + slab_coord);
    while (short_val != 0) {
      val = short_val * 6;
      short_val = *(short *)(&g_bss_002d33c6 + val);
      room_lair_thinks_it_belongs_0c9280();
      *(undefined2 *)(&g_bss_002d33c6 + val) = 0;
    }
    if (((*(short *)(&g_room_slabs_count + slab_coord) != 7) && (*(short *)(&g_room_slabs_count + slab_coord) != 1)) &&
       (slab_coord = mapwho_process_map_subtile_050d3c(), slab_coord != 0)) {
      structs_update_creature_control_072af4();
    }
    room_process_dungeon_room_0c98d0();
    slab_process_slabmap_tile_0da6fc();
    return 0;
  }
  room_ptr = (uint)*(ushort *)(&g_bss_002ddd52 + slab_coord);
  if (room_ptr == thing_ptr) {
    if (((*(short *)(&g_room_slabs_count + slab_coord) != 7) && (*(short *)(&g_room_slabs_count + slab_coord) != 1)) &&
       (val = mapwho_process_map_subtile_050d3c(), val != 0)) {
      structs_update_creature_control_072af4();
    }
    *(undefined2 *)(&g_bss_002ddd52 + slab_coord) = *(undefined2 *)(&g_bss_002d33c6 + thing_ptr * 6);
    room_create_room_flag_0d0d80();
  }
  else if (room_ptr != 0) {
    do {
      if (*(ushort *)(&g_bss_002d33c6 + room_ptr * 6) == thing_ptr) {
        *(undefined2 *)(&g_bss_002d33c6 + room_ptr * 6) = *(undefined2 *)(&g_bss_002d33c6 + thing_ptr * 6);
      }
      room_ptr = (uint)*(ushort *)(&g_bss_002d33c6 + room_ptr * 6);
    } while (room_ptr != 0);
  }
  room_how_come_this_bridge_0c9040(arg_bl);
  uval = *(ushort *)(&g_bss_002ddd52 + slab_coord);
  while (thing_ptr = (uint)uval, thing_ptr != 0) {
    (&g_bss_002d33c8)[(thing_ptr % 0x55 + (thing_ptr / 0x55) * 0x55) * 6] = 0;
    uval = *(ushort *)(&g_bss_002d33c6 + thing_ptr * 6);
  }
  uval = *(ushort *)(&g_bss_002ddd52 + slab_coord);
  while (uval != 0) {
    uval_2 = *(ushort *)(&g_bss_002d33c6 + (uint)uval * 6);
    val = room_process_dungeon_room_0caa90();
    if (val == 0) {
      room_process_dungeon_room_0c8d10();
      val = inits_allocate_dynamic_light_shot_0444a9(CONCAT22((uval / 0x55) * 0x300 + 0x80,(uval % 0x55) * 0x300 + 0x80),
                           0x180);
      if (val != 0) {
        *(int *)(val + 0x13) = extraout_ECX_00;
      }
      (&g_bss_002e1086)[(*room_ptr_2 >> 0x18) * 0x542] =
           (&g_bss_002e1086)[(*room_ptr_2 >> 0x18) * 0x542] + extraout_ECX_00;
      (&g_bss_002e1082)[(*room_ptr_2 >> 0x18) * 0x542] =
           (&g_bss_002e1082)[(*room_ptr_2 >> 0x18) * 0x542] + extraout_ECX_00;
      uval = uval_2;
    }
    else {
      uval = *(ushort *)(val + 0x3b);
      if (uval == 0) {
        LbErrorLog(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
        val_2 = 0;
      }
      else {
        if (uval < 2) {
          local_24 = 0;
        }
        else if (uval == 2) {
          local_24 = 4;
        }
        else {
          local_24 = (uint)*(ushort *)(val + 0x3b) * 4 + -4;
        }
        thing_ptr = (uint)*(ushort *)(val + 0x3b);
        if (0x31 < *(ushort *)(val + 0x3b)) {
          thing_ptr = 0x31;
        }
        flag = (&g_data_0018b6d4)[thing_ptr];
        uval = *(ushort *)(val + 0x3b);
        val_2 = 0;
        for (loop_i = *(ushort *)(val + 0x37); loop_i != 0;
            loop_i = *(ushort *)(&g_bss_002d33c6 + (uint)loop_i * 6)) {
          val_2 = room_process_slabmap_tile_0c8268();
          val_2 = extraout_ECX + val_2;
        }
        val_2 = ((val_2 - local_24) * 0x100) /
                 (int)(((uint)uval * 8 + (uint)flag * 2) - local_24);
        if (0x100 < val_2) {
          val_2 = 0x100;
        }
      }
      *(short *)(val + 0x3f) = (short)val_2;
      room_process_dungeon_room_0cb144();
      uval = uval_2;
    }
  }
  if (*room_ptr_2 >> 0x18 != (uint)g_neutral_player_number) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)&g_bss_002ddd58 + slab_coord)];
    if (g_thing_ptrs < thing_ptr) {
      do {
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7e) = 0xffff; /* thing->ccontrol_idx */
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa)]; /* thing->ccontrol_idx */
      } while (g_thing_ptrs < thing_ptr);
    }
    thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6];
    if (g_thing_ptrs < thing_ptr) {
      do {
        if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7e) == -1) { /* thing->ccontrol_idx */
          if ((uint)(byte)(&g_bss_002d33c8)
                          [((&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)] +
                           (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] * 0x55) * 6] * 0x45 == 0) {
            cctrl_ptr = (byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 1); /* thing->ccontrol_idx */
            *cctrl_ptr = *cctrl_ptr & 0xdf;
            *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7e) = 0; /* thing->ccontrol_idx */
            person_fn_063b6d();
          }
          else {
            room_attempt_remove_creature_room_0cdaec();
            room_attempt_add_creature_room_0cd85c();
          }
        }
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
      } while (g_thing_ptrs < thing_ptr);
    }
  }
  room_process_dungeon_room_0c98d0();
  *(undefined2 *)(&g_bss_002d33c6 + extraout_EDX * 6) = 0;
  return 0;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c8d10 (Original VA: 0xc8d10, Ghidra: FUN_000c8d10)
 * Prototype: undefined4 room_process_dungeon_room_0c8d10(void);
 * Address  : 0xc8d10 (Size: 815 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> room_how_room_exist_slabs_0c8654, room_how_room_exist_slabs_0cd4dc
 * Callees  : 8 -> dungeon_update_player_dungeon_023787, mapwho_process_map_subtile_050d3c, structs_update_creature_control_072af4, room_how_come_this_bridge_0c9040, room_lair_thinks_it_belongs_0c9280, room_process_dungeon_room_0c98d0, room_create_room_flag_0d0d80, slab_process_slabmap_tile_0da6fc
 ******************************************************************************/
undefined4 room_process_dungeon_room_0c8d10(void)

{
  short short_val;
  int arg_eax;
  int val;
  int slab_coord;
  uint uval;
  int extraout_ECX;
  int arg_edx;
  undefined1 arg_bl;
  uint room_ptr;
  
  slab_coord = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[arg_eax * 3] + (&g_subtile_to_slab_lut)[arg_edx * 3] * 0x55) * 6] *
          0x45;
  room_ptr = arg_eax + arg_edx * 0x55;
  dungeon_update_player_dungeon_023787();
  room_lair_thinks_it_belongs_0c9280();
  if (*(short *)(&g_bss_002ddd56 + slab_coord) != 1) {
    uval = (uint)*(ushort *)(&g_bss_002ddd52 + slab_coord);
    if (room_ptr == uval) {
      if (((*(short *)(&g_room_slabs_count + slab_coord) != 7) && (*(short *)(&g_room_slabs_count + slab_coord) != 1)) &&
         (val = mapwho_process_map_subtile_050d3c((uval % 0x55) * 3 + 1), val != 0)) {
        structs_update_creature_control_072af4();
      }
      *(undefined2 *)(&g_bss_002ddd52 + slab_coord) = *(undefined2 *)(&g_bss_002d33c6 + room_ptr * 6);
      room_create_room_flag_0d0d80();
    }
    else if (uval != 0) {
      do {
        if (*(ushort *)(&g_bss_002d33c6 + uval * 6) == room_ptr) {
          *(undefined2 *)(&g_bss_002d33c6 + uval * 6) = *(undefined2 *)(&g_bss_002d33c6 + room_ptr * 6);
        }
        uval = (uint)*(ushort *)(&g_bss_002d33c6 + uval * 6);
      } while (uval != 0);
    }
    room_how_come_this_bridge_0c9040(arg_bl);
    *(undefined2 *)(&g_bss_002d33c6 + room_ptr * 6) = 0;
    return 0;
  }
  if (((*(short *)(&g_room_slabs_count + slab_coord) != 7) && (*(short *)(&g_room_slabs_count + slab_coord) != 1)) &&
     (val = mapwho_process_map_subtile_050d3c(), val != 0)) {
    structs_update_creature_control_072af4();
  }
  room_how_come_this_bridge_0c9040(arg_bl);
  short_val = *(short *)(&g_bss_002ddd52 + slab_coord);
  while (short_val != 0) {
    short_val = *(short *)(&g_bss_002d33c6 + short_val * 6);
    room_lair_thinks_it_belongs_0c9280();
    *(undefined2 *)(&g_bss_002d33c6 + extraout_ECX) = 0;
  }
  if (((*(short *)(&g_room_slabs_count + slab_coord) != 7) && (*(short *)(&g_room_slabs_count + slab_coord) != 1)) &&
     (slab_coord = mapwho_process_map_subtile_050d3c(), slab_coord != 0)) {
    structs_update_creature_control_072af4();
  }
  room_process_dungeon_room_0c98d0();
  slab_process_slabmap_tile_0da6fc();
  return 0;
}

/******************************************************************************
 * Function : room_how_come_this_bridge_0c9040 (Original VA: 0xc9040, Ghidra: FUN_000c9040)
 * Prototype: void room_how_come_this_bridge_0c9040(char param_1);
 * Address  : 0xc9040 (Size: 312 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 524
 * Purpose  : String 'How come this bridge was placed on path? Hmmm?'
 * Callers  : 2 -> room_how_room_exist_slabs_0c8654, room_process_dungeon_room_0c8d10
 * Callees  : 3 -> dungeon_update_player_dungeon_02371b, slab_attempt_place_animating_slab_0d7688, LbErrorLog
 ******************************************************************************/
void room_how_come_this_bridge_0c9040(char param_1)

{
  byte flag;
  int arg_eax;
  int arg_edx;
  int arg_ebx;
  
  if (*(short *)(arg_eax + 10) == 0xf) {
    flag = ((&g_slabmap)[(arg_edx + arg_ebx * 0x55) * 6] & 0x1f) >> 3;
    if (flag != 1) {
      if (flag == 2) {
        slab_attempt_place_animating_slab_0d7688(0);
        return;
      }
      LbErrorLog(); /* LbErrorLog("room.cpp", line 524, "How come this bridge was placed on path? Hmmm?") */
      slab_attempt_place_animating_slab_0d7688(0);
      return;
    }
    slab_attempt_place_animating_slab_0d7688(0);
  }
  else {
    if (param_1 != '\0') {
      slab_attempt_place_animating_slab_0d7688(0);
      return;
    }
    slab_attempt_place_animating_slab_0d7688(0);
    dungeon_update_player_dungeon_02371b();
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0c9178 (Original VA: 0xc9178, Ghidra: FUN_000c9178)
 * Prototype: longlong room_fn_0c9178(void);
 * Address  : 0xc9178 (Size: 209 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0c9178
 * Callers  : 0 -> 
 * Callees  : 4 -> mapwho_process_map_subtile_050d3c, structs_update_creature_control_072af4, room_lair_thinks_it_belongs_0c9280, room_process_dungeon_room_0c98d0
 ******************************************************************************/
longlong room_fn_0c9178(void)

{
  short short_val;
  int arg_eax;
  int val;
  int extraout_ECX;
  uint arg_edx;
  
  short_val = *(short *)(arg_eax + 0x37);
  while (short_val != 0) {
    short_val = *(short *)(&g_bss_002d33c6 + short_val * 6);
    room_lair_thinks_it_belongs_0c9280();
    *(undefined2 *)(&g_bss_002d33c6 + extraout_ECX) = 0;
  }
  if ((*(short *)(arg_eax + 10) != 7) && (*(short *)(arg_eax + 10) != 1)) {
    val = mapwho_process_map_subtile_050d3c();
    if (val != 0) {
      structs_update_creature_control_072af4();
    }
  }
  room_process_dungeon_room_0c98d0();
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : room_lair_thinks_it_belongs_0c9280 (Original VA: 0xc9280, Ghidra: FUN_000c9280)
 * Prototype: void room_lair_thinks_it_belongs_0c9280(void);
 * Address  : 0xc9280 (Size: 1616 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 747, 752
 * Purpose  : String 'Lair thinks it belongs to a creature, but the creature disag'
 * Callers  : 3 -> room_how_room_exist_slabs_0c8654, room_process_dungeon_room_0c8d10, room_fn_0c9178
 * Callees  : 15 -> effect_allocate_light_effect_024998, lair_attempt_remove_creature_lair_04d3d4, lair_process_map_subtile_04dc89, magic_remove_spell_player_as_04fdac, mapwho_fn_050ea6, mapwho_process_map_subtile_05131e, person_fn_063b6d, structs_update_creature_control_072af4 ...
 ******************************************************************************/
void room_lair_thinks_it_belongs_0c9280(void)

{
  byte flag;
  code *str_ptr;
  byte *thing_ptr;
  int room_off;
  char ch;
  undefined2 uval;
  byte *thing_ptr_2;
  int room_ptr;
  byte arg_dl;
  short short_val;
  byte arg_bl;
  undefined1 *word_ptr;
  int val;
  bool flag_2;
  undefined4 auStack_44 [3];
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined2 uStack_1a;
  short sStack_18;
  
  word_ptr = local_38;
  room_off = (uint)(byte)(&g_bss_002d33c8)
                      [((&g_subtile_to_slab_lut)[(uint)arg_dl * 3] +
                       (&g_subtile_to_slab_lut)[(uint)arg_bl * 3] * 0x55) * 6] * 0x45;
  short_val = (ushort)arg_bl * 0x55 + (ushort)arg_dl;
  _uStack_1a = CONCAT22(short_val,uStack_1a);
  local_28 = ((int)short_val % 0x55) * 3;
  local_30 = ((int)short_val / 0x55) * 3;
  local_24 = local_28 + 3;
  local_2c = local_30 + 3;
  (&g_bss_002d33c8)[((uint)arg_bl * 0x55 + (uint)arg_dl) * 6] = 0;
  room_ptr = local_30 - local_2c;
  flag_2 = SBORROW4(local_30,local_2c);
  while (flag_2 != room_ptr < 0) {
    *(int *)(word_ptr + 0x18) = *(int *)(word_ptr + 0x10);
    if (*(int *)(word_ptr + 0x10) < *(int *)(word_ptr + 0x14)) {
      *(int *)(word_ptr + 0x1c) = *(int *)(word_ptr + 0x10) * 5 + *(int *)(word_ptr + 8) * 0x500;
      do {
        thing_ptr_2 = (&g_thing_ptrs)
                 [(*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x3fffff) >> 0xb];
        if (g_thing_ptrs < thing_ptr_2) {
          room_ptr = *(int *)(word_ptr + 0x1c);
          do {
            if (thing_ptr_2[0x1f] == 5) {
              if ((thing_ptr_2[7] == 0x58) || (thing_ptr_2[7] == 0x5c)) {
                *(undefined4 *)(word_ptr + -4) = 0;
                *(undefined4 *)(word_ptr + -8) = 0;
                *(undefined4 *)(word_ptr + -0xc) = 0xc940d;
                creature_how_hero_have_tend_08608c();
                thing_ptr_2 = (&g_thing_ptrs)
                         [(*(uint *)((int)&g_map_subtiles + room_ptr + 1) & 0x3fffff) >> 0xb];
                word_ptr = word_ptr + -8;
              }
              else if (thing_ptr_2[6] == (&g_bss_002ddd1e)[room_off]) {
                *(undefined4 *)(word_ptr + -4) = 0xc9431;
                person_fn_063b6d();
              }
            }
            thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
          } while (g_thing_ptrs < thing_ptr_2);
        }
        switch(*(undefined2 *)(&g_room_slabs_count + room_off)) {
        case 2:
          if (*(byte *)((int)&g_bss_0019e973 +
                       (*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x7ff) * 0x18
                       + 2) >> 4 == 1) {
            *(undefined4 *)(word_ptr + -4) = 0xc94a0;
            room_ptr = mapwho_process_map_subtile_05131e();
            if (room_ptr != 0) {
              flag = word_ptr[0x24];
              *(int *)(&g_bss_002ddd32 + room_off) =
                   *(int *)(&g_bss_002ddd32 + room_off) - *(int *)(room_ptr + 0x13);
              (&g_bss_002e1082)[(uint)flag * 0x542] =
                   (&g_bss_002e1082)[(uint)flag * 0x542] - *(int *)(room_ptr + 0x13);
              *(undefined4 *)(word_ptr + -4) = 0xc94d5;
              mapwho_fn_050ea6();
              *(undefined4 *)(word_ptr + -4) = 0xc94de;
              structs_update_creature_control_072af4();
            }
          }
          break;
        case 3:
          thing_ptr_2 = (&g_thing_ptrs)
                   [(*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x3fffff) >> 0xb
                   ];
          if ((&g_thing_ptrs)
              [(*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x3fffff) >> 0xb] !=
              g_thing_ptrs) {
            do {
              thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
              if (((thing_ptr_2[0x1f] == 1) && ((&g_data_0019103e)[thing_ptr_2[0x1a]] != '\0')) &&
                 ((*thing_ptr_2 & 0x80) == 0)) {
                *(undefined4 *)(word_ptr + -4) = 0xc9554;
                ch = room_could_find_valid_random_0cd1d4();
                if (ch == '\0') {
                  *(undefined4 *)(word_ptr + -4) = 0xc958d;
                  room_ptr = room_process_dungeon_room_0ccd6c();
                  if (room_ptr == 0) {
                    if (*(int *)(thing_ptr_2 + 3) >> 0x18 != (uint)g_neutral_player_number) {
                      *(undefined4 *)(word_ptr + -4) = 0xc9642;
                      magic_remove_spell_player_as_04fdac();
                    }
                    *(undefined4 *)(word_ptr + -4) = 0xc964b;
                    structs_update_creature_control_072af4();
                  }
                  else {
                    *(undefined4 *)(word_ptr + -4) = 0xc959e;
                    uval = move_process_map_subtile_0b28e8();
                    *(undefined2 *)(word_ptr + 4) = uval;
                    *(undefined4 *)(word_ptr + -4) = 0xc95ae;
                    move_fn_0b3b10();
                    *(undefined4 *)(word_ptr + -4) = 0xc95bd;
                    effect_allocate_light_effect_024998();
                    room_ptr = (uint)*(ushort *)
                                   (&g_room_slabs_count +
                                   (uint)(byte)(&g_bss_002d33c8)
                                               [((&g_subtile_to_slab_lut)[thing_ptr_2[0xe]] +
                                                (&g_subtile_to_slab_lut)[thing_ptr_2[0x10]] * 0x55) * 6] * 0x45) *
                            0x17;
                    if (*(int *)(&g_data_0018ebb1 + room_ptr) != 0) {
                      str_ptr = *(code **)(&g_data_0018ebb1 + room_ptr);
                      *(undefined4 *)(word_ptr + -4) = 0xc960a;
                      (*str_ptr)();
                    }
                    if (*(int *)(&g_data_0018ebb5 + room_ptr) != 0) {
                      str_ptr = *(code **)(&g_data_0018ebb5 + room_ptr);
                      *(undefined4 *)(word_ptr + -4) = 0xc9619;
                      (*str_ptr)();
                    }
                  }
                }
                else {
                  *(undefined4 *)(word_ptr + -4) = 0xc9561;
                  uval = move_process_map_subtile_0b28e8();
                  *(undefined2 *)(word_ptr + 4) = uval;
                  *(undefined4 *)(word_ptr + -4) = 0xc9571;
                  move_fn_0b3b10();
                  *(undefined4 *)(word_ptr + -4) = 0xc9580;
                  effect_allocate_light_effect_024998();
                }
              }
              thing_ptr_2 = thing_ptr;
            } while (thing_ptr != g_thing_ptrs);
          }
          break;
        case 8:
          thing_ptr_2 = (&g_thing_ptrs)
                   [(*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x3fffff) >> 0xb
                   ];
          if ((&g_thing_ptrs)
              [(*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x3fffff) >> 0xb] !=
              g_thing_ptrs) {
            do {
              thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
              if (((thing_ptr_2[0x1f] == 1) && ((&g_data_0019116c)[thing_ptr_2[0x1a]] != '\0')) &&
                 ((thing_ptr_2[1] & 1) == 0)) {
                *(undefined4 *)(word_ptr + -4) = 0xc96c3;
                ch = room_could_find_valid_random_0cd1d4();
                if (ch == '\0') {
                  *(undefined4 *)(word_ptr + -4) = 0xc96fc;
                  room_ptr = room_process_dungeon_room_0ccd6c();
                  if (room_ptr == 0) {
                    *(undefined4 *)(word_ptr + -4) = 0xc97ab;
                    workshop_item_class_077a5b();
                    *(undefined4 *)(word_ptr + -4) = 0xc97b4;
                    structs_update_creature_control_072af4();
                  }
                  else {
                    *(undefined4 *)(word_ptr + -4) = 0xc970d;
                    uval = move_process_map_subtile_0b28e8();
                    *(undefined2 *)(word_ptr + 4) = uval;
                    *(undefined4 *)(word_ptr + -4) = 0xc971d;
                    move_fn_0b3b10();
                    *(undefined4 *)(word_ptr + -4) = 0xc972c;
                    effect_allocate_light_effect_024998();
                    room_ptr = (uint)*(ushort *)
                                   (&g_room_slabs_count +
                                   (uint)(byte)(&g_bss_002d33c8)
                                               [((&g_subtile_to_slab_lut)[thing_ptr_2[0xe]] +
                                                (&g_subtile_to_slab_lut)[thing_ptr_2[0x10]] * 0x55) * 6] * 0x45) *
                            0x17;
                    if (*(int *)(&g_data_0018ebb1 + room_ptr) != 0) {
                      str_ptr = *(code **)(&g_data_0018ebb1 + room_ptr);
                      *(undefined4 *)(word_ptr + -4) = 0xc9779;
                      (*str_ptr)();
                    }
                    if (*(int *)(&g_data_0018ebb5 + room_ptr) != 0) {
                      str_ptr = *(code **)(&g_data_0018ebb5 + room_ptr);
                      *(undefined4 *)(word_ptr + -4) = 0xc9788;
                      (*str_ptr)();
                    }
                  }
                }
                else {
                  *(undefined4 *)(word_ptr + -4) = 0xc96d0;
                  uval = move_process_map_subtile_0b28e8();
                  *(undefined2 *)(word_ptr + 4) = uval;
                  *(undefined4 *)(word_ptr + -4) = 0xc96e0;
                  move_fn_0b3b10();
                  *(undefined4 *)(word_ptr + -4) = 0xc96ef;
                  effect_allocate_light_effect_024998();
                }
              }
              thing_ptr_2 = thing_ptr;
            } while (thing_ptr != g_thing_ptrs);
          }
          break;
        case 0xd:
          thing_ptr_2 = (&g_thing_ptrs)
                   [(*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x3fffff) >> 0xb
                   ];
          if ((&g_thing_ptrs)
              [(*(uint *)((int)&g_map_subtiles + *(int *)(word_ptr + 0x1c) + 1) & 0x3fffff) >> 0xb] !=
              g_thing_ptrs) {
            do {
              thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
              if ((thing_ptr_2[0x1f] == 1) &&
                 ((((flag = thing_ptr_2[0x1a], flag == 9 || (flag == 0x28)) || (flag == 0x29)) ||
                  ((flag == 0x2a || (flag == 10)))))) {
                *(undefined4 *)(word_ptr + -4) = 0xc982a;
                structs_update_creature_control_072af4();
              }
              thing_ptr_2 = thing_ptr;
            } while (thing_ptr != g_thing_ptrs);
          }
          break;
        case 0xe:
          *(undefined4 *)(word_ptr + -4) = 0xc983f;
          room_ptr = lair_process_map_subtile_04dc89();
          if (room_ptr != 0) {
            if (*(short *)(room_ptr + 0x13) == 0) {
              *(undefined4 *)(word_ptr + -4) = 0xc98a3;
              LbErrorLog(); /* LbErrorLog("room.cpp", line 747, "Lair thinks it belongs to a creature, but the creature disagrees.") */
            }
            else if (*(short *)(room_ptr + 0x1b) ==
                     *(short *)((&g_creature_ctrl_ptrs)
                                [*(ushort *)((int)(&g_thing_ptrs)[*(ushort *)(room_ptr + 0x13)] + 100)]
                               + 0x6a)) {
              *(undefined4 *)(word_ptr + -4) = 0xc9877;
              lair_attempt_remove_creature_lair_04d3d4();
            }
            else {
              *(undefined4 *)(word_ptr + -4) = 0xc988d;
              LbErrorLog(); /* LbErrorLog("room.cpp", line 752, "This lair has no owner!!!") */
            }
          }
        }
        room_ptr = *(int *)(word_ptr + 0x18);
        *(int *)(word_ptr + 0x1c) = *(int *)(word_ptr + 0x1c) + 5;
        *(int *)(word_ptr + 0x18) = room_ptr + 1;
      } while (room_ptr + 1 < *(int *)(word_ptr + 0x14));
    }
    val = *(int *)(word_ptr + 8) + 1;
    *(int *)(word_ptr + 8) = val;
    room_ptr = val - *(int *)(word_ptr + 0xc);
    flag_2 = SBORROW4(val,*(int *)(word_ptr + 0xc));
  }
  return;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c98d0 (Original VA: 0xc98d0, Ghidra: FUN_000c98d0)
 * Prototype: void room_process_dungeon_room_0c98d0(void);
 * Address  : 0xc98d0 (Size: 181 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 5 -> room_how_room_exist_slabs_0c8654, room_process_dungeon_room_0c8d10, room_fn_0c9178, room_process_dungeon_room_0cc65c, room_how_room_exist_slabs_0cd4dc
 * Callees  : 1 -> structs_process_dungeon_room_072c25
 ******************************************************************************/
void room_process_dungeon_room_0c98d0(void)

{
  ushort uval;
  int *arg_eax;
  int dungeon_off;
  
  if (*arg_eax >> 0x18 != (uint)g_neutral_player_number) {
    dungeon_off = (*arg_eax >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10) * 2;
    if (*(short *)((int)arg_eax + 1) == *(short *)(&g_bss_002e0594 + dungeon_off)) {
      *(undefined2 *)(&g_bss_002e0594 + dungeon_off) = *(undefined2 *)((int)arg_eax + 6);
      *(undefined2 *)(&g_bss_002ddd1f + (uint)*(ushort *)((int)arg_eax + 6) * 0x45) = 0;
    }
    else {
      uval = *(ushort *)(arg_eax + 1);
      *(ushort *)(&g_bss_002ddd1f + (uint)*(ushort *)((int)arg_eax + 6) * 0x45) = uval;
      *(undefined2 *)(&g_bss_002ddd21 + (uint)uval * 0x45) = *(undefined2 *)((int)arg_eax + 6);
    }
    (&g_bss_002e0b4b)[(uint)*(ushort *)((int)arg_eax + 10) + (*arg_eax >> 0x18) * 0x1508] =
         (&g_bss_002e0b4b)[(uint)*(ushort *)((int)arg_eax + 10) + (*arg_eax >> 0x18) * 0x1508] + -1;
  }
  structs_process_dungeon_room_072c25();
  return;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c9988 (Original VA: 0xc9988, Ghidra: FUN_000c9988)
 * Prototype: undefined1 * room_process_dungeon_room_0c9988(void);
 * Address  : 0xc9988 (Size: 419 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 8 -> angtool_update_player_view_state_011b51, entrance_update_player_view_state_026c6d, entrance_update_creature_control_026dbc, group_update_player_view_state_03a2ad, moodneed_shit_could_get_treasure_0525b2, food_attempting_move_garden_we_0ab2c8, object_update_creature_and_thing_0c3c3c, object_update_creature_and_thing_0c4f70
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0c9988(void)

{
  char ch;
  int thing;
  undefined1 *room_ptr;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  char arg_dl;
  uint uval;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  char arg_bl;
  int val;
  int val_2;
  undefined1 *local_1c;
  char cStack_14;
  
  val = 0x7fffffff;
  local_1c = (undefined1 *)0x0;
  if (arg_bl == -1) {
    for (cStack_14 = '\x01'; cStack_14 < 0x11; cStack_14 = cStack_14 + '\x01') {
      room_ptr = &g_rooms +
               (uint)*(ushort *)(&g_bss_002e0594 + cStack_14 * 2 + arg_dl * 0x1508) * 0x45;
      if (&g_rooms < room_ptr) {
        do {
          uval = (uint)*(byte *)(thing + 0xe) - (uint)(byte)room_ptr[8];
          uval_2 = (int)uval >> 0x1f;
          uval_3 = (uint)*(byte *)(thing + 0x10) - (uint)(byte)room_ptr[9];
          uval_4 = (int)uval_3 >> 0x1f;
          val_2 = ((uval ^ uval_2) - uval_2) + ((uval_3 ^ uval_4) - uval_4);
          if (((val_2 < val) && (ch = room_could_find_valid_first_0ccc08(), room_ptr = extraout_ECX, ch != '\0')) &&
             ((*(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
              (ch = creature_fn_082774(), room_ptr = extraout_ECX_00, ch != '\0')))) {
            val = val_2;
            local_1c = room_ptr;
          }
          room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
        } while (&g_rooms < room_ptr);
      }
    }
  }
  else {
    room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_bl * 2 + arg_dl * 0x1508) * 0x45
    ;
    if (&g_rooms < room_ptr) {
      do {
        uval = (uint)*(byte *)(thing + 0xe) - (uint)(byte)room_ptr[8];
        uval_2 = (int)uval >> 0x1f;
        uval_3 = (uint)*(byte *)(thing + 0x10) - (uint)(byte)room_ptr[9];
        uval_4 = (int)uval_3 >> 0x1f;
        val_2 = ((uval ^ uval_2) - uval_2) + ((uval_3 ^ uval_4) - uval_4);
        if (((val_2 < val) && (ch = room_could_find_valid_first_0ccc08(), room_ptr = extraout_ECX_01, ch != '\0'))
           && ((*(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
               (ch = creature_fn_082774(), room_ptr = extraout_ECX_02, ch != '\0')))) {
          val = val_2;
          local_1c = room_ptr;
        }
        room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
      } while (&g_rooms < room_ptr);
    }
  }
  return local_1c;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c9b2c (Original VA: 0xc9b2c, Ghidra: FUN_000c9b2c)
 * Prototype: undefined4 room_process_dungeon_room_0c9b2c(void);
 * Address  : 0xc9b2c (Size: 864 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> moodneed_this_shouldn_happen_052362, light_update_creature_control_0ac094
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined4 room_process_dungeon_room_0c9b2c(void)

{
  char ch;
  int thing;
  int val;
  undefined1 *room_ptr;
  uint rand_seed;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uval;
  char arg_dl;
  char arg_bl;
  int val_2;
  uint rand_seed_2;
  int local_24;
  undefined4 local_20;
  undefined4 local_13;
  
  val = (int)arg_bl;
  local_20 = 0;
  if (val == -1) {
    rand_seed_2 = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = rand_seed_2 >> 0xd | rand_seed_2 * 0x80000;
    local_24 = 0;
    local_13 = CONCAT13((char)((ulonglong)g_action_random_seed % 0x11),(undefined3)local_13);
    do {
      val = local_13 >> 0x18;
      rand_seed_2 = 0;
      room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + val * 2 + arg_dl * 0x1508) * 0x45;
      if (&g_rooms < room_ptr) {
        do {
          room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
          rand_seed_2 = rand_seed_2 + 1;
        } while (&g_rooms < room_ptr);
      }
      if (rand_seed_2 != 0) {
        rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
        rand_seed = g_action_random_seed % rand_seed_2;
        room_ptr = &g_rooms +
                 (uint)*(ushort *)(&g_bss_002e0594 + val * 2 + arg_dl * 0x1508) * 0x45;
        if (&g_rooms < room_ptr) {
          do {
            if ((int)rand_seed < 1) break;
            room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
            rand_seed = rand_seed - 1;
          } while (&g_rooms < room_ptr);
        }
        val_2 = 0;
        if (0 < (int)rand_seed_2) {
          do {
            ch = room_could_find_valid_first_0ccc08();
            if (ch != '\0') {
              if (*(char *)(thing + 0x1f) != '\x05') { /* thing->class_id */
                return extraout_ECX;
              }
              ch = creature_fn_082774();
              if (ch != '\0') {
                return extraout_ECX_00;
              }
            }
            val_2 = val_2 + 1;
          } while (val_2 < (int)rand_seed_2);
        }
      }
      local_24 = local_24 + 1;
      local_13 = CONCAT13((char)((val + 1) % 0x11),(undefined3)local_13);
    } while (local_24 < 0x11);
  }
  else {
    rand_seed_2 = 0;
    room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + val * 2 + arg_dl * 0x1508) * 0x45;
    if (&g_rooms < room_ptr) {
      do {
        room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
        rand_seed_2 = rand_seed_2 + 1;
      } while (&g_rooms < room_ptr);
    }
    if (rand_seed_2 != 0) {
      rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
      rand_seed = g_action_random_seed % rand_seed_2;
      room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + val * 2 + arg_dl * 0x1508) * 0x45;
      if (&g_rooms < room_ptr) {
        do {
          if ((int)rand_seed < 1) break;
          room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
          rand_seed = rand_seed - 1;
        } while (&g_rooms < room_ptr);
      }
      val = 0;
      if ((int)rand_seed_2 < 1) {
        return 0;
      }
      do {
        ch = room_could_find_valid_first_0ccc08();
        if ((ch != '\0') &&
           ((uval = extraout_ECX_01, *(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
            (ch = creature_fn_082774(), uval = extraout_ECX_02, ch != '\0')))) {
          return uval;
        }
        val = val + 1;
      } while (val < (int)rand_seed_2);
    }
  }
  return local_20;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0c9e8c (Original VA: 0xc9e8c, Ghidra: FUN_000c9e8c)
 * Prototype: int room_process_dungeon_room_0c9e8c(void);
 * Address  : 0xc9e8c (Size: 955 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> research_could_find_room_thing_066dc2, workshop_what_hell_have_we_076d56
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
int room_process_dungeon_room_0c9e8c(void)

{
  char ch;
  int thing;
  undefined1 *room_ptr;
  int extraout_ECX;
  int extraout_ECX_00;
  int val;
  int extraout_ECX_01;
  int extraout_ECX_02;
  char arg_dl;
  int val_2;
  uint room_ptr_2;
  char arg_bl;
  int val_3;
  int val_4;
  uint rand_seed;
  int local_24;
  int iStack_20;
  undefined4 local_17;
  
  local_24 = 0;
  val_2 = (int)arg_dl;
  if (arg_bl == -1) {
    rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
    iStack_20 = 0;
    local_17 = CONCAT13((char)((ulonglong)g_action_random_seed % 0x11),(undefined3)local_17);
    do {
      val_4 = local_17 >> 0x18;
      rand_seed = 0;
      room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + val_4 * 2 + arg_dl * 0x1508) * 0x45;
      if (&g_rooms < room_ptr) {
        do {
          if (*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe)) {
            rand_seed = rand_seed + 1;
          }
          room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
        } while (&g_rooms < room_ptr);
      }
      if (rand_seed != 0) {
        room_ptr_2 = g_action_random_seed * 0x24a1 + 0x24df;
        g_action_random_seed = room_ptr_2 >> 0xd | room_ptr_2 * 0x80000;
        room_ptr_2 = g_action_random_seed % rand_seed;
        room_ptr = &g_rooms +
                 (uint)*(ushort *)(&g_bss_002e0594 + val_4 * 2 + arg_dl * 0x1508) * 0x45;
        if (&g_rooms < room_ptr) {
          while (-1 < (int)room_ptr_2) {
            if (((*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe)) &&
                (room_ptr_2 = room_ptr_2 - 1, (int)room_ptr_2 < 0)) ||
               (room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45,
               room_ptr <= &g_rooms)) break;
          }
        }
        val_3 = 0;
        if (0 < (int)rand_seed) {
          do {
            if (*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe)) {
              ch = room_could_find_valid_first_0ccc08();
              val = extraout_ECX;
              if (ch != '\0') {
                if (*(char *)(thing + 0x1f) != '\x05') { /* thing->class_id */
                  return extraout_ECX;
                }
                ch = creature_fn_082774();
                val = extraout_ECX_00;
                if (ch != '\0') {
                  return extraout_ECX_00;
                }
              }
              room_ptr = &g_rooms + (uint)*(ushort *)(val + 6) * 0x45;
              if (room_ptr == &g_rooms) {
                room_ptr = &g_rooms +
                         (uint)*(ushort *)(&g_bss_002e0594 + val_4 * 2 + val_2 * 0x1508) * 0x45;
              }
            }
            val_3 = val_3 + 1;
          } while (val_3 < (int)rand_seed);
        }
      }
      iStack_20 = iStack_20 + 1;
      local_17 = CONCAT13((char)((val_4 + 1) % 0x11),(undefined3)local_17);
    } while (iStack_20 < 0x11);
  }
  else {
    room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_bl * 2 + val_2 * 0x1508) * 0x45
    ;
    rand_seed = 0;
    if (&g_rooms < room_ptr) {
      do {
        if (*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe)) {
          rand_seed = rand_seed + 1;
        }
        room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
      } while (&g_rooms < room_ptr);
    }
    if (rand_seed != 0) {
      room_ptr_2 = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = room_ptr_2 >> 0xd | room_ptr_2 * 0x80000;
      room_ptr_2 = g_action_random_seed % rand_seed;
      room_ptr = &g_rooms +
               (uint)*(ushort *)(&g_bss_002e0594 + arg_bl * 2 + val_2 * 0x1508) * 0x45;
      if (&g_rooms < room_ptr) {
        do {
          if (((int)room_ptr_2 < 0) ||
             ((*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe) &&
              (room_ptr_2 = room_ptr_2 - 1, (int)room_ptr_2 < 0)))) break;
          room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
        } while (&g_rooms < room_ptr);
      }
      val_4 = 0;
      if ((int)rand_seed < 1) {
        return 0;
      }
      do {
        if (*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe)) {
          ch = room_could_find_valid_first_0ccc08();
          val_3 = extraout_ECX_01;
          if ((ch != '\0') &&
             ((*(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
              (ch = creature_fn_082774(), val_3 = extraout_ECX_02, ch != '\0')))) {
            return val_3;
          }
          room_ptr = &g_rooms + (uint)*(ushort *)(val_3 + 6) * 0x45;
          if (room_ptr == &g_rooms) {
            room_ptr = &g_rooms +
                     (uint)*(ushort *)(&g_bss_002e0594 + arg_bl * 2 + val_2 * 0x1508) * 0x45;
          }
        }
        val_4 = val_4 + 1;
      } while (val_4 < (int)rand_seed);
    }
  }
  return local_24;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca248 (Original VA: 0xca248, Ghidra: FUN_000ca248)
 * Prototype: undefined1 * room_process_dungeon_room_0ca248(void);
 * Address  : 0xca248 (Size: 259 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca248(void)

{
  char ch;
  int thing;
  uint uval;
  undefined1 *room_ptr;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char arg_dl;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  char arg_bl;
  int val;
  int val_2;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  
  val = 0x7fffffff;
  local_24 = (undefined1 *)0x0;
  local_20 = 1;
  local_1c = 2;
  do {
    if ((arg_bl != local_20) &&
       (room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_dl * 0x1508 + local_1c) * 0x45
       , &g_rooms < room_ptr)) {
      do {
        uval_2 = (uint)*(byte *)(thing + 0xe) - (uint)(byte)room_ptr[8];
        uval_3 = (int)uval_2 >> 0x1f;
        uval = (uint)*(byte *)(thing + 0x10) - (uint)(byte)room_ptr[9];
        uval_4 = (int)uval >> 0x1f;
        val_2 = ((uval_2 ^ uval_3) - uval_3) + ((uval ^ uval_4) - uval_4);
        if (((val_2 < val) && (ch = room_could_find_valid_first_0ccc08(), room_ptr = extraout_ECX, ch != '\0')) &&
           ((*(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
            (ch = creature_fn_082774(), room_ptr = extraout_ECX_00, ch != '\0')))) {
          val = val_2;
          local_24 = room_ptr;
        }
        room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
      } while (&g_rooms < room_ptr);
    }
    local_1c = local_1c + 2;
    local_20 = local_20 + 1;
  } while (local_20 < 0x11);
  return local_24;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca34c (Original VA: 0xca34c, Ghidra: FUN_000ca34c)
 * Prototype: undefined1 * room_process_dungeon_room_0ca34c(void);
 * Address  : 0xca34c (Size: 295 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> angtool_update_creature_control_0119bc, good_update_creature_control_038faa
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca34c(void)

{
  char ch;
  int thing;
  uint uval;
  char arg_cl;
  undefined1 *room_ptr;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char arg_dl;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  char arg_bl;
  int val;
  int val_2;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  
  val = 0x7fffffff;
  local_1c = (undefined1 *)0x0;
  local_24 = 1;
  local_20 = 2;
  do {
    if (((arg_bl != local_24) && (arg_cl != local_24)) &&
       (room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_dl * 0x1508 + local_20) * 0x45
       , &g_rooms < room_ptr)) {
      do {
        uval_2 = (uint)*(byte *)(thing + 0xe) - (uint)(byte)room_ptr[8];
        uval_3 = (int)uval_2 >> 0x1f;
        uval = (uint)*(byte *)(thing + 0x10) - (uint)(byte)room_ptr[9];
        uval_4 = (int)uval >> 0x1f;
        val_2 = ((uval_2 ^ uval_3) - uval_3) + ((uval ^ uval_4) - uval_4);
        if (((val_2 < val) && (ch = room_could_find_valid_first_0ccc08(), room_ptr = extraout_ECX, ch != '\0')) &&
           ((*(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
            (ch = creature_fn_082774(), room_ptr = extraout_ECX_00, ch != '\0')))) {
          val = val_2;
          local_1c = room_ptr;
        }
        room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
      } while (&g_rooms < room_ptr);
    }
    local_20 = local_20 + 2;
    local_24 = local_24 + 1;
  } while (local_24 < 0x11);
  return local_1c;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca474 (Original VA: 0xca474, Ghidra: FUN_000ca474)
 * Prototype: undefined1 * room_process_dungeon_room_0ca474(int param_1);
 * Address  : 0xca474 (Size: 241 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 7 -> angtool_update_creature_control_011a81, evil_update_creature_control_028851, moodneed_this_shouldn_happen_052362, moodneed_shit_could_get_treasure_0525b2, prison_update_creature_and_thing_06616d, food_get_near_food_0aafd4, food_attempting_move_garden_we_0ab2c8
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca474(int param_1)

{
  char ch;
  int thing;
  undefined1 *room_ptr;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char arg_dl;
  uint uval;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  char arg_bl;
  int val;
  int val_2;
  undefined1 *local_14;
  
  val = 0x7fffffff;
  local_14 = (undefined1 *)0x0;
  room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_bl * 2 + arg_dl * 0x1508) * 0x45;
  if (&g_rooms < room_ptr) {
    do {
      if ((((param_1 <= (int)(uint)*(ushort *)(room_ptr + 0x10)) &&
           (uval = (uint)*(byte *)(thing + 0xe) - (uint)(byte)room_ptr[8],
           uval_2 = (int)uval >> 0x1f,
           uval_3 = (uint)*(byte *)(thing + 0x10) - (uint)(byte)room_ptr[9],
           uval_4 = (int)uval_3 >> 0x1f, val_2 = ((uval ^ uval_2) - uval_2) + ((uval_3 ^ uval_4) - uval_4)
           , val_2 < val)) && (ch = room_could_find_valid_first_0ccc08(), room_ptr = extraout_ECX, ch != '\0')) &&
         ((*(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
          (ch = creature_fn_082774(), room_ptr = extraout_ECX_00, ch != '\0')))) {
        val = val_2;
        local_14 = room_ptr;
      }
      room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
    } while (&g_rooms < room_ptr);
  }
  return local_14;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca568 (Original VA: 0xca568, Ghidra: FUN_000ca568)
 * Prototype: undefined1 * room_process_dungeon_room_0ca568(int param_1);
 * Address  : 0xca568 (Size: 244 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 10 -> anger_hurrah_mental_instability_creature_01073a, evil_update_creature_control_02796f, impset_update_creature_and_thing_03c91b, impset_update_creature_and_thing_03ca68, impset_update_creature_control_03df64, impset_update_player_dungeon_03e33a, impset_stack_type_03e493, person_update_creature_and_thing_0641a6 ...
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca568(int param_1)

{
  char ch;
  int thing;
  undefined1 *room_ptr;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char arg_dl;
  uint uval;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  char arg_bl;
  int val;
  int val_2;
  undefined1 *local_14;
  
  val = 0x7fffffff;
  local_14 = (undefined1 *)0x0;
  room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_bl * 2 + arg_dl * 0x1508) * 0x45;
  if (room_ptr < &g_bss_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    uval = (uint)*(byte *)(thing + 0xe) - (uint)(byte)room_ptr[8];
    uval_2 = (int)uval >> 0x1f;
    uval_3 = (uint)*(byte *)(thing + 0x10) - (uint)(byte)room_ptr[9];
    uval_4 = (int)uval_3 >> 0x1f;
    val_2 = ((uval ^ uval_2) - uval_2) + ((uval_3 ^ uval_4) - uval_4);
    if ((val_2 < val) &&
       ((int)(param_1 + (uint)*(ushort *)(room_ptr + 0x10)) <= (int)(uint)*(ushort *)(room_ptr + 0xe)))
    {
      ch = room_could_find_valid_first_0ccc08();
      room_ptr = extraout_ECX;
      if (ch != '\0') {
        if (*(char *)(thing + 0x1f) == '\x05') { /* thing->class_id */
          ch = creature_fn_082774();
          room_ptr = extraout_ECX_00;
          if (ch == '\0') goto LAB_000ca5c1;
        }
        val = val_2;
        local_14 = room_ptr;
      }
    }
LAB_000ca5c1:
    room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
    if (room_ptr < &g_bss_002ddd1c) {
      return local_14;
    }
  } while( true );
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca65c (Original VA: 0xca65c, Ghidra: FUN_000ca65c)
 * Prototype: undefined1 * room_process_dungeon_room_0ca65c(void);
 * Address  : 0xca65c (Size: 96 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 7 -> impset_process_slabmap_tile_03bdb1, impset_process_slabmap_tile_03bfa4, impset_update_creature_and_thing_03c53a, impset_update_creature_and_thing_03c762, impset_stack_type_03e493, research_illegal_research_type_process_066b28, workshop_door_choice_076b29
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca65c(void)

{
  uint arg_eax;
  undefined1 *room_ptr;
  char arg_dl;
  
  room_ptr = &g_rooms +
           (uint)*(ushort *)(&g_bss_002e0594 + arg_dl * 2 + (arg_eax & 0xff) * 0x1508) * 0x45;
  if (room_ptr < &g_bss_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    if (*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe)) {
      return room_ptr;
    }
    room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
  } while (&g_rooms < room_ptr);
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca6bc (Original VA: 0xca6bc, Ghidra: FUN_000ca6bc)
 * Prototype: undefined1 * room_process_dungeon_room_0ca6bc(void);
 * Address  : 0xca6bc (Size: 239 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 4 -> impset_update_creature_and_thing_03c53a, impset_update_creature_and_thing_03c762, impset_stack_type_03e493, person_update_creature_and_thing_064703
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca6bc(void)

{
  char ch;
  int thing;
  uint uval;
  undefined1 *room_ptr;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  char arg_dl;
  uint uval_2;
  uint uval_3;
  uint uval_4;
  char arg_bl;
  int val;
  int val_2;
  undefined1 *local_14;
  
  val = 0x7fffffff;
  local_14 = (undefined1 *)0x0;
  room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_bl * 2 + arg_dl * 0x1508) * 0x45;
  if (&g_rooms < room_ptr) {
    do {
      uval_2 = (uint)*(byte *)(thing + 0xe) - (uint)(byte)room_ptr[8];
      uval_3 = (int)uval_2 >> 0x1f;
      uval = (uint)*(byte *)(thing + 0x10) - (uint)(byte)room_ptr[9];
      uval_4 = (int)uval >> 0x1f;
      val_2 = ((uval_2 ^ uval_3) - uval_3) + ((uval ^ uval_4) - uval_4);
      if ((((val_2 < val) && (*(int *)(room_ptr + 0x17) < (int)(uint)*(ushort *)(room_ptr + 0xe))) &&
          (ch = room_could_find_valid_first_0ccc08(), room_ptr = extraout_ECX, ch != '\0')) &&
         ((*(char *)(thing + 0x1f) != '\x05' || /* thing->class_id */
          (ch = creature_fn_082774(), room_ptr = extraout_ECX_00, ch != '\0')))) {
        val = val_2;
        local_14 = room_ptr;
      }
      room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
    } while (&g_rooms < room_ptr);
  }
  return local_14;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca7ac (Original VA: 0xca7ac, Ghidra: FUN_000ca7ac)
 * Prototype: undefined1 * room_process_dungeon_room_0ca7ac(void);
 * Address  : 0xca7ac (Size: 98 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> heapmgr_process_map_subtile_03bb93, impset_process_map_subtile_03bcbe
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca7ac(void)

{
  int arg_eax;
  undefined1 *room_ptr;
  char arg_dl;
  int arg_ebx;
  
  room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_dl * 2 + arg_eax * 0x1508) * 0x45;
  if (room_ptr < &g_bss_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    if ((int)((uint)*(ushort *)(room_ptr + 0x10) + arg_ebx) <= (int)(uint)*(ushort *)(room_ptr + 0xe))
    {
      return room_ptr;
    }
    room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
  } while (&g_rooms < room_ptr);
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca8c0 (Original VA: 0xca8c0, Ghidra: FUN_000ca8c0)
 * Prototype: undefined1 * room_process_dungeon_room_0ca8c0(void);
 * Address  : 0xca8c0 (Size: 103 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 8 -> evil_update_creature_control_02796f, impset_update_slab_subtile_columns_03c17e, impset_update_creature_and_thing_03c91b, impset_update_creature_and_thing_03ca68, impset_update_creature_control_03df64, impset_update_player_dungeon_03e33a, impset_stack_type_03e493, lair_chosen_lair_valid_ooops_04ce57
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca8c0(void)

{
  uint arg_eax;
  undefined1 *room_ptr;
  char arg_dl;
  int arg_ebx;
  
  room_ptr = &g_rooms +
           (uint)*(ushort *)(&g_bss_002e0594 + arg_dl * 2 + (arg_eax & 0xff) * 0x1508) * 0x45;
  if (room_ptr < &g_bss_002ddd1c) {
    return (undefined1 *)0x0;
  }
  do {
    if ((int)((uint)*(ushort *)(room_ptr + 0x10) + arg_ebx) <= (int)(uint)*(ushort *)(room_ptr + 0xe))
    {
      return room_ptr;
    }
    room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
  } while (&g_rooms < room_ptr);
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ca928 (Original VA: 0xca928, Ghidra: FUN_000ca928)
 * Prototype: undefined1 * room_process_dungeon_room_0ca928(int param_1);
 * Address  : 0xca928 (Size: 166 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> evil_update_creature_control_02796f
 * Callees  : 2 -> creature_fn_082774, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0ca928(int param_1)

{
  char ch;
  int thing;
  undefined1 *room_ptr;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  uint arg_edx;
  char arg_bl;
  
  room_ptr = &g_rooms +
           (uint)*(ushort *)(&g_bss_002e0594 + (arg_edx & 0xff) * 0x1508 + arg_bl * 2) * 0x45;
  if (&g_rooms < room_ptr) {
    do {
      if ((param_1 <= (int)(uint)*(ushort *)(room_ptr + 0x10)) &&
         (ch = room_could_find_valid_first_0ccc08(), room_ptr = extraout_ECX, ch != '\0')) {
        if (*(char *)(thing + 0x1f) != '\x05') { /* thing->class_id */
          return extraout_ECX;
        }
        ch = creature_fn_082774();
        room_ptr = extraout_ECX_00;
        if (ch != '\0') {
          return extraout_ECX_00;
        }
      }
      room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
    } while (&g_rooms < room_ptr);
  }
  return (undefined1 *)0x0;
}

/******************************************************************************
 * Function : room_this_should_happen_room_0ca9d0 (Original VA: 0xca9d0, Ghidra: FUN_000ca9d0)
 * Prototype: undefined1 * room_this_should_happen_room_0ca9d0(void);
 * Address  : 0xca9d0 (Size: 190 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 1643
 * Purpose  : String 'THIS SHOULD NOT HAPPEN - ROOM COUNT WRONG?'
 * Callers  : 1 -> gen2_could_get_random_entrance_037deb
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined1 * room_this_should_happen_room_0ca9d0(void)

{
  int arg_eax;
  undefined1 *room_ptr;
  int arg_edx;
  int dungeon_off;
  uint rand_seed;
  
  dungeon_off = arg_edx + arg_eax * 0x1508;
  if ((&g_bss_002e0b4b)[dungeon_off] == '\0') {
    room_ptr = (undefined1 *)0x0;
  }
  else {
    rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
    rand_seed = g_action_random_seed % (uint)(byte)(&g_bss_002e0b4b)[dungeon_off];
    room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_edx * 2 + arg_eax * 0x1508) * 0x45;
    if (&g_rooms < room_ptr) {
      do {
        if (rand_seed == 0) break;
        room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
        rand_seed = rand_seed - 1;
      } while (&g_rooms < room_ptr);
    }
    if (room_ptr == &g_rooms) {
      LbErrorLog(); /* LbErrorLog("room.cpp", line 1643, "THIS SHOULD NOT HAPPEN - ROOM COUNT WRONG?") */
      return (undefined1 *)0x0;
    }
  }
  return room_ptr;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0caa90 (Original VA: 0xcaa90, Ghidra: FUN_000caa90)
 * Prototype: undefined1 * room_process_dungeon_room_0caa90(void);
 * Address  : 0xcaa90 (Size: 839 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 4 -> inits_wlb_file_muddled_fixing_0457bd, room_how_room_exist_slabs_0c8654, room_how_room_exist_slabs_0cae40, room_how_room_exist_slabs_0cd4dc
 * Callees  : 4 -> structs_process_dungeon_room_0728e9, structs_process_dungeon_room_0729ff, room_process_dungeon_room_0cc65c, room_create_room_flag_0d0d80
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * room_process_dungeon_room_0caa90(void)

{
  ushort uval;
  byte arg_al;
  short short_val;
  uint uval_2;
  ushort arg_cx;
  byte arg_dl;
  int dungeon_off;
  uint uval_3;
  int val;
  int val_2;
  uint arg_ebx;
  uint uval_4;
  char *str_ptr;
  short slab_coord;
  undefined1 *local_20;
  undefined1 local_18;
  
  slab_coord = *(short *)(&g_subtile_to_slab_lut + arg_cx) * 0x55 +
           *(short *)(&g_subtile_to_slab_lut + (arg_ebx & 0xffff));
  local_20 = (undefined1 *)room_process_dungeon_room_0cc65c();
  if (local_20 == (undefined1 *)0x0) {
    short_val = structs_process_dungeon_room_0728e9();
    if (short_val == 0) {
      return (undefined1 *)0x0;
    }
    local_20 = (undefined1 *)structs_process_dungeon_room_0729ff();
    local_20[3] = arg_al;
    *(ushort *)(local_20 + 10) = (ushort)arg_dl;
    if (arg_dl == 1) {
      if (g_bss_002eb9e4 != 0) {
        *(ushort *)(local_20 + 0x19) = g_bss_002eb9e4;
        *(undefined2 *)(&g_bss_002ddd32 + (uint)g_bss_002eb9e4 * 0x45) = *(undefined2 *)(local_20 + 1);
      }
      g_bss_002eb9e4 = *(ushort *)(local_20 + 1);
      g_bss_002eb9e6 = g_bss_002eb9e6 + 1;
    }
    if (arg_al != g_neutral_player_number) {
      dungeon_off = (uint)arg_al * 0x1508;
      *(undefined2 *)(local_20 + 6) =
           *(undefined2 *)(&g_bss_002e0594 + (uint)*(ushort *)(local_20 + 10) * 2 + dungeon_off);
      *(undefined2 *)
       (&g_bss_002ddd1f +
       (uint)*(ushort *)(&g_bss_002e0594 + (uint)*(ushort *)(local_20 + 10) * 2 + dungeon_off) * 0x45) =
           *(undefined2 *)(local_20 + 1);
      *(undefined2 *)(&g_bss_002e0594 + dungeon_off + (uint)*(ushort *)(local_20 + 10) * 2) =
           *(undefined2 *)(local_20 + 1);
      (&g_bss_002e0b4b)[(uint)*(ushort *)(local_20 + 10) + dungeon_off] =
           (&g_bss_002e0b4b)[(uint)*(ushort *)(local_20 + 10) + dungeon_off] + '\x01';
    }
    *(short *)(local_20 + 0x37) = slab_coord;
    *(short *)(local_20 + 0x39) = slab_coord;
    *(undefined2 *)(&g_bss_002d33c6 + slab_coord * 6) = 0;
    uval = *(ushort *)(local_20 + 0x37);
    *(undefined2 *)(local_20 + 0x3b) = 0;
    while (uval_3 = (uint)uval, uval_3 != 0) {
      *(short *)(local_20 + 0x3b) = *(short *)(local_20 + 0x3b) + 1;
      (&g_bss_002d33c8)[(uval_3 % 0x55 + (uval_3 / 0x55) * 0x55) * 6] = local_20[1];
      uval = *(ushort *)(&g_bss_002d33c6 + uval_3 * 6);
    }
    room_create_room_flag_0d0d80();
  }
  else {
    uval = *(ushort *)(local_20 + 0x37);
    *(undefined2 *)(local_20 + 0x3b) = 0;
    while (uval_3 = (uint)uval, uval_3 != 0) {
      *(short *)(local_20 + 0x3b) = *(short *)(local_20 + 0x3b) + 1;
      (&g_bss_002d33c8)[(uval_3 % 0x55 + (uval_3 / 0x55) * 0x55) * 6] = local_20[1];
      uval = *(ushort *)(&g_bss_002d33c6 + uval_3 * 6);
    }
  }
  uval_4 = (uint)*(ushort *)(local_20 + 0x37);
  uval_3 = uval_4 % 0x55;
  uval_2 = uval_4 / 0x55;
  uval = *(ushort *)(&g_bss_002d33c6 + uval_4 * 6);
  while (uval_4 = (uint)uval, uval_4 != 0) {
    uval_3 = uval_3 + uval_4 % 0x55;
    uval_2 = uval_2 + uval_4 / 0x55;
    uval = *(ushort *)(&g_bss_002d33c6 + uval_4 * 6);
  }
  str_ptr = (char *)&g_bss_002ee9c1;
  dungeon_off = 0;
  do {
    val = ((int)str_ptr[1] + (int)uval_3 / (int)(uint)*(ushort *)(local_20 + 0x3b)) * 3 + 1;
    val_2 = (int)*str_ptr + (int)uval_2 / (int)(uint)*(ushort *)(local_20 + 0x3b);
    if (&g_rooms +
        (uint)(byte)(&g_bss_002d33c8)
                    [((&g_data_0019033f)[val_2 * 3] * 0x55 + (&g_subtile_to_slab_lut)[val]) * 6] * 0x45 ==
        local_20) {
      local_18 = (undefined1)val;
      local_20[8] = local_18;
      local_20[9] = (char)val_2 * '\x03' + '\x01';
      return local_20;
    }
    dungeon_off = dungeon_off + 1;
    str_ptr = str_ptr + 4;
  } while (dungeon_off < 0x100);
  return local_20;
}

/******************************************************************************
 * Function : room_fn_0cadd8 (Original VA: 0xcadd8, Ghidra: FUN_000cadd8)
 * Prototype: void room_fn_0cadd8(void);
 * Address  : 0xcadd8 (Size: 101 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cadd8
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0cadd8(void)

{
  ushort uval;
  uint uval_2;
  int arg_eax;
  
  uval = *(ushort *)(arg_eax + 0x37);
  *(undefined2 *)(arg_eax + 0x3b) = 0;
  while (uval_2 = (uint)uval, uval_2 != 0) {
    *(short *)(arg_eax + 0x3b) = *(short *)(arg_eax + 0x3b) + 1;
    (&g_bss_002d33c8)[(uval_2 % 0x55 + (uval_2 / 0x55) * 0x55) * 6] = *(undefined1 *)(arg_eax + 1);
    uval = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
  }
  return;
}

/******************************************************************************
 * Function : room_how_room_exist_slabs_0cae40 (Original VA: 0xcae40, Ghidra: FUN_000cae40)
 * Prototype: int room_how_room_exist_slabs_0cae40(void);
 * Address  : 0xcae40 (Size: 771 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 326
 * Purpose  : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 2 -> input_game_action_048c77, process_players_dungeon_command_packet
 * Callees  : 12 -> dungeon_update_player_dungeon_023734, dungeon_update_player_dungeon_023754, panmap_door_flagged_position_063122, room_process_slabmap_tile_0c8268, room_how_room_exist_slabs_0c8654, room_process_dungeon_room_0caa90, room_process_dungeon_room_0cb144, slab_attempt_place_animating_slab_0d7688 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000cb084) */

int room_how_room_exist_slabs_0cae40(void)

{
  byte flag;
  ushort uval;
  ushort loop_i;
  undefined1 arg_al;
  int val;
  uint uval_2;
  ushort arg_cx;
  int val_2;
  int extraout_ECX;
  char arg_dl;
  ushort arg_bx;
  int val_3;
  int local_28;
  byte local_18;
  
  g_bss_002ebaf7 = 1;
  if ((uint)(byte)(&g_bss_002d33c8)[((&g_subtile_to_slab_lut)[arg_bx] + (&g_subtile_to_slab_lut)[arg_cx] * 0x55) * 6] *
      0x45 == 0) {
    dungeon_update_player_dungeon_023754();
    dungeon_update_player_dungeon_023734();
  }
  else {
    room_how_room_exist_slabs_0c8654();
  }
  local_18 = (char)*(undefined2 *)(&g_subtile_to_slab_lut + arg_bx) +
             (char)*(undefined2 *)(&g_subtile_to_slab_lut + arg_cx) * 'U';
  val = room_process_dungeon_room_0caa90();
  if (val != 0) {
    if ((arg_dl == '\x10') || (arg_dl == '\x0f')) {
      slab_process_map_subtile_0dae68();
      slab_attempt_dump_an_animating_0d8b7c(arg_al);
    }
    else {
      slab_process_map_subtile_0dae68();
      slab_attempt_place_animating_slab_0d7688(0);
    }
    slab_process_slabmap_tile_0da6fc();
    uval = *(ushort *)(val + 0x3b);
    val_3 = val;
    if (uval == 0) {
      LbErrorLog(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
      val_2 = 0;
    }
    else {
      if (uval < 2) {
        local_28 = 0;
      }
      else if (uval == 2) {
        local_28 = 4;
      }
      else {
        local_28 = (uint)*(ushort *)(val + 0x3b) * 4 + -4;
      }
      uval_2 = (uint)*(ushort *)(val + 0x3b);
      if (0x31 < *(ushort *)(val + 0x3b)) {
        uval_2 = 0x31;
      }
      flag = (&g_data_0018b6d4)[uval_2];
      uval = *(ushort *)(val + 0x3b);
      val_2 = 0;
      for (loop_i = *(ushort *)(val + 0x37); loop_i != 0;
          loop_i = *(ushort *)(&g_bss_002d33c6 + (uint)loop_i * 6)) {
        val_2 = room_process_slabmap_tile_0c8268();
        val_2 = extraout_ECX + val_2;
      }
      val_2 = ((val_2 - local_28) * 0x100) / (int)(((uint)uval * 8 + (uint)flag * 2) - local_28);
      if (0x100 < val_2) {
        val_2 = 0x100;
      }
    }
    *(short *)(val_3 + 0x3f) = (short)val_2;
    room_process_dungeon_room_0cb144();
    if (local_18 != g_neutral_player_number) {
      *(int *)(&g_bss_002e17fc + (uint)local_18 * 0x1508) =
           *(int *)(&g_bss_002e17fc + (uint)local_18 * 0x1508) + 1;
    }
    panmap_door_flagged_position_063122();
  }
  return val;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0cb144 (Original VA: 0xcb144, Ghidra: FUN_000cb144)
 * Prototype: void room_process_dungeon_room_0cb144(void);
 * Address  : 0xcb144 (Size: 322 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 8 -> file_process_dungeon_room_02a219, inits_wlb_file_muddled_fixing_0457bd, room_how_room_exist_slabs_0c8654, room_how_room_exist_slabs_0cae40, room_how_room_exist_slabs_0cd4dc, room_how_room_exist_slabs_0d0118, room_how_room_exist_slabs_0d0488, slab_process_slabmap_tile_0da6fc
 * Callees  : 0 -> 
 ******************************************************************************/
void room_process_dungeon_room_0cb144(void)

{
  int arg_eax;
  int arg_edx;
  undefined *word_ptr;
  undefined *extraout_EDX;
  undefined *extraout_EDX_00;
  int room_ptr;
  short short_val;
  
  room_ptr = (uint)*(ushort *)(arg_eax + 10) * 0x17;
  word_ptr = &g_data_0018ebaa + room_ptr;
  if ((arg_edx == 0) || (*(int *)(&g_data_0018ebb9 + room_ptr) != 0)) {
    *(ushort *)(arg_eax + 0xc) = *(short *)(arg_eax + 0x3b) * (ushort)g_bss_002ed417;
    if (*(int *)(&g_data_0018ebad + room_ptr) != 0) {
      (**(code **)(&g_data_0018ebad + room_ptr))();
      word_ptr = extraout_EDX;
    }
    if (*(int *)(word_ptr + 7) != 0) {
      (**(code **)(word_ptr + 7))();
      word_ptr = extraout_EDX_00;
    }
    if (*(int *)(word_ptr + 0xb) != 0) {
      (**(code **)(word_ptr + 0xb))();
    }
    if (*(short *)(arg_eax + 10) != 7) {
      short_val = *(short *)(arg_eax + 0x37);
      while (room_ptr = (int)short_val, room_ptr != 0) {
        if (&g_rooms +
            (uint)(byte)(&g_bss_002d33c8)
                        [((&g_subtile_to_slab_lut)[(room_ptr % 0x55) * 3] +
                         (&g_subtile_to_slab_lut)[(room_ptr / 0x55) * 3] * 0x55) * 6] * 0x45 !=
            &g_rooms +
            (uint)(byte)(&g_bss_002d33c8)
                        [((&g_subtile_to_slab_lut)[((room_ptr + -0x55) / 0x55) * 3] * 0x55 +
                         (&g_subtile_to_slab_lut)[((room_ptr + -0x55) % 0x55) * 3]) * 6] * 0x45) {
          *(undefined1 *)(arg_eax + 0x43) = 1;
          *(undefined1 *)(arg_eax + 0x44) = 0;
          *(short *)(arg_eax + 0x41) = short_val;
          return;
        }
        short_val = *(short *)(&g_bss_002d33c6 + room_ptr * 6);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : room_update_creature_control_0cb33c (Original VA: 0xcb33c, Ghidra: FUN_000cb33c)
 * Prototype: undefined4 room_update_creature_control_0cb33c(void);
 * Address  : 0xcb33c (Size: 4322 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 5 -> anger_hurrah_mental_instability_creature_01073a, barracks_update_creature_control_013809, evil_update_creature_control_02796f, inits_fn_045394, person_update_creature_control_063dd3
 * Callees  : 13 -> anger_fn_010434, evil_fn_027944, lair_update_creature_control_04d022, moodneed_fn_051374, person_external_change_state_but_064a5f, research_update_player_dungeon_066334, shot_update_creature_control_06dda0, temple_update_creature_control_072f08 ...
 ******************************************************************************/
undefined4 room_update_creature_control_0cb33c(void)

{
  int cctrl_ptr;
  uint3 uval;
  bool flag;
  char ch;
  ushort uval_2;
  short short_val;
  undefined2 uval_3;
  int thing;
  int val;
  int val_2;
  int *arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  val = *arg_edx >> 0x18;
  switch(*(undefined2 *)((int)arg_edx + 10)) {
  case 3:
    uval_2 = 4;
    break;
  default:
    uval_2 = 0;
    break;
  case 6:
    uval_2 = 8;
    break;
  case 8:
    uval_2 = 0x10;
    break;
  case 9:
    uval_2 = 0x20;
    break;
  case 10:
    uval_2 = 0x1000;
    break;
  case 0x10:
    uval_2 = 0x200;
  }
  if ((*(ushort *)(&g_bss_002e9111 + (uint)*(byte *)(thing + 0x1a) * 0xe6) & uval_2) != 0) {
    anger_fn_010434();
    person_external_change_state_but_064a5f();
    *(undefined2 *)(cctrl_ptr + 0x282) = 0x32;
    return 0;
  }
  short_val = *(short *)((int)arg_edx + 10);
  if (0xf < (ushort)(short_val - 1U)) {
    return 0;
  }
  val_2 = g_my_player_word >> 0x18;
  uval = (uint3)((uint)*arg_edx >> 8);
  switch(short_val) {
  case 1:
    if (((*(int *)(thing + 3) >> 0x18 == val) &&
        (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                  *(undefined1 *)(thing + 0x1a)) != 0x17)) && (short_val = move_update_creature_control_0b3b58(), short_val != 0))
    {
      *(undefined1 *)(thing + 8) = 0x5a; /* thing->active_state */
      *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
      return 1;
    }
    break;
  case 2:
    if (*(int *)(thing + 3) >> 0x18 == val) {
      if (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                   *(undefined1 *)(thing + 0x1a)) == 0x17) {
        if (*(int *)(thing + 0x13) != 0) { /* thing->anim_sprite */
          if ((*(short *)((int)arg_edx + 10) == 1) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
            flag = true;
          }
          else {
            ch = room_number_slabs_room_zero_0cc968();
            if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
              flag = false;
            }
            else {
              flag = true;
            }
          }
          if (flag) {
            *(undefined1 *)(thing + 8) = 7; /* thing->active_state */
            *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
            return 1;
          }
        }
      }
      else if ((short)arg_edx[4] != 0) {
        if ((*(short *)((int)arg_edx + 10) == 1) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
          flag = true;
        }
        else {
          ch = room_number_slabs_room_zero_0cc968();
          if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
            flag = false;
          }
          else {
            flag = true;
          }
        }
        if (flag) {
          *(undefined1 *)(thing + 8) = 0x4c; /* thing->active_state */
          *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
          return 1;
        }
      }
    }
    break;
  case 3:
    if (*(int *)(thing + 3) >> 0x18 != val) {
      return 0;
    }
    val = research_update_player_dungeon_066334();
    val_2 = g_my_player_word >> 0x18;
    if (val == 0) {
      if (*(int *)(thing + 3) >> 0x18 == (uint)g_neutral_player_number) {
        return 0;
      }
      if ((&g_bss_002e91a1)[(uint)*(byte *)(thing + 0x1a) * 0xe6] == '\0') {
        return 0;
      }
      if (-1 < *(int *)(&g_bss_002e1501 + (*(int *)(thing + 3) >> 0x18) * 0x1508)) {
        return 0;
      }
      if (*arg_edx >> 0x18 != (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) {
        return 0;
      }
      moodneed_fn_051374();
      return 0;
    }
    if (*(short *)((int)arg_edx + 10) == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)*(ushort *)(arg_edx + 4) +
          (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing + 0x1a) * 0xe6]) goto LAB_000cb8cf;
      flag = true;
    }
    else if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) {
LAB_000cb8cf:
      flag = false;
    }
    else {
      flag = true;
    }
    if (flag) {
      ch = room_could_find_valid_first_0ccc08();
      if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) {
        *(undefined1 *)(thing + 8) = 0x1e; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        return 1;
      }
    }
    else if (*arg_edx >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) {
      if (((&g_bss_002e0593)[val_2 * 0x1508] & 1) == 0) {
        moodneed_fn_051374();
        return 0;
      }
      moodneed_fn_051374();
      return 0;
    }
    break;
  case 4:
    if ((*(int *)(thing + 3) >> 0x18 != val) ||
       (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                 *(undefined1 *)(thing + 0x1a)) != 0x17)) {
      if ((*(short *)((int)arg_edx + 10) == 1) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
        flag = true;
      }
      else {
        ch = room_number_slabs_room_zero_0cc968();
        if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
          flag = false;
        }
        else {
          flag = true;
        }
      }
      if (flag) {
        *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 2;
        *(undefined1 *)(thing + 8) = 0x28; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        return 1;
      }
    }
    break;
  case 5:
    if ((*(int *)(thing + 3) >> 0x18 == val) &&
       (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                 *(undefined1 *)(thing + 0x1a)) == 0x17)) {
      return 0;
    }
    if (*(short *)((int)arg_edx + 10) == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing + 0x1a) * 0xe6] +
          (uint)*(ushort *)(arg_edx + 4)) {
LAB_000cbaaa:
        flag = false;
      }
      else {
        flag = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) goto LAB_000cbaaa;
      flag = true;
    }
    if (flag) {
      if ((*(short *)((int)arg_edx + 10) == 1) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
        flag = true;
      }
      else {
        ch = room_number_slabs_room_zero_0cc968();
        if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
          flag = false;
        }
        else {
          flag = true;
        }
      }
      if (flag) {
        if ((*(int *)(thing + 3) >> 0x18 == val) && (val = evil_fn_027944(), val != 0)) {
          *(undefined1 *)(thing + 8) = 0x6d; /* thing->active_state */
        }
        else {
          *(undefined1 *)(thing + 8) = 0x2a; /* thing->active_state */
        }
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) | 2;
        return 1;
      }
    }
    else if (*arg_edx >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) {
      if (((&g_bss_002e0593)[val_2 * 0x1508] & 1) == 0) {
        moodneed_fn_051374();
        return 0;
      }
      moodneed_fn_051374();
      return 0;
    }
    break;
  case 6:
    if (*(int *)(thing + 3) >> 0x18 != val) {
      return 0;
    }
    val = train_update_creature_control_075b48();
    if (val == 0) {
      return 0;
    }
    if (*(short *)((int)arg_edx + 10) == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing + 0x1a) * 0xe6] +
          (uint)*(ushort *)(arg_edx + 4)) goto LAB_000cb639;
      flag = true;
    }
    else if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) {
LAB_000cb639:
      flag = false;
    }
    else {
      flag = true;
    }
    if (flag) {
      if (*(char *)(thing + 0x1a) == '\x17') {
        ch = room_could_find_valid_first_0ccc08();
        if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
          flag = false;
        }
        else {
          flag = true;
        }
        if (flag) {
          *(undefined1 *)(thing + 8) = 0x20; /* thing->active_state */
          uval_3 = *(undefined2 *)((int)arg_edx + 1);
          *(undefined1 *)(cctrl_ptr + 0x94) = 4;
          *(undefined2 *)(cctrl_ptr + 0x80) = uval_3;
          return 1;
        }
      }
      else {
        ch = room_could_find_valid_first_0ccc08();
        if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
          flag = false;
        }
        else {
          flag = true;
        }
        if (flag) {
          *(undefined1 *)(thing + 8) = 0x20; /* thing->active_state */
          *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
          return 1;
        }
      }
    }
    else if (*(int *)(thing + 3) >> 0x18 ==
             (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
      if (((&g_bss_002e0593)[(g_my_player_word >> 0x18) * 0x1508] & 1) == 0) {
        moodneed_fn_051374();
        return 0;
      }
      moodneed_fn_051374();
      return 0;
    }
    break;
  case 8:
    if (*(int *)(thing + 3) >> 0x18 != val) {
      return 0;
    }
    if (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                 *(undefined1 *)(thing + 0x1a)) == 0x17) {
      return 0;
    }
    if ((&g_bss_002e91a7)[(uint)*(byte *)(thing + 0x1a) * 0xe6] == '\0') {
      return 0;
    }
    if (*(short *)((int)arg_edx + 10) == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing + 0x1a) * 0xe6] +
          (uint)*(ushort *)(arg_edx + 4)) goto LAB_000cbd7a;
      flag = true;
    }
    else if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) {
LAB_000cbd7a:
      flag = false;
    }
    else {
      flag = true;
    }
    if (flag) {
      ch = room_could_find_valid_first_0ccc08();
      if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) {
        *(undefined1 *)(thing + 8) = 0x2c; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        return 1;
      }
    }
    else if (*(int *)(thing + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) {
      if (((&g_bss_002e0593)[val_2 * 0x1508] & 1) == 0) {
        moodneed_fn_051374();
        return 0;
      }
      moodneed_fn_051374();
      return 0;
    }
    break;
  case 9:
    if (*(int *)(thing + 3) >> 0x18 != val) {
      return 0;
    }
    if (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                 *(undefined1 *)(thing + 0x1a)) == 0x17) {
      return 0;
    }
    if ((&g_bss_002e9132)[(uint)*(byte *)(thing + 0x1a) * 0xe6] == '\0') {
      return 0;
    }
    if (*(short *)((int)arg_edx + 10) == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing + 0x1a) * 0xe6] +
          (uint)*(ushort *)(arg_edx + 4)) goto LAB_000cbef4;
      flag = true;
    }
    else if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) {
LAB_000cbef4:
      flag = false;
    }
    else {
      flag = true;
    }
    if (flag) {
      ch = room_could_find_valid_first_0ccc08();
      if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) {
        *(undefined1 *)(thing + 8) = 0x2e; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        return 1;
      }
    }
    else if (*(int *)(thing + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) {
      moodneed_fn_051374();
      return 0;
    }
    break;
  case 10:
    if (*(int *)(thing + 3) >> 0x18 != val) {
      return 0;
    }
    if (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                 *(undefined1 *)(thing + 0x1a)) == 0x17) {
      return 0;
    }
    if (*(short *)((int)arg_edx + 10) == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing + 0x1a) * 0xe6] +
          (uint)*(ushort *)(arg_edx + 4)) {
LAB_000cc29f:
        flag = false;
      }
      else {
        flag = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) goto LAB_000cc29f;
      flag = true;
    }
    if (flag) {
      ch = room_could_find_valid_first_0ccc08();
      if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) {
        *(undefined1 *)(thing + 8) = 0x52; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        temple_update_creature_control_072f08();
        return 1;
      }
    }
    else if (*(int *)(thing + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) {
      if (((&g_bss_002e0593)[val_2 * 0x1508] & 1) == 0) {
        moodneed_fn_051374();
        return 0;
      }
      moodneed_fn_051374();
      return 0;
    }
    break;
  case 0xc:
    if (*(int *)(thing + 3) >> 0x18 != val) {
      return 0;
    }
    val = CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                     *(undefined1 *)(thing + 0x1a));
    if (val == 0x17) {
      return 0;
    }
    if (short_val == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)*(ushort *)(arg_edx + 4) + (uint)(byte)(&g_bss_002e9124)[val * 0xe6]) {
LAB_000cc012:
        flag = false;
      }
      else {
        flag = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) goto LAB_000cc012;
      flag = true;
    }
    if (flag) {
      ch = room_could_find_valid_first_0ccc08();
      if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) {
        *(undefined1 *)(thing + 8) = 0x40; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        return 1;
      }
    }
    else if (*(int *)(thing + 3) >> 0x18 == (uint)(byte)(&g_player_id_number)[val_2 * 0x4ef]) {
      if (((&g_bss_002e0593)[val_2 * 0x1508] & 1) == 0) {
        moodneed_fn_051374();
        return 0;
      }
      moodneed_fn_051374();
      return 0;
    }
    break;
  case 0xd:
    if ((*(int *)(thing + 3) >> 0x18 == val) &&
       (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                 *(undefined1 *)(thing + 0x1a)) != 0x17)) {
      ch = room_could_find_valid_first_0ccc08();
      if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) {
        *(undefined1 *)(thing + 8) = 0x13; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        return 1;
      }
    }
    break;
  case 0xe:
    if ((*(int *)(thing + 3) >> 0x18 == val) &&
       (CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                 *(undefined1 *)(thing + 0x1a)) != 0x17)) {
      *(undefined2 *)(cctrl_ptr + 0x21) = 0;
      uval_3 = creature_update_creature_control_085890();
      *(undefined2 *)(cctrl_ptr + 0xc4) = uval_3;
      ch = shot_update_creature_control_06dda0();
      if (ch != '\0') {
        if (((*(short *)(cctrl_ptr + 0x68) != 0) &&
            (*(short *)(cctrl_ptr + 0x68) == *(short *)((int)arg_edx + 1))) &&
           (val = lair_update_creature_control_04d022(), val != 0)) {
          *(undefined1 *)(thing + 8) = 0x19; /* thing->active_state */
          return 1;
        }
        ch = room_could_find_valid_first_0ccc08();
        if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
          flag = false;
        }
        else {
          flag = true;
        }
        if (flag) {
          *(undefined1 *)(thing + 8) = 0x50; /* thing->active_state */
          *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
          return 1;
        }
      }
    }
    break;
  case 0x10:
    if (*(int *)(thing + 3) >> 0x18 != val) {
      return 0;
    }
    val = CONCAT31((int3)((uint3)((uint)*(int *)(thing + 3) >> 8) ^ uval) >> 0x17,
                     *(undefined1 *)(thing + 0x1a));
    if (val == 0x17) {
      return 0;
    }
    if (short_val == 0xe) {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) <
          (uint)*(ushort *)(arg_edx + 4) + (uint)(byte)(&g_bss_002e9124)[val * 0xe6]) {
LAB_000cb7ec:
        flag = false;
      }
      else {
        flag = true;
      }
    }
    else {
      if ((uint)*(ushort *)((int)arg_edx + 0xe) < *(ushort *)(arg_edx + 4) + 1) goto LAB_000cb7ec;
      flag = true;
    }
    if (flag) {
      ch = room_could_find_valid_first_0ccc08();
      if ((ch == '\0') || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
        flag = false;
      }
      else {
        flag = true;
      }
      if (flag) {
        *(undefined1 *)(thing + 8) = 0x68; /* thing->active_state */
        *(undefined2 *)(cctrl_ptr + 0x80) = *(undefined2 *)((int)arg_edx + 1);
        return 1;
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : room_fn_0cc420 (Original VA: 0xcc420, Ghidra: FUN_000cc420)
 * Prototype: undefined4 room_fn_0cc420(void);
 * Address  : 0xcc420 (Size: 57 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cc420
 * Callers  : 1 -> lair_process_dungeon_room_04d683
 * Callees  : 2 -> creature_fn_0827fc, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined4 room_fn_0cc420(void)

{
  char ch;
  
  ch = room_could_find_valid_first_0ccc08();
  if (ch != '\0') {
    ch = creature_fn_0827fc();
    if (ch != '\0') {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : room_fn_0cc45c (Original VA: 0xcc45c, Ghidra: FUN_000cc45c)
 * Prototype: undefined4 room_fn_0cc45c(void);
 * Address  : 0xcc45c (Size: 65 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cc45c
 * Callers  : 1 -> evil_do_this_destroy_room_029254
 * Callees  : 2 -> move_update_creature_control_0b3b58, room_could_find_valid_first_0ccc08
 ******************************************************************************/
undefined4 room_fn_0cc45c(void)

{
  char ch;
  short short_val;
  
  ch = room_could_find_valid_first_0ccc08();
  if ((ch != '\0') && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : room_fn_0cc4a0 (Original VA: 0xcc4a0, Ghidra: FUN_000cc4a0)
 * Prototype: undefined4 room_fn_0cc4a0(void);
 * Address  : 0xcc4a0 (Size: 124 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cc4a0
 * Callers  : 17 -> angtool_update_creature_control_0119bc, angtool_update_creature_control_011a81, angtool_update_player_view_state_011b51, combmove_room_state_016640, entrance_update_player_view_state_026c6d, entrance_update_creature_control_026dbc, evil_update_creature_control_02796f, evil_update_creature_control_028851 ...
 * Callees  : 2 -> move_update_creature_control_0b3b58, room_number_slabs_room_zero_0cc968
 ******************************************************************************/
undefined4 room_fn_0cc4a0(void)

{
  char ch;
  short short_val;
  int arg_edx;
  
  if ((*(short *)(arg_edx + 10) == 1) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
    return 1;
  }
  ch = room_number_slabs_room_zero_0cc968();
  if ((ch != '\0') && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : room_roll_action_random_0cc51c (Original VA: 0xcc51c, Ghidra: FUN_000cc51c)
 * Prototype: undefined4 room_roll_action_random_0cc51c(void);
 * Address  : 0xcc51c (Size: 319 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Evaluates deterministic lockstep PRNG (g_action_random_seed)
 * Callers  : 2 -> impset_update_player_dungeon_03e33a, impset_process_dungeon_room_03f238
 * Callees  : 2 -> mapwho_process_map_subtile_05131e, move_update_creature_control_0b3b58
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 room_roll_action_random_0cc51c(void)

{
  ushort uval;
  uint uval_2;
  short short_val;
  int val;
  undefined4 uval_3;
  uint uval_4;
  uint extraout_ECX;
  int arg_edx;
  uint rand_seed;
  int val_2;
  
  val_2 = ((uint)*(ushort *)(arg_edx + 0xe) / (uint)*(ushort *)(arg_edx + 0x3b)) *
          (((g_bss_002eb9e8 >> 0x10) * 9) / 5);
  rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
  g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
  rand_seed = g_action_random_seed % (uint)*(ushort *)(arg_edx + 0x3b);
  uval_4 = 0xffffffff;
  uval = *(ushort *)(arg_edx + 0x37);
  while (uval_2 = (uint)uval, uval_2 != 0) {
    val = mapwho_process_map_subtile_05131e();
    if ((val == 0) ||
       (uval_4 = extraout_ECX, val_2 - *(int *)(val + 0x13) != 0 && *(int *)(val + 0x13) <= val_2
       )) {
      uval_4 = uval_2;
    }
    rand_seed = rand_seed - 1;
    if (((int)rand_seed < 0) && (uval_4 != 0xffffffff)) break;
    uval = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
  }
  if ((uval_4 == 0xffffffff) || (short_val = move_update_creature_control_0b3b58(), short_val == 0)) {
    uval_3 = 0;
  }
  else {
    uval_3 = 1;
  }
  return uval_3;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0cc65c (Original VA: 0xcc65c, Ghidra: FUN_000cc65c)
 * Prototype: undefined1 * room_process_dungeon_room_0cc65c(void);
 * Address  : 0xcc65c (Size: 779 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> room_process_dungeon_room_0caa90
 * Callees  : 5 -> mapwho_process_map_subtile_050d3c, structs_update_creature_control_072af4, room_process_dungeon_room_0c98d0, room_attempt_add_creature_room_0cd85c, room_attempt_remove_creature_room_0cdaec
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0cc65c(void)

{
  undefined2 uval;
  uint uval_2;
  char arg_al;
  int val;
  byte arg_cl;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  undefined1 *room_ptr;
  ushort slab_coord;
  int arg_ebx;
  undefined1 *local_20;
  char cStack_10;
  
  local_20 = (undefined1 *)0x0;
  cStack_10 = '\0';
  slab_coord = *(short *)(&g_subtile_to_slab_lut + arg_ebx) * 0x55 + *(short *)(&g_subtile_to_slab_lut + arg_edx);
  do {
    val = (int)cStack_10;
    if (3 < val) {
LAB_000cc75c:
      if (cStack_10 == '\x04') {
        local_20 = (undefined1 *)0x0;
      }
      else {
        while( true ) {
          cStack_10 = cStack_10 + '\x01';
          val = (int)cStack_10;
          if (3 < val) break;
          val = (uint)(byte)(&g_bss_002d33c8)
                              [((&g_subtile_to_slab_lut)
                                [(*(int *)((int)&g_data_0018b67b + val * 2 + 1) >> 0x18) * 3 +
                                 arg_ebx] * 0x55 +
                               (&g_subtile_to_slab_lut)
                               [(*(int *)((int)&g_data_0018b67b + val * 2) >> 0x18) * 3 + arg_edx]) *
                               6] * 0x45;
          room_ptr = &g_rooms + val;
          if (((room_ptr != &g_rooms) && (arg_al == (&g_bss_002ddd1e)[val])) &&
             ((*(ushort *)(&g_room_slabs_count + val) == (ushort)arg_cl && (room_ptr != local_20)))) {
            *(undefined2 *)(&g_bss_002d33c6 + (uint)*(ushort *)(local_20 + 0x39) * 6) =
                 *(undefined2 *)(&g_bss_002ddd52 + val);
            uval = *(undefined2 *)(&g_bss_002ddd54 + val);
            *(undefined2 *)(local_20 + 0x3b) = 0;
            slab_coord = *(ushort *)(local_20 + 0x37);
            *(undefined2 *)(local_20 + 0x39) = uval;
            while (uval_2 = (uint)slab_coord, uval_2 != 0) {
              *(short *)(local_20 + 0x3b) = *(short *)(local_20 + 0x3b) + 1;
              (&g_bss_002d33c8)[(uval_2 % 0x55 + (uval_2 / 0x55) * 0x55) * 6] = local_20[1];
              slab_coord = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
            }
            if (*(int *)(&g_data_0018ebad + (uint)*(ushort *)(local_20 + 10) * 0x17) != 0) {
              (**(code **)(&g_data_0018ebad + (uint)*(ushort *)(local_20 + 10) * 0x17))();
              room_ptr = extraout_ECX;
            }
            if (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(room_ptr + 0x3d)]) {
              do {
                room_attempt_remove_creature_room_0cdaec();
                room_attempt_add_creature_room_0cd85c();
              } while (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(extraout_ECX_00 + 0x3d)]);
            }
            if (((*(short *)(&g_room_slabs_count + val) != 7) &&
                (*(short *)(&g_room_slabs_count + val) != 1)) && (val = mapwho_process_map_subtile_050d3c(), val != 0)) {
              structs_update_creature_control_072af4();
            }
            room_process_dungeon_room_0c98d0();
          }
        }
      }
      return local_20;
    }
    val = (uint)(byte)(&g_bss_002d33c8)
                        [((&g_subtile_to_slab_lut)
                          [(*(int *)((int)&g_data_0018b67b + val * 2 + 1) >> 0x18) * 3 + arg_ebx] *
                          0x55 + (&g_subtile_to_slab_lut)
                                 [(*(int *)((int)&g_data_0018b67b + val * 2) >> 0x18) * 3 + arg_edx])
                         * 6] * 0x45;
    local_20 = &g_rooms + val;
    if (((local_20 != &g_rooms) && ((&g_bss_002ddd1e)[val] == arg_al)) &&
       (*(ushort *)(&g_room_slabs_count + val) == (ushort)arg_cl)) {
      *(undefined2 *)(&g_bss_002ddd29 + val) = 0;
      *(ushort *)(&g_bss_002d33c6 + (uint)*(ushort *)(&g_bss_002ddd54 + val) * 6) = slab_coord;
      *(undefined2 *)(&g_bss_002d33c6 + (uint)slab_coord * 6) = 0;
      *(ushort *)(&g_bss_002ddd54 + val) = slab_coord;
      goto LAB_000cc75c;
    }
    cStack_10 = cStack_10 + '\x01';
  } while( true );
}

/******************************************************************************
 * Function : room_number_slabs_room_zero_0cc968 (Original VA: 0xcc968, Ghidra: FUN_000cc968)
 * Prototype: uint room_number_slabs_room_zero_0cc968(void);
 * Address  : 0xcc968 (Size: 672 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 2730, 2737, 2781
 * Purpose  : String 'Number of slabs for room is zero'
 * Callers  : 16 -> angtool_update_creature_control_0119bc, angtool_update_creature_control_011a81, entrance_find_valid_place_entrance_026b04, evil_hope_we_never_get_0286d5, evil_update_creature_control_028aa0, good_update_creature_control_038faa, gravyard_could_find_valid_position_039901, person_update_creature_and_thing_0641a6 ...
 * Callees  : 3 -> ceiling_process_map_subtile_07ddf8, move_process_map_subtile_0b2cb4, LbErrorLog
 ******************************************************************************/
uint room_number_slabs_room_zero_0cc968(void)

{
  short short_val;
  uint uval;
  int loop_i;
  int val;
  uint extraout_ECX;
  undefined1 *arg_edx;
  int val_2;
  short *arg_ebx;
  int val_3;
  int local_34;
  uint local_20;
  uint local_1c;
  
  if (&g_rooms < arg_edx) {
    local_1c = (uint)*(ushort *)(arg_edx + 0x37);
    if (*(short *)(arg_edx + 0x3b) == 0) {
      LbErrorLog(); /* LbErrorLog("room.cpp", line 2730, "Number of slabs for room is zero") */
      uval = LbErrorLog(); /* LbErrorLog("room.cpp", line 2737, "Room used structure is ZERO") */
      goto LAB_000ccbfe;
    }
    uval = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = uval >> 0xd | uval * 0x80000;
    local_20 = g_action_random_seed % (uint)*(ushort *)(arg_edx + 0x3b);
    loop_i = 0;
    if (local_20 != 0) {
      do {
        local_1c = (uint)*(ushort *)(&g_bss_002d33c6 + local_1c * 6);
        loop_i = loop_i + 1;
      } while (loop_i < (int)local_20);
    }
    for (loop_i = 0; loop_i < (int)(uint)*(ushort *)(arg_edx + 0x3b); loop_i = loop_i + 1) {
      if (*(ushort *)(arg_edx + 0x3b) == local_20) {
        local_1c = CONCAT22((short)(local_20 >> 0x10),*(undefined2 *)(arg_edx + 0x37));
        local_20 = 0;
      }
      uval = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = uval >> 0xd | uval * 0x80000;
      uval = g_action_random_seed % 9;
      local_34 = 0;
      do {
        val_3 = ((int)local_1c % 0x55) * 3 + (int)uval % 3;
        val_2 = ((int)local_1c / 0x55) * 3 + (int)uval / 3;
        val = val_3 + val_2 * 0x100;
        if (((*(byte *)((int)&g_map_subtiles + val * 5) & 0x10) == 0) &&
           (((&g_bss_00269203)[val] & 0xf) < 4)) {
          *arg_ebx = (short)val_3 * 0x100 + 0x80;
          arg_ebx[1] = (short)val_2 * 0x100 + 0x80;
          short_val = move_process_map_subtile_0b2cb4();
          arg_ebx[2] = short_val;
          val = ceiling_process_map_subtile_07ddf8();
          uval = extraout_ECX;
          if (val == 0) {
            return 1;
          }
        }
        local_34 = local_34 + 1;
        uval = (int)(uval + 1) % 9;
      } while (local_34 < 9);
      local_1c = (uint)*(ushort *)(&g_bss_002d33c6 + local_1c * 6);
      local_20 = local_20 + 1;
    }
  }
  uval = LbErrorLog(); /* LbErrorLog("room.cpp", line 2781, "Could not find valid RANDOM point in room for creature") */
LAB_000ccbfe:
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : room_could_find_valid_first_0ccc08 (Original VA: 0xccc08, Ghidra: FUN_000ccc08)
 * Prototype: uint room_could_find_valid_first_0ccc08(void);
 * Address  : 0xccc08 (Size: 355 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 2868
 * Purpose  : String 'Could not find valid FIRST point in room for creature'
 * Callers  : 13 -> evil_do_this_destroy_room_029254, room_process_dungeon_room_0c9988, room_process_dungeon_room_0c9b2c, room_process_dungeon_room_0c9e8c, room_process_dungeon_room_0ca248, room_process_dungeon_room_0ca34c, room_process_dungeon_room_0ca474, room_process_dungeon_room_0ca568 ...
 * Callees  : 3 -> ceiling_process_map_subtile_07ddf8, move_process_map_subtile_0b2cb4, LbErrorLog
 ******************************************************************************/
uint room_could_find_valid_first_0ccc08(void)

{
  ushort uval;
  short short_val;
  int val;
  uint uval_2;
  int val_2;
  int extraout_ECX;
  undefined1 *arg_edx;
  int val_3;
  short *arg_ebx;
  int val_4;
  
  if (&g_rooms < arg_edx) {
    uval = *(ushort *)(arg_edx + 0x37);
    while (uval_2 = (uint)uval, uval_2 != 0) {
      val_2 = 0;
      do {
        val_4 = (uval_2 % 0x55) * 3 + val_2 % 3;
        val_3 = (uval_2 / 0x55) * 3 + val_2 / 3;
        val = val_4 + val_3 * 0x100;
        if (((*(byte *)((int)&g_map_subtiles + val * 5) & 0x10) == 0) &&
           (((&g_bss_00269203)[val] & 0xf) < 4)) {
          *arg_ebx = (short)val_4 * 0x100 + 0x80;
          arg_ebx[1] = (short)val_3 * 0x100 + 0x80;
          short_val = move_process_map_subtile_0b2cb4();
          arg_ebx[2] = short_val;
          val = ceiling_process_map_subtile_07ddf8();
          val_2 = extraout_ECX;
          if (val == 0) {
            return 1;
          }
        }
        val_2 = val_2 + 1;
      } while (val_2 < 9);
      uval = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
    }
  }
  uval_2 = LbErrorLog(); /* LbErrorLog("room.cpp", line 2868, "Could not find valid FIRST point in room for creature") */
  return uval_2 & 0xffffff00;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0ccd6c (Original VA: 0xccd6c, Ghidra: FUN_000ccd6c)
 * Prototype: undefined4 room_process_dungeon_room_0ccd6c(void);
 * Address  : 0xccd6c (Size: 417 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> room_lair_thinks_it_belongs_0c9280
 * Callees  : 1 -> room_number_slabs_room_zero_0ccf10
 ******************************************************************************/
undefined4 room_process_dungeon_room_0ccd6c(void)

{
  char ch;
  uint uval;
  int *room_ptr;
  int extraout_ECX;
  int *arg_edx;
  uint rand_seed;
  int val;
  int val_2;
  uint uval_2;
  
  uval = (uint)*(ushort *)((int)arg_edx + 10);
  val = *arg_edx >> 0x18;
  uval_2 = 0;
  room_ptr = (int *)(&g_rooms +
                  (uint)*(ushort *)(&g_bss_002e0594 + uval * 2 + val * 0x1508) * 0x45);
  if (&g_rooms < room_ptr) {
    do {
      if ((room_ptr != arg_edx) &&
         (*(int *)((int)room_ptr + 0x17) < (int)(uint)*(ushort *)((int)room_ptr + 0xe))) {
        uval_2 = uval_2 + 1;
      }
      room_ptr = (int *)(&g_rooms + (uint)*(ushort *)((int)room_ptr + 6) * 0x45);
    } while (&g_rooms < room_ptr);
  }
  if (uval_2 != 0) {
    rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
    rand_seed = g_action_random_seed % uval_2;
    room_ptr = (int *)(&g_rooms +
                    (uint)*(ushort *)(&g_bss_002e0594 + uval * 2 + val * 0x1508) * 0x45);
    if (&g_rooms < room_ptr) {
      while ((room_ptr == arg_edx || (-1 < (int)rand_seed))) {
        if ((room_ptr != arg_edx) &&
           (*(int *)((int)room_ptr + 0x17) < (int)(uint)*(ushort *)((int)room_ptr + 0xe))) {
          rand_seed = rand_seed - 1;
        }
        if (((int)rand_seed < 0) ||
           (room_ptr = (int *)(&g_rooms + (uint)*(ushort *)((int)room_ptr + 6) * 0x45),
           room_ptr < &g_bss_002ddd1c)) break;
      }
    }
    val_2 = 0;
    if (0 < (int)uval_2) {
      do {
        if ((room_ptr != arg_edx) &&
           (*(int *)((int)room_ptr + 0x17) < (int)(uint)*(ushort *)((int)room_ptr + 0xe))) {
          ch = room_number_slabs_room_zero_0ccf10();
          if (ch != '\0') {
            return 1;
          }
          room_ptr = (int *)(&g_rooms + (uint)*(ushort *)(extraout_ECX + 6) * 0x45);
          if (room_ptr == (int *)&g_rooms) {
            room_ptr = (int *)(&g_rooms +
                            (uint)*(ushort *)(&g_bss_002e0594 + val * 0x1508 + uval * 2) * 0x45);
          }
        }
        val_2 = val_2 + 1;
      } while (val_2 < (int)uval_2);
    }
  }
  return 0;
}

/******************************************************************************
 * Function : room_number_slabs_room_zero_0ccf10 (Original VA: 0xccf10, Ghidra: FUN_000ccf10)
 * Prototype: uint room_number_slabs_room_zero_0ccf10(void);
 * Address  : 0xccf10 (Size: 707 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 2949, 2956, 3004
 * Purpose  : String 'Number of slabs for room is zero'
 * Callers  : 5 -> person_trying_remove_spell_room_064365, person_update_creature_and_thing_064703, research_could_find_room_thing_066dc2, workshop_what_hell_have_we_076d56, room_process_dungeon_room_0ccd6c
 * Callees  : 4 -> mapwho_process_map_subtile_050d3c, ceiling_process_map_subtile_07ddf8, move_process_map_subtile_0b2cb4, LbErrorLog
 ******************************************************************************/
uint room_number_slabs_room_zero_0ccf10(void)

{
  short short_val;
  uint uval;
  int val;
  int val_2;
  undefined1 *arg_edx;
  int val_3;
  short *arg_ebx;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_18;
  
  if (&g_rooms < arg_edx) {
    local_2c = (uint)*(ushort *)(arg_edx + 0x37);
    if (*(short *)(arg_edx + 0x3b) == 0) {
      LbErrorLog(); /* LbErrorLog("room.cpp", line 2949, "Number of slabs for room is zero") */
      uval = LbErrorLog(); /* LbErrorLog("room.cpp", line 2956, "Room used structure is ZERO") */
      goto LAB_000cd1c9;
    }
    uval = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = uval >> 0xd | uval * 0x80000;
    local_30 = g_action_random_seed % (uint)*(ushort *)(arg_edx + 0x3b);
    val = 0;
    if (local_30 != 0) {
      do {
        local_2c = (uint)*(ushort *)(&g_bss_002d33c6 + local_2c * 6);
        val = val + 1;
      } while (val < (int)local_30);
    }
    for (local_34 = 0; local_34 < (int)(uint)*(ushort *)(arg_edx + 0x3b); local_34 = local_34 + 1) {
      if (*(ushort *)(arg_edx + 0x3b) == local_30) {
        local_2c = CONCAT22((short)(local_30 >> 0x10),*(undefined2 *)(arg_edx + 0x37));
        local_30 = 0;
      }
      uval = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = uval >> 0xd | uval * 0x80000;
      uval = g_action_random_seed % 9;
      local_18 = 0;
      do {
        val = ((int)local_2c % 0x55) * 3 + (int)uval % 3;
        val_3 = ((int)local_2c / 0x55) * 3 + (int)uval / 3;
        if ((*(byte *)((int)&g_bss_0019e973 +
                      (*(uint *)((int)&g_map_subtiles + (val_3 * 0x100 + val) * 5 + 1) & 0x7ff) *
                      0x18 + 2) >> 4 == 1) && (val_2 = mapwho_process_map_subtile_050d3c(), val_2 == 0)) {
          *arg_ebx = (short)val * 0x100 + 0x80;
          arg_ebx[1] = (short)val_3 * 0x100 + 0x80;
          short_val = move_process_map_subtile_0b2cb4();
          arg_ebx[2] = short_val;
          val = ceiling_process_map_subtile_07ddf8();
          if (val == 0) {
            return 1;
          }
        }
        uval = (int)(uval + 1) % 9;
        local_18 = local_18 + 1;
      } while (local_18 < 9);
      local_2c = (uint)*(ushort *)(&g_bss_002d33c6 + local_2c * 6);
      local_30 = local_30 + 1;
    }
  }
  uval = LbErrorLog(); /* LbErrorLog("room.cpp", line 3004, "Could not find valid RANDOM point in room for thing") */
LAB_000cd1c9:
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : room_could_find_valid_random_0cd1d4 (Original VA: 0xcd1d4, Ghidra: FUN_000cd1d4)
 * Prototype: uint room_could_find_valid_random_0cd1d4(void);
 * Address  : 0xcd1d4 (Size: 657 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 3073
 * Purpose  : String 'Could not find valid RANDOM point in room for thing'
 * Callers  : 1 -> room_lair_thinks_it_belongs_0c9280
 * Callees  : 4 -> mapwho_process_map_subtile_050d3c, ceiling_process_map_subtile_07ddf8, move_process_map_subtile_0b2cb4, LbErrorLog
 ******************************************************************************/
uint room_could_find_valid_random_0cd1d4(void)

{
  short short_val;
  int val;
  int val_2;
  uint arg_ecx;
  undefined1 *arg_edx;
  uint uval;
  int val_3;
  short *arg_ebx;
  uint local_3c;
  int local_34;
  int local_20;
  uint local_1c;
  
  uval = (uint)*(ushort *)(arg_edx + 0x3b);
  if (1 < *(ushort *)(arg_edx + 0x3b)) {
    if (&g_rooms < arg_edx) {
      local_1c = (uint)*(ushort *)(arg_edx + 0x37);
      uval = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = uval >> 0xd | uval * 0x80000;
      local_3c = g_action_random_seed % (uint)*(ushort *)(arg_edx + 0x3b);
      val = 0;
      if (local_3c != 0) {
        do {
          local_1c = (uint)*(ushort *)(&g_bss_002d33c6 + local_1c * 6);
          val = val + 1;
        } while (val < (int)local_3c);
      }
      for (local_20 = 0; local_20 < (int)(uint)*(ushort *)(arg_edx + 0x3b); local_20 = local_20 + 1)
      {
        if (*(ushort *)(arg_edx + 0x3b) == local_3c) {
          local_1c = CONCAT22((short)(local_3c >> 0x10),*(undefined2 *)(arg_edx + 0x37));
          local_3c = 0;
        }
        if (local_1c != arg_ecx) {
          uval = g_action_random_seed * 0x24a1 + 0x24df;
          g_action_random_seed = uval >> 0xd | uval * 0x80000;
          uval = g_action_random_seed % 9;
          local_34 = 0;
          do {
            val = ((int)local_1c % 0x55) * 3 + (int)uval % 3;
            val_3 = ((int)local_1c / 0x55) * 3 + (int)uval / 3;
            val_2 = val_3 * 0x100 + val;
            if ((((*(byte *)((int)&g_map_subtiles + val_2 * 5) & 0x10) == 0) &&
                (((&g_bss_00269203)[val_2] & 0xf) < 5)) && (val_2 = mapwho_process_map_subtile_050d3c(), val_2 == 0)) {
              *arg_ebx = (short)val * 0x100 + 0x80;
              arg_ebx[1] = (short)val_3 * 0x100 + 0x80;
              short_val = move_process_map_subtile_0b2cb4();
              arg_ebx[2] = short_val;
              val = ceiling_process_map_subtile_07ddf8();
              if (val == 0) {
                return 1;
              }
            }
            local_34 = local_34 + 1;
            uval = (int)(uval + 1) % 9;
          } while (local_34 < 9);
        }
        local_1c = (uint)*(ushort *)(&g_bss_002d33c6 + local_1c * 6);
        local_3c = local_3c + 1;
      }
    }
    uval = LbErrorLog(); /* LbErrorLog("room.cpp", line 3073, "Could not find valid RANDOM point in room for thing") */
  }
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : room_how_room_exist_slabs_0cd4dc (Original VA: 0xcd4dc, Ghidra: FUN_000cd4dc)
 * Prototype: uint room_how_room_exist_slabs_0cd4dc(void);
 * Address  : 0xcd4dc (Size: 896 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 326
 * Purpose  : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 0 -> 
 * Callees  : 10 -> inits_allocate_dynamic_light_shot_0444a9, person_fn_063b6d, room_process_slabmap_tile_0c8268, room_process_dungeon_room_0c8d10, room_process_dungeon_room_0c98d0, room_process_dungeon_room_0caa90, room_process_dungeon_room_0cb144, room_attempt_add_creature_room_0cd85c ...
 ******************************************************************************/
uint room_how_room_exist_slabs_0cd4dc(void)

{
  byte *cctrl_ptr;
  byte flag;
  ushort uval;
  ushort uval_2;
  ushort loop_i;
  int *arg_eax;
  int val;
  uint thing_ptr;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int local_14;
  
  uval = *(ushort *)((int)arg_eax + 0x37);
  while (thing_ptr = (uint)uval, thing_ptr != 0) {
    (&g_bss_002d33c8)[(thing_ptr % 0x55 + (thing_ptr / 0x55) * 0x55) * 6] = 0;
    uval = *(ushort *)(&g_bss_002d33c6 + thing_ptr * 6);
  }
  uval = *(ushort *)((int)arg_eax + 0x37);
  while (uval != 0) {
    uval_2 = *(ushort *)(&g_bss_002d33c6 + (uint)uval * 6);
    val = room_process_dungeon_room_0caa90();
    if (val == 0) {
      room_process_dungeon_room_0c8d10();
      val = inits_allocate_dynamic_light_shot_0444a9((uval % 0x55) * 0x300 + 0x80,0x180,val);
      if (val != 0) {
        *(int *)(val + 0x13) = extraout_ECX_00;
      }
      (&g_bss_002e1086)[(*arg_eax >> 0x18) * 0x542] =
           (&g_bss_002e1086)[(*arg_eax >> 0x18) * 0x542] + extraout_ECX_00;
      (&g_bss_002e1082)[(*arg_eax >> 0x18) * 0x542] =
           (&g_bss_002e1082)[(*arg_eax >> 0x18) * 0x542] + extraout_ECX_00;
      uval = uval_2;
    }
    else {
      uval = *(ushort *)(val + 0x3b);
      if (uval == 0) {
        LbErrorLog(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
        val_2 = 0;
      }
      else {
        if (uval < 2) {
          local_14 = 0;
        }
        else if (uval == 2) {
          local_14 = 4;
        }
        else {
          local_14 = (uint)*(ushort *)(val + 0x3b) * 4 + -4;
        }
        thing_ptr = (uint)*(ushort *)(val + 0x3b);
        if (0x31 < *(ushort *)(val + 0x3b)) {
          thing_ptr = 0x31;
        }
        flag = (&g_data_0018b6d4)[thing_ptr];
        uval = *(ushort *)(val + 0x3b);
        val_2 = 0;
        for (loop_i = *(ushort *)(val + 0x37); loop_i != 0;
            loop_i = *(ushort *)(&g_bss_002d33c6 + (uint)loop_i * 6)) {
          val_2 = room_process_slabmap_tile_0c8268();
          val_2 = extraout_ECX + val_2;
        }
        val_2 = ((val_2 - local_14) * 0x100) / (int)(((uint)uval * 8 + (uint)flag * 2) - local_14)
        ;
        if (0x100 < val_2) {
          val_2 = 0x100;
        }
      }
      *(short *)(val + 0x3f) = (short)val_2;
      room_process_dungeon_room_0cb144();
      uval = uval_2;
    }
  }
  if (*arg_eax >> 0x18 != (uint)g_neutral_player_number) {
    thing_ptr = (&g_thing_ptrs)[*(ushort *)((int)arg_eax + 0x3d)];
    if (g_thing_ptrs < thing_ptr) {
      do {
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7e) = 0xffff; /* thing->ccontrol_idx */
        thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa)]; /* thing->ccontrol_idx */
      } while (g_thing_ptrs < thing_ptr);
    }
    thing_ptr = (&g_thing_ptrs)[g_bss_002e6eb6];
    if (g_thing_ptrs < thing_ptr) {
      do {
        if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7e) == -1) { /* thing->ccontrol_idx */
          if ((uint)(byte)(&g_bss_002d33c8)
                          [((&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0x10)] * 0x55 +
                           (&g_subtile_to_slab_lut)[*(byte *)(thing_ptr + 0xe)]) * 6] * 0x45 == 0) {
            cctrl_ptr = (byte *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 1); /* thing->ccontrol_idx */
            *cctrl_ptr = *cctrl_ptr & 0xdf;
            *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x7e) = 0; /* thing->ccontrol_idx */
            person_fn_063b6d();
          }
          else {
            room_attempt_remove_creature_room_0cdaec();
            room_attempt_add_creature_room_0cd85c();
          }
        }
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x67)];
      } while (g_thing_ptrs < thing_ptr);
    }
  }
  thing_ptr = room_process_dungeon_room_0c98d0();
  return thing_ptr & 0xffffff00;
}

/******************************************************************************
 * Function : room_attempt_add_creature_room_0cd85c (Original VA: 0xcd85c, Ghidra: FUN_000cd85c)
 * Prototype: uint room_attempt_add_creature_room_0cd85c(void);
 * Address  : 0xcd85c (Size: 338 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 3231, 3275
 * Purpose  : String 'Attempt to add creature to room type %d when he is a member '
 * Callers  : 14 -> barracks_update_creature_control_013747, gen2_update_creature_control_03818c, pom_update_creature_control_065b07, research_move_research_room_066447, scavenge_update_creature_control_067861, temple_update_creature_control_073038, torture_update_creature_control_074616, torture_update_creature_control_074d42 ...
 * Callees  : 3 -> room_attempt_remove_creature_room_0cd9b0, LbErrorLog, dk_sprintf
 ******************************************************************************/
uint room_attempt_add_creature_room_0cd85c(void)

{
  byte *byte_ptr;
  int cctrl_ptr;
  int thing;
  uint uval;
  int extraout_ECX;
  int arg_edx;
  
  if (*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) != 0) { /* thing->ccontrol_idx */
    dk_sprintf(&g_log_sprintf_buf,s_Attempt_to_add_creature_to_room_t_0016c21c,
                 *(undefined2 *)(arg_edx + 10),
                 *(undefined2 *)
                  (&g_room_slabs_count +
                  (uint)*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) * 0x45)); /* thing->ccontrol_idx */
    LbErrorLog(); /* LbErrorLog("room.cpp", line 3231, g_log_buf) */
    room_attempt_remove_creature_room_0cd9b0();
    arg_edx = extraout_ECX;
  }
  if ((char)(*(char *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 1) << 2) < '\0') { /* thing->ccontrol_idx */
    uval = LbErrorLog(); /* LbErrorLog("room.cpp", line 3275, "Attempt to add creature to a room when he is in the list of another") */
  }
  else {
    uval = *(ushort *)(arg_edx + 0x10) + 1;
    if (uval <= *(ushort *)(arg_edx + 0xe)) {
      *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) + 1;
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x7e) = /* thing->ccontrol_idx */
           *(undefined2 *)(arg_edx + 1);
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2aa) = /* thing->ccontrol_idx */
           *(undefined2 *)(arg_edx + 0x3d);
      *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x2ac) = 0; /* thing->ccontrol_idx */
      if (*(ushort *)(arg_edx + 0x3d) != 0) {
        *(undefined2 *)
         ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(arg_edx + 0x3d)] + 100)] + 0x2ac) =
             *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
      }
      *(undefined2 *)(arg_edx + 0x3d) = *(undefined2 *)(thing + 0x1b); /* thing->index_or_angle */
      cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
      byte_ptr = (byte *)(cctrl_ptr + 1);
      *byte_ptr = *byte_ptr | 0x20;
      return CONCAT31((int3)((uint)cctrl_ptr >> 8),1);
    }
  }
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : room_attempt_remove_creature_room_0cd9b0 (Original VA: 0xcd9b0, Ghidra: FUN_000cd9b0)
 * Prototype: ulonglong room_attempt_remove_creature_room_0cd9b0(void);
 * Address  : 0xcd9b0 (Size: 313 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 3313
 * Purpose  : String 'Attempt to remove a creature from room type %d with too litt'
 * Callers  : 15 -> barracks_update_creature_control_013747, barracks_fn_0137af, gen2_update_creature_control_03818c, good_fn_038212, person_external_change_state_but_064a5f, person_initialise_state_but_thing_064b0c, person_fn_064e59, research_move_research_room_066447 ...
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
ulonglong room_attempt_remove_creature_room_0cd9b0(void)

{
  undefined2 uval;
  int room_off;
  int thing;
  int val;
  undefined2 uval_2;
  int extraout_ECX;
  int cctrl_ptr;
  undefined4 arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  room_off = (uint)*(ushort *)(cctrl_ptr + 0x7e) * 0x45;
  if ((*(short *)(cctrl_ptr + 0x7e) != 0) && ((*(byte *)(cctrl_ptr + 1) & 0x20) != 0)) {
    val = *(ushort *)(&g_bss_002ddd2b + room_off) - 1;
    if (val < 0) {
      dk_sprintf(&g_log_sprintf_buf,s_Attempt_to_remove_a_creature_fro_0016c2b9,
                   *(undefined2 *)(&g_room_slabs_count + room_off));
      val = LbErrorLog(); /* LbErrorLog("room.cpp", line 3313, g_log_buf) */
      cctrl_ptr = extraout_ECX;
    }
    else {
      *(short *)(&g_bss_002ddd2b + room_off) = *(short *)(&g_bss_002ddd2b + room_off) + -1;
    }
    if (*(ushort *)(cctrl_ptr + 0x2ac) == 0) {
      uval_2 = (undefined2)((uint)val >> 0x10);
      *(undefined2 *)((int)&g_bss_002ddd58 + room_off) = *(undefined2 *)(cctrl_ptr + 0x2aa);
    }
    else {
      uval_2 = 0;
      *(undefined2 *)
       ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x2ac)] + 100)] + 0x2aa) =
           *(undefined2 *)(cctrl_ptr + 0x2aa);
    }
    if (*(short *)(cctrl_ptr + 0x2aa) != 0) {
      uval_2 = 0;
      *(undefined2 *)
       ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x2aa)] + 100)] + 0x2ac) =
           *(undefined2 *)(cctrl_ptr + 0x2ac);
    }
    *(undefined2 *)(cctrl_ptr + 0x2aa) = 0;
    *(undefined2 *)(cctrl_ptr + 0x2ac) = 0;
    uval = *(undefined2 *)(cctrl_ptr + 0x7e);
    *(undefined2 *)(cctrl_ptr + 0x7e) = 0;
    *(undefined2 *)(cctrl_ptr + 0x7c) = uval;
    *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) & 0xdf;
    return CONCAT44(arg_edx,CONCAT31((int3)(CONCAT22(uval_2,uval) >> 8),1));
  }
  return CONCAT44(arg_edx,cctrl_ptr) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : room_attempt_remove_creature_room_0cdaec (Original VA: 0xcdaec, Ghidra: FUN_000cdaec)
 * Prototype: int room_attempt_remove_creature_room_0cdaec(void);
 * Address  : 0xcdaec (Size: 272 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 3393
 * Purpose  : String 'Attempt to remove a creature from room type %d with too litt'
 * Callers  : 4 -> room_how_room_exist_slabs_0c8654, room_process_dungeon_room_0cc65c, room_how_room_exist_slabs_0cd4dc, room_process_thing_entity_0cdbfc
 * Callees  : 2 -> LbErrorLog, dk_sprintf
 ******************************************************************************/
int room_attempt_remove_creature_room_0cdaec(void)

{
  undefined2 uval;
  int thing;
  int val;
  undefined2 uval_2;
  int extraout_ECX;
  int cctrl_ptr;
  int arg_edx;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(byte *)(cctrl_ptr + 1) & 0x20) != 0) {
    val = *(ushort *)(arg_edx + 0x10) - 1;
    if (val < 0) {
      dk_sprintf(&g_log_sprintf_buf,s_Attempt_to_remove_a_creature_fro_0016c30c,
                   *(undefined2 *)(arg_edx + 10));
      val = LbErrorLog(); /* LbErrorLog("room.cpp", line 3393, g_log_buf) */
      cctrl_ptr = extraout_ECX;
    }
    else {
      *(short *)(arg_edx + 0x10) = *(short *)(arg_edx + 0x10) + -1;
    }
    if (*(ushort *)(cctrl_ptr + 0x2ac) == 0) {
      uval_2 = (undefined2)((uint)val >> 0x10);
      *(undefined2 *)(arg_edx + 0x3d) = *(undefined2 *)(cctrl_ptr + 0x2aa);
    }
    else {
      uval_2 = 0;
      *(undefined2 *)
       ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x2ac)] + 100)] + 0x2aa) =
           *(undefined2 *)(cctrl_ptr + 0x2aa);
    }
    if (*(ushort *)(cctrl_ptr + 0x2aa) != 0) {
      uval_2 = 0;
      *(undefined2 *)
       ((&g_creature_ctrl_ptrs)[*(ushort *)((&g_thing_ptrs)[*(ushort *)(cctrl_ptr + 0x2aa)] + 100)] + 0x2ac) =
           *(undefined2 *)(cctrl_ptr + 0x2ac);
    }
    *(undefined2 *)(cctrl_ptr + 0x2aa) = 0;
    *(undefined2 *)(cctrl_ptr + 0x2ac) = 0;
    uval = *(undefined2 *)(cctrl_ptr + 0x7e);
    *(undefined2 *)(cctrl_ptr + 0x7e) = 0;
    *(undefined2 *)(cctrl_ptr + 0x7c) = uval;
    *(byte *)(cctrl_ptr + 1) = *(byte *)(cctrl_ptr + 1) & 0xdf;
    return CONCAT31((int3)(CONCAT22(uval_2,uval) >> 8),1);
  }
  return (uint)(byte)(*(ushort *)(thing + 100) >> 8) << 8; /* thing->ccontrol_idx */
}

/******************************************************************************
 * Function : room_process_thing_entity_0cdbfc (Original VA: 0xcdbfc, Ghidra: FUN_000cdbfc)
 * Prototype: void room_process_thing_entity_0cdbfc(void);
 * Address  : 0xcdbfc (Size: 211 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 2 -> room_attempt_add_creature_room_0cd85c, room_attempt_remove_creature_room_0cdaec
 ******************************************************************************/
void room_process_thing_entity_0cdbfc(void)

{
  ushort uval;
  int val;
  uint uval_2;
  int arg_eax;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  
  uval = *(ushort *)(arg_edx + 0x37);
  *(undefined2 *)(arg_edx + 0x3b) = 0;
  while (uval_2 = (uint)uval, uval_2 != 0) {
    *(short *)(arg_edx + 0x3b) = *(short *)(arg_edx + 0x3b) + 1;
    (&g_bss_002d33c8)[(uval_2 % 0x55 + (uval_2 / 0x55) * 0x55) * 6] = *(undefined1 *)(arg_edx + 1);
    uval = *(ushort *)(&g_bss_002d33c6 + uval_2 * 6);
  }
  val = (uint)*(ushort *)(arg_edx + 10) * 0x17;
  if (*(int *)(&g_data_0018ebad + val) != 0) {
    (**(code **)(&g_data_0018ebad + val))();
    arg_eax = extraout_ECX;
  }
  if (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x3d)]) {
    do {
      room_attempt_remove_creature_room_0cdaec();
      room_attempt_add_creature_room_0cd85c();
    } while (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)(extraout_ECX_00 + 0x3d)]);
  }
  return;
}

/******************************************************************************
 * Function : room_update_slab_subtile_columns_0cdcd0 (Original VA: 0xcdcd0, Ghidra: FUN_000cdcd0)
 * Prototype: undefined4 room_update_slab_subtile_columns_0cdcd0(void);
 * Address  : 0xcdcd0 (Size: 1042 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 3 -> gen2_update_creature_control_03818c, good_update_creature_control_03826c, room_fn_0ce0e4
 * Callees  : 3 -> ceiling_process_map_subtile_07ddf8, light_process_map_subtile_0b2398, move_process_map_subtile_0b2cb4
 ******************************************************************************/
undefined4 room_update_slab_subtile_columns_0cdcd0(void)

{
  int arg_eax;
  uint rand_seed;
  undefined1 *room_ptr;
  uint uval;
  uint uval_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int arg_edx;
  int slab_coord;
  uint uval_3;
  undefined4 *arg_ebx;
  int val;
  int val_2;
  int val_3;
  byte flag;
  undefined4 local_3c;
  undefined2 local_38 [2];
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined1 local_14;
  
  flag = 0;
  local_30 = ((uint)(byte)(&g_data_00190d3d)[*(ushort *)(arg_eax + 0x56)] * 0x100) / 2;
  slab_coord = (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
          (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55;
  rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
  rand_seed = rand_seed >> 0xd | rand_seed * 0x80000;
  uval_3 = rand_seed % 9;
  rand_seed = rand_seed * 0x24a1 + 0x24df;
  local_2c = rand_seed >> 0xd;
  g_action_random_seed = local_2c | rand_seed * 0x80000;
  local_2c = local_2c & 3;
  local_28 = 0;
  do {
    val = (*(int *)(&g_data_0018b6b0 + local_2c * 2) >> 0x10) + slab_coord;
    rand_seed = (val % 0x55) * 3;
    local_34 = (val / 0x55) * 3;
    local_14 = (undefined1)rand_seed;
    room_ptr = (undefined1 *)0x0;
    if ((*(byte *)((int)&g_map_subtiles + (uint)CONCAT11((undefined1)local_34,local_14) * 5) & 2) != 0
       ) {
      room_ptr = &g_rooms +
               (uint)(byte)(&g_bss_002d33c8)
                           [((&g_subtile_to_slab_lut)[local_34 & 0xff] * 0x55 + (&g_subtile_to_slab_lut)[rand_seed & 0xff]
                            ) * 6] * 0x45;
    }
    if ((&g_rooms < room_ptr) && (*(short *)(room_ptr + 1) == *(short *)(arg_edx + 1))) {
      val = 0;
      uval_2 = uval_3;
      do {
        val_3 = rand_seed + (int)uval_2 % 3;
        val_2 = local_34 + (int)uval_2 / 3;
        if (((*(byte *)((int)&g_map_subtiles + (val_2 * 0x100 + val_3) * 5) & 0x10) == 0) &&
           (((&g_bss_002e9125)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\0' ||
            (uval = light_process_map_subtile_0b2398(), val = extraout_ECX, (uval & 0xfffffffe) != 0x28)))) {
          local_3c = CONCAT22((short)val_2 * 0x100 + 0x80,(short)val_3 * 0x100 + 0x80);
          local_38[0] = move_process_map_subtile_0b2cb4();
          slab_coord = ceiling_process_map_subtile_07ddf8();
          if (slab_coord != 0) {
            return 0;
          }
          *arg_ebx = local_3c;
          *(undefined2 *)(arg_ebx + (uint)flag * -2 + 1) = local_38[(uint)flag * -4];
          return 1;
        }
        uval_2 = (int)(uval_2 + 1) % 9;
        val = val + 1;
      } while (val < 9);
    }
    local_2c = (int)(local_2c + 1) % 4;
    local_28 = local_28 + 1;
  } while (local_28 < 4);
  rand_seed = (slab_coord % 0x55) * 3;
  local_34 = (slab_coord / 0x55) * 3;
  local_14 = (undefined1)rand_seed;
  room_ptr = (undefined1 *)0x0;
  if ((*(byte *)((int)&g_map_subtiles + (uint)CONCAT11((undefined1)local_34,local_14) * 5) & 2) != 0)
  {
    room_ptr = &g_rooms +
             (uint)(byte)(&g_bss_002d33c8)
                         [((&g_subtile_to_slab_lut)[rand_seed & 0xff] + (&g_subtile_to_slab_lut)[local_34 & 0xff] * 0x55)
                          * 6] * 0x45;
  }
  if ((&g_rooms < room_ptr) && (*(short *)(room_ptr + 1) == *(short *)(arg_edx + 1))) {
    slab_coord = 0;
    do {
      val = rand_seed + (int)uval_3 % 3;
      val_3 = local_34 + (int)uval_3 / 3;
      if (((*(byte *)((int)&g_map_subtiles + (val_3 * 0x100 + val) * 5) & 0x10) == 0) &&
         (((&g_bss_002e9125)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] == '\0' ||
          (uval_2 = light_process_map_subtile_0b2398(), slab_coord = extraout_ECX_00, (uval_2 & 0xfffffffe) != 0x28)))) {
        local_3c = CONCAT22((short)val_3 * 0x100 + 0x80,(short)val * 0x100 + 0x80);
        local_38[0] = move_process_map_subtile_0b2cb4();
        slab_coord = ceiling_process_map_subtile_07ddf8();
        if (slab_coord != 0) {
          return 0;
        }
        *arg_ebx = local_3c;
        *(undefined2 *)(arg_ebx + (uint)flag * -2 + 1) = local_38[(uint)flag * -4];
        return 1;
      }
      uval_3 = (int)(uval_3 + 1) % 9;
      slab_coord = slab_coord + 1;
    } while (slab_coord < 9);
  }
  return 0;
}

/******************************************************************************
 * Function : room_fn_0ce0e4 (Original VA: 0xce0e4, Ghidra: FUN_000ce0e4)
 * Prototype: undefined4 room_fn_0ce0e4(void);
 * Address  : 0xce0e4 (Size: 61 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0ce0e4
 * Callers  : 5 -> barracks_fn_013730, pom_fn_065af0, scavenge_fn_067374, torture_fn_0744bf, food_get_near_food_0aafd4
 * Callees  : 2 -> move_update_creature_control_0b3b58, room_update_slab_subtile_columns_0cdcd0
 ******************************************************************************/
undefined4 room_fn_0ce0e4(void)

{
  short short_val;
  int val;
  
  val = room_update_slab_subtile_columns_0cdcd0();
  if ((val != 0) && (short_val = move_update_creature_control_0b3b58(), short_val != 0)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : room_process_map_subtile_0ce148 (Original VA: 0xce148, Ghidra: FUN_000ce148)
 * Prototype: void room_process_map_subtile_0ce148(void);
 * Address  : 0xce148 (Size: 224 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_process_map_subtile_0ce148(void)

{
  int val;
  int val_2;
  int arg_eax;
  int val_3;
  int val_4;
  int val_5;
  int val_6;
  int val_7;
  short sStack_1c;
  
  *(undefined2 *)(arg_eax + 0xe) = 0;
  for (sStack_1c = *(short *)(arg_eax + 0x37); val_4 = (int)sStack_1c, val_4 != 0;
      sStack_1c = *(short *)(&g_bss_002d33c6 + sStack_1c * 6)) {
    val_2 = (val_4 % 0x55) * 3;
    val_5 = val_2 + 3;
    val_7 = (val_4 / 0x55) * 3;
    val = val_7 + 3;
    if (val_7 < val) {
      val_6 = (val_4 / 0x55) * 0xf00;
      do {
        if (val_2 < val_5) {
          val_3 = (val_4 % 0x55) * 0xf + val_6;
          do {
            if (*(byte *)((int)&g_bss_0019e973 +
                         (*(uint *)((int)&g_map_subtiles + val_3 + 1) & 0x7ff) * 0x18 + 2) >> 4 == 1)
            {
              *(short *)(arg_eax + 0xe) = *(short *)(arg_eax + 0xe) + 1;
            }
            val_3 = val_3 + 5;
          } while (val_3 < val_5 * 5 + val_6);
        }
        val_7 = val_7 + 1;
        val_6 = val_6 + 0x500;
      } while (val_7 < val);
    }
  }
  return;
}

/******************************************************************************
 * Function : room_process_map_subtile_0ce228 (Original VA: 0xce228, Ghidra: FUN_000ce228)
 * Prototype: void room_process_map_subtile_0ce228(void);
 * Address  : 0xce228 (Size: 124 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_process_map_subtile_0ce228(void)

{
  int arg_eax;
  short loop_i;
  int val;
  
  *(undefined2 *)(arg_eax + 0xe) = 0;
  for (loop_i = *(short *)(arg_eax + 0x37); val = (int)loop_i, val != 0;
      loop_i = *(short *)(&g_bss_002d33c6 + loop_i * 6)) {
    if (*(byte *)((int)&g_bss_0019e973 +
                 (*(uint *)((int)&g_map_subtiles +
                           (((val / 0x55) * 3 + 1) * 0x100 + (val % 0x55) * 3 + 1) * 5 + 1) &
                 0x7ff) * 0x18 + 2) >> 4 == 1) {
      *(short *)(arg_eax + 0xe) = *(short *)(arg_eax + 0xe) + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0ce2a4 (Original VA: 0xce2a4, Ghidra: FUN_000ce2a4)
 * Prototype: void room_fn_0ce2a4(void);
 * Address  : 0xce2a4 (Size: 11 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0ce2a4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0ce2a4(void)

{
  int arg_eax;
  
  *(undefined2 *)(arg_eax + 0xe) = *(undefined2 *)(arg_eax + 0x3b);
  return;
}

/******************************************************************************
 * Function : room_fn_0ce2b0 (Original VA: 0xce2b0, Ghidra: FUN_000ce2b0)
 * Prototype: void room_fn_0ce2b0(void);
 * Address  : 0xce2b0 (Size: 36 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0ce2b0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0ce2b0(void)

{
  undefined2 uval;
  int arg_eax;
  uint uval_2;
  
  uval_2 = *(ushort *)(arg_eax + 0x3b) / 2;
  uval = (undefined2)uval_2;
  if (uval_2 == 0) {
    uval = 1;
  }
  *(undefined2 *)(arg_eax + 0xe) = uval;
  return;
}

/******************************************************************************
 * Function : room_fn_0ce2d4 (Original VA: 0xce2d4, Ghidra: FUN_000ce2d4)
 * Prototype: void room_fn_0ce2d4(void);
 * Address  : 0xce2d4 (Size: 75 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0ce2d4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0ce2d4(void)

{
  ushort uval;
  undefined2 uval_2;
  int arg_eax;
  int val;
  int val_2;
  uint uval_3;
  
  *(undefined2 *)(arg_eax + 0xe) = *(undefined2 *)(arg_eax + 0x3b);
  val = (uint)*(ushort *)(arg_eax + 0x3f) * (uint)*(ushort *)(arg_eax + 0xe);
  val_2 = val >> 0x1f;
  uval = (ushort)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0) >> 8);
  *(ushort *)(arg_eax + 0xe) = uval;
  uval_3 = uval / 2;
  uval_2 = (undefined2)uval_3;
  if (uval_3 == 0) {
    uval_2 = 1;
  }
  *(undefined2 *)(arg_eax + 0xe) = uval_2;
  return;
}

/******************************************************************************
 * Function : room_fn_0ce340 (Original VA: 0xce340, Ghidra: FUN_000ce340)
 * Prototype: void room_fn_0ce340(void);
 * Address  : 0xce340 (Size: 56 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0ce340
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0ce340(void)

{
  int arg_eax;
  int val;
  int val_2;
  
  *(ushort *)(arg_eax + 0xe) = *(ushort *)(arg_eax + 0x3b);
  val = (uint)*(ushort *)(arg_eax + 0x3b) * (uint)*(ushort *)(arg_eax + 0x3f);
  val_2 = val >> 0x1f;
  val = (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
  if (val < 1) {
    val = 1;
  }
  *(short *)(arg_eax + 0xe) = (short)val;
  return;
}

/******************************************************************************
 * Function : room_fn_0ce378 (Original VA: 0xce378, Ghidra: FUN_000ce378)
 * Prototype: void room_fn_0ce378(void);
 * Address  : 0xce378 (Size: 56 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0ce378
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0ce378(void)

{
  int arg_eax;
  int val;
  int val_2;
  
  *(ushort *)(arg_eax + 0xe) = *(ushort *)(arg_eax + 0x3b);
  val = (uint)*(ushort *)(arg_eax + 0x3b) * (uint)*(ushort *)(arg_eax + 0x3f);
  val_2 = val >> 0x1f;
  val = (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
  if (val < 1) {
    val = 1;
  }
  *(short *)(arg_eax + 0xe) = (short)val;
  return;
}

/******************************************************************************
 * Function : room_fn_0ce3b0 (Original VA: 0xce3b0, Ghidra: FUN_000ce3b0)
 * Prototype: void room_fn_0ce3b0(void);
 * Address  : 0xce3b0 (Size: 101 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0ce3b0
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void room_fn_0ce3b0(void)

{
  short short_val;
  int arg_eax;
  int val;
  int val_2;
  
  val = (uint)*(ushort *)(arg_eax + 0x3f) * (uint)*(ushort *)(arg_eax + 0x3b);
  val_2 = val >> 0x1f;
  val = (int)((val + val_2 * -0x100) - (uint)(val_2 << 7 < 0)) >> 8;
  if (val < 1) {
    val = 1;
  }
  if (val == 1) {
    short_val = *(short *)(arg_eax + 0x3b);
  }
  else {
    val = (val * 5) / (int)(uint)*(ushort *)(arg_eax + 0x3b);
    if (val < 1) {
      val = 1;
    }
    short_val = (short)val * *(short *)(arg_eax + 0x3b);
  }
  *(short *)(arg_eax + 0xe) = short_val;
  return;
}

/******************************************************************************
 * Function : room_process_thing_entity_0ce418 (Original VA: 0xce418, Ghidra: FUN_000ce418)
 * Prototype: void room_process_thing_entity_0ce418(void);
 * Address  : 0xce418 (Size: 536 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 0 -> 
 * Callees  : 4 -> mapwho_fn_050ea6, mapwho_fn_05102d, mapwho_process_map_subtile_05131e, room_process_thing_entity_0ce630
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void room_process_thing_entity_0ce418(void)

{
  undefined4 uval;
  ushort uval_2;
  int arg_eax;
  int val;
  uint uval_3;
  int extraout_ECX;
  byte flag;
  undefined2 auStack_30 [2];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  flag = 0;
  local_24 = ((uint)*(ushort *)(arg_eax + 0xe) / (uint)*(ushort *)(arg_eax + 0x3b)) *
             (((g_bss_002eb9e8 >> 0x10) * 9) / 5);
  uval_2 = *(ushort *)(arg_eax + 0x37);
  local_1c = 0;
  local_2c = 0;
  local_20 = arg_eax;
  for (; uval_2 != 0; uval_2 = *(ushort *)(&g_bss_002d33c6 + (uint)uval_2 * 6)) {
    local_28 = mapwho_process_map_subtile_05131e();
    if (local_28 == 0) {
      uval_3 = room_process_thing_entity_0ce630();
      if (g_thing_ptrs < uval_3) {
        val = *(int *)(uval_3 + 0x13) / (((g_bss_002eb9e8 >> 0x10) * 9) / 5);
        if (3 < val) {
          val = 4;
        }
        local_2c = local_2c + val;
        local_1c = local_1c + *(int *)(uval_3 + 0x13);
      }
    }
    else if (local_24 < *(int *)(local_28 + 0x13)) {
      uval = *(undefined4 *)(local_28 + 0xd);
      auStack_30[(uint)flag * -4] = *(undefined2 *)(local_28 + 0x11 + (uint)flag * -8);
      mapwho_fn_05102d(uval);
      mapwho_fn_050ea6();
      val = *(int *)(extraout_ECX + 0x13) / (((g_bss_002eb9e8 >> 0x10) * 9) / 5);
      if (3 < val) {
        val = 4;
      }
      local_2c = local_2c + val;
      local_1c = local_1c + *(int *)(local_28 + 0x13);
    }
    else {
      uval_3 = room_process_thing_entity_0ce630();
      if (g_thing_ptrs < uval_3) {
        val = *(int *)(uval_3 + 0x13) / (((g_bss_002eb9e8 >> 0x10) * 9) / 5);
        if (3 < val) {
          val = 4;
        }
        local_2c = local_2c + val;
        local_1c = local_1c + *(int *)(uval_3 + 0x13);
      }
    }
  }
  *(short *)(local_20 + 0x10) = (short)local_2c;
  *(int *)(local_20 + 0x17) = local_1c;
  return;
}

/******************************************************************************
 * Function : room_process_thing_entity_0ce630 (Original VA: 0xce630, Ghidra: FUN_000ce630)
 * Prototype: int room_process_thing_entity_0ce630(void);
 * Address  : 0xce630 (Size: 418 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 1 -> room_process_thing_entity_0ce418
 * Callees  : 6 -> mapwho_process_map_subtile_050d3c, mapwho_fn_050ea6, mapwho_trying_create_gold_hoarde_050f1a, mapwho_fn_05117d, structs_update_creature_control_072af4, move_process_map_subtile_0b3788
 ******************************************************************************/
int room_process_thing_entity_0ce630(void)

{
  int val;
  short short_val;
  undefined2 uval;
  int *arg_eax;
  uint uval_2;
  int arg_ecx;
  int extraout_ECX;
  short arg_dx;
  int extraout_EDX;
  int val_2;
  int val_3;
  undefined4 local_18;
  
  local_18 = arg_ecx;
  if (*arg_eax >> 0x18 != (uint)g_neutral_player_number) {
    val_2 = 0;
    val_3 = 0;
    do {
      uval_2 = mapwho_process_map_subtile_050d3c();
      if (g_thing_ptrs < uval_2) {
        val_2 = val_2 + *(int *)(uval_2 + 0x13);
        structs_update_creature_control_072af4();
      }
      uval_2 = mapwho_process_map_subtile_050d3c();
      if (g_thing_ptrs < uval_2) {
        structs_update_creature_control_072af4();
        val_2 = val_2 + extraout_ECX;
      }
      uval_2 = mapwho_process_map_subtile_050d3c();
      if (g_thing_ptrs < uval_2) {
        val = *(int *)(uval_2 + 0x13);
        structs_update_creature_control_072af4();
        val_2 = val_2 + val;
      }
      val_3 = val_3 + 2;
    } while (val_3 != 0x12);
    if (val_2 != 0) {
      short_val = (arg_dx * 3 + 1) * 0x100 + 0x80;
      uval = move_process_map_subtile_0b3788(short_val);
      if (extraout_EDX == 0) {
        local_18 = mapwho_trying_create_gold_hoarde_050f1a();
        if (local_18 != 0) {
          val_2 = val_2 - *(int *)(local_18 + 0x13);
        }
      }
      else {
        val_3 = mapwho_fn_05117d(short_val,uval);
        val_2 = val_2 - val_3;
      }
      if (val_2 != 0) {
        mapwho_fn_050ea6();
      }
    }
  }
  return local_18;
}

/******************************************************************************
 * Function : room_process_map_subtile_0ce7d4 (Original VA: 0xce7d4, Ghidra: FUN_000ce7d4)
 * Prototype: void room_process_map_subtile_0ce7d4(void);
 * Address  : 0xce7d4 (Size: 768 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Reads/modifies Map[256x256] subtile data
 * Callers  : 0 -> 
 * Callees  : 3 -> inits_allocate_light_object_043f07, structs_update_creature_control_072af4, ceiling_process_map_subtile_07dbc0
 ******************************************************************************/
void room_process_map_subtile_0ce7d4(void)

{
  int val;
  char ch;
  byte flag;
  uint thing_ptr;
  int val_2;
  short loop_i;
  int arg_eax;
  int val_3;
  uint thing_ptr_2;
  int val_4;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int val_5;
  int val_6;
  int val_7;
  int local_34;
  int local_30;
  byte local_1c;
  
  *(undefined2 *)(arg_eax + 0x10) = 0;
  val_6 = 0;
  val_7 = 0;
  local_1c = 0;
  do {
    if (1 < local_1c) {
      return;
    }
    for (loop_i = *(short *)(arg_eax + 0x37); val_5 = (int)loop_i, val_5 != 0;
        loop_i = *(short *)(&g_bss_002d33c6 + loop_i * 6)) {
      val_2 = (val_5 % 0x55) * 3;
      local_30 = (val_5 / 0x55) * 3;
      val = local_30 + 3;
      val_3 = local_30 - val;
      while (SBORROW4(local_30,val) != val_3 < 0) {
        if (val_2 < val_2 + 3) {
          val_3 = (val_5 % 0x55) * 0xf + local_30 * 0x500;
          local_34 = val_2;
          do {
            if (*(byte *)((int)&g_bss_0019e973 +
                         (*(uint *)((int)&g_map_subtiles + val_3 + 1) & 0x7ff) * 0x18 + 2) >> 4 == 0)
            {
              thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + val_3 + 1) & 0x3fffff) >> 0xb]
              ;
              val_4 = 0;
              if (g_thing_ptrs < thing_ptr_2) {
                do {
                  if ((*(char *)(thing_ptr_2 + 0x1f) == '\x01') && /* thing->class_id */
                     ((((ch = *(char *)(thing_ptr_2 + 0x1a), ch == '\n' || (ch == '\t')) ||
                       (ch == '(')) || ((ch == ')' || (ch == '*')))))) {
                    if (*(ushort *)(arg_eax + 0x10) < *(ushort *)(arg_eax + 0xe)) {
                      val_4 = ceiling_process_map_subtile_07dbc0();
                      if (val_4 != 0) goto LAB_000cea13;
                      val_4 = 1;
                      *(short *)(arg_eax + 0x10) = *(short *)(arg_eax + 0x10) + 1;
                    }
                    else {
                      structs_update_creature_control_072af4();
                      val_4 = extraout_ECX;
                    }
                  }
                  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                } while (g_thing_ptrs < thing_ptr_2);
              }
              if ((val_4 == 0) && (*(ushort *)(arg_eax + 0x10) < *(ushort *)(arg_eax + 0xe))) {
                if (val_6 < 1) {
                  if ((0 < val_7) && (val_4 = inits_allocate_light_object_043f07(0x80,0), val_4 != 0)) {
                    val_7 = val_7 + -1;
                    *(short *)(arg_eax + 0x10) = *(short *)(arg_eax + 0x10) + 1;
                  }
                }
                else {
                  val_4 = inits_allocate_light_object_043f07(0x80,0);
                  if (val_4 != 0) {
                    val_6 = val_6 + -1;
                    *(short *)(arg_eax + 0x10) = *(short *)(arg_eax + 0x10) + 1;
                  }
                }
              }
            }
            else {
LAB_000cea13:
              thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + val_3 + 1) & 0x3fffff) >> 0xb]
              ;
              if (g_thing_ptrs < thing_ptr_2) {
                do {
                  thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                  if (*(char *)(thing_ptr_2 + 0x1f) == '\x01') { /* thing->class_id */
                    flag = *(byte *)(thing_ptr_2 + 0x1a);
                    if (flag < 10) {
                      if (flag == 9) {
LAB_000cea88:
                        val_6 = val_6 + 1;
                        structs_update_creature_control_072af4();
                        thing_ptr = extraout_ECX_01;
                      }
                    }
                    else if (flag < 0xb) {
LAB_000cea7e:
                      val_7 = val_7 + 1;
                      structs_update_creature_control_072af4();
                      thing_ptr = extraout_ECX_00;
                    }
                    else if (0x27 < flag) {
                      if (flag < 0x2a) goto LAB_000cea88;
                      if (flag == 0x2a) goto LAB_000cea7e;
                    }
                  }
                  thing_ptr_2 = thing_ptr;
                } while (g_thing_ptrs < thing_ptr_2);
              }
            }
            val_3 = val_3 + 5;
            local_34 = local_34 + 1;
          } while (local_34 < val_2 + 3);
        }
        local_30 = local_30 + 1;
        val_3 = local_30 - val;
      }
    }
    if ((val_6 == 0) && (val_7 == 0)) {
      return;
    }
    if (*(ushort *)(arg_eax + 0xe) <= *(ushort *)(arg_eax + 0x10)) {
      return;
    }
    local_1c = local_1c + 1;
  } while( true );
}

/******************************************************************************
 * Function : room_bloody_hell_spells_reposition_0cead4 (Original VA: 0xcead4, Ghidra: FUN_000cead4)
 * Prototype: void room_bloody_hell_spells_reposition_0cead4(void);
 * Address  : 0xcead4 (Size: 936 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * Purpose  : String 'BLOODY HELL >10 SPELLS TO REPOSITION!!!'
 * Callers  : 0 -> 
 * Callees  : 6 -> inits_allocate_light_object_043f07, magic_update_player_dungeon_04fd81, magic_remove_spell_player_as_04fdac, structs_update_creature_control_072af4, ceiling_process_map_subtile_07dbc0, LbErrorLog
 ******************************************************************************/
void room_bloody_hell_spells_reposition_0cead4(void)

{
  byte *thing_ptr;
  int camera;
  int val;
  int loop_i;
  byte *extraout_ECX;
  byte *thing_ptr_2;
  int val_2;
  bool flag;
  undefined4 *word_ptr;
  uint *word_ptr_2;
  int val_3;
  uint local_6c [10];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined2 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  short local_20;
  byte local_1c;
  
  word_ptr = &g_bss_003d8c8c;
  word_ptr_2 = local_6c;
  for (loop_i = 10; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + 1;
    word_ptr_2 = word_ptr_2 + 1;
  }
  *(undefined2 *)(camera + 0x10) = 0;
  *(undefined4 *)(camera + 0x17) = 0; /* camera->zoom */
  local_24._0_2_ = 0;
  local_24._2_2_ = 0;
  loop_i = 0;
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    local_20 = *(short *)(camera + 0x37);
    while( true ) {
      val_2 = (int)local_20;
      if (val_2 == 0) break;
      local_30 = (val_2 % 0x55) * 3;
      local_38 = (val_2 / 0x55) * 3;
      local_2c = local_30 + 3;
      local_34 = local_38 + 3;
      for (; local_38 < local_34; local_38 = local_38 + 1) {
        local_28 = local_30;
        if (local_30 < local_2c) {
          local_3c = local_30 * 5 + local_38 * 0x500;
          do {
            if (*(byte *)((int)&g_bss_0019e973 +
                         (*(uint *)((int)&g_map_subtiles + local_3c + 1) & 0x7ff) * 0x18 + 2) >> 4 ==
                1) {
              thing_ptr_2 = (&g_thing_ptrs)
                       [(*(uint *)((int)&g_map_subtiles + local_3c + 1) & 0x3fffff) >> 0xb];
              flag = false;
              if (g_thing_ptrs < thing_ptr_2) {
                do {
                  if (((thing_ptr_2[0x1f] == 1) && ((&g_data_0019103e)[thing_ptr_2[0x1a]] != '\0')) &&
                     ((*thing_ptr_2 & 0x80) == 0)) {
                    local_24 = loop_i;
                    if (*(ushort *)(camera + 0x10) < *(ushort *)(camera + 0xe)) {
                      val_2 = ceiling_process_map_subtile_07dbc0();
                      loop_i = local_24;
                      if (val_2 != 0) goto LAB_000ced55;
                      flag = true;
                      *(short *)(camera + 0x10) = *(short *)(camera + 0x10) + 1;
                    }
                    else {
                      if (*(int *)(thing_ptr_2 + 3) >> 0x18 != (uint)g_neutral_player_number) {
                        magic_remove_spell_player_as_04fdac();
                      }
                      structs_update_creature_control_072af4();
                      loop_i = local_24;
                    }
                  }
                  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                } while (g_thing_ptrs < thing_ptr_2);
              }
              if (((!flag) && (loop_i != 0)) &&
                 (*(ushort *)(camera + 0x10) < *(ushort *)(camera + 0xe))) {
                val_3 = 0;
                val_2 = 0;
                do {
                  if (*(int *)((int)local_6c + val_2) != 0) {
                    local_43 = (undefined1)local_28;
                    local_44 = 0x80;
                    local_42 = 0x80;
                    local_40 = 0;
                    local_41 = (undefined1)local_38;
                    local_24 = loop_i;
                    val = inits_allocate_light_object_043f07();
                    loop_i = local_24;
                    if (val != 0) {
                      if (*(int *)(val + 3) >> 0x18 != (uint)g_neutral_player_number) {
                        magic_update_player_dungeon_04fd81();
                      }
                      *(short *)(camera + 0x10) = *(short *)(camera + 0x10) + 1;
                      local_6c[val_3] = 0;
                      loop_i = local_24 + -1;
                      local_24._0_2_ = (undefined2)loop_i;
                      local_24._2_2_ = (undefined2)((uint)loop_i >> 0x10);
                      break;
                    }
                  }
                  val_2 = val_2 + 4;
                  val_3 = val_3 + 1;
                } while (val_2 < 0x28);
              }
            }
            else {
LAB_000ced55:
              thing_ptr_2 = (&g_thing_ptrs)
                       [(*(uint *)((int)&g_map_subtiles + local_3c + 1) & 0x3fffff) >> 0xb];
              if (g_thing_ptrs < thing_ptr_2) {
                do {
                  thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                  if (((thing_ptr_2[0x1f] == 1) && ((&g_data_0019103e)[thing_ptr_2[0x1a]] != '\0')) &&
                     ((*thing_ptr_2 & 0x80) == 0)) {
                    loop_i = loop_i + 1;
                    local_24._0_2_ = (undefined2)loop_i;
                    local_24._2_2_ = (undefined2)((uint)loop_i >> 0x10);
                    if (loop_i < 0xb) {
                      val_2 = 0;
                      do {
                        if (*(int *)((int)local_6c + val_2) == 0) {
                          *(uint *)((int)local_6c + val_2) = (uint)thing_ptr_2[0x1a];
                          break;
                        }
                        val_2 = val_2 + 4;
                      } while (val_2 < 0x28);
                    }
                    else {
                      local_24 = loop_i;
                      LbErrorLog(); /* LbErrorLog("room.cpp", line ?, "BLOODY HELL >10 SPELLS TO REPOSITION!!!") */
                      loop_i = 10;
                      thing_ptr_2 = extraout_ECX;
                    }
                    local_24 = loop_i;
                    if (*(int *)(thing_ptr_2 + 3) >> 0x18 != (uint)g_neutral_player_number) {
                      magic_remove_spell_player_as_04fdac();
                    }
                    structs_update_creature_control_072af4();
                    loop_i = local_24;
                  }
                  thing_ptr_2 = thing_ptr;
                } while (g_thing_ptrs < thing_ptr);
              }
            }
            local_28 = local_28 + 1;
            local_3c = local_3c + 5;
          } while (local_28 < local_2c);
        }
      }
      local_20 = *(short *)(&g_bss_002d33c6 + local_20 * 6);
    }
    if ((loop_i == 0) || (*(ushort *)(camera + 0xe) <= *(ushort *)(camera + 0x10))) break;
  }
  *(uint *)(camera + 0x17) = (uint)*(ushort *)(camera + 0x10); /* camera->zoom */
  return;
}

/******************************************************************************
 * Function : room_bloody_hell_bodies_reposition_0cee7c (Original VA: 0xcee7c, Ghidra: FUN_000cee7c)
 * Prototype: void room_bloody_hell_bodies_reposition_0cee7c(void);
 * Address  : 0xcee7c (Size: 799 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * Purpose  : String 'BLOODY HELL >10 BODIES TO REPOSITION!!!'
 * Callers  : 0 -> 
 * Callees  : 4 -> inits_told_you_so_create_044b13, structs_update_creature_control_072af4, ceiling_process_map_subtile_07dbc0, LbErrorLog
 ******************************************************************************/
void room_bloody_hell_bodies_reposition_0cee7c(void)

{
  uint thing_ptr;
  undefined2 uval;
  int arg_eax;
  int val;
  int val_2;
  int loop_i;
  int extraout_ECX;
  uint thing_ptr_2;
  uint *word_ptr;
  undefined1 *word_ptr_2;
  undefined4 *word_ptr_3;
  uint *word_ptr_4;
  uint auStack_80 [12];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined1 local_44 [4];
  undefined2 local_40 [4];
  int local_38 [3];
  undefined1 local_2c [16];
  undefined1 local_1c;
  
  word_ptr = auStack_80 + 2;
  word_ptr_3 = &g_bss_003d8cb4;
  word_ptr_4 = auStack_80 + 2;
  for (loop_i = 10; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_4 = *word_ptr_3;
    word_ptr_3 = word_ptr_3 + 1;
    word_ptr_4 = word_ptr_4 + 1;
  }
  local_50 = g_bss_003d8cdc;
  uStack_4c = g_bss_003d8ce0;
  uStack_48 = g_bss_003d8ce4;
  *(undefined2 *)(arg_eax + 0x10) = 0;
  local_38[1] = 0;
  local_1c = 0;
  do {
    if (1 < *(byte *)((int)word_ptr + 0x5c)) {
      return;
    }
    uval = *(undefined2 *)(arg_eax + 0x37);
    while( true ) {
      *(undefined2 *)((int)word_ptr + 0x58) = uval;
      loop_i = *(int *)((int)word_ptr + 0x56) >> 0x10;
      if (loop_i == 0) break;
      *(int *)((int)word_ptr + 0x50) = (loop_i % 0x55) * 3;
      val = (loop_i / 0x55) * 3;
      *(int *)((int)word_ptr + 0x54) = *(int *)((int)word_ptr + 0x50) + 3;
      loop_i = val + 3;
      *(int *)((int)word_ptr + 0x3c) = loop_i;
      while (*(int *)((int)word_ptr + 0x4c) = val, val < loop_i) {
        loop_i = *(int *)((int)word_ptr + 0x50);
        *(int *)((int)word_ptr + 0x40) = loop_i;
        if (loop_i < *(int *)((int)word_ptr + 0x54)) {
          *(int *)((int)word_ptr + 0x48) = loop_i * 5 + *(int *)((int)word_ptr + 0x4c) * 0x500;
          do {
            if (*(byte *)((int)&g_bss_0019e973 +
                         (*(uint *)((int)&g_map_subtiles + *(int *)((int)word_ptr + 0x48) + 1) & 0x7ff)
                         * 0x18 + 2) >> 4 == 1) {
              thing_ptr_2 = (&g_thing_ptrs)
                      [(*(uint *)((int)&g_map_subtiles + *(int *)((int)word_ptr + 0x48) + 1) & 0x3fffff)
                       >> 0xb];
              loop_i = 0;
              if (g_thing_ptrs < thing_ptr_2) {
                do {
                  if ((*(char *)(thing_ptr_2 + 0x1f) == '\x04') && (*(char *)(thing_ptr_2 + 0x14) != '\0')) { /* thing->class_id */
                    if (*(ushort *)(arg_eax + 0x10) < *(ushort *)(arg_eax + 0xe)) {
                      *(undefined4 *)((int)word_ptr + -4) = 0xceff4;
                      loop_i = ceiling_process_map_subtile_07dbc0();
                      if (loop_i != 0) goto LAB_000cf0ac;
                      loop_i = 1;
                      *(short *)(arg_eax + 0x10) = *(short *)(arg_eax + 0x10) + 1;
                    }
                    else {
                      *(undefined4 *)((int)word_ptr + -4) = 0xcefe8;
                      structs_update_creature_control_072af4();
                      loop_i = extraout_ECX;
                    }
                  }
                  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                } while (g_thing_ptrs < thing_ptr_2);
              }
              if (((loop_i == 0) && (*(int *)((int)word_ptr + 0x44) != 0)) &&
                 (*(ushort *)(arg_eax + 0x10) < *(ushort *)(arg_eax + 0xe))) {
                val = 0;
                loop_i = 0;
                word_ptr_2 = (undefined1 *)word_ptr;
                do {
                  word_ptr = (uint *)word_ptr_2;
                  if (*(int *)(word_ptr_2 + loop_i) != 0) {
                    word_ptr_2[0x35] = word_ptr_2[0x40];
                    word_ptr_2[0x34] = 0x80;
                    word_ptr_2[0x36] = 0x80;
                    word_ptr_2[0x37] = word_ptr_2[0x4c];
                    *(undefined2 *)(word_ptr_2 + 0x38) = 0;
                    word_ptr = (uint *)(word_ptr_2 + -4);
                    *(uint *)(word_ptr_2 + -4) = (uint)(byte)word_ptr_2[val + 0x28];
                    *(undefined4 *)(word_ptr_2 + -8) = 0xcf085;
                    val_2 = inits_told_you_so_create_044b13();
                    if (val_2 != 0) {
                      *(short *)(arg_eax + 0x10) = *(short *)(arg_eax + 0x10) + 1;
                      *(undefined1 *)(val_2 + 0x14) = 1;
                      *(undefined2 *)(val_2 + 0x5e) = g_bss_002eb9fe;
                      val = *(int *)(word_ptr_2 + 0x40);
                      *(undefined4 *)(word_ptr_2 + loop_i + -4) = 0;
                      *(int *)(word_ptr_2 + 0x40) = val + -1;
                      word_ptr = (uint *)(word_ptr_2 + -4);
                      break;
                    }
                  }
                  val = val + 1;
                  loop_i = loop_i + 4;
                  word_ptr_2 = (undefined1 *)word_ptr;
                } while (val < 10);
              }
            }
            else {
LAB_000cf0ac:
              thing_ptr_2 = (&g_thing_ptrs)
                      [(*(uint *)((int)&g_map_subtiles + *(int *)((int)word_ptr + 0x48) + 1) & 0x3fffff)
                       >> 0xb];
              if (g_thing_ptrs < thing_ptr_2) {
                do {
                  thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                  if ((*(char *)(thing_ptr_2 + 0x1f) == '\x04') && (*(char *)(thing_ptr_2 + 0x14) != '\0')) { /* thing->class_id */
                    loop_i = *(int *)((int)word_ptr + 0x44);
                    *(int *)((int)word_ptr + 0x44) = loop_i + 1;
                    if (loop_i + 1 < 0xb) {
                      val = 0;
                      loop_i = 0;
                      do {
                        if (*(int *)((int)word_ptr + loop_i) == 0) {
                          *(uint *)((int)word_ptr + loop_i) = (uint)*(byte *)(thing_ptr_2 + 0x1a);
                          *(undefined1 *)((int)word_ptr + val + 0x28) =
                               *(undefined1 *)(thing_ptr_2 + 0x13); /* thing->anim_sprite */
                          break;
                        }
                        loop_i = loop_i + 4;
                        val = val + 1;
                      } while (loop_i < 0x28);
                    }
                    else {
                      *(undefined4 *)((int)word_ptr + -4) = 0xcf141;
                      LbErrorLog(); /* LbErrorLog("room.cpp", line ?, "BLOODY HELL >10 BODIES TO REPOSITION!!!") */
                      *(undefined4 *)((int)word_ptr + 0x44) = 10;
                    }
                    *(undefined4 *)((int)word_ptr + -4) = 0xcf177;
                    structs_update_creature_control_072af4();
                  }
                  thing_ptr_2 = thing_ptr;
                } while (g_thing_ptrs < thing_ptr);
              }
            }
            loop_i = *(int *)((int)word_ptr + 0x40);
            *(int *)((int)word_ptr + 0x48) = *(int *)((int)word_ptr + 0x48) + 5;
            *(int *)((int)word_ptr + 0x40) = loop_i + 1;
          } while (loop_i + 1 < *(int *)((int)word_ptr + 0x54));
        }
        loop_i = *(int *)((int)word_ptr + 0x3c);
        val = *(int *)((int)word_ptr + 0x4c) + 1;
      }
      uval = *(undefined2 *)(&g_bss_002d33c6 + (*(int *)((int)word_ptr + 0x56) >> 0x10) * 6);
    }
    if (*(int *)((int)word_ptr + 0x44) == 0) {
      return;
    }
    if (*(ushort *)(arg_eax + 0xe) <= *(ushort *)(arg_eax + 0x10)) {
      return;
    }
    *(char *)((int)word_ptr + 0x5c) = *(char *)((int)word_ptr + 0x5c) + '\x01';
  } while( true );
}

/******************************************************************************
 * Function : room_bloody_hell_spells_reposition_0cf19c (Original VA: 0xcf19c, Ghidra: FUN_000cf19c)
 * Prototype: void room_bloody_hell_spells_reposition_0cf19c(void);
 * Address  : 0xcf19c (Size: 890 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 4344
 * Purpose  : String 'BLOODY HELL >10 SPELLS TO REPOSITION!!!'
 * Callers  : 0 -> 
 * Callees  : 6 -> inits_allocate_light_object_043f07, structs_update_creature_control_072af4, workshop_illegal_item_class_0779fb, workshop_item_class_077a5b, ceiling_process_map_subtile_07dbc0, LbErrorLog
 ******************************************************************************/
void room_bloody_hell_spells_reposition_0cf19c(void)

{
  uint thing_ptr;
  int camera;
  int val;
  int loop_i;
  uint thing_ptr_2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 *word_ptr;
  int val_2;
  uint *word_ptr_2;
  bool flag;
  uint local_68 [10];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined2 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  byte local_1c;
  
  word_ptr = &g_bss_003d8ce8;
  word_ptr_2 = local_68;
  for (loop_i = 10; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + 1;
    word_ptr_2 = word_ptr_2 + 1;
  }
  *(undefined2 *)(camera + 0x10) = 0;
  *(undefined4 *)(camera + 0x17) = 0; /* camera->zoom */
  local_24 = 0;
  for (local_1c = 0; local_1c < 2; local_1c = local_1c + 1) {
    local_34 = (uint)*(ushort *)(camera + 0x37);
    while (local_34 != 0) {
      local_38 = (local_34 % 0x55) * 3;
      local_2c = (local_34 / 0x55) * 3;
      local_28 = local_38 + 3;
      local_30 = local_2c + 3;
      loop_i = local_2c - local_30;
      flag = SBORROW4(local_2c,local_30);
      while (flag != loop_i < 0) {
        local_20 = local_38;
        if (local_38 < local_28) {
          loop_i = local_38 * 5 + local_2c * 0x500;
          do {
            if (*(byte *)((int)&g_bss_0019e973 +
                         (*(uint *)((int)&g_map_subtiles + loop_i + 1) & 0x7ff) * 0x18 + 2) >> 4 == 1)
            {
              thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + loop_i + 1) & 0x3fffff) >> 0xb]
              ;
              flag = false;
              if (g_thing_ptrs < thing_ptr_2) {
                do {
                  if (((*(char *)(thing_ptr_2 + 0x1f) == '\x01') && /* thing->class_id */
                      ((&g_data_0019116c)[*(byte *)(thing_ptr_2 + 0x1a)] != '\0')) &&
                     ((*(byte *)(thing_ptr_2 + 1) & 1) == 0)) {
                    if (*(ushort *)(camera + 0x10) < *(ushort *)(camera + 0xe)) {
                      val_2 = ceiling_process_map_subtile_07dbc0();
                      if (val_2 != 0) goto LAB_000cf406;
                      flag = true;
                      *(short *)(camera + 0x10) = *(short *)(camera + 0x10) + 1;
                      thing_ptr_2 = extraout_ECX_00;
                    }
                    else {
                      workshop_item_class_077a5b();
                      structs_update_creature_control_072af4();
                      thing_ptr_2 = extraout_ECX;
                    }
                  }
                  thing_ptr_2 = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                } while (g_thing_ptrs < thing_ptr_2);
              }
              if (((!flag) && (local_24 != 0)) &&
                 (val_2 = 0, *(ushort *)(camera + 0x10) < *(ushort *)(camera + 0xe))) {
                do {
                  if (*(int *)((int)local_68 + val_2) != 0) {
                    local_3f = (undefined1)local_20;
                    local_40 = 0x80;
                    local_3e = 0x80;
                    local_3d = (undefined1)local_2c;
                    local_3c = 0;
                    val = inits_allocate_light_object_043f07();
                    if (val != 0) {
                      workshop_illegal_item_class_0779fb();
                      *(short *)(camera + 0x10) = *(short *)(camera + 0x10) + 1;
                      local_24 = local_24 + -1;
                      *(undefined4 *)((int)local_68 + val_2) = 0;
                      break;
                    }
                  }
                  val_2 = val_2 + 4;
                } while (val_2 < 0x28);
              }
            }
            else {
LAB_000cf406:
              thing_ptr_2 = (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + loop_i + 1) & 0x3fffff) >> 0xb]
              ;
              if (g_thing_ptrs <
                  (&g_thing_ptrs)[(*(uint *)((int)&g_map_subtiles + loop_i + 1) & 0x3fffff) >> 0xb]) {
                do {
                  thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr_2 + 2)];
                  if (((*(char *)(thing_ptr_2 + 0x1f) == '\x01') && /* thing->class_id */
                      ((&g_data_0019116c)[*(byte *)(thing_ptr_2 + 0x1a)] != '\0')) &&
                     ((*(byte *)(thing_ptr_2 + 1) & 1) == 0)) {
                    local_24 = local_24 + 1;
                    if (local_24 < 0xb) {
                      val_2 = 0;
                      do {
                        if (*(int *)((int)local_68 + val_2) == 0) {
                          *(uint *)((int)local_68 + val_2) = (uint)*(byte *)(thing_ptr_2 + 0x1a);
                          break;
                        }
                        val_2 = val_2 + 4;
                      } while (val_2 < 0x28);
                    }
                    else {
                      LbErrorLog(); /* LbErrorLog("room.cpp", line 4344, "BLOODY HELL >10 SPELLS TO REPOSITION!!!") */
                      local_24 = 10;
                    }
                    workshop_item_class_077a5b();
                    structs_update_creature_control_072af4();
                  }
                  thing_ptr_2 = thing_ptr;
                } while (g_thing_ptrs < thing_ptr);
              }
            }
            local_20 = local_20 + 1;
            loop_i = loop_i + 5;
          } while (local_20 < local_28);
        }
        local_2c = local_2c + 1;
        loop_i = local_2c - local_30;
        flag = SBORROW4(local_2c,local_30);
      }
      local_34 = (uint)*(ushort *)(&g_bss_002d33c6 + local_34 * 6);
    }
    if ((local_24 == 0) || (*(ushort *)(camera + 0xe) <= *(ushort *)(camera + 0x10))) break;
  }
  *(uint *)(camera + 0x17) = (uint)*(ushort *)(camera + 0x10); /* camera->zoom */
  return;
}

/******************************************************************************
 * Function : room_infinite_loop_count_workers_0cf518 (Original VA: 0xcf518, Ghidra: FUN_000cf518)
 * Prototype: void room_infinite_loop_count_workers_0cf518(void);
 * Address  : 0xcf518 (Size: 124 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 4410
 * Purpose  : String 'Infinite loop in count_workers_in_room'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
void room_infinite_loop_count_workers_0cf518(void)

{
  int arg_eax;
  int val;
  uint thing_ptr;
  
  thing_ptr = (&g_thing_ptrs)[*(ushort *)(arg_eax + 0x3d)];
  val = 0;
  if (g_thing_ptrs < thing_ptr) {
    do {
      if (999 < val) break;
      *(short *)(arg_eax + 0x10) = *(short *)(arg_eax + 0x10) + 1;
      thing_ptr = (&g_thing_ptrs)[*(ushort *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x2aa)]; /* thing->ccontrol_idx */
      val = val + 1;
    } while (g_thing_ptrs < thing_ptr);
  }
  if (999 < val) {
    LbErrorLog(); /* LbErrorLog("room.cpp", line 4410, "Infinite loop in count_workers_in_room") */
  }
  return;
}

/******************************************************************************
 * Function : room_update_creature_and_thing_0cf594 (Original VA: 0xcf594, Ghidra: FUN_000cf594)
 * Prototype: void room_update_creature_and_thing_0cf594(void);
 * Address  : 0xcf594 (Size: 278 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 0 -> 
 * Callees  : 4 -> effect_allocate_light_effect_024998, lair_totem_owner_04d375, lair_process_map_subtile_04dc89, LbScreenWaitVbi
 ******************************************************************************/
void room_update_creature_and_thing_0cf594(void)

{
  char *str_ptr;
  int arg_eax;
  int thing_ptr;
  short loop_i;
  
  *(undefined2 *)(arg_eax + 0x10) = 0;
  LbScreenWaitVbi();
  for (loop_i = *(short *)(arg_eax + 0x37); loop_i != 0; loop_i = *(short *)(&g_bss_002d33c6 + loop_i * 6))
  {
    thing_ptr = lair_process_map_subtile_04dc89();
    if (thing_ptr != 0) {
      thing_ptr = (&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x13)]; /* thing->anim_sprite */
      if ((int)((uint)*(ushort *)(arg_eax + 0xe) -
               (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6]) <
          (int)(uint)*(ushort *)(arg_eax + 0x10)) {
        effect_allocate_light_effect_024998();
        lair_totem_owner_04d375();
      }
      else {
        *(undefined2 *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing_ptr + 100)] + 0x68) = /* thing->ccontrol_idx */
             *(undefined2 *)(arg_eax + 1);
        str_ptr = (char *)(*(byte *)(thing_ptr + 0x1a) + 0x17 + arg_eax);
        *str_ptr = *str_ptr + '\x01';
        *(ushort *)(arg_eax + 0x10) =
             *(short *)(arg_eax + 0x10) +
             (ushort)(byte)(&g_bss_002e9124)[(uint)*(byte *)(thing_ptr + 0x1a) * 0xe6];
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0cf8cc (Original VA: 0xcf8cc, Ghidra: FUN_000cf8cc)
 * Prototype: undefined8 room_process_dungeon_room_0cf8cc(void);
 * Address  : 0xcf8cc (Size: 724 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 0 -> 
 * Callees  : 2 -> inits_allocate_dynamic_light_shot_0444a9, move_process_map_subtile_0b28e8
 ******************************************************************************/
undefined8 room_process_dungeon_room_0cf8cc(void)

{
  byte flag;
  byte flag_2;
  char ch;
  ushort uval;
  ushort uval_2;
  ushort uval_3;
  undefined4 uval_4;
  ulonglong uval_5;
  short short_val;
  short short_val_2;
  int *arg_eax;
  int val;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 arg_edx;
  int val_2;
  int val_3;
  uint uval_6;
  uint uval_7;
  char cStack_25;
  
  uval = *(ushort *)((int)arg_eax + 0x41);
  flag = *(byte *)((int)arg_eax + 0x43);
  flag_2 = *(byte *)(arg_eax + 0x11);
  uval_6 = (uint)*(ushort *)((int)arg_eax + 10);
  if (uval_6 == 7) goto LAB_000cfb97;
  val = ((uint)flag * 3 + (uint)flag_2) * 4;
  short_val = (uval % 0x55) * 0x300 + 0x180 +
          (short)((uint)*(undefined4 *)(&g_data_00192172 + val) >> 0x10);
  uval_4 = *(undefined4 *)(&g_data_00192174 + val);
  if (*arg_eax >> 0x18 == (uint)g_neutral_player_number) {
    val = inits_allocate_dynamic_light_shot_0444a9(short_val,0);
    arg_eax = extraout_ECX;
    if (val != 0) {
      short_val_2 = move_process_map_subtile_0b28e8();
      *(short *)(val + 0x11) = short_val_2;
      *(short *)(val + 0x11) = short_val_2 + 10;
      uval_2 = *(ushort *)(val + 0x46);
      uval_3 = *(ushort *)((int)extraout_ECX_00 + 0x3f);
      arg_eax = extraout_ECX_00;
LAB_000cfa2a:
      val_2 = (uint)uval_3 * (uval_2 - 0x50);
      val_3 = val_2 >> 0x1f;
      *(short *)(val + 0x46) =
           (short)((val_2 + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8) + 0x50;
    }
  }
  else if (u_789__001921a4[*arg_eax >> 0x18] != L'\0') {
    val = inits_allocate_dynamic_light_shot_0444a9(short_val,0);
    arg_eax = extraout_ECX_01;
    if (val != 0) {
      short_val_2 = move_process_map_subtile_0b28e8();
      *(short *)(val + 0x11) = short_val_2;
      uval_2 = *(ushort *)(val + 0x46);
      *(short *)(val + 0x11) = short_val_2 + 10;
      uval_3 = *(ushort *)((int)extraout_ECX_02 + 0x3f);
      arg_eax = extraout_ECX_02;
      goto LAB_000cfa2a;
    }
  }
  if (flag_2 == 2) {
    uval_6 = (uint)flag;
    cStack_25 = (char)((ushort)((uval / 0x55) * 0x300 + 0x180 + (short)((uint)uval_4 >> 0x10)) >> 8)
    ;
    uval_7 = (uint)(byte)((char)((ushort)short_val >> 8) +
                         *(char *)((int)&g_data_0018b67b + uval_6 * 2 + 3));
    if (arg_eax == (int *)(&g_rooms +
                         (uint)(byte)(&g_bss_002d33c8)
                                     [((&g_subtile_to_slab_lut)[uval_7] +
                                      (&g_subtile_to_slab_lut)
                                      [(byte)(cStack_25 + (&g_data_0018b67f)[uval_6 * 2])] * 0x55) * 6]
                         * 0x45)) {
      uval_5 = (ulonglong)(longlong)(int)(uval_6 + 3) % 4;
      val = (int)uval_5;
      if (arg_eax == (int *)(&g_rooms +
                           (uint)(byte)(&g_bss_002d33c8)
                                       [((&g_subtile_to_slab_lut)
                                         [uval_7 + (*(int *)((int)&g_data_0018b67b + val * 2) >>
                                                   0x18)] +
                                        (&g_subtile_to_slab_lut)
                                        [(*(int *)((int)&g_data_0018b67b + val * 2 + 1) >> 0x18) +
                                         (uint)(byte)(cStack_25 + (&g_data_0018b67f)[uval_6 * 2])] *
                                        0x55) * 6] * 0x45)) {
        short_val = *(short *)((int)arg_eax + 0x41) + (short)(char)(&g_data_001921b0)[uval_6];
        *(short *)((int)arg_eax + 0x41) = short_val;
        ch = (&g_data_001921b0)[val];
        *(char *)((int)arg_eax + 0x43) = (char)uval_5;
        *(short *)((int)arg_eax + 0x41) = short_val + ch;
      }
      else {
        *(short *)((int)arg_eax + 0x41) =
             *(short *)((int)arg_eax + 0x41) + (short)(char)(&g_data_001921b0)[uval_6];
      }
    }
    else {
      *(char *)((int)arg_eax + 0x43) = (char)((ulonglong)(longlong)(int)(uval_6 + 1) % 4);
    }
  }
  uval_6 = (*(byte *)(arg_eax + 0x11) + 1) / 3;
  *(char *)(arg_eax + 0x11) = (char)((*(byte *)(arg_eax + 0x11) + 1) % 3);
LAB_000cfb97:
  return CONCAT44(arg_edx,uval_6);
}

/******************************************************************************
 * Function : room_fn_0cfbd8 (Original VA: 0xcfbd8, Ghidra: FUN_000cfbd8)
 * Prototype: undefined4 room_fn_0cfbd8(void);
 * Address  : 0xcfbd8 (Size: 55 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfbd8
 * Callers  : 2 -> compturn_process_dungeon_room_020ea3, person_update_creature_control_063dd3
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 room_fn_0cfbd8(void)

{
  undefined4 arg_eax;
  
  switch(arg_eax) {
  case 3:
    return 4;
  default:
    return 0;
  case 6:
    return 8;
  case 8:
    return 0x10;
  case 9:
    return 0x20;
  case 10:
    return 0x1000;
  case 0x10:
    return 0x200;
  }
}

/******************************************************************************
 * Function : room_fn_0cfc48 (Original VA: 0xcfc48, Ghidra: FUN_000cfc48)
 * Prototype: bool room_fn_0cfc48(void);
 * Address  : 0xcfc48 (Size: 102 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfc48
 * Callers  : 3 -> anger_hurrah_mental_instability_creature_01073a, comptool_update_creature_and_thing_01e4a8, comptool_update_creature_and_thing_01f153
 * Callees  : 0 -> 
 ******************************************************************************/
bool room_fn_0cfc48(void)

{
  ushort uval;
  int arg_eax;
  int arg_edx;
  
  switch(*(undefined2 *)(arg_edx + 10)) {
  case 3:
    uval = 4;
    break;
  default:
    uval = 0;
    break;
  case 6:
    uval = 8;
    break;
  case 8:
    uval = 0x10;
    break;
  case 9:
    uval = 0x20;
    break;
  case 10:
    uval = 0x1000;
    break;
  case 0x10:
    uval = 0x200;
  }
  return (*(ushort *)(&g_bss_002e9111 + (uint)*(byte *)(arg_eax + 0x1a) * 0xe6) & uval) == 0;
}

/******************************************************************************
 * Function : room_fn_0cfcd8 (Original VA: 0xcfcd8, Ghidra: FUN_000cfcd8)
 * Prototype: undefined4 room_fn_0cfcd8(void);
 * Address  : 0xcfcd8 (Size: 99 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfcd8
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 room_fn_0cfcd8(void)

{
  uint arg_eax;
  
  if (arg_eax < 0x20) {
    if (arg_eax < 8) {
      if (arg_eax != 4) {
        return 0;
      }
      return 3;
    }
    if (8 < arg_eax) {
      if (arg_eax != 0x10) {
        return 0;
      }
      return 8;
    }
    return 6;
  }
  if (arg_eax < 0x21) {
    return 9;
  }
  if (0x1ff < arg_eax) {
    if (arg_eax < 0x201) {
      return 0x10;
    }
    if (arg_eax != 0x1000) {
      return 0;
    }
    return 10;
  }
  if (arg_eax != 0x40) {
    return 0;
  }
  return 5;
}

/******************************************************************************
 * Function : room_fn_0cfd4c (Original VA: 0xcfd4c, Ghidra: FUN_000cfd4c)
 * Prototype: undefined4 room_fn_0cfd4c(void);
 * Address  : 0xcfd4c (Size: 61 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfd4c
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 room_fn_0cfd4c(void)

{
  undefined4 arg_eax;
  
  switch(arg_eax) {
  case 3:
    return 0x1e;
  default:
    return 0;
  case 5:
    return 0x6d;
  case 6:
    return 0x20;
  case 8:
    return 0x2c;
  case 9:
    return 0x2e;
  case 10:
    return 0x52;
  case 0x10:
    return 0x68;
  }
}

/******************************************************************************
 * Function : room_fn_0cfd8c (Original VA: 0xcfd8c, Ghidra: FUN_000cfd8c)
 * Prototype: undefined4 room_fn_0cfd8c(void);
 * Address  : 0xcfd8c (Size: 93 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfd8c
 * Callers  : 3 -> lair_update_creature_control_04cfa0, lair_update_creature_control_04d2c3, lair_process_dungeon_room_04d683
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 room_fn_0cfd8c(void)

{
  int arg_eax;
  int arg_edx;
  
  if (*(short *)(arg_eax + 10) == 0xe) {
    if ((uint)*(ushort *)(arg_eax + 0x10) +
        (uint)(byte)(&g_bss_002e9124)[(uint)*(byte *)(arg_edx + 0x1a) * 0xe6] <=
        (uint)*(ushort *)(arg_eax + 0xe)) {
      return 1;
    }
  }
  else if (*(ushort *)(arg_eax + 0x10) + 1 <= (uint)*(ushort *)(arg_eax + 0xe)) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : room_fn_0cfdec (Original VA: 0xcfdec, Ghidra: FUN_000cfdec)
 * Prototype: void room_fn_0cfdec(void);
 * Address  : 0xcfdec (Size: 197 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfdec
 * Callers  : 2 -> room_how_room_exist_slabs_0d0118, room_how_room_exist_slabs_0d0488
 * Callees  : 1 -> jtyedit_we_should_only_dealing_04c1e3
 ******************************************************************************/
void room_fn_0cfdec(void)

{
  int val;
  int val_2;
  short loop_i;
  int arg_eax;
  int extraout_ECX;
  int val_3;
  int val_4;
  int val_5;
  
  for (loop_i = *(short *)(arg_eax + 0x37); val_4 = (int)loop_i, val_4 != 0;
      loop_i = *(short *)(&g_bss_002d33c6 + loop_i * 6)) {
    val = (val_4 % 0x55) * 3;
    val_3 = (val_4 / 0x55) * 3;
    val_5 = val_3 + 3;
    if (val_3 < val_5) {
      val_4 = (val_4 / 0x55) * 0xf00;
      val_2 = val;
      do {
        while (val_2 < val + 3) {
          jtyedit_we_should_only_dealing_04c1e3(val_5,val_4);
          val_2 = extraout_ECX;
        }
        val_4 = val_4 + 0x500;
        val_3 = val_3 + 1;
        val_2 = val;
      } while (val_3 < val_5);
    }
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0cfeb4 (Original VA: 0xcfeb4, Ghidra: FUN_000cfeb4)
 * Prototype: void room_fn_0cfeb4(void);
 * Address  : 0xcfeb4 (Size: 70 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfeb4
 * Callers  : 1 -> newgui_fn_05ac4a
 * Callees  : 2 -> set_packet_action, room_process_dungeon_room_0cff7c
 ******************************************************************************/
void room_fn_0cfeb4(void)

{
  short short_val;
  
  short_val = room_process_dungeon_room_0cff7c();
  if (short_val != 0) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0cfefc (Original VA: 0xcfefc, Ghidra: FUN_000cfefc)
 * Prototype: void room_fn_0cfefc(void);
 * Address  : 0xcfefc (Size: 126 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Module room.cpp procedure @ 0x0cfefc
 * Callers  : 1 -> instance_fn_049a52
 * Callees  : 2 -> set_packet_action, room_process_dungeon_room_0cff7c
 ******************************************************************************/
void room_fn_0cfefc(void)

{
  short short_val;
  
  short_val = room_process_dungeon_room_0cff7c();
  if (short_val != 0) {
    set_packet_action(0,0);
  }
  return;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0cff7c (Original VA: 0xcff7c, Ghidra: FUN_000cff7c)
 * Prototype: undefined8 room_process_dungeon_room_0cff7c(void);
 * Address  : 0xcff7c (Size: 192 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> room_fn_0cfeb4, room_fn_0cfefc
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 room_process_dungeon_room_0cff7c(void)

{
  int val;
  int room_off;
  uint arg_eax;
  undefined4 arg_edx;
  
  val = arg_eax * 2;
  if (*(short *)(&g_bss_003d8c68 + val) != 0) {
    room_off = (uint)*(ushort *)(&g_bss_003d8c68 + val) * 0x45;
    if (((((&g_rooms)[room_off] & 1) == 0) ||
        (*(int *)(&g_rooms + room_off) >> 0x18 !=
         (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef])) ||
       (*(ushort *)(&g_room_slabs_count + room_off) != arg_eax)) {
      *(undefined2 *)(&g_bss_003d8c68 + arg_eax * 2) = 0;
    }
    else {
      *(undefined2 *)(&g_bss_003d8c68 + val) = *(undefined2 *)(&g_bss_002ddd21 + room_off);
    }
  }
  val = arg_eax * 2;
  if (*(short *)(&g_bss_003d8c68 + val) == 0) {
    *(undefined2 *)(&g_bss_003d8c68 + val) =
         *(undefined2 *)(&g_bss_002e0594 + val + (g_my_player_word >> 0x18) * 0x1508);
  }
  return CONCAT44(arg_edx,CONCAT22((short)((uint)val >> 0x10),
                                  *(undefined2 *)(&g_bss_003d8c68 + arg_eax * 2)));
}

/******************************************************************************
 * Function : room_process_dungeon_room_0d003c (Original VA: 0xd003c, Ghidra: FUN_000d003c)
 * Prototype: int room_process_dungeon_room_0d003c(void);
 * Address  : 0xd003c (Size: 91 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> fronttor_fn_036498, newgui_update_player_view_state_054eeb
 * Callees  : 0 -> 
 ******************************************************************************/
int room_process_dungeon_room_0d003c(void)

{
  byte arg_al;
  undefined1 *room_ptr;
  uint arg_edx;
  int val;
  
  val = 0;
  room_ptr = &g_rooms +
           (uint)*(ushort *)(&g_bss_002e0594 + (arg_edx & 0xff) * 2 + (uint)arg_al * 0x1508) * 0x45;
  if (&g_rooms < room_ptr) {
    do {
      room_ptr = &g_rooms + (uint)*(ushort *)(room_ptr + 6) * 0x45;
      val = val + 1;
    } while (&g_rooms < room_ptr);
  }
  return val;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0d0098 (Original VA: 0xd0098, Ghidra: FUN_000d0098)
 * Prototype: int room_process_dungeon_room_0d0098(void);
 * Address  : 0xd0098 (Size: 128 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> newgui_update_player_view_state_054eeb
 * Callees  : 0 -> 
 ******************************************************************************/
int room_process_dungeon_room_0d0098(void)

{
  ushort dungeon_off;
  int room_ptr;
  byte arg_al;
  uint arg_edx;
  int val;
  int val_2;
  
  val = 0;
  val_2 = 0;
  dungeon_off = *(ushort *)(&g_bss_002e0594 + (arg_edx & 0xff) * 2 + (uint)arg_al * 0x1508);
  while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
    val = val + (uint)*(ushort *)(&g_bss_002ddd2b + room_ptr);
    val_2 = val_2 + (uint)*(ushort *)(&g_bss_002ddd29 + room_ptr);
    dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
  }
  if (val_2 == 0) {
    return -1;
  }
  return (val << 8) / val_2;
}

/******************************************************************************
 * Function : room_how_room_exist_slabs_0d0118 (Original VA: 0xd0118, Ghidra: FUN_000d0118)
 * Prototype: undefined4 room_how_room_exist_slabs_0d0118(void);
 * Address  : 0xd0118 (Size: 878 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 326
 * Purpose  : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 1 -> instance_process_dungeon_room_04a6a2
 * Callees  : 9 -> cdtest_fn_015030, event_illegal_event_number_created_027390, moodneed_fn_051374, sound_fn_06e538, room_process_slabmap_tile_0c8268, room_process_dungeon_room_0cb144, room_fn_0cfdec, room_lair_thinks_it_belongs_0d08a8 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d0316) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 room_how_room_exist_slabs_0d0118(void)

{
  byte flag;
  ushort uval;
  ushort uval_2;
  ushort loop_i;
  int *arg_eax;
  uint uval_3;
  undefined2 extraout_var;
  int extraout_ECX;
  int val;
  int extraout_ECX_00;
  int arg_edx;
  int local_20;
  
  if (((uint)g_neutral_player_number != *arg_eax >> 0x18) ||
     (*(int *)(arg_edx + 3) >> 0x18 == (uint)g_neutral_player_number)) {
    return 0;
  }
  *(undefined1 *)((int)arg_eax + 3) = *(undefined1 *)(arg_edx + 6);
  *(ushort *)(arg_eax + 3) = *(short *)((int)arg_eax + 0x3b) * (ushort)g_bss_002ed417;
  if (*arg_eax >> 0x18 != (uint)g_neutral_player_number) {
    if (*(short *)(&g_bss_002e0594 +
                  (*(int *)(arg_edx + 3) >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10) * 2)
        != 0) {
      *(short *)((int)arg_eax + 6) =
           *(short *)(&g_bss_002e0594 +
                     (*(int *)(arg_edx + 3) >> 0x18) * 0x1508 +
                     (uint)*(ushort *)((int)arg_eax + 10) * 2);
      *(undefined2 *)
       (&g_bss_002ddd1f +
       (uint)*(ushort *)
              (&g_bss_002e0594 +
              (uint)*(ushort *)((int)arg_eax + 10) * 2 + (*(int *)(arg_edx + 3) >> 0x18) * 0x1508) *
       0x45) = *(undefined2 *)((int)arg_eax + 1);
    }
    *(undefined2 *)
     (&g_bss_002e0594 + (*arg_eax >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10) * 2) =
         *(undefined2 *)((int)arg_eax + 1);
    (&g_bss_002e0b4b)[(*arg_eax >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10)] =
         (&g_bss_002e0b4b)[(*arg_eax >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10)] + '\x01';
  }
  room_lair_thinks_it_belongs_0d08a8();
  room_fn_0cfdec();
  if (CONCAT22(extraout_var,*(undefined2 *)((int)arg_eax + 0x37)) != 0) {
    do {
      cdtest_fn_015030();
    } while (*(short *)(&g_bss_002d33c6 + extraout_ECX) != 0);
  }
  uval = *(ushort *)((int)arg_eax + 10);
  event_illegal_event_number_created_027390();
  uval_2 = *(ushort *)((int)arg_eax + 0x3b);
  if (uval_2 == 0) {
    LbErrorLog(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
    val = 0;
  }
  else {
    if (uval_2 < 2) {
      local_20 = 0;
    }
    else if (uval_2 == 2) {
      local_20 = 4;
    }
    else {
      local_20 = (uint)*(ushort *)((int)arg_eax + 0x3b) * 4 + -4;
    }
    uval_3 = (uint)*(ushort *)((int)arg_eax + 0x3b);
    if (0x31 < *(ushort *)((int)arg_eax + 0x3b)) {
      uval_3 = 0x31;
    }
    flag = (&g_data_0018b6d4)[uval_3];
    uval_2 = *(ushort *)((int)arg_eax + 0x3b);
    val = 0;
    for (loop_i = *(ushort *)((int)arg_eax + 0x37); loop_i != 0;
        loop_i = *(ushort *)(&g_bss_002d33c6 + (uint)loop_i * 6)) {
      val = room_process_slabmap_tile_0c8268();
      val = extraout_ECX_00 + val;
    }
    val = ((val - local_20) * 0x100) / (int)(((uint)uval_2 * 8 + (uint)flag * 2) - local_20);
    if (0x100 < val) {
      val = 0x100;
    }
  }
  *(short *)(uval + 0x3f) = (short)val;
  room_process_dungeon_room_0cb144();
  uval_3 = 0;
  sound_fn_06e538(3,0,4);
  if (*(short *)((int)arg_eax + 10) == 1) {
    if (((byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] != uval_3) &&
       (g_data_00000103 >> 0x18 != (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef])) {
      return 1;
    }
  }
  else {
    if (g_data_00000103 >> 0x18 != (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
      return 1;
    }
    if (CONCAT31((int3)(g_data_00000103 >> 0x1f),g_neutral_player_number) == uval_3) {
      moodneed_fn_051374();
      return 1;
    }
  }
  moodneed_fn_051374();
  return 1;
}

/******************************************************************************
 * Function : room_how_room_exist_slabs_0d0488 (Original VA: 0xd0488, Ghidra: FUN_000d0488)
 * Prototype: undefined4 room_how_room_exist_slabs_0d0488(void);
 * Address  : 0xd0488 (Size: 1040 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 326
 * Purpose  : String 'HOW CAN A ROOM EXIST WITH NO SLABS?'
 * Callers  : 1 -> instance_process_dungeon_room_04a6a2
 * Callees  : 9 -> cdtest_fn_015030, event_illegal_event_number_created_027390, moodneed_fn_051374, person_fn_063b6d, room_process_slabmap_tile_0c8268, room_process_dungeon_room_0cb144, room_fn_0cfdec, room_lair_thinks_it_belongs_0d08a8 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000d0748) */

undefined4 room_how_room_exist_slabs_0d0488(void)

{
  byte flag;
  ushort uval;
  ushort uval_2;
  ushort loop_i;
  int *arg_eax;
  uint uval_3;
  undefined2 extraout_var;
  int extraout_ECX;
  int val;
  int extraout_ECX_00;
  int arg_edx;
  int local_24;
  int local_20;
  
  if ((*(char *)((int)arg_eax + 3) == *(char *)(arg_edx + 6)) ||
     (*(int *)(arg_edx + 3) >> 0x18 == (uint)g_neutral_player_number)) {
    return 0;
  }
  if (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)((int)arg_eax + 0x3d)]) {
    do {
      person_fn_063b6d();
    } while (g_thing_ptrs < (&g_thing_ptrs)[*(ushort *)((int)arg_eax + 0x3d)]);
  }
  if (*arg_eax >> 0x18 != (uint)g_neutral_player_number) {
    uval = *(ushort *)(arg_eax + 1);
    uval_2 = *(ushort *)((int)arg_eax + 6);
    if (uval == 0) {
      *(ushort *)
       (&g_bss_002e0594 + (uint)*(ushort *)((int)arg_eax + 10) * 2 + (*arg_eax >> 0x18) * 0x1508) =
           uval_2;
    }
    else {
      *(ushort *)(&g_bss_002ddd21 + (uint)uval * 0x45) = uval_2;
    }
    if (uval_2 != 0) {
      *(ushort *)(&g_bss_002ddd1f + (uint)uval_2 * 0x45) = uval;
    }
    *(undefined2 *)((int)arg_eax + 6) = 0;
    *(undefined2 *)(arg_eax + 1) = 0;
    (&g_bss_002e0b4b)[(*arg_eax >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10)] =
         (&g_bss_002e0b4b)[(*arg_eax >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10)] + -1;
  }
  *(undefined1 *)((int)arg_eax + 3) = *(undefined1 *)(arg_edx + 6);
  *(ushort *)(arg_eax + 3) = *(short *)((int)arg_eax + 0x3b) * (ushort)g_bss_002ed417;
  if (*arg_eax >> 0x18 != (uint)g_neutral_player_number) {
    if (*(short *)(&g_bss_002e0594 +
                  (uint)*(ushort *)((int)arg_eax + 10) * 2 + (*(int *)(arg_edx + 3) >> 0x18) * 0x1508)
        != 0) {
      *(short *)((int)arg_eax + 6) =
           *(short *)(&g_bss_002e0594 +
                     (uint)*(ushort *)((int)arg_eax + 10) * 2 +
                     (*(int *)(arg_edx + 3) >> 0x18) * 0x1508);
      *(undefined2 *)
       (&g_bss_002ddd1f +
       (uint)*(ushort *)
              (&g_bss_002e0594 +
              (uint)*(ushort *)((int)arg_eax + 10) * 2 + (*(int *)(arg_edx + 3) >> 0x18) * 0x1508) *
       0x45) = *(undefined2 *)((int)arg_eax + 1);
    }
    *(undefined2 *)
     (&g_bss_002e0594 + (*arg_eax >> 0x18) * 0x1508 + (uint)*(ushort *)((int)arg_eax + 10) * 2) =
         *(undefined2 *)((int)arg_eax + 1);
    (&g_bss_002e0b4b)[(uint)*(ushort *)((int)arg_eax + 10) + (*arg_eax >> 0x18) * 0x1508] =
         (&g_bss_002e0b4b)[(uint)*(ushort *)((int)arg_eax + 10) + (*arg_eax >> 0x18) * 0x1508] + '\x01';
  }
  room_lair_thinks_it_belongs_0d08a8();
  room_fn_0cfdec();
  if (CONCAT22(extraout_var,*(undefined2 *)((int)arg_eax + 0x37)) != 0) {
    do {
      cdtest_fn_015030();
    } while (*(short *)(&g_bss_002d33c6 + extraout_ECX) != 0);
  }
  uval = *(ushort *)((int)arg_eax + 10);
  event_illegal_event_number_created_027390();
  uval_2 = *(ushort *)((int)arg_eax + 0x3b);
  if (uval_2 == 0) {
    LbErrorLog(); /* LbErrorLog("room.cpp", line 326, "HOW CAN A ROOM EXIST WITH NO SLABS?") */
    val = 0;
  }
  else {
    if (uval_2 < 2) {
      local_24 = 0;
    }
    else if (uval_2 == 2) {
      local_24 = 4;
    }
    else {
      local_24 = (uint)*(ushort *)((int)arg_eax + 0x3b) * 4 + -4;
    }
    uval_3 = (uint)*(ushort *)((int)arg_eax + 0x3b);
    if (0x31 < *(ushort *)((int)arg_eax + 0x3b)) {
      uval_3 = 0x31;
    }
    flag = (&g_data_0018b6d4)[uval_3];
    uval_2 = *(ushort *)((int)arg_eax + 0x3b);
    val = 0;
    for (loop_i = *(ushort *)((int)arg_eax + 0x37); loop_i != 0;
        loop_i = *(ushort *)(&g_bss_002d33c6 + (uint)loop_i * 6)) {
      val = room_process_slabmap_tile_0c8268();
      val = extraout_ECX_00 + val;
    }
    val = ((val - local_24) * 0x100) / (int)(((uint)uval_2 * 8 + (uint)flag * 2) - local_24);
    if (0x100 < val) {
      val = 0x100;
    }
  }
  *(short *)(uval + 0x3f) = (short)val;
  room_process_dungeon_room_0cb144();
  if (*(short *)((int)arg_eax + 10) == 1) {
    if (((int *)(uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef] != arg_eax) &&
       ((int *)(*(int *)(local_20 + 3) >> 0x18) !=
        (int *)(uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef])) {
      return 1;
    }
  }
  else {
    if (*(int *)(local_20 + 3) >> 0x18 !=
        (uint)(byte)(&g_player_id_number)[(g_my_player_word >> 0x18) * 0x4ef]) {
      return 1;
    }
    if ((int *)CONCAT31((int3)(*(int *)(local_20 + 3) >> 0x1f),g_neutral_player_number) == arg_eax) {
      moodneed_fn_051374();
      return 1;
    }
  }
  moodneed_fn_051374();
  return 1;
}

/******************************************************************************
 * Function : room_lair_thinks_it_belongs_0d08a8 (Original VA: 0xd08a8, Ghidra: FUN_000d08a8)
 * Prototype: void room_lair_thinks_it_belongs_0d08a8(void);
 * Address  : 0xd08a8 (Size: 1238 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 5445, 5450
 * Purpose  : String 'Lair thinks it belongs to a creature, but the creature disag'
 * Callers  : 2 -> room_how_room_exist_slabs_0d0118, room_how_room_exist_slabs_0d0488
 * Callees  : 14 -> dungeon_update_player_dungeon_023734, dungeon_update_player_dungeon_023787, inits_allocate_light_object_043f07, lair_attempt_remove_creature_lair_04d3d4, magic_update_player_dungeon_04fd81, magic_remove_spell_player_as_04fdac, mapwho_handle_object_thing_0512ec, panmap_door_flagged_position_063122 ...
 ******************************************************************************/
void room_lair_thinks_it_belongs_0d08a8(void)

{
  byte flag;
  ushort uval;
  int val;
  int arg_eax;
  int val_2;
  int slab_coord;
  int extraout_ECX;
  byte arg_dl;
  byte *thing_ptr;
  int val_3;
  int val_4;
  int val_5;
  int local_38;
  int local_34;
  int local_2c;
  short sStack_24;
  
  if (((&g_slabmap)
       [((&g_subtile_to_slab_lut)[((uint)*(ushort *)(arg_eax + 0x37) % 0x55) * 3] +
        (&g_subtile_to_slab_lut)[(*(ushort *)(arg_eax + 0x37) / 0x55) * 3] * 0x55) * 6] & 7) != g_neutral_player_number)
  {
    dungeon_update_player_dungeon_023787();
  }
  dungeon_update_player_dungeon_023734();
  sStack_24 = *(short *)(arg_eax + 0x37);
  do {
    if (sStack_24 == 0) {
      return;
    }
    local_34 = (int)sStack_24 / 0x55;
    val = local_34 * 3;
    val_5 = val;
    creature_process_map_subtile_082828();
    if (val < val + 3) {
      local_38 = local_34 * 0xf00;
      local_34 = local_34 * 0xc;
      val_4 = extraout_ECX;
      do {
        if (val_4 < extraout_ECX + 3) {
          local_2c = val_4 * 5 + local_38;
          val_2 = val_4 << 2;
          val_3 = (extraout_ECX + 3) * 4;
          do {
            slab_coord = (*(int *)((int)&g_subtile_to_slab_lut + local_34) * 0x55 +
                    *(int *)((int)&g_subtile_to_slab_lut + val_2)) * 6;
            (&g_slabmap)[slab_coord] = (&g_slabmap)[slab_coord] & 0xf8;
            (&g_slabmap)[slab_coord] = (&g_slabmap)[slab_coord] | arg_dl & 7;
            thing_ptr = (&g_thing_ptrs)
                     [(*(uint *)((int)&g_map_subtiles + local_2c + 1) & 0x3fffff) >> 0xb];
            if (g_thing_ptrs < thing_ptr) {
              do {
                uval = *(ushort *)(thing_ptr + 2);
                if (thing_ptr[0x1f] == 1) {
                  if ((*(short *)(arg_eax + 10) == 0x10) &&
                     ((((flag = thing_ptr[0x1a], flag == 0x73 || (flag == 0x74)) || (flag == 0x75))
                      || ((flag == 0x76 || (flag == 0x77)))))) {
                    inits_allocate_light_object_043f07();
LAB_000d0b49:
                    structs_update_creature_control_072af4();
                  }
                  else if (*(ushort *)(thing_ptr + 0x1d) == 0xffff) {
                    if (((*(short *)(arg_eax + 10) == 3) && ((&g_data_0019103e)[thing_ptr[0x1a]] != '\0'))
                       && ((*thing_ptr & 0x80) == 0)) {
                      thing_ptr[6] = arg_dl;
                      if (*(int *)(thing_ptr + 3) >> 0x18 != (uint)g_neutral_player_number) {
                        magic_remove_spell_player_as_04fdac();
                        magic_update_player_dungeon_04fd81();
                      }
                    }
                    else if (((*(short *)(arg_eax + 10) == 8) &&
                             ((&g_data_0019116c)[thing_ptr[0x1a]] != '\0')) && ((thing_ptr[1] & 1) == 0)) {
                      thing_ptr[6] = arg_dl;
                      workshop_item_class_077a5b();
                      workshop_illegal_item_class_0779fb();
                    }
                    else if ((*(short *)(arg_eax + 10) == 2) &&
                            (slab_coord = mapwho_handle_object_thing_0512ec(val_3,val_4,val_5), slab_coord != 0)) {
                      (&g_bss_002e1082)[(uint)arg_dl * 0x542] =
                           (&g_bss_002e1082)[(uint)arg_dl * 0x542] + *(int *)(thing_ptr + 0x13); /* thing->anim_sprite */
                      if (*(int *)(thing_ptr + 3) >> 0x18 != (uint)g_neutral_player_number) {
                        (&g_bss_002e1082)[(*(int *)(thing_ptr + 3) >> 0x18) * 0x542] =
                             (&g_bss_002e1082)[(*(int *)(thing_ptr + 3) >> 0x18) * 0x542] -
                             *(int *)(thing_ptr + 0x13); /* thing->anim_sprite */
                      }
switchD_000d0d6d_caseD_0:
                      thing_ptr[6] = arg_dl;
                    }
                    else if ((*(short *)(arg_eax + 10) == 0xe) &&
                            ((&g_data_0018b919)[(uint)thing_ptr[0x1a] * 0x16] != '\0')) {
                      if (*(ushort *)(thing_ptr + 0x13) == 0) { /* thing->anim_sprite */
                        LbErrorLog(); /* LbErrorLog("room.cpp", line 5445, "Lair thinks it belongs to a creature, but the creature disagrees.") */
                      }
                      else if (*(short *)(thing_ptr + 0x1b) == /* thing->index_or_angle */
                               *(short *)((&g_creature_ctrl_ptrs)
                                          [*(ushort *)
                                            ((int)(&g_thing_ptrs)[*(ushort *)(thing_ptr + 0x13)] + 100) /* thing->anim_sprite */
                                          ] + 0x6a)) {
                        lair_attempt_remove_creature_lair_04d3d4();
                      }
                      else {
                        LbErrorLog(); /* LbErrorLog("room.cpp", line 5450, "This lair has no owner!!!") */
                      }
                    }
                    else {
                      switch((&g_data_0018b91a)[(uint)thing_ptr[0x1a] * 0x16]) {
                      case 0:
                      case 1:
                      case 3:
                        goto switchD_000d0d6d_caseD_0;
                      case 2:
                        if (thing_ptr[0x1a] != 10) goto LAB_000d0b49;
                        food_update_player_dungeon_0abe58();
                      }
                    }
                  }
                  else if ((uint)*(ushort *)(thing_ptr + 0x1d) == (int)sStack_24) {
                    thing_ptr[6] = arg_dl;
                  }
                }
                thing_ptr = (&g_thing_ptrs)[uval];
              } while (g_thing_ptrs < thing_ptr);
            }
            local_2c = local_2c + 5;
            val_2 = val_2 + 4;
          } while (val_2 < val_3);
        }
        local_38 = local_38 + 0x500;
        local_34 = local_34 + 4;
      } while (local_34 < (val + 3) * 4);
    }
    panmap_door_flagged_position_063122();
    sStack_24 = *(short *)(&g_bss_002d33c6 + sStack_24 * 6);
  } while( true );
}

/******************************************************************************
 * Function : room_create_room_flag_0d0d80 (Original VA: 0xd0d80, Ghidra: FUN_000d0d80)
 * Prototype: void room_create_room_flag_0d0d80(void);
 * Address  : 0xd0d80 (Size: 229 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 5537
 * Purpose  : String 'Cannot create room_flag'
 * Callers  : 3 -> room_how_room_exist_slabs_0c8654, room_process_dungeon_room_0c8d10, room_process_dungeon_room_0caa90
 * Callees  : 3 -> inits_allocate_light_object_043f07, mapwho_process_map_subtile_050d3c, LbErrorLog
 ******************************************************************************/
void room_create_room_flag_0d0d80(void)

{
  short short_val;
  int arg_eax;
  int val;
  
  short_val = *(short *)(arg_eax + 10);
  if ((((short_val != 7) && (short_val != 1)) && (short_val != 0x10)) && (short_val != 0xf)) {
    val = mapwho_process_map_subtile_050d3c(((*(ushort *)(arg_eax + 0x37) % 0x55) * 3 + 1) * 0x100,0x200);
    if ((val == 0) && (val = inits_allocate_light_object_043f07(), val == 0)) {
      LbErrorLog(); /* LbErrorLog("room.cpp", line 5537, "Cannot create room_flag") */
      return;
    }
    *(undefined2 *)(val + 0x13) = *(undefined2 *)(arg_eax + 1);
  }
  return;
}

/******************************************************************************
 * Function : room_update_slab_subtile_columns_0d0ee0 (Original VA: 0xd0ee0, Ghidra: FUN_000d0ee0)
 * Prototype: undefined1 * room_update_slab_subtile_columns_0d0ee0(void);
 * Address  : 0xd0ee0 (Size: 109 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> temple_update_slab_subtile_columns_0739b9
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * room_update_slab_subtile_columns_0d0ee0(void)

{
  byte arg_al;
  uint arg_edx;
  undefined1 *room_ptr;
  
  room_ptr = (undefined1 *)0x0;
  if ((*(byte *)((int)&g_map_subtiles + ((arg_edx & 0xff) * 0x100 + (uint)arg_al) * 5) & 2) != 0) {
    room_ptr = &g_rooms +
             (uint)(byte)(&g_bss_002d33c8)
                         [((&g_subtile_to_slab_lut)[arg_al] + (&g_subtile_to_slab_lut)[arg_edx & 0xff] * 0x55) * 6] *
             0x45;
  }
  return room_ptr;
}

/******************************************************************************
 * Function : room_update_slab_subtile_columns_0d0f50 (Original VA: 0xd0f50, Ghidra: FUN_000d0f50)
 * Prototype: undefined8 room_update_slab_subtile_columns_0d0f50(void);
 * Address  : 0xd0f50 (Size: 111 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 59 -> barracks_update_creature_control_013747, barracks_fn_0137af, barracks_barrack_party_class_013b43, combmove_room_state_016640, entrance_update_creature_and_thing_026ce2, entrance_update_creature_control_026dbc, eyelens_fn_026faa, evil_update_creature_control_028afb ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 room_update_slab_subtile_columns_0d0f50(void)

{
  int arg_eax;
  undefined4 arg_edx;
  undefined1 *room_ptr;
  
  room_ptr = (undefined1 *)0x0;
  if ((*(byte *)((int)&g_map_subtiles +
                (uint)CONCAT11(*(byte *)(arg_eax + 0x10),*(byte *)(arg_eax + 0xe)) * 5) & 2) != 0) {
    room_ptr = &g_rooms +
             (uint)(byte)(&g_bss_002d33c8)
                         [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0xe)] +
                          (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 0x10)] * 0x55) * 6] * 0x45;
  }
  return CONCAT44(arg_edx,room_ptr);
}

/******************************************************************************
 * Function : room_update_slab_subtile_columns_0d0fc0 (Original VA: 0xd0fc0, Ghidra: FUN_000d0fc0)
 * Prototype: undefined8 room_update_slab_subtile_columns_0d0fc0(void);
 * Address  : 0xd0fc0 (Size: 111 bytes)
 * Module   : room.cpp [contiguous_same_unit_span]
 * Purpose  : Updates 3x3 subtile map entries for slab coordinates
 * Callers  : 1 -> update_fn_0dd20c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 room_update_slab_subtile_columns_0d0fc0(void)

{
  int arg_eax;
  undefined4 arg_edx;
  undefined1 *room_ptr;
  
  room_ptr = (undefined1 *)0x0;
  if ((*(byte *)((int)&g_map_subtiles +
                (uint)CONCAT11(*(byte *)(arg_eax + 3),*(byte *)(arg_eax + 1)) * 5) & 2) != 0) {
    room_ptr = &g_rooms +
             (uint)(byte)(&g_bss_002d33c8)
                         [((&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 1)] +
                          (&g_subtile_to_slab_lut)[*(byte *)(arg_eax + 3)] * 0x55) * 6] * 0x45;
  }
  return CONCAT44(arg_edx,room_ptr);
}

/******************************************************************************
 * Function : room_passed_0d1030 (Original VA: 0xd1030, Ghidra: FUN_000d1030)
 * Prototype: int room_passed_0d1030(void);
 * Address  : 0xd1030 (Size: 451 bytes)
 * Module   : room.cpp [direct_file_string_xref]
 * OrigLine : room.cpp lines 5655
 * Purpose  : String 'INVALID ROOM PASSED'
 * Callers  : 1 -> prison_update_creature_control_065d3e
 * Callees  : 2 -> mapwho_process_map_subtile_050d3c, LbErrorLog
 ******************************************************************************/
int room_passed_0d1030(void)

{
  uint rand_seed;
  int val;
  int val_2;
  int extraout_ECX;
  undefined *arg_ebx;
  int val_3;
  int local_24;
  uint local_20;
  uint local_1c;
  
  if (arg_ebx < &g_bss_002ddd1c) {
    LbErrorLog(); /* LbErrorLog("room.cpp", line 5655, "INVALID ROOM PASSED") */
    val = extraout_ECX;
  }
  else {
    local_1c = (uint)*(ushort *)(arg_ebx + 0x37);
    rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
    g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
    local_20 = g_action_random_seed % (uint)*(ushort *)(arg_ebx + 0x3b);
    val = 0;
    if (local_20 != 0) {
      do {
        local_1c = (uint)*(ushort *)(&g_bss_002d33c6 + local_1c * 6);
        val = val + 1;
      } while (val < (int)local_20);
    }
    local_24 = 0;
    while( true ) {
      val = 0;
      if ((int)(uint)*(ushort *)(arg_ebx + 0x3b) <= local_24) break;
      if (*(ushort *)(arg_ebx + 0x3b) == local_20) {
        local_1c = CONCAT22((short)(local_20 >> 0x10),*(undefined2 *)(arg_ebx + 0x37));
        local_20 = 0;
      }
      rand_seed = g_action_random_seed * 0x24a1 + 0x24df;
      g_action_random_seed = rand_seed >> 0xd | rand_seed * 0x80000;
      val = ((int)local_1c / 0x55) * 3;
      val_3 = 0;
      do {
        val_2 = mapwho_process_map_subtile_050d3c(val);
        if (val_2 != 0) {
          return val_2;
        }
        val_3 = val_3 + 1;
      } while (val_3 < 9);
      local_1c = (uint)*(ushort *)(&g_bss_002d33c6 + local_1c * 6);
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    }
  }
  return val;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0d11f4 (Original VA: 0xd11f4, Ghidra: FUN_000d11f4)
 * Prototype: int room_process_dungeon_room_0d11f4(void);
 * Address  : 0xd11f4 (Size: 86 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> scavenge_update_player_dungeon_067290, workshop_fn_077547
 * Callees  : 0 -> 
 ******************************************************************************/
int room_process_dungeon_room_0d11f4(void)

{
  ushort dungeon_off;
  int room_ptr;
  int arg_eax;
  int arg_edx;
  int val;
  
  val = 0;
  dungeon_off = *(ushort *)(&g_bss_002e0594 + arg_edx * 2 + arg_eax * 0x1508);
  while (room_ptr = (uint)dungeon_off * 0x45, &g_rooms < &g_rooms + room_ptr) {
    val = val + (uint)*(ushort *)(&g_bss_002ddd56 + room_ptr);
    dungeon_off = *(ushort *)(&g_bss_002ddd21 + room_ptr);
  }
  return val;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0d124c (Original VA: 0xd124c, Ghidra: FUN_000d124c)
 * Prototype: int room_process_dungeon_room_0d124c(void);
 * Address  : 0xd124c (Size: 77 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 1 -> gen2_fn_037e26
 * Callees  : 0 -> 
 ******************************************************************************/
int room_process_dungeon_room_0d124c(void)

{
  ushort uval;
  int room_ptr;
  int arg_eax;
  int arg_edx;
  int val;
  
  val = 0;
  uval = *(ushort *)(arg_edx * 2 + arg_eax + 0xb);
  while (room_ptr = (uint)uval * 0x45, &g_rooms < &g_rooms + room_ptr) {
    val = val + (uint)*(ushort *)(&g_bss_002ddd56 + room_ptr);
    uval = *(ushort *)(&g_bss_002ddd21 + room_ptr);
  }
  return val;
}

/******************************************************************************
 * Function : room_process_dungeon_room_0d129c (Original VA: 0xd129c, Ghidra: FUN_000d129c)
 * Prototype: undefined1 * room_process_dungeon_room_0d129c(void);
 * Address  : 0xd129c (Size: 46 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Operates on Room structure in g_rooms (stride 0x45)
 * Callers  : 2 -> research_illegal_research_type_process_066b28, workshop_door_choice_076b29
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 * room_process_dungeon_room_0d129c(void)

{
  int arg_eax;
  undefined1 *room_ptr;
  int arg_edx;
  
  room_ptr = &g_rooms + (uint)*(ushort *)(&g_bss_002e0594 + arg_eax * 0x1508 + arg_edx * 2) * 0x45;
  if (room_ptr == &g_rooms) {
    room_ptr = (undefined1 *)0x0;
  }
  return room_ptr;
}

/******************************************************************************
 * Function : room_process_slabmap_tile_0d12cc (Original VA: 0xd12cc, Ghidra: FUN_000d12cc)
 * Prototype: undefined4 room_process_slabmap_tile_0d12cc(void);
 * Address  : 0xd12cc (Size: 93 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Reads/modifies SlabMap[85x85] tile entry
 * Callers  : 1 -> shot_update_creature_control_06db51
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 room_process_slabmap_tile_0d12cc(void)

{
  int arg_eax;
  int val;
  uint arg_edx;
  uint uval;
  
  uval = (uint)*(ushort *)(arg_eax + 0x37);
  if (uval == 0) {
    return 0;
  }
  do {
    val = 2;
    do {
      if ((byte)(&g_slabmap_base)[((*(int *)((int)&g_data_0018b69e + val) >> 0x10) + uval) * 6] ==
          arg_edx) {
        return 1;
      }
      val = val + 4;
    } while (val < 0x12);
    uval = (uint)*(ushort *)(&g_bss_002d33c6 + uval * 6);
  } while (uval != 0);
  return 0;
}

/******************************************************************************
 * Function : room_update_creature_control_0d132c (Original VA: 0xd132c, Ghidra: FUN_000d132c)
 * Prototype: longlong room_update_creature_control_0d132c(void);
 * Address  : 0xd132c (Size: 79 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 0 -> 
 * Callees  : 2 -> person_update_creature_control_064ae7, room_update_slab_subtile_columns_0d0f50
 ******************************************************************************/
longlong room_update_creature_control_0d132c(void)

{
  int thing;
  uint arg_edx;
  undefined8 uval;
  
  if (*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x80) != 0) { /* thing->ccontrol_idx */
    uval = room_update_slab_subtile_columns_0d0f50();
    if (((int)uval != 0) &&
       (*(short *)((int)uval + 1) == *(short *)((int)((ulonglong)uval >> 0x20) + 0x80))) {
      person_update_creature_control_064ae7();
      return CONCAT44(arg_edx,1);
    }
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : room_fn_0d137c (Original VA: 0xd137c, Ghidra: FUN_000d137c)
 * Prototype: void room_fn_0d137c(void);
 * Address  : 0xd137c (Size: 86 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0d137c
 * Callers  : 0 -> 
 * Callees  : 1 -> cdtest_fn_015030
 ******************************************************************************/
void room_fn_0d137c(void)

{
  short short_val;
  int arg_eax;
  int extraout_ECX;
  
  short_val = *(short *)(arg_eax + 0x37);
  while (short_val != 0) {
    cdtest_fn_015030();
    short_val = *(short *)(&g_bss_002d33c6 + extraout_ECX);
  }
  return;
}

/******************************************************************************
 * Function : room_fn_0d13d4 (Original VA: 0xd13d4, Ghidra: FUN_000d13d4)
 * Prototype: undefined4 room_fn_0d13d4(void);
 * Address  : 0xd13d4 (Size: 6 bytes)
 * Module   : room.cpp [address_order_boundary_interpolation]
 * Purpose  : Module room.cpp procedure @ 0x0d13d4
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 room_fn_0d13d4(void)

{
  return 1;
}

