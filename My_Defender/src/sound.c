/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-killian.bourhis
** File description:
** sounds
*/

#include "defender.h"

extern const size_t NB_SOUNDS;
extern const size_t NB_MUSICS;

void set_music_volume(game_t *game, float volume)
{
    for (size_t i = 0; i < NB_MUSICS; i++)
        sfMusic_setVolume(game->musics[i], volume);
}

void set_sound_volume(game_t *game, float volume)
{
    for (size_t i = 0; i < NB_SOUNDS; i++)
        sfSound_setVolume(game->sounds[i]->sound, volume);
}

void stop_all_musics(game_t *game)
{
    for (size_t i = 0; i < NB_MUSICS; i++)
        sfMusic_stop(game->musics[i]);
}

void stop_all_sounds(game_t *game)
{
    for (size_t i = 0; i < NB_SOUNDS; i++)
        sfSound_stop(game->sounds[i]->sound);
}
