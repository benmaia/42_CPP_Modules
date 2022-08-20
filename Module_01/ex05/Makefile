NAME = Harl2.0

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRC = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(^) -o $(@)

fclean:
	rm -rf $(NAME)

re: fclean all
