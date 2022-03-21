/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** presets
*/

#ifndef PRESETS_H_
    #define PRESETS_H_
    #include "defender.h"

typedef struct game_s game_t;
typedef struct button_s button_t;
typedef struct tower_s tower_t;

typedef struct preset_button_tower_s {
    texture texture;
    sfVector2f pos;
    sfVector2f scale;
    sfIntRect rect;
    sfVector2f origin;
    button_state state;
    void (*callback)(game_t *, void *);
    void (*update) (tower_t *);
} preset_button_tower_t;

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

typedef struct preset_enemy_s {
    int type;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f origin;
    size_t speed;
    size_t health;
    size_t offset;
    size_t max_value;
    size_t damage;
    size_t stat;
    size_t checkpoint;
} preset_enemy_t;

typedef struct preset_tower_s {
    sfVector2f origin;
    sfVector2f size;
    sfIntRect rect;
    size_t nb_sprites;
    size_t offset;
    int damage;
    int range;
} preset_tower_t;

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

#endif/* !PRESETS_H_ */
