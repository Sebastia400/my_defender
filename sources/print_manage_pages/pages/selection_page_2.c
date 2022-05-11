/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void print_selection_maps(all_var *all)
{
    sfSprite_setPosition(all->sprites->background_menu,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->background_menu, NULL);
    page_selection_maps(all);
    sfSprite_setPosition(all->sprites->selection_map,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->selection_map, NULL);
    if (all->var->maps_completed == 1)
            print_lock(all, (sfVector2f){695, 275});
    sfRenderWindow_display(all->windows->window);
}

void print_lock(all_var *all, sfVector2f vector)
{
    sfSprite_setPosition(all->sprites->lock, vector);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->lock, NULL);
}
