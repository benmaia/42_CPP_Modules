#include "Cat.hpp"

Cat::Cat() : Animal()
{
	setType("Cat");
	std::cout << getType() << " default constructor" << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	*this = original;
}

Cat &Cat::operator=(const Cat &original)
{
	setType(original._type);
	return (*this);
}

Cat::~Cat()
{
	std::cout << getType() << " destructor called" << std::endl;
}

void	Cat::makeSound()const
{
	std::cout << getType() << ": Miau" << std::endl;
}
