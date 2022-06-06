/*
** EPITECH PROJECT, 2022
** my rpg
** File description:
** rectangle
*/

#include "../includes/game.h"

bool check_rect_collision(sfFloatRect rect1, sfFloatRect rect2)
{
    if (rect1.left <= rect2.left + rect2.width &&
        rect2.left <= rect1.left + rect1.width &&
        rect1.top <= rect2.top + rect2.height &&
        rect2.top <= rect1.top + rect1.height)
        return true;
    return false;
}

sfFloatRect get_sprite_rect(sfSprite *sprite)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(sprite);
    rect.height -= 50;
    rect.width -= 50;
    rect.top += 25;
    rect.left += 25;
    return rect;
}

sfFloatRect intrect_to_floatrect(sfIntRect irect)
{
    sfFloatRect frect = {\
    (float) irect.height, (float) irect.left, \
    (float) irect.top, (float) irect.width};

    return frect;
}

sfIntRect floatrect_to_intrect(sfFloatRect frect)
{
    sfIntRect irect = {\
    (int) frect.height, (int) frect.left, (int) frect.top, (int) frect.width};

    return irect;
}
