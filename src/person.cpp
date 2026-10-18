/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: person.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 45
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_ERROR_063412 (Ghidra: FUN_00063412)
 * Prototype: undefined4 dk_ERROR_063412(void);
 * Address  : 0x63412 (Size: 605 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Naming   : Log prefix 'ERROR : Incorrect command : %d'
 * Callers  : 1 -> 0x633c4
 * Callees  : 7 -> 0xe7714, 0xe8ca8, 0xf0964, 0xf09e5, 0xf0ec0, 0xf4409, 0xf442b
 * Strings  :
 *   - 0x166650: "nocd"
 *   - 0x166655: "1player"
 *   - 0x16665f: "nosound"
 *   - 0x166667: "fps"
 *   - 0x16666b: "usersfont"
 *   - 0x166675: "alex"
 *   - 0x16667a: "ERROR : Incorrect command : %d\n"
 *   - 0x166648: "nointro"
 *   - 0x16669a: "ERROR : Incorrect command : %d\n"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00063412(void)

{
  ushort in_AX;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int iVar5;
  char *pcVar6;
  undefined1 local_10c [144];
  undefined1 local_7c;
  undefined1 local_3c;
  char local_1c;
  byte local_18;
  
  DAT_00334019 = 0;
  FUN_000e8ca8();
  local_18 = 1;
  FUN_000e7714(&DAT_00333f77,local_10c);
  puVar1 = (undefined1 *)FUN_000f442b();
  *puVar1 = 0;
  local_1c = '\0';
  FUN_000f0ec0();
  DAT_002e6ff2 = 0;
  DAT_002e6fe5 = 1;
  DAT_002e6ff3 = 0;
  _DAT_0019d0c2 = 0;
  DAT_002ed43e = 0x14;
  DAT_002ed44e = 0xff;
  iVar5 = 1;
  DAT_0019d0ba = DAT_0019d0ba & 0xfe;
  DAT_0019d0bd = DAT_0019d0bd & 0xbe;
  DAT_002e6fee = 0xffffffff;
  DAT_0019d0bd = DAT_0019d0bd | 0x40;
  iVar3 = extraout_ECX;
  do {
    if ((int)(uint)in_AX <= iVar5) {
LAB_00063628:
      uVar4 = (uint)local_1c;
      if (uVar4 != 0xffffffff) {
        _DAT_0019d0c2 = 1;
        uVar4 = 1;
        if ((DAT_0019d0b8 & 2) == 0) {
          uVar4 = (uint)local_18;
        }
        DAT_002f10ce._3_1_ = 0;
        DAT_002e78ea = (undefined1)uVar4;
      }
      return CONCAT22((short)(uVar4 >> 0x10),(short)local_1c);
    }
    pcVar6 = *(char **)(iVar3 + iVar5 * 4);
    if ((*pcVar6 != '-') && (*pcVar6 != '/')) {
      pcVar6 = s_ERROR___Incorrect_command____d_0016669a;
LAB_0006361c:
      local_1c = -1;
      FUN_000f4409(pcVar6,iVar5);
      goto LAB_00063628;
    }
    FUN_000e8ca8();
    local_3c = 0;
    if (iVar5 + 1 < (int)(uint)in_AX) {
      FUN_000e8ca8();
    }
    local_7c = 0;
    if (iVar5 + 2 < (int)(uint)in_AX) {
      FUN_000e8ca8();
    }
    iVar3 = FUN_000f09e5();
    if (iVar3 == 0) {
      DAT_002ed3ee = 1;
      iVar3 = extraout_ECX_07;
    }
    else {
      iVar3 = FUN_000f09e5();
      if (iVar3 == 0) {
        DAT_0019d0bd = DAT_0019d0bd | 0x10;
        iVar3 = extraout_ECX_00;
      }
      else {
        iVar3 = FUN_000f09e5();
        if (iVar3 == 0) {
          DAT_0019d0bb = 1;
          iVar3 = extraout_ECX_01;
        }
        else {
          iVar2 = FUN_000f09e5();
          iVar3 = extraout_ECX_02;
          if ((iVar2 == 0) || (iVar2 = FUN_000f09e5(), iVar3 = extraout_ECX_03, iVar2 == 0)) {
            DAT_00334019 = 1;
          }
          else {
            iVar3 = FUN_000f09e5();
            if (iVar3 == 0) {
              DAT_002ed43e = FUN_000f0964();
              iVar5 = iVar5 + 1;
              iVar3 = extraout_ECX_04;
            }
            else {
              iVar3 = FUN_000f09e5();
              if (iVar3 == 0) {
                DAT_0019d0ba = DAT_0019d0ba | 0x40;
                iVar3 = extraout_ECX_05;
              }
              else {
                iVar3 = FUN_000f09e5();
                if (iVar3 != 0) {
                  pcVar6 = s_ERROR___Incorrect_command____d_0016667a;
                  goto LAB_0006361c;
                }
                DAT_0019d0ba = DAT_0019d0ba | 0x20;
                iVar3 = extraout_ECX_06;
              }
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

/******************************************************************************
 * Function : dk_thing_already_peter_list_063670 (Ghidra: FUN_00063670)
 * Prototype: void dk_thing_already_peter_list_063670(void);
 * Address  : 0x63670 (Size: 493 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp:99 ("Thing already in Peter list"); person.cpp:99 ("Thing already in Peter list")
 * Naming   : String 'Thing already in Peter list'
 * Callers  : 3 -> 0x43bb3, 0x5f6c5, 0x63a25
 * Callees  : 2 -> 0xddaf0, 0xddaf8
 * Strings  :
 *   - 0x1666d8: "person.cpp"
 *   - 0x1666bc: "Thing already in Peter list"
 ******************************************************************************/
void FUN_00063670(void)

{
  undefined2 uVar1;
  int iVar2;
  byte *in_EAX;
  uint uVar3;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((char)(*in_EAX << 4) < '\0') {
    FUN_000ddaf0(); /* LbErrorLog("person.cpp", line 99, "Thing already in Peter list") */
    FUN_000ddaf8(); /* LbWarnLog("person.cpp", line 99, "Thing already in Peter list") */
    return;
  }
  uVar3 = (uint)(char)in_EAX[6];
  if (uVar3 == DAT_002eb543) {
    if (DAT_002ebaf2 == 0) {
      *(undefined2 *)(iVar2 + 0x1f) = 0;
      *(undefined2 *)(iVar2 + 0x1d) = 0;
    }
    else {
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[DAT_002ebaf2] + 100)] + 0x1d) =
           *(undefined2 *)(in_EAX + 0x1b);
      *(undefined2 *)(iVar2 + 0x1d) = 0;
      *(ushort *)(iVar2 + 0x1f) = DAT_002ebaf2;
    }
    DAT_002ebaf2 = *(ushort *)(in_EAX + 0x1b);
  }
  else {
    if ((in_EAX[0x1a] == 0x17) && (uVar3 != DAT_002eb542)) {
      if ((&DAT_002e05b8)[uVar3 * 0xa84] == 0) {
        *(undefined2 *)(iVar2 + 0x1f) = 0;
        *(undefined2 *)(iVar2 + 0x1d) = 0;
      }
      else {
        *(undefined2 *)
         ((&DAT_001b0a00)
          [*(ushort *)((&DAT_001ae9fc)[(ushort)(&DAT_002e05b8)[uVar3 * 0xa84]] + 100)] + 0x1d) =
             *(undefined2 *)(in_EAX + 0x1b);
        uVar1 = (&DAT_002e05b8)[(char)in_EAX[6] * 0xa84];
        *(undefined2 *)(iVar2 + 0x1d) = 0;
        *(undefined2 *)(iVar2 + 0x1f) = uVar1;
      }
      (&DAT_002e05b8)[(char)in_EAX[6] * 0xa84] = *(undefined2 *)(in_EAX + 0x1b);
      (&DAT_002e0ea1)[(char)in_EAX[6] * 0x1508] = (&DAT_002e0ea1)[(char)in_EAX[6] * 0x1508] + '\x01'
      ;
    }
    else {
      if ((&DAT_002e05b6)[(char)in_EAX[6] * 0xa84] == 0) {
        *(undefined2 *)(iVar2 + 0x1f) = 0;
        *(undefined2 *)(iVar2 + 0x1d) = 0;
      }
      else {
        *(undefined2 *)
         ((&DAT_001b0a00)
          [*(ushort *)((&DAT_001ae9fc)[(ushort)(&DAT_002e05b6)[(char)in_EAX[6] * 0xa84]] + 100)] +
         0x1d) = *(undefined2 *)(in_EAX + 0x1b);
        uVar1 = (&DAT_002e05b6)[(char)in_EAX[6] * 0xa84];
        *(undefined2 *)(iVar2 + 0x1d) = 0;
        *(undefined2 *)(iVar2 + 0x1f) = uVar1;
      }
      (&DAT_002e05b6)[(char)in_EAX[6] * 0xa84] = *(undefined2 *)(in_EAX + 0x1b);
      if ((*(byte *)(iVar2 + 2) & 2) != 0) goto LAB_000637e2;
      (&DAT_002e0ea2)[(char)in_EAX[6] * 0x1508] = (&DAT_002e0ea2)[(char)in_EAX[6] * 0x1508] + '\x01'
      ;
    }
    (&DAT_002e0ea3)[(uint)in_EAX[0x1a] + (char)in_EAX[6] * 0x1508] =
         (&DAT_002e0ea3)[(uint)in_EAX[0x1a] + (char)in_EAX[6] * 0x1508] + '\x01';
  }
LAB_000637e2:
  *in_EAX = *in_EAX | 8;
  return;
}

/******************************************************************************
 * Function : dk_peter_list_06385d (Ghidra: FUN_0006385d)
 * Prototype: void dk_peter_list_06385d(void);
 * Address  : 0x6385d (Size: 456 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp:184 ("Not in Peter list"); person.cpp:184 ("Not in Peter list")
 * Naming   : String 'Not in Peter list'
 * Callers  : 3 -> 0x5f6c5, 0x63a25, 0x72af4
 * Callees  : 2 -> 0xddaf0, 0xddaf8
 * Strings  :
 *   - 0x1666f5: "person.cpp"
 *   - 0x1666e3: "Not in Peter list"
 ******************************************************************************/
void FUN_0006385d(void)

{
  int iVar1;
  byte *in_EAX;
  uint uVar2;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*in_EAX & 8) != 0) {
    uVar2 = (uint)(char)in_EAX[6];
    if (uVar2 == DAT_002eb543) {
      if (*(ushort *)(iVar1 + 0x1d) == 0) {
        DAT_002ebaf2 = *(undefined2 *)(iVar1 + 0x1f);
      }
      else {
        *(undefined2 *)
         ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x1d)] + 100)] + 0x1f) =
             *(undefined2 *)(iVar1 + 0x1f);
      }
      if (*(short *)(iVar1 + 0x1f) != 0) {
        *(undefined2 *)
         ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x1f)] + 100)] + 0x1d) =
             *(undefined2 *)(iVar1 + 0x1d);
      }
    }
    else if ((in_EAX[0x1a] == 0x17) && (uVar2 != DAT_002eb542)) {
      if (*(ushort *)(iVar1 + 0x1d) == 0) {
        (&DAT_002e05b8)[uVar2 * 0xa84] = *(undefined2 *)(iVar1 + 0x1f);
      }
      else {
        *(undefined2 *)
         ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x1d)] + 100)] + 0x1f) =
             *(undefined2 *)(iVar1 + 0x1f);
      }
      if (*(short *)(iVar1 + 0x1f) != 0) {
        *(undefined2 *)
         ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x1f)] + 100)] + 0x1d) =
             *(undefined2 *)(iVar1 + 0x1d);
      }
      (&DAT_002e0ea1)[(char)in_EAX[6] * 0x1508] = (&DAT_002e0ea1)[(char)in_EAX[6] * 0x1508] + -1;
    }
    else {
      if (*(ushort *)(iVar1 + 0x1d) == 0) {
        (&DAT_002e05b6)[(char)in_EAX[6] * 0xa84] = *(undefined2 *)(iVar1 + 0x1f);
      }
      else {
        *(undefined2 *)
         ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x1d)] + 100)] + 0x1f) =
             *(undefined2 *)(iVar1 + 0x1f);
      }
      if (*(short *)(iVar1 + 0x1f) != 0) {
        *(undefined2 *)
         ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x1f)] + 100)] + 0x1d) =
             *(undefined2 *)(iVar1 + 0x1d);
      }
      if ((*(byte *)(iVar1 + 2) & 2) == 0) {
        (&DAT_002e0ea2)[(char)in_EAX[6] * 0x1508] = (&DAT_002e0ea2)[(char)in_EAX[6] * 0x1508] + -1;
        (&DAT_002e0ea3)[(uint)in_EAX[0x1a] + (char)in_EAX[6] * 0x1508] =
             (&DAT_002e0ea3)[(uint)in_EAX[0x1a] + (char)in_EAX[6] * 0x1508] + -1;
      }
    }
    *(undefined2 *)(iVar1 + 0x1d) = 0;
    *(undefined2 *)(iVar1 + 0x1f) = *(undefined2 *)(iVar1 + 0x1d);
    *in_EAX = *in_EAX & 0xf7;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("person.cpp", line 184, "Not in Peter list") */
  FUN_000ddaf8(); /* LbWarnLog("person.cpp", line 184, "Not in Peter list") */
  return;
}

/******************************************************************************
 * Function : sub_063a25 (Ghidra: FUN_00063a25)
 * Prototype: void sub_063a25(void);
 * Address  : 0x63a25 (Size: 304 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x11be9, 0x26e5e, 0x67e04, 0x711f3, 0x74853, 0x82cac
 * Callees  : 8 -> 0x10575, 0x2778e, 0x39c3e, 0x4d3d4, 0x63670, 0x6385d, 0x63b6d, 0xacce4
 ******************************************************************************/
void FUN_00063a25(void)

{
  byte *in_EAX;
  int iVar1;
  byte extraout_CL;
  byte extraout_CL_00;
  byte extraout_CL_01;
  byte extraout_CL_02;
  byte extraout_CL_03;
  byte in_DL;
  int extraout_EDX;
  int extraout_EDX_00;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(in_EAX + 0x62) != 0) {
    FUN_000acce4();
    iVar1 = extraout_EDX;
    in_DL = extraout_CL;
  }
  if ((*(ushort *)(iVar1 + 0x7a) & 0xfff) != 0) {
    FUN_00039c3e();
    iVar1 = extraout_EDX_00;
    in_DL = extraout_CL_00;
  }
  if ((*(short *)(iVar1 + 0x68) != 0) && (*(short *)(iVar1 + 0x6a) != 0)) {
    FUN_0004d3d4();
    in_DL = extraout_CL_01;
  }
  if ((*in_EAX & 8) != 0) {
    FUN_0006385d();
    in_DL = extraout_CL_02;
  }
  if ((int)(char)in_EAX[6] != (uint)DAT_002eb543) {
    *(uint *)(&DAT_002e1431 + (char)in_EAX[6] * 0x1508) =
         *(int *)(&DAT_002e1431 + (char)in_EAX[6] * 0x1508) -
         (uint)(byte)(&DAT_002ebaf8)
                     [(uint)in_EAX[0x1a] * 10 +
                      (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23)];
    iVar1 = FUN_00010575();
    if (iVar1 != 0) {
      (&DAT_002e1058)[(char)in_EAX[6] * 0xa84] = (&DAT_002e1058)[(char)in_EAX[6] * 0xa84] + -1;
    }
    FUN_0002778e();
    in_DL = extraout_CL_03;
  }
  in_EAX[6] = in_DL;
  FUN_00063670();
  FUN_00063b6d();
  if ((int)(char)in_EAX[6] != (uint)DAT_002eb543) {
    *(uint *)(&DAT_002e1431 + (char)in_EAX[6] * 0x1508) =
         *(int *)(&DAT_002e1431 + (char)in_EAX[6] * 0x1508) +
         (uint)(byte)(&DAT_002ebaf8)
                     [(uint)in_EAX[0x1a] * 10 +
                      (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23)];
    iVar1 = FUN_00010575();
    if (iVar1 != 0) {
      (&DAT_002e1058)[(char)in_EAX[6] * 0xa84] = (&DAT_002e1058)[(char)in_EAX[6] * 0xa84] + 1;
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_063b55 (Ghidra: FUN_00063b55)
 * Prototype: undefined8 sub_063b55(void);
 * Address  : 0x63b55 (Size: 24 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xb5264
 ******************************************************************************/
undefined8 FUN_00063b55(void)

{
  undefined4 uVar1;
  undefined4 in_EDX;
  undefined8 uVar2;
  
  uVar2 = FUN_000b5264();
  uVar1 = (undefined4)uVar2;
  if ((short)uVar2 != 0) {
    uVar1 = 1;
    *(undefined1 *)((int)((ulonglong)uVar2 >> 0x20) + 8) = 0x30;
  }
  return CONCAT44(in_EDX,uVar1);
}

/******************************************************************************
 * Function : sub_063b6d (Ghidra: FUN_00063b6d)
 * Prototype: undefined8 sub_063b6d(void);
 * Address  : 0x63b6d (Size: 151 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 128 -> 0x1073a, 0x10ed3, 0x10f6c, 0x10fdf, 0x1107a, 0x110ed, 0x114f6, 0x13747, 0x137af, 0x13809 ...
 * Callees  : 1 -> 0x64b0c
 ******************************************************************************/
undefined8 FUN_00063b6d(void)

{
  int in_EAX;
  undefined2 extraout_var;
  undefined4 in_EDX;
  
  FUN_00064b0c();
  return CONCAT44(in_EDX,CONCAT22(extraout_var,(ushort)*(byte *)(in_EAX + 7)));
}

/******************************************************************************
 * Function : sub_063c04 (Ghidra: FUN_00063c04)
 * Prototype: undefined4 sub_063c04(void);
 * Address  : 0x63c04 (Size: 179 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x63cb7, 0x63d17
 * Callees  : 1 -> 0xb3b58
 ******************************************************************************/
undefined4 FUN_00063c04(void)

{
  short sVar1;
  short sVar2;
  
  sVar2 = 0;
  while( true ) {
    if (4 < sVar2) {
      return 0;
    }
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    DAT_002e8bf6 = (DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000) * 0x24a1 + 0x24df;
    DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
    sVar1 = FUN_000b3b58();
    if (sVar1 != 0) break;
    sVar2 = sVar2 + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_063cb7 (Ghidra: FUN_00063cb7)
 * Prototype: longlong sub_063cb7(void);
 * Address  : 0x63cb7 (Size: 96 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x63b6d, 0x63c04
 ******************************************************************************/
longlong FUN_00063cb7(void)

{
  int iVar1;
  short sVar2;
  int in_EAX;
  int extraout_ECX;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  sVar2 = FUN_00063c04();
  if (sVar2 != 0) {
    *(undefined2 *)(iVar1 + 0x89) = 10;
    *(ushort *)(iVar1 + 0x8b) = (ushort)*(byte *)(iVar1 + 0x2e);
    *(ushort *)(iVar1 + 0x8d) = (ushort)*(byte *)(iVar1 + 0x30);
    *(undefined1 *)(extraout_ECX + 8) = 0x36;
    return CONCAT44(in_EDX,1);
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_063d17 (Ghidra: FUN_00063d17)
 * Prototype: longlong sub_063d17(void);
 * Address  : 0x63d17 (Size: 85 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x63b6d, 0x63c04
 ******************************************************************************/
longlong FUN_00063d17(void)

{
  short *psVar1;
  short sVar2;
  int in_EAX;
  int extraout_ECX;
  uint in_EDX;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x89) != 0) {
    psVar1 = (short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x89);
    *psVar1 = *psVar1 + -1;
    sVar2 = FUN_00063c04();
    if (sVar2 != 0) {
      *(undefined1 *)(extraout_ECX + 8) = 0x36;
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_063d6c (Ghidra: FUN_00063d6c)
 * Prototype: longlong sub_063d6c(void);
 * Address  : 0x63d6c (Size: 82 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x64b77
 ******************************************************************************/
longlong FUN_00063d6c(void)

{
  int iVar1;
  int in_EAX;
  int extraout_ECX;
  uint in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(char *)(iVar1 + 0x27f) != '\0') {
    *(char *)(iVar1 + 0x27f) = *(char *)(iVar1 + 0x27f) + -1;
  }
  if (*(char *)(iVar1 + 0x27f) == '\0') {
    FUN_00064b77();
    *(undefined2 *)(extraout_ECX + 0x35) = 0;
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_063dbe (Ghidra: FUN_00063dbe)
 * Prototype: undefined4 sub_063dbe(void);
 * Address  : 0x63dbe (Size: 21 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00063dbe(void)

{
  int in_EAX;
  
  *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) =
       *(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 1) & 0xfd;
  return 1;
}

/******************************************************************************
 * Function : sub_063dd3 (Ghidra: FUN_00063dd3)
 * Prototype: undefined8 sub_063dd3(void);
 * Address  : 0x63dd3 (Size: 804 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 18 -> 0x15e65, 0x16d38, 0x16f8b, 0x1829f, 0x39c3e, 0x39d83, 0x3e199, 0x63b6d, 0x64b0c, 0x65545 ...
 ******************************************************************************/
undefined8 FUN_00063dd3(void)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  short sVar4;
  undefined2 uVar5;
  int in_EAX;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  byte *extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  undefined4 in_EDX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 2;
  *(int *)(iVar2 + 0x116) = DAT_002e8bee + 100;
  uVar6 = (uint)((&DAT_002d33ca)
                 [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                  (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] & 7);
  iVar7 = FUN_000b2398(uVar6,(uint)*(byte *)(in_EAX + 0x10));
  if ((iVar7 < 0x126) || (0x12e < iVar7)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if ((int)*(char *)(extraout_ECX + 6) == uVar6) {
      *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) & 0xfd;
      FUN_00063b6d();
    }
    iVar7 = FUN_00015e65();
    if (iVar7 == 0) {
LAB_00063ea1:
      if ((*(ushort *)(iVar2 + 0x7a) & 0xfff) != 0) {
        FUN_00039c3e();
      }
      *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 2;
      FUN_00064b0c();
    }
    else {
      iVar7 = FUN_0001829f();
      if (iVar7 == 0) {
        if ((*(char *)(extraout_ECX_00 + 0x1a) == '\x17') || (iVar7 = FUN_00084f04(), iVar7 == 0))
        goto LAB_00063ea1;
LAB_00063e93:
        FUN_00016d38();
      }
    }
  }
  else {
    iVar7 = FUN_0007df48();
    if ((iVar7 == 0) && ((*(byte *)(extraout_ECX_01 + 0x25) & 0x20) == 0)) {
      uVar10 = 1;
      goto LAB_00064357;
    }
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_01 + 100)] + 0x2b1) = 0;
    if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_01 + 100)] + 0xad) & 2) == 0) {
      if ((*(char *)(extraout_ECX_01 + 0x1f) == '\x05') &&
         (*(char *)(extraout_ECX_01 + 0x1a) == '\x16')) {
        *(undefined4 *)(&DAT_002e142d + *(char *)(extraout_ECX_01 + 6) * 0x1508) = 0x60;
      }
      FUN_00063b6d();
      if ((int)*(char *)(extraout_ECX_02 + 6) == uVar6) {
        *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) & 0xfd;
      }
      else {
        *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | 2;
      }
      FUN_00082cac();
      pbVar8 = (byte *)FUN_00039d83();
      if ((((pbVar8 != (byte *)0x0) && (pbVar8 != extraout_ECX_03)) && ((*pbVar8 & 0x10) == 0)) &&
         (((pbVar8[1] & 2) == 0 && (iVar7 = FUN_000dc440(), 0x600 < iVar7)))) {
        FUN_00039c3e();
      }
      iVar9 = FUN_00015e65();
      iVar7 = extraout_ECX_04;
      if (iVar9 != 0) {
        iVar7 = FUN_0001829f();
        if (iVar7 == 0) {
          if ((*(char *)(extraout_ECX_05 + 0x1a) != '\x17') && (iVar7 = FUN_00084f04(), iVar7 != 0))
          goto LAB_00063e93;
          iVar9 = FUN_00065545();
          iVar7 = extraout_ECX_06;
          if (iVar9 == 0) goto LAB_00063fd0;
          FUN_00016f8b();
        }
        goto LAB_000640ae;
      }
LAB_00063fd0:
      if ((*(char *)(iVar7 + 0x1a) == '\x17') &&
         ((((int)*(char *)(iVar7 + 6) == uVar6 || (DAT_002eb543 == uVar6)) &&
          (iVar7 = FUN_0003e199(), iVar7 != 0)))) {
        uVar10 = 2;
        *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) & 0xfd;
        goto LAB_00064357;
      }
    }
    iVar7 = FUN_000d0f50();
    if ((iVar7 == 0) ||
       (((*(char *)(iVar7 + 3) != *(char *)(extraout_ECX_07 + 6) && (*(short *)(iVar7 + 10) != 5))
        && (*(short *)(iVar7 + 10) != 4)))) {
LAB_000640e5:
      *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) & 0xfd;
    }
    else {
      uVar1 = *(ushort *)(iVar7 + 10);
      iVar9 = extraout_ECX_07;
      if ((uVar1 != 0) &&
         (((uVar1 < 2 || ((3 < uVar1 && (uVar1 < 6)))) && ((*(ushort *)(iVar2 + 0x7a) & 0xfff) != 0)
          ))) {
        FUN_00039c3e();
        iVar9 = extraout_ECX_08;
      }
      if (*(short *)(iVar7 + 10) == 10) {
        iVar9 = FUN_000b2398();
        if ((iVar9 < 0x126) || (0x12e < iVar9)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        iVar9 = extraout_ECX_09;
        if (bVar3) goto LAB_000640e5;
      }
      if (((*(byte *)((&DAT_001b0a00)[*(ushort *)(iVar9 + 100)] + 0xad) & 2) == 0) ||
         (*(short *)(iVar7 + 10) == 10)) {
        sVar4 = FUN_000cb33c();
        if (sVar4 != 0) {
          uVar5 = FUN_000cfbd8();
          *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_10 + 100)] + 0x2b1) = uVar5;
          goto LAB_000640ae;
        }
        goto LAB_000640e5;
      }
    }
    FUN_00063b6d();
  }
LAB_000640ae:
  uVar10 = 2;
LAB_00064357:
  return CONCAT44(in_EDX,uVar10);
}

/******************************************************************************
 * Function : sub_0640f7 (Ghidra: FUN_000640f7)
 * Prototype: longlong sub_0640f7(void);
 * Address  : 0x640f7 (Size: 125 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x63b6d, 0x64b0c, 0x7df48, 0xb2440
 ******************************************************************************/
longlong FUN_000640f7(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  short extraout_DX;
  uint in_EDX;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) == 0) {
    sVar1 = FUN_000b2440();
    *(short *)(in_EAX + 0x11) = sVar1 - extraout_DX;
  }
  else if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) < 0) {
    iVar2 = FUN_0007df48();
    if ((iVar2 != 0) || ((*(byte *)(in_EAX + 0x25) & 0x20) != 0)) {
      if ((int)*(char *)(in_EAX + 6) == (uint)DAT_002eb543) {
        FUN_00064b0c();
      }
      else {
        FUN_00063b6d();
      }
    }
  }
  *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) =
       *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) + -1;
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_064174 (Ghidra: FUN_00064174)
 * Prototype: longlong sub_064174(void);
 * Address  : 0x64174 (Size: 50 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x826a0
 ******************************************************************************/
longlong FUN_00064174(void)

{
  short *psVar1;
  int iVar2;
  int in_EAX;
  uint in_EDX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  psVar1 = (short *)(iVar2 + 0x280);
  *psVar1 = *psVar1 + -1;
  if (*(short *)(iVar2 + 0x280) == 0) {
    FUN_000826a0();
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0641a6 (Ghidra: FUN_000641a6)
 * Prototype: undefined8 sub_0641a6(void);
 * Address  : 0x641a6 (Size: 211 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x84e0c, 0xb3d04, 0xca568, 0xcc968, 0xdc440
 ******************************************************************************/
undefined8 FUN_000641a6(void)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_EDX;
  undefined4 *puVar6;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  
  iVar4 = *(char *)(in_EAX + 6) * 0x1508;
  uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x74)];
  puVar6 = (undefined4 *)local_20;
  if ((((*(short *)(&DAT_002e059c + iVar4) != 0) &&
       (puVar6 = (undefined4 *)local_20, ((&DAT_002e0591)[iVar4] & 1) != 0)) &&
      (puVar6 = (undefined4 *)local_20, DAT_001ae9fc < uVar1)) &&
     ((puVar6 = (undefined4 *)local_20, *(char *)(uVar1 + 7) == 'C' &&
      (puVar6 = (undefined4 *)local_20, (*(byte *)(uVar1 + 1) & 1) == 0)))) {
    uStack_24 = 0x64216;
    iVar4 = FUN_000dc440();
    puVar6 = (undefined4 *)local_20;
    if (iVar4 < 0x200) {
      uStack_24 = 1;
      iVar4 = FUN_000ca568();
      puVar6 = &uStack_24;
      if (iVar4 != 0) {
        cVar2 = FUN_000cc968();
        puVar6 = &uStack_24;
        if (cVar2 != '\0') {
          sVar3 = FUN_000b3d04();
          puVar6 = &uStack_24;
          if (sVar3 != 0) {
            FUN_00084e0c();
            uVar5 = 1;
            *(undefined1 *)(in_EAX + 8) = 0x48;
            goto LAB_00064357;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)puVar6 + -4) = 0x646fc;
  FUN_00063b6d();
  uVar5 = 0;
LAB_00064357:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_064279 (Ghidra: FUN_00064279)
 * Prototype: undefined8 sub_064279(void);
 * Address  : 0x64279 (Size: 229 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x63b6d, 0x64b0c, 0x826a0
 ******************************************************************************/
undefined8 FUN_00064279(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  uint uVar3;
  
  uVar3 = (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe));
  if ((((&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)] !=
        DAT_001ae9fc) &&
      (*(char *)((&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)] + 7
                ) == 'C')) && ((*(byte *)((int)&DAT_00279203 + uVar3 * 5) & 2) != 0)) {
    iVar1 = ((&DAT_0019033b)[uVar3 % 0x100] + (&DAT_0019033b)[(int)uVar3 >> 8] * 0x55) * 6;
    if (((uint)((&DAT_002d33ca)[iVar1] & 7) == (int)*(char *)(in_EAX + 6)) &&
       (*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar1] * 0x45) == 4)) {
      FUN_000826a0();
      FUN_00064b0c();
      *(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 1) =
           *(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 1) | 2;
      FUN_00063b6d();
      uVar2 = 1;
      goto LAB_00064357;
    }
  }
  FUN_00063b6d();
  uVar2 = 0;
LAB_00064357:
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_06435e (Ghidra: FUN_0006435e)
 * Prototype: longlong sub_06435e(void);
 * Address  : 0x6435e (Size: 7 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x644e9
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0006435e(void)

{
  int unaff_EBP;
  
  FUN_00063b6d();
  return (ulonglong)*(uint *)(unaff_EBP + 0xc) << 0x20;
}

/******************************************************************************
 * Function : dk_trying_remove_spell_room_064365 (Ghidra: FUN_00064365)
 * Prototype: undefined8 dk_trying_remove_spell_room_064365(void);
 * Address  : 0x64365 (Size: 388 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp:866 ("TRYING TO REMOVE SPELL FROM A ROOM WITH NO SPELL")
 * Naming   : String 'TRYING TO REMOVE SPELL FROM A ROOM WITH NO SPELL'
 * Callers  : 0 -> 
 * Callees  : 8 -> 0x4fdac, 0x51374, 0xb3b58, 0xc3960, 0xca568, 0xccf10, 0xdc440, 0xddaf0
 * Strings  :
 *   - 0x166731: "person.cpp"
 *   - 0x166700: "TRYING TO REMOVE SPELL FROM A ROOM WITH NO SPELL"
 ******************************************************************************/
undefined8 FUN_00064365(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EDX;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined1 local_24 [8];
  uint local_1c;
  
  local_1c = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x72)];
  iVar2 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[*(byte *)(local_1c + 0xe)] +
                       (&DAT_0019033b)[*(byte *)(local_1c + 0x10)] * 0x55) * 6] * 0x45;
  puVar5 = (undefined4 *)local_24;
  if (((*(byte *)(local_1c + 1) & 1) == 0) &&
     (puVar5 = (undefined4 *)local_24, DAT_001ae9fc < local_1c)) {
    uStack_28 = 0x643dd;
    iVar3 = FUN_000dc440();
    puVar5 = (undefined4 *)local_24;
    if (iVar3 < 0x200) {
      uStack_28 = 1;
      iVar3 = FUN_000ca568();
      puVar5 = &uStack_28;
      if ((iVar3 != 0) && (cVar1 = FUN_000ccf10(), puVar5 = &uStack_28, cVar1 != '\0')) {
        if ((iVar2 != -0x2ddd1b) &&
           ((*(short *)(&DAT_002ddd25 + iVar2) == 3 &&
            (*(char *)(local_1c + 6) == (&DAT_002ddd1e)[iVar2])))) {
          if ((*(int *)(&DAT_002ddd32 + iVar2) == 0) || (*(short *)(&DAT_002ddd2b + iVar2) == 0)) {
            FUN_000ddaf0(); /* LbErrorLog("person.cpp", line 866, "TRYING TO REMOVE SPELL FROM A ROOM WITH NO SPELL") */
          }
          else {
            *(int *)(&DAT_002ddd32 + iVar2) = *(int *)(&DAT_002ddd32 + iVar2) + -1;
            *(short *)(&DAT_002ddd2b + iVar2) = *(short *)(&DAT_002ddd2b + iVar2) + -1;
            FUN_0004fdac();
            if (((int)(char)(&DAT_002ddd1e)[iVar2] ==
                 (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) ||
               ((int)*(char *)(in_EAX + 6) ==
                (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])) {
              FUN_00051374();
            }
          }
        }
        FUN_000c3960();
        FUN_000b3b58();
        uVar4 = 1;
        *(undefined1 *)(in_EAX + 8) = 0x65;
        goto LAB_00064357;
      }
    }
  }
  *(undefined4 *)((int)puVar5 + -4) = 0x646fc;
  FUN_00063b6d();
  uVar4 = 0;
LAB_00064357:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0644e9 (Ghidra: FUN_000644e9)
 * Prototype: undefined4 sub_0644e9(void);
 * Address  : 0x644e9 (Size: 244 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x4fd81, 0x6435e, 0xc39a8, 0xc6574
 ******************************************************************************/
undefined4 FUN_000644e9(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe));
  if ((((&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)] !=
        DAT_001ae9fc) &&
      (DAT_001ae9fc <
       (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)])) &&
     ((*(byte *)((int)&DAT_00279203 + uVar3 * 5) & 2) != 0)) {
    iVar1 = ((&DAT_0019033b)[uVar3 % 0x100] + (&DAT_0019033b)[(int)uVar3 >> 8] * 0x55) * 6;
    if (((uint)((&DAT_002d33ca)[iVar1] & 7) == (int)*(char *)(in_EAX + 6)) &&
       (*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar1] * 0x45) == 3)) {
      uVar4 = FUN_000c6574();
      iVar1 = (int)((ulonglong)uVar4 >> 0x20);
      if (((int)uVar4 != 0) && (*(int *)(iVar1 + 0x17) < (int)(uint)*(ushort *)(iVar1 + 0xe))) {
        *(int *)(iVar1 + 0x17) = *(int *)(iVar1 + 0x17) + 1;
        *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + 1;
        FUN_0004fd81();
      }
      FUN_000c39a8();
      *(undefined1 *)(extraout_ECX + 6) = *(undefined1 *)(in_EAX + 6);
      uVar2 = FUN_0006435e();
      return uVar2;
    }
  }
  FUN_00063b6d();
  return 0;
}

/******************************************************************************
 * Function : sub_0645dd (Ghidra: FUN_000645dd)
 * Prototype: undefined8 sub_0645dd(void);
 * Address  : 0x645dd (Size: 294 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x63b6d, 0x77900, 0x77a5b, 0xb3d04, 0xc3960, 0xd0f50, 0xdc440
 ******************************************************************************/
undefined8 FUN_000645dd(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar2 = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x72)];
  iVar5 = FUN_000d0f50();
  uVar3 = (&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x70)];
  if (((*(byte *)(uVar2 + 1) & 1) == 0) && (DAT_001ae9fc < uVar2)) {
    iVar6 = FUN_000dc440();
    if ((iVar6 < 0x200) &&
       (((DAT_001ae9fc < uVar3 && (*(char *)(uVar3 + 0x1f) == '\b')) &&
        (*(char *)(uVar3 + 0x1a) == (&DAT_0019116c)[*(byte *)(uVar2 + 0x1a)])))) {
      sVar4 = FUN_000b3d04();
      if (sVar4 != 0) {
        if (((iVar5 != 0) && (*(short *)(iVar5 + 10) == 8)) &&
           (*(char *)(uVar2 + 6) == *(char *)(iVar5 + 3))) {
          FUN_00077900();
          if (*(char *)(uVar2 + 6) < '\x05') {
            FUN_00077a5b((&DAT_001911f3)[*(byte *)(uVar2 + 0x1a)]);
          }
        }
        FUN_000c3960();
        uVar7 = 1;
        *(undefined1 *)(in_EAX + 8) = 0xc;
        goto LAB_00064357;
      }
    }
  }
  *(undefined2 *)(iVar1 + 0x70) = 0;
  FUN_00063b6d();
  uVar7 = 0;
LAB_00064357:
  return CONCAT44(in_EDX,uVar7);
}

/******************************************************************************
 * Function : sub_064703 (Ghidra: FUN_00064703)
 * Prototype: undefined8 sub_064703(void);
 * Address  : 0x64703 (Size: 179 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0xb3d04, 0xc3960, 0xca6bc, 0xccf10, 0xd0f50, 0xdc440
 ******************************************************************************/
undefined8 FUN_00064703(void)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_EDX;
  
  uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x72)];
  FUN_000d0f50();
  if (((*(byte *)(uVar1 + 1) & 1) == 0) && (DAT_001ae9fc < uVar1)) {
    iVar4 = FUN_000dc440();
    if (iVar4 < 0x200) {
      iVar4 = FUN_000ca6bc();
      if (iVar4 != 0) {
        cVar2 = FUN_000ccf10();
        if (cVar2 != '\0') {
          sVar3 = FUN_000b3d04();
          if (sVar3 != 0) {
            FUN_000c3960();
            uVar5 = 1;
            *(undefined1 *)(in_EAX + 8) = 0x10;
            goto LAB_00064357;
          }
        }
      }
    }
  }
  FUN_00063b6d();
  uVar5 = 0;
LAB_00064357:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_0647b6 (Ghidra: FUN_000647b6)
 * Prototype: undefined8 sub_0647b6(void);
 * Address  : 0x647b6 (Size: 150 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x63b6d, 0x7793c, 0x779fb, 0xc39a8, 0xd0f50
 ******************************************************************************/
undefined8 FUN_000647b6(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 in_EDX;
  
  uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)];
  if (DAT_001ae9fc < uVar1) {
    iVar2 = FUN_000d0f50();
    if ((((iVar2 != 0) && (*(short *)(iVar2 + 10) == 8)) &&
        (*(char *)(iVar2 + 3) == *(char *)(extraout_ECX + 6))) &&
       (*(ushort *)(iVar2 + 0x10) < *(ushort *)(iVar2 + 0xe))) {
      FUN_000c39a8();
      *(undefined1 *)(uVar1 + 6) = *(undefined1 *)(extraout_ECX_00 + 6);
      FUN_0007793c();
      FUN_000779fb();
      FUN_00063b6d();
      uVar3 = 1;
      goto LAB_00064358;
    }
  }
  FUN_00063b6d();
  uVar3 = 0;
LAB_00064358:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_06484c (Ghidra: FUN_0006484c)
 * Prototype: undefined8 sub_06484c(void);
 * Address  : 0x6484c (Size: 180 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x50de3, 0x63b6d, 0x72af4, 0xc39a8
 ******************************************************************************/
undefined8 FUN_0006484c(void)

{
  byte bVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 in_EDX;
  
  if (DAT_001ae9fc < (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)]
     ) {
    iVar2 = FUN_00050de3();
    if ((iVar2 == extraout_ECX) && (*(char *)(extraout_ECX + 0x13) == '\0')) {
      *(undefined *)(extraout_ECX + 0x13) =
           (&DAT_001ae89c)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0x14];
      bVar1 = (&DAT_0018fd1b)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0x36];
      *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) & 0xcf;
      *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) | (bVar1 & 3) << 4;
      *(int *)(&DAT_002e1804 + *(char *)(in_EAX + 6) * 0x1508) =
           *(int *)(&DAT_002e1804 + *(char *)(in_EAX + 6) * 0x1508) + 1;
      FUN_000c39a8();
      FUN_00072af4();
      FUN_00063b6d();
      uVar3 = 1;
      goto LAB_00064358;
    }
  }
  FUN_00063b6d();
  uVar3 = 0;
LAB_00064358:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_064900 (Ghidra: FUN_00064900)
 * Prototype: undefined8 sub_064900(void);
 * Address  : 0x64900 (Size: 173 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0xb3d04, 0xc3960, 0xca568, 0xcc968, 0xdc440
 ******************************************************************************/
undefined8 FUN_00064900(void)

{
  char cVar1;
  short sVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EDX;
  undefined4 *puVar5;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  
  puVar5 = (undefined4 *)local_20;
  if (((*(&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x72)] & 0x80) ==
       0) && (puVar5 = (undefined4 *)local_20,
             DAT_001ae9fc <
             (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x72)])) {
    uStack_24 = 0x64941;
    iVar3 = FUN_000dc440();
    puVar5 = (undefined4 *)local_20;
    if (iVar3 < 0x200) {
      uStack_24 = 1;
      iVar3 = FUN_000ca568();
      puVar5 = &uStack_24;
      if (iVar3 != 0) {
        cVar1 = FUN_000cc968();
        puVar5 = &uStack_24;
        if (cVar1 != '\0') {
          sVar2 = FUN_000b3d04();
          puVar5 = &uStack_24;
          if (sVar2 != 0) {
            FUN_000c3960();
            uVar4 = 1;
            *(undefined1 *)(in_EAX + 8) = 0x67;
            goto LAB_00064357;
          }
        }
      }
    }
  }
  *(undefined4 *)((int)puVar5 + -4) = 0x646fc;
  FUN_00063b6d();
  uVar4 = 0;
LAB_00064357:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : sub_0649ad (Ghidra: FUN_000649ad)
 * Prototype: longlong sub_0649ad(void);
 * Address  : 0x649ad (Size: 129 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x398b4, 0x63b6d, 0xc39a8, 0xd0f50
 ******************************************************************************/
longlong FUN_000649ad(void)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  uint in_EDX;
  
  uVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)];
  if (DAT_001ae9fc < uVar1) {
    iVar2 = FUN_000d0f50();
    if ((((iVar2 != 0) && (*(short *)(iVar2 + 10) == 0xb)) &&
        (*(char *)(iVar2 + 3) == *(char *)(in_EAX + 6))) &&
       (*(ushort *)(iVar2 + 0x10) < *(ushort *)(iVar2 + 0xe))) {
      FUN_000c39a8();
      *(undefined1 *)(uVar1 + 6) = *(undefined1 *)(in_EAX + 6);
      FUN_000398b4();
      FUN_00063b6d();
      return CONCAT44(in_EDX,1);
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_064a2e (Ghidra: FUN_00064a2e)
 * Prototype: undefined8 sub_064a2e(void);
 * Address  : 0x64a2e (Size: 49 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 11 -> 0x1073a, 0x13809, 0x525b2, 0x64a5f, 0x64b0c, 0x8608c, 0xc3c3c, 0xc4f70, 0xdf760, 0xe0b1c ...
 * Callees  : 2 -> 0x49dd9, 0x64bce
 ******************************************************************************/
undefined8 FUN_00064a2e(void)

{
  int iVar1;
  undefined4 in_EDX;
  int extraout_EDX;
  
  iVar1 = FUN_00064bce();
  if (*(int *)(iVar1 + 4) != 0) {
    (**(code **)(iVar1 + 4))();
    *(byte *)(extraout_EDX + 1) = *(byte *)(extraout_EDX + 1) | 0x10;
    return CONCAT44(in_EDX,1);
  }
  FUN_00049dd9();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_external_change_state_but_064a5f (Ghidra: FUN_00064a5f)
 * Prototype: undefined1 dk_external_change_state_but_064a5f(void);
 * Address  : 0x64a5f (Size: 136 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp:1196 ("External change state, but thing in room list even after cleanup")
 * Naming   : String 'External change state, but thing in room list even after cle'
 * Callers  : 41 -> 0x1073a, 0x1107a, 0x11862, 0x119bc, 0x11a81, 0x11b51, 0x11c78, 0x11d2f, 0x11d65, 0x13809 ...
 * Callees  : 4 -> 0x64a2e, 0x64c4d, 0xcd9b0, 0xddaf0
 * Strings  :
 *   - 0x16677d: "person.cpp"
 *   - 0x16673c: "External change state, but thing in room list even after cleanup"
 ******************************************************************************/
undefined1 FUN_00064a5f(void)

{
  char cVar1;
  undefined1 uVar2;
  int extraout_ECX;
  undefined1 in_DL;
  
  cVar1 = FUN_00064c4d();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_00064a2e();
    *(undefined1 *)(extraout_ECX + 8) = 0;
    *(undefined1 *)(extraout_ECX + 7) = in_DL;
    *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) & 0xef;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x80) = 0;
    *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x302) = 0;
    if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 1) & 0x20) != 0) {
      FUN_000ddaf0(); /* LbErrorLog("person.cpp", line 1196, "External change state, but thing in room list even after cleanup") */
      FUN_000cd9b0();
    }
    uVar2 = 1;
  }
  return uVar2;
}

/******************************************************************************
 * Function : sub_064ae7 (Ghidra: FUN_00064ae7)
 * Prototype: undefined4 sub_064ae7(void);
 * Address  : 0x64ae7 (Size: 37 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 52 -> 0x13747, 0x26ce2, 0x2796f, 0x2863c, 0x28904, 0x28afb, 0x3818c, 0x38615, 0x38668, 0x38989 ...
 * Callees  : 1 -> 0x49dd9
 ******************************************************************************/
undefined4 FUN_00064ae7(void)

{
  int in_EAX;
  undefined1 in_DL;
  
  *(undefined1 *)(in_EAX + 8) = 0;
  *(undefined1 *)(in_EAX + 7) = in_DL;
  *(byte *)(in_EAX + 1) = *(byte *)(in_EAX + 1) & 0xef;
  *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x302) = 0;
  FUN_00049dd9();
  return 1;
}

/******************************************************************************
 * Function : dk_initialise_state_but_thing_064b0c (Ghidra: FUN_00064b0c)
 * Prototype: undefined4 dk_initialise_state_but_thing_064b0c(void);
 * Address  : 0x64b0c (Size: 107 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp:1310 ("Initialise state, but thing in room list even after cleanup")
 * Naming   : String 'Initialise state, but thing in room list even after cleanup'
 * Callers  : 10 -> 0x1e226, 0x4e1f2, 0x4efd4, 0x5f6c5, 0x63b6d, 0x63dd3, 0x640f7, 0x64279, 0x68788, 0x849c8
 * Callees  : 3 -> 0x64a2e, 0xcd9b0, 0xddaf0
 * Strings  :
 *   - 0x1667c4: "person.cpp"
 *   - 0x166788: "Initialise state, but thing in room list even after cleanup"
 ******************************************************************************/
undefined4 FUN_00064b0c(void)

{
  int extraout_ECX;
  undefined1 extraout_DL;
  
  FUN_00064a2e();
  *(undefined1 *)(extraout_ECX + 8) = 0;
  *(undefined1 *)(extraout_ECX + 7) = extraout_DL;
  *(byte *)(extraout_ECX + 1) = *(byte *)(extraout_ECX + 1) & 0xef;
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x80) = 0;
  *(undefined1 *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 0x302) = 0;
  if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX + 100)] + 1) & 0x20) != 0) {
    FUN_000ddaf0(); /* LbErrorLog("person.cpp", line 1310, "Initialise state, but thing in room list even after cleanup") */
    FUN_000cd9b0();
  }
  return 1;
}

/******************************************************************************
 * Function : sub_064b77 (Ghidra: FUN_00064b77)
 * Prototype: undefined4 sub_064b77(void);
 * Address  : 0x64b77 (Size: 87 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x63d6c
 * Callees  : 3 -> 0x45394, 0x63b6d, 0x64ae7
 ******************************************************************************/
undefined4 FUN_00064b77(void)

{
  int extraout_ECX;
  int in_EDX;
  int unaff_EBX;
  
  if ((*(int *)(&DAT_0018c4a4 + in_EDX * 0x29) == 0) &&
     ((unaff_EBX == 0 || (*(int *)(&DAT_0018c4a4 + unaff_EBX * 0x29) == 0)))) {
    FUN_00064ae7();
    *(char *)(extraout_ECX + 8) = (char)unaff_EBX;
    return 1;
  }
  if ((((in_EDX != 0x29) && (in_EDX != 0x2b)) && (unaff_EBX != 0x29)) && (unaff_EBX != 0x2b)) {
    FUN_00063b6d();
    return 1;
  }
  FUN_00045394();
  return 1;
}

/******************************************************************************
 * Function : sub_064bce (Ghidra: FUN_00064bce)
 * Prototype: undefined8 sub_064bce(void);
 * Address  : 0x64bce (Size: 42 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x13809, 0x64a2e, 0xa5240
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00064bce(void)

{
  int in_EAX;
  undefined4 in_EDX;
  int iVar1;
  
  iVar1 = (uint)*(byte *)(in_EAX + 7) * 0x29;
  if ((&DAT_0018c4be)[iVar1] == '\x06') {
    iVar1 = (uint)*(byte *)(in_EAX + 8) * 0x29;
  }
  return CONCAT44(in_EDX,&DAT_0018c4a0 + iVar1);
}

/******************************************************************************
 * Function : sub_064bf8 (Ghidra: FUN_00064bf8)
 * Prototype: undefined8 sub_064bf8(void);
 * Address  : 0x64bf8 (Size: 33 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined8 FUN_00064bf8(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  if ((&DAT_0018c4be)[(uint)*(byte *)(in_EAX + 7) * 0x29] == '\x06') {
    return CONCAT44(in_EDX,(uint)*(byte *)(in_EAX + 8));
  }
  return CONCAT44(in_EDX,(uint)*(byte *)(in_EAX + 7));
}

/******************************************************************************
 * Function : sub_064c4d (Ghidra: FUN_00064c4d)
 * Prototype: int sub_064c4d(void);
 * Address  : 0x64c4d (Size: 179 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 15 -> 0x1073a, 0x119bc, 0x11a81, 0x11b51, 0x11c78, 0x11d2f, 0x11d65, 0x15e65, 0x206b2, 0x525b2 ...
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_00064c4d(void)

{
  int in_EAX;
  int iVar1;
  uint3 uVar2;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  bool bVar4;
  
  iVar3 = in_EDX * 0x29;
  iVar1 = unaff_EBX * 0x29;
  if ((&DAT_0018c4be)[iVar3] == '\x06') {
    iVar3 = (uint)*(byte *)(in_EAX + 8) * 0x29;
  }
  uVar2 = (uint3)((uint)(&DAT_0018c4a0 + iVar1) >> 8);
  if ((((&DAT_0018c4c0)[iVar3] == '\0') || ((&DAT_0018c4b6)[iVar1] != '\0')) &&
     (((&DAT_0018c4bf)[iVar3] == '\0' || ((&DAT_0018c4b5)[iVar1] != '\0')))) {
    switch((&DAT_0018c4be)[iVar3]) {
    case 2:
      bVar4 = (&DAT_0018c4b1)[iVar1] == '\0';
      break;
    case 3:
      bVar4 = (&DAT_0018c4b2)[iVar1] == '\0';
      break;
    case 4:
      bVar4 = (&DAT_0018c4b0)[iVar1] == '\0';
      break;
    case 5:
      bVar4 = (&DAT_0018c4b3)[iVar1] == '\0';
      break;
    default:
      goto switchD_00064cf4_caseD_6;
    case 7:
      bVar4 = (&DAT_0018c4b4)[iVar1] == '\0';
      break;
    case 8:
      bVar4 = (&DAT_0018c4b7)[iVar1] == '\0';
      break;
    case 9:
      bVar4 = (&DAT_0018c4b8)[iVar1] == '\0';
      break;
    case 10:
      bVar4 = (&DAT_0018c4b9)[iVar1] == '\0';
      break;
    case 0xb:
      bVar4 = (&DAT_0018c4bb)[iVar1] == '\0';
      break;
    case 0xc:
      bVar4 = (&DAT_0018c4ba)[iVar1] == '\0';
      break;
    case 0xd:
      bVar4 = (&DAT_0018c4bc)[iVar1] == '\0';
      break;
    case 0xe:
      bVar4 = (&DAT_0018c4bd)[iVar1] == '\0';
    }
    if (!bVar4) {
switchD_00064cf4_caseD_6:
      return CONCAT31(uVar2,1);
    }
  }
  return (uint)uVar2 << 8;
}

/******************************************************************************
 * Function : sub_064d00 (Ghidra: FUN_00064d00)
 * Prototype: ulonglong sub_064d00(void);
 * Address  : 0x64d00 (Size: 296 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x274ad, 0x51374, 0x82774
 ******************************************************************************/
ulonglong FUN_00064d00(void)

{
  int in_EAX;
  uint uVar1;
  uint extraout_ECX;
  undefined4 in_EDX;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 auStack_2c [2];
  uint local_24;
  int local_20;
  uint local_1c;
  
  local_24 = 0;
  local_1c = 0;
  local_20 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar4 = 0;
  puVar3 = &local_24;
  do {
    uVar1 = local_1c;
    puVar2 = (undefined1 *)puVar3;
    if ((((((&DAT_0019d0c8)[local_1c] & 1) != 0) &&
         (uVar1 = (uint)(byte)(&DAT_0019d0f4)[local_1c], uVar1 == 1)) &&
        (*(short *)((int)&DAT_002e0589 + iVar4) != 0)) &&
       (uVar1 = (uint)*(byte *)(local_20 + 0x8a), (uVar1 & 1 << ((byte)local_24 & 0x1f)) == 0)) {
      *(undefined4 *)((int)puVar3 + -4) = 0x64d9b;
      uVar1 = FUN_00082774();
      if (((char)uVar1 != '\0') &&
         (uVar1 = *(uint *)((int)&DAT_00279203 +
                           (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),
                                          *(undefined1 *)(in_EAX + 0xe)) * 5 + 1) >> 0x1c,
         (uVar1 & extraout_ECX) != 0)) {
        *(undefined4 *)((int)puVar3 + -4) = 0;
        *(byte *)(local_20 + 0x8a) = *(byte *)(local_20 + 0x8a) | '\x01' << ((byte)local_24 & 0x1f);
        *(short *)((int)&DAT_002e1062 + iVar4) = *(short *)((int)&DAT_002e1062 + iVar4) + 1;
        *(undefined4 *)((int)puVar3 + -8) = 0x64dee;
        FUN_000274ad();
        uVar1 = (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef];
        puVar2 = (undefined1 *)((int)puVar3 + -4);
        if (uVar1 == local_24) {
          *(undefined4 *)((int)puVar3 + -8) = 0x64e1c;
          uVar1 = FUN_00051374();
          puVar2 = (undefined1 *)((int)puVar3 + -4);
        }
      }
    }
    local_1c = local_1c + 0x4ef;
    local_24 = local_24 + 1;
    iVar4 = iVar4 + 0x1508;
    puVar3 = (uint *)puVar2;
  } while ((int)local_24 < 4);
  return CONCAT44(in_EDX,uVar1) & 0xffffffffffffff00;
}

/******************************************************************************
 * Function : sub_064e28 (Ghidra: FUN_00064e28)
 * Prototype: undefined8 sub_064e28(void);
 * Address  : 0x64e28 (Size: 49 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x84e8c
 ******************************************************************************/
undefined8 FUN_00064e28(void)

{
  int in_EAX;
  undefined4 in_EDX;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) != 0) {
    FUN_00084e8c();
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_064e59 (Ghidra: FUN_00064e59)
 * Prototype: undefined4 sub_064e59(void);
 * Address  : 0x64e59 (Size: 10 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x660f1, 0x72ef7, 0x74b82
 * Callees  : 1 -> 0xcd9b0
 ******************************************************************************/
undefined4 FUN_00064e59(void)

{
  FUN_000cd9b0();
  return 1;
}

/******************************************************************************
 * Function : sub_064e63 (Ghidra: FUN_00064e63)
 * Prototype: undefined4 sub_064e63(void);
 * Address  : 0x64e63 (Size: 10 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x82710
 ******************************************************************************/
undefined4 FUN_00064e63(void)

{
  FUN_00082710();
  return 1;
}

/******************************************************************************
 * Function : sub_064e6d (Ghidra: FUN_00064e6d)
 * Prototype: undefined8 sub_064e6d(void);
 * Address  : 0x64e6d (Size: 55 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0xc39a8
 ******************************************************************************/
undefined8 FUN_00064e6d(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_EDX;
  
  if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e) != 0) {
    iVar1 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x6e)];
    FUN_000c39a8();
    *(undefined1 *)(iVar1 + 6) = DAT_002eb543;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_064ea4 (Ghidra: FUN_00064ea4)
 * Prototype: undefined4 sub_064ea4(void);
 * Address  : 0x64ea4 (Size: 506 bytes)
 * Module   : person.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6509e
 * Callees  : 3 -> 0x827fc, 0xb28e8, 0xda67c
 ******************************************************************************/
undefined4 FUN_00064ea4(void)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  undefined2 uVar6;
  int in_EAX;
  uint uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  uint extraout_EDX;
  int unaff_EBX;
  int iVar8;
  uint uVar9;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  iVar8 = (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55 +
          (&DAT_0019033b)[*(byte *)(in_EAX + 0xe)];
  uVar7 = (uint)(byte)(&DAT_002d33c5)[iVar8 * 6];
  bVar1 = (&DAT_002d33ca)
          [((&DAT_0019033b)[(iVar8 % 0x55) * 3] + (&DAT_0019033b)[(iVar8 / 0x55) * 3] * 0x55) * 6];
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar3 = *(ushort *)(unaff_EBX + 0x37);
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  local_18 = DAT_002e8bf6 % (uint)*(ushort *)(unaff_EBX + 0x3b);
  for (iVar8 = 0; uVar9 = (uint)uVar3, iVar8 < (int)local_18; iVar8 = iVar8 + 1) {
    uVar3 = *(ushort *)(&DAT_002d33c6 + uVar9 * 6);
  }
  local_20 = 0;
  do {
    if ((int)(uint)*(ushort *)(unaff_EBX + 0x3b) <= local_20) {
      return 0xffffffff;
    }
    if (*(ushort *)(unaff_EBX + 0x3b) == local_18) {
      local_18 = 0;
      uVar9 = (uint)*(ushort *)(unaff_EBX + 0x37);
    }
    local_24 = 0;
    for (local_1c = 0; local_1c < 0x10; local_1c = local_1c + 2) {
      iVar8 = (int)*(short *)(&DAT_0018b690 + local_1c) + uVar9;
      bVar2 = (&DAT_002d33c5)[iVar8 * 6];
      cVar5 = FUN_000da67c(uVar7,iVar8,(&DAT_0019033b)[(iVar8 / 0x55) * 3] * 0x55);
      if ((cVar5 != '\0') && ((bVar2 != uVar7 || (extraout_EDX != (bVar1 & 7))))) {
        sVar4 = *(short *)(&DAT_0018b690 + local_24 * 2);
        *(char *)(extraout_ECX + 1) = (char)((int)(uVar9 + (int)sVar4) % 0x55) * '\x03' + '\x01';
        *(char *)(extraout_ECX + 3) = (char)((int)(uVar9 + (int)sVar4) / 0x55) * '\x03' + '\x01';
        uVar6 = FUN_000b28e8();
        *(undefined2 *)(extraout_ECX_00 + 4) = uVar6;
        cVar5 = FUN_000827fc();
        if (cVar5 != '\0') {
          return 1;
        }
        return 0;
      }
      local_24 = local_24 + 1;
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 1;
    uVar9 = (uint)*(ushort *)(&DAT_002d33c6 + uVar9 * 6);
  } while( true );
}

/******************************************************************************
 * Function : dk_nav_outside_room_06509e (Ghidra: FUN_0006509e)
 * Prototype: undefined8 dk_nav_outside_room_06509e(void);
 * Address  : 0x6509e (Size: 251 bytes)
 * Module   : person.cpp [direct_file_string_xref]
 * OrigLine : person.cpp:1679 ("Cannot nav outside room")
 * Naming   : String 'Cannot nav outside room'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x64ea4, 0xb3b58, 0xddaf0
 * Strings  :
 *   - 0x1667e7: "person.cpp"
 *   - 0x1667cf: "Cannot nav outside room"
 ******************************************************************************/
undefined8 FUN_0006509e(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar3 = (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe));
  if (((*(byte *)((int)&DAT_00279203 + uVar3 * 5) & 2) != 0) &&
     (*(short *)(&DAT_002ddd1c +
                (uint)(byte)(&DAT_002d33c8)
                            [((&DAT_0019033b)[uVar3 % 0x100] +
                             (&DAT_0019033b)[(int)uVar3 >> 8] * 0x55) * 6] * 0x45) ==
      *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x9a))) {
    iVar2 = FUN_00064ea4();
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2b1) = 0;
    if (iVar2 == 1) {
      sVar1 = FUN_000b3b58();
      if (sVar1 != 0) {
        *(undefined1 *)(in_EAX + 8) = 0x6b;
        goto LAB_00064352;
      }
      FUN_000ddaf0(); /* LbErrorLog("person.cpp", line 1679, "Cannot nav outside room") */
    }
    else if (iVar2 != -1) goto LAB_00064352;
  }
  FUN_00063b6d();
LAB_00064352:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_065199 (Ghidra: FUN_00065199)
 * Prototype: longlong sub_065199(void);
 * Address  : 0x65199 (Size: 234 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x1017e, 0x444a9, 0x64ae7, 0x856f8, 0x8ccec
 ******************************************************************************/
longlong FUN_00065199(void)

{
  short *psVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  undefined4 *puVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar3 = (undefined4 *)&stack0xfffffff0;
  uStack_14 = 0x651b1;
  FUN_0001017e();
  if (*(short *)(extraout_ECX + 0x282) != 0) {
    psVar1 = (short *)(extraout_ECX + 0x282);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 != 0) {
      *(byte *)(in_EAX + 0x50) = *(byte *)(in_EAX + 0x50) | 1;
      *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) | 1;
      uStack_14 = 0x651e7;
      iVar2 = FUN_000444a9();
      if (iVar2 != 0) {
        uStack_14 = 2;
        uStack_18 = 0;
        puVar3 = &uStack_1c;
        uStack_1c = 0xffffffff;
        FUN_0008ccec();
        *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) & 0xcf;
        *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) | 0x10;
      }
      return (ulonglong)*(uint *)((int)puVar3 + 4) << 0x20;
    }
  }
  *(byte *)(extraout_ECX + 0xad) = *(byte *)(extraout_ECX + 0xad) | 2;
  *(byte *)(in_EAX + 0x4f) = *(byte *)(in_EAX + 0x4f) & 0xfe;
  uStack_14 = 0x65272;
  FUN_000856f8();
  uStack_14 = 0x65279;
  FUN_00064ae7();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_065283 (Ghidra: FUN_00065283)
 * Prototype: undefined8 sub_065283(void);
 * Address  : 0x65283 (Size: 221 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x1017e, 0x444a9, 0x856f8, 0x8ccec, 0xdd2f0
 ******************************************************************************/
undefined8 FUN_00065283(void)

{
  short *psVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar5 = (undefined4 *)&stack0xffffffec;
  puVar4 = &stack0xffffffec;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uStack_18 = 0x6529c;
  FUN_0001017e();
  if (*(short *)(iVar2 + 0x282) != 0) {
    psVar1 = (short *)(iVar2 + 0x282);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 != 0) {
      *(byte *)(extraout_ECX + 0x50) = *(byte *)(extraout_ECX + 0x50) | 1;
      *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) | 1;
      uStack_18 = 0x652d0;
      iVar2 = FUN_000444a9();
      if (iVar2 != 0) {
        uStack_18 = 2;
        uStack_1c = 0;
        puVar5 = &uStack_20;
        uStack_20 = 0xffffffff;
        FUN_000dd2f0();
        FUN_0008ccec();
        *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) & 0xcf;
        *(byte *)(iVar2 + 0x4f) = *(byte *)(iVar2 + 0x4f) | 0x10;
      }
      uVar3 = 0;
      puVar4 = (undefined1 *)puVar5;
      goto LAB_00064358;
    }
  }
  *(byte *)(extraout_ECX + 0x4f) = *(byte *)(extraout_ECX + 0x4f) & 0xfe;
  *(byte *)(iVar2 + 0xab) = *(byte *)(iVar2 + 0xab) & 0xfe;
  *(byte *)(iVar2 + 0xad) = *(byte *)(iVar2 + 0xad) & 0xfd;
  uStack_18 = 0x6535b;
  FUN_000856f8();
  uStack_18 = 0x6483b;
  FUN_00063b6d();
  uVar3 = 1;
LAB_00064358:
  return CONCAT44(*(undefined4 *)(puVar4 + 8),uVar3);
}

/******************************************************************************
 * Function : sub_065360 (Ghidra: FUN_00065360)
 * Prototype: longlong sub_065360(void);
 * Address  : 0x65360 (Size: 110 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x63b6d, 0x6edb9
 ******************************************************************************/
longlong FUN_00065360(void)

{
  short *psVar1;
  int iVar2;
  int in_EAX;
  uint in_EDX;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar2 + 0x282) != 0) {
    psVar1 = (short *)(iVar2 + 0x282);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 != 0) {
      if (0x20 < (uint)(DAT_002e8bee - *(int *)(iVar2 + 0x9a))) {
        FUN_0006edb9();
        *(int *)(iVar2 + 0x9a) = DAT_002e8bee;
      }
      return CONCAT44(in_EDX,1);
    }
  }
  *(int *)(iVar2 + 0x4e) = DAT_002e8bee;
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0653ce (Ghidra: FUN_000653ce)
 * Prototype: undefined8 sub_0653ce(void);
 * Address  : 0x653ce (Size: 122 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x63b6d, 0x6e538, 0x6f865
 ******************************************************************************/
undefined8 FUN_000653ce(void)

{
  short *psVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar5 = (undefined4 *)&stack0xffffffec;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uStack_18 = 0x653f0;
  iVar3 = FUN_0006f865();
  if (iVar3 == 0) {
    uStack_18 = 0x100;
    uStack_1c = 6;
    uStack_20 = 1;
    puVar5 = &uStack_24;
    uStack_24 = 3;
    FUN_0006e538();
  }
  if (*(short *)(iVar2 + 0x282) != 0) {
    psVar1 = (short *)(iVar2 + 0x282);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 != 0) {
      uVar4 = 1;
      goto LAB_00064358;
    }
  }
  *(undefined4 *)(iVar2 + 0xb2) = DAT_002e8bee;
  *(undefined4 *)((int)puVar5 + -4) = 0x65441;
  FUN_00063b6d();
  uVar4 = 0;
LAB_00064358:
  return CONCAT44(*(undefined4 *)((int)puVar5 + 8),uVar4);
}

/******************************************************************************
 * Function : sub_065448 (Ghidra: FUN_00065448)
 * Prototype: undefined8 sub_065448(void);
 * Address  : 0x65448 (Size: 144 bytes)
 * Module   : person.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x49bfc, 0x6edb9
 ******************************************************************************/
undefined8 FUN_00065448(void)

{
  short *psVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint uStack_18;
  
  puVar4 = &stack0xffffffec;
  puVar5 = (uint *)&stack0xffffffec;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar2 + 0x282) != 0) {
    psVar1 = (short *)(iVar2 + 0x282);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 != 0) {
      if (0x20 < (uint)(DAT_002e8bee - *(int *)(iVar2 + 0x9a))) {
        uStack_18 = 0x65490;
        FUN_0006edb9();
        *(int *)(iVar2 + 0x9a) = DAT_002e8bee;
      }
      uStack_18 = (uint)*(byte *)(iVar2 + 0xd2);
      if (uStack_18 == 0) {
        puVar5 = &uStack_18;
        FUN_00049bfc();
      }
      uVar3 = 1;
      puVar4 = (undefined1 *)puVar5;
      goto LAB_00064358;
    }
  }
  if (*(char *)(iVar2 + 0xd2) == '\0') {
    uStack_18 = 0x65441;
    FUN_00063b6d();
  }
  uVar3 = 0;
LAB_00064358:
  return CONCAT44(*(undefined4 *)(puVar4 + 8),uVar3);
}

