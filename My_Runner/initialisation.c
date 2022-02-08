/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** initialisation
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "include/runner.h"
#include "include/my.h"

void init_background(game_obj_t **obj)
{
    obj[0]->veloc = 2.f;
    obj[0]->pos.x = 0.f;
    obj[1]->veloc = 10.f;
    obj[1]->pos.x = 0.f;
    obj[2]->veloc = 25.f;
    obj[2]->pos.x = 0.f;
    obj[3]->veloc = 10.f;
    obj[3]->pos.x = 1200.f;
    obj[4]->veloc = 25.f;
    obj[4]->pos.x = 1200.f;
    obj[6]->veloc = 2.f;
    obj[6]->pos.x = 1200.f;
}

void init_pos_veloc(game_obj_t **obj)
{
    init_background(obj);
    obj[5]->pos = (sfVector2f){150.f, 350.f};
    obj[5]->rect = (sfIntRect){0, 0, 134, 200};
    obj[5]->init_pos = obj[5]->pos.y;
    obj[5]->stat = 0;
    obj[7]->pos = (sfVector2f){800.f, 370.f};
    obj[7]->rect = (sfIntRect){0, 0, 170, 45};
    obj[7]->veloc = 25.f;
    obj[8]->pos = (sfVector2f){800.f, 495.f};
    obj[8]->rect = (sfIntRect){0, 0, 62, 50};
    obj[8]->veloc = 25.f;
}

void init_game(game_t *game)
{
    sfRenderWindow_setFramerateLimit(game->window, 30);
    game->state = 0;
    game->px = 1;
    game->av_line = 0;
    game->esp = 0;
    game->time_limit = 0.15;
}

void init_sprite(game_obj_t **obj)
{
    obj[0] = create_obj("assets/plan0.png", bk);
    obj[1] = create_obj("assets/plan1.png", bk1);
    obj[2] = create_obj("assets/plan2.png", bk2);
    obj[3] = create_obj("assets/plan1.png", bk1);
    obj[4] = create_obj("assets/plan2.png", bk2);
    obj[5] = create_obj("assets/marvin.png", mr);
    obj[6] = create_obj("assets/plan0.png", bk);
    obj[7] = create_obj("assets/major.png", mj);
    obj[8] = create_obj("assets/minor.png", mn);
    obj[9] = create_obj("assets/button_start.png", bt);
}
