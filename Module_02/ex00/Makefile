NAME = fixedPoints

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRCS = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(^) -o $(@)

clean:
	rm -f $(NAME)

re: clean all
