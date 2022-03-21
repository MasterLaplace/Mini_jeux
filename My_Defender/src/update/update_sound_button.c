/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** update_sound_button
*/

#include "defender.h"

void update_sound_button(button_t *button, game_t *game)
{
    sfIntRect rect = sfSprite_getTextureRect(button->sprite);
    float volume = sfSound_getVolume(game->sounds[0]->sound);

    rect.left = rect.width * button->state;
    if (volume == 0)
        rect.top = 175;
    else
        rect.top = 0;
    sfSprite_setTextureRect(button->sprite, rect);
}
