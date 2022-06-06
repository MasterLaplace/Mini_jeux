/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** talk_with_pnj
*/

#include "game.h"

extern const preset_quest_t QUESTS_BLACK[];
extern const preset_quest_t QUESTS_WHITE[];

void display_current_quest(game_t *game, pnj_t *pnj)
{
    sfVector2f pos = sfSprite_getPosition(pnj->sprite);

    sfSprite_setPosition(BUBBLE->sprite, (sfVector2f){pos.x + 99, pos.y - 99});
    if (pnj->type == MAGICIAN_1) {
        black_look_in_bag(game, pnj);
        BUBBLE->name = BLACK_QUEST.name;
        BUBBLE->description = BLACK_QUEST.description;
    } else if (pnj->type == MAGICIAN_2) {
        white_look_in_bag(game, pnj);
        BUBBLE->name = WHITE_QUEST.name;
        BUBBLE->description = WHITE_QUEST.description;
    }
    BUBBLE->statue = true;
}

static bool check_pnj(game_t *game, pnj_t *pnj)
{
    sfFloatRect rect1 = get_sprite_rect(pnj->sprite);
    sfFloatRect rect2 = get_sprite_rect(PLAYER.sprite);

    if (check_rect_collision(rect1, rect2)) {
        display_current_quest(game, pnj);
        return true;
    }
    BUBBLE->statue = false;
    return false;
}

void talk_to_pnj(game_t *game)
{
    link_t *actual = game->pnjs;
    pnj_t *pnj = NULL;

    if (!actual)
        return;
    do {
        pnj = (pnj_t *) actual->obj;
        if (check_pnj(game, pnj))
            return;
        actual = actual->next;
    } while (game->pnjs && actual != game->pnjs);
}
