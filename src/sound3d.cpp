/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: sound3d.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 28
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sound3d_fn_06f6ca (Original VA: 0x6f6ca, Ghidra: FUN_0006f6ca)
 * Prototype: bool sound3d_fn_06f6ca(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4);
 * Address  : 0x6f6ca (Size: 48 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f6ca
 * Callers  : 0 -> 
 * Callees  : 1 -> sound3d_fn_06faa0
 ******************************************************************************/
bool sound3d_fn_06f6ca(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  int val;
  
  val = sound3d_fn_06faa0(param_1,param_2,(int)param_3,param_4,0);
  return val != 0;
}

/******************************************************************************
 * Function : sound3d_fn_06f72b (Original VA: 0x6f72b, Ghidra: FUN_0006f72b)
 * Prototype: undefined4 sound3d_fn_06f72b(void);
 * Address  : 0x6f72b (Size: 135 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f72b
 * Callers  : 5 -> sound_fn_06e5ee, sound_update_creature_control_06e61e, sound_fn_06ee65, update_go_first_person_without_0de6a8, update_update_creature_and_thing_0e3a8c
 * Callees  : 2 -> sndheap_trying_use_two_sound_06e09b, specials_fn_0701e3
 ******************************************************************************/
undefined4 sound3d_fn_06f72b(void)

{
  int arg_eax;
  int val;
  byte flag;
  int arg_edx;
  uint arg_ebx;
  
  flag = 0;
  while( true ) {
    if (g_bss_00376554 <= (int)(uint)flag) {
      return 1;
    }
    val = (uint)flag * 0x25;
    if (((((&g_bss_0037709e)[val] != '\0') &&
         (*(undefined **)((int)&g_bss_00377094 + val) == &g_bss_0037656e + arg_eax * 0x16)) &&
        (arg_edx == *(short *)((int)&g_bss_00377087 + val))) &&
       (arg_ebx == (byte)(&g_bss_00377089)[val])) break;
    flag = flag + 1;
  }
  (&g_bss_0037709e)[val] = 0;
  specials_fn_0701e3();
  sndheap_trying_use_two_sound_06e09b();
  return 1;
}

/******************************************************************************
 * Function : sound3d_fn_06f816 (Original VA: 0x6f816, Ghidra: FUN_0006f816)
 * Prototype: undefined4 sound3d_fn_06f816(void);
 * Address  : 0x6f816 (Size: 25 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f816
 * Callers  : 2 -> sound_fn_06f4c8, update_go_first_person_without_0de6a8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 sound3d_fn_06f816(void)

{
  undefined2 arg_ax;
  undefined2 arg_dx;
  undefined2 arg_bx;
  
  g_bss_0037706e = arg_ax;
  g_bss_00377070 = arg_dx;
  g_bss_00377072 = arg_bx;
  return 1;
}

/******************************************************************************
 * Function : sound3d_fn_06f82f (Original VA: 0x6f82f, Ghidra: FUN_0006f82f)
 * Prototype: undefined4 sound3d_fn_06f82f(void);
 * Address  : 0x6f82f (Size: 42 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f82f
 * Callers  : 2 -> sound_fn_06f4c8, update_go_first_person_without_0de6a8
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sound3d_fn_06f82f(void)

{
  ushort arg_ax;
  ushort arg_dx;
  ushort arg_bx;
  
  g_bss_00377074 = arg_ax & 0x7ff;
  g_bss_00377076 = arg_dx & 0x7ff;
  g_bss_00377078 = arg_bx & 0x7ff;
  return 1;
}

/******************************************************************************
 * Function : sound3d_fn_06f859 (Original VA: 0x6f859, Ghidra: FUN_0006f859)
 * Prototype: void sound3d_fn_06f859(void);
 * Address  : 0x6f859 (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f859
 * Callers  : 2 -> sound_fn_06f4c8, command_update_player_view_state_0784ae
 * Callees  : 0 -> 
 ******************************************************************************/
void sound3d_fn_06f859(void)

{
  undefined4 arg_eax;
  
  g_bss_003772cf = arg_eax;
  return;
}

/******************************************************************************
 * Function : sound3d_fn_06f85f (Original VA: 0x6f85f, Ghidra: FUN_0006f85f)
 * Prototype: void sound3d_fn_06f85f(void);
 * Address  : 0x6f85f (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f85f
 * Callers  : 1 -> sound_fn_06f4c8
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound3d_fn_06f85f(void)

{
  undefined4 arg_eax;
  
  g_bss_0037707a = arg_eax;
  return;
}

/******************************************************************************
 * Function : sound3d_fn_06f8f7 (Original VA: 0x6f8f7, Ghidra: FUN_0006f8f7)
 * Prototype: void sound3d_fn_06f8f7(void);
 * Address  : 0x6f8f7 (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f8f7
 * Callers  : 1 -> sound_fn_06f4c8
 * Callees  : 0 -> 
 ******************************************************************************/
void sound3d_fn_06f8f7(void)

{
  undefined1 arg_al;
  
  g_bss_0037707e = arg_al;
  return;
}

/******************************************************************************
 * Function : sound3d_fn_06f8fd (Original VA: 0x6f8fd, Ghidra: FUN_0006f8fd)
 * Prototype: undefined8 sound3d_fn_06f8fd(void);
 * Address  : 0x6f8fd (Size: 62 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f8fd
 * Callers  : 0 -> 
 * Callees  : 1 -> bflib_system_io_fn_0f4e20
 ******************************************************************************/
undefined8 sound3d_fn_06f8fd(void)

{
  char ch;
  undefined4 *thing_ptr;
  undefined4 *extraout_ECX;
  undefined4 arg_edx;
  int val;
  int loop_i;
  
  thing_ptr = &g_bss_0037707f;
  val = 0;
  for (loop_i = 0; loop_i < g_bss_00376554; loop_i = loop_i + 1) {
    if (*(char *)((int)thing_ptr + 0x1f) != '\0') { /* thing->class_id */
      ch = bflib_system_io_fn_0f4e20();
      thing_ptr = extraout_ECX;
      if (ch != '\0') {
        val = val + 1;
      }
    }
    thing_ptr = (undefined4 *)((int)thing_ptr + 0x25);
  }
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : sound3d_fn_06f968 (Original VA: 0x6f968, Ghidra: FUN_0006f968)
 * Prototype: void sound3d_fn_06f968(void);
 * Address  : 0x6f968 (Size: 6 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06f968
 * Callers  : 2 -> sound_fn_06f4c8, command_update_player_view_state_0784ae
 * Callees  : 0 -> 
 ******************************************************************************/
void sound3d_fn_06f968(void)

{
  undefined4 arg_eax;
  
  g_bss_00376550 = arg_eax;
  return;
}

/******************************************************************************
 * Function : sound3d_attempt_query_sample_06f98e (Original VA: 0x6f98e, Ghidra: FUN_0006f98e)
 * Prototype: undefined8 sound3d_attempt_query_sample_06f98e(void);
 * Address  : 0x6f98e (Size: 274 bytes)
 * Module   : sound3d.cpp [direct_file_string_xref]
 * OrigLine : sound3d.cpp lines 565
 * Purpose  : String 'Attempt to query invalid sample'
 * Callers  : 2 -> frontend_why_are_we_here_02dfac, update_go_first_person_without_0de6a8
 * Callees  : 8 -> sound3d_fn_06fba3, sound3d_fn_06fbd4, sound3d_fn_06fca5, sound3d_fn_06ff36, sound3d_fn_07019c, sound3d_fn_0701c2, LbErrorLog, bflib_system_io_fn_0f4e20
 ******************************************************************************/
undefined8 sound3d_attempt_query_sample_06f98e(void)

{
  char ch;
  int val;
  undefined4 *thing_ptr;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 arg_edx;
  int *int_ptr;
  byte *byte_ptr;
  int aiStack_2c [5];
  undefined1 local_18 [4];
  
  int_ptr = aiStack_2c + 2;
  sound3d_fn_0701c2();
  thing_ptr = &g_bss_0037707f;
  aiStack_2c[2] = 0;
  do {
    if (g_bss_00376554 <= aiStack_2c[2]) {
      byte_ptr = &g_bss_0037656e;
      for (aiStack_2c[2] = 1; byte_ptr = byte_ptr + 0x16, aiStack_2c[2] < g_data_001872b8;
          aiStack_2c[2] = aiStack_2c[2] + 1) {
        if (((*byte_ptr & 1) != 0) && ((*byte_ptr & 2) != 0)) {
          *(undefined4 *)((int)int_ptr + -4) = 0x6fa69;
          val = sound3d_fn_06fba3();
          if (val == 0) {
            *byte_ptr = *byte_ptr ^ 2;
          }
          else {
            *(undefined1 **)((int)int_ptr + -4) = local_18;
            *(undefined4 *)((int)int_ptr + -8) = 0x6fa83;
            sound3d_fn_06fbd4();
            *(undefined4 *)((int)int_ptr + -8) = 0x6fa93;
            sound3d_fn_06fca5();
            int_ptr = (int *)((int)int_ptr + -4);
          }
        }
      }
      return CONCAT44(arg_edx,1);
    }
    if (*(char *)((int)thing_ptr + 0x1f) != '\0') { /* thing->class_id */
      if (*(int *)((int)thing_ptr + 0x11) == 0) {
        LbErrorLog(); /* LbErrorLog("sound3d.cpp", line 565, "Attempt to query invalid sample") */
        thing_ptr = extraout_ECX_02;
      }
      else {
        ch = bflib_system_io_fn_0f4e20();
        if (ch == '\0') {
          byte_ptr = (byte *)(*(int *)((int)extraout_ECX + 0x11) + 0x17);
          *byte_ptr = *byte_ptr & 0xfd;
          *(undefined1 *)((int)extraout_ECX + 0x1f) = 0;
        }
        else {
          byte_ptr = (byte *)(*(int *)((int)extraout_ECX + 0x11) + 0x17);
          *byte_ptr = *byte_ptr | 2;
        }
        thing_ptr = extraout_ECX;
        if (*(int *)((int)extraout_ECX + 0x15) != 0) {
          if (*(short *)((int)extraout_ECX + 0xf) == 0) {
LAB_0006f9fa:
            sound3d_fn_07019c();
            thing_ptr = extraout_ECX_01;
          }
          else if ((*(byte *)(*(int *)((int)extraout_ECX + 0x15) + 1) & 8) == 0) {
            val = sound3d_fn_06ff36();
            thing_ptr = extraout_ECX_00;
            if (g_data_001872b4 < val) goto LAB_0006f9fa;
          }
        }
      }
    }
    aiStack_2c[2] = aiStack_2c[2] + 1;
    thing_ptr = (undefined4 *)((int)thing_ptr + 0x25);
  } while( true );
}

/******************************************************************************
 * Function : sound3d_fn_06faa0 (Original VA: 0x6faa0, Ghidra: FUN_0006faa0)
 * Prototype: undefined4 sound3d_fn_06faa0(int param_1,char param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5);
 * Address  : 0x6faa0 (Size: 267 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06faa0
 * Callers  : 3 -> sound_fn_06f5e5, sound3d_fn_06f6ca, sound_fn_06f6fa
 * Callees  : 5 -> sndheap_trying_use_two_sound_06e159, sndheap_trying_use_two_sound_06e253, sound3d_fn_06fbd4, sound3d_fn_0700ec, specials_fn_0701e3
 ******************************************************************************/
undefined4
sound3d_fn_06faa0(int param_1,char param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5)

{
  char ch;
  undefined1 uval;
  byte *arg_eax;
  int val;
  int val_2;
  undefined4 uval_2;
  undefined4 arg_ecx;
  undefined2 arg_dx;
  int val_3;
  undefined1 arg_bl;
  int local_28;
  undefined2 local_24;
  undefined1 local_20 [4];
  
  sound3d_fn_06fbd4(local_20);
  val_3 = local_28 * param_1 >> 0x1f;
  ch = sound3d_fn_0700ec(param_5);
  if (ch < 0) {
    uval_2 = 0;
  }
  else {
    val = ch * 0x25;
    specials_fn_0701e3(arg_ecx,(int)param_2,param_3,arg_bl);
    val_2 = sndheap_trying_use_two_sound_06e159();
    uval_2 = 0;
    if (val_2 != 0) {
      *(byte **)((int)&g_bss_00377094 + val) = arg_eax;
      *(undefined4 *)((int)&g_bss_0037707f + val) = param_5;
      *(undefined2 *)((int)&g_bss_00377087 + val) = arg_dx;
      (&g_bss_00377089)[val] = arg_bl;
      (&g_bss_0037709c)[val] = param_2;
      *(short *)(&g_bss_0037708e + val) =
           (short)((local_28 * param_1 + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
      (&g_bss_0037709e)[val] = 1;
      *(undefined4 *)((int)&g_bss_00377083 + val) = 0;
      *(undefined2 *)(&g_bss_0037708c + val) = local_24;
      *(int *)((int)&g_bss_00377090 + val) = val_2;
      *(short *)((int)&g_bss_0037708a + val) = (short)arg_ecx;
      (&g_bss_0037709d)[val] = param_4;
      *(uint *)(&g_bss_00377098 + val) = (uint)*(ushort *)(arg_eax + 2);
      uval = sndheap_trying_use_two_sound_06e253();
      (&g_bss_0037709f)[val] = uval;
      *(int *)((int)&g_bss_003770a0 + val) = param_1;
      uval_2 = 1;
      *arg_eax = *arg_eax | 2;
    }
  }
  return uval_2;
}

/******************************************************************************
 * Function : sound3d_fn_06fba3 (Original VA: 0x6fba3, Ghidra: FUN_0006fba3)
 * Prototype: longlong sound3d_fn_06fba3(void);
 * Address  : 0x6fba3 (Size: 49 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound3d.cpp procedure @ 0x06fba3
 * Callers  : 1 -> sound3d_attempt_query_sample_06f98e
 * Callees  : 0 -> 
 ******************************************************************************/
longlong sound3d_fn_06fba3(void)

{
  int arg_eax;
  undefined4 *thing_ptr;
  uint arg_edx;
  uint uval;
  
  thing_ptr = &g_bss_0037707f;
  uval = 0;
  while( true ) {
    if (g_bss_00376554 <= uval) {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((*(char *)((int)thing_ptr + 0x1f) != '\0') && (arg_eax == *(int *)((int)thing_ptr + 0x15))) break; /* thing->class_id */
    uval = uval + 1;
    thing_ptr = (undefined4 *)((int)thing_ptr + 0x25);
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound3d_fn_06fbd4 (Original VA: 0x6fbd4, Ghidra: FUN_0006fbd4)
 * Prototype: undefined4 sound3d_fn_06fbd4(undefined4 *param_1);
 * Address  : 0x6fbd4 (Size: 209 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound3d.cpp procedure @ 0x06fbd4
 * Callers  : 2 -> sound3d_attempt_query_sample_06f98e, sound3d_fn_06faa0
 * Callees  : 4 -> sound3d_fn_06fd5c, sound3d_fn_06fd80, sound3d_fn_06fda2, sound3d_fn_06fe93
 ******************************************************************************/
undefined4 sound3d_fn_06fbd4(undefined4 *param_1)

{
  int val;
  int val_2;
  undefined4 uval;
  undefined4 *arg_ecx;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *int_ptr;
  byte *arg_edx;
  undefined4 *arg_ebx;
  
  if ((arg_edx[1] & 8) == 0) {
    val = sound3d_fn_06fd80();
    if ((arg_edx[1] & 4) == 0) {
      val_2 = sound3d_fn_06fd5c();
      int_ptr = extraout_ECX_00;
    }
    else {
      val_2 = 1;
      int_ptr = extraout_ECX;
    }
    val = val - g_bss_00376550;
    if (val < 0) {
      val = 0;
    }
    *int_ptr = (int)((0x7f - (val * 0x7f) / (g_data_001872b4 - g_bss_00376550)) * (uint)g_bss_0037707e) >>
              6;
    if (val_2 == 0) {
      *int_ptr = *int_ptr >> 1;
    }
    if (val < 0x80) {
      *arg_ebx = 0x40;
    }
    else {
      uval = sound3d_fn_06fda2();
      *arg_ebx = uval;
    }
    if ((*arg_edx & 4) != 0) {
      uval = sound3d_fn_06fe93();
      *param_1 = uval;
      return 1;
    }
  }
  else {
    *arg_ecx = 0x7f;
    *arg_ebx = 0x40;
  }
  *param_1 = 100;
  return 1;
}

/******************************************************************************
 * Function : sound3d_fn_06fca5 (Original VA: 0x6fca5, Ghidra: FUN_0006fca5)
 * Prototype: undefined4 sound3d_fn_06fca5(void);
 * Address  : 0x6fca5 (Size: 183 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound3d.cpp procedure @ 0x06fca5
 * Callers  : 1 -> sound3d_attempt_query_sample_06f98e
 * Callees  : 4 -> specials_fn_0701e3, bflib_system_io_fn_0f0790, bflib_system_io_fn_0f5168, bflib_system_io_fn_0f5228
 ******************************************************************************/
undefined4 sound3d_fn_06fca5(void)

{
  int arg_eax;
  undefined4 *thing_ptr;
  byte local_10;
  
  thing_ptr = &g_bss_0037707f;
  for (local_10 = 0; (int)(uint)local_10 < g_bss_00376554; local_10 = local_10 + 1) {
    if ((*(char *)((int)thing_ptr + 0x1f) != '\0') && (arg_eax == *(int *)((int)thing_ptr + 0x15))) { /* thing->class_id */
      if ((*(byte *)((int)thing_ptr + 0x1e) & 2) == 0) {
        specials_fn_0701e3();
        bflib_system_io_fn_0f0790();
        specials_fn_0701e3();
        bflib_system_io_fn_0f5168();
      }
      if ((*(byte *)((int)thing_ptr + 0x1e) & 1) == 0) {
        specials_fn_0701e3();
        bflib_system_io_fn_0f5228();
      }
    }
    thing_ptr = (undefined4 *)((int)thing_ptr + 0x25);
  }
  return 1;
}

/******************************************************************************
 * Function : sound3d_fn_06fd5c (Original VA: 0x6fd5c, Ghidra: FUN_0006fd5c)
 * Prototype: void sound3d_fn_06fd5c(void);
 * Address  : 0x6fd5c (Size: 36 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06fd5c
 * Callers  : 1 -> sound3d_fn_06fbd4
 * Callees  : 0 -> 
 ******************************************************************************/
void sound3d_fn_06fd5c(void)

{
  int arg_edx;
  
  (*g_bss_003772cf)(*(undefined2 *)(arg_edx + 6),*(undefined2 *)(arg_edx + 8));
  return;
}

/******************************************************************************
 * Function : sound3d_fn_06fd80 (Original VA: 0x6fd80, Ghidra: FUN_0006fd80)
 * Prototype: longlong sound3d_fn_06fd80(void);
 * Address  : 0x6fd80 (Size: 34 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06fd80
 * Callers  : 1 -> sound3d_fn_06fbd4
 * Callees  : 1 -> sound3d_fn_06ff36
 ******************************************************************************/
longlong sound3d_fn_06fd80(void)

{
  uint uval;
  uint uval_2;
  
  uval = sound3d_fn_06ff36();
  if ((int)uval < 0) {
    return (ulonglong)uval << 0x20;
  }
  uval_2 = uval;
  if ((int)(g_data_001872b4 - 1U) < (int)uval) {
    uval_2 = g_data_001872b4 - 1U;
  }
  return CONCAT44(uval,uval_2);
}

/******************************************************************************
 * Function : sound3d_fn_06fda2 (Original VA: 0x6fda2, Ghidra: FUN_0006fda2)
 * Prototype: int sound3d_fn_06fda2(void);
 * Address  : 0x6fda2 (Size: 241 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06fda2
 * Callers  : 1 -> sound3d_fn_06fbd4
 * Callees  : 4 -> anger_fn_010c5f, anger_fn_010c85, bflib_system_io_fn_0e66ec, bflib_system_io_fn_0e69fc
 ******************************************************************************/
int sound3d_fn_06fda2(void)

{
  int arg_eax;
  int val;
  int val_2;
  undefined4 extraout_ECX;
  int val_3;
  int extraout_ECX_00;
  
  if ((*(byte *)(arg_eax + 0xc) & 1) != 0) {
    return 0x40;
  }
  val = bflib_system_io_fn_0e69fc();
  val_2 = bflib_system_io_fn_0e69fc(extraout_ECX);
  if (val_2 < val) {
    val = *(int *)(&g_data_0017a4d0 + ((val_2 << 8) / val) * 8) * val;
  }
  else {
    val_3 = 0;
    if (val_2 == 0) goto LAB_0006fe13;
    val = val_2 * *(int *)(&g_data_0017a4d0 + ((val << 8) / val_2) * 8);
  }
  val_3 = val >> 0xd;
LAB_0006fe13:
  if (val_3 < g_bss_00376550) {
    return 0x40;
  }
  bflib_system_io_fn_0e66ec();
  val = anger_fn_010c5f();
  val_2 = anger_fn_010c85();
  val = (((&g_slab_attr_table)[val_2 * val & 0x7ff] * (extraout_ECX_00 - g_bss_00376550) >> 0x10) << 6)
          / (g_data_001872b4 - g_bss_00376550) + 0x40;
  if (-1 < val) {
    if (0x7f < val) {
      return 0x7f;
    }
    return val;
  }
  return 0;
}

/******************************************************************************
 * Function : sound3d_fn_06fe93 (Original VA: 0x6fe93, Ghidra: FUN_0006fe93)
 * Prototype: undefined1 sound3d_fn_06fe93(void);
 * Address  : 0x6fe93 (Size: 163 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06fe93
 * Callers  : 1 -> sound3d_fn_06fbd4
 * Callees  : 1 -> bflib_system_io_fn_0e69fc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 sound3d_fn_06fe93(void)

{
  int val;
  int val_2;
  int arg_edx;
  int val_3;
  undefined8 uval;
  
  bflib_system_io_fn_0e69fc();
  bflib_system_io_fn_0e69fc();
  uval = bflib_system_io_fn_0e69fc();
  val = (int)((ulonglong)uval >> 0x20) + (int)uval;
  val_2 = val - *(int *)(arg_edx + 0x10);
  if (val_2 < 0) {
    val_2 = 0;
  }
  else if (0x100 < val_2) {
    val_2 = 0x100;
  }
  if (val_2 < 1) {
    *(undefined1 *)(arg_edx + 0x15) = 100;
  }
  else {
    val_3 = val_2 * 0x14 >> 0x1f;
    *(char *)(arg_edx + 0x15) =
         'd' - (char)((val_2 * 0x14 + val_3 * -0x100) - (uint)(val_3 << 7 < 0) >> 8);
  }
  if (*(char *)(arg_edx + 0x14) != *(char *)(arg_edx + 0x15)) {
    *(byte *)(arg_edx + 0x14) =
         (char)((int)((uint)*(byte *)(arg_edx + 0x15) - (uint)*(byte *)(arg_edx + 0x14)) / 2) +
         *(byte *)(arg_edx + 0x14);
  }
  g_bss_003772d3 = g_bss_003772d3 + 0x10;
  *(int *)(arg_edx + 0x10) = val;
  return *(undefined1 *)(arg_edx + 0x14);
}

/******************************************************************************
 * Function : sound3d_fn_06ff36 (Original VA: 0x6ff36, Ghidra: FUN_0006ff36)
 * Prototype: void sound3d_fn_06ff36(void);
 * Address  : 0x6ff36 (Size: 73 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound3d.cpp procedure @ 0x06ff36
 * Callers  : 2 -> sound3d_attempt_query_sample_06f98e, sound3d_fn_06fd80
 * Callees  : 1 -> bflib_system_io_fn_0e8cc8
 ******************************************************************************/
void sound3d_fn_06ff36(void)

{
  undefined2 *arg_edx;
  
  bflib_system_io_fn_0e8cc8(*arg_edx,arg_edx[2]);
  return;
}

/******************************************************************************
 * Function : sound3d_fn_06ff7f (Original VA: 0x6ff7f, Ghidra: FUN_0006ff7f)
 * Prototype: undefined8 sound3d_fn_06ff7f(void);
 * Address  : 0x6ff7f (Size: 90 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06ff7f
 * Callers  : 1 -> sound_fn_06f653
 * Callees  : 2 -> sndheap_trying_use_two_sound_06e09b, specials_fn_0701e3
 ******************************************************************************/
undefined8 sound3d_fn_06ff7f(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  byte local_18;
  
  for (local_18 = 0; (int)(uint)local_18 < g_bss_00376554; local_18 = local_18 + 1) {
    val = (uint)local_18 * 0x25;
    if (((&g_bss_0037709e)[val] != '\0') && (arg_eax == *(int *)((int)&g_bss_00377094 + val))) {
      specials_fn_0701e3();
      sndheap_trying_use_two_sound_06e09b();
      (&g_bss_0037709e)[extraout_ECX] = 0;
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound3d_fn_06ffd9 (Original VA: 0x6ffd9, Ghidra: FUN_0006ffd9)
 * Prototype: undefined8 sound3d_fn_06ffd9(void);
 * Address  : 0x6ffd9 (Size: 119 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x06ffd9
 * Callers  : 1 -> sound_fn_06f671
 * Callees  : 2 -> sndheap_trying_use_two_sound_06e09b, specials_fn_0701e3
 ******************************************************************************/
undefined8 sound3d_fn_06ffd9(void)

{
  int arg_eax;
  int val;
  int extraout_ECX;
  undefined4 arg_edx;
  byte local_18;
  
  for (local_18 = 0; (int)(uint)local_18 < g_bss_00376554; local_18 = local_18 + 1) {
    val = (uint)local_18 * 0x25;
    if (((&g_bss_0037709e)[val] != '\0') && (arg_eax == *(int *)((int)&g_bss_00377094 + val))) {
      if ((&g_bss_0037709c)[val] == -1) {
        specials_fn_0701e3();
        sndheap_trying_use_two_sound_06e09b();
        (&g_bss_0037709e)[extraout_ECX] = 0;
      }
      *(undefined4 *)((int)&g_bss_00377094 + (uint)local_18 * 0x25) = 0;
    }
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : sound3d_fn_070050 (Original VA: 0x70050, Ghidra: FUN_00070050)
 * Prototype: longlong sound3d_fn_070050(void);
 * Address  : 0x70050 (Size: 48 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x070050
 * Callers  : 1 -> sound_fn_06f5e5
 * Callees  : 0 -> 
 ******************************************************************************/
longlong sound3d_fn_070050(void)

{
  byte *byte_ptr;
  uint arg_edx;
  int val;
  
  val = 1;
  byte_ptr = &g_bss_00376584;
  while( true ) {
    if (g_data_001872b8 <= val) {
      return (ulonglong)arg_edx << 0x20;
    }
    if ((*byte_ptr & 1) == 0) break;
    byte_ptr = byte_ptr + 0x16;
    val = val + 1;
  }
  *byte_ptr = 1;
  *(short *)(byte_ptr + 2) = (short)val;
  return CONCAT44(arg_edx,val);
}

/******************************************************************************
 * Function : sound3d_fn_070080 (Original VA: 0x70080, Ghidra: FUN_00070080)
 * Prototype: void sound3d_fn_070080(void);
 * Address  : 0x70080 (Size: 32 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x070080
 * Callers  : 3 -> sound_fn_06f5e5, sound_fn_06f653, sound3d_fn_0700a0
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void sound3d_fn_070080(void)

{
  int arg_eax;
  
  if ((&g_bss_0037656e + arg_eax * 0x16 != (byte *)0x0) && (((&g_bss_0037656e)[arg_eax * 0x16] & 1) != 0))
  {
    LbScreenWaitVbi();
  }
  return;
}

/******************************************************************************
 * Function : sound3d_fn_0700a0 (Original VA: 0x700a0, Ghidra: FUN_000700a0)
 * Prototype: void sound3d_fn_0700a0(void);
 * Address  : 0x700a0 (Size: 24 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x0700a0
 * Callers  : 1 -> sound_fn_06f4c8
 * Callees  : 1 -> sound3d_fn_070080
 ******************************************************************************/
void sound3d_fn_0700a0(void)

{
  int extraout_EDX;
  
  do {
    sound3d_fn_070080();
  } while (extraout_EDX < 0x80);
  return;
}

/******************************************************************************
 * Function : sound3d_fn_0700b8 (Original VA: 0x700b8, Ghidra: FUN_000700b8)
 * Prototype: void sound3d_fn_0700b8(void);
 * Address  : 0x700b8 (Size: 52 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x0700b8
 * Callers  : 1 -> sound_fn_06f4c8
 * Callees  : 1 -> LbScreenWaitVbi
 ******************************************************************************/
void sound3d_fn_0700b8(void)

{
  undefined1 local_14;
  
  local_14 = 0;
  while (local_14 < 0x10) {
    local_14 = local_14 + 1;
    LbScreenWaitVbi();
  }
  return;
}

/******************************************************************************
 * Function : sound3d_fn_0700ec (Original VA: 0x700ec, Ghidra: FUN_000700ec)
 * Prototype: char sound3d_fn_0700ec(int param_1);
 * Address  : 0x700ec (Size: 176 bytes)
 * Module   : sound3d.cpp [address_order_boundary_interpolation]
 * Purpose  : Module sound3d.cpp procedure @ 0x0700ec
 * Callers  : 1 -> sound3d_fn_06faa0
 * Callees  : 1 -> sound3d_fn_07019c
 ******************************************************************************/
char sound3d_fn_0700ec(int param_1)

{
  int arg_eax;
  undefined4 *thing_ptr;
  int *thing_ptr_2;
  int arg_ecx;
  int val;
  char loop_i;
  uint arg_edx;
  int arg_ebx;
  char local_c;
  
  val = 0x7fffffff;
  local_c = '\x10';
  if ((arg_ecx == 2) || (arg_ecx == 3)) {
    thing_ptr = &g_bss_0037707f;
    for (loop_i = '\0'; loop_i < g_bss_00376554; loop_i = loop_i + '\x01') {
      if ((((*(char *)((int)thing_ptr + 0x1f) != '\0') && (*(int *)((int)thing_ptr + 0x15) != 0)) && /* thing->class_id */
          (*(short *)(*(int *)((int)thing_ptr + 0x15) + 2) == *(short *)(arg_ebx + 2))) &&
         ((*(short *)(thing_ptr + 2) == arg_eax && (*(byte *)((int)thing_ptr + 10) == arg_edx)))) {
        return loop_i;
      }
      thing_ptr = (undefined4 *)((int)thing_ptr + 0x25);
    }
  }
  thing_ptr_2 = &g_bss_0037707f;
  for (loop_i = '\0'; loop_i < g_bss_00376554; loop_i = loop_i + '\x01') {
    if (*(char *)((int)thing_ptr_2 + 0x1f) == '\0') { /* thing->class_id */
      return loop_i;
    }
    if (*thing_ptr_2 < val) {
      val = *thing_ptr_2;
      local_c = loop_i;
    }
    thing_ptr_2 = (int *)((int)thing_ptr_2 + 0x25);
  }
  if ((val <= param_1) && (val < param_1)) {
    sound3d_fn_07019c();
    return local_c;
  }
  return -1;
}

/******************************************************************************
 * Function : sound3d_fn_07019c (Original VA: 0x7019c, Ghidra: FUN_0007019c)
 * Prototype: void sound3d_fn_07019c(void);
 * Address  : 0x7019c (Size: 38 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound3d.cpp procedure @ 0x07019c
 * Callers  : 2 -> sound3d_attempt_query_sample_06f98e, sound3d_fn_0700ec
 * Callees  : 2 -> sndheap_trying_use_two_sound_06e09b, specials_fn_0701ed
 ******************************************************************************/
void sound3d_fn_07019c(void)

{
  char arg_al;
  
  (&g_bss_0037709e)[arg_al * 0x25] = 0;
  specials_fn_0701ed();
  sndheap_trying_use_two_sound_06e09b();
  return;
}

/******************************************************************************
 * Function : sound3d_fn_0701c2 (Original VA: 0x701c2, Ghidra: FUN_000701c2)
 * Prototype: void sound3d_fn_0701c2(void);
 * Address  : 0x701c2 (Size: 33 bytes)
 * Module   : sound3d.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Module sound3d.cpp procedure @ 0x0701c2
 * Callers  : 1 -> sound3d_attempt_query_sample_06f98e
 * Callees  : 0 -> 
 ******************************************************************************/
void sound3d_fn_0701c2(void)

{
  undefined4 *word_ptr;
  byte loop_i;
  
  word_ptr = &g_bss_0037707f;
  for (loop_i = 0; (int)(uint)loop_i < g_bss_00376554; loop_i = loop_i + 1) {
    word_ptr[1] = word_ptr[1] + 1;
    word_ptr = (undefined4 *)((int)word_ptr + 0x25);
  }
  return;
}

