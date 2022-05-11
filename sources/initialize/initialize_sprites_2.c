/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void ini_struct_sprites_7(all_var *all)
{
    all->sprites->attack_area = create_attack_area();
    all->sprites->scoreboard = create_scoreboard();
    all->sprites->tutorial = malloc(sizeof(sfSprite *) * 8);
    all->sprites->tutorial[0] = create_tutorial_1();
    all->sprites->tutorial[1] = create_tutorial_2();
    all->sprites->tutorial[2] = create_tutorial_3();
    all->sprites->tutorial[3] = create_tutorial_4();
    all->sprites->tutorial[4] = create_tutorial_5();
    all->sprites->tutorial[5] = create_tutorial_6();
    all->sprites->tutorial[6] = create_tutorial_7();
    all->sprites->tutorial[7] = create_tutorial_8();
}

void ini_struct_sprites_6(all_var  *all)
{
    all->sprites->shine = create_shine();
    all->sprites->game_over = create_game_over();
    all->sprites->lose = create_lose();
    all->sprites->win = create_win();
    all->sprites->lock = create_lock();
    all->sprites->pause_button = create_pause_button();
    all->sprites->light_button = create_light_button();
    all->sprites->light_play = create_light_play();
    all->sprites->light_small = create_light_small();
    all->sprites->background_menu = create_background_menu();
    all->sprites->selection_page = create_selection_page();
    all->sprites->light_button2 = create_light_button2();
    all->sprites->light_upgrade = create_light_upgrade();
    all->sprites->no_upgrades = create_no_upgrades();
    all->sprites->pause = create_pause();
    all->sprites->shop = create_shop();
    all->sprites->light_big = create_light_big();
    all->sprites->selection_map = create_selection_map();
    all->sprites->trash = create_trash();
    ini_struct_sprites_7(all);
}
