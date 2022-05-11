/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_soldier_1_d_d(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/soldier_1/soldier_diagonal_down.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_soldier_1_d_u(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/soldier_1/soldier_diagonal_up.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_soldier_1_u(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/soldier_1/soldier_going_up.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_soldier_1_run(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/soldier_1/soldier_running.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_soldier_1_run_2(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/soldier_1/soldier_running_2.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}