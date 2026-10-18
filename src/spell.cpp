/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: spell.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 13
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_spell_type_thing_0713cc (Ghidra: FUN_000713cc)
 * Prototype: int dk_spell_type_thing_0713cc(void);
 * Address  : 0x713cc (Size: 74 bytes)
 * Module   : spell.cpp [direct_file_string_xref]
 * OrigLine : spell.cpp:22 ("NO SPELL OF TYPE ON THING")
 * Naming   : String 'NO SPELL OF TYPE ON THING'
 * Callers  : 2 -> 0x6616d, 0x7231c
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1677aa: "spell.cpp"
 *   - 0x167790: "NO SPELL OF TYPE ON THING"
 ******************************************************************************/
int FUN_000713cc(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  while( true ) {
    if (4 < iVar2) {
      FUN_000ddaf0(); /* LbErrorLog("spell.cpp", line 22, "NO SPELL OF TYPE ON THING") */
      return 0;
    }
    if (*(byte *)(iVar1 + 0x1d4) == in_EDX) break;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  }
  return (int)*(short *)(iVar1 + 0x1d5);
}

/******************************************************************************
 * Function : sub_071416 (Ghidra: FUN_00071416)
 * Prototype: void sub_071416(void);
 * Address  : 0x71416 (Size: 389 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 5 -> 0x71edd, 0x7225e, 0x82cac, 0x85890, 0xb3b10
 ******************************************************************************/
void FUN_00071416(void)

{
  short *psVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  int extraout_ECX;
  int iVar7;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar7 = iVar2;
  do {
    if (*(char *)(iVar7 + 0x1d4) != '\0') {
      if ((*(char *)(iVar7 + 0x1d4) == '\n') && ((int)*(short *)(iVar7 + 0x1d5) == DAT_001ae9ac / 2)
         ) {
        FUN_0007225e();
        FUN_000b3b10();
        FUN_00082cac();
        if ((*(byte *)(extraout_ECX + 0x25) & 0x20) == 0) {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          uVar5 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          DAT_002e8bf6 = uVar5 * 0x24a1 + 0x24df;
          uVar6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          DAT_002e8bf6 = uVar6 * 0x24a1 + 0x24df;
          DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
          uVar3 = (ulonglong)DAT_002e8bf6;
          *(short *)(extraout_ECX + 0x32) =
               *(short *)(extraout_ECX + 0x32) + (short)(uVar5 % 0xc0) + -0x60;
          *(short *)(extraout_ECX + 0x34) =
               *(short *)(extraout_ECX + 0x34) + (short)(uVar6 % 0xc0) + -0x60;
          *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) | 4;
          *(short *)(extraout_ECX + 0x36) =
               *(short *)(extraout_ECX + 0x36) + (short)(uVar3 % 0x60) + 0x28;
        }
      }
      *(short *)(iVar7 + 0x1d5) = *(short *)(iVar7 + 0x1d5) + -1;
      if (*(short *)(iVar7 + 0x1d5) < 1) {
        FUN_00071edd();
      }
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 != iVar2 + 0x14);
  if (*(short *)(iVar2 + 0x21) != 0) {
    psVar1 = (short *)(iVar2 + 0x21);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      uVar4 = FUN_00085890();
      *(undefined2 *)(iVar2 + 0xc4) = uVar4;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_07159b (Ghidra: FUN_0007159b)
 * Prototype: undefined8 sub_07159b(void);
 * Address  : 0x7159b (Size: 102 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x717de
 * Callees  : 1 -> 0x71edd
 ******************************************************************************/
undefined8 FUN_0007159b(void)

{
  int in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined4 in_EDX;
  int iVar2;
  int local_1c;
  
  local_1c = 0x7fffffff;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
    if (*(char *)(iVar1 + 0x1d4) == '\0') goto LAB_00071594;
    if (*(short *)(iVar1 + 0x1d5) < local_1c) {
      local_1c = (int)*(short *)(iVar1 + 0x1d5);
    }
    iVar1 = iVar1 + 4;
  }
  FUN_00071edd();
  iVar2 = extraout_ECX;
LAB_00071594:
  return CONCAT44(in_EDX,iVar2);
}

/******************************************************************************
 * Function : sub_071601 (Ghidra: FUN_00071601)
 * Prototype: void sub_071601(void);
 * Address  : 0x71601 (Size: 477 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x717de
 * Callees  : 2 -> 0x1017e, 0x64a5f
 ******************************************************************************/
void FUN_00071601(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_EAX;
  int in_ECX;
  int extraout_ECX;
  uint in_EDX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  
  iVar4 = unaff_EBX * 4;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar3 = in_ECX * 4 + iVar1;
  if (in_EDX < 0xb) {
    if (in_EDX < 6) {
      if (2 < in_EDX) {
        if (in_EDX < 4) {
          *(undefined2 *)(iVar1 + 0x1d5 + in_ECX * 4) = DAT_001ae990;
          FUN_0001017e();
          return;
        }
        if (in_EDX == 4) {
          *(undefined2 *)(iVar1 + 0x1d5 + in_ECX * 4) =
               *(undefined2 *)(&DAT_002eb1c9 + unaff_EBX * 4);
          return;
        }
      }
      return;
    }
    uVar2 = DAT_001ae99c;
    if (6 < in_EDX) {
      if (in_EDX < 9) {
        if (in_EDX == 7) {
          *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + *(short *)(&DAT_002eb099 + iVar4);
          if (*(short *)(in_EAX + 0x5e) < 0) {
            *(undefined2 *)(in_EAX + 0x5e) = 0;
          }
          else {
            iVar3 = (int)((uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) *
                          (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] * 0x23)
                    / 100 + (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73];
            if (iVar3 < *(short *)(in_EAX + 0x5e)) {
              *(short *)(in_EAX + 0x5e) = (short)iVar3;
            }
          }
          *(undefined1 *)(iVar1 + 0x2b0) = 7;
          *(undefined2 *)(iVar1 + 0x2ae) = DAT_002eb095;
          return;
        }
        return;
      }
      uVar2 = (undefined2)DAT_001ae9ac;
      if (in_EDX < 10) {
        uVar2 = *(undefined2 *)(&DAT_002eb215 + iVar4);
      }
    }
  }
  else if (in_EDX < 0xc) {
    uVar2 = *(undefined2 *)(&DAT_002eb17d + iVar4);
  }
  else if (in_EDX < 0x14) {
    uVar2 = DAT_001ae9b4;
    if ((0xc < in_EDX) && (uVar2 = DAT_001ae9d0, in_EDX != 0x13)) {
      return;
    }
  }
  else {
    uVar2 = DAT_001ae9d4;
    if (0x14 < in_EDX) {
      if (in_EDX < 0x1a) {
        uVar2 = DAT_001ae9d8;
        if (in_EDX != 0x15) {
          return;
        }
      }
      else {
        if (in_EDX < 0x1b) {
          *(undefined2 *)(iVar3 + 0x1d5) = *(undefined2 *)(&DAT_002eb261 + iVar4);
          *(undefined1 *)(iVar1 + 0xb6) = *(undefined1 *)(in_EAX + 6);
          return;
        }
        if (in_EDX != 0x1b) {
          return;
        }
        FUN_00064a5f();
        *(undefined2 *)(extraout_ECX + 0x282) = 10;
        uVar2 = *(undefined2 *)(&DAT_002eb2ad + iVar4);
      }
    }
  }
  *(undefined2 *)(iVar3 + 0x1d5) = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_0717de (Ghidra: FUN_000717de)
 * Prototype: void sub_0717de(void);
 * Address  : 0x717de (Size: 1721 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x25af0, 0x4f3bc, 0x4f41d, 0x4f4f1, 0x4f552, 0x4f5b3, 0x4f87e, 0x6bdda, 0x71e97, 0x72109 ...
 * Callees  : 7 -> 0x1017e, 0x10d08, 0x43f07, 0x64a5f, 0x7159b, 0x71601, 0x85890
 ******************************************************************************/
void FUN_000717de(void)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  uint in_EDX;
  int unaff_EBX;
  int iVar4;
  byte bVar5;
  undefined8 uVar6;
  short local_38 [4];
  short local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar4 = iVar3;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (*(byte *)(iVar4 + 0x1d4) == in_EDX) {
      FUN_00071601();
      return;
    }
    iVar4 = iVar4 + 4;
  }
  iVar4 = unaff_EBX * 4;
  if (in_EDX < 0xb) {
    if (in_EDX < 6) {
      if (2 < in_EDX) {
        if (in_EDX < 4) {
          iVar4 = FUN_0007159b();
          if (iVar4 != -1) {
            *(undefined1 *)(iVar3 + 0x1d4 + iVar4 * 4) = 3;
            *(undefined2 *)(iVar3 + 0x1d5 + iVar4 * 4) = DAT_001ae990;
            *(byte *)(iVar3 + 0xab) = *(byte *)(iVar3 + 0xab) | 2;
            if ((*(byte *)(in_EAX + 0x25) & 0x20) != 0) {
              *(byte *)(iVar3 + 0xad) = *(byte *)(iVar3 + 0xad) | 0x80;
              *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xdf;
            }
            FUN_0001017e();
            return;
          }
        }
        else if (in_EDX == 4) {
          uVar6 = FUN_0007159b();
          local_1c = (int)((ulonglong)uVar6 >> 0x20);
          iVar4 = (int)uVar6;
          if (iVar4 != -1) {
            *(undefined1 *)(iVar3 + 0x1d4 + iVar4 * 4) = 4;
            local_14 = 0;
            *(undefined2 *)(iVar3 + 0x1d5 + iVar4 * 4) =
                 *(undefined2 *)(&DAT_002eb1c9 + local_1c * 4);
            local_28 = 0;
            local_1c = local_1c << 2;
            *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) | 4;
            local_2c = iVar3;
            do {
              local_38[(uint)bVar5 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar5 * -8);
              local_38[0] = local_38[0] + (short)local_14 * (*(ushort *)(in_EAX + 0x58) / 2);
              iVar3 = FUN_00043f07();
              if (iVar3 != 0) {
                *(undefined2 *)(local_2c + 0x2b3) = *(undefined2 *)(iVar3 + 0x1b);
                *(short *)(iVar3 + 0x5e) = *(short *)(&DAT_002eb1c9 + local_1c) + 1;
                *(undefined2 *)(iVar3 + 0x13) = *(undefined2 *)(in_EAX + 0x1b);
                *(undefined1 *)(iVar3 + 0x15) = (undefined1)local_14;
                *(undefined2 *)(iVar3 + 0x52) = *(undefined2 *)(in_EAX + 0x52);
                *(undefined2 *)(iVar3 + 0x54) = *(undefined2 *)(in_EAX + 0x54);
                FUN_00010d08();
                *(short *)(iVar3 + 0x32) = *(short *)(iVar3 + 0x32) + local_38[2];
                *(short *)(iVar3 + 0x34) = *(short *)(iVar3 + 0x34) + local_38[3];
                *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) | 4;
                *(short *)(iVar3 + 0x36) = *(short *)(iVar3 + 0x36) + local_30;
              }
              local_28 = local_28 + 0xaa8;
              local_14 = local_14 + 1;
              local_2c = local_2c + 2;
            } while (local_14 < 3);
          }
        }
      }
    }
    else if (in_EDX < 7) {
      iVar4 = FUN_0007159b();
      if (iVar4 != -1) {
        *(undefined1 *)(iVar3 + 0x1d4 + iVar4 * 4) = 6;
        *(undefined2 *)(iVar3 + 0x1d5 + iVar4 * 4) = DAT_001ae99c;
        *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) | 8;
        return;
      }
    }
    else {
      if (in_EDX < 9) {
        if (in_EDX != 7) {
          return;
        }
        *(short *)(in_EAX + 0x5e) = *(short *)(in_EAX + 0x5e) + *(short *)(&DAT_002eb099 + iVar4);
        if (*(short *)(in_EAX + 0x5e) < 0) {
          *(undefined2 *)(in_EAX + 0x5e) = 0;
        }
        else if ((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] *
                       (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) /
                 100 + (int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] <
                 (int)*(short *)(in_EAX + 0x5e)) {
          *(short *)(in_EAX + 0x5e) =
               (&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] +
               (short)((int)((int)(short)(&DAT_002e9114)[(uint)*(byte *)(in_EAX + 0x1a) * 0x73] *
                             (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) *
                            0x23) / 100);
        }
        *(undefined1 *)(iVar3 + 0x2b0) = 7;
        *(undefined2 *)(iVar3 + 0x2ae) = DAT_002eb095;
        return;
      }
      if (in_EDX < 10) {
        iVar2 = FUN_0007159b();
        if (iVar2 != -1) {
          *(undefined1 *)(iVar3 + 0x1d4 + iVar2 * 4) = 9;
          *(undefined2 *)(iVar3 + 0x1d5 + iVar2 * 4) = *(undefined2 *)(&DAT_002eb215 + iVar4);
          *(undefined2 *)(iVar3 + 0xaf) = 0;
          *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) | 0x20;
          return;
        }
      }
      else {
        iVar4 = FUN_0007159b();
        if (iVar4 != -1) {
          *(undefined1 *)(iVar3 + 0x1d4 + iVar4 * 4) = 10;
          *(undefined2 *)(iVar3 + 0x1d5 + iVar4 * 4) = (undefined2)DAT_001ae9ac;
          *(byte *)(iVar3 + 0xab) = *(byte *)(iVar3 + 0xab) | 4;
          return;
        }
      }
    }
  }
  else if (in_EDX < 0xc) {
    iVar2 = FUN_0007159b();
    if (iVar2 != -1) {
      *(undefined1 *)(iVar3 + 0x1d4 + iVar2 * 4) = 0xb;
      *(undefined2 *)(iVar3 + 0x1d5 + iVar2 * 4) = *(undefined2 *)(&DAT_002eb17d + iVar4);
      *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) | 2;
LAB_00071cb9:
      uVar1 = FUN_00085890();
      *(undefined2 *)(iVar3 + 0xc4) = uVar1;
      return;
    }
  }
  else if (in_EDX < 0x14) {
    if (0xc < in_EDX) {
      return;
    }
    iVar4 = FUN_0007159b();
    if (iVar4 != -1) {
      *(undefined1 *)(iVar3 + 0x1d4 + iVar4 * 4) = 0xc;
      *(undefined2 *)(iVar3 + 0x1d5 + iVar4 * 4) = DAT_001ae9b4;
      *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) | 1;
      goto LAB_00071cb9;
    }
  }
  else if (in_EDX < 0x15) {
    iVar4 = FUN_0007159b();
    if (iVar4 != -1) {
      *(undefined1 *)(iVar3 + 0x1d4 + iVar4 * 4) = 0x14;
      *(undefined2 *)(iVar3 + 0x1d5 + iVar4 * 4) = DAT_001ae9d4;
      *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) | 0x10;
      *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 0x20;
      return;
    }
  }
  else if (in_EDX < 0x1a) {
    if (in_EDX != 0x15) {
      return;
    }
    iVar4 = FUN_0007159b();
    if (iVar4 != -1) {
      *(undefined1 *)(iVar3 + 0x1d4 + iVar4 * 4) = 0x15;
      *(undefined2 *)(iVar3 + 0x1d5 + iVar4 * 4) = DAT_001ae9d8;
      *(byte *)(iVar3 + 0xac) = *(byte *)(iVar3 + 0xac) | 0x40;
      return;
    }
  }
  else if (in_EDX < 0x1b) {
    iVar2 = FUN_0007159b();
    if (iVar2 != -1) {
      *(undefined1 *)(iVar3 + 0x1d4 + iVar2 * 4) = 0x1a;
      *(undefined2 *)(iVar3 + 0x1d5 + iVar2 * 4) = *(undefined2 *)(&DAT_002eb261 + iVar4);
      *(byte *)(iVar3 + 0xad) = *(byte *)(iVar3 + 0xad) | 1;
      local_14 = 0;
      local_24 = 0;
      *(undefined1 *)(iVar3 + 0xb6) = *(undefined1 *)(in_EAX + 6);
      *(undefined4 *)(iVar3 + 0x2eb) = DAT_002e8bee;
      local_20 = iVar4;
      local_18 = iVar3;
      do {
        local_38[(uint)bVar5 * -4] = *(short *)(in_EAX + 0x11 + (uint)bVar5 * -8);
        local_38[0] = local_38[0] + (short)local_14 * (*(ushort *)(in_EAX + 0x58) / 2);
        iVar3 = FUN_00043f07();
        if (iVar3 != 0) {
          *(undefined2 *)(local_18 + 0x2b9) = *(undefined2 *)(iVar3 + 0x1b);
          *(short *)(iVar3 + 0x5e) = *(short *)(&DAT_002eb261 + local_20) + 1;
          *(undefined2 *)(iVar3 + 0x13) = *(undefined2 *)(in_EAX + 0x1b);
          *(undefined1 *)(iVar3 + 0x15) = (undefined1)local_14;
          *(undefined2 *)(iVar3 + 0x52) = *(undefined2 *)(in_EAX + 0x52);
          *(undefined2 *)(iVar3 + 0x54) = *(undefined2 *)(in_EAX + 0x54);
          FUN_00010d08();
          *(short *)(iVar3 + 0x32) = *(short *)(iVar3 + 0x32) + local_38[2];
          *(short *)(iVar3 + 0x34) = *(short *)(iVar3 + 0x34) + local_38[3];
          *(byte *)(iVar3 + 1) = *(byte *)(iVar3 + 1) | 4;
          *(short *)(iVar3 + 0x36) = *(short *)(iVar3 + 0x36) + local_30;
        }
        local_24 = local_24 + 0xaa8;
        local_14 = local_14 + 1;
        local_18 = local_18 + 2;
      } while (local_14 < 3);
    }
  }
  else {
    if (in_EDX != 0x1b) {
      return;
    }
    iVar2 = FUN_0007159b();
    if (iVar2 != -1) {
      FUN_00064a5f();
      *(undefined2 *)(iVar3 + 0x282) = 10;
      *(byte *)(iVar3 + 0xad) = *(byte *)(iVar3 + 0xad) | 2;
      *(undefined1 *)(iVar3 + 0x1d4 + extraout_ECX * 4) = 0x1b;
      *(undefined2 *)(iVar3 + 0x1d5 + extraout_ECX * 4) = *(undefined2 *)(&DAT_002eb2ad + iVar4);
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_071e97 (Ghidra: FUN_00071e97)
 * Prototype: void sub_071e97(void);
 * Address  : 0x71e97 (Size: 70 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x731f3
 * Callees  : 1 -> 0x717de
 ******************************************************************************/
void FUN_00071e97(void)

{
  ushort uVar1;
  int in_EAX;
  int extraout_ECX;
  
  uVar1 = (&DAT_002e05b6)[in_EAX * 0xa84];
  while (DAT_001ae9fc < (&DAT_001ae9fc)[uVar1]) {
    FUN_000717de();
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x1f);
  }
  return;
}

/******************************************************************************
 * Function : sub_071edd (Ghidra: FUN_00071edd)
 * Prototype: void sub_071edd(void);
 * Address  : 0x71edd (Size: 497 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x65b07, 0x71416, 0x7159b, 0x72f08, 0x7436a
 * Callees  : 3 -> 0x64a5f, 0x72af4, 0x85890
 ******************************************************************************/
void FUN_00071edd(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int in_EAX;
  int extraout_ECX;
  int iVar4;
  int extraout_ECX_00;
  uint in_EDX;
  int iVar5;
  int local_18;
  
  local_18 = -1;
  iVar5 = 0;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  for (iVar4 = iVar1;
      (iVar2 = local_18, iVar5 < 5 && (iVar2 = iVar5, in_EDX != *(byte *)(iVar4 + 0x1d4)));
      iVar4 = iVar4 + 4) {
    iVar5 = iVar5 + 1;
  }
  local_18 = iVar2;
  if (local_18 < 0) {
    return;
  }
  if (in_EDX < 0xb) {
    if (in_EDX < 6) {
      if (2 < in_EDX) {
        if (in_EDX < 4) {
          *(byte *)(iVar1 + 0xab) = *(byte *)(iVar1 + 0xab) & 0xfd;
          if ((*(byte *)(iVar1 + 0xad) & 0x80) != 0) {
            *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) | 0x20;
            *(byte *)(iVar1 + 0xad) = *(byte *)(iVar1 + 0xad) & 0x7f;
          }
        }
        else if (in_EDX == 4) {
          *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) & 0xfb;
          iVar4 = iVar1;
          do {
            if (*(short *)(iVar4 + 0x2b3) != 0) {
              FUN_00072af4();
              *(undefined2 *)(extraout_ECX + 0x2b3) = 0;
              iVar4 = extraout_ECX;
            }
            iVar4 = iVar4 + 2;
          } while (iVar4 != iVar1 + 6);
        }
      }
    }
    else if (in_EDX < 7) {
      *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) & 0xf7;
    }
    else if (8 < in_EDX) {
      if (in_EDX < 10) {
        *(undefined2 *)(iVar1 + 0xaf) = 0;
        *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) & 0xdf;
      }
      else {
        *(byte *)(iVar1 + 0xab) = *(byte *)(iVar1 + 0xab) & 0xfb;
      }
    }
    goto LAB_000720b3;
  }
  if (in_EDX < 0xc) {
    *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) & 0xfd;
  }
  else {
    if (0x13 < in_EDX) {
      if (in_EDX < 0x15) {
        if (*(char *)(in_EAX + 0x1a) != '\x13') {
          *(byte *)(in_EAX + 0x25) = *(byte *)(in_EAX + 0x25) & 0xdf;
        }
        *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) & 0xef;
      }
      else if (in_EDX < 0x1a) {
        if (in_EDX == 0x15) {
          *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) & 0xbf;
        }
      }
      else if (in_EDX < 0x1b) {
        *(byte *)(iVar1 + 0xad) = *(byte *)(iVar1 + 0xad) & 0xfe;
        iVar4 = iVar1;
        do {
          if (*(short *)(iVar4 + 0x2b9) != 0) {
            FUN_00072af4();
            *(undefined2 *)(extraout_ECX_00 + 0x2b9) = 0;
            iVar4 = extraout_ECX_00;
          }
          iVar4 = iVar4 + 2;
        } while (iVar4 != iVar1 + 6);
      }
      else if (in_EDX == 0x1b) {
        *(byte *)(iVar1 + 0xad) = *(byte *)(iVar1 + 0xad) & 0xfd;
        FUN_00064a5f();
        *(undefined2 *)(iVar1 + 0x282) = 10;
      }
      goto LAB_000720b3;
    }
    if (0xc < in_EDX) goto LAB_000720b3;
    *(byte *)(iVar1 + 0xac) = *(byte *)(iVar1 + 0xac) & 0xfe;
  }
  uVar3 = FUN_00085890();
  *(undefined2 *)(iVar1 + 0xc4) = uVar3;
LAB_000720b3:
  *(undefined1 *)(iVar1 + 0x1d4 + local_18 * 4) = 0;
  *(undefined2 *)(iVar1 + 0x1d5 + local_18 * 4) = 0;
  return;
}

/******************************************************************************
 * Function : sub_0720ce (Ghidra: FUN_000720ce)
 * Prototype: int sub_0720ce(void);
 * Address  : 0x720ce (Size: 59 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x1916a, 0x1a68b, 0x1c92a, 0x1ca68, 0x200e0, 0x4f3bc, 0x4f41d, 0x4f4f1, 0x4f552, 0x4f87e ...
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000720ce(void)

{
  int in_EAX;
  byte *pbVar1;
  uint in_EDX;
  int iVar2;
  
  if (*(short *)(in_EAX + 100) != 0) {
    pbVar1 = (byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x1d4);
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      if (*pbVar1 == in_EDX) {
        return (int)*(short *)(pbVar1 + 1);
      }
      pbVar1 = pbVar1 + 4;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_072109 (Ghidra: FUN_00072109)
 * Prototype: void sub_072109(undefined1 param_1);
 * Address  : 0x72109 (Size: 257 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4a079
 * Callees  : 5 -> 0x24998, 0x2585f, 0x6b820, 0x6e538, 0x717de
 ******************************************************************************/
void FUN_00072109(undefined1 param_1)

{
  byte *in_EAX;
  undefined4 uVar1;
  int iVar2;
  undefined1 in_CL;
  int in_EDX;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10 [4];
  
  puVar3 = (undefined4 *)local_10;
  iVar4 = in_EDX * 0x11;
  if (in_EDX == 10) {
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xb7) = in_CL;
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xb8) = param_1;
  }
  if ((*in_EAX & 0x20) == 0) {
    uVar1 = 4;
  }
  else {
    uVar1 = 1;
  }
  if ((&DAT_0018f5cc)[iVar4] == '\0') {
    if ((&DAT_0018f5cd)[iVar4] != '\0') {
      puVar3 = (undefined4 *)local_10;
      if (*(short *)(&DAT_0018f5d1 + iVar4) != 0) {
        uStack_14 = 0x100;
        uStack_18 = 4;
        uStack_1c = 0;
        puVar3 = &uStack_20;
        uStack_20 = 3;
        FUN_0006e538();
      }
      *(undefined4 *)((int)puVar3 + -4) = 0x721c2;
      FUN_000717de();
    }
  }
  else {
    puVar3 = &uStack_14;
    uStack_18 = 0x72173;
    uStack_14 = uVar1;
    FUN_0006b820();
  }
  if ((&DAT_0018f5ce)[iVar4] != '\0') {
    *(undefined4 *)((int)puVar3 + -4) = 0x721d8;
    iVar2 = FUN_00024998();
    if ((iVar2 != 0) && ((&DAT_0018f5ce)[iVar4] == '\x0e')) {
      *(undefined1 *)(iVar2 + 0x16) = 3;
    }
  }
  if (*(int *)(&DAT_0018f5d3 + iVar4) != 0) {
    *(uint *)((int)puVar3 + -4) = (uint)(byte)(&DAT_0018f5db)[iVar4];
    *(undefined4 *)((int)puVar3 + -8) = 0x72204;
    FUN_0002585f();
  }
  return;
}

/******************************************************************************
 * Function : sub_07220a (Ghidra: FUN_0007220a)
 * Prototype: void sub_07220a(void);
 * Address  : 0x7220a (Size: 84 bytes)
 * Module   : spell.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x4a079
 * Callees  : 1 -> 0x6b820
 ******************************************************************************/
void FUN_0007220a(void)

{
  byte *in_EAX;
  int in_EDX;
  undefined4 uVar1;
  
  if ((*in_EAX & 0x20) == 0) {
    if (*(char *)(in_EDX + 0x1f) == '\x01') {
      uVar1 = 3;
      goto LAB_00072246;
    }
    if (*(byte *)(in_EDX + 6) != in_EAX[6]) {
      uVar1 = 4;
      goto LAB_00072246;
    }
  }
  else if (*(char *)(in_EDX + 0x1f) == '\x01') {
    uVar1 = 1;
    goto LAB_00072246;
  }
  uVar1 = 2;
LAB_00072246:
  FUN_0006b820(uVar1);
  return;
}

/******************************************************************************
 * Function : dk_could_find_teleport_destination_07225e (Ghidra: FUN_0007225e)
 * Prototype: void dk_could_find_teleport_destination_07225e(void);
 * Address  : 0x7225e (Size: 190 bytes)
 * Module   : spell.cpp [direct_file_string_xref]
 * OrigLine : spell.cpp:812 ("Could not find teleport destination for creature")
 * Naming   : String 'Could not find teleport destination for creature'
 * Callers  : 1 -> 0x71416
 * Callees  : 3 -> 0x7dbc0, 0xb3788, 0xddaf0
 * Strings  :
 *   - 0x1677e5: "spell.cpp"
 *   - 0x1677b4: "Could not find teleport destination for creature"
 ******************************************************************************/
void FUN_0007225e(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  short *in_EDX;
  byte bVar3;
  
  bVar3 = 0;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *in_EDX = (ushort)*(byte *)(iVar2 + 0xb7) * 0x100 + 0x80;
  in_EDX[1] = (ushort)*(byte *)(iVar2 + 0xb8) * 0x100 + 0x80;
  sVar1 = FUN_000b3788();
  in_EDX[2] = sVar1;
  iVar2 = FUN_0007dbc0();
  if (iVar2 != 0) {
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a) == 0) {
      iVar2 = (int)*(char *)(in_EAX + 6);
      if ((iVar2 < (int)(uint)DAT_002eb543) && ((&DAT_002e0589)[iVar2 * 0xa84] != 0)) {
        in_EAX = (&DAT_001ae9fc)[(ushort)(&DAT_002e0589)[iVar2 * 0xa84]];
      }
      else {
        FUN_000ddaf0(); /* LbErrorLog("spell.cpp", line 812, "Could not find teleport destination for creature") */
      }
    }
    else {
      in_EAX = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6a)];
    }
    *(undefined4 *)in_EDX = *(undefined4 *)(in_EAX + 0xd);
    in_EDX[(uint)bVar3 * -4 + 2] = *(short *)(in_EAX + 0x11 + (uint)bVar3 * -8);
  }
  return;
}

/******************************************************************************
 * Function : sub_07231c (Ghidra: FUN_0007231c)
 * Prototype: void sub_07231c(void);
 * Address  : 0x7231c (Size: 1053 bytes)
 * Module   : spell.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 7 -> 0x10132, 0x43ac3, 0x444a9, 0x4c2eb, 0x713cc, 0x7df48, 0x8ccec
 ******************************************************************************/
void FUN_0007231c(void)

{
  ushort uVar1;
  undefined *puVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  uint uVar6;
  int extraout_ECX_00;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte bVar14;
  int aiStack_50 [6];
  short local_38;
  short local_36;
  short local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  bVar14 = 0;
  local_30 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  piVar9 = aiStack_50 + 5;
  aiStack_50[5] = in_EAX;
  if ((*(byte *)(local_30 + 0xac) & 8) != 0) {
    uVar1 = *(ushort *)(in_EAX + 0x56);
    local_2c = (uint)*(ushort *)(in_EAX + 0x58) + ((int)(uint)*(ushort *)(in_EAX + 0x58) >> 2);
    local_24 = FUN_0004c2eb();
    local_24 = local_24 & 0xff;
    local_1c = DAT_002e8bee % local_24;
    local_20 = ((uint)uVar1 * 4) / 4;
    piVar7 = aiStack_50 + 5;
    iVar4 = extraout_ECX;
    for (local_34 = *(short *)(aiStack_50[5] + 0x11); piVar9 = piVar7,
        (int)local_34 < *(short *)(aiStack_50[5] + 0x11) + local_2c; local_34 = local_34 + 0x40) {
      local_38 = *(short *)(aiStack_50[5] + 0xd) +
                 (short)(local_20 * (&DAT_001927e0)[(iVar4 % 8) * 0x100] >> 0x10);
      puVar2 = (&PTR_LAB_00192fe0)[(iVar4 % 8) * 0x100];
      piVar9 = (int *)((int)piVar7 + -4);
      *(undefined4 *)((int)piVar7 + -4) = 0xffffffff;
      local_36 = *(short *)(aiStack_50[5] + 0xf) +
                 (short)((uint)-((int)(local_20 * (int)puVar2) >> 8) >> 8);
      *(undefined4 *)((int)piVar7 + -8) = 0x72453;
      iVar3 = FUN_00043ac3();
      if (iVar3 == 0) break;
      *(undefined4 *)((int)piVar7 + -8) = 2;
      *(int *)((int)piVar7 + -0xc) = (int)(char)local_1c;
      *(undefined4 *)((int)piVar7 + -0x10) = 0;
      *(undefined4 *)((int)piVar7 + -0x14) = 0x723cd;
      FUN_0008ccec();
      local_1c = (int)(local_1c + 1) % (int)local_24;
      iVar4 = iVar4 + 1;
      piVar7 = (int *)((int)piVar7 + -0x10);
    }
  }
  if ((*(byte *)(local_30 + 0xac) & 1) != 0) {
    local_28 = ((uint)*(ushort *)(aiStack_50[5] + 0x56) * 4) / 2;
    uVar6 = (uint)*(ushort *)(aiStack_50[5] + 0x58) +
            ((int)(uint)*(ushort *)(aiStack_50[5] + 0x58) >> 2);
    iVar4 = (int)uVar6 >> 6;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    iVar3 = DAT_002e8bee - *(int *)(aiStack_50[5] + 9);
    uVar5 = (uint)(iVar4 * 2) / 2;
    if (iVar3 % (iVar4 * 2) < (int)uVar5) {
      local_34 = *(short *)(aiStack_50[5] + 0x11) +
                 (short)(iVar3 % (int)uVar5) * (short)(uVar6 / uVar5);
    }
    else {
      local_34 = (short)(uVar6 / uVar5) * ((short)uVar5 - (short)(iVar3 % (int)uVar5)) +
                 *(short *)(aiStack_50[5] + 0x11);
    }
    uVar6 = local_28 / 2;
    iVar4 = 0;
    puVar8 = (undefined1 *)piVar9;
    do {
      iVar3 = (&DAT_001927e0)[(iVar4 % 0x10) * 0x80];
      puVar2 = (&PTR_LAB_00192fe0)[(iVar4 % 0x10) * 0x80];
      piVar9 = (int *)(puVar8 + -4);
      *(undefined4 *)(puVar8 + -4) = 0xffffffff;
      local_38 = *(short *)(aiStack_50[5] + 0xd) + (short)(iVar3 * uVar6 >> 0x10);
      local_36 = (short)((uint)-((int)((int)puVar2 * uVar6) >> 8) >> 8) +
                 *(short *)(aiStack_50[5] + 0xf);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(puVar8 + -8) = 0x7256d;
      FUN_00043ac3();
      puVar8 = puVar8 + -4;
    } while (iVar4 < 0x10);
  }
  puVar8 = (undefined1 *)piVar9;
  if ((*(byte *)(local_30 + 0xac) & 0x10) != 0) {
    puVar8 = (undefined1 *)((int)piVar9 + -4);
    *(undefined4 *)((int)piVar9 + -4) = 0xffffffff;
    *(undefined4 *)((int)piVar9 + -8) = 0x7259c;
    FUN_00043ac3();
  }
  if ((*(byte *)(local_30 + 0xac) & 2) != 0) {
    *(undefined4 *)(puVar8 + -4) = 0x725bf;
    iVar4 = FUN_000444a9();
    if (iVar4 != 0) {
      puVar12 = (undefined4 *)(iVar4 + 0x42 + (uint)bVar14 * -8);
      puVar10 = (undefined4 *)(aiStack_50[5] + 0x42 + (uint)bVar14 * -8);
      *(undefined4 *)(iVar4 + 0x3e) = *(undefined4 *)(aiStack_50[5] + 0x3e);
      puVar13 = puVar12 + (uint)bVar14 * -2 + 1;
      puVar11 = puVar10 + (uint)bVar14 * -2 + 1;
      *puVar12 = *puVar10;
      *puVar13 = *puVar11;
      puVar13[(uint)bVar14 * -2 + 1] = puVar11[(uint)bVar14 * -2 + 1];
      (puVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
           (puVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
      *(undefined2 *)(iVar4 + 0x3e) = 0;
      *(byte *)(iVar4 + 0x4f) = *(byte *)(iVar4 + 0x4f) & 0xcf;
      *(byte *)(iVar4 + 0x4f) = *(byte *)(iVar4 + 0x4f) | 0x20;
      *(undefined2 *)(iVar4 + 0x52) = *(undefined2 *)(aiStack_50[5] + 0x52);
    }
  }
  if ((*(byte *)(local_30 + 0xab) & 4) != 0) {
    *(undefined4 *)(puVar8 + -4) = 0x72607;
    iVar4 = FUN_000713cc();
    if (DAT_001ae9ac / 2 < iVar4) {
      *(undefined4 *)(puVar8 + -4) = 0x72630;
      iVar4 = FUN_000444a9();
      if (iVar4 != 0) {
        puVar12 = (undefined4 *)(iVar4 + 0x42 + (uint)bVar14 * -8);
        puVar10 = (undefined4 *)(aiStack_50[5] + 0x42 + (uint)bVar14 * -8);
        *(undefined4 *)(iVar4 + 0x3e) = *(undefined4 *)(aiStack_50[5] + 0x3e);
        puVar13 = puVar12 + (uint)bVar14 * -2 + 1;
        puVar11 = puVar10 + (uint)bVar14 * -2 + 1;
        *puVar12 = *puVar10;
        *puVar13 = *puVar11;
        puVar13[(uint)bVar14 * -2 + 1] = puVar11[(uint)bVar14 * -2 + 1];
        (puVar13 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             (puVar11 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
        *(undefined2 *)(iVar4 + 0x3e) = 0;
        *(byte *)(iVar4 + 0x4f) = *(byte *)(iVar4 + 0x4f) & 0xcf;
        *(byte *)(iVar4 + 0x4f) = *(byte *)(iVar4 + 0x4f) | 0x20;
        *(undefined2 *)(iVar4 + 0x52) = *(undefined2 *)(aiStack_50[5] + 0x52);
      }
    }
    else if (iVar4 < DAT_001ae9ac / 2) {
      if (iVar4 % 2 == 0) {
        *(undefined4 *)(puVar8 + -4) = 0x72687;
        FUN_000444a9();
      }
      *(undefined4 *)(puVar8 + -4) = 0x726ac;
      FUN_00010132();
    }
  }
  if ((*(byte *)(local_30 + 0xad) & 0x20) != 0) {
    if ((int)(DAT_002e8bee - *(int *)(aiStack_50[5] + 9)) % 2 == 0) {
      *(undefined4 *)(puVar8 + -4) = 0x726f0;
      FUN_000444a9();
    }
    *(undefined4 *)(puVar8 + -4) = 0x72715;
    FUN_00010132();
    if (extraout_ECX_00 < 0x21) {
      *(undefined4 *)(puVar8 + -4) = 0x72722;
      iVar4 = FUN_0007df48();
      if (iVar4 == 0) {
        return;
      }
    }
    *(byte *)(local_30 + 0xad) = *(byte *)(local_30 + 0xad) & 0xdf;
  }
  return;
}

/******************************************************************************
 * Function : sub_072739 (Ghidra: FUN_00072739)
 * Prototype: void sub_072739(void);
 * Address  : 0x72739 (Size: 212 bytes)
 * Module   : spell.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 1 -> 0x444a9
 ******************************************************************************/
void FUN_00072739(void)

{
  int iVar1;
  uint uVar2;
  int in_EAX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(short *)(iVar1 + 0x2ae) = *(short *)(iVar1 + 0x2ae) + -1;
  if (*(short *)(iVar1 + 0x2ae) < 1) {
    *(undefined1 *)(iVar1 + 0x2b0) = 0;
  }
  else if (*(char *)(iVar1 + 0x2b0) == '\a') {
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar2 = DAT_002e8bf6 >> 0xd;
    DAT_002e8bf6 = uVar2 | DAT_002e8bf6 * 0x80000;
    FUN_000444a9(*(short *)(in_EAX + 0xd) +
                 (short)((uint)((&DAT_001927e0)[uVar2 & 0x7ff] *
                               ((int)((uint)*(ushort *)(in_EAX + 0x56) * 5) >> 3)) >> 0x10),
                 *(undefined2 *)(in_EAX + 0x11));
  }
  return;
}

