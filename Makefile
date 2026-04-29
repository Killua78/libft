# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = main.c libft.h
OBJECTS = $(SOURCES:.c=.o)
TARGET = 

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

