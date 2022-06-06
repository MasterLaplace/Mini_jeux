/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** callback_village_event
*/

#include "game.h"

extern const char *MAP_PATHS[];

void callback_village_event(game_t *game, UNUSED void *params)
{
    if (!game)
        return;
    destroy_links(game);
    if (create_linked_list(game, MAP_PATHS[VILLAGE]))
        return;
    PLY_STATS->health = PLY_STATS->max_health;
    game->game_scene->fade = true;
    sfSprite_setPosition(PLAYER.sprite, (sfVector2f){300, 200});
    sfSprite_setTexture(BACKROUNG, TEXTURES[VILLAGE_MAP], sfTrue);
    sfSprite_setPosition(BACKROUNG, (sfVector2f){0, 0});
    CURRENT_MAP = 3;
    sfSound_play(game->sounds[click]->sound);
}
