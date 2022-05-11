/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_tutorial_1(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial1.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tutorial_2(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial2.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tutorial_3(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial3.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tutorial_4(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial4.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_tutorial_5(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/game/tutorial/tutorial5.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}
