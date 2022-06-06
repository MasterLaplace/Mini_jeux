/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** destroy_button
*/

#include "game.h"

void destroy_button(link_t *buttons)
{
    if (!buttons)
        return;
    while (buttons)
        list_remove(&(buttons), buttons);
}
