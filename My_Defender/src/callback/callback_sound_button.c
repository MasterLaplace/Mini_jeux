/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_sound_button
*/

#include "defender.h"

void callback_sound_button(game_t *game, __attribute__((unused)) void *params)
{
    float volume = sfSound_getVolume(game->sounds[0]->sound);

    if (volume == 0)
        set_sound_volume(game, 100);
    else
        set_sound_volume(game, 0);
}
