/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** init_sounds
*/

#include "game.h"

extern const size_t NB_HITBOXES;
extern const char *HITBOXES[];

void hitbox_destroy(sfImage **hitboxes)
{
    for (size_t i = 0; i < NB_HITBOXES; i++)
        sfImage_destroy(hitboxes[i]);
}

sfImage **init_hitboxes(void)
{
    sfImage **hitboxes = malloc(sizeof(sfImage *) * (NB_HITBOXES + 1));

    if (!hitboxes)
        return NULL;
    for (size_t i = 0; i < NB_HITBOXES; i++) {
        hitboxes[i] = sfImage_createFromFile(HITBOXES[i]);
        if (!hitboxes[i])
            return NULL;
    }
    hitboxes[NB_HITBOXES] = NULL;
    return hitboxes;
}
