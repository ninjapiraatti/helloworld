# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlouekar <tlouekar@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/01 14:57:04 by tlouekar          #+#    #+#              #
#    Updated: 2020/05/22 13:45:29 by tlouekar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bin/helloworld

SRCS = src/main.c \
	   src/rng.c \
	   src/hyphens.c \
	   src/up_downer.c \
	   src/songofmypeople.c \

OBJS = main.o \
	   rng.o \
	   hyphens.o \
	   up_downer.o \
	   songofmypeople.o \

INCS = -I ./inc

CFLAGS = -g

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRCS) $(INCS)
	gcc $(CFLAGS) $(INCS) $(OBJS) -o $(NAME)

debug:

.PHONY: clean fclean re all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
