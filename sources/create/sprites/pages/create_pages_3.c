/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_selection_map(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/info/selection_maps.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_loading(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/menu/loading.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_scoreboard(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/menu/scoreboard.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}
