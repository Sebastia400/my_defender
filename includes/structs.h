/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** fgfghgf
*/

#ifndef STRUCTS_H_
    #define STRUCTS_H_
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <stdio.h>

    //STRUCT SPRITES
    typedef struct s_sprites_var {
        sfSprite **towers;
        sfSprite **tower_1_level;
        sfSprite **tower_2_level;
        sfSprite **tower_3_level;
        sfSprite **tower_4_level;
        sfSprite **tower_5_level;
        sfSprite **tower_6_level;
        sfSprite **tower_7_level;
        sfSprite **tower_8_level;
        sfSprite **tutorial;
        sfSprite *upg_tower_1;
        sfSprite *upg_tower_2;
        sfSprite *upg_tower_3;
        sfSprite *upg_tower_4;
        sfSprite *upg_tower_5;
        sfSprite *upg_tower_6;
        sfSprite *upg_tower_7;
        sfSprite *upg_tower_8;
        sfSprite *no_upgrades;
        sfSprite ***soldiers;
        sfSprite **soldier_1;
        sfSprite **soldier_2;
        sfSprite **soldier_3;
        sfSprite **soldier_4;
        sfSprite **soldier_5;
        sfSprite **soldier_6;
        sfSprite **soldier_7;
        sfSprite **soldier_8;
        sfSprite **maps;
        sfSprite *lock;
        sfSprite *pause;
        sfSprite *castle_live;
        sfSprite *coin;
        sfSprite *money;
        sfSprite *levels;
        sfSprite *mainmenu;
        sfSprite *portada;
        sfSprite *settings;
        sfSprite *shop;
        sfSprite *trash;
        sfSprite *game_over;
        sfSprite *scoreboard;
        sfSprite *soldier_health;
        sfSprite *shine;
        sfSprite *lose;
        sfSprite *win;
        sfSprite *light_button;
        sfSprite *light_play;
        sfSprite *light_small;
        sfSprite *light_big;
        sfSprite *background_menu;
        sfSprite *selection_page;
        sfSprite *light_button2;
        sfSprite *light_upgrade;
        sfSprite *selection_map;
        sfSprite *pause_button;
        sfSprite *attack_area;
    } sprites_var;

    //STRUCT CLOCKS
    typedef struct s_clocks_var {
        sfClock *clock_coin;
        sfClock *clock_char;
        sfClock *clock_button;
        sfClock *clock_live;
        sfClock *clock_timeplaying;
        sfClock *clock_between_waves;
        sfClock *clock_check_damage;
        sfClock *clock_towers_sound;
        sfClock *clock_test;
        sfClock *clock_loading;
        sfTime time;
        sfTime time_playing;
        sfTime time_char;
        sfTime time_button;
        sfTime time_live;
        sfTime time_between_waves;
        sfTime time_check_damage;
        sfTime time_towers_sound;
        sfTime time_test;
        sfTime time_loading;
    } clocks_var;

    //STRUCT SOUNDS
    typedef struct s_sound_var {
        sfSound **towers_sounds;
        sfSound *money;
        sfSound *wrong;
        sfSound *sound_button;
        sfMusic *soldiers_steps;
        sfSound *upgrade;
        sfMusic *music_game;
        sfSoundBuffer *buffer;
    } sound_var;

    //STRUCT WINDOW
    typedef struct s_window_var {
        sfVideoMode video_mode;
        sfRenderWindow *window;
        sfEvent *event;
    } window_var;

    //STRUCT VECTORS
    typedef struct s_vectors_var {
        sfVector2f pos_origin;
        sfVector2f pos_tower_1_shop;
        sfVector2f pos_tower_2_shop;
        sfVector2f pos_tower_3_shop;
        sfVector2f pos_tower_4_shop;
        sfVector2f pos_text;
        sfVector2f pos_money;
        sfVector2f pos_character;
        sfVector2f pos_actual;
        sfVector2f velocity_character;
        sfIntRect select_coin;
        sfIntRect select_character;
        sfIntRect select_live;
        sfIntRect select_soldier_health;
        sfVector2f *shop_position;
        sfVector2f pos_tower_slot1;
        sfVector2f pos_tower_slot2;
        sfVector2f pos_tower_slot3;
        sfVector2f pos_tower_slot4;
        sfVector2f pos_tower_slot5;
        sfVector2f pos_tower_slot6;
        sfVector2f pos_tower_slot7;
        sfVector2f pos_tower_slot8;
        sfVector2f pos_tower_slot9;
        sfVector2f pos_tower_slot10;
    } vectors_var;

    //STRUCT TEXTS
    typedef struct s_texts_var {
        sfFont *font;
        sfText *text;
        sfText *text2;
        sfText *textmsg;
    } texts_var;

    //STRUCT VAR
    typedef struct s_var {
        int page;
        int prevpage;
        int sound_on;
        int prev_sound;
        int fps;
        int prev_fps;
        int level;
        int num_lives;
        int enemy_killed;
        int enemy_waves;
        int score;
        int money;
        int tower_type;
        int sound_steps;
        int num_towers_selected;
        int *towers;
        int map;
        int fd;
        int first_time;
        int maps_completed;
        char *player_name;
        int tutorial_page;
        char **names_scores;
    } t_var;

    //STRUCT INFO_SOLDIERS
    typedef struct s_info_soldiers {
        int soldier_type;
        int num_soldier;
        int full_live;
        int killed;
        int live;
        int damage;
        int path_step;
        sfVector2f pos_soldier;
        sfVector2f velocity_soldier;
        sfIntRect select_soldier_health;
        struct s_info_soldiers *prev;
        struct s_info_soldiers *next;
    } t_info_soldiers;

    //STRUCT INFO_TOWERS
    typedef struct s_info_slots {
        int num_slot;
        int show_upgrade;
        int type_tower;
        int level_tower;
        sfClock *clock;
        sfTime time;
        sfVector2f pos_slot;
        struct s_button *upgrade_button;
        struct s_info_slots *prev;
        struct s_info_slots *next;
    } t_info_slots;

    //STRUCT VAR PATH
    typedef struct s_var_path {
        int size_text;
        int num_words;
        int fd;
        char *arraytext;
        char *filepath;
        char **sentences;
    } t_var_path;

    //STRUCT VAR PATH
    typedef struct s_info_path {
        int x;
        int y;
        int direction;
        int num;
        struct s_info_path *next;
    } t_info_path;

    //STRUCT ALL
    typedef struct s_all_var {
        struct s_sound_var *sounds;
        struct s_sprites_var *sprites;
        struct s_vectors_var *vectors;
        struct s_clocks_var *clocks;
        struct s_window_var *windows;
        struct s_texts_var *texts;
        struct s_info_slots *slots;
        struct s_info_soldiers *soldiers;
        struct s_var *var;
        struct s_var_path *var_path;
        struct s_info_path *path;
    } all_var;

    //STRUCT BUTTONS
    typedef struct s_button {
        sfVector2i but;
        sfVector2i size;
    } new_button;

    //Function pointers for manage_pages
    typedef struct do_op {
        int op;
        void (*ptr)(all_var *all);
    } struct_pages;

#endif
