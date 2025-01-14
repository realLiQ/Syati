#pragma once

#include "JSystem.h"

// Actor sensor types
#define ATYPE_PLAYER_START 0x00
#define ATYPE_PLAYER 0x01
#define ATYPE_PUPPETEER 0x02
#define ATYPE_DELETED_PLAYER_03 0x03
#define ATYPE_DELETED_PLAYER_04 0x04
#define ATYPE_YOSHI 0x05
#define ATYPE_PLAYER_END 0x06

#define ATYPE_NPC_START 0x07
#define ATYPE_NPC 0x08
#define ATYPE_NPC_END 0x09

#define ATYPE_ANIMAL 0x0A

#define ATYPE_RIDE_START 0x0B
#define ATYPE_RIDE 0x0C
#define ATYPE_SPHERE_PLAYER 0x0D
#define ATYPE_SPHERE_PLAYER_HIT 0x0E
#define ATYPE_SPRING_ATTACKER 0x0F
#define ATYPE_SPRING_ATTACKER_KINOPIO 0x10
#define ATYPE_SPRING_ATTACKER_KINOPIO_BIND 0x11
#define ATYPE_JET_TURTLE 0x12
#define ATYPE_JET_TURTLE_SLOW 0x13
#define ATYPE_SPECIAL_WEAPON 0x14
#define ATYPE_GHOST 0x15
#define ATYPE_RIDE_END 0x16

#define ATYPE_ENEMY_START 0x17
#define ATYPE_ENEMY 0x18
#define ATYPE_ENEMY_SIMPLE 0x19
#define ATYPE_ENEMY_ATTACK 0x1A
#define ATYPE_COCO_NUT 0x1B
#define ATYPE_WATER_PRESSURE_BULLET 0x1C
#define ATYPE_BOMBHEI 0x1D
#define ATYPE_TAKOBO 0x1E
#define ATYPE_KURIBO 0x1F
#define ATYPE_KARIKARI 0x20
#define ATYPE_BEGOMAN 0x21
#define ATYPE_KILLER_TARGET_ENEMY 0x22
#define ATYPE_PLAYER_AUTO_JUMP 0x23
#define ATYPE_MOGUCCHI_REFUSE_TERRITORY 0x24
#define ATYPE_BIG_BUBBLE 0x25
#define ATYPE_NOKONOKO 0x26
#define ATYPE_PUKUPUKU 0x27
#define ATYPE_UNIZO 0x28
#define ATYPE_SAMBO_HEAD 0x29
#define ATYPE_SAMBO_BODY 0x2A
#define ATYPE_HOMING_FIRE 0x2B
#define ATYPE_HOMING_FIRE_SHOOTER 0x2C
#define ATYPE_HOMING_KILLER 0x2D
#define ATYPE_MAGNUM_KILLER 0x2E
#define ATYPE_ROCK 0x2F
#define ATYPE_WANWAN 0x30
#define ATYPE_DELETED_ENEMY_31 0x31
#define ATYPE_DELETED_ENEMY_32 0x32
#define ATYPE_KOOPA_JR_ROBOT 0x33
#define ATYPE_LEAF_BOARD 0x34
#define ATYPE_KOOPA_JR_CASTLE 0x35
#define ATYPE_KOOPA_JR_CASTLE_TIRE 0x36
#define ATYPE_BELLY_DRAGON_HEAD 0x37
#define ATYPE_BELLY_DRAGON_BODY 0x38
#define ATYPE_BELLY_DRAGON_WEAK_POINT 0x39
#define ATYPE_DELETED_ENEMY_3A 0x3A
#define ATYPE_DELETED_ENEMY_3B 0x3B
#define ATYPE_HIP_DROP_STAR 0x3C
#define ATYPE_SUPPORT_TICO 0x3D
#define ATYPE_ENEMY_END 0x3E

#define ATYPE_MAPOBJ_START 0x3F
#define ATYPE_MAP_OBJ 0x40
#define ATYPE_MAP_OBJ_SIMPLE 0x41
#define ATYPE_MAP_OBJ_MOVE_COLLISION 0x42
#define ATYPE_CLIP_FIELD_MAP_PARTS 0x43
#define ATYPE_COIN 0x44
#define ATYPE_COIN_RED 0x45
#define ATYPE_STAR_PIECE 0x46
#define ATYPE_KINOKO_ONEUP 0x47
#define ATYPE_COINTHROW 0x48
#define ATYPE_SWITCH 0x49
#define ATYPE_MORPH_ITEM 0x4A
#define ATYPE_GOLF_CUP 0x4B
#define ATYPE_BREAKABLE_CAGE 0x4C
#define ATYPE_BEE_FLOWER 0x4D
#define ATYPE_KILLER_TARGET_MAPOBJ 0x4E
#define ATYPE_PUNCH_BOX 0x4F
#define ATYPE_WATER_BAZOOKA_CAPSULE 0x50
#define ATYPE_ICEJUMP_WALL 0x51
#define ATYPE_SNOW_STEP 0x52
#define ATYPE_SAND_BIRD 0x53
#define ATYPE_KEY_SWITCH_AVOID 0x54
#define ATYPE_BOSS_BUSSUN_SHOT_COLLISION 0x55
#define ATYPE_SPIN_CLOUD_BLOCK 0x56
#define ATYPE_DELETED_MAPOBJ_57 0x57
#define ATYPE_DELETED_MAPOBJ_58 0x58
#define ATYPE_MAPOBJ_END 0x59

#define ATYPE_AUTO_RUSH_OBJ_START 0x5A
#define ATYPE_BINDER 0x5B
#define ATYPE_TRANSFERABLE_BINDER 0x5C
#define ATYPE_PRIOR_BINDER 0x5D
#define ATYPE_SPIN_DRIVER_BIND 0x5E
#define ATYPE_SPIN_CANNON_BIND 0x5F
#define ATYPE_SPHERE_PLAYER_BIND 0x60
#define ATYPE_POWER_STAR_BIND 0x61
#define ATYPE_G_CAPTURE_BIND 0x62
#define ATYPE_SPRING_ATTACKER_BIND 0x63
#define ATYPE_WATER_PRESSURE_BULLET_BIND 0x64
#define ATYPE_MARIO_LAUNCHER_BIND 0x65
#define ATYPE_QUESTION_COIN_BIND 0x66
#define ATYPE_SCENARIO_STARTER_BIND 0x67
#define ATYPE_DELETED_AUTO_RUSH_OBJ_68 0x68
#define ATYPE_AUTO_RUSH_OBJ_END 0x69

#define ATYPE_RUSH_OBJ_START 0x6A
#define ATYPE_RUSH_ENEMY 0x6B
#define ATYPE_COCO_NUT_BIND 0x6C
#define ATYPE_TURNIP_BIND 0x6D
#define ATYPE_SWITCH_BIND 0x6E
#define ATYPE_RUSH_OBJ_END 0x6F

#define ATYPE_PRESS_OBJ_START 0x70
#define ATYPE_MAP_OBJ_PRESS 0x71
#define ATYPE_PRESS_OBJ_END 0x72

#define ATYPE_SPHERE_MOVER_OBJ_START 0x73
#define ATYPE_JUMP_HOLE 0x74
#define ATYPE_SPHERE_DASH 0x75
#define ATYPE_BALL_RAIL 0x76
#define ATYPE_SPHERE_MOVER_OBJ_END 0x77

#define ATYPE_SPECIAL_START 0x78
#define ATYPE_SYSTEM_SENSOR 0x79
#define ATYPE_EYE 0x7A
#define ATYPE_PUSH 0x7B
#define ATYPE_DEMO 0x7C
#define ATYPE_SWITCH_MESSENGER 0x7D
#define ATYPE_MESSAGE_SENSOR 0x7E
#define ATYPE_RECEIVER 0x7F
#define ATYPE_SPECIAL_END 0x80

#define ATYPE_LAST 0x81

// Actor message types
#define ACTMES_PLAYER_ATTACK_START 0x00
#define ACTMES_PLAYER_PUNCH 0x01
#define ACTMES_PLAYER_TRAMPLE 0x02
#define ACTMES_PLAYER_HIP_DROP 0x03
#define ACTMES_PLAYER_UPPER_PUNCH 0x04
#define ACTMES_JET_TURTLE_ATTACK 0x07
#define ACTMES_YOSHI_PROJECTILE 0x08
#define ACTMES_YOSHI_EAT 0x09
#define ACTMES_FOO_ATTACK 0x0A
#define ACTMES_FIREBALL_ATTACK 0x0B
#define ACTMES_SEARCHLIGHT_ATTACK 0x0C
#define ACTMES_FREEZE_ATTACK 0x0D
#define ACTMES_INVINCIBLE_ATTACK 0x0E
#define ACTMES_STAR_PIECE_ATTACK 0x0F
#define ACTMES_DRILL_ATTACK 0x10
#define ACTMES_ROCK_ATTACK 0x11
#define ACTMES_SNOW_BALL_ATTACK 0x12
#define ACTMES_SUPPORT_TICO_SPIN 0x13
#define ACTMES_IS_STAR_PIECE_REFLECT 0x14
#define ACTMES_IS_LOCKON_STAR_PIECE_SHOOT 0x15
#define ACTMES_STAR_PIECE_GIFT 0x16
#define ACTMES_STAR_PIECE_GIFT_1 0x17
#define ACTMES_STAR_PIECE_GIFT_2 0x18
#define ACTMES_STAR_PIECE_GIFT_3 0x19
#define ACTMES_STAR_PIECE_GIFT_4 0x1A
#define ACTMES_STAR_PIECE_GIFT_5 0x1B
#define ACTMES_STAR_PIECE_GIFT_6 0x1C
#define ACTMES_STAR_PIECE_GIFT_7 0x1D
#define ACTMES_STAR_PIECE_GIFT_8 0x1E
#define ACTMES_STAR_PIECE_GIFT_9 0x1F
#define ACTMES_STAR_PIECE_GIFT_10 0x20
#define ACTMES_STAR_PIECE_GIFT_11 0x21
#define ACTMES_STAR_PIECE_GIFT_12 0x22
#define ACTMES_STAR_PIECE_GIFT_13 0x23
#define ACTMES_STAR_PIECE_GIFT_14 0x24
#define ACTMES_STAR_PIECE_GIFT_MAX 0x25
#define ACTMES_PLAYER_ATTACK_END 0x26
#define ACTMES_HITMARK_EMIT 0x27
#define ACTMES_HANG_CANCEL 0x30
#define ACTMES_SHAKE_OFF_BEE 0x31
#define ACTMES_TAKE_TOUCH 0x32
#define ACTMES_PUSH 0x33
#define ACTMES_PUSH_FORCE 0x34
#define ACTMES_KICK 0x35
#define ACTMES_SPIN_STORM_RANGE 0x3C
#define ACTMES_BALL_DASH_WALL 0x41
#define ACTMES_BALL_DASH_GROUND 0x42
#define ACTMES_REFLECT 0x48
#define ACTMES_REFLECT_V 0x49
#define ACTMES_IS_BROKEN 0x4A
#define ACTMES_PASS_RING 0x4B
#define ACTMES_FOUNTAINJUMP 0x4C
#define ACTMES_TERESA_PLAYER_TOUCH 0x4D
#define ACTMES_RUSH_PLAYER_TOUCH 0x4E
#define ACTMES_BOMB_TERESA_TONGUE_TOUCH 0x4F
#define ACTMES_PUDDLE_TOUCH_GROUND 0x50
#define ACTMES_WARP 0x51
#define ACTMES_ENEMY_ATTACK_START 0x59
#define ACTMES_ENEMY_ATTACK_FLIP_VERYWEAK 0x5A
#define ACTMES_ENEMY_ATTACK_FLIP_WEAK 0x5B
#define ACTMES_ENEMY_ATTACK_FLIP_WEAK_JUMP 0x5C
#define ACTMES_ENEMY_ATTACK_FLIP_JUMP 0x5D
#define ACTMES_ENEMY_ATTACK_FLIP 0x5E
#define ACTMES_ENEMY_ATTACK_FLIP_ROT 0x5F
#define ACTMES_ENEMY_ATTACK_FLIP_MAXIMUM 0x60
#define ACTMES_ENEMY_ATTACK 0x61
#define ACTMES_ENEMY_ATTACK_STRONG 0x62
#define ACTMES_ENEMY_ATTACK_MAXIMUM 0x63
#define ACTMES_ENEMY_ATTACK_EXPLOSION 0x64
#define ACTMES_ENEMY_ATTACK_FIREBACK 0x65
#define ACTMES_ENEMY_ATTACK_FIRERUN 0x66
#define ACTMES_ENEMY_ATTACK_FIRERUN_STRONG 0x67
#define ACTMES_ENEMY_ATTACK_ELECTRIC 0x68
#define ACTMES_ENEMY_ATTACK_HEATBEAM 0x69
#define ACTMES_ENEMY_ATTACK_ACID 0x6A
#define ACTMES_ENEMY_ATTACK_FREEZE 0x6B
#define ACTMES_ENEMY_ATTACK_CRUSH 0x6C
#define ACTMES_ENEMY_ATTACK_EXTRA_DAMAGE 0x6D
#define ACTMES_ENEMY_ATTACK_COUNTER_SPIN 0x6E
#define ACTMES_ENEMY_ATTACK_COUNTER_HIPDROP 0x6F
#define ACTMES_TO_ENEMY_ATTACK_BLOW 0x70
#define ACTMES_TO_ENEMY_ATTACK_TRAMPLE 0x72
#define ACTMES_TO_ENEMY_ATTACK_SHOCK_WAVE 0x74
#define ACTMES_ENEMY_ATTACK_END 0x75
#define ACTMES_SUCCESS 0x76
#define ACTMES_GROUP_MOVE_START 0x7A
#define ACTMES_GROUP_MOVE_STOP 0x7B
#define ACTMES_GROUP_ATTACK 0x7C
#define ACTMES_GROUP_SHOW 0x7D
#define ACTMES_GROUP_HIDE 0x7E
#define ACTMES_INHALE_BLACK_HOLE 0x81
#define ACTMES_START_POWER_STAR_GET 0x82
#define ACTMES_ITEM_GET 0x83
#define ACTMES_IS_PULL_ENABLE 0x84
#define ACTMES_ITEM_PULL 0x85
#define ACTMES_ITEM_SHOW 0x86
#define ACTMES_ITEM_HIDE 0x87
#define ACTMES_ITEM_START_MOVE 0x8B
#define ACTMES_ITEM_END_MOVE 0x8C
#define ACTMES_RUSH_BEGIN 0x92
#define ACTMES_AUTORUSH_BEGIN 0x93
#define ACTMES_RUSH_CANCEL 0x95
#define ACTMES_RUSH_FORCE_CANCEL 0x96
#define ACTMES_RUSH_DAMAGE_CANCEL 0x97
#define ACTMES_RUSH_END 0x98
#define ACTMES_IS_RUSH_ENABLE 0x99
#define ACTMES_IS_RUSH_TAKEOVER 0x9A
#define ACTMES_UPDATE_BASEMTX 0xA1
#define ACTMES_DISPERSE_BOMB_TERESA 0xA2
#define ACTMES_BREAK_POLTA_GROUND_ROCK 0xA3
#define ACTMES_SPHERE_PLAYER_BINDED 0xA4
#define ACTMES_SET_UP_JUMP_HOLE 0xA5
#define ACTMES_SHOOT_JUMP_HOLE 0xA6
#define ACTMES_END_JUMP_HOLE 0xA7
#define ACTMES_END_RAIL_DASH 0xA8
#define ACTMES_END_BALL_RAIL 0xA9
#define ACTMES_END_BALL_BIND 0xAA
#define ACTMES_END_WANWAN_GOAL 0xAB
#define ACTMES_FLOOR_TOUCH 0xAC
#define ACTMES_WALL_TOUCH 0xAD
#define ACTMES_CEIL_TOUCH 0xB0
#define ACTMES_DINO_PACKUN_BALL_ATTACK 0xB5
#define ACTMES_DINO_PACKUN_PUNCHED_BALL 0xB6
#define ACTMES_DINO_PACKUN_PULLED_TAIL 0xB7
#define ACTMES_RACE_READY 0xEE
#define ACTMES_RACE_START 0xEF
#define ACTMES_RACE_GOAL 0xF0
#define ACTMES_RACE_RESET 0xF1
#define ACTMES_LAUNCHER_BREAKABLE 0xF4
#define ACTMES_PLANT_GROUP_EMIT_ITEM 0xF5

class LiveActor;
class SensorGroup;

class HitSensor
{
public:
    HitSensor(u32, u16, f32, LiveActor *);

    u32 receiveMessage(u32, HitSensor *);
    void setType(u32);
    bool isType(u32) const;
    void validate();
    void invalidate();
    void validateBySystem();
    void invalidateBySystem();
    void addHitSensor(HitSensor *);

    u32 mSensorType; // _0
    TVec3f mPosition; // _4
    f32 mRadius; // _10
    u16 mNumSensors; // _14
    u16 _16;
    HitSensor** mSensors; // _18
    SensorGroup* mSensorGroup; // _1C
    bool _20;
    bool _21;
    LiveActor* mParentActor; // _24
};

class HitSensorInfo
{
public:
    HitSensorInfo(const char *, HitSensor *, const TVec3f *pFollowPos, MtxPtr pFollowMtx, const TVec3f &, bool);

    void setFollowPos(const TVec3f *pFollowPos);
    void setFollowMtx(MtxPtr pFollowMtx);
    void update();
    void doObjCol();

    const char* mName; // _0
    s32 mHashCode; // _4
    HitSensor* mSensor; // _8
    TVec3f mOffset; // _C
    TVec3f* mFollowPos; // _18
    MtxPtr mFollowMtx; // _1C
    bool _20;
};
