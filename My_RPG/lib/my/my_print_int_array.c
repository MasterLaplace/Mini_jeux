/*
** EPITECH PROJECT, 2021
** B-CPE-110-REN-1-1-pushswap-killian.bourhis
** File description:
** my_print_int_array
*/

#include "my.h"

void print_int_array(int *array, size_t size)
{
    size_t i = 0;

    for (i = 0; i < size - 1; i++)
        my_printf("%d, ", array[i]);
    my_printf("%d.\n", array[i]);
}
