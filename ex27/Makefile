# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcatina <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/10 22:26:36 by fcatina           #+#    #+#              #
#    Updated: 2019/04/10 22:50:20 by fcatina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FLAGS = -Wall -Werror -Wextra

SRC = main.c
OBJ = main.o

EXEC = ft_display_file

.PHONY: all clean fclean re

all: $(EXEC)

$(EXEC): $(OBJ)
		gcc $(OBJ) -o $(EXEC)
$(OBJ): $(SRC)
		gcc $(C_FPLAGS) -I. -c $(SRC)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(EXEC)
re: fclean all
