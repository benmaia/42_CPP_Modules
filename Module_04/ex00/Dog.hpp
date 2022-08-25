#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		virtual void	makeSound()const;
		Dog();
		Dog(const Dog &original);
		Dog &operator=(const Dog &original);
		virtual ~Dog();
};

#endif
