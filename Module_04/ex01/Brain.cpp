#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain(const Brain &original)
{
	*this = original;
	std::cout << "Copy Brain constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

Brain	&Brain::operator=(const Brain &original)
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = original.ideas[i];
	return (*this);
}
