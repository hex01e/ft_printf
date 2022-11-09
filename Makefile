# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 18:09:18 by houmanso          #+#    #+#              #
#    Updated: 2022/11/10 00:44:36 by houmanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRC    = ft_printf.c \
		 ft_print_char.c \
		 ft_print_nbr.c \
		 ft_print_str.c \
		 ft_print_hex.c \
		 ft_print_p.c 
OBJ    = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)


%.o : %.c ft_printf.h
	cc $(CFLAGS) -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re