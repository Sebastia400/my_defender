/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void save_selected(all_var *all, int tower_type)
{
    int i = 0;
    int tmp_type = tower_type;

    if (tower_type > 4)
        tmp_type -= 4;
    if (all->var->towers[tmp_type - 1] == 0) {
        all->var->towers[tmp_type - 1] = tower_type;
        all->var->num_towers_selected++;
    }
}

void page_selection_towers2(all_var *all)
{
    for (int n = 0; n < 4; n++) {
        if (all->var->towers[n] > 0 && all->var->towers[n] < 9) {
            sfSprite_setPosition(all->sprites->light_button2,
            get_vector_selection(all->var->towers[n] - 1));
            sfRenderWindow_drawSprite(all->windows->window,
            all->sprites->light_button2, NULL);
        }
    }
}

void page_selection_towers(all_var *all)
{
    new_button *back_button = create_button(69, 27, 170, 130);

    if (is_button_pressed2(back_button, all, all->sprites->light_small,
    (sfVector2f){72, 50}) == 2
    || all->var->num_towers_selected > 3)
        all->var->page = 2;
    for (int i = 0; i < 4 * all->var->maps_completed; i++) {
        if (is_button_pressed2(get_tower_button_selection(i), all,
        all->sprites->light_button2, get_vector_selection(i)) == 2)
            save_selected(all, i + 1);
    }
    page_selection_towers2(all);
}

void print_selection_towers(all_var *all)
{
    int i = 4;

    sfSprite_setPosition(all->sprites->background_menu,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->background_menu, NULL);
    page_selection_towers(all);
    sfSprite_setPosition(all->sprites->selection_page,
    all->vectors->pos_origin);
    sfRenderWindow_drawSprite(all->windows->window,
    all->sprites->selection_page, NULL);
    if (all->var->maps_completed == 1) {
        while (i < 8) {
            print_lock(all, get_vector_selection(i));
            i++;
        }
    }
    sfRenderWindow_display(all->windows->window);
}

void page_selection_maps(all_var *all)
{
    int i = 0;
    new_button *back_button = create_button(69, 27, 170, 130);
    new_button *map[2];
    sfVector2f vector[2];

    map[0] = create_button(190, 280, 450, 450);
    map[1] = create_button(720, 290, 450, 450);
    vector[0] = (sfVector2f){160, 275};
    vector[1] = (sfVector2f){695, 275};
    if (is_button_pressed2(back_button, all, all->sprites->light_small,
    (sfVector2f){72, 50}) == 2 || all->var->num_towers_selected > 3)
        all->var->page = 2;
    for (int i = 0; i < 1 * all->var->maps_completed; i++) {
        if (is_button_pressed2(map[i], all, all->sprites->light_big,
        vector[i]) == 2) {
            all->var->map = i + 1;
            change_map_in_linked(all);
        }
    }
    get_soldier_path(all);
}
