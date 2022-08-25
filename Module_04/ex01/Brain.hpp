#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string.h>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &original);
		~Brain();
		Brain &operator=(const Brain &original);
};

#endif
