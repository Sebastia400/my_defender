/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void sound_steps(all_var *all)
{
    if (all_enemies_dead_pass(all) == 0
    && all->var->sound_steps == 0 && all->var->sound_on == 1) {
        sfMusic_play(all->sounds->soldiers_steps);
        all->var->sound_steps = 1;
    } else if (all_enemies_dead_pass(all) != 0
    && all->var->sound_steps == 1 || all->var->sound_on == 0)
        sfMusic_pause(all->sounds->soldiers_steps);
}

void play_sound_tower(all_var *all, t_info_slots *tmp_slots)
{
    all->clocks->time_towers_sound =
    sfClock_getElapsedTime(all->clocks->clock_towers_sound);
    if (all->var->sound_on == 1 &&
    sfTime_asSeconds(all->clocks->time_towers_sound) > 0.8) {
        sfSound_play(all->sounds->towers_sounds[tmp_slots->type_tower - 1]);
        sfClock_restart(all->clocks->clock_towers_sound);
    }
}
