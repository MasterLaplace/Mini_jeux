/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** destroy_inventory
*/

#include "game.h"

extern const size_t NB_INVENTORY_ELEMENTS;
extern const preset_button_t INVENTORY_ELEMENTS;

void clear_inventory(game_t *game)
{
    for (size_t i = 0; i < NB_INVENTORY_ELEMENTS; i++) {
        free(INVENTORY->elements[i]->obj);
        INVENTORY->elements[i]->obj = NULL;
        INVENTORY->elements[i]->state = INVENTORY_ELEMENTS.state;
        INVENTORY->elements[i]->callback = INVENTORY_ELEMENTS.callback;
        INVENTORY->elements[i]->update = INVENTORY_ELEMENTS.update;
    }
}

static void destroy_inventory(game_t *game)
{
    for (size_t i = 0; i < NB_INVENTORY_ELEMENTS; i++)
        free(INVENTORY->elements[i]);
    free(INVENTORY->elements);
}

void destroy_inventory_panel(game_t *game)
{
    destroy_button(INVENTORY->buttons);
    clear_inventory(game);
    destroy_inventory(game);
    sfSprite_destroy(INVENTORY->background);
    free(INVENTORY);
}
