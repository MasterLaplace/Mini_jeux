/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_interface
*/

#include "game.h"

user_interface_t *create_interface(preset_interface_t preset,
    sfTexture **textures)
{
    user_interface_t *interface = malloc(sizeof(user_interface_t));

    if (!interface) {
        my_putstr("Echec du malloc de l'interface\n");
        return NULL;
    }
    interface->sprite = sfSprite_create();
    if (!interface->sprite) {
        my_putstr("Echec de la creation du sprite interface\n");
        return NULL;
    }
    sfSprite_setTexture(interface->sprite, textures[preset.texture], sfTrue);
    sfSprite_setPosition(interface->sprite, preset.pos);
    return interface;
}
