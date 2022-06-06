/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** display_snow
*/

#include "game.h"

static const int snowflakes = 100;
static const int display_order[] = {67, 486, 597, 105, 651, 346, 362, 33,
469, 98, 526, 1017, 544, 955, 775, 464, 1075, 866, 549, 607, 7, 422, 359, 411};
static const int fall_order[] = {5, 4, 1, 4, 2, 3, 1, 1, 1, 4, 2, 5, 5, 2, 3,
4, 3, 4, 2, 3, 3, 5, 4, 4};

static void add_vertex_snow(sfVertexArray *varray, int ms, int i)
{
    sfVertex vertex;
    sfVector2f a;

    a = (sfVector2f){i * (1920 / snowflakes), \
    (ms / fall_order[i % 25] + display_order[i % 25]) % 1080};
    vertex = (sfVertex){a, (sfColor){255, 255, 255, 255}, (sfVector2f){0, 0}};
    sfVertexArray_append(varray, vertex);
}

void display_snow(sfRenderWindow *window, sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    int ms = sfTime_asMilliseconds(time);
    sfVertexArray *varray = sfVertexArray_create();

    if (!varray)
        return;
    for (int i = 0; i <= snowflakes; i++)
        add_vertex_snow(varray, ms, i);
    sfVertexArray_setPrimitiveType(varray, sfPoints);
    sfRenderWindow_drawVertexArray(window, varray, NULL);
    sfVertexArray_destroy(varray);
}
