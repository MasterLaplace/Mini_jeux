/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** absorb_object
*/

#include "game.h"

extern const char *MAP_PATHS[];
extern const size_t NB_INVENTORY_ELEMENTS;
extern const size_t NB_OBJ;
extern const preset_object_t OBJECT_STATS[];

static void new_pos(object_t *object, size_t i)
{
    static sfVector2f pos = (sfVector2f) {705.f, 393.0f};
    static size_t x = 1;
    static size_t y = 1;
    sfVector2f set_pos = (sfVector2f) {pos.x, pos.y};

    y = i / 6;
    x = i % 6;
    set_pos.x = pos.x + ((float) object->offset - 35) * x;
    set_pos.y = pos.y + ((float) object->offset - 35) * y;
    sfSprite_setPosition(object->sprite, set_pos);
    sfSprite_setTextureRect(object->sprite, OBJECT_STATS[0].rect);
    sfSprite_setOrigin(object->sprite,
    (sfVector2f) {object->offset / 2.f, object->offset / 2});
}

static void switch_win(game_t *game)
{
    destroy_links(game);
    create_linked_list(game, MAP_PATHS[VILLAGE]);
    reload_player(game);
    sfSprite_setPosition(PLAYER.sprite, (sfVector2f){300, 200});
    sfSprite_setTexture(BACKROUNG, TEXTURES[VILLAGE_MAP], sfTrue);
    sfSprite_setPosition(BACKROUNG, (sfVector2f){0, 0});
    clear_inventory(game);
    CURRENT_MAP = 3;
    INVENTORY->statue = true;
    STATS_PANEL->statue = true;
    callback_credit_button(game, NULL);
}

static void add_element(game_t *game, link_t *obj)
{
    object_t *object = (object_t *) obj->obj;

    if (object->type == CHEST)
        switch_win(game);
    for (size_t i = 0; i < NB_INVENTORY_ELEMENTS; i++) {
        if (INVENTORY->elements[i]->obj == NULL) {
            INVENTORY->elements[i]->obj = object;
            new_pos(INVENTORY->elements[i]->obj, i);
            list_remove(&(game->objects), obj);
            return;
        }
    }
}

static bool check_object(game_t *game, link_t *obj)
{
    sfSprite *sprite1 = PLAYER.sprite;
    sfSprite *sprite2 = ((object_t *) obj->obj)->sprite;
    sfFloatRect rect1 = get_sprite_rect(sprite1);
    sfFloatRect rect2 = get_sprite_rect(sprite2);

    if (check_rect_collision(rect1, rect2)) {
        add_element(game, obj);
        return true;
    }
    return false;
}

void absorb_object(game_t *game)
{
    link_t *actual = game->objects;
    link_t *tmp = NULL;

    if (!actual)
        return;
    do {
        tmp = actual->next;
        if (check_object(game, actual))
            return;
        actual = tmp;
    } while (game->objects && actual != game->objects);
}
