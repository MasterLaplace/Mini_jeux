/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** draw_button
*/

#include "game.h"

void draw_button(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (!obj || !window)
        return;
    sprite = ((button_t *) obj)->sprite;
    if (sprite)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_interface(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (!obj || !window)
        return;
    sprite = ((user_interface_t *) obj)->sprite;
    if (sprite)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_dynamic(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (!obj || !window)
        return;
    sprite = ((dynamic_interface_t *) obj)->sprite;
    if (sprite)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}
