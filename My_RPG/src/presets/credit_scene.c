/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** credit_scene
*/

#include "game.h"

const size_t NB_CREDIT_BUTTONS = 1;
const preset_button_t CREDIT_BUTTONS[] =
{
    {
        RETURN_BUTTON,
        (sfVector2f){X_WIN - 160, Y_WIN - 160},
        (sfVector2f){1, 1},
        (sfIntRect){0, 0, 134, 144},
        (sfVector2f){0, 0},
        INACTIVE,
        (void *) &callback_home_button,
        (void *) &update_ui_button
    }
};

const size_t NB_CREDIT_INTERFACE = 1;
const preset_interface_t CREDIT_INTERFACE[] =
{
    {
        DARK,
        (sfVector2f){0, 0}
    }
};

const size_t NB_CREDITS_TEXT = 16;
const preset_credit_text_t CREDIT_TEXT[] =
{
    {
        (sfVector2f) {X_WIN / 2, Y_WIN},
        "PRODUCTION :",
        "    ME.",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 300},
        "PRODUCTEUR :",
        " GUILLAUME",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 600},
        "SCENARIO :",
        "GUILLAUME",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 900},
        "DIRECTEUR :",
        " KILLIAN",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 1200},
        "PHOTO :",
        "KILLIAN",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 1500},
        "MUSIQUE :",
        " - ...",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 1800},
        "MUSIQUE_CREDIT :",
        " - ...",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 2100},
        "DIRECTEUR ARTISTIQUE :",
        "      KILLIAN",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 2400},
        "ASSITANT REALISATEUR :",
        "      GUILLAUME",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 2700},
        "SUPERVISEUR :",
        "  KILLIAN",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 3000},
        "EFFET SPECIAUX :",
        "NICOLAS",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 3300},
        "LEVEL DESIGN :",
        "MARTIN",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 3600},
        " SON :",
        "KILLIAN",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 3900},
        "             GROUP :",
        "KILLIAN, GUILLAUME, MARTIN, NICOLAS",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 4200},
        "ME inc. CR 2022, Tous droits reserves",
        "",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    },
    {
        (sfVector2f) {X_WIN / 2, Y_WIN + 4500},
        "THANKS ME.",
        "",
        "assets/fonts/Dimbo_Regular.ttf",
        44
    }
};
