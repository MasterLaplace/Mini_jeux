/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_bubble
*/

#include "game.h"

static const char load_error[] =
        "Error: Failed to load textures Please reset the game folder.\n";

bool check_fd(int fd)
{
    if (fd == -1) {
        my_perror(load_error);
        return false;
    }
    return true;
}

bubble_t *create_bubble(game_t *game)
{
    bubble_t *bubble = malloc(sizeof(bubble_t));

    if (!bubble) {
        my_putstr("Echec du malloc de la bulle\n");
        return NULL;
    }
    bubble->sprite = sfSprite_create();
    if (!bubble->sprite) {
        my_putstr("Echec de la creation du sprite bubble\n");
        return NULL;
    }
    sfSprite_setTexture(bubble->sprite, TEXTURES[BUBBLES], sfTrue);
    sfSprite_setScale(bubble->sprite, (sfVector2f){-1, 1});
    bubble->name = NULL;
    bubble->description = NULL;
    bubble->statue = false;
    return bubble;
}
