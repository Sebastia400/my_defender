/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void ini_struct_sprites(all_var  *all)
{
    all->sprites->towers = malloc(sizeof(sfSprite *) * 8);
    all->sprites->towers[0] = create_tower_1();
    all->sprites->towers[1] = create_tower_2();
    all->sprites->towers[2] = create_tower_3();
    all->sprites->towers[3] = create_tower_4();
    all->sprites->towers[4] = create_tower_5();
    all->sprites->towers[5] = create_tower_6();
    all->sprites->towers[6] = create_tower_7();
    all->sprites->towers[7] = create_tower_8();
    all->sprites->tower_1_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_2_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_3_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_4_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_5_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_6_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_7_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_8_level = malloc(sizeof(sfSprite *) * 3);
    all->sprites->tower_1_level[0] = create_tower_1_level1();
    ini_struct_sprites_2(all);
}

void ini_struct_sprites_2(all_var  *all)
{
    all->sprites->tower_2_level[0] = create_tower_2_level1();
    all->sprites->tower_3_level[0] = create_tower_3_level1();
    all->sprites->tower_4_level[0] = create_tower_4_level1();
    all->sprites->tower_5_level[0] = create_tower_5_level1();
    all->sprites->tower_6_level[0] = create_tower_6_level1();
    all->sprites->tower_7_level[0] = create_tower_7_level1();
    all->sprites->tower_8_level[0] = create_tower_8_level1();
    all->sprites->tower_1_level[1] = create_tower_1_level2();
    all->sprites->tower_2_level[1] = create_tower_2_level2();
    all->sprites->tower_3_level[1] = create_tower_3_level2();
    all->sprites->tower_4_level[1] = create_tower_4_level2();
    all->sprites->tower_5_level[1] = create_tower_5_level2();
    all->sprites->tower_6_level[1] = create_tower_6_level2();
    all->sprites->tower_7_level[1] = create_tower_7_level2();
    all->sprites->tower_8_level[1] = create_tower_8_level2();
    all->sprites->tower_1_level[2] = create_tower_1_level3();
    all->sprites->tower_2_level[2] = create_tower_2_level3();
    all->sprites->tower_3_level[2] = create_tower_3_level3();
    all->sprites->tower_4_level[2] = create_tower_4_level3();
    ini_struct_sprites_3(all);
}

void ini_struct_sprites_3(all_var  *all)
{
    all->sprites->tower_5_level[2] = create_tower_5_level3();
    all->sprites->tower_6_level[2] = create_tower_6_level3();
    all->sprites->tower_7_level[2] = create_tower_7_level3();
    all->sprites->tower_8_level[2] = create_tower_8_level3();
    all->sprites->soldier_1 = malloc(sizeof(sfSprite *) * 6);
    all->sprites->soldier_1[0] = create_soldier_1_d_d();
    all->sprites->soldier_1[1] = create_soldier_1_d_u();
    all->sprites->soldier_1[2] = create_soldier_1_u();
    all->sprites->soldier_1[3] = create_soldier_1_run();
    all->sprites->soldier_1[4] = create_soldier_1_run_2();
    all->sprites->soldier_1[5] = create_soldier_1_d_u_2();
    all->sprites->soldier_2 = malloc(sizeof(sfSprite *) * 6);
    all->sprites->soldier_2[0] = create_soldier_2_d_d();
    all->sprites->soldier_2[1] = create_soldier_2_d_u();
    all->sprites->soldier_2[2] = create_soldier_2_u();
    all->sprites->soldier_2[3] = create_soldier_2_run();
    all->sprites->soldier_2[4] = create_soldier_2_run_2();
    all->sprites->soldier_2[5] = create_soldier_2_d_u_2();
    all->sprites->soldier_3 = malloc(sizeof(sfSprite *) * 6);
    ini_struct_sprites_4(all);
}

void ini_struct_sprites_4(all_var  *all)
{
    all->sprites->soldier_3[0] = create_soldier_3_d_d();
    all->sprites->soldier_3[1] = create_soldier_3_d_u();
    all->sprites->soldier_3[2] = create_soldier_3_u();
    all->sprites->soldier_3[3] = create_soldier_3_run();
    all->sprites->soldier_3[4] = create_soldier_3_run_2();
    all->sprites->soldier_3[5] = create_soldier_3_d_u_2();
    all->sprites->soldier_4 = malloc(sizeof(sfSprite *) * 6);
    all->sprites->soldier_4[0] = create_soldier_4_d_d();
    all->sprites->soldier_4[1] = create_soldier_4_d_u();
    all->sprites->soldier_4[2] = create_soldier_4_u();
    all->sprites->soldier_4[3] = create_soldier_4_run();
    all->sprites->soldier_4[4] = create_soldier_4_run_2();
    all->sprites->soldier_4[5] = create_soldier_4_d_u_2();
    all->sprites->soldiers = malloc(sizeof(sfSprite **) * 4);
    all->sprites->soldiers[0] = all->sprites->soldier_1;
    all->sprites->soldiers[1] = all->sprites->soldier_2;
    all->sprites->soldiers[2] = all->sprites->soldier_3;
    all->sprites->soldiers[3] = all->sprites->soldier_4;
    ini_struct_sprites_5(all);
}

void ini_struct_sprites_5(all_var  *all)
{
    all->sprites->maps = malloc(sizeof(sfSprite *) * 3);
    all->sprites->maps[0] = create_map_1();
    all->sprites->maps[1] = create_map_2();
    all->sprites->upg_tower_1 = create_upg_tower_1();
    all->sprites->upg_tower_2 = create_upg_tower_2();
    all->sprites->upg_tower_3 = create_upg_tower_3();
    all->sprites->upg_tower_4 = create_upg_tower_4();
    all->sprites->upg_tower_5 = create_upg_tower_5();
    all->sprites->upg_tower_6 = create_upg_tower_6();
    all->sprites->upg_tower_7 = create_upg_tower_7();
    all->sprites->upg_tower_8 = create_upg_tower_8();
    all->sprites->soldier_health = create_soldier_health();
    all->sprites->castle_live = create_castle_live();
    all->sprites->coin = create_coin();
    all->sprites->money = create_money();
    all->sprites->mainmenu = create_mainmenu();
    all->sprites->portada = create_portada();
    all->sprites->settings = create_settings();
    all->sprites->levels = create_levels();
    ini_struct_sprites_6(all);
}
