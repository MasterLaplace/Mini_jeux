/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** help
*/

#include "sokoban.h"

int help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap\tfile representing the warehouse map,");
    my_putstr(" containing '#' for walls,\n");
    my_putstr("\t\t'P' for the player,");
    my_putstr(" 'X' for boxes and 'O' for storage locations.\n");
    return 0;
}
