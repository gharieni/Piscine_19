# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 10:44:08 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/26 10:44:09 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

SRCS = *.c

FLAG = -Wall -Wextra -Werror

OBJ = ft_strrev.o ft_other.o ft_print.o ft_printt.o ft_convert_base.o ft_display.o main.o hexdump.o


all: $(NAME)

$(NAME):
		gcc $(FLAG) $(SRCS) -c
			gcc $(FLAG) $(SRCS) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
