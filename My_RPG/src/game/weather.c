/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** weather
*/

#include "game.h"

void display_weather(game_t *game)
{
    if (game->weather == RAIN)
        display_rain(WINDOW, game->clock);
    if (game->weather == SNOW)
        display_snow(WINDOW, game->clock);
}
