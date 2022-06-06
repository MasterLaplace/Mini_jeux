/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** draw_entity
*/

#include "game.h"

extern const size_t NB_INVENTORY_ELEMENTS;

void draw_enemy(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (!obj || !window)
        return;
    sprite = ((enemy_t *) obj)->sprite;
    if (sprite)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_object(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (!obj || !window)
        return;
    sprite = ((object_t *) obj)->sprite;
    if (sprite)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_arrow(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (!obj || !window)
        return;
    sprite = ((arrow_t *) obj)->sprite;
    if (sprite)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_pnj(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (!obj || !window)
        return;
    sprite = ((pnj_t *) obj)->sprite;
    if (sprite)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_element(game_t *game)
{
    sfSprite *sprite = NULL;

    for (size_t i = 0; i < NB_INVENTORY_ELEMENTS; i++) {
        if (INVENTORY->elements[i]->obj == NULL)
            continue;
        sprite = ((object_t *) INVENTORY->elements[i]->obj)->sprite;
        sfRenderWindow_drawSprite(WINDOW, sprite, NULL);
    }
}
