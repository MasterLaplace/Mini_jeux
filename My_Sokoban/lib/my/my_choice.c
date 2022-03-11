/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_choice
*/

#include <stdlib.h>

int my_str_two_len(char **tab);
int my_randint(int min, int max);

char *choice_str(char **tab)
{
    return tab[my_randint(0, my_str_two_len(tab))];
}
