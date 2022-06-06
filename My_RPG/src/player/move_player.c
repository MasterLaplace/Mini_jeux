/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** move_player
*/

#include "game.h"

void set_mirror(sfSprite *sprite, bool x_mirrored, bool y_mirrored)
{
    sfVector2f scale = sfSprite_getScale(sprite);

    scale.x = x_mirrored ? -my_abs(scale.x) : my_abs(scale.x);
    scale.y = y_mirrored ? -my_abs(scale.y) : my_abs(scale.y);
    sfSprite_setScale(sprite, scale);
}

static void start_map(game_t *game, int direction, sfVector2f *map_pos,
                                                    sfVector2f *player)
{
    sfVector2f limit_player = {X_PLAYER * (0.2 / 3), player->y};
    sfVector2f middle_player_screen = (sfVector2f) {X_WIN / 2.0f, player->y};
    float speed = PLY_STATS->speed;

    if (map_pos->x == 0 && player->x <= X_WIN / 2.0) {
        if (player->x + speed * direction > X_WIN / 2.0)
            sfSprite_setPosition(PLAYER.sprite, middle_player_screen);
        else if (player->x + speed * direction < (X_PLAYER * (0.2 / 3)))
            sfSprite_setPosition(PLAYER.sprite, limit_player);
        else
            sfSprite_move(PLAYER.sprite,
            check_slope(game, player, &(sfVector2f){speed * direction, 0}));
        if (PLY_STATE == IDLE)
            PLY_STATE = EMY_WALKING;
        set_mirror(PLAYER.sprite, (direction == -1) ? true : false, false);
    }
}

static void middle_map(game_t *game, int direction, sfVector2f *map_pos,
                sfVector2f *player)
{
    float speed = PLY_STATS->speed;

    if (player->x == X_WIN / 2.0 && map_pos->x <= 0) {
        if (map_pos->x - speed * direction > 0)
            sfSprite_setPosition(BACKROUNG, (sfVector2f){0, 0});
        else
            move_middle(game, player, direction, speed);
        if (PLY_STATE == IDLE)
            PLY_STATE = EMY_WALKING;
        set_mirror(PLAYER.sprite, (direction == -1) ? true : false, false);
    }
}

static void end_map(game_t *game, int direction, sfVector2f *map_pos,
                    sfVector2f *player)
{
    float speed = PLY_STATS->speed;
    sfVector2f limit_player = {X_WIN - (X_PLAYER * (0.2 / 3)), player->y};
    sfVector2f middle_player_screen = (sfVector2f) {X_WIN / 2.0f, player->y};

    if (map_pos->x <= X_WIN - X_MAP && player->x >= X_WIN / 2.0) {
        if (player->x + speed * direction < X_WIN / 2.0)
            sfSprite_setPosition(PLAYER.sprite, middle_player_screen);
        else if (player->x + speed *
                                direction > X_WIN - (X_PLAYER * (0.2 / 3)))
            sfSprite_setPosition(PLAYER.sprite, limit_player);
        else
            sfSprite_move(PLAYER.sprite,
            check_slope(game, player, &(sfVector2f){speed * direction, 0}));
        set_mirror(PLAYER.sprite, (direction == -1) ? true : false, false);
    }
}

void move_lateral_player(game_t *game, int direction)
{
    sfSprite *map = BACKROUNG;
    sfVector2f map_pos = sfSprite_getPosition(map);
    sfVector2f player = sfSprite_getPosition(PLAYER.sprite);

    if (CURRENT_MAP != VILLAGE) {
        end_map(game, direction, &map_pos, &player);
        start_map(game, direction, &map_pos, &player);
        middle_map(game, direction, &map_pos, &player);
    } else {
        village_move(game, direction, &player);
    }
}
