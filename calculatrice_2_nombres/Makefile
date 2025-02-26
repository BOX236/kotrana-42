SRC = main.c fonction.c
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
HEADERS = includes

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
