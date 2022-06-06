/*
** EPITECH PROJECT, 2021
** task02
** File description:
** my putstr
*/

#include "my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
