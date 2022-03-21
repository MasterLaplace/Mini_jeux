/*
** EPITECH PROJECT, 2021
** task03
** File description:
** my strlen
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; *str++; i++);
    return i;
}
