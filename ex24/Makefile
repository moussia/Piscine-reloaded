# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmottal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 17:26:21 by mmottal           #+#    #+#              #
#    Updated: 2017/11/09 10:33:46 by mmottal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes/
SRC = ./srcs/
OPTION = -l $(HEADER)
FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_swap.c \
		$(SRC)ft_strcmp.c $(SRC)ft_strlen.c 
OBJ = ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o

ALL : $(NAME)
$(NAME) :
	gcc -c $(FLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean ALL
