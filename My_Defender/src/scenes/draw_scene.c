/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** draw_scene
*/

#include "defender.h"

static void draw_list(game_t *game, link_t *list)
{
    link_t *actual = list;
    sfRenderWindow *window = game->display->window;

    if (list == NULL)
        return;
    do {
        actual->display(actual->obj, window);
        actual = actual->next;
    } while (actual && actual != list);
}

void draw_scene(game_t *game)
{
    scene_t *scene = game->scene[game->current_scene];
    wheel_t *wheel = game->game_scene->wheel;
    sfRenderWindow *window = game->display->window;

    sfRenderWindow_drawSprite(window, scene->background, NULL);
    if (game->current_scene == GAME) {
        draw_list(game, game->enemies);
        draw_list(game, game->game_scene->towers);
        if (game->game_scene->wheel->state != NOT_DISPLAYED) {
            sfRenderWindow_drawSprite(window, wheel->sprite, NULL);
            draw_list(game, game->game_scene->wheel->buttons);
        }
    }
    draw_list(game, scene->interface);
    draw_list(game, scene->buttons);
}
