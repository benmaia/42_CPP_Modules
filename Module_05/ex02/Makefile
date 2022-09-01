NAME = 28B

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRCS = $(wildcard *.cpp)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)
	rm -rf *_shrubbery

re: clean all
