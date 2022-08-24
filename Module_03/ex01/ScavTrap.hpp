#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		void guardGate();
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &original);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &original);
};

#endif
