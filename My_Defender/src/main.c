/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** main
*/

#include "defender.h"

int main(int argc, char const *argv[])
{
    sfEvent event;
    game_t *game;
    sfRenderWindow *window;

    if (print_help(argc, argv))
        return 0;
    if ((game = game_init()) == NULL)
        return 84;
    window = game->display->window;
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
            analyse_events(game, event);
        check_clocks(game, window);
    }
    destroying(game);
    return 0;
}
