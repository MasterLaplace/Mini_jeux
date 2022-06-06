/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_element
*/

#include "game.h"

extern const preset_button_t INVENTORY_ELEMENTS;

element_t *create_element(void)
{
    element_t *element = malloc(sizeof(element_t));

    if (!element) {
        my_putstr("Echec du malloc de l'element\n");
        return NULL;
    }
    element->obj = NULL;
    element->state = INVENTORY_ELEMENTS.state;
    element->callback = INVENTORY_ELEMENTS.callback;
    element->update = INVENTORY_ELEMENTS.update;
    return element;
}
