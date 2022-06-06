/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** destroy_stats
*/

#include "game.h"

static void destroy_dynamics(link_t *dynamics)
{
    if (!dynamics)
        return;
    while (dynamics) {
        free((dynamic_interface_t *) dynamics->obj);
        list_remove(&(dynamics), dynamics);
    }
}

void destroy_stats_panel(game_t *game)
{
    destroy_button(STATS_PANEL->buttons);
    destroy_dynamics(STATS_PANEL->dynamic_interface);
    sfSprite_destroy(STATS_PANEL->background);
    free(STATS_PANEL);
}
