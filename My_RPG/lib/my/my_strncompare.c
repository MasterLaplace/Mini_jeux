/*
** EPITECH PROJECT, 2021
** task07
** File description:
** my strncmp
*/

int my_strncompare(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (!s1 || !s2)
        return -1;
    while (s1[i] == s2[i] && s1[i])
        i++;

    return i >= n ? 0 : s1[i] - s2[i];
}
