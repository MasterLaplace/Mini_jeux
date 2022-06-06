/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** rain
*/

#include "game.h"

static const int drops = 50;
static const int order[] = {100, 700, 250, 375, 0, 800, 300, 50, 400};

static void add_vertex_rain(sfVertexArray *varray, int ms, int i)
{
    sfVertex vertex1, vertex2;
    sfVector2f a, b;

    a = (sfVector2f){i * (1920 / drops), (ms + order[i % 10]) % 1080};
    b = (sfVector2f){a.x, a.y + a.y * .15};
    vertex1 = (sfVertex){a, (sfColor) {100, 100, 220, 0}, (sfVector2f){0, 0}};
    vertex2 = (sfVertex){b, (sfColor){100, 100, 220, 255}, (sfVector2f){0, 0}};
    sfVertexArray_append(varray, vertex1);
    sfVertexArray_append(varray, vertex2);
}

void display_rain(sfRenderWindow *window, sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);
    int ms = sfTime_asMilliseconds(time);
    sfVertexArray *varray = sfVertexArray_create();

    if (!varray)
        return;
    for (int i = 0; i <= drops; i++)
        add_vertex_rain(varray, ms, i);
    sfVertexArray_setPrimitiveType(varray, sfLines);
    sfRenderWindow_drawVertexArray(window, varray, NULL);
    sfVertexArray_destroy(varray);
}
