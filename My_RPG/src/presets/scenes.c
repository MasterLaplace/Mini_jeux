/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** constants
*/

#include "game.h"

const size_t NB_SCENES = 7;
const list_init_scene_t SCENES[] =
{
    {&define_home_scene},
    {&define_game_scene},
    {&define_param_scene},
    {&define_pause_scene},
    {&define_credit_scene},
    {&define_save_scene},
    {&define_name_scene}
};
