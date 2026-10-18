#!/usr/bin/env python3
"""
Phase 2 & 3 Source Tree Builder for Dungeon Keeper (/home/merlin/dk-reconstructed).
Uses both REA + Ghidra catalog data AND direct machine-code 32-bit pointer scanning
across .text_obj1 -> .data_obj3 to achieve 100% (85/85) .cpp translation unit anchor
recovery, inline string annotation in decompiled C++ code, and symbol name recovery.
"""

import bisect
import collections
import json
import os
import re
import struct
import sys
from pathlib import Path


def parse_hex(addr_str: str) -> int:
    if not addr_str:
        return 0
    if ":" in addr_str:
        addr_str = addr_str.split(":")[-1]
    addr_str = addr_str.strip().lower()
    if addr_str.startswith("0x"):
        return int(addr_str, 16)
    return int(addr_str, 16)


def infer_function_name(
    fn: dict,
    fn_strings: list[tuple[int, str]],
    cpp_filenames: set[str],
) -> tuple[str, str]:
    va = parse_hex(fn["address"])
    raw_name = fn.get("name") or f"FUN_{va:08x}"

    if va == 0x000F4448 or raw_name == "entry":
        return ("_watcom_entry", "ELF entry point (EIP Obj 1 + 0xe4448)")

    non_cpp_strings = [
        s.strip()
        for _, s in fn_strings
        if s.strip() and s.strip().lower() not in cpp_filenames
    ]

    for s_clean in non_cpp_strings:
        # 1. Explicit function call in error string, e.g. "LbNetwork_Stop() failed"
        m = re.search(r"\b([A-Za-z_][A-Za-z0-9_]{3,40})\s*\(\)", s_clean)
        if m:
            cand = m.group(1)
            if cand.lower() not in ("if", "while", "for", "switch", "return"):
                return (f"dk_{cand}_{va:06x}", f"References '{s_clean[:65]}'")

        # 2. Explicit Lb* or AIL_* identifier in string
        m_lb = re.search(r"\b((?:Lb|AIL_)[A-Za-z0-9_]{4,40})\b", s_clean)
        if m_lb:
            cand = m_lb.group(1)
            return (f"dk_{cand}_{va:06x}", f"References '{s_clean[:65]}'")

        # 3. "prefix: message" pattern
        m2 = re.match(r"^([A-Za-z_][A-Za-z0-9_]{4,35})\s*:\s+", s_clean)
        if m2:
            cand = m2.group(1)
            if not cand.lower().endswith((".cpp", ".c", ".h", ".asm")):
                return (f"dk_{cand}_{va:06x}", f"Log prefix '{s_clean[:65]}'")

    # 4. Derive descriptive slug from first meaningful error/debug string
    stop_words = {
        "unable", "to", "cannot", "can", "not", "failed", "fail", "error",
        "in", "on", "the", "of", "for", "is", "no", "bad", "invalid", "unknown",
        "with", "from", "and", "or", "at", "by", "be", "too", "many",
    }
    for s_clean in non_cpp_strings:
        if len(s_clean) >= 5 and not s_clean.startswith("%"):
            words = re.findall(r"[A-Za-z][A-Za-z0-9]{1,20}", s_clean)
            meaningful = [w.lower() for w in words if w.lower() not in stop_words][:4]
            if len(meaningful) >= 2:
                slug = "_".join(meaningful)
                return (f"dk_{slug}_{va:06x}", f"String '{s_clean[:60]}'")

    return (f"sub_{va:06x}", "Address-based identifier")


KNOWN_CORE_FUNCTIONS = {
    0x000F4448: ("_watcom_entry", "DOS/4GW Watcom C/C++ entry point (EIP Obj 1 + 0xe4448)"),
    0x000DDAF0: ("LbErrorLog", "Bullfrog ERRORLOG(__FILE__, __LINE__, msg) stub (676 call sites)"),
    0x000DDAF8: ("LbWarnLog", "Bullfrog WARNLOG/SYNCLOG(__FILE__, __LINE__, msg) stub (8 call sites)"),
    0x000DDAFC: ("compute_things_checksum", "Deterministic lockstep checksum across all 2,048 Thing slots (0x001ae9fc)"),
    0x000DD964: ("things_collide_at", "3D bounding-box collision check between two Coord3d positions for a Thing"),
    0x000DD93C: ("coord3d_equal", "6-byte equality comparison between two Coord3d structures"),
    0x0007A2C0: ("get_script_command_id", "Case-insensitive lookup of script token in 5-byte CommandDesc table"),
    0x000E7714: ("dk_sprintf", "Formatted string builder targeting global/stack char buffers"),
    0x000EA290: ("dk_stricmp", "Case-insensitive ASCII string comparison"),
}


def annotate_pseudocode_strings(
    pseudo: str,
    read_cstring_fn,
    errlog_sites: list[tuple[int, str, str | None, int | None, str | None]] | None = None,
) -> str:
    """
    Annotate hex literals and DAT_001[6789]xxxx symbols in Ghidra pseudocode
    with inline /* "string" */ comments when they point to valid ASCII strings in .data_obj3,
    and annotate FUN_000ddaf0 / FUN_000ddaf8 calls with recovered (__FILE__, __LINE__, msg).
    """
    out_lines = []
    err_idx = 0
    sites = errlog_sites or []
    for line in pseudo.splitlines():
        found_comments = []
        if ("FUN_000ddaf0(" in line or "FUN_000ddaf8(" in line) and err_idx < len(sites):
            call_va, kind, f_str, l_num, m_str = sites[err_idx]
            err_idx += 1
            f_disp = f'"{f_str}"' if f_str else "NULL"
            l_disp = str(l_num) if l_num is not None else "?"
            m_disp = f'"{m_str}"' if m_str else "g_log_buf"
            found_comments.append(f"{kind}({f_disp}, line {l_disp}, {m_disp})")

        # Match 0x16xxxx..0x19xxxx or DAT_0016xxxx..DAT_0019xxxx
        for m in re.finditer(r"(?:0x0*|DAT_00)(1[6789][0-9a-fA-F]{4})\b", line):
            va = int(m.group(1), 16)
            sval = read_cstring_fn(va)
            if sval and len(sval.strip()) >= 2:
                clean_s = sval.replace("\n", "\\n").replace("\r", "\\r")
                if len(clean_s) > 70:
                    clean_s = clean_s[:67] + "..."
                comment = f"0x{va:x}=\"{clean_s}\""
                if comment not in found_comments:
                    found_comments.append(comment)
        if found_comments and "/*" not in line:
            line = f"{line} /* {'; '.join(found_comments[:3])} */"
        out_lines.append(line)
    return "\n".join(out_lines)


def main():
    out_root = Path(sys.argv[1] if len(sys.argv) > 1 else "/home/merlin/workspace/dk-reconstructed")
    catalog_dir = out_root / "catalog"

    print(f"Loading catalog from {catalog_dir}...")
    with open(catalog_dir / "segments.json", "r", encoding="utf-8") as f:
        segments = json.load(f)
    with open(catalog_dir / "procedures.json", "r", encoding="utf-8") as f:
        procedures = json.load(f)
    with open(catalog_dir / "strings.json", "r", encoding="utf-8") as f:
        strings = json.load(f)
    with open(catalog_dir / "source_file_xrefs.json", "r", encoding="utf-8") as f:
        source_file_xrefs = json.load(f)

    functions = []
    with open(catalog_dir / "functions.jsonl", "r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if line:
                functions.append(json.loads(line))

    functions.sort(key=lambda x: parse_hex(x["address"]))
    print(f"Loaded {len(functions)} decompiled functions and {len(strings)} strings.")

    elf_path = Path("/home/merlin/Dungeon Keeper/re/KEEPER.elf")
    with open(elf_path, "rb") as ef:
        elf_bytes = ef.read()

    # .text_obj1: file offset 0x1000, size 0x1347a0, vaddr 0x10000
    text_vaddr = 0x00010000
    text_bytes = elf_bytes[0x1000 : 0x1000 + 0x1347A0]
    # .data_obj3: file offset 0x137000, size 0x3a000, vaddr 0x160000
    data_vaddr = 0x00160000
    data_bytes = elf_bytes[0x137000 : 0x137000 + 0x3A000]

    # Build complete dictionary of all null-terminated ASCII strings in .data_obj3
    addr_to_string = {}
    for s in strings:
        addr_to_string[parse_hex(s["address"])] = s.get("value", "")

    for m in re.finditer(rb"[\x20-\x7e\t\r\n]{3,256}\x00", data_bytes):
        va = data_vaddr + m.start()
        sval = m.group(0)[:-1].decode("ascii", errors="ignore")
        if va not in addr_to_string:
            addr_to_string[va] = sval

    def read_cstring_at_va(va: int) -> str | None:
        if va in addr_to_string:
            return addr_to_string[va]
        if data_vaddr <= va < data_vaddr + len(data_bytes):
            off = va - data_vaddr
            # Ensure this is the start of a string (preceded by \x00 or start of section)
            if off > 0 and data_bytes[off - 1] != 0:
                return None
            end = data_bytes.find(b"\x00", off, off + 256)
            if end != -1 and end - off >= 3:
                raw = data_bytes[off:end]
                if all(32 <= b < 127 or b in (9, 10, 13) for b in raw):
                    s = raw.decode("ascii", errors="ignore")
                    addr_to_string[va] = s
                    return s
        return None

    # Find all 85 .cpp/.c/.h/.asm filename strings in .data_obj3
    va_to_cpp = {}
    cpp_to_vas = collections.defaultdict(list)
    for m in re.finditer(rb"([A-Za-z0-9_]+\.(?:cpp|c|h|asm))\x00", data_bytes, re.I):
        if m.start() > 0 and data_bytes[m.start() - 1] != 0:
            continue
        va = data_vaddr + m.start(1)
        fname = m.group(1).decode("ascii").lower()
        va_to_cpp[va] = fname
        cpp_to_vas[fname].append(va)
        addr_to_string[va] = fname

    cpp_filenames = set(cpp_to_vas.keys())

    # Build function interval lookup table from function body ranges + sorted entry points
    fn_starts = [parse_hex(fn["address"]) for fn in functions]

    def find_owning_fn_index(code_va: int) -> int:
        # First check exact body ranges if within nearby functions
        pos = bisect.bisect_right(fn_starts, code_va) - 1
        for candidate_idx in range(max(0, pos - 3), min(len(functions), pos + 3)):
            info = functions[candidate_idx].get("info") or {}
            body = info.get("body") or {}
            for r in body.get("ranges", []):
                r_start = parse_hex(r["start"])
                r_end = parse_hex(r["end"])
                if r_start <= code_va <= r_end:
                    return candidate_idx
        return max(0, pos)

    # Scan each function's machine-code bytes for 4-byte little-endian pointers into .data_obj3
    fn_discovered_strings = collections.defaultdict(list)  # faddr -> list of (string_va, string_val)
    direct_cpp_votes = collections.defaultdict(collections.Counter)

    # Direct search for every .cpp string VA in .text_obj1
    for fname, vas in cpp_to_vas.items():
        for va in vas:
            needle = struct.pack("<I", va)
            idx = 0
            while True:
                idx = text_bytes.find(needle, idx)
                if idx == -1:
                    break
                code_va = text_vaddr + idx
                owner_idx = find_owning_fn_index(code_va)
                faddr = functions[owner_idx]["address"]
                direct_cpp_votes[faddr][fname] += 10
                fn_discovered_strings[faddr].append((va, fname))
                idx += 1

    # Scan .text_obj1 for all calls to LbErrorLog (0x000ddaf0) and LbWarnLog (0x000ddaf8)
    # to recover exact (__FILE__, __LINE__, msg) tuples per function!
    fn_errlog_sites = collections.defaultdict(list)
    for off in range(len(text_bytes) - 5):
        if text_bytes[off] == 0xE8:
            rel = struct.unpack_from("<i", text_bytes, off + 1)[0]
            call_va = text_vaddr + off
            target = call_va + 5 + rel
            if target in (0x000DDAF0, 0x000DDAF8):
                kind = "LbErrorLog" if target == 0x000DDAF0 else "LbWarnLog"
                window = text_bytes[max(0, off - 28) : off]
                eax_str = edx_line = ebx_str = None
                for woff in range(len(window) - 4):
                    b = window[woff]
                    imm = struct.unpack_from("<I", window, woff + 1)[0]
                    if b == 0xB8 and data_vaddr <= imm < data_vaddr + len(data_bytes):
                        s = read_cstring_at_va(imm)
                        if s:
                            eax_str = s
                    elif b == 0xBA and 0 < imm < 0x10000:
                        edx_line = imm
                    elif b == 0xBB and data_vaddr <= imm < data_vaddr + len(data_bytes):
                        s = read_cstring_at_va(imm)
                        if s:
                            ebx_str = s
                owner_idx = find_owning_fn_index(call_va)
                faddr = functions[owner_idx]["address"]
                fn_errlog_sites[faddr].append((call_va, kind, eax_str, edx_line, ebx_str))

    # Also scan every function's machine code range for 32-bit pointers into .data_obj3 (0x00160000..0x0019a000)
    for i, fn in enumerate(functions):
        faddr = fn["address"]
        fva = fn_starts[i]
        next_va = fn_starts[i + 1] if i + 1 < len(fn_starts) else 0x001447A0
        info = fn.get("info") or {}
        body = info.get("body") or {}
        ranges = body.get("ranges") or [{"start": f"0x{fva:x}", "end": f"0x{min(next_va - 1, fva + 0x2000):x}"}]

        seen_vas = {va for va, _ in fn_discovered_strings[faddr]}
        for r in ranges:
            rs = parse_hex(r["start"])
            re_va = parse_hex(r["end"])
            if rs < text_vaddr or re_va >= text_vaddr + len(text_bytes):
                continue
            chunk = text_bytes[rs - text_vaddr : re_va - text_vaddr + 1]
            # Look for 0x0016xxxx .. 0x0019xxxx (byte 2 in 0x16..0x19, byte 3 == 0x00)
            for m in re.finditer(rb"[\x00-\xff]{2}[\x16-\x19]\x00", chunk):
                cand_va = struct.unpack_from("<I", chunk, m.start())[0]
                if cand_va in seen_vas:
                    continue
                if cand_va in va_to_cpp:
                    fname = va_to_cpp[cand_va]
                    direct_cpp_votes[faddr][fname] += 5
                    fn_discovered_strings[faddr].append((cand_va, fname))
                    seen_vas.add(cand_va)
                else:
                    sval = read_cstring_at_va(cand_va)
                    if sval:
                        fn_discovered_strings[faddr].append((cand_va, sval))
                        seen_vas.add(cand_va)

    anchor_module = {}
    for faddr, counter in direct_cpp_votes.items():
        if counter:
            best_mod, _ = counter.most_common(1)[0]
            anchor_module[faddr] = best_mod

    anchored_cpp_set = set(anchor_module.values())
    print(
        f"Direct machine-code + xref anchor recovery: {len(anchor_module)} anchor functions across "
        f"{len(anchored_cpp_set)}/{len(cpp_filenames)} .cpp files!"
    )

    # Attribute all decompiled functions across the 85 .cpp units + bflib + Watcom CRT
    fn_addrs_sorted = [fn["address"] for fn in functions]
    anchor_indices = [i for i, a in enumerate(fn_addrs_sorted) if a in anchor_module]

    assigned_module = {}
    attribution_method = {}

    for i, faddr in enumerate(fn_addrs_sorted):
        if faddr in anchor_module:
            assigned_module[faddr] = anchor_module[faddr]
            attribution_method[faddr] = "direct_file_string_xref"

    first_anchor_idx = anchor_indices[0] if anchor_indices else 0
    last_anchor_idx = anchor_indices[-1] if anchor_indices else len(fn_addrs_sorted) - 1

    for idx_pos in range(len(anchor_indices) - 1):
        i_start = anchor_indices[idx_pos]
        i_end = anchor_indices[idx_pos + 1]
        mod_start = anchor_module[fn_addrs_sorted[i_start]]
        mod_end = anchor_module[fn_addrs_sorted[i_end]]

        if mod_start == mod_end:
            for k in range(i_start + 1, i_end):
                assigned_module[fn_addrs_sorted[k]] = mod_start
                attribution_method[fn_addrs_sorted[k]] = "contiguous_same_unit_span"
        else:
            mid = (i_start + i_end) // 2
            for k in range(i_start + 1, i_end):
                fn = functions[k]
                faddr = fn["address"]
                neighbors = set(fn.get("callees", [])) | set(fn.get("callers", []))
                votes_start = sum(1 for n in neighbors if anchor_module.get(n) == mod_start)
                votes_end = sum(1 for n in neighbors if anchor_module.get(n) == mod_end)
                if votes_start > votes_end:
                    assigned_module[faddr] = mod_start
                    attribution_method[faddr] = "callgraph_affinity_to_preceding_unit"
                elif votes_end > votes_start:
                    assigned_module[faddr] = mod_end
                    attribution_method[faddr] = "callgraph_affinity_to_following_unit"
                else:
                    assigned_module[faddr] = mod_start if k <= mid else mod_end
                    attribution_method[faddr] = "address_order_boundary_interpolation"

    for k in range(0, first_anchor_idx):
        faddr = fn_addrs_sorted[k]
        assigned_module[faddr] = anchor_module[fn_addrs_sorted[first_anchor_idx]]
        attribution_method[faddr] = "leading_unit_prologue"

    # Classify post-gameplay library region (0xdf500..0x1447a0: Bullfrog Library bflib & Watcom CRT)
    for k in range(last_anchor_idx + 1, len(fn_addrs_sorted)):
        faddr = fn_addrs_sorted[k]
        fn = functions[k]
        va = parse_hex(faddr)
        if k <= last_anchor_idx + 8 and va < 0x000E5000:
            assigned_module[faddr] = anchor_module[fn_addrs_sorted[last_anchor_idx]]
            attribution_method[faddr] = "trailing_unit_epilogue"
            continue

        fn_strs = " ".join(s for _, s in fn_discovered_strings.get(faddr, [])).lower()
        if any(w in fn_strs for w in ("lbnetwork", "modem", "ipx", "net", "serial", "com1", "com2", "baud", "session")):
            assigned_module[faddr] = "bflib/bflib_network.cpp"
            attribution_method[faddr] = "bflib_network_signature"
        elif any(w in fn_strs for w in ("vesa", "vga", "screen", "palette", "mode", "display", "sprite", "font")):
            assigned_module[faddr] = "bflib/bflib_video.cpp"
            attribution_method[faddr] = "bflib_video_signature"
        elif any(w in fn_strs for w in ("sound", "audio", "ail", "miles", "midi", "dig", "sample", "bank", "awe", "sb16", "cd")):
            assigned_module[faddr] = "bflib/bflib_sound.cpp"
            attribution_method[faddr] = "bflib_sound_signature"
        elif va < 0x00105000:
            assigned_module[faddr] = "bflib/bflib_system_io.cpp"
            attribution_method[faddr] = "bflib_library_segment"
        else:
            assigned_module[faddr] = "rt/watcom_crt.cpp"
            attribution_method[faddr] = "watcom_crt_segment"

    # Infer symbol names for all functions
    inferred_names = {}
    inferred_reasons = {}
    used_names = set()
    for fn in functions:
        faddr = fn["address"]
        fva = parse_hex(faddr)
        if fva in KNOWN_CORE_FUNCTIONS:
            iname, ireason = KNOWN_CORE_FUNCTIONS[fva]
        else:
            iname, ireason = infer_function_name(
                fn, fn_discovered_strings.get(faddr, []), cpp_filenames
            )
        iname = re.sub(r"[^A-Za-z0-9_]", "_", iname)
        if iname in used_names:
            iname = f"{iname}_{fva:06x}"
        used_names.add(iname)
        inferred_names[faddr] = iname
        inferred_reasons[faddr] = ireason

    # Extract decompiled C prototype signature for each function
    fn_prototypes = {}
    sig_re = re.compile(r"^\s*([A-Za-z_][A-Za-z0-9_\s\*]+?)\s+(FUN_[0-9a-fA-F]+|_entry|entry)\s*\(([^)]*)\)", re.M)
    for fn in functions:
        faddr = fn["address"]
        iname = inferred_names[faddr]
        pseudo = fn.get("pseudocode") or ""
        m = sig_re.search(pseudo)
        if m:
            ret_type = " ".join(m.group(1).split())
            params = " ".join(m.group(3).split()) or "void"
            fn_prototypes[faddr] = f"{ret_type} {iname}({params});"
        else:
            fn_prototypes[faddr] = f"undefined4 {iname}(void);"

    # Collect global memory references (.data_obj3, .bss_obj3, .bss_obj4)
    global_refs = collections.Counter()
    for fn in functions:
        for ref in fn.get("outgoing_references", []):
            taddr = ref.get("target_address", "")
            tva = parse_hex(taddr)
            if 0x00160000 <= tva < 0x00403000 and tva not in addr_to_string:
                global_refs[f"0x{tva:08x}"] += 1

    module_summary = collections.defaultdict(list)
    for fn in functions:
        faddr = fn["address"]
        mod = assigned_module[faddr]
        sites = fn_errlog_sites.get(faddr, [])
        src_lines = sorted({lnum for _, _, _, lnum, _ in sites if lnum is not None})
        module_summary[mod].append(
            {
                "address": faddr,
                "ghidra_name": fn["name"],
                "inferred_name": inferred_names[faddr],
                "inferred_reason": inferred_reasons[faddr],
                "prototype": fn_prototypes[faddr],
                "attribution_method": attribution_method[faddr],
                "source_lines": src_lines,
                "caller_count": len(fn.get("callers", [])),
                "callee_count": len(fn.get("callees", [])),
                "string_count": len(fn_discovered_strings.get(faddr, [])),
            }
        )

    with open(catalog_dir / "module_map.json", "w", encoding="utf-8") as f:
        json.dump(module_summary, f, indent=2)

    globals_list = [
        {
            "address": gaddr,
            "segment": (
                ".data_obj3"
                if parse_hex(gaddr) < 0x0019A000
                else (".bss_obj3" if parse_hex(gaddr) < 0x00400000 else ".bss_obj4")
            ),
            "reference_count": cnt,
            "symbol_name": f"g_dat_{parse_hex(gaddr):08x}"
            if parse_hex(gaddr) < 0x0019A000
            else f"g_bss_{parse_hex(gaddr):08x}",
        }
        for gaddr, cnt in global_refs.most_common(2500)
    ]
    with open(catalog_dir / "globals_map.json", "w", encoding="utf-8") as f:
        json.dump(globals_list, f, indent=2)

    inc_dir = out_root / "include"
    src_dir = out_root / "src"
    inc_dir.mkdir(parents=True, exist_ok=True)
    # Clean old src files before regenerating
    for old_cpp in src_dir.rglob("*.cpp"):
        old_cpp.unlink()
    (src_dir / "bflib").mkdir(parents=True, exist_ok=True)
    (src_dir / "rt").mkdir(parents=True, exist_ok=True)

    # Write headers (dk_types.h, dk_structs.h, dk_globals.h, dk_functions.h)
    with open(inc_dir / "dk_types.h", "w", encoding="utf-8") as f:
        f.write(
            """#pragma once
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
"""
        )

    with open(inc_dir / "dk_structs.h", "w", encoding="utf-8") as f:
        f.write(
            """#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Core Reconstructed Engine Structures
 * Derived from KEEPER.elf (.data_obj3 @ 0x00160000, .bss_obj3 @ 0x0019a000)
 */

#include "dk_types.h"

#pragma pack(push, 1)

/** 3D Map Coordinate (Subtile: upper 8 bits, Fine offset within subtile: lower 8 bits; 6 bytes) */
typedef struct Coord3d {
    ushort val_x;             /* +0x00: X subtile (>>8) and fine subtile offset (&0xFF) */
    ushort val_y;             /* +0x02: Y subtile (>>8) and fine subtile offset (&0xFF) */
    ushort val_z;             /* +0x04: Z ceiling/floor height (>>8) and fine offset (&0xFF) */
} Coord3d;

/**
 * Core World Entity Structure: Thing (thing.cpp, creature.cpp, object.cpp, shot.cpp, effect.cpp)
 * Field offsets verified from compute_things_checksum (0x000ddafc), things_collide_at (0x000dd964),
 * and torture/creature state handlers (0x000744d5..0x00074f40).
 * Global pointer table: g_thing_ptrs_001ae9fc (2,048 Thing* slots in .bss_obj3).
 */
typedef struct Thing {
    ubyte   alloc_flags;      /* +0x00: Bit 0 (0x01) = TAlF_Exists */
    ubyte   field_01[5];      /* +0x01..0x05: State/flags/index fields */
    ubyte   owner;            /* +0x06: Owning player index (0..4) */
    ubyte   field_07;         /* +0x07 */
    ubyte   active_state;     /* +0x08: Primary state machine ID */
    ubyte   continue_state;   /* +0x09: Continuation state ID */
    ushort  creation_turn;    /* +0x0A: Game turn or sub-state timer */
    ubyte   field_0C;         /* +0x0C */
    Coord3d mappos;           /* +0x0D..0x12: 3D world position (val_x @ 0x0D, val_y @ 0x0F, val_z @ 0x11) */
    ushort  anim_sprite;      /* +0x13: Current animation sprite ID */
    ushort  anim_speed;       /* +0x15: Animation playback speed */
    ubyte   field_17[4];      /* +0x17..0x1A */
    ushort  move_angle_xy;    /* +0x1B: Horizontal facing angle */
    ubyte   field_1D[2];      /* +0x1D..0x1E */
    ubyte   class_id;         /* +0x1F: Thing class (Creature, Object, Shot, Effect, Room, Ambient=0x0C) */
    ubyte   model;            /* +0x20: Model / breed / object kind within class_id */
    ubyte   field_21[0x25];   /* +0x21..0x45: Class-specific union & movement state */
    ushort  base_speed;       /* +0x46: Base movement / animation speed */
    ubyte   field_48[0x0A];   /* +0x48..0x51 */
    ushort  health;           /* +0x52: Current hit points (included in lockstep checksum @ 0x000ddafc) */
    ushort  field_54;         /* +0x54 */
    ushort  clipbox_size_xy;  /* +0x56: Horizontal collision box diameter (verified @ 0x000dd964) */
    ushort  clipbox_size_z;   /* +0x58: Vertical collision box height (verified @ 0x000dd964) */
    ubyte   field_5A[0x0A];   /* +0x5A..0x63 */
    ushort  ccontrol_idx;     /* +0x64: Index into CreatureControl table (0x001b0a00) */
} Thing;

/** Script Token Lookup Entry (5 bytes, verified from get_script_command_id @ 0x0007a2c0) */
typedef struct CommandDesc {
    const char *name;         /* +0x00: Pointer to uppercase command keyword string in .data_obj3 */
    ubyte       id;           /* +0x04: Numeric token enum value */
} CommandDesc;

/** Deterministic Multiplayer / Replay Lockstep Turn Packet (packet.cpp) */
typedef struct Packet {
    ulong  turn_checksum;     /* Deterministic simulation checksum across Thing/Dungeon state */
    ulong  action_flags;      /* Bitmask of current player state/mode flags */
    ushort actn_par1;         /* Primary action parameter (Thing index / Room kind / Spell kind) */
    ushort actn_par2;         /* Secondary action parameter (Subtile / Slab / Level) */
    ushort pos_x;             /* Cursor / hand world X coordinate */
    ushort pos_y;             /* Cursor / hand world Y coordinate */
    ushort pos_z;             /* Cursor / hand world Z coordinate */
    ubyte  packet_type;       /* Packet command opcode */
    ubyte  player_idx;        /* Owning Keeper player index */
} Packet;

/** Bullfrog Sprite Descriptor inside DATA/*.TAB files (ssprite.cpp) */
typedef struct TbSprite {
    ulong  data_offset;       /* Byte offset into corresponding DATA/*.DAT RLE sprite archive */
    ubyte  width;             /* Sprite pixel width */
    ubyte  height;            /* Sprite pixel height */
} TbSprite;

/** Dungeon Slab Map Entry (85x85 tiles per level, slab.cpp) */
typedef struct SlabMap {
    ushort kind;              /* Slab type (Rock, Gold, Earth, Claimed, Room, Portal, Wall, etc.) */
    ushort next_in_room;      /* Linked list index of next slab in same Room */
    ubyte  room_index;        /* Associated Room index */
    ubyte  health;            /* Digging / wall durability */
    ubyte  owner_flags;       /* Owner player mask + bitflags */
} SlabMap;

/** Bullfrog Network Session Entry (frontnet.cpp / LbNetwork_*) */
typedef struct TbNetworkSession {
    char   session_name[32];
    ulong  session_id;
    ubyte  host_player_id;
    ubyte  num_players;
    ubyte  max_players;
    ubyte  active;
} TbNetworkSession;

#pragma pack(pop)
"""
        )

    with open(inc_dir / "dk_globals.h", "w", encoding="utf-8") as f:
        f.write(
            """#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Global Memory Symbols (.data_obj3 & .bss_obj3)
 * Virtual Address Ranges:
 *   .data_obj3 : 0x00160000 - 0x0019a000 (237,568 bytes initialized)
 *   .bss_obj3  : 0x0019a000 - 0x003f1570 (2,454,896 bytes uninitialized game state)
 *   .bss_obj4  : 0x00400000 - 0x00402024 (8,228 bytes secondary BSS)
 */

#include "dk_types.h"
#include "dk_structs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* === Verified Named Engine Globals === */
extern char    g_log_sprintf_buf_0019cbac[1024];  /* VA: 0x0019cbac - Formatted log/UI message buffer */
extern Thing  *g_thing_ptrs_001ae9fc[2048];       /* VA: 0x001ae9fc - Master table of 2,048 Thing* pointers */
extern void   *g_creature_ctrl_ptrs_001b0a00[];   /* VA: 0x001b0a00 - CreatureControl* lookup table */
extern uint8_t g_map_subtiles_00279203[65536][5]; /* VA: 0x00279203 - 256x256 Map subtile array (5 bytes/subtile) */
extern SlabMap g_slabmap_002d33ca[7225];          /* VA: 0x002d33ca - 85x85 SlabMap grid (6 bytes/slab) */
extern uint8_t g_dungeons_002e0589[5][0x1508];    /* VA: 0x002e0589 - Per-player Dungeon[5] state (5,384 bytes/player) */
extern ulong   g_action_random_seed_002e8bf6;     /* VA: 0x002e8bf6 - Deterministic lockstep ACTION_RANDOM seed */
extern ulong   g_script_line_num_00179c04;        /* VA: 0x00179c04 - Current level script line number */

"""
        )
        for g in globals_list[:800]:
            f.write(
                f"/* VA: {g['address']} ({g['segment']}, {g['reference_count']} refs) */\n"
                f"extern uint8_t {g['symbol_name']}[];\n"
            )
        f.write("\n#ifdef __cplusplus\n}\n#endif\n")

    with open(inc_dir / "dk_functions.h", "w", encoding="utf-8") as f:
        f.write(
            f"""#pragma once
/**
 * Dungeon Keeper (KEEPER.EXE) - Complete Master Function Prototype Index ({len(functions)} procedures)
 */

#include "dk_types.h"
#include "dk_structs.h"

#ifdef __cplusplus
extern "C" {{
#endif

"""
        )
        for mod_name in sorted(module_summary.keys()):
            f.write(f"\n/* === Module: {mod_name} ({len(module_summary[mod_name])} functions) === */\n")
            for fn_entry in module_summary[mod_name]:
                src_info = (
                    f" | Lines: {','.join(map(str, fn_entry['source_lines']))}"
                    if fn_entry.get("source_lines")
                    else ""
                )
                f.write(
                    f"/* VA: {fn_entry['address']} | Ghidra: {fn_entry['ghidra_name']}{src_info} | {fn_entry['inferred_reason']} */\n"
                    f"{fn_entry['prototype']}\n"
                )
        f.write("\n#ifdef __cplusplus\n}\n#endif\n")

    all_target_modules = set(module_summary.keys()) | set(cpp_filenames)
    for mod_name in sorted(all_target_modules):
        target_file = src_dir / mod_name
        target_file.parent.mkdir(parents=True, exist_ok=True)
        mod_fns = [fn for fn in functions if assigned_module.get(fn["address"]) == mod_name]

        rel_inc = "../include" if "/" not in mod_name else "../../include"
        with open(target_file, "w", encoding="utf-8") as f:
            f.write(
                f"""/**
 * Dungeon Keeper (KEEPER.EXE) - Reconstructed Source Module: {mod_name}
 * Binary Subject: /home/merlin/Dungeon Keeper/re/KEEPER.elf
 * Decompiler Engine: REA 6.5.0 + Ghidra 12.1.4 (x86:LE:32:default)
 * Functions in this translation unit: {len(mod_fns)}
 */

#include "{rel_inc}/dk_types.h"
#include "{rel_inc}/dk_structs.h"
#include "{rel_inc}/dk_globals.h"
#include "{rel_inc}/dk_functions.h"

"""
            )
            for fn in mod_fns:
                faddr = fn["address"]
                iname = inferred_names[faddr]
                ireason = inferred_reasons[faddr]
                attr = attribution_method[faddr]
                callers = fn.get("callers", [])
                callees = fn.get("callees", [])
                info = fn.get("info") or {}
                body = info.get("body") or {}
                total_bytes = body.get("total_bytes", "unknown")
                sites = fn_errlog_sites.get(faddr, [])

                fn_strings_list = []
                for sva, sval in fn_discovered_strings.get(faddr, []):
                    s_escaped = sval.replace("\n", "\\n").replace("\r", "\\r")
                    entry_str = f"0x{sva:x}: \"{s_escaped}\""
                    if entry_str not in fn_strings_list:
                        fn_strings_list.append(entry_str)

                pseudo = fn.get("pseudocode") or ""
                annotated_pseudo = annotate_pseudocode_strings(pseudo, read_cstring_at_va, sites)

                f.write("/" + "*" * 78 + "\n")
                f.write(f" * Function : {iname} (Ghidra: {fn['name']})\n")
                f.write(f" * Prototype: {fn_prototypes[faddr]}\n")
                f.write(f" * Address  : {faddr} (Size: {total_bytes} bytes)\n")
                f.write(f" * Module   : {mod_name} [{attr}]\n")
                if sites:
                    site_descs = [
                        f"{f_s or mod_name}:{l_n}" + (f" (\"{m_s}\")" if m_s else "")
                        for _, _, f_s, l_n, m_s in sites
                    ]
                    f.write(f" * OrigLine : {'; '.join(site_descs[:5])}\n")
                f.write(f" * Naming   : {ireason}\n")
                f.write(f" * Callers  : {len(callers)} -> {', '.join(callers[:10])}{' ...' if len(callers) > 10 else ''}\n")
                f.write(f" * Callees  : {len(callees)} -> {', '.join(callees[:10])}{' ...' if len(callees) > 10 else ''}\n")
                if fn_strings_list:
                    f.write(" * Strings  :\n")
                    for sline in fn_strings_list[:20]:
                        f.write(f" *   - {sline}\n")
                f.write(" " + "*" * 78 + "/\n")
                f.write(annotated_pseudo.strip() + "\n\n")

    print(f"Generated {len(all_target_modules)} reconstructed source files in {src_dir}.")


if __name__ == "__main__":
    main()
