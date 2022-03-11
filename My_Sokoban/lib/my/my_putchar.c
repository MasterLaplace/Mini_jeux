/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
