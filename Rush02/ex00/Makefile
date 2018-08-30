# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/25 16:51:11 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/26 22:07:38 by vjovanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = colle-2
SRC_PATH = srcs
CPPFLAGS = -Iincludes
LDFLAGS = -Llibft
LDLIBS = -lft
CC = gcc
INC = includes
CFLAGS = -Wall -Werror -Wextra
SRC_NAME = main.c ft_bonus.c ft_lib.c ft_putchar.c ft_split.c rush0x.c

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
OBJ= $(SRC:.c=.o)

all : $(NAME)
$(NAME): $(SRC)
	@echo "\033[92mCOMPILE\033[0m"
	$(CC) $(CFLAGS) $(SRC)  -I $(INC) -o $(NAME)
	@echo "\033[92mSUCCES COMPILE\033[0m"
%.o: %.c
	$(CC) $(CFLAGS) $(SRC) -I $(INC) -o $@ -c $<

clean:
	@echo "\033[92mCLEAN\033[0m"
	rm -rf $(OBJ)

fclean: clean
	@echo "\033[92mFCLEAN\033[0m"
	rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
