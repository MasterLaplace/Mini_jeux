/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** update_ui_button
*/

#include "defender.h"

void update_ui_button(button_t *button)
{
    sfIntRect rect = sfSprite_getTextureRect(button->sprite);

    rect.left = rect.width * button->state;
    sfSprite_setTextureRect(button->sprite, rect);
}
