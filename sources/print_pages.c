/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"

void print_attack_area2(all_var *all, t_info_slots *tmp_slots,
t_info_soldiers *tmp_soldiers)
{
    if (inside_tower_area(tmp_slots->pos_slot,
    tmp_soldiers->pos_soldier)) {
        sfSprite_setPosition(all->sprites->attack_area,(sfVector2f){
        tmp_slots->pos_slot.x - 150, tmp_slots->pos_slot.y - 90});
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->attack_area, NULL);
        play_sound_tower(all, tmp_slots);
    }
}

void print_attack_area(all_var *all)
{
    t_info_slots *tmp_slots = all->slots;
    t_info_soldiers *tmp_soldiers;

    while (tmp_slots != NULL) {
        tmp_soldiers = all->soldiers->next;
        while (tmp_slots->type_tower != 0 && tmp_soldiers != NULL) {
            print_attack_area2(all, tmp_slots, tmp_soldiers);
            tmp_soldiers = tmp_soldiers->next;
        }
        tmp_slots = tmp_slots->next;
    }
}

void delete_selection(all_var *all)
{
    new_button *trash_button = create_button(1500, 40, 100, 100);
    sfVector2f pos = (sfVector2f){1500, 120};

    sfSprite_setPosition(all->sprites->trash, pos);
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->trash, NULL);
    if (all->windows->event->type == sfEvtMouseButtonPressed
    && is_button_pressed(trash_button, all)) {
        all->var->tower_type = 0;
    }
}

void pause_button(all_var *all)
{
    int i = 0;
    new_button *pause = create_button(1670, 50, 100, 100);

    if (is_button_pressed2(pause, all, all->sprites->shine,
    (sfVector2f){1580, 50}) == 2)
        all->var->page = 8;
    sfSprite_setPosition(all->sprites->pause_button, (sfVector2f){1700, 100});
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->pause_button, NULL);
}
