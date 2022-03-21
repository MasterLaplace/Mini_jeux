/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my str is upper
*/

int my_str_isupper(char const *str)
{
    while (*str) {
        if (str[0] >= 'A' && str[0] <= 'Z')
            str++;
        else
            return (0);
    }
    return 1;
}
