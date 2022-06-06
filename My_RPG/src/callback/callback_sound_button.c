/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_sound_button
*/

#include "game.h"

void callback_sound_button(game_t *game, UNUSED void *params)
{
    float volume = sfSound_getVolume(game->sounds[0]->sound);

    if (volume == 0)
        set_sound_volume(game, 100);
    else
        set_sound_volume(game, 0);
}
