/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** enum
*/

#ifndef ENUM_H_
    #define ENUM_H_

typedef enum {
    HOME,
    GAME,
    PARAM,
    PAUSE,
    CREDIT,
    SAVE,
    NAME
} type_scene;

typedef enum {
    MAP1,
    MAP2,
    MAP3,
    VILLAGE
} type_map;

typedef enum {
    PLAY_BUTTON, EXIT_BUTTON, PARAM_BUTTON,
    SOUND_BUTTON, MUSIC_BUTTON, MENU_BUTTON, PAUSE_BUTTON,
    CREDIT_BUTTON, HELP_BUTTON, INTERACT_BUTTON, RETURN_BUTTON,
    SCREEN_BUTTON, INVENTORY_BUTTON, LEVEL_BUTTON, V_BUTTON, X_BUTTON,
    STATS_PNL, INVENTORY_PNL, PAUSE_PNL, HEALTH_BAR, XP_BAR,
    BACKGROUND, DARK,
    TABLE, ROPE, SPACE_TEXT, BUBBLES,
    MAP_1, MAP_2, MAP_3, VILLAGE_MAP,
    PARALLAX_1_B, PARALLAX_2_B, PARALLAX_3_B,
    PARALLAX_4_B, PARALLAX_5_B, PARALLAX_6_B, PARALLAX_7_B, PARALLAX_8_B,
    PLAYER_TXT, ARROW,
    DEATH, LICH, MUMMY, SKELETON, ZOMBIE,
    PIECES, CHEST, DIAMOND, KEY_BLACK, KEY_WHITE,
    MAGICIAN_1, MAGICIAN_2
} texture;

typedef enum {
    INACTIVE,
    HOVERED,
    ACTIVE
} button_state;

typedef enum {
    SUN,
    RAIN,
    SNOW
} type_weather;

typedef enum {
    NOT_DISPLAYED,
    UPGRADE
} state_wheel;

typedef enum {
    IDLE,
    WALKING,
    JUMP_START,
    JUMP_LOOP,
    FALLING,
    ATTACK,
    HURT,
    THROWING,
    KICKING,
    DYING
} player_state;

typedef enum {
    EMY_IDLE,
    EMY_WALKING,
    EMY_ATTACK,
    EMY_THROWING,
    EMY_KICKING,
    EMY_HURT,
    EMY_DYING
} enemy_state;

typedef enum {
    PNJ_IDLE
} pnj_state;

typedef enum {
    OBJ_IDLE
} obj_state;

typedef enum {
    click,
    wheel_sound,
    archer_construct,
    stone_construct,
    magic_construct,
    crossbow_construct
} type_sound;

typedef enum {
    home_music
} type_music;

typedef enum {
    MONEY_TEXT,
    HEALTH_TEXT,
    NAME_TEXT,
    LEVEL_TXT,
    P_DAMAGE_TXT,
    DAMAGE_TXT,
    P_DEFENSE_TXT,
    DEFENSE_TXT
} type_text;

typedef enum {
    BLACK,
    WHITE
} type_pnj;

typedef enum {
    OBJECT,
    PNJ,
    ENEMY
} type_colision;

typedef enum {
    PRODUCTION,
    PRODUCTEUR,
    SCENARIO,
    DIRECTEUR,
    PHOTO,
    MUSIQUE,
    MUSIQUE_CREDIT,
    DIRECT_ART,
    ASSIT_REAL,
    SON,
    GROUP,
    COPYRIGHT,
    THANKS,
} type_credit;

typedef enum {
    EXP_BAR,
    LIFE_BAR
} type_bar;

#endif/* !ENUM_H_ */
