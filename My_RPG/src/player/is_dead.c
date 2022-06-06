/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** is_dead
*/

#include "game.h"

extern const char *MAP_PATHS[];
extern const preset_player_t PLAYER_DATA;
extern const size_t MAX_LEVEL;
extern const size_t EXP_LEVEL[];

void reload_player(game_t *game)
{
    PLY_STATS->speed = PLAYER_DATA.speed;
    PLY_STATS->gravity = PLAYER_DATA.gravity;
    PLY_STATS->max_health = PLAYER_DATA.max_health;
    PLY_STATS->health = PLAYER_DATA.max_health;
    PLY_STATS->range = PLAYER_DATA.range;
    PLY_STATS->damage = PLAYER_DATA.damage;
    PLY_STATS->defense = PLAYER_DATA.defense;
    PLY_STATS->experience = PLAYER_DATA.experience;
    PLY_STATS->level = PLAYER_DATA.level;
    PLY_STATS->next_level = EXP_LEVEL[PLY_STATS->level];
}

bool is_dead(game_t *game)
{
    sfVector2f player = sfSprite_getPosition(PLAYER.sprite);

    if (player.y > Y_MAP + 200 || PLAYER.stats->health <= 0) {
        destroy_links(game);
        create_linked_list(game, MAP_PATHS[VILLAGE]);
        reload_player(game);
        sfSprite_setPosition(PLAYER.sprite, (sfVector2f){300, 200});
        sfSprite_setTexture(BACKROUNG, TEXTURES[VILLAGE_MAP], sfTrue);
        sfSprite_setPosition(BACKROUNG, (sfVector2f){0, 0});
        clear_inventory(game);
        CURRENT_MAP = 3;
        INVENTORY->statue = true;
        STATS_PANEL->statue = true;
        change_scene(game, HOME);
    }
    return true;
}
