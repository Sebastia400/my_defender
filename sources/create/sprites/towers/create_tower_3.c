/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_tower_3(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/towers/tower_3.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tower_3_level1(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tower_bigger/tower_3_level1.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_upg_tower_3(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/towers/upgrade_tower_3.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_tower_3_level2(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tower_bigger/tower_3_level2.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tower_3_level3(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tower_bigger/tower_3_level3.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
