/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: bflib/bflib_network.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 81
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : lbnet_bullfrog_net_library_version_0ed04c (Original VA: 0xed04c, Ghidra: FUN_000ed04c)
 * Prototype: void lbnet_bullfrog_net_library_version_0ed04c(void);
 * Address  : 0xed04c (Size: 86 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'BULLFROG NET LIBRARY VERSION %f FOR %s LAST BUILT __DATE__'
 * Callers  : 0 -> 
 * Callees  : 1 -> dk_sprintf
 ******************************************************************************/
void lbnet_bullfrog_net_library_version_0ed04c(void)

{
  char ch;
  int arg_eax;
  int extraout_EDX;
  char *str_ptr;
  char *str_ptr_2;
  char local_34 [40];
  
  str_ptr_2 = local_34;
  if (arg_eax != 0) {
    str_ptr = &g_data_0016d35a; /* 0x16d35a="DOS" */
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    dk_sprintf();
    *(undefined4 *)(extraout_EDX + 0x50) = 0x3f8ccccd;
  }
  return;
}

/******************************************************************************
 * Function : lbnet_fn_0ed0e8 (Original VA: 0xed0e8, Ghidra: FUN_000ed0e8)
 * Prototype: uint lbnet_fn_0ed0e8(void);
 * Address  : 0xed0e8 (Size: 158 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : Module bflib/bflib_network.cpp procedure @ 0x0ed0e8
 * Callers  : 1 -> frontnet_LbNetwork_EnumerateServices_033ead
 * Callees  : 0 -> 
 ******************************************************************************/
uint lbnet_fn_0ed0e8(void)

{
  char ch;
  code *arg_eax;
  uint uval;
  char *str_ptr;
  char *str_ptr_2;
  undefined1 *local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 local_58;
  char local_57 [51];
  code *local_24;
  code *local_1c;
  code *local_14;
  
  local_60 = &local_58;
  str_ptr = s_Serial_0016d3e0;
  str_ptr_2 = local_57;
  local_14 = arg_eax;
  do {
    ch = *str_ptr;
    *str_ptr_2 = ch;
    if (ch == '\0') break;
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
  } while (ch != '\0');
  str_ptr = s_Modem_0016d3e7;
  str_ptr_2 = local_57;
  uStack_64 = 0xed12b;
  (*local_14)();
  do {
    ch = *str_ptr;
    *str_ptr_2 = ch;
    if (ch == '\0') break;
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
  } while (ch != '\0');
  str_ptr = &g_data_0016d3ed; /* 0x16d3ed="IPX" */
  str_ptr_2 = (char *)((int)&local_60 + 1);
  local_68 = (undefined1 *)&local_60;
  (*local_1c)();
  do {
    ch = *str_ptr;
    *str_ptr_2 = ch;
    if (ch == '\0') break;
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
  } while (ch != '\0');
  uval = (*local_24)(&local_68);
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : LbNetwork_Init_0ed4e0 (Original VA: 0xed4e0, Ghidra: FUN_000ed4e0)
 * Prototype: undefined8 LbNetwork_Init_0ed4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5,undefined4 param_6,int param_7,char *param_8,undefined4 param_9);
 * Address  : 0xed4e0 (Size: 873 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: LbNetwork_Init() failure on compositeBuffer allo'
 * Callers  : 3 -> frontnet_fn_03315b, bflib_system_io_requested_servicetype_out_range_0ed1b0, bflib_system_io_requested_servicetype_out_range_0ed354
 * Callees  : 8 -> LbScreenWaitVbi, LbFileLoadAt, LbNetLog, bflib_system_io_fn_0ff040, lbnet_GenericSerialInit_1008d0, lbnet_GenericModemInit_101158, bflib_system_io_fn_1012c0, lbnet_Init_1031e8
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
LbNetwork_Init_0ed4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6,int param_7,char *param_8,undefined4 param_9)

{
  undefined4 uval;
  int val;
  int val_2;
  char extraout_CL;
  char extraout_CL_00;
  char ch;
  char extraout_CL_01;
  uint extraout_ECX;
  undefined1 extraout_DH;
  uint uval_2;
  uint uval_3;
  undefined4 *word_ptr;
  char *str_ptr;
  char *str_ptr_2;
  byte flag;
  undefined4 auStackY_1824 [1519];
  undefined4 uStack_64;
  char *pcStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined **ppuStack_50;
  char *pcStack_4c;
  undefined4 local_48;
  undefined4 local_44 [3];
  int local_38;
  byte local_34;
  char local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c;
  
  flag = 0;
  word_ptr = &local_48;
  g_net_exchange_packet_size = param_7;
  g_net_max_players = param_5;
  local_2c = g_bss_003d97d0;
  local_24 = 0;
  g_data_0019556c = 0xfa;
  g_net_bss_003dd86c = 0;
  g_net_bss_003dd870 = 0;
  g_net_composite_buffer_ptr = 0;
  g_net_bss_003dd8a4 = 0;
  g_net_bss_003dd874 = 0;
  g_net_bss_003dd8ac = 0;
  g_net_bss_003dd87c = 0;
  g_bss_003d97d0 = &local_2c;
  g_net_bss_003dd880 = 0;
  PTR_FUN_000ef14c_00195580 = lbnet_UserDataMsgCallback_0ef14c;
  local_28 = &g_data_0017459c;
  g_data_00195594 = 0;
  local_1c = 0xff;
  g_net_exchange_buffer_ptr = param_6;
  PTR_FUN_000ef7a8_00195584 = lbnet_RequestExchangeDataMsgCallback_0ef7a8;
  g_net_bss_003dd864 = param_8;
  if (param_7 != 0) {
    g_net_bss_003dd880 = param_5 * param_7;
    pcStack_4c = (char *)0xed5a6;
    g_net_bss_003dd870 = LbFileLoadAt();
    if (g_net_bss_003dd870 == 0) {
      pcStack_4c = s_WARNING_network__LbNetwork_Init__0016d41f;
      ppuStack_50 = (undefined **)0xed5b9;
      uval = LbNetLog();
      uval = CONCAT31((int3)((uint)uval >> 8),0xff);
      goto LAB_000ed68b;
    }
  }
  pcStack_4c = (char *)0xed5d4;
  LbScreenWaitVbi();
  uval_3 = g_net_max_players;
  uval_2 = 0;
  if (g_net_max_players != 0) {
    val_2 = 0;
    do {
      uval_2 = uval_2 + 1;
      *(undefined4 *)((int)&g_net_bss_003dd8b4 + val_2) = 0;
      val_2 = val_2 + 0x2c;
    } while (uval_2 < uval_3);
  }
  uval_3 = 0;
  if (g_net_max_players != 0) {
    do {
      str_ptr_2 = g_net_bss_003dd864;
      str_ptr = &g_data_0016d46a;
      uval_3 = uval_3 + 1;
      str_ptr_2[0x20] = '\0';
      str_ptr_2[0x21] = '\0';
      str_ptr_2[0x22] = '\0';
      str_ptr_2[0x23] = '\0';
      do {
        ch = *str_ptr;
        *str_ptr_2 = ch;
        if (ch == '\0') break;
        ch = str_ptr[1];
        str_ptr = str_ptr + 2;
        str_ptr_2[1] = ch;
        str_ptr_2 = str_ptr_2 + 2;
      } while (ch != '\0');
    } while (uval_3 < g_net_max_players);
  }
  if (extraout_ECX == 0) {
    pcStack_4c = s_Selecting_DOS_Serial_SP_0016d46b;
    ppuStack_50 = (undefined **)0xed64c;
    LbNetLog();
    pcStack_4c = (char *)param_9;
    ppuStack_50 = (undefined **)param_4;
    uStack_54 = param_3;
    uStack_58 = param_2;
    word_ptr = &uStack_5c;
    uStack_5c = param_1;
    pcStack_60 = (char *)0xed66d;
    uval = lbnet_GenericSerialInit_1008d0();
    if ((char)uval == '\0') {
      local_30 = (char)uval;
      word_ptr = &uStack_5c;
    }
    else {
      pcStack_60 = s_WARNING_network__LbNetwork_Init__0016d484;
      uStack_64 = 0xed684;
      uval = LbNetLog();
    }
  }
  else if (extraout_ECX < 2) {
    pcStack_4c = s_Selecting_DOS_Modem_SP_0016d4c8;
    ppuStack_50 = (undefined **)0xed6ab;
    LbNetLog();
    pcStack_4c = (char *)param_9;
    ppuStack_50 = (undefined **)param_4;
    uStack_54 = param_3;
    uStack_58 = param_2;
    uStack_5c = param_1;
    pcStack_60 = (char *)0xed6cc;
    uval = lbnet_GenericModemInit_101158();
    if ((char)uval == '\0') {
      local_30 = (char)uval;
      word_ptr = &uStack_5c;
    }
    else {
      pcStack_60 = s_WARNING_network__LbNetwork_Init__0016d4e0;
      uStack_64 = 0xed6e0;
      uval = LbNetLog();
      word_ptr = &uStack_5c;
    }
  }
  else if (extraout_ECX == 2) {
    pcStack_4c = s_Selecting_DOS_IPX_SP_0016d523;
    ppuStack_50 = (undefined **)0xed6f7;
    LbNetLog();
    local_48 = param_1;
    local_44[(uint)flag * -2] = (&param_2)[(uint)flag * -2];
    local_44[(uint)flag * -2 + (uint)flag * -2 + 1] =
         (&param_3)[(uint)flag * -2 + (uint)flag * -2];
    (local_44 + (uint)flag * -2 + (uint)flag * -2 + 1)[(uint)flag * -2 + 1] =
         (&param_3 + (uint)flag * -2 + (uint)flag * -2)[(uint)flag * -2 + 1];
    if (g_net_service_provider_ptr != 0) {
      pcStack_4c = (char *)0xed715;
      (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x1c))();
      if (g_net_service_provider_ptr != 0) {
        pcStack_4c = (char *)0xed72b;
        (*(code *)**(undefined4 **)(g_net_service_provider_ptr + 0xd7c))();
      }
      g_net_service_provider_ptr = 0;
    }
    pcStack_4c = (char *)0xed73d;
    val = LbFileLoadAt();
    val_2 = 0;
    ch = extraout_CL;
    if (val != 0) {
      local_24 = 1;
      local_34 = 0;
      pcStack_4c = (char *)0xed767;
      local_38 = val;
      local_20 = val;
      bflib_system_io_fn_0ff040();
      local_24 = 3;
      pcStack_4c = (char *)0xed775;
      val_2 = bflib_system_io_fn_1012c0();
      *(undefined4 *)(val_2 + 0x723) = 0;
      *(undefined4 *)(val_2 + 0x727) = 0;
      *(undefined1 *)(val_2 + 0x72b) = extraout_DH;
      *(undefined ***)(val_2 + -4) = &PTR_FUN_00103134_00174668;
      val_2 = val_2 + -0xd80;
      local_24 = 0;
      local_34 = local_34 | 0x10;
      ch = extraout_CL_00;
    }
    uval = 0;
    word_ptr = &local_48;
    g_net_service_provider_ptr = val_2;
    if (val_2 != 0) {
      pcStack_4c = (char *)0x0;
      ppuStack_50 = &PTR_FUN_000ef460_00195570;
      uStack_54 = 0;
      uStack_58 = local_44[2];
      uStack_5c = local_44[1];
      pcStack_60 = (char *)local_44[0];
      word_ptr = &uStack_64;
      uStack_64 = local_48;
      uval = (**(code **)(*(int *)(val_2 + 0xd7c) + 0x18))();
      if ((char)uval == '\0') {
        ch = '\0';
        word_ptr = &uStack_64;
      }
      else {
        uval = LbNetLog(s_WARNING_network__GenericIPXInit__0016d539);
        ch = extraout_CL_01;
      }
    }
    if (ch == '\0') {
      *(undefined1 *)((int)word_ptr + 0x2c) = 0;
    }
    else {
      *(char **)((int)word_ptr + -4) = s_WARNING_network__LbNetwork_Init__0016d581;
      *(undefined4 *)((int)word_ptr + -8) = 0xed810;
      uval = LbNetLog();
    }
  }
  else {
    ppuStack_50 = (undefined **)s_The_serviceIndex_value_of__d_is_o_0016d5c2;
    uStack_54 = 0xed841;
    uval = LbNetLog();
    word_ptr = &local_48;
  }
  uval = CONCAT31((int3)((uint)uval >> 8),*(undefined1 *)((int)word_ptr + 0x2c));
LAB_000ed68b:
  g_bss_003d97d0 = (undefined4 *)*(undefined4 *)((int)word_ptr + 0x1c);
  return CONCAT44(*(undefined4 *)((int)word_ptr + 0x3c),uval);
}

/******************************************************************************
 * Function : LbNetwork_Create_0ed84c (Original VA: 0xed84c, Ghidra: FUN_000ed84c)
 * Prototype: undefined1 LbNetwork_Create_0ed84c(void);
 * Address  : 0xed84c (Size: 467 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'ERROR::LbNetwork_Create ServiceProvider ptr is NULL'
 * Callers  : 1 -> frontnet_fn_034a8a
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined1 LbNetwork_Create_0ed84c(void)

{
  char ch;
  char ch_2;
  uint extraout_ECX;
  uint uval;
  int val;
  uint *arg_ebx;
  int val_2;
  char *str_ptr;
  char *str_ptr_2;
  undefined1 local_14;
  
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__LbNetwork_Create_ServiceP_0016d5f0);
    local_14 = 0xff;
  }
  else {
    if (g_net_bss_003dd8ac != 0) {
      g_net_local_player_id = 0;
      g_net_bss_003dd888 = 0;
      g_bss_003e0250 = 1;
      g_bss_003e024c = 1;
    }
    ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 8))();
    if (ch == '\0') {
      ch = -1;
      if (g_net_service_provider_ptr == 0) {
        LbNetLog(s_ERROR__GetCurrentPlayers_Service_0016d625);
      }
      else {
        g_net_bss_003dd888 = g_net_max_players;
        ch = -1;
        LbNetLog(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
        ch_2 = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x14))();
        if (ch_2 == '\0') {
          if (g_net_bss_003dd888 < g_net_max_players) {
            ch = '\0';
          }
          else {
            LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d679,g_net_max_players);
          }
        }
        else {
          LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d6cd);
        }
      }
      if (ch == '\0') {
        *arg_ebx = g_net_bss_003dd888;
        LbNetLog(s_CALLING_GET_PLAYER_INFO_0016d71d);
        if (g_net_max_players != 0) {
          val = 0;
          val_2 = 0;
          uval = extraout_ECX;
          do {
            if (*(int *)((int)&g_net_bss_003dd8b4 + val_2) == 0) {
              *(undefined4 *)(val + 0x20 + g_net_bss_003dd864) = 0;
            }
            else {
              str_ptr_2 = (char *)(g_net_bss_003dd864 + val);
              str_ptr = &g_net_bss_003dd8bc + val_2;
              str_ptr_2[0x20] = '\x01';
              str_ptr_2[0x21] = '\0';
              str_ptr_2[0x22] = '\0';
              str_ptr_2[0x23] = '\0';
              do {
                ch = *str_ptr;
                *str_ptr_2 = ch;
                if (ch == '\0') break;
                ch = str_ptr[1];
                str_ptr = str_ptr + 2;
                str_ptr_2[1] = ch;
                str_ptr_2 = str_ptr_2 + 2;
              } while (ch != '\0');
            }
            val = val + 0x24;
            uval = uval + 1;
            val_2 = val_2 + 0x2c;
          } while (uval < g_net_max_players);
        }
        if (g_net_service_provider_ptr == 0) {
          return 0;
        }
        LbNetLog(s_NEW_PLAYERS_ARE_ALLOWED_TO_JOIN_0016d39a);
        (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x24))();
        return 0;
      }
      str_ptr = s_WARNING_network__LbNetwork_Creat_0016d737;
    }
    else {
      str_ptr = s_WARNING_network__LbNetwork_Creat_0016d77d;
    }
    LbNetLog(str_ptr);
  }
  return local_14;
}

/******************************************************************************
 * Function : LbNetwork_Join_0eda20 (Original VA: 0xeda20, Ghidra: FUN_000eda20)
 * Prototype: undefined1 LbNetwork_Join_0eda20(void);
 * Address  : 0xeda20 (Size: 589 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'ERROR::LbNetwork_Join ServiceProvider ptr is NULL'
 * Callers  : 1 -> frontnet_fn_0349d9
 * Callees  : 5 -> LbTimerClock, LbNetLog, lbnet_EncodeMessageStub_0ff894, lbnet_Receive_0ffb54, lbnet_Send_1002dc
 ******************************************************************************/
undefined1 LbNetwork_Join_0eda20(void)

{
  char ch;
  int clock_ms;
  int clock_ms_2;
  uint extraout_ECX;
  uint uval;
  char extraout_DH;
  uint *arg_ebx;
  char *str_ptr;
  char *str_ptr_2;
  char local_10;
  
  clock_ms = LbTimerClock();
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__LbNetwork_Join_ServicePro_0016d7bb);
  }
  else {
    if (g_net_bss_003dd8ac != 0) {
      g_bss_003e0250 = 0;
      g_bss_003e024c = 0;
      g_net_local_player_id = 1;
      g_net_bss_003dd888 = 1;
    }
    g_net_composite_buffer_ptr = 0xf;
    ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 4))();
    if (ch == '\0') {
      if (g_net_bss_003dd8ac == 0) {
        lbnet_EncodeMessageStub_0ff894();
        g_bss_003de250 = 0;
        lbnet_Send_1002dc();
        g_net_bss_003dd87c = 1;
        do {
          lbnet_Receive_0ffb54();
          if ((g_net_bss_003dd87c != 0) && (clock_ms_2 = LbTimerClock(), 10000 < (uint)(clock_ms_2 - clock_ms))) {
            g_net_bss_003dd87c = 0;
            return 0xff;
          }
        } while (g_net_bss_003dd87c != 0);
      }
      local_10 = -1;
      if (g_net_service_provider_ptr == 0) {
        LbNetLog(s_ERROR__GetCurrentPlayers_Service_0016d625);
        local_10 = extraout_DH;
      }
      else {
        g_net_bss_003dd888 = g_net_max_players;
        LbNetLog(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
        ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x14))();
        if (ch == '\0') {
          if (g_net_bss_003dd888 < g_net_max_players) {
            local_10 = '\0';
          }
          else {
            LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d679,g_net_max_players);
          }
        }
        else {
          LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d6cd);
        }
      }
      if (local_10 == '\0') {
        *arg_ebx = g_net_bss_003dd888;
        LbNetLog(s_CALLING_GET_PLAYER_INFO_0016d71d);
        if (g_net_max_players == 0) {
          return 0;
        }
        clock_ms = 0;
        clock_ms_2 = 0;
        uval = extraout_ECX;
        do {
          if (*(int *)((int)&g_net_bss_003dd8b4 + clock_ms_2) == 0) {
            *(undefined4 *)(clock_ms + 0x20 + g_net_bss_003dd864) = 0;
          }
          else {
            str_ptr_2 = (char *)(g_net_bss_003dd864 + clock_ms);
            str_ptr = &g_net_bss_003dd8bc + clock_ms_2;
            str_ptr_2[0x20] = '\x01';
            str_ptr_2[0x21] = '\0';
            str_ptr_2[0x22] = '\0';
            str_ptr_2[0x23] = '\0';
            do {
              ch = *str_ptr;
              *str_ptr_2 = ch;
              if (ch == '\0') break;
              ch = str_ptr[1];
              str_ptr = str_ptr + 2;
              str_ptr_2[1] = ch;
              str_ptr_2 = str_ptr_2 + 2;
            } while (ch != '\0');
          }
          clock_ms = clock_ms + 0x24;
          uval = uval + 1;
          clock_ms_2 = clock_ms_2 + 0x2c;
          if (g_net_max_players <= uval) {
            return 0;
          }
        } while( true );
      }
      str_ptr = s_WARNING_network__LbNetwork_Join__0016d838;
    }
    else {
      str_ptr = s_WARNING_network__LbNetwork_Join__0016d87c;
    }
    LbNetLog(str_ptr);
  }
  return 0xff;
}

/******************************************************************************
 * Function : LbNetwork_Stop_0edc70 (Original VA: 0xedc70, Ghidra: FUN_000edc70)
 * Prototype: undefined8 LbNetwork_Stop_0edc70(void);
 * Address  : 0xedc70 (Size: 283 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'INSIDE LbNetwork_Stop'
 * Callers  : 9 -> frontnet_LbNetwork_Stop_033bcc, frontnet_LbNetwork_Stop_033bfb, frontnet_LbNetwork_Exchange_035758, frontnet_LbNetwork_Stop_035d29, fronttor_LbNetwork_Exchange_036a59, inits_update_creature_and_thing_0462a3, packet_update_pause_mode_state, update_update_player_view_state_0dd894 ...
 * Callees  : 3 -> LbScreenWaitVbi, bflib_system_io_fn_0e94b0, LbNetLog
 ******************************************************************************/
undefined8 LbNetwork_Stop_0edc70(void)

{
  char ch;
  undefined4 net_status;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uval;
  undefined4 arg_edx;
  
  LbNetLog(s_INSIDE_LbNetwork_Stop_0016d8b1);
  if (g_net_service_provider_ptr == 0) {
    net_status = LbNetLog(s_ERROR__LbNetwork_Stop_ServicePro_0016d8c8);
    uval = extraout_CL;
  }
  else {
    ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x1c))();
    if (ch != '\0') {
      LbNetLog(s_WARNING_network__LbNetwork_Stop__0016d8fb);
    }
    if (g_net_service_provider_ptr != 0) {
      (*(code *)**(undefined4 **)(g_net_service_provider_ptr + 0xd7c))();
    }
    g_net_service_provider_ptr = 0;
    if (g_net_bss_003dd870 != 0) {
      bflib_system_io_fn_0e94b0();
    }
    g_net_bss_003dd868 = 0;
    g_net_bss_003dd86c = 0;
    g_net_bss_003dd870 = 0;
    g_net_bss_003dd874 = 0;
    g_net_bss_003dd878 = 0;
    g_net_bss_003dd87c = 0;
    g_net_bss_003dd880 = 0;
    g_net_max_players = 0;
    g_net_bss_003dd888 = 0;
    g_net_local_player_id = 0;
    g_net_bss_003dd890 = 0;
    g_net_exchange_buffer_ptr = 0;
    g_net_exchange_packet_size = 0;
    g_net_composite_buffer_ptr = 0;
    g_net_service_provider_ptr = 0;
    g_data_0019556c = 0xfa;
    g_net_bss_003dd8a4 = 0;
    g_net_host_player_id = 0;
    g_net_bss_003dd8ac = 0;
    net_status = LbScreenWaitVbi();
    g_bss_003dde30 = 0;
    uval = extraout_CL_00;
  }
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)net_status >> 8),uval));
}

/******************************************************************************
 * Function : LbNetwork_EnumerateSessions_0edd8c (Original VA: 0xedd8c, Ghidra: FUN_000edd8c)
 * Prototype: undefined1 LbNetwork_EnumerateSessions_0edd8c(void);
 * Address  : 0xedd8c (Size: 98 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'ERROR::LbNetwork_EnumerateSessions ServiceProvider ptr is NULL'
 * Callers  : 1 -> frontnet_LbNetwork_EnumerateSessions_0346de
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000eddb6) */

undefined1 LbNetwork_EnumerateSessions_0edd8c(void)

{
  char ch;
  undefined1 local_10;
  
  local_10 = 0xff;
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__LbNetwork_EnumerateSessio_0016d933);
    local_10 = 0xff;
  }
  else {
    ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x10))();
    if (ch == '\0') {
      local_10 = 0;
    }
    else {
      LbNetLog(s_WARNING_network__LbNetwork_Enume_0016d973);
    }
  }
  return local_10;
}

/******************************************************************************
 * Function : LbNetwork_EnumeratePlayers_0eddf0 (Original VA: 0xeddf0, Ghidra: FUN_000eddf0)
 * Prototype: undefined1 LbNetwork_EnumeratePlayers_0eddf0(void);
 * Address  : 0xeddf0 (Size: 89 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'ERROR::LbNetwork_EnumeratePlayers ServiceProvider ptr is NULL'
 * Callers  : 2 -> frontnet_LbNetwork_EnumerateSessions_0346de, frontnet_LbNetwork_EnumeratePlayers_034f38
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined1 LbNetwork_EnumeratePlayers_0eddf0(void)

{
  char ch;
  undefined1 local_10;
  
  local_10 = 0xff;
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__LbNetwork_EnumeratePlayer_0016d9ba);
    local_10 = 0xff;
  }
  else {
    ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x14))();
    if (ch == '\0') {
      local_10 = 0;
    }
    else {
      LbNetLog(s_WARNING_network__LbNetwork_Enume_0016d9f9);
    }
  }
  return local_10;
}

/******************************************************************************
 * Function : LbNetwork_CompleteExchange_0ee3c0 (Original VA: 0xee3c0, Ghidra: FUN_000ee3c0)
 * Prototype: undefined8 LbNetwork_CompleteExchange_0ee3c0(void);
 * Address  : 0xee3c0 (Size: 721 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: LbNetwork_CompleteExchange() failure on HostData'
 * Callers  : 0 -> 
 * Callees  : 10 -> LbTimerClock, lbnet_HostDataCollection_0eedc0, LbNetwork_CompleteExchange_0ef060, LbNetLog, bflib_system_io_fn_0ff628, lbnet_EncodeMessageStub_0ff630, lbnet_EncodeMessageStub_0ff6f0, lbnet_EncodeMessageStub_0ff894 ...
 ******************************************************************************/
undefined8 LbNetwork_CompleteExchange_0ee3c0(void)

{
  bool flag;
  char net_status;
  uint uval;
  int clock_ms;
  int extraout_ECX;
  int clock_ms_2;
  undefined4 arg_edx;
  uint uval_2;
  uint clock_ms_3;
  char *net_status_2;
  undefined1 local_1c;
  
  local_1c = 0xff;
  if (g_net_host_player_id == g_net_local_player_id) {
    LbNetLog(s_GETTING_DATA_FROM_CLIENTS_0016dafe);
    lbnet_HostDataCollection_0eedc0();
    LbNetLog(s_GOT_DATA_FROM_CLIENTS_0016db19);
    local_1c = LbNetwork_CompleteExchange_0ef060();
    uval = LbNetLog(s_DONE_BROADCAST_TO_CLIENTS_0016db30);
  }
  else {
    flag = true;
    g_net_bss_003dd890 = 0;
    clock_ms_3 = 0;
    do {
      clock_ms = g_net_host_player_id;
      uval = lbnet_Receive_0ffb54();
      clock_ms_2 = extraout_ECX;
      if (clock_ms != g_net_host_player_id) {
        clock_ms_2 = 1;
      }
      if (clock_ms_2 == 0) {
        if (g_net_bss_003dd890 != 0) {
          if (clock_ms_3 == 0) {
            clock_ms = LbTimerClock();
            if ((g_net_bss_003dd8a4 == 0) || (g_net_bss_003dd874 < (uint)(clock_ms - g_net_bss_003dd878))) {
              g_net_bss_003dd874 = clock_ms - g_net_bss_003dd878;
            }
            uval_2 = g_net_bss_003dd8a4 + 1;
            uval = g_net_bss_003dd8a4;
            g_net_bss_003dd8a4 = uval_2;
            if (0x31 < uval_2) {
              g_net_bss_003dd8a4 = 0;
              uval = g_net_bss_003dd874 << 2;
              g_data_0019556c = uval;
              if (uval < 0xfa) {
                g_data_0019556c = 0xfa;
              }
            }
          }
          flag = false;
          local_1c = 0;
        }
      }
      else if (g_net_host_player_id == g_net_local_player_id) {
        net_status = lbnet_HostDataCollection_0eedc0();
        if (net_status == '\0') {
          uval = LbNetwork_CompleteExchange_0ef060();
          if ((char)uval != '\0') {
            net_status_2 = s_WARNING_network__LbNetwork_Compl_0016db4b;
            goto LAB_000ee4fb;
          }
          local_1c = 0;
        }
        else {
          net_status_2 = s_WARNING_network__LbNetwork_Compl_0016db9b;
LAB_000ee4fb:
          uval = LbNetLog(net_status_2);
        }
        flag = false;
      }
      else {
        lbnet_EncodeMessageStub_0ff894();
        uval = lbnet_Send_1002dc();
        if ((char)uval == '\0') {
          local_1c = 0;
        }
        else {
          uval = LbNetLog(s_WARNING_network__LbNetwork_Compl_0016dbec);
        }
      }
      uval_2 = clock_ms_3;
      if (flag) {
        clock_ms = LbTimerClock();
        uval = clock_ms - g_net_bss_003dd878;
        if (g_net_bss_003dd868 < uval) {
          LbNetLog(s_Timed_out_waiting_for_host_0016dc33);
          uval_2 = clock_ms_3 + 1;
          if (uval_2 < 0x65) {
            uval = bflib_system_io_fn_0ff628();
            if (uval < 9) {
              lbnet_EncodeMessageStub_0ff6f0();
              LbNetLog(s_RESENDING_TO_HOST_MY_PLAYER__d__S_0016dd40,g_net_local_player_id,g_net_composite_buffer_ptr);
              net_status = lbnet_Send_1002dc();
              if (net_status == '\0') goto LAB_000ee634;
              net_status_2 = s_WARNING_network__LbNetwork_Compl_0016dd78;
            }
            else {
              net_status_2 = s_WARNING_network__LbNetwork_Compl_0016dcdf;
            }
            LbNetLog(net_status_2);
          }
          else {
            uval = bflib_system_io_fn_0ff628();
            if (uval < 9) {
              lbnet_EncodeMessageStub_0ff630();
              net_status = lbnet_Send_1002dc();
              if (net_status == '\0') goto LAB_000ee634;
              net_status_2 = s_WARNING_network__HostDataCollect_0016dca0;
            }
            else {
              net_status_2 = s_WARNING_network__LbNetwork_Compl_0016dc4f;
            }
            LbNetLog(net_status_2);
          }
LAB_000ee634:
          g_net_bss_003dd878 = LbTimerClock();
          uval = g_data_0019556c * (clock_ms_3 + 2);
          g_data_0019556c = g_data_0019556c + 100;
          g_net_bss_003dd868 = uval;
        }
      }
      clock_ms_3 = uval_2;
    } while (flag);
  }
  g_net_bss_003dd86c = 0;
  if ((g_net_composite_buffer_ptr != 0xf) && (g_net_composite_buffer_ptr = g_net_composite_buffer_ptr + 1, 0xe < g_net_composite_buffer_ptr)) {
    g_net_composite_buffer_ptr = 0;
  }
  return CONCAT44(arg_edx,CONCAT31((int3)(uval >> 8),local_1c));
}

/******************************************************************************
 * Function : LbNetwork_StartExchange_0ee694 (Original VA: 0xee694, Ghidra: FUN_000ee694)
 * Prototype: longlong LbNetwork_StartExchange_0ee694(void);
 * Address  : 0xee694 (Size: 1162 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'ERROR::LbNetwork_StartExchange ServiceProvider ptr is NULL'
 * Callers  : 5 -> frontmap_LbNetwork_Exchange_031def, frontnet_LbNetwork_Exchange_035758, fronttor_LbNetwork_Exchange_036a59, packet_resync_network_game_state, packet_exchange_all_players_packets
 * Callees  : 12 -> LbTimerClock, lbnet_HostDataCollection_0eedc0, LbNetwork_CompleteExchange_0ef060, LbNetLog, bflib_system_io_fn_0ff628, lbnet_EncodeMessageStub_0ff630, lbnet_EncodeMessageStub_0ff6f0, lbnet_EncodeMessageStub_0ff894 ...
 ******************************************************************************/
longlong LbNetwork_StartExchange_0ee694(void)

{
  bool flag;
  char net_status;
  undefined4 *arg_eax;
  undefined4 net_status_2;
  undefined3 uval;
  uint loop_i;
  int clock_ms;
  uint clock_ms_2;
  int extraout_ECX;
  int clock_ms_3;
  undefined4 arg_edx;
  uint uval_2;
  undefined4 *word_ptr;
  byte flag_2;
  char *net_status_3;
  char local_24;
  char local_20;
  undefined1 local_1c;
  
  flag_2 = 0;
  local_1c = 0xff;
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__LbNetwork_StartExchange_S_0016da3f);
    local_24 = -1;
  }
  else if (g_net_bss_003dd8ac == 0) {
    local_24 = -1;
    g_net_bss_003dd86c = arg_eax;
    lbnet_Receive_0ffb54();
    clock_ms_2 = g_net_max_players;
    loop_i = 0;
    if (g_net_max_players != 0) {
      clock_ms = 0;
      do {
        if (*(int *)((int)&g_net_bss_003dd8b4 + clock_ms) != 0) {
          *(undefined4 *)((int)&g_net_bss_003dd8b8 + clock_ms) = 0;
        }
        loop_i = loop_i + 1;
        clock_ms = clock_ms + 0x2c;
      } while (loop_i < clock_ms_2);
    }
    clock_ms_2 = g_net_exchange_packet_size;
    word_ptr = (undefined4 *)(g_net_exchange_buffer_ptr + g_net_bss_003dd888 * g_net_exchange_packet_size);
    for (loop_i = g_net_exchange_packet_size >> 2; loop_i != 0; loop_i = loop_i - 1) {
      *word_ptr = *arg_eax;
      arg_eax = arg_eax + (uint)flag_2 * -2 + 1;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
    }
    for (clock_ms_2 = clock_ms_2 & 3; clock_ms_2 != 0; clock_ms_2 = clock_ms_2 - 1) {
      *(undefined1 *)word_ptr = *(undefined1 *)arg_eax;
      arg_eax = (undefined4 *)((int)arg_eax + (uint)flag_2 * -2 + 1);
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_2 * -2 + 1);
    }
    (&g_net_bss_003dd8b8)[g_net_bss_003dd888 * 0xb] = 1;
    g_net_bss_003dd878 = LbTimerClock();
    g_net_bss_003dd868 = g_data_0019556c;
    if (g_net_host_player_id == g_net_local_player_id) {
      local_24 = '\0';
    }
    else {
      lbnet_EncodeMessageStub_0ff894();
      net_status = lbnet_Send_1002dc();
      if (net_status == '\0') {
        local_24 = '\0';
      }
      else {
        LbNetLog(s_WARNING_network__LbNetwork_Start_0016da7b);
      }
    }
  }
  else {
    local_24 = lbnet_StartTwoPlayerExchange_100a28();
  }
  if (local_24 == '\0') {
    if (g_net_service_provider_ptr == 0) {
      net_status_2 = LbNetLog(s_ERROR__LbNetwork_CompleteExchang_0016dabf);
      uval = (undefined3)((uint)net_status_2 >> 8);
      local_20 = -1;
LAB_000eeae6:
      if (local_20 == '\0') {
        return (ulonglong)CONCAT43(arg_edx,uval) << 8;
      }
    }
    else {
      if (g_net_bss_003dd8ac == 0) {
        local_20 = -1;
        if (g_net_local_player_id == g_net_host_player_id) {
          LbNetLog(s_GETTING_DATA_FROM_CLIENTS_0016dafe);
          lbnet_HostDataCollection_0eedc0();
          LbNetLog(s_GOT_DATA_FROM_CLIENTS_0016db19);
          local_20 = LbNetwork_CompleteExchange_0ef060();
          loop_i = LbNetLog(s_DONE_BROADCAST_TO_CLIENTS_0016db30);
        }
        else {
          flag = true;
          g_net_bss_003dd890 = g_net_bss_003dd8ac;
          clock_ms_2 = 0;
          do {
            clock_ms = g_net_host_player_id;
            loop_i = lbnet_Receive_0ffb54();
            clock_ms_3 = extraout_ECX;
            if (clock_ms != g_net_host_player_id) {
              clock_ms_3 = 1;
            }
            if (clock_ms_3 == 0) {
              if (g_net_bss_003dd890 != 0) {
                if (clock_ms_2 == 0) {
                  clock_ms = LbTimerClock();
                  loop_i = clock_ms - g_net_bss_003dd878;
                  if ((g_net_bss_003dd8a4 == 0) || (g_net_bss_003dd874 < loop_i)) {
                    g_net_bss_003dd874 = loop_i;
                  }
                  g_net_bss_003dd8a4 = g_net_bss_003dd8a4 + 1;
                  if (0x31 < g_net_bss_003dd8a4) {
                    loop_i = g_net_bss_003dd874 << 2;
                    g_net_bss_003dd8a4 = 0;
                    g_data_0019556c = loop_i;
                    if (loop_i < 0xfa) {
                      g_data_0019556c = 0xfa;
                    }
                  }
                }
                loop_i = loop_i & 0xffffff00;
                flag = false;
                local_20 = '\0';
              }
            }
            else if (g_net_host_player_id == g_net_local_player_id) {
              net_status = lbnet_HostDataCollection_0eedc0();
              if (net_status == '\0') {
                loop_i = LbNetwork_CompleteExchange_0ef060();
                if ((char)loop_i != '\0') {
                  net_status_3 = s_WARNING_network__LbNetwork_Compl_0016db4b;
                  goto LAB_000ee950;
                }
                local_20 = '\0';
              }
              else {
                net_status_3 = s_WARNING_network__LbNetwork_Compl_0016db9b;
LAB_000ee950:
                loop_i = LbNetLog(net_status_3);
              }
              flag = false;
            }
            else {
              lbnet_EncodeMessageStub_0ff894();
              loop_i = lbnet_Send_1002dc();
              if ((char)loop_i == '\0') {
                local_20 = '\0';
              }
              else {
                loop_i = LbNetLog(s_WARNING_network__LbNetwork_Compl_0016dbec);
              }
            }
            uval_2 = clock_ms_2;
            if (flag) {
              clock_ms = LbTimerClock();
              loop_i = clock_ms - g_net_bss_003dd878;
              if (g_net_bss_003dd868 < loop_i) {
                LbNetLog(s_Timed_out_waiting_for_host_0016dc33);
                uval_2 = clock_ms_2 + 1;
                if (uval_2 < 0x65) {
                  loop_i = bflib_system_io_fn_0ff628();
                  if (loop_i < 9) {
                    lbnet_EncodeMessageStub_0ff6f0();
                    LbNetLog(s_RESENDING_TO_HOST_MY_PLAYER__d__S_0016dd40,g_net_local_player_id,
                                 g_net_composite_buffer_ptr);
                    net_status = lbnet_Send_1002dc();
                    if (net_status == '\0') goto LAB_000eea8a;
                    net_status_3 = s_WARNING_network__LbNetwork_Compl_0016dd78;
                  }
                  else {
                    net_status_3 = s_WARNING_network__LbNetwork_Compl_0016dcdf;
                  }
                  LbNetLog(net_status_3);
                }
                else {
                  loop_i = bflib_system_io_fn_0ff628();
                  if (loop_i < 9) {
                    lbnet_EncodeMessageStub_0ff630();
                    net_status = lbnet_Send_1002dc();
                    if (net_status == '\0') goto LAB_000eea8a;
                    net_status_3 = s_WARNING_network__HostDataCollect_0016dca0;
                  }
                  else {
                    net_status_3 = s_WARNING_network__LbNetwork_Compl_0016dc4f;
                  }
                  LbNetLog(net_status_3);
                }
LAB_000eea8a:
                g_net_bss_003dd878 = LbTimerClock();
                loop_i = g_data_0019556c * (clock_ms_2 + 2);
                g_data_0019556c = g_data_0019556c + 100;
                g_net_bss_003dd868 = loop_i;
              }
            }
            clock_ms_2 = uval_2;
          } while (flag);
        }
        g_net_bss_003dd86c = (undefined4 *)0x0;
        if ((g_net_composite_buffer_ptr != 0xf) && (g_net_composite_buffer_ptr = g_net_composite_buffer_ptr + 1, 0xe < g_net_composite_buffer_ptr)) {
          g_net_composite_buffer_ptr = 0;
        }
        uval = (undefined3)(loop_i >> 8);
        goto LAB_000eeae6;
      }
      net_status_2 = lbnet_CompleteTwoPlayerExchange_100bb8();
      if ((char)net_status_2 == '\0') {
        local_1c = 0;
        goto LAB_000eeb10;
      }
    }
    net_status_3 = s_WARNING_network__LbNetwork_Excha_0016ddbf;
  }
  else {
    net_status_3 = s_WARNING_network__LbNetwork_Excha_0016de10;
  }
  net_status_2 = LbNetLog(net_status_3);
LAB_000eeb10:
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)net_status_2 >> 8),local_1c));
}

/******************************************************************************
 * Function : LbNetwork_ChangeExchangeBuffer_0eeb20 (Original VA: 0xeeb20, Ghidra: FUN_000eeb20)
 * Prototype: undefined1 LbNetwork_ChangeExchangeBuffer_0eeb20(void);
 * Address  : 0xeeb20 (Size: 192 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buff'
 * Callers  : 1 -> packet_resync_network_game_state
 * Callees  : 3 -> LbFileLoadAt, bflib_system_io_fn_0e94b0, LbNetLog
 ******************************************************************************/
undefined1 LbNetwork_ChangeExchangeBuffer_0eeb20(void)

{
  undefined4 arg_eax;
  undefined4 *word_ptr;
  uint loop_i;
  uint loop_i_2;
  int arg_edx;
  undefined4 extraout_EDX;
  undefined1 uval;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  undefined8 uval_2;
  
  uval_2 = CONCAT44(g_net_bss_003dd880,g_net_bss_003dd870);
  flag = 0;
  uval = 0xff;
  g_net_exchange_buffer_ptr = arg_eax;
  g_net_exchange_packet_size = arg_edx;
  if (g_net_bss_003dd870 == (undefined4 *)0x0) {
    uval_2 = LbFileLoadAt();
    g_net_bss_003dd870 = (undefined4 *)uval_2;
    if (g_net_bss_003dd870 == (undefined4 *)0x0) {
      LbNetLog(s_WARNING_network__LbNetwork_Chang_0016de5e);
      uval_2 = CONCAT44(g_net_bss_003dd880,g_net_bss_003dd870);
      goto LAB_000eebd8;
    }
  }
  else if (g_net_bss_003dd880 <= (uint)(g_net_max_players * arg_edx) &&
           g_net_max_players * arg_edx - g_net_bss_003dd880 != 0) {
    word_ptr = (undefined4 *)LbFileLoadAt();
    loop_i_2 = g_net_bss_003dd880;
    if (word_ptr != (undefined4 *)0x0) {
      word_ptr_2 = g_net_bss_003dd870;
      word_ptr_3 = word_ptr;
      for (loop_i = g_net_bss_003dd880 >> 2; loop_i != 0; loop_i = loop_i - 1) {
        *word_ptr_3 = *word_ptr_2;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
      }
      for (loop_i_2 = loop_i_2 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
      }
      bflib_system_io_fn_0e94b0();
      g_net_bss_003dd870 = word_ptr;
      g_net_bss_003dd880 = extraout_EDX;
      return 0;
    }
    LbNetLog(s_WARNING_network__LbNetwork_Chang_0016deb0);
    return 0xff;
  }
  uval = 0;
LAB_000eebd8:
  g_net_bss_003dd880 = (uint)((ulonglong)uval_2 >> 0x20);
  g_net_bss_003dd870 = (undefined4 *)uval_2;
  return uval;
}

/******************************************************************************
 * Function : lbnet_GetCurrentPlayers_0eebe0 (Original VA: 0xeebe0, Ghidra: FUN_000eebe0)
 * Prototype: undefined8 lbnet_GetCurrentPlayers_0eebe0(void);
 * Address  : 0xeebe0 (Size: 330 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000eed08) */

undefined8 lbnet_GetCurrentPlayers_0eebe0(void)

{
  char ch;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uval;
  uint uval_2;
  undefined4 arg_edx;
  int val;
  int val_2;
  char *str_ptr;
  char *str_ptr_2;
  char local_24;
  undefined1 local_1c;
  
  local_1c = 0xff;
  local_24 = -1;
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__GetCurrentPlayers_Service_0016d625);
    local_24 = -1;
  }
  else {
    g_net_bss_003dd888 = g_net_max_players;
    LbNetLog(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
    ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x14))();
    if (ch == '\0') {
      if (g_net_bss_003dd888 < g_net_max_players) {
        local_24 = '\0';
      }
      else {
        LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d679,g_net_max_players);
      }
    }
    else {
      LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d6cd);
    }
  }
  if (local_24 == '\0') {
    LbNetLog(s_CALLING_GET_PLAYER_INFO_0016d71d);
    uval_2 = 0;
    if (g_net_max_players != 0) {
      val = 0;
      val_2 = 0;
      do {
        if (*(int *)((int)&g_net_bss_003dd8b4 + val_2) == 0) {
          *(undefined4 *)(val + 0x20 + g_net_bss_003dd864) = 0;
        }
        else {
          str_ptr_2 = (char *)(g_net_bss_003dd864 + val);
          str_ptr = &g_net_bss_003dd8bc + val_2;
          str_ptr_2[0x20] = '\x01';
          str_ptr_2[0x21] = '\0';
          str_ptr_2[0x22] = '\0';
          str_ptr_2[0x23] = '\0';
          do {
            ch = *str_ptr;
            *str_ptr_2 = ch;
            if (ch == '\0') break;
            ch = str_ptr[1];
            str_ptr = str_ptr + 2;
            str_ptr_2[1] = ch;
            str_ptr_2 = str_ptr_2 + 2;
          } while (ch != '\0');
        }
        val = val + 0x24;
        uval_2 = uval_2 + 1;
        val_2 = val_2 + 0x2c;
      } while (uval_2 < g_net_max_players);
    }
    local_1c = 0;
    uval = extraout_var;
  }
  else {
    LbNetLog(s_WARNING_network__LbNetwork_GetPl_0016df4b);
    uval = extraout_var_00;
  }
  return CONCAT44(arg_edx,CONCAT31(uval,local_1c));
}

/******************************************************************************
 * Function : lbnet_HostDataCollection_0eedc0 (Original VA: 0xeedc0, Ghidra: FUN_000eedc0)
 * Prototype: undefined8 lbnet_HostDataCollection_0eedc0(void);
 * Address  : 0xeedc0 (Size: 672 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: HostDataCollection() deletePlayerBuffer is too s'
 * Callers  : 2 -> LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694
 * Callees  : 7 -> LbTimerClock, LbNetLog, bflib_system_io_fn_0ff628, lbnet_EncodeMessageStub_0ff630, lbnet_EncodeMessageStub_0ff6a0, lbnet_Receive_0ffb54, lbnet_Send_1002dc
 ******************************************************************************/
undefined8 lbnet_HostDataCollection_0eedc0(void)

{
  bool flag;
  bool flag_2;
  char net_status;
  undefined4 arg_eax;
  uint uval;
  int clock_ms;
  uint extraout_ECX;
  int val;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 arg_edx;
  uint uval_2;
  uint local_28;
  uint local_20;
  undefined1 local_1c;
  
  uval = CONCAT22((short)((uint)arg_eax >> 0x10),0xff00);
  flag_2 = true;
  local_1c = 0xff;
  local_20 = 0;
  do {
    flag = true;
    uval_2 = 0;
    if (g_net_max_players != 0) {
      uval = 0;
      do {
        if ((*(int *)((int)&g_net_bss_003dd8b4 + uval) != 0) &&
           (*(int *)((int)&g_net_bss_003dd8b8 + uval) == 0)) {
          flag = false;
        }
        uval_2 = uval_2 + 1;
        uval = uval + 0x2c;
      } while (uval_2 < g_net_max_players);
    }
    if (flag) {
      flag_2 = false;
      if (local_20 == 0) {
        clock_ms = LbTimerClock();
        uval = clock_ms - g_net_bss_003dd878;
        if ((g_net_bss_003dd8a4 == 0) || (g_net_bss_003dd874 < uval)) {
          g_net_bss_003dd874 = uval;
        }
        g_net_bss_003dd8a4 = g_net_bss_003dd8a4 + 1;
        if (0x31 < g_net_bss_003dd8a4) {
          uval = g_net_bss_003dd874 << 2;
          g_net_bss_003dd8a4 = 0;
          g_data_0019556c = uval;
          if (uval < 0xfa) {
            g_data_0019556c = 0xfa;
          }
        }
      }
      local_1c = 0;
    }
    else {
      clock_ms = LbTimerClock();
      if (g_net_bss_003dd868 < (uint)(clock_ms - g_net_bss_003dd878)) {
        LbNetLog(s_Timed_out_waiting_for_client_0016df98);
        if (local_20 + 1 < 0x65) {
          uval = bflib_system_io_fn_0ff628();
          if (uval < 9) {
            lbnet_EncodeMessageStub_0ff6a0();
            uval = 0;
            clock_ms = extraout_ECX_02;
            if (g_net_max_players != 0) {
              do {
                if (((*(int *)((int)&g_net_bss_003dd8b4 + clock_ms) != 0) &&
                    (*(int *)((int)&g_net_bss_003dd8b8 + clock_ms) == 0)) &&
                   (net_status = lbnet_Send_1002dc(), clock_ms = extraout_ECX_03, net_status != '\0')) {
                  LbNetLog(s_WARNING_network__HostDataCollect_0016e08e);
                  clock_ms = extraout_ECX_04;
                }
                uval = uval + 1;
                clock_ms = clock_ms + 0x2c;
              } while (uval < g_net_max_players);
            }
          }
          else {
            LbNetLog(s_WARNING_network__HostDataCollect_0016e03e);
          }
        }
        else {
          uval = bflib_system_io_fn_0ff628();
          if (uval < 9) {
            if (g_net_max_players != 0) {
              clock_ms = 0;
              local_28 = extraout_ECX;
              do {
                if ((*(int *)((int)&g_net_bss_003dd8b4 + clock_ms) != 0) &&
                   (*(int *)((int)&g_net_bss_003dd8b8 + clock_ms) == 0)) {
                  lbnet_EncodeMessageStub_0ff630();
                  uval = 0;
                  if (g_net_max_players != 0) {
                    val = 0;
                    do {
                      if (((*(int *)((int)&g_net_bss_003dd8b4 + val) != 0) &&
                          (*(int *)((int)&g_net_bss_003dd8b0 + val) !=
                           *(int *)((int)&g_net_bss_003dd8b0 + clock_ms))) &&
                         (net_status = lbnet_Send_1002dc(), val = extraout_ECX_00, net_status != '\0')) {
                        LbNetLog(s_WARNING_network__HostDataCollect_0016dfff);
                        val = extraout_ECX_01;
                      }
                      uval = uval + 1;
                      val = val + 0x2c;
                    } while (uval < g_net_max_players);
                  }
                }
                local_28 = local_28 + 1;
                clock_ms = clock_ms + 0x2c;
              } while (local_28 < g_net_max_players);
            }
          }
          else {
            LbNetLog(s_WARNING_network__HostDataCollect_0016dfb6);
          }
        }
        g_net_bss_003dd878 = LbTimerClock();
        g_net_bss_003dd868 = g_data_0019556c * (local_20 + 2);
        g_data_0019556c = g_data_0019556c + 100;
        local_20 = local_20 + 1;
      }
      uval = lbnet_Receive_0ffb54();
    }
  } while (flag_2);
  return CONCAT44(arg_edx,CONCAT31((int3)(uval >> 8),local_1c));
}

/******************************************************************************
 * Function : LbNetwork_CompleteExchange_0ef060 (Original VA: 0xef060, Ghidra: FUN_000ef060)
 * Prototype: undefined8 LbNetwork_CompleteExchange_0ef060(void);
 * Address  : 0xef060 (Size: 234 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: LbNetwork_CompleteExchange() failure on SP::Send'
 * Callers  : 2 -> LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694
 * Callees  : 3 -> LbNetLog, lbnet_EncodeMessageStub_0ff894, lbnet_Send_1002dc
 ******************************************************************************/
undefined8 LbNetwork_CompleteExchange_0ef060(void)

{
  char net_status;
  uint loop_i;
  uint loop_i_2;
  int val;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined1 local_18;
  
  flag = 0;
  local_18 = 0;
  lbnet_EncodeMessageStub_0ff894();
  loop_i = g_net_exchange_packet_size * g_net_max_players;
  word_ptr = g_net_exchange_buffer_ptr;
  word_ptr_2 = g_net_bss_003dd870;
  for (loop_i_2 = loop_i >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = loop_i & 3; loop_i != 0; loop_i = loop_i - 1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  loop_i_2 = 0;
  if (g_net_max_players != 0) {
    val = 0;
    do {
      if ((*(int *)((int)&g_net_bss_003dd8b4 + val) != 0) &&
         (*(int *)((int)&g_net_bss_003dd8b0 + val) != g_net_host_player_id)) {
        net_status = lbnet_Send_1002dc();
        val = extraout_ECX;
        if (net_status != '\0') {
          LbNetLog(s_WARNING_network__LbNetwork_Compl_0016e0cd);
          val = extraout_ECX_00;
          local_18 = extraout_DL;
        }
      }
      loop_i_2 = loop_i_2 + 1;
      val = val + 0x2c;
    } while (loop_i_2 < g_net_max_players);
  }
  loop_i_2 = g_net_exchange_packet_size * g_net_max_players;
  word_ptr = g_net_exchange_buffer_ptr;
  word_ptr_2 = &g_bss_003dde34;
  for (loop_i = loop_i_2 >> 2; loop_i != 0; loop_i = loop_i - 1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = loop_i_2 & 3; loop_i != 0; loop_i = loop_i - 1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  return CONCAT44(arg_edx,CONCAT31((int3)(loop_i_2 >> 8),local_18));
}

/******************************************************************************
 * Function : lbnet_UserDataMsgCallback_0ef14c (Original VA: 0xef14c, Ghidra: FUN_000ef14c)
 * Prototype: int lbnet_UserDataMsgCallback_0ef14c(uint param_1,uint param_2,int param_3);
 * Address  : 0xef14c (Size: 786 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: UserDataMsgCallback() host got data from itself'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
int lbnet_UserDataMsgCallback_0ef14c(uint param_1,uint param_2,int param_3)

{
  bool flag;
  bool flag_2;
  uint extraout_EDX;
  int val;
  uint uval;
  char *str_ptr;
  
  if (g_net_in_send_flag != 0) {
    LbNetLog(s_GOT_A_REQUEST_MultiPlayerCallbac_0016e114);
    param_2 = extraout_EDX;
  }
  if (g_net_local_player_id == g_net_host_player_id) {
    if (param_2 == g_net_exchange_packet_size) {
      if (param_1 == g_net_local_player_id) {
        LbNetLog(s_WARNING_network__UserDataMsgCall_0016e137);
        return 0;
      }
      flag = true;
      flag_2 = false;
      uval = 0;
      val = 0;
      do {
        if (uval < g_net_max_players) {
          if ((*(int *)((int)&g_net_bss_003dd8b4 + val) != 0) &&
             (*(uint *)((int)&g_net_bss_003dd8b0 + val) == param_1)) {
            flag_2 = true;
            param_1 = uval;
          }
          val = val + 0x2c;
          uval = uval + 1;
        }
        else {
          flag = false;
        }
      } while (flag);
      if (flag_2) {
        if ((param_3 != g_net_composite_buffer_ptr) && (param_3 != 0xf)) {
          LbNetLog(s_WARNING_network__UserDataMsgCall_0016e17b,param_3,g_net_composite_buffer_ptr);
          return 0;
        }
        val = g_net_exchange_packet_size * param_1 + g_net_exchange_buffer_ptr;
        (&g_net_bss_003dd8b8)[param_1 * 0xb] = 1;
        return val;
      }
      str_ptr = s_WARNING_network__UserDataMsgCall_0016e1d5;
    }
    else {
      str_ptr = s_WARNING_network__UserDataMsgCall_0016e20e;
      param_1 = param_2;
    }
  }
  else if (param_2 == g_net_exchange_packet_size * g_net_max_players) {
    if (g_net_host_player_id != param_1) {
      LbNetLog(s_WARNING_network__UserDataMsgCall_0016e2de);
      return 0;
    }
    flag = true;
    flag_2 = false;
    uval = 0;
    val = 0;
    do {
      if (uval < g_net_max_players) {
        if ((*(int *)((int)&g_net_bss_003dd8b4 + val) != 0) &&
           (*(uint *)((int)&g_net_bss_003dd8b0 + val) == param_1)) {
          flag_2 = true;
          param_1 = uval;
        }
        val = val + 0x2c;
        uval = uval + 1;
      }
      else {
        flag = false;
      }
    } while (flag);
    if (flag_2) {
      flag = true;
      if (g_net_composite_buffer_ptr == 0xf) {
        g_net_composite_buffer_ptr = param_3;
      }
      else if (g_net_composite_buffer_ptr != param_3) {
        flag = false;
      }
      if (!flag) {
        LbNetLog(s_WARNING_network__UserDataMsgCall_0016e24b,param_3,g_net_composite_buffer_ptr);
        return 0;
      }
      g_net_bss_003dd890 = 1;
      return g_net_exchange_buffer_ptr;
    }
    str_ptr = s_WARNING_network__UserDataMsgCall_0016e2a5;
  }
  else if (param_2 == g_net_exchange_packet_size) {
    if (param_1 == g_net_local_player_id) {
      LbNetLog(s_WARNING_network__UserDataMsgCall_0016e31e);
      return 0;
    }
    flag = true;
    flag_2 = false;
    uval = 0;
    val = 0;
    do {
      if (uval < g_net_max_players) {
        if ((*(int *)((int)&g_net_bss_003dd8b4 + val) != 0) &&
           (*(uint *)((int)&g_net_bss_003dd8b0 + val) == param_1)) {
          flag_2 = true;
          param_1 = uval;
        }
        val = val + 0x2c;
        uval = uval + 1;
      }
      else {
        flag = false;
      }
    } while (flag);
    if (flag_2) {
      val = g_net_exchange_buffer_ptr + g_net_exchange_packet_size * param_1;
      (&g_net_bss_003dd8b8)[param_1 * 0xb] = 1;
      return val;
    }
    str_ptr = s_WARNING_network__UserDataMsgCall_0016e373;
  }
  else {
    str_ptr = s_WARNING_network__UserDataMsgCall_0016e3ac;
    param_1 = param_2;
  }
  LbNetLog(str_ptr,param_1);
  return 0;
}

/******************************************************************************
 * Function : lbnet_DeleteMsgCallback_0ef4a8 (Original VA: 0xef4a8, Ghidra: FUN_000ef4a8)
 * Prototype: void lbnet_DeleteMsgCallback_0ef4a8(int param_1);
 * Address  : 0xef4a8 (Size: 106 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: DeleteMsgCallback() NULL localPlayerInfoPtr'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_DeleteMsgCallback_0ef4a8(int param_1)

{
  int val;
  uint uval;
  uint extraout_ECX;
  int val_2;
  int extraout_EDX;
  int val_3;
  
  uval = 0;
  if (g_net_max_players != 0) {
    val_2 = 0;
    val_3 = 0;
    do {
      val = g_net_bss_003dd864;
      if ((*(int *)((int)&g_net_bss_003dd8b4 + val_2) != 0) &&
         (param_1 == *(int *)((int)&g_net_bss_003dd8b0 + val_2))) {
        *(undefined4 *)((int)&g_net_bss_003dd8b4 + val_2) = 0;
        if (val == 0) {
          LbNetLog(s_WARNING_network__DeleteMsgCallba_0016e3e9);
          uval = extraout_ECX;
          val_2 = extraout_EDX;
        }
        else {
          *(undefined4 *)(val_3 + 0x20 + val) = 0;
        }
      }
      val_2 = val_2 + 0x2c;
      uval = uval + 1;
      val_3 = val_3 + 0x24;
    } while (uval < g_net_max_players);
  }
  return;
}

/******************************************************************************
 * Function : lbnet_GetCurrentPlayers_0ef520 (Original VA: 0xef520, Ghidra: FUN_000ef520)
 * Prototype: undefined8 lbnet_GetCurrentPlayers_0ef520(void);
 * Address  : 0xef520 (Size: 151 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined8 lbnet_GetCurrentPlayers_0ef520(void)

{
  char ch;
  undefined4 uval;
  uint uval_2;
  undefined4 arg_edx;
  undefined1 local_14;
  
  local_14 = 0xff;
  if (g_net_service_provider_ptr == 0) {
    uval = LbNetLog(s_ERROR__GetCurrentPlayers_Service_0016d625);
    uval = CONCAT31((int3)((uint)uval >> 8),0xff);
  }
  else {
    g_net_bss_003dd888 = g_net_max_players;
    LbNetLog(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
    ch = (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x14))();
    if (ch == '\0') {
      if (g_net_bss_003dd888 < g_net_max_players) {
        local_14 = 0;
        uval_2 = g_net_bss_003dd888;
      }
      else {
        uval_2 = LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d679,g_net_max_players);
      }
    }
    else {
      uval_2 = LbNetLog(s_WARNING_network__GetCurrentPlaye_0016d6cd);
    }
    uval = CONCAT31((int3)(uval_2 >> 8),local_14);
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : lbnet_RequestExchangeDataMsgCallback_0ef7a8 (Original VA: 0xef7a8, Ghidra: FUN_000ef7a8)
 * Prototype: void lbnet_RequestExchangeDataMsgCallback_0ef7a8(undefined4 param_1,int param_2);
 * Address  : 0xef7a8 (Size: 187 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: RequestExchangeDataMsgCallback() NULL data point'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbNetLog, lbnet_EncodeMessageStub_0ff894, lbnet_Send_1002dc
 ******************************************************************************/
void lbnet_RequestExchangeDataMsgCallback_0ef7a8(undefined4 param_1,int param_2)

{
  bool flag;
  int val;
  char net_status;
  int extraout_EDX;
  
  if (g_net_in_send_flag != 0) {
    LbNetLog(s_GOT_A_REQUEST_MultiPlayerReqExDa_0016e466);
    param_2 = extraout_EDX;
  }
  if (g_net_bss_003dd86c == 0) {
    LbNetLog(s_WARNING_network__RequestExchange_0016e495);
  }
  else {
    flag = true;
    val = param_2;
    if ((g_net_composite_buffer_ptr != 0xf) && (val = g_net_composite_buffer_ptr, param_2 != g_net_composite_buffer_ptr)) {
      flag = false;
    }
    g_net_composite_buffer_ptr = val;
    if (flag) {
      lbnet_EncodeMessageStub_0ff894();
      net_status = lbnet_Send_1002dc();
      if (net_status != '\0') {
        LbNetLog(s_WARNING_network__RequestExchange_0016e4dc);
        return;
      }
    }
    else {
      LbNetLog(s_WARNING_network__RequestExchange_0016e527,param_2,g_net_composite_buffer_ptr);
    }
  }
  return;
}

/******************************************************************************
 * Function : lbnet_RequestCompositeExchangeDataMsgCallback_0ef864 (Original VA: 0xef864, Ghidra: FUN_000ef864)
 * Prototype: void lbnet_RequestCompositeExchangeDataMsgCallback_0ef864(undefined4 param_1,uint param_2);
 * Address  : 0xef864 (Size: 132 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: RequestCompositeExchangeDataMsgCallback() failur'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbNetLog, lbnet_Send_1002dc
 ******************************************************************************/
void lbnet_RequestCompositeExchangeDataMsgCallback_0ef864(undefined4 param_1,uint param_2)

{
  char net_status;
  
  if (g_net_in_send_flag != 0) {
    LbNetLog(s_GOT_A_RequestCompositeExchangeDa_0016e58c,param_2,g_net_composite_buffer_ptr);
  }
  if ((param_2 == g_net_composite_buffer_ptr) || (param_2 == (g_net_composite_buffer_ptr - 1 & 0xf))) {
    net_status = lbnet_Send_1002dc();
    if (net_status != '\0') {
      LbNetLog(s_WARNING_network__RequestComposit_0016e5d7);
    }
  }
  else {
    LbNetLog(s_WARNING_network__RequestComposit_0016e62b,param_2,g_net_composite_buffer_ptr);
    lbnet_Send_1002dc();
  }
  return;
}

/******************************************************************************
 * Function : lbnet_GenericIPXInit_0ef8e8 (Original VA: 0xef8e8, Ghidra: FUN_000ef8e8)
 * Prototype: undefined8 lbnet_GenericIPXInit_0ef8e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xef8e8 (Size: 313 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: GenericIPXInit() failure on ServiceProvider::Ini'
 * Callers  : 0 -> 
 * Callees  : 5 -> LbFileLoadAt, LbNetLog, bflib_system_io_fn_0ff040, bflib_system_io_fn_1012c0, lbnet_Init_1031e8
 ******************************************************************************/
undefined8 lbnet_GenericIPXInit_0ef8e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char ch;
  int val;
  int val_2;
  undefined1 uval;
  undefined4 *word_ptr;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined **ppuStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  int local_28;
  byte local_24;
  int local_1c;
  
  local_34 = g_bss_003d97d0;
  local_30 = &g_data_001745c0;
  local_2c = 0;
  uval = 0xff;
  g_bss_003d97d0 = &local_34;
  if (g_net_service_provider_ptr != 0) {
    uStack_38 = 0xef926;
    g_bss_003d97d0 = &local_34;
    (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x1c))();
    if (g_net_service_provider_ptr != 0) {
      uStack_38 = 0xef93c;
      (*(code *)**(undefined4 **)(g_net_service_provider_ptr + 0xd7c))();
    }
    g_net_service_provider_ptr = 0;
  }
  uStack_38 = 0xef94e;
  val = LbFileLoadAt();
  val_2 = 0;
  if (val != 0) {
    local_2c = 1;
    local_24 = 0;
    uStack_38 = 0xef973;
    local_28 = val;
    local_1c = val;
    bflib_system_io_fn_0ff040();
    local_2c = 3;
    uStack_38 = 0xef986;
    val_2 = bflib_system_io_fn_1012c0();
    *(undefined4 *)(val_2 + 0x723) = 0;
    *(undefined4 *)(val_2 + 0x727) = 0;
    *(undefined1 *)(val_2 + 0x72b) = 0;
    *(undefined ***)(val_2 + -4) = &PTR_FUN_00103134_00174668;
    val_2 = val_2 + -0xd80;
    local_2c = 0;
    local_24 = local_24 | 0x10;
  }
  word_ptr = &local_34;
  g_net_service_provider_ptr = val_2;
  if (val_2 != 0) {
    uStack_38 = 0;
    ppuStack_3c = &PTR_FUN_000ef460_00195570;
    uStack_40 = 0;
    uStack_44 = param_4;
    uStack_48 = param_3;
    uStack_4c = param_2;
    word_ptr = &local_50;
    local_50 = param_1;
    ch = (**(code **)(*(int *)(val_2 + 0xd7c) + 0x18))();
    if (ch == '\0') {
      uval = 0;
      word_ptr = &local_50;
    }
    else {
      LbNetLog(s_WARNING_network__GenericIPXInit__0016d539);
    }
  }
  g_bss_003d97d0 = (undefined4 *)*word_ptr;
  return CONCAT44(word_ptr[10],CONCAT31((int3)((uint)*word_ptr >> 8),uval));
}

/******************************************************************************
 * Function : lbnet_SendSystemUserMessage_0efab0 (Original VA: 0xefab0, Ghidra: FUN_000efab0)
 * Prototype: void lbnet_SendSystemUserMessage_0efab0(undefined4 param_1,char *param_2,int param_3);
 * Address  : 0xefab0 (Size: 314 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SendSystemUserMessage() systemUserBuffer is too '
 * Callers  : 0 -> 
 * Callees  : 3 -> LbNetLog, lbnet_EncodeMessageStub_0ff894, lbnet_Send_1002dc
 ******************************************************************************/
void lbnet_SendSystemUserMessage_0efab0(undefined4 param_1,char *param_2,int param_3)

{
  uint loop_i;
  uint loop_i_2;
  int loop_i_3;
  undefined4 *word_ptr;
  char *str_ptr;
  undefined4 *word_ptr_2;
  char *str_ptr_2;
  byte flag;
  
  flag = 0;
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return;
  }
  if (*param_2 != '\0') {
    LbNetLog(s_WARNING_network__SystemUserMsgCa_0016e725,(int)*param_2);
    return;
  }
  loop_i = param_3 - 1;
  loop_i_2 = g_net_max_players * 0x2c;
  if (loop_i == 0) {
    if (0x404 < loop_i_2 + 5) {
      LbNetLog(s_WARNING_network__SendSystemUserM_0016d7ee,0);
      return;
    }
    lbnet_EncodeMessageStub_0ff894();
    g_bss_003de250 = 0;
    if (loop_i_2 != 0) {
      word_ptr = &g_net_bss_003dd8b0;
      word_ptr_2 = &g_bss_003de251;
      for (loop_i_2 = loop_i_2 >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *word_ptr_2 = *word_ptr;
        word_ptr = word_ptr + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      }
      for (loop_i_3 = 0; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
        *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
        word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      }
    }
    lbnet_Send_1002dc();
    return;
  }
  if (g_net_bss_003dd87c == 0) {
    LbNetLog(s_WARNING_network__PlayerMapMsgHan_0016e6d5);
    return;
  }
  if (loop_i == loop_i_2) {
    str_ptr = param_2 + 1;
    str_ptr_2 = (char *)&g_net_bss_003dd8b0;
    for (loop_i_2 = loop_i >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
      *(undefined4 *)str_ptr_2 = *(undefined4 *)str_ptr;
      str_ptr = str_ptr + 4;
      str_ptr_2 = str_ptr_2 + 4;
    }
    for (loop_i = loop_i & 3; loop_i != 0; loop_i = loop_i - 1) {
      *str_ptr_2 = *str_ptr;
      str_ptr = str_ptr + 1;
      str_ptr_2 = str_ptr_2 + 1;
    }
    g_net_bss_003dd87c = 0;
    return;
  }
  LbNetLog(s_WARNING_network__PlayerMapMsgHan_0016e699,loop_i);
  return;
}

/******************************************************************************
 * Function : LbNetwork_Send_0f3b50 (Original VA: 0xf3b50, Ghidra: FUN_000f3b50)
 * Prototype: undefined4 LbNetwork_Send_0f3b50(void);
 * Address  : 0xf3b50 (Size: 903 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'INSIDE LbNetwork_Send'
 * Callers  : 1 -> packet_build_local_player_turn_packet
 * Callees  : 6 -> LbScreenWaitVbi, LbTimerClock, LbNetLog, lbnet_EncodeMessageStub_0ff894, lbnet_Receive_0ffb54, lbnet_Send_1002dc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 LbNetwork_Send_0f3b50(void)

{
  char clock_ms;
  uint arg_eax;
  uint uval;
  int clock_ms_2;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint loop_i;
  int arg_edx;
  int extraout_EDX;
  int arg_ebx;
  uint uval_2;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  int local_20;
  undefined4 *local_1c;
  
  flag = 0;
  g_net_in_send_flag = 1;
  LbNetLog(s_INSIDE_LbNetwork_Send_0016f12c);
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__LbNetwork_Send_ServicePro_0016f143);
  }
  else {
    lbnet_Receive_0ffb54();
    if (g_net_max_players <= arg_eax) {
      LbNetLog(s_Warning__LbNetwork_Send___player_0016f176);
      return 0xff;
    }
    if ((&g_net_bss_003dd8b4)[arg_eax * 0xb] == 0) {
      return 0xff;
    }
    LbScreenWaitVbi((&g_net_bss_003dd8b0)[arg_eax * 0xb]);
    g_bss_003decf4 = 0;
    g_bss_003ded00 = 3;
    g_bss_003decfc = 0x200;
    g_bss_003decf8 = arg_ebx;
    lbnet_EncodeMessageStub_0ff894();
    clock_ms = lbnet_Send_1002dc();
    if (clock_ms == '\0') {
      LbTimerClock();
      uval = arg_ebx - 1U >> 9;
      local_20 = 1;
LAB_000f3c80:
      do {
        lbnet_Receive_0ffb54();
        if (g_bss_003df12c == 0) {
          clock_ms_2 = LbTimerClock();
          clock_ms_2 = clock_ms_2 - extraout_ECX;
          if (clock_ms_2 < 0) {
            clock_ms_2 = -clock_ms_2;
          }
          if (50000 < clock_ms_2) {
            LbNetLog(s_Warning___LbNetwork_Send___timeo_0016f254);
            local_20 = 0;
          }
        }
        else {
          g_bss_003df12c = 0;
          if (2 < g_bss_003def24) {
            if (g_bss_003def24 < 4) {
              return 0;
            }
            if (g_bss_003def24 == 4) {
              return 0xff;
            }
            if (local_20 == 0) {
              return 0xff;
            }
            goto LAB_000f3c80;
          }
          if (g_bss_003def24 != 1) {
            if (local_20 == 0) {
              return 0xff;
            }
            goto LAB_000f3c80;
          }
          if ((uval < g_bss_003def28) || (uval < g_bss_003def2c)) {
            LbNetLog(s_Warning___LbNetwork_Send___reque_0016f1be,g_bss_003def28,g_bss_003def2c);
            return 0xff;
          }
          if (g_bss_003def28 <= g_bss_003def2c) {
            local_1c = (undefined4 *)(g_bss_003def28 * 0x200 + arg_edx);
            uval_2 = g_bss_003def28;
            do {
              LbScreenWaitVbi();
              word_ptr = local_1c;
              word_ptr_2 = &g_bss_003ded10;
              for (loop_i = extraout_ECX_00 >> 2; loop_i != 0; loop_i = loop_i - 1) {
                *word_ptr_2 = *word_ptr;
                word_ptr = word_ptr + (uint)flag * -2 + 1;
                word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
              }
              for (loop_i = extraout_ECX_00 & 3; loop_i != 0; loop_i = loop_i - 1) {
                *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
                word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
                word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
              }
              g_bss_003ded08 = 2;
              g_bss_003ded0c = uval_2;
              lbnet_EncodeMessageStub_0ff894();
              clock_ms = lbnet_Send_1002dc();
              if (clock_ms == '\0') {
                LbTimerClock();
              }
              else {
                LbNetLog(s_Warning__LbNetwork_Send___failur_0016f20d,uval_2);
                local_20 = extraout_EDX;
              }
              uval_2 = uval_2 + 1;
              local_1c = local_1c + 0x80;
            } while (uval_2 <= g_bss_003def2c);
          }
        }
        if (local_20 == 0) {
          return 0xff;
        }
      } while( true );
    }
    LbNetLog(s_Warning___LbNetwork_Send___failu_0016f288);
  }
  return 0xff;
}

/******************************************************************************
 * Function : LbNetwork_Receive_0f3ed8 (Original VA: 0xf3ed8, Ghidra: FUN_000f3ed8)
 * Prototype: uint LbNetwork_Receive_0f3ed8(void);
 * Address  : 0xf3ed8 (Size: 1263 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'INSIDE LbNetwork_Receive'
 * Callers  : 1 -> packet_build_local_player_turn_packet
 * Callees  : 6 -> LbScreenWaitVbi, LbTimerClock, LbNetLog, lbnet_EncodeMessageStub_0ff894, lbnet_Receive_0ffb54, lbnet_Send_1002dc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint LbNetwork_Receive_0f3ed8(void)

{
  bool flag;
  uint uval;
  char net_status;
  int val;
  uint extraout_ECX;
  uint loop_i;
  uint uval_2;
  uint arg_ebx;
  uint loop_i_2;
  uint uval_3;
  bool flag_2;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag_3;
  undefined8 clock_ms;
  int local_94 [18];
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  
  flag_3 = 0;
  clock_ms = LbTimerClock();
  local_30 = (int)((ulonglong)clock_ms >> 0x20);
  local_38 = (undefined4)clock_ms;
  flag_2 = true;
  flag = false;
  local_40 = 0;
  g_net_in_send_flag = 1;
  LbNetLog(s_INSIDE_LbNetwork_Receive_0016f2c4);
  if (g_net_service_provider_ptr == 0) {
    LbNetLog(s_ERROR__LbNetwork_Receive_Service_0016f2de);
    local_40 = 0xffffffff;
  }
  else {
    lbnet_Receive_0ffb54();
    if (g_net_max_players <= extraout_ECX) {
      return 0;
    }
    if ((&g_net_bss_003dd8b4)[extraout_ECX * 0xb] == 0) {
      return 0;
    }
    local_20 = (&g_net_bss_003dd8b0)[extraout_ECX * 0xb];
    do {
      lbnet_Receive_0ffb54();
      if (g_bss_003df12c == 0) {
        clock_ms = LbTimerClock();
        val = (int)clock_ms - (int)((ulonglong)clock_ms >> 0x20);
        if (val < 0) {
          val = -val;
        }
        if (50000 < val) {
          LbNetLog(s_Warning___LbNetwork_Receive___ti_0016f3d2);
LAB_000f3fc8:
          flag_2 = false;
        }
      }
      else {
        g_bss_003df12c = 0;
        if (g_bss_003def24 == 0) {
          local_1c = g_bss_003def28;
          local_3c = g_bss_003def2c;
          local_28 = g_bss_003def30;
          if (g_bss_003def2c < 0x201) {
            if (arg_ebx < g_bss_003def28) {
              LbNetLog(s_Warning___LbNetwork_Receive___to_0016f352,g_bss_003def28);
            }
            else {
              flag = true;
            }
          }
          else {
            LbNetLog(s_Warning___LbNetwork_Receive___pa_0016f314,g_bss_003def2c);
          }
          flag_2 = false;
          if (!flag) {
            g_bss_003def1c = 4;
            lbnet_EncodeMessageStub_0ff894();
            net_status = lbnet_Send_1002dc();
            if (net_status != '\0') {
              LbNetLog(s_Warning___LbNetwork_Receive___fa_0016f391);
              goto LAB_000f3fc8;
            }
          }
        }
      }
    } while (flag_2);
    if (flag) {
      local_34 = (local_1c - 1) / local_3c;
      local_24 = 1;
      local_14 = 0;
      do {
        if (local_34 < local_14) {
          local_24 = 0;
          local_40 = local_1c;
        }
        else {
          uval_3 = local_14 + local_28;
          if (local_34 < local_14 + local_28) {
            uval_3 = local_34;
          }
          local_4c = 1;
          local_48 = local_14;
          local_44 = uval_3;
          lbnet_EncodeMessageStub_0ff894();
          net_status = lbnet_Send_1002dc();
          uval = local_28;
          if (net_status == '\0') {
            flag = true;
            uval_2 = 0;
            val = 0;
            do {
              uval_2 = uval_2 + 1;
              *(undefined4 *)((int)local_94 + val) = 1;
              val = val + 4;
            } while (uval_2 <= uval);
            local_18 = LbTimerClock();
            local_2c = uval_3 + 1;
            do {
              lbnet_Receive_0ffb54();
              uval_2 = local_14;
              uval = g_bss_003def28;
              if (g_bss_003df12c == 0) {
                clock_ms = LbTimerClock();
                val = (int)clock_ms - (int)((ulonglong)clock_ms >> 0x20);
                if (val < 0) {
                  val = -val;
                }
                if (25000 < val) {
                  g_bss_003def1c = 4;
                  flag = false;
                  lbnet_EncodeMessageStub_0ff894();
                  local_24 = 0;
                  net_status = lbnet_Send_1002dc();
                  if (net_status != '\0') {
                    LbNetLog(s_Warning___LbNetwork_Receive___fa_0016f442);
                  }
                }
              }
              else {
                g_bss_003df12c = 0;
                if (g_bss_003def24 == 2) {
                  if ((local_14 <= g_bss_003def28) && (g_bss_003def28 <= uval_3)) {
                    loop_i_2 = local_1c - local_3c * g_bss_003def28;
                    if (local_3c < loop_i_2) {
                      loop_i_2 = local_3c;
                    }
                    word_ptr = &g_bss_003def2c;
                    word_ptr_2 = (undefined4 *)(local_3c * g_bss_003def28 + local_30);
                    for (loop_i = loop_i_2 >> 2; loop_i != 0; loop_i = loop_i - 1) {
                      *word_ptr_2 = *word_ptr;
                      word_ptr = word_ptr + (uint)flag_3 * -2 + 1;
                      word_ptr_2 = word_ptr_2 + (uint)flag_3 * -2 + 1;
                    }
                    for (loop_i_2 = loop_i_2 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
                      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
                      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_3 * -2 + 1);
                      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_3 * -2 + 1);
                    }
                    flag = false;
                    local_94[uval - local_14] = 0;
                    if (uval_2 <= uval_3) {
                      val = 0;
                      do {
                        if (*(int *)((int)local_94 + val) != 0) {
                          flag = true;
                        }
                        uval_2 = uval_2 + 1;
                        val = val + 4;
                      } while (uval_2 <= uval_3);
                    }
                    if (!flag) {
                      local_14 = local_2c;
                      break;
                    }
                    local_18 = LbTimerClock();
                    flag = true;
                  }
                }
                else {
                  LbNetLog(s_Warning___LbNetwork_Receive___un_0016f402,g_bss_003def24);
                }
              }
            } while (flag);
          }
          else {
            local_24 = 0;
            LbNetLog(s_Warning___LbNetwork_Receive___fa_0016f483,local_14,uval_3);
            g_bss_003def1c = 4;
            lbnet_EncodeMessageStub_0ff894();
            net_status = lbnet_Send_1002dc();
            if (net_status != '\0') {
              LbNetLog(s_Warning___LbNetwork_Receive___fa_0016f4d1);
            }
          }
        }
      } while (local_24 != 0);
      if (local_40 == local_1c) {
        LbScreenWaitVbi();
        g_bss_003def14 = 3;
        lbnet_EncodeMessageStub_0ff894();
        net_status = lbnet_Send_1002dc();
        if (net_status != '\0') {
          LbNetLog(s_Warning___LbNetwork_Receive___fa_0016f512);
        }
      }
    }
    LbNetLog(s_OUTSIDE_LbNetwork_Receive_0016f551);
  }
  return local_40;
}

/******************************************************************************
 * Function : LbNETWORK_0ff0ec (Original VA: 0xff0ec, Ghidra: FUN_000ff0ec)
 * Prototype: void LbNETWORK_0ff0ec(void);
 * Address  : 0xff0ec (Size: 30 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Destructing ServiceProvider'
 * Callers  : 3 -> bflib_system_io_fn_103134, watcom_crt_fn_11f3f0, watcom_crt_fn_11fbe0
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void LbNETWORK_0ff0ec(void)

{
  int arg_eax;
  
  *(undefined ***)(arg_eax + 0xd7c) = &PTR_FUN_000ff0ec_001747b4;
  LbNetLog(s_LbNETWORK___Destructing_ServiceP_00171411);
  return;
}

/******************************************************************************
 * Function : LbNETWORK_0ff10c (Original VA: 0xff10c, Ghidra: FUN_000ff10c)
 * Prototype: uint LbNETWORK_0ff10c(void);
 * Address  : 0xff10c (Size: 128 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Initialising ServiceProvider'
 * Callers  : 2 -> LbNETWORK_1032d8, LbNETWORK_11e314
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
uint LbNETWORK_0ff10c(void)

{
  uint uval;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uval_3;
  int arg_edx;
  undefined4 arg_ebx;
  uint uval_2;
  
  LbNetLog(s_LbNETWORK___Initialising_Service_0017143c);
  uval_3 = extraout_ECX;
  if (*(int *)(extraout_ECX + 0x7a4) != 0) {
    LbNetLog(s_Service_Provider_already_setup__00171468);
    uval_3 = extraout_ECX_00;
  }
  *(undefined4 *)(uval_3 + 0x7ac) = 0;
  uval_2 = uval_3;
  do {
    uval = uval_2 + 0x3d;
    *(undefined4 *)(uval_2 + 9) = 0;
    uval_2 = uval;
  } while (uval != uval_3 + 0x7a0);
  *(undefined4 *)(uval_3 + 0xd78) = arg_ebx;
  if (arg_edx != 0) {
    *(int *)(uval_3 + 0xd70) = arg_edx;
  }
  *(undefined4 *)(uval_3 + 0x7a8) = 0;
  *(undefined4 *)(uval_3 + 0xd74) = 0;
  *(int *)(uval_3 + 0x7a4) = *(int *)(uval_3 + 0x7a4) + 1;
  return uval & 0xffffff00;
}

/******************************************************************************
 * Function : LbNETWORK_0ff18c (Original VA: 0xff18c, Ghidra: FUN_000ff18c)
 * Prototype: ulonglong LbNETWORK_0ff18c(void);
 * Address  : 0xff18c (Size: 71 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Releasing ServiceProvider'
 * Callers  : 3 -> LbNETWORK_1032d8, LbNETWORK_103464, LbNETWORK_11e254
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
ulonglong LbNETWORK_0ff18c(void)

{
  undefined4 arg_edx;
  int val;
  undefined8 uval;
  
  uval = LbNetLog(s_LbNETWORK___Releasing_ServicePro_00171489);
  val = (int)((ulonglong)uval >> 0x20);
  *(undefined4 *)(val + 0x7a8) = 0;
  if (*(int *)(val + 0x7a4) != 1) {
    uval = LbNetLog(s_Service_Provider_not_setup__001714b2);
  }
  val = (int)((ulonglong)uval >> 0x20);
  *(int *)(val + 0x7a4) = *(int *)(val + 0x7a4) + -1;
  return CONCAT44(arg_edx,(int)uval) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : lbnet_AddPlayer_0ff1d4 (Original VA: 0xff1d4, Ghidra: FUN_000ff1d4)
 * Prototype: undefined4 lbnet_AddPlayer_0ff1d4(undefined4 param_1);
 * Address  : 0xff1d4 (Size: 308 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::AddPlayer() player table is ful'
 * Callers  : 10 -> lbnet_Receive_0ffb54, lbnet_Send_1002dc, lbnet_Start_103528, lbnet_Start_10646c, lbnet_Start_106da4, watcom_crt_fn_1082bc, watcom_crt_fn_109acc, watcom_crt_fn_10a3b0 ...
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined4 lbnet_AddPlayer_0ff1d4(undefined4 param_1)

{
  char ch;
  bool flag;
  int arg_eax;
  undefined4 arg_ecx;
  uint uval;
  uint uval_2;
  int loop_i;
  int arg_edx;
  int val;
  char *str_ptr;
  char *arg_ebx;
  char *str_ptr_2;
  
  flag = false;
  uval = 0;
  val = arg_eax;
  if (*(int *)(arg_eax + 0x7ac) != 0) {
    do {
      if (arg_edx == *(int *)(val + 0x7b1)) {
        flag = true;
      }
      uval = uval + 1;
      val = val + 0x2d;
    } while (uval < *(uint *)(arg_eax + 0x7ac));
  }
  if (!flag) {
    uval = *(uint *)(arg_eax + 0x7ac);
    if (0x1f < uval) {
      LbNetLog(s_WARNING_network__ServiceProvider_001714cf);
      return 0xff;
    }
    *(int *)(uval * 0x2d + 0x7b1 + arg_eax) = arg_edx;
    val = arg_eax + 0x7b0 + uval * 0x2d;
    str_ptr = (char *)(val + 0xd);
    if ((str_ptr != (char *)0x0) && (arg_ebx != (char *)0x0)) {
      uval_2 = 0xffffffff;
      str_ptr_2 = arg_ebx;
      do {
        if (uval_2 == 0) break;
        uval_2 = uval_2 - 1;
        ch = *str_ptr_2;
        str_ptr_2 = str_ptr_2 + 1;
      } while (ch != '\0');
      if (~uval_2 - 1 < 0x20) {
        do {
          ch = *arg_ebx;
          *str_ptr = ch;
          if (ch == '\0') break;
          ch = arg_ebx[1];
          arg_ebx = arg_ebx + 2;
          str_ptr[1] = ch;
          str_ptr = str_ptr + 2;
        } while (ch != '\0');
      }
      else {
        for (loop_i = 7; loop_i != 0; loop_i = loop_i + -1) {
          *(undefined4 *)str_ptr = *(undefined4 *)arg_ebx;
          arg_ebx = arg_ebx + 4;
          str_ptr = str_ptr + 4;
        }
        for (loop_i = 3; loop_i != 0; loop_i = loop_i + -1) {
          *str_ptr = *arg_ebx;
          arg_ebx = arg_ebx + 1;
          str_ptr = str_ptr + 1;
        }
        *(undefined1 *)(val + 0x2c) = 0;
      }
    }
    *(undefined4 *)(uval * 0x2d + 0x7b5 + arg_eax) = arg_ecx;
    *(undefined4 *)(uval * 0x2d + 0x7b9 + arg_eax) = param_1;
    *(int *)(arg_eax + 0x7ac) = *(int *)(arg_eax + 0x7ac) + 1;
  }
  return 0;
}

/******************************************************************************
 * Function : lbnet_EncodeMessageStub_0ff550 (Original VA: 0xff550, Ghidra: FUN_000ff550)
 * Prototype: void lbnet_EncodeMessageStub_0ff550(void);
 * Address  : 0xff550 (Size: 121 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 6 -> lbnet_Start_10646c, watcom_crt_fn_1082bc, watcom_crt_fn_109acc, watcom_crt_fn_10a3b0, lbnet_Start_11e554, lbnet_warning_network_serialsp_privatereceive_11ee0c
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_EncodeMessageStub_0ff550(void)

{
  char ch;
  char *arg_ecx;
  uint uval;
  int loop_i;
  uint *arg_edx;
  uint *extraout_EDX;
  char *str_ptr;
  uint *word_ptr;
  uint *word_ptr_2;
  byte flag;
  
  flag = 0;
  uval = 0xffffffff;
  str_ptr = arg_ecx;
  do {
    if (uval == 0) break;
    uval = uval - 1;
    ch = *str_ptr;
    str_ptr = str_ptr + 1;
  } while (ch != '\0');
  if (arg_edx == (uint *)0x0) {
    LbNetLog(s_WARNING_network__ServiceProvider_00171515);
    arg_edx = extraout_EDX;
  }
  else {
    *arg_edx = ~uval + 4 & 0xfffff | 0x1000000;
  }
  word_ptr_2 = (uint *)&stack0xfffffff4;
  word_ptr = arg_edx + 1;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(char *)word_ptr = (char)*word_ptr_2;
    word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr = (uint *)((int)word_ptr + (uint)flag * -2 + 1);
  }
  word_ptr_2 = arg_edx + 2;
  do {
    ch = *arg_ecx;
    *(char *)word_ptr_2 = ch;
    if (ch == '\0') {
      return;
    }
    ch = arg_ecx[1];
    arg_ecx = arg_ecx + 2;
    *(char *)((int)word_ptr_2 + 1) = ch;
    word_ptr_2 = (uint *)((int)word_ptr_2 + 2);
  } while (ch != '\0');
  return;
}

/******************************************************************************
 * Function : lbnet_EncodeMessageStub_0ff630 (Original VA: 0xff630, Ghidra: FUN_000ff630)
 * Prototype: void lbnet_EncodeMessageStub_0ff630(void);
 * Address  : 0xff630 (Size: 71 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 9 -> LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694, lbnet_HostDataCollection_0eedc0, lbnet_CompleteTwoPlayerExchange_100bb8, lbnet_Start_10646c, watcom_crt_fn_1082bc, watcom_crt_fn_109acc, watcom_crt_fn_10a3b0 ...
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_EncodeMessageStub_0ff630(void)

{
  undefined4 *arg_eax;
  int loop_i;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined4 local_14;
  
  flag = 0;
  if (arg_eax == (undefined4 *)0x0) {
    LbNetLog(s_WARNING_network__ServiceProvider_00171515);
  }
  else {
    *arg_eax = 0x2000004;
  }
  word_ptr = &local_14;
  word_ptr_2 = arg_eax + 1;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  return;
}

/******************************************************************************
 * Function : lbnet_EncodeMessageStub_0ff6a0 (Original VA: 0xff6a0, Ghidra: FUN_000ff6a0)
 * Prototype: void lbnet_EncodeMessageStub_0ff6a0(void);
 * Address  : 0xff6a0 (Size: 77 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 3 -> lbnet_HostDataCollection_0eedc0, lbnet_CompleteTwoPlayerExchange_100bb8, lbnet_TwoPlayerCallback_100e14
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_EncodeMessageStub_0ff6a0(void)

{
  uint *arg_eax;
  uint *extraout_ECX;
  int loop_i;
  uint arg_ebx;
  uint *word_ptr;
  uint *word_ptr_2;
  byte flag;
  uint local_10;
  
  flag = 0;
  if (arg_eax == (uint *)0x0) {
    LbNetLog(s_WARNING_network__ServiceProvider_00171515);
    arg_eax = extraout_ECX;
  }
  else {
    *arg_eax = (arg_ebx & 0xf) << 0x14 | 0x5000004;
  }
  word_ptr = &local_10;
  word_ptr_2 = arg_eax + 1;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(char *)word_ptr_2 = (char)*word_ptr;
    word_ptr = (uint *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  return;
}

/******************************************************************************
 * Function : lbnet_EncodeMessageStub_0ff6f0 (Original VA: 0xff6f0, Ghidra: FUN_000ff6f0)
 * Prototype: void lbnet_EncodeMessageStub_0ff6f0(void);
 * Address  : 0xff6f0 (Size: 77 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 2 -> LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_EncodeMessageStub_0ff6f0(void)

{
  uint *arg_eax;
  uint *extraout_ECX;
  int loop_i;
  uint arg_ebx;
  uint *word_ptr;
  uint *word_ptr_2;
  byte flag;
  uint local_10;
  
  flag = 0;
  if (arg_eax == (uint *)0x0) {
    LbNetLog(s_WARNING_network__ServiceProvider_00171515);
    arg_eax = extraout_ECX;
  }
  else {
    *arg_eax = (arg_ebx & 0xf) << 0x14 | 0x6000004;
  }
  word_ptr = &local_10;
  word_ptr_2 = arg_eax + 1;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(char *)word_ptr_2 = (char)*word_ptr;
    word_ptr = (uint *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  return;
}

/******************************************************************************
 * Function : lbnet_EncodeMessageStub_0ff894 (Original VA: 0xff894, Ghidra: FUN_000ff894)
 * Prototype: void lbnet_EncodeMessageStub_0ff894(void);
 * Address  : 0xff894 (Size: 43 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 10 -> LbNetwork_Join_0eda20, LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694, LbNetwork_CompleteExchange_0ef060, lbnet_RequestExchangeDataMsgCallback_0ef7a8, lbnet_SendSystemUserMessage_0efab0, LbNetwork_Send_0f3b50, LbNetwork_Receive_0f3ed8 ...
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_EncodeMessageStub_0ff894(void)

{
  uint *arg_eax;
  uint arg_ecx;
  uint arg_edx;
  char arg_bl;
  
  if (arg_eax == (uint *)0x0) {
    LbNetLog(s_WARNING_network__ServiceProvider_00171515);
    return;
  }
  *arg_eax = arg_edx & 0xfffff | (arg_ecx & 0xf) << 0x14 | (int)arg_bl << 0x18;
  return;
}

/******************************************************************************
 * Function : lbnet_DecodeMessageStub_0ff8c0 (Original VA: 0xff8c0, Ghidra: FUN_000ff8c0)
 * Prototype: void lbnet_DecodeMessageStub_0ff8c0(void);
 * Address  : 0xff8c0 (Size: 67 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr'
 * Callers  : 11 -> lbnet_TwoPlayerCallback_100e14, lbnet_TwoPlayerReqExDataMsgCallback_101074, bflib_system_io_fn_104410, lbnet_Start_10646c, watcom_crt_fn_1082bc, lbnet_resending_packet_10962c, watcom_crt_fn_109acc, watcom_crt_fn_10a3b0 ...
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_DecodeMessageStub_0ff8c0(void)

{
  uint *arg_eax;
  uint *arg_ecx;
  uint *arg_edx;
  undefined1 *arg_ebx;
  
  if (arg_eax == (uint *)0x0) {
    LbNetLog(s_WARNING_network__ServiceProvider_00171557);
    return;
  }
  if (arg_edx != (uint *)0x0) {
    *arg_edx = *arg_eax & 0xfffff;
  }
  if (arg_ecx != (uint *)0x0) {
    *arg_ecx = *arg_eax >> 0x14 & 0xf;
  }
  if (arg_ebx != (undefined1 *)0x0) {
    *arg_ebx = (char)(*arg_eax >> 0x18);
  }
  return;
}

/******************************************************************************
 * Function : lbnet_warning_network_niladdmsgcallback_hit_0ff904 (Original VA: 0xff904, Ghidra: FUN_000ff904)
 * Prototype: void lbnet_warning_network_niladdmsgcallback_hit_0ff904(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff904 (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilAddMsgCallback(%d, %s) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_warning_network_niladdmsgcallback_hit_0ff904(undefined4 param_1,undefined4 param_2)

{
  LbNetLog(s_WARNING_network__NilAddMsgCallba_00171599,param_1,param_2);
  return;
}

/******************************************************************************
 * Function : lbnet_warning_network_nildeletemsgcallback_hit_0ff920 (Original VA: 0xff920, Ghidra: FUN_000ff920)
 * Prototype: void lbnet_warning_network_nildeletemsgcallback_hit_0ff920(undefined4 param_1);
 * Address  : 0xff920 (Size: 21 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilDeleteMsgCallback(%d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_warning_network_nildeletemsgcallback_hit_0ff920(undefined4 param_1)

{
  LbNetLog(s_WARNING_network__NilDeleteMsgCal_001715cb,param_1);
  return;
}

/******************************************************************************
 * Function : lbnet_warning_network_nilhostmsgcallback_hit_0ff938 (Original VA: 0xff938, Ghidra: FUN_000ff938)
 * Prototype: void lbnet_warning_network_nilhostmsgcallback_hit_0ff938(undefined4 param_1);
 * Address  : 0xff938 (Size: 21 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilHostMsgCallback(%d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_warning_network_nilhostmsgcallback_hit_0ff938(undefined4 param_1)

{
  LbNetLog(s_WARNING_network__NilHostMsgCallb_001715fc,param_1);
  return;
}

/******************************************************************************
 * Function : lbnet_NilUserSysMsgCallback_0ff950 (Original VA: 0xff950, Ghidra: FUN_000ff950)
 * Prototype: void lbnet_NilUserSysMsgCallback_0ff950(void);
 * Address  : 0xff950 (Size: 16 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: NilUserSysMsgCallback() hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_NilUserSysMsgCallback_0ff950(void)

{
  LbNetLog(s_WARNING_network__NilUserSysMsgCa_0017162b);
  return;
}

/******************************************************************************
 * Function : lbnet_warning_network_niluserdatamsgcallbac_hit_0ff960 (Original VA: 0xff960, Ghidra: FUN_000ff960)
 * Prototype: undefined4 lbnet_warning_network_niluserdatamsgcallbac_hit_0ff960(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xff960 (Size: 35 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilUserDataMsgCallback(%d, %d %d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined4 lbnet_warning_network_niluserdatamsgcallbac_hit_0ff960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LbNetLog(s_WARNING_network__NilUserDataMsgC_0017165b,param_1,param_2,param_3);
  return 0;
}

/******************************************************************************
 * Function : lbnet_warning_network_nilrequestexchangedat_amsgcallback_0ff984 (Original VA: 0xff984, Ghidra: FUN_000ff984)
 * Prototype: void lbnet_warning_network_nilrequestexchangedat_amsgcallback_0ff984(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff984 (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilRequestExchangeDataMsgCallback(%d %d) hi'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_warning_network_nilrequestexchangedat_amsgcallback_0ff984(undefined4 param_1,undefined4 param_2)

{
  LbNetLog(s_WARNING_network__NilRequestExcha_00171695,param_1,param_2);
  return;
}

/******************************************************************************
 * Function : lbnet_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0 (Original VA: 0xff9a0, Ghidra: FUN_000ff9a0)
 * Prototype: void lbnet_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff9a0 (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilRequestCompositeExchangeDataMsgCallback('
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0(undefined4 param_1,undefined4 param_2)

{
  LbNetLog(s_WARNING_network__NilRequestCompo_001716d6,param_1,param_2);
  return;
}

/******************************************************************************
 * Function : lbnet_warning_network_nilunidirectionalmsgc_allback_0ff9bc (Original VA: 0xff9bc, Ghidra: FUN_000ff9bc)
 * Prototype: undefined4 lbnet_warning_network_nilunidirectionalmsgc_allback_0ff9bc(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff9bc (Size: 30 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilUnidirectionalMsgCallback(%d, %d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined4 lbnet_warning_network_nilunidirectionalmsgc_allback_0ff9bc(undefined4 param_1,undefined4 param_2)

{
  LbNetLog(s_WARNING_network__NilUnidirection_00171720,param_1,param_2);
  return 0;
}

/******************************************************************************
 * Function : lbnet_warning_network_nilsystemusermsgcallb_ack_0ff9dc (Original VA: 0xff9dc, Ghidra: FUN_000ff9dc)
 * Prototype: void lbnet_warning_network_nilsystemusermsgcallb_ack_0ff9dc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xff9dc (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: NilSystemUserMsgCallback(%d %d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_warning_network_nilsystemusermsgcallb_ack_0ff9dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LbNetLog(s_WARNING_network__NilSystemUserMs_0017175d,param_1,param_3);
  return;
}

/******************************************************************************
 * Function : lbnet_Receive_0ffb54 (Original VA: 0xffb54, Ghidra: FUN_000ffb54)
 * Prototype: undefined1 lbnet_Receive_0ffb54(void);
 * Address  : 0xffb54 (Size: 1892 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::Receive() not initialised'
 * Callers  : 12 -> LbNetwork_Join_0eda20, LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694, lbnet_HostDataCollection_0eedc0, LbNetwork_Send_0f3b50, LbNetwork_Receive_0f3ed8, bflib_system_io_fn_100708, lbnet_EnumeratePlayersForSessionRunning_100828 ...
 * Callees  : 5 -> LbNetLog, lbnet_AddPlayer_0ff1d4, bflib_system_io_fn_0ff308, bflib_system_io_fn_0ff9f8, watcom_crt_fn_11e0f4
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00100033) */
/* WARNING: Removing unreachable block (ram,0x00100041) */

undefined1 lbnet_Receive_0ffb54(void)

{
  char ch;
  code *str_ptr;
  int *int_ptr;
  int val;
  uint arg_eax;
  int loop_i;
  undefined4 uval;
  undefined1 extraout_CH;
  undefined1 extraout_CH_00;
  uint extraout_ECX;
  uint loop_i_2;
  uint extraout_ECX_00;
  uint *word_ptr;
  uint *word_ptr_2;
  char *str_ptr_2;
  uint *word_ptr_3;
  uint *word_ptr_4;
  byte flag;
  undefined1 local_4a0 [4];
  int local_49c;
  undefined1 local_498 [1136];
  undefined1 *local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  flag = 0;
  local_20 = 1;
  local_1c = 0;
  if (*(int *)(arg_eax + 0xd74) == 0) {
    LbNetLog(s_WARNING_network__ServiceProvider_00171795);
    return 0xff;
  }
  local_28 = local_498;
  local_24 = &local_49c;
  word_ptr_3 = (uint *)local_4a0;
switchD_000ffc7c_caseD_3:
  while( true ) {
    word_ptr = word_ptr_3;
    if (word_ptr[0x120] == 0) {
      return (char)word_ptr[0x121];
    }
    word_ptr[0x112] = 0x404;
    str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x2c);
    word_ptr[-1] = 0xffbe8;
    loop_i = (*str_ptr)();
    word_ptr_3 = word_ptr;
    if (loop_i != 0) break;
    word_ptr[0x120] = 0;
  }
  loop_i = 0;
  if (word_ptr == (uint *)0x0) {
    pcRamfffffffc = s_WARNING_network__ServiceProvider_00171557;
    uRamfffffff8 = 0xffc10;
    LbNetLog();
  }
  else {
    if (word_ptr != (uint *)0xfffffbb4) {
      word_ptr[0x113] = *word_ptr & 0xfffff;
    }
    if (word_ptr + 0x114 != (uint *)0x0) {
      word_ptr[0x114] = *word_ptr >> 0x14 & 0xf;
    }
    if (word_ptr + 0x122 != (uint *)0x0) {
      *(char *)(word_ptr + 0x122) = (char)(*word_ptr >> 0x18);
    }
  }
  if ((word_ptr[0x11c] & 8) != 0) {
    word_ptr[0x11c] = 0xffffffff;
  }
  switch((char)word_ptr[0x122]) {
  case '\0':
    if ((word_ptr[0x11c] & 1) != 0) {
      val = *(int *)(arg_eax + 0xd70);
      if (*(int *)(val + 0x10) == 0) {
        word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_001717d4;
        word_ptr[-2] = 0xffd46;
        LbNetLog();
      }
      else {
        word_ptr[-1] = *(undefined4 *)(arg_eax + 0xd78);
        word_ptr[-2] = word_ptr[0x114];
        word_ptr[-3] = word_ptr[0x113] + 4;
        word_ptr[-4] = word_ptr[0x111];
        str_ptr = *(code **)(val + 0x10);
        word_ptr[-5] = 0xffd37;
        loop_i = (*str_ptr)();
        word_ptr = word_ptr + -4;
      }
      if (loop_i == 0) {
        *(undefined4 *)((int)word_ptr + 0x448) = 0x404;
      }
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      *(undefined4 *)((int)word_ptr + -4) = 0xffd74;
      loop_i = (*str_ptr)();
      if (loop_i == 0) {
        *(char **)((int)word_ptr + -4) = s_WARNING_network__ServiceProvider_0017182a;
        *(undefined4 *)((int)word_ptr + -8) = 0xffd84;
        LbNetLog();
        *(undefined1 *)((int)word_ptr + 0x484) = extraout_CH;
      }
    }
    break;
  case '\x01':
    if ((word_ptr[0x11c] & 2) != 0) {
      word_ptr[0x112] = 0x404;
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      word_ptr[-1] = 0xffdcd;
      loop_i = (*str_ptr)();
      if (loop_i == 0) {
        word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_00171879;
        word_ptr[-2] = 0xffed5;
        LbNetLog();
      }
      else {
        word_ptr_3 = word_ptr + 0x109;
        word_ptr[0x11d] = arg_eax;
        word_ptr[-1] = (uint)(word_ptr + 0x116);
        word_ptr_2 = word_ptr + 1;
        word_ptr_4 = word_ptr + 0x116;
        for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_4 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
        }
        for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
          *(char *)word_ptr_4 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_4 = (uint *)((int)word_ptr_4 + (uint)flag * -2 + 1);
        }
        if (word_ptr_3 != (uint *)0x0) {
          word_ptr_2 = word_ptr + 2;
          word_ptr[-1] = (uint)word_ptr_3;
          do {
            loop_i_2 = *word_ptr_2;
            *(char *)word_ptr_3 = (char)loop_i_2;
            if ((char)loop_i_2 == '\0') break;
            ch = *(char *)((int)word_ptr_2 + 1);
            word_ptr_2 = (uint *)((int)word_ptr_2 + 2);
            *(char *)((int)word_ptr_3 + 1) = ch;
            word_ptr_3 = (uint *)((int)word_ptr_3 + 2);
          } while (ch != '\0');
        }
        word_ptr[-1] = 0;
        word_ptr_3 = (uint *)word_ptr[0x11f];
        word_ptr[-2] = 0xffe53;
        lbnet_AddPlayer_0ff1d4();
        word_ptr[-2] = (uint)(word_ptr + 0x115);
        word_ptr_2 = word_ptr + 0x115;
        for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_2 = *word_ptr_3;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
        }
        for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
          *(char *)word_ptr_2 = (char)*word_ptr_3;
          word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
        }
        if (word_ptr != (uint *)0xfffffc00) {
          str_ptr_2 = (char *)word_ptr[0x11d];
          word_ptr_3 = word_ptr + 0x100;
          word_ptr[-2] = (uint)word_ptr_3;
          do {
            ch = *str_ptr_2;
            *(char *)word_ptr_3 = ch;
            if (ch == '\0') break;
            ch = str_ptr_2[1];
            str_ptr_2 = str_ptr_2 + 2;
            *(char *)((int)word_ptr_3 + 1) = ch;
            word_ptr_3 = (uint *)((int)word_ptr_3 + 2);
          } while (ch != '\0');
        }
        int_ptr = *(int **)(arg_eax + 0xd70);
        word_ptr_3 = word_ptr + -1;
        if (*int_ptr != 0) {
          word_ptr[-2] = *(undefined4 *)(arg_eax + 0xd78);
          word_ptr[-3] = (uint)(word_ptr + 0x100);
          word_ptr[-4] = word_ptr[0x114];
          str_ptr = (code *)*int_ptr;
          word_ptr[-5] = 0xffec5;
          (*str_ptr)();
          word_ptr_3 = word_ptr + -4;
        }
      }
      goto switchD_000ffc7c_caseD_3;
    }
    break;
  case '\x02':
    if ((word_ptr[0x11c] & 4) == 0) {
      word_ptr[0x120] = 0;
    }
    else {
      word_ptr[0x112] = 0x404;
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      word_ptr[-1] = 0xfff12;
      loop_i = (*str_ptr)();
      if (loop_i == 0) {
        word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_001718cb;
        word_ptr[-2] = 0xfffa8;
        LbNetLog();
      }
      else {
        word_ptr[-1] = 0xfff34;
        bflib_system_io_fn_0ff9f8();
        word_ptr[-1] = (uint)(word_ptr + 0x118);
        word_ptr_2 = word_ptr + 1;
        word_ptr_4 = word_ptr + 0x118;
        for (loop_i_2 = extraout_ECX >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *word_ptr_4 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
        }
        for (loop_i_2 = extraout_ECX & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *(char *)word_ptr_4 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_4 = (uint *)((int)word_ptr_4 + (uint)flag * -2 + 1);
        }
        word_ptr_2 = (uint *)word_ptr[0x11f];
        word_ptr[-1] = 0xfff65;
        bflib_system_io_fn_0ff308();
        word_ptr[-1] = (uint)(word_ptr + 0x117);
        word_ptr_4 = word_ptr + 0x117;
        for (loop_i_2 = extraout_ECX_00 >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *word_ptr_4 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
        }
        for (loop_i_2 = extraout_ECX_00 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
          *(char *)word_ptr_4 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_4 = (uint *)((int)word_ptr_4 + (uint)flag * -2 + 1);
        }
        loop_i = *(int *)(arg_eax + 0xd70);
        if (*(int *)(loop_i + 4) != 0) {
          word_ptr[-1] = *(undefined4 *)(arg_eax + 0xd78);
          word_ptr[-2] = word_ptr[0x117];
          str_ptr = *(code **)(loop_i + 4);
          word_ptr[-3] = 0xfff98;
          (*str_ptr)();
          word_ptr_3 = word_ptr + -2;
        }
      }
    }
  case '\x03':
    goto switchD_000ffc7c_caseD_3;
  case '\x04':
    if ((word_ptr[0x11c] & 0x80) != 0) {
      word_ptr[0x112] = 0x404;
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      word_ptr[-1] = 0xffff3;
      loop_i = (*str_ptr)();
      if (loop_i == 0) {
        word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_00171910;
        word_ptr[-2] = 0x10008e;
        LbNetLog();
      }
      else {
        if (word_ptr == (uint *)0x0) {
          pcRamfffffffc = s_WARNING_network__ServiceProvider_00171557;
          uRamfffffff8 = 0x10000f;
          LbNetLog();
        }
        else if (word_ptr != (uint *)0xfffffb9c) {
          word_ptr[0x119] = *word_ptr & 0xfffff;
        }
        loop_i = *(int *)(arg_eax + 0xd70);
        if (*(int *)(loop_i + 0x20) != 0) {
          word_ptr[-1] = *(undefined4 *)(arg_eax + 0xd78);
          word_ptr[-2] = word_ptr[0x119];
          word_ptr[-3] = (uint)(word_ptr + 1);
          word_ptr[-4] = word_ptr[0x111];
          str_ptr = *(code **)(loop_i + 0x20);
          word_ptr[-5] = 0x10007f;
          (*str_ptr)();
          word_ptr_3 = word_ptr + -4;
        }
      }
      goto switchD_000ffc7c_caseD_3;
    }
    break;
  case '\x05':
    if ((word_ptr[0x11c] & 0x10) == 0) {
      word_ptr[0x120] = 0;
    }
    else {
      word_ptr[0x112] = 0x404;
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      word_ptr[-1] = 0x1000cb;
      loop_i = (*str_ptr)();
      if (loop_i == 0) {
        word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_00171955;
        word_ptr[-2] = 0x10012b;
        LbNetLog();
      }
      else {
        word_ptr[-1] = (uint)(word_ptr + 0x11a);
        word_ptr_2 = (uint *)word_ptr[0x11f];
        word_ptr_4 = word_ptr + 0x11a;
        for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_4 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
        }
        for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
          *(char *)word_ptr_4 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_4 = (uint *)((int)word_ptr_4 + (uint)flag * -2 + 1);
        }
        loop_i = *(int *)(arg_eax + 0xd70);
        if (*(int *)(loop_i + 0x14) != 0) {
          word_ptr[-1] = *(undefined4 *)(arg_eax + 0xd78);
          word_ptr[-2] = word_ptr[0x114];
          word_ptr[-3] = word_ptr[0x11a];
          str_ptr = *(code **)(loop_i + 0x14);
          word_ptr[-4] = 0x10011c;
          (*str_ptr)();
          word_ptr_3 = word_ptr + -3;
        }
      }
    }
    goto switchD_000ffc7c_caseD_3;
  case '\x06':
    if ((word_ptr[0x11c] & 0x20) == 0) {
      word_ptr[0x120] = 0;
    }
    else {
      word_ptr[0x112] = 0x404;
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      word_ptr[-1] = 0x100176;
      loop_i = (*str_ptr)();
      if (loop_i == 0) {
        word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_0017199a;
        word_ptr[-2] = 0x1001d6;
        LbNetLog();
      }
      else {
        word_ptr[-1] = (uint)(word_ptr + 0x11b);
        word_ptr_2 = (uint *)word_ptr[0x11f];
        word_ptr_4 = word_ptr + 0x11b;
        for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
          *word_ptr_4 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
        }
        for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
          *(char *)word_ptr_4 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_4 = (uint *)((int)word_ptr_4 + (uint)flag * -2 + 1);
        }
        loop_i = *(int *)(arg_eax + 0xd70);
        if (*(int *)(loop_i + 0x18) != 0) {
          word_ptr[-1] = *(undefined4 *)(arg_eax + 0xd78);
          word_ptr[-2] = word_ptr[0x114];
          word_ptr[-3] = word_ptr[0x11b];
          str_ptr = *(code **)(loop_i + 0x18);
          word_ptr[-4] = 0x1001c7;
          (*str_ptr)();
          word_ptr_3 = word_ptr + -3;
        }
      }
    }
    goto switchD_000ffc7c_caseD_3;
  case '\a':
    if ((word_ptr[0x11c] & 0x40) != 0) {
      val = *(int *)(arg_eax + 0xd70);
      if (*(int *)(val + 0x1c) == 0) {
        word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_001719df;
        word_ptr[-2] = 0x100231;
        LbNetLog();
      }
      else {
        word_ptr[-1] = *(undefined4 *)(arg_eax + 0xd78);
        word_ptr[-2] = word_ptr[0x113] + 4;
        word_ptr[-3] = word_ptr[0x111];
        str_ptr = *(code **)(val + 0x1c);
        word_ptr[-4] = 0x100223;
        loop_i = (*str_ptr)();
        word_ptr = word_ptr + -3;
      }
      if (loop_i == 0) {
        *(undefined4 *)((int)word_ptr + 0x448) = 0x404;
      }
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      *(undefined4 *)((int)word_ptr + -4) = 0x10025f;
      loop_i = (*str_ptr)();
      if (loop_i == 0) {
        *(char **)((int)word_ptr + -4) = s_WARNING_network__ServiceProvider_00171a3b;
        *(undefined4 *)((int)word_ptr + -8) = 0x10026f;
        LbNetLog();
        *(undefined1 *)((int)word_ptr + 0x484) = extraout_CH_00;
      }
    }
    *(undefined4 *)((int)word_ptr + 0x480) = 0;
    word_ptr_3 = word_ptr;
    goto switchD_000ffc7c_caseD_3;
  case '\b':
    if (((*(byte *)((int)word_ptr + 0x471) & 1) != 0) &&
       (*(int *)(*(int *)(arg_eax + 0xd70) + 0x24) != 0)) {
      word_ptr[-1] = 0xffcb1;
      uval = watcom_crt_fn_11e0f4();
      word_ptr[0x112] = word_ptr[0x113] + 4;
      str_ptr = *(code **)(*(int *)(arg_eax + 0xd7c) + 0x28);
      word_ptr[-1] = 0xffcdf;
      (*str_ptr)();
      word_ptr[-1] = uval;
      loop_i = *(int *)(arg_eax + 0xd70);
      word_ptr[-2] = word_ptr[0x111];
      str_ptr = *(code **)(loop_i + 0x24);
      word_ptr[-3] = 0xffcf1;
      (*str_ptr)();
      word_ptr_3 = word_ptr + -2;
    }
    goto switchD_000ffc7c_caseD_3;
  default:
    word_ptr[-1] = (uint)s_WARNING_network__ServiceProvider_00171a8a;
    word_ptr[-2] = 0x100291;
    LbNetLog();
    goto switchD_000ffc7c_caseD_3;
  }
  *(undefined4 *)((int)word_ptr + 0x480) = 0;
  word_ptr_3 = word_ptr;
  goto switchD_000ffc7c_caseD_3;
}

/******************************************************************************
 * Function : lbnet_Send_1002dc (Original VA: 0x1002dc, Ghidra: FUN_001002dc)
 * Prototype: undefined1 lbnet_Send_1002dc(void);
 * Address  : 0x1002dc (Size: 1068 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::Send() not initialised'
 * Callers  : 15 -> LbNetwork_Join_0eda20, LbNetwork_CompleteExchange_0ee3c0, LbNetwork_StartExchange_0ee694, lbnet_HostDataCollection_0eedc0, LbNetwork_CompleteExchange_0ef060, lbnet_RequestExchangeDataMsgCallback_0ef7a8, lbnet_RequestCompositeExchangeDataMsgCallback_0ef864, lbnet_SendSystemUserMessage_0efab0 ...
 * Callees  : 4 -> LbNetLog, lbnet_AddPlayer_0ff1d4, bflib_system_io_fn_0ff308, bflib_system_io_fn_0ff9f8
 ******************************************************************************/
undefined1 lbnet_Send_1002dc(void)

{
  char ch;
  uint *arg_eax;
  uint extraout_ECX;
  uint loop_i;
  uint extraout_ECX_00;
  int loop_i_2;
  uint arg_edx;
  uint extraout_EDX;
  uint *arg_ebx;
  char **val;
  undefined4 *word_ptr;
  uint *word_ptr_2;
  char *str_ptr;
  uint *word_ptr_3;
  undefined4 *word_ptr_4;
  byte flag;
  uint uStack_84;
  uint *puStack_80;
  uint uStack_7c;
  char *pcStack_78;
  char local_74 [28];
  char local_58 [36];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  undefined1 local_18;
  
  flag = 0;
  if (arg_eax[0x35d] == 0) {
    pcStack_78 = s_WARNING_network__ServiceProvider_00171ad5;
    uStack_7c = 0x100303;
    LbNetLog();
  }
  else {
    if (arg_ebx == (uint *)0x0) {
      pcStack_78 = s_WARNING_network__ServiceProvider_00171557;
      uStack_7c = 0x100327;
      LbNetLog();
      arg_edx = extraout_EDX;
    }
    else {
      if (&stack0x00000000 != (undefined1 *)0x34) {
        local_34 = *arg_ebx & 0xfffff;
      }
      if (&stack0x00000000 != (undefined1 *)0x30) {
        local_30 = *arg_ebx >> 0x14 & 0xf;
      }
      if (&stack0x00000000 != (undefined1 *)0x18) {
        local_18 = (undefined1)(*arg_ebx >> 0x18);
      }
    }
    str_ptr = local_74;
    if (arg_edx == *arg_eax) {
      word_ptr_4 = (undefined4 *)0x0;
      val = (char **)local_74;
      switch(local_18) {
      case 0:
        if (*(int *)(arg_eax[0x35c] + 0x10) == 0) {
          pcStack_78 = s_WARNING_network__ServiceProvider_00171b11;
          uStack_7c = 0x1003ee;
          LbNetLog();
          val = (char **)local_74;
        }
        else {
          pcStack_78 = (char *)arg_eax[0x35e];
          uStack_7c = local_30;
          puStack_80 = (uint *)(local_34 + 4);
          uStack_84 = *arg_eax;
          val = (char **)&uStack_84;
          word_ptr_4 = (undefined4 *)(**(code **)(arg_eax[0x35c] + 0x10))();
        }
        if (word_ptr_4 != (undefined4 *)0x0) {
          loop_i_2 = *(int *)((int)val + 0x40);
          *(undefined4 **)((int)val + -4) = word_ptr_4;
          word_ptr = *(undefined4 **)((int)val + 0x58);
          for (loop_i = loop_i_2 + 4U >> 2; loop_i != 0; loop_i = loop_i - 1) {
            *word_ptr_4 = *word_ptr;
            word_ptr = word_ptr + (uint)flag * -2 + 1;
            word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
          }
          for (loop_i = loop_i_2 + 4U & 3; loop_i != 0; loop_i = loop_i - 1) {
            *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr;
            word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
            word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag * -2 + 1);
          }
          *(undefined1 *)((int)val + 0x60) = 0;
          return *(undefined1 *)((int)val + 0x60);
        }
        break;
      case 1:
        word_ptr_2 = arg_ebx + 1;
        word_ptr_3 = &local_28;
        for (loop_i_2 = 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *word_ptr_3 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        }
        for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *(char *)word_ptr_3 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        }
        local_20 = arg_eax;
        if (&stack0x00000000 != &g_data_00000074) {
          word_ptr_2 = arg_ebx + 2;
          do {
            loop_i = *word_ptr_2;
            *str_ptr = (char)loop_i;
            if ((char)loop_i == '\0') break;
            ch = *(char *)((int)word_ptr_2 + 1);
            word_ptr_2 = (uint *)((int)word_ptr_2 + 2);
            str_ptr[1] = ch;
            str_ptr = str_ptr + 2;
          } while (ch != '\0');
        }
        val = &pcStack_78;
        pcStack_78 = (char *)0x0;
        uStack_7c = 0x10048c;
        lbnet_AddPlayer_0ff1d4();
        word_ptr_2 = arg_ebx + 1;
        word_ptr_3 = &local_2c;
        for (loop_i_2 = 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *word_ptr_3 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        }
        for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *(char *)word_ptr_3 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        }
        if (&stack0x00000000 != &g_data_00000058) {
          str_ptr = local_58;
          word_ptr_2 = local_20 + 2;
          do {
            loop_i = *word_ptr_2;
            *str_ptr = (char)loop_i;
            if ((char)loop_i == '\0') break;
            ch = *(char *)((int)word_ptr_2 + 1);
            word_ptr_2 = (uint *)((int)word_ptr_2 + 2);
            str_ptr[1] = ch;
            str_ptr = str_ptr + 2;
          } while (ch != '\0');
        }
        if (*(int *)arg_eax[0x35c] != 0) {
          uStack_7c = arg_eax[0x35e];
          puStack_80 = (uint *)local_58;
          uStack_84 = local_30;
          (**(code **)arg_eax[0x35c])();
          return 0;
        }
        break;
      case 2:
        pcStack_78 = (char *)0x100524;
        bflib_system_io_fn_0ff9f8();
        word_ptr_2 = arg_ebx + 1;
        word_ptr_3 = &local_24;
        for (loop_i = extraout_ECX >> 2; loop_i != 0; loop_i = loop_i - 1) {
          *word_ptr_3 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        }
        for (loop_i = extraout_ECX & 3; loop_i != 0; loop_i = loop_i - 1) {
          *(char *)word_ptr_3 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        }
        pcStack_78 = (char *)0x10054a;
        bflib_system_io_fn_0ff308();
        word_ptr_2 = arg_ebx + 1;
        word_ptr_3 = &local_2c;
        for (loop_i = extraout_ECX_00 >> 2; loop_i != 0; loop_i = loop_i - 1) {
          *word_ptr_3 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        }
        for (loop_i = extraout_ECX_00 & 3; loop_i != 0; loop_i = loop_i - 1) {
          *(char *)word_ptr_3 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        }
        val = (char **)local_74;
        if (*(int *)(arg_eax[0x35c] + 4) != 0) {
          pcStack_78 = (char *)arg_eax[0x35e];
          uStack_7c = local_2c;
          puStack_80 = (uint *)0x100579;
          (**(code **)(arg_eax[0x35c] + 4))();
          return 0;
        }
        break;
      case 3:
        break;
      case 4:
        if (*(int *)(arg_eax[0x35c] + 0x20) != 0) {
          pcStack_78 = (char *)arg_eax[0x35e];
          uStack_7c = local_34;
          puStack_80 = arg_ebx + 1;
          uStack_84 = *arg_eax;
          (**(code **)(arg_eax[0x35c] + 0x20))();
          return 0;
        }
        pcStack_78 = s_WARNING_network__ServiceProvider_00171b64;
        uStack_7c = 0x1005ce;
        LbNetLog();
        return 0;
      case 5:
        word_ptr_2 = arg_ebx + 1;
        word_ptr_3 = &local_2c;
        for (loop_i_2 = 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *word_ptr_3 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        }
        for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *(char *)word_ptr_3 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        }
        val = (char **)local_74;
        if (*(int *)(arg_eax[0x35c] + 0x14) != 0) {
          pcStack_78 = (char *)arg_eax[0x35e];
          uStack_7c = local_30;
          puStack_80 = (uint *)local_2c;
          uStack_84 = 0x100627;
          (**(code **)(arg_eax[0x35c] + 0x14))();
          return 0;
        }
        break;
      case 6:
        word_ptr_2 = arg_ebx + 1;
        word_ptr_3 = &local_2c;
        for (loop_i_2 = 1; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *word_ptr_3 = *word_ptr_2;
          word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
          word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
        }
        for (loop_i_2 = 0; loop_i_2 != 0; loop_i_2 = loop_i_2 + -1) {
          *(char *)word_ptr_3 = (char)*word_ptr_2;
          word_ptr_2 = (uint *)((int)word_ptr_2 + (uint)flag * -2 + 1);
          word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
        }
        val = (char **)local_74;
        if (*(int *)(arg_eax[0x35c] + 0x18) != 0) {
          pcStack_78 = (char *)arg_eax[0x35e];
          uStack_7c = local_30;
          puStack_80 = (uint *)local_2c;
          uStack_84 = 0x10067d;
          (**(code **)(arg_eax[0x35c] + 0x18))();
          return 0;
        }
        break;
      default:
        pcStack_78 = s_WARNING_network__ServiceProvider_00171bb9;
        uStack_7c = 0x100699;
        LbNetLog();
        return 0;
      case 8:
        val = (char **)local_74;
        if (*(int *)(arg_eax[0x35c] + 0x24) != 0) {
          uStack_7c = local_2c;
          puStack_80 = (uint *)0x1003a5;
          (**(code **)(arg_eax[0x35c] + 0x24))();
          val = (char **)&uStack_7c;
        }
      }
      *(undefined1 *)((int)val + 0x60) = 0;
      return *(undefined1 *)((int)val + 0x60);
    }
    pcStack_78 = (char *)0x1006db;
    ch = (**(code **)(arg_eax[0x35f] + 0x30))();
    if (ch == '\0') {
      return 0;
    }
    pcStack_78 = s_WARNING_network__ServiceProvider_00171c01;
    uStack_7c = 0x1006f9;
    LbNetLog();
  }
  return 0xff;
}

/******************************************************************************
 * Function : lbnet_DecodeMessageStub_100718 (Original VA: 0x100718, Ghidra: FUN_00100718)
 * Prototype: undefined1 lbnet_DecodeMessageStub_100718(void);
 * Address  : 0x100718 (Size: 272 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr'
 * Callers  : 1 -> lbnet_Stop_11eaf8
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined1 lbnet_DecodeMessageStub_100718(void)

{
  char ch;
  int *arg_eax;
  undefined1 extraout_CH;
  int loop_i;
  undefined4 *arg_edx;
  int val;
  undefined4 *word_ptr;
  int *int_ptr;
  byte flag;
  undefined8 uval;
  int local_28;
  uint local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  byte local_18;
  
  flag = 0;
  local_1c = 0;
  local_20 = arg_edx;
  if (arg_edx == (undefined4 *)0x0) {
    uval = LbNetLog(s_WARNING_network__ServiceProvider_00171557);
  }
  else {
    uval = 0;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      uval = 0;
      local_18 = (byte)((uint)*arg_edx >> 0x18);
    }
  }
  val = (int)((ulonglong)uval >> 0x20);
  if ((local_18 == 0) || ((1 < local_18 && (local_18 != 2)))) {
    val = 1;
  }
  else {
    word_ptr = local_20 + 1;
    int_ptr = &local_28;
    for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
      *int_ptr = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      int_ptr = int_ptr + (uint)flag * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)int_ptr = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
      int_ptr = (undefined4 *)((int)int_ptr + (uint)flag * -2 + 1);
    }
  }
  if (val == 0) {
    if (arg_eax[0x1eb] != 0) {
      local_24 = 0;
      int_ptr = arg_eax;
      do {
        if (((*(int *)((int)int_ptr + 0x7b1) != *arg_eax) &&
            (*(int *)((int)int_ptr + 0x7b1) != local_28)) &&
           (ch = (**(code **)(arg_eax[0x35f] + 0x30))(), ch != '\0')) {
          local_1c = 0xff;
          LbNetLog(s_WARNING_network__ServiceProvider_00171c9e);
        }
        int_ptr = (int *)((int)int_ptr + 0x2d);
        local_24 = local_24 + 1;
      } while (local_24 < (uint)arg_eax[0x1eb]);
    }
  }
  else {
    LbNetLog(s_WARNING_network__ServiceProvider_00171c46,*(undefined1 *)local_20);
    local_1c = extraout_CH;
  }
  return local_1c;
}

/******************************************************************************
 * Function : lbnet_EnumeratePlayersForSessionRunning_100828 (Original VA: 0x100828, Ghidra: FUN_00100828)
 * Prototype: undefined1 lbnet_EnumeratePlayersForSessionRunning_100828(void);
 * Address  : 0x100828 (Size: 128 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: ServiceProvider::EnumeratePlayersForSessionRunni'
 * Callers  : 1 -> bflib_system_io_fn_104d44
 * Callees  : 2 -> LbNetLog, lbnet_Receive_0ffb54
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined1 lbnet_EnumeratePlayersForSessionRunning_100828(void)

{
  char net_status;
  int arg_eax;
  undefined4 arg_ebx;
  uint uval;
  int *int_ptr;
  int *int_ptr_2;
  int *int_ptr_3;
  int val;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int aiStack_28 [2];
  char *local_20;
  int local_1c;
  char local_18;
  undefined1 local_14;
  
  int_ptr_3 = aiStack_28 + 3;
  local_14 = 0xff;
  local_20 = (char *)0x100845;
  net_status = lbnet_Receive_0ffb54();
  if (net_status == '\0') {
    local_18 = net_status;
    uval = 0;
    if (*(int *)(arg_eax + 0x7ac) != 0) {
      val = arg_eax + 0x7b0;
      int_ptr = aiStack_28 + 3;
      do {
        int_ptr[-1] = arg_ebx;
        int_ptr_3 = int_ptr + -2;
        int_ptr[-2] = val;
        uval = uval + 1;
        int_ptr[-3] = 0x10086d;
        (*(code *)*int_ptr)();
        val = val + 0x2d;
        int_ptr = int_ptr + -2;
      } while (uval < *(uint *)(arg_eax + 0x7ac));
    }
    if ((char)int_ptr_3[1] == '\0') {
      *(undefined1 *)(int_ptr_3 + 2) = 0;
      goto LAB_0010089c;
    }
    int_ptr_2 = int_ptr_3 + 0xffffffff;
    int_ptr_3[0xffffffff] = (int)s_WARNING_network__ServiceProvider_00171cf3;
  }
  else {
    int_ptr_2 = aiStack_28 + 2;
    local_20 = s_WARNING_network__ServiceProvider_00171d5a;
  }
  *(undefined4 *)((int)int_ptr_2 + -4) = 0x100899;
  LbNetLog();
  int_ptr_3 = (int *)((int)int_ptr_2 + 4);
LAB_0010089c:
  return *(undefined1 *)((int)int_ptr_3 + 8);
}

/******************************************************************************
 * Function : lbnet_GenericSerialInit_1008d0 (Original VA: 0x1008d0, Ghidra: FUN_001008d0)
 * Prototype: undefined8 lbnet_GenericSerialInit_1008d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
 * Address  : 0x1008d0 (Size: 342 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: GenericSerialInit() failure on ServiceProvider::'
 * Callers  : 1 -> LbNetwork_Init_0ed4e0
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0ed020, LbNetLog, watcom_crt_fn_11e174
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
lbnet_GenericSerialInit_1008d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char ch;
  int val;
  int val_2;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uval;
  undefined1 extraout_CL_01;
  undefined4 *word_ptr;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  int local_1c;
  
  local_28 = g_bss_003d97d0;
  local_24 = &g_data_001747e8;
  local_20 = 0;
  g_bss_003d97d0 = &local_28;
  if (g_net_service_provider_ptr != 0) {
    uStack_2c = 0x100912;
    g_bss_003d97d0 = &local_28;
    (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x1c))();
    if (g_net_service_provider_ptr != 0) {
      uStack_2c = 0x100928;
      (*(code *)**(undefined4 **)(g_net_service_provider_ptr + 0xd7c))();
    }
    g_net_service_provider_ptr = 0;
  }
  uStack_2c = 0x100946;
  LbScreenWaitVbi();
  uStack_2c = 0x10095c;
  LbScreenWaitVbi();
  g_data_0019556c = 0xfa;
  PTR_FUN_000ef7a8_00195584 = lbnet_TwoPlayerReqExDataMsgCallback_101074;
  g_bss_003dfa3c = 0;
  g_bss_003dfa40 = 0;
  g_bss_003e024c = 0;
  g_bss_003e0250 = 0;
  g_net_composite_buffer_ptr = 0;
  g_net_bss_003dd8ac = 1;
  PTR_FUN_000ef14c_00195580 = lbnet_TwoPlayerCallback_100e14;
  if (param_5 != 0) {
    *(undefined4 *)(param_5 + 0xc) = 1;
  }
  uStack_2c = 0x1009ae;
  val = bflib_system_io_fn_0ed020();
  val_2 = 0;
  uval = extraout_CL;
  if (val != 0) {
    local_20 = 1;
    uStack_2c = 0x1009c8;
    local_1c = val;
    val_2 = watcom_crt_fn_11e174();
    local_20 = 0;
    uval = extraout_CL_00;
  }
  word_ptr = &local_28;
  g_net_service_provider_ptr = val_2;
  if (val_2 != 0) {
    uStack_2c = 0;
    ppuStack_30 = &PTR_FUN_000ef460_00195570;
    uStack_34 = 0;
    uStack_38 = param_4;
    uStack_3c = param_3;
    uStack_40 = param_2;
    word_ptr = &local_44;
    local_44 = param_1;
    ch = (**(code **)(*(int *)(val_2 + 0xd7c) + 0x18))();
    if (ch == '\0') {
      uval = 0;
      word_ptr = &local_44;
    }
    else {
      LbNetLog(s_WARNING_network__GenericSerialIn_00171dfc);
      uval = extraout_CL_01;
    }
  }
  g_bss_003d97d0 = (undefined4 *)*word_ptr;
  return CONCAT44(word_ptr[7],CONCAT31((int3)((uint)*word_ptr >> 8),uval));
}

/******************************************************************************
 * Function : lbnet_StartTwoPlayerExchange_100a28 (Original VA: 0x100a28, Ghidra: FUN_00100a28)
 * Prototype: ulonglong lbnet_StartTwoPlayerExchange_100a28(void);
 * Address  : 0x100a28 (Size: 398 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: StartTwoPlayerExchange() failure on SP::Send()'
 * Callers  : 1 -> LbNetwork_StartExchange_0ee694
 * Callees  : 5 -> LbTimerClock, LbNetLog, lbnet_EncodeMessageStub_0ff894, lbnet_Receive_0ffb54, lbnet_Send_1002dc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong lbnet_StartTwoPlayerExchange_100a28(void)

{
  char net_status;
  undefined4 *arg_eax;
  undefined4 uval;
  uint loop_i;
  uint loop_i_2;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  
  flag = 0;
  if ((&g_net_bss_003dd8b4)[g_bss_003e024c * 0xb] == 0) {
    lbnet_Receive_0ffb54();
  }
  g_net_bss_003dd890 = 0;
  if ((&g_net_bss_003dd8b4)[g_bss_003e024c * 0xb] != 0) {
    lbnet_Receive_0ffb54();
    lbnet_Receive_0ffb54();
  }
  loop_i_2 = g_net_exchange_packet_size;
  word_ptr = arg_eax;
  word_ptr_2 = (undefined4 *)(g_net_bss_003dd888 * g_net_exchange_packet_size + g_net_exchange_buffer_ptr);
  for (loop_i = g_net_exchange_packet_size >> 2; loop_i != 0; loop_i = loop_i - 1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i_2 = loop_i_2 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  loop_i_2 = g_bss_003e024c * 0xb;
  if ((&g_net_bss_003dd8b4)[g_bss_003e024c * 0xb] != 0) {
    lbnet_EncodeMessageStub_0ff894();
    net_status = lbnet_Send_1002dc();
    if (net_status != '\0') {
      uval = LbNetLog(s_WARNING_network__StartTwoPlayerE_00171e47);
      return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval >> 8),0xff));
    }
    g_bss_003dfa3c = LbTimerClock();
    loop_i = g_net_exchange_packet_size;
    if (g_bss_003dde30 == 0) {
      g_bss_003dfa40 = g_data_0019556c;
    }
    else {
      g_bss_003dfa40 = g_bss_003dde30;
    }
    word_ptr = &g_bss_003dfa44;
    word_ptr_2 = &g_bss_003dfe48;
    for (loop_i_2 = g_net_exchange_packet_size >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    }
    for (loop_i = loop_i & 3; loop_i_2 = g_net_exchange_packet_size, loop_i != 0; loop_i = loop_i - 1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    }
    word_ptr = &g_bss_003dfa44;
    for (loop_i = g_net_exchange_packet_size >> 2; loop_i != 0; loop_i = loop_i - 1) {
      *word_ptr = *arg_eax;
      arg_eax = arg_eax + (uint)flag * -2 + 1;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
    }
    for (loop_i = loop_i_2 & 3; loop_i != 0; loop_i = loop_i - 1) {
      *(undefined1 *)word_ptr = *(undefined1 *)arg_eax;
      arg_eax = (undefined4 *)((int)arg_eax + (uint)flag * -2 + 1);
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    }
  }
  return CONCAT44(arg_edx,loop_i_2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : lbnet_CompleteTwoPlayerExchange_100bb8 (Original VA: 0x100bb8, Ghidra: FUN_00100bb8)
 * Prototype: undefined8 lbnet_CompleteTwoPlayerExchange_100bb8(void);
 * Address  : 0x100bb8 (Size: 601 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: CompleteTwoPlayerExchange() failure on SP::Send('
 * Callers  : 1 -> LbNetwork_StartExchange_0ee694
 * Callees  : 7 -> LbTimerClock, LbNetLog, bflib_system_io_fn_0ff628, lbnet_EncodeMessageStub_0ff630, lbnet_EncodeMessageStub_0ff6a0, lbnet_Receive_0ffb54, lbnet_Send_1002dc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 lbnet_CompleteTwoPlayerExchange_100bb8(void)

{
  bool flag;
  char net_status;
  int clock_ms;
  uint uval;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 arg_edx;
  int val;
  uint uval_2;
  char *str_ptr;
  undefined1 local_1c;
  
  local_1c = 0xff;
  uval = g_bss_003e024c * 0xb;
  uval_2 = 1;
  flag = true;
  if ((&g_net_bss_003dd8b4)[g_bss_003e024c * 0xb] == 0) {
    uval = uval & 0xffffff00;
  }
  else {
    val = -3;
    while (flag) {
      lbnet_Receive_0ffb54();
      if (g_net_bss_003dd890 == 0) {
        clock_ms = LbTimerClock();
        uval = clock_ms - g_bss_003dfa3c;
        if ((int)uval < 0) {
          uval = -uval;
        }
        if (g_bss_003dfa40 < uval) {
          LbNetLog(s_Timed_out___d__waiting_for_seq___00171e8a,extraout_ECX_00,g_net_composite_buffer_ptr,
                       g_bss_003dfa40);
          val = val + 1;
          LbNetLog(s_Retries____d_00171eb5,extraout_ECX_01 + 1);
          if (extraout_ECX_02 < 0x65) {
            uval = bflib_system_io_fn_0ff628();
            if (8 < uval) {
              str_ptr = s_WARNING_network__CompleteTwoPlay_00171f75;
              goto LAB_00100d83;
            }
            lbnet_EncodeMessageStub_0ff6a0();
            LbNetLog(s_Requesting_resend_of_packet___d__00171fcc,g_net_composite_buffer_ptr);
            net_status = lbnet_Send_1002dc();
            if (net_status != '\0') {
              str_ptr = s_WARNING_network__CompleteTwoPlay_00171fee;
              goto LAB_00100d83;
            }
          }
          else {
            uval = bflib_system_io_fn_0ff628();
            if (uval < 9) {
              lbnet_EncodeMessageStub_0ff630();
              net_status = lbnet_Send_1002dc();
              if (net_status == '\0') {
                str_ptr = s_Sent_delete_player_message_00171f13;
              }
              else {
                str_ptr = s_WARNING_network__CompleteTwoPlay_00171f2f;
              }
              uval = LbNetLog(str_ptr);
              goto LAB_00100e04;
            }
            str_ptr = s_WARNING_network__CompleteTwoPlay_00171ec3;
LAB_00100d83:
            LbNetLog(str_ptr);
          }
          g_bss_003dfa3c = LbTimerClock();
          g_bss_003dfa40 = g_bss_003dde30;
          if ((g_bss_003dde30 == 0) && (g_bss_003dfa40 = g_data_0019556c, 2 < extraout_ECX_03)) {
            if (extraout_ECX_03 == 3) {
              g_bss_003dfa40 = g_data_0019556c * 2;
            }
            else {
              g_bss_003dfa40 = g_data_0019556c * 4 * val;
            }
          }
        }
      }
      else {
        uval_2 = 0;
        flag = false;
        if (extraout_ECX == 0) {
          clock_ms = LbTimerClock();
          uval = clock_ms - g_bss_003dfa3c;
          if ((int)uval < 0) {
            uval = -uval;
          }
          if ((g_net_bss_003dd8a4 == 0) || (g_bss_003dfa34 < uval)) {
            g_bss_003dfa34 = uval;
          }
          g_net_bss_003dd8a4 = g_net_bss_003dd8a4 + 1;
          if (0x31 < g_net_bss_003dd8a4) {
            g_data_0019556c = g_bss_003dfa34 * 3;
            g_net_bss_003dd8a4 = 0;
            if (g_data_0019556c < 0xfa) {
              g_data_0019556c = 0xfa;
            }
          }
        }
        local_1c = 0;
      }
      uval = g_bss_003e024c * 0x2c;
      if ((&g_net_bss_003dd8b4)[g_bss_003e024c * 0xb] == 0) {
        uval_2 = 0;
        flag = false;
        local_1c = 0;
      }
    }
    if ((g_net_composite_buffer_ptr != 0xf) && (g_net_composite_buffer_ptr = g_net_composite_buffer_ptr + 1, 0xe < g_net_composite_buffer_ptr)) {
      g_net_composite_buffer_ptr = uval_2;
    }
LAB_00100e04:
    uval = CONCAT31((int3)(uval >> 8),local_1c);
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : lbnet_TwoPlayerCallback_100e14 (Original VA: 0x100e14, Ghidra: FUN_00100e14)
 * Prototype: int lbnet_TwoPlayerCallback_100e14(undefined4 param_1,int param_2,int param_3);
 * Address  : 0x100e14 (Size: 605 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: TwoPlayerCallback() Unexpected sequence number: '
 * Callers  : 0 -> 
 * Callees  : 6 -> LbNetLog, bflib_system_io_fn_0ff628, lbnet_EncodeMessageStub_0ff6a0, lbnet_EncodeMessageStub_0ff894, lbnet_DecodeMessageStub_0ff8c0, lbnet_Send_1002dc
 ******************************************************************************/
int lbnet_TwoPlayerCallback_100e14(undefined4 param_1,int param_2,int param_3)

{
  bool flag;
  char net_status;
  uint uval;
  int val;
  
  val = 0;
  if (g_net_local_player_id == g_net_host_player_id) {
    if (param_2 != g_net_exchange_packet_size) {
      LbNetLog(s_WARNING_network__TwoPlayerCallba_00172167,param_2);
      return 0;
    }
    if ((param_3 == g_net_composite_buffer_ptr) || (param_3 == 0xf)) {
      g_net_bss_003dd890 = 1;
      val = g_net_exchange_buffer_ptr + g_net_exchange_packet_size;
    }
    else {
      LbNetLog(s_WARNING_network__TwoPlayerCallba_00172034,param_3,g_net_composite_buffer_ptr);
      if (param_3 == 0) {
        param_3 = 0xe;
      }
      else {
        param_3 = param_3 + -1;
      }
      if (param_3 == g_net_composite_buffer_ptr) {
        uval = bflib_system_io_fn_0ff628();
        if (8 < uval) {
          LbNetLog(s_WARNING_network__CompleteTwoPlay_0017208c);
          return 0;
        }
        lbnet_EncodeMessageStub_0ff6a0();
        LbNetLog(s_Requesting_resend_of_seq__d_beca_001720e3,g_net_composite_buffer_ptr);
        net_status = lbnet_Send_1002dc();
        if (net_status != '\0') {
          LbNetLog(s_WARNING_network__CompleteTwoPlay_00172121);
          return 0;
        }
      }
    }
  }
  else if (param_2 == g_net_exchange_packet_size) {
    flag = true;
    if (g_net_composite_buffer_ptr == 0xf) {
      g_net_composite_buffer_ptr = param_3;
      lbnet_DecodeMessageStub_0ff8c0();
      lbnet_EncodeMessageStub_0ff894();
    }
    else if (param_3 != g_net_composite_buffer_ptr) {
      flag = false;
    }
    if (flag) {
      g_net_bss_003dd890 = 1;
      return g_net_exchange_buffer_ptr;
    }
    LbNetLog(s_WARNING_network__TwoPlayerCallba_001721a2,param_3,g_net_composite_buffer_ptr);
    if (param_3 == 0) {
      param_3 = 0xe;
    }
    else {
      param_3 = param_3 + -1;
    }
    if (param_3 == g_net_composite_buffer_ptr) {
      uval = bflib_system_io_fn_0ff628();
      if (8 < uval) {
        LbNetLog(s_WARNING_network__CompleteTwoPlay_001721fa);
        return 0;
      }
      lbnet_EncodeMessageStub_0ff6a0();
      LbNetLog(s_Requesting_resend_of_seq__d_beca_00172251,g_net_composite_buffer_ptr);
      net_status = lbnet_Send_1002dc();
      if (net_status != '\0') {
        LbNetLog(s_WARNING_network__CompleteTwoPlay_0017228f);
        return 0;
      }
    }
  }
  else {
    LbNetLog(s_WARNING_network__TwoPlayerCallba_001722d5,param_2);
  }
  return val;
}

/******************************************************************************
 * Function : lbnet_TwoPlayerReqExDataMsgCallback_101074 (Original VA: 0x101074, Ghidra: FUN_00101074)
 * Prototype: void lbnet_TwoPlayerReqExDataMsgCallback_101074(undefined4 param_1,int param_2);
 * Address  : 0x101074 (Size: 227 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: TwoPlayerReqExDataMsgCallback() could not find r'
 * Callers  : 0 -> 
 * Callees  : 4 -> LbTimerClock, LbNetLog, lbnet_DecodeMessageStub_0ff8c0, lbnet_Send_1002dc
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lbnet_TwoPlayerReqExDataMsgCallback_101074(undefined4 param_1,int param_2)

{
  char net_status;
  undefined4 *word_ptr;
  char *str_ptr;
  int local_14;
  
  word_ptr = (undefined4 *)0x0;
  LbNetLog(s_Received_Resend_Request_for_seq_n_00172310,param_2);
  if (g_net_composite_buffer_ptr == 0xf) {
    word_ptr = &g_bss_003dfa44;
  }
  else {
    lbnet_DecodeMessageStub_0ff8c0();
    if (param_2 == local_14) {
      word_ptr = &g_bss_003dfa44;
    }
    lbnet_DecodeMessageStub_0ff8c0();
    if (param_2 == local_14) {
      word_ptr = &g_bss_003dfe48;
    }
  }
  if (word_ptr == (undefined4 *)0x0) {
    str_ptr = s_WARNING_network__TwoPlayerReqExD_00172337;
  }
  else {
    net_status = lbnet_Send_1002dc();
    if (net_status == '\0') {
      if (word_ptr == &g_bss_003dfe48) {
        lbnet_Send_1002dc();
        if (param_2 == 0xe) {
          LbNetLog(s_Resending_lastMessage_for_seq_no_0017238e,0);
        }
        else {
          LbNetLog(s_Resending_lastMessage_for_seq_no_001723bb,param_2 + 1);
        }
      }
      goto LAB_00101143;
    }
    str_ptr = s_WARNING_network__TwoPlayerReqExD_001723e8;
  }
  LbNetLog(str_ptr);
LAB_00101143:
  g_bss_003dfa3c = LbTimerClock();
  return;
}

/******************************************************************************
 * Function : lbnet_GenericModemInit_101158 (Original VA: 0x101158, Ghidra: FUN_00101158)
 * Prototype: undefined8 lbnet_GenericModemInit_101158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
 * Address  : 0x101158 (Size: 350 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: GenericModemInit() failure on ServiceProvider::I'
 * Callers  : 1 -> LbNetwork_Init_0ed4e0
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0ed020, LbNetLog, watcom_crt_fn_11f470
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
lbnet_GenericModemInit_101158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char ch;
  int val;
  int val_2;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uval;
  undefined1 extraout_CL_01;
  undefined4 *word_ptr;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  int local_1c;
  
  local_28 = g_bss_003d97d0;
  local_24 = &g_data_001747f4;
  local_20 = 0;
  uStack_2c = 0x101196;
  g_bss_003d97d0 = &local_28;
  LbScreenWaitVbi();
  uStack_2c = 0x1011a9;
  LbScreenWaitVbi();
  g_bss_003dfa3c = 0;
  g_bss_003dfa40 = 0;
  g_bss_003e024c = 0;
  g_bss_003e0250 = 0;
  g_net_composite_buffer_ptr = 0;
  g_data_0019556c = 0xfa;
  if (g_net_service_provider_ptr != 0) {
    uStack_2c = 0x1011e7;
    (**(code **)(*(int *)(g_net_service_provider_ptr + 0xd7c) + 0x1c))();
    if (g_net_service_provider_ptr != 0) {
      uStack_2c = 0x1011fd;
      (*(code *)**(undefined4 **)(g_net_service_provider_ptr + 0xd7c))();
    }
    g_net_service_provider_ptr = 0;
  }
  g_net_bss_003dd8ac = 1;
  PTR_FUN_000ef14c_00195580 = lbnet_TwoPlayerCallback_100e14;
  PTR_FUN_000ef7a8_00195584 = lbnet_TwoPlayerReqExDataMsgCallback_101074;
  if (param_5 != 0) {
    *(undefined4 *)(param_5 + 0xc) = 2;
  }
  uStack_2c = 0x10123e;
  val = bflib_system_io_fn_0ed020();
  val_2 = 0;
  uval = extraout_CL;
  if (val != 0) {
    local_20 = 1;
    uStack_2c = 0x101258;
    local_1c = val;
    val_2 = watcom_crt_fn_11f470();
    local_20 = 0;
    uval = extraout_CL_00;
  }
  word_ptr = &local_28;
  g_net_service_provider_ptr = val_2;
  if (val_2 != 0) {
    uStack_2c = 0;
    ppuStack_30 = &PTR_FUN_000ef460_00195570;
    uStack_34 = 0;
    uStack_38 = param_4;
    uStack_3c = param_3;
    uStack_40 = param_2;
    word_ptr = &local_44;
    local_44 = param_1;
    ch = (**(code **)(*(int *)(val_2 + 0xd7c) + 0x18))();
    if (ch == '\0') {
      uval = 0;
      word_ptr = &local_44;
    }
    else {
      LbNetLog(s_WARNING_network__GenericModemIni_00172432);
      uval = extraout_CL_01;
    }
  }
  g_bss_003d97d0 = (undefined4 *)*word_ptr;
  return CONCAT44(word_ptr[7],CONCAT31((int3)((uint)*word_ptr >> 8),uval));
}

/******************************************************************************
 * Function : lbnet_allocated_fine_handler_size_101360 (Original VA: 0x101360, Ghidra: FUN_00101360)
 * Prototype: longlong lbnet_allocated_fine_handler_size_101360(void);
 * Address  : 0x101360 (Size: 2326 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'ALLOCATED FINE HANDLER SIZE = %d'
 * Callers  : 1 -> LbNETWORK_1032d8
 * Callees  : 8 -> LbScreenWaitVbi, dk_sprintf, bflib_system_io_fn_0f7786, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45, bflib_system_io_use_this_vector_101fec, lbnet_network_node_102108, bflib_system_io_fn_103100
 ******************************************************************************/
longlong lbnet_allocated_fine_handler_size_101360(void)

{
  char ch;
  int arg_eax;
  int loop_i;
  uint uval;
  undefined2 *extraout_ECX;
  uint arg_edx;
  uint extraout_EDX;
  uint *word_ptr;
  undefined4 extraout_EDX_00;
  undefined4 *word_ptr_2;
  char *str_ptr;
  uint *word_ptr_3;
  undefined4 *word_ptr_4;
  char *str_ptr_2;
  uint *word_ptr_5;
  byte flag;
  uint local_284 [7];
  uint local_268;
  int local_262;
  undefined2 local_256;
  undefined2 local_254;
  undefined4 local_250;
  uint local_244;
  undefined4 local_234;
  uint local_228;
  undefined4 local_218;
  undefined4 local_214;
  undefined1 *local_204;
  uint local_1f0;
  undefined4 local_1e0;
  uint local_1d4;
  undefined4 local_1c4;
  uint local_1b8;
  undefined4 local_1a8;
  uint local_19c;
  undefined4 local_18c;
  uint local_180;
  undefined4 local_170;
  uint local_164;
  undefined4 local_154;
  uint local_148;
  uint local_138;
  undefined4 local_134;
  undefined2 local_12c;
  int local_120;
  uint local_11c;
  undefined4 local_118;
  undefined2 local_110;
  int local_104;
  undefined4 local_100;
  uint local_f4;
  uint local_e4;
  undefined4 local_e0;
  uint local_d8;
  int local_cc;
  uint local_c8;
  undefined4 local_c4;
  uint local_bc;
  int local_b0;
  undefined4 local_ac;
  uint local_a0;
  undefined4 local_90;
  uint local_84;
  undefined4 local_74;
  uint local_68;
  undefined4 local_58;
  uint local_4c;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  flag = 0;
  local_138 = 0x100;
  local_134 = 0x95;
  bflib_system_io_fn_0f7786();
  if (local_120 == 0) {
    if (extraout_ECX != (undefined2 *)0x0) {
      *extraout_ECX = local_12c;
    }
    loop_i = (local_138 & 0xffff) << 4;
  }
  else {
    loop_i = 0;
  }
  *(int *)(arg_eax + 0x1e) = loop_i;
  if (loop_i == 0) {
    str_ptr = s_COULDN_T_ALLOCATE_FOR_DRIVER_001725ae;
    str_ptr_2 = &g_bss_003e0254;
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
  }
  else {
    LbScreenWaitVbi();
    loop_i = *(int *)(arg_eax + 0x1e) + 0x15f >> 4;
    *(short *)(arg_eax + 0x36) = (short)loop_i;
    *(short *)(arg_eax + 0x38) = (*(short *)(arg_eax + 0x1e) + 0x950) - (short)(loop_i << 4);
    *(short *)(arg_eax + 0x3a) =
         ((short)*(undefined4 *)(arg_eax + 0x1e) + 0x78) -
         (short)((*(uint *)(arg_eax + 0x1e) >> 4 & 0xffff) << 4);
    *(short *)(arg_eax + 0x3c) =
         ((short)*(undefined4 *)(arg_eax + 0x1e) + 0x80) -
         (short)((*(uint *)(arg_eax + 0x1e) >> 4 & 0xffff) << 4);
    *(undefined4 *)(arg_eax + 0x26) = 0x68;
    word_ptr_2 = &g_data_00150000;
    word_ptr_4 = *(undefined4 **)(arg_eax + 0x1e);
    for (loop_i = 0x1a; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_4 = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_2;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag * -2 + 1);
    }
    word_ptr_2 = &g_data_00195de0;
    word_ptr_4 = (undefined4 *)(*(int *)(arg_eax + 0x1e) + 0x78);
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_4 = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_2;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag * -2 + 1);
    }
    word_ptr_2 = &g_data_00195de8;
    word_ptr_4 = (undefined4 *)(*(int *)(arg_eax + 0x1e) + 0x80);
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_4 = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr_4 = word_ptr_4 + (uint)flag * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_2;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag * -2 + 1);
    }
    bflib_system_io_fn_103100(s_ALLOCATED_FINE_HANDLER_SIZE____d_0017247c,*(undefined4 *)(arg_eax + 0x26));
    local_c4 = 0x4d4;
    local_c8 = 0x100;
    local_20 = extraout_EDX;
    bflib_system_io_fn_0f7786();
    if (local_b0 == 0) {
      if (&stack0x00000000 != (undefined1 *)0x20) {
        local_20 = local_bc;
      }
      uval = (local_c8 & 0xffff) << 4;
    }
    else {
      uval = 0;
    }
    if (uval != 0) {
      LbScreenWaitVbi();
      *(uint *)(arg_eax + 0x2c) = local_20 & 0xffff;
    }
    *(uint *)(arg_eax + 0x16) = uval;
    bflib_system_io_fn_103100(s_IPXSEND_SEG____x__OFF____x_0017249e,uval >> 4,0);
    if (*(int *)(arg_eax + 0x16) != 0) {
      local_11c = 0x100;
      local_118 = 0xd;
      bflib_system_io_fn_0f7786();
      if (local_104 == 0) {
        if ((undefined2 *)(arg_eax + 0x34) != (undefined2 *)0x0) {
          *(undefined2 *)(arg_eax + 0x34) = local_110;
        }
        loop_i = (local_11c & 0xffff) << 4;
      }
      else {
        loop_i = 0;
      }
      *(int *)(arg_eax + 0x22) = loop_i;
      if (loop_i != 0) {
        local_1c = 0;
        local_e4 = 0x100;
        local_e0 = 0x4d4;
        bflib_system_io_fn_0f7786();
        if (local_cc == 0) {
          if (&stack0x00000000 != (undefined1 *)0x1c) {
            local_1c = local_d8;
          }
          loop_i = (local_e4 & 0xffff) << 4;
        }
        else {
          loop_i = 0;
        }
        if (loop_i != 0) {
          LbScreenWaitVbi();
          *(uint *)(arg_eax + 0x30) = local_1c & 0xffff;
        }
        *(int *)(arg_eax + 0x1a) = loop_i;
        if (loop_i != 0) {
          LbScreenWaitVbi();
          local_268 = 0x7a00;
          LbScreenWaitVbi();
          local_214 = 0x2f;
          local_218 = 0x300;
          bflib_system_io_fn_0fed1d();
          local_254 = *(undefined2 *)(arg_eax + 0x36);
          local_256 = *(undefined2 *)(arg_eax + 0x38);
          local_204 = (undefined1 *)local_284;
          bflib_system_io_fn_0fed45();
          *(short *)(*(int *)(arg_eax + 0x1e) + 0x8a) = (short)local_284[0];
          *(short *)(*(int *)(arg_eax + 0x1e) + 0x8c) = (short)local_262;
          if ((local_268 & 0xff) == 0xff) {
            word_ptr = (uint *)(*(int *)(arg_eax + 0x1e) + 2);
            local_24 = local_284[0] | local_262 << 0x10;
            word_ptr_3 = &local_24;
            word_ptr_5 = word_ptr;
            for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
              *word_ptr_5 = *word_ptr_3;
              word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
              word_ptr_5 = word_ptr_5 + (uint)flag * -2 + 1;
            }
            for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
              *(char *)word_ptr_5 = (char)*word_ptr_3;
              word_ptr_3 = (uint *)((int)word_ptr_3 + (uint)flag * -2 + 1);
              word_ptr_5 = (uint *)((int)word_ptr_5 + (uint)flag * -2 + 1);
            }
            bflib_system_io_fn_103100(s_IPX_ENTRY____x_00172538,*(undefined1 *)word_ptr);
            loop_i = bflib_system_io_use_this_vector_101fec();
            if (loop_i != 0) {
              dk_sprintf(&g_bss_003e0254,s_INITSUCCESSFULL_IPX_ADDRESS___SE_0017257e,
                           *(undefined2 *)(*(int *)(arg_eax + 0x1e) + 0x8c),
                           *(undefined2 *)(*(int *)(arg_eax + 0x1e) + 0x8a));
              bflib_system_io_fn_103100(&g_data_001725ab,&g_bss_003e0254);
              lbnet_network_node_102108();
              *(undefined2 *)(arg_eax + 0x46) = 0;
              return (ulonglong)arg_edx << 0x20;
            }
            str_ptr = s_COULD_NOT_FIND_FREE_VECTOR_FROM_0_00172548;
            str_ptr_2 = &g_bss_003e0254;
            do {
              ch = *str_ptr;
              *str_ptr_2 = ch;
              if (ch == '\0') break;
              ch = str_ptr[1];
              str_ptr = str_ptr + 2;
              str_ptr_2[1] = ch;
              str_ptr_2 = str_ptr_2 + 2;
            } while (ch != '\0');
            bflib_system_io_fn_103100(&g_bss_003e0254);
            *(undefined4 *)(arg_eax + 0x1e) = 0;
            local_244 = (uint)*(ushort *)(arg_eax + 0x2a);
            local_250 = extraout_EDX_00;
            bflib_system_io_fn_0f7786();
            *(undefined2 *)(arg_eax + 0x2a) = 0;
            local_1b8 = (uint)*(ushort *)(arg_eax + 0x2c);
            local_1c4 = 0x101;
            bflib_system_io_fn_0f7786();
            *(undefined4 *)(arg_eax + 0x2c) = 0;
            local_164 = (uint)*(ushort *)(arg_eax + 0x34);
            local_170 = 0x101;
            bflib_system_io_fn_0f7786();
            *(undefined2 *)(arg_eax + 0x34) = 0;
            local_1f0 = (uint)*(ushort *)(arg_eax + 0x30);
            bflib_system_io_fn_0f7786();
            *(undefined4 *)(arg_eax + 0x30) = 0;
            bflib_system_io_fn_103100(s_FAILED_00172576);
            return CONCAT44(arg_edx,1);
          }
          str_ptr = s_IPX_DRIVER_NOT_INSTALLED_0017251e;
          str_ptr_2 = &g_bss_003e0254;
          do {
            ch = *str_ptr;
            *str_ptr_2 = ch;
            if (ch == '\0') break;
            ch = str_ptr[1];
            str_ptr = str_ptr + 2;
            str_ptr_2[1] = ch;
            str_ptr_2 = str_ptr_2 + 2;
          } while (ch != '\0');
          bflib_system_io_fn_103100(&g_bss_003e0254);
          *(undefined4 *)(arg_eax + 0x1e) = 0;
          local_a0 = (uint)*(ushort *)(arg_eax + 0x2a);
          local_ac = 0x101;
          bflib_system_io_fn_0f7786();
          *(undefined2 *)(arg_eax + 0x2a) = 0;
          local_1d4 = (uint)*(ushort *)(arg_eax + 0x2c);
          local_1e0 = 0x101;
          bflib_system_io_fn_0f7786();
          *(undefined4 *)(arg_eax + 0x2c) = 0;
          local_228 = (uint)*(ushort *)(arg_eax + 0x34);
          local_234 = 0x101;
          bflib_system_io_fn_0f7786();
          *(undefined2 *)(arg_eax + 0x34) = 0;
          local_68 = (uint)*(ushort *)(arg_eax + 0x30);
          local_74 = 0x101;
          bflib_system_io_fn_0f7786();
          *(undefined4 *)(arg_eax + 0x30) = 0;
          return CONCAT44(arg_edx,1);
        }
        str_ptr = s_COULDN_T_ALLOCATE_FOR_SAP_BUFFER_001724fc;
        str_ptr_2 = &g_bss_003e0254;
        do {
          ch = *str_ptr;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
        bflib_system_io_fn_103100(&g_bss_003e0254);
        *(undefined4 *)(arg_eax + 0x1e) = 0;
        local_180 = (uint)*(ushort *)(arg_eax + 0x2a);
        local_18c = 0x101;
        bflib_system_io_fn_0f7786();
        *(undefined2 *)(arg_eax + 0x2a) = 0;
        local_f4 = (uint)*(ushort *)(arg_eax + 0x2c);
        local_100 = 0x101;
        bflib_system_io_fn_0f7786();
        *(undefined4 *)(arg_eax + 0x2c) = 0;
        local_4c = (uint)*(ushort *)(arg_eax + 0x34);
        local_58 = 0x101;
        bflib_system_io_fn_0f7786();
        *(undefined2 *)(arg_eax + 0x34) = 0;
        return CONCAT44(arg_edx,1);
      }
      str_ptr = s_COULDN_T_ALLOCATE_FOR_BUFFER_001724de;
      str_ptr_2 = &g_bss_003e0254;
      do {
        ch = *str_ptr;
        *str_ptr_2 = ch;
        if (ch == '\0') break;
        ch = str_ptr[1];
        str_ptr = str_ptr + 2;
        str_ptr_2[1] = ch;
        str_ptr_2 = str_ptr_2 + 2;
      } while (ch != '\0');
      bflib_system_io_fn_103100(&g_bss_003e0254);
      *(undefined4 *)(arg_eax + 0x1e) = 0;
      local_84 = (uint)*(ushort *)(arg_eax + 0x2a);
      local_90 = 0x101;
      bflib_system_io_fn_0f7786();
      *(undefined2 *)(arg_eax + 0x2a) = 0;
      local_19c = (uint)*(ushort *)(arg_eax + 0x2c);
      local_1a8 = 0x101;
      bflib_system_io_fn_0f7786();
      *(undefined4 *)(arg_eax + 0x2c) = 0;
      return CONCAT44(arg_edx,1);
    }
    str_ptr = s_COULDN_T_ALLOCATE_FOR_SEND_PACKE_001724ba;
    str_ptr_2 = &g_bss_003e0254;
    do {
      ch = *str_ptr;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    bflib_system_io_fn_103100(&g_bss_003e0254);
    *(undefined4 *)(arg_eax + 0x1e) = 0;
    local_148 = (uint)*(ushort *)(arg_eax + 0x2a);
    local_154 = 0x101;
    bflib_system_io_fn_0f7786();
    *(undefined2 *)(arg_eax + 0x2a) = 0;
  }
  return CONCAT44(arg_edx,1);
}

/******************************************************************************
 * Function : lbnet_network_node_102108 (Original VA: 0x102108, Ghidra: FUN_00102108)
 * Prototype: undefined4 lbnet_network_node_102108(void);
 * Address  : 0x102108 (Size: 346 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'NETWORK %x%x%x%x
NODE %02x%02x%02x%02x%02x%02x'
 * Callers  : 1 -> lbnet_allocated_fine_handler_size_101360
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45, bflib_system_io_fn_103100
 ******************************************************************************/
undefined4 lbnet_network_node_102108(void)

{
  int arg_eax;
  ushort extraout_CX;
  int loop_i;
  undefined4 *arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined1 auStack_74 [4];
  uint local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined2 local_52;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined1 *local_2c;
  undefined4 *local_18;
  
  flag = 0;
  local_18 = arg_edx;
  LbScreenWaitVbi();
  local_64 = 9;
  local_52 = (undefined2)(*(uint *)(arg_eax + 0x22) >> 4);
  local_70 = *(uint *)(arg_eax + 0x22) & 0xf;
  LbScreenWaitVbi();
  local_3c = (uint)extraout_CX;
  local_40 = 0x300;
  bflib_system_io_fn_0fed1d();
  word_ptr_2 = local_18;
  local_44 = *(undefined2 *)(arg_eax + 0x36);
  local_46 = *(undefined2 *)(arg_eax + 0x38);
  local_2c = auStack_74;
  bflib_system_io_fn_0fed45();
  word_ptr = *(undefined4 **)(arg_eax + 0x22);
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
  }
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
  }
  word_ptr_2 = local_18;
  word_ptr = (undefined4 *)(arg_eax + 0xc);
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr = *(undefined1 *)word_ptr_2;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
  }
  word_ptr_2 = local_18 + 1;
  word_ptr = (undefined4 *)(arg_eax + 0x10);
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *word_ptr_2;
    word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
    word_ptr = word_ptr + (uint)flag * -2 + 1;
  }
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr = *(undefined1 *)word_ptr_2;
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
    word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
  }
  bflib_system_io_fn_103100(s_NETWORK__x_x_x_x_NODE__02x_02x_0_00172638,*(undefined1 *)(arg_eax + 0xc),
               *(undefined1 *)(arg_eax + 0xd),*(undefined1 *)(arg_eax + 0xe),
               *(undefined1 *)(arg_eax + 0xf),*(undefined1 *)(arg_eax + 0x10),
               *(undefined1 *)(arg_eax + 0x11),*(undefined1 *)(arg_eax + 0x12),
               *(undefined1 *)(arg_eax + 0x13),*(undefined1 *)(arg_eax + 0x14),
               *(undefined1 *)(arg_eax + 0x15));
  bflib_system_io_fn_103100(s_RET____x_00172668,local_58);
  return local_58;
}

/******************************************************************************
 * Function : lbnet_Init_1031e8 (Original VA: 0x1031e8, Ghidra: FUN_001031e8)
 * Prototype: undefined8 lbnet_Init_1031e8(undefined4 param_1);
 * Address  : 0x1031e8 (Size: 240 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: IPXServiceProvider::Init() failure on Initialise'
 * Callers  : 2 -> LbNetwork_Init_0ed4e0, lbnet_GenericIPXInit_0ef8e8
 * Callees  : 4 -> LbScreenWaitVbi, LbFileLoadAt, LbNetLog, LbNETWORK_1032d8
 ******************************************************************************/
undefined8 lbnet_Init_1031e8(undefined4 param_1)

{
  char ch;
  int arg_eax;
  int val;
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  char extraout_DL;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined4 auStackY_17d8 [509];
  undefined4 auStackY_fe4 [1009];
  undefined1 local_18;
  
  flag = 0;
  *(undefined2 *)(arg_eax + 0x1836) = 0;
  local_18 = 0xff;
  val = LbFileLoadAt();
  *(int *)(extraout_ECX + 0x1597) = val;
  uval = 0;
  ch = extraout_DL;
  if (val != 0) {
    uval = LbScreenWaitVbi();
    ch = '\0';
  }
  if (ch == -1) {
    uval = CONCAT31((int3)((uint)uval >> 8),0xff);
  }
  else {
    ch = LbNETWORK_1032d8();
    if (ch == '\0') {
      LbNetLog(s_MAX_PACKET_SIZE____d_001726df,0x212);
      *(undefined4 *)(extraout_ECX_01 + 0xd74) = 1;
      word_ptr = (undefined4 *)(extraout_ECX_01 + 0x158b + (uint)flag * -8);
      *(undefined4 *)(extraout_ECX_01 + 0x1587) = param_1;
      word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
      *word_ptr = *(undefined4 *)(&stack0x00000008 + (uint)flag * -8);
      *word_ptr_2 = *(undefined4 *)(&stack0x0000000c + (uint)flag * -8 + (uint)flag * -8);
      word_ptr_2[(uint)flag * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0x0000000c + (uint)flag * -8 + (uint)flag * -8) +
            ((uint)flag * -2 + 1) * 4);
      *(undefined2 *)(extraout_ECX_01 + 0x17ed) = 0;
      uval = LbScreenWaitVbi();
      *(undefined2 *)(extraout_ECX_02 + 0x17ef) = 0;
      *(undefined4 *)(extraout_ECX_02 + 0xdce) = 0;
      *(undefined4 *)(extraout_ECX_02 + 0x1832) = 1;
      local_18 = 0;
    }
    else {
      uval = LbNetLog(s_WARNING_network__IPXServiceProvi_00172698);
      *(undefined4 *)(extraout_ECX_00 + 0xd74) = 0;
    }
    uval = CONCAT31((int3)((uint)uval >> 8),local_18);
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : LbNETWORK_1032d8 (Original VA: 0x1032d8, Ghidra: FUN_001032d8)
 * Prototype: undefined1 LbNETWORK_1032d8(void);
 * Address  : 0x1032d8 (Size: 396 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Initialising IPXServiceProvider'
 * Callers  : 1 -> lbnet_Init_1031e8
 * Callees  : 11 -> bflib_system_io_fn_0e8d4a, LbNetLog, LbNETWORK_0ff10c, LbNETWORK_0ff18c, lbnet_allocated_fine_handler_size_101360, bflib_sound_closing_socket_101c78, bflib_system_io_open_socket_return_code_102264, bflib_system_io_closing_socket_102344 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x001033d9) */

undefined1 LbNETWORK_1032d8(void)

{
  char ch;
  int arg_eax;
  int net_status;
  uint uval;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 extraout_CL_01;
  int extraout_ECX;
  int extraout_EDX;
  
  LbNetLog(s_LbNETWORK___Initialising_IPXServ_001726f5);
  ch = LbNETWORK_0ff10c();
  if (ch != '\0') {
    LbNetLog(s_WARNING_network__SERVICE_PROVIDE_00172724);
    return extraout_CL_01;
  }
  net_status = lbnet_allocated_fine_handler_size_101360();
  if (net_status == 0) {
    *(undefined2 *)(arg_eax + 0x1492) = 0;
    net_status = bflib_system_io_open_socket_return_code_102264();
    if (net_status == 0) {
      uval = bflib_system_io_fn_10293c();
      *(uint *)(arg_eax + 0xdca) = uval;
      if (uval != 0) {
        while (uval < *(int *)(arg_eax + 0xdca) + 0x4d40U) {
          bflib_system_io_fn_1025c0();
          uval = extraout_ECX + 0x26a;
        }
        if ((g_heap_alloc_list_head & 1) == 0) {
          g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
          g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
        }
        if ((g_heap_alloc_list_head & 2) == 0) {
          g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
          g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
        }
        g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
        g_bss_003e02ac = g_bss_003e02ac + 1;
        bflib_system_io_fn_102834();
        if (99 < (uint)(extraout_EDX - g_bss_003e02a4)) {
          g_bss_003e02ac = 0;
          g_bss_003e02a4 = extraout_EDX;
        }
        return 0;
      }
      bflib_system_io_closing_socket_102344();
    }
    bflib_sound_closing_socket_101c78();
    return extraout_CL;
  }
  LbNETWORK_0ff18c();
  return extraout_CL_00;
}

/******************************************************************************
 * Function : LbNETWORK_103464 (Original VA: 0x103464, Ghidra: FUN_00103464)
 * Prototype: undefined8 LbNETWORK_103464(void);
 * Address  : 0x103464 (Size: 196 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Releasing IPXServiceProvider'
 * Callers  : 0 -> 
 * Callees  : 7 -> LbScreenWaitVbi, bflib_system_io_fn_0e94b0, LbNetLog, LbNETWORK_0ff18c, bflib_sound_closing_socket_101c78, bflib_system_io_closing_socket_102344, bflib_system_io_fn_1029b8
 ******************************************************************************/
undefined8 LbNETWORK_103464(void)

{
  undefined4 uval;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int val;
  int extraout_ECX_03;
  undefined4 arg_edx;
  
  LbNetLog(s_LbNETWORK___Releasing_IPXService_00172751);
  if (*(int *)(extraout_ECX + 0xd74) == 0) {
    uval = LbNetLog(s_WARNING_network__IPXServiceProvi_0017277d);
    uval = CONCAT31((int3)((uint)uval >> 8),0xff);
  }
  else {
    if (*(int *)(extraout_ECX + 0x7a8) != 0) {
      (**(code **)(*(int *)(extraout_ECX + 0xd7c) + 0xc))();
    }
    LbScreenWaitVbi();
    *(undefined2 *)(extraout_ECX_00 + 0x17ef) = 0;
    bflib_system_io_closing_socket_102344();
    bflib_sound_closing_socket_101c78();
    *(undefined4 *)(extraout_ECX_01 + 0xd74) = 0;
    val = extraout_ECX_01;
    if (*(int *)(extraout_ECX_01 + 0xdca) != 0) {
      bflib_system_io_fn_1029b8();
      val = extraout_ECX_02;
    }
    if (*(int *)(val + 0x1597) != 0) {
      bflib_system_io_fn_0e94b0();
      *(undefined4 *)(extraout_ECX_03 + 0x1597) = 0;
    }
    uval = LbNETWORK_0ff18c();
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : lbnet_Start_103528 (Original VA: 0x103528, Ghidra: FUN_00103528)
 * Prototype: undefined1 lbnet_Start_103528(void);
 * Address  : 0x103528 (Size: 671 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: IPXServiceProvider::Start() not initialised'
 * Callers  : 0 -> 
 * Callees  : 9 -> LbScreenWaitVbi, dk_sprintf, LbFileLoadAt, bflib_system_io_fn_0e94b0, LbNetLog, lbnet_AddPlayer_0ff1d4, bflib_system_io_fn_0ff398, bflib_system_io_fn_0ff834 ...
 ******************************************************************************/
undefined1 lbnet_Start_103528(void)

{
  char ch;
  undefined4 *arg_eax;
  int loop_i;
  undefined4 *word_ptr;
  uint arg_ecx;
  short short_val;
  int extraout_EDX;
  char *arg_ebx;
  undefined ***val;
  char **val_2;
  char *str_ptr;
  undefined4 *word_ptr_2;
  char *str_ptr_2;
  char *str_ptr_3;
  undefined4 *word_ptr_3;
  undefined4 *word_ptr_4;
  byte flag;
  undefined **ppuStack_34;
  char *pcStack_30;
  char local_2c [12];
  char *local_20;
  
  flag = 0;
  if (arg_eax[0x35d] == 0) {
    pcStack_30 = s_WARNING_network__IPXServiceProvi_001727bf;
    ppuStack_34 = (undefined **)0x103556;
    LbNetLog();
    return 0xff;
  }
  if (arg_eax[0x1ea] != 0) {
    pcStack_30 = (char *)0x103574;
    (**(code **)(arg_eax[0x35f] + 0xc))();
  }
  if (0x20 < arg_ecx) {
    return 0xff;
  }
  pcStack_30 = (char *)0x1035a7;
  loop_i = LbFileLoadAt();
  *(int *)((int)arg_eax + 0xdce) = loop_i;
  if (loop_i == 0) {
    return 0xff;
  }
  str_ptr = &g_data_001727ff; /* 0x1727ff="BU.GI." */
  str_ptr_2 = (char *)((int)arg_eax + 0x17bd);
  pcStack_30 = (char *)0x1035ce;
  LbScreenWaitVbi();
  word_ptr_2 = (undefined4 *)((int)arg_eax + 0x1587);
  do {
    ch = *str_ptr;
    *str_ptr_2 = ch;
    if (ch == '\0') break;
    ch = str_ptr[1];
    str_ptr = str_ptr + 2;
    str_ptr_2[1] = ch;
    str_ptr_2 = str_ptr_2 + 2;
  } while (ch != '\0');
  str_ptr_2 = (char *)((int)arg_eax + 0x17c3);
  *str_ptr_2 = '\0';
  local_20 = str_ptr_2;
  do {
    pcStack_30 = (char *)*word_ptr_2;
    ppuStack_34 = &PTR_DAT_00172806; /* 0x172806="%x." */
    dk_sprintf(local_2c);
    word_ptr_2 = word_ptr_2 + 1;
    loop_i = -1;
    str_ptr = str_ptr_2;
    do {
      str_ptr_3 = str_ptr;
      if (loop_i == 0) break;
      loop_i = loop_i + -1;
      str_ptr_3 = str_ptr + (uint)flag * -2 + 1;
      ch = *str_ptr;
      str_ptr = str_ptr_3;
    } while (ch != '\0');
    str_ptr_3 = str_ptr_3 + -1;
    str_ptr = local_2c;
    do {
      ch = *str_ptr;
      *str_ptr_3 = ch;
      if (ch == '\0') break;
      ch = str_ptr[1];
      str_ptr = str_ptr + 2;
      str_ptr_3[1] = ch;
      str_ptr_3 = str_ptr_3 + 2;
    } while (ch != '\0');
  } while (extraout_EDX + 4U < 0x10);
  pcStack_30 = (char *)((int)arg_eax + 0x17bd);
  ppuStack_34 = (undefined **)&g_data_0017280a; /* 0x17280a="%s\n" */
  LbNetLog();
  pcStack_30 = (char *)0x103671;
  loop_i = bflib_system_io_open_socket_return_code_1029e0();
  if (loop_i == 0) {
    *(undefined4 *)((int)arg_eax + 0x151b) = 0;
    *(undefined4 *)((int)arg_eax + 0x151f) = 0;
    word_ptr_3 = (undefined4 *)((int)arg_eax + (uint)flag * -8 + 0x14ef);
    word_ptr_2 = (undefined4 *)((int)arg_eax + (uint)flag * -8 + 0x158b);
    *(undefined4 *)((int)arg_eax + 0x14eb) = *(undefined4 *)((int)arg_eax + 0x1587);
    word_ptr_4 = word_ptr_3 + (uint)flag * -2 + 1;
    word_ptr = word_ptr_2 + (uint)flag * -2 + 1;
    *word_ptr_3 = *word_ptr_2;
    *word_ptr_4 = *word_ptr;
    word_ptr_4[(uint)flag * -2 + 1] = word_ptr[(uint)flag * -2 + 1];
    *(undefined2 *)((int)arg_eax + 0x1523) = 1;
    *arg_eax = 0;
    word_ptr_2 = arg_eax;
    do {
      word_ptr = (undefined4 *)((int)word_ptr_2 + 1);
      *(undefined1 *)((int)word_ptr_2 + 0x17f2) = 0;
      *(undefined1 *)((int)word_ptr_2 + 0x1812) = 0;
      word_ptr_2 = word_ptr;
    } while (word_ptr != arg_eax + 8);
    *(short *)((int)arg_eax + 0x1525) = (short)arg_ecx;
    *(undefined1 *)((int)arg_eax + 0x17f1) = 0;
    pcStack_30 = (char *)0x1036df;
    bflib_system_io_fn_0ff834();
    *(undefined2 *)((int)arg_eax + 0x17ef) = 1;
    short_val = *(short *)((int)arg_eax + 0x1836) + 1;
    *(short *)((int)arg_eax + 0x1836) = short_val;
    *(short *)((int)arg_eax + 0x1527) = short_val;
    **(undefined4 **)((int)arg_eax + 0xdce) = 0;
    str_ptr_2 = (char *)(*(int *)((int)arg_eax + 0xdce) + 4);
    do {
      ch = *arg_ebx;
      *str_ptr_2 = ch;
      if (ch == '\0') break;
      ch = arg_ebx[1];
      arg_ebx = arg_ebx + 2;
      str_ptr_2[1] = ch;
      str_ptr_2 = str_ptr_2 + 2;
    } while (ch != '\0');
    word_ptr_2 = (undefined4 *)((int)arg_eax + 0x1492);
    word_ptr = (undefined4 *)(*(int *)((int)arg_eax + 0xdce) + 0x24);
    for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr = word_ptr + (uint)flag * -2 + 1;
    }
    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr = *(undefined1 *)word_ptr_2;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag * -2 + 1);
    }
    pcStack_30 = (char *)0x10376b;
    bflib_system_io_fn_0ff398();
    val_2 = &pcStack_30;
    pcStack_30 = (char *)0x1;
    ppuStack_34 = (undefined **)0x103777;
    ch = lbnet_AddPlayer_0ff1d4();
    if (ch == '\0') {
      arg_eax[0x1ea] = 1;
      *(undefined4 *)((int)arg_eax + 0x1832) = 1;
      goto LAB_001037ba;
    }
    val = &ppuStack_34;
    ppuStack_34 = (undefined **)s_WARNING_network__IPXServiceProvi_0017280e;
  }
  else {
    pcStack_30 = "hU(\x17";
    bflib_system_io_fn_0e94b0();
    val = (undefined ***)&pcStack_30;
    pcStack_30 = s_COULD_NOT_ADVERTISE_SERVICE_00172855;
    *(undefined4 *)((int)arg_eax + 0xdce) = 0;
  }
  *(undefined4 *)((int)val + -4) = 0x1037b7;
  LbNetLog();
  val_2 = (char **)((int)val + 4);
LAB_001037ba:
  return *(undefined1 *)((int)val_2 + 0x1c);
}

/******************************************************************************
 * Function : lbnet_Start_10646c (Original VA: 0x10646c, Ghidra: FUN_0010646c)
 * Prototype: undefined1 lbnet_Start_10646c(void);
 * Address  : 0x10646c (Size: 1884 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer'
 * Callers  : 2 -> watcom_crt_fn_1056a8, watcom_crt_fn_108b74
 * Callees  : 12 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a, LbNetLog, lbnet_AddPlayer_0ff1d4, lbnet_EncodeMessageStub_0ff550, lbnet_EncodeMessageStub_0ff630, bflib_system_io_fn_0ff678, lbnet_DecodeMessageStub_0ff8c0 ...
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00106740) */

undefined1 lbnet_Start_10646c(void)

{
  ushort uval;
  uint uval_2;
  bool flag;
  char ch;
  int arg_eax;
  int loop_i;
  undefined4 uval_3;
  uint extraout_ECX;
  uint loop_i_2;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int loop_i_3;
  int loop_i_4;
  int arg_edx;
  char **val;
  undefined1 *word_ptr;
  int *int_ptr;
  char *str_ptr;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  short short_val;
  int *int_ptr_2;
  int *int_ptr_3;
  undefined4 *word_ptr_4;
  byte flag_2;
  char *apcStack_187c [1510];
  int local_e2 [36];
  int local_50;
  int local_28;
  int local_24;
  
  flag_2 = 0;
  val = apcStack_187c + 0x5d3;
  if ((((*(int *)(arg_eax + 0xd74) != 0) &&
       (val = apcStack_187c + 0x5d3, *(int *)(arg_eax + 0x7a8) != 0)) &&
      (val = apcStack_187c + 0x5d3, *(short *)(arg_eax + 0x17ef) == 1)) &&
     (val = apcStack_187c + 0x5d3, *(ushort *)(arg_eax + 0x1523) < *(ushort *)(arg_eax + 0x1525))
     ) {
    apcStack_187c[0x5d2] = (char *)0x106512;
    local_50 = arg_edx;
    loop_i = watcom_crt_fn_106bc8();
    if (loop_i == 1) {
      return 0;
    }
    val = apcStack_187c + 0x5d3;
    if ((*(int *)(arg_eax + 0x1832) == 1) &&
       (val = apcStack_187c + 0x5d3, *(short *)(arg_eax + 0x1527) == *(short *)(local_50 + 0x4c)
       )) {
      local_28 = 0;
      int_ptr = *(int **)(arg_eax + 0xdce);
      while( true ) {
        val = apcStack_187c + 0x5d3;
        if ((int *)(*(int *)(arg_eax + 0xdce) + (uint)*(ushort *)(arg_eax + 0x1525) * 0x38) <= int_ptr
           ) goto LAB_00106787;
        if ((short)int_ptr[9] == 0) break;
        local_28 = local_28 + 1;
        int_ptr = int_ptr + 0xe;
      }
      int_ptr_3 = (int *)(local_50 + 0x7a);
      int_ptr_2 = int_ptr + 9;
      for (loop_i = 4; loop_i != 0; loop_i = loop_i + -1) {
        *int_ptr_2 = *int_ptr_3;
        int_ptr_3 = int_ptr_3 + (uint)flag_2 * -2 + 1;
        int_ptr_2 = int_ptr_2 + (uint)flag_2 * -2 + 1;
      }
      for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
        *(char *)int_ptr_2 = (char)*int_ptr_3;
        int_ptr_3 = (int *)((int)int_ptr_3 + (uint)flag_2 * -2 + 1);
        int_ptr_2 = (int *)((int)int_ptr_2 + (uint)flag_2 * -2 + 1);
      }
      int_ptr_3 = int_ptr + 1;
      str_ptr = (char *)(local_50 + 0x5a);
      do {
        ch = *str_ptr;
        *(char *)int_ptr_3 = ch;
        if (ch == '\0') break;
        ch = str_ptr[1];
        str_ptr = str_ptr + 2;
        *(char *)((int)int_ptr_3 + 1) = ch;
        int_ptr_3 = (int *)((int)int_ptr_3 + 2);
      } while (ch != '\0');
      apcStack_187c[0x5d2] = (char *)0x0;
      *int_ptr = local_28;
      apcStack_187c[0x5d1] = (char *)0x10660c;
      ch = lbnet_AddPlayer_0ff1d4();
      if (ch != '\0') {
        apcStack_187c[0x5d1] = s_WARNING_network__IPXServiceProvi_00172895;
        LbNetLog();
        return 0xff;
      }
      *(short *)(local_24 + 0x1523) = *(short *)(local_24 + 0x1523) + 1;
      apcStack_187c[0x5d1] = (char *)0x106662;
      LbScreenWaitVbi();
      word_ptr_2 = (undefined4 *)(local_24 + 0x14df);
      val = apcStack_187c + 0x5d2;
      for (loop_i_2 = extraout_ECX >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *val = (char *)*word_ptr_2;
        word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
        val = val + (uint)flag_2 * -2 + 1;
      }
      for (loop_i_2 = extraout_ECX & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
        *(undefined1 *)val = *(undefined1 *)word_ptr_2;
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
        val = (char **)((int)val + (uint)flag_2 * -2 + 1);
      }
      int_ptr_3 = local_e2;
      for (loop_i = 0xe; loop_i != 0; loop_i = loop_i + -1) {
        *int_ptr_3 = *int_ptr;
        int_ptr = int_ptr + (uint)flag_2 * -2 + 1;
        int_ptr_3 = int_ptr_3 + (uint)flag_2 * -2 + 1;
      }
      for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
        *(char *)int_ptr_3 = (char)*int_ptr;
        int_ptr = (int *)((int)int_ptr + (uint)flag_2 * -2 + 1);
        int_ptr_3 = (int *)((int)int_ptr_3 + (uint)flag_2 * -2 + 1);
      }
      apcStack_187c[0x5d2] = (char *)0x504e5542;
      apcStack_187c[0x5d1] = (char *)0x8a;
      apcStack_187c[0x5d3] = *(char **)(local_24 + 0x151f);
      bflib_system_io_fn_1023f4();
      if ((g_heap_alloc_list_head & 1) == 0) {
        g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
        g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
      }
      if ((g_heap_alloc_list_head & 2) == 0) {
        g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
        g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
      }
      g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
      g_bss_003e02ac = g_bss_003e02ac + 1;
      bflib_system_io_fn_102834();
      val = apcStack_187c + 0x5d1;
      if (99 < (uint)(extraout_ECX_00 - g_bss_003e02a4)) {
        g_bss_003e02ac = 0;
        val = apcStack_187c + 0x5d1;
        g_bss_003e02a4 = extraout_ECX_00;
      }
LAB_00106787:
      *(undefined4 *)((int)val + -4) = 0x10679f;
      LbScreenWaitVbi();
      *(undefined4 *)((int)val + 0x8c) = extraout_ECX_01;
      ch = *(char *)(*(int *)((int)val + 0x110) + 0x17f1);
      loop_i = *(int *)((int)val + 0x110);
      *(char *)(loop_i + 0x17f1) = ch + '\x01';
      *(char *)((int)val + 0x96) = ch;
      *(undefined4 *)((int)val + 0x90) = *(undefined4 *)(loop_i + 0x151f);
      loop_i_4 = *(int *)((int)val + 0x108);
      word_ptr_4 = (undefined4 *)((int)val + ((uint)flag_2 * -2 + 0x27) * 4);
      word_ptr_2 = (undefined4 *)(loop_i + 0x158b + (uint)flag_2 * -8);
      *(undefined4 *)((int)val + 0x98) = *(undefined4 *)(loop_i + 0x1587);
      word_ptr_3 = word_ptr_2 + (uint)flag_2 * -2 + 1;
      *word_ptr_4 = *word_ptr_2;
      word_ptr_4[(uint)flag_2 * -2 + 1] = *word_ptr_3;
      (word_ptr_4 + (uint)flag_2 * -2 + 1)[(uint)flag_2 * -2 + 1] = word_ptr_3[(uint)flag_2 * -2 + 1];
      loop_i = *(int *)(*(int *)((int)val + 0x110) + 0xdce);
      *(undefined4 **)((int)val + -4) = (undefined4 *)((int)val + 0xa8);
      word_ptr_2 = (undefined4 *)(loop_i + loop_i_4 * 0x38);
      word_ptr_3 = (undefined4 *)((int)val + 0xa8);
      for (loop_i_3 = 0xe; loop_i_3 != 0; loop_i_3 = loop_i_3 + -1) {
        *word_ptr_3 = *word_ptr_2;
        word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
        word_ptr_3 = word_ptr_3 + (uint)flag_2 * -2 + 1;
      }
      for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
        *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
        word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_2 * -2 + 1);
      }
      loop_i = *(int *)((int)val + 0x110);
      flag = false;
      *(int *)((int)val + 0x10c) = loop_i;
      *(undefined4 *)((int)val + 0xfc) = 0;
      loop_i_2 = *(uint *)(loop_i + 0x1597);
      do {
        if (*(int *)(loop_i + 0x1597) + 0x4380U <= loop_i_2) {
LAB_00106875:
          if (!flag) {
            loop_i_2 = 0;
          }
          uval_2 = *(uint *)((int)val + 0x8c);
          *(uint *)((int)val + 0xe4) = loop_i_2;
          if (uval_2 < 0x44535542) {
            if (uval_2 == 0x41535542) {
              if (loop_i_2 != 0) {
                *(undefined4 *)((int)val + -4) = 0x106936;
                lbnet_EncodeMessageStub_0ff550();
                uval_3 = *(undefined4 *)((int)val + 0x90);
                *(undefined2 *)(loop_i_2 + 0x216) = 1;
                *(undefined4 *)(loop_i_2 + 0x218) = uval_3;
              }
              loop_i = *(int *)(*(int *)((int)val + 0x10c) + 0xdce);
              *(undefined4 **)((int)val + -4) =
                   (undefined4 *)(loop_i + *(int *)((int)val + 0xa8) * 0x38);
              word_ptr_2 = (undefined4 *)((int)val + 0xa8);
              word_ptr_3 = (undefined4 *)(loop_i + *(int *)((int)val + 0xa8) * 0x38);
              for (loop_i_4 = 0xe; loop_i_4 != 0; loop_i_4 = loop_i_4 + -1) {
                *word_ptr_3 = *word_ptr_2;
                word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
                word_ptr_3 = word_ptr_3 + (uint)flag_2 * -2 + 1;
              }
              for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
                *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
                word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
                word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_2 * -2 + 1);
              }
              *(undefined4 *)((int)val + 0xfc) = 1;
            }
          }
          else if (uval_2 < 0x44535543) {
            if (loop_i_2 != 0) {
              *(undefined4 *)((int)val + -4) = 0x1068cb;
              lbnet_EncodeMessageStub_0ff630();
              uval_3 = *(undefined4 *)((int)val + 0x90);
              *(undefined2 *)(loop_i_2 + 0x216) = 1;
              *(undefined4 *)(loop_i_2 + 0x218) = uval_3;
            }
            *(undefined4 *)((int)val + 0xfc) = 1;
            *(undefined4 *)((int)val + -4) = 0x106917;
            LbScreenWaitVbi();
          }
          else if ((0x47445541 < uval_2) && ((uval_2 < 0x47445543 || (uval_2 == 0x4e445542)))) {
            *(undefined4 *)((int)val + -4) = 0x106a2c;
            lbnet_DecodeMessageStub_0ff8c0();
            if (*(char *)((int)val + 0x118) == '\x02') {
              *(undefined4 *)((int)val + -4) = 0x10699c;
              bflib_system_io_fn_0ff678();
              if (*(int *)((int)val + 0xe4) != 0) {
                *(undefined4 *)((int)val + -4) = 0x1069b9;
                lbnet_EncodeMessageStub_0ff630();
                loop_i = *(int *)((int)val + 0xe4);
                uval_3 = *(undefined4 *)((int)val + 0x90);
                *(undefined2 *)(loop_i + 0x216) = 1;
                *(undefined4 *)(loop_i + 0x218) = uval_3;
              }
              *(undefined4 *)((int)val + -4) = 0x106a00;
              LbScreenWaitVbi();
              *(undefined4 *)((int)val + 0xfc) = 1;
            }
            else {
              word_ptr_2 = *(undefined4 **)((int)val + 0xe4);
              if (word_ptr_2 != (undefined4 *)0x0) {
                loop_i = *(int *)((int)val + 0xf4);
                *(undefined4 **)((int)val + -4) = word_ptr_2;
                word_ptr_3 = (undefined4 *)((int)val + 0x98);
                word_ptr_4 = word_ptr_2;
                for (loop_i_2 = loop_i + 4U >> 2; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
                  *word_ptr_4 = *word_ptr_3;
                  word_ptr_3 = word_ptr_3 + (uint)flag_2 * -2 + 1;
                  word_ptr_4 = word_ptr_4 + (uint)flag_2 * -2 + 1;
                }
                for (loop_i_2 = loop_i + 4U & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
                  *(undefined1 *)word_ptr_4 = *(undefined1 *)word_ptr_3;
                  word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag_2 * -2 + 1);
                  word_ptr_4 = (undefined4 *)((int)word_ptr_4 + (uint)flag_2 * -2 + 1);
                }
                uval_3 = *(undefined4 *)((int)val + 0x90);
                *(undefined2 *)((int)word_ptr_2 + 0x216) = 1;
                word_ptr_2[0x86] = uval_3;
              }
            }
          }
          if (*(int *)((int)val + 0xfc) == 1) {
            if (*(short *)(*(int *)((int)val + 0x10c) + 0x17ef) == 1) {
              uval = *(ushort *)(*(int *)((int)val + 0x10c) + 0x1525);
              uval_3 = *(undefined4 *)(*(int *)((int)val + 0x10c) + 0x151f);
              *(undefined4 *)((int)val + 0x104) = uval_3;
            }
            else {
              uval = *(ushort *)(*(int *)((int)val + 0x10c) + 0x157b);
              *(undefined4 *)((int)val + 0x104) =
                   *(undefined4 *)(*(int *)((int)val + 0x10c) + 0x1575);
              uval_3 = *(undefined4 *)(*(int *)((int)val + 0x10c) + 0x1571);
            }
            *(undefined4 *)((int)val + 0xec) = uval_3;
            short_val = 0;
            int_ptr = *(int **)(*(int *)((int)val + 0x10c) + 0xdce);
            *(uint *)((int)val + 0x100) = (uint)uval * 0x38;
            for (; int_ptr < (int *)(*(int *)(*(int *)((int)val + 0x10c) + 0xdce) +
                                    *(int *)((int)val + 0x100)); int_ptr = int_ptr + 0xe) {
              word_ptr = (undefined1 *)val;
              if ((short)int_ptr[9] != 0) {
                short_val = short_val + 1;
                word_ptr = (undefined1 *)((int)val + -4);
                *(uint *)((int)val + -4) = (uint)(*(int *)((int)val + 0xec) == *int_ptr);
                *(undefined4 *)((int)val + -8) = 0x106b7c;
                lbnet_AddPlayer_0ff1d4();
              }
              val = (char **)word_ptr;
            }
            loop_i = *(int *)((int)val + 0x10c);
            if (*(short *)(loop_i + 0x17ef) == 1) {
              *(short *)(loop_i + 0x1523) = short_val;
            }
            else {
              *(short *)(loop_i + 0x1579) = short_val;
            }
          }
          *(undefined4 *)((int)val + -4) = 0x106bb6;
          watcom_crt_fn_1073e0();
          break;
        }
        if (*(short *)(loop_i_2 + 0x216) == 0) {
          flag = true;
          goto LAB_00106875;
        }
        loop_i_2 = loop_i_2 + 0x21c;
      } while( true );
    }
  }
  return *(undefined1 *)((int)val + 0x114);
}

/******************************************************************************
 * Function : lbnet_Start_106da4 (Original VA: 0x106da4, Ghidra: FUN_00106da4)
 * Prototype: undefined1 lbnet_Start_106da4(void);
 * Address  : 0x106da4 (Size: 1594 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer'
 * Callers  : 1 -> bflib_system_io_fn_1037c8
 * Callees  : 8 -> LbScreenWaitVbi, bflib_system_io_fn_0e8d4a, LbNetLog, lbnet_AddPlayer_0ff1d4, bflib_system_io_fn_1023f4, bflib_system_io_fn_1025c0, bflib_system_io_fn_1026b0, bflib_system_io_fn_102834
 ******************************************************************************/
undefined1 lbnet_Start_106da4(void)

{
  char ch;
  int arg_eax;
  int loop_i;
  int val;
  int *int_ptr;
  char extraout_CL;
  char extraout_CL_00;
  char extraout_CL_01;
  int val_2;
  undefined1 *word_ptr;
  undefined1 *word_ptr_2;
  undefined1 *word_ptr_3;
  undefined1 *word_ptr_4;
  uint uval;
  byte *byte_ptr;
  int *int_ptr_2;
  byte *byte_ptr_2;
  int *int_ptr_3;
  bool flag;
  bool flag_2;
  byte flag_3;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  undefined4 local_48;
  undefined4 local_40;
  int local_38;
  int local_34;
  undefined1 local_30 [20];
  int local_1c;
  undefined1 local_18;
  
  flag_3 = 0;
  word_ptr_4 = auStack_70;
  local_18 = 0xff;
  local_48 = 0x20;
  local_60 = 0x20;
  local_54 = 0;
  if (*(int *)(arg_eax + 0xd74) != 0) {
    *(undefined4 *)(arg_eax + 0x1531) = 0x50515542;
    *(undefined4 *)(arg_eax + 0x157f) = 0;
    *(undefined4 *)(arg_eax + 0x1583) = 0;
    local_1c = arg_eax;
    local_40 = bflib_system_io_fn_0e8d4a();
    local_58 = bflib_system_io_fn_0e8d4a();
    local_34 = local_1c + 0x1492;
    local_38 = local_1c + 0xd80;
    local_4c = local_1c + 0x1531;
    word_ptr_4 = auStack_70;
    do {
      *(undefined4 *)(word_ptr_4 + -4) = 0x106e37;
      loop_i = bflib_system_io_fn_0e8d4a();
      *(int *)(word_ptr_4 + 0x2c) = loop_i;
      if (3000 < (uint)(loop_i - *(int *)(word_ptr_4 + 0x18))) break;
      if (0x19 < (uint)(loop_i - *(int *)(word_ptr_4 + 0x30))) {
        word_ptr = word_ptr_4 + -4;
        *(undefined4 *)(word_ptr_4 + -4) = 0x56;
        *(int *)(word_ptr_4 + 0x30) = loop_i;
        *(undefined4 *)(*(int *)(word_ptr_4 + 0x54) + 0x1531) = 0x50515542;
        *(undefined4 *)(word_ptr_4 + -8) = 0x106e8b;
        bflib_system_io_fn_1023f4();
        if ((g_heap_alloc_list_head & 1) == 0) {
          g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
          *(undefined4 *)(word_ptr_4 + -8) = 0x106eac;
          g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
        }
        if ((g_heap_alloc_list_head & 2) == 0) {
          g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
          *(undefined4 *)(word_ptr_4 + -8) = 0x106eca;
          g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
        }
        *(undefined4 *)(word_ptr_4 + -8) = 0x106ed4;
        val = bflib_system_io_fn_0e8d4a();
        if ((extraout_CL == '\0') || (0x32 < (uint)(val - g_bss_003e02a8))) {
          *(undefined4 *)(word_ptr_4 + -8) = 0x106f08;
          g_bss_003e02a8 = val;
          g_bss_003e02ac = g_bss_003e02ac + 1;
          bflib_system_io_fn_102834();
        }
        word_ptr_4 = word_ptr_4 + -4;
        if (99 < (uint)(val - g_bss_003e02a4)) {
          g_bss_003e02ac = 0;
          word_ptr_4 = word_ptr;
          g_bss_003e02a4 = val;
        }
      }
      val = *(int *)(*(int *)(word_ptr_4 + 0x54) + 0xdca);
      *(int *)(word_ptr_4 + 0x40) = val;
      *(int *)(word_ptr_4 + 0x14) = val + 0x54;
      *(int *)(word_ptr_4 + 0x34) = *(int *)(word_ptr_4 + 0x40) + 0x48;
      while (*(uint *)(word_ptr_4 + 0x40) < *(int *)(*(int *)(word_ptr_4 + 0x54) + 0xdca) + 0x4d40U) {
        *(undefined4 *)(word_ptr_4 + -4) = 0x1073c7;
        val = bflib_system_io_fn_1026b0();
        if (val != 0) {
          *(uint **)(word_ptr_4 + 0x44) = *(uint **)(word_ptr_4 + 0x34);
          uval = **(uint **)(word_ptr_4 + 0x34);
          ch = -1;
          if (uval < 0x4a435542) {
            if (uval < 0x47445542) {
              if (0x41535541 < uval) {
                if (uval < 0x41535543) goto LAB_00106f4a;
                flag_2 = uval == 0x44535542;
                goto LAB_00106ff9;
              }
            }
            else {
              if (uval < 0x47445543) goto LAB_00106f68;
              if (uval < 0x49435542) {
                flag_2 = uval == 0x48515542;
              }
              else {
                if (uval < 0x49435543) goto LAB_00106f4a;
                flag_2 = uval == 0x49485542;
              }
LAB_00106ff9:
              if (flag_2) goto LAB_00106f4a;
            }
          }
          else {
            if (0x4a435542 < uval) {
              if (uval < 0x4e445542) {
                if (uval < 0x4c435542) {
                  flag_2 = uval == 0x4b535542;
                }
                else {
                  if (uval < 0x4c435543) goto LAB_00106f4a;
                  flag_2 = uval == 0x4c485542;
                }
              }
              else {
                if (uval < 0x4e445543) goto LAB_00106f68;
                if (uval < 0x504e5542) {
                  flag_2 = uval == 0x50485542;
                }
                else {
                  if (uval < 0x504e5543) goto LAB_00106f4a;
                  flag_2 = uval == 0x50515542;
                }
              }
              goto LAB_00106ff9;
            }
LAB_00106f4a:
            val_2 = 0x10;
            flag_2 = false;
            val = 0;
            flag = true;
            byte_ptr = (byte *)(*(int *)(word_ptr_4 + 0x54) + 0x1587);
            byte_ptr_2 = *(byte **)(word_ptr_4 + 0x14);
            do {
              if (val_2 == 0) break;
              val_2 = val_2 + -1;
              flag_2 = *byte_ptr < *byte_ptr_2;
              flag = *byte_ptr == *byte_ptr_2;
              byte_ptr = byte_ptr + (uint)flag_3 * -2 + 1;
              byte_ptr_2 = byte_ptr_2 + (uint)flag_3 * -2 + 1;
            } while (flag);
            if (!flag) {
              val = (1 - (uint)flag_2) - (uint)(flag_2 != 0);
            }
            if (val == 0) {
LAB_00106f68:
              ch = '\0';
            }
          }
          if ((ch == '\0') && (**(int **)(word_ptr_4 + 0x44) == 0x50485542)) {
            val = *(int *)(word_ptr_4 + 0x44);
            if ((uint)*(ushort *)(val + 0x44) == *(uint *)(word_ptr_4 + 0x28)) {
              if (*(int *)(val + 0x4a) == *(int *)(*(int *)(word_ptr_4 + 0x54) + 0x157f)) {
                *(undefined4 *)(word_ptr_4 + 0x30) = *(undefined4 *)(word_ptr_4 + 0x2c);
                *(int *)(word_ptr_4 + 0x18) = loop_i;
                int_ptr = (int *)(*(int *)(word_ptr_4 + 0x44) + 0x52);
                *(undefined4 *)(word_ptr_4 + 0x4c) = 0;
                *(int *)(word_ptr_4 + 0x50) = *(int *)(word_ptr_4 + 0x44) + 0x56;
                word_ptr_2 = word_ptr_4;
                do {
                  word_ptr_4 = word_ptr_2;
                  if ((short)int_ptr[9] != 0) {
                    *(int *)(word_ptr_2 + 0x48) = *(int *)(word_ptr_2 + 0x48) + 1;
                    word_ptr_4 = word_ptr_2 + -4;
                    *(uint *)(word_ptr_2 + -4) =
                         (uint)(*int_ptr == *(int *)(*(int *)(word_ptr_2 + 0x44) + 0x40));
                    *(undefined4 *)(word_ptr_2 + -8) = 0x1070d0;
                    ch = lbnet_AddPlayer_0ff1d4();
                    if (ch != '\0') {
                      *(char **)(word_ptr_2 + -8) = s_WARNING_network__IPXServiceProvi_001728dc;
                      *(undefined4 *)(word_ptr_2 + -0xc) = 0x1070de;
                      LbNetLog();
                    }
                    int_ptr_3 = (int *)(*int_ptr * 0x38 + *(int *)(*(int *)(word_ptr_2 + 0x50) + 0xdce));
                    *(int **)(word_ptr_2 + -8) = int_ptr_3;
                    int_ptr_2 = int_ptr;
                    for (loop_i = 0xe; loop_i != 0; loop_i = loop_i + -1) {
                      *int_ptr_3 = *int_ptr_2;
                      int_ptr_2 = int_ptr_2 + (uint)flag_3 * -2 + 1;
                      int_ptr_3 = int_ptr_3 + (uint)flag_3 * -2 + 1;
                    }
                    for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
                      *(char *)int_ptr_3 = (char)*int_ptr_2;
                      int_ptr_2 = (int *)((int)int_ptr_2 + (uint)flag_3 * -2 + 1);
                      int_ptr_3 = (int *)((int)int_ptr_3 + (uint)flag_3 * -2 + 1);
                    }
                  }
                  loop_i = *(int *)(word_ptr_4 + 0x4c);
                  int_ptr = int_ptr + 0xe;
                  *(uint *)(word_ptr_4 + 0x4c) = loop_i + 1U;
                  *(int *)(word_ptr_4 + 0x50) = *(int *)(word_ptr_4 + 0x50) + 0x38;
                  word_ptr_2 = word_ptr_4;
                } while (loop_i + 1U < 6);
                if (*(uint *)(word_ptr_4 + 0x48) < *(uint *)(word_ptr_4 + 0x28)) {
                  loop_i = *(int *)(word_ptr_4 + 0x10);
                  uval = *(int *)(*(int *)(word_ptr_4 + 0x54) + 0x157f) + 1;
                  *(uint *)(*(int *)(word_ptr_4 + 0x54) + 0x157f) = uval;
                  if (uval <= (uint)(loop_i * 6) && loop_i * 6 - uval != 0) {
                    *(undefined4 *)(word_ptr_4 + -4) = 0x56;
                    *(undefined4 *)(word_ptr_4 + -8) = 0x1071b1;
                    bflib_system_io_fn_1023f4();
                    if ((g_heap_alloc_list_head & 1) == 0) {
                      g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
                      *(undefined4 *)(word_ptr_4 + -8) = 0x1071d0;
                      g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
                    }
                    if ((g_heap_alloc_list_head & 2) == 0) {
                      g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
                      *(undefined4 *)(word_ptr_4 + -8) = 0x1071f0;
                      g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
                    }
                    *(undefined4 *)(word_ptr_4 + -8) = 0x1071fa;
                    loop_i = bflib_system_io_fn_0e8d4a();
                    if ((extraout_CL_00 == '\0') || (0x32 < (uint)(loop_i - g_bss_003e02a8))) {
                      *(undefined4 *)(word_ptr_4 + -8) = 0x10722e;
                      g_bss_003e02a8 = loop_i;
                      g_bss_003e02ac = g_bss_003e02ac + 1;
                      bflib_system_io_fn_102834();
                    }
                    if (99 < (uint)(loop_i - g_bss_003e02a4)) {
                      g_bss_003e02ac = 0;
                      g_bss_003e02a4 = loop_i;
                    }
                    *(undefined4 *)(word_ptr_4 + -8) = 0x10724f;
                    loop_i = bflib_system_io_fn_0e8d4a();
                    *(int *)(word_ptr_4 + 0x28) = loop_i;
                    *(int *)(word_ptr_4 + 0x2c) = loop_i;
                    *(int *)(word_ptr_4 + 0x14) = loop_i;
                    word_ptr_4 = word_ptr_4 + -4;
                    goto LAB_0010735e;
                  }
                  *(undefined4 *)(word_ptr_4 + 0x1c) = 0xffffffff;
                }
                else {
                  loop_i = *(int *)(word_ptr_4 + 0x54);
                  *(undefined2 *)(loop_i + 0x1579) = *(undefined2 *)(*(int *)(word_ptr_4 + 0x44) + 0x44);
                  *(undefined4 *)(word_ptr_4 + 0x1c) = 1;
                  *(undefined2 *)(loop_i + 0x157b) = *(undefined2 *)(*(int *)(word_ptr_4 + 0x44) + 0x46);
                  word_ptr_4[0x58] = 0;
                }
                *(undefined4 *)(word_ptr_4 + -4) = 0x10718a;
                bflib_system_io_fn_1025c0();
                break;
              }
            }
            else {
              *(uint *)(word_ptr_4 + 0x28) = (uint)*(ushort *)(val + 0x44);
              *(uint *)(word_ptr_4 + 0x10) = (uint)*(ushort *)(val + 0x46);
              *(undefined4 *)(word_ptr_4 + -4) = 0x107284;
              LbScreenWaitVbi();
              *(undefined4 *)(*(int *)(word_ptr_4 + 0x54) + 0x157f) = 0;
              *(undefined4 *)(word_ptr_4 + 0x48) = 0;
              *(undefined4 *)(word_ptr_4 + -4) = 0x1072a9;
              loop_i = bflib_system_io_fn_0e8d4a();
              word_ptr_3 = word_ptr_4 + -4;
              *(undefined4 *)(word_ptr_4 + -4) = 0x56;
              *(int *)(word_ptr_4 + 0x2c) = loop_i;
              *(int *)(word_ptr_4 + 0x18) = loop_i;
              *(int *)(word_ptr_4 + 0x30) = loop_i;
              *(undefined4 *)(word_ptr_4 + -8) = 0x1072c2;
              bflib_system_io_fn_1023f4();
              if ((g_heap_alloc_list_head & 1) == 0) {
                g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
                *(undefined4 *)(word_ptr_4 + -8) = 0x1072e3;
                g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
              }
              if ((g_heap_alloc_list_head & 2) == 0) {
                g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
                *(undefined4 *)(word_ptr_4 + -8) = 0x107303;
                g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
              }
              *(undefined4 *)(word_ptr_4 + -8) = 0x10730d;
              val = bflib_system_io_fn_0e8d4a();
              if ((extraout_CL_01 == '\0') || (0x32 < (uint)(val - g_bss_003e02a8))) {
                *(undefined4 *)(word_ptr_4 + -8) = 0x107341;
                g_bss_003e02a8 = val;
                g_bss_003e02ac = g_bss_003e02ac + 1;
                bflib_system_io_fn_102834();
              }
              word_ptr_4 = word_ptr_4 + -4;
              if (99 < (uint)(val - g_bss_003e02a4)) {
                g_bss_003e02ac = 0;
                word_ptr_4 = word_ptr_3;
                g_bss_003e02a4 = val;
              }
            }
          }
LAB_0010735e:
          *(undefined4 *)(word_ptr_4 + -4) = 0x10736f;
          bflib_system_io_fn_1025c0();
        }
        *(int *)(word_ptr_4 + 0x14) = *(int *)(word_ptr_4 + 0x14) + 0x26a;
        *(int *)(word_ptr_4 + 0x34) = *(int *)(word_ptr_4 + 0x34) + 0x26a;
        *(int *)(word_ptr_4 + 0x40) = *(int *)(word_ptr_4 + 0x40) + 0x26a;
      }
    } while (*(int *)(word_ptr_4 + 0x1c) == 0);
  }
  return word_ptr_4[0x58];
}

/******************************************************************************
 * Function : lbnet_resending_packet_10962c (Original VA: 0x10962c, Ghidra: FUN_0010962c)
 * Prototype: undefined1 lbnet_resending_packet_10962c(void);
 * Address  : 0x10962c (Size: 928 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'RESENDING PACKET'
 * Callers  : 1 -> bflib_system_io_fn_1043c8
 * Callees  : 7 -> bflib_system_io_fn_0e8d4a, LbNetLog, lbnet_DecodeMessageStub_0ff8c0, bflib_system_io_fn_1023f4, bflib_system_io_fn_102834, watcom_crt_fn_108b74, watcom_crt_fn_1099cc
 ******************************************************************************/
undefined1 lbnet_resending_packet_10962c(void)

{
  char ch;
  ushort uval;
  int arg_eax;
  int val;
  int val_2;
  char extraout_CL;
  int arg_ecx;
  uint loop_i;
  char extraout_DH;
  char *arg_edx;
  int extraout_EDX;
  undefined4 *arg_ebx;
  undefined1 *word_ptr;
  char **val_3;
  char **val_4;
  char **val_5;
  undefined4 uval_2;
  undefined4 *word_ptr_2;
  byte flag;
  char *local_38;
  int local_34;
  int local_30 [4];
  char local_20 [4];
  short *local_1c;
  char *local_18;
  char local_14;
  undefined1 local_10;
  
  flag = 0;
  val_5 = (char **)&local_34;
  local_10 = 0xff;
  local_34 = arg_ecx;
  local_18 = arg_edx;
  if (*(int *)(arg_eax + 0x7a8) == 0) {
    val_4 = &local_38;
    local_38 = s_m_connectToSession___FALSE_00172996;
  }
  else {
    if (*(short *)(arg_eax + 0x17ef) == 1) {
      uval_2 = *(undefined4 *)(arg_eax + 0x151f);
      uval = *(ushort *)(arg_eax + 0x1525);
    }
    else {
      uval_2 = *(undefined4 *)(arg_eax + 0x1575);
      uval = *(ushort *)(arg_eax + 0x157b);
    }
    if ((char *)(uint)uval <= arg_edx) {
      local_38 = arg_edx;
      LbNetLog(s_Invalid_player_id__d_00172980);
      val_5 = (char **)&local_34;
      goto LAB_001099ad;
    }
    local_1c = (short *)((int)arg_edx * 0x38 + *(int *)(arg_eax + 0xdce) + 0x24);
    if (*local_1c == 0) {
      val_4 = &local_38;
      local_38 = s_sender_>SocketNumber___FALSE_00172962;
    }
    else {
      local_38 = (char *)0x1096c1;
      lbnet_DecodeMessageStub_0ff8c0();
      if (0x212 < (uint)local_30[1]) {
        local_38 = (char *)0x212;
        LbNetLog(s_Invalid_length___d_vs__d_00172948,local_30[1]);
        goto LAB_001099ad;
      }
      *(int *)(arg_eax + 0x159b) = local_34;
      ch = *(char *)(arg_eax + 0x17f1);
      *(undefined4 *)(arg_eax + 0x159f) = uval_2;
      *(char *)(arg_eax + 0x17f1) = ch + '\x01';
      *(char *)(arg_eax + 0x15a5) = ch;
      word_ptr_2 = (undefined4 *)(arg_eax + 0x15a7);
      for (loop_i = local_30[1] + 4U >> 2; loop_i != 0; loop_i = loop_i - 1) {
        *word_ptr_2 = *arg_ebx;
        arg_ebx = arg_ebx + (uint)flag * -2 + 1;
        word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      }
      for (loop_i = local_30[1] + 4U & 3; loop_i != 0; loop_i = loop_i - 1) {
        *(undefined1 *)word_ptr_2 = *(undefined1 *)arg_ebx;
        arg_ebx = (undefined4 *)((int)arg_ebx + (uint)flag * -2 + 1);
        word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      }
      if (local_34 == 0x47445542) {
        ch = local_18[arg_eax + 0x17f2];
        *(char *)(arg_eax + 0x15a6) = ch;
        local_18[arg_eax + 0x17f2] = ch + '\x01';
      }
      val_3 = &local_38;
      val_5 = &local_38;
      local_38 = (char *)0x21e;
      bflib_system_io_fn_1023f4();
      local_18 = (char *)((uint)local_18 & 0xffffff00);
      if ((g_heap_alloc_list_head & 1) == 0) {
        g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
        g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
      }
      if ((g_heap_alloc_list_head & 2) == 0) {
        g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
        g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
      }
      val = bflib_system_io_fn_0e8d4a();
      if (((char)local_18 == '\0') || (0x32 < (uint)(val - g_bss_003e02a8))) {
        g_bss_003e02a8 = val;
        g_bss_003e02ac = g_bss_003e02ac + 1;
        bflib_system_io_fn_102834();
      }
      if (99 < (uint)(val - g_bss_003e02a4)) {
        g_bss_003e02ac = 0;
        g_bss_003e02a4 = val;
      }
      if (local_38 != (char *)0x47445542) {
        local_14 = '\0';
        goto LAB_001099ad;
      }
      val = bflib_system_io_fn_0e8d4a();
      local_30[3] = val;
      if (local_14 == -1) {
        local_34 = arg_eax + 0x1492;
        local_30[2] = arg_eax + 0xd80;
        val_3 = &local_38;
        do {
          *(undefined4 *)((int)val_3 + -4) = 0x10983a;
          val_2 = bflib_system_io_fn_0e8d4a();
          if (500 < (uint)(val_2 - *(int *)((int)val_3 + 0x14))) break;
          if (6 < (uint)(val_2 - val)) {
            *(char **)((int)val_3 + -4) = s_RESENDING_PACKET_00172923;
            *(undefined4 *)((int)val_3 + -8) = 0x109864;
            LbNetLog();
            word_ptr = (undefined1 *)((int)val_3 + -4);
            *(undefined4 *)((int)val_3 + -4) = 0x21e;
            *(undefined4 *)((int)val_3 + -8) = 0x109881;
            bflib_system_io_fn_1023f4();
            *(int *)((int)val_3 + 8) = arg_eax;
            if ((g_heap_alloc_list_head & 1) == 0) {
              g_heap_alloc_list_head = g_heap_alloc_list_head | 1;
              *(undefined4 *)((int)val_3 + -8) = 0x1098a2;
              g_bss_003e02a4 = bflib_system_io_fn_0e8d4a();
            }
            if ((g_heap_alloc_list_head & 2) == 0) {
              g_heap_alloc_list_head = g_heap_alloc_list_head | 2;
              *(undefined4 *)((int)val_3 + -8) = 0x1098c0;
              g_bss_003e02a8 = bflib_system_io_fn_0e8d4a();
            }
            *(undefined4 *)((int)val_3 + -8) = 0x1098ca;
            val_2 = bflib_system_io_fn_0e8d4a();
            if ((extraout_CL == '\0') || (0x32 < (uint)(val_2 - g_bss_003e02a8))) {
              g_bss_003e02ac = g_bss_003e02ac + 1;
              *(undefined4 *)((int)val_3 + -8) = 0x10990f;
              g_bss_003e02a8 = val_2;
              bflib_system_io_fn_102834();
            }
            val_3 = (char **)((int)val_3 + -4);
            val = extraout_EDX;
            if (99 < (uint)(val_2 - g_bss_003e02a4)) {
              g_bss_003e02ac = 0;
              val_3 = (char **)word_ptr;
              g_bss_003e02a4 = val_2;
            }
          }
          *(undefined4 *)((int)val_3 + -4) = 0x10993f;
          val_2 = watcom_crt_fn_1099cc();
          if (val_2 == 1) {
            *(undefined1 *)((int)val_3 + 0x24) = 0;
          }
          *(undefined4 *)((int)val_3 + -4) = 0x109955;
          watcom_crt_fn_108b74();
        } while (extraout_DH == -1);
      }
      val_5 = val_3;
      if (*(char *)((int)val_3 + 0x24) != -1) goto LAB_001099ad;
      val_4 = (char **)((int)val_3 + -4);
      *(char **)((int)val_3 + -4) = s_DIDN_T_GET_AN_ACK_00172935;
    }
  }
  *(undefined4 *)((int)val_4 + -4) = 0x1099aa;
  LbNetLog();
  val_5 = (char **)((int)val_4 + 4);
LAB_001099ad:
  if (*(char *)((int)val_5 + 0x24) == -1) {
    *(char **)((int)val_5 + -4) = s_Ended_up_with_ret____LB_ERROR_001729b2;
    *(undefined4 *)((int)val_5 + -8) = 0x1099be;
    LbNetLog();
  }
  return *(undefined1 *)((int)val_5 + 0x24);
}

/******************************************************************************
 * Function : LbNETWORK_11e254 (Original VA: 0x11e254, Ghidra: FUN_0011e254)
 * Prototype: undefined8 LbNETWORK_11e254(void);
 * Address  : 0x11e254 (Size: 190 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Releasing SerialSP'
 * Callers  : 1 -> LbNETWORK_11f4d8
 * Callees  : 7 -> LbTimerClock, bflib_system_io_fn_0ed028, LbNetLog, LbNETWORK_0ff18c, lbnet_Receive_0ffb54, watcom_crt_fn_125600, watcom_crt_fn_125660
 ******************************************************************************/
undefined8 LbNETWORK_11e254(void)

{
  int arg_eax;
  undefined4 uval;
  int clock_ms;
  int extraout_ECX;
  undefined4 arg_edx;
  
  LbNetLog(s_LbNETWORK___Releasing_SerialSP_001732b4);
  if (*(int *)(arg_eax + 0xd74) == 0) {
    uval = LbNetLog(s_WARNING_network__SerialSP__Relea_001732d6);
    return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval >> 8),0xff));
  }
  if (*(int *)(arg_eax + 0xd94) == 0) {
    LbNetLog(s_WARNING_network__SerialSP__Relea_0017330e);
  }
  else {
    if (*(int *)(arg_eax + 0x7a8) != 0) {
      (**(code **)(*(int *)(arg_eax + 0xd7c) + 0xc))();
    }
    LbTimerClock();
    while( true ) {
      clock_ms = LbTimerClock();
      if (999 < (uint)(clock_ms - extraout_ECX)) break;
      lbnet_Receive_0ffb54();
    }
    watcom_crt_fn_125660();
    if (*(int *)(arg_eax + 0xd94) != 0) {
      watcom_crt_fn_125600();
      bflib_system_io_fn_0ed028();
    }
    *(undefined4 *)(arg_eax + 0xd94) = 0;
    *(undefined4 *)(arg_eax + 0xd74) = 0;
  }
  uval = LbNETWORK_0ff18c();
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : LbNETWORK_11e314 (Original VA: 0x11e314, Ghidra: FUN_0011e314)
 * Prototype: undefined8 LbNETWORK_11e314(undefined4 param_1);
 * Address  : 0x11e314 (Size: 367 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Initialising SerialSP'
 * Callers  : 1 -> watcom_crt_fn_11f508
 * Callees  : 7 -> bflib_system_io_fn_0ed020, LbNetLog, LbNETWORK_0ff10c, watcom_crt_fn_12550c, lbnet_serialhandler_size_port_irq_125630, watcom_crt_fn_1258c4, lbnet_commhandler_readserialdev_null_parameter_1262a4
 ******************************************************************************/
undefined8 LbNETWORK_11e314(undefined4 param_1)

{
  char ch;
  int val;
  int val_2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int val_3;
  undefined4 arg_edx;
  undefined4 *word_ptr;
  undefined4 *word_ptr_2;
  byte flag;
  undefined4 auStackY_17d8 [509];
  undefined4 auStackY_fe4 [1004];
  char *str_ptr;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  int local_20;
  char local_1c;
  
  flag = 0;
  local_2c = g_bss_003d97d0;
  local_28 = &g_data_001748e0;
  local_24 = 0;
  local_1c = -1;
  g_bss_003d97d0 = &local_2c;
  LbNetLog(s_LbNETWORK___Initialising_SerialS_0017334c);
  *(undefined1 *)(extraout_ECX + 0xdc0) = 0;
  *(undefined1 *)(extraout_ECX + 0xdc1) = 0;
  *(undefined4 *)(extraout_ECX + 0xd74) = 0;
  *(undefined4 *)(extraout_ECX + 0xdc2) = 0;
  ch = LbNETWORK_0ff10c();
  if (ch != '\0') {
    LbNetLog(s_WARNING_network__SerialSP__Seria_0017343f);
    goto LAB_0011e46b;
  }
  word_ptr = (undefined4 *)(extraout_ECX_00 + 0xd84 + (uint)flag * -8);
  *(undefined4 *)(extraout_ECX_00 + 0xd80) = param_1;
  word_ptr_2 = word_ptr + (uint)flag * -2 + 1;
  *word_ptr = *(undefined4 *)(&stack0x00000008 + (uint)flag * -8);
  *word_ptr_2 = *(undefined4 *)(&stack0x0000000c + (uint)flag * -8 + (uint)flag * -8);
  word_ptr_2[(uint)flag * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0x0000000c + (uint)flag * -8 + (uint)flag * -8) + ((uint)flag * -2 + 1) * 4)
  ;
  val = bflib_system_io_fn_0ed020();
  val_2 = 0;
  val_3 = extraout_ECX_01;
  if (val != 0) {
    local_24 = 1;
    local_20 = val;
    val_2 = watcom_crt_fn_12550c();
    local_24 = 0;
    val_3 = extraout_ECX_02;
  }
  *(int *)(val_3 + 0xd94) = val_2;
  if (val_2 != 0) {
    LbNetLog(s_CALLING_SERIALSP_INIT_00173371);
    LbNetLog(s_COM_PORT__d_00173389,*(undefined4 *)(extraout_ECX_03 + 0xda0));
    lbnet_commhandler_readserialdev_null_parameter_1262a4();
    val_2 = lbnet_serialhandler_size_port_irq_125630();
    if (val_2 == 0) {
      str_ptr = s_WARNING_network__SerialSP__Seria_001733f9;
    }
    else {
      LbNetLog(s_SERIAL_SP_INIT_SUCCESS_00173398);
      val_2 = watcom_crt_fn_1258c4();
      if (val_2 == 0) {
        local_1c = '\0';
        val_3 = extraout_ECX_04;
        goto LAB_0011e44b;
      }
      str_ptr = s_WARNING_network__SerialSP__Seria_001733b0;
    }
    LbNetLog(str_ptr);
    val_3 = extraout_ECX_05;
  }
LAB_0011e44b:
  if (local_1c == '\0') {
    *(undefined4 *)(val_3 + 0xd74) = 1;
  }
LAB_0011e46b:
  g_bss_003d97d0 = (undefined4 *)local_2c;
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)local_2c >> 8),local_1c));
}

/******************************************************************************
 * Function : lbnet_Start_11e484 (Original VA: 0x11e484, Ghidra: FUN_0011e484)
 * Prototype: undefined1 lbnet_Start_11e484(void);
 * Address  : 0x11e484 (Size: 205 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::Start() not initialised'
 * Callers  : 1 -> lbnet_MODEM_11f53c
 * Callees  : 4 -> LbNetLog, lbnet_AddPlayer_0ff1d4, bflib_system_io_fn_0ff398, bflib_system_io_fn_0ff834
 ******************************************************************************/
undefined1 lbnet_Start_11e484(void)

{
  char net_status;
  undefined4 *arg_eax;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 extraout_CL_01;
  undefined1 uval;
  int arg_ecx;
  
  if (arg_eax[0x35d] == 0) {
    LbNetLog(s_WARNING_network__SerialSP__Start_00173489);
    uval = extraout_CL;
  }
  else {
    if (arg_ecx != 2) {
      LbNetLog(s_WARNING_network__SerialSP__Start_001734bf);
      return extraout_CL_00;
    }
    bflib_system_io_fn_0ff834();
    if (arg_eax[0x365] == 0) {
      LbNetLog(s_WARNING_network__SerialSP__Start_001734f5);
      return extraout_CL_01;
    }
    if (arg_eax[0x1ea] != 0) {
      (**(code **)(arg_eax[0x35f] + 0xc))();
    }
    *arg_eax = 0;
    arg_eax[0x364] = 1;
    bflib_system_io_fn_0ff398();
    net_status = lbnet_AddPlayer_0ff1d4(1);
    if (net_status != '\0') {
      LbNetLog(s_WARNING_network__Win95SerialSP___00173531);
    }
    arg_eax[0x1ea] = 1;
    uval = 0;
  }
  return uval;
}

/******************************************************************************
 * Function : lbnet_Start_11e554 (Original VA: 0x11e554, Ghidra: FUN_0011e554)
 * Prototype: undefined1 lbnet_Start_11e554(void);
 * Address  : 0x11e554 (Size: 338 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::Start() not initialised'
 * Callers  : 1 -> lbnet_MODEM_11f818
 * Callees  : 7 -> LbTimerClock, LbNetLog, lbnet_AddPlayer_0ff1d4, bflib_system_io_fn_0ff398, bflib_system_io_fn_0ff53c, lbnet_EncodeMessageStub_0ff550, bflib_system_io_fn_100708
 ******************************************************************************/
undefined1 lbnet_Start_11e554(void)

{
  bool flag;
  char clock_ms;
  undefined4 *arg_eax;
  uint uval;
  undefined4 *word_ptr;
  undefined8 clock_ms_2;
  undefined4 auStackY_20 [2];
  char *str_ptr;
  undefined4 local_14;
  undefined1 local_10;
  
  word_ptr = &local_14;
  local_10 = 0xff;
  if (arg_eax[0x35d] == 0) {
    LbNetLog(s_WARNING_network__SerialSP__Start_00173573);
    local_10 = 0xff;
  }
  else {
    bflib_system_io_fn_0ff398();
    if (arg_eax[0x365] == 0) {
      str_ptr = s_WARNING_network__SerialSP__Start_001735a9;
    }
    else {
      if (arg_eax[0x1ea] != 0) {
        (**(code **)(arg_eax[0x35f] + 0xc))();
      }
      *arg_eax = 1;
      arg_eax[0x364] = 0;
      uval = bflib_system_io_fn_0ff53c();
      if (0x28 < uval) {
        LbNetLog(s_WARNING_network__SerialSP__Start_001735e5);
        return local_10;
      }
      lbnet_EncodeMessageStub_0ff550();
      clock_ms = (**(code **)(arg_eax[0x35f] + 0x30))();
      if (clock_ms == '\0') {
        local_14 = LbTimerClock();
        flag = true;
        do {
          *(undefined4 *)((int)word_ptr + -4) = 0x11e62d;
          bflib_system_io_fn_100708();
          if (arg_eax[0x1eb] == 0) {
            *(undefined4 *)((int)word_ptr + -4) = 0x11e674;
            clock_ms_2 = LbTimerClock();
            if (10000 < (uint)((int)clock_ms_2 - (int)((ulonglong)clock_ms_2 >> 0x20))) {
              flag = false;
            }
          }
          else {
            flag = false;
            *(undefined4 *)((int)word_ptr + -4) = 0;
            *(undefined4 *)((int)word_ptr + -8) = 0x11e649;
            clock_ms = lbnet_AddPlayer_0ff1d4();
            if (clock_ms != '\0') {
              *(char **)((int)word_ptr + -8) = s_WARNING_network__SerialSP__Start_00173628;
              *(undefined4 *)((int)word_ptr + -0xc) = 0x11e657;
              LbNetLog();
            }
            arg_eax[0x1ea] = 1;
            *(undefined1 *)word_ptr = 0;
            word_ptr = (undefined4 *)((int)word_ptr + -4);
          }
        } while (flag);
        return *(undefined1 *)((int)word_ptr + 4);
      }
      str_ptr = s_WARNING_network__SerialSP__Start_00173665;
    }
    LbNetLog(str_ptr);
  }
  return local_10;
}

/******************************************************************************
 * Function : lbnet_SendMessage_11e6a8 (Original VA: 0x11e6a8, Ghidra: FUN_0011e6a8)
 * Prototype: undefined1 lbnet_SendMessage_11e6a8(void);
 * Address  : 0x11e6a8 (Size: 832 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::SendMessage() invalid sendMode()'
 * Callers  : 1 -> watcom_crt_fn_11fb8c
 * Callees  : 5 -> LbTimerClock, LbNetLog, lbnet_DecodeMessageStub_0ff8c0, lbnet_Receive_0ffb54, watcom_crt_fn_1257b0
 ******************************************************************************/
undefined1 lbnet_SendMessage_11e6a8(void)

{
  bool flag;
  int arg_eax;
  char arg_cl;
  int clock_ms;
  uint clock_ms_2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uval;
  undefined4 *word_ptr;
  undefined4 *arg_ebx;
  int *int_ptr;
  undefined4 *word_ptr_2;
  int *int_ptr_2;
  byte flag_2;
  char *str_ptr;
  int local_28;
  uint local_18;
  int local_14;
  undefined1 local_10;
  
  flag_2 = 0;
  local_10 = 0xff;
  local_14 = 0;
  if (arg_cl == '\0') {
    flag = false;
  }
  else {
    if (arg_cl != '\x01') {
      str_ptr = s_WARNING_network__SerialSP__SendM_001736a2;
      goto LAB_0011e9d5;
    }
    flag = true;
  }
  lbnet_DecodeMessageStub_0ff8c0();
  if (flag) {
    local_18 = 0;
    if (0x40b < local_28 + 0xbU) {
      LbNetLog(s_WARNING_network__SerialSP__SendM_001736e1);
      return local_10;
    }
    word_ptr = (undefined4 *)&g_data_00196de0;
    word_ptr_2 = &g_bss_003e0958;
    for (clock_ms = 1; clock_ms != 0; clock_ms = clock_ms + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
    }
    for (clock_ms = 0; clock_ms != 0; clock_ms = clock_ms + -1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_2 * -2 + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
    }
    word_ptr = (undefined4 *)(arg_eax + 0xdc0);
    word_ptr_2 = (undefined4 *)&g_bss_003e095c;
    for (clock_ms = 0; clock_ms != 0; clock_ms = clock_ms + -1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
    }
    for (clock_ms = 1; clock_ms != 0; clock_ms = clock_ms + -1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_2 * -2 + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
    }
    word_ptr = arg_ebx;
    word_ptr_2 = (undefined4 *)&g_bss_003e095d;
    for (clock_ms_2 = local_28 + 4U >> 2; clock_ms_2 != 0; clock_ms_2 = clock_ms_2 - 1) {
      *word_ptr_2 = *word_ptr;
      word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
      word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
    }
    for (clock_ms_2 = local_28 + 4U & 3; clock_ms_2 != 0; clock_ms_2 = clock_ms_2 - 1) {
      *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
      word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_2 * -2 + 1);
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
    }
    clock_ms_2 = 0;
    do {
      local_14 = local_14 + (uint)(byte)(&g_data_00196de0)[clock_ms_2];
      clock_ms_2 = clock_ms_2 + 1;
    } while (clock_ms_2 < 4);
    clock_ms_2 = CONCAT31((int3)(clock_ms_2 >> 8),*(undefined1 *)(arg_eax + 0xdc0)) & 0xffff00ff;
    local_14 = local_14 + clock_ms_2;
    word_ptr = (undefined4 *)(local_28 + 4 + (int)arg_ebx);
    for (; arg_ebx < word_ptr; arg_ebx = (undefined4 *)((int)arg_ebx + 1)) {
      clock_ms_2 = CONCAT31((int3)(clock_ms_2 >> 8),*(undefined1 *)arg_ebx);
      local_14 = local_14 + clock_ms_2;
    }
    int_ptr = &local_14;
    int_ptr_2 = (int *)(&g_bss_003e0961 + local_28);
    for (clock_ms = 0; clock_ms != 0; clock_ms = clock_ms + -1) {
      *int_ptr_2 = *int_ptr;
      int_ptr = int_ptr + (uint)flag_2 * -2 + 1;
      int_ptr_2 = int_ptr_2 + (uint)flag_2 * -2 + 1;
    }
    for (clock_ms = 2; clock_ms != 0; clock_ms = clock_ms + -1) {
      *(char *)int_ptr_2 = (char)*int_ptr;
      int_ptr = (int *)((int)int_ptr + (uint)flag_2 * -2 + 1);
      int_ptr_2 = (int *)((int)int_ptr_2 + (uint)flag_2 * -2 + 1);
    }
    clock_ms = watcom_crt_fn_1257b0();
    if (clock_ms == extraout_ECX) {
      *(undefined4 *)(arg_eax + 0xdc2) = 1;
      LbTimerClock();
      if (*(int *)(arg_eax + 0xdc2) == 0) {
        return local_10;
      }
      do {
        lbnet_Receive_0ffb54();
        if (*(int *)(arg_eax + 0xdc2) == 0) {
          local_10 = 0;
        }
        else {
          clock_ms = LbTimerClock();
          if (0x9c4 < (uint)(clock_ms - extraout_ECX_00)) {
            local_18 = local_18 + 1;
            if (local_18 < 9) {
              clock_ms_2 = watcom_crt_fn_1257b0();
              if (clock_ms_2 == local_28 + 0xbU) {
                LbTimerClock();
              }
              else {
                LbNetLog(s_WARNING_network__SerialSP__SendM_00173766);
                *(undefined4 *)(arg_eax + 0xdc2) = 0;
              }
            }
            else {
              LbNetLog(s_WARNING_network__SerialSP__SendM_00173729);
              *(undefined4 *)(arg_eax + 0xdc2) = 0;
            }
          }
        }
      } while (*(int *)(arg_eax + 0xdc2) != 0);
      return local_10;
    }
    LbNetLog(s_WARNING_network__SerialSP__SendM_001737b7);
    return local_10;
  }
  clock_ms = watcom_crt_fn_1257b0();
  if (clock_ms == 4) {
    clock_ms_2 = watcom_crt_fn_1257b0();
    if (clock_ms_2 != local_28 + 4U) {
      LbNetLog(s_WARNING_network__SerialSP__SendM_00173859);
      return local_10;
    }
    uval = 0;
    do {
      clock_ms_2 = CONCAT31((int3)(clock_ms_2 >> 8),(&g_data_00196ddc)[uval]) & 0xffff00ff;
      local_14 = local_14 + clock_ms_2;
      uval = uval + 1;
    } while (uval < 4);
    word_ptr = (undefined4 *)(local_28 + 4 + (int)arg_ebx);
    for (; arg_ebx < word_ptr; arg_ebx = (undefined4 *)((int)arg_ebx + 1)) {
      clock_ms_2 = CONCAT31((int3)(clock_ms_2 >> 8),*(undefined1 *)arg_ebx);
      local_14 = local_14 + clock_ms_2;
    }
    clock_ms = watcom_crt_fn_1257b0();
    if (clock_ms != 2) {
      LbNetLog(s_WARNING_network__SerialSP__SendM_00173808);
      return local_10;
    }
    return 0;
  }
  str_ptr = s_WARNING_network__SerialSP__SendM_001738aa;
LAB_0011e9d5:
  LbNetLog(str_ptr);
  return local_10;
}

/******************************************************************************
 * Function : lbnet_Enumerate_11e9e8 (Original VA: 0x11e9e8, Ghidra: FUN_0011e9e8)
 * Prototype: undefined4 lbnet_Enumerate_11e9e8(void);
 * Address  : 0x11e9e8 (Size: 77 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::Enumerate() not initialised'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbNetLog, bflib_system_io_fn_0ff3a4, bflib_system_io_fn_0ff4d8
 ******************************************************************************/
undefined4 lbnet_Enumerate_11e9e8(void)

{
  int arg_eax;
  undefined4 uval;
  code *arg_edx;
  
  if (*(int *)(arg_eax + 0xd74) == 0) {
    LbNetLog(s_WARNING_network__SerialSP__Enume_001738fb);
    uval = 0xff;
  }
  else {
    bflib_system_io_fn_0ff4d8();
    uval = bflib_system_io_fn_0ff3a4();
    if (arg_edx != (code *)0x0) {
      (*arg_edx)(uval);
    }
    uval = 0;
  }
  return uval;
}

/******************************************************************************
 * Function : lbnet_Enumerate_11ea38 (Original VA: 0x11ea38, Ghidra: FUN_0011ea38)
 * Prototype: undefined1 lbnet_Enumerate_11ea38(void);
 * Address  : 0x11ea38 (Size: 192 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::Enumerate() not initialised'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbNetLog, bflib_system_io_fn_0ff4f4, bflib_system_io_fn_100708
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 lbnet_Enumerate_11ea38(void)

{
  char ch;
  undefined1 uval;
  int arg_eax;
  code *arg_ebx;
  undefined **val;
  char *str_ptr;
  char *str_ptr_2;
  undefined *puStack_18;
  char *pcStack_14;
  
  val = (undefined **)&stack0xfffffff0;
  if (*(int *)(arg_eax + 0xd74) == 0) {
    pcStack_14 = s_WARNING_network__SerialSP__Enume_00173944;
    puStack_18 = (undefined *)0x11ea57;
    LbNetLog();
    uval = 0xff;
  }
  else {
    if (*(int *)(arg_eax + 0x7a8) == 0) {
      str_ptr = s_REMOTE_PLAYER_00173a13;
      str_ptr_2 = &g_bss_003e090d;
      g_bss_003e0901 = 0;
      g_bss_003e0905 = 0;
      g_bss_003e0909 = 0;
      do {
        ch = *str_ptr;
        *str_ptr_2 = ch;
        if (ch == '\0') break;
        ch = str_ptr[1];
        str_ptr = str_ptr + 2;
        str_ptr_2[1] = ch;
        str_ptr_2 = str_ptr_2 + 2;
      } while (ch != '\0');
      val = &puStack_18;
      puStack_18 = &g_bss_003e0900;
      (*arg_ebx)();
    }
    else {
      pcStack_14 = (char *)0x11ea78;
      ch = bflib_system_io_fn_100708();
      if (ch == '\0') {
        pcStack_14 = (char *)0x11ea86;
        ch = bflib_system_io_fn_0ff4f4();
        val = (undefined **)&stack0xfffffff0;
        if (ch != '\0') {
          pcStack_14 = s_WARNING_network__SerialSP__Enume_0017397e;
          puStack_18 = (undefined *)0x11ea96;
          LbNetLog();
          val = (undefined **)&stack0xfffffff0;
        }
      }
      else {
        pcStack_14 = s_WARNING_network__SerialSP__Enume_001739c6;
        puStack_18 = (undefined *)0x11eaa9;
        LbNetLog();
      }
    }
    uval = *(undefined1 *)((int)val + 4);
  }
  return uval;
}

/******************************************************************************
 * Function : lbnet_Stop_11eaf8 (Original VA: 0x11eaf8, Ghidra: FUN_0011eaf8)
 * Prototype: undefined8 lbnet_Stop_11eaf8(void);
 * Address  : 0x11eaf8 (Size: 138 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::Stop() not initialised'
 * Callers  : 1 -> lbnet_calling_hangupmodem_11fb98
 * Callees  : 5 -> LbNetLog, bflib_system_io_fn_0ff398, bflib_system_io_fn_0ff628, lbnet_EncodeMessageStub_0ff630, lbnet_DecodeMessageStub_100718
 ******************************************************************************/
undefined8 lbnet_Stop_11eaf8(void)

{
  int arg_eax;
  uint uval;
  undefined4 uval_2;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  undefined1 extraout_DL_01;
  undefined1 uval_3;
  undefined4 arg_edx;
  
  uval = bflib_system_io_fn_0ff628();
  if (*(int *)(arg_eax + 0xd74) == 0) {
    uval_2 = LbNetLog(s_WARNING_network__SerialSP__Stop__00173a21);
    uval_3 = extraout_DL;
  }
  else {
    if (*(int *)(arg_eax + 0x7a8) == 0) {
      uval_2 = LbNetLog(s_WARNING_network__SerialSP__Stop__00173a56);
      return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval_2 >> 8),extraout_DL_00));
    }
    if (8 < uval) {
      uval_2 = LbNetLog(s_WARNING_network__SerialSP__Stop__00173a96);
      return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval_2 >> 8),extraout_DL_01));
    }
    lbnet_EncodeMessageStub_0ff630();
    lbnet_DecodeMessageStub_100718();
    *(undefined4 *)(arg_eax + 0x7a8) = 0;
    uval_2 = bflib_system_io_fn_0ff398();
    uval_3 = 0;
  }
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)uval_2 >> 8),uval_3));
}

/******************************************************************************
 * Function : lbnet_ReadMessage_11eb84 (Original VA: 0x11eb84, Ghidra: FUN_0011eb84)
 * Prototype: undefined4 lbnet_ReadMessage_11eb84(void);
 * Address  : 0x11eb84 (Size: 73 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::ReadMessage() invalid m_localPlayerId'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbNetLog, lbnet_PrivateReceive_11ece0
 ******************************************************************************/
undefined4 lbnet_ReadMessage_11eb84(void)

{
  int *arg_eax;
  int net_status;
  undefined4 *arg_edx;
  undefined4 uval;
  
  net_status = lbnet_PrivateReceive_11ece0();
  uval = 0;
  if (net_status != 0) {
    if (*arg_eax == 0) {
      *arg_edx = 1;
    }
    else if (*arg_eax == 1) {
      *arg_edx = 0;
    }
    else {
      LbNetLog(s_WARNING_network__SerialSP__ReadM_00173adb);
    }
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : lbnet_PeekMessage_11ebd0 (Original VA: 0x11ebd0, Ghidra: FUN_0011ebd0)
 * Prototype: undefined4 lbnet_PeekMessage_11ebd0(void);
 * Address  : 0x11ebd0 (Size: 76 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::PeekMessage() invalid m_localPlayerId'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbNetLog, lbnet_PrivateReceive_11ece0
 ******************************************************************************/
undefined4 lbnet_PeekMessage_11ebd0(void)

{
  int *arg_eax;
  int net_status;
  undefined4 *arg_edx;
  undefined4 uval;
  
  net_status = lbnet_PrivateReceive_11ece0();
  uval = 0;
  if (net_status != 0) {
    if (*arg_eax == 0) {
      *arg_edx = 1;
    }
    else if (*arg_eax == 1) {
      *arg_edx = 0;
    }
    else {
      LbNetLog(s_WARNING_network__SerialSP__PeekM_00173b1f);
    }
    uval = 1;
  }
  return uval;
}

/******************************************************************************
 * Function : lbnet_SendAck_11ec1c (Original VA: 0x11ec1c, Ghidra: FUN_0011ec1c)
 * Prototype: void lbnet_SendAck_11ec1c(void);
 * Address  : 0x11ec1c (Size: 194 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::SendAck() failure on CommHandler::Writ'
 * Callers  : 1 -> lbnet_warning_network_serialsp_privatereceive_11ee0c
 * Callees  : 2 -> LbNetLog, watcom_crt_fn_1257b0
 ******************************************************************************/
void lbnet_SendAck_11ec1c(void)

{
  uint uval;
  int loop_i;
  undefined1 arg_dl;
  undefined4 *word_ptr;
  int *int_ptr;
  undefined4 *word_ptr_2;
  int *int_ptr_2;
  int local_1c [2];
  
  local_1c[0] = 0;
  word_ptr = (undefined4 *)&g_data_00196de4;
  word_ptr_2 = &g_bss_003e0d6c;
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr_2 = *word_ptr;
    word_ptr = word_ptr + 1;
    word_ptr_2 = word_ptr_2 + 1;
  }
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
    word_ptr = (undefined4 *)((int)word_ptr + 1);
    word_ptr_2 = (undefined4 *)((int)word_ptr_2 + 1);
  }
  int_ptr = local_1c;
  int_ptr_2 = (int *)&g_bss_003e0d70;
  for (loop_i = 0; int_ptr = int_ptr + 1, loop_i != 0; loop_i = loop_i + -1) {
    *int_ptr_2 = *int_ptr;
    int_ptr_2 = int_ptr_2 + 1;
  }
  for (loop_i = 1; loop_i != 0; loop_i = loop_i + -1) {
    *(char *)int_ptr_2 = (char)*int_ptr;
    int_ptr = (int *)((int)int_ptr + 1);
    int_ptr_2 = (int *)((int)int_ptr_2 + 1);
  }
  uval = 0;
  do {
    local_1c[0] = local_1c[0] + (uint)(byte)(&g_data_00196de4)[uval];
    uval = uval + 1;
  } while (uval < 4);
  local_1c[0] = local_1c[0] + (CONCAT31((int3)(uval >> 8),arg_dl) & 0xffff00ff);
  int_ptr = local_1c;
  word_ptr = (undefined4 *)&g_bss_003e0d71;
  for (loop_i = 0; loop_i != 0; loop_i = loop_i + -1) {
    *word_ptr = *int_ptr;
    int_ptr = int_ptr + 1;
    word_ptr = word_ptr + 1;
  }
  for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
    *(undefined1 *)word_ptr = *(undefined1 *)int_ptr;
    int_ptr = (undefined4 *)((int)int_ptr + 1);
    word_ptr = (undefined4 *)((int)word_ptr + 1);
  }
  loop_i = watcom_crt_fn_1257b0();
  if (loop_i != 7) {
    LbNetLog(s_WARNING_network__SerialSP__SendA_00173ba2);
  }
  return;
}

/******************************************************************************
 * Function : lbnet_PrivateReceive_11ece0 (Original VA: 0x11ece0, Ghidra: FUN_0011ece0)
 * Prototype: int lbnet_PrivateReceive_11ece0(void);
 * Address  : 0x11ece0 (Size: 298 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'WARNING network: SerialSP::PrivateReceive() invalid mode value'
 * Callers  : 2 -> lbnet_ReadMessage_11eb84, lbnet_PeekMessage_11ebd0
 * Callees  : 4 -> LbNetLog, lbnet_warning_network_serialsp_privatereceive_11ee0c, watcom_crt_fn_11f13c, watcom_crt_fn_125674
 ******************************************************************************/
int lbnet_PrivateReceive_11ece0(void)

{
  int val;
  bool flag;
  int arg_eax;
  int net_status;
  char arg_cl;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  int *arg_ebx;
  int *int_ptr;
  
  flag = true;
  val = *arg_ebx;
  if ((arg_cl == '\0') || (arg_cl == '\x01')) {
    net_status = lbnet_warning_network_serialsp_privatereceive_11ee0c();
    if ((net_status == 0) && (*arg_ebx == 0)) {
      while (flag) {
        net_status = watcom_crt_fn_125674();
        if (net_status == -1) {
          flag = false;
          net_status = extraout_ECX;
        }
        else {
          net_status = 0;
          int_ptr = (int *)(arg_eax + 0xdca);
          do {
            if (*int_ptr == 0) {
              if (net_status == 0) {
                *(undefined1 *)(int_ptr + 1) = 0;
                *(undefined4 *)((int)int_ptr + 5) = 0;
                *int_ptr = 1;
                watcom_crt_fn_11f13c();
                net_status = extraout_ECX_00;
              }
            }
            else {
              watcom_crt_fn_11f13c();
              net_status = extraout_ECX_01;
            }
            int_ptr = (int *)((int)int_ptr + 0x419);
          } while (int_ptr != (int *)(arg_eax + 0x36c4));
          *arg_ebx = val;
          net_status = lbnet_warning_network_serialsp_privatereceive_11ee0c();
          if ((net_status != 0) || (*arg_ebx != 0)) {
            flag = false;
          }
        }
      }
    }
  }
  else {
    LbNetLog(s_WARNING_network__SerialSP__Priva_00173bed);
    net_status = extraout_EDX;
  }
  return net_status;
}

/******************************************************************************
 * Function : lbnet_warning_network_serialsp_privatereceive_11ee0c (Original VA: 0x11ee0c, Ghidra: FUN_0011ee0c)
 * Prototype: undefined4 lbnet_warning_network_serialsp_privatereceive_11ee0c(void);
 * Address  : 0x11ee0c (Size: 694 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'WARNING network: SerialSP::PrivateReceive addPlayerBuffer to'
 * Callers  : 1 -> lbnet_PrivateReceive_11ece0
 * Callees  : 6 -> LbNetLog, bflib_system_io_fn_0ff53c, lbnet_EncodeMessageStub_0ff550, lbnet_DecodeMessageStub_0ff8c0, lbnet_Send_1002dc, lbnet_SendAck_11ec1c
 ******************************************************************************/
undefined4 lbnet_warning_network_serialsp_privatereceive_11ee0c(void)

{
  byte flag;
  uint uval;
  int arg_eax;
  int val;
  int *int_ptr;
  int arg_ecx;
  int extraout_ECX;
  uint loop_i;
  int val_2;
  undefined4 *arg_edx;
  int val_3;
  uint loop_i_2;
  uint *arg_ebx;
  undefined4 *word_ptr;
  undefined4 uval_2;
  undefined4 *word_ptr_2;
  byte flag_2;
  int local_2c;
  int *local_18;
  uint local_14;
  char local_10;
  
  flag_2 = 0;
  uval = *arg_ebx;
  uval_2 = 0;
  val = arg_eax + 0xdd3;
  local_14 = 0;
  *arg_ebx = 0;
  local_18 = (int *)(arg_eax + 0xdca);
  do {
    if ((*local_18 != 0) && ((char)local_18[1] == '\x05')) {
      val_2 = 0;
      loop_i_2 = 0;
      int_ptr = (int *)(arg_eax + 0xdca);
      do {
        if ((*int_ptr != 0) && (loop_i_2 != local_14)) {
          *int_ptr = 0;
        }
        loop_i_2 = loop_i_2 + 1;
        int_ptr = (int *)((int)int_ptr + 0x419);
      } while (loop_i_2 < 10);
      flag = *(byte *)(local_18 + 0x104);
      if (flag < 0x1b) {
        if (flag == 4) {
          if ((char)local_18[0x105] == *(char *)(arg_eax + 0xdc0)) {
            if (*(int *)(arg_eax + 0xdc2) == 0) {
              *local_18 = 0;
            }
            else {
              *(undefined4 *)(arg_eax + 0xdc2) = 0;
              *(char *)(arg_eax + 0xdc0) = *(char *)(arg_eax + 0xdc0) + '\x01';
              *local_18 = 0;
            }
          }
          else {
LAB_0011eea3:
            *local_18 = 0;
          }
        }
      }
      else {
        if (0x1b < flag) {
          if (flag != 0x1e) goto LAB_0011ef18;
          if ((char)local_18[0x105] != *(char *)(arg_eax + 0xdc1)) {
            lbnet_SendAck_11ec1c(val);
            val_2 = extraout_ECX;
            goto LAB_0011eea3;
          }
        }
        val_2 = 1;
      }
LAB_0011ef18:
      if (val_2 == 0) {
        *local_18 = 0;
      }
      else {
        lbnet_DecodeMessageStub_0ff8c0();
        loop_i_2 = local_2c + 4;
        *arg_ebx = loop_i_2;
        if (loop_i_2 <= uval) {
          word_ptr = (undefined4 *)((int)local_18 + 9);
          word_ptr_2 = arg_edx;
          for (loop_i = loop_i_2 >> 2; loop_i != 0; loop_i = loop_i - 1) {
            *word_ptr_2 = *word_ptr;
            word_ptr = word_ptr + (uint)flag_2 * -2 + 1;
            word_ptr_2 = word_ptr_2 + (uint)flag_2 * -2 + 1;
          }
          for (loop_i_2 = loop_i_2 & 3; loop_i_2 != 0; loop_i_2 = loop_i_2 - 1) {
            *(undefined1 *)word_ptr_2 = *(undefined1 *)word_ptr;
            word_ptr = (undefined4 *)((int)word_ptr + (uint)flag_2 * -2 + 1);
            word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag_2 * -2 + 1);
          }
          if (arg_ecx != 0) {
            if ((char)local_18[0x104] == '\x1e') {
              lbnet_SendAck_11ec1c(val);
              *(char *)(arg_eax + 0xdc1) = *(char *)(arg_eax + 0xdc1) + '\x01';
            }
            lbnet_DecodeMessageStub_0ff8c0();
            if (local_10 == '\x02') {
              *(undefined1 *)(arg_eax + 0xdc0) = 0;
              *(undefined1 *)(arg_eax + 0xdc1) = 0;
              *(undefined4 *)(arg_eax + 0xdc2) = 0;
            }
            if (local_10 == '\x01') {
              val_2 = 0;
              *local_18 = 0;
              loop_i_2 = 0;
              val_3 = arg_eax;
              if (*(int *)(arg_eax + 0x7ac) != 0) {
                do {
                  if (*(int *)(val_3 + 0x7b1) == 0) {
                    val_2 = loop_i_2 * 0x2d + arg_eax + 0x7bd;
                  }
                  loop_i_2 = loop_i_2 + 1;
                  val_3 = val_3 + 0x2d;
                } while (loop_i_2 < *(uint *)(arg_eax + 0x7ac));
              }
              if (val_2 != 0) {
                loop_i_2 = bflib_system_io_fn_0ff53c();
                if (loop_i_2 < 0x29) {
                  lbnet_EncodeMessageStub_0ff550();
                  lbnet_Send_1002dc();
                }
                else {
                  LbNetLog(s_WARNING_network__SerialSP__Priva_00173c2f);
                }
              }
            }
            *local_18 = 0;
          }
          uval_2 = 1;
        }
      }
    }
    val = val + 0x419;
    local_18 = (int *)((int)local_18 + 0x419);
    local_14 = local_14 + 1;
    if (9 < local_14) {
      return uval_2;
    }
  } while( true );
}

/******************************************************************************
 * Function : LbNETWORK_11f4d8 (Original VA: 0x11f4d8, Ghidra: FUN_0011f4d8)
 * Prototype: void LbNETWORK_11f4d8(void);
 * Address  : 0x11f4d8 (Size: 48 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : References 'LbNETWORK : Releasing ModemSP'
 * Callers  : 0 -> 
 * Callees  : 2 -> LbNetLog, LbNETWORK_11e254
 ******************************************************************************/
void LbNETWORK_11f4d8(void)

{
  int extraout_EDX;
  
  LbNetLog(s_LbNETWORK___Releasing_ModemSP_00173c78);
  if (*(int *)(extraout_EDX + 0x7a8) != 0) {
    (**(code **)(*(int *)(extraout_EDX + 0xd7c) + 0xc))();
  }
  LbNETWORK_11e254();
  return;
}

/******************************************************************************
 * Function : lbnet_MODEM_11f53c (Original VA: 0x11f53c, Ghidra: FUN_0011f53c)
 * Prototype: undefined1 lbnet_MODEM_11f53c(int *param_1);
 * Address  : 0x11f53c (Size: 730 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : Log prefix 'MODEM: USER ABORTS MODEM INIT FUNCTION'
 * Callers  : 0 -> 
 * Callees  : 9 -> LbNetLog, lbnet_Start_11e484, watcom_crt_fn_1258dc, watcom_crt_fn_1259b0, watcom_crt_response_code_125c34, watcom_crt_fn_1263ec, watcom_crt_fn_1265f8, watcom_crt_fn_126618 ...
 ******************************************************************************/
undefined1 lbnet_MODEM_11f53c(int *param_1)

{
  char ch;
  int arg_eax;
  int val;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  undefined1 uval;
  undefined1 extraout_DL;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  char *str_ptr;
  char *str_ptr_2;
  int *int_ptr;
  
  uval = 0xff;
  if (*(int *)(arg_eax + 0xd74) != 0) {
    if (*(int *)(arg_eax + 0x7a8) != 0) {
      (**(code **)(*(int *)(arg_eax + 0xd7c) + 0xc))();
      param_1 = extraout_ECX;
    }
    if (param_1 == (int *)0x0) {
      uval = 0xff;
    }
    else {
      if (*param_1 != 0) {
        *(int *)(*(int *)(arg_eax + 0xd94) + 0x50) = *param_1 * 100;
      }
      if (param_1[1] != 0) {
        *(int *)(*(int *)(arg_eax + 0xd94) + 0x54) = param_1[1] * 100;
      }
      if (param_1[0x2b] != 0) {
        watcom_crt_fn_1265f8();
      }
      watcom_crt_fn_126618();
      watcom_crt_fn_12665c();
      val = watcom_crt_fn_1259b0();
      watcom_crt_fn_1265f8();
      if (extraout_ECX_00 == -7) {
        LbNetLog(s_MODEM__USER_ABORTS_MODEM_INIT_FU_00173c99);
        param_1[0x2a] = extraout_ECX_01;
        return 0xff;
      }
      if (extraout_ECX_00 == -1) {
        LbNetLog(s_MODEM__Didin_t_get_modem_Respons_00173cc0);
        param_1[0x2a] = extraout_ECX_02;
        return 0xff;
      }
      int_ptr = param_1 + 2;
      if (val != 1) {
        LbNetLog(s_MODEM__Modem_Response_wasn_t_OK_o_00173cf2);
        str_ptr = *(char **)(arg_eax + 0xd94);
        str_ptr_2 = extraout_ECX_03;
        do {
          ch = *str_ptr;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
        param_1[0x2a] = val;
        LbNetLog(s_MODEM_RESPONSE_CODE____s_00173d20,*(undefined4 *)(arg_eax + 0xd94));
        return 0xff;
      }
      str_ptr = *(char **)(arg_eax + 0xd94);
      do {
        ch = *str_ptr;
        *(char *)int_ptr = ch;
        if (ch == '\0') break;
        ch = str_ptr[1];
        str_ptr = str_ptr + 2;
        *(char *)((int)int_ptr + 1) = ch;
        int_ptr = (int *)((int)int_ptr + 2);
      } while (ch != '\0');
      param_1[0x2a] = 1;
      LbNetLog(s_MODEM_RESPONSE_CODE____s_00173d3a,*(undefined4 *)(arg_eax + 0xd94));
      watcom_crt_fn_1258dc();
      val = watcom_crt_fn_1263ec();
      LbNetLog(s_ANSWER_MODEM_RESPONSE_CODE____s_00173d54,*(undefined4 *)(arg_eax + 0xd94));
      if (((extraout_EDX != 1) && (extraout_EDX != 3)) && (extraout_EDX != 2)) {
        if (extraout_EDX == -1) {
          LbNetLog(s_MODEM__Didn_t_responsded_to_Auto_00173de1);
          param_1[0x2a] = extraout_EDX_00;
          return 0xff;
        }
        LbNetLog(s_MODEM__Responded_with_the_follow_00173e12);
        str_ptr = *(char **)(arg_eax + 0xd94);
        str_ptr_2 = extraout_ECX_04;
        do {
          ch = *str_ptr;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
        param_1[0x2a] = extraout_EDX_01;
        LbNetLog(s_MODEM_RESPONSE_CODE____s_00173e43,*(undefined4 *)(arg_eax + 0xd94));
        return 0xff;
      }
      ch = lbnet_Start_11e484(0);
      uval = 0;
      if (ch != '\0') {
        if (val != 1) {
          LbNetLog(s_MODEM__I_COULDNT_JOIN_SERVER_SO_I_00173d75);
          watcom_crt_response_code_125c34();
        }
        LbNetLog(s_MODEM__TURN_OFF_AUTO_ANSWER_BY_C_00173dae);
        watcom_crt_fn_1259b0();
        uval = extraout_DL;
      }
    }
  }
  return uval;
}

/******************************************************************************
 * Function : lbnet_MODEM_11f818 (Original VA: 0x11f818, Ghidra: FUN_0011f818)
 * Prototype: char lbnet_MODEM_11f818(void);
 * Address  : 0x11f818 (Size: 883 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : Log prefix 'MODEM: IS BUSY OR ENGAGED'
 * Callers  : 0 -> 
 * Callees  : 10 -> LbScreenWaitVbi, LbNetLog, lbnet_Start_11e554, watcom_crt_fn_1259b0, watcom_crt_fn_125ab4, watcom_crt_response_code_125c34, watcom_crt_fn_1265f8, watcom_crt_fn_126600 ...
 ******************************************************************************/
char lbnet_MODEM_11f818(void)

{
  char ch;
  int arg_eax;
  int val;
  char extraout_CL;
  int *arg_ecx;
  int *extraout_ECX;
  char *str_ptr;
  int *int_ptr;
  int *int_ptr_2;
  char local_10;
  
  local_10 = -1;
  if (*(int *)(arg_eax + 0xd74) != 0) {
    if (*(int *)(arg_eax + 0x7a8) != 0) {
      (**(code **)(*(int *)(arg_eax + 0xd7c) + 0xc))();
      arg_ecx = extraout_ECX;
    }
    if (arg_ecx != (int *)0x0) {
      if (*arg_ecx != 0) {
        *(int *)(*(int *)(arg_eax + 0xd94) + 0x50) = *arg_ecx * 100;
      }
      if (arg_ecx[1] != 0) {
        *(int *)(*(int *)(arg_eax + 0xd94) + 0x54) = arg_ecx[1] * 100;
      }
      if (arg_ecx[0x2b] != 0) {
        watcom_crt_fn_1265f8();
      }
      if (arg_ecx[0x2c] != 0) {
        watcom_crt_fn_126600();
      }
      watcom_crt_fn_126618();
      watcom_crt_fn_12665c();
      val = watcom_crt_fn_1259b0();
      watcom_crt_fn_1265f8();
      if (val == -7) {
        LbNetLog(s_USER_ABORTS_MODEM_INIT_FUNCTION_00173e5d);
        arg_ecx[0x2a] = -7;
        local_10 = -1;
      }
      else {
        if (val == -1) {
          LbNetLog(s_DIDN_T_GET_MODEM_RESPONSE_FROM_I_00173e7e);
          arg_ecx[0x2a] = -1;
          return -1;
        }
        int_ptr = arg_ecx + 2;
        if (val != 1) {
          str_ptr = *(char **)(arg_eax + 0xd94);
          do {
            ch = *str_ptr;
            *(char *)int_ptr = ch;
            if (ch == '\0') break;
            ch = str_ptr[1];
            str_ptr = str_ptr + 2;
            *(char *)((int)int_ptr + 1) = ch;
            int_ptr = (int *)((int)int_ptr + 2);
          } while (ch != '\0');
          arg_ecx[0x2a] = val;
          LbNetLog(s_DIDN_T_GET_OK_MODEM_RESPONSE_COD_00173eac,*(undefined4 *)(arg_eax + 0xd94));
          return -1;
        }
        str_ptr = *(char **)(arg_eax + 0xd94);
        int_ptr_2 = int_ptr;
        do {
          ch = *str_ptr;
          *(char *)int_ptr_2 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          *(char *)((int)int_ptr_2 + 1) = ch;
          int_ptr_2 = (int *)((int)int_ptr_2 + 2);
        } while (ch != '\0');
        arg_ecx[0x2a] = 1;
        LbNetLog(s_MODEM_RESPONSE_CODE____s_00173edc,*(undefined4 *)(arg_eax + 0xd94));
        val = watcom_crt_fn_125ab4();
        watcom_crt_fn_126600();
        if (val == -7) {
          LbNetLog(s_USER_ABORTS_MODEM_DIALING_FUNCTI_00173ef6);
          arg_ecx[0x2a] = -7;
          LbNetLog(s_OK_ILL_BETTER_HANGUP_THE_MODEM_J_00173f1a);
          watcom_crt_response_code_125c34();
          return -1;
        }
        if (val == -1) {
          LbNetLog(s_NO_MODEM_RESPONSE_FROM_DIALING_00173f47);
          arg_ecx[0x2a] = -1;
          LbNetLog(s_OK_ILL_BETTER_HANGUP_THE_MODEM_J_00173f67);
          watcom_crt_response_code_125c34();
          return -1;
        }
        str_ptr = *(char **)(arg_eax + 0xd94);
        do {
          ch = *str_ptr;
          *(char *)int_ptr = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          *(char *)((int)int_ptr + 1) = ch;
          int_ptr = (int *)((int)int_ptr + 2);
        } while (ch != '\0');
        arg_ecx[0x2a] = val;
        LbNetLog(s_MODEM_RESPONSE_CODE____s_00173f94,*(undefined4 *)(arg_eax + 0xd94));
        if (val == 2) {
          local_10 = lbnet_Start_11e554();
          if (local_10 == -1) {
            LbScreenWaitVbi();
            arg_ecx[0x2a] = -2;
            LbNetLog(s_NO_SERVER_FOUND_HANGINGUP_MODEM_00173fae);
            watcom_crt_response_code_125c34();
            return extraout_CL;
          }
        }
        else {
          if (val == 4) {
            LbNetLog(s_MODEM__IS_BUSY_OR_ENGAGED_00173fcf);
            return -1;
          }
          if (val == 7) {
            LbNetLog(s_MODEM__THERE_IS_NO_DIALTONE_00173fea);
            return -1;
          }
          if (val == 5) {
            LbNetLog(s_MODEM_DIDN_T_UNDERSTAND_MODEM_ST_00174007);
            return -1;
          }
          if (val == 6) {
            LbNetLog(s_MODEM__THERE_IS_NOCARRIER_0017402d);
            return -1;
          }
        }
      }
    }
  }
  return local_10;
}

/******************************************************************************
 * Function : lbnet_calling_hangupmodem_11fb98 (Original VA: 0x11fb98, Ghidra: FUN_0011fb98)
 * Prototype: undefined8 lbnet_calling_hangupmodem_11fb98(void);
 * Address  : 0x11fb98 (Size: 49 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'CALLING HANGUPMODEM'
 * Callers  : 0 -> 
 * Callees  : 3 -> LbNetLog, lbnet_Stop_11eaf8, watcom_crt_response_code_125c34
 ******************************************************************************/
undefined8 lbnet_calling_hangupmodem_11fb98(void)

{
  int arg_eax;
  undefined4 arg_edx;
  undefined1 arg_bl;
  
  if (*(int *)(arg_eax + 0x7a8) != 0) {
    arg_bl = lbnet_Stop_11eaf8();
    LbNetLog(s_CALLING_HANGUPMODEM_00174048);
    arg_eax = watcom_crt_response_code_125c34();
  }
  return CONCAT44(arg_edx,CONCAT31((int3)((uint)arg_eax >> 8),arg_bl));
}

/******************************************************************************
 * Function : lbnet_fn_124d1c (Original VA: 0x124d1c, Ghidra: FUN_00124d1c)
 * Prototype: undefined4 lbnet_fn_124d1c(void);
 * Address  : 0x124d1c (Size: 165 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : Module bflib/bflib_network.cpp procedure @ 0x124d1c
 * Callers  : 2 -> watcom_crt_com_port_has_fifo_125168, watcom_crt_fn_1258c4
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
undefined4 lbnet_fn_124d1c(void)

{
  int val;
  int arg_edx;
  int arg_ebx;
  
  if (arg_edx < 4) {
    val = (&g_bss_003e0d9c)[arg_edx * 0x409];
    if (arg_ebx < 300) {
      arg_ebx = 300;
    }
    else if (0x1c200 < arg_ebx) {
      arg_ebx = 0x1c200;
    }
    out(*(short *)(val + 0x1096) + 3,0x83);
    out(*(short *)(val + 0x1096) + 1,(char)((ulonglong)(0x1c200 / (longlong)arg_ebx) >> 8));
    out(*(undefined2 *)(val + 0x1096),(char)(0x1c200 / (longlong)arg_ebx));
    out(*(short *)(val + 0x1096) + 3,3);
    LbNetLog(s_BAUD____d_0017429e,arg_ebx);
    return 0;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : lbnet_serialhandler_size_port_irq_125630 (Original VA: 0x125630, Ghidra: FUN_00125630)
 * Prototype: undefined4 * lbnet_serialhandler_size_port_irq_125630(void);
 * Address  : 0x125630 (Size: 546 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'SERIALHANDLER size %d Port %x IRQ %x INT VECT %x'
 * Callers  : 1 -> LbNETWORK_11e314
 * Callees  : 5 -> LbNetLog, bflib_system_io_fn_0f7786, watcom_crt_fn_124f30, watcom_crt_fn_125034, watcom_crt_com_port_has_fifo_125168
 ******************************************************************************/
undefined4 * lbnet_serialhandler_size_port_irq_125630(void)

{
  undefined4 *word_ptr;
  int arg_eax;
  undefined2 *extraout_ECX;
  int loop_i;
  uint arg_edx;
  undefined4 *word_ptr_2;
  undefined4 *word_ptr_3;
  byte flag;
  uint uval;
  undefined2 local_2c;
  int local_20;
  undefined1 local_18;
  
  flag = 0;
  *(uint *)(arg_eax + 0x198) = arg_edx;
  if (3 < (int)arg_edx) {
    return (undefined4 *)0x0;
  }
  if ((*(byte *)(&g_bss_003e0da6 + arg_edx * 0x812) & 1) == 0) {
    uval = 0x100;
    bflib_system_io_fn_0f7786(0x100,0x10d);
    if (local_20 != 0) {
      return (undefined4 *)0x0;
    }
    if (extraout_ECX != (undefined2 *)0x0) {
      *extraout_ECX = local_2c;
    }
    word_ptr = (undefined4 *)((uval & 0xffff) << 4);
  }
  else {
    word_ptr = (undefined4 *)(&g_bss_003e0d9c)[arg_edx * 0x409];
  }
  if (word_ptr == (undefined4 *)0x0) {
    word_ptr = (undefined4 *)0x0;
  }
  else {
    word_ptr_2 = &g_data_00150068;
    word_ptr_3 = word_ptr;
    for (loop_i = 0x25; loop_i != 0; loop_i = loop_i + -1) {
      *word_ptr_3 = *word_ptr_2;
      word_ptr_2 = word_ptr_2 + (uint)flag * -2 + 1;
      word_ptr_3 = word_ptr_3 + (uint)flag * -2 + 1;
    }
    for (loop_i = 2; loop_i != 0; loop_i = loop_i + -1) {
      *(undefined1 *)word_ptr_3 = *(undefined1 *)word_ptr_2;
      word_ptr_2 = (undefined4 *)((int)word_ptr_2 + (uint)flag * -2 + 1);
      word_ptr_3 = (undefined4 *)((int)word_ptr_3 + (uint)flag * -2 + 1);
    }
    *(undefined2 *)((int)word_ptr + 2) = *(undefined2 *)(&g_bss_003e0da0 + arg_edx * 0x1024);
    LbNetLog(s_SERIALHANDLER_size__d_Port__x_IR_0017426c,0x96,*(undefined2 *)((int)word_ptr + 2),
                 *(undefined2 *)(&g_bss_003e0da4 + arg_edx * 0x1024),
                 *(undefined2 *)(&g_bss_003e0da2 + arg_edx * 0x1024));
    local_18 = (undefined1)arg_edx;
    *(undefined1 *)(word_ptr + 0x42a) = local_18;
    *(undefined2 *)((int)word_ptr + 0x1096) =
         *(undefined2 *)(&g_bss_003e0da0 + (arg_edx & 0xff) * 0x1024);
    *(undefined2 *)(word_ptr + 0x426) =
         *(undefined2 *)(&g_bss_003e0da2 + (uint)*(byte *)(word_ptr + 0x42a) * 0x1024);
    *(undefined2 *)((int)word_ptr + 0x109a) =
         *(undefined2 *)(&g_bss_003e0da4 + (uint)*(byte *)(word_ptr + 0x42a) * 0x1024);
    *(undefined2 *)(word_ptr + 0x428) = 0;
    *(undefined2 *)((int)word_ptr + 0x10a2) = 0;
    *(undefined2 *)(word_ptr + 0x427) = 0;
    *(undefined2 *)((int)word_ptr + 0x109e) = 0;
    (&g_bss_003e0d9c)[(uint)*(byte *)(word_ptr + 0x42a) * 0x409] = word_ptr;
    (&g_bss_003e0da6)[(uint)*(byte *)(word_ptr + 0x42a) * 0x812] = 1;
    watcom_crt_fn_124f30();
    watcom_crt_fn_125034();
    watcom_crt_com_port_has_fifo_125168();
    word_ptr[0x429] = 0x2580;
  }
  return word_ptr;
}

/******************************************************************************
 * Function : lbnet_commhandler_readserialdev_null_parameter_1262a4 (Original VA: 0x1262a4, Ghidra: FUN_001262a4)
 * Prototype: void lbnet_commhandler_readserialdev_null_parameter_1262a4(void);
 * Address  : 0x1262a4 (Size: 295 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Purpose  : String 'CommHandler::ReadSerialDev NULL parameter passed'
 * Callers  : 1 -> LbNETWORK_11e314
 * Callees  : 1 -> LbNetLog
 ******************************************************************************/
void lbnet_commhandler_readserialdev_null_parameter_1262a4(void)

{
  char ch;
  uint uval;
  int arg_eax;
  uint *arg_edx;
  char *str_ptr;
  char *str_ptr_2;
  
  if (arg_edx == (uint *)0x0) {
    LbNetLog(s_CommHandler__ReadSerialDev_NULL_p_00174397);
  }
  else {
    if ((*arg_edx < 4) && (arg_edx[2] != 0xffffffff)) {
      uval = arg_edx[2];
      *(short *)(&g_bss_003e0da4 + *arg_edx * 0x1024) = (short)uval;
      *(short *)(&g_bss_003e0da2 + *arg_edx * 0x1024) = (short)uval + 8;
    }
    if (arg_edx[3] == 2) {
      str_ptr = (char *)arg_edx[4];
      str_ptr_2 = (char *)(arg_eax + 0x58);
      if (str_ptr == (char *)0x0) {
        arg_edx[4] = (uint)str_ptr_2;
      }
      else {
        do {
          ch = *str_ptr;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
      }
      str_ptr = (char *)arg_edx[5];
      str_ptr_2 = (char *)(arg_eax + 0xa8);
      if (str_ptr == (char *)0x0) {
        arg_edx[5] = (uint)str_ptr_2;
      }
      else {
        do {
          ch = *str_ptr;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
      }
      str_ptr = (char *)arg_edx[6];
      str_ptr_2 = (char *)(arg_eax + 0xf8);
      if (str_ptr == (char *)0x0) {
        arg_edx[6] = (uint)str_ptr_2;
      }
      else {
        do {
          ch = *str_ptr;
          *str_ptr_2 = ch;
          if (ch == '\0') break;
          ch = str_ptr[1];
          str_ptr = str_ptr + 2;
          str_ptr_2[1] = ch;
          str_ptr_2 = str_ptr_2 + 2;
        } while (ch != '\0');
      }
      str_ptr = (char *)arg_edx[7];
      str_ptr_2 = (char *)(arg_eax + 0x148);
      if (str_ptr == (char *)0x0) {
        arg_edx[7] = (uint)str_ptr_2;
        return;
      }
      do {
        ch = *str_ptr;
        *str_ptr_2 = ch;
        if (ch == '\0') {
          return;
        }
        ch = str_ptr[1];
        str_ptr = str_ptr + 2;
        str_ptr_2[1] = ch;
        str_ptr_2 = str_ptr_2 + 2;
      } while (ch != '\0');
    }
  }
  return;
}

