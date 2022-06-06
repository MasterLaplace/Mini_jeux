/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** create_obj
*/

#include "game.h"

void list_append(link_t **list, link_t *link)
{
    link_t *start = NULL;

    if (!list || !*list) {
        link->next = link;
        link->prev = link;
        *list = link;
        return;
    }
    start = *(list);
    link->prev = start->prev;
    (start->prev)->next = link;
    start->prev = link;
    link->next = *list;
}

link_t *create_link(void *new)
{
    link_t *link = malloc(sizeof(link_t));

    if (!link)
        return NULL;
    if (new)
        link->obj = new;
    link->next = link;
    link->prev = link;
    return link;
}
