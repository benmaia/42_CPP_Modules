#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	private:
		std::string	_type;
		std::string	_name;
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_attackPoints;

	public:
		void	attack(const std::string &target);
		void	takeDamage(unsigned int ammount);
		void	beRepaired(unsigned int ammount);
		std::string	getType(void);
		void	setType(const std::string name);
		std::string	getName(void);
		void	setName(const std::string name);
		int	getAttack(void);
		void	setAttack(unsigned int amount);
		int	getHeatlh(void);
		void	setHealth(unsigned int amount);
		int	getEnergy(void);
		void	setEnergy(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &original);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &original);
};

#endif
