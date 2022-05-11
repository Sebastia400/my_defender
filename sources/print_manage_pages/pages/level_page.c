/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void page_levels2(all_var *all, new_button **levels, int i, int pos_y)
{
    if (is_button_pressed2(levels[i], all, all->sprites->light_button,
    (sfVector2f){660, pos_y}) == 2) {
        all->var->page = 9;
        all->var->level = i + 1;
    }
}

void page_levels(all_var *all)
{
    int pos_y = 190;
    new_button *levels[3];
    new_button *back_button = create_button(69, 27, 170, 130);

    levels[0] = create_button(690, 200, 500, 170);
    levels[1] = create_button(690, 460, 500, 170);
    levels[2] = create_button(690, 720, 500, 170);
    if (is_button_pressed2(back_button, all, all->sprites->light_small,
    (sfVector2f){67, 50}) == 2)
        all->var->page = 2;
    for (int i = 0; i < 3; i++) {
        page_levels2(all, levels, i, pos_y);
        pos_y += 255;
    }
}

void print_page_levels(all_var *all)
{
    sfSprite_setPosition(all->sprites->background_menu,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->background_menu, NULL);
    all->var->level = 0;
    all->var->map = 0;
    for (int i = 0; i < 4; i++)
        all->var->towers[i] = 0;
    all->var->num_towers_selected = 0;
    page_levels(all);
    sfSprite_setPosition(all->sprites->levels, all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->levels,
    NULL);
    sfRenderWindow_display(all->windows->window);
}
