NAME	= megaphone

CC	= g++
CFLAGS	= -Wall -Wextra -Werror

IDIR	= ../inc
SDIR	= ./src
ODIR	= ./src/obj
LDIR	= ../lib

LIBS	=

_DEPS	= 
DEPS	= $(patsubst %, $(IDIR)/%, $(_DEPS))

_SRC	= megaphone.cpp
SRC	= $(patsubst %, $(SDIR)/%, $(_SRC))

_OBJ	= megaphone.o
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
