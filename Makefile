# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 18:09:18 by houmanso          #+#    #+#              #
#    Updated: 2022/11/08 16:41:06 by houmanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libftprintf.a
FTOBJ  = ./libft/*.o
CFLAGS = -Wall -Wextra -Werror
SRC    = ft_printf.c \
		 ft_print_char.c \
		 ft_print_nbr.c \
		 ft_print_str.c \
		 ft_print_hex.c
OBJ    = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : lib_ft $(OBJ)
	ar rc $(NAME) $(FTOBJ) $(OBJ)

lib_ft :
	make -C "./libft/" all

%.o : %.c ft_printf.h
	cc $(CFLAGS) -c $<

clean :
	rm -f $(OBJ)
	make -C "./libft/" clean

fclean : clean
	rm -f $(NAME)
	make -C "./libft/" fclean

re : fclean all

.PHONY : all lib_ft clean fclean re