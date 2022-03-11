/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_compt_char
*/

int my_strlen(char *str);

int my_compt_char(char *str, char c)
{
    int nbr = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == c)
            nbr++;
    }

    return nbr;
}
