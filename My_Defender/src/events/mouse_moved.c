/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** mouse_moved
*/

#include "defender.h"

static button_t *config_button(mouse_action_t *action, link_t *actual)
{
    if (action->type == 1)
        return ((tower_t *) actual->obj)->button;
    return (button_t *) actual->obj;
}

static void call_update(button_t *button, link_t *actual, game_t *game)
{
    if (button->update == &update_tower_button)
        button->update(actual->obj);
    if (button->update == &update_ui_button)
        button->update(button);
    if (button->update == &update_sound_button ||
        button->update == &update_music_button)
        button->update(button, game);
}

void manage_mouse_moved(sfMouseMoveEvent mouse, link_t *list,
                        mouse_action_t *action, game_t *game)
{
    link_t *actual = list;
    button_t *button = NULL;
    bool in_hbox = false;

    if (list == NULL)
        return;
    do {
        button = config_button(action, actual);
        in_hbox = cursor_in_sprite(button->sprite, mouse.x, mouse.y);
        if (in_hbox && button->state == INACTIVE)
            button->state = HOVERED;
        if (!in_hbox && button->state == HOVERED)
            button->state = INACTIVE;
        call_update(button, actual, game);
        actual = actual->next;
    } while (actual && actual != list);
}
