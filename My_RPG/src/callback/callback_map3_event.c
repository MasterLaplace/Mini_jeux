/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_map2_event
*/

#include "game.h"

extern const char *MAP_PATHS[];

void callback_map3_event(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    destroy_links(game);
    if (create_linked_list(game, MAP_PATHS[MAP3]))
        return;
    CURRENT_MAP = 2;
    game->game_scene->fade = true;
    sfSprite_setTexture(BACKROUNG, TEXTURES[MAP_3], sfTrue);
    sfSprite_setPosition(BACKROUNG, (sfVector2f) {0, 0});
    sfSprite_setPosition(PLAYER.sprite, (sfVector2f) {300, 200});
    set_parallax(game, PARALLAX_1, PARALLAX_5_B);
    set_parallax(game, PARALLAX_2, PARALLAX_6_B);
    sfSound_play(game->sounds[click]->sound);
}
