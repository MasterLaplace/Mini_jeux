/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** draw_button
*/

#include "defender.h"

void draw_tower(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (obj == NULL || window == NULL)
        return;
    sprite = ((tower_t *) obj)->button->sprite;
    if (sprite != NULL)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_button(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (obj == NULL || window == NULL)
        return;
    sprite = ((button_t *) obj)->sprite;
    if (sprite != NULL)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_enemy(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (obj == NULL || window == NULL)
        return;
    sprite = ((enemy_t *) obj)->sprite;
    if (sprite != NULL)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}

void draw_interface(void *obj, sfRenderWindow *window)
{
    sfSprite *sprite = NULL;

    if (obj == NULL || window == NULL)
        return;
    sprite = ((user_interface_t *) obj)->sprite;
    if (sprite != NULL)
        sfRenderWindow_drawSprite(window, sprite, NULL);
}
