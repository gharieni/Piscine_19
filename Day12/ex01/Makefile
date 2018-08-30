# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 10:41:08 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/26 10:41:09 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = main.c ft_cat.c ft_putchar.c ft_putstr.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRC)
			gcc -o $(NAME) main.o ft_cat.o ft_putchar.o ft_putstr.o

clean:
		/bin/rm -f main.o ft_cat.o ft_putchar.o ft_putstr.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
