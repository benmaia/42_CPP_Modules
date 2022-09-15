#include <cctype>
#include <cstdlib>
#include <iostream>
#include <string>

void	convertChar(std::string arg)
{
	if (!std::isprint(arg[0]))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << arg[0] << std::endl;
	std::cout << "int : " << static_cast<int>(arg[0]) << std::endl;
	std::cout << "float : " << static_cast<float>(arg[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(arg[0]) << std::endl;
}

void	convertFloat(std::string arg)
{
	char	*end;
	float	f = std::strtof(arg.c_str(), &end);
	if (!std::isprint(static_cast<int>(f)))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	std::cout << "int : " << static_cast<int>(f) << std::endl;
	std::cout << "float : " << (f)  << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(f) << std::endl;
}

void	convertDouble(std::string arg)
{
	char		*end;
	double	d = std::strtod(arg.c_str(), &end);
	if (!std::isprint(static_cast<int>(d)))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	std::cout << "int : " << static_cast<int>(d) << std::endl;
	std::cout << "float : " << static_cast<float>(d)  << "f" << std::endl;
	std::cout << "double : " << (d) << std::endl;
}

void	impossible(void)
{
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	convertInt(std::string arg)
{
	int i = std::atoi(arg.c_str());
	if (!std::isprint(static_cast<int>(i)))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int : " << (i) << std::endl;
	std::cout << "float : " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(i) << std::endl;
}

bool	convertExtra(std::string arg)
{
	if (!arg.compare("nan") || !arg.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
		return (true);
	}
	else if (!arg.compare("-inf") || !arg.compare("-inff"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
		return (true);
	}
	else if (!arg.compare("+inf") || !arg.compare("+inff"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : +inff" << std::endl;
		std::cout << "double : +inf" << std::endl;
		return (true);
	}
	return (false);
}

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please set only 1 argument" << std::endl;
		exit (EXIT_FAILURE);
	}
	//std::string arg(argv[argc - 1]);
	//if (convertExtra(arg))
		//return (0);
	//std::string::iterator i = arg.begin();
	//while (i != arg.end() && std::isdigit(*i)) i++;
	//if (i != arg.end())
	//{
		//if (arg.length() == 1)
			//convertChar(arg);
		//else if (*i == '.')
		//{
			//i++;
			//while (i != arg.end() && std::isdigit(*i)) i++;
			//if (*i == 'f')
				//convertFloat(arg);
			//else if (i == arg.end())
				//convertDouble(arg);
		//}
		//else
			//impossible();
		//return (0);
	//}
	//convertInt(arg);
	Convert Test (argv[1]);
	Test.convertArgToType();

	return (0);
}
