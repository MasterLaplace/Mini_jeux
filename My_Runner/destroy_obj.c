/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** destroy_obj
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "include/runner.h"
#include "include/my.h"

void destroy_object(game_t *game, game_obj_t **obj)
{
    for (int i = 0; i < 10; i++) {
        sfSprite_destroy(obj[i]->sprite);
        sfTexture_destroy(obj[i]->texture);
        free(obj[i]);
    }
    sfMusic_destroy(game->music);
    free(game->way_1);
    free(game);
}
