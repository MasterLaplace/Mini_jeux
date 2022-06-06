/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_rect
*/

#include "game.h"

static void set_new_rect(object_t *object)
{
    sfIntRect rect = sfSprite_getTextureRect(object->sprite);
    size_t end = object->offset * (object->max_value - 1);

    rect.left += (int) object->offset;
    sfSprite_setTextureRect(object->sprite, rect);
    if ((size_t) rect.left >= end) {
        rect.left = 0;
        sfSprite_setTextureRect(object->sprite, rect);
    }
}

void move_rect_object(game_t *game)
{
    link_t *actual = game->objects;
    object_t *object = NULL;

    if (!actual)
        return;
    do {
        object = (object_t *) actual->obj;
        if (object->type == PIECES)
            set_new_rect(object);
        actual = actual->next;
    } while (game->objects && actual != game->objects);
}
