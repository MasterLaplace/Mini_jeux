/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** init_textures
*/

#include "game.h"

extern const size_t NB_TEXTURES;
extern const char *TEXTURE_PATHS[];
static const char load_error[] =
        "Error: Failed to load textures Please reset the game folder.\n";

sfTexture **init_textures(void)
{
    sfTexture **textures = malloc(sizeof(sfTexture *) * (NB_TEXTURES + 1));

    if (!textures)
        return NULL;
    for (size_t i = 0; i < NB_TEXTURES; i++) {
        textures[i] = sfTexture_createFromFile(TEXTURE_PATHS[i], NULL);
        if (!textures[i]) {
            my_perror(load_error);
            return NULL;
        }
    }
    textures[NB_TEXTURES] = NULL;
    return textures;
}
