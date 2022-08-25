#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		std::string	getType(void)const;
		void	setType(std::string type);
		virtual void	makeSound() const = 0;
		Animal();
		Animal(const Animal &original);
		virtual ~Animal();
		Animal &operator=(const Animal &original);
};

#endif
