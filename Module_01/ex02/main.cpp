#include <iostream>
#include <string>

typedef std::string	string;

int main( void )
{
	string	str =  "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
