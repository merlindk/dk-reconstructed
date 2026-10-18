#pragma once
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
