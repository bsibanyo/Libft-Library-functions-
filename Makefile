# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 15:24:05 by bsibanyo          #+#    #+#              #
#    Updated: 2019/06/03 17:05:00 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SRCS = ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_putchar.c \
      ./ft_strcpy.c ./ft_tolower.c ./ft_isalpha.c ./ft_strncmp.c\
      ./ft_isdigit.c ./ft_strlen.c ./ft_toupper.c \
       ./ft_strchr.c ./ft_strcat.c ./ft_strcmp.c ./ft_atoi.c ./ft_strncpy.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
