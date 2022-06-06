/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** move_arrow
*/

#include "game.h"

bool hurt_enemy(game_t *game, link_t *link_arrow, link_t *actual)
{
    arrow_t *arrow = (arrow_t *) link_arrow->obj;
    enemy_t *enemy = (enemy_t *) actual->obj;
    sfFloatRect rect1 = get_sprite_rect(arrow->sprite);
    sfFloatRect rect2 = get_sprite_rect(enemy->sprite);

    if (check_rect_collision(rect1, rect2)) {
        enemy->health -= PLY_STATS->damage;
        if (enemy->health <= 0) {
            PLY_STATS->experience += enemy->experience;
            PLY_STATS->health = (PLY_STATS->health + 5 > PLY_STATS->max_health)
            ? PLY_STATS->max_health : PLY_STATS->health + 5;
            list_remove(&(game->enemies), actual);
        } else
            EMY_STATE = EMY_HURT;
        list_remove(&(PLAYER.arrows), link_arrow);
        return true;
    }
    return false;
}

bool loop_enemy(game_t* game, link_t *link_arrow)
{
    link_t *actual = game->enemies;
    link_t *tmp = NULL;

    if (!actual)
        return false;
    do {
        tmp = actual->next;
        if (hurt_enemy(game, link_arrow, actual))
            return true;
        actual = tmp;
    } while (game->enemies && actual != game->enemies);
    return false;
}

void set_pos_arrow(game_t *game, link_t *link_arrow)
{
    arrow_t *arrow = (arrow_t *) link_arrow->obj;
    sfVector2f pos = sfSprite_getPosition(arrow->sprite);
    sfVector2f map_pos = sfSprite_getPosition(BACKROUNG);
    sfColor color = sfWhite;

    if (pos.x + arrow->speed - map_pos.x > 0 && pos.x + arrow->speed
        - map_pos.x < X_MAP && pos.y > 0 && pos.y < Y_MAP) {
        color = sfImage_getPixel(game->hitboxes[CURRENT_MAP],
                                pos.x + arrow->speed - map_pos.x, pos.y);
        if (loop_enemy(game, link_arrow))
            return;
        if (!compare_color(color, sfBlack)) {
            pos.x += arrow->speed;
            sfSprite_setPosition(arrow->sprite, pos);
            return;
        }
    }
    list_remove(&(PLAYER.arrows), link_arrow);
}

void move_arrow(game_t *game)
{
    link_t *actual = PLAYER.arrows;
    link_t *tmp = NULL;

    if (!actual)
        return;
    do {
        tmp = actual->next;
        set_pos_arrow(game, actual);
        actual = tmp;
    } while (PLAYER.arrows && actual != PLAYER.arrows);
}
