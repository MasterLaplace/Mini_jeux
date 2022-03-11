/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_append_two_char
*/

#include <unistd.h>
#include <stdlib.h>

int my_str_two_len(char **tab);
char **my_str_two_dup(char **tab);
char *my_strdup(char *str);

char **my_append_two_char(char **tab, char *str)
{
    int nbr = my_str_two_len(tab);
    char **dest = malloc(sizeof(char *) * (nbr + 1));

    dest = my_str_two_dup(tab);
    dest[nbr] = my_strdup(str);
    dest[nbr + 1] = NULL;
    return dest;
}
