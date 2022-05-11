/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void create_soldiers2(t_info_soldiers *tmp, t_info_soldiers *tmp2, int j)
{
    if (j == 0)
        tmp->prev = NULL;
    else
        tmp->prev = tmp2;
}

void create_soldiers(t_info_soldiers *file)
{
    t_info_soldiers *tmp = file;
    t_info_soldiers *tmp2 = file;
    int i = 0;
    int j = 0;

    while (tmp->next != NULL) {
        j++;
        tmp = tmp->next;
    }
    tmp->next = ini_linked_soldiers(j);
    while (i < j - 1) {
        tmp2 = tmp2->next;
        i++;
    }
    create_soldiers2(tmp, tmp2, j);
}

void create_slots(t_info_slots *file)
{
    t_info_slots *tmp = file;
    int i = 0;
    int j = 0;

    while (tmp->next != NULL) {
        j++;
        tmp = tmp->next;
    }
    tmp->next = ini_linked_slots(j);
}

void create_soldiers_and_slots(all_var *all)
{
    int i = 0;

    all->soldiers = init_struc_soldiers();
    while (i <= 10) {
        create_soldiers(all->soldiers);
        i++;
    }
    i = 0;
    all->slots = init_struc_slots();
    while (i <= 11) {
        create_slots(all->slots);
        i++;
    }
}
