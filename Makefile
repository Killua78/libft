# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_itoa.c ft_bzero.c
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
