/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

new_button **get_tower_shop_buttons(void)
{
    new_button **tower_button = malloc(sizeof(new_button) * 4);
    tower_button[0] = create_button(500, 60, 100, 100);
    tower_button[1] = create_button(800, 60, 100, 100);
    tower_button[2] = create_button(1100, 60, 100, 100);
    tower_button[3] = create_button(1400, 60, 100, 100);
    return (tower_button);
}

new_button *get_tower_button_selection(int i)
{
    new_button *tower[8];
    tower[0] = create_button(281, 240, 180, 200);
    tower[1] = create_button(670, 240, 180, 200);
    tower[2] = create_button(1060, 240, 180, 200);
    tower[3] = create_button(1450, 240, 180, 200);
    tower[4] = create_button(281, 640, 180, 200);
    tower[5] = create_button(670, 640, 180, 200);
    tower[6] = create_button(1060, 640, 180, 200);
    tower[7] = create_button(1450, 640, 180, 200);
    return (tower[i]);
}

new_button **get_slot_button_map1(void)
{
    new_button **slot = malloc(sizeof(new_button) * 10);
    slot[0] = create_button(305, 550, 200, 150);
    slot[1] = create_button(420, 285, 200, 150);
    slot[2] = create_button(840, 315, 200, 150);
    slot[3] = create_button(1080, 453, 200, 150);
    slot[4] = create_button(1380, 288, 200, 150);
    slot[5] = create_button(350, 720, 200, 150);
    slot[6] = create_button(576, 435, 200, 150);
    slot[7] = create_button(840, 530, 200, 150);
    slot[8] = create_button(1325, 565, 200, 150);
    slot[9] = create_button(1565, 400, 200, 150);
    return (slot);
}

new_button **get_slot_button_map2(void)
{
    new_button **slot = malloc(sizeof(new_button) * 10);
    slot[0] = create_button(-200, -200, 200, 150);
    slot[1] = create_button(-200, -200, 200, 150);
    slot[2] = create_button(-200, -200, 200, 150);
    slot[3] = create_button(-200, -200, 200, 150);
    slot[4] = create_button(248, 490, 200, 150);
    slot[5] = create_button(990, 790, 200, 150);
    slot[6] = create_button(500, 420, 200, 150);
    slot[7] = create_button(840, 420, 200, 150);
    slot[8] = create_button(1170, 420, 200, 150);
    slot[9] = create_button(660, 185, 200, 150);
    return (slot);
}

new_button ***create_slots_buttons(void)
{
    new_button ***button_slots_map = malloc(sizeof(new_button **) * 2);
    button_slots_map[0] = get_slot_button_map1();
    button_slots_map[1] = get_slot_button_map2();
    return (button_slots_map);
}
