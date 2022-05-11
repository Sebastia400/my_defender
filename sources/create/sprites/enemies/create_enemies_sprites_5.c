/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_soldier_1_d_u_2(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/soldier_1/soldier_diagonal_up_2.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_soldier_2_d_u_2(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/silver/soldier_diagonal_up_2.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_soldier_3_d_u_2(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/truck/soldier_diagonal_up_2.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_soldier_4_d_u_2(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/soldiers/black/soldier_diagonal_up_2.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}
