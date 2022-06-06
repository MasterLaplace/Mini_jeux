/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_pnj
*/

#include "game.h"

static void set_new_rect(pnj_t *pnj)
{
    sfIntRect rect = sfSprite_getTextureRect(pnj->sprite);
    size_t end = pnj->offset * (pnj->max_value - 1);

    rect.left += (int) pnj->offset;
    sfSprite_setTextureRect(pnj->sprite, rect);
    if ((size_t) rect.left >= end) {
        rect.left = 0;
        sfSprite_setTextureRect(pnj->sprite, rect);
    }
}

void move_rect_pnj(game_t *game)
{
    link_t *actual = game->pnjs;
    pnj_t *pnj = NULL;

    if (!actual)
        return;
    do {
        pnj = (pnj_t *) actual->obj;
        set_new_rect(pnj);
        actual = actual->next;
    } while (game->pnjs && actual != game->pnjs);
}
