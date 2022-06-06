/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** put a char
*/

#include "my.h"

void my_putchar(int c)
{
    write(1, &c, 1);
}
