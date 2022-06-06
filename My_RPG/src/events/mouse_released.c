/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** mouse_released
*/

#include "game.h"

static button_t *config_button(UNUSED mouse_action_t *action, link_t *actual)
{
    return (button_t *) actual->obj;
}

static void call_update(button_t *button, UNUSED link_t *actual, game_t *game)
{
    if (button->update == &update_ui_button)
        button->update(button);
    if (button->update == &update_sound_button ||
        button->update == &update_music_button)
        button->update(button, game);
}

static void call_callback(game_t *game, button_t *button,
                            UNUSED link_t *actual, mouse_action_t *action)
{
    if (action->type == 0)
        button->callback(game, NULL);
    if (action->type == 1)
        button->callback(game, &(action->index));
}

static void mouse_action(game_t *game, link_t *actual, mouse_action_t *action,
                        sfMouseButtonEvent mouse)
{
    bool in_hbox = false;
    button_t *button;

    button = config_button(action, actual);
    in_hbox = cursor_in_sprite(button->sprite, mouse.x, mouse.y);
    if (in_hbox && button->state == ACTIVE && button->callback != NULL) {
        call_callback(game, button, actual, action);
    }
    button->state = INACTIVE;
    call_update(button, actual, game);
}

void manage_mouse_released(game_t *game, sfMouseButtonEvent mouse,
                                    link_t *list, mouse_action_t *action)
{
    link_t *actual = list;
    int i = 0;

    if (!list)
        return;
    do {
        action->index = i;
        mouse_action(game, actual, action, mouse);
        actual = actual->next;
        i++;
    } while (actual && actual != list);
}
