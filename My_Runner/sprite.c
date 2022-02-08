/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** sprite
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "include/runner.h"
#include "include/my.h"

static void cond_move(game_t *game, game_obj_t **obj)
{
    cond_move_background(game, obj);
    if (obj[3]->pos.x <= -1200.00)
        obj[3]->pos.x = 1200.00;
    if (obj[4]->pos.x <= -1200.00) {
        obj[4]->pos.x = 1200.00;
        game->av_line += 1;
    }
    if (obj[6]->pos.x <= -1200.00) {
        obj[6]->pos.x = 1200.00;
    }
    cond_move_ennemy(game, obj);
}

static void jump(game_obj_t **obj)
{
    if (obj[5]->pos.y > 200 && obj[5]->stat == 2) {
        obj[5]->pos.y -= 9;
        if (obj[5]->pos.y < 199)
            obj[5]->stat = 1;
    } else if (obj[5]->pos.y < obj[5]->init_pos && obj[5]->stat == 1) {
        obj[5]->pos.y += 9;
        if (obj[5]->pos.y >= 350)
            obj[5]->stat = 0;
    }
}

void move_sprite(game_t *game, game_obj_t **obj)
{
    cond_move(game, obj);
    if (game->esp > 0)
        collision(game, obj);
    jump(obj);
    obj[0]->pos.x -= obj[0]->veloc;
    obj[1]->pos.x -= obj[1]->veloc;
    obj[2]->pos.x -= obj[2]->veloc;
    obj[3]->pos.x -= obj[3]->veloc;
    obj[4]->pos.x -= obj[4]->veloc;
    obj[6]->pos.x -= obj[6]->veloc;
    game->px += 1;
}

static void set_position(game_obj_t **obj)
{
    sfSprite_setPosition(obj[0]->sprite, obj[0]->pos);
    sfSprite_setPosition(obj[1]->sprite, obj[1]->pos);
    sfSprite_setPosition(obj[2]->sprite, obj[2]->pos);
    sfSprite_setPosition(obj[3]->sprite, obj[3]->pos);
    sfSprite_setPosition(obj[4]->sprite, obj[4]->pos);
    sfSprite_setPosition(obj[5]->sprite, obj[5]->pos);
    sfSprite_setPosition(obj[6]->sprite, obj[6]->pos);
    sfSprite_setPosition(obj[7]->sprite, obj[7]->pos);
    sfSprite_setPosition(obj[8]->sprite, obj[8]->pos);
}

void draw_sprite(sfRenderWindow *window, game_obj_t **obj)
{
    set_position(obj);
    set_rect(obj);
    sfRenderWindow_drawSprite(window, obj[0]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[6]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[1]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[3]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[2]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[4]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[7]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[8]->sprite, NULL);
    sfRenderWindow_drawSprite(window, obj[5]->sprite, NULL);
}
