# Dungeon Keeper (`KEEPER.EXE`) — Reconstructed Architecture & Module Map

## 1. Virtual Memory Layout (`KEEPER.elf`)

| Segment | Start VA | End VA | Size (Bytes) | Permissions | Contents |
| :--- | :--- | :--- | :--- | :--- | :--- |
| `.text_obj1` | `0x00010000` | `0x001447a0` | `1,263,520` | `R-X` | 32-bit x86 gameplay engine, Bullfrog Library (`bflib`), Watcom CRT |
| `.text_obj2` | `0x00150000` | `0x001500fe` | `254` | `R-X` | 16-bit real-mode transition helper |
| `.data_obj3` | `0x00160000` | `0x0019a000` | `237,568` | `RW-` | Initialized tables, creature/room/spell descriptors, strings (`3,274`) |
| `.bss_obj3` | `0x0019a000` | `0x003f1570` | `2,454,896` | `RW-` | Main runtime state (`Game`, `Dungeon`, `Thing` pool, `SlabMap`, `Packet` state) |
| `.bss_obj4` | `0x00400000` | `0x00402024` | `8,228` | `RW-` | Secondary runtime BSS |

## 2. Reconstructed Translation Units (`src/`)

| Source Module | Function Count | Address Span (Start – End) | Direct Anchor Functions |
| :--- | :--- | :--- | :--- |
| [`src/anger.cpp`](../src/anger.cpp) | `34` | `0x10010` – `0x10dfc` | `2` |
| [`src/angtool.cpp`](../src/angtool.cpp) | `22` | `0x10ecc` – `0x11db9` | `2` |
| [`src/ariadne.cpp`](../src/ariadne.cpp) | `19` | `0x11e00` – `0x13169` | `2` |
| [`src/barracks.cpp`](../src/barracks.cpp) | `12` | `0x130c5` – `0x13b98` | `1` |
| [`src/battle.cpp`](../src/battle.cpp) | `17` | `0x13bae` – `0x144d2` | `7` |
| [`src/bflib/bflib_network.cpp`](../src/bflib/bflib_network.cpp) | `81` | `0xed04c` – `0x1262a4` | `0` |
| [`src/bflib/bflib_sound.cpp`](../src/bflib/bflib_sound.cpp) | `138` | `0xea94f` – `0x11cfae` | `0` |
| [`src/bflib/bflib_system_io.cpp`](../src/bflib/bflib_system_io.cpp) | `449` | `0xe5b3c` – `0x104d44` | `0` |
| [`src/bflib/bflib_video.cpp`](../src/bflib/bflib_video.cpp) | `4` | `0xf0d90` – `0xfe128` | `0` |
| [`src/build.cpp`](../src/build.cpp) | `10` | `0x1458c` – `0x14d45` | `2` |
| [`src/cdtest.cpp`](../src/cdtest.cpp) | `8` | `0x14c9a` – `0x15251` | `1` |
| [`src/ceiling.cpp`](../src/ceiling.cpp) | `20` | `0x7bb10` – `0x7df48` | `1` |
| [`src/column.cpp`](../src/column.cpp) | `13` | `0x15318` – `0x1581c` | `4` |
| [`src/combat.cpp`](../src/combat.cpp) | `15` | `0x15861` – `0x15ed7` | `1` |
| [`src/combchk.cpp`](../src/combchk.cpp) | `17` | `0x15ef2` – `0x1660d` | `2` |
| [`src/combmove.cpp`](../src/combmove.cpp) | `5` | `0x16640` – `0x16b29` | `1` |
| [`src/combobj.cpp`](../src/combobj.cpp) | `14` | `0x16cd0` – `0x17184` | `5` |
| [`src/combold.cpp`](../src/combold.cpp) | `5` | `0x171cc` – `0x175fa` | `1` |
| [`src/combtool.cpp`](../src/combtool.cpp) | `32` | `0x173e8` – `0x18d16` | `11` |
| [`src/command.cpp`](../src/command.cpp) | `60` | `0x781c8` – `0x7ba98` | `41` |
| [`src/compevnt.cpp`](../src/compevnt.cpp) | `32` | `0x18d28` – `0x1ac93` | `1` |
| [`src/comptask.cpp`](../src/comptask.cpp) | `53` | `0x1ad1f` – `0x1df28` | `3` |
| [`src/comptool.cpp`](../src/comptool.cpp) | `30` | `0x1d917` – `0x200e0` | `2` |
| [`src/compturn.cpp`](../src/compturn.cpp) | `32` | `0x201ed` – `0x228b1` | `1` |
| [`src/creature.cpp`](../src/creature.cpp) | `93` | `0x7df64` – `0x8685c` | `16` |
| [`src/door.cpp`](../src/door.cpp) | `21` | `0x22905` – `0x23519` | `2` |
| [`src/draw.cpp`](../src/draw.cpp) | `68` | `0x872a4` – `0xa43b4` | `5` |
| [`src/dungeon.cpp`](../src/dungeon.cpp) | `14` | `0x235e8` – `0x23ece` | `2` |
| [`src/effect.cpp`](../src/effect.cpp) | `26` | `0x24344` – `0x26987` | `4` |
| [`src/engine3.cpp`](../src/engine3.cpp) | `36` | `0x948a0` – `0xaa3a8` | `1` |
| [`src/entrance.cpp`](../src/entrance.cpp) | `6` | `0x2684f` – `0x26dbc` | `1` |
| [`src/event.cpp`](../src/event.cpp) | `13` | `0x27348` – `0x27824` | `1` |
| [`src/evil.cpp`](../src/evil.cpp) | `30` | `0x2778e` – `0x298b5` | `4` |
| [`src/eyelens.cpp`](../src/eyelens.cpp) | `7` | `0x26e5e` – `0x27320` | `2` |
| [`src/file.cpp`](../src/file.cpp) | `50` | `0x29979` – `0x2d861` | `7` |
| [`src/food.cpp`](../src/food.cpp) | `16` | `0xaa558` – `0xabf38` | `4` |
| [`src/frontend.cpp`](../src/frontend.cpp) | `89` | `0x2d8e2` – `0x30e88` | `6` |
| [`src/frontmap.cpp`](../src/frontmap.cpp) | `22` | `0x30e47` – `0x32e00` | `5` |
| [`src/frontnet.cpp`](../src/frontnet.cpp) | `129` | `0x32f12` – `0x362e1` | `14` |
| [`src/fronttor.cpp`](../src/fronttor.cpp) | `14` | `0x362e4` – `0x36e7e` | `2` |
| [`src/game.cpp`](../src/game.cpp) | `9` | `0x36f48` – `0x3783c` | `1` |
| [`src/gen2.cpp`](../src/gen2.cpp) | `15` | `0x37874` – `0x3818c` | `3` |
| [`src/good.cpp`](../src/good.cpp) | `24` | `0x38212` – `0x3919b` | `2` |
| [`src/gravyard.cpp`](../src/gravyard.cpp) | `11` | `0x391e9` – `0x39d83` | `3` |
| [`src/group.cpp`](../src/group.cpp) | `10` | `0x39c3e` – `0x3a32d` | `2` |
| [`src/heap.cpp`](../src/heap.cpp) | `13` | `0x3a3d4` – `0x3a8a8` | `4` |
| [`src/heapmgr.cpp`](../src/heapmgr.cpp) | `21` | `0x3a8f7` – `0x3bb93` | `1` |
| [`src/impset.cpp`](../src/impset.cpp) | `70` | `0x3aef2` – `0x3fcd0` | `2` |
| [`src/imptool.cpp`](../src/imptool.cpp) | `16` | `0x3f7ad` – `0x401aa` | `1` |
| [`src/inits.cpp`](../src/inits.cpp) | `62` | `0x401ec` – `0x4845c` | `15` |
| [`src/input.cpp`](../src/input.cpp) | `19` | `0x473e1` – `0x4991c` | `1` |
| [`src/instance.cpp`](../src/instance.cpp) | `63` | `0x499ce` – `0x4c14e` | `3` |
| [`src/jtyedit.cpp`](../src/jtyedit.cpp) | `8` | `0x4c16c` – `0x4c618` | `1` |
| [`src/lair.cpp`](../src/lair.cpp) | `30` | `0x4c6ec` – `0x4e3fa` | `6` |
| [`src/light.cpp`](../src/light.cpp) | `54` | `0xac094` – `0xb250c` | `17` |
| [`src/magic.cpp`](../src/magic.cpp) | `38` | `0x4e4ad` – `0x50a47` | `2` |
| [`src/mapwho.cpp`](../src/mapwho.cpp) | `23` | `0x50c38` – `0x5159c` | `1` |
| [`src/moodneed.cpp`](../src/moodneed.cpp) | `21` | `0x51374` – `0x52957` | `2` |
| [`src/move.cpp`](../src/move.cpp) | `33` | `0xb28e8` – `0xb5264` | `4` |
| [`src/navigate.cpp`](../src/navigate.cpp) | `111` | `0xb5550` – `0xc3828` | `54` |
| [`src/newgui.cpp`](../src/newgui.cpp) | `240` | `0x52988` – `0x5d280` | `25` |
| [`src/object.cpp`](../src/object.cpp) | `30` | `0xc38a4` – `0xc6b04` | `2` |
| [`src/packet.cpp`](../src/packet.cpp) | `38` | `0x5d32c` – `0x623aa` | `7` |
| [`src/panmap.cpp`](../src/panmap.cpp) | `12` | `0x62570` – `0x633c4` | `1` |
| [`src/person.cpp`](../src/person.cpp) | `45` | `0x63412` – `0x65448` | `6` |
| [`src/pom.cpp`](../src/pom.cpp) | `11` | `0x654d8` – `0x65be8` | `1` |
| [`src/prison.cpp`](../src/prison.cpp) | `9` | `0x65c8e` – `0x6616d` | `1` |
| [`src/research.cpp`](../src/research.cpp) | `19` | `0x66247` – `0x670b2` | `7` |
| [`src/room.cpp`](../src/room.cpp) | `102` | `0xc6374` – `0xd13d4` | `25` |
| [`src/routes.cpp`](../src/routes.cpp) | `22` | `0xd13f0` – `0xd6664` | `4` |
| [`src/rt/watcom_crt.cpp`](../src/rt/watcom_crt.cpp) | `1058` | `0x1056a8` – `0x19543e` | `0` |
| [`src/scavenge.cpp`](../src/scavenge.cpp) | `18` | `0x67018` – `0x67fd3` | `4` |
| [`src/script.cpp`](../src/script.cpp) | `13` | `0x6809c` – `0x68cc0` | `2` |
| [`src/scrsupp.cpp`](../src/scrsupp.cpp) | `15` | `0x68cee` – `0x69a41` | `6` |
| [`src/setup.cpp`](../src/setup.cpp) | `26` | `0x69a90` – `0x6c2cc` | `9` |
| [`src/shot.cpp`](../src/shot.cpp) | `21` | `0x6c444` – `0x6dda0` | `2` |
| [`src/slab.cpp`](../src/slab.cpp) | `31` | `0xd6760` – `0xdafb0` | `9` |
| [`src/sndheap.cpp`](../src/sndheap.cpp) | `13` | `0x6ddd9` – `0x6e3d5` | `4` |
| [`src/sound.cpp`](../src/sound.cpp) | `30` | `0x6e538` – `0x6f974` | `5` |
| [`src/sound3d.cpp`](../src/sound3d.cpp) | `28` | `0x6f6ca` – `0x701c2` | `1` |
| [`src/specials.cpp`](../src/specials.cpp) | `31` | `0x701e3` – `0x713bc` | `2` |
| [`src/spell.cpp`](../src/spell.cpp) | `13` | `0x713cc` – `0x72739` | `2` |
| [`src/ssprite.cpp`](../src/ssprite.cpp) | `25` | `0xdb120` – `0xdcd44` | `2` |
| [`src/structs.cpp`](../src/structs.cpp) | `20` | `0x72810` – `0x72e88` | `5` |
| [`src/temple.cpp`](../src/temple.cpp) | `21` | `0x72eab` – `0x74020` | `6` |
| [`src/torture.cpp`](../src/torture.cpp) | `14` | `0x74038` – `0x74dde` | `3` |
| [`src/train.cpp`](../src/train.cpp) | `8` | `0x74e70` – `0x75b48` | `3` |
| [`src/trap.cpp`](../src/trap.cpp) | `14` | `0x75ba4` – `0x768c6` | `6` |
| [`src/update.cpp`](../src/update.cpp) | `49` | `0xdc440` – `0xe5564` | `11` |
| [`src/workshop.cpp`](../src/workshop.cpp) | `35` | `0x768fb` – `0x7818f` | `8` |
