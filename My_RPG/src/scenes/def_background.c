/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** def_background
*/

#include "game.h"

void set_parallax(const game_t *game, sfSprite *sprite, texture texture)
{
    sfSprite_setTexture(sprite, TEXTURES[texture], sfFalse);
    sfTexture_setRepeated(TEXTURES[texture], sfTrue);
    sfSprite_setScale(sprite, (sfVector2f){1.75f, 1.75f});
    sfSprite_setPosition(sprite, (sfVector2f){-0, 0});
    sfSprite_setTextureRect(sprite, (sfIntRect){0, 0, X_MAP, 750});
}

void create_parallax(game_scene_t *scene, game_t *game, texture texture)
{
    scene->parallax_1 = sfSprite_create();
    scene->parallax_2 = sfSprite_create();
    if (!scene->parallax_1 || !scene->parallax_2)
        return;
    set_parallax(game, scene->parallax_1, texture);
    set_parallax(game, scene->parallax_2, texture + 1);
}

void def_background(scene_t *scene, sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    if (!sprite) {
        scene->background = NULL;
        return;
    }
    sfSprite_setPosition(sprite, (sfVector2f) {0, 0});
    sfSprite_setTexture(sprite, texture, sfTrue);
    scene->background = sprite;
}

void def_stats_panel(interface_stats_t *scene, sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    if (!sprite) {
        my_putstr("Echec de la creation du sprite pannel stats\n");
        scene->background = NULL;
        return;
    }
    sfSprite_setPosition(sprite, (sfVector2f) {0, 0});
    sfSprite_setTexture(sprite, texture, sfTrue);
    scene->background = sprite;
}

void def_inventory_pannel(inventory_t *scene, sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    if (!sprite) {
        my_putstr("Echec de la creation du sprite pannel inventaire\n");
        scene->background = NULL;
        return;
    }
    sfSprite_setPosition(sprite, (sfVector2f) {0, 0});
    sfSprite_setTexture(sprite, texture, sfTrue);
    scene->background = sprite;
}
