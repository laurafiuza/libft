# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfiuza <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/21 10:55:50 by lfiuza            #+#    #+#              #
#    Updated: 2018/06/21 12:08:21 by lfiuza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra - Wextra -I. -o
FILES = $(shell ls | grep -E ".+\.c")
OBJ = $(FILES:%.c=%.o)

all = $(NAME)

copy:
	@cp -f part_1/*.c .
	@cp -f part_2/*.c .

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	@gcc $(CFLAGS) $(NAME) $(FILES)

clean:
	@rm -f $(OBJ)
	@rm -f $(FILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all
