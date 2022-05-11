/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void soldier_steps(all_var *all)
{
    all->clocks->time_char = sfClock_getElapsedTime(all->clocks->clock_char);
    if (sfTime_asSeconds(all->clocks->time_char) > 0.05) {
        change_char(&all->vectors->select_character);
        sfClock_restart(all->clocks->clock_char);
    }
}

void print_soldier(all_var *all, t_info_soldiers *tmp, int direction)
{
    int i = tmp->soldier_type;

    sfSprite_setPosition(all->sprites->soldiers[i][direction],
    tmp->pos_soldier);
    sfSprite_move(all->sprites->soldiers[i][direction],
    tmp->velocity_soldier);
    tmp->pos_soldier = sfSprite_getPosition((all->sprites->soldiers[i]
    [direction]));
    sfSprite_setTextureRect(all->sprites->soldiers[i][direction],
    all->vectors->select_character);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->soldiers[i]
    [direction], NULL);
    print_soldier_health(all, tmp);
}

void print_char2(all_var *all, t_info_soldiers *tmp, sfVector2f final,
int maxspeed)
{
    if (final.x == -1 && final.y == -1 && tmp->live > 0) {
        change_live(&all->vectors->select_live);
        tmp->live = 0;
        all->var->num_lives--;
    } else
        tmp->velocity_soldier = get_direction(tmp->pos_soldier,
        final, maxspeed);
}

void print_char(all_var *all, t_info_soldiers *tmp)
{
    t_info_path *temp_path = all->path->next;
    sfVector2f final = get_final_point(temp_path, tmp);
    int maxspeed = get_max_speed(all->var->level);

    soldier_steps(all);
    if (tmp->pos_soldier.x <= final.x + 10 && tmp->pos_soldier.x >= final.x -
    10 && tmp->pos_soldier.y <= final.y + 10 && tmp->pos_soldier.y >= final.y
    - 10) {
        tmp->path_step++;
        final = get_final_point(temp_path, tmp);
        print_char2(all, tmp, final, maxspeed);
    }
    print_soldier(all, tmp, get_player_orientation(temp_path, tmp));
}

void print_soldier_manage(all_var *all)
{
    t_info_soldiers *tmp = all->soldiers->next;
    while (tmp->next != NULL) {
        if ((tmp->num_soldier == 0 || tmp->prev->pos_soldier.x >= 120)
        && tmp->live > 0) {
            print_char(all, tmp);
        }
        tmp = tmp->next;
    }
}
