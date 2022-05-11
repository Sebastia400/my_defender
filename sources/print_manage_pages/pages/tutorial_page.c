/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void page_tutorial(all_var *all, int i)
{
    new_button *next = create_button(1470, 855, 400, 125);
    new_button *back = create_button(50, 855, 400, 125);
    new_button *exit = create_button(55, 30, 175, 115);

    if (is_button_pressed2(next, all, all->sprites->light_big,
    (sfVector2f){600, 650}) == 2 && i <= 6)
        all->var->tutorial_page++;
    if (is_button_pressed2(back, all, all->sprites->light_big,
    (sfVector2f){600, 650}) == 2 && i > 0)
        all->var->tutorial_page--;
    if (is_button_pressed2(exit, all, all->sprites->light_big,
    (sfVector2f){600, 650}) == 2)
        all->var->page = 2;
}

void print_page_tutorial(all_var *all)
{
    int i = all->var->tutorial_page;

    page_tutorial(all, i);
    sfSprite_setPosition(all->sprites->tutorial[i], all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->tutorial[i],
    NULL);
    sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    sfRenderWindow_display(all->windows->window);
}
