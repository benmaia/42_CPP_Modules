#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

typedef std::string	string;

void	checker_args(int argc)
{
	if (argc != 4)
	{
		std::cout << "Please pass the right arguments!" << std::endl;
		std::cout << "1st -> Filename, 2nd String to be replaces, 3th String to replace" << std::endl;
		exit (EXIT_FAILURE);
	}
}

string	read_file(string filename)
{
	std::ifstream file(filename.c_str());
	string	tmp;
	string	replace;

	if (!file.is_open())
	{
		std::cout << "Error opening the file!" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
		while(std::getline(file, tmp))
			replace.append(tmp + "\n");
	file.close();
	return (replace);
}

string	replace_text(string text, string replace, string new_str)
{
	for (int i = 0; i < (int)text.length(); i++)
	{
		if (!text.compare(i, replace.length(), replace))
		{
			text.erase(i, replace.length());
			text.insert(i, new_str);
		}
	}
	return (text);
}

void	write_file(string text, string filename)
{
	string	newFile;

	newFile = filename.append(".replace");
	std::ofstream file(newFile.c_str());
	if (!file.is_open())
	{
		std::cout << "Error creating the file!" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
		file << text;
}

int main( int argc, char **argv )
{
	string	text;

	checker_args(argc);
	text = read_file(argv[1]);
	text = replace_text(text, argv[2], argv[3]);
	write_file(text, argv[1]);
	return (0);
}
