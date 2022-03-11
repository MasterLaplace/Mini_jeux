/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int i = 0;

    while (*str++)
        i = i + 1;
    return i;
}
