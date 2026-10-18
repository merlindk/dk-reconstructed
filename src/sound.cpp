/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: sound.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_06e538 (Ghidra: FUN_0006e538)
 * Prototype: void sub_06e538(char param_1,byte param_2,undefined4 param_3,undefined4 param_4);
 * Address  : 0x6e538 (Size: 182 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 66 -> 0x22660, 0x228b1, 0x22933, 0x24998, 0x2606f, 0x26f4d, 0x28904, 0x28eb4, 0x3f238, 0x4a0d6 ...
 * Callees  : 4 -> 0x6f5e5, 0x6f6fa, 0xdc3c0, 0xf27d0
 ******************************************************************************/
void FUN_0006e538(char param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int in_EAX;
  int iVar2;
  char extraout_CL;
  undefined2 unaff_BX;
  
  if (DAT_00334019 == 0) {
    iVar2 = FUN_000f27d0();
    if (0 < iVar2) {
      iVar2 = FUN_000dc3c0(DAT_0037706e,DAT_00377072);
      if (iVar2 < DAT_001872b4) {
        if (*(char *)(in_EAX + 0x66) == '\0') {
          uVar1 = FUN_0006f5e5(0,unaff_BX,param_4,(int)extraout_CL,param_2 | 1,param_3);
          *(undefined1 *)(in_EAX + 0x66) = uVar1;
        }
        else {
          FUN_0006f6fa(param_4,(int)extraout_CL,(int)param_1,param_2 | 1,param_3);
        }
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_06e5ee (Ghidra: FUN_0006e5ee)
 * Prototype: void sub_06e5ee(void);
 * Address  : 0x6e5ee (Size: 48 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xc3780, 0xc3a38
 * Callees  : 2 -> 0x6f72b, 0x6f865
 ******************************************************************************/
void FUN_0006e5ee(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(char *)(in_EAX + 0x66) != '\0') {
    iVar1 = FUN_0006f865();
    if (iVar1 != 0) {
      FUN_0006f72b();
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_06e61e (Ghidra: FUN_0006e61e)
 * Prototype: void sub_06e61e(void);
 * Address  : 0x6e61e (Size: 734 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0xde6a8, 0xe3a8c
 * Callees  : 5 -> 0x6e538, 0x6f72b, 0x6f865, 0x81d84, 0xe69fc
 ******************************************************************************/
void FUN_0006e61e(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  undefined4 local_1c;
  
  uStack_24 = 0x6e64c;
  iVar4 = FUN_000e69fc();
  iVar4 = (int)((iVar4 + (iVar4 >> 0x1f) * -0x100) - (uint)((iVar4 >> 0x1f) << 7 < 0)) >> 8;
  uStack_24 = 0x6e67b;
  iVar5 = FUN_000e69fc();
  local_20 = (int)((iVar5 + (iVar5 >> 0x1f) * -0x100) - (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8;
  if ((&DAT_0019d0ff)[DAT_002f10ce._3_1_ * 0x4ef] == '\x01') {
    local_1c = 0x100;
  }
  else {
    local_1c = 0x32;
  }
  if (iVar4 <= local_20) {
    iVar4 = local_20;
  }
  if (9 < iVar4) {
    return;
  }
  if (*(char *)(in_EAX + 0x1a) == '\x1f') {
    return;
  }
  if (((*(char *)(in_EAX + 0x1a) == '\x13') && ((*(byte *)(in_EAX + 0x25) & 0x20) != 0)) &&
     ((int)(uint)*(ushort *)(in_EAX + 0x60) < (int)*(short *)(in_EAX + 0x11))) {
    uStack_24 = 0x6e700;
    iVar4 = FUN_0006f865();
    if (iVar4 != 0) {
      return;
    }
    uStack_24 = local_1c;
    uStack_28 = 2;
    puVar6 = &uStack_30;
    uStack_30 = 2;
    uStack_2c = 0;
  }
  else {
    uStack_24 = 0x6e736;
    iVar4 = FUN_0006f865();
    if (iVar4 != 0) {
      uStack_24 = 0x6e74a;
      FUN_0006f72b();
    }
    if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 9) == 0) {
      return;
    }
    uStack_24 = 0x6e768;
    iVar4 = FUN_00081d84();
    if (iVar4 == 0) {
      return;
    }
    bVar1 = *(byte *)(extraout_ECX + 0x67);
    *(byte *)(extraout_ECX + 0x67) = *(byte *)(extraout_ECX + 0x67) & 0xe0;
    *(byte *)(extraout_ECX + 0x67) = *(byte *)(extraout_ECX + 0x67) | (bVar1 & 0x1f) + 1 & 0x1f;
    if (3 < (*(byte *)(extraout_ECX + 0x67) & 0x1f)) {
      DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
      uVar2 = DAT_002e8bfa >> 0xd;
      uVar3 = DAT_002e8bfa * 0x80000;
      DAT_002e8bfa._0_1_ = (byte)uVar2;
      bVar1 = (byte)DAT_002e8bfa;
      DAT_002e8bfa = uVar2 | uVar3;
      *(byte *)(extraout_ECX + 0x66) = *(byte *)(extraout_ECX + 0x66) & 0xe3;
      *(byte *)(extraout_ECX + 0x67) = *(byte *)(extraout_ECX + 0x67) & 0xe0;
      *(byte *)(extraout_ECX + 0x66) = *(byte *)(extraout_ECX + 0x66) | (bVar1 & 3) << 2;
    }
    uStack_24 = local_1c;
    uStack_28 = 1;
    uStack_2c = 3;
    uStack_30 = 3;
    uStack_34 = 0x6e865;
    FUN_0006e538();
    if ((*(byte *)(in_EAX + 0x25) & 1) == 0) {
      return;
    }
    DAT_0019929c = DAT_0019929c * 0x24a1 + 0x24df;
    DAT_0019929c = (DAT_0019929c >> 0xd | DAT_0019929c * 0x80000) * 0x24a1 + 0x24df;
    DAT_0019929c = DAT_0019929c >> 0xd | DAT_0019929c * 0x80000;
    uStack_34 = 0x100;
    uStack_38 = 1;
    uStack_3c = 3;
    puVar6 = &uStack_40;
    uStack_40 = 3;
  }
  *(undefined4 *)((int)puVar6 + -4) = 0x6e8f5;
  FUN_0006e538();
  return;
}

/******************************************************************************
 * Function : dk_room_ambient_sound_object_06e8fc (Ghidra: FUN_0006e8fc)
 * Prototype: void dk_room_ambient_sound_object_06e8fc(void);
 * Address  : 0x6e8fc (Size: 175 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp:217 ("No room ambient sound object")
 * Naming   : String 'No room ambient sound object'
 * Callers  : 1 -> 0x670b2
 * Callees  : 6 -> 0x6e538, 0x6f653, 0x6f7b2, 0x6f865, 0xb3b10, 0xddaf0
 * Strings  :
 *   - 0x167599: "sound.cpp"
 *   - 0x16757c: "No room ambient sound object"
 ******************************************************************************/
void FUN_0006e8fc(void)

{
  int iVar1;
  int in_EDX;
  
  if (DAT_002eb9b2 == 0) {
    FUN_000ddaf0(); /* LbErrorLog("sound.cpp", line 217, "No room ambient sound object") */
  }
  else {
    iVar1 = (&DAT_001ae9fc)[DAT_002eb9b2];
    if (in_EDX != 0) {
      FUN_000b3b10();
      if (*(char *)(iVar1 + 0x66) != '\0') {
        iVar1 = FUN_0006f865();
        if (iVar1 != 0) {
          return;
        }
        FUN_0006f7b2();
      }
      FUN_0006e538(3,0,6,0x100);
      return;
    }
    if (*(char *)(iVar1 + 0x66) != '\0') {
      FUN_0006f653();
      *(undefined1 *)(iVar1 + 0x66) = 0;
      return;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_non_emitter_has_been_06e9ab (Ghidra: FUN_0006e9ab)
 * Prototype: void dk_non_emitter_has_been_06e9ab(void);
 * Address  : 0x6e9ab (Size: 175 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp:233 ("Non 3d Emitter has been deleted!")
 * Naming   : String 'Non 3d Emitter has been deleted!'
 * Callers  : 24 -> 0x1458c, 0x145d2, 0x48c77, 0x4b222, 0x4b5ca, 0x4b6ae, 0x4e1f2, 0x4e4ad, 0x4e85c, 0x4ee2c ...
 * Callees  : 5 -> 0x6f5e5, 0x6f6fa, 0x6f974, 0xddaf0, 0xf27d0
 * Strings  :
 *   - 0x1675c4: "sound.cpp"
 *   - 0x1675a3: "Non 3d Emitter has been deleted!"
 ******************************************************************************/
void FUN_0006e9ab(void)

{
  int iVar1;
  
  if (DAT_00334019 == 0) {
    iVar1 = FUN_000f27d0();
    if (0 < iVar1) {
      if (DAT_00376544 != 0) {
        iVar1 = FUN_0006f974();
        if (iVar1 == 0) {
          FUN_000ddaf0(); /* LbErrorLog("sound.cpp", line 233, "Non 3d Emitter has been deleted!") */
          DAT_00376544 = 0;
        }
      }
      if (DAT_00376544 == 0) {
        DAT_00376544 = FUN_0006f5e5(0,100,0x100,0,8,0x7ffffffe);
        return;
      }
      FUN_0006f6fa(0x100,0,3,8,0x7ffffffe);
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_non_emitter_has_been_06ea5a (Ghidra: FUN_0006ea5a)
 * Prototype: void dk_non_emitter_has_been_06ea5a(void);
 * Address  : 0x6ea5a (Size: 192 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp:263 ("Non 3d Emitter has been deleted!")
 * Naming   : String 'Non 3d Emitter has been deleted!'
 * Callers  : 4 -> 0x57fe4, 0x59dc4, 0x5a3ce, 0x6f0cd
 * Callees  : 6 -> 0x6f5e5, 0x6f6fa, 0x6f865, 0x6f974, 0xddaf0, 0xf27d0
 * Strings  :
 *   - 0x1675ef: "sound.cpp"
 *   - 0x1675ce: "Non 3d Emitter has been deleted!"
 ******************************************************************************/
void FUN_0006ea5a(void)

{
  int iVar1;
  
  if (DAT_00334019 == 0) {
    iVar1 = FUN_000f27d0();
    if (0 < iVar1) {
      if (DAT_00376544 != 0) {
        iVar1 = FUN_0006f974();
        if (iVar1 == 0) {
          FUN_000ddaf0(); /* LbErrorLog("sound.cpp", line 263, "Non 3d Emitter has been deleted!") */
          DAT_00376544 = 0;
        }
      }
      if (DAT_00376544 == 0) {
        DAT_00376544 = FUN_0006f5e5(0,100,0x100,0,8,0x7ffffffe);
        return;
      }
      iVar1 = FUN_0006f865();
      if (iVar1 == 0) {
        FUN_0006f6fa(0x100,0,3,8,0x7ffffffe);
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_speech_emitter_has_been_06eb1a (Ghidra: FUN_0006eb1a)
 * Prototype: longlong dk_speech_emitter_has_been_06eb1a(void);
 * Address  : 0x6eb1a (Size: 229 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp:295 ("Speech Emitter has been deleted!"); sound.cpp:308 ("Cannot create speech emitter!")
 * Naming   : String 'Speech Emitter has been deleted!'
 * Callers  : 1 -> 0x51374
 * Callees  : 6 -> 0x6f5e5, 0x6f6b8, 0x6f6fa, 0x6f974, 0xddaf0, 0xf27d0
 * Strings  :
 *   - 0x16761a: "sound.cpp"
 *   - 0x167642: "sound.cpp"
 *   - 0x1675f9: "Speech Emitter has been deleted!"
 *   - 0x167624: "Cannot create speech emitter!"
 ******************************************************************************/
longlong FUN_0006eb1a(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar3 = (undefined4 *)&stack0xfffffff0;
  if (DAT_00334019 == 0) {
    uStack_14 = 0x6eb32;
    iVar1 = FUN_000f27d0();
    puVar3 = (undefined4 *)&stack0xfffffff0;
    if (0 < iVar1) {
      if (DAT_00376548 != 0) {
        uStack_14 = 0x6eb4d;
        iVar1 = FUN_0006f974();
        if (iVar1 == 0) {
          uStack_14 = 0x6eb65;
          FUN_000ddaf0(); /* LbErrorLog("sound.cpp", line 295, "Speech Emitter has been deleted!") */
          DAT_00376548 = 0;
        }
      }
      if (DAT_00376548 == 0) {
        uStack_14 = 0x7fffffff;
        uStack_18 = 8;
        uStack_1c = 0;
        uStack_20 = 0x100;
        uStack_24 = 100;
        puVar2 = &uStack_28;
        uStack_28 = 1;
        DAT_00376548 = FUN_0006f5e5();
        if (DAT_00376548 != 0) {
LAB_0006eba0:
          return CONCAT44(*(undefined4 *)((int)puVar2 + 4),1);
        }
        FUN_000ddaf0(); /* LbErrorLog("sound.cpp", line 308, "Cannot create speech emitter!") */
        puVar3 = &uStack_28;
      }
      else {
        uStack_14 = 0x6ebca;
        iVar1 = FUN_0006f6b8();
        puVar3 = (undefined4 *)&stack0xfffffff0;
        if (iVar1 != 0) {
          uStack_14 = 0x7fffffff;
          uStack_18 = 8;
          uStack_1c = 3;
          uStack_20 = 0;
          puVar2 = &uStack_24;
          puVar3 = &uStack_24;
          uStack_24 = 0x100;
          uStack_28 = 0x6ebf4;
          iVar1 = FUN_0006f6fa();
          if (iVar1 != 0) goto LAB_0006eba0;
        }
      }
    }
  }
  return (ulonglong)*(uint *)((int)puVar3 + 4) << 0x20;
}

/******************************************************************************
 * Function : dk_speech_emitter_has_been_06ebff (Ghidra: FUN_0006ebff)
 * Prototype: longlong dk_speech_emitter_has_been_06ebff(void);
 * Address  : 0x6ebff (Size: 100 bytes)
 * Module   : sound.cpp [direct_file_string_xref]
 * OrigLine : sound.cpp:339 ("Speech Emitter has been deleted!")
 * Naming   : String 'Speech Emitter has been deleted!'
 * Callers  : 2 -> 0x51374, 0x51417
 * Callees  : 4 -> 0x6f8b7, 0x6f974, 0xddaf0, 0xf27d0
 * Strings  :
 *   - 0x16766d: "sound.cpp"
 *   - 0x16764c: "Speech Emitter has been deleted!"
 ******************************************************************************/
longlong FUN_0006ebff(void)

{
  int iVar1;
  undefined4 uVar2;
  uint in_EDX;
  
  if (DAT_00334019 == 0) {
    iVar1 = FUN_000f27d0();
    if (0 < iVar1) {
      if (DAT_00376548 != 0) {
        iVar1 = FUN_0006f974();
        if (iVar1 == 0) {
          FUN_000ddaf0(); /* LbErrorLog("sound.cpp", line 339, "Speech Emitter has been deleted!") */
          DAT_00376548 = 0;
        }
      }
      if (DAT_00376548 != 0) {
        uVar2 = FUN_0006f8b7();
        return CONCAT44(in_EDX,uVar2);
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_06ec63 (Ghidra: FUN_0006ec63)
 * Prototype: undefined4 sub_06ec63(void);
 * Address  : 0x6ec63 (Size: 12 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006ec63(void)

{
  return 1;
}

/******************************************************************************
 * Function : sub_06ec6f (Ghidra: FUN_0006ec6f)
 * Prototype: void sub_06ec6f(void);
 * Address  : 0x6ec6f (Size: 53 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x4823a, 0x6f3d6
 * Callees  : 1 -> 0x6f653
 ******************************************************************************/
void FUN_0006ec6f(void)

{
  byte *pbVar1;
  byte *extraout_EDX;
  int iVar2;
  
  iVar2 = 1;
  pbVar1 = DAT_001aea00;
  do {
    if (((*pbVar1 & 1) != 0) && (pbVar1[0x66] != 0)) {
      FUN_0006f653();
      extraout_EDX[0x66] = 0;
      pbVar1 = extraout_EDX;
    }
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0x6b;
  } while (iVar2 < 0x800);
  return;
}

/******************************************************************************
 * Function : sub_06ecd0 (Ghidra: FUN_0006ecd0)
 * Prototype: undefined * sub_06ecd0(void);
 * Address  : 0x6ecd0 (Size: 233 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x6edb9, 0x6ee65, 0x6eeaf
 * Callees  : 0 -> 
 ******************************************************************************/
undefined * FUN_0006ecd0(void)

{
  int in_EAX;
  undefined4 in_EDX;
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  switch(in_EDX) {
  case 1:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x188114);
  case 2:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x1880fc);
  case 3:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x188104);
  case 4:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x18810c);
  case 5:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x188124);
  case 6:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x18812c);
  case 7:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x188134);
  case 8:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x18813c);
  case 9:
    return (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x18811c);
  case 10:
    return &DAT_001880f4 + (uint)*(byte *)(in_EAX + 0x1a) * 0x58;
  case 0xb:
    puVar1 = (undefined *)((uint)*(byte *)(in_EAX + 0x1a) * 0x58 + 0x188144);
  }
  return puVar1;
}

/******************************************************************************
 * Function : sub_06edb9 (Ghidra: FUN_0006edb9)
 * Prototype: void sub_06edb9(void);
 * Address  : 0x6edb9 (Size: 172 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 14 -> 0x17e7e, 0x44b13, 0x4d197, 0x4e1f2, 0x65360, 0x65448, 0x654d8, 0x65be8, 0x6bdda, 0x6c2cc ...
 * Callees  : 3 -> 0x6e538, 0x6ecd0, 0x6f865
 ******************************************************************************/
void FUN_0006edb9(void)

{
  int iVar1;
  int in_ECX;
  int extraout_ECX;
  undefined4 unaff_EBX;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0006ecd0();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 4); iVar2 = iVar2 + 1) {
      iVar1 = FUN_0006f865();
      if (iVar1 != 0) {
        return;
      }
      iVar1 = extraout_ECX;
    }
    DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
    if (in_ECX == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 8;
    }
    FUN_0006e538(3,uVar3,unaff_EBX,0x100);
  }
  return;
}

/******************************************************************************
 * Function : sub_06ee65 (Ghidra: FUN_0006ee65)
 * Prototype: void sub_06ee65(void);
 * Address  : 0x6ee65 (Size: 74 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x849c8
 * Callees  : 3 -> 0x6ecd0, 0x6f72b, 0x6f865
 ******************************************************************************/
void FUN_0006ee65(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  
  iVar1 = FUN_0006ecd0();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    for (iVar3 = 0; iVar3 < *(int *)(iVar1 + 4); iVar3 = iVar3 + 1) {
      iVar2 = FUN_0006f865();
      iVar1 = extraout_ECX;
      if (iVar2 != 0) {
        FUN_0006f72b();
        iVar1 = extraout_ECX_00;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_06eeaf (Ghidra: FUN_0006eeaf)
 * Prototype: void sub_06eeaf(void);
 * Address  : 0x6eeaf (Size: 171 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x26faa
 * Callees  : 4 -> 0x24998, 0x6e538, 0x6ecd0, 0x6f865
 ******************************************************************************/
void FUN_0006eeaf(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 unaff_EBX;
  int iVar2;
  
  iVar1 = FUN_0006ecd0();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 4); iVar2 = iVar2 + 1) {
      iVar1 = FUN_0006f865();
      if (iVar1 != 0) {
        return;
      }
      iVar1 = extraout_ECX;
    }
    DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
    DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
    iVar1 = FUN_00024998();
    if (iVar1 != 0) {
      FUN_0006e538(3,0,unaff_EBX,0x100);
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_06ef5a (Ghidra: FUN_0006ef5a)
 * Prototype: void sub_06ef5a(void);
 * Address  : 0x6ef5a (Size: 371 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x36ff4
 * Callees  : 1 -> 0x6e9ab
 ******************************************************************************/
void FUN_0006ef5a(void)

{
  if (DAT_003db526 == '\0') {
    DAT_0019d0bc = '\0';
  }
  else {
    if ((DAT_0019d0bc == '\0') && (DAT_003db51d != '\0')) {
      DAT_0019d0bc = '\x01';
    }
    if ((DAT_0019d0bc == '\x01') && (DAT_003db50e != '\0')) {
      DAT_0019d0bc = '\x02';
    }
    if ((DAT_0019d0bc == '\x02') && (DAT_003db52a != '\0')) {
      DAT_0019d0bc = '\x03';
    }
    if ((DAT_0019d0bc == '\x03') && (DAT_003db521 != '\0')) {
      DAT_0019d0bc = '\x04';
    }
    if ((DAT_0019d0bc == '\x04') && (DAT_003db514 != '\0')) {
      DAT_0019d0bc = '\x05';
    }
    if ((DAT_0019d0bc == '\x05') && (DAT_003db51d != '\0')) {
      DAT_0019d0bc = '\x06';
    }
    if ((DAT_0019d0bc == '\x06') && (DAT_003db51d != '\0')) {
      DAT_0019d0bc = '\a';
    }
  }
  if ((DAT_0019d0ba & 0x20) != 0) {
    if ((DAT_003db526 == '\0') || (DAT_003db532 == '\0')) {
      DAT_0019d0be = '\0';
    }
    else {
      if ((DAT_0019d0be == '\0') && (DAT_003db520 != '\0')) {
        FUN_0006e9ab();
        DAT_0019d0be = '\x01';
      }
      if ((DAT_0019d0be == '\x01') && (DAT_003db522 != '\0')) {
        FUN_0006e9ab();
        DAT_0019d0be = '\x02';
      }
      if ((DAT_0019d0be == '\x02') && (DAT_003db50d != '\0')) {
        FUN_0006e9ab();
        DAT_0019d0be = 3;
        return;
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_simon_says_hi_everyone_06f0cd (Ghidra: FUN_0006f0cd)
 * Prototype: void dk_simon_says_hi_everyone_06f0cd(void);
 * Address  : 0x6f0cd (Size: 777 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : String 'Simon says Hi to everyone he knows...'
 * Callers  : 1 -> 0x8685c
 * Callees  : 6 -> 0x6ea5a, 0xe6b20, 0xe6c1c, 0xe6d20, 0xe6d80, 0xe7714
 * Strings  :
 *   - 0x167677: "Simon says Hi to everyone he knows..."
 *   - 0x16769d: "Alex, hopefully lying on a beach with Jo, says Hi"
 ******************************************************************************/
void FUN_0006f0cd(void)

{
  int iVar1;
  
  if (DAT_0019d0bc == '\a') {
    FUN_000e6b20();
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xbf;
    DAT_003d98b4 = DAT_001991b8;
    FUN_000e7714(&DAT_0019cbac,s_Simon_says_Hi_to_everyone_he_kno_00167677);
    DAT_00376534 = DAT_00376534 + DAT_001872a4;
    DAT_00376538 = DAT_00376538 + DAT_001872a8;
    if (DAT_00376534 < 0) {
      DAT_00376534 = 0;
      DAT_001872a4 = -DAT_001872a4;
    }
    if (DAT_00376538 < 0) {
      DAT_00376538 = 0;
      DAT_001872a8 = -DAT_001872a8;
    }
    iVar1 = FUN_000e6c1c();
    if ((int)(uint)DAT_0019cba4 <= (int)(DAT_00376534 + iVar1 * (uint)DAT_0019cba6)) {
      DAT_001872a4 = -DAT_001872a4;
      iVar1 = FUN_000e6c1c();
      DAT_00376534 = (DAT_0019cba4 - 1) - (uint)DAT_0019cba6 * iVar1;
    }
    iVar1 = FUN_000e6d20();
    if ((int)(uint)DAT_0019cba2 <= (int)(DAT_00376538 + iVar1 * (uint)DAT_0019cba6)) {
      DAT_001872a8 = -DAT_001872a8;
      iVar1 = FUN_000e6d20();
      DAT_00376538 = (DAT_0019cba2 - 1) - (uint)DAT_0019cba6 * iVar1;
    }
    if (DAT_003d9818 != 0) {
      FUN_000e6d80();
    }
    FUN_0006ea5a();
  }
  if (((DAT_0019d0ba & 0x20) != 0) && (DAT_0019d0be == '\x03')) {
    FUN_000e6b20();
    DAT_003d9874._0_1_ = (byte)DAT_003d9874 & 0xbf;
    DAT_003d98b4 = DAT_001991b8;
    FUN_000e7714(&DAT_0019cbac,s_Alex__hopefully_lying_on_a_beach_0016769d);
    DAT_0037653c = DAT_0037653c + DAT_001872ac;
    DAT_00376540 = DAT_00376540 + DAT_001872b0;
    if (DAT_0037653c < 0) {
      DAT_0037653c = 0;
      DAT_001872ac = -DAT_001872ac;
    }
    if (DAT_00376540 < 0) {
      DAT_00376540 = 0;
      DAT_001872b0 = -DAT_001872b0;
    }
    iVar1 = FUN_000e6c1c();
    if ((int)(uint)DAT_0019cba4 <= (int)(DAT_0037653c + iVar1 * (uint)DAT_0019cba6)) {
      DAT_001872ac = -DAT_001872ac;
      iVar1 = FUN_000e6c1c();
      DAT_0037653c = (DAT_0019cba4 - 1) - (uint)DAT_0019cba6 * iVar1;
    }
    iVar1 = FUN_000e6d20();
    if ((int)(uint)DAT_0019cba2 <= (int)((uint)DAT_0019cba6 * iVar1 + DAT_00376540)) {
      DAT_001872b0 = -DAT_001872b0;
      iVar1 = FUN_000e6d20();
      DAT_00376540 = (DAT_0019cba2 - 1) - iVar1 * (uint)DAT_0019cba6;
    }
    if (DAT_003d9818 != 0) {
      FUN_000e6d80();
    }
    FUN_0006ea5a();
  }
  return;
}

/******************************************************************************
 * Function : sub_06f3d6 (Ghidra: FUN_0006f3d6)
 * Prototype: void sub_06f3d6(void);
 * Address  : 0x6f3d6 (Size: 242 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2ca74
 * Callees  : 6 -> 0x51468, 0x6ec6f, 0x6f653, 0xf0ab8, 0xf143c, 0xf1874
 * Strings  :
 *   - 0x1676cf: "bullfrog"
 *   - 0x1676d8: "atmos1"
 *   - 0x1676df: "atmos2"
 ******************************************************************************/
void FUN_0006f3d6(void)

{
  int iVar1;
  int extraout_EDX;
  uint extraout_EDX_00;
  
  FUN_0006ec6f();
  if (DAT_00376548 != 0) {
    FUN_0006f653();
    DAT_00376548 = 0;
  }
  if (DAT_00376544 != 0) {
    FUN_0006f653();
    DAT_00376544 = 0;
  }
  if ((DAT_002eb9b2 != 0) && (*(char *)((&DAT_001ae9fc)[DAT_002eb9b2] + 0x66) != '\0')) {
    FUN_0006f653();
    *(undefined1 *)(extraout_EDX + 0x66) = 0;
  }
  FUN_000f1874();
  FUN_00051468();
  DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
  DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
  FUN_000f0ab8();
  if (((extraout_EDX_00 != 0) && (1 < extraout_EDX_00)) && (extraout_EDX_00 != 2)) {
    return;
  }
  iVar1 = FUN_000f143c();
  if (iVar1 != 0) {
    FUN_000f1874();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_06f4c8 (Ghidra: FUN_0006f4c8)
 * Prototype: undefined8 sub_06f4c8(void);
 * Address  : 0x6f4c8 (Size: 86 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x45bb8
 * Callees  : 9 -> 0x6f541, 0x6f816, 0x6f82f, 0x6f859, 0x6f85f, 0x6f8f7, 0x6f968, 0x700a0, 0x700b8
 ******************************************************************************/
undefined8 FUN_0006f4c8(void)

{
  undefined4 in_EDX;
  
  FUN_000700a0();
  FUN_0006f816();
  FUN_0006f82f();
  FUN_0006f85f();
  FUN_0006f859();
  FUN_0006f8f7();
  FUN_0006f968();
  FUN_0006f541();
  FUN_000700b8();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06f51e (Ghidra: FUN_0006f51e)
 * Prototype: undefined4 sub_06f51e(void);
 * Address  : 0x6f51e (Size: 35 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x45bb8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006f51e(void)

{
  int in_EAX;
  
  if (in_EAX < 1) {
    in_EAX = 1;
  }
  else if (0x10000 < in_EAX) {
    in_EAX = 0x10000;
  }
  DAT_001872b4 = in_EAX;
  return 1;
}

/******************************************************************************
 * Function : sub_06f541 (Ghidra: FUN_0006f541)
 * Prototype: undefined4 sub_06f541(void);
 * Address  : 0x6f541 (Size: 29 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x45bb8, 0x6f4c8
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006f541(void)

{
  int in_EAX;
  
  if (in_EAX < 1) {
    in_EAX = 1;
  }
  else if (0x10 < in_EAX) {
    in_EAX = 0x10;
  }
  DAT_00376554 = in_EAX;
  return 1;
}

/******************************************************************************
 * Function : sub_06f5e5 (Ghidra: FUN_0006f5e5)
 * Prototype: uint sub_06f5e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
 * Address  : 0x6f5e5 (Size: 110 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6e538, 0x6e9ab, 0x6ea5a, 0x6eb1a
 * Callees  : 3 -> 0x6faa0, 0x70050, 0x70080
 ******************************************************************************/
uint FUN_0006f5e5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 in_AX;
  uint uVar1;
  int iVar2;
  undefined2 in_DX;
  undefined2 unaff_BX;
  
  uVar1 = FUN_00070050();
  uVar1 = uVar1 & 0xffff;
  if (uVar1 != 0) {
    iVar2 = uVar1 * 0x16;
    (&DAT_00376582)[iVar2] = 100;
    (&DAT_00376583)[iVar2] = 100;
    *(undefined2 *)(&DAT_00376572 + iVar2) = in_AX;
    *(undefined2 *)(&DAT_00376576 + iVar2) = unaff_BX;
    (&DAT_0037656f)[iVar2] = (undefined1)param_5;
    *(undefined2 *)(&DAT_00376574 + iVar2) = in_DX;
    iVar2 = FUN_0006faa0(param_3,param_4,3,param_5,param_6);
    if (iVar2 != 0) {
      return uVar1;
    }
    FUN_00070080();
  }
  return 0;
}

/******************************************************************************
 * Function : sub_06f653 (Ghidra: FUN_0006f653)
 * Prototype: undefined8 sub_06f653(void);
 * Address  : 0x6f653 (Size: 30 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6e8fc, 0x6ec6f, 0x6f3d6, 0x72af4
 * Callees  : 2 -> 0x6ff7f, 0x70080
 ******************************************************************************/
undefined8 FUN_0006f653(void)

{
  undefined4 in_EDX;
  
  FUN_0006ff7f();
  FUN_00070080();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06f671 (Ghidra: FUN_0006f671)
 * Prototype: undefined8 sub_06f671(void);
 * Address  : 0x6f671 (Size: 18 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x24ab9, 0xdf760, 0xe0880, 0xe3e08
 * Callees  : 1 -> 0x6ffd9
 ******************************************************************************/
undefined8 FUN_0006f671(void)

{
  undefined4 in_EDX;
  
  FUN_0006ffd9();
  FUN_00070080();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06f69c (Ghidra: FUN_0006f69c)
 * Prototype: undefined4 sub_06f69c(void);
 * Address  : 0x6f69c (Size: 28 bytes)
 * Module   : sound.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0xdf760, 0xe0880, 0xe3e08
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006f69c(void)

{
  int in_EAX;
  int iVar1;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 unaff_BX;
  
  iVar1 = in_EAX * 0x16;
  *(undefined2 *)(&DAT_00376572 + iVar1) = in_DX;
  *(undefined2 *)(&DAT_00376574 + iVar1) = unaff_BX;
  *(undefined2 *)(&DAT_00376576 + iVar1) = in_CX;
  (&DAT_0037656e)[iVar1] = (&DAT_0037656e)[iVar1] | 4;
  return 1;
}

/******************************************************************************
 * Function : sub_06f6b8 (Ghidra: FUN_0006f6b8)
 * Prototype: bool sub_06f6b8(void);
 * Address  : 0x6f6b8 (Size: 18 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6eb1a, 0xdf760, 0xe0880, 0xe3e08
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_0006f6b8(void)

{
  int in_EAX;
  
  return ((&DAT_0037656e)[in_EAX * 0x16] & 2) == 0;
}

/******************************************************************************
 * Function : sub_06f6fa (Ghidra: FUN_0006f6fa)
 * Prototype: bool sub_06f6fa(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4, undefined4 param_5);
 * Address  : 0x6f6fa (Size: 49 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6e538, 0x6e9ab, 0x6ea5a, 0x6eb1a
 * Callees  : 1 -> 0x6faa0
 ******************************************************************************/
bool FUN_0006f6fa(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0006faa0(param_1,param_2,(int)param_3,param_4,param_5);
  return iVar1 != 0;
}

/******************************************************************************
 * Function : sub_06f7b2 (Ghidra: FUN_0006f7b2)
 * Prototype: undefined8 sub_06f7b2(void);
 * Address  : 0x6f7b2 (Size: 100 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6e8fc
 * Callees  : 2 -> 0x6e09b, 0x701e3
 ******************************************************************************/
undefined8 FUN_0006f7b2(void)

{
  int in_EAX;
  int iVar1;
  char cVar2;
  char extraout_CL;
  uint uVar3;
  undefined4 in_EDX;
  
  uVar3 = 0;
  while (cVar2 = (char)uVar3, (int)uVar3 < DAT_00376554) {
    iVar1 = uVar3 * 0x25;
    if (((&DAT_0037709e)[iVar1] != '\0') &&
       (&DAT_0037656e + in_EAX * 0x16 == *(undefined **)((int)&DAT_00377094 + iVar1))) {
      (&DAT_0037709e)[iVar1] = 0;
      FUN_000701e3();
      FUN_0006e09b();
      cVar2 = extraout_CL;
    }
    uVar3 = (uint)(byte)(cVar2 + 1);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06f865 (Ghidra: FUN_0006f865)
 * Prototype: undefined4 sub_06f865(void);
 * Address  : 0x6f865 (Size: 82 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 17 -> 0x4bf40, 0x653ce, 0x67fd3, 0x6e5ee, 0x6e61e, 0x6e8fc, 0x6ea5a, 0x6edb9, 0x6ee65, 0x6eeaf ...
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006f865(void)

{
  int in_EAX;
  undefined4 *puVar1;
  byte bVar2;
  int in_EDX;
  uint unaff_EBX;
  
  bVar2 = 0;
  puVar1 = &DAT_0037707f;
  while( true ) {
    if (DAT_00376554 <= (int)(uint)bVar2) {
      return 0;
    }
    if ((((*(char *)((int)puVar1 + 0x1f) != '\0') &&
         (&DAT_0037656e + in_EAX * 0x16 == *(undefined **)((int)puVar1 + 0x15))) &&
        (*(short *)(puVar1 + 2) == in_EDX)) && (*(byte *)((int)puVar1 + 10) == unaff_EBX)) break;
    bVar2 = bVar2 + 1;
    puVar1 = (undefined4 *)((int)puVar1 + 0x25);
  }
  return 1;
}

/******************************************************************************
 * Function : sub_06f8b7 (Ghidra: FUN_0006f8b7)
 * Prototype: longlong sub_06f8b7(void);
 * Address  : 0x6f8b7 (Size: 64 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x6ebff
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_0006f8b7(void)

{
  int in_EAX;
  undefined4 *puVar1;
  byte bVar2;
  uint in_EDX;
  
  bVar2 = 0;
  puVar1 = &DAT_0037707f;
  while( true ) {
    if (DAT_00376554 <= (int)(uint)bVar2) {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*(char *)((int)puVar1 + 0x1f) != '\0') &&
       (&DAT_0037656e + in_EAX * 0x16 == *(undefined **)((int)puVar1 + 0x15))) break;
    bVar2 = bVar2 + 1;
    puVar1 = (undefined4 *)((int)puVar1 + 0x25);
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_06f974 (Ghidra: FUN_0006f974)
 * Prototype: undefined4 sub_06f974(void);
 * Address  : 0x6f974 (Size: 26 bytes)
 * Module   : sound.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 4 -> 0x6e9ab, 0x6ea5a, 0x6eb1a, 0x6ebff
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0006f974(void)

{
  int in_EAX;
  
  if ((in_EAX != 0) && (((&DAT_0037656e)[in_EAX * 0x16] & 1) != 0)) {
    return 1;
  }
  return 0;
}

