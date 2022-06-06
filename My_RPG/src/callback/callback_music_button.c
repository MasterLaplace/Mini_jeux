/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_music_button
*/

#include "game.h"

void callback_music_button(game_t *game, UNUSED void *params)
{
    float volume = sfMusic_getVolume(game->musics[0]);

    if (volume == 0)
        set_music_volume(game, 50);
    else
        set_music_volume(game, 0);
}
