/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: frontmap.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 22
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_030e47 (Ghidra: FUN_00030e47)
 * Prototype: longlong sub_030e47(void);
 * Address  : 0x30e47 (Size: 65 bytes)
 * Module   : frontmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x300a7
 * Callees  : 1 -> 0xeb7b0
 ******************************************************************************/
longlong FUN_00030e47(void)

{
  char *pcVar1;
  uint in_EDX;
  char local_14;
  char local_13;
  
  FUN_000eb7b0();
  pcVar1 = &DAT_0017b41a;
  while( true ) {
    if (*pcVar1 == '\0') {
      return (ulonglong)in_EDX << 0x20;
    }
    if ((*pcVar1 == local_14) && (pcVar1[1] == local_13)) break;
    pcVar1 = pcVar1 + 6;
  }
  return CONCAT44(in_EDX,*(undefined4 *)(pcVar1 + 2));
}

/******************************************************************************
 * Function : dk_ldata_dkflag00_dat_030ef8 (Ghidra: FUN_00030ef8)
 * Prototype: longlong dk_ldata_dkflag00_dat_030ef8(void);
 * Address  : 0x30ef8 (Size: 795 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp:373 ("Unable to load MAP SCREEN sprites")
 * Naming   : String 'LDATA\DKFLAG00.DAT'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 15 -> 0x150f0, 0x2f1c8, 0x2f1d2, 0x329ae, 0x6e159, 0xddaf0, 0xe6a10, 0xe830c, 0xe846c, 0xeb818 ...
 * Strings  :
 *   - 0x16408a: "frontmap.cpp"
 *   - 0x17b444: "LDATA\DKFLAG00.DAT"
 *   - 0x164068: "Unable to load MAP SCREEN sprites"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00030ef8(void)

{
  int iVar1;
  uint uVar2;
  uint in_EDX;
  uint *puVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint auStack_c [2];
  
  puVar3 = auStack_c;
  uStack_10 = 0x30f0c;
  auStack_c[0] = in_EDX;
  FUN_000e6a10();
  uStack_10 = DAT_00199228;
  uStack_14 = 0x30f17;
  FUN_000e846c();
  DAT_003351e2 = 0;
  DAT_003351e6 = 0;
  DAT_003351ee = 0;
  _DAT_003351ea = 0;
  _DAT_003351f2 = 0;
  uStack_10 = 0x30f51;
  FUN_000150f0();
  uStack_10 = 0x30f56;
  FUN_0002f1c8();
  uStack_10 = 0x30f62;
  iVar1 = FUN_000329ae();
  if (iVar1 != 0) {
    uStack_10 = 0x30f7b;
    iVar1 = FUN_000e830c();
    if (iVar1 == 0) {
      uStack_10 = 0x30f9f;
      FUN_000f05f0();
      uStack_10 = 0x30fa4;
      FUN_0002f1d2();
      if ((DAT_0019d0bd & 0x10) == 0) {
        uStack_10 = 0x30fb7;
        FUN_000ecabc();
      }
      if ((((&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 2) == 0) &&
         (((DAT_002e78ea == 1 || ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] == '\x02')) ||
          ((&DAT_0019d0f1)[DAT_002f10ce._3_1_ * 0x4ef] == '\x03')))) {
        DAT_00335182 = (&DAT_0017b644)[(uint)DAT_002e78ea * 5] - DAT_003d982c / 2;
        DAT_00335186 = (&DAT_0017b648)[(uint)DAT_002e78ea * 5] - DAT_003d9830 / 2;
        DAT_0033516c = 0;
        uStack_10 = 0x31040;
        DAT_0033519a = DAT_00335182;
        DAT_0033519e = DAT_00335186;
        iVar1 = FUN_000eb818();
        DAT_003351e2 = iVar1 + 1000;
      }
      else {
        if (((&DAT_0019d0ce)[DAT_002f10ce._3_1_ * 0x4ef] & 2) == 0) {
          uVar2 = DAT_002e78ea - 1;
        }
        else {
          uVar2 = (uint)DAT_002e78ea;
        }
        DAT_00335182 = (&DAT_0017b644)[uVar2 * 5] - DAT_003d982c / 2;
        DAT_00335186 = (&DAT_0017b648)[uVar2 * 5] - DAT_003d9830 / 2;
        DAT_00335176 = (&DAT_0017b644)[uVar2 * 5];
        DAT_0033517a = (&DAT_0017b648)[uVar2 * 5];
        DAT_0033516c = 1;
        DAT_0033516d = 1;
        DAT_00335172 = 0xf0;
        DAT_0033516e = 0xfffffffc;
      }
      DAT_003351f6 = 0x100;
      if (DAT_00335182 < 0) {
        DAT_00335182 = 0;
      }
      else if (0x500 - DAT_003d982c < DAT_00335182) {
        DAT_00335182 = 0x500 - DAT_003d982c;
      }
      if (DAT_00335186 < 0) {
        DAT_00335186 = 0;
      }
      else if (0x3c0 - DAT_003d9830 < DAT_00335186) {
        DAT_00335186 = 0x3c0 - DAT_003d9830;
      }
      DAT_0033518a = DAT_00335182 << 8;
      DAT_0033518e = DAT_00335186 << 8;
      DAT_00335192 = 0;
      DAT_00335196 = 0;
      uStack_10 = 0x3118f;
      FUN_000ebab0();
      uStack_10 = 0x311ac;
      FUN_000ebf9c();
      if (0xf < DAT_00334065) {
        uStack_10 = 0;
        uStack_14 = 2;
        uStack_18 = 0xffffffff;
        uStack_1c = 100;
        uStack_20 = 0x311d0;
        FUN_0006e159();
        uStack_20 = 0;
        uStack_24 = 2;
        uStack_28 = 0xffffffff;
        puVar3 = &uStack_2c;
        uStack_2c = 100;
        FUN_0006e159();
      }
      if ((DAT_0019d0bd & 0x10) == 0) {
        puVar3[-1] = 0x31200;
        FUN_000ecf70();
      }
      DAT_00334a4c = 0;
      return CONCAT44(*puVar3,1);
    }
    uStack_10 = 0x30f93;
    FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 373, "Unable to load MAP SCREEN sprites") */
  }
  uStack_10 = 0x30f6b;
  FUN_0002f1d2();
  return (ulonglong)auStack_c[0] << 0x20;
}

/******************************************************************************
 * Function : dk_ldata_dkflag00_dat_031213 (Ghidra: FUN_00031213)
 * Prototype: void dk_ldata_dkflag00_dat_031213(void);
 * Address  : 0x31213 (Size: 96 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : String 'LDATA\DKFLAG00.DAT'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 7 -> 0x32b21, 0xe83f0, 0xeae8a, 0xebab0, 0xecd76, 0xecf70, 0xf0730
 * Strings  :
 *   - 0x17b444: "LDATA\DKFLAG00.DAT"
 ******************************************************************************/
void FUN_00031213(void)

{
  FUN_000ebab0();
  FUN_00032b21();
  FUN_000e83f0();
  FUN_000f0730();
  if ((DAT_003351e6 != 0) || (DAT_003351ee != 0)) {
    DAT_003351e6 = 0;
    DAT_003351ee = 0;
    FUN_000eae8a();
  }
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecd76();
    FUN_000ecf70();
    return;
  }
  return;
}

/******************************************************************************
 * Function : sub_031273 (Ghidra: FUN_00031273)
 * Prototype: void sub_031273(void);
 * Address  : 0x31273 (Size: 806 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2faf6
 * Callees  : 5 -> 0x2e8a7, 0x32805, 0x328e1, 0xe8f24, 0xeb818
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031273(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = false;
  if (DAT_0033516c == '\0') {
    if (DAT_003db4fd != '\0') {
      DAT_003db4fd = 0;
      FUN_0002e8a7();
      FUN_000e8f24();
      return;
    }
    FUN_00032805();
    bVar1 = true;
  }
  else if (DAT_0033516d == '\0') {
    DAT_0033516c = '\0';
    iVar2 = FUN_000eb818();
    DAT_003351e2 = iVar2 + 1000;
  }
  if ((bVar1) && (DAT_0034b25c != '\0')) {
    iVar2 = (uint)DAT_002e78ea * 0x14;
    DAT_0034b25c = '\0';
    iVar3 = DAT_0034b260 + DAT_00335182;
    if ((((*(int *)(&DAT_0017b64c + iVar2) <= iVar3) &&
         (iVar3 < (int)((uint)*(byte *)(DAT_003351d2 + 0x40) + *(int *)(&DAT_0017b64c + iVar2)))) &&
        (iVar4 = DAT_0034b264 + DAT_00335186,
        (int)(*(int *)(&DAT_0017b650 + iVar2) - (uint)*(byte *)(DAT_003351d2 + 0x41)) <= iVar4)) &&
       (iVar4 < *(int *)(&DAT_0017b650 + iVar2))) {
      DAT_0033519a = iVar3 - DAT_003d982c / 2;
      DAT_0033516c = '\x01';
      DAT_0033516d = '\x01';
      DAT_00335172 = 1;
      DAT_0033516e = 4;
      DAT_0033517e = 7;
      DAT_0033519e = iVar4 - DAT_003d9830 / 2;
      if (DAT_0033519a < 0) {
        DAT_0033519a = 0;
      }
      else if (0x500 - DAT_003d982c < DAT_0033519a) {
        DAT_0033519a = 0x500 - DAT_003d982c;
      }
      if (DAT_0033519e < 0) {
        DAT_0033519e = 0;
      }
      else if (0x3c0 - DAT_003d9830 < DAT_0033519e) {
        DAT_0033519e = 0x3c0 - DAT_003d9830;
      }
      DAT_0033518a = DAT_00335182 << 8;
      DAT_0033518e = DAT_00335186 << 8;
      _DAT_0019d0c2 = (uint)DAT_002e78ea;
      DAT_00335176 = iVar3;
      DAT_0033517a = iVar4;
    }
    iVar3 = 0;
    iVar2 = 0;
    do {
      if ((((&DAT_002ee888)[iVar3] != '\0') &&
          (iVar4 = DAT_0034b260 + DAT_00335182, *(int *)((int)&DAT_0017b7fc + iVar2) <= iVar4)) &&
         ((iVar4 < (int)((uint)*(byte *)(DAT_003351d2 + 0x70) + *(int *)((int)&DAT_0017b7fc + iVar2)
                        ) &&
          ((iVar5 = DAT_0034b264 + DAT_00335186,
           (int)(*(int *)((int)&DAT_0017b800 + iVar2) - (uint)*(byte *)(DAT_003351d2 + 0x71)) <=
           iVar5 && (iVar5 < *(int *)((int)&DAT_0017b800 + iVar2))))))) {
        DAT_0033516c = '\x01';
        DAT_0033516d = '\x01';
        DAT_00335172 = 1;
        DAT_0033516e = 4;
        DAT_0033517e = 7;
        _DAT_0019d0c2 = *(uint *)((int)&DAT_0017b804 + iVar2);
        DAT_0033519a = iVar4 - DAT_003d982c / 2;
        DAT_0033519e = iVar5 - DAT_003d9830 / 2;
        if (DAT_0033519a < 0) {
          DAT_0033519a = 0;
        }
        else if (0x500 - DAT_003d982c < DAT_0033519a) {
          DAT_0033519a = 0x500 - DAT_003d982c;
        }
        if (DAT_0033519e < 0) {
          DAT_0033519e = 0;
        }
        else if (0x3c0 - DAT_003d9830 < DAT_0033519e) {
          DAT_0033519e = 0x3c0 - DAT_003d9830;
        }
        DAT_0033518a = DAT_00335182 << 8;
        DAT_0033518e = DAT_00335186 << 8;
        DAT_00335176 = iVar4;
        DAT_0033517a = iVar5;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < 6);
  }
  else {
    FUN_000328e1();
  }
  return;
}

/******************************************************************************
 * Function : sub_031599 (Ghidra: FUN_00031599)
 * Prototype: void sub_031599(void);
 * Address  : 0x31599 (Size: 699 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fda1
 * Callees  : 5 -> 0x327b5, 0xac370, 0xdc150, 0xeb818, 0x13a710
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031599(void)

{
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar1;
  int extraout_ECX_01;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_0033516d == '\0') {
    FUN_000327b5();
    if (((*(int *)(&DAT_0017b64c + (uint)DAT_002e78ea * 0x14) <=
          (int)(DAT_003d9864 * (uint)DAT_0019cba6 + DAT_00335182)) &&
        ((int)((uint)DAT_0019cba6 * DAT_003d9864 + DAT_00335182) <
         (int)((uint)*(byte *)(DAT_003351d2 + 0x40) +
              *(int *)(&DAT_0017b64c + (uint)DAT_002e78ea * 0x14)))) &&
       (uVar4 = FUN_000dc150(), (int)((ulonglong)uVar4 >> 0x20) <= (int)uVar4 + DAT_00335186)) {
      FUN_000dc150();
    }
    FUN_000eb818();
    iVar3 = 0;
    FUN_0013a710();
    iVar2 = 0;
    iVar1 = extraout_ECX;
    do {
      if ((&DAT_002ee888)[iVar3] != '\0') {
        if (((*(int *)((int)&DAT_0017b7fc + iVar2) <=
              (int)(DAT_003d9864 * (uint)DAT_0019cba6 + DAT_00335182)) &&
            ((int)((uint)DAT_0019cba6 * DAT_003d9864 + DAT_00335182) <
             (int)((uint)*(byte *)(iVar1 + 4) + *(int *)((int)&DAT_0017b7fc + iVar2)))) &&
           (uVar4 = FUN_000dc150(), (int)((ulonglong)uVar4 >> 0x20) <= (int)uVar4 + DAT_00335186)) {
          FUN_000dc150();
        }
        FUN_000eb818();
        FUN_0013a710();
        iVar1 = extraout_ECX_00;
      }
      if ((((float)_DAT_00164097 < _DAT_0033401d) && ((double)_DAT_0033401d <= _DAT_0016409f)) ||
         (((float)_DAT_001640a7 <= _DAT_0033401d && ((double)_DAT_0033401d < _DAT_001640af)))) {
        FUN_0013a710();
        iVar1 = extraout_ECX_01;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < 6);
  }
  else {
    FUN_000ac370();
  }
  FUN_00032612();
  return;
}

/******************************************************************************
 * Function : sub_031854 (Ghidra: FUN_00031854)
 * Prototype: undefined8 sub_031854(void);
 * Address  : 0x31854 (Size: 509 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2fc49
 * Callees  : 8 -> 0x32738, 0x32d8c, 0xea934, 0xeae4c, 0xeb818, 0xecabc, 0xecf70, 0xf0790
 ******************************************************************************/
undefined8 FUN_00031854(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  int iVar3;
  
  if ((DAT_003351e2 != 0) && (uVar1 = FUN_000eb818(), DAT_003351e2 < uVar1)) {
    DAT_003351e2 = 0;
    FUN_00032738();
  }
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x15);
  if (DAT_003351f6 == 0) {
    if (0xf < DAT_00334065) {
      FUN_000f0790();
      FUN_000f0790();
    }
    if ((DAT_0019d0bd & 0x10) == 0) {
      FUN_000ecf70();
    }
    FUN_000eae4c();
  }
  else {
    if (0xf < DAT_00334065) {
      FUN_000f0790();
    }
    FUN_000f0790();
    FUN_000eae4c();
    if ((DAT_0019d0bd & 0x10) == 0) {
      FUN_000ecf70();
    }
  }
  if ((DAT_0033516d == '\0') || (iVar3 = FUN_00032d8c(), iVar3 == 0)) {
    if ((DAT_003351e6 != 0) && (iVar3 = FUN_000ea934(), iVar3 != 0)) {
      DAT_003351e6 = 0;
    }
    if ((DAT_0019d0bd & 0x10) == 0) {
      FUN_000ecabc();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : dk_ldata_netflag_dat_031a51 (Ghidra: FUN_00031a51)
 * Prototype: void dk_ldata_netflag_dat_031a51(void);
 * Address  : 0x31a51 (Size: 389 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp:972; frontmap.cpp:989 ("Unable to load MAP SCREEN sprites")
 * Naming   : String 'LDATA\NETFLAG.DAT'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 13 -> 0x150f0, 0x2f1c8, 0x2f1d2, 0x329ae, 0x32f9b, 0xddaf0, 0xe6b20, 0xe830c, 0xebab0, 0xebf9c ...
 * Strings  :
 *   - 0x1640e7: "frontmap.cpp"
 *   - 0x164116: "frontmap.cpp"
 *   - 0x17b4e0: "LDATA\NETFLAG.DAT"
 *   - 0x1640f4: "Unable to load MAP SCREEN sprites"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031a51(void)

{
  char cVar1;
  int iVar2;
  
  if (DAT_0033591f != 0) {
    cVar1 = FUN_000ed0ac();
    if (cVar1 != '\0') {
      FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 972, g_log_buf) */
    }
  }
  FUN_000150f0();
  FUN_0002f1c8();
  DAT_002e78e9 = 0;
  iVar2 = FUN_000329ae();
  if (iVar2 == 0) {
    FUN_0002f1d2();
    return;
  }
  iVar2 = FUN_000e830c();
  if (iVar2 != 0) {
    FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 989, "Unable to load MAP SCREEN sprites") */
    return;
  }
  FUN_000f05f0();
  FUN_0002f1d2();
  FUN_00032f9b();
  DAT_00335182 = (0x500 - DAT_003d982c) / 2;
  DAT_00335186 = (0x3c0 - DAT_003d9830) / 2;
  DAT_00334a54 = 0xffffffff;
  DAT_003351fa = 0xffffffff;
  FUN_000ebab0();
  FUN_000ebf9c();
  DAT_003d98b4 = DAT_003351b2;
  FUN_000e6b20();
  DAT_003d9874 = 0;
  DAT_003351f6 = 0x100;
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecf70();
  }
  if (DAT_0033591f == 0) {
    DAT_003351fe = 1;
  }
  else {
    DAT_003351fe = 0;
    iVar2 = 0;
    do {
      if (((&DAT_003358f3)[iVar2] & 1) != 0) {
        DAT_003351fe = DAT_003351fe + 1;
      }
      iVar2 = iVar2 + 0xc;
    } while (iVar2 != 0x30);
  }
  _DAT_00335202 = 0;
  _DAT_00335206 = 0;
  return;
}

/******************************************************************************
 * Function : dk_ldata_netflag_dat_031bd6 (Ghidra: FUN_00031bd6)
 * Prototype: void dk_ldata_netflag_dat_031bd6(void);
 * Address  : 0x31bd6 (Size: 77 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : String 'LDATA\NETFLAG.DAT'
 * Callers  : 1 -> 0x2e8a7
 * Callees  : 5 -> 0x32b21, 0xe83f0, 0xe8c83, 0xecd76, 0xecf70
 * Strings  :
 *   - 0x17b4e0: "LDATA\NETFLAG.DAT"
 ******************************************************************************/
void FUN_00031bd6(void)

{
  FUN_00032b21();
  FUN_000e83f0();
  FUN_000e8c83();
  DAT_0033591f = 0;
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecd76();
    FUN_000ecf70();
  }
  return;
}

/******************************************************************************
 * Function : sub_031c23 (Ghidra: FUN_00031c23)
 * Prototype: void sub_031c23(void);
 * Address  : 0x31c23 (Size: 460 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2faf6
 * Callees  : 5 -> 0x32805, 0x328e1, 0xdc150, 0xe7714, 0xebf9c
 * Strings  :
 *   - 0x164123: "%s %d"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031c23(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  
  if (DAT_003db4fd == '\0') {
    if (_DAT_00335206 == 0) {
      if ((DAT_0034b25d != '\0') && (DAT_0034b25d = '\0', DAT_0033591f != 0)) {
        if (DAT_00334a54 == -1) {
          if (_DAT_00335202 == 0) {
            _DAT_00335202 = 9;
          }
        }
        else {
          FUN_000ebf9c();
          DAT_00334a54 = -1;
        }
      }
      if (DAT_00334a54 == -1) {
        DAT_003351fa = -1;
        iVar5 = 0;
        iVar6 = 0;
        while ((iVar3 = DAT_003351fa, iVar5 < DAT_003358eb &&
               (((((int)(uint)(byte)(&DAT_00335374)[iVar6] < DAT_003351fe ||
                  ((int)(DAT_003d9864 * (uint)DAT_0019cba6 + DAT_00335182) <
                   *(int *)((int)&DAT_00335375 + iVar6))) ||
                 ((int)(*(byte *)(DAT_003351d2 + 0x22) / 2 +
                       *(int *)((int)&DAT_00335375 + iVar6) + (uint)*(byte *)(DAT_003351d2 + 0x22))
                  <= (int)((uint)DAT_0019cba6 * DAT_003d9864 + DAT_00335182))) ||
                ((iVar3 = FUN_000dc150(), iVar5 = extraout_ECX,
                 iVar3 + DAT_00335186 < *(int *)((int)&DAT_00335379 + iVar6) ||
                 (iVar2 = *(int *)((int)&DAT_00335379 + iVar6),
                 bVar1 = *(byte *)(DAT_003351d2 + 0x23), iVar4 = FUN_000dc150(),
                 iVar5 = extraout_ECX_00, iVar3 = extraout_ECX_00,
                 (int)(iVar2 + (uint)bVar1 + bVar1 / 2) <= iVar4 + DAT_00335186))))))) {
          iVar6 = iVar6 + 0xe;
          iVar5 = iVar5 + 1;
        }
        DAT_003351fa = iVar3;
        if (((DAT_003351fa != -1) && (_DAT_00335202 == 0)) &&
           ((_DAT_00335206 == 0 && (DAT_0034b25c != '\0')))) {
          DAT_00334a54 = DAT_003351fa;
          DAT_0034b25c = '\0';
          FUN_000e7714(&DAT_00334025,s__s__d_00164123,DAT_003337f3,
                       (&DAT_00335373)[DAT_003351fa * 0xe]);
        }
        FUN_00032805();
        FUN_000328e1();
      }
    }
  }
  else {
    DAT_00334a54 = -2;
    DAT_003db4fd = '\0';
  }
  return;
}

/******************************************************************************
 * Function : dk_LbNetwork_Exchange_031def (Ghidra: FUN_00031def)
 * Prototype: undefined8 dk_LbNetwork_Exchange_031def(void);
 * Address  : 0x31def (Size: 1274 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp:1261 ("LbNetwork_Exchange failed"); frontmap.cpp:1276 ("Unable to enable new players joining exchange")
 * Naming   : References 'LbNetwork_Exchange failed'
 * Callers  : 1 -> 0x2fc49
 * Callees  : 11 -> 0x2e8a7, 0x32d8c, 0x32e00, 0xdc150, 0xddaf0, 0xe6a10, 0xe7714, 0xebf9c, 0xecf70, 0xed0ac ...
 * Strings  :
 *   - 0x164143: "frontmap.cpp"
 *   - 0x16417e: "frontmap.cpp"
 *   - 0x164129: "LbNetwork_Exchange failed"
 *   - 0x164150: "Unable to enable new players joining exchange"
 *   - 0x16418b: "%s %d"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00031def(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  undefined4 in_EDX;
  uint uVar12;
  undefined8 uVar13;
  int local_24;
  int local_20;
  uint local_1c;
  
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecf70();
  }
  if (DAT_0033516d == '\0') {
    FUN_000e6a10();
    iVar5 = (int)DAT_002f10ce._3_1_;
    iVar7 = iVar5 * 0xc;
    (&DAT_003358f9)[iVar7] = (undefined1)DAT_00334a54;
    (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] | 1;
    if (_DAT_00335206 == 0) {
      if (DAT_00334a54 == -1) {
        sVar11 = (short)DAT_003d9864 * DAT_0019cba6 + (short)DAT_00335182;
        if (_DAT_00335202 != 0) {
          (&DAT_003358f5)[iVar5 * 6] = sVar11;
          sVar11 = FUN_000dc150();
          iVar5 = DAT_002f10ce._3_1_ * 0xc;
          (&DAT_003358f7)[DAT_002f10ce._3_1_ * 6] = (short)DAT_00335186 + sVar11;
          if (_DAT_00335202 < 0x11) {
            uVar2 = DAT_00335202;
            (&DAT_003358f3)[iVar5] = (&DAT_003358f3)[iVar5] & 7;
            (&DAT_003358f9)[iVar5] = uVar2;
            _DAT_00335202 = _DAT_00335202 + 1;
            (&DAT_003358f3)[iVar5] = (&DAT_003358f3)[iVar5] | 8;
          }
          else {
            _DAT_00335202 = 0;
          }
          goto LAB_00031fdc;
        }
        (&DAT_003358f5)[iVar5 * 6] = sVar11;
        sVar11 = FUN_000dc150();
        sVar11 = (short)DAT_00335186 + sVar11;
        iVar7 = DAT_002f10ce._3_1_ * 0xc;
      }
      else {
        sVar11 = *(short *)((int)&DAT_00335379 + DAT_00334a54 * 0xe);
        (&DAT_003358f5)[iVar5 * 6] =
             (ushort)*(byte *)(DAT_003351d2 + 10) * (short)DAT_002f10ce._3_1_ +
             *(short *)((int)&DAT_00335375 + DAT_00334a54 * 0xe);
      }
      *(short *)((int)&DAT_003358f7 + iVar7) = sVar11;
    }
    else {
      uVar3 = (undefined2)DAT_0033520a;
      (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] & 7;
      (&DAT_003358f5)[iVar5 * 6] = uVar3;
      (&DAT_003358f3)[iVar7] = (&DAT_003358f3)[iVar7] | 0x10;
      (&DAT_003358f7)[iVar5 * 6] = (undefined2)DAT_0033520e;
      (&DAT_003358fa)[iVar7] = DAT_00335206;
      _DAT_00335206 = _DAT_00335206 + -1;
      if (_DAT_00335206 == 0) {
        FUN_000ebf9c();
      }
    }
LAB_00031fdc:
    if ((DAT_0033591f != 0) && (cVar4 = FUN_000ee694(), cVar4 != '\0')) {
      FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 1261, "LbNetwork_Exchange failed") */
    }
    local_1c = 0xffffffff;
    FUN_000e6a10();
    bVar1 = false;
    uVar12 = 0;
    local_20 = 0;
    iVar5 = 0;
    for (iVar7 = 0; iVar9 = DAT_00199228, iVar7 < 4; iVar7 = iVar7 + 1) {
      if (((&DAT_003358f3)[iVar5] & 1) != 0) {
        iVar10 = (int)(char)(&DAT_003358f9)[iVar5];
        if (iVar10 == -2) {
          if ((DAT_0033591f != 0) && (cVar4 = FUN_000ed0ac(), cVar4 != '\0')) {
            FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 1276, "Unable to enable new players joining exchange") */
          }
          FUN_0002e8a7();
          goto LAB_00031a4a;
        }
        if ((iVar10 == -1) || ((byte)(&DAT_003358f3)[iVar5] >> 3 == 1)) {
          local_20 = local_20 + 1;
        }
        else {
          *(char *)(iVar10 + DAT_00199228) = *(char *)(iVar10 + DAT_00199228) + '\x01';
          iVar10 = (int)(char)(&DAT_003358f9)[iVar5];
          uVar8 = (uint)*(byte *)(iVar9 + iVar10);
          if (uVar8 == local_1c) {
            bVar1 = false;
          }
          else if ((int)local_1c < (int)uVar8) {
            bVar1 = true;
            uVar12 = (uint)(byte)(&DAT_00335373)[iVar10 * 0xe];
            local_24 = iVar10;
            local_1c = uVar8;
          }
        }
        if (((byte)(&DAT_003358f3)[iVar5] >> 3 == 1) && ((&DAT_003358f9)[iVar5] == '\r')) {
          uVar13 = FUN_00032e00();
          iVar5 = (int)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 != 0) {
            iVar9 = (int)DAT_002f10ce._3_1_;
            _DAT_00335206 = 0xc;
            DAT_00334a54 = -1;
            _DAT_00335202 = 0;
            DAT_0033520a = (uint)(ushort)(&DAT_003358f5)[iVar9 * 6];
            (&DAT_003358f3)[iVar9 * 0xc] = (&DAT_003358f3)[iVar9 * 0xc] & 7;
            DAT_0033520e = (uint)(ushort)(&DAT_003358f7)[iVar9 * 6];
            (&DAT_003358f3)[iVar9 * 0xc] = (&DAT_003358f3)[iVar9 * 0xc] | 0x10;
          }
        }
      }
      iVar5 = iVar5 + 0xc;
    }
    if (((local_20 == 0) && (uVar12 != 0)) && (bVar1)) {
      _DAT_0019d0c2 = uVar12;
      FUN_000e7714(&DAT_00334025,s__s__d_0016418b,DAT_003337f3,uVar12);
      DAT_0033516d = '\x01';
      DAT_00335172 = 1;
      DAT_0033516e = 4;
      DAT_00335176 = (int)DAT_002f10ce._3_1_ * (uint)*(byte *)(DAT_003351d2 + 10) +
                     *(int *)((int)&DAT_00335375 + local_24 * 0xe);
      DAT_0033517a = *(int *)((int)&DAT_00335379 + local_24 * 0xe);
      DAT_0033517e = (DAT_0033591f != 0) + 7;
      DAT_0033519a = DAT_00335176 - DAT_003d982c / 2;
      DAT_0033519e = DAT_0033517a - DAT_003d9830 / 2;
      if (DAT_0033519a < 0) {
        DAT_0033519a = 0;
      }
      else if (0x500 - DAT_003d982c < DAT_0033519a) {
        DAT_0033519a = 0x500 - DAT_003d982c;
      }
      if (DAT_0033519e < 0) {
        DAT_0033519e = 0;
      }
      else if (0x3c0 - DAT_003d9830 < DAT_0033519e) {
        DAT_0033519e = 0x3c0 - DAT_003d9830;
      }
      DAT_0033518a = DAT_00335182 << 8;
      DAT_0033518e = DAT_00335186 << 8;
      if (DAT_0033591f == 0) {
        DAT_00334a4c = 1;
      }
    }
  }
  else {
    iVar5 = FUN_00032d8c();
    if (iVar5 != 0) {
      uVar6 = 1;
      goto LAB_00032316;
    }
  }
  if ((DAT_0019d0bd & 0x10) == 0) {
    FUN_000ecabc();
  }
LAB_00031a4a:
  uVar6 = 0;
LAB_00032316:
  return CONCAT44(in_EDX,uVar6);
}

/******************************************************************************
 * Function : dk_number_players_0322e9 (Ghidra: FUN_000322e9)
 * Prototype: void dk_number_players_0322e9(void);
 * Address  : 0x322e9 (Size: 809 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp:1387 ("Invalid number of players")
 * Naming   : String 'Invalid number of players'
 * Callers  : 1 -> 0x2fda1
 * Callees  : 10 -> 0x32612, 0x327b5, 0xac370, 0xddaf0, 0xe6c1c, 0xe6d80, 0xe7714, 0xeb818, 0xf0870, 0x13a710
 * Strings  :
 *   - 0x1641ab: "frontmap.cpp"
 *   - 0x164191: "Invalid number of players"
 *   - 0x1641b8: "%s %d"
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000323f2) */

void FUN_000322e9(void)

{
  byte bVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint auStack_34 [5];
  int local_20;
  int local_1c;
  
  if (DAT_0033516d == '\0') {
    FUN_000327b5();
    DAT_003d9874 = 0;
    iVar6 = 0;
    for (iVar7 = 0; iVar7 < DAT_003358eb; iVar7 = iVar7 + 1) {
      if (DAT_003351fe <= (int)(uint)(byte)(&DAT_00335374)[iVar6]) {
        bVar1 = (&DAT_00335374)[iVar6];
        if (bVar1 < 3) {
          if (bVar1 != 2) goto LAB_000323ba;
        }
        else if ((3 < bVar1) && (bVar1 != 4)) {
LAB_000323ba:
          FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 1387, "Invalid number of players") */
          return;
        }
        FUN_0013a710();
      }
      iVar6 = iVar6 + 0xe;
    }
    iVar6 = 0;
    local_20 = 0;
    puVar4 = auStack_34 + 2;
    do {
      puVar5 = (undefined1 *)puVar4;
      if (((&DAT_003358f3)[iVar6] & 1) != 0) {
        iVar7 = 0;
        iVar3 = 0;
        if ((byte)(&DAT_003358f3)[iVar6] >> 3 != 1) {
          if ((byte)(&DAT_003358f3)[iVar6] >> 3 == 2) {
            uVar2 = (uint)(byte)(&DAT_003358fa)[iVar6];
            if (0xb < uVar2) {
              uVar2 = 0xb;
            }
            iVar7 = (&DAT_0017b854)[uVar2];
            iVar3 = (&DAT_0017b884)[uVar2];
          }
          else if ((&DAT_003358f9)[iVar6] == -1) {
            *(undefined4 *)((int)puVar4 + -4) = 0x32429;
            FUN_000eb818();
            local_1c = 8;
            iVar7 = extraout_ECX;
          }
          else {
            *(undefined4 *)((int)puVar4 + -4) = 0x3244f;
            FUN_000eb818();
            local_1c = 4;
            iVar7 = extraout_ECX_00;
          }
        }
        auStack_34[4] =
             ((uint)*(ushort *)((int)&DAT_003358f5 + iVar6) - DAT_00335182) + -0x12 + iVar7;
        auStack_34[3] =
             ((uint)*(ushort *)((int)&DAT_003358f7 + iVar6) - DAT_00335186) + -0x19 + iVar3;
        *(undefined4 *)((int)puVar4 + -4) = 0x324a7;
        FUN_0013a710();
        *(undefined4 *)((int)puVar4 + -4) = 0x324ae;
        iVar7 = FUN_000e6c1c();
        if (iVar7 != 0) {
          DAT_003d9874 = 0;
          puVar5 = (undefined1 *)((int)puVar4 + -4);
          *(uint *)((int)puVar4 + -4) = (uint)(byte)(&DAT_0017b844)[local_20];
          local_1c = auStack_34[3] + 0x20;
          *(undefined4 *)((int)puVar4 + -8) = 0x324f9;
          FUN_000f0870();
          *(undefined4 *)((int)puVar4 + -8) = 0x32509;
          FUN_000e6d80();
        }
      }
      local_20 = local_20 + 4;
      iVar6 = iVar6 + 0xc;
      puVar4 = (uint *)puVar5;
    } while (local_20 != 0x10);
    if ((DAT_00334a54 != -1) || (DAT_003351fa != -1)) {
      DAT_003d9874 = 0;
      auStack_34[2] = DAT_003351fa;
      if (DAT_00334a54 != -1) {
        auStack_34[2] = DAT_00334a54;
      }
      *(undefined4 *)(puVar5 + -4) = 0x32593;
      FUN_000e6c1c();
      puVar4 = (uint *)(puVar5 + -4);
      *(undefined4 *)(puVar5 + -4) = 0;
      *(undefined4 *)(puVar5 + -8) = 0x325db;
      FUN_000f0870();
      *(uint *)(puVar5 + -8) = (uint)(byte)(&DAT_00335373)[auStack_34[2] * 0xe];
      *(undefined4 *)(puVar5 + -0xc) = DAT_003337f3;
      *(char **)(puVar5 + -0x10) = s__s__d_001641b8;
      *(undefined **)(puVar5 + -0x14) = &DAT_00334025;
      *(undefined4 *)(puVar5 + -0x18) = 0x32601;
      FUN_000e7714();
      *(undefined4 *)(puVar5 + -8) = 0x3260d;
      FUN_000e6d80();
    }
  }
  else {
    FUN_000ac370();
    puVar4 = auStack_34 + 2;
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x32316;
  FUN_00032612();
  return;
}

/******************************************************************************
 * Function : sub_032612 (Ghidra: FUN_00032612)
 * Prototype: void sub_032612(void);
 * Address  : 0x32612 (Size: 294 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x322e9
 * Callees  : 1 -> 0xe8c83
 ******************************************************************************/
void FUN_00032612(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *extraout_ECX;
  int *piVar5;
  int extraout_ECX_00;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_00335182 / 2;
  iVar3 = DAT_00335186 / 2 << 2;
  for (iVar7 = 0; iVar7 < DAT_003d9838; iVar7 = iVar7 + 1) {
    iVar6 = 0;
    piVar4 = (int *)(DAT_003351a2 + *(int *)(DAT_003351a6 + iVar3));
    while (iVar6 < iVar2) {
      iVar6 = iVar6 + *piVar4;
      piVar5 = (int *)((int)piVar4 + *piVar4 + 4);
      if (iVar6 < iVar2) {
        iVar6 = iVar6 + *piVar5;
        piVar4 = piVar5 + 1;
      }
      else {
        if (iVar6 - iVar2 != 0) {
          FUN_000e8c83(iVar3,iVar7,iVar6 - iVar2);
          piVar5 = extraout_ECX;
        }
        piVar4 = piVar5 + 1;
        iVar6 = iVar6 + *piVar5;
      }
    }
    for (; iVar6 < iVar2 + DAT_003d9834; iVar6 = iVar6 + iVar1 + *piVar5) {
      iVar1 = *piVar4;
      FUN_000e8c83();
      piVar5 = (int *)(extraout_ECX_00 + iVar1);
      piVar4 = piVar5 + 1;
    }
    iVar3 = iVar3 + 4;
  }
  return;
}

/******************************************************************************
 * Function : sub_032738 (Ghidra: FUN_00032738)
 * Prototype: void sub_032738(void);
 * Address  : 0x32738 (Size: 125 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x31854, 0x36188
 * Callees  : 3 -> 0xe7714, 0xeaa28, 0xeae4c
 * Strings  :
 *   - 0x1641be: "%s\SOUND\ATLAS\GOOD%02d.WAV"
 *   - 0x1641da: "%s\SOUND\ATLAS\BAD%02d.WAV"
 ******************************************************************************/
void FUN_00032738(void)

{
  int in_EAX;
  
  if (in_EAX == 0) {
    FUN_000e7714(&DAT_0019cbac,s__s_SOUND_ATLAS_BAD_02d_WAV_001641da,&DAT_00333f77,DAT_002e78ea - 1)
    ;
    DAT_003351ee = 1;
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__s_SOUND_ATLAS_GOOD_02d_WAV_001641be,&DAT_00333f77,DAT_002e78ea);
    DAT_003351e6 = 1;
  }
  FUN_000eae4c();
  FUN_000eaa28();
  return;
}

/******************************************************************************
 * Function : sub_0327b5 (Ghidra: FUN_000327b5)
 * Prototype: void sub_0327b5(void);
 * Address  : 0x327b5 (Size: 80 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x31599, 0x322e9
 * Callees  : 1 -> 0xe8c83
 ******************************************************************************/
void FUN_000327b5(void)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < DAT_003d9830; iVar1 = iVar1 + 1) {
    FUN_000e8c83();
  }
  return;
}

/******************************************************************************
 * Function : sub_032805 (Ghidra: FUN_00032805)
 * Prototype: void sub_032805(void);
 * Address  : 0x32805 (Size: 220 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x31273, 0x31c23
 * Callees  : 1 -> 0xdc150
 ******************************************************************************/
void FUN_00032805(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((int)(DAT_003d9864 * (uint)DAT_0019cba6) < 8) {
    DAT_00335192 = DAT_00335192 + -8;
  }
  else {
    if ((int)((uint)DAT_0019cba6 * DAT_003d9864) < DAT_003d982c + -8) goto LAB_00032879;
    DAT_00335192 = DAT_00335192 + 8;
  }
  if (DAT_00335192 < -0x30) {
    DAT_00335192 = -0x30;
  }
  else if (0x30 < DAT_00335192) {
    DAT_00335192 = 0x30;
  }
LAB_00032879:
  iVar1 = FUN_000dc150();
  if (iVar1 < 8) {
    DAT_00335196 = DAT_00335196 + -8;
  }
  else {
    uVar2 = FUN_000dc150();
    if ((int)uVar2 < (int)((ulonglong)uVar2 >> 0x20)) {
      return;
    }
    DAT_00335196 = DAT_00335196 + 8;
  }
  if (-0x31 < DAT_00335196) {
    if (0x30 < DAT_00335196) {
      DAT_00335196 = 0x30;
    }
    return;
  }
  DAT_00335196 = 0xffffffd0;
  return;
}

/******************************************************************************
 * Function : sub_0328e1 (Ghidra: FUN_000328e1)
 * Prototype: void sub_0328e1(void);
 * Address  : 0x328e1 (Size: 205 bytes)
 * Module   : frontmap.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x31273, 0x31c23
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_000328e1(void)

{
  int iVar1;
  
  if (DAT_00335192 != 0) {
    DAT_00335182 = DAT_00335182 +
                   ((int)((DAT_00335192 + (DAT_00335192 >> 0x1f) * -4) -
                         (uint)((DAT_00335192 >> 0x1f) << 1 < 0)) >> 2);
    if (DAT_00335182 < 0) {
      DAT_00335182 = 0;
    }
    else if (0x500 - DAT_003d982c < DAT_00335182) {
      DAT_00335182 = 0x500 - DAT_003d982c;
    }
    if (DAT_00335192 < 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = -2;
    }
    DAT_00335192 = DAT_00335192 + iVar1;
  }
  if (DAT_00335196 != 0) {
    DAT_00335186 = DAT_00335186 +
                   ((int)((DAT_00335196 + (DAT_00335196 >> 0x1f) * -4) -
                         (uint)((DAT_00335196 >> 0x1f) << 1 < 0)) >> 2);
    if (DAT_00335186 < 0) {
      DAT_00335186 = 0;
    }
    else if (0x3c0 - DAT_003d9830 < DAT_00335186) {
      DAT_00335186 = 0x3c0 - DAT_003d9830;
    }
    if (DAT_00335196 < 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = -2;
    }
    DAT_00335196 = DAT_00335196 + iVar1;
  }
  return;
}

/******************************************************************************
 * Function : dk_enough_memory_game_structure_0329ae (Ghidra: FUN_000329ae)
 * Prototype: longlong dk_enough_memory_game_structure_0329ae(void);
 * Address  : 0x329ae (Size: 371 bytes)
 * Module   : frontmap.cpp [direct_file_string_xref]
 * OrigLine : frontmap.cpp:1916 ("Not enough memory in game structure for map"); frontmap.cpp:2007 ("Unable to load MAP WINDOW after generate")
 * Naming   : String 'Not enough memory in game structure for map'
 * Callers  : 2 -> 0x30ef8, 0x31a51
 * Callees  : 8 -> 0x150f0, 0x32b21, 0xdd920, 0xddaf0, 0xe7714, 0xe8c83, 0xe97a0, 0xe984c
 * Strings  :
 *   - 0x16423a: "frontmap.cpp"
 *   - 0x164261: "frontmap.cpp"
 *   - 0x1642b1: "frontmap.cpp"
 *   - 0x1642f7: "frontmap.cpp"
 *   - 0x1641f5: "LDATA"
 *   - 0x1641fd: "%s\DKMAP%02d.RAW"
 *   - 0x16420e: "Not enough memory in game structure for map"
 *   - 0x164247: "Unable to load MAP SCREEN"
 *   - 0x16426e: "LDATA"
 *   - 0x164276: "%s\DKWIND%02d.DAT"
 *   - 0x164288: "Unable to load MAP WINDOW after generate"
 *   - 0x1642be: "%s\LDATA\DKMAP%02d.PAL"
 *   - 0x1642d5: "Unable to load MAP SCREEN PALETTE"
 ******************************************************************************/
longlong FUN_000329ae(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint in_EDX;
  
  FUN_000dd920();
  uVar1 = FUN_000dd920();
  FUN_000e7714(&DAT_0019cbac,s__s_DKMAP_02d_RAW_001641fd,uVar1);
  iVar2 = FUN_000e97a0();
  if ((iVar2 < 0x12c0c6) && (iVar3 = FUN_000e984c(), iVar3 == iVar2)) {
    DAT_00335168 = 0x1badec;
    FUN_000dd920(extraout_ECX);
    uVar1 = FUN_000dd920();
    FUN_000e7714(&DAT_0019cbac,s__s_DKWIND_02d_DAT_00164276,uVar1); /* 0x164276="%s\DKWIND%02d.DAT" */
    FUN_000150f0();
    iVar2 = FUN_000e984c();
    if (iVar2 != -1) {
      DAT_003351a6 = DAT_002f2223;
      FUN_000e8c83();
      FUN_000e7714(&DAT_0019cbac,s__s_LDATA_DKMAP_02d_PAL_001642be,&DAT_002ee923,extraout_ECX_00);
      FUN_000150f0();
      iVar2 = FUN_000e984c();
      if (iVar2 == 0x300) {
        DAT_003351a2 = DAT_003351a6 + 0xb40;
        return CONCAT44(in_EDX,1);
      }
    }
    FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 1916, "Not enough memory in game structure for map") */
    FUN_00032b21();
  }
  else {
    FUN_000ddaf0(); /* LbErrorLog("frontmap.cpp", line 2007, "Unable to load MAP WINDOW after generate") */
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_032b21 (Ghidra: FUN_00032b21)
 * Prototype: void sub_032b21(void);
 * Address  : 0x32b21 (Size: 213 bytes)
 * Module   : frontmap.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x31213, 0x31bd6, 0x329ae
 * Callees  : 2 -> 0xe6a10, 0xe8c83
 ******************************************************************************/
void FUN_00032b21(void)

{
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e6a10();
  FUN_000e8c83();
  return;
}

/******************************************************************************
 * Function : sub_032bf6 (Ghidra: FUN_00032bf6)
 * Prototype: void sub_032bf6(void);
 * Address  : 0x32bf6 (Size: 314 bytes)
 * Module   : frontmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x32d8c
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
void FUN_00032bf6(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = DAT_0033519e - DAT_00335186;
  if ((DAT_0033519a != DAT_00335182) || (iVar2 != 0)) {
    FUN_000e69fc();
    FUN_000e69fc();
    uVar3 = FUN_000e69fc();
    iVar1 = (int)uVar3;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (0x3b < iVar1) {
      iVar1 = 0x3b;
    }
    if (iVar1 < 2) {
      DAT_00335182 = DAT_0033519a;
      DAT_00335186 = DAT_0033519e;
    }
    else {
      DAT_0033518a = DAT_0033518a + ((int)((ulonglong)uVar3 >> 0x20) << 8) / iVar1;
      DAT_0033518e = DAT_0033518e + (iVar2 * 0x100) / iVar1;
      DAT_00335182 = DAT_0033518a >> 8;
      DAT_00335186 = DAT_0033518e >> 8;
    }
    if (DAT_00335182 < 0) {
      DAT_00335182 = 0;
    }
    else if (0x500 - DAT_003d982c < DAT_00335182) {
      DAT_00335182 = 0x500 - DAT_003d982c;
    }
    if (DAT_00335186 < 0) {
      DAT_00335186 = 0;
    }
    else if (0x3c0 - DAT_003d9830 < DAT_00335186) {
      DAT_00335186 = 0x3c0 - DAT_003d9830;
    }
  }
  if ((0 < DAT_003351f6) &&
     (iVar2 = DAT_00335172 + -1 >> 0x1f,
     DAT_003351f6 = ((int)((DAT_00335172 + -1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2) * -5 +
                    0x100, DAT_003351f6 < 0)) {
    DAT_003351f6 = 0;
  }
  return;
}

/******************************************************************************
 * Function : sub_032d30 (Ghidra: FUN_00032d30)
 * Prototype: void sub_032d30(void);
 * Address  : 0x32d30 (Size: 92 bytes)
 * Module   : frontmap.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x32d8c
 * Callees  : 2 -> 0xe846c, 0xe8d80
 ******************************************************************************/
void FUN_00032d30(void)

{
  if (DAT_0033516e < 0) {
    if (DAT_00335172 < 0x79) {
      return;
    }
    if (DAT_00335172 + DAT_0033516e < 0x79) {
      FUN_000e846c(&DAT_00334740);
      return;
    }
  }
  else if (DAT_00335172 < 0x78) {
    return;
  }
  FUN_000e8d80();
  return;
}

/******************************************************************************
 * Function : sub_032d8c (Ghidra: FUN_00032d8c)
 * Prototype: undefined4 sub_032d8c(void);
 * Address  : 0x32d8c (Size: 116 bytes)
 * Module   : frontmap.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x31854, 0x31def
 * Callees  : 6 -> 0x2e8a7, 0x32bf6, 0x32d30, 0xe7904, 0xe79fc, 0xe8f24
 ******************************************************************************/
undefined4 FUN_00032d8c(void)

{
  if (DAT_0033516e == 4) {
    FUN_00032bf6();
  }
  DAT_00335172 = DAT_00335172 + DAT_0033516e;
  if ((DAT_00335172 < 2) || (0xef < DAT_00335172)) {
    FUN_000e8f24();
    DAT_0033516d = 0;
    if (DAT_0033517e != 0) {
      FUN_0002e8a7();
      FUN_000e7904(0);
      FUN_000e79fc();
      DAT_0033517e = 0;
      return 1;
    }
  }
  FUN_00032d30();
  return 0;
}

/******************************************************************************
 * Function : sub_032e00 (Ghidra: FUN_00032e00)
 * Prototype: undefined8 sub_032e00(void);
 * Address  : 0x32e00 (Size: 274 bytes)
 * Module   : frontmap.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x31def
 * Callees  : 1 -> 0x32f12
 ******************************************************************************/
undefined8 FUN_00032e00(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)DAT_002f10ce._3_1_;
  if (iVar1 != in_EAX) {
    if ((byte)(&DAT_003358f3)[iVar1 * 0xc] >> 3 != 2) {
      if ((byte)(&DAT_003358f3)[iVar1 * 0xc] >> 3 == 1) {
        iVar4 = (ushort)(&DAT_003358f5)[iVar1 * 6] - 0x1f;
        iVar1 = (ushort)(&DAT_003358f7)[iVar1 * 6] - 0x1b;
        iVar5 = iVar4 + (uint)*(byte *)(DAT_003351c2 + 0x3a);
        iVar3 = DAT_003351c2 + 0x36;
      }
      else if ((&DAT_003358f9)[iVar1 * 0xc] == -1) {
        iVar4 = (ushort)(&DAT_003358f5)[iVar1 * 6] - 0x13;
        iVar1 = (ushort)(&DAT_003358f7)[iVar1 * 6] - 0x19;
        iVar5 = iVar4 + (uint)*(byte *)(DAT_003351c2 + 10);
        iVar3 = DAT_003351c2 + 6;
      }
      else {
        iVar4 = (ushort)(&DAT_003358f5)[iVar1 * 6] - 0x14;
        iVar1 = (ushort)(&DAT_003358f7)[iVar1 * 6] - 0xe;
        iVar5 = iVar4 + (uint)*(byte *)(DAT_003351c2 + 0x6a);
        iVar3 = DAT_003351c2 + 0x66;
      }
      iVar1 = FUN_00032f12(iVar4,iVar1,iVar5,iVar1 + (uint)*(byte *)(iVar3 + 5),
                           (ushort)(&DAT_003358f5)[in_EAX * 6] - 7,
                           (ushort)(&DAT_003358f7)[in_EAX * 6] - 0xd,
                           (ushort)(&DAT_003358f5)[in_EAX * 6] + 0x17,
                           (ushort)(&DAT_003358f7)[in_EAX * 6] + 7);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 1;
      }
      goto LAB_00032f0c;
    }
  }
  uVar2 = 0;
LAB_00032f0c:
  return CONCAT44(in_EDX,uVar2);
}

