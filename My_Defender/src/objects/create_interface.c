/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** create_interface
*/

#include "defender.h"

user_interface_t *create_interface(preset_interface_t preset,
    sfTexture **textures)
{
    user_interface_t *interface = malloc(sizeof(user_interface_t));

    interface->sprite = sfSprite_create();
    sfSprite_setTexture(interface->sprite, textures[preset.texture], sfTrue);
    sfSprite_setPosition(interface->sprite, preset.pos);
    return interface;
}
