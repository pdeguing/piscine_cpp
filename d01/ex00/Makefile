NAME	= pony

CC	= g++ -std=c++11
CFLAGS	= -Wall -Wextra -Werror
SRC	= Pony.cpp main.cpp
OBJ	= $(SRC:.cpp=.o)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -o $@

all: $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all
