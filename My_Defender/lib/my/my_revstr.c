/*
** EPITECH PROJECT, 2021
** task03
** File description:
** my revstr
*/

int my_strlen(char const *a);

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char tmp;

    for (int i = 0; i <= len / 2 - 1; i++) {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }

    return str;
}
