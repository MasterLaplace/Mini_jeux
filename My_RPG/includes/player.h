/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_
    #include "game.h"

typedef struct game_s game_t;

typedef struct arrow_s {
    float speed;
    size_t damage;
    short direct;
    sfVector2f pos;
    sfSprite *sprite;
    void (*update)(game_t *);
} arrow_t;

typedef struct player_stats_s {
    float speed;
    float gravity;
    size_t health;
    size_t max_health;
    size_t range;
    size_t damage;
    size_t defense;
    size_t experience;
    size_t next_level;
    size_t level;
    char *name;
} player_stats_t;

typedef struct player_s {
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    size_t offset;
    size_t state;
    link_t *arrows;
    player_stats_t *stats;
    void (*update)(game_t *);
} player_t;

#endif/* !PLAYER_H_ */
