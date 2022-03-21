/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** change_scene
*/

#include "defender.h"

void change_scene(game_t *game, type_scene scene)
{
    if (game == NULL)
        return;
    game->current_scene = scene;
}
