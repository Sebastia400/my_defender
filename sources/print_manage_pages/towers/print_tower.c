/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void print_tower_in_slot(all_var *all, t_info_slots *tmp_slots)
{
    if (tmp_slots->type_tower > 0)
        print_tower_level(all, tmp_slots, get_towers(all,
        tmp_slots->type_tower)[tmp_slots->level_tower - 1]);
}

void write_tower_in_slot3(all_var *all, t_info_slots *tmp_slots, int type_tower)
{
    if (tmp_slots->type_tower == 0
    && all->var->money < all->var->tower_type * 100) {
        sfSound_play(all->sounds->wrong);
    }
}

void write_tower_in_slot2(all_var *all, t_info_slots *tmp_slots, int type_tower)
{
    if (tmp_slots->type_tower != 0)
        show_upgrade(tmp_slots);
    else if (tmp_slots->type_tower == 0
    && all->var->money >= all->var->tower_type * 100) {
        tmp_slots->type_tower = all->var->towers[type_tower - 1];
        sfSound_play(all->sounds->money);
        all->var->money -= all->var->tower_type * 100;
        all->var->tower_type = 0;
        sfClock_restart(all->clocks->clock_button);
    }
    write_tower_in_slot3(all, tmp_slots, type_tower);
}

void write_tower_in_slot(all_var *all, int num_slot, int type_tower)
{
    t_info_slots *tmp_slots = all->slots->next;

    while (tmp_slots->next != NULL) {
        if (tmp_slots->num_slot == num_slot) {
            write_tower_in_slot2(all, tmp_slots, type_tower);
        }
        tmp_slots = tmp_slots->next;
    }
}

void print_tower_in_mouse(all_var *all)
{
    sfVector2i mouse_posi =
    sfMouse_getPositionRenderWindow(all->windows->window);
    sfVector2f mouse_pos;
    int i = 0;

    mouse_pos.x = (float)mouse_posi.x - 75;
    mouse_pos.y = (float)mouse_posi.y - 75;

    if (all->var->tower_type != 0) {
        i = all->var->towers[all->var->tower_type - 1];
        sfSprite_setPosition(get_towers(all, i)[0], mouse_pos);
        sfRenderWindow_drawSprite(all->windows->window,
        get_towers(all, i)[0], NULL);
    }
}
