/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_light_small(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/light_small.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_soldier_health(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/soldiers_live.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_castle_live(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/info/castle_live.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_light_button2(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/light_button2.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_light_upgrade(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/light_upgrade.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
