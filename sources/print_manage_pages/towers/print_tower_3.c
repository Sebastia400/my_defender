/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void show_upgrade(t_info_slots *tmp_slots)
{
    if (tmp_slots->show_upgrade == 0)
        tmp_slots->show_upgrade = 1;
    else
        tmp_slots->show_upgrade = 0;
}

void print_tower_level(all_var *all, t_info_slots *tmp_slots, sfSprite *sprite)
{
    sfSprite_setPosition(sprite, tmp_slots->pos_slot);
    sfRenderWindow_drawSprite(all->windows->window, sprite, NULL);
}

void print_level(all_var *all, t_info_slots *tmp_slots)
{
    if (tmp_slots->type_tower != 0) {
        sfVector2f pos = tmp_slots->pos_slot;
        pos.y += 200;
        pos.x += 32;
        sfText_setColor(all->texts->text2, sfColor_fromRGB(255, 255, 255));
        sfText_setCharacterSize(all->texts->text2, 20);
        sfText_setPosition(all->texts->text2, pos);
        sfText_setString(all->texts->text2, "Level: ");
        sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
        pos.x += 72;
        sfText_setPosition(all->texts->text2, pos);
        sfText_setString(all->texts->text2,
        my_return_char(tmp_slots->level_tower));
        sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
        sfText_setCharacterSize(all->texts->text2, 30);
    }
}

sfSprite *get_upg_tower(all_var *all, int i)
{
    sfSprite *upg_tower[8];
    upg_tower[0] = all->sprites->upg_tower_1;
    upg_tower[1] = all->sprites->upg_tower_2;
    upg_tower[2] = all->sprites->upg_tower_3;
    upg_tower[3] = all->sprites->upg_tower_4;
    upg_tower[4] = all->sprites->upg_tower_5;
    upg_tower[5] = all->sprites->upg_tower_6;
    upg_tower[6] = all->sprites->upg_tower_7;
    upg_tower[7] = all->sprites->upg_tower_8;
    return (upg_tower[i]);
}

sfSprite **get_towers(all_var *all, int i)
{
    sfSprite **tower[9];
    tower[1] = all->sprites->tower_1_level;
    tower[2] = all->sprites->tower_2_level;
    tower[3] = all->sprites->tower_3_level;
    tower[4] = all->sprites->tower_4_level;
    tower[5] = all->sprites->tower_5_level;
    tower[6] = all->sprites->tower_6_level;
    tower[7] = all->sprites->tower_7_level;
    tower[8] = all->sprites->tower_8_level;
    return (tower[i]);
}
