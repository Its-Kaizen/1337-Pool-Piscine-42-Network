# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 08:31:09 by abmouhou          #+#    #+#              #
#    Updated: 2023/08/12 08:31:09 by abmouhou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=-I includes
SRCS=$(wildcard srcs/*)
OBJS=$(notdir $(SRCS:.c=.o))
BIN=ft_display_file

.PHONY: all clean fclean

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(INCLUDES) $(FLAGS) $? -o $@

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	rm $(OBJS)

fclean: clean
	rm $(BIN)