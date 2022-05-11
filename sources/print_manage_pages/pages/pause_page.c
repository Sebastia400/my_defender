/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void pause_page3(all_var *all, new_button *exit_button,
new_button *main, new_button *play_again)
{
    if (is_button_pressed(play_again, all) == 1) {
        all->var->page = 5;
    }
    sfClock_restart(all->clocks->clock_button);
}

void pause_page2(all_var *all, new_button *exit_button,
new_button *main, new_button *play_again)
{
    if (is_button_pressed(exit_button, all) == 1) {
        close_game(all);
    } else if (is_button_pressed(main, all) == 1) {
        all->var->page = 2;
        full_reset_game(all);
    }
    pause_page3(all, exit_button, main, play_again);
}

void pause_page(all_var *all)
{
    new_button *exit_button = create_button(1165, 80, 95, 90);
    new_button *main = create_button(565, 745, 370, 170);
    new_button *play_again = create_button(1000, 745, 370, 170);

    sfSprite_setPosition(all->sprites->pause, all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->pause, NULL);
    sfMusic_pause(all->sounds->soldiers_steps);
    all->clocks->time_button =
    sfClock_getElapsedTime(all->clocks->clock_button);
    if (all->windows->event->type == sfEvtMouseButtonPressed
    && sfTime_asSeconds(all->clocks->time_button) > 1) {
        pause_page2(all, exit_button, main, play_again);
    }
    all->clocks->time_button =
    sfClock_getElapsedTime(all->clocks->clock_button);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue &&
    sfTime_asSeconds(all->clocks->time_button) > 0.5) {
        all->var->page = 5;
        sfClock_restart(all->clocks->clock_button);
    }
}

void print_pause(all_var *all)
{
    sfSprite_setPosition(all->sprites->maps[all->var->map - 1],
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->maps[all->var->map - 1], NULL);
    pause_page(all);
    sfText_setCharacterSize(all->texts->text2, 70);
    sfText_setColor(all->texts->text2, sfColor_fromRGB(255, 255, 255));
    sfText_setPosition(all->texts->text2, (sfVector2f) {1100, 360});
    sfText_setString(all->texts->text2,
    my_return_char(all->var->enemy_killed));
    sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    sfText_setPosition(all->texts->text2, (sfVector2f) {1100, 480});
    sfText_setString(all->texts->text2,
    my_return_char(all->var->enemy_waves - 1));
    sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    sfText_setPosition(all->texts->text2, (sfVector2f) {1100, 615});
    sfText_setString(all->texts->text2, my_return_char(
    sfTime_asSeconds(all->clocks->time_playing)));
    sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    sfRenderWindow_display(all->windows->window);
}
