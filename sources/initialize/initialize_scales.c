/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void scale_images(all_var *all)
{
    sfSprite_scale(all->sprites->soldier_1[0], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_1[1], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_1[2], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_1[3], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_1[4], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_1[5], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_2[0], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_2[1], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_2[2], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_2[3], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_2[4], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_2[5], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_3[0], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_3[1], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_3[2], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_3[3], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_3[4], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_3[5], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_4[0], (sfVector2f){0.6, 0.6});
    scale_images_2(all);
}

void scale_images_2(all_var  *all)
{
    sfSprite_scale(all->sprites->soldier_4[1], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_4[2], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_4[3], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_4[4], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->soldier_4[5], (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->towers[0], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->towers[1], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->towers[2], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->towers[3], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->towers[4], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->towers[5], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->towers[6], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->towers[7], (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->tower_1_level[0], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_2_level[0], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_3_level[0], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_4_level[0], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_5_level[0], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_6_level[0], (sfVector2f){0.45, 0.45});
    scale_images_3(all);
}

void scale_images_3(all_var *all)
{
    sfSprite_scale(all->sprites->tower_7_level[0], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_8_level[0], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_1_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_2_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_3_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_4_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_5_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_6_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_7_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_8_level[1], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_1_level[2], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_2_level[2], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_3_level[2], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_4_level[2], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_5_level[2], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_6_level[2], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_7_level[2], (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->tower_8_level[2], (sfVector2f){0.45, 0.45});
    scale_images_4(all);
}

void scale_images_4(all_var *all)
{
    sfSprite_scale(all->sprites->upg_tower_1, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->upg_tower_2, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->upg_tower_3, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->upg_tower_4, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->upg_tower_5, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->upg_tower_6, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->upg_tower_7, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->upg_tower_8, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->win, (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->lose, (sfVector2f){0.6, 0.6});
    sfSprite_scale(all->sprites->no_upgrades, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->coin, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->castle_live, (sfVector2f){2, 2});
    sfSprite_scale(all->sprites->trash, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->shine, (sfVector2f){0.5, 0.5});
    sfSprite_scale(all->sprites->light_upgrade, (sfVector2f){0.3, 0.3});
    sfSprite_scale(all->sprites->soldier_health, (sfVector2f){0.2, 0.2});
    sfSprite_scale(all->sprites->mainmenu, (sfVector2f){0.98, 0.98});
    sfSprite_scale(all->sprites->settings, (sfVector2f){0.98, 0.98});
    scale_images_5(all);
}

void scale_images_5(all_var *all)
{
    sfSprite_scale(all->sprites->shop, (sfVector2f){0.8, 0.7});
    sfSprite_scale(all->sprites->levels, (sfVector2f){0.98, 0.98});
    sfSprite_scale(all->sprites->lock, (sfVector2f){0.45, 0.45});
    sfSprite_scale(all->sprites->pause_button, (sfVector2f){0.15, 0.15});
    sfSprite_scale(all->sprites->attack_area, (sfVector2f){0.9, 0.9});
    sfSprite_scale(all->sprites->scoreboard, (sfVector2f){0.98, 0.98});
}
