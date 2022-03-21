/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_tower_button
*/

#include "defender.h"

void callback_tower_button(game_t *game, void *params)
{
    tower_t *tower = (tower_t *) params;
    sfVector2f tow_pos;

    if (game == NULL || tower == NULL)
        return;
    if (tower->state != DESTROYED)
        return;
    game->game_scene->wheel->state = PURCHASE;
    game->game_scene->wheel->current_tower = tower;
    tow_pos = sfSprite_getPosition(tower->button->sprite);
    sfSound_play(game->sounds[wheel_sound]->sound);
    move_wheel(game->game_scene->wheel, &tow_pos);
}
