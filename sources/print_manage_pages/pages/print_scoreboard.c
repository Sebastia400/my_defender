/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void get_score_boards(all_var *all)
{
    char **info = NULL;
    char *text = NULL;

    all->var->fd = open("./score_board", O_RDWR | O_APPEND | O_CREAT, 0644);
    text = save_text(all->var->fd, "./score_board");
    all->var->names_scores = save_word(text, ':', "./score_board");
    close(all->var->fd);
}

void scoreboard_page(all_var *all)
{
    new_button *exit_button = create_button(1265, 120, 95, 90);
    new_button *main = create_button(565, 745, 370, 170);
    new_button *play_again = create_button(1000, 745, 370, 170);

    sfMusic_pause(all->sounds->soldiers_steps);
    if (is_button_pressed2(exit_button, all, all->sprites->light_small,
    (sfVector2f){-200, -200}) == 2) {
        close(all->var->fd);
        sfRenderWindow_close(all->windows-> window);
    } else if (is_button_pressed2(main, all, all->sprites->light_small,
    (sfVector2f){-200, -200}) == 2) {
        all->var->page = 2;
        full_reset_game(all);
    } else if (is_button_pressed2(play_again, all, all->sprites->light_small,
    (sfVector2f){-200, -200}) == 2) {
        all->var->page = 5;
        reset_game(all);
    }
    get_score_boards(all);
}

sfVector2f *create_board_pos(void)
{
    sfVector2f *temp = malloc(sizeof(sfVector2f) * 6);

    temp[0] = (sfVector2f) {630, 350};
    temp[1] = (sfVector2f) {1000, 350};
    temp[2] = (sfVector2f) {630, 470};
    temp[3] = (sfVector2f) {1000, 470};
    temp[4] = (sfVector2f) {630, 605};
    temp[5] = (sfVector2f) {1000, 605};
    return (temp);
}

void print_scoreboard(all_var *all)
{
    int i = 0;
    sfVector2f *pos = create_board_pos();

    sfSprite_setPosition(all->sprites->maps[all->var->map - 1], all->vectors->
    pos_origin);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->maps[all->
    var->map - 1], NULL);
    scoreboard_page(all);
    sfSprite_setPosition(all->sprites->scoreboard, all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->scoreboard,
    NULL);
    sfText_setCharacterSize(all->texts->text2, 70);
    sfText_setColor(all->texts->text2, sfColor_fromRGB(255, 255, 255));
    while (i < 6 && all->var->names_scores[i] != NULL) {
        sfText_setPosition(all->texts->text2, pos[i]);
        sfText_setString(all->texts->text2, all->var->names_scores[i++]);
        sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
    }
    sfRenderWindow_display(all->windows->window);
}
