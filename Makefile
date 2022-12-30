# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 03:15:49 by fakman            #+#    #+#              #
#    Updated: 2022/12/30 03:15:51 by fakman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

FILES	:= $(shell find . -type f -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) libft
	ar -rcs $(NAME) $(OBJ)

libft:
	@make -C libft
clean:
	@rm -f *.o
	@rm -f libft/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a

re: fclean all

.PHONY: all clean fclean re