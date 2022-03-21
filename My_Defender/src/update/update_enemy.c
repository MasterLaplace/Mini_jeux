/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** update_enemy
*/

#include "defender.h"

static void set_new_rect(enemy_t *enemy)
{
    sfIntRect rect = sfSprite_getTextureRect(enemy->sprite);

    rect.left += enemy->offset;
    sfSprite_setTextureRect(enemy->sprite, rect);
    if ((size_t) rect.left >= enemy->offset * (enemy->max_value - 1)) {
        rect.left = 0;
        sfSprite_setTextureRect(enemy->sprite, rect);
    }
}

void move_rect_enemy(game_t *game)
{
    link_t *actual = game->enemies;
    enemy_t *enemy = NULL;

    if (actual == NULL)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        set_new_rect(enemy);
        actual = actual->next;
    } while (game->enemies && actual != game->enemies);
}
