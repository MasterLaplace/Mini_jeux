/*
** EPITECH PROJECT, 2021
** task12
** File description:
** my str islpha
*/

int my_str_isalpha(char const *str)
{
    while (*str) {
        if (str[0] >= 'A' && str[0] <= 'Z' || str[0] >= 'a' && str[0] <= 'z')
            str++;
        else
            return (0);
    }
    return 1;
}
