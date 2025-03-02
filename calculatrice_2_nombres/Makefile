SRC = main.c fonction.c
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
HEADERS = header.h

all : $(NAME)

%.o : %.c
	$(CC) -o $@ $(CFLAGS) -c $<

$(NAME): $(OBJ)
	$(CC) -o $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
