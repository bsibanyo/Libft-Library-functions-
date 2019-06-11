# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsibanyo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 15:24:05 by bsibanyo          #+#    #+#              #
#    Updated: 2019/06/11 09:33:44 by bsibanyo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SRCS = ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_putchar.c ./ft_strncat.c\
      ./ft_strcpy.c ./ft_tolower.c ./ft_isalpha.c ./ft_strncmp.c ./ft_memcmp.c \
      ./ft_isdigit.c ./ft_strlen.c ./ft_toupper.c ./ft_memcpy.c ./ft_memccpy.c ./ft_memset.c\
       ./ft_strchr.c ./ft_strcat.c ./ft_strcmp.c ./ft_atoi.c ./ft_strncpy.c ./ft_strlcat.c\
	   ./ft_strdup.c ./ft_bzero.c  ./ft_memchr.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c\
	   ./ft_striter.c ./ft_strclr.c ./ft_strdel.c ./ft_strnew.c ./ft_memdel.c ./ft_memalloc.c ./ft_striteri.c ./ft_memmove.c ./ft_striteri.c ./ft_strmap.c\

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
