/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_dynamic
*/

#include "game.h"

dynamic_interface_t *create_dynamic(preset_dynamic_t preset,
    sfTexture **textures)
{
    dynamic_interface_t *interface = malloc(sizeof(dynamic_interface_t));

    if (!interface) {
        my_putstr("Echec du malloc de l'interface dynamique\n");
        return NULL;
    }
    interface->sprite = sfSprite_create();
    if (!interface->sprite) {
        my_putstr("Echec de la creation du sprite interface\n");
        return NULL;
    }
    interface->type = preset.type;
    sfSprite_setTexture(interface->sprite, textures[preset.texture], sfTrue);
    sfSprite_setTextureRect(interface->sprite, preset.rect);
    sfSprite_setPosition(interface->sprite, preset.pos);
    return interface;
}
