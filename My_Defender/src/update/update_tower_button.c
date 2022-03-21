/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** update_tower_button
*/

#include "defender.h"

void update_tower_button(tower_t *tower)
{
    button_t *button = tower->button;

    if (button->state == INACTIVE) {
        if (tower->state == DESTROYED)
            sfSprite_setColor(button->sprite, (sfColor) {255, 255, 255, 0});
        else
            sfSprite_setColor(button->sprite, (sfColor) {255, 255, 255, 255});
    }
    if (button->state == HOVERED && tower->state == DESTROYED)
        sfSprite_setColor(button->sprite, (sfColor) {255, 255, 255, 150});
    if (button->state == ACTIVE) {
        if (tower->state != DESTROYED)
            sfSprite_setColor(button->sprite, (sfColor) {175, 0, 0, 255});
        else
            sfSprite_setColor(button->sprite, (sfColor) {255, 255, 255, 255});
    }
}
