/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** take_the_door
*/

#include "game.h"

void check_dimension(game_t *game, sfColor *color)
{
    if (sfKeyboard_isKeyPressed(sfKeyR)) {
        if (compare_color((*color), sfRed))
            callback_village_event(game, NULL);
        if (compare_color((*color), sfGreen))
            callback_map1_event(game, NULL);
        if (compare_color((*color), sfBlue))
            callback_map2_event(game, NULL);
        if (compare_color((*color), sfYellow))
            callback_map3_event(game, NULL);
    }
}

void take_the_door(game_t *game)
{
    sfVector2f pos = sfSprite_getPosition(PLAYER.sprite);
    sfVector2f map_pos = sfSprite_getPosition(BACKROUNG);
    sfColor color = sfWhite;

    if (pos.x - map_pos.x > 0 && pos.x - map_pos.x < X_MAP
        && pos.y - 5 > 0 && pos.y - 5 < Y_MAP) {
        color = sfImage_getPixel(game->hitboxes[CURRENT_MAP],
                                pos.x - map_pos.x, pos.y - 5);
        check_dimension(game, &color);
    }
}
