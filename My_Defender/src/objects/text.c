/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** text
*/

#include "defender.h"

extern const size_t NB_TEXTS;
extern const preset_text_t TEXT[];

static void draw_text(game_t *game, size_t nb, int i)
{
    sfText *sf_score = sfText_create();
    sfFont *font = sfFont_createFromFile(TEXT[i].font);
    char *dest = my_strcat(my_itoa(nb), TEXT[i].str);

    sfText_setString(sf_score, dest);
    sfText_setFont(sf_score, font);
    sfText_setPosition(sf_score, TEXT[i].pos);
    sfText_setColor(sf_score, sfColor_fromRGB(255, 236, 49));
    sfText_setCharacterSize(sf_score, TEXT[i].size);
    sfRenderWindow_drawText(game->display->window, sf_score, NULL);
    sfText_destroy(sf_score);
    sfFont_destroy(font);
    free(dest);
}

void set_text(game_t *game)
{
    draw_text(game, game->stats->nb_enemy, NB_ENEMY);
    draw_text(game, game->stats->money, MONEY);
    draw_text(game, game->stats->health_castle, HEALTH);
}

void set_text_lose(game_t *game)
{
    sfText *sf_score = sfText_create();
    sfFont *font = sfFont_createFromFile(TEXT[LOSE_TEXT].font);

    sfText_setString(sf_score, TEXT[LOSE_TEXT].str);
    sfText_setFont(sf_score, font);
    sfText_setPosition(sf_score, TEXT[LOSE_TEXT].pos);
    sfText_setColor(sf_score, sfColor_fromRGB(251, 138, 11));
    sfText_setCharacterSize(sf_score, TEXT[LOSE_TEXT].size);
    sfRenderWindow_drawText(game->display->window, sf_score, NULL);
    sfText_destroy(sf_score);
    sfFont_destroy(font);
}

void set_text_no_map(game_t *game)
{
    sfText *sf_score = sfText_create();
    sfFont *font = sfFont_createFromFile(TEXT[NO_MAP_TEXT].font);

    sfText_setString(sf_score, TEXT[NO_MAP_TEXT].str);
    sfText_setFont(sf_score, font);
    sfText_setPosition(sf_score, TEXT[NO_MAP_TEXT].pos);
    sfText_setColor(sf_score, sfColor_fromRGB(251, 138, 11));
    sfText_setCharacterSize(sf_score, TEXT[NO_MAP_TEXT].size);
    sfRenderWindow_drawText(game->display->window, sf_score, NULL);
    sfText_destroy(sf_score);
    sfFont_destroy(font);
}
