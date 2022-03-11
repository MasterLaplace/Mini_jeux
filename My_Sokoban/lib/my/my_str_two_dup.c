/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_str_two_dup
*/

#include <stdlib.h>

int my_str_two_len(char **tab);
char *my_strdup(char *str);

char **my_str_two_dup(char **str)
{
    int nbr = my_str_two_len(str);
    char **tmp = malloc(sizeof(char *) * (nbr + 1));
    tmp[nbr] = NULL;

    for (int i = 0; str && *str; i++) {
        tmp[i] = my_strdup(*str);
        str++;
    }
    return tmp;
}
