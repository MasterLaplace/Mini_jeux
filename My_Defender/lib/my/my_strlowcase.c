/*
** EPITECH PROJECT, 2021
** task09
** File description:
** my strlowcase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
        i++;
    }
    return str;
}
