/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void print_upgrade(all_var *all, int num_slot)
{
    sfVector2f pos = get_pos_slot(all->var->map, num_slot);
    int tower_type = get_tower_type(all, num_slot) - 1;

    all->clocks->time_button =
    sfClock_getElapsedTime(all->clocks->clock_button);
    upgrade_buttons(all, num_slot);
    sfSprite_setPosition(get_upg_tower(all, tower_type), pos);
    sfRenderWindow_drawSprite(all->windows->window,
    get_upg_tower(all, tower_type), NULL);
}

void print_no_upgrade(all_var *all, int num_slot)
{
    sfVector2f pos = get_pos_slot(all->var->map, num_slot);
    int tower_type = get_tower_type(all, num_slot);
    if (get_tower_type(all, num_slot) != 0) {
        sfSprite_setPosition(all->sprites->no_upgrades, pos);
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->no_upgrades, NULL);
    }
}

void print_tower_ext(all_var *all, t_info_slots *tmp_slots)
{
    if (tmp_slots->show_upgrade == 1 && tmp_slots->level_tower < 3)
        print_upgrade(all, tmp_slots->num_slot);
    else if (tmp_slots->show_upgrade == 1)
        print_no_upgrade(all, tmp_slots->num_slot);
}

void print_tower_1_5(all_var *all)
{
    t_info_slots *tmp_slots = all->slots->next;
    while (tmp_slots->next != NULL) {
        if (tmp_slots->num_slot >= 1 && tmp_slots->num_slot <= 5) {
            print_tower_in_slot(all, tmp_slots);
            print_tower_ext(all, tmp_slots);
            print_level(all, tmp_slots);
        }
        tmp_slots = tmp_slots->next;
    }
}

void print_tower_6_10(all_var *all)
{
    t_info_slots *tmp_slots = all->slots->next;

    while (tmp_slots->next != NULL) {
        if (tmp_slots->num_slot >= 6 && tmp_slots->num_slot <= 10) {
            print_tower_in_slot(all, tmp_slots);
            print_tower_ext(all, tmp_slots);
            print_level(all, tmp_slots);
        }
        tmp_slots = tmp_slots->next;
    }
}
