CC=GCC
FLAGS	= -Wall -Werror -Wextra -I./includes
AR=ar crs
RM=rm -rf
FILES 	= srcs/ft_putchar srcs/ft_strcmp \
		  srcs/ft_putstr srcs/ft_swap srcs/ft_strlen
SRC		= $(FILES:=.c)
OBJ		= $(FILES:=.o)
LIB=libft.a

.PHONY: all clean fclean re

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: fclean all
