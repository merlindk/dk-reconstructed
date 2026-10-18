#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Primitive Types & Calling Conventions
 * Original target: Watcom C/C++ 10.x/11.0 32-bit DOS/4GW Linear Executable (LE)
 */

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef uint8_t   ubyte;
typedef int8_t    sbyte;
typedef uint16_t  ushort;
typedef int16_t   sshort;
typedef uint32_t  ulong;
typedef int32_t   slong;
typedef uint8_t   uchar;
typedef uint8_t   undefined;
typedef uint8_t   undefined1;
typedef uint16_t  undefined2;
typedef uint32_t  undefined4;
typedef uint64_t  undefined8;
typedef uint32_t  uint;
typedef int32_t   int3;
typedef int32_t   TbBool;
typedef int32_t   TbResult;

#define TB_SUCCESS 1
#define TB_ERROR   0
