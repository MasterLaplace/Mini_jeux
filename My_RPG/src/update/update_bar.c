/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** update_bar
*/

#include "game.h"

extern const preset_dynamic_t STATS_DYNAMIC[];

static void move_rect_life_bar(game_t *game, sfSprite *sprite)
{
    sfIntRect rect = sfSprite_getTextureRect(sprite);
    size_t percent = (PLY_STATS->health * 100) / PLY_STATS->max_health;

    rect.width = (percent * STATS_DYNAMIC[LIFE_BAR].rect.width / 100);
    if (rect.width <= 0)
        rect.width = 1;
    sfSprite_setTextureRect(sprite, rect);
}

static void move_rect_exp_bar(game_t *game, sfSprite *sprite)
{
    sfIntRect rect = sfSprite_getTextureRect(sprite);
    size_t percent = (PLY_STATS->experience * 100) / PLY_STATS->next_level;

    rect.width = (percent * STATS_DYNAMIC[EXP_BAR].rect.width / 100);
    if (rect.width <= 0)
        rect.width = 1;
    sfSprite_setTextureRect(sprite, rect);
}

void move_rect_dynamic_interface(game_t *game, link_t *dynamic_interface)
{
    link_t *actual = dynamic_interface;
    dynamic_interface_t *object = NULL;

    if (!actual)
        return;
    do {
        object = (dynamic_interface_t *) actual->obj;
        if (object->type == LIFE_BAR)
            move_rect_life_bar(game, object->sprite);
        if (object->type == EXP_BAR)
            move_rect_exp_bar(game, object->sprite);
        actual = actual->next;
    } while (dynamic_interface && actual != dynamic_interface);
}
