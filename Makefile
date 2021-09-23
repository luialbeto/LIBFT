# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lalberto <lalberto@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 15:11:22 by araujo            #+#    #+#              #
#    Updated: 2021/09/20 08:49:50 by lalberto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS =	ft_toupper.c	\
		ft_tolower.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c

LIB = libft.h
OBJS = ${SRCS:%.c=%.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs ${NAME} ${OBJS}

${OBJS}:
	clang -I . -c ${FLAGS} ${SRCS}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${OBJS} ${NAME} *.gch

re: fclean all

run:
	clang ${FLAGS} main.c -L . lft

.PHONY: all clear fclean re run
