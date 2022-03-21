/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my str is lower
*/

int my_str_islower(char const *str)
{
    while (*str) {
        if (str[0] >= 'a' && str[0] <= 'z')
            str++;
        else
            return (0);
    }
    return 1;
}
