/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void upgrade_buttons(all_var *all, int num_slot)
{
    int price = 0;
    int i = 0;
    t_info_slots *temp = all->slots->next;
    while (temp->num_slot != num_slot && temp->next != NULL)
        temp = temp->next;
    price = (temp->level_tower + (temp->level_tower / 2)) * 100;
    i = is_button_pressed2(temp->upgrade_button, all,
    all->sprites->light_upgrade, temp->pos_slot);
    if (i == 2 && temp->show_upgrade == 1 && all->var->money >= price) {
        temp->level_tower += 1;
        temp->show_upgrade == 0;
        all->var->money -= price;
        sfSound_play(all->sounds->upgrade);
    }
}

void shop_buttons(all_var *all)
{
    int pos_x = 395;

    for (int i = 0; i < 4; i++) {
        if (is_button_pressed2(get_tower_shop_buttons()[i], all,
        all->sprites->shine, (sfVector2f){pos_x, 60}) == 2)
            all->var->tower_type = i + 1;
        pos_x += 300;
    }
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->shine, NULL);
    sfSprite_setPosition(all->sprites->shine, (sfVector2f){-200, -200});
}

void slots_buttons(all_var *all)
{
    new_button *button_slots_map;

    for (int i = 1; i < 10; i++) {
        button_slots_map = create_slots_buttons()[all->var->map - 1][i - 1];
        if (is_button_pressed2(button_slots_map, all,
        all->sprites->light_small, (sfVector2f){-200, -200}) == 2)
            write_tower_in_slot(all, i, all->var->tower_type);
    }
}
