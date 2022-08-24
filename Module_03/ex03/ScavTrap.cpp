#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	setType("ScavTrap");
	setName("NULL");
	setHealth(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "ScavTrap: " << getName() << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setType("ScavTrap");
	setName(name);
	setHealth(100);
	setEnergy(50);
	setAttack(20);
	std::cout << "ScavTrap: " << getName() << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap(original)
{
	setType(original._type);
	setName(original._name);
	setHealth(original._hitPoints);
	setEnergy(original._energyPoints);
	setAttack(original._attackPoints);
	std::cout << "ScavTrap:" << getName() << " copy constructor called" << std::endl; 
}

ScavTrap &ScavTrap::operator=(const ScavTrap &original)
{
	ClapTrap::operator=(original);
	std::cout << "ScavTrap: Assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << getName() << " destroyed!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << getName() << " is now in Gate keeper mode." << std::endl;
}
