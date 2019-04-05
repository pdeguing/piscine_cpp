NAME	= phonebook

CC	= g++
CFLAGS	= -Wall -Wextra -Werror

IDIR	= ./inc
SDIR	= ./src
ODIR	= ./src/obj
LDIR	= ./lib

LIBS	= 

_DEPS	= Contact.class.hpp
DEPS	= $(patsubst %, $(IDIR)/%, $(_DEPS))

_SRC	= main.cpp Contact.class.cpp
SRC	= $(patsubst %, $(SDIR)/%, $(_SRC))

_OBJ	= $(_SRC:.cpp=.o) 
OBJ	= $(patsubst %, $(ODIR)/%, $(_OBJ))

$(OBJ): $(SRC)
	$(CC) -c $< $(DEPS) $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)


clean:
	rm -f $(ODIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
