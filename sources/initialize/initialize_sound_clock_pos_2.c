/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void create_positions(all_var *all)
{
    all->vectors->pos_origin = (sfVector2f) {0, 0};
    all->vectors->shop_position = get_shop_positions();
    all->vectors->pos_text = (sfVector2f) {300, 230};
    all->vectors->pos_money = (sfVector2f) {200, 180};
    all->vectors->select_coin = (sfIntRect) {0, 0, 56, 57.38};
    all->vectors->select_character = (sfIntRect) {0, 0, 300, 240};
    all->vectors->select_soldier_health = (sfIntRect) {0, 0, 450, 100};
    all->vectors->select_live = (sfIntRect) {0, 10, 200, 30};
    all->vectors->pos_character = (sfVector2f) {0, 700};
    all->vectors->pos_actual = (sfVector2f) {0, 700};
    all->vectors->velocity_character = (sfVector2f) {5, 0};
}

void ini_all_start(all_var *all, int ini)
{
    if (ini == 0) {
        create_sounds(all);
        create_clocks(all);
        create_positions(all);
        ini_struct_sprites(all);
        scale_images(all);
        create_msg(all);
        sfMusic_play(all->sounds->music_game);
    }
}
