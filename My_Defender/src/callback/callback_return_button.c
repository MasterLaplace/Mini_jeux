/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_return_button
*/

#include "defender.h"

void callback_return_button(game_t *game, __attribute__((unused)) void *params)
{
    if (game == NULL)
        return;
    change_scene(game, GAME);
    sfSound_play(game->sounds[click]->sound);
}
