/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** def_save_scene
*/

#include "game.h"

extern const size_t NB_SAVE_BUTTONS;
extern const preset_button_t SAVE_BUTTONS[];
extern const size_t NB_SAVE_INTERFACE;
extern const preset_interface_t SAVE_INTERFACE[];

static link_t *define_save_buttons(game_t *game)
{
    link_t *link = NULL;
    link_t *buttons = NULL;
    button_t *button = NULL;

    for (size_t i = 0; i < NB_SAVE_BUTTONS; i++) {
        button = create_button(SAVE_BUTTONS[i], TEXTURES);
        link = create_link(button);
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

static link_t *define_save_interface(game_t *game)
{
    link_t *link = NULL;
    link_t *interface = NULL;
    user_interface_t *element = NULL;

    for (size_t i = 0; i < NB_SAVE_INTERFACE; i++) {
        element = create_interface(SAVE_INTERFACE[i], TEXTURES);
        link = create_link(element);
        link->display = &draw_interface;
        list_append(&interface, link);
    }
    return interface;
}

scene_t *define_save_scene(game_t *game)
{
    scene_t *scene = malloc(sizeof(scene_t));

    if (!scene) {
        my_putstr("Echec du malloc de la scene SAVE\n");
        return NULL;
    }
    scene->background = NULL;
    def_background(scene, TEXTURES[BACKGROUND]);
    scene->buttons = define_save_buttons(game);
    scene->interface = define_save_interface(game);
    return scene;
}
