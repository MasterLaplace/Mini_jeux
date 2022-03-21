/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** spawn_enemy
*/

#include "defender.h"

const int enemy_max[] = {64, 128, 256};
extern const map_t MAPS[];
extern const size_t NB_ENEMIES;
extern const preset_enemy_t ENEMY[];

static enemy_t *create_enemy(game_t *game, sfTexture **textures)
{
    enemy_t *enemy = malloc(sizeof(enemy_t));
    sfVector2f pos = MAPS[game->current_map].way[0];

    enemy->type = my_randint(0, 12);
    enemy->sprite = sfSprite_create();
    sfSprite_setTexture(enemy->sprite, textures[ENEMY_TEX + enemy->type],
                        sfTrue);
    sfSprite_setTextureRect(enemy->sprite, ENEMY[enemy->type].rect);
    sfSprite_setScale(enemy->sprite, ENEMY[enemy->type].scale);
    sfSprite_setOrigin(enemy->sprite, ENEMY[enemy->type].origin);
    sfSprite_setPosition(enemy->sprite, pos);
    enemy->speed = ENEMY[enemy->type].speed;
    enemy->health = ENEMY[enemy->type].health;
    enemy->offset = ENEMY[enemy->type].offset;
    enemy->max_value = ENEMY[enemy->type].max_value;
    enemy->damage = ENEMY[enemy->type].damage;
    enemy->checkpoint = 0;
    enemy->stat = 0;
    return enemy;
}

void wave_enemy(game_t *game)
{
    int spawn = my_randint(0, 80);
    game_stats_t *stats = game->stats;

    if (stats->current_nb_enemy <= 0
        && stats->nb_enemy_create == stats->nb_enemy) {
        stats->nb_enemy *= 2;
        stats->nb_enemy_create = 0;
    } else if (stats->nb_enemy_create != stats->nb_enemy && spawn >= 75) {
        stats->nb_enemy_create++;
        stats->current_nb_enemy++;
        enemy_t *enemy = create_enemy(game, game->textures);
        link_t *link = create_link(enemy);
        link->display = &draw_enemy;
        list_append(&(game->enemies), link);
    }
}
