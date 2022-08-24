#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		std::string	getType(void);
		void	setType(std::string type);
		void	makeSound();
		Animal();
		Animal(const Animal &original);
		~Animal();
		Animal &operator=(const Animal &original);
};

#endif
