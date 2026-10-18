/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: train.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 8
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_074e70 (Ghidra: FUN_00074e70)
 * Prototype: undefined8 sub_074e70(void);
 * Address  : 0x74e70 (Size: 208 bytes)
 * Module   : train.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x51374, 0x63b6d, 0x64ae7, 0x750f8, 0x75b1e, 0x75b48, 0xcd85c, 0xd0f50
 ******************************************************************************/
undefined8 FUN_00074e70(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar1 + 0x80) = 0;
  iVar3 = FUN_00075b48();
  if (iVar3 != 0) {
    iVar3 = FUN_00075b1e();
    if (iVar3 == 0) {
      if ((int)*(char *)(extraout_ECX + 6) ==
          (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
    }
    else {
      iVar3 = FUN_000d0f50();
      if (((iVar3 != 0) && (*(short *)(iVar3 + 10) == 6)) &&
         (*(char *)(iVar3 + 3) == *(char *)(extraout_ECX_00 + 6))) {
        cVar2 = FUN_000cd85c();
        if (cVar2 != '\0') {
          FUN_00064ae7();
          FUN_000750f8();
          uVar4 = 1;
          *(undefined4 *)(iVar1 + 0x82) = 0;
          goto LAB_00074f3a;
        }
      }
    }
  }
  FUN_00063b6d();
  uVar4 = 0;
LAB_00074f3a:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : dk_take_money_am_supposed_074f40 (Ghidra: FUN_00074f40)
 * Prototype: undefined8 dk_take_money_am_supposed_074f40(void);
 * Address  : 0x74f40 (Size: 440 bytes)
 * Module   : train.cpp [direct_file_string_xref]
 * OrigLine : train.cpp:81 ("CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON")
 * Naming   : String 'CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DU'
 * Callers  : 0 -> 
 * Callees  : 12 -> 0x23868, 0x444a9, 0x51374, 0x64a5f, 0x67018, 0x752c3, 0x75b1e, 0x75b48, 0x81f04, 0xcd9b0 ...
 * Strings  :
 *   - 0x167b46: "train.cpp"
 *   - 0x167b04: "CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON"
 ******************************************************************************/
undefined8 FUN_00074f40(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar3 = FUN_00075b48();
  if (iVar3 != 0) {
    iVar3 = FUN_00075b1e();
    if (iVar3 == 0) {
      if ((int)*(char *)(extraout_ECX + 6) ==
          (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
        FUN_00051374();
      }
    }
    else {
      iVar3 = FUN_000d0f50();
      if ((((iVar3 != 0) && (*(short *)(iVar3 + 10) == 6)) &&
          (*(short *)(iVar3 + 1) == *(short *)(iVar1 + 0x7e))) &&
         (*(char *)(iVar3 + 3) == *(char *)(extraout_ECX_00 + 6))) {
        iVar3 = *(int *)(iVar1 + 0x82);
        *(int *)(iVar1 + 0x82) = iVar3 + 1;
        if (DAT_002ed442 < iVar3) {
          *(int *)(iVar1 + 0x82) = *(int *)(iVar1 + 0x82) - DAT_002ed442;
          iVar3 = FUN_00023868();
          if (iVar3 < 0) {
            FUN_000ddaf0(); /* LbErrorLog("train.cpp", line 81, "CANNOT TAKE MONEY I AM SUPPOSED TO BE ABLE TO AFFORD FROM DUNGEON") */
          }
          iVar3 = FUN_000444a9();
          if (iVar3 != 0) {
            *(uint *)(iVar3 + 0x13) =
                 (uint)*(ushort *)(&DAT_002e912c + (uint)*(byte *)(extraout_ECX_01 + 0x1a) * 0xe6);
          }
        }
        if (*(char *)(iVar1 + 0xd2) == '\0') {
          iVar3 = FUN_00081f04();
          if (iVar3 == 0) goto LAB_0007503c;
          cVar2 = FUN_00064a5f();
          if (cVar2 != '\0') {
            *(undefined2 *)(iVar1 + 0x282) = 0x32;
          }
          *(int *)(&DAT_002e17c8 + *(char *)(extraout_ECX_03 + 6) * 0x1508) =
               *(int *)(&DAT_002e17c8 + *(char *)(extraout_ECX_03 + 6) * 0x1508) + 1;
        }
        else {
LAB_0007503c:
          iVar3 = FUN_00067018();
          *(int *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + iVar3;
          (&DAT_002e1702)[*(char *)(extraout_ECX_02 + 6) * 0x542] =
               (&DAT_002e1702)[*(char *)(extraout_ECX_02 + 6) * 0x542] + iVar3;
          FUN_000752c3();
        }
        uVar4 = 1;
        goto LAB_00074f3a;
      }
    }
  }
  FUN_000cd9b0();
  FUN_00063b6d();
  uVar4 = 0;
LAB_00074f3a:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0750f8 (Ghidra: FUN_000750f8)
 * Prototype: void sub_0750f8(void);
 * Address  : 0x750f8 (Size: 322 bytes)
 * Module   : train.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x74e70, 0x752c3, 0x759cc
 * Callees  : 3 -> 0x49bfc, 0x7523a, 0xcc968
 ******************************************************************************/
void FUN_000750f8(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int in_EDX;
  int unaff_EBX;
  
  iVar5 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (unaff_EBX != 0) {
    *(undefined1 *)(iVar5 + 0x9e) = 0x32;
  }
  if ((byte)(&DAT_002e91b0)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != 0) {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    if (DAT_002e8bf6 % (uint)(byte)(&DAT_002e91b0)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] == 0) {
      uVar1 = *(ushort *)(in_EDX + 0x3d);
      while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
        iVar3 = (&DAT_001b0a00)[*(ushort *)(uVar2 + 100)];
        if ((uVar2 != in_EAX) && (*(short *)(iVar3 + 0x9f) == 0)) {
          *(undefined1 *)(iVar3 + 0x9a) = 6;
          *(undefined1 *)(iVar3 + 0x9b) = 0x4b;
          *(undefined2 *)(iVar3 + 0x9f) = *(undefined2 *)(in_EAX + 0x1b);
          *(undefined4 *)(iVar3 + 0xa1) = *(undefined4 *)(in_EAX + 9);
          *(undefined1 *)(iVar5 + 0x9a) = 6;
          *(undefined1 *)(iVar5 + 0x9b) = 0x4b;
          *(undefined2 *)(iVar5 + 0x9f) = *(undefined2 *)(uVar2 + 0x1b);
          *(undefined4 *)(iVar5 + 0xa1) = *(undefined4 *)(uVar2 + 9);
          return;
        }
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2aa);
      }
    }
  }
  *(undefined1 *)(iVar5 + 0x9a) = 1;
  cVar4 = FUN_000cc968();
  iVar5 = extraout_ECX;
  if (cVar4 != '\0') {
    FUN_0007523a();
    iVar5 = extraout_ECX_00;
  }
  if (*(char *)(iVar5 + 0xd2) == '\0') {
    FUN_00049bfc(0);
  }
  return;
}

/******************************************************************************
 * Function : dk_illegal_setup_07523a (Ghidra: FUN_0007523a)
 * Prototype: void dk_illegal_setup_07523a(void);
 * Address  : 0x7523a (Size: 137 bytes)
 * Module   : train.cpp [direct_file_string_xref]
 * OrigLine : train.cpp:210
 * Naming   : String 'Illegal setup to X%d Y%d'
 * Callers  : 3 -> 0x750f8, 0x752c3, 0x759cc
 * Callees  : 5 -> 0x63b6d, 0x7dbc0, 0xb28e8, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x167b69: "train.cpp"
 *   - 0x167b50: "Illegal setup to X%d Y%d"
 ******************************************************************************/
void FUN_0007523a(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_EAX;
  int iVar3;
  int in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(char *)(iVar1 + 0x2e) = (char)(in_EDX % 0x100);
  *(undefined1 *)(iVar1 + 0x2d) = 0x80;
  *(char *)(iVar1 + 0x30) = (char)(in_EDX / 0x100);
  *(undefined1 *)(iVar1 + 0x2f) = 0x80;
  uVar2 = FUN_000b28e8();
  *(undefined2 *)(iVar1 + 0x31) = uVar2;
  iVar3 = FUN_0007dbc0();
  if (iVar3 != 0) {
    FUN_000e7714(&DAT_0019cbac,s_Illegal_setup_to_X_d_Y_d_00167b50,*(undefined1 *)(iVar1 + 0x2e),
                 *(undefined1 *)(iVar1 + 0x30));
    FUN_000ddaf0(); /* LbErrorLog("train.cpp", line 210, g_log_buf) */
    FUN_00063b6d();
  }
  return;
}

/******************************************************************************
 * Function : dk_get_where_we_re_0752c3 (Ghidra: FUN_000752c3)
 * Prototype: uint dk_get_where_we_re_0752c3(void);
 * Address  : 0x752c3 (Size: 1801 bytes)
 * Module   : train.cpp [direct_file_string_xref]
 * OrigLine : train.cpp:322 ("Cannot get where we're going in the training room."); train.cpp:448 ("CANNOT NAVIGATE TO TRAINING PARTNER")
 * Naming   : String 'Cannot get where we're going in the training room.'
 * Callers  : 1 -> 0x74f40
 * Callees  : 10 -> 0x10010, 0x1671a, 0x189d4, 0x49bfc, 0x63b6d, 0x750f8, 0x7523a, 0x759cc, 0xb4ac4, 0xddaf0
 * Strings  :
 *   - 0x167ba6: "train.cpp"
 *   - 0x167be3: "train.cpp"
 *   - 0x167c11: "train.cpp"
 *   - 0x167b73: "Cannot get where we're going in the training room."
 *   - 0x167bb0: "Cannot get where we're going in the training room."
 *   - 0x167bed: "CANNOT NAVIGATE TO TRAINING PARTNER"
 ******************************************************************************/
uint FUN_000752c3(void)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  undefined1 *in_EDX;
  int iVar8;
  short *psVar9;
  undefined4 uStack_44;
  short local_40;
  short local_3e;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  uint local_1c;
  undefined1 *local_18;
  
  iVar5 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  cVar2 = *(char *)(iVar5 + 0x9a);
  *(undefined4 *)(iVar5 + 0x4a) = 0;
  if (cVar2 == '\x01') {
    if (*(char *)(iVar5 + 0xd2) != '\0') {
      return 1;
    }
    *(char *)(iVar5 + 0x9e) = *(char *)(iVar5 + 0x9e) + -1;
    if (*(char *)(iVar5 + 0x9e) < '\x01') {
      uStack_44 = 0x75317;
      uVar3 = FUN_000759cc();
LAB_00075317:
      *(undefined1 *)(iVar5 + 0x9e) = 0x32;
      return uVar3;
    }
    uStack_44 = 0;
    cVar2 = FUN_000b4ac4();
    uVar3 = (uint)cVar2;
    if (uVar3 != 1) {
joined_r0x00075726:
      if (uVar3 != 0xffffffff) {
        return uVar3;
      }
      FUN_000ddaf0(); /* LbErrorLog("train.cpp", line 322, "Cannot get where we're going in the training room.") */
      uVar3 = FUN_00063b6d();
      return uVar3;
    }
    for (uVar6 = (*(uint *)((int)&DAT_00279203 +
                           (((&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 3 + 1) * 0x100 +
                           (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] * 3 + 1) * 5 + 1) & 0x3fffff) >>
                 0xb; psVar9 = (short *)&uStack_44, uVar6 != 0;
        uVar6 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar6] + 2)) {
      iVar4 = (&DAT_001ae9fc)[uVar6];
      if (((*(char *)(iVar4 + 0x1f) == '\x01') && (*(char *)(iVar4 + 0x1a) == '\x1f')) &&
         (uVar3 = CONCAT31((int3)((uint)iVar4 >> 8),*(char *)(iVar4 + 6)),
         *(char *)(iVar4 + 6) == *(char *)(in_EAX + 6))) {
        *(undefined1 *)(iVar5 + 0x9a) = 2;
        goto LAB_00075317;
      }
    }
  }
  else if (cVar2 == '\x02') {
    local_28 = (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
    local_24 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)];
    local_2c = 0;
    for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 2) {
      iVar8 = (char)(&DAT_0018b67f)[iVar4] + local_24;
      local_34 = (int)*(char *)((int)&DAT_0018b67b + iVar4 + 3);
      iVar7 = local_28 + local_34;
      if ((&DAT_002d33c5)[(iVar8 * 0x55 + iVar7) * 6] == '\x18') {
        local_30 = iVar7 * 3;
        local_38 = (uint)((&DAT_002d33ca)
                          [((&DAT_0019033f)[iVar7 * 3] + (&DAT_0019033f)[iVar8 * 3] * 0x55) * 6] & 7
                         );
        if ((int)*(char *)(in_EAX + 6) == local_38) {
          local_1c = (*(uint *)((int)&DAT_00279203 +
                               ((char)(&DAT_001917b0)[iVar4] + local_30 +
                               (iVar8 * 3 + (int)(char)(&DAT_001917b1)[iVar4]) * 0x100) * 5 + 1) &
                     0x3fffff) >> 0xb;
          while ((local_1c != 0 &&
                 ((((iVar7 = (&DAT_001ae9fc)[local_1c], *(char *)(iVar7 + 0x1f) != '\x05' ||
                    (*(char *)(iVar7 + 7) != '!')) ||
                   (*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar7 + 100)] + 0x9a) < 2)) ||
                  (*(char *)(iVar7 + 6) != *(char *)(in_EAX + 6)))))) {
            local_1c = (uint)*(ushort *)((&DAT_001ae9fc)[local_1c] + 2);
          }
          if (local_1c == 0) {
            local_1c = (*(uint *)((int)&DAT_00279203 +
                                 ((*(char *)((int)&DAT_0018b67b + iVar4 + 3) + local_28) * 3 +
                                  ((char)(&DAT_0018b67f)[iVar4] + local_24) * 0x300 + 0x101) * 5 + 1
                                 ) & 0x3fffff) >> 0xb;
            while ((local_1c != 0 &&
                   (((iVar7 = (&DAT_001ae9fc)[local_1c], *(char *)(iVar7 + 0x1f) != '\x01' ||
                     (*(char *)(iVar7 + 0x1a) != '\x1f')) ||
                    (*(char *)(iVar7 + 6) != *(char *)(in_EAX + 6)))))) {
              local_1c = (uint)*(ushort *)((&DAT_001ae9fc)[local_1c] + 2);
            }
          }
          if (local_1c == 0) {
            *(char *)(iVar5 + 0x9c) =
                 *(char *)(&DAT_0019033b + *(byte *)(in_EAX + 0xe)) * '\x03' + '\x01';
            *(char *)(iVar5 + 0x9d) =
                 *(char *)(&DAT_0019033b + *(byte *)(in_EAX + 0x10)) * '\x03' + '\x01';
            local_28 = (*(char *)((int)&DAT_0018b67b + local_2c * 2 + 3) + local_28) * 3 +
                       (int)(char)(&DAT_001917b0)[local_2c * 2];
            local_24 = ((char)(&DAT_0018b67f)[local_2c * 2] + local_24) * 3 +
                       (int)(char)(&DAT_001917b1)[local_2c * 2];
            uStack_44 = 0x7561e;
            FUN_0007523a();
            *(undefined1 *)(iVar5 + 0x9a) = 3;
            break;
          }
        }
      }
      local_2c = local_2c + 1;
    }
    psVar9 = &local_40;
    if (*(byte *)(iVar5 + 0x9a) != 2) {
      return (uint)*(byte *)(iVar5 + 0x9a);
    }
  }
  else {
    if (cVar2 == '\x03') {
      uStack_44 = 0;
      cVar2 = FUN_000b4ac4();
      uVar3 = (uint)cVar2;
      if (uVar3 == 1) {
        uVar3 = (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe)) * 5;
        uVar6 = (*(uint *)((int)&DAT_00279203 + uVar3 + 1) & 0x3fffff) >> 0xb;
        do {
          iVar4 = 0;
          if (uVar6 == 0) {
LAB_0007570f:
            if (iVar4 != 0) {
              return uVar3;
            }
            *(undefined1 *)(iVar5 + 0x9a) = 4;
            return uVar3;
          }
          uVar3 = uVar6 * 4;
          if ((((in_EAX != (&DAT_001ae9fc)[uVar6]) &&
               (uVar3 = (&DAT_001ae9fc)[uVar6], *(char *)(uVar3 + 0x1f) == '\x05')) &&
              (*(char *)(uVar3 + 7) == '!')) &&
             ((1 < *(byte *)((&DAT_001b0a00)[*(ushort *)(uVar3 + 100)] + 0x9a) &&
              (pcVar1 = (char *)(uVar3 + 6), uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar1),
              *pcVar1 == *(char *)(in_EAX + 6))))) {
            uVar3 = FUN_000750f8();
            iVar4 = extraout_ECX;
            goto LAB_0007570f;
          }
          uVar6 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar6] + 2);
        } while( true );
      }
      goto joined_r0x00075726;
    }
    if (cVar2 == '\x04') {
      local_40 = (ushort)*(byte *)(iVar5 + 0x9c) * 0x100 + 0x80;
      local_3e = (ushort)*(byte *)(iVar5 + 0x9d) * 0x100 + 0x80;
      uStack_44 = 0x75777;
      uVar3 = FUN_00010010();
      if (0x37 < (int)uVar3) {
        return uVar3;
      }
      *(undefined1 *)(iVar5 + 0x9a) = 5;
      *(undefined1 *)(iVar5 + 0x9b) = 0x4b;
      return uVar3;
    }
    if (cVar2 == '\x06') {
      psVar9 = &local_40;
      if (((*(ushort *)(iVar5 + 0x9f) != 0) &&
          (local_20 = (byte *)(&DAT_001ae9fc)[*(ushort *)(iVar5 + 0x9f)], psVar9 = &local_40,
          *(int *)(local_20 + 9) == *(int *)(iVar5 + 0xa1))) &&
         (psVar9 = &local_40, (*local_20 & 1) != 0)) {
        if ((*(short *)((&DAT_001b0a00)[*(ushort *)(local_20 + 100)] + 0x9f) ==
             *(short *)(in_EAX + 0x1b)) &&
           (local_38 = (&DAT_0019033b)[(int)(uint)CONCAT11(local_20[0x10],local_20[0xe]) >> 8] *
                       0x55,
           &DAT_002ddd1b +
           (uint)(byte)(&DAT_002d33c8)
                       [((&DAT_0019033b)[(uint)CONCAT11(local_20[0x10],local_20[0xe]) % 0x100] +
                        local_38) * 6] * 0x45 == in_EDX)) {
          uStack_44 = 0x7585b;
          local_18 = in_EDX;
          iVar4 = FUN_000189d4();
          if (0x11c < iVar4) {
            uStack_44 = 0;
            uVar3 = FUN_000b4ac4();
            if (uVar3 != 0xffffffff) {
              return uVar3;
            }
            FUN_000ddaf0(); /* LbErrorLog("train.cpp", line 448, "CANNOT NAVIGATE TO TRAINING PARTNER") */
            uVar3 = FUN_000750f8();
            *(undefined2 *)(iVar5 + 0x9f) = 0;
            return uVar3;
          }
          if (iVar4 < 0x9c) {
            uStack_44 = 0x758cf;
            uVar3 = FUN_0001671a();
            return uVar3;
          }
          uStack_44 = 0x758dd;
          uVar3 = FUN_00010010();
          if (0x37 < (int)uVar3) {
            return uVar3;
          }
          *(char *)(iVar5 + 0x9b) = *(char *)(iVar5 + 0x9b) + -1;
          uVar3 = (uint)*(char *)(iVar5 + 0x9b);
          if ((int)uVar3 < 1) {
            if (*(char *)(iVar5 + 0xd2) == '\0') {
              uStack_44 = 0x75915;
              FUN_000750f8();
              *(undefined2 *)(iVar5 + 0x9f) = 0;
            }
            else {
              *(undefined1 *)(iVar5 + 0x9b) = 1;
            }
            iVar5 = (uint)*(ushort *)(local_18 + 0x3f) *
                    (uint)(byte)(&DAT_002e91a4)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] * 0x100;
            iVar4 = iVar5 >> 0x1f;
            uVar3 = (int)((iVar5 + iVar4 * -0x100) - (uint)(iVar4 << 7 < 0)) >> 8;
            *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x24) =
                 *(int *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x24) + uVar3;
            return uVar3;
          }
          cVar2 = *(char *)(iVar5 + 0xd2);
          goto joined_r0x000759a7;
        }
        *(undefined2 *)(iVar5 + 0x9f) = 0;
        psVar9 = &local_40;
      }
    }
    else {
      *(char *)(iVar5 + 0x9b) = *(char *)(iVar5 + 0x9b) + -1;
      uVar3 = (uint)*(char *)(iVar5 + 0x9b);
      if (0 < (int)uVar3) {
        cVar2 = *(char *)(iVar5 + 0xd2);
joined_r0x000759a7:
        if (cVar2 != '\0') {
          return uVar3;
        }
        if ((int)uVar3 % 8 != 0) {
          return (int)uVar3 / 8;
        }
        uStack_44 = 0;
        uVar3 = FUN_00049bfc();
        return uVar3;
      }
      psVar9 = &local_40;
      if (*(char *)(iVar5 + 0xd2) != '\0') {
        *(undefined1 *)(iVar5 + 0x9b) = 1;
        return uVar3;
      }
    }
  }
  *(undefined4 *)((int)psVar9 + -4) = 0x75644;
  uVar3 = FUN_000750f8();
  return uVar3;
}

/******************************************************************************
 * Function : sub_0759cc (Ghidra: FUN_000759cc)
 * Prototype: void sub_0759cc(void);
 * Address  : 0x759cc (Size: 338 bytes)
 * Module   : train.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x752c3
 * Callees  : 2 -> 0x750f8, 0x7523a
 ******************************************************************************/
void FUN_000759cc(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_24;
  int local_20;
  
  iVar6 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                       (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45;
  local_24 = 0xffffffff;
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar4 = DAT_002e8bf6 % (uint)*(ushort *)(&DAT_002ddd56 + iVar6);
  uVar1 = *(ushort *)(&DAT_002ddd52 + iVar6);
  while ((uVar5 = (uint)uVar1, 0 < (int)uVar4 && (uVar5 != 0))) {
    uVar4 = uVar4 - 1;
    uVar1 = *(ushort *)(&DAT_002d33c6 + uVar5 * 6);
  }
  for (local_20 = 0; local_20 < (int)(uint)*(ushort *)(&DAT_002ddd56 + iVar6);
      local_20 = local_20 + 1) {
    if (uVar5 == 0) {
      uVar5 = (uint)*(ushort *)(&DAT_002ddd52 + iVar6);
    }
    uVar4 = (*(uint *)((int)&DAT_00279203 +
                      ((uVar5 % 0x55) * 3 + (uVar5 / 0x55) * 0x300 + 0x101) * 5 + 1) & 0x3fffff) >>
            0xb;
    while ((uVar3 = local_24, uVar4 != 0 &&
           (((iVar2 = (&DAT_001ae9fc)[uVar4], *(char *)(iVar2 + 0x1f) != '\x01' ||
             (*(char *)(iVar2 + 0x1a) != '\x1f')) ||
            (uVar3 = uVar4, *(char *)(iVar2 + 6) != *(char *)(in_EAX + 6)))))) {
      uVar4 = (uint)*(ushort *)((&DAT_001ae9fc)[uVar4] + 2);
    }
    local_24 = uVar3;
    uVar5 = (uint)*(ushort *)(&DAT_002d33c6 + uVar5 * 6);
  }
  if (local_24 == 0xffffffff) {
    FUN_000750f8();
  }
  else {
    FUN_0007523a();
  }
  return;
}

/******************************************************************************
 * Function : sub_075b1e (Ghidra: FUN_00075b1e)
 * Prototype: undefined8 sub_075b1e(void);
 * Address  : 0x75b1e (Size: 42 bytes)
 * Module   : train.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x3df64, 0x74e70, 0x74f40
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00075b1e(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  return CONCAT44(in_EDX,(uint)((int)(uint)*(ushort *)
                                            (&DAT_002e912c + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6)
                               <= (int)(&DAT_002e1082)[*(char *)(in_EAX + 6) * 0x542]));
}

/******************************************************************************
 * Function : sub_075b48 (Ghidra: FUN_00075b48)
 * Prototype: longlong sub_075b48(void);
 * Address  : 0x75b48 (Size: 86 bytes)
 * Module   : train.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x2796f, 0x3df64, 0x52734, 0x74e70, 0x74f40, 0xcb33c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00075b48(void)

{
  int in_EAX;
  uint in_EDX;
  int iVar1;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  if ((((&DAT_002e91a4)[iVar1] != '\0') &&
      ((int)(uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) <
       (int)(&DAT_002e0fd8)[*(char *)(in_EAX + 6) * 0x542 + (uint)*(byte *)(in_EAX + 0x1a)])) &&
     ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) < 9 ||
      (*(short *)(&DAT_002e915c + iVar1) != 0)))) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

