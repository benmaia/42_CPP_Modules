#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	setType("WrongCat");
	std::cout << getType() << " default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original)
{
	*this = original;
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
	setType(original._type);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "out\n";
	std::cout << getType() << " destructor called" << std::endl;
}

void	WrongCat::makeSound()const
{
	std::cout << getType() << ": Auf Auf " << std::endl;
}
