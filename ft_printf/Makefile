# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcavanna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 16:40:17 by gcavanna          #+#    #+#              #
#    Updated: 2022/12/13 20:20:20 by gcavanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   =        libftprintf.a

SRC    =        ft_formats.c ft_printf.c ft_printf_imports.c ft_printf_utils.c ft_print_hex.c \
                ft_print_ptr.c ft_print_unsigned.c ft_putchar_fd.c

OBJ    =        $(SRC:.c=.o)

CC     =        gcc
CFLAGS =        -Wall -Werror -Wextra

all:            $(NAME)

$(NAME):        $(OBJ)
			$(AR) -r libftprintf.a $?

%.o: %.c
		$(CC) -c $(CFLAGS) $?

clean:
		rm -f $(OBJ)

fclean:         clean
			rm -f $(NAME)

re:             fclean all

.PHONY:		all clean fclean re

