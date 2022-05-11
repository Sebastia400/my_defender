/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../../includes/library.h"

sfSprite *create_map_1(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/game/info/background_1.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_background_menu(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/background_menu.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_selection_page(void)
{
    sfTexture *texture = sfTexture_createFromFile
    ("./images/menu/selection_page.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, 0);
    return (sprite);
}

sfSprite *create_levels(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/menu/levels.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}

sfSprite *create_mainmenu(void)
{
    sfTexture *texture_bend = sfTexture_createFromFile
    ("./images/menu/mainmenu.png", NULL);
    sfSprite *sprite_bend = sfSprite_create();
    sfSprite_setTexture(sprite_bend, texture_bend, 0);
    return (sprite_bend);
}
