/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** init_musics
*/

#include "defender.h"

extern const size_t NB_MUSICS;
extern const char *MUSIC[];

void musics_destroy(sfMusic **musics)
{
    for (size_t i = 0; i < NB_MUSICS; i++)
        sfMusic_destroy(musics[i]);
}

sfMusic **init_music(void)
{
    sfMusic **musics = malloc(sizeof(sfMusic *) * (NB_MUSICS + 1));

    for (size_t i = 0; i < NB_MUSICS; i++) {
        musics[i] = sfMusic_createFromFile(MUSIC[i]);
        sfMusic_setLoop(musics[i], sfTrue);
    }
    musics[NB_MUSICS] = NULL;
    return musics;
}
