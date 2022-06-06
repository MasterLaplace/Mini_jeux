/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** change_scene
*/

#include "game.h"

void change_scene(game_t *game, type_scene scene)
{
    if (!game)
        return;
    CURRENT = scene;
}
