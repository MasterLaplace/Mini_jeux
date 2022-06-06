/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_return_button
*/

#include "game.h"

void callback_return_button(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    change_scene(game, GAME);
    sfSound_play(game->sounds[click]->sound);
}
