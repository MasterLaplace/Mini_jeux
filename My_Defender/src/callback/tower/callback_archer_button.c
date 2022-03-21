/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_archer_button
*/

#include "defender.h"

extern const preset_tower_t TOWERS[];

void callback_archer_button(game_t *game, __attribute__((unused)) void *params)
{
    tower_t *tower = game->game_scene->wheel->current_tower;
    sfSprite *sprite = tower->button->sprite;

    if (transaction(game, game->game_scene->wheel->costs[ARCHER])) {
        sfSound_play(game->sounds[archer_construct]->sound);
        tower->type = ARCHER;
        tower->state = LEVEL_1;
        sfSprite_setTexture(sprite, game->textures[ARCHER_TOWER], sfFalse);
        sfSprite_setOrigin(sprite, TOWERS[ARCHER].origin);
        sfSprite_setTextureRect(sprite, TOWERS[ARCHER].rect);
        tower->button->update(tower);
        game->game_scene->wheel->state = NOT_DISPLAYED;
    }
}
