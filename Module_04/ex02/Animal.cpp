#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(const Animal &original)
{
	*this = original;
	std::cout << "Copy animal constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &original)
{
	this->_type = original._type;
	std::cout << "Copy assignment operator animal called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destrocter called " << std::endl;
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}
