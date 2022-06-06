/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** draw_scene
*/

#include "game.h"

void draw_list(game_t *game, link_t *list)
{
    link_t *actual = list;

    if (!list)
        return;
    do {
        actual->display(actual->obj, WINDOW);
        actual = actual->next;
    } while (actual && actual != list);
}

static void draw_inventory(game_t *game)
{
    if (CURRENT == GAME && INVENTORY->statue == false) {
        sfRenderWindow_drawSprite(WINDOW, INVENTORY->background, NULL);
        draw_element(game);
        draw_list(game, INVENTORY->buttons);
    }
}

static void draw_stats(game_t *game)
{
    if (CURRENT == GAME && STATS_PANEL->statue == false) {
        sfRenderWindow_drawSprite(WINDOW, STATS_PANEL->background, NULL);
        move_rect_dynamic_interface(game, STATS_PANEL->dynamic_interface);
        draw_list(game, STATS_PANEL->dynamic_interface);
        draw_list(game, STATS_PANEL->buttons);
    }
}

static void draw_game(game_t *game, scene_t *scene)
{
    if (CURRENT == GAME) {
        sfRenderWindow_drawSprite(WINDOW, PARALLAX_1, NULL);
        sfRenderWindow_drawSprite(WINDOW, PARALLAX_2, NULL);
    }
    sfRenderWindow_drawSprite(WINDOW, scene->background, NULL);
    if (CURRENT == GAME) {
        sfRenderWindow_drawSprite(WINDOW, PLAYER.sprite, NULL);
        draw_entity(game);
    }
    if (CURRENT == GAME && BUBBLE->statue == true) {
        sfRenderWindow_drawSprite(WINDOW, BUBBLE->sprite, NULL);
        update_quest(game);
    }
}

void draw_scene(game_t *game)
{
    scene_t *scene = game->scene[CURRENT];

    draw_game(game, scene);
    draw_stats(game);
    draw_inventory(game);
    draw_list(game, scene->interface);
    draw_list(game, scene->buttons);
}
