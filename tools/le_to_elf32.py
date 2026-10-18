#!/usr/bin/env python3
"""
Convert a Watcom C/C++ DOS/4GW Linear Executable (LE) into a relocated 32-bit x86 ELF (ELF32)
so that Ghidra and REA can disassemble and decompile it directly with full segment layout and fixups.
"""
import os
import re
import shutil
import struct
import subprocess
import sys
import tempfile


def find_le_header(data: bytes) -> int:
    e_lfanew = struct.unpack_from("<I", data, 0x3C)[0]
    if e_lfanew + 0xC4 <= len(data) and data[e_lfanew : e_lfanew + 4] == b"LE\x00\x00":
        return e_lfanew
    idx = 0
    while True:
        idx = data.find(b"LE\x00\x00", idx)
        if idx == -1:
            raise ValueError("Could not find LE header in executable")
        if idx + 0xC4 <= len(data):
            page_size = struct.unpack_from("<I", data, idx + 0x28)[0]
            cpu_type, _ = struct.unpack_from("<HH", data, idx + 0x08)
            if page_size == 4096 and cpu_type in (1, 2, 3, 4, 5):
                return idx
        idx += 1


def convert_le_to_elf32(le_path: str, elf_path: str) -> None:
    with open(le_path, "rb") as f:
        data = f.read()

    le_off = find_le_header(data)
    (
        cpu_type,
        os_type,
        mod_ver,
        mod_flags,
        num_pages,
        eip_obj,
        eip_off,
        esp_obj,
        esp_off,
        page_size,
        last_page_bytes,
        fixup_size,
        fixup_cksum,
        loader_size,
        loader_cksum,
        obj_tab_off,
        num_objs,
        obj_page_tab_off,
        obj_iter_off,
        res_tab_off,
        num_res,
        res_name_tab_off,
        entry_tab_off,
        mod_dir_off,
        num_mod_dir,
        fixup_page_tab_off,
        fixup_rec_tab_off,
        imp_mod_tab_off,
        num_imp_mods,
        imp_proc_tab_off,
        page_cksum_off,
        data_pages_off,
    ) = struct.unpack_from("<HH30I", data, le_off + 0x08)

    # Parse Object Table
    objects = []
    for i in range(num_objs):
        off = le_off + obj_tab_off + i * 24
        vsize, rbase, flags, ptab_idx, npages, rsvd = struct.unpack_from("<6I", data, off)
        buf_size = max(vsize, npages * page_size)
        objects.append(
            {
                "index": i + 1,
                "vsize": vsize,
                "rbase": rbase,
                "flags": flags,
                "ptab_idx": ptab_idx,
                "npages": npages,
                "buf": bytearray(buf_size),
                "page_to_obj_off": {},
            }
        )

    # Map logical pages into object buffers
    page_owner = {}  # 0-based page_table_entry_idx -> (obj_dict, offset_in_obj)
    for obj in objects:
        for p_idx in range(obj["npages"]):
            pt_entry_index = (obj["ptab_idx"] - 1) + p_idx
            poff = le_off + obj_page_tab_off + pt_entry_index * 4
            b0, b1, b2, pflags = data[poff : poff + 4]
            phys_page = (b0 << 16) | (b1 << 8) | b2  # 1-based physical page
            obj_offset = p_idx * page_size
            page_owner[pt_entry_index] = (obj, obj_offset)
            if pflags == 0 and phys_page > 0:
                file_off = data_pages_off + (phys_page - 1) * page_size
                read_len = last_page_bytes if phys_page == num_pages else page_size
                chunk = data[file_off : file_off + read_len]
                obj["buf"][obj_offset : obj_offset + len(chunk)] = chunk

    # Parse Fixup Page Table (num_pages + 1 uint32 offsets)
    fixup_page_offsets = struct.unpack_from(
        f"<{num_pages + 1}I", data, le_off + fixup_page_tab_off
    )
    fixup_rec_base = le_off + fixup_rec_tab_off

    fixup_counts = {}
    data_to_code = set()
    code_to_code = []
    all_text_fixup_srcs = set()

    for pt_idx in range(num_pages):
        if pt_idx not in page_owner:
            continue
        obj, page_obj_off = page_owner[pt_idx]
        rec_start = fixup_rec_base + fixup_page_offsets[pt_idx]
        rec_end = fixup_rec_base + fixup_page_offsets[pt_idx + 1]
        cur = rec_start
        while cur < rec_end:
            src_type = data[cur]
            fix_flags = data[cur + 1]
            cur += 2

            stype = src_type & 0x0F
            is_list = (src_type & 0x20) != 0
            ttype = fix_flags & 0x03
            is_additive = (fix_flags & 0x04) != 0
            is_32bit_target = (fix_flags & 0x10) != 0
            is_32bit_add = (fix_flags & 0x20) != 0
            is_16bit_obj = (fix_flags & 0x40) != 0

            if ttype != 0:
                raise ValueError(f"Unsupported non-internal fixup target type {ttype}")

            if is_list:
                src_count = data[cur]
                cur += 1
            else:
                src_off = struct.unpack_from("<h", data, cur)[0]
                cur += 2

            if is_16bit_obj:
                tgt_obj_num = struct.unpack_from("<H", data, cur)[0]
                cur += 2
            else:
                tgt_obj_num = data[cur]
                cur += 1

            tgt_obj = objects[tgt_obj_num - 1]

            if stype == 0x02:  # 16-bit selector only
                tgt_off = 0
            else:
                if is_32bit_target:
                    tgt_off = struct.unpack_from("<I", data, cur)[0]
                    cur += 4
                else:
                    tgt_off = struct.unpack_from("<H", data, cur)[0]
                    cur += 2

            add_val = 0
            if is_additive:
                if is_32bit_add:
                    add_val = struct.unpack_from("<I", data, cur)[0]
                    cur += 4
                else:
                    add_val = struct.unpack_from("<H", data, cur)[0]
                    cur += 2

            if is_list:
                src_offsets = list(struct.unpack_from(f"<{src_count}h", data, cur))
                cur += 2 * src_count
            else:
                src_offsets = [src_off]

            target_linear = tgt_obj["rbase"] + tgt_off + add_val
            fixup_counts[stype] = fixup_counts.get(stype, 0) + len(src_offsets)

            for soff in src_offsets:
                write_pos = page_obj_off + soff
                if write_pos < 0:
                    continue
                if obj["index"] == 1:
                    src_va = obj["rbase"] + write_pos
                    all_text_fixup_srcs.add(src_va)
                    if stype == 0x07 and tgt_obj_num == 1:
                        code_to_code.append((src_va, target_linear))
                elif stype == 0x07 and tgt_obj_num == 1:
                    data_to_code.add(target_linear)

                if stype == 0x07:  # 32-bit offset
                    if write_pos + 4 <= len(obj["buf"]):
                        struct.pack_into("<I", obj["buf"], write_pos, target_linear & 0xFFFFFFFF)
                elif stype == 0x08:  # 32-bit self-relative offset
                    if write_pos + 4 <= len(obj["buf"]):
                        src_linear = obj["rbase"] + write_pos
                        rel = (target_linear - (src_linear + 4)) & 0xFFFFFFFF
                        struct.pack_into("<I", obj["buf"], write_pos, rel)
                elif stype == 0x06:  # 16:32 pointer (32-bit offset + 16-bit selector)
                    if write_pos + 6 <= len(obj["buf"]):
                        struct.pack_into("<IH", obj["buf"], write_pos, target_linear & 0xFFFFFFFF, tgt_obj_num)
                elif stype == 0x05:  # 16-bit offset
                    if write_pos + 2 <= len(obj["buf"]):
                        struct.pack_into("<H", obj["buf"], write_pos, target_linear & 0xFFFF)
                elif stype == 0x02:  # 16-bit selector
                    if write_pos + 2 <= len(obj["buf"]):
                        struct.pack_into("<H", obj["buf"], write_pos, tgt_obj_num)
                elif stype == 0x03:  # 16:16 pointer
                    if write_pos + 4 <= len(obj["buf"]):
                        struct.pack_into("<HH", obj["buf"], write_pos, target_linear & 0xFFFF, tgt_obj_num)

    entry_va = objects[eip_obj - 1]["rbase"] + eip_off

    # Build ELF32 (EM_386) with Program Headers and Section Headers
    ehdr_size = 52
    phdr_size = 32
    shdr_size = 40
    num_phdrs = len(objects)

    # Align file offsets to page_size (0x1000)
    data_start = ((ehdr_size + num_phdrs * phdr_size + 0xFFF) // 0x1000) * 0x1000

    phdrs = bytearray()
    shdrs = bytearray()
    # Null section header (index 0)
    shdrs.extend(struct.pack("<10I", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))

    shstrtab = bytearray(b"\x00")
    file_Wave = bytearray(data_start)

    for obj in objects:
        idx = obj["index"]
        vaddr = obj["rbase"]
        vsize = obj["vsize"]
        init_size = min(vsize, obj["npages"] * page_size)
        raw_bytes = bytes(obj["buf"][:init_size]) if obj["npages"] > 0 else b""
        filesz = len(raw_bytes)
        memsz = max(vsize, filesz)

        # Align file offset
        if len(file_Wave) % 0x1000 != 0:
            file_Wave.extend(b"\x00" * (0x1000 - (len(file_Wave) % 0x1000)))
        foff = len(file_Wave) if filesz > 0 else 0
        file_Wave.extend(raw_bytes)

        # ELF p_flags: PF_X=1, PF_W=2, PF_R=4
        # LE flags: bit 0=R, bit 1=W, bit 2=X
        p_flags = 0
        if obj["flags"] & 1:
            p_flags |= 4  # PF_R
        if obj["flags"] & 2:
            p_flags |= 2  # PF_W
        if obj["flags"] & 4:
            p_flags |= 1  # PF_X

        # PT_LOAD = 1
        phdrs.extend(
            struct.pack(
                "<8I",
                1,          # p_type = PT_LOAD
                foff,       # p_offset
                vaddr,      # p_vaddr
                vaddr,      # p_paddr
                filesz,     # p_filesz
                memsz,      # p_memsz
                p_flags,    # p_flags
                0x1000,     # p_align
            )
        )

        # Section flags: SHF_WRITE=1, SHF_ALLOC=2, SHF_EXECINSTR=4
        sh_flags = 2  # SHF_ALLOC
        if obj["flags"] & 2:
            sh_flags |= 1
        if obj["flags"] & 4:
            sh_flags |= 4

        if filesz > 0:
            sname = (f".text_obj{idx}" if (obj["flags"] & 4) else f".data_obj{idx}").encode()
            sh_name = len(shstrtab)
            shstrtab.extend(sname + b"\x00")
            shdrs.extend(
                struct.pack(
                    "<10I",
                    sh_name,
                    1,  # SHT_PROGBITS
                    sh_flags,
                    vaddr,
                    foff,
                    filesz,
                    0,
                    0,
                    16,
                    0,
                )
            )

        if memsz > filesz:
            bname = f".bss_obj{idx}".encode()
            sh_name = len(shstrtab)
            shstrtab.extend(bname + b"\x00")
            shdrs.extend(
                struct.pack(
                    "<10I",
                    bname and sh_name,
                    8,  # SHT_NOBITS
                    sh_flags,
                    vaddr + filesz,
                    foff + filesz,
                    memsz - filesz,
                    0,
                    0,
                    16,
                    0,
                )
            )

    # Write temporary ELF first if objdump is available to extract decoded CALL and RET instructions
    text_obj = objects[0]
    text_base = text_obj["rbase"]
    text_size = min(text_obj["vsize"], text_obj["npages"] * page_size)
    text_bytes = bytes(text_obj["buf"][:text_size])

    reloc_bytes = set()
    for s in all_text_fixup_srcs:
        for d in range(4):
            reloc_bytes.add(s + d)

    code_func_ptrs = set()
    jtab_srcs = set()
    for src_va, tgt_va in code_to_code:
        off = src_va - text_base
        if off >= 1 and text_bytes[off - 1] in (0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF, 0x68):
            code_func_ptrs.add(tgt_va)
        elif (
            (off >= 2 and text_bytes[off - 2] == 0xC7)
            or (off >= 3 and text_bytes[off - 3] == 0xC7)
            or (off >= 6 and text_bytes[off - 6] == 0xC7)
        ):
            code_func_ptrs.add(tgt_va)
        else:
            jtab_srcs.add(src_va)

    objdump_calls = set()
    real_rets = set()
    if shutil.which("objdump"):
        with tempfile.NamedTemporaryFile(suffix=".bin", delete=False) as tf:
            tf.write(text_bytes)
            tmp_bin = tf.name
        try:
            out = subprocess.check_output(
                [
                    "objdump",
                    "-D",
                    "-b",
                    "binary",
                    "-m",
                    "i386",
                    "-M",
                    "intel",
                    f"--adjust-vma=0x{text_base:x}",
                    tmp_bin,
                ],
                text=True,
            )
            call_re = re.compile(
                r"^\s*([0-9a-f]+):\s+e8 [0-9a-f]{2} [0-9a-f]{2} [0-9a-f]{2} [0-9a-f]{2}\s+call\s+0x([0-9a-f]+)",
                re.M,
            )
            for m in call_re.finditer(out):
                t = int(m.group(2), 16)
                if text_base <= t < text_base + text_size:
                    objdump_calls.add(t)
            ret_re = re.compile(r"^\s*([0-9a-f]+):\s+(?:c3|c2 [0-9a-f]{2} 00)\s+ret", re.M)
            for m in ret_re.finditer(out):
                real_rets.add(int(m.group(1), 16))
        finally:
            os.unlink(tmp_bin)

    prologue_funcs = set()
    for off in range(text_size - 6):
        va = text_base + off
        is_boundary = False
        if va in real_rets:
            nxt = off + (1 if text_bytes[off] == 0xC3 else 3)
            is_boundary = True
        elif va in jtab_srcs and (va + 4) not in jtab_srcs:
            nxt = off + 4
            is_boundary = True
        if is_boundary:
            zeros = 0
            while nxt < text_size and text_bytes[nxt] in (0x00, 0x90) and (text_base + nxt) not in reloc_bytes:
                if text_bytes[nxt] == 0x00:
                    zeros += 1
                nxt += 1
            if nxt + 4 < text_size:
                cand_va = text_base + nxt
                b0, b1 = text_bytes[nxt], text_bytes[nxt + 1]
                pushes = [0x53, 0x51, 0x52, 0x56, 0x57, 0x55]
                if b0 in pushes and b1 in pushes and pushes.index(b0) < pushes.index(b1):
                    prologue_funcs.add(cand_va)
                elif zeros > 0 and b0 in (0x53, 0x51, 0x52, 0x56, 0x57, 0x55, 0x83, 0x81, 0xB8, 0xA1, 0x8B, 0x68):
                    prologue_funcs.add(cand_va)

    func_entries = sorted(
        (objdump_calls | data_to_code | code_func_ptrs | prologue_funcs | {entry_va})
        & set(range(text_base, text_base + text_size))
    )

    # Build .strtab and .symtab for discovered function entries (STT_FUNC in section 1 = .text_obj1)
    strtab = bytearray(b"\x00")
    symtab = bytearray(struct.pack("<IIIBBH", 0, 0, 0, 0, 0, 0))  # Symbol 0: STN_UNDEF
    for fva in func_entries:
        sname = (b"_entry" if fva == entry_va else f"FUN_{fva:08x}".encode("ascii")) + b"\x00"
        st_name = len(strtab)
        strtab.extend(sname)
        # st_info: (STB_GLOBAL=1 << 4) | STT_FUNC=2 = 0x12, st_shndx=1 (.text_obj1)
        symtab.extend(struct.pack("<IIIBBH", st_name, fva, 0, 0x12, 0, 1))

    if len(file_Wave) % 4 != 0:
        file_Wave.extend(b"\x00" * (4 - (len(file_Wave) % 4)))
    strtab_off = len(file_Wave)
    file_Wave.extend(strtab)
    strtab_sh_name = len(shstrtab)
    shstrtab.extend(b".strtab\x00")
    strtab_shndx = len(shdrs) // shdr_size
    shdrs.extend(
        struct.pack(
            "<10I",
            strtab_sh_name,
            3,  # SHT_STRTAB
            0,
            0,
            strtab_off,
            len(strtab),
            0,
            0,
            1,
            0,
        )
    )

    if len(file_Wave) % 4 != 0:
        file_Wave.extend(b"\x00" * (4 - (len(file_Wave) % 4)))
    symtab_off = len(file_Wave)
    file_Wave.extend(symtab)
    symtab_sh_name = len(shstrtab)
    shstrtab.extend(b".symtab\x00")
    shdrs.extend(
        struct.pack(
            "<10I",
            symtab_sh_name,
            2,  # SHT_SYMTAB
            0,
            0,
            symtab_off,
            len(symtab),
            strtab_shndx,  # sh_link = .strtab section index
            1,             # sh_info = index of first STB_GLOBAL symbol
            4,
            16,            # sh_entsize = sizeof(Elf32_Sym)
        )
    )

    # Add .shstrtab section header
    shstr_name = len(shstrtab)
    shstrtab.extend(b".shstrtab\x00")
    shstr_off = len(file_Wave)
    file_Wave.extend(shstrtab)
    shdrs.extend(
        struct.pack(
            "<10I",
            shstr_name,
            3,  # SHT_STRTAB
            0,
            0,
            shstr_off,
            len(shstrtab),
            0,
            0,
            1,
            0,
        )
    )

    if len(file_Wave) % 4 != 0:
        file_Wave.extend(b"\x00" * (4 - (len(file_Wave) % 4)))
    shoff = len(file_Wave)
    file_Wave.extend(shdrs)

    num_shdrs = len(shdrs) // shdr_size
    shstrndx = num_shdrs - 1

    e_ident = b"\x7fELF\x01\x01\x01\x00" + b"\x00" * 8
    ehdr = struct.pack(
        "<16sHHIIIIIHHHHHH",
        e_ident,
        2,              # e_type = ET_EXEC
        3,              # e_machine = EM_386
        1,              # e_version = EV_CURRENT
        entry_va,       # e_entry
        ehdr_size,      # e_phoff
        shoff,          # e_shoff
        0,              # e_flags
        ehdr_size,      # e_ehsize
        phdr_size,      # e_phentsize
        num_phdrs,      # e_phnum
        shdr_size,      # e_shentsize
        num_shdrs,      # e_shnum
        shstrndx,       # e_shstrndx
    )

    file_Wave[0:ehdr_size] = ehdr
    file_Wave[ehdr_size : ehdr_size + len(phdrs)] = phdrs

    os.makedirs(os.path.dirname(os.path.abspath(elf_path)), exist_ok=True)
    with open(elf_path, "wb") as f:
        f.write(file_Wave)
    os.chmod(elf_path, 0o755)

    print(
        f"Converted {le_path} -> {elf_path}: entry=0x{entry_va:x}, objects={len(objects)}, "
        f"fixups_applied={fixup_counts}, func_symbols={len(func_entries)}, size={len(file_Wave)} bytes"
    )


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print(f"Usage: {sys.argv[0]} <input_le.exe> <output.elf>", file=sys.stderr)
        sys.exit(1)
    convert_le_to_elf32(sys.argv[1], sys.argv[2])
