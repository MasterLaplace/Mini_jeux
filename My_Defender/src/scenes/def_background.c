/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** def_background
*/

#include "defender.h"

void def_background(scene_t *scene, sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    if (sprite == NULL) {
        scene->background = NULL;
        return;
    }
    sfSprite_setPosition(sprite, (sfVector2f) {0, 0});
    sfSprite_setTexture(sprite, texture, sfTrue);
    scene->background = sprite;
}
