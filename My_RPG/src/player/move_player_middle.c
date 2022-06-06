/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** move_player_middle
*/

#include "game.h"

void village_move(game_t *game, int direction, sfVector2f *player)
{
    float speed = PLY_STATS->speed;

    if (player->x <= X_WIN) {
        if (player->x + speed * direction > (X_PLAYER * (0.2 / 3)) &&
            player->x + speed * direction < X_WIN - (X_PLAYER * (0.2 / 3)))
            sfSprite_move(PLAYER.sprite, check_slope(game, player,
                                &(sfVector2f){speed * direction, 0}));
        else
            return;
        if (PLY_STATE == IDLE)
            PLY_STATE = EMY_WALKING;
        set_mirror(PLAYER.sprite, (direction == -1) ? true : false, false);
    }
}

void move_middle(game_t *game, sfVector2f *player, int direction, float speed)
{
    sfVector2f slope = check_slope(game, player,
                        &(sfVector2f){speed * direction, 0});
    if (slope.x != 0) {
        sfSprite_move(PLAYER.sprite, (sfVector2f) {0, slope.y});
        sfSprite_move(PARALLAX_1, (sfVector2f){((float)-slope.x * 0.1f), 0});
        sfSprite_move(PARALLAX_2, (sfVector2f){((float)-slope.x * 0.3f), 0});
        move_list_enemies(game->enemies, direction, speed);
        sfSprite_move(BACKROUNG, (sfVector2f){-slope.x, 0});
        move_list_objects(game->objects, direction, speed);
    }
}
