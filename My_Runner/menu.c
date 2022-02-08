/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** menu
*/
#include <SFML/Graphics.h>
#include "include/runner.h"
#include "include/my.h"

static void set_pos_menu(game_obj_t **obj)
{
    obj[5]->rect = (sfIntRect){0, 0, 134, 200};
    obj[9]->pos = (sfVector2f){100.f, 60.f};
    sfSprite_setTextureRect(obj[5]->sprite, obj[5]->rect);
    sfSprite_setPosition(obj[0]->sprite, obj[0]->pos);
    sfSprite_setPosition(obj[1]->sprite, obj[1]->pos);
    sfSprite_setPosition(obj[2]->sprite, obj[2]->pos);
    sfSprite_setPosition(obj[3]->sprite, obj[3]->pos);
    sfSprite_setPosition(obj[4]->sprite, obj[4]->pos);
    sfSprite_setPosition(obj[5]->sprite, obj[5]->pos);
    sfSprite_setPosition(obj[6]->sprite, obj[6]->pos);
    sfSprite_setPosition(obj[9]->sprite, obj[9]->pos);
}

static void draw_menu(sfRenderWindow *window, game_obj_t **obj)
{
    set_pos_menu(obj);
    sfRenderWindow_drawSprite(window, obj[0]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[6]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[1]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[3]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[2]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[4]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[5]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[9]->sprite, NULL);
}

void menu(game_t *game, game_obj_t **obj, sfEvent event)
{
    while (sfRenderWindow_isOpen(game->window) && (game->state == 0)) {
        while (sfRenderWindow_pollEvent(game->window, &event))
            anal_evt(game, obj, event);
        sfRenderWindow_clear(game->window, sfBlack);
        draw_menu(game->window, obj);
        sfRenderWindow_display(game->window);
    }
    if (game->state > -1)
        game_loop(game, obj);
}
