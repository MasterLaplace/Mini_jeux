/*
** EPITECH PROJECT, 2021
** librairie my
** File description:
** my char in liste
*/

int my_char_in_list(char caracter, const char *list)
{
    for (int i = 0; list[i]; i++) {
        if (caracter == list[i])
            return i;
    }
    return -1;
}
