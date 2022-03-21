/*
** EPITECH PROJECT, 2021
** lib my
** File description:
** my_realloc
*/

#include <stdlib.h>

char *my_realloc(char *ptr, int size)
{
    int index;
    char *realloc;

    if (ptr == NULL || size < 1)
        return NULL;
    realloc = malloc(sizeof(index) * (size + 1));
    if (realloc == NULL)
        return NULL;
    for (index = 0; index != size && ptr[index] != '\0'; index++)
        realloc[index] = ptr[index];
    if (ptr[index] == '\0')
        while (index < size)
            realloc[index++] = '\0';
    realloc[index] = '\0';
    free(ptr);
    return (realloc);
}
