/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-killian.bourhis
** File description:
** game
*/

#ifndef DEFENDER_H_
    #define DEFENDER_H_
    #define UNUSED __attribute__((unused))
    #define WINDOW game->display->window
    #define TEXTURES game->textures
    #define BACKROUNG game->scene[CURRENT]->background
    #define PARALLAX_1 game->game_scene->parallax_1
    #define PARALLAX_2 game->game_scene->parallax_2
    #define CURRENT game->current_scene
    #define CURRENT_MAP game->game_scene->current_map
    #define STATS game->stats
    #define PLAYER game->player
    #define PLY_STATS game->player.stats
    #define PLY_STATE game->player.state
    #define STATS_PANEL game->game_scene->interface_stat
    #define INVENTORY game->game_scene->inventory
    #define BUBBLE game->game_scene->bubble
    #define EMY_STATE enemy->state
    #define EPITECH_FAILURE 84
    #define my_abs(x) (x < 0 ? -x : x)
    #define KEY_PRESSED sfKeyboard_isKeyPressed
    #define BLACK_QUEST QUESTS_BLACK[pnj->actual_quest]
    #define WHITE_QUEST QUESTS_WHITE[pnj->actual_quest]
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <math.h>
    #include "enum.h"
    #include "linked_list.h"
    #include "sound.h"
    #include "constants.h"
    #include "scenes.h"
    #include "player.h"
    #include "presets.h"
    #include "my.h"

struct object_s {
    char *name;
    char *description;
    int effect;
    size_t type;
    sfVector2f pos;
    sfSprite *sprite;
    sfIntRect rect;
    size_t offset;
    obj_state state;
    size_t max_value;
    void (*update)(game_t *);
};

struct pnj_s {
    char *name;
    size_t actual_quest;
    size_t quest;
    size_t type;
    sfVector2f pos;
    sfSprite *sprite;
    sfIntRect rect;
    size_t offset;
    size_t state;
    size_t max_value;
    void (*update)(game_t *);
};

typedef struct enemy_s {
    char *name;
    int health;
    size_t damage;
    size_t speed;
    size_t type;
    size_t experience;
    short range;
    short direct;
    sfVector2f pos;
    sfSprite *sprite;
    sfIntRect rect;
    size_t offset;
    enemy_state state;
    void (*update)(game_t *);
} enemy_t;

typedef struct display_s {
    sfRenderWindow *window;
} display_t;

typedef struct mouse_action_s {
    int type;
    int index;
} mouse_action_t;

typedef struct game_s game_t;

typedef struct list_init_scene_s {
    scene_t *(*redirect)(game_t *game);
} list_init_scene_t;

typedef struct game_stats_s {
    size_t score;
    size_t money;
    size_t current_map;
    size_t current_dificulty;
    size_t nb_enemy;
    size_t nb_enemy_create;
    size_t current_nb_enemy;
} game_stats_t;

struct game_s {
    display_t *display;
    sfTexture **textures;
    sound_t **sounds;
    sfMusic **musics;
    sfClock *clock;
    scene_t **scene;
    sfImage **hitboxes;
    player_t player;
    game_scene_t *game_scene;
    game_stats_t stats;
    type_scene current_scene;
    link_t *objects;
    link_t *enemies;
    link_t *pnjs;
    int current_map;
    size_t weather;
};

typedef struct set_action_s {
    size_t key;
    void (*action) (game_t *game, int value);
    int param;
} set_action_t;

/* CALLBACK */
void callback_map_button(game_t *game, UNUSED void *params);
void callback_home_button(game_t *, UNUSED void *);
void callback_play_button(game_t *, UNUSED void *);
void callback_game_button(game_t *, UNUSED void *);
void callback_exit_button(game_t *, UNUSED void *);
void callback_map_button(game_t *, UNUSED void *);
void callback_effects_button(game_t *, UNUSED void *);
void callback_sound_button(game_t *, UNUSED void *);
void callback_music_button(game_t *, UNUSED void *);
void callback_param_button(game_t *, UNUSED void *);
void callback_pause_button(game_t *, UNUSED void *);
void callback_return_button(game_t *, UNUSED void *);
void callback_stats_button(game_t *, UNUSED void *);
void callback_inventory_button(game_t *, UNUSED void *);
void callback_backpack_button(game_t *, UNUSED void *);
void callback_element_button(game_t *, UNUSED void *);
void callback_window_button(game_t *, UNUSED void *);
void callback_credit_button(game_t *, UNUSED void *);
void callback_save_button(game_t *, UNUSED void *);
void callback_name_button(game_t *, UNUSED void *);
void callback_map1_event(game_t *, UNUSED void *);
void callback_map2_event(game_t *, UNUSED void *);
void callback_map3_event(game_t *, UNUSED void *);
void callback_village_event(game_t *, UNUSED void *);

/* DESTROY */
void destroy_button(link_t *buttons);
void destroy_stats_panel(game_t *game);
void destroy_inventory_panel(game_t *game);
void clear_inventory(game_t *game);
void destroy_links(game_t *game);
void destroy_player(game_t *game);
void hitbox_destroy(sfImage **hitboxes);
void musics_destroy(sfMusic **musics);
void destroying(game_t *game);
void sounds_destroy(sound_t **sounds);
void exit_game(void);

/* EVENT */
void analyse_events(game_t *game, sfEvent event);
/* MOUSE */
bool cursor_in_sprite(sfSprite *sprite, int x, int y);
void check_mouse_event(game_t *, sfEvent);
/* MANAGE */
void manage_mouse_moved(sfMouseMoveEvent, link_t *, mouse_action_t *,
    game_t *);
void manage_mouse_released(game_t *, sfMouseButtonEvent, link_t *,
    mouse_action_t *);
void manage_mouse_pressed(sfMouseButtonEvent, link_t *, mouse_action_t *,
    game_t *);

/* GAME */
void check_clocks(game_t *game, sfRenderWindow *window);
void display_weather(game_t *game);

/* INIT */
bool game_init(game_t *game);
display_t *display_init(void);
sfImage **init_hitboxes(void);
sfMusic **init_music(void);
void init_quests(game_t *game);
sfTexture **init_textures(void);
scene_t **init_scenes(game_t *game);
sound_t **init_sounds(void);
void init_stats(game_t *game);

/* LINK */
void list_append(link_t **list, link_t *obj);
void list_remove(link_t **list, link_t *link);
/* DRAW */
void draw_list(game_t *game, link_t *list);
void draw_scene(game_t *game);
void draw_button(void *obj, sfRenderWindow *window);
void draw_interface(void *obj, sfRenderWindow *window);
void draw_dynamic(void *obj, sfRenderWindow *window);
void draw_enemy(void *obj, sfRenderWindow *window);
void draw_object(void *obj, sfRenderWindow *window);
void draw_arrow(void *obj, sfRenderWindow *window);
void draw_pnj(void *obj, sfRenderWindow *window);
void draw_element(game_t *game);
void draw_entity(game_t *game);
void print_list(link_t *list);

/* OBJECT */
link_t *create_link(void *new);
button_t *create_button(preset_button_t preset, sfTexture **);
user_interface_t *create_interface(preset_interface_t preset, sfTexture **);
dynamic_interface_t *create_dynamic(preset_dynamic_t preset, sfTexture **);
element_t *create_element(void);
bubble_t *create_bubble(game_t *game);
size_t create_list_object(game_t *game, const char *);
size_t create_list_enemy(game_t *game, const char *);
size_t create_list_pnj(game_t *game, const char *);
void set_origin(sfSprite *sprite, float x, float y);
bool create_player(game_t *game);
void move_rect_object( game_t *game);
void move_rect_pnj(game_t *game);
bool check_fd(int fd);

/* PARTICULE */
void display_rain(sfRenderWindow *window, sfClock *clock);
void display_snow(sfRenderWindow *window, sfClock *clock);
void display_fade(game_t *game, bool reset);

/* COLLISIONS */

sfFloatRect get_sprite_rect(sfSprite *sprite);
bool check_rect_collision(sfFloatRect rect1, sfFloatRect rect2);
sfFloatRect intrect_to_floatrect(sfIntRect irect);
sfIntRect floatrect_to_intrect(sfFloatRect frect);

/* PLAYER */
void move_lateral_player(game_t *game, int direction);
void move_middle(game_t *game, sfVector2f *player, int direction, float speed);
void set_origin(sfSprite *sprite, float x, float y);
void jump_player(game_t *game, UNUSED int);
void attack_player(game_t *game, size_t type_attack);
void absorb_object(game_t *game);
void talk_to_pnj(game_t *game);
void take_the_door(game_t *game);
void launch_arrow(game_t *game);
void move_enemy(game_t *game, link_t *enemies);
void attack_enemy(game_t *game, link_t *enemies);
void move_arrow(game_t *game);
void set_mirror(sfSprite *sprite, bool x_mirrored, bool y_mirrored);
void village_move(game_t *game, int direction, sfVector2f *player);
bool is_dead(game_t *game);
void reload_player(game_t *game);
void check_experience(game_t *game);
sfVector2f check_slope(game_t *game, sfVector2f *pos, sfVector2f *slope);
void white_look_in_bag(game_t *game, pnj_t *pnj);
void black_look_in_bag(game_t *game, pnj_t *pnj);

/* DEFINE */
scene_t *define_home_scene(game_t *game);
scene_t *define_name_scene(game_t *game);
scene_t *define_game_scene(game_t *game);
scene_t *define_lose_scene(game_t *game);
scene_t *define_win_scene(game_t *game);
scene_t *define_param_scene(game_t *game);
scene_t *define_pause_scene(game_t *game);
scene_t *define_no_map_scene(game_t *game);
scene_t *define_credit_scene(game_t *game);
scene_t *define_save_scene(game_t *game);
interface_stats_t *define_stats_panel(game_t *game);
inventory_t *define_inventory_pannel(game_t *game);
void def_background(scene_t *scene, sfTexture *texture);
void def_stats_panel(interface_stats_t *scene, sfTexture *texture);
void def_inventory_pannel(inventory_t *scene, sfTexture *texture);
void create_parallax(game_scene_t *scene, game_t *game, texture);
void set_parallax(const game_t *game, sfSprite *sprite, texture texture);

/* UPDATE */
void update_ui_button(button_t *button);
void update_game_scene(game_t *game);
void update_sound_button(button_t *button, game_t *game);
void update_music_button(button_t *button, game_t *game);
void update_player(game_t *game);
void update_player_gravity(game_t *game);
void move_rect_player(game_t *game);
void move_rect_enemy(game_t *game);
void move_rect_dynamic_interface(game_t *game, link_t *dynamic_interface);
void update_credit(game_t *game);
void update_name(game_t *game, sfKeyCode key);
void update_quest(game_t *game);

void set_music_volume(game_t *game, float volume);
void stop_all_musics(game_t *game);
void stop_all_sounds(game_t *game);
void set_sound_volume(game_t *game, float volume);
void change_scene(game_t *, type_scene);
bool print_help(int argc, char const *argv[]);
void set_text(game_t *game);

//Other
void manage_keyboard(game_t *game);
void set_window_screen(game_t *game, sfWindowStyle type);
bool compare_color(sfColor color_a, sfColor color_b);
size_t create_linked_list(game_t *game, const char *filename);
void move_list_enemies(link_t *enemies, int direction, float speed);
void move_list_objects(link_t *objects, int direction, float speed);
void move_list_arrows(link_t *arrows, int direction, float speed);
#endif/* !DEFENDER_H_ */
