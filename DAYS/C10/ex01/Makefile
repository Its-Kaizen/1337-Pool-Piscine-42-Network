# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abmouhou <thelegendofdesigner@gmail.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 08:32:57 by abmouhou          #+#    #+#              #
#    Updated: 2023/08/12 08:32:57 by abmouhou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
INCLUDES=-I./includes
SRCS=$(wildcard srcs/*.c)
OBJS=$(SRCS:.c=.o)
BIN=ft_cat

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(INCLUDES) $(FLAGS) $(OBJS) -o $(BIN)
%.o: %.c ft_cat.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(BIN)

.PHONY: all clean fclean