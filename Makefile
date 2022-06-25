##
## EPITECH PROJECT, 2021
## makefile for dante's star project
## File description:
## Makefile
##

CC		=	gcc

CFLAGS	=	-g3 -W -Wall -Wextra -Iinclude/

SRC		=	$(wildcard src/*.c) \
			$(wildcard lib/*.c)

OBJ		=	$(SRC:.c=.o)

TARGET	=	tetris

all:	$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)
	$(RM) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)
	rm -f a.out

re: fclean all
