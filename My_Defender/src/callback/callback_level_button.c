/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_level_button
*/

#include "defender.h"

void callback_level_button(game_t *game, void *i_map)
{
    if (game == NULL || i_map == NULL)
        return;
    game->current_map = *((int *) i_map);
    if (game->current_map > 0) {
        change_scene(game, NO_MAP);
        return;
    }
    game_loading(game);
    sfSound_play(game->sounds[click]->sound);
}
