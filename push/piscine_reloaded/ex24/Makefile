# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hseffian <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/27 17:16:19 by hseffian          #+#    #+#              #
#    Updated: 2019/03/27 19:55:17 by hseffian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/*.c
HED = ./includes
OBJ = *.o
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)
$(NAME) :
	gcc $(FLAGS) -c $(SRC) -I$(HED)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
