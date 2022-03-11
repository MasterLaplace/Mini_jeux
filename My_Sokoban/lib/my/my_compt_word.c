/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_compt_word
*/

int my_strlen(char *str);

int my_compt_word(char *str, char c)
{
    int nbr = 0;

    for (int i = 0; i < my_strlen(str) + 1; i++) {
        if ((str[i - 1] != c) && (str[i] == c || str[i] == '\0'))
            nbr++;
    }
    return nbr;
}
