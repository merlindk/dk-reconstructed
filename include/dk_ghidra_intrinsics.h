#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Ghidra Decompiler Intrinsics & Type Compatibility Header
 *
 * Provides standard C/C++ implementations of Ghidra decompiler helper macros
 * (CONCAT*, SUB*, SEXT*, ZEXT*, SBORROW4, CARRY4, SCARRY4) so decompiled functions
 * from src/ can be compiled with GCC, Clang, or MSVC/MinGW.
 */

#include "dk_types.h"
#include <stdint.h>
#include <math.h>

/* Extended decompiler integer types */
typedef uint64_t uint6;
typedef int64_t  int6;
typedef uint64_t uint5;
typedef int64_t  int5;
typedef uint64_t uint7;
typedef int64_t  int7;
typedef uint32_t uint3;
typedef int32_t  int3;
typedef void (*code)(void);

/* Byte-concatenation intrinsics: CONCAT<hi_bytes><lo_bytes>(hi, lo) */
#define CONCAT11(a, b) ((uint16_t)(((uint16_t)(uint8_t)(a) << 8) | (uint16_t)(uint8_t)(b)))
#define CONCAT12(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 16) | (uint32_t)(uint16_t)(b)))
#define CONCAT21(a, b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 8) | (uint32_t)(uint8_t)(b)))
#define CONCAT13(a, b) ((uint32_t)(((uint32_t)(uint8_t)(a) << 24) | ((uint32_t)(b) & 0x00FFFFFFu)))
#define CONCAT31(a, b) ((uint32_t)(((uint32_t)(a) << 8) | (uint32_t)(uint8_t)(b)))
#define CONCAT22(a, b) ((uint32_t)(((uint32_t)(uint16_t)(a) << 16) | (uint32_t)(uint16_t)(b)))
#define CONCAT14(a, b) ((uint64_t)(((uint64_t)(uint8_t)(a) << 32) | (uint64_t)(uint32_t)(b)))
#define CONCAT24(a, b) ((uint64_t)(((uint64_t)(uint16_t)(a) << 32) | (uint64_t)(uint32_t)(b)))
#define CONCAT44(a, b) ((uint64_t)(((uint64_t)(uint32_t)(a) << 32) | (uint64_t)(uint32_t)(b)))

/* Truncation / subpiece intrinsics: SUB<in_bytes><out_bytes>(val, byte_offset) */
#define SUB41(val, off) ((uint8_t)(((uint32_t)(val) >> ((off) * 8)) & 0xFFu))
#define SUB42(val, off) ((uint16_t)(((uint32_t)(val) >> ((off) * 8)) & 0xFFFFu))
#define SUB84(val, off) ((uint32_t)(((uint64_t)(val) >> ((off) * 8)) & 0xFFFFFFFFu))

/* Sign-extension & zero-extension intrinsics */
#define SEXT14(v) ((int32_t)(int8_t)(v))
#define SEXT24(v) ((int32_t)(int16_t)(v))
#define SEXT48(v) ((int64_t)(int32_t)(v))
#define ZEXT14(v) ((uint32_t)(uint8_t)(v))
#define ZEXT24(v) ((uint32_t)(uint16_t)(v))
#define ZEXT48(v) ((uint64_t)(uint32_t)(v))

/* Arithmetic overflow / borrow / carry flags */
#define CARRY4(a, b)   ((uint32_t)(a) > (0xFFFFFFFFu - (uint32_t)(b)))
#define SBORROW4(a, b) (__builtin_sub_overflow_p((int32_t)(a), (int32_t)(b), (int32_t)0))
#define SCARRY4(a, b)  (__builtin_add_overflow_p((int32_t)(a), (int32_t)(b), (int32_t)0))
#define ROUND(x)       nearbyintl(x)
