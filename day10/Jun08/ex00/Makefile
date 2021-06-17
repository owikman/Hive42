# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: owikman <owikman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 15:06:10 by owikman           #+#    #+#              #
#    Updated: 2021/06/08 16:32:11 by owikman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = includes


all: $(FILE)

$(FILE):
	gcc -c -Wall -Wextra -Werror -I $(HEADER) $(SRC)
	ar -rc $(FILE) $(OFILES)
	ranlib $(FILE)

clean: 
	/bin/rm -f *.o $(OFILES)

fclean: clean
	/bin/rm -f $(FILE)

re: fclean all
