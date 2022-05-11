/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

/*void create_file(all_var *all)
{
    char *temp = malloc(sizeof(char) * 2);
    char *all_scores = malloc(sizeof(char) * 1000);

    my_memset(all_scores, '\0', 1000);
    my_memset(temp, '\0', 2);
    while (read(all->var->fd, &temp, 1) != 0) {
        read(all->var->fd, &temp, 1);
        my_strcat(all_scores, temp);
    }
}*/

void save_score_board(all_var *all)
{
    char *temp = NULL;
    int fd = -1;

    if (all->var->first_time == 0) {
        temp = all->var->player_name;
        fd = open("./score_board", O_RDWR | O_APPEND | O_CREAT,
        0644);
        all->var->score = all->var->enemy_killed * all->var->enemy_waves
        / sfTime_asSeconds(all->clocks->time_playing) * 100;
        temp = my_strcat(temp, ":");
        temp = my_strcat(temp, my_return_char(all->var->score));
        temp = my_strcat(temp, "\n");
        write(fd, temp, my_strlen(temp));
        all->var->first_time = 1;
        close(fd);
    }
}

void game_over_page(all_var *all)
{
    new_button *exit_button = create_button(1265, 120, 95, 90);
    new_button *main = create_button(565, 745, 370, 170);
    new_button *play_again = create_button(1000, 745, 370, 170);

    sfMusic_pause(all->sounds->soldiers_steps);
    if (is_button_pressed2(exit_button, all, all->sprites->light_small,
    (sfVector2f){-200, -200}) == 2)
            close_game(all);
    else if (is_button_pressed2(main, all, all->sprites->light_small,
    (sfVector2f){-200, -200}) == 2) {
        all->var->page = 2;
        full_reset_game(all);
    } else if (is_button_pressed2(play_again, all, all->sprites->light_small,
    (sfVector2f){-200, -200}) == 2)
        all->var->page = 10;
    save_score_board(all);
}

void win_lose(all_var *all)
{
    sfSprite_setPosition(all->sprites->maps[all->var->map - 1],
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->maps[all->var->map - 1], NULL);
    sfSprite_setPosition(all->sprites->game_over, all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->game_over,
    NULL);
    if (all->var->num_lives > 0) {
        sfSprite_setPosition(all->sprites->win, (sfVector2f) {760, 240});
        sfRenderWindow_drawSprite(all->windows->window, all->sprites->win,
        NULL);
        all->var->maps_completed = 2;
    } else {
        sfSprite_setPosition(all->sprites->lose, (sfVector2f) {760, 240});
        sfRenderWindow_drawSprite(all->windows->window, all->sprites->lose,
        NULL);
    }
}

void print_game_over(all_var *all)
{
    win_lose(all);
    game_over_page(all);
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
    sfText_setString(all->texts->text2, my_return_char(sfTime_asSeconds(
    all->clocks->time_playing)));
    sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    sfRenderWindow_display(all->windows->window);
}
