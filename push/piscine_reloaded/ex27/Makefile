# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: relkassm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/25 21:32:28 by relkassm          #+#    #+#              #
#    Updated: 2019/03/25 21:33:55 by relkassm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
SRC = $(wildcard *.c)
all : $(NAME)
$(NAME):
	$(CC) -Wextra -Wall -Werror -o $(NAME) $(SRC)

clean:
	rm -f $(wildcard *.o)
fclean: clean
	rm -f $(NAME);
