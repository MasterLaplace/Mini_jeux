/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my_strcat
*/

#include <stdlib.h>

int my_strlen(char const *str);
void *my_memset(void *s, int c, size_t n);

char *my_strcat(char *dest, char *src)
{
    char *tmp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    size_t i = 0;
    size_t e = 0;

    if (!dest || !tmp)
        return (NULL);
    tmp = my_memset(tmp, '\0', (my_strlen(dest) + my_strlen(src) + 1));
    for (; src[i]; i++)
        tmp[i] = src[i];
    for (; dest[e]; i++, e++)
        tmp[i] = dest[e];
    tmp[i] = '\0';
    return tmp;
}
