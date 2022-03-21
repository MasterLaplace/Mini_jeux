/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** help
*/

#include "defender.h"

int print_help(int argc, char const *argv[])
{
    if (argc != 2)
        return 0;
    if (my_strcompare(argv[1], "-h") != 0)
        return 0;
    my_printf("Les ennmis veulent détruite ton château ! Pose des tours ");
    my_printf("le long du chemin pour tuer les ennemis et gagner ");
    my_printf("plus d'argent. Si les ennemis parviennent à détruire ");
    my_printf("ton château, tu perds la partie. Si tu tues tous les ennemis");
    my_printf("tu gagnes la partie.\n");
    return 1;
}
