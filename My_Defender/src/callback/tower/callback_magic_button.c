/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_magic_button
*/

#include "defender.h"

extern const preset_tower_t TOWERS[];

void callback_magic_button(game_t *game, __attribute__((unused)) void *params)
{
    tower_t *tower = game->game_scene->wheel->current_tower;
    sfSprite *sprite = tower->button->sprite;

    if (transaction(game, game->game_scene->wheel->costs[MAGIC])) {
        sfSound_play(game->sounds[magic_construct]->sound);
        tower->type = MAGIC;
        tower->state = LEVEL_1;
        tower->damage = TOWERS[MAGIC].damage;
        tower->range = TOWERS[MAGIC].range;
        sfSprite_setTexture(sprite, game->textures[MAGIC_TOWER], sfFalse);
        sfSprite_setOrigin(sprite, TOWERS[MAGIC].origin);
        sfSprite_setTextureRect(sprite, TOWERS[MAGIC].rect);
        tower->button->update(tower);
        game->game_scene->wheel->state = NOT_DISPLAYED;
    }
}
