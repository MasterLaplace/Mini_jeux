/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** scenes
*/

#ifndef SCENES_H_
    #define SCENES_H_
    #include "game.h"

typedef struct object_s object_t;
typedef struct pnj_s pnj_t;

typedef struct user_interface_t {
    sfSprite *sprite;
    sfIntRect rect;
} user_interface_t;

typedef struct button_s {
    sfVector2f pos;
    sfSprite *sprite;
    sfIntRect rect;
    button_state state;
    size_t state_2;
    void (*callback)();
    void (*update)();
} button_t;

typedef struct scene_s {
    sfSprite *background;
    link_t *interface;
    link_t *buttons;
} scene_t;

typedef struct dynamic_interface_s {
    sfSprite *sprite;
    size_t type;
} dynamic_interface_t;

typedef struct interface_stats_s {
    sfSprite *background;
    link_t *buttons;
    link_t *dynamic_interface;
    bool statue;
} interface_stats_t;

typedef struct wheel_s {
    sfSprite *sprite;
    link_t *buttons;
    state_wheel state;
    button_t *current_element;
    int use[2];
} wheel_t;

typedef struct element_s {
    object_t *obj;
    button_state state;
    void (*callback)();
    void (*update)();
} element_t;

typedef struct inventory_s {
    sfSprite *background;
    link_t *buttons;
    element_t **elements;
    wheel_t *wheel;
    bool statue;
} inventory_t;

typedef struct bubble_s {
    sfSprite *sprite;
    char *name;
    char *description;
    bool statue;
} bubble_t;

typedef struct game_scene_s {
    sfSprite *parallax_1;
    sfSprite *parallax_2;
    link_t *objects;
    interface_stats_t *interface_stat;
    inventory_t *inventory;
    bubble_t *bubble;
    int current_map;
    bool fade;
} game_scene_t;

#endif/* !SCENES_H_ */
