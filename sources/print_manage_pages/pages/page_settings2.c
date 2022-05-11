/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../../includes/library.h"

void func_fps(all_var *all)
{
    switch (all->var->fps) {
        case 30:
            sfSprite_setPosition(all->sprites->towers[0],
            (sfVector2f){960, 440});
            sfRenderWindow_drawSprite(all->windows->window,
            all->sprites->towers[0], NULL);
            break;
        case 60:
            sfSprite_setPosition(all->sprites->towers[0],
            (sfVector2f){1260, 440});
            sfRenderWindow_drawSprite(all->windows->window,
            all->sprites->towers[0], NULL);
            break;
        case 120:
            sfSprite_setPosition(all->sprites->towers[0],
            (sfVector2f){1530, 440});
            sfRenderWindow_drawSprite(all->windows->window,
            all->sprites->towers[0], NULL);
            break;
    }
}

void func_sound(all_var *all)
{
    if (all->var->sound_on == 0) {
        all->var->prev_sound = 0;
        sfMusic_pause(all->sounds->music_game);
    } else if (all->var->sound_on == 1 && all->var->prev_sound == 0) {
        all->var->prev_sound = 1;
        sfMusic_play(all->sounds->music_game);
    }
}
