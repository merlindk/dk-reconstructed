/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: eyelens.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 7
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_026e5e (Ghidra: FUN_00026e5e)
 * Prototype: undefined8 sub_026e5e(void);
 * Address  : 0x26e5e (Size: 239 bytes)
 * Module   : eyelens.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x27390, 0x63a25, 0x63b6d, 0xdc440
 ******************************************************************************/
undefined8 FUN_00026e5e(void)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  short *extraout_ECX;
  undefined4 in_EDX;
  int iVar4;
  uint *puVar5;
  uint uStack_24;
  int local_20;
  uint local_1c;
  
  local_1c = 0;
  psVar3 = &DAT_002e0589;
  iVar4 = 0;
  do {
    if ((int)(uint)DAT_002eb543 <= (int)local_1c) {
      uVar2 = 0;
LAB_00026db6:
      return CONCAT44(in_EDX,uVar2);
    }
    if (((((&DAT_0019d0c8)[iVar4] & 1) != 0) && ((&DAT_0019d0f4)[iVar4] == '\x01')) &&
       (local_20 = local_1c * 0x1508, *psVar3 != 0)) {
      uStack_24 = 0x26ed4;
      iVar1 = FUN_000dc440();
      psVar3 = extraout_ECX;
      if (iVar1 < 0x600) {
        uStack_24 = 0x26ee6;
        FUN_00063a25();
        puVar5 = (uint *)&local_20;
        if (((DAT_002eb543 != local_1c) &&
            (iVar4 = (uint)*(byte *)(in_EAX + 0x1a) + local_20, puVar5 = (uint *)&local_20,
            (byte)(&DAT_002e0ea3)[iVar4] < 2)) &&
           (puVar5 = (uint *)&local_20, (&DAT_002e1a12)[iVar4] == '\0')) {
          uStack_24 = (uint)*(ushort *)(in_EAX + 0x1b);
          puVar5 = &uStack_24;
          FUN_00027390();
          (&DAT_002e1a12)[(uint)*(byte *)(in_EAX + 0x1a) + local_20] = 1;
        }
        *(undefined4 *)((int)puVar5 + -4) = 0x26f3e;
        FUN_00063b6d();
        uVar2 = 1;
        goto LAB_00026db6;
      }
    }
    local_1c = local_1c + 1;
    iVar4 = iVar4 + 0x4ef;
    psVar3 = psVar3 + 0xa84;
  } while( true );
}

/******************************************************************************
 * Function : sub_026f4d (Ghidra: FUN_00026f4d)
 * Prototype: undefined8 sub_026f4d(void);
 * Address  : 0x26f4d (Size: 93 bytes)
 * Module   : eyelens.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x24998, 0x63b6d, 0x64a5f, 0x6e538
 ******************************************************************************/
undefined8 FUN_00026f4d(void)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_00024998();
  uVar2 = 0;
  FUN_0006e538(3,0,2,0x100);
  cVar1 = FUN_00064a5f();
  if (cVar1 == '\0') {
    FUN_00063b6d();
  }
  return CONCAT44(uVar2,1);
}

/******************************************************************************
 * Function : sub_026faa (Ghidra: FUN_00026faa)
 * Prototype: undefined8 sub_026faa(void);
 * Address  : 0x26faa (Size: 95 bytes)
 * Module   : eyelens.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x63b6d, 0x6eeaf, 0x8608c, 0xd0f50
 ******************************************************************************/
undefined8 FUN_00026faa(void)

{
  int iVar1;
  undefined4 in_EDX;
  
  iVar1 = FUN_000d0f50();
  if ((iVar1 != 0) && (*(short *)(iVar1 + 10) == 1)) {
    FUN_0006eeaf();
    FUN_0008608c(0);
    return 0xffffffff;
  }
  FUN_00063b6d();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_eyelens_memory_already_allocated_02700c (Ghidra: FUN_0002700c)
 * Prototype: void dk_eyelens_memory_already_allocated_02700c(void);
 * Address  : 0x2700c (Size: 212 bytes)
 * Module   : eyelens.cpp [direct_file_string_xref]
 * OrigLine : eyelens.cpp:17 ("EyeLens Memory already allocated"); eyelens.cpp:58 ("Unsupported screen mode")
 * Naming   : String 'EyeLens Memory already allocated'
 * Callers  : 2 -> 0x27320, 0x36ff4
 * Callees  : 4 -> 0x270e0, 0xddaf0, 0xe9484, 0xe94b0
 * Strings  :
 *   - 0x1627bd: "eyelens.cpp"
 *   - 0x1627e1: "eyelens.cpp"
 *   - 0x16279c: "EyeLens Memory already allocated"
 *   - 0x1627c9: "Unsupported screen mode"
 ******************************************************************************/
void FUN_0002700c(void)

{
  if ((DAT_00333193 != 0) || (DAT_00333197 != 0)) {
    FUN_000ddaf0(); /* LbErrorLog("eyelens.cpp", line 17, "EyeLens Memory already allocated") */
    FUN_000270e0();
  }
  if (0xf < DAT_00334065) {
    if (DAT_003d9878 < 10) {
      if (DAT_003d9878 == 1) {
        DAT_00333193 = FUN_000e9484();
        if (DAT_00333193 != 0) {
          DAT_00333197 = FUN_000e9484();
          if (DAT_00333197 != 0) goto LAB_0002708c;
          FUN_000e94b0();
          DAT_00333193 = 0;
        }
        goto LAB_00027046;
      }
    }
    else if ((DAT_003d9878 < 0xb) || (DAT_003d9878 == 0xd)) {
      DAT_00333193 = FUN_000e9484();
      if (DAT_00333193 != 0) {
LAB_0002708c:
        DAT_0019d0bd = DAT_0019d0bd | 2;
        return;
      }
      DAT_00333193 = 0;
      goto LAB_00027046;
    }
    FUN_000ddaf0(); /* LbErrorLog("eyelens.cpp", line 58, "Unsupported screen mode") */
  }
LAB_00027046:
  DAT_0019d0bd = DAT_0019d0bd & 0xfd;
  return;
}

/******************************************************************************
 * Function : sub_0270e0 (Ghidra: FUN_000270e0)
 * Prototype: void sub_0270e0(void);
 * Address  : 0x270e0 (Size: 80 bytes)
 * Module   : eyelens.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 6 -> 0x2700c, 0x2c833, 0x36ff4, 0x5d7b5, 0x6a689, 0x6aac0
 * Callees  : 1 -> 0xe94b0
 ******************************************************************************/
void FUN_000270e0(void)

{
  if (DAT_00333193 != 0) {
    FUN_000e94b0();
    DAT_00333193 = 0;
  }
  if (DAT_00333197 != 0) {
    FUN_000e94b0();
    DAT_00333197 = 0;
  }
  DAT_0019d0c6 = 0;
  DAT_0019d0c7 = 0;
  DAT_0019d0bd = DAT_0019d0bd & 0xfd;
  return;
}

/******************************************************************************
 * Function : dk_data_frac_dat_027130 (Ghidra: FUN_00027130)
 * Prototype: void dk_data_frac_dat_027130(void);
 * Address  : 0x27130 (Size: 496 bytes)
 * Module   : eyelens.cpp [direct_file_string_xref]
 * OrigLine : eyelens.cpp:159 ("Invalid lens effect")
 * Naming   : String 'data\frac%02d.dat'
 * Callers  : 5 -> 0x27320, 0x80a94, 0x80c84, 0x85aa4, 0x85f80
 * Callees  : 7 -> 0x2d861, 0x4de8c, 0x51a06, 0x51a3f, 0xddaf0, 0xe7714, 0xe984c
 * Strings  :
 *   - 0x162825: "eyelens.cpp"
 *   - 0x1627ed: "data\frac%02d.dat"
 *   - 0x1627ff: "data\frac%02d.dat"
 *   - 0x162811: "Invalid lens effect"
 ******************************************************************************/
void FUN_00027130(void)

{
  uint in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18;
  
  if ((DAT_0019d0bd & 2) == 0) {
    return;
  }
  if ((0xc < DAT_0019d0c7) && (DAT_0019d0c7 < 0xf)) {
    *(undefined4 *)(&DAT_0019d0cf + DAT_002f10ce._3_1_ * 0x4ef) = 0;
    DAT_0019d0c6 = 0;
  }
  if (in_EAX == 0) {
    DAT_0019d0c6 = 0;
    DAT_0019d0c7 = 0;
    return;
  }
  local_18 = (undefined1)in_EAX;
  if (DAT_0019d0c6 == in_EAX) {
    DAT_0019d0c7 = local_18;
    return;
  }
  if (in_EAX < 4) {
    if (in_EAX == 0) {
LAB_000272c0:
      FUN_000ddaf0(); /* LbErrorLog("eyelens.cpp", line 159, "Invalid lens effect") */
      DAT_0019d0c6 = 0;
      DAT_0019d0c7 = 0;
      return;
    }
    if (in_EAX < 3) {
      FUN_0004de8c();
    }
    else {
      FUN_0002d861();
    }
  }
  else {
    if (in_EAX < 0xc) {
      FUN_000e7714(&DAT_0019cbac,s_data_frac_02d_dat_001627ed,in_EAX - 4);
    }
    else {
      if (0xc < in_EAX) {
        uVar2 = DAT_00199220;
        if ((in_EAX < 0xe) || (uVar2 = DAT_00199224, in_EAX == 0xe)) {
          iVar1 = (int)DAT_002f10ce._3_1_;
          *(undefined4 *)(&DAT_0019d591 + iVar1 * 0x4ef) = uVar2;
          *(undefined4 *)(&DAT_0019d0cf + iVar1 * 0x4ef) = uVar2;
          DAT_0019d0c6 = local_18;
          DAT_0019d0c7 = local_18;
          return;
        }
        goto LAB_000272c0;
      }
      FUN_000e7714(&DAT_0019cbac,s_data_frac_02d_dat_001627ff,in_EAX - 4);
    }
    FUN_000e984c();
    FUN_00051a06();
    FUN_00051a3f();
  }
  DAT_0019d0c7 = local_18;
  DAT_0019d0c6 = local_18;
  return;
}

/******************************************************************************
 * Function : sub_027320 (Ghidra: FUN_00027320)
 * Prototype: void sub_027320(void);
 * Address  : 0x27320 (Size: 37 bytes)
 * Module   : eyelens.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2c833, 0x6a689
 * Callees  : 2 -> 0x2700c, 0x27130
 ******************************************************************************/
void FUN_00027320(void)

{
  int extraout_EDX;
  
  FUN_0002700c();
  if (((DAT_0019d0bd & 2) != 0) && (extraout_EDX != 0)) {
    DAT_0019d0c7 = 0;
    FUN_00027130();
  }
  return;
}

