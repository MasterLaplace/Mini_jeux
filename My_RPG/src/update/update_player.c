/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_player
*/

#include "game.h"

extern size_t MAX_VALUE[];

void move_rect_player(game_t *game)
{
    sfIntRect rect = sfSprite_getTextureRect(PLAYER.sprite);

    rect.left += (int) PLAYER.offset;
    rect.top = (int) PLY_STATE * (int) PLAYER.offset;
    sfSprite_setTextureRect(PLAYER.sprite, rect);
    if ((size_t) rect.left >= PLAYER.offset * (MAX_VALUE[PLY_STATE] - 1)) {
        rect.left = 0;
        if (PLY_STATE == JUMP_START)
            PLY_STATE = JUMP_LOOP;
        if (PLY_STATE == ATTACK)
            launch_arrow(game);
        if (PLY_STATE == ATTACK || PLY_STATE == THROWING ||
            PLY_STATE == KICKING)
            PLY_STATE = IDLE;
        sfSprite_setTextureRect(PLAYER.sprite, rect);
    }
}

static float calc_height(float offset, double angle)
{
    return (offset * (float) tan(angle));
}

sfVector2f check_slope(game_t *game, sfVector2f *pos, sfVector2f *slope)
{
    sfColor color = sfWhite;
    sfVector2f map_pos = sfSprite_getPosition(BACKROUNG);
    float height = calc_height(slope->x, 1);

    if (my_isneg((int)height))
        height *= -1;
    for (float i = pos->y; i > pos->y - height; i--) {
        if (pos->x + slope->x - map_pos.x > 0 &&
            pos->x + slope->x - map_pos.x < X_MAP && i > 0 && i < Y_MAP)
            color = sfImage_getPixel(game->hitboxes[CURRENT_MAP], pos->x +
                                                    slope->x - map_pos.x, i);
        if (!compare_color(color, sfBlack))
            return (sfVector2f) {slope->x, i - pos->y};
    }
    return (sfVector2f) {0, 0};
}

void update_player(game_t *game)
{
    if (CURRENT == GAME)
        update_player_gravity(game);
}
