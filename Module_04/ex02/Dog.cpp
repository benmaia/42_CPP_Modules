#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	setType("Dog");
	this->brain = new Brain();
	std::cout << getType() << " default constructor" << std::endl;
}

Dog::Dog(const Dog &original) : Animal(original)
{
	this->_type = original._type;
	this->brain = new Brain();
	std::cout << getType() << " copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &original)
{
	setType(original._type);
	this->brain = new Brain();
	return (*this);
}

Dog::~Dog()
{
	std::cout << getType() << " destructor called" << std::endl;
	delete (this->brain);
}

void	Dog::makeSound()const
{
	std::cout << getType() << ": Ouf ouf" << std::endl;
}
