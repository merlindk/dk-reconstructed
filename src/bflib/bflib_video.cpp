/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed & Semantically Named Module: bflib/bflib_video.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 + DK Semantic Analyzer
 * Functions in this translation unit: 4
 */

#include "../../include/dk_types.h"
#include "../../include/dk_structs.h"
#include "../../include/dk_globals.h"
#include "../../include/dk_functions.h"

/******************************************************************************
 * Function : bflib_video_fn_0f0d90 (Original VA: 0xf0d90, Ghidra: FUN_000f0d90)
 * Prototype: undefined8 bflib_video_fn_0f0d90(void);
 * Address  : 0xf0d90 (Size: 209 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Purpose  : Module bflib/bflib_video.cpp procedure @ 0x0f0d90
 * Callers  : 2 -> bflib_system_io_fn_0e79ac, bflib_system_io_fn_0f0e64
 * Callees  : 4 -> LbScreenWaitVbi, bflib_system_io_fn_0ea1f4, bflib_system_io_fn_0fed1d, bflib_system_io_fn_0fed45
 ******************************************************************************/
undefined8 bflib_video_fn_0f0d90(void)

{
  int val;
  undefined4 uval;
  undefined4 arg_edx;
  undefined4 local_8c [7];
  undefined4 local_70;
  undefined2 local_6a;
  undefined2 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_44;
  
  LbScreenWaitVbi();
  local_70 = 0x4f00;
  local_6a = (undefined2)(g_bss_003de9b4 >> 4);
  local_8c[0] = 0;
  local_68 = local_6a;
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  LbScreenWaitVbi();
  bflib_system_io_fn_0fed1d();
  local_58 = 0x300;
  local_54 = 0x10;
  local_44 = (undefined1 *)local_8c;
  bflib_system_io_fn_0fed45();
  val = bflib_system_io_fn_0ea1f4();
  if (val == 0) {
    uval = 1;
  }
  else {
    uval = 0xffffffff;
  }
  return CONCAT44(arg_edx,uval);
}

/******************************************************************************
 * Function : bflib_video_sbawe32_mdi_0f143c (Original VA: 0xf143c, Ghidra: FUN_000f143c)
 * Prototype: undefined8 bflib_video_sbawe32_mdi_0f143c(void);
 * Address  : 0xf143c (Size: 786 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Purpose  : String 'SBAWE32.MDI'
 * Callers  : 3 -> inits_non_keeper_keeper_game_0402e5, sound_process_thing_entity_06f3d6, bflib_video_bf25_init_music_0fe128
 * Callees  : 16 -> dk_sprintf, LbFileOpen, bflib_system_io_fn_0e8a1c, LbMemoryCopy, bflib_system_io_fn_0f09e5, bflib_system_io_fn_0f1018, bflib_system_io_fn_0f10fc, bflib_system_io_fn_0f113f ...
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 bflib_video_sbawe32_mdi_0f143c(void)

{
  undefined6 uval;
  undefined6 uval_2;
  undefined4 uval_3;
  int loop_i;
  int val;
  undefined4 arg_edx;
  char **val_2;
  char **val_3;
  int in_GS_OFFSET;
  undefined8 uval_4;
  int6 val_4;
  char *apcStack_3c [2];
  undefined1 local_34 [20];
  char local_20 [4];
  undefined4 local_1c;
  
  if (g_bss_003df8d0 != '\0') {
    g_bss_003df8f5 = '\x01';
LAB_000f1457:
    uval_3 = 1;
    goto LAB_000f1747;
  }
  if ((g_bss_003df8d1 == '\0') || (g_data_00195d98 == '\0')) {
LAB_000f1729:
    uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
    uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
    val_3 = apcStack_3c + 1;
    apcStack_3c[1] = s_soundfont_load_error___MusicAble_0016e992;
  }
  else {
    apcStack_3c[1] = (char *)0xf148a;
    loop_i = bflib_system_io_fn_0f09e5();
    if (loop_i != 0) goto LAB_000f1729;
    apcStack_3c[1] = (char *)0xf14a1;
    loop_i = bflib_system_io_fn_0f09e5();
    if (loop_i != 0) goto LAB_000f1729;
    if (g_bss_003df8f5 == '\x01') {
      apcStack_3c[1] = (char *)0xf14ba;
      bflib_sound_sbawe32_mdi_0f174e();
      g_bss_003df8f5 = '\0';
    }
    apcStack_3c[1] = (char *)0xf14cd;
    LbMemoryCopy();
    apcStack_3c[1] = s_Bullfrog_001955a4;
    apcStack_3c[0] = &g_bss_003deaac;
    dk_sprintf(local_34,s__s__s_sbk_0016e792);
    apcStack_3c[1] = local_34;
    apcStack_3c[0] = s_Request_awe32_soundfont_load_____0016e79c;
    dk_sprintf(&g_sound_driver_ready);
    apcStack_3c[1] = (char *)0xf150d;
    bflib_system_io_fn_0f9610();
    apcStack_3c[1] = (char *)0xf1515;
    g_bss_003dea84 = LbFileOpen();
    uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
    uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
    if (g_bss_003dea84 == -1) {
      val_3 = apcStack_3c + 1;
      apcStack_3c[1] = s_soundfont_load_error_opening_SBK_0016e96b;
    }
    else {
      apcStack_3c[1] = (char *)0xf1528;
      uval_3 = bflib_system_io_fn_0f7f41();
      apcStack_3c[1] = (char *)0xf1534;
      val_4 = bflib_system_io_fn_0f1018();
      uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
      g_bss_003dea8c = (undefined2)((uint6)val_4 >> 0x20);
      g_bss_003dea88 = (int)val_4;
      if (val_4 == 0) {
        val_3 = apcStack_3c + 1;
        apcStack_3c[1] = s_soundfont_load_error_allocating_f_0016e933;
        uval = 0;
      }
      else {
        apcStack_3c[1] = (char *)0xf1557;
        val = bflib_system_io_fn_0f10fc();
        loop_i = g_bss_003dea88;
        uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
        uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
        if (val == -1) {
          val_3 = apcStack_3c + 1;
          apcStack_3c[1] = s_soundfont_load_error_accessing_R_0016e90a;
        }
        else {
          *(undefined4 *)(in_GS_OFFSET + g_bss_003dea88) = 0;
          *(undefined4 *)(in_GS_OFFSET + loop_i + 4) = uval_3;
          apcStack_3c[1] = (char *)0xf1583;
          loop_i = bflib_system_io_fn_0f113f();
          uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
          uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
          if (loop_i == 0) {
            apcStack_3c[1] = local_20;
            apcStack_3c[0] = (char *)0xf15ab;
            loop_i = watcom_crt_fn_10eb40();
            uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
            uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
            if (loop_i == 0) {
              apcStack_3c[0] = (char *)0xf15d5;
              uval_4 = bflib_system_io_fn_0f11e4();
              uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
              uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
              local_1c = (undefined4)((ulonglong)uval_4 >> 0x20);
              if (((int)uval_4 == 0) && ((short)((ulonglong)uval_4 >> 0x20) == 0)) {
                val_3 = apcStack_3c;
                apcStack_3c[0] = s_soundfont_load_error_during_load_0016e8bb;
              }
              else {
                apcStack_3c[0] = (char *)0xf15fb;
                bflib_system_io_fn_0f7c2e();
                val_2 = apcStack_3c + 1;
                for (loop_i = 0; loop_i < *(short *)(in_GS_OFFSET + (int)uval_4); loop_i = loop_i + 1) {
                  val_2[0xffffffff] = local_20;
                  val_2[0xfffffffe] = (char *)0xf1629;
                  val = watcom_crt_fn_10eb40();
                  uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
                  uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
                  if (val != 0) {
                    val_3 = val_2 + 0xfffffffe;
                    val_2[0xfffffffe] = s_soundfont_load_error_reading_sam_0016e7e8;
                    goto LAB_000f172e;
                  }
                  val_2[0xfffffffe] = (char *)0xf1653;
                  val = bflib_system_io_fn_0f129d();
                  uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
                  uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
                  if (val != 0) {
                    val_3 = val_2 + 0xfffffffe;
                    val_2[0xfffffffe] = s_soundfont_load_error_laoding_pcm_0016e815;
                    goto LAB_000f172e;
                  }
                  val_2 = val_2 + 0xffffffff;
                }
                val_2[0xffffffff] = (char *)0xf166a;
                val_4 = bflib_system_io_fn_0f1018();
                uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
                g_bss_003dea92 = (undefined2)((uint6)val_4 >> 0x20);
                g_bss_003dea8e = (undefined4)val_4;
                if (val_4 == 0) {
                  val_3 = val_2 + 0xffffffff;
                  val_2[0xffffffff] = s_soundfont_load_error_allocating_p_0016e840;
                  uval_2 = 0;
                }
                else {
                  val_2[0xffffffff] = (char *)0xf169c;
                  bflib_system_io_fn_0f7c2e();
                  val_2[0xffffffff] = local_20;
                  val_2[0xfffffffe] = (char *)0xf16be;
                  loop_i = watcom_crt_fn_10eb40();
                  uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
                  uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
                  if (loop_i == 0) {
                    val_2[0xfffffffe] = (char *)0xf16e5;
                    loop_i = bflib_system_io_fn_0f1342();
                    uval_2 = CONCAT24(g_bss_003dea92,g_bss_003dea8e);
                    uval = CONCAT24(g_bss_003dea8c,g_bss_003dea88);
                    if (loop_i == 0) {
                      g_bss_003df8f5 = '\x01';
                      val_2[0xfffffffe] = (char *)0xf1724;
                      bflib_system_io_fn_0e8a1c();
                      goto LAB_000f1457;
                    }
                    val_3 = val_2 + 0xfffffffe;
                    val_2[0xfffffffe] = s_soundfont_load_error_loading_pre_0016e895;
                  }
                  else {
                    val_3 = val_2 + 0xfffffffe;
                    val_2[0xfffffffe] = s_soundfont_load_error_reading_pre_0016e86f;
                  }
                }
              }
            }
            else {
              val_3 = apcStack_3c;
              apcStack_3c[0] = s_soundfont_load_error_reading_SBK_0016e7bf;
            }
          }
          else {
            val_3 = apcStack_3c + 1;
            apcStack_3c[1] = s_soundfont_load_error_defining_ba_0016e8e5;
          }
        }
      }
    }
  }
LAB_000f172e:
  g_bss_003dea92 = (undefined2)((uint6)uval_2 >> 0x20);
  g_bss_003dea8e = (undefined4)uval_2;
  g_bss_003dea8c = (undefined2)((uint6)uval >> 0x20);
  g_bss_003dea88 = (int)uval;
  val_3[-1] = &g_sound_driver_ready;
  val_3[-2] = (char *)0xf1738;
  dk_sprintf();
  *val_3 = (char *)0xf1745;
  bflib_system_io_fn_0f9610();
  uval_3 = 0;
LAB_000f1747:
  return CONCAT44(arg_edx,uval_3);
}

/******************************************************************************
 * Function : bflib_video_bf_debug_audio_0f1b38 (Original VA: 0xf1b38, Ghidra: FUN_000f1b38)
 * Prototype: void bflib_video_bf_debug_audio_0f1b38(void);
 * Address  : 0xf1b38 (Size: 1615 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Purpose  : String 'BF_DEBUG_AUDIO'
 * Callers  : 1 -> inits_fn_045bb8
 * Callees  : 11 -> dk_sprintf, LbMemoryCopy, bflib_sound_bf100_allocate_buffers_streamed_0ea94f, bflib_sound_bf110_cd_non_audio_0ec93f, bflib_system_io_fn_0f0964, bflib_sound_bf3_init_sound_0f8eec, bflib_system_io_fn_0f9610, bflib_sound_AIL_set_driver_directory_0f996b ...
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bflib_video_bf_debug_audio_0f1b38(void)

{
  undefined1 uval;
  undefined2 uval_2;
  int *camera;
  int val;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_bss_003df650 = 1;
  }
  dk_sprintf(&g_sound_driver_ready,s_BUILD__d_compiled__d_0016e9e7,g_data_001955b0,g_data_001955b4);
  bflib_system_io_fn_0f9610();
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    uval = bflib_system_io_fn_0f0964();
    *(undefined1 *)(camera + 4) = uval;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceMaxNumber_0016ea12,uval);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_bss_003debdc = bflib_system_io_fn_0f0964();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceMidiSeque_0016ea5e,(char)camera[4]);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_bss_003debd8 = bflib_system_io_fn_0f0964();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceRedbookTr_0016eaa3,(char)camera[4]);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    uval_2 = bflib_system_io_fn_0f0964();
    *(undefined2 *)(camera + 3) = uval_2;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceSoundType_0016eadf,uval_2);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_data_00195d18 = 0;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceSoundDisa_0016eb1b);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_data_00195d98 = 0;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceMusicDisa_0016eb58);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    *(undefined1 *)((int)camera + 0x19) = 0;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceRedbookDi_0016eb97);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    *(undefined1 *)((int)camera + 0x13) = 1;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceDangerMus_0016ebdd);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    *(undefined1 *)(camera + 5) = 1;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceLoadSound_0016ec25);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    *(undefined1 *)((int)camera + 0x15) = 1;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceLoadMusic_0016ec6b);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    *(undefined1 *)((int)camera + 0x16) = 1;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceSoundfont_0016ecb4);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_bss_003debd0 = bflib_system_io_fn_0f0964();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceSoundMast_0016ecfe,g_bss_003debd0);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_bss_003debcc = bflib_system_io_fn_0f0964();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceMidiMaste_0016ed47,g_bss_003debcc);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_bss_003debd4 = bflib_system_io_fn_0f0964();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceRedbookVo_0016ed8b,g_bss_003debd4);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    *(undefined1 *)((int)camera + 0x11) = 0;
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceMono_0016edc2);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_data_00195d22 = bflib_system_io_fn_0f0964();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceSystemPla_0016edfd,g_data_00195d22);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    LbMemoryCopy();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceSoundDriv_0016ee46,extraout_ECX);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    LbMemoryCopy();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceSoundData_0016ee8a,extraout_ECX_00);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    LbMemoryCopy();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceMusicData_0016eecc,extraout_ECX_01);
    bflib_system_io_fn_0f9610();
  }
  val = watcom_crt_fn_10ed88();
  if (val != 0) {
    g_bss_003debe0 = 1;
    LbMemoryCopy();
    dk_sprintf(&g_sound_driver_ready,s_System_override___ForceMidiType___0016ef08,extraout_ECX_02);
    bflib_system_io_fn_0f9610();
  }
  if (camera[2] != 0) {
    bflib_sound_AIL_set_driver_directory_0f996b(camera[2]);
  }
  LbMemoryCopy();
  LbMemoryCopy();
  if (*camera != 0) {
    LbMemoryCopy();
  }
  if (camera[1] != 0) {
    LbMemoryCopy();
  }
  g_data_00195d14 = (uint)*(byte *)(camera + 4);
  g_bss_003df524 = (undefined2)camera[3];
  if (*(char *)((int)camera + 0x12) == '\0') {
    g_data_00195d1b = 0;
  }
  if (*(char *)((int)camera + 0x11) == '\0') {
    g_data_00195d1c = 0;
  }
  if (*(char *)((int)camera + 0x13) == '\x01') {
    g_bss_003df8f8 = 1;
  }
  if ((char)camera[5] == '\x01') {
    g_bss_003df515 = 1;
  }
  if (*(char *)((int)camera + 0x15) == '\x01') {
    g_bss_003df8f6 = 1;
  }
  if (*(char *)((int)camera + 0x16) == '\x01') {
    g_bss_003df8d0 = 1;
  }
  if (*(char *)((int)camera + 0x17) == '\x01') { /* camera->zoom */
    g_bss_003df52f = 1;
  }
  dk_sprintf(&g_sound_driver_ready,s_BF1___MA__d_0016ef38,g_data_00195d98);
  bflib_system_io_fn_0f9610();
  dk_sprintf(&g_sound_driver_ready,s_BF2___SA__d_0016ef48,g_data_00195d18);
  bflib_system_io_fn_0f9610();
  if (((*(byte *)((int)camera + 0xe) & 1) == 0) && (g_bss_003debec == 0)) {
    g_data_00195d98 = 0;
  }
  if (((*(byte *)((int)camera + 0xe) & 2) == 0) && (g_bss_003debe8 == 0)) {
    g_data_00195d18 = 0;
  }
  bflib_sound_bf3_init_sound_0f8eec();
  bflib_video_bf25_init_music_0fe128();
  watcom_crt_fn_10edec();
  if ((char)camera[6] == '\x01') {
    bflib_sound_bf100_allocate_buffers_streamed_0ea94f();
  }
  if (*(char *)((int)camera + 0x19) == '\x01') {
    bflib_sound_bf110_cd_non_audio_0ec93f();
  }
  dk_sprintf(&g_sound_driver_ready,s_BF54___MA__d_0016ef58,g_data_00195d98);
  bflib_system_io_fn_0f9610();
  dk_sprintf(&g_sound_driver_ready,s_BF55___SA__d_0016ef68,g_data_00195d18);
  bflib_system_io_fn_0f9610();
  dk_sprintf(&g_sound_driver_ready,s_BF56___music_driver____s_0016ef78,&g_bss_003df97c);
  bflib_system_io_fn_0f9610();
  dk_sprintf(&g_sound_driver_ready,s_BF57___sound_driver____s_0016ef92,&g_bss_003df5b8);
  bflib_system_io_fn_0f9610();
  return;
}

/******************************************************************************
 * Function : bflib_video_bf25_init_music_0fe128 (Original VA: 0xfe128, Ghidra: FUN_000fe128)
 * Prototype: void bflib_video_bf25_init_music_0fe128(void);
 * Address  : 0xfe128 (Size: 1846 bytes)
 * Module   : bflib/bflib_video.cpp [bflib_video_signature]
 * Purpose  : String 'BF25 - Init Music'
 * Callers  : 1 -> bflib_video_bf_debug_audio_0f1b38
 * Callees  : 21 -> dk_sprintf, bflib_system_io_fn_0f09e5, bflib_video_sbawe32_mdi_0f143c, bflib_sound_sbawe32_mdi_0f174e, bflib_system_io_fn_0f25b4, bflib_system_io_fn_0f3264, bflib_system_io_fn_0f9610, bflib_sound_AIL_shutdown_0f98ca ...
 ******************************************************************************/
void bflib_video_bf25_init_music_0fe128(void)

{
  bool flag;
  int val;
  undefined *word_ptr;
  undefined4 extraout_EDX;
  char *str_ptr;
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  undefined1 local_38 [2];
  undefined1 local_36 [2];
  undefined1 local_34 [2];
  undefined1 local_32 [18];
  undefined1 local_20 [16];
  
  flag = false;
  if (g_data_00195d98 == '\0') {
    return;
  }
  dk_sprintf(&g_sound_driver_ready,s_BF25___Init_Music_00170ebc);
  bflib_system_io_fn_0f9610();
  if (g_bss_003df52a == '\0') {
    bflib_system_io_fn_0fe870(LbFileLoadAt);
    bflib_system_io_fn_0fe883(bflib_system_io_fn_0e94b0);
    bflib_sound_AIL_startup_0fee88();
    g_bss_003df52a = '\x01';
  }
  bflib_sound_AIL_set_preference_0f99cc(0xb,0x78);
  bflib_sound_AIL_set_preference_0f99cc(0xc,1);
  bflib_sound_AIL_set_preference_0f99cc(0xd,0x7f);
  bflib_sound_AIL_set_preference_0f99cc(0xe,1);
  bflib_sound_AIL_set_preference_0f99cc(0xf,0);
  bflib_sound_AIL_set_preference_0f99cc(0x10,0xc);
  if (g_data_00195d1b == '\0') {
    bflib_sound_AIL_set_preference_0f99cc(0x11,0);
  }
  dk_sprintf(local_158,s_SAMPLE_00170ecf);
  bflib_sound_AIL_set_GTL_filename_prefix_0fbd90(local_158);
  dk_sprintf(local_c8,s__s_ad_00170ed6,local_158);
  dk_sprintf(local_c8,s__s_opl_00170edc,local_158);
  val = watcom_crt_fn_10ed88();
  if (val == 0) {
    val = bflib_sound_AIL_API_read_INI_0f9d16(&g_bss_003df8fc,s_MDI_INI_00170fa9);
    if (val == 0) {
      dk_sprintf(&g_sound_driver_ready,s_BF36___Search_for_MDI_INI___fail_0017105f);
    }
    else {
      dk_sprintf(&g_sound_driver_ready,s_BF32___Search_for_MDI_INI___pass_00170fb1);
      bflib_system_io_fn_0f9610();
      val = bflib_system_io_fn_0f09e5();
      if (val == 0) {
        str_ptr = s_BF33___user_requests_no_music_in_00170fda;
        goto LAB_000fe2af;
      }
      val = bflib_sound_AIL_install_MDI_INI_0fb598(&g_bss_003df8e9);
      if (val == 0) {
        dk_sprintf(&g_sound_driver_ready,s_BF34___MDI_INI_driver_installati_00171005);
        flag = true;
      }
      else {
        dk_sprintf(&g_sound_driver_ready,s_BF35___MDI_INI_driver_installati_00171032);
      }
    }
    bflib_system_io_fn_0f9610();
    if (!flag) {
      dk_sprintf(&g_sound_driver_ready,s_BF37___all_music_driver_installa_00171083,&g_bss_003e03f0);
      goto LAB_000fe2bc;
    }
  }
  else {
    dk_sprintf(&g_sound_driver_ready,s_BF29___Force_midi_driver_environ_00170ef8);
    bflib_system_io_fn_0f9610();
    watcom_crt_fn_113b5b(extraout_EDX,s__s__x__d__d__d_00170f25,local_20,local_38,local_36,local_34,local_32
                );
    g_bss_003df8e9 = bflib_sound_AIL_install_MDI_driver_file_0fb5f6(local_20,local_38);
    if (g_bss_003df8e9 == 0) {
      str_ptr = s_BF30___MDMUSIC_environment_drive_00170f34;
LAB_000fe2af:
      dk_sprintf(&g_sound_driver_ready,str_ptr);
LAB_000fe2bc:
      bflib_system_io_fn_0f9610();
      goto LAB_000fe2c6;
    }
    dk_sprintf(&g_sound_driver_ready,s_BF31___MDMUSIC_environment_drive_00170f6d);
    bflib_system_io_fn_0f9610();
    dk_sprintf(&g_bss_003df97c,&g_data_00170fa6,local_20);
  }
  g_bss_003df8ed = bflib_sound_AIL_allocate_sequence_handle_0fb6b8(g_bss_003df8e9);
  if (g_bss_003debe0 == 0) {
    val = bflib_system_io_fn_0f09e5();
    if (val == 0) {
      word_ptr = &g_data_001710c8;
    }
    else {
      val = bflib_system_io_fn_0f09e5();
      if (val == 0) {
        word_ptr = &g_data_001710d5;
      }
      else {
        val = bflib_system_io_fn_0f09e5();
        if (val == 0) {
          word_ptr = &g_data_001710e0;
        }
        else {
          val = bflib_system_io_fn_0f09e5();
          if (val == 0) {
            word_ptr = &g_data_001710ea;
          }
          else {
            val = bflib_system_io_fn_0f09e5();
            if (val == 0) {
              word_ptr = &g_data_001710f8;
            }
            else {
              val = bflib_system_io_fn_0f09e5();
              if (val == 0) {
                word_ptr = &g_data_00171107;
              }
              else {
                val = bflib_system_io_fn_0f09e5();
                if (val == 0) {
                  word_ptr = &g_data_00171114;
                }
                else {
                  val = bflib_system_io_fn_0f09e5();
                  if (val == 0) {
                    word_ptr = &g_data_00171121;
                  }
                  else {
                    val = bflib_system_io_fn_0f09e5();
                    if (val == 0) {
                      word_ptr = &g_data_0017112c;
                    }
                    else {
                      val = bflib_system_io_fn_0f09e5();
                      if (val == 0) {
                        dk_sprintf(&g_bss_003df8d2,&g_data_0017113a);
                        g_bss_003df8d1 = 1;
                        bflib_video_sbawe32_mdi_0f143c();
                        g_bss_003df8d1 = 0;
                        if (g_bss_003df8f5 == '\0') {
                          dk_sprintf(&g_bss_003df8d2,&g_data_0017113c);
                          str_ptr = s_BF38___awe32_soundfont_not_loade_0017113e;
                        }
                        else {
                          str_ptr = s_BF38___awe32_soundfont_loaded_00171161;
                        }
                        dk_sprintf(&g_sound_driver_ready,str_ptr);
                        bflib_system_io_fn_0f9610();
                        goto LAB_000fe6b2;
                      }
                      val = bflib_system_io_fn_0f09e5();
                      if (val == 0) {
                        word_ptr = &g_data_0017118b;
                      }
                      else {
                        val = bflib_system_io_fn_0f09e5();
                        if (val == 0) {
                          word_ptr = &g_data_0017119a;
                        }
                        else {
                          val = bflib_system_io_fn_0f09e5();
                          if (val == 0) {
                            word_ptr = &g_data_001711a6;
                          }
                          else {
                            val = bflib_system_io_fn_0f09e5();
                            if (val == 0) {
                              word_ptr = &g_data_001711b4;
                            }
                            else {
                              val = bflib_sound_AIL_MDI_driver_type_0fbd32(g_bss_003df8e9);
                              if (val == 0) {
                                word_ptr = &g_data_001711b6;
                              }
                              else {
                                val = bflib_sound_AIL_MDI_driver_type_0fbd32(g_bss_003df8e9);
                                if ((val != 1) && (val = bflib_sound_AIL_MDI_driver_type_0fbd32(g_bss_003df8e9), val != 2)
                                   ) {
                                  bflib_sound_AIL_uninstall_MDI_driver_0fb65a(g_bss_003df8e9);
                                  if (g_data_00195d18 == '\0') {
                                    bflib_sound_AIL_shutdown_0f98ca();
                                  }
                                  g_data_00195d98 = 0;
                                  g_data_00195d99 = 0;
                                  dk_sprintf(&g_sound_driver_ready,
                                               s_BF39___music_driver_type_not_sup_001711ba);
                                  bflib_system_io_fn_0f9610();
                                  return;
                                }
                                word_ptr = &g_data_001711b8;
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
    dk_sprintf(&g_bss_003df8d2,word_ptr);
  }
LAB_000fe6b2:
  if (g_bss_003df8f6 != '\0') {
    str_ptr = s_BF40___LoadMusic_Disabled_0017129e;
LAB_000fe7ff:
    dk_sprintf(&g_sound_driver_ready,str_ptr);
    bflib_system_io_fn_0f9610();
    dk_sprintf(&g_sound_driver_ready,s_BF41___Init_music_completed_001712b9);
    bflib_system_io_fn_0f9610();
    g_bss_003df8d1 = 1;
    bflib_system_io_fn_0f3264();
    return;
  }
  dk_sprintf(&g_sound_driver_ready,s_BF40___music_s_bank_allocation_001711e2,&g_bss_003df8d2);
  bflib_system_io_fn_0f9610();
  g_bss_003df8cc = bflib_system_io_fn_0f25b4();
  if (((g_bss_003debe0 == 0) && (val = bflib_system_io_fn_0f09e5(), val == 0)) && (g_bss_003df8cc == -2)) {
    dk_sprintf(&g_sound_driver_ready,s___not_present_in_music_dat_00171203);
    bflib_system_io_fn_0f9610();
    dk_sprintf(&g_bss_003df8d2,&g_data_00171220);
    dk_sprintf(&g_sound_driver_ready,s_BF40A___music_s_bank_allocation_00171222,&g_bss_003df8d2);
    bflib_system_io_fn_0f9610();
    g_bss_003df8cc = bflib_system_io_fn_0f25b4();
  }
  if (0 < g_bss_003df8cc) {
    str_ptr = s___allocation_successful_00171284;
    goto LAB_000fe7ff;
  }
  if (g_bss_003df8cc == -1) {
    str_ptr = s___no_music_dat_00171242;
LAB_000fe7a3:
    dk_sprintf(&g_sound_driver_ready,str_ptr);
    bflib_system_io_fn_0f9610();
  }
  else {
    if (g_bss_003df8cc == 0) {
      str_ptr = s___cannot_allocate_00171253;
      goto LAB_000fe7a3;
    }
    if (g_bss_003df8cc == -2) {
      str_ptr = s___not_present_in_music_dat_00171267;
      goto LAB_000fe7a3;
    }
  }
  if (g_bss_003df8f5 == '\x01') {
    g_bss_003df8d1 = 1;
    bflib_sound_sbawe32_mdi_0f174e();
    g_bss_003df8d1 = 0;
    g_bss_003df8f5 = '\0';
  }
  bflib_sound_AIL_uninstall_MDI_driver_0fb65a(g_bss_003df8e9);
LAB_000fe2c6:
  if (g_data_00195d18 == '\0') {
    bflib_sound_AIL_shutdown_0f98ca();
  }
  g_data_00195d99 = 0;
  g_data_00195d98 = 0;
  return;
}

