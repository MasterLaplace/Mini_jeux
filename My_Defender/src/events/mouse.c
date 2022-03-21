/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** mouse
*/

#include "defender.h"

bool cursor_in_sprite(sfSprite *sprite, int x, int y)
{
    sfVector2f pos = sfSprite_getPosition(sprite);
    sfVector2f origin = sfSprite_getOrigin(sprite);
    sfVector2f scale = sfSprite_getScale(sprite);
    sfIntRect size = sfSprite_getTextureRect(sprite);
    float xs = pos.x - (origin.x * scale.x);
    float ys = pos.y - (origin.y * scale.y);
    float xmax = xs + (size.width * scale.x);
    float ymax = ys + (size.height * scale.y);

    return x >= xs && y >= ys && x <= xmax && y <= ymax;
}

static void check_type_mouse_event(game_t *game, sfEvent event,
                                    link_t *link, mouse_action_t *action)
{
    if (event.type == sfEvtMouseButtonPressed)
        if (event.mouseButton.button == sfMouseLeft)
            manage_mouse_pressed(event.mouseButton, link, action, game);
    if (event.type == sfEvtMouseButtonReleased) {
        if (event.mouseButton.button == sfMouseLeft)
            manage_mouse_released(game, event.mouseButton, link, action);
    }
    if (event.type == sfEvtMouseMoved)
        manage_mouse_moved(event.mouseMove, link, action, game);
}

void check_mouse_event(game_t *game, sfEvent event)
{
    wheel_t *wheel = game->game_scene->wheel;
    mouse_action_t act;
    int i_scene = game->current_scene;

    act.type = 0;
    check_type_mouse_event(game, event, game->scene[i_scene]->buttons, &act);
    if (game->current_scene == GAME) {
        act.type = 1;
        check_type_mouse_event(game, event, game->game_scene->towers, &act);
        if (wheel->state != NOT_DISPLAYED) {
            act.type = 0;
            check_type_mouse_event(game, event, wheel->buttons, &act);
        }
    }
}
