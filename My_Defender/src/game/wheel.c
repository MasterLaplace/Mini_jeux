/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** create_wheel
*/

#include "defender.h"

static const sfVector2f CORNERS[] = {{-1.1, -0.92}, {1.12, -0.92},
                                {-1.1, 0.86}, {1.09, 0.86}};

static const void *CALLBACK[] = {&callback_archer_button,
                                &callback_stone_button,
                                &callback_magic_button,
                                &callback_crossbow_button};

void move_wheel(wheel_t *wheel, sfVector2f *tow_pos)
{
    sfVector2f new_pos = {0, 0};
    link_t *actual = wheel->buttons;
    int i = 0;

    tow_pos->y -= 50;
    sfSprite_setPosition(wheel->sprite, *tow_pos);
    if (actual == NULL)
        return;
    do {
        new_pos.x = tow_pos->x + MARGING_WHEEL * CORNERS[i].x;
        new_pos.y = tow_pos->y + MARGING_WHEEL * CORNERS[i].y;
        sfSprite_setPosition(((button_t *) actual->obj)->sprite, new_pos);
        i++;
        actual = actual->next;
    } while (actual && actual != wheel->buttons);
}

static void set_preset(preset_button_t *preset)
{
    preset->pos = (sfVector2f) {10, 10};
    preset->scale = (sfVector2f) {0.4, 0.4};
    preset->rect = (sfIntRect) {0, 0, X_SYM, Y_SYM};
    preset->origin = (sfVector2f) {X_SYM / 2, Y_SYM / 2};
    preset->state = INACTIVE;
    preset->update = &update_ui_button;
}

static link_t *init_wheel_buttons(sfTexture **textures)
{
    link_t *link = NULL;
    button_t *button = NULL;
    link_t *buttons = NULL;
    preset_button_t preset;

    set_preset(&preset);
    for (size_t i = 0; i < 4; i++) {
        preset.texture = ARCHER_SYM + i;
        preset.callback = CALLBACK[i];
        button = create_button(preset, textures);
        link = create_link(button);
        link->display = &draw_button;
        list_append(&buttons, link);
    }
    return buttons;
}

wheel_t *create_wheel(game_t *game)
{
    wheel_t *wheel = malloc(sizeof(wheel_t));

    if (wheel == NULL || (wheel->sprite = sfSprite_create()) == NULL)
        return NULL;
    sfSprite_setPosition(wheel->sprite, (sfVector2f) {0, 0});
    sfSprite_setOrigin(wheel->sprite, (sfVector2f) {X_WHEEL / 2, Y_WHEEL / 2});
    sfSprite_setTexture(wheel->sprite, game->textures[WHEEL], sfTrue);
    sfSprite_setScale(wheel->sprite, (sfVector2f) {0.35, 0.35});
    wheel->state = NOT_DISPLAYED;
    wheel->buttons = init_wheel_buttons(game->textures);
    wheel->costs[0] = 100;
    wheel->costs[1] = 200;
    wheel->costs[2] = 150;
    wheel->costs[3] = 200;
    return wheel;
}
