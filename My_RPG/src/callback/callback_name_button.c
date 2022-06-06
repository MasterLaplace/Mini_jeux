/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_name_button
*/

#include "game.h"

void callback_name_button(game_t *game, UNUSED void *params)
{
    static bool save = false;

    if (!game)
        return;
    if (save)
        change_scene(game, GAME);
    else
        change_scene(game, NAME);
    sfSound_play(game->sounds[click]->sound);
    save = true;
}
