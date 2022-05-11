/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_coin(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/info/coin.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_money(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/info/money.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_shop(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/info/shop.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_trash(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/info/trash_button.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
