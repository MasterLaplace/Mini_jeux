/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** update_tower
*/

#include "defender.h"

extern const preset_tower_t TOWERS[];

static void set_new_rect(tower_t *tower)
{
    sfIntRect rect = sfSprite_getTextureRect(tower->button->sprite);
    preset_tower_t preset = TOWERS[tower->type];

    rect.left += preset.offset;
    sfSprite_setTextureRect(tower->button->sprite, rect);
    if ((size_t) rect.left >= preset.offset * (preset.nb_sprites - 1)) {
        rect.left = 0;
        sfSprite_setTextureRect(tower->button->sprite, rect);
        tower->firing_status = REST;
    }
}

void move_rect_tower(link_t *towers)
{
    link_t *actual = towers;
    tower_t *tower = NULL;

    if (actual == NULL)
        return;
    do {
        tower = (tower_t *) actual->obj;
        if (tower->state != DESTROYED && tower->firing_status == FIRING)
            set_new_rect(tower);
        actual = actual->next;
    } while (towers && actual != towers);
}
