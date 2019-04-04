NAME	= hellomake

CC	= g++
CFLAGS	= -Wall -Wextra -Werror

IDIR	= ../include
SDIR	= ./src
ODIR	= ./src/obj
LDIR	= ../lib

LIBS	= -lm

_DEPS	= header.hpp
DEPS	= $(patsubst %, $(IDIR)/%, $(_DEPS))

_SRC	= hellomake.cpp hellofunc.cpp
SRC	= $(patsubst %, $(SDIR)/%, $(_SRC))

_OBJ	= hellomake.o hellofunc.o
OBJ	= $(patsubst %, $(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: $(SRC) $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)


clean:
	rm -f $(ODIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
