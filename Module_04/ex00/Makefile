NAME = Polymorphism

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRCS = $(wildcard *.cpp)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
