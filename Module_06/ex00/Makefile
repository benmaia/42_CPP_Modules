NAME = scalar

CC = c++

FLAGS = -Wall -Wextra -Werror -fsanitize=address -g

SRCS = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(@)

clean:
	rm -f $(NAME)

re: clean all
