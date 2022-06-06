/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper02-killian.bourhis
** File description:
** my_char_low_case
*/

char my_char_low_case(char c)
{
    if ('A' <= c && c <= 'Z')
        c = c - 'A' + 'a';
    return c;
}
