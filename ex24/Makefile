.PHONY: all clean fclean re

PROV = -Wall -Wextra -Werror
LIB = libft.a
EXEC = program
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(LIB)

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)
$(OBJ): $(SRC)
	gcc $(PROV) -I ./includes -c $(SRC)

test: re
	gcc -I ./includes  main.c -L. -lft -o $(EXEC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)
	
re: fclean all
