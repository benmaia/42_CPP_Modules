#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: " << this->_name << " default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	FragTrap f(name);
	ScavTrap s(name);
	this->_name = name;
	ClapTrap::_name = (name + "_clap_name");
	this->_hitPoints = f.getHeatlh();
	this->_maxHitPoints = f.getHeatlh();
	this->_energyPoints = s.getEnergy();
	this->_attackPoints = f.getAttack();
	std::cout << "DiamondTrap: " << this->_name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
	*this = original;
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
