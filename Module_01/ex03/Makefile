NAME = Unnecessary_violence

CC = c++

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SRC = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(^) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
