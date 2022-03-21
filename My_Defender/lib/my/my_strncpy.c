/*
** EPITECH PROJECT, 2021
** task02
** File description:
** my strncpy
*/

int my_strlen(char const *a);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i < n && src[i]; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}
