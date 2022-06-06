/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** def_inventory_panel
*/

#include "game.h"

extern const size_t NB_INVENTORY_BUTTONS;
extern const preset_button_t INVENTORY_BUTTONS[];
extern const size_t NB_INVENTORY_ELEMENTS;

static link_t *define_inventory_buttons(game_t *game)
{
    link_t *link = NULL;
    link_t *buttons = NULL;
    button_t *button = NULL;

    for (size_t i = 0; i < NB_INVENTORY_BUTTONS; i++) {
        button = create_button(INVENTORY_BUTTONS[i], TEXTURES);
        link = create_link(button);
        if (button == NULL || link == NULL)
            continue;
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

static element_t **define_inventory_elements(void)
{
    element_t **elements = malloc(sizeof(element_t *) * NB_INVENTORY_ELEMENTS);

    if (!elements)
        return NULL;
    for (size_t i = 0; i < NB_INVENTORY_ELEMENTS; i++) {
        elements[i] = create_element();
        if (!elements[i])
            return NULL;
    }
    return elements;
}

inventory_t *define_inventory_pannel(game_t *game)
{
    inventory_t *pannel = malloc(sizeof(inventory_t));

    if (!pannel)
        return NULL;
    pannel->background = NULL;
    pannel->statue = true;
    def_inventory_pannel(pannel, TEXTURES[INVENTORY_PNL]);
    if (!(pannel->buttons = define_inventory_buttons(game)))
        return NULL;
    if (!(pannel->elements = define_inventory_elements()))
        return NULL;

    return pannel;
}
