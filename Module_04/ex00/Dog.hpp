#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		virtual void	makeSound();
		Dog();
		Dog(std::string name);
		Dog(const Dog &original);
		~Dog();
		Dog &operator=(const Dog &original);
};

#endif
