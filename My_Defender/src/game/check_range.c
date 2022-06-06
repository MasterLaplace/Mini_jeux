/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** check_range
*/

#include "defender.h"
#include <math.h>

static float calcul_distance(enemy_t *enemy, tower_t *tower)
{
    sfVector2f build = sfSprite_getPosition(tower->button->sprite);
    sfVector2f obj = sfSprite_getPosition(enemy->sprite);
    float distance_x = obj.x - build.x;
    float distance_y = obj.y - build.y;

    return hypot(distance_x, distance_y);
}

static void shooting(game_t *game, link_t *link_enemy, tower_t *tower)
{
    enemy_t *enemy = (enemy_t *) link_enemy->obj;

    tower->firing_status = FIRING;
    enemy->health -= tower->damage;
    if (enemy->health <= 0) {
        game->stats->current_nb_enemy -= 1;
        game->stats->money += 15;
        list_remove(&(game->enemies), link_enemy);
    }
}

static void targeting(game_t *game, tower_t *tower)
{
    link_t *actual = game->enemies;
    enemy_t *enemy = NULL;
    link_t *min_enemy = NULL;
    float min_range = tower->range;
    float distance = 0;

    if (actual == NULL)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        distance = calcul_distance(enemy, tower);
        if (distance < min_range) {
            min_range = distance;
            min_enemy = actual;
        }
        actual = actual->next;
    } while (game->enemies && actual != game->enemies);
    if (min_enemy)
        shooting(game, min_enemy, tower);
}

void check_range(game_t *game, link_t *towers)
{
    link_t *actual = towers;
    tower_t *tower = NULL;

    if (actual == NULL)
        return;
    do {
        tower = (tower_t *) actual->obj;
        if (tower->state != DESTROYED && tower->firing_status == REST) {
            targeting(game, tower);
        }
        actual = actual->next;
//        printf("%p\n", actual);
    } while (actual && actual != towers);
}
