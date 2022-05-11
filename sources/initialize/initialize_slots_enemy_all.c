/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

all_var *init_var_all(void)
{
    all_var *all = malloc(sizeof(all_var));
    all->sounds = malloc(sizeof(sound_var));
    all->vectors = malloc(sizeof(vectors_var));
    all->clocks = malloc(sizeof(clocks_var));
    all->sprites = malloc(sizeof(sprites_var));
    all->windows = malloc(sizeof(window_var));
    all->windows->event = malloc(sizeof(sfEvent));
    all->windows->event->type = -1;
    all->texts = malloc(sizeof(texts_var));
    all->slots = malloc(sizeof(t_info_slots));
    all->soldiers = malloc(sizeof(t_info_soldiers));
    all->var_path = malloc(sizeof(t_var_path));
    all->path = malloc(sizeof(t_info_path));
    all->var = malloc(sizeof(t_var));
    return all;
}

t_info_slots *init_struc_slots(void)
{
    t_info_slots *res = malloc(sizeof(t_info_slots));
    res->next = NULL;
    return res;
}

t_info_slots *ini_linked_slots(int i)
{
    t_info_slots *file = malloc(sizeof(t_info_slots) * 1);

    file->prev = NULL;
    file->show_upgrade = 0;
    file->num_slot = i;
    file->type_tower = 0;
    file->clock = sfClock_create();
    file->level_tower = 1;
    file->pos_slot = get_pos_slot(1, i);
    file->upgrade_button = create_button(file->pos_slot.x, file->pos_slot.y,
    140, 90);
    file->next = NULL;
    return file;
}

t_info_soldiers *init_struc_soldiers(void)
{
    t_info_soldiers *res = malloc(sizeof(t_info_soldiers));
    res->next = NULL;
    return res;
}

t_info_soldiers *ini_linked_soldiers(int i)
{
    t_info_soldiers *file = malloc(sizeof(t_info_soldiers) * 1);

    file->prev = NULL;
    file->full_live = 0;
    file->soldier_type = 0;
    file->num_soldier = i;
    file->live = 0;
    file->damage = 0;
    file->select_soldier_health = (sfIntRect) {0, 0, 450, 80};
    file->pos_soldier = (sfVector2f) {0, 700};
    file->velocity_soldier;
    file->next = NULL;
    return file;
}
