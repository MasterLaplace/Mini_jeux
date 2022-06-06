/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_enemy
*/

#include "game.h"

extern const size_t EMY_MAX_VALUE[];

static bool set_enemy_rect(player_t *player, enemy_t *enemy)
{
    sfIntRect rect = sfSprite_getTextureRect(enemy->sprite);

    rect.left += (int) enemy->offset;
    rect.top = (int) EMY_STATE * (int) enemy->offset;
    sfSprite_setTextureRect(enemy->sprite, rect);
    if ((size_t) rect.left >= enemy->offset * (EMY_MAX_VALUE[EMY_STATE] - 1)) {
        rect.left = 0;
        if (EMY_STATE == EMY_ATTACK) {
            player->stats->health -= enemy->damage;
            player->state = HURT;
        } else if (EMY_STATE == EMY_DYING) {
            player->stats->experience += enemy->experience;
            return true;
        }
        EMY_STATE = EMY_WALKING;
        sfSprite_setTextureRect(enemy->sprite, rect);
    }
    return false;
}

void move_rect_enemy(game_t *game)
{
    link_t *actual = game->enemies;
    enemy_t *enemy = NULL;
    link_t *tmp = NULL;

    if (!actual)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        tmp = actual->next;
        if (set_enemy_rect(&(PLAYER), enemy))
            list_remove(&(game->enemies), actual);
        actual = tmp;
    } while (game->enemies && actual != game->enemies);
}
