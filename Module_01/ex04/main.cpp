#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

typedef std::string	string;

void	arg_checker ( int argc )
{
	if (argc != 4)
	{
		std::cout << "Please pass the right params" << std::endl;
		std::cout << "A filename, followed by string to replace and string you want!" << std::endl;
		exit (EXIT_FAILURE);
	}
}

int main ( int argc, char **argv )
{
	arg_checker(argc);
	std::ifstream	File (argv[1]);
	std::ofstream	newFile;
	string			line;

	if (File.is_open())
	{
		std::cout << "Opened file!" << std::endl;
		while (getline(File, line))
		{

		}
	}
	else
	{
		std::cout << "Unable to open file: " << argv[1] << std::endl;
		exit (EXIT_FAILURE);
	}
	return (0);
}
