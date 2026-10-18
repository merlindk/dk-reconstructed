/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: bflib/bflib_network.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 81
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : dk_bullfrog_net_library_version_0ed04c (Ghidra: FUN_000ed04c)
 * Prototype: void dk_bullfrog_net_library_version_0ed04c(void);
 * Address  : 0xed04c (Size: 86 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'BULLFROG NET LIBRARY VERSION %f FOR %s LAST BUILT __DATE__'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xe7714
 * Strings  :
 *   - 0x16d35a: "DOS"
 *   - 0x16d35e: "BULLFROG NET LIBRARY VERSION %f FOR %s LAST BUILT __DATE__\n"
 ******************************************************************************/
void FUN_000ed04c(void)

{
  char cVar1;
  int in_EAX;
  int extraout_EDX;
  char *pcVar2;
  char *pcVar3;
  char local_34 [40];
  
  pcVar3 = local_34;
  if (in_EAX != 0) {
    pcVar2 = &DAT_0016d35a; /* 0x16d35a="DOS" */
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    FUN_000e7714();
    *(undefined4 *)(extraout_EDX + 0x50) = 0x3f8ccccd;
  }
  return;
}

/******************************************************************************
 * Function : sub_0ed0e8 (Ghidra: FUN_000ed0e8)
 * Prototype: uint sub_0ed0e8(void);
 * Address  : 0xed0e8 (Size: 158 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x33ead
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16d3e0: "Serial"
 *   - 0x16d3e7: "Modem"
 *   - 0x16d3ed: "IPX"
 ******************************************************************************/
uint FUN_000ed0e8(void)

{
  char cVar1;
  code *in_EAX;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 local_58;
  char local_57 [51];
  code *local_24;
  code *local_1c;
  code *local_14;
  
  local_60 = &local_58;
  pcVar3 = s_Serial_0016d3e0;
  pcVar4 = local_57;
  local_14 = in_EAX;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = s_Modem_0016d3e7;
  pcVar4 = local_57;
  uStack_64 = 0xed12b;
  (*local_14)();
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = &DAT_0016d3ed; /* 0x16d3ed="IPX" */
  pcVar4 = (char *)((int)&local_60 + 1);
  local_68 = (undefined1 *)&local_60;
  (*local_1c)();
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  uVar2 = (*local_24)(&local_68);
  return uVar2 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_LbNetwork_Init_0ed4e0 (Ghidra: FUN_000ed4e0)
 * Prototype: undefined8 dk_LbNetwork_Init_0ed4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5,undefined4 param_6,int param_7,char *param_8,undefined4 param_9);
 * Address  : 0xed4e0 (Size: 873 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: LbNetwork_Init() failure on compositeBuffer allo'
 * Callers  : 3 -> 0x3315b, 0xed1b0, 0xed354
 * Callees  : 8 -> 0xe6a10, 0xe9484, 0xefd90, 0xff040, 0x1008d0, 0x101158, 0x1012c0, 0x1031e8
 * Strings  :
 *   - 0x16d41f: "  WARNING network: LbNetwork_Init() failure on compositeBuffer allocation\n"
 *   - 0x16d46b: "Selecting DOS Serial SP\n"
 *   - 0x16d484: "  WARNING network: LbNetwork_Init() failure on GenericSerialInit()\n"
 *   - 0x16d4c8: "Selecting DOS Modem SP\n"
 *   - 0x16d4e0: "  WARNING network: LbNetwork_Init() failure on GenericModemInit()\n"
 *   - 0x16d523: "Selecting DOS IPX SP\n"
 *   - 0x16d539: "  WARNING network: GenericIPXInit() failure on ServiceProvider::Init()\n"
 *   - 0x16d581: "  WARNING network: LbNetwork_Init() failure on GenericIPXInit()\n"
 *   - 0x16d5c2: "The serviceIndex value of %d is out of range\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_000ed4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6,int param_7,char *param_8,undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char extraout_CL;
  char extraout_CL_00;
  char cVar4;
  char extraout_CL_01;
  uint extraout_ECX;
  undefined1 extraout_DH;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
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
  
  bVar10 = 0;
  puVar7 = &local_48;
  DAT_003dd898 = param_7;
  DAT_003dd884 = param_5;
  local_2c = DAT_003d97d0;
  local_24 = 0;
  DAT_0019556c = 0xfa;
  DAT_003dd86c = 0;
  DAT_003dd870 = 0;
  DAT_003dd89c = 0;
  DAT_003dd8a4 = 0;
  DAT_003dd874 = 0;
  DAT_003dd8ac = 0;
  DAT_003dd87c = 0;
  DAT_003d97d0 = &local_2c;
  DAT_003dd880 = 0;
  PTR_FUN_000ef14c_00195580 = FUN_000ef14c;
  local_28 = &DAT_0017459c;
  _DAT_00195594 = 0;
  local_1c = 0xff;
  DAT_003dd894 = param_6;
  PTR_FUN_000ef7a8_00195584 = FUN_000ef7a8;
  DAT_003dd864 = param_8;
  if (param_7 != 0) {
    DAT_003dd880 = param_5 * param_7;
    pcStack_4c = (char *)0xed5a6;
    DAT_003dd870 = FUN_000e9484();
    if (DAT_003dd870 == 0) {
      pcStack_4c = s_WARNING_network__LbNetwork_Init__0016d41f;
      ppuStack_50 = (undefined **)0xed5b9;
      uVar1 = FUN_000efd90();
      uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),0xff);
      goto LAB_000ed68b;
    }
  }
  pcStack_4c = (char *)0xed5d4;
  FUN_000e6a10();
  uVar6 = DAT_003dd884;
  uVar5 = 0;
  if (DAT_003dd884 != 0) {
    iVar3 = 0;
    do {
      uVar5 = uVar5 + 1;
      *(undefined4 *)((int)&DAT_003dd8b4 + iVar3) = 0;
      iVar3 = iVar3 + 0x2c;
    } while (uVar5 < uVar6);
  }
  uVar6 = 0;
  if (DAT_003dd884 != 0) {
    do {
      pcVar9 = DAT_003dd864;
      pcVar8 = &DAT_0016d46a;
      uVar6 = uVar6 + 1;
      pcVar9[0x20] = '\0';
      pcVar9[0x21] = '\0';
      pcVar9[0x22] = '\0';
      pcVar9[0x23] = '\0';
      do {
        cVar4 = *pcVar8;
        *pcVar9 = cVar4;
        if (cVar4 == '\0') break;
        cVar4 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar4;
        pcVar9 = pcVar9 + 2;
      } while (cVar4 != '\0');
    } while (uVar6 < DAT_003dd884);
  }
  if (extraout_ECX == 0) {
    pcStack_4c = s_Selecting_DOS_Serial_SP_0016d46b;
    ppuStack_50 = (undefined **)0xed64c;
    FUN_000efd90();
    pcStack_4c = (char *)param_9;
    ppuStack_50 = (undefined **)param_4;
    uStack_54 = param_3;
    uStack_58 = param_2;
    puVar7 = &uStack_5c;
    uStack_5c = param_1;
    pcStack_60 = (char *)0xed66d;
    uVar1 = FUN_001008d0();
    if ((char)uVar1 == '\0') {
      local_30 = (char)uVar1;
      puVar7 = &uStack_5c;
    }
    else {
      pcStack_60 = s_WARNING_network__LbNetwork_Init__0016d484;
      uStack_64 = 0xed684;
      uVar1 = FUN_000efd90();
    }
  }
  else if (extraout_ECX < 2) {
    pcStack_4c = s_Selecting_DOS_Modem_SP_0016d4c8;
    ppuStack_50 = (undefined **)0xed6ab;
    FUN_000efd90();
    pcStack_4c = (char *)param_9;
    ppuStack_50 = (undefined **)param_4;
    uStack_54 = param_3;
    uStack_58 = param_2;
    uStack_5c = param_1;
    pcStack_60 = (char *)0xed6cc;
    uVar1 = FUN_00101158();
    if ((char)uVar1 == '\0') {
      local_30 = (char)uVar1;
      puVar7 = &uStack_5c;
    }
    else {
      pcStack_60 = s_WARNING_network__LbNetwork_Init__0016d4e0;
      uStack_64 = 0xed6e0;
      uVar1 = FUN_000efd90();
      puVar7 = &uStack_5c;
    }
  }
  else if (extraout_ECX == 2) {
    pcStack_4c = s_Selecting_DOS_IPX_SP_0016d523;
    ppuStack_50 = (undefined **)0xed6f7;
    FUN_000efd90();
    local_48 = param_1;
    local_44[(uint)bVar10 * -2] = (&param_2)[(uint)bVar10 * -2];
    local_44[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         (&param_3)[(uint)bVar10 * -2 + (uint)bVar10 * -2];
    (local_44 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
         (&param_3 + (uint)bVar10 * -2 + (uint)bVar10 * -2)[(uint)bVar10 * -2 + 1];
    if (DAT_003dd8a0 != 0) {
      pcStack_4c = (char *)0xed715;
      (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x1c))();
      if (DAT_003dd8a0 != 0) {
        pcStack_4c = (char *)0xed72b;
        (*(code *)**(undefined4 **)(DAT_003dd8a0 + 0xd7c))();
      }
      DAT_003dd8a0 = 0;
    }
    pcStack_4c = (char *)0xed73d;
    iVar2 = FUN_000e9484();
    iVar3 = 0;
    cVar4 = extraout_CL;
    if (iVar2 != 0) {
      local_24 = 1;
      local_34 = 0;
      pcStack_4c = (char *)0xed767;
      local_38 = iVar2;
      local_20 = iVar2;
      FUN_000ff040();
      local_24 = 3;
      pcStack_4c = (char *)0xed775;
      iVar3 = FUN_001012c0();
      *(undefined4 *)(iVar3 + 0x723) = 0;
      *(undefined4 *)(iVar3 + 0x727) = 0;
      *(undefined1 *)(iVar3 + 0x72b) = extraout_DH;
      *(undefined ***)(iVar3 + -4) = &PTR_FUN_00103134_00174668;
      iVar3 = iVar3 + -0xd80;
      local_24 = 0;
      local_34 = local_34 | 0x10;
      cVar4 = extraout_CL_00;
    }
    uVar1 = 0;
    puVar7 = &local_48;
    DAT_003dd8a0 = iVar3;
    if (iVar3 != 0) {
      pcStack_4c = (char *)0x0;
      ppuStack_50 = &PTR_FUN_000ef460_00195570;
      uStack_54 = 0;
      uStack_58 = local_44[2];
      uStack_5c = local_44[1];
      pcStack_60 = (char *)local_44[0];
      puVar7 = &uStack_64;
      uStack_64 = local_48;
      uVar1 = (**(code **)(*(int *)(iVar3 + 0xd7c) + 0x18))();
      if ((char)uVar1 == '\0') {
        cVar4 = '\0';
        puVar7 = &uStack_64;
      }
      else {
        uVar1 = FUN_000efd90(s_WARNING_network__GenericIPXInit__0016d539);
        cVar4 = extraout_CL_01;
      }
    }
    if (cVar4 == '\0') {
      *(undefined1 *)((int)puVar7 + 0x2c) = 0;
    }
    else {
      *(char **)((int)puVar7 + -4) = s_WARNING_network__LbNetwork_Init__0016d581;
      *(undefined4 *)((int)puVar7 + -8) = 0xed810;
      uVar1 = FUN_000efd90();
    }
  }
  else {
    ppuStack_50 = (undefined **)s_The_serviceIndex_value_of__d_is_o_0016d5c2;
    uStack_54 = 0xed841;
    uVar1 = FUN_000efd90();
    puVar7 = &local_48;
  }
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),*(undefined1 *)((int)puVar7 + 0x2c));
LAB_000ed68b:
  DAT_003d97d0 = (undefined4 *)*(undefined4 *)((int)puVar7 + 0x1c);
  return CONCAT44(*(undefined4 *)((int)puVar7 + 0x3c),uVar1);
}

/******************************************************************************
 * Function : dk_LbNetwork_Create_0ed84c (Ghidra: FUN_000ed84c)
 * Prototype: undefined1 dk_LbNetwork_Create_0ed84c(void);
 * Address  : 0xed84c (Size: 467 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'ERROR::LbNetwork_Create ServiceProvider ptr is NULL'
 * Callers  : 1 -> 0x34a8a
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16d5f0: "ERROR::LbNetwork_Create ServiceProvider ptr is NULL\n"
 *   - 0x16d625: "ERROR::GetCurrentPlayers ServiceProvider ptr is NULL\n"
 *   - 0x16d65b: "CALLING  GET CURRENT PLAYERS\n"
 *   - 0x16d679: "  WARNING network: GetCurrentPlayers() localPlayerIndex not updated max players %d\n"
 *   - 0x16d6cd: "  WARNING network: GetCurrentPlayers() failure on ServiceProvider::Enumerate()\n"
 *   - 0x16d71d: "CALLING  GET PLAYER INFO\n"
 *   - 0x16d39a: "NEW PLAYERS ARE ALLOWED TO JOIN\n"
 *   - 0x16d737: "  WARNING network: LbNetwork_Create() failure on GetCurrentPlayers()\n"
 *   - 0x16d77d: "  WARNING network: LbNetwork_Create() failure on SP::Start()\n"
 ******************************************************************************/
undefined1 FUN_000ed84c(void)

{
  char cVar1;
  char cVar2;
  uint extraout_ECX;
  uint uVar3;
  int iVar4;
  uint *unaff_EBX;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_14;
  
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Create_ServiceP_0016d5f0);
    local_14 = 0xff;
  }
  else {
    if (DAT_003dd8ac != 0) {
      DAT_003dd88c = 0;
      DAT_003dd888 = 0;
      DAT_003e0250 = 1;
      DAT_003e024c = 1;
    }
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 8))();
    if (cVar1 == '\0') {
      cVar1 = -1;
      if (DAT_003dd8a0 == 0) {
        FUN_000efd90(s_ERROR__GetCurrentPlayers_Service_0016d625);
      }
      else {
        DAT_003dd888 = DAT_003dd884;
        cVar1 = -1;
        FUN_000efd90(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
        cVar2 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
        if (cVar2 == '\0') {
          if (DAT_003dd888 < DAT_003dd884) {
            cVar1 = '\0';
          }
          else {
            FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d679,DAT_003dd884);
          }
        }
        else {
          FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d6cd);
        }
      }
      if (cVar1 == '\0') {
        *unaff_EBX = DAT_003dd888;
        FUN_000efd90(s_CALLING_GET_PLAYER_INFO_0016d71d);
        if (DAT_003dd884 != 0) {
          iVar4 = 0;
          iVar5 = 0;
          uVar3 = extraout_ECX;
          do {
            if (*(int *)((int)&DAT_003dd8b4 + iVar5) == 0) {
              *(undefined4 *)(iVar4 + 0x20 + DAT_003dd864) = 0;
            }
            else {
              pcVar7 = (char *)(DAT_003dd864 + iVar4);
              pcVar6 = &DAT_003dd8bc + iVar5;
              pcVar7[0x20] = '\x01';
              pcVar7[0x21] = '\0';
              pcVar7[0x22] = '\0';
              pcVar7[0x23] = '\0';
              do {
                cVar1 = *pcVar6;
                *pcVar7 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar6[1];
                pcVar6 = pcVar6 + 2;
                pcVar7[1] = cVar1;
                pcVar7 = pcVar7 + 2;
              } while (cVar1 != '\0');
            }
            iVar4 = iVar4 + 0x24;
            uVar3 = uVar3 + 1;
            iVar5 = iVar5 + 0x2c;
          } while (uVar3 < DAT_003dd884);
        }
        if (DAT_003dd8a0 == 0) {
          return 0;
        }
        FUN_000efd90(s_NEW_PLAYERS_ARE_ALLOWED_TO_JOIN_0016d39a);
        (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x24))();
        return 0;
      }
      pcVar6 = s_WARNING_network__LbNetwork_Creat_0016d737;
    }
    else {
      pcVar6 = s_WARNING_network__LbNetwork_Creat_0016d77d;
    }
    FUN_000efd90(pcVar6);
  }
  return local_14;
}

/******************************************************************************
 * Function : dk_LbNetwork_Join_0eda20 (Ghidra: FUN_000eda20)
 * Prototype: undefined1 dk_LbNetwork_Join_0eda20(void);
 * Address  : 0xeda20 (Size: 589 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'ERROR::LbNetwork_Join ServiceProvider ptr is NULL'
 * Callers  : 1 -> 0x349d9
 * Callees  : 5 -> 0xeb818, 0xefd90, 0xff894, 0xffb54, 0x1002dc
 * Strings  :
 *   - 0x16d7bb: "ERROR::LbNetwork_Join ServiceProvider ptr is NULL\n"
 *   - 0x16d625: "ERROR::GetCurrentPlayers ServiceProvider ptr is NULL\n"
 *   - 0x16d65b: "CALLING  GET CURRENT PLAYERS\n"
 *   - 0x16d679: "  WARNING network: GetCurrentPlayers() localPlayerIndex not updated max players %d\n"
 *   - 0x16d6cd: "  WARNING network: GetCurrentPlayers() failure on ServiceProvider::Enumerate()\n"
 *   - 0x16d71d: "CALLING  GET PLAYER INFO\n"
 *   - 0x16d838: "  WARNING network: LbNetwork_Join() failure on GetCurrentPlayers()\n"
 *   - 0x16d87c: "  WARNING network: LbNetwork_Join() failure on Join\n"
 ******************************************************************************/
undefined1 FUN_000eda20(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint extraout_ECX;
  uint uVar4;
  char extraout_DH;
  uint *unaff_EBX;
  char *pcVar5;
  char *pcVar6;
  char local_10;
  
  iVar2 = FUN_000eb818();
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Join_ServicePro_0016d7bb);
  }
  else {
    if (DAT_003dd8ac != 0) {
      DAT_003e0250 = 0;
      DAT_003e024c = 0;
      DAT_003dd88c = 1;
      DAT_003dd888 = 1;
    }
    DAT_003dd89c = 0xf;
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 4))();
    if (cVar1 == '\0') {
      if (DAT_003dd8ac == 0) {
        FUN_000ff894();
        DAT_003de250 = 0;
        FUN_001002dc();
        DAT_003dd87c = 1;
        do {
          FUN_000ffb54();
          if ((DAT_003dd87c != 0) && (iVar3 = FUN_000eb818(), 10000 < (uint)(iVar3 - iVar2))) {
            DAT_003dd87c = 0;
            return 0xff;
          }
        } while (DAT_003dd87c != 0);
      }
      local_10 = -1;
      if (DAT_003dd8a0 == 0) {
        FUN_000efd90(s_ERROR__GetCurrentPlayers_Service_0016d625);
        local_10 = extraout_DH;
      }
      else {
        DAT_003dd888 = DAT_003dd884;
        FUN_000efd90(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
        cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
        if (cVar1 == '\0') {
          if (DAT_003dd888 < DAT_003dd884) {
            local_10 = '\0';
          }
          else {
            FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d679,DAT_003dd884);
          }
        }
        else {
          FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d6cd);
        }
      }
      if (local_10 == '\0') {
        *unaff_EBX = DAT_003dd888;
        FUN_000efd90(s_CALLING_GET_PLAYER_INFO_0016d71d);
        if (DAT_003dd884 == 0) {
          return 0;
        }
        iVar2 = 0;
        iVar3 = 0;
        uVar4 = extraout_ECX;
        do {
          if (*(int *)((int)&DAT_003dd8b4 + iVar3) == 0) {
            *(undefined4 *)(iVar2 + 0x20 + DAT_003dd864) = 0;
          }
          else {
            pcVar6 = (char *)(DAT_003dd864 + iVar2);
            pcVar5 = &DAT_003dd8bc + iVar3;
            pcVar6[0x20] = '\x01';
            pcVar6[0x21] = '\0';
            pcVar6[0x22] = '\0';
            pcVar6[0x23] = '\0';
            do {
              cVar1 = *pcVar5;
              *pcVar6 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar5[1];
              pcVar5 = pcVar5 + 2;
              pcVar6[1] = cVar1;
              pcVar6 = pcVar6 + 2;
            } while (cVar1 != '\0');
          }
          iVar2 = iVar2 + 0x24;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x2c;
          if (DAT_003dd884 <= uVar4) {
            return 0;
          }
        } while( true );
      }
      pcVar5 = s_WARNING_network__LbNetwork_Join__0016d838;
    }
    else {
      pcVar5 = s_WARNING_network__LbNetwork_Join__0016d87c;
    }
    FUN_000efd90(pcVar5);
  }
  return 0xff;
}

/******************************************************************************
 * Function : dk_LbNetwork_Stop_0edc70 (Ghidra: FUN_000edc70)
 * Prototype: undefined8 dk_LbNetwork_Stop_0edc70(void);
 * Address  : 0xedc70 (Size: 283 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'INSIDE LbNetwork_Stop'
 * Callers  : 9 -> 0x33bcc, 0x33bfb, 0x35758, 0x35d29, 0x36a59, 0x462a3, 0x61f77, 0xdd894, 0xdd8ec
 * Callees  : 3 -> 0xe6a10, 0xe94b0, 0xefd90
 * Strings  :
 *   - 0x16d8b1: "INSIDE LbNetwork_Stop\n"
 *   - 0x16d8c8: "ERROR::LbNetwork_Stop ServiceProvider ptr is NULL\n"
 *   - 0x16d8fb: "  WARNING network: LbNetwork_Stop() failure on Release\n"
 ******************************************************************************/
undefined8 FUN_000edc70(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uVar3;
  undefined4 in_EDX;
  
  FUN_000efd90(s_INSIDE_LbNetwork_Stop_0016d8b1);
  if (DAT_003dd8a0 == 0) {
    uVar2 = FUN_000efd90(s_ERROR__LbNetwork_Stop_ServicePro_0016d8c8);
    uVar3 = extraout_CL;
  }
  else {
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x1c))();
    if (cVar1 != '\0') {
      FUN_000efd90(s_WARNING_network__LbNetwork_Stop__0016d8fb);
    }
    if (DAT_003dd8a0 != 0) {
      (*(code *)**(undefined4 **)(DAT_003dd8a0 + 0xd7c))();
    }
    DAT_003dd8a0 = 0;
    if (DAT_003dd870 != 0) {
      FUN_000e94b0();
    }
    DAT_003dd868 = 0;
    DAT_003dd86c = 0;
    DAT_003dd870 = 0;
    DAT_003dd874 = 0;
    DAT_003dd878 = 0;
    DAT_003dd87c = 0;
    DAT_003dd880 = 0;
    DAT_003dd884 = 0;
    DAT_003dd888 = 0;
    DAT_003dd88c = 0;
    DAT_003dd890 = 0;
    DAT_003dd894 = 0;
    DAT_003dd898 = 0;
    DAT_003dd89c = 0;
    DAT_003dd8a0 = 0;
    DAT_0019556c = 0xfa;
    DAT_003dd8a4 = 0;
    DAT_003dd8a8 = 0;
    DAT_003dd8ac = 0;
    uVar2 = FUN_000e6a10();
    DAT_003dde30 = 0;
    uVar3 = extraout_CL_00;
  }
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),uVar3));
}

/******************************************************************************
 * Function : dk_LbNetwork_EnumerateSessions_0edd8c (Ghidra: FUN_000edd8c)
 * Prototype: undefined1 dk_LbNetwork_EnumerateSessions_0edd8c(void);
 * Address  : 0xedd8c (Size: 98 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'ERROR::LbNetwork_EnumerateSessions ServiceProvider ptr is NULL'
 * Callers  : 1 -> 0x346de
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16d933: "ERROR::LbNetwork_EnumerateSessions ServiceProvider ptr is NULL\n"
 *   - 0x16d973: "  WARNING network: LbNetwork_EnumerateSessions() failure on Enumerate\n"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000eddb6) */

undefined1 FUN_000edd8c(void)

{
  char cVar1;
  undefined1 local_10;
  
  local_10 = 0xff;
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_EnumerateSessio_0016d933);
    local_10 = 0xff;
  }
  else {
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x10))();
    if (cVar1 == '\0') {
      local_10 = 0;
    }
    else {
      FUN_000efd90(s_WARNING_network__LbNetwork_Enume_0016d973);
    }
  }
  return local_10;
}

/******************************************************************************
 * Function : dk_LbNetwork_EnumeratePlayers_0eddf0 (Ghidra: FUN_000eddf0)
 * Prototype: undefined1 dk_LbNetwork_EnumeratePlayers_0eddf0(void);
 * Address  : 0xeddf0 (Size: 89 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'ERROR::LbNetwork_EnumeratePlayers ServiceProvider ptr is NULL'
 * Callers  : 2 -> 0x346de, 0x34f38
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16d9ba: "ERROR::LbNetwork_EnumeratePlayers ServiceProvider ptr is NULL\n"
 *   - 0x16d9f9: "  WARNING network: LbNetwork_EnumeratePlayers() failure on Enumerate\n"
 ******************************************************************************/
undefined1 FUN_000eddf0(void)

{
  char cVar1;
  undefined1 local_10;
  
  local_10 = 0xff;
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_EnumeratePlayer_0016d9ba);
    local_10 = 0xff;
  }
  else {
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
    if (cVar1 == '\0') {
      local_10 = 0;
    }
    else {
      FUN_000efd90(s_WARNING_network__LbNetwork_Enume_0016d9f9);
    }
  }
  return local_10;
}

/******************************************************************************
 * Function : dk_LbNetwork_CompleteExchange_0ee3c0 (Ghidra: FUN_000ee3c0)
 * Prototype: undefined8 dk_LbNetwork_CompleteExchange_0ee3c0(void);
 * Address  : 0xee3c0 (Size: 721 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: LbNetwork_CompleteExchange() failure on HostData'
 * Callers  : 0 -> 
 * Callees  : 10 -> 0xeb818, 0xeedc0, 0xef060, 0xefd90, 0xff628, 0xff630, 0xff6f0, 0xff894, 0xffb54, 0x1002dc
 * Strings  :
 *   - 0x16dafe: "GETTING DATA FROM CLIENTS\n"
 *   - 0x16db19: "GOT DATA FROM CLIENTS\n"
 *   - 0x16db30: "DONE BROADCAST TO CLIENTS\n"
 *   - 0x16db4b: "  WARNING network: LbNetwork_CompleteExchange() failure on HostDataBroadcast()\n"
 *   - 0x16db9b: "  WARNING network: LbNetwork_CompleteExchange() failure on HostDataCollection()\n"
 *   - 0x16dbec: "  WARNING network: LbNetwork_CompleteExchange() failure on SP::Send()\n"
 *   - 0x16dc33: "Timed out waiting for host\n"
 *   - 0x16dc4f: "  WARNING network: LbNetwork_CompleteExchange() deletePlayerBuffer is too small\n"
 *   - 0x16dca0: "  WARNING network: HostDataCollection() failure on SP::Send()\n"
 *   - 0x16dcdf: "  WARNING network: LbNetwork_CompleteExchange() requestCompositeExchangeDataBuffer is too small\n"
 *   - 0x16dd40: "RESENDING TO HOST MY PLAYER %d, SEQUENCE REQUESTING %d\n"
 *   - 0x16dd78: "  WARNING network: LbNetwork_CompleteExchange() failure on SP::Send()\n"
 ******************************************************************************/
undefined8 FUN_000ee3c0(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  undefined4 in_EDX;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_1c;
  
  local_1c = 0xff;
  if (DAT_003dd8a8 == DAT_003dd88c) {
    FUN_000efd90(s_GETTING_DATA_FROM_CLIENTS_0016dafe);
    FUN_000eedc0();
    FUN_000efd90(s_GOT_DATA_FROM_CLIENTS_0016db19);
    local_1c = FUN_000ef060();
    uVar3 = FUN_000efd90(s_DONE_BROADCAST_TO_CLIENTS_0016db30);
  }
  else {
    bVar1 = true;
    DAT_003dd890 = 0;
    uVar7 = 0;
    do {
      iVar4 = DAT_003dd8a8;
      uVar3 = FUN_000ffb54();
      iVar5 = extraout_ECX;
      if (iVar4 != DAT_003dd8a8) {
        iVar5 = 1;
      }
      if (iVar5 == 0) {
        if (DAT_003dd890 != 0) {
          if (uVar7 == 0) {
            iVar4 = FUN_000eb818();
            if ((DAT_003dd8a4 == 0) || (DAT_003dd874 < (uint)(iVar4 - DAT_003dd878))) {
              DAT_003dd874 = iVar4 - DAT_003dd878;
            }
            uVar6 = DAT_003dd8a4 + 1;
            uVar3 = DAT_003dd8a4;
            DAT_003dd8a4 = uVar6;
            if (0x31 < uVar6) {
              DAT_003dd8a4 = 0;
              uVar3 = DAT_003dd874 << 2;
              DAT_0019556c = uVar3;
              if (uVar3 < 0xfa) {
                DAT_0019556c = 0xfa;
              }
            }
          }
          bVar1 = false;
          local_1c = 0;
        }
      }
      else if (DAT_003dd8a8 == DAT_003dd88c) {
        cVar2 = FUN_000eedc0();
        if (cVar2 == '\0') {
          uVar3 = FUN_000ef060();
          if ((char)uVar3 != '\0') {
            pcVar8 = s_WARNING_network__LbNetwork_Compl_0016db4b;
            goto LAB_000ee4fb;
          }
          local_1c = 0;
        }
        else {
          pcVar8 = s_WARNING_network__LbNetwork_Compl_0016db9b;
LAB_000ee4fb:
          uVar3 = FUN_000efd90(pcVar8);
        }
        bVar1 = false;
      }
      else {
        FUN_000ff894();
        uVar3 = FUN_001002dc();
        if ((char)uVar3 == '\0') {
          local_1c = 0;
        }
        else {
          uVar3 = FUN_000efd90(s_WARNING_network__LbNetwork_Compl_0016dbec);
        }
      }
      uVar6 = uVar7;
      if (bVar1) {
        iVar4 = FUN_000eb818();
        uVar3 = iVar4 - DAT_003dd878;
        if (DAT_003dd868 < uVar3) {
          FUN_000efd90(s_Timed_out_waiting_for_host_0016dc33);
          uVar6 = uVar7 + 1;
          if (uVar6 < 0x65) {
            uVar3 = FUN_000ff628();
            if (uVar3 < 9) {
              FUN_000ff6f0();
              FUN_000efd90(s_RESENDING_TO_HOST_MY_PLAYER__d__S_0016dd40,DAT_003dd88c,DAT_003dd89c);
              cVar2 = FUN_001002dc();
              if (cVar2 == '\0') goto LAB_000ee634;
              pcVar8 = s_WARNING_network__LbNetwork_Compl_0016dd78;
            }
            else {
              pcVar8 = s_WARNING_network__LbNetwork_Compl_0016dcdf;
            }
            FUN_000efd90(pcVar8);
          }
          else {
            uVar3 = FUN_000ff628();
            if (uVar3 < 9) {
              FUN_000ff630();
              cVar2 = FUN_001002dc();
              if (cVar2 == '\0') goto LAB_000ee634;
              pcVar8 = s_WARNING_network__HostDataCollect_0016dca0;
            }
            else {
              pcVar8 = s_WARNING_network__LbNetwork_Compl_0016dc4f;
            }
            FUN_000efd90(pcVar8);
          }
LAB_000ee634:
          DAT_003dd878 = FUN_000eb818();
          uVar3 = DAT_0019556c * (uVar7 + 2);
          DAT_0019556c = DAT_0019556c + 100;
          DAT_003dd868 = uVar3;
        }
      }
      uVar7 = uVar6;
    } while (bVar1);
  }
  DAT_003dd86c = 0;
  if ((DAT_003dd89c != 0xf) && (DAT_003dd89c = DAT_003dd89c + 1, 0xe < DAT_003dd89c)) {
    DAT_003dd89c = 0;
  }
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar3 >> 8),local_1c));
}

/******************************************************************************
 * Function : dk_LbNetwork_StartExchange_0ee694 (Ghidra: FUN_000ee694)
 * Prototype: longlong dk_LbNetwork_StartExchange_0ee694(void);
 * Address  : 0xee694 (Size: 1162 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'ERROR::LbNetwork_StartExchange ServiceProvider ptr is NULL'
 * Callers  : 5 -> 0x31def, 0x35758, 0x36a59, 0x5d35c, 0x5dc27
 * Callees  : 12 -> 0xeb818, 0xeedc0, 0xef060, 0xefd90, 0xff628, 0xff630, 0xff6f0, 0xff894, 0xffb54, 0x1002dc ...
 * Strings  :
 *   - 0x16da3f: "ERROR::LbNetwork_StartExchange ServiceProvider ptr is NULL\n"
 *   - 0x16da7b: "  WARNING network: LbNetwork_StartExchange() failure on SP::Send()\n"
 *   - 0x16dabf: "ERROR::LbNetwork_CompleteExchange ServiceProvider ptr is NULL\n"
 *   - 0x16dafe: "GETTING DATA FROM CLIENTS\n"
 *   - 0x16db19: "GOT DATA FROM CLIENTS\n"
 *   - 0x16db30: "DONE BROADCAST TO CLIENTS\n"
 *   - 0x16db4b: "  WARNING network: LbNetwork_CompleteExchange() failure on HostDataBroadcast()\n"
 *   - 0x16db9b: "  WARNING network: LbNetwork_CompleteExchange() failure on HostDataCollection()\n"
 *   - 0x16dbec: "  WARNING network: LbNetwork_CompleteExchange() failure on SP::Send()\n"
 *   - 0x16dc33: "Timed out waiting for host\n"
 *   - 0x16dc4f: "  WARNING network: LbNetwork_CompleteExchange() deletePlayerBuffer is too small\n"
 *   - 0x16dca0: "  WARNING network: HostDataCollection() failure on SP::Send()\n"
 *   - 0x16dcdf: "  WARNING network: LbNetwork_CompleteExchange() requestCompositeExchangeDataBuffer is too small\n"
 *   - 0x16dd40: "RESENDING TO HOST MY PLAYER %d, SEQUENCE REQUESTING %d\n"
 *   - 0x16dd78: "  WARNING network: LbNetwork_CompleteExchange() failure on SP::Send()\n"
 *   - 0x16ddbf: "  WARNING network: LbNetwork_Exchange() failure on LbNetwork_CompleteExchange()\n"
 *   - 0x16de10: "  WARNING network: LbNetwork_Exchange() failure on LbNetwork_StartExchange()\n"
 ******************************************************************************/
longlong FUN_000ee694(void)

{
  bool bVar1;
  char cVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  undefined3 uVar6;
  uint uVar4;
  int iVar5;
  uint uVar7;
  int extraout_ECX;
  int iVar8;
  undefined4 in_EDX;
  uint uVar9;
  undefined4 *puVar10;
  byte bVar11;
  char *pcVar12;
  char local_24;
  char local_20;
  undefined1 local_1c;
  
  bVar11 = 0;
  local_1c = 0xff;
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_StartExchange_S_0016da3f);
    local_24 = -1;
  }
  else if (DAT_003dd8ac == 0) {
    local_24 = -1;
    DAT_003dd86c = in_EAX;
    FUN_000ffb54();
    uVar7 = DAT_003dd884;
    uVar4 = 0;
    if (DAT_003dd884 != 0) {
      iVar5 = 0;
      do {
        if (*(int *)((int)&DAT_003dd8b4 + iVar5) != 0) {
          *(undefined4 *)((int)&DAT_003dd8b8 + iVar5) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (uVar4 < uVar7);
    }
    uVar7 = DAT_003dd898;
    puVar10 = (undefined4 *)(DAT_003dd894 + DAT_003dd888 * DAT_003dd898);
    for (uVar4 = DAT_003dd898 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = *in_EAX;
      in_EAX = in_EAX + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)in_EAX;
      in_EAX = (undefined4 *)((int)in_EAX + (uint)bVar11 * -2 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar11 * -2 + 1);
    }
    (&DAT_003dd8b8)[DAT_003dd888 * 0xb] = 1;
    DAT_003dd878 = FUN_000eb818();
    DAT_003dd868 = DAT_0019556c;
    if (DAT_003dd8a8 == DAT_003dd88c) {
      local_24 = '\0';
    }
    else {
      FUN_000ff894();
      cVar2 = FUN_001002dc();
      if (cVar2 == '\0') {
        local_24 = '\0';
      }
      else {
        FUN_000efd90(s_WARNING_network__LbNetwork_Start_0016da7b);
      }
    }
  }
  else {
    local_24 = FUN_00100a28();
  }
  if (local_24 == '\0') {
    if (DAT_003dd8a0 == 0) {
      uVar3 = FUN_000efd90(s_ERROR__LbNetwork_CompleteExchang_0016dabf);
      uVar6 = (undefined3)((uint)uVar3 >> 8);
      local_20 = -1;
LAB_000eeae6:
      if (local_20 == '\0') {
        return (ulonglong)CONCAT43(in_EDX,uVar6) << 8;
      }
    }
    else {
      if (DAT_003dd8ac == 0) {
        local_20 = -1;
        if (DAT_003dd88c == DAT_003dd8a8) {
          FUN_000efd90(s_GETTING_DATA_FROM_CLIENTS_0016dafe);
          FUN_000eedc0();
          FUN_000efd90(s_GOT_DATA_FROM_CLIENTS_0016db19);
          local_20 = FUN_000ef060();
          uVar4 = FUN_000efd90(s_DONE_BROADCAST_TO_CLIENTS_0016db30);
        }
        else {
          bVar1 = true;
          DAT_003dd890 = DAT_003dd8ac;
          uVar7 = 0;
          do {
            iVar5 = DAT_003dd8a8;
            uVar4 = FUN_000ffb54();
            iVar8 = extraout_ECX;
            if (iVar5 != DAT_003dd8a8) {
              iVar8 = 1;
            }
            if (iVar8 == 0) {
              if (DAT_003dd890 != 0) {
                if (uVar7 == 0) {
                  iVar5 = FUN_000eb818();
                  uVar4 = iVar5 - DAT_003dd878;
                  if ((DAT_003dd8a4 == 0) || (DAT_003dd874 < uVar4)) {
                    DAT_003dd874 = uVar4;
                  }
                  DAT_003dd8a4 = DAT_003dd8a4 + 1;
                  if (0x31 < DAT_003dd8a4) {
                    uVar4 = DAT_003dd874 << 2;
                    DAT_003dd8a4 = 0;
                    DAT_0019556c = uVar4;
                    if (uVar4 < 0xfa) {
                      DAT_0019556c = 0xfa;
                    }
                  }
                }
                uVar4 = uVar4 & 0xffffff00;
                bVar1 = false;
                local_20 = '\0';
              }
            }
            else if (DAT_003dd8a8 == DAT_003dd88c) {
              cVar2 = FUN_000eedc0();
              if (cVar2 == '\0') {
                uVar4 = FUN_000ef060();
                if ((char)uVar4 != '\0') {
                  pcVar12 = s_WARNING_network__LbNetwork_Compl_0016db4b;
                  goto LAB_000ee950;
                }
                local_20 = '\0';
              }
              else {
                pcVar12 = s_WARNING_network__LbNetwork_Compl_0016db9b;
LAB_000ee950:
                uVar4 = FUN_000efd90(pcVar12);
              }
              bVar1 = false;
            }
            else {
              FUN_000ff894();
              uVar4 = FUN_001002dc();
              if ((char)uVar4 == '\0') {
                local_20 = '\0';
              }
              else {
                uVar4 = FUN_000efd90(s_WARNING_network__LbNetwork_Compl_0016dbec);
              }
            }
            uVar9 = uVar7;
            if (bVar1) {
              iVar5 = FUN_000eb818();
              uVar4 = iVar5 - DAT_003dd878;
              if (DAT_003dd868 < uVar4) {
                FUN_000efd90(s_Timed_out_waiting_for_host_0016dc33);
                uVar9 = uVar7 + 1;
                if (uVar9 < 0x65) {
                  uVar4 = FUN_000ff628();
                  if (uVar4 < 9) {
                    FUN_000ff6f0();
                    FUN_000efd90(s_RESENDING_TO_HOST_MY_PLAYER__d__S_0016dd40,DAT_003dd88c,
                                 DAT_003dd89c);
                    cVar2 = FUN_001002dc();
                    if (cVar2 == '\0') goto LAB_000eea8a;
                    pcVar12 = s_WARNING_network__LbNetwork_Compl_0016dd78;
                  }
                  else {
                    pcVar12 = s_WARNING_network__LbNetwork_Compl_0016dcdf;
                  }
                  FUN_000efd90(pcVar12);
                }
                else {
                  uVar4 = FUN_000ff628();
                  if (uVar4 < 9) {
                    FUN_000ff630();
                    cVar2 = FUN_001002dc();
                    if (cVar2 == '\0') goto LAB_000eea8a;
                    pcVar12 = s_WARNING_network__HostDataCollect_0016dca0;
                  }
                  else {
                    pcVar12 = s_WARNING_network__LbNetwork_Compl_0016dc4f;
                  }
                  FUN_000efd90(pcVar12);
                }
LAB_000eea8a:
                DAT_003dd878 = FUN_000eb818();
                uVar4 = DAT_0019556c * (uVar7 + 2);
                DAT_0019556c = DAT_0019556c + 100;
                DAT_003dd868 = uVar4;
              }
            }
            uVar7 = uVar9;
          } while (bVar1);
        }
        DAT_003dd86c = (undefined4 *)0x0;
        if ((DAT_003dd89c != 0xf) && (DAT_003dd89c = DAT_003dd89c + 1, 0xe < DAT_003dd89c)) {
          DAT_003dd89c = 0;
        }
        uVar6 = (undefined3)(uVar4 >> 8);
        goto LAB_000eeae6;
      }
      uVar3 = FUN_00100bb8();
      if ((char)uVar3 == '\0') {
        local_1c = 0;
        goto LAB_000eeb10;
      }
    }
    pcVar12 = s_WARNING_network__LbNetwork_Excha_0016ddbf;
  }
  else {
    pcVar12 = s_WARNING_network__LbNetwork_Excha_0016de10;
  }
  uVar3 = FUN_000efd90(pcVar12);
LAB_000eeb10:
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar3 >> 8),local_1c));
}

/******************************************************************************
 * Function : dk_LbNetwork_ChangeExchangeBuffer_0eeb20 (Ghidra: FUN_000eeb20)
 * Prototype: undefined1 dk_LbNetwork_ChangeExchangeBuffer_0eeb20(void);
 * Address  : 0xeeb20 (Size: 192 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buff'
 * Callers  : 1 -> 0x5d35c
 * Callees  : 3 -> 0xe9484, 0xe94b0, 0xefd90
 * Strings  :
 *   - 0x16de5e: "  WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buffer allocation\n"
 *   - 0x16deb0: "  WARNING network: LbNetwork_ChangeExchangeBuffer() failure on buffer allocation\n"
 ******************************************************************************/
undefined1 FUN_000eeb20(void)

{
  undefined4 in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int in_EDX;
  undefined4 extraout_EDX;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(DAT_003dd880,DAT_003dd870);
  bVar7 = 0;
  uVar4 = 0xff;
  DAT_003dd894 = in_EAX;
  DAT_003dd898 = in_EDX;
  if (DAT_003dd870 == (undefined4 *)0x0) {
    uVar8 = FUN_000e9484();
    DAT_003dd870 = (undefined4 *)uVar8;
    if (DAT_003dd870 == (undefined4 *)0x0) {
      FUN_000efd90(s_WARNING_network__LbNetwork_Chang_0016de5e);
      uVar8 = CONCAT44(DAT_003dd880,DAT_003dd870);
      goto LAB_000eebd8;
    }
  }
  else if (DAT_003dd880 <= (uint)(DAT_003dd884 * in_EDX) &&
           DAT_003dd884 * in_EDX - DAT_003dd880 != 0) {
    puVar1 = (undefined4 *)FUN_000e9484();
    uVar3 = DAT_003dd880;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = DAT_003dd870;
      puVar6 = puVar1;
      for (uVar2 = DAT_003dd880 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
      }
      FUN_000e94b0();
      DAT_003dd870 = puVar1;
      DAT_003dd880 = extraout_EDX;
      return 0;
    }
    FUN_000efd90(s_WARNING_network__LbNetwork_Chang_0016deb0);
    return 0xff;
  }
  uVar4 = 0;
LAB_000eebd8:
  DAT_003dd880 = (uint)((ulonglong)uVar8 >> 0x20);
  DAT_003dd870 = (undefined4 *)uVar8;
  return uVar4;
}

/******************************************************************************
 * Function : dk_GetCurrentPlayers_0eebe0 (Ghidra: FUN_000eebe0)
 * Prototype: undefined8 dk_GetCurrentPlayers_0eebe0(void);
 * Address  : 0xeebe0 (Size: 330 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16d625: "ERROR::GetCurrentPlayers ServiceProvider ptr is NULL\n"
 *   - 0x16d65b: "CALLING  GET CURRENT PLAYERS\n"
 *   - 0x16d679: "  WARNING network: GetCurrentPlayers() localPlayerIndex not updated max players %d\n"
 *   - 0x16d6cd: "  WARNING network: GetCurrentPlayers() failure on ServiceProvider::Enumerate()\n"
 *   - 0x16d71d: "CALLING  GET PLAYER INFO\n"
 *   - 0x16df02: "  WARNING network: LbNetwork_GetPlayerInfo() failure on GetPlayerInfo()\n"
 *   - 0x16df4b: "  WARNING network: LbNetwork_GetPlayerInfo() failure on GetCurrentPlayers()\n"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000eed08) */

undefined8 FUN_000eebe0(void)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar2;
  uint uVar3;
  undefined4 in_EDX;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_24;
  undefined1 local_1c;
  
  local_1c = 0xff;
  local_24 = -1;
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__GetCurrentPlayers_Service_0016d625);
    local_24 = -1;
  }
  else {
    DAT_003dd888 = DAT_003dd884;
    FUN_000efd90(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
    if (cVar1 == '\0') {
      if (DAT_003dd888 < DAT_003dd884) {
        local_24 = '\0';
      }
      else {
        FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d679,DAT_003dd884);
      }
    }
    else {
      FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d6cd);
    }
  }
  if (local_24 == '\0') {
    FUN_000efd90(s_CALLING_GET_PLAYER_INFO_0016d71d);
    uVar3 = 0;
    if (DAT_003dd884 != 0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        if (*(int *)((int)&DAT_003dd8b4 + iVar5) == 0) {
          *(undefined4 *)(iVar4 + 0x20 + DAT_003dd864) = 0;
        }
        else {
          pcVar7 = (char *)(DAT_003dd864 + iVar4);
          pcVar6 = &DAT_003dd8bc + iVar5;
          pcVar7[0x20] = '\x01';
          pcVar7[0x21] = '\0';
          pcVar7[0x22] = '\0';
          pcVar7[0x23] = '\0';
          do {
            cVar1 = *pcVar6;
            *pcVar7 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        iVar4 = iVar4 + 0x24;
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + 0x2c;
      } while (uVar3 < DAT_003dd884);
    }
    local_1c = 0;
    uVar2 = extraout_var;
  }
  else {
    FUN_000efd90(s_WARNING_network__LbNetwork_GetPl_0016df4b);
    uVar2 = extraout_var_00;
  }
  return CONCAT44(in_EDX,CONCAT31(uVar2,local_1c));
}

/******************************************************************************
 * Function : dk_HostDataCollection_0eedc0 (Ghidra: FUN_000eedc0)
 * Prototype: undefined8 dk_HostDataCollection_0eedc0(void);
 * Address  : 0xeedc0 (Size: 672 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: HostDataCollection() deletePlayerBuffer is too s'
 * Callers  : 2 -> 0xee3c0, 0xee694
 * Callees  : 7 -> 0xeb818, 0xefd90, 0xff628, 0xff630, 0xff6a0, 0xffb54, 0x1002dc
 * Strings  :
 *   - 0x16df98: "Timed out waiting for client\n"
 *   - 0x16dfb6: "  WARNING network: HostDataCollection() deletePlayerBuffer is too small\n"
 *   - 0x16dfff: "  WARNING network: HostDataCollection() failure on SP::Send()\n"
 *   - 0x16e03e: "  WARNING network: HostDataCollection() requestExchangeDataBuffer is too small\n"
 *   - 0x16e08e: "  WARNING network: HostDataCollection() failure on SP::Send()\n"
 ******************************************************************************/
undefined8 FUN_000eedc0(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 in_EAX;
  uint uVar4;
  int iVar5;
  uint extraout_ECX;
  int iVar6;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 in_EDX;
  uint uVar7;
  uint local_28;
  uint local_20;
  undefined1 local_1c;
  
  uVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),0xff00);
  bVar2 = true;
  local_1c = 0xff;
  local_20 = 0;
  do {
    bVar1 = true;
    uVar7 = 0;
    if (DAT_003dd884 != 0) {
      uVar4 = 0;
      do {
        if ((*(int *)((int)&DAT_003dd8b4 + uVar4) != 0) &&
           (*(int *)((int)&DAT_003dd8b8 + uVar4) == 0)) {
          bVar1 = false;
        }
        uVar7 = uVar7 + 1;
        uVar4 = uVar4 + 0x2c;
      } while (uVar7 < DAT_003dd884);
    }
    if (bVar1) {
      bVar2 = false;
      if (local_20 == 0) {
        iVar5 = FUN_000eb818();
        uVar4 = iVar5 - DAT_003dd878;
        if ((DAT_003dd8a4 == 0) || (DAT_003dd874 < uVar4)) {
          DAT_003dd874 = uVar4;
        }
        DAT_003dd8a4 = DAT_003dd8a4 + 1;
        if (0x31 < DAT_003dd8a4) {
          uVar4 = DAT_003dd874 << 2;
          DAT_003dd8a4 = 0;
          DAT_0019556c = uVar4;
          if (uVar4 < 0xfa) {
            DAT_0019556c = 0xfa;
          }
        }
      }
      local_1c = 0;
    }
    else {
      iVar5 = FUN_000eb818();
      if (DAT_003dd868 < (uint)(iVar5 - DAT_003dd878)) {
        FUN_000efd90(s_Timed_out_waiting_for_client_0016df98);
        if (local_20 + 1 < 0x65) {
          uVar4 = FUN_000ff628();
          if (uVar4 < 9) {
            FUN_000ff6a0();
            uVar4 = 0;
            iVar5 = extraout_ECX_02;
            if (DAT_003dd884 != 0) {
              do {
                if (((*(int *)((int)&DAT_003dd8b4 + iVar5) != 0) &&
                    (*(int *)((int)&DAT_003dd8b8 + iVar5) == 0)) &&
                   (cVar3 = FUN_001002dc(), iVar5 = extraout_ECX_03, cVar3 != '\0')) {
                  FUN_000efd90(s_WARNING_network__HostDataCollect_0016e08e);
                  iVar5 = extraout_ECX_04;
                }
                uVar4 = uVar4 + 1;
                iVar5 = iVar5 + 0x2c;
              } while (uVar4 < DAT_003dd884);
            }
          }
          else {
            FUN_000efd90(s_WARNING_network__HostDataCollect_0016e03e);
          }
        }
        else {
          uVar4 = FUN_000ff628();
          if (uVar4 < 9) {
            if (DAT_003dd884 != 0) {
              iVar5 = 0;
              local_28 = extraout_ECX;
              do {
                if ((*(int *)((int)&DAT_003dd8b4 + iVar5) != 0) &&
                   (*(int *)((int)&DAT_003dd8b8 + iVar5) == 0)) {
                  FUN_000ff630();
                  uVar4 = 0;
                  if (DAT_003dd884 != 0) {
                    iVar6 = 0;
                    do {
                      if (((*(int *)((int)&DAT_003dd8b4 + iVar6) != 0) &&
                          (*(int *)((int)&DAT_003dd8b0 + iVar6) !=
                           *(int *)((int)&DAT_003dd8b0 + iVar5))) &&
                         (cVar3 = FUN_001002dc(), iVar6 = extraout_ECX_00, cVar3 != '\0')) {
                        FUN_000efd90(s_WARNING_network__HostDataCollect_0016dfff);
                        iVar6 = extraout_ECX_01;
                      }
                      uVar4 = uVar4 + 1;
                      iVar6 = iVar6 + 0x2c;
                    } while (uVar4 < DAT_003dd884);
                  }
                }
                local_28 = local_28 + 1;
                iVar5 = iVar5 + 0x2c;
              } while (local_28 < DAT_003dd884);
            }
          }
          else {
            FUN_000efd90(s_WARNING_network__HostDataCollect_0016dfb6);
          }
        }
        DAT_003dd878 = FUN_000eb818();
        DAT_003dd868 = DAT_0019556c * (local_20 + 2);
        DAT_0019556c = DAT_0019556c + 100;
        local_20 = local_20 + 1;
      }
      uVar4 = FUN_000ffb54();
    }
  } while (bVar2);
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar4 >> 8),local_1c));
}

/******************************************************************************
 * Function : dk_LbNetwork_CompleteExchange_0ef060 (Ghidra: FUN_000ef060)
 * Prototype: undefined8 dk_LbNetwork_CompleteExchange_0ef060(void);
 * Address  : 0xef060 (Size: 234 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: LbNetwork_CompleteExchange() failure on SP::Send'
 * Callers  : 2 -> 0xee3c0, 0xee694
 * Callees  : 3 -> 0xefd90, 0xff894, 0x1002dc
 * Strings  :
 *   - 0x16e0cd: "  WARNING network: LbNetwork_CompleteExchange() failure on SP::Send()\n"
 ******************************************************************************/
undefined8 FUN_000ef060(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 in_EDX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined1 local_18;
  
  bVar7 = 0;
  local_18 = 0;
  FUN_000ff894();
  uVar2 = DAT_003dd898 * DAT_003dd884;
  puVar5 = DAT_003dd894;
  puVar6 = DAT_003dd870;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
  }
  uVar3 = 0;
  if (DAT_003dd884 != 0) {
    iVar4 = 0;
    do {
      if ((*(int *)((int)&DAT_003dd8b4 + iVar4) != 0) &&
         (*(int *)((int)&DAT_003dd8b0 + iVar4) != DAT_003dd8a8)) {
        cVar1 = FUN_001002dc();
        iVar4 = extraout_ECX;
        if (cVar1 != '\0') {
          FUN_000efd90(s_WARNING_network__LbNetwork_Compl_0016e0cd);
          iVar4 = extraout_ECX_00;
          local_18 = extraout_DL;
        }
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (uVar3 < DAT_003dd884);
  }
  uVar3 = DAT_003dd898 * DAT_003dd884;
  puVar5 = DAT_003dd894;
  puVar6 = &DAT_003dde34;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
  }
  return CONCAT44(in_EDX,CONCAT31((int3)(uVar3 >> 8),local_18));
}

/******************************************************************************
 * Function : dk_UserDataMsgCallback_0ef14c (Ghidra: FUN_000ef14c)
 * Prototype: int dk_UserDataMsgCallback_0ef14c(uint param_1,uint param_2,int param_3);
 * Address  : 0xef14c (Size: 786 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: UserDataMsgCallback() host got data from itself'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16e114: "GOT A REQUEST MultiPlayerCallback\n"
 *   - 0x16e137: "  WARNING network: UserDataMsgCallback() host got data from itself\n"
 *   - 0x16e17b: "  WARNING network: UserDataMsgCallback() Unexpected sequence number: Got %d, expected %d\n"
 *   - 0x16e1d5: "  WARNING network: UserDataMsgCallback() invalid id: %d\n"
 *   - 0x16e20e: "  WARNING network: UserDataMsgCallback() invalid length: %d\n"
 *   - 0x16e24b: "  WARNING network: UserDataMsgCallback() Unexpected sequence number: Got %d, expected %d\n"
 *   - 0x16e2a5: "  WARNING network: UserDataMsgCallback() invalid id: %d\n"
 *   - 0x16e2de: "  WARNING network: UserDataMsgCallback() data is not from host\n"
 *   - 0x16e31e: "  WARNING network: UserDataMsgCallback() client acting as host got data from itself\n"
 *   - 0x16e373: "  WARNING network: UserDataMsgCallback() invalid id: %d\n"
 *   - 0x16e3ac: "  WARNING network: UserDataMsgCallback() invalid length: %d\n"
 ******************************************************************************/
int FUN_000ef14c(uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  uint extraout_EDX;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  if (DAT_003dd860 != 0) {
    FUN_000efd90(s_GOT_A_REQUEST_MultiPlayerCallbac_0016e114);
    param_2 = extraout_EDX;
  }
  if (DAT_003dd88c == DAT_003dd8a8) {
    if (param_2 == DAT_003dd898) {
      if (param_1 == DAT_003dd88c) {
        FUN_000efd90(s_WARNING_network__UserDataMsgCall_0016e137);
        return 0;
      }
      bVar1 = true;
      bVar2 = false;
      uVar4 = 0;
      iVar3 = 0;
      do {
        if (uVar4 < DAT_003dd884) {
          if ((*(int *)((int)&DAT_003dd8b4 + iVar3) != 0) &&
             (*(uint *)((int)&DAT_003dd8b0 + iVar3) == param_1)) {
            bVar2 = true;
            param_1 = uVar4;
          }
          iVar3 = iVar3 + 0x2c;
          uVar4 = uVar4 + 1;
        }
        else {
          bVar1 = false;
        }
      } while (bVar1);
      if (bVar2) {
        if ((param_3 != DAT_003dd89c) && (param_3 != 0xf)) {
          FUN_000efd90(s_WARNING_network__UserDataMsgCall_0016e17b,param_3,DAT_003dd89c);
          return 0;
        }
        iVar3 = DAT_003dd898 * param_1 + DAT_003dd894;
        (&DAT_003dd8b8)[param_1 * 0xb] = 1;
        return iVar3;
      }
      pcVar5 = s_WARNING_network__UserDataMsgCall_0016e1d5;
    }
    else {
      pcVar5 = s_WARNING_network__UserDataMsgCall_0016e20e;
      param_1 = param_2;
    }
  }
  else if (param_2 == DAT_003dd898 * DAT_003dd884) {
    if (DAT_003dd8a8 != param_1) {
      FUN_000efd90(s_WARNING_network__UserDataMsgCall_0016e2de);
      return 0;
    }
    bVar1 = true;
    bVar2 = false;
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (uVar4 < DAT_003dd884) {
        if ((*(int *)((int)&DAT_003dd8b4 + iVar3) != 0) &&
           (*(uint *)((int)&DAT_003dd8b0 + iVar3) == param_1)) {
          bVar2 = true;
          param_1 = uVar4;
        }
        iVar3 = iVar3 + 0x2c;
        uVar4 = uVar4 + 1;
      }
      else {
        bVar1 = false;
      }
    } while (bVar1);
    if (bVar2) {
      bVar1 = true;
      if (DAT_003dd89c == 0xf) {
        DAT_003dd89c = param_3;
      }
      else if (DAT_003dd89c != param_3) {
        bVar1 = false;
      }
      if (!bVar1) {
        FUN_000efd90(s_WARNING_network__UserDataMsgCall_0016e24b,param_3,DAT_003dd89c);
        return 0;
      }
      DAT_003dd890 = 1;
      return DAT_003dd894;
    }
    pcVar5 = s_WARNING_network__UserDataMsgCall_0016e2a5;
  }
  else if (param_2 == DAT_003dd898) {
    if (param_1 == DAT_003dd88c) {
      FUN_000efd90(s_WARNING_network__UserDataMsgCall_0016e31e);
      return 0;
    }
    bVar1 = true;
    bVar2 = false;
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (uVar4 < DAT_003dd884) {
        if ((*(int *)((int)&DAT_003dd8b4 + iVar3) != 0) &&
           (*(uint *)((int)&DAT_003dd8b0 + iVar3) == param_1)) {
          bVar2 = true;
          param_1 = uVar4;
        }
        iVar3 = iVar3 + 0x2c;
        uVar4 = uVar4 + 1;
      }
      else {
        bVar1 = false;
      }
    } while (bVar1);
    if (bVar2) {
      iVar3 = DAT_003dd894 + DAT_003dd898 * param_1;
      (&DAT_003dd8b8)[param_1 * 0xb] = 1;
      return iVar3;
    }
    pcVar5 = s_WARNING_network__UserDataMsgCall_0016e373;
  }
  else {
    pcVar5 = s_WARNING_network__UserDataMsgCall_0016e3ac;
    param_1 = param_2;
  }
  FUN_000efd90(pcVar5,param_1);
  return 0;
}

/******************************************************************************
 * Function : dk_DeleteMsgCallback_0ef4a8 (Ghidra: FUN_000ef4a8)
 * Prototype: void dk_DeleteMsgCallback_0ef4a8(int param_1);
 * Address  : 0xef4a8 (Size: 106 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: DeleteMsgCallback() NULL localPlayerInfoPtr'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16e3e9: "  WARNING network: DeleteMsgCallback() NULL localPlayerInfoPtr\n"
 ******************************************************************************/
void FUN_000ef4a8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  
  uVar2 = 0;
  if (DAT_003dd884 != 0) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar1 = DAT_003dd864;
      if ((*(int *)((int)&DAT_003dd8b4 + iVar3) != 0) &&
         (param_1 == *(int *)((int)&DAT_003dd8b0 + iVar3))) {
        *(undefined4 *)((int)&DAT_003dd8b4 + iVar3) = 0;
        if (iVar1 == 0) {
          FUN_000efd90(s_WARNING_network__DeleteMsgCallba_0016e3e9);
          uVar2 = extraout_ECX;
          iVar3 = extraout_EDX;
        }
        else {
          *(undefined4 *)(iVar4 + 0x20 + iVar1) = 0;
        }
      }
      iVar3 = iVar3 + 0x2c;
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 0x24;
    } while (uVar2 < DAT_003dd884);
  }
  return;
}

/******************************************************************************
 * Function : dk_GetCurrentPlayers_0ef520 (Ghidra: FUN_000ef520)
 * Prototype: undefined8 dk_GetCurrentPlayers_0ef520(void);
 * Address  : 0xef520 (Size: 151 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: GetCurrentPlayers() localPlayerIndex not updated'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x16d625: "ERROR::GetCurrentPlayers ServiceProvider ptr is NULL\n"
 *   - 0x16d65b: "CALLING  GET CURRENT PLAYERS\n"
 *   - 0x16d679: "  WARNING network: GetCurrentPlayers() localPlayerIndex not updated max players %d\n"
 *   - 0x16d6cd: "  WARNING network: GetCurrentPlayers() failure on ServiceProvider::Enumerate()\n"
 ******************************************************************************/
undefined8 FUN_000ef520(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_EDX;
  undefined1 local_14;
  
  local_14 = 0xff;
  if (DAT_003dd8a0 == 0) {
    uVar2 = FUN_000efd90(s_ERROR__GetCurrentPlayers_Service_0016d625);
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),0xff);
  }
  else {
    DAT_003dd888 = DAT_003dd884;
    FUN_000efd90(s_CALLING_GET_CURRENT_PLAYERS_0016d65b);
    cVar1 = (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x14))();
    if (cVar1 == '\0') {
      if (DAT_003dd888 < DAT_003dd884) {
        local_14 = 0;
        uVar3 = DAT_003dd888;
      }
      else {
        uVar3 = FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d679,DAT_003dd884);
      }
    }
    else {
      uVar3 = FUN_000efd90(s_WARNING_network__GetCurrentPlaye_0016d6cd);
    }
    uVar2 = CONCAT31((int3)(uVar3 >> 8),local_14);
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_RequestExchangeDataMsgCallback_0ef7a8 (Ghidra: FUN_000ef7a8)
 * Prototype: void dk_RequestExchangeDataMsgCallback_0ef7a8(undefined4 param_1,int param_2);
 * Address  : 0xef7a8 (Size: 187 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: RequestExchangeDataMsgCallback() NULL data point'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xefd90, 0xff894, 0x1002dc
 * Strings  :
 *   - 0x16e466: "GOT A REQUEST MultiPlayerReqExDataMsgCallback\n"
 *   - 0x16e495: "  WARNING network: RequestExchangeDataMsgCallback() NULL data pointer\n"
 *   - 0x16e4dc: "  WARNING network: RequestExchangeDataMsgCallback() failure on SP::Send()\n"
 *   - 0x16e527: "  WARNING network: RequestExchangeDataMsgCallback() unexpected sequence number, got %d, expected %d\n"
 ******************************************************************************/
void FUN_000ef7a8(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int extraout_EDX;
  
  if (DAT_003dd860 != 0) {
    FUN_000efd90(s_GOT_A_REQUEST_MultiPlayerReqExDa_0016e466);
    param_2 = extraout_EDX;
  }
  if (DAT_003dd86c == 0) {
    FUN_000efd90(s_WARNING_network__RequestExchange_0016e495);
  }
  else {
    bVar1 = true;
    iVar2 = param_2;
    if ((DAT_003dd89c != 0xf) && (iVar2 = DAT_003dd89c, param_2 != DAT_003dd89c)) {
      bVar1 = false;
    }
    DAT_003dd89c = iVar2;
    if (bVar1) {
      FUN_000ff894();
      cVar3 = FUN_001002dc();
      if (cVar3 != '\0') {
        FUN_000efd90(s_WARNING_network__RequestExchange_0016e4dc);
        return;
      }
    }
    else {
      FUN_000efd90(s_WARNING_network__RequestExchange_0016e527,param_2,DAT_003dd89c);
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_RequestCompositeExchangeDataMsgCallback_0ef864 (Ghidra: FUN_000ef864)
 * Prototype: void dk_RequestCompositeExchangeDataMsgCallback_0ef864(undefined4 param_1,uint param_2);
 * Address  : 0xef864 (Size: 132 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: RequestCompositeExchangeDataMsgCallback() failur'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xefd90, 0x1002dc
 * Strings  :
 *   - 0x16e58c: "GOT A RequestCompositeExchangeDataMsgCallback seq %d expected sequence %d\n"
 *   - 0x16e5d7: "  WARNING network: RequestCompositeExchangeDataMsgCallback() failure on SP::Send()\n"
 *   - 0x16e62b: "  WARNING network: RequestCompositeExchangeDataMsgCallback() unexpected sequence number, got %d, expected %d\n"
 ******************************************************************************/
void FUN_000ef864(undefined4 param_1,uint param_2)

{
  char cVar1;
  
  if (DAT_003dd860 != 0) {
    FUN_000efd90(s_GOT_A_RequestCompositeExchangeDa_0016e58c,param_2,DAT_003dd89c);
  }
  if ((param_2 == DAT_003dd89c) || (param_2 == (DAT_003dd89c - 1 & 0xf))) {
    cVar1 = FUN_001002dc();
    if (cVar1 != '\0') {
      FUN_000efd90(s_WARNING_network__RequestComposit_0016e5d7);
    }
  }
  else {
    FUN_000efd90(s_WARNING_network__RequestComposit_0016e62b,param_2,DAT_003dd89c);
    FUN_001002dc();
  }
  return;
}

/******************************************************************************
 * Function : dk_GenericIPXInit_0ef8e8 (Ghidra: FUN_000ef8e8)
 * Prototype: undefined8 dk_GenericIPXInit_0ef8e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xef8e8 (Size: 313 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: GenericIPXInit() failure on ServiceProvider::Ini'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xe9484, 0xefd90, 0xff040, 0x1012c0, 0x1031e8
 * Strings  :
 *   - 0x16d539: "  WARNING network: GenericIPXInit() failure on ServiceProvider::Init()\n"
 ******************************************************************************/
undefined8 FUN_000ef8e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
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
  
  local_34 = DAT_003d97d0;
  local_30 = &DAT_001745c0;
  local_2c = 0;
  uVar4 = 0xff;
  DAT_003d97d0 = &local_34;
  if (DAT_003dd8a0 != 0) {
    uStack_38 = 0xef926;
    DAT_003d97d0 = &local_34;
    (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x1c))();
    if (DAT_003dd8a0 != 0) {
      uStack_38 = 0xef93c;
      (*(code *)**(undefined4 **)(DAT_003dd8a0 + 0xd7c))();
    }
    DAT_003dd8a0 = 0;
  }
  uStack_38 = 0xef94e;
  iVar2 = FUN_000e9484();
  iVar3 = 0;
  if (iVar2 != 0) {
    local_2c = 1;
    local_24 = 0;
    uStack_38 = 0xef973;
    local_28 = iVar2;
    local_1c = iVar2;
    FUN_000ff040();
    local_2c = 3;
    uStack_38 = 0xef986;
    iVar3 = FUN_001012c0();
    *(undefined4 *)(iVar3 + 0x723) = 0;
    *(undefined4 *)(iVar3 + 0x727) = 0;
    *(undefined1 *)(iVar3 + 0x72b) = 0;
    *(undefined ***)(iVar3 + -4) = &PTR_FUN_00103134_00174668;
    iVar3 = iVar3 + -0xd80;
    local_2c = 0;
    local_24 = local_24 | 0x10;
  }
  puVar5 = &local_34;
  DAT_003dd8a0 = iVar3;
  if (iVar3 != 0) {
    uStack_38 = 0;
    ppuStack_3c = &PTR_FUN_000ef460_00195570;
    uStack_40 = 0;
    uStack_44 = param_4;
    uStack_48 = param_3;
    uStack_4c = param_2;
    puVar5 = &local_50;
    local_50 = param_1;
    cVar1 = (**(code **)(*(int *)(iVar3 + 0xd7c) + 0x18))();
    if (cVar1 == '\0') {
      uVar4 = 0;
      puVar5 = &local_50;
    }
    else {
      FUN_000efd90(s_WARNING_network__GenericIPXInit__0016d539);
    }
  }
  DAT_003d97d0 = (undefined4 *)*puVar5;
  return CONCAT44(puVar5[10],CONCAT31((int3)((uint)*puVar5 >> 8),uVar4));
}

/******************************************************************************
 * Function : dk_SendSystemUserMessage_0efab0 (Ghidra: FUN_000efab0)
 * Prototype: void dk_SendSystemUserMessage_0efab0(undefined4 param_1,char *param_2,int param_3);
 * Address  : 0xefab0 (Size: 314 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SendSystemUserMessage() systemUserBuffer is too '
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xefd90, 0xff894, 0x1002dc
 * Strings  :
 *   - 0x16d7ee: "  WARNING network: SendSystemUserMessage() systemUserBuffer is too small\n"
 *   - 0x16e699: "  WARNING network: PlayerMapMsgHandler() invalid length %d\n"
 *   - 0x16e6d5: "  WARNING network: PlayerMapMsgHandler() received unexpected SU_PLAYER_MAP_MSG\n"
 *   - 0x16e725: "  WARNING network: SystemUserMsgCallback() illegal sysMsgType %d\n"
 ******************************************************************************/
void FUN_000efab0(undefined4 param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return;
  }
  if (*param_2 != '\0') {
    FUN_000efd90(s_WARNING_network__SystemUserMsgCa_0016e725,(int)*param_2);
    return;
  }
  uVar1 = param_3 - 1;
  uVar2 = DAT_003dd884 * 0x2c;
  if (uVar1 == 0) {
    if (0x404 < uVar2 + 5) {
      FUN_000efd90(s_WARNING_network__SendSystemUserM_0016d7ee,0);
      return;
    }
    FUN_000ff894();
    DAT_003de250 = 0;
    if (uVar2 != 0) {
      puVar4 = &DAT_003dd8b0;
      puVar6 = &DAT_003de251;
      for (uVar2 = uVar2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar8 * -2 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar8 * -2 + 1);
      }
    }
    FUN_001002dc();
    return;
  }
  if (DAT_003dd87c == 0) {
    FUN_000efd90(s_WARNING_network__PlayerMapMsgHan_0016e6d5);
    return;
  }
  if (uVar1 == uVar2) {
    pcVar5 = param_2 + 1;
    pcVar7 = (char *)&DAT_003dd8b0;
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar7 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    }
    DAT_003dd87c = 0;
    return;
  }
  FUN_000efd90(s_WARNING_network__PlayerMapMsgHan_0016e699,uVar1);
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_Send_0f3b50 (Ghidra: FUN_000f3b50)
 * Prototype: undefined4 dk_LbNetwork_Send_0f3b50(void);
 * Address  : 0xf3b50 (Size: 903 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'INSIDE LbNetwork_Send'
 * Callers  : 1 -> 0x5d7b5
 * Callees  : 6 -> 0xe6a10, 0xeb818, 0xefd90, 0xff894, 0xffb54, 0x1002dc
 * Strings  :
 *   - 0x16f12c: "INSIDE LbNetwork_Send\n"
 *   - 0x16f143: "ERROR::LbNetwork_Send ServiceProvider ptr is NULL\n"
 *   - 0x16f176: "  Warning: LbNetwork_Send() player index %d is out of range (max = %d)\n"
 *   - 0x16f254: "  Warning : LbNetwork_Send() timeout on CTS or END\n"
 *   - 0x16f1be: "  Warning : LbNetwork_Send() requested page numbers %d to %d are out of range\n"
 *   - 0x16f20d: "  Warning: LbNetwork_Send() failure on SP::Send() for DATA Page  # %d\n"
 *   - 0x16f288: "  Warning : LbNetwork_Send() failure on SP::Send() for RTS\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_000f3b50(void)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  uint extraout_ECX_00;
  uint uVar4;
  int in_EDX;
  int extraout_EDX;
  int unaff_EBX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  int local_20;
  undefined4 *local_1c;
  
  bVar8 = 0;
  DAT_003dd860 = 1;
  FUN_000efd90(s_INSIDE_LbNetwork_Send_0016f12c);
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Send_ServicePro_0016f143);
  }
  else {
    FUN_000ffb54();
    if (DAT_003dd884 <= in_EAX) {
      FUN_000efd90(s_Warning__LbNetwork_Send___player_0016f176);
      return 0xff;
    }
    if ((&DAT_003dd8b4)[in_EAX * 0xb] == 0) {
      return 0xff;
    }
    FUN_000e6a10((&DAT_003dd8b0)[in_EAX * 0xb]);
    _DAT_003decf4 = 0;
    _DAT_003ded00 = 3;
    _DAT_003decfc = 0x200;
    _DAT_003decf8 = unaff_EBX;
    FUN_000ff894();
    cVar1 = FUN_001002dc();
    if (cVar1 == '\0') {
      FUN_000eb818();
      uVar2 = unaff_EBX - 1U >> 9;
      local_20 = 1;
LAB_000f3c80:
      do {
        FUN_000ffb54();
        if (DAT_003df12c == 0) {
          iVar3 = FUN_000eb818();
          iVar3 = iVar3 - extraout_ECX;
          if (iVar3 < 0) {
            iVar3 = -iVar3;
          }
          if (50000 < iVar3) {
            FUN_000efd90(s_Warning___LbNetwork_Send___timeo_0016f254);
            local_20 = 0;
          }
        }
        else {
          DAT_003df12c = 0;
          if (2 < DAT_003def24) {
            if (DAT_003def24 < 4) {
              return 0;
            }
            if (DAT_003def24 == 4) {
              return 0xff;
            }
            if (local_20 == 0) {
              return 0xff;
            }
            goto LAB_000f3c80;
          }
          if (DAT_003def24 != 1) {
            if (local_20 == 0) {
              return 0xff;
            }
            goto LAB_000f3c80;
          }
          if ((uVar2 < DAT_003def28) || (uVar2 < DAT_003def2c)) {
            FUN_000efd90(s_Warning___LbNetwork_Send___reque_0016f1be,DAT_003def28,DAT_003def2c);
            return 0xff;
          }
          if (DAT_003def28 <= DAT_003def2c) {
            local_1c = (undefined4 *)(DAT_003def28 * 0x200 + in_EDX);
            uVar5 = DAT_003def28;
            do {
              FUN_000e6a10();
              puVar6 = local_1c;
              puVar7 = &DAT_003ded10;
              for (uVar4 = extraout_ECX_00 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
                puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
              }
              for (uVar4 = extraout_ECX_00 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
                puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar8 * -2 + 1);
                puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar8 * -2 + 1);
              }
              _DAT_003ded08 = 2;
              _DAT_003ded0c = uVar5;
              FUN_000ff894();
              cVar1 = FUN_001002dc();
              if (cVar1 == '\0') {
                FUN_000eb818();
              }
              else {
                FUN_000efd90(s_Warning__LbNetwork_Send___failur_0016f20d,uVar5);
                local_20 = extraout_EDX;
              }
              uVar5 = uVar5 + 1;
              local_1c = local_1c + 0x80;
            } while (uVar5 <= DAT_003def2c);
          }
        }
        if (local_20 == 0) {
          return 0xff;
        }
      } while( true );
    }
    FUN_000efd90(s_Warning___LbNetwork_Send___failu_0016f288);
  }
  return 0xff;
}

/******************************************************************************
 * Function : dk_LbNetwork_Receive_0f3ed8 (Ghidra: FUN_000f3ed8)
 * Prototype: uint dk_LbNetwork_Receive_0f3ed8(void);
 * Address  : 0xf3ed8 (Size: 1263 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'INSIDE LbNetwork_Receive'
 * Callers  : 1 -> 0x5d7b5
 * Callees  : 6 -> 0xe6a10, 0xeb818, 0xefd90, 0xff894, 0xffb54, 0x1002dc
 * Strings  :
 *   - 0x16f2c4: "INSIDE LbNetwork_Receive\n"
 *   - 0x16f2de: "ERROR::LbNetwork_Receive ServiceProvider ptr is NULL\n"
 *   - 0x16f3d2: "  Warning : LbNetwork_Receive() timeout on RTS\n"
 *   - 0x16f314: "  Warning : LbNetwork_Receive() page size %d is out of range\n"
 *   - 0x16f352: "  Warning : LbNetwork_Receive() total size %d is out of range\n"
 *   - 0x16f391: "  Warning : LbNetwork_Receive() failure on SP::Send() for ABORT\n"
 *   - 0x16f402: "  Warning : LbNetwork_Receive() unexpected command %d received\n"
 *   - 0x16f442: "  Warning : LbNetwork_Receive() failure on SP::Send() for ABORT\n"
 *   - 0x16f483: "  Warning : LbNetwork_Receive() failure on SP::Send() for CTS Pages %d to %d\n"
 *   - 0x16f4d1: "  Warning : LbNetwork_Receive() failure on SP::Send() for ABORT\n"
 *   - 0x16f512: "  Warning : LbNetwork_Receive() failure on SP::Send() for END\n"
 *   - 0x16f551: "OUTSIDE LbNetwork_Receive\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000f3ed8(void)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint extraout_ECX;
  uint uVar5;
  uint uVar6;
  uint unaff_EBX;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined8 uVar13;
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
  
  bVar12 = 0;
  uVar13 = FUN_000eb818();
  local_30 = (int)((ulonglong)uVar13 >> 0x20);
  local_38 = (undefined4)uVar13;
  bVar9 = true;
  bVar1 = false;
  local_40 = 0;
  DAT_003dd860 = 1;
  FUN_000efd90(s_INSIDE_LbNetwork_Receive_0016f2c4);
  if (DAT_003dd8a0 == 0) {
    FUN_000efd90(s_ERROR__LbNetwork_Receive_Service_0016f2de);
    local_40 = 0xffffffff;
  }
  else {
    FUN_000ffb54();
    if (DAT_003dd884 <= extraout_ECX) {
      return 0;
    }
    if ((&DAT_003dd8b4)[extraout_ECX * 0xb] == 0) {
      return 0;
    }
    local_20 = (&DAT_003dd8b0)[extraout_ECX * 0xb];
    do {
      FUN_000ffb54();
      if (DAT_003df12c == 0) {
        uVar13 = FUN_000eb818();
        iVar4 = (int)uVar13 - (int)((ulonglong)uVar13 >> 0x20);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (50000 < iVar4) {
          FUN_000efd90(s_Warning___LbNetwork_Receive___ti_0016f3d2);
LAB_000f3fc8:
          bVar9 = false;
        }
      }
      else {
        DAT_003df12c = 0;
        if (DAT_003def24 == 0) {
          local_1c = DAT_003def28;
          local_3c = DAT_003def2c;
          local_28 = DAT_003def30;
          if (DAT_003def2c < 0x201) {
            if (unaff_EBX < DAT_003def28) {
              FUN_000efd90(s_Warning___LbNetwork_Receive___to_0016f352,DAT_003def28);
            }
            else {
              bVar1 = true;
            }
          }
          else {
            FUN_000efd90(s_Warning___LbNetwork_Receive___pa_0016f314,DAT_003def2c);
          }
          bVar9 = false;
          if (!bVar1) {
            _DAT_003def1c = 4;
            FUN_000ff894();
            cVar3 = FUN_001002dc();
            if (cVar3 != '\0') {
              FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f391);
              goto LAB_000f3fc8;
            }
          }
        }
      }
    } while (bVar9);
    if (bVar1) {
      local_34 = (local_1c - 1) / local_3c;
      local_24 = 1;
      local_14 = 0;
      do {
        if (local_34 < local_14) {
          local_24 = 0;
          local_40 = local_1c;
        }
        else {
          uVar8 = local_14 + local_28;
          if (local_34 < local_14 + local_28) {
            uVar8 = local_34;
          }
          local_4c = 1;
          local_48 = local_14;
          local_44 = uVar8;
          FUN_000ff894();
          cVar3 = FUN_001002dc();
          uVar2 = local_28;
          if (cVar3 == '\0') {
            bVar1 = true;
            uVar6 = 0;
            iVar4 = 0;
            do {
              uVar6 = uVar6 + 1;
              *(undefined4 *)((int)local_94 + iVar4) = 1;
              iVar4 = iVar4 + 4;
            } while (uVar6 <= uVar2);
            local_18 = FUN_000eb818();
            local_2c = uVar8 + 1;
            do {
              FUN_000ffb54();
              uVar6 = local_14;
              uVar2 = DAT_003def28;
              if (DAT_003df12c == 0) {
                uVar13 = FUN_000eb818();
                iVar4 = (int)uVar13 - (int)((ulonglong)uVar13 >> 0x20);
                if (iVar4 < 0) {
                  iVar4 = -iVar4;
                }
                if (25000 < iVar4) {
                  _DAT_003def1c = 4;
                  bVar1 = false;
                  FUN_000ff894();
                  local_24 = 0;
                  cVar3 = FUN_001002dc();
                  if (cVar3 != '\0') {
                    FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f442);
                  }
                }
              }
              else {
                DAT_003df12c = 0;
                if (DAT_003def24 == 2) {
                  if ((local_14 <= DAT_003def28) && (DAT_003def28 <= uVar8)) {
                    uVar7 = local_1c - local_3c * DAT_003def28;
                    if (local_3c < uVar7) {
                      uVar7 = local_3c;
                    }
                    puVar10 = &DAT_003def2c;
                    puVar11 = (undefined4 *)(local_3c * DAT_003def28 + local_30);
                    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                      *puVar11 = *puVar10;
                      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
                      puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
                    }
                    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
                      puVar10 = (undefined4 *)((int)puVar10 + (uint)bVar12 * -2 + 1);
                      puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
                    }
                    bVar1 = false;
                    local_94[uVar2 - local_14] = 0;
                    if (uVar6 <= uVar8) {
                      iVar4 = 0;
                      do {
                        if (*(int *)((int)local_94 + iVar4) != 0) {
                          bVar1 = true;
                        }
                        uVar6 = uVar6 + 1;
                        iVar4 = iVar4 + 4;
                      } while (uVar6 <= uVar8);
                    }
                    if (!bVar1) {
                      local_14 = local_2c;
                      break;
                    }
                    local_18 = FUN_000eb818();
                    bVar1 = true;
                  }
                }
                else {
                  FUN_000efd90(s_Warning___LbNetwork_Receive___un_0016f402,DAT_003def24);
                }
              }
            } while (bVar1);
          }
          else {
            local_24 = 0;
            FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f483,local_14,uVar8);
            _DAT_003def1c = 4;
            FUN_000ff894();
            cVar3 = FUN_001002dc();
            if (cVar3 != '\0') {
              FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f4d1);
            }
          }
        }
      } while (local_24 != 0);
      if (local_40 == local_1c) {
        FUN_000e6a10();
        _DAT_003def14 = 3;
        FUN_000ff894();
        cVar3 = FUN_001002dc();
        if (cVar3 != '\0') {
          FUN_000efd90(s_Warning___LbNetwork_Receive___fa_0016f512);
        }
      }
    }
    FUN_000efd90(s_OUTSIDE_LbNetwork_Receive_0016f551);
  }
  return local_40;
}

/******************************************************************************
 * Function : dk_LbNETWORK_0ff0ec (Ghidra: FUN_000ff0ec)
 * Prototype: void dk_LbNETWORK_0ff0ec(void);
 * Address  : 0xff0ec (Size: 30 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Destructing ServiceProvider'
 * Callers  : 3 -> 0x103134, 0x11f3f0, 0x11fbe0
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171411: "  LbNETWORK : Destructing ServiceProvider\n"
 ******************************************************************************/
void FUN_000ff0ec(void)

{
  int in_EAX;
  
  *(undefined ***)(in_EAX + 0xd7c) = &PTR_FUN_000ff0ec_001747b4;
  FUN_000efd90(s_LbNETWORK___Destructing_ServiceP_00171411);
  return;
}

/******************************************************************************
 * Function : dk_LbNETWORK_0ff10c (Ghidra: FUN_000ff10c)
 * Prototype: uint dk_LbNETWORK_0ff10c(void);
 * Address  : 0xff10c (Size: 128 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Initialising ServiceProvider'
 * Callers  : 2 -> 0x1032d8, 0x11e314
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x17143c: "  LbNETWORK : Initialising ServiceProvider\n"
 *   - 0x171468: "Service Provider already setup!\n"
 ******************************************************************************/
uint FUN_000ff10c(void)

{
  uint uVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar3;
  int in_EDX;
  undefined4 unaff_EBX;
  uint uVar2;
  
  FUN_000efd90(s_LbNETWORK___Initialising_Service_0017143c);
  uVar3 = extraout_ECX;
  if (*(int *)(extraout_ECX + 0x7a4) != 0) {
    FUN_000efd90(s_Service_Provider_already_setup__00171468);
    uVar3 = extraout_ECX_00;
  }
  *(undefined4 *)(uVar3 + 0x7ac) = 0;
  uVar2 = uVar3;
  do {
    uVar1 = uVar2 + 0x3d;
    *(undefined4 *)(uVar2 + 9) = 0;
    uVar2 = uVar1;
  } while (uVar1 != uVar3 + 0x7a0);
  *(undefined4 *)(uVar3 + 0xd78) = unaff_EBX;
  if (in_EDX != 0) {
    *(int *)(uVar3 + 0xd70) = in_EDX;
  }
  *(undefined4 *)(uVar3 + 0x7a8) = 0;
  *(undefined4 *)(uVar3 + 0xd74) = 0;
  *(int *)(uVar3 + 0x7a4) = *(int *)(uVar3 + 0x7a4) + 1;
  return uVar1 & 0xffffff00;
}

/******************************************************************************
 * Function : dk_LbNETWORK_0ff18c (Ghidra: FUN_000ff18c)
 * Prototype: ulonglong dk_LbNETWORK_0ff18c(void);
 * Address  : 0xff18c (Size: 71 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Releasing ServiceProvider'
 * Callers  : 3 -> 0x1032d8, 0x103464, 0x11e254
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171489: "  LbNETWORK : Releasing ServiceProvider\n"
 *   - 0x1714b2: "Service Provider not setup!\n"
 ******************************************************************************/
ulonglong FUN_000ff18c(void)

{
  undefined4 in_EDX;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000efd90(s_LbNETWORK___Releasing_ServicePro_00171489);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(iVar1 + 0x7a8) = 0;
  if (*(int *)(iVar1 + 0x7a4) != 1) {
    uVar2 = FUN_000efd90(s_Service_Provider_not_setup__001714b2);
  }
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  *(int *)(iVar1 + 0x7a4) = *(int *)(iVar1 + 0x7a4) + -1;
  return CONCAT44(in_EDX,(int)uVar2) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : dk_AddPlayer_0ff1d4 (Ghidra: FUN_000ff1d4)
 * Prototype: undefined4 dk_AddPlayer_0ff1d4(undefined4 param_1);
 * Address  : 0xff1d4 (Size: 308 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::AddPlayer() player table is ful'
 * Callers  : 10 -> 0xffb54, 0x1002dc, 0x103528, 0x10646c, 0x106da4, 0x1082bc, 0x109acc, 0x10a3b0, 0x11e484, 0x11e554
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x1714cf: "  WARNING network: ServiceProvider::AddPlayer() player table is full\n"
 ******************************************************************************/
undefined4 FUN_000ff1d4(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  int in_EAX;
  undefined4 in_ECX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_EDX;
  int iVar6;
  char *pcVar7;
  char *unaff_EBX;
  char *pcVar8;
  
  bVar2 = false;
  uVar3 = 0;
  iVar6 = in_EAX;
  if (*(int *)(in_EAX + 0x7ac) != 0) {
    do {
      if (in_EDX == *(int *)(iVar6 + 0x7b1)) {
        bVar2 = true;
      }
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 0x2d;
    } while (uVar3 < *(uint *)(in_EAX + 0x7ac));
  }
  if (!bVar2) {
    uVar3 = *(uint *)(in_EAX + 0x7ac);
    if (0x1f < uVar3) {
      FUN_000efd90(s_WARNING_network__ServiceProvider_001714cf);
      return 0xff;
    }
    *(int *)(uVar3 * 0x2d + 0x7b1 + in_EAX) = in_EDX;
    iVar6 = in_EAX + 0x7b0 + uVar3 * 0x2d;
    pcVar7 = (char *)(iVar6 + 0xd);
    if ((pcVar7 != (char *)0x0) && (unaff_EBX != (char *)0x0)) {
      uVar4 = 0xffffffff;
      pcVar8 = unaff_EBX;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (~uVar4 - 1 < 0x20) {
        do {
          cVar1 = *unaff_EBX;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = unaff_EBX[1];
          unaff_EBX = unaff_EBX + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      else {
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)unaff_EBX;
          unaff_EBX = unaff_EBX + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (iVar5 = 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pcVar7 = *unaff_EBX;
          unaff_EBX = unaff_EBX + 1;
          pcVar7 = pcVar7 + 1;
        }
        *(undefined1 *)(iVar6 + 0x2c) = 0;
      }
    }
    *(undefined4 *)(uVar3 * 0x2d + 0x7b5 + in_EAX) = in_ECX;
    *(undefined4 *)(uVar3 * 0x2d + 0x7b9 + in_EAX) = param_1;
    *(int *)(in_EAX + 0x7ac) = *(int *)(in_EAX + 0x7ac) + 1;
  }
  return 0;
}

/******************************************************************************
 * Function : dk_EncodeMessageStub_0ff550 (Ghidra: FUN_000ff550)
 * Prototype: void dk_EncodeMessageStub_0ff550(void);
 * Address  : 0xff550 (Size: 121 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 6 -> 0x10646c, 0x1082bc, 0x109acc, 0x10a3b0, 0x11e554, 0x11ee0c
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171515: "  WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr\n"
 ******************************************************************************/
void FUN_000ff550(void)

{
  char cVar1;
  char *in_ECX;
  uint uVar2;
  int iVar3;
  uint *in_EDX;
  uint *extraout_EDX;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  uVar2 = 0xffffffff;
  pcVar4 = in_ECX;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (in_EDX == (uint *)0x0) {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171515);
    in_EDX = extraout_EDX;
  }
  else {
    *in_EDX = ~uVar2 + 4 & 0xfffff | 0x1000000;
  }
  puVar6 = (uint *)&stack0xfffffff4;
  puVar5 = in_EDX + 1;
  for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(char *)puVar5 = (char)*puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    puVar5 = (uint *)((int)puVar5 + (uint)bVar7 * -2 + 1);
  }
  puVar6 = in_EDX + 2;
  do {
    cVar1 = *in_ECX;
    *(char *)puVar6 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = in_ECX[1];
    in_ECX = in_ECX + 2;
    *(char *)((int)puVar6 + 1) = cVar1;
    puVar6 = (uint *)((int)puVar6 + 2);
  } while (cVar1 != '\0');
  return;
}

/******************************************************************************
 * Function : dk_EncodeMessageStub_0ff630 (Ghidra: FUN_000ff630)
 * Prototype: void dk_EncodeMessageStub_0ff630(void);
 * Address  : 0xff630 (Size: 71 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 9 -> 0xee3c0, 0xee694, 0xeedc0, 0x100bb8, 0x10646c, 0x1082bc, 0x109acc, 0x10a3b0, 0x11eaf8
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171515: "  WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr\n"
 ******************************************************************************/
void FUN_000ff630(void)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_14;
  
  bVar4 = 0;
  if (in_EAX == (undefined4 *)0x0) {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171515);
  }
  else {
    *in_EAX = 0x2000004;
  }
  puVar2 = &local_14;
  puVar3 = in_EAX + 1;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar4 * -2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar4 * -2 + 1);
  }
  return;
}

/******************************************************************************
 * Function : dk_EncodeMessageStub_0ff6a0 (Ghidra: FUN_000ff6a0)
 * Prototype: void dk_EncodeMessageStub_0ff6a0(void);
 * Address  : 0xff6a0 (Size: 77 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 3 -> 0xeedc0, 0x100bb8, 0x100e14
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171515: "  WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr\n"
 ******************************************************************************/
void FUN_000ff6a0(void)

{
  uint *in_EAX;
  uint *extraout_ECX;
  int iVar1;
  uint unaff_EBX;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_10;
  
  bVar4 = 0;
  if (in_EAX == (uint *)0x0) {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171515);
    in_EAX = extraout_ECX;
  }
  else {
    *in_EAX = (unaff_EBX & 0xf) << 0x14 | 0x5000004;
  }
  puVar2 = &local_10;
  puVar3 = in_EAX + 1;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)puVar3 = (char)*puVar2;
    puVar2 = (uint *)((int)puVar2 + (uint)bVar4 * -2 + 1);
    puVar3 = (uint *)((int)puVar3 + (uint)bVar4 * -2 + 1);
  }
  return;
}

/******************************************************************************
 * Function : dk_EncodeMessageStub_0ff6f0 (Ghidra: FUN_000ff6f0)
 * Prototype: void dk_EncodeMessageStub_0ff6f0(void);
 * Address  : 0xff6f0 (Size: 77 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 2 -> 0xee3c0, 0xee694
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171515: "  WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr\n"
 ******************************************************************************/
void FUN_000ff6f0(void)

{
  uint *in_EAX;
  uint *extraout_ECX;
  int iVar1;
  uint unaff_EBX;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_10;
  
  bVar4 = 0;
  if (in_EAX == (uint *)0x0) {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171515);
    in_EAX = extraout_ECX;
  }
  else {
    *in_EAX = (unaff_EBX & 0xf) << 0x14 | 0x6000004;
  }
  puVar2 = &local_10;
  puVar3 = in_EAX + 1;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(char *)puVar3 = (char)*puVar2;
    puVar2 = (uint *)((int)puVar2 + (uint)bVar4 * -2 + 1);
    puVar3 = (uint *)((int)puVar3 + (uint)bVar4 * -2 + 1);
  }
  return;
}

/******************************************************************************
 * Function : dk_EncodeMessageStub_0ff894 (Ghidra: FUN_000ff894)
 * Prototype: void dk_EncodeMessageStub_0ff894(void);
 * Address  : 0xff894 (Size: 43 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr'
 * Callers  : 10 -> 0xeda20, 0xee3c0, 0xee694, 0xef060, 0xef7a8, 0xefab0, 0xf3b50, 0xf3ed8, 0x100a28, 0x100e14
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171515: "  WARNING network: ServiceProvider::EncodeMessageStub() NULL ptr\n"
 ******************************************************************************/
void FUN_000ff894(void)

{
  uint *in_EAX;
  uint in_ECX;
  uint in_EDX;
  char unaff_BL;
  
  if (in_EAX == (uint *)0x0) {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171515);
    return;
  }
  *in_EAX = in_EDX & 0xfffff | (in_ECX & 0xf) << 0x14 | (int)unaff_BL << 0x18;
  return;
}

/******************************************************************************
 * Function : dk_DecodeMessageStub_0ff8c0 (Ghidra: FUN_000ff8c0)
 * Prototype: void dk_DecodeMessageStub_0ff8c0(void);
 * Address  : 0xff8c0 (Size: 67 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr'
 * Callers  : 11 -> 0x100e14, 0x101074, 0x104410, 0x10646c, 0x1082bc, 0x10962c, 0x109acc, 0x10a3b0, 0x11e6a8, 0x11ee0c ...
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171557: "  WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr\n"
 ******************************************************************************/
void FUN_000ff8c0(void)

{
  uint *in_EAX;
  uint *in_ECX;
  uint *in_EDX;
  undefined1 *unaff_EBX;
  
  if (in_EAX == (uint *)0x0) {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171557);
    return;
  }
  if (in_EDX != (uint *)0x0) {
    *in_EDX = *in_EAX & 0xfffff;
  }
  if (in_ECX != (uint *)0x0) {
    *in_ECX = *in_EAX >> 0x14 & 0xf;
  }
  if (unaff_EBX != (undefined1 *)0x0) {
    *unaff_EBX = (char)(*in_EAX >> 0x18);
  }
  return;
}

/******************************************************************************
 * Function : dk_warning_network_niladdmsgcallback_hit_0ff904 (Ghidra: FUN_000ff904)
 * Prototype: void dk_warning_network_niladdmsgcallback_hit_0ff904(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff904 (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilAddMsgCallback(%d, %s) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171599: "  WARNING network: NilAddMsgCallback(%d, %s) hit\n"
 ******************************************************************************/
void FUN_000ff904(undefined4 param_1,undefined4 param_2)

{
  FUN_000efd90(s_WARNING_network__NilAddMsgCallba_00171599,param_1,param_2);
  return;
}

/******************************************************************************
 * Function : dk_warning_network_nildeletemsgcallback_hit_0ff920 (Ghidra: FUN_000ff920)
 * Prototype: void dk_warning_network_nildeletemsgcallback_hit_0ff920(undefined4 param_1);
 * Address  : 0xff920 (Size: 21 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilDeleteMsgCallback(%d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x1715cb: "  WARNING network: NilDeleteMsgCallback(%d) hit\n"
 ******************************************************************************/
void FUN_000ff920(undefined4 param_1)

{
  FUN_000efd90(s_WARNING_network__NilDeleteMsgCal_001715cb,param_1);
  return;
}

/******************************************************************************
 * Function : dk_warning_network_nilhostmsgcallback_hit_0ff938 (Ghidra: FUN_000ff938)
 * Prototype: void dk_warning_network_nilhostmsgcallback_hit_0ff938(undefined4 param_1);
 * Address  : 0xff938 (Size: 21 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilHostMsgCallback(%d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x1715fc: "  WARNING network: NilHostMsgCallback(%d) hit\n"
 ******************************************************************************/
void FUN_000ff938(undefined4 param_1)

{
  FUN_000efd90(s_WARNING_network__NilHostMsgCallb_001715fc,param_1);
  return;
}

/******************************************************************************
 * Function : dk_NilUserSysMsgCallback_0ff950 (Ghidra: FUN_000ff950)
 * Prototype: void dk_NilUserSysMsgCallback_0ff950(void);
 * Address  : 0xff950 (Size: 16 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: NilUserSysMsgCallback() hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x17162b: "  WARNING network: NilUserSysMsgCallback() hit\n"
 ******************************************************************************/
void FUN_000ff950(void)

{
  FUN_000efd90(s_WARNING_network__NilUserSysMsgCa_0017162b);
  return;
}

/******************************************************************************
 * Function : dk_warning_network_niluserdatamsgcallbac_hit_0ff960 (Ghidra: FUN_000ff960)
 * Prototype: undefined4 dk_warning_network_niluserdatamsgcallbac_hit_0ff960(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xff960 (Size: 35 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilUserDataMsgCallback(%d, %d %d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x17165b: "  WARNING network: NilUserDataMsgCallback(%d, %d %d) hit\n"
 ******************************************************************************/
undefined4 FUN_000ff960(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000efd90(s_WARNING_network__NilUserDataMsgC_0017165b,param_1,param_2,param_3);
  return 0;
}

/******************************************************************************
 * Function : dk_warning_network_nilrequestexchangedat_amsgcallback_0ff984 (Ghidra: FUN_000ff984)
 * Prototype: void dk_warning_network_nilrequestexchangedat_amsgcallback_0ff984(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff984 (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilRequestExchangeDataMsgCallback(%d %d) hi'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171695: "  WARNING network: NilRequestExchangeDataMsgCallback(%d %d) hit\n"
 ******************************************************************************/
void FUN_000ff984(undefined4 param_1,undefined4 param_2)

{
  FUN_000efd90(s_WARNING_network__NilRequestExcha_00171695,param_1,param_2);
  return;
}

/******************************************************************************
 * Function : dk_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0 (Ghidra: FUN_000ff9a0)
 * Prototype: void dk_warning_network_nilrequestcompositeex_changedatamsgcallback_0ff9a0(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff9a0 (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilRequestCompositeExchangeDataMsgCallback('
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x1716d6: "  WARNING network: NilRequestCompositeExchangeDataMsgCallback(%d %d) hit\n"
 ******************************************************************************/
void FUN_000ff9a0(undefined4 param_1,undefined4 param_2)

{
  FUN_000efd90(s_WARNING_network__NilRequestCompo_001716d6,param_1,param_2);
  return;
}

/******************************************************************************
 * Function : dk_warning_network_nilunidirectionalmsgc_allback_0ff9bc (Ghidra: FUN_000ff9bc)
 * Prototype: undefined4 dk_warning_network_nilunidirectionalmsgc_allback_0ff9bc(undefined4 param_1,undefined4 param_2);
 * Address  : 0xff9bc (Size: 30 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilUnidirectionalMsgCallback(%d, %d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171720: "  WARNING network: NilUnidirectionalMsgCallback(%d, %d) hit\n"
 ******************************************************************************/
undefined4 FUN_000ff9bc(undefined4 param_1,undefined4 param_2)

{
  FUN_000efd90(s_WARNING_network__NilUnidirection_00171720,param_1,param_2);
  return 0;
}

/******************************************************************************
 * Function : dk_warning_network_nilsystemusermsgcallb_ack_0ff9dc (Ghidra: FUN_000ff9dc)
 * Prototype: void dk_warning_network_nilsystemusermsgcallb_ack_0ff9dc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xff9dc (Size: 28 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: NilSystemUserMsgCallback(%d %d) hit'
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x17175d: "  WARNING network: NilSystemUserMsgCallback(%d %d) hit\n"
 ******************************************************************************/
void FUN_000ff9dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000efd90(s_WARNING_network__NilSystemUserMs_0017175d,param_1,param_3);
  return;
}

/******************************************************************************
 * Function : dk_Receive_0ffb54 (Ghidra: FUN_000ffb54)
 * Prototype: undefined1 dk_Receive_0ffb54(void);
 * Address  : 0xffb54 (Size: 1892 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::Receive() not initialised'
 * Callers  : 12 -> 0xeda20, 0xee3c0, 0xee694, 0xeedc0, 0xf3b50, 0xf3ed8, 0x100708, 0x100828, 0x100a28, 0x100bb8 ...
 * Callees  : 5 -> 0xefd90, 0xff1d4, 0xff308, 0xff9f8, 0x11e0f4
 * Strings  :
 *   - 0x171795: "  WARNING network: ServiceProvider::Receive() not initialised\n"
 *   - 0x171557: "  WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr\n"
 *   - 0x1717d4: "  WARNING network: ServiceProvider::Receive() NIL target for userDataMsgCallbackProc\n"
 *   - 0x17182a: "  WARNING network: ServiceProvider::ReadMessage() Inconsistancy between reads\n"
 *   - 0x171879: "  WARNING network: ServiceProvider::ReadMessage() consistency error on Receive()\n"
 *   - 0x1718cb: "  WARNING network: ServiceProvider::ReadMessage() consistency error\n"
 *   - 0x171910: "  WARNING network: ServiceProvider::ReadMessage() consistency error\n"
 *   - 0x171955: "  WARNING network: ServiceProvider::ReadMessage() consistency error\n"
 *   - 0x17199a: "  WARNING network: ServiceProvider::ReadMessage() consistency error\n"
 *   - 0x1719df: "  WARNING network: ServiceProvider::Receive() NIL target for unidirectionalMsgCallbackProc\n"
 *   - 0x171a3b: "  WARNING network: ServiceProvider::ReadMessage() Inconsistancy between reads\n"
 *   - 0x171a8a: "  WARNING network: ServiceProvider::Receive() messageType is out of range\n"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00100033) */
/* WARNING: Removing unreachable block (ram,0x00100041) */

undefined1 FUN_000ffb54(void)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint in_EAX;
  int iVar5;
  undefined4 uVar6;
  undefined1 extraout_CH;
  undefined1 extraout_CH_00;
  uint extraout_ECX;
  uint uVar7;
  uint extraout_ECX_00;
  uint *puVar8;
  uint *puVar9;
  char *pcVar10;
  uint *puVar11;
  uint *puVar12;
  byte bVar13;
  undefined1 local_4a0 [4];
  int local_49c;
  undefined1 local_498 [1136];
  undefined1 *local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  bVar13 = 0;
  local_20 = 1;
  local_1c = 0;
  if (*(int *)(in_EAX + 0xd74) == 0) {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171795);
    return 0xff;
  }
  local_28 = local_498;
  local_24 = &local_49c;
  puVar11 = (uint *)local_4a0;
switchD_000ffc7c_caseD_3:
  while( true ) {
    puVar8 = puVar11;
    if (puVar8[0x120] == 0) {
      return (char)puVar8[0x121];
    }
    puVar8[0x112] = 0x404;
    pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x2c);
    puVar8[-1] = 0xffbe8;
    iVar5 = (*pcVar2)();
    puVar11 = puVar8;
    if (iVar5 != 0) break;
    puVar8[0x120] = 0;
  }
  iVar5 = 0;
  if (puVar8 == (uint *)0x0) {
    pcRamfffffffc = s_WARNING_network__ServiceProvider_00171557;
    uRamfffffff8 = 0xffc10;
    FUN_000efd90();
  }
  else {
    if (puVar8 != (uint *)0xfffffbb4) {
      puVar8[0x113] = *puVar8 & 0xfffff;
    }
    if (puVar8 + 0x114 != (uint *)0x0) {
      puVar8[0x114] = *puVar8 >> 0x14 & 0xf;
    }
    if (puVar8 + 0x122 != (uint *)0x0) {
      *(char *)(puVar8 + 0x122) = (char)(*puVar8 >> 0x18);
    }
  }
  if ((puVar8[0x11c] & 8) != 0) {
    puVar8[0x11c] = 0xffffffff;
  }
  switch((char)puVar8[0x122]) {
  case '\0':
    if ((puVar8[0x11c] & 1) != 0) {
      iVar4 = *(int *)(in_EAX + 0xd70);
      if (*(int *)(iVar4 + 0x10) == 0) {
        puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_001717d4;
        puVar8[-2] = 0xffd46;
        FUN_000efd90();
      }
      else {
        puVar8[-1] = *(undefined4 *)(in_EAX + 0xd78);
        puVar8[-2] = puVar8[0x114];
        puVar8[-3] = puVar8[0x113] + 4;
        puVar8[-4] = puVar8[0x111];
        pcVar2 = *(code **)(iVar4 + 0x10);
        puVar8[-5] = 0xffd37;
        iVar5 = (*pcVar2)();
        puVar8 = puVar8 + -4;
      }
      if (iVar5 == 0) {
        *(undefined4 *)((int)puVar8 + 0x448) = 0x404;
      }
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      *(undefined4 *)((int)puVar8 + -4) = 0xffd74;
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        *(char **)((int)puVar8 + -4) = s_WARNING_network__ServiceProvider_0017182a;
        *(undefined4 *)((int)puVar8 + -8) = 0xffd84;
        FUN_000efd90();
        *(undefined1 *)((int)puVar8 + 0x484) = extraout_CH;
      }
    }
    break;
  case '\x01':
    if ((puVar8[0x11c] & 2) != 0) {
      puVar8[0x112] = 0x404;
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      puVar8[-1] = 0xffdcd;
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_00171879;
        puVar8[-2] = 0xffed5;
        FUN_000efd90();
      }
      else {
        puVar11 = puVar8 + 0x109;
        puVar8[0x11d] = in_EAX;
        puVar8[-1] = (uint)(puVar8 + 0x116);
        puVar9 = puVar8 + 1;
        puVar12 = puVar8 + 0x116;
        for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)puVar12 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + (uint)bVar13 * -2 + 1);
          puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
        }
        if (puVar11 != (uint *)0x0) {
          puVar9 = puVar8 + 2;
          puVar8[-1] = (uint)puVar11;
          do {
            uVar7 = *puVar9;
            *(char *)puVar11 = (char)uVar7;
            if ((char)uVar7 == '\0') break;
            cVar1 = *(char *)((int)puVar9 + 1);
            puVar9 = (uint *)((int)puVar9 + 2);
            *(char *)((int)puVar11 + 1) = cVar1;
            puVar11 = (uint *)((int)puVar11 + 2);
          } while (cVar1 != '\0');
        }
        puVar8[-1] = 0;
        puVar11 = (uint *)puVar8[0x11f];
        puVar8[-2] = 0xffe53;
        FUN_000ff1d4();
        puVar8[-2] = (uint)(puVar8 + 0x115);
        puVar9 = puVar8 + 0x115;
        for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar11;
          puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)puVar9 = (char)*puVar11;
          puVar11 = (uint *)((int)puVar11 + (uint)bVar13 * -2 + 1);
          puVar9 = (uint *)((int)puVar9 + (uint)bVar13 * -2 + 1);
        }
        if (puVar8 != (uint *)0xfffffc00) {
          pcVar10 = (char *)puVar8[0x11d];
          puVar11 = puVar8 + 0x100;
          puVar8[-2] = (uint)puVar11;
          do {
            cVar1 = *pcVar10;
            *(char *)puVar11 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            *(char *)((int)puVar11 + 1) = cVar1;
            puVar11 = (uint *)((int)puVar11 + 2);
          } while (cVar1 != '\0');
        }
        piVar3 = *(int **)(in_EAX + 0xd70);
        puVar11 = puVar8 + -1;
        if (*piVar3 != 0) {
          puVar8[-2] = *(undefined4 *)(in_EAX + 0xd78);
          puVar8[-3] = (uint)(puVar8 + 0x100);
          puVar8[-4] = puVar8[0x114];
          pcVar2 = (code *)*piVar3;
          puVar8[-5] = 0xffec5;
          (*pcVar2)();
          puVar11 = puVar8 + -4;
        }
      }
      goto switchD_000ffc7c_caseD_3;
    }
    break;
  case '\x02':
    if ((puVar8[0x11c] & 4) == 0) {
      puVar8[0x120] = 0;
    }
    else {
      puVar8[0x112] = 0x404;
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      puVar8[-1] = 0xfff12;
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_001718cb;
        puVar8[-2] = 0xfffa8;
        FUN_000efd90();
      }
      else {
        puVar8[-1] = 0xfff34;
        FUN_000ff9f8();
        puVar8[-1] = (uint)(puVar8 + 0x118);
        puVar9 = puVar8 + 1;
        puVar12 = puVar8 + 0x118;
        for (uVar7 = extraout_ECX >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        for (uVar7 = extraout_ECX & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar12 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + (uint)bVar13 * -2 + 1);
          puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
        }
        puVar9 = (uint *)puVar8[0x11f];
        puVar8[-1] = 0xfff65;
        FUN_000ff308();
        puVar8[-1] = (uint)(puVar8 + 0x117);
        puVar12 = puVar8 + 0x117;
        for (uVar7 = extraout_ECX_00 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        for (uVar7 = extraout_ECX_00 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar12 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + (uint)bVar13 * -2 + 1);
          puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
        }
        iVar5 = *(int *)(in_EAX + 0xd70);
        if (*(int *)(iVar5 + 4) != 0) {
          puVar8[-1] = *(undefined4 *)(in_EAX + 0xd78);
          puVar8[-2] = puVar8[0x117];
          pcVar2 = *(code **)(iVar5 + 4);
          puVar8[-3] = 0xfff98;
          (*pcVar2)();
          puVar11 = puVar8 + -2;
        }
      }
    }
  case '\x03':
    goto switchD_000ffc7c_caseD_3;
  case '\x04':
    if ((puVar8[0x11c] & 0x80) != 0) {
      puVar8[0x112] = 0x404;
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      puVar8[-1] = 0xffff3;
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_00171910;
        puVar8[-2] = 0x10008e;
        FUN_000efd90();
      }
      else {
        if (puVar8 == (uint *)0x0) {
          pcRamfffffffc = s_WARNING_network__ServiceProvider_00171557;
          uRamfffffff8 = 0x10000f;
          FUN_000efd90();
        }
        else if (puVar8 != (uint *)0xfffffb9c) {
          puVar8[0x119] = *puVar8 & 0xfffff;
        }
        iVar5 = *(int *)(in_EAX + 0xd70);
        if (*(int *)(iVar5 + 0x20) != 0) {
          puVar8[-1] = *(undefined4 *)(in_EAX + 0xd78);
          puVar8[-2] = puVar8[0x119];
          puVar8[-3] = (uint)(puVar8 + 1);
          puVar8[-4] = puVar8[0x111];
          pcVar2 = *(code **)(iVar5 + 0x20);
          puVar8[-5] = 0x10007f;
          (*pcVar2)();
          puVar11 = puVar8 + -4;
        }
      }
      goto switchD_000ffc7c_caseD_3;
    }
    break;
  case '\x05':
    if ((puVar8[0x11c] & 0x10) == 0) {
      puVar8[0x120] = 0;
    }
    else {
      puVar8[0x112] = 0x404;
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      puVar8[-1] = 0x1000cb;
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_00171955;
        puVar8[-2] = 0x10012b;
        FUN_000efd90();
      }
      else {
        puVar8[-1] = (uint)(puVar8 + 0x11a);
        puVar9 = (uint *)puVar8[0x11f];
        puVar12 = puVar8 + 0x11a;
        for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)puVar12 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + (uint)bVar13 * -2 + 1);
          puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
        }
        iVar5 = *(int *)(in_EAX + 0xd70);
        if (*(int *)(iVar5 + 0x14) != 0) {
          puVar8[-1] = *(undefined4 *)(in_EAX + 0xd78);
          puVar8[-2] = puVar8[0x114];
          puVar8[-3] = puVar8[0x11a];
          pcVar2 = *(code **)(iVar5 + 0x14);
          puVar8[-4] = 0x10011c;
          (*pcVar2)();
          puVar11 = puVar8 + -3;
        }
      }
    }
    goto switchD_000ffc7c_caseD_3;
  case '\x06':
    if ((puVar8[0x11c] & 0x20) == 0) {
      puVar8[0x120] = 0;
    }
    else {
      puVar8[0x112] = 0x404;
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      puVar8[-1] = 0x100176;
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_0017199a;
        puVar8[-2] = 0x1001d6;
        FUN_000efd90();
      }
      else {
        puVar8[-1] = (uint)(puVar8 + 0x11b);
        puVar9 = (uint *)puVar8[0x11f];
        puVar12 = puVar8 + 0x11b;
        for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + (uint)bVar13 * -2 + 1;
          puVar12 = puVar12 + (uint)bVar13 * -2 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)puVar12 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + (uint)bVar13 * -2 + 1);
          puVar12 = (uint *)((int)puVar12 + (uint)bVar13 * -2 + 1);
        }
        iVar5 = *(int *)(in_EAX + 0xd70);
        if (*(int *)(iVar5 + 0x18) != 0) {
          puVar8[-1] = *(undefined4 *)(in_EAX + 0xd78);
          puVar8[-2] = puVar8[0x114];
          puVar8[-3] = puVar8[0x11b];
          pcVar2 = *(code **)(iVar5 + 0x18);
          puVar8[-4] = 0x1001c7;
          (*pcVar2)();
          puVar11 = puVar8 + -3;
        }
      }
    }
    goto switchD_000ffc7c_caseD_3;
  case '\a':
    if ((puVar8[0x11c] & 0x40) != 0) {
      iVar4 = *(int *)(in_EAX + 0xd70);
      if (*(int *)(iVar4 + 0x1c) == 0) {
        puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_001719df;
        puVar8[-2] = 0x100231;
        FUN_000efd90();
      }
      else {
        puVar8[-1] = *(undefined4 *)(in_EAX + 0xd78);
        puVar8[-2] = puVar8[0x113] + 4;
        puVar8[-3] = puVar8[0x111];
        pcVar2 = *(code **)(iVar4 + 0x1c);
        puVar8[-4] = 0x100223;
        iVar5 = (*pcVar2)();
        puVar8 = puVar8 + -3;
      }
      if (iVar5 == 0) {
        *(undefined4 *)((int)puVar8 + 0x448) = 0x404;
      }
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      *(undefined4 *)((int)puVar8 + -4) = 0x10025f;
      iVar5 = (*pcVar2)();
      if (iVar5 == 0) {
        *(char **)((int)puVar8 + -4) = s_WARNING_network__ServiceProvider_00171a3b;
        *(undefined4 *)((int)puVar8 + -8) = 0x10026f;
        FUN_000efd90();
        *(undefined1 *)((int)puVar8 + 0x484) = extraout_CH_00;
      }
    }
    *(undefined4 *)((int)puVar8 + 0x480) = 0;
    puVar11 = puVar8;
    goto switchD_000ffc7c_caseD_3;
  case '\b':
    if (((*(byte *)((int)puVar8 + 0x471) & 1) != 0) &&
       (*(int *)(*(int *)(in_EAX + 0xd70) + 0x24) != 0)) {
      puVar8[-1] = 0xffcb1;
      uVar6 = FUN_0011e0f4();
      puVar8[0x112] = puVar8[0x113] + 4;
      pcVar2 = *(code **)(*(int *)(in_EAX + 0xd7c) + 0x28);
      puVar8[-1] = 0xffcdf;
      (*pcVar2)();
      puVar8[-1] = uVar6;
      iVar5 = *(int *)(in_EAX + 0xd70);
      puVar8[-2] = puVar8[0x111];
      pcVar2 = *(code **)(iVar5 + 0x24);
      puVar8[-3] = 0xffcf1;
      (*pcVar2)();
      puVar11 = puVar8 + -2;
    }
    goto switchD_000ffc7c_caseD_3;
  default:
    puVar8[-1] = (uint)s_WARNING_network__ServiceProvider_00171a8a;
    puVar8[-2] = 0x100291;
    FUN_000efd90();
    goto switchD_000ffc7c_caseD_3;
  }
  *(undefined4 *)((int)puVar8 + 0x480) = 0;
  puVar11 = puVar8;
  goto switchD_000ffc7c_caseD_3;
}

/******************************************************************************
 * Function : dk_Send_1002dc (Ghidra: FUN_001002dc)
 * Prototype: undefined1 dk_Send_1002dc(void);
 * Address  : 0x1002dc (Size: 1068 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::Send() not initialised'
 * Callers  : 15 -> 0xeda20, 0xee3c0, 0xee694, 0xeedc0, 0xef060, 0xef7a8, 0xef864, 0xefab0, 0xf3b50, 0xf3ed8 ...
 * Callees  : 4 -> 0xefd90, 0xff1d4, 0xff308, 0xff9f8
 * Strings  :
 *   - 0x171ad5: "  WARNING network: ServiceProvider::Send() not initialised\n"
 *   - 0x171557: "  WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr\n"
 *   - 0x171b11: "  WARNING network: ServiceProvider::Send() NIL target for userDataMsgCallbackProc\n"
 *   - 0x171b64: "  WARNING network: ServiceProvider::Send() NIL target for systemUserMsgCallbackProc\n"
 *   - 0x171bb9: "  WARNING network: ServiceProvider::Send() messageType is out of range\n"
 *   - 0x171c01: "  WARNING network: ServiceProvider::Send() failure on SendMessage()\n"
 ******************************************************************************/
undefined1 FUN_001002dc(void)

{
  char cVar1;
  uint *in_EAX;
  uint extraout_ECX;
  uint uVar2;
  uint extraout_ECX_00;
  int iVar3;
  uint in_EDX;
  uint extraout_EDX;
  uint *unaff_EBX;
  char **ppcVar4;
  undefined4 *puVar5;
  uint *puVar6;
  char *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  byte bVar10;
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
  
  bVar10 = 0;
  if (in_EAX[0x35d] == 0) {
    pcStack_78 = s_WARNING_network__ServiceProvider_00171ad5;
    uStack_7c = 0x100303;
    FUN_000efd90();
  }
  else {
    if (unaff_EBX == (uint *)0x0) {
      pcStack_78 = s_WARNING_network__ServiceProvider_00171557;
      uStack_7c = 0x100327;
      FUN_000efd90();
      in_EDX = extraout_EDX;
    }
    else {
      if (&stack0x00000000 != (undefined1 *)0x34) {
        local_34 = *unaff_EBX & 0xfffff;
      }
      if (&stack0x00000000 != (undefined1 *)0x30) {
        local_30 = *unaff_EBX >> 0x14 & 0xf;
      }
      if (&stack0x00000000 != (undefined1 *)0x18) {
        local_18 = (undefined1)(*unaff_EBX >> 0x18);
      }
    }
    pcVar7 = local_74;
    if (in_EDX == *in_EAX) {
      puVar9 = (undefined4 *)0x0;
      ppcVar4 = (char **)local_74;
      switch(local_18) {
      case 0:
        if (*(int *)(in_EAX[0x35c] + 0x10) == 0) {
          pcStack_78 = s_WARNING_network__ServiceProvider_00171b11;
          uStack_7c = 0x1003ee;
          FUN_000efd90();
          ppcVar4 = (char **)local_74;
        }
        else {
          pcStack_78 = (char *)in_EAX[0x35e];
          uStack_7c = local_30;
          puStack_80 = (uint *)(local_34 + 4);
          uStack_84 = *in_EAX;
          ppcVar4 = (char **)&uStack_84;
          puVar9 = (undefined4 *)(**(code **)(in_EAX[0x35c] + 0x10))();
        }
        if (puVar9 != (undefined4 *)0x0) {
          iVar3 = *(int *)((int)ppcVar4 + 0x40);
          *(undefined4 **)((int)ppcVar4 + -4) = puVar9;
          puVar5 = *(undefined4 **)((int)ppcVar4 + 0x58);
          for (uVar2 = iVar3 + 4U >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          for (uVar2 = iVar3 + 4U & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar10 * -2 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar10 * -2 + 1);
          }
          *(undefined1 *)((int)ppcVar4 + 0x60) = 0;
          return *(undefined1 *)((int)ppcVar4 + 0x60);
        }
        break;
      case 1:
        puVar6 = unaff_EBX + 1;
        puVar8 = &local_28;
        for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
        }
        local_20 = in_EAX;
        if (&stack0x00000000 != &DAT_00000074) {
          puVar6 = unaff_EBX + 2;
          do {
            uVar2 = *puVar6;
            *pcVar7 = (char)uVar2;
            if ((char)uVar2 == '\0') break;
            cVar1 = *(char *)((int)puVar6 + 1);
            puVar6 = (uint *)((int)puVar6 + 2);
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        ppcVar4 = &pcStack_78;
        pcStack_78 = (char *)0x0;
        uStack_7c = 0x10048c;
        FUN_000ff1d4();
        puVar6 = unaff_EBX + 1;
        puVar8 = &local_2c;
        for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
        }
        if (&stack0x00000000 != &DAT_00000058) {
          pcVar7 = local_58;
          puVar6 = local_20 + 2;
          do {
            uVar2 = *puVar6;
            *pcVar7 = (char)uVar2;
            if ((char)uVar2 == '\0') break;
            cVar1 = *(char *)((int)puVar6 + 1);
            puVar6 = (uint *)((int)puVar6 + 2);
            pcVar7[1] = cVar1;
            pcVar7 = pcVar7 + 2;
          } while (cVar1 != '\0');
        }
        if (*(int *)in_EAX[0x35c] != 0) {
          uStack_7c = in_EAX[0x35e];
          puStack_80 = (uint *)local_58;
          uStack_84 = local_30;
          (**(code **)in_EAX[0x35c])();
          return 0;
        }
        break;
      case 2:
        pcStack_78 = (char *)0x100524;
        FUN_000ff9f8();
        puVar6 = unaff_EBX + 1;
        puVar8 = &local_24;
        for (uVar2 = extraout_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        for (uVar2 = extraout_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
        }
        pcStack_78 = (char *)0x10054a;
        FUN_000ff308();
        puVar6 = unaff_EBX + 1;
        puVar8 = &local_2c;
        for (uVar2 = extraout_ECX_00 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        for (uVar2 = extraout_ECX_00 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
        }
        ppcVar4 = (char **)local_74;
        if (*(int *)(in_EAX[0x35c] + 4) != 0) {
          pcStack_78 = (char *)in_EAX[0x35e];
          uStack_7c = local_2c;
          puStack_80 = (uint *)0x100579;
          (**(code **)(in_EAX[0x35c] + 4))();
          return 0;
        }
        break;
      case 3:
        break;
      case 4:
        if (*(int *)(in_EAX[0x35c] + 0x20) != 0) {
          pcStack_78 = (char *)in_EAX[0x35e];
          uStack_7c = local_34;
          puStack_80 = unaff_EBX + 1;
          uStack_84 = *in_EAX;
          (**(code **)(in_EAX[0x35c] + 0x20))();
          return 0;
        }
        pcStack_78 = s_WARNING_network__ServiceProvider_00171b64;
        uStack_7c = 0x1005ce;
        FUN_000efd90();
        return 0;
      case 5:
        puVar6 = unaff_EBX + 1;
        puVar8 = &local_2c;
        for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
        }
        ppcVar4 = (char **)local_74;
        if (*(int *)(in_EAX[0x35c] + 0x14) != 0) {
          pcStack_78 = (char *)in_EAX[0x35e];
          uStack_7c = local_30;
          puStack_80 = (uint *)local_2c;
          uStack_84 = 0x100627;
          (**(code **)(in_EAX[0x35c] + 0x14))();
          return 0;
        }
        break;
      case 6:
        puVar6 = unaff_EBX + 1;
        puVar8 = &local_2c;
        for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(char *)puVar8 = (char)*puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar10 * -2 + 1);
          puVar8 = (uint *)((int)puVar8 + (uint)bVar10 * -2 + 1);
        }
        ppcVar4 = (char **)local_74;
        if (*(int *)(in_EAX[0x35c] + 0x18) != 0) {
          pcStack_78 = (char *)in_EAX[0x35e];
          uStack_7c = local_30;
          puStack_80 = (uint *)local_2c;
          uStack_84 = 0x10067d;
          (**(code **)(in_EAX[0x35c] + 0x18))();
          return 0;
        }
        break;
      default:
        pcStack_78 = s_WARNING_network__ServiceProvider_00171bb9;
        uStack_7c = 0x100699;
        FUN_000efd90();
        return 0;
      case 8:
        ppcVar4 = (char **)local_74;
        if (*(int *)(in_EAX[0x35c] + 0x24) != 0) {
          uStack_7c = local_2c;
          puStack_80 = (uint *)0x1003a5;
          (**(code **)(in_EAX[0x35c] + 0x24))();
          ppcVar4 = (char **)&uStack_7c;
        }
      }
      *(undefined1 *)((int)ppcVar4 + 0x60) = 0;
      return *(undefined1 *)((int)ppcVar4 + 0x60);
    }
    pcStack_78 = (char *)0x1006db;
    cVar1 = (**(code **)(in_EAX[0x35f] + 0x30))();
    if (cVar1 == '\0') {
      return 0;
    }
    pcStack_78 = s_WARNING_network__ServiceProvider_00171c01;
    uStack_7c = 0x1006f9;
    FUN_000efd90();
  }
  return 0xff;
}

/******************************************************************************
 * Function : dk_DecodeMessageStub_100718 (Ghidra: FUN_00100718)
 * Prototype: undefined1 dk_DecodeMessageStub_100718(void);
 * Address  : 0x100718 (Size: 272 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr'
 * Callers  : 1 -> 0x11eaf8
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x171557: "  WARNING network: ServiceProvider::DecodeMessageStub() NULL ptr\n"
 *   - 0x171c46: "  WARNING network: ServiceProvider::BroadcastSystemMessage() invalid MessageType: %02X\n"
 *   - 0x171c9e: "  WARNING network: ServiceProvider::BroadcastSystemMessage() failure on SendMessage\n"
 ******************************************************************************/
undefined1 FUN_00100718(void)

{
  char cVar1;
  int *in_EAX;
  undefined1 extraout_CH;
  int iVar2;
  undefined4 *in_EDX;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte bVar6;
  undefined8 uVar7;
  int local_28;
  uint local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  byte local_18;
  
  bVar6 = 0;
  local_1c = 0;
  local_20 = in_EDX;
  if (in_EDX == (undefined4 *)0x0) {
    uVar7 = FUN_000efd90(s_WARNING_network__ServiceProvider_00171557);
  }
  else {
    uVar7 = 0;
    if (&stack0x00000000 != (undefined1 *)0x18) {
      uVar7 = 0;
      local_18 = (byte)((uint)*in_EDX >> 0x18);
    }
  }
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  if ((local_18 == 0) || ((1 < local_18 && (local_18 != 2)))) {
    iVar3 = 1;
  }
  else {
    puVar4 = local_20 + 1;
    piVar5 = &local_28;
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)piVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      piVar5 = (undefined4 *)((int)piVar5 + (uint)bVar6 * -2 + 1);
    }
  }
  if (iVar3 == 0) {
    if (in_EAX[0x1eb] != 0) {
      local_24 = 0;
      piVar5 = in_EAX;
      do {
        if (((*(int *)((int)piVar5 + 0x7b1) != *in_EAX) &&
            (*(int *)((int)piVar5 + 0x7b1) != local_28)) &&
           (cVar1 = (**(code **)(in_EAX[0x35f] + 0x30))(), cVar1 != '\0')) {
          local_1c = 0xff;
          FUN_000efd90(s_WARNING_network__ServiceProvider_00171c9e);
        }
        piVar5 = (int *)((int)piVar5 + 0x2d);
        local_24 = local_24 + 1;
      } while (local_24 < (uint)in_EAX[0x1eb]);
    }
  }
  else {
    FUN_000efd90(s_WARNING_network__ServiceProvider_00171c46,*(undefined1 *)local_20);
    local_1c = extraout_CH;
  }
  return local_1c;
}

/******************************************************************************
 * Function : dk_EnumeratePlayersForSessionRunning_100828 (Ghidra: FUN_00100828)
 * Prototype: undefined1 dk_EnumeratePlayersForSessionRunning_100828(void);
 * Address  : 0x100828 (Size: 128 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: ServiceProvider::EnumeratePlayersForSessionRunni'
 * Callers  : 1 -> 0x104d44
 * Callees  : 2 -> 0xefd90, 0xffb54
 * Strings  :
 *   - 0x171cf3: "  WARNING network: ServiceProvider::EnumeratePlayersForSessionRunning() failure on EnumeratePlayers()\n"
 *   - 0x171d5a: "  WARNING network: ServiceProvider::EnumeratePlayersForSessionRunning() failure on LookForSystemMessages()\n"
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00100828(void)

{
  char cVar1;
  int in_EAX;
  undefined4 unaff_EBX;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int aiStack_28 [2];
  char *local_20;
  int local_1c;
  char local_18;
  undefined1 local_14;
  
  piVar5 = aiStack_28 + 3;
  local_14 = 0xff;
  local_20 = (char *)0x100845;
  cVar1 = FUN_000ffb54();
  if (cVar1 == '\0') {
    local_18 = cVar1;
    uVar2 = 0;
    if (*(int *)(in_EAX + 0x7ac) != 0) {
      iVar6 = in_EAX + 0x7b0;
      piVar3 = aiStack_28 + 3;
      do {
        piVar3[-1] = unaff_EBX;
        piVar5 = piVar3 + -2;
        piVar3[-2] = iVar6;
        uVar2 = uVar2 + 1;
        piVar3[-3] = 0x10086d;
        (*(code *)*piVar3)();
        iVar6 = iVar6 + 0x2d;
        piVar3 = piVar3 + -2;
      } while (uVar2 < *(uint *)(in_EAX + 0x7ac));
    }
    if ((char)piVar5[1] == '\0') {
      *(undefined1 *)(piVar5 + 2) = 0;
      goto LAB_0010089c;
    }
    piVar4 = piVar5 + 0xffffffff;
    piVar5[0xffffffff] = (int)s_WARNING_network__ServiceProvider_00171cf3;
  }
  else {
    piVar4 = aiStack_28 + 2;
    local_20 = s_WARNING_network__ServiceProvider_00171d5a;
  }
  *(undefined4 *)((int)piVar4 + -4) = 0x100899;
  FUN_000efd90();
  piVar5 = (int *)((int)piVar4 + 4);
LAB_0010089c:
  return *(undefined1 *)((int)piVar5 + 8);
}

/******************************************************************************
 * Function : dk_GenericSerialInit_1008d0 (Ghidra: FUN_001008d0)
 * Prototype: undefined8 dk_GenericSerialInit_1008d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
 * Address  : 0x1008d0 (Size: 342 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: GenericSerialInit() failure on ServiceProvider::'
 * Callers  : 1 -> 0xed4e0
 * Callees  : 4 -> 0xe6a10, 0xed020, 0xefd90, 0x11e174
 * Strings  :
 *   - 0x171dfc: "  WARNING network: GenericSerialInit() failure on ServiceProvider::Init()\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_001008d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uVar4;
  undefined1 extraout_CL_01;
  undefined4 *puVar5;
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
  
  local_28 = DAT_003d97d0;
  local_24 = &DAT_001747e8;
  local_20 = 0;
  DAT_003d97d0 = &local_28;
  if (DAT_003dd8a0 != 0) {
    uStack_2c = 0x100912;
    DAT_003d97d0 = &local_28;
    (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x1c))();
    if (DAT_003dd8a0 != 0) {
      uStack_2c = 0x100928;
      (*(code *)**(undefined4 **)(DAT_003dd8a0 + 0xd7c))();
    }
    DAT_003dd8a0 = 0;
  }
  uStack_2c = 0x100946;
  FUN_000e6a10();
  uStack_2c = 0x10095c;
  FUN_000e6a10();
  DAT_0019556c = 0xfa;
  PTR_FUN_000ef7a8_00195584 = FUN_00101074;
  _DAT_003dfa3c = 0;
  DAT_003dfa40 = 0;
  DAT_003e024c = 0;
  DAT_003e0250 = 0;
  DAT_003dd89c = 0;
  DAT_003dd8ac = 1;
  PTR_FUN_000ef14c_00195580 = FUN_00100e14;
  if (param_5 != 0) {
    *(undefined4 *)(param_5 + 0xc) = 1;
  }
  uStack_2c = 0x1009ae;
  iVar2 = FUN_000ed020();
  iVar3 = 0;
  uVar4 = extraout_CL;
  if (iVar2 != 0) {
    local_20 = 1;
    uStack_2c = 0x1009c8;
    local_1c = iVar2;
    iVar3 = FUN_0011e174();
    local_20 = 0;
    uVar4 = extraout_CL_00;
  }
  puVar5 = &local_28;
  DAT_003dd8a0 = iVar3;
  if (iVar3 != 0) {
    uStack_2c = 0;
    ppuStack_30 = &PTR_FUN_000ef460_00195570;
    uStack_34 = 0;
    uStack_38 = param_4;
    uStack_3c = param_3;
    uStack_40 = param_2;
    puVar5 = &local_44;
    local_44 = param_1;
    cVar1 = (**(code **)(*(int *)(iVar3 + 0xd7c) + 0x18))();
    if (cVar1 == '\0') {
      uVar4 = 0;
      puVar5 = &local_44;
    }
    else {
      FUN_000efd90(s_WARNING_network__GenericSerialIn_00171dfc);
      uVar4 = extraout_CL_01;
    }
  }
  DAT_003d97d0 = (undefined4 *)*puVar5;
  return CONCAT44(puVar5[7],CONCAT31((int3)((uint)*puVar5 >> 8),uVar4));
}

/******************************************************************************
 * Function : dk_StartTwoPlayerExchange_100a28 (Ghidra: FUN_00100a28)
 * Prototype: ulonglong dk_StartTwoPlayerExchange_100a28(void);
 * Address  : 0x100a28 (Size: 398 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: StartTwoPlayerExchange() failure on SP::Send()'
 * Callers  : 1 -> 0xee694
 * Callees  : 5 -> 0xeb818, 0xefd90, 0xff894, 0xffb54, 0x1002dc
 * Strings  :
 *   - 0x171e47: "  WARNING network: StartTwoPlayerExchange() failure on SP::Send()\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00100a28(void)

{
  char cVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_EDX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  if ((&DAT_003dd8b4)[DAT_003e024c * 0xb] == 0) {
    FUN_000ffb54();
  }
  DAT_003dd890 = 0;
  if ((&DAT_003dd8b4)[DAT_003e024c * 0xb] != 0) {
    FUN_000ffb54();
    FUN_000ffb54();
  }
  uVar4 = DAT_003dd898;
  puVar5 = in_EAX;
  puVar6 = (undefined4 *)(DAT_003dd888 * DAT_003dd898 + DAT_003dd894);
  for (uVar3 = DAT_003dd898 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
  }
  uVar4 = DAT_003e024c * 0xb;
  if ((&DAT_003dd8b4)[DAT_003e024c * 0xb] != 0) {
    FUN_000ff894();
    cVar1 = FUN_001002dc();
    if (cVar1 != '\0') {
      uVar2 = FUN_000efd90(s_WARNING_network__StartTwoPlayerE_00171e47);
      return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),0xff));
    }
    _DAT_003dfa3c = FUN_000eb818();
    uVar3 = DAT_003dd898;
    if (DAT_003dde30 == 0) {
      DAT_003dfa40 = DAT_0019556c;
    }
    else {
      DAT_003dfa40 = DAT_003dde30;
    }
    puVar5 = &DAT_003dfa44;
    puVar6 = &DAT_003dfe48;
    for (uVar4 = DAT_003dd898 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar4 = DAT_003dd898, uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar7 * -2 + 1);
    }
    puVar5 = &DAT_003dfa44;
    for (uVar3 = DAT_003dd898 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *in_EAX;
      in_EAX = in_EAX + (uint)bVar7 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)in_EAX;
      in_EAX = (undefined4 *)((int)in_EAX + (uint)bVar7 * -2 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar7 * -2 + 1);
    }
  }
  return CONCAT44(in_EDX,uVar4) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : dk_CompleteTwoPlayerExchange_100bb8 (Ghidra: FUN_00100bb8)
 * Prototype: undefined8 dk_CompleteTwoPlayerExchange_100bb8(void);
 * Address  : 0x100bb8 (Size: 601 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: CompleteTwoPlayerExchange() failure on SP::Send('
 * Callers  : 1 -> 0xee694
 * Callees  : 7 -> 0xeb818, 0xefd90, 0xff628, 0xff630, 0xff6a0, 0xffb54, 0x1002dc
 * Strings  :
 *   - 0x171e8a: "Timed out (%d) waiting for seq %d - %d ms\n"
 *   - 0x171eb5: "Retries = %d\n"
 *   - 0x171f13: "Sent delete player message\n"
 *   - 0x171f2f: "  WARNING network: CompleteTwoPlayerExchange() failure on SP::Send()\n"
 *   - 0x171ec3: "  WARNING network: CompleteTwoPlayerExchange() deletePlayerBuffer is too small\n"
 *   - 0x171f75: "  WARNING network: CompleteTwoPlayerExchange() requestExchangeDataBuffer is too small\n"
 *   - 0x171fcc: "Requesting resend of packet (%d)\n"
 *   - 0x171fee: "  WARNING network: CompleteTwoPlayerExchange() failure on SP::Send()\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00100bb8(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  undefined4 in_EDX;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 local_1c;
  
  local_1c = 0xff;
  uVar4 = DAT_003e024c * 0xb;
  uVar6 = 1;
  bVar1 = true;
  if ((&DAT_003dd8b4)[DAT_003e024c * 0xb] == 0) {
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    iVar5 = -3;
    while (bVar1) {
      FUN_000ffb54();
      if (DAT_003dd890 == 0) {
        iVar3 = FUN_000eb818();
        uVar4 = iVar3 - _DAT_003dfa3c;
        if ((int)uVar4 < 0) {
          uVar4 = -uVar4;
        }
        if (DAT_003dfa40 < uVar4) {
          FUN_000efd90(s_Timed_out___d__waiting_for_seq___00171e8a,extraout_ECX_00,DAT_003dd89c,
                       DAT_003dfa40);
          iVar5 = iVar5 + 1;
          FUN_000efd90(s_Retries____d_00171eb5,extraout_ECX_01 + 1);
          if (extraout_ECX_02 < 0x65) {
            uVar4 = FUN_000ff628();
            if (8 < uVar4) {
              pcVar7 = s_WARNING_network__CompleteTwoPlay_00171f75;
              goto LAB_00100d83;
            }
            FUN_000ff6a0();
            FUN_000efd90(s_Requesting_resend_of_packet___d__00171fcc,DAT_003dd89c);
            cVar2 = FUN_001002dc();
            if (cVar2 != '\0') {
              pcVar7 = s_WARNING_network__CompleteTwoPlay_00171fee;
              goto LAB_00100d83;
            }
          }
          else {
            uVar4 = FUN_000ff628();
            if (uVar4 < 9) {
              FUN_000ff630();
              cVar2 = FUN_001002dc();
              if (cVar2 == '\0') {
                pcVar7 = s_Sent_delete_player_message_00171f13;
              }
              else {
                pcVar7 = s_WARNING_network__CompleteTwoPlay_00171f2f;
              }
              uVar4 = FUN_000efd90(pcVar7);
              goto LAB_00100e04;
            }
            pcVar7 = s_WARNING_network__CompleteTwoPlay_00171ec3;
LAB_00100d83:
            FUN_000efd90(pcVar7);
          }
          _DAT_003dfa3c = FUN_000eb818();
          DAT_003dfa40 = DAT_003dde30;
          if ((DAT_003dde30 == 0) && (DAT_003dfa40 = DAT_0019556c, 2 < extraout_ECX_03)) {
            if (extraout_ECX_03 == 3) {
              DAT_003dfa40 = DAT_0019556c * 2;
            }
            else {
              DAT_003dfa40 = DAT_0019556c * 4 * iVar5;
            }
          }
        }
      }
      else {
        uVar6 = 0;
        bVar1 = false;
        if (extraout_ECX == 0) {
          iVar3 = FUN_000eb818();
          uVar4 = iVar3 - _DAT_003dfa3c;
          if ((int)uVar4 < 0) {
            uVar4 = -uVar4;
          }
          if ((DAT_003dd8a4 == 0) || (DAT_003dfa34 < uVar4)) {
            DAT_003dfa34 = uVar4;
          }
          DAT_003dd8a4 = DAT_003dd8a4 + 1;
          if (0x31 < DAT_003dd8a4) {
            DAT_0019556c = DAT_003dfa34 * 3;
            DAT_003dd8a4 = 0;
            if (DAT_0019556c < 0xfa) {
              DAT_0019556c = 0xfa;
            }
          }
        }
        local_1c = 0;
      }
      uVar4 = DAT_003e024c * 0x2c;
      if ((&DAT_003dd8b4)[DAT_003e024c * 0xb] == 0) {
        uVar6 = 0;
        bVar1 = false;
        local_1c = 0;
      }
    }
    if ((DAT_003dd89c != 0xf) && (DAT_003dd89c = DAT_003dd89c + 1, 0xe < DAT_003dd89c)) {
      DAT_003dd89c = uVar6;
    }
LAB_00100e04:
    uVar4 = CONCAT31((int3)(uVar4 >> 8),local_1c);
  }
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : dk_TwoPlayerCallback_100e14 (Ghidra: FUN_00100e14)
 * Prototype: int dk_TwoPlayerCallback_100e14(undefined4 param_1,int param_2,int param_3);
 * Address  : 0x100e14 (Size: 605 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: TwoPlayerCallback() Unexpected sequence number: '
 * Callers  : 0 -> 
 * Callees  : 6 -> 0xefd90, 0xff628, 0xff6a0, 0xff894, 0xff8c0, 0x1002dc
 * Strings  :
 *   - 0x172034: "  WARNING network: TwoPlayerCallback() Unexpected sequence number: Got %d, expected %d\n"
 *   - 0x17208c: "  WARNING network: CompleteTwoPlayerExchange() requestExchangeDataBuffer is too small\n"
 *   - 0x1720e3: "Requesting resend of seq %d because we received the next one\n"
 *   - 0x172121: "  WARNING network: CompleteTwoPlayerExchange() failure on SP::Send()\n"
 *   - 0x172167: "  WARNING network: TwoPlayerCallback() invalid length: %d\n"
 *   - 0x1721a2: "  WARNING network: TwoPlayerCallback() Unexpected sequence number: Got %d, expected %d\n"
 *   - 0x1721fa: "  WARNING network: CompleteTwoPlayerExchange() requestExchangeDataBuffer is too small\n"
 *   - 0x172251: "Requesting resend of seq %d because we received the next one\n"
 *   - 0x17228f: "  WARNING network: CompleteTwoPlayerExchange() failure on SP::Send()\n"
 *   - 0x1722d5: "  WARNING network: TwoPlayerCallback() invalid length: %d\n"
 ******************************************************************************/
int FUN_00100e14(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (DAT_003dd88c == DAT_003dd8a8) {
    if (param_2 != DAT_003dd898) {
      FUN_000efd90(s_WARNING_network__TwoPlayerCallba_00172167,param_2);
      return 0;
    }
    if ((param_3 == DAT_003dd89c) || (param_3 == 0xf)) {
      DAT_003dd890 = 1;
      iVar4 = DAT_003dd894 + DAT_003dd898;
    }
    else {
      FUN_000efd90(s_WARNING_network__TwoPlayerCallba_00172034,param_3,DAT_003dd89c);
      if (param_3 == 0) {
        param_3 = 0xe;
      }
      else {
        param_3 = param_3 + -1;
      }
      if (param_3 == DAT_003dd89c) {
        uVar3 = FUN_000ff628();
        if (8 < uVar3) {
          FUN_000efd90(s_WARNING_network__CompleteTwoPlay_0017208c);
          return 0;
        }
        FUN_000ff6a0();
        FUN_000efd90(s_Requesting_resend_of_seq__d_beca_001720e3,DAT_003dd89c);
        cVar2 = FUN_001002dc();
        if (cVar2 != '\0') {
          FUN_000efd90(s_WARNING_network__CompleteTwoPlay_00172121);
          return 0;
        }
      }
    }
  }
  else if (param_2 == DAT_003dd898) {
    bVar1 = true;
    if (DAT_003dd89c == 0xf) {
      DAT_003dd89c = param_3;
      FUN_000ff8c0();
      FUN_000ff894();
    }
    else if (param_3 != DAT_003dd89c) {
      bVar1 = false;
    }
    if (bVar1) {
      DAT_003dd890 = 1;
      return DAT_003dd894;
    }
    FUN_000efd90(s_WARNING_network__TwoPlayerCallba_001721a2,param_3,DAT_003dd89c);
    if (param_3 == 0) {
      param_3 = 0xe;
    }
    else {
      param_3 = param_3 + -1;
    }
    if (param_3 == DAT_003dd89c) {
      uVar3 = FUN_000ff628();
      if (8 < uVar3) {
        FUN_000efd90(s_WARNING_network__CompleteTwoPlay_001721fa);
        return 0;
      }
      FUN_000ff6a0();
      FUN_000efd90(s_Requesting_resend_of_seq__d_beca_00172251,DAT_003dd89c);
      cVar2 = FUN_001002dc();
      if (cVar2 != '\0') {
        FUN_000efd90(s_WARNING_network__CompleteTwoPlay_0017228f);
        return 0;
      }
    }
  }
  else {
    FUN_000efd90(s_WARNING_network__TwoPlayerCallba_001722d5,param_2);
  }
  return iVar4;
}

/******************************************************************************
 * Function : dk_TwoPlayerReqExDataMsgCallback_101074 (Ghidra: FUN_00101074)
 * Prototype: void dk_TwoPlayerReqExDataMsgCallback_101074(undefined4 param_1,int param_2);
 * Address  : 0x101074 (Size: 227 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: TwoPlayerReqExDataMsgCallback() could not find r'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xeb818, 0xefd90, 0xff8c0, 0x1002dc
 * Strings  :
 *   - 0x172310: "Received Resend Request for seq no %d\n"
 *   - 0x172337: "  WARNING network: TwoPlayerReqExDataMsgCallback() could not find requested message()\n"
 *   - 0x17238e: "Resending lastMessage for seq no %d as well\n"
 *   - 0x1723bb: "Resending lastMessage for seq no %d as well\n"
 *   - 0x1723e8: "  WARNING network: TwoPlayerReqExDataMsgCallback() failure on SP::Send()\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101074(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int local_14;
  
  puVar2 = (undefined4 *)0x0;
  FUN_000efd90(s_Received_Resend_Request_for_seq_n_00172310,param_2);
  if (DAT_003dd89c == 0xf) {
    puVar2 = &DAT_003dfa44;
  }
  else {
    FUN_000ff8c0();
    if (param_2 == local_14) {
      puVar2 = &DAT_003dfa44;
    }
    FUN_000ff8c0();
    if (param_2 == local_14) {
      puVar2 = &DAT_003dfe48;
    }
  }
  if (puVar2 == (undefined4 *)0x0) {
    pcVar3 = s_WARNING_network__TwoPlayerReqExD_00172337;
  }
  else {
    cVar1 = FUN_001002dc();
    if (cVar1 == '\0') {
      if (puVar2 == &DAT_003dfe48) {
        FUN_001002dc();
        if (param_2 == 0xe) {
          FUN_000efd90(s_Resending_lastMessage_for_seq_no_0017238e,0);
        }
        else {
          FUN_000efd90(s_Resending_lastMessage_for_seq_no_001723bb,param_2 + 1);
        }
      }
      goto LAB_00101143;
    }
    pcVar3 = s_WARNING_network__TwoPlayerReqExD_001723e8;
  }
  FUN_000efd90(pcVar3);
LAB_00101143:
  _DAT_003dfa3c = FUN_000eb818();
  return;
}

/******************************************************************************
 * Function : dk_GenericModemInit_101158 (Ghidra: FUN_00101158)
 * Prototype: undefined8 dk_GenericModemInit_101158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5);
 * Address  : 0x101158 (Size: 350 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: GenericModemInit() failure on ServiceProvider::I'
 * Callers  : 1 -> 0xed4e0
 * Callees  : 4 -> 0xe6a10, 0xed020, 0xefd90, 0x11f470
 * Strings  :
 *   - 0x172432: "  WARNING network: GenericModemInit() failure on ServiceProvider::Init()\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00101158(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 uVar4;
  undefined1 extraout_CL_01;
  undefined4 *puVar5;
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
  
  local_28 = DAT_003d97d0;
  local_24 = &DAT_001747f4;
  local_20 = 0;
  uStack_2c = 0x101196;
  DAT_003d97d0 = &local_28;
  FUN_000e6a10();
  uStack_2c = 0x1011a9;
  FUN_000e6a10();
  _DAT_003dfa3c = 0;
  DAT_003dfa40 = 0;
  DAT_003e024c = 0;
  DAT_003e0250 = 0;
  DAT_003dd89c = 0;
  DAT_0019556c = 0xfa;
  if (DAT_003dd8a0 != 0) {
    uStack_2c = 0x1011e7;
    (**(code **)(*(int *)(DAT_003dd8a0 + 0xd7c) + 0x1c))();
    if (DAT_003dd8a0 != 0) {
      uStack_2c = 0x1011fd;
      (*(code *)**(undefined4 **)(DAT_003dd8a0 + 0xd7c))();
    }
    DAT_003dd8a0 = 0;
  }
  DAT_003dd8ac = 1;
  PTR_FUN_000ef14c_00195580 = FUN_00100e14;
  PTR_FUN_000ef7a8_00195584 = FUN_00101074;
  if (param_5 != 0) {
    *(undefined4 *)(param_5 + 0xc) = 2;
  }
  uStack_2c = 0x10123e;
  iVar2 = FUN_000ed020();
  iVar3 = 0;
  uVar4 = extraout_CL;
  if (iVar2 != 0) {
    local_20 = 1;
    uStack_2c = 0x101258;
    local_1c = iVar2;
    iVar3 = FUN_0011f470();
    local_20 = 0;
    uVar4 = extraout_CL_00;
  }
  puVar5 = &local_28;
  DAT_003dd8a0 = iVar3;
  if (iVar3 != 0) {
    uStack_2c = 0;
    ppuStack_30 = &PTR_FUN_000ef460_00195570;
    uStack_34 = 0;
    uStack_38 = param_4;
    uStack_3c = param_3;
    uStack_40 = param_2;
    puVar5 = &local_44;
    local_44 = param_1;
    cVar1 = (**(code **)(*(int *)(iVar3 + 0xd7c) + 0x18))();
    if (cVar1 == '\0') {
      uVar4 = 0;
      puVar5 = &local_44;
    }
    else {
      FUN_000efd90(s_WARNING_network__GenericModemIni_00172432);
      uVar4 = extraout_CL_01;
    }
  }
  DAT_003d97d0 = (undefined4 *)*puVar5;
  return CONCAT44(puVar5[7],CONCAT31((int3)((uint)*puVar5 >> 8),uVar4));
}

/******************************************************************************
 * Function : dk_allocated_fine_handler_size_101360 (Ghidra: FUN_00101360)
 * Prototype: longlong dk_allocated_fine_handler_size_101360(void);
 * Address  : 0x101360 (Size: 2326 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'ALLOCATED FINE HANDLER SIZE = %d'
 * Callers  : 1 -> 0x1032d8
 * Callees  : 8 -> 0xe6a10, 0xe7714, 0xf7786, 0xfed1d, 0xfed45, 0x101fec, 0x102108, 0x103100
 * Strings  :
 *   - 0x17247c: "ALLOCATED FINE HANDLER SIZE = %d\n"
 *   - 0x17249e: "IPXSEND SEG = %x, OFF = %x\n"
 *   - 0x1724ba: "COULDN'T ALLOCATE FOR SEND PACKETS\n"
 *   - 0x1724de: "COULDN'T ALLOCATE FOR BUFFER\n"
 *   - 0x1724fc: "COULDN'T ALLOCATE FOR SAP BUFFER\n"
 *   - 0x17251e: "IPX DRIVER NOT INSTALLED\n"
 *   - 0x172538: "IPX ENTRY = %x\n"
 *   - 0x172548: "COULD NOT FIND FREE VECTOR FROM 0x60 to 0x66\n"
 *   - 0x172576: "FAILED\n"
 *   - 0x17257e: "INITSUCCESSFULL IPX ADDRESS = SEG %x OFF %x\n"
 *   - 0x1725ae: "COULDN'T ALLOCATE FOR DRIVER\n"
 ******************************************************************************/
longlong FUN_00101360(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined2 *extraout_ECX;
  uint in_EDX;
  uint extraout_EDX;
  uint *puVar4;
  undefined4 extraout_EDX_00;
  undefined4 *puVar5;
  char *pcVar6;
  uint *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint *puVar10;
  byte bVar11;
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
  
  bVar11 = 0;
  local_138 = 0x100;
  local_134 = 0x95;
  FUN_000f7786();
  if (local_120 == 0) {
    if (extraout_ECX != (undefined2 *)0x0) {
      *extraout_ECX = local_12c;
    }
    iVar2 = (local_138 & 0xffff) << 4;
  }
  else {
    iVar2 = 0;
  }
  *(int *)(in_EAX + 0x1e) = iVar2;
  if (iVar2 == 0) {
    pcVar6 = s_COULDN_T_ALLOCATE_FOR_DRIVER_001725ae;
    pcVar9 = &DAT_003e0254;
    do {
      cVar1 = *pcVar6;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  else {
    FUN_000e6a10();
    iVar2 = *(int *)(in_EAX + 0x1e) + 0x15f >> 4;
    *(short *)(in_EAX + 0x36) = (short)iVar2;
    *(short *)(in_EAX + 0x38) = (*(short *)(in_EAX + 0x1e) + 0x950) - (short)(iVar2 << 4);
    *(short *)(in_EAX + 0x3a) =
         ((short)*(undefined4 *)(in_EAX + 0x1e) + 0x78) -
         (short)((*(uint *)(in_EAX + 0x1e) >> 4 & 0xffff) << 4);
    *(short *)(in_EAX + 0x3c) =
         ((short)*(undefined4 *)(in_EAX + 0x1e) + 0x80) -
         (short)((*(uint *)(in_EAX + 0x1e) >> 4 & 0xffff) << 4);
    *(undefined4 *)(in_EAX + 0x26) = 0x68;
    puVar5 = &DAT_00150000;
    puVar8 = *(undefined4 **)(in_EAX + 0x1e);
    for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar11 * -2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar11 * -2 + 1);
    }
    puVar5 = &DAT_00195de0;
    puVar8 = (undefined4 *)(*(int *)(in_EAX + 0x1e) + 0x78);
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar11 * -2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar11 * -2 + 1);
    }
    puVar5 = &DAT_00195de8;
    puVar8 = (undefined4 *)(*(int *)(in_EAX + 0x1e) + 0x80);
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + (uint)bVar11 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar11 * -2 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar11 * -2 + 1);
    }
    FUN_00103100(s_ALLOCATED_FINE_HANDLER_SIZE____d_0017247c,*(undefined4 *)(in_EAX + 0x26));
    local_c4 = 0x4d4;
    local_c8 = 0x100;
    local_20 = extraout_EDX;
    FUN_000f7786();
    if (local_b0 == 0) {
      if (&stack0x00000000 != (undefined1 *)0x20) {
        local_20 = local_bc;
      }
      uVar3 = (local_c8 & 0xffff) << 4;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      FUN_000e6a10();
      *(uint *)(in_EAX + 0x2c) = local_20 & 0xffff;
    }
    *(uint *)(in_EAX + 0x16) = uVar3;
    FUN_00103100(s_IPXSEND_SEG____x__OFF____x_0017249e,uVar3 >> 4,0);
    if (*(int *)(in_EAX + 0x16) != 0) {
      local_11c = 0x100;
      local_118 = 0xd;
      FUN_000f7786();
      if (local_104 == 0) {
        if ((undefined2 *)(in_EAX + 0x34) != (undefined2 *)0x0) {
          *(undefined2 *)(in_EAX + 0x34) = local_110;
        }
        iVar2 = (local_11c & 0xffff) << 4;
      }
      else {
        iVar2 = 0;
      }
      *(int *)(in_EAX + 0x22) = iVar2;
      if (iVar2 != 0) {
        local_1c = 0;
        local_e4 = 0x100;
        local_e0 = 0x4d4;
        FUN_000f7786();
        if (local_cc == 0) {
          if (&stack0x00000000 != (undefined1 *)0x1c) {
            local_1c = local_d8;
          }
          iVar2 = (local_e4 & 0xffff) << 4;
        }
        else {
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          FUN_000e6a10();
          *(uint *)(in_EAX + 0x30) = local_1c & 0xffff;
        }
        *(int *)(in_EAX + 0x1a) = iVar2;
        if (iVar2 != 0) {
          FUN_000e6a10();
          local_268 = 0x7a00;
          FUN_000e6a10();
          local_214 = 0x2f;
          local_218 = 0x300;
          FUN_000fed1d();
          local_254 = *(undefined2 *)(in_EAX + 0x36);
          local_256 = *(undefined2 *)(in_EAX + 0x38);
          local_204 = (undefined1 *)local_284;
          FUN_000fed45();
          *(short *)(*(int *)(in_EAX + 0x1e) + 0x8a) = (short)local_284[0];
          *(short *)(*(int *)(in_EAX + 0x1e) + 0x8c) = (short)local_262;
          if ((local_268 & 0xff) == 0xff) {
            puVar4 = (uint *)(*(int *)(in_EAX + 0x1e) + 2);
            local_24 = local_284[0] | local_262 << 0x10;
            puVar7 = &local_24;
            puVar10 = puVar4;
            for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
              puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(char *)puVar10 = (char)*puVar7;
              puVar7 = (uint *)((int)puVar7 + (uint)bVar11 * -2 + 1);
              puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            }
            FUN_00103100(s_IPX_ENTRY____x_00172538,*(undefined1 *)puVar4);
            iVar2 = FUN_00101fec();
            if (iVar2 != 0) {
              FUN_000e7714(&DAT_003e0254,s_INITSUCCESSFULL_IPX_ADDRESS___SE_0017257e,
                           *(undefined2 *)(*(int *)(in_EAX + 0x1e) + 0x8c),
                           *(undefined2 *)(*(int *)(in_EAX + 0x1e) + 0x8a));
              FUN_00103100(&DAT_001725ab,&DAT_003e0254);
              FUN_00102108();
              *(undefined2 *)(in_EAX + 0x46) = 0;
              return (ulonglong)in_EDX << 0x20;
            }
            pcVar6 = s_COULD_NOT_FIND_FREE_VECTOR_FROM_0_00172548;
            pcVar9 = &DAT_003e0254;
            do {
              cVar1 = *pcVar6;
              *pcVar9 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar6[1];
              pcVar6 = pcVar6 + 2;
              pcVar9[1] = cVar1;
              pcVar9 = pcVar9 + 2;
            } while (cVar1 != '\0');
            FUN_00103100(&DAT_003e0254);
            *(undefined4 *)(in_EAX + 0x1e) = 0;
            local_244 = (uint)*(ushort *)(in_EAX + 0x2a);
            local_250 = extraout_EDX_00;
            FUN_000f7786();
            *(undefined2 *)(in_EAX + 0x2a) = 0;
            local_1b8 = (uint)*(ushort *)(in_EAX + 0x2c);
            local_1c4 = 0x101;
            FUN_000f7786();
            *(undefined4 *)(in_EAX + 0x2c) = 0;
            local_164 = (uint)*(ushort *)(in_EAX + 0x34);
            local_170 = 0x101;
            FUN_000f7786();
            *(undefined2 *)(in_EAX + 0x34) = 0;
            local_1f0 = (uint)*(ushort *)(in_EAX + 0x30);
            FUN_000f7786();
            *(undefined4 *)(in_EAX + 0x30) = 0;
            FUN_00103100(s_FAILED_00172576);
            return CONCAT44(in_EDX,1);
          }
          pcVar6 = s_IPX_DRIVER_NOT_INSTALLED_0017251e;
          pcVar9 = &DAT_003e0254;
          do {
            cVar1 = *pcVar6;
            *pcVar9 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar6[1];
            pcVar6 = pcVar6 + 2;
            pcVar9[1] = cVar1;
            pcVar9 = pcVar9 + 2;
          } while (cVar1 != '\0');
          FUN_00103100(&DAT_003e0254);
          *(undefined4 *)(in_EAX + 0x1e) = 0;
          local_a0 = (uint)*(ushort *)(in_EAX + 0x2a);
          local_ac = 0x101;
          FUN_000f7786();
          *(undefined2 *)(in_EAX + 0x2a) = 0;
          local_1d4 = (uint)*(ushort *)(in_EAX + 0x2c);
          local_1e0 = 0x101;
          FUN_000f7786();
          *(undefined4 *)(in_EAX + 0x2c) = 0;
          local_228 = (uint)*(ushort *)(in_EAX + 0x34);
          local_234 = 0x101;
          FUN_000f7786();
          *(undefined2 *)(in_EAX + 0x34) = 0;
          local_68 = (uint)*(ushort *)(in_EAX + 0x30);
          local_74 = 0x101;
          FUN_000f7786();
          *(undefined4 *)(in_EAX + 0x30) = 0;
          return CONCAT44(in_EDX,1);
        }
        pcVar6 = s_COULDN_T_ALLOCATE_FOR_SAP_BUFFER_001724fc;
        pcVar9 = &DAT_003e0254;
        do {
          cVar1 = *pcVar6;
          *pcVar9 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar9[1] = cVar1;
          pcVar9 = pcVar9 + 2;
        } while (cVar1 != '\0');
        FUN_00103100(&DAT_003e0254);
        *(undefined4 *)(in_EAX + 0x1e) = 0;
        local_180 = (uint)*(ushort *)(in_EAX + 0x2a);
        local_18c = 0x101;
        FUN_000f7786();
        *(undefined2 *)(in_EAX + 0x2a) = 0;
        local_f4 = (uint)*(ushort *)(in_EAX + 0x2c);
        local_100 = 0x101;
        FUN_000f7786();
        *(undefined4 *)(in_EAX + 0x2c) = 0;
        local_4c = (uint)*(ushort *)(in_EAX + 0x34);
        local_58 = 0x101;
        FUN_000f7786();
        *(undefined2 *)(in_EAX + 0x34) = 0;
        return CONCAT44(in_EDX,1);
      }
      pcVar6 = s_COULDN_T_ALLOCATE_FOR_BUFFER_001724de;
      pcVar9 = &DAT_003e0254;
      do {
        cVar1 = *pcVar6;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar6[1];
        pcVar6 = pcVar6 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      FUN_00103100(&DAT_003e0254);
      *(undefined4 *)(in_EAX + 0x1e) = 0;
      local_84 = (uint)*(ushort *)(in_EAX + 0x2a);
      local_90 = 0x101;
      FUN_000f7786();
      *(undefined2 *)(in_EAX + 0x2a) = 0;
      local_19c = (uint)*(ushort *)(in_EAX + 0x2c);
      local_1a8 = 0x101;
      FUN_000f7786();
      *(undefined4 *)(in_EAX + 0x2c) = 0;
      return CONCAT44(in_EDX,1);
    }
    pcVar6 = s_COULDN_T_ALLOCATE_FOR_SEND_PACKE_001724ba;
    pcVar9 = &DAT_003e0254;
    do {
      cVar1 = *pcVar6;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    FUN_00103100(&DAT_003e0254);
    *(undefined4 *)(in_EAX + 0x1e) = 0;
    local_148 = (uint)*(ushort *)(in_EAX + 0x2a);
    local_154 = 0x101;
    FUN_000f7786();
    *(undefined2 *)(in_EAX + 0x2a) = 0;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_network_node_102108 (Ghidra: FUN_00102108)
 * Prototype: undefined4 dk_network_node_102108(void);
 * Address  : 0x102108 (Size: 346 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'NETWORK %x%x%x%x
NODE %02x%02x%02x%02x%02x%02x'
 * Callers  : 1 -> 0x101360
 * Callees  : 4 -> 0xe6a10, 0xfed1d, 0xfed45, 0x103100
 * Strings  :
 *   - 0x172638: "NETWORK %x%x%x%x\nNODE %02x%02x%02x%02x%02x%02x\n"
 *   - 0x172668: "RET = %x\n"
 ******************************************************************************/
undefined4 FUN_00102108(void)

{
  int in_EAX;
  ushort extraout_CX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
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
  
  bVar4 = 0;
  local_18 = in_EDX;
  FUN_000e6a10();
  local_64 = 9;
  local_52 = (undefined2)(*(uint *)(in_EAX + 0x22) >> 4);
  local_70 = *(uint *)(in_EAX + 0x22) & 0xf;
  FUN_000e6a10();
  local_3c = (uint)extraout_CX;
  local_40 = 0x300;
  FUN_000fed1d();
  puVar3 = local_18;
  local_44 = *(undefined2 *)(in_EAX + 0x36);
  local_46 = *(undefined2 *)(in_EAX + 0x38);
  local_2c = auStack_74;
  FUN_000fed45();
  puVar2 = *(undefined4 **)(in_EAX + 0x22);
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar4 * -2 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar4 * -2 + 1);
  }
  puVar3 = local_18;
  puVar2 = (undefined4 *)(in_EAX + 0xc);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar4 * -2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar4 * -2 + 1);
  }
  puVar3 = local_18 + 1;
  puVar2 = (undefined4 *)(in_EAX + 0x10);
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  for (iVar1 = 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar4 * -2 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar4 * -2 + 1);
  }
  FUN_00103100(s_NETWORK__x_x_x_x_NODE__02x_02x_0_00172638,*(undefined1 *)(in_EAX + 0xc),
               *(undefined1 *)(in_EAX + 0xd),*(undefined1 *)(in_EAX + 0xe),
               *(undefined1 *)(in_EAX + 0xf),*(undefined1 *)(in_EAX + 0x10),
               *(undefined1 *)(in_EAX + 0x11),*(undefined1 *)(in_EAX + 0x12),
               *(undefined1 *)(in_EAX + 0x13),*(undefined1 *)(in_EAX + 0x14),
               *(undefined1 *)(in_EAX + 0x15));
  FUN_00103100(s_RET____x_00172668,local_58);
  return local_58;
}

/******************************************************************************
 * Function : dk_Init_1031e8 (Ghidra: FUN_001031e8)
 * Prototype: undefined8 dk_Init_1031e8(undefined4 param_1);
 * Address  : 0x1031e8 (Size: 240 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: IPXServiceProvider::Init() failure on Initialise'
 * Callers  : 2 -> 0xed4e0, 0xef8e8
 * Callees  : 4 -> 0xe6a10, 0xe9484, 0xefd90, 0x1032d8
 * Strings  :
 *   - 0x172698: "  WARNING network: IPXServiceProvider::Init() failure on Initialise()\n"
 *   - 0x1726df: "MAX PACKET SIZE = %d\n"
 ******************************************************************************/
undefined8 FUN_001031e8(undefined4 param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  char extraout_DL;
  undefined4 in_EDX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 auStackY_17d8 [509];
  undefined4 auStackY_fe4 [1009];
  undefined1 local_18;
  
  bVar6 = 0;
  *(undefined2 *)(in_EAX + 0x1836) = 0;
  local_18 = 0xff;
  iVar2 = FUN_000e9484();
  *(int *)(extraout_ECX + 0x1597) = iVar2;
  uVar3 = 0;
  cVar1 = extraout_DL;
  if (iVar2 != 0) {
    uVar3 = FUN_000e6a10();
    cVar1 = '\0';
  }
  if (cVar1 == -1) {
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),0xff);
  }
  else {
    cVar1 = FUN_001032d8();
    if (cVar1 == '\0') {
      FUN_000efd90(s_MAX_PACKET_SIZE____d_001726df,0x212);
      *(undefined4 *)(extraout_ECX_01 + 0xd74) = 1;
      puVar4 = (undefined4 *)(extraout_ECX_01 + 0x158b + (uint)bVar6 * -8);
      *(undefined4 *)(extraout_ECX_01 + 0x1587) = param_1;
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = *(undefined4 *)(&stack0x00000008 + (uint)bVar6 * -8);
      *puVar5 = *(undefined4 *)(&stack0x0000000c + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      puVar5[(uint)bVar6 * -2 + 1] =
           *(undefined4 *)
            ((int)(&stack0x0000000c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
            ((uint)bVar6 * -2 + 1) * 4);
      *(undefined2 *)(extraout_ECX_01 + 0x17ed) = 0;
      uVar3 = FUN_000e6a10();
      *(undefined2 *)(extraout_ECX_02 + 0x17ef) = 0;
      *(undefined4 *)(extraout_ECX_02 + 0xdce) = 0;
      *(undefined4 *)(extraout_ECX_02 + 0x1832) = 1;
      local_18 = 0;
    }
    else {
      uVar3 = FUN_000efd90(s_WARNING_network__IPXServiceProvi_00172698);
      *(undefined4 *)(extraout_ECX_00 + 0xd74) = 0;
    }
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),local_18);
  }
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : dk_LbNETWORK_1032d8 (Ghidra: FUN_001032d8)
 * Prototype: undefined1 dk_LbNETWORK_1032d8(void);
 * Address  : 0x1032d8 (Size: 396 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Initialising IPXServiceProvider'
 * Callers  : 1 -> 0x1031e8
 * Callees  : 11 -> 0xe8d4a, 0xefd90, 0xff10c, 0xff18c, 0x101360, 0x101c78, 0x102264, 0x102344, 0x1025c0, 0x102834 ...
 * Strings  :
 *   - 0x1726f5: "  LbNETWORK : Initialising IPXServiceProvider\n"
 *   - 0x172724: "  WARNING network: SERVICE PROVIDER FAILURE\n"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x001033d9) */

undefined1 FUN_001032d8(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 extraout_CL_01;
  int extraout_ECX;
  int extraout_EDX;
  
  FUN_000efd90(s_LbNETWORK___Initialising_IPXServ_001726f5);
  cVar1 = FUN_000ff10c();
  if (cVar1 != '\0') {
    FUN_000efd90(s_WARNING_network__SERVICE_PROVIDE_00172724);
    return extraout_CL_01;
  }
  iVar2 = FUN_00101360();
  if (iVar2 == 0) {
    *(undefined2 *)(in_EAX + 0x1492) = 0;
    iVar2 = FUN_00102264();
    if (iVar2 == 0) {
      uVar3 = FUN_0010293c();
      *(uint *)(in_EAX + 0xdca) = uVar3;
      if (uVar3 != 0) {
        while (uVar3 < *(int *)(in_EAX + 0xdca) + 0x4d40U) {
          FUN_001025c0();
          uVar3 = extraout_ECX + 0x26a;
        }
        if ((DAT_003e02b0 & 1) == 0) {
          DAT_003e02b0 = DAT_003e02b0 | 1;
          DAT_003e02a4 = FUN_000e8d4a();
        }
        if ((DAT_003e02b0 & 2) == 0) {
          DAT_003e02b0 = DAT_003e02b0 | 2;
          DAT_003e02a8 = FUN_000e8d4a();
        }
        DAT_003e02a8 = FUN_000e8d4a();
        DAT_003e02ac = DAT_003e02ac + 1;
        FUN_00102834();
        if (99 < (uint)(extraout_EDX - DAT_003e02a4)) {
          DAT_003e02ac = 0;
          DAT_003e02a4 = extraout_EDX;
        }
        return 0;
      }
      FUN_00102344();
    }
    FUN_00101c78();
    return extraout_CL;
  }
  FUN_000ff18c();
  return extraout_CL_00;
}

/******************************************************************************
 * Function : dk_LbNETWORK_103464 (Ghidra: FUN_00103464)
 * Prototype: undefined8 dk_LbNETWORK_103464(void);
 * Address  : 0x103464 (Size: 196 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Releasing IPXServiceProvider'
 * Callers  : 0 -> 
 * Callees  : 7 -> 0xe6a10, 0xe94b0, 0xefd90, 0xff18c, 0x101c78, 0x102344, 0x1029b8
 * Strings  :
 *   - 0x172751: "  LbNETWORK : Releasing IPXServiceProvider\n"
 *   - 0x17277d: "  WARNING network: IPXServiceProvider::Release() not initialised\n"
 ******************************************************************************/
undefined8 FUN_00103464(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar2;
  int extraout_ECX_03;
  undefined4 in_EDX;
  
  FUN_000efd90(s_LbNETWORK___Releasing_IPXService_00172751);
  if (*(int *)(extraout_ECX + 0xd74) == 0) {
    uVar1 = FUN_000efd90(s_WARNING_network__IPXServiceProvi_0017277d);
    uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),0xff);
  }
  else {
    if (*(int *)(extraout_ECX + 0x7a8) != 0) {
      (**(code **)(*(int *)(extraout_ECX + 0xd7c) + 0xc))();
    }
    FUN_000e6a10();
    *(undefined2 *)(extraout_ECX_00 + 0x17ef) = 0;
    FUN_00102344();
    FUN_00101c78();
    *(undefined4 *)(extraout_ECX_01 + 0xd74) = 0;
    iVar2 = extraout_ECX_01;
    if (*(int *)(extraout_ECX_01 + 0xdca) != 0) {
      FUN_001029b8();
      iVar2 = extraout_ECX_02;
    }
    if (*(int *)(iVar2 + 0x1597) != 0) {
      FUN_000e94b0();
      *(undefined4 *)(extraout_ECX_03 + 0x1597) = 0;
    }
    uVar1 = FUN_000ff18c();
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_Start_103528 (Ghidra: FUN_00103528)
 * Prototype: undefined1 dk_Start_103528(void);
 * Address  : 0x103528 (Size: 671 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: IPXServiceProvider::Start() not initialised'
 * Callers  : 0 -> 
 * Callees  : 9 -> 0xe6a10, 0xe7714, 0xe9484, 0xe94b0, 0xefd90, 0xff1d4, 0xff398, 0xff834, 0x1029e0
 * Strings  :
 *   - 0x1727bf: "  WARNING network: IPXServiceProvider::Start() not initialised\n"
 *   - 0x1727ff: "BU.GI."
 *   - 0x172806: "%x."
 *   - 0x17280a: "%s\n"
 *   - 0x17280e: "  WARNING network: IPXServiceProvider::Start() failure on AddPlayer()\n"
 *   - 0x172855: " COULD NOT ADVERTISE SERVICE\n"
 ******************************************************************************/
undefined1 FUN_00103528(void)

{
  char cVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  uint in_ECX;
  short sVar4;
  int extraout_EDX;
  char *unaff_EBX;
  undefined ***pppuVar5;
  char **ppcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined **ppuStack_34;
  char *pcStack_30;
  char local_2c [12];
  char *local_20;
  
  bVar13 = 0;
  if (in_EAX[0x35d] == 0) {
    pcStack_30 = s_WARNING_network__IPXServiceProvi_001727bf;
    ppuStack_34 = (undefined **)0x103556;
    FUN_000efd90();
    return 0xff;
  }
  if (in_EAX[0x1ea] != 0) {
    pcStack_30 = (char *)0x103574;
    (**(code **)(in_EAX[0x35f] + 0xc))();
  }
  if (0x20 < in_ECX) {
    return 0xff;
  }
  pcStack_30 = (char *)0x1035a7;
  iVar2 = FUN_000e9484();
  *(int *)((int)in_EAX + 0xdce) = iVar2;
  if (iVar2 == 0) {
    return 0xff;
  }
  pcVar7 = &DAT_001727ff; /* 0x1727ff="BU.GI." */
  pcVar9 = (char *)((int)in_EAX + 0x17bd);
  pcStack_30 = (char *)0x1035ce;
  FUN_000e6a10();
  puVar8 = (undefined4 *)((int)in_EAX + 0x1587);
  do {
    cVar1 = *pcVar7;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar9 = (char *)((int)in_EAX + 0x17c3);
  *pcVar9 = '\0';
  local_20 = pcVar9;
  do {
    pcStack_30 = (char *)*puVar8;
    ppuStack_34 = &PTR_DAT_00172806; /* 0x172806="%x." */
    FUN_000e7714(local_2c);
    puVar8 = puVar8 + 1;
    iVar2 = -1;
    pcVar7 = pcVar9;
    do {
      pcVar10 = pcVar7;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar10 = pcVar7 + (uint)bVar13 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    pcVar7 = local_2c;
    do {
      cVar1 = *pcVar7;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  } while (extraout_EDX + 4U < 0x10);
  pcStack_30 = (char *)((int)in_EAX + 0x17bd);
  ppuStack_34 = (undefined **)&DAT_0017280a; /* 0x17280a="%s\n" */
  FUN_000efd90();
  pcStack_30 = (char *)0x103671;
  iVar2 = FUN_001029e0();
  if (iVar2 == 0) {
    *(undefined4 *)((int)in_EAX + 0x151b) = 0;
    *(undefined4 *)((int)in_EAX + 0x151f) = 0;
    puVar11 = (undefined4 *)((int)in_EAX + (uint)bVar13 * -8 + 0x14ef);
    puVar8 = (undefined4 *)((int)in_EAX + (uint)bVar13 * -8 + 0x158b);
    *(undefined4 *)((int)in_EAX + 0x14eb) = *(undefined4 *)((int)in_EAX + 0x1587);
    puVar12 = puVar11 + (uint)bVar13 * -2 + 1;
    puVar3 = puVar8 + (uint)bVar13 * -2 + 1;
    *puVar11 = *puVar8;
    *puVar12 = *puVar3;
    puVar12[(uint)bVar13 * -2 + 1] = puVar3[(uint)bVar13 * -2 + 1];
    *(undefined2 *)((int)in_EAX + 0x1523) = 1;
    *in_EAX = 0;
    puVar8 = in_EAX;
    do {
      puVar3 = (undefined4 *)((int)puVar8 + 1);
      *(undefined1 *)((int)puVar8 + 0x17f2) = 0;
      *(undefined1 *)((int)puVar8 + 0x1812) = 0;
      puVar8 = puVar3;
    } while (puVar3 != in_EAX + 8);
    *(short *)((int)in_EAX + 0x1525) = (short)in_ECX;
    *(undefined1 *)((int)in_EAX + 0x17f1) = 0;
    pcStack_30 = (char *)0x1036df;
    FUN_000ff834();
    *(undefined2 *)((int)in_EAX + 0x17ef) = 1;
    sVar4 = *(short *)((int)in_EAX + 0x1836) + 1;
    *(short *)((int)in_EAX + 0x1836) = sVar4;
    *(short *)((int)in_EAX + 0x1527) = sVar4;
    **(undefined4 **)((int)in_EAX + 0xdce) = 0;
    pcVar9 = (char *)(*(int *)((int)in_EAX + 0xdce) + 4);
    do {
      cVar1 = *unaff_EBX;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = unaff_EBX[1];
      unaff_EBX = unaff_EBX + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    puVar8 = (undefined4 *)((int)in_EAX + 0x1492);
    puVar3 = (undefined4 *)(*(int *)((int)in_EAX + 0xdce) + 0x24);
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar8;
      puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar13 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar13 * -2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar13 * -2 + 1);
    }
    pcStack_30 = (char *)0x10376b;
    FUN_000ff398();
    ppcVar6 = &pcStack_30;
    pcStack_30 = (char *)0x1;
    ppuStack_34 = (undefined **)0x103777;
    cVar1 = FUN_000ff1d4();
    if (cVar1 == '\0') {
      in_EAX[0x1ea] = 1;
      *(undefined4 *)((int)in_EAX + 0x1832) = 1;
      goto LAB_001037ba;
    }
    pppuVar5 = &ppuStack_34;
    ppuStack_34 = (undefined **)s_WARNING_network__IPXServiceProvi_0017280e;
  }
  else {
    pcStack_30 = "hU(\x17";
    FUN_000e94b0();
    pppuVar5 = (undefined ***)&pcStack_30;
    pcStack_30 = s_COULD_NOT_ADVERTISE_SERVICE_00172855;
    *(undefined4 *)((int)in_EAX + 0xdce) = 0;
  }
  *(undefined4 *)((int)pppuVar5 + -4) = 0x1037b7;
  FUN_000efd90();
  ppcVar6 = (char **)((int)pppuVar5 + 4);
LAB_001037ba:
  return *(undefined1 *)((int)ppcVar6 + 0x1c);
}

/******************************************************************************
 * Function : dk_Start_10646c (Ghidra: FUN_0010646c)
 * Prototype: undefined1 dk_Start_10646c(void);
 * Address  : 0x10646c (Size: 1884 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer'
 * Callers  : 2 -> 0x1056a8, 0x108b74
 * Callees  : 12 -> 0xe6a10, 0xe8d4a, 0xefd90, 0xff1d4, 0xff550, 0xff630, 0xff678, 0xff8c0, 0x1023f4, 0x102834 ...
 * Strings  :
 *   - 0x172895: "  WARNING network: IPXServiceProvider::Start() failure on AddPlayer()\n"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x00106740) */

undefined1 FUN_0010646c(void)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  uint extraout_ECX;
  uint uVar7;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar8;
  int iVar9;
  int in_EDX;
  char **ppcVar10;
  undefined1 *puVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  short sVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  byte bVar20;
  char *apcStack_187c [1510];
  int local_e2 [36];
  int local_50;
  int local_28;
  int local_24;
  
  bVar20 = 0;
  ppcVar10 = apcStack_187c + 0x5d3;
  if ((((*(int *)(in_EAX + 0xd74) != 0) &&
       (ppcVar10 = apcStack_187c + 0x5d3, *(int *)(in_EAX + 0x7a8) != 0)) &&
      (ppcVar10 = apcStack_187c + 0x5d3, *(short *)(in_EAX + 0x17ef) == 1)) &&
     (ppcVar10 = apcStack_187c + 0x5d3, *(ushort *)(in_EAX + 0x1523) < *(ushort *)(in_EAX + 0x1525))
     ) {
    apcStack_187c[0x5d2] = (char *)0x106512;
    local_50 = in_EDX;
    iVar5 = FUN_00106bc8();
    if (iVar5 == 1) {
      return 0;
    }
    ppcVar10 = apcStack_187c + 0x5d3;
    if ((*(int *)(in_EAX + 0x1832) == 1) &&
       (ppcVar10 = apcStack_187c + 0x5d3, *(short *)(in_EAX + 0x1527) == *(short *)(local_50 + 0x4c)
       )) {
      local_28 = 0;
      piVar12 = *(int **)(in_EAX + 0xdce);
      while( true ) {
        ppcVar10 = apcStack_187c + 0x5d3;
        if ((int *)(*(int *)(in_EAX + 0xdce) + (uint)*(ushort *)(in_EAX + 0x1525) * 0x38) <= piVar12
           ) goto LAB_00106787;
        if ((short)piVar12[9] == 0) break;
        local_28 = local_28 + 1;
        piVar12 = piVar12 + 0xe;
      }
      piVar18 = (int *)(local_50 + 0x7a);
      piVar17 = piVar12 + 9;
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar17 = *piVar18;
        piVar18 = piVar18 + (uint)bVar20 * -2 + 1;
        piVar17 = piVar17 + (uint)bVar20 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(char *)piVar17 = (char)*piVar18;
        piVar18 = (int *)((int)piVar18 + (uint)bVar20 * -2 + 1);
        piVar17 = (int *)((int)piVar17 + (uint)bVar20 * -2 + 1);
      }
      piVar18 = piVar12 + 1;
      pcVar13 = (char *)(local_50 + 0x5a);
      do {
        cVar4 = *pcVar13;
        *(char *)piVar18 = cVar4;
        if (cVar4 == '\0') break;
        cVar4 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        *(char *)((int)piVar18 + 1) = cVar4;
        piVar18 = (int *)((int)piVar18 + 2);
      } while (cVar4 != '\0');
      apcStack_187c[0x5d2] = (char *)0x0;
      *piVar12 = local_28;
      apcStack_187c[0x5d1] = (char *)0x10660c;
      cVar4 = FUN_000ff1d4();
      if (cVar4 != '\0') {
        apcStack_187c[0x5d1] = s_WARNING_network__IPXServiceProvi_00172895;
        FUN_000efd90();
        return 0xff;
      }
      *(short *)(local_24 + 0x1523) = *(short *)(local_24 + 0x1523) + 1;
      apcStack_187c[0x5d1] = (char *)0x106662;
      FUN_000e6a10();
      puVar14 = (undefined4 *)(local_24 + 0x14df);
      ppcVar10 = apcStack_187c + 0x5d2;
      for (uVar7 = extraout_ECX >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *ppcVar10 = (char *)*puVar14;
        puVar14 = puVar14 + (uint)bVar20 * -2 + 1;
        ppcVar10 = ppcVar10 + (uint)bVar20 * -2 + 1;
      }
      for (uVar7 = extraout_ECX & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)ppcVar10 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + (uint)bVar20 * -2 + 1);
        ppcVar10 = (char **)((int)ppcVar10 + (uint)bVar20 * -2 + 1);
      }
      piVar18 = local_e2;
      for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar18 = *piVar12;
        piVar12 = piVar12 + (uint)bVar20 * -2 + 1;
        piVar18 = piVar18 + (uint)bVar20 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(char *)piVar18 = (char)*piVar12;
        piVar12 = (int *)((int)piVar12 + (uint)bVar20 * -2 + 1);
        piVar18 = (int *)((int)piVar18 + (uint)bVar20 * -2 + 1);
      }
      apcStack_187c[0x5d2] = (char *)0x504e5542;
      apcStack_187c[0x5d1] = (char *)0x8a;
      apcStack_187c[0x5d3] = *(char **)(local_24 + 0x151f);
      FUN_001023f4();
      if ((DAT_003e02b0 & 1) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 1;
        DAT_003e02a4 = FUN_000e8d4a();
      }
      if ((DAT_003e02b0 & 2) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 2;
        DAT_003e02a8 = FUN_000e8d4a();
      }
      DAT_003e02a8 = FUN_000e8d4a();
      DAT_003e02ac = DAT_003e02ac + 1;
      FUN_00102834();
      ppcVar10 = apcStack_187c + 0x5d1;
      if (99 < (uint)(extraout_ECX_00 - DAT_003e02a4)) {
        DAT_003e02ac = 0;
        ppcVar10 = apcStack_187c + 0x5d1;
        DAT_003e02a4 = extraout_ECX_00;
      }
LAB_00106787:
      *(undefined4 *)((int)ppcVar10 + -4) = 0x10679f;
      FUN_000e6a10();
      *(undefined4 *)((int)ppcVar10 + 0x8c) = extraout_ECX_01;
      cVar4 = *(char *)(*(int *)((int)ppcVar10 + 0x110) + 0x17f1);
      iVar5 = *(int *)((int)ppcVar10 + 0x110);
      *(char *)(iVar5 + 0x17f1) = cVar4 + '\x01';
      *(char *)((int)ppcVar10 + 0x96) = cVar4;
      *(undefined4 *)((int)ppcVar10 + 0x90) = *(undefined4 *)(iVar5 + 0x151f);
      iVar9 = *(int *)((int)ppcVar10 + 0x108);
      puVar19 = (undefined4 *)((int)ppcVar10 + ((uint)bVar20 * -2 + 0x27) * 4);
      puVar14 = (undefined4 *)(iVar5 + 0x158b + (uint)bVar20 * -8);
      *(undefined4 *)((int)ppcVar10 + 0x98) = *(undefined4 *)(iVar5 + 0x1587);
      puVar15 = puVar14 + (uint)bVar20 * -2 + 1;
      *puVar19 = *puVar14;
      puVar19[(uint)bVar20 * -2 + 1] = *puVar15;
      (puVar19 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] = puVar15[(uint)bVar20 * -2 + 1];
      iVar5 = *(int *)(*(int *)((int)ppcVar10 + 0x110) + 0xdce);
      *(undefined4 **)((int)ppcVar10 + -4) = (undefined4 *)((int)ppcVar10 + 0xa8);
      puVar14 = (undefined4 *)(iVar5 + iVar9 * 0x38);
      puVar15 = (undefined4 *)((int)ppcVar10 + 0xa8);
      for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + (uint)bVar20 * -2 + 1;
        puVar15 = puVar15 + (uint)bVar20 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
        puVar14 = (undefined4 *)((int)puVar14 + (uint)bVar20 * -2 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar20 * -2 + 1);
      }
      iVar5 = *(int *)((int)ppcVar10 + 0x110);
      bVar3 = false;
      *(int *)((int)ppcVar10 + 0x10c) = iVar5;
      *(undefined4 *)((int)ppcVar10 + 0xfc) = 0;
      uVar7 = *(uint *)(iVar5 + 0x1597);
      do {
        if (*(int *)(iVar5 + 0x1597) + 0x4380U <= uVar7) {
LAB_00106875:
          if (!bVar3) {
            uVar7 = 0;
          }
          uVar2 = *(uint *)((int)ppcVar10 + 0x8c);
          *(uint *)((int)ppcVar10 + 0xe4) = uVar7;
          if (uVar2 < 0x44535542) {
            if (uVar2 == 0x41535542) {
              if (uVar7 != 0) {
                *(undefined4 *)((int)ppcVar10 + -4) = 0x106936;
                FUN_000ff550();
                uVar6 = *(undefined4 *)((int)ppcVar10 + 0x90);
                *(undefined2 *)(uVar7 + 0x216) = 1;
                *(undefined4 *)(uVar7 + 0x218) = uVar6;
              }
              iVar5 = *(int *)(*(int *)((int)ppcVar10 + 0x10c) + 0xdce);
              *(undefined4 **)((int)ppcVar10 + -4) =
                   (undefined4 *)(iVar5 + *(int *)((int)ppcVar10 + 0xa8) * 0x38);
              puVar14 = (undefined4 *)((int)ppcVar10 + 0xa8);
              puVar15 = (undefined4 *)(iVar5 + *(int *)((int)ppcVar10 + 0xa8) * 0x38);
              for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
                *puVar15 = *puVar14;
                puVar14 = puVar14 + (uint)bVar20 * -2 + 1;
                puVar15 = puVar15 + (uint)bVar20 * -2 + 1;
              }
              for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
                puVar14 = (undefined4 *)((int)puVar14 + (uint)bVar20 * -2 + 1);
                puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar20 * -2 + 1);
              }
              *(undefined4 *)((int)ppcVar10 + 0xfc) = 1;
            }
          }
          else if (uVar2 < 0x44535543) {
            if (uVar7 != 0) {
              *(undefined4 *)((int)ppcVar10 + -4) = 0x1068cb;
              FUN_000ff630();
              uVar6 = *(undefined4 *)((int)ppcVar10 + 0x90);
              *(undefined2 *)(uVar7 + 0x216) = 1;
              *(undefined4 *)(uVar7 + 0x218) = uVar6;
            }
            *(undefined4 *)((int)ppcVar10 + 0xfc) = 1;
            *(undefined4 *)((int)ppcVar10 + -4) = 0x106917;
            FUN_000e6a10();
          }
          else if ((0x47445541 < uVar2) && ((uVar2 < 0x47445543 || (uVar2 == 0x4e445542)))) {
            *(undefined4 *)((int)ppcVar10 + -4) = 0x106a2c;
            FUN_000ff8c0();
            if (*(char *)((int)ppcVar10 + 0x118) == '\x02') {
              *(undefined4 *)((int)ppcVar10 + -4) = 0x10699c;
              FUN_000ff678();
              if (*(int *)((int)ppcVar10 + 0xe4) != 0) {
                *(undefined4 *)((int)ppcVar10 + -4) = 0x1069b9;
                FUN_000ff630();
                iVar5 = *(int *)((int)ppcVar10 + 0xe4);
                uVar6 = *(undefined4 *)((int)ppcVar10 + 0x90);
                *(undefined2 *)(iVar5 + 0x216) = 1;
                *(undefined4 *)(iVar5 + 0x218) = uVar6;
              }
              *(undefined4 *)((int)ppcVar10 + -4) = 0x106a00;
              FUN_000e6a10();
              *(undefined4 *)((int)ppcVar10 + 0xfc) = 1;
            }
            else {
              puVar14 = *(undefined4 **)((int)ppcVar10 + 0xe4);
              if (puVar14 != (undefined4 *)0x0) {
                iVar5 = *(int *)((int)ppcVar10 + 0xf4);
                *(undefined4 **)((int)ppcVar10 + -4) = puVar14;
                puVar15 = (undefined4 *)((int)ppcVar10 + 0x98);
                puVar19 = puVar14;
                for (uVar7 = iVar5 + 4U >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar19 = *puVar15;
                  puVar15 = puVar15 + (uint)bVar20 * -2 + 1;
                  puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
                }
                for (uVar7 = iVar5 + 4U & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined1 *)puVar19 = *(undefined1 *)puVar15;
                  puVar15 = (undefined4 *)((int)puVar15 + (uint)bVar20 * -2 + 1);
                  puVar19 = (undefined4 *)((int)puVar19 + (uint)bVar20 * -2 + 1);
                }
                uVar6 = *(undefined4 *)((int)ppcVar10 + 0x90);
                *(undefined2 *)((int)puVar14 + 0x216) = 1;
                puVar14[0x86] = uVar6;
              }
            }
          }
          if (*(int *)((int)ppcVar10 + 0xfc) == 1) {
            if (*(short *)(*(int *)((int)ppcVar10 + 0x10c) + 0x17ef) == 1) {
              uVar1 = *(ushort *)(*(int *)((int)ppcVar10 + 0x10c) + 0x1525);
              uVar6 = *(undefined4 *)(*(int *)((int)ppcVar10 + 0x10c) + 0x151f);
              *(undefined4 *)((int)ppcVar10 + 0x104) = uVar6;
            }
            else {
              uVar1 = *(ushort *)(*(int *)((int)ppcVar10 + 0x10c) + 0x157b);
              *(undefined4 *)((int)ppcVar10 + 0x104) =
                   *(undefined4 *)(*(int *)((int)ppcVar10 + 0x10c) + 0x1575);
              uVar6 = *(undefined4 *)(*(int *)((int)ppcVar10 + 0x10c) + 0x1571);
            }
            *(undefined4 *)((int)ppcVar10 + 0xec) = uVar6;
            sVar16 = 0;
            piVar12 = *(int **)(*(int *)((int)ppcVar10 + 0x10c) + 0xdce);
            *(uint *)((int)ppcVar10 + 0x100) = (uint)uVar1 * 0x38;
            for (; piVar12 < (int *)(*(int *)(*(int *)((int)ppcVar10 + 0x10c) + 0xdce) +
                                    *(int *)((int)ppcVar10 + 0x100)); piVar12 = piVar12 + 0xe) {
              puVar11 = (undefined1 *)ppcVar10;
              if ((short)piVar12[9] != 0) {
                sVar16 = sVar16 + 1;
                puVar11 = (undefined1 *)((int)ppcVar10 + -4);
                *(uint *)((int)ppcVar10 + -4) = (uint)(*(int *)((int)ppcVar10 + 0xec) == *piVar12);
                *(undefined4 *)((int)ppcVar10 + -8) = 0x106b7c;
                FUN_000ff1d4();
              }
              ppcVar10 = (char **)puVar11;
            }
            iVar5 = *(int *)((int)ppcVar10 + 0x10c);
            if (*(short *)(iVar5 + 0x17ef) == 1) {
              *(short *)(iVar5 + 0x1523) = sVar16;
            }
            else {
              *(short *)(iVar5 + 0x1579) = sVar16;
            }
          }
          *(undefined4 *)((int)ppcVar10 + -4) = 0x106bb6;
          FUN_001073e0();
          break;
        }
        if (*(short *)(uVar7 + 0x216) == 0) {
          bVar3 = true;
          goto LAB_00106875;
        }
        uVar7 = uVar7 + 0x21c;
      } while( true );
    }
  }
  return *(undefined1 *)((int)ppcVar10 + 0x114);
}

/******************************************************************************
 * Function : dk_Start_106da4 (Ghidra: FUN_00106da4)
 * Prototype: undefined1 dk_Start_106da4(void);
 * Address  : 0x106da4 (Size: 1594 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: IPXServiceProvider::Start() failure on AddPlayer'
 * Callers  : 1 -> 0x1037c8
 * Callees  : 8 -> 0xe6a10, 0xe8d4a, 0xefd90, 0xff1d4, 0x1023f4, 0x1025c0, 0x1026b0, 0x102834
 * Strings  :
 *   - 0x1728dc: "  WARNING network: IPXServiceProvider::Start() failure on AddPlayer()\n"
 ******************************************************************************/
undefined1 FUN_00106da4(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int *piVar4;
  char extraout_CL;
  char extraout_CL_00;
  char extraout_CL_01;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar12;
  byte *pbVar13;
  int *piVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
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
  
  bVar17 = 0;
  puVar9 = auStack_70;
  local_18 = 0xff;
  local_48 = 0x20;
  local_60 = 0x20;
  local_54 = 0;
  if (*(int *)(in_EAX + 0xd74) != 0) {
    *(undefined4 *)(in_EAX + 0x1531) = 0x50515542;
    *(undefined4 *)(in_EAX + 0x157f) = 0;
    *(undefined4 *)(in_EAX + 0x1583) = 0;
    local_1c = in_EAX;
    local_40 = FUN_000e8d4a();
    local_58 = FUN_000e8d4a();
    local_34 = local_1c + 0x1492;
    local_38 = local_1c + 0xd80;
    local_4c = local_1c + 0x1531;
    puVar9 = auStack_70;
    do {
      *(undefined4 *)(puVar9 + -4) = 0x106e37;
      iVar2 = FUN_000e8d4a();
      *(int *)(puVar9 + 0x2c) = iVar2;
      if (3000 < (uint)(iVar2 - *(int *)(puVar9 + 0x18))) break;
      if (0x19 < (uint)(iVar2 - *(int *)(puVar9 + 0x30))) {
        puVar6 = puVar9 + -4;
        *(undefined4 *)(puVar9 + -4) = 0x56;
        *(int *)(puVar9 + 0x30) = iVar2;
        *(undefined4 *)(*(int *)(puVar9 + 0x54) + 0x1531) = 0x50515542;
        *(undefined4 *)(puVar9 + -8) = 0x106e8b;
        FUN_001023f4();
        if ((DAT_003e02b0 & 1) == 0) {
          DAT_003e02b0 = DAT_003e02b0 | 1;
          *(undefined4 *)(puVar9 + -8) = 0x106eac;
          DAT_003e02a4 = FUN_000e8d4a();
        }
        if ((DAT_003e02b0 & 2) == 0) {
          DAT_003e02b0 = DAT_003e02b0 | 2;
          *(undefined4 *)(puVar9 + -8) = 0x106eca;
          DAT_003e02a8 = FUN_000e8d4a();
        }
        *(undefined4 *)(puVar9 + -8) = 0x106ed4;
        iVar3 = FUN_000e8d4a();
        if ((extraout_CL == '\0') || (0x32 < (uint)(iVar3 - DAT_003e02a8))) {
          *(undefined4 *)(puVar9 + -8) = 0x106f08;
          DAT_003e02a8 = iVar3;
          DAT_003e02ac = DAT_003e02ac + 1;
          FUN_00102834();
        }
        puVar9 = puVar9 + -4;
        if (99 < (uint)(iVar3 - DAT_003e02a4)) {
          DAT_003e02ac = 0;
          puVar9 = puVar6;
          DAT_003e02a4 = iVar3;
        }
      }
      iVar3 = *(int *)(*(int *)(puVar9 + 0x54) + 0xdca);
      *(int *)(puVar9 + 0x40) = iVar3;
      *(int *)(puVar9 + 0x14) = iVar3 + 0x54;
      *(int *)(puVar9 + 0x34) = *(int *)(puVar9 + 0x40) + 0x48;
      while (*(uint *)(puVar9 + 0x40) < *(int *)(*(int *)(puVar9 + 0x54) + 0xdca) + 0x4d40U) {
        *(undefined4 *)(puVar9 + -4) = 0x1073c7;
        iVar3 = FUN_001026b0();
        if (iVar3 != 0) {
          *(uint **)(puVar9 + 0x44) = *(uint **)(puVar9 + 0x34);
          uVar10 = **(uint **)(puVar9 + 0x34);
          cVar1 = -1;
          if (uVar10 < 0x4a435542) {
            if (uVar10 < 0x47445542) {
              if (0x41535541 < uVar10) {
                if (uVar10 < 0x41535543) goto LAB_00106f4a;
                bVar16 = uVar10 == 0x44535542;
                goto LAB_00106ff9;
              }
            }
            else {
              if (uVar10 < 0x47445543) goto LAB_00106f68;
              if (uVar10 < 0x49435542) {
                bVar16 = uVar10 == 0x48515542;
              }
              else {
                if (uVar10 < 0x49435543) goto LAB_00106f4a;
                bVar16 = uVar10 == 0x49485542;
              }
LAB_00106ff9:
              if (bVar16) goto LAB_00106f4a;
            }
          }
          else {
            if (0x4a435542 < uVar10) {
              if (uVar10 < 0x4e445542) {
                if (uVar10 < 0x4c435542) {
                  bVar16 = uVar10 == 0x4b535542;
                }
                else {
                  if (uVar10 < 0x4c435543) goto LAB_00106f4a;
                  bVar16 = uVar10 == 0x4c485542;
                }
              }
              else {
                if (uVar10 < 0x4e445543) goto LAB_00106f68;
                if (uVar10 < 0x504e5542) {
                  bVar16 = uVar10 == 0x50485542;
                }
                else {
                  if (uVar10 < 0x504e5543) goto LAB_00106f4a;
                  bVar16 = uVar10 == 0x50515542;
                }
              }
              goto LAB_00106ff9;
            }
LAB_00106f4a:
            iVar5 = 0x10;
            bVar16 = false;
            iVar3 = 0;
            bVar15 = true;
            pbVar11 = (byte *)(*(int *)(puVar9 + 0x54) + 0x1587);
            pbVar13 = *(byte **)(puVar9 + 0x14);
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar16 = *pbVar11 < *pbVar13;
              bVar15 = *pbVar11 == *pbVar13;
              pbVar11 = pbVar11 + (uint)bVar17 * -2 + 1;
              pbVar13 = pbVar13 + (uint)bVar17 * -2 + 1;
            } while (bVar15);
            if (!bVar15) {
              iVar3 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            }
            if (iVar3 == 0) {
LAB_00106f68:
              cVar1 = '\0';
            }
          }
          if ((cVar1 == '\0') && (**(int **)(puVar9 + 0x44) == 0x50485542)) {
            iVar3 = *(int *)(puVar9 + 0x44);
            if ((uint)*(ushort *)(iVar3 + 0x44) == *(uint *)(puVar9 + 0x28)) {
              if (*(int *)(iVar3 + 0x4a) == *(int *)(*(int *)(puVar9 + 0x54) + 0x157f)) {
                *(undefined4 *)(puVar9 + 0x30) = *(undefined4 *)(puVar9 + 0x2c);
                *(int *)(puVar9 + 0x18) = iVar2;
                piVar4 = (int *)(*(int *)(puVar9 + 0x44) + 0x52);
                *(undefined4 *)(puVar9 + 0x4c) = 0;
                *(int *)(puVar9 + 0x50) = *(int *)(puVar9 + 0x44) + 0x56;
                puVar7 = puVar9;
                do {
                  puVar9 = puVar7;
                  if ((short)piVar4[9] != 0) {
                    *(int *)(puVar7 + 0x48) = *(int *)(puVar7 + 0x48) + 1;
                    puVar9 = puVar7 + -4;
                    *(uint *)(puVar7 + -4) =
                         (uint)(*piVar4 == *(int *)(*(int *)(puVar7 + 0x44) + 0x40));
                    *(undefined4 *)(puVar7 + -8) = 0x1070d0;
                    cVar1 = FUN_000ff1d4();
                    if (cVar1 != '\0') {
                      *(char **)(puVar7 + -8) = s_WARNING_network__IPXServiceProvi_001728dc;
                      *(undefined4 *)(puVar7 + -0xc) = 0x1070de;
                      FUN_000efd90();
                    }
                    piVar14 = (int *)(*piVar4 * 0x38 + *(int *)(*(int *)(puVar7 + 0x50) + 0xdce));
                    *(int **)(puVar7 + -8) = piVar14;
                    piVar12 = piVar4;
                    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *piVar14 = *piVar12;
                      piVar12 = piVar12 + (uint)bVar17 * -2 + 1;
                      piVar14 = piVar14 + (uint)bVar17 * -2 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(char *)piVar14 = (char)*piVar12;
                      piVar12 = (int *)((int)piVar12 + (uint)bVar17 * -2 + 1);
                      piVar14 = (int *)((int)piVar14 + (uint)bVar17 * -2 + 1);
                    }
                  }
                  iVar2 = *(int *)(puVar9 + 0x4c);
                  piVar4 = piVar4 + 0xe;
                  *(uint *)(puVar9 + 0x4c) = iVar2 + 1U;
                  *(int *)(puVar9 + 0x50) = *(int *)(puVar9 + 0x50) + 0x38;
                  puVar7 = puVar9;
                } while (iVar2 + 1U < 6);
                if (*(uint *)(puVar9 + 0x48) < *(uint *)(puVar9 + 0x28)) {
                  iVar2 = *(int *)(puVar9 + 0x10);
                  uVar10 = *(int *)(*(int *)(puVar9 + 0x54) + 0x157f) + 1;
                  *(uint *)(*(int *)(puVar9 + 0x54) + 0x157f) = uVar10;
                  if (uVar10 <= (uint)(iVar2 * 6) && iVar2 * 6 - uVar10 != 0) {
                    *(undefined4 *)(puVar9 + -4) = 0x56;
                    *(undefined4 *)(puVar9 + -8) = 0x1071b1;
                    FUN_001023f4();
                    if ((DAT_003e02b0 & 1) == 0) {
                      DAT_003e02b0 = DAT_003e02b0 | 1;
                      *(undefined4 *)(puVar9 + -8) = 0x1071d0;
                      DAT_003e02a4 = FUN_000e8d4a();
                    }
                    if ((DAT_003e02b0 & 2) == 0) {
                      DAT_003e02b0 = DAT_003e02b0 | 2;
                      *(undefined4 *)(puVar9 + -8) = 0x1071f0;
                      DAT_003e02a8 = FUN_000e8d4a();
                    }
                    *(undefined4 *)(puVar9 + -8) = 0x1071fa;
                    iVar2 = FUN_000e8d4a();
                    if ((extraout_CL_00 == '\0') || (0x32 < (uint)(iVar2 - DAT_003e02a8))) {
                      *(undefined4 *)(puVar9 + -8) = 0x10722e;
                      DAT_003e02a8 = iVar2;
                      DAT_003e02ac = DAT_003e02ac + 1;
                      FUN_00102834();
                    }
                    if (99 < (uint)(iVar2 - DAT_003e02a4)) {
                      DAT_003e02ac = 0;
                      DAT_003e02a4 = iVar2;
                    }
                    *(undefined4 *)(puVar9 + -8) = 0x10724f;
                    iVar2 = FUN_000e8d4a();
                    *(int *)(puVar9 + 0x28) = iVar2;
                    *(int *)(puVar9 + 0x2c) = iVar2;
                    *(int *)(puVar9 + 0x14) = iVar2;
                    puVar9 = puVar9 + -4;
                    goto LAB_0010735e;
                  }
                  *(undefined4 *)(puVar9 + 0x1c) = 0xffffffff;
                }
                else {
                  iVar2 = *(int *)(puVar9 + 0x54);
                  *(undefined2 *)(iVar2 + 0x1579) = *(undefined2 *)(*(int *)(puVar9 + 0x44) + 0x44);
                  *(undefined4 *)(puVar9 + 0x1c) = 1;
                  *(undefined2 *)(iVar2 + 0x157b) = *(undefined2 *)(*(int *)(puVar9 + 0x44) + 0x46);
                  puVar9[0x58] = 0;
                }
                *(undefined4 *)(puVar9 + -4) = 0x10718a;
                FUN_001025c0();
                break;
              }
            }
            else {
              *(uint *)(puVar9 + 0x28) = (uint)*(ushort *)(iVar3 + 0x44);
              *(uint *)(puVar9 + 0x10) = (uint)*(ushort *)(iVar3 + 0x46);
              *(undefined4 *)(puVar9 + -4) = 0x107284;
              FUN_000e6a10();
              *(undefined4 *)(*(int *)(puVar9 + 0x54) + 0x157f) = 0;
              *(undefined4 *)(puVar9 + 0x48) = 0;
              *(undefined4 *)(puVar9 + -4) = 0x1072a9;
              iVar2 = FUN_000e8d4a();
              puVar8 = puVar9 + -4;
              *(undefined4 *)(puVar9 + -4) = 0x56;
              *(int *)(puVar9 + 0x2c) = iVar2;
              *(int *)(puVar9 + 0x18) = iVar2;
              *(int *)(puVar9 + 0x30) = iVar2;
              *(undefined4 *)(puVar9 + -8) = 0x1072c2;
              FUN_001023f4();
              if ((DAT_003e02b0 & 1) == 0) {
                DAT_003e02b0 = DAT_003e02b0 | 1;
                *(undefined4 *)(puVar9 + -8) = 0x1072e3;
                DAT_003e02a4 = FUN_000e8d4a();
              }
              if ((DAT_003e02b0 & 2) == 0) {
                DAT_003e02b0 = DAT_003e02b0 | 2;
                *(undefined4 *)(puVar9 + -8) = 0x107303;
                DAT_003e02a8 = FUN_000e8d4a();
              }
              *(undefined4 *)(puVar9 + -8) = 0x10730d;
              iVar3 = FUN_000e8d4a();
              if ((extraout_CL_01 == '\0') || (0x32 < (uint)(iVar3 - DAT_003e02a8))) {
                *(undefined4 *)(puVar9 + -8) = 0x107341;
                DAT_003e02a8 = iVar3;
                DAT_003e02ac = DAT_003e02ac + 1;
                FUN_00102834();
              }
              puVar9 = puVar9 + -4;
              if (99 < (uint)(iVar3 - DAT_003e02a4)) {
                DAT_003e02ac = 0;
                puVar9 = puVar8;
                DAT_003e02a4 = iVar3;
              }
            }
          }
LAB_0010735e:
          *(undefined4 *)(puVar9 + -4) = 0x10736f;
          FUN_001025c0();
        }
        *(int *)(puVar9 + 0x14) = *(int *)(puVar9 + 0x14) + 0x26a;
        *(int *)(puVar9 + 0x34) = *(int *)(puVar9 + 0x34) + 0x26a;
        *(int *)(puVar9 + 0x40) = *(int *)(puVar9 + 0x40) + 0x26a;
      }
    } while (*(int *)(puVar9 + 0x1c) == 0);
  }
  return puVar9[0x58];
}

/******************************************************************************
 * Function : dk_resending_packet_10962c (Ghidra: FUN_0010962c)
 * Prototype: undefined1 dk_resending_packet_10962c(void);
 * Address  : 0x10962c (Size: 928 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'RESENDING PACKET'
 * Callers  : 1 -> 0x1043c8
 * Callees  : 7 -> 0xe8d4a, 0xefd90, 0xff8c0, 0x1023f4, 0x102834, 0x108b74, 0x1099cc
 * Strings  :
 *   - 0x172923: "RESENDING PACKET\n"
 *   - 0x172935: "DIDN'T GET AN ACK\n"
 *   - 0x172948: "Invalid length: %d vs %d\n"
 *   - 0x172962: "sender->SocketNumber = FALSE\n"
 *   - 0x172980: "Invalid player id %d\n"
 *   - 0x172996: "m_connectToSession = FALSE\n"
 *   - 0x1729b2: "Ended up with ret == LB_ERROR\n"
 ******************************************************************************/
undefined1 FUN_0010962c(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  char extraout_CL;
  int in_ECX;
  uint uVar5;
  char extraout_DH;
  char *in_EDX;
  int extraout_EDX;
  undefined4 *unaff_EBX;
  undefined1 *puVar6;
  char **ppcVar7;
  char **ppcVar8;
  char **ppcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte bVar12;
  char *local_38;
  int local_34;
  int local_30 [4];
  char local_20 [4];
  short *local_1c;
  char *local_18;
  char local_14;
  undefined1 local_10;
  
  bVar12 = 0;
  ppcVar9 = (char **)&local_34;
  local_10 = 0xff;
  local_34 = in_ECX;
  local_18 = in_EDX;
  if (*(int *)(in_EAX + 0x7a8) == 0) {
    ppcVar8 = &local_38;
    local_38 = s_m_connectToSession___FALSE_00172996;
  }
  else {
    if (*(short *)(in_EAX + 0x17ef) == 1) {
      uVar10 = *(undefined4 *)(in_EAX + 0x151f);
      uVar2 = *(ushort *)(in_EAX + 0x1525);
    }
    else {
      uVar10 = *(undefined4 *)(in_EAX + 0x1575);
      uVar2 = *(ushort *)(in_EAX + 0x157b);
    }
    if ((char *)(uint)uVar2 <= in_EDX) {
      local_38 = in_EDX;
      FUN_000efd90(s_Invalid_player_id__d_00172980);
      ppcVar9 = (char **)&local_34;
      goto LAB_001099ad;
    }
    local_1c = (short *)((int)in_EDX * 0x38 + *(int *)(in_EAX + 0xdce) + 0x24);
    if (*local_1c == 0) {
      ppcVar8 = &local_38;
      local_38 = s_sender_>SocketNumber___FALSE_00172962;
    }
    else {
      local_38 = (char *)0x1096c1;
      FUN_000ff8c0();
      if (0x212 < (uint)local_30[1]) {
        local_38 = (char *)0x212;
        FUN_000efd90(s_Invalid_length___d_vs__d_00172948,local_30[1]);
        goto LAB_001099ad;
      }
      *(int *)(in_EAX + 0x159b) = local_34;
      cVar1 = *(char *)(in_EAX + 0x17f1);
      *(undefined4 *)(in_EAX + 0x159f) = uVar10;
      *(char *)(in_EAX + 0x17f1) = cVar1 + '\x01';
      *(char *)(in_EAX + 0x15a5) = cVar1;
      puVar11 = (undefined4 *)(in_EAX + 0x15a7);
      for (uVar5 = local_30[1] + 4U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *unaff_EBX;
        unaff_EBX = unaff_EBX + (uint)bVar12 * -2 + 1;
        puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
      }
      for (uVar5 = local_30[1] + 4U & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)unaff_EBX;
        unaff_EBX = (undefined4 *)((int)unaff_EBX + (uint)bVar12 * -2 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
      }
      if (local_34 == 0x47445542) {
        cVar1 = local_18[in_EAX + 0x17f2];
        *(char *)(in_EAX + 0x15a6) = cVar1;
        local_18[in_EAX + 0x17f2] = cVar1 + '\x01';
      }
      ppcVar7 = &local_38;
      ppcVar9 = &local_38;
      local_38 = (char *)0x21e;
      FUN_001023f4();
      local_18 = (char *)((uint)local_18 & 0xffffff00);
      if ((DAT_003e02b0 & 1) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 1;
        DAT_003e02a4 = FUN_000e8d4a();
      }
      if ((DAT_003e02b0 & 2) == 0) {
        DAT_003e02b0 = DAT_003e02b0 | 2;
        DAT_003e02a8 = FUN_000e8d4a();
      }
      iVar3 = FUN_000e8d4a();
      if (((char)local_18 == '\0') || (0x32 < (uint)(iVar3 - DAT_003e02a8))) {
        DAT_003e02a8 = iVar3;
        DAT_003e02ac = DAT_003e02ac + 1;
        FUN_00102834();
      }
      if (99 < (uint)(iVar3 - DAT_003e02a4)) {
        DAT_003e02ac = 0;
        DAT_003e02a4 = iVar3;
      }
      if (local_38 != (char *)0x47445542) {
        local_14 = '\0';
        goto LAB_001099ad;
      }
      iVar3 = FUN_000e8d4a();
      local_30[3] = iVar3;
      if (local_14 == -1) {
        local_34 = in_EAX + 0x1492;
        local_30[2] = in_EAX + 0xd80;
        ppcVar7 = &local_38;
        do {
          *(undefined4 *)((int)ppcVar7 + -4) = 0x10983a;
          iVar4 = FUN_000e8d4a();
          if (500 < (uint)(iVar4 - *(int *)((int)ppcVar7 + 0x14))) break;
          if (6 < (uint)(iVar4 - iVar3)) {
            *(char **)((int)ppcVar7 + -4) = s_RESENDING_PACKET_00172923;
            *(undefined4 *)((int)ppcVar7 + -8) = 0x109864;
            FUN_000efd90();
            puVar6 = (undefined1 *)((int)ppcVar7 + -4);
            *(undefined4 *)((int)ppcVar7 + -4) = 0x21e;
            *(undefined4 *)((int)ppcVar7 + -8) = 0x109881;
            FUN_001023f4();
            *(int *)((int)ppcVar7 + 8) = in_EAX;
            if ((DAT_003e02b0 & 1) == 0) {
              DAT_003e02b0 = DAT_003e02b0 | 1;
              *(undefined4 *)((int)ppcVar7 + -8) = 0x1098a2;
              DAT_003e02a4 = FUN_000e8d4a();
            }
            if ((DAT_003e02b0 & 2) == 0) {
              DAT_003e02b0 = DAT_003e02b0 | 2;
              *(undefined4 *)((int)ppcVar7 + -8) = 0x1098c0;
              DAT_003e02a8 = FUN_000e8d4a();
            }
            *(undefined4 *)((int)ppcVar7 + -8) = 0x1098ca;
            iVar4 = FUN_000e8d4a();
            if ((extraout_CL == '\0') || (0x32 < (uint)(iVar4 - DAT_003e02a8))) {
              DAT_003e02ac = DAT_003e02ac + 1;
              *(undefined4 *)((int)ppcVar7 + -8) = 0x10990f;
              DAT_003e02a8 = iVar4;
              FUN_00102834();
            }
            ppcVar7 = (char **)((int)ppcVar7 + -4);
            iVar3 = extraout_EDX;
            if (99 < (uint)(iVar4 - DAT_003e02a4)) {
              DAT_003e02ac = 0;
              ppcVar7 = (char **)puVar6;
              DAT_003e02a4 = iVar4;
            }
          }
          *(undefined4 *)((int)ppcVar7 + -4) = 0x10993f;
          iVar4 = FUN_001099cc();
          if (iVar4 == 1) {
            *(undefined1 *)((int)ppcVar7 + 0x24) = 0;
          }
          *(undefined4 *)((int)ppcVar7 + -4) = 0x109955;
          FUN_00108b74();
        } while (extraout_DH == -1);
      }
      ppcVar9 = ppcVar7;
      if (*(char *)((int)ppcVar7 + 0x24) != -1) goto LAB_001099ad;
      ppcVar8 = (char **)((int)ppcVar7 + -4);
      *(char **)((int)ppcVar7 + -4) = s_DIDN_T_GET_AN_ACK_00172935;
    }
  }
  *(undefined4 *)((int)ppcVar8 + -4) = 0x1099aa;
  FUN_000efd90();
  ppcVar9 = (char **)((int)ppcVar8 + 4);
LAB_001099ad:
  if (*(char *)((int)ppcVar9 + 0x24) == -1) {
    *(char **)((int)ppcVar9 + -4) = s_Ended_up_with_ret____LB_ERROR_001729b2;
    *(undefined4 *)((int)ppcVar9 + -8) = 0x1099be;
    FUN_000efd90();
  }
  return *(undefined1 *)((int)ppcVar9 + 0x24);
}

/******************************************************************************
 * Function : dk_LbNETWORK_11e254 (Ghidra: FUN_0011e254)
 * Prototype: undefined8 dk_LbNETWORK_11e254(void);
 * Address  : 0x11e254 (Size: 190 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Releasing SerialSP'
 * Callers  : 1 -> 0x11f4d8
 * Callees  : 7 -> 0xeb818, 0xed028, 0xefd90, 0xff18c, 0xffb54, 0x125600, 0x125660
 * Strings  :
 *   - 0x1732b4: "  LbNETWORK : Releasing SerialSP\n"
 *   - 0x1732d6: "  WARNING network: SerialSP::Release() not initialised\n"
 *   - 0x17330e: "  WARNING network: SerialSP::Release() NULL m_commHandlerPtr\n"
 ******************************************************************************/
undefined8 FUN_0011e254(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  
  FUN_000efd90(s_LbNETWORK___Releasing_SerialSP_001732b4);
  if (*(int *)(in_EAX + 0xd74) == 0) {
    uVar1 = FUN_000efd90(s_WARNING_network__SerialSP__Relea_001732d6);
    return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar1 >> 8),0xff));
  }
  if (*(int *)(in_EAX + 0xd94) == 0) {
    FUN_000efd90(s_WARNING_network__SerialSP__Relea_0017330e);
  }
  else {
    if (*(int *)(in_EAX + 0x7a8) != 0) {
      (**(code **)(*(int *)(in_EAX + 0xd7c) + 0xc))();
    }
    FUN_000eb818();
    while( true ) {
      iVar2 = FUN_000eb818();
      if (999 < (uint)(iVar2 - extraout_ECX)) break;
      FUN_000ffb54();
    }
    FUN_00125660();
    if (*(int *)(in_EAX + 0xd94) != 0) {
      FUN_00125600();
      FUN_000ed028();
    }
    *(undefined4 *)(in_EAX + 0xd94) = 0;
    *(undefined4 *)(in_EAX + 0xd74) = 0;
  }
  uVar1 = FUN_000ff18c();
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : dk_LbNETWORK_11e314 (Ghidra: FUN_0011e314)
 * Prototype: undefined8 dk_LbNETWORK_11e314(undefined4 param_1);
 * Address  : 0x11e314 (Size: 367 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Initialising SerialSP'
 * Callers  : 1 -> 0x11f508
 * Callees  : 7 -> 0xed020, 0xefd90, 0xff10c, 0x12550c, 0x125630, 0x1258c4, 0x1262a4
 * Strings  :
 *   - 0x17334c: "  LbNETWORK : Initialising SerialSP\n"
 *   - 0x173371: "CALLING SERIALSP INIT \n"
 *   - 0x173389: "	 COM PORT %d\n"
 *   - 0x173398: "SERIAL SP INIT SUCCESS\n"
 *   - 0x1733b0: "  WARNING network: SerialSP::SerialSP() failure on CommHandler::SetBaud\n"
 *   - 0x1733f9: "  WARNING network: SerialSP::SerialSP() failure on CommHandler::Init\n"
 *   - 0x17343f: "  WARNING network: SerialSP::SerialSP() failure on parent initialisation\n"
 ******************************************************************************/
undefined8 FUN_0011e314(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int iVar4;
  undefined4 in_EDX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 auStackY_17d8 [509];
  undefined4 auStackY_fe4 [1004];
  char *pcVar8;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  int local_20;
  char local_1c;
  
  bVar7 = 0;
  local_2c = DAT_003d97d0;
  local_28 = &DAT_001748e0;
  local_24 = 0;
  local_1c = -1;
  DAT_003d97d0 = &local_2c;
  FUN_000efd90(s_LbNETWORK___Initialising_SerialS_0017334c);
  *(undefined1 *)(extraout_ECX + 0xdc0) = 0;
  *(undefined1 *)(extraout_ECX + 0xdc1) = 0;
  *(undefined4 *)(extraout_ECX + 0xd74) = 0;
  *(undefined4 *)(extraout_ECX + 0xdc2) = 0;
  cVar1 = FUN_000ff10c();
  if (cVar1 != '\0') {
    FUN_000efd90(s_WARNING_network__SerialSP__Seria_0017343f);
    goto LAB_0011e46b;
  }
  puVar5 = (undefined4 *)(extraout_ECX_00 + 0xd84 + (uint)bVar7 * -8);
  *(undefined4 *)(extraout_ECX_00 + 0xd80) = param_1;
  puVar6 = puVar5 + (uint)bVar7 * -2 + 1;
  *puVar5 = *(undefined4 *)(&stack0x00000008 + (uint)bVar7 * -8);
  *puVar6 = *(undefined4 *)(&stack0x0000000c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  puVar6[(uint)bVar7 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0x0000000c + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  iVar2 = FUN_000ed020();
  iVar3 = 0;
  iVar4 = extraout_ECX_01;
  if (iVar2 != 0) {
    local_24 = 1;
    local_20 = iVar2;
    iVar3 = FUN_0012550c();
    local_24 = 0;
    iVar4 = extraout_ECX_02;
  }
  *(int *)(iVar4 + 0xd94) = iVar3;
  if (iVar3 != 0) {
    FUN_000efd90(s_CALLING_SERIALSP_INIT_00173371);
    FUN_000efd90(s_COM_PORT__d_00173389,*(undefined4 *)(extraout_ECX_03 + 0xda0));
    FUN_001262a4();
    iVar3 = FUN_00125630();
    if (iVar3 == 0) {
      pcVar8 = s_WARNING_network__SerialSP__Seria_001733f9;
    }
    else {
      FUN_000efd90(s_SERIAL_SP_INIT_SUCCESS_00173398);
      iVar3 = FUN_001258c4();
      if (iVar3 == 0) {
        local_1c = '\0';
        iVar4 = extraout_ECX_04;
        goto LAB_0011e44b;
      }
      pcVar8 = s_WARNING_network__SerialSP__Seria_001733b0;
    }
    FUN_000efd90(pcVar8);
    iVar4 = extraout_ECX_05;
  }
LAB_0011e44b:
  if (local_1c == '\0') {
    *(undefined4 *)(iVar4 + 0xd74) = 1;
  }
LAB_0011e46b:
  DAT_003d97d0 = (undefined4 *)local_2c;
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)local_2c >> 8),local_1c));
}

/******************************************************************************
 * Function : dk_Start_11e484 (Ghidra: FUN_0011e484)
 * Prototype: undefined1 dk_Start_11e484(void);
 * Address  : 0x11e484 (Size: 205 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::Start() not initialised'
 * Callers  : 1 -> 0x11f53c
 * Callees  : 4 -> 0xefd90, 0xff1d4, 0xff398, 0xff834
 * Strings  :
 *   - 0x173489: "  WARNING network: SerialSP::Start() not initialised\n"
 *   - 0x1734bf: "  WARNING network: SerialSP::Start() maxPlayers != 2\n"
 *   - 0x1734f5: "  WARNING network: SerialSP::Start() NULL m_commHandlerPtr\n"
 *   - 0x173531: "  WARNING network: Win95SerialSP::Start() failure on AddPlayer()\n"
 ******************************************************************************/
undefined1 FUN_0011e484(void)

{
  char cVar1;
  undefined4 *in_EAX;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  undefined1 extraout_CL_01;
  undefined1 uVar2;
  int in_ECX;
  
  if (in_EAX[0x35d] == 0) {
    FUN_000efd90(s_WARNING_network__SerialSP__Start_00173489);
    uVar2 = extraout_CL;
  }
  else {
    if (in_ECX != 2) {
      FUN_000efd90(s_WARNING_network__SerialSP__Start_001734bf);
      return extraout_CL_00;
    }
    FUN_000ff834();
    if (in_EAX[0x365] == 0) {
      FUN_000efd90(s_WARNING_network__SerialSP__Start_001734f5);
      return extraout_CL_01;
    }
    if (in_EAX[0x1ea] != 0) {
      (**(code **)(in_EAX[0x35f] + 0xc))();
    }
    *in_EAX = 0;
    in_EAX[0x364] = 1;
    FUN_000ff398();
    cVar1 = FUN_000ff1d4(1);
    if (cVar1 != '\0') {
      FUN_000efd90(s_WARNING_network__Win95SerialSP___00173531);
    }
    in_EAX[0x1ea] = 1;
    uVar2 = 0;
  }
  return uVar2;
}

/******************************************************************************
 * Function : dk_Start_11e554 (Ghidra: FUN_0011e554)
 * Prototype: undefined1 dk_Start_11e554(void);
 * Address  : 0x11e554 (Size: 338 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::Start() not initialised'
 * Callers  : 1 -> 0x11f818
 * Callees  : 7 -> 0xeb818, 0xefd90, 0xff1d4, 0xff398, 0xff53c, 0xff550, 0x100708
 * Strings  :
 *   - 0x173573: "  WARNING network: SerialSP::Start() not initialised\n"
 *   - 0x1735a9: "  WARNING network: SerialSP::Start() NULL m_commHandlerPtr\n"
 *   - 0x1735e5: "  WARNING network: SerialSP::Start() addPlayerBuffer is too small\n"
 *   - 0x173628: "  WARNING network: SerialSP::Start() failure on AddPlayer()\n"
 *   - 0x173665: "  WARNING network: SerialSP::Start() failure on Broadcast()\n"
 ******************************************************************************/
undefined1 FUN_0011e554(void)

{
  bool bVar1;
  char cVar2;
  undefined4 *in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 auStackY_20 [2];
  char *pcVar6;
  undefined4 local_14;
  undefined1 local_10;
  
  puVar4 = &local_14;
  local_10 = 0xff;
  if (in_EAX[0x35d] == 0) {
    FUN_000efd90(s_WARNING_network__SerialSP__Start_00173573);
    local_10 = 0xff;
  }
  else {
    FUN_000ff398();
    if (in_EAX[0x365] == 0) {
      pcVar6 = s_WARNING_network__SerialSP__Start_001735a9;
    }
    else {
      if (in_EAX[0x1ea] != 0) {
        (**(code **)(in_EAX[0x35f] + 0xc))();
      }
      *in_EAX = 1;
      in_EAX[0x364] = 0;
      uVar3 = FUN_000ff53c();
      if (0x28 < uVar3) {
        FUN_000efd90(s_WARNING_network__SerialSP__Start_001735e5);
        return local_10;
      }
      FUN_000ff550();
      cVar2 = (**(code **)(in_EAX[0x35f] + 0x30))();
      if (cVar2 == '\0') {
        local_14 = FUN_000eb818();
        bVar1 = true;
        do {
          *(undefined4 *)((int)puVar4 + -4) = 0x11e62d;
          FUN_00100708();
          if (in_EAX[0x1eb] == 0) {
            *(undefined4 *)((int)puVar4 + -4) = 0x11e674;
            uVar5 = FUN_000eb818();
            if (10000 < (uint)((int)uVar5 - (int)((ulonglong)uVar5 >> 0x20))) {
              bVar1 = false;
            }
          }
          else {
            bVar1 = false;
            *(undefined4 *)((int)puVar4 + -4) = 0;
            *(undefined4 *)((int)puVar4 + -8) = 0x11e649;
            cVar2 = FUN_000ff1d4();
            if (cVar2 != '\0') {
              *(char **)((int)puVar4 + -8) = s_WARNING_network__SerialSP__Start_00173628;
              *(undefined4 *)((int)puVar4 + -0xc) = 0x11e657;
              FUN_000efd90();
            }
            in_EAX[0x1ea] = 1;
            *(undefined1 *)puVar4 = 0;
            puVar4 = (undefined4 *)((int)puVar4 + -4);
          }
        } while (bVar1);
        return *(undefined1 *)((int)puVar4 + 4);
      }
      pcVar6 = s_WARNING_network__SerialSP__Start_00173665;
    }
    FUN_000efd90(pcVar6);
  }
  return local_10;
}

/******************************************************************************
 * Function : dk_SendMessage_11e6a8 (Ghidra: FUN_0011e6a8)
 * Prototype: undefined1 dk_SendMessage_11e6a8(void);
 * Address  : 0x11e6a8 (Size: 832 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::SendMessage() invalid sendMode()'
 * Callers  : 1 -> 0x11fb8c
 * Callees  : 5 -> 0xeb818, 0xefd90, 0xff8c0, 0xffb54, 0x1257b0
 * Strings  :
 *   - 0x1736a2: "  WARNING network: SerialSP::SendMessage() invalid sendMode()\n"
 *   - 0x1736e1: "  WARNING network: SerialSP::SendMessage() deliveryBuffer is too small\n"
 *   - 0x173729: "  WARNING network: SerialSP::SendMessage() delivery failure\n"
 *   - 0x173766: "  WARNING network: SerialSP::SendMessage() failure on CommHandler::WriteBytes()\n"
 *   - 0x1737b7: "  WARNING network: SerialSP::SendMessage() failure on CommHandler::WriteBytes()\n"
 *   - 0x173808: "  WARNING network: SerialSP::SendMessage() failure on CommHandler::WriteBytes()\n"
 *   - 0x173859: "  WARNING network: SerialSP::SendMessage() failure on CommHandler::WriteBytes()\n"
 *   - 0x1738aa: "  WARNING network: SerialSP::SendMessage() failure on CommHandler::WriteBytes()\n"
 ******************************************************************************/
undefined1 FUN_0011e6a8(void)

{
  bool bVar1;
  int in_EAX;
  char in_CL;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EBX;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  byte bVar9;
  char *pcVar10;
  int local_28;
  uint local_18;
  int local_14;
  undefined1 local_10;
  
  bVar9 = 0;
  local_10 = 0xff;
  local_14 = 0;
  if (in_CL == '\0') {
    bVar1 = false;
  }
  else {
    if (in_CL != '\x01') {
      pcVar10 = s_WARNING_network__SerialSP__SendM_001736a2;
      goto LAB_0011e9d5;
    }
    bVar1 = true;
  }
  FUN_000ff8c0();
  if (bVar1) {
    local_18 = 0;
    if (0x40b < local_28 + 0xbU) {
      FUN_000efd90(s_WARNING_network__SerialSP__SendM_001736e1);
      return local_10;
    }
    puVar5 = (undefined4 *)&DAT_00196de0;
    puVar7 = &DAT_003e0958;
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar9 * -2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar9 * -2 + 1);
    }
    puVar5 = (undefined4 *)(in_EAX + 0xdc0);
    puVar7 = (undefined4 *)&DAT_003e095c;
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar9 * -2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar9 * -2 + 1);
    }
    puVar5 = unaff_EBX;
    puVar7 = (undefined4 *)&DAT_003e095d;
    for (uVar3 = local_28 + 4U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    }
    for (uVar3 = local_28 + 4U & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + (uint)bVar9 * -2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar9 * -2 + 1);
    }
    uVar3 = 0;
    do {
      local_14 = local_14 + (uint)(byte)(&DAT_00196de0)[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    uVar3 = CONCAT31((int3)(uVar3 >> 8),*(undefined1 *)(in_EAX + 0xdc0)) & 0xffff00ff;
    local_14 = local_14 + uVar3;
    puVar5 = (undefined4 *)(local_28 + 4 + (int)unaff_EBX);
    for (; unaff_EBX < puVar5; unaff_EBX = (undefined4 *)((int)unaff_EBX + 1)) {
      uVar3 = CONCAT31((int3)(uVar3 >> 8),*(undefined1 *)unaff_EBX);
      local_14 = local_14 + uVar3;
    }
    piVar6 = &local_14;
    piVar8 = (int *)(&DAT_003e0961 + local_28);
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + (uint)bVar9 * -2 + 1;
      piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
    }
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + (uint)bVar9 * -2 + 1);
      piVar8 = (int *)((int)piVar8 + (uint)bVar9 * -2 + 1);
    }
    iVar2 = FUN_001257b0();
    if (iVar2 == extraout_ECX) {
      *(undefined4 *)(in_EAX + 0xdc2) = 1;
      FUN_000eb818();
      if (*(int *)(in_EAX + 0xdc2) == 0) {
        return local_10;
      }
      do {
        FUN_000ffb54();
        if (*(int *)(in_EAX + 0xdc2) == 0) {
          local_10 = 0;
        }
        else {
          iVar2 = FUN_000eb818();
          if (0x9c4 < (uint)(iVar2 - extraout_ECX_00)) {
            local_18 = local_18 + 1;
            if (local_18 < 9) {
              uVar3 = FUN_001257b0();
              if (uVar3 == local_28 + 0xbU) {
                FUN_000eb818();
              }
              else {
                FUN_000efd90(s_WARNING_network__SerialSP__SendM_00173766);
                *(undefined4 *)(in_EAX + 0xdc2) = 0;
              }
            }
            else {
              FUN_000efd90(s_WARNING_network__SerialSP__SendM_00173729);
              *(undefined4 *)(in_EAX + 0xdc2) = 0;
            }
          }
        }
      } while (*(int *)(in_EAX + 0xdc2) != 0);
      return local_10;
    }
    FUN_000efd90(s_WARNING_network__SerialSP__SendM_001737b7);
    return local_10;
  }
  iVar2 = FUN_001257b0();
  if (iVar2 == 4) {
    uVar3 = FUN_001257b0();
    if (uVar3 != local_28 + 4U) {
      FUN_000efd90(s_WARNING_network__SerialSP__SendM_00173859);
      return local_10;
    }
    uVar4 = 0;
    do {
      uVar3 = CONCAT31((int3)(uVar3 >> 8),(&DAT_00196ddc)[uVar4]) & 0xffff00ff;
      local_14 = local_14 + uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    puVar5 = (undefined4 *)(local_28 + 4 + (int)unaff_EBX);
    for (; unaff_EBX < puVar5; unaff_EBX = (undefined4 *)((int)unaff_EBX + 1)) {
      uVar3 = CONCAT31((int3)(uVar3 >> 8),*(undefined1 *)unaff_EBX);
      local_14 = local_14 + uVar3;
    }
    iVar2 = FUN_001257b0();
    if (iVar2 != 2) {
      FUN_000efd90(s_WARNING_network__SerialSP__SendM_00173808);
      return local_10;
    }
    return 0;
  }
  pcVar10 = s_WARNING_network__SerialSP__SendM_001738aa;
LAB_0011e9d5:
  FUN_000efd90(pcVar10);
  return local_10;
}

/******************************************************************************
 * Function : dk_Enumerate_11e9e8 (Ghidra: FUN_0011e9e8)
 * Prototype: undefined4 dk_Enumerate_11e9e8(void);
 * Address  : 0x11e9e8 (Size: 77 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::Enumerate() not initialised'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xefd90, 0xff3a4, 0xff4d8
 * Strings  :
 *   - 0x1738fb: "  WARNING network: SerialSP::Enumerate() not initialised\n"
 *   - 0x173935: "SERIAL_SESSION"
 ******************************************************************************/
undefined4 FUN_0011e9e8(void)

{
  int in_EAX;
  undefined4 uVar1;
  code *in_EDX;
  
  if (*(int *)(in_EAX + 0xd74) == 0) {
    FUN_000efd90(s_WARNING_network__SerialSP__Enume_001738fb);
    uVar1 = 0xff;
  }
  else {
    FUN_000ff4d8();
    uVar1 = FUN_000ff3a4();
    if (in_EDX != (code *)0x0) {
      (*in_EDX)(uVar1);
    }
    uVar1 = 0;
  }
  return uVar1;
}

/******************************************************************************
 * Function : dk_Enumerate_11ea38 (Ghidra: FUN_0011ea38)
 * Prototype: undefined1 dk_Enumerate_11ea38(void);
 * Address  : 0x11ea38 (Size: 192 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::Enumerate() not initialised'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xefd90, 0xff4f4, 0x100708
 * Strings  :
 *   - 0x173944: "  WARNING network: SerialSP::Enumerate() not initialised\n"
 *   - 0x17397e: "  WARNING network: SerialSP::Enumerate() failure on EnumeratePlayers()\n"
 *   - 0x1739c6: "  WARNING network: SerialSP::Enumerate() failure on LookForSystemMessages()\n"
 *   - 0x173a13: "REMOTE_PLAYER"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0011ea38(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_EAX;
  code *unaff_EBX;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puStack_18;
  char *pcStack_14;
  
  ppuVar3 = (undefined **)&stack0xfffffff0;
  if (*(int *)(in_EAX + 0xd74) == 0) {
    pcStack_14 = s_WARNING_network__SerialSP__Enume_00173944;
    puStack_18 = (undefined *)0x11ea57;
    FUN_000efd90();
    uVar2 = 0xff;
  }
  else {
    if (*(int *)(in_EAX + 0x7a8) == 0) {
      pcVar4 = s_REMOTE_PLAYER_00173a13;
      pcVar5 = &DAT_003e090d;
      _DAT_003e0901 = 0;
      _DAT_003e0905 = 0;
      _DAT_003e0909 = 0;
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      ppuVar3 = &puStack_18;
      puStack_18 = &DAT_003e0900;
      (*unaff_EBX)();
    }
    else {
      pcStack_14 = (char *)0x11ea78;
      cVar1 = FUN_00100708();
      if (cVar1 == '\0') {
        pcStack_14 = (char *)0x11ea86;
        cVar1 = FUN_000ff4f4();
        ppuVar3 = (undefined **)&stack0xfffffff0;
        if (cVar1 != '\0') {
          pcStack_14 = s_WARNING_network__SerialSP__Enume_0017397e;
          puStack_18 = (undefined *)0x11ea96;
          FUN_000efd90();
          ppuVar3 = (undefined **)&stack0xfffffff0;
        }
      }
      else {
        pcStack_14 = s_WARNING_network__SerialSP__Enume_001739c6;
        puStack_18 = (undefined *)0x11eaa9;
        FUN_000efd90();
      }
    }
    uVar2 = *(undefined1 *)((int)ppuVar3 + 4);
  }
  return uVar2;
}

/******************************************************************************
 * Function : dk_Stop_11eaf8 (Ghidra: FUN_0011eaf8)
 * Prototype: undefined8 dk_Stop_11eaf8(void);
 * Address  : 0x11eaf8 (Size: 138 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::Stop() not initialised'
 * Callers  : 1 -> 0x11fb98
 * Callees  : 5 -> 0xefd90, 0xff398, 0xff628, 0xff630, 0x100718
 * Strings  :
 *   - 0x173a21: "  WARNING network: SerialSP::Stop() not initialised\n"
 *   - 0x173a56: "  WARNING network: SerialSP::Stop() not connected to a session\n"
 *   - 0x173a96: "  WARNING network: SerialSP::Stop() deletePlayerBuffer is too small\n"
 ******************************************************************************/
undefined8 FUN_0011eaf8(void)

{
  int in_EAX;
  uint uVar1;
  undefined4 uVar2;
  undefined1 extraout_DL;
  undefined1 extraout_DL_00;
  undefined1 extraout_DL_01;
  undefined1 uVar3;
  undefined4 in_EDX;
  
  uVar1 = FUN_000ff628();
  if (*(int *)(in_EAX + 0xd74) == 0) {
    uVar2 = FUN_000efd90(s_WARNING_network__SerialSP__Stop__00173a21);
    uVar3 = extraout_DL;
  }
  else {
    if (*(int *)(in_EAX + 0x7a8) == 0) {
      uVar2 = FUN_000efd90(s_WARNING_network__SerialSP__Stop__00173a56);
      return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),extraout_DL_00));
    }
    if (8 < uVar1) {
      uVar2 = FUN_000efd90(s_WARNING_network__SerialSP__Stop__00173a96);
      return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),extraout_DL_01));
    }
    FUN_000ff630();
    FUN_00100718();
    *(undefined4 *)(in_EAX + 0x7a8) = 0;
    uVar2 = FUN_000ff398();
    uVar3 = 0;
  }
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)uVar2 >> 8),uVar3));
}

/******************************************************************************
 * Function : dk_ReadMessage_11eb84 (Ghidra: FUN_0011eb84)
 * Prototype: undefined4 dk_ReadMessage_11eb84(void);
 * Address  : 0x11eb84 (Size: 73 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::ReadMessage() invalid m_localPlayerId'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xefd90, 0x11ece0
 * Strings  :
 *   - 0x173adb: "  WARNING network: SerialSP::ReadMessage() invalid m_localPlayerId\n"
 ******************************************************************************/
undefined4 FUN_0011eb84(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 uVar2;
  
  iVar1 = FUN_0011ece0();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*in_EAX == 0) {
      *in_EDX = 1;
    }
    else if (*in_EAX == 1) {
      *in_EDX = 0;
    }
    else {
      FUN_000efd90(s_WARNING_network__SerialSP__ReadM_00173adb);
    }
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : dk_PeekMessage_11ebd0 (Ghidra: FUN_0011ebd0)
 * Prototype: undefined4 dk_PeekMessage_11ebd0(void);
 * Address  : 0x11ebd0 (Size: 76 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::PeekMessage() invalid m_localPlayerId'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xefd90, 0x11ece0
 * Strings  :
 *   - 0x173b1f: "  WARNING network: SerialSP::PeekMessage() invalid m_localPlayerId\n"
 ******************************************************************************/
undefined4 FUN_0011ebd0(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 *in_EDX;
  undefined4 uVar2;
  
  iVar1 = FUN_0011ece0();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*in_EAX == 0) {
      *in_EDX = 1;
    }
    else if (*in_EAX == 1) {
      *in_EDX = 0;
    }
    else {
      FUN_000efd90(s_WARNING_network__SerialSP__PeekM_00173b1f);
    }
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : dk_SendAck_11ec1c (Ghidra: FUN_0011ec1c)
 * Prototype: void dk_SendAck_11ec1c(void);
 * Address  : 0x11ec1c (Size: 194 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::SendAck() failure on CommHandler::Writ'
 * Callers  : 1 -> 0x11ee0c
 * Callees  : 2 -> 0xefd90, 0x1257b0
 * Strings  :
 *   - 0x173ba2: "  WARNING network: SerialSP::SendAck() failure on CommHandler::WriteBytes\n"
 ******************************************************************************/
void FUN_0011ec1c(void)

{
  uint uVar1;
  int iVar2;
  undefined1 in_DL;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_1c [2];
  
  local_1c[0] = 0;
  puVar3 = (undefined4 *)&DAT_00196de4;
  puVar5 = &DAT_003e0d6c;
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  piVar4 = local_1c;
  piVar6 = (int *)&DAT_003e0d70;
  for (iVar2 = 0; piVar4 = piVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar6 = *piVar4;
    piVar6 = piVar6 + 1;
  }
  for (iVar2 = 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(char *)piVar6 = (char)*piVar4;
    piVar4 = (int *)((int)piVar4 + 1);
    piVar6 = (int *)((int)piVar6 + 1);
  }
  uVar1 = 0;
  do {
    local_1c[0] = local_1c[0] + (uint)(byte)(&DAT_00196de4)[uVar1];
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  local_1c[0] = local_1c[0] + (CONCAT31((int3)(uVar1 >> 8),in_DL) & 0xffff00ff);
  piVar4 = local_1c;
  puVar3 = (undefined4 *)&DAT_003e0d71;
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = *(undefined1 *)piVar4;
    piVar4 = (undefined4 *)((int)piVar4 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  iVar2 = FUN_001257b0();
  if (iVar2 != 7) {
    FUN_000efd90(s_WARNING_network__SerialSP__SendA_00173ba2);
  }
  return;
}

/******************************************************************************
 * Function : dk_PrivateReceive_11ece0 (Ghidra: FUN_0011ece0)
 * Prototype: int dk_PrivateReceive_11ece0(void);
 * Address  : 0x11ece0 (Size: 298 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'WARNING network: SerialSP::PrivateReceive() invalid mode value'
 * Callers  : 2 -> 0x11eb84, 0x11ebd0
 * Callees  : 4 -> 0xefd90, 0x11ee0c, 0x11f13c, 0x125674
 * Strings  :
 *   - 0x173bed: "  WARNING network: SerialSP::PrivateReceive() invalid mode value\n"
 ******************************************************************************/
int FUN_0011ece0(void)

{
  int iVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  char in_CL;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_EDX;
  int *unaff_EBX;
  int *piVar4;
  
  bVar2 = true;
  iVar1 = *unaff_EBX;
  if ((in_CL == '\0') || (in_CL == '\x01')) {
    iVar3 = FUN_0011ee0c();
    if ((iVar3 == 0) && (*unaff_EBX == 0)) {
      while (bVar2) {
        iVar3 = FUN_00125674();
        if (iVar3 == -1) {
          bVar2 = false;
          iVar3 = extraout_ECX;
        }
        else {
          iVar3 = 0;
          piVar4 = (int *)(in_EAX + 0xdca);
          do {
            if (*piVar4 == 0) {
              if (iVar3 == 0) {
                *(undefined1 *)(piVar4 + 1) = 0;
                *(undefined4 *)((int)piVar4 + 5) = 0;
                *piVar4 = 1;
                FUN_0011f13c();
                iVar3 = extraout_ECX_00;
              }
            }
            else {
              FUN_0011f13c();
              iVar3 = extraout_ECX_01;
            }
            piVar4 = (int *)((int)piVar4 + 0x419);
          } while (piVar4 != (int *)(in_EAX + 0x36c4));
          *unaff_EBX = iVar1;
          iVar3 = FUN_0011ee0c();
          if ((iVar3 != 0) || (*unaff_EBX != 0)) {
            bVar2 = false;
          }
        }
      }
    }
  }
  else {
    FUN_000efd90(s_WARNING_network__SerialSP__Priva_00173bed);
    iVar3 = extraout_EDX;
  }
  return iVar3;
}

/******************************************************************************
 * Function : dk_warning_network_serialsp_privatereceive_11ee0c (Ghidra: FUN_0011ee0c)
 * Prototype: undefined4 dk_warning_network_serialsp_privatereceive_11ee0c(void);
 * Address  : 0x11ee0c (Size: 694 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'WARNING network: SerialSP::PrivateReceive addPlayerBuffer to'
 * Callers  : 1 -> 0x11ece0
 * Callees  : 6 -> 0xefd90, 0xff53c, 0xff550, 0xff8c0, 0x1002dc, 0x11ec1c
 * Strings  :
 *   - 0x173c2f: "  WARNING network: SerialSP::PrivateReceive addPlayerBuffer too small\n"
 ******************************************************************************/
undefined4 FUN_0011ee0c(void)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int extraout_ECX;
  uint uVar5;
  int iVar6;
  undefined4 *in_EDX;
  int iVar7;
  uint uVar8;
  uint *unaff_EBX;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  byte bVar12;
  int local_2c;
  int *local_18;
  uint local_14;
  char local_10;
  
  bVar12 = 0;
  uVar2 = *unaff_EBX;
  uVar10 = 0;
  iVar3 = in_EAX + 0xdd3;
  local_14 = 0;
  *unaff_EBX = 0;
  local_18 = (int *)(in_EAX + 0xdca);
  do {
    if ((*local_18 != 0) && ((char)local_18[1] == '\x05')) {
      iVar6 = 0;
      uVar8 = 0;
      piVar4 = (int *)(in_EAX + 0xdca);
      do {
        if ((*piVar4 != 0) && (uVar8 != local_14)) {
          *piVar4 = 0;
        }
        uVar8 = uVar8 + 1;
        piVar4 = (int *)((int)piVar4 + 0x419);
      } while (uVar8 < 10);
      bVar1 = *(byte *)(local_18 + 0x104);
      if (bVar1 < 0x1b) {
        if (bVar1 == 4) {
          if ((char)local_18[0x105] == *(char *)(in_EAX + 0xdc0)) {
            if (*(int *)(in_EAX + 0xdc2) == 0) {
              *local_18 = 0;
            }
            else {
              *(undefined4 *)(in_EAX + 0xdc2) = 0;
              *(char *)(in_EAX + 0xdc0) = *(char *)(in_EAX + 0xdc0) + '\x01';
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
        if (0x1b < bVar1) {
          if (bVar1 != 0x1e) goto LAB_0011ef18;
          if ((char)local_18[0x105] != *(char *)(in_EAX + 0xdc1)) {
            FUN_0011ec1c(iVar3);
            iVar6 = extraout_ECX;
            goto LAB_0011eea3;
          }
        }
        iVar6 = 1;
      }
LAB_0011ef18:
      if (iVar6 == 0) {
        *local_18 = 0;
      }
      else {
        FUN_000ff8c0();
        uVar8 = local_2c + 4;
        *unaff_EBX = uVar8;
        if (uVar8 <= uVar2) {
          puVar9 = (undefined4 *)((int)local_18 + 9);
          puVar11 = in_EDX;
          for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + (uint)bVar12 * -2 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
          }
          if (in_ECX != 0) {
            if ((char)local_18[0x104] == '\x1e') {
              FUN_0011ec1c(iVar3);
              *(char *)(in_EAX + 0xdc1) = *(char *)(in_EAX + 0xdc1) + '\x01';
            }
            FUN_000ff8c0();
            if (local_10 == '\x02') {
              *(undefined1 *)(in_EAX + 0xdc0) = 0;
              *(undefined1 *)(in_EAX + 0xdc1) = 0;
              *(undefined4 *)(in_EAX + 0xdc2) = 0;
            }
            if (local_10 == '\x01') {
              iVar6 = 0;
              *local_18 = 0;
              uVar8 = 0;
              iVar7 = in_EAX;
              if (*(int *)(in_EAX + 0x7ac) != 0) {
                do {
                  if (*(int *)(iVar7 + 0x7b1) == 0) {
                    iVar6 = uVar8 * 0x2d + in_EAX + 0x7bd;
                  }
                  uVar8 = uVar8 + 1;
                  iVar7 = iVar7 + 0x2d;
                } while (uVar8 < *(uint *)(in_EAX + 0x7ac));
              }
              if (iVar6 != 0) {
                uVar8 = FUN_000ff53c();
                if (uVar8 < 0x29) {
                  FUN_000ff550();
                  FUN_001002dc();
                }
                else {
                  FUN_000efd90(s_WARNING_network__SerialSP__Priva_00173c2f);
                }
              }
            }
            *local_18 = 0;
          }
          uVar10 = 1;
        }
      }
    }
    iVar3 = iVar3 + 0x419;
    local_18 = (int *)((int)local_18 + 0x419);
    local_14 = local_14 + 1;
    if (9 < local_14) {
      return uVar10;
    }
  } while( true );
}

/******************************************************************************
 * Function : dk_LbNETWORK_11f4d8 (Ghidra: FUN_0011f4d8)
 * Prototype: void dk_LbNETWORK_11f4d8(void);
 * Address  : 0x11f4d8 (Size: 48 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : References 'LbNETWORK : Releasing ModemSP'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xefd90, 0x11e254
 * Strings  :
 *   - 0x173c78: "  LbNETWORK : Releasing ModemSP\n"
 ******************************************************************************/
void FUN_0011f4d8(void)

{
  int extraout_EDX;
  
  FUN_000efd90(s_LbNETWORK___Releasing_ModemSP_00173c78);
  if (*(int *)(extraout_EDX + 0x7a8) != 0) {
    (**(code **)(*(int *)(extraout_EDX + 0xd7c) + 0xc))();
  }
  FUN_0011e254();
  return;
}

/******************************************************************************
 * Function : dk_MODEM_11f53c (Ghidra: FUN_0011f53c)
 * Prototype: undefined1 dk_MODEM_11f53c(int *param_1);
 * Address  : 0x11f53c (Size: 730 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : Log prefix 'MODEM: USER ABORTS MODEM INIT FUNCTION'
 * Callers  : 0 -> 
 * Callees  : 9 -> 0xefd90, 0x11e484, 0x1258dc, 0x1259b0, 0x125c34, 0x1263ec, 0x1265f8, 0x126618, 0x12665c
 * Strings  :
 *   - 0x173c99: "MODEM: USER ABORTS MODEM INIT FUNCTION"
 *   - 0x173cc0: "MODEM: Didin't get modem Response from InitModem\n"
 *   - 0x173cf2: "MODEM: Modem Response wasn't OK on InitModem\n"
 *   - 0x173d20: "MODEM RESPONSE CODE = %s\n"
 *   - 0x173d3a: "MODEM RESPONSE CODE = %s\n"
 *   - 0x173d54: "ANSWER MODEM RESPONSE CODE = %s\n"
 *   - 0x173d75: "MODEM: I COULDNT JOIN SERVER SO I MUST HANGUP THE MODEM\n"
 *   - 0x173dae: "MODEM: TURN OFF AUTO ANSWER BY CALLING INITIALISE\n"
 *   - 0x173de1: "MODEM: Didn't responsded to Auto Answer Command\n"
 *   - 0x173e12: "MODEM: Responded with the following return Code\n"
 *   - 0x173e43: "MODEM RESPONSE CODE = %s\n"
 ******************************************************************************/
undefined1 FUN_0011f53c(int *param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  undefined1 uVar3;
  undefined1 extraout_DL;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  
  uVar3 = 0xff;
  if (*(int *)(in_EAX + 0xd74) != 0) {
    if (*(int *)(in_EAX + 0x7a8) != 0) {
      (**(code **)(*(int *)(in_EAX + 0xd7c) + 0xc))();
      param_1 = extraout_ECX;
    }
    if (param_1 == (int *)0x0) {
      uVar3 = 0xff;
    }
    else {
      if (*param_1 != 0) {
        *(int *)(*(int *)(in_EAX + 0xd94) + 0x50) = *param_1 * 100;
      }
      if (param_1[1] != 0) {
        *(int *)(*(int *)(in_EAX + 0xd94) + 0x54) = param_1[1] * 100;
      }
      if (param_1[0x2b] != 0) {
        FUN_001265f8();
      }
      FUN_00126618();
      FUN_0012665c();
      iVar2 = FUN_001259b0();
      FUN_001265f8();
      if (extraout_ECX_00 == -7) {
        FUN_000efd90(s_MODEM__USER_ABORTS_MODEM_INIT_FU_00173c99);
        param_1[0x2a] = extraout_ECX_01;
        return 0xff;
      }
      if (extraout_ECX_00 == -1) {
        FUN_000efd90(s_MODEM__Didin_t_get_modem_Respons_00173cc0);
        param_1[0x2a] = extraout_ECX_02;
        return 0xff;
      }
      piVar6 = param_1 + 2;
      if (iVar2 != 1) {
        FUN_000efd90(s_MODEM__Modem_Response_wasn_t_OK_o_00173cf2);
        pcVar4 = *(char **)(in_EAX + 0xd94);
        pcVar5 = extraout_ECX_03;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        param_1[0x2a] = iVar2;
        FUN_000efd90(s_MODEM_RESPONSE_CODE____s_00173d20,*(undefined4 *)(in_EAX + 0xd94));
        return 0xff;
      }
      pcVar4 = *(char **)(in_EAX + 0xd94);
      do {
        cVar1 = *pcVar4;
        *(char *)piVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        *(char *)((int)piVar6 + 1) = cVar1;
        piVar6 = (int *)((int)piVar6 + 2);
      } while (cVar1 != '\0');
      param_1[0x2a] = 1;
      FUN_000efd90(s_MODEM_RESPONSE_CODE____s_00173d3a,*(undefined4 *)(in_EAX + 0xd94));
      FUN_001258dc();
      iVar2 = FUN_001263ec();
      FUN_000efd90(s_ANSWER_MODEM_RESPONSE_CODE____s_00173d54,*(undefined4 *)(in_EAX + 0xd94));
      if (((extraout_EDX != 1) && (extraout_EDX != 3)) && (extraout_EDX != 2)) {
        if (extraout_EDX == -1) {
          FUN_000efd90(s_MODEM__Didn_t_responsded_to_Auto_00173de1);
          param_1[0x2a] = extraout_EDX_00;
          return 0xff;
        }
        FUN_000efd90(s_MODEM__Responded_with_the_follow_00173e12);
        pcVar4 = *(char **)(in_EAX + 0xd94);
        pcVar5 = extraout_ECX_04;
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        param_1[0x2a] = extraout_EDX_01;
        FUN_000efd90(s_MODEM_RESPONSE_CODE____s_00173e43,*(undefined4 *)(in_EAX + 0xd94));
        return 0xff;
      }
      cVar1 = FUN_0011e484(0);
      uVar3 = 0;
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          FUN_000efd90(s_MODEM__I_COULDNT_JOIN_SERVER_SO_I_00173d75);
          FUN_00125c34();
        }
        FUN_000efd90(s_MODEM__TURN_OFF_AUTO_ANSWER_BY_C_00173dae);
        FUN_001259b0();
        uVar3 = extraout_DL;
      }
    }
  }
  return uVar3;
}

/******************************************************************************
 * Function : dk_MODEM_11f818 (Ghidra: FUN_0011f818)
 * Prototype: char dk_MODEM_11f818(void);
 * Address  : 0x11f818 (Size: 883 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : Log prefix 'MODEM: IS BUSY OR ENGAGED'
 * Callers  : 0 -> 
 * Callees  : 10 -> 0xe6a10, 0xefd90, 0x11e554, 0x1259b0, 0x125ab4, 0x125c34, 0x1265f8, 0x126600, 0x126618, 0x12665c
 * Strings  :
 *   - 0x173e5d: "USER ABORTS MODEM INIT FUNCTION\n"
 *   - 0x173e7e: "DIDN'T GET MODEM RESPONSE FROM INIT FUNCTION\n"
 *   - 0x173eac: "DIDN'T GET OK MODEM RESPONSE CODE FOR INIT= %s\n"
 *   - 0x173edc: "MODEM RESPONSE CODE = %s\n"
 *   - 0x173ef6: "USER ABORTS MODEM DIALING FUNCTION\n"
 *   - 0x173f1a: "OK ILL BETTER HANGUP THE MODEM JUST IN-CASE\n"
 *   - 0x173f47: "NO MODEM RESPONSE FROM DIALING\n"
 *   - 0x173f67: "OK ILL BETTER HANGUP THE MODEM JUST IN-CASE\n"
 *   - 0x173f94: "MODEM RESPONSE CODE = %s\n"
 *   - 0x173fae: "NO SERVER FOUND HANGINGUP MODEM\n"
 *   - 0x173fcf: "MODEM: IS BUSY OR ENGAGED\n"
 *   - 0x173fea: "MODEM: THERE IS NO DIALTONE\n"
 *   - 0x174007: "MODEM DIDN'T UNDERSTAND MODEM STRING\n"
 *   - 0x17402d: "MODEM: THERE IS NOCARRIER\n"
 ******************************************************************************/
char FUN_0011f818(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  char extraout_CL;
  int *in_ECX;
  int *extraout_ECX;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char local_10;
  
  local_10 = -1;
  if (*(int *)(in_EAX + 0xd74) != 0) {
    if (*(int *)(in_EAX + 0x7a8) != 0) {
      (**(code **)(*(int *)(in_EAX + 0xd7c) + 0xc))();
      in_ECX = extraout_ECX;
    }
    if (in_ECX != (int *)0x0) {
      if (*in_ECX != 0) {
        *(int *)(*(int *)(in_EAX + 0xd94) + 0x50) = *in_ECX * 100;
      }
      if (in_ECX[1] != 0) {
        *(int *)(*(int *)(in_EAX + 0xd94) + 0x54) = in_ECX[1] * 100;
      }
      if (in_ECX[0x2b] != 0) {
        FUN_001265f8();
      }
      if (in_ECX[0x2c] != 0) {
        FUN_00126600();
      }
      FUN_00126618();
      FUN_0012665c();
      iVar2 = FUN_001259b0();
      FUN_001265f8();
      if (iVar2 == -7) {
        FUN_000efd90(s_USER_ABORTS_MODEM_INIT_FUNCTION_00173e5d);
        in_ECX[0x2a] = -7;
        local_10 = -1;
      }
      else {
        if (iVar2 == -1) {
          FUN_000efd90(s_DIDN_T_GET_MODEM_RESPONSE_FROM_I_00173e7e);
          in_ECX[0x2a] = -1;
          return -1;
        }
        piVar4 = in_ECX + 2;
        if (iVar2 != 1) {
          pcVar3 = *(char **)(in_EAX + 0xd94);
          do {
            cVar1 = *pcVar3;
            *(char *)piVar4 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar3[1];
            pcVar3 = pcVar3 + 2;
            *(char *)((int)piVar4 + 1) = cVar1;
            piVar4 = (int *)((int)piVar4 + 2);
          } while (cVar1 != '\0');
          in_ECX[0x2a] = iVar2;
          FUN_000efd90(s_DIDN_T_GET_OK_MODEM_RESPONSE_COD_00173eac,*(undefined4 *)(in_EAX + 0xd94));
          return -1;
        }
        pcVar3 = *(char **)(in_EAX + 0xd94);
        piVar5 = piVar4;
        do {
          cVar1 = *pcVar3;
          *(char *)piVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          *(char *)((int)piVar5 + 1) = cVar1;
          piVar5 = (int *)((int)piVar5 + 2);
        } while (cVar1 != '\0');
        in_ECX[0x2a] = 1;
        FUN_000efd90(s_MODEM_RESPONSE_CODE____s_00173edc,*(undefined4 *)(in_EAX + 0xd94));
        iVar2 = FUN_00125ab4();
        FUN_00126600();
        if (iVar2 == -7) {
          FUN_000efd90(s_USER_ABORTS_MODEM_DIALING_FUNCTI_00173ef6);
          in_ECX[0x2a] = -7;
          FUN_000efd90(s_OK_ILL_BETTER_HANGUP_THE_MODEM_J_00173f1a);
          FUN_00125c34();
          return -1;
        }
        if (iVar2 == -1) {
          FUN_000efd90(s_NO_MODEM_RESPONSE_FROM_DIALING_00173f47);
          in_ECX[0x2a] = -1;
          FUN_000efd90(s_OK_ILL_BETTER_HANGUP_THE_MODEM_J_00173f67);
          FUN_00125c34();
          return -1;
        }
        pcVar3 = *(char **)(in_EAX + 0xd94);
        do {
          cVar1 = *pcVar3;
          *(char *)piVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          *(char *)((int)piVar4 + 1) = cVar1;
          piVar4 = (int *)((int)piVar4 + 2);
        } while (cVar1 != '\0');
        in_ECX[0x2a] = iVar2;
        FUN_000efd90(s_MODEM_RESPONSE_CODE____s_00173f94,*(undefined4 *)(in_EAX + 0xd94));
        if (iVar2 == 2) {
          local_10 = FUN_0011e554();
          if (local_10 == -1) {
            FUN_000e6a10();
            in_ECX[0x2a] = -2;
            FUN_000efd90(s_NO_SERVER_FOUND_HANGINGUP_MODEM_00173fae);
            FUN_00125c34();
            return extraout_CL;
          }
        }
        else {
          if (iVar2 == 4) {
            FUN_000efd90(s_MODEM__IS_BUSY_OR_ENGAGED_00173fcf);
            return -1;
          }
          if (iVar2 == 7) {
            FUN_000efd90(s_MODEM__THERE_IS_NO_DIALTONE_00173fea);
            return -1;
          }
          if (iVar2 == 5) {
            FUN_000efd90(s_MODEM_DIDN_T_UNDERSTAND_MODEM_ST_00174007);
            return -1;
          }
          if (iVar2 == 6) {
            FUN_000efd90(s_MODEM__THERE_IS_NOCARRIER_0017402d);
            return -1;
          }
        }
      }
    }
  }
  return local_10;
}

/******************************************************************************
 * Function : dk_calling_hangupmodem_11fb98 (Ghidra: FUN_0011fb98)
 * Prototype: undefined8 dk_calling_hangupmodem_11fb98(void);
 * Address  : 0x11fb98 (Size: 49 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'CALLING HANGUPMODEM'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xefd90, 0x11eaf8, 0x125c34
 * Strings  :
 *   - 0x174048: "CALLING HANGUPMODEM\n"
 ******************************************************************************/
undefined8 FUN_0011fb98(void)

{
  int in_EAX;
  undefined4 in_EDX;
  undefined1 unaff_BL;
  
  if (*(int *)(in_EAX + 0x7a8) != 0) {
    unaff_BL = FUN_0011eaf8();
    FUN_000efd90(s_CALLING_HANGUPMODEM_00174048);
    in_EAX = FUN_00125c34();
  }
  return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),unaff_BL));
}

/******************************************************************************
 * Function : sub_124d1c (Ghidra: FUN_00124d1c)
 * Prototype: undefined4 sub_124d1c(void);
 * Address  : 0x124d1c (Size: 165 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x125168, 0x1258c4
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x17429e: "BAUD = %d\n"
 ******************************************************************************/
undefined4 FUN_00124d1c(void)

{
  int iVar1;
  int in_EDX;
  int unaff_EBX;
  
  if (in_EDX < 4) {
    iVar1 = (&DAT_003e0d9c)[in_EDX * 0x409];
    if (unaff_EBX < 300) {
      unaff_EBX = 300;
    }
    else if (0x1c200 < unaff_EBX) {
      unaff_EBX = 0x1c200;
    }
    out(*(short *)(iVar1 + 0x1096) + 3,0x83);
    out(*(short *)(iVar1 + 0x1096) + 1,(char)((ulonglong)(0x1c200 / (longlong)unaff_EBX) >> 8));
    out(*(undefined2 *)(iVar1 + 0x1096),(char)(0x1c200 / (longlong)unaff_EBX));
    out(*(short *)(iVar1 + 0x1096) + 3,3);
    FUN_000efd90(s_BAUD____d_0017429e,unaff_EBX);
    return 0;
  }
  return 0xffffffff;
}

/******************************************************************************
 * Function : dk_serialhandler_size_port_irq_125630 (Ghidra: FUN_00125630)
 * Prototype: undefined4 * dk_serialhandler_size_port_irq_125630(void);
 * Address  : 0x125630 (Size: 546 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'SERIALHANDLER size %d Port %x IRQ %x INT VECT %x'
 * Callers  : 1 -> 0x11e314
 * Callees  : 5 -> 0xefd90, 0xf7786, 0x124f30, 0x125034, 0x125168
 * Strings  :
 *   - 0x17426c: "SERIALHANDLER size %d Port %x IRQ %x INT VECT %x\n"
 ******************************************************************************/
undefined4 * FUN_00125630(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined2 *extraout_ECX;
  int iVar2;
  uint in_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  undefined2 local_2c;
  int local_20;
  undefined1 local_18;
  
  bVar5 = 0;
  *(uint *)(in_EAX + 0x198) = in_EDX;
  if (3 < (int)in_EDX) {
    return (undefined4 *)0x0;
  }
  if ((*(byte *)(&DAT_003e0da6 + in_EDX * 0x812) & 1) == 0) {
    uVar6 = 0x100;
    FUN_000f7786(0x100,0x10d);
    if (local_20 != 0) {
      return (undefined4 *)0x0;
    }
    if (extraout_ECX != (undefined2 *)0x0) {
      *extraout_ECX = local_2c;
    }
    puVar1 = (undefined4 *)((uVar6 & 0xffff) << 4);
  }
  else {
    puVar1 = (undefined4 *)(&DAT_003e0d9c)[in_EDX * 0x409];
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar3 = &DAT_00150068;
    puVar4 = puVar1;
    for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (iVar2 = 2; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + (uint)bVar5 * -2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
    *(undefined2 *)((int)puVar1 + 2) = *(undefined2 *)(&DAT_003e0da0 + in_EDX * 0x1024);
    FUN_000efd90(s_SERIALHANDLER_size__d_Port__x_IR_0017426c,0x96,*(undefined2 *)((int)puVar1 + 2),
                 *(undefined2 *)(&DAT_003e0da4 + in_EDX * 0x1024),
                 *(undefined2 *)(&DAT_003e0da2 + in_EDX * 0x1024));
    local_18 = (undefined1)in_EDX;
    *(undefined1 *)(puVar1 + 0x42a) = local_18;
    *(undefined2 *)((int)puVar1 + 0x1096) =
         *(undefined2 *)(&DAT_003e0da0 + (in_EDX & 0xff) * 0x1024);
    *(undefined2 *)(puVar1 + 0x426) =
         *(undefined2 *)(&DAT_003e0da2 + (uint)*(byte *)(puVar1 + 0x42a) * 0x1024);
    *(undefined2 *)((int)puVar1 + 0x109a) =
         *(undefined2 *)(&DAT_003e0da4 + (uint)*(byte *)(puVar1 + 0x42a) * 0x1024);
    *(undefined2 *)(puVar1 + 0x428) = 0;
    *(undefined2 *)((int)puVar1 + 0x10a2) = 0;
    *(undefined2 *)(puVar1 + 0x427) = 0;
    *(undefined2 *)((int)puVar1 + 0x109e) = 0;
    (&DAT_003e0d9c)[(uint)*(byte *)(puVar1 + 0x42a) * 0x409] = puVar1;
    (&DAT_003e0da6)[(uint)*(byte *)(puVar1 + 0x42a) * 0x812] = 1;
    FUN_00124f30();
    FUN_00125034();
    FUN_00125168();
    puVar1[0x429] = 0x2580;
  }
  return puVar1;
}

/******************************************************************************
 * Function : dk_commhandler_readserialdev_null_parameter_1262a4 (Ghidra: FUN_001262a4)
 * Prototype: void dk_commhandler_readserialdev_null_parameter_1262a4(void);
 * Address  : 0x1262a4 (Size: 295 bytes)
 * Module   : bflib/bflib_network.cpp [bflib_network_signature]
 * Naming   : String 'CommHandler::ReadSerialDev NULL parameter passed'
 * Callers  : 1 -> 0x11e314
 * Callees  : 1 -> 0xefd90
 * Strings  :
 *   - 0x174397: "CommHandler::ReadSerialDev NULL parameter passed\n"
 ******************************************************************************/
void FUN_001262a4(void)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  uint *in_EDX;
  char *pcVar3;
  char *pcVar4;
  
  if (in_EDX == (uint *)0x0) {
    FUN_000efd90(s_CommHandler__ReadSerialDev_NULL_p_00174397);
  }
  else {
    if ((*in_EDX < 4) && (in_EDX[2] != 0xffffffff)) {
      uVar2 = in_EDX[2];
      *(short *)(&DAT_003e0da4 + *in_EDX * 0x1024) = (short)uVar2;
      *(short *)(&DAT_003e0da2 + *in_EDX * 0x1024) = (short)uVar2 + 8;
    }
    if (in_EDX[3] == 2) {
      pcVar3 = (char *)in_EDX[4];
      pcVar4 = (char *)(in_EAX + 0x58);
      if (pcVar3 == (char *)0x0) {
        in_EDX[4] = (uint)pcVar4;
      }
      else {
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
      pcVar3 = (char *)in_EDX[5];
      pcVar4 = (char *)(in_EAX + 0xa8);
      if (pcVar3 == (char *)0x0) {
        in_EDX[5] = (uint)pcVar4;
      }
      else {
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
      pcVar3 = (char *)in_EDX[6];
      pcVar4 = (char *)(in_EAX + 0xf8);
      if (pcVar3 == (char *)0x0) {
        in_EDX[6] = (uint)pcVar4;
      }
      else {
        do {
          cVar1 = *pcVar3;
          *pcVar4 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar3[1];
          pcVar3 = pcVar3 + 2;
          pcVar4[1] = cVar1;
          pcVar4 = pcVar4 + 2;
        } while (cVar1 != '\0');
      }
      pcVar3 = (char *)in_EDX[7];
      pcVar4 = (char *)(in_EAX + 0x148);
      if (pcVar3 == (char *)0x0) {
        in_EDX[7] = (uint)pcVar4;
        return;
      }
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
    }
  }
  return;
}

