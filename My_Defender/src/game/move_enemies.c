/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** move_enemies
*/

#include "defender.h"

extern const map_t MAPS[];

static void enemy_passed(game_t *game, link_t *link_enemy)
{
    enemy_t *enemy = (enemy_t *) link_enemy->obj;

    if (((int) game->stats->health_castle - enemy->damage) <= 0)
        game->stats->health_castle = 0;
    else
        game->stats->health_castle -= enemy->damage;
    game->stats->current_nb_enemy--;
    list_remove(&(game->enemies), link_enemy);
}

static int calcul_position(sfVector2f *pos, sfVector2f *step,
                            sfVector2f *objectif, sfVector2f *direct)
{
    int obj_achieved = 0;

    if ((pos->x + step->x >= objectif->x && direct->x == 1) ||
        (pos->x + step->x < objectif->x * direct->x && direct->x == -1)) {
        step->x = (objectif->x - pos->x) * direct->x;
        obj_achieved++;
    }
    if ((pos->y + step->y >= objectif->y && direct->y == 1) ||
        (pos->y + step->y < objectif->y && direct->y == -1)) {
        step->y = (objectif->y - pos->y) * direct->y;
        obj_achieved++;
    }
    if (obj_achieved == 2)
        return 1;
    else
        return 0;
}

static void mirror_enemies(size_t checkpoint, enemy_t* enemy,
                            sfVector2f *direct)
{
    if (checkpoint == enemy->checkpoint) {
        if (direct->x == 1)
            sfSprite_setScale(enemy->sprite, (sfVector2f) {0.35, 0.35});
        else
            sfSprite_setScale(enemy->sprite, (sfVector2f) {-0.35, 0.35});
    }
}

static void set_new_position(game_t *game, enemy_t *enemy, sfVector2f pos)
{
    int map = game->current_map;
    size_t i = enemy->checkpoint;
    sfVector2f objectif = (sfVector2f) {MAPS[map].way[i + 1].x,
                                MAPS[map].way[i + 1].y};
    sfVector2f direct;
    sfVector2f step;

    direct.x = (objectif.x - pos.x >= 0) ? 1 : -1;
    direct.y = (objectif.y - pos.y >= 0) ? 1 : -1;
    step.x = enemy->speed * direct.x;
    step.y = enemy->speed * direct.y;
    enemy->checkpoint += calcul_position(&pos, &step, &objectif, &direct);
    pos.x += step.x;
    pos.y += step.y;
    mirror_enemies(i, enemy, &direct);
    sfSprite_setPosition(enemy->sprite, pos);
}

void move_enemies(game_t *game)
{
    link_t *actual = game->enemies;
    enemy_t *enemy = NULL;
    link_t *temp = NULL;

    if (actual == NULL)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        sfVector2f pos = sfSprite_getPosition(enemy->sprite);
        set_new_position(game, enemy, pos);
        temp = actual->next;
        if (MAPS[game->current_map].way[enemy->checkpoint + 1].y == -1)
            enemy_passed(game, actual);
        actual = temp;
    } while (game->enemies && actual != game->enemies);
}
