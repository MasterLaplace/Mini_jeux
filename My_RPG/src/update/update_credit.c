/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** credits
*/

#include "game.h"

extern const size_t NB_CREDITS_TEXT;
extern const preset_credit_text_t CREDIT_TEXT[];

static void set_text_credit_desc(game_t *game, size_t index, float value)
{
    sfText *sf_credit = sfText_create();
    sfFont *font = sfFont_createFromFile(CREDIT_TEXT[index].font);
    size_t len = my_strlen(CREDIT_TEXT[index].description) * 8;
    sfVector2f pos = (sfVector2f) {CREDIT_TEXT[index].pos.x - len,
                                    CREDIT_TEXT[index].pos.y + value};

    sfText_setString(sf_credit, CREDIT_TEXT[index].description);
    sfText_setFont(sf_credit, font);
    sfText_setPosition(sf_credit, pos);
    sfText_setColor(sf_credit, sfColor_fromRGB(251, 138, 11));
    sfText_setCharacterSize(sf_credit, CREDIT_TEXT[index].size);
    sfRenderWindow_drawText(WINDOW, sf_credit, NULL);
    sfText_destroy(sf_credit);
    sfFont_destroy(font);
}

static void set_text_credit(game_t *game, size_t index, float value)
{
    sfText *sf_credit = sfText_create();
    sfFont *font = sfFont_createFromFile(CREDIT_TEXT[index].font);
    size_t len = my_strlen(CREDIT_TEXT[index].title) * 8;
    sfVector2f pos = (sfVector2f) {CREDIT_TEXT[index].pos.x - len,
                                    CREDIT_TEXT[index].pos.y + value};

    sfText_setString(sf_credit, CREDIT_TEXT[index].title);
    sfText_setFont(sf_credit, font);
    sfText_setPosition(sf_credit, pos);
    sfText_setColor(sf_credit, sfColor_fromRGB(251, 138, 11));
    sfText_setCharacterSize(sf_credit, CREDIT_TEXT[index].size);
    sfRenderWindow_drawText(WINDOW, sf_credit, NULL);
    sfText_destroy(sf_credit);
    sfFont_destroy(font);
    set_text_credit_desc(game, index, value + 100);
}

void update_credit(game_t *game)
{
    static float advanced = 0;

    for (size_t i = 0; i < NB_CREDITS_TEXT; i++)
        set_text_credit(game, i, advanced);
    if (sfKeyboard_isKeyPressed(sfKeyR))
        advanced -= 15.0f;
    else
        advanced -= 5.0f;
    if (advanced < -5700) {
        advanced = 0;
        CURRENT = HOME;
    }
}
