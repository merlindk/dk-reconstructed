/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: packet.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 38
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_05d32c (Ghidra: FUN_0005d32c)
 * Prototype: void sub_05d32c(void);
 * Address  : 0x5d32c (Size: 32 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x49426, 0x5f6c5
 * Callees  : 2 -> 0x53c6b, 0x5cd55
 ******************************************************************************/
void FUN_0005d32c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_0005cd55();
  iVar2 = FUN_00053c6b();
  if (iVar2 != -1) {
    for (uVar3 = 0; uVar3 < 0x56; uVar3 = (uint)(byte)((char)uVar3 + 1)) {
      iVar1 = uVar3 * 0x39;
      if (((*(char **)((int)&DAT_0034bc09 + iVar1) != (char *)0x0) &&
          (uVar3 = (uint)CONCAT11((&DAT_0034bbd9)[iVar1],(char)uVar3),
          (&DAT_0034bbd9)[iVar1] == (&DAT_0034baea)[iVar2 * 0x20])) &&
         ((&DAT_0034bbdc)[iVar1] == '\x03')) {
        if (**(char **)((int)&DAT_0034bc09 + iVar1) == '\0') {
          (&DAT_0034bbd7)[iVar1] = 0;
        }
        else {
          (&DAT_0034bbd7)[iVar1] = 1;
        }
      }
    }
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_05d34c (Ghidra: FUN_0005d34c)
 * Prototype: void sub_05d34c(void);
 * Address  : 0x5d34c (Size: 13 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5aee2, 0x5d280
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005d34c(void)

{
  int iVar1;
  int in_EAX;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < 0x56; uVar2 = (uint)(byte)((char)uVar2 + 1)) {
    iVar1 = uVar2 * 0x39;
    if (((*(char **)((int)&DAT_0034bc09 + iVar1) != (char *)0x0) &&
        (uVar2 = (uint)CONCAT11((&DAT_0034bbd9)[iVar1],(char)uVar2),
        (&DAT_0034bbd9)[iVar1] == *(char *)(in_EAX + 0x14))) && ((&DAT_0034bbdc)[iVar1] == '\x03'))
    {
      if (**(char **)((int)&DAT_0034bc09 + iVar1) == '\0') {
        (&DAT_0034bbd7)[iVar1] = 0;
      }
      else {
        (&DAT_0034bbd7)[iVar1] = 1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_Exchange_05d35c (Ghidra: FUN_0005d35c)
 * Prototype: void dk_LbNetwork_Exchange_05d35c(void);
 * Address  : 0x5d35c (Size: 1113 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp:133 ("Unable to reinitialise ExchangeBuffer"); packet.cpp:170 ("LbNetwork_Exchange failed"); packet.cpp:224 ("LbNetwork_Exchange failed"); packet.cpp:233 ("Checksums different")
 * Naming   : References 'LbNetwork_Exchange failed'
 * Callers  : 2 -> 0x2c833, 0x2dfac
 * Callees  : 15 -> 0x3308c, 0x402e5, 0x404f7, 0x40832, 0x40992, 0x5ddee, 0x5de00, 0x618f5, 0x69a12, 0xdc184 ...
 * Strings  :
 *   - 0x1661f2: "packet.cpp"
 *   - 0x166217: "packet.cpp"
 *   - 0x16623c: "packet.cpp"
 *   - 0x16625b: "packet.cpp"
 *   - 0x1661cc: "Unable to reinitialise ExchangeBuffer"
 *   - 0x1661fd: "LbNetwork_Exchange failed"
 *   - 0x166222: "LbNetwork_Exchange failed"
 *   - 0x166247: "Checksums different"
 ******************************************************************************/
void FUN_0005d35c(void)

{
  byte *pbVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  piVar9 = &local_28;
  if (DAT_002ebaf6 == '\x02') {
    DAT_002eb541 = '\x01';
  }
  else {
    DAT_002eb541 = '\0';
    iVar5 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar5) != 0) {
        DAT_002eb541 = DAT_002eb541 + '\x01';
      }
      iVar5 = iVar5 + 0x24;
    } while (iVar5 != 0x90);
  }
  local_24 = (uint)(byte)(&DAT_0019d0f4)[DAT_002f10ce._3_1_ * 0x4ef];
  uStack_2c = 0x5d3bc;
  FUN_000404f7();
  iVar5 = DAT_002f10ce._3_1_ * 0x4ef;
  (&DAT_0019d0f4)[iVar5] = (undefined1)local_24;
  cVar4 = DAT_002f10ce._3_1_;
  if (DAT_002ebaf6 == '\x02') {
    (&DAT_0019d0c8)[iVar5] = (&DAT_0019d0c8)[iVar5] | 1;
    (&DAT_0019d0f3)[iVar5] = cVar4;
    if (DAT_002ee8d4 == '\0') {
      uVar3 = 2;
    }
    else {
      uVar3 = 5;
    }
    (&DAT_0019d57d)[DAT_002f10ce._3_1_ * 0x4ef] = uVar3;
    uStack_2c = 0x5d427;
    FUN_000402e5();
  }
  else {
    uStack_2c = 0x5d43b;
    cVar4 = FUN_000eeb20();
    if (cVar4 != '\0') {
      uStack_2c = 0x5d453;
      FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 133, "Unable to reinitialise ExchangeBuffer") */
    }
    bVar2 = false;
    iVar7 = 0;
    iVar8 = 0;
    local_24 = (uint)(byte)(&DAT_0019d0f4)[DAT_002f10ce._3_1_ * 0x4ef];
    local_28 = 0;
    iVar5 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar8) != 0) {
        (&DAT_0019d0d3)[iVar5] = (char)iVar7;
        if ((!bVar2) && (iVar7 == DAT_002f10ce._3_1_)) {
          bVar2 = true;
          DAT_002f10ce._3_1_ = (char)local_28;
        }
        local_28 = local_28 + 1;
        iVar5 = iVar5 + 0x4ef;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x24;
    } while (iVar7 < 5);
    uStack_2c = 0x5d4c7;
    FUN_000e6a10();
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0x5d4ef;
    FUN_0005ddee();
    uStack_34 = 0x5d503;
    cVar4 = FUN_000ee694();
    if (cVar4 != '\0') {
      uStack_34 = 0x5d51b;
      FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 170, "LbNetwork_Exchange failed") */
    }
    local_20 = 0;
    iVar5 = 0;
    iVar8 = 0;
    do {
      if ((*(int *)((int)&DAT_00335238 + iVar5) != 0) && ((&DAT_002e90bd)[iVar8] == '\n')) {
        (&DAT_0019d0f3)[local_20 * 0x4ef] = (undefined1)local_20;
        (&DAT_0019d0c8)[local_20 * 0x4ef] = (&DAT_0019d0c8)[local_20 * 0x4ef] | 1;
        if (*(short *)((int)&DAT_002e90c0 + iVar8) == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 5;
        }
        (&DAT_0019d57d)[local_20 * 0x4ef] = uVar3;
        (&DAT_0019d0f4)[local_20 * 0x4ef] = (&DAT_002e90be)[iVar8];
        uStack_34 = 0x5d561;
        FUN_000402e5();
        local_20 = local_20 + 1;
        uStack_34 = 0x5d56d;
        FUN_000e8ca8();
        iVar5 = extraout_ECX;
      }
      iVar5 = iVar5 + 0x24;
      iVar8 = iVar8 + 0x11;
    } while (iVar8 != 0x55);
    local_1c = 0;
    iVar5 = 4;
    do {
      pbVar1 = *(byte **)((int)&DAT_001ae9fc + iVar5);
      if ((*pbVar1 & 1) != 0) {
        local_1c = local_1c + (uint)*(ushort *)(pbVar1 + 0xd) + (uint)*(ushort *)(pbVar1 + 0xf) +
                   (int)*(short *)(pbVar1 + 0x11);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 != 0x2000);
    uStack_34 = 0x5d611;
    FUN_000e6a10();
    uStack_34 = 0;
    piVar9 = &uStack_38;
    uStack_38 = 0;
    FUN_0005ddee();
    iVar5 = (int)DAT_002f10ce._3_1_;
    (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar5 * 0x4ef] * 0x11] = (undefined1)local_1c;
    (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar5 * 0x4ef] * 0x11] =
         (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar5 * 0x4ef] * 0x11] + (char)DAT_002e8bf6;
    cVar4 = FUN_000ee694();
    if (cVar4 != '\0') {
      FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 224, "LbNetwork_Exchange failed") */
    }
    cVar4 = FUN_0005de00();
    if (cVar4 != '\0') {
      FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 233, "Checksums different") */
    }
    iVar8 = 0;
    iVar5 = 0;
    do {
      if (((iVar8 != DAT_002f10ce._3_1_) && (((&DAT_0019d0c8)[iVar5] & 1) != 0)) &&
         (iVar7 = FUN_0003308c(), iVar5 = extraout_ECX_00, iVar7 != 0)) {
        FUN_000dc184();
        FUN_000dc184();
        iVar5 = extraout_ECX_01;
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x4ef;
    } while (iVar8 < 5);
  }
  if (DAT_00334a4c != 0) {
    iVar8 = 0;
    iVar5 = 0;
    do {
      uVar6 = DAT_002e6ec6;
      if (((&DAT_0019d0c8)[iVar5] & 1) == 0) {
        for (; uVar6 = (&DAT_001ae9fc)[uVar6], DAT_001ae9fc < uVar6;
            uVar6 = (uint)*(ushort *)(uVar6 + 0x67)) {
          if (((&DAT_001acd79)[(uint)*(byte *)(uVar6 + 0x1a) * 0x1d] != '\0') &&
             (*(char *)(uVar6 + 6) == iVar8)) {
            *(undefined4 *)((int)piVar9 + -4) = 0x5d751;
            FUN_00069a12();
            iVar5 = extraout_ECX_02;
            break;
          }
        }
      }
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 0x4ef;
    } while (iVar8 < 5);
  }
  *(undefined4 *)((int)piVar9 + -4) = 0x5d772;
  FUN_00040832();
  *(undefined4 *)((int)piVar9 + -4) = 0x5d777;
  FUN_00040992();
  if ((DAT_002e6f2d != '\0') && (DAT_002e6ff3 != '\0')) {
    *(undefined4 *)((int)piVar9 + -4) = 0x5d793;
    FUN_000618f5();
    DAT_002e8bf2 = 0;
  }
  *(undefined4 *)((int)piVar9 + -4) = 0x5d7ae;
  FUN_000e6a10();
  return;
}

/******************************************************************************
 * Function : dk_my_player_host_05d7b5 (Ghidra: FUN_0005d7b5)
 * Prototype: void dk_my_player_host_05d7b5(void);
 * Address  : 0x5d7b5 (Size: 604 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp:347; packet.cpp:381
 * Naming   : String 'MY_PLAYER=%d  Host=%d'
 * Callers  : 1 -> 0x5dc27
 * Callees  : 12 -> 0x270e0, 0x2ca74, 0x62238, 0x622f1, 0x623aa, 0x780df, 0xddaf0, 0xe6a10, 0xe7714, 0xf0f8c ...
 * Strings  :
 *   - 0x1662bc: "packet.cpp"
 *   - 0x166315: "packet.cpp"
 *   - 0x166266: "MY_PLAYER=%d  Host=%d"
 *   - 0x16627c: "Unable to send game structure packet(%d) in resync to player %d"
 *   - 0x1662c7: "Unable to receive game structure packet(%d) in resync (rc = %d, expecting %d)"
 ******************************************************************************/
void FUN_0005d7b5(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 local_104 [50];
  uint local_3c;
  int local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  
  bVar7 = 0;
  iVar2 = DAT_002f10ce._3_1_ * 0x4ef;
  local_24 = (uint)*(ushort *)(&DAT_0019d510 + iVar2);
  local_3c = (uint)*(ushort *)(&DAT_0019d512 + iVar2);
  local_1c = 0;
  local_30 = (uint)*(ushort *)(&DAT_0019d50c + iVar2);
  local_2c = (uint)*(ushort *)(&DAT_0019d50e + iVar2);
  FUN_000270e0();
  FUN_00062238();
  for (iVar2 = 0;
      (iVar2 < 0x18ab &&
      ((((&DAT_0019d0c8)[iVar2] & 1) == 0 || (((&DAT_0019d0c8)[iVar2] & 0x40) != 0))));
      iVar2 = iVar2 + 0x4ef) {
    local_1c = local_1c + 1;
  }
  FUN_000f0f8c(s_MY_PLAYER__d_Host__d_00166266,(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef],local_1c)
  ;
  if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_1c) {
    local_38 = 0x151825;
    local_34 = &DAT_0019d0ac;
    iVar2 = 0;
    while (0 < local_38) {
      local_20 = local_38;
      if (0xa8c1 < local_38) {
        local_20 = 0xa8c1;
      }
      uVar4 = 0;
      iVar3 = 0;
      do {
        if ((((uVar4 != (byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) &&
             (((&DAT_0019d0c8)[iVar3] & 1) != 0)) && (((&DAT_0019d0c8)[iVar3] & 0x40) == 0)) &&
           (cVar1 = FUN_000f3b50(), iVar3 = extraout_ECX, cVar1 != '\0')) {
          FUN_000e7714(&DAT_0019cbac,s_Unable_to_send_game_structure_pa_0016627c,iVar2,uVar4);
          FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 347, g_log_buf) */
          iVar3 = extraout_ECX_00;
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x4ef;
      } while ((int)uVar4 < 5);
      iVar2 = iVar2 + 1;
      local_34 = (undefined4 *)((int)local_34 + local_20);
      local_38 = local_38 - local_20;
      FUN_000623aa();
    }
  }
  else {
    puVar5 = (undefined4 *)&DAT_002e6f2c;
    puVar6 = local_104;
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_000e6a10();
    local_38 = 0x151825;
    iVar2 = 0;
    while (0 < local_38) {
      local_28 = local_38;
      if (0xa8c1 < local_38) {
        local_28 = 0xa8c1;
      }
      iVar3 = FUN_000f3ed8();
      if (iVar3 != extraout_ECX_01) {
        FUN_000e7714(&DAT_0019cbac,s_Unable_to_receive_game_structure_001662c7,iVar2,iVar3,
                     extraout_ECX_01);
        FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 381, g_log_buf) */
      }
      iVar2 = iVar2 + 1;
      local_38 = local_38 - local_28;
      FUN_000623aa();
    }
    FUN_000780df();
    puVar5 = local_104;
    puVar6 = (undefined4 *)&DAT_002e6f2c;
    for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
  }
  FUN_000622f1();
  FUN_0002ca74();
  DAT_0019d0b6 = DAT_0019d0b6 & 0xf9;
  return;
}

/******************************************************************************
 * Function : dk_initialising_level_05da11 (Ghidra: FUN_0005da11)
 * Prototype: void dk_initialising_level_05da11(void);
 * Address  : 0x5da11 (Size: 534 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : String 'Initialising level'
 * Callers  : 1 -> 0x2dfac
 * Callees  : 7 -> 0x402e5, 0x404f7, 0x40832, 0x40992, 0x618f5, 0xe6a10, 0xe7714
 * Strings  :
 *   - 0x166320: "Initialising level"
 *   - 0x166333: "Packet Loading Active (File contains %d turns)"
 *   - 0x166362: "Packet Checksum Active"
 *   - 0x166379: "Fast Forward through %d game turns"
 *   - 0x16639c: "Packet Quit at %d"
 *   - 0x1663ae: "Logging things, game turns %d -> %d"
 ******************************************************************************/
void FUN_0005da11(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_14;
  
  FUN_000e6a10();
  FUN_000618f5();
  DAT_002e78e9 = DAT_002e6fd1;
  DAT_003d9885 = DAT_0019a29f;
  DAT_002e8bf2 = 0;
  FUN_000e7714(&DAT_0019cbac,s_Initialising_level_00166320,DAT_002e6fd1);
  FUN_000e7714(&DAT_0019cbac,s_Packet_Loading_Active__File_cont_00166333,DAT_002e6fdc);
  if (DAT_002e6fe5 != '\0') {
    FUN_000e7714(&DAT_0019cbac,s_Packet_Checksum_Active_00166362);
  }
  FUN_000e7714(&DAT_0019cbac,s_Fast_Forward_through__d_game_tur_00166379,DAT_002e6fe0);
  if (DAT_002e6fee != -1) {
    FUN_000e7714(&DAT_0019cbac,s_Packet_Quit_at__d_0016639c,DAT_002e6fee);
  }
  if ((DAT_002e6f2d != '\0') && (DAT_002e6fe6 != DAT_002e6fea)) {
    FUN_000e7714(&DAT_0019cbac,s_Logging_things__game_turns__d__>_001663ae,DAT_002e6fe6,DAT_002e6fea
                );
  }
  uVar1 = 1 << (DAT_002e6ff2 & 0x1f);
  DAT_002ebaf6 = 2;
  if (((DAT_002e6fd9 & uVar1) == 0) || ((DAT_002e6fda & uVar1) != 0)) {
    DAT_002f10ce._3_1_ = 0;
  }
  else {
    DAT_002f10ce._3_1_ = DAT_002e6ff2;
  }
  FUN_000404f7();
  DAT_002eb541 = '\0';
  local_14 = 0;
  iVar3 = 0;
  do {
    uVar2 = (uint)DAT_002e6fd9;
    uVar1 = 1 << ((byte)local_14 & 0x1f);
    (&DAT_0019d0c8)[iVar3] = (&DAT_0019d0c8)[iVar3] & 0xfe;
    (&DAT_0019d0c8)[iVar3] =
         (&DAT_0019d0c8)[iVar3] | (byte)((int)(uVar2 & uVar1) >> ((byte)local_14 & 0x1f)) & 1;
    if (((&DAT_0019d0c8)[iVar3] & 1) != 0) {
      (&DAT_0019d0f3)[iVar3] = (byte)local_14;
      uVar2 = (uint)DAT_002e6fda;
      (&DAT_0019d0c8)[iVar3] = (&DAT_0019d0c8)[iVar3] & 0xbf;
      (&DAT_0019d0c8)[iVar3] =
           (&DAT_0019d0c8)[iVar3] |
           ((byte)((int)(uVar1 & uVar2) >> ((byte)local_14 & 0x1f)) & 1) << 6;
      if (((&DAT_0019d0c8)[iVar3] & 0x40) == 0) {
        DAT_002eb541 = DAT_002eb541 + '\x01';
        (&DAT_0019d0f4)[iVar3] = 1;
        DAT_002ebaf6 = 5;
        FUN_000402e5();
      }
    }
    local_14 = local_14 + 1;
    iVar3 = iVar3 + 0x4ef;
  } while (local_14 < 5);
  if (DAT_002eb541 == '\x01') {
    DAT_002ebaf6 = 2;
  }
  if (DAT_002e6fdc < DAT_002e6fe0) {
    DAT_002e6fe0 = DAT_002e6fdc;
  }
  FUN_00040832();
  FUN_00040992();
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_Exchange_05dc27 (Ghidra: FUN_0005dc27)
 * Prototype: void dk_LbNetwork_Exchange_05dc27(void);
 * Address  : 0x5dc27 (Size: 450 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp:560 ("LbNetwork_Exchange failed")
 * Naming   : References 'LbNetwork_Exchange failed'
 * Callers  : 1 -> 0xde6a8
 * Callees  : 10 -> 0x21527, 0x5d7b5, 0x5de00, 0x5de7c, 0x61883, 0x623aa, 0xddaf0, 0xe6a10, 0xe7714, 0xee694
 * Strings  :
 *   - 0x1663ec: "packet.cpp"
 *   - 0x1663d2: "LbNetwork_Exchange failed"
 *   - 0x1663f7: "OUT OF SYNC (GameTurn %d)"
 ******************************************************************************/
void FUN_0005dc27(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  
  DAT_003d9885 = DAT_0019a29f;
  if (DAT_002ebaf6 != '\x02') {
    iVar3 = 0;
    iVar2 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar2) != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 0x24;
    } while (iVar2 != 0x90);
    if (((DAT_002e6f2d == '\0') || (DAT_002e6ff3 != '\0')) &&
       (cVar1 = FUN_000ee694(), iVar3 = extraout_ECX, cVar1 != '\0')) {
      FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 560, "LbNetwork_Exchange failed") */
      iVar3 = extraout_ECX_00;
    }
    iVar4 = 0;
    iVar2 = 0;
    do {
      if (*(int *)((int)&DAT_00335238 + iVar2) != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + 0x24;
    } while (iVar2 != 0x90);
    if (iVar3 != iVar4) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        if ((&DAT_00335238)[(uint)(byte)(&DAT_0019d0d3)[iVar3] * 9] == 0) {
          (&DAT_0019d0c8)[iVar3] = (&DAT_0019d0c8)[iVar3] | 0x40;
          FUN_00021527();
          iVar3 = extraout_EDX;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x4ef;
      } while (iVar2 < 4);
    }
  }
  cVar1 = FUN_0005de00();
  if (cVar1 == '\x01') {
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfb | 2;
  }
  else if (cVar1 == '\x02') {
    DAT_0019d0b6 = DAT_0019d0b6 & 0xfd | 4;
  }
  else if (cVar1 == '\x03') {
    DAT_0019d0b6 = DAT_0019d0b6 | 6;
  }
  else {
    DAT_0019d0b6 = DAT_0019d0b6 & 0xf9;
  }
  if (DAT_002e6f2c != '\0') {
    FUN_00061883();
  }
  iVar3 = 0;
  iVar2 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar2] & 1) != 0) && (((&DAT_0019d0c8)[iVar2] & 0x40) == 0)) {
      FUN_0005de7c();
      iVar3 = extraout_EDX_00;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x4ef;
  } while (iVar3 < 5);
  FUN_000e6a10();
  if (((DAT_0019d0b6 & 2) != 0) || ((DAT_0019d0b6 & 4) != 0)) {
    FUN_000e7714(&DAT_0019cbac,s_OUT_OF_SYNC__GameTurn__d__001663f7,DAT_002e8bee);
    FUN_000623aa();
    FUN_0005d7b5();
  }
  return;
}

/******************************************************************************
 * Function : sub_05dde9 (Ghidra: FUN_0005dde9)
 * Prototype: void sub_05dde9(void);
 * Address  : 0x5dde9 (Size: 5 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x46892, 0x46d5a, 0x47237, 0x473e1, 0x48add, 0x49160
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005dde9(void)

{
  int in_EAX;
  ushort in_DX;
  
  *(ushort *)(in_EAX + 0xe) = *(ushort *)(in_EAX + 0xe) | in_DX;
  return;
}

/******************************************************************************
 * Function : sub_05ddee (Ghidra: FUN_0005ddee)
 * Prototype: void sub_05ddee(void);
 * Address  : 0x5ddee (Size: 18 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 43 -> 0x2313c, 0x462a3, 0x47755, 0x47bcd, 0x47ea3, 0x47fe2, 0x480aa, 0x48675, 0x4878e, 0x48897 ...
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005ddee(void)

{
  int in_EAX;
  undefined2 in_CX;
  undefined1 in_DL;
  undefined2 unaff_BX;
  
  *(undefined1 *)(in_EAX + 5) = in_DL;
  *(undefined2 *)(in_EAX + 6) = unaff_BX;
  *(undefined2 *)(in_EAX + 8) = in_CX;
  return;
}

/******************************************************************************
 * Function : sub_05de00 (Ghidra: FUN_0005de00)
 * Prototype: undefined8 sub_05de00(void);
 * Address  : 0x5de00 (Size: 100 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5d35c, 0x5dc27
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_0005de00(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_EDX;
  undefined1 uVar3;
  
  uVar2 = 0xffffffff;
  uVar3 = 0;
  iVar1 = 0;
  do {
    if ((((&DAT_0019d0c8)[iVar1] & 1) != 0) && (((&DAT_0019d0c8)[iVar1] & 0x40) == 0)) {
      if (uVar2 == 0xffffffff) {
        uVar2 = (uint)(byte)(&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar1] * 0x11];
      }
      else if (uVar2 != (byte)(&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[iVar1] * 0x11]) {
        uVar3 = 1;
      }
    }
    iVar1 = iVar1 + 0x4ef;
  } while (iVar1 != 0x18ab);
  return CONCAT44(in_EDX,CONCAT31(0x18,uVar3));
}

/******************************************************************************
 * Function : sub_05de7c (Ghidra: FUN_0005de7c)
 * Prototype: undefined8 sub_05de7c(void);
 * Address  : 0x5de7c (Size: 179 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5dc27
 * Callees  : 8 -> 0x5e01e, 0x5eb8d, 0x5ec71, 0x5f001, 0x5f049, 0x5f163, 0x5f3ad, 0x5f4d9
 ******************************************************************************/
undefined8 FUN_0005de7c(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  
  iVar2 = in_EAX * 0x4ef;
  iVar3 = (uint)(byte)(&DAT_0019d0d3)[iVar2] * 0x11;
  (&DAT_0019d0cc)[iVar2] = ((&DAT_002e90c8)[iVar3] & 0x3f) >> 5;
  (&DAT_0019d0cd)[iVar2] = ((&DAT_002e90c8)[iVar3] & 0x7f) >> 6;
  if ((((&DAT_0019d0c8)[iVar2] & 4) != 0) && ((&DAT_002e90bd)[iVar3] == 'y')) {
    uVar4 = FUN_0005f4d9();
    return CONCAT44(in_EDX,uVar4);
  }
  uVar5 = FUN_0005e01e();
  if ((char)uVar5 == '\0') {
    bVar1 = (&DAT_0019d51a)[iVar2] - 1;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if (bVar1 < 6) {
      uVar5 = (uint)bVar1;
      switch(uVar5) {
      case 0:
        FUN_0005f163();
        uVar4 = FUN_0005eb8d();
        return CONCAT44(in_EDX,uVar4);
      case 1:
        FUN_0005ec71();
        uVar4 = FUN_0005f049();
        return CONCAT44(in_EDX,uVar4);
      case 2:
        uVar4 = FUN_0005f001();
        return CONCAT44(in_EDX,uVar4);
      case 3:
        FUN_0005f3ad();
        return CONCAT44(in_EDX,extraout_EDX);
      }
    }
  }
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_05df2f (Ghidra: FUN_0005df2f)
 * Prototype: void sub_05df2f(void);
 * Address  : 0x5df2f (Size: 119 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0005df8a) overlaps instruction at (ram,0x0005df85)
    */
/* WARNING: Removing unreachable block (ram,0x0005df79) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005df2f(void)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  undefined1 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  char in_AL;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  char *in_ECX;
  byte *pbVar15;
  byte bVar16;
  char extraout_DL;
  undefined2 uVar17;
  int in_EDX;
  byte bVar18;
  char cVar20;
  char *unaff_EBX;
  undefined3 uVar21;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  byte *pbVar22;
  undefined4 *unaff_EDI;
  bool in_CF;
  byte in_AF;
  bool in_ZF;
  bool in_SF;
  byte bVar4;
  byte bVar8;
  char *pcVar19;
  
  if (((!in_SF) && (!in_CF && !in_ZF)) && (!in_ZF)) {
    if (in_CF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar22 = unaff_ESI + 1;
    uVar17 = (undefined2)in_EDX;
    out(*unaff_ESI,uVar17);
    uVar6 = in(uVar17);
    *unaff_EDI = uVar6;
    uVar5 = in(uVar17);
    *(undefined1 *)(unaff_EDI + 1) = uVar5;
    puVar1 = (ushort *)(in_EDX + 0x61);
    *puVar1 = *puVar1 + (ushort)(0 < (short)-(*puVar1 & 3)) * -(*puVar1 & 3);
    pbVar11 = _DAT_00000070;
    uVar6 = _DAT_00000068;
    _DAT_00000068 = 0x6c;
    _DAT_00000064 = uVar6;
    _DAT_00000060 = _DAT_0000006c;
    _DAT_0000005c = _DAT_00000070;
    _DAT_00000058 = _DAT_00000074;
    bVar9 = 9 < ((byte)_DAT_00000074 & 0xf) | in_AF;
    uVar12 = CONCAT31((int3)((uint)_DAT_00000074 >> 8),(byte)_DAT_00000074 + bVar9 * '\x06') &
             0xffffff0f;
    uVar10 = (uint)_DAT_00000074 >> 8;
    bVar7 = *_DAT_00000070;
    bVar18 = (byte)uVar6;
    bVar8 = *_DAT_00000070;
    uVar21 = (undefined3)((uint)uVar6 >> 8);
    pcVar19 = (char *)CONCAT31(uVar21,bVar18 - bVar8);
    bVar3 = *pbVar22;
    bVar16 = (byte)_DAT_0000006c;
    bVar4 = *pbVar22;
    _DAT_0000006c = unaff_EBP;
    _DAT_00000070 = pbVar22;
    _DAT_00000074 = (undefined4 *)((int)unaff_EDI + 5);
    *pbVar22 = (bVar4 - bVar16) - (bVar18 < bVar7);
    iVar13 = (CONCAT22((short)(uVar12 >> 0x10),CONCAT11((char)uVar10 + bVar9,(char)uVar12)) &
             0x1b1c1d24) + 0x50d0e14 +
             (uint)(bVar3 < bVar16 || (byte)(bVar4 - bVar16) < (bVar18 < bVar7));
    pcVar14 = (char *)CONCAT31((int3)((uint)iVar13 >> 8),(char)iVar13 + '\x03');
    piVar2 = (int *)(unaff_ESI + 0x6c0005ec);
    *piVar2 = (int)(pcVar14 + *piVar2);
    pbVar15 = pbVar11 + -1;
    cVar20 = (char)((uint)uVar6 >> 8);
    if (pbVar15 == (byte *)0x0 || *piVar2 == 0) {
      *pcVar14 = *pcVar14 + bVar16;
      pbVar15 = pbVar11 + -2;
      if (pbVar15 == (byte *)0x0 || *pcVar14 != '\0') {
        pcVar14[-0x1d] = pcVar14[-0x1d] + (char)pbVar15;
        pcVar14 = pcVar14 + 0x5e1be00;
        pcVar19 = (char *)CONCAT31(uVar21,(bVar18 - bVar8) + cVar20);
      }
      else {
        pbVar22 = (byte *)0xfb0005e1;
      }
    }
    else {
      pcVar14 = pcVar14 + -1;
      if (pbVar15 != (byte *)0x0) {
        unaff_ESI[-0x4fffa1e] = unaff_ESI[-0x4fffa1e] + cVar20;
      }
    }
    pbVar15 = pbVar15 + -1;
    cVar20 = (char)pcVar19;
    if (pbVar15 == (byte *)0x0) {
      *pcVar19 = *pcVar19 + (char)pcVar14;
    }
    else if (pbVar15 == (byte *)0x0) {
      *_DAT_00000058 = *(undefined4 *)pbVar22;
      pcVar19 = &DAT_0000005c;
    }
    else {
      pcVar19[0x2f0005e3] = pcVar19[0x2f0005e3] + (char)pbVar15;
      pcVar19 = &DAT_0000005c;
    }
    *(char *)(unaff_EBP + -0x5afffa1b) = *(char *)(unaff_EBP + -0x5afffa1b) + cVar20;
    pcVar19[-0xffffffff00000004] = -0x70;
    pcVar19[-0xffffffff00000003] = -0x21;
    pcVar19[-0xffffffff00000002] = '\x05';
    pcVar19[-0xffffffff00000001] = '\0';
    func_0xe5dbdf95();
    DAT_280005e9 = DAT_280005e9 + extraout_DL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_ECX = *in_ECX + in_AL;
  iVar13 = in(5);
  *(char *)((int)unaff_EDI + -0x1d) = *(char *)((int)unaff_EDI + -0x1d) + (char)in_ECX;
  *unaff_EBX = *unaff_EBX + (char)in_EDX;
  out(5,(char)(iVar13 + 0x5e96900));
  *(char *)(iVar13 + 0x29e96ee6) = *(char *)(iVar13 + 0x29e96ee6) + (char)unaff_EBX;
  out(5,iVar13 + 0x5e96900);
  cRamec0005ea = cRamec0005ea + (char)in_ECX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

/******************************************************************************
 * Function : sub_05e01e (Ghidra: FUN_0005e01e)
 * Prototype: void sub_05e01e(void);
 * Address  : 0x5e01e (Size: 78 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0005e01e(void)

{
  code cVar1;
  int in_EAX;
  int iVar2;
  code *pcVar3;
  
  iVar2 = 0x30;
  pcVar3 = FUN_0005df2f;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while ((code)(&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11] != cVar1);
                    /* WARNING: Could not recover jumptable at 0x0005e064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x5df5e))();
  return;
}

/******************************************************************************
 * Function : sub_05eb8d (Ghidra: FUN_0005eb8d)
 * Prototype: void sub_05eb8d(void);
 * Address  : 0x5eb8d (Size: 228 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 5 -> 0x21527, 0x4efd4, 0x708fa, 0x70a3c, 0x70ac6
 ******************************************************************************/
void FUN_0005eb8d(void)

{
  byte bVar1;
  int in_EAX;
  
  bVar1 = (&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11];
  if (bVar1 < 0x5f) {
    if (0x28 < bVar1) {
      if (bVar1 < 0x2a) {
        FUN_0004efd4();
        return;
      }
      if (bVar1 == 0x5d) {
        FUN_000708fa();
        return;
      }
    }
    return;
  }
  if (bVar1 < 0x60) {
    FUN_00070a3c();
    return;
  }
  if (0x60 < bVar1) {
    if (bVar1 != 0x6b) {
      return;
    }
    FUN_00021527();
    return;
  }
  FUN_00070ac6();
  return;
}

/******************************************************************************
 * Function : sub_05ec71 (Ghidra: FUN_0005ec71)
 * Prototype: void sub_05ec71(void);
 * Address  : 0x5ec71 (Size: 912 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 4 -> 0x49bfc, 0x49e95, 0x49ea9, 0xe3e78
 ******************************************************************************/
void FUN_0005ec71(void)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uStack_2c;
  int local_28 [2];
  undefined1 *local_20;
  undefined *local_1c;
  
  iVar4 = in_EAX * 0x4ef;
  local_20 = &DAT_0019d0c8 + iVar4;
  iVar5 = (uint)(byte)(&DAT_0019d0d3)[iVar4] * 0x11;
  iVar4 = (&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar4)];
  local_28[1] = 1;
  local_1c = &DAT_002e90b8 + iVar5;
  if ((((*(char *)(iVar4 + 0x1f) == '\x05') &&
       (iVar1 = (&DAT_001b0a00)[*(ushort *)(iVar4 + 100)], -1 < *(short *)(iVar4 + 0x5e))) &&
      (*(char *)(iVar1 + 0xab) == '\0')) && (*(char *)(iVar4 + 7) != 'C')) {
    uVar8 = (uint)*(ushort *)(iVar1 + 0xc4);
    if (0x100 < uVar8) {
      uVar8 = 0x100;
    }
    uVar7 = (undefined2)uVar8;
    sVar3 = (short)((int)uVar8 >> 2);
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 4) != 0) {
      sVar2 = *(short *)(iVar1 + 200) + sVar3;
      *(short *)(iVar1 + 200) = sVar2;
      if ((int)uVar8 < (int)sVar2) {
        *(undefined2 *)(iVar1 + 200) = uVar7;
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x40;
      local_28[0] = (int)uVar8 >> 2;
    }
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 8) != 0) {
      sVar2 = *(short *)(iVar1 + 200) - sVar3;
      *(short *)(iVar1 + 200) = sVar2;
      if ((int)sVar2 < (int)-uVar8) {
        *(undefined2 *)(iVar1 + 200) = uVar7;
        *(short *)(iVar1 + 200) = -*(short *)(iVar1 + 200);
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x40;
    }
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 0x10) != 0) {
      sVar2 = *(short *)(iVar1 + 0xca) + sVar3;
      *(short *)(iVar1 + 0xca) = sVar2;
      if ((int)sVar2 < (int)-uVar8) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
        *(short *)(iVar1 + 0xca) = -*(short *)(iVar1 + 0xca);
      }
      else if ((int)uVar8 < (int)sVar2) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x80;
    }
    if ((*(byte *)((int)&DAT_002e90c6 + iVar5) & 0x20) != 0) {
      sVar3 = *(short *)(iVar1 + 0xca) - sVar3;
      *(short *)(iVar1 + 0xca) = sVar3;
      if ((int)sVar3 < (int)-uVar8) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
        *(short *)(iVar1 + 0xca) = -*(short *)(iVar1 + 0xca);
      }
      else if ((int)uVar8 < (int)sVar3) {
        *(undefined2 *)(iVar1 + 0xca) = uVar7;
      }
      *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 0x80;
    }
    piVar9 = local_28;
    if (((*(byte *)((int)&DAT_002e90c6 + iVar5 + 1) & 0x10) != 0) &&
       (piVar9 = local_28, *(char *)(iVar1 + 0xd2) == '\0')) {
      uStack_2c = 0x5ee42;
      iVar5 = FUN_00049e95();
      piVar9 = local_28;
      if (iVar5 != 0) {
        uStack_2c = 0x5ee54;
        iVar5 = FUN_00049ea9();
        piVar9 = local_28;
        if (iVar5 != 0) {
          piVar9 = &uStack_2c;
          uStack_2c = 0;
          FUN_000e3e78();
          FUN_00049bfc();
        }
      }
    }
    if ((((local_1c[0xf] & 4) != 0) &&
        ((&DAT_0018ee05)[(uint)*(byte *)(iVar1 + 0x1e8) * 0x2a] != '\0')) &&
       ((*(char *)(iVar1 + 0xd2) == '\0' || (*(char *)(iVar1 + 0xd2) == *(char *)(iVar1 + 0x1e8)))))
    {
      *(undefined4 *)((int)piVar9 + -4) = 0;
      *(undefined4 *)((int)piVar9 + -8) = 0x5eedb;
      FUN_000e3e78();
      *(undefined4 *)((int)piVar9 + -8) = 0x5eeeb;
      FUN_00049bfc();
    }
    uVar8 = (uint)*(ushort *)(local_1c + 0xc);
    if (uVar8 < 5) {
      uVar8 = 5;
    }
    if (0xfa < uVar8) {
      uVar8 = 0xfa;
    }
    iVar5 = (int)(*(ushort *)(local_1c + 10) - 0x7f) / (int)(uint)(byte)local_20[0x14];
    if (iVar5 != 0) {
      if (iVar5 < -0x20) {
        iVar5 = -0x20;
      }
      else if (0x20 < iVar5) {
        iVar5 = 0x20;
      }
      iVar6 = iVar5 * 0x38 >> 0x1f;
      *(short *)(iVar1 + 0x6c) =
           *(short *)(iVar1 + 0x6c) +
           (short)((int)((iVar5 * 0x38 + iVar6 * -0x20) - (uint)(iVar6 << 4 < 0)) >> 5) *
           (short)local_28[1];
    }
    iVar5 = (uint)*(byte *)(iVar4 + 0x1a) * 0xe6;
    if ((int)*(short *)(iVar1 + 0x6c) < (int)-(uint)*(ushort *)(&DAT_002e9160 + iVar5)) {
      *(undefined2 *)(iVar1 + 0x6c) = *(undefined2 *)(&DAT_002e9160 + iVar5);
      *(short *)(iVar1 + 0x6c) = -*(short *)(iVar1 + 0x6c);
    }
    else if ((int)(uint)*(ushort *)(&DAT_002e9160 + iVar5) < (int)*(short *)(iVar1 + 0x6c)) {
      *(undefined2 *)(iVar1 + 0x6c) = *(undefined2 *)(&DAT_002e9160 + iVar5);
    }
    *(ushort *)(iVar4 + 0x52) = *(short *)(iVar4 + 0x52) + *(short *)(iVar1 + 0x6c) & 0x7ff;
    *(ushort *)(iVar4 + 0x54) = (ushort)((int)((uVar8 - 0x7f) * 0xe3) / 0x7f) & 0x7ff;
    *(short *)(iVar1 + 0xcc) =
         (short)((*(short *)(iVar1 + 0x6c) * 0xaa) /
                (int)(uint)*(ushort *)(&DAT_002e9160 + (uint)*(byte *)(iVar4 + 0x1a) * 0xe6));
    if (*(short *)(iVar1 + 0x6c) != 0) {
      iVar4 = *(short *)(iVar1 + 0x6c) * 4;
      iVar5 = iVar4 >> 0x1f;
      *(short *)(iVar1 + 0x6c) = (short)((int)((iVar4 + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05f001 (Ghidra: FUN_0005f001)
 * Prototype: void sub_05f001(void);
 * Address  : 0x5f001 (Size: 72 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 1 -> 0x49eff
 ******************************************************************************/
void FUN_0005f001(void)

{
  int in_EAX;
  
  if ((&DAT_002e90bd)[(uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11] != ' ') {
    return;
  }
  *(undefined2 *)(&DAT_0019d506 + in_EAX * 0x4ef) =
       *(undefined2 *)(&DAT_002e90be + (uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11);
  FUN_00049eff();
  return;
}

/******************************************************************************
 * Function : sub_05f049 (Ghidra: FUN_0005f049)
 * Prototype: void sub_05f049(void);
 * Address  : 0x5f049 (Size: 282 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 6 -> 0x49bfc, 0x49e95, 0x49ea9, 0x49eff, 0x5345d, 0xe3e78
 ******************************************************************************/
void FUN_0005f049(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = in_EAX * 0x4ef;
  iVar3 = (uint)(byte)(&DAT_0019d0d3)[iVar2] * 0x11;
  bVar1 = (&DAT_002e90bd)[iVar3];
  if (0x20 < bVar1) {
    if (bVar1 < 0x22) {
      *(undefined2 *)(&DAT_0019d506 + iVar2) = *(undefined2 *)(&DAT_002e90be + iVar3);
      FUN_00049eff();
    }
    else if (bVar1 == 0x27) {
      if ((&DAT_0018edeb)[*(short *)(&DAT_002e90be + iVar3) * 0x2a] == '\0') {
        *(undefined1 *)
         ((&DAT_001b0a00)
          [*(ushort *)((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar2)] + 100)] + 0x1e8) =
             (&DAT_002e90be)[iVar3];
      }
      else if (((*(char *)((&DAT_001b0a00)
                           [*(ushort *)
                             ((&DAT_001ae9fc)[*(ushort *)((int)&DAT_0019d0f7 + iVar2)] + 100)] +
                          0xd2) == '\0') && (iVar3 = FUN_00049e95(), iVar3 != 0)) &&
              (iVar3 = FUN_00049ea9(), iVar3 != 0)) {
        FUN_000e3e78(0);
        FUN_00049bfc();
        if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == &DAT_0019d0c8 + iVar2) {
          FUN_0005345d();
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05f163 (Ghidra: FUN_0005f163)
 * Prototype: void sub_05f163(void);
 * Address  : 0x5f163 (Size: 586 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 9 -> 0x5f438, 0x5f6c5, 0x77ad0, 0x77b0f, 0x77b4e, 0x77f16, 0x77fdc, 0x780a3, 0x780c2
 ******************************************************************************/
void FUN_0005f163(void)

{
  byte bVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  
  puVar4 = &DAT_0019d0c8 + in_EAX * 0x4ef;
  iVar3 = (uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 4) != 0) {
    FUN_00077ad0();
    puVar4 = extraout_ECX;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 8) != 0) {
    FUN_00077ad0();
    puVar4 = extraout_ECX_00;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x10) != 0) {
    FUN_00077b0f();
    puVar4 = extraout_ECX_01;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x20) != 0) {
    FUN_00077b0f();
    puVar4 = extraout_ECX_02;
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 2) != 0) {
    iVar2 = *(int *)(puVar4 + 0x38);
    bVar1 = *(byte *)(iVar2 + 6);
    if (1 < bVar1) {
      if (bVar1 < 3) {
        FUN_00077b4e();
        puVar4 = extraout_ECX_03;
      }
      else if (bVar1 == 5) {
        *(uint *)(iVar2 + 7) = *(int *)(iVar2 + 7) + 0x200U & 0x7ff;
      }
    }
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 1) != 0) {
    iVar2 = *(int *)(puVar4 + 0x38);
    bVar1 = *(byte *)(iVar2 + 6);
    if (1 < bVar1) {
      if (bVar1 < 3) {
        FUN_00077b4e();
        puVar4 = extraout_ECX_04;
      }
      else if (bVar1 == 5) {
        *(uint *)(iVar2 + 7) = *(int *)(iVar2 + 7) + 0x600U & 0x7ff;
      }
    }
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x40) != 0) {
    if (*(char *)(*(int *)(puVar4 + 0x38) + 6) == '\x02') {
      FUN_00077f16();
      FUN_000780a3();
      FUN_000780c2();
      puVar4 = extraout_ECX_05;
    }
    else {
      FUN_00077f16();
      puVar4 = extraout_ECX_06;
    }
  }
  if ((*(byte *)((int)&DAT_002e90c6 + iVar3) & 0x80) != 0) {
    if (*(char *)(*(int *)(puVar4 + 0x38) + 6) == '\x02') {
      FUN_00077fdc();
      FUN_000780a3();
      FUN_000780c2();
    }
    else {
      FUN_00077fdc();
    }
  }
  FUN_0005f6c5();
  FUN_0005f438();
  return;
}

/******************************************************************************
 * Function : sub_05f3ad (Ghidra: FUN_0005f3ad)
 * Prototype: void sub_05f3ad(void);
 * Address  : 0x5f3ad (Size: 139 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 2 -> 0x5f438, 0x61751
 ******************************************************************************/
void FUN_0005f3ad(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  
  iVar2 = in_EAX * 0x4ef;
  iVar1 = (*(ushort *)(&DAT_002e90c2 + (uint)(byte)(&DAT_0019d0d3)[iVar2] * 0x11) - 0x96) * 3;
  iVar3 = iVar1 >> 0x1f;
  FUN_00061751();
  *(short *)(&DAT_0019d158 + iVar2) =
       ((short)((int)((iVar1 + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2) + 1) * 0x100 + 0x80;
  *(short *)(&DAT_0019d15a + iVar2) = (short)(extraout_ECX << 8) + 0x80;
  FUN_0005f438();
  return;
}

/******************************************************************************
 * Function : sub_05f438 (Ghidra: FUN_0005f438)
 * Prototype: void sub_05f438(void);
 * Address  : 0x5f438 (Size: 161 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5f163, 0x5f3ad
 * Callees  : 4 -> 0xacdfc, 0xad54c, 0xad66c, 0xb3788
 ******************************************************************************/
void FUN_0005f438(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined1 *extraout_EDX;
  byte bVar2;
  undefined2 local_18 [2];
  
  bVar2 = 0;
  if (*(short *)(in_EAX + 0x460) != 0) {
    if ((*(byte *)((int)&DAT_002e90c6 +
                  (uint)(byte)(&DAT_0019d0d3)[(uint)*(byte *)(in_EAX + 0x2b) * 0x4ef] * 0x11 + 1) &
        0x80) == 0) {
      FUN_000ad66c();
    }
    else {
      uVar1 = *(undefined4 *)
               (&DAT_002e90c2 +
               (uint)(byte)(&DAT_0019d0d3)[(uint)*(byte *)(in_EAX + 0x2b) * 0x4ef] * 0x11);
      local_18[0] = FUN_000b3788();
      if (extraout_EDX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
        DAT_002e90b2 = uVar1;
        (&DAT_002e90b6)[(uint)bVar2 * -4] = local_18[(uint)bVar2 * -4];
      }
      FUN_000ad54c();
      FUN_000acdfc();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05f4d9 (Ghidra: FUN_0005f4d9)
 * Prototype: void sub_05f4d9(void);
 * Address  : 0x5f4d9 (Size: 158 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5de7c
 * Callees  : 2 -> 0xefdb4, 0xf43c7
 ******************************************************************************/
void FUN_0005f4d9(void)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  char cVar3;
  ulonglong uVar4;
  
  if (-1 < *(short *)(&DAT_002e90be +
                     (uint)(byte)(&DAT_0019d0d3)[(uint)*(byte *)(in_EAX + 0x2b) * 0x4ef] * 0x11)) {
    uVar4 = FUN_000efdb4();
    iVar2 = (int)uVar4;
    if (extraout_ECX == 0xe) {
      if (iVar2 != 0) {
        *(undefined1 *)(in_EAX + 0x462 + iVar2) = 0;
        return;
      }
    }
    else {
      cVar3 = (char)(uVar4 >> 0x20);
      if ((((uVar4 & 0x8000000000) == 0) &&
          (((('`' < cVar3 && (cVar3 < '{')) || (('@' < cVar3 && (cVar3 < '[')))) ||
           ((('/' < cVar3 && (cVar3 < ':')) || (cVar3 == ' ')))))) && (iVar2 < 0x3e)) {
        uVar1 = FUN_000f43c7();
        *(undefined1 *)(iVar2 + 0x464 + in_EAX) = 0;
        *(undefined1 *)(iVar2 + 0x463 + in_EAX) = uVar1;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_05f577 (Ghidra: FUN_0005f577)
 * Prototype: uint sub_05f577(void);
 * Address  : 0x5f577 (Size: 100 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0005f577(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  byte in_DL;
  int unaff_EBX;
  int iVar3;
  
  uVar2 = in_EAX + 1U >> 2;
  if (7 < uVar2) {
    uVar2 = 8;
  }
  if (*(int *)(&DAT_002eae11 + uVar2 * 4 + (uint)in_DL * 0x4c) <= unaff_EBX) {
    return in_EAX + 1U;
  }
  uVar2 = in_EAX + 1U >> 2;
  if (7 < uVar2) {
    uVar2 = 8;
  }
  while( true ) {
    cVar1 = (char)uVar2;
    iVar3 = cVar1 * 4;
    if (*(int *)(&DAT_002eae11 + iVar3 + (uint)in_DL * 0x4c) <= unaff_EBX) break;
    uVar2 = (uint)(byte)(cVar1 - 1);
  }
  if (cVar1 < 0) {
    return 0;
  }
  return iVar3 + 1;
}

/******************************************************************************
 * Function : sub_05f5db (Ghidra: FUN_0005f5db)
 * Prototype: uint sub_05f5db(void);
 * Address  : 0x5f5db (Size: 126 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 0 -> 
 ******************************************************************************/
uint FUN_0005f5db(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int in_EDX;
  uint unaff_EBX;
  
  if ((*(uint *)((int)&DAT_00279203 + (in_EDX * 0x100 + in_EAX) * 5 + 1) >> 0x1c &
      1 << ((byte)unaff_EBX & 0x1f)) != 0) {
    iVar1 = ((&DAT_0019033b)[in_EAX] + (&DAT_0019033b)[in_EDX] * 0x55) * 6;
    uVar2 = (uint)(byte)(&DAT_002d33c5)[iVar1];
    if (((0x29 < uVar2) && (uVar2 < 0x30)) && (((&DAT_002d33ca)[iVar1] & 7) == unaff_EBX)) {
      return (&DAT_002d33ca)[iVar1] & 7 ^ unaff_EBX;
    }
    if ((*(uint *)(&DAT_001921c6 + uVar2 * 0x16) & 0x29) == 0) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : dk_room_here_delete_05f6c5 (Ghidra: FUN_0005f6c5)
 * Prototype: void dk_room_here_delete_05f6c5(void);
 * Address  : 0x5f6c5 (Size: 8332 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp:2969 ("No room here to delete"); packet.cpp:3358 ("Cannot create good person")
 * Naming   : String 'No room here to delete'
 * Callers  : 1 -> 0x5f163
 * Callees  : 77 -> 0x1458c, 0x145d2, 0x22660, 0x22b3a, 0x23042, 0x230d3, 0x23868, 0x39d55, 0x401aa, 0x43bb3 ...
 * Strings  :
 *   - 0x166462: "packet.cpp"
 *   - 0x166487: "packet.cpp"
 *   - 0x16644b: "No room here to delete"
 *   - 0x16646d: "Cannot create good person"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005f6c5(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  uint in_EAX;
  int iVar6;
  int iVar7;
  uint uVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  uint extraout_EDX;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint uStack_58;
  uint local_54;
  undefined4 local_50;
  undefined2 local_4c [2];
  undefined *local_48;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  byte local_20;
  byte local_1c;
  
  bVar3 = 0;
  puVar10 = &local_54;
  iVar6 = in_EAX * 0x4ef;
  local_24 = &DAT_0019d0c8 + iVar6;
  iVar7 = (uint)(byte)(&DAT_0019d0d3)[iVar6] * 0x11;
  local_48 = &DAT_002e90b8 + iVar7;
  (&DAT_0019d56c)[iVar6] = 1;
  local_28 = 0;
  *(undefined4 *)(&DAT_0034d208 + in_EAX * 4) = 0;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar7 + 1) & 0x40) != 0) {
    return;
  }
  local_54 = in_EAX;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar7 + 1) & 4) == 0) {
    if ((*(byte *)((int)&DAT_002e90c6 + iVar7 + 1) & 0x10) == 0) {
      *(undefined4 *)(&DAT_0019d59a + iVar6) = 0;
    }
  }
  else {
    bVar1 = (&DAT_0019d51b)[iVar6];
    if (bVar1 < 0x11) {
      if (bVar1 < 7) {
        if (bVar1 == 6) {
          if ((&DAT_002e0e0d)[(uint)(byte)(&DAT_0019d0f3)[iVar6] * 0x542] == 0) goto LAB_0005f787;
          iVar6 = (uint)(byte)(&DAT_002e0e0c)[(uint)(byte)(&DAT_0019d0f3)[iVar6] * 0x1508] << 2;
          goto LAB_0005f795;
        }
      }
      else if ((bVar1 < 8) || (bVar1 == 8)) goto LAB_0005f787;
LAB_0005f8bd:
      *(int *)(&DAT_0019d59a + iVar6) = *(int *)(&DAT_0019d59a + iVar6) + 1;
    }
    else {
      if (0x11 < bVar1) {
        if (bVar1 < 0x14) {
          if (bVar1 != 0x13) goto LAB_0005f8bd;
        }
        else if (((0x14 < bVar1) && (0x15 < bVar1)) && (bVar1 != 0x16)) goto LAB_0005f8bd;
      }
LAB_0005f787:
      uStack_58 = 0x5f792;
      iVar6 = FUN_0005f577();
LAB_0005f795:
      *(int *)(local_24 + 0x4d2) = iVar6;
    }
  }
  if ((local_48[0xf] & 8) == 0) {
    if ((local_48[0xf] & 0x20) == 0) {
      local_24[0x4d6] = 0;
      local_24[0x4d7] = 0;
      local_24[0x4d8] = 0;
      local_24[0x4d9] = 0;
    }
  }
  else {
    *(int *)(local_24 + 0x4d6) = *(int *)(local_24 + 0x4d6) + 1;
  }
  if ((local_48[0xf] & 0x10) != 0) {
    if (*(int *)(&DAT_0034d1f4 + local_54 * 4) < 5) {
      *(undefined4 *)(&DAT_0034d208 + local_54 * 4) = 1;
    }
    *(undefined4 *)(&DAT_0034d1f4 + local_54 * 4) = 0;
  }
  if ((((local_48[0xf] & 4) == 0) && ((local_48[0xf] & 1) == 0)) &&
     (*(int *)(&DAT_0034d1f4 + local_54 * 4) < 0x7fffffff)) {
    *(int *)(&DAT_0034d1f4 + local_54 * 4) = *(int *)(&DAT_0034d1f4 + local_54 * 4) + 1;
  }
  local_24[0x35] = 0;
  local_24[0x36] = 0;
  puVar9 = &local_54;
  switch(local_24[0x453]) {
  case 1:
    local_50 = *(undefined4 *)(local_48 + 10);
    local_28 = 1;
    if ((((local_48[0xf] & 1) == 0) && ((local_48[0xf] & 4) == 0)) && ((local_48[0xf] & 0x10) == 0))
    {
      local_24[0x455] = 0;
    }
    local_24[0x454] = (local_48[0x10] & 0x1f) >> 1;
    local_24[3] = local_24[3] & 0xfd;
    if ((local_24[0x455] == 0) || (local_24[0x455] == 3)) {
      uStack_58 = 0x5fa0d;
      uVar8 = FUN_00085598();
      if (DAT_001ae9fc < uVar8) {
        if (*(short *)(local_24 + 0x43a) == 0) {
          uStack_58 = 0x5fa2d;
          FUN_00061bde();
          uVar8 = extraout_EDX;
        }
        *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
      }
      puVar9 = &local_54;
      if (*(short *)(&DAT_002e05bc + local_54 * 0x1508) != 0) {
        if (*(short *)(local_24 + 0x43a) == 0) {
          uStack_58 = 0x5fa63;
          FUN_00061bde();
        }
        local_34 = (uint)(*(char *)((&DAT_001ae9fc)
                                    [*(ushort *)(&DAT_002e05bc + (uint)local_24[0x2b] * 0x1508)] +
                                   0x1a) == '\x17');
        local_44 = (uint)(byte)local_48[0xd];
        uStack_58 = 0x5faa7;
        iVar6 = FUN_000dc19c();
        if (iVar6 == 0) {
          uStack_58 = 0x5fac5;
          iVar6 = FUN_0005f5db();
          if (iVar6 != 0) {
            local_24[3] = local_24[3] | 2;
            local_44 = (uint)(byte)local_48[0xb];
            uStack_58 = 0x5fb21;
            FUN_0008f320();
            puVar9 = &local_54;
            goto LAB_0005fb21;
          }
        }
        uStack_58 = (uint)local_24[0x4a4];
        FUN_0008fd14();
        puVar9 = &uStack_58;
      }
LAB_0005fb21:
      if (((*(short *)(local_24 + 0x43a) != 0) && (bVar3 = local_24[0x4b0], bVar3 != 1)) &&
         ((bVar3 != 2 && ((bVar3 != 3 && (bVar3 != 4)))))) {
        if ((*(short *)(local_24 + 0x35) == 0) &&
           (*(short *)(&DAT_002e05bc + local_54 * 0x1508) != 0)) {
          if (*(char *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x1f) ==
              '\x01') {
            *(undefined4 *)((int)puVar9 + -4) = 0x5fbdb;
            FUN_000c57a4();
          }
          *(undefined4 *)((int)puVar9 + -4) = 0x5fbfd;
          FUN_00061ca3();
          *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) =
               *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) &
               0xfe;
        }
        else {
          *(undefined4 *)((int)puVar9 + -4) = 0x5fb8c;
          FUN_00061ca3();
          if (*(short *)(&DAT_002e05bc + local_54 * 0x1508) != 0) {
            *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) =
                 *(byte *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + local_54 * 0x1508)] + 0x4f) |
                 1;
          }
        }
      }
    }
    else {
      puVar9 = &local_54;
      if ((*(short *)(local_24 + 0x43a) != 0) && (puVar9 = &local_54, local_24[0x4b0] != 1)) {
        uStack_58 = 0x5fc49;
        FUN_00072af4();
        local_24[0x43a] = 0;
        local_24[0x43b] = 0;
        puVar9 = &local_54;
      }
    }
    if ((local_48[0xf] & 0x80) != 0) {
      if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
        *(undefined4 *)((int)puVar9 + -4) = 0x5fc7e;
        cVar2 = FUN_00057f6b();
        if ((cVar2 == '\0') && (local_24[0x454] == 1)) {
          local_44 = (uint)(byte)local_48[0xd];
          *(undefined4 *)((int)puVar9 + -4) = 0x5fccb;
          FUN_0008f320();
        }
      }
      if ((local_48[0xf] & 1) != 0) {
        *(ushort *)(local_24 + 0x4ab) = (ushort)(byte)local_48[0xb];
        bVar3 = local_48[0xd];
        local_24[0x4af] = 1;
        *(ushort *)(local_24 + 0x4ad) = (ushort)bVar3;
        bVar3 = local_24[0x454];
        local_24[0x455] = bVar3;
        if (bVar3 < 2) {
          if (bVar3 == 1) {
            *(undefined4 *)((int)puVar9 + -4) = 0x5fd02;
            iVar6 = FUN_000401aa();
            *local_24 = *local_24 & 0xdf;
LAB_0005fd10:
            *local_24 = *local_24 | (iVar6 != -1) << 5;
          }
        }
        else if (bVar3 < 3) {
          *(undefined4 *)((int)puVar9 + -4) = 0x5fd84;
          iVar6 = FUN_00022b3a();
          if (iVar6 != 0) {
            if (*(char *)(iVar6 + 0x18) == '\0') {
              *(undefined4 *)((int)puVar9 + -4) = 0x5fd9a;
              FUN_00023042();
            }
            else {
              *(undefined4 *)((int)puVar9 + -4) = 0x5fd93;
              FUN_000230d3();
            }
          }
        }
        else if ((bVar3 == 3) && (*(short *)(local_24 + 0x35) == 0)) {
          *(undefined4 *)((int)puVar9 + -4) = 0x5fd5a;
          iVar6 = FUN_000401aa();
          *local_24 = *local_24 & 0xdf;
          local_24[3] = local_24[3] | 1;
          goto LAB_0005fd10;
        }
        local_48[0xf] = local_48[0xf] & 0xfe;
      }
      if ((local_48[0xf] & 2) != 0) {
        *(ushort *)(local_24 + 0x4ab) = (ushort)(byte)local_48[0xb];
        *(ushort *)(local_24 + 0x4ad) = (ushort)(byte)local_48[0xd];
        local_24[0x4af] = 1;
        local_48[0xf] = local_48[0xf] & 0xfd;
      }
    }
    if ((local_48[0xf] & 4) != 0) {
      if ((local_24[0x455] == 0) && (local_24[0x455] = local_24[0x454], local_24[0x454] == 1)) {
        *(undefined4 *)((int)puVar9 + -4) = 0x5fe6d;
        iVar6 = FUN_000401aa();
        *local_24 = *local_24 & 0xdf;
        *local_24 = *local_24 | (iVar6 != -1) << 5;
      }
      if (local_24[0x4af] != 0) {
        if (local_24[0x455] == local_24[0x454]) {
          bVar3 = local_24[0x455];
          if (bVar3 < 2) {
            if (bVar3 == 1) {
              if ((*local_24 & 0x20) != 0) goto LAB_0005feb9;
              if (*(int *)(&DAT_002e1418 + (uint)local_24[0x2b] * 0x1508) == 300) goto LAB_0005ff07;
LAB_0005fef5:
              *(undefined4 *)((int)puVar9 + -4) = 0x5ff02;
              FUN_0001458c();
            }
          }
          else if (((2 < bVar3) && (bVar3 == 3)) && ((local_24[3] & 1) != 0)) {
            if ((*local_24 & 0x20) == 0) {
              if (*(int *)(&DAT_002e1418 + (uint)local_24[0x2b] * 0x1508) == 300) {
LAB_0005ff07:
                if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                  *(undefined4 *)((int)puVar9 + -4) = 0x5ff32;
                  FUN_00051374();
                }
              }
              else {
                *(undefined4 *)((int)puVar9 + -4) = 0x5feed;
                iVar6 = FUN_0005f5db();
                if (iVar6 != 0) goto LAB_0005fef5;
              }
            }
            else {
LAB_0005feb9:
              *(undefined4 *)((int)puVar9 + -4) = 0x5fec6;
              FUN_000145d2();
            }
          }
        }
        local_48[0xf] = local_48[0xf] & 0xef;
      }
    }
    if (((local_48[0xf] & 8) != 0) && (local_24[0x4af] != 0)) {
      local_48[0xf] = local_48[0xf] & 0xdf;
    }
    if ((local_48[0xf] & 0x10) != 0) {
      if (local_24[0x455] == 0) {
        local_24[0x455] = local_24[0x454];
      }
      if (local_24[0x4af] != 0) {
        if (((*(short *)(local_24 + 0x35) == 0) || (local_24[4] == 0)) ||
           (*(short *)(local_24 + 0x35) == *(short *)(&DAT_002e05bc + local_54 * 0x1508))) {
LAB_0006004b:
          if (((*(short *)(local_24 + 0x35) != 0) && (local_24[5] != 0)) &&
             (*(short *)(local_24 + 0x35) != *(short *)(&DAT_002e05bc + local_54 * 0x1508))) {
            *(undefined4 *)((int)puVar9 + -4) = 0x60094;
            iVar6 = FUN_000866f8();
            if (iVar6 != 0) {
              if (*(short *)(local_24 + 0x35) != *(short *)(local_24 + 0x2f)) {
                if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                  *(undefined4 *)((int)puVar9 + -4) = 0x600c3;
                  FUN_0005aee2();
                  *(undefined4 *)((int)puVar9 + -4) = 0x600cd;
                  FUN_0005cf2d();
                }
                *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
                *(undefined4 *)((int)puVar9 + -4) = 0x600ed;
                FUN_0004845c();
                goto LAB_00060035;
              }
              goto LAB_0006003f;
            }
          }
          bVar3 = local_24[0x455];
          if (bVar3 == local_24[0x454]) {
            if (bVar3 < 2) {
              if (bVar3 == 1) {
                if ((*local_24 & 0x20) == 0) {
                  if (300 - *(int *)(&DAT_002e1418 + (uint)local_24[0x2b] * 0x1508) < 9) {
                    if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                      *(undefined4 *)((int)puVar9 + -4) = 0x60181;
                      FUN_00051374();
                    }
                  }
                  else {
                    *(undefined4 *)((int)puVar9 + -4) = 0x60154;
                    FUN_0001458c();
                  }
                }
                else {
                  *(undefined4 *)((int)puVar9 + -4) = 0x60126;
                  FUN_000145d2();
                }
              }
            }
            else if (((2 < bVar3) && (bVar3 == 3)) && (*(short *)(local_24 + 0x35) != 0)) {
              *(undefined4 *)((int)puVar9 + -4) = 0x6019d;
              FUN_0004e120();
            }
          }
        }
        else {
          *(undefined4 *)((int)puVar9 + -4) = 0x6000c;
          iVar6 = FUN_000865b8();
          if (iVar6 == 0) goto LAB_0006004b;
          *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
          *(undefined4 *)((int)puVar9 + -4) = 0x60030;
          FUN_0004845c();
LAB_00060035:
          *(undefined4 *)((int)puVar9 + -4) = 0x6003f;
          FUN_00049eff();
LAB_0006003f:
          local_48[0xf] = local_48[0xf] & 0xef;
        }
        local_24[0x4af] = 0;
        local_48[0xf] = local_48[0xf] & 0xef;
        local_24[0x455] = 0;
        local_24[3] = local_24[3] & 0xfe;
      }
    }
    if (((local_48[0xf] & 0x20) == 0) || (local_24[0x4af] == 0)) goto switchD_0005f95d_caseD_5;
    if (*(short *)(&DAT_002e05bc + (uint)local_24[0x2b] * 0x1508) == 0) {
      if (local_24[0x454] == 3) {
        *(undefined4 *)((int)puVar9 + -4) = 0x60217;
        FUN_0004e585();
      }
    }
    else {
      *(undefined4 *)((int)puVar9 + -4) = 0x60247;
      sVar4 = FUN_000849c8();
      if (sVar4 == 0) goto switchD_0005f95d_caseD_5;
    }
    local_24[0x4af] = 0;
    goto LAB_00061429;
  case 2:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      iVar6 = (&DAT_0019033b)[(byte)local_48[0xb]];
      iVar7 = (&DAT_0019033b)[(byte)local_48[0xd]];
      local_50 = *(undefined4 *)(local_48 + 10);
      if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
        DAT_0017d17b._3_1_ = (&DAT_0019d56b)[DAT_002f10ce._3_1_ * 0x4ef];
      }
      local_44 = (uint)(byte)local_48[0xb];
      uStack_58 = 0x602eb;
      cVar2 = FUN_0008f518();
      puVar9 = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        if (cVar2 == '\0') {
LAB_0006045d:
          if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
LAB_00060467:
            uStack_58 = 0x6046c;
            FUN_0006e9ab();
          }
        }
        else {
          uStack_58 = 0x60305;
          sVar4 = FUN_000728e9();
          if (sVar4 != 0) {
            uStack_58 = 0x6032a;
            iVar11 = FUN_00023868();
            if (iVar11 < 0) {
              puVar9 = &local_54;
              if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
                uStack_58 = 0x6035a;
                FUN_00051374();
                puVar9 = &local_54;
              }
              goto switchD_0005f95d_caseD_5;
            }
          }
          local_3c = (&DAT_0019033b)[iVar6 * 3];
          local_30 = (&DAT_0019033b)[iVar7 * 3];
          uStack_58 = 0x603a1;
          iVar6 = FUN_000cae40();
          if (iVar6 != 0) {
            if (local_24[0x4a3] == 0xf) {
              *(int *)(&DAT_002e17e4 + local_54 * 0x1508) =
                   *(int *)(&DAT_002e17e4 + local_54 * 0x1508) + 1;
            }
            *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
            if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) {
              uStack_58 = 0x603f9;
              FUN_0006e9ab();
            }
            local_50 = CONCAT22((short)local_30 * 0x300 + 0x180,(short)local_3c * 0x300 + 0x180);
            local_4c[0] = 0x180;
            uStack_58 = 0x60430;
            iVar6 = FUN_000444a9();
            if (iVar6 != 0) {
              *(int *)(iVar6 + 0x13) = (int)*(short *)(&DAT_002eadcd + (uint)local_24[0x4a3] * 4);
            }
          }
        }
LAB_0006046c:
        local_48[0xf] = local_48[0xf] & 0xfe;
        puVar9 = &local_54;
        goto switchD_0005f95d_caseD_5;
      }
    }
    goto LAB_00060a83;
  case 3:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x60aee;
    iVar6 = FUN_00043bb3();
    puVar9 = &local_54;
    if (iVar6 != 0) {
      uStack_58 = 0x60afc;
      local_4c[0] = FUN_000b28e8();
      uStack_58 = 0x60b0a;
      iVar7 = FUN_0007dbc0();
      if (iVar7 == 0) {
        *(undefined4 *)(iVar6 + 0xd) = local_50;
        *(undefined2 *)(iVar6 + 0x11 + (uint)bVar3 * -8) = local_4c[(uint)bVar3 * -4];
        uStack_58 = 0x60b29;
        FUN_0006385d();
        uStack_58 = 0x60b30;
        FUN_00063670();
        puVar9 = &local_54;
      }
      else {
        uStack_58 = 0x60b17;
        FUN_00072af4();
        puVar9 = &local_54;
      }
    }
    break;
  case 4:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uStack_58 = 0x60c94;
    iVar6 = FUN_00043bb3();
    if (iVar6 == 0) {
      uStack_58 = 0x60d3d;
      FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 2969, "No room here to delete") */
      puVar9 = &local_54;
    }
    else {
      uStack_58 = 0x60ca6;
      local_4c[0] = FUN_000b28e8();
      uStack_58 = 0x60cb4;
      iVar7 = FUN_0007dbc0();
      if (iVar7 == 0) {
        *(undefined4 *)(iVar6 + 0xd) = local_50;
        *(undefined2 *)(iVar6 + 0x11 + (uint)bVar3 * -8) = local_4c[(uint)bVar3 * -4];
        uStack_58 = 0x60cd6;
        FUN_0006385d();
        uStack_58 = 0x60cdd;
        FUN_00063670();
        _DAT_002eb544 = DAT_002e8bee;
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        _DAT_002eb548 = _DAT_002eb548 + 1;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        uStack_58 = 0x60d24;
        FUN_00082204();
        puVar9 = &local_54;
      }
      else {
        uStack_58 = 0x60cc1;
        FUN_00072af4();
        puVar9 = &local_54;
      }
    }
    break;
  default:
    goto switchD_0005f95d_caseD_5;
  case 6:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0;
    FUN_0004e85c();
    puVar9 = &uStack_58;
    break;
  case 7:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x60e55;
    FUN_0004ee2c();
    puVar9 = &local_54;
    break;
  case 8:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61313;
    FUN_0004e66f();
    puVar9 = &local_54;
    break;
  case 9:
    local_28 = 1;
    uStack_58 = 0x61248;
    iVar6 = FUN_0007868c();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x6129f;
    FUN_0004e585();
    puVar9 = &local_54;
    break;
  case 10:
    local_28 = 1;
    uStack_58 = 0x61398;
    iVar6 = FUN_0007868c();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    if (((local_48[0xf] & 0x10) != 0) && ((&DAT_001ae9fc)[*(ushort *)(local_24 + 0x35)] != 0)) {
      *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
      uStack_58 = 0x613ee;
      FUN_00049eff();
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    bVar13 = local_24[0x4b0] == 6;
    goto LAB_0006140f;
  case 0xb:
    local_28 = 1;
    uStack_58 = 0x61453;
    iVar6 = FUN_0007884b();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    if (((local_48[0xf] & 0x10) != 0) && (*(short *)(local_24 + 0x35) != 0)) {
      *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
      uStack_58 = 0x6149d;
      FUN_00049eff();
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    bVar13 = local_24[0x4b0] == 5;
LAB_0006140f:
    puVar9 = &local_54;
    if (bVar13) goto switchD_0005f95d_caseD_5;
    uStack_58 = 0x61429;
    FUN_0004845c();
    puVar9 = &local_54;
    goto LAB_00061429;
  case 0xc:
  case 0xf:
    local_28 = 1;
    uStack_58 = 0x614e5;
    uVar8 = FUN_0007868c();
    if (DAT_001ae9fc < uVar8) {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    }
    else {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    if (((local_48[0xf] & 0x10) != 0) &&
       (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(local_24 + 0x35)])) {
      if (*(short *)(local_24 + 0x35) != *(short *)(local_24 + 0x2f)) {
        if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
          uStack_58 = 0x61551;
          FUN_0005aee2();
          uStack_58 = 0x6155b;
          FUN_0005d32c();
          uStack_58 = 0x61565;
          FUN_0005cf2d();
        }
        *(undefined2 *)(local_24 + 0x43e) = *(undefined2 *)(local_24 + 0x35);
        uStack_58 = 0x61585;
        FUN_00049eff();
      }
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if (local_24[0x453] != 0xf) goto switchD_0005f95d_caseD_5;
    if ((local_48[0xf] & 0x20) == 0) {
      puVar9 = &local_54;
      if (*(short *)((&DAT_001ae9fc)[*(ushort *)(local_24 + 0x2f)] + 0x5e) < 0) {
        uStack_58 = 0x61606;
        FUN_00049eff();
        puVar9 = &local_54;
        if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
          uStack_58 = 0x61626;
          FUN_0005c82f();
          uStack_58 = 0x6162b;
          FUN_0005cf03();
          puVar9 = &local_54;
        }
      }
      goto switchD_0005f95d_caseD_5;
    }
    if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
      uStack_58 = 0x615c4;
      FUN_0005c82f();
      uStack_58 = 0x615c9;
      FUN_0005cf03();
    }
    uStack_58 = 0x615d8;
    FUN_00049eff();
    puVar9 = &local_54;
    goto LAB_00061429;
  case 0xd:
    local_28 = 1;
    uStack_58 = 0x61652;
    iVar6 = FUN_0007868c();
    if (iVar6 == 0) {
      local_24[0x35] = 0;
      local_24[0x36] = 0;
    }
    else {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(iVar6 + 0x1b);
    }
    if ((local_48[0xf] & 0x10) != 0) {
      if (*(short *)(local_24 + 0x2f) == 0) {
        uStack_58 = 0x616da;
        iVar6 = FUN_000785c4();
        if (iVar6 != 0) {
          *(undefined2 *)(local_24 + 0x2f) = *(undefined2 *)(iVar6 + 0x1b);
          uStack_58 = 0x616f7;
          FUN_00064b0c();
          if ((*(ushort *)((&DAT_001b0a00)[*(ushort *)(iVar6 + 100)] + 0x7a) & 0xfff) != 0) {
            uStack_58 = 0x61711;
            FUN_00039d55();
          }
        }
      }
      else {
        iVar6 = (&DAT_001ae9fc)[*(ushort *)(local_24 + 0x2f)];
        if ((local_48[0xf] & 0x80) != 0) {
          local_50 = *(undefined4 *)(local_48 + 10);
          uStack_58 = 0x616c1;
          FUN_000b3b58();
          *(undefined1 *)(iVar6 + 8) = 0x7a;
        }
      }
      local_48[0xf] = local_48[0xf] & 0xef;
    }
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x20) == 0) goto switchD_0005f95d_caseD_5;
    puVar9 = &local_54;
    if (*(short *)(local_24 + 0x2f) != 0) {
      uStack_58 = 0x61743;
      FUN_00063b6d();
      local_24[0x2f] = 0;
      local_24[0x30] = 0;
      puVar9 = &local_54;
    }
LAB_00061429:
    local_48[0xf] = local_48[0xf] & 0xdf;
    goto switchD_0005f95d_caseD_5;
  case 0xe:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    uStack_58 = 0x60b99;
    iVar6 = FUN_00043bb3();
    puVar9 = &local_54;
    if (iVar6 != 0) {
      uStack_58 = 0x60bab;
      local_4c[0] = FUN_000b28e8();
      uStack_58 = 0x60bb9;
      iVar6 = FUN_0007dbc0();
      if (iVar6 == 0) {
        *(undefined4 *)(extraout_ECX_06 + 0xd) = local_50;
        *(undefined2 *)(extraout_ECX_06 + 0x11 + (uint)bVar3 * -8) = local_4c[(uint)bVar3 * -4];
        uStack_58 = 0x60bdb;
        FUN_0006385d();
        uStack_58 = 0x60be2;
        FUN_00063670();
        uStack_58 = 0x60be9;
        FUN_00063b6d();
        DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
        DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
        uStack_58 = 0x60c1f;
        FUN_00082204();
        puVar9 = &local_54;
      }
      else {
        uStack_58 = 0x60bc6;
        FUN_00072af4();
        puVar9 = &local_54;
      }
    }
    break;
  case 0x10:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_50 = CONCAT22((short)((ulonglong)(uint)((int)(uint)*(ushort *)(local_48 + 0xc) >> 8) / 3
                                 ) * 0x300 + 0x180,
                          (short)((ulonglong)(uint)((int)(uint)*(ushort *)(local_48 + 10) >> 8) / 3)
                          * 0x300 + 0x180);
      local_4c[0] = 0;
      local_24[0x4a4] = 1;
      uStack_58 = 0x608fb;
      cVar2 = FUN_0008f75c();
      puVar9 = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        if ((&DAT_002e1591)[(uint)local_24[0x4a5] + local_54 * 0x1508] != '\0') {
          if (cVar2 == '\0') goto LAB_0006045d;
          uStack_58 = 0x60955;
          FUN_000dae68();
          uStack_58 = 0x6096f;
          iVar6 = FUN_000447fb();
          uStack_58 = 0x60979;
          uVar5 = FUN_000b28e8();
          *(undefined1 *)(iVar6 + 0x18) = 0;
          *(undefined2 *)(iVar6 + 0x11) = uVar5;
          uStack_58 = 0x60998;
          iVar6 = FUN_00077a5b();
          if (iVar6 != 0) {
            *(int *)(&DAT_002e1800 + local_54 * 0x1508) =
                 *(int *)(&DAT_002e1800 + local_54 * 0x1508) + 1;
          }
          *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
          if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) goto LAB_00060467;
        }
        goto LAB_0006046c;
      }
    }
    goto LAB_00060a83;
  case 0x11:
    local_24[0x35] = 0;
    local_24[0x36] = 0;
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61221;
    FUN_0004f195();
    puVar9 = &local_54;
    break;
  case 0x12:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      uStack_58 = 0x60a28;
      bVar3 = FUN_0008f924();
      if ((local_48[0xf] & 1) != 0) {
        uStack_58 = 0x60a57;
        FUN_000dae68();
        puVar10 = &uStack_58;
        uStack_58 = (uint)bVar3;
        FUN_00061d43();
      }
      local_48[0xf] = local_48[0xf] & 0xfe;
      puVar9 = puVar10;
    }
    goto LAB_00060a83;
  case 0x13:
    local_28 = 1;
    uStack_58 = 0x60e7c;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) {
LAB_00060eea:
      local_24[0x35] = 0;
      local_24[0x36] = 0;
      puVar9 = &local_54;
      goto switchD_0005f95d_caseD_5;
    }
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f3bc();
    puVar9 = &uStack_58;
    break;
  case 0x14:
    local_28 = 1;
    uStack_58 = 0x60f1a;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f4f1();
    puVar9 = &uStack_58;
    break;
  case 0x15:
    local_28 = 1;
    uStack_58 = 0x60faa;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f552();
    puVar9 = &uStack_58;
    break;
  case 0x16:
    local_28 = 1;
    uStack_58 = 0x61137;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    if ((int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2 < 8) {
      iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
      uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    }
    else {
      uStack_58 = 8;
    }
    FUN_0004f5b3();
    puVar9 = &uStack_58;
    break;
  case 0x17:
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x80) != 0) {
      local_24[0x4a4] = 1;
      iVar6 = (&DAT_0019033b)[(byte)local_48[0xb]];
      iVar11 = iVar6 * 3;
      iVar7 = (&DAT_0019033b)[(byte)local_48[0xd]];
      iVar12 = iVar7 * 3;
      local_1c = (byte)(iVar11 / 3);
      local_20 = (byte)(iVar12 / 3);
      local_50 = *(undefined4 *)(local_48 + 10);
      if (&DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef == local_24) {
        uStack_58 = 0x6057a;
        cVar2 = FUN_00057f6b();
        if (cVar2 == '\0') {
          local_44 = (uint)(byte)local_48[0xb];
          uStack_58 = 0x605a8;
          FUN_0008fb10();
        }
      }
      puVar9 = &local_54;
      if ((local_48[0xf] & 1) != 0) {
        iVar6 = ((&DAT_0019033b)[iVar6 * 3] + (&DAT_0019033b)[iVar7 * 3] * 0x55) * 6;
        if (((&DAT_002d33ca)[iVar6] & 7) == local_54) {
          if ((((*(byte *)((int)&DAT_00279203 + (iVar7 * 0x300 + iVar11) * 5) & 2) == 0) ||
              ((&DAT_002d33c5)[((uint)local_20 * 0x55 + (uint)local_1c) * 6] == '\x0e')) ||
             ((&DAT_002d33c5)[((uint)local_20 * 0x55 + (uint)local_1c) * 6] == '\x1a')) {
            iVar7 = local_54 * 0x1508;
            uStack_58 = 0x60714;
            iVar6 = FUN_00022b3a();
            if (iVar6 == 0) {
              uStack_58 = 0x6076d;
              iVar7 = FUN_00076789();
              iVar6 = extraout_ECX_03;
              if (iVar7 != 0) {
                local_38 = iVar12 + 1;
                local_40 = iVar11 + 1;
                iVar6 = 0;
                do {
                  uStack_58 = 0x607a7;
                  iVar7 = FUN_00076753();
                  if (iVar7 != 0) {
                    if (*(char *)(iVar7 + 0x13) == '\0') {
                      uStack_58 = 0x607c9;
                      FUN_0007795d();
                    }
                    local_2c = *(int *)(&DAT_001ae8a4 + (uint)*(byte *)(iVar7 + 0x1a) * 0x14);
                    if (local_2c != 0) {
                      uStack_58 = 0x607ee;
                      iVar7 = FUN_000444a9();
                      if (iVar7 != 0) {
                        *(int *)(iVar7 + 0x13) = local_2c;
                      }
                      *(int *)((int)&DAT_002e1086 + extraout_ECX_04) =
                           *(int *)((int)&DAT_002e1086 + extraout_ECX_04) + local_2c;
                      *(int *)((int)&DAT_002e1082 + extraout_ECX_04) =
                           *(int *)((int)&DAT_002e1082 + extraout_ECX_04) + local_2c;
                    }
                    uStack_58 = 0x6080e;
                    FUN_000767f1();
                  }
                  iVar6 = iVar6 + 2;
                } while (iVar6 != 0x12);
                if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) {
                  uStack_58 = 0x60836;
                  FUN_0006e9ab();
                }
                iVar6 = 0;
                *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
              }
            }
            else {
              iVar6 = (int)DAT_002f10ce._3_1_;
              *(undefined4 *)(&DAT_002e142d + iVar7) = 0xc0;
              if ((byte)(&DAT_0019d0f3)[iVar6 * 0x4ef] == local_54) {
                uStack_58 = 0x60747;
                FUN_0006e9ab();
              }
              uStack_58 = 0x6075b;
              FUN_00022660();
              iVar6 = extraout_ECX_02;
            }
          }
          else if ((uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45 == 0) {
            uStack_58 = 0x606ff;
            FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 3358, "Cannot create good person") */
            iVar6 = extraout_ECX_01;
          }
          else {
            if ((int)(char)(&DAT_002ddd1e)[(uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45] !=
                (uint)DAT_002eb543) {
              *(short *)(&DAT_002e105e +
                        (char)(&DAT_002ddd1e)[(uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45] * 0x1508) =
                   *(short *)(&DAT_002e105e +
                             (char)(&DAT_002ddd1e)[(uint)(byte)(&DAT_002d33c8)[iVar6] * 0x45] *
                             0x1508) + 1;
            }
            uStack_58 = 0x6067b;
            FUN_000c8654();
            local_50 = CONCAT22((short)(iVar12 / 3) * 0x300 + 0x180,
                                (short)(iVar11 / 3) * 0x300 + 0x180);
            *(undefined4 *)(&DAT_002e142d + local_54 * 0x1508) = 0xc0;
            local_4c[0] = 0x180;
            iVar6 = extraout_ECX;
            if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_54) {
              uStack_58 = 0x606e6;
              FUN_0006e9ab();
              iVar6 = extraout_ECX_00;
            }
          }
          if (iVar6 != 0) {
            uStack_58 = 0x60862;
            iVar6 = FUN_000444a9();
            if (iVar6 != 0) {
              *(int *)(iVar6 + 0x13) = extraout_ECX_05;
            }
            (&DAT_002e1086)[local_54 * 0x542] = (&DAT_002e1086)[local_54 * 0x542] + extraout_ECX_05;
            (&DAT_002e1082)[local_54 * 0x542] = (&DAT_002e1082)[local_54 * 0x542] + extraout_ECX_05;
          }
        }
        goto LAB_0006046c;
      }
    }
LAB_00060a83:
    if (((local_48[0xf] & 0x10) == 0) || (local_24[0x4af] == 0)) goto switchD_0005f95d_caseD_5;
    local_24[0x4af] = 0;
    break;
  case 0x18:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    uStack_58 = 0x60d6a;
    FUN_0004e1f2();
    puVar9 = &local_54;
    break;
  case 0x19:
    puVar9 = &local_54;
    if (((local_48[0xf] & 0x10) == 0) || (puVar9 = &local_54, (local_48[0xf] & 0x80) == 0))
    goto switchD_0005f95d_caseD_5;
    local_50 = *(undefined4 *)(local_48 + 10);
    uStack_58 = 0x61371;
    FUN_0004f63e();
    puVar9 = &local_54;
    break;
  case 0x1a:
    uStack_58 = 0x61037;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    if (7 < (int)uStack_58) {
      uStack_58 = 8;
    }
    FUN_0004f87e();
    puVar9 = &uStack_58;
    break;
  case 0x1b:
    local_28 = 1;
    uStack_58 = 0x610b7;
    uVar8 = FUN_0007868c();
    if (uVar8 <= DAT_001ae9fc) goto LAB_00060eea;
    *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    puVar9 = &local_54;
    if ((local_48[0xf] & 0x10) == 0) goto switchD_0005f95d_caseD_5;
    iVar6 = *(int *)(local_24 + 0x4d2) >> 0x1f;
    uStack_58 = (int)((*(int *)(local_24 + 0x4d2) + iVar6 * -4) - (uint)(iVar6 << 1 < 0)) >> 2;
    if (7 < (int)uStack_58) {
      uStack_58 = 8;
    }
    FUN_0004f41d();
    puVar9 = &uStack_58;
  }
  local_48[0xf] = local_48[0xf] & 0xef;
switchD_0005f95d_caseD_5:
  if (((*(short *)(local_24 + 0x35) == 0) && (*(short *)(local_48 + 10) != 0)) &&
     (*(short *)(local_48 + 0xc) == 0)) {
    *(undefined4 *)((int)puVar9 + -4) = 0x6049b;
    uVar8 = FUN_00078768();
    if (DAT_001ae9fc < uVar8) {
      *(undefined2 *)(local_24 + 0x35) = *(undefined2 *)(uVar8 + 0x1b);
    }
  }
  if ((((local_48[0xf] & 4) != 0) || ((local_48[0xf] & 8) != 0)) &&
     ((local_28 != 0 && ((local_24[0x455] == 0 || (local_24[0x455] == 3)))))) {
    *(undefined4 *)((int)puVar9 + -4) = 0x604f9;
    FUN_0004e3fa();
  }
  return;
}

/******************************************************************************
 * Function : sub_061751 (Ghidra: FUN_00061751)
 * Prototype: void sub_061751(void);
 * Address  : 0x61751 (Size: 120 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f3ad
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00061751(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = (uint)(byte)(&DAT_0019d0d3)[in_EAX * 0x4ef] * 0x11;
  iVar2 = in_EAX * 4;
  *(undefined4 *)(&DAT_0034d208 + iVar2) = 0;
  if ((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 0x40) == 0) {
    if ((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 0x10) != 0) {
      if (*(int *)(&DAT_0034d1f4 + iVar2) < 5) {
        *(undefined4 *)(&DAT_0034d208 + iVar2) = 1;
      }
      *(undefined4 *)(&DAT_0034d1f4 + in_EAX * 4) = 0;
    }
    if ((((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 4) == 0) &&
        ((*(byte *)((int)&DAT_002e90c6 + iVar1 + 1) & 1) == 0)) &&
       (*(int *)(&DAT_0034d1f4 + in_EAX * 4) < 0x7fffffff)) {
      *(int *)(&DAT_0034d1f4 + in_EAX * 4) = *(int *)(&DAT_0034d1f4 + in_EAX * 4) + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_open_keeper_packet_file_0617c9 (Ghidra: FUN_000617c9)
 * Prototype: void dk_open_keeper_packet_file_0617c9(void);
 * Address  : 0x617c9 (Size: 186 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp:3880 ("Cannot open keeper packet file for save")
 * Naming   : String 'Cannot open keeper packet file for save'
 * Callers  : 1 -> 0x40832
 * Callees  : 6 -> 0x150f0, 0xddaf0, 0xe6a10, 0xe8980, 0xe8a8c, 0xea1ef
 * Strings  :
 *   - 0x1664ba: "packet.cpp"
 *   - 0x166492: "Cannot open keeper packet file for save"
 ******************************************************************************/
void FUN_000617c9(void)

{
  char cVar1;
  
  FUN_000e6a10();
  for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
  }
  FUN_000ea1ef();
  FUN_000150f0();
  DAT_002e6fc5 = FUN_000e8980();
  if (DAT_002e6fc5 != -1) {
    DAT_002e6fc4 = 1;
    FUN_000e8a8c();
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 3880, "Cannot open keeper packet file for save") */
  return;
}

/******************************************************************************
 * Function : sub_061883 (Ghidra: FUN_00061883)
 * Prototype: void sub_061883(void);
 * Address  : 0x61883 (Size: 114 bytes)
 * Module   : packet.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5dc27
 * Callees  : 5 -> 0xddafc, 0xe8a34, 0xe8a8c, 0xe8c83, 0xf43d5
 ******************************************************************************/
void FUN_00061883(void)

{
  if (DAT_002e6fc4 != '\0') {
    if (DAT_002e6fe5 != '\0') {
      FUN_000ddafc();
    }
    FUN_000e8a34();
    FUN_000e8c83();
    FUN_000e8c83();
    FUN_000e8a8c();
    FUN_000f43d5();
  }
  return;
}

/******************************************************************************
 * Function : dk_open_keeper_packet_file_0618f5 (Ghidra: FUN_000618f5)
 * Prototype: void dk_open_keeper_packet_file_0618f5(void);
 * Address  : 0x618f5 (Size: 201 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp:3941 ("Cannot open keeper packet file for load"); packet.cpp:3956 ("PacketSave checksum not available, disabling")
 * Naming   : String 'Cannot open keeper packet file for load'
 * Callers  : 2 -> 0x5d35c, 0x5da11
 * Callees  : 5 -> 0xddaf0, 0xe8980, 0xe8a80, 0xe8ca8, 0xe97a0
 * Strings  :
 *   - 0x1664ed: "packet.cpp"
 *   - 0x166525: "packet.cpp"
 *   - 0x1664c5: "Cannot open keeper packet file for load"
 *   - 0x1664f8: "PacketSave checksum not available, disabling"
 ******************************************************************************/
void FUN_000618f5(void)

{
  int iVar1;
  
  FUN_000e8ca8();
  DAT_002e6fc5 = FUN_000e8980();
  if (DAT_002e6fc5 == -1) {
    FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 3941, "Cannot open keeper packet file for load") */
    return;
  }
  FUN_000e8a80();
  DAT_002e6fc9 = 0xf;
  iVar1 = FUN_000e97a0();
  DAT_002e6fdc = (iVar1 - 0xfU) / 0x48;
  if ((DAT_002e6fe5 != '\0') && (DAT_002e6fdb == '\0')) {
    FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 3956, "PacketSave checksum not available, disabling") */
    DAT_002e6fe5 = '\0';
  }
  if (DAT_002e6fe6 == -1) {
    DAT_002e6fea = DAT_002e6fdc + 1;
    DAT_002e6fe6 = 0;
  }
  DAT_002e6fc4 = 1;
  return;
}

/******************************************************************************
 * Function : dk_packet_saving_seek_offset_0619be (Ghidra: FUN_000619be)
 * Prototype: void dk_packet_saving_seek_offset_0619be(void);
 * Address  : 0x619be (Size: 544 bytes)
 * Module   : packet.cpp [direct_file_string_xref]
 * OrigLine : packet.cpp:3985 ("Packet Saving Seek Offset is wrong"); packet.cpp:4020 ("Packet Saving Seek Offset is wrong"); packet.cpp:4079 ("Out of turns to load")
 * Naming   : String 'Packet Saving Seek Offset is wrong'
 * Callers  : 1 -> 0x462a3
 * Callees  : 6 -> 0xddaf0, 0xddafc, 0xe7714, 0xe8a34, 0xe8a80, 0xe8c83
 * Strings  :
 *   - 0x166553: "packet.cpp"
 *   - 0x166581: "packet.cpp"
 *   - 0x1665bc: "packet.cpp"
 *   - 0x1665f4: "packet.cpp"
 *   - 0x166614: "packet.cpp"
 *   - 0x166530: "Packet Saving Seek Offset is wrong"
 *   - 0x16655e: "Packet Saving Seek Offset is wrong"
 *   - 0x16658c: "PacketSave checksum - Out of sync (GameTurn %d)"
 *   - 0x1665c7: "Opps we are really Out Of Sync (GameTurn %d)"
 *   - 0x1665ff: "Out of turns to load"
 ******************************************************************************/
void FUN_000619be(void)

{
  char cVar1;
  bool bVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int local_20;
  
  cVar1 = (&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11];
  if (in_EAX < DAT_002e6fdc) {
    iVar4 = in_EAX * 0x48 + 0xf;
    if (iVar4 != DAT_002e6fc9) {
      FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 3985, "Packet Saving Seek Offset is wrong") */
      FUN_000e8a34();
      DAT_002e6fc9 = iVar4;
    }
    FUN_000e8a80();
    DAT_002e6fc9 = DAT_002e6fc9 + 0x48;
    FUN_000e8c83();
    FUN_000e8c83();
    if ((DAT_0019d0b8 & 1) != 0) {
      bVar2 = false;
      iVar4 = extraout_ECX * 0x48 + 0xf;
      while (!bVar2) {
        for (iVar3 = 0; iVar3 < 0x44; iVar3 = iVar3 + 0x11) {
          if (((&DAT_002e90bd)[iVar3] != '\0') || (*(short *)((int)&DAT_002e90c6 + iVar3) != 0)) {
            bVar2 = true;
            break;
          }
        }
        if (!bVar2) {
          DAT_002e8bf2 = DAT_002e8bf2 + 1;
          iVar4 = iVar4 + 0x48;
          if (iVar4 != DAT_002e6fc9) {
            FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 4020, "Packet Saving Seek Offset is wrong") */
            FUN_000e8a34();
            DAT_002e6fc9 = iVar4;
          }
          FUN_000e8a80();
          DAT_002e6fc9 = DAT_002e6fc9 + 0x48;
          FUN_000e8c83();
          FUN_000e8c83();
        }
      }
    }
    if (DAT_002e6fe0 != 0) {
      DAT_002e6fe0 = DAT_002e6fe0 + -1;
    }
    if (DAT_002e6fe5 == '\0') {
      return;
    }
    iVar4 = FUN_000ddafc();
    if (iVar4 == local_20) {
      if ((&DAT_002e90bc)[(uint)(byte)(&DAT_0019d0d3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x11] == cVar1)
      {
        return;
      }
      FUN_000e7714(&DAT_0019cbac,s_Opps_we_are_really_Out_Of_Sync___001665c7,DAT_002e8bee);
    }
    else {
      FUN_000e7714(&DAT_0019cbac,s_PacketSave_checksum___Out_of_syn_0016658c,DAT_002e8bee);
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("packet.cpp", line 4079, "Out of turns to load") */
  return;
}

/******************************************************************************
 * Function : sub_061bde (Ghidra: FUN_00061bde)
 * Prototype: void sub_061bde(void);
 * Address  : 0x61bde (Size: 197 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4845c, 0x5f6c5, 0x847d4
 * Callees  : 5 -> 0x43f07, 0x61ca3, 0x81eac, 0xc57a4, 0xe6a10
 ******************************************************************************/
void FUN_00061bde(void)

{
  byte in_AL;
  uint uVar1;
  int iVar2;
  
  FUN_000e6a10();
  uVar1 = FUN_00043f07();
  if (DAT_001ae9fc < uVar1) {
    iVar2 = (uint)in_AL * 0x4ef;
    *(undefined2 *)(&DAT_0019d502 + iVar2) = *(undefined2 *)(uVar1 + 0x1b);
    *(undefined4 *)(&DAT_0019d0d4 + iVar2) = 0;
    if ((DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + (uint)in_AL * 0x1508)]) &&
       (*(char *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002e05bc + (uint)in_AL * 0x1508)] + 0x1f) ==
        '\x01')) {
      FUN_000c57a4();
    }
    FUN_00061ca3();
    FUN_00081eac();
  }
  return;
}

/******************************************************************************
 * Function : sub_061ca3 (Ghidra: FUN_00061ca3)
 * Prototype: void sub_061ca3(void);
 * Address  : 0x61ca3 (Size: 160 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x4845c, 0x4ab5f, 0x4ac70, 0x4ae00, 0x4aea9, 0x4af0a, 0x4b1c6, 0x4b1f4, 0x5f6c5, 0x61bde ...
 * Callees  : 2 -> 0x4fbd8, 0x8ccec
 ******************************************************************************/
void FUN_00061ca3(void)

{
  int in_EAX;
  int in_EDX;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = in_EAX * 0x4ef;
  if ((DAT_002e8bee <= *(uint *)(&DAT_0019d0d8 + iVar1)) && ((in_EDX == 0x312 || (in_EDX == 0x313)))
     ) {
    *(undefined4 *)(&DAT_0019d0d8 + iVar1) = 0;
  }
  if ((*(uint *)(&DAT_0019d0d8 + iVar1) < DAT_002e8bee) &&
     (in_EDX != *(int *)(&DAT_0019d0d4 + iVar1))) {
    *(int *)(&DAT_0019d0d4 + iVar1) = in_EDX;
    if ((in_EDX == 0x30e) || (in_EDX == 0x30d)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_0008ccec(uVar2,0,2);
    FUN_0004fbd8();
  }
  return;
}

/******************************************************************************
 * Function : sub_061d43 (Ghidra: FUN_00061d43)
 * Prototype: undefined4 sub_061d43(char param_1);
 * Address  : 0x61d43 (Size: 323 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x48c77, 0x5f6c5
 * Callees  : 7 -> 0x22e62, 0x449a4, 0x61e86, 0x6e9ab, 0x7795d, 0x77a5b, 0xda6fc
 ******************************************************************************/
undefined4 FUN_00061d43(char param_1)

{
  int iVar1;
  int in_ECX;
  uint unaff_EBX;
  int iVar2;
  
  iVar2 = unaff_EBX * 0x1508;
  if ((&DAT_002e15a6)[in_ECX + iVar2] != '\0') {
    if (param_1 != '\0') {
      FUN_00022e62();
      FUN_000449a4(0);
      FUN_000da6fc();
      iVar1 = FUN_00077a5b();
      if (iVar1 != 0) {
        FUN_0007795d();
        *(int *)(&DAT_002e1808 + iVar2) = *(int *)(&DAT_002e1808 + iVar2) + 1;
      }
      iVar1 = (int)DAT_002f10ce._3_1_;
      *(undefined4 *)(&DAT_002e142d + iVar2) = 0xc0;
      if ((byte)(&DAT_0019d0f3)[iVar1 * 0x4ef] == unaff_EBX) {
        FUN_0006e9ab();
      }
      FUN_00061e86();
      return 1;
    }
    if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == unaff_EBX) {
      FUN_0006e9ab();
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_061e86 (Ghidra: FUN_00061e86)
 * Prototype: void sub_061e86(void);
 * Address  : 0x61e86 (Size: 149 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x61d43
 * Callees  : 1 -> 0x72af4
 ******************************************************************************/
void FUN_00061e86(void)

{
  char *pcVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  
  for (iVar4 = in_EDX * 0xf00 + in_EAX * 0xf; iVar4 < in_EAX * 0xf + (in_EDX * 3 + 3) * 0x500;
      iVar4 = iVar4 + 0x500) {
    iVar5 = (int)&DAT_00279203 + iVar4;
    for (iVar6 = in_EAX * 3; iVar6 < in_EAX * 3 + 3; iVar6 = iVar6 + 1) {
      uVar3 = (&DAT_001ae9fc)[(*(uint *)(iVar5 + 1) & 0x3fffff) >> 0xb];
      while (DAT_001ae9fc < uVar3) {
        uVar2 = (&DAT_001ae9fc)[*(ushort *)(uVar3 + 2)];
        pcVar1 = (char *)(uVar3 + 0x1f);
        uVar3 = uVar2;
        if (*pcVar1 == '\x04') {
          FUN_00072af4();
          iVar4 = extraout_ECX;
        }
      }
      iVar5 = iVar5 + 5;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_061f1b (Ghidra: FUN_00061f1b)
 * Prototype: bool sub_061f1b(void);
 * Address  : 0x61f1b (Size: 92 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x61f77
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_00061f1b(void)

{
  int in_EAX;
  int iVar1;
  int *in_EDX;
  int iVar2;
  int iVar3;
  
  if (*(char *)(in_EAX + 0x29) == '\x02') {
    return false;
  }
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = 0;
  do {
    if (((((&DAT_0019d0c8)[iVar1] & 1) != 0) && ((&DAT_0019d0f4)[iVar1] == '\x01')) &&
       (iVar2 = iVar2 + 1, (&DAT_0019d0f1)[iVar1] == '\x02')) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + 0x4ef;
  } while (iVar1 != 0x18ab);
  *in_EDX = iVar2;
  return iVar2 == iVar3 + 1;
}

/******************************************************************************
 * Function : sub_061f77 (Ghidra: FUN_00061f77)
 * Prototype: void sub_061f77(void);
 * Address  : 0x61f77 (Size: 367 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x21527, 0x32f5c, 0x61f1b, 0xedc70
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x0006200e) */

void FUN_00061f77(void)

{
  byte *in_EAX;
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int in_EDX;
  
  if ((DAT_0019d0b6 & 1) == 0) {
    *in_EAX = *in_EAX & 0xfe;
    pbVar3 = &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef;
  }
  else {
    iVar1 = FUN_00061f1b();
    if (iVar1 != 0) {
      iVar2 = 0;
      do {
        if (((((&DAT_0019d0c8)[iVar2] & 1) != 0) && ((&DAT_0019d0f4)[iVar2] == '\x01')) &&
           ((&DAT_0019d0f1)[iVar2] == '\0')) {
          (&DAT_0019d0f1)[iVar2] = 1;
        }
        iVar2 = iVar2 + 0x4ef;
      } while (iVar2 != 0x18ab);
    }
    if (((in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) ||
        (iVar2 = FUN_00032f5c(), iVar2 != 0)) || (iVar1 != 0)) {
      FUN_000edc70();
      DAT_0019a2a0 = 1;
      if (extraout_ECX_00 != 0) {
        DAT_0019a2a1 = 1;
      }
      *in_EAX = *in_EAX & 0xfe;
      iVar1 = FUN_00032f5c();
      if (iVar1 == 0) {
        return;
      }
      iVar1 = 0;
      do {
        if (((&DAT_0019d0c8)[iVar1] & 1) != 0) {
          (&DAT_0019d0c8)[iVar1] = (&DAT_0019d0c8)[iVar1] & 0xfe;
          (&DAT_0019d0ce)[iVar1] = (&DAT_0019d0ce)[iVar1] | 2;
        }
        iVar1 = iVar1 + 0x4ef;
      } while (iVar1 != 0x18ab);
      return;
    }
    if (in_EAX[0x29] == 0) {
      *in_EAX = *in_EAX | 0x40;
      FUN_00021527();
      in_EDX = extraout_ECX_01;
    }
    else {
      *in_EAX = *in_EAX & 0xfe;
      in_EDX = extraout_ECX;
    }
    pbVar3 = &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef;
  }
  if ((in_EAX == pbVar3) && (DAT_0019a2a0 = 1, in_EDX != 0)) {
    DAT_0019a2a0 = 1;
    DAT_0019a2a1 = 1;
  }
  return;
}

/******************************************************************************
 * Function : sub_0620e6 (Ghidra: FUN_000620e6)
 * Prototype: void sub_0620e6(void);
 * Address  : 0x620e6 (Size: 338 bytes)
 * Module   : packet.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x627b5, 0xecf70, 0xf3264, 0xf32ae
 ******************************************************************************/
void FUN_000620e6(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte in_AL;
  int iVar4;
  char in_DL;
  
  bVar3 = DAT_0019d0b8;
  bVar2 = true;
  iVar4 = 0;
  do {
    if (0x18aa < iVar4) {
LAB_0006214c:
      if (bVar2) {
        DAT_0019d0b8 = DAT_0019d0b8 & 0xfe;
        if ((in_AL & 1) != 0) {
          DAT_0019d0b8 = bVar3 & 0x7e | in_AL & 1;
          DAT_0019d0b8 = DAT_0019d0b8 | in_DL << 7;
        }
        if (DAT_00334019 == 0) {
          if ((DAT_0019d0b8 & 1) == 0) {
            FUN_000f32ae();
            FUN_000ecf70();
          }
          else {
            FUN_000f32ae();
            FUN_000ecf70();
          }
          FUN_000f3264();
        }
        if (((DAT_0019d0b8 & 1) != 0) && (((&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 8) != 0)) {
          FUN_000627b5();
          (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] =
               (&DAT_0019d0cb)[DAT_002f10ce._3_1_ * 0x4ef] & 0xf7;
        }
      }
      return;
    }
    if ((((((&DAT_0019d0c8)[iVar4] & 1) != 0) && ((&DAT_0019d0f4)[iVar4] == '\x01')) &&
        (((&DAT_0019d0c8)[iVar4] & 0x40) == 0)) &&
       (((((cVar1 = (&DAT_0019d578)[iVar4], cVar1 == '\x0e' || (cVar1 == '\x0f')) ||
          ((cVar1 == '\r' || ((cVar1 == '\x05' || (cVar1 == '\x06')))))) || (cVar1 == '\a')) ||
        (cVar1 == '\b')))) {
      bVar2 = false;
      goto LAB_0006214c;
    }
    iVar4 = iVar4 + 0x4ef;
  } while( true );
}

/******************************************************************************
 * Function : sub_062238 (Ghidra: FUN_00062238)
 * Prototype: void sub_062238(void);
 * Address  : 0x62238 (Size: 185 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5d7b5
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00062238(void)

{
  DAT_0034d21c = DAT_002ee8a2;
  DAT_0034d21d = DAT_002ee8a3;
  DAT_0034d21e = DAT_002ee8a4;
  DAT_0034d21f = DAT_002ee8a5;
  DAT_0034d220 = DAT_002ee8a6;
  DAT_0034d221 = DAT_002ee8a7;
  DAT_0034d222 = DAT_002ee8a8;
  DAT_0034d223 = DAT_002ee8a9;
  DAT_0034d225 = DAT_002ee8ab;
  DAT_0034d227 = DAT_002ee8ad;
  DAT_0034d22b = DAT_002ee8b1;
  DAT_0034d22f = DAT_002ee8b5;
  DAT_0034d233 = DAT_002ee8b9;
  DAT_0034d237 = DAT_002ee8bd;
  DAT_0034d23b = DAT_002ee8c1;
  DAT_0034d23f = DAT_002ee8c5;
  DAT_0034d243 = DAT_002ee8c9;
  DAT_0034d247 = DAT_002ee8cd;
  return;
}

/******************************************************************************
 * Function : sub_0622f1 (Ghidra: FUN_000622f1)
 * Prototype: void sub_0622f1(void);
 * Address  : 0x622f1 (Size: 185 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5d7b5
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000622f1(void)

{
  DAT_002ee8a2 = DAT_0034d21c;
  DAT_002ee8a3 = DAT_0034d21d;
  DAT_002ee8a4 = DAT_0034d21e;
  DAT_002ee8a5 = DAT_0034d21f;
  DAT_002ee8a6 = DAT_0034d220;
  DAT_002ee8a7 = DAT_0034d221;
  DAT_002ee8a8 = DAT_0034d222;
  DAT_002ee8a9 = DAT_0034d223;
  DAT_002ee8ab = DAT_0034d225;
  DAT_002ee8ad = DAT_0034d227;
  DAT_002ee8b1 = DAT_0034d22b;
  DAT_002ee8b5 = DAT_0034d22f;
  DAT_002ee8b9 = DAT_0034d233;
  DAT_002ee8bd = DAT_0034d237;
  DAT_002ee8c1 = DAT_0034d23b;
  DAT_002ee8c5 = DAT_0034d23f;
  DAT_002ee8c9 = DAT_0034d243;
  DAT_002ee8cd = DAT_0034d247;
  return;
}

/******************************************************************************
 * Function : sub_0623aa (Ghidra: FUN_000623aa)
 * Prototype: void sub_0623aa(void);
 * Address  : 0x623aa (Size: 408 bytes)
 * Module   : packet.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5d7b5, 0x5dc27
 * Callees  : 6 -> 0x595ab, 0xe6b20, 0xe6d80, 0xe797c, 0xe79fc, 0xf0870
 ******************************************************************************/
void FUN_000623aa(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_000e797c();
  if (iVar1 == 1) {
    uVar2 = (uint)DAT_0019cba4;
    uVar3 = (uint)DAT_0019cba2;
    FUN_000595ab();
    DAT_003d98b4 = DAT_001991b8;
    DAT_003d9874 = 0x100;
    FUN_000e6b20();
    uVar4 = 100;
    uVar5 = DAT_00333f2f;
    FUN_000e6d80();
    FUN_000f0870(0,(unaff_EBX + (int)((uVar2 - unaff_EBX) + -200) / 2 + 100) - in_EDX,in_EDX * 2,
                 (in_EDX * 2) / (int)(uint)DAT_0019cba6,
                 ((int)(uVar3 - 100) / 2 + extraout_ECX + 8) / (int)(uint)DAT_0019cba6,uVar4,uVar5);
    FUN_000f0870(0x85);
    FUN_000e797c();
    FUN_000e79fc();
  }
  return;
}

