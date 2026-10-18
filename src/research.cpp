/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: research.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 19
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_066247 (Ghidra: FUN_00066247)
 * Prototype: undefined8 sub_066247(void);
 * Address  : 0x66247 (Size: 236 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 10 -> 0x1614f, 0x1671a, 0x189d4, 0x49bfc, 0x49ea9, 0x63b6d, 0x65f82, 0x6616d, 0xb4ac4, 0xb5264
 ******************************************************************************/
undefined8 FUN_00066247(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uStack_18;
  
  puVar3 = (undefined4 *)&stack0xffffffec;
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) == '\0') {
    uStack_18 = 0x6627a;
    iVar2 = FUN_00049ea9();
    if (iVar2 == 0) {
      uStack_18 = 0x66315;
      sVar1 = FUN_000b5264();
      puVar3 = (undefined4 *)&stack0xffffffec;
      if (sVar1 != 0) {
        *(undefined1 *)(in_EAX + 8) = 0x88;
        puVar3 = (undefined4 *)&stack0xffffffec;
      }
    }
    else {
      uStack_18 = 0x66289;
      iVar2 = FUN_0006616d();
      if (iVar2 == 0) {
        uStack_18 = 0x6632e;
        FUN_00063b6d();
        uVar4 = FUN_00065f82();
        return uVar4;
      }
      uStack_18 = 0x6629e;
      iVar2 = FUN_000189d4();
      if (iVar2 < 0x9c) {
        uStack_18 = 0x66309;
        FUN_0001671a();
        puVar3 = (undefined4 *)&stack0xffffffec;
      }
      else {
        if (iVar2 < 0x801) {
          uStack_18 = 0x662b7;
          iVar2 = FUN_0001614f();
          if (iVar2 != 0) {
            uStack_18 = 0;
            FUN_00049bfc();
            puVar3 = &uStack_18;
            goto LAB_00066264;
          }
        }
        uStack_18 = 0;
        FUN_000b4ac4();
        puVar3 = &uStack_18;
      }
    }
  }
LAB_00066264:
  return CONCAT44(*(undefined4 *)((int)puVar3 + 8),1);
}

/******************************************************************************
 * Function : sub_066334 (Ghidra: FUN_00066334)
 * Prototype: longlong sub_066334(void);
 * Address  : 0x66334 (Size: 69 bytes)
 * Module   : research.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x2796f, 0x66379, 0x66447, 0x6655e, 0xcb33c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00066334(void)

{
  int in_EAX;
  uint in_EDX;
  
  if ((((int)*(char *)(in_EAX + 6) != (uint)DAT_002eb543) &&
      ((&DAT_002e91a1)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6] != '\0')) &&
     (-1 < *(int *)(&DAT_002e1501 + *(char *)(in_EAX + 6) * 0x1508))) {
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_066379 (Ghidra: FUN_00066379)
 * Prototype: undefined8 sub_066379(void);
 * Address  : 0x66379 (Size: 206 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6655e
 * Callees  : 5 -> 0x63b6d, 0x66334, 0x666a8, 0x67018, 0x6709c
 ******************************************************************************/
undefined8 FUN_00066379(void)

{
  char cVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_EDX;
  int iVar5;
  
  cVar1 = *(char *)(in_EAX + 6);
  uVar2 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x7e);
  iVar3 = FUN_00066334();
  if (iVar3 != 0) {
    iVar3 = FUN_0006709c();
    if (iVar3 != 0) {
      iVar3 = FUN_00067018(100);
      iVar5 = (int)(iVar3 * (uint)*(ushort *)(&DAT_002ddd5a + (uint)uVar2 * 0x45)) >> 0x1f;
      iVar3 = (int)((iVar3 * (uint)*(ushort *)(&DAT_002ddd5a + (uint)uVar2 * 0x45) + iVar5 * -0x100)
                   - (uint)(iVar5 << 7 < 0)) >> 8;
      (&DAT_002e1706)[cVar1 * 0x542] = (&DAT_002e1706)[cVar1 * 0x542] + iVar3;
      *(int *)(&DAT_002e171c + cVar1 * 0x1508) = *(int *)(&DAT_002e171c + cVar1 * 0x1508) + iVar3;
      FUN_000666a8();
      uVar4 = 0;
      goto LAB_00066440;
    }
  }
  FUN_00063b6d();
  uVar4 = 1;
LAB_00066440:
  return CONCAT44(in_EDX,uVar4);
}

/******************************************************************************
 * Function : dk_move_research_room_066447 (Ghidra: FUN_00066447)
 * Prototype: longlong dk_move_research_room_066447(void);
 * Address  : 0x66447 (Size: 279 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp:82
 * Naming   : String 'CANNOT MOVE IN RESEARCH ROOM C%d, M%d'
 * Callers  : 0 -> 
 * Callees  : 9 -> 0x51374, 0x63b6d, 0x66334, 0x6666f, 0xcd85c, 0xcd9b0, 0xd0f50, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16693e: "research.cpp"
 *   - 0x166918: "CANNOT MOVE IN RESEARCH ROOM C%d, M%d"
 ******************************************************************************/
longlong FUN_00066447(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint in_EDX;
  
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  iVar2 = FUN_00066334();
  if (iVar2 == 0) {
    if ((((int)*(char *)(extraout_ECX + 6) != (uint)DAT_002eb543) &&
        (iVar2 = *(char *)(extraout_ECX + 6) * 0x1508, *(int *)(&DAT_002e1501 + iVar2) < 0)) &&
       ((int)(char)(&DAT_002e1428)[iVar2] == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]
       )) {
      FUN_00051374();
    }
  }
  else {
    iVar2 = FUN_000d0f50();
    if (((iVar2 != 0) && (*(short *)(iVar2 + 10) == 3)) &&
       (*(char *)(iVar2 + 3) == *(char *)(extraout_ECX_00 + 6))) {
      cVar1 = FUN_000cd85c();
      if (cVar1 != '\0') {
        iVar2 = FUN_0006666f();
        if (iVar2 != 0) {
          return CONCAT44(in_EDX,1);
        }
        FUN_000e7714(&DAT_0019cbac,s_CANNOT_MOVE_IN_RESEARCH_ROOM_C_d_00166918,
                     *(undefined1 *)(extraout_ECX_01 + 0x1f),*(undefined1 *)(extraout_ECX_01 + 0x1a)
                    );
        FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 82, g_log_buf) */
        FUN_000cd9b0();
      }
    }
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06655e (Ghidra: FUN_0006655e)
 * Prototype: longlong sub_06655e(void);
 * Address  : 0x6655e (Size: 273 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 7 -> 0x51374, 0x63b6d, 0x66334, 0x66379, 0x668b0, 0xcd9b0, 0xd0f50
 ******************************************************************************/
longlong FUN_0006655e(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  undefined8 uVar3;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar3 = FUN_00066334();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    if ((((int)*(char *)(extraout_ECX + 6) == (uint)DAT_002eb543) ||
        (-1 < *(int *)(&DAT_002e1501 + iVar2))) ||
       ((int)(char)(&DAT_002e1428)[iVar2] != (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]
       )) goto LAB_0006665b;
  }
  else {
    iVar2 = FUN_000d0f50();
    if (((iVar2 == 0) || (*(short *)(iVar2 + 10) != 3)) ||
       ((*(short *)(iVar2 + 1) != *(short *)(iVar1 + 0x7e) ||
        (*(char *)(iVar2 + 3) != *(char *)(extraout_ECX_00 + 6))))) goto LAB_0006665b;
    if (*(ushort *)(iVar2 + 0x10) <= *(ushort *)(iVar2 + 0xe)) {
      FUN_00066379();
      FUN_000668b0();
      return CONCAT44(in_EDX,1);
    }
    if ((int)*(char *)(iVar2 + 3) != (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef])
    goto LAB_0006665b;
  }
  FUN_00051374();
LAB_0006665b:
  FUN_000cd9b0();
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06666f (Ghidra: FUN_0006666f)
 * Prototype: bool sub_06666f(void);
 * Address  : 0x6666f (Size: 57 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x66447, 0x668b0
 * Callees  : 1 -> 0xcc4a0
 ******************************************************************************/
bool FUN_0006666f(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  iVar2 = FUN_000cc4a0();
  if (iVar2 != 0) {
    *(undefined1 *)(extraout_ECX + 8) = 0x1f;
    *(undefined4 *)(iVar1 + 0x82) = 0;
    *(undefined1 *)(iVar1 + 0x9a) = 3;
  }
  return iVar2 != 0;
}

/******************************************************************************
 * Function : sub_0666a8 (Ghidra: FUN_000666a8)
 * Prototype: uint sub_0666a8(void);
 * Address  : 0x666a8 (Size: 520 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x66379
 * Callees  : 8 -> 0x10434, 0x1614f, 0x18736, 0x189d4, 0x27944, 0x49bfc, 0x64a5f, 0xb3b58
 ******************************************************************************/
uint FUN_000666a8(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  int in_EDX;
  uint uVar9;
  int iVar10;
  int local_30;
  uint local_28;
  int local_18;
  
  iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  uVar8 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_30 = 0x7fffffff;
  uVar4 = (int)*(short *)(&DAT_002e91d7 + iVar2);
  if ((((0 < *(short *)(&DAT_002e91d7 + iVar2)) &&
       (uVar4 = (uint)*(byte *)(uVar8 + 0xd2), *(byte *)(uVar8 + 0xd2) == 0)) &&
      (uVar3 = (uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee,
      uVar4 = uVar3 / (uint)(int)*(short *)(&DAT_002e91d7 + iVar2),
      uVar3 % (uint)(int)*(short *)(&DAT_002e91d7 + iVar2) == 0)) &&
     ((uVar4 = (uint)*(ushort *)(&DAT_002e910d + iVar2), *(ushort *)(&DAT_002e910d + iVar2) == 4 &&
      (uVar4 = FUN_00018736(), 0 < (int)uVar4)))) {
    uVar1 = *(ushort *)(in_EDX + 0x37);
    uVar3 = extraout_ECX;
    local_28 = extraout_ECX;
    while( true ) {
      uVar5 = (uint)uVar1;
      if ((int)(uint)*(ushort *)(in_EDX + 0x3b) <= (int)local_28) break;
      iVar2 = (uVar5 % 0x55) * 3;
      iVar10 = (uVar5 / 0x55) * 3;
      for (local_18 = 0; local_18 < 9; local_18 = local_18 + 1) {
        for (uVar9 = (*(uint *)((int)&DAT_00279203 +
                               ((local_18 / 3 + iVar10) * 0x100 + iVar2 + local_18 % 3) * 5 + 1) &
                     0x3fffff) >> 0xb; uVar9 = (&DAT_001ae9fc)[uVar9], DAT_001ae9fc < uVar9;
            uVar9 = (uint)*(ushort *)(uVar9 + 2)) {
          if ((*(char *)(uVar9 + 0x1f) == '\x05') &&
             (iVar6 = FUN_00027944(iVar2,iVar10,uVar4), uVar3 = extraout_ECX_00, iVar6 == 0)) {
            iVar6 = FUN_000189d4();
            iVar7 = FUN_0001614f();
            if (0 < iVar7) {
              FUN_00049bfc(0);
              FUN_00064a5f();
              *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(uVar9 + 100)] + 0x9a) =
                   *(undefined2 *)(in_EDX + 1);
              uVar8 = FUN_00010434();
              return uVar8;
            }
            uVar3 = extraout_ECX_01;
            if (iVar6 < local_30) {
              uVar3 = uVar9;
              local_30 = iVar6;
            }
          }
        }
      }
      uVar1 = *(ushort *)(&DAT_002d33c6 + uVar5 * 6);
      local_28 = local_28 + 1;
    }
    uVar4 = (uint)*(ushort *)(in_EDX + 0x3b);
    if ((uVar3 != 0) && (uVar4 = FUN_000b3b58(), (short)uVar4 != 0)) {
      *(undefined1 *)(in_EAX + 8) = 0x1f;
      *(undefined4 *)(uVar8 + 0x82) = 0;
      *(undefined1 *)(uVar8 + 0x9a) = 3;
      uVar4 = uVar8;
    }
  }
  return uVar4;
}

/******************************************************************************
 * Function : dk_move_research_room_0668b0 (Ghidra: FUN_000668b0)
 * Prototype: uint dk_move_research_room_0668b0(void);
 * Address  : 0x668b0 (Size: 362 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp:289
 * Naming   : String 'I CANNOT MOVE IN RESEARCH ROOM C%d, M%d'
 * Callers  : 1 -> 0x6655e
 * Callees  : 7 -> 0x10132, 0x63b6d, 0x64a5f, 0x6666f, 0x66eff, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x166973: "research.cpp"
 *   - 0x16694b: "I CANNOT MOVE IN RESEARCH ROOM C%d, M%d"
 ******************************************************************************/
uint FUN_000668b0(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  
  iVar5 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (((uint)(DAT_002e8bee - *(int *)(&DAT_002e106e + *(char *)(in_EAX + 6) * 0x1508)) < 0x32) &&
     (((uint)*(ushort *)(in_EAX + 0x1b) + DAT_002e8bee & 3) == 0)) {
    uVar4 = FUN_00064a5f();
    *(undefined2 *)(iVar5 + 0x282) = 0x32;
    *(undefined4 *)(iVar5 + 0x9a) = 0;
    return uVar4;
  }
  uVar4 = (uint)*(byte *)(iVar5 + 0xd2);
  if (uVar4 == 0) {
    iVar3 = *(int *)(iVar5 + 0x82);
    iVar1 = iVar3 + 1;
    *(int *)(iVar5 + 0x82) = iVar1;
    if (iVar3 < 0x80) {
      if (*(char *)(iVar5 + 0x9a) == '\x03') {
        uVar4 = iVar1 / 0x10;
        if (iVar1 % 0x10 == 0) {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          uVar4 = DAT_002e8bf6 >> 0xd;
          DAT_002e8bf6 = uVar4 | DAT_002e8bf6 * 0x80000;
          uVar2 = *(ushort *)(in_EAX + 0x52);
          *(undefined1 *)(iVar5 + 0x9a) = 4;
          uVar4 = ((uint)uVar2 + (uVar4 & 0x3ff)) - 0x200 & 0x7ff;
          *(uint *)(iVar5 + 0x9b) = uVar4;
          return uVar4;
        }
      }
      else {
        uVar4 = FUN_00010132();
        if ((int)uVar4 < 0x38) {
          *(undefined1 *)(iVar5 + 0x9a) = 3;
          return uVar4;
        }
      }
    }
    else {
      iVar5 = FUN_0006666f();
      if (iVar5 != 0) {
        uVar4 = FUN_00066eff();
        return uVar4;
      }
      FUN_000e7714(&DAT_0019cbac,s_I_CANNOT_MOVE_IN_RESEARCH_ROOM_C_0016694b,
                   *(undefined1 *)(extraout_ECX + 0x1f),*(undefined1 *)(extraout_ECX + 0x1a));
      FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 289, g_log_buf) */
      uVar4 = FUN_00063b6d();
    }
  }
  return uVar4;
}

/******************************************************************************
 * Function : dk_illegal_research_type_getting_066a1a (Ghidra: FUN_00066a1a)
 * Prototype: undefined8 dk_illegal_research_type_getting_066a1a(void);
 * Address  : 0x66a1a (Size: 133 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp:335 ("Illegal research type in getting next research item")
 * Naming   : String 'Illegal research type in getting next research item'
 * Callers  : 3 -> 0x40832, 0x66b28, 0x66d65
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1669b4: "research.cpp"
 *   - 0x166980: "Illegal research type in getting next research item"
 ******************************************************************************/
undefined8 FUN_00066a1a(void)

{
  char cVar1;
  byte bVar2;
  int in_EAX;
  byte *extraout_ECX;
  byte *pbVar3;
  undefined4 in_EDX;
  int iVar4;
  
  pbVar3 = (byte *)(in_EAX + 0xeac);
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(in_EAX + 0xf7c); iVar4 = iVar4 + 1) {
    bVar2 = *pbVar3;
    if (bVar2 == 0) {
LAB_00066a64:
      FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 335, "Illegal research type in getting next research item") */
      pbVar3 = extraout_ECX;
    }
    else if (bVar2 < 2) {
      if (*(char *)((uint)pbVar3[1] + in_EAX + 0xff4) != '\0') {
        cVar1 = *(char *)((uint)pbVar3[1] + in_EAX + 0xfe0);
LAB_00066a41:
        if (cVar1 == '\0') goto LAB_00066441;
      }
    }
    else {
      if (bVar2 != 2) goto LAB_00066a64;
      if (*(char *)((uint)pbVar3[1] + in_EAX + 0xf8f) != '\0') {
        cVar1 = *(char *)((uint)pbVar3[1] + in_EAX + 0xf7e);
        goto LAB_00066a41;
      }
    }
    pbVar3 = pbVar3 + 6;
  }
  iVar4 = -1;
LAB_00066441:
  return CONCAT44(in_EDX,iVar4);
}

/******************************************************************************
 * Function : dk_illegal_research_type_process_066a9f (Ghidra: FUN_00066a9f)
 * Prototype: undefined4 dk_illegal_research_type_process_066a9f(void);
 * Address  : 0x66a9f (Size: 137 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp:376 ("Illegal research type in process player research")
 * Naming   : String 'Illegal research type in process player research'
 * Callers  : 2 -> 0x66b28, 0x66d65
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1669f2: "research.cpp"
 *   - 0x1669c1: "Illegal research type in process player research"
 ******************************************************************************/
undefined4 FUN_00066a9f(void)

{
  byte bVar1;
  char cVar2;
  byte *in_EAX;
  int in_EDX;
  
  bVar1 = *in_EAX;
  if (bVar1 < 2) {
    if (bVar1 != 1) {
LAB_00066b09:
      FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 376, "Illegal research type in process player research") */
      return 0;
    }
    if (*(char *)((uint)in_EAX[1] + in_EDX + 0xff4) == '\0') {
      return 0;
    }
    cVar2 = *(char *)((uint)in_EAX[1] + in_EDX + 0xfe0);
  }
  else if (bVar1 < 3) {
    if (*(char *)((uint)in_EAX[1] + in_EDX + 0xf8f) == '\0') {
      return 0;
    }
    cVar2 = *(char *)((uint)in_EAX[1] + in_EDX + 0xf7e);
  }
  else {
    if (bVar1 != 3) goto LAB_00066b09;
    if (*(char *)((uint)in_EAX[1] + in_EDX + 0xfc0) == '\0') {
      return 0;
    }
    cVar2 = *(char *)((uint)in_EAX[1] + in_EDX + 4000);
  }
  if (cVar2 != '\0') {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : dk_illegal_research_type_process_066b28 (Ghidra: FUN_00066b28)
 * Prototype: void dk_illegal_research_type_process_066b28(void);
 * Address  : 0x66b28 (Size: 573 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp:471 ("Illegal research type in process player research")
 * Naming   : String 'Illegal research type in process player research'
 * Callers  : 1 -> 0xde6a8
 * Callees  : 10 -> 0x24998, 0x27390, 0x51374, 0x66a1a, 0x66a9f, 0x66dc2, 0xb3788, 0xca65c, 0xd129c, 0xddaf0
 * Strings  :
 *   - 0x166a30: "research.cpp"
 *   - 0x1669ff: "Illegal research type in process player research"
 ******************************************************************************/
void FUN_00066b28(void)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uStack_28;
  uint local_24;
  short local_20;
  short local_1e;
  undefined2 local_1c;
  
  iVar6 = in_EAX * 0x1508;
  uStack_28 = 0x66b42;
  local_24 = in_EAX;
  iVar2 = FUN_000d129c();
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(&DAT_002e1501 + iVar6) < 0) {
    uStack_28 = 0x66d5a;
    uVar4 = FUN_00066a1a();
    *(undefined4 *)(&DAT_002e1501 + iVar6) = uVar4;
    return;
  }
  iVar2 = *(int *)(&DAT_002e1501 + iVar6);
  uStack_28 = 0x66b75;
  iVar3 = FUN_00066a9f();
  if (iVar3 == 0) {
    uStack_28 = 0x66b80;
    iVar2 = FUN_00066a1a();
    *(int *)(&DAT_002e1501 + iVar6) = iVar2;
    if (iVar2 < 0) {
      return;
    }
  }
  pbVar7 = (byte *)(iVar2 * 6 + iVar6 + 0x2e1435);
  if (*(int *)(&DAT_002e171c + iVar6) < *(int *)(pbVar7 + 2) * 0x100) {
    return;
  }
  bVar1 = *pbVar7;
  if (bVar1 < 2) {
    if (bVar1 == 1) {
      puVar5 = &local_24;
      if (*(char *)((int)&DAT_002e0589 + pbVar7[1] + 0xff4 + iVar6) != '\0') {
        uStack_28 = 0x66ca7;
        iVar2 = FUN_000ca65c();
        if (iVar2 == 0) {
          return;
        }
        uStack_28 = 0x66cbb;
        iVar2 = FUN_00066dc2();
        if (iVar2 == 0) {
          return;
        }
        if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_24) {
          uStack_28 = 0x66ced;
          FUN_00051374();
        }
        *(undefined1 *)((int)&DAT_002e0589 + pbVar7[1] + 0xfe0 + iVar6) = 1;
        puVar5 = &local_24;
      }
      goto LAB_00066c5c;
    }
  }
  else {
    if (bVar1 < 3) {
      puVar5 = &local_24;
      if ((&DAT_002e1518)[(uint)pbVar7[1] + iVar6] != '\0') {
        uStack_28 = (uint)pbVar7[1];
        FUN_00027390();
        *(undefined1 *)((int)&DAT_002e0589 + pbVar7[1] + 0xf7e + iVar6) = 1;
        if ((byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] == local_24) {
          FUN_00051374();
        }
        iVar2 = FUN_000ca65c();
        puVar5 = &uStack_28;
        if (iVar2 != 0) {
          local_20 = (ushort)*(byte *)(iVar2 + 8) * 0x100 + 0x80;
          local_1e = (ushort)*(byte *)(iVar2 + 9) * 0x100 + 0x80;
          local_1c = FUN_000b3788();
          FUN_00024998();
          puVar5 = &uStack_28;
        }
      }
      goto LAB_00066c5c;
    }
    if (bVar1 == 3) {
      puVar5 = &local_24;
      if (*(char *)((int)&DAT_002e0589 + (uint)pbVar7[1] + iVar6 + 0xfc0) != '\0') {
        *(undefined1 *)((int)&DAT_002e0589 + (uint)pbVar7[1] + iVar6 + 4000) = 1;
        puVar5 = &local_24;
      }
      goto LAB_00066c5c;
    }
  }
  uStack_28 = 0x66d4e;
  FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 471, "Illegal research type in process player research") */
  puVar5 = &local_24;
LAB_00066c5c:
  *(int *)(&DAT_002e171c + iVar6) = *(int *)(&DAT_002e171c + iVar6) + *(int *)(pbVar7 + 2) * -0x100;
  *(undefined4 *)(&DAT_002e106e + iVar6) = DAT_002e8bee;
  *(undefined4 *)((int)puVar5 + -4) = 0x66c7a;
  uVar4 = FUN_00066a1a();
  *(undefined4 *)(&DAT_002e1501 + iVar6) = uVar4;
  *(int *)(&DAT_002e1720 + iVar6) = *(int *)(&DAT_002e1720 + iVar6) + 1;
  return;
}

/******************************************************************************
 * Function : sub_066d65 (Ghidra: FUN_00066d65)
 * Prototype: void sub_066d65(void);
 * Address  : 0x66d65 (Size: 93 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x731f3
 * Callees  : 2 -> 0x66a1a, 0x66a9f
 ******************************************************************************/
void FUN_00066d65(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  
  iVar1 = in_EAX * 0x1508;
  if (-1 < *(int *)(&DAT_002e1501 + iVar1)) {
    iVar2 = FUN_00066a9f();
    iVar3 = extraout_ECX;
    if (iVar2 == 0) {
      iVar3 = FUN_00066a1a();
      *(int *)(&DAT_002e1501 + iVar1) = iVar3;
      if (iVar3 < 0) {
        return;
      }
      iVar3 = iVar3 * 6 + iVar1 + 0x2e1435;
    }
    *(int *)(&DAT_002e171c + iVar1) = *(int *)(iVar3 + 2) << 8;
  }
  return;
}

/******************************************************************************
 * Function : dk_could_find_room_thing_066dc2 (Ghidra: FUN_00066dc2)
 * Prototype: undefined4 dk_could_find_room_thing_066dc2(void);
 * Address  : 0x66dc2 (Size: 266 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp:551 ("Could not find room for thing"); research.cpp:564 ("COULD NOT CREATE SPELL")
 * Naming   : String 'Could not find room for thing'
 * Callers  : 1 -> 0x66b28
 * Callees  : 10 -> 0x24998, 0x27390, 0x43f07, 0x4fd81, 0x72af4, 0xb28e8, 0xb3b10, 0xc9e8c, 0xccf10, 0xddaf0
 * Strings  :
 *   - 0x166a5b: "research.cpp"
 *   - 0x166a7b: "research.cpp"
 *   - 0x166a9f: "research.cpp"
 *   - 0x166a3d: "Could not find room for thing"
 *   - 0x166a68: " NO ROOM FOR THING"
 *   - 0x166a88: "COULD NOT CREATE SPELL"
 ******************************************************************************/
undefined4 FUN_00066dc2(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 in_EDX;
  
  iVar2 = FUN_00043f07();
  if (iVar2 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 551, "Could not find room for thing") */
  }
  else {
    iVar2 = FUN_000c9e8c();
    if ((iVar2 != 0) && (cVar1 = FUN_000ccf10(), cVar1 != '\0')) {
      FUN_000b28e8();
      FUN_0004fd81();
      FUN_000b3b10();
      *(short *)(extraout_ECX + 0x10) = *(short *)(extraout_ECX + 0x10) + 1;
      *(int *)(extraout_ECX + 0x17) = *(int *)(extraout_ECX + 0x17) + 1;
      FUN_00027390(in_EDX);
      FUN_00024998();
      return 1;
    }
    FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 564, "COULD NOT CREATE SPELL") */
    FUN_00072af4();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_066ecc (Ghidra: FUN_00066ecc)
 * Prototype: longlong sub_066ecc(void);
 * Address  : 0x66ecc (Size: 51 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5674c
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_00066ecc(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  
  iVar1 = in_EAX * 0x1508;
  if (-1 < *(int *)(&DAT_002e1501 + iVar1)) {
    return CONCAT44(in_EDX,*(int *)(*(int *)(&DAT_002e1501 + iVar1) * 6 + iVar1 + 0x2e1437) << 8);
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_066eff (Ghidra: FUN_00066eff)
 * Prototype: longlong sub_066eff(void);
 * Address  : 0x66eff (Size: 80 bytes)
 * Module   : research.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x668b0
 * Callees  : 1 -> 0x24998
 ******************************************************************************/
longlong FUN_00066eff(void)

{
  int iVar1;
  uint in_EDX;
  
  iVar1 = FUN_00024998();
  if (iVar1 == 0) {
    return (ulonglong)in_EDX << 0x20;
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_much_research_player_066f4f (Ghidra: FUN_00066f4f)
 * Prototype: undefined4 dk_much_research_player_066f4f(void);
 * Address  : 0x66f4f (Size: 124 bytes)
 * Module   : research.cpp [direct_file_string_xref]
 * OrigLine : research.cpp:635
 * Naming   : String 'TOO MUCH RESEARCH FOR PLAYER %d'
 * Callers  : 1 -> 0x66fcb
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x166acc: "research.cpp"
 *   - 0x166aac: "TOO MUCH RESEARCH FOR PLAYER %d"
 ******************************************************************************/
undefined4 FUN_00066f4f(void)

{
  int in_EAX;
  int iVar1;
  undefined4 in_ECX;
  undefined1 in_DL;
  undefined1 unaff_BL;
  int iVar2;
  
  iVar1 = in_EAX * 0x1508;
  if ((byte)(&DAT_002e1505)[iVar1] < 0x22) {
    iVar2 = (uint)(byte)(&DAT_002e1505)[iVar1] * 6;
    *(undefined1 *)(iVar1 + 0x2e1435 + iVar2) = in_DL;
    *(undefined4 *)(iVar1 + 0x2e1437 + iVar2) = in_ECX;
    *(undefined1 *)(iVar1 + 0x2e1436 + iVar2) = unaff_BL;
    (&DAT_002e1505)[iVar1] = (&DAT_002e1505)[iVar1] + '\x01';
    return 1;
  }
  FUN_000e7714(&DAT_0019cbac,s_TOO_MUCH_RESEARCH_FOR_PLAYER__d_00166aac);
  FUN_000ddaf0(); /* LbErrorLog("research.cpp", line 635, g_log_buf) */
  return 0;
}

/******************************************************************************
 * Function : sub_066fcb (Ghidra: FUN_00066fcb)
 * Prototype: undefined4 sub_066fcb(void);
 * Address  : 0x66fcb (Size: 46 bytes)
 * Module   : research.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2b36c
 * Callees  : 1 -> 0x66f4f
 ******************************************************************************/
undefined4 FUN_00066fcb(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_00066f4f();
  } while (iVar1 < 5);
  return 1;
}

/******************************************************************************
 * Function : sub_066ff9 (Ghidra: FUN_00066ff9)
 * Prototype: undefined4 sub_066ff9(void);
 * Address  : 0x66ff9 (Size: 31 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00066ff9(void)

{
  int in_EAX;
  
  (&DAT_002e1505)[in_EAX * 0x1508] = 0;
  (&DAT_002e1a36)[in_EAX * 0x1508] = 1;
  return 1;
}

/******************************************************************************
 * Function : sub_0670b2 (Ghidra: FUN_000670b2)
 * Prototype: void sub_0670b2(void);
 * Address  : 0x670b2 (Size: 311 bytes)
 * Module   : research.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 2 -> 0x6e8fc, 0xf27d0
 ******************************************************************************/
void FUN_000670b2(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int local_20;
  
  bVar1 = *(byte *)(*(int *)((int)&DAT_0019d100 + DAT_002f10ce._3_1_ * 0x4ef) + 1);
  bVar2 = *(byte *)(*(int *)((int)&DAT_0019d100 + DAT_002f10ce._3_1_ * 0x4ef) + 3);
  pcVar5 = (char *)&DAT_002ee9c1;
  if ((DAT_00334019 == 0) && (iVar3 = FUN_000f27d0(), 0 < iVar3)) {
    for (local_20 = 0; local_20 < 0x78; local_20 = local_20 + 1) {
      iVar6 = (int)pcVar5[1] + bVar1 / 3;
      iVar4 = (int)*pcVar5 + bVar2 / 3;
      iVar3 = iVar6 * 3;
      if ((((iVar3 < 0xfe) && (-1 < iVar3)) && (iVar4 * 3 < 0xfe)) &&
         (((-1 < iVar4 * 3 &&
           ((*(byte *)((int)&DAT_00279203 + (iVar4 * 0x300 + iVar3) * 5) & 2) != 0)) &&
          ((iVar3 = ((&DAT_0019033b)[iVar6 * 3] + (&DAT_0019033b)[iVar4 * 3] * 0x55) * 6,
           ((&DAT_002d33ca)[iVar3] & 7) == (&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] &&
           (*(short *)(&DAT_0018f7cd +
                      (uint)*(ushort *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar3] * 0x45) *
                      6) != 0)))))) break;
      pcVar5 = pcVar5 + 4;
    }
    FUN_0006e8fc();
  }
  return;
}

