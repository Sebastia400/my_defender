/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"

void analayse_events(all_var *all, int page)
{
    while (sfRenderWindow_pollEvent(all->windows->window,
    all->windows->event)) {
        if (all->windows->event->type == sfEvtClosed) {
            close(all->var->fd);
            sfRenderWindow_close(all->windows-> window);
        }
    }
}

void close_game(all_var *all)
{
    close(all->var->fd);
    sfRenderWindow_close(all->windows->window);
    sfMusic_destroy(all->sounds->music_game);
    sfMusic_destroy(all->sounds->soldiers_steps);
    sfRenderWindow_destroy(all->windows->window);
}

sfRenderWindow *my_window(all_var *all)
{
    srand(0);
    int ini = 0;

    while (sfRenderWindow_isOpen(all->windows->window)) {
        all->clocks->time_loading =
        sfClock_getElapsedTime(all->clocks->clock_loading);
        if (sfTime_asSeconds(all->clocks->time_loading) < 3) {
            print_page_charge(all);
            ini_all_start(all, ini);
            ini++;
        } else {
            sfRenderWindow_clear(all->windows->window, sfBlack);
            sfRenderWindow_setFramerateLimit(all->windows->window, 30);
            manage_pages(all);
        }
        analayse_events(all, 0);
    }
}

void my_defender(void)
{
    int i = 0;
    int j = 0;
    all_var *all = init_var_all();
    sfVideoMode video_mode;
    sfRenderWindow *window;
    all->windows->video_mode = (sfVideoMode){1920, 1080, 64};
    all->windows->window = sfRenderWindow_create(all->windows->video_mode,
    "My-Defender_GAME", sfDefaultStyle, NULL);
    all->clocks->clock_loading = sfClock_create();
    create_soldiers_and_slots(all);
    ini_struc_var(all);
    all->var->tutorial_page = 0;
    my_window(all);
    close_game(all);
}

int main(int argc, char **argv)
{
    my_defender();
    return 0;
}
