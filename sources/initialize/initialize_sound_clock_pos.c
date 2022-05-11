/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../../includes/library.h"

void create_sounds(all_var *all)
{
    all->sounds->buffer = sfSoundBuffer_createFromFile(
    "./sounds/money_expended.wav");
    all->sounds->money = sfSound_create();
    sfSound_setBuffer(all->sounds->money, all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/wrong.wav");
    all->sounds->wrong = sfSound_create();
    sfSound_setBuffer(all->sounds->wrong , all->sounds->buffer);
    all->sounds->towers_sounds = malloc(sizeof(sfSound *) * 8);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/rocks.wav");
    all->sounds->towers_sounds[0] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[0] , all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/poition.wav");
    all->sounds->towers_sounds[1] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[1], all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/laser.wav");
    all->sounds->towers_sounds[2] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[2], all->sounds->buffer);
    create_sounds2(all);
}

void create_sounds2(all_var *all)
{
    all->sounds->buffer = sfSoundBuffer_createFromFile(
    "./sounds/electric.wav");
    all->sounds->towers_sounds[3] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[3], all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/arrow.wav");
    all->sounds->towers_sounds[4] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[4], all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile(
    "./sounds/crossbow.wav");
    all->sounds->towers_sounds[5] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[5], all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/cannon.wav");
    all->sounds->towers_sounds[6] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[6], all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/ice.wav");
    all->sounds->towers_sounds[7] = sfSound_create();
    sfSound_setBuffer(all->sounds->towers_sounds[7], all->sounds->buffer);
    create_sounds3(all);
}

void create_sounds3(all_var *all)
{
    all->sounds->buffer = sfSoundBuffer_createFromFile(
    "./sounds/sound_button.wav");
    all->sounds->sound_button = sfSound_create();
    sfSound_setBuffer(all->sounds->sound_button, all->sounds->buffer);
    all->sounds->buffer = sfSoundBuffer_createFromFile("./sounds/upgrade.wav");
    all->sounds->upgrade = sfSound_create();
    sfSound_setBuffer(all->sounds->upgrade, all->sounds->buffer);
    all->sounds->music_game = sfMusic_createFromFile(
    "./sounds/game_music.wav");
    sfMusic_setLoop(all->sounds->music_game, sfTrue);
    all->sounds->soldiers_steps = sfMusic_createFromFile(
    "./sounds/soldierssteps.wav");
    sfMusic_setLoop(all->sounds->soldiers_steps, sfTrue);
}

void create_clocks(all_var *all)
{
    all->clocks->clock_coin = sfClock_create();
    all->clocks->clock_char = sfClock_create();
    all->clocks->clock_button = sfClock_create();
    all->clocks->clock_timeplaying = sfClock_create();
    all->clocks->clock_between_waves = sfClock_create();
    all->clocks->clock_check_damage = sfClock_create();
    all->clocks->clock_towers_sound = sfClock_create();
    all->clocks->clock_test = sfClock_create();
}

void create_msg (all_var *all)
{
    all->texts->font = sfFont_createFromFile("./fonts/Ground_Castle.otf");
    all->texts->text = sfText_create();
    sfText_setFont(all->texts->text, all->texts->font);
    sfText_setCharacterSize(all->texts->text, 30);
    all->texts->font = sfFont_createFromFile("./fonts/arial.ttf");
    all->texts->text2 = sfText_create();
    sfText_setFont(all->texts->text2, all->texts->font);
    sfText_setCharacterSize(all->texts->text2, 30);
}
