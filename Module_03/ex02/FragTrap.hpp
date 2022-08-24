#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		void highFivesGuys(void);
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &original);
		~FragTrap();
		FragTrap &operator=(const FragTrap &original);
};

#endif
