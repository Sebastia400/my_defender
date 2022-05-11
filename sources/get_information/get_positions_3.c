/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

sfVector2f get_final_point(t_info_path *temp_path, t_info_soldiers *tmp)
{
    while (temp_path->num != tmp->path_step && temp_path->next != NULL)
        temp_path = temp_path->next;
    sfVector2f final;
    final.x = temp_path->x;
    final.y = temp_path->y;
    return (final);
}

int get_player_orientation(t_info_path *temp_path, t_info_soldiers *tmp)
{
    while (temp_path->num != tmp->path_step && temp_path->next != NULL)
        temp_path = temp_path->next;
    return (temp_path->direction);
}

int get_tower_type(all_var *all, int num_slot)
{
    t_info_slots *tmp_slots = all->slots;

    while (tmp_slots->next != NULL) {
        if (tmp_slots->num_slot == num_slot)
            return (tmp_slots->type_tower);
        tmp_slots = tmp_slots->next;
    }
    return (0);
}

int get_player_name(all_var *all)
{
    char temp[] = "0";
    sfKeyCode key = 1;

    for (int i = 0; i < 26; i++) {
        key = i;
        if (sfKeyboard_isKeyPressed(key) == sfTrue) {
            temp[0] = (char)(i + 97);
            all->var->player_name = my_strcat(all->var->player_name, temp);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue &&
    my_strlen(all->var->player_name) > 2)
        return (1);
    return (0);
}

sfVector2f *get_mainmenu_positions(void)
{
    sfVector2f *vector = malloc(sizeof(sfVector2f) * 5);
    vector[0] = (sfVector2f) {67, 50};
    vector[1] = (sfVector2f) {1622, 50};
    vector[2] = (sfVector2f) {662, 190};
    vector[3] = (sfVector2f) {662, 450};
    vector[4] = (sfVector2f) {575, 695};
    return (vector);
}
