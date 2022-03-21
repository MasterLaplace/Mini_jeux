/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** tower_generation
*/

#include "defender.h"

extern const map_t MAPS[];
extern const preset_tower_t TOWERS[];

static void set_preset(preset_button_tower_t *preset, sfVector2f *pos)
{
    preset_tower_t archer = TOWERS[ARCHER];

    preset->texture = ARCHER_TOWER;
    preset->pos = *pos;
    preset->scale = (sfVector2f) {1, 1};
    preset->rect = (sfIntRect) {0, 0, archer.size.x, archer.size.y};
    preset->origin = (sfVector2f) {archer.origin.x, archer.size.y};
    preset->state = INACTIVE;
    preset->callback = &callback_tower_button;
    preset->update = &update_tower_button;

}

static tower_t *create_tower(sfVector2f *pos, sfTexture **textures)
{
    tower_t *tower = malloc(sizeof(tower_t));
    preset_button_tower_t preset;
    preset_tower_t archer = TOWERS[ARCHER];

    if (tower == NULL)
        return NULL;
    set_preset(&preset, pos);
    tower->button = create_tower_button(preset, textures);
    if (tower->button == NULL)
        return NULL;
    sfSprite_setScale(tower->button->sprite, (sfVector2f) {0.20, 0.20});
    tower->state = DESTROYED;
    tower->type = ARCHER;
    tower->firing_status = REST;
    tower->range = archer.range;
    tower->damage = archer.damage;
    return tower;
}

void tower_generation(game_t *game)
{
    link_t *link = NULL;
    link_t *towers = NULL;
    tower_t *tower = NULL;
    map_t map = MAPS[0];

    for (size_t i = 0; map.tower_pos[i].x != -1; i++) {
        tower = create_tower(&(map.tower_pos[i]), game->textures);
        link = create_link(tower);
        if (tower == NULL || link == NULL)
            continue;
        link->display = &draw_tower;
        list_append(&towers, link);
    }
    game->game_scene->towers = towers;
}
