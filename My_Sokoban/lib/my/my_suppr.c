/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_suppr
*/

#include "my.h"

char *my_suppr(char *str, size_t save)
{
    if (!str || save > my_strlen(str))
        return (NULL);

    return &str[save];
}
