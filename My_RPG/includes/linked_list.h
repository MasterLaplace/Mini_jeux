/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** linked_list
*/

#ifndef LINKED_H_
    #define LINKED_H_

typedef struct link_s {
    void *obj;
    void (*display) (void *, sfRenderWindow *);
    struct link_s *next;
    struct link_s *prev;
} link_t;

#endif/* LINKED_H_ */
