/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_movement_linked_list
*/

#include "game.h"

void move_list_enemies(link_t *enemies, int direction, float speed)
{
    link_t *actual = enemies;
    enemy_t *enemy = NULL;

    if (!actual)
        return;
    do {
        enemy = (enemy_t *) actual->obj;
        sfSprite_move(enemy->sprite, (sfVector2f){speed * -direction, 0});
        actual = actual->next;
    } while (enemies && actual != enemies);
}

void move_list_objects(link_t *objects, int direction, float speed)
{
    link_t *actual = objects;
    object_t *obj = NULL;

    if (!actual)
        return;
    do {
        obj = (object_t *) actual->obj;
        sfSprite_move(obj->sprite, (sfVector2f){speed * -direction, 0});
        actual = actual->next;
    } while (objects && actual != objects);
}

void move_list_arrows(link_t *arrows, int direction, float speed)
{
    link_t *actual = arrows;
    arrow_t *arrow = NULL;

    if (!actual)
        return;
    do {
        arrow = (arrow_t *) actual->obj;
        sfSprite_move(arrow->sprite, (sfVector2f){speed * -direction, 0});
        actual = actual->next;
    } while (arrows && actual != arrows);
}
