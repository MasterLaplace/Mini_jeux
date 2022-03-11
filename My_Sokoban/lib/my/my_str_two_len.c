/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_str_two_len
*/

int my_str_two_len(char **tab)
{
    int i = 0;

    while (tab && *tab) {
        tab++;
        i++;
    }
    return i;
}
