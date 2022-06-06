/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** count the lenght of a string
*/

#include "my.h"

size_t my_strlen(char const *str)
{
    size_t i = 0;

    if (!str)
        return (0);

    for (; *str++; i++);
    return i;
}
