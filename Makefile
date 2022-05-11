##
## EPITECH PROJECT, 2021
## d10
## File description:
## description
##

OBJ = $(SRCS_C:.c=.o)

LIB = -L./lib/my -lmy

SFLAGS = -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

SRC		=	sources/

SRC_C	=	main.c												\
			print_pages.c										\
			basicfunctions.c									\
			basicfunctions2.c									\
			play_sounds/play_sounds.c							\
			func_kill.c											\
			func_setting_pages.c								\
			soldier_path/soldier_path.c							\
			print_manage_pages/pages/level_page.c				\
			print_manage_pages/pages/page_mainmenu.c			\
			print_manage_pages/pages/page_portada.c				\
			print_manage_pages/pages/page_settings.c			\
			print_manage_pages/pages/page_settings2.c			\
			print_manage_pages/pages/print_gameover.c			\
			print_manage_pages/pages/print_scoreboard.c			\
			print_manage_pages/pages/print_lives.c				\
			print_manage_pages/pages/print_shop.c				\
			print_manage_pages/pages/selection_page.c			\
			print_manage_pages/pages/selection_page_2.c			\
			print_manage_pages/pages/pause_page.c				\
			print_manage_pages/pages/game_page.c				\
			print_manage_pages/pages/tutorial_page.c			\
			print_manage_pages/towers/print_tower.c				\
			print_manage_pages/towers/print_tower_2.c			\
			print_manage_pages/towers/print_tower_3.c			\
			print_manage_pages/enemies/enemy_algorithm.c		\
			print_manage_pages/enemies/print_character.c		\
			print_manage_pages/change_sprites_movment.c			\
			print_manage_pages/manage_pages.c					\
			initialize/initialize_scales.c						\
			initialize/initialize_sprites.c						\
			initialize/initialize_sprites_2.c					\
			initialize/initialize_struct.c 						\
			initialize/initialize_struct_2.c 					\
			initialize/initialize_slots_enemy_all.c				\
			initialize/initialize_sound_clock_pos.c				\
			initialize/initialize_sound_clock_pos_2.c			\
			create/buttons/create_buttons.c						\
			create/create_linked.c								\
			create/sprites/enemies/create_enemies_sprites_1.c	\
			create/sprites/enemies/create_enemies_sprites_2.c	\
			create/sprites/enemies/create_enemies_sprites_3.c	\
			create/sprites/enemies/create_enemies_sprites_4.c	\
			create/sprites/enemies/create_enemies_sprites_5.c	\
			create/sprites/others/create_others_1.c				\
			create/sprites/others/create_others_2.c				\
			create/sprites/others/create_others_3.c				\
			create/sprites/others/create_others_4.c				\
			create/sprites/pages/create_pages_1.c				\
			create/sprites/pages/create_pages_2.c				\
			create/sprites/pages/create_pages_3.c				\
			create/sprites/towers/create_tower_1.c				\
			create/sprites/towers/create_tower_2.c				\
			create/sprites/towers/create_tower_3.c				\
			create/sprites/towers/create_tower_4.c				\
			create/sprites/towers/create_tower_5.c				\
			create/sprites/towers/create_tower_6.c				\
			create/sprites/towers/create_tower_7.c				\
			create/sprites/towers/create_tower_8.c				\
			create/sprites/towers/create_tower_9.c				\
			create/sprites/tutorial/create_tutorial_1.c			\
			create/sprites/tutorial/create_tutorial_2.c			\
			get_information/get_positions.c						\
			get_information/get_positions_2.c					\
			get_information/get_positions_3.c					\
			get_information/get_buttons.c						\
			get_information/get_buttons_2.c						\
			get_information/get_strings.c						\
			str_word_array/str_word_array.c						\
			buttons/functions_buttons.c							\
			basic_functions/my_callocs.c						\
			basic_functions/my_strdup.c

SRCS_C	= 	$(addprefix $(SRC), $(SRC_C))

CFLAGS = -I./include -g

NAME = my_defender

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(SFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make clean
