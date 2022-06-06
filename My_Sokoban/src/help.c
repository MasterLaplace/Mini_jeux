/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-mysokoban-guillaume.papineau
** File description:
** help
*/

#include "../includes/sokoban.h"

static const char *help_msg[] = {
    "USAGE\n",
    "\t./my_sokoban map\n\n",
    "USER INTERACTIONS\n",
    "\tSPACE\treload the game\n",
    "\tESCP\tquit the game\n\n",
    "DESCRIPTION\n",
    "\tmap\tfile representing the warehouse map,",
    " containing '#' for walls,\n",
    "\t\t'P' for the player,",
    " 'X' for boxes and 'O' for storage locations.\n",
    NULL
};

int help(void)
{
    for (size_t i = 0; help_msg[i]; i++)
        my_putstr(help_msg[i]);
    return EXIT_SUCCESS;
}
