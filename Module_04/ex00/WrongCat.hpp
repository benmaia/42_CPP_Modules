#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void	makeSound()const;
		WrongCat();
		WrongCat(const WrongCat &original);
		WrongCat &operator=(const WrongCat &original);
		~WrongCat();
};

#endif
