/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** def_stat_pannel
*/

#include "game.h"

extern const size_t NB_STATS_BUTTONS;
extern const preset_button_t STATS_BUTTONS[];
extern const size_t NB_STATS_DYNAMIC;
extern const preset_dynamic_t STATS_DYNAMIC[];

static link_t *define_stats_buttons(game_t *game)
{
    link_t *link = NULL;
    link_t *buttons = NULL;
    button_t *button = NULL;

    for (size_t i = 0; i < NB_STATS_BUTTONS; i++) {
        button = create_button(STATS_BUTTONS[i], TEXTURES);
        link = create_link(button);
        if (button == NULL || link == NULL)
            continue;
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

static link_t *define_stats_dynamic(game_t *game)
{
    link_t *link = NULL;
    link_t *interface = NULL;
    dynamic_interface_t *element = NULL;

    for (size_t i = 0; i < NB_STATS_DYNAMIC; i++) {
        element = create_dynamic(STATS_DYNAMIC[i], TEXTURES);
        link = create_link(element);
        link->display = &draw_dynamic;
        list_append(&interface, link);
    }
    return interface;
}

interface_stats_t *define_stats_panel(game_t *game)
{
    interface_stats_t *pannel = malloc(sizeof(interface_stats_t));

    if (!pannel) {
        my_putstr("Echec du malloc du pannel stats\n");
        return NULL;
    }
    pannel->background = NULL;
    pannel->statue = true;
    def_stats_panel(pannel, TEXTURES[STATS_PNL]);
    pannel->buttons = define_stats_buttons(game);
    pannel->dynamic_interface = define_stats_dynamic(game);

    return pannel;
}
