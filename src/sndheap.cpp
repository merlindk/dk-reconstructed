/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: sndheap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sndheap_update_creature_control_06ddd9 (Original VA: 0x6ddd9, Ghidra: FUN_0006ddd9)
 * Prototype: longlong sndheap_update_creature_control_06ddd9(void);
 * Address  : 0x6ddd9 (Size: 42 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 2 -> shot_update_creature_and_thing_06da97, shot_update_creature_control_06db51
 * Callees  : 0 -> 
 ******************************************************************************/
longlong sndheap_update_creature_control_06ddd9(void)

{
  int thing;
  uint arg_edx;
  
  if ((*(short *)((&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)] + 0x21) == 0) && /* thing->ccontrol_idx */
     (*(int *)(&g_bss_002e0e11 + *(char *)(thing + 6) * 0x1508) == 0)) { /* thing->owner */
    return CONCAT44(arg_edx,1);
  }
  return (ulonglong)arg_edx << 0x20;
}

/******************************************************************************
 * Function : sndheap_fn_06de03 (Original VA: 0x6de03, Ghidra: FUN_0006de03)
 * Prototype: undefined8 sndheap_fn_06de03(void);
 * Address  : 0x6de03 (Size: 7 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sndheap.cpp procedure @ 0x06de03
 * Callers  : 1 -> sndheap_fn_06de0a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 sndheap_fn_06de03(void)

{
  undefined4 unaff_retaddr;
  
  return CONCAT44(unaff_retaddr,1);
}

/******************************************************************************
 * Function : sndheap_fn_06de0a (Original VA: 0x6de0a, Ghidra: FUN_0006de0a)
 * Prototype: undefined4 sndheap_fn_06de0a(void);
 * Address  : 0x6de0a (Size: 26 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sndheap.cpp procedure @ 0x06de0a
 * Callers  : 0 -> 
 * Callees  : 1 -> sndheap_fn_06de03
 ******************************************************************************/
undefined4 sndheap_fn_06de0a(void)

{
  int arg_eax;
  undefined4 uval;
  
  if ((&g_bss_002e9188)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0') {
    *(byte *)(arg_eax + 0x25) = *(byte *)(arg_eax + 0x25) | 0x20;
    uval = sndheap_fn_06de03();
    return uval;
  }
  return 1;
}

/******************************************************************************
 * Function : sndheap_fn_06deac (Original VA: 0x6deac, Ghidra: FUN_0006deac)
 * Prototype: undefined4 sndheap_fn_06deac(undefined4 param_1);
 * Address  : 0x6deac (Size: 229 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sndheap.cpp procedure @ 0x06deac
 * Callers  : 1 -> setup_allocate_graphics_heap
 * Callees  : 5 -> heap_fn_03a8a8, sndheap_fn_06df91, sndheap_fn_06e3d5, LbScreenWaitVbi, LbFileOpen
 ******************************************************************************/
undefined4 sndheap_fn_06deac(undefined4 param_1)

{
  int arg_eax;
  int val;
  int val_2;
  int arg_edx;
  undefined4 *word_ptr;
  int val_3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x6dec5;
  LbScreenWaitVbi();
  if (g_data_0018729c != -1) {
    uStack_18 = 0x6ded3;
    sndheap_fn_06df91();
  }
  uStack_18 = 0x6dee0;
  g_data_0018729c = LbFileOpen();
  if (g_data_0018729c != -1) {
    uStack_18 = param_1;
    uStack_1c = 0x6defb;
    val = sndheap_fn_06e3d5();
    word_ptr = &uStack_18;
    if (val != 0) {
      val_3 = arg_edx - val;
      word_ptr = &uStack_18;
      g_bss_00376529 = arg_eax;
      if (0 < val_3) {
        if (g_data_001872a0 != -1) {
          uStack_1c = 0x6df27;
          sndheap_fn_06df91();
        }
        uStack_1c = 0x6df34;
        g_data_001872a0 = LbFileOpen();
        if (g_data_001872a0 == -1) {
          return 0;
        }
        uStack_1c = param_1;
        val_2 = sndheap_fn_06e3d5();
        word_ptr = &uStack_1c;
        if (((val_2 != 0) &&
            (word_ptr = &uStack_1c, g_bss_0037652d = arg_eax + val,
            val_3 != val_2 && -1 < val_3 - val_2)) &&
           (g_bss_0037651d = heap_fn_03a8a8(), word_ptr = &uStack_1c, g_bss_0037651d != 0)) {
          g_bss_0037651c = 1;
          return 1;
        }
      }
    }
    *(undefined4 *)((int)word_ptr + -4) = 0x6df04;
    sndheap_fn_06df91();
  }
  return 0;
}

/******************************************************************************
 * Function : sndheap_fn_06df91 (Original VA: 0x6df91, Ghidra: FUN_0006df91)
 * Prototype: void sndheap_fn_06df91(void);
 * Address  : 0x6df91 (Size: 66 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sndheap.cpp procedure @ 0x06df91
 * Callers  : 2 -> setup_allocate_graphics_heap, sndheap_fn_06deac
 * Callees  : 1 -> bflib_system_io_fn_0e8a1c
 ******************************************************************************/
void sndheap_fn_06df91(void)

{
  if (g_data_0018729c != -1) {
    bflib_system_io_fn_0e8a1c();
    g_data_0018729c = -1;
  }
  if (g_data_001872a0 != -1) {
    bflib_system_io_fn_0e8a1c();
    g_data_001872a0 = -1;
  }
  g_bss_0037651c = 0;
  return;
}

/******************************************************************************
 * Function : sndheap_fn_06dfd3 (Original VA: 0x6dfd3, Ghidra: FUN_0006dfd3)
 * Prototype: void sndheap_fn_06dfd3(void);
 * Address  : 0x6dfd3 (Size: 200 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sndheap.cpp procedure @ 0x06dfd3
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, game_out_sync_gameturn_036ff4
 * Callees  : 3 -> bflib_system_io_fn_0f27e8, bflib_system_io_fn_0f27ee, bflib_system_io_fn_0f4e20
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sndheap_fn_06dfd3(void)

{
  byte *byte_ptr;
  short short_val;
  char ch;
  int *int_ptr;
  int *loop_i;
  int val;
  int *extraout_ECX;
  int loop_i_2;
  
  val = g_bss_00376529;
  for (loop_i_2 = 0; loop_i_2 < g_bss_00376521; loop_i_2 = loop_i_2 + 1) {
    if (*(int *)(val + 0xc) != 0) {
      byte_ptr = (byte *)(*(int *)(val + 0xc) + 8);
      *byte_ptr = *byte_ptr & 0xf9;
    }
    val = val + 0x10;
  }
  if (g_bss_0037651c != '\0') {
    val = g_bss_0037652d;
    for (loop_i_2 = 0; loop_i_2 < g_bss_00376525; loop_i_2 = loop_i_2 + 1) {
      if (*(int *)(val + 0xc) != 0) {
        byte_ptr = (byte *)(*(int *)(val + 0xc) + 8);
        *byte_ptr = *byte_ptr & 0xf9;
      }
      val = val + 0x10;
    }
  }
  int_ptr = (int *)bflib_system_io_fn_0f27ee();
  for (loop_i = (int *)bflib_system_io_fn_0f27e8(); loop_i <= int_ptr; loop_i = (int *)((int)loop_i + 0x1d)) {
    if ((*loop_i != 0) && ((*(byte *)((int)loop_i + 0x17) & 1) != 0)) {
      ch = bflib_system_io_fn_0f4e20();
      loop_i = extraout_ECX;
      if (ch == '\0') {
        *(byte *)((int)extraout_ECX + 0x17) = *(byte *)((int)extraout_ECX + 0x17) & 0xfa;
      }
      else {
        if ((g_bss_0037651c == '\0') || ((*(byte *)((int)extraout_ECX + 0x17) & 4) == 0)) {
          short_val = *(short *)((int)extraout_ECX + 0x12);
          val = g_bss_00376529;
        }
        else {
          short_val = *(short *)((int)extraout_ECX + 0x12);
          val = g_bss_0037652d;
        }
        val = val + short_val * 0x10;
        if (*(int *)(val + 0xc) != 0) {
          byte_ptr = (byte *)(*(int *)(val + 0xc) + 8);
          *byte_ptr = *byte_ptr | 6;
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sndheap_trying_use_two_sound_06e09b (Original VA: 0x6e09b, Ghidra: FUN_0006e09b)
 * Prototype: void sndheap_trying_use_two_sound_06e09b(void);
 * Address  : 0x6e09b (Size: 190 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp lines 254
 * Purpose  : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 5 -> sound3d_fn_06f72b, sound_fn_06f7b2, sound3d_fn_06ff7f, sound3d_fn_06ffd9, sound3d_fn_07019c
 * Callees  : 5 -> LbErrorLog, bflib_system_io_fn_0f0a54, bflib_system_io_fn_0f27e8, bflib_system_io_fn_0f27ee, bflib_system_io_fn_0f4e20
 ******************************************************************************/
void sndheap_trying_use_two_sound_06e09b(void)

{
  byte *byte_ptr;
  int val;
  char ch;
  int *int_ptr;
  int *int_ptr_2;
  int *extraout_ECX;
  int val_2;
  short arg_dx;
  char arg_bl;
  
  if ((g_bss_0037651c == '\0') && (arg_bl != '\0')) {
    LbErrorLog(); /* LbErrorLog("sndheap.cpp", line 254, "Trying to use two sound banks when only one has been set up") */
  }
  bflib_system_io_fn_0f0a54();
  int_ptr = (int *)bflib_system_io_fn_0f27ee();
  int_ptr_2 = (int *)bflib_system_io_fn_0f27e8();
  while ((int_ptr_2 <= int_ptr &&
         ((((arg_dx != *(short *)((int)int_ptr_2 + 0x12) || (*int_ptr_2 == 0)) ||
           ((*(byte *)((int)int_ptr_2 + 0x17) & 1) == 0)) ||
          (((arg_bl != '\0' && ((*(byte *)((int)int_ptr_2 + 0x17) & 4) == 0)) ||
           (ch = bflib_system_io_fn_0f4e20(), int_ptr_2 = extraout_ECX, ch == '\0'))))))) {
    int_ptr_2 = (int *)((int)int_ptr_2 + 0x1d);
  }
  if (int_ptr <= int_ptr_2) {
    if (arg_bl == '\0') {
      val_2 = g_bss_00376529 + arg_dx * 0x10;
      val = *(int *)(val_2 + 0xc);
    }
    else {
      val_2 = g_bss_0037652d + arg_dx * 0x10;
      val = *(int *)(val_2 + 0xc);
    }
    if (val != 0) {
      byte_ptr = (byte *)(*(int *)(val_2 + 0xc) + 8);
      *byte_ptr = *byte_ptr & 0xf9;
    }
  }
  return;
}

/******************************************************************************
 * Function : sndheap_trying_use_two_sound_06e159 (Original VA: 0x6e159, Ghidra: FUN_0006e159)
 * Prototype: int sndheap_trying_use_two_sound_06e159(undefined2 param_1,char param_2,undefined1 param_3,char param_4);
 * Address  : 0x6e159 (Size: 250 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp lines 302
 * Purpose  : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 3 -> frontmap_ldata_dkflag00_dat_030ef8, fronttor_fn_036e7e, sound3d_fn_06faa0
 * Callees  : 4 -> heapmgr_fn_03aa24, sndheap_trying_use_two_sound_06e2aa, LbErrorLog, bflib_system_io_playsadd_id_num_vol_0f4ed4
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sndheap_trying_use_two_sound_06e159(undefined2 param_1,char param_2,undefined1 param_3,char param_4)

{
  byte *byte_ptr;
  undefined4 uval;
  int val;
  short arg_dx;
  int val_2;
  
  if ((g_bss_0037651c == '\0') && (param_4 != '\0')) {
    LbErrorLog(); /* LbErrorLog("sndheap.cpp", line 302, "Trying to use two sound banks when only one has been set up") */
  }
  if (param_4 == '\0') {
    if (g_data_0018729c == -1) {
      return 0;
    }
    if (arg_dx < 1) {
      return 0;
    }
    val_2 = g_bss_00376529;
    if (g_bss_00376521 <= arg_dx) {
      return 0;
    }
  }
  else {
    if (g_data_001872a0 == -1) {
      return 0;
    }
    if (arg_dx < 1) {
      return 0;
    }
    val_2 = g_bss_0037652d;
    if (g_bss_00376525 <= arg_dx) {
      return 0;
    }
  }
  val_2 = val_2 + arg_dx * 0x10;
  if (*(int *)(val_2 + 0xc) == 0) {
    uval = sndheap_trying_use_two_sound_06e2aa();
    *(undefined4 *)(val_2 + 0xc) = uval;
  }
  if (*(int *)(val_2 + 0xc) == 0) {
    return 0;
  }
  heapmgr_fn_03aa24();
  val = bflib_system_io_playsadd_id_num_vol_0f4ed4(param_1,(int)param_2,param_3,**(undefined4 **)(val_2 + 0xc),
                       *(undefined4 *)(val_2 + 8));
  if (val != 0) {
    *(byte *)(val + 0x17) = *(byte *)(val + 0x17) | 1;
    if (param_4 != '\0') {
      *(byte *)(val + 0x17) = *(byte *)(val + 0x17) | 4;
    }
    byte_ptr = (byte *)(*(int *)(val_2 + 0xc) + 8);
    *byte_ptr = *byte_ptr | 6;
    return val;
  }
  return 0;
}

/******************************************************************************
 * Function : sndheap_trying_use_two_sound_06e253 (Original VA: 0x6e253, Ghidra: FUN_0006e253)
 * Prototype: undefined4 sndheap_trying_use_two_sound_06e253(void);
 * Address  : 0x6e253 (Size: 65 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp lines 371
 * Purpose  : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 1 -> sound3d_fn_06faa0
 * Callees  : 1 -> LbErrorLog
 ******************************************************************************/
undefined4 sndheap_trying_use_two_sound_06e253(void)

{
  int arg_eax;
  char arg_dl;
  int val;
  
  if ((g_bss_0037651c == '\0') && (arg_dl != '\0')) {
    LbErrorLog(); /* LbErrorLog("sndheap.cpp", line 371, "Trying to use two sound banks when only one has been set up") */
    return 0;
  }
  val = g_bss_00376529;
  if (arg_dl != '\0') {
    val = g_bss_0037652d;
  }
  return *(undefined4 *)(val + 8 + arg_eax * 0x10);
}

/******************************************************************************
 * Function : sndheap_fn_06e294 (Original VA: 0x6e294, Ghidra: FUN_0006e294)
 * Prototype: void sndheap_fn_06e294(void);
 * Address  : 0x6e294 (Size: 22 bytes)
 * Module   : sndheap.cpp [contiguous_same_unit_span]
 * Purpose  : Module sndheap.cpp procedure @ 0x06e294
 * Callers  : 0 -> 
 * Callees  : 1 -> heapmgr_heap_start_end_size_03ab51
 ******************************************************************************/
void sndheap_fn_06e294(void)

{
  heapmgr_heap_start_end_size_03ab51();
  return;
}

/******************************************************************************
 * Function : sndheap_trying_use_two_sound_06e2aa (Original VA: 0x6e2aa, Ghidra: FUN_0006e2aa)
 * Prototype: undefined4 sndheap_trying_use_two_sound_06e2aa(void);
 * Address  : 0x6e2aa (Size: 241 bytes)
 * Module   : sndheap.cpp [direct_file_string_xref]
 * OrigLine : sndheap.cpp lines 400
 * Purpose  : String 'Trying to use two sound banks when only one has been set up'
 * Callers  : 1 -> sndheap_trying_use_two_sound_06e159
 * Callees  : 5 -> heapmgr_overlapping_heap_blocks_03a8f7, heapmgr_fn_03aa62, LbErrorLog, LbFileWrite, LbFileRead
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sndheap_trying_use_two_sound_06e2aa(void)

{
  int val;
  int val_2;
  char arg_cl;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  short arg_dx;
  undefined4 local_14;
  
  if ((g_bss_0037651c == '\0') && (arg_cl != '\0')) {
    LbErrorLog(); /* LbErrorLog("sndheap.cpp", line 400, "Trying to use two sound banks when only one has been set up") */
  }
  else {
    val = heapmgr_overlapping_heap_blocks_03a8f7();
    if (val == 0) {
      while (*(int *)(g_bss_0037651d + 0x10) != 0) {
        val = heapmgr_overlapping_heap_blocks_03a8f7();
        if (val != 0) break;
        local_14 = heapmgr_fn_03aa62();
        val = extraout_ECX;
        if (local_14 < 0) break;
        if (local_14 < g_bss_00376521) {
          local_14 = local_14 << 4;
          val_2 = g_bss_00376529;
        }
        else {
          local_14 = (local_14 - g_bss_00376521) * 0x10;
          val_2 = g_bss_0037652d;
        }
        *(int *)(val_2 + local_14 + 0xc) = extraout_ECX;
      }
    }
    if (val != 0) {
      if (arg_cl == '\0') {
        *(short *)(val + 10) = arg_dx;
        LbFileWrite();
      }
      else {
        *(short *)(val + 10) = arg_dx + g_bss_00376521;
        LbFileWrite();
      }
      LbFileRead();
      return extraout_ECX_00;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sndheap_fn_06e39b (Original VA: 0x6e39b, Ghidra: FUN_0006e39b)
 * Prototype: undefined4 sndheap_fn_06e39b(void);
 * Address  : 0x6e39b (Size: 57 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sndheap.cpp procedure @ 0x06e39b
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sndheap_fn_06e39b(void)

{
  short short_val;
  char ch;
  undefined1 uval;
  int arg_eax;
  int val;
  undefined3 uval_4;
  uint uval_2;
  undefined4 uval_3;
  int arg_ecx;
  char *str_ptr;
  char *arg_edx;
  int *arg_ebx;
  int unaff_EBP;
  int unaff_ESI;
  char *str_ptr_2;
  char *unaff_EDI;
  code *str_ptr_3;
  undefined3 unaff_retaddr;
  undefined1 uStack_1;
  
  str_ptr = (char *)(arg_ecx + *(int *)(arg_eax + 3));
  str_ptr_2 = (char *)(unaff_ESI + *(int *)((int)arg_ebx + arg_eax));
  val = arg_eax - *arg_ebx;
  uval_4 = (undefined3)((uint)val >> 8);
  ch = (char)val - (char)*arg_ebx;
  *(char *)arg_ebx = (char)*arg_ebx + (char)str_ptr;
  *(char *)CONCAT31(uval_4,ch) = *(char *)CONCAT31(uval_4,ch) + ch;
  *(char *)(unaff_EBP + -0x1c) = *(char *)(unaff_EBP + -0x1c) + ch;
  *str_ptr_2 = *str_ptr_2 + (char)((uint)arg_ebx >> 8);
  in(6);
  ch = (char)((uint)arg_edx >> 8);
  *unaff_EDI = *unaff_EDI + ch;
  uval = in(6);
  *(char *)CONCAT31(uval_4,uval) = *(char *)CONCAT31(uval_4,uval) + ch;
  in(6);
  *str_ptr = *str_ptr + (char)((uint)str_ptr >> 8);
  in(6);
  *arg_edx = *arg_edx + (char)((uint)val >> 8);
  in(6);
  *(char *)arg_ebx = (char)*arg_ebx + (char)arg_ebx;
  uval = in(6);
  *(char *)CONCAT31(uval_4,uval) = *(char *)CONCAT31(uval_4,uval) + (char)arg_edx;
  in(6);
  str_ptr_2[0x57] = str_ptr_2[0x57] + (char)arg_edx;
  uval_2 = CONCAT31(CONCAT12((char)((uint3)unaff_retaddr >> 0x10),
                            CONCAT11((char)((uint3)unaff_retaddr >> 8) + (char)str_ptr,
                                     (char)unaff_retaddr)),uStack_1) - 800;
  if (0x34c < uval_2) {
    return 0;
  }
  val = 10;
  str_ptr_3 = sndheap_fn_06e39b;
  do {
    if (val == 0) break;
    val = val + -1;
    short_val = *(short *)str_ptr_3;
    str_ptr_3 = str_ptr_3 + 2;
  } while ((short)uval_2 != short_val);
                    /* WARNING: Could not recover jumptable at 0x0006e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uval_3 = (**(code **)(val * 4 + 0x6e3ad))();
  return uval_3;
}

/******************************************************************************
 * Function : sndheap_fn_06e3d5 (Original VA: 0x6e3d5, Ghidra: FUN_0006e3d5)
 * Prototype: undefined4 sndheap_fn_06e3d5(int param_1);
 * Address  : 0x6e3d5 (Size: 75 bytes)
 * Module   : sndheap.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sndheap.cpp procedure @ 0x06e3d5
 * Callers  : 1 -> sndheap_fn_06deac
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sndheap_fn_06e3d5(int param_1)

{
  short short_val;
  undefined4 uval;
  int val;
  code *str_ptr;
  
  if (0x34c < param_1 - 800U) {
    return 0;
  }
  val = 10;
  str_ptr = sndheap_fn_06e39b;
  do {
    if (val == 0) break;
    val = val + -1;
    short_val = *(short *)str_ptr;
    str_ptr = str_ptr + 2;
  } while ((short)(param_1 - 800U) != short_val);
                    /* WARNING: Could not recover jumptable at 0x0006e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uval = (**(code **)(val * 4 + 0x6e3ad))();
  return uval;
}

