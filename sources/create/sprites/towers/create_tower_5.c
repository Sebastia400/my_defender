/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_tower_5(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/towers/tower_5.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tower_5_level1(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tower_bigger/tower_5_level1.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tower_5_level2(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tower_bigger/tower_5_level2.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tower_5_level3(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tower_bigger/tower_5_level3.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
