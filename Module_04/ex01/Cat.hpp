#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Brain ;

class Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		virtual void	makeSound()const;
		Cat();
		Cat(const Cat &original);
		Cat &operator=(const Cat &original);
		virtual ~Cat();
};

#endif
