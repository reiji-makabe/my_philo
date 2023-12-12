# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmakabe <rmkabe012@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 10:10:43 by rmakabe           #+#    #+#              #
#    Updated: 2023/12/13 02:59:00 by rmakabe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := philo
CC := cc
SANITIZE :=-fsanitize=leak -fsanitize=address -fsanitize=thread

ifdef WITH_DEBUG
	DEBUG :=-O0 -g3
endif

RM := rm -rf
AR := ar -rcs

INCLUDE := include/
SRC_DIR := src/
obj_dir := obj/

CFLAGS := -Wall -Wextra -Werror $(DEBUG) $(SANITIZE)

SRC := $(wildcard $(SRC_DIR)*.c)
OBJ := $(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))


#command

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE) $^ -o $(NAME)

clean:
	$(RM) $(OBJ_CLI) $(OBJ_SER) $(ARCHIVE)

fclean: clean
	$(RM) $(NAME)

re: fclean all

debug:
	make WITH_DEBUG=1 re -C $(NAME)

.PHONY: all clean fclean re debug
