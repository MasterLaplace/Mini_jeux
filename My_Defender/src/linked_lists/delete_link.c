/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** delete_link
*/

#include "defender.h"

void list_remove(link_t **list, link_t *link)
{
    if (!list || !*(list) || !link)
        return;
    if (link->next == link) {
        *list = NULL;
        free(link);
        return;
    }
    if (link == *list)
        *list = (*list)->next;
    (link->next)->prev = link->prev;
    (link->prev)->next = link->next;
    free(link);
}
