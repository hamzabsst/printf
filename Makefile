# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbousset < hbousset@student.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 10:40:54 by hbousset          #+#    #+#              #
#    Updated: 2024/12/13 11:46:18 by hbousset         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c ft_putchar.c ft_puthex.c \
		ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunsignbr.c \
		ft_strlen.c

OBJ = ${SRC:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBC = ar rc

RM = rm -f

all: ${NAME}

${NAME}: ${OBJ}
		${LIBC} ${NAME} ${OBJ}

%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
