/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

t_info_path *ini_linked_path(int i, char *x, char *y, char *orientation)
{
    t_info_path *file = malloc(sizeof(t_info_path) * 1);
    file->x = my_getnbr(x);
    file->y = my_getnbr(y);
    file->direction = my_getnbr(orientation);
    file->num = i;
    file->next = NULL;
    return file;
}

void array_towers_zero(all_var *all)
{
    all->var->towers = malloc(sizeof(int) * 4);
    for (int i = 0; i < 4; i++)
        all->var->towers[i] = 0;
}
