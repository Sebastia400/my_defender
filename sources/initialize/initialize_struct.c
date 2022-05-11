/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void reset_game(all_var *all)
{
    t_info_slots *tmp = all->slots->next;

    while (tmp != NULL) {
        tmp->type_tower = 0;
        tmp->level_tower = 1;
        tmp->show_upgrade = 0;
        tmp = tmp->next;
    }
    all->var->enemy_waves = 1;
    all->var->num_lives = 5;
    all->var->money = 1000;
    all->var->score = 0;
    all->var->enemy_killed = 0;
    all->var->first_time = 0;
    all->vectors->select_live = (sfIntRect) {0, 10, 200, 30};
    sfClock_restart(all->clocks->clock_timeplaying);
}

void full_reset_game(all_var *all)
{
    t_info_soldiers *tmp_soldiers = all->soldiers->next;
    while (tmp_soldiers != NULL) {
        tmp_soldiers->path_step = 0;
        tmp_soldiers->live = 0;
        tmp_soldiers = tmp_soldiers->next;
    }
    reset_game(all);
    sfClock_restart(all->clocks->clock_timeplaying);
}

void ini_struc_var(all_var *all)
{
    all->var->enemy_waves = 1;
    all->var->num_lives = 5;
    all->var->money = 1000;
    all->var->score = 0;
    all->var->page = 1;
    all->var->sound_on = 1;
    all->var->enemy_killed = 0;
    all->var->prev_sound = 1;
    all->var->level = 0;
    all->var->sound_steps = 0;
    all->var->map = 1;
    all->var->maps_completed = 2;
    all->var->num_towers_selected = 0;
    all->var->prev_fps = 60;
    all->var->fps = 60;
    array_towers_zero(all);
    all->var->player_name = my_strdup("");
    all->var->fd = -1;
    all->var->map = 0;
    all->var->first_time = 0;
}

void change_map_in_linked(all_var *all)
{
    t_info_slots *tmp = all->slots->next;

    while (tmp != NULL) {
        tmp->pos_slot = get_pos_slot(all->var->map, tmp->num_slot);
        tmp->upgrade_button = create_button(tmp->pos_slot.x, tmp->pos_slot.y,
    140, 90);
        tmp = tmp->next;
    }
}

t_info_path *init_struc_path(void)
{
    t_info_path *res = malloc(sizeof(t_info_path));
    res->next = NULL;
    return res;
}
