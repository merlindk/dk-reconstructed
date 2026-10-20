import struct

with open('/home/merlin/workspace/dk-reconstructed/build/KEEPER_20000000.elf', 'rb') as f:
    data = f.read()

pos = 0x15869e
print(f"Bytes around {hex(pos)}:")
for i in range(pos - 64, pos + 128, 4):
    val = struct.unpack("<I", data[i:i+4])[0]
    va = i - 0x137000 + 0x20160000
    print(f"file={hex(i)} VA={hex(va)} val={hex(val)}")
