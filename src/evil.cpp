/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: evil.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 30
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_02778e (Ghidra: FUN_0002778e)
 * Prototype: void sub_02778e(void);
 * Address  : 0x2778e (Size: 69 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 5 -> 0x63a25, 0x708fa, 0x70a3c, 0x70ac6, 0x8608c
 * Callees  : 2 -> 0x275f6, 0x277d3
 ******************************************************************************/
void FUN_0002778e(void)

{
  int iVar1;
  int extraout_ECX;
  byte *pbVar2;
  
  for (pbVar2 = &DAT_002e7091; pbVar2 < (byte *)0x2e789c; pbVar2 = pbVar2 + 0x15) {
    if (((*pbVar2 & 1) != 0) && (pbVar2[0xb] != 3)) {
      iVar1 = FUN_000277d3();
      if (iVar1 == extraout_ECX) {
        FUN_000275f6();
      }
    }
  }
  return;
}

/******************************************************************************
 * Function : sub_0277d3 (Ghidra: FUN_000277d3)
 * Prototype: longlong sub_0277d3(void);
 * Address  : 0x277d3 (Size: 81 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x2778e, 0x27892
 * Callees  : 0 -> 
 ******************************************************************************/
longlong FUN_000277d3(void)

{
  byte bVar1;
  int in_EAX;
  uint in_EDX;
  bool bVar2;
  
  bVar1 = (&DAT_002e7087)[in_EAX * 0x15];
  if (bVar1 < 0xe) {
    if (bVar1 < 6) {
      bVar2 = bVar1 == 3;
    }
    else {
      if (bVar1 < 7) goto LAB_000277f3;
      bVar2 = bVar1 == 10;
    }
LAB_0002781e:
    if (!bVar2) goto LAB_00027820;
  }
  else if (0xe < bVar1) {
    if (bVar1 < 0x11) {
      bVar2 = bVar1 == 0x10;
      goto LAB_0002781e;
    }
    if ((0x11 < bVar1) && ((bVar1 < 0x18 || (0x1a < bVar1)))) goto LAB_00027820;
  }
LAB_000277f3:
  if (*(int *)(&DAT_002e7088 + in_EAX * 0x15) != 0) {
    return CONCAT44(in_EDX,(&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + in_EAX * 0x15)]);
  }
LAB_00027820:
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_027892 (Ghidra: FUN_00027892)
 * Prototype: void sub_027892(void);
 * Address  : 0x27892 (Size: 176 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xde6a8
 * Callees  : 2 -> 0x277d3, 0x52f78
 ******************************************************************************/
void FUN_00027892(void)

{
  byte *pbVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0xc;
  do {
    uVar4 = FUN_000277d3();
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      pbVar1 = (byte *)(&DAT_001ae9fc)[*(int *)(&DAT_002e7088 + iVar2)];
      if (((pbVar1[0x1f] == 5) && (((*pbVar1 & 0x10) != 0 || ((pbVar1[1] & 2) != 0)))) ||
         ((int)(char)pbVar1[6] != (uint)(byte)(&DAT_002e7086)[iVar2])) {
        *(undefined4 *)(&DAT_002e707e + iVar2) = 0;
        *(undefined4 *)(&DAT_002e7082 + iVar2) = 0;
      }
      else {
        *(uint *)(&DAT_002e707e + iVar2) = (uint)*(ushort *)(pbVar1 + 0xd);
        *(uint *)(&DAT_002e7082 + iVar2) = (uint)*(ushort *)(pbVar1 + 0xf);
      }
    }
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  iVar3 = 0;
  do {
    if (((&DAT_0019d0c8)[iVar3] & 1) != 0) {
      FUN_00052f78();
      iVar3 = extraout_EDX;
    }
    iVar3 = iVar3 + 0x4ef;
  } while (iVar3 != 0x18ab);
  return;
}

/******************************************************************************
 * Function : sub_027944 (Ghidra: FUN_00027944)
 * Prototype: undefined4 sub_027944(void);
 * Address  : 0x27944 (Size: 43 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x666a8, 0xcb33c
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00027944(void)

{
  int in_EAX;
  int iVar1;
  ushort in_DX;
  
  iVar1 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  if ((in_DX != *(ushort *)(&DAT_002e910d + iVar1)) &&
     ((*(ushort *)(&DAT_002e910f + iVar1) & in_DX) == 0)) {
    return 0;
  }
  return 1;
}

/******************************************************************************
 * Function : sub_02796f (Ghidra: FUN_0002796f)
 * Prototype: undefined8 sub_02796f(void);
 * Address  : 0x2796f (Size: 1848 bytes)
 * Module   : evil.cpp [callgraph_affinity_to_following_unit]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 18 -> 0x239ee, 0x274ad, 0x28149, 0x49e95, 0x4d683, 0x51374, 0x64a5f, 0x64ae7, 0x66334, 0x67fa9 ...
 ******************************************************************************/
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0002796f(void)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_EDX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  uint auStack_44 [3];
  undefined1 local_38 [8];
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined *local_20;
  uint local_1c;
  
  puVar8 = (undefined4 *)local_38;
  iVar4 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  local_20 = &DAT_002e910d + iVar4;
  if (1 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x9a))) {
    if ((*(byte *)(iVar1 + 0xad) & 0x10) == 0) {
      puVar7 = (undefined4 *)local_38;
      if (((*(short *)(iVar1 + 0x68) == 0) &&
          (puVar7 = (undefined4 *)local_38, (&DAT_002e9124)[iVar4] != '\0')) &&
         (puVar7 = (undefined4 *)local_38, 0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2c7)))) {
        *(int *)(iVar1 + 0x2c7) = DAT_002e8bee;
        auStack_44[2] = (uint)(byte)(&DAT_002e9124)[(uint)*(byte *)(in_EAX + 0x1a) * 0xe6];
        puVar8 = auStack_44 + 2;
        puVar7 = auStack_44 + 2;
        auStack_44[1] = 0x27a26;
        iVar4 = FUN_000ca568();
        if (iVar4 != 0) goto LAB_000279bc;
        if ((int)*(char *)(in_EAX + 6) == (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
          if (*(short *)(&DAT_002e05b0 +
                        (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef] * 0x1508) != 0) {
            auStack_44[1] = 0x27a7c;
            FUN_000ca8c0();
          }
          auStack_44[1] = 0x27ab6;
          FUN_00051374();
        }
        if (*(short *)(&DAT_002e05b0 + *(char *)(in_EAX + 6) * 0x1508) != 0) {
          auStack_44[1] = (uint)*(ushort *)(in_EAX + 0x1b);
          puVar7 = auStack_44 + 1;
          FUN_000274ad();
        }
      }
      if ((*(short *)(iVar1 + 0x2b1) != 0) &&
         (0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2e7)))) {
        puVar7[0xffffffff] = 0x27b0f;
        iVar4 = FUN_00028149();
        if (iVar4 != 0) goto LAB_00027c7a;
        *(int *)(iVar1 + 0x2e7) = DAT_002e8bee;
      }
      if ((*(short *)(&DAT_002e910d + (uint)*(byte *)(in_EAX + 0x1a) * 0xe6) != 0) &&
         (0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2cf)))) {
        puVar7[0xffffffff] = 0x27b58;
        iVar4 = FUN_00028149();
        if (iVar4 != 0) goto LAB_00027c7a;
        *(int *)(iVar1 + 0x2cf) = DAT_002e8bee;
      }
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      local_24 = DAT_002e8bf6 % 3;
      puVar8 = puVar7;
      for (local_30 = 0; local_30 < 3; local_30 = local_30 + 1) {
        puVar10 = (undefined1 *)puVar8;
        if (local_24 == 0) {
          if ((*(short *)(iVar1 + 0x68) != 0) &&
             (0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2c7)))) {
            *(int *)(iVar1 + 0x2c7) = DAT_002e8bee;
            *(undefined4 *)((int)puVar8 + -4) = 0x27be8;
            iVar4 = FUN_000cc4a0();
            if (iVar4 != 0) goto LAB_00027bf0;
          }
        }
        else if (local_24 < 2) {
          if (((local_20[9] != '\0') && (local_20[0x17] != '\0')) &&
             (200 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2d7)))) {
            *(int *)(iVar1 + 0x2d7) = DAT_002e8bee;
            *(undefined4 *)((int)puVar8 + -4) = 0x27c3d;
            cVar2 = FUN_0006dda0();
            if (cVar2 != '\0') {
              if (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x68) == 0) {
                *(undefined4 *)((int)puVar8 + -4) = 0x27c5e;
                iVar4 = FUN_0004d683();
                if (iVar4 == 0) goto LAB_00028015;
              }
              *(undefined4 *)((int)puVar8 + -4) = 0x27c72;
              cVar2 = FUN_00064a5f();
              bVar11 = cVar2 == '\0';
LAB_00027c74:
              puVar10 = (undefined1 *)puVar8;
              if (!bVar11) goto LAB_00027c7a;
            }
          }
        }
        else if ((local_24 == 2) && (0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2d3)))) {
          *(int *)(iVar1 + 0x2d3) = DAT_002e8bee;
          uVar6 = (uint)*(ushort *)(local_20 + 2);
          if (uVar6 != 0) {
            iVar4 = 0;
            for (; uVar6 != 0; uVar6 = uVar6 >> 1) {
              iVar4 = iVar4 + 1;
            }
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            local_2c = DAT_002e8bf6 >> 0xd;
            DAT_002e8bf6 = local_2c | DAT_002e8bf6 * 0x80000;
            local_2c = local_2c & 0x1ff;
            local_28 = (uint)(0x200 / (longlong)iVar4);
            local_1c = local_28;
            if ((local_20[2] & 8) != 0) {
              if (local_28 < local_2c) {
                *(undefined4 *)((int)puVar8 + -4) = 0x27d13;
                iVar4 = FUN_00075b48();
                if (iVar4 != 0) {
                  *(undefined4 *)((int)puVar8 + -4) = 1;
                  *(undefined4 *)((int)puVar8 + -8) = 0x27d2b;
                  iVar4 = FUN_000ca568();
                  puVar10 = (undefined1 *)((int)puVar8 + -4);
                  if (iVar4 != 0) {
                    *(undefined4 *)((int)puVar8 + -8) = 0x27d38;
                    sVar3 = FUN_000cb33c();
                    puVar10 = (undefined1 *)((int)puVar8 + -4);
                    if (sVar3 != 0) goto LAB_00027c7a;
                  }
                }
              }
              else {
                local_1c = local_28 * 2;
              }
            }
            puVar9 = puVar10;
            if ((local_20[2] & 4) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)(puVar10 + -4) = 0x27d5f;
                iVar4 = FUN_00066334();
                if (iVar4 != 0) {
                  *(undefined4 *)(puVar10 + -4) = 1;
                  *(undefined4 *)(puVar10 + -8) = 0x27d77;
                  iVar4 = FUN_000ca568();
                  puVar9 = puVar10 + -4;
                  if (iVar4 != 0) {
                    *(undefined4 *)(puVar10 + -8) = 0x27d84;
                    sVar3 = FUN_000cb33c();
                    puVar9 = puVar10 + -4;
                    if (sVar3 != 0) goto LAB_00027c7a;
                  }
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            puVar10 = puVar9;
            if ((local_20[2] & 0x10) != 0) {
              if (local_1c < local_2c) {
                if (local_20[0x9a] != '\0') {
                  *(undefined4 *)(puVar9 + -4) = 1;
                  *(undefined4 *)(puVar9 + -8) = 0x27dc5;
                  iVar4 = FUN_000ca568();
                  puVar10 = puVar9 + -4;
                  if (iVar4 != 0) {
                    *(undefined4 *)(puVar9 + -8) = 0x27dd2;
                    sVar3 = FUN_000cb33c();
                    puVar10 = puVar9 + -4;
                    if (sVar3 != 0) goto LAB_00027c7a;
                  }
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            puVar9 = puVar10;
            if ((local_20[2] & 0x20) != 0) {
              if (local_1c < local_2c) {
                if (local_20[0x25] != '\0') {
                  *(undefined4 *)(puVar10 + -4) = 0x27e03;
                  iVar4 = FUN_00067fa9();
                  if (iVar4 != 0) {
                    *(undefined4 *)(puVar10 + -4) = 1;
                    *(undefined4 *)(puVar10 + -8) = 0x27e1b;
                    iVar4 = FUN_000ca568();
                    puVar9 = puVar10 + -4;
                    if (iVar4 != 0) {
                      *(undefined4 *)(puVar10 + -8) = 0x27e28;
                      sVar3 = FUN_000cb33c();
                      puVar9 = puVar10 + -4;
                      if (sVar3 != 0) goto LAB_00027c7a;
                    }
                  }
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            puVar10 = puVar9;
            if ((local_20[2] & 0x40) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)(puVar9 + -4) = 1;
                *(undefined4 *)(puVar9 + -8) = 0x27e5d;
                iVar4 = FUN_000ca568();
                puVar10 = puVar9 + -4;
                if (iVar4 != 0) {
                  *(undefined4 *)(puVar9 + -8) = 0x27e6a;
                  sVar3 = FUN_000cb33c();
                  puVar10 = puVar9 + -4;
                  if (sVar3 != 0) goto LAB_00027c7a;
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            puVar9 = puVar10;
            if ((local_20[3] & 2) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)(puVar10 + -4) = 1;
                *(undefined4 *)(puVar10 + -8) = 0x27e9f;
                iVar4 = FUN_000ca568();
                puVar9 = puVar10 + -4;
                if (iVar4 != 0) {
                  *(undefined4 *)(puVar10 + -8) = 0x27eac;
                  sVar3 = FUN_000cb33c();
                  puVar9 = puVar10 + -4;
                  if (sVar3 != 0) goto LAB_00027c7a;
                }
              }
              else {
                local_1c = local_1c + local_28;
              }
            }
            puVar8 = (undefined4 *)puVar9;
            if ((local_20[3] & 0x20) != 0) {
              puVar10 = puVar9;
              if (local_1c < local_2c) {
                *(undefined4 *)(puVar9 + -4) = 0x27ed9;
                iVar4 = FUN_00049e95();
                if (iVar4 != 0) {
                  puVar10 = puVar9 + -4;
                  puVar8 = (undefined4 *)(puVar9 + -4);
                  *(undefined4 *)(puVar9 + -4) = 1;
                  *(undefined4 *)(puVar9 + -8) = 0x27ef1;
                  iVar4 = FUN_000ca928();
                  if (iVar4 != 0) goto LAB_000279bc;
                }
              }
              local_1c = local_1c + local_28;
              puVar8 = (undefined4 *)puVar10;
            }
            if ((local_20[3] & 1) != 0) {
              if (local_1c < local_2c) {
                *(undefined4 *)((int)puVar8 + -4) = 0x27f22;
                FUN_00064ae7();
                uVar5 = 1;
                *(undefined2 *)(iVar1 + 0x9a) = 0;
                goto LAB_00028ba7;
              }
              local_1c = local_1c + local_28;
            }
            if ((local_20[3] & 0x40) != 0) {
              if (local_1c < local_2c) goto LAB_000279bc;
              local_1c = local_1c + local_28;
            }
            puVar9 = (undefined1 *)puVar8;
            if (((local_20[3] & 0x10) != 0) && (local_1c < local_2c)) {
              *(undefined4 *)((int)puVar8 + -4) = 1;
              *(undefined4 *)((int)puVar8 + -8) = 0x27f81;
              iVar4 = FUN_000ca568();
              puVar9 = (undefined1 *)((int)puVar8 + -4);
              if (iVar4 != 0) {
                *(undefined4 *)((int)puVar8 + -8) = 0x27f8e;
                sVar3 = FUN_000cb33c();
                puVar9 = (undefined1 *)((int)puVar8 + -4);
                if (sVar3 != 0) goto LAB_00027c7a;
              }
            }
            DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
            DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
            puVar10 = puVar9;
            if (DAT_002e8bf6 % 100 == 0) {
              puVar8 = (undefined4 *)(puVar9 + -4);
              *(undefined4 *)(puVar9 + -4) = 1;
              *(undefined4 *)(puVar9 + -8) = 0x27fde;
              iVar4 = FUN_000ca568();
              puVar10 = puVar9 + -4;
              if (iVar4 != 0) {
                *(undefined4 *)(puVar9 + -8) = 0x27feb;
                sVar3 = FUN_000cb33c();
                bVar11 = sVar3 == 0;
                goto LAB_00027c74;
              }
            }
          }
        }
LAB_00028015:
        local_24 = (int)(local_24 + 1) % 3;
        puVar8 = (undefined4 *)puVar10;
      }
      if (0x80 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x2cb))) {
        *(int *)(iVar1 + 0x2cb) = DAT_002e8bee;
        *(undefined4 *)((int)puVar8 + -4) = 0x2805d;
        cVar2 = FUN_000239ee();
        if (cVar2 != '\0') {
          *(undefined4 *)((int)puVar8 + -4) = 0x28072;
          sVar3 = FUN_000b3b58();
          if (sVar3 != 0) {
LAB_00027bf0:
            uVar5 = 1;
            *(undefined1 *)(in_EAX + 8) = 0x11;
            goto LAB_00028ba7;
          }
        }
      }
      *(undefined4 *)((int)puVar8 + -4) = 0x28087;
      FUN_00064ae7();
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282) = (undefined2)DAT_002e8bee
      ;
      uVar5 = 0;
      goto LAB_00028ba7;
    }
LAB_000279bc:
    puVar8[0xffffffff] = 0x279c3;
    FUN_00064ae7();
  }
LAB_00027c7a:
  uVar5 = 1;
LAB_00028ba7:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : sub_0280a7 (Ghidra: FUN_000280a7)
 * Prototype: longlong sub_0280a7(void);
 * Address  : 0x280a7 (Size: 74 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 2 -> 0x63b6d, 0xb5264
 ******************************************************************************/
longlong FUN_000280a7(void)

{
  short sVar1;
  int in_EAX;
  uint in_EDX;
  int extraout_EDX;
  
  if ((uint)(DAT_002e8bee - *(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x282)) < 0x80)
  {
    sVar1 = FUN_000b5264();
    if (sVar1 != 0) {
      *(undefined1 *)(extraout_EDX + 8) = 0x7b;
    }
    return CONCAT44(in_EDX,1);
  }
  FUN_00063b6d();
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_0280f1 (Ghidra: FUN_000280f1)
 * Prototype: undefined4 sub_0280f1(void);
 * Address  : 0x280f1 (Size: 87 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000280f1(void)

{
  short sVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte *in_EAX;
  undefined3 uVar10;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  char in_CL;
  char cVar11;
  uint in_EDX;
  char *unaff_EBX;
  int unaff_EBP;
  code *pcVar12;
  char *pcVar5;
  byte *pbVar6;
  
  bVar2 = (byte)in_EAX;
  *in_EAX = *in_EAX + bVar2;
  *in_EAX = *in_EAX & bVar2;
  *in_EAX = *in_EAX + bVar2;
  uVar10 = (undefined3)((uint)in_EAX >> 8);
  cVar3 = bVar2 + *in_EAX;
  pcVar5 = (char *)CONCAT31(uVar10,cVar3);
  *(char **)(pcVar5 + 0x20004000) = pcVar5 + *(int *)(pcVar5 + 0x20004000);
  cVar11 = (char)in_EDX;
  *pcVar5 = *pcVar5 + cVar11;
  *pcVar5 = *pcVar5 + in_CL;
  *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cVar3;
  bVar4 = cVar3 + *pcVar5;
  pbVar6 = (byte *)CONCAT31(uVar10,bVar4);
  *(byte **)pbVar6 = pbVar6 + *(int *)pbVar6;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  cVar3 = bVar4 + *(char *)(unaff_EBP + -0x7aabfffe) + CARRY1(bVar2,bVar4);
  cVar3 = cVar3 + *(char *)CONCAT31(uVar10,cVar3);
  pcVar7 = (char *)CONCAT31(uVar10,cVar3);
  pcVar5 = (char *)(unaff_EBP + 2 + (int)pcVar7 * 4);
  *pcVar5 = *pcVar5 + cVar11;
  pcVar7[-0x7e] = pcVar7[-0x7e] + (char)unaff_EBX;
  cVar3 = cVar3 + *pcVar7;
  cVar3 = cVar3 + *(char *)CONCAT31(uVar10,cVar3);
  iVar8 = CONCAT31(uVar10,cVar3 + *(char *)CONCAT31(uVar10,cVar3));
  iVar8 = iVar8 + *(int *)(in_EDX + 0x2847600 + iVar8);
  *(char *)(in_EDX + 0x3000284) = *(char *)(in_EDX + 0x3000284) + (char)(in_EDX >> 8);
  *unaff_EBX = *unaff_EBX + (char)iVar8;
  *unaff_EBX = *unaff_EBX + in_CL;
  unaff_EBX[0x51] = unaff_EBX[0x51] + cVar11;
  iVar8 = (&DAT_001b0a00)
          [*(ushort *)
            (CONCAT22((short)((uint)iVar8 >> 0x10),
                      CONCAT11((char)((uint)iVar8 >> 8) + in_CL,(char)iVar8)) + 100)];
  if (0x4000 < in_EDX) {
    FUN_000e7714(&DAT_0019cbac,s_Illegal_Job_Preference__d__T_d_C_00162955);
    FUN_000ddaf0();
    *(undefined2 *)(iVar8 + 0x2b1) = 0;
    return 0;
  }
  iVar8 = 0xf;
  pcVar12 = FUN_000280f1;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    sVar1 = *(short *)pcVar12;
    pcVar12 = pcVar12 + 2;
  } while ((short)in_EDX != sVar1);
                    /* WARNING: Could not recover jumptable at 0x0002817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(iVar8 * 4 + 0x2810d))();
  return uVar9;
}

/******************************************************************************
 * Function : dk_illegal_job_preference_028149 (Ghidra: FUN_00028149)
 * Prototype: undefined4 dk_illegal_job_preference_028149(void);
 * Address  : 0x28149 (Size: 133 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp:545; evil.cpp:706
 * Naming   : String 'Illegal Job Preference %d (T%d C%d M%d)'
 * Callers  : 1 -> 0x2796f
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1628a8: "evil.cpp"
 *   - 0x1628d1: "evil.cpp"
 *   - 0x1628fa: "evil.cpp"
 *   - 0x162923: "evil.cpp"
 *   - 0x16294c: "evil.cpp"
 *   - 0x16297d: "evil.cpp"
 *   - 0x162955: "Illegal Job Preference %d (T%d C%d M%d)"
 ******************************************************************************/
undefined4 FUN_00028149(void)

{
  short sVar1;
  int in_EAX;
  undefined4 uVar2;
  int iVar3;
  uint in_EDX;
  code *pcVar4;
  
  iVar3 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (0x4000 < in_EDX) {
    FUN_000e7714(&DAT_0019cbac,s_Illegal_Job_Preference__d__T_d_C_00162955);
    FUN_000ddaf0(); /* LbErrorLog("evil.cpp", line 545, g_log_buf) */
    *(undefined2 *)(iVar3 + 0x2b1) = 0;
    return 0;
  }
  iVar3 = 0xf;
  pcVar4 = FUN_000280f1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    sVar1 = *(short *)pcVar4;
    pcVar4 = pcVar4 + 2;
  } while ((short)in_EDX != sVar1);
                    /* WARNING: Could not recover jumptable at 0x0002817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(iVar3 * 4 + 0x2810d))();
  return uVar2;
}

/******************************************************************************
 * Function : sub_02855c (Ghidra: FUN_0002855c)
 * Prototype: undefined8 sub_02855c(void);
 * Address  : 0x2855c (Size: 224 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x16f8b, 0x29254, 0x63b6d, 0x65545, 0xb3c00, 0xb5264
 ******************************************************************************/
undefined8 FUN_0002855c(void)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  undefined4 in_EDX;
  
  if ((&DAT_002e0e0d)[*(char *)(in_EAX + 6) * 0x542] == 0) {
    FUN_00063b6d();
  }
  else {
    iVar2 = FUN_00065545();
    if (iVar2 != 0) {
      FUN_00016f8b();
      return CONCAT44(in_EDX,2);
    }
    iVar2 = FUN_00029254();
    if (iVar2 == 0) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
      if (((DAT_002e8bf6 % 7 == 0) && (sVar1 = FUN_000b3c00(), sVar1 != 0)) ||
         (sVar1 = FUN_000b5264(), sVar1 != 0)) {
        *(undefined1 *)(in_EAX + 8) = 0x74;
      }
    }
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02863c (Ghidra: FUN_0002863c)
 * Prototype: undefined8 sub_02863c(void);
 * Address  : 0x2863c (Size: 18 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x64ae7
 ******************************************************************************/
undefined8 FUN_0002863c(void)

{
  undefined4 in_EDX;
  
  FUN_00064ae7();
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_02864e (Ghidra: FUN_0002864e)
 * Prototype: undefined8 sub_02864e(void);
 * Address  : 0x2864e (Size: 135 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x63b6d, 0xb3c00, 0xb5264
 ******************************************************************************/
undefined8 FUN_0002864e(void)

{
  uint uVar1;
  short sVar2;
  int in_EAX;
  undefined4 in_EDX;
  
  if (*(uint *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x2fa) < DAT_002e8bee) {
    FUN_00063b6d();
    goto LAB_00028632;
  }
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  uVar1 = DAT_002e8bf6 >> 0xd;
  DAT_002e8bf6 = uVar1 | DAT_002e8bf6 * 0x80000;
  if ((uVar1 & 3) == 0) {
    sVar2 = FUN_000b3c00();
    if (sVar2 == 0) goto LAB_000286bc;
  }
  else {
LAB_000286bc:
    sVar2 = FUN_000b5264();
    if (sVar2 == 0) goto LAB_00028632;
  }
  *(undefined1 *)(in_EAX + 8) = 99;
LAB_00028632:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : dk_hope_we_never_get_0286d5 (Ghidra: FUN_000286d5)
 * Prototype: undefined8 dk_hope_we_never_get_0286d5(void);
 * Address  : 0x286d5 (Size: 350 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp:989 ("Hope we never get here...")
 * Naming   : String 'Hope we never get here...'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x49bfc, 0x63b6d, 0xb3b58, 0xb4ac4, 0xcc968, 0xddaf0
 * Strings  :
 *   - 0x1629a0: "evil.cpp"
 *   - 0x162986: "Hope we never get here..."
 ******************************************************************************/
undefined8 FUN_000286d5(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_EAX;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if ((*(int *)(iVar1 + 0x82) == -1) && (*(char *)(iVar1 + 0xd2) == '\0')) {
    cVar2 = FUN_000cc968();
    if (cVar2 != '\0') {
      FUN_000b3b58();
      *(undefined1 *)(in_EAX + 8) = 0x34;
      *(undefined4 *)(iVar1 + 0x82) = 0;
    }
  }
  else {
    cVar2 = FUN_000b4ac4(0);
    if (cVar2 == '\x01') {
      if (*(int *)(iVar1 + 0x82) == 0) {
        *(undefined4 *)(iVar1 + 0x82) = 1;
        FUN_00049bfc(0);
      }
      else if ((*(int *)(iVar1 + 0x82) == 1) && (*(char *)(iVar1 + 0xd2) == '\0')) {
        *(undefined4 *)(iVar1 + 0x82) = 0xffffffff;
      }
    }
    else if (cVar2 == -1) {
      FUN_000ddaf0(); /* LbErrorLog("evil.cpp", line 989, "Hope we never get here...") */
      FUN_00063b6d();
      uVar3 = 0;
      goto LAB_00028ba7;
    }
  }
  uVar3 = 1;
LAB_00028ba7:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_028833 (Ghidra: FUN_00028833)
 * Prototype: longlong sub_028833(void);
 * Address  : 0x28833 (Size: 30 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x85890
 ******************************************************************************/
longlong FUN_00028833(void)

{
  undefined2 uVar1;
  uint in_EDX;
  int extraout_EDX;
  
  uVar1 = FUN_00085890();
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(extraout_EDX + 100)] + 0xc4) = uVar1;
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_028851 (Ghidra: FUN_00028851)
 * Prototype: undefined8 sub_028851(void);
 * Address  : 0x28851 (Size: 179 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x10434, 0x28aa0, 0x63b6d, 0xca474, 0xcc4a0
 ******************************************************************************/
undefined8 FUN_00028851(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int in_EAX;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar4 = &uStack_14;
  uStack_14 = 1;
  uStack_18 = 0x28869;
  iVar3 = FUN_000ca474();
  if (iVar3 == 0) {
    puVar4 = &uStack_18;
    uStack_18 = 1;
    iVar3 = FUN_000ca474();
    puVar2 = &uStack_18;
    if (iVar3 != 0) {
      FUN_00028aa0();
      goto LAB_000288fa;
    }
  }
  else {
    uStack_18 = 0x2887a;
    iVar3 = FUN_000cc4a0();
    puVar2 = &uStack_14;
    if (iVar3 != 0) {
      *(undefined1 *)(in_EAX + 8) = 0x4c;
      *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
           *(undefined2 *)(extraout_ECX + 1);
      goto LAB_000288fa;
    }
  }
  puVar4 = puVar2;
  if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x48) != '\0') {
    pcVar1 = (char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x48);
    *pcVar1 = *pcVar1 + -1;
    *(undefined4 *)((int)puVar4 + -4) = 0x288f3;
    FUN_00010434();
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x288fa;
  FUN_00063b6d();
LAB_000288fa:
  return CONCAT44(*(undefined4 *)((int)puVar4 + 4),1);
}

/******************************************************************************
 * Function : sub_028904 (Ghidra: FUN_00028904)
 * Prototype: undefined8 sub_028904(void);
 * Address  : 0x28904 (Size: 412 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x23868, 0x444a9, 0x63b6d, 0x64ae7, 0x6e538
 ******************************************************************************/
undefined8 FUN_00028904(void)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puVar4 = (undefined4 *)&stack0xffffffec;
  puVar5 = &stack0xffffffec;
  uVar3 = (uint)CONCAT11(*(undefined1 *)(in_EAX + 0x10),*(undefined1 *)(in_EAX + 0xe));
  if ((*(byte *)((int)&DAT_00279203 + uVar3 * 5) & 2) != 0) {
    iVar2 = ((&DAT_0019033b)[uVar3 % 0x100] + (&DAT_0019033b)[(int)uVar3 >> 8] * 0x55) * 6;
    if ((((uint)((&DAT_002d33ca)[iVar2] & 7) == (int)*(char *)(in_EAX + 6)) &&
        (*(short *)(&DAT_002ddd25 + (uint)(byte)(&DAT_002d33c8)[iVar2] * 0x45) == 2)) &&
       ((*(short *)(&DAT_002ddd2b + (uint)(byte)(&DAT_002d33c8)[iVar2] * 0x45) != 0 ||
        ((&DAT_002e1086)[*(char *)(in_EAX + 6) * 0x542] != 0)))) {
      iVar2 = (uint)*(byte *)(in_EAX + 0x1a) * 0xe6;
      if (*(short *)(&DAT_002e19a9 +
                    (uint)*(byte *)(in_EAX + 0x1a) * 2 + *(char *)(in_EAX + 6) * 0x1508) == 0) {
        uVar3 = ((uint)*(ushort *)(&DAT_002e91a5 + iVar2) *
                 (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) / 100 +
                (uint)*(ushort *)(&DAT_002e91a5 + iVar2);
      }
      else {
        uVar3 = (((uint)*(ushort *)(&DAT_002e91a5 + iVar2) *
                  (uint)*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x23) * 0x23) / 100 +
                (uint)*(ushort *)(&DAT_002e91a5 + iVar2)) / 2;
      }
      uStack_18 = 0x28a29;
      FUN_00023868();
      if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x48) != '\0') {
        pcVar1 = (char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x48);
        *pcVar1 = *pcVar1 + -1;
      }
      uStack_18 = 0x28a49;
      FUN_00063b6d();
      uStack_18 = 0x28a55;
      iVar2 = FUN_000444a9();
      if (iVar2 != 0) {
        uStack_18 = 0x100;
        uStack_1c = 2;
        uStack_20 = 0;
        puVar4 = &uStack_24;
        uStack_24 = 3;
        *(uint *)(iVar2 + 0x13) = uVar3;
        FUN_0006e538();
      }
      *(uint *)(&DAT_002e17ec + *(char *)(in_EAX + 6) * 0x1508) =
           *(int *)(&DAT_002e17ec + *(char *)(in_EAX + 6) * 0x1508) + uVar3;
      puVar5 = (undefined1 *)puVar4;
      goto LAB_00028a96;
    }
  }
  uStack_18 = 0x28a96;
  FUN_00064ae7();
LAB_00028a96:
  return CONCAT44(*(undefined4 *)(puVar5 + 8),1);
}

/******************************************************************************
 * Function : sub_028aa0 (Ghidra: FUN_00028aa0)
 * Prototype: undefined4 sub_028aa0(void);
 * Address  : 0x28aa0 (Size: 91 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x28851, 0x525b2
 * Callees  : 2 -> 0xb3b58, 0xcc968
 ******************************************************************************/
undefined4 FUN_00028aa0(void)

{
  char cVar1;
  short sVar2;
  int in_EAX;
  int in_EDX;
  
  cVar1 = FUN_000cc968();
  if ((cVar1 != '\0') && (sVar2 = FUN_000b3b58(), sVar2 != 0)) {
    *(undefined1 *)(in_EAX + 8) = 0x4c;
    *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = *(undefined2 *)(in_EDX + 1)
    ;
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_028afb (Ghidra: FUN_00028afb)
 * Prototype: undefined8 sub_028afb(void);
 * Address  : 0x28afb (Size: 179 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x22b3a, 0x64ae7, 0xd0f50
 ******************************************************************************/
undefined8 FUN_00028afb(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  if (*(short *)(iVar1 + 0x1d0) == 0) {
    if (*(short *)(iVar1 + 0x80) != 0) {
      iVar2 = FUN_000d0f50();
      if ((iVar2 != 0) && (*(short *)(iVar2 + 1) == *(short *)(iVar1 + 0x80))) {
        FUN_00064ae7();
        goto LAB_00028ba2;
      }
    }
  }
  else {
    iVar2 = FUN_00022b3a(0x100);
    if (iVar2 != 0) {
      FUN_00064ae7();
      *(undefined2 *)(iVar1 + 0x86) = *(undefined2 *)(iVar2 + 0x1b);
LAB_00028ba2:
      uVar3 = 1;
      goto LAB_00028ba7;
    }
  }
  uVar3 = 0;
LAB_00028ba7:
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : dk_could_find_position_028bae (Ghidra: FUN_00028bae)
 * Prototype: undefined8 dk_could_find_position_028bae(void);
 * Address  : 0x28bae (Size: 471 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp:1212 ("Could not find position")
 * Naming   : String 'Could not find position'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x10010, 0x10434, 0xb2398, 0xb3b58, 0xddaf0
 * Strings  :
 *   - 0x1629c1: "evil.cpp"
 *   - 0x1629a9: "Could not find position"
 ******************************************************************************/
undefined8 FUN_00028bae(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  short sVar5;
  uint in_EAX;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_EDX;
  int local_24;
  uint local_20;
  
  bVar1 = *(byte *)(in_EAX + 0xe);
  bVar2 = *(byte *)(in_EAX + 0x10);
  FUN_00010434();
  bVar4 = false;
  if ((((*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x86) == 0) ||
       (iVar3 = (&DAT_001ae9fc)[*(ushort *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x86)],
       *(char *)(iVar3 + 0x1f) != '\t')) || ((uint)(DAT_002e8bee - *(int *)(iVar3 + 9)) < 4)) ||
     (*(char *)(iVar3 + 0x18) == '\0')) {
    FUN_00064ae7();
    uVar7 = 1;
  }
  else {
    for (uVar6 = (*(uint *)((int)&DAT_00279203 + ((uint)bVar2 * 0x100 + (uint)bVar1) * 5 + 1) &
                 0x3fffff) >> 0xb; uVar6 = (&DAT_001ae9fc)[uVar6], DAT_001ae9fc < uVar6;
        uVar6 = (uint)*(ushort *)(uVar6 + 2)) {
      if (((uVar6 != in_EAX) && (*(char *)(uVar6 + 0x1f) == '\x05')) &&
         ((*(ushort *)(uVar6 + 0x1b) < *(ushort *)(in_EAX + 0x1b) &&
          ((*(char *)(uVar6 + 7) == 'l' || (*(char *)(uVar6 + 8) == 'l')))))) {
        bVar4 = true;
        break;
      }
    }
    if (bVar4) {
      DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
      local_20 = DAT_002e8bf6 >> 0xd;
      DAT_002e8bf6 = local_20 | DAT_002e8bf6 * 0x80000;
      local_20 = local_20 & 3;
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        if ((*(byte *)((int)&DAT_00279203 +
                      (((int)(char)(&DAT_0018b67f)[local_20 * 2] + (uint)bVar2) * 0x100 +
                      (uint)bVar1 + (int)*(char *)((int)&DAT_0018b67b + local_20 * 2 + 3)) * 5) &
            0x10) == 0) {
          uVar6 = FUN_000b2398();
          if ((uVar6 & 0xfffffffe) != 0x28) {
            sVar5 = FUN_000b3b58();
            if (sVar5 != 0) {
              uVar7 = 1;
              *(undefined1 *)(in_EAX + 8) = 0x6c;
              goto LAB_00028ba7;
            }
          }
        }
        local_20 = (int)(local_20 + 1) % 4;
      }
      FUN_000ddaf0(); /* LbErrorLog("evil.cpp", line 1212, "Could not find position") */
    }
    FUN_00010010();
    uVar7 = 0;
  }
LAB_00028ba7:
  return CONCAT44(in_EDX,uVar7);
}

/******************************************************************************
 * Function : sub_028d85 (Ghidra: FUN_00028d85)
 * Prototype: undefined8 sub_028d85(void);
 * Address  : 0x28d85 (Size: 267 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x239ee, 0x827fc, 0xb3b58
 ******************************************************************************/
undefined8 FUN_00028d85(void)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int in_EAX;
  undefined4 in_EDX;
  uint uVar4;
  int local_20;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  uVar4 = DAT_002e8bf6 % 5;
  local_20 = 0;
  do {
    if (4 < local_20) {
LAB_00028ba2:
      return CONCAT44(in_EDX,1);
    }
    if (((&DAT_0019d0c8)[uVar4 * 0x4ef] & 1) != 0) {
      cVar2 = FUN_000239ee();
      if (cVar2 != '\0') {
        cVar2 = FUN_000827fc();
        if (cVar2 != '\0') {
          sVar3 = FUN_000b3b58();
          if (sVar3 != 0) {
            if ((uint)(DAT_002e8bee - *(int *)(iVar1 + 0x4e)) < 0xc9) {
              *(undefined1 *)(in_EAX + 8) = 0x6f;
            }
            else {
              *(undefined2 *)(iVar1 + 0x282) = 0x32;
              *(undefined1 *)(in_EAX + 8) = 0x7d;
            }
            goto LAB_00028ba2;
          }
        }
        if (200 < (uint)(DAT_002e8bee - *(int *)(iVar1 + 0x4e))) {
          *(undefined2 *)(iVar1 + 0x282) = 0x32;
          FUN_00064ae7();
        }
        goto LAB_00028ba2;
      }
    }
    uVar4 = (int)(uVar4 + 1) % 5;
    local_20 = local_20 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_028e90 (Ghidra: FUN_00028e90)
 * Prototype: undefined4 sub_028e90(void);
 * Address  : 0x28e90 (Size: 36 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00028e90(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  *(undefined2 *)(iVar1 + 0x9a) = 0;
  *(undefined4 *)(iVar1 + 0x9c) = 0;
  return 1;
}

/******************************************************************************
 * Function : sub_028eb4 (Ghidra: FUN_00028eb4)
 * Prototype: undefined8 sub_028eb4(void);
 * Address  : 0x28eb4 (Size: 776 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 10 -> 0x10408, 0x15f21, 0x239ee, 0x49bfc, 0x63b6d, 0x6e538, 0xb3b58, 0xb3c00, 0xb5264, 0xdc440
 ******************************************************************************/
undefined8 FUN_00028eb4(void)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 in_EDX;
  byte *pbVar8;
  int local_1c;
  byte *pbVar7;
  
  iVar2 = (&DAT_001b0a00)[*(ushort *)(in_EAX + 100)];
  bVar1 = *(byte *)(in_EAX + 6);
  local_1c = 0x7fffffff;
  if (*(short *)(iVar2 + 0x9a) == 0) {
    pbVar8 = (byte *)0x0;
  }
  else {
    pbVar8 = (&DAT_001ae9fc)[*(ushort *)(iVar2 + 0x9a)];
    if (((*pbVar8 & 1) == 0) || (*(int *)(pbVar8 + 9) != *(int *)(iVar2 + 0x9c))) {
      pbVar8 = (byte *)0x0;
      *(undefined4 *)(iVar2 + 0x9c) = 0;
      *(undefined2 *)(iVar2 + 0x9a) = *(undefined2 *)(iVar2 + 0x9c);
    }
  }
  if (0x40 < (uint)(DAT_002e8bee - *(int *)(iVar2 + 0xa0))) {
    *(int *)(iVar2 + 0xa0) = DAT_002e8bee;
    uVar6 = DAT_002e6eb6;
    while (pbVar7 = (&DAT_001ae9fc)[uVar6], pbVar7 != DAT_001ae9fc) {
      if (((pbVar7[6] != bVar1) && (iVar5 = FUN_00015f21(), pbVar7 = extraout_ECX, iVar5 != 0)) &&
         (iVar5 = FUN_000dc440(), pbVar7 = extraout_ECX_00, iVar5 < local_1c)) {
        pbVar8 = extraout_ECX_00;
        local_1c = iVar5;
      }
      uVar6 = (uint)*(ushort *)(pbVar7 + 0x67);
    }
  }
  if (DAT_001ae9fc < pbVar8) {
    *(undefined2 *)(iVar2 + 0x9a) = *(undefined2 *)(pbVar8 + 0x1b);
    *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(pbVar8 + 9);
    FUN_000dc440();
    iVar5 = FUN_00010408();
    if (iVar5 != 0) {
      if (*(char *)(iVar2 + 0xd2) == '\0') {
        if ((extraout_ECX_01 < 0x900) && ((uint)(DAT_002e8bee - *(short *)(iVar2 + 0x282)) < 0x14))
        {
          FUN_00049bfc(0);
          DAT_002e8bfa = DAT_002e8bfa * 0x24a1 + 0x24df;
          DAT_002e8bfa = DAT_002e8bfa >> 0xd | DAT_002e8bfa * 0x80000;
          FUN_0006e538(3,0,2,0x100);
        }
        else {
          DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
          uVar6 = DAT_002e8bf6 >> 0xd;
          DAT_002e8bf6 = uVar6 | DAT_002e8bf6 * 0x80000;
          if ((((uVar6 & 3) != 0) && (sVar4 = FUN_000b3c00(), sVar4 != 0)) ||
             (sVar4 = FUN_000b5264(), sVar4 != 0)) {
            *(undefined1 *)(in_EAX + 8) = 0x73;
            *(undefined2 *)(iVar2 + 0x282) = (undefined2)DAT_002e8bee;
          }
        }
      }
      goto LAB_00028ba7;
    }
    DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
    uVar6 = DAT_002e8bf6 >> 0xd;
    DAT_002e8bf6 = uVar6 | DAT_002e8bf6 * 0x80000;
    if (((uVar6 & 0x3f) == 0) && (sVar4 = FUN_000b3c00(), sVar4 != 0)) {
      *(undefined1 *)(in_EAX + 8) = 0x73;
    }
  }
  else {
    *(undefined2 *)(iVar2 + 0x9a) = 0;
  }
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  if (DAT_002e8bf6 % 0xc == 0) {
    cVar3 = FUN_000239ee();
    if (cVar3 != '\0') {
      sVar4 = FUN_000b3b58();
      if (sVar4 != 0) {
        *(undefined1 *)(in_EAX + 8) = 0x73;
      }
      goto LAB_00028ba7;
    }
  }
  else {
    sVar4 = FUN_000b5264();
    if (sVar4 != 0) {
      *(undefined1 *)(in_EAX + 8) = 0x73;
      goto LAB_00028ba7;
    }
  }
  FUN_00063b6d();
LAB_00028ba7:
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_0291bc (Ghidra: FUN_000291bc)
 * Prototype: longlong sub_0291bc(void);
 * Address  : 0x291bc (Size: 152 bytes)
 * Module   : evil.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x29396, 0x49bfc, 0x63b6d
 ******************************************************************************/
longlong FUN_000291bc(void)

{
  int in_EAX;
  int iVar1;
  uint in_EDX;
  undefined4 *puVar2;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)&stack0xfffffff0;
  *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) = 0;
  if ((uint)(byte)(&DAT_002d33c8)
                  [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
                   (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] * 0x45 == 0) {
    uStack_14 = 0x29242;
    iVar1 = FUN_00029396();
    if (iVar1 == 0) {
      uStack_14 = 0x2924d;
      FUN_00063b6d();
      return (ulonglong)in_EDX << 0x20;
    }
  }
  else {
    puVar2 = (undefined4 *)&stack0xfffffff0;
    if (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) == '\0') {
      puVar2 = &uStack_14;
      uStack_14 = 0;
      FUN_00049bfc();
    }
  }
  return CONCAT44(*(undefined4 *)((int)puVar2 + 4),1);
}

/******************************************************************************
 * Function : dk_do_this_destroy_room_029254 (Ghidra: FUN_00029254)
 * Prototype: undefined4 dk_do_this_destroy_room_029254(void);
 * Address  : 0x29254 (Size: 322 bytes)
 * Module   : evil.cpp [direct_file_string_xref]
 * OrigLine : evil.cpp:1536 ("Cannot do this 'destroy room' stuff")
 * Naming   : String 'Cannot do this 'destroy room' stuff'
 * Callers  : 2 -> 0x2855c, 0x29396
 * Callees  : 6 -> 0x274ad, 0x51374, 0x827fc, 0xcc45c, 0xccc08, 0xddaf0
 * Strings  :
 *   - 0x1629ee: "evil.cpp"
 *   - 0x1629ca: "Cannot do this 'destroy room' stuff"
 ******************************************************************************/
undefined4 FUN_00029254(void)

{
  short sVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  uint in_EDX;
  uint unaff_EBX;
  
  iVar3 = (uint)(byte)(&DAT_002d33c8)
                      [((&DAT_0019033b)[unaff_EBX & 0xff] * 0x55 + (&DAT_0019033b)[in_EDX & 0xff]) *
                       6] * 0x45;
  if ((((iVar3 != 0) && ((&DAT_002ddd1e)[iVar3] != *(char *)(in_EAX + 6))) &&
      (sVar1 = *(short *)(&DAT_002ddd25 + iVar3), sVar1 != 7)) && ((sVar1 != 1 && (sVar1 != 0xf))))
  {
    cVar2 = FUN_000ccc08();
    if (cVar2 != '\0') {
      cVar2 = FUN_000827fc();
      if (cVar2 != '\0') {
        iVar4 = FUN_000cc45c();
        if (iVar4 != 0) {
          FUN_000274ad(0);
          if ((int)(char)(&DAT_002ddd1e)[iVar3] ==
              (uint)(byte)(&DAT_0019d0f3)[DAT_002f10ce._3_1_ * 0x4ef]) {
            FUN_00051374();
          }
          *(undefined1 *)(in_EAX + 8) = 0x87;
          *(undefined2 *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x80) =
               *(undefined2 *)(&DAT_002ddd1c + iVar3);
          return 1;
        }
        FUN_000ddaf0(); /* LbErrorLog("evil.cpp", line 1536, "Cannot do this 'destroy room' stuff") */
      }
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_029396 (Ghidra: FUN_00029396)
 * Prototype: undefined8 sub_029396(void);
 * Address  : 0x29396 (Size: 141 bytes)
 * Module   : evil.cpp [callgraph_affinity_to_preceding_unit]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x291bc
 * Callees  : 1 -> 0x29254
 ******************************************************************************/
undefined8 FUN_00029396(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_EDX;
  int iVar3;
  
  DAT_002e8bf6 = DAT_002e8bf6 * 0x24a1 + 0x24df;
  iVar3 = 0;
  DAT_002e8bf6 = DAT_002e8bf6 >> 0xd | DAT_002e8bf6 * 0x80000;
  do {
    if (3 < iVar3) {
      uVar2 = 0;
LAB_00028ba8:
      return CONCAT44(in_EDX,uVar2);
    }
    iVar1 = FUN_00029254();
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_00028ba8;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

/******************************************************************************
 * Function : sub_029423 (Ghidra: FUN_00029423)
 * Prototype: undefined8 sub_029423(void);
 * Address  : 0x29423 (Size: 167 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x239ee, 0x63b6d, 0xb3b58
 ******************************************************************************/
undefined8 FUN_00029423(void)

{
  char cVar1;
  short sVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 in_EDX;
  
  cVar1 = FUN_000239ee();
  if (cVar1 == '\0') {
LAB_00029478:
    cVar1 = FUN_000239ee();
    if (cVar1 != '\0') {
      sVar2 = FUN_000b3b58();
      if (sVar2 != 0) goto LAB_0002946d;
    }
    FUN_00063b6d();
    uVar3 = 0;
  }
  else {
    sVar2 = FUN_000b3b58();
    if (sVar2 == 0) goto LAB_00029478;
LAB_0002946d:
    uVar3 = 1;
    *(undefined1 *)(in_EAX + 8) = 0x11;
  }
  return CONCAT44(in_EDX,uVar3);
}

/******************************************************************************
 * Function : sub_0294ca (Ghidra: FUN_000294ca)
 * Prototype: longlong sub_0294ca(void);
 * Address  : 0x294ca (Size: 460 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x29696
 * Callees  : 2 -> 0x49e95, 0x49ea9
 ******************************************************************************/
longlong FUN_000294ca(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  uint in_EDX;
  
  if ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xac) & 0x40) == 0) {
    iVar2 = FUN_00049e95();
    if (iVar2 != 0) {
      iVar2 = FUN_00049ea9();
      if (iVar2 != 0) {
        return CONCAT44(in_EDX,0x19);
      }
    }
  }
  iVar3 = FUN_00049e95();
  iVar2 = extraout_ECX;
  if ((iVar3 != 0) &&
     ((int)*(short *)(in_EAX + 0x5e) < (int)(((uint)*(ushort *)(extraout_ECX + 0xc6) * 2) / 3))) {
    iVar3 = FUN_00049ea9();
    iVar2 = extraout_ECX_00;
    if (iVar3 != 0) {
      return CONCAT44(in_EDX,0xb);
    }
  }
  if (*(char *)(in_EAX + 7) == '\x0e') {
    cVar1 = *(char *)(in_EAX + 8);
  }
  else {
    cVar1 = *(char *)(in_EAX + 7);
  }
  if (cVar1 != ')') {
    if (*(char *)(in_EAX + 7) == '\x0e') {
      cVar1 = *(char *)(in_EAX + 8);
    }
    else {
      cVar1 = *(char *)(in_EAX + 7);
    }
    if (cVar1 != '(') {
      if (*(char *)(in_EAX + 7) == '\x0e') {
        cVar1 = *(char *)(in_EAX + 8);
      }
      else {
        cVar1 = *(char *)(in_EAX + 7);
      }
      if (cVar1 != '+') {
        if (*(char *)(in_EAX + 7) == '\x0e') {
          cVar1 = *(char *)(in_EAX + 8);
        }
        else {
          cVar1 = *(char *)(in_EAX + 7);
        }
        if (cVar1 != '*') {
          if ((*(byte *)(iVar2 + 0xad) & 4) != 0) {
            iVar3 = FUN_00049e95();
            iVar2 = extraout_ECX_01;
            if (iVar3 != 0) {
              iVar3 = FUN_00049ea9();
              iVar2 = extraout_ECX_02;
              if (iVar3 != 0) {
                return CONCAT44(in_EDX,0x16);
              }
            }
          }
          if ((*(byte *)(iVar2 + 0xac) & 2) == 0) {
            iVar3 = FUN_00049e95();
            iVar2 = extraout_ECX_03;
            if (iVar3 != 0) {
              iVar3 = FUN_00049ea9();
              iVar2 = extraout_ECX_04;
              if (iVar3 != 0) {
                return CONCAT44(in_EDX,0xf);
              }
            }
          }
          if ((*(byte *)(iVar2 + 0xac) & 0x10) == 0) {
            iVar3 = FUN_00049e95();
            iVar2 = extraout_ECX_05;
            if (iVar3 != 0) {
              iVar3 = FUN_00049ea9();
              iVar2 = extraout_ECX_06;
              if (iVar3 != 0) {
                return CONCAT44(in_EDX,0x18);
              }
            }
          }
          if ((*(byte *)(iVar2 + 0xac) & 0x20) == 0) {
            iVar2 = FUN_00049e95();
            if (iVar2 != 0) {
              iVar2 = FUN_00049ea9();
              if (iVar2 != 0) {
                return CONCAT44(in_EDX,0xd);
              }
            }
          }
        }
      }
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : sub_029696 (Ghidra: FUN_00029696)
 * Prototype: longlong sub_029696(void);
 * Address  : 0x29696 (Size: 160 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0xe0b1c
 * Callees  : 2 -> 0x294ca, 0x49bfc
 ******************************************************************************/
longlong FUN_00029696(void)

{
  byte *in_EAX;
  int iVar1;
  uint in_EDX;
  undefined4 unaff_ESI;
  
  if ((((((*in_EAX & 0x20) == 0) &&
        (*(short *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0x280) == 0)) &&
       ((*(byte *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xab) & 2) == 0)) &&
      (((&DAT_0018c4be)[(uint)in_EAX[7] * 0x29] != '\0' &&
       (((&DAT_0018c4be)[(uint)in_EAX[7] * 0x29] != '\x06' ||
        ((&DAT_0018c4be)[(uint)in_EAX[8] * 0x29] != '\0')))))) &&
     (*(char *)((&DAT_001b0a00)[*(ushort *)(in_EAX + 100)] + 0xd2) == '\0')) {
    iVar1 = FUN_000294ca();
    if (iVar1 != 0) {
      FUN_00049bfc(0);
      return CONCAT44(unaff_ESI,1);
    }
  }
  return (ulonglong)in_EDX << 0x20;
}

/******************************************************************************
 * Function : dk_settings_dat_029738 (Ghidra: FUN_00029738)
 * Prototype: undefined8 dk_settings_dat_029738(void);
 * Address  : 0x29738 (Size: 200 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : String 'SETTINGS.DAT'
 * Callers  : 1 -> 0x6a412
 * Callees  : 8 -> 0x150f0, 0x2245b, 0x2a355, 0xdd920, 0xe7714, 0xe8960, 0xe8c83, 0xe984c
 * Strings  :
 *   - 0x1629f8: "SETTINGS.DAT"
 *   - 0x162a05: "SAVE"
 *   - 0x162a0c: "%s\%s"
 ******************************************************************************/
undefined8 FUN_00029738(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_EDX;
  undefined1 local_c0 [152];
  int local_28;
  
  FUN_0002245b();
  FUN_000dd920(s_SETTINGS_DAT_001629f8); /* 0x1629f8="SETTINGS.DAT" */
  uVar3 = FUN_000dd920();
  FUN_000e7714(local_c0,s__s__s_00162a0c,uVar3);
  FUN_000150f0();
  bVar1 = true;
  cVar2 = FUN_000e8960();
  if (cVar2 != '\0') {
    iVar4 = FUN_000e984c();
    if (iVar4 == 0x52) {
      bVar1 = false;
    }
  }
  if (bVar1) {
    FUN_000e8c83();
    if (local_28 == 0) {
      uVar5 = 4;
    }
    else {
      uVar5 = local_28 >> 8 & 0xf;
    }
    if ((5 < uVar5) && (0xf < DAT_00334065)) {
      DAT_002ee8dc = 0xd;
    }
    FUN_0002a355();
  }
  return CONCAT44(in_EDX,1);
}

/******************************************************************************
 * Function : sub_029800 (Ghidra: FUN_00029800)
 * Prototype: undefined8 sub_029800(void);
 * Address  : 0x29800 (Size: 181 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x401ec
 * Callees  : 6 -> 0x150f0, 0xb224c, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162a12: "DATA"
 *   - 0x162a19: "%s\Cube.dat"
 ******************************************************************************/
undefined8 FUN_00029800(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_EDX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  byte bVar10;
  undefined1 local_ac [152];
  
  bVar10 = 0;
  FUN_000dd920();
  uVar2 = FUN_000dd920();
  FUN_000e7714(local_ac,s__s_Cube_dat_00162a19,uVar2);
  FUN_000150f0();
  cVar1 = FUN_000e8960();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_000b224c();
    FUN_000e984c();
    iVar4 = *DAT_00199228;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x1ff < iVar4) {
      iVar4 = 0x1ff;
    }
    piVar5 = DAT_00199228 + 1;
    for (iVar3 = 0; iVar3 <= iVar4 * 0x12; iVar3 = iVar3 + 0x12) {
      piVar8 = (int *)((int)&DAT_001aa977 + (uint)bVar10 * -8 + iVar3);
      piVar6 = piVar5 + (uint)bVar10 * -2 + 1;
      *(int *)((int)&DAT_001aa973 + iVar3) = *piVar5;
      piVar9 = piVar8 + (uint)bVar10 * -2 + 1;
      piVar7 = piVar6 + (uint)bVar10 * -2 + 1;
      *piVar8 = *piVar6;
      *piVar9 = *piVar7;
      piVar9[(uint)bVar10 * -2 + 1] = piVar7[(uint)bVar10 * -2 + 1];
      *(short *)(piVar9 + (uint)bVar10 * -2 + 1 + (uint)bVar10 * -2 + 1) =
           (short)(piVar7 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
      piVar5 = (int *)((int)piVar5 + 0x12);
    }
    uVar2 = 1;
  }
  return CONCAT44(in_EDX,uVar2);
}

/******************************************************************************
 * Function : sub_0298b5 (Ghidra: FUN_000298b5)
 * Prototype: longlong sub_0298b5(void);
 * Address  : 0x298b5 (Size: 196 bytes)
 * Module   : evil.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x2a25c
 * Callees  : 6 -> 0x150f0, 0xb20e0, 0xdd920, 0xe7714, 0xe8960, 0xe984c
 * Strings  :
 *   - 0x162a25: "LEVELS"
 *   - 0x162a2e: "%s\MAP%05d.dat"
 ******************************************************************************/
longlong FUN_000298b5(void)

{
  uint *puVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint in_EDX;
  short *psVar7;
  undefined1 local_a4 [152];
  
  FUN_000dd920();
  uVar4 = FUN_000dd920();
  FUN_000e7714(local_a4,s__s_MAP_05d_dat_00162a2e,uVar4);
  FUN_000150f0();
  psVar7 = &DAT_00299201;
  cVar3 = FUN_000e8960();
  if (cVar3 != '\0') {
    FUN_000b20e0();
    FUN_000e984c();
    iVar6 = 0x4fffb;
    do {
      iVar5 = iVar6 + -5;
      sVar2 = *psVar7;
      *(undefined1 *)((int)&DAT_00279203 + iVar6 + 1) = 0;
      *(byte *)((int)&DAT_00279205 + iVar6) = *(byte *)((int)&DAT_00279205 + iVar6) & 0xf8;
      psVar7 = psVar7 + -1;
      puVar1 = (uint *)((int)&DAT_00279203 + iVar6 + 1);
      *puVar1 = *puVar1 | -(int)sVar2 & 0x7ffU;
      iVar6 = iVar5;
    } while (iVar5 != -5);
    iVar5 = 0;
    iVar6 = 0;
    do {
      *(undefined2 *)((int)&DAT_001e3203 + iVar5) = 0x20;
      iVar5 = iVar5 + 2;
      puVar1 = (uint *)((int)&DAT_00279203 + iVar6 + 1);
      *puVar1 = *puVar1 & 0xc007ff;
      iVar6 = iVar6 + 5;
    } while (iVar5 != 0x20000);
    return CONCAT44(in_EDX,1);
  }
  return (ulonglong)in_EDX << 0x20;
}

