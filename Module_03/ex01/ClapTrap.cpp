#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "NULL";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackPoints = 0;
	std::cout << "Default constructor called" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackPoints = original._attackPoints;
	std::cout << "Copy constructor called" << std::endl; 
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_maxHitPoints = 10;
	this->_energyPoints = 10;
	this->_attackPoints = 0;
	std::cout << "ClapTrap: " << this->_name << " created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << this->_name << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " it's dead" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " it's not enable to attack! No energy points left..." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attackPoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " it's dead" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit points!" << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " have no hit points, it's dead" << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " it's dead" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " it's not enable to auto repair! No energy points left..." << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	if (this->_hitPoints >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "ClapTrap " << this->_name << " healed himself " << amount << " hit points!" << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

void	ClapTrap::setName(const std::string name)
{
	this->_name = name;
}

int	ClapTrap::getAttack()
{
	return (this->_attackPoints);
}

void ClapTrap::setAttack(unsigned int amount)
{
	this->_attackPoints = amount;
}
