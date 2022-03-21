/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** def_map_scene
*/

#include "defender.h"

extern const size_t NB_MAP_BUTTONS;
extern const preset_button_t MAP_BUTTONS[];
extern const size_t NB_MAP_INTERFACE;
extern const preset_interface_t MAP_INTERFACE[];

static link_t *define_map_buttons(game_t *game)
{
    link_t *link = NULL;
    link_t *buttons = NULL;
    button_t *button = NULL;

    for (size_t i = 0; i < NB_MAP_BUTTONS; i++) {
        button = create_button(MAP_BUTTONS[i], game->textures);
        link = create_link(button);
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

static link_t *define_map_interface(game_t *game)
{
    link_t *link = NULL;
    link_t *interface = NULL;
    user_interface_t *element = NULL;

    for (size_t i = 0; i < NB_MAP_INTERFACE; i++) {
        element = create_interface(MAP_INTERFACE[i], game->textures);
        link = create_link(element);
        link->display = &draw_interface;
        list_append(&interface, link);
    }
    return interface;
}

scene_t *define_map_scene(game_t *game)
{
    scene_t *scene = malloc(sizeof(scene_t));

    scene->background = NULL;
    def_background(scene, game->textures[BACKGROUND]);
    scene->buttons = define_map_buttons(game);
    scene->interface = define_map_interface(game);
    return scene;
}
