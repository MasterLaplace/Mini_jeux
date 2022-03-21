/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** enemies
*/

#ifndef ENEMIES_H_
    #define ENEMIES_H_
    #include "defender.h"

typedef struct enemy_s {
    char texture;
    int type;
    sfSprite *sprite;
    float speed;
    float health;
    size_t offset;
    size_t max_value;
    float damage;
    size_t stat;
    size_t checkpoint;
} enemy_t;

#endif/* !ENEMIES_H_ */
