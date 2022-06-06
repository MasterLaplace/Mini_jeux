/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** gravity_player
*/

#include "game.h"

bool compare_color(sfColor color_a, sfColor color_b)
{
    if (color_a.r == color_b.r && color_a.g == color_b.g &&
        color_a.b == color_b.b)
        return true;
    return false;
}

static sfColor get_gravity_player_color(game_t *game, float gravity)
{
    sfColor color = sfWhite;
    sfVector2f pos = sfSprite_getPosition(PLAYER.sprite);
    sfVector2f map_pos = sfSprite_getPosition(BACKROUNG);

    if (pos.x - map_pos.x > 0 && pos.x - map_pos.x < X_MAP
        && pos.y + gravity > 0 && pos.y + gravity < Y_MAP)
        color = sfImage_getPixel(game->hitboxes[CURRENT_MAP],
                                pos.x - map_pos.x, pos.y + gravity);
    return color;
}

static void back_up_surface(game_t *game)
{
    sfColor color = get_gravity_player_color(game, 0);

    if (!compare_color(color, sfBlack) || PLY_STATE != FALLING)
        return;
    while (compare_color(color, sfBlack)) {
        sfSprite_move(PLAYER.sprite, (sfVector2f){0, -1});
        color = get_gravity_player_color(game, 0);
    }
    if (PLY_STATE != ATTACK && PLY_STATE != THROWING && PLY_STATE != KICKING)
        PLY_STATE = IDLE;
    PLY_STATS->gravity = 0.0f;
}

void player_gravity(game_t *game)
{
    if (PLY_STATS->gravity >= -100) {
        PLY_STATS->gravity += (PLY_STATS->gravity >= -100) ? -2 : 0;
        if (PLY_STATS->gravity < -4)
            PLY_STATE = FALLING;
    }
}

void update_player_gravity(game_t *game)
{
    sfColor color = get_gravity_player_color(game, 0);

    if (!compare_color(color, sfBlack))
        player_gravity(game);
    else {
        if (PLY_STATS->gravity != 0)
            PLY_STATS->gravity = 0;
        if (PLY_STATE != ATTACK && PLY_STATE != THROWING
                                && PLY_STATE != KICKING)
            PLY_STATE = IDLE;
        PLY_STATS->speed = 8.0f;
    }
    sfSprite_move(PLAYER.sprite, (sfVector2f) {0, -PLY_STATS->gravity});
    back_up_surface(game);
}
