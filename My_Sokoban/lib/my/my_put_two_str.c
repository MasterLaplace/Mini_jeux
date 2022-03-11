/*
** EPITECH PROJECT, 2022
** B-CPE-210-REN-2-1-solostumper04-guillaume.papineau
** File description:
** my_put_two_str
*/

void my_putchar(char c);
void my_putstr(char *str);

void my_put_two_str(char **str)
{
    while (str && *str) {
        my_putstr(*str);
        my_putchar('\n');
        str++;
    }
}
