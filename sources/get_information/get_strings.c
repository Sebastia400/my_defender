/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

char **get_shop_names(void)
{
    char **names = malloc(sizeof(char *) * 9);
    names[0] = "Rock tower";
    names[1] = "Poison tower";
    names[2] = "Laser tower";
    names[3] = "Tesla tower";
    names[4] = "Arch tower";
    names[5] = "Crossbow tower";
    names[6] = "Cannon tower";
    names[7] = "Ice tower";
    names[8] = NULL;
    return (names);
}
