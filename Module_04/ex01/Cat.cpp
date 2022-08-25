#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	setType("Cat");
	this->brain = new Brain();
	std::cout << getType() << " default constructor" << std::endl;
}

Cat::Cat(const Cat &original) : Animal(original)
{
	this->brain = new Brain();
	*this = original;
	std::cout << getType() << " copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &original)
{
	setType(original._type);
	this->brain = new Brain();
	return (*this);
}

Cat::~Cat()
{
	std::cout << getType() << " destructor called" << std::endl;
	delete (this->brain);
}

void	Cat::makeSound()const
{
	std::cout << getType() << ": Miau" << std::endl;
}
