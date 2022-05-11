/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void page_portada(all_var *all)
{
    new_button *play_button = create_button(600, 650, 670, 270);

    all->clocks->time_button =
    sfClock_getElapsedTime(all->clocks->clock_button);
    if (sfTime_asSeconds(all->clocks->time_button) > 0.08) {
        get_player_name(all);
        sfClock_restart(all->clocks->clock_button);
    }
    if (all->windows->event->type == sfEvtMouseButtonPressed &&
    is_button_pressed(play_button, all) == 1
    && my_strlen(all->var->player_name) > 2) {
        sfClock_restart(all->clocks->clock_button);
        all->var->page = 2;
    }
}

void print_page_portada(all_var *all)
{
    page_portada(all);
    sfSprite_setPosition(all->sprites->portada, all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->portada,
    NULL);
    sfText_setCharacterSize(all->texts->text2, 70);
    sfText_setColor(all->texts->text2, sfColor_fromRGB(255, 255, 255));
    if (my_strlen(all->var->player_name) == 0) {
        sfText_setPosition(all->texts->text2, (sfVector2f) {700, 550});
        sfText_setString(all->texts->text2, "Introduce your name");
    } else {
        sfText_setPosition(all->texts->text2, (sfVector2f) {890, 550});
        sfText_setString(all->texts->text2, all->var->player_name);
    }
    sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    sfText_setCharacterSize(all->texts->text2, 70);
    sfText_setColor(all->texts->text2, sfColor_fromRGB(255, 255, 255));
    sfText_setPosition(all->texts->text2, (sfVector2f) {475, 550});
    sfText_setString(all->texts->text2, "Player:");
    sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    sfRenderWindow_display(all->windows->window);
}

void print_page_charge(all_var *all)
{
    sfSprite_setPosition(create_loading(), (sfVector2f){0, 0});
    sfRenderWindow_drawSprite(all->windows->window,
    create_loading(), NULL);
    sfRenderWindow_display(all->windows->window);
}
