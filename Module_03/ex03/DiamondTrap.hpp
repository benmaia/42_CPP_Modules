#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		void	whoAmI();
		virtual void	attack(const std::string &target);
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &original);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &original);
};

#endif
