/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** sound
*/

#ifndef SOUND_H_
    #define SOUND_H_

typedef struct sound_s {
    sfSound *sound;
    sfSoundBuffer *buffer;
} sound_t;

typedef struct display_s {
    sfRenderWindow *window;
} display_t;

#endif/* !SOUND_H_ */
