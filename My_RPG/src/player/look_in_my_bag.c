/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** look in my bag
*/

#include "game.h"

extern const size_t NB_INVENTORY_ELEMENTS;
extern const preset_button_t INVENTORY_ELEMENTS;
extern const preset_quest_t QUESTS_BLACK[];
extern const preset_quest_t QUESTS_WHITE[];

void black_look_in_bag(game_t *game, pnj_t *pnj)
{
    int count = 0;

    if (pnj->type != MAGICIAN_2)
        return;
    for (size_t i = 0; i < NB_INVENTORY_ELEMENTS; i++) {
        if (INVENTORY->elements[i]->obj == NULL)
            continue;
        if (BLACK_QUEST.type == INVENTORY->elements[i]->obj->type)
            count++;
    }
    if (count == BLACK_QUEST.limit_quest) {
        pnj->actual_quest++;
    }
}

void white_look_in_bag(game_t *game, pnj_t *pnj)
{
    int count = 0;

    if (pnj->type != MAGICIAN_2)
        return;
    for (size_t i = 0; i < NB_INVENTORY_ELEMENTS; i++) {
        if (INVENTORY->elements[i]->obj == NULL)
            continue;
        if (WHITE_QUEST.type == INVENTORY->elements[i]->obj->type)
            count++;
    }
    if (count == WHITE_QUEST.limit_quest) {
        pnj->actual_quest++;
    }
}
