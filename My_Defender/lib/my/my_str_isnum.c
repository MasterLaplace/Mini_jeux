/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my str is num
*/

int my_strlen(char const *a);

static int is_operator(char c, int i, int len)
{
    if (len <= 1)
        return 0;
    if ((c == '-' || c == '+') && i == 0)
        return 1;
    else
        return 0;
}

int my_str_isnum(char const *str)
{
    int len = my_strlen(str);

    if (len == 0)
        return 0;
    for (int i = 0; i < len; i++) {
        char c = str[i];
        if ((c < '0' || c > '9') && is_operator(c, i, len) == 0)
            return 0;
    }

    return 1;
}
