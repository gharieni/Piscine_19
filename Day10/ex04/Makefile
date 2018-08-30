# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/24 09:41:29 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/24 09:41:30 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = prog
FLAG = -Wall -Werror -Wextra
SRC = *.c
OBJ = $(SCR:.c=.o)
LIB = ~/mes_fonctions/libft.a
#D_HEADER = 
#D_SRC =

all : $(NAME)

$(NAME) :
	gcc $(FLAG) $(LIB) $(SRC) -o $(NAME)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)
