/*
** EPITECH PROJECT, 2021
** sebastia and victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"

void sound_off_button_func(all_var *all, new_button *button)
{
    if (is_button_pressed(button, all) == 1) {
        sfSprite_setPosition(all->sprites->light_small,
        (sfVector2f){915, 125});
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->light_small, NULL);
        if (all->windows->event->type == sfEvtMouseButtonPressed
        && sfTime_asSeconds(all->clocks->time_button) > 0.4) {
            all->var->sound_on = 0;
            sfClock_restart(all->clocks->clock_button);
        }
    }
}

void sound_on_button_func(all_var *all, new_button *button)
{
    if (is_button_pressed(button, all) == 1) {
        sfSprite_setPosition(all->sprites->light_small,
        (sfVector2f){1205, 125});
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->light_small, NULL);
        if (all->windows->event->type == sfEvtMouseButtonPressed
        && sfTime_asSeconds(all->clocks->time_button) > 0.4) {
            all->var->sound_on = 1;
            sfClock_restart(all->clocks->clock_button);
        }
    }
}

void button1_frames_func(all_var *all, new_button *button)
{
    if (is_button_pressed(button, all) == 1) {
        sfSprite_setPosition(all->sprites->light_small,
        (sfVector2f){912, 445});
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->light_small, NULL);
        if (all->windows->event->type == sfEvtMouseButtonPressed
        && sfTime_asSeconds(all->clocks->time_button) > 0.4) {
            all->var->fps = 30;
            sfClock_restart(all->clocks->clock_button);
        }
    }
}

void button2_frames_func(all_var *all, new_button *button)
{
    if (is_button_pressed(button, all) == 1) {
        sfSprite_setPosition(all->sprites->light_small,
        (sfVector2f){1202, 445});
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->light_small, NULL);
        if (all->windows->event->type == sfEvtMouseButtonPressed
        && sfTime_asSeconds(all->clocks->time_button) > 0.4) {
            all->var->fps = 60;
            sfClock_restart(all->clocks->clock_button);
        }
    }
}

void button3_frames_func(all_var *all, new_button *button)
{
    if (is_button_pressed(button, all) == 1) {
        sfSprite_setPosition(all->sprites->light_small,
        (sfVector2f){1485, 445});
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->light_small, NULL);
        if (all->windows->event->type == sfEvtMouseButtonPressed
        && sfTime_asSeconds(all->clocks->time_button) > 0.4) {
            all->var->fps = 120;
            sfClock_restart(all->clocks->clock_button);
        }
    }
}
