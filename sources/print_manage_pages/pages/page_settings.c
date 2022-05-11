/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void create_setting_buttons(new_button **button, sfVector2f *vector)
{
    button[0] = create_button(69, 27, 170, 130);
    button[1] = create_button(930, 80, 170, 130);
    button[2] = create_button(1220, 80, 170, 130);
    button[3] = create_button(920, 400, 170, 130);
    button[4] = create_button(1220, 400, 170, 130);
    button[5] = create_button(1500, 400, 170, 130);
    button[6] = create_button(930, 700, 170, 130);
    button[7] = create_button(1220, 700, 170, 130);
    vector[0] = (sfVector2f){67, 50};
    vector[1] = (sfVector2f){915, 125};
    vector[2] = (sfVector2f){1205, 125};
    vector[3] = (sfVector2f){912, 445};
    vector[4] = (sfVector2f){1202, 445};
    vector[5] = (sfVector2f){1485, 445};
    vector[6] = (sfVector2f){917, 745};
    vector[7] = (sfVector2f){1205, 745};
}

void page_settings3(all_var *all, new_button **button, sfVector2f *vector)
{
    if (is_button_pressed2(button[4], all, all->sprites->light_small,
    vector[4]) == 2) {
        all->var->fps = 60;
    } else if (is_button_pressed2(button[5], all, all->sprites->light_small,
    vector[5]) == 2)
        all->var->fps = 120;

}

void page_settings2(all_var *all, new_button **button, sfVector2f *vector)
{
    if (is_button_pressed2(button[2], all, all->sprites->light_small,
    vector[2]) == 2)
        all->var->sound_on = 1;
    else if (is_button_pressed2(button[3], all, all->sprites->light_small,
    vector[3]) == 2) {
        all->var->fps = 30;
    }
    page_settings3(all, button, vector);
}

void page_settings(all_var *all)
{
    new_button *button[8];
    sfVector2f vector[8];

    create_setting_buttons(button, vector);
    if (is_button_pressed2(button[0], all, all->sprites->light_small,
    vector[0]) == 2) {
        all->var->page = 2;
    } else if (is_button_pressed2(button[1], all, all->sprites->light_small,
    vector[1]) == 2) {
        all->var->sound_on = 0;
    }
    page_settings2(all, button, vector);
}

void print_page_settings(all_var *all)
{
    sfSprite_setPosition(all->sprites->background_menu,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->background_menu, NULL);
    page_settings(all);
    sfSprite_setPosition(all->sprites->settings,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->settings, NULL);
    func_sound(all);
    sfRenderWindow_setFramerateLimit(all->windows->window, all->var->fps);
    func_fps(all);
    sfRenderWindow_display(all->windows->window);
}
