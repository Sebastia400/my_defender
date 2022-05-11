/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_tutorial_6(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial6.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tutorial_7(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial7.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tutorial_8(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial8.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
