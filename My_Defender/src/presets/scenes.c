/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** constants
*/

#include "defender.h"

const size_t NB_SCENES = 8;
const list_init_scene_t SCENES[] = {{&define_home_scene},
                                    {&define_map_scene},
                                    {&define_game_scene},
                                    {&define_lose_scene},
                                    {&define_win_scene},
                                    {&define_param_scene},
                                    {&define_pause_scene},
                                    {&define_no_map_scene}};
