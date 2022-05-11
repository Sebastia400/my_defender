/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_no_upgrades(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/towers/no_upgrades.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_upg_tower_5(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/towers/upgrade_tower_5.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_upg_tower_6(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/towers/upgrade_tower_6.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_upg_tower_7(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/towers/upgrade_tower_7.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_upg_tower_8(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/towers/upgrade_tower_8.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}
