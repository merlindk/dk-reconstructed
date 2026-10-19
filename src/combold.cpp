/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: combold.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 5
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : combold_fn_0171cc (Original VA: 0x171cc, Ghidra: FUN_000171cc)
 * Prototype: void combold_fn_0171cc(void);
 * Address  : 0x171cc (Size: 24 bytes)
 * Module   : combold.cpp [address_order_boundary_interpolation]
 * Purpose  : Module combold.cpp procedure @ 0x0171cc
 * Callers  : 1 -> combold_update_creature_control_017381
 * Callees  : 1 -> creature_fn_07f8e0
 ******************************************************************************/
void combold_fn_0171cc(void)

{
  creature_fn_07f8e0(0,0);
  return;
}

/******************************************************************************
 * Function : combold_thing_stuck_finding_melee_0171e4 (Original VA: 0x171e4, Ghidra: FUN_000171e4)
 * Prototype: undefined4 combold_thing_stuck_finding_melee_0171e4(void);
 * Address  : 0x171e4 (Size: 413 bytes)
 * Module   : combold.cpp [direct_file_string_xref]
 * OrigLine : combold.cpp lines 84
 * Purpose  : String 'THING STUCK FINDING A MELEE POS - COUNT =%d'
 * Callers  : 1 -> combold_update_creature_control_017381
 * Callees  : 8 -> anger_fn_010c1a, anger_fn_010c5f, ceiling_process_map_subtile_07dbc0, move_process_map_subtile_0b28e8, move_process_map_subtile_0b39e4, move_fn_0b3be4, LbErrorLog, dk_sprintf
 ******************************************************************************/
undefined4 combold_thing_stuck_finding_melee_0171e4(void)

{
  ushort uval;
  ushort uval_2;
  short short_val;
  int arg_eax;
  int val;
  int val_2;
  undefined1 arg_cl;
  int arg_edx;
  int arg_ebx;
  int val_3;
  undefined4 local_1c;
  int local_10;
  
  local_10 = 0;
  local_1c = *(undefined4 *)(arg_eax + 0xd);
  val_3 = arg_ebx + ((uint)*(ushort *)(arg_eax + 0x56) + (uint)*(ushort *)(arg_edx + 0x56)) / 2;
  do {
    val = anger_fn_010c1a();
    do {
      val = (int)((val + (val >> 0x1f) * -0x80) - (uint)((val >> 0x1f) << 6 < 0)) >> 7;
      uval = (short)local_1c + (char)(&g_data_00174bac)[val * 2] * 0x80;
      uval_2 = local_1c._2_2_ + (char)(&g_data_00174bad)[val * 2] * 0x80;
      move_process_map_subtile_0b28e8();
      short_val = (short)val_3;
      if ((int)(uint)uval < (int)((uint)*(ushort *)(arg_edx + 0xd) - val_3)) {
        uval = *(short *)(arg_edx + 0xd) - short_val;
      }
      else if ((int)((uint)*(ushort *)(arg_edx + 0xd) + val_3) < (int)(uint)uval) {
        uval = *(short *)(arg_edx + 0xd) + short_val;
      }
      if ((int)(uint)uval_2 < (int)((uint)*(ushort *)(arg_edx + 0xf) - val_3)) {
        uval_2 = *(short *)(arg_edx + 0xf) - short_val;
      }
      else if ((int)((uint)*(ushort *)(arg_edx + 0xf) + val_3) < (int)(uint)uval_2) {
        uval_2 = *(short *)(arg_edx + 0xf) + short_val;
      }
      local_1c = CONCAT22(uval_2,uval);
      val = anger_fn_010c1a();
      val_2 = anger_fn_010c5f();
    } while (val_2 < 0x80);
    val = ceiling_process_map_subtile_07dbc0();
  } while (((val != 0) ||
           (((&g_bss_002e9125)[(uint)*(byte *)(arg_eax + 0x1a) * 0xe6] != '\0' &&
            (val = move_process_map_subtile_0b39e4(), val != 0)))) && (local_10 = local_10 + 1, local_10 < 0x12));
  if (local_10 == 0x12) {
    dk_sprintf(&g_log_sprintf_buf,s_THING_STUCK_FINDING_A_MELEE_POS___00160678,0x12);
    LbErrorLog(); /* LbErrorLog("combold.cpp", line 84, g_log_buf) */
  }
  else {
    short_val = move_fn_0b3be4();
    if (short_val != 0) {
      *(undefined1 *)(arg_eax + 8) = arg_cl;
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : combold_update_creature_control_017381 (Original VA: 0x17381, Ghidra: FUN_00017381)
 * Prototype: undefined4 combold_update_creature_control_017381(void);
 * Address  : 0x17381 (Size: 100 bytes)
 * Module   : combold.cpp [callgraph_affinity_to_preceding_unit]
 * Purpose  : Accesses CreatureControl state in g_creature_ctrl_ptrs
 * Callers  : 1 -> combmove_update_creature_control_0169a5
 * Callees  : 3 -> anger_fn_010010, combold_fn_0171cc, combold_thing_stuck_finding_melee_0171e4
 ******************************************************************************/
undefined4 combold_update_creature_control_017381(void)

{
  int cctrl_ptr;
  int thing;
  int val;
  undefined4 uval;
  
  cctrl_ptr = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  if ((*(byte *)(cctrl_ptr + 3) & 0x10) == 0) {
    val = combold_fn_0171cc();
    if (val != 0) {
      *(undefined1 *)(cctrl_ptr + 0xaa) = 0;
      uval = combold_thing_stuck_finding_melee_0171e4();
      return uval;
    }
    *(undefined1 *)(cctrl_ptr + 0xaa) = 1;
  }
  anger_fn_010010();
  return 0;
}

/******************************************************************************
 * Function : combold_update_creature_and_thing_0174b0 (Original VA: 0x174b0, Ghidra: FUN_000174b0)
 * Prototype: int combold_update_creature_and_thing_0174b0(void);
 * Address  : 0x174b0 (Size: 330 bytes)
 * Module   : combold.cpp [address_order_boundary_interpolation]
 * Purpose  : Accesses CreatureControl (g_creature_ctrl_ptrs) and Thing (g_thing_ptrs)
 * Callers  : 2 -> combchk_update_creature_control_0162f2, combold_process_thing_entity_0175fa
 * Callees  : 3 -> combchk_fn_016175, combtool_update_creature_control_0173e8, combtool_fn_0189d4
 ******************************************************************************/
int combold_update_creature_and_thing_0174b0(void)

{
  undefined4 thing_ptr;
  int thing;
  int val;
  int val_2;
  undefined4 *arg_edx;
  int *arg_ebx;
  int *int_ptr;
  int *int_ptr_2;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  int aiStack_50 [5];
  undefined4 *local_3c;
  undefined4 local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_14;
  
  int_ptr = aiStack_50 + 2;
  local_20 = (&g_creature_ctrl_ptrs)[*(ushort *)(thing + 100)]; /* thing->ccontrol_idx */
  local_14 = 0;
  local_3c = arg_edx;
  if (*(char *)(local_20 + 0x1b) != '\0') {
    aiStack_50[3] = local_20 + 8;
    int_ptr_2 = aiStack_50 + 2;
    local_1c = local_20;
    do {
      int_ptr = int_ptr_2;
      if (*(ushort *)(local_1c + 0xb) != 0) {
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(local_1c + 0xb)];
        *(undefined4 *)((int)int_ptr_2 + -4) = 0x17515;
        aiStack_50[4] = combtool_fn_0189d4();
        *(undefined4 *)((int)int_ptr_2 + -4) = 0;
        *(undefined4 *)((int)int_ptr_2 + -8) = 0x17526;
        val = combchk_fn_016175();
        int_ptr = (int *)((int)int_ptr_2 + -4);
        if (0 < val) {
          *(undefined4 *)((int)int_ptr_2 + -8) = 0x1753c;
          val_2 = combtool_update_creature_control_0173e8();
          int_ptr = (int *)((int)int_ptr_2 + -4);
          if (local_14 < val_2) {
            int_ptr = (int *)((int)int_ptr_2 + -4);
            local_2c = thing_ptr;
            local_28 = val;
            local_14 = val_2;
          }
        }
      }
      local_1c = local_1c + 2;
      int_ptr_2 = int_ptr;
    } while (local_1c != aiStack_50[3]);
    if (local_14 != 0) goto LAB_00017558;
  }
  if (*(char *)(local_20 + 0x1c) != '\0') {
    aiStack_50[2] = local_20 + 8;
    word_ptr_2 = (undefined1 *)int_ptr;
    do {
      word_ptr = word_ptr_2;
      if (*(ushort *)(local_20 + 0x13) != 0) {
        thing_ptr = (&g_thing_ptrs)[*(ushort *)(local_20 + 0x13)];
        *(undefined4 *)(word_ptr_2 + -4) = 0x175b1;
        combtool_fn_0189d4();
        *(undefined4 *)(word_ptr_2 + -4) = 0;
        *(undefined4 *)(word_ptr_2 + -8) = 0x175c1;
        val = combchk_fn_016175();
        word_ptr = word_ptr_2 + -4;
        if (0 < val) {
          *(undefined4 *)(word_ptr_2 + -8) = 0x175d6;
          val_2 = combtool_update_creature_control_0173e8();
          word_ptr = word_ptr_2 + -4;
          if (local_14 < val_2) {
            word_ptr = word_ptr_2 + -4;
            local_2c = thing_ptr;
            local_28 = val;
            local_14 = val_2;
          }
        }
      }
      local_20 = local_20 + 2;
      word_ptr_2 = word_ptr;
    } while (local_20 != aiStack_50[2]);
    if (local_14 != 0) {
LAB_00017558:
      *local_3c = local_2c;
      *arg_ebx = local_14;
      return local_28;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : combold_process_thing_entity_0175fa (Original VA: 0x175fa, Ghidra: FUN_000175fa)
 * Prototype: int combold_process_thing_entity_0175fa(void);
 * Address  : 0x175fa (Size: 204 bytes)
 * Module   : combold.cpp [address_order_boundary_interpolation]
 * Purpose  : Looks up Thing* in g_thing_ptrs[2048] and updates state
 * Callers  : 2 -> combtool_update_creature_control_01829f, combtool_update_creature_control_018938
 * Callees  : 6 -> combchk_update_creature_and_thing_015ef2, combchk_update_creature_control_015f21, combchk_fn_016175, combtool_update_creature_control_0173e8, combold_update_creature_and_thing_0174b0, combtool_fn_0189d4
 ******************************************************************************/
int combold_process_thing_entity_0175fa(void)

{
  int thing_ptr;
  int val;
  int *arg_edx;
  undefined1 *word_ptr;
  int *int_ptr;
  uint uval;
  int aiStack_34 [5];
  undefined4 local_20;
  int *local_1c;
  int local_18;
  
  int_ptr = aiStack_34 + 2;
  aiStack_34[3] = 0;
  local_1c = arg_edx;
  aiStack_34[4] = combold_update_creature_and_thing_0174b0();
  uval = g_bss_002e6eb6;
  if (aiStack_34[4] < 1) {
    while (thing_ptr = (&g_thing_ptrs)[uval], thing_ptr != g_thing_ptrs) {
      *(undefined4 *)((int)int_ptr + -4) = 0x17655;
      val = combchk_update_creature_control_015f21();
      word_ptr = (undefined1 *)int_ptr;
      if (val != 0) {
        *(undefined4 *)((int)int_ptr + -4) = 0x17662;
        val = combchk_update_creature_and_thing_015ef2();
        if (val == 0) {
          *(undefined4 *)((int)int_ptr + -4) = 0x1766f;
          local_20 = combtool_fn_0189d4();
          *(undefined4 *)((int)int_ptr + -4) = 0;
          *(undefined4 *)((int)int_ptr + -8) = 0x17681;
          local_18 = combchk_fn_016175();
          word_ptr = (undefined1 *)((int)int_ptr + -4);
          if (0 < local_18) {
            *(undefined4 *)((int)int_ptr + -8) = 0x17696;
            val = combtool_update_creature_control_0173e8();
            word_ptr = (undefined1 *)((int)int_ptr + -4);
            if (aiStack_34[3] < val) {
              aiStack_34[4] = local_18;
              word_ptr = (undefined1 *)((int)int_ptr + -4);
              aiStack_34[2] = thing_ptr;
              aiStack_34[3] = val;
            }
          }
        }
      }
      int_ptr = (int *)word_ptr;
      uval = (uint)*(ushort *)(thing_ptr + 0x67);
    }
    if (aiStack_34[3] == 0) {
      aiStack_34[4] = 0;
    }
    else {
      *local_1c = aiStack_34[2];
    }
  }
  else {
    *local_1c = aiStack_34[2];
  }
  return aiStack_34[4];
}

