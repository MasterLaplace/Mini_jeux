/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** my_link_list
*/

typedef struct ok_s {
    ok_t *previous;
    void (*func)(void);
    ok_t *next;
} ok_t;

ok_t *ok(void)
{
    ok_t *ok = malloc(sizeof(ok_t));

    return ok;
}
