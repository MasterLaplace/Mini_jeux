/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** core
*/

#include "game.h"

int main(int argc, char const *argv[])
{
    sfEvent event;
    game_t game;

    if (print_help(argc, argv))
        return EXIT_SUCCESS;
    if (!game_init(&game))
        return EPITECH_FAILURE;
    while (sfRenderWindow_isOpen(game.display->window)) {
        while (sfRenderWindow_pollEvent(game.display->window, &event))
            analyse_events(&game, event);
        check_clocks(&game, game.display->window);
    }
    destroying(&game);
    return EXIT_SUCCESS;
}
