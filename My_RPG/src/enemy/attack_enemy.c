/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** attack_enemy
*/

#include "game.h"

static void check_attack_enemy(player_t *player, enemy_t *enemy)
{
    sfFloatRect rect1 = get_sprite_rect(enemy->sprite);
    sfFloatRect rect2 = get_sprite_rect(player->sprite);

    if (check_rect_collision(rect1, rect2))
        EMY_STATE = my_randint(EMY_ATTACK, EMY_KICKING);
}

void attack_enemy(game_t *game, link_t *enemies)
{
    link_t *actual = enemies;
    enemy_t *enemy = NULL;

    if (!actual)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        sfVector2f pos = sfSprite_getPosition(enemy->sprite);
        if (pos.x > 0 && pos.x < X_MAP && pos.y > 0
            && pos.y < Y_MAP && EMY_STATE == EMY_WALKING)
            check_attack_enemy(&(PLAYER), enemy);
        actual = actual->next;
    } while (enemies && actual != enemies);
}
