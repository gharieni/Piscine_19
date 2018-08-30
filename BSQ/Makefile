# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hvromman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/27 08:13:14 by hvromman          #+#    #+#              #
#    Updated: 2018/08/29 23:04:05 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FLAGS = -Wall -Wextra -Werror

DIR_SRCS = ./srcs/
SRCS = $(DIR_SRCS)bsq.c $(DIR_SRCS)ft_lib.c $(DIR_SRCS)ft_putchar.c \
$(DIR_SRCS)main.c

DIR_COMP = ./
COMP =  $(DIR_COMP)bsq.o $(DIR_COMP)ft_lib.o $(DIR_COMP)ft_putchar.o \
$(DIR_COMP)main.o

DIR_HEADER = ./includes/

all: $(NAME)

$(NAME): $(COMP)
	gcc -o $@ $(COMP) -I $(DIR_HEADER) $(FALGS)

$(DIR_COMP)%.o: $(DIR_SRCS)%.c
	        gcc -o $@ -c $< $(FLAGS) -I $(DIR_HEADER)

clean:
	rm -f $(COMP)
	rm -f .DS_Store
	rm -f ._* $(DIR_SRCS)._*.c $(DIR_HEADER)._*.h

fclean: clean
	rm -f $(NAME)

re: fclean all
