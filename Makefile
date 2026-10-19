# Dungeon Keeper (KEEPER.EXE) - Native Hybrid Build System
# Builds:
#   1. build/keeper_linux32   (Native 32-bit Linux executable)
#   2. build/keeper_win32.exe (Native 32-bit Windows 10 executable via MinGW-w64)

CC_LINUX  = gcc -m32
CXX_LINUX = g++ -m32
CC_WIN32  = i686-w64-mingw32-gcc
CXX_WIN32 = i686-w64-mingw32-g++

CFLAGS_COMMON = -O2 -Wall -Wextra -fno-strict-aliasing -Iinclude
# Link host executable at 0x08048000 (Linux) or 0x08000000 (Windows) so 0x00010000..0x00450000 is free for KEEPER.EXE segments
LDFLAGS_LINUX = -no-pie -Wl,-Ttext-segment=0x08048000 -lm
LDFLAGS_WIN32 = -Wl,--image-base,0x08000000 -Wl,--disable-dynamicbase -lgdi32 -luser32 -lkernel32 -static-libgcc -static-libstdc++

.PHONY: all linux win32 validate clean

all: linux win32

build:
	mkdir -p build build/frames

linux: build
	$(CC_LINUX) $(CFLAGS_COMMON) -c runtime/keeper_runtime.c -o build/keeper_runtime.o
	$(CXX_LINUX) $(CFLAGS_COMMON) -c runtime/recompiled_modules.cpp -o build/recompiled_modules.o
	$(CXX_LINUX) build/keeper_runtime.o build/recompiled_modules.o $(LDFLAGS_LINUX) -o build/keeper_linux32

win32: build
	$(CC_WIN32) $(CFLAGS_COMMON) -c runtime/keeper_runtime.c -o build/keeper_runtime_win32.o
	$(CXX_WIN32) $(CFLAGS_COMMON) -c runtime/recompiled_modules.cpp -o build/recompiled_modules_win32.o
	$(CXX_WIN32) build/keeper_runtime_win32.o build/recompiled_modules_win32.o $(LDFLAGS_WIN32) -o build/keeper_win32.exe

rebase: build
	python3 tools/le_to_elf32.py "/home/merlin/Dungeon Keeper/KEEPER.EXE" build/KEEPER_20000000.elf 0x20000000

validate: linux
	./build/keeper_linux32 --headless --max-frames 120 --dump-frames build/frames -nosound

validate-win32: win32
	./build/keeper_win32.exe --headless --max-frames 120 --dump-frames build/frames -nosound

clean:
	rm -rf build
