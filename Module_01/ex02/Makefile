NAME = HI_THIS_IS_BRAIN

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRC = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(^) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
