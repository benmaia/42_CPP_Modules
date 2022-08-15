NAME = ex00

SRC = megaphone.cpp

OBJ = $(SRC:%.cpp = %.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -static-libsan -g

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf *.opp

fclean: clean
	rm -rf $(NAME)

re: fclean all
