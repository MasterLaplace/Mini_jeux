/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my char in liste
*/

#include "my.h"

size_t my_char_in_list(char caracter, const char *list)
{
    for (size_t i = 0; list[i]; i++) {
        if (caracter == list[i])
            return i;
    }
    return -1;
}
