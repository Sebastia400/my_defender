/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_shine(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/shine.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_lose(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/lose.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_win(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/win.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_light_button(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/light_button.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_light_play(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/light_play.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
