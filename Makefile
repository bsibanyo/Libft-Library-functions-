# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 16:14:39 by bsibanyo          #+#    #+#              #
#    Updated: 2019/05/30 16:46:19 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -c

NAME = libft.a

SOURCES = ./ft_isalpha.c	./ft_putchar.c	./ft_strcpy.c	./ft_tolower.c
./ft_isascii.c	./ft_strcat.c	./ft_strlen.c	./ft_toupper.c
./ft_atoi.c	./ft_isdigit.c	./ft_strchr.c	./ft_strncmp.c
./ft_isalnum.c	./ft_isprint.c	./ft_strcmp.c	./ft_strncpy.c

OBJECTS = $(SOURCES:.c=.o)

default: all

all: $(NAME)
	ar -rcs $(NAME) $(OBJECTS)
	echo "Libft.a created!"
	ranlib $(NAME)
	echo "Libft.a indexed!"

$(NAME): $(SOURCES)
	gcc $(FLAGS) $(SOURCES)
	echo "Sources compiled!"

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
