/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** callback_music_button
*/

#include "defender.h"

void callback_music_button(game_t *game, __attribute__((unused)) void *params)
{
    float volume = sfMusic_getVolume(game->musics[0]);

    if (volume == 0)
        set_music_volume(game, 100);
    else
        set_music_volume(game, 0);
}
