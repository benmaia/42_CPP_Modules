NAME = Sed_is_for_losers

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g

SRCS = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(^) -o $(@)

fclean:
	rm -rf $(NAME)
	rm -rf *.replace

re: fclean all
