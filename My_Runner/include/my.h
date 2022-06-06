/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-guillaume.papineau
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

//* It counts the number of characters in a string.
int my_strlen(char *str);

//* It prints a string.
void my_putstr(char *str);

//* It concatenates two strings.
char *my_strcat(char *str, char *t);

//* It converts an integer into a string.
char *my_itoa(int nb);

//* It fills the first n bytes of the memory area pointed to by s with c.
void *my_memset(void *s, int c, size_t n);

//* It reverses a string.
char *my_revstr(char *str);

//* It duplicates a string.
char *my_strdup(char *src);
#endif/* MY_H_ */
