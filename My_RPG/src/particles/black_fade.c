/*
** EPITECH PROJECT, 2022
** My RPG
** File description:
** fade
*/

#include "game.h"

static void draw_fade(sfRenderWindow *window, int t)
{
    sfVertexArray *varr = sfVertexArray_create();
    float opacity = (cos((float) t / 1000 + 3.1415926) / 2 + 0.5) * 255;

    sfVertexArray_append(varr, (sfVertex){(sfVector2f){0, 0}, (sfColor)\
    {0, 0, 0, opacity}, (sfVector2f){0, 0}});
    sfVertexArray_append(varr, (sfVertex){(sfVector2f){1920, 0}, (sfColor)\
    {0, 0, 0, opacity}, (sfVector2f){0, 0}});
    sfVertexArray_append(varr, (sfVertex){(sfVector2f){1920, 1080}, (sfColor)\
    {0, 0, 0, opacity}, (sfVector2f){0, 0}});
    sfVertexArray_append(varr, (sfVertex){(sfVector2f){0, 1080}, (sfColor)\
    {0, 0, 0, opacity}, (sfVector2f){0, 0}});
    sfVertexArray_setPrimitiveType(varr, sfQuads);
    sfRenderWindow_drawVertexArray(window, varr, NULL);
    sfVertexArray_destroy(varr);
}

void display_fade(game_t *game, bool reset)
{
    static int time_start = 0;
    sfTime current_time = sfClock_getElapsedTime(game->clock);
    int time = sfTime_asMilliseconds(current_time);

    if (reset) {
        time_start = time;
        game->game_scene->fade = false;
    }
    if (time - time_start < 6000)
        draw_fade(game->display->window, time - time_start);
}
