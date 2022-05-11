/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

sfVector2f get_pos_money(all_var *all)
{
    if (all->var->money <= 9)
        return ((sfVector2f){170, 110});
    else if (all->var->money <= 99)
        return ((sfVector2f){152, 110});
    else
        return (get_pos_money2(all));
}

sfVector2f get_pos_money2(all_var *all)
{
    if (all->var->money <= 999)
        return ((sfVector2f){130, 110});
    else if (all->var->money <= 9999)
        return ((sfVector2f){120, 110});
    else
        return ((sfVector2f){110, 110});
}

sfVector2f make_inverse(sfVector2f final, sfVector2f temp)
{
    if (temp.x < 0)
        final.x *= -1;
    if (temp.y < 0)
        final.y *= -1;
    return (final);
}

int get_max_speed(int level)
{
    return (level * 3);
}

sfVector2f get_direction(sfVector2f pos, sfVector2f next, int maxspeed)
{
    sfVector2f final;
    final.x = next.x - pos.x;
    final.y = next.y - pos.y;
    sfVector2f temp;
    temp.x = final.x;
    temp.y = final.y;

    final = make_inverse(final, temp);
    if (final.x > final.y) {
        final.y = (final.y * maxspeed) / final.x;
        final.x = maxspeed;
    } else if (final.x < final.y) {
        final.x = (final.x * maxspeed) / final.y;
        final.y = maxspeed;
    }
    final = make_inverse(final, temp);
    return (final);
}
