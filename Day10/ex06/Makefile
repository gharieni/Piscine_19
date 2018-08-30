# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghamelek <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/24 09:42:17 by ghamelek          #+#    #+#              #
#    Updated: 2018/08/25 23:04:53 by ghamelek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FLAG = -Wall -Werror -Wextra
SRC = op.c display.c main.c

all : $(NAME)

$(NAME) :
	gcc $(FLAG) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)
