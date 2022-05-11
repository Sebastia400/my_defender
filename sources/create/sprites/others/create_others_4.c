/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_light_big(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/light_big.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_lock(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/lock.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_pause_button(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/info/pause.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_attack_area(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/info/area_atack.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
