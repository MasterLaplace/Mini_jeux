/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_stwa
*/

#include "my.h"

char **my_str_word_array(char *str, char c)
{
    size_t nbr = my_count_word(str, c);
    char **tab = malloc(sizeof(char *) * (nbr + 1));
    size_t nb = 0;

    if (!str || !tab)
        return (NULL);

    for (size_t i = 0; nb < nbr; i++) {
        if (str[i] == c || !str[i]) {
            tab[nb] = my_strndup(str, i);
            nb++;
            i++;
            str = my_suppr(str, i);
            i = 0;
        }
    }
    tab[nb] = NULL;
    return tab;
}
