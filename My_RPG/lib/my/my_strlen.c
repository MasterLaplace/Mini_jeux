/*
** EPITECH PROJECT, 2021
** task03
** File description:
** my strlen
*/

#include "my.h"

size_t my_strlen(char const *str)
{
    size_t i;

    for (i = 0; *str++; i++);
    return i;
}
