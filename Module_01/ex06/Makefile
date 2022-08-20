NAME = harlFilter

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g

SRCS = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(^) -o $(@)

fclean:
	rm -rf $(NAME)

re: fclean all
