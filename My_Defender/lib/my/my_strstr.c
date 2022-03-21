/*
** EPITECH PROJECT, 2021
** task05
** File description:
** my strstr
*/

int my_strlen(char const *a);
int my_strncompare(char const *s1, char const *s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    while (*str) {
        if (my_strncompare(str, to_find, my_strlen(to_find)) == 0)
            return str;
        str++;
    }
    return 0;
}
