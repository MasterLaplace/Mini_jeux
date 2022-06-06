/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** quests
*/

#include "game.h"

const size_t NB_QUESTS_BLACK = 3;
const preset_quest_t QUESTS_BLACK[] = {
    {
        "My precious:\n",
        "Collect 2 Diamonds !\n",
        2,
        DIAMOND
    },
    {
        "Black's key:\n",
        "find my key !\n",
        1,
        KEY_BLACK
    },
    {
        "Our treasure:\n",
        "find our treasure !\n",
        1,
        CHEST
    }
};

const size_t NB_QUESTS_WHITE = 3;
const preset_quest_t QUESTS_WHITE[] = {
    {
        "Toss a coin to your witcher:\n",
        "Collect 5 coins !\n",
        5,
        PIECES
    },
    {
        "White's key:\n",
        "find my key !\n",
        1,
        KEY_WHITE
    },
    {
        "Our treasure:\n",
        "find our treasure !\n",
        1,
        CHEST
    }
};
