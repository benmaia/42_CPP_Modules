#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	*this = original;
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &original)
{
	this->_type = original._type;
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destrocter called " << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal here" << std::endl;
}
