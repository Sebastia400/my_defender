/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

sfVector2f *get_shop_positions(void)
{
    sfVector2f *vector = malloc(sizeof(sfVector2f) * 4);
    vector[0] = (sfVector2f) {500, 60};
    vector[1] = (sfVector2f) {800, 60};
    vector[2] = (sfVector2f) {1100, 60};
    vector[3] = (sfVector2f) {1400, 60};
    return (vector);
}

sfVector2f get_vector_selection(int i)
{
    sfVector2f vector[8];
    vector[0] = (sfVector2f){258, 280};
    vector[1] = (sfVector2f){651, 280};
    vector[2] = (sfVector2f){1040, 280};
    vector[3] = (sfVector2f){1435, 280};
    vector[4] = (sfVector2f){258, 665};
    vector[5] = (sfVector2f){651, 665};
    vector[6] = (sfVector2f){1040, 665};
    vector[7] = (sfVector2f){1435, 665};
    return (vector[i]);
}

sfVector2f *get_slots_map_1(void)
{
    sfVector2f *map1 = malloc(sizeof(sfVector2f) * 10);
    map1[0] = ((sfVector2f) {305, 500});
    map1[1] = ((sfVector2f) {420, 235});
    map1[2] = ((sfVector2f) {840, 265});
    map1[3] = ((sfVector2f) {1080, 403});
    map1[4] = ((sfVector2f) {1380, 238});
    map1[5] = ((sfVector2f) {350, 670});
    map1[6] = ((sfVector2f) {576, 375});
    map1[7] = ((sfVector2f) {840, 480});
    map1[8] = ((sfVector2f) {1325, 515});
    map1[9] = ((sfVector2f) {1565, 350});
    return (map1);
}

sfVector2f *get_slots_map_2(void)
{
    sfVector2f *map2 = malloc(sizeof(sfVector2f) * 10);
    map2[0] = ((sfVector2f) {-200, -200});
    map2[1] = ((sfVector2f) {-200, -200});
    map2[2] = ((sfVector2f) {-200, -200});
    map2[3] = ((sfVector2f) {-200, -200});
    map2[4] = ((sfVector2f) {248, 490});
    map2[5] = ((sfVector2f) {990, 740});
    map2[6] = ((sfVector2f) {500, 370});
    map2[7] = ((sfVector2f) {845, 370});
    map2[8] = ((sfVector2f) {1170, 370});
    map2[9] = ((sfVector2f) {660, 185});
    return (map2);
}

sfVector2f get_pos_slot(int map, int num_slot)
{
    sfVector2f **map_slots_positions = malloc(sizeof(sfVector2f *) * 2);
    map_slots_positions[0] = get_slots_map_1();
    map_slots_positions[1] = get_slots_map_2();
    return (map_slots_positions[map - 1][num_slot - 1]);
}
