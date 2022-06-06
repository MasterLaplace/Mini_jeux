/*
** EPITECH PROJECT, 2021
** video day 03
** File description:
** my putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
