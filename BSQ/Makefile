# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkoponen <rkoponen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 08:58:53 by rkoponen          #+#    #+#              #
#    Updated: 2021/06/14 09:08:07 by rkoponen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = srcs/bsq.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putstr.c srcs/main.c
HEADERS = header/
COMPILER = gcc -Wall -Werror -Wextra

all: $(NAME)

exe: $(NAME)
$(NAME):
	$(COMPILER) $(SRC) $(INC) -I$(HEADERS) -o $(NAME)

fclean:
	rm $(NAME)

clean:
	rm $(OBJ)

re: fclean all 