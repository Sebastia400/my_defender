/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void print_wave(all_var *all)
{
    sfText_setColor(all->texts->text, sfColor_fromRGB(255, 255, 255));
    sfText_setCharacterSize(all->texts->text2, 60);
    sfText_setPosition(all->texts->text, (sfVector2f) {150, 900});
    sfText_setString(all->texts->text, "WAVES:");
    sfRenderWindow_drawText(all->windows->window, all->texts->text, NULL);
    sfText_setCharacterSize(all->texts->text, 70);
    sfText_setPosition(all->texts->text, (sfVector2f) {170, 950});
    sfText_setString(all->texts->text,
    my_return_char(all->var->enemy_waves - 1));
    sfRenderWindow_drawText(all->windows->window, all->texts->text, NULL);
    sfText_setPosition(all->texts->text, (sfVector2f) {200, 950});
    sfText_setString(all->texts->text, "/10");
    sfRenderWindow_drawText(all->windows->window, all->texts->text, NULL);
}

void print_page_game3(all_var *all)
{
    if (sfTime_asSeconds(all->clocks->time_check_damage) > 0.6) {
        kill_enemies(all);
        sfClock_restart(all->clocks->clock_check_damage);
    }
    print_castle_live(all);
    print_tower_in_mouse(all);
    pause_button(all);
    sfRenderWindow_display(all->windows->window);
}

void print_page_game2(all_var *all)
{
    if (all->var->enemy_waves <= 10 && all_enemies_dead_pass(all) != 0) {
        set_num_soldiers(all);
        all->var->enemy_waves++;
    }
    print_attack_area(all);
    print_wave(all);
    sound_steps(all);
    print_shop(all);
    slots_buttons(all);
    delete_selection(all);
    print_tower_1_5(all);
    print_soldier_manage(all);
    print_tower_6_10(all);
    all->clocks->time_check_damage =
    sfClock_getElapsedTime(all->clocks->clock_check_damage);
    print_page_game3(all);
}

void print_page_game(all_var *all)
{
    all->clocks->time_button =
    sfClock_getElapsedTime(all->clocks->clock_button);
    if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue &&
    sfTime_asSeconds(all->clocks->time_button) > 0.5) {
        all->var->page = 8;
        sfClock_restart(all->clocks->clock_button);
    }
    all->clocks->time_playing =
    sfClock_getElapsedTime(all->clocks->clock_timeplaying);
    all->clocks->time_between_waves =
    sfClock_getElapsedTime(all->clocks->clock_between_waves);
    sfSprite_setPosition(all->sprites->maps[all->var->map - 1],
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->maps[all->var->map - 1], NULL);
    if (all->var->enemy_waves > 10 && all_enemies_dead_pass(all)
    != 0 || all->var->num_lives == 0)
        all->var->page = 6;
    print_page_game2(all);
}
