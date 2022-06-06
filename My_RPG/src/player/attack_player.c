/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** attack_player
*/

#include "game.h"

static void player_attack_enemy(player_t *player, enemy_t *enemy)
{
    sfFloatRect rect1 = get_sprite_rect(player->sprite);
    sfFloatRect rect2 = get_sprite_rect(enemy->sprite);

    if (check_rect_collision(rect1, rect2)) {
        enemy->health -= player->stats->damage;
        if (enemy->health <= 0) {
            EMY_STATE = EMY_DYING;
        } else
            EMY_STATE = EMY_HURT;
    }
}

static void check_attack(game_t *game, enemy_t *enemy)
{
    sfVector2f pos = sfSprite_getPosition(enemy->sprite);

    if (pos.x > 0 && pos.x < X_MAP && pos.y > 0 && pos.y < Y_MAP)
        if (PLY_STATE != ATTACK)
            player_attack_enemy(&(PLAYER), enemy);
}

void attack_player(game_t *game, size_t type_attack)
{
    sfIntRect rect = sfSprite_getTextureRect(PLAYER.sprite);
    link_t *actual = game->enemies;
    enemy_t *enemy = NULL;

    if (PLY_STATE == ATTACK || PLY_STATE == KICKING ||
        PLY_STATE == THROWING)
        return;
    PLY_STATE = type_attack;
    rect.left = 0;
    sfSprite_setTextureRect(PLAYER.sprite, rect);
    if (!actual)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        check_attack(game, enemy);
        actual = actual->next;
    } while (game->enemies && actual != game->enemies);
}
