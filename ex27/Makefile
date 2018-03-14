# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmottal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 12:21:13 by mmottal           #+#    #+#              #
#    Updated: 2017/11/10 13:28:46 by mmottal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
FLAGS = -Wall -Werror -Wextra
FILES = ft_display_file.o

all: $(NAME)

$(NAME):
		gcc -c $(FLAGS) $(SRC)
		gcc -o $(NAME) $(FILES)
clean:
		/bin/rm -f $(FILES)

fclean: clean
		/bin/rm -f $(NAME)
