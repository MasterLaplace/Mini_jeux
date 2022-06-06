/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_music_button
*/

#include "game.h"

void update_music_button(button_t *button, game_t *game)
{
    sfIntRect rect = sfSprite_getTextureRect(button->sprite);
    float volume = sfMusic_getVolume(game->musics[0]);

    rect.left = rect.width * button->state;
    if (volume == 0)
        rect.top = 144;
    else
        rect.top = 0;
    sfSprite_setTextureRect(button->sprite, rect);
}
