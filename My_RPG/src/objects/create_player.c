/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_player
*/

#include "game.h"

extern const preset_player_t PLAYER_DATA;
extern const size_t MAX_LEVEL;
extern const size_t EXP_LEVEL[];

void set_origin(sfSprite *sprite, float x, float y)
{
    sfFloatRect bounds = sfSprite_getLocalBounds(sprite);
    sfVector2f origin = {0, 0};

    origin.x = bounds.width * x;
    origin.y = bounds.height * y;
    sfSprite_setOrigin(sprite, origin);
}

static void init_player_stats(game_t *game)
{
    PLY_STATS = malloc(sizeof(player_stats_t));

    if (PLY_STATS == NULL)
        return;
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
    PLY_STATS->name = malloc(sizeof(char) * 1);
    PLY_STATS->name[0] = '\0';
}

bool create_player(game_t *game)
{
    if (!(PLAYER.sprite = sfSprite_create())) {
        my_putstr("Echec de la creation du sprite player\n");
        return false;
    }
    PLAYER.update = PLAYER_DATA.update;
    PLAYER.offset = PLAYER_DATA.offset;
    PLY_STATE = IDLE;
    PLAYER.arrows = NULL;
    init_player_stats(game);
    sfSprite_setTexture(PLAYER.sprite, TEXTURES[PLAYER_TXT], sfTrue);
    sfSprite_setTextureRect(PLAYER.sprite, PLAYER_DATA.rect);
    sfSprite_setScale(PLAYER.sprite, PLAYER_DATA.scale);
    sfSprite_setPosition(PLAYER.sprite, PLAYER_DATA.pos);
    set_origin(PLAYER.sprite, 0.5f, 0.83f);
    return true;
}
