/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

int all_enemies_dead_pass(all_var *all)
{
    int i = 0;
    t_info_soldiers *tmp = all->soldiers->next;

    while (i < all->var->enemy_waves) {
        if (tmp->live > 0) {
            return (0);
        }
        tmp = tmp->next;
        i++;
    }
    all->var->sound_steps = 0;
    sfClock_restart(all->clocks->clock_between_waves);
    return (1);
}

void set_num_soldiers2(all_var *all, t_info_soldiers *tmp,
int full_live, int i)
{
        if (i < all->var->enemy_waves)
            tmp->live = full_live;
        else
            tmp->live = 0;
}

void set_num_soldiers(all_var *all)
{
    int i = 0;
    int soldier_type = rand() % 3;
    int full_live = 100 * all->var->level;
    t_info_soldiers *tmp = all->soldiers->next;

    if (all->var->enemy_waves == 10) {
        soldier_type = 3;
        i = 9;
        full_live = 100 * all->var->level * 5;
    }
    while (tmp != NULL) {
        set_num_soldiers2(all, tmp, full_live, i);
        set_soldier(tmp, full_live, soldier_type);
        i++;
        tmp = tmp->next;
    }
    sfClock_restart(all->clocks->clock_between_waves);
}

void set_soldier(t_info_soldiers *tmp, int full_live, int soldier_type)
{
    tmp->full_live = full_live;
    tmp->soldier_type = soldier_type;
    tmp->killed = 0;
    tmp->pos_soldier = (sfVector2f) {0, 700};
    tmp->select_soldier_health = (sfIntRect) {0, 0, 450, 87};
    tmp->path_step = 0;
}
