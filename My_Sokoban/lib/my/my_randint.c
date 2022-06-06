/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_randint
*/

#include "my.h"

int my_randint(int min, int max)
{
    return min + (rand() % (max - min));
}
