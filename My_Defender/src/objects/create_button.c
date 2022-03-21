/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** create_button
*/

#include "defender.h"

static void tower_button_sets(button_t *button, preset_button_tower_t preset,
                        sfTexture **textures)
{
    sfSprite_setPosition(button->sprite, button->pos);
    sfSprite_setScale(button->sprite, preset.scale);
    sfSprite_setOrigin(button->sprite, preset.origin);
    sfSprite_setTexture(button->sprite, textures[preset.texture], sfTrue);
    sfSprite_setTextureRect(button->sprite, button->rect);
}

static void button_sets(button_t *button, preset_button_t preset,
                        sfTexture **textures)
{
    sfSprite_setPosition(button->sprite, button->pos);
    sfSprite_setScale(button->sprite, preset.scale);
    sfSprite_setOrigin(button->sprite, preset.origin);
    sfSprite_setTexture(button->sprite, textures[preset.texture], sfTrue);
    sfSprite_setTextureRect(button->sprite, button->rect);
}

button_t *create_tower_button(preset_button_tower_t preset, sfTexture **text)
{
    button_t *button = malloc(sizeof(button_t));

    if (button == NULL)
        return NULL;
    button->sprite = sfSprite_create();
    if (button->sprite == NULL)
        return NULL;
    button->pos = preset.pos;
    button->rect = preset.rect;
    button->state = preset.state;
    button->state_2 = 0;
    button->callback = preset.callback;
    button->update = preset.update;
    tower_button_sets(button, preset, text);
    return button;
}

button_t *create_button(preset_button_t preset, sfTexture **textures)
{
    button_t *button = malloc(sizeof(button_t));

    if (button == NULL)
        return NULL;
    button->sprite = sfSprite_create();
    if (button->sprite == NULL)
        return NULL;
    button->pos = preset.pos;
    button->rect = preset.rect;
    button->state = preset.state;
    button->state_2 = 0;
    button->callback = preset.callback;
    button->update = preset.update;
    button_sets(button, preset, textures);
    return button;
}
