/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** sprite_part2
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "include/runner.h"
#include "include/my.h"

#define rectI (sfIntRect)
#define left obj[5]->rect.left

static void move_rect_ennemy(game_obj_t **obj)
{
    obj[7]->offset = 42;
    obj[7]->rect = rectI{0, obj[7]->rect.top + obj[7]->offset, 170, 42};
    obj[7]->max_value = 181 - 42;
    if (obj[7]->rect.top >= obj[7]->max_value)
        obj[7]->rect.top = 0;
}

void move_rect(game_t *game, game_obj_t **obj)
{
    move_rect_ennemy(obj);
    if (obj[5]->stat == 0) {
        obj[5]->offset = 134;
        obj[5]->rect = rectI{left + obj[5]->offset, 0, 134, 200};
        obj[5]->max_value = 536 - 134;
        if (left >= obj[5]->max_value)
            left = 0;
    }
    if (obj[5]->stat == 4) {
        game->time_limit = 0.10;
        obj[5]->offset = 138;
        obj[5]->rect = rectI{left + obj[5]->offset, 196, 138, 196};
        obj[5]->max_value = 965 - 138;
        if (left >= obj[5]->max_value) {
            obj[5]->rect = rectI{0, 0, 134, 200};
            game->time_limit = 0.15;
            obj[5]->stat = 0;
        }
    }
}

void set_rect(game_obj_t **obj)
{
    sfSprite_setTextureRect(obj[5]->sprite, obj[5]->rect);
    sfSprite_setTextureRect(obj[7]->sprite, obj[7]->rect);
    sfSprite_setTextureRect(obj[8]->sprite, obj[8]->rect);
}

void cond_move_background(game_t *game, game_obj_t **obj)
{
    if (obj[0]->pos.x <= -1200.00)
        obj[0]->pos.x = 1200.00;
    if (obj[1]->pos.x <= -1200.00)
        obj[1]->pos.x = 1200.00;
    if (obj[2]->pos.x <= -1200.00) {
        obj[2]->pos.x = 1200.00;
        game->av_line += 1;
    }
}

void cond_move_ennemy(game_t *game, game_obj_t **obj)
{
    if (obj[7]->pos.x <= -1200.00) {
        obj[7]->pos.x = 1200.00;
        game->esp = 0;
    }
    else if (game->esp == 1) {
        obj[7]->pos.x -= obj[7]->veloc;
    }
    if (obj[8]->pos.x <= -1200.00) {
        obj[8]->pos.x = 1200.00;
        game->esp = 0;
    }
    else if (game->esp == 2) {
        obj[8]->pos.x -= obj[8]->veloc;
    }
}
