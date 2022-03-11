/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_compt_two_char
*/

int my_str_two_len(char **str);
int my_compt_char(char *str, char c);

int my_compt_two_char(char **str, char c)
{
    int nbr = 0;

    for (int i = 0; i < my_str_two_len(str); i++)
        nbr += my_compt_char(str[i], c);

    return nbr;
}
