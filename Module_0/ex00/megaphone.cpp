#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string	str;
	int			i = 0;
	size_t		j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < argc)
	{
		j = -1;
		str = argv[i];
		while (str[++j])
			std::cout << (char) std::toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
}
