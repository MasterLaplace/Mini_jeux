/*
** EPITECH PROJECT, 2021
** task07
** File description:
** my strncmp
*/

int my_strlen(char const *a);

int my_strncompare(char const *s1, char const *s2, int n)
{
    int i = 0;
    int result;

    while (s1[i] == s2[i] && s1[i])
        i++;

    result = (i >= n ? 0 : s1[i] - s2[i]);
    return result;
}
