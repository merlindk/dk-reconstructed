#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Primitive & Ghidra Decompiler Types
 */

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#ifndef _WIN32
#include <sys/types.h>
#endif

typedef uint8_t   byte;
typedef uint8_t   ubyte;
typedef uint8_t   uchar;
#if defined(_WIN32) || !defined(_SYS_TYPES_H)
typedef uint16_t  ushort;
typedef uint32_t  uint;
typedef uint32_t  ulong;
#endif
typedef int8_t    sbyte;
typedef int64_t   longlong;
typedef uint64_t  ulonglong;

typedef uint8_t   undefined;
typedef uint8_t   undefined1;
typedef uint16_t  undefined2;
typedef uint32_t  undefined4;
typedef uint64_t  undefined8;
typedef long double float10;

typedef void*     pointer;
typedef char*     string;
