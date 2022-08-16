NAME = phonebook

CC = c++

SRC = $(wildcard *.cpp)

FLAGS = -Wall -Wextra -Werror -fsanitize=address -static-libsan -g

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	@rm -rf $(NAME)

re: fclean all
