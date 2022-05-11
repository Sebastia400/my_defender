/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void print_towers_shop(all_var *all)
{
    int i = 0;
    int tower_type = 0;

    while (i < all->var->num_towers_selected) {
        tower_type = all->var->towers[i];
        if (tower_type > 4)
            tower_type -= 4;
        sfSprite_setPosition(all->sprites->towers[all->var->towers[i] - 1],
        all->vectors->shop_position[tower_type - 1]);
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->towers[all->var->towers[i] - 1], NULL);
        i++;
    }
}

void print_shop(all_var *all)
{
    sfSprite_setPosition(all->sprites->shop, (sfVector2f){100, -20});
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->shop, NULL);
    shop_buttons(all);
    print_towers_shop(all);
    sfText_setColor(all->texts->text, sfColor_fromRGB(0, 0, 0));
    sfText_setCharacterSize(all->texts->text, 60);
    sfText_setString(all->texts->text, my_return_char(all->var->money));
    sfText_setPosition(all->texts->text, (get_pos_money(all)));
    sfRenderWindow_drawText(all->windows->window, all->texts->text, NULL);
    sfText_setCharacterSize(all->texts->text, 40);
    sfText_setString(all->texts->text, "Money");
    sfText_setPosition(all->texts->text, (sfVector2f){120, 70});
    sfRenderWindow_drawText(all->windows->window, all->texts->text, NULL);
    sfText_setColor(all->texts->text, sfColor_fromRGB(255, 255, 255));
    sfText_setCharacterSize(all->texts->text2, 30);
    sfText_setCharacterSize(all->texts->text, 30);
    print_shop2(all);
}

void print_shop2(all_var *all)
{
    int i = 0;
    int ini_pos_x = 330;

    while (i < 4) {
        sfText_setPosition(all->texts->text2, (sfVector2f){ini_pos_x, 100});
        sfText_setString(all->texts->text2,
        get_shop_names()[all->var->towers[i] - 1]);
        sfRenderWindow_drawText(all->windows->window, all->texts->text2, NULL);
        i++;
        ini_pos_x += 300;
    }
    sfSprite_setPosition(all->sprites->money, all->vectors->pos_money);
    sfSprite_setTextureRect(all->sprites->money,  all->vectors->select_coin);
    all->clocks->time = sfClock_getElapsedTime(all->clocks->clock_coin);
    if (sfTime_asSeconds(all->clocks->time) > 0.2) {
        change_money(&all->vectors->select_coin);
        sfClock_restart(all->clocks->clock_coin);
    }
    print_shop3(all);
}

void print_shop3(all_var *all)
{
    int i = 0;
    int ini_pos_x = 170;
    int price = 100;

    while (i < 4) {
        sfText_setString(all->texts->text, my_return_char(price));
        sfText_setPosition(all->texts->text,
        (sfVector2f){200 + ini_pos_x, 170});
        sfSprite_setPosition(all->sprites->coin,
        (sfVector2f){250 + ini_pos_x, 170});
        sfRenderWindow_drawText(all->windows->window, all->texts->text, NULL);
        sfRenderWindow_drawSprite(all->windows->window,
        all->sprites->coin, NULL);
        price += 100;
        ini_pos_x += 300;
        i++;
    }
    sfRenderWindow_drawSprite(all->windows->window, all->sprites->money, NULL);
}
