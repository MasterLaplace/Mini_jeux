/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** presets
*/

#ifndef PRESETS_H_
    #define PRESETS_H_
    #include "game.h"

typedef struct game_s game_t;
typedef struct button_s button_t;

typedef struct preset_object_s {
    char *name;
    char *description;
    size_t effect;
    texture type;
    void (*update)(game_t *);
    sfIntRect rect;
    size_t offset;
    size_t max_value;
} preset_object_t;

typedef struct preset_enemy_s {
    char *name;
    size_t type;
    int health;
    size_t damage;
    size_t speed;
    size_t exp;
    sfIntRect rect;
    size_t offset;
    void (*update)(game_t *);
} preset_enemy_t;

typedef struct preset_pnj_s {
    char *name;
    size_t quest;
    size_t current_quest;
    texture type;
    sfIntRect rect;
    size_t offset;
    size_t max_value;
    void (*update)(game_t *);
} preset_pnj_t;

typedef struct preset_player_s {
    float speed;
    float gravity;
    size_t max_health;
    size_t range;
    size_t damage;
    size_t defense;
    size_t experience;
    size_t level;
    sfVector2f pos;
    sfIntRect rect;
    size_t offset;
    sfVector2f scale;
    void (*update)(game_t *);
} preset_player_t;

typedef struct preset_button_s {
    texture texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfVector2f origin;
    button_state state;
    void (*callback)(game_t *, void *);
    void (*update) (button_t *);
} preset_button_t;

typedef struct preset_text_s {
    type_text text;
    sfVector2f pos;
    char *str;
    char *font;
    size_t size;
} preset_text_t;

typedef struct preset_interface_s {
    texture texture;
    sfVector2f pos;
} preset_interface_t;

typedef struct preset_background_s {
    texture texture;
    sfVector2f pos;
} preset_background_t;

typedef struct preset_map_extra_t {
    preset_background_t background;
} preset_map_extra_t;

typedef struct preset_credit_text_s {
    sfVector2f pos;
    char *title;
    char *description;
    char *font;
    size_t size;
} preset_credit_text_t;

typedef struct preset_dynamic_s {
    texture texture;
    sfIntRect rect;
    sfVector2f pos;
    size_t type;
} preset_dynamic_t;

typedef struct preset_bubble_s {
    texture texture;
    bool statue;
} preset_bubble_t;

typedef struct preset_quest_s {
    char *name;
    char *description;
    int limit_quest;
    texture type;
} preset_quest_t;

typedef struct preset_element_s {
    size_t state;
    void (*callback)(game_t *, void *);
    void (*update) (element_t *);
} preset_element_t;

#endif/* !PRESETS_H_ */
