/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

sfSprite **get_reaction_mainmenu(all_var *all)
{
    sfSprite **reaction = malloc(sizeof(sfSprite *) * 5);
    reaction[0] = all->sprites->light_small;
    reaction[1] = all->sprites->light_small;
    reaction[2] = all->sprites->light_button;
    reaction[3] = all->sprites->light_button;
    reaction[4] = all->sprites->light_play;
    return (reaction);
}

void page_mainmenu2(all_var * all, int i, int *pages)
{
    if (i == 4 && all->var->level == 0)
        all->var->page = 4;
    else if (i == 2)
        all->var->page = 11;
    else
        all->var->page = pages[i];
}

void page_mainmenu(all_var *all)
{
    int pages[5];
    pages[0] = 1;
    pages[1] = 3;
    pages[2] = 4;
    pages[3] = 4;
    pages[4] = 5;

    all->clocks->time_button =
    sfClock_getElapsedTime(all->clocks->clock_button);
    for (int i = 0; i < 5; i++) {
        if (is_button_pressed2(get_mainmenu_buttons()[i], all,
        get_reaction_mainmenu(all)[i], get_mainmenu_positions()[i]) == 2) {
            page_mainmenu2(all, i, pages);
        }
    }
}

void print_page_mainmenu(all_var *all)
{
    sfSprite_setPosition(all->sprites->background_menu,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->background_menu, NULL);
    page_mainmenu(all);
    sfSprite_setPosition(all->sprites->mainmenu, all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->mainmenu, NULL);
    sfRenderWindow_display(all->windows->window);
}
