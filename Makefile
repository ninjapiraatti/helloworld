
NAME = bin/helloworld

SRCS = src/main.c \
	   src/rng.c \
	   src/hyphens.c \
	   src/up_downer.c \
	   src/songofmypeople.c \
	   src/inithello.c \

OBJS = main.o \
	   rng.o \
	   hyphens.o \
	   up_downer.o \
	   songofmypeople.o \
	   inithello.o \

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
