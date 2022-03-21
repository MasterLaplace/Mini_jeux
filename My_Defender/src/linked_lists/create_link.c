/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** create_obj
*/

#include "defender.h"

void list_append(link_t **list, link_t *link)
{
    link_t *start = NULL;

    if (!list || *list == NULL) {
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

    if (link == NULL)
        return NULL;
    if (new != NULL)
        link->obj = new;
    link->next = link;
    link->prev = link;
    return link;
}
