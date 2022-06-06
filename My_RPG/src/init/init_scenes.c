/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** init_scenes
*/

#include "game.h"

extern const size_t NB_SCENES;
extern const list_init_scene_t SCENES[];

scene_t **init_scenes(game_t *game)
{
    scene_t **scenes = malloc(sizeof(scene_t *) * (NB_SCENES + 1));

    if (!scenes) {
        my_putstr("Echec du malloc des scenes\n");
        return NULL;
    }
    for (size_t i = 0; i < NB_SCENES; i++) {
        scenes[i] = SCENES[i].redirect(game);
        if (!scenes[i]) {
            my_putstr("Echec de l'initialistion d'une scene\n");
            return NULL;
        }
    }
    scenes[NB_SCENES] = NULL;
    return scenes;
}
