/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: bflib/bflib_video.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 4
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0f0d90 (Ghidra: FUN_000f0d90)
 * Prototype: undefined8 sub_0f0d90(void);
 * Address  : 0xf0d90 (Size: 209 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xe79ac, 0xf0e64
 * Callees  : 4 -> 0xe6a10, 0xea1f4, 0xfed1d, 0xfed45
 * Strings  :
 *   - 0x16e768: "VESA"
 ******************************************************************************/
undefined8 FUN_000f0d90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  undefined4 local_8c [7];
  undefined4 local_70;
  undefined2 local_6a;
  undefined2 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_44;
  
  FUN_000e6a10();
  local_70 = 0x4f00;
  local_6a = (undefined2)(DAT_003de9b4 >> 4);
  local_8c[0] = 0;
  local_68 = local_6a;
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000fed1d();
  local_58 = 0x300;
  local_54 = 0x10;
  local_44 = (undefined1 *)local_8c;
  FUN_000fed45();
  iVar1 = FUN_000ea1f4();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_sbawe32_mdi_0f143c (Ghidra: FUN_000f143c)
 * Prototype: undefined8 dk_sbawe32_mdi_0f143c(void);
 * Address  : 0xf143c (Size: 786 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Naming   : String 'SBAWE32.MDI'
 * Callers  : 3 -> 0x402e5, 0x6f3d6, 0xfe128
 * Callees  : 16 -> 0xe7714, 0xe8980, 0xe8a1c, 0xe8ca8, 0xf09e5, 0xf1018, 0xf10fc, 0xf113f, 0xf11e4, 0xf129d ...
 * Strings  :
 *   - 0x16e784: "SBAWE32.MDI"
 *   - 0x1955a4: "Bullfrog"
 *   - 0x16e792: "%s/%s.sbk"
 *   - 0x16e79c: "Request awe32 soundfont load - %s\n"
 *   - 0x16e7bf: "soundfont load error reading SBK header\n"
 *   - 0x16e7e8: "soundfont load error reading sample packets\n"
 *   - 0x16e815: "soundfont load error laoding pcm to awe32\n"
 *   - 0x16e840: "soundfont load error allocating preset memory\n"
 *   - 0x16e86f: "soundfont load error reading presets\n"
 *   - 0x16e895: "soundfont load error loading presets\n"
 *   - 0x16e8bb: "soundfont load error during load request\n"
 *   - 0x16e8e5: "soundfont load error defining banks\n"
 *   - 0x16e90a: "soundfont load error accessing RAM size\n"
 *   - 0x16e933: "soundfont load error allocating for data buffer memory\n"
 *   - 0x16e96b: "soundfont load error opening SBK file\n"
 *   - 0x16e992: "soundfont load error - MusicAble=0\n"
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000f143c(void)

{
  undefined6 uVar1;
  undefined6 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_EDX;
  char **ppcVar6;
  char **ppcVar7;
  int in_GS_OFFSET;
  undefined8 uVar8;
  int6 iVar9;
  char *apcStack_3c [2];
  undefined1 local_34 [20];
  char local_20 [4];
  undefined4 local_1c;
  
  if (DAT_003df8d0 != '\0') {
    DAT_003df8f5 = '\x01';
LAB_000f1457:
    uVar3 = 1;
    goto LAB_000f1747;
  }
  if ((DAT_003df8d1 == '\0') || (DAT_00195d98 == '\0')) {
LAB_000f1729:
    uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
    uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
    ppcVar7 = apcStack_3c + 1;
    apcStack_3c[1] = s_soundfont_load_error___MusicAble_0016e992;
  }
  else {
    apcStack_3c[1] = (char *)0xf148a;
    iVar4 = FUN_000f09e5();
    if (iVar4 != 0) goto LAB_000f1729;
    apcStack_3c[1] = (char *)0xf14a1;
    iVar4 = FUN_000f09e5();
    if (iVar4 != 0) goto LAB_000f1729;
    if (DAT_003df8f5 == '\x01') {
      apcStack_3c[1] = (char *)0xf14ba;
      FUN_000f174e();
      DAT_003df8f5 = '\0';
    }
    apcStack_3c[1] = (char *)0xf14cd;
    FUN_000e8ca8();
    apcStack_3c[1] = s_Bullfrog_001955a4;
    apcStack_3c[0] = &DAT_003deaac;
    FUN_000e7714(local_34,s__s__s_sbk_0016e792);
    apcStack_3c[1] = local_34;
    apcStack_3c[0] = s_Request_awe32_soundfont_load_____0016e79c;
    FUN_000e7714(&DAT_003df651);
    apcStack_3c[1] = (char *)0xf150d;
    FUN_000f9610();
    apcStack_3c[1] = (char *)0xf1515;
    DAT_003dea84 = FUN_000e8980();
    uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
    uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
    if (DAT_003dea84 == -1) {
      ppcVar7 = apcStack_3c + 1;
      apcStack_3c[1] = s_soundfont_load_error_opening_SBK_0016e96b;
    }
    else {
      apcStack_3c[1] = (char *)0xf1528;
      uVar3 = FUN_000f7f41();
      apcStack_3c[1] = (char *)0xf1534;
      iVar9 = FUN_000f1018();
      uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
      DAT_003dea8c = (undefined2)((uint6)iVar9 >> 0x20);
      DAT_003dea88 = (int)iVar9;
      if (iVar9 == 0) {
        ppcVar7 = apcStack_3c + 1;
        apcStack_3c[1] = s_soundfont_load_error_allocating_f_0016e933;
        uVar1 = 0;
      }
      else {
        apcStack_3c[1] = (char *)0xf1557;
        iVar5 = FUN_000f10fc();
        iVar4 = DAT_003dea88;
        uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
        uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
        if (iVar5 == -1) {
          ppcVar7 = apcStack_3c + 1;
          apcStack_3c[1] = s_soundfont_load_error_accessing_R_0016e90a;
        }
        else {
          *(undefined4 *)(in_GS_OFFSET + DAT_003dea88) = 0;
          *(undefined4 *)(in_GS_OFFSET + iVar4 + 4) = uVar3;
          apcStack_3c[1] = (char *)0xf1583;
          iVar4 = FUN_000f113f();
          uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
          uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
          if (iVar4 == 0) {
            apcStack_3c[1] = local_20;
            apcStack_3c[0] = (char *)0xf15ab;
            iVar4 = FUN_0010eb40();
            uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
            uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
            if (iVar4 == 0) {
              apcStack_3c[0] = (char *)0xf15d5;
              uVar8 = FUN_000f11e4();
              uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
              uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
              local_1c = (undefined4)((ulonglong)uVar8 >> 0x20);
              if (((int)uVar8 == 0) && ((short)((ulonglong)uVar8 >> 0x20) == 0)) {
                ppcVar7 = apcStack_3c;
                apcStack_3c[0] = s_soundfont_load_error_during_load_0016e8bb;
              }
              else {
                apcStack_3c[0] = (char *)0xf15fb;
                FUN_000f7c2e();
                ppcVar6 = apcStack_3c + 1;
                for (iVar4 = 0; iVar4 < *(short *)(in_GS_OFFSET + (int)uVar8); iVar4 = iVar4 + 1) {
                  ppcVar6[0xffffffff] = local_20;
                  ppcVar6[0xfffffffe] = (char *)0xf1629;
                  iVar5 = FUN_0010eb40();
                  uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
                  uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
                  if (iVar5 != 0) {
                    ppcVar7 = ppcVar6 + 0xfffffffe;
                    ppcVar6[0xfffffffe] = s_soundfont_load_error_reading_sam_0016e7e8;
                    goto LAB_000f172e;
                  }
                  ppcVar6[0xfffffffe] = (char *)0xf1653;
                  iVar5 = FUN_000f129d();
                  uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
                  uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
                  if (iVar5 != 0) {
                    ppcVar7 = ppcVar6 + 0xfffffffe;
                    ppcVar6[0xfffffffe] = s_soundfont_load_error_laoding_pcm_0016e815;
                    goto LAB_000f172e;
                  }
                  ppcVar6 = ppcVar6 + 0xffffffff;
                }
                ppcVar6[0xffffffff] = (char *)0xf166a;
                iVar9 = FUN_000f1018();
                uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
                DAT_003dea92 = (undefined2)((uint6)iVar9 >> 0x20);
                DAT_003dea8e = (undefined4)iVar9;
                if (iVar9 == 0) {
                  ppcVar7 = ppcVar6 + 0xffffffff;
                  ppcVar6[0xffffffff] = s_soundfont_load_error_allocating_p_0016e840;
                  uVar2 = 0;
                }
                else {
                  ppcVar6[0xffffffff] = (char *)0xf169c;
                  FUN_000f7c2e();
                  ppcVar6[0xffffffff] = local_20;
                  ppcVar6[0xfffffffe] = (char *)0xf16be;
                  iVar4 = FUN_0010eb40();
                  uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
                  uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
                  if (iVar4 == 0) {
                    ppcVar6[0xfffffffe] = (char *)0xf16e5;
                    iVar4 = FUN_000f1342();
                    uVar2 = CONCAT24(DAT_003dea92,DAT_003dea8e);
                    uVar1 = CONCAT24(DAT_003dea8c,DAT_003dea88);
                    if (iVar4 == 0) {
                      DAT_003df8f5 = '\x01';
                      ppcVar6[0xfffffffe] = (char *)0xf1724;
                      FUN_000e8a1c();
                      goto LAB_000f1457;
                    }
                    ppcVar7 = ppcVar6 + 0xfffffffe;
                    ppcVar6[0xfffffffe] = s_soundfont_load_error_loading_pre_0016e895;
                  }
                  else {
                    ppcVar7 = ppcVar6 + 0xfffffffe;
                    ppcVar6[0xfffffffe] = s_soundfont_load_error_reading_pre_0016e86f;
                  }
                }
              }
            }
            else {
              ppcVar7 = apcStack_3c;
              apcStack_3c[0] = s_soundfont_load_error_reading_SBK_0016e7bf;
            }
          }
          else {
            ppcVar7 = apcStack_3c + 1;
            apcStack_3c[1] = s_soundfont_load_error_defining_ba_0016e8e5;
          }
        }
      }
    }
  }
LAB_000f172e:
  DAT_003dea92 = (undefined2)((uint6)uVar2 >> 0x20);
  DAT_003dea8e = (undefined4)uVar2;
  DAT_003dea8c = (undefined2)((uint6)uVar1 >> 0x20);
  DAT_003dea88 = (int)uVar1;
  ppcVar7[-1] = &DAT_003df651;
  ppcVar7[-2] = (char *)0xf1738;
  FUN_000e7714();
  *ppcVar7 = (char *)0xf1745;
  FUN_000f9610();
  uVar3 = 0;
LAB_000f1747:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : dk_bf_debug_audio_0f1b38 (Ghidra: FUN_000f1b38)
 * Prototype: void dk_bf_debug_audio_0f1b38(void);
 * Address  : 0xf1b38 (Size: 1615 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Naming   : String 'BF_DEBUG_AUDIO'
 * Callers  : 1 -> 0x45bb8
 * Callees  : 11 -> 0xe7714, 0xe8ca8, 0xea94f, 0xec93f, 0xf0964, 0xf8eec, 0xf9610, 0xf996b, 0xfe128, 0x10ed88 ...
 * Strings  :
 *   - 0x16e9d8: "BF_DEBUG_AUDIO"
 *   - 0x16e9e7: "BUILD %d compiled %d\n"
 *   - 0x16e9fd: "BF_FORCE_MAX_SAMPLES"
 *   - 0x16ea12: "System override - ForceMaxNumberOfSamples %d\n"
 *   - 0x16ea40: "BF_FORCE_MIDI_SEQUENCE_NUMBER"
 *   - 0x16ea5e: "System override - ForceMidiSequenceNumber %d\n"
 *   - 0x16ea8c: "BF_FORCE_REDBOOK_TRACK"
 *   - 0x16eaa3: "System override - ForceRedbookTrack %d\n"
 *   - 0x16eacb: "BF_FORCE_SOUND_TYPE"
 *   - 0x16eadf: "System override - ForceSoundType %d\n"
 *   - 0x16eb04: "BF_FORCE_SOUND_DISABLE"
 *   - 0x16eb1b: "System override - ForceSoundDisable \n"
 *   - 0x16eb41: "BF_FORCE_MUSIC_DISABLE"
 *   - 0x16eb58: "System override - ForceMusicDisable \n"
 *   - 0x16eb7e: "BF_FORCE_REDBOOK_DISABLE"
 *   - 0x16eb97: "System override - ForceRedbookDisable \n"
 *   - 0x16ebbf: "BF_FORCE_DANGER_MUSIC_DISABLE"
 *   - 0x16ebdd: "System override - ForceDangerMusicDisable\n"
 *   - 0x16ec08: "BF_FORCE_LOAD_SOUNDS_DISABLE"
 *   - 0x16ec25: "System override - ForceLoadSoundsDisable\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1b38(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *in_EAX;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_003df650 = 1;
  }
  FUN_000e7714(&DAT_003df651,s_BUILD__d_compiled__d_0016e9e7,DAT_001955b0,DAT_001955b4);
  FUN_000f9610();
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    uVar1 = FUN_000f0964();
    *(undefined1 *)(in_EAX + 4) = uVar1;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceMaxNumber_0016ea12,uVar1);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    _DAT_003debdc = FUN_000f0964();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceMidiSeque_0016ea5e,(char)in_EAX[4]);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_003debd8 = FUN_000f0964();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceRedbookTr_0016eaa3,(char)in_EAX[4]);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    uVar2 = FUN_000f0964();
    *(undefined2 *)(in_EAX + 3) = uVar2;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceSoundType_0016eadf,uVar2);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_00195d18 = 0;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceSoundDisa_0016eb1b);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_00195d98 = 0;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceMusicDisa_0016eb58);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    *(undefined1 *)((int)in_EAX + 0x19) = 0;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceRedbookDi_0016eb97);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    *(undefined1 *)((int)in_EAX + 0x13) = 1;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceDangerMus_0016ebdd);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    *(undefined1 *)(in_EAX + 5) = 1;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceLoadSound_0016ec25);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    *(undefined1 *)((int)in_EAX + 0x15) = 1;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceLoadMusic_0016ec6b);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    *(undefined1 *)((int)in_EAX + 0x16) = 1;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceSoundfont_0016ecb4);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_003debd0 = FUN_000f0964();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceSoundMast_0016ecfe,DAT_003debd0);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_003debcc = FUN_000f0964();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceMidiMaste_0016ed47,DAT_003debcc);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_003debd4 = FUN_000f0964();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceRedbookVo_0016ed8b,DAT_003debd4);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    *(undefined1 *)((int)in_EAX + 0x11) = 0;
    FUN_000e7714(&DAT_003df651,s_System_override___ForceMono_0016edc2);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_00195d22 = FUN_000f0964();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceSystemPla_0016edfd,DAT_00195d22);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    FUN_000e8ca8();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceSoundDriv_0016ee46,extraout_ECX);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    FUN_000e8ca8();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceSoundData_0016ee8a,extraout_ECX_00);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    FUN_000e8ca8();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceMusicData_0016eecc,extraout_ECX_01);
    FUN_000f9610();
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 != 0) {
    DAT_003debe0 = 1;
    FUN_000e8ca8();
    FUN_000e7714(&DAT_003df651,s_System_override___ForceMidiType___0016ef08,extraout_ECX_02);
    FUN_000f9610();
  }
  if (in_EAX[2] != 0) {
    FUN_000f996b(in_EAX[2]);
  }
  FUN_000e8ca8();
  FUN_000e8ca8();
  if (*in_EAX != 0) {
    FUN_000e8ca8();
  }
  if (in_EAX[1] != 0) {
    FUN_000e8ca8();
  }
  DAT_00195d14 = (uint)*(byte *)(in_EAX + 4);
  DAT_003df524 = (undefined2)in_EAX[3];
  if (*(char *)((int)in_EAX + 0x12) == '\0') {
    DAT_00195d1b = 0;
  }
  if (*(char *)((int)in_EAX + 0x11) == '\0') {
    DAT_00195d1c = 0;
  }
  if (*(char *)((int)in_EAX + 0x13) == '\x01') {
    DAT_003df8f8 = 1;
  }
  if ((char)in_EAX[5] == '\x01') {
    DAT_003df515 = 1;
  }
  if (*(char *)((int)in_EAX + 0x15) == '\x01') {
    DAT_003df8f6 = 1;
  }
  if (*(char *)((int)in_EAX + 0x16) == '\x01') {
    DAT_003df8d0 = 1;
  }
  if (*(char *)((int)in_EAX + 0x17) == '\x01') {
    DAT_003df52f = 1;
  }
  FUN_000e7714(&DAT_003df651,s_BF1___MA__d_0016ef38,DAT_00195d98);
  FUN_000f9610();
  FUN_000e7714(&DAT_003df651,s_BF2___SA__d_0016ef48,DAT_00195d18);
  FUN_000f9610();
  if (((*(byte *)((int)in_EAX + 0xe) & 1) == 0) && (DAT_003debec == 0)) {
    DAT_00195d98 = 0;
  }
  if (((*(byte *)((int)in_EAX + 0xe) & 2) == 0) && (DAT_003debe8 == 0)) {
    DAT_00195d18 = 0;
  }
  FUN_000f8eec();
  FUN_000fe128();
  FUN_0010edec();
  if ((char)in_EAX[6] == '\x01') {
    FUN_000ea94f();
  }
  if (*(char *)((int)in_EAX + 0x19) == '\x01') {
    FUN_000ec93f();
  }
  FUN_000e7714(&DAT_003df651,s_BF54___MA__d_0016ef58,DAT_00195d98);
  FUN_000f9610();
  FUN_000e7714(&DAT_003df651,s_BF55___SA__d_0016ef68,DAT_00195d18);
  FUN_000f9610();
  FUN_000e7714(&DAT_003df651,s_BF56___music_driver____s_0016ef78,&DAT_003df97c);
  FUN_000f9610();
  FUN_000e7714(&DAT_003df651,s_BF57___sound_driver____s_0016ef92,&DAT_003df5b8);
  FUN_000f9610();
  return;
}

/******************************************************************************
 * Function : dk_bf25_init_music_0fe128 (Ghidra: FUN_000fe128)
 * Prototype: void dk_bf25_init_music_0fe128(void);
 * Address  : 0xfe128 (Size: 1846 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Naming   : String 'BF25 - Init Music'
 * Callers  : 1 -> 0xf1b38
 * Callees  : 21 -> 0xe7714, 0xf09e5, 0xf143c, 0xf174e, 0xf25b4, 0xf3264, 0xf9610, 0xf98ca, 0xf99cc, 0xf9d16 ...
 * Strings  :
 *   - 0x170ebc: "BF25 - Init Music\n"
 *   - 0x170ecf: "SAMPLE"
 *   - 0x170ed6: "%s.ad"
 *   - 0x170edc: "%s.opl"
 *   - 0x170ee3: "BF_FORCE_MIDI_DRIVER"
 *   - 0x170ef8: "BF29 - Force midi driver environment active\n"
 *   - 0x170f25: "%s %x %d %d %d"
 *   - 0x170f34: "BF30 - MDMUSIC environment driver installation - failed\n"
 *   - 0x170f6d: "BF31 - MDMUSIC environment driver installation - passed\n"
 *   - 0x1710be: "ADLIB.MDI"
 *   - 0x170fa9: "MDI.INI"
 *   - 0x170fb1: "BF32 - Search for MDI.INI - passed\n"
 *   - 0x170fd5: "None"
 *   - 0x170fda: "BF33 - user requests no music in SETSOUND\n"
 *   - 0x171005: "BF34 - MDI.INI driver installation - passed\n"
 *   - 0x171032: "BF35 - MDI.INI driver installation - failed\n"
 *   - 0x17105f: "BF36 - Search for MDI.INI - failed\n"
 *   - 0x171083: "BF37 - all music driver installation attempts failed - %s\n"
 *   - 0x1710ca: "ADLIBG.MDI"
 *   - 0x1710d7: "OPL3.MDI"
 ******************************************************************************/
void FUN_000fe128(void)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 extraout_EDX;
  char *pcVar4;
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  undefined1 local_38 [2];
  undefined1 local_36 [2];
  undefined1 local_34 [2];
  undefined1 local_32 [18];
  undefined1 local_20 [16];
  
  bVar1 = false;
  if (DAT_00195d98 == '\0') {
    return;
  }
  FUN_000e7714(&DAT_003df651,s_BF25___Init_Music_00170ebc);
  FUN_000f9610();
  if (DAT_003df52a == '\0') {
    FUN_000fe870(FUN_000e9484);
    FUN_000fe883(FUN_000e94b0);
    FUN_000fee88();
    DAT_003df52a = '\x01';
  }
  FUN_000f99cc(0xb,0x78);
  FUN_000f99cc(0xc,1);
  FUN_000f99cc(0xd,0x7f);
  FUN_000f99cc(0xe,1);
  FUN_000f99cc(0xf,0);
  FUN_000f99cc(0x10,0xc);
  if (DAT_00195d1b == '\0') {
    FUN_000f99cc(0x11,0);
  }
  FUN_000e7714(local_158,s_SAMPLE_00170ecf);
  FUN_000fbd90(local_158);
  FUN_000e7714(local_c8,s__s_ad_00170ed6,local_158);
  FUN_000e7714(local_c8,s__s_opl_00170edc,local_158);
  iVar2 = FUN_0010ed88();
  if (iVar2 == 0) {
    iVar2 = FUN_000f9d16(&DAT_003df8fc,s_MDI_INI_00170fa9);
    if (iVar2 == 0) {
      FUN_000e7714(&DAT_003df651,s_BF36___Search_for_MDI_INI___fail_0017105f);
    }
    else {
      FUN_000e7714(&DAT_003df651,s_BF32___Search_for_MDI_INI___pass_00170fb1);
      FUN_000f9610();
      iVar2 = FUN_000f09e5();
      if (iVar2 == 0) {
        pcVar4 = s_BF33___user_requests_no_music_in_00170fda;
        goto LAB_000fe2af;
      }
      iVar2 = FUN_000fb598(&DAT_003df8e9);
      if (iVar2 == 0) {
        FUN_000e7714(&DAT_003df651,s_BF34___MDI_INI_driver_installati_00171005);
        bVar1 = true;
      }
      else {
        FUN_000e7714(&DAT_003df651,s_BF35___MDI_INI_driver_installati_00171032);
      }
    }
    FUN_000f9610();
    if (!bVar1) {
      FUN_000e7714(&DAT_003df651,s_BF37___all_music_driver_installa_00171083,&DAT_003e03f0);
      goto LAB_000fe2bc;
    }
  }
  else {
    FUN_000e7714(&DAT_003df651,s_BF29___Force_midi_driver_environ_00170ef8);
    FUN_000f9610();
    FUN_00113b5b(extraout_EDX,s__s__x__d__d__d_00170f25,local_20,local_38,local_36,local_34,local_32
                );
    DAT_003df8e9 = FUN_000fb5f6(local_20,local_38);
    if (DAT_003df8e9 == 0) {
      pcVar4 = s_BF30___MDMUSIC_environment_drive_00170f34;
LAB_000fe2af:
      FUN_000e7714(&DAT_003df651,pcVar4);
LAB_000fe2bc:
      FUN_000f9610();
      goto LAB_000fe2c6;
    }
    FUN_000e7714(&DAT_003df651,s_BF31___MDMUSIC_environment_drive_00170f6d);
    FUN_000f9610();
    FUN_000e7714(&DAT_003df97c,&DAT_00170fa6,local_20);
  }
  DAT_003df8ed = FUN_000fb6b8(DAT_003df8e9);
  if (DAT_003debe0 == 0) {
    iVar2 = FUN_000f09e5();
    if (iVar2 == 0) {
      puVar3 = &DAT_001710c8;
    }
    else {
      iVar2 = FUN_000f09e5();
      if (iVar2 == 0) {
        puVar3 = &DAT_001710d5;
      }
      else {
        iVar2 = FUN_000f09e5();
        if (iVar2 == 0) {
          puVar3 = &DAT_001710e0;
        }
        else {
          iVar2 = FUN_000f09e5();
          if (iVar2 == 0) {
            puVar3 = &DAT_001710ea;
          }
          else {
            iVar2 = FUN_000f09e5();
            if (iVar2 == 0) {
              puVar3 = &DAT_001710f8;
            }
            else {
              iVar2 = FUN_000f09e5();
              if (iVar2 == 0) {
                puVar3 = &DAT_00171107;
              }
              else {
                iVar2 = FUN_000f09e5();
                if (iVar2 == 0) {
                  puVar3 = &DAT_00171114;
                }
                else {
                  iVar2 = FUN_000f09e5();
                  if (iVar2 == 0) {
                    puVar3 = &DAT_00171121;
                  }
                  else {
                    iVar2 = FUN_000f09e5();
                    if (iVar2 == 0) {
                      puVar3 = &DAT_0017112c;
                    }
                    else {
                      iVar2 = FUN_000f09e5();
                      if (iVar2 == 0) {
                        FUN_000e7714(&DAT_003df8d2,&DAT_0017113a);
                        DAT_003df8d1 = 1;
                        FUN_000f143c();
                        DAT_003df8d1 = 0;
                        if (DAT_003df8f5 == '\0') {
                          FUN_000e7714(&DAT_003df8d2,&DAT_0017113c);
                          pcVar4 = s_BF38___awe32_soundfont_not_loade_0017113e;
                        }
                        else {
                          pcVar4 = s_BF38___awe32_soundfont_loaded_00171161;
                        }
                        FUN_000e7714(&DAT_003df651,pcVar4);
                        FUN_000f9610();
                        goto LAB_000fe6b2;
                      }
                      iVar2 = FUN_000f09e5();
                      if (iVar2 == 0) {
                        puVar3 = &DAT_0017118b;
                      }
                      else {
                        iVar2 = FUN_000f09e5();
                        if (iVar2 == 0) {
                          puVar3 = &DAT_0017119a;
                        }
                        else {
                          iVar2 = FUN_000f09e5();
                          if (iVar2 == 0) {
                            puVar3 = &DAT_001711a6;
                          }
                          else {
                            iVar2 = FUN_000f09e5();
                            if (iVar2 == 0) {
                              puVar3 = &DAT_001711b4;
                            }
                            else {
                              iVar2 = FUN_000fbd32(DAT_003df8e9);
                              if (iVar2 == 0) {
                                puVar3 = &DAT_001711b6;
                              }
                              else {
                                iVar2 = FUN_000fbd32(DAT_003df8e9);
                                if ((iVar2 != 1) && (iVar2 = FUN_000fbd32(DAT_003df8e9), iVar2 != 2)
                                   ) {
                                  FUN_000fb65a(DAT_003df8e9);
                                  if (DAT_00195d18 == '\0') {
                                    FUN_000f98ca();
                                  }
                                  DAT_00195d98 = 0;
                                  DAT_00195d99 = 0;
                                  FUN_000e7714(&DAT_003df651,
                                               s_BF39___music_driver_type_not_sup_001711ba);
                                  FUN_000f9610();
                                  return;
                                }
                                puVar3 = &DAT_001711b8;
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
          }
        }
      }
    }
    FUN_000e7714(&DAT_003df8d2,puVar3);
  }
LAB_000fe6b2:
  if (DAT_003df8f6 != '\0') {
    pcVar4 = s_BF40___LoadMusic_Disabled_0017129e;
LAB_000fe7ff:
    FUN_000e7714(&DAT_003df651,pcVar4);
    FUN_000f9610();
    FUN_000e7714(&DAT_003df651,s_BF41___Init_music_completed_001712b9);
    FUN_000f9610();
    DAT_003df8d1 = 1;
    FUN_000f3264();
    return;
  }
  FUN_000e7714(&DAT_003df651,s_BF40___music_s_bank_allocation_001711e2,&DAT_003df8d2);
  FUN_000f9610();
  DAT_003df8cc = FUN_000f25b4();
  if (((DAT_003debe0 == 0) && (iVar2 = FUN_000f09e5(), iVar2 == 0)) && (DAT_003df8cc == -2)) {
    FUN_000e7714(&DAT_003df651,s___not_present_in_music_dat_00171203);
    FUN_000f9610();
    FUN_000e7714(&DAT_003df8d2,&DAT_00171220);
    FUN_000e7714(&DAT_003df651,s_BF40A___music_s_bank_allocation_00171222,&DAT_003df8d2);
    FUN_000f9610();
    DAT_003df8cc = FUN_000f25b4();
  }
  if (0 < DAT_003df8cc) {
    pcVar4 = s___allocation_successful_00171284;
    goto LAB_000fe7ff;
  }
  if (DAT_003df8cc == -1) {
    pcVar4 = s___no_music_dat_00171242;
LAB_000fe7a3:
    FUN_000e7714(&DAT_003df651,pcVar4);
    FUN_000f9610();
  }
  else {
    if (DAT_003df8cc == 0) {
      pcVar4 = s___cannot_allocate_00171253;
      goto LAB_000fe7a3;
    }
    if (DAT_003df8cc == -2) {
      pcVar4 = s___not_present_in_music_dat_00171267;
      goto LAB_000fe7a3;
    }
  }
  if (DAT_003df8f5 == '\x01') {
    DAT_003df8d1 = 1;
    FUN_000f174e();
    DAT_003df8d1 = 0;
    DAT_003df8f5 = '\0';
  }
  FUN_000fb65a(DAT_003df8e9);
LAB_000fe2c6:
  if (DAT_00195d18 == '\0') {
    FUN_000f98ca();
  }
  DAT_00195d99 = 0;
  DAT_00195d98 = 0;
  return;
}

