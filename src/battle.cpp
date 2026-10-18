/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: battle.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 17
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : dk_attempt_create_battle_null_013bae (Ghidra: FUN_00013bae)
 * Prototype: void dk_attempt_create_battle_null_013bae(void);
 * Address  : 0x13bae (Size: 239 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp:28 ("Attempt to create battle with null target!")
 * Naming   : String 'Attempt to create battle with null target!'
 * Callers  : 3 -> 0x178ed, 0x1798e, 0x17a2f
 * Callees  : 6 -> 0x13c9d, 0x13d3b, 0x1433e, 0x1443f, 0x144d2, 0xddaf0
 * Strings  :
 *   - 0x1601b3: "battle.cpp"
 *   - 0x1601d8: "battle.cpp"
 *   - 0x160188: "Attempt to create battle with null target!"
 *   - 0x1601be: "No free battle structures"
 ******************************************************************************/
void FUN_00013bae(void)

{
  char cVar1;
  int in_EAX;
  int extraout_ECX;
  int extraout_ECX_00;
  int in_EDX;
  
  if ((in_EDX != DAT_001ae9fc) && (in_EDX != 0)) {
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2f7) != '\0') {
      FUN_00013d3b();
      in_EDX = extraout_ECX;
    }
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2f7) == '\0') {
      if ((*(char *)((&DAT_001b0a00)[*(ushort *)(in_EDX + 100)] + 0x2f7) == '\0') &&
         (cVar1 = FUN_0001433e(), cVar1 == '\0')) goto LAB_00013bd3;
      FUN_00013c9d();
      if (*(char *)((&DAT_001b0a00)[*(ushort *)(extraout_ECX_00 + 100)] + 0x2f7) == '\0') {
        FUN_00013c9d();
      }
      FUN_0001443f();
    }
    FUN_000144d2();
    return;
  }
LAB_00013bd3:
  FUN_000ddaf0(); /* LbErrorLog("battle.cpp", line 28, "Attempt to create battle with null target!") */
  return;
}

/******************************************************************************
 * Function : sub_013c9d (Ghidra: FUN_00013c9d)
 * Prototype: void sub_013c9d(void);
 * Address  : 0x13c9d (Size: 158 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x13bae
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_00013c9d(void)

{
  undefined2 uVar1;
  int iVar2;
  int in_EAX;
  ushort in_DX;
  int iVar3;
  undefined1 local_10;
  
  iVar3 = (uint)in_DX * 0x11;
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar1 = *(undefined2 *)(&DAT_002ed45f + iVar3);
  *(undefined2 *)(iVar2 + 0x2f3) = 0;
  *(undefined2 *)(iVar2 + 0x2f5) = uVar1;
  local_10 = (undefined1)in_DX;
  *(undefined1 *)(iVar2 + 0x2f7) = local_10;
  if (*(short *)(&DAT_002ed45d + iVar3) == 0) {
    *(undefined2 *)(&DAT_002ed45d + iVar3) = *(undefined2 *)(in_EAX + 0x1b);
  }
  if (*(short *)(&DAT_002ed45f + (uint)in_DX * 0x11) != 0) {
    *(undefined2 *)
     ((&DAT_001b0a00)
      [*(ushort *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002ed45f + (uint)in_DX * 0x11)] + 100)] + 0x2f3)
         = *(undefined2 *)(in_EAX + 0x1b);
  }
  *(undefined2 *)(&DAT_002ed45f + (uint)in_DX * 0x11) = *(undefined2 *)(in_EAX + 0x1b);
  *(int *)(&DAT_002ed450 + (uint)in_DX * 0x11) = *(int *)(&DAT_002ed450 + (uint)in_DX * 0x11) + 1;
  return;
}

/******************************************************************************
 * Function : dk_creature_has_been_removed_013d3b (Ghidra: FUN_00013d3b)
 * Prototype: void dk_creature_has_been_removed_013d3b(void);
 * Address  : 0x13d3b (Size: 224 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp:116 ("Creature has been removed due to death")
 * Naming   : String 'Creature has been removed due to death'
 * Callers  : 3 -> 0x13bae, 0x13e1b, 0x144d2
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x16020a: "battle.cpp"
 *   - 0x1601e3: "Creature has been removed due to death"
 ******************************************************************************/
void FUN_00013d3b(void)

{
  int in_EAX;
  int extraout_ECX;
  int iVar1;
  uint uVar2;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  uVar2 = (uint)*(byte *)(iVar1 + 0x2f7);
  if (*(char *)(in_EAX + 0x1f) != '\x05') {
    FUN_000ddaf0(); /* LbErrorLog("battle.cpp", line 116, "Creature has been removed due to death") */
    iVar1 = extraout_ECX;
  }
  if (*(ushort *)(iVar1 + 0x2f5) == 0) {
    *(undefined2 *)(&DAT_002ed45d + uVar2 * 0x11) = *(undefined2 *)(iVar1 + 0x2f3);
  }
  else {
    *(undefined2 *)
     ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x2f5)] + 100)] + 0x2f3) =
         *(undefined2 *)(iVar1 + 0x2f3);
  }
  if (*(ushort *)(iVar1 + 0x2f3) == 0) {
    *(undefined2 *)(&DAT_002ed45f + uVar2 * 0x11) = *(undefined2 *)(iVar1 + 0x2f5);
  }
  else {
    *(undefined2 *)
     ((&DAT_001b0a00)[*(ushort *)((&DAT_001ae9fc)[*(ushort *)(iVar1 + 0x2f3)] + 100)] + 0x2f5) =
         *(undefined2 *)(iVar1 + 0x2f5);
  }
  *(undefined1 *)(iVar1 + 0x2f7) = 0;
  *(undefined2 *)(iVar1 + 0x2f3) = 0;
  *(undefined2 *)(iVar1 + 0x2f5) = 0;
  *(int *)(&DAT_002ed450 + uVar2 * 0x11) = *(int *)(&DAT_002ed450 + uVar2 * 0x11) + -1;
  return;
}

/******************************************************************************
 * Function : dk_hmmm_attempt_remove_creature_013e1b (Ghidra: FUN_00013e1b)
 * Prototype: void dk_hmmm_attempt_remove_creature_013e1b(void);
 * Address  : 0x13e1b (Size: 132 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp:161 ("Hmmm... Attempt to remove creature from battle when he isn't in one"); battle.cpp:200 ("Empty Battle")
 * Naming   : String 'Hmmm... Attempt to remove creature from battle when he isn't'
 * Callers  : 3 -> 0x14322, 0x17a7f, 0x17c2f
 * Callees  : 4 -> 0x13d3b, 0x14083, 0x144d2, 0xddaf0
 * Strings  :
 *   - 0x160259: "battle.cpp"
 *   - 0x160271: "battle.cpp"
 *   - 0x160215: "Hmmm... Attempt to remove creature from battle when he isn't in one"
 ******************************************************************************/
void FUN_00013e1b(void)

{
  char cVar1;
  int in_EAX;
  int extraout_EDX;
  byte bVar2;
  
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2f7) == '\0') {
    FUN_000ddaf0(); /* LbErrorLog("battle.cpp", line 161, "Hmmm... Attempt to remove creature from battle when he isn't in one") */
  }
  else {
    FUN_00013d3b();
    FUN_000144d2();
  }
  for (bVar2 = 0; bVar2 < 100; bVar2 = bVar2 + 1) {
    if ((&DAT_002e7087)[(uint)bVar2 * 0x15] == '\x02') {
      cVar1 = FUN_00014083();
      if (cVar1 == '\0') {
        *(undefined4 *)(&DAT_002e707e + extraout_EDX) = 0;
        *(undefined4 *)(&DAT_002e7082 + extraout_EDX) = 0;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_014083 (Ghidra: FUN_00014083)
 * Prototype: ulonglong sub_014083(void);
 * Address  : 0x14083 (Size: 52 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x13e1b, 0x14127, 0x5c408
 * Callees  : 1 -> 0x142cc
 ******************************************************************************/
ulonglong FUN_00014083(void)

{
  int in_EAX;
  undefined4 in_EDX;
  byte bVar1;
  
  bVar1 = 1;
  do {
    if (0x20 < bVar1) {
      return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
    }
    in_EAX = (uint)bVar1 * 0x11;
    if (*(int *)(&DAT_002ed450 + in_EAX) != 0) {
      in_EAX = FUN_000142cc();
      if ((char)in_EAX != '\0') {
        return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),bVar1));
      }
    }
    bVar1 = bVar1 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0140b7 (Ghidra: FUN_000140b7)
 * Prototype: ulonglong sub_0140b7(void);
 * Address  : 0x140b7 (Size: 53 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x141d5
 * Callees  : 1 -> 0x142cc
 ******************************************************************************/
ulonglong FUN_000140b7(void)

{
  int in_EAX;
  undefined4 in_EDX;
  byte bVar1;
  
  bVar1 = 0x20;
  do {
    if (bVar1 == 0) {
      return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
    }
    in_EAX = (uint)bVar1 * 0x11;
    if (*(int *)(&DAT_002ed450 + in_EAX) != 0) {
      in_EAX = FUN_000142cc();
      if ((char)in_EAX != '\0') {
        return CONCAT44(in_EDX,CONCAT31((int3)((uint)in_EAX >> 8),bVar1));
      }
    }
    bVar1 = bVar1 - 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_0140ec (Ghidra: FUN_000140ec)
 * Prototype: undefined1 sub_0140ec(void);
 * Address  : 0x140ec (Size: 59 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x14188, 0x14235
 * Callees  : 0 -> 
 ******************************************************************************/
undefined1 FUN_000140ec(void)

{
  byte in_AL;
  byte bVar1;
  ushort in_DX;
  
  bVar1 = 0;
  while( true ) {
    if (2 < bVar1) {
      return 0;
    }
    if ((in_DX != 0) && (in_DX == (byte)(&DAT_002e16fd)[(uint)bVar1 + (uint)in_AL * 0x1508])) break;
    bVar1 = bVar1 + 1;
  }
  return 1;
}

/******************************************************************************
 * Function : dk_empty_battle_014127 (Ghidra: FUN_00014127)
 * Prototype: uint dk_empty_battle_014127(void);
 * Address  : 0x14127 (Size: 97 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp:336 ("Empty Battle")
 * Naming   : String 'Empty Battle'
 * Callers  : 1 -> 0x14188
 * Callees  : 3 -> 0x14083, 0x142cc, 0xddaf0
 * Strings  :
 *   - 0x1602a3: "battle.cpp"
 *   - 0x160296: "Empty Battle"
 ******************************************************************************/
uint FUN_00014127(void)

{
  char cVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint in_EDX;
  
  if ((in_EDX & 0xffff) < 0x1f) {
    uVar2 = in_EDX & 0xff;
    while (uVar2 = (uint)(byte)((char)uVar2 + 1), uVar2 < 0x21) {
      if (*(int *)(&DAT_002ed450 + uVar2 * 0x11) != 0) {
        if (*(short *)(&DAT_002ed45d + uVar2 * 0x11) == 0) {
          FUN_000ddaf0(); /* LbErrorLog("battle.cpp", line 336, "Empty Battle") */
          uVar2 = extraout_ECX;
        }
        else {
          cVar1 = FUN_000142cc();
          uVar2 = extraout_ECX_00;
          if (cVar1 != '\0') {
            return extraout_ECX_00 & 0xff;
          }
        }
      }
    }
  }
  uVar2 = FUN_00014083();
  return uVar2;
}

/******************************************************************************
 * Function : sub_014188 (Ghidra: FUN_00014188)
 * Prototype: char sub_014188(void);
 * Address  : 0x14188 (Size: 77 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x5a6a6, 0x5a705, 0x5d032
 * Callees  : 2 -> 0x140ec, 0x14127
 ******************************************************************************/
char FUN_00014188(void)

{
  char cVar1;
  char cVar2;
  char local_10;
  
  cVar1 = FUN_00014127();
  local_10 = cVar1;
  do {
    cVar2 = FUN_000140ec();
    if (cVar2 == '\0') {
      return local_10;
    }
    local_10 = FUN_00014127();
  } while (local_10 != cVar1);
  return '\0';
}

/******************************************************************************
 * Function : dk_empty_battle_0141d5 (Ghidra: FUN_000141d5)
 * Prototype: uint dk_empty_battle_0141d5(void);
 * Address  : 0x141d5 (Size: 96 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp:388 ("Empty Battle")
 * Naming   : String 'Empty Battle'
 * Callers  : 1 -> 0x14235
 * Callees  : 3 -> 0x140b7, 0x142cc, 0xddaf0
 * Strings  :
 *   - 0x1602bb: "battle.cpp"
 *   - 0x1602ae: "Empty Battle"
 ******************************************************************************/
uint FUN_000141d5(void)

{
  char cVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint in_EDX;
  
  if (1 < (in_EDX & 0xffff)) {
    uVar2 = in_EDX & 0xff;
    while (uVar2 = (uint)(byte)((char)uVar2 - 1), uVar2 != 0) {
      if (*(int *)(&DAT_002ed450 + uVar2 * 0x11) != 0) {
        if (*(short *)(&DAT_002ed45d + uVar2 * 0x11) == 0) {
          FUN_000ddaf0(); /* LbErrorLog("battle.cpp", line 388, "Empty Battle") */
          uVar2 = extraout_ECX;
        }
        else {
          cVar1 = FUN_000142cc();
          uVar2 = extraout_ECX_00;
          if (cVar1 != '\0') {
            return extraout_ECX_00 & 0xff;
          }
        }
      }
    }
  }
  uVar2 = FUN_000140b7();
  return uVar2;
}

/******************************************************************************
 * Function : sub_014235 (Ghidra: FUN_00014235)
 * Prototype: undefined1 sub_014235(void);
 * Address  : 0x14235 (Size: 75 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x5a6a6, 0x5a705
 * Callees  : 2 -> 0x140ec, 0x141d5
 ******************************************************************************/
undefined1 FUN_00014235(void)

{
  char cVar1;
  char cVar2;
  undefined1 extraout_CH;
  
  cVar1 = FUN_000141d5();
  do {
    cVar2 = FUN_000140ec();
    if (cVar2 == '\0') {
      return extraout_CH;
    }
    cVar2 = FUN_000141d5();
  } while (cVar2 != cVar1);
  return 0;
}

/******************************************************************************
 * Function : sub_014280 (Ghidra: FUN_00014280)
 * Prototype: undefined4 sub_014280(void);
 * Address  : 0x14280 (Size: 76 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x49eff
 ******************************************************************************/
undefined4 FUN_00014280(void)

{
  int in_EAX;
  uint in_EDX;
  int iVar1;
  
  iVar1 = (in_EDX & 0xffff) * 0x11;
  *(undefined2 *)(in_EAX + 0xe4) =
       *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002ed45d + iVar1)] + 0xd);
  *(undefined2 *)(in_EAX + 0xe6) =
       *(undefined2 *)((&DAT_001ae9fc)[*(ushort *)(&DAT_002ed45d + iVar1)] + 0xf);
  FUN_00049eff();
  return 1;
}

/******************************************************************************
 * Function : sub_0142cc (Ghidra: FUN_000142cc)
 * Prototype: int sub_0142cc(void);
 * Address  : 0x142cc (Size: 86 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x14083, 0x140b7, 0x14127, 0x141d5
 * Callees  : 0 -> 
 ******************************************************************************/
int FUN_000142cc(void)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  byte in_AL;
  uint3 uVar4;
  uint in_EDX;
  
  uVar1 = *(ushort *)(&DAT_002ed45d + (in_EDX & 0xffff) * 0x11);
  bVar3 = false;
  while( true ) {
    uVar2 = (&DAT_001ae9fc)[uVar1];
    uVar4 = (uint3)(uVar2 >> 8);
    if (uVar2 <= DAT_001ae9fc) {
      return (uint)uVar4 << 8;
    }
    if ((int)*(char *)(uVar2 + 6) == (uint)in_AL) {
      bVar3 = true;
    }
    if (bVar3) break;
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2f3);
  }
  return CONCAT31(uVar4,1);
}

/******************************************************************************
 * Function : sub_014322 (Ghidra: FUN_00014322)
 * Prototype: void sub_014322(void);
 * Address  : 0x14322 (Size: 28 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x1836b
 * Callees  : 1 -> 0x13e1b
 ******************************************************************************/
void FUN_00014322(void)

{
  int in_EAX;
  
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2f7) != '\0') {
    FUN_00013e1b();
  }
  return;
}

/******************************************************************************
 * Function : dk_horrible_thing_battle_01433e (Ghidra: FUN_0001433e)
 * Prototype: char dk_horrible_thing_battle_01433e(void);
 * Address  : 0x1433e (Size: 257 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp:529 ("Horrible 0 thing in battle.")
 * Naming   : String 'Horrible 0 thing in battle.'
 * Callers  : 1 -> 0x13bae
 * Callees  : 1 -> 0xddaf0
 * Strings  :
 *   - 0x1602e2: "battle.cpp"
 *   - 0x160309: "battle.cpp"
 *   - 0x1602c6: "Horrible 0 thing in battle."
 *   - 0x1602ed: "Infinite loop in battle add"
 ******************************************************************************/
char FUN_0001433e(void)

{
  ushort uVar1;
  uint uVar2;
  int in_EAX;
  char cVar3;
  int in_EDX;
  int iVar4;
  int iVar5;
  int local_18;
  
  local_18 = 1;
  iVar4 = 0x11;
  cVar3 = '\0';
  do {
    if (0x20 < local_18) {
      return cVar3;
    }
    if (*(int *)(&DAT_002ed450 + iVar4) == 0) {
      if (cVar3 == '\0') {
        cVar3 = (char)local_18;
      }
    }
    else {
      iVar5 = 0;
      uVar1 = *(ushort *)(&DAT_002ed45d + iVar4);
      while ((uVar2 = (&DAT_001ae9fc)[uVar1], iVar5 < 200 && (DAT_001ae9fc < uVar2))) {
        if (uVar2 == 0) goto LAB_000143c6;
        if ((*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) != '\0') &&
           ((((&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0xa2)] ==
              in_EAX ||
             ((&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0xa2)] ==
              in_EDX)) && (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2f7) != '\0'))))
        {
          return *(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2f7);
        }
        iVar5 = iVar5 + 1;
        uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2f3);
      }
      if (iVar5 == 200) {
LAB_000143c6:
        FUN_000ddaf0(); /* LbErrorLog("battle.cpp", line 529, "Horrible 0 thing in battle.") */
        return '\0';
      }
    }
    local_18 = local_18 + 1;
    iVar4 = iVar4 + 0x11;
  } while( true );
}

/******************************************************************************
 * Function : sub_01443f (Ghidra: FUN_0001443f)
 * Prototype: void sub_01443f(void);
 * Address  : 0x1443f (Size: 147 bytes)
 * Module   : battle.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x13bae
 * Callees  : 1 -> 0x27553
 ******************************************************************************/
void FUN_0001443f(void)

{
  ushort uVar1;
  uint uVar2;
  uint in_EAX;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 auStack_28 [2];
  int local_20;
  undefined1 local_1c;
  undefined1 local_18;
  byte local_14;
  
  uVar1 = *(ushort *)(&DAT_002ed45d + (in_EAX & 0xffff) * 0x11);
  local_14 = 0;
  while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
    local_14 = local_14 | '\x01' << (*(byte *)(uVar2 + 6) & 0x1f);
    local_1c = *(undefined1 *)(uVar2 + 0xd);
    local_18 = *(undefined1 *)(uVar2 + 0xf);
    uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2f3);
  }
  local_20 = 0;
  piVar4 = &local_20;
  do {
    puVar3 = (undefined1 *)piVar4;
    if (((uint)local_14 & 1 << ((byte)local_20 & 0x1f)) != 0) {
      puVar3 = (undefined1 *)((int)piVar4 + -4);
      *(undefined4 *)((int)piVar4 + -4) = 0;
      *(undefined4 *)((int)piVar4 + -8) = 0x144cb;
      FUN_00027553();
    }
    local_20 = local_20 + 1;
    piVar4 = (int *)puVar3;
  } while (local_20 < 4);
  return;
}

/******************************************************************************
 * Function : dk_battle_has_members_after_0144d2 (Ghidra: FUN_000144d2)
 * Prototype: void dk_battle_has_members_after_0144d2(void);
 * Address  : 0x144d2 (Size: 184 bytes)
 * Module   : battle.cpp [direct_file_string_xref]
 * OrigLine : battle.cpp:613
 * Naming   : String 'Battle has %d members AFTER cleanup!'
 * Callers  : 2 -> 0x13bae, 0x13e1b
 * Callees  : 3 -> 0x13d3b, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x160339: "battle.cpp"
 *   - 0x160314: "Battle has %d members AFTER cleanup!"
 ******************************************************************************/
void FUN_000144d2(void)

{
  ushort uVar1;
  uint uVar2;
  uint in_EAX;
  uint extraout_EDX;
  int iVar3;
  
  iVar3 = 0;
  if ((short)in_EAX != 0) {
    uVar1 = *(ushort *)(&DAT_002ed45d + (in_EAX & 0xffff) * 0x11);
    while (uVar2 = (&DAT_001ae9fc)[uVar1], DAT_001ae9fc < uVar2) {
      if (*(char *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 3) != '\0') {
        iVar3 = iVar3 + 1;
      }
      uVar1 = *(ushort *)((&DAT_001b0a00)[*(ushort *)(uVar2 + 100)] + 0x2f3);
    }
    if (iVar3 == 0) {
      while (iVar3 = (in_EAX & 0xffff) * 0x11, *(short *)(&DAT_002ed45d + iVar3) != 0) {
        FUN_00013d3b();
        in_EAX = extraout_EDX;
      }
      if (*(int *)(&DAT_002ed450 + iVar3) != 0) {
        FUN_000e7714(&DAT_0019cbac,s_Battle_has__d_members_AFTER_clea_00160314,
                     *(undefined4 *)(&DAT_002ed450 + iVar3));
        FUN_000ddaf0(); /* LbErrorLog("battle.cpp", line 613, g_log_buf) */
      }
    }
  }
  return;
}

