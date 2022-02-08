/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** collision
*/
#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include "include/runner.h"
#include "include/my.h"

static void die_effect(game_t *game, game_obj_t **obj)
{
    game->state = 1;
    init_pos_veloc(obj);
    init_game(game);
    play_sound("music/Mario_Bros_Die.ogg");
    my_putstr("You Lose!\n");
}

static void coll_obj8_y(game_t *game, game_obj_t **obj)
{
    if (obj[5]->stat == 0 || obj[5]->stat == 4)
        die_effect(game, obj);
}

static void cond_roulade_y(game_t *game, game_obj_t **obj)
{
    if (obj[5]->pos.y + 100 <= obj[7]->pos.y + 45)
        die_effect(game, obj);
}

static void cond_roulade(game_t *game, game_obj_t **obj)
{
    if (obj[5]->pos.x + 134 >= obj[7]->pos.x) {
        if (obj[5]->pos.x <= obj[7]->pos.x + 170)
            cond_roulade_y(game, obj);
    }
}

void collision(game_t *game, game_obj_t **obj)
{
    if (obj[5]->pos.x + 134 >= obj[8]->pos.x) {
        if ((obj[5]->pos.x <= obj[8]->pos.x + 62)) {
            coll_obj8_y(game, obj);
        }
    }

    if (obj[5]->stat == 4)
        cond_roulade(game, obj);
    else if ((obj[5]->pos.x + 134 >= obj[7]->pos.x) &&
        (obj[5]->pos.x <= obj[7]->pos.x + 170)) {
        die_effect(game, obj);
    }
}
