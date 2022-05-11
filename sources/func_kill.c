/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"

void towers_damage(all_var *all, t_info_slots *tmp_slots,
t_info_soldiers *tmp_soldiers)
{
    t_info_slots *tmp = all->slots->next;
    int tmp_type = tmp_slots->type_tower;
    int damage = 0;

    if (tmp_slots->type_tower > 4)
        tmp_type -= 4;
    damage = (tmp_type + tmp_slots->level_tower) * 8;
    tmp_soldiers->live -= damage;
    tmp_soldiers->damage += damage;
    if (tmp_soldiers->damage >= (tmp_soldiers->full_live / 4) &&
    tmp_soldiers->live > 0) {
        change_char_health(&tmp_soldiers->select_soldier_health);
        tmp_soldiers->damage = 0;
    }
}

int inside_tower_area(sfVector2f tower, sfVector2f enemy)
{
    if (tower.x - 200 <= enemy.x && tower.x + 200 >= enemy.x
    && tower.y - 200 <= enemy.y && tower.y + 200 >= enemy.y)
        return (1);
    return (0);
}

void kill_enemies2(all_var *all, t_info_slots *tmp_slots,
t_info_soldiers *tmp_soldiers)
{
    if (inside_tower_area(tmp_slots->pos_slot,
    tmp_soldiers->pos_soldier)) {
        towers_damage(all, tmp_slots, tmp_soldiers);
        play_sound_tower(all, tmp_slots);
    }
    if (tmp_soldiers->pos_soldier.x > 100 &&
    tmp_soldiers->pos_soldier.x < 1500 && tmp_soldiers->killed == 0
        && tmp_soldiers->live <= 0) {
        all->var->enemy_killed++;
        tmp_soldiers->killed = 1;
        all->var->money += 25;
        sfSound_play(all->sounds->money);
    }
}

void kill_enemies(all_var *all)
{
    t_info_slots *tmp_slots = all->slots;
    t_info_soldiers *tmp_soldiers;

    while (tmp_slots != NULL) {
        tmp_soldiers = all->soldiers->next;
        while (tmp_slots->type_tower != 0 && tmp_soldiers != NULL) {
            kill_enemies2(all, tmp_slots, tmp_soldiers);
            tmp_soldiers = tmp_soldiers->next;
        }
        tmp_slots = tmp_slots->next;
    }
}
