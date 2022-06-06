/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** arrow
*/

#include "game.h"

static void set_direction(game_t * game, arrow_t *arrow)
{
    sfVector2f scale = sfSprite_getScale(PLAYER.sprite);

    sfSprite_setScale(arrow->sprite, (sfVector2f){0.20, 0.20});
    if (scale.x > 0)
        arrow->direct = 1;
    else
        arrow->direct = -1;
    set_mirror(arrow->sprite, (arrow->direct == -1) ? true : false, false);
    arrow->speed = 15 * arrow->direct;
}

static arrow_t *create_arrow(game_t *game)
{
    arrow_t *arrow = malloc(sizeof(arrow_t));
    sfVector2f pos = sfSprite_getPosition(PLAYER.sprite);

    if (!(arrow->sprite = sfSprite_create())) {
        my_putstr("Echec de la creation de la sprite arrow\n");
        return NULL;
    }
    sfSprite_setTexture(arrow->sprite, TEXTURES[ARROW], sfTrue);
    set_direction(game, arrow);
    arrow->damage = 8;
    arrow->update = NULL;
    arrow->pos = (sfVector2f) {pos.x, pos.y - 42};
    sfSprite_setPosition(arrow->sprite, arrow->pos);
    return arrow;
}

void launch_arrow(game_t *game)
{
    arrow_t *arrow = create_arrow(game);
    link_t *link = create_link(arrow);

    PLY_STATE = IDLE;
    link->display = &draw_arrow;
    list_append(&(PLAYER.arrows), link);
}
