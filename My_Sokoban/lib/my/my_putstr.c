/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_putstr
*/

#include <unistd.h>

int my_strlen(char *str);

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
