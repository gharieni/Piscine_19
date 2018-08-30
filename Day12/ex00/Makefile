# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 10:39:06 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/26 10:39:07 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_putstr.c ft_putchar.c ft_display_file.c

FLAG = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):
		gcc -c $(FLAG) $(SRC)
		gcc -o $(NAME) main.o ft_putstr.o ft_putchar.o ft_display_file.o


clean:
	/bin/rm -f main.o ft_putstr.o ft_putchar.o ft_display_file.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
