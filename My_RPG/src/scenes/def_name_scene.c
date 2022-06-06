/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** def_name_scene
*/

#include "game.h"

extern const size_t NB_NAME_BUTTONS;
extern const preset_button_t NAME_BUTTONS[];
extern const size_t NB_NAME_INTERFACE;
extern const preset_interface_t NAME_INTERFACE[];

static link_t *define_name_buttons(game_t *game)
{
    link_t *link = NULL;
    link_t *buttons = NULL;
    button_t *button = NULL;

    for (size_t i = 0; i < NB_NAME_BUTTONS; i++) {
        button = create_button(NAME_BUTTONS[i], TEXTURES);
        link = create_link(button);
        if (button == NULL || link == NULL)
            continue;
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

static link_t *define_name_interface(game_t *game)
{
    link_t *link = NULL;
    link_t *interface = NULL;
    user_interface_t *element = NULL;

    for (size_t i = 0; i < NB_NAME_INTERFACE; i++) {
        element = create_interface(NAME_INTERFACE[i], TEXTURES);
        link = create_link(element);
        link->display = &draw_interface;
        list_append(&interface, link);
    }
    return interface;
}

scene_t *define_name_scene(game_t *game)
{
    scene_t *scene = malloc(sizeof(scene_t));

    if (!scene) {
        my_putstr("Echec du malloc de la scene name\n");
        return NULL;
    }
    scene->background = NULL;
    def_background(scene, TEXTURES[BACKGROUND]);
    scene->buttons = define_name_buttons(game);
    scene->interface = define_name_interface(game);

    return scene;
}
