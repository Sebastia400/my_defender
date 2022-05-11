/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void change_char_health (sfIntRect *select_char)
{
    select_char->top += 87;
    if (select_char->top >= 650)
        select_char->top = 10;
}

void change_char (sfIntRect *select_char)
{
    select_char->left += 300;
    if (select_char->left >= 5100)
        select_char->left = 0;
}

void change_live (sfIntRect *select_live)
{
    select_live->top += 30;
    if (select_live->top >= 150)
        select_live->top = 10;
}

void change_money (sfIntRect *select_coin)
{
    select_coin->left += 57.3846;
    if (select_coin->left >= 733)
        select_coin->left = 0;
}
