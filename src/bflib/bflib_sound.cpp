/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: bflib/bflib_sound.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 138
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : dk_bf100_allocate_buffers_streamed_0ea94f (Ghidra: FUN_000ea94f)
 * Prototype: void dk_bf100_allocate_buffers_streamed_0ea94f(void);
 * Address  : 0xea94f (Size: 170 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF100 - Cannot allocate buffers for streamed sound'
 * Callers  : 1 -> 0xf1b38
 * Callees  : 7 -> 0xe8ca8, 0xeb1dd, 0xeb28b, 0xf43d5, 0xf95f0, 0xf9610, 0xfa655
 * Strings  :
 *   - 0x16ce4c: "BF100 - Cannot allocate buffers for streamed sound\n"
 *   - 0x16ce80: "BF100 - Cannot allocate handle for streamed sound\n"
 *   - 0x16ceb3: "BF100 - Streamed sound enabled\n"
 ******************************************************************************/
void FUN_000ea94f(void)

{
  int iVar1;
  
  if (((DAT_003df514 != '\0') && (DAT_00195d18 != '\0')) && (DAT_003db694 == '\0')) {
    FUN_000f43d5();
    FUN_000f95f0();
    iVar1 = FUN_000eb1dd();
    if (iVar1 == 0) {
      FUN_000eb28b();
    }
    else {
      DAT_003db696 = FUN_000fa655(DAT_003df526);
      if (DAT_003db696 != 0) {
        FUN_000e8ca8();
        FUN_000f9610();
        DAT_003db694 = 1;
        return;
      }
      FUN_000eb28b();
    }
    FUN_000e8ca8();
    FUN_000f9610();
    return;
  }
  return;
}

/******************************************************************************
 * Function : dk_bf100_streamed_sample_type_0eaa28 (Ghidra: FUN_000eaa28)
 * Prototype: void dk_bf100_streamed_sample_type_0eaa28(void);
 * Address  : 0xeaa28 (Size: 775 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF100 - Unknown streamed sample type %d'
 * Callers  : 1 -> 0x32738
 * Callees  : 14 -> 0xe7714, 0xe8980, 0xe8a1c, 0xe8a34, 0xeb0cc, 0xeb28b, 0xf9610, 0xfa77e, 0xfa8b3, 0xfaa37 ...
 * Strings  :
 *   - 0x16ced3: "BF100 - Unknown streamed sample type %d\n"
 *   - 0x16cefc: "BF101 - cannot open file %s\n"
 *   - 0x16cf19: "BF101 - opened streamed sample file %s\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eaa28(void)

{
  uint in_ECX;
  ushort in_DX;
  undefined4 unaff_EBX;
  bool bVar1;
  int iVar2;
  
  bVar1 = (in_ECX & 4) == 0;
  if (DAT_003df514 == '\0') {
    return;
  }
  if (DAT_00195d18 == '\0') {
    return;
  }
  if (DAT_00195564 == '\0') {
    return;
  }
  if (DAT_003db694 == '\0') {
    return;
  }
  DAT_003db7c8 = 0;
  _DAT_003db7cc = 0;
  _DAT_003db7c4 = in_ECX;
  FUN_000faa37(DAT_003db696);
  FUN_000fa77e(DAT_003db696);
  if ((in_ECX & 2) == 0) {
    if (in_DX == 0x34c) {
      return;
    }
    if (in_DX == 0x336) {
      return;
    }
    if (in_DX == 0x32b) {
      return;
    }
  }
  if (in_DX < 0x34c) {
    if (in_DX < 0x32b) {
LAB_000eabbf:
      FUN_000eb28b();
      FUN_000e7714(&DAT_003df651,s_BF100___Unknown_streamed_sample_t_0016ced3,in_DX);
      FUN_000f9610();
      goto LAB_000eabe4;
    }
    if (in_DX < 0x32c) {
      DAT_003db7a2 = 0x2b11;
    }
    else {
      if (in_DX != 0x336) goto LAB_000eabbf;
      DAT_003db7a2 = 0x5622;
    }
  }
  else {
    if (0x34c < in_DX) {
      if (in_DX < 0x656) {
        if (in_DX != 0x64b) goto LAB_000eabbf;
        DAT_003db7a2 = 0x2b11;
      }
      else if (in_DX < 0x657) {
        DAT_003db7a2 = 0x5622;
      }
      else {
        if (in_DX != 0x66c) goto LAB_000eabbf;
        DAT_003db7a2 = 0xac44;
      }
      DAT_003db79a = 1;
      if (bVar1) {
        DAT_003db79e = 1;
      }
      else {
        DAT_003db79e = 3;
      }
      goto LAB_000eabe4;
    }
    DAT_003db7a2 = 0xac44;
  }
  DAT_003db79a = 0;
  if (bVar1) {
    DAT_003db79e = 0;
  }
  else {
    DAT_003db79e = 2;
  }
LAB_000eabe4:
  FUN_000fa8b3(DAT_003db696,DAT_003db79e,DAT_003db79a);
  FUN_000faa95(DAT_003db696,DAT_003db7a2);
  iVar2 = DAT_00195560;
  if (DAT_00195d1c == '\0') {
    iVar2 = DAT_00195560 >> 1;
  }
  FUN_000faaf9(DAT_003db696,iVar2);
  FUN_000fab5d(DAT_003db696,0x40);
  if (DAT_0019555c != -1) {
    FUN_000e8a1c();
    DAT_0019555c = -1;
  }
  if (DAT_003db7b8 != 0) {
    FUN_000fdd51();
    DAT_003db7b8 = 0;
  }
  if ((in_ECX & 1) == 0) {
    DAT_0019555c = FUN_000e8980();
    if (DAT_0019555c != -1) {
      FUN_000e7714(&DAT_003df651,s_BF101___opened_streamed_sample_f_0016cf19);
      FUN_000f9610();
      FUN_000e8a34();
      if ((_DAT_003db7c4 & 2) != 0) {
        DAT_003db7e0 = 1;
      }
      DAT_003db7d8 = 0;
      DAT_003db7d4 = 0;
      DAT_003db7d0 = 0;
      DAT_003db7a4 = unaff_EBX;
      return;
    }
    FUN_000e7714(&DAT_003df651,s_BF101___cannot_open_file__s_0016cefc);
    FUN_000f9610();
    return;
  }
  FUN_000eb0cc();
  return;
}

/******************************************************************************
 * Function : dk_bf110_cd_non_audio_0ec93f (Ghidra: FUN_000ec93f)
 * Prototype: void dk_bf110_cd_non_audio_0ec93f(void);
 * Address  : 0xec93f (Size: 289 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'bf110 - no cd or non-audio cd inserted in redbook audio cd'
 * Callers  : 1 -> 0xf1b38
 * Callees  : 10 -> 0xe7714, 0xecf70, 0xecfce, 0xf9610, 0xf98ca, 0xfc8bd, 0xfc91b, 0xfca35, 0xfca93, 0xfee88
 * Strings  :
 *   - 0x16d0a3: "bf110 - no cd or non-audio cd inserted in redbook audio cd\n"
 *   - 0x16d0df: "Tracks %d \n"
 *   - 0x16d0eb: "BF110 - Could not open redbook audio device %d\n"
 ******************************************************************************/
void FUN_000ec93f(void)

{
  int iVar1;
  
  if ((DAT_003df514 == '\0') && (DAT_003df8d1 == '\0')) {
    FUN_000fee88();
  }
  DAT_003dd83c = FUN_000fc8bd(0);
  if (DAT_003dd83c == 0) {
    FUN_000e7714(&DAT_003df651,s_BF110___Could_not_open_redbook_a_0016d0eb,0);
    FUN_000f9610();
  }
  else {
    iVar1 = FUN_000fca35(DAT_003dd83c);
    if (iVar1 != 0) {
      DAT_003dd845 = FUN_000fca93(DAT_003dd83c);
      FUN_000e7714(&DAT_003df651,s_Tracks__d_0016d0df,DAT_003dd845);
      FUN_000f9610();
      DAT_003dd849 = 1;
      DAT_00195568 = FUN_000ecfce();
      if (DAT_003debd4 == 0) {
        return;
      }
      FUN_000ecf70();
      return;
    }
    FUN_000e7714(&DAT_003df651,s_bf110___no_cd_or_non_audio_cd_in_0016d0a3);
    FUN_000f9610();
    FUN_000fc91b(DAT_003dd83c);
    DAT_003dd83c = 0;
  }
  if ((DAT_003df514 == '\0') && (DAT_003df8d1 == '\0')) {
    FUN_000f98ca();
  }
  return;
}

/******************************************************************************
 * Function : dk_bf110_play_cd_non_0ecabc (Ghidra: FUN_000ecabc)
 * Prototype: void dk_bf110_play_cd_non_0ecabc(void);
 * Address  : 0xecabc (Size: 506 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'bf110 - play error - no cd or non-audio cd inserted in redbo'
 * Callers  : 4 -> 0x2fc49, 0x30ef8, 0x31854, 0xde6a8
 * Callees  : 11 -> 0xe7714, 0xf9610, 0xf9f10, 0xf9fd5, 0xfa1a4, 0xfa30a, 0xfca35, 0xfca93, 0xfcaf1, 0xfcc7b ...
 * Strings  :
 *   - 0x16d11b: "bf110 - play error - no cd or non-audio cd inserted in redbook audio\n"
 *   - 0x16d161: "Tracks %d \n"
 *   - 0x16d16d: "BF110 - CD Track %d is invalid on redbook audio CD\n"
 *   - 0x16d1a1: " Redbook Track Length %d\n"
 *   - 0x16d1bb: " Redbook countdown %d\n"
 *   - 0x16d1d2: " Redbook start %d   end %d\n"
 ******************************************************************************/
void FUN_000ecabc(void)

{
  ulonglong uVar1;
  uint in_EAX;
  int iVar2;
  int local_1c;
  int local_18;
  
  if ((((DAT_003dd840 != DAT_003debd8) || (DAT_003dd840 == 0)) && (DAT_003dd849 != 0)) &&
     (in_EAX != DAT_003dd840)) {
    if (DAT_003debd8 != 0) {
      in_EAX = DAT_003debd8;
    }
    iVar2 = FUN_000fca35(DAT_003dd83c);
    if (iVar2 == 0) {
      FUN_000e7714(&DAT_003df651,s_bf110___play_error___no_cd_or_no_0016d11b);
    }
    else {
      DAT_003dd845 = FUN_000fca93(DAT_003dd83c);
      FUN_000e7714(&DAT_003df651,s_Tracks__d_0016d161,DAT_003dd845);
      FUN_000f9610();
      if ((in_EAX <= DAT_003dd845) && (in_EAX != 0)) {
        if (DAT_003dd859 == '\x01') {
          FUN_000fa30a(DAT_003dd85a);
          DAT_003dd859 = '\0';
        }
        if (iVar2 != 3) {
          FUN_000fcce5(DAT_003dd83c);
        }
        FUN_000fcaf1(DAT_003dd83c,in_EAX,&local_1c,&local_18);
        uVar1 = (ulonglong)(uint)(local_18 - local_1c) / 1000;
        DAT_003dd851 = (undefined4)uVar1;
        DAT_003dd855 = (int)(uVar1 / 5) * 5 + 5;
        FUN_000e7714(&DAT_003df651,s_Redbook_Track_Length__d_0016d1a1,DAT_003dd851);
        FUN_000f9610();
        FUN_000e7714(&DAT_003df651,s_Redbook_countdown__d_0016d1bb,DAT_003dd855);
        FUN_000f9610();
        DAT_003dd85a = FUN_000f9f10(FUN_000ec8e4);
        FUN_000f9fd5(DAT_003dd85a,5000000);
        FUN_000fcc7b(DAT_003dd83c,local_1c,local_18);
        FUN_000e7714(&DAT_003df651,s_Redbook_start__d_end__d_0016d1d2,local_1c,local_18);
        FUN_000f9610();
        FUN_000fa1a4(DAT_003dd85a);
        DAT_003dd840 = in_EAX;
        DAT_003dd859 = 1;
        return;
      }
      FUN_000e7714(&DAT_003df651,s_BF110___CD_Track__d_is_invalid_o_0016d16d,in_EAX);
    }
    FUN_000f9610();
  }
  return;
}

/******************************************************************************
 * Function : dk_bf110_cd_non_audio_0eccb6 (Ghidra: FUN_000eccb6)
 * Prototype: void dk_bf110_cd_non_audio_0eccb6(void);
 * Address  : 0xeccb6 (Size: 96 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xe7714, 0xf9610, 0xfa257, 0xfca35, 0xfcd43
 * Strings  :
 *   - 0x16d1ee: "BF110 - No CD or non-audio CD inserted in redbook audio device\n"
 ******************************************************************************/
void FUN_000eccb6(void)

{
  int iVar1;
  
  if (DAT_003dd849 != 0) {
    iVar1 = FUN_000fca35(DAT_003dd83c);
    if (iVar1 == 0) {
      FUN_000e7714(&DAT_003df651,s_BF110___No_CD_or_non_audio_CD_in_0016d1ee);
      FUN_000f9610();
      return;
    }
    if (iVar1 == 1) {
      FUN_000fcd43(DAT_003dd83c);
      FUN_000fa257(DAT_003dd85a);
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_bf110_cd_non_audio_0ecd16 (Ghidra: FUN_000ecd16)
 * Prototype: void dk_bf110_cd_non_audio_0ecd16(void);
 * Address  : 0xecd16 (Size: 96 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xe7714, 0xf9610, 0xfa1a4, 0xfca35, 0xfcda1
 * Strings  :
 *   - 0x16d22e: "BF110 - No CD or non-audio CD inserted in redbook audio device\n"
 ******************************************************************************/
void FUN_000ecd16(void)

{
  int iVar1;
  
  if (DAT_003dd849 != 0) {
    iVar1 = FUN_000fca35(DAT_003dd83c);
    if (iVar1 == 0) {
      FUN_000e7714(&DAT_003df651,s_BF110___No_CD_or_non_audio_CD_in_0016d22e);
      FUN_000f9610();
      return;
    }
    if (iVar1 == 2) {
      FUN_000fcda1(DAT_003dd83c);
      FUN_000fa1a4(DAT_003dd85a);
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_bf110_cd_non_audio_0ecd76 (Ghidra: FUN_000ecd76)
 * Prototype: void dk_bf110_cd_non_audio_0ecd76(void);
 * Address  : 0xecd76 (Size: 138 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 4 -> 0x2e8a7, 0x31213, 0x31bd6, 0x36ff4
 * Callees  : 5 -> 0xe7714, 0xf9610, 0xfa30a, 0xfca35, 0xfcce5
 * Strings  :
 *   - 0x16d26e: "BF110 - No CD or non-audio CD inserted in redbook audio device \n"
 ******************************************************************************/
void FUN_000ecd76(void)

{
  int iVar1;
  int extraout_EDX;
  
  if (DAT_003dd849 != 0) {
    iVar1 = FUN_000fca35(DAT_003dd83c);
    if (iVar1 == 0) {
      FUN_000e7714(&DAT_003df651,s_BF110___No_CD_or_non_audio_CD_in_0016d26e);
      FUN_000f9610();
      iVar1 = extraout_EDX;
    }
    if (iVar1 != 3) {
      FUN_000fcce5(DAT_003dd83c);
    }
    if (DAT_003dd859 == '\x01') {
      FUN_000fa30a(DAT_003dd85a);
      DAT_003dd859 = '\0';
    }
    DAT_003dd840 = 0;
    DAT_003dd84d = 0;
  }
  return;
}

/******************************************************************************
 * Function : dk_bf110_cd_non_audio_0ece00 (Ghidra: FUN_000ece00)
 * Prototype: void dk_bf110_cd_non_audio_0ece00(void);
 * Address  : 0xece00 (Size: 267 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF110 - No CD or non-audio CD inserted in redbook audio devi'
 * Callers  : 0 -> 
 * Callees  : 8 -> 0xe7714, 0xf9610, 0xfa30a, 0xfca35, 0xfca93, 0xfcaf1, 0xfcc7b, 0xfcce5
 * Strings  :
 *   - 0x16d2af: "BF110 - No CD or non-audio CD inserted in redbook audio device\n"
 *   - 0x16d2ef: "BF110 - CD Track %d is invalid on redbook device\n"
 ******************************************************************************/
void FUN_000ece00(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  
  if ((DAT_003dd849 == 0) || (in_EAX == DAT_003dd84d)) {
    return;
  }
  iVar1 = FUN_000fca35(DAT_003dd83c);
  if (iVar1 == 0) {
    FUN_000e7714(&DAT_003df651,s_BF110___No_CD_or_non_audio_CD_in_0016d2af);
  }
  else {
    if (iVar1 != 3) {
      FUN_000fcce5(DAT_003dd83c);
    }
    if (DAT_003dd859 == '\x01') {
      FUN_000fa30a(DAT_003dd85a);
      DAT_003dd859 = '\0';
    }
    DAT_003dd845 = FUN_000fca93(DAT_003dd83c);
    if ((in_EAX <= DAT_003dd845) && (in_EAX != 0)) {
      FUN_000fcaf1(DAT_003dd83c);
      FUN_000fcaf1(DAT_003dd83c,DAT_003dd845,local_14,&local_18);
      FUN_000fcc7b(DAT_003dd83c,local_1c,local_18);
      DAT_003dd84d = in_EAX;
      return;
    }
    FUN_000e7714(&DAT_003df651,s_BF110___CD_Track__d_is_invalid_o_0016d2ef);
  }
  FUN_000f9610();
  return;
}

/******************************************************************************
 * Function : dk_sbawe32_mdi_0f174e (Ghidra: FUN_000f174e)
 * Prototype: void dk_sbawe32_mdi_0f174e(void);
 * Address  : 0xf174e (Size: 128 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'SBAWE32.MDI'
 * Callers  : 3 -> 0xf143c, 0xfe128, 0x10f620
 * Callees  : 3 -> 0xf09e5, 0xf1052, 0xf13e7
 * Strings  :
 *   - 0x16e9b6: "SBAWE32.MDI"
 ******************************************************************************/
void FUN_000f174e(void)

{
  int iVar1;
  
  if (((DAT_003df8d0 == '\0') && (DAT_003df8d1 != '\0')) && (DAT_00195d98 != '\0')) {
    iVar1 = FUN_000f09e5();
    if (iVar1 == 0) {
      iVar1 = FUN_000f09e5();
      if (iVar1 == 0) {
        FUN_000f13e7();
        FUN_000f1052();
        FUN_000f1052();
        DAT_003df8f5 = 0;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0f1aec (Ghidra: FUN_000f1aec)
 * Prototype: void sub_0f1aec(void);
 * Address  : 0xf1aec (Size: 73 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x45bb8
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x16e9c4: "Sound"
 *   - 0x16e9ca: "Sound"
 *   - 0x16e9d0: "Sound"
 ******************************************************************************/
void FUN_000f1aec(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = s_Sound_0016e9c4;
  in_EAX[1] = s_Sound_0016e9ca;
  in_EAX[2] = s_Sound_0016e9d0;
  *(undefined2 *)((int)in_EAX + 0xe) = 3;
  *(undefined1 *)((int)in_EAX + 0x12) = 1;
  *(undefined1 *)((int)in_EAX + 0x11) = 1;
  *(undefined2 *)(in_EAX + 3) = 0x656;
  *(undefined1 *)(in_EAX + 4) = 10;
  *(undefined1 *)((int)in_EAX + 0x13) = 0;
  *(undefined1 *)((int)in_EAX + 0x15) = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  *(undefined1 *)((int)in_EAX + 0x16) = 0;
  *(undefined1 *)((int)in_EAX + 0x17) = 0;
  *(undefined1 *)(in_EAX + 6) = 0;
  *(undefined1 *)((int)in_EAX + 0x19) = 0;
  return;
}

/******************************************************************************
 * Function : dk_bf48_load_music_bank_0f2188 (Ghidra: FUN_000f2188)
 * Prototype: undefined8 dk_bf48_load_music_bank_0f2188(void);
 * Address  : 0xf2188 (Size: 531 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF48 - load music bank %d'
 * Callers  : 1 -> 0x45bb8
 * Callees  : 9 -> 0xe7714, 0xe8974, 0xe8980, 0xe8a1c, 0xe8a34, 0xe8a80, 0xf0ab8, 0xf23de, 0xf9610
 * Strings  :
 *   - 0x16efac: "BF48 - load music bank %d\n"
 *   - 0x16efc7: "BF49 - load music bank - failed - bank not found\n"
 *   - 0x16eff9: "BF50 - load music bank - failed - cannot allocate\n"
 *   - 0x16f02c: "BF51 - load music bank - passed\n"
 *   - 0x16f04d: "BF52 - load music bank - failed - no music.dat\n"
 *   - 0x16f07d: "BF53 - load music bank - failed - music not installed\n"
 *   - 0x16f0b4: "BF53 - load music bank - failed - MusicAble = 0\n"
 *   - 0x16f0e5: "BF53 - load music bank - failed - LoadMusic Disabled = 0\n"
 ******************************************************************************/
undefined8 FUN_000f2188(void)

{
  char cVar1;
  short in_AX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  bool bVar4;
  char *pcVar5;
  ushort local_28 [6];
  int local_1c;
  
  FUN_000e7714(&DAT_003df651,s_BF48___load_music_bank__d_0016efac,in_AX);
  FUN_000f9610();
  if (((DAT_003df8d1 == '\0') || (DAT_00195d98 == '\0')) || (DAT_003df8f6 != '\0')) {
    if (DAT_003df8d1 == '\0') {
      pcVar5 = s_BF53___load_music_bank___failed___0016f07d;
      goto LAB_000f22dc;
    }
    if (DAT_00195d98 == '\0') {
      pcVar5 = s_BF53___load_music_bank___failed___0016f0b4;
      goto LAB_000f22dc;
    }
    if (DAT_003df8f6 != '\0') {
      pcVar5 = s_BF53___load_music_bank___failed___0016f0e5;
      goto LAB_000f22dc;
    }
  }
  else {
    FUN_000f0ab8();
    iVar2 = FUN_000e8980();
    if (iVar2 == -1) {
      pcVar5 = s_BF52___load_music_bank___failed___0016f04d;
    }
    else {
      FUN_000e8a34();
      FUN_000e8974();
      FUN_000e8a34();
      FUN_000e8a80();
      FUN_000e8a34();
      FUN_000e8a80();
      if (DAT_003df8d2 < 0x57) {
        if (DAT_003df8d2 < 0x47) {
          bVar4 = DAT_003df8d2 == 0x46;
LAB_000f22c0:
          if (bVar4) {
            local_1c = 2;
          }
        }
        else {
          if (0x47 < DAT_003df8d2) {
            if (DAT_003df8d2 == 0x52) {
LAB_000f220a:
              local_1c = 1;
            }
            goto LAB_000f22c6;
          }
LAB_000f21fe:
          local_1c = 0;
        }
      }
      else if (DAT_003df8d2 < 0x58) {
LAB_000f2222:
        local_1c = 3;
      }
      else {
        if (DAT_003df8d2 < 0x67) {
          bVar4 = DAT_003df8d2 == 0x66;
          goto LAB_000f22c0;
        }
        if (DAT_003df8d2 < 0x68) goto LAB_000f21fe;
        if (0x71 < DAT_003df8d2) {
          if (DAT_003df8d2 < 0x73) goto LAB_000f220a;
          if (DAT_003df8d2 == 0x77) goto LAB_000f2222;
        }
      }
LAB_000f22c6:
      if (local_28[local_1c] < (ushort)(in_AX + 1U)) {
        FUN_000e8a1c();
        pcVar5 = s_BF49___load_music_bank___failed___0016efc7;
      }
      else {
        FUN_000e8a34();
        cVar1 = FUN_000f23de();
        if (cVar1 != '\0') {
          FUN_000e8a1c();
          FUN_000e7714(&DAT_003df651,s_BF51___load_music_bank___passed_0016f02c);
          FUN_000f9610();
          uVar3 = 0;
          goto LAB_000f2394;
        }
        FUN_000e8a1c();
        pcVar5 = s_BF50___load_music_bank___failed___0016eff9;
      }
    }
LAB_000f22dc:
    FUN_000e7714(&DAT_003df651,pcVar5);
    FUN_000f9610();
  }
  uVar3 = 1;
LAB_000f2394:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : dk_bf3_init_sound_0f8eec (Ghidra: FUN_000f8eec)
 * Prototype: void dk_bf3_init_sound_0f8eec(void);
 * Address  : 0xf8eec (Size: 1186 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF3  - Init sound'
 * Callers  : 1 -> 0xf1b38
 * Callees  : 15 -> 0xe7714, 0xf09e5, 0xf949a, 0xf9610, 0xf98ca, 0xf99cc, 0xf9d16, 0xfa535, 0xfa593, 0xfa5f7 ...
 * Strings  :
 *   - 0x16f60c: "BF3  - Init sound\n"
 *   - 0x16f61f: "BF4  - Default sound type -  %d\n"
 *   - 0x16f640: "BF5  - No samples requested - AIL shutdown\n"
 *   - 0x16f66c: "BF6  - No samples requested  \n"
 *   - 0x16f68b: "BF_FORCE_SOUND_DRIVER"
 *   - 0x16f6a1: "BF8  - Force sound driver environment active\n"
 *   - 0x16f6cf: "%s %x %d %d %d"
 *   - 0x16f6de: "BF9  - MDSOUND environment driver installation - failed\n"
 *   - 0x16f717: "none"
 *   - 0x16f71f: "BF10 - MDSOUND environment driver installation - passed\n"
 *   - 0x16f87e: "BF18 - determine sound type to be loaded\n"
 *   - 0x16f758: "DIG.INI"
 *   - 0x16f760: "BF11 - Search for DIG.INI - passed   \n"
 *   - 0x16f787: "None"
 *   - 0x16f78c: "BF12 - user requests no sound in SETSOUND   \n"
 *   - 0x16f7ba: "BF13 - DIG.INI driver installation - passed\n"
 *   - 0x16f7e7: "none"
 *   - 0x16f7ec: "BF14 - DIG.INI driver installation - failed %d\n"
 *   - 0x16f81c: "none"
 *   - 0x16f821: "BF15 - Search for DIG.INI - failed\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f8eec(void)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 extraout_EDX;
  code *pcVar4;
  byte bVar5;
  undefined2 local_3c;
  undefined1 auStack_3a [2];
  undefined1 local_38 [2];
  undefined1 local_36 [18];
  undefined1 local_24 [16];
  
  bVar5 = 0;
  bVar2 = false;
  if (DAT_00195d18 == '\0') {
    return;
  }
  FUN_000e7714(&DAT_003df651,s_BF3___Init_sound_0016f60c);
  FUN_000f9610();
  FUN_000e7714(&DAT_003df651,s_BF4___Default_sound_type____d_0016f61f,DAT_003df524);
  FUN_000f9610();
  if (DAT_003df524 == 0) {
    if ((DAT_00195d98 == '\0') && (DAT_003df52a != '\0')) {
      FUN_000f98ca();
      FUN_000e7714(&DAT_003df651,s_BF5___No_samples_requested___AIL_0016f640);
      FUN_000f9610();
    }
    DAT_00195d18 = 0;
    DAT_00195d1a = 0;
    FUN_000e7714(&DAT_003df651,s_BF6___No_samples_requested_0016f66c);
    FUN_000f9610();
    return;
  }
  if (DAT_003df52a == '\0') {
    FUN_000fe870(FUN_000e9484);
    FUN_000fe883(FUN_000e94b0);
    FUN_000fee88();
    DAT_003df52a = '\x01';
  }
  FUN_000f99cc(9,0);
  FUN_000f99cc(0,200);
  FUN_000f99cc(8,1);
  FUN_000f99cc(1,DAT_00195d22);
  FUN_000f99cc(3,100);
  FUN_000f99cc(4,DAT_00195d14 + 5);
  FUN_000f99cc(5,0x7f);
  FUN_000f99cc(6,0x28f);
  FUN_000f99cc(7,DAT_00195d1c != '\0');
  if (DAT_00195d1b == '\0') {
    FUN_000f99cc(0x11,0);
  }
  iVar3 = FUN_0010ed88();
  if (iVar3 == 0) {
    iVar3 = FUN_000f9d16(&DAT_003df538,s_DIG_INI_0016f758);
    if (iVar3 == 0) {
      FUN_000e7714(&DAT_003df5b8,&DAT_0016f81c); /* 0x16f81c="none" */
      FUN_000e7714(&DAT_003df651,s_BF15___Search_for_DIG_INI___fail_0016f821);
LAB_000f92bc:
      FUN_000f9610();
      if (bVar2) goto LAB_000f9176;
      FUN_000e7714(&DAT_003df651,s_BF16___all_dig_driver_installati_0016f845,&DAT_003e03f0);
    }
    else {
      FUN_000e7714(&DAT_003df651,s_BF11___Search_for_DIG_INI___pass_0016f760);
      FUN_000f9610();
      iVar3 = FUN_000f09e5();
      if (iVar3 != 0) {
        DAT_003df530 = FUN_000fa535(&DAT_003df526);
        if (DAT_003df530 == 0) {
          FUN_000e7714(&DAT_003df651,s_BF13___DIG_INI_driver_installati_0016f7ba);
          bVar2 = true;
        }
        else {
          FUN_000e7714(&DAT_003df5b8,&DAT_0016f7e7); /* 0x16f7e7="none" */
          FUN_000e7714(&DAT_003df651,s_BF14___DIG_INI_driver_installati_0016f7ec,DAT_003df530);
        }
        goto LAB_000f92bc;
      }
      FUN_000e7714(&DAT_003df651,s_BF12___user_requests_no_sound_in_0016f78c);
    }
    FUN_000f9610();
    if (DAT_00195d98 == '\0') {
      FUN_000f98ca();
    }
    DAT_00195d18 = 0;
    DAT_00195d1a = 0;
  }
  else {
    FUN_000e7714(&DAT_003df651,s_BF8___Force_sound_driver_environ_0016f6a1);
    FUN_000f9610();
    FUN_00113b5b(extraout_EDX,s__s__x__d__d__d_0016f6cf,local_24,&local_3c,auStack_3a,local_38,
                 local_36);
    DAT_003df526 = FUN_000fa593(local_24,&local_3c);
    if (DAT_003df526 == 0) {
      FUN_000e7714(&DAT_003df651,s_BF9___MDSOUND_environment_driver_0016f6de);
      FUN_000f9610();
      if (DAT_00195d98 == '\0') {
        FUN_000f98ca();
      }
      FUN_000e7714(&DAT_003df5b8,&DAT_0016f717); /* 0x16f717="none" */
      DAT_00195d18 = 0;
      DAT_00195d1a = 0;
      return;
    }
    FUN_000e7714(&DAT_003df5b8,&DAT_0016f71c,local_24);
    FUN_000e7714(&DAT_003df651,s_BF10___MDSOUND_environment_drive_0016f71f);
    FUN_000f9610();
    _DAT_003df638 = local_3c;
LAB_000f9176:
    FUN_000e7714(&DAT_003df651,s_BF18___determine_sound_type_to_b_0016f87e);
    FUN_000f9610();
    if (DAT_003df515 == '\0') {
      FUN_000f949a();
    }
    else {
      FUN_000e7714(&DAT_003df651,s_BF19___LoadSounds_disabled_0016f8a8);
      FUN_000f9610();
    }
    if (DAT_003df524 != 0) {
      iVar3 = 0xb;
      pcVar4 = FUN_000f8eac;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        sVar1 = *(short *)pcVar4;
        pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 2;
      } while (DAT_003df524 != sVar1);
                    /* WARNING: Could not recover jumptable at 0x000f93f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 * 4 + 0xf8ec0))();
      return;
    }
    FUN_000e7714(&DAT_003df651,s_BF20___cannot_allocate_for_digit_0016f8c4);
    FUN_000f9610();
    FUN_000e7714(&DAT_003df5b8,&DAT_0016f8f0); /* 0x16f8f0="none" */
    if (DAT_00195d98 == '\0') {
      FUN_000f98ca();
    }
    DAT_00195d18 = 0;
    DAT_00195d1a = 0;
    FUN_000fa5f7(DAT_003df526);
  }
  return;
}

/******************************************************************************
 * Function : dk_sound_dat_0f949a (Ghidra: FUN_000f949a)
 * Prototype: void dk_sound_dat_0f949a(void);
 * Address  : 0xf949a (Size: 230 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String '- no sound.dat'
 * Callers  : 1 -> 0xf8eec
 * Callees  : 3 -> 0xe7714, 0xf9610, 0x114cf2
 * Strings  :
 *   - 0x16f912: "BF19 - %d"
 *   - 0x16f91c: " - no sound.dat\n"
 *   - 0x16f92d: " - cannot allocate\n"
 *   - 0x16f941: " - not present in sound.dat\n"
 *   - 0x16f95e: " - allocation successful\n"
 ******************************************************************************/
void FUN_000f949a(void)

{
  short sVar1;
  int iVar2;
  int extraout_EDX;
  code *pcVar3;
  byte bVar4;
  char *pcVar5;
  
  bVar4 = 0;
  iVar2 = 0;
  while( true ) {
    if (0 < iVar2) {
      return;
    }
    FUN_000e7714(&DAT_003df651,s_BF19____d_0016f912,DAT_003df524);
    FUN_000f9610();
    iVar2 = FUN_00114cf2();
    if (iVar2 < 1) break;
    FUN_000e7714(&DAT_003df651,s___allocation_successful_0016f95e);
    FUN_000f9610();
    iVar2 = extraout_EDX;
  }
  if (iVar2 == -1) {
    FUN_000e7714(&DAT_003df651,s___no_sound_dat_0016f91c);
    FUN_000f9610();
    DAT_003df524 = 0;
    return;
  }
  if (iVar2 == 0) {
    pcVar5 = s___cannot_allocate_0016f92d;
  }
  else {
    if (iVar2 != -2) goto LAB_000f95b0;
    pcVar5 = s___not_present_in_sound_dat_0016f941;
  }
  FUN_000e7714(&DAT_003df651,pcVar5);
  FUN_000f9610();
LAB_000f95b0:
  iVar2 = 10;
  pcVar3 = FUN_000f9460;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    sVar1 = *(short *)pcVar3;
    pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 2;
  } while (DAT_003df524 != sVar1);
                    /* WARNING: Could not recover jumptable at 0x000f95c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0xf9472))();
  return;
}

/******************************************************************************
 * Function : dk_AIL_shutdown_0f98ca (Ghidra: FUN_000f98ca)
 * Prototype: void dk_AIL_shutdown_0f98ca(void);
 * Address  : 0xf98ca (Size: 161 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_shutdown()'
 * Callers  : 8 -> 0xec93f, 0xeca60, 0xf8eec, 0xfe128, 0x10f620, 0x10f6c8, 0x11c383, 0x11c45f
 * Callees  : 5 -> 0xf96a3, 0xf9819, 0x1146dd, 0x115839, 0x115b3d
 * Strings  :
 *   - 0x16f9d2: "AIL_shutdown()\r\n"
 ******************************************************************************/
void FUN_000f98ca(void)

{
  bool bVar1;
  int iVar2;
  char **ppcVar3;
  char *pcStack_8;
  
  ppcVar3 = (char **)&stack0xfffffffc;
  if (DAT_00195d28 == 0) {
    return;
  }
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    pcStack_8 = (char *)0xf98fe;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      pcStack_8 = (char *)0xf9907;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9914;
      }
    }
  }
  bVar1 = false;
LAB_000f9914:
  if (bVar1) {
    ppcVar3 = &pcStack_8;
    pcStack_8 = s_AIL_shutdown___0016f9d2;
    FUN_000f96a3();
  }
  *(undefined4 *)((int)ppcVar3 + -4) = 0xf9927;
  FUN_001146dd();
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    *(undefined4 *)((int)ppcVar3 + -4) = 0xf9947;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      *(undefined4 *)((int)ppcVar3 + -4) = DAT_003df824;
      *(undefined4 *)((int)ppcVar3 + -8) = 0xf9956;
      FUN_00115b3d();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  DAT_00195d28 = 0;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_driver_directory_0f996b (Ghidra: FUN_000f996b)
 * Prototype: undefined4 dk_AIL_set_driver_directory_0f996b(undefined4 param_1);
 * Address  : 0xf996b (Size: 97 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_driver_directory(%s)'
 * Callers  : 1 -> 0xf1b38
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x11470a, 0x115839
 * Strings  :
 *   - 0x16f9e3: "AIL_set_driver_directory(%s)\r\n"
 ******************************************************************************/
undefined4 FUN_000f996b(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f99ab;
      }
    }
  }
  bVar1 = false;
LAB_000f99ab:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011470a(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_preference_0f99cc (Ghidra: FUN_000f99cc)
 * Prototype: undefined4 dk_AIL_set_preference_0f99cc(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf99cc (Size: 182 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_preference(%d,%d)'
 * Callers  : 5 -> 0xf8eec, 0xfe128, 0x10a990, 0x1145bf, 0x11c383
 * Callees  : 6 -> 0xf96cd, 0xf9733, 0xf9819, 0x114178, 0x115839, 0x115acb
 * Strings  :
 *   - 0x16fa02: "AIL_set_preference(%d,%d)\r\n"
 ******************************************************************************/
undefined4 FUN_000f99cc(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9a0c;
      }
    }
  }
  bVar1 = false;
LAB_000f9a0c:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_00114178(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_get_real_vect_0f9a8c (Ghidra: FUN_000f9a8c)
 * Prototype: undefined4 dk_AIL_get_real_vect_0f9a8c(undefined4 param_1);
 * Address  : 0xf9a8c (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_get_real_vect(0x%X)'
 * Callers  : 1 -> 0x11419b
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x1153f9, 0x115839
 * Strings  :
 *   - 0x16fa1e: "AIL_get_real_vect(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000f9a8c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9acc;
      }
    }
  }
  bVar1 = false;
LAB_000f9acc:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_001153f9(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_real_vect_0f9aea (Ghidra: FUN_000f9aea)
 * Prototype: void dk_AIL_set_real_vect_0f9aea(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9aea (Size: 107 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_real_vect(0x%X,0x%X)'
 * Callers  : 2 -> 0x11419b, 0x114475
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115421, 0x115839
 * Strings  :
 *   - 0x16fa38: "AIL_set_real_vect(0x%X,0x%X)\r\n"
 ******************************************************************************/
void FUN_000f9aea(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9b2a;
      }
    }
  }
  bVar1 = false;
LAB_000f9b2a:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_00115421(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_USE16_ISR_0f9b55 (Ghidra: FUN_000f9b55)
 * Prototype: void dk_AIL_set_USE16_ISR_0f9b55(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xf9b55 (Size: 113 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_USE16_ISR(%d,0x%X,%u)'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115499, 0x115839
 * Strings  :
 *   - 0x16fa57: "AIL_set_USE16_ISR(%d,0x%X,%u)\r\n"
 ******************************************************************************/
void FUN_000f9b55(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9b95;
      }
    }
  }
  bVar1 = false;
LAB_000f9b95:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_00115499(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_restore_USE16_ISR_0f9bc6 (Ghidra: FUN_000f9bc6)
 * Prototype: void dk_AIL_restore_USE16_ISR_0f9bc6(undefined4 param_1);
 * Address  : 0xf9bc6 (Size: 101 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_restore_USE16_ISR(%d)'
 * Callers  : 2 -> 0x114475, 0x116704
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x1156af, 0x115839
 * Strings  :
 *   - 0x16fa77: "AIL_restore_USE16_ISR(%d)\r\n"
 ******************************************************************************/
void FUN_000f9bc6(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9c06;
      }
    }
  }
  bVar1 = false;
LAB_000f9c06:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_001156af(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_call_driver_0f9c40 (Ghidra: FUN_000f9c40)
 * Prototype: undefined4 dk_AIL_call_driver_0f9c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xf9c40 (Size: 115 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_call_driver(0x%X,0x%X,0x%X,0x%X)'
 * Callers  : 21 -> 0xf10fc, 0xf113f, 0xf11e4, 0xf129d, 0xf1342, 0xf13e7, 0x113c03, 0x11419b, 0x114475, 0x11450d ...
 * Callees  : 4 -> 0xf979c, 0xf9819, 0x11575f, 0x115839
 * Strings  :
 *   - 0x16fa93: "AIL_call_driver(0x%X,0x%X,0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000f9c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_c;
  
  puVar4 = (undefined4 *)&stack0xfffffff8;
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    uStack_c = 0xf9c6a;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      uStack_c = 0xf9c73;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9c80;
      }
    }
  }
  bVar1 = false;
LAB_000f9c80:
  if (bVar1) {
    puVar4 = &uStack_c;
    uStack_c = param_4;
    FUN_000f979c();
  }
  *(undefined4 *)((int)puVar4 + -4) = param_4;
  *(undefined4 *)((int)puVar4 + -8) = param_3;
  *(undefined4 *)((int)puVar4 + -0xc) = param_2;
  *(undefined4 *)((int)puVar4 + -0x10) = param_1;
  *(undefined4 *)((int)puVar4 + -0x14) = 0xf9cab;
  uVar3 = FUN_0011575f();
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    *(undefined4 *)((int)puVar4 + -4) = 0xf9a50;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      *(int *)((int)puVar4 + -4) = DAT_003df814 + 0xe;
      *(undefined **)((int)puVar4 + -8) = &DAT_00195d30;
      *(undefined4 *)((int)puVar4 + -0xc) = DAT_003df824;
      *(undefined4 *)((int)puVar4 + -0x10) = 0xf9a6d;
      FUN_00115acb();
      *(undefined4 *)((int)puVar4 + -4) = 0xf9a77;
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_delay_0f9cb3 (Ghidra: FUN_000f9cb3)
 * Prototype: void dk_AIL_delay_0f9cb3(undefined4 param_1);
 * Address  : 0xf9cb3 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_delay(%d)'
 * Callers  : 3 -> 0x116687, 0x1188ac, 0x1193e6
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x114770, 0x115839
 * Strings  :
 *   - 0x16faba: "AIL_delay(%d)\r\n"
 ******************************************************************************/
void FUN_000f9cb3(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9cf3;
      }
    }
  }
  bVar1 = false;
LAB_000f9cf3:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00114770(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_API_read_INI_0f9d16 (Ghidra: FUN_000f9d16)
 * Prototype: int dk_AIL_API_read_INI_0f9d16(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9d16 (Size: 506 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_API_read_INI(0x%X,%s)'
 * Callers  : 4 -> 0xf8eec, 0xfe128, 0x116db9, 0x119bef
 * Callees  : 7 -> 0xf96cd, 0xf970b, 0xf9733, 0xf9819, 0x113d48, 0x115839, 0x115acb
 * Strings  :
 *   - 0x16faca: "AIL_API_read_INI(0x%X,%s)\r\n"
 *   - 0x16fae6: "Driver = %s\r\n"
 *   - 0x16faf4: "Device = %s\r\n"
 *   - 0x16fb02: "IO     = %X\r\n"
 *   - 0x16fb10: "IRQ    = %d\r\n"
 *   - 0x16fb1e: "DMA_8  = %d\r\n"
 *   - 0x16fb2c: "DMA_16 = %d\r\n"
 ******************************************************************************/
int FUN_000f9d16(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9d5a;
      }
    }
  }
  bVar1 = false;
LAB_000f9d5a:
  if (bVar1) {
    FUN_000f9733();
  }
  iVar2 = FUN_00113d48(param_1,param_2);
  if (iVar2 == 0) {
    if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
      iVar3 = FUN_00115839();
      if (iVar3 == 0) {
        FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
        FUN_000f96cd();
      }
    }
  }
  else if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar3 = FUN_00115839();
    if (iVar3 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f970b();
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f970b();
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f970b();
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f970b();
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f970b();
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f970b();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return iVar2;
}

/******************************************************************************
 * Function : dk_AIL_register_timer_0f9f10 (Ghidra: FUN_000f9f10)
 * Prototype: undefined4 dk_AIL_register_timer_0f9f10(undefined4 param_1);
 * Address  : 0xf9f10 (Size: 97 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_register_timer(0x%X)'
 * Callers  : 7 -> 0xecabc, 0x10e2ce, 0x10ee14, 0x11419b, 0x116704, 0x1193e6, 0x11cfae
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11583f
 * Strings  :
 *   - 0x16fb3a: "AIL_register_timer(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000f9f10(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9f50;
      }
    }
  }
  bVar1 = false;
LAB_000f9f50:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011583f(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_timer_user_0f9f71 (Ghidra: FUN_000f9f71)
 * Prototype: undefined4 dk_AIL_set_timer_user_0f9f71(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9f71 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_timer_user(%u,%u)'
 * Callers  : 3 -> 0x11419b, 0x116704, 0x1193e6
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x115880
 * Strings  :
 *   - 0x16fb55: "AIL_set_timer_user(%u,%u)\r\n"
 ******************************************************************************/
undefined4 FUN_000f9f71(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000f9fb1;
      }
    }
  }
  bVar1 = false;
LAB_000f9fb1:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_00115880(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_timer_period_0f9fd5 (Ghidra: FUN_000f9fd5)
 * Prototype: void dk_AIL_set_timer_period_0f9fd5(undefined4 param_1,undefined4 param_2);
 * Address  : 0xf9fd5 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_timer_period(%u,%u)'
 * Callers  : 4 -> 0xecabc, 0x1152ac, 0x1159a7, 0x1159d1
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x115977
 * Strings  :
 *   - 0x16fb71: "AIL_set_timer_period(%u,%u)\r\n"
 ******************************************************************************/
void FUN_000f9fd5(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa015;
      }
    }
  }
  bVar1 = false;
LAB_000fa015:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_00115977(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_timer_frequency_0fa039 (Ghidra: FUN_000fa039)
 * Prototype: void dk_AIL_set_timer_frequency_0fa039(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfa039 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_timer_frequency(%u,%u)'
 * Callers  : 6 -> 0x10e2ce, 0x10ee14, 0x11419b, 0x116704, 0x1193e6, 0x11cfae
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x1159a7
 * Strings  :
 *   - 0x16fb8f: "AIL_set_timer_frequency(%u,%u)\r\n"
 ******************************************************************************/
void FUN_000fa039(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa079;
      }
    }
  }
  bVar1 = false;
LAB_000fa079:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_001159a7(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_start_timer_0fa1a4 (Ghidra: FUN_000fa1a4)
 * Prototype: void dk_AIL_start_timer_0fa1a4(undefined4 param_1);
 * Address  : 0xfa1a4 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_start_timer(%u)'
 * Callers  : 9 -> 0xecabc, 0xecd16, 0x10e2ce, 0x10ee14, 0x11419b, 0x11590d, 0x116704, 0x1193e6, 0x11cfae
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x1158e3
 * Strings  :
 *   - 0x16fbe9: "AIL_start_timer(%u)\r\n"
 ******************************************************************************/
void FUN_000fa1a4(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa1e4;
      }
    }
  }
  bVar1 = false;
LAB_000fa1e4:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_001158e3(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_stop_timer_0fa257 (Ghidra: FUN_000fa257)
 * Prototype: void dk_AIL_stop_timer_0fa257(undefined4 param_1);
 * Address  : 0xfa257 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_stop_timer(%u)'
 * Callers  : 2 -> 0xeccb6, 0x115957
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11592d
 * Strings  :
 *   - 0x16fc18: "AIL_stop_timer(%u)\r\n"
 ******************************************************************************/
void FUN_000fa257(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa297;
      }
    }
  }
  bVar1 = false;
LAB_000fa297:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011592d(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_release_timer_handle_0fa30a (Ghidra: FUN_000fa30a)
 * Prototype: void dk_AIL_release_timer_handle_0fa30a(undefined4 param_1);
 * Address  : 0xfa30a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_release_timer_handle(%u)'
 * Callers  : 14 -> 0xec8e4, 0xecabc, 0xecd76, 0xece00, 0xf0ab8, 0xf1874, 0x10e0cc, 0x10e3f4, 0x10ee7e, 0x114475 ...
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x1158a2
 * Strings  :
 *   - 0x16fc45: "AIL_release_timer_handle(%u)\r\n"
 ******************************************************************************/
void FUN_000fa30a(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa34a;
      }
    }
  }
  bVar1 = false;
LAB_000fa34a:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_001158a2(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_release_all_timers_0fa368 (Ghidra: FUN_000fa368)
 * Prototype: void dk_AIL_release_all_timers_0fa368(void);
 * Address  : 0xfa368 (Size: 85 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_release_all_timers()'
 * Callers  : 1 -> 0x1146dd
 * Callees  : 4 -> 0xf96a3, 0xf9819, 0x115839, 0x1158c3
 * Strings  :
 *   - 0x16fc64: "AIL_release_all_timers()\r\n"
 ******************************************************************************/
void FUN_000fa368(void)

{
  bool bVar1;
  int iVar2;
  char **ppcVar3;
  char *pcStack_8;
  
  ppcVar3 = (char **)&stack0xfffffffc;
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    pcStack_8 = (char *)0xfa38f;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      pcStack_8 = (char *)0xfa398;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa3a5;
      }
    }
  }
  bVar1 = false;
LAB_000fa3a5:
  if (bVar1) {
    ppcVar3 = &pcStack_8;
    pcStack_8 = s_AIL_release_all_timers___0016fc64;
    FUN_000f96a3();
  }
  *(undefined4 *)((int)ppcVar3 + -4) = 0xfa3b8;
  FUN_001158c3();
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_get_IO_environment_0fa3bd (Ghidra: FUN_000fa3bd)
 * Prototype: undefined4 dk_AIL_get_IO_environment_0fa3bd(undefined4 param_1);
 * Address  : 0xfa3bd (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_get_IO_environment(0x%X)'
 * Callers  : 2 -> 0x116704, 0x1193e6
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x11450d, 0x115839
 * Strings  :
 *   - 0x16fc7f: "AIL_get_IO_environment(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fa3bd(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa3fd;
      }
    }
  }
  bVar1 = false;
LAB_000fa3fd:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011450d(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_install_driver_0fa41b (Ghidra: FUN_000fa41b)
 * Prototype: undefined4 dk_AIL_install_driver_0fa41b(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfa41b (Size: 188 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_install_driver(0x%X,%u)'
 * Callers  : 4 -> 0x116cb6, 0x116d7f, 0x119a6e, 0x119bb5
 * Callees  : 6 -> 0xf96f8, 0xf9733, 0xf9819, 0x11419b, 0x115839, 0x115acb
 * Strings  :
 *   - 0x16fc9e: "AIL_install_driver(0x%X,%u)\r\n"
 ******************************************************************************/
undefined4 FUN_000fa41b(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa45b;
      }
    }
  }
  bVar1 = false;
LAB_000fa45b:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011419b(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_uninstall_driver_0fa4d7 (Ghidra: FUN_000fa4d7)
 * Prototype: void dk_AIL_uninstall_driver_0fa4d7(undefined4 param_1);
 * Address  : 0xfa4d7 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_uninstall_driver(0x%X)'
 * Callers  : 7 -> 0x1146dd, 0x116cb6, 0x116d7f, 0x116e25, 0x119a6e, 0x119bb5, 0x119c5b
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x114475, 0x115839
 * Strings  :
 *   - 0x16fcbc: "AIL_uninstall_driver(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fa4d7(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa517;
      }
    }
  }
  bVar1 = false;
LAB_000fa517:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00114475(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_install_DIG_INI_0fa535 (Ghidra: FUN_000fa535)
 * Prototype: undefined4 dk_AIL_install_DIG_INI_0fa535(undefined4 param_1);
 * Address  : 0xfa535 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_install_DIG_INI(0x%X)'
 * Callers  : 2 -> 0xf8eec, 0x11c383
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x116db9
 * Strings  :
 *   - 0x16fcd9: "AIL_install_DIG_INI(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fa535(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa575;
      }
    }
  }
  bVar1 = false;
LAB_000fa575:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00116db9(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_install_DIG_driver_file_0fa593 (Ghidra: FUN_000fa593)
 * Prototype: undefined4 dk_AIL_install_DIG_driver_file_0fa593(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfa593 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_install_DIG_driver_file(%s,0x%X)'
 * Callers  : 2 -> 0xf8eec, 0x116db9
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x116cb6
 * Strings  :
 *   - 0x16fcf5: "AIL_install_DIG_driver_file(%s,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fa593(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa5d3;
      }
    }
  }
  bVar1 = false;
LAB_000fa5d3:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_00116cb6(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_uninstall_DIG_driver_0fa5f7 (Ghidra: FUN_000fa5f7)
 * Prototype: void dk_AIL_uninstall_DIG_driver_0fa5f7(undefined4 param_1);
 * Address  : 0xfa5f7 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_uninstall_DIG_driver(0x%X)'
 * Callers  : 1 -> 0xf8eec
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x116e25
 * Strings  :
 *   - 0x16fd1c: "AIL_uninstall_DIG_driver(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fa5f7(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa637;
      }
    }
  }
  bVar1 = false;
LAB_000fa637:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00116e25(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_allocate_sample_handle_0fa655 (Ghidra: FUN_000fa655)
 * Prototype: undefined4 dk_AIL_allocate_sample_handle_0fa655(undefined4 param_1);
 * Address  : 0xfa655 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_allocate_sample_handle(0x%X)'
 * Callers  : 7 -> 0xea94f, 0x10a990, 0x10e4d9, 0x1179d4, 0x11b68b, 0x11c83e, 0x11cfae
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x116e63
 * Strings  :
 *   - 0x16fd3d: "AIL_allocate_sample_handle(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fa655(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa695;
      }
    }
  }
  bVar1 = false;
LAB_000fa695:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00116e63(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_release_sample_handle_0fa720 (Ghidra: FUN_000fa720)
 * Prototype: void dk_AIL_release_sample_handle_0fa720(undefined4 param_1);
 * Address  : 0xfa720 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_release_sample_handle(0x%X)'
 * Callers  : 9 -> 0x10a8e0, 0x117598, 0x11799c, 0x11b68b, 0x11b840, 0x11c34e, 0x11c83e, 0x11cfae, 0x11d37c
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x116ed4
 * Strings  :
 *   - 0x16fd89: "AIL_release_sample_handle(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fa720(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa760;
      }
    }
  }
  bVar1 = false;
LAB_000fa760:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00116ed4(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_init_sample_0fa77e (Ghidra: FUN_000fa77e)
 * Prototype: void dk_AIL_init_sample_0fa77e(undefined4 param_1);
 * Address  : 0xfa77e (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_init_sample(0x%X)'
 * Callers  : 10 -> 0xeaa28, 0xf4ed4, 0x10ab70, 0x10e438, 0x116e63, 0x1179d4, 0x11b2a2, 0x11c83e, 0x11cfae, 0x11d6cf
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x116ee7
 * Strings  :
 *   - 0x16fdab: "AIL_init_sample(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fa77e(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa7be;
      }
    }
  }
  bVar1 = false;
LAB_000fa7be:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00116ee7(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_file_0fa7dc (Ghidra: FUN_000fa7dc)
 * Prototype: undefined4 dk_AIL_set_sample_file_0fa7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfa7dc (Size: 109 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_file(0x%X,0x%X,%d)'
 * Callers  : 3 -> 0xf4ed4, 0x10e438, 0x11c83e
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x117b51
 * Strings  :
 *   - 0x16fdc3: "AIL_set_sample_file(0x%X,0x%X,%d)\r\n"
 ******************************************************************************/
undefined4 FUN_000fa7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa81c;
      }
    }
  }
  bVar1 = false;
LAB_000fa81c:
  if (bVar1) {
    FUN_000f9767();
  }
  uVar3 = FUN_00117b51(param_1,param_2,param_3);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_address_0fa849 (Ghidra: FUN_000fa849)
 * Prototype: void dk_AIL_set_sample_address_0fa849(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfa849 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_address(0x%X,0x%X,%u)'
 * Callers  : 4 -> 0x1175d0, 0x117866, 0x11b2a2, 0x11cc3d
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x116fdd
 * Strings  :
 *   - 0x16fde7: "AIL_set_sample_address(0x%X,0x%X,%u)\r\n"
 ******************************************************************************/
void FUN_000fa849(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa889;
      }
    }
  }
  bVar1 = false;
LAB_000fa889:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_00116fdd(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_type_0fa8b3 (Ghidra: FUN_000fa8b3)
 * Prototype: void dk_AIL_set_sample_type_0fa8b3(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfa8b3 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_type(0x%X,%d,%u)'
 * Callers  : 7 -> 0xeaa28, 0x10ab70, 0x1175d0, 0x117866, 0x11b2a2, 0x11cd8b, 0x11d6cf
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x117003
 * Strings  :
 *   - 0x16fe0e: "AIL_set_sample_type(0x%X,%d,%u)\r\n"
 ******************************************************************************/
void FUN_000fa8b3(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa8f3;
      }
    }
  }
  bVar1 = false;
LAB_000fa8f3:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_00117003(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_start_sample_0fa91d (Ghidra: FUN_000fa91d)
 * Prototype: void dk_AIL_start_sample_0fa91d(undefined4 param_1);
 * Address  : 0xfa91d (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_start_sample(0x%X)'
 * Callers  : 7 -> 0xf4ed4, 0x10e438, 0x1175d0, 0x11b2a2, 0x11c83e, 0x11cc3d, 0x11d87a
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x117124
 * Strings  :
 *   - 0x16fe30: "AIL_start_sample(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fa91d(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa95d;
      }
    }
  }
  bVar1 = false;
LAB_000fa95d:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00117124(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_stop_sample_0fa97b (Ghidra: FUN_000fa97b)
 * Prototype: void dk_AIL_stop_sample_0fa97b(undefined4 param_1);
 * Address  : 0xfa97b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_stop_sample(0x%X)'
 * Callers  : 1 -> 0x11d8c4
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11716d
 * Strings  :
 *   - 0x16fe49: "AIL_stop_sample(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fa97b(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fa9bb;
      }
    }
  }
  bVar1 = false;
LAB_000fa9bb:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011716d(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_resume_sample_0fa9d9 (Ghidra: FUN_000fa9d9)
 * Prototype: void dk_AIL_resume_sample_0fa9d9(undefined4 param_1);
 * Address  : 0xfa9d9 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_resume_sample(0x%X)'
 * Callers  : 1 -> 0x11d8c4
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x117186
 * Strings  :
 *   - 0x16fe61: "AIL_resume_sample(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fa9d9(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000faa19;
      }
    }
  }
  bVar1 = false;
LAB_000faa19:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00117186(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_end_sample_0faa37 (Ghidra: FUN_000faa37)
 * Prototype: void dk_AIL_end_sample_0faa37(undefined4 param_1);
 * Address  : 0xfaa37 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_end_sample(0x%X)'
 * Callers  : 14 -> 0xeaa28, 0xeae8a, 0xeaf13, 0xf0730, 0xf0a54, 0x10a8e0, 0x10a960, 0x10e0cc, 0x10e4d9, 0x10e5f5 ...
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x1171aa
 * Strings  :
 *   - 0x16fe7b: "AIL_end_sample(0x%X)\r\n"
 ******************************************************************************/
void FUN_000faa37(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000faa77;
      }
    }
  }
  bVar1 = false;
LAB_000faa77:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_001171aa(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_playback_rate_0faa95 (Ghidra: FUN_000faa95)
 * Prototype: void dk_AIL_set_sample_playback_rate_0faa95(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfaa95 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_playback_rate(0x%X,%d)'
 * Callers  : 12 -> 0xeaa28, 0xf4ed4, 0xf5228, 0x10ab70, 0x1175d0, 0x117866, 0x11b18b, 0x11c83e, 0x11cad3, 0x11cd8b ...
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x117043
 * Strings  :
 *   - 0x16fe92: "AIL_set_sample_playback_rate(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000faa95(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000faad5;
      }
    }
  }
  bVar1 = false;
LAB_000faad5:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_00117043(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_volume_0faaf9 (Ghidra: FUN_000faaf9)
 * Prototype: void dk_AIL_set_sample_volume_0faaf9(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfaaf9 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_volume(0x%X,%d)'
 * Callers  : 12 -> 0xeaa28, 0xeae4c, 0xf0790, 0xf4ed4, 0x10a850, 0x10ab70, 0x10e0cc, 0x11b130, 0x11c83e, 0x11cb2d ...
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x117064
 * Strings  :
 *   - 0x16feba: "AIL_set_sample_volume(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000faaf9(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fab39;
      }
    }
  }
  bVar1 = false;
LAB_000fab39:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_00117064(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_pan_0fab5d (Ghidra: FUN_000fab5d)
 * Prototype: void dk_AIL_set_sample_pan_0fab5d(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfab5d (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_pan(0x%X,%d)'
 * Callers  : 9 -> 0xeaa28, 0xf4ed4, 0xf5168, 0x10a850, 0x11b130, 0x11c83e, 0x11cb2d, 0x11d6cf, 0x11d957
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x117093
 * Strings  :
 *   - 0x16fedb: "AIL_set_sample_pan(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000fab5d(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fab9d;
      }
    }
  }
  bVar1 = false;
LAB_000fab9d:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_00117093(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_loop_count_0fabc1 (Ghidra: FUN_000fabc1)
 * Prototype: void dk_AIL_set_sample_loop_count_0fabc1(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfabc1 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_loop_count(0x%X,%d)'
 * Callers  : 3 -> 0xf4ed4, 0x11c83e, 0x11d9e0
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x1170fa
 * Strings  :
 *   - 0x16fef9: "AIL_set_sample_loop_count(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000fabc1(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fac01;
      }
    }
  }
  bVar1 = false;
LAB_000fac01:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_001170fa(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_sample_status_0fac8f (Ghidra: FUN_000fac8f)
 * Prototype: undefined4 dk_AIL_sample_status_0fac8f(undefined4 param_1);
 * Address  : 0xfac8f (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_status(0x%X)'
 * Callers  : 11 -> 0xf0790, 0xf0a54, 0xf4e20, 0xf4ed4, 0xf5168, 0xf5228, 0x10e0cc, 0x10e2ce, 0x11b2a2, 0x11ca3f ...
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x116fce
 * Strings  :
 *   - 0x16ff49: "AIL_sample_status(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fac8f(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000faccf;
      }
    }
  }
  bVar1 = false;
LAB_000faccf:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00116fce(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_sample_playback_rate_0faced (Ghidra: FUN_000faced)
 * Prototype: undefined4 dk_AIL_sample_playback_rate_0faced(undefined4 param_1);
 * Address  : 0xfaced (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_playback_rate(0x%X)'
 * Callers  : 2 -> 0x11d6cf, 0x11d9c3
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x117034
 * Strings  :
 *   - 0x16ff63: "AIL_sample_playback_rate(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000faced(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fad2d;
      }
    }
  }
  bVar1 = false;
LAB_000fad2d:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00117034(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_sample_volume_0fad4b (Ghidra: FUN_000fad4b)
 * Prototype: undefined4 dk_AIL_sample_volume_0fad4b(undefined4 param_1);
 * Address  : 0xfad4b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_volume(0x%X)'
 * Callers  : 2 -> 0x11d6cf, 0x11d970
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x117055
 * Strings  :
 *   - 0x16ff84: "AIL_sample_volume(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fad4b(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fad8b;
      }
    }
  }
  bVar1 = false;
LAB_000fad8b:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00117055(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_sample_pan_0fada9 (Ghidra: FUN_000fada9)
 * Prototype: undefined4 dk_AIL_sample_pan_0fada9(undefined4 param_1);
 * Address  : 0xfada9 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_pan(0x%X)'
 * Callers  : 2 -> 0x11d6cf, 0x11d98d
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x117084
 * Strings  :
 *   - 0x16ff9e: "AIL_sample_pan(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fada9(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fade9;
      }
    }
  }
  bVar1 = false;
LAB_000fade9:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00117084(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_sample_loop_count_0fae07 (Ghidra: FUN_000fae07)
 * Prototype: undefined4 dk_AIL_sample_loop_count_0fae07(undefined4 param_1);
 * Address  : 0xfae07 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_loop_count(0x%X)'
 * Callers  : 1 -> 0x11da07
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x1170e4
 * Strings  :
 *   - 0x16ffb5: "AIL_sample_loop_count(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fae07(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fae47;
      }
    }
  }
  bVar1 = false;
LAB_000fae47:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_001170e4(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_digital_master_volume_0fae65 (Ghidra: FUN_000fae65)
 * Prototype: void dk_AIL_set_digital_master_volume_0fae65(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfae65 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_digital_master_volume(0x%X,%d)'
 * Callers  : 1 -> 0xf32ae
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11728c
 * Strings  :
 *   - 0x16ffd3: "AIL_set_digital_master_volume(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000fae65(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000faea5;
      }
    }
  }
  bVar1 = false;
LAB_000faea5:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_0011728c(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_digital_configuration_0faf2a (Ghidra: FUN_000faf2a)
 * Prototype: void dk_AIL_digital_configuration_0faf2a(void);
 * Address  : 0xfaf2a (Size: 204 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_digital_configuration(0x%lX,0x%lX,0x%lX,0x%lX)'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0xf9767, 0xf979c, 0xf9819, 0x115839, 0x115acb, 0x117421
 * Strings  :
 *   - 0x17001e: "AIL_digital_configuration(0x%lX,0x%lX,0x%lX,0x%lX)\r\n"
 *   - 0x170053: "Result = %ld, %lX, %s\r\n"
 ******************************************************************************/
void FUN_000faf2a(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uStack_8;
  
  puVar3 = (undefined4 *)&stack0xfffffffc;
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    uStack_8 = 0xfaf59;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      uStack_8 = 0xfaf62;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000faf6f;
      }
    }
  }
  bVar1 = false;
LAB_000faf6f:
  if (bVar1) {
    puVar3 = &uStack_8;
    uStack_8 = in_stack_0000001c;
    FUN_000f979c();
  }
  *(undefined4 *)((int)puVar3 + -4) = in_stack_0000001c;
  *(undefined4 *)((int)puVar3 + -8) = in_stack_00000018;
  *(undefined4 *)((int)puVar3 + -0xc) = in_stack_00000014;
  *(undefined4 *)((int)puVar3 + -0x10) = in_stack_00000010;
  *(undefined4 *)((int)puVar3 + -0x14) = 0xfaf94;
  FUN_00117421();
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    *(undefined4 *)((int)puVar3 + -4) = 0xfafb7;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      *(int *)((int)puVar3 + -4) = DAT_003df814 + 0xe;
      *(undefined **)((int)puVar3 + -8) = &DAT_00195d30;
      *(undefined4 *)((int)puVar3 + -0xc) = DAT_003df824;
      *(undefined4 *)((int)puVar3 + -0x10) = 0xfafd4;
      FUN_00115acb();
      *(undefined4 *)((int)puVar3 + -4) = 0xfafeb;
      FUN_000f9767();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_install_DIG_driver_image_0faff6 (Ghidra: FUN_000faff6)
 * Prototype: undefined4 dk_AIL_install_DIG_driver_image_0faff6(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfaff6 (Size: 114 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_install_DIG_driver_image(0x%X,%u,0x%X)'
 * Callers  : 1 -> 0x10a990
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x116d7f
 * Strings  :
 *   - 0x17006b: "AIL_install_DIG_driver_image(0x%X,%u,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000faff6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb036;
      }
    }
  }
  bVar1 = false;
LAB_000fb036:
  if (bVar1) {
    FUN_000f9767();
  }
  uVar3 = FUN_00116d7f(param_1,param_2,param_3);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_minimum_sample_buffer_size_0fb060 (Ghidra: FUN_000fb060)
 * Prototype: undefined4 dk_AIL_minimum_sample_buffer_size_0fb060(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb060 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_minimum_sample_buffer_size(0x%X,%d,%d)'
 * Callers  : 2 -> 0x10a990, 0x11cfae
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x1172e1
 * Strings  :
 *   - 0x170098: "AIL_minimum_sample_buffer_size(0x%X,%d,%d)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb0a0;
      }
    }
  }
  bVar1 = false;
LAB_000fb0a0:
  if (bVar1) {
    FUN_000f9767();
  }
  uVar3 = FUN_001172e1(param_1,param_2,param_3);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_sample_buffer_ready_0fb0ca (Ghidra: FUN_000fb0ca)
 * Prototype: undefined4 dk_AIL_sample_buffer_ready_0fb0ca(undefined4 param_1);
 * Address  : 0xfb0ca (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_buffer_ready(0x%X)'
 * Callers  : 5 -> 0xead2f, 0xeb147, 0xeb30c, 0x10ac50, 0x11cc3d
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x1173cc
 * Strings  :
 *   - 0x1700c5: "AIL_sample_buffer_ready(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb0ca(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb10a;
      }
    }
  }
  bVar1 = false;
LAB_000fb10a:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_001173cc(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_load_sample_buffer_0fb128 (Ghidra: FUN_000fb128)
 * Prototype: void dk_AIL_load_sample_buffer_0fb128(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfb128 (Size: 119 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_load_sample_buffer(0x%X,%u,0x%X,%u)'
 * Callers  : 4 -> 0xead2f, 0xeb147, 0x10ac50, 0x11cc3d
 * Callees  : 4 -> 0xf979c, 0xf9819, 0x115839, 0x117368
 * Strings  :
 *   - 0x1700e5: "AIL_load_sample_buffer(0x%X,%u,0x%X,%u)\r\n"
 ******************************************************************************/
void FUN_000fb128(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_c;
  
  puVar3 = (undefined4 *)&stack0xfffffff8;
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    uStack_c = 0xfb152;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      uStack_c = 0xfb15b;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb168;
      }
    }
  }
  bVar1 = false;
LAB_000fb168:
  if (bVar1) {
    puVar3 = &uStack_c;
    uStack_c = param_4;
    FUN_000f979c();
  }
  *(undefined4 *)((int)puVar3 + -4) = param_4;
  *(undefined4 *)((int)puVar3 + -8) = param_3;
  *(undefined4 *)((int)puVar3 + -0xc) = param_2;
  *(undefined4 *)((int)puVar3 + -0x10) = param_1;
  *(undefined4 *)((int)puVar3 + -0x14) = 0xfb193;
  FUN_00117368();
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_sample_buffer_info_0fb19f (Ghidra: FUN_000fb19f)
 * Prototype: undefined4 dk_AIL_sample_buffer_info_0fb19f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0xfb19f (Size: 123 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_buffer_info(0x%X,0x%X,0x%X,0x%X,0x%X)'
 * Callers  : 3 -> 0x10ac50, 0x11d534, 0x11d7f3
 * Callees  : 4 -> 0xf97d6, 0xf9819, 0x115839, 0x117468
 * Strings  :
 *   - 0x17010f: "AIL_sample_buffer_info(0x%X,0x%X,0x%X,0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4
FUN_000fb19f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar4 = (undefined4 *)&stack0xfffffff8;
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    uStack_c = 0xfb1c9;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      uStack_c = 0xfb1d2;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb1df;
      }
    }
  }
  bVar1 = false;
LAB_000fb1df:
  if (bVar1) {
    uStack_c = param_5;
    puVar4 = &uStack_10;
    uStack_10 = param_4;
    FUN_000f97d6();
  }
  *(undefined4 *)((int)puVar4 + -4) = param_5;
  *(undefined4 *)((int)puVar4 + -8) = param_4;
  *(undefined4 *)((int)puVar4 + -0xc) = param_3;
  *(undefined4 *)((int)puVar4 + -0x10) = param_2;
  *(undefined4 *)((int)puVar4 + -0x14) = param_1;
  *(undefined4 *)((int)puVar4 + -0x18) = 0xfb210;
  uVar3 = FUN_00117468();
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    *(undefined4 *)((int)puVar4 + -4) = 0xf9a50;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      *(int *)((int)puVar4 + -4) = DAT_003df814 + 0xe;
      *(undefined **)((int)puVar4 + -8) = &DAT_00195d30;
      *(undefined4 *)((int)puVar4 + -0xc) = DAT_003df824;
      *(undefined4 *)((int)puVar4 + -0x10) = 0xf9a6d;
      FUN_00115acb();
      *(undefined4 *)((int)puVar4 + -4) = 0xf9a77;
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_position_0fb21a (Ghidra: FUN_000fb21a)
 * Prototype: void dk_AIL_set_sample_position_0fb21a(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb21a (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_position(0x%X,%u)'
 * Callers  : 1 -> 0x11d6cf
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x1170ca
 * Strings  :
 *   - 0x170142: "AIL_set_sample_position(0x%X,%u)\r\n"
 ******************************************************************************/
void FUN_000fb21a(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb25a;
      }
    }
  }
  bVar1 = false;
LAB_000fb25a:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_001170ca(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_sample_position_0fb27e (Ghidra: FUN_000fb27e)
 * Prototype: undefined4 dk_AIL_sample_position_0fb27e(undefined4 param_1);
 * Address  : 0xfb27e (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_position(0x%X)'
 * Callers  : 2 -> 0xeafb8, 0x11d7f3
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x1170b3
 * Strings  :
 *   - 0x170165: "AIL_sample_position(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb27e(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb2be;
      }
    }
  }
  bVar1 = false;
LAB_000fb2be:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_001170b3(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_register_EOB_callback_0fb340 (Ghidra: FUN_000fb340)
 * Prototype: undefined4 dk_AIL_register_EOB_callback_0fb340(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb340 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_register_EOB_callback(0x%X,0x%X)'
 * Callers  : 1 -> 0x11cfae
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x117213
 * Strings  :
 *   - 0x1701a8: "AIL_register_EOB_callback(0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb340(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb380;
      }
    }
  }
  bVar1 = false;
LAB_000fb380:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_00117213(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_register_EOS_callback_0fb3a4 (Ghidra: FUN_000fb3a4)
 * Prototype: undefined4 dk_AIL_register_EOS_callback_0fb3a4(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb3a4 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_register_EOS_callback(0x%X,0x%X)'
 * Callers  : 5 -> 0x10e438, 0x10e5f5, 0x1179d4, 0x11c83e, 0x11cfae
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x117232
 * Strings  :
 *   - 0x1701cf: "AIL_register_EOS_callback(0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb3a4(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb3e4;
      }
    }
  }
  bVar1 = false;
LAB_000fb3e4:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_00117232(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_sample_user_data_0fb46c (Ghidra: FUN_000fb46c)
 * Prototype: void dk_AIL_set_sample_user_data_0fb46c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb46c (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sample_user_data(0x%X,%u,%d)'
 * Callers  : 5 -> 0x10ab70, 0x10e4d9, 0x10e5f5, 0x11c83e, 0x11cfae
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x117251
 * Strings  :
 *   - 0x17021d: "AIL_set_sample_user_data(0x%X,%u,%d)\r\n"
 ******************************************************************************/
void FUN_000fb46c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb4ac;
      }
    }
  }
  bVar1 = false;
LAB_000fb4ac:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_00117251(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_sample_user_data_0fb4d6 (Ghidra: FUN_000fb4d6)
 * Prototype: undefined4 dk_AIL_sample_user_data_0fb4d6(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb4d6 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sample_user_data(0x%X,%u)'
 * Callers  : 3 -> 0x10e438, 0x11c34e, 0x11cd61
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11726e
 * Strings  :
 *   - 0x170244: "AIL_sample_user_data(0x%X,%u)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb4d6(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb516;
      }
    }
  }
  bVar1 = false;
LAB_000fb516:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011726e(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_install_MDI_INI_0fb598 (Ghidra: FUN_000fb598)
 * Prototype: undefined4 dk_AIL_install_MDI_INI_0fb598(undefined4 param_1);
 * Address  : 0xfb598 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_install_MDI_INI(0x%X)'
 * Callers  : 2 -> 0xfe128, 0x11c383
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x119bef
 * Strings  :
 *   - 0x170284: "AIL_install_MDI_INI(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb598(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb5d8;
      }
    }
  }
  bVar1 = false;
LAB_000fb5d8:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00119bef(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_install_MDI_driver_file_0fb5f6 (Ghidra: FUN_000fb5f6)
 * Prototype: undefined4 dk_AIL_install_MDI_driver_file_0fb5f6(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfb5f6 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_install_MDI_driver_file(%s,0x%X)'
 * Callers  : 2 -> 0xfe128, 0x119bef
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x119a6e
 * Strings  :
 *   - 0x1702a0: "AIL_install_MDI_driver_file(%s,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb5f6(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb636;
      }
    }
  }
  bVar1 = false;
LAB_000fb636:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_00119a6e(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_uninstall_MDI_driver_0fb65a (Ghidra: FUN_000fb65a)
 * Prototype: void dk_AIL_uninstall_MDI_driver_0fb65a(undefined4 param_1);
 * Address  : 0xfb65a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_uninstall_MDI_driver(0x%X)'
 * Callers  : 1 -> 0xfe128
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x119c5b
 * Strings  :
 *   - 0x1702c7: "AIL_uninstall_MDI_driver(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fb65a(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb69a;
      }
    }
  }
  bVar1 = false;
LAB_000fb69a:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00119c5b(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_allocate_sequence_handle_0fb6b8 (Ghidra: FUN_000fb6b8)
 * Prototype: undefined4 dk_AIL_allocate_sequence_handle_0fb6b8(undefined4 param_1);
 * Address  : 0xfb6b8 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_allocate_sequence_handle(0x%X)'
 * Callers  : 2 -> 0xfe128, 0x11c83e
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x119e41
 * Strings  :
 *   - 0x1702e8: "AIL_allocate_sequence_handle(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb6b8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb6f8;
      }
    }
  }
  bVar1 = false;
LAB_000fb6f8:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00119e41(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_release_sequence_handle_0fb716 (Ghidra: FUN_000fb716)
 * Prototype: void dk_AIL_release_sequence_handle_0fb716(undefined4 param_1);
 * Address  : 0xfb716 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_release_sequence_handle(0x%X)'
 * Callers  : 2 -> 0x11c314, 0x11c83e
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x119ec0
 * Strings  :
 *   - 0x17030d: "AIL_release_sequence_handle(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fb716(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb756;
      }
    }
  }
  bVar1 = false;
LAB_000fb756:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00119ec0(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_init_sequence_0fb774 (Ghidra: FUN_000fb774)
 * Prototype: undefined4 dk_AIL_init_sequence_0fb774(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb774 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_init_sequence(0x%X,0x%X,%d)'
 * Callers  : 3 -> 0xf1874, 0xf23de, 0x11c83e
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x119f04
 * Strings  :
 *   - 0x170331: "AIL_init_sequence(0x%X,0x%X,%d)\r\n"
 ******************************************************************************/
undefined4 FUN_000fb774(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb7b4;
      }
    }
  }
  bVar1 = false;
LAB_000fb7b4:
  if (bVar1) {
    FUN_000f9767();
  }
  uVar3 = FUN_00119f04(param_1,param_2,param_3);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_start_sequence_0fb7de (Ghidra: FUN_000fb7de)
 * Prototype: void dk_AIL_start_sequence_0fb7de(undefined4 param_1);
 * Address  : 0xfb7de (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_start_sequence(0x%X)'
 * Callers  : 2 -> 0xf1874, 0x11c83e
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11a224
 * Strings  :
 *   - 0x170353: "AIL_start_sequence(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fb7de(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb81e;
      }
    }
  }
  bVar1 = false;
LAB_000fb81e:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011a224(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_stop_sequence_0fb83c (Ghidra: FUN_000fb83c)
 * Prototype: void dk_AIL_stop_sequence_0fb83c(undefined4 param_1);
 * Address  : 0xfb83c (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_stop_sequence(0x%X)'
 * Callers  : 8 -> 0xf0ab8, 0xf17d0, 0xf1874, 0x10f620, 0x118cc7, 0x119ec0, 0x11a224, 0x11a35f
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11a251
 * Strings  :
 *   - 0x17036e: "AIL_stop_sequence(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fb83c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb87c;
      }
    }
  }
  bVar1 = false;
LAB_000fb87c:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011a251(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_resume_sequence_0fb89a (Ghidra: FUN_000fb89a)
 * Prototype: void dk_AIL_resume_sequence_0fb89a(undefined4 param_1);
 * Address  : 0xfb89a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_resume_sequence(0x%X)'
 * Callers  : 1 -> 0xf17d0
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11a2f8
 * Strings  :
 *   - 0x170388: "AIL_resume_sequence(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fb89a(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb8da;
      }
    }
  }
  bVar1 = false;
LAB_000fb8da:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011a2f8(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_end_sequence_0fb8f8 (Ghidra: FUN_000fb8f8)
 * Prototype: void dk_AIL_end_sequence_0fb8f8(undefined4 param_1);
 * Address  : 0xfb8f8 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_end_sequence(0x%X)'
 * Callers  : 6 -> 0xf0ab8, 0xf1874, 0x10f620, 0x11939c, 0x11c78c, 0x11c9f4
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11a35f
 * Strings  :
 *   - 0x1703a4: "AIL_end_sequence(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fb8f8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb938;
      }
    }
  }
  bVar1 = false;
LAB_000fb938:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011a35f(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sequence_tempo_0fb956 (Ghidra: FUN_000fb956)
 * Prototype: void dk_AIL_set_sequence_tempo_0fb956(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb956 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sequence_tempo(0x%X,%d,%d)'
 * Callers  : 2 -> 0x11c83e, 0x11cad3
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x11a3a5
 * Strings  :
 *   - 0x1703bd: "AIL_set_sequence_tempo(0x%X,%d,%d)\r\n"
 ******************************************************************************/
void FUN_000fb956(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fb996;
      }
    }
  }
  bVar1 = false;
LAB_000fb996:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_0011a3a5(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sequence_volume_0fb9c0 (Ghidra: FUN_000fb9c0)
 * Prototype: void dk_AIL_set_sequence_volume_0fb9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfb9c0 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sequence_volume(0x%X,%d,%d)'
 * Callers  : 3 -> 0xf1874, 0x11c83e, 0x11cb2d
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x11a3fc
 * Strings  :
 *   - 0x1703e2: "AIL_set_sequence_volume(0x%X,%d,%d)\r\n"
 ******************************************************************************/
void FUN_000fb9c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fba00;
      }
    }
  }
  bVar1 = false;
LAB_000fba00:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_0011a3fc(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_set_sequence_loop_count_0fba2a (Ghidra: FUN_000fba2a)
 * Prototype: void dk_AIL_set_sequence_loop_count_0fba2a(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfba2a (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sequence_loop_count(0x%X,%d)'
 * Callers  : 1 -> 0x11c83e
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a393
 * Strings  :
 *   - 0x170408: "AIL_set_sequence_loop_count(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000fba2a(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fba6a;
      }
    }
  }
  bVar1 = false;
LAB_000fba6a:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_0011a393(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_sequence_status_0fba8e (Ghidra: FUN_000fba8e)
 * Prototype: undefined4 dk_AIL_sequence_status_0fba8e(undefined4 param_1);
 * Address  : 0xfba8e (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sequence_status(0x%X)'
 * Callers  : 3 -> 0xf0ab8, 0xf1874, 0x11ca3f
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11a461
 * Strings  :
 *   - 0x17042f: "AIL_sequence_status(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fba8e(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fbace;
      }
    }
  }
  bVar1 = false;
LAB_000fbace:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011a461(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_XMIDI_master_volume_0fbc06 (Ghidra: FUN_000fbc06)
 * Prototype: void dk_AIL_set_XMIDI_master_volume_0fbc06(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfbc06 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_XMIDI_master_volume(0x%X,%d)'
 * Callers  : 1 -> 0xf3264
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a4a4
 * Strings  :
 *   - 0x1704a2: "AIL_set_XMIDI_master_volume(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000fbc06(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fbc46;
      }
    }
  }
  bVar1 = false;
LAB_000fbc46:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_0011a4a4(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_MDI_driver_type_0fbd32 (Ghidra: FUN_000fbd32)
 * Prototype: undefined4 dk_AIL_MDI_driver_type_0fbd32(undefined4 param_1);
 * Address  : 0xfbd32 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_MDI_driver_type(0x%X)'
 * Callers  : 1 -> 0xfe128
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x119c6e
 * Strings  :
 *   - 0x170516: "AIL_MDI_driver_type(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fbd32(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fbd72;
      }
    }
  }
  bVar1 = false;
LAB_000fbd72:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_00119c6e(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_GTL_filename_prefix_0fbd90 (Ghidra: FUN_000fbd90)
 * Prototype: void dk_AIL_set_GTL_filename_prefix_0fbd90(undefined4 param_1);
 * Address  : 0xfbd90 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_GTL_filename_prefix(%s)'
 * Callers  : 1 -> 0xfe128
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x119dcb
 * Strings  :
 *   - 0x170532: "AIL_set_GTL_filename_prefix(%s)\r\n"
 ******************************************************************************/
void FUN_000fbd90(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fbdd0;
      }
    }
  }
  bVar1 = false;
LAB_000fbdd0:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_00119dcb(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_install_timbre_0fbe59 (Ghidra: FUN_000fbe59)
 * Prototype: undefined4 dk_AIL_install_timbre_0fbe59(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfbe59 (Size: 105 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_install_timbre(0x%X,%d,%d)'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x11a52a
 * Strings  :
 *   - 0x170574: "AIL_install_timbre(0x%X,%d,%d)\r\n"
 ******************************************************************************/
undefined4 FUN_000fbe59(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fbe98;
      }
    }
  }
  bVar1 = false;
LAB_000fbe98:
  if (bVar1) {
    FUN_000f9767();
  }
  uVar3 = FUN_0011a52a(param_2,param_3,param_4);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_sequence_position_0fc0c2 (Ghidra: FUN_000fc0c2)
 * Prototype: void dk_AIL_sequence_position_0fc0c2(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfc0c2 (Size: 203 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sequence_position(0x%X,0x%X,0x%X)'
 * Callers  : 1 -> 0x118cc7
 * Callees  : 6 -> 0xf9733, 0xf9767, 0xf9819, 0x115839, 0x115acb, 0x11a6b8
 * Strings  :
 *   - 0x17063b: "AIL_sequence_position(0x%X,0x%X,0x%X)\r\n"
 *   - 0x170663: "Result = %d:%d\r\n"
 ******************************************************************************/
void FUN_000fc0c2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc10a;
      }
    }
  }
  bVar1 = false;
LAB_000fc10a:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_0011a6b8(param_1,param_2,param_3);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f9733();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_branch_index_0fc18d (Ghidra: FUN_000fc18d)
 * Prototype: void dk_AIL_branch_index_0fc18d(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc18d (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_branch_index(0x%X,%u)'
 * Callers  : 1 -> 0x1184ad
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a71a
 * Strings  :
 *   - 0x170674: "AIL_branch_index(0x%X,%u)\r\n"
 ******************************************************************************/
void FUN_000fc18d(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc1cd;
      }
    }
  }
  bVar1 = false;
LAB_000fc1cd:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_0011a71a(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_register_trigger_callback_0fc255 (Ghidra: FUN_000fc255)
 * Prototype: undefined4 dk_AIL_register_trigger_callback_0fc255(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc255 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_register_trigger_callback(0x%X,0x%X)'
 * Callers  : 1 -> 0xf1874
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a7a7
 * Strings  :
 *   - 0x1706ba: "AIL_register_trigger_callback(0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fc255(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc295;
      }
    }
  }
  bVar1 = false;
LAB_000fc295:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011a7a7(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_register_sequence_callback_0fc2b9 (Ghidra: FUN_000fc2b9)
 * Prototype: undefined4 dk_AIL_register_sequence_callback_0fc2b9(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc2b9 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_register_sequence_callback(0x%X,0x%X)'
 * Callers  : 1 -> 0x11c83e
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a7c0
 * Strings  :
 *   - 0x1706e5: "AIL_register_sequence_callback(0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fc2b9(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc2f9;
      }
    }
  }
  bVar1 = false;
LAB_000fc2f9:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011a7c0(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_register_event_callback_0fc381 (Ghidra: FUN_000fc381)
 * Prototype: undefined4 dk_AIL_register_event_callback_0fc381(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc381 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_register_event_callback(0x%X,0x%X)'
 * Callers  : 2 -> 0x11b68b, 0x11b840
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a7f2
 * Strings  :
 *   - 0x170739: "AIL_register_event_callback(0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fc381(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc3c1;
      }
    }
  }
  bVar1 = false;
LAB_000fc3c1:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011a7f2(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_register_timbre_callback_0fc3e5 (Ghidra: FUN_000fc3e5)
 * Prototype: undefined4 dk_AIL_register_timbre_callback_0fc3e5(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc3e5 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_register_timbre_callback(0x%X,0x%X)'
 * Callers  : 2 -> 0x11b68b, 0x11b840
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a80b
 * Strings  :
 *   - 0x170762: "AIL_register_timbre_callback(0x%X,0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fc3e5(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc425;
      }
    }
  }
  bVar1 = false;
LAB_000fc425:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011a80b(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_sequence_user_data_0fc449 (Ghidra: FUN_000fc449)
 * Prototype: void dk_AIL_set_sequence_user_data_0fc449(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfc449 (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_sequence_user_data(0x%X,%u,%d)'
 * Callers  : 1 -> 0x11c83e
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x11a824
 * Strings  :
 *   - 0x17078c: "AIL_set_sequence_user_data(0x%X,%u,%d)\r\n"
 ******************************************************************************/
void FUN_000fc449(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc489;
      }
    }
  }
  bVar1 = false;
LAB_000fc489:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_0011a824(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_sequence_user_data_0fc4b3 (Ghidra: FUN_000fc4b3)
 * Prototype: undefined4 dk_AIL_sequence_user_data_0fc4b3(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc4b3 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_sequence_user_data(0x%X,%u)'
 * Callers  : 1 -> 0x11c314
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a841
 * Strings  :
 *   - 0x1707b5: "AIL_sequence_user_data(0x%X,%u)\r\n"
 ******************************************************************************/
undefined4 FUN_000fc4b3(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc4f3;
      }
    }
  }
  bVar1 = false;
LAB_000fc4f3:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011a841(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_lock_channel_0fc57b (Ghidra: FUN_000fc57b)
 * Prototype: undefined4 dk_AIL_lock_channel_0fc57b(undefined4 param_1);
 * Address  : 0xfc57b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_lock_channel(0x%X)'
 * Callers  : 2 -> 0x1184ad, 0x11a2f8
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11a871
 * Strings  :
 *   - 0x1707fb: "AIL_lock_channel(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fc57b(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc5bb;
      }
    }
  }
  bVar1 = false;
LAB_000fc5bb:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011a871(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_release_channel_0fc5d9 (Ghidra: FUN_000fc5d9)
 * Prototype: void dk_AIL_release_channel_0fc5d9(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc5d9 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_release_channel(0x%X,%d)'
 * Callers  : 2 -> 0x1184ad, 0x11a251
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11a9c6
 * Strings  :
 *   - 0x170814: "AIL_release_channel(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000fc5d9(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc619;
      }
    }
  }
  bVar1 = false;
LAB_000fc619:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_0011a9c6(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_map_sequence_channel_0fc63d (Ghidra: FUN_000fc63d)
 * Prototype: void dk_AIL_map_sequence_channel_0fc63d(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfc63d (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_map_sequence_channel(0x%X,%d,%d)'
 * Callers  : 1 -> 0x1184ad
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x11aac5
 * Strings  :
 *   - 0x170833: "AIL_map_sequence_channel(0x%X,%d,%d)\r\n"
 ******************************************************************************/
void FUN_000fc63d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc67d;
      }
    }
  }
  bVar1 = false;
LAB_000fc67d:
  if (bVar1) {
    FUN_000f9767();
  }
  FUN_0011aac5(param_1,param_2,param_3);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_send_channel_voice_message_0fc70b (Ghidra: FUN_000fc70b)
 * Prototype: void dk_AIL_send_channel_voice_message_0fc70b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0xfc70b (Size: 125 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_send_channel_voice_message(0x%X,0x%X,0x%X,0x%X,0x%X)'
 * Callers  : 2 -> 0xf17d0, 0xf1874
 * Callees  : 4 -> 0xf97d6, 0xf9819, 0x115839, 0x11ab19
 * Strings  :
 *   - 0x17087f: "AIL_send_channel_voice_message(0x%X,0x%X,0x%X,0x%X,0x%X)\r\n"
 ******************************************************************************/
void FUN_000fc70b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar3 = (undefined4 *)&stack0xfffffff8;
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    uStack_c = 0xfc735;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      uStack_c = 0xfc73e;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc74b;
      }
    }
  }
  bVar1 = false;
LAB_000fc74b:
  if (bVar1) {
    uStack_c = param_5;
    puVar3 = &uStack_10;
    uStack_10 = param_4;
    FUN_000f97d6();
  }
  *(undefined4 *)((int)puVar3 + -4) = param_5;
  *(undefined4 *)((int)puVar3 + -8) = param_4;
  *(undefined4 *)((int)puVar3 + -0xc) = param_3;
  *(undefined4 *)((int)puVar3 + -0x10) = param_2;
  *(undefined4 *)((int)puVar3 + -0x14) = param_1;
  *(undefined4 *)((int)puVar3 + -0x18) = 0xfc77c;
  FUN_0011ab19();
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_send_sysex_message_0fc788 (Ghidra: FUN_000fc788)
 * Prototype: void dk_AIL_send_sysex_message_0fc788(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfc788 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_send_sysex_message(0x%X,0x%X)'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11abcc
 * Strings  :
 *   - 0x1708ba: "AIL_send_sysex_message(0x%X,0x%X)\r\n"
 ******************************************************************************/
void FUN_000fc788(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc7c8;
      }
    }
  }
  bVar1 = false;
LAB_000fc7c8:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_0011abcc(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_redbook_open_0fc8bd (Ghidra: FUN_000fc8bd)
 * Prototype: undefined4 dk_AIL_redbook_open_0fc8bd(undefined4 param_1);
 * Address  : 0xfc8bd (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_open(%ld)'
 * Callers  : 1 -> 0xec93f
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11bef4
 * Strings  :
 *   - 0x170934: "AIL_redbook_open(%ld)\r\n"
 ******************************************************************************/
undefined4 FUN_000fc8bd(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc8fd;
      }
    }
  }
  bVar1 = false;
LAB_000fc8fd:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011bef4(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_close_0fc91b (Ghidra: FUN_000fc91b)
 * Prototype: void dk_AIL_redbook_close_0fc91b(undefined4 param_1);
 * Address  : 0xfc91b (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_close(0x%lX)'
 * Callers  : 2 -> 0xec93f, 0xeca60
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11bf69
 * Strings  :
 *   - 0x17094c: "AIL_redbook_close(0x%lX)\r\n"
 ******************************************************************************/
void FUN_000fc91b(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fc95b;
      }
    }
  }
  bVar1 = false;
LAB_000fc95b:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011bf69(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_redbook_status_0fca35 (Ghidra: FUN_000fca35)
 * Prototype: undefined4 dk_AIL_redbook_status_0fca35(undefined4 param_1);
 * Address  : 0xfca35 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_status(0x%lX)'
 * Callers  : 16 -> 0xec93f, 0xecabc, 0xeccb6, 0xecd16, 0xecd76, 0xece00, 0xecf4c, 0x11c022, 0x11c03c, 0x11c09c ...
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11bfc3
 * Strings  :
 *   - 0x17099f: "AIL_redbook_status(0x%lX)\r\n"
 ******************************************************************************/
undefined4 FUN_000fca35(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fca75;
      }
    }
  }
  bVar1 = false;
LAB_000fca75:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011bfc3(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_tracks_0fca93 (Ghidra: FUN_000fca93)
 * Prototype: undefined4 dk_AIL_redbook_tracks_0fca93(undefined4 param_1);
 * Address  : 0xfca93 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_tracks(0x%lX)'
 * Callers  : 5 -> 0xec93f, 0xecabc, 0xece00, 0xecf0b, 0x11c09c
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c022
 * Strings  :
 *   - 0x1709bb: "AIL_redbook_tracks(0x%lX)\r\n"
 ******************************************************************************/
undefined4 FUN_000fca93(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcad3;
      }
    }
  }
  bVar1 = false;
LAB_000fcad3:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011c022(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_track_info_0fcaf1 (Ghidra: FUN_000fcaf1)
 * Prototype: void dk_AIL_redbook_track_info_0fcaf1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0xfcaf1 (Size: 112 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_track_info(0x%lX, %ld, 0x%lX, 0x%lX)'
 * Callers  : 3 -> 0xecabc, 0xece00, 0x11c09c
 * Callees  : 4 -> 0xf979c, 0xf9819, 0x115839, 0x11c03c
 * Strings  :
 *   - 0x1709d7: "AIL_redbook_track_info(0x%lX, %ld, 0x%lX, 0x%lX)\r\n"
 ******************************************************************************/
void FUN_000fcaf1(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_c;
  
  puVar3 = (undefined4 *)&stack0xfffffff8;
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    uStack_c = 0xfcb1b;
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      uStack_c = 0xfcb24;
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcb31;
      }
    }
  }
  bVar1 = false;
LAB_000fcb31:
  if (bVar1) {
    puVar3 = &uStack_c;
    uStack_c = param_4;
    FUN_000f979c();
  }
  *(undefined4 *)((int)puVar3 + -4) = param_4;
  *(undefined4 *)((int)puVar3 + -8) = param_3;
  *(undefined4 *)((int)puVar3 + -0xc) = param_2;
  *(undefined4 *)((int)puVar3 + -0x10) = param_1;
  *(undefined4 *)((int)puVar3 + -0x14) = 0xfcb5c;
  FUN_0011c03c();
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_redbook_position_0fcbbf (Ghidra: FUN_000fcbbf)
 * Prototype: undefined4 dk_AIL_redbook_position_0fcbbf(undefined4 param_1);
 * Address  : 0xfcbbf (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_position(0x%lX)'
 * Callers  : 2 -> 0xecff2, 0x11c205
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c138
 * Strings  :
 *   - 0x170a22: "AIL_redbook_position(0x%lX)\r\n"
 ******************************************************************************/
undefined4 FUN_000fcbbf(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcbff;
      }
    }
  }
  bVar1 = false;
LAB_000fcbff:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011c138(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_play_0fcc7b (Ghidra: FUN_000fcc7b)
 * Prototype: undefined4 dk_AIL_redbook_play_0fcc7b(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0xfcc7b (Size: 106 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_play(0x%lX, %ld, %ld)'
 * Callers  : 3 -> 0xecabc, 0xece00, 0x11c231
 * Callees  : 4 -> 0xf9767, 0xf9819, 0x115839, 0x11c185
 * Strings  :
 *   - 0x170a5b: "AIL_redbook_play(0x%lX, %ld, %ld)\r\n"
 ******************************************************************************/
undefined4 FUN_000fcc7b(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fccbb;
      }
    }
  }
  bVar1 = false;
LAB_000fccbb:
  if (bVar1) {
    FUN_000f9767();
  }
  uVar3 = FUN_0011c185(param_1,param_2,param_3);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_stop_0fcce5 (Ghidra: FUN_000fcce5)
 * Prototype: undefined4 dk_AIL_redbook_stop_0fcce5(undefined4 param_1);
 * Address  : 0xfcce5 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_stop(0x%lX)'
 * Callers  : 4 -> 0xeca60, 0xecabc, 0xecd76, 0xece00
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c1d0
 * Strings  :
 *   - 0x170a7f: "AIL_redbook_stop(0x%lX)\r\n"
 ******************************************************************************/
undefined4 FUN_000fcce5(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcd25;
      }
    }
  }
  bVar1 = false;
LAB_000fcd25:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011c1d0(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_pause_0fcd43 (Ghidra: FUN_000fcd43)
 * Prototype: undefined4 dk_AIL_redbook_pause_0fcd43(undefined4 param_1);
 * Address  : 0xfcd43 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_pause(0x%lX)'
 * Callers  : 1 -> 0xeccb6
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c205
 * Strings  :
 *   - 0x170a99: "AIL_redbook_pause(0x%lX)\r\n"
 ******************************************************************************/
undefined4 FUN_000fcd43(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcd83;
      }
    }
  }
  bVar1 = false;
LAB_000fcd83:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011c205(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_resume_0fcda1 (Ghidra: FUN_000fcda1)
 * Prototype: undefined4 dk_AIL_redbook_resume_0fcda1(undefined4 param_1);
 * Address  : 0xfcda1 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_resume(0x%lX)'
 * Callers  : 1 -> 0xecd16
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c231
 * Strings  :
 *   - 0x170ab4: "AIL_redbook_resume(0x%lX)\r\n"
 ******************************************************************************/
undefined4 FUN_000fcda1(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcde1;
      }
    }
  }
  bVar1 = false;
LAB_000fcde1:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011c231(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_volume_0fcdff (Ghidra: FUN_000fcdff)
 * Prototype: undefined4 dk_AIL_redbook_volume_0fcdff(undefined4 param_1);
 * Address  : 0xfcdff (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_volume(0x%lX)'
 * Callers  : 2 -> 0xecfce, 0x11c278
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c25e
 * Strings  :
 *   - 0x170ad0: "AIL_redbook_volume(0x%lX)\r\n"
 ******************************************************************************/
undefined4 FUN_000fcdff(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fce3f;
      }
    }
  }
  bVar1 = false;
LAB_000fce3f:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011c25e(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_redbook_set_volume_0fce5d (Ghidra: FUN_000fce5d)
 * Prototype: undefined4 dk_AIL_redbook_set_volume_0fce5d(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfce5d (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_redbook_set_volume(0x%lX,%ld)'
 * Callers  : 2 -> 0xeca60, 0xecf70
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11c278
 * Strings  :
 *   - 0x170aec: "AIL_redbook_set_volume(0x%lX,%ld)\r\n"
 ******************************************************************************/
undefined4 FUN_000fce5d(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fce9d;
      }
    }
  }
  bVar1 = false;
LAB_000fce9d:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011c278(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_quick_load_0fcf16 (Ghidra: FUN_000fcf16)
 * Prototype: undefined4 dk_AIL_quick_load_0fcf16(undefined4 param_1);
 * Address  : 0xfcf16 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_quick_load(%s)'
 * Callers  : 1 -> 0x11ca3f
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c6b4
 * Strings  :
 *   - 0x170b27: "AIL_quick_load(%s)\r\n"
 ******************************************************************************/
undefined4 FUN_000fcf16(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcf56;
      }
    }
  }
  bVar1 = false;
LAB_000fcf56:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011c6b4(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96f8();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_quick_unload_0fcf74 (Ghidra: FUN_000fcf74)
 * Prototype: void dk_AIL_quick_unload_0fcf74(undefined4 param_1);
 * Address  : 0xfcf74 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_quick_unload(0x%X)'
 * Callers  : 3 -> 0x11c45f, 0x11c4e3, 0x11ca3f
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c78c
 * Strings  :
 *   - 0x170b3c: "AIL_quick_unload(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fcf74(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fcfb4;
      }
    }
  }
  bVar1 = false;
LAB_000fcfb4:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011c78c(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_quick_play_0fd036 (Ghidra: FUN_000fd036)
 * Prototype: undefined4 dk_AIL_quick_play_0fd036(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfd036 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_quick_play(0x%X,%d)'
 * Callers  : 1 -> 0x11ca3f
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11c83e
 * Strings  :
 *   - 0x170b73: "AIL_quick_play(0x%X,%d)\r\n"
 ******************************************************************************/
undefined4 FUN_000fd036(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fd076;
      }
    }
  }
  bVar1 = false;
LAB_000fd076:
  if (bVar1) {
    FUN_000f9733();
  }
  uVar3 = FUN_0011c83e(param_1,param_2);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_quick_halt_0fd09a (Ghidra: FUN_000fd09a)
 * Prototype: void dk_AIL_quick_halt_0fd09a(undefined4 param_1);
 * Address  : 0xfd09a (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_quick_halt(0x%X)'
 * Callers  : 1 -> 0x11c83e
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11c9f4
 * Strings  :
 *   - 0x170b8d: "AIL_quick_halt(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fd09a(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fd0da;
      }
    }
  }
  bVar1 = false;
LAB_000fd0da:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011c9f4(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_quick_status_0fd0f8 (Ghidra: FUN_000fd0f8)
 * Prototype: undefined4 dk_AIL_quick_status_0fd0f8(undefined4 param_1);
 * Address  : 0xfd0f8 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_quick_status(0x%X)'
 * Callers  : 2 -> 0x11cad3, 0x11cb2d
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11cabd
 * Strings  :
 *   - 0x170ba4: "AIL_quick_status(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fd0f8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fd138;
      }
    }
  }
  bVar1 = false;
LAB_000fd138:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011cabd(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_close_stream_0fd356 (Ghidra: FUN_000fd356)
 * Prototype: void dk_AIL_close_stream_0fd356(undefined4 param_1);
 * Address  : 0xfd356 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_close_stream(0x%X)'
 * Callers  : 1 -> 0x11dae3
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11d37c
 * Strings  :
 *   - 0x170c58: "AIL_close_stream(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fd356(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fd396;
      }
    }
  }
  bVar1 = false;
LAB_000fd396:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011d37c(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_start_stream_0fd418 (Ghidra: FUN_000fd418)
 * Prototype: void dk_AIL_start_stream_0fd418(undefined4 param_1);
 * Address  : 0xfd418 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_start_stream(0x%X)'
 * Callers  : 1 -> 0x11d8c4
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11d87a
 * Strings  :
 *   - 0x170c8f: "AIL_start_stream(0x%X)\r\n"
 ******************************************************************************/
void FUN_000fd418(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fd458;
      }
    }
  }
  bVar1 = false;
LAB_000fd458:
  if (bVar1) {
    FUN_000f970b();
  }
  FUN_0011d87a(param_1);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_stream_status_0fd7e2 (Ghidra: FUN_000fd7e2)
 * Prototype: undefined4 dk_AIL_stream_status_0fd7e2(undefined4 param_1);
 * Address  : 0xfd7e2 (Size: 94 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_stream_status(0x%X)'
 * Callers  : 1 -> 0x11d8c4
 * Callees  : 4 -> 0xf970b, 0xf9819, 0x115839, 0x11d471
 * Strings  :
 *   - 0x170dc3: "AIL_stream_status(0x%X)\r\n"
 ******************************************************************************/
undefined4 FUN_000fd7e2(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fd822;
      }
    }
  }
  bVar1 = false;
LAB_000fd822:
  if (bVar1) {
    FUN_000f970b();
  }
  uVar3 = FUN_0011d471(param_1);
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      FUN_00115acb(DAT_003df824,&DAT_00195d30,DAT_003df814 + 0xe);
      FUN_000f96cd();
    }
  }
  DAT_003df814 = DAT_003df814 + -1;
  return uVar3;
}

/******************************************************************************
 * Function : dk_AIL_set_stream_position_0fd840 (Ghidra: FUN_000fd840)
 * Prototype: void dk_AIL_set_stream_position_0fd840(undefined4 param_1,undefined4 param_2);
 * Address  : 0xfd840 (Size: 100 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_set_stream_position(0x%X,%d)'
 * Callers  : 1 -> 0x11d87a
 * Callees  : 4 -> 0xf9733, 0xf9819, 0x115839, 0x11d6cf
 * Strings  :
 *   - 0x170ddd: "AIL_set_stream_position(0x%X,%d)\r\n"
 ******************************************************************************/
void FUN_000fd840(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  
  DAT_003df814 = DAT_003df814 + 1;
  if ((DAT_003df818 != 0) && ((DAT_003df814 == 1 || (DAT_003df81c != 0)))) {
    iVar2 = FUN_00115839();
    if (iVar2 == 0) {
      iVar2 = FUN_000f9819();
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_000fd880;
      }
    }
  }
  bVar1 = false;
LAB_000fd880:
  if (bVar1) {
    FUN_000f9733();
  }
  FUN_0011d6cf(param_1,param_2);
  DAT_003df814 = DAT_003df814 + -1;
  return;
}

/******************************************************************************
 * Function : dk_AIL_startup_0fee88 (Ghidra: FUN_000fee88)
 * Prototype: undefined4 dk_AIL_startup_0fee88(void);
 * Address  : 0xfee88 (Size: 348 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : References 'AIL_startup()'
 * Callers  : 3 -> 0xec93f, 0xf8eec, 0xfe128
 * Callees  : 10 -> 0xf1abb, 0xf96a3, 0xf9819, 0xfed5e, 0xfedb1, 0x1145bf, 0x114f96, 0x115a4a, 0x11df55, 0x11e0a0
 * Strings  :
 *   - 0x1712d8: "MSS_DEBUG"
 *   - 0x1712e2: "MSS_SYS_DEBUG"
 *   - 0x1712f0: "-------------------------------------------------------------------------------\r\n"
 *   - 0x171342: "Miles Sound System usage script generated by MSS V3.6B\r\n"
 *   - 0x17137b: "Start time: "
 *   - 0x171388: "\r\n-------------------------------------------------------------------------------\r\n\r\n"
 *   - 0x1713de: "AIL_startup()\r\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fee88(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcStack_1c;
  char *apcStack_18 [2];
  
  if (DAT_00195d28 != 0) {
    return 0;
  }
  DAT_00195da0 = FUN_000fed8f;
  DAT_00195da4 = FUN_000feda2;
  DAT_00195da8 = FUN_000fedb1;
  DAT_00195dac = FUN_000fedbe;
  DAT_00195db0 = FUN_000fedeb;
  apcStack_18[0] = (char *)0xfeed6;
  FUN_000fed5e();
  ppcVar5 = apcStack_18;
  apcStack_18[0] = s_MSS_DEBUG_001712d8;
  DAT_003df818 = 0;
  DAT_003df81c = 0;
  pcStack_1c = (char *)0xfeef4;
  iVar2 = FUN_000fedb1();
  if (iVar2 != 0) {
    ppcVar5 = &pcStack_1c;
    pcStack_1c = s_MSS_SYS_DEBUG_001712e2;
    iVar3 = FUN_000fedb1();
    if (iVar3 != 0) {
      DAT_003df81c = 1;
    }
    DAT_003df824 = FUN_00115a4a(iVar2);
    if (DAT_003df824 != -1) {
      FUN_000f1abb();
      FUN_0011df55();
      pcVar6 = &DAT_003dfa14;
      pcVar4 = (char *)FUN_0011e0a0();
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      DAT_003dfa2c = 0;
      FUN_000f96a3(s__________________________________001712f0);
      FUN_000f96a3(s_Miles_Sound_System_usage_script_g_00171342);
      FUN_000f96a3(s_Start_time__0017137b);
      FUN_000f96a3(&DAT_003dfa14);
      FUN_000f96a3(s__________________________________00171388);
      FUN_001145bf();
      _DAT_003df820 = FUN_00114f96();
      DAT_003df818 = 1;
      DAT_003df814 = 1;
      FUN_000f9819();
      DAT_003df814 = 0;
      FUN_000f96a3(s_AIL_startup___001713de);
      DAT_00195d28 = 1;
      return 1;
    }
  }
  *(undefined4 *)((int)ppcVar5 + -4) = 0xfeeff;
  FUN_001145bf();
  DAT_00195d28 = 1;
  return 1;
}

/******************************************************************************
 * Function : dk_closing_socket_101c78 (Ghidra: FUN_00101c78)
 * Prototype: void dk_closing_socket_101c78(void);
 * Address  : 0x101c78 (Size: 661 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'CLOSING SOCKET %x'
 * Callers  : 2 -> 0x1032d8, 0x103464
 * Callees  : 6 -> 0xe6a10, 0xe8d4a, 0xf7786, 0xfed1d, 0xfed45, 0x103100
 * Strings  :
 *   - 0x1725cc: "CLOSING SOCKET %x\n"
 *   - 0x1725df: "SOCKET CLOSED\n"
 *   - 0x1725ee: "DEALLOCATED\n"
 *   - 0x1725fb: "DEINIT SUCCESSFULL\n"
 *   - 0x17260f: "DEINIT FAILED\n"
 ******************************************************************************/
void FUN_00101c78(void)

{
  char cVar1;
  undefined4 *in_EAX;
  undefined4 uVar2;
  ushort extraout_CX;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_110 [20];
  uint local_fc;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined4 local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_b4;
  undefined4 local_a4;
  uint local_98;
  undefined4 local_88;
  uint local_7c;
  undefined4 local_6c;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  undefined1 *local_3c;
  ushort local_34;
  
  if (*(int *)((int)in_EAX + 0x1e) == 0) {
    pcVar3 = s_DEINIT_FAILED_0017260f;
    pcVar4 = &DAT_003e0254;
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
    return;
  }
  if (in_EAX[2] != 0) {
    local_34 = *(ushort *)(in_EAX + 0x12);
    FUN_00103100(s_CLOSING_SOCKET__x_001725cc,local_34);
    FUN_000e6a10();
    local_fc = (uint)local_34;
    FUN_000e6a10();
    local_4c = (uint)extraout_CX;
    local_50 = 0x300;
    FUN_000fed1d();
    local_e0 = *(undefined2 *)((int)in_EAX + 0x36);
    local_e2 = *(undefined2 *)(in_EAX + 0xe);
    local_3c = auStack_110;
    FUN_000fed45();
    FUN_00103100(s_SOCKET_CLOSED_001725df);
    in_EAX[2] = 0;
  }
  if (*(short *)((int)in_EAX + 0x3e) != 0) {
    FUN_000e6a10();
    local_dc = 0x201;
    local_d8 = (uint)*(ushort *)((int)in_EAX + 0x3e);
    local_d4 = (uint)*(ushort *)(in_EAX + 0x10);
    local_d0 = (uint)*(ushort *)((int)in_EAX + 0x42);
    FUN_000f7786();
  }
  *(undefined4 *)((int)in_EAX + 0x1e) = 0;
  local_98 = (uint)*(ushort *)((int)in_EAX + 0x2a);
  local_a4 = 0x101;
  FUN_000f7786();
  *(undefined2 *)((int)in_EAX + 0x2a) = 0;
  local_7c = (uint)*(ushort *)(in_EAX + 0xb);
  local_88 = 0x101;
  FUN_000f7786();
  in_EAX[0xb] = 0;
  local_60 = (uint)*(ushort *)(in_EAX + 0xd);
  local_6c = 0x101;
  FUN_000f7786();
  *(undefined2 *)(in_EAX + 0xd) = 0;
  local_b4 = (uint)*(ushort *)(in_EAX + 0xc);
  FUN_000f7786();
  in_EAX[0xc] = 0;
  FUN_00103100(s_DEALLOCATED_001725ee);
  pcVar3 = s_DEINIT_SUCCESSFULL_001725fb;
  pcVar4 = &DAT_003e0254;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  uVar2 = FUN_000e8d4a();
  *(undefined2 *)((int)in_EAX + 0x46) = 0;
  *in_EAX = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_113c53 (Ghidra: FUN_00113c53)
 * Prototype: int sub_113c53(byte *param_1,int param_2,undefined4 *param_3);
 * Address  : 0x113c53 (Size: 144 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x113d48
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x172aa0: "0123456789ABCDEF"
 ******************************************************************************/
int FUN_00113c53(byte *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 1;
  uVar5 = 0;
  pbVar4 = param_1;
  do {
    uVar2 = 0xffffffff;
    pbVar6 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      bVar3 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar3 != 0);
    if (~uVar2 - 1 <= uVar5) {
LAB_00113cc7:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = param_1 + uVar5;
      }
      return local_18 * local_14;
    }
    bVar3 = *pbVar4;
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      bVar3 = bVar3 - 0x20;
    }
    if (bVar3 == 0x2d) {
      local_14 = -local_14;
    }
    else if (bVar3 != 0x20) {
      for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
        if (bVar3 == s_0123456789ABCDEF_00172aa0[iVar1]) {
          local_18 = local_18 * param_2 + iVar1;
          break;
        }
      }
      if (iVar1 == param_2) goto LAB_00113cc7;
    }
    pbVar4 = pbVar4 + 1;
    uVar5 = uVar5 + 1;
  } while( true );
}

/******************************************************************************
 * Function : dk_insufficient_memory_driver_descriptor_11419b (Ghidra: FUN_0011419b)
 * Prototype: int * dk_insufficient_memory_driver_descriptor_11419b(undefined4 *param_1,uint param_2);
 * Address  : 0x11419b (Size: 730 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Insufficient memory for driver descriptor'
 * Callers  : 1 -> 0xfa41b
 * Callees  : 11 -> 0xf9a8c, 0xf9aea, 0xf9c40, 0xf9f10, 0xf9f71, 0xfa039, 0xfa1a4, 0xfe896, 0xfe8c1, 0xfe8e5 ...
 * Strings  :
 *   - 0x172af5: "Insufficient memory for driver descriptor\n"
 *   - 0x172b20: "Insufficient low memory\n"
 *   - 0x172b39: "AIL3DIG"
 *   - 0x172b41: "AIL3MDI"
 *   - 0x172b49: "Invalid driver type\n"
 *   - 0x172b5e: "Out of driver handles\n"
 *   - 0x172b75: "Out of timer handles\n"
 ******************************************************************************/
int * FUN_0011419b(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar6;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  
  bVar1 = 0;
  piVar3 = (int *)FUN_000fe896(0x2c);
  if (piVar3 == (int *)0x0) {
    pcVar8 = s_Insufficient_memory_for_driver_d_00172af5;
    pcVar10 = &DAT_003e03f0;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    return (int *)0x0;
  }
  piVar3[3] = param_2;
  iVar4 = FUN_000fe8e5(param_2 + 0xf >> 4,piVar3 + 2,piVar3,piVar3 + 1);
  if (iVar4 == 0) {
    pcVar8 = s_Insufficient_low_memory_00172b20;
    pcVar10 = &DAT_003e03f0;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
  }
  else {
    puVar11 = (undefined4 *)piVar3[2];
    for (uVar7 = param_2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *param_1;
      param_1 = param_1 + (uint)bVar1 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar1 * -2 + 1;
    }
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + (uint)bVar1 * -2 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar1 * -2 + 1);
    }
    iVar4 = 7;
    pbVar12 = (byte *)piVar3[2];
    pbVar9 = &DAT_00172b39; /* 0x172b39="AIL3DIG" */
    piVar3[4] = (int)pbVar12;
    while( true ) {
      bVar1 = *pbVar9;
      bVar6 = *pbVar12;
      if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
        bVar1 = bVar1 - 0x20;
      }
      if ((0x60 < bVar6) && (bVar6 < 0x7b)) {
        bVar6 = bVar6 - 0x20;
      }
      bVar13 = bVar1 < bVar6;
      bVar14 = bVar1 == bVar6;
      if (!bVar14) break;
      bVar13 = false;
      bVar14 = true;
      if (bVar1 == 0) break;
      iVar4 = iVar4 + -1;
      bVar14 = true;
      if (iVar4 == 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
    cVar2 = !bVar14;
    if (!bVar13 && !bVar14) {
      cVar2 = -cVar2;
    }
    if (cVar2 == '\0') {
      piVar3[5] = 0;
    }
    else {
      iVar4 = 7;
      pbVar9 = &DAT_00172b41; /* 0x172b41="AIL3MDI" */
      pbVar12 = (byte *)piVar3[4];
      while( true ) {
        bVar1 = *pbVar9;
        bVar6 = *pbVar12;
        if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
          bVar1 = bVar1 - 0x20;
        }
        if ((0x60 < bVar6) && (bVar6 < 0x7b)) {
          bVar6 = bVar6 - 0x20;
        }
        bVar13 = bVar1 < bVar6;
        bVar14 = bVar1 == bVar6;
        if (!bVar14) break;
        bVar13 = false;
        bVar14 = true;
        if (bVar1 == 0) break;
        iVar4 = iVar4 + -1;
        bVar14 = true;
        if (iVar4 == 0) break;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar12 + 1;
      }
      cVar2 = !bVar14;
      if (!bVar13 && !bVar14) {
        cVar2 = -cVar2;
      }
      if (cVar2 != '\0') {
        pcVar8 = s_Invalid_driver_type_00172b49;
        pcVar10 = &DAT_003e03f0;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar10 = cVar2;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_000fe961(piVar3[2],*piVar3,piVar3[1]);
        goto LAB_00114359;
      }
      piVar3[5] = 1;
    }
    iVar4 = 0;
    for (uVar7 = 0; uVar7 < 0x10; uVar7 = uVar7 + 1) {
      if (*(int *)((int)&DAT_003e03b0 + iVar4) == 0) {
        *(int **)((int)&DAT_003e03b0 + iVar4) = piVar3;
        *(short *)(piVar3[4] + 0x32) = (short)uVar7;
        break;
      }
      iVar4 = iVar4 + 4;
    }
    if (uVar7 == 0x10) {
      pcVar8 = s_Out_of_driver_handles_00172b5e;
      pcVar10 = &DAT_003e03f0;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar10 = cVar2;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
    }
    else {
      *(undefined2 *)(piVar3[4] + 0x30) = 0;
      piVar3[6] = 0;
      piVar3[7] = -1;
      uVar5 = FUN_000f9a8c(0x66);
      *(undefined4 *)(piVar3[4] + 0x36) = uVar5;
      FUN_000f9aea(0x66,(uint)*(ushort *)(piVar3[4] + 0x34) + *piVar3);
      piVar3[9] = 0;
      piVar3[10] = 0;
      FUN_000f9c40(piVar3,0x300,0,0);
      if (*(short *)(piVar3[4] + 0x2e) < 1) {
        piVar3[8] = -1;
        return piVar3;
      }
      iVar4 = FUN_000f9f10(FUN_00113c03);
      piVar3[8] = iVar4;
      if (iVar4 != -1) {
        FUN_000f9f71(iVar4,piVar3);
        FUN_000fa039(piVar3[8],(int)*(short *)(piVar3[4] + 0x2e));
        FUN_000fa1a4(piVar3[8]);
        return piVar3;
      }
      pcVar8 = s_Out_of_timer_handles_00172b75;
      pcVar10 = &DAT_003e03f0;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar10 = cVar2;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_000f9aea(0x66,*(undefined4 *)(piVar3[4] + 0x36));
    }
    FUN_000fe961(piVar3[2],*piVar3,piVar3[1]);
  }
LAB_00114359:
  FUN_000fe8c1(piVar3);
  return (int *)0x0;
}

/******************************************************************************
 * Function : dk_bf42_load_sound_bank_114852 (Ghidra: FUN_00114852)
 * Prototype: undefined8 dk_bf42_load_sound_bank_114852(void);
 * Address  : 0x114852 (Size: 153 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'BF42 - load sound bank %d'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xe7714, 0xf9610
 * Strings  :
 *   - 0x172b8c: "BF42 - load sound bank %d\n"
 *   - 0x172c5d: "BF47 - load sound bank - failed - Sound not installed\n"
 *   - 0x172c94: "BF47 - load sound bank - failed - SoundAble = 0\n"
 *   - 0x172cc5: "BF47 - load sound bank - failed - LoadSounds disabled\n"
 *   - 0x172cfc: "BF47 - load sound bank - failed - already loaded\n"
 ******************************************************************************/
undefined8 FUN_00114852(void)

{
  short sVar1;
  byte in_AL;
  int iVar2;
  undefined4 in_EDX;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  bVar4 = 0;
  FUN_000e7714(&DAT_003df651,s_BF42___load_sound_bank__d_00172b8c,in_AL);
  FUN_000f9610();
  if ((((DAT_003df514 == '\0') || (DAT_00195d18 == '\0')) || ((int)DAT_00195d1d == (uint)in_AL)) ||
     (DAT_003df515 != '\0')) {
    if (DAT_003df514 == '\0') {
      pcVar6 = s_BF47___load_sound_bank___failed___00172c5d;
    }
    else if (DAT_00195d18 == '\0') {
      pcVar6 = s_BF47___load_sound_bank___failed___00172c94;
    }
    else if (DAT_003df515 == '\0') {
      pcVar6 = s_BF47___load_sound_bank___failed___00172cfc;
    }
    else {
      pcVar6 = s_BF47___load_sound_bank___failed___00172cc5;
    }
  }
  else {
    FUN_000f0730();
    iVar2 = FUN_000e8980();
    if (iVar2 != -1) {
      FUN_000e8a98();
      FUN_000e8a34();
      FUN_000e8a80();
      FUN_000e8a34();
      FUN_000e8a80();
      iVar2 = 10;
      pcVar3 = FUN_00114818;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        sVar1 = *(short *)pcVar3;
        pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 2;
      } while (DAT_003df524 != sVar1);
                    /* WARNING: Could not recover jumptable at 0x0011499b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(iVar2 * 4 + 0x11482a))();
      return uVar5;
    }
    pcVar6 = s_BF46___load_sound_bank___failed___00172c2d;
  }
  FUN_000e7714(&DAT_003df651,pcVar6);
  FUN_000f9610();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_114cf2 (Ghidra: FUN_00114cf2)
 * Prototype: void sub_114cf2(void);
 * Address  : 0x114cf2 (Size: 180 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xf949a
 * Callees  : 7 -> 0xe6a10, 0xe7714, 0xe8980, 0xe8a1c, 0xe8a34, 0xe8a80, 0xe8a98
 * Strings  :
 *   - 0x172d2e: "%s/SOUND.DAT"
 ******************************************************************************/
void FUN_00114cf2(void)

{
  short sVar1;
  short in_AX;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  byte bVar5;
  
  bVar5 = 0;
  FUN_000e7714(&DAT_003e05c4,s__s_SOUND_DAT_00172d2e,&DAT_003deb3c); /* 0x172d2e="%s/SOUND.DAT" */
  iVar2 = FUN_000e8980();
  if (iVar2 == -1) {
    return;
  }
  uVar3 = FUN_000e8a98();
  FUN_000e6a10(uVar3);
  FUN_000e8a34();
  FUN_000e8a34();
  FUN_000e8a80();
  FUN_000e8a1c(uVar3,0);
  iVar2 = 10;
  pcVar4 = FUN_00114cb8;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    sVar1 = *(short *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 2;
  } while (in_AX != sVar1);
                    /* WARNING: Could not recover jumptable at 0x00114eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 * 4 + 0x114cca))();
  return;
}

/******************************************************************************
 * Function : dk_could_allocate_memory_driver_116704 (Ghidra: FUN_00116704)
 * Prototype: undefined4 * dk_could_allocate_memory_driver_116704(int param_1,undefined4 *param_2);
 * Address  : 0x116704 (Size: 1458 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Could not allocate memory for driver'
 * Callers  : 2 -> 0x116cb6, 0x116d7f
 * Callees  : 16 -> 0xf9bc6, 0xf9c40, 0xf9f10, 0xf9f71, 0xfa039, 0xfa1a4, 0xfa3bd, 0xfe896, 0xfe8c1, 0xfe8e5 ...
 * Strings  :
 *   - 0x172d7f: "Could not allocate memory for driver\n"
 *   - 0x172da5: "HDIG"
 *   - 0x172daa: ".DIG driver required\n"
 *   - 0x172dc0: "Digital sound hardware not found\n"
 *   - 0x172de2: "Could not allocate DMA buffers\n"
 *   - 0x172e02: "Could not allocate build buffer\n"
 *   - 0x172e23: "Could not allocate SAMPLE structures\n"
 *   - 0x172e49: "HSAM"
 *   - 0x172e4e: "Out of timer handles\n"
 ******************************************************************************/
undefined4 * FUN_00116704(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined4 auStackY_281c [2541];
  undefined4 local_58;
  ushort local_40;
  ushort local_3e;
  ushort local_3c;
  ushort local_3a;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  
  bVar12 = 0;
  FUN_00115bb6();
  local_18 = (undefined4 *)FUN_000fe896(0x90);
  if (local_18 == (undefined4 *)0x0) {
    pcVar6 = s_Could_not_allocate_memory_for_dr_00172d7f;
    pcVar7 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    return (undefined4 *)0x0;
  }
  puVar2 = &DAT_00172da5; /* 0x172da5="HDIG" */
  puVar8 = local_18;
  for (iVar4 = 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + (uint)bVar12 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar12 * -2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar12 * -2 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + (uint)bVar12 * -2 + 1);
  }
  local_18[1] = param_1;
  local_14 = local_18;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_000f9c40(param_1,0x301,0,&local_40);
    local_18[2] = (uint)local_3a * 0x10 + (uint)local_40;
    iVar4 = (uint)local_3c * 0x10 + (uint)local_3e;
    local_18[3] = iVar4;
    local_18[0xf] = 0xffffffff;
    local_18[0x16] = 0;
    local_1c = 0;
    local_18[0x17] = 0;
    local_18[0x1a] = 0;
    local_18[0xe] = iVar4 + 8;
    local_18[0x1b] = 0x7f;
    puVar2 = &DAT_003e0540;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + (uint)bVar12 * -2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar2 = 0xff;
      puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar12 * -2 + 1);
    }
    if (param_2 != (undefined4 *)0x0) {
      puVar2 = param_2 + (uint)bVar12 * -2 + 1;
      DAT_003e0540 = *param_2;
      puVar11 = &DAT_003e0548 + (uint)bVar12 * -2 + (uint)bVar12 * -2;
      puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
      (&DAT_003e0544)[(uint)bVar12 * -2] = *puVar2;
      puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
      puVar2 = puVar8 + (uint)bVar12 * -2 + 1;
      *puVar11 = *puVar8;
      *puVar9 = *puVar2;
      puVar9[(uint)bVar12 * -2 + 1] = puVar2[(uint)bVar12 * -2 + 1];
      (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (puVar2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      iVar4 = FUN_001165a6(local_18,param_2);
      if (iVar4 != 0) {
        local_1c = 1;
        puVar2 = param_2 + (uint)bVar12 * -2 + 1;
        local_58 = *param_2;
        puVar11 = (undefined4 *)(&stack0xffffffb0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
        *(undefined4 *)(&stack0xffffffac + (uint)bVar12 * -8) = *puVar2;
        puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
        puVar2 = puVar8 + (uint)bVar12 * -2 + 1;
        *puVar11 = *puVar8;
        *puVar9 = *puVar2;
        puVar9[(uint)bVar12 * -2 + 1] = puVar2[(uint)bVar12 * -2 + 1];
        (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
             (puVar2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      }
    }
    if ((local_1c == 0) &&
       (puVar2 = (undefined4 *)FUN_000fa3bd(local_14[1]), puVar2 != (undefined4 *)0x0)) {
      puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
      DAT_003e0540 = *puVar2;
      puVar9 = &DAT_003e0548 + (uint)bVar12 * -2 + (uint)bVar12 * -2;
      puVar11 = puVar8 + (uint)bVar12 * -2 + 1;
      (&DAT_003e0544)[(uint)bVar12 * -2] = *puVar8;
      puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar8 = puVar11 + (uint)bVar12 * -2 + 1;
      *puVar9 = *puVar11;
      *puVar10 = *puVar8;
      puVar10[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
      (puVar10 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (puVar8 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      iVar4 = FUN_001165a6(local_14,puVar2);
      if (iVar4 != 0) {
        local_1c = 1;
        puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
        local_58 = *puVar2;
        puVar11 = (undefined4 *)(&stack0xffffffb0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
        puVar2 = puVar8 + (uint)bVar12 * -2 + 1;
        *(undefined4 *)(&stack0xffffffac + (uint)bVar12 * -8) = *puVar8;
        puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
        puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
        *puVar11 = *puVar2;
        *puVar9 = *puVar8;
        puVar9[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
        (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
             (puVar8 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      }
    }
    if ((local_1c == 0) && (DAT_003e0534 == 1)) {
      local_28 = 0;
      for (local_20 = 0; iVar4 = *(int *)(local_14[1] + 0x10),
          local_20 < (int)(uint)*(ushort *)(iVar4 + 0x10); local_20 = local_20 + 1) {
        puVar2 = (undefined4 *)
                 (local_28 +
                 (*(uint *)(iVar4 + 0xc) & 0xffff) + (*(uint *)(iVar4 + 0xc) >> 0x10) * 0x10);
        if (local_20 == 0) {
          puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
          DAT_003e0540 = *puVar2;
          puVar9 = &DAT_003e0548 + (uint)bVar12 * -2 + (uint)bVar12 * -2;
          puVar11 = puVar8 + (uint)bVar12 * -2 + 1;
          (&DAT_003e0544)[(uint)bVar12 * -2] = *puVar8;
          puVar10 = puVar9 + (uint)bVar12 * -2 + 1;
          puVar8 = puVar11 + (uint)bVar12 * -2 + 1;
          *puVar9 = *puVar11;
          *puVar10 = *puVar8;
          puVar10[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
          (puVar10 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
               (puVar8 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
        }
        iVar4 = FUN_001165a6(local_14,puVar2);
        if (iVar4 != 0) {
          local_1c = 1;
          puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
          local_58 = *puVar2;
          puVar11 = (undefined4 *)(&stack0xffffffb0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
          puVar2 = puVar8 + (uint)bVar12 * -2 + 1;
          *(undefined4 *)(&stack0xffffffac + (uint)bVar12 * -8) = *puVar8;
          puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
          puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
          *puVar11 = *puVar2;
          *puVar9 = *puVar8;
          puVar9[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
          (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
               (puVar8 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
          break;
        }
        local_28 = local_28 + 0x18;
      }
    }
    if (local_1c == 0) {
      pcVar6 = s_Digital_sound_hardware_not_found_00172dc0;
LAB_00116939:
      pcVar7 = &DAT_003e03f0;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
    }
    else {
      DAT_003e0540 = local_58;
      puVar11 = &DAT_003e0548 + (uint)bVar12 * -2 + (uint)bVar12 * -2;
      puVar2 = (undefined4 *)(&stack0xffffffb0 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      (&DAT_003e0544)[(uint)bVar12 * -2] = *(undefined4 *)(&stack0xffffffac + (uint)bVar12 * -8);
      puVar9 = puVar11 + (uint)bVar12 * -2 + 1;
      puVar8 = puVar2 + (uint)bVar12 * -2 + 1;
      *puVar11 = *puVar2;
      *puVar9 = *puVar8;
      puVar9[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
      (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (puVar8 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      iVar4 = DAT_003e04f8;
      if (DAT_003e0538 != 0) {
        iVar4 = 0x2000;
      }
      local_14[0xb] = 0;
      iVar5 = iVar4 + 0xf >> 0x1f;
      do {
        iVar3 = FUN_000fe8e5((int)((iVar4 + 0xf + iVar5 * -0x10) - (uint)(iVar5 << 3 < 0)) >> 4,
                             &local_2c,&local_30,&local_34);
        if (iVar3 == 0) {
          pcVar6 = s_Could_not_allocate_DMA_buffers_00172de2;
          goto LAB_00116939;
        }
        if (local_14[0xb] != 0) {
          FUN_000fe961(local_14[0xb],local_14[9],local_14[10]);
        }
        local_14[0xb] = local_2c;
        local_14[9] = local_30;
        local_14[10] = local_34;
      } while ((local_30 >> 0xc & 0xf0000) != (((local_30 >> 0xc) + iVar4) - 1 & 0xf0000));
      iVar4 = FUN_00116209(local_14);
      if (iVar4 != 0) {
        FUN_000f9c40(local_14[1],0x305,0,0);
        puVar2 = local_14;
        *(undefined4 *)(local_14[1] + 0x18) = 1;
        local_14[0x13] = (int)local_14[5] / (int)(local_14[0x10] * local_14[0x11]);
        local_14[0x12] = (int)local_14[5] / (int)local_14[0x11];
        iVar4 = (int)local_14[5] / (int)local_14[0x11] << 2;
        local_14[0x14] = iVar4;
        iVar5 = FUN_000fe896(iVar4);
        puVar2[0x15] = iVar5;
        iVar4 = DAT_003e0500;
        if (iVar5 != 0) {
          puVar2[0x19] = DAT_003e0500;
          iVar4 = FUN_000fe896(iVar4 * 0x8a8);
          puVar8 = local_14;
          puVar2[0x18] = iVar4;
          if (iVar4 == 0) {
            pcVar6 = s_Could_not_allocate_SAMPLE_struct_00172e23;
            pcVar7 = &DAT_003e03f0;
            do {
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              *pcVar7 = cVar1;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            if (*(int *)(param_1 + 0x1c) != -1) {
              FUN_000f9bc6(*(undefined4 *)(param_1 + 0x1c));
            }
            FUN_000f9c40(local_14[1],0x306,0,0);
            *(undefined4 *)(local_14[1] + 0x18) = 0;
            FUN_000fe961(local_14[0xb],local_14[9],local_14[10]);
          }
          else {
            local_24 = 0;
            iVar4 = 0;
            while (local_24 < (int)local_14[0x19]) {
              puVar2 = &DAT_00172e49; /* 0x172e49="HSAM" */
              puVar11 = (undefined4 *)(local_14[0x18] + iVar4);
              for (iVar5 = 1; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar11 = *puVar2;
                puVar2 = puVar2 + (uint)bVar12 * -2 + 1;
                puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
              }
              for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                *(undefined1 *)puVar11 = *(undefined1 *)puVar2;
                puVar2 = (undefined4 *)((int)puVar2 + (uint)bVar12 * -2 + 1);
                puVar11 = (undefined4 *)((int)puVar11 + (uint)bVar12 * -2 + 1);
              }
              *(undefined4 *)(iVar4 + 8 + local_14[0x18]) = 1;
              local_24 = local_24 + 1;
              *(undefined4 **)(iVar4 + 4 + local_14[0x18]) = local_14;
              iVar4 = iVar4 + 0x8a8;
            }
            iVar4 = FUN_000f9f10(FUN_00116069);
            puVar8[4] = iVar4;
            if (iVar4 != -1) {
              FUN_000f9f71(iVar4,puVar8);
              FUN_000fa039(puVar8[4],DAT_003e04f0);
              FUN_000fa1a4(puVar8[4]);
              *(code **)(puVar8[1] + 0x24) = FUN_00116687;
              *(undefined4 **)(puVar8[1] + 0x28) = puVar8;
              FUN_001243ce(puVar8);
              FUN_0012433b(puVar8,0);
              FUN_0012433b(puVar8,1);
              return puVar8;
            }
            pcVar6 = s_Out_of_timer_handles_00172e4e;
            pcVar7 = &DAT_003e03f0;
            do {
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              *pcVar7 = cVar1;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            if (*(int *)(param_1 + 0x1c) != -1) {
              FUN_000f9bc6(*(undefined4 *)(param_1 + 0x1c));
            }
            FUN_000f9c40(local_14[1],0x306,0,0);
            *(undefined4 *)(local_14[1] + 0x18) = 0;
            FUN_000fe961(local_14[0xb],local_14[9],local_14[10]);
            FUN_000fe8c1(local_14[0x18]);
          }
          FUN_000fe8c1(local_14[0x15]);
          goto LAB_00116b64;
        }
        pcVar6 = s_Could_not_allocate_build_buffer_00172e02;
        pcVar7 = &DAT_003e03f0;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar7 = cVar1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (*(int *)(param_1 + 0x1c) != -1) {
          FUN_000f9bc6(*(undefined4 *)(param_1 + 0x1c));
        }
        FUN_000f9c40(local_14[1],0x306,0,0);
        *(undefined4 *)(local_14[1] + 0x18) = 0;
      }
      FUN_000fe961(local_14[0xb],local_14[9],local_14[10]);
    }
  }
  else {
    pcVar6 = s__DIG_driver_required_00172daa;
    pcVar7 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
LAB_00116b64:
  FUN_000fe8c1(local_14);
  return (undefined4 *)0x0;
}

/******************************************************************************
 * Function : dk_dig_ini_116db9 (Ghidra: FUN_00116db9)
 * Prototype: undefined4 dk_dig_ini_116db9(int *param_1);
 * Address  : 0x116db9 (Size: 108 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'DIG.INI'
 * Callers  : 1 -> 0xfa535
 * Callees  : 2 -> 0xf9d16, 0xfa593
 * Strings  :
 *   - 0x172e7b: "DIG.INI"
 *   - 0x172e83: "Unable to open file DIG.INI\n"
 ******************************************************************************/
undefined4 FUN_00116db9(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  undefined1 local_28 [24];
  
  iVar2 = FUN_000f9d16(local_128,s_DIG_INI_00172e7b);
  if (iVar2 == 0) {
    pcVar4 = s_Unable_to_open_file_DIG_INI_00172e83;
    pcVar5 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_000fa593(local_a8,local_28);
    *param_1 = iVar2;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

/******************************************************************************
 * Function : dk_out_sample_handles_116e63 (Ghidra: FUN_00116e63)
 * Prototype: int dk_out_sample_handles_116e63(int param_1);
 * Address  : 0x116e63 (Size: 113 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Out of sample handles'
 * Callers  : 1 -> 0xfa655
 * Callees  : 3 -> 0xf9a82, 0xf9a87, 0xfa77e
 * Strings  :
 *   - 0x172ea0: "Out of sample handles\n"
 ******************************************************************************/
int FUN_00116e63(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_000f9a82();
  iVar2 = 0;
  for (iVar3 = 0;
      (iVar2 < *(int *)(param_1 + 100) && (*(int *)(*(int *)(param_1 + 0x60) + 8 + iVar3) != 1));
      iVar3 = iVar3 + 0x8a8) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == *(int *)(param_1 + 100)) {
    pcVar4 = s_Out_of_sample_handles_00172ea0;
    pcVar5 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_000f9a87();
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x60) + iVar2 * 0x8a8;
  FUN_000fa77e(iVar2);
  FUN_000f9a87();
  return iVar2;
}

/******************************************************************************
 * Function : dk_unrecognized_digital_audio_file_1179d4 (Ghidra: FUN_001179d4)
 * Prototype: int dk_unrecognized_digital_audio_file_1179d4(undefined4 param_1,byte *param_2,int param_3);
 * Address  : 0x1179d4 (Size: 381 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Unrecognized digital audio file type'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0xfa655, 0xfa77e, 0xfb3a4, 0x117561, 0x1175d0, 0x117866
 * Strings  :
 *   - 0x172ec2: "Creative"
 *   - 0x172ecb: "WAVE"
 *   - 0x172ed0: "Unrecognized digital audio file type\n"
 *   - 0x172ef6: "Invalid or missing data block\n"
 ******************************************************************************/
int FUN_001179d4(undefined4 param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  bool bVar10;
  
  FUN_00117561();
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  iVar4 = 8;
  pcVar5 = s_Creative_00172ec2;
  pbVar6 = param_2;
  while( true ) {
    bVar1 = *pcVar5;
    bVar3 = *pbVar6;
    if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
      bVar1 = bVar1 - 0x20;
    }
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      bVar3 = bVar3 - 0x20;
    }
    bVar9 = bVar1 < bVar3;
    bVar10 = bVar1 == bVar3;
    if (!bVar10) break;
    bVar9 = false;
    bVar10 = true;
    if (bVar1 == 0) break;
    iVar4 = iVar4 + -1;
    bVar10 = true;
    if (iVar4 == 0) break;
    pcVar5 = pcVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  cVar2 = !bVar10;
  if (!bVar9 && !bVar10) {
    cVar2 = -cVar2;
  }
  if (cVar2 == '\0') {
    bVar10 = false;
  }
  else {
    iVar4 = 4;
    pbVar6 = &DAT_00172ecb; /* 0x172ecb="WAVE" */
    pbVar7 = param_2 + 8;
    while( true ) {
      bVar1 = *pbVar6;
      bVar3 = *pbVar7;
      if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
        bVar1 = bVar1 - 0x20;
      }
      if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
        bVar3 = bVar3 - 0x20;
      }
      bVar9 = bVar1 < bVar3;
      bVar10 = bVar1 == bVar3;
      if (!bVar10) break;
      bVar9 = false;
      bVar10 = true;
      if (bVar1 == 0) break;
      iVar4 = iVar4 + -1;
      bVar10 = true;
      if (iVar4 == 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    }
    cVar2 = !bVar10;
    if (!bVar9 && !bVar10) {
      cVar2 = -cVar2;
    }
    if (cVar2 != '\0') {
      pcVar5 = s_Unrecognized_digital_audio_file_t_00172ed0;
      goto LAB_00117a79;
    }
    bVar10 = true;
  }
  iVar4 = FUN_000fa655(param_1);
  if (iVar4 == 0) {
    return 0;
  }
  FUN_000fa77e(iVar4);
  *(undefined4 *)(iVar4 + 0x888) = 0;
  if (bVar10) {
    if (bVar10) {
      *(undefined4 *)(iVar4 + 0x8a0) = 1;
      FUN_000fb3a4(iVar4,FUN_0011799c);
      FUN_00117866(param_2,iVar4);
    }
  }
  else {
    *(byte **)(iVar4 + 0x88c) = param_2 + *(ushort *)(param_2 + 0x14);
    *(int *)(iVar4 + 0x898) = param_3;
    *(undefined4 *)(iVar4 + 0x8a0) = 1;
    *(uint *)(iVar4 + 0x89c) = (uint)(param_3 == -1);
    FUN_000fb3a4(iVar4,FUN_00117852);
    FUN_001175d0(iVar4,0);
  }
  if (*(int *)(iVar4 + 0x8a0) != -1) {
    return iVar4;
  }
  pcVar5 = s_Invalid_or_missing_data_block_00172ef6;
LAB_00117a79:
  pcVar8 = &DAT_003e03f0;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar8 = cVar2;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  return 0;
}

/******************************************************************************
 * Function : dk_unrecognized_digital_audio_file_117b51 (Ghidra: FUN_00117b51)
 * Prototype: longlong dk_unrecognized_digital_audio_file_117b51(int param_1,byte *param_2,int param_3);
 * Address  : 0x117b51 (Size: 305 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Unrecognized digital audio file type'
 * Callers  : 1 -> 0xfa7dc
 * Callees  : 2 -> 0x1175d0, 0x117866
 * Strings  :
 *   - 0x172ec2: "Creative"
 *   - 0x172ecb: "WAVE"
 *   - 0x172f15: "Unrecognized digital audio file type\n"
 *   - 0x172f3b: "Invalid or missing data block\n"
 ******************************************************************************/
longlong FUN_00117b51(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  
  puVar5 = (undefined1 *)0x0;
  if (param_2 == (byte *)0x0) goto LAB_00117c02;
  iVar4 = 8;
  pcVar6 = s_Creative_00172ec2;
  pbVar8 = param_2;
  while( true ) {
    bVar1 = *pcVar6;
    bVar3 = *pbVar8;
    if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
      bVar1 = bVar1 - 0x20;
    }
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      bVar3 = bVar3 - 0x20;
    }
    bVar10 = bVar1 < bVar3;
    bVar11 = bVar1 == bVar3;
    if (!bVar11) break;
    bVar10 = false;
    bVar11 = true;
    if (bVar1 == 0) break;
    iVar4 = iVar4 + -1;
    bVar11 = true;
    if (iVar4 == 0) break;
    pcVar6 = pcVar6 + 1;
    pbVar8 = pbVar8 + 1;
  }
  cVar2 = !bVar11;
  if (!bVar10 && !bVar11) {
    cVar2 = -cVar2;
  }
  if (cVar2 == '\0') {
    bVar11 = false;
LAB_00117c0e:
    if (bVar11) {
      if (bVar11) {
        *(undefined4 *)(param_1 + 0x8a0) = 0;
        FUN_00117866(param_2,param_1);
        param_2 = extraout_EDX_00;
      }
    }
    else {
      *(byte **)(param_1 + 0x88c) = param_2 + *(ushort *)(param_2 + 0x14);
      *(int *)(param_1 + 0x898) = param_3;
      *(undefined4 *)(param_1 + 0x8a0) = 0;
      *(uint *)(param_1 + 0x89c) = (uint)(param_3 == -1);
      FUN_001175d0(param_1,0);
      param_2 = extraout_EDX;
    }
    if (*(int *)(param_1 + 0x8a0) != -1) {
      return CONCAT44(param_2,1);
    }
    pcVar6 = s_Invalid_or_missing_data_block_00172f3b;
  }
  else {
    iVar4 = 4;
    pbVar7 = &DAT_00172ecb; /* 0x172ecb="WAVE" */
    pbVar8 = param_2 + 8;
    while( true ) {
      bVar1 = *pbVar7;
      bVar3 = *pbVar8;
      if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
        bVar1 = bVar1 - 0x20;
      }
      if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
        bVar3 = bVar3 - 0x20;
      }
      bVar10 = bVar1 < bVar3;
      bVar11 = bVar1 == bVar3;
      if (!bVar11) break;
      bVar10 = false;
      bVar11 = true;
      if (bVar1 == 0) break;
      iVar4 = iVar4 + -1;
      bVar11 = true;
      if (iVar4 == 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    }
    cVar2 = !bVar11;
    if (!bVar10 && !bVar11) {
      cVar2 = -cVar2;
    }
    if (cVar2 == '\0') {
      bVar11 = true;
      goto LAB_00117c0e;
    }
    pcVar6 = s_Unrecognized_digital_audio_file_t_00172f15;
  }
  pcVar9 = &DAT_003e03f0;
  puVar5 = &DAT_003e03f0;
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar9 = cVar2;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
LAB_00117c02:
  return ZEXT48(puVar5) << 0x20;
}

/******************************************************************************
 * Function : dk_could_allocate_memory_driver_1193e6 (Ghidra: FUN_001193e6)
 * Prototype: ushort * dk_could_allocate_memory_driver_1193e6(int param_1,undefined4 *param_2);
 * Address  : 0x1193e6 (Size: 1672 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Could not allocate memory for driver'
 * Callers  : 2 -> 0x119a6e, 0x119bb5
 * Callees  : 13 -> 0xf9c40, 0xf9cb3, 0xf9f10, 0xf9f71, 0xfa039, 0xfa1a4, 0xfa3bd, 0xfe896, 0xfe8c1, 0x117ccb ...
 * Strings  :
 *   - 0x172f89: "Could not allocate memory for driver\n"
 *   - 0x172faf: "HMDI"
 *   - 0x172fb4: ".MDI driver required\n"
 *   - 0x196d10: "FATMAN"
 *   - 0x172fca: "XMIDI sound hardware not found\n"
 *   - 0x172fea: "Could not initialize instrument manager\n"
 *   - 0x173013: "Could not allocate SEQUENCE structures\n"
 *   - 0x17303b: "HSEQ"
 *   - 0x173040: "Out of timer handles\n"
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

ushort * FUN_001193e6(int param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort **ppuVar10;
  ushort **ppuVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  byte bVar19;
  ushort *apuStackY_2810 [2541];
  ushort *puStack_50;
  undefined4 local_4c;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  
  bVar19 = 0;
  puStack_50 = (ushort *)0x1193f2;
  FUN_00117ccb();
  puStack_50 = (ushort *)0x1d8;
  local_18 = (ushort *)FUN_000fe896();
  if (local_18 == (ushort *)0x0) {
    pcVar12 = s_Could_not_allocate_memory_for_dr_00172f89;
    pcVar13 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar13 = cVar1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    return (ushort *)0x0;
  }
  pcVar12 = (char *)&DAT_00172faf; /* 0x172faf="HMDI" */
  puVar3 = local_18;
  for (iVar6 = 1; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)puVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + (uint)bVar19 * -8 + 4;
    puVar3 = puVar3 + (uint)bVar19 * -4 + 2;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(char *)puVar3 = *pcVar12;
    pcVar12 = pcVar12 + (uint)bVar19 * -2 + 1;
    puVar3 = (ushort *)((int)puVar3 + (uint)bVar19 * -2 + 1);
  }
  *(int *)(local_18 + 2) = param_1;
  local_14 = local_18;
  if (*(int *)(param_1 + 0x14) != 1) {
    pcVar12 = s__MDI_driver_required_00172fb4;
    pcVar13 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar13 = cVar1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    ppuVar11 = &stack0xffffffb0;
    puStack_50 = local_18;
    goto LAB_001196d8;
  }
  puStack_50 = &local_34;
  FUN_000f9c40(param_1,0x301,0);
  *(uint *)(local_18 + 4) = (uint)local_2e * 0x10 + (uint)local_34;
  *(uint *)(local_18 + 6) = (uint)local_30 * 0x10 + (uint)local_32;
  puVar3 = (ushort *)
           ((**(uint **)(local_18 + 4) & 0xffff) + (**(uint **)(local_18 + 4) >> 0x10) * 0x10);
  ppuVar10 = (ushort **)&stack0xffffffb4;
  if ((puVar3 != (ushort *)0x0) && (ppuVar10 = (ushort **)&stack0xffffffb4, (char)*puVar3 != '\0'))
  {
    puStack_50 = puVar3;
    pcVar12 = (char *)(*DAT_00195da8)();
    ppuVar10 = &stack0xffffffb0;
    if ((pcVar12 != (char *)0x0) && (ppuVar10 = &stack0xffffffb0, *pcVar12 != '\0')) {
      uVar7 = 0xffffffff;
      pcVar13 = pcVar12;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + (uint)bVar19 * -2 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      if (0x7f < (int)uVar7) {
        uVar7 = 0x7f;
      }
      pcVar13 = *(char **)(local_14 + 6);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + (uint)bVar19 * -8 + 4;
        pcVar13 = pcVar13 + (uint)bVar19 * -8 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + (uint)bVar19 * -2 + 1;
        pcVar13 = pcVar13 + (uint)bVar19 * -2 + 1;
      }
      *(undefined1 *)(uVar7 + *(int *)(local_14 + 6)) = 0;
      ppuVar10 = &stack0xffffffb0;
    }
  }
  pcVar12 = (char *)((*(uint *)(*(int *)(local_14 + 4) + 4) & 0xffff) +
                    (*(uint *)(*(int *)(local_14 + 4) + 4) >> 0x10) * 0x10);
  if ((pcVar12 == (char *)0x0) || (*pcVar12 == '\0')) {
    *(undefined1 *)(*(int *)(local_14 + 6) + 0x80) = 0;
  }
  else {
    pcVar13 = s_FATMAN_00196d10;
    pcVar14 = (char *)(*(int *)(local_14 + 6) + 0x80);
    do {
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *pcVar14 = cVar1;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    bVar19 = 0;
    iVar6 = -1;
    pcVar13 = (char *)(*(int *)(local_14 + 6) + 0x80);
    do {
      pcVar14 = pcVar13;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar14 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar13 = cVar1;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
  }
  local_1c = 0;
  puVar4 = &DAT_003e0540;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + (uint)bVar19 * -2 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar4 = 0xff;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar19 * -2 + 1);
  }
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 **)((int)ppuVar10 + -4) = param_2;
    *(ushort **)((int)ppuVar10 + -8) = local_14;
    puVar4 = param_2 + (uint)bVar19 * -2 + 1;
    DAT_003e0540 = *param_2;
    puVar15 = &DAT_003e0548 + (uint)bVar19 * -2 + (uint)bVar19 * -2;
    puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
    (&DAT_003e0544)[(uint)bVar19 * -2] = *puVar4;
    puVar16 = puVar15 + (uint)bVar19 * -2 + 1;
    puVar4 = puVar18 + (uint)bVar19 * -2 + 1;
    *puVar15 = *puVar18;
    *puVar16 = *puVar4;
    puVar16[(uint)bVar19 * -2 + 1] = puVar4[(uint)bVar19 * -2 + 1];
    (puVar16 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
         (puVar4 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
    *(undefined4 *)((int)ppuVar10 + -0xc) = 0x1195c7;
    iVar6 = FUN_001192dd();
    if (iVar6 != 0) {
      local_1c = 1;
      puVar4 = param_2 + (uint)bVar19 * -2 + 1;
      local_4c = *param_2;
      puVar15 = (undefined4 *)(&stack0xffffffbc + (uint)bVar19 * -8 + (uint)bVar19 * -8);
      puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
      *(undefined4 *)((int)&stack0xffffffb8 + (uint)bVar19 * 0xfffffffe * 4) = *puVar4;
      puVar16 = puVar15 + (uint)bVar19 * -2 + 1;
      puVar4 = puVar18 + (uint)bVar19 * -2 + 1;
      *puVar15 = *puVar18;
      *puVar16 = *puVar4;
      puVar16[(uint)bVar19 * -2 + 1] = puVar4[(uint)bVar19 * -2 + 1];
      (puVar16 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
           (puVar4 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
    }
  }
  if (local_1c == 0) {
    *(undefined4 *)((int)ppuVar10 + -4) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)ppuVar10 + -8) = 0x1195f2;
    puVar4 = (undefined4 *)FUN_000fa3bd();
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 **)((int)ppuVar10 + -4) = puVar4;
      *(ushort **)((int)ppuVar10 + -8) = local_14;
      puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
      DAT_003e0540 = *puVar4;
      puVar16 = &DAT_003e0548 + (uint)bVar19 * -2 + (uint)bVar19 * -2;
      puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
      (&DAT_003e0544)[(uint)bVar19 * -2] = *puVar18;
      puVar17 = puVar16 + (uint)bVar19 * -2 + 1;
      puVar18 = puVar15 + (uint)bVar19 * -2 + 1;
      *puVar16 = *puVar15;
      *puVar17 = *puVar18;
      puVar17[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
      (puVar17 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
           (puVar18 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
      *(undefined4 *)((int)ppuVar10 + -0xc) = 0x119611;
      iVar6 = FUN_001192dd();
      if (iVar6 != 0) {
        local_1c = 1;
        puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
        local_4c = *puVar4;
        puVar15 = (undefined4 *)(&stack0xffffffbc + (uint)bVar19 * -8 + (uint)bVar19 * -8);
        puVar4 = puVar18 + (uint)bVar19 * -2 + 1;
        *(undefined4 *)((int)&stack0xffffffb8 + (uint)bVar19 * 0xfffffffe * 4) = *puVar18;
        puVar16 = puVar15 + (uint)bVar19 * -2 + 1;
        puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
        *puVar15 = *puVar4;
        *puVar16 = *puVar18;
        puVar16[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
        (puVar16 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
             (puVar18 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
      }
    }
  }
  if ((local_1c == 0) && (DAT_003e0534 == 1)) {
    local_28 = 0;
    for (local_20 = 0; iVar6 = *(int *)(*(int *)(local_14 + 2) + 0x10),
        local_20 < (int)(uint)*(ushort *)(iVar6 + 0x10); local_20 = local_20 + 1) {
      puVar4 = (undefined4 *)
               (local_28 +
               (*(uint *)(iVar6 + 0xc) >> 0x10) * 0x10 + (*(uint *)(iVar6 + 0xc) & 0xffff));
      if (local_20 == 0) {
        puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
        DAT_003e0540 = *puVar4;
        puVar16 = &DAT_003e0548 + (uint)bVar19 * -2 + (uint)bVar19 * -2;
        puVar15 = puVar18 + (uint)bVar19 * -2 + 1;
        (&DAT_003e0544)[(uint)bVar19 * -2] = *puVar18;
        puVar17 = puVar16 + (uint)bVar19 * -2 + 1;
        puVar18 = puVar15 + (uint)bVar19 * -2 + 1;
        *puVar16 = *puVar15;
        *puVar17 = *puVar18;
        puVar17[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
        (puVar17 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
             (puVar18 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
      }
      *(undefined4 **)((int)ppuVar10 + -4) = puVar4;
      *(ushort **)((int)ppuVar10 + -8) = local_14;
      *(undefined4 *)((int)ppuVar10 + -0xc) = 0x119685;
      iVar6 = FUN_001192dd();
      if (iVar6 != 0) {
        local_1c = 1;
        puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
        local_4c = *puVar4;
        puVar15 = (undefined4 *)(&stack0xffffffbc + (uint)bVar19 * -8 + (uint)bVar19 * -8);
        puVar4 = puVar18 + (uint)bVar19 * -2 + 1;
        *(undefined4 *)((int)&stack0xffffffb8 + (uint)bVar19 * 0xfffffffe * 4) = *puVar18;
        puVar16 = puVar15 + (uint)bVar19 * -2 + 1;
        puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
        *puVar15 = *puVar4;
        *puVar16 = *puVar18;
        puVar16[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
        (puVar16 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
             (puVar18 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
        break;
      }
      local_28 = local_28 + 0x18;
    }
  }
  if (local_1c == 0) {
    pcVar12 = s_XMIDI_sound_hardware_not_found_00172fca;
    pcVar13 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar13 = cVar1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
LAB_001196d5:
    ppuVar11 = (ushort **)((int)ppuVar10 + -4);
    *(ushort **)((int)ppuVar10 + -4) = local_14;
  }
  else {
    *(undefined4 *)((int)ppuVar10 + -4) = 0;
    *(undefined4 *)((int)ppuVar10 + -8) = 0;
    *(undefined4 *)((int)ppuVar10 + -0xc) = 0x305;
    DAT_003e0540 = local_4c;
    puVar15 = &DAT_003e0548 + (uint)bVar19 * -2 + (uint)bVar19 * -2;
    puVar4 = (undefined4 *)(&stack0xffffffbc + (uint)bVar19 * -8 + (uint)bVar19 * -8);
    (&DAT_003e0544)[(uint)bVar19 * -2] =
         *(undefined4 *)((int)&stack0xffffffb8 + (uint)bVar19 * 0xfffffffe * 4);
    puVar16 = puVar15 + (uint)bVar19 * -2 + 1;
    puVar18 = puVar4 + (uint)bVar19 * -2 + 1;
    *puVar15 = *puVar4;
    *puVar16 = *puVar18;
    puVar16[(uint)bVar19 * -2 + 1] = puVar18[(uint)bVar19 * -2 + 1];
    (puVar16 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1] =
         (puVar18 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
    *(undefined4 *)((int)ppuVar10 + -0x10) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119709;
    FUN_000f9c40();
    *(undefined4 *)(*(int *)(local_14 + 2) + 0x18) = 1;
    *(ushort **)((int)ppuVar10 + -4) = &local_34;
    *(undefined4 *)((int)ppuVar10 + -8) = 0;
    *(undefined4 *)((int)ppuVar10 + -0xc) = 0x501;
    *(undefined4 *)((int)ppuVar10 + -0x10) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)ppuVar10 + -0x14) = 0x11972f;
    FUN_000f9c40();
    iVar6 = DAT_003e0520;
    if (local_34 == 0) {
      pcVar12 = s_Could_not_initialize_instrument_m_00172fea;
    }
    else {
      *(int *)(local_14 + 0x10) = DAT_003e0520;
      *(int *)((int)ppuVar10 + -4) = iVar6 * 0x71c;
      *(undefined4 *)((int)ppuVar10 + -8) = 0x119792;
      iVar6 = FUN_000fe896();
      *(int *)(local_14 + 0xe) = iVar6;
      if (iVar6 != 0) {
        local_24 = 0;
        iVar6 = 0;
        while (local_24 < *(int *)(local_14 + 0x10)) {
          puVar4 = &DAT_0017303b; /* 0x17303b="HSEQ" */
          puVar18 = (undefined4 *)(*(int *)(local_14 + 0xe) + iVar6);
          for (iVar9 = 1; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar18 = *puVar4;
            puVar4 = puVar4 + (uint)bVar19 * -2 + 1;
            puVar18 = puVar18 + (uint)bVar19 * -2 + 1;
          }
          for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined1 *)puVar18 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar19 * -2 + 1);
            puVar18 = (undefined4 *)((int)puVar18 + (uint)bVar19 * -2 + 1);
          }
          *(undefined4 *)(iVar6 + 8 + *(int *)(local_14 + 0xe)) = 1;
          local_24 = local_24 + 1;
          *(ushort **)(iVar6 + 4 + *(int *)(local_14 + 0xe)) = local_14;
          iVar6 = iVar6 + 0x71c;
        }
        local_14[0xd2] = 0;
        local_14[0xd3] = 0;
        local_14[0xd4] = 0;
        local_14[0xd5] = 0;
        local_14[0xd6] = 0;
        local_14[0xd7] = 0;
        local_14[0xd8] = 0;
        local_14[0xd9] = 0;
        lVar2 = (longlong)DAT_003e051c;
        local_14[0xc] = 0;
        local_14[0xd] = 0;
        local_14[0xda] = 0x7f;
        local_14[0xdb] = 0;
        *(int *)(local_14 + 10) = (int)(1000000 / lVar2);
        puVar3 = local_14;
        do {
          puVar5 = puVar3 + 2;
          puVar3[0x12] = 0;
          puVar3[0x13] = 0;
          puVar3[0x32] = 0;
          puVar3[0x33] = 0;
          puVar3[0x52] = 0;
          puVar3[0x53] = 0;
          puVar3[0x72] = 0;
          puVar3[0x73] = 0;
          puVar3[0x92] = 0;
          puVar3[0x93] = 0;
          puVar3[0xb2] = 0;
          puVar3[0xb3] = 0;
          puVar3 = puVar5;
        } while (puVar5 != local_14 + 0x20);
        *(code **)((int)ppuVar10 + -4) = FUN_00118cc7;
        *(undefined4 *)((int)ppuVar10 + -8) = 0x119899;
        iVar6 = FUN_000f9f10();
        *(int *)(local_14 + 8) = iVar6;
        if (iVar6 != -1) {
          *(ushort **)((int)ppuVar10 + -4) = local_14;
          *(int *)((int)ppuVar10 + -8) = iVar6;
          *(undefined4 *)((int)ppuVar10 + -0xc) = 0x1198fb;
          FUN_000f9f71();
          *(code **)(*(int *)(local_14 + 2) + 0x24) = FUN_0011939c;
          uVar7 = 0;
          *(ushort **)(*(int *)(local_14 + 2) + 0x28) = local_14;
          do {
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x72;
            uVar8 = uVar7 | 0xb0;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x11992b;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 0;
            *(uint *)((int)ppuVar10 + -0xc) = uVar7 | 0xc0;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x11993f;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0x40;
            *(undefined4 *)((int)ppuVar10 + -8) = 0;
            *(uint *)((int)ppuVar10 + -0xc) = uVar7 | 0xe0;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119953;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x70;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119963;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 1;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119973;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = DAT_003e0524;
            *(undefined4 *)((int)ppuVar10 + -8) = 7;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119987;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0x40;
            *(undefined4 *)((int)ppuVar10 + -8) = 10;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119997;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0x7f;
            *(undefined4 *)((int)ppuVar10 + -8) = 0xb;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x1199a7;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x40;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x1199b7;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0x28;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x5b;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x1199c7;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x5d;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x1199d7;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 100;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x1199e7;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x65;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x1199f7;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = 0;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x26;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119a07;
            FUN_00117e82();
            *(undefined4 *)((int)ppuVar10 + -4) = DAT_003e0530;
            *(undefined4 *)((int)ppuVar10 + -8) = 6;
            *(uint *)((int)ppuVar10 + -0xc) = uVar8;
            *(ushort **)((int)ppuVar10 + -0x10) = local_14;
            *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119a1b;
            FUN_00117e82();
            *(ushort **)((int)ppuVar10 + -4) = local_14;
            *(undefined4 *)((int)ppuVar10 + -8) = 0x119a26;
            FUN_00117e39();
            if ((uVar7 & 3) == 0) {
              *(undefined4 *)((int)ppuVar10 + -4) = 3;
              *(undefined4 *)((int)ppuVar10 + -8) = 0x119a37;
              FUN_000f9cb3();
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 0x10);
          *(int *)((int)ppuVar10 + -4) = DAT_003e051c;
          *(undefined4 *)((int)ppuVar10 + -8) = *(undefined4 *)(local_14 + 8);
          *(undefined4 *)((int)ppuVar10 + -0xc) = 0x119a55;
          FUN_000fa039();
          *(undefined4 *)((int)ppuVar10 + -4) = *(undefined4 *)(local_14 + 8);
          *(undefined4 *)((int)ppuVar10 + -8) = 0x119a63;
          FUN_000fa1a4();
          return local_14;
        }
        pcVar12 = s_Out_of_timer_handles_00173040;
        pcVar13 = &DAT_003e03f0;
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          *pcVar13 = cVar1;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        *(undefined4 *)((int)ppuVar10 + -4) = 0;
        *(undefined4 *)((int)ppuVar10 + -8) = 0;
        *(undefined4 *)((int)ppuVar10 + -0xc) = 0x306;
        *(undefined4 *)((int)ppuVar10 + -0x10) = *(undefined4 *)(local_14 + 2);
        *(undefined4 *)((int)ppuVar10 + -0x14) = 0x1198d1;
        FUN_000f9c40();
        *(undefined4 *)(*(int *)(local_14 + 2) + 0x18) = 0;
        *(undefined4 *)((int)ppuVar10 + -4) = *(undefined4 *)(local_14 + 0xe);
        *(undefined4 *)((int)ppuVar10 + -8) = 0x1198ec;
        FUN_000fe8c1();
        goto LAB_001196d5;
      }
      pcVar12 = s_Could_not_allocate_SEQUENCE_stru_00173013;
    }
    pcVar13 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar13 = cVar1;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    *(undefined4 *)((int)ppuVar10 + -4) = 0;
    *(undefined4 *)((int)ppuVar10 + -8) = 0;
    *(undefined4 *)((int)ppuVar10 + -0xc) = 0x306;
    *(undefined4 *)((int)ppuVar10 + -0x10) = *(undefined4 *)(local_14 + 2);
    *(undefined4 *)((int)ppuVar10 + -0x14) = 0x119763;
    FUN_000f9c40();
    iVar6 = *(int *)(local_14 + 2);
    ppuVar11 = (ushort **)((int)ppuVar10 + -4);
    *(ushort **)((int)ppuVar10 + -4) = local_14;
    *(undefined4 *)(iVar6 + 0x18) = 0;
  }
LAB_001196d8:
  *(undefined4 *)((int)ppuVar11 + -4) = 0x1196dd;
  FUN_000fe8c1();
  return (ushort *)0x0;
}

/******************************************************************************
 * Function : dk_driver_could_install_timbre_119ede (Ghidra: FUN_00119ede)
 * Prototype: void dk_driver_could_install_timbre_119ede(void);
 * Address  : 0x119ede (Size: 38 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Driver could not install timbre bank %d, patch %d'
 * Callers  : 2 -> 0x119f04, 0x11a52a
 * Callees  : 0 -> 
 * Strings  :
 *   - 0x1730e3: "Driver could not install timbre bank %d, patch %d\n"
 ******************************************************************************/
void FUN_00119ede(void)

{
  undefined1 local_14 [8];
  
  (*DAT_00195db0)(local_14,2,s_Driver_could_not_install_timbre_b_001730e3,&DAT_003e03f0);
  return;
}

/******************************************************************************
 * Function : dk_xmidi_sequence_119f04 (Ghidra: FUN_00119f04)
 * Prototype: undefined4 dk_xmidi_sequence_119f04(int param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x119f04 (Size: 800 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Invalid XMIDI sequence'
 * Callers  : 1 -> 0xfb774
 * Callees  : 7 -> 0xf9c40, 0xf9d11, 0x117e39, 0x117fef, 0x118027, 0x118c71, 0x119ede
 * Strings  :
 *   - 0x173116: "Invalid XMIDI sequence\n"
 *   - 0x17312e: "TIMB"
 *   - 0x173133: "RBRN"
 *   - 0x173138: "EVNT"
 *   - 0x17313d: "No timbres loaded\n"
 ******************************************************************************/
undefined4 FUN_00119f04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  short *psVar11;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  short local_24 [6];
  byte *local_18;
  uint local_14;
  
  bVar20 = 0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 2;
    iVar6 = FUN_00118027(param_2,param_3);
    if (iVar6 != 0) {
      iVar7 = FUN_00117fef(*(undefined4 *)(iVar6 + 4));
      local_18 = (byte *)(iVar6 + iVar7 + 8);
      psVar11 = local_24;
      *(undefined4 *)(param_1 + 0xc) = 0;
      pbVar10 = (byte *)(iVar6 + 0xc);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      while( true ) {
        bVar18 = pbVar10 < local_18;
        bVar19 = pbVar10 == local_18;
        if (!bVar18) break;
        iVar6 = 4;
        pbVar13 = &DAT_0017312e; /* 0x17312e="TIMB" */
        pbVar15 = pbVar10;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar18 = *pbVar13 < *pbVar15;
          bVar19 = *pbVar13 == *pbVar15;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
        } while (bVar19);
        cVar5 = !bVar19;
        if (!bVar18 && !bVar19) {
          cVar5 = -cVar5;
        }
        bVar18 = false;
        bVar19 = cVar5 == '\0';
        if (bVar19) {
          *(byte **)(param_1 + 0xc) = pbVar10;
        }
        iVar6 = 4;
        pbVar13 = &DAT_00173133; /* 0x173133="RBRN" */
        pbVar15 = pbVar10;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar18 = *pbVar13 < *pbVar15;
          bVar19 = *pbVar13 == *pbVar15;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
        } while (bVar19);
        cVar5 = !bVar19;
        if (!bVar18 && !bVar19) {
          cVar5 = -cVar5;
        }
        bVar18 = false;
        bVar19 = cVar5 == '\0';
        if (bVar19) {
          *(byte **)(param_1 + 0x10) = pbVar10;
        }
        iVar6 = 4;
        bVar20 = 0;
        pbVar13 = &DAT_00173138; /* 0x173138="EVNT" */
        pbVar15 = pbVar10;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar18 = *pbVar13 < *pbVar15;
          bVar19 = *pbVar13 == *pbVar15;
          pbVar13 = pbVar13 + 1;
          pbVar15 = pbVar15 + 1;
        } while (bVar19);
        cVar5 = !bVar19;
        if (!bVar18 && !bVar19) {
          cVar5 = -cVar5;
        }
        if (cVar5 == '\0') {
          *(byte **)(param_1 + 0x14) = pbVar10;
        }
        iVar6 = FUN_00117fef(*(undefined4 *)(pbVar10 + 4));
        pbVar10 = pbVar10 + iVar6 + 8;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
        *(undefined4 *)(param_1 + 0x30) = 1;
        FUN_00118c71(param_1);
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 100;
        *(undefined4 *)(param_1 + 0x50) = 100;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
        uVar4 = DAT_003e0524;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x3c) = uVar4;
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar6 = FUN_00117fef(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
          if (iVar6 + 8U < 0x201) {
            iVar6 = FUN_00117fef(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
            uVar8 = iVar6 + 8;
          }
          else {
            uVar8 = 0x200;
          }
          puVar16 = *(undefined4 **)(param_1 + 0xc);
          puVar17 = &DAT_003e06ac;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + (uint)bVar20 * -2 + 1;
            puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
            puVar16 = (undefined4 *)((int)puVar16 + (uint)bVar20 * -2 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar20 * -2 + 1);
          }
          if (*(int *)(*(int *)(param_1 + 4) + 0x1a8) != 0) {
            local_14 = 0;
            puVar16 = &DAT_003e06ac;
            psVar11 = local_24;
            while (local_14 < DAT_003e06b4) {
              uVar2 = *(ushort *)((int)puVar16 + 10);
              iVar6 = *(int *)(param_1 + 4);
              *(int *)((int)psVar11 + -4) = iVar6;
              *(uint *)((int)psVar11 + -8) = (uint)(uVar2 >> 8);
              *(uint *)((int)psVar11 + -0xc) = uVar2 & 0xff;
              pcVar3 = *(code **)(iVar6 + 0x1a8);
              *(undefined4 *)((int)psVar11 + -0x10) = 0x11a120;
              iVar6 = (*pcVar3)();
              uVar8 = local_14 + 1;
              if (iVar6 == 0) {
                puVar16 = (undefined4 *)((int)puVar16 + 2);
                psVar11 = (short *)((int)psVar11 + -0xc);
                local_14 = uVar8;
              }
              else {
                iVar6 = (int)&DAT_003e06ac + uVar8 * 2;
                for (; uVar8 < DAT_003e06b4; uVar8 = uVar8 + 1) {
                  *(undefined2 *)(iVar6 + 8) = *(undefined2 *)(iVar6 + 10);
                  iVar6 = iVar6 + 2;
                }
                DAT_003e06b4 = DAT_003e06b4 - 1;
                if (DAT_003e06b1 < 2) {
                  DAT_003e06b1 = DAT_003e06b1 - 2;
                  DAT_003e06b0 = DAT_003e06b0 + -1;
                  psVar11 = (short *)((int)psVar11 + -0xc);
                }
                else {
                  DAT_003e06b1 = DAT_003e06b1 - 2;
                  psVar11 = (short *)((int)psVar11 + -0xc);
                }
              }
            }
          }
          if (DAT_003e06b4 != 0) {
            *(undefined4 *)((int)psVar11 + -4) = 0x11a178;
            iVar6 = FUN_000f9d11();
            if (iVar6 == 0) {
              piVar1 = (int *)(*(int *)(param_1 + 4) + 0x18);
              *piVar1 = *piVar1 + 1;
              *(undefined4 *)((int)psVar11 + -4) = *(undefined4 *)(param_1 + 4);
              *(undefined4 *)((int)psVar11 + -8) = 0x11a1b0;
              FUN_00117e39();
              puVar16 = &DAT_003e06ac;
              puVar17 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x100);
              for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar17 = *puVar16;
                puVar16 = puVar16 + (uint)bVar20 * -2 + 1;
                puVar17 = puVar17 + (uint)bVar20 * -2 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
                puVar16 = (undefined4 *)((int)puVar16 + (uint)bVar20 * -2 + 1);
                puVar17 = (undefined4 *)((int)puVar17 + (uint)bVar20 * -2 + 1);
              }
              *(short **)((int)psVar11 + -4) = local_24;
              *(undefined4 *)((int)psVar11 + -8) = 0;
              *(undefined4 *)((int)psVar11 + -0xc) = 0x503;
              *(undefined4 *)((int)psVar11 + -0x10) = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
              *(undefined4 *)((int)psVar11 + -0x14) = 0x11a1ee;
              FUN_000f9c40();
              piVar1 = (int *)(*(int *)(param_1 + 4) + 0x18);
              *piVar1 = *piVar1 + -1;
              if (local_24[0] != 0) {
                return 1;
              }
              *(undefined4 *)((int)psVar11 + -4) = 0x11a215;
              FUN_00119ede();
            }
            else {
              pcVar12 = s_No_timbres_loaded_0017313d;
              pcVar14 = &DAT_003e03f0;
              do {
                cVar5 = *pcVar12;
                pcVar12 = pcVar12 + 1;
                *pcVar14 = cVar5;
                pcVar14 = pcVar14 + 1;
              } while (cVar5 != '\0');
            }
            return 0xffffffff;
          }
        }
        return 1;
      }
    }
    pcVar12 = s_Invalid_XMIDI_sequence_00173116;
    pcVar14 = &DAT_003e03f0;
    do {
      cVar5 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      *pcVar14 = cVar5;
      pcVar14 = pcVar14 + 1;
    } while (cVar5 != '\0');
  }
  return 0;
}

/******************************************************************************
 * Function : dk_insufficient_memory_hwave_descriptor_11b68b (Ghidra: FUN_0011b68b)
 * Prototype: int * dk_insufficient_memory_hwave_descriptor_11b68b(int param_1,int param_2,int param_3,int param_4);
 * Address  : 0x11b68b (Size: 437 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Insufficient memory for HWAVE descriptor'
 * Callers  : 0 -> 
 * Callees  : 7 -> 0xfa655, 0xfa720, 0xfc381, 0xfc3e5, 0xfe896, 0xfe8c1, 0x11af08
 * Strings  :
 *   - 0x173150: "Insufficient memory for HWAVE descriptor\n"
 *   - 0x17317a: "Could not allocate enough SAMPLE handles\n"
 ******************************************************************************/
int * FUN_0011b68b(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  
  FUN_0011af08();
  piVar2 = (int *)FUN_000fe896(0x69c);
  if (piVar2 == (int *)0x0) {
    pcVar6 = s_Insufficient_memory_for_HWAVE_de_00173150;
    pcVar7 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  else {
    *piVar2 = param_2;
    piVar2[1] = param_1;
    piVar2[2] = param_3;
    iVar3 = FUN_000fc381(param_2,FUN_0011b2a2);
    piVar2[3] = iVar3;
    iVar3 = FUN_000fc3e5(param_2,FUN_0011b27c);
    piVar2[4] = iVar3;
    *(int **)(param_2 + 0x1b8) = piVar2;
    piVar5 = piVar2;
    do {
      piVar4 = piVar5 + 1;
      piVar5[5] = 0;
      piVar5[0x15] = 0;
      piVar5[0x25] = 0x40;
      piVar5[0x75] = 0;
      piVar5[0xb5] = 0x7f;
      piVar5[0xc5] = 0x40;
      iVar3 = DAT_003e0530;
      piVar5[0xd5] = 0x7f;
      piVar5[0x115] = iVar3;
      piVar5 = piVar4;
    } while (piVar4 != piVar2 + 0x10);
    piVar2[0x145] = 0;
    while( true ) {
      iVar3 = param_4;
      if (0x10 < param_4) {
        iVar3 = 0x10;
      }
      if (iVar3 <= piVar2[0x145]) {
        piVar5 = piVar2;
        do {
          piVar4 = piVar5 + 1;
          piVar5[0x125] = 0;
          piVar5 = piVar4;
        } while (piVar4 != piVar2 + 0x10);
        piVar5 = piVar2;
        for (iVar3 = 0; iVar3 < piVar2[0x145]; iVar3 = iVar3 + 1) {
          piVar5[0x146] = -1;
          piVar5 = piVar5 + 1;
        }
        piVar2[0x1a6] = 0;
        return piVar2;
      }
      iVar3 = FUN_000fa655(piVar2[1]);
      piVar2[piVar2[0x145] + 0x135] = iVar3;
      if (piVar2[piVar2[0x145] + 0x135] == 0) break;
      piVar2[0x145] = piVar2[0x145] + 1;
    }
    pcVar6 = s_Could_not_allocate_enough_SAMPLE_0017317a;
    pcVar7 = &DAT_003e03f0;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    while (piVar2[0x145] = piVar2[0x145] + -1, -1 < piVar2[0x145]) {
      FUN_000fa720(piVar2[piVar2[0x145] + 0x135]);
    }
    FUN_000fe8c1(piVar2);
  }
  return (int *)0x0;
}

/******************************************************************************
 * Function : dk_file_found_11c4e3 (Ghidra: FUN_0011c4e3)
 * Prototype: undefined8 dk_file_found_11c4e3(void);
 * Address  : 0x11c4e3 (Size: 465 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'File not found'
 * Callers  : 2 -> 0x11c6b4, 0x11c724
 * Callees  : 1 -> 0xfcf74
 * Strings  :
 *   - 0x1731a4: "File not found\n"
 *   - 0x1731b4: "Creative"
 *   - 0x1731bd: "WAVE"
 *   - 0x1731c2: "FORM"
 *   - 0x1731c7: "XDIR"
 *   - 0x1731cc: "Unknown file type\n"
 *   - 0x1731df: "XMIDI support not enabled\n"
 *   - 0x1731fa: "Digital support not enabled\n"
 ******************************************************************************/
undefined8 FUN_0011c4e3(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *in_EAX;
  int iVar4;
  undefined4 in_EDX;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  if (*in_EAX == 0) {
    FUN_000fcf74();
    pcVar5 = s_File_not_found_001731a4;
  }
  else {
    iVar4 = 8;
    pcVar5 = s_Creative_001731b4;
    pbVar7 = (byte *)*in_EAX;
    while( true ) {
      bVar1 = *pcVar5;
      bVar3 = *pbVar7;
      if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
        bVar1 = bVar1 - 0x20;
      }
      if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
        bVar3 = bVar3 - 0x20;
      }
      bVar9 = bVar1 < bVar3;
      bVar10 = bVar1 == bVar3;
      if (!bVar10) break;
      bVar9 = false;
      bVar10 = true;
      if (bVar1 == 0) break;
      iVar4 = iVar4 + -1;
      bVar10 = true;
      if (iVar4 == 0) break;
      pcVar5 = pcVar5 + 1;
      pbVar7 = pbVar7 + 1;
    }
    cVar2 = !bVar10;
    if (!bVar9 && !bVar10) {
      cVar2 = -cVar2;
    }
    if (cVar2 == '\0') {
LAB_0011c555:
      in_EAX[1] = 2;
    }
    else {
      iVar4 = 4;
      pbVar7 = &DAT_001731bd; /* 0x1731bd="WAVE" */
      pbVar8 = (byte *)(*in_EAX + 8);
      while( true ) {
        bVar1 = *pbVar7;
        bVar3 = *pbVar8;
        if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
          bVar1 = bVar1 - 0x20;
        }
        if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
          bVar3 = bVar3 - 0x20;
        }
        bVar9 = bVar1 < bVar3;
        bVar10 = bVar1 == bVar3;
        if (!bVar10) break;
        bVar9 = false;
        bVar10 = true;
        if (bVar1 == 0) break;
        iVar4 = iVar4 + -1;
        bVar10 = true;
        if (iVar4 == 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      }
      cVar2 = !bVar10;
      if (!bVar9 && !bVar10) {
        cVar2 = -cVar2;
      }
      if (cVar2 == '\0') goto LAB_0011c555;
      iVar4 = 4;
      pbVar8 = &DAT_001731c2; /* 0x1731c2="FORM" */
      pbVar7 = (byte *)*in_EAX;
      while( true ) {
        bVar1 = *pbVar8;
        bVar3 = *pbVar7;
        if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
          bVar1 = bVar1 - 0x20;
        }
        if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
          bVar3 = bVar3 - 0x20;
        }
        bVar9 = bVar1 < bVar3;
        bVar10 = bVar1 == bVar3;
        if (!bVar10) break;
        bVar9 = false;
        bVar10 = true;
        if (bVar1 == 0) break;
        iVar4 = iVar4 + -1;
        bVar10 = true;
        if (iVar4 == 0) break;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
      }
      cVar2 = !bVar10;
      if (!bVar9 && !bVar10) {
        cVar2 = -cVar2;
      }
      if (cVar2 != '\0') {
LAB_0011c62a:
        FUN_000fcf74();
        pcVar5 = s_Unknown_file_type_001731cc;
        goto LAB_0011c4fc;
      }
      iVar4 = 4;
      pbVar7 = &DAT_001731c7; /* 0x1731c7="XDIR" */
      pbVar8 = (byte *)(*in_EAX + 8);
      while( true ) {
        bVar1 = *pbVar7;
        bVar3 = *pbVar8;
        if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
          bVar1 = bVar1 - 0x20;
        }
        if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
          bVar3 = bVar3 - 0x20;
        }
        bVar9 = bVar1 < bVar3;
        bVar10 = bVar1 == bVar3;
        if (!bVar10) break;
        bVar9 = false;
        bVar10 = true;
        if (bVar1 == 0) break;
        iVar4 = iVar4 + -1;
        bVar10 = true;
        if (iVar4 == 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar8 = pbVar8 + 1;
      }
      cVar2 = !bVar10;
      if (!bVar9 && !bVar10) {
        cVar2 = -cVar2;
      }
      if (cVar2 != '\0') goto LAB_0011c62a;
      in_EAX[1] = 1;
    }
    if ((in_EAX[1] == 1) && (DAT_003e08bc == 0)) {
      FUN_000fcf74();
      pcVar5 = s_XMIDI_support_not_enabled_001731df;
    }
    else {
      if ((in_EAX[1] != 2) || (DAT_003e08b8 != 0)) {
        in_EAX[3] = 2;
        in_EAX[5] = -1;
        in_EAX[6] = -1;
        iVar4 = DAT_00196dbc;
        in_EAX[7] = -1;
        in_EAX[4] = iVar4;
        goto LAB_0011c6ad;
      }
      FUN_000fcf74();
      pcVar5 = s_Digital_support_not_enabled_001731fa;
    }
  }
LAB_0011c4fc:
  pcVar6 = &DAT_003e03f0;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar6 = cVar2;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  in_EAX = (int *)0x0;
LAB_0011c6ad:
  return CONCAT44(in_EDX,in_EAX);
}

/******************************************************************************
 * Function : dk_out_memory_11cfae (Ghidra: FUN_0011cfae)
 * Prototype: int * dk_out_memory_11cfae(int param_1,byte *param_2,int param_3);
 * Address  : 0x11cfae (Size: 974 bytes)
 * Module   : bflib/bflib_sound.cpp [bflib_sound_signature]
 * Naming   : String 'Out of memory'
 * Callers  : 0 -> 
 * Callees  : 15 -> 0xf9f10, 0xfa039, 0xfa1a4, 0xfa655, 0xfa720, 0xfa77e, 0xfb060, 0xfb340, 0xfb3a4, 0xfb46c ...
 * Strings  :
 *   - 0x173228: "Out of memory\n"
 *   - 0x173237: "\\\\"
 *   - 0x17323c: "Error opening file."
 *   - 0x173250: "Unable to obtain a sample handle."
 *   - 0x173272: "Error getting sound format."
 *   - 0x17328e: "Out of memory."
 *   - 0x17329d: "Out of timer handles."
 ******************************************************************************/
int * FUN_0011cfae(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar4;
  int *piVar3;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  
  bVar1 = 0;
  if (param_1 == 0) {
    return (int *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_000fe896(0xb0);
  if (piVar3 == (int *)0x0) {
    pcVar6 = s_Out_of_memory_00173228;
    pcVar8 = &DAT_003e03f0;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    return (int *)0x0;
  }
  pbVar7 = &DAT_00173237; /* 0x173237="\\\\" */
  piVar9 = piVar3;
  for (iVar5 = 0x2c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + (uint)bVar1 * -2 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)piVar9 = 0;
    piVar9 = (int *)((int)piVar9 + (uint)bVar1 * -2 + 1);
  }
  iVar5 = 4;
  pbVar10 = param_2;
  while( true ) {
    bVar1 = *pbVar7;
    bVar4 = *pbVar10;
    if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
      bVar1 = bVar1 - 0x20;
    }
    if ((0x60 < bVar4) && (bVar4 < 0x7b)) {
      bVar4 = bVar4 - 0x20;
    }
    bVar11 = bVar1 < bVar4;
    bVar12 = bVar1 == bVar4;
    if (!bVar12) break;
    bVar11 = false;
    bVar12 = true;
    if (bVar1 == 0) break;
    iVar5 = iVar5 + -1;
    bVar12 = true;
    if (iVar5 == 0) break;
    pbVar7 = pbVar7 + 1;
    pbVar10 = pbVar10 + 1;
  }
  cVar2 = !bVar12;
  if (!bVar11 && !bVar12) {
    cVar2 = -cVar2;
  }
  if (cVar2 == '\0') {
    iVar5 = 0;
    bVar12 = false;
    pbVar7 = param_2 + 5;
    bVar1 = param_2[4];
    if (bVar1 != 0x2d) goto LAB_0011d080;
    bVar12 = true;
    pbVar10 = pbVar7;
    while( true ) {
      pbVar7 = pbVar10 + 1;
      bVar1 = *pbVar10;
LAB_0011d080:
      if ((0x39 < bVar1) || (bVar1 < 0x30)) break;
      iVar5 = iVar5 * 10 + (uint)(byte)(bVar1 - 0x30);
      pbVar10 = pbVar7;
    }
    if (bVar12) {
      iVar5 = -iVar5;
    }
    piVar3[0x1c] = 1;
    piVar3[1] = iVar5;
  }
  else {
    iVar5 = FUN_00115a13(param_2,0);
    piVar3[1] = iVar5;
  }
  if (piVar3[1] == -1) {
    pcVar6 = s_Error_opening_file__0017323c;
    pcVar8 = &DAT_003e03f0;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    goto LAB_0011d0da;
  }
  iVar5 = FUN_000fa655(param_1);
  *piVar3 = iVar5;
  if (iVar5 == 0) {
    pcVar6 = s_Unable_to_obtain_a_sample_handle_00173250;
    pcVar8 = &DAT_003e03f0;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  else {
    FUN_000fa77e(iVar5);
    iVar5 = FUN_0011cd8b();
    if (iVar5 == 0) {
      pcVar6 = s_Error_getting_sound_format__00173272;
    }
    else {
      iVar5 = FUN_000fb060(param_1,piVar3[0x11],piVar3[0x13]);
      if (param_3 == 0) {
        piVar3[8] = (uint)piVar3[0x10] >> 2;
        if ((int)((uint)piVar3[0x10] >> 2) < iVar5) {
          piVar3[8] = iVar5;
        }
        param_3 = piVar3[8];
      }
      else {
        param_3 = param_3 / 3;
      }
      piVar3[8] = param_3 + 0xfffU & 0xfffff000;
      if (piVar3[8] == 0) {
        piVar3[8] = 0x1000;
      }
      if (piVar3[0x14] + piVar3[8] * -3 < 0x3000) {
        piVar3[8] = piVar3[0x14];
        piVar3[0x1f] = piVar3[0x14];
        iVar5 = FUN_000fe896(piVar3[0x14]);
        piVar3[2] = iVar5;
        if (iVar5 != 0) {
          piVar3[0x1b] = 1;
LAB_0011d294:
          FUN_000fb46c(*piVar3,0,piVar3);
          FUN_000fb340(*piVar3,FUN_0011cd14);
          FUN_000fb3a4(*piVar3,FUN_0011cd61);
          piVar3[0xc] = 1;
          piVar3[0xe] = 2;
          piVar3[0x19] = 1;
          piVar3[9] = piVar3[8] / 2;
          piVar3[0x20] = piVar3[0x1f];
          if (DAT_00196dcc != (int *)0x0) {
            piVar9 = piVar3;
            piVar3[0x2b] = (int)DAT_00196dcc;
            DAT_00196dcc = piVar9;
            return piVar3;
          }
          DAT_00196dcc = piVar3;
          DAT_00196dd0 = FUN_000f9f10(FUN_0011cd14);
          if (DAT_00196dd0 != -1) {
            FUN_000fa039(DAT_00196dd0,0x10);
            FUN_000fa1a4(DAT_00196dd0);
            return piVar3;
          }
          pcVar6 = s_Out_of_timer_handles__0017329d;
          pcVar8 = &DAT_003e03f0;
          DAT_00196dd0 = 0xffffffff;
          do {
            cVar2 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            *pcVar8 = cVar2;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          FUN_000fe8c1(piVar3[4]);
LAB_0011d27e:
          FUN_000fe8c1(piVar3[2]);
          iVar5 = piVar3[3];
LAB_0011d257:
          FUN_000fe8c1(iVar5);
        }
      }
      else {
        piVar3[0x1f] = iVar5 * 2;
        if (piVar3[0x1f] < piVar3[8] * 2) {
          piVar3[0x1f] = piVar3[8] * 2;
        }
        iVar5 = FUN_000fe896(piVar3[8]);
        piVar3[2] = iVar5;
        if (iVar5 != 0) {
          iVar5 = FUN_000fe896(piVar3[8]);
          piVar3[3] = iVar5;
          if (iVar5 != 0) {
            iVar5 = FUN_000fe896(piVar3[8]);
            piVar3[4] = iVar5;
            if (iVar5 != 0) goto LAB_0011d294;
            goto LAB_0011d27e;
          }
          iVar5 = piVar3[2];
          goto LAB_0011d257;
        }
      }
      pcVar6 = s_Out_of_memory__0017328e;
    }
    pcVar8 = &DAT_003e03f0;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_000fa720(*piVar3);
  }
  if (piVar3[0x1c] == 0) {
    FUN_00115b3d(piVar3[1]);
  }
LAB_0011d0da:
  FUN_000fe8c1(piVar3);
  return (int *)0x0;
}

