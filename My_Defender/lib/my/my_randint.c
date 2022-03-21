/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** my_randint
*/

#include <stdlib.h>

int my_randint(int min, int max)
{
    return min + (rand() % (max - min));
}
