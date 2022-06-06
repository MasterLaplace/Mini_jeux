/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** move_enemy
*/

#include "game.h"

static void check_move_enemy(game_t *game, enemy_t *enemy, sfVector2f pos)
{
    sfColor low = sfWhite;
    sfColor high = sfWhite;

    high = sfImage_getPixel(game->hitboxes[CURRENT_MAP],
    pos.x + enemy->speed * enemy->direct, pos.y - 1);
    low = sfImage_getPixel(game->hitboxes[CURRENT_MAP],
    pos.x + enemy->speed * enemy->direct, pos.y + 1);
    if (!compare_color(high, sfBlack) && !compare_color(low, sfBlack)) {
        pos.x += enemy->speed * enemy->direct;
        sfSprite_move(enemy->sprite, pos);
        EMY_STATE = EMY_WALKING;
    } else {
        if (enemy->direct > 0)
            enemy->direct = -1;
        else
            enemy->direct = 1;
        set_mirror(enemy->sprite, (enemy->direct == -1) ? true : false, false);
    }
}

void move_enemy(game_t *game, link_t *enemies)
{
    link_t *actual = enemies;
    enemy_t *enemy = NULL;

    if (!actual)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        sfVector2f pos = sfSprite_getPosition(enemy->sprite);
        if (pos.x > 0 && pos.x < X_MAP && pos.y > 0
            && pos.y < Y_MAP)
            check_move_enemy(game, enemy, pos);
        actual = actual->next;
    } while (enemies && actual != enemies);
}
