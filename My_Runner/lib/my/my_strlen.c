/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int i = 0;

    while (*str++)
        i++;
    return i;
}
