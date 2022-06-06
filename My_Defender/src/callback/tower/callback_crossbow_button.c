/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_crossbow_button
*/

#include "defender.h"

extern const preset_tower_t TOWERS[];

void callback_crossbow_button(game_t *game,
                                __attribute__((unused)) void *param)
{
    tower_t *tower = game->game_scene->wheel->current_tower;
    sfSprite *sprite = tower->button->sprite;

    if (transaction(game, game->game_scene->wheel->costs[CROSSBOW])) {
        sfSound_play(game->sounds[crossbow_construct]->sound);
        tower->type = CROSSBOW;
        tower->state = LEVEL_1;
        tower->damage = TOWERS[CROSSBOW].damage;
        tower->range = TOWERS[CROSSBOW].range;
        sfSprite_setTexture(sprite, game->textures[CROSSBOW_TOWER], sfFalse);
        sfSprite_setOrigin(sprite, TOWERS[CROSSBOW].origin);
        sfSprite_setTextureRect(sprite, TOWERS[CROSSBOW].rect);
        tower->button->update(tower);
        game->game_scene->wheel->state = NOT_DISPLAYED;
    }
}
