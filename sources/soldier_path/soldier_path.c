/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void create_path(all_var *all, t_info_path *file, int i)
{
    t_info_path *tmp = file;
    int j = 0;

    while (tmp->next != NULL) {
        j++;
        tmp = tmp->next;
    }
    tmp->next = ini_linked_path(j, all->var_path->sentences[i],
    all->var_path->sentences[i + 1], all->var_path->sentences[i + 2]);
}

void get_soldier_path(all_var *all)
{
    int i = 0;

    if (all->var->map != 0) {
        save_cordinates(all);
        i = 0;
        all->path = init_struc_path();
        while (all->var_path->sentences[i] != NULL) {
            create_path(all, all->path, i);
            i += 3;
        }
        all->var->page = 7;
    }
}

void save_cordinates(all_var *all)
{
    int i = 0;
    int j = 0;

    all->var_path->filepath = "./maps_path/";
    all->var_path->filepath = my_strcat(all->var_path->filepath,
    my_return_char(all->var->map));
    if (fs_open_file(all->var_path->filepath) != 84) {
        all->var_path->fd = open(all->var_path->filepath, O_RDONLY);
        all->var_path->arraytext = save_text(all->var_path->fd,
        all->var_path->filepath);
        all->var_path->sentences = save_word(all->var_path->arraytext, ',',
        all->var_path->filepath);
    }
}
