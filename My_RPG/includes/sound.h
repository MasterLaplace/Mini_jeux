/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** sound
*/

#ifndef SOUND_H_
    #define SOUND_H_
    #include "game.h"

typedef struct sound_s {
    sfSound *sound;
    sfSoundBuffer *buffer;
} sound_t;

#endif/* !SOUND_H_ */
