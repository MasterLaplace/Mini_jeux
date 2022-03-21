/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** init_textures
*/

#include "defender.h"

extern const size_t NB_TEXTURES;
extern const char *TEXTURES[];

sfTexture **init_textures(void)
{
    sfTexture **textures = malloc(sizeof(sfTexture *) * (NB_TEXTURES + 1));

    for (size_t i = 0; i < NB_TEXTURES; i++)
        textures[i] = sfTexture_createFromFile(TEXTURES[i], NULL);
    textures[NB_TEXTURES] = NULL;
    return textures;
}
