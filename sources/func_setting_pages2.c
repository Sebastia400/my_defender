/*
** EPITECH PROJECT, 2021
** sebastia and victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"

void back_button_func(all_var *all, new_button *button)
{
    if (is_button_pressed(button, all) == 1) {
        sfSprite_setPosition(all->sprites->light_small,
        (sfVector2f){67, 50});
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->light_small, NULL);
        if (all->windows->event->type == sfEvtMouseButtonPressed
        && sfTime_asSeconds(all->clocks->time_button) > 0.4) {
            all->var->page = 2;
            sfClock_restart(all->clocks->clock_button);
        }
    }
}
