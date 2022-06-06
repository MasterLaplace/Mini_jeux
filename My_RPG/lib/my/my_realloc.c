/*
** EPITECH PROJECT, 2021
** lib my
** File description:
** my_realloc
*/

#include "my.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    void *tmp = (void *)src;

    for (size_t i = 0; i < n && tmp; i++, tmp++) {
        ((char *) dest)[i] = ((char *) src)[i];
    }
    return dest;
}

void *my_realloc(void *ptr, size_t size, size_t new_size)
{
    void *new_ptr = malloc(new_size);

    if (!new_ptr)
        return NULL;
    if (ptr) {
        my_memcpy(new_ptr, ptr, size);
        free(ptr);
    }
    return new_ptr;
}
