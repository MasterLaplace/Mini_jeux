/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** def_home_scene
*/

#include "game.h"

extern const size_t NB_HOME_BUTTONS;
extern const preset_button_t HOME_BUTTONS[];
extern const size_t NB_HOME_INTERFACE;
extern const preset_interface_t HOME_INTERFACE[];

static link_t *define_home_buttons(game_t *game)
{
    link_t *link = NULL;
    link_t *buttons = NULL;
    button_t *button = NULL;

    for (size_t i = 0; i < NB_HOME_BUTTONS; i++) {
        button = create_button(HOME_BUTTONS[i], TEXTURES);
        link = create_link(button);
        if (button == NULL || link == NULL)
            continue;
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

static link_t *define_home_interface(game_t *game)
{
    link_t *link = NULL;
    link_t *interface = NULL;
    user_interface_t *element = NULL;

    for (size_t i = 0; i < NB_HOME_INTERFACE; i++) {
        element = create_interface(HOME_INTERFACE[i], TEXTURES);
        link = create_link(element);
        link->display = &draw_interface;
        list_append(&interface, link);
    }
    return interface;
}

scene_t *define_home_scene(game_t *game)
{
    scene_t *scene = malloc(sizeof(scene_t));

    if (!scene)
        return NULL;
    scene->background = NULL;
    def_background(scene, TEXTURES[BACKGROUND]);
    scene->buttons = define_home_buttons(game);
    scene->interface = define_home_interface(game);

    return scene;
}
