/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void fill_flags2(struct_pages *flags)
{
    flags[9].ptr = &print_scoreboard;
    flags[10].op = 11;
    flags[10].ptr = &print_page_tutorial;
}

void fill_flags(struct_pages *flags)
{
    flags[0].op = 1;
    flags[0].ptr = &print_page_portada;
    flags[1].op = 2;
    flags[1].ptr = &print_page_mainmenu;
    flags[2].op = 3;
    flags[2].ptr = &print_page_settings;
    flags[3].op = 4;
    flags[3].ptr = &print_page_levels;
    flags[4].op = 5;
    flags[4].ptr = &print_page_game;
    flags[5].op = 6;
    flags[5].ptr = &print_game_over;
    flags[6].op = 7;
    flags[6].ptr = &print_selection_towers;
    flags[7].op = 8;
    flags[7].ptr = &print_pause;
    flags[8].op = 9;
    flags[8].ptr = &print_selection_maps;
    flags[9].op = 10;
    fill_flags2(flags);
}

void manage_pages(all_var *all)
{
    int i = 0;

    struct_pages flags[11];
    fill_flags(flags);
    while (i < 11) {
        if (all->var->page == flags[i].op)
            (*(flags[i].ptr))(all);
        i++;
    }
    all->var->prevpage = all->var->page;
}
