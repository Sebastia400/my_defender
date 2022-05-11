/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void print_castle_live(all_var *all)
{
    sfSprite_setPosition(all->sprites->castle_live, (sfVector2f) {1350, 900});
    sfSprite_setTextureRect(all->sprites->castle_live,
    all->vectors->select_live);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->castle_live, NULL);
}

void print_soldier_health(all_var *all, t_info_soldiers *tmp)
{
    sfVector2f pos = tmp->pos_soldier;
    pos.x += 40;
    sfSprite_setPosition(all->sprites->soldier_health, pos);
    sfSprite_setTextureRect(all->sprites->soldier_health,
    tmp->select_soldier_health);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->soldier_health, NULL);
}
