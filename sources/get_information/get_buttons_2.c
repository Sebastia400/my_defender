/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

new_button **get_mainmenu_buttons(void)
{
    new_button **tower_button = malloc(sizeof(new_button) * 5);
    tower_button[0] = create_button(69, 17, 170, 130);
    tower_button[1] = create_button(1645, 27, 170, 130);
    tower_button[2] = create_button(680, 152, 500, 170);
    tower_button[3] = create_button(680, 400, 500, 170);
    tower_button[4] = create_button(600, 650, 670, 270);
    return (tower_button);
}
