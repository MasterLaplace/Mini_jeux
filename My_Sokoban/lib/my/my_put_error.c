/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** put a string in error output
*/

#include "my.h"

void my_put_error(char const *str)
{
    write(2, str, my_strlen(str));
}
