# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 16:14:39 by bsibanyo          #+#    #+#              #
#    Updated: 2019/05/30 16:43:33 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -c

NAME = libft.a

SOURCES = 

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
