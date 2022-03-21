/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** towers
*/

#include "defender.h"

#ifndef TOWERS_H_
    #define TOWERS_H_

typedef struct tower_s {
    button_t *button;
    type_tower type;
    state_tower state;
    firing_status firing_status;
    int damage;
    int range;
} tower_t;

#endif/* !TOWERS_H_ */
