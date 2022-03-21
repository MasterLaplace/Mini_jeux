/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** map
*/

#ifndef MAP_H_
    #define MAP_H_

typedef struct map_s {
    sfVector2f way[25];
    sfVector2f tower_pos[15];
} map_t;

#endif/* !MAP_H_ */
