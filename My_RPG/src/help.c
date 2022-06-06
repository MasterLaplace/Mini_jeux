/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** help
*/

#include "game.h"

static const char *help[] = {
    "UTILISATION\n./my_rpg [-h]\n\nDESCRIPTION\n",
    "-h\tafficher ce guide.\n",
    "My RPG est un jeu d'aventure. Le but est d'arriver au portail",
    ", en passant par plusieurs maps.\n",
    "Vous rencontrerez des ennemis sur le chemin, voulant détruire",
    " le château; à vous de vous en débarasser.\n\n",
    "INTERACTIONS\n",
    "Barre espace: sauter.\nFlèche gauche: aller à gauche.\nFlèche",
    " droite: aller à droite.\nC: ouvrir les stats.\nV: ouvrir",
    " l'inventaire.\nR: ouvrir les portes et autres interactions.\n\n",
    "Jeu programmé en C avec la librairie graphique CSFML.\n",
    "Réalisé par Killian, Guillaume, Martin, Nicolas.",
    NULL
};

bool print_help(int argc, char const *argv[])
{
    if (argc != 2)
        return false;
    if (my_strcompare(argv[1], "-h") != 0)
        return false;
    my_two_put((char **) help);
    return true;
}
