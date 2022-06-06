/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-mydefender-killian.bourhis
** File description:
** defender
*/

#ifndef DEFENDER_H_
    #define DEFENDER_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <stdbool.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include "enum.h"
    #include "constants.h"
    #include "presets.h"
    #include "map.h"
    #include "my.h"
    #include "enemies.h"
    #include "towers.h"

typedef struct link_s {
    void *obj;
    void (*display) (void *, sfRenderWindow *);
    struct link_s *next;
    struct link_s *prev;
} link_t;

typedef struct button_s {
    sfVector2f pos;
    sfSprite *sprite;
    sfIntRect rect;
    button_state state;
    size_t state_2;
    void (*callback)();
    void (*update)();
} button_t;

typedef struct object_s {
    sfVector2f pos;
    sfSprite *sprite;
    sfIntRect rect;
    size_t speed;
    size_t health;
    size_t max_health;
    size_t offset;
    size_t range;
    size_t damage;
} object_t;

typedef struct display_s {
    sfRenderWindow *window;
} display_t;

typedef struct user_interface_t {
    sfSprite *sprite;
    sfIntRect rect;
} user_interface_t;

typedef struct sound_s {
    sfSound *sound;
    sfSoundBuffer *buffer;
} sound_t;

typedef struct scene_s {
    sfSprite *background;
    link_t *interface;
    link_t *buttons;
} scene_t;

typedef struct mouse_action_s {
    int type;
    int index;
} mouse_action_t;

typedef struct wheel_s {
    sfSprite *sprite;
    link_t *buttons;
    state_wheel state;
    tower_t *current_tower;
    int costs[4];
} wheel_t;

typedef struct game_scene_s {
    link_t *enemies;
    link_t *towers;
    wheel_t *wheel;
} game_scene_t;

typedef struct game_s game_t;

typedef struct list_init_scene_s {
    scene_t *(*redirect)(game_t *game);
} list_init_scene_t;

typedef struct game_stats_s {
    size_t score;
    size_t money;
    size_t health_castle;
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
    map_t **maps;
    game_scene_t *game_scene;
    game_stats_t *stats;
    type_scene current_scene;
    link_t *enemies;
    int current_map;
    bool pause;
};

int print_help(int argc, char const *argv[]);
sfTexture **init_textures(void);
game_stats_t *init_stats(void);
sound_t **init_sounds(void);
sfMusic **init_music(void);
game_t *game_init(void);
void destroying(game_t *game);
void sounds_destroy(sound_t **sounds);
void musics_destroy(sfMusic **musics);
void set_music_volume(game_t *game, float volume);
void stop_all_musics(game_t *game);
void stop_all_sounds(game_t *game);
void set_sound_volume(game_t *game, float volume);
void destroy_enemies(game_t *game);
void destroy_towers(game_t *game);
void exit_game(void);
display_t *display_init(void);
scene_t **init_scenes(game_t *game);
void analyse_events(game_t *game, sfEvent event);
scene_t *define_home_scene(game_t *game);
scene_t *define_map_scene(game_t *game);
scene_t *define_game_scene(game_t *game);
scene_t *define_lose_scene(game_t *game);
scene_t *define_win_scene(game_t *game);
scene_t *define_param_scene(game_t *game);
scene_t *define_pause_scene(game_t *game);
scene_t *define_no_map_scene(game_t *game);
void list_append(link_t **list, link_t *obj);
void list_remove(link_t **list, link_t *link);
link_t *create_link(void *new);
void set_text(game_t *game);
void set_text_lose(game_t *game);
void set_text_no_map(game_t *game);
button_t *create_button(preset_button_t preset, sfTexture **);
button_t *create_tower_button(preset_button_tower_t preset, sfTexture **);
user_interface_t *create_interface(preset_interface_t preset, sfTexture **);
void print_list(link_t *list);
void draw_scene(game_t *game);
void check_clocks(game_t *game, sfRenderWindow *window);
void draw_button(void *obj, sfRenderWindow *window);
void draw_enemy(void *obj, sfRenderWindow *window);
void draw_interface(void *obj, sfRenderWindow *window);
void draw_tower(void *obj, sfRenderWindow *window);
void game_loading(game_t *game);
void wave_enemy(game_t *game);
void check_range(game_t *game, link_t *towers);
void move_enemies(game_t *game);
void exit_game(void);

void check_mouse_event(game_t *, sfEvent);
void change_scene(game_t *, type_scene);
bool cursor_in_sprite(sfSprite *sprite, int x, int y);
void manage_mouse_moved(sfMouseMoveEvent, link_t *, mouse_action_t *,
    game_t *);
void manage_mouse_released(game_t *, sfMouseButtonEvent, link_t *,
    mouse_action_t *);
void manage_mouse_pressed(sfMouseButtonEvent, link_t *, mouse_action_t *,
    game_t *);
void callback_level_button(game_t *, void *);
void callback_map_button(game_t *, __attribute__((unused)) void *);
void callback_home_button(game_t *, __attribute__((unused)) void *);
void callback_exit_button(game_t *, __attribute__((unused)) void *);
void callback_map_button(game_t *, __attribute__((unused)) void *);
void callback_effects_button(game_t *, __attribute__((unused)) void *);
void callback_sound_button(game_t *, __attribute__((unused)) void *);
void callback_music_button(game_t *, __attribute__((unused)) void *);
void callback_tower_button(game_t *game, void *params);
void callback_archer_button(game_t *game, __attribute__((unused)) void *);
void callback_stone_button(game_t *game, __attribute__((unused)) void *);
void callback_magic_button(game_t *game, __attribute__((unused)) void *);
void callback_tower_button(game_t *game, __attribute__((unused)) void *);
void callback_crossbow_button(game_t *game, __attribute__((unused)) void *);
void callback_param_button(game_t *game, __attribute__((unused)) void *);
void callback_pause_button(game_t *game, __attribute__((unused)) void *);
void callback_return_button(game_t *game, __attribute__((unused)) void *);

void move_rect_enemy(game_t *game);
void move_rect_tower(link_t *towers);
void update_ui_button(button_t *button);
void update_tower_button(tower_t *tower);
void update_game_scene(game_t *game);
void update_sound_button(button_t *button, game_t *game);
void update_music_button(button_t *button, game_t *game);

void def_background(scene_t *scene, sfTexture *texture);
void tower_generation(game_t *game);
wheel_t *create_wheel(game_t *game);
void move_wheel(wheel_t *wheel, sfVector2f *tow_pos);
bool transaction(game_t *game, int cost);
#endif/* !DEFENDER_H_ */
