/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: command.cpp
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: 60
 */

#include "../include/dk_types.h"
#include "../include/dk_structs.h"
#include "../include/dk_globals.h"
#include "../include/dk_functions.h"

/******************************************************************************
 * Function : sub_0781c8 (Ghidra: FUN_000781c8)
 * Prototype: void sub_0781c8(void);
 * Address  : 0x781c8 (Size: 146 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 1 -> 0x780df
 ******************************************************************************/
void FUN_000781c8(void)

{
  FUN_000780df();
  return;
}

/******************************************************************************
 * Function : sub_07825a (Ghidra: FUN_0007825a)
 * Prototype: int sub_07825a(void);
 * Address  : 0x7825a (Size: 138 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 3 -> 0x4660b, 0x46701, 0x57fe4
 * Callees  : 2 -> 0x782e4, 0x7841c
 ******************************************************************************/
/* WARNING: Removing unreachable block (ram,0x000782ae) */
/* WARNING: Removing unreachable block (ram,0x000782c9) */

int FUN_0007825a(void)

{
  byte bVar1;
  int in_EAX;
  ushort *in_ECX;
  int iVar2;
  ushort local_14;
  ushort local_10 [2];
  
  bVar1 = *(byte *)(in_EAX + 6);
  iVar2 = 0;
  if (bVar1 < 3) {
    if (bVar1 == 0) goto LAB_000782a7;
LAB_00078273:
    iVar2 = FUN_000782e4(local_10);
  }
  else {
    if (3 < bVar1) {
      if (bVar1 != 5) goto LAB_000782a7;
      goto LAB_00078273;
    }
    iVar2 = FUN_0007841c(local_10);
  }
  if (iVar2 != 0) {
    *in_ECX = local_14;
    in_ECX[1] = local_10[0];
  }
LAB_000782a7:
  if (0xfeff < *in_ECX) {
    *in_ECX = 0xfeff;
  }
  if (0xfeff < in_ECX[1]) {
    in_ECX[1] = 0xfeff;
  }
  return iVar2;
}

/******************************************************************************
 * Function : sub_0782e4 (Ghidra: FUN_000782e4)
 * Prototype: undefined4 sub_0782e4(int *param_1);
 * Address  : 0x782e4 (Size: 312 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7825a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000782e4(int *param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar2 = DAT_00387de4;
  if ((-1 < DAT_00387db0) && (-1 < DAT_00387db4)) {
    iVar3 = DAT_002f10ce._3_1_ * 0x4ef;
    if ((DAT_00387db0 <
         (int)((ulonglong)*(ushort *)(&DAT_0019d50c + iVar3) /
              (ulonglong)(longlong)(int)(uint)DAT_0019cba6)) &&
       (DAT_00387db4 <
        (int)((ulonglong)*(ushort *)(&DAT_0019d50e + iVar3) /
             (ulonglong)(longlong)(int)(uint)DAT_0019cba6))) {
      if (((((&DAT_0019d51b)[iVar3] == '\x01') && ((&DAT_0019d51c)[iVar3] != '\0')) ||
          (cVar1 = (&DAT_0019d51b)[DAT_002f10ce._3_1_ * 0x4ef], cVar1 == '\x02')) ||
         ((((cVar1 == '\x12' || (cVar1 == '\x10')) || (cVar1 == '\b')) || (cVar1 == '\x17')))) {
        *in_ECX = DAT_00387df0 * 0x100 + DAT_00387df8;
        iVar2 = DAT_00387df4;
        iVar3 = DAT_00387dfc;
      }
      else {
        *in_ECX = DAT_00387de0 * 0x100 + DAT_00387de8;
        iVar3 = DAT_00387dec;
      }
      *param_1 = iVar2 * 0x100 + iVar3;
      if (*param_1 < 0) {
        *param_1 = 0;
      }
      else if (0xfeff < *param_1) {
        *param_1 = 0xfeff;
      }
      if (*in_ECX < 0) {
        *in_ECX = 0;
      }
      else if (0xfeff < *in_ECX) {
        *in_ECX = 0xfeff;
      }
      return 1;
    }
  }
  *param_1 = 0;
  *in_ECX = *param_1;
  return 0;
}

/******************************************************************************
 * Function : sub_07841c (Ghidra: FUN_0007841c)
 * Prototype: undefined4 sub_07841c(int *param_1);
 * Address  : 0x7841c (Size: 146 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x7825a
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_0007841c(int *param_1)

{
  int *in_ECX;
  int in_EDX;
  int iVar1;
  int unaff_EBX;
  
  *param_1 = 0;
  *in_ECX = *param_1;
  if ((((0x95 < in_EDX) && (in_EDX < 0x1ea)) && (0x37 < unaff_EBX)) && (unaff_EBX < 0x18c)) {
    iVar1 = in_EDX + -0x96 >> 0x1f;
    *in_ECX = ((int)((in_EDX + -0x96 + iVar1 * -4) - (uint)(iVar1 << 1 < 0)) >> 2) * 0x300 + 0x180;
    iVar1 = unaff_EBX + -0x38 >> 0x1f;
    iVar1 = ((int)((unaff_EBX + -0x38 + iVar1 * -4) - (uint)(iVar1 << 1 < 0)) >> 2) * 0x300 + 0x180;
    *param_1 = iVar1;
    if (((-1 < *in_ECX) && (*in_ECX < 0x10000)) && ((-1 < iVar1 && (iVar1 < 0x10000)))) {
      return 1;
    }
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0784ae (Ghidra: FUN_000784ae)
 * Prototype: void sub_0784ae(void);
 * Address  : 0x784ae (Size: 278 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 7 -> 0x2ca74, 0x4823a, 0x4839c, 0x4bdfa, 0x4bef7, 0x80e04, 0x80fbc
 * Callees  : 5 -> 0x6f859, 0x6f968, 0x8ae00, 0x8aee4, 0xebf9c
 ******************************************************************************/
void FUN_000784ae(void)

{
  undefined1 *in_EAX;
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  uint in_EDX;
  
  uVar2 = (undefined1)in_EDX;
  if (in_EDX < 3) {
    if (in_EDX == 0) goto LAB_000784d4;
    if (in_EDX < 2) {
      *(undefined1 **)(in_EAX + 0x38) = in_EAX + 0x66;
      if (in_EAX == &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) {
        DAT_00191d3c = 2;
        FUN_0008aee4();
        FUN_0006f859();
        FUN_0006f968();
        FUN_000ebf9c();
        uVar2 = extraout_CL;
      }
      goto LAB_000784d4;
    }
    puVar1 = in_EAX + 0x3c;
LAB_00078582:
    *(undefined1 **)(in_EAX + 0x38) = puVar1;
    if (in_EAX != &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) goto LAB_000784d4;
    DAT_00191d3c = 0;
    FUN_0008ae00();
  }
  else {
    if (3 < in_EDX) {
      if ((in_EDX < 5) || (5 < in_EDX)) goto LAB_000784d4;
      puVar1 = in_EAX + 0xba;
      goto LAB_00078582;
    }
    *(undefined1 **)(in_EAX + 0x38) = in_EAX + 0x90;
    if (in_EAX != &DAT_0019d0c8 + DAT_002f10ce._3_1_ * 0x4ef) goto LAB_000784d4;
  }
  FUN_0006f859();
  FUN_0006f968();
  uVar2 = extraout_CL_00;
LAB_000784d4:
  in_EAX[0x37] = uVar2;
  return;
}

/******************************************************************************
 * Function : sub_0785c4 (Ghidra: FUN_000785c4)
 * Prototype: uint sub_0785c4(void);
 * Address  : 0x785c4 (Size: 200 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
uint FUN_000785c4(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint in_EDX;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0xffff;
  uVar2 = 0;
  iVar5 = 0;
  do {
    iVar3 = (int)(char)(&DAT_0018b6c2)[iVar5] + (in_EAX >> 8 & 0xff);
    if ((iVar3 < 0x100) &&
       (iVar1 = (int)(char)(&DAT_0018b6c3)[iVar5] + (in_EDX >> 8 & 0xff), iVar1 < 0x100)) {
      for (uVar4 = (&DAT_001ae9fc)
                   [(*(uint *)((int)&DAT_00279203 + (iVar3 + iVar1 * 0x100) * 5 + 1) & 0x3fffff) >>
                    0xb]; DAT_001ae9fc < uVar4; uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 2)]) {
        if (*(char *)(uVar4 + 0x1f) == '\x05') {
          iVar3 = FUN_000e69fc();
          uVar7 = FUN_000e69fc();
          uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
          iVar3 = (int)uVar7 + iVar3;
          uVar2 = extraout_ECX;
          if (iVar3 < iVar6) {
            uVar2 = uVar4;
            iVar6 = iVar3;
          }
        }
      }
    }
    iVar5 = iVar5 + 2;
  } while (iVar5 != 0x12);
  return uVar2;
}

/******************************************************************************
 * Function : sub_07868c (Ghidra: FUN_0007868c)
 * Prototype: uint sub_07868c(void);
 * Address  : 0x7868c (Size: 220 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
uint FUN_0007868c(void)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  code *unaff_EBX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_10;
  
  local_10 = 0xffff;
  uVar5 = 0;
  iVar2 = 0;
  do {
    iVar3 = (int)(char)(&DAT_0018b6c2)[iVar2] + (in_EAX >> 8 & 0xff);
    iVar1 = (int)(char)(&DAT_0018b6c3)[iVar2] + (in_EDX >> 8 & 0xff);
    if ((((-1 < iVar3) && (iVar3 < 0x100)) && (-1 < iVar1)) && (iVar1 < 0x100)) {
      for (uVar4 = (&DAT_001ae9fc)
                   [(*(uint *)((int)&DAT_00279203 + (iVar3 + iVar1 * 0x100) * 5 + 1) & 0x3fffff) >>
                    0xb]; DAT_001ae9fc < uVar4; uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 2)]) {
        if (*(char *)(uVar4 + 0x1f) == '\x05') {
          iVar1 = (*unaff_EBX)();
          iVar2 = extraout_ECX;
          if (iVar1 != 0) {
            iVar1 = FUN_000e69fc();
            iVar3 = FUN_000e69fc();
            iVar2 = extraout_ECX_00;
            if (iVar3 + iVar1 < local_10) {
              uVar5 = uVar4;
              local_10 = iVar3 + iVar1;
            }
          }
        }
      }
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 != 0x12);
  return uVar5;
}

/******************************************************************************
 * Function : sub_078768 (Ghidra: FUN_00078768)
 * Prototype: uint sub_078768(void);
 * Address  : 0x78768 (Size: 227 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 1 -> 0xe69fc
 ******************************************************************************/
uint FUN_00078768(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint in_EDX;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  undefined8 uVar6;
  int local_18;
  
  local_18 = 0xffff;
  uVar2 = 0;
  iVar5 = 0;
  do {
    iVar3 = (int)(char)(&DAT_0018b6c2)[iVar5] + (in_EAX >> 8 & 0xff);
    iVar1 = (int)(char)(&DAT_0018b6c3)[iVar5] + (in_EDX >> 8 & 0xff);
    if ((((-1 < iVar3) && (iVar3 < 0x100)) && (-1 < iVar1)) && (iVar1 < 0x100)) {
      for (uVar4 = (&DAT_001ae9fc)
                   [(*(uint *)((int)&DAT_00279203 + (iVar3 + iVar1 * 0x100) * 5 + 1) & 0x3fffff) >>
                    0xb]; DAT_001ae9fc < uVar4; uVar4 = (&DAT_001ae9fc)[*(ushort *)(uVar4 + 2)]) {
        if (((*(char *)(uVar4 + 0x1f) == '\x01') && (*(char *)(uVar4 + 6) == unaff_EBX)) &&
           (*(char *)(uVar4 + 0x1a) == '\x05')) {
          iVar1 = FUN_000e69fc();
          uVar6 = FUN_000e69fc();
          uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
          iVar1 = iVar1 + (int)uVar6;
          uVar2 = extraout_ECX;
          if (iVar1 < local_18) {
            uVar2 = uVar4;
            local_18 = iVar1;
          }
        }
      }
    }
    iVar5 = iVar5 + 2;
  } while (iVar5 != 0x12);
  return uVar2;
}

/******************************************************************************
 * Function : sub_07884b (Ghidra: FUN_0007884b)
 * Prototype: uint sub_07884b(void);
 * Address  : 0x7884b (Size: 206 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 1 -> 0x5f6c5
 * Callees  : 2 -> 0x865b8, 0xe69fc
 ******************************************************************************/
uint FUN_0007884b(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  uint in_EDX;
  uint unaff_EBX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0xffff;
  uVar5 = 0;
  iVar2 = 0;
  do {
    iVar3 = (int)(char)(&DAT_0018b6c2)[iVar2] + (in_EDX >> 8 & 0xff);
    iVar1 = (int)(char)(&DAT_0018b6c3)[iVar2] + (unaff_EBX >> 8 & 0xff);
    if ((((-1 < iVar3) && (iVar3 < 0x100)) && (-1 < iVar1)) && (iVar1 < 0x100)) {
      for (uVar4 = (*(uint *)((int)&DAT_00279203 + (iVar3 + iVar1 * 0x100) * 5 + 1) & 0x3fffff) >>
                   0xb; uVar4 = (&DAT_001ae9fc)[uVar4], DAT_001ae9fc < uVar4;
          uVar4 = (uint)*(ushort *)(uVar4 + 2)) {
        iVar1 = FUN_000865b8();
        iVar2 = extraout_ECX;
        if (iVar1 != 0) {
          FUN_000e69fc();
          uVar7 = FUN_000e69fc();
          iVar1 = (int)((ulonglong)uVar7 >> 0x20) + (int)uVar7;
          iVar2 = extraout_ECX_00;
          if (iVar1 < iVar6) {
            uVar5 = uVar4;
            iVar6 = iVar1;
          }
        }
      }
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 != 0x12);
  return uVar5;
}

/******************************************************************************
 * Function : sub_078919 (Ghidra: FUN_00078919)
 * Prototype: undefined4 sub_078919(void);
 * Address  : 0x78919 (Size: 169 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_00078919(void)

{
  int in_EAX;
  char cVar1;
  uint in_EDX;
  
  if ((int)*(char *)(in_EAX + 6) != in_EDX) {
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
            return 0;
          }
        }
      }
    }
    if (((&DAT_002d33ca)
         [((&DAT_0019033b)[*(byte *)(in_EAX + 0xe)] +
          (&DAT_0019033b)[*(byte *)(in_EAX + 0x10)] * 0x55) * 6] & 7) != in_EDX) {
      return 0;
    }
  }
  return 1;
}

/******************************************************************************
 * Function : sub_0789c2 (Ghidra: FUN_000789c2)
 * Prototype: undefined4 sub_0789c2(void);
 * Address  : 0x789c2 (Size: 29 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
undefined4 FUN_000789c2(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((*(char *)(in_EAX + 6) != in_EDX) && (*(char *)(in_EAX + 0x1a) != '\x17')) {
    return 1;
  }
  return 0;
}

/******************************************************************************
 * Function : sub_0789df (Ghidra: FUN_000789df)
 * Prototype: bool sub_0789df(void);
 * Address  : 0x789df (Size: 14 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
bool FUN_000789df(void)

{
  int in_EAX;
  
  return *(char *)(in_EAX + 0x1a) != '\x17';
}

/******************************************************************************
 * Function : sub_0789f0 (Ghidra: FUN_000789f0)
 * Prototype: undefined4 sub_0789f0(void);
 * Address  : 0x789f0 (Size: 233 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* Decompilation failed: procedure_pseudo_code failed: Ghidra decompilation failed:  Low-level Error: Cannot properly adjust input varnodes */

/******************************************************************************
 * Function : dk_script_number_parameters_078ada (Ghidra: FUN_00078ada)
 * Prototype: undefined8 dk_script_number_parameters_078ada(void);
 * Address  : 0x78ada (Size: 374 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:532; command.cpp:813
 * Naming   : String '(script:%d) Invalid number of parameters, %s'
 * Callers  : 1 -> 0x2c502
 * Callees  : 4 -> 0x7909c, 0xddaf0, 0xe7714, 0xea21d
 * Strings  :
 *   - 0x167f31: "command.cpp"
 *   - 0x167f62: "command.cpp"
 *   - 0x167f90: "command.cpp"
 *   - 0x167f04: "(script:%d) Invalid number of parameters, %s"
 *   - 0x167f6e: "(script:%d) Invalid command, '%s'"
 ******************************************************************************/
undefined8 FUN_00078ada(void)

{
  code cVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar6;
  int iVar7;
  undefined4 in_EDX;
  uint uVar8;
  code *pcVar9;
  byte bVar10;
  undefined8 uVar11;
  char local_168 [300];
  undefined4 auStack_3c [8];
  char local_1c;
  
  bVar10 = 0;
  local_1c = '\0';
  if (DAT_0037775e != '\0') {
    DAT_0037775e = DAT_0037775e + -1;
  }
  local_168[0] = '\0';
  puVar3 = (undefined4 *)FUN_0007909c();
  if (puVar3 == (undefined4 *)0x0) {
    if (((int)(char)(&DAT_0017469c)[(byte)(local_168[0] + 1)] & 0xe0U) != 0) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_command____s_00167f6e,DAT_00179c04,local_168)
      ;
      FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 532, g_log_buf) */
    }
  }
  else if (*(char *)(puVar3 + 3) != '\n') {
    uVar8 = 0;
    while (((uVar4 = uVar8 & 0xffff, puVar6 = puVar3, uVar4 < 8 &&
            (*(char *)((int)puVar3 + uVar4 + 4) != ' ')) && (local_1c == '\0'))) {
      FUN_0007909c();
      puVar6 = extraout_ECX;
      if (local_1c != '\0') break;
      cVar2 = *(char *)((int)puVar3 + uVar4 + 4);
      if ((cVar2 == 'N') || (puVar3 = extraout_ECX, cVar2 == 'n')) {
        uVar11 = FUN_000ea21d();
        auStack_3c[(int)((ulonglong)uVar11 >> 0x20)] = (int)uVar11;
        puVar3 = extraout_ECX_00;
      }
      uVar8 = uVar8 + 1;
    }
    if ((7 < (uVar8 & 0xffff)) ||
       ((cVar2 = *(char *)((int)puVar6 + (uVar8 & 0xffff) + 4), cVar2 != 'A' && (cVar2 != 'N')))) {
      iVar7 = 0x2f;
      pcVar9 = FUN_000789f0;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + (uint)bVar10 * -2 + 1;
      } while (*(code *)(puVar6 + 3) != cVar1);
                    /* WARNING: Could not recover jumptable at 0x00079042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (**(code **)(iVar7 * 4 + 0x78a1e))();
      return uVar11;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_number_of_pa_00167f04,DAT_00179c04,*puVar6);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 813, g_log_buf) */
    uVar5 = 0xffffffff;
    goto LAB_00079095;
  }
  uVar5 = 0;
LAB_00079095:
  return CONCAT44(in_EDX,uVar5);
}

/******************************************************************************
 * Function : dk_script_unexpected_07909c (Ghidra: FUN_0007909c)
 * Prototype: int dk_script_unexpected_07909c(void);
 * Address  : 0x7909c (Size: 795 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:900
 * Naming   : String '(script:%d) Unexpected '-''
 * Callers  : 1 -> 0x78ada
 * Callees  : 7 -> 0xddaf0, 0xe7714, 0xea290, 0xf06fa, 0xf0964, 0xf0a2c, 0xf5375
 * Strings  :
 *   - 0x167fbe: "command.cpp"
 *   - 0x167fed: "command.cpp"
 *   - 0x16801c: "command.cpp"
 *   - 0x167f9c: "RANDOM"
 *   - 0x167fa3: "(script:%d) Unexpected '-'"
 *   - 0x167fca: "(script:%d) Expected '=' after '='"
 *   - 0x167ff9: "(script:%d) Expected '=' after '!'"
 ******************************************************************************/
int FUN_0007909c(void)

{
  byte bVar1;
  char *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  char cVar5;
  char *in_EDX;
  undefined4 extraout_EDX;
  undefined1 *unaff_EBX;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  iVar8 = 0;
  while (((((pcVar2 = (char *)*in_EAX, ((&DAT_0017469c)[(byte)(*pcVar2 + 1)] & 0xe0) == 0 &&
            (*pcVar2 != '-')) && (*pcVar2 != '\"')) && ((*pcVar2 != '=' && (*pcVar2 != '!')))) &&
         ((*pcVar2 != '<' && (*pcVar2 != '>'))))) {
    if ((*pcVar2 == '\n') || (*pcVar2 == '\0')) {
      *unaff_EBX = 1;
      return 0;
    }
    *in_EAX = (int)(pcVar2 + 1);
  }
  *in_EDX = '\0';
  pcVar2 = (char *)*in_EAX;
  pcVar7 = in_EDX;
  if (((int)(char)(&DAT_0017469c)[(byte)(*pcVar2 + 1U)] & 0xc0U) != 0) {
    while ((((&DAT_0017469c)[(byte)(*(char *)*in_EAX + 1)] & 0xe0) != 0 || (*(char *)*in_EAX == '_')
           )) {
      *pcVar7 = *(char *)*in_EAX;
      pcVar7 = pcVar7 + 1;
      *in_EAX = *in_EAX + 1;
    }
    *pcVar7 = '\0';
    FUN_000f0a2c();
    for (iVar6 = 0; *(int *)((int)&PTR_s_CREATE_PARTY_00191a04 + iVar6) != 0; iVar6 = iVar6 + 0xd) {
      iVar3 = FUN_000ea290();
      if (iVar3 == 0) {
        iVar8 = (int)&PTR_s_CREATE_PARTY_00191a04 + iVar6;
        break;
      }
    }
    iVar6 = FUN_000ea290();
    in_EAX = extraout_ECX;
    if (iVar6 == 0) {
      while( true ) {
        pcVar2 = (char *)*extraout_ECX;
        pcVar7 = in_EDX;
        if (((&DAT_0017469c)[(byte)(*pcVar2 + 1)] & 0x20) != 0) goto LAB_000791b9;
        if (*pcVar2 == '-') break;
        *extraout_ECX = (int)(pcVar2 + 1);
      }
      cVar5 = *pcVar2;
      while( true ) {
        *pcVar7 = cVar5;
        pcVar7 = pcVar7 + 1;
        *extraout_ECX = *extraout_ECX + 1;
LAB_000791b9:
        if (((&DAT_0017469c)[(byte)(*(char *)*extraout_ECX + 1)] & 0x20) == 0) break;
        cVar5 = *(char *)*extraout_ECX;
      }
      *pcVar7 = '\0';
      uVar4 = FUN_000f0964();
      while (((&DAT_0017469c)[(byte)(*(char *)*extraout_ECX_00 + 1)] & 0x20) == 0) {
        *extraout_ECX_00 = (int)((char *)*extraout_ECX_00 + 1);
      }
      while (((&DAT_0017469c)[(byte)(*(char *)*extraout_ECX_00 + 1)] & 0x20) != 0) {
        *in_EDX = *(char *)*extraout_ECX_00;
        in_EDX = in_EDX + 1;
        *extraout_ECX_00 = *extraout_ECX_00 + 1;
      }
      *in_EDX = '\0';
      FUN_000f0964(uVar4);
      FUN_000f06fa();
      FUN_000f5375(uVar4,iVar8,extraout_EDX);
      in_EAX = extraout_ECX_01;
      pcVar7 = in_EDX;
    }
    goto LAB_00079397;
  }
  if ((*pcVar2 == '-') || (((&DAT_0017469c)[(byte)(*pcVar2 + 1U)] & 0x20) != 0)) {
    if (*(char *)*in_EAX == '-') {
      *in_EDX = *(char *)*in_EAX;
      pcVar7 = in_EDX + 1;
      *in_EAX = *in_EAX + 1;
    }
    if (((&DAT_0017469c)[(byte)(*(char *)*in_EAX + 1)] & 0x20) == 0) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unexpected_____00167fa3,DAT_00179c04);
LAB_00079293:
      FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 900, g_log_buf) */
      return 0;
    }
    while (((&DAT_0017469c)[(byte)(*(char *)*in_EAX + 1)] & 0x20) != 0) {
      *pcVar7 = *(char *)*in_EAX;
      pcVar7 = pcVar7 + 1;
      *in_EAX = *in_EAX + 1;
    }
    goto LAB_00079397;
  }
  if (*pcVar2 == '\"') {
    *in_EAX = (int)(pcVar2 + 1);
    while( true ) {
      pcVar2 = (char *)*in_EAX;
      pcVar7 = in_EDX;
      if ((*pcVar2 == '\0') || (*pcVar2 == '\n')) goto LAB_00079397;
      if (*pcVar2 == '\"') break;
      *in_EDX = *pcVar2;
      in_EDX = in_EDX + 1;
      *in_EAX = *in_EAX + 1;
    }
    *in_EAX = (int)(pcVar2 + 1);
    goto LAB_00079397;
  }
  *in_EDX = *pcVar2;
  *in_EAX = *in_EAX + 1;
  pcVar2 = (char *)*in_EAX;
  bVar1 = pcVar2[-1];
  pcVar7 = in_EDX + 1;
  if (bVar1 < 0x3c) {
    if (bVar1 != 0x21) goto LAB_00079397;
    if (*pcVar2 != '=') {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Expected_____after___00167ff9,DAT_00179c04);
      goto LAB_00079293;
    }
  }
  else {
    if (0x3c < bVar1) {
      if (bVar1 < 0x3e) {
        if (*pcVar2 != '=') {
          FUN_000e7714(&DAT_0019cbac,s__script__d__Expected_____after___00167fca,DAT_00179c04);
          goto LAB_00079293;
        }
        goto LAB_00079327;
      }
      if (bVar1 != 0x3e) goto LAB_00079397;
    }
    if (*pcVar2 != '=') goto LAB_00079397;
  }
LAB_00079327:
  *pcVar7 = *pcVar2;
  *in_EAX = *in_EAX + 1;
  pcVar7 = in_EDX + 2;
LAB_00079397:
  if ((*(char *)*in_EAX == '\0') || (*(char *)*in_EAX == '\n')) {
    *unaff_EBX = 1;
  }
  *pcVar7 = '\0';
  return iVar8;
}

/******************************************************************************
 * Function : dk_script_conditions_script_0793b7 (Ghidra: FUN_000793b7)
 * Prototype: void dk_script_conditions_script_0793b7(void);
 * Address  : 0x793b7 (Size: 512 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:985
 * Naming   : String '(script:%d) Too many conditions in script'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x795b7, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168052: "command.cpp"
 *   - 0x168082: "command.cpp"
 *   - 0x1680b1: "command.cpp"
 *   - 0x1680e2: "command.cpp"
 *   - 0x168028: "(script:%d) Too many conditions in script"
 *   - 0x16805e: "(script:%d) invalid player name, %s"
 *   - 0x16808e: "(script:%d) invalid VARIABLE, '%s'"
 *   - 0x1680bd: "(script:%d) invalid comparison, '%s'"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000793b7(void)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_CX;
  undefined4 in_ECX;
  undefined1 local_14;
  
  if (_DAT_002ec62e < 0x30) {
    iVar1 = FUN_0007a2c0();
    if (iVar1 == -1) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__0016805e,DAT_00179c04,in_EAX);
    }
    else {
      iVar2 = FUN_0007a2c0();
      if (iVar2 == -1) {
        iVar2 = 7;
        iVar3 = FUN_0007a2c0();
        if (iVar3 == -1) {
          iVar2 = 0x1a;
          iVar3 = FUN_0007a2c0();
          if (iVar3 == -1) {
            iVar2 = 0x15;
            iVar3 = FUN_0007a2c0();
            if (iVar3 == -1) {
              iVar2 = 0x19;
              iVar3 = FUN_0007a2c0();
              if (iVar3 == -1) {
                iVar2 = 0x23;
                iVar3 = FUN_0007a2c0();
                if (iVar3 == -1) {
                  FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_VARIABLE_____0016808e,
                               DAT_00179c04);
                  goto LAB_000793f7;
                }
              }
            }
          }
        }
      }
      iVar3 = FUN_0007a2c0();
      if (iVar3 != -1) {
        (&DAT_002ec3ee)[_DAT_002ec62e * 6] = _DAT_00179c08;
        local_14 = (undefined1)iVar1;
        (&DAT_002ec3f1)[_DAT_002ec62e * 0xc] = local_14;
        (&DAT_002ec3f2)[_DAT_002ec62e * 0xc] = (char)iVar2;
        (&DAT_002ec3f5)[_DAT_002ec62e * 0xc] = (char)iVar3;
        *(undefined4 *)(&DAT_002ec3f6 + _DAT_002ec62e * 0xc) = in_ECX;
        *(undefined2 *)(&DAT_002ec3f3 + _DAT_002ec62e * 0xc) = extraout_CX;
        FUN_000795b7();
        _DAT_002ec62e = _DAT_002ec62e + 1;
        return;
      }
      FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_comparison____001680bd,DAT_00179c04);
    }
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_conditions_i_00168028,DAT_00179c04);
  }
LAB_000793f7:
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 985, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_conditions_deep_script_0795b7 (Ghidra: FUN_000795b7)
 * Prototype: void dk_script_conditions_deep_script_0795b7(void);
 * Address  : 0x795b7 (Size: 120 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1051
 * Naming   : String '(script:%d) Conditions too deep in script'
 * Callers  : 3 -> 0x793b7, 0x7a58b, 0x7b430
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168118: "command.cpp"
 *   - 0x1680ee: "(script:%d) Conditions too deep in script"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000795b7(void)

{
  undefined2 in_AX;
  uint uVar1;
  
  if (0x2f < DAT_0037775c) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Conditions_too_deep_i_001680ee,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1051, g_log_buf) */
    return;
  }
  if (-1 < _DAT_00179c08) {
    uVar1 = (uint)DAT_0037775c;
    DAT_0037775c = DAT_0037775c + 1;
    *(short *)(&DAT_003776fc + uVar1 * 2) = _DAT_00179c08;
  }
  _DAT_00179c08 = in_AX;
  return;
}

/******************************************************************************
 * Function : dk_script_unexpected_endif_07962f (Ghidra: FUN_0007962f)
 * Prototype: undefined8 dk_script_unexpected_endif_07962f(void);
 * Address  : 0x7962f (Size: 119 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1066
 * Naming   : String '(script: %d) unexpected ENDIF'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168142: "command.cpp"
 *   - 0x168124: "(script: %d) unexpected ENDIF"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0007962f(void)

{
  undefined4 in_EDX;
  
  if (_DAT_00179c08 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script___d__unexpected_ENDIF_00168124,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1066, g_log_buf) */
  }
  else {
    if (DAT_0037775c != 0) {
      DAT_0037775c = DAT_0037775c - 1;
      _DAT_00179c08 = *(short *)(&DAT_003776fc + (uint)DAT_0037775c * 2);
      return CONCAT44(in_EDX,(int)*(short *)(&DAT_003776fc + (uint)DAT_0037775c * 2));
    }
    _DAT_00179c08 = -1;
  }
  return CONCAT44(in_EDX,0xffffffff);
}

/******************************************************************************
 * Function : dk_script_partys_script_0796a6 (Ghidra: FUN_000796a6)
 * Prototype: void dk_script_partys_script_0796a6(void);
 * Address  : 0x796a6 (Size: 92 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1082
 * Naming   : String '(script:%d) Too many partys in script'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0xddaf0, 0xe7714, 0xe8ca8
 * Strings  :
 *   - 0x168174: "command.cpp"
 *   - 0x16814e: "(script:%d) Too many partys in script"
 ******************************************************************************/
void FUN_000796a6(void)

{
  if (0xf < DAT_002ed332) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_partys_in_s_0016814e,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1082, g_log_buf) */
    return;
  }
  FUN_000e8ca8();
  DAT_002ed332 = DAT_002ed332 + 1;
  return;
}

/******************************************************************************
 * Function : dk_script_creature_level_parameter_079702 (Ghidra: FUN_00079702)
 * Prototype: void dk_script_creature_level_parameter_079702(undefined4 param_1,undefined4 param_2);
 * Address  : 0x79702 (Size: 481 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1134
 * Naming   : String '(script:%d) Invalid CREATURE LEVEL parameter - Range: (1 - 1'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x7a2c0, 0xddaf0, 0xe7714, 0xea290
 * Strings  :
 *   - 0x1681bf: "command.cpp"
 *   - 0x16820a: "command.cpp"
 *   - 0x16823e: "command.cpp"
 *   - 0x168273: "command.cpp"
 *   - 0x1682a4: "command.cpp"
 *   - 0x168180: "(script:%d) Invalid CREATURE LEVEL parameter - Range: (1 - 10)"
 *   - 0x1681cb: "(script:%d) Too many creatures in party, '%s' (max %d members)"
 *   - 0x168216: "(script:%d) Invalid creature name, '%s'"
 *   - 0x16824a: "(script:%d) Invalid objective name, '%s'"
 *   - 0x16827f: "(script:%d) Invalid party name, '%s'"
 ******************************************************************************/
void FUN_00079702(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 extraout_CL;
  undefined2 in_CX;
  int iVar2;
  int extraout_ECX;
  int unaff_EBX;
  int iVar3;
  undefined *puVar4;
  
  if ((unaff_EBX < 1) || (10 < unaff_EBX)) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_CREATURE_LEV_00168180,DAT_00179c04);
  }
  else {
    puVar4 = &DAT_002ec632;
    iVar2 = 0;
    while (iVar2 < DAT_002ed332) {
      iVar3 = iVar2 * 0xd0;
      iVar1 = FUN_000ea290(puVar4);
      if (iVar1 == 0) {
        if ((int)(&DAT_002ec6fe)[iVar2 * 0x34] < 8) {
          iVar1 = FUN_0007a2c0();
          if (iVar1 == -1) {
            FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_creature_nam_00168216,DAT_00179c04);
          }
          else {
            iVar1 = FUN_0007a2c0();
            if (iVar1 != -1) {
              (&DAT_002ec696)[(&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3] =
                   (&DAT_002ec696)[(&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3] & 0xfd;
              (&DAT_002ec698)[(&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3] = extraout_CL;
              *(undefined2 *)(&DAT_002ec69f + (&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3) = in_CX;
              (&DAT_002ec69e)[(&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3] = (char)unaff_EBX + -1;
              *(undefined2 *)(&DAT_002ec6a1 + (&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3) = 1;
              (&DAT_002ec699)[(&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3] = (char)iVar1;
              *(undefined4 *)(&DAT_002ec69a + (&DAT_002ec6fe)[iVar2 * 0x34] * 0xd + iVar3) = param_2
              ;
              (&DAT_002ec6fe)[iVar2 * 0x34] = (&DAT_002ec6fe)[iVar2 * 0x34] + 1;
              return;
            }
            FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_objective_na_0016824a,DAT_00179c04,
                         param_1);
          }
        }
        else {
          FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_creatures_i_001681cb,DAT_00179c04);
        }
        goto LAB_000798d8;
      }
      puVar4 = puVar4 + 0xd0;
      iVar2 = extraout_ECX + 1;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_party_name____0016827f,DAT_00179c04);
  }
LAB_000798d8:
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1134, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_number_parameter_0798e3 (Ghidra: FUN_000798e3)
 * Prototype: void dk_script_number_parameter_0798e3(void);
 * Address  : 0x798e3 (Size: 645 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1231
 * Naming   : String '(script:%d) Invalid NUMBER parameter'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x688a4, 0x7a2c0, 0xddaf0, 0xe7714, 0xea21d, 0xea290
 * Strings  :
 *   - 0x1682d5: "command.cpp"
 *   - 0x16830a: "command.cpp"
 *   - 0x16833a: "command.cpp"
 *   - 0x168369: "command.cpp"
 *   - 0x16839c: "command.cpp"
 *   - 0x1683cc: "command.cpp"
 *   - 0x1683f7: "command.cpp"
 *   - 0x1682b0: "(script:%d) Invalid NUMBER parameter"
 *   - 0x1682e1: "(script:%d) Too many creatures in script"
 *   - 0x168316: "(script:%d) invalid player name, %s"
 *   - 0x168346: "(script:%d) Unknown where_id, '%s'"
 *   - 0x168375: "(script:%d) Unknown Action Point, '%s'"
 *   - 0x1683a8: "(script:%d) Unknown Hero Door, '%s'"
 *   - 0x1683d8: "(script:%d) Unknown party '%s'"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000798e3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_CX;
  int in_ECX;
  byte bVar4;
  undefined4 in_EDX;
  int iVar5;
  undefined1 local_10;
  
  if (in_ECX == 0) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_NUMBER_param_001682b0,DAT_00179c04);
  }
  else if (DAT_002ebfe6 < 0x30) {
    iVar1 = FUN_0007a2c0();
    if (iVar1 == -1) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__00168316,DAT_00179c04);
    }
    else {
      iVar2 = FUN_0007a2c0();
      if (iVar2 == -1) {
        iVar2 = FUN_000ea21d();
        if (iVar2 < 1) {
          if ((*(byte *)(&DAT_001ae9fc)[-iVar2] & 1) == 0) {
            FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Hero_Door____001683a8,DAT_00179c04);
            goto LAB_00079b5f;
          }
          iVar2 = iVar2 + -1000;
        }
        else {
          if (0x1f < iVar2) {
            FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_where_id_____00168346,DAT_00179c04);
            goto LAB_00079b5f;
          }
          if (((&DAT_002eb401)[iVar2 * 10] & 1) == 0) {
            FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Action_Point_00168375,DAT_00179c04);
            goto LAB_00079b5f;
          }
          iVar2 = -iVar2;
        }
      }
      for (iVar5 = 0; iVar5 < DAT_002ed332; iVar5 = iVar5 + 1) {
        iVar3 = FUN_000ea290();
        if (iVar3 == 0) {
          if (_DAT_00179c08 == -1) {
            FUN_000688a4();
            return;
          }
          iVar3 = DAT_002ebfe6 * 0xd;
          bVar4 = DAT_0037775e & 1;
          (&DAT_002ebd76)[iVar3] = (&DAT_002ebd76)[iVar3] & 0xfe;
          (&DAT_002ebd76)[iVar3] = (&DAT_002ebd76)[iVar3] | bVar4;
          (&DAT_002ebd76)[DAT_002ebfe6 * 0xd] = (&DAT_002ebd76)[DAT_002ebfe6 * 0xd] & 0xfd;
          local_10 = (undefined1)iVar1;
          (&DAT_002ebd79)[DAT_002ebfe6 * 0xd] = local_10;
          (&DAT_002ebd78)[DAT_002ebfe6 * 0xd] = -(char)iVar5;
          *(int *)((int)&DAT_002ebd7a + DAT_002ebfe6 * 0xd) = iVar2;
          *(undefined2 *)((int)&DAT_002ebd81 + DAT_002ebfe6 * 0xd) = extraout_CX;
          (&DAT_002ebd77)[DAT_002ebfe6 * 0xd] = DAT_00179c08;
          DAT_002ebfe6 = DAT_002ebfe6 + 1;
          return;
        }
      }
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_party___s__001683d8,DAT_00179c04,in_EDX);
    }
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_creatures_i_001682e1,DAT_00179c04);
  }
LAB_00079b5f:
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1231, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_creature_level_parameter_079b68 (Ghidra: FUN_00079b68)
 * Prototype: void dk_script_creature_level_parameter_079b68(int param_1,undefined4 param_2);
 * Address  : 0x79b68 (Size: 716 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1241
 * Naming   : String '(script:%d) Invalid CREATURE LEVEL parameter'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x68873, 0x7a2c0, 0xddaf0, 0xe7714, 0xea21d
 * Strings  :
 *   - 0x168430: "command.cpp"
 *   - 0x16846b: "command.cpp"
 *   - 0x1684a0: "command.cpp"
 *   - 0x1684d2: "command.cpp"
 *   - 0x168501: "command.cpp"
 *   - 0x168530: "command.cpp"
 *   - 0x168563: "command.cpp"
 *   - 0x168593: "command.cpp"
 *   - 0x168403: "(script:%d) Invalid CREATURE LEVEL parameter"
 *   - 0x16843c: "(script:%d) Invalid number of creatures to add"
 *   - 0x168477: "(script:%d) Too many creatures in script"
 *   - 0x1684ac: "(script:%d) invalid player name, '%s'"
 *   - 0x1684de: "(script:%d) Unknown creature, '%s'"
 *   - 0x16850d: "(script:%d) Unknown where_id, '%s'"
 *   - 0x16853c: "(script:%d) Unknown Action Point, '%s'"
 *   - 0x16856f: "(script:%d) Unknown Hero Door, '%s'"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00079b68(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_CX;
  undefined2 extraout_CX_00;
  undefined2 uVar5;
  int in_ECX;
  byte bVar6;
  undefined1 local_14;
  undefined1 local_10;
  
  if ((param_1 < 1) || (10 < param_1)) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_CREATURE_LEV_00168403,DAT_00179c04);
  }
  else if (in_ECX == 0) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_number_of_cr_0016843c,DAT_00179c04);
  }
  else if (DAT_002ebfe6 < 0x30) {
    iVar1 = FUN_0007a2c0();
    if (iVar1 == -1) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__001684ac,DAT_00179c04);
    }
    else {
      iVar2 = FUN_0007a2c0();
      if (iVar2 == -1) {
        FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_creature_____001684de,DAT_00179c04);
      }
      else {
        iVar3 = FUN_0007a2c0();
        uVar5 = extraout_CX;
        if (iVar3 != -1) {
LAB_00079d66:
          if (_DAT_00179c08 == -1) {
            FUN_00068873(param_2,param_1 + -1);
            return;
          }
          iVar4 = DAT_002ebfe6 * 0xd;
          bVar6 = DAT_0037775e & 1;
          (&DAT_002ebd76)[iVar4] = (&DAT_002ebd76)[iVar4] & 0xfe;
          (&DAT_002ebd76)[iVar4] = (&DAT_002ebd76)[iVar4] | bVar6;
          (&DAT_002ebd76)[DAT_002ebfe6 * 0xd] = (&DAT_002ebd76)[DAT_002ebfe6 * 0xd] & 0xfd;
          local_10 = (undefined1)iVar1;
          (&DAT_002ebd79)[DAT_002ebfe6 * 0xd] = local_10;
          local_14 = (undefined1)iVar2;
          (&DAT_002ebd78)[DAT_002ebfe6 * 0xd] = local_14;
          *(int *)((int)&DAT_002ebd7a + DAT_002ebfe6 * 0xd) = iVar3;
          (&DAT_002ebd7e)[DAT_002ebfe6 * 0xd] = (char)param_1 + -1;
          *(short *)((int)&DAT_002ebd7f + DAT_002ebfe6 * 0xd) = (short)param_2;
          *(undefined2 *)((int)&DAT_002ebd81 + DAT_002ebfe6 * 0xd) = uVar5;
          (&DAT_002ebd77)[DAT_002ebfe6 * 0xd] = DAT_00179c08;
          DAT_002ebfe6 = DAT_002ebfe6 + 1;
          return;
        }
        iVar3 = FUN_000ea21d();
        uVar5 = extraout_CX_00;
        if (iVar3 < 1) {
          if ((*(byte *)(&DAT_001ae9fc)[-iVar3] & 1) != 0) {
            iVar3 = iVar3 + -1000;
            goto LAB_00079d66;
          }
          FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Hero_Door____0016856f,DAT_00179c04);
        }
        else if (iVar3 < 0x20) {
          if (((&DAT_002eb401)[iVar3 * 10] & 1) != 0) {
            iVar3 = -iVar3;
            goto LAB_00079d66;
          }
          FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Action_Point_0016853c,DAT_00179c04);
        }
        else {
          FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_where_id_____0016850d,DAT_00179c04);
        }
      }
    }
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_creatures_i_00168477,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1241, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_name_079e34 (Ghidra: FUN_00079e34)
 * Prototype: void dk_script_player_name_079e34(void);
 * Address  : 0x79e34 (Size: 125 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1369
 * Naming   : String '(script:%d) invalid player name, '%s''
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1685c5: "command.cpp"
 *   - 0x16859f: "(script:%d) invalid player name, '%s'"
 ******************************************************************************/
void FUN_00079e34(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int in_EDX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 != -1) {
    if (iVar1 == 8) {
      iVar1 = 0;
      do {
        iVar2 = iVar1 + 0x1508;
        *(int *)((int)&DAT_002e1086 + iVar1) = *(int *)((int)&DAT_002e1086 + iVar1) + in_EDX;
        *(int *)((int)&DAT_002e1082 + iVar1) = *(int *)((int)&DAT_002e1082 + iVar1) + in_EDX;
        iVar1 = iVar2;
      } while (iVar2 != 0x6928);
    }
    else {
      (&DAT_002e1086)[iVar1 * 0x542] = (&DAT_002e1086)[iVar1 * 0x542] + in_EDX;
      (&DAT_002e1082)[iVar1 * 0x542] = (&DAT_002e1082)[iVar1 * 0x542] + in_EDX;
    }
    return;
  }
  FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__0016859f,DAT_00179c04,extraout_ECX);
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1369, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_values_script_079eb1 (Ghidra: FUN_00079eb1)
 * Prototype: void dk_script_values_script_079eb1(undefined4 param_1);
 * Address  : 0x79eb1 (Size: 239 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1392
 * Naming   : String '(script:%d) Too many VALUEs in script'
 * Callers  : 19 -> 0x79fa0, 0x7a040, 0x7a0e0, 0x7a180, 0x7a220, 0x7a2ec, 0x7a6b8, 0x7aae5, 0x7ab81, 0x7abe0 ...
 * Callees  : 3 -> 0x68340, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1685f7: "command.cpp"
 *   - 0x1685d1: "(script:%d) Too many VALUEs in script"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00079eb1(undefined4 param_1)

{
  undefined1 in_AL;
  int iVar1;
  undefined4 in_ECX;
  undefined1 in_DL;
  ushort uVar2;
  undefined4 unaff_EBX;
  
  if (0x3f < DAT_002ec3ea) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_VALUEs_in_s_001685d1,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1392, g_log_buf) */
    return;
  }
  if (_DAT_00179c08 == -1) {
    FUN_00068340(param_1);
    return;
  }
  iVar1 = DAT_002ec3ea * 0x10;
  uVar2 = CONCAT11(DAT_0037775e,in_DL) & 0x1ff;
  (&DAT_002ebfea)[iVar1] = (&DAT_002ebfea)[iVar1] & 0xfe;
  (&DAT_002ebfea)[iVar1] = (&DAT_002ebfea)[iVar1] | (byte)(uVar2 >> 8);
  (&DAT_002ebfea)[DAT_002ec3ea * 0x10] = (&DAT_002ebfea)[DAT_002ec3ea * 0x10] & 0xfd;
  (&DAT_002ebfec)[DAT_002ec3ea * 0x10] = in_AL;
  (&DAT_002ebfed)[DAT_002ec3ea * 0x10] = (char)uVar2;
  (&DAT_002ebfee)[DAT_002ec3ea * 4] = unaff_EBX;
  (&DAT_002ebff2)[DAT_002ec3ea * 4] = in_ECX;
  (&DAT_002ebff6)[DAT_002ec3ea * 4] = param_1;
  (&DAT_002ebfeb)[DAT_002ec3ea * 0x10] = DAT_00179c08;
  DAT_002ec3ea = DAT_002ec3ea + 1;
  return;
}

/******************************************************************************
 * Function : dk_script_player_079fa0 (Ghidra: FUN_00079fa0)
 * Prototype: void dk_script_player_079fa0(void);
 * Address  : 0x79fa0 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1422
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168624: "command.cpp"
 *   - 0x16864f: "command.cpp"
 *   - 0x168603: "(script:%d) Unknown player, '%s'"
 *   - 0x168630: "(script:%d) Unknown room, '%s'"
 ******************************************************************************/
void FUN_00079fa0(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168603,DAT_00179c04);
  }
  else {
    iVar1 = FUN_0007a2c0(iVar1);
    if (iVar1 != -1) {
      FUN_00079eb1(extraout_ECX);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_room____s__00168630,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1422, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07a040 (Ghidra: FUN_0007a040)
 * Prototype: void dk_script_player_07a040(void);
 * Address  : 0x7a040 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1445
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16867c: "command.cpp"
 *   - 0x1686ab: "command.cpp"
 *   - 0x16865b: "(script:%d) Unknown player, '%s'"
 *   - 0x168688: "(script:%d) Unknown creature, '%s'"
 ******************************************************************************/
void FUN_0007a040(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__0016865b,DAT_00179c04);
  }
  else {
    iVar1 = FUN_0007a2c0(iVar1);
    if (iVar1 != -1) {
      FUN_00079eb1(extraout_ECX);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_creature_____00168688,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1445, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07a0e0 (Ghidra: FUN_0007a0e0)
 * Prototype: void dk_script_player_07a0e0(void);
 * Address  : 0x7a0e0 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1468
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1686d8: "command.cpp"
 *   - 0x168704: "command.cpp"
 *   - 0x1686b7: "(script:%d) Unknown player, '%s'"
 *   - 0x1686e4: "(script:%d) Unknown magic, '%s'"
 ******************************************************************************/
void FUN_0007a0e0(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__001686b7,DAT_00179c04);
  }
  else {
    iVar1 = FUN_0007a2c0(iVar1);
    if (iVar1 != -1) {
      FUN_00079eb1(extraout_ECX);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_magic____s__001686e4,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1468, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07a180 (Ghidra: FUN_0007a180)
 * Prototype: void dk_script_player_07a180(void);
 * Address  : 0x7a180 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1491
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168731: "command.cpp"
 *   - 0x16875c: "command.cpp"
 *   - 0x168710: "(script:%d) Unknown player, '%s'"
 *   - 0x16873d: "(script:%d) Unknown trap, '%s'"
 ******************************************************************************/
void FUN_0007a180(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168710,DAT_00179c04);
  }
  else {
    iVar1 = FUN_0007a2c0(iVar1);
    if (iVar1 != -1) {
      FUN_00079eb1(extraout_ECX);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_trap____s__0016873d,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1491, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07a220 (Ghidra: FUN_0007a220)
 * Prototype: void dk_script_player_07a220(void);
 * Address  : 0x7a220 (Size: 160 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1514
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168789: "command.cpp"
 *   - 0x1687b4: "command.cpp"
 *   - 0x168768: "(script:%d) Unknown player, '%s'"
 *   - 0x168795: "(script:%d) Unknown door, '%s'"
 ******************************************************************************/
void FUN_0007a220(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168768,DAT_00179c04);
  }
  else {
    iVar1 = FUN_0007a2c0(iVar1);
    if (iVar1 != -1) {
      FUN_00079eb1(extraout_ECX);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_door____s__00168795,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1514, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : get_script_command_id (Ghidra: FUN_0007a2c0)
 * Prototype: uint get_script_command_id(void);
 * Address  : 0x7a2c0 (Size: 44 bytes)
 * Module   : command.cpp [contiguous_same_unit_span]
 * Naming   : Case-insensitive lookup of script token in 5-byte CommandDesc table
 * Callers  : 31 -> 0x793b7, 0x79702, 0x798e3, 0x79b68, 0x79e34, 0x79fa0, 0x7a040, 0x7a0e0, 0x7a180, 0x7a220 ...
 * Callees  : 1 -> 0xea290
 ******************************************************************************/
uint FUN_0007a2c0(void)

{
  int *in_EAX;
  int iVar1;
  
  while( true ) {
    if (*in_EAX == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_000ea290();
    if (iVar1 == 0) break;
    in_EAX = (int *)((int)in_EAX + 5);
  }
  return (uint)*(byte *)(in_EAX + 1);
}

/******************************************************************************
 * Function : dk_script_player_name_07a2ec (Ghidra: FUN_0007a2ec)
 * Prototype: void dk_script_player_name_07a2ec(void);
 * Address  : 0x7a2ec (Size: 585 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1548
 * Naming   : String '(script:%d) invalid player name, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1687e6: "command.cpp"
 *   - 0x168828: "command.cpp"
 *   - 0x16886a: "command.cpp"
 *   - 0x16889e: "command.cpp"
 *   - 0x1688ca: "command.cpp"
 *   - 0x1688f5: "command.cpp"
 *   - 0x168924: "command.cpp"
 *   - 0x168953: "command.cpp"
 *   - 0x1687c0: "(script:%d) invalid player name, '%s'"
 *   - 0x1687f2: "(script:%d) Too many RESEARCH ITEMS, for player, '%d'"
 *   - 0x168834: "(script:%d) Too many RESEARCH ITEMS, for player, '%s'"
 *   - 0x168876: "(script:%d) invalid research type, '%s'"
 *   - 0x1688aa: "(script:%d) Unknown magic, '%s'"
 *   - 0x1688d6: "(script:%d) Unknown room, '%s'"
 *   - 0x168901: "(script:%d) Unknown creature, '%s'"
 *   - 0x168930: "(script:%d) Unhandled type_id case"
 ******************************************************************************/
void FUN_0007a2ec(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__001687c0,DAT_00179c04);
  }
  else {
    if (iVar1 == 8) {
      iVar4 = 0;
      for (iVar1 = 0; iVar1 < 0x6928; iVar1 = iVar1 + 0x1508) {
        if (0x21 < (byte)(&DAT_002e1505)[iVar1]) {
          FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_RESEARCH_IT_001687f2,DAT_00179c04,iVar4)
          ;
          goto LAB_0007a332;
        }
        iVar4 = iVar4 + 1;
      }
    }
    else if (0x21 < (byte)(&DAT_002e1505)[iVar1 * 0x1508]) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_RESEARCH_IT_00168834,DAT_00179c04);
      goto LAB_0007a332;
    }
    uVar2 = FUN_0007a2c0();
    if (uVar2 == 0xffffffff) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_research_typ_00168876,DAT_00179c04);
    }
    else {
      if (uVar2 < 2) {
        if (uVar2 == 1) {
          iVar1 = FUN_0007a2c0(1);
          uVar3 = extraout_ECX;
          if (iVar1 != -1) goto LAB_0007a51e;
          FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_magic____s__001688aa,DAT_00179c04);
          goto LAB_0007a332;
        }
      }
      else {
        if (uVar2 < 3) {
          iVar1 = FUN_0007a2c0(uVar2);
          uVar3 = extraout_ECX_00;
          if (iVar1 != -1) {
LAB_0007a51e:
            FUN_00079eb1(uVar3);
            return;
          }
          FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_room____s__001688d6,DAT_00179c04);
          goto LAB_0007a332;
        }
        if (uVar2 == 3) {
          iVar1 = FUN_0007a2c0(3);
          uVar3 = extraout_ECX_01;
          if (iVar1 != -1) goto LAB_0007a51e;
          FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_creature_____00168901,DAT_00179c04);
          goto LAB_0007a332;
        }
      }
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unhandled_type_id_ca_00168930,DAT_00179c04);
    }
  }
LAB_0007a332:
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1548, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07a535 (Ghidra: FUN_0007a535)
 * Prototype: void dk_script_player_07a535(void);
 * Address  : 0x7a535 (Size: 86 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1632
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x69a12, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168980: "command.cpp"
 *   - 0x16895f: "(script:%d) Unknown player, '%s'"
 ******************************************************************************/
void FUN_0007a535(void)

{
  int iVar1;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__0016895f,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1632, g_log_buf) */
    return;
  }
  FUN_00069a12();
  return;
}

/******************************************************************************
 * Function : dk_script_conditions_script_07a58b (Ghidra: FUN_0007a58b)
 * Prototype: void dk_script_conditions_script_07a58b(void);
 * Address  : 0x7a58b (Size: 301 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1670
 * Naming   : String '(script:%d) Too many conditions in script'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x795b7, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1689b6: "command.cpp"
 *   - 0x1689e9: "command.cpp"
 *   - 0x168a19: "command.cpp"
 *   - 0x16898c: "(script:%d) Too many conditions in script"
 *   - 0x1689c2: "(script:%d) Unknown Action Point, '%d'"
 *   - 0x1689f5: "(script:%d) invalid player name, %s"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007a58b(void)

{
  int in_EAX;
  int iVar1;
  undefined4 extraout_ECX;
  
  if (_DAT_002ec62e < 0x30) {
    if (((in_EAX < 1) || (0x20 < in_EAX)) || (((&DAT_002eb401)[in_EAX * 10] & 1) == 0)) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Action_Point_001689c2,DAT_00179c04);
    }
    else {
      iVar1 = FUN_0007a2c0();
      if (iVar1 != -1) {
        (&DAT_002ec3ee)[_DAT_002ec62e * 6] = _DAT_00179c08;
        (&DAT_002ec3f1)[_DAT_002ec62e * 0xc] = (char)iVar1;
        (&DAT_002ec3f2)[_DAT_002ec62e * 0xc] = 0x13;
        (&DAT_002ec3f5)[_DAT_002ec62e * 0xc] = 0;
        *(undefined4 *)(&DAT_002ec3f6 + _DAT_002ec62e * 0xc) = 0;
        *(short *)(&DAT_002ec3f3 + _DAT_002ec62e * 0xc) = (short)in_EAX;
        FUN_000795b7();
        _DAT_002ec62e = _DAT_002ec62e + 1;
        return;
      }
      FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__001689f5,DAT_00179c04,
                   extraout_ECX);
    }
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_conditions_i_0016898c,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1670, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07a6b8 (Ghidra: FUN_0007a6b8)
 * Prototype: void dk_script_player_07a6b8(void);
 * Address  : 0x7a6b8 (Size: 156 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1705
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168a46: "command.cpp"
 *   - 0x168a72: "command.cpp"
 *   - 0x168a25: "(script:%d) Unknown player, '%s'"
 *   - 0x168a52: "(script:%d) Unknown timer, '%s'"
 ******************************************************************************/
void FUN_0007a6b8(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168a25,DAT_00179c04,extraout_ECX
                );
  }
  else {
    iVar1 = FUN_0007a2c0();
    if (iVar1 != -1) {
      FUN_00079eb1(0);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_timer____s__00168a52,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1705, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_tunnellers_script_07a754 (Ghidra: FUN_0007a754)
 * Prototype: void dk_script_tunnellers_script_07a754(byte param_1,undefined4 param_2);
 * Address  : 0x7a754 (Size: 681 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1724
 * Naming   : String '(script:%d) Too many tunnellers in script'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x689a7, 0x7a2c0, 0xddaf0, 0xe7714, 0xea21d
 * Strings  :
 *   - 0x168aa8: "command.cpp"
 *   - 0x168ad5: "command.cpp"
 *   - 0x168b04: "command.cpp"
 *   - 0x168b37: "command.cpp"
 *   - 0x168b67: "command.cpp"
 *   - 0x168b96: "command.cpp"
 *   - 0x168bcf: "command.cpp"
 *   - 0x168a7e: "(script:%d) Too many tunnellers in script"
 *   - 0x168ab4: "(script:%d) Unknown player, '%s'"
 *   - 0x168ae1: "(script:%d) Unknown where_id, '%s'"
 *   - 0x168b10: "(script:%d) Unknown Action Point, '%s'"
 *   - 0x168b43: "(script:%d) Unknown Hero Door, '%s'"
 *   - 0x168b73: "(script:%d) Unknown head_for, '%s'"
 *   - 0x168ba2: "(script:%d) Invalid CREATURE LEVEL parameter"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007a754(byte param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  ushort uVar5;
  undefined1 local_10;
  
  if (DAT_002ebd72 < 0x10) {
    iVar1 = FUN_0007a2c0();
    if (iVar1 == -1) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168ab4,DAT_00179c04,in_EAX);
    }
    else {
      iVar2 = FUN_0007a2c0();
      if (iVar2 == -1) {
        iVar2 = FUN_000ea21d();
        if (iVar2 < 1) {
          if ((*(byte *)(&DAT_001ae9fc)[-iVar2] & 1) == 0) {
            FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Hero_Door____00168b43,DAT_00179c04);
            goto LAB_0007a78d;
          }
          iVar2 = iVar2 + -1000;
        }
        else {
          if (0x1f < iVar2) {
            FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_where_id_____00168ae1,DAT_00179c04);
            goto LAB_0007a78d;
          }
          if (((&DAT_002eb401)[iVar2 * 10] & 1) == 0) {
            FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Action_Point_00168b10,DAT_00179c04);
            goto LAB_0007a78d;
          }
          iVar2 = -iVar2;
        }
      }
      iVar3 = FUN_0007a2c0();
      if (iVar3 == -1) {
        FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_head_for_____00168b73,DAT_00179c04);
      }
      else {
        if ((param_1 != 0) && (param_1 < 0xb)) {
          if (_DAT_00179c08 == -1) {
            FUN_000689a7(param_1 - 1,param_2);
            return;
          }
          iVar4 = DAT_002ebd72 * 0x12;
          uVar5 = CONCAT11(DAT_0037775e,(char)iVar3) & 0x1ff;
          (&DAT_002ebc52)[iVar4] = (&DAT_002ebc52)[iVar4] & 0xfe;
          (&DAT_002ebc52)[iVar4] = (&DAT_002ebc52)[iVar4] | (byte)(uVar5 >> 8);
          (&DAT_002ebc52)[DAT_002ebd72 * 0x12] = (&DAT_002ebc52)[DAT_002ebd72 * 0x12] & 0xfd;
          (&DAT_002ebc53)[DAT_002ebd72 * 0x12] = DAT_00179c08;
          local_10 = (undefined1)iVar1;
          (&DAT_002ebc54)[DAT_002ebd72 * 0x12] = local_10;
          *(int *)((int)&DAT_002ebc55 + DAT_002ebd72 * 0x12) = iVar2;
          (&DAT_002ebc59)[DAT_002ebd72 * 0x12] = (char)uVar5;
          *(undefined4 *)((int)&DAT_002ebc5a + DAT_002ebd72 * 0x12) = extraout_ECX;
          (&DAT_002ebc62)[DAT_002ebd72 * 0x12] = param_1 - 1;
          *(undefined4 *)((int)&DAT_002ebc5e + DAT_002ebd72 * 0x12) = param_2;
          (&DAT_002ebc63)[DAT_002ebd72 * 0x12] = 0;
          DAT_002ebd72 = DAT_002ebd72 + 1;
          return;
        }
        FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_CREATURE_LEV_00168ba2,DAT_00179c04);
      }
    }
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_tunnellers_i_00168a7e,DAT_00179c04);
  }
LAB_0007a78d:
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1724, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_condition_win_game_07a9fd (Ghidra: FUN_0007a9fd)
 * Prototype: void dk_script_condition_win_game_07a9fd(void);
 * Address  : 0x7a9fd (Size: 116 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1818
 * Naming   : String '(script:%d) No condition for WIN GAME'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168c01: "command.cpp"
 *   - 0x168c2f: "command.cpp"
 *   - 0x168bdb: "(script:%d) No condition for WIN GAME"
 *   - 0x168c0d: "Too many WIN CONDITIONS in script"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007a9fd(void)

{
  if (_DAT_00179c08 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__No_condition_for_WIN_00168bdb,DAT_00179c04);
  }
  else if (DAT_002ed33e < 4) {
    (&DAT_002ed336)[DAT_002ed33e] = _DAT_00179c08;
    DAT_002ed33e = DAT_002ed33e + 1;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1818, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_condition_lose_game_07aa71 (Ghidra: FUN_0007aa71)
 * Prototype: void dk_script_condition_lose_game_07aa71(void);
 * Address  : 0x7aa71 (Size: 116 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1835
 * Naming   : String '(script:%d) No condition for LOSE GAME'
 * Callers  : 0 -> 
 * Callees  : 2 -> 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168c62: "command.cpp"
 *   - 0x168c91: "command.cpp"
 *   - 0x168c3b: "(script:%d) No condition for LOSE GAME"
 *   - 0x168c6e: "Too many LOSE CONDITIONS in script"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007aa71(void)

{
  if (_DAT_00179c08 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__No_condition_for_LOS_00168c3b,DAT_00179c04);
  }
  else if (DAT_002ed34a < 4) {
    (&DAT_002ed342)[DAT_002ed34a] = _DAT_00179c08;
    DAT_002ed34a = DAT_002ed34a + 1;
    return;
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1835, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07aae5 (Ghidra: FUN_0007aae5)
 * Prototype: void dk_script_player_07aae5(void);
 * Address  : 0x7aae5 (Size: 156 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1936
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168cbe: "command.cpp"
 *   - 0x168ce9: "command.cpp"
 *   - 0x168c9d: "(script:%d) Unknown player, '%s'"
 *   - 0x168cca: "(script:%d) Unknown flag, '%s'"
 ******************************************************************************/
void FUN_0007aae5(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168c9d,DAT_00179c04,extraout_ECX
                );
  }
  else {
    iVar1 = FUN_0007a2c0();
    if (iVar1 != -1) {
      FUN_00079eb1(0);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_flag____s__00168cca,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1936, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07ab81 (Ghidra: FUN_0007ab81)
 * Prototype: void dk_script_player_07ab81(void);
 * Address  : 0x7ab81 (Size: 95 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:1955
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168d16: "command.cpp"
 *   - 0x168cf5: "(script:%d) Unknown player, '%s'"
 ******************************************************************************/
void FUN_0007ab81(void)

{
  int iVar1;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168cf5,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 1955, g_log_buf) */
    return;
  }
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : dk_script_text_number_07abe0 (Ghidra: FUN_0007abe0)
 * Prototype: void dk_script_text_number_07abe0(void);
 * Address  : 0x7abe0 (Size: 329 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2043
 * Naming   : String '(script:%d) Invalid TEXT number'
 * Callers  : 0 -> 
 * Callees  : 5 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714, 0xea21d
 * Strings  :
 *   - 0x168d42: "command.cpp"
 *   - 0x168d71: "command.cpp"
 *   - 0x168da4: "command.cpp"
 *   - 0x168dd4: "command.cpp"
 *   - 0x168d22: "(script:%d) Invalid TEXT number"
 *   - 0x168d4e: "(script:%d) Unknown where_id, '%s'"
 *   - 0x168d7d: "(script:%d) Unknown Action Point, '%s'"
 *   - 0x168db0: "(script:%d) Unknown Hero Door, '%s'"
 ******************************************************************************/
void FUN_0007abe0(void)

{
  int in_EAX;
  int iVar1;
  uint in_ECX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int in_EDX;
  uint unaff_EBX;
  
  if (in_EAX < 0) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_TEXT_number_00168d22,DAT_00179c04);
  }
  else {
    if (((in_EDX == 0) || (iVar1 = FUN_0007a2c0(), in_ECX = extraout_ECX, iVar1 != -1)) ||
       (iVar1 = FUN_000ea21d(), in_ECX = extraout_ECX_00, iVar1 == 0)) {
LAB_0007ad03:
      FUN_00079eb1(unaff_EBX & 0xff | (in_ECX & 0xff) << 8);
      return;
    }
    if (iVar1 < 1) {
      if ((*(byte *)(&DAT_001ae9fc)[-iVar1] & 1) != 0) goto LAB_0007ad03;
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Hero_Door____00168db0,DAT_00179c04);
    }
    else if (iVar1 < 0x20) {
      if (((&DAT_002eb401)[iVar1 * 10] & 1) != 0) goto LAB_0007ad03;
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Action_Point_00168d7d,DAT_00179c04);
    }
    else {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_where_id_____00168d4e,DAT_00179c04);
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2043, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_information_number_07ad29 (Ghidra: FUN_0007ad29)
 * Prototype: void dk_script_information_number_07ad29(void);
 * Address  : 0x7ad29 (Size: 70 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2186
 * Naming   : String '(script:%d) Invalid INFORMATION number'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x79eb1, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168e07: "command.cpp"
 *   - 0x168de0: "(script:%d) Invalid INFORMATION number"
 ******************************************************************************/
void FUN_0007ad29(void)

{
  int in_EAX;
  
  if (in_EAX < 0) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_INFORMATION_n_00168de0,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2186, g_log_buf) */
    return;
  }
  FUN_00079eb1();
  return;
}

/******************************************************************************
 * Function : dk_script_tunnellers_script_07ad6f (Ghidra: FUN_0007ad6f)
 * Prototype: void dk_script_tunnellers_script_07ad6f(undefined4 param_1,byte param_2,undefined4 param_3);
 * Address  : 0x7ad6f (Size: 851 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2209; command.cpp:2229
 * Naming   : String '(script:%d) Too many tunnellers in script'
 * Callers  : 0 -> 
 * Callees  : 6 -> 0x68ad7, 0x7a2c0, 0xddaf0, 0xe7714, 0xea21d, 0xea290
 * Strings  :
 *   - 0x168e3d: "command.cpp"
 *   - 0x168e6a: "command.cpp"
 *   - 0x168e9b: "command.cpp"
 *   - 0x168ec6: "command.cpp"
 *   - 0x168ef5: "command.cpp"
 *   - 0x168f28: "command.cpp"
 *   - 0x168f58: "command.cpp"
 *   - 0x168f87: "command.cpp"
 *   - 0x168fc0: "command.cpp"
 *   - 0x168e13: "(script:%d) Too many tunnellers in script"
 *   - 0x168e49: "(script:%d) Unknown player, '%s'"
 *   - 0x168e76: "(script:%d) Unknown party_name, '%s'"
 *   - 0x168ea7: "Party too big (Max %d members)"
 *   - 0x168ed2: "(script:%d) Unknown where_id, '%s'"
 *   - 0x168f01: "(script:%d) Unknown Action Point, '%s'"
 *   - 0x168f34: "(script:%d) Unknown Hero Door, '%s'"
 *   - 0x168f64: "(script:%d) Unknown head_for, '%s'"
 *   - 0x168f93: "(script:%d) Invalid CREATURE LEVEL parameter"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007ad6f(undefined4 param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  ushort uVar4;
  undefined4 in_EDX;
  int iVar5;
  undefined1 local_14;
  int local_10;
  
  if (DAT_002ebd72 < 0x10) {
    iVar1 = FUN_0007a2c0();
    if (iVar1 == -1) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__00168e49,DAT_00179c04);
    }
    else {
      local_10 = -1;
      iVar5 = 0;
      while ((iVar3 = local_10, iVar5 < DAT_002ed332 &&
             (iVar2 = FUN_000ea290(), iVar3 = iVar5, iVar2 != 0))) {
        iVar5 = iVar5 + 1;
      }
      local_10 = iVar3;
      if (local_10 == -1) {
        FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_party_name____00168e76,DAT_00179c04,in_EDX)
        ;
        FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2209, g_log_buf) */
      }
      if ((int)(&DAT_002ec6fe)[local_10 * 0x34] < 7) {
        iVar5 = FUN_0007a2c0();
        if (iVar5 == -1) {
          iVar5 = FUN_000ea21d();
          if (iVar5 < 1) {
            if ((*(byte *)(&DAT_001ae9fc)[-iVar5] & 1) == 0) {
              FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Hero_Door____00168f34,DAT_00179c04);
              goto LAB_0007adac;
            }
            iVar5 = iVar5 + -1000;
          }
          else {
            if (0x1f < iVar5) {
              FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_where_id_____00168ed2,DAT_00179c04);
              goto LAB_0007adac;
            }
            if (((&DAT_002eb401)[iVar5 * 10] & 1) == 0) {
              FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Action_Point_00168f01,DAT_00179c04);
              goto LAB_0007adac;
            }
            iVar5 = -iVar5;
          }
        }
        iVar3 = FUN_0007a2c0();
        if (iVar3 == -1) {
          FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_head_for_____00168f64,DAT_00179c04,
                       extraout_ECX);
        }
        else {
          if ((param_2 != 0) && (param_2 < 0xb)) {
            if (_DAT_00179c08 == -1) {
              FUN_00068ad7(param_1,param_2 - 1,param_3);
              return;
            }
            iVar2 = DAT_002ebd72 * 0x12;
            uVar4 = CONCAT11(DAT_0037775e,(char)iVar3) & 0x1ff;
            (&DAT_002ebc52)[iVar2] = (&DAT_002ebc52)[iVar2] & 0xfe;
            (&DAT_002ebc52)[iVar2] = (&DAT_002ebc52)[iVar2] | (byte)(uVar4 >> 8);
            (&DAT_002ebc52)[DAT_002ebd72 * 0x12] = (&DAT_002ebc52)[DAT_002ebd72 * 0x12] & 0xfd;
            (&DAT_002ebc53)[DAT_002ebd72 * 0x12] = DAT_00179c08;
            local_14 = (undefined1)iVar1;
            (&DAT_002ebc54)[DAT_002ebd72 * 0x12] = local_14;
            *(int *)((int)&DAT_002ebc55 + DAT_002ebd72 * 0x12) = iVar5;
            (&DAT_002ebc59)[DAT_002ebd72 * 0x12] = (char)uVar4;
            *(undefined4 *)((int)&DAT_002ebc5a + DAT_002ebd72 * 0x12) = param_1;
            (&DAT_002ebc62)[DAT_002ebd72 * 0x12] = param_2 - 1;
            *(undefined4 *)((int)&DAT_002ebc5e + DAT_002ebd72 * 0x12) = param_3;
            (&DAT_002ebc63)[DAT_002ebd72 * 0x12] = (char)local_10 + '\x01';
            DAT_002ebd72 = DAT_002ebd72 + 1;
            return;
          }
          FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_CREATURE_LEV_00168f93,DAT_00179c04);
        }
      }
      else {
        FUN_000e7714(&DAT_0019cbac,s_Party_too_big__Max__d_members__00168ea7,7);
      }
    }
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_tunnellers_i_00168e13,DAT_00179c04);
  }
LAB_0007adac:
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2229, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_creature_07b0c2 (Ghidra: FUN_0007b0c2)
 * Prototype: void dk_script_creature_07b0c2(void);
 * Address  : 0x7b0c2 (Size: 145 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2312
 * Naming   : String '(script:%d) Unknown creature, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x168fef: "command.cpp"
 *   - 0x169037: "command.cpp"
 *   - 0x168fcc: "(script:%d) Unknown creature, '%s'"
 *   - 0x168ffb: "(script:%d) Invalid number, %d, of creatures for pool, '%d'"
 ******************************************************************************/
void FUN_0007b0c2(void)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_creature_____00168fcc,DAT_00179c04);
  }
  else {
    if ((-2 < extraout_ECX) && (extraout_ECX < 0x101)) {
      FUN_00079eb1(0);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_number___d__o_00168ffb,DAT_00179c04,
                 extraout_ECX);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2312, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_action_point_07b153 (Ghidra: FUN_0007b153)
 * Prototype: void dk_script_action_point_07b153(void);
 * Address  : 0x7b153 (Size: 138 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2329
 * Naming   : String '(script:%d) Invalid Action Point, '%s''
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x79eb1, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x16906a: "command.cpp"
 *   - 0x16909d: "command.cpp"
 *   - 0x169043: "(script:%d) Invalid Action Point, '%s'"
 *   - 0x169076: "(script:%d) Unknown Action Point, '%s'"
 ******************************************************************************/
void FUN_0007b153(void)

{
  int in_EAX;
  
  if ((in_EAX < 1) || (0x20 < in_EAX)) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_Action_Point_00169043,DAT_00179c04);
  }
  else {
    if (((&DAT_002eb401)[in_EAX * 10] & 1) != 0) {
      FUN_00079eb1(0);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_Action_Point_00169076,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2329, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_07b1dd (Ghidra: FUN_0007b1dd)
 * Prototype: void dk_script_player_07b1dd(void);
 * Address  : 0x7b1dd (Size: 209 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2355
 * Naming   : String '(script:%d) Unknown player, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1690ca: "command.cpp"
 *   - 0x1690f9: "command.cpp"
 *   - 0x169125: "command.cpp"
 *   - 0x1690a9: "(script:%d) Unknown player, '%s'"
 *   - 0x1690d6: "(script:%d) Unknown creature, '%s'"
 *   - 0x169105: "(script:%d) Invalid level, '%d'"
 ******************************************************************************/
void FUN_0007b1dd(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_player____s__001690a9,DAT_00179c04);
  }
  else {
    iVar1 = FUN_0007a2c0();
    if (iVar1 == -1) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_creature_____001690d6,DAT_00179c04,
                   extraout_ECX);
    }
    else {
      if ((0 < unaff_EBX) && (unaff_EBX < 0xc)) {
        FUN_00079eb1(0);
        return;
      }
      FUN_000e7714(&DAT_0019cbac,s__script__d__Invalid_level____d__00169105,DAT_00179c04);
    }
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2355, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : sub_07b2ae (Ghidra: FUN_0007b2ae)
 * Prototype: void sub_07b2ae(void);
 * Address  : 0x7b2ae (Size: 20 bytes)
 * Module   : command.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0007b2ae(void)

{
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : sub_07b2c2 (Ghidra: FUN_0007b2c2)
 * Prototype: void sub_07b2c2(void);
 * Address  : 0x7b2c2 (Size: 6 bytes)
 * Module   : command.cpp [contiguous_same_unit_span]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007b2c2(void)

{
  undefined4 in_EAX;
  
  _DAT_002ed781 = in_EAX;
  return;
}

/******************************************************************************
 * Function : dk_script_creature_07b2c8 (Ghidra: FUN_0007b2c8)
 * Prototype: void dk_script_creature_07b2c8(void);
 * Address  : 0x7b2c8 (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2507
 * Naming   : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x169154: "command.cpp"
 *   - 0x169131: "(script:%d) Unknown CREATURE, '%s'"
 ******************************************************************************/
void FUN_0007b2c8(void)

{
  int iVar1;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_CREATURE_____00169131,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2507, g_log_buf) */
    return;
  }
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : dk_script_creature_07b322 (Ghidra: FUN_0007b322)
 * Prototype: void dk_script_creature_07b322(void);
 * Address  : 0x7b322 (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2519
 * Naming   : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x169183: "command.cpp"
 *   - 0x169160: "(script:%d) Unknown CREATURE, '%s'"
 ******************************************************************************/
void FUN_0007b322(void)

{
  int iVar1;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_CREATURE_____00169160,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2519, g_log_buf) */
    return;
  }
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : dk_script_creature_07b37c (Ghidra: FUN_0007b37c)
 * Prototype: void dk_script_creature_07b37c(void);
 * Address  : 0x7b37c (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2531
 * Naming   : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1691b2: "command.cpp"
 *   - 0x16918f: "(script:%d) Unknown CREATURE, '%s'"
 ******************************************************************************/
void FUN_0007b37c(void)

{
  int iVar1;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_CREATURE_____0016918f,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2531, g_log_buf) */
    return;
  }
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : dk_script_creature_07b3d6 (Ghidra: FUN_0007b3d6)
 * Prototype: void dk_script_creature_07b3d6(void);
 * Address  : 0x7b3d6 (Size: 90 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2543
 * Naming   : String '(script:%d) Unknown CREATURE, '%s''
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x1691e1: "command.cpp"
 *   - 0x1691be: "(script:%d) Unknown CREATURE, '%s'"
 ******************************************************************************/
void FUN_0007b3d6(void)

{
  int iVar1;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Unknown_CREATURE_____001691be,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2543, g_log_buf) */
    return;
  }
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : dk_script_conditions_script_07b430 (Ghidra: FUN_0007b430)
 * Prototype: void dk_script_conditions_script_07b430(void);
 * Address  : 0x7b430 (Size: 503 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2558
 * Naming   : String '(script:%d) Too many conditions in script'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x795b7, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x169217: "command.cpp"
 *   - 0x169247: "command.cpp"
 *   - 0x169276: "command.cpp"
 *   - 0x1692a7: "command.cpp"
 *   - 0x1692e6: "command.cpp"
 *   - 0x1691ed: "(script:%d) Too many conditions in script"
 *   - 0x169223: "(script:%d) invalid player name, %s"
 *   - 0x169253: "(script:%d) invalid VARIABLE, '%s'"
 *   - 0x169282: "(script:%d) invalid comparison, '%s'"
 *   - 0x1692b3: "(script:%d) only '==' can be used for IF_AVAILABLE"
 ******************************************************************************/
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007b430(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 extraout_CL;
  undefined4 in_ECX;
  undefined1 local_10;
  
  if (_DAT_002ec62e < 0x30) {
    iVar1 = FUN_0007a2c0();
    if (iVar1 == -1) {
      FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__00169223,DAT_00179c04);
    }
    else {
      iVar2 = FUN_0007a2c0();
      if (iVar2 == -1) {
        iVar2 = FUN_0007a2c0();
        if (iVar2 == -1) {
          iVar2 = FUN_0007a2c0();
          if (iVar2 == -1) {
            iVar2 = FUN_0007a2c0();
            if (iVar2 == -1) {
              FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_VARIABLE_____00169253,DAT_00179c04);
              goto LAB_0007b46d;
            }
          }
        }
      }
      iVar3 = FUN_0007a2c0();
      if (iVar3 == -1) {
        FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_comparison____00169282,DAT_00179c04);
      }
      else {
        if (iVar3 == 1) {
          (&DAT_002ec3ee)[_DAT_002ec62e * 6] = _DAT_00179c08;
          local_10 = (undefined1)iVar1;
          (&DAT_002ec3f1)[_DAT_002ec62e * 0xc] = local_10;
          (&DAT_002ec3f2)[_DAT_002ec62e * 0xc] = 0x42;
          (&DAT_002ec3f5)[_DAT_002ec62e * 0xc] = extraout_CL;
          *(undefined4 *)(&DAT_002ec3f6 + _DAT_002ec62e * 0xc) = in_ECX;
          *(short *)(&DAT_002ec3f3 + _DAT_002ec62e * 0xc) = (short)iVar2;
          FUN_000795b7();
          _DAT_002ec62e = _DAT_002ec62e + 1;
          return;
        }
        FUN_000e7714(&DAT_0019cbac,s__script__d__only______can_be_use_001692b3,DAT_00179c04);
      }
    }
  }
  else {
    FUN_000e7714(&DAT_0019cbac,s__script__d__Too_many_conditions_i_001691ed,DAT_00179c04);
  }
LAB_0007b46d:
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2558, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_name_07b627 (Ghidra: FUN_0007b627)
 * Prototype: void dk_script_player_name_07b627(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x7b627 (Size: 184 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2659
 * Naming   : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x169316: "command.cpp"
 *   - 0x1692f2: "(script:%d) invalid player name, %s"
 ******************************************************************************/
void FUN_0007b627(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_ECX;
  int extraout_ECX;
  int iVar2;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  int local_10;
  
  local_10 = 0;
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__001692f2,DAT_00179c04);
    FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2659, g_log_buf) */
  }
  else {
    iVar2 = extraout_ECX;
    if (iVar1 != 8) {
      iVar2 = iVar1 + 1;
      local_10 = iVar1;
    }
    for (local_10 = local_10 * 0x14ca; local_10 < iVar2 * 0x14ca; local_10 = local_10 + 0x14ca) {
      *(undefined4 *)(&DAT_002ccbe7 + local_10) = unaff_EBX;
      *(undefined4 *)(&DAT_002ccbeb + local_10) = in_ECX;
      *(undefined4 *)(&DAT_002ccbef + local_10) = in_EDX;
      *(undefined4 *)(&DAT_002ccbe7 + local_10) = unaff_EBX;
      *(undefined4 *)(&DAT_002ccc03 + local_10) = param_1;
      *(undefined4 *)(&DAT_002ccbff + local_10) = param_2;
      *(undefined4 *)(&DAT_002ccbf3 + local_10) = param_3;
    }
  }
  return;
}

/******************************************************************************
 * Function : dk_script_player_name_07b6df (Ghidra: FUN_0007b6df)
 * Prototype: void dk_script_player_name_07b6df(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x7b6df (Size: 250 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * Naming   : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x7a2c0, 0xe7714, 0xf09e5
 * Strings  :
 *   - 0x169346: "command.cpp"
 *   - 0x169381: "command.cpp"
 *   - 0x169322: "(script:%d) invalid player name, %s"
 *   - 0x169352: "(script:%d) no computer check found called, %s"
 ******************************************************************************/
void FUN_0007b6df(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 unaff_EBX;
  undefined *puVar3;
  undefined *puVar4;
  int local_14;
  int local_10;
  
  local_14 = 5;
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__00169322,DAT_00179c04);
  }
  else {
    local_10 = 0;
    if (iVar1 != 8) {
      local_14 = iVar1 + 1;
      local_10 = iVar1;
    }
    puVar4 = &DAT_002ccbd3 + local_10 * 0x14ca;
    iVar1 = extraout_ECX;
    for (; local_10 < local_14; local_10 = local_10 + 1) {
      for (puVar3 = puVar4 + 0x620; (puVar3[4] & 2) == 0; puVar3 = puVar3 + 0x20) {
        iVar2 = FUN_000f09e5();
        iVar1 = extraout_ECX_00;
        if (iVar2 == 0) {
          *(undefined4 *)(puVar3 + 8) = unaff_EBX;
          *(undefined4 *)(puVar3 + 0x10) = in_ECX;
          *(undefined4 *)(puVar3 + 0x14) = param_1;
          *(undefined4 *)(puVar3 + 0x18) = param_2;
          iVar1 = extraout_ECX_00 + 1;
          *(undefined4 *)(puVar3 + 0x1c) = param_3;
        }
      }
      puVar4 = puVar4 + 0x14ca;
    }
    if (iVar1 != 0) {
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__no_computer_check_fo_00169352,DAT_00179c04);
  }
  FUN_000ddaf0();
  return;
}

/******************************************************************************
 * Function : dk_script_player_name_07b7d9 (Ghidra: FUN_0007b7d9)
 * Prototype: void dk_script_player_name_07b7d9(void);
 * Address  : 0x7b7d9 (Size: 255 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2763
 * Naming   : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x7a2c0, 0xddaf0, 0xe7714, 0xf09e5
 * Strings  :
 *   - 0x1693b1: "command.cpp"
 *   - 0x1693ec: "command.cpp"
 *   - 0x16938d: "(script:%d) invalid player name, %s"
 *   - 0x1693bd: "(script:%d) no computer event found called, %s"
 ******************************************************************************/
void FUN_0007b7d9(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  int *extraout_ECX;
  int unaff_EBX;
  int *piVar4;
  int iVar5;
  int local_14;
  int local_10;
  
  local_14 = 5;
  local_10 = 0;
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__0016938d,DAT_00179c04);
  }
  else {
    iVar5 = 0;
    if (iVar1 != 8) {
      local_14 = iVar1 + 1;
      iVar5 = iVar1;
    }
    piVar2 = (int *)(iVar5 * 0x14ca + 0x2cd5e3);
    for (; iVar5 < local_14; iVar5 = iVar5 + 1) {
      piVar3 = piVar2;
      for (piVar4 = (int *)(&DAT_002cd3d3 + iVar5 * 0x14ca); (*piVar4 != 0 && (piVar4 < piVar2));
          piVar4 = piVar4 + 0xb) {
        iVar1 = FUN_000f09e5();
        if (iVar1 == 0) {
          piVar4[7] = unaff_EBX;
          local_10 = local_10 + 1;
          piVar4[8] = in_ECX;
        }
        piVar3 = extraout_ECX;
      }
      piVar2 = (int *)((int)piVar3 + 0x14ca);
    }
    if (local_10 != 0) {
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__no_computer_event_fo_001693bd,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2763, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : dk_script_player_name_07b8d8 (Ghidra: FUN_0007b8d8)
 * Prototype: void dk_script_player_name_07b8d8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
 * Address  : 0x7b8d8 (Size: 247 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * Naming   : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 3 -> 0x7a2c0, 0xe7714, 0xf09e5
 * Strings  :
 *   - 0x16941c: "command.cpp"
 *   - 0x169459: "command.cpp"
 *   - 0x1693f8: "(script:%d) invalid player name, %s"
 *   - 0x169428: "(script:%d) no computer process found called, %s"
 ******************************************************************************/
void FUN_0007b8d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 unaff_EBX;
  undefined *puVar3;
  undefined *puVar4;
  int local_14;
  int local_10;
  
  local_14 = 5;
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__001693f8,DAT_00179c04);
  }
  else {
    local_10 = 0;
    if (iVar1 != 8) {
      local_14 = iVar1 + 1;
      local_10 = iVar1;
    }
    puVar4 = &DAT_002ccbd3 + local_10 * 0x14ca;
    iVar1 = extraout_ECX;
    for (; local_10 < local_14; local_10 = local_10 + 1) {
      for (puVar3 = puVar4 + 0x38; (puVar3[0x44] & 2) == 0; puVar3 = puVar3 + 0x48) {
        iVar2 = FUN_000f09e5();
        iVar1 = extraout_ECX_00;
        if (iVar2 == 0) {
          *(undefined4 *)(puVar3 + 4) = unaff_EBX;
          *(undefined4 *)(puVar3 + 8) = in_ECX;
          *(undefined4 *)(puVar3 + 0xc) = param_1;
          *(undefined4 *)(puVar3 + 0x10) = param_2;
          iVar1 = extraout_ECX_00 + 1;
          *(undefined4 *)(puVar3 + 0x14) = param_3;
        }
      }
      puVar4 = puVar4 + 0x14ca;
    }
    if (iVar1 != 0) {
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__no_computer_process_f_00169428,DAT_00179c04);
  }
  FUN_000ddaf0();
  return;
}

/******************************************************************************
 * Function : dk_script_player_name_07b9cf (Ghidra: FUN_0007b9cf)
 * Prototype: void dk_script_player_name_07b9cf(void);
 * Address  : 0x7b9cf (Size: 156 bytes)
 * Module   : command.cpp [direct_file_string_xref]
 * OrigLine : command.cpp:2822
 * Naming   : String '(script:%d) invalid player name, %s'
 * Callers  : 0 -> 
 * Callees  : 4 -> 0x79eb1, 0x7a2c0, 0xddaf0, 0xe7714
 * Strings  :
 *   - 0x169489: "command.cpp"
 *   - 0x1694b9: "command.cpp"
 *   - 0x169465: "(script:%d) invalid player name, %s"
 *   - 0x169495: "(script:%d) invalid player name, %s"
 ******************************************************************************/
void FUN_0007b9cf(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_0007a2c0();
  if (iVar1 == -1) {
    FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__00169465,DAT_00179c04,extraout_ECX
                );
  }
  else {
    iVar1 = FUN_0007a2c0();
    if (iVar1 != -1) {
      FUN_00079eb1(0);
      return;
    }
    FUN_000e7714(&DAT_0019cbac,s__script__d__invalid_player_name__00169495,DAT_00179c04);
  }
  FUN_000ddaf0(); /* LbErrorLog("command.cpp", line 2822, g_log_buf) */
  return;
}

/******************************************************************************
 * Function : sub_07ba6b (Ghidra: FUN_0007ba6b)
 * Prototype: void sub_07ba6b(void);
 * Address  : 0x7ba6b (Size: 21 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0007ba6b(void)

{
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : sub_07ba80 (Ghidra: FUN_0007ba80)
 * Prototype: void sub_07ba80(void);
 * Address  : 0x7ba80 (Size: 21 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 0 -> 
 * Callees  : 0 -> 
 ******************************************************************************/
void FUN_0007ba80(void)

{
  FUN_00079eb1(0);
  return;
}

/******************************************************************************
 * Function : sub_07ba98 (Ghidra: FUN_0007ba98)
 * Prototype: undefined4 sub_07ba98(void);
 * Address  : 0x7ba98 (Size: 120 bytes)
 * Module   : command.cpp [address_order_boundary_interpolation]
 * Naming   : Address-based identifier
 * Callers  : 2 -> 0x7bb10, 0x7bc8d
 * Callees  : 1 -> 0x22b3a
 ******************************************************************************/
undefined4 FUN_0007ba98(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  int in_EDX;
  int iVar3;
  int unaff_EBX;
  
  iVar2 = FUN_00022b3a();
  iVar3 = (uint)(byte)(&DAT_002d33c5)
                      [((&DAT_0019033b)[unaff_EBX] * 0x55 + (&DAT_0019033b)[in_EDX]) * 6] * 0x16;
  if (((&DAT_001921c6)[iVar3] & 0x40) == 0) {
    if ((&DAT_001921d2)[iVar3] != '\0') {
      return 1;
    }
    if ((byte)(&DAT_002d33c5)[((&DAT_0019033b)[unaff_EBX] * 0x55 + (&DAT_0019033b)[in_EDX]) * 6] !=
        0xc) {
      return 0;
    }
    cVar1 = (&DAT_002e9125)[(uint)*(byte *)(extraout_ECX + 0x1a) * 0xe6];
  }
  else {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(char *)(iVar2 + 6) != *(char *)(extraout_ECX + 6)) {
      return 0;
    }
    cVar1 = *(char *)(iVar2 + 0x18);
  }
  if (cVar1 == '\0') {
    return 1;
  }
  return 0;
}

