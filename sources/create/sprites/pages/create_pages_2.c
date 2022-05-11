/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_portada(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/menu/portada.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_settings(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/menu/settings.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_game_over(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/game_over.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_pause(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/pause.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_map_2(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/info/background_2.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}
