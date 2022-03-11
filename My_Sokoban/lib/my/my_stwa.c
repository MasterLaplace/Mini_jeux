/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_stwa
*/

#include <unistd.h>
#include <stdlib.h>

char *suppr(char *buf, int save);
int my_compt_word(char *str, char c);
char *my_strndup(char *str, int len);

char **my_str_word_array(char *str, char c)
{
    int nbr = my_compt_word(str, c);
    char **tab = malloc(sizeof(char *) * (nbr + 1));
    tab[nbr] = NULL;
    int nb = 0;

    for (int i = 0; nb < nbr; i++) {
        if ((str[i - 1] != c) && (str[i] == c || str[i] == '\0')) {
            tab[nb] = my_strndup(str, i);
            nb++;
            i++;
            str = suppr(str, i);
            i = 0;
        }
    }
    return tab;
}
