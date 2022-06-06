/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** def_param_scene
*/

#include "game.h"

extern const size_t NB_PARAM_BUTTONS;
extern const preset_button_t PARAM_BUTTONS[];
extern const size_t NB_PARAM_INTERFACE;
extern const preset_interface_t PARAM_INTERFACE[];

static link_t *define_game_buttons(game_t *game)
{
    link_t *link = NULL;
    link_t *buttons = NULL;
    button_t *button = NULL;

    for (size_t i = 0; i < NB_PARAM_BUTTONS; i++) {
        button = create_button(PARAM_BUTTONS[i], TEXTURES);
        link = create_link(button);
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

static link_t *define_game_interface(game_t *game)
{
    link_t *link = NULL;
    link_t *interface = NULL;
    user_interface_t *element = NULL;

    for (size_t i = 0; i < NB_PARAM_INTERFACE; i++) {
        element = create_interface(PARAM_INTERFACE[i], TEXTURES);
        link = create_link(element);
        link->display = &draw_interface;
        list_append(&interface, link);
    }
    return interface;
}

scene_t *define_param_scene(game_t *game)
{
    scene_t *scene = malloc(sizeof(scene_t));

    if (!scene) {
        my_putstr("Echec du malloc de la scene param\n");
        return NULL;
    }
    scene->background = NULL;
    def_background(scene, TEXTURES[BACKGROUND]);
    scene->buttons = define_game_buttons(game);
    scene->interface = define_game_interface(game);
    return scene;
}
