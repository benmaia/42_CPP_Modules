#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal()
{
	setType("Dog");
	std::cout << getType() << " default constructor" << std::endl;
}

Dog::Dog(std::string name) : Animal()
{
	setType(name);
	std::cout << getType() << " name constructor" << std::endl;
}

Dog::Dog(const Dog &original) : Animal(original)
{
	*this = original;
}

Dog &Dog::operator=(const Dog &original)
{
	setType(original._type);
	return (*this);
}

Dog::~Dog()
{
	std::cout << getType() << " destructor called" << std::endl;
}

void	Dog::makeSound()
{
	Animal::makeSound();
}
