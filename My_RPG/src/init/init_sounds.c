/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** init_sounds
*/

#include "game.h"

extern const size_t NB_SOUNDS;
extern const char *SOUNDS[];

void sounds_destroy(sound_t **sounds)
{
    for (size_t i = 0; i < NB_SOUNDS; i++) {
        sfSound_destroy(sounds[i]->sound);
        sfSoundBuffer_destroy(sounds[i]->buffer);
        free(sounds[i]);
    }
    free(sounds);
}

sound_t **init_sounds(void)
{
    sound_t **sounds = malloc(sizeof(sound_t *) * NB_SOUNDS);
    sound_t *sound;
    sfSound *sf_sound;
    sfSoundBuffer *buffer_sound;

    for (size_t i = 0; i < NB_SOUNDS; i++) {
        sound = malloc(sizeof(sound_t));
        if (!sounds || !sound) {
            my_putstr("Echec du malloc des sons ou d'un son\n");
            return NULL;
        }
        sf_sound = sfSound_create();
        buffer_sound = sfSoundBuffer_createFromFile(SOUNDS[i]);
        sfSound_setBuffer(sf_sound, buffer_sound);
        sound->sound = sf_sound;
        sound->buffer = buffer_sound;
        sounds[i] = sound;
    }
    return sounds;
}
