# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: owikman <owikman@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 13:24:55 by owikman           #+#    #+#              #
#    Updated: 2021/06/08 15:05:58 by owikman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesomeprog

SRC = source.c


all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean: 
	/bin/rm -f*.o

fclean: 
	/bin/rm -f $(NAME)

re: fclean all
