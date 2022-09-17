#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please set only 1 argument" << std::endl;
		exit (EXIT_FAILURE);
	}
	Convert conv (argv[1]);
	conv.convertArgToType();
	return (0);
}
