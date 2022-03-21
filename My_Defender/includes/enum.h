/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** enum
*/

#ifndef ENUM_H_
    #define ENUM_H_

typedef enum {
    ARCHER,
    MAGIC,
    STONE,
    CROSSBOW
} type_tower;

typedef enum {
    DESTROYED,
    LEVEL_1,
    LEVEL_2,
    LEVEL_3
} state_tower;

typedef enum {
    REST,
    FIRING
} firing_status;

typedef enum {
    NOT_DISPLAYED,
    PURCHASE,
    UPGRADE
} state_wheel;

typedef enum {
    HOME,
    MAP,
    GAME,
    LOSE,
    WIN,
    PARAM,
    PAUSE,
    NO_MAP
} type_scene;

typedef enum {
    PLAY_BUTTON, EXIT_BUTTON,  CLOSE_MAP, PARAM_BUTTON,
    SOUND_BUTTON, MUSIC_BUTTON, MENU_BUTTON, RETRY_BUTTON, PAUSE_BUTTON,
    BACKGROUND, DARK,
    TABLE, TABLE_WIN, TABLE_LEVELS, ROPE, LEVELS,
    RED_ENEMY, TEXT_BUBBLE, TRUNK,
    BCKG_MAP1,
    ARCHER_TOWER, MAGIC_TOWER, STONE_TOWER, CROSSBOW_TOWER,
    WHEEL, ARCHER_SYM, STONE_SYM, MAGIC_SYM, CROSSBOW_SYM,
    TRIBE, ENEMY_TEX
} texture;

typedef enum {
    INACTIVE,
    HOVERED,
    ACTIVE
} button_state;

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
    NB_ENEMY,
    MONEY,
    HEALTH,
    LOSE_TEXT,
    NO_MAP_TEXT
} type_text;

#endif/* !ENUM_H_ */
