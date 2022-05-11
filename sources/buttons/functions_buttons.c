/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

int is_button_pressed(new_button *button, all_var *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->windows->window);

    all->clocks->time_button = sfClock_getElapsedTime(
    all->clocks->clock_button);
    if ((mouse.x > button->but.x && mouse.x < (button->but.x
    + button->size.x)) && (mouse.y > button->but.y && mouse.y
    < (button->but.y + button->size.y))) {
        return (1);
    }
    return (0);
}

int is_button_pressed2(new_button *button, all_var *all, sfSprite *sprite,
sfVector2f vector)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->windows->window);
    int i = 0;

    all->clocks->time_button = sfClock_getElapsedTime(
    all->clocks->clock_button);
    if ((mouse.x > button->but.x && mouse.x < (button->but.x + button->size.x))
    && (mouse.y > button->but.y && mouse.y < (button->but.y +
    button->size.y))) {
        sfSprite_setPosition(sprite, vector);
        sfRenderWindow_drawSprite(all->windows->window, sprite, NULL);
        if (all->windows->event->type == sfEvtMouseButtonPressed &&
        sfTime_asSeconds(all->clocks->time_button) > 0.3) {
            sfSound_play(all->sounds->sound_button);
            sfClock_restart(all->clocks->clock_button);
            return (2);
        }
        return (1);
    }
    return (0);
}

new_button *create_button(int x, int y, int size_x, int size_y)
{
    new_button *temp = malloc(sizeof(new_button));

    temp->but = (sfVector2i){x, y};
    temp->size = (sfVector2i){size_x, size_y};
    return (temp);
}
