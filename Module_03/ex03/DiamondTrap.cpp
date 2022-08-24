#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "NULL";
	ClapTrap::_name = (this->_name + "_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
	std::cout << "DiamondTrap: " << this->_name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = (name + "_clap_name");
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = FragTrap::_maxHitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackPoints = FragTrap::_attackPoints;
	std::cout << FragTrap::_attackPoints << "   ================\n";
	std::cout << "DiamondTrap: " << this->_name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	this->_name = original._name;
	ClapTrap::_name = (this->_name  + "_clap_name");
	this->_hitPoints = original._hitPoints;
	this->_maxHitPoints = original._maxHitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackPoints = original._attackPoints;
	std::cout << "DiamondTrap:" << this->_name << " copy constructor called" << std::endl; 
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &original)
{
	this->_name = original._name;
	ClapTrap::_name = (this->_name + "_clap_name");
	this->_hitPoints = original._hitPoints;
	this->_maxHitPoints = original._maxHitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackPoints = original._attackPoints;
	std::cout << "DiamondTrap: Assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << this->_name << " destroyed!" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap: " << this->_name << "\nClapTrap: " << ClapTrap::_name << std::endl;
}
