/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_stone_button
*/

#include "defender.h"

extern const preset_tower_t TOWERS[];

void callback_stone_button(game_t *game, __attribute__((unused)) void *params)
{
    tower_t *tower = game->game_scene->wheel->current_tower;
    sfSprite *sprite = tower->button->sprite;

    if (transaction(game, game->game_scene->wheel->costs[STONE])) {
        sfSound_play(game->sounds[stone_construct]->sound);
        tower->type = STONE;
        tower->state = LEVEL_1;
        sfSprite_setTexture(sprite, game->textures[STONE_TOWER], sfFalse);
        sfSprite_setOrigin(sprite, TOWERS[STONE].origin);
        sfSprite_setTextureRect(sprite, TOWERS[STONE].rect);
        tower->button->update(tower);
        game->game_scene->wheel->state = NOT_DISPLAYED;
    }
}
