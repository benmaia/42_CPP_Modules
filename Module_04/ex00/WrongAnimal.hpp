#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		std::string	getType(void)const;
		void	setType(std::string type);
		void	makeSound() const;
		WrongAnimal();
		WrongAnimal(const WrongAnimal &original);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &original);
};

#endif
