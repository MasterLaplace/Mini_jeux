/*
** EPITECH PROJECT, 2021
** task01
** File description:
** my strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}
